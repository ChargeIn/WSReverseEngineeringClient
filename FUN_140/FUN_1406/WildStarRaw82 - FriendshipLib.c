//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_1406fba40(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    uint uVar3;
    undefined8 uVar4;
    double *pdVar5;
    double local_res8;
    double local_18;
    undefined4 local_10;

    pdVar5 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar5 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar5 + 1) == 3) {
        LAB_1406fbaad:
        uVar3 = (uint)*pdVar5;
    }
    else {
        if (*(int *)(pdVar5 + 1) == 4) {
            iVar2 = FUN_14005ac80((longlong)*pdVar5 + 0x20,&local_res8);
            if (iVar2 != 0) {
                local_10 = 3;
                pdVar5 = &local_18;
                local_18 = local_res8;
                goto LAB_1406fbaad;
            }
        }
        uVar3 = 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"eType",5);
    pdVar5 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar5 + 1) = 3;
    *pdVar5 = (double)((uint)((ulonglong)(longlong)(int)uVar3 >> 8) & 0xff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"nBagIndex",9);
    pdVar5 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar5 + 1) = 3;
    *pdVar5 = (double)(uVar3 & 0xff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_1406fbbd0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    double *pdVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    double local_18;
    undefined4 local_10;

    pdVar3 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar3 = *(double **)(param_1 + 0x18);
    }
    uVar4 = 0;
    if (*(int *)(pdVar3 + 1) == 3) {
        LAB_1406fbc3e:
        uVar6 = (int)*pdVar3;
    }
    else {
        uVar6 = uVar4;
        if ((*(int *)(pdVar3 + 1) == 4) && (iVar1 = FUN_14005ac80(), iVar1 != 0)) {
            local_10 = 3;
            pdVar3 = &local_18;
            goto LAB_1406fbc3e;
        }
    }
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar3 = (double *)&DAT_140a12138;
    if (pdVar2 < *(double **)(param_1 + 0x10)) {
        pdVar3 = pdVar2;
    }
    if (*(int *)(pdVar3 + 1) != 3) {
        uVar5 = 0;
        if ((*(int *)(pdVar3 + 1) != 4) || (iVar1 = FUN_14005ac80(), uVar5 = uVar4, iVar1 == 0))
            goto LAB_1406fbc91;
        local_10 = 3;
        pdVar3 = &local_18;
    }
    uVar5 = (uint)*pdVar3;
    LAB_1406fbc91:
    if ((int)uVar6 < 300) {
        uVar4 = (uVar6 & 0xff) << 8 | uVar5 & 0xff;
    }
    else {
        uVar4 = 0xffffffff;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406fbcf0(longlong param_1)

{
    short sVar1;
    undefined2 *puVar2;
    short *psVar3;
    longlong lVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined local_108 [8];
    undefined2 *local_100;
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    FUN_1400b6f30(&local_e8);
    lVar4 = 0;
    local_18 = (undefined2 *)0x0;
    local_28 = ZEXT816(0);
    local_e8 = &PTR_FUN_140b69230;
    puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
    local_18 = puVar2 + 8;
    local_28 = CONCAT88(puVar2,puVar2);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    psVar3 = (short *)FUN_14034bdd0();
    puVar2 = (undefined2 *)FUN_14018b280(0x10);
    local_f0 = puVar2 + 8;
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    local_100 = puVar2;
    local_f8 = puVar2;
    if (psVar3 != (short *)0x0) {
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
        FUN_14001c480(local_e0,psVar3);
        puVar5 = (undefined *)FUN_1400b7660(&local_e8);
        if (puVar5 != local_108) {
            FUN_14001c480(local_108,*(undefined8 *)(puVar5 + 8));
            puVar2 = local_100;
        }
    }
    lVar4 = FUN_14018f0e0(local_108,puVar2);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_100 != (undefined2 *)0x0) {
        FUN_14018b900(local_100,0);
    }
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    if (local_28._0_8_ != 0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(&local_e8);
    return 1;
}



undefined8 FUN_1406fbed0(undefined8 param_1)

{
    uint uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    if ((uVar1 < 0x1e) && ((0x302c0000U >> (uVar1 & 0x1f) & 1) != 0)) {
        *(uint *)(DAT_140c65898 + 0x7548) = uVar1;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406fbf40(undefined8 param_1)

{
    ulonglong uVar1;

    if ((DAT_140dc4c10 & 1) == 0) {
        DAT_140dc4c10 = DAT_140dc4c10 | 1;
        uVar1 = FUN_140200220(0x458);
        if (uVar1 != 0) {
            uVar1 = (ulonglong)*(uint *)(uVar1 + 4);
        }
        _DAT_140dc4c14 = (undefined4)uVar1;
    }
    FUN_1403d3470(param_1,&DAT_140dc4c14);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406fbf90(undefined8 param_1)

{
    ulonglong uVar1;

    if ((DAT_140dc4c18 & 1) == 0) {
        DAT_140dc4c18 = DAT_140dc4c18 | 1;
        uVar1 = FUN_140200220(0x457);
        if (uVar1 != 0) {
            uVar1 = (ulonglong)*(uint *)(uVar1 + 4);
        }
        _DAT_140dc4c1c = (undefined4)uVar1;
    }
    FUN_1403d3470(param_1,&DAT_140dc4c1c);
    return 1;
}



undefined8 FUN_1406fced0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong local_res10;

    uVar3 = FUN_140056d60();
    lVar1 = *(longlong *)(DAT_140c658d8 + 8);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar3) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar3 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if ((local_res10 != lVar1) && (lVar1 = *(longlong *)(local_res10 + 0x28), lVar1 != 0)) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar7 + 1) = 5;
        *puVar7 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        FUN_140439fc0(lVar1,&local_res10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (local_res10 != 0) {
            (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
        }
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fd0b0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    int iVar9;

    lVar5 = FUN_140437990();
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x10) != 0)) {
        iVar9 = 0;
        FUN_140058900(param_1);
        lVar8 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
        if (lVar8 != *(longlong *)(lVar5 + 8)) {
            do {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar9 = iVar9 + 1;
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar9;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar3 + 1) = 5;
                *puVar3 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                iVar1 = *(int *)(lVar8 + 0x20);
                FUN_140058710(param_1,"nTutorialId",0xb);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                lVar7 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                lVar7 = *(longlong *)(lVar8 + 0x18);
                if (lVar7 == 0) {
                    lVar7 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == *(longlong *)(lVar7 + 0x18)) {
                        do {
                            lVar8 = lVar7;
                            lVar7 = *(longlong *)(lVar8 + 8);
                        } while (lVar8 == *(longlong *)(lVar7 + 0x18));
                    }
                    if (*(longlong *)(lVar8 + 0x18) != lVar7) {
                        lVar8 = lVar7;
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(lVar7 + 0x10); lVar8 = lVar7, lVar4 != 0;
                         lVar4 = *(longlong *)(lVar4 + 0x10)) {
                        lVar7 = lVar4;
                    }
                }
            } while (lVar8 != *(longlong *)(lVar5 + 8));
        }
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 0;
}



undefined8 FUN_1406fd2b0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint *puVar3;
    byte bVar4;
    uint uVar5;
    longlong local_res8;

    uVar5 = FUN_140056d60(param_1,1);
    if (uVar5 != 0) {
        lVar1 = *(longlong *)(DAT_140c658d8 + 0x28);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar5) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        bVar4 = 1;
        if (local_res8 != lVar1) goto LAB_1406fd323;
    }
    bVar4 = 0;
    LAB_1406fd323:
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fd350(longlong param_1)

{
    undefined uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    uVar2 = FUN_140056d60(param_1,1);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar4 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        puVar4 = puVar3;
    }
    uVar1 = 0;
    if ((*(int *)(puVar4 + 1) != 0) && ((*(int *)(puVar4 + 1) != 1 || (*(int *)puVar4 != 0)))) {
        uVar1 = 1;
    }
    FUN_140437dd0(puVar4,uVar2,uVar1);
    return 1;
}



undefined8 FUN_1406fd6b0(undefined8 param_1)

{
    int iVar1;

    iVar1 = FUN_140056d60(param_1,1);
    if (iVar1 != 0) {
        FUN_140437fd0(param_1,iVar1);
    }
    return 0;
}



undefined8 FUN_1406fd940(void)

{
    int iVar1;

    if (DAT_140c658d8 != 0) {
        iVar1 = DAT_140c3b390;
        if (*DAT_140c63750 < DAT_140c3b390) {
            iVar1 = *DAT_140c63750;
        }
        FUN_14001a770(&PTR_PTR_LAB_140c3b380,iVar1,0xffffffff);
        FUN_140437f00();
    }
    return 0;
}



undefined8 FUN_1406fd980(longlong param_1)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    uint uVar4;

    uVar4 = FUN_140056d60();
    puVar3 = *(uint **)(param_1 + 0x10);
    iVar1 = DAT_140c3b390;
    if (*DAT_140c63750 < DAT_140c3b390) {
        iVar1 = *DAT_140c63750;
    }
    uVar2 = *(uint *)(&DAT_140c3b3a0 + (longlong)iVar1 * 4);
    puVar3[2] = 1;
    *puVar3 = (uint)((uVar2 >> (uVar4 & 0x1f) & 1) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fd9e0(void)

{
    int iVar1;
    int iVar2;
    byte bVar3;
    int iVar4;

    bVar3 = FUN_140056d60();
    iVar1 = *DAT_140c63750;
    iVar4 = DAT_140c3b390;
    if (iVar1 < DAT_140c3b390) {
        iVar4 = iVar1;
    }
    iVar2 = DAT_140c3b390;
    if (iVar1 < DAT_140c3b390) {
        iVar2 = iVar1;
    }
    FUN_14001a770(&PTR_PTR_LAB_140c3b380,iVar2,
                  *(uint *)(&DAT_140c3b3a0 + (longlong)iVar4 * 4) ^ 1 << (bVar3 & 0x1f));
    return 0;
}



undefined8 FUN_1406fda40(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint *puVar3;
    uint uVar4;
    longlong local_res10;

    uVar4 = FUN_140056d60(param_1,1);
    lVar1 = *(longlong *)(DAT_140c658d8 + 8);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar4 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if ((local_res10 != lVar1) && (*(longlong **)(local_res10 + 0x28) != (longlong *)0x0)) {
        puVar3 = *(uint **)(param_1 + 0x10);
        uVar4 = *(uint *)(**(longlong **)(local_res10 + 0x28) + 4);
        puVar3[2] = 1;
        *puVar3 = uVar4 >> 2 & 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_1406fdaf0(longlong param_1)

{
    undefined8 *puVar1;

    FUN_140056d60(param_1,1);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        FUN_140056d60(param_1,2);
    }
    FUN_14043a1f0();
    return 0;
}



undefined8 FUN_1406fdb80(void)

{
    if (*(longlong *)(DAT_140c658d8 + 0x60) != 0) {
        FUN_140712a40(*(longlong *)(DAT_140c658d8 + 0x60),0,0,0);
    }
    return 0;
}



undefined8 FUN_1406fdbb0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint *puVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    undefined8 *puVar7;
    bool bVar8;
    longlong local_res10;

    uVar4 = FUN_140056d60(param_1,1);
    lVar1 = *(longlong *)(DAT_140c658d8 + 8);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar4 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if ((local_res10 == lVar1) || (lVar1 = *(longlong *)(local_res10 + 0x28), lVar1 == 0)) {
        return 0;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar5 = FUN_140056d60();
        if (iVar5 < 1) {
            iVar5 = 0;
            goto LAB_1406fdc7f;
        }
    }
    else {
        iVar5 = 1;
    }
    iVar6 = -1;
    if (iVar5 != -1) {
        iVar6 = iVar5;
    }
    iVar5 = 0;
    if (iVar6 != 0) {
        iVar5 = iVar6;
    }
    LAB_1406fdc7f:
    bVar8 = false;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)(iVar5 - 1) * 8);
    if (lVar1 != 0) {
        bVar8 = *(int *)(lVar1 + 0x38) != 0;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fdcd0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    undefined local_28 [8];
    longlong local_20;

    uVar3 = FUN_140056d60(param_1,1);
    lVar4 = FUN_140246d00(uVar3);
    if (lVar4 == 0) {
        return 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    uVar8 = (ulonglong)*(uint *)(lVar4 + 4);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar9,L"eTutorialAnchorOrientation",uVar8 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar1 = *(uint *)(lVar4 + 0x10);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = FUN_14018f0e0(local_28,L"bOrientToBottom");
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar7 = -1;
        do {
            lVar7 = lVar7 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar7) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)((uVar1 & 1) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



void FUN_1406febf0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined auStack72 [32];
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (*(int *)(puVar4 + 1) == 5)) {
        iVar2 = FUN_1400585e0(param_1,1);
        if (((iVar2 == 6) && (DAT_140c65898 != 0)) &&
            ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
              (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) == 0)))) {
            iVar2 = FUN_1403a1230();
            if (iVar2 != 0) {
                uVar5 = 0;
                local_28 = 0;
                local_20 = 0;
                local_18 = 0;
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                while( true ) {
                    puVar4 = &DAT_140a12138;
                    if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                        puVar4 = *(undefined8 **)(param_1 + 0x18);
                    }
                    iVar2 = FUN_14005ba70(param_1,*puVar4,*(ulonglong *)(param_1 + 0x10) - 0x10);
                    lVar1 = DAT_140c65898;
                    if (iVar2 == 0) break;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar3 = FUN_1400584e0(param_1,0xffffffff);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    *(undefined4 *)((longlong)&local_28 + uVar5 * 4) = uVar3;
                    uVar5 = (ulonglong)((int)uVar5 + 1);
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1403f4900(lVar1,0x17c,&local_28);
            }
        }
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
    return;
}



undefined8 FUN_1406fed20(void)

{
    int iVar1;
    undefined local_res10 [24];

    if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) == 0)) {
        iVar1 = FUN_1403a1230();
        if (iVar1 != 0) {
            local_res10[0] = 0;
            FUN_1403f4900(DAT_140c65898,0x150,local_res10);
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406fed70(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    uint *puVar4;
    undefined4 uVar5;
    int iVar6;
    undefined4 uVar7;
    undefined8 *puVar8;
    longlong **pplVar9;
    longlong lVar10;
    undefined8 uVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;
    undefined auStack2744 [32];
    undefined4 local_a98;
    undefined8 *local_a90;
    undefined8 local_a88;
    undefined8 local_a78;
    undefined **local_a70;
    undefined4 local_a68;
    undefined4 uStack2660;
    longlong local_a60;
    undefined4 local_a58;
    undefined **local_a50;
    undefined4 local_a48;
    longlong local_a40;
    undefined4 local_a38;
    undefined8 local_a30;
    undefined8 local_a28;
    undefined local_a20 [1224];
    longlong *local_558 [96];
    longlong local_258;
    undefined local_98 [80];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack2744;
    uVar15 = (ulonglong)param_2;
    uVar12 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_a78 = uVar12;
    uVar2 = *(ulonglong *)(uVar12 + 8);
    while (uVar2 != 0) {
        if (*(uint *)(uVar2 + 0x20) < param_2) {
            uVar2 = *(ulonglong *)(uVar2 + 0x18);
        }
        else {
            local_a78 = uVar2;
            uVar2 = *(ulonglong *)(uVar2 + 0x10);
        }
    }
    if ((local_a78 == uVar12) || (param_2 < *(uint *)(local_a78 + 0x20))) {
        local_a78 = uVar12;
    }
    uVar2 = local_a78;
    if (((local_a78 != uVar12) && (lVar14 = local_a78 + 0x28, lVar14 != 0)) &&
        (*(longlong *)(local_a78 + 0x38) != 0)) {
        lVar10 = *(longlong *)(param_1 + 0x10);
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar8;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar3,L"nLootId",uVar15 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        if (param_3 != 0) {
            lVar10 = *(longlong *)(param_1 + 0x10);
            uVar12 = (ulonglong)(uint)(*(int *)(uVar2 + 0x7c) - DAT_140c636a8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_1 + 8));
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            *puVar3 = *puVar8;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar3,L"nTimeLeft",uVar12 & 0xffffffff);
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        FUN_14040fae0(local_558);
        FUN_1404111e0(local_558,lVar14);
        pplVar9 = (longlong **)FUN_14040fc60(local_a20,local_558);
        iVar6 = FUN_140415bb0(*(undefined8 *)(param_1 + 0x10),pplVar9);
        if (iVar6 != 0) {
            FUN_1400fb540(param_1,L"itemDrop");
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        if (*pplVar9 != (longlong *)0x0) {
            (**(code **)(**pplVar9 + 8))();
            *pplVar9 = (longlong *)0x0;
        }
        if (pplVar9[0x60] != (longlong *)0x0) {
            FUN_14018b900(pplVar9[0x60],0);
        }
        if ((param_4 != (longlong *)0x0) && (param_4[1] != 0)) {
            lVar14 = *(longlong *)(param_1 + 0x10);
            iVar6 = *(int *)(uVar2 + 0x78);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_1 + 8));
            puVar3 = *(undefined8 **)(lVar14 + 0x10);
            *puVar3 = *puVar8;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
            lVar14 = *(longlong *)(param_1 + 0x10);
            lVar10 = FUN_14018f0e0(&local_a70,L"bIsMaster");
            if (*(longlong *)(lVar10 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8) = 0;
                *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
                FUN_140058710(lVar14);
            }
            if (CONCAT44(uStack2660,local_a68) != 0) {
                FUN_14018b900(CONCAT44(uStack2660,local_a68),0);
            }
            puVar4 = *(uint **)(lVar14 + 0x10);
            puVar4[2] = 1;
            *puVar4 = (uint)(iVar6 != 0);
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(lVar14,0xfffffffd);
            FUN_14005ea50(lVar14,uVar11,*(longlong *)(lVar14 + 0x10) + -0x20,
                          *(longlong *)(lVar14 + 0x10) + -0x10);
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x20;
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            lVar14 = *(longlong *)(param_1 + 0x10);
            local_a50 = &PTR_FUN_140b569f0;
            local_a38 = 1;
            local_a40 = lVar14;
            if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar14);
            }
            puVar3 = *(undefined8 **)(lVar14 + 0x10);
            uVar11 = FUN_14005c1b0(lVar14,0,0);
            *(undefined4 *)(puVar3 + 1) = 5;
            *puVar3 = uVar11;
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
            uVar7 = FUN_1400578c0(lVar14);
            lVar10 = *(longlong *)(param_1 + 0x10);
            local_a70 = &PTR_FUN_140b569f0;
            local_a58 = 1;
            local_a60 = lVar10;
            local_a48 = uVar7;
            if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar10);
            }
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            uVar11 = FUN_14005c1b0(lVar10,0,0);
            *(undefined4 *)(puVar3 + 1) = 5;
            *puVar3 = uVar11;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            local_a68 = FUN_1400578c0(lVar10);
            uVar12 = 0;
            local_a78 = local_a78 & 0xffffffff00000000;
            if (param_4[1] != 0) {
                lVar13 = 0;
                do {
                    iVar6 = FUN_1403d9500(DAT_140c65898,*param_4 + lVar13);
                    if (iVar6 == 0) {
                        local_a90 = &local_a30;
                        local_a88 = 0;
                        local_a28 = 0;
                        local_a30 = 0;
                        local_a98 = 0x21;
                        iVar6 = FUN_1403f82f0();
                        if (iVar6 != 0) {
                            local_a78 = CONCAT44(local_a78._4_4_,1);
                            FUN_1400fad30(&local_a70,local_98);
                        }
                    }
                    else {
                        iVar6 = FUN_140649870(lVar14,iVar6);
                        if (iVar6 != 0) {
                            FUN_1400fb470(&local_a50);
                            *(longlong *)(local_a40 + 0x10) = *(longlong *)(local_a40 + 0x10) + -0x10;
                            lVar14 = local_a40;
                        }
                    }
                    uVar12 = uVar12 + 1;
                    lVar13 = lVar13 + 0x10;
                    lVar10 = local_a60;
                    uVar7 = local_a48;
                } while (uVar12 < (ulonglong)param_4[1]);
            }
            uVar5 = local_a68;
            FUN_1400fb2a0(param_1,L"tLooters",uVar7);
            if ((int)local_a78 != 0) {
                FUN_1400fb2a0(param_1,L"tLootersOutOfRange",uVar5);
            }
            if (lVar10 != 0) {
                FUN_1400579e0(lVar10);
            }
            if (lVar14 != 0) {
                FUN_1400579e0(lVar14);
            }
        }
        if (local_558[0] != (longlong *)0x0) {
            (**(code **)(*local_558[0] + 8))();
            local_558[0] = (longlong *)0x0;
        }
        if (local_258 != 0) {
            FUN_14018b900(local_258,0);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack2744);
    return;
}



undefined8 FUN_1406ff290(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    double dVar10;
    int local_res8;
    int iStackX12;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    local_20 = 1;
    local_38 = &PTR_FUN_140b569f0;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_30 = FUN_1400578c0(param_1);
    lVar2 = *(longlong *)(DAT_140c65898 + 0x7d90);
    lVar6 = *(longlong *)(lVar2 + 0x48);
    lVar8 = *(longlong *)(lVar6 + 0x10);
    lVar9 = param_1;
    if (lVar8 != lVar6) {
        do {
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar7 + 1) = 5;
            *puVar7 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_50 = FUN_1400578c0(param_1);
            iVar4 = FUN_1406fed70(&local_58);
            if (iVar4 != 0) {
                FUN_1400fb1d0(&local_38);
            }
            if (local_48 != 0) {
                FUN_1400579e0();
            }
            lVar6 = *(longlong *)(lVar8 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar8 = lVar6;
                        lVar6 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar6) {
                    lVar8 = lVar6;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar6 = lVar9;
                }
            }
            lVar9 = local_28;
        } while (lVar8 != *(longlong *)(lVar2 + 0x48));
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
    if (local_30 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(local_30 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar10 = (double)local_30;
        if (dVar10 == 0.0) {
            puVar7 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar10 >> 0x20);
            local_res8 = SUB84(dVar10,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar10 == (double)puVar7[2])) goto LAB_1406ff4dd;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_1406ff4dd:
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9,uVar1,local_30);
    return 1;
}



undefined8 FUN_1406ff510(longlong param_1)

{
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint *puVar4;
    uint uVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong local_res10;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar5 = FUN_1400f26a0(uVar7 + 0x180);
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x48);
    local_res10 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < uVar5) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res10 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar5 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if (local_res10 == lVar1) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
        local_res10 = lVar1;
        lVar3 = *(longlong *)(lVar1 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar5) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar1) || (uVar5 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar1;
        }
        if (((local_res10 == lVar1) || (local_res10 == -0x28)) ||
            (*(longlong *)(local_res10 + 0x38) == 0)) {
            puVar2 = *(undefined4 **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = 0;
        }
        else {
            iVar6 = FUN_14070cce0();
            puVar4 = *(uint **)(param_1 + 0x10);
            puVar4[2] = 1;
            *puVar4 = (uint)(iVar6 != 0);
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ff680(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;
    uint uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong local_res10;
    undefined8 local_18;
    uint local_10;

    uVar8 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar8;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    bVar3 = true;
    uVar4 = FUN_1400f26a0(uVar8 + 0x180,1);
    puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar8 + 400) + 0x18) + 0x10);
    puVar5 = &DAT_140a12138;
    if (puVar7 < *(undefined8 **)(*(longlong *)(uVar8 + 400) + 0x10)) {
        puVar5 = puVar7;
    }
    if ((*(int *)(puVar5 + 1) == 0) || ((*(int *)(puVar5 + 1) == 1 && (*(int *)puVar5 == 0)))) {
        bVar3 = false;
    }
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x48);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar4 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if (local_res10 != lVar1) {
        lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
        local_res10 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar4) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar1) || (uVar4 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar1;
        }
        if ((local_res10 != lVar1) && (local_res10 != -0x28)) {
            local_10 = (uint)!bVar3;
            local_18 = CONCAT44(uVar4,*(undefined4 *)(local_res10 + 0x2c));
            FUN_1403f4900(DAT_140c65898,0x15d,&local_18);
        }
    }
    return 0;
}



undefined8 FUN_1406ff820(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong local_res10;
    undefined8 local_18;
    undefined4 local_10;

    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar3 = FUN_1400f26a0(uVar5 + 0x180,1);
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x48);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar3) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (uVar3 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if (local_res10 != lVar1) {
        lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
        local_res10 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar3) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar1) || (uVar3 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar1;
        }
        if ((local_res10 != lVar1) && (local_res10 != -0x28)) {
            local_18 = CONCAT44(uVar3,*(undefined4 *)(local_res10 + 0x2c));
            local_10 = 2;
            FUN_1403f4900(DAT_140c65898,0x15d,&local_18);
        }
    }
    return 0;
}



undefined8 FUN_1406ff970(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    double dVar10;
    int local_res8;
    int iStackX12;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    local_20 = 1;
    local_38 = &PTR_FUN_140b569f0;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_30 = FUN_1400578c0(param_1);
    lVar2 = *(longlong *)(DAT_140c65898 + 0x7d90);
    lVar6 = *(longlong *)(lVar2 + 0x68);
    lVar8 = *(longlong *)(lVar6 + 0x10);
    lVar9 = param_1;
    if (lVar8 != lVar6) {
        do {
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar7 + 1) = 5;
            *puVar7 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_50 = FUN_1400578c0(param_1);
            iVar4 = FUN_1406fed70(&local_58);
            if (iVar4 != 0) {
                FUN_1400fb1d0(&local_38);
            }
            if (local_48 != 0) {
                FUN_1400579e0();
            }
            lVar6 = *(longlong *)(lVar8 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar8 = lVar6;
                        lVar6 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar6) {
                    lVar8 = lVar6;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar6 = lVar9;
                }
            }
            lVar9 = local_28;
        } while (lVar8 != *(longlong *)(lVar2 + 0x68));
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
    if (local_30 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(local_30 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar10 = (double)local_30;
        if (dVar10 == 0.0) {
            puVar7 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar10 >> 0x20);
            local_res8 = SUB84(dVar10,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar10 == (double)puVar7[2])) goto LAB_1406ffbbd;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_1406ffbbd:
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9,uVar1,local_30);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406ffbf0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong *plVar4;
    longlong lVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    undefined8 uVar9;
    undefined4 *puVar10;
    undefined *puVar11;
    undefined **ppuVar12;
    longlong lVar13;
    undefined *puVar14;
    longlong *plVar15;
    int *piVar16;
    undefined *puVar17;
    uint uVar18;
    undefined *local_res8;
    undefined *local_res10;
    undefined *local_res18;
    undefined *local_res20;
    undefined local_68 [8];
    undefined *local_60;
    longlong local_58;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_60 = (undefined *)FUN_14018b280(0x30);
    local_58 = 0;
    uVar18 = 0;
    *local_60 = 0;
    *(undefined8 *)(local_60 + 8) = 0;
    *(undefined **)(local_60 + 0x10) = local_60;
    *(undefined **)(local_60 + 0x18) = local_60;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64e58 != 0) || (iVar7 = FUN_1401ee300(), iVar7 < 0)) {
                LAB_1406ffe42:
                local_res8._0_4_ = 0;
                puVar14 = *(undefined **)(local_60 + 0x10);
                if (puVar14 != local_60) {
                    do {
                        uVar1 = *(undefined4 *)(puVar14 + 0x20);
                        local_res8 = (undefined *)
                                ((ulonglong)local_res8 & 0xffffffff00000000 |
                                 (ulonglong)((int)local_res8 + 1U));
                        if (DAT_140c63840 == (code *)0x0) {
                            if (_DAT_140c639b0 == 0) {
                                iVar7 = FUN_1401edec0();
                                if (iVar7 < 0) {
                                    piVar16 = (int *)0x0;
                                }
                                else {
                                    piVar16 = (int *)(**(code **)(*DAT_140c63a08 + 0x18))(DAT_140c63a08,uVar1);
                                }
                            }
                            else {
                                piVar16 = (int *)0x0;
                            }
                        }
                        else {
                            piVar16 = (int *)(*DAT_140c63840)(&PTR_u_BugCategory_140a69528,uVar1,DAT_140c63858);
                        }
                        pdVar3 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar3 + 1) = 3;
                        *pdVar3 = (double)((int)local_res8 + 1U);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        uVar9 = FUN_14005c1b0(param_1,0,0);
                        *(undefined4 *)(puVar2 + 1) = 5;
                        *puVar2 = uVar9;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        iVar7 = *piVar16;
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        uVar9 = FUN_140062650(param_1,&DAT_1409f8474,3);
                        *(undefined4 *)(puVar2 + 1) = 4;
                        *puVar2 = uVar9;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        pdVar3 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar3 + 1) = 3;
                        *pdVar3 = (double)iVar7;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        uVar9 = FUN_1400580e0(param_1,0xfffffffd);
                        FUN_14005ea50(param_1,uVar9,*(longlong *)(param_1 + 0x10) + -0x20,
                                      *(longlong *)(param_1 + 0x10) + -0x10);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                        FUN_14034bdd0();
                        FUN_1400f0090(param_1);
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        uVar9 = FUN_140062650(param_1,"tSubCategories",0xe);
                        *(undefined4 *)(puVar2 + 1) = 4;
                        *puVar2 = uVar9;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        uVar9 = FUN_14005c1b0(param_1,0,0);
                        *(undefined4 *)(puVar2 + 1) = 5;
                        iVar7 = 0;
                        *puVar2 = uVar9;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        plVar15 = (longlong *)**(longlong **)(*(longlong *)(puVar14 + 0x28) + 8);
                        if (plVar15 != *(longlong **)(*(longlong *)(puVar14 + 0x28) + 8)) {
                            do {
                                pdVar3 = *(double **)(param_1 + 0x10);
                                iVar7 = iVar7 + 1;
                                *(undefined4 *)(pdVar3 + 1) = 3;
                                *pdVar3 = (double)iVar7;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_1);
                                }
                                puVar2 = *(undefined8 **)(param_1 + 0x10);
                                uVar9 = FUN_14005c1b0(param_1,0,0);
                                *(undefined4 *)(puVar2 + 1) = 5;
                                *puVar2 = uVar9;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                uVar1 = *(undefined4 *)(plVar15 + 2);
                                if (DAT_140c63840 == (code *)0x0) {
                                    if (_DAT_140c64e58 == 0) {
                                        iVar8 = FUN_1401ee300();
                                        if (iVar8 < 0) {
                                            piVar16 = (int *)0x0;
                                        }
                                        else {
                                            piVar16 = (int *)(**(code **)(*DAT_140c63c68 + 0x18))(DAT_140c63c68,uVar1);
                                        }
                                    }
                                    else {
                                        piVar16 = (int *)0x0;
                                    }
                                }
                                else {
                                    piVar16 = (int *)(*DAT_140c63840)(&PTR_u_BugSubcategory_140a69560,uVar1,
                                                                      DAT_140c63858);
                                }
                                iVar8 = *piVar16;
                                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_1);
                                }
                                puVar2 = *(undefined8 **)(param_1 + 0x10);
                                uVar9 = FUN_140062650(param_1,&DAT_1409f842c,3);
                                *(undefined4 *)(puVar2 + 1) = 4;
                                *puVar2 = uVar9;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                pdVar3 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar3 + 1) = 3;
                                *pdVar3 = (double)iVar8;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                uVar9 = FUN_1400580e0(param_1,0xfffffffd);
                                FUN_14005ea50(param_1,uVar9,*(longlong *)(param_1 + 0x10) + -0x20,
                                              *(longlong *)(param_1 + 0x10) + -0x10);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                                FUN_14034bdd0();
                                FUN_1400f0090(param_1);
                                lVar13 = *(longlong *)(param_1 + 0x10);
                                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar13,lVar13 + -0x20,lVar13 + -0x10);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                                plVar15 = (longlong *)*plVar15;
                            } while (plVar15 != (longlong *)*(longlong *)(*(longlong *)(puVar14 + 0x28) + 8));
                        }
                        lVar13 = *(longlong *)(puVar14 + 0x28);
                        if (lVar13 != 0) {
                            plVar15 = (longlong *)**(longlong **)(lVar13 + 8);
                            if (plVar15 != *(longlong **)(lVar13 + 8)) {
                                do {
                                    plVar4 = (longlong *)*plVar15;
                                    FUN_14018b900(plVar15,0);
                                    plVar15 = plVar4;
                                } while (plVar4 != (longlong *)*(longlong *)(lVar13 + 8));
                            }
                            *(undefined8 *)*(undefined8 *)(lVar13 + 8) = *(undefined8 *)(lVar13 + 8);
                            *(longlong *)(*(longlong *)(lVar13 + 8) + 8) = *(longlong *)(lVar13 + 8);
                            FUN_14018b900(*(undefined8 *)(lVar13 + 8),0);
                            FUN_14018b900(lVar13,0);
                        }
                        lVar13 = *(longlong *)(param_1 + 0x10);
                        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar13,lVar13 + -0x20,lVar13 + -0x10);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                        lVar13 = *(longlong *)(param_1 + 0x10);
                        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar13,lVar13 + -0x20,lVar13 + -0x10);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                        puVar17 = *(undefined **)(puVar14 + 0x18);
                        if (puVar17 == (undefined *)0x0) {
                            puVar17 = *(undefined **)(puVar14 + 8);
                            if (puVar14 == *(undefined **)(puVar17 + 0x18)) {
                                do {
                                    puVar14 = puVar17;
                                    puVar17 = *(undefined **)(puVar14 + 8);
                                } while (puVar14 == *(undefined **)(puVar17 + 0x18));
                            }
                            if (*(undefined **)(puVar14 + 0x18) != puVar17) {
                                puVar14 = puVar17;
                            }
                        }
                        else {
                            for (puVar11 = *(undefined **)(puVar17 + 0x10); puVar14 = puVar17,
                                    puVar11 != (undefined *)0x0; puVar11 = *(undefined **)(puVar11 + 0x10)) {
                                puVar17 = puVar11;
                            }
                        }
                    } while (puVar14 != local_60);
                }
                if (local_58 != 0) {
                    lVar13 = *(longlong *)(local_60 + 8);
                    while (lVar13 != 0) {
                        FUN_1400083b0(local_68,*(undefined8 *)(lVar13 + 0x18));
                        lVar5 = *(longlong *)(lVar13 + 0x10);
                        FUN_14018b900(lVar13,0);
                        lVar13 = lVar5;
                    }
                    *(undefined **)(local_60 + 0x10) = local_60;
                    *(undefined8 *)(local_60 + 8) = 0;
                    *(undefined **)(local_60 + 0x18) = local_60;
                    local_58 = 0;
                }
                FUN_14018b900(local_60,0);
                return 1;
            }
            uVar6 = (**(code **)(*DAT_140c63c68 + 0x28))();
        }
        else {
            uVar6 = (*DAT_140c63838)(&PTR_u_BugSubcategory_140a69560);
        }
        if (uVar6 <= uVar18) goto LAB_1406ffe42;
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c64e58 == 0) {
                iVar7 = FUN_1401ee300();
                if (iVar7 < 0) {
                    puVar10 = (undefined4 *)0x0;
                }
                else {
                    puVar10 = (undefined4 *)(**(code **)(*DAT_140c63c68 + 0x20))();
                }
            }
            else {
                puVar10 = (undefined4 *)0x0;
            }
        }
        else {
            puVar10 = (undefined4 *)(*DAT_140c63848)(&PTR_u_BugSubcategory_140a69560,uVar18,DAT_140c63858)
                    ;
        }
        if (*(undefined **)(local_60 + 8) == (undefined *)0x0) {
            LAB_1406ffd5b:
            local_res10 = local_60;
            ppuVar12 = &local_res10;
        }
        else {
            puVar14 = *(undefined **)(local_60 + 8);
            puVar17 = local_60;
            do {
                if (*(uint *)(puVar14 + 0x20) < (uint)puVar10[1]) {
                    puVar11 = *(undefined **)(puVar14 + 0x18);
                }
                else {
                    puVar11 = *(undefined **)(puVar14 + 0x10);
                    puVar17 = puVar14;
                }
                puVar14 = puVar11;
            } while (puVar11 != (undefined *)0x0);
            if ((puVar17 == local_60) || ((uint)puVar10[1] < *(uint *)(puVar17 + 0x20)))
                goto LAB_1406ffd5b;
            local_res8 = puVar17;
            ppuVar12 = &local_res8;
        }
        if (*ppuVar12 == local_60) {
            lVar13 = FUN_14018b280(0x10);
            if (lVar13 == 0) {
                lVar13 = 0;
            }
            else {
                uVar9 = FUN_14018b280(0x18);
                *(undefined8 *)(lVar13 + 8) = uVar9;
                *(undefined8 *)uVar9 = uVar9;
                *(longlong *)(*(longlong *)(lVar13 + 8) + 8) = *(longlong *)(lVar13 + 8);
            }
            puVar14 = local_60;
            if (*(undefined **)(local_60 + 8) != (undefined *)0x0) {
                puVar17 = *(undefined **)(local_60 + 8);
                do {
                    if (*(uint *)(puVar17 + 0x20) < (uint)puVar10[1]) {
                        puVar11 = *(undefined **)(puVar17 + 0x18);
                    }
                    else {
                        puVar11 = *(undefined **)(puVar17 + 0x10);
                        puVar14 = puVar17;
                    }
                    puVar17 = puVar11;
                } while (puVar11 != (undefined *)0x0);
            }
            if ((puVar14 == local_60) || ((uint)puVar10[1] < *(uint *)(puVar14 + 0x20))) {
                local_res18 = puVar14;
                FUN_140055c60();
                puVar14 = local_res20;
            }
            *(longlong *)(puVar14 + 0x28) = lVar13;
        }
        else {
            lVar13 = *(longlong *)(*ppuVar12 + 0x28);
        }
        lVar13 = *(longlong *)(lVar13 + 8);
        plVar15 = (longlong *)FUN_14018b280();
        if (plVar15 + 2 != (longlong *)0x0) {
            *(undefined4 *)(plVar15 + 2) = *puVar10;
        }
        *plVar15 = lVar13;
        uVar18 = uVar18 + 1;
        plVar15[1] = *(longlong *)(lVar13 + 8);
        **(longlong ***)(lVar13 + 8) = plVar15;
        *(longlong **)(lVar13 + 8) = plVar15;
    } while( true );
}


