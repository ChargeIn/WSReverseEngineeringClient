//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_140419cb0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong **pplVar4;
    longlong lVar5;

    pplVar4 = (longlong **)FUN_140417660();
    lVar5 = 0;
    bVar3 = 0;
    if (pplVar4 != (longlong **)0x0) {
        if (*pplVar4 != (longlong *)0x0) {
            lVar5 = **pplVar4;
        }
        if (lVar5 != 0) {
            if (((*(uint *)(*(longlong *)(lVar5 + 0x40) + 0x14c) & 0x40000) != 0) ||
                ((*(byte *)(lVar5 + 0x80) & 0x40) != 0)) {
                bVar3 = 1;
            }
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)bVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419d40(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    undefined8 uVar4;

    iVar3 = FUN_140417b50(param_1,1);
    if (iVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = FUN_1400b5df0(DAT_140c658f0,iVar3);
    iVar3 = FUN_1403ad020(DAT_140c65898,uVar4);
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 == 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419dd0(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    bool bVar3;
    bool bVar4;
    byte bVar5;
    longlong **pplVar6;
    longlong lVar7;

    lVar7 = 0;
    bVar4 = false;
    pplVar6 = (longlong **)FUN_140417660(param_1,1);
    bVar3 = bVar4;
    if (pplVar6 != (longlong **)0x0) {
        if (*pplVar6 != (longlong *)0x0) {
            lVar7 = **pplVar6;
        }
        if (lVar7 != 0) {
            lVar1 = *(longlong *)(lVar7 + 0x40);
            if (lVar1 == 0) {
                bVar5 = 6;
            }
            else {
                bVar5 = -((*(uint *)(lVar1 + 0x14c) & 0x10000) != 0) & 0x9c;
            }
            bVar3 = bVar5 == 0;
            if (((*(uint *)(lVar1 + 0x154) & 0x100) != 0) && (*(int *)(lVar7 + 0x20) == 0)) {
                bVar3 = bVar4;
            }
        }
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419e70(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong **pplVar4;
    longlong lVar5;

    pplVar4 = (longlong **)FUN_140417660(param_1,1);
    lVar5 = 0;
    if (pplVar4 != (longlong **)0x0) {
        if (*pplVar4 != (longlong *)0x0) {
            lVar5 = **pplVar4;
        }
        if (lVar5 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(*(longlong *)(lVar5 + 0x40) + 0x1c8);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419ef0(longlong param_1)

{
    uint uVar1;
    longlong **pplVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    ulonglong local_10;

    pplVar2 = (longlong **)FUN_140417660(param_1,1);
    if (pplVar2 != (longlong **)0x0) {
        pplVar2 = (longlong **)*pplVar2;
        if (pplVar2 != (longlong **)0x0) {
            pplVar2 = (longlong **)*pplVar2;
        }
        if (pplVar2 != (longlong **)0x0) {
            local_18 = 0;
            local_10 = 0;
            local_18 = (*(code *)(*pplVar2)[6])(pplVar2);
            uVar1 = 1;
            if (*(uint *)(pplVar2 + 0xf) != 0) {
                uVar1 = *(uint *)(pplVar2 + 0xf);
            }
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                uVar1 = FUN_140056d60(param_1,2);
                local_10 = local_10 & 0xffffffff00000000 | (ulonglong)uVar1;
            }
            else {
                local_10 = local_10 & 0xffffffff00000000 | (ulonglong)uVar1;
            }
            FUN_1403f4900(DAT_140c65898,0x12a,&local_18);
        }
    }
    return 1;
}



undefined8 FUN_140419fb0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    short sVar6;

    iVar4 = FUN_140417b50();
    lVar3 = DAT_140c65898;
    if (iVar4 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_1400b5df0(DAT_140c658f0,iVar4,0);
    if ((lVar5 == 0) || (*(uint *)(lVar5 + 0x1c8) == 0)) {
        sVar6 = 0;
    }
    else {
        sVar6 = *(short *)(lVar3 + 0x148 + (ulonglong)*(uint *)(lVar5 + 0x1c8) * 2);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(sVar6 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041a050(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong local_18;
    undefined8 local_10;

    puVar3 = (undefined4 *)FUN_140417bf0(param_1,1);
    lVar1 = DAT_140c65898;
    if (puVar3 != (undefined4 *)0x0) {
        local_10 = 0;
        local_18 = (ulonglong)(uint)puVar3[0x72];
        lVar4 = FUN_1400b5df0(DAT_140c658f0,*puVar3,0);
        if ((lVar4 == 0) || (*(uint *)(lVar4 + 0x1c8) == 0)) {
            uVar2 = 0;
        }
        else {
            uVar2 = (uint)*(ushort *)(lVar1 + 0x148 + (ulonglong)*(uint *)(lVar4 + 0x1c8) * 2);
        }
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar2 = FUN_140056d60(param_1,2);
            local_18 = local_18 & 0xffffffff | (ulonglong)uVar2 << 0x20;
        }
        else {
            local_18 = local_18 & 0xffffffff | (ulonglong)uVar2 << 0x20;
        }
        local_10 = 0xffffffff0000012c;
        FUN_1403f4900(DAT_140c65898,0x184,&local_18);
    }
    return 1;
}



undefined8 FUN_14041a130(void)

{
    longlong lVar1;

    lVar1 = FUN_140417bf0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x1e4) != 0)) &&
        (*(longlong **)(DAT_140c63628 + 0x2d0) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(DAT_140c63628 + 0x2d0) + 0x10))();
    }
    return 0;
}



undefined8 FUN_14041a190(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_140417b50(param_1,1);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041a1d0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    uint uVar3;
    longlong **pplVar4;
    int *piVar5;
    undefined local_res10 [24];

    pplVar4 = (longlong **)FUN_140417660(param_1,1);
    if (pplVar4 != (longlong **)0x0) {
        pplVar4 = (longlong **)*pplVar4;
        if (pplVar4 != (longlong **)0x0) {
            pplVar4 = (longlong **)*pplVar4;
        }
        if (pplVar4 != (longlong **)0x0) {
            piVar5 = (int *)(*(code *)(*pplVar4)[4])(pplVar4,local_res10);
            if (*piVar5 < 300) {
                uVar3 = (uint)CONCAT41(*piVar5,*(undefined *)(piVar5 + 1)) & 0xffff;
            }
            else {
                uVar3 = 0xffffffff;
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)uVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14041aa90(longlong param_1)

{
    uint uVar1;
    float fVar2;
    double *pdVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    uint uVar9;
    float *pfVar10;
    uint *puVar11;
    longlong lVar12;
    ulonglong uVar13;
    undefined8 *puVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined local_58 [8];
    longlong local_50;

    lVar5 = FUN_140417bf0(param_1,1);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x1c4) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar6 = FUN_140244280();
    if (lVar6 != 0) {
        uVar9 = 0;
        puVar11 = (uint *)(lVar6 + 0xc);
        do {
            uVar1 = *puVar11;
            if (((10 < uVar1) && (uVar1 != 0xe)) && (uVar1 < 0x11)) {
                lVar6 = FUN_140244280(*(undefined4 *)(lVar5 + 0x1c4));
                if (lVar6 == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                }
                else {
                    fVar15 = 1.0;
                    fVar16 = 1.0;
                    fVar17 = 1.0;
                    lVar5 = FUN_140244280(*(undefined4 *)(lVar5 + 0x1c4));
                    if (lVar5 != 0) {
                        pfVar10 = (float *)(lVar5 + 0x20);
                        lVar5 = 5;
                        do {
                            fVar2 = pfVar10[-5];
                            if (fVar2 == 1.541428e-44) {
                                fVar16 = fVar16 * *pfVar10;
                            }
                            else if (fVar2 == 1.681558e-44) {
                                fVar15 = fVar15 * *pfVar10;
                            }
                            else if (fVar2 == 1.821688e-44) {
                                fVar17 = fVar17 * *pfVar10;
                            }
                            pfVar10 = pfVar10 + 1;
                            lVar5 = lVar5 + -1;
                        } while (lVar5 != 0);
                    }
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    uVar7 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar14 + 1) = 5;
                    *puVar14 = uVar7;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400578c0(param_1);
                    uVar13 = (ulonglong)*(uint *)(lVar6 + 4);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1,puVar14,L"eTradeskillid",uVar13 & 0xffffffff);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_58,L"fCraftMultiplier");
                    lVar6 = -1;
                    if (*(longlong *)(lVar5 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar12 = -1;
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar12) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                    pdVar3 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar15;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_58,L"fCritMultiplier");
                    if (*(longlong *)(lVar5 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar12 = -1;
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar12) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                    pdVar3 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar16;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_58,L"fDiscoveryMultiplier");
                    lVar5 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        do {
                            lVar6 = lVar6 + 1;
                        } while (*(char *)(lVar5 + lVar6) != '\0');
                        FUN_140058710(param_1,lVar5,lVar6);
                    }
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                    pdVar3 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar17;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar14 = *(undefined8 **)(param_1 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400579e0(param_1);
                }
                return 1;
            }
            uVar9 = uVar9 + 1;
            puVar11 = puVar11 + 1;
        } while (uVar9 < 5);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041af50(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140417bf0(param_1,1);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x154) & 0x100) != 0)) {
        iVar1 = *(int *)(lVar4 + 0x1a0);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041afd0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_140417bf0(param_1,1);
    FUN_140417c90(param_1,1);
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
    }
    else {
        iVar3 = FUN_1403b5400();
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041b050(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    plVar3 = (longlong *)FUN_140417660(param_1,1);
    if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar3;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)*puVar4;
        }
        if (puVar4 != (undefined8 *)0x0) {
            iVar2 = FUN_1403b5360();
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041b0f0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    plVar3 = (longlong *)FUN_140417660(param_1,1);
    if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar3;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)*puVar4;
        }
        if (puVar4 != (undefined8 *)0x0) {
            iVar2 = FUN_1403b54a0();
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14041b9c0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140417bf0(param_1,1);
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 0x1a4);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041ba30(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    plVar3 = (longlong *)FUN_140417660(param_1,1);
    if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar3;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)*puVar4;
        }
        if (puVar4 != (undefined8 *)0x0) {
            iVar1 = *(int *)((longlong)puVar4 + 0x7c);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041bab0(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    int iVar3;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = 0.0;
    }
    else {
        iVar3 = *(int *)(lVar1 + 0x1a0);
        pdVar2 = *(double **)(param_1 + 0x10);
        if ((*(byte *)(lVar1 + 0x154) & 4) == 0) {
            iVar3 = 1;
        }
        *pdVar2 = (double)iVar3;
    }
    *(undefined4 *)(pdVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



int FUN_14041bb20(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    double *pdVar5;

    lVar3 = FUN_140417bf0(param_1,1);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x1c8) != 0)) {
        pdVar5 = *(double **)(param_1 + 0x10);
        iVar4 = 0;
        iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x19);
        *(undefined4 *)(pdVar5 + 1) = 3;
        *pdVar5 = (double)iVar2;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return iVar4 + 1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041bbb0(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    double *pdVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong *plVar7;
    longlong *plVar6;

    plVar6 = (longlong *)0x0;
    plVar5 = (longlong *)0x0;
    pplVar4 = (longlong **)FUN_140417660(param_1,1);
    plVar7 = plVar6;
    if ((pplVar4 != (longlong **)0x0) && (plVar2 = *pplVar4, plVar2 != (longlong *)0x0)) {
        if (*plVar2 == 0) {
            if (((*(int *)(plVar2 + 0x97) == 0) || (*(int *)((longlong)plVar2 + 0x474) == 0)) ||
                (plVar2 == (longlong *)0xfffffffffffffb90)) {
                if (((*(int *)(plVar2 + 0x96) == 0) || (*(int *)(plVar2 + 0x83) == 0)) ||
                    (plVar2 + 0x83 == (longlong *)0x0)) {
                    plVar7 = plVar5;
                    if (((*(int *)((longlong)plVar2 + 0x4b4) != 0) && (*(int *)(plVar2 + 99) != 0)) &&
                        (plVar2 + 99 != (longlong *)0x0)) {
                        if ((*(int *)((longlong)plVar2 + 0x4b4) == 0) ||
                            (plVar7 = plVar2 + 99, *(int *)(plVar2 + 99) == 0)) {
                            plVar7 = plVar6;
                        }
                        plVar7 = (longlong *)(ulonglong)*(uint *)(plVar7 + 4);
                    }
                }
                else {
                    if ((*(int *)(plVar2 + 0x96) == 0) ||
                        (plVar7 = plVar2 + 0x83, *(int *)(plVar2 + 0x83) == 0)) {
                        plVar7 = plVar6;
                    }
                    plVar7 = (longlong *)(ulonglong)*(uint *)((longlong)plVar7 + 0x44);
                }
            }
            else {
                if ((*(int *)(plVar2 + 0x97) != 0) && (*(int *)((longlong)plVar2 + 0x474) != 0)) {
                    plVar6 = plVar2 + 0x8e;
                }
                plVar7 = (longlong *)(ulonglong)*(uint *)((longlong)plVar6 + 4);
            }
        }
        else {
            uVar1 = *(uint *)(*plVar2 + 0x78);
            plVar7 = (longlong *)0x1;
            if (uVar1 != 0) {
                plVar7 = (longlong *)(ulonglong)uVar1;
            }
        }
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(int)plVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



int FUN_14041bf80(longlong param_1)

{
    float fVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    undefined local_68 [16];
    longlong local_58;
    undefined8 local_50;
    undefined8 local_48;

    lVar2 = FUN_140417bf0(param_1,1);
    lVar3 = FUN_140417c90(param_1);
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (lVar3 == 0) {
        lVar3 = lVar2 + 8;
    }
    iVar6 = 0;
    local_50 = 1;
    local_58 = 0;
    local_48 = 0;
    lVar2 = FUN_1403d90d0();
    fVar8 = 1.0;
    lVar4 = FUN_140243a00();
    if (lVar4 == 0) {
        if (lVar2 != 0) {
            fVar8 = *(float *)(lVar2 + 0x36dc);
        }
    }
    else {
        local_68 = ZEXT816(*(ulonglong *)(lVar4 + 0xc));
        fVar8 = (float)FUN_1405e6230(DAT_140c65898 + 0x1698,0xe,local_68);
    }
    local_58 = *(longlong *)(lVar3 + 0x28);
    fVar7 = 9.223372e+18;
    if (0 < local_58) {
        local_50 = *(undefined8 *)(lVar3 + 0x30);
        fVar1 = fVar8;
        if ((int)((uint)fVar8 ^ 0x3f800000) < 0) {
            fVar1 = (float)(-0x80000000 - (int)fVar8);
        }
        uVar5 = (int)((int)fVar1 + 0xc0800000U) >> 0x1f;
        if ((0x54 < (int)(((int)fVar1 + 0xc0800000U ^ uVar5) - uVar5)) &&
            (*(int *)(undefined8 *)(lVar3 + 0x30) == 1)) {
            lVar2 = 0;
            fVar1 = (float)local_58 * fVar8;
            if ((9.223372e+18 <= fVar1) && (fVar1 = fVar1 - 9.223372e+18, fVar1 < 9.223372e+18)) {
                lVar2 = -0x8000000000000000;
            }
            local_58 = (longlong)fVar1 + lVar2;
        }
        iVar6 = 1;
        FUN_140501210();
    }
    local_58 = *(longlong *)(lVar3 + 0x40);
    if (0 < local_58) {
        local_50 = *(undefined8 *)(lVar3 + 0x48);
        fVar1 = fVar8;
        if ((int)((uint)fVar8 ^ 0x3f800000) < 0) {
            fVar1 = (float)(-0x80000000 - (int)fVar8);
        }
        uVar5 = (int)((int)fVar1 + 0xc0800000U) >> 0x1f;
        if ((0x54 < (int)(((int)fVar1 + 0xc0800000U ^ uVar5) - uVar5)) &&
            (*(int *)(undefined8 *)(lVar3 + 0x48) == 1)) {
            lVar3 = 0;
            fVar8 = (float)local_58 * fVar8;
            if ((fVar7 <= fVar8) && (fVar8 = fVar8 - fVar7, fVar8 < fVar7)) {
                lVar3 = -0x8000000000000000;
            }
            local_58 = (longlong)fVar8 + lVar3;
        }
        iVar6 = iVar6 + 1;
        FUN_140501210(param_1,&local_58);
    }
    return iVar6;
}



undefined8 FUN_14041c710(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        FUN_140058710(param_1,&DAT_1409d091a,0);
        return 1;
    }
    lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0x1e8));
    if (*(longlong *)(lVar1 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar2) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14041ca00(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140417bf0(param_1,1);
    if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x1d0);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041ca70(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0();
    if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x14c);
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = uVar1 >> 0xe & 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041cb40(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    longlong *plVar6;

    plVar3 = (longlong *)FUN_140417660(param_1,1);
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if ((plVar3 != (longlong *)0x0) && ((longlong **)*plVar3 != (longlong **)0x0)) {
        plVar6 = *(longlong **)*plVar3;
    }
    puVar4 = (undefined4 *)FUN_1406622c0(param_1,2);
    if (puVar4 != (undefined4 *)0x0) {
        plVar5 = (longlong *)FUN_1403d90d0(DAT_140c65898,*puVar4);
    }
    if ((plVar6 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        iVar2 = (**(code **)(*plVar6 + 0x68))(plVar6,plVar5 + 0x34,0);
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar2 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041cbf0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_140417bf0(param_1,1);
    if (lVar4 != 0) {
        iVar3 = (**(code **)(*DAT_140c65bb8 + 8))(DAT_140c65bb8,lVar4);
        bVar2 = 1;
        if (iVar3 != 0) goto LAB_14041cc27;
    }
    bVar2 = 0;
    LAB_14041cc27:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041cd30(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    double *pdVar4;
    uint uVar5;
    undefined8 *puVar6;

    plVar3 = (longlong *)FUN_140417660();
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    puVar6 = (undefined8 *)*plVar3;
    if (puVar6 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar6;
    }
    if (puVar6 == (undefined8 *)0x0) {
        return 0;
    }
    if (((~(*(uint *)(puVar6 + 0x10) >> 3) & 1) != 0) &&
        (iVar2 = FUN_14018cdf0(), 0 < *(int *)((longlong)puVar6 + 0xec) - iVar2)) {
        iVar2 = FUN_14018cdf0();
        uVar5 = *(int *)((longlong)puVar6 + 0xec) - iVar2;
        if (uVar5 != 0) {
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            uVar1 = (ulonglong)uVar5 / 1000;
            iVar2 = (int)(uVar1 / 0x3c);
            *pdVar4 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar4 = *(double **)(param_1 + 0x10);
            *pdVar4 = (double)((int)uVar1 + iVar2 * -0x3c);
            goto LAB_14041ce05;
        }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    pdVar4 = *(double **)(param_1 + 0x10);
    *pdVar4 = 0.0;
    LAB_14041ce05:
    *(undefined4 *)(pdVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 2;
}



undefined8 FUN_14041ce30(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140417bf0(param_1,1);
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 0x1a8);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    if (iVar1 == 0) {
        *pdVar2 = 0.0;
    }
    else {
        *pdVar2 = (double)iVar1;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 2;
}



undefined8 FUN_14041ceb0(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    double *pdVar5;
    undefined8 *puVar6;

    plVar4 = (longlong *)FUN_140417660();
    if (plVar4 == (longlong *)0x0) {
        return 0;
    }
    puVar6 = (undefined8 *)*plVar4;
    if (puVar6 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar6;
    }
    if (puVar6 == (undefined8 *)0x0) {
        return 0;
    }
    iVar2 = FUN_14018cdf0();
    if (0 < *(int *)(puVar6 + 0x24) - iVar2) {
        iVar3 = FUN_14018cdf0();
        iVar2 = *(int *)(puVar6 + 0x24);
        if (iVar2 - iVar3 != 0) {
            pdVar5 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            uVar1 = (ulonglong)(uint)(iVar2 - iVar3) / 1000;
            iVar2 = (int)(uVar1 / 0x3c);
            *pdVar5 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar5 = *(double **)(param_1 + 0x10);
            *pdVar5 = (double)((int)uVar1 + iVar2 * -0x3c);
            goto LAB_14041cf76;
        }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    pdVar5 = *(double **)(param_1 + 0x10);
    *pdVar5 = 0.0;
    LAB_14041cf76:
    *(undefined4 *)(pdVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 2;
}



undefined8 FUN_14041cfa0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *(uint *)(lVar3 + 0x14c);
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar1 >> 6 & 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041d000(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *(uint *)(lVar3 + 0x14c);
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar1 >> 7 & 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14041d060(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong local_res10 [3];

    pplVar1 = (longlong **)FUN_140417660(param_1,1);
    if (pplVar1 != (longlong **)0x0) {
        pplVar1 = (longlong **)*pplVar1;
        if (pplVar1 != (longlong **)0x0) {
            pplVar1 = (longlong **)*pplVar1;
        }
        if (pplVar1 != (longlong **)0x0) {
            (*(code *)(*pplVar1)[6])();
            FUN_14018ded0(local_res10,"<I%I64x>");
            if (local_res10[0] != 0) {
                lVar3 = -1;
                do {
                    lVar3 = lVar3 + 1;
                } while (*(char *)(local_res10[0] + lVar3) != '\0');
                FUN_140058710(param_1,local_res10[0]);
                (**(code **)(*(longlong *)(local_res10[0] + -0x10) + 8))(local_res10[0] + -0x10);
                return 1;
            }
            goto LAB_14041d0b8;
        }
    }
    plVar2 = (longlong *)FUN_140417660(param_1,1);
    if ((((plVar2 == (longlong *)0x0) || (lVar3 = *plVar2, lVar3 == 0)) ||
         (*(int *)(lVar3 + 0x4b0) == 0)) ||
        ((*(int *)(lVar3 + 0x418) == 0 || ((int *)(lVar3 + 0x418) == (int *)0x0)))) {
        lVar3 = FUN_140417bf0(param_1,1);
        if (lVar3 == 0) {
            return 0;
        }
        FUN_14018ded0(local_res10,"<i%x>");
        if (local_res10[0] != 0) {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(local_res10[0] + lVar3) != '\0');
            LAB_14041d17a:
            FUN_140058710(param_1,local_res10[0]);
            (**(code **)(*(longlong *)(local_res10[0] + -0x10) + 8))(local_res10[0] + -0x10);
            return 1;
        }
    }
    else {
        FUN_14018ded0(local_res10,"<l%x>");
        if (local_res10[0] != 0) {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(local_res10[0] + lVar3) != '\0');
            goto LAB_14041d17a;
        }
    }
    LAB_14041d0b8:
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041d200(undefined8 param_1,int param_2)

{
    longlong lVar1;
    float fVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;

    if ((DAT_140c8ab54 & 1) == 0) {
        DAT_140c8ab54 = DAT_140c8ab54 | 1;
        _DAT_140c8ab5c = 0;
    }
    fVar7 = 0.0;
    if ((DAT_140c8ab54 & 2) == 0) {
        DAT_140c8ab54 = DAT_140c8ab54 | 2;
        _DAT_140c8ab2c = 0;
        _DAT_140c8ab34 = 0;
        _DAT_140c8ab3c = 0;
        _DAT_140c8ab4c = 0;
    }
    else if (_DAT_140c8ab44 != 0) goto LAB_14041d2b8;
    _DAT_140c8ab44 = 1;
    lVar1 = FUN_140200220(0x436);
    DAT_140c8ab40 = fVar7;
    if (lVar1 != 0) {
        DAT_140c8ab40 = *(float *)(lVar1 + 0x24);
    }
    LAB_14041d2b8:
    fVar2 = DAT_140c8ab40;
    if (_DAT_140c8ab3c == 0) {
        _DAT_140c8ab3c = 1;
        lVar1 = FUN_140200220(0x436);
        DAT_140c8ab38 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8ab38 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar8 = DAT_140c8ab38;
    if (_DAT_140c8ab34 == 0) {
        _DAT_140c8ab34 = 1;
        lVar1 = FUN_140200220(0x436);
        DAT_140c8ab30 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8ab30 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar5 = DAT_140c8ab30;
    if (_DAT_140c8ab2c == 0) {
        _DAT_140c8ab2c = 1;
        lVar1 = FUN_140200220(0x436);
        DAT_140c8ab28 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8ab28 = *(float *)(lVar1 + 0x18);
        }
    }
    fVar7 = DAT_140c8ab28;
    if (_DAT_140c8ab5c == 0) {
        _DAT_140c8ab5c = 1;
        lVar1 = FUN_140200220(0x436);
        DAT_140c8ab58 = 0;
        if (lVar1 != 0) {
            DAT_140c8ab58 = *(int *)(lVar1 + 4);
        }
    }
    fVar4 = (float)(ulonglong)(uint)(param_2 - DAT_140c8ab58);
    uVar3 = FUN_1408fbfc0(0x402df854,fVar4 * fVar5);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = (float)uVar3 * fVar7;
    fVar2 = (float)FUN_1408fbfc0(fVar4,fVar2);
    return CONCAT44(uVar6,fVar7 + fVar2 * fVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_14041d420(undefined8 param_1,float param_2,ulonglong param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    float fVar3;
    float fVar4;
    ulonglong local_res8;
    float local_res10;

    if ((DAT_140c8ab50 & 1) == 0) {
        DAT_140c8ab50 = DAT_140c8ab50 | 1;
        _DAT_140c8ab74 = 0;
    }
    fVar4 = 0.0;
    local_res8 = param_3;
    if ((DAT_140c8ab50 & 2) == 0) {
        DAT_140c8ab50 = DAT_140c8ab50 | 2;
    }
    else if (_DAT_140c8ab7c != 0) goto LAB_14041d4b2;
    _DAT_140c8ab7c = 1;
    lVar1 = FUN_140200220(0x4ec);
    DAT_140c8ab78 = fVar4;
    if (lVar1 != 0) {
        DAT_140c8ab78 = *(float *)(lVar1 + 0x1c);
    }
    LAB_14041d4b2:
    fVar3 = DAT_140c8ab78;
    if (_DAT_140c8ab74 == 0) {
        _DAT_140c8ab74 = 1;
        lVar1 = FUN_140200220(0x4ec);
        DAT_140c8ab70 = fVar4;
        if (lVar1 != 0) {
            DAT_140c8ab70 = *(float *)(lVar1 + 0x18);
        }
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    local_res10 = (fVar3 - DAT_140c8ab70) * param_2 + DAT_140c8ab70;
    puVar2 = (ulonglong *)&local_res10;
    if (local_res10 <= fVar4) {
        puVar2 = &local_res8;
    }
    return *(float *)puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_14041d540(undefined8 param_1,float param_2,ulonglong param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    float fVar3;
    float fVar4;
    ulonglong local_res8;
    float local_res10;

    if ((DAT_140c8ab60 & 1) == 0) {
        DAT_140c8ab60 = DAT_140c8ab60 | 1;
        _DAT_140c8ab6c = 0;
    }
    fVar4 = 0.0;
    local_res8 = param_3;
    if ((DAT_140c8ab60 & 2) == 0) {
        DAT_140c8ab60 = DAT_140c8ab60 | 2;
    }
    else if (_DAT_140c8ab04 != 0) goto LAB_14041d5d2;
    _DAT_140c8ab04 = 1;
    lVar1 = FUN_140200220(0x4ec);
    DAT_140c8ab00 = fVar4;
    if (lVar1 != 0) {
        DAT_140c8ab00 = *(float *)(lVar1 + 0x24);
    }
    LAB_14041d5d2:
    fVar3 = DAT_140c8ab00;
    if (_DAT_140c8ab6c == 0) {
        _DAT_140c8ab6c = 1;
        lVar1 = FUN_140200220(0x4ec);
        DAT_140c8ab68 = fVar4;
        if (lVar1 != 0) {
            DAT_140c8ab68 = *(float *)(lVar1 + 0x20);
        }
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    local_res10 = (fVar3 - DAT_140c8ab68) * param_2 + DAT_140c8ab68;
    puVar2 = (ulonglong *)&local_res10;
    if (local_res10 <= fVar4) {
        puVar2 = &local_res8;
    }
    return *(float *)puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_14041d660(undefined8 param_1,float param_2,ulonglong param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    float fVar3;
    float fVar4;
    ulonglong local_res8;
    float local_res10;

    if ((DAT_140c8ab08 & 1) == 0) {
        DAT_140c8ab08 = DAT_140c8ab08 | 1;
        _DAT_140c8aaf4 = 0;
    }
    fVar4 = 0.0;
    local_res8 = param_3;
    if ((DAT_140c8ab08 & 2) == 0) {
        DAT_140c8ab08 = DAT_140c8ab08 | 2;
    }
    else if (_DAT_140c8aafc != 0) goto LAB_14041d6f2;
    _DAT_140c8aafc = 1;
    lVar1 = FUN_140200220(0x4ed);
    DAT_140c8aaf8 = fVar4;
    if (lVar1 != 0) {
        DAT_140c8aaf8 = *(float *)(lVar1 + 0x1c);
    }
    LAB_14041d6f2:
    fVar3 = DAT_140c8aaf8;
    if (_DAT_140c8aaf4 == 0) {
        _DAT_140c8aaf4 = 1;
        lVar1 = FUN_140200220(0x4ed);
        DAT_140c8aaf0 = fVar4;
        if (lVar1 != 0) {
            DAT_140c8aaf0 = *(float *)(lVar1 + 0x18);
        }
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    local_res10 = (fVar3 - DAT_140c8aaf0) * param_2 + DAT_140c8aaf0;
    puVar2 = (ulonglong *)&local_res10;
    if (local_res10 <= fVar4) {
        puVar2 = &local_res8;
    }
    return *(float *)puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14041d780(undefined8 param_1,float param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;

    if ((DAT_140c8ab1c & 1) == 0) {
        DAT_140c8ab1c = DAT_140c8ab1c | 1;
        _DAT_140c8ab24 = 0;
    }
    if ((DAT_140c8ab1c & 2) == 0) {
        DAT_140c8ab1c = DAT_140c8ab1c | 2;
    }
    else if (_DAT_140c8ab14 != 0) goto LAB_14041d7f8;
    _DAT_140c8ab14 = 1;
    lVar3 = FUN_140200220();
    if (lVar3 == 0) {
        DAT_140c8ab10 = 0;
    }
    else {
        DAT_140c8ab10 = *(uint *)(lVar3 + 8);
    }
    LAB_14041d7f8:
    uVar6 = DAT_140c8ab10;
    if (_DAT_140c8ab24 == 0) {
        _DAT_140c8ab24 = 1;
        lVar3 = FUN_140200220();
        DAT_140c8ab20 = 0;
        if (lVar3 != 0) {
            DAT_140c8ab20 = *(uint *)(lVar3 + 4);
        }
    }
    uVar5 = DAT_140c8ab20;
    uVar1 = uVar6;
    if (uVar6 < DAT_140c8ab20) {
        do {
            uVar6 = uVar5;
            uVar5 = uVar1;
            param_2 = 1.0 - param_2;
            uVar1 = uVar6;
        } while (uVar6 < uVar5);
    }
    fVar7 = (float)(ulonglong)(uVar6 - uVar5) * param_2 + (float)(ulonglong)uVar5 + 1e-05;
    if (0.0 < fVar7) {
        iVar2 = (int)(longlong)fVar7;
        iVar4 = -1;
        if (iVar2 != -1) {
            iVar4 = iVar2;
        }
        iVar2 = 0;
        if (iVar4 != 0) {
            iVar2 = iVar4;
        }
        return iVar2;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041d850(undefined8 param_1,int param_2)

{
    longlong lVar1;
    float fVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;

    if ((DAT_140c8ab18 & 1) == 0) {
        DAT_140c8ab18 = DAT_140c8ab18 | 1;
        _DAT_140c8aa64 = 0;
    }
    fVar7 = 0.0;
    if ((DAT_140c8ab18 & 2) == 0) {
        DAT_140c8ab18 = DAT_140c8ab18 | 2;
        _DAT_140c8aa6c = 0;
        _DAT_140c8aa74 = 0;
        _DAT_140c8aa7c = 0;
        _DAT_140c8aa8c = 0;
    }
    else if (_DAT_140c8aa84 != 0) goto LAB_14041d908;
    _DAT_140c8aa84 = 1;
    lVar1 = FUN_140200220(0x224);
    DAT_140c8aa80 = fVar7;
    if (lVar1 != 0) {
        DAT_140c8aa80 = *(float *)(lVar1 + 0x24);
    }
    LAB_14041d908:
    fVar2 = DAT_140c8aa80;
    if (_DAT_140c8aa7c == 0) {
        _DAT_140c8aa7c = 1;
        lVar1 = FUN_140200220(0x224);
        DAT_140c8aa78 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aa78 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar8 = DAT_140c8aa78;
    if (_DAT_140c8aa74 == 0) {
        _DAT_140c8aa74 = 1;
        lVar1 = FUN_140200220(0x224);
        DAT_140c8aa70 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aa70 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar5 = DAT_140c8aa70;
    if (_DAT_140c8aa6c == 0) {
        _DAT_140c8aa6c = 1;
        lVar1 = FUN_140200220(0x224);
        DAT_140c8aa68 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aa68 = *(float *)(lVar1 + 0x18);
        }
    }
    fVar7 = DAT_140c8aa68;
    if (_DAT_140c8aa64 == 0) {
        _DAT_140c8aa64 = 1;
        lVar1 = FUN_140200220(0x224);
        DAT_140c8aa60 = 0;
        if (lVar1 != 0) {
            DAT_140c8aa60 = *(int *)(lVar1 + 4);
        }
    }
    fVar4 = (float)(ulonglong)(uint)(param_2 - DAT_140c8aa60);
    uVar3 = FUN_1408fbfc0(0x402df854,fVar4 * fVar5);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = (float)uVar3 * fVar7;
    fVar2 = (float)FUN_1408fbfc0(fVar4,fVar2);
    return CONCAT44(uVar6,fVar7 + fVar2 * fVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041da70(undefined8 param_1,int param_2)

{
    longlong lVar1;
    float fVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;

    if ((DAT_140c8aa50 & 1) == 0) {
        DAT_140c8aa50 = DAT_140c8aa50 | 1;
        _DAT_140c8aa5c = 0;
    }
    fVar7 = 0.0;
    if ((DAT_140c8aa50 & 2) == 0) {
        DAT_140c8aa50 = DAT_140c8aa50 | 2;
        _DAT_140c8aac4 = 0;
        _DAT_140c8aacc = 0;
        _DAT_140c8aad4 = 0;
        _DAT_140c8aae4 = 0;
    }
    else if (_DAT_140c8aadc != 0) goto LAB_14041db28;
    _DAT_140c8aadc = 1;
    lVar1 = FUN_140200220(0x225);
    DAT_140c8aad8 = fVar7;
    if (lVar1 != 0) {
        DAT_140c8aad8 = *(float *)(lVar1 + 0x24);
    }
    LAB_14041db28:
    fVar2 = DAT_140c8aad8;
    if (_DAT_140c8aad4 == 0) {
        _DAT_140c8aad4 = 1;
        lVar1 = FUN_140200220(0x225);
        DAT_140c8aad0 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aad0 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar8 = DAT_140c8aad0;
    if (_DAT_140c8aacc == 0) {
        _DAT_140c8aacc = 1;
        lVar1 = FUN_140200220(0x225);
        DAT_140c8aac8 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aac8 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar5 = DAT_140c8aac8;
    if (_DAT_140c8aac4 == 0) {
        _DAT_140c8aac4 = 1;
        lVar1 = FUN_140200220(0x225);
        DAT_140c8aac0 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aac0 = *(float *)(lVar1 + 0x18);
        }
    }
    fVar7 = DAT_140c8aac0;
    if (_DAT_140c8aa5c == 0) {
        _DAT_140c8aa5c = 1;
        lVar1 = FUN_140200220(0x225);
        DAT_140c8aa58 = 0;
        if (lVar1 != 0) {
            DAT_140c8aa58 = *(int *)(lVar1 + 4);
        }
    }
    fVar4 = (float)(ulonglong)(uint)(param_2 - DAT_140c8aa58);
    uVar3 = FUN_1408fbfc0(0x402df854,fVar4 * fVar5);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = (float)uVar3 * fVar7;
    fVar2 = (float)FUN_1408fbfc0(fVar4,fVar2);
    return CONCAT44(uVar6,fVar7 + fVar2 * fVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041dc90(undefined8 param_1,int param_2)

{
    longlong lVar1;
    float fVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;

    if ((DAT_140c8aae8 & 1) == 0) {
        DAT_140c8aae8 = DAT_140c8aae8 | 1;
        _DAT_140c8aa94 = 0;
    }
    fVar7 = 0.0;
    if ((DAT_140c8aae8 & 2) == 0) {
        DAT_140c8aae8 = DAT_140c8aae8 | 2;
        _DAT_140c8aa9c = 0;
        _DAT_140c8aaa4 = 0;
        _DAT_140c8aaac = 0;
        _DAT_140c8aabc = 0;
    }
    else if (_DAT_140c8aab4 != 0) goto LAB_14041dd48;
    _DAT_140c8aab4 = 1;
    lVar1 = FUN_140200220(0x508);
    DAT_140c8aab0 = fVar7;
    if (lVar1 != 0) {
        DAT_140c8aab0 = *(float *)(lVar1 + 0x24);
    }
    LAB_14041dd48:
    fVar2 = DAT_140c8aab0;
    if (_DAT_140c8aaac == 0) {
        _DAT_140c8aaac = 1;
        lVar1 = FUN_140200220(0x508);
        DAT_140c8aaa8 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aaa8 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar8 = DAT_140c8aaa8;
    if (_DAT_140c8aaa4 == 0) {
        _DAT_140c8aaa4 = 1;
        lVar1 = FUN_140200220(0x508);
        DAT_140c8aaa0 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aaa0 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar5 = DAT_140c8aaa0;
    if (_DAT_140c8aa9c == 0) {
        _DAT_140c8aa9c = 1;
        lVar1 = FUN_140200220(0x508);
        DAT_140c8aa98 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8aa98 = *(float *)(lVar1 + 0x18);
        }
    }
    fVar7 = DAT_140c8aa98;
    if (_DAT_140c8aa94 == 0) {
        _DAT_140c8aa94 = 1;
        lVar1 = FUN_140200220(0x508);
        DAT_140c8aa90 = 0;
        if (lVar1 != 0) {
            DAT_140c8aa90 = *(int *)(lVar1 + 4);
        }
    }
    fVar4 = (float)(ulonglong)(uint)(param_2 - DAT_140c8aa90);
    uVar3 = FUN_1408fbfc0(0x402df854,fVar4 * fVar5);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = (float)uVar3 * fVar7;
    fVar2 = (float)FUN_1408fbfc0(fVar4,fVar2);
    return CONCAT44(uVar6,fVar7 + fVar2 * fVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041deb0(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;

    if ((DAT_140c8a9e0 & 1) == 0) {
        DAT_140c8a9e0 = DAT_140c8a9e0 | 1;
        _DAT_140c8a9ec = 0;
    }
    if ((DAT_140c8a9e0 & 2) == 0) {
        DAT_140c8a9e0 = DAT_140c8a9e0 | 2;
        _DAT_140c8a9b4 = 0;
        _DAT_140c8a9bc = 0;
        _DAT_140c8a9c4 = 0;
        _DAT_140c8a9cc = 0;
        _DAT_140c8a9d4 = 0;
    }
    if ((DAT_140c8a9e0 & 4) == 0) {
        DAT_140c8a9e0 = DAT_140c8a9e0 | 4;
        DAT_140c8a9dc = 0;
    }
    if ((DAT_140c8a9e0 & 8) == 0) {
        DAT_140c8a9e0 = DAT_140c8a9e0 | 8;
        _DAT_140c8aa24 = 0;
        _DAT_140c8aa2c = 0;
        _DAT_140c8aa34 = 0;
        _DAT_140c8aa3c = 0;
        _DAT_140c8aa44 = 0;
    }
    if ((DAT_140c8a9e0 & 0x10) == 0) {
        DAT_140c8a9e0 = DAT_140c8a9e0 | 0x10;
        _DAT_140c8aa4c = 0;
    }
    if ((DAT_140c8a9e0 & 0x20) == 0) {
        DAT_140c8a9e0 = DAT_140c8a9e0 | 0x20;
        _DAT_140c8a9f4 = 0;
        _DAT_140c8a9fc = 0;
        _DAT_140c8aa04 = 0;
        _DAT_140c8aa0c = 0;
        _DAT_140c8aa14 = 0;
    }
    if (DAT_140c8a9dc == 0) {
        DAT_140c8a9dc = 1;
        lVar2 = FUN_140200220(0x506);
        if (lVar2 != 0) {
            DAT_140c8a9d8 = *(uint *)(lVar2 + 4);
            goto LAB_14041e00f;
        }
        DAT_140c8a9d8 = 0;
        LAB_14041dfd2:
        if (_DAT_140c8aa4c == 0) {
            _DAT_140c8aa4c = 1;
            lVar2 = FUN_140200220(0x507);
            if (lVar2 != 0) {
                DAT_140c8aa48 = *(uint *)(lVar2 + 4);
                goto LAB_14041e1c3;
            }
            DAT_140c8aa48 = 0;
        }
        else {
            LAB_14041e1c3:
            if (param_2 < DAT_140c8aa48) {
                fVar8 = 0.0;
                if (_DAT_140c8aa3c == 0) {
                    _DAT_140c8aa3c = 1;
                    lVar2 = FUN_140200220(0x506);
                    DAT_140c8aa38 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8aa38 = *(float *)(lVar2 + 0x24);
                    }
                }
                fVar3 = DAT_140c8aa38;
                if (_DAT_140c8aa34 == 0) {
                    _DAT_140c8aa34 = 1;
                    lVar2 = FUN_140200220(0x506);
                    DAT_140c8aa30 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8aa30 = *(float *)(lVar2 + 0x20);
                    }
                }
                fVar9 = DAT_140c8aa30;
                if (_DAT_140c8aa2c == 0) {
                    _DAT_140c8aa2c = 1;
                    lVar2 = FUN_140200220(0x506);
                    DAT_140c8aa28 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8aa28 = *(float *)(lVar2 + 0x1c);
                    }
                }
                fVar5 = DAT_140c8aa28;
                if (_DAT_140c8aa24 == 0) {
                    _DAT_140c8aa24 = 1;
                    lVar2 = FUN_140200220(0x506);
                    if (lVar2 != 0) {
                        fVar8 = *(float *)(lVar2 + 0x18);
                    }
                    DAT_140c8aa20 = fVar8;
                    iVar1 = FUN_14041f840();
                    param_2 = param_2 - iVar1;
                }
                else {
                    fVar8 = DAT_140c8aa20;
                    iVar1 = FUN_14041f840();
                    param_2 = param_2 - iVar1;
                }
                goto LAB_14041e160;
            }
        }
        fVar8 = 0.0;
        if (_DAT_140c8aa0c == 0) {
            _DAT_140c8aa0c = 1;
            lVar2 = FUN_140200220(0x507);
            DAT_140c8aa08 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8aa08 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8aa08;
        if (_DAT_140c8aa04 == 0) {
            _DAT_140c8aa04 = 1;
            lVar2 = FUN_140200220(0x507);
            DAT_140c8aa00 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8aa00 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8aa00;
        if (_DAT_140c8a9fc == 0) {
            _DAT_140c8a9fc = 1;
            lVar2 = FUN_140200220(0x507);
            DAT_140c8a9f8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a9f8 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a9f8;
        if (_DAT_140c8a9f4 == 0) {
            _DAT_140c8a9f4 = 1;
            lVar2 = FUN_140200220(0x507);
            DAT_140c8a9f0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a9f0 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a9f0;
        iVar1 = FUN_14041f890();
        fVar6 = (float)(ulonglong)(param_2 - iVar1);
        fVar5 = fVar5 * fVar6;
    }
    else {
        LAB_14041e00f:
        if (DAT_140c8a9d8 <= param_2) goto LAB_14041dfd2;
        fVar8 = 0.0;
        if (_DAT_140c8a9cc == 0) {
            _DAT_140c8a9cc = 1;
            lVar2 = FUN_140200220(0x223);
            DAT_140c8a9c8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a9c8 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a9c8;
        if (_DAT_140c8a9c4 == 0) {
            _DAT_140c8a9c4 = 1;
            lVar2 = FUN_140200220(0x223);
            DAT_140c8a9c0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a9c0 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a9c0;
        if (_DAT_140c8a9bc == 0) {
            _DAT_140c8a9bc = 1;
            lVar2 = FUN_140200220(0x223);
            DAT_140c8a9b8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a9b8 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a9b8;
        if (_DAT_140c8a9b4 == 0) {
            _DAT_140c8a9b4 = 1;
            lVar2 = FUN_140200220(0x223);
            DAT_140c8a9b0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a9b0 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a9b0;
        if (_DAT_140c8a9ec == 0) {
            _DAT_140c8a9ec = 1;
            lVar2 = FUN_140200220(0x223);
            DAT_140c8a9e8 = 0;
            if (lVar2 != 0) {
                DAT_140c8a9e8 = *(int *)(lVar2 + 4);
            }
        }
        param_2 = param_2 - DAT_140c8a9e8;
        LAB_14041e160:
        fVar6 = (float)(ulonglong)param_2;
        fVar5 = fVar6 * fVar5;
    }
    uVar4 = FUN_1408fbfc0(0x402df854,fVar5);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar8 = (float)uVar4 * fVar8;
    fVar3 = (float)FUN_1408fbfc0(fVar6,fVar3);
    return CONCAT44(uVar7,fVar8 + fVar3 * fVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041e450(undefined8 param_1,int param_2)

{
    longlong lVar1;
    float fVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;

    if ((DAT_140c8aa18 & 1) == 0) {
        DAT_140c8aa18 = DAT_140c8aa18 | 1;
        _DAT_140c8a924 = 0;
    }
    fVar7 = 0.0;
    if ((DAT_140c8aa18 & 2) == 0) {
        DAT_140c8aa18 = DAT_140c8aa18 | 2;
        _DAT_140c8a92c = 0;
        _DAT_140c8a934 = 0;
        _DAT_140c8a93c = 0;
        _DAT_140c8a94c = 0;
    }
    else if (_DAT_140c8a944 != 0) goto LAB_14041e508;
    _DAT_140c8a944 = 1;
    lVar1 = FUN_140200220(0x43);
    DAT_140c8a940 = fVar7;
    if (lVar1 != 0) {
        DAT_140c8a940 = *(float *)(lVar1 + 0x24);
    }
    LAB_14041e508:
    fVar2 = DAT_140c8a940;
    if (_DAT_140c8a93c == 0) {
        _DAT_140c8a93c = 1;
        lVar1 = FUN_140200220(0x43);
        DAT_140c8a938 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8a938 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar8 = DAT_140c8a938;
    if (_DAT_140c8a934 == 0) {
        _DAT_140c8a934 = 1;
        lVar1 = FUN_140200220(0x43);
        DAT_140c8a930 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8a930 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar5 = DAT_140c8a930;
    if (_DAT_140c8a92c == 0) {
        _DAT_140c8a92c = 1;
        lVar1 = FUN_140200220(0x43);
        DAT_140c8a928 = fVar7;
        if (lVar1 != 0) {
            DAT_140c8a928 = *(float *)(lVar1 + 0x18);
        }
    }
    fVar7 = DAT_140c8a928;
    if (_DAT_140c8a924 == 0) {
        _DAT_140c8a924 = 1;
        lVar1 = FUN_140200220(0x43);
        DAT_140c8a920 = 0;
        if (lVar1 != 0) {
            DAT_140c8a920 = *(int *)(lVar1 + 4);
        }
    }
    fVar4 = (float)(ulonglong)(uint)(param_2 - DAT_140c8a920);
    uVar3 = FUN_1408fbfc0(0x402df854,fVar4 * fVar5);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = (float)uVar3 * fVar7;
    fVar2 = (float)FUN_1408fbfc0(fVar4,fVar2);
    return CONCAT44(uVar6,fVar7 + fVar2 * fVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041e670(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;

    if ((DAT_140c8a910 & 1) == 0) {
        DAT_140c8a910 = DAT_140c8a910 | 1;
        _DAT_140c8a91c = 0;
    }
    if ((DAT_140c8a910 & 2) == 0) {
        DAT_140c8a910 = DAT_140c8a910 | 2;
        _DAT_140c8a984 = 0;
        _DAT_140c8a98c = 0;
        _DAT_140c8a994 = 0;
        _DAT_140c8a99c = 0;
        _DAT_140c8a9a4 = 0;
    }
    if ((DAT_140c8a910 & 4) == 0) {
        DAT_140c8a910 = DAT_140c8a910 | 4;
        DAT_140c8a9ac = 0;
    }
    if ((DAT_140c8a910 & 8) == 0) {
        DAT_140c8a910 = DAT_140c8a910 | 8;
        _DAT_140c8a954 = 0;
        _DAT_140c8a95c = 0;
        _DAT_140c8a964 = 0;
        _DAT_140c8a96c = 0;
        _DAT_140c8a974 = 0;
    }
    if ((DAT_140c8a910 & 0x10) == 0) {
        DAT_140c8a910 = DAT_140c8a910 | 0x10;
        _DAT_140c8a97c = 0;
    }
    if ((DAT_140c8a910 & 0x20) == 0) {
        DAT_140c8a910 = DAT_140c8a910 | 0x20;
        _DAT_140c8a884 = 0;
        _DAT_140c8a88c = 0;
        _DAT_140c8a894 = 0;
        _DAT_140c8a89c = 0;
        _DAT_140c8a8a4 = 0;
    }
    if (DAT_140c8a9ac == 0) {
        DAT_140c8a9ac = 1;
        lVar2 = FUN_140200220(0x403);
        if (lVar2 != 0) {
            DAT_140c8a9a8 = *(uint *)(lVar2 + 4);
            goto LAB_14041e7cf;
        }
        DAT_140c8a9a8 = 0;
        LAB_14041e792:
        if (_DAT_140c8a97c == 0) {
            _DAT_140c8a97c = 1;
            lVar2 = FUN_140200220(0x4e7);
            if (lVar2 != 0) {
                DAT_140c8a978 = *(uint *)(lVar2 + 4);
                goto LAB_14041e983;
            }
            DAT_140c8a978 = 0;
        }
        else {
            LAB_14041e983:
            if (param_2 < DAT_140c8a978) {
                fVar8 = 0.0;
                if (_DAT_140c8a96c == 0) {
                    _DAT_140c8a96c = 1;
                    lVar2 = FUN_140200220(0x403);
                    DAT_140c8a968 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a968 = *(float *)(lVar2 + 0x24);
                    }
                }
                fVar3 = DAT_140c8a968;
                if (_DAT_140c8a964 == 0) {
                    _DAT_140c8a964 = 1;
                    lVar2 = FUN_140200220(0x403);
                    DAT_140c8a960 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a960 = *(float *)(lVar2 + 0x20);
                    }
                }
                fVar9 = DAT_140c8a960;
                if (_DAT_140c8a95c == 0) {
                    _DAT_140c8a95c = 1;
                    lVar2 = FUN_140200220(0x403);
                    DAT_140c8a958 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a958 = *(float *)(lVar2 + 0x1c);
                    }
                }
                fVar5 = DAT_140c8a958;
                if (_DAT_140c8a954 == 0) {
                    _DAT_140c8a954 = 1;
                    lVar2 = FUN_140200220(0x403);
                    if (lVar2 != 0) {
                        fVar8 = *(float *)(lVar2 + 0x18);
                    }
                    DAT_140c8a950 = fVar8;
                    iVar1 = FUN_14041f8e0();
                    param_2 = param_2 - iVar1;
                }
                else {
                    fVar8 = DAT_140c8a950;
                    iVar1 = FUN_14041f8e0();
                    param_2 = param_2 - iVar1;
                }
                goto LAB_14041e920;
            }
        }
        fVar8 = 0.0;
        if (_DAT_140c8a89c == 0) {
            _DAT_140c8a89c = 1;
            lVar2 = FUN_140200220(0x4e7);
            DAT_140c8a898 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a898 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a898;
        if (_DAT_140c8a894 == 0) {
            _DAT_140c8a894 = 1;
            lVar2 = FUN_140200220(0x4e7);
            DAT_140c8a890 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a890 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a890;
        if (_DAT_140c8a88c == 0) {
            _DAT_140c8a88c = 1;
            lVar2 = FUN_140200220(0x4e7);
            DAT_140c8a888 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a888 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a888;
        if (_DAT_140c8a884 == 0) {
            _DAT_140c8a884 = 1;
            lVar2 = FUN_140200220(0x4e7);
            DAT_140c8a880 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a880 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a880;
        iVar1 = FUN_14041f930();
        fVar6 = (float)(ulonglong)(param_2 - iVar1);
        fVar5 = fVar5 * fVar6;
    }
    else {
        LAB_14041e7cf:
        if (DAT_140c8a9a8 <= param_2) goto LAB_14041e792;
        fVar8 = 0.0;
        if (_DAT_140c8a99c == 0) {
            _DAT_140c8a99c = 1;
            lVar2 = FUN_140200220(0x404);
            DAT_140c8a998 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a998 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a998;
        if (_DAT_140c8a994 == 0) {
            _DAT_140c8a994 = 1;
            lVar2 = FUN_140200220(0x404);
            DAT_140c8a990 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a990 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a990;
        if (_DAT_140c8a98c == 0) {
            _DAT_140c8a98c = 1;
            lVar2 = FUN_140200220(0x404);
            DAT_140c8a988 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a988 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a988;
        if (_DAT_140c8a984 == 0) {
            _DAT_140c8a984 = 1;
            lVar2 = FUN_140200220(0x404);
            DAT_140c8a980 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a980 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a980;
        if (_DAT_140c8a91c == 0) {
            _DAT_140c8a91c = 1;
            lVar2 = FUN_140200220(0x404);
            DAT_140c8a918 = 0;
            if (lVar2 != 0) {
                DAT_140c8a918 = *(int *)(lVar2 + 4);
            }
        }
        param_2 = param_2 - DAT_140c8a918;
        LAB_14041e920:
        fVar6 = (float)(ulonglong)param_2;
        fVar5 = fVar6 * fVar5;
    }
    uVar4 = FUN_1408fbfc0(0x402df854,fVar5);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar8 = (float)uVar4 * fVar8;
    fVar3 = (float)FUN_1408fbfc0(fVar6,fVar3);
    return CONCAT44(uVar7,fVar8 + fVar3 * fVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041ec10(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;

    if ((DAT_140c8a8a8 & 1) == 0) {
        DAT_140c8a8a8 = DAT_140c8a8a8 | 1;
        _DAT_140c8a854 = 0;
    }
    if ((DAT_140c8a8a8 & 2) == 0) {
        DAT_140c8a8a8 = DAT_140c8a8a8 | 2;
        _DAT_140c8a85c = 0;
        _DAT_140c8a864 = 0;
        _DAT_140c8a86c = 0;
        _DAT_140c8a874 = 0;
        _DAT_140c8a87c = 0;
    }
    if ((DAT_140c8a8a8 & 4) == 0) {
        DAT_140c8a8a8 = DAT_140c8a8a8 | 4;
        DAT_140c8a8e4 = 0;
    }
    if ((DAT_140c8a8a8 & 8) == 0) {
        DAT_140c8a8a8 = DAT_140c8a8a8 | 8;
        _DAT_140c8a8ec = 0;
        _DAT_140c8a8f4 = 0;
        _DAT_140c8a8fc = 0;
        _DAT_140c8a904 = 0;
        _DAT_140c8a90c = 0;
    }
    if ((DAT_140c8a8a8 & 0x10) == 0) {
        DAT_140c8a8a8 = DAT_140c8a8a8 | 0x10;
        _DAT_140c8a8b4 = 0;
    }
    if ((DAT_140c8a8a8 & 0x20) == 0) {
        DAT_140c8a8a8 = DAT_140c8a8a8 | 0x20;
        _DAT_140c8a8bc = 0;
        _DAT_140c8a8c4 = 0;
        _DAT_140c8a8cc = 0;
        _DAT_140c8a8d4 = 0;
        _DAT_140c8a8dc = 0;
    }
    if (DAT_140c8a8e4 == 0) {
        DAT_140c8a8e4 = 1;
        lVar2 = FUN_140200220(0x954);
        if (lVar2 != 0) {
            DAT_140c8a8e0 = *(uint *)(lVar2 + 4);
            goto LAB_14041ed6f;
        }
        DAT_140c8a8e0 = 0;
        LAB_14041ed32:
        if (_DAT_140c8a8b4 == 0) {
            _DAT_140c8a8b4 = 1;
            lVar2 = FUN_140200220(0x956);
            if (lVar2 != 0) {
                DAT_140c8a8b0 = *(uint *)(lVar2 + 4);
                goto LAB_14041ef23;
            }
            DAT_140c8a8b0 = 0;
        }
        else {
            LAB_14041ef23:
            if (param_2 < DAT_140c8a8b0) {
                fVar8 = 0.0;
                if (_DAT_140c8a904 == 0) {
                    _DAT_140c8a904 = 1;
                    lVar2 = FUN_140200220(0x954);
                    DAT_140c8a900 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a900 = *(float *)(lVar2 + 0x24);
                    }
                }
                fVar3 = DAT_140c8a900;
                if (_DAT_140c8a8fc == 0) {
                    _DAT_140c8a8fc = 1;
                    lVar2 = FUN_140200220(0x954);
                    DAT_140c8a8f8 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a8f8 = *(float *)(lVar2 + 0x20);
                    }
                }
                fVar9 = DAT_140c8a8f8;
                if (_DAT_140c8a8f4 == 0) {
                    _DAT_140c8a8f4 = 1;
                    lVar2 = FUN_140200220(0x954);
                    DAT_140c8a8f0 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a8f0 = *(float *)(lVar2 + 0x1c);
                    }
                }
                fVar5 = DAT_140c8a8f0;
                if (_DAT_140c8a8ec == 0) {
                    _DAT_140c8a8ec = 1;
                    lVar2 = FUN_140200220(0x954);
                    if (lVar2 != 0) {
                        fVar8 = *(float *)(lVar2 + 0x18);
                    }
                    DAT_140c8a8e8 = fVar8;
                    iVar1 = FUN_14041f980();
                    param_2 = param_2 - iVar1;
                }
                else {
                    fVar8 = DAT_140c8a8e8;
                    iVar1 = FUN_14041f980();
                    param_2 = param_2 - iVar1;
                }
                goto LAB_14041eec0;
            }
        }
        fVar8 = 0.0;
        if (_DAT_140c8a8d4 == 0) {
            _DAT_140c8a8d4 = 1;
            lVar2 = FUN_140200220(0x956);
            DAT_140c8a8d0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a8d0 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a8d0;
        if (_DAT_140c8a8cc == 0) {
            _DAT_140c8a8cc = 1;
            lVar2 = FUN_140200220(0x956);
            DAT_140c8a8c8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a8c8 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a8c8;
        if (_DAT_140c8a8c4 == 0) {
            _DAT_140c8a8c4 = 1;
            lVar2 = FUN_140200220(0x956);
            DAT_140c8a8c0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a8c0 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a8c0;
        if (_DAT_140c8a8bc == 0) {
            _DAT_140c8a8bc = 1;
            lVar2 = FUN_140200220(0x956);
            DAT_140c8a8b8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a8b8 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a8b8;
        iVar1 = FUN_14041f9d0();
        fVar6 = (float)(ulonglong)(param_2 - iVar1);
        fVar5 = fVar5 * fVar6;
    }
    else {
        LAB_14041ed6f:
        if (DAT_140c8a8e0 <= param_2) goto LAB_14041ed32;
        fVar8 = 0.0;
        if (_DAT_140c8a874 == 0) {
            _DAT_140c8a874 = 1;
            lVar2 = FUN_140200220(0x953);
            DAT_140c8a870 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a870 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a870;
        if (_DAT_140c8a86c == 0) {
            _DAT_140c8a86c = 1;
            lVar2 = FUN_140200220(0x953);
            DAT_140c8a868 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a868 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a868;
        if (_DAT_140c8a864 == 0) {
            _DAT_140c8a864 = 1;
            lVar2 = FUN_140200220(0x953);
            DAT_140c8a860 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a860 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a860;
        if (_DAT_140c8a85c == 0) {
            _DAT_140c8a85c = 1;
            lVar2 = FUN_140200220(0x953);
            DAT_140c8a858 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a858 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a858;
        if (_DAT_140c8a854 == 0) {
            _DAT_140c8a854 = 1;
            lVar2 = FUN_140200220(0x953);
            DAT_140c8a850 = 0;
            if (lVar2 != 0) {
                DAT_140c8a850 = *(int *)(lVar2 + 4);
            }
        }
        param_2 = param_2 - DAT_140c8a850;
        LAB_14041eec0:
        fVar6 = (float)(ulonglong)param_2;
        fVar5 = fVar6 * fVar5;
    }
    uVar4 = FUN_1408fbfc0(0x402df854,fVar5);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar8 = (float)uVar4 * fVar8;
    fVar3 = (float)FUN_1408fbfc0(fVar6,fVar3);
    return CONCAT44(uVar7,fVar8 + fVar3 * fVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14041f1b0(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;

    if ((DAT_140c8a7e8 & 1) == 0) {
        DAT_140c8a7e8 = DAT_140c8a7e8 | 1;
        _DAT_140c8a7f4 = 0;
    }
    if ((DAT_140c8a7e8 & 2) == 0) {
        DAT_140c8a7e8 = DAT_140c8a7e8 | 2;
        _DAT_140c8a7bc = 0;
        _DAT_140c8a7c4 = 0;
        _DAT_140c8a7cc = 0;
        _DAT_140c8a7d4 = 0;
        _DAT_140c8a7dc = 0;
    }
    if ((DAT_140c8a7e8 & 4) == 0) {
        DAT_140c8a7e8 = DAT_140c8a7e8 | 4;
        DAT_140c8a7e4 = 0;
    }
    if ((DAT_140c8a7e8 & 8) == 0) {
        DAT_140c8a7e8 = DAT_140c8a7e8 | 8;
        _DAT_140c8a824 = 0;
        _DAT_140c8a82c = 0;
        _DAT_140c8a834 = 0;
        _DAT_140c8a83c = 0;
        _DAT_140c8a844 = 0;
    }
    if ((DAT_140c8a7e8 & 0x10) == 0) {
        DAT_140c8a7e8 = DAT_140c8a7e8 | 0x10;
        _DAT_140c8a84c = 0;
    }
    if ((DAT_140c8a7e8 & 0x20) == 0) {
        DAT_140c8a7e8 = DAT_140c8a7e8 | 0x20;
        _DAT_140c8a7fc = 0;
        _DAT_140c8a804 = 0;
        _DAT_140c8a80c = 0;
        _DAT_140c8a814 = 0;
        _DAT_140c8a81c = 0;
    }
    if (DAT_140c8a7e4 == 0) {
        DAT_140c8a7e4 = 1;
        lVar2 = FUN_140200220(0x41);
        if (lVar2 != 0) {
            DAT_140c8a7e0 = *(uint *)(lVar2 + 4);
            goto LAB_14041f30f;
        }
        DAT_140c8a7e0 = 0;
        LAB_14041f2d2:
        if (_DAT_140c8a84c == 0) {
            _DAT_140c8a84c = 1;
            lVar2 = FUN_140200220(0xfd);
            if (lVar2 != 0) {
                DAT_140c8a848 = *(uint *)(lVar2 + 4);
                goto LAB_14041f4c3;
            }
            DAT_140c8a848 = 0;
        }
        else {
            LAB_14041f4c3:
            if (param_2 < DAT_140c8a848) {
                fVar8 = 0.0;
                if (_DAT_140c8a83c == 0) {
                    _DAT_140c8a83c = 1;
                    lVar2 = FUN_140200220(0x41);
                    DAT_140c8a838 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a838 = *(float *)(lVar2 + 0x24);
                    }
                }
                fVar3 = DAT_140c8a838;
                if (_DAT_140c8a834 == 0) {
                    _DAT_140c8a834 = 1;
                    lVar2 = FUN_140200220(0x41);
                    DAT_140c8a830 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a830 = *(float *)(lVar2 + 0x20);
                    }
                }
                fVar9 = DAT_140c8a830;
                if (_DAT_140c8a82c == 0) {
                    _DAT_140c8a82c = 1;
                    lVar2 = FUN_140200220(0x41);
                    DAT_140c8a828 = fVar8;
                    if (lVar2 != 0) {
                        DAT_140c8a828 = *(float *)(lVar2 + 0x1c);
                    }
                }
                fVar5 = DAT_140c8a828;
                if (_DAT_140c8a824 == 0) {
                    _DAT_140c8a824 = 1;
                    lVar2 = FUN_140200220(0x41);
                    if (lVar2 != 0) {
                        fVar8 = *(float *)(lVar2 + 0x18);
                    }
                    DAT_140c8a820 = fVar8;
                    iVar1 = FUN_14041fa20();
                    param_2 = param_2 - iVar1;
                }
                else {
                    fVar8 = DAT_140c8a820;
                    iVar1 = FUN_14041fa20();
                    param_2 = param_2 - iVar1;
                }
                goto LAB_14041f460;
            }
        }
        fVar8 = 0.0;
        if (_DAT_140c8a814 == 0) {
            _DAT_140c8a814 = 1;
            lVar2 = FUN_140200220(0xfd);
            DAT_140c8a810 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a810 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a810;
        if (_DAT_140c8a80c == 0) {
            _DAT_140c8a80c = 1;
            lVar2 = FUN_140200220(0xfd);
            DAT_140c8a808 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a808 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a808;
        if (_DAT_140c8a804 == 0) {
            _DAT_140c8a804 = 1;
            lVar2 = FUN_140200220(0xfd);
            DAT_140c8a800 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a800 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a800;
        if (_DAT_140c8a7fc == 0) {
            _DAT_140c8a7fc = 1;
            lVar2 = FUN_140200220(0xfd);
            DAT_140c8a7f8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a7f8 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a7f8;
        iVar1 = FUN_14041fa70();
        fVar6 = (float)(ulonglong)(param_2 - iVar1);
        fVar5 = fVar5 * fVar6;
    }
    else {
        LAB_14041f30f:
        if (DAT_140c8a7e0 <= param_2) goto LAB_14041f2d2;
        fVar8 = 0.0;
        if (_DAT_140c8a7d4 == 0) {
            _DAT_140c8a7d4 = 1;
            lVar2 = FUN_140200220(0x3df);
            DAT_140c8a7d0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a7d0 = *(float *)(lVar2 + 0x24);
            }
        }
        fVar3 = DAT_140c8a7d0;
        if (_DAT_140c8a7cc == 0) {
            _DAT_140c8a7cc = 1;
            lVar2 = FUN_140200220(0x3df);
            DAT_140c8a7c8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a7c8 = *(float *)(lVar2 + 0x20);
            }
        }
        fVar9 = DAT_140c8a7c8;
        if (_DAT_140c8a7c4 == 0) {
            _DAT_140c8a7c4 = 1;
            lVar2 = FUN_140200220(0x3df);
            DAT_140c8a7c0 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a7c0 = *(float *)(lVar2 + 0x1c);
            }
        }
        fVar5 = DAT_140c8a7c0;
        if (_DAT_140c8a7bc == 0) {
            _DAT_140c8a7bc = 1;
            lVar2 = FUN_140200220(0x3df);
            DAT_140c8a7b8 = fVar8;
            if (lVar2 != 0) {
                DAT_140c8a7b8 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar8 = DAT_140c8a7b8;
        if (_DAT_140c8a7f4 == 0) {
            _DAT_140c8a7f4 = 1;
            lVar2 = FUN_140200220(0x3df);
            DAT_140c8a7f0 = 0;
            if (lVar2 != 0) {
                DAT_140c8a7f0 = *(int *)(lVar2 + 4);
            }
        }
        param_2 = param_2 - DAT_140c8a7f0;
        LAB_14041f460:
        fVar6 = (float)(ulonglong)param_2;
        fVar5 = fVar6 * fVar5;
    }
    uVar4 = FUN_1408fbfc0(0x402df854,fVar5);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar8 = (float)uVar4 * fVar8;
    fVar3 = (float)FUN_1408fbfc0(fVar6,fVar3);
    return CONCAT44(uVar7,fVar8 + fVar3 * fVar9);
}



int FUN_14041f750(undefined8 param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;

    uVar2 = DAT_140c65898;
    if (param_2 == 0) {
        iVar3 = 6;
    }
    else if (((*(uint *)(param_2 + 0x154) & 0x400) == 0) || (*(int *)(param_2 + 0x180) == 0)) {
        iVar3 = 0x1f;
    }
    else {
        iVar3 = FUN_1403b4710(DAT_140c65898,param_2,0);
        if (iVar3 == 0x29) {
            if (*(int *)(param_2 + 0x17c) != 0x14) {
                iVar3 = 0;
            }
        }
        else if (iVar3 == 0x2a) {
            iVar3 = 0;
        }
    }
    iVar1 = *(int *)(param_2 + 0x17c);
    if (iVar1 - 1U < 6) {
        if (6 < iVar1 - 1U) {
            return 0x1f;
        }
    }
    else if (iVar1 != 0x14) {
        return 0x1f;
    }
    if (((iVar3 != 6) && ((*(uint *)(param_2 + 0x14c) & 0x4000) != 0)) && (iVar1 != 0)) {
        if ((iVar1 == 0x14) &&
            (iVar3 = FUN_1403ca2b0(uVar2,*(undefined4 *)(param_2 + 0x19c)), iVar3 == 0)) {
            return 0x29;
        }
        return 0;
    }
    return iVar3;
}



undefined4 FUN_14041f840(void)

{
    longlong lVar1;

    if (DAT_140c8a9dc != 0) {
        return DAT_140c8a9d8;
    }
    DAT_140c8a9dc = 1;
    lVar1 = FUN_140200220(0x506);
    if (lVar1 != 0) {
        DAT_140c8a9d8 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a9d8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14041f890(void)

{
    longlong lVar1;

    if (_DAT_140c8aa4c != 0) {
        return DAT_140c8aa48;
    }
    _DAT_140c8aa4c = 1;
    lVar1 = FUN_140200220(0x507);
    if (lVar1 != 0) {
        DAT_140c8aa48 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8aa48 = 0;
    return 0;
}



undefined4 FUN_14041f8e0(void)

{
    longlong lVar1;

    if (DAT_140c8a9ac != 0) {
        return DAT_140c8a9a8;
    }
    DAT_140c8a9ac = 1;
    lVar1 = FUN_140200220(0x403);
    if (lVar1 != 0) {
        DAT_140c8a9a8 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a9a8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14041f930(void)

{
    longlong lVar1;

    if (_DAT_140c8a97c != 0) {
        return DAT_140c8a978;
    }
    _DAT_140c8a97c = 1;
    lVar1 = FUN_140200220(0x4e7);
    if (lVar1 != 0) {
        DAT_140c8a978 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a978 = 0;
    return 0;
}



undefined4 FUN_14041f980(void)

{
    longlong lVar1;

    if (DAT_140c8a8e4 != 0) {
        return DAT_140c8a8e0;
    }
    DAT_140c8a8e4 = 1;
    lVar1 = FUN_140200220(0x954);
    if (lVar1 != 0) {
        DAT_140c8a8e0 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a8e0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14041f9d0(void)

{
    longlong lVar1;

    if (_DAT_140c8a8b4 != 0) {
        return DAT_140c8a8b0;
    }
    _DAT_140c8a8b4 = 1;
    lVar1 = FUN_140200220(0x956);
    if (lVar1 != 0) {
        DAT_140c8a8b0 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a8b0 = 0;
    return 0;
}



undefined4 FUN_14041fa20(void)

{
    longlong lVar1;

    if (DAT_140c8a7e4 != 0) {
        return DAT_140c8a7e0;
    }
    DAT_140c8a7e4 = 1;
    lVar1 = FUN_140200220(0x41);
    if (lVar1 != 0) {
        DAT_140c8a7e0 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a7e0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14041fa70(void)

{
    longlong lVar1;

    if (_DAT_140c8a84c != 0) {
        return DAT_140c8a848;
    }
    _DAT_140c8a84c = 1;
    lVar1 = FUN_140200220(0xfd);
    if (lVar1 != 0) {
        DAT_140c8a848 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8a848 = 0;
    return 0;
}



undefined8 FUN_14041fb40(longlong param_1)

{
    uint uVar1;

    if (((((*(byte *)(param_1 + 0x150) & 8) == 0) && ((*(byte *)(param_1 + 0x14c) & 0xc0) == 0)) &&
         (*(int *)(param_1 + 0x1a8) == 0)) &&
        (((uVar1 = *(uint *)(param_1 + 0x154), (uVar1 & 0x80) != 0 && ((uVar1 >> 0xf & 1) == 0)) &&
          ((uVar1 >> 0x10 & 1) == 0)))) {
        return 1;
    }
    return 0;
}



longlong FUN_14041fb80(longlong param_1)

{
    if (*(int *)(param_1 + 0x4a4) != 0) {
        return param_1 + 0x2e8;
    }
    return 0;
}



void FUN_14041fba0(longlong param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;

    FUN_1407e4830(param_2,0,400);
    FUN_1407e4830(param_2,0,0x90);
    *param_2 = 0xc5000000c5;
    param_2[1] = 0xc5000000c5;
    param_2[2] = 0xc5000000c5;
    param_2[3] = 0xc5000000c5;
    param_2[4] = 0xc5000000c5;
    param_2[5] = 0xc5000000c5;
    param_2[6] = 0xc5000000c5;
    *(undefined4 *)(param_2 + 7) = 0xc5;
    puVar5 = *(undefined4 **)(param_1 + 0x50);
    if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x9c);
        if ((((uint)puVar5 | (uint)param_2) & 0xf) == 0) {
            lVar4 = 1;
            do {
                puVar7 = param_2;
                puVar6 = puVar5;
                uVar1 = puVar6[1];
                uVar2 = puVar6[2];
                uVar3 = puVar6[3];
                *(undefined4 *)puVar7 = *puVar6;
                *(undefined4 *)((longlong)puVar7 + 4) = uVar1;
                *(undefined4 *)(puVar7 + 1) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
                uVar1 = puVar6[5];
                uVar2 = puVar6[6];
                uVar3 = puVar6[7];
                *(undefined4 *)(puVar7 + 2) = puVar6[4];
                *(undefined4 *)((longlong)puVar7 + 0x14) = uVar1;
                *(undefined4 *)(puVar7 + 3) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar3;
                uVar1 = puVar6[9];
                uVar2 = puVar6[10];
                uVar3 = puVar6[0xb];
                *(undefined4 *)(puVar7 + 4) = puVar6[8];
                *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
                *(undefined4 *)(puVar7 + 5) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
                uVar1 = puVar6[0xd];
                uVar2 = puVar6[0xe];
                uVar3 = puVar6[0xf];
                *(undefined4 *)(puVar7 + 6) = puVar6[0xc];
                *(undefined4 *)((longlong)puVar7 + 0x34) = uVar1;
                *(undefined4 *)(puVar7 + 7) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar3;
                uVar1 = puVar6[0x11];
                uVar2 = puVar6[0x12];
                uVar3 = puVar6[0x13];
                *(undefined4 *)(puVar7 + 8) = puVar6[0x10];
                *(undefined4 *)((longlong)puVar7 + 0x44) = uVar1;
                *(undefined4 *)(puVar7 + 9) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar3;
                uVar1 = puVar6[0x15];
                uVar2 = puVar6[0x16];
                uVar3 = puVar6[0x17];
                *(undefined4 *)(puVar7 + 10) = puVar6[0x14];
                *(undefined4 *)((longlong)puVar7 + 0x54) = uVar1;
                *(undefined4 *)(puVar7 + 0xb) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar3;
                uVar1 = puVar6[0x19];
                uVar2 = puVar6[0x1a];
                uVar3 = puVar6[0x1b];
                *(undefined4 *)(puVar7 + 0xc) = puVar6[0x18];
                *(undefined4 *)((longlong)puVar7 + 100) = uVar1;
                *(undefined4 *)(puVar7 + 0xd) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar3;
                uVar1 = puVar6[0x1d];
                uVar2 = puVar6[0x1e];
                uVar3 = puVar6[0x1f];
                *(undefined4 *)(puVar7 + 0xe) = puVar6[0x1c];
                *(undefined4 *)((longlong)puVar7 + 0x74) = uVar1;
                *(undefined4 *)(puVar7 + 0xf) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar3;
                lVar4 = lVar4 + -1;
                puVar5 = puVar6 + 0x20;
                param_2 = puVar7 + 0x10;
            } while (lVar4 != 0);
            uVar1 = puVar6[0x21];
            uVar2 = puVar6[0x22];
            uVar3 = puVar6[0x23];
            *(undefined4 *)(puVar7 + 0x10) = puVar6[0x20];
            *(undefined4 *)((longlong)puVar7 + 0x84) = uVar1;
            *(undefined4 *)(puVar7 + 0x11) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x8c) = uVar3;
            return;
        }
        FUN_1407db590(param_2,puVar5,0x90);
        return;
    }
    if ((((uint)puVar5 | (uint)param_2) & 0xf) == 0) {
        lVar4 = 3;
        do {
            puVar7 = param_2;
            puVar6 = puVar5;
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *(undefined4 *)puVar7 = *puVar6;
            *(undefined4 *)((longlong)puVar7 + 4) = uVar1;
            *(undefined4 *)(puVar7 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
            uVar1 = puVar6[5];
            uVar2 = puVar6[6];
            uVar3 = puVar6[7];
            *(undefined4 *)(puVar7 + 2) = puVar6[4];
            *(undefined4 *)((longlong)puVar7 + 0x14) = uVar1;
            *(undefined4 *)(puVar7 + 3) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar3;
            uVar1 = puVar6[9];
            uVar2 = puVar6[10];
            uVar3 = puVar6[0xb];
            *(undefined4 *)(puVar7 + 4) = puVar6[8];
            *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
            *(undefined4 *)(puVar7 + 5) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
            uVar1 = puVar6[0xd];
            uVar2 = puVar6[0xe];
            uVar3 = puVar6[0xf];
            *(undefined4 *)(puVar7 + 6) = puVar6[0xc];
            *(undefined4 *)((longlong)puVar7 + 0x34) = uVar1;
            *(undefined4 *)(puVar7 + 7) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar3;
            uVar1 = puVar6[0x11];
            uVar2 = puVar6[0x12];
            uVar3 = puVar6[0x13];
            *(undefined4 *)(puVar7 + 8) = puVar6[0x10];
            *(undefined4 *)((longlong)puVar7 + 0x44) = uVar1;
            *(undefined4 *)(puVar7 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar3;
            uVar1 = puVar6[0x15];
            uVar2 = puVar6[0x16];
            uVar3 = puVar6[0x17];
            *(undefined4 *)(puVar7 + 10) = puVar6[0x14];
            *(undefined4 *)((longlong)puVar7 + 0x54) = uVar1;
            *(undefined4 *)(puVar7 + 0xb) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar3;
            uVar1 = puVar6[0x19];
            uVar2 = puVar6[0x1a];
            uVar3 = puVar6[0x1b];
            *(undefined4 *)(puVar7 + 0xc) = puVar6[0x18];
            *(undefined4 *)((longlong)puVar7 + 100) = uVar1;
            *(undefined4 *)(puVar7 + 0xd) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar3;
            uVar1 = puVar6[0x1d];
            uVar2 = puVar6[0x1e];
            uVar3 = puVar6[0x1f];
            *(undefined4 *)(puVar7 + 0xe) = puVar6[0x1c];
            *(undefined4 *)((longlong)puVar7 + 0x74) = uVar1;
            *(undefined4 *)(puVar7 + 0xf) = uVar2;
            *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar3;
            lVar4 = lVar4 + -1;
            puVar5 = puVar6 + 0x20;
            param_2 = puVar7 + 0x10;
        } while (lVar4 != 0);
        uVar1 = puVar6[0x21];
        uVar2 = puVar6[0x22];
        uVar3 = puVar6[0x23];
        *(undefined4 *)(puVar7 + 0x10) = puVar6[0x20];
        *(undefined4 *)((longlong)puVar7 + 0x84) = uVar1;
        *(undefined4 *)(puVar7 + 0x11) = uVar2;
        *(undefined4 *)((longlong)puVar7 + 0x8c) = uVar3;
        return;
    }
    FUN_1407db590(param_2,puVar5,400);
    return;
}



undefined8 * FUN_14041fd30(undefined8 *param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 1) = param_2;
    *param_1 = &PTR_FUN_140b66a40;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    return param_1;
}



void FUN_14041fe10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined4 uVar3;

    puVar1 = (undefined4 *)FUN_1406622c0(param_2,param_3);
    lVar2 = 0;
    uVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1);
    }
    if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined4 **)(*param_4 + -8) = uVar3;
    return;
}



void FUN_14041fea0(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    ulonglong uVar4;

    uVar4 = param_3 & 0xffffffff;
    puVar2 = (undefined8 *)FUN_1400580e0(param_2,param_3 & 0xffffffff);
    if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) != 0)) {
        plVar3 = (longlong *)FUN_140056ab0(param_2,uVar4 & 0xffffffff,"Game.ItemData");
    }
    else {
        plVar3 = (longlong *)0x0;
    }
    *param_4 = *param_4 + 8;
    lVar1 = *plVar3;
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x4a0) != 0)) {
        **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
        return;
    }
    **(undefined8 **)(*param_4 + -8) = 0;
    return;
}



void FUN_14041ff50(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong *plVar2;
    ulonglong uVar3;

    uVar3 = param_3 & 0xffffffff;
    puVar1 = (undefined8 *)FUN_1400580e0(param_2,param_3 & 0xffffffff);
    if ((puVar1 == &DAT_140a12138) || (*(int *)(puVar1 + 1) != 0)) {
        plVar2 = (longlong *)FUN_140056ab0(param_2,uVar3 & 0xffffffff,"Game.ItemData");
    }
    else {
        plVar2 = (longlong *)0x0;
    }
    *param_4 = *param_4 + 8;
    if ((undefined8 *)*plVar2 != (undefined8 *)0x0) {
        **(undefined8 **)(*param_4 + -8) = *(undefined8 *)*plVar2;
        return;
    }
    **(undefined8 **)(*param_4 + -8) = 0;
    return;
}



void FUN_14041ffd0(undefined8 param_1,longlong param_2,longlong *param_3)

{
    undefined4 local_res18 [4];

    *param_3 = *param_3 + 8;
    if (*(longlong *)(*param_3 + -8) == 0) {
        *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        return;
    }
    local_res18[0] = **(undefined4 **)(*(longlong *)(*param_3 + -8) + 0x70);
    FUN_1403d3470(param_2,local_res18);
    return;
}



void FUN_140420020(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 uVar1;

    uVar1 = FUN_1405e9400(param_2,param_3);
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = uVar1;
    return;
}



void FUN_140420080(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 uVar1;

    uVar1 = FUN_140056ab0(param_2,param_3,"Game.Money");
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = uVar1;
    return;
}



void FUN_1404200d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined8 uVar3;

    *param_3 = *param_3 + 8;
    uVar2 = FUN_140629af0(DAT_140c65898 + 0x6bc8,
                          (ulonglong)*(uint *)(*param_3 + -8) | 0x500000000000000);
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    uVar3 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_1406b33f0(param_2,uVar2);
    return;
}



void FUN_140420250(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_140056ab0(param_2,param_3,"Game.Quest");
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *puVar1;
    return;
}



void FUN_1404202c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.PathMission");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420340(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.PathEpisode");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_1404203c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.PublicEvent");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420440(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.PublicEventObjective");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_1404204c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.ICComm");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_140420520(undefined8 param_1,longlong param_2,longlong *param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong *plVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    int iVar12;

    *param_3 = *param_3 + 8;
    lVar1 = *(longlong *)(*(longlong *)(*param_3 + -8) + 8);
    lVar11 = *(longlong *)(lVar1 + 0x10);
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    uVar9 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar9;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    iVar7 = 1;
    while (lVar11 != lVar1) {
        pdVar3 = *(double **)(param_2 + 0x10);
        iVar12 = iVar7 + 1;
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar7;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_2);
        }
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        uVar9 = FUN_14005c1b0(param_2,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar9;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        plVar4 = *(longlong **)(lVar11 + 0x20);
        lVar10 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (lVar10 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar2 = *(undefined8 **)(param_2 + 0x10);
            uVar9 = FUN_140062650(param_2,&DAT_140b66e88,4);
            *(undefined4 *)(puVar2 + 1) = 4;
            *puVar2 = uVar9;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar9 = (**(code **)(*plVar4 + 0x18))(plVar4);
            FUN_140649930(param_2,uVar9);
            lVar10 = *(longlong *)(param_2 + 0x10);
            FUN_14005ea50(param_2,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
        }
        lVar10 = (**(code **)(*plVar4 + 8))(plVar4);
        if (lVar10 != 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
            FUN_1400f0090(param_2);
        }
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_2);
        }
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        uVar9 = FUN_140062650(param_2,"ptMap",5);
        *(undefined4 *)(puVar2 + 1) = 4;
        *puVar2 = uVar9;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_2);
        }
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        uVar9 = FUN_14005c1b0(param_2,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar9;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        fVar5 = *(float *)(plVar4 + 0x28);
        fVar6 = *(float *)((longlong)plVar4 + 0x144);
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_2);
        }
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        uVar9 = FUN_140062650(param_2,&DAT_140b66e90,1);
        *(undefined4 *)(puVar2 + 1) = 4;
        *puVar2 = uVar9;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        pdVar3 = *(double **)(param_2 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)(int)fVar5;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(param_2,0xfffffffd);
        FUN_14005ea50(param_2,uVar9,*(longlong *)(param_2 + 0x10) + -0x20,
                      *(longlong *)(param_2 + 0x10) + -0x10);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_2);
        }
        puVar2 = *(undefined8 **)(param_2 + 0x10);
        uVar9 = FUN_140062650(param_2,&DAT_140b66e7c,1);
        *(undefined4 *)(puVar2 + 1) = 4;
        *puVar2 = uVar9;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        pdVar3 = *(double **)(param_2 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)(int)fVar6;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(param_2,0xfffffffd);
        FUN_14005ea50(param_2,uVar9,*(longlong *)(param_2 + 0x10) + -0x20,
                      *(longlong *)(param_2 + 0x10) + -0x10);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
        lVar10 = *(longlong *)(param_2 + 0x10);
        FUN_14005ea50(param_2,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
        lVar10 = *(longlong *)(param_2 + 0x10);
        FUN_14005ea50(param_2,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
        lVar10 = *(longlong *)(lVar11 + 0x18);
        iVar7 = iVar12;
        if (lVar10 == 0) {
            lVar10 = *(longlong *)(lVar11 + 8);
            if (lVar11 == *(longlong *)(lVar10 + 0x18)) {
                do {
                    lVar11 = lVar10;
                    lVar10 = *(longlong *)(lVar11 + 8);
                } while (lVar11 == *(longlong *)(lVar10 + 0x18));
            }
            if (*(longlong *)(lVar11 + 0x18) != lVar10) {
                lVar11 = lVar10;
            }
        }
        else {
            for (lVar8 = *(longlong *)(lVar10 + 0x10); lVar11 = lVar10, lVar8 != 0;
                 lVar8 = *(longlong *)(lVar8 + 0x10)) {
                lVar10 = lVar8;
            }
        }
    }
    return;
}



void FUN_140420990(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.GalacticArchiveArticle");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420a10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.GalacticArchiveEntry");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420a90(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.Challenges");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420b10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.SoldierEvent");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420b90(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.Achievement");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420bf0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined8 uVar1;

    *param_3 = *param_3 + 8;
    uVar1 = FUN_140224d00(*(undefined4 *)(*param_3 + -8));
    FUN_140434100(param_2,uVar1);
    return;
}



void FUN_140420c20(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.PetFlair");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420c80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined **local_18;
    undefined4 local_10;
    undefined4 local_c;

    *param_3 = *param_3 + 8;
    local_18 = &PTR_FUN_140b6fe30;
    local_10 = **(undefined4 **)(*param_3 + -8);
    local_c = (*(undefined4 **)(*param_3 + -8))[1];
    FUN_1406b7660(param_2,&local_18);
    return;
}



void FUN_140420cc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar2 = FUN_140056ab0(param_2,param_3,"Game.PetCustomization");
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = *(longlong *)(lVar2 + 8);
    }
    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    uVar3 = FUN_1403a8810(DAT_140c65898,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
    *puVar1 = uVar3;
    return;
}



void FUN_140420d30(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;

    *param_3 = *param_3 + 8;
    lVar1 = FUN_14020fd40(*(undefined4 *)(*param_3 + -8));
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc) & 8) == 0)) {
        FUN_1406b91f0(param_2,lVar1);
        return;
    }
    return;
}



void FUN_140420d70(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.LiveEvent");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420dd0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;

    *param_3 = *param_3 + 8;
    lVar1 = FUN_140200aa0(*(undefined4 *)(*param_3 + -8));
    if (lVar1 != 0) {
        FUN_1406a2b80(param_2,lVar1);
        return;
    }
    return;
}



void FUN_140420e10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_2,param_3,"Game.GenericMapNode");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    *param_4 = *param_4 + 8;
    **(undefined8 **)(*param_4 + -8) = *(undefined8 *)(lVar1 + 8);
    return;
}



void FUN_140420e90(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.ChatChannel");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_140420f10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.Guild");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_140420f90(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.HexGroups");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_140421010(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.CommodityOrder");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_140421090(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.ItemAuction");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_1404210f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    *param_3 = *param_3 + 8;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if (lVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar1 + 0x60);
        uVar5 = 0;
        if (uVar2 != 0) {
            do {
                if (uVar5 < uVar2) {
                    if (uVar5 == 0) {
                        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8);
                    }
                    else {
                        uVar3 = uVar5;
                        if (uVar5 < *(ulonglong *)(lVar1 + 0x68) || uVar5 == *(ulonglong *)(lVar1 + 0x68)) {
                            uVar3 = uVar5 - 1;
                        }
                        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar3 * 8);
                    }
                }
                else {
                    lVar4 = 0;
                }
                if ((*(int *)(lVar4 + 0x10) == (int)**(undefined8 **)(*param_3 + -8)) &&
                    (*(longlong *)(lVar4 + 0x18) == (*(undefined8 **)(*param_3 + -8))[1]))
                    goto LAB_140421179;
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
        }
    }
    uVar5 = 0xffffffffffffffff;
    LAB_140421179:
    FUN_1406054d0(DAT_140c65898 + 0x6c10,param_2,uVar5);
    return;
}



void FUN_1404211b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined4 local_res18 [4];

    *param_3 = *param_3 + 8;
    local_res18[0] = *(undefined4 *)(*param_3 + -8);
    FUN_140433830(param_2,local_res18);
    return;
}



void FUN_1404211e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.Contract");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_140421260(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.RewardTrack");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_1404212e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    uVar2 = FUN_140056ab0(param_2,param_3,"Game.HousingPlot");
    *puVar1 = uVar2;
    return;
}



void FUN_140421320(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined4 local_res18 [4];

    *param_3 = *param_3 + 8;
    local_res18[0] = *(undefined4 *)(*param_3 + -8);
    FUN_1404339c0(param_2,local_res18);
    return;
}



void FUN_140421350(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    longlong lVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    lVar2 = FUN_140056ab0(param_2,param_3,"Game.Residence");
    if (lVar2 == 0) {
        *puVar1 = 0;
        return;
    }
    *puVar1 = *(undefined8 *)(lVar2 + 8);
    return;
}



void FUN_1404213d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    uVar2 = FUN_140056ab0(param_2,param_3,"Game.Decor");
    *puVar1 = uVar2;
    return;
}



void FUN_140421410(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined8 uVar1;

    *param_3 = *param_3 + 8;
    uVar1 = FUN_1405a9420(param_1,*(undefined4 *)(*param_3 + -8));
    FUN_14069f380(param_2,uVar1);
    return;
}



void FUN_140421440(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    *param_4 = *param_4 + 8;
    puVar1 = *(undefined8 **)(*param_4 + -8);
    uVar2 = FUN_140056ab0(param_2,param_3,"Game.QuestCategory");
    *puVar1 = uVar2;
    return;
}



undefined4 FUN_140421470(undefined8 param_1,longlong param_2)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    short *psVar10;
    undefined4 uVar11;
    longlong *plVar12;
    short *psVar13;
    short *psVar14;
    int iVar15;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    longlong local_78;
    longlong local_70;
    short *local_68;
    short *local_60;
    undefined local_58 [8];
    longlong local_50;

    if ((((param_2 == 0) || (*(char *)(param_2 + 0x138) == '\0')) ||
         (lVar8 = FUN_140137390(param_2,L"OptionsScreen"), lVar8 != 0)) ||
        ((lVar8 = FUN_140137390(param_2,L"FrontEndScreen"), lVar8 != 0 ||
                                                            (lVar8 = FUN_140137390(param_2,L"ExternalTool"), lVar8 != 0)))) {
        return 0;
    }
    psVar10 = (short *)&DAT_1409e8b4c;
    if (*(short **)(DAT_140c635f0 + 0x1670) != (short *)0x0) {
        psVar10 = *(short **)(DAT_140c635f0 + 0x1670);
    }
    lVar9 = 0;
    local_res20 = 0;
    sVar3 = *psVar10;
    lVar8 = lVar9;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = psVar10[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_res20 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_res20,psVar10,lVar8);
    puVar2 = (undefined2 *)(lVar8 + local_res20);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    local_res18 = 0;
    psVar10 = (short *)&DAT_1409e8b1c;
    if (*(short **)(DAT_140c635f0 + 0x1678) != (short *)0x0) {
        psVar10 = *(short **)(DAT_140c635f0 + 0x1678);
    }
    sVar3 = *psVar10;
    lVar8 = lVar9;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = psVar10[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_res18 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_res18,psVar10,lVar8);
    puVar2 = (undefined2 *)(lVar8 + local_res18);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    if (DAT_140c65898 == 0) {
        psVar10 = &DAT_1409e8b7c;
    }
    else {
        psVar10 = (short *)&DAT_1409e8bbc;
        if (*(short **)(DAT_140c65898 + 0x88) != (short *)0x0) {
            psVar10 = *(short **)(DAT_140c65898 + 0x88);
        }
    }
    local_res10 = 0;
    sVar3 = *psVar10;
    while (sVar3 != 0) {
        lVar9 = lVar9 + 1;
        sVar3 = psVar10[lVar9];
    }
    lVar8 = lVar9 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_res10 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_res10,psVar10,lVar8);
    puVar2 = (undefined2 *)(lVar8 + local_res10);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    psVar10 = (short *)FUN_14018b280(0x10);
    if (psVar10 != (short *)0x0) {
        *psVar10 = 0;
    }
    iVar15 = 4;
    psVar13 = psVar10 + 8;
    psVar14 = psVar10;
    while( true ) {
        lVar9 = 0;
        lVar8 = FUN_1404326c0(local_58,iVar15);
        psVar4 = *(short **)(lVar8 + 8);
        *(short **)(lVar8 + 8) = psVar14;
        local_68 = *(short **)(lVar8 + 0x10);
        *(short **)(lVar8 + 0x10) = psVar10;
        local_60 = *(short **)(lVar8 + 0x18);
        *(short **)(lVar8 + 0x18) = psVar13;
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        sVar3 = *psVar4;
        lVar8 = lVar9;
        while (sVar3 != 0) {
            lVar8 = lVar8 + 1;
            sVar3 = psVar4[lVar8];
        }
        lVar8 = lVar8 * 2 >> 1;
        uVar1 = lVar8 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar9 = FUN_14018b280(uVar1 * 2,0);
        }
        lVar8 = lVar8 * 2;
        FUN_1407db590(lVar9,psVar4,lVar8);
        puVar2 = (undefined2 *)(lVar8 + lVar9);
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        lVar8 = *(longlong *)(param_2 + 0x120);
        lVar6 = lVar8;
        lVar5 = *(longlong *)(lVar8 + 8);
        while (lVar5 != 0) {
            iVar7 = FUN_1400454d0(*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),lVar9,puVar2
            );
            if (iVar7 < 0) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar6 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        if ((lVar6 == lVar8) ||
            (iVar7 = FUN_1400454d0(lVar9,puVar2,*(undefined8 *)(lVar6 + 0x28),
                                   *(undefined8 *)(lVar6 + 0x30)), iVar7 < 0)) {
            local_70 = lVar8;
            plVar12 = &local_70;
        }
        else {
            local_78 = lVar6;
            plVar12 = &local_78;
        }
        lVar8 = *plVar12;
        if (lVar9 != 0) {
            FUN_14018b900(lVar9);
        }
        if ((lVar8 != *(longlong *)(param_2 + 0x120)) && (*(int *)(lVar8 + 0x40) != 2)) break;
        iVar15 = iVar15 + -1;
        psVar10 = local_68;
        psVar13 = local_60;
        psVar14 = psVar4;
        if (iVar15 < 2) {
            uVar11 = 2;
            LAB_14042181b:
            if (psVar4 != (short *)0x0) {
                FUN_14018b900(psVar4,0);
            }
            if (local_res10 != 0) {
                FUN_14018b900(local_res10,0);
            }
            if (local_res18 != 0) {
                FUN_14018b900(local_res18,0);
            }
            if (local_res20 != 0) {
                FUN_14018b900(local_res20,0);
            }
            return uVar11;
        }
    }
    uVar11 = *(undefined4 *)(lVar8 + 0x40);
    goto LAB_14042181b;
}



undefined8 * FUN_1404218a0(undefined8 *param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    int iVar7;
    int iVar8;
    undefined2 *puVar9;
    undefined *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;

    FUN_1400e2ef0(param_1,L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
                  L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",L"GameMgr",FUN_140422f30);
    puVar14 = (undefined8 *)0x0;
    *param_1 = &PTR_LAB_140b66df0;
    *(undefined4 *)(param_1 + 0x1c6) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    param_1[0x1c9] = 0;
    param_1[0x1ca] = 0;
    *(undefined *)(param_1 + 0x1cb) = 0;
    param_1[0x1c7] = &PTR_FUN_140b702f0;
    param_1[0x1cd] = 0;
    param_1[0x1ce] = 0;
    param_1[0x1cf] = 0;
    puVar9 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x1cd] = puVar9;
    param_1[0x1ce] = puVar9;
    param_1[0x1cf] = puVar9 + 8;
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    param_1[0x1d0] = 0;
    *(undefined4 *)((longlong)param_1 + 0xe8c) = 0;
    *(undefined4 *)(param_1 + 0x1d2) = 200;
    *(undefined4 *)((longlong)param_1 + 0xe94) = 1;
    *(undefined4 *)(param_1 + 0x1d3) = 200;
    iVar7 = DAT_140c636a8;
    iVar2 = DAT_140c636a8 + -200;
    *(int *)(param_1 + 0x1d1) = iVar2;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    param_1[0x1d6] = &LAB_140427d20;
    param_1[0x1d5] = param_1;
    param_1[0x1d7] = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 4;
    param_1[0x1db] = 0;
    param_1[0x1dc] = 0;
    param_1[0x1de] = 0;
    param_1[0x1df] = 0;
    *(undefined4 *)(param_1 + 0x1d9) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xf0c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0xf14) = 0;
    *(undefined4 *)(param_1 + 0x1e3) = 0x32;
    *(undefined4 *)((longlong)param_1 + 0xf1c) = 1;
    *(undefined4 *)(param_1 + 0x1e4) = 0x32;
    iVar8 = iVar7 + -0x32;
    *(int *)(param_1 + 0x1e2) = iVar8;
    *(undefined4 *)(param_1 + 0x1e5) = 0;
    param_1[0x1e7] = &LAB_140426610;
    param_1[0x1e6] = param_1;
    param_1[0x1e8] = 0;
    *(undefined4 *)(param_1 + 0x1e9) = 4;
    param_1[0x1ec] = 0;
    param_1[0x1ed] = 0;
    param_1[0x1ef] = 0;
    param_1[0x1f0] = 0;
    *(undefined4 *)(param_1 + 0x1ea) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xf94) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0xf9c) = 0;
    *(undefined4 *)(param_1 + 500) = 0x32;
    *(undefined4 *)((longlong)param_1 + 0xfa4) = 1;
    *(int *)(param_1 + 499) = iVar8;
    *(undefined4 *)(param_1 + 0x1f5) = 0x32;
    *(undefined4 *)(param_1 + 0x1f6) = 0;
    param_1[0x1f7] = param_1;
    param_1[0x1f8] = &LAB_140426aa0;
    param_1[0x1f9] = 0;
    *(undefined4 *)(param_1 + 0x1fa) = 4;
    param_1[0x1fd] = 0;
    param_1[0x1fe] = 0;
    param_1[0x200] = 0;
    param_1[0x201] = 0;
    *(undefined4 *)(param_1 + 0x1fb) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x101c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x1024) = 0;
    *(undefined4 *)(param_1 + 0x205) = 0x32;
    *(undefined4 *)((longlong)param_1 + 0x102c) = 1;
    *(int *)(param_1 + 0x204) = iVar8;
    *(undefined4 *)(param_1 + 0x206) = 0x32;
    *(undefined4 *)(param_1 + 0x207) = 0;
    param_1[0x208] = param_1;
    param_1[0x209] = &LAB_140426b00;
    param_1[0x20a] = 0;
    *(undefined4 *)(param_1 + 0x20b) = 4;
    param_1[0x20e] = 0;
    param_1[0x20f] = 0;
    param_1[0x211] = 0;
    param_1[0x212] = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x10a4) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x10ac) = 0;
    *(undefined4 *)(param_1 + 0x216) = 200;
    *(undefined4 *)((longlong)param_1 + 0x10b4) = 1;
    *(int *)(param_1 + 0x215) = iVar2;
    *(undefined4 *)(param_1 + 0x217) = 200;
    *(undefined4 *)(param_1 + 0x218) = 0;
    param_1[0x219] = param_1;
    param_1[0x21a] = &LAB_140426b20;
    param_1[0x21b] = 0;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    param_1[0x21f] = 0;
    param_1[0x220] = 0;
    param_1[0x222] = 0;
    param_1[0x223] = 0;
    *(undefined4 *)(param_1 + 0x21d) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x112c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x1134) = 0;
    *(undefined4 *)(param_1 + 0x227) = 0x32;
    *(undefined4 *)((longlong)param_1 + 0x113c) = 1;
    *(int *)(param_1 + 0x226) = iVar8;
    *(undefined4 *)(param_1 + 0x228) = 0x32;
    *(undefined4 *)(param_1 + 0x229) = 0;
    param_1[0x22a] = param_1;
    iVar7 = iVar7 + -1000;
    param_1[0x22b] = &LAB_140426b40;
    param_1[0x22c] = 0;
    *(undefined4 *)(param_1 + 0x22d) = 4;
    param_1[0x230] = 0;
    param_1[0x231] = 0;
    param_1[0x233] = 0;
    param_1[0x234] = 0;
    *(undefined4 *)(param_1 + 0x22e) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x11b4) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x11bc) = 0;
    *(undefined4 *)(param_1 + 0x238) = 1000;
    *(undefined4 *)((longlong)param_1 + 0x11c4) = 1;
    *(int *)(param_1 + 0x237) = iVar7;
    *(undefined4 *)(param_1 + 0x239) = 1000;
    *(undefined4 *)(param_1 + 0x23a) = 0;
    param_1[0x23b] = param_1;
    param_1[0x23c] = &LAB_140426ba0;
    param_1[0x23d] = 0;
    *(undefined4 *)(param_1 + 0x23e) = 4;
    param_1[0x241] = 0;
    param_1[0x242] = 0;
    param_1[0x244] = 0;
    param_1[0x245] = 0;
    *(undefined4 *)(param_1 + 0x23f) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x123c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x1244) = 0;
    *(undefined4 *)(param_1 + 0x249) = 0x32;
    *(undefined4 *)((longlong)param_1 + 0x124c) = 1;
    *(int *)(param_1 + 0x248) = iVar8;
    *(undefined4 *)(param_1 + 0x24a) = 0x32;
    *(undefined4 *)(param_1 + 0x24b) = 0;
    param_1[0x24c] = param_1;
    param_1[0x24d] = &LAB_140429790;
    param_1[0x24e] = 0;
    *(undefined4 *)(param_1 + 0x24f) = 4;
    param_1[0x252] = 0;
    param_1[0x253] = 0;
    param_1[0x255] = 0;
    param_1[0x256] = 0;
    *(undefined4 *)(param_1 + 0x250) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x12c4) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x12cc) = 0;
    *(undefined4 *)(param_1 + 0x25a) = 200;
    *(undefined4 *)((longlong)param_1 + 0x12d4) = 1;
    *(int *)(param_1 + 0x259) = iVar2;
    *(undefined4 *)(param_1 + 0x25b) = 200;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    param_1[0x25d] = param_1;
    param_1[0x25e] = FUN_1404297c0;
    param_1[0x25f] = 0;
    *(undefined4 *)(param_1 + 0x260) = 4;
    param_1[0x263] = 0;
    param_1[0x264] = 0;
    param_1[0x266] = 0;
    param_1[0x267] = 0;
    *(undefined4 *)(param_1 + 0x261) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x134c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x1354) = 0;
    *(undefined4 *)(param_1 + 0x26b) = 1000;
    *(undefined4 *)((longlong)param_1 + 0x135c) = 1;
    *(int *)(param_1 + 0x26a) = iVar7;
    *(undefined4 *)(param_1 + 0x26c) = 1000;
    *(undefined4 *)(param_1 + 0x26d) = 0;
    param_1[0x26e] = param_1;
    param_1[0x26f] = &LAB_14042ff30;
    param_1[0x270] = 0;
    *(undefined4 *)(param_1 + 0x271) = 4;
    param_1[0x274] = 0;
    param_1[0x275] = 0;
    param_1[0x277] = 0;
    param_1[0x278] = 0;
    *(undefined4 *)(param_1 + 0x272) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x13d4) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x13dc) = 0;
    *(undefined4 *)(param_1 + 0x27c) = 1000;
    *(undefined4 *)((longlong)param_1 + 0x13e4) = 1;
    *(int *)(param_1 + 0x27b) = iVar7;
    *(undefined4 *)(param_1 + 0x27d) = 1000;
    *(undefined4 *)(param_1 + 0x27e) = 0;
    param_1[0x27f] = param_1;
    param_1[0x280] = &LAB_14042ff10;
    param_1[0x281] = 0;
    *(undefined4 *)(param_1 + 0x282) = 4;
    param_1[0x285] = 0;
    param_1[0x286] = 0;
    param_1[0x288] = 0;
    param_1[0x289] = 0;
    *(undefined4 *)(param_1 + 0x283) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x145c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x1464) = 0;
    *(undefined4 *)(param_1 + 0x28d) = 200;
    *(undefined4 *)((longlong)param_1 + 0x146c) = 1;
    *(int *)(param_1 + 0x28c) = iVar2;
    *(undefined4 *)(param_1 + 0x28e) = 200;
    *(undefined4 *)(param_1 + 0x28f) = 0;
    param_1[0x290] = param_1;
    param_1[0x291] = &LAB_140430de0;
    param_1[0x292] = 0;
    *(undefined4 *)(param_1 + 0x293) = 4;
    param_1[0x296] = 0;
    param_1[0x297] = 0;
    param_1[0x299] = 0;
    param_1[0x29a] = 0;
    *(undefined4 *)(param_1 + 0x294) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x14e4) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x14ec) = 0;
    *(undefined4 *)(param_1 + 0x29e) = 200;
    *(undefined4 *)((longlong)param_1 + 0x14f4) = 1;
    *(int *)(param_1 + 0x29d) = iVar2;
    *(undefined4 *)(param_1 + 0x29f) = 200;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    param_1[0x2a1] = param_1;
    param_1[0x2a2] = &LAB_140430f60;
    param_1[0x2a3] = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 4;
    param_1[0x2a7] = 0;
    param_1[0x2a8] = 0;
    param_1[0x2aa] = 0;
    param_1[0x2ab] = 0;
    *(undefined4 *)(param_1 + 0x2a5) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x156c) = 0xd;
    *(undefined4 *)((longlong)param_1 + 0x1574) = 0;
    *(undefined4 *)(param_1 + 0x2af) = 1000;
    *(undefined4 *)((longlong)param_1 + 0x157c) = 1;
    *(int *)(param_1 + 0x2ae) = iVar7;
    *(undefined4 *)(param_1 + 0x2b0) = 1000;
    *(undefined4 *)(param_1 + 0x2b1) = 0;
    param_1[0x2b2] = param_1;
    param_1[0x2b3] = FUN_140426910;
    param_1[0x2b4] = 0;
    *(undefined4 *)(param_1 + 0x2b5) = 4;
    param_1[0x2b8] = 0;
    param_1[0x2b9] = 0;
    param_1[699] = 0;
    param_1[700] = 0;
    *(undefined4 *)(param_1 + 0x2b6) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x15f4) = 0xd;
    *(int *)(param_1 + 0x2bf) = iVar8;
    *(undefined4 *)((longlong)param_1 + 0x15fc) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0x32;
    *(undefined4 *)((longlong)param_1 + 0x1604) = 1;
    *(undefined4 *)(param_1 + 0x2c1) = 0x32;
    *(undefined4 *)(param_1 + 0x2c2) = 0;
    param_1[0x2c3] = param_1;
    param_1[0x2c4] = &LAB_140426a80;
    param_1[0x2c5] = 0;
    *(undefined4 *)(param_1 + 0x2c6) = 4;
    param_1[0x2c9] = 0;
    param_1[0x2ca] = 0;
    param_1[0x2cc] = 0;
    param_1[0x2cd] = 0;
    *(undefined4 *)(param_1 + 0x2c7) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x167c) = 0xd;
    *(int *)(param_1 + 0x2d0) = iVar7;
    *(undefined4 *)((longlong)param_1 + 0x1684) = 0;
    *(undefined4 *)(param_1 + 0x2d1) = 1000;
    *(undefined4 *)((longlong)param_1 + 0x168c) = 1;
    *(undefined4 *)(param_1 + 0x2d2) = 1000;
    *(undefined4 *)(param_1 + 0x2d3) = 0;
    param_1[0x2d4] = param_1;
    param_1[0x2d5] = &LAB_14042d210;
    param_1[0x2d6] = 0;
    *(undefined4 *)(param_1 + 0x2d7) = 4;
    param_1[0x2da] = 0;
    param_1[0x2db] = 0;
    param_1[0x2dd] = 0;
    param_1[0x2de] = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1704) = 0xd;
    *(int *)(param_1 + 0x2e1) = iVar2;
    *(undefined4 *)((longlong)param_1 + 0x170c) = 0;
    *(undefined4 *)(param_1 + 0x2e2) = 200;
    *(undefined4 *)((longlong)param_1 + 0x1714) = 1;
    *(undefined4 *)(param_1 + 0x2e3) = 200;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    param_1[0x2e5] = param_1;
    param_1[0x2e6] = &LAB_140431280;
    param_1[0x2e7] = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 4;
    param_1[0x2eb] = 0;
    param_1[0x2ec] = 0;
    param_1[0x2ee] = 0;
    param_1[0x2ef] = 0;
    *(undefined4 *)(param_1 + 0x2e9) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x178c) = 0xd;
    puVar10 = (undefined *)FUN_14018b280(0x28);
    param_1[0x2f4] = 0;
    param_1[0x2f3] = puVar10;
    *puVar10 = 0;
    *(undefined8 *)(param_1[0x2f3] + 8) = 0;
    *(undefined8 *)(param_1[0x2f3] + 0x10) = param_1[0x2f3];
    *(undefined8 *)(param_1[0x2f3] + 0x18) = param_1[0x2f3];
    puVar10 = (undefined *)FUN_14018b280(0x28);
    param_1[0x2f8] = 0;
    param_1[0x2f7] = puVar10;
    *puVar10 = 0;
    *(undefined8 *)(param_1[0x2f7] + 8) = 0;
    *(undefined8 *)(param_1[0x2f7] + 0x10) = param_1[0x2f7];
    *(undefined8 *)(param_1[0x2f7] + 0x18) = param_1[0x2f7];
    *(undefined4 *)(param_1 + 0x141) = 0x10;
    param_1[0x139] = param_1;
    FUN_1400e9c20(param_1,&PTR_s_GetLoadingModuleFolder_140c57760,1);
    iVar8 = *(int *)((longlong)param_1 + 0x3c);
    if (0x556 < iVar8) {
        iVar8 = 0x556;
    }
    *(int *)(param_1 + 7) = iVar8;
    puVar11 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_LAB_140b66dd8;
        puVar13 = puVar11;
    }
    puVar11 = param_1 + 0x30;
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66da8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66dc0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d18;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d30;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66ce8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d00;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d78;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d90;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d48;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66d60;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66c58;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66c70;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66c28;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66c40;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66cb8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66cd0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66c88;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66ca0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66b98;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66bb0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66b68;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66b80;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66bf8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66c10;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66bc8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66be0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66ad8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66af0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66aa8;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66ac0;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66b38;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66b50;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar12 = (undefined8 *)FUN_14018b280(8);
    puVar13 = puVar14;
    if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_LAB_140b66b08;
        puVar13 = puVar12;
    }
    FUN_1400f1b30(puVar11,puVar13);
    puVar13 = (undefined8 *)FUN_14018b280(8);
    if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &PTR_LAB_140b66b20;
        puVar14 = puVar13;
    }
    FUN_1400f1b30(puVar11,puVar14);
    DAT_140c658a8 = (undefined4 *)FUN_14018b280(0x40);
    if (DAT_140c658a8 == (undefined4 *)0x0) {
        DAT_140c658a8 = (undefined4 *)0x0;
    }
    else {
        *(undefined8 *)(DAT_140c658a8 + 8) = 0;
        *(undefined8 *)(DAT_140c658a8 + 10) = 0;
        *DAT_140c658a8 = 0;
        *(code **)(DAT_140c658a8 + 4) = FUN_140429630;
        *(undefined8 **)(DAT_140c658a8 + 2) = param_1;
        *(undefined8 *)(DAT_140c658a8 + 6) = 0;
        *(undefined8 *)(DAT_140c658a8 + 0xc) = 0;
        *(undefined8 *)(DAT_140c658a8 + 0xe) = 0;
    }
    DAT_140c658b0 = (undefined4 *)FUN_14018b280(0x40);
    if (DAT_140c658b0 == (undefined4 *)0x0) {
        DAT_140c658b0 = (undefined4 *)0x0;
    }
    else {
        *(undefined8 *)(DAT_140c658b0 + 8) = 0;
        *(undefined8 *)(DAT_140c658b0 + 10) = 0;
        *DAT_140c658b0 = 0;
        *(code **)(DAT_140c658b0 + 4) = FUN_140429630;
        *(undefined8 **)(DAT_140c658b0 + 2) = param_1;
        *(undefined8 *)(DAT_140c658b0 + 6) = 0;
        *(undefined8 *)(DAT_140c658b0 + 0xc) = 0;
        *(undefined8 *)(DAT_140c658b0 + 0xe) = 0;
    }
    puVar6 = DAT_140c658b0;
    puVar5 = DAT_140c658a8;
    lVar4 = DAT_140c65898;
    plVar3 = (longlong *)(DAT_140c65898 + 0x6cb8);
    if (*(longlong *)(DAT_140c658a8 + 8) == 0) {
        *(longlong **)(DAT_140c658a8 + 8) = plVar3;
        plVar1 = (longlong *)(puVar5 + 10);
        *plVar1 = *plVar3;
        *plVar3 = (longlong)puVar5;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x20) = plVar1;
        }
    }
    plVar3 = (longlong *)(lVar4 + 0x6cc0);
    if (*(longlong *)(puVar6 + 8) == 0) {
        *(longlong **)(puVar6 + 8) = plVar3;
        plVar1 = (longlong *)(puVar6 + 10);
        *plVar1 = *plVar3;
        *plVar3 = (longlong)puVar6;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x20) = plVar1;
        }
    }
    FUN_1400e7190(param_1,L"TooltipStratum",0);
    FUN_1400e7190(param_1,L"DefaultStratum",0);
    FUN_1400e7190(param_1,L"FixedHudStratumHigh",0);
    FUN_1400e7190(param_1,L"FixedHudStratum",0);
    FUN_1400e7190(param_1,L"FixedHudStratumLow",0);
    FUN_1400e7190(param_1,L"InWorldHudStratum",1);
    return param_1;
}



undefined8 FUN_140422a10(undefined8 param_1,ulonglong param_2)

{
    FUN_140422a50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140422a50(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b66df0;
    if ((longlong *)param_1[0x1d0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1d0] + 8))();
        param_1[0x1d0] = 0;
    }
    lVar1 = DAT_140c658a8;
    if (DAT_140c658a8 != 0) {
        if (*(undefined8 **)(DAT_140c658a8 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(DAT_140c658a8 + 0x20) = *(undefined8 *)(DAT_140c658a8 + 0x28);
        }
        if (*(longlong *)(lVar1 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        FUN_14018b900(lVar1,0);
    }
    lVar1 = DAT_140c658b0;
    if (DAT_140c658b0 != 0) {
        if (*(undefined8 **)(DAT_140c658b0 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(DAT_140c658b0 + 0x20) = *(undefined8 *)(DAT_140c658b0 + 0x28);
        }
        if (*(longlong *)(lVar1 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        FUN_14018b900(lVar1,0);
    }
    FUN_140008410(param_1 + 0x2f6);
    FUN_14018b900(param_1[0x2f7],0);
    FUN_140008410(param_1 + 0x2f2);
    FUN_14018b900(param_1[0x2f3],0);
    FUN_140195d70(param_1 + 0x2e9);
    *(undefined4 *)(param_1 + 0x2e9) = 0;
    if ((undefined8 *)param_1[0x2eb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2eb] = param_1[0x2ec];
    }
    if ((undefined8 *)param_1[0x2ec] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2ec] = param_1[0x2eb];
    }
    param_1[0x2eb] = 0;
    param_1[0x2ec] = 0;
    FUN_140195d70(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    if ((undefined8 *)param_1[0x2da] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2da] = param_1[0x2db];
    }
    if ((undefined8 *)param_1[0x2db] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2db] = param_1[0x2da];
    }
    param_1[0x2da] = 0;
    param_1[0x2db] = 0;
    FUN_140195d70(param_1 + 0x2c7);
    *(undefined4 *)(param_1 + 0x2c7) = 0;
    if ((undefined8 *)param_1[0x2c9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2c9] = param_1[0x2ca];
    }
    if ((undefined8 *)param_1[0x2ca] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2ca] = param_1[0x2c9];
    }
    param_1[0x2c9] = 0;
    param_1[0x2ca] = 0;
    FUN_140195d70(param_1 + 0x2b6);
    *(undefined4 *)(param_1 + 0x2b6) = 0;
    if ((undefined8 *)param_1[0x2b8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2b8] = param_1[0x2b9];
    }
    if ((undefined8 *)param_1[0x2b9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2b9] = param_1[0x2b8];
    }
    param_1[0x2b8] = 0;
    param_1[0x2b9] = 0;
    FUN_140195d70(param_1 + 0x2a5);
    *(undefined4 *)(param_1 + 0x2a5) = 0;
    if ((undefined8 *)param_1[0x2a7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a7] = param_1[0x2a8];
    }
    if ((undefined8 *)param_1[0x2a8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a8] = param_1[0x2a7];
    }
    param_1[0x2a7] = 0;
    param_1[0x2a8] = 0;
    FUN_140195d70(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x294) = 0;
    if ((undefined8 *)param_1[0x296] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x296] = param_1[0x297];
    }
    if ((undefined8 *)param_1[0x297] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x297] = param_1[0x296];
    }
    param_1[0x296] = 0;
    param_1[0x297] = 0;
    FUN_140195d70(param_1 + 0x283);
    *(undefined4 *)(param_1 + 0x283) = 0;
    if ((undefined8 *)param_1[0x285] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x285] = param_1[0x286];
    }
    if ((undefined8 *)param_1[0x286] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x286] = param_1[0x285];
    }
    param_1[0x285] = 0;
    param_1[0x286] = 0;
    FUN_140195d70(param_1 + 0x272);
    *(undefined4 *)(param_1 + 0x272) = 0;
    if ((undefined8 *)param_1[0x274] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x274] = param_1[0x275];
    }
    if ((undefined8 *)param_1[0x275] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x275] = param_1[0x274];
    }
    param_1[0x274] = 0;
    param_1[0x275] = 0;
    FUN_140195d70(param_1 + 0x261);
    *(undefined4 *)(param_1 + 0x261) = 0;
    if ((undefined8 *)param_1[0x263] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x263] = param_1[0x264];
    }
    if ((undefined8 *)param_1[0x264] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x264] = param_1[0x263];
    }
    param_1[0x263] = 0;
    param_1[0x264] = 0;
    FUN_140195d70(param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x250) = 0;
    if ((undefined8 *)param_1[0x252] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x252] = param_1[0x253];
    }
    if ((undefined8 *)param_1[0x253] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x253] = param_1[0x252];
    }
    param_1[0x252] = 0;
    param_1[0x253] = 0;
    FUN_140195d70(param_1 + 0x23f);
    *(undefined4 *)(param_1 + 0x23f) = 0;
    if ((undefined8 *)param_1[0x241] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x241] = param_1[0x242];
    }
    if ((undefined8 *)param_1[0x242] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x242] = param_1[0x241];
    }
    param_1[0x241] = 0;
    param_1[0x242] = 0;
    FUN_140195d70(param_1 + 0x22e);
    *(undefined4 *)(param_1 + 0x22e) = 0;
    if ((undefined8 *)param_1[0x230] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x230] = param_1[0x231];
    }
    if ((undefined8 *)param_1[0x231] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x231] = param_1[0x230];
    }
    param_1[0x230] = 0;
    param_1[0x231] = 0;
    FUN_140195d70(param_1 + 0x21d);
    *(undefined4 *)(param_1 + 0x21d) = 0;
    if ((undefined8 *)param_1[0x21f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x21f] = param_1[0x220];
    }
    if ((undefined8 *)param_1[0x220] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x220] = param_1[0x21f];
    }
    param_1[0x21f] = 0;
    param_1[0x220] = 0;
    FUN_140195d70(param_1 + 0x20c);
    *(undefined4 *)(param_1 + 0x20c) = 0;
    if ((undefined8 *)param_1[0x20e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x20e] = param_1[0x20f];
    }
    if ((undefined8 *)param_1[0x20f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x20f] = param_1[0x20e];
    }
    param_1[0x20e] = 0;
    param_1[0x20f] = 0;
    FUN_140195d70(param_1 + 0x1fb);
    *(undefined4 *)(param_1 + 0x1fb) = 0;
    if ((undefined8 *)param_1[0x1fd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1fd] = param_1[0x1fe];
    }
    if ((undefined8 *)param_1[0x1fe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1fe] = param_1[0x1fd];
    }
    param_1[0x1fd] = 0;
    param_1[0x1fe] = 0;
    FUN_140195d70(param_1 + 0x1ea);
    *(undefined4 *)(param_1 + 0x1ea) = 0;
    if ((undefined8 *)param_1[0x1ec] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1ec] = param_1[0x1ed];
    }
    if ((undefined8 *)param_1[0x1ed] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1ed] = param_1[0x1ec];
    }
    param_1[0x1ec] = 0;
    param_1[0x1ed] = 0;
    FUN_140195d70(param_1 + 0x1d9);
    *(undefined4 *)(param_1 + 0x1d9) = 0;
    if ((undefined8 *)param_1[0x1db] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1db] = param_1[0x1dc];
    }
    if ((undefined8 *)param_1[0x1dc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1dc] = param_1[0x1db];
    }
    param_1[0x1db] = 0;
    param_1[0x1dc] = 0;
    if (param_1[0x1cd] != 0) {
        FUN_14018b900(param_1[0x1cd],0);
    }
    FUN_1400e39f0(param_1);
    return;
}



void FUN_140422f30(undefined8 param_1)

{
    FUN_1406bc120();
    FUN_1405379e0(param_1);
    FUN_1404f8440(param_1);
    FUN_140508240(param_1);
    FUN_1405ba670(param_1);
    FUN_1405bb040(param_1);
    FUN_1406c38f0(param_1);
    FUN_1406cab70(param_1);
    FUN_1406cb900(param_1);
    FUN_1406cd840(param_1);
    FUN_1405271c0(param_1);
    FUN_1406cf770(param_1);
    FUN_1406d7570(param_1);
    FUN_1406d97e0(param_1);
    FUN_1406d9ce0(param_1);
    FUN_1406db000(param_1);
    FUN_1406dcf60(param_1);
    FUN_1406ddb40(param_1);
    FUN_1406dee10(param_1);
    FUN_1406e7f70(param_1);
    FUN_1400e9c20(param_1,&PTR_s_Event_FireGenericEvent_140c59100,0x26);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014042318d)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140423060(undefined8 param_1,longlong param_2,uint param_3,short *param_4)

{
    short *psVar1;
    short sVar2;
    wchar_t wVar3;
    wchar_t *pwVar4;
    ushort uVar5;
    undefined2 uVar6;
    int iVar7;
    int iVar8;
    undefined2 *puVar9;
    short *psVar10;
    ushort *puVar11;
    ushort *puVar12;
    ushort *puVar13;
    ushort *puVar14;
    ushort *puVar15;
    ulonglong *puVar16;
    ulonglong *puVar17;
    int iVar18;
    ulonglong uVar19;
    undefined *puVar20;
    longlong lVar21;
    ulonglong uVar22;
    ushort *puVar23;
    undefined *puVar24;
    bool bVar25;
    undefined auStack776 [32];
    wchar_t *local_2e8;
    undefined8 local_2e0;
    wchar_t *local_2d8;
    ulonglong local_2c8;
    ulonglong local_2c0;
    ulonglong local_2b8;
    uint local_2b0;
    undefined local_2a8 [8];
    undefined2 *local_2a0;
    undefined2 *local_298;
    undefined2 *local_290;
    short *local_288;
    wchar_t *local_280 [5];
    short local_258 [264];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack776;
    local_2b0 = param_3;
    local_288 = param_4;
    puVar9 = (undefined2 *)FUN_14018b280(0x10);
    puVar23 = (ushort *)0x0;
    local_290 = puVar9 + 8;
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    local_2a0 = puVar9;
    local_298 = puVar9;
    if ((param_4 == (short *)0x0) || (3 < param_3)) {
        *(undefined2 **)(param_2 + 8) = puVar9;
        *(undefined2 **)(param_2 + 0x10) = puVar9;
        *(undefined2 **)(param_2 + 0x18) = local_290;
        goto LAB_140423fdd;
    }
    local_2d8 = L"AddonSaveData";
    local_2e0 = *(undefined8 *)(DAT_140c63788 + 0x1320);
    local_2e8 = L"NCSOFT";
    iVar7 = FUN_14001b370(local_258,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
    puVar12 = puVar23;
    if ((-1 < iVar7) && (local_258[0] != 0)) {
        psVar10 = local_258;
        do {
            psVar1 = psVar10 + 1;
            psVar10 = psVar10 + 1;
        } while (*psVar1 != 0);
    }
    while (local_258[0] != 0) {
        local_258[0] = local_258[(longlong)(ushort *)((longlong)puVar12 + 1)];
        puVar12 = (ushort *)((longlong)puVar12 + 1);
    }
    puVar11 = puVar23;
    if ((longlong)puVar12 * 2 >> 1 == 0) {
        FUN_1407db590(puVar9,local_258,0);
    }
    else {
        FUN_14001c310(local_2a8,local_258);
    }
    do {
        psVar10 = &DAT_1409e8c76 + (longlong)puVar11;
        puVar11 = (ushort *)((longlong)puVar11 + 1);
    } while (*psVar10 != 0);
    FUN_14001c310(local_2a8,&DAT_1409e8c74,&DAT_1409e8c74 + (longlong)puVar11 * 2);
    if ((int)param_3 < 1) {
        LAB_140423e42:
        if ((int)param_3 < 2) {
            LAB_140423eac:
            if (2 < (int)param_3) {
                psVar10 = *(short **)(DAT_140c65898 + 0x88);
                if ((psVar10 == (short *)0x0) || (puVar12 = puVar23, *psVar10 == 0)) {
                    puVar24 = &DAT_1409e8c1c;
                    puVar20 = &DAT_1409e8c1c;
                    goto LAB_140424067;
                }
                do {
                    lVar21 = (longlong)puVar12 + 1;
                    puVar12 = (ushort *)((longlong)puVar12 + 1);
                } while (psVar10[lVar21] != 0);
                FUN_14001c310(local_2a8,psVar10,psVar10 + (longlong)puVar12);
                puVar12 = puVar23;
                do {
                    psVar10 = &DAT_1409e8bee + (longlong)puVar12;
                    puVar12 = (ushort *)((longlong)puVar12 + 1);
                } while (*psVar10 != 0);
                FUN_14001c310(local_2a8,&DAT_1409e8bec,&DAT_1409e8bec + (longlong)puVar12 * 2);
            }
            local_280[0] = L"_Gen";
            local_280[1] = L"_Acct";
            local_280[2] = L"_Rlm";
            local_280[3] = L"_Char";
            sVar2 = *param_4;
            puVar12 = puVar23;
            while (sVar2 != 0) {
                puVar12 = (ushort *)((longlong)puVar12 + 1);
                sVar2 = param_4[(longlong)puVar12];
            }
            FUN_14001c310(local_2a8,param_4,param_4 + (longlong)puVar12);
            pwVar4 = local_280[(int)param_3];
            wVar3 = *pwVar4;
            puVar12 = puVar23;
            while (wVar3 != L'\0') {
                puVar12 = (ushort *)((longlong)puVar12 + 1);
                wVar3 = pwVar4[(longlong)puVar12];
            }
            FUN_14001c310(local_2a8,pwVar4,pwVar4 + (longlong)puVar12);
            do {
                psVar10 = &DAT_140b005da + (longlong)puVar23;
                puVar23 = (ushort *)((longlong)puVar23 + 1);
            } while (*psVar10 != 0);
            FUN_14001c310(local_2a8,&DAT_140b005d8,&DAT_140b005d8 + (longlong)puVar23 * 2);
            *(undefined2 **)(param_2 + 8) = local_2a0;
            *(undefined2 **)(param_2 + 0x10) = local_298;
            *(undefined2 **)(param_2 + 0x18) = local_290;
            goto LAB_140423fdd;
        }
        psVar10 = *(short **)(DAT_140c635f0 + 0x1678);
        if ((psVar10 != (short *)0x0) && (puVar12 = puVar23, *psVar10 != 0)) {
            do {
                lVar21 = (longlong)puVar12 + 1;
                puVar12 = (ushort *)((longlong)puVar12 + 1);
            } while (psVar10[lVar21] != 0);
            FUN_14001c310(local_2a8,psVar10,psVar10 + (longlong)puVar12);
            puVar12 = puVar23;
            do {
                psVar10 = &DAT_1409e8c96 + (longlong)puVar12;
                puVar12 = (ushort *)((longlong)puVar12 + 1);
            } while (*psVar10 != 0);
            FUN_14001c310(local_2a8,&DAT_1409e8c94,&DAT_1409e8c94 + (longlong)puVar12 * 2);
            goto LAB_140423eac;
        }
        puVar24 = &DAT_1409e8ce4;
        puVar20 = &DAT_1409e8ce4;
        LAB_140424067:
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        FUN_14001c1b0(param_2,puVar20,puVar24);
    }
    else {
        psVar10 = *(short **)(DAT_140c635f0 + 0x1670);
        iVar7 = *(int *)(DAT_140c635f0 + 0x1668);
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
            if ((DAT_140dc2810 & 1) == 0) {
                DAT_140dc2810 = DAT_140dc2810 | 1;
                DAT_140dc2820 = (ushort *)0x0;
                DAT_140dc2828 = (ushort *)0x0;
                _DAT_140dc2830 = (ushort *)0x0;
                DAT_140dc2820 = (ushort *)FUN_14018b280(0x10);
                _DAT_140dc2830 = DAT_140dc2820 + 8;
                DAT_140dc2828 = DAT_140dc2820;
                if (DAT_140dc2820 != (ushort *)0x0) {
                    *DAT_140dc2820 = 0;
                }
                FUN_1407dd89c(FUN_140950c40);
            }
            if (_DAT_140c8ac40 != iVar7) {
                sVar2 = *psVar10;
                puVar12 = puVar23;
                while (sVar2 != 0) {
                    puVar12 = (ushort *)((longlong)puVar12 + 1);
                    sVar2 = psVar10[(longlong)puVar12];
                }
                lVar21 = (longlong)puVar12 * 2 >> 1;
                puVar12 = puVar23;
                _DAT_140c8ac40 = iVar7;
                if (lVar21 + 1U < 0x7fffffffffffffff) {
                    puVar12 = (ushort *)FUN_14018b280((lVar21 + 1U) * 2,0);
                }
                FUN_1407db590(puVar12,psVar10,lVar21 * 2);
                puVar11 = puVar12 + lVar21;
                if (puVar11 != (ushort *)0x0) {
                    *puVar11 = 0;
                }
                uVar22 = (longlong)puVar11 - (longlong)puVar12 >> 1;
                if (uVar22 == 0) {
                    LAB_140423328:
                    iVar18 = -1;
                }
                else {
                    local_2b8._0_4_ = CONCAT22(0x40,(ushort)local_2b8);
                    local_2b8 = local_2b8 & 0xffffffff00000000 | (ulonglong)(uint)local_2b8;
                    puVar13 = (ushort *)FUN_14002c8a0(puVar12,puVar11,(ulonglong)(uint)local_2b8);
                    if (puVar13 == puVar11) goto LAB_140423328;
                    iVar18 = (int)((longlong)puVar13 - (longlong)puVar12 >> 1);
                }
                iVar8 = 3;
                if (iVar18 < 3) {
                    iVar8 = iVar18;
                }
                uVar19 = (ulonglong)iVar8;
                if (uVar22 < uVar19) {
                    FUN_14001c480(&DAT_140dc2818,puVar12,puVar11);
                }
                else {
                    local_2b8 = uVar22;
                    local_2c0 = uVar19;
                    puVar16 = &local_2b8;
                    if (uVar19 <= uVar22) {
                        puVar16 = &local_2c0;
                    }
                    puVar11 = puVar12 + *puVar16;
                    uVar22 = ((longlong)puVar11 - (longlong)puVar12 >> 1) + 1;
                    puVar14 = puVar23;
                    puVar13 = puVar23;
                    if (uVar22 < 0x7fffffffffffffff) {
                        puVar14 = (ushort *)FUN_14018b280(uVar22 * 2,0);
                        puVar13 = puVar14 + uVar22;
                    }
                    DAT_140dc2828 = puVar14;
                    if (puVar12 != puVar11) {
                        do {
                            if (DAT_140dc2828 != (ushort *)0x0) {
                                *DAT_140dc2828 =
                                        *(ushort *)((longlong)DAT_140dc2828 + ((longlong)puVar12 - (longlong)puVar14));
                            }
                            DAT_140dc2828 = DAT_140dc2828 + 1;
                        } while ((ushort *)((longlong)DAT_140dc2828 + ((longlong)puVar12 - (longlong)puVar14))
                                 != puVar11);
                    }
                    if (DAT_140dc2828 != (ushort *)0x0) {
                        *DAT_140dc2828 = 0;
                    }
                    puVar11 = DAT_140dc2820;
                    bVar25 = DAT_140dc2820 != (ushort *)0x0;
                    DAT_140dc2820 = puVar14;
                    _DAT_140dc2830 = puVar13;
                    if (bVar25) {
                        FUN_14018b900(puVar11,0);
                    }
                }
                FUN_14018efa0(local_280,L"%08x",iVar7);
                pwVar4 = local_280[1];
                if (local_280[1][7] == L'0') {
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (DAT_140dc2828 + 1 == _DAT_140dc2830) {
                        local_2c0 = 1;
                        local_2c8 = (longlong)DAT_140dc2828 - (longlong)DAT_140dc2820 >> 1;
                        puVar16 = &local_2c0;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c8;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (DAT_140dc2828 + 1 != (ushort *)0x0) {
                        DAT_140dc2828[1] = 0;
                    }
                    *DAT_140dc2828 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    local_2b8._0_2_ = FUN_140011b20();
                    local_2b8 = local_2b8 & 0xffffffffffff0000 | (ulonglong)(ushort)local_2b8;
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        uVar22 = *puVar17;
                        puVar15 = (ushort *)FUN_14018b280((uVar22 + 1) * 2,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = puVar15 + uVar22 + 1;
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = (ushort)local_2b8;
                    puVar13 = DAT_140dc2828;
                    puVar11 = DAT_140dc2828 + 1;
                    DAT_140dc2828 = puVar11;
                    uVar5 = FUN_140011b20(pwVar4[4]);
                    if (puVar13 + 2 == _DAT_140dc2830) {
                        local_2c8 = 1;
                        local_2c8 = (longlong)puVar11 - (longlong)DAT_140dc2820 >> 1;
                        local_2c0 = local_2c8;
                        puVar16 = &local_2c8;
                        if (local_2c8 != 0) {
                            puVar16 = &local_2c0;
                        }
                        local_2c0 = *puVar16 + local_2c8;
                        puVar17 = &local_2c8;
                        if (local_2c8 <= *puVar16 + local_2c8) {
                            puVar17 = &local_2c0;
                        }
                        local_2c8 = (*puVar17 + 1) * 2;
                        puVar15 = (ushort *)FUN_14018b280(local_2c8,0);
                        puVar14 = DAT_140dc2828;
                        puVar11 = puVar15;
                        for (puVar13 = DAT_140dc2820; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                            if (puVar11 != (ushort *)0x0) {
                                *puVar11 = *puVar13;
                            }
                            puVar11 = puVar11 + 1;
                        }
                        if (puVar11 != (ushort *)0x0) {
                            *puVar11 = 0;
                        }
                        if (DAT_140dc2820 != (ushort *)0x0) {
                            FUN_14018b900(DAT_140dc2820,0);
                        }
                        _DAT_140dc2830 = (ushort *)(local_2c8 + (longlong)puVar15);
                        DAT_140dc2820 = puVar15;
                        DAT_140dc2828 = puVar11;
                    }
                    if (puVar11 + 1 != (ushort *)0x0) {
                        puVar11[1] = 0;
                        puVar11 = DAT_140dc2828;
                    }
                    *puVar11 = uVar5;
                    DAT_140dc2828 = DAT_140dc2828 + 1;
                }
                else {
                    uVar6 = FUN_140011b20();
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(*pwVar4);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(pwVar4[2]);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(pwVar4[1]);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(pwVar4[6]);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(pwVar4[3]);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(pwVar4[5]);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                    uVar6 = FUN_140011b20(pwVar4[4]);
                    FUN_1400a7ea0(&DAT_140dc2818,uVar6);
                }
                FUN_14018b900(pwVar4,0);
                param_3 = local_2b0;
                if (puVar12 != (ushort *)0x0) {
                    FUN_14018b900(puVar12,0);
                    param_3 = local_2b0;
                }
            }
            FUN_14001c310(local_2a8,DAT_140dc2820,DAT_140dc2828);
            puVar12 = puVar23;
            do {
                psVar10 = &DAT_1409e8da6 + (longlong)puVar12;
                puVar12 = (ushort *)((longlong)puVar12 + 1);
            } while (*psVar10 != 0);
            FUN_14001c310(local_2a8,&DAT_1409e8da4,&DAT_1409e8da4 + (longlong)puVar12 * 2);
            param_4 = local_288;
            goto LAB_140423e42;
        }
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        puVar9 = (undefined2 *)FUN_14018b280(2);
        *(undefined2 **)(param_2 + 8) = puVar9;
        *(undefined2 **)(param_2 + 0x10) = puVar9;
        *(undefined2 **)(param_2 + 0x18) = puVar9 + 1;
        FUN_1407db590(puVar9,&DAT_1409e8c44,0);
        *(undefined2 **)(param_2 + 0x10) = puVar9;
        if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
        }
    }
    if (local_2a0 != (undefined2 *)0x0) {
        FUN_14018b900(local_2a0,0);
    }
    LAB_140423fdd:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack776);
    return;
}



void FUN_140425570(longlong param_1)

{
    char cVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined *puVar5;

    if (*(longlong *)(param_1 + 0xb60) != 0) {
        cVar1 = FUN_1400c3420();
        if (((cVar1 != '\0') || ((*(uint *)(*(longlong *)(param_1 + 0xb60) + 0x290) >> 0x18 & 1) == 0))
            && (*(longlong *)(param_1 + 0xb60) != 0)) {
            return;
        }
    }
    if (*(longlong *)(param_1 + 0xe80) != 0) {
        uVar3 = *(undefined4 *)(DAT_140c65898 + 0x64c4);
        lVar4 = FUN_1403d90d0(DAT_140c65898,uVar3);
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x80) == 7)) &&
            (iVar2 = FUN_14045b6b0(lVar4), iVar2 != 0)) {
            uVar3 = FUN_14045b6b0();
        }
        puVar5 = &DAT_1409e8ef4;
        lVar4 = FUN_140226ac0(*(undefined4 *)(DAT_140c65898 + 0x64d0));
        if (lVar4 != 0) {
            puVar5 = (undefined *)FUN_14034bdd0();
        }
        (**(code **)(**(longlong **)(param_1 + 0xe80) + 0x78))
                (*(longlong **)(param_1 + 0xe80),&DAT_1409e8edc,7,uVar3,puVar5);
        FUN_1400e6730(param_1,*(undefined8 *)(param_1 + 0xe80));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140425690(undefined8 param_1,longlong param_2)

{
    short sVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    short *psVar6;
    undefined8 *puVar7;

    puVar4 = (undefined8 *)0x0;
    if ((DAT_140dc2880 & 1) == 0) {
        DAT_140dc2880 = DAT_140dc2880 | 1;
        _DAT_140dc2890 = 0;
    }
    psVar6 = &DAT_140b7b704;
    if (*(short **)(param_2 + 0x218) != (short *)0x0) {
        psVar6 = *(short **)(param_2 + 0x218);
    }
    if (psVar6 != (short *)0x0) {
        sVar1 = *psVar6;
        puVar7 = puVar4;
        while (sVar1 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar1 = psVar6[(longlong)puVar7];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar7;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,psVar6,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar4) = 0;
    }
    uVar2 = puVar4[-1];
    if (_DAT_140dc2890 == 0) {
        _DAT_140dc2890 = 1;
        lVar5 = FUN_140200220(0x947);
        if (lVar5 == 0) {
            DAT_140dc2888 = 0;
        }
        else {
            DAT_140dc2888 = (ulonglong)*(uint *)(lVar5 + 0xc);
        }
    }
    puVar7 = puVar4;
    if (DAT_140dc2888 < uVar2) {
        if (_DAT_140dc2890 == 0) {
            _DAT_140dc2890 = 1;
            lVar5 = FUN_140200220(0x947);
            if (lVar5 == 0) {
                DAT_140dc2888 = 0;
            }
            else {
                DAT_140dc2888 = (ulonglong)*(uint *)(lVar5 + 0xc);
            }
        }
        uVar2 = DAT_140dc2888;
        puVar7 = (undefined8 *)FUN_14018d140(puVar4,DAT_140dc2888);
        *(undefined2 *)((longlong)puVar7 + uVar2 * 2) = 0;
        if ((puVar4 != puVar7) && (puVar4 != (undefined8 *)0x0)) {
            (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
        }
    }
    FUN_140434460(DAT_140c65898 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0),
                  DAT_140c636a8 - *(int *)(param_2 + 0x3b8),puVar7);
    if (puVar7 != (undefined8 *)0x0) {
        (**(code **)(puVar7[-2] + 8))(puVar7 + -2);
    }
    return;
}



void FUN_140425850(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_14050e830(&local_28);
    FUN_1400ea3e0(param_1,"ShowResurrectDialog",&DAT_1409e8f7c,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140425910(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_14050e830(&local_28);
    FUN_1400ea3e0(param_1,"UpdateResurrectDialog",&DAT_1409e8f44,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_1404259d0(longlong param_1,longlong param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint *puVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 *puVar11;
    undefined local_38 [8];
    longlong local_30;

    lVar3 = *(longlong *)(param_1 + 400);
    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar3);
    }
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    uVar6 = FUN_14005c1b0(lVar3,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar6;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(lVar3);
    uVar1 = *(uint *)(param_2 + 4);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bDifficultyNormal");
    lVar9 = -1;
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar3);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)((uVar1 & 1) != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    uVar1 = *(uint *)(param_2 + 4);
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bDifficultyVeteran");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar3);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)((uVar1 & 2) != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    uVar1 = *(uint *)(param_2 + 8);
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bFlagsScaling");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar3);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)((uVar1 & 1) != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    uVar1 = *(uint *)(param_2 + 8);
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bHasPrimeLevels");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar3);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)((uVar1 & 0x200) != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    iVar2 = *(int *)(param_2 + 0x14);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bExistingScaling");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar3);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    iVar2 = *(int *)(param_2 + 0x1c);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bIsRaid");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar3);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    puVar11 = *(undefined8 **)(lVar3 + 0x10);
    iVar2 = *(int *)(param_2 + 0x20);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar5);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(local_38,L"bPrimeAllowed");
    lVar8 = *(longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar8 + lVar9) != '\0');
        FUN_140058710(lVar3,lVar8,lVar9);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar4 = *(uint **)(lVar3 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar3,0xfffffffd);
    FUN_14005ea50(lVar3,uVar6,*(longlong *)(lVar3 + 0x10) + -0x20,*(longlong *)(lVar3 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    FUN_1400ea3e0(param_1,"ShowInstanceGameModeDialog",&DAT_1409e8f94,uVar5);
    FUN_1400579e0(lVar3);
    return;
}



void FUN_140426120(undefined8 param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;

    if (param_3 == 0) {
        FUN_1400ea3e0(param_1,"Dialog_ShowState",&DAT_1409e907c,param_2);
    }
    lVar1 = FUN_1405a8a40();
    if (lVar1 != 0) {
        FUN_1400ea3e0(param_1,"Dialog_ShowState",&DAT_1409e906c,param_2,lVar1);
    }
    return;
}



void FUN_140426190(undefined8 param_1,int param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405a8a40();
    if (lVar1 != 0) {
        FUN_1400ea3e0(param_1,"QuestHighlightChanged",&DAT_1409e925c,lVar1,DAT_140c65c38 == param_2);
    }
    return;
}



void FUN_1404261e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_1405a8a40();
    if (lVar1 != 0) {
        FUN_1400ea3e0(param_1,"QuestStateChanged",&DAT_1409e93fc,lVar1,param_3,
                      *(uint *)(*(longlong *)(lVar1 + 8) + 300) < 4);
    }
    return;
}



void FUN_140426240(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_1405a8a40();
    if (lVar1 != 0) {
        FUN_1400ea3e0(param_1,"QuestObjectiveUpdated",&DAT_1409e9324,lVar1,param_3,
                      *(uint *)(*(longlong *)(lVar1 + 8) + 300) < 4);
    }
    return;
}



void FUN_1404262a0(longlong param_1,undefined4 param_2,undefined8 param_3,float *param_4)

{
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    float fVar11;
    undefined local_58 [8];
    longlong local_50;

    lVar1 = *(longlong *)(param_1 + 400);
    uVar10 = (ulonglong)DAT_140dc30a4;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    fVar11 = *param_4;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_58,&DAT_1409e984c);
    lVar7 = -1;
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
        FUN_140058710(lVar1);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar11;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar4,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    fVar11 = param_4[1];
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_58,&DAT_1409e981c);
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
        FUN_140058710(lVar1);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar11;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar4,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    fVar11 = param_4[2];
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_58,&DAT_1409e9804);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar7 = lVar7 + 1;
        } while (*(char *)(lVar6 + lVar7) != '\0');
        FUN_140058710(lVar1,lVar6,lVar7);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar11;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar4,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(param_1,"ChallengeFlashStartLocation",&DAT_140b008c4,param_2,param_3,
                  (double)((float)uVar10 * 0.001),uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140426630(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined local_78 [16];
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined local_48 [8];
    undefined4 local_40;
    longlong local_38;

    local_78 = ZEXT1216(*(undefined (*) [12])(param_2 + 0xc));
    if (DAT_140c658f8 != 0) {
        local_res10 = DAT_140c77760;
        local_res14 = DAT_140c77764;
        lVar6 = FUN_140448be0(param_1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                              local_78,0,1,&local_res10);
        if (lVar6 != 0) {
            lVar1 = *(longlong *)(param_1 + 400);
            local_68 = &PTR_FUN_140b569f0;
            local_50 = 1;
            local_58 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar7 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar7;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0(lVar1);
            local_60 = uVar3;
            iVar4 = FUN_14052ed60(lVar6,&local_68);
            if (-1 < iVar4) {
                local_68 = &PTR_FUN_140b569f0;
                local_50 = 1;
                local_58 = lVar1;
                if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar1);
                }
                puVar2 = *(undefined8 **)(lVar1 + 0x10);
                uVar7 = FUN_14005c1b0(lVar1,0,0);
                *(undefined4 *)(puVar2 + 1) = 5;
                *puVar2 = uVar7;
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                uVar5 = FUN_1400578c0(lVar1);
                local_60 = uVar5;
                FUN_1400fb2a0(&local_68,L"zoneMap",uVar3);
                local_78 = ZEXT1216(*(undefined (*) [12])(param_2 + 0xc));
                FUN_1400fa3c0(local_48,lVar1,local_78);
                FUN_1400fb2a0(&local_68,L"worldLoc",local_40);
                FUN_1400ea3e0(param_1,"ShowLocOnWorldMap",&DAT_1409e9bbc,uVar5);
                if (local_38 != 0) {
                    FUN_1400579e0();
                }
                FUN_1400579e0(lVar1);
            }
            FUN_1400579e0(lVar1);
        }
    }
    return;
}



void FUN_140426890(undefined8 param_1)

{
    FUN_1400ea3e0(param_1,"HideBank",&DAT_1409d0da7);
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x42) {
        WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        return;
    }
    return;
}



void FUN_1404268d0(undefined8 param_1)

{
    FUN_1400ea3e0(param_1,"HideRealmBank","");
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x43) {
        WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        return;
    }
    return;
}



void FUN_140426910(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *)(param_1 + 0x17a0) != 0) {
        lVar5 = *(longlong *)(param_1 + 400);
        iVar7 = 0;
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = lVar5;
        if (*(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar5);
        }
        puVar1 = *(undefined8 **)(lVar5 + 0x10);
        uVar4 = FUN_14005c1b0(lVar5,0,0);
        *(undefined4 *)(puVar1 + 1) = 5;
        *puVar1 = uVar4;
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(lVar5);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1798) + 0x10);
        if (lVar6 != *(longlong *)(param_1 + 0x1798)) {
            do {
                if (iVar7 == 0) {
                    iVar7 = *(int *)(lVar6 + 0x20);
                }
                FUN_1400fa9e0(&local_28,*(undefined4 *)(lVar6 + 0x20));
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
                    for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar5 = lVar2;
                    }
                }
                lVar5 = local_18;
            } while (lVar6 != *(longlong *)(param_1 + 0x1798));
        }
        uVar3 = local_20;
        FUN_140008410(param_1 + 0x1790);
        FUN_1400ea3e0(param_1,"DyeLearned",&DAT_1409e9efc,iVar7,uVar3);
        if (lVar5 != 0) {
            FUN_1400579e0(lVar5);
        }
    }
    return;
}



void FUN_140426ac0(undefined8 param_1)

{
    FUN_1400ea3e0(param_1,"CloseVendorWindow",&DAT_1409d0d67);
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x31) {
        WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        return;
    }
    return;
}



void FUN_140426b60(undefined8 param_1)

{
    FUN_1400ea3e0(param_1,"CloseTradeskillTrainerWindow",&DAT_1409d0dcf);
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x2b) {
        WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        return;
    }
    return;
}



void FUN_140426bc0(longlong param_1,int param_2,int *param_3,longlong param_4,uint *param_5,
                   undefined8 param_6,uint param_7)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    double *pdVar4;
    uint *puVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    undefined8 *puVar14;
    int *piVar15;
    undefined4 *puVar16;
    uint local_118;
    undefined local_100 [8];
    longlong local_f8;
    undefined **local_e0;
    undefined4 local_d8;
    longlong local_d0;
    undefined4 local_c8;
    undefined **local_c0;
    undefined4 local_b8;
    longlong local_b0;
    undefined4 local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined local_78 [16];
    undefined local_68 [16];
    undefined local_58 [16];
    longlong local_48;

    lVar2 = *(longlong *)(param_1 + 400);
    local_e0 = &PTR_FUN_140b569f0;
    local_c8 = 1;
    local_d0 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar14 = *(undefined8 **)(lVar2 + 0x10);
    uVar8 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar14 + 1) = 5;
    *puVar14 = uVar8;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    local_d8 = FUN_1400578c0(lVar2);
    local_118 = 0;
    lVar10 = lVar2;
    if (param_7 != 0) {
        puVar16 = (undefined4 *)(param_4 + 8);
        piVar15 = param_3;
        do {
            lVar10 = *(longlong *)(DAT_140c65898 + 0x6c50);
            if (lVar10 != 0) {
                uVar3 = *(ulonglong *)(lVar10 + 0x60);
                uVar12 = 0;
                if (uVar3 != 0) {
                    do {
                        if (uVar12 < uVar3) {
                            if (uVar12 == 0) {
                                lVar13 = *(longlong *)
                                        (*(longlong *)(lVar10 + 0x58) + *(longlong *)(lVar10 + 0x68) * 8);
                            }
                            else {
                                uVar11 = uVar12;
                                if (uVar12 < *(ulonglong *)(lVar10 + 0x68) ||
                                    uVar12 == *(ulonglong *)(lVar10 + 0x68)) {
                                    uVar11 = uVar12 - 1;
                                }
                                lVar13 = *(longlong *)(*(longlong *)(lVar10 + 0x58) + uVar11 * 8);
                            }
                        }
                        else {
                            lVar13 = 0;
                        }
                        if ((*(int *)(lVar13 + 0x10) == *piVar15) &&
                            (*(longlong *)(lVar13 + 0x18) == *(longlong *)(piVar15 + 2))) goto LAB_140426cff;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < uVar3);
                }
            }
            uVar12 = 0xffffffffffffffff;
            LAB_140426cff:
            if ((lVar10 != 0) && (uVar12 < *(ulonglong *)(lVar10 + 0x60))) {
                local_c0 = &PTR_FUN_140b569f0;
                local_a8 = 1;
                local_b0 = lVar2;
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                uVar8 = FUN_14005c1b0(lVar2,0,0);
                *(undefined4 *)(puVar14 + 1) = 5;
                *puVar14 = uVar8;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar6 = FUN_1400578c0(lVar2);
                local_b8 = uVar6;
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                *puVar14 = *puVar9;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(local_100,L"nIndex");
                lVar10 = *(longlong *)(lVar10 + 8);
                if (lVar10 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar10 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar8 = FUN_140062650(lVar2,lVar10,lVar13);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar8;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_f8 != 0) {
                    FUN_14018b900(local_f8,0);
                }
                pdVar4 = *(double **)(lVar2 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)((int)uVar12 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar8,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                *puVar14 = *puVar9;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(local_100,L"idWorld");
                lVar10 = *(longlong *)(lVar10 + 8);
                if (lVar10 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar10 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar8 = FUN_140062650(lVar2,lVar10,lVar13);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar8;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_f8 != 0) {
                    FUN_14018b900(local_f8,0);
                }
                pdVar4 = *(double **)(lVar2 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)param_2;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar8,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                uVar1 = *param_5;
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                *puVar14 = *puVar9;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(local_100,L"bInCombatPvp");
                lVar10 = *(longlong *)(lVar10 + 8);
                if (lVar10 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar10 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar8 = FUN_140062650(lVar2,lVar10,lVar13);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar8;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_f8 != 0) {
                    FUN_14018b900(local_f8,0);
                }
                puVar5 = *(uint **)(lVar2 + 0x10);
                puVar5[2] = 1;
                *puVar5 = (uint)((uVar1 & 1) != 0);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar8,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                uVar1 = *param_5;
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                *puVar14 = *puVar9;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(local_100,L"bInCombatPve");
                lVar10 = *(longlong *)(lVar10 + 8);
                if (lVar10 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar10 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar8 = FUN_140062650(lVar2,lVar10,lVar13);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar8;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_f8 != 0) {
                    FUN_14018b900(local_f8,0);
                }
                puVar5 = *(uint **)(lVar2 + 0x10);
                puVar5[2] = 1;
                *puVar5 = (uint)((uVar1 & 2) != 0);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar8,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                uVar1 = *param_5;
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                *puVar14 = *puVar9;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(local_100,L"bInCombat");
                lVar10 = *(longlong *)(lVar10 + 8);
                if (lVar10 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar10 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar8 = FUN_140062650(lVar2,lVar10,lVar13);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar8;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_f8 != 0) {
                    FUN_14018b900(local_f8,0);
                }
                puVar5 = *(uint **)(lVar2 + 0x10);
                puVar5[2] = 1;
                *puVar5 = (uint)((uVar1 & 3) != 0);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar8);
                lVar10 = DAT_140c65898;
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                FUN_1403d9500(lVar10,param_3 + (ulonglong)local_118 * 4);
                FUN_1403d90d0();
                iVar7 = FUN_14043edc0();
                if (iVar7 == 0) {
                    FUN_1400579e0(lVar2);
                }
                else {
                    local_68 = ZEXT1216(CONCAT48(*puVar16,*(undefined8 *)(puVar16 + -2)));
                    if ((DAT_140c658f8 != 0) && (lVar10 = FUN_140448be0(), lVar10 != 0)) {
                        local_a0 = &PTR_FUN_140b569f0;
                        local_88 = 1;
                        local_90 = lVar2;
                        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(lVar2);
                        }
                        puVar14 = *(undefined8 **)(lVar2 + 0x10);
                        uVar8 = FUN_14005c1b0(lVar2,0,0);
                        *(undefined4 *)(puVar14 + 1) = 5;
                        *puVar14 = uVar8;
                        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                        local_98 = FUN_1400578c0(lVar2);
                        iVar7 = FUN_14052ed60(lVar10,&local_a0);
                        if (-1 < iVar7) {
                            FUN_1400fb2a0(&local_c0,L"tZoneMap");
                            local_78 = ZEXT1216(CONCAT48(*puVar16,*(undefined8 *)(puVar16 + -2)));
                            FUN_1400fa3c0(local_58,lVar2);
                            FUN_1400fb2a0(&local_c0,L"tWorldLoc");
                            FUN_1400fb1d0(&local_e0,uVar6);
                            if (local_48 != 0) {
                                FUN_1400579e0();
                            }
                        }
                        FUN_1400579e0(lVar2);
                    }
                    FUN_1400579e0(lVar2);
                }
            }
            param_5 = param_5 + 1;
            puVar16 = puVar16 + 3;
            local_118 = local_118 + 1;
            piVar15 = piVar15 + 4;
            lVar10 = local_d0;
        } while (local_118 < param_7);
    }
    FUN_1400ea3e0(param_1,"Group_UpdatePosition",&DAT_1409ea2ec,local_d8);
    if (lVar10 != 0) {
        FUN_1400579e0(lVar10);
    }
    return;
}



void FUN_1404274c0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
    undefined8 uVar1;
    int iVar2;
    undefined4 uVar3;

    uVar1 = *(undefined8 *)(param_1 + 400);
    iVar2 = FUN_1406069b0(DAT_140c65898 + 0x6c10,uVar1);
    if ((iVar2 != 0) || (param_4 != 0)) {
        uVar3 = FUN_1400578c0(uVar1);
        FUN_1400ea3e0(param_1,"Group_Mentor",&DAT_1409ea4c4,uVar3,param_2,param_3);
        FUN_1400579e0(uVar1);
    }
    return;
}



void FUN_140427560(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar1 = *(longlong *)(param_1 + 400);
    local_40 = 1;
    local_58 = &PTR_FUN_140b569f0;
    local_48 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    local_50 = FUN_1400578c0(lVar1);
    uVar3 = *(ulonglong *)(param_2 + 0x330);
    uVar5 = 0;
    lVar6 = lVar1;
    if (uVar3 != 0) {
        do {
            local_38 = &PTR_FUN_140b569f0;
            local_20 = 1;
            local_28 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar4 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar4;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            local_30 = FUN_1400578c0(lVar1);
            if (uVar5 < *(ulonglong *)(param_2 + 0x330)) {
                uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x328) + uVar5 * 8);
            }
            else {
                uVar4 = 0;
            }
            FUN_1405808c0(uVar4);
            FUN_1400fb1d0(&local_58);
            FUN_1400579e0(lVar1);
            uVar5 = uVar5 + 1;
            lVar6 = local_48;
        } while (uVar5 < uVar3);
    }
    FUN_1400ea3e0(param_1,"GuildRoster",&DAT_1409ea3f4,param_2,local_50);
    if (lVar6 != 0) {
        FUN_1400579e0(lVar6);
    }
    return;
}



void FUN_1404276f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_1405808c0(param_3,&local_28);
    FUN_1400ea3e0(param_1,"GuildMemberChange",&DAT_1409ea3b4,param_2,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_1404277d0(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
    int iVar1;
    int local_res10;
    int local_res14;

    (**(code **)(*param_3 + 0x20))(param_3,&local_res10);
    iVar1 = 200;
    if (*(int *)(param_2 + 0x10) == 1) {
        iVar1 = 100;
    }
    FUN_1400ea3e0(param_1,"GuildBankItem","ZiiOb",param_2,(local_res10 - iVar1) + 1,local_res14 + 1,
                  param_3,param_4);
    return;
}



void FUN_140427870(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 local_res8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_res8 = param_2;
    local_20 = uVar3;
    iVar4 = FUN_140433eb0(lVar1,&local_res8);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28,L"guild");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400ea3e0(param_1,"RecruitmentDetailedGuildInfo",&DAT_1409ea96c,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140427960(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
    undefined4 uVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    double dVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    int local_98;
    int iStack148;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined local_70 [8];
    longlong local_68;

    lVar10 = *(longlong *)(param_1 + 400);
    local_90 = &PTR_FUN_140b569f0;
    param_4 = param_4 & 0xffffffff;
    local_78 = 1;
    local_80 = lVar10;
    if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar10);
    }
    puVar8 = *(undefined8 **)(lVar10 + 0x10);
    uVar5 = FUN_14005c1b0(lVar10,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    local_88 = FUN_1400578c0(lVar10);
    if ((int)param_4 != 0) {
        param_2 = param_2 - param_3;
        uVar12 = 0;
        uVar13 = 0;
        do {
            lVar10 = *(longlong *)(param_1 + 400);
            if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar10);
            }
            puVar8 = *(undefined8 **)(lVar10 + 0x10);
            uVar5 = FUN_14005c1b0(lVar10,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar5;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            iVar3 = FUN_1400578c0(lVar10);
            iVar4 = *(int *)(param_2 + param_3);
            lVar6 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xa0);
            if (iVar3 - 1U < *(uint *)(lVar6 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
            }
            else {
                dVar11 = (double)iVar3;
                if (dVar11 == (double)CONCAT44(uVar13,uVar12)) {
                    puVar8 = *(undefined8 **)(lVar6 + 0x20);
                }
                else {
                    iStack148 = (int)((ulonglong)dVar11 >> 0x20);
                    local_98 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack148 + local_98) %
                              (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_140427afd;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_140427afd:
            puVar7 = *(undefined8 **)(lVar10 + 0x10);
            *puVar7 = *puVar8;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_70,&DAT_140b00a30);
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar9 + lVar6) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                puVar8 = *(undefined8 **)(lVar10 + 0x10);
                uVar5 = FUN_140062650(lVar10,lVar6,lVar9);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            if (local_68 != 0) {
                FUN_14018b900(local_68,0);
            }
            pdVar2 = *(double **)(lVar10 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar4;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(lVar10,0xfffffffd);
            FUN_14005ea50(lVar10,uVar5,*(longlong *)(lVar10 + 0x10) + -0x20,
                          *(longlong *)(lVar10 + 0x10) + -0x10);
            *(longlong *)(lVar10 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64634 == 0) && (iVar4 = FUN_14024d920(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c64270 + 0x18))();
                    goto LAB_140427c1b;
                }
            }
            else {
                lVar6 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8);
                LAB_140427c1b:
                if ((lVar6 != 0) && (lVar6 = FUN_14034bdd0(), lVar6 != 0)) {
                    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0))
                            ;
                    puVar8 = *(undefined8 **)(lVar10 + 0x10);
                    *puVar8 = *puVar7;
                    uVar1 = *(undefined4 *)(puVar7 + 1);
                    *(undefined4 *)(puVar8 + 1) = uVar1;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                    FUN_1400f0870(lVar10,uVar1,L"strWorldZone",lVar6);
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                }
            }
            FUN_1400fb1d0(&local_90);
            FUN_1400579e0(lVar10);
            param_3 = param_3 + 4;
            param_4 = param_4 - 1;
            lVar10 = local_80;
        } while (param_4 != 0);
    }
    FUN_1400ea3e0(param_1,"FriendshipLocation",&DAT_1409eac9c,local_88);
    if (lVar10 != 0) {
        FUN_1400579e0(lVar10);
    }
    return;
}



void FUN_140427d40(longlong param_1,uint param_2,undefined4 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong **pplVar8;
    longlong lVar9;
    undefined auStack2568 [32];
    longlong local_9e8;
    undefined **local_9e0;
    undefined4 local_9d8;
    longlong local_9d0;
    undefined4 local_9c8;
    undefined local_9c0 [1224];
    longlong *local_4f8 [96];
    longlong local_1f8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2568;
    lVar1 = *(longlong *)(param_1 + 400);
    local_9e0 = &PTR_FUN_140b569f0;
    local_9c8 = 1;
    local_9d0 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar6 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_9d8 = uVar4;
    FUN_14040fae0(local_4f8);
    lVar9 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_9e8 = lVar9;
    lVar3 = *(longlong *)(lVar9 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_9e8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_9e8 == lVar9) || (param_2 < *(uint *)(local_9e8 + 0x20))) {
        local_9e8 = lVar9;
    }
    if (local_9e8 == lVar9) {
        lVar9 = 0;
    }
    else {
        lVar9 = local_9e8 + 0x28;
    }
    FUN_1404111e0(local_4f8,lVar9,1);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"nLootId",param_2);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    pplVar8 = (longlong **)FUN_14040fc60(local_9c0,local_4f8);
    iVar5 = FUN_140415bb0(lVar1,pplVar8);
    if (iVar5 != 0) {
        FUN_1400fb540(&local_9e0,L"itemLoot");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    if (*pplVar8 != (longlong *)0x0) {
        (**(code **)(**pplVar8 + 8))();
        *pplVar8 = (longlong *)0x0;
    }
    if (pplVar8[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar8[0x60],0);
    }
    iVar5 = FUN_140649870(lVar1,param_3);
    if (iVar5 != 0) {
        FUN_1400fb540(&local_9e0,L"unitLooter");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400ea3e0(param_1,"LootTakenBy",&DAT_1409eacb4,uVar4);
    if (local_4f8[0] != (longlong *)0x0) {
        (**(code **)(*local_4f8[0] + 8))();
        local_4f8[0] = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    FUN_1400579e0(lVar1);
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2568);
    return;
}



void FUN_140427fa0(longlong param_1,int *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong **pplVar6;
    undefined8 *puVar7;
    wchar_t *pwVar8;
    ulonglong uVar9;
    undefined **local_9b8;
    undefined4 local_9b0;
    longlong local_9a8;
    undefined4 local_9a0;
    undefined local_998 [1216];
    undefined local_4d8 [1216];

    lVar1 = *(longlong *)(param_1 + 400);
    local_9b8 = &PTR_FUN_140b569f0;
    local_9a0 = 1;
    local_9a8 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    iVar4 = *param_2;
    local_9b0 = uVar3;
    if (iVar4 == 1) {
        if ((param_2[0x12a] == 0) || (*(longlong *)(param_2 + 4) == 0)) goto LAB_14042823d;
        pplVar6 = (longlong **)FUN_14040fc60(local_4d8);
        iVar4 = FUN_140415bb0(lVar1,pplVar6);
        if (iVar4 != 0) {
            FUN_1400fb540(&local_9b8,L"itemNew");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        if (*pplVar6 != (longlong *)0x0) {
            (**(code **)(**pplVar6 + 8))();
            *pplVar6 = (longlong *)0x0;
        }
        if (pplVar6[0x60] != (longlong *)0x0) {
            FUN_14018b900(pplVar6[0x60],0);
        }
        uVar9 = (ulonglong)(uint)param_2[0x132];
        puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        *puVar2 = *puVar7;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1,puVar2,L"nCount",uVar9 & 0xffffffff);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        if (param_2[0x133] != 0) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                pwVar8 = L"unitLooter";
                goto LAB_140428211;
            }
        }
    }
    else if (iVar4 == 2) {
        iVar4 = FUN_140501210(lVar1,param_2 + 0x134);
        if (iVar4 != 0) {
            FUN_1400fb540(&local_9b8,L"monNew");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        iVar4 = FUN_140501210(lVar1,param_2 + 0x13a);
        if (iVar4 != 0) {
            FUN_1400fb540(&local_9b8,L"monSignatureBonus");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        if (param_2 != (int *)0xfffffffffffffb00) {
            iVar4 = FUN_140501210(lVar1);
            if (iVar4 != 0) {
                pwVar8 = L"monEssenceBonus";
                LAB_140428211:
                FUN_1400fb540(&local_9b8,pwVar8);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    else if (iVar4 == 3) {
        if ((param_2[0x12a] == 0) || (*(longlong *)(param_2 + 4) == 0)) goto LAB_14042823d;
        pplVar6 = (longlong **)FUN_14040fc60(local_998);
        iVar4 = FUN_140415bb0(lVar1,pplVar6);
        if (iVar4 != 0) {
            FUN_1400fb540(&local_9b8,L"itemDestroyed");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        if (*pplVar6 != (longlong *)0x0) {
            (**(code **)(**pplVar6 + 8))();
            *pplVar6 = (longlong *)0x0;
        }
        if (pplVar6[0x60] != (longlong *)0x0) {
            FUN_14018b900(pplVar6[0x60],0);
        }
    }
    FUN_1400ea3e0(param_1,"ChannelUpdate_Loot",&DAT_1409ead54,*param_2,uVar3);
    LAB_14042823d:
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140428260(longlong param_1,int *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong **pplVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined **local_4f8;
    undefined4 local_4f0;
    longlong local_4e8;
    undefined4 local_4e0;
    undefined local_4d8 [1216];

    lVar1 = *(longlong *)(param_1 + 400);
    local_4f8 = &PTR_FUN_140b569f0;
    local_4e0 = 1;
    local_4e8 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_4f0 = uVar3;
    if (*param_2 == 1) {
        pplVar6 = (longlong **)FUN_14040fc60(local_4d8,param_2 + 2);
        iVar4 = FUN_140415bb0(lVar1,pplVar6);
        if (iVar4 != 0) {
            FUN_1400fb540(&local_4f8,L"itemNew");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        if (*pplVar6 != (longlong *)0x0) {
            (**(code **)(**pplVar6 + 8))();
            *pplVar6 = (longlong *)0x0;
        }
        if (pplVar6[0x60] != (longlong *)0x0) {
            FUN_14018b900(pplVar6[0x60],0);
        }
        uVar8 = (ulonglong)(uint)param_2[0x132];
        puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        *puVar2 = *puVar7;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1,puVar2,L"nCount",uVar8 & 0xffffffff);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400ea3e0(param_1,"ChannelUpdate_Crafting",&DAT_1409eadac,*param_2,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_1404283d0(longlong param_1,int *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0();
    local_20 = uVar3;
    if (*param_2 - 1U < 7) {
        iVar4 = FUN_1406b9790(lVar1,param_2[2]);
        if (iVar4 != 0) {
            FUN_1400fb540(&local_28,L"rtCurr");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        uVar7 = (ulonglong)(uint)param_2[1];
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1,puVar2,L"nGain",uVar7 & 0xffffffff);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400ea3e0(param_1,"ChannelUpdate_Progress",&DAT_1409ead6c,*param_2,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140428500(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
    uint *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined auStack2600 [32];
    longlong local_a08;
    undefined **local_a00;
    undefined4 local_9f8;
    longlong local_9f0;
    undefined4 local_9e8;
    undefined local_9e0 [8];
    longlong local_9d8;
    undefined local_9c0 [1224];
    longlong *local_4f8 [96];
    longlong local_1f8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2600;
    FUN_14040fae0(local_4f8);
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_a08 = lVar8;
    lVar6 = *(longlong *)(lVar8 + 8);
    while (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x20) < param_3) {
            lVar6 = *(longlong *)(lVar6 + 0x18);
        }
        else {
            local_a08 = lVar6;
            lVar6 = *(longlong *)(lVar6 + 0x10);
        }
    }
    if ((local_a08 == lVar8) || (param_3 < *(uint *)(local_a08 + 0x20))) {
        local_a08 = lVar8;
    }
    if (local_a08 == lVar8) {
        lVar8 = 0;
    }
    else {
        lVar8 = local_a08 + 0x28;
    }
    FUN_1404111e0(local_4f8,lVar8,1);
    lVar8 = *(longlong *)(param_1 + 400);
    local_a00 = &PTR_FUN_140b569f0;
    local_9e8 = 1;
    local_9f0 = lVar8;
    if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar8);
    }
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    uVar4 = FUN_14005c1b0(lVar8,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar4;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar8);
    local_9f8 = uVar2;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(lVar8,puVar10,L"nLootId",param_3);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_9e0,L"bNeed");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar9) != '\0');
        FUN_140058710(lVar8);
    }
    if (local_9d8 != 0) {
        FUN_14018b900(local_9d8,0);
    }
    puVar1 = *(uint **)(lVar8 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(param_4 != 0);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar8,0xfffffffd);
    FUN_14005ea50(lVar8,uVar4,*(longlong *)(lVar8 + 0x10) + -0x20,*(longlong *)(lVar8 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(lVar8);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    pplVar7 = (longlong **)FUN_14040fc60(local_9c0,local_4f8);
    iVar3 = FUN_140415bb0(lVar8,pplVar7);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_a00,L"itemLoot");
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    }
    if (*pplVar7 != (longlong *)0x0) {
        (**(code **)(**pplVar7 + 8))();
        *pplVar7 = (longlong *)0x0;
    }
    if (pplVar7[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar7[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootRollSelected",&DAT_1409ead3c,uVar2);
    FUN_1400579e0(lVar8);
    if (local_4f8[0] != (longlong *)0x0) {
        (**(code **)(*local_4f8[0] + 8))();
        local_4f8[0] = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2600);
    return;
}



void FUN_140428840(longlong param_1,undefined8 param_2,uint param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined auStack2568 [32];
    longlong local_9e8;
    undefined **local_9e0;
    undefined4 local_9d8;
    longlong local_9d0;
    undefined4 local_9c8;
    undefined local_9c0 [1224];
    longlong *local_4f8 [96];
    longlong local_1f8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2568;
    FUN_14040fae0(local_4f8);
    lVar7 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_9e8 = lVar7;
    lVar1 = *(longlong *)(lVar7 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_3) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_9e8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_9e8 == lVar7) || (param_3 < *(uint *)(local_9e8 + 0x20))) {
        local_9e8 = lVar7;
    }
    if (local_9e8 == lVar7) {
        lVar7 = 0;
    }
    else {
        lVar7 = local_9e8 + 0x28;
    }
    FUN_1404111e0(local_4f8,lVar7,1);
    lVar7 = *(longlong *)(param_1 + 400);
    local_9e0 = &PTR_FUN_140b569f0;
    local_9c8 = 1;
    local_9d0 = lVar7;
    if (*(ulonglong *)(*(longlong *)(lVar7 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar7 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar7);
    }
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    uVar4 = FUN_14005c1b0(lVar7,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar7);
    local_9d8 = uVar2;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar2);
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(lVar7,puVar8,L"nLootId",param_3);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar2);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f0870(lVar7);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
    pplVar6 = (longlong **)FUN_14040fc60(local_9c0,local_4f8);
    iVar3 = FUN_140415bb0(lVar7,pplVar6);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_9e0,L"itemLoot");
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
    }
    if (*pplVar6 != (longlong *)0x0) {
        (**(code **)(**pplVar6 + 8))();
        *pplVar6 = (longlong *)0x0;
    }
    if (pplVar6[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar6[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootRollPassed",&DAT_1409eae1c,uVar2);
    FUN_1400579e0(lVar7);
    if (local_4f8[0] != (longlong *)0x0) {
        (**(code **)(*local_4f8[0] + 8))();
        local_4f8[0] = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2568);
    return;
}



void FUN_140428ac0(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,int param_5)

{
    uint *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined auStack2600 [32];
    longlong local_a08;
    undefined **local_a00;
    undefined4 local_9f8;
    longlong local_9f0;
    undefined4 local_9e8;
    undefined local_9e0 [8];
    longlong local_9d8;
    undefined local_9c0 [1224];
    longlong *local_4f8 [96];
    longlong local_1f8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2600;
    FUN_14040fae0(local_4f8);
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_a08 = lVar8;
    lVar6 = *(longlong *)(lVar8 + 8);
    while (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x20) < param_3) {
            lVar6 = *(longlong *)(lVar6 + 0x18);
        }
        else {
            local_a08 = lVar6;
            lVar6 = *(longlong *)(lVar6 + 0x10);
        }
    }
    if ((local_a08 == lVar8) || (param_3 < *(uint *)(local_a08 + 0x20))) {
        local_a08 = lVar8;
    }
    if (local_a08 == lVar8) {
        lVar8 = 0;
    }
    else {
        lVar8 = local_a08 + 0x28;
    }
    FUN_1404111e0(local_4f8,lVar8,1);
    lVar8 = *(longlong *)(param_1 + 400);
    local_a00 = &PTR_FUN_140b569f0;
    local_9e8 = 1;
    local_9f0 = lVar8;
    if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar8);
    }
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    uVar4 = FUN_14005c1b0(lVar8,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar4;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar8);
    local_9f8 = uVar2;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(lVar8,puVar10,L"nLootId",param_3);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(lVar8);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_9e0,L"bNeed");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar9) != '\0');
        FUN_140058710(lVar8);
    }
    if (local_9d8 != 0) {
        FUN_14018b900(local_9d8,0);
    }
    puVar1 = *(uint **)(lVar8 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(param_5 != 0);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar8,0xfffffffd);
    FUN_14005ea50(lVar8,uVar4,*(longlong *)(lVar8 + 0x10) + -0x20,*(longlong *)(lVar8 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(lVar8);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    pplVar7 = (longlong **)FUN_14040fc60(local_9c0,local_4f8);
    iVar3 = FUN_140415bb0(lVar8,pplVar7);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_a00,L"itemLoot");
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    }
    if (*pplVar7 != (longlong *)0x0) {
        (**(code **)(**pplVar7 + 8))();
        *pplVar7 = (longlong *)0x0;
    }
    if (pplVar7[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar7[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootRoll",&DAT_1409eae54,uVar2);
    FUN_1400579e0(lVar8);
    if (local_4f8[0] != (longlong *)0x0) {
        (**(code **)(*local_4f8[0] + 8))();
        local_4f8[0] = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2600);
    return;
}



void FUN_140428e40(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
    uint *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined auStack2600 [32];
    longlong local_a08;
    undefined **local_a00;
    undefined4 local_9f8;
    longlong local_9f0;
    undefined4 local_9e8;
    undefined local_9e0 [8];
    longlong local_9d8;
    undefined local_9c0 [1224];
    longlong *local_4f8 [96];
    longlong local_1f8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2600;
    FUN_14040fae0(local_4f8);
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_a08 = lVar8;
    lVar6 = *(longlong *)(lVar8 + 8);
    while (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x20) < param_3) {
            lVar6 = *(longlong *)(lVar6 + 0x18);
        }
        else {
            local_a08 = lVar6;
            lVar6 = *(longlong *)(lVar6 + 0x10);
        }
    }
    if ((local_a08 == lVar8) || (param_3 < *(uint *)(local_a08 + 0x20))) {
        local_a08 = lVar8;
    }
    if (local_a08 == lVar8) {
        lVar8 = 0;
    }
    else {
        lVar8 = local_a08 + 0x28;
    }
    FUN_1404111e0(local_4f8,lVar8,1);
    lVar8 = *(longlong *)(param_1 + 400);
    local_a00 = &PTR_FUN_140b569f0;
    local_9e8 = 1;
    local_9f0 = lVar8;
    if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar8);
    }
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    uVar4 = FUN_14005c1b0(lVar8,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar4;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar8);
    local_9f8 = uVar2;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(lVar8,puVar10,L"nLootId",param_3);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(lVar8);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_9e0,L"bNeed");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar9) != '\0');
        FUN_140058710(lVar8);
    }
    if (local_9d8 != 0) {
        FUN_14018b900(local_9d8,0);
    }
    puVar1 = *(uint **)(lVar8 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(param_4 != 0);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar8,0xfffffffd);
    FUN_14005ea50(lVar8,uVar4,*(longlong *)(lVar8 + 0x10) + -0x20,*(longlong *)(lVar8 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
    pplVar7 = (longlong **)FUN_14040fc60(local_9c0,local_4f8);
    iVar3 = FUN_140415bb0(lVar8,pplVar7);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_a00,L"itemLoot");
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    }
    if (*pplVar7 != (longlong *)0x0) {
        (**(code **)(**pplVar7 + 8))();
        *pplVar7 = (longlong *)0x0;
    }
    if (pplVar7[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar7[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootRollWon",&DAT_1409eaddc,uVar2);
    FUN_1400579e0(lVar8);
    if (local_4f8[0] != (longlong *)0x0) {
        (**(code **)(*local_4f8[0] + 8))();
        local_4f8[0] = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2600);
    return;
}



void FUN_140429180(longlong param_1,undefined8 param_2,uint param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined auStack2568 [32];
    longlong local_9e8;
    undefined **local_9e0;
    undefined4 local_9d8;
    longlong local_9d0;
    undefined4 local_9c8;
    undefined local_9c0 [1224];
    longlong *local_4f8 [96];
    longlong local_1f8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2568;
    FUN_14040fae0(local_4f8);
    lVar7 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_9e8 = lVar7;
    lVar1 = *(longlong *)(lVar7 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_3) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_9e8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_9e8 == lVar7) || (param_3 < *(uint *)(local_9e8 + 0x20))) {
        local_9e8 = lVar7;
    }
    if (local_9e8 == lVar7) {
        lVar7 = 0;
    }
    else {
        lVar7 = local_9e8 + 0x28;
    }
    FUN_1404111e0(local_4f8,lVar7,1);
    lVar7 = *(longlong *)(param_1 + 400);
    local_9e0 = &PTR_FUN_140b569f0;
    local_9c8 = 1;
    local_9d0 = lVar7;
    if (*(ulonglong *)(*(longlong *)(lVar7 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar7 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar7);
    }
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    uVar4 = FUN_14005c1b0(lVar7,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar7);
    local_9d8 = uVar2;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar2);
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(lVar7,puVar8,L"nLootId",param_3);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar2);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f0870(lVar7);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
    pplVar6 = (longlong **)FUN_14040fc60(local_9c0,local_4f8);
    iVar3 = FUN_140415bb0(lVar7,pplVar6);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_9e0,L"itemLoot");
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x10;
    }
    if (*pplVar6 != (longlong *)0x0) {
        (**(code **)(**pplVar6 + 8))();
        *pplVar6 = (longlong *)0x0;
    }
    if (pplVar6[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar6[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootAssigned",&DAT_1409eadf4,uVar2);
    FUN_1400579e0(lVar7);
    if (local_4f8[0] != (longlong *)0x0) {
        (**(code **)(*local_4f8[0] + 8))();
        local_4f8[0] = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2568);
    return;
}



void FUN_140429400(longlong param_1,uint param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    longlong lVar8;
    undefined auStack2552 [32];
    longlong local_9d8;
    undefined **local_9d0;
    undefined4 local_9c8;
    longlong local_9c0;
    undefined4 local_9b8;
    undefined local_9b0 [1224];
    longlong *local_4e8 [96];
    longlong local_1e8;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack2552;
    FUN_14040fae0(local_4e8);
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_9d8 = lVar8;
    lVar1 = *(longlong *)(lVar8 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_9d8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_9d8 == lVar8) || (param_2 < *(uint *)(local_9d8 + 0x20))) {
        local_9d8 = lVar8;
    }
    if (local_9d8 == lVar8) {
        lVar8 = 0;
    }
    else {
        lVar8 = local_9d8 + 0x28;
    }
    FUN_1404111e0(local_4e8,lVar8,1);
    lVar8 = *(longlong *)(param_1 + 400);
    local_9d0 = &PTR_FUN_140b569f0;
    local_9b8 = 1;
    local_9c0 = lVar8;
    if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar8);
    }
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    uVar5 = FUN_14005c1b0(lVar8,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar8);
    local_9c8 = uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar3);
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(lVar8,puVar2,L"nLootId",param_2);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    pplVar7 = (longlong **)FUN_14040fc60(local_9b0,local_4e8);
    iVar4 = FUN_140415bb0(lVar8,pplVar7);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_9d0,L"itemLoot");
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
    }
    if (*pplVar7 != (longlong *)0x0) {
        (**(code **)(**pplVar7 + 8))();
        *pplVar7 = (longlong *)0x0;
    }
    if (pplVar7[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar7[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootRollAllPassed",&DAT_1409eaf8c,uVar3);
    FUN_1400579e0(lVar8);
    if (local_4e8[0] != (longlong *)0x0) {
        (**(code **)(*local_4e8[0] + 8))();
        local_4e8[0] = (longlong *)0x0;
    }
    if (local_1e8 != 0) {
        FUN_14018b900(local_1e8,0);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack2552);
    return;
}



void FUN_140429630(undefined8 param_1)

{
    int iVar1;
    bool bVar2;
    int iVar3;
    undefined4 *puVar4;

    puVar4 = *(undefined4 **)(DAT_140c658a8 + 0x38);
    if ((puVar4 != (undefined4 *)0x0) ||
        (puVar4 = *(undefined4 **)(DAT_140c658b0 + 0x38), puVar4 != (undefined4 *)0x0)) {
        iVar1 = puVar4[2];
        bVar2 = false;
        if ((iVar1 == 10) || (iVar1 == 0x76)) {
            bVar2 = true;
        }
        if (puVar4[0xc] != 0) {
            iVar3 = puVar4[0xd];
            if (bVar2) {
                iVar3 = (iVar1 != 10) + 4;
            }
            FUN_1400ea3e0(param_1,"DamageOrHealingDone","UUiiiibS",puVar4[1],*puVar4,iVar3,puVar4[8],
                          puVar4[7],puVar4[6],puVar4[0xc] == 1,*(undefined8 *)(puVar4 + 0x14));
        }
    }
    return;
}



void FUN_1404296f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined *puVar2;

    lVar1 = FUN_1403d90d0(DAT_140c65898);
    if (lVar1 != 0) {
        lVar1 = FUN_1403acd90(DAT_140c65b70,param_4,lVar1);
        if (lVar1 != 0) {
            if (*(longlong *)(lVar1 + 8) == 0) {
                puVar2 = &DAT_1409eb6fc;
            }
            else {
                puVar2 = (undefined *)FUN_14034bdd0();
            }
            FUN_1400ea3e0(param_1,"AttackMissed",&DAT_140b00d28,param_2,param_3,0,puVar2);
        }
    }
    return;
}



void FUN_1404297c0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    double *pdVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    double dVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    int local_res10;
    int iStackX20;
    undefined **local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    undefined local_68 [8];
    longlong local_60;

    lVar2 = *(longlong *)(param_1 + 400);
    local_88 = &PTR_FUN_140b569f0;
    local_70 = 1;
    local_78 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    uVar6 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    local_80 = FUN_1400578c0(lVar2);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x17b8) + 0x10);
    lVar7 = lVar2;
    if (lVar9 != *(longlong *)(param_1 + 0x17b8)) {
        uVar12 = 0;
        uVar13 = 0;
        do {
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar6 = FUN_14005c1b0(lVar2,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar2);
            iVar1 = *(int *)(lVar9 + 0x20);
            lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar7 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
            }
            else {
                dVar11 = (double)iVar5;
                if (dVar11 == (double)CONCAT44(uVar13,uVar12)) {
                    puVar8 = *(undefined8 **)(lVar7 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar7 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_14042995d;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_14042995d:
            puVar3 = *(undefined8 **)(lVar2 + 0x10);
            *puVar3 = *puVar8;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_68,L"eRewardProperty");
            lVar7 = *(longlong *)(lVar7 + 8);
            if (lVar7 == 0) {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            }
            else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *)(lVar7 + lVar10) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar8 = *(undefined8 **)(lVar2 + 0x10);
                uVar6 = FUN_140062650(lVar2,lVar7,lVar10);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar6;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            if (local_60 != 0) {
                FUN_14018b900(local_60,0);
            }
            pdVar4 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar1;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
            FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                          *(longlong *)(lVar2 + 0x10) + -0x10);
            lVar7 = *(longlong *)(lVar2 + 0x10);
            *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
            lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            iVar1 = *(int *)(lVar9 + 0x24);
            if (iVar5 - 1U < *(uint *)(lVar10 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
            }
            else {
                dVar11 = (double)iVar5;
                if (dVar11 == (double)CONCAT44(uVar13,uVar12)) {
                    puVar8 = *(undefined8 **)(lVar10 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar10 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_140429ad4;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_140429ad4:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar8;
            *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_68,L"nObjectId");
            lVar7 = *(longlong *)(lVar7 + 8);
            if (lVar7 == 0) {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            }
            else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *)(lVar7 + lVar10) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar8 = *(undefined8 **)(lVar2 + 0x10);
                uVar6 = FUN_140062650(lVar2,lVar7,lVar10);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar6;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            if (local_60 != 0) {
                FUN_14018b900(local_60,0);
            }
            pdVar4 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar1;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
            FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                          *(longlong *)(lVar2 + 0x10) + -0x10);
            *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
            FUN_1400fb1d0(&local_88);
            FUN_1400579e0(lVar2);
            lVar7 = *(longlong *)(lVar9 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar9 = lVar7;
                        lVar7 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar7) {
                    lVar9 = lVar7;
                }
            }
            else {
                for (lVar10 = *(longlong *)(lVar7 + 0x10); lVar9 = lVar7, lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    lVar7 = lVar10;
                }
            }
            lVar7 = local_78;
        } while (lVar9 != *(longlong *)(param_1 + 0x17b8));
    }
    uVar12 = local_80;
    FUN_140008410(param_1 + 0x17b0);
    FUN_1400ea3e0(param_1,"UpdateRewardProperties",&DAT_1409eb9cc,uVar12);
    if (lVar7 != 0) {
        FUN_1400579e0(lVar7);
    }
    return;
}



void FUN_140429cb0(undefined8 param_1,int param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    char *pcVar3;
    undefined *puVar4;

    plVar1 = *(longlong **)(DAT_140c65898 + 0x78);
    if (plVar1 != (longlong *)0x0) {
        if (param_2 == 0) {
            iVar2 = (**(code **)(*plVar1 + 0x48))();
            puVar4 = &DAT_1409ebc44;
            pcVar3 = "UI_HealthChanged";
        }
        else if (param_2 == 2) {
            iVar2 = (int)*(float *)((longlong)plVar1 + 0x60c);
            puVar4 = &DAT_1409ebc24;
            pcVar3 = "SprintEnergyUpdated";
        }
        else {
            if (param_2 != 9) {
                if (param_2 == 10) {
                    FUN_1400ea3e0(param_1,"UI_LevelChanged",&DAT_1409ebbac,param_3);
                    return;
                }
                if (param_2 != 0xb) {
                    return;
                }
                FUN_1400ea3e0(param_1,"UI_EffectiveLevelChanged",&DAT_1409ebd14,param_3);
                return;
            }
            iVar2 = (int)*(float *)((longlong)plVar1 + 0x6f4);
            puVar4 = &DAT_1409ebbfc;
            pcVar3 = "DashEnergyUpdated";
        }
        FUN_1400ea3e0(param_1,pcVar3,puVar4,param_3,iVar2);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140429da0(longlong param_1,uint *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    double *pdVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    uint uVar9;
    ulonglong uVar10;
    longlong lVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined8 local_res18;
    int local_res20;
    int iStackX36;
    undefined **local_98;
    undefined4 local_90;
    longlong local_88;
    undefined4 local_80;
    undefined local_78 [8];
    longlong local_70;

    lVar2 = *(longlong *)(param_1 + 400);
    local_98 = &PTR_FUN_140b569f0;
    local_80 = 1;
    local_88 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    uVar6 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    local_90 = FUN_1400578c0(lVar2);
    uVar10 = 0;
    local_res18 = 0;
    lVar7 = lVar2;
    if (*param_2 != 0) {
        uVar13 = 0;
        uVar14 = 0;
        do {
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar6 = FUN_14005c1b0(lVar2,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar2);
            iVar1 = *(int *)(uVar10 * 0x20 + 0x18 + *(longlong *)(param_2 + 2));
            lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar7 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
            }
            else {
                dVar12 = (double)iVar5;
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar8 = *(undefined8 **)(lVar7 + 0x20);
                }
                else {
                    iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
                    local_res20 = SUB84(dVar12,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar7 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                              (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_140429f45;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_140429f45:
            puVar3 = *(undefined8 **)(lVar2 + 0x10);
            *puVar3 = *puVar8;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_78,L"nPropertyIndex");
            lVar7 = *(longlong *)(lVar7 + 8);
            if (lVar7 == 0) {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                local_res18 = uVar10;
            }
            else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar11 + lVar7) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar8 = *(undefined8 **)(lVar2 + 0x10);
                uVar6 = FUN_140062650(lVar2,lVar7,lVar11);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar6;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            if (local_70 != 0) {
                FUN_14018b900(local_70,0);
            }
            pdVar4 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar1;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
            FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                          *(longlong *)(lVar2 + 0x10) + -0x10);
            lVar7 = *(longlong *)(lVar2 + 0x10);
            *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
            lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar11 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
            }
            else {
                dVar12 = (double)iVar5;
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar8 = *(undefined8 **)(lVar11 + 0x20);
                }
                else {
                    local_res18._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
                    local_res18._0_4_ = SUB84(dVar12,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar11 + 0x20) +
                             ((longlong)(ulonglong)(uint)(local_res18._4_4_ + (int)local_res18) %
                              (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_14042a0cd;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_14042a0cd:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar8;
            *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            FUN_1400f0870(lVar2);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            FUN_1400fb1d0(&local_98);
            FUN_1400579e0(lVar2);
            uVar9 = (int)local_res18 + 1;
            uVar10 = (ulonglong)uVar9;
            local_res18 = (ulonglong)uVar9;
            lVar7 = local_88;
        } while (uVar9 < *param_2);
    }
    FUN_1400ea3e0(param_1,"HousingCommunityPlacedResidencesListRecieved",&DAT_1409ec02c,local_90);
    if (lVar7 != 0) {
        FUN_1400579e0(lVar7);
    }
    return;
}



void FUN_14042a1a0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar1);
    uVar7 = (ulonglong)(uint)param_2[1];
    local_20 = uVar2;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar8,L"ePetType",uVar7 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar8 = *puVar5;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    lVar6 = FUN_140224d00(param_2[4]);
    if (lVar6 != 0) {
        iVar3 = FUN_140434100(lVar1,lVar6);
        if (iVar3 != 0) {
            FUN_1400fb540(&local_28,L"pcFlair");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
    }
    FUN_1400ea3e0(param_1,"PetCustomizationFailed",&DAT_1409ec17c,*param_2,uVar2);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14042a360(longlong param_1,undefined4 param_2,short *param_3,uint param_4,
                   undefined4 param_5)

{
    short sVar1;
    ulonglong uVar2;
    longlong lVar3;
    double *pdVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    undefined8 *puVar7;
    short *psVar8;
    undefined8 *puVar9;
    ulonglong *puVar10;
    ulonglong *puVar11;
    short *psVar12;
    undefined8 uVar13;
    longlong lVar14;
    short *psVar15;
    longlong lVar16;
    short *psVar17;
    int iVar18;
    short *psVar19;
    ulonglong local_res18;
    uint local_res20;
    ulonglong local_78;
    undefined local_70 [8];
    longlong local_68;

    if (param_3 != (short *)0x0) {
        local_res20 = param_4;
        puVar7 = (undefined8 *)FUN_14018b280();
        *puVar7 = puVar7;
        puVar7[1] = puVar7;
        psVar8 = (short *)FUN_14018b280();
        psVar17 = psVar8 + 8;
        if (psVar8 != (short *)0x0) {
            *psVar8 = 0;
        }
        psVar19 = psVar8;
        psVar12 = psVar8;
        if (*param_3 != 0) {
            do {
                sVar1 = *param_3;
                psVar12 = psVar19;
                if (sVar1 == 0xd) {
                    param_3 = param_3 + 1;
                    if (*param_3 == 10) {
                        LAB_14042a3fb:
                        param_3 = param_3 + 1;
                    }
                    puVar9 = (undefined8 *)FUN_14018b280(0x30);
                    if (puVar9 + 2 != (undefined8 *)0x0) {
                        puVar9[3] = 0;
                        puVar9[4] = 0;
                        puVar9[5] = 0;
                        FUN_14001c1b0(puVar9 + 2,psVar19,psVar8);
                    }
                    *puVar9 = puVar7;
                    puVar9[1] = puVar7[1];
                    *(undefined8 **)puVar7[1] = puVar9;
                    puVar7[1] = puVar9;
                    if (psVar19 != psVar8) {
                        *psVar19 = 0;
                        psVar8 = psVar19;
                    }
                }
                else {
                    if (sVar1 == 10) goto LAB_14042a3fb;
                    psVar15 = psVar8;
                    if (psVar8 + 1 == psVar17) {
                        local_res18 = (longlong)psVar8 - (longlong)psVar19 >> 1;
                        local_78 = local_res18;
                        puVar10 = &local_res18;
                        if (local_res18 != 0) {
                            puVar10 = &local_78;
                        }
                        local_78 = *puVar10 + local_res18;
                        puVar11 = &local_res18;
                        if (local_res18 <= *puVar10 + local_res18) {
                            puVar11 = &local_78;
                        }
                        uVar2 = *puVar11;
                        psVar12 = (short *)FUN_14018b280();
                        psVar15 = psVar12;
                        if (psVar19 != psVar8) {
                            do {
                                if (psVar15 != (short *)0x0) {
                                    *psVar15 = *(short *)(((longlong)psVar19 - (longlong)psVar12) + (longlong)psVar15)
                                            ;
                                }
                                psVar15 = psVar15 + 1;
                            } while ((short *)(((longlong)psVar19 - (longlong)psVar12) + (longlong)psVar15) !=
                                     psVar8);
                        }
                        if (psVar15 != (short *)0x0) {
                            *psVar15 = 0;
                        }
                        if (psVar19 != (short *)0x0) {
                            FUN_14018b900();
                        }
                        psVar17 = psVar12 + uVar2 + 1;
                    }
                    psVar8 = psVar15 + 1;
                    if (psVar8 != (short *)0x0) {
                        *psVar8 = 0;
                    }
                    *psVar15 = sVar1;
                    param_3 = param_3 + 1;
                }
                psVar19 = psVar12;
            } while (*param_3 != 0);
            if (psVar12 != psVar8) {
                puVar9 = (undefined8 *)FUN_14018b280(0x30);
                if (puVar9 + 2 != (undefined8 *)0x0) {
                    puVar9[3] = 0;
                    puVar9[4] = 0;
                    puVar9[5] = 0;
                    FUN_14001c1b0(puVar9 + 2,psVar12,psVar8);
                }
                *puVar9 = puVar7;
                puVar9[1] = puVar7[1];
                *(undefined8 **)puVar7[1] = puVar9;
                puVar7[1] = puVar9;
            }
        }
        iVar18 = 1;
        lVar3 = *(longlong *)(param_1 + 400);
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar9 = *(undefined8 **)(lVar3 + 0x10);
        uVar13 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar9 + 1) = 5;
        *puVar9 = uVar13;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        for (puVar9 = (undefined8 *)*puVar7; puVar9 != puVar7; puVar9 = (undefined8 *)*puVar9) {
            pdVar4 = *(double **)(lVar3 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar18;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            lVar14 = FUN_14018f0e0(local_70,puVar9[3]);
            lVar14 = *(longlong *)(lVar14 + 8);
            if (lVar14 == 0) {
                *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            }
            else {
                lVar16 = -1;
                do {
                    lVar16 = lVar16 + 1;
                } while (*(char *)(lVar14 + lVar16) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar3);
                }
                puVar5 = *(undefined8 **)(lVar3 + 0x10);
                uVar13 = FUN_140062650(lVar3,lVar14,lVar16);
                *(undefined4 *)(puVar5 + 1) = 4;
                *puVar5 = uVar13;
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            }
            if (local_68 != 0) {
                FUN_14018b900(local_68,0);
            }
            lVar14 = *(longlong *)(lVar3 + 0x10);
            FUN_14005ea50(lVar3,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x20;
            iVar18 = iVar18 + 1;
        }
        uVar6 = FUN_1400578c0(lVar3);
        FUN_1400ea3e0(param_1,"StoryPanelDialog_Show",&DAT_140b00ecc,param_2,uVar6,
                      (double)((float)(ulonglong)local_res20 * 0.001),param_5);
        FUN_1400579e0(lVar3);
        if (psVar12 != (short *)0x0) {
            FUN_14018b900(psVar12,0);
        }
        puVar9 = (undefined8 *)*puVar7;
        while (puVar9 != puVar7) {
            puVar5 = (undefined8 *)*puVar9;
            if (puVar9[3] != 0) {
                FUN_14018b900(puVar9[3],0);
            }
            FUN_14018b900(puVar9,0);
            puVar9 = puVar5;
        }
        *puVar7 = puVar7;
        puVar7[1] = puVar7;
        FUN_14018b900(puVar7,0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14042a7b0(longlong param_1,undefined4 *param_2)

{
    byte bVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    undefined8 uVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 uVar14;
    longlong lVar15;
    longlong lVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    double dVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    int local_res18;
    int iStackX28;
    int local_res20;
    int iStackX36;
    int local_f8;
    int iStack244;
    undefined **local_f0;
    ulonglong local_e8;
    longlong local_e0;
    undefined4 local_d8;
    ulonglong local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 *local_b0;
    undefined4 local_a8;
    undefined **local_a0;
    int local_98;
    longlong local_90;
    undefined4 local_88;
    undefined **local_80;
    int local_78;
    longlong local_70;
    undefined4 local_68;

    lVar3 = *(longlong *)(param_1 + 400);
    local_68 = 1;
    local_80 = &PTR_FUN_140b569f0;
    local_70 = lVar3;
    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar3);
    }
    puVar13 = *(undefined8 **)(lVar3 + 0x10);
    uVar9 = FUN_14005c1b0(lVar3,0,0);
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar9;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(lVar3);
    uVar17 = (ulonglong)(uint)param_2[1];
    local_78 = iVar6;
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),iVar6);
    puVar13 = *(undefined8 **)(lVar3 + 0x10);
    *puVar13 = *puVar10;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3,puVar13,L"nBuyOrderCount",uVar17 & 0xffffffff);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    puVar13 = *(undefined8 **)(lVar3 + 0x10);
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),iVar6);
    *puVar13 = *puVar10;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400f06f0(lVar3);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
    local_a0 = &PTR_FUN_140b569f0;
    local_88 = 1;
    local_90 = lVar3;
    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar3);
    }
    puVar13 = *(undefined8 **)(lVar3 + 0x10);
    uVar9 = FUN_14005c1b0(lVar3,0,0);
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar9;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    local_98 = FUN_1400578c0(lVar3);
    uVar20 = 0;
    uVar21 = 0;
    puVar13 = (undefined8 *)(param_2 + 2);
    uVar17 = 0;
    do {
        local_f0 = &PTR_FUN_140b569f0;
        local_d8 = 1;
        local_e0 = lVar3;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar10 = *(undefined8 **)(lVar3 + 0x10);
        uVar9 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar9;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        uVar7 = FUN_1400578c0(lVar3);
        uVar9 = *puVar13;
        local_e8 = local_e8 & 0xffffffff00000000 | (ulonglong)uVar7;
        local_c0 = 1;
        local_b8 = 0;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        if (*(longlong *)(lVar3 + 0x28) == *(longlong *)(lVar3 + 0x50)) {
            uVar14 = *(undefined8 *)(lVar3 + 0x78);
        }
        else {
            uVar14 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar3 + 0x28) + 8) + 0x18);
        }
        lVar11 = *(longlong *)(lVar3 + 0x20);
        puVar10 = (undefined8 *)(**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 0x18),0,0,0x48);
        if (puVar10 == (undefined8 *)0x0) {
            FUN_140061040(lVar3,4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
        }
        *(longlong *)(lVar11 + 0x78) = *(longlong *)(lVar11 + 0x78) + 0x48;
        bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x20) + 0x20);
        *(undefined *)(puVar10 + 1) = 7;
        puVar10[4] = 0x18;
        puVar10[2] = 0;
        puVar10[3] = uVar14;
        *(byte *)((longlong)puVar10 + 9) = bVar1 & 3;
        *puVar10 = **(undefined8 **)(*(longlong *)(lVar3 + 0x20) + 0xb0);
        **(undefined8 **)(*(longlong *)(lVar3 + 0x20) + 0xb0) = puVar10;
        puVar12 = *(undefined8 **)(lVar3 + 0x10);
        *puVar12 = puVar10;
        *(undefined4 *)(puVar12 + 1) = 7;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        puVar10[6] = uVar9;
        puVar10[7] = local_c0;
        puVar10[8] = local_b8;
        lVar11 = *(longlong *)(lVar3 + 0x20);
        local_b0 = (undefined8 *)FUN_140062650(lVar3,"Game.Money",10);
        local_a8 = 4;
        FUN_14005e8e0(lVar3,lVar11 + 0xa0,&local_b0,*(undefined8 *)(lVar3 + 0x10));
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        FUN_140058bf0(lVar3,0xfffffffe);
        FUN_1400fb540(&local_f0,L"monPrice");
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(lVar3 + 0x10);
        iVar6 = *(int *)((longlong)&DAT_140afc8c0 + uVar17);
        lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        if (uVar7 - 1 < *(uint *)(lVar11 + 0x38)) {
            puVar12 = (undefined8 *)((longlong)(int)(uVar7 - 1) * 0x10 + *(longlong *)(lVar11 + 0x18));
        }
        else {
            dVar19 = (double)uVar7;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar12 = *(undefined8 **)(lVar11 + 0x20);
            }
            else {
                iStackX36 = (int)((ulonglong)dVar19 >> 0x20);
                local_res20 = SUB84(dVar19,0);
                puVar12 = (undefined8 *)
                        (*(longlong *)(lVar11 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                          (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar12 + 3) == 3) && (dVar19 == (double)puVar12[2])) goto LAB_14042ab4f;
                puVar12 = (undefined8 *)puVar12[4];
            } while (puVar12 != (undefined8 *)0x0);
            puVar12 = &DAT_140a12138;
        }
        LAB_14042ab4f:
        *puVar10 = *puVar12;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        lVar11 = FUN_14018f0e0(&local_f0,L"nCount");
        lVar11 = *(longlong *)(lVar11 + 8);
        if (lVar11 == 0) {
            *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        }
        else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar11 + lVar16) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar10 = *(undefined8 **)(lVar3 + 0x10);
            uVar9 = FUN_140062650(lVar3,lVar11,lVar16);
            *(undefined4 *)(puVar10 + 1) = 4;
            *puVar10 = uVar9;
        }
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        if (local_e8 != 0) {
            FUN_14018b900(local_e8,0);
        }
        pdVar4 = *(double **)(lVar3 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar6;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar3,0xfffffffd);
        FUN_14005ea50(lVar3,uVar9,*(longlong *)(lVar3 + 0x10) + -0x20,
                      *(longlong *)(lVar3 + 0x10) + -0x10);
        *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
        FUN_1400fb1d0(&local_a0);
        FUN_1400579e0();
        uVar17 = uVar17 + 4;
        puVar13 = puVar13 + 1;
    } while (uVar17 < 0xc);
    lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
    if (local_78 - 1U < *(uint *)(lVar11 + 0x38)) {
        puVar13 = (undefined8 *)((longlong)(local_78 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
    }
    else {
        dVar19 = (double)local_78;
        if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
            puVar13 = *(undefined8 **)(lVar11 + 0x20);
        }
        else {
            iStackX28 = (int)((ulonglong)dVar19 >> 0x20);
            local_res18 = SUB84(dVar19,0);
            puVar13 = (undefined8 *)
                    (*(longlong *)(lVar11 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar13 + 3) == 3) && (dVar19 == (double)puVar13[2])) goto LAB_14042ace3;
            puVar13 = (undefined8 *)puVar13[4];
        } while (puVar13 != (undefined8 *)0x0);
        puVar13 = &DAT_140a12138;
    }
    LAB_14042ace3:
    puVar10 = *(undefined8 **)(lVar3 + 0x10);
    *puVar10 = *puVar13;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar13 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar11 = FUN_14018f0e0(&local_f0,L"arBuyOrderPrices");
    lVar11 = *(longlong *)(lVar11 + 8);
    if (lVar11 == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    else {
        lVar16 = -1;
        do {
            lVar16 = lVar16 + 1;
        } while (*(char *)(lVar11 + lVar16) != '\0');
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar13 = *(undefined8 **)(lVar3 + 0x10);
        uVar9 = FUN_140062650(lVar3,lVar11,lVar16);
        *(undefined4 *)(puVar13 + 1) = 4;
        *puVar13 = uVar9;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    }
    uVar17 = 0;
    if (local_e8 != 0) {
        FUN_14018b900(local_e8,0);
    }
    lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
    if (local_98 - 1U < *(uint *)(lVar11 + 0x38)) {
        puVar13 = (undefined8 *)((longlong)(local_98 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
    }
    else {
        dVar19 = (double)local_98;
        if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
            puVar13 = *(undefined8 **)(lVar11 + 0x20);
        }
        else {
            iStackX28 = (int)((ulonglong)dVar19 >> 0x20);
            local_res18 = SUB84(dVar19,0);
            puVar13 = (undefined8 *)
                    (*(longlong *)(lVar11 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar13 + 3) == 3) && (dVar19 == (double)puVar13[2])) goto LAB_14042ae0e;
            puVar13 = (undefined8 *)puVar13[4];
        } while (puVar13 != (undefined8 *)0x0);
        puVar13 = &DAT_140a12138;
    }
    LAB_14042ae0e:
    puVar10 = *(undefined8 **)(lVar3 + 0x10);
    *puVar10 = *puVar13;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar13 + 1);
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    lVar11 = *(longlong *)(lVar3 + 0x10);
    FUN_14005ea50(lVar3,&DAT_ffffffffffffffd0 + lVar11,lVar11 + -0x20,lVar11 + -0x10);
    *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
    local_res18 = 1;
    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar3);
    }
    puVar13 = *(undefined8 **)(lVar3 + 0x10);
    uVar9 = FUN_14005c1b0(lVar3,0,0);
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar9;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(lVar3);
    local_d0 = 0;
    puVar13 = (undefined8 *)(param_2 + 10);
    do {
        local_b0 = puVar13;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar10 = *(undefined8 **)(lVar3 + 0x10);
        uVar9 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar9;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        iVar8 = FUN_1400578c0(lVar3);
        uVar9 = *puVar13;
        local_e8 = 1;
        local_e0 = 0;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        if (*(longlong *)(lVar3 + 0x28) == *(longlong *)(lVar3 + 0x50)) {
            uVar14 = *(undefined8 *)(lVar3 + 0x78);
        }
        else {
            uVar14 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar3 + 0x28) + 8) + 0x18);
        }
        lVar11 = *(longlong *)(lVar3 + 0x20);
        puVar13 = (undefined8 *)(**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 0x18),0,0,0x48);
        if (puVar13 == (undefined8 *)0x0) {
            FUN_140061040(lVar3,4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
        }
        *(longlong *)(lVar11 + 0x78) = *(longlong *)(lVar11 + 0x78) + 0x48;
        bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x20) + 0x20);
        *(undefined *)(puVar13 + 1) = 7;
        puVar13[4] = 0x18;
        puVar13[2] = 0;
        puVar13[3] = uVar14;
        *(byte *)((longlong)puVar13 + 9) = bVar1 & 3;
        *puVar13 = **(undefined8 **)(*(longlong *)(lVar3 + 0x20) + 0xb0);
        **(undefined8 **)(*(longlong *)(lVar3 + 0x20) + 0xb0) = puVar13;
        puVar10 = *(undefined8 **)(lVar3 + 0x10);
        *puVar10 = puVar13;
        *(undefined4 *)(puVar10 + 1) = 7;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        puVar13[6] = uVar9;
        puVar13[7] = local_e8;
        puVar13[8] = local_e0;
        lVar11 = *(longlong *)(lVar3 + 0x20);
        local_c8 = FUN_140062650(lVar3,"Game.Money",10);
        local_c0 = CONCAT44(local_c0._4_4_,4);
        FUN_14005e8e0(lVar3,lVar11 + 0xa0,&local_c8,*(undefined8 *)(lVar3 + 0x10));
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        FUN_140058bf0(lVar3,0xfffffffe);
        puVar13 = *(undefined8 **)(lVar3 + 0x10);
        lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        lVar16 = *(longlong *)(lVar3 + 0x18);
        if (iVar8 - 1U < *(uint *)(lVar11 + 0x38)) {
            puVar10 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
        }
        else {
            dVar19 = (double)iVar8;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar10 = *(undefined8 **)(lVar11 + 0x20);
            }
            else {
                iStack244 = (int)((ulonglong)dVar19 >> 0x20);
                local_f8 = SUB84(dVar19,0);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar11 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                          (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar10 + 3) == 3) && (dVar19 == (double)puVar10[2])) goto LAB_14042b0a0;
                puVar10 = (undefined8 *)puVar10[4];
            } while (puVar10 != (undefined8 *)0x0);
            puVar10 = &DAT_140a12138;
        }
        LAB_14042b0a0:
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        lVar11 = FUN_14018f0e0(&local_f0,L"monPrice");
        lVar11 = *(longlong *)(lVar11 + 8);
        if (lVar11 == 0) {
            *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        }
        else {
            lVar15 = -1;
            do {
                lVar15 = lVar15 + 1;
            } while (*(char *)(lVar11 + lVar15) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar10 = *(undefined8 **)(lVar3 + 0x10);
            uVar9 = FUN_140062650(lVar3,lVar11,lVar15);
            *(undefined4 *)(puVar10 + 1) = 4;
            *puVar10 = uVar9;
        }
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        if (local_e8 != 0) {
            FUN_14018b900(local_e8,0);
        }
        puVar10 = (undefined8 *)FUN_1400580e0(lVar3,(longlong)puVar13 - lVar16 >> 4 & 0xffffffff);
        puVar13 = *(undefined8 **)(lVar3 + 0x10);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        lVar11 = *(longlong *)(lVar3 + 0x10);
        *(longlong *)(lVar3 + 0x10) = lVar11 + 0x10;
        FUN_14005ea50(lVar3,lVar11 + -0x20,lVar11 + -0x10,lVar11);
        uVar18 = local_d0;
        lVar11 = *(longlong *)(lVar3 + 0x10);
        puVar13 = (undefined8 *)(lVar11 + -0x40);
        *(undefined8 **)(lVar3 + 0x10) = puVar13;
        iVar2 = *(int *)((longlong)&DAT_140afc8c0 + local_d0);
        lVar16 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        if (iVar8 - 1U < *(uint *)(lVar16 + 0x38)) {
            puVar10 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar16 + 0x18));
        }
        else {
            dVar19 = (double)iVar8;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar10 = *(undefined8 **)(lVar16 + 0x20);
            }
            else {
                iStack244 = (int)((ulonglong)dVar19 >> 0x20);
                local_f8 = SUB84(dVar19,0);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar16 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                          (longlong)((1 << (*(byte *)(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar10 + 3) == 3) && (dVar19 == (double)puVar10[2])) goto LAB_14042b214;
                puVar10 = (undefined8 *)puVar10[4];
            } while (puVar10 != (undefined8 *)0x0);
            puVar10 = &DAT_140a12138;
        }
        LAB_14042b214:
        *puVar13 = *puVar10;
        *(undefined4 *)(lVar11 + -0x38) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        lVar11 = FUN_14018f0e0(&local_f0,L"nCount");
        lVar11 = *(longlong *)(lVar11 + 8);
        if (lVar11 == 0) {
            *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        }
        else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar11 + lVar16) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar13 = *(undefined8 **)(lVar3 + 0x10);
            uVar9 = FUN_140062650(lVar3,lVar11,lVar16);
            *(undefined4 *)(puVar13 + 1) = 4;
            *puVar13 = uVar9;
            uVar18 = local_d0;
        }
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        if (local_e8 != 0) {
            FUN_14018b900(local_e8,0);
        }
        pdVar4 = *(double **)(lVar3 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar2;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar3,0xfffffffd);
        FUN_14005ea50(lVar3,uVar9,*(longlong *)(lVar3 + 0x10) + -0x20,
                      *(longlong *)(lVar3 + 0x10) + -0x10);
        lVar11 = *(longlong *)(lVar3 + 0x10);
        *(undefined **)(lVar3 + 0x10) = &DAT_ffffffffffffffd0 + lVar11;
        lVar16 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        if (iVar6 - 1U < *(uint *)(lVar16 + 0x38)) {
            puVar13 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar16 + 0x18));
        }
        else {
            dVar19 = (double)iVar6;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar13 = *(undefined8 **)(lVar16 + 0x20);
            }
            else {
                iStack244 = (int)((ulonglong)dVar19 >> 0x20);
                local_f8 = SUB84(dVar19,0);
                puVar13 = (undefined8 *)
                        (*(longlong *)(lVar16 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                          (longlong)((1 << (*(byte *)(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar13 + 3) == 3) && (dVar19 == (double)puVar13[2])) goto LAB_14042b38d;
                puVar13 = (undefined8 *)puVar13[4];
            } while (puVar13 != (undefined8 *)0x0);
            puVar13 = &DAT_140a12138;
        }
        LAB_14042b38d:
        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar11) = *puVar13;
        *(undefined4 *)(lVar11 + -0x28) = *(undefined4 *)(puVar13 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        pdVar4 = *(double **)(lVar3 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)local_res18;
        lVar11 = *(longlong *)(lVar3 + 0x10);
        puVar13 = (undefined8 *)(lVar11 + 0x10);
        *(undefined8 **)(lVar3 + 0x10) = puVar13;
        lVar16 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        if (iVar8 - 1U < *(uint *)(lVar16 + 0x38)) {
            puVar10 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar16 + 0x18));
        }
        else {
            dVar19 = (double)iVar8;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar10 = *(undefined8 **)(lVar16 + 0x20);
            }
            else {
                iStack244 = (int)((ulonglong)dVar19 >> 0x20);
                local_f8 = SUB84(dVar19,0);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar16 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                          (longlong)((1 << (*(byte *)(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar10 + 3) == 3) && (dVar19 == (double)puVar10[2])) goto LAB_14042b454;
                puVar10 = (undefined8 *)puVar10[4];
            } while (puVar10 != (undefined8 *)0x0);
            puVar10 = &DAT_140a12138;
        }
        LAB_14042b454:
        *puVar13 = *puVar10;
        *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)(puVar10 + 1);
        lVar11 = *(longlong *)(lVar3 + 0x10);
        *(longlong *)(lVar3 + 0x10) = lVar11 + 0x10;
        FUN_14005ea50(lVar3,lVar11 + -0x20,lVar11 + -0x10,lVar11);
        *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
        FUN_1400579e0(lVar3);
        local_d0 = uVar18 + 4;
        puVar13 = local_b0 + 1;
        local_res18 = local_res18 + 1;
        if (0xb < local_d0) {
            local_b0 = puVar13;
            FUN_1400fb2a0(&local_80,L"arSellOrderPrices",iVar6);
            local_f0 = &PTR_FUN_140b569f0;
            local_d8 = 1;
            local_e0 = lVar3;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar13 = *(undefined8 **)(lVar3 + 0x10);
            uVar9 = FUN_14005c1b0(lVar3,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar9;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            local_e8._0_4_ = FUN_1400578c0(lVar3);
            local_e8 = local_e8 & 0xffffffff00000000 | (ulonglong)(uint)local_e8;
            lVar11 = lVar3;
            uVar18 = uVar17;
            if (param_2[0x10] != 0) {
                do {
                    if ((*(longlong *)(param_2 + 0x12) + uVar17 != 0) &&
                        (iVar6 = FUN_140433640(lVar11), iVar6 != 0)) {
                        FUN_1400fb470(&local_f0);
                        *(longlong *)(local_e0 + 0x10) = *(longlong *)(local_e0 + 0x10) + -0x10;
                        lVar11 = local_e0;
                    }
                    uVar18 = uVar18 + 1;
                    uVar17 = uVar17 + 0x38;
                } while (uVar18 < (uint)param_2[0x10]);
            }
            FUN_1400ea3e0(param_1,"CommodityInfoResults",&DAT_1409ec6dc,*param_2,local_78,(uint)local_e8);
            if (lVar11 != 0) {
                FUN_1400579e0(lVar11);
            }
            FUN_1400579e0(lVar3);
            if (local_90 != 0) {
                FUN_1400579e0();
            }
            FUN_1400579e0(lVar3);
            return;
        }
    } while( true );
}



void FUN_14042b610(longlong param_1,uint *param_2)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar6 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar6;
    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar6);
    }
    puVar1 = *(undefined8 **)(lVar6 + 0x10);
    uVar3 = FUN_14005c1b0(lVar6,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(lVar6);
    uVar4 = 0;
    uVar5 = uVar4;
    if (*param_2 != 0) {
        do {
            if ((*(longlong *)(param_2 + 2) + uVar5 != 0) && (iVar2 = FUN_140433640(lVar6), iVar2 != 0)) {
                FUN_1400fb470(&local_28);
                *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                lVar6 = local_18;
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x38;
        } while (uVar4 < *param_2);
    }
    FUN_1400ea3e0(param_1,"OwnedCommodityOrders",&DAT_1409ec674,local_20);
    if (lVar6 != 0) {
        FUN_1400579e0(lVar6);
    }
    return;
}
