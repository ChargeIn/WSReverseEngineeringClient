//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_140710ce0(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar2 = uVar1;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1) {
                uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8);
                break;
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar1 + 0x180,0xffffffff,0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_14048db10();
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140710d60(longlong param_1)

{
    uint uVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong local_18;
    undefined4 local_10;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = 0;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_140710da8;
            }
            uVar1 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar1;
            uVar5 = (ulonglong)uVar1;
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_140710da8:
    uVar2 = FUN_1400f26a0(lVar4 + 0x180,0xffffffff,0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    local_10 = 0;
    local_18 = (ulonglong)CONCAT14(2,uVar2);
    FUN_1403f4900(DAT_140c65898,0xc5,&local_18);
    return 1;
}



undefined8 FUN_140710ec0(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar2 = uVar1;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1) {
                uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8);
                break;
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar1 + 0x180,1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_14048d680();
    return 1;
}



undefined8 FUN_140710f40(longlong param_1)

{
    uint *puVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar6 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar3 = FUN_1400f26a0(uVar6 + 0x180,1);
    uVar2 = DAT_140c65948;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    iVar4 = FUN_14048d940(uVar2,uVar3);
    if ((iVar4 == 0) || (lVar5 = FUN_14024b980(iVar4), lVar5 == 0)) {
        iVar4 = 0;
    }
    else {
        iVar4 = FUN_140485fa0(iVar4,0);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar4 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140711010(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong local_res10;

    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar3 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_140711058;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar3 = 0;
    LAB_140711058:
    uVar2 = FUN_1400f26a0(lVar3 + 0x180);
    if (uVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = *(longlong *)(DAT_140c65948 + 0x50);
    local_res10 = lVar3;
    lVar1 = *(longlong *)(lVar3 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < uVar2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res10 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res10 == lVar3) || (uVar2 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar3;
    }
    if ((local_res10 != lVar3) && (*(int *)(local_res10 + 0x24) != 0)) {
        FUN_1406b9790(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140711220(longlong param_1)

{
    double *pdVar1;
    bool bVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    undefined4 uVar10;
    undefined8 uVar11;
    undefined8 *puVar12;
    longlong lVar13;
    int *piVar14;
    uint uVar15;
    ulonglong uVar16;
    longlong lVar17;
    undefined8 *puVar18;
    longlong lVar19;
    float fVar20;
    float fVar21;
    undefined **local_b0;
    undefined4 local_a8;
    undefined4 uStack164;
    longlong local_a0;
    undefined4 local_98;
    undefined local_90 [8];
    longlong local_88;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar18 + 1) = 5;
    *puVar18 = uVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar18 + 1) = 5;
    *puVar18 = uVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar18 + 1) = 5;
    *puVar18 = uVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(param_1);
    fVar20 = (float)FUN_1403ac060(DAT_140c65898 + 0x1bf8,4,3);
    if ((DAT_140dc4dac & 1) == 0) {
        DAT_140dc4dac = DAT_140dc4dac | 1;
        _DAT_140dc4db4 = 0;
        _DAT_140dc4dbc = 0;
        _DAT_140dc4dc4 = 0;
        _DAT_140dc4dcc = 0;
        _DAT_140dc4dd4 = 0;
    }
    uVar6 = FUN_14079d2f0(DAT_140dc4dac,0);
    uVar16 = (ulonglong)((float)(ulonglong)uVar6 * fVar20);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4)
            ;
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_b0,L"nBronze");
    lVar19 = -1;
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack164,local_a8) != 0) {
        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(ulonglong)uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3)
            ;
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_b0,L"nBronze");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack164,local_a8) != 0) {
        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(uVar16 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    uVar7 = DAT_140dc4dac;
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if ((uVar7 & 1) == 0) {
        DAT_140dc4dac = uVar7 | 1;
        _DAT_140dc4db4 = 0;
        _DAT_140dc4dbc = 0;
        _DAT_140dc4dc4 = 0;
        _DAT_140dc4dcc = 0;
        _DAT_140dc4dd4 = 0;
    }
    uVar7 = FUN_14079d2f0();
    uVar15 = (int)uVar16 + (int)(longlong)((float)(ulonglong)uVar7 * fVar20);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4)
            ;
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_b0,L"nSilver");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack164,local_a8) != 0) {
        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(ulonglong)(uVar6 + uVar7);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3)
            ;
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_b0,L"nSilver");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack164,local_a8) != 0) {
        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(ulonglong)uVar15;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    uVar8 = DAT_140dc4dac;
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if ((uVar8 & 1) == 0) {
        DAT_140dc4dac = uVar8 | 1;
        _DAT_140dc4db4 = 0;
        _DAT_140dc4dbc = 0;
        _DAT_140dc4dc4 = 0;
        _DAT_140dc4dcc = 0;
        _DAT_140dc4dd4 = 0;
    }
    uVar8 = FUN_14079d2f0();
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4)
            ;
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_b0,L"nGold");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    bVar2 = false;
    if (CONCAT44(uStack164,local_a8) != 0) {
        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(ulonglong)(uVar6 + uVar7 + uVar8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3)
            ;
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_b0,L"nGold");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack164,local_a8) != 0) {
        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(ulonglong)(uVar15 + (int)(longlong)((float)(ulonglong)uVar8 * fVar20));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    lVar13 = FUN_1403abb90(DAT_140c65898 + 0x1bf8,4,3);
    if (lVar13 != 0) {
        lVar17 = *(longlong *)(lVar13 + 0x18);
        fVar20 = 0.0;
        fVar21 = 0.0;
        if (lVar17 != 0) {
            piVar14 = *(int **)(lVar13 + 0x10);
            do {
                if (*piVar14 == 5) {
                    if (piVar14[1] == 0x2c) {
                        fVar21 = fVar21 + (float)piVar14[3];
                    }
                }
                else if (*piVar14 == 6) {
                    fVar20 = fVar20 + (float)piVar14[3];
                }
                piVar14 = piVar14 + 4;
                lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
        }
        iVar9 = 0;
        if ((int)fVar20 < 0) {
            iVar9 = -0x80000000;
        }
        uVar6 = iVar9 - (int)fVar20 >> 0x1f;
        bVar2 = false;
        if (0x54 < (int)((iVar9 - (int)fVar20 ^ uVar6) - uVar6)) {
            bVar2 = true;
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            *puVar18 = *puVar12;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar13 = FUN_14018f0e0(&local_b0,L"fSignature");
            if (*(longlong *)(lVar13 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar17 = -1;
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
                FUN_140058710(param_1);
            }
            if (CONCAT44(uStack164,local_a8) != 0) {
                FUN_14018b900(CONCAT44(uStack164,local_a8),0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar20;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        }
        iVar9 = 0;
        if ((int)fVar21 < 0) {
            iVar9 = -0x80000000;
        }
        uVar6 = iVar9 - (int)fVar21 >> 0x1f;
        if (0x54 < (int)((iVar9 - (int)fVar21 ^ uVar6) - uVar6)) {
            bVar2 = true;
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            puVar18 = *(undefined8 **)(param_1 + 0x10);
            *puVar18 = *puVar12;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar13 = FUN_14018f0e0(&local_b0,L"fLoyalty");
            if (*(longlong *)(lVar13 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar17 = -1;
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != '\0');
                FUN_140058710(param_1);
            }
            if (CONCAT44(uStack164,local_a8) != 0) {
                FUN_14018b900(CONCAT44(uStack164,local_a8),0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar21;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar11,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        }
    }
    local_b0 = &PTR_FUN_140b569f0;
    local_98 = 1;
    local_a0 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar18 + 1) = 5;
    *puVar18 = uVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400578c0(param_1);
    local_a8 = uVar10;
    puVar12 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar10);
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(local_90,L"tFinal");
    lVar13 = *(longlong *)(lVar13 + 8);
    if (lVar13 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(lVar13 + lVar17) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar18 = *(undefined8 **)(param_1 + 0x10);
        uVar11 = FUN_140062650(param_1,lVar13,lVar17);
        *(undefined4 *)(puVar18 + 1) = 4;
        *puVar18 = uVar11;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_88 != 0) {
        FUN_14018b900(local_88,0);
    }
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3)
            ;
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar13,lVar13 + -0x20,lVar13 + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(local_90,L"tBase");
    lVar13 = *(longlong *)(lVar13 + 8);
    if (lVar13 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        do {
            lVar19 = lVar19 + 1;
        } while (*(char *)(lVar13 + lVar19) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar18 = *(undefined8 **)(param_1 + 0x10);
        uVar11 = FUN_140062650(param_1,lVar13,lVar19);
        *(undefined4 *)(puVar18 + 1) = 4;
        *puVar18 = uVar11;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_88 != 0) {
        FUN_14018b900(local_88,0);
    }
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4)
            ;
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar13,lVar13 + -0x20,lVar13 + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if (bVar2) {
        FUN_1400fb2a0(&local_b0,L"tBonuses",uVar5);
    }
    puVar12 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar10);
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    *puVar18 = *puVar12;
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar18,uVar10);
    FUN_1400579e0(param_1);
    FUN_1400579e0(param_1);
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_140711dc0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_140711e08;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar2 = 0;
    LAB_140711e08:
    uVar1 = FUN_1400f26a0(lVar2 + 0x180,1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    if (uVar1 < 3) {
        puVar4 = *(undefined **)(DAT_140c65948 + 0xe8 + (ulonglong)uVar1 * 8);
    }
    else {
        puVar4 = &DAT_1409f060c;
    }
    lVar2 = FUN_14018f0e0(local_28,puVar4);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar5) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140711f10(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    ulonglong local_18;
    undefined4 local_10;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        iVar2 = FUN_140056d60(param_1,1);
        if (iVar2 != 0) {
            local_10 = 0;
            local_18 = (ulonglong)CONCAT14(0xf,iVar2);
            FUN_1403f4900(DAT_140c65898,0xc5,&local_18);
        }
    }
    return 0;
}



undefined4 FUN_140711f80(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined8 local_28;
    undefined4 local_20;

    FUN_140057020(param_1,"ChallengesLib",&PTR_s_GetActiveChallengeList_140b73890);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    lVar4 = 3;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeType_Combat",0x14);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeType_Ability",0x15);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeType_General",0x15);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeType_UNUSED01",0x16);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4010000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeType_Item",0x12);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeType_ChecklistActivate",0x1f);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeTimerFlags_UNUSED",0x1a);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeTimerFlags_Active",0x1a);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeTimerFlags_Cooldown",0x1c);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"ChallengeTimerFlags_LeftArea",0x1c);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"ChallengeTier",0xd);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_140712400(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
            iVar1 = FUN_1400a7fd0(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x16c);
            if (iVar1 != 0) {
                local_28 = 0;
                local_20 = 0;
                local_18 = *(undefined8 *)(lVar2 + 8);
                FUN_1403f4900(DAT_140c65898,0x267,&local_28);
            }
        }
    }
    return 0;
}



undefined8 FUN_140712490(void)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    int *piVar4;
    undefined local_res10 [24];

    lVar2 = DAT_140c635f0;
    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar1 = *(longlong *)(DAT_140c635f0 + 0x15d0);
        piVar4 = (int *)(lVar1 + 0x16c);
        uVar3 = DAT_140c636a8 - *piVar4;
        if (uVar3 < *(uint *)(lVar1 + 0x17c)) {
            if (*(int *)(lVar1 + 0x170) == *(int *)(lVar1 + 0x178)) {
                return 0;
            }
            *(int *)(lVar1 + 0x170) = *(int *)(lVar1 + 0x170) + 1;
        }
        else if (uVar3 < *(uint *)(lVar1 + 0x174)) {
            *piVar4 = *(uint *)(lVar1 + 0x17c) + *piVar4;
        }
        else {
            *piVar4 = DAT_140c636a8;
            *(undefined4 *)(lVar1 + 0x170) = 1;
        }
        local_res10[0] = 0;
        FUN_1400161d0(lVar2,999,local_res10);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001407125ab)

undefined4 FUN_140712510(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1,"CREDDExchangeLib",&PTR_s_RequestExchangeInfo_140b73970);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"kCREDDExchangeBuyRake",0x15);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x3fa9999980000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"kfCREDDExchangeBuyTaxMultiplier",0x1f);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"CodeEnumAccountOperationResult",0x1e);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x1d;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumAccountOperation",0x18);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x10;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 * FUN_140712760(undefined8 *param_1)

{
    undefined4 uVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b739b0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    uVar1 = FUN_1400518a0(DAT_140c63628,0x2e,1);
    (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,param_1 + 6,uVar1);
    return param_1;
}



undefined8 FUN_140712810(undefined8 param_1,ulonglong param_2)

{
    FUN_140712850();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140712850(undefined8 *param_1)

{
    int iVar1;

    *param_1 = &PTR_LAB_140b739b0;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        iVar1 = (**(code **)(*(longlong *)param_1[7] + 0x50))();
        if (iVar1 != 0) {
            (**(code **)(*(longlong *)param_1[7] + 0x48))((longlong *)param_1[7],100,2);
        }
    }
    FUN_140712910(param_1);
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_140712910(longlong param_1)

{
    longlong *plVar1;

    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        *(undefined4 *)(param_1 + 0x50) = 1;
        if (*(code **)(param_1 + 0x40) != (code *)0x0) {
            (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        if ((*(longlong *)(param_1 + 0x28) != 0) &&
            (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x18))(plVar1,*(longlong *)(param_1 + 0x28),0,0,0,0,0);
        }
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
    }
    return;
}



ulonglong FUN_1407129a0(longlong **param_1)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    if (param_1 == (longlong **)0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_14018b280(0x58);
    if (lVar1 == 0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2 = (longlong *)FUN_140712760(lVar1);
    }
    uVar3 = (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,plVar2 + 2,0);
    if ((int)uVar3 < 0) {
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,1);
        }
        return uVar3 & 0xffffffff;
    }
    *param_1 = plVar2;
    return uVar3;
}



undefined8 FUN_140712a40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;

    FUN_140712910();
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1,*(longlong *)(param_1 + 0x30),0,0,0,0,0);
        }
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
        uVar3 = (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,param_1 + 0x18,param_2);
        if ((int)uVar3 < 0) {
            return uVar3;
        }
        if (*(longlong *)(param_1 + 0x20) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                    (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x20),0,0,0,0,0);
        }
        *(undefined8 *)(param_1 + 0x40) = param_3;
        *(undefined8 *)(param_1 + 0x48) = param_4;
        if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
            *(undefined8 *)(param_1 + 0x38) = 0;
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_1 + 0x38
                        ,0x80000000,&LAB_140712900,param_1,0);
        if (iVar2 < 0) {
            FUN_140712910(param_1);
        }
    }
    return 0;
}



undefined8
FUN_140712c00(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    if (DAT_140c65a28 != 0) {
        puVar1 = (undefined4 *)FUN_14018b280(0x20);
        if (puVar1 == (undefined4 *)0x0) {
            puVar1 = (undefined4 *)0x0;
        }
        else {
            *puVar1 = param_2;
            *(undefined8 *)(puVar1 + 2) = param_3;
            *(undefined8 *)(puVar1 + 4) = param_4;
            *(undefined8 **)(puVar1 + 6) = param_1;
            if (param_1 != (undefined8 *)0x0) {
                (**(code **)*param_1)(param_1);
            }
        }
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[2] = 0;
            *(undefined4 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
            puVar2[4] = &LAB_140712b60;
            puVar2[6] = puVar1;
            lVar3 = FUN_140225140(2);
            if (lVar3 != 0) {
                puVar2[2] = lVar3;
            }
        }
        FUN_1404cfa80();
    }
    return 0;
}



void FUN_140712ce0(longlong param_1)

{
    undefined4 uVar1;

    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar1 = FUN_1400518a0(DAT_140c63628,0x69,1);
    (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,param_1 + 0x20,uVar1);
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    uVar1 = FUN_1400518a0(DAT_140c63628,0x6a,1);
    // WARNING: Could not recover jumptable at 0x000140712d79. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,param_1 + 0x28,uVar1);
    return;
}



void FUN_140712d90(longlong *param_1)

{
    int *piVar1;
    longlong lVar2;
    uint uVar3;

    piVar1 = (int *)(**(code **)(*param_1 + 0x58))();
    uVar3 = (piVar1[3] - piVar1[1]) * (piVar1[2] - *piVar1);
    FUN_14018b900(param_1[8],0);
    lVar2 = FUN_14018b280(uVar3,0);
    param_1[8] = lVar2;
    FUN_1407e4830(lVar2,0,uVar3);
    FUN_14018b900(param_1[9],0);
    *(uint *)((longlong)param_1 + 0x3c) = uVar3 >> 3;
    if ((uVar3 & 7) != 0) {
        *(uint *)((longlong)param_1 + 0x3c) = (uVar3 >> 3) + 1;
    }
    lVar2 = FUN_14018b280(*(undefined4 *)((longlong)param_1 + 0x3c),0);
    param_1[9] = lVar2;
    FUN_1407e4830(lVar2,0,*(undefined4 *)((longlong)param_1 + 0x3c));
    return;
}



longlong FUN_140712ef0(longlong *param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;

    piVar4 = (int *)(**(code **)(*param_1 + 0x58))();
    iVar1 = *param_2;
    iVar2 = *piVar4;
    if ((((iVar2 <= iVar1) && (iVar1 < piVar4[2])) && (iVar3 = param_2[1], piVar4[1] <= iVar3)) &&
        (iVar3 < piVar4[3])) {
        return (longlong)(((iVar3 - piVar4[1]) * (piVar4[2] - iVar2) - iVar2) + iVar1);
    }
    return -1;
}



undefined4 FUN_140712f50(longlong param_1,undefined8 param_2)

{
    longlong lVar1;

    lVar1 = FUN_140448970(param_1,*(undefined8 *)(param_1 + 8),param_2);
    if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 0x10);
    }
    return 0;
}



undefined8 FUN_140712f80(longlong *param_1,undefined8 param_2,int *param_3)

{
    int iVar1;
    int *piVar2;

    iVar1 = (**(code **)(*param_1 + 0x38))();
    if (iVar1 != 0) {
        piVar2 = (int *)(**(code **)(*param_1 + 0x58))();
        if ((((*piVar2 <= *param_3) && (*param_3 < piVar2[2])) && (piVar2[1] <= param_3[1])) &&
            (param_3[1] < piVar2[3])) {
            return 1;
        }
    }
    return 0;
}



void FUN_140712fe0(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = DAT_140c658f8;
    lVar4 = *(longlong *)(param_1 + 8);
    lVar3 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
    iVar1 = *(int *)(lVar3 + 8 + lVar4 * 0x30);
    lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))();
    FUN_1402141a0(*(undefined4 *)(lVar4 + (iVar1 + param_2) * 4));
    return;
}



longlong FUN_140713040(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
    return (longlong)(*(int *)(lVar2 + 0xc + lVar1 * 0x30) - *(int *)(lVar2 + 8 + lVar1 * 0x30));
}



longlong FUN_140713080(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
    return (longlong)(*(int *)(lVar2 + 0x2c + lVar1 * 0x30) - *(int *)(lVar2 + 0x28 + lVar1 * 0x30));
}



uint FUN_1407130c0(longlong *param_1,int *param_2)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 != 0) {
        return 1;
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x58))();
    if ((((*param_2 < *piVar2) || (piVar2[2] <= *param_2)) || (param_2[1] < piVar2[1])) ||
        (piVar2[3] <= param_2[1])) {
        return 0;
    }
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    if (uVar3 == 0xffffffffffffffff) {
        return 0;
    }
    uVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_2);
    if ((uVar4 & 2) != 0) {
        return 1;
    }
    return (uint)*(byte *)((uVar3 >> 3) + param_1[9]) & 1 << ((byte)uVar3 & 7);
}



void FUN_1407131b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
    uint uVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    piVar3 = (int *)(**(code **)(*param_1 + 0x58))();
    uVar4 = (piVar3[3] - piVar3[1]) * (piVar3[2] - *piVar3);
    uVar1 = uVar4 >> 3;
    if ((uVar4 & 7) != 0) {
        uVar1 = uVar1 + 1;
    }
    if (param_3 == uVar1) {
        FUN_1407db590(param_1[9],param_2,param_3);
        *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
        FUN_140713400(param_1);
    }
    else {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_20 = local_40;
        local_18 = local_38;
        piVar3 = (int *)(**(code **)(*param_1 + 0x58))(param_1);
        uVar1 = (piVar3[3] - piVar3[1]) * (piVar3[2] - *piVar3);
        uVar4 = uVar1 >> 3;
        if ((uVar1 & 7) != 0) {
            uVar4 = uVar4 + 1;
        }
        local_res8 = 0x141e40210;
        iVar2 = FUN_1401971e0(&DAT_140c8b0f8,0x16,&local_res8,uVar4,param_3,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001407132e2. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    return;
}



ulonglong FUN_140713320(longlong *param_1,longlong param_2,ulonglong param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    int local_res8;
    int local_resc;

    uVar7 = 0;
    piVar5 = (int *)(**(code **)(*param_1 + 0x58))();
    iVar1 = piVar5[3];
    iVar2 = *piVar5;
    iVar3 = piVar5[2];
    for (local_resc = piVar5[1]; local_res8 = iVar2, local_resc < iVar1; local_resc = local_resc + 1)
    {
        for (; local_res8 < iVar3; local_res8 = local_res8 + 1) {
            uVar6 = (**(code **)(*param_1 + 0x68))(param_1,&local_res8);
            if (((uVar6 & 1) == 0) &&
                (iVar4 = (**(code **)(*param_1 + 0x88))(param_1,&local_res8), iVar4 != 0)) {
                if ((uVar7 < param_3) && (param_2 != 0)) {
                    *(int *)(param_2 + uVar7 * 8) = local_res8;
                    *(int *)(param_2 + 4 + uVar7 * 8) = local_resc;
                }
                uVar7 = uVar7 + 1;
            }
        }
    }
    return uVar7;
}



void FUN_140713400(longlong *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    ulonglong uVar6;
    int local_res8;
    int local_resc;

    piVar5 = (int *)(**(code **)(*param_1 + 0x58))();
    local_resc = piVar5[1];
    iVar1 = piVar5[3];
    iVar2 = *piVar5;
    iVar3 = piVar5[2];
    param_1[6] = 0;
    for (; local_res8 = iVar2, local_resc < iVar1; local_resc = local_resc + 1) {
        for (; local_res8 < iVar3; local_res8 = local_res8 + 1) {
            uVar6 = (**(code **)(*param_1 + 0x68))(param_1,&local_res8);
            if ((uVar6 & 1) == 0) {
                *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
                iVar4 = (**(code **)(*param_1 + 0x88))(param_1,&local_res8);
                if (iVar4 != 0) {
                    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
                }
            }
        }
    }
    return;
}



undefined8 FUN_1407135f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;

    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar3 = *(longlong **)(param_1 + 8);
    pplVar5 = (longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
        plVar3 = plVar4;
        for (plVar4 = (longlong *)plVar4[6]; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6])
        {
            plVar3 = plVar4;
        }
    }
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 8))(plVar3), iVar2 != 0)) {
        plVar3 = (longlong *)FUN_14018b280(0x60);
        plVar4 = plVar3;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73d18;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = (longlong *)0x0;
        }
        *(undefined4 *)(plVar3 + 1) = param_2;
        *(int *)((longlong)plVar3 + 0xc) = (int)plVar4;
        plVar3[2] = (longlong)plVar4;
        if (plVar3[5] == 0) {
            plVar1 = *pplVar5;
            while (plVar1 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar1 = *pplVar5;
            }
            plVar3[5] = (longlong)pplVar5;
            plVar3[6] = (longlong)plVar4;
            *pplVar5 = plVar3;
        }
    }
    FUN_140783300(plVar3 + 7,param_2,param_3);
    return 0;
}



longlong FUN_1407136f0(longlong param_1,uint param_2)

{
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x50),0);
    FUN_140713a20(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140713740(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b73d30;
    if (param_1[3] != 0) {
        FUN_14079ab20(param_1[2],param_1);
    }
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407137c0(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(param_1 + 0x10);
    while ((lVar4 != 0 && (-1 < param_3 - *(int *)(*(longlong *)(param_1 + 0x10) + 8)))) {
        lVar4 = *(longlong *)(param_1 + 8);
        if (lVar4 != 0) {
            if ((*(undefined8 **)(lVar4 + 0x18) != (undefined8 *)0x0) &&
                (lVar1 = *(longlong *)(lVar4 + 0x10),
                        lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10))) {
                **(undefined8 **)(lVar4 + 0x18) = *(undefined8 *)(lVar4 + 0x20);
                if (*(longlong *)(lVar4 + 0x20) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x18) = *(undefined8 *)(lVar4 + 0x18);
                }
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined8 *)(lVar4 + 0x20) = 0;
                if ((*(int *)(lVar1 + 4) < 2) &&
                    ((*(undefined4 *)(lVar1 + 4) = 3, *(longlong *)(lVar1 + 0x78) != 0 ||
                                                      (*(longlong *)(lVar1 + 0x80) != 0)))) {
                    FUN_140195960(lVar1 + 8,0,lVar1 + 0x70,4);
                }
            }
            puVar2 = *(undefined8 **)(param_1 + 8);
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,1);
            }
        }
        lVar4 = *(longlong *)(param_1 + 0x10);
        *(longlong *)(param_1 + 8) = lVar4;
        if (*(undefined8 **)(lVar4 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar4 + 0x28) = *(undefined8 *)(lVar4 + 0x30);
        }
        if (*(longlong *)(lVar4 + 0x30) != 0) {
            *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        }
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        lVar4 = *(longlong *)(param_1 + 0x10);
    }
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3,param_1);
    }
    return;
}



void FUN_1407138f0(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;

    plVar4 = *(longlong **)(param_1 + 0x80);
    pplVar5 = (longlong **)(param_1 + 0x88);
    plVar3 = *pplVar5;
    if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
        for (plVar3 = (longlong *)plVar3[6]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6])
        {
            plVar4 = plVar3;
        }
    }
    if (((*(int *)(param_3 + 0xc) == 0) || (plVar4 == (longlong *)0x0)) ||
        (iVar2 = (**(code **)(*plVar4 + 8))(), iVar2 != 1)) {
        plVar3 = (longlong *)FUN_14018b280();
        plVar4 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73d00;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = plVar3;
        }
        uVar1 = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(plVar4 + 1) = param_2;
        *(undefined4 *)((longlong)plVar4 + 0xc) = uVar1;
        plVar4[2] = 0;
        if (plVar4[5] == 0) {
            plVar3 = *pplVar5;
            while (plVar3 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar3 = *pplVar5;
            }
            plVar4[5] = (longlong)pplVar5;
            plVar4[6] = 0;
            *pplVar5 = plVar4;
        }
    }
    FUN_1407834b0(plVar4 + 7,param_2,param_3);
    if ((param_4 != (undefined4 *)0x0) && (*(int *)(param_3 + 0xc) != 0)) {
        *param_4 = 1;
    }
    return;
}



void FUN_140713a20(undefined8 *param_1)

{
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = &PTR_FUN_140b73d30;
    if (param_1[3] != 0) {
        FUN_14079ab20(param_1[2],param_1);
    }
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}



int FUN_140713ab0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    puVar3 = (undefined8 *)FUN_14018b280(0x70);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *puVar3 = &PTR_FUN_140b73cd0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar5 = puVar3;
    }
    iVar2 = FUN_140781140(puVar5,param_2,param_3,param_4,param_5);
    if (iVar2 < 0) {
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
        return iVar2;
    }
    if (puVar5[5] == 0) {
        plVar4 = (longlong *)(param_1 + 0x88);
        lVar1 = *plVar4;
        while (lVar1 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x30);
            lVar1 = *plVar4;
        }
        puVar5[5] = plVar4;
        puVar5[6] = 0;
        *plVar4 = (longlong)puVar5;
    }
    return 0;
}



longlong FUN_140713bb0(longlong param_1,uint param_2)

{
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x58),0);
    FUN_140713a20(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



int FUN_140713c00(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    puVar3 = (undefined8 *)FUN_14018b280(0x78);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *puVar3 = &PTR_FUN_140b73ce8;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar5 = puVar3;
    }
    iVar2 = FUN_140781300(puVar5,param_2,param_3,param_4);
    if (iVar2 < 0) {
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
        return iVar2;
    }
    if (puVar5[5] == 0) {
        plVar4 = (longlong *)(param_1 + 0x88);
        lVar1 = *plVar4;
        while (lVar1 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x30);
            lVar1 = *plVar4;
        }
        puVar5[5] = plVar4;
        puVar5[6] = 0;
        *plVar4 = (longlong)puVar5;
    }
    return 0;
}



int FUN_140713cf0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 local_58;
    undefined **local_50;
    undefined8 local_48;
    LPVOID local_40;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    puVar4 = (undefined8 *)FUN_14018b280(0x70);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *puVar4 = &PTR_FUN_140b77d80;
        puVar6 = puVar4;
    }
    iVar2 = FUN_140781780(puVar6,param_2,param_3,param_4);
    if (iVar2 < 0) {
        if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
        }
        local_48 = 0;
        local_50 = &PTR_LAB_140b5e648;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_50);
        local_38 = local_50;
        local_30 = local_48;
        local_58 = 0x141e402e0;
        local_28 = local_40;
        iVar3 = FUN_140196f30(&DAT_140c8b0fc,0x25,&local_58,*param_3,&local_38);
        local_50 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_40);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    else {
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x88);
            lVar1 = *plVar5;
            while (lVar1 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar1 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        iVar2 = 0;
    }
    return iVar2;
}



int FUN_140713e80(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 local_58;
    undefined **local_50;
    undefined8 local_48;
    LPVOID local_40;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    puVar4 = (undefined8 *)FUN_14018b280(0xb0,0);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *puVar4 = &PTR_FUN_140b77d68;
        puVar6 = puVar4;
    }
    iVar2 = FUN_1407819a0(puVar6,param_2,param_3,param_4);
    if (iVar2 < 0) {
        if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
        }
        local_48 = 0;
        local_50 = &PTR_LAB_140b5e648;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_50);
        local_38 = local_50;
        local_30 = local_48;
        local_58 = 0x141e402a0;
        local_28 = local_40;
        iVar3 = FUN_140196f30(&DAT_140c8b100,0x25,&local_58,*(undefined8 *)(param_3 + 8),&local_38);
        local_50 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_40);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    else {
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x88);
            lVar1 = *plVar5;
            while (lVar1 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar1 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_140714120(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined uVar4;
    undefined uVar5;
    bool bVar6;

    uVar5 = 0;
    bVar6 = false;
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    lVar1 = *(longlong *)(param_1 + 0x88);
    while ((lVar1 != 0 && (uVar4 = uVar5, -1 < param_3 - *(int *)(*(longlong *)(param_1 + 0x88) + 8)))
            ) {
        lVar1 = *(longlong *)(param_1 + 0x80);
        if (lVar1 != 0) {
            if ((*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) &&
                (lVar2 = *(longlong *)(lVar1 + 0x10),
                        lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10))) {
                **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
                if (*(longlong *)(lVar1 + 0x20) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                }
                *(undefined8 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 0x20) = 0;
                if ((*(int *)(lVar2 + 4) < 2) &&
                    ((*(undefined4 *)(lVar2 + 4) = 3, *(longlong *)(lVar2 + 0x78) != 0 ||
                                                      (*(longlong *)(lVar2 + 0x80) != 0)))) {
                    FUN_140195960(lVar2 + 8,0,lVar2 + 0x70,4);
                }
            }
            puVar3 = *(undefined8 **)(param_1 + 0x80);
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
            }
        }
        lVar1 = *(longlong *)(param_1 + 0x88);
        *(longlong *)(param_1 + 0x80) = lVar1;
        if (*(undefined8 **)(lVar1 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x30);
        }
        if (*(longlong *)(lVar1 + 0x30) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        }
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        uVar5 = 1;
        uVar4 = 1;
        bVar6 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xc) == 0;
        if (bVar6) {
            *(undefined4 *)(param_1 + 0x6c) = 1;
            FUN_1407142a0(param_1,param_2,param_3,1);
        }
        lVar1 = *(longlong *)(param_1 + 0x88);
    }
    if ((*(longlong *)(param_1 + 0x80) != 0) && (!bVar6)) {
        FUN_1407142a0(param_1,param_2,param_3,uVar4);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407142a0(undefined (*param_1) [16],longlong param_2,undefined8 param_3,int param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 uVar5;
    float *pfVar6;
    undefined2 *puVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    double dVar16;
    undefined auVar17 [16];
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    double dVar22;
    float fVar24;
    undefined auVar23 [16];
    undefined4 uVar25;
    undefined4 uVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    undefined local_188 [8];
    float fStack384;
    float fStack380;
    undefined local_178 [16];
    float local_168;
    float local_164;
    float local_160;
    undefined local_158 [8];
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined local_f8 [8];
    undefined4 uStack240;
    undefined4 uStack236;
    undefined local_e8 [176];

    iVar3 = (int)param_3;
    if (param_4 != 0) {
        uVar1 = *(undefined4 *)(param_2 + 0xff4);
        uVar2 = *(undefined4 *)(param_2 + 0xff8);
        uVar18 = *(undefined4 *)(param_2 + 0xffc);
        *(undefined4 *)param_1[3] = *(undefined4 *)(param_2 + 0xff0);
        *(undefined4 *)(param_1[3] + 4) = uVar1;
        *(undefined4 *)(param_1[3] + 8) = uVar2;
        *(undefined4 *)(param_1[3] + 0xc) = uVar18;
        uVar1 = *(undefined4 *)(param_2 + 0x1034);
        uVar2 = *(undefined4 *)(param_2 + 0x1038);
        uVar18 = *(undefined4 *)(param_2 + 0x103c);
        *(undefined4 *)param_1[4] = *(undefined4 *)(param_2 + 0x1030);
        *(undefined4 *)(param_1[4] + 4) = uVar1;
        *(undefined4 *)(param_1[4] + 8) = uVar2;
        *(undefined4 *)(param_1[4] + 0xc) = uVar18;
        *(undefined4 *)param_1[6] = *(undefined4 *)(param_2 + 0x1100);
        *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(param_2 + 0x1104);
        *(undefined4 *)(param_1[6] + 8) = *(undefined4 *)(param_2 + 0x1108);
        uVar1 = *(undefined4 *)(param_2 + 0x1114);
        uVar2 = *(undefined4 *)(param_2 + 0x1118);
        uVar18 = *(undefined4 *)(param_2 + 0x111c);
        *(undefined4 *)param_1[5] = *(undefined4 *)(param_2 + 0x1110);
        *(undefined4 *)(param_1[5] + 4) = uVar1;
        *(undefined4 *)(param_1[5] + 8) = uVar2;
        *(undefined4 *)(param_1[5] + 0xc) = uVar18;
    }
    _local_188 = *param_1;
    local_164 = *(float *)(param_1[6] + 4);
    _local_158 = param_1[3];
    _local_f8 = param_1[4];
    local_178 = param_1[5];
    local_168 = *(float *)param_1[6];
    local_160 = *(float *)(param_1[6] + 8);
    (**(code **)(**(longlong **)param_1[8] + 0x10))
            (*(longlong **)param_1[8],param_2,param_3,local_188,local_158,local_178);
    fVar29 = 1.0;
    local_108 = local_158._0_4_;
    uStack260 = local_158._4_4_;
    uStack256 = uStack336;
    uStack252 = uStack332;
    local_f8._0_4_ = local_158._0_4_;
    local_f8._4_4_ = local_158._4_4_;
    uStack240 = uStack336;
    uStack236 = uStack332;
    if (param_4 != 0) {
        if ((*(int *)(*(longlong *)param_1[8] + 0xc) == 0) || (*(int *)(param_2 + 0xd54) != 0)) {
            param_1[2] = ZEXT816(0);
            *(undefined8 *)(param_1[7] + 4) = 0;
            *(int *)(param_1[7] + 0xc) = iVar3;
        }
        else {
            fVar8 = (float)FUN_1405b45e0(param_2,*(undefined4 *)(param_2 + 0x1088),3);
            if (fVar8 <= fVar29) {
                fVar8 = fVar29;
            }
            param_1[2] = CONCAT412(*(float *)(*param_1 + 0xc) - fStack380,
                                   CONCAT48(*(float *)(*param_1 + 8) - fStack384,
                                            CONCAT44(*(float *)(*param_1 + 4) - local_188._4_4_,
                                                     *(float *)*param_1 - local_188._0_4_)));
            *(undefined4 *)(param_1[7] + 4) = 0x3f800000;
            fVar8 = SQRT(*(float *)param_1[2] * *(float *)param_1[2] +
                         *(float *)(param_1[2] + 4) * *(float *)(param_1[2] + 4) + 0.0) / fVar8;
            if (fVar8 <= 0.5) {
                fVar8 = 0.5;
            }
            *(float *)(param_1[7] + 8) = fVar29 / fVar8;
            local_f8._0_4_ = local_158._0_4_;
            local_f8._4_4_ = local_158._4_4_;
            uStack240 = uStack336;
            uStack236 = uStack332;
        }
    }
    fVar8 = 0.0;
    fVar27 = (float)(ulonglong)(uint)(iVar3 - *(int *)(param_1[7] + 0xc)) * 0.001;
    if (0.0 < *(float *)(param_1[7] + 4)) {
        fVar12 = *(float *)(param_1[7] + 4) - fVar27 * *(float *)(param_1[7] + 8);
        fVar24 = 0.0;
        if (0.0 <= fVar12) {
            fVar24 = fVar12;
        }
        *(float *)(param_1[7] + 4) = fVar24;
        _local_188 = CONCAT412(*(float *)(param_1[2] + 0xc) * fVar24 + fStack380,
                               CONCAT48(*(float *)(param_1[2] + 8) * fVar24 + fStack384,
                                        CONCAT44(*(float *)(param_1[2] + 4) * fVar24 + local_188._4_4_,
                                                 *(float *)param_1[2] * fVar24 + local_188._0_4_)));
    }
    fVar24 = SUB164(local_178 >> 0x20,0);
    fVar24 = SUB164(local_178,0) * SUB164(local_178,0) + fVar24 * fVar24 + 0.0;
    if (fVar24 <= _DAT_140c4b188) {
        auVar23 = param_1[5];
    }
    else {
        fVar24 = SQRT(fVar24);
        auVar23 = divps(local_178,CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar24,fVar24))));
    }
    fVar24 = SUB164(auVar23 >> 0x20,0);
    local_178 = auVar23;
    if (fVar24 <= 0.99999) {
        if (-0.99999 <= fVar24) {
            fVar12 = (float)FUN_1408fd190(SUB164(auVar23,0) ^ 0x80000000,0x80000000);
            if (fVar29 <= fVar24) {
                fVar24 = fVar29;
            }
            fVar29 = -1.0;
            if (-1.0 <= fVar24) {
                fVar29 = fVar24;
            }
            fVar29 = (float)FUN_1408fcf3c(fVar29);
        }
        else {
            fVar29 = -1.570796;
            fVar12 = 0.0;
        }
    }
    else {
        fVar29 = 1.570796;
        fVar12 = 0.0;
    }
    if ((param_4 == 0) || (*(int *)(*(longlong *)param_1[8] + 0xc) != 0)) {
        if (fVar27 <= fVar8) {
            local_108 = *(undefined4 *)param_1[4];
            uStack260 = *(undefined4 *)(param_1[4] + 4);
            uStack256 = *(undefined4 *)(param_1[4] + 8);
            uStack252 = *(undefined4 *)(param_1[4] + 0xc);
            local_f8._0_4_ = *(undefined4 *)param_1[3];
            local_f8._4_4_ = *(undefined4 *)(param_1[3] + 4);
            uStack240 = *(undefined4 *)(param_1[3] + 8);
            uStack236 = *(undefined4 *)(param_1[3] + 0xc);
            auVar23 = param_1[5];
            fVar12 = *(float *)param_1[6];
            fVar29 = *(float *)(param_1[6] + 4);
            fVar8 = *(float *)(param_1[6] + 8);
        }
        else {
            local_188._0_4_ = local_188._0_4_ - *(float *)*param_1;
            local_188._4_4_ = local_188._4_4_ - *(float *)(*param_1 + 4);
            auVar23 = CONCAT412(fStack380 - *(float *)(*param_1 + 0xc),
                                CONCAT48(fStack384 - *(float *)(*param_1 + 8),
                                         CONCAT44(local_188._4_4_,local_188._0_4_)));
            fVar24 = SQRT(local_188._0_4_ * local_188._0_4_ + local_188._4_4_ * local_188._4_4_ + 0.0);
            local_168 = fVar12;
            local_164 = fVar29;
            local_160 = fVar8;
            if (fVar24 <= 0.001) {
                auVar17 = auVar23 & (undefined  [16])0x0;
            }
            else if (fVar27 * 1000.0 < fVar24) {
                iVar4 = (**(code **)(**(longlong **)param_1[8] + 8))();
                auVar17 = _local_158;
                if ((iVar4 != 4) &&
                    (iVar4 = (**(code **)(**(longlong **)param_1[8] + 8))(), auVar17 = _local_158, iVar4 != 5
                    )) {
                    fVar29 = 1000.0 / fVar24;
                    fVar8 = fVar29 * SUB164(auVar23,0);
                    fVar12 = fVar29 * SUB164(auVar23 >> 0x20,0);
                    fVar11 = fVar29 * SUB164(auVar23 >> 0x40,0);
                    fVar29 = fVar29 * SUB164(auVar23 >> 0x60,0);
                    _local_158 = CONCAT412(fVar29,CONCAT48(fVar11,CONCAT44(fVar12,fVar8)));
                    auVar17 = CONCAT412(fVar29,CONCAT48(fVar11,CONCAT44(fVar12,fVar8)));
                    if (param_2 != 0) {
                        uVar1 = *(undefined4 *)(param_2 + 8);
                        uVar2 = *(undefined4 *)(param_2 + 0x80);
                        dVar16 = (double)fVar27;
                        uVar18 = SUB84((double)fStack384,0);
                        uVar19 = (undefined4)((ulonglong)(double)fStack384 >> 0x20);
                        uVar20 = SUB84((double)local_188._4_4_,0);
                        uVar21 = (undefined4)((ulonglong)(double)local_188._4_4_ >> 0x20);
                        dVar22 = (double)local_188._0_4_;
                        uVar25 = SUB84((double)fVar24,0);
                        uVar26 = (undefined4)((ulonglong)(double)fVar24 >> 0x20);
                        puVar7 = &DAT_140b7b704;
                        if (*(undefined2 **)(param_2 + 0x10) != (undefined2 *)0x0) {
                            puVar7 = *(undefined2 **)(param_2 + 0x10);
                        }
                        uVar5 = (**(code **)(**(longlong **)param_1[8] + 8))();
                        FUN_1400035b0(5,0,0,uVar5,CONCAT44(uVar26,uVar25),puVar7,uVar2,uVar1,dVar22,
                                      CONCAT44(uVar21,uVar20),CONCAT44(uVar19,uVar18),dVar16);
                        auVar17 = _local_158;
                    }
                }
            }
            else {
                auVar17 = divps(auVar23,CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(fVar27,fVar27))));
            }
            fVar27 = fVar27 * -0.6931472;
            fVar29 = (float)FUN_1408fc7f0(fVar27 * 10.0);
            fVar24 = SUB164(auVar17 >> 0x20,0);
            fVar12 = SUB164(auVar17 >> 0x40,0);
            fVar11 = SUB164(auVar17 >> 0x60,0);
            fVar8 = (*(float *)param_1[3] - SUB164(auVar17,0)) * fVar29 + SUB164(auVar17,0);
            fVar24 = (*(float *)(param_1[3] + 4) - fVar24) * fVar29 + fVar24;
            fVar12 = (*(float *)(param_1[3] + 8) - fVar12) * fVar29 + fVar12;
            fVar11 = (*(float *)(param_1[3] + 0xc) - fVar11) * fVar29 + fVar11;
            _local_f8 = CONCAT412(fVar11,CONCAT48(fVar12,CONCAT44(fVar24,fVar8)));
            _local_158 = CONCAT412(fVar11,CONCAT48(fVar12,CONCAT44(fVar24,fVar8)));
            FUN_1408fc7f0(fVar27 * 4.0);
            pfVar6 = (float *)FUN_1401b3250(local_e8,&local_168,param_1[6]);
            fVar15 = 0.5;
            fVar8 = pfVar6[2];
            fVar12 = *pfVar6;
            fVar29 = pfVar6[1];
            fVar24 = fVar8 * 0.5;
            fVar27 = (float)FUN_1408fe3d0(fVar24);
            fVar24 = (float)FUN_1408fc950(fVar24);
            fVar14 = fVar29 * fVar15;
            fVar11 = (float)FUN_1408fe3d0(fVar14);
            fVar14 = (float)FUN_1408fc950(fVar14);
            fVar15 = fVar12 * fVar15;
            fVar9 = (float)FUN_1408fe3d0(fVar15);
            fVar15 = (float)FUN_1408fc950(fVar15);
            fVar10 = fVar27 * fVar9 * fVar14 + fVar15 * fVar11 * fVar24;
            fVar13 = fVar9 * fVar14 * fVar24 - fVar27 * fVar15 * fVar11;
            fVar28 = fVar27 * fVar9 * fVar11 + fVar15 * fVar14 * fVar24;
            fVar27 = (fVar27 * fVar15 * fVar14 - fVar9 * fVar11 * fVar24) * 2.0;
            auVar23 = ZEXT416((uint)(0.0 - (fVar10 * fVar27 + fVar28 * fVar13 * 2.0))) &
                      (undefined  [16])0xffffffffffffffff;
            auVar23 = CONCAT412(SUB164(auVar23 >> 0x60,0) - 0.0,
                                CONCAT48(SUB164(auVar23 >> 0x40,0) -
                                         ((1.0 - fVar10 * fVar10 * 2.0) - fVar13 * fVar13 * 2.0),
                                         CONCAT44(0.0 - (fVar13 * fVar27 - fVar28 * fVar10 * 2.0),
                                                  SUB164(auVar23,0))));
        }
    }
    param_1[1] = CONCAT412(*(float *)(param_1[1] + 0xc) + (fStack380 - *(float *)(*param_1 + 0xc)),
                           CONCAT48(*(float *)(param_1[1] + 8) +
                                    (fStack384 - *(float *)(*param_1 + 8)),
                                    CONCAT44(*(float *)(param_1[1] + 4) +
                                             (local_188._4_4_ - *(float *)(*param_1 + 4)),
                                             *(float *)param_1[1] +
                                             (local_188._0_4_ - *(float *)*param_1))));
    *(float *)*param_1 = local_188._0_4_;
    *(float *)(*param_1 + 4) = local_188._4_4_;
    *(float *)(*param_1 + 8) = fStack384;
    *(float *)(*param_1 + 0xc) = fStack380;
    param_1[3] = CONCAT412(uStack236,CONCAT48(uStack240,CONCAT44(local_f8._4_4_,local_f8._0_4_)));
    *(undefined4 *)param_1[4] = local_108;
    *(undefined4 *)(param_1[4] + 4) = uStack260;
    *(undefined4 *)(param_1[4] + 8) = uStack256;
    *(undefined4 *)(param_1[4] + 0xc) = uStack252;
    param_1[5] = auVar23;
    *(float *)param_1[6] = fVar12;
    *(float *)(param_1[6] + 4) = fVar29;
    *(float *)(param_1[6] + 8) = fVar8;
    *(int *)(param_1[7] + 0xc) = iVar3;
    *(undefined4 *)param_1[7] = 1;
    return;
}



int FUN_140714be0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    puVar3 = (undefined8 *)FUN_14018b280(0x70);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *puVar3 = &PTR_FUN_140b73c28;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar5 = puVar3;
    }
    iVar2 = FUN_140782360(puVar5,param_2,param_3,param_4,param_5);
    if (iVar2 < 0) {
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
        return iVar2;
    }
    if (puVar5[5] == 0) {
        plVar4 = (longlong *)(param_1 + 0x30);
        lVar1 = *(longlong *)(param_1 + 0x30);
        while (lVar1 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x30);
            lVar1 = *plVar4;
        }
        puVar5[5] = plVar4;
        puVar5[6] = 0;
        *plVar4 = (longlong)puVar5;
    }
    return 0;
}



undefined8 FUN_140714ce0(longlong param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;

    if (((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(), iVar2 != 9)) ||
        (*(longlong *)(param_1 + 0x30) != 0)) {
        puVar4 = (undefined8 *)FUN_14018b280(0x38);
        puVar6 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            *puVar4 = &PTR_LAB_140b73c40;
            puVar6 = puVar4;
        }
        iVar2 = *param_3;
        *(undefined4 *)(puVar6 + 1) = param_2;
        puVar6[2] = 0;
        *(int *)((longlong)puVar6 + 0xc) = iVar2;
        if ((param_4 != (undefined4 *)0x0) && (*param_3 != 0)) {
            *param_4 = 1;
        }
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x30);
            lVar1 = *(longlong *)(param_1 + 0x30);
            while (lVar1 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar1 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 1;
    }
    return uVar3;
}



void FUN_140714dc0(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;

    bVar4 = false;
    bVar6 = false;
    lVar1 = *(longlong *)(param_1 + 0x30);
    bVar5 = bVar6;
    while ((lVar1 != 0 && (bVar5 = bVar4, -1 < param_3 - *(int *)(*(longlong *)(param_1 + 0x30) + 8)))
            ) {
        lVar1 = *(longlong *)(param_1 + 0x28);
        if (lVar1 != 0) {
            if ((*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) &&
                (lVar2 = *(longlong *)(lVar1 + 0x10),
                        lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10))) {
                **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
                if (*(longlong *)(lVar1 + 0x20) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                }
                *(undefined8 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 0x20) = 0;
                if ((*(int *)(lVar2 + 4) < 2) &&
                    ((*(undefined4 *)(lVar2 + 4) = 3, *(longlong *)(lVar2 + 0x78) != 0 ||
                                                      (*(longlong *)(lVar2 + 0x80) != 0)))) {
                    FUN_140195960(lVar2 + 8,0,lVar2 + 0x70,4);
                }
            }
            puVar3 = *(undefined8 **)(param_1 + 0x28);
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
            }
        }
        lVar1 = *(longlong *)(param_1 + 0x30);
        *(longlong *)(param_1 + 0x28) = lVar1;
        if (*(undefined8 **)(lVar1 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x30);
        }
        if (*(longlong *)(lVar1 + 0x30) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        }
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        bVar4 = true;
        bVar5 = true;
        bVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc) == 0;
        if (bVar6) {
            FUN_140714f30(param_1,param_2,param_3,1);
        }
        lVar1 = *(longlong *)(param_1 + 0x30);
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) && (bVar6 == false)) {
        FUN_140714f30(param_1,param_2,param_3,bVar5);
    }
    return;
}



void FUN_140714f30(undefined (*param_1) [16],longlong param_2,int param_3,int param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    fVar2 = *(float *)*param_1;
    fVar3 = *(float *)(*param_1 + 4);
    fVar4 = *(float *)(*param_1 + 8);
    fVar5 = *(float *)(*param_1 + 0xc);
    (**(code **)(**(longlong **)(param_1[2] + 8) + 0x10))();
    if (param_4 != 0) {
        if ((*(int *)(*(longlong *)(param_1[2] + 8) + 0xc) == 0) || (*(int *)(param_2 + 0xd54) != 0)) {
            param_1[1] = ZEXT816(0);
            *(undefined4 *)param_1[2] = 0;
            *(int *)(param_1[2] + 4) = param_3;
        }
        else {
            param_1[1] = CONCAT412(*(float *)(*param_1 + 0xc) - fVar5,
                                   CONCAT48(*(float *)(*param_1 + 8) - fVar4,
                                            CONCAT44(*(float *)(*param_1 + 4) - fVar3,
                                                     *(float *)*param_1 - fVar2)));
            *(undefined4 *)param_1[2] = 0x3f800000;
        }
    }
    if (0.0 < *(float *)param_1[2]) {
        fVar6 = *(float *)param_1[2] -
                (float)(ulonglong)(uint)(param_3 - *(int *)(param_1[2] + 4)) * 0.001 * 2.0;
        fVar1 = 0.0;
        if (0.0 <= fVar6) {
            fVar1 = fVar6;
        }
        *(float *)param_1[2] = fVar1;
        fVar2 = *(float *)param_1[1] * fVar1 + fVar2;
        fVar3 = *(float *)(param_1[1] + 4) * fVar1 + fVar3;
        fVar4 = *(float *)(param_1[1] + 8) * fVar1 + fVar4;
        fVar5 = *(float *)(param_1[1] + 0xc) * fVar1 + fVar5;
    }
    *param_1 = CONCAT412(fVar5,CONCAT48(fVar4,CONCAT44(fVar3,fVar2)));
    *(int *)(param_1[2] + 4) = param_3;
    return;
}



void FUN_140715020(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar4 = *(longlong **)(param_1 + 0x28);
    pplVar5 = (longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
        for (plVar3 = (longlong *)plVar3[6]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6])
        {
            plVar4 = plVar3;
        }
    }
    if (((*(int *)(param_3 + 8) == 0) || (plVar4 == (longlong *)0x0)) ||
        (iVar2 = (**(code **)(*plVar4 + 8))(), iVar2 != 10)) {
        plVar3 = (longlong *)FUN_14018b280();
        plVar4 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73c58;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = plVar3;
        }
        uVar1 = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(plVar4 + 1) = param_2;
        *(undefined4 *)((longlong)plVar4 + 0xc) = uVar1;
        plVar4[2] = 0;
        if (plVar4[5] == 0) {
            plVar3 = *pplVar5;
            while (plVar3 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar3 = *pplVar5;
            }
            plVar4[5] = (longlong)pplVar5;
            plVar4[6] = 0;
            *pplVar5 = plVar4;
        }
    }
    local_18 = FUN_1401c9770(param_3);
    local_14 = FUN_1401c9770(param_3 + 2);
    local_10 = FUN_1401c9770(param_3 + 4);
    FUN_1407834b0(plVar4 + 7,param_2,&local_18);
    if ((param_4 != (undefined4 *)0x0) && (*(int *)(param_3 + 8) != 0)) {
        *param_4 = 1;
    }
    return;
}



int FUN_140715170(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    puVar3 = (undefined8 *)FUN_14018b280(0x70);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *puVar3 = &PTR_FUN_140b73c70;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar5 = puVar3;
    }
    iVar2 = FUN_140782360(puVar5,param_2,param_3,param_4,param_5);
    if (iVar2 < 0) {
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
        return iVar2;
    }
    if (puVar5[5] == 0) {
        plVar4 = (longlong *)(param_1 + 0x30);
        lVar1 = *(longlong *)(param_1 + 0x30);
        while (lVar1 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x30);
            lVar1 = *plVar4;
        }
        puVar5[5] = plVar4;
        puVar5[6] = 0;
        *plVar4 = (longlong)puVar5;
    }
    return 0;
}



undefined8 FUN_140715270(longlong param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;

    if (((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(), iVar2 != 0xc)) ||
        (*(longlong *)(param_1 + 0x30) != 0)) {
        puVar4 = (undefined8 *)FUN_14018b280(0x38);
        puVar6 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            *puVar4 = &PTR_LAB_140b73c88;
            puVar6 = puVar4;
        }
        iVar2 = *param_3;
        *(undefined4 *)(puVar6 + 1) = param_2;
        puVar6[2] = 0;
        *(int *)((longlong)puVar6 + 0xc) = iVar2;
        if ((param_4 != (undefined4 *)0x0) && (*param_3 != 0)) {
            *param_4 = 1;
        }
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x30);
            lVar1 = *(longlong *)(param_1 + 0x30);
            while (lVar1 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar1 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 1;
    }
    return uVar3;
}



void FUN_140715350(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;

    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar4 = *(longlong **)(param_1 + 0x28);
    pplVar5 = (longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
        for (plVar3 = (longlong *)plVar3[6]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6])
        {
            plVar4 = plVar3;
        }
    }
    if (((*(int *)(param_3 + 0xc) == 0) || (plVar4 == (longlong *)0x0)) ||
        (iVar2 = (**(code **)(*plVar4 + 8))(), iVar2 != 0xd)) {
        plVar3 = (longlong *)FUN_14018b280();
        plVar4 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73bf8;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = plVar3;
        }
        uVar1 = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(plVar4 + 1) = param_2;
        *(undefined4 *)((longlong)plVar4 + 0xc) = uVar1;
        plVar4[2] = 0;
        if (plVar4[5] == 0) {
            plVar3 = *pplVar5;
            while (plVar3 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar3 = *pplVar5;
            }
            plVar4[5] = (longlong)pplVar5;
            plVar4[6] = 0;
            *pplVar5 = plVar4;
        }
    }
    FUN_140785050(plVar4 + 7,param_2,param_3);
    if ((param_4 != (undefined4 *)0x0) && (*(int *)(param_3 + 0xc) != 0)) {
        *param_4 = 1;
    }
    return;
}



int FUN_140715470(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    puVar3 = (undefined8 *)FUN_14018b280(0x70);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *puVar3 = &PTR_FUN_140b73c10;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar5 = puVar3;
    }
    iVar2 = FUN_1407824a0(puVar5,param_2,param_3,param_4,param_5);
    if (iVar2 < 0) {
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
        return iVar2;
    }
    if (puVar5[5] == 0) {
        plVar4 = (longlong *)(param_1 + 0x30);
        lVar1 = *(longlong *)(param_1 + 0x30);
        while (lVar1 != 0) {
            plVar4 = (longlong *)(*plVar4 + 0x30);
            lVar1 = *plVar4;
        }
        puVar5[5] = plVar4;
        puVar5[6] = 0;
        *plVar4 = (longlong)puVar5;
    }
    return 0;
}



int FUN_140715570(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;

    puVar3 = (undefined8 *)FUN_14018b280(0x58);
    puVar5 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *puVar3 = &PTR_FUN_140b77d38;
        puVar5 = puVar3;
    }
    iVar2 = FUN_1407825e0(puVar5,param_2,param_3,param_4,param_5);
    if (iVar2 < 0) {
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
    }
    else {
        if (puVar5[5] == 0) {
            plVar4 = (longlong *)(param_1 + 0x30);
            lVar1 = *(longlong *)(param_1 + 0x30);
            while (lVar1 != 0) {
                plVar4 = (longlong *)(*plVar4 + 0x30);
                lVar1 = *plVar4;
            }
            puVar5[5] = plVar4;
            puVar5[6] = 0;
            *plVar4 = (longlong)puVar5;
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_1407159b0(longlong param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;

    if (((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(), iVar2 != 0x14)) ||
        (*(longlong *)(param_1 + 0x30) != 0)) {
        puVar4 = (undefined8 *)FUN_14018b280(0x38);
        puVar6 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            *puVar4 = &PTR_LAB_140b73be0;
            puVar6 = puVar4;
        }
        iVar2 = *param_3;
        *(undefined4 *)(puVar6 + 1) = param_2;
        puVar6[2] = 0;
        *(int *)((longlong)puVar6 + 0xc) = iVar2;
        if ((param_4 != (undefined4 *)0x0) && (*param_3 != 0)) {
            *param_4 = 1;
        }
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x30);
            lVar1 = *(longlong *)(param_1 + 0x30);
            while (lVar1 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar1 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 1;
    }
    return uVar3;
}



void FUN_140715a90(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;

    bVar4 = false;
    bVar6 = false;
    lVar1 = *(longlong *)(param_1 + 0x30);
    bVar5 = bVar6;
    while ((lVar1 != 0 && (bVar5 = bVar4, -1 < param_3 - *(int *)(*(longlong *)(param_1 + 0x30) + 8)))
            ) {
        lVar1 = *(longlong *)(param_1 + 0x28);
        if (lVar1 != 0) {
            if ((*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) &&
                (lVar2 = *(longlong *)(lVar1 + 0x10),
                        lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10))) {
                **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
                if (*(longlong *)(lVar1 + 0x20) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                }
                *(undefined8 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 0x20) = 0;
                if ((*(int *)(lVar2 + 4) < 2) &&
                    ((*(undefined4 *)(lVar2 + 4) = 3, *(longlong *)(lVar2 + 0x78) != 0 ||
                                                      (*(longlong *)(lVar2 + 0x80) != 0)))) {
                    FUN_140195960(lVar2 + 8,0,lVar2 + 0x70,4);
                }
            }
            puVar3 = *(undefined8 **)(param_1 + 0x28);
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
            }
        }
        lVar1 = *(longlong *)(param_1 + 0x30);
        *(longlong *)(param_1 + 0x28) = lVar1;
        if (*(undefined8 **)(lVar1 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x30);
        }
        if (*(longlong *)(lVar1 + 0x30) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        }
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        bVar4 = true;
        bVar5 = true;
        bVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc) == 0;
        if (bVar6) {
            FUN_140715c00(param_1,param_2,param_3,1);
        }
        lVar1 = *(longlong *)(param_1 + 0x30);
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) && (bVar6 == false)) {
        FUN_140715c00(param_1,param_2,param_3,bVar5);
    }
    return;
}



void FUN_140715c00(float *param_1,longlong param_2,float param_3,int param_4)

{
    uint uVar1;
    ulonglong uVar2;
    int iVar3;
    float fVar4;
    undefined extraout_XMM0 [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    fVar8 = *param_1;
    fVar10 = param_1[1];
    fVar5 = param_1[2];
    (**(code **)(**(longlong **)(param_1 + 10) + 0x10))();
    if (param_4 != 0) {
        uVar2 = *(ulonglong *)(param_1 + 10);
        if ((*(int *)(uVar2 + 0xc) == 0) || (*(int *)(param_2 + 0xd54) != 0)) {
            *(undefined (*) [16])(param_1 + 4) = extraout_XMM0 & (undefined  [16])0x0;
            param_1[8] = 0.0;
            param_1[9] = param_3;
        }
        else {
            fVar4 = param_1[1] - fVar10;
            fVar7 = ((param_1[2] -
                      SUB164(ZEXT1216(CONCAT48(fVar5,SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT812(0) &
                                                                                      (undefined  [12])
                                                                                              0xffffffffffffffff)
                              << 0x20) >> 0x40,0),fVar8),0)
                              << 0x20)) >> 0x40,0)) + 3.141593) * 0.1591549;
            if (1.570796 <= fVar4) {
                fVar4 = 1.570796;
            }
            fVar9 = -1.570796;
            if (-1.570796 <= fVar4) {
                fVar9 = fVar4;
            }
            fVar6 = ((*param_1 - fVar8) + 3.141593) * 0.1591549;
            iVar3 = (int)fVar6;
            fVar4 = fVar6;
            if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
                uVar1 = movmskps((int)uVar2,ZEXT816(CONCAT44(fVar6,fVar6)));
                uVar2 = (ulonglong)(uVar1 & 1);
                fVar4 = (float)(iVar3 - (uVar1 & 1));
            }
            iVar3 = (int)fVar7;
            fVar6 = fVar7;
            if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar7)) {
                uVar1 = movmskps((int)uVar2,ZEXT816(CONCAT44(fVar7,fVar7)));
                fVar6 = (float)(iVar3 - (uVar1 & 1));
            }
            fVar7 = (fVar7 - fVar6) * 6.283185 - 3.141593;
            *(undefined (*) [16])(param_1 + 4) =
                    CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar7,CONCAT44(fVar7,fVar9))) >> 0x40,0),
                             CONCAT44((fVar6 - fVar4) * 6.283185 - 3.141593,fVar9)) &
                    (undefined  [16])0xffffffffffffffff;
            param_1[8] = 1.0;
        }
    }
    if (0.0 < param_1[8]) {
        uVar1 = (int)param_3 - (int)param_1[9];
        fVar7 = param_1[8] - (float)(ulonglong)uVar1 * 0.001 * 2.0;
        fVar4 = 0.0;
        if (0.0 <= fVar7) {
            fVar4 = fVar7;
        }
        param_1[8] = fVar4;
        fVar7 = param_1[5] * fVar4;
        fVar9 = (fVar7 + fVar8 + 3.141593) * 0.1591549;
        iVar3 = (int)fVar9;
        fVar8 = fVar9;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar9)) {
            uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar9)))
                                                           >> 0x40,0),
                                            (ulonglong)(uint)fVar9 | CONCAT44(fVar7,fVar9) << 0x20));
            uVar1 = uVar1 & 1;
            fVar8 = (float)(iVar3 - uVar1);
        }
        fVar7 = param_1[4] * fVar4 + fVar10;
        if (1.570796 <= fVar7) {
            fVar7 = 1.570796;
        }
        fVar8 = (fVar9 - fVar8) * 6.283185 - 3.141593;
        fVar10 = -1.570796;
        if (-1.570796 <= fVar7) {
            fVar10 = fVar7;
        }
        fVar4 = (param_1[6] * fVar4 + fVar5 + 3.141593) * 0.1591549;
        iVar3 = (int)fVar4;
        fVar5 = fVar4;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar4)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar4,fVar4)));
            fVar5 = (float)(iVar3 - (uVar1 & 1));
        }
        fVar5 = (fVar4 - fVar5) * 6.283185 - 3.141593;
    }
    *param_1 = fVar8;
    param_1[1] = fVar10;
    param_1[2] = fVar5;
    param_1[9] = param_3;
    return;
}



void FUN_140715f60(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    undefined4 local_res8 [2];

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    pplVar5 = (longlong **)(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
        for (plVar3 = (longlong *)plVar3[6]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6])
        {
            plVar4 = plVar3;
        }
    }
    if (((*(int *)(param_3 + 4) == 0) || (plVar4 == (longlong *)0x0)) ||
        (iVar2 = (**(code **)(*plVar4 + 8))(), iVar2 != 0x15)) {
        plVar3 = (longlong *)FUN_14018b280();
        plVar4 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73b50;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = plVar3;
        }
        uVar1 = *(undefined4 *)(param_3 + 4);
        *(undefined4 *)(plVar4 + 1) = param_2;
        *(undefined4 *)((longlong)plVar4 + 0xc) = uVar1;
        plVar4[2] = 0;
        if (plVar4[5] == 0) {
            plVar3 = *pplVar5;
            while (plVar3 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar3 = *pplVar5;
            }
            plVar4[5] = (longlong)pplVar5;
            plVar4[6] = 0;
            *pplVar5 = plVar4;
        }
    }
    local_res8[0] = FUN_1401c9770(param_3);
    FUN_140785ed0(plVar4 + 7,param_2,local_res8);
    if ((param_4 != (undefined4 *)0x0) && (*(int *)(param_3 + 4) != 0)) {
        *param_4 = 1;
    }
    return;
}



void FUN_140716180(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;

    bVar4 = false;
    bVar6 = false;
    lVar1 = *(longlong *)(param_1 + 0x18);
    bVar5 = bVar6;
    while ((lVar1 != 0 && (bVar5 = bVar4, -1 < param_3 - *(int *)(*(longlong *)(param_1 + 0x18) + 8)))
            ) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        if (lVar1 != 0) {
            if ((*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) &&
                (lVar2 = *(longlong *)(lVar1 + 0x10),
                        lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10))) {
                **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
                if (*(longlong *)(lVar1 + 0x20) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                }
                *(undefined8 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 0x20) = 0;
                if ((*(int *)(lVar2 + 4) < 2) &&
                    ((*(undefined4 *)(lVar2 + 4) = 3, *(longlong *)(lVar2 + 0x78) != 0 ||
                                                      (*(longlong *)(lVar2 + 0x80) != 0)))) {
                    FUN_140195960(lVar2 + 8,0,lVar2 + 0x70,4);
                }
            }
            puVar3 = *(undefined8 **)(param_1 + 0x10);
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
            }
        }
        lVar1 = *(longlong *)(param_1 + 0x18);
        *(longlong *)(param_1 + 0x10) = lVar1;
        if (*(undefined8 **)(lVar1 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x30);
        }
        if (*(longlong *)(lVar1 + 0x30) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        }
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        bVar4 = true;
        bVar5 = true;
        bVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xc) == 0;
        if (bVar6) {
            FUN_1407162f0(param_1,param_2,param_3,1);
        }
        lVar1 = *(longlong *)(param_1 + 0x18);
    }
    if ((*(longlong *)(param_1 + 0x10) != 0) && (bVar6 == false)) {
        FUN_1407162f0(param_1,param_2,param_3,bVar5);
    }
    return;
}



void FUN_1407162f0(float *param_1,longlong param_2,float param_3,int param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;

    fVar2 = *param_1;
    (**(code **)(**(longlong **)(param_1 + 4) + 0x10))();
    if (param_4 != 0) {
        if ((*(int *)(*(longlong *)(param_1 + 4) + 0xc) == 0) || (*(int *)(param_2 + 0xd54) != 0)) {
            param_1[3] = param_3;
            *(undefined8 *)(param_1 + 1) = 0;
        }
        else {
            param_1[2] = 1.0;
            param_1[1] = *param_1 - fVar2;
        }
    }
    if (0.0 < param_1[2]) {
        fVar3 = param_1[2] - (float)(ulonglong)(uint)((int)param_3 - (int)param_1[3]) * 0.001 * 2.0;
        fVar1 = 0.0;
        if (0.0 <= fVar3) {
            fVar1 = fVar3;
        }
        param_1[2] = fVar1;
        fVar2 = fVar2 + fVar1 * param_1[1];
    }
    param_1[3] = param_3;
    *param_1 = fVar2;
    return;
}



undefined8 FUN_1407163d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;

    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar3 = *(longlong **)(param_1 + 8);
    pplVar5 = (longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
        plVar3 = plVar4;
        for (plVar4 = (longlong *)plVar4[6]; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6])
        {
            plVar3 = plVar4;
        }
    }
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 8))(plVar3), iVar2 != 0x17)) {
        plVar3 = (longlong *)FUN_14018b280(0x60);
        plVar4 = plVar3;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73b80;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = (longlong *)0x0;
        }
        *(undefined4 *)(plVar3 + 1) = param_2;
        *(int *)((longlong)plVar3 + 0xc) = (int)plVar4;
        plVar3[2] = (longlong)plVar4;
        if (plVar3[5] == 0) {
            plVar1 = *pplVar5;
            while (plVar1 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar1 = *pplVar5;
            }
            plVar3[5] = (longlong)pplVar5;
            plVar3[6] = (longlong)plVar4;
            *pplVar5 = plVar3;
        }
    }
    FUN_140783300(plVar3 + 7,param_2,param_3);
    return 0;
}



int FUN_1407164d0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;

    puVar4 = (undefined8 *)FUN_14018b280(0x70);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        *puVar4 = &PTR_FUN_140b73ad8;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar6 = puVar4;
    }
    *(undefined4 *)(puVar6 + 1) = param_2;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[2] = param_5;
    if ((param_5 != 0) && (plVar5 = (longlong *)(param_5 + 0x90), puVar6[3] == 0)) {
        puVar6[3] = plVar5;
        plVar1 = puVar6 + 4;
        *plVar1 = *plVar5;
        *plVar5 = (longlong)puVar6;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    iVar3 = FUN_140786b60(puVar6 + 7,*param_3,*(undefined8 *)(param_3 + 2),
                          *(undefined8 *)(param_3 + 4));
    if (iVar3 < 0) {
        (**(code **)*puVar6)(puVar6,1);
    }
    else {
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x10);
            lVar2 = *(longlong *)(param_1 + 0x10);
            while (lVar2 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar2 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        iVar3 = 0;
    }
    return iVar3;
}



undefined8 FUN_140716610(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    puVar2 = (undefined8 *)FUN_14018b280(0x40);
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        *puVar2 = &PTR_LAB_140b73af0;
        puVar4 = puVar2;
    }
    *(undefined4 *)(puVar4 + 1) = param_2;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 7) = *param_3;
    if (puVar4[5] == 0) {
        plVar3 = (longlong *)(param_1 + 0x10);
        lVar1 = *(longlong *)(param_1 + 0x10);
        while (lVar1 != 0) {
            plVar3 = (longlong *)(*plVar3 + 0x30);
            lVar1 = *plVar3;
        }
        puVar4[5] = plVar3;
        puVar4[6] = 0;
        *plVar3 = (longlong)puVar4;
    }
    return 0;
}



undefined8 FUN_1407166b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;

    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar3 = *(longlong **)(param_1 + 8);
    pplVar5 = (longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
        plVar3 = plVar4;
        for (plVar4 = (longlong *)plVar4[6]; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6])
        {
            plVar3 = plVar4;
        }
    }
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 8))(plVar3), iVar2 != 0x1a)) {
        plVar3 = (longlong *)FUN_14018b280(0x60);
        plVar4 = plVar3;
        if (plVar3 != (longlong *)0x0) {
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *plVar3 = (longlong)&PTR_FUN_140b73b08;
            plVar3[7] = 0;
            *(undefined4 *)(plVar3 + 8) = 0;
            plVar3[9] = 0;
            plVar3[10] = 0;
            plVar4 = (longlong *)0x0;
        }
        *(undefined4 *)(plVar3 + 1) = param_2;
        *(int *)((longlong)plVar3 + 0xc) = (int)plVar4;
        plVar3[2] = (longlong)plVar4;
        if (plVar3[5] == 0) {
            plVar1 = *pplVar5;
            while (plVar1 != (longlong *)0x0) {
                pplVar5 = (longlong **)(*pplVar5 + 6);
                plVar1 = *pplVar5;
            }
            plVar3[5] = (longlong)pplVar5;
            plVar3[6] = (longlong)plVar4;
            *pplVar5 = plVar3;
        }
    }
    FUN_140783300(plVar3 + 7,param_2,param_3);
    return 0;
}



int FUN_1407167b0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;

    puVar4 = (undefined8 *)FUN_14018b280(0x70);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        *puVar4 = &PTR_FUN_140b73b20;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar6 = puVar4;
    }
    *(undefined4 *)(puVar6 + 1) = param_2;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[2] = param_5;
    if ((param_5 != 0) && (plVar5 = (longlong *)(param_5 + 0x90), puVar6[3] == 0)) {
        puVar6[3] = plVar5;
        plVar1 = puVar6 + 4;
        *plVar1 = *plVar5;
        *plVar5 = (longlong)puVar6;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    iVar3 = FUN_140786b60(puVar6 + 7,*param_3,*(undefined8 *)(param_3 + 2),
                          *(undefined8 *)(param_3 + 4));
    if (iVar3 < 0) {
        (**(code **)*puVar6)(puVar6,1);
    }
    else {
        if (puVar6[5] == 0) {
            plVar5 = (longlong *)(param_1 + 0x10);
            lVar2 = *(longlong *)(param_1 + 0x10);
            while (lVar2 != 0) {
                plVar5 = (longlong *)(*plVar5 + 0x30);
                lVar2 = *plVar5;
            }
            puVar6[5] = plVar5;
            puVar6[6] = 0;
            *plVar5 = (longlong)puVar6;
        }
        iVar3 = 0;
    }
    return iVar3;
}



undefined8 FUN_1407168f0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    puVar2 = (undefined8 *)FUN_14018b280(0x38);
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        *puVar2 = &PTR_LAB_140b73b38;
        puVar4 = puVar2;
    }
    *(undefined4 *)(puVar4 + 1) = param_2;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[2] = 0;
    if (puVar4[5] == 0) {
        plVar3 = (longlong *)(param_1 + 0x10);
        lVar1 = *(longlong *)(param_1 + 0x10);
        while (lVar1 != 0) {
            plVar3 = (longlong *)(*plVar3 + 0x30);
            lVar1 = *plVar3;
        }
        puVar4[5] = plVar3;
        puVar4[6] = 0;
        *plVar3 = (longlong)puVar4;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140716980(undefined8 *param_1)

{
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;

    pcVar1 = DAT_140c63838;
    *param_1 = 0;
    if (pcVar1 == (code *)0x0) {
        if (_DAT_140c6546c == 0) {
            iVar3 = FUN_1401feec0();
            if (-1 < iVar3) {
                uVar2 = (**(code **)(*DAT_140c64d20 + 0x28))();
                goto LAB_1407169d1;
            }
        }
        uVar2 = 0;
    }
    else {
        uVar2 = (*pcVar1)(&PTR_u_Faction2_140a6a328,DAT_140c63858);
    }
    LAB_1407169d1:
    param_1[1] = 0;
    uVar4 = FUN_1401a40c0(uVar2);
    param_1[2] = uVar4;
    uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar4),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar4) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar5,0);
    param_1[3] = uVar5;
    FUN_1407e4830(uVar5,0,param_1[2] << 3);
    param_1[4] = &LAB_1400522d0;
    param_1[5] = &LAB_1400522e0;
    return param_1;
}



longlong FUN_140716a40(longlong param_1)

{
    undefined *puVar1;
    int iVar3;
    undefined *puVar2;

    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined *)((longlong)*(int *)(param_1 + -8) * 0x30 + 0x10 + param_1);
        do {
            puVar1 = &DAT_ffffffffffffffd0 + (longlong)puVar2;
            FUN_140008410(puVar1);
            *(undefined8 *)(puVar2 + -0x40) = 0;
            *(undefined8 *)(puVar2 + -0x38) = 0;
            FUN_140008410(puVar1);
            FUN_14018b900(*(undefined8 *)(puVar2 + -0x28),0);
            iVar3 = iVar3 + -1;
            puVar2 = puVar1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140716ac0(ulonglong param_1)

{
    ulonglong *puVar1;
    int **ppiVar2;
    uint **ppuVar3;
    uint uVar4;
    uint *puVar5;
    undefined *puVar6;
    uint *puVar7;
    ulonglong *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong *plVar11;
    int iVar12;
    uint uVar13;
    int **ppiVar14;
    int **ppiVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    longlong lVar18;
    ulonglong local_res8;
    ulonglong local_res10;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    ppuVar3 = DAT_140c665d0;
    uVar9 = 0;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        uVar16 = uVar9;
        if (_DAT_140c6546c != 0) goto LAB_140716b2b;
        iVar12 = FUN_1401feec0();
        if (iVar12 < 0) {
            uVar16 = 0;
            goto LAB_140716b2b;
        }
        uVar4 = (**(code **)(*DAT_140c64d20 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_Faction2_140a6a328,DAT_140c63858);
    }
    uVar16 = (ulonglong)uVar4;
    LAB_140716b2b:
    uVar4 = (uint)uVar16;
    puVar5 = (uint *)FUN_14018b280();
    if (puVar5 == (uint *)0x0) {
        puVar7 = (uint *)0x0;
    }
    else {
        iVar12 = uVar4 - 1;
        *puVar5 = uVar4;
        puVar7 = puVar5 + 2;
        if (-1 < iVar12) {
            plVar11 = (longlong *)(puVar5 + 8);
            do {
                plVar11[-3] = 0;
                plVar11[-2] = 0;
                puVar6 = (undefined *)FUN_14018b280();
                iVar12 = iVar12 + -1;
                plVar11[1] = 0;
                *plVar11 = (longlong)puVar6;
                *puVar6 = 0;
                *(undefined8 *)(*plVar11 + 8) = 0;
                *(longlong *)(*plVar11 + 0x10) = *plVar11;
                *(longlong *)(*plVar11 + 0x18) = *plVar11;
                plVar11 = plVar11 + 6;
            } while (-1 < iVar12);
        }
    }
    *ppuVar3 = puVar7;
    uVar17 = uVar9;
    if (uVar4 != 0) {
        do {
            puVar5 = *ppuVar3;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c6546c == 0) && (iVar12 = FUN_1401feec0(), -1 < iVar12)) {
                    puVar7 = (uint *)(**(code **)(*DAT_140c64d20 + 0x20))();
                    goto LAB_140716c2b;
                }
            }
            else {
                puVar7 = (uint *)(*DAT_140c63848)(&PTR_u_Faction2_140a6a328,uVar9,DAT_140c63858);
                LAB_140716c2b:
                if (puVar7 != (uint *)0x0) {
                    *(uint **)((longlong)puVar5 + uVar17) = puVar7;
                    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*puVar7;
                    if (ppuVar3[1] == ppuVar3[2]) {
                        FUN_1400290d0(ppuVar3 + 1);
                    }
                    local_res10 = (*(code *)ppuVar3[4])(&local_res8);
                    puVar7 = ppuVar3[3];
                    uVar10 = local_res10 % (ulonglong)ppuVar3[2];
                    puVar8 = (ulonglong *)FUN_14018b280();
                    if (puVar8 != (ulonglong *)0x0) {
                        puVar1 = *(ulonglong **)(puVar7 + uVar10 * 2);
                        *puVar8 = local_res10;
                        puVar8[1] = (ulonglong)puVar1;
                        *(uint *)(puVar8 + 2) = (uint)local_res8;
                        puVar8[3] = (ulonglong)(uint **)((longlong)puVar5 + uVar17);
                    }
                    *(ulonglong **)(puVar7 + uVar10 * 2) = puVar8;
                    ppuVar3[1] = (uint *)((longlong)ppuVar3[1] + 1);
                }
            }
            uVar13 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar13;
            uVar17 = uVar17 + 0x30;
        } while (uVar13 < uVar4);
        lVar18 = 0;
        if (uVar4 != 0) {
            LAB_140716cc0:
            ppiVar14 = (int **)((longlong)*ppuVar3 + lVar18);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)(*ppiVar14)[1];
            if ((*ppiVar14)[1] != 0) {
                uVar9 = (*(code *)ppuVar3[4])();
                for (puVar8 = *(ulonglong **)(ppuVar3[3] + (uVar9 % (ulonglong)ppuVar3[2]) * 2);
                     puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                    if ((uVar9 == *puVar8) && (iVar12 = (*(code *)ppuVar3[5])(), iVar12 != 0)) {
                        if ((int **)(puVar8 + 3) != (int **)0x0) {
                            ppiVar2 = (int **)puVar8[3];
                            ppiVar15 = ppiVar2;
                            if (ppiVar2 == (int **)0x0) goto LAB_140716d4a;
                            goto LAB_140716d30;
                        }
                        break;
                    }
                }
            }
            goto LAB_140716e09;
        }
    }
    LAB_140716e16:
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64064 == 0) {
            iVar12 = FUN_1401ff300();
            if (iVar12 < 0) {
                uVar4 = 0;
            }
            else {
                uVar4 = (**(code **)(*DAT_140c64820 + 0x28))();
            }
        }
        else {
            uVar4 = 0;
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_Faction2Relationship_140a6a360);
    }
    uVar13 = 0;
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar4;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64064 == 0) {
                    iVar12 = FUN_1401ff300();
                    if (iVar12 < 0) {
                        lVar18 = 0;
                    }
                    else {
                        lVar18 = (**(code **)(*DAT_140c64820 + 0x20))();
                    }
                }
                else {
                    lVar18 = 0;
                }
            }
            else {
                lVar18 = (*DAT_140c63848)(&PTR_u_Faction2Relationship_140a6a360,uVar13,DAT_140c63858);
            }
            uVar9 = (*(code *)ppuVar3[4])(lVar18 + 4);
            for (puVar8 = *(ulonglong **)(ppuVar3[3] + (uVar9 % (ulonglong)ppuVar3[2]) * 2);
                 puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                if ((uVar9 == *puVar8) && (iVar12 = (*(code *)ppuVar3[5])(lVar18 + 4), iVar12 != 0)) {
                    if (puVar8 + 3 != (ulonglong *)0x0) {
                        local_res10 = puVar8[3];
                        uVar9 = (*(code *)ppuVar3[4])(lVar18 + 8);
                        puVar8 = *(ulonglong **)(ppuVar3[3] + (uVar9 % (ulonglong)ppuVar3[2]) * 2);
                        goto joined_r0x000140716f28;
                    }
                    break;
                }
            }
            LAB_140716f79:
            uVar13 = uVar13 + 1;
        } while (uVar13 < (uint)local_res8);
    }
    return 0;
    while (**ppiVar15 != **ppiVar14) {
        LAB_140716d30:
        ppiVar15 = (int **)ppiVar15[1];
        if (ppiVar15 == (int **)0x0) goto LAB_140716d4a;
    }
    LAB_140716e09:
    lVar18 = lVar18 + 0x30;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_140716e16;
    goto LAB_140716cc0;
    LAB_140716d4a:
    if (*ppiVar14 == (int *)0x0) {
        iVar12 = FUN_1407174a0();
        if (iVar12 < 0) {
            local_78 = &PTR_LAB_140b5e648;
            local_70 = 0;
            local_68 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_78);
            local_58 = local_78;
            local_50 = local_70;
            local_res10 = 0x141e40360;
            local_48 = local_68;
            iVar12 = FUN_140196f30(&DAT_140c8b104,0x28,&local_res10,**ppiVar14,**ppiVar2,&local_58);
            local_78 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_68);
            if (iVar12 != 0) {
                DebugBreak();
            }
        }
    }
    else {
        ppiVar14[1] = (int *)ppiVar2;
    }
    goto LAB_140716e09;
    joined_r0x000140716f28:
    if (puVar8 == (ulonglong *)0x0) goto LAB_140716f79;
    if ((uVar9 == *puVar8) && (iVar12 = (*(code *)ppuVar3[5])(lVar18 + 8), iVar12 != 0)) {
        if (puVar8 + 3 != (ulonglong *)0x0) {
            uVar9 = puVar8[3];
            FUN_1407171f0(local_res10);
            if (*(int *)(lVar18 + 4) != *(int *)(lVar18 + 8)) {
                FUN_1407171f0(uVar9);
            }
        }
        goto LAB_140716f79;
    }
    puVar8 = (ulonglong *)puVar8[1];
    goto joined_r0x000140716f28;
}



int FUN_140716fa0(undefined8 param_1,undefined4 param_2,longlong **param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined8 local_res8;
    undefined4 local_res10 [2];
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    lVar2 = DAT_140c665d0;
    local_res8 = param_1;
    local_res10[0] = param_2;
    if (param_3 == (longlong **)0x0) {
        local_58 = &PTR_LAB_140b5e648;
        local_50 = 0;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_58);
        local_38 = local_58;
        local_res8 = 0x141e40320;
        local_28 = local_48;
        local_30 = local_50;
        iVar3 = FUN_140196f30(&DAT_140c8b108,0x28,&local_res8,&local_38);
        local_58 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_48);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    else {
        uVar4 = (**(code **)(DAT_140c665d0 + 0x20))(local_res10);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x18) + (uVar4 % *(ulonglong *)(lVar2 + 0x10)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar4 == *puVar1) &&
                (iVar3 = (**(code **)(lVar2 + 0x28))(local_res10,puVar1 + 2), iVar3 != 0)) {
                if (puVar1 + 3 == (ulonglong *)0x0) {
                    return -0x7fffbffb;
                }
                uVar4 = puVar1[3];
                plVar5 = (longlong *)FUN_14018b280(0x28);
                plVar6 = (longlong *)0x0;
                if (plVar5 != (longlong *)0x0) {
                    *plVar5 = (longlong)&PTR_LAB_140b77da0;
                    *(undefined4 *)(plVar5 + 1) = 1;
                    plVar5[2] = 0;
                    plVar5[3] = 0;
                    plVar5[4] = 0;
                    plVar6 = plVar5;
                }
                iVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,uVar4);
                if (iVar3 < 0) {
                    *plVar6 = (longlong)&PTR_LAB_140b77da0;
                    plVar6[2] = 0;
                    FUN_14018b900(plVar6,0);
                }
                else {
                    *param_3 = plVar6;
                    iVar3 = 0;
                }
                return iVar3;
            }
        }
    }
    return -0x7fffbffb;
}



ulonglong FUN_140717160(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c665d0;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c665d0 + 0x20))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x18) + (uVar4 % *(ulonglong *)(lVar2 + 0x10)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x28))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_1407171f0(uint **param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    uint *puVar3;
    int iVar4;
    uint *puVar5;
    uint *puVar6;
    uint *local_res10;
    undefined **local_48;
    uint *local_40;
    LPVOID local_38;
    undefined **local_28;
    uint *local_20;
    LPVOID local_18;

    if (param_2 == (uint *)0x0) {
        local_28 = &PTR_LAB_140b5e648;
        local_20 = param_2;
        local_18 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_28);
        local_48 = local_28;
        local_res10 = (uint *)0x141e40498;
        local_38 = local_18;
        local_40 = local_20;
        iVar4 = FUN_140196f30(&DAT_140c8b11c,0x28,&local_res10,&local_48);
    }
    else {
        local_20 = *param_1;
        if (local_20 != (uint *)0x0) {
            uVar1 = *local_20;
            uVar2 = param_2[1];
            if (uVar1 == uVar2) {
                puVar3 = param_1[3];
                local_res10 = puVar3;
                if (*(uint **)(puVar3 + 2) != (uint *)0x0) {
                    puVar5 = *(uint **)(puVar3 + 2);
                    do {
                        if (puVar5[8] < param_2[2]) {
                            puVar6 = *(uint **)(puVar5 + 6);
                        }
                        else {
                            puVar6 = *(uint **)(puVar5 + 4);
                            local_res10 = puVar5;
                        }
                        puVar5 = puVar6;
                    } while (puVar6 != (uint *)0x0);
                }
                if ((local_res10 == puVar3) || (param_2[2] < local_res10[8])) {
                    local_res10 = puVar3;
                }
                if (local_res10 != param_1[3]) {
                    return 0;
                }
                local_48 = (undefined **)((ulonglong)local_48 & 0xffffffff00000000 | (ulonglong)param_2[2]);
            }
            else {
                if (uVar1 != param_2[2]) {
                    local_20 = (uint *)0x0;
                    local_28 = &PTR_LAB_140b5e648;
                    local_18 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_28);
                    local_48 = local_28;
                    local_res10 = (uint *)0x141e40520;
                    local_40 = local_20;
                    local_38 = local_18;
                    iVar4 = FUN_140196f30(&DAT_140c8b10c,0x28,&local_res10,uVar1,&local_48);
                    goto LAB_14071745f;
                }
                puVar3 = param_1[3];
                local_res10 = puVar3;
                puVar5 = *(uint **)(puVar3 + 2);
                while (puVar5 != (uint *)0x0) {
                    if (puVar5[8] < uVar2) {
                        puVar5 = *(uint **)(puVar5 + 6);
                    }
                    else {
                        local_res10 = puVar5;
                        puVar5 = *(uint **)(puVar5 + 4);
                    }
                }
                if ((local_res10 == puVar3) || (uVar2 < local_res10[8])) {
                    local_res10 = puVar3;
                }
                if (local_res10 != param_1[3]) {
                    return 0;
                }
                local_48 = (undefined **)((ulonglong)local_48 & 0xffffffff00000000 | (ulonglong)uVar2);
            }
            local_40 = param_2;
            FUN_140055f80(param_1 + 2,&local_28,&local_48);
            return 0;
        }
        local_28 = &PTR_LAB_140b5e648;
        local_18 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_28);
        local_48 = local_28;
        local_res10 = (uint *)0x141e40580;
        local_38 = local_18;
        local_40 = local_20;
        iVar4 = FUN_140196f30(&DAT_140c8b120,0x28,&local_res10,&local_48);
    }
    LAB_14071745f:
    local_28 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_18);
    if (iVar4 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined8 FUN_1407174a0(void)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res8 = 0x141e40450;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140196f30(&DAT_140c8b110,0x28,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined8 FUN_140717560(longlong *param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    longlong local_res8;
    longlong local_res18 [2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *param_1;
    while( true ) {
        if (lVar2 == 0) {
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res8 = 0x141e403d0;
            local_18 = local_38;
            local_20 = local_40;
            iVar4 = FUN_140196f30(&DAT_140c8b114,0x28,&local_res8,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar4 != 0) {
                DebugBreak();
            }
            return 0;
        }
        lVar2 = param_1[3];
        lVar3 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar3 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((lVar3 == lVar2) || (param_2 < *(uint *)(lVar3 + 0x20))) {
            local_res18[0] = lVar2;
            plVar5 = local_res18;
        }
        else {
            local_res8 = lVar3;
            plVar5 = &local_res8;
        }
        if (*plVar5 != lVar2) break;
        param_1 = (longlong *)param_1[1];
        if (param_1 == (longlong *)0x0) {
            return 0;
        }
        lVar2 = *param_1;
    }
    return *(undefined8 *)(*plVar5 + 0x28);
}



undefined8 FUN_1407176b0(int **param_1,int param_2)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    int *local_40;
    LPVOID local_38;
    undefined **local_28;
    int *local_20;
    LPVOID local_18;

    local_40 = *param_1;
    if (local_40 == (int *)0x0) {
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e40390;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8b118,0x28,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    if (*local_40 == param_2) {
        return 1;
    }
    if ((param_1[1] != (int *)0x0) && (iVar1 = FUN_1407176b0(), iVar1 != 0)) {
        return 1;
    }
    return 0;
}



void FUN_1407177b0(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    (**(code **)(*(longlong *)param_1[7] + 8))();
    lVar2 = *param_1;
    while (lVar2 != 0) {
        if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
            (***(code ***)(undefined8 *)*param_1)();
        }
        lVar2 = *param_1;
    }
    FUN_140717df0(param_1);
    FUN_140717fa0(param_1);
    lVar2 = param_1[7];
    if ((*(int *)(lVar2 + 0x154) != *(int *)(param_1 + 8)) ||
        ((*(longlong *)(*(longlong *)(lVar2 + 0x138) + 0x50) == 0 &&
          (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x138) + 0x70) + 0x18) != 8)))) {
        FUN_140540070(lVar2,*(int *)(param_1 + 8),0);
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        *(longlong *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(longlong *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((*(int *)(*(longlong *)(*(longlong *)(param_1[7] + 0x138) + 8) + 0x1c) != 0) &&
        (lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 8)), lVar2 != 0)) {
        for (lVar2 = *(longlong *)(lVar2 + 0x15b8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x408)) {
            uVar1 = (**(code **)(*(longlong *)param_1[7] + 8))();
            FUN_1404fedc0(lVar2,uVar1);
        }
    }
    if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
        (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) {
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        *(longlong *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(longlong *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if (param_1[1] != 0) {
        FUN_1401a4a00(param_1 + 1);
    }
    if (*param_1 != 0) {
        FUN_1401a4a00(param_1);
        return;
    }
    return;
}



undefined8 FUN_140717990(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
    longlong *plVar1;
    ushort uVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    short *psVar10;
    longlong *plVar11;
    uint uVar12;
    short *psVar13;
    undefined4 local_res18 [2];

    if ((param_3 == 0) || (param_4 == (longlong *)0x0)) {
        return 0x80004005;
    }
    (**(code **)(*param_4 + 8))(param_4);
    *(longlong **)(param_1 + 0x38) = param_4;
    *(uint *)(param_1 + 0x44) = (uint)*(byte *)(param_2 + 4);
    plVar11 = (longlong *)(param_3 + 0x15c8);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 8);
    *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 8);
    uVar2 = *(ushort *)(param_2 + 6);
    iVar3 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = (uint)uVar2;
    if (*(longlong *)(param_1 + 0x10) == 0) {
        *(longlong **)(param_1 + 0x10) = plVar11;
        plVar1 = (longlong *)(param_1 + 0x18);
        *plVar1 = *plVar11;
        *plVar11 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x10) = plVar1;
        }
    }
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
    if (*(longlong *)(param_1 + 0x20) == 0) {
        *(longlong **)(param_1 + 0x20) = plVar11;
        plVar1 = (longlong *)(param_1 + 0x28);
        *plVar1 = *plVar11;
        *plVar11 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x20) = plVar1;
        }
    }
    if (((*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138) + 8) + 0x1c) !=
          0) && (*(longlong *)(param_3 + 0x15b8) != 0)) &&
        (iVar5 = FUN_140540360(*(longlong *)(param_1 + 0x38),*(undefined4 *)(param_3 + 8)), iVar5 != 0)
            ) {
        for (lVar4 = *(longlong *)(param_3 + 0x15b8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x408))
        {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
            FUN_1404feca0(lVar4,uVar6);
        }
    }
    psVar10 = (short *)0x0;
    uVar6 = 0;
    if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
        (*(int *)(param_1 + 0x40) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) {
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    *(undefined4 *)(param_1 + 0x30) = DAT_140c636a8;
    psVar13 = psVar10;
    if (*(char *)(param_2 + 0xc) != '\0') {
        do {
            iVar5 = FUN_140718120(param_1);
            if (iVar5 < 0) {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
            }
            psVar13 = (short *)((longlong)psVar13 + 1);
        } while (psVar13 < (short *)(ulonglong)*(byte *)(param_2 + 0xc));
    }
    plVar11 = *(longlong **)(param_1 + 0x38);
    lVar4 = plVar11[0x27];
    uVar12 = *(uint *)(*(longlong *)(lVar4 + 0x70) + 0x10c);
    if ((uVar12 & 1) != 0) {
        return 0;
    }
    if (((uVar12 & 2) != 0) && (*(int *)(param_1 + 0x40) == *(int *)((longlong)plVar11 + 0x154))) {
        return 0;
    }
    if (((uVar12 & 4) != 0) && (*(int *)(param_1 + 0x40) == *(int *)(plVar11 + 0x2b))) {
        return 0;
    }
    if ((((uVar12 & 8) != 0) && (*(int *)(param_1 + 0x40) != *(int *)((longlong)plVar11 + 0x154))) &&
        (*(int *)(param_1 + 0x40) != *(int *)(plVar11 + 0x2b))) {
        return 0;
    }
    if ((*(longlong *)(lVar4 + 0x50) == 0) &&
        (*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48) == 0)) {
        return 0;
    }
    (**(code **)(*plVar11 + 8))();
    puVar7 = (undefined8 *)FUN_1404693c0();
    if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x60) = puVar7;
        (**(code **)*puVar7)();
        local_res18[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x5c);
        FUN_140003460(*(longlong *)(param_1 + 0x60) + 0x40,local_res18);
        FUN_140717f00(param_1,(uint)uVar2 - iVar3);
        return 0;
    }
    lVar8 = FUN_14018b280();
    psVar13 = psVar10;
    if (lVar8 != 0) {
        psVar13 = (short *)FUN_140453d90();
    }
    *(short **)(param_1 + 0x60) = psVar13;
    local_res18[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x5c);
    FUN_140003460(psVar13 + 0x20);
    uVar9 = FUN_1405645b0();
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38) = uVar9;
    psVar13 = *(short **)(*(longlong *)(param_1 + 0x60) + 0x38);
    if ((psVar13 == (short *)0x0) || (*psVar13 == 0)) {
        *(wchar_t **)(*(longlong *)(param_1 + 0x60) + 0x38) = L"UI_Temp_Quest";
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x1c) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x50) = **(undefined4 **)(lVar4 + 0x70);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x54) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x58) = *(undefined4 *)((longlong)param_4 + 0x154)
            ;
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x70) + 0xf8);
    uVar12 = 2 - ((*(uint *)(*(longlong *)(lVar4 + 0x70) + 0x10c) & 0x4000000) != 0);
    if (iVar3 == 0xe) {
        uVar12 = uVar12 | 0x40;
    }
    else if (iVar3 == 0x24) {
        uVar12 = uVar12 | 4;
    }
    else if (iVar3 == 0x25) {
        uVar12 = uVar12 | 8;
    }
    else if (iVar3 == 0x26) {
        uVar12 = uVar12 | 0x10;
    }
    else if (iVar3 == 0x27) {
        uVar12 = uVar12 | 0x20;
    }
    *(uint *)(*(longlong *)(param_1 + 0x60) + 0x14) = uVar12;
    FUN_1407180c0();
    if (*(int *)(param_1 + 0x40) == *(int *)(*(longlong *)(param_1 + 0x38) + 0x154)) {
        uVar6 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x24);
        psVar10 = (short *)FUN_14034bdd0();
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) goto LAB_140717d5b;
    }
    if (*(int *)(param_1 + 0x40) == *(int *)(*(longlong *)(param_1 + 0x38) + 0x158)) {
        uVar6 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x28);
        psVar10 = (short *)FUN_14034bdd0(*(longlong *)(param_1 + 0x38),uVar6);
    }
    LAB_140717d5b:
    if ((psVar10 == (short *)0x0) || (*psVar10 == 0)) {
        uVar6 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x2c);
    }
    plVar11 = (longlong *)(param_3 + 0x15f0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x18) = uVar6;
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(lVar4 + 0x28) == 0) {
        *(longlong **)(lVar4 + 0x28) = plVar11;
        plVar1 = (longlong *)(lVar4 + 0x30);
        *plVar1 = *plVar11;
        *plVar11 = lVar4;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x28) = plVar1;
        }
    }
    uVar9 = FUN_1405bbbb0();
    FUN_1405bbc70(uVar9,*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
    return 0;
}



undefined8 FUN_140717df0(longlong param_1,int param_2)

{
    int *piVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    int iVar7;

    lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
    if (lVar4 == 0) {
        return 0x80004005;
    }
    iVar7 = param_2 - *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = param_2;
    if ((*(longlong *)(param_1 + 0x60) == 0) && (param_2 != 0)) {
        uVar2 = *(undefined4 *)((longlong)*(longlong **)(param_1 + 0x38) + 0x154);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
        puVar5 = (undefined8 *)FUN_1404693c0(lVar4,uVar3,uVar2);
        *(undefined8 **)(param_1 + 0x60) = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5);
        }
    }
    if ((*(longlong *)(param_1 + 0x60) != 0) && (iVar7 != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x1c);
        *piVar1 = *piVar1 + iVar7;
        lVar4 = *(longlong *)(param_1 + 0x60);
        if (*(int *)(lVar4 + 0x1c) < 1) {
            lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
            if (lVar4 != 0) {
                uVar2 = *(undefined4 *)((longlong)*(longlong **)(param_1 + 0x38) + 0x154);
                uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
                FUN_1404694a0(lVar4,uVar3,uVar2);
            }
            FUN_140717fa0(param_1);
        }
        else {
            uVar6 = FUN_1405bbbb0();
            FUN_1405bc0d0(uVar6,*(undefined4 *)(param_1 + 0x40),lVar4);
        }
    }
    return 0;
}



void FUN_140717f00(longlong param_1,int param_2)

{
    int *piVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;

    if ((*(longlong *)(param_1 + 0x60) != 0) && (param_2 != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x1c);
        *piVar1 = *piVar1 + param_2;
        lVar5 = *(longlong *)(param_1 + 0x60);
        if (0 < *(int *)(lVar5 + 0x1c)) {
            uVar4 = FUN_1405bbbb0();
            FUN_1405bc0d0(uVar4,*(undefined4 *)(param_1 + 0x40),lVar5);
            return;
        }
        lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
        if (lVar5 != 0) {
            uVar2 = *(undefined4 *)((longlong)*(longlong **)(param_1 + 0x38) + 0x154);
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
            FUN_1404694a0(lVar5,uVar3,uVar2);
        }
        FUN_140717fa0(param_1);
    }
    return;
}



void FUN_140717fa0(longlong param_1)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = *(longlong *)(param_1 + 0x60);
    if (lVar3 != 0) {
        uVar4 = 0;
        if (*(ulonglong *)(lVar3 + 0x48) != 0) {
            piVar1 = *(int **)(lVar3 + 0x40);
            do {
                if (*piVar1 == *(int *)(*(longlong *)(param_1 + 0x38) + 0x5c)) {
                    FUN_1401c2f20((int **)(lVar3 + 0x40));
                    break;
                }
                uVar4 = uVar4 + 1;
                piVar1 = piVar1 + 1;
            } while (uVar4 < *(ulonglong *)(lVar3 + 0x48));
        }
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(lVar3 + 0x48) == 0) {
            if (*(undefined8 **)(lVar3 + 0x28) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar3 + 0x28) = *(undefined8 *)(lVar3 + 0x30);
            }
            if (*(longlong *)(lVar3 + 0x30) != 0) {
                *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x28) = *(undefined8 *)(lVar3 + 0x28);
            }
            lVar2 = DAT_140c65b88;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            lVar3 = DAT_140c65b88;
            if ((lVar2 == 0) && (lVar2 = FUN_14018b280(0x48,0), lVar3 = lVar2, lVar2 != 0)) {
                lVar2 = FUN_1405b92d0(lVar2);
                lVar3 = lVar2;
            }
            DAT_140c65b88 = lVar3;
            FUN_1405bbef0(lVar2,*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
        }
        else {
            lVar3 = FUN_140561c30(DAT_140c65b70,**(undefined4 **)(lVar3 + 0x40));
            if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
                do {
                    if (*(int *)(lVar3 + 0x40) == *(int *)(param_1 + 0x40)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x20) = *(undefined4 *)(lVar3 + 0x30);
                        break;
                    }
                    lVar3 = *(longlong *)(lVar3 + 0x28);
                } while (lVar3 != 0);
            }
        }
        if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
            *(undefined8 *)(param_1 + 0x60) = 0;
        }
    }
    return;
}



void FUN_1407180c0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;

    iVar3 = DAT_140c636a8;
    if (*(longlong *)(param_1 + 0x60) != 0) {
        *(int *)(param_1 + 0x30) = DAT_140c636a8;
        *(int *)(*(longlong *)(param_1 + 0x60) + 0x20) = iVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x24) = *(undefined4 *)(param_1 + 0x48);
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138) + 0x70);
        if ((*(int *)(lVar2 + 0x18) == 10) &&
            (uVar4 = (*(int *)(*(longlong *)(param_1 + 0x38) + 0x194) + *(int *)(lVar2 + 0x20)) - iVar3,
                    uVar4 != 0)) {
            uVar1 = *(uint *)(param_1 + 0x48);
            if ((uVar1 != 0xffffffff) && (uVar4 < uVar1)) {
                uVar4 = uVar1;
            }
            *(uint *)(*(longlong *)(param_1 + 0x60) + 0x24) = uVar4;
        }
    }
    return;
}



undefined8 FUN_140718120(longlong param_1,undefined4 *param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    uint uVar7;
    uint uVar8;
    undefined **local_res10;

    if (param_2 == (undefined4 *)0x0) {
        return 0x80004005;
    }
    lVar3 = FUN_1404e1c50(param_1,*param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
    if (lVar3 == 0) {
        return 0x80004005;
    }
    switch(*(undefined4 *)(lVar3 + 0x10)) {
        case 3:
            puVar6 = (undefined8 *)FUN_14018b280(0x150,0);
            if (puVar6 == (undefined8 *)0x0) {
                LAB_140718784:
                puVar6 = (undefined8 *)0x0;
            }
            else {
                FUN_1405d65a0(puVar6);
                *puVar6 = &PTR_LAB_140b73d40;
            }
            goto LAB_140718787;
        case 4:
            puVar6 = (undefined8 *)FUN_14018b280(0x158,0);
            if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                FUN_1405d65a0(puVar6);
                *puVar6 = &PTR_LAB_140b6e1f0;
                *(undefined4 *)((longlong)puVar6 + 0x154) = 0;
            }
            iVar2 = FUN_1405d86a0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        default:
            lVar5 = FUN_14018b280(0x150,0);
            if (lVar5 == 0) goto LAB_140718784;
            puVar6 = (undefined8 *)FUN_1405d65a0(lVar5);
            goto LAB_140718787;
        case 8:
        case 0xc:
        case 0x21:
        case 0x8a:
            puVar4 = (undefined8 *)FUN_14018b280(0x150,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_LAB_140b73de0;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405d77a0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 10:
        case 0x76:
            puVar4 = (undefined8 *)FUN_14018b280(0x150,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_LAB_140b73d90;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405d77a0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x12:
            puVar4 = (undefined8 *)FUN_14018b280(0x160,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_FUN_140b6e1a0;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405d8bd0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x24:
            puVar4 = (undefined8 *)FUN_14018b280(0x150,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_FUN_140b6e000;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405da180(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x37:
            puVar4 = (undefined8 *)FUN_14018b280(0x158,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                puVar6 = puVar4;
                FUN_1405d65a0();
                *puVar6 = &PTR_FUN_140b6e140;
                puVar6[0x2a] = &PTR_LAB_140b6e190;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405d6880(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            iVar2 = *(int *)((longlong)puVar6 + 0x5c);
            if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                 (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == iVar2)) ||
                ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
                  (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == iVar2)))) {
                local_res10 = &PTR_LAB_140b6df00;
                FUN_1405da6b0(iVar2,DAT_140c65b70,DAT_140c65898,(undefined4 *)puVar6[0x16],
                              *(undefined4 *)puVar6[0x16],&local_res10);
            }
            break;
        case 0x38:
            puVar4 = (undefined8 *)FUN_14018b280(0x150,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_FUN_140b6e050;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405d91f0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x40:
            puVar6 = (undefined8 *)FUN_14018b280(0x150,0);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140718784;
            FUN_1405d65a0(puVar6);
            *puVar6 = &PTR_FUN_140b6de60;
            goto LAB_140718787;
        case 0x49:
            puVar4 = (undefined8 *)FUN_14018b280(0x158,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_FUN_140b6e0a0;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405d9850(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x4b:
            puVar6 = (undefined8 *)FUN_14018b280(0x158,0);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140718784;
            FUN_1405d65a0(puVar6);
            *puVar6 = &PTR_FUN_140b6e0f0;
            *(undefined4 *)(puVar6 + 0x2a) = 0;
            goto LAB_140718787;
        case 0x4c:
            puVar6 = (undefined8 *)FUN_14018b280(0x170,0);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140718784;
            FUN_1405d65a0(puVar6);
            *(undefined4 *)(puVar6 + 0x2a) = 0x1f;
            *(undefined4 *)((longlong)puVar6 + 0x154) = 0xffffffff;
            *(undefined4 *)(puVar6 + 0x2b) = 0;
            *puVar6 = &PTR_FUN_140b6df10;
            goto LAB_140718787;
        case 0x52:
            puVar6 = (undefined8 *)FUN_14018b280(0x158,0);
            if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                FUN_1405d65a0(puVar6);
                *puVar6 = &PTR_FUN_140b6df60;
                puVar6[0x2a] = 0;
            }
            iVar2 = FUN_1405d9db0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x5a:
            puVar6 = (undefined8 *)FUN_14018b280(0x160,0);
            if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                FUN_1405d65a0(puVar6);
                puVar6[0x2a] = 0;
                *(undefined4 *)(puVar6 + 0x2b) = 0;
                *puVar6 = &PTR_LAB_140b6de10;
            }
            iVar2 = FUN_1405da3f0(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x5f:
            puVar4 = (undefined8 *)FUN_14018b280(0x158,0);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                FUN_1405d65a0(puVar4);
                *puVar4 = &PTR_LAB_140b6ddc0;
                puVar6 = puVar4;
            }
            iVar2 = FUN_1405da280(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 99:
            puVar6 = (undefined8 *)FUN_14018b280(0x158,0);
            if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                FUN_1405d65a0(puVar6);
                *puVar6 = &PTR_FUN_140b6dfb0;
                puVar6[0x2a] = 0;
            }
            iVar2 = FUN_1405d9f80(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
            break;
        case 0x6c:
            puVar6 = (undefined8 *)FUN_14018b280(0x150,0);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140718784;
            FUN_1405d65a0(puVar6);
            *puVar6 = &PTR_LAB_140b73e30;
            goto LAB_140718787;
        case 0x8e:
            puVar6 = (undefined8 *)FUN_14018b280(0x160,0);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140718784;
            FUN_1405d65a0(puVar6);
            puVar6[0x2a] = 0;
            *(undefined4 *)(puVar6 + 0x2b) = 0;
            *puVar6 = &PTR_LAB_140b6deb0;
        LAB_140718787:
            iVar2 = FUN_1405d6880(puVar6,param_2,param_1);
            if (iVar2 < 0) {
                return 0x80004005;
            }
    }
    uVar8 = 0;
    uVar7 = *(uint *)((longlong)puVar6 + 0xbc);
    if ((puVar6[0x16] != 0) && ((*(byte *)(puVar6[0x16] + 0x3c) & 2) != 0)) {
        uVar7 = 0xffffffff;
    }
    uVar1 = *(uint *)(param_1 + 0x48);
    if (*(uint *)(param_1 + 0x48) < uVar7) {
        uVar1 = uVar7;
    }
    *(uint *)(param_1 + 0x48) = uVar1;
    if ((*(byte *)(lVar3 + 0x3c) & 1) == 0) {
        uVar7 = *(uint *)(param_1 + 0x4c);
        if ((uint)param_2[2] < uVar7) {
            uVar7 = param_2[2];
        }
        *(uint *)(param_1 + 0x4c) = uVar7;
    }
    else {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138) + 0x70);
        if (((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x54) != 0)) &&
            (lVar3 = FUN_140237680(), lVar3 != 0)) {
            uVar8 = *(uint *)(lVar3 + 0x48);
        }
        uVar7 = *(uint *)(param_1 + 0x4c);
        if (uVar8 < *(uint *)(param_1 + 0x4c)) {
            uVar7 = uVar8;
        }
        *(uint *)(param_1 + 0x4c) = uVar7;
    }
    return 0;
}



void FUN_1407188d0(longlong param_1,undefined4 param_2)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;

    iVar3 = DAT_140c636a8;
    for (lVar2 = *(longlong *)(param_1 + 8); DAT_140c636a8 = iVar3, lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x10)) {
        FUN_1405d6b80(lVar2);
        iVar3 = DAT_140c636a8;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
        *(int *)(param_1 + 0x30) = iVar3;
        *(int *)(*(longlong *)(param_1 + 0x60) + 0x20) = iVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x24) = *(undefined4 *)(param_1 + 0x48);
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138) + 0x70);
        if ((*(int *)(lVar2 + 0x18) == 10) &&
            (uVar4 = (*(int *)(*(longlong *)(param_1 + 0x38) + 0x194) + *(int *)(lVar2 + 0x20)) - iVar3,
                    uVar4 != 0)) {
            uVar1 = *(uint *)(param_1 + 0x48);
            if ((uVar1 != 0xffffffff) && (uVar4 < uVar1)) {
                uVar4 = uVar1;
            }
            *(uint *)(*(longlong *)(param_1 + 0x60) + 0x24) = uVar4;
        }
    }
    FUN_140717df0(param_1,param_2);
    return;
}



void FUN_140718980(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    uint uVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong local_18;
    longlong local_10;

    local_18 = 0;
    local_10 = 0;
    puVar3 = *(undefined8 **)(param_1 + 8);
    lVar4 = local_18;
    while (local_18 = lVar4, puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[2];
        if (puVar3[0x1a] == 0) {
            uVar6 = 0;
        }
        else {
            uVar6 = FUN_140195f70(puVar3 + 0x18);
        }
        *(undefined4 *)((longlong)puVar3 + 0x6c) = uVar6;
        FUN_140718bd0(&local_18,puVar3 + 0xc);
        (**(code **)*puVar3)(puVar3);
        puVar3 = puVar2;
        lVar4 = local_18;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar5 = DAT_140c636a8;
    for (lVar8 = local_10; DAT_140c636a8 = iVar5, lVar8 != 0; lVar8 = lVar8 + -1) {
        uVar9 = 0;
        if (*(int *)(param_1 + 0x50) != 0) {
            do {
                FUN_140718120(param_1);
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(param_1 + 0x50));
        }
        iVar5 = DAT_140c636a8;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
        *(int *)(param_1 + 0x30) = iVar5;
        *(int *)(*(longlong *)(param_1 + 0x60) + 0x20) = iVar5;
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x24) = *(undefined4 *)(param_1 + 0x48);
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138) + 0x70);
        if ((*(int *)(lVar8 + 0x18) == 10) &&
            (uVar7 = (*(int *)(*(longlong *)(param_1 + 0x38) + 0x194) + *(int *)(lVar8 + 0x20)) - iVar5,
                    uVar7 != 0)) {
            uVar1 = *(uint *)(param_1 + 0x48);
            if ((uVar1 != 0xffffffff) && (uVar7 < uVar1)) {
                uVar7 = uVar1;
            }
            *(uint *)(*(longlong *)(param_1 + 0x60) + 0x24) = uVar7;
        }
    }
    if (*(int *)(param_1 + 0x48) == 0) {
        FUN_140717f00(param_1,-*(int *)(param_1 + 0x50));
    }
    if (lVar4 != 0) {
        // WARNING: Could not recover jumptable at 0x000140718ae0. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        return;
    }
    return;
}



void FUN_140718af0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    uint uVar3;
    uint uVar4;

    if (*(int *)(*(longlong *)((*(longlong **)(param_1 + 0x38))[0x27] + 0x70) + 0x18) == 10) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
        *(undefined4 *)(param_1 + 0x48) = 0;
        puVar2 = *(undefined8 **)(param_1 + 8);
        while (puVar2 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)puVar2[2];
            if ((puVar2[0x16] == 0) || ((*(byte *)(puVar2[0x16] + 0x3c) & 2) == 0)) {
                if (puVar2[0x1a] == 0) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = FUN_140195f70();
                }
                uVar4 = *(uint *)(param_1 + 0x48);
                if (*(uint *)(param_1 + 0x48) < uVar3) {
                    uVar4 = uVar3;
                }
                *(uint *)(param_1 + 0x48) = uVar4;
                puVar2 = puVar1;
            }
            else {
                (**(code **)*puVar2)(puVar2,1);
                puVar2 = puVar1;
            }
        }
        if (*(longlong *)(param_1 + 8) == 0) {
            FUN_1407177b0();
            FUN_14018b900(param_1,0);
            return;
        }
        FUN_1407180c0(param_1);
        if (*(int *)(param_1 + 0x48) == 0) {
            FUN_140717f00(param_1,-*(int *)(param_1 + 0x50));
            return;
        }
    }
    return;
}



longlong FUN_140718bd0(longlong *param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1,0x50);
    puVar4 = (undefined8 *)(lVar1 * 0x50 + lVar3);
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = param_2[2];
    puVar4[3] = param_2[3];
    puVar4[4] = param_2[4];
    puVar4[5] = param_2[5];
    puVar4[6] = param_2[6];
    puVar4[7] = param_2[7];
    puVar4[8] = param_2[8];
    puVar4[9] = param_2[9];
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,param_1[1] * 0x50);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



undefined8 * FUN_140718cc0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b74508;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 3) = 0x544e5645;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x544e5645;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x15) = 0x544e5645;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x544e5645;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x27) = 0x544e5645;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x544e5645;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x39) = 0x544e5645;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    return param_1;
}



undefined8 FUN_140718eb0(undefined8 param_1,ulonglong param_2)

{
    FUN_140718ef0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140718ef0(undefined8 *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    undefined8 *puVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    longlong *plVar8;

    *param_1 = &PTR_LAB_140b74508;
    FUN_140719bb0(param_1,0);
    if ((undefined8 *)param_1[0x58] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x58] = param_1[0x59];
    }
    if (param_1[0x59] != 0) {
        *(undefined8 *)(param_1[0x59] + 0x2c0) = param_1[0x58];
    }
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    if ((longlong *)param_1[0x51] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x51] + 8))();
    }
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x50] + 8))();
    }
    pplVar3 = (longlong **)(param_1 + 0x4f);
    if (*pplVar3 != (longlong *)0x0) {
        (**(code **)(**pplVar3 + 8))();
    }
    iVar5 = 5;
    iVar7 = 5;
    iVar6 = iVar7;
    do {
        pplVar1 = pplVar3 + -1;
        pplVar3 = pplVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar4 = param_1 + 0x49;
    do {
        pplVar3 = (longlong **)(puVar4 + -1);
        puVar4 = puVar4 + -1;
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 8))();
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x42] + 8))();
    }
    FUN_140195d70(param_1 + 0x39);
    *(undefined4 *)(param_1 + 0x39) = 0;
    if ((undefined8 *)param_1[0x3b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x3b] = param_1[0x3c];
    }
    if ((undefined8 *)param_1[0x3c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x3c] = param_1[0x3b];
    }
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    plVar8 = param_1 + 0x3b;
    do {
        plVar2 = plVar8 + -9;
        FUN_140195d70(plVar8 + -0xb);
        *(undefined4 *)(plVar8 + -0xb) = 0;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
            *(longlong *)*plVar2 = plVar8[-8];
        }
        if ((longlong *)plVar8[-8] != (longlong *)0x0) {
            *(longlong *)plVar8[-8] = *plVar2;
        }
        iVar5 = iVar5 + -1;
        *plVar2 = 0;
        plVar8[-8] = 0;
        plVar8 = plVar2;
    } while (-1 < iVar5);
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_140719090(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;

    if ((*(longlong **)(param_1 + 0x280) != (longlong *)0x0) && (param_2 == 0)) {
        // WARNING: Could not recover jumptable at 0x0001407190be. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)(param_1 + 0x280) + 0x40))();
        return;
    }
    lVar1 = param_1 + param_2 * 8;
    plVar3 = *(longlong **)(lVar1 + 0x218);
    if (plVar3 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar3 + 0x40))();
        lVar2 = param_1 + param_2 * 8;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                (*(longlong **)(param_1 + 0x210),*(undefined8 *)(lVar1 + 0x218),lVar2 + 0x248,
                 ~(iVar4 << 3) & 0x200000U | 0x80100000,&LAB_140719170,param_1,0);
        if (iVar4 < 0) {
            if (*(longlong **)(lVar2 + 0x248) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 0x248) + 8))();
                *(undefined8 *)(lVar2 + 0x248) = 0;
            }
            FUN_140719390(param_1,0);
        }
    }
    return;
}



void FUN_140719190(undefined8 param_1,uint param_2,longlong *param_3)

{
    if ((param_2 >> 0x1e & 1) != 0) {
        FUN_140719bb0(param_3,0);
    }
    if ((int)param_2 < 0) {
        if ((longlong *)param_3[0x51] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_3[0x51] + 8))();
            param_3[0x51] = 0;
        }
        (**(code **)(*param_3 + 8))(param_3);
    }
    return;
}



void FUN_1407191f0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong **pplVar5;
    undefined4 local_28 [2];
    longlong *local_20;
    code *local_18;
    undefined8 local_10;

    if (*(int *)(param_1 + 0x56) == 0) {
        plVar4 = param_1 + 3;
        lVar2 = 6;
        do {
            if (plVar4[2] != 0) {
                FUN_140195d70(plVar4);
            }
            plVar4 = plVar4 + 9;
            lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
    }
    FUN_140719bb0(param_1,1);
    *(int *)(param_1 + 0x56) = *(int *)(param_1 + 0x56) + 1;
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x56) < 0x14) {
        pplVar5 = (longlong **)(param_1 + 0x43);
        do {
            if (((pplVar5[6] != (longlong *)0x0) && (*pplVar5 != (longlong *)0x0)) &&
                (iVar1 = (**(code **)(**pplVar5 + 0x20))(), iVar1 != 0)) {
                local_28[0] = 0;
                local_18 = FUN_1407191f0;
                local_10 = 0;
                local_20 = param_1;
                FUN_140195960(param_1 + 0x39,100,local_28);
                return;
            }
            uVar3 = uVar3 + 1;
            pplVar5 = pplVar5 + 1;
        } while (uVar3 < 6);
    }
    if ((longlong *)param_1[0x50] == (longlong *)0x0) {
        if ((param_1[0x4f] != 0) && (param_1[0x51] == 0)) {
            (**(code **)*param_1)(param_1);
            iVar1 = (**(code **)(*(longlong *)param_1[0x42] + 0x18))
                    ((longlong *)param_1[0x42],param_1[0x4f],param_1 + 0x51,0xc0000000,
                     FUN_140719190,param_1,0);
            if (iVar1 < 0) {
                if ((longlong *)param_1[0x51] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)param_1[0x51] + 8))();
                    param_1[0x51] = 0;
                }
                (**(code **)(*param_1 + 8))(param_1);
            }
        }
    }
    else {
        (**(code **)(*(longlong *)param_1[0x50] + 0x48))();
        if ((longlong *)param_1[0x50] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x50] + 8))();
            param_1[0x50] = 0;
        }
    }
    FUN_140719390(param_1,0);
    return;
}



void FUN_140719390(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong **pplVar5;

    uVar3 = 0;
    if (param_2 != (longlong *)0x0) {
        pplVar5 = (longlong **)(param_1 + 0x49);
        lVar4 = 6;
        do {
            plVar1 = *pplVar5;
            if ((plVar1 == param_2) && (plVar1 != (longlong *)0x0)) {
                (**(code **)(*plVar1 + 8))();
                *pplVar5 = (longlong *)0x0;
            }
            pplVar5 = pplVar5 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    if ((*(int *)(param_1 + 0x55) == 0) && (param_1[0x50] == 0)) {
        plVar1 = param_1 + 5;
        uVar2 = uVar3;
        do {
            if (*plVar1 != 0) {
                return;
            }
            uVar2 = uVar2 + 1;
            plVar1 = plVar1 + 9;
        } while (uVar2 < 6);
        plVar1 = param_1 + 0x49;
        do {
            if (*plVar1 != 0) {
                return;
            }
            uVar3 = uVar3 + 1;
            plVar1 = plVar1 + 1;
        } while (uVar3 < 6);
        if ((param_1[0x3b] == 0) && (param_1[0x58] != 0)) {
            FUN_140719bb0(param_1,0);
            if (param_1[2] != 0) {
                FUN_14071a0f0();
                param_1[2] = 0;
            }
            plVar1 = DAT_140c7f0e0;
            if (*(int *)((longlong)param_1 + 0x2b4) != 0) {
                for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0x59]) {
                    if ((plVar1 != param_1) && (*(int *)((longlong)plVar1 + 0x2b4) != 0)) goto LAB_1407194b9;
                }
                FUN_1404cf930(DAT_140c65a28);
            }
            LAB_1407194b9:
            if ((longlong *)param_1[0x58] != (longlong *)0x0) {
                *(longlong *)param_1[0x58] = param_1[0x59];
            }
            if (param_1[0x59] != 0) {
                *(longlong *)(param_1[0x59] + 0x2c0) = param_1[0x58];
            }
            param_1[0x58] = 0;
            param_1[0x59] = 0;
            (**(code **)(*param_1 + 8))(param_1);
        }
    }
    return;
}



undefined8
FUN_140719510(longlong **param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    int *piVar8;
    longlong *plVar9;
    int *piVar10;
    undefined4 local_res20;
    undefined4 local_res24;

    if (((param_4 == 0) && (param_5 == 0)) && (param_2 == 0)) {
        return 0x80004005;
    }
    piVar10 = param_3 + 0x15;
    plVar9 = (longlong *)0x0;
    plVar3 = plVar9;
    piVar8 = piVar10;
    do {
        if (*piVar8 != 0) {
            if (plVar3 <= &DAT_00000005) goto LAB_14071959a;
            break;
        }
        plVar3 = (longlong *)((longlong)plVar3 + 1);
        piVar8 = piVar8 + 1;
    } while (plVar3 < &DAT_00000006);
    if (param_3[0x21] == 0) {
        return 0x80004005;
    }
    LAB_14071959a:
    lVar4 = FUN_14018b280(0x2d0,8);
    plVar3 = plVar9;
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_140718cc0(lVar4);
    }
    plVar7 = plVar3 + 0x43;
    lVar4 = 6;
    do {
        if (*piVar10 != 0) {
            (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,plVar7);
        }
        piVar10 = piVar10 + 1;
        plVar7 = plVar7 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (param_3[0x21] != 0) {
        (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,plVar3 + 0x4f);
    }
    plVar7 = plVar3 + 0x43;
    plVar5 = plVar9;
    do {
        if (*plVar7 != 0) {
            if (plVar5 <= &DAT_00000005) goto LAB_14071965b;
            break;
        }
        plVar5 = (longlong *)((longlong)plVar5 + 1);
        plVar7 = plVar7 + 1;
    } while (plVar5 < &DAT_00000006);
    if (plVar3[0x4f] != 0) {
        LAB_14071965b:
        if ((param_4 != 0) &&
            (puVar2 = *(undefined8 **)(param_4 + 0x1588), (undefined8 *)plVar3[0x42] != puVar2)) {
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2);
            }
            if ((longlong *)plVar3[0x42] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar3[0x42] + 8))();
            }
            plVar3[0x42] = (longlong)puVar2;
        }
        if ((plVar3[0x42] == 0) && (param_5 != 0)) {
            (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,plVar3 + 0x42,0);
            (**(code **)(*(longlong *)plVar3[0x42] + 0x58))((longlong *)plVar3[0x42],param_5);
            *(undefined4 *)((longlong)plVar3 + 0x2ac) = 1;
        }
        plVar7 = (longlong *)plVar3[0x42];
        if (plVar7 == (longlong *)0x0) goto LAB_140719842;
        if (((param_3[6] != 0) && (plVar3[0x43] != 0)) && (plVar3[0x4f] != 0)) {
            (**(code **)(*plVar7 + 0x28))(plVar7,plVar3 + 0x50);
        }
        *(int *)(plVar3 + 0x52) = param_3[0x1b] + *param_3;
        *(int *)((longlong)plVar3 + 0x294) = param_3[0x1c] + *param_3;
        *(int *)(plVar3 + 0x53) = param_3[0x1d] + *param_3;
        *(int *)((longlong)plVar3 + 0x29c) = param_3[0x1e] + *param_3;
        *(int *)(plVar3 + 0x54) = param_3[0x1f] + *param_3;
        *(int *)((longlong)plVar3 + 0x2a4) = param_3[0x20] + *param_3;
        if (((param_3[7] != 0) && ((longlong *)plVar3[0x4f] != (longlong *)0x0)) && (param_4 != 0)) {
            *(undefined4 *)(plVar3 + 0x57) = *(undefined4 *)(param_4 + 8);
            local_res24 = (**(code **)(*(longlong *)plVar3[0x4f] + 0x60))();
            local_res20 = *(undefined4 *)(param_4 + 8);
            lVar6 = FUN_14071ff40(local_res20,&local_res20);
            lVar4 = *(longlong *)(lVar6 + 8);
            plVar7 = (longlong *)FUN_14018b280(0x18);
            if ((longlong **)(plVar7 + 2) != (longlong **)0x0) {
                plVar7[2] = (longlong)plVar3;
            }
            *plVar7 = lVar4;
            plVar7[1] = *(longlong *)(lVar4 + 8);
            **(longlong ***)(lVar4 + 8) = plVar7;
            *(longlong **)(lVar4 + 8) = plVar7;
            *(undefined4 *)((longlong)plVar3 + 700) = 1;
            if (*(longlong **)(**(longlong **)(lVar6 + 8) + 0x10) != plVar3) goto LAB_140719857;
        }
        FUN_1407198e0(plVar3);
        if ((*(int *)(plVar3 + 0x55) != 0) || (plVar3[0x50] != 0)) {
            LAB_140719857:
            (**(code **)*plVar3)(plVar3);
            if (plVar3[0x58] == 0) {
                pplVar1 = (longlong **)(plVar3 + 0x59);
                plVar3[0x58] = (longlong)&DAT_140c7f0e0;
                *pplVar1 = DAT_140c7f0e0;
                DAT_140c7f0e0 = plVar3;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[0x58] = (longlong)pplVar1;
                }
            }
            plVar3[2] = param_2;
            *(uint *)((longlong)plVar3 + 0x2b4) = (uint)(param_3[0x14] != 0);
            *param_1 = plVar3;
            return 0;
        }
        plVar7 = plVar3 + 5;
        plVar5 = plVar9;
        do {
            if (*plVar7 != 0) goto LAB_140719857;
            plVar5 = (longlong *)((longlong)plVar5 + 1);
            plVar7 = plVar7 + 9;
        } while (plVar5 < &DAT_00000006);
        plVar7 = plVar3 + 0x49;
        do {
            if (*plVar7 != 0) goto LAB_140719857;
            plVar9 = (longlong *)((longlong)plVar9 + 1);
            plVar7 = plVar7 + 1;
        } while (plVar9 < &DAT_00000006);
    }
    LAB_140719842:
    (**(code **)(*plVar3 + 0x10))(plVar3,1);
    return 0x80004005;
}



void FUN_1407198e0(longlong param_1)

{
    ulonglong uVar1;
    int *piVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined4 local_38 [2];
    longlong local_30;
    code *local_28;
    ulonglong local_20;

    *(undefined4 *)(param_1 + 0x2a8) = 1;
    uVar1 = 0;
    lVar4 = param_1 + 0x18;
    piVar2 = (int *)(param_1 + 0x290);
    plVar3 = (longlong *)(param_1 + 0x218);
    do {
        if (*plVar3 != 0) {
            if (*piVar2 < 1) {
                FUN_140719090(param_1);
            }
            else {
                local_38[0] = 1;
                local_28 = FUN_140719090;
                local_30 = param_1;
                local_20 = uVar1;
                FUN_140195960(lVar4,*piVar2,local_38,4);
            }
        }
        uVar1 = uVar1 + 1;
        plVar3 = plVar3 + 1;
        piVar2 = piVar2 + 1;
        lVar4 = lVar4 + 0x48;
    } while (uVar1 < 6);
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407199a0(void)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong lVar4;

    plVar1 = DAT_140c7f0e0;
    if (_DAT_140c7f0f8 != 0) {
        FUN_14001ea50(&DAT_140c7f0e8,*(undefined8 *)(DAT_140c7f0f0 + 8));
        *(longlong *)(DAT_140c7f0f0 + 0x10) = DAT_140c7f0f0;
        *(undefined8 *)(DAT_140c7f0f0 + 8) = 0;
        *(longlong *)(DAT_140c7f0f0 + 0x18) = DAT_140c7f0f0;
        _DAT_140c7f0f8 = 0;
        plVar1 = DAT_140c7f0e0;
    }
    while (plVar1 != (longlong *)0x0) {
        DAT_140c7f0e0 = plVar1;
        *(undefined4 *)((longlong)plVar1 + 700) = 0;
        plVar2 = plVar1 + 3;
        lVar4 = 6;
        do {
            if (plVar2[2] != 0) {
                FUN_140195d70(plVar2);
            }
            plVar2 = plVar2 + 9;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        if (plVar1[0x3b] != 0) {
            FUN_140195d70(plVar1 + 0x39);
        }
        pplVar3 = (longlong **)(plVar1 + 0x49);
        lVar4 = 6;
        do {
            if (*pplVar3 != (longlong *)0x0) {
                (**(code **)(**pplVar3 + 0x38))();
                (**(code **)(**pplVar3 + 0x48))(*pplVar3,500,2);
                if (*pplVar3 != (longlong *)0x0) {
                    (**(code **)(**pplVar3 + 8))();
                    *pplVar3 = (longlong *)0x0;
                }
            }
            pplVar3 = pplVar3 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        if ((longlong *)plVar1[0x50] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar1[0x50] + 0x48))();
        }
        if ((longlong *)plVar1[0x50] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar1[0x50] + 8))();
            plVar1[0x50] = 0;
        }
        plVar2 = (longlong *)plVar1[2];
        if (plVar2 != (longlong *)0x0) {
            if ((longlong *)plVar2[0x1a] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[0x1a] + 8))();
                plVar2[0x1a] = 0;
            }
            if (((*(int *)(plVar2 + 0x19) != 0) &&
                 (lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2), *(int *)(lVar4 + 0xc) == 0)) &&
                (plVar2[0x12] == 0)) {
                (**(code **)(*plVar2 + 0x50))(plVar2,0);
            }
        }
        plVar1[2] = 0;
        if ((longlong *)plVar1[0x51] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar1[0x51] + 0x38))();
            (**(code **)(*(longlong *)plVar1[0x51] + 0x48))((longlong *)plVar1[0x51],500,2);
            (**(code **)(*plVar1 + 8))(plVar1);
        }
        if ((longlong *)plVar1[0x58] != (longlong *)0x0) {
            *(longlong *)plVar1[0x58] = plVar1[0x59];
        }
        if (plVar1[0x59] != 0) {
            *(longlong *)(plVar1[0x59] + 0x2c0) = plVar1[0x58];
        }
        plVar1[0x58] = 0;
        plVar1[0x59] = 0;
        (**(code **)(*plVar1 + 8))(plVar1);
        plVar1 = DAT_140c7f0e0;
    }
    DAT_140c7f0e0 = plVar1;
    return;
}



void FUN_140719bb0(longlong *param_1,int param_2)

{
    uint uVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong **pplVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong local_res8;

    if (*(int *)((longlong)param_1 + 700) == 0) {
        return;
    }
    *(undefined4 *)((longlong)param_1 + 700) = 0;
    if (*(int *)(param_1 + 0x57) == 0) {
        return;
    }
    if ((longlong *)param_1[0x4f] == (longlong *)0x0) {
        return;
    }
    uVar6 = (**(code **)(*(longlong *)param_1[0x4f] + 0x60))();
    uVar1 = *(uint *)(param_1 + 0x57);
    lVar7 = *(longlong *)(DAT_140c7f0f0 + 8);
    local_res8 = DAT_140c7f0f0;
    if (*(longlong *)(DAT_140c7f0f0 + 8) != 0) {
        do {
            if ((*(uint *)(lVar7 + 0x20) < uVar1) ||
                ((*(uint *)(lVar7 + 0x20) <= uVar1 && (*(uint *)(lVar7 + 0x24) < uVar6)))) {
                lVar8 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                lVar8 = *(longlong *)(lVar7 + 0x10);
                local_res8 = lVar7;
            }
            lVar7 = lVar8;
        } while (lVar8 != 0);
        if (((local_res8 != DAT_140c7f0f0) && (*(uint *)(local_res8 + 0x20) <= uVar1)) &&
            ((*(uint *)(local_res8 + 0x20) < uVar1 || (*(uint *)(local_res8 + 0x24) <= uVar6))))
            goto LAB_140719c69;
    }
    local_res8 = DAT_140c7f0f0;
    LAB_140719c69:
    lVar7 = local_res8;
    if (local_res8 != DAT_140c7f0f0) {
        pplVar2 = (longlong **)**(longlong ***)(local_res8 + 0x30);
        for (pplVar3 = pplVar2; pplVar3 != *(longlong ***)(local_res8 + 0x30);
             pplVar3 = (longlong **)*pplVar3) {
            if (pplVar3[2] == param_1) {
                if ((pplVar3 == pplVar2) && (param_2 != 0)) {
                    return;
                }
                plVar4 = *pplVar3;
                pplVar5 = (longlong **)pplVar3[1];
                *pplVar5 = plVar4;
                plVar4[1] = (longlong)pplVar5;
                FUN_14018b900(pplVar3,0);
                if (pplVar3 != pplVar2) {
                    return;
                }
                plVar4 = *(longlong **)(lVar7 + 0x30);
                if ((longlong *)*plVar4 == plVar4) {
                    local_res8 = lVar7;
                    FUN_140720310(&DAT_140c7f0e8,&local_res8);
                    return;
                }
                FUN_1407198e0(*(undefined8 *)(*plVar4 + 0x10));
                FUN_140719390(*(undefined8 *)(**(longlong **)(lVar7 + 0x30) + 0x10),0);
                return;
            }
        }
    }
    return;
}



undefined8 FUN_140719d20(undefined8 param_1,ulonglong param_2)

{
    FUN_140719d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140719d60(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b744b0;
    lVar1 = param_1[0x1a];
    if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = 0;
        if ((*(int *)(lVar1 + 0x2b0) == 0) &&
            ((*(longlong *)(lVar1 + 0x280) != 0 || (*(longlong *)(lVar1 + 0x278) != 0)))) {
            FUN_1407191f0();
        }
        if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x1a] + 8))();
            param_1[0x1a] = 0;
        }
    }
    FUN_1400035b0(0x4b,4,0,param_1);
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 8))();
    }
    FUN_140195d70(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x12] = param_1[0x13];
    }
    if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x13] = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    FUN_140195d70(param_1 + 7);
    *(undefined4 *)(param_1 + 7) = 0;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[9] = param_1[10];
    }
    if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[10] = param_1[9];
    }
    param_1[9] = 0;
    param_1[10] = 0;
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
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



undefined8 FUN_140719ef0(longlong *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined4 local_28 [2];
    longlong *local_20;
    code *local_18;
    undefined8 local_10;

    *(undefined4 *)(param_1 + 0x1b) = param_2[8];
    if (param_2[3] == 0) {
        if (param_2[1] == -1) {
            param_2[3] = 1;
        }
        else if (param_2[1] == 0) {
            param_2[3] = 0;
        }
    }
    else {
        param_2[1] = 0xffffffff;
    }
    uVar2 = (**(code **)(*param_1 + 0x40))();
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    uVar3 = FUN_1403d90d0(DAT_140c65898,uVar1);
    FUN_140719510(param_1 + 0x1a,param_1,param_2,uVar3,uVar2);
    local_18 = FUN_14071a070;
    local_28[0] = 0;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 7,*param_2,local_28,4);
    return 0;
}



void FUN_140719fc0(longlong *param_1)

{
    longlong lVar1;

    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(longlong *)(param_1[2] + 8) = param_1[1];
    }
    *(undefined4 *)(param_1 + 0x19) = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar1 + 0xc) == 0) {
        lVar1 = param_1[0x1a];
        if (lVar1 == 0) {
            if ((param_1[9] == 0) && (param_1[0x12] == 0)) goto LAB_14071a051;
        }
        else if ((*(int *)(lVar1 + 0x2b0) == 0) &&
                 ((*(longlong *)(lVar1 + 0x280) != 0 || (*(longlong *)(lVar1 + 0x278) != 0)))) {
            FUN_1407191f0();
            return;
        }
        return;
    }
    LAB_14071a051:
    // WARNING: Could not recover jumptable at 0x00014071a05e. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x50))(param_1,0);
    return;
}



void FUN_14071a070(longlong *param_1)

{
    longlong lVar1;
    undefined4 local_28 [2];
    longlong *local_20;
    undefined *local_18;
    undefined8 local_10;

    lVar1 = (**(code **)(*param_1 + 0x10))();
    if (*(int *)(lVar1 + 0xc) == 0) {
        lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_14071a0e0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x10,*(undefined4 *)(lVar1 + 4),local_28,4);
    }
    // WARNING: Could not recover jumptable at 0x00014071a0cd. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
}



void FUN_14071a0f0(longlong *param_1)

{
    longlong lVar1;

    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 8))();
        param_1[0x1a] = 0;
    }
    if (*(int *)(param_1 + 0x19) != 0) {
        lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
        if ((*(int *)(lVar1 + 0xc) == 0) && (param_1[0x12] == 0)) {
            // WARNING: Could not recover jumptable at 0x00014071a145. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x50))(param_1,0);
            return;
        }
    }
    return;
}



void FUN_14071a150(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 local_res8 [8];

    FUN_140195d70(param_1 + 7);
    FUN_140195d70(param_1 + 0x10);
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    lVar1 = DAT_140c65898;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x7198), lVar1 != 0)) {
        local_res8[0] = *(undefined4 *)(param_1 + 0x1b);
        FUN_140003460(lVar1 + 0x2e8,local_res8);
    }
    // WARNING: Could not recover jumptable at 0x00014071a205. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)*param_1)(param_1,1);
    return;
}



undefined8 * FUN_14071a210(undefined8 *param_1)

{
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 7) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
    param_1[0x1a] = 0;
    *param_1 = &PTR_FUN_140b74450;
    FUN_1407e4830(param_1 + 0x1c,0,0xc0);
    param_1[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = 3;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 500) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    return param_1;
}



undefined8 FUN_14071a310(undefined8 param_1,ulonglong param_2)

{
    FUN_14071a350();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071a350(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b74450;
    if ((undefined8 *)param_1[0x41] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x41] = param_1[0x42];
    }
    if (param_1[0x42] != 0) {
        *(undefined8 *)(param_1[0x42] + 0x208) = param_1[0x41];
    }
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    FUN_140195d70(param_1 + 0x36);
    *(undefined4 *)(param_1 + 0x36) = 0;
    if ((undefined8 *)param_1[0x38] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x38] = param_1[0x39];
    }
    if ((undefined8 *)param_1[0x39] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x39] = param_1[0x38];
    }
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    FUN_140719d60(param_1);
    return;
}



void FUN_14071a6e0(longlong *param_1,int param_2,int param_3)

{
    longlong **pplVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 uVar7;
    longlong **pplVar8;
    longlong *plVar9;
    float fVar10;
    uint local_30;

    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
        *(longlong *)param_1[0x41] = param_1[0x42];
    }
    pplVar1 = (longlong **)(param_1 + 0x42);
    if (*pplVar1 != (longlong *)0x0) {
        (*pplVar1)[0x41] = param_1[0x41];
    }
    *(int *)(param_1 + 0x35) = param_2;
    param_1[0x41] = 0;
    *pplVar1 = (longlong *)0x0;
    uVar7 = 0;
    if ((*(int *)((longlong)param_1 + (longlong)param_2 * 4 + 0x184) != 0) &&
        (lVar4 = FUN_1403d90d0(DAT_140c65898), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x80) == 0x12) {
            plVar9 = *(longlong **)(lVar4 + 0x3698);
        }
        else {
            plVar9 = *(longlong **)(lVar4 + 0x16e8);
        }
        if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x250))();
            if (((param_3 == 0) && (*(uint *)((longlong)param_1 + 0x194) < local_30)) &&
                ((iVar3 = *(int *)(param_1 + 0x32), iVar3 != 4 || (*(int *)(lVar4 + 0xd58) != 0)))) {
                if (((*(int *)(param_1 + 0x3f) != 0) && (*(int *)((longlong)param_1 + 0x1fc) == 0)) &&
                    (*(int *)(param_1 + 0x35) != 2)) {
                    if (iVar3 == 4) {
                        pplVar8 = (longlong **)(lVar4 + 0x15e0);
                    }
                    else {
                        if (iVar3 != 5) {
                            return;
                        }
                        pplVar8 = (longlong **)(lVar4 + 0x15e8);
                    }
                    if (pplVar8 == (longlong **)0x0) {
                        return;
                    }
                    if (param_1[0x41] != 0) {
                        return;
                    }
                    plVar9 = *pplVar8;
                    while ((plVar9 != (longlong *)0x0 &&
                            ((int)(*(uint *)((longlong)param_1 + 0x194) - *(int *)((longlong)*pplVar8 + 0x194))
                             < 0))) {
                        pplVar8 = (longlong **)(*pplVar8 + 0x42);
                        plVar9 = *pplVar8;
                    }
                    param_1[0x41] = (longlong)pplVar8;
                    *pplVar1 = *pplVar8;
                    *pplVar8 = param_1;
                    LAB_14071a9b2:
                    if (*pplVar1 == (longlong *)0x0) {
                        return;
                    }
                    (*pplVar1)[0x41] = (longlong)pplVar1;
                    return;
                }
            }
            else {
                if (*(int *)((longlong)param_1 + 0xf4) == 0) {
                    uVar2 = FUN_1401ae6a0();
                }
                else {
                    uVar2 = *(undefined4 *)(param_1 + 0x33);
                }
                if ((*(int *)(param_1 + 0x35) == 0) &&
                    (*(int *)((longlong)param_1 + 0x184) != *(int *)(param_1 + 0x31))) {
                    uVar7 = 1;
                }
                fVar10 = *(float *)(param_1 + 0x40);
                if ((*(int *)(param_1 + 0x35) == 0) &&
                    (lVar5 = (**(code **)(*param_1 + 0x10))(param_1), *(int *)(lVar5 + 0x44) != 0)) {
                    lVar5 = (**(code **)(*plVar9 + 0x1a8))
                            (plVar9,*(undefined4 *)
                                    ((longlong)param_1 +
                                     (longlong)*(int *)(param_1 + 0x35) * 4 + 0x184),uVar2);
                    lVar6 = FUN_1404695e0();
                    if (lVar6 != 0) {
                        if ((float)(ulonglong)*(uint *)(lVar6 + 0x50) <
                            (float)(ulonglong)*(uint *)(lVar5 + 0x14)) {
                            fVar10 = ((float)(ulonglong)*(uint *)(lVar5 + 0x14) /
                                      (float)(ulonglong)*(uint *)(lVar6 + 0x50)) * *(float *)(param_1 + 0x40);
                        }
                    }
                }
                iVar3 = FUN_14046c8e0(lVar4,*(undefined4 *)(param_1 + 0x32),
                                      *(undefined4 *)
                                              ((longlong)param_1 + (longlong)*(int *)(param_1 + 0x35) * 4 + 0x184),
                                      uVar2,fVar10,*(undefined4 *)((longlong)param_1 + 0x194),uVar7,
                                      *(undefined4 *)((longlong)param_1 + 0x19c));
                if (iVar3 != 0) {
                    *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
                    if (*(int *)(param_1 + 0x32) == 4) {
                        pplVar8 = (longlong **)(lVar4 + 0x15e0);
                    }
                    else {
                        if (*(int *)(param_1 + 0x32) != 5) {
                            return;
                        }
                        pplVar8 = (longlong **)(lVar4 + 0x15e8);
                    }
                    if (pplVar8 == (longlong **)0x0) {
                        return;
                    }
                    if (param_1[0x41] != 0) {
                        return;
                    }
                    param_1[0x41] = (longlong)pplVar8;
                    *pplVar1 = *pplVar8;
                    *pplVar8 = param_1;
                    goto LAB_14071a9b2;
                }
            }
        }
    }
    (**(code **)(*param_1 + 0x50))(param_1,0);
    return;
}



void FUN_14071a9f0(longlong *param_1,int param_2)

{
    if (param_2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
        if (*(int *)(param_1 + 0x35) != 2) {
            if ((*(int *)(param_1 + 0x3f) != 0) && (*(int *)((longlong)param_1 + 0x1fc) == 0)) {
                FUN_14071a6e0(param_1,1,1);
                return;
            }
            if (*(int *)((longlong)param_1 + 0x18c) != 0) {
                FUN_14071a6e0(param_1,2,1);
                return;
            }
        }
        // WARNING: Could not recover jumptable at 0x00014071aa0c. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x50))(param_1,0);
        return;
    }
    if ((*(int *)((longlong)param_1 + 0x1a4) != 0) &&
        (((*(undefined4 *)((longlong)param_1 + 0x1a4) = 0, *(int *)(param_1 + 0x35) == 2 ||
                                                           (*(int *)(param_1 + 0x3f) == 0)) || (*(int *)((longlong)param_1 + 0x1fc) != 0)))) {
        // WARNING: Could not recover jumptable at 0x00014071aa7c. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x50))(param_1,1);
        return;
    }
    return;
}



void FUN_14071aa90(longlong *param_1)

{
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(longlong *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_140195d70(param_1 + 0x36);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 1;
    if ((*(int *)(param_1 + 0x3f) != 0) && (*(int *)(param_1 + 0x35) == 1)) {
        if (*(int *)((longlong)param_1 + 0x18c) != 0) {
            FUN_14071a6e0(param_1,2);
            return;
        }
        // WARNING: Could not recover jumptable at 0x00014071ab13. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x50))(param_1,0);
        return;
    }
    return;
}



void FUN_14071ab20(longlong param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(undefined8 **)(param_1 + 0x208) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x210);
    }
    if (*(longlong *)(param_1 + 0x210) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0x208) = *(undefined8 *)(param_1 + 0x208);
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_140195d70(param_1 + 0x1b0);
    if ((*(int *)(param_1 + 0x1a4) == 0) || (*(undefined4 *)(param_1 + 0x1a4) = 0, param_2 != 0))
        goto LAB_14071ac64;
    lVar2 = FUN_1403d90d0(DAT_140c65898);
    if (lVar2 == 0) goto LAB_14071ac64;
    iVar1 = *(int *)(param_1 + 400);
    if (iVar1 == 4) {
        plVar3 = *(longlong **)(lVar2 + 0x15e0);
        LAB_14071abd8:
        if (plVar3 != (longlong *)0x0) {
            *(undefined4 *)((longlong)plVar3 + 0x1a4) = 1;
            if (*(int *)(plVar3 + 0x35) != 2) {
                if ((*(int *)(plVar3 + 0x3f) != 0) && (*(int *)((longlong)plVar3 + 0x1fc) == 0)) {
                    FUN_14071a6e0(plVar3,1,1);
                    goto LAB_14071ac64;
                }
                if (*(int *)((longlong)plVar3 + 0x18c) != 0) {
                    FUN_14071a6e0(plVar3,2,1);
                    goto LAB_14071ac64;
                }
            }
            (**(code **)(*plVar3 + 0x50))(plVar3,0);
            goto LAB_14071ac64;
        }
    }
    else if (iVar1 == 5) {
        plVar3 = *(longlong **)(lVar2 + 0x15e8);
        goto LAB_14071abd8;
    }
    FUN_14046c8e0(lVar2,iVar1,0,0,0x3f800000,0,1,1);
    LAB_14071ac64:
    FUN_14071a150(param_1,param_2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14071acb0(longlong param_1,longlong *param_2,longlong param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    uint uVar8;
    int *piVar9;
    ulonglong uVar10;
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 in_XMM6_Da;
    float fVar18;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar19;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar20;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    float fVar21;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    ulonglong in_stack_ffffffffffffff88;
    ulonglong in_stack_ffffffffffffff90;
    undefined auVar22 [16];
    undefined auVar23 [16];
    undefined auVar24 [16];
    undefined auVar25 [16];

    auVar25 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar18 = -0.5;
    auVar24 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    fVar19 = 0.5;
    piVar9 = (int *)(param_1 + 0x184);
    auVar23 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    fVar20 = 3.0;
    auVar22 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
    uVar6 = 0;
    uVar10 = 0;
    fVar21 = 0.0;
    do {
        iVar4 = *piVar9;
        if (iVar4 != 0) {
            if (*(int *)(param_1 + 0x19c) != 0) {
                if (((*(int *)(param_1 + 0x17c) != 0) && (iVar4 - 0x5c0U < 2)) &&
                    (lVar5 = FUN_1403d90d0(), lVar5 != 0)) {
                    fVar14 = *(float *)(lVar5 + 0x11e0) - *(float *)(param_3 + 0x11e0);
                    fVar15 = *(float *)(lVar5 + 0x11e4) - *(float *)(param_3 + 0x11e4);
                    fVar16 = *(float *)(lVar5 + 0x11e8) - *(float *)(param_3 + 0x11e8);
                    fVar17 = *(float *)(lVar5 + 0x11ec) - *(float *)(param_3 + 0x11ec);
                    fVar12 = fVar15 * fVar15;
                    fVar13 = fVar14 * fVar14 + fVar12 + 0.0;
                    auVar11 = rsqrtss(CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))),
                                      CONCAT412(fVar17 * fVar17,
                                                CONCAT48(fVar16 * fVar16,CONCAT44(fVar12,fVar13))));
                    fVar12 = SUB164(auVar11,0);
                    fVar12 = (fVar20 - fVar13 * fVar12 * fVar12) * fVar19 * fVar12;
                    if (fVar12 <= 0.0) {
                        fVar12 = 0.0;
                    }
                    uVar7 = (ulonglong)
                            (fVar12 * fVar14 * *(float *)(param_3 + 0x1140) +
                             fVar12 * fVar15 * *(float *)(param_3 + 0x1144) + 0.0 < fVar21);
                    fVar12 = (*(float *)(param_3 + 0x1144) * 0.0 - fRam0000000140c77874 * 0.0) *
                             fVar12 * fVar14 +
                             (_DAT_140c77870 * 0.0 - fRam0000000140c77878 * *(float *)(param_3 + 0x1140)) *
                             fVar12 * fVar15 + 0.0;
                    if (fVar12 <= fVar19) {
                        if (fVar12 < fVar18) {
                            uVar7 = 2;
                        }
                    }
                    else {
                        uVar7 = 3;
                    }
                    if (iVar4 == 0x5c0) {
                        iVar4 = *(int *)(uVar7 * 4 + 0x140c593e0);
                    }
                    else if (iVar4 == 0x5c1) {
                        iVar4 = *(int *)(uVar7 * 4 + 0x140c593d0);
                    }
                }
                if ((*(int *)(param_3 + 0x1b8) == 10) || (*(int *)(param_3 + 0x1bc) == 10)) {
                    uVar8 = 1;
                }
                else {
                    uVar8 = 0;
                }
                uVar1 = *(undefined4 *)(param_3 + 0x1088);
                uVar2 = FUN_140467e40(param_3);
                uVar3 = FUN_14047bba0(param_3);
                in_stack_ffffffffffffff90 = 0;
                in_stack_ffffffffffffff88 =
                        in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong)uVar8;
                iVar4 = FUN_1401db470(iVar4,uVar1,uVar3,uVar2,in_stack_ffffffffffffff88,0);
                *piVar9 = iVar4;
            }
            uVar6 = 1;
            iVar4 = (**(code **)(*param_2 + 0x198))(param_2);
            if (iVar4 == 0) {
                uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
                FUN_1400035b0(5,3,0,*(undefined4 *)(param_1 + 0x108),uVar6,
                              in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                              (ulonglong)*(uint *)(param_1 + 0x184 + uVar10 * 4),auVar22,auVar23,auVar24,
                              auVar25);
                return 0;
            }
        }
        uVar10 = uVar10 + 1;
        piVar9 = piVar9 + 1;
        if (2 < uVar10) {
            return uVar6;
        }
    } while( true );
}



undefined8 FUN_14071af70(undefined8 param_1,ulonglong param_2)

{
    FUN_14071afb0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071afb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    *param_1 = &PTR_FUN_140b743f0;
    if (*(int *)(param_1 + 0x1d) != 0) {
        uVar3 = *(undefined4 *)((longlong)param_1 + 0xe4);
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x31),param_3,param_4,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0xcc0), plVar2 != (longlong *)0x0)) &&
            (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x70))(plVar2,0x14), plVar2 != (longlong *)0x0))
        {
            (**(code **)(*plVar2 + 0x70))(extraout_XMM0_Qa,uVar3,plVar2);
        }
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x31));
        if (((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0xcc0), plVar2 != (longlong *)0x0)) &&
            (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x70))(plVar2,0x14,1), plVar2 != (longlong *)0x0
            )) {
            (**(code **)(*plVar2 + 0x70))(extraout_XMM0_Qa_00,uVar3,plVar2);
        }
    }
    FUN_140719d60(param_1);
    return;
}



void FUN_14071b080(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar1 = (undefined4 *)(param_1 + 0xf0);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar8 = puVar5;
            puVar7 = param_2;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar8[0x18] = puVar7[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar8[0x1c] = puVar7[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        puVar8[0x20] = puVar7[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar7[0x25];
        uVar3 = puVar7[0x26];
        uVar4 = puVar7[0x27];
        puVar8[0x24] = puVar7[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
    }
    else {
        FUN_1407db590(puVar1,param_2,0xa0);
    }
    FUN_140719ef0(param_1,puVar1);
    return;
}



void FUN_14071b140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 uVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 uVar5;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar6 [16];
    undefined auVar7 [16];

    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x188));
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xcc0) != 0)) {
        auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        auVar6 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x188));
        uVar5 = 0xbf800000;
        uVar4 = uVar5;
        if ((lVar2 != 0) &&
            ((plVar3 = *(longlong **)(lVar2 + 0xcc0), plVar3 != (longlong *)0x0 &&
                                                      (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,0x14,0,param_4,auVar6,auVar7),
                                                              uVar4 = uVar5, plVar3 != (longlong *)0x0)))) {
            uVar4 = (**(code **)(*plVar3 + 0x78))(plVar3);
            (**(code **)(*plVar3 + 0x70))(uVar4,0,plVar3);
        }
        uVar1 = DAT_140c65898;
        *(undefined4 *)(param_1 + 0xe4) = uVar4;
        lVar2 = FUN_1403d90d0(uVar1,*(undefined4 *)(param_1 + 0x188));
        if (((lVar2 != 0) && (plVar3 = *(longlong **)(lVar2 + 0xcc0), plVar3 != (longlong *)0x0)) &&
            (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,0x14,1), plVar3 != (longlong *)0x0
            )) {
            uVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
            (**(code **)(*plVar3 + 0x70))(uVar5,0,plVar3);
        }
        *(undefined4 *)(param_1 + 0xe0) = uVar5;
        *(undefined4 *)(param_1 + 0xe8) = 1;
    }
    return;
}



undefined8 * FUN_14071b260(undefined8 *param_1)

{
    undefined4 uVar1;

    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 7) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
    param_1[0x1a] = 0;
    *param_1 = &PTR_FUN_140b74390;
    FUN_1407e4830(param_1 + 0x1e,0,0xb8);
    uVar1 = DAT_140c636a8;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    return param_1;
}



undefined8 * FUN_14071b330(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b74390;
    if ((undefined8 *)param_1[0x35] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x35] = param_1[0x36];
    }
    if (param_1[0x36] != 0) {
        *(undefined8 *)(param_1[0x36] + 0x1a8) = param_1[0x35];
    }
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    FUN_140719d60(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071b3b0(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar1 = (undefined4 *)(param_1 + 0xf0);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar8 = puVar5;
            puVar7 = param_2;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar8[0x18] = puVar7[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar8[0x1c] = puVar7[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        puVar8[0x20] = puVar7[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar7[0x25];
        uVar3 = puVar7[0x26];
        uVar4 = puVar7[0x27];
        puVar8[0x24] = puVar7[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
        uVar2 = puVar7[0x29];
        uVar3 = puVar7[0x2a];
        uVar4 = puVar7[0x2b];
        puVar8[0x28] = puVar7[0x28];
        puVar8[0x29] = uVar2;
        puVar8[0x2a] = uVar3;
        puVar8[0x2b] = uVar4;
        *(undefined8 *)(puVar8 + 0x2c) = *(undefined8 *)(puVar7 + 0x2c);
    }
    else {
        FUN_1407db590(puVar1,param_2,0xb8);
    }
    FUN_140719ef0(param_1,puVar1);
    return;
}



void FUN_14071b590(longlong *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    longlong **pplVar7;
    int local_38;
    undefined4 local_34;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    *(undefined4 *)(param_1 + 0x1c) = DAT_140c636a8;
    if ((((float)(ulonglong)*(uint *)((longlong)param_1 + 0x194) == 0.0) &&
         (*(float *)(param_1 + 0x32) == 0.0)) &&
        ((*(float *)((longlong)param_1 + 0x18c) == 0.0 ||
          (*(float *)((longlong)param_1 + 0x18c) == 0.1)))) {
        uVar6 = 1;
        do {
            if ((((uVar6 & 0xfffffffa) != 0) || (uVar6 == 1)) &&
                (iVar3 = FUN_140640ee0(), lVar5 = DAT_140c65898, iVar3 != 0)) {
                iVar3 = *(int *)(param_1 + 0x31);
                *(uint *)((longlong)param_1 + 0xe4) = uVar6;
                iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x71b8) + 0x198))
                        (*(longlong **)(lVar5 + 0x71b8),iVar3);
                if ((iVar4 != 0) || (iVar3 == 0)) {
                    local_34 = 0;
                    local_30 = 0x3f800000;
                    local_28 = 0;
                    local_20 = 0;
                    local_38 = iVar3;
                    (**(code **)(**(longlong **)(lVar5 + 0x71b8) + 0x248))
                            (*(longlong **)(lVar5 + 0x71b8),uVar6,&local_38);
                }
                iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x71c0) + 0x198))
                        (*(longlong **)(lVar5 + 0x71c0),iVar3);
                if ((iVar4 != 0) || (iVar3 == 0)) {
                    local_34 = 0;
                    local_30 = 0x3f800000;
                    local_28 = 0;
                    local_20 = 0;
                    local_38 = iVar3;
                    (**(code **)(**(longlong **)(lVar5 + 0x71c0) + 0x248))
                            (*(longlong **)(lVar5 + 0x71c0),uVar6,&local_38);
                }
                *(undefined4 *)(param_1 + 0x1d) = 1;
                return;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 10);
    }
    lVar5 = DAT_140c65898;
    pplVar7 = (longlong **)(DAT_140c65898 + 0x7238);
    uVar6 = 0;
    plVar2 = *pplVar7;
    if (plVar2 != (longlong *)0x0) {
        uVar6 = *(uint *)(plVar2 + 0x34);
    }
    if (*(uint *)(param_1 + 0x34) < uVar6) {
        if ((*(int *)((longlong)param_1 + 0xfc) == 0) && (*(int *)((longlong)param_1 + 0xf4) == 0)) {
            (**(code **)(*param_1 + 0x50))(param_1,0);
            return;
        }
        if (param_1[0x35] != 0) {
            return;
        }
        while ((plVar2 != (longlong *)0x0 &&
                ((int)(*(uint *)(param_1 + 0x34) - *(int *)(*pplVar7 + 0x34)) < 0))) {
            pplVar7 = (longlong **)(*pplVar7 + 0x36);
            plVar2 = *pplVar7;
        }
    }
    else {
        iVar3 = *(int *)(param_1 + 0x31);
        iVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x71b8) + 0x198))
                (*(longlong **)(DAT_140c65898 + 0x71b8),iVar3);
        if ((iVar4 != 0) || (iVar3 == 0)) {
            local_34 = 0;
            local_30 = 0x3f800000;
            local_28 = 0;
            local_20 = 0;
            local_38 = iVar3;
            (**(code **)(**(longlong **)(lVar5 + 0x71b8) + 0x248))
                    (*(longlong **)(lVar5 + 0x71b8),4,&local_38);
        }
        iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x71c0) + 0x198))
                (*(longlong **)(lVar5 + 0x71c0),iVar3);
        if ((iVar4 != 0) || (iVar3 == 0)) {
            local_34 = 0;
            local_30 = 0x3f800000;
            local_28 = 0;
            local_20 = 0;
            local_38 = iVar3;
            (**(code **)(**(longlong **)(lVar5 + 0x71c0) + 0x248))
                    (*(longlong **)(lVar5 + 0x71c0),4,&local_38);
        }
        *(undefined4 *)(param_1 + 0x1d) = 1;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 4;
        plVar2 = *pplVar7;
        if (plVar2 != (longlong *)0x0) {
            if ((*(int *)((longlong)plVar2 + 0xf4) == 0) &&
                (lVar5 = (**(code **)(*plVar2 + 0x10))(plVar2), *(int *)(lVar5 + 0xc) == 0)) {
                (**(code **)(*plVar2 + 0x50))(plVar2,1);
            }
            *(undefined4 *)(plVar2 + 0x1d) = 0;
        }
        if (param_1[0x35] != 0) {
            return;
        }
    }
    param_1[0x35] = (longlong)pplVar7;
    pplVar1 = (longlong **)(param_1 + 0x36);
    *pplVar1 = *pplVar7;
    *pplVar7 = param_1;
    if (*pplVar1 != (longlong *)0x0) {
        (*pplVar1)[0x35] = (longlong)pplVar1;
    }
    return;
}



void FUN_14071b880(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    int local_28;
    undefined4 local_24;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = DAT_140c65898;
    iVar1 = *(int *)(param_1 + 0x188);
    iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x71b8) + 0x198))
            (*(longlong **)(DAT_140c65898 + 0x71b8),iVar1);
    if ((iVar3 != 0) || (iVar1 == 0)) {
        local_24 = 0;
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        local_28 = iVar1;
        (**(code **)(**(longlong **)(lVar2 + 0x71b8) + 0x248))
                (*(longlong **)(lVar2 + 0x71b8),4,&local_28);
    }
    iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x71c0) + 0x198))
            (*(longlong **)(lVar2 + 0x71c0),iVar1);
    if ((iVar3 != 0) || (iVar1 == 0)) {
        local_24 = 0;
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        local_28 = iVar1;
        (**(code **)(**(longlong **)(lVar2 + 0x71c0) + 0x248))
                (*(longlong **)(lVar2 + 0x71c0),4,&local_28);
    }
    *(undefined4 *)(param_1 + 0xe8) = 1;
    return;
}



void FUN_14071b970(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    if (*(undefined8 **)(param_1 + 0x1a8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1b0);
    }
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x1a8) = *(undefined8 *)(param_1 + 0x1a8);
    }
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    if ((*(int *)(param_1 + 0xe8) != 0) &&
        (*(undefined4 *)(param_1 + 0xe8) = 0, lVar1 = DAT_140c65898, param_2 == 0)) {
        iVar2 = *(int *)(param_1 + 0xe4);
        if (iVar2 == 4) {
            if (*(longlong *)(DAT_140c65898 + 0x7238) != 0) {
                FUN_14071b880();
                goto LAB_14071baf2;
            }
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x71b8) + 0x198))
                    (*(longlong **)(DAT_140c65898 + 0x71b8),0);
            local_38 = 0;
            local_30 = 0x3f800000;
            local_28 = 0;
            local_20 = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x71b8) + 0x248))
                    (*(longlong **)(lVar1 + 0x71b8),4,&local_38);
            (**(code **)(**(longlong **)(lVar1 + 0x71c0) + 0x198))(*(longlong **)(lVar1 + 0x71c0),0);
            iVar2 = 4;
        }
        else {
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x71b8) + 0x198))
                    (*(longlong **)(DAT_140c65898 + 0x71b8),0);
            local_38 = 0;
            local_30 = 0x3f800000;
            local_28 = 0;
            local_20 = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x71b8) + 0x248))
                    (*(longlong **)(lVar1 + 0x71b8),iVar2,&local_38);
            (**(code **)(**(longlong **)(lVar1 + 0x71c0) + 0x198))(*(longlong **)(lVar1 + 0x71c0),0);
        }
        local_38 = 0;
        local_30 = 0x3f800000;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(**(longlong **)(lVar1 + 0x71c0) + 0x248))
                (*(longlong **)(lVar1 + 0x71c0),iVar2,&local_38);
    }
    LAB_14071baf2:
    FUN_14071a150(param_1,param_2);
    return;
}



undefined8 * FUN_14071bb10(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b74250;
    FUN_140719d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071bb50(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar1 = (undefined4 *)(param_1 + 0xe0);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar8 = puVar5;
            puVar7 = param_2;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar8[0x18] = puVar7[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar8[0x1c] = puVar7[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        puVar8[0x20] = puVar7[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar7[0x25];
        uVar3 = puVar7[0x26];
        uVar4 = puVar7[0x27];
        puVar8[0x24] = puVar7[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
        *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(puVar7 + 0x28);
    }
    else {
        FUN_1407db590(puVar1,param_2,0xa8);
    }
    FUN_140719ef0(param_1,puVar1);
    return;
}



undefined8 * FUN_14071bce0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b742b0;
    FUN_140719d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071bd20(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar1 = (undefined4 *)(param_1 + 0xe0);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar8 = puVar5;
            puVar7 = param_2;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar8[0x18] = puVar7[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar8[0x1c] = puVar7[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        puVar8[0x20] = puVar7[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar7[0x25];
        uVar3 = puVar7[0x26];
        uVar4 = puVar7[0x27];
        puVar8[0x24] = puVar7[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
    }
    else {
        FUN_1407db590(puVar1,param_2,0xa0);
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_140719ef0(param_1,puVar1);
    return;
}



void FUN_14071bdf0(void)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1402402c0();
    if (lVar1 != 0) {
        uVar2 = FUN_14034bdd0();
        if (*(int *)(lVar1 + 0x10) != 0) {
            FUN_14042a360(*(undefined8 *)(DAT_140c65898 + 0x7340),*(undefined4 *)(lVar1 + 0xc),uVar2,
                          *(int *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18));
            FUN_140003890(DAT_140c658a0,0x17,0,uVar2,0,0);
        }
    }
    return;
}



undefined8 * FUN_14071be70(undefined8 *param_1)

{
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 7) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
    param_1[0x1a] = 0;
    *param_1 = &PTR_FUN_140b74310;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x29) = 3;
    *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
    return param_1;
}



undefined8 FUN_14071bf40(undefined8 param_1,ulonglong param_2)

{
    FUN_14071bf80();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071bf80(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b74310;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1c] + 0x288))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x460))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x458))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))();
        (**(code **)(*(longlong *)param_1[0x1c] + 0x3a8))();
    }
    FUN_140195d70(param_1 + 0x1f);
    *(undefined4 *)(param_1 + 0x1f) = 0;
    if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x21] = param_1[0x22];
    }
    if ((undefined8 *)param_1[0x22] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x22] = param_1[0x21];
    }
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1c] + 8))();
    }
    FUN_140719d60(param_1);
    return;
}



ulonglong FUN_14071c0b0(longlong *param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    longlong *plVar3;
    ulonglong uVar4;

    if ((*(short **)(param_2 + 0x98) == (short *)0x0) || (**(short **)(param_2 + 0x98) == 0)) {
        return 0x80004005;
    }
    iVar1 = *(int *)(param_2 + 0xc0);
    *(int *)((longlong)param_1 + 0xf4) = iVar1;
    if (iVar1 == 0) {
        iVar1 = 0x96;
    }
    *(int *)((longlong)param_1 + 0xf4) = iVar1;
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x78))(param_1);
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_2 + 0x98),param_1 + 0x1c,1);
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) {
        FUN_1400035b0(0x18,0,0,*(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x98));
        uVar4 = uVar4 & 0xffffffff;
    }
    else {
        if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x1c] + 0x2e0))();
        }
        uVar4 = FUN_140719ef0(param_1,param_2);
        if (-1 < (int)uVar4) {
            *(uint *)(param_1 + 0x28) = (uint)(*(int *)(param_2 + 4) != 0);
            return 0;
        }
    }
    return uVar4;
}



void FUN_14071c1b0(longlong *param_1)

{
    FUN_140195d70(param_1 + 0x10);
    // WARNING: Could not recover jumptable at 0x00014071c1cd. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
}



void FUN_14071c1e0(longlong *param_1)

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
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar1 + 0xc) != 0) {
        if (*(int *)(param_1 + 0x28) != 0) {
            *(undefined4 *)(param_1 + 0x28) = 0;
        }
        *(undefined4 *)(param_1 + 0x29) = 2;
        FUN_14071c730(param_1);
        return;
    }
    return;
}



void FUN_14071c260(longlong *param_1)

{
    longlong *plVar1;
    undefined4 local_18 [6];

    if (*(int *)((longlong)param_1 + 0x144) != 0) {
        // WARNING: Could not recover jumptable at 0x00014071c279. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x50))(param_1,1);
        return;
    }
    if ((param_1[9] != 0) && (plVar1 = (longlong *)param_1[0x1c], plVar1 != (longlong *)0x0)) {
        local_18[0] = 0;
        (**(code **)(*plVar1 + 0x10))(plVar1,local_18,0);
        return;
    }
    if ((param_1[0x1c] != 0) && (*(int *)(param_1 + 0x1d) == 0)) {
        // WARNING: Could not recover jumptable at 0x00014071c2c8. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x68))();
        return;
    }
    return;
}



void FUN_14071c2e0(longlong *param_1,int param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;

    if ((param_2 == 0) && (*(int *)((longlong)param_1 + 0xec) != 0)) {
        lVar2 = (**(code **)(*param_1 + 0x10))();
        if (*(int *)(lVar2 + 0xc) != 0) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            FUN_140195d70(param_1 + 7);
            FUN_140195d70(param_1 + 0x10);
            if ((longlong *)param_1[1] != (longlong *)0x0) {
                *(longlong *)param_1[1] = param_1[2];
            }
            if (param_1[2] != 0) {
                *(longlong *)(param_1[2] + 8) = param_1[1];
            }
            param_1[1] = 0;
            param_1[2] = 0;
            *(undefined4 *)(param_1 + 0x29) = 2;
            FUN_14071c730(param_1);
            return;
        }
    }
    plVar1 = (longlong *)param_1[0x1c];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1,0,0);
        (**(code **)(*(longlong *)param_1[0x1c] + 0x460))((longlong *)param_1[0x1c],0,0);
        if (param_3 != 0) {
            (**(code **)(*(longlong *)param_1[0x1c] + 0x458))();
            (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3d);
            (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3e);
            (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3f);
            (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x40);
            (**(code **)(*(longlong *)param_1[0x1c] + 0x3a8))();
        }
        if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x1c] + 8))();
            param_1[0x1c] = 0;
        }
    }
    FUN_14071a150(param_1,param_2);
    return;
}



void FUN_14071c4a0(longlong *param_1,longlong param_2)

{
    (**(code **)(*param_1 + 0x3a8))();
    if (*(longlong **)(param_2 + 0xe0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0xe0) + 8))();
        *(undefined8 *)(param_2 + 0xe0) = 0;
    }
    *(undefined4 *)(param_2 + 0x144) = 1;
    return;
}



void FUN_14071c4e0(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    double dVar7;
    undefined4 local_38;
    undefined4 local_34;
    longlong *local_30;
    undefined *local_28;
    undefined8 local_20;

    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3d,1);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3e,1);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3f,1);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x40,1);
    dVar7 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
    *(int *)(param_1 + 0x1e) = (int)(dVar7 * 65536.0);
    lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
    iVar5 = *(int *)(lVar4 + 4);
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar6 = 0x536;
    if (((*(int *)(lVar4 + 0x40) != 0) ||
         (iVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0x198))((longlong *)param_1[0x1c],0x536),
                 iVar2 == 0)) ||
        (iVar3 = (**(code **)(*(longlong *)param_1[0x1c] + 0x198))((longlong *)param_1[0x1c],0xa5),
                iVar2 = 1, iVar3 == 0)) {
        iVar2 = 0;
    }
    *(int *)((longlong)param_1 + 0xec) = iVar2;
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
        iVar3 = 0;
        if (iVar2 == 0) {
            uVar6 = *(undefined4 *)((longlong)param_1 + 0xf4);
        }
        else {
            lVar4 = (**(code **)(*(longlong *)param_1[0x1c] + 0x1a8))
                    ((longlong *)param_1[0x1c],0x536,*(undefined4 *)(param_1 + 0x1e));
            iVar3 = *(int *)(lVar4 + 0x14);
            (**(code **)(*(longlong *)param_1[0x1c] + 0x1a8))
                    ((longlong *)param_1[0x1c],0xa5,*(undefined4 *)(param_1 + 0x1e));
            if ((*(int *)(param_1 + 0x28) != 0) &&
                (lVar4 = (**(code **)(*param_1 + 0x10))(param_1), *(int *)(lVar4 + 0xc) == 0)) {
                iVar5 = iVar5 - iVar3;
            }
        }
        lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
        if (*(int *)(lVar4 + 0xc) == 0) {
            if (iVar5 < 1) {
                *(undefined4 *)(param_1 + 0x28) = 0;
            }
            else {
                local_38 = 0;
                local_28 = &LAB_14071ca00;
                local_20 = 0;
                local_30 = param_1;
                FUN_140195960(param_1 + 0x1f,iVar3 + iVar5,&local_38,4);
            }
        }
    }
    (**(code **)(*(longlong *)param_1[0x1c] + 0x288))
            ((longlong *)param_1[0x1c],&LAB_14071c460,param_1);
    plVar1 = (longlong *)param_1[0x1c];
    lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
    local_34 = *(undefined4 *)(param_1 + 0x1e);
    local_30 = (longlong *)CONCAT44(*(undefined4 *)(lVar4 + 0xc4),0x3f800000);
    local_28 = (undefined *)0x0;
    local_20 = 0;
    local_38 = uVar6;
    (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_38);
    return;
}



void FUN_14071c730(longlong *param_1)

{
    longlong *plVar1;
    double dVar2;
    undefined4 local_28;
    int local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x28) == 0) {
        if (*(int *)((longlong)param_1 + 0xec) == 0) {
            if (param_1[0x21] == 0) {
                (**(code **)(*param_1 + 0x50))(param_1,0);
            }
        }
        else {
            plVar1 = (longlong *)param_1[0x1c];
            if (plVar1 != (longlong *)0x0) {
                if (*(int *)(param_1 + 0x29) == 0) {
                    local_24 = FUN_1401ae6a0(0);
                    local_28 = *(undefined4 *)((longlong)param_1 + 0xf4);
                    local_20 = 0x3f800000;
                    *(int *)(param_1 + 0x1e) = local_24;
                    local_1c = 0;
                    local_14 = 0;
                    local_c = 0;
                    (**(code **)(*(longlong *)param_1[0x1c] + 0x248))((longlong *)param_1[0x1c],0,&local_28);
                    *(undefined4 *)(param_1 + 0x29) = 1;
                    return;
                }
                (**(code **)(*plVar1 + 0x288))(plVar1,&LAB_14071c480,param_1);
                local_24 = *(int *)(param_1 + 0x1e);
                local_20 = 0x3f800000;
                local_28 = 0xa5;
                local_1c = 0;
                local_14 = 0;
                local_c = 0;
                (**(code **)(*(longlong *)param_1[0x1c] + 0x248))((longlong *)param_1[0x1c],0,&local_28);
                *(undefined4 *)(param_1 + 0x29) = 2;
                return;
            }
        }
    }
    else if (param_1[0x1c] != 0) {
        dVar2 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        local_28 = *(undefined4 *)((longlong)param_1 + 0xf4);
        local_24 = (int)(dVar2 * 65536.0);
        *(int *)(param_1 + 0x1e) = local_24;
        local_1c = 0;
        local_20 = 0x3f800000;
        local_14 = 0;
        local_c = 0;
        (**(code **)(*(longlong *)param_1[0x1c] + 0x248))((longlong *)param_1[0x1c],0,&local_28);
        return;
    }
    return;
}



void FUN_14071c8d0(longlong *param_1)

{
    longlong lVar1;

    if (param_1[0x1c] == 0) {
        FUN_14071a150();
        return;
    }
    lVar1 = (**(code **)(*param_1 + 0x70))();
    if (*(int *)(lVar1 + 200) != 0) {
        // WARNING: Could not recover jumptable at 0x00014071c907. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x28))(param_1,0,1);
        return;
    }
    FUN_140195d70(param_1 + 7);
    FUN_140195d70(param_1 + 0x10);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x288))((longlong *)param_1[0x1c],0,0);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x460))((longlong *)param_1[0x1c],FUN_14071c4a0,param_1)
            ;
    (**(code **)(*(longlong *)param_1[0x1c] + 0x458))();
    lVar1 = param_1[0x1a];
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x2b0) == 0)) &&
        ((*(longlong *)(lVar1 + 0x280) != 0 || (*(longlong *)(lVar1 + 0x278) != 0)))) {
        FUN_1407191f0();
    }
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3d);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3e);
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3f);
    // WARNING: Could not recover jumptable at 0x00014071c9e8. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x40);
    return;
}



longlong FUN_14071ca20(longlong param_1,longlong param_2)

{
    FUN_14071cae0();
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    return param_1;
}



undefined4 * FUN_14071cae0(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
        lVar6 = 1;
        puVar4 = param_1;
        puVar5 = param_2;
        do {
            puVar8 = puVar5;
            puVar7 = puVar4;
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *puVar7 = *puVar8;
            puVar7[1] = uVar1;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
            uVar1 = puVar8[5];
            uVar2 = puVar8[6];
            uVar3 = puVar8[7];
            puVar7[4] = puVar8[4];
            puVar7[5] = uVar1;
            puVar7[6] = uVar2;
            puVar7[7] = uVar3;
            uVar1 = puVar8[9];
            uVar2 = puVar8[10];
            uVar3 = puVar8[0xb];
            puVar7[8] = puVar8[8];
            puVar7[9] = uVar1;
            puVar7[10] = uVar2;
            puVar7[0xb] = uVar3;
            uVar1 = puVar8[0xd];
            uVar2 = puVar8[0xe];
            uVar3 = puVar8[0xf];
            puVar7[0xc] = puVar8[0xc];
            puVar7[0xd] = uVar1;
            puVar7[0xe] = uVar2;
            puVar7[0xf] = uVar3;
            uVar1 = puVar8[0x11];
            uVar2 = puVar8[0x12];
            uVar3 = puVar8[0x13];
            puVar7[0x10] = puVar8[0x10];
            puVar7[0x11] = uVar1;
            puVar7[0x12] = uVar2;
            puVar7[0x13] = uVar3;
            uVar1 = puVar8[0x15];
            uVar2 = puVar8[0x16];
            uVar3 = puVar8[0x17];
            puVar7[0x14] = puVar8[0x14];
            puVar7[0x15] = uVar1;
            puVar7[0x16] = uVar2;
            puVar7[0x17] = uVar3;
            uVar1 = puVar8[0x19];
            uVar2 = puVar8[0x1a];
            uVar3 = puVar8[0x1b];
            puVar7[0x18] = puVar8[0x18];
            puVar7[0x19] = uVar1;
            puVar7[0x1a] = uVar2;
            puVar7[0x1b] = uVar3;
            uVar1 = puVar8[0x1d];
            uVar2 = puVar8[0x1e];
            uVar3 = puVar8[0x1f];
            puVar7[0x1c] = puVar8[0x1c];
            puVar7[0x1d] = uVar1;
            puVar7[0x1e] = uVar2;
            puVar7[0x1f] = uVar3;
            lVar6 = lVar6 + -1;
            puVar4 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar1 = puVar8[0x21];
        uVar2 = puVar8[0x22];
        uVar3 = puVar8[0x23];
        puVar7[0x20] = puVar8[0x20];
        puVar7[0x21] = uVar1;
        puVar7[0x22] = uVar2;
        puVar7[0x23] = uVar3;
        *(undefined8 *)(puVar7 + 0x24) = *(undefined8 *)(puVar8 + 0x24);
    }
    else {
        FUN_1407db590(param_1,param_2,0x98);
    }
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    param_1[0x28] = param_2[0x28];
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x2b] = param_2[0x2b];
    uVar1 = param_2[0x2d];
    uVar2 = param_2[0x2e];
    uVar3 = param_2[0x2f];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = uVar1;
    param_1[0x2e] = uVar2;
    param_1[0x2f] = uVar3;
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = param_2[0x31];
    param_1[0x32] = param_2[0x32];
    return param_1;
}



void FUN_14071cc10(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    if (*(longlong **)(param_3 + 0xe0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_3 + 0xe0) + 0x70))();
    }
    *(undefined4 *)(param_3 + 0x14c) = param_2;
    return;
}



void FUN_14071cc50(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    undefined8 uVar2;
    undefined auVar4 [16];
    undefined auVar5 [16];
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;
    undefined auVar3 [12];

    plVar1 = *(longlong **)(param_1 + 0xe0);
    uVar2 = CONCAT44(param_2,param_2);
    auVar3 = CONCAT48(param_2,uVar2);
    auVar4 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
                                                                                                       (CONCAT97((unkuint9)
                                                                                                                         SUB158(CONCAT78(SUB157(CONCAT69(SUB156(
                                                                                                                                                                 CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153
                                                                                                                                                                                                                     (CONCAT213(SUB152(CONCAT114((char)((uint)param_2
                                                                                                                                                                                                                                                         >> 0x18),
                                                                                                                                                                                                                                                 SUB1614(CONCAT412(
                                                                                                                                                                                                                                                         param_2,auVar3),0)) >> 0x68,0),
                                                                                                                                                                                                                                CONCAT112((char)((uint)param_2 >> 0x10),auVar3))
                                                                                                                                                                                                                              >> 0x60,0),auVar3) >> 0x58,0),
                                                                                                                                                                                            CONCAT110((char)((uint)param_2 >> 8),
                                                                                                                                                                                                      SUB1210(auVar3,0))) >> 0x50,0),
                                                                                                                                                                           SUB1210(auVar3,0)) >> 0x48,0),
                                                                                                                                                         CONCAT18((char)param_2,uVar2)) >> 0x40,0),uVar2)
                                                                                                                                        >> 0x38,0) &
                                                                                                                 SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                         ,0) &
                                                                                                                 SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                         ,0) &
                                                                                                                 SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                         ,0) &
                                                                                                                 SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                         ,0),((uint7)uVar2 >> 0x18) << 0x30) >> 0x30
                                                                                                               ,0),(int6)uVar2) >> 0x28,0) &
                                                                             SUB1611((undefined  [16])0xffff00ffffffffff >>
                                                                                                                         0x28,0),((uint5)uVar2 >> 0x10) << 0x20) >>
                                                                                                                                                                 0x20,0),param_2) >> 0x18,0) &
                                         SUB1613((undefined  [16])0xffffffff00ffffff >> 0x18,0),
                                         ((uint3)param_2 >> 8) << 0x10) >> 0x10,0),(short)param_2) &
             (undefined  [16])0xffffffffffff00ff;
    auVar5 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar4 >> 0x30,0),SUB1612(auVar4,0)) >> 0x50,0),
                                                                                  CONCAT28(SUB162(auVar4 >> 0x20,0),SUB168(auVar4,0)
                                                                                  )) >> 0x40,0),SUB168(auVar4,0)) >> 0x30,0)
                                         & SUB1610((undefined  [16])0xffffffffffffffff >> 0x30,0) &
                                         SUB1610((undefined  [16])0xffffffffffffffff >> 0x30,0),
                                         (SUB166(auVar4,0) >> 0x10) << 0x20) >> 0x20,0),
                       SUB164(auVar4,0)) & (undefined  [16])0xffffffff0000ffff;
    local_18 = (float)SUB164(auVar5 >> 0x40,0) * 0.003921569;
    fStack20 = (float)SUB164(auVar5 >> 0x20,0) * 0.003921569;
    fStack16 = (float)(SUB164(auVar4,0) & 0xffff) * 0.003921569;
    fStack12 = (float)SUB164(auVar5 >> 0x60,0) * 0.003921569;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x470))(plVar1,&local_18);
        *(undefined4 *)(param_1 + 0x150) = param_2;
        return;
    }
    *(undefined4 *)(param_1 + 0x150) = param_2;
    return;
}



undefined8 FUN_14071ccd0(longlong *param_1)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;

    if (*(int *)((longlong)param_1 + 0x234) == 0) {
        lVar3 = (**(code **)(*param_1 + 0x80))();
        if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x80) == 0x12) {
                return *(undefined8 *)(lVar3 + 0x3698);
            }
            return *(undefined8 *)(lVar3 + 0x16e8);
        }
    }
    else {
        plVar1 = (longlong *)(**(code **)(*param_1 + 0x88))();
        if (plVar1 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x00014071cd08. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*plVar1 + 0x70))
                    (plVar1,*(undefined4 *)((longlong)param_1 + 0x234),
                     *(undefined4 *)(param_1 + 0x47));
            return uVar2;
        }
    }
    return 0;
}



void FUN_14071cd50(longlong *param_1)

{
    undefined2 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined2 *puVar6;
    undefined auVar7 [12];
    undefined auVar8 [16];
    undefined auVar9 [16];
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar10;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    local_18 = 0.0;
    iVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0x10))((longlong *)param_1[0x1c],&local_18,0);
    if (iVar2 == 0) {
        return;
    }
    if (*(int *)(param_1 + 0x1d) != 0) {
        return;
    }
    lVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x90))();
    if (plVar4 == (longlong *)0x0) {
        if (lVar3 == 0) goto LAB_14071cf2a;
        iVar2 = *(int *)((longlong)param_1 + 0x234);
        puVar1 = *(undefined2 **)(lVar3 + 0x10);
        if (iVar2 == 0) {
            puVar6 = &DAT_140b7b704;
            if (puVar1 != (undefined2 *)0x0) {
                puVar6 = puVar1;
            }
            FUN_1400035b0(0x18,0,0,puVar6);
            // WARNING: Could not recover jumptable at 0x00014071ce13. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x50))(param_1);
            return;
        }
        puVar6 = &DAT_140b7b704;
        if (puVar1 != (undefined2 *)0x0) {
            puVar6 = puVar1;
        }
    }
    else {
        local_18 = 0.0;
        iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_18,0);
        if (iVar2 == 0) {
            return;
        }
        *(undefined4 *)(param_1 + 0x1d) = 1;
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3d,1);
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3e,1);
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x3f,1);
        (**(code **)(*(longlong *)param_1[0x1c] + 0x2d8))((longlong *)param_1[0x1c],0x40,1);
        iVar2 = (**(code **)(*plVar4 + 0x350))(plVar4,*(undefined4 *)((longlong)param_1 + 0x23c));
        if (iVar2 != 0) {
            FUN_14071cfe0(param_1,lVar3,plVar4);
            (**(code **)(*plVar4 + 0x380))
                    (plVar4,*(undefined4 *)((longlong)param_1 + 0x23c),param_1[0x1c]);
            FUN_14071c4e0(param_1);
            (**(code **)(*(longlong *)param_1[0x1c] + 0x70))();
            uVar10 = *(undefined4 *)(param_1 + 0x2a);
            uVar5 = CONCAT44(uVar10,uVar10);
            auVar7 = CONCAT48(uVar10,uVar5);
            auVar8 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(
                                                         SUB1610(CONCAT97((unkuint9)
                                                                                  SUB158(CONCAT78(SUB157(CONCAT69(
                                                                                          SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312
                                                                                                                                           (SUB153(CONCAT213(SUB152(CONCAT114((char)((uint)
                                                                                                                                                                                      uVar10 >> 0x18),
                                                                                                                                                                              SUB1614(CONCAT412(uVar10,auVar7),0)) >> 0x68,0),
                                                                                                                                                             CONCAT112((char)((uint)uVar10 >> 0x10),auVar7)) >>
                                                                                                                                                                                                             0x60,0),auVar7) >> 0x58,0),
                                                                                                                            CONCAT110((char)((uint)uVar10 >> 8),
                                                                                                                                      SUB1210(auVar7,0))) >> 0x50,0),
                                                                                                           SUB1210(auVar7,0)) >> 0x48,0),
                                                                                          CONCAT18((char)uVar10,uVar5)) >> 0x40,0),uVar5) >>
                                                                                                                                          0x38,0) & SUB169((undefined  [16])
                                                                                                                                                                   0xffffffffffffffff >> 0x38,0) &
                                                                          SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                  ,0) &
                                                                          SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                  ,0) &
                                                                          SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                  ,0),((uint7)uVar5 >> 0x18) << 0x30) >> 0x30
                                                                 ,0),(int6)uVar5) >> 0x28,0) &
                                                                                     SUB1611((undefined  [16])0xffff00ffffffffff >>
                                                                                                                                 0x28,0),((uint5)uVar5 >> 0x10) << 0x20) >>
                                                                                                                                                                         0x20,0),uVar10) >> 0x18,0) &
                                                 SUB1613((undefined  [16])0xffffffff00ffffff >> 0x18,0),
                                                 ((uint3)uVar10 >> 8) << 0x10) >> 0x10,0),(short)uVar10) &
                     (undefined  [16])0xffffffffffff00ff;
            auVar9 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                         SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                                  auVar8 >> 0x30,0),SUB1612(auVar8,0)) >> 0x50,0),
                                                                                          CONCAT28(SUB162(auVar8 >> 0x20,0),SUB168(auVar8,0)
                                                                                          )) >> 0x40,0),SUB168(auVar8,0)) >> 0x30,0)
                                                 & SUB1610((undefined  [16])0xffffffffffffffff >> 0x30,0)
                                                 & SUB1610((undefined  [16])0xffffffffffffffff >> 0x30,0),
                                                 (SUB166(auVar8,0) >> 0x10) << 0x20) >> 0x20,0),
                               SUB164(auVar8,0)) & (undefined  [16])0xffffffff0000ffff;
            local_18 = (float)SUB164(auVar9 >> 0x40,0) * 0.003921569;
            fStack20 = (float)SUB164(auVar9 >> 0x20,0) * 0.003921569;
            fStack16 = (float)(SUB164(auVar8,0) & 0xffff) * 0.003921569;
            fStack12 = (float)SUB164(auVar9 >> 0x60,0) * 0.003921569;
            (**(code **)(*(longlong *)param_1[0x1c] + 0x470))((longlong *)param_1[0x1c],&local_18);
            return;
        }
        if (*(int *)((longlong)param_1 + 0x234) != 0) {
            uVar5 = (**(code **)(*plVar4 + 0x30))();
            FUN_1400035b0(0x18,0,0,*(undefined4 *)((longlong)param_1 + 0x23c),
                          CONCAT44(uVar10,*(undefined4 *)((longlong)param_1 + 0x234)),uVar5);
            // WARNING: Could not recover jumptable at 0x00014071cf0a. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x50))(param_1);
            return;
        }
        puVar6 = (undefined2 *)(**(code **)(*plVar4 + 0x30))(plVar4);
        iVar2 = *(int *)((longlong)param_1 + 0x23c);
    }
    FUN_1400035b0(0x18,0,0,iVar2,puVar6);
    LAB_14071cf2a:
    // WARNING: Could not recover jumptable at 0x00014071cf41. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x50))(param_1,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14071cfe0(longlong *param_1,longlong param_2,longlong *param_3)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    float *pfVar8;
    undefined4 uVar9;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    undefined auVar10 [12];
    float extraout_XMM0_Db;
    undefined auVar11 [16];
    undefined auVar12 [16];
    float fVar13;
    float fVar14;
    float fVar15;
    undefined auVar16 [12];
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    uint uVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined auStack552 [32];
    undefined local_208 [8];
    float fStack512;
    float fStack508;
    undefined local_1f8 [8];
    float fStack496;
    float fStack492;
    undefined local_1e8 [4];
    undefined auStack484 [4];
    undefined8 uStack480;
    undefined local_1d8 [8];
    float fStack464;
    float fStack460;
    undefined local_1c8 [16];
    undefined local_1b8 [8];
    float fStack432;
    float local_1a8;
    float fStack420;
    float fStack416;
    float fStack412;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    undefined8 local_178;
    float fStack368;
    float fStack364;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    float *local_158;
    undefined *puStack336;
    undefined4 uStack308;
    undefined4 uStack300;
    undefined8 local_128;
    float fStack288;
    float fStack284;
    float **local_108 [10];
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    if ((param_1[0x1c] == 0) || (param_3 == (longlong *)0x0)) goto LAB_14071df7d;
    bVar2 = false;
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    iVar3 = 0;
    _local_1b8 = ZEXT816(0);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x88))();
    if ((*(int *)((longlong)param_1 + 0x234) == 0) && (plVar5 != (longlong *)0x0)) {
        iVar4 = *(int *)((longlong)param_1 + 0x23c);
        if (iVar4 == 0x54) {
            uVar9 = 1;
        }
        else {
            if ((iVar4 != 0x55) && (iVar4 != 0xbb)) goto LAB_14071d0b8;
            uVar9 = 0;
        }
        iVar3 = (**(code **)(*plVar5 + 0x88))(plVar5,uVar9,local_1b8);
    }
    LAB_14071d0b8:
    local_208 = CONCAT44(uRam0000000140c78394,_DAT_140c78390);
    _local_208 = CONCAT48(uRam0000000140c78398,local_208);
    _local_208 = CONCAT412(uRam0000000140c7839c,_local_208);
    local_1f8 = CONCAT44(uRam0000000140c783a4,_DAT_140c783a0);
    _local_1f8 = CONCAT48(uRam0000000140c783a8,local_1f8);
    _local_1f8 = CONCAT412(uRam0000000140c783ac,_local_1f8);
    _local_1e8 = CONCAT44(uRam0000000140c783b4,_DAT_140c783b0);
    _local_1e8 = CONCAT48(uRam0000000140c783b8,_local_1e8);
    _local_1e8 = CONCAT412(fRam0000000140c783bc,_local_1e8);
    local_1d8 = CONCAT44(uRam0000000140c783c4,_DAT_140c783c0);
    _local_1d8 = CONCAT48(uRam0000000140c783c8,local_1d8);
    _local_1d8 = CONCAT412(fRam0000000140c783cc,_local_1d8);
    lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x4a));
    lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x254));
    fVar27 = 0.0;
    bVar1 = bVar2;
    if (*(int *)((longlong)param_1 + 0x24c) == 0) {
        if ((*(int *)(param_1 + 0x49) == 0) || (lVar7 == 0)) {
            if (iVar3 != 0) {
                _local_1d8 = CONCAT48(fStack464 + fStack432,
                                      CONCAT44(local_1d8._4_4_ + local_1b8._4_4_,
                                               local_1d8._0_4_ + local_1b8._0_4_));
            }
        }
        else {
            (**(code **)(*param_3 + 0x378))
                    (param_3,*(undefined4 *)((longlong)param_1 + 0x23c),&local_158,1);
            if (iVar3 != 0) {
                pfVar8 = (float *)(**(code **)(*param_3 + 0x50))();
                fStack364 = pfVar8[0xf];
                local_178 = CONCAT44(fVar25,fVar23);
                local_128 = CONCAT44(local_128._4_4_ +
                                     local_1b8._4_4_ * pfVar8[5] + local_1b8._0_4_ * pfVar8[1] +
                                     fStack432 * pfVar8[9] + fVar25,
                                     (float)local_128 +
                                     local_1b8._4_4_ * pfVar8[4] + local_1b8._0_4_ * *pfVar8 +
                                     fStack432 * pfVar8[8] + fVar23);
                fStack288 = fStack288 +
                            local_1b8._4_4_ * pfVar8[6] + local_1b8._0_4_ * pfVar8[2] +
                            fStack432 * pfVar8[10] + fVar26;
                fStack368 = fVar26;
            }
            if ((1e-05 < (float)((uint)(*(float *)(lVar7 + 0x1230) - (float)local_128) & 0x7fffffff)) ||
                (1e-05 < (float)((uint)(*(float *)(lVar7 + 0x1238) - fStack288) & 0x7fffffff))) {
                _local_1d8 = CONCAT48(fStack288,local_128);
                local_1d8._4_4_ = (float)((ulonglong)local_128 >> 0x20);
                local_128._0_4_ = *(float *)(lVar7 + 0x1230) - (float)local_128;
                local_1d8._4_4_ = *(float *)(lVar7 + 0x1234) - local_1d8._4_4_;
                fVar13 = *(float *)(lVar7 + 0x1238) - fStack288;
                fStack460 = *(float *)(lVar7 + 0x123c) - fStack460;
                fVar25 = local_1d8._4_4_ * local_1d8._4_4_;
                fVar26 = (float)local_128 * (float)local_128 + fVar25 + fVar13 * fVar13;
                auVar12 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))),
                                  CONCAT124(SUB1612(CONCAT412(fStack460 * fStack460,
                                                              CONCAT48(fVar13 * fVar13,
                                                                       CONCAT44(fVar25,(float)local_128 *
                                                                                       (float)local_128)))
                                                            >> 0x20,0),fVar26));
                fVar25 = SUB164(auVar12,0);
                fVar25 = (3.0 - fVar26 * fVar25 * fVar25) * 0.5 * fVar25;
                if (fVar25 <= fVar23) {
                    fVar25 = fVar23;
                }
                local_128._0_4_ = fVar25 * (float)local_128;
                local_1d8._4_4_ = fVar25 * local_1d8._4_4_;
                fVar25 = fVar25 * fVar13;
                _local_1e8 = CONCAT48(fVar25,CONCAT44(local_1d8._4_4_,(float)local_128));
                fVar14 = 0.0 - local_1d8._4_4_ * 0.0;
                fVar13 = (float)local_128 * 0.0 - fVar25 * 0.0;
                fVar15 = local_1d8._4_4_ * 0.0 - (float)local_128 * 1.0;
                fVar17 = uStack480._4_4_ * 0.0 - uStack480._4_4_ * 0.0;
                fVar26 = fVar13 * fVar13;
                fVar20 = fVar14 * fVar14 + fVar26 + fVar15 * fVar15;
                auVar12 = rsqrtss(CONCAT412(fVar26,CONCAT48(fVar26,CONCAT44(fVar26,fVar26))),
                                  CONCAT124(SUB1612(CONCAT412(fVar17 * fVar17,
                                                              CONCAT48(fVar15 * fVar15,
                                                                       CONCAT44(fVar26,fVar14 * fVar14))) >>
                                                                                                          0x20,0),fVar20));
                fVar26 = SUB164(auVar12,0);
                fVar26 = (3.0 - fVar20 * fVar26 * fVar26) * 0.5 * fVar26;
                auVar10 = CONCAT48(local_1d8._4_4_,CONCAT44((float)local_128,fVar25));
                if (fVar26 <= fVar23) {
                    fVar26 = fVar23;
                }
                fVar14 = fVar26 * fVar14;
                fVar13 = fVar26 * fVar13;
                fVar26 = fVar26 * fVar15;
                _local_208 = CONCAT48(fVar26,CONCAT44(fVar13,fVar14));
                auVar16 = CONCAT48(fVar13 * (float)local_128,
                                   CONCAT44(fVar14 * fVar25,fVar26 * local_1d8._4_4_));
                LAB_14071d6c7:
                _local_1f8 = CONCAT48(SUB124(auVar16 >> 0x40,0) - fVar14 * SUB124(auVar10 >> 0x40,0),
                                      CONCAT44(SUB124(auVar16 >> 0x20,0) -
                                               fVar26 * SUB124(auVar10 >> 0x20,0),
                                               SUB124(auVar16,0) - fVar13 * SUB124(auVar10,0)));
                goto LAB_14071d6df;
            }
        }
    }
    else {
        bVar1 = false;
        if ((((lVar6 != 0) && (bVar1 = bVar2, param_2 != 0)) &&
             (plVar5 = *(longlong **)(lVar6 + 0x16e8), plVar5 != (longlong *)0x0)) &&
            (iVar4 = (**(code **)(*plVar5 + 0x350))(plVar5,*(undefined4 *)(param_1 + 0x4b)), iVar4 != 0))
        {
            (**(code **)(*param_3 + 0x378))
                    (param_3,*(undefined4 *)((longlong)param_1 + 0x23c),&local_158,1);
            if (iVar3 != 0) {
                pfVar8 = (float *)(**(code **)(*param_3 + 0x50))(param_3);
                fStack364 = pfVar8[0xf];
                local_178 = CONCAT44(fVar25,fVar23);
                local_128 = CONCAT44(local_128._4_4_ +
                                     local_1b8._0_4_ * pfVar8[1] + local_1b8._4_4_ * pfVar8[5] +
                                     fStack432 * pfVar8[9] + fVar25,
                                     (float)local_128 +
                                     local_1b8._0_4_ * *pfVar8 + local_1b8._4_4_ * pfVar8[4] +
                                     fStack432 * pfVar8[8] + fVar23);
                fStack288 = fStack288 +
                            local_1b8._0_4_ * pfVar8[2] + local_1b8._4_4_ * pfVar8[6] +
                            fStack432 * pfVar8[10] + fVar26;
                fStack368 = fVar26;
            }
            lVar6 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            pfVar8 = (float *)(**(code **)(*plVar5 + 0x358))
                    (plVar5,local_1c8,*(undefined4 *)(param_1 + 0x4b),0);
            fVar25 = *(float *)(param_2 + 0x12c4);
            fVar26 = *pfVar8;
            fVar13 = pfVar8[1];
            fVar14 = pfVar8[2];
            auVar12 = CONCAT412(fVar13 * *(float *)(lVar6 + 0xbc) + fVar26 * *(float *)(lVar6 + 0xac) +
                                fVar14 * *(float *)(lVar6 + 0xcc) + *(float *)(lVar6 + 0xdc),
                                CONCAT48(fVar13 * *(float *)(lVar6 + 0xb8) +
                                         fVar26 * *(float *)(lVar6 + 0xa8) +
                                         fVar14 * *(float *)(lVar6 + 200) + *(float *)(lVar6 + 0xd8),
                                         CONCAT44(fVar13 * *(float *)(lVar6 + 0xb4) +
                                                  fVar26 * *(float *)(lVar6 + 0xa4) +
                                                  fVar14 * *(float *)(lVar6 + 0xc4) +
                                                  *(float *)(lVar6 + 0xd4),
                                                  fVar13 * *(float *)(lVar6 + 0xb0) +
                                                  fVar26 * *(float *)(lVar6 + 0xa0) +
                                                  fVar14 * *(float *)(lVar6 + 0xc0) +
                                                  *(float *)(lVar6 + 0xd0))));
            lVar6 = *(longlong *)(param_2 + 0xd08);
            local_1c8 = auVar12;
            if (lVar6 == 0) {
                lVar6 = FUN_14022d500(*(undefined4 *)(param_2 + 0xd8));
                fVar26 = fVar27;
                if (lVar6 != 0) {
                    fVar26 = *(float *)(lVar6 + 0x28);
                }
            }
            else {
                FUN_14047a940(param_2);
                fVar26 = extraout_XMM0_Da * *(float *)(lVar6 + 0x8c);
            }
            fVar17 = (float)local_128 - SUB164(auVar12,0);
            fVar20 = SUB164(auVar12 >> 0x20,0);
            fVar18 = local_128._4_4_ - fVar20;
            fVar21 = SUB164(auVar12 >> 0x40,0);
            fVar19 = fStack288 - fVar21;
            fVar22 = SUB164(auVar12 >> 0x60,0);
            fStack284 = fStack284 - fVar22;
            fVar13 = fVar18 * fVar18;
            fVar14 = fVar19 * fVar19;
            fStack284 = fStack284 * fStack284;
            fVar15 = fVar17 * fVar17 + fVar13 + fVar14;
            local_1f8 = CONCAT44(uRam0000000140c783a4,_DAT_140c783a0);
            _local_1f8 = CONCAT48(uRam0000000140c783a8,local_1f8);
            _local_1f8 = CONCAT412(uRam0000000140c783ac,_local_1f8);
            fStack492 = (float)uRam0000000140c783ac;
            auVar11 = rsqrtss(CONCAT412(fStack284,CONCAT48(fVar14,CONCAT44(fVar13,fVar15))),
                              CONCAT124(SUB1612(CONCAT412(fStack284,
                                                          CONCAT48(fVar14,CONCAT44(fVar13,fVar17 * fVar17)
                                                          )) >> 0x20,0),fVar15));
            fVar13 = SUB164(auVar11,0);
            fVar13 = (3.0 - fVar15 * fVar13 * fVar13) * 0.5 * fVar13;
            if (fVar13 <= fVar23) {
                fVar13 = fVar23;
            }
            fVar14 = fVar13 * fVar17 * fVar26 * fVar25;
            fVar15 = fVar13 * fVar18 * fVar26 * fVar25;
            fVar25 = fVar13 * fVar19 * fVar26 * fVar25;
            local_208 = CONCAT44(uRam0000000140c78394,_DAT_140c78390);
            _local_208 = CONCAT48(uRam0000000140c78398,local_208);
            _local_208 = CONCAT412(uRam0000000140c7839c,_local_208);
            _local_1e8 = CONCAT44(uRam0000000140c783b4,_DAT_140c783b0);
            _local_1e8 = CONCAT48(uRam0000000140c783b8,_local_1e8);
            _local_1e8 = CONCAT412(fRam0000000140c783bc,_local_1e8);
            if (*(int *)((longlong)param_1 + 0x24c) == 1) {
                _local_1d8 = CONCAT48(fStack288 - fVar25,
                                      CONCAT44(local_128._4_4_ - fVar15,(float)local_128 - fVar14));
            }
            else {
                _local_1d8 = CONCAT48(fVar25 + fStack288,
                                      CONCAT44(fVar15 + local_128._4_4_,fVar14 + (float)local_128));
            }
            _local_1d8 = CONCAT412(fRam0000000140c783cc,_local_1d8);
            if (*(int *)((longlong)param_1 + 0x244) != 0) {
                fStack464 = SUB124(_local_1d8 >> 0x40,0);
                if ((1e-05 < (float)((uint)(local_1c8._0_4_ - local_1d8._0_4_) & 0x7fffffff)) ||
                    (1e-05 < (float)((uint)(local_1c8._8_4_ - fStack464) & 0x7fffffff))) {
                    local_1d8._4_4_ = SUB124(_local_1d8 >> 0x20,0);
                    local_1d8._0_4_ = SUB164(auVar12,0) - local_1d8._0_4_;
                    fVar20 = fVar20 - local_1d8._4_4_;
                    fVar21 = fVar21 - fStack464;
                    fVar22 = fVar22 - fRam0000000140c783cc;
                    fVar25 = fVar20 * fVar20;
                    fVar26 = local_1d8._0_4_ * local_1d8._0_4_ + fVar25 + fVar21 * fVar21;
                    auVar12 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))),
                                      CONCAT124(SUB1612(CONCAT412(fVar22 * fVar22,
                                                                  CONCAT48(fVar21 * fVar21,
                                                                           CONCAT44(fVar25,local_1d8._0_4_ *
                                                                                           local_1d8._0_4_)))
                                                                >> 0x20,0),fVar26));
                    fVar25 = SUB164(auVar12,0);
                    fVar25 = (3.0 - fVar26 * fVar25 * fVar25) * 0.5 * fVar25;
                    if (fVar25 <= fVar23) {
                        fVar25 = fVar23;
                    }
                    local_1d8._0_4_ = fVar25 * local_1d8._0_4_;
                    fVar20 = fVar25 * fVar20;
                    fVar25 = fVar25 * fVar21;
                    _local_1e8 = CONCAT48(fVar25,CONCAT44(fVar20,local_1d8._0_4_));
                    _local_1e8 = CONCAT412(fRam0000000140c783bc,_local_1e8);
                    fVar14 = 0.0 - fVar20 * 0.0;
                    fVar13 = local_1d8._0_4_ * 0.0 - fVar25 * 0.0;
                    fVar17 = fVar20 * 0.0 - local_1d8._0_4_ * 1.0;
                    fVar18 = fRam0000000140c783bc * 0.0 - fRam0000000140c783bc * 0.0;
                    fVar26 = fVar13 * fVar13;
                    fVar15 = fVar14 * fVar14 + fVar26 + fVar17 * fVar17;
                    auVar12 = rsqrtss(CONCAT412(fVar26,CONCAT48(fVar26,CONCAT44(fVar26,fVar26))),
                                      CONCAT124(SUB1612(CONCAT412(fVar18 * fVar18,
                                                                  CONCAT48(fVar17 * fVar17,
                                                                           CONCAT44(fVar26,fVar14 * fVar14)))
                                                                >> 0x20,0),fVar15));
                    fVar26 = SUB164(auVar12,0);
                    fVar26 = (3.0 - fVar15 * fVar26 * fVar26) * 0.5 * fVar26;
                    auVar10 = CONCAT48(fVar20,CONCAT44(local_1d8._0_4_,fVar25));
                    if (fVar26 <= fVar23) {
                        fVar26 = fVar23;
                    }
                    fVar14 = fVar26 * fVar14;
                    fVar13 = fVar26 * fVar13;
                    fVar26 = fVar26 * fVar17;
                    _local_208 = CONCAT48(fVar26,CONCAT44(fVar13,fVar14));
                    _local_208 = CONCAT412(uRam0000000140c7839c,_local_208);
                    auVar16 = CONCAT48(fVar13 * local_1d8._0_4_,CONCAT44(fVar14 * fVar25,fVar26 * fVar20));
                    goto LAB_14071d6c7;
                }
            }
            LAB_14071d6df:
            local_108[0] = &local_158;
            FUN_1401afc20(local_108,&local_1a8);
            _local_208 = CONCAT412(local_208._4_4_ * fStack396 + local_208._0_4_ * fStack412 +
                                   fStack512 * fStack380 + fStack508 * fStack364,
                                   CONCAT48(local_208._4_4_ * fStack400 + local_208._0_4_ * fStack416 +
                                            fStack512 * fStack384 + fStack508 * fStack368,
                                            CONCAT44(local_208._4_4_ * fStack404 +
                                                     local_208._0_4_ * fStack420 + fStack512 * fStack388 +
                                                     fStack508 * local_178._4_4_,
                                                     local_208._4_4_ * local_198 +
                                                     local_208._0_4_ * local_1a8 + fStack512 * local_188 +
                                                     fStack508 * (float)local_178)));
            _local_1f8 = CONCAT412(local_1f8._4_4_ * fStack396 + local_1f8._0_4_ * fStack412 +
                                   fStack496 * fStack380 + fStack492 * fStack364,
                                   CONCAT48(local_1f8._4_4_ * fStack400 + local_1f8._0_4_ * fStack416 +
                                            fStack496 * fStack384 + fStack492 * fStack368,
                                            CONCAT44(local_1f8._4_4_ * fStack404 +
                                                     local_1f8._0_4_ * fStack420 + fStack496 * fStack388 +
                                                     fStack492 * local_178._4_4_,
                                                     local_1f8._4_4_ * local_198 +
                                                     local_1f8._0_4_ * local_1a8 + fStack496 * local_188 +
                                                     fStack492 * (float)local_178)));
            _local_1e8 = CONCAT412(auStack484 * fStack396 + local_1e8 * fStack412 +
                                   (float)uStack480 * fStack380 + uStack480._4_4_ * fStack364,
                                   CONCAT48(auStack484 * fStack400 + local_1e8 * fStack416 +
                                            (float)uStack480 * fStack384 + uStack480._4_4_ * fStack368,
                                            CONCAT44(auStack484 * fStack404 + local_1e8 * fStack420 +
                                                     (float)uStack480 * fStack388 +
                                                     uStack480._4_4_ * local_178._4_4_,
                                                     auStack484 * local_198 + local_1e8 * local_1a8 +
                                                     (float)uStack480 * local_188 +
                                                     uStack480._4_4_ * (float)local_178)));
            _local_1d8 = CONCAT412(local_1d8._4_4_ * fStack396 + local_1d8._0_4_ * fStack412 +
                                   fStack464 * fStack380 + fStack460 * fStack364,
                                   CONCAT48(local_1d8._4_4_ * fStack400 + local_1d8._0_4_ * fStack416 +
                                            fStack464 * fStack384 + fStack460 * fStack368,
                                            CONCAT44(local_1d8._4_4_ * fStack404 +
                                                     local_1d8._0_4_ * fStack420 + fStack464 * fStack388 +
                                                     fStack460 * local_178._4_4_,
                                                     local_1d8._4_4_ * local_198 +
                                                     local_1d8._0_4_ * local_1a8 + fStack464 * local_188 +
                                                     fStack460 * (float)local_178)));
            bVar1 = true;
        }
    }
    auVar12 = _local_1e8;
    fVar23 = *(float *)(param_1 + 0x40);
    if (*(float *)(param_1 + 0x48) != fVar27) {
        fVar23 = fVar23 * *(float *)(param_1 + 0x48);
    }
    local_1a8 = *(float *)((longlong)param_1 + 0x204);
    fStack420 = *(float *)(param_1 + 0x41);
    fStack416 = *(float *)((longlong)param_1 + 0x20c);
    local_208 = CONCAT44(local_208._4_4_ * fVar23,local_208._0_4_ * fVar23);
    _local_208 = CONCAT48(fStack512 * fVar23,local_208);
    local_1f8 = CONCAT44(local_1f8._4_4_ * fVar23,local_1f8._0_4_ * fVar23);
    _local_1e8 = CONCAT124(_auStack484,local_1e8 * fVar23);
    uStack480._0_4_ = SUB164(auVar12,8);
    _local_1f8 = CONCAT48(fStack496 * fVar23,local_1f8);
    auStack484 = SUB164(auVar12,4);
    uStack480._4_4_ = SUB164(auVar12,0xc);
    _local_1e8 = CONCAT48((float)uStack480 * fVar23,_local_1e8);
    _local_1e8 = _local_1e8 & 0xffffffff | (ulonglong)(uint)(auStack484 * fVar23) << 0x20;
    FUN_1408fe3d0();
    fVar26 = extraout_XMM0_Da_00;
    FUN_1408fc950();
    fVar25 = extraout_XMM0_Da_01;
    FUN_1408fe3d0();
    fVar23 = extraout_XMM0_Da_02;
    FUN_1408fc950();
    fVar13 = extraout_XMM0_Da_03;
    FUN_1408fe3d0();
    fVar27 = extraout_XMM0_Da_04;
    FUN_1408fc950();
    fStack396 = 0.0;
    local_198 = fVar23 * fVar26 * fVar27 + extraout_XMM0_Da_05 * fVar13;
    fStack404 = fVar27 * fVar25;
    fStack400 = fVar13 * fVar26 * fVar27 - extraout_XMM0_Da_05 * fVar23;
    local_188 = fVar23 * fVar26 * extraout_XMM0_Da_05 - fVar27 * fVar13;
    fStack384 = fVar13 * fVar26 * extraout_XMM0_Da_05 + fVar27 * fVar23;
    fStack388 = extraout_XMM0_Da_05 * fVar25;
    uVar24 = 0x80000000;
    local_158 = &local_198;
    puStack336 = local_208;
    local_168 = _DAT_140c78440;
    fStack356 = fRam0000000140c78444;
    fStack352 = fRam0000000140c78448;
    fStack348 = fRam0000000140c7844c;
    fStack368 = fVar13 * fVar25;
    local_1c8 = CONCAT88(puStack336,local_158);
    fStack380 = 0.0;
    fStack364 = 0.0;
    local_178 = CONCAT44(fVar26,fVar23 * fVar25) ^ 0x8000000000000000;
    FUN_1401afb10(&local_158,local_208);
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((*(int *)(lVar6 + 0x38) == 0) || (bVar1)) {
        lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
        if ((*(int *)(lVar6 + 0x38) == 0) && (bVar1)) {
            (**(code **)(*param_3 + 0x378))
                    (param_3,*(undefined4 *)((longlong)param_1 + 0x23c),&local_1a8,1);
            fVar14 = SQRT(local_1a8 * local_1a8 + fStack420 * fStack420 + fStack416 * fStack416);
            fVar18 = _DAT_140c78430 * fVar14;
            fVar19 = fRam0000000140c78434 * fVar14;
            fVar21 = fRam0000000140c78438 * fVar14;
            fVar23 = fRam0000000140c7843c * fVar14;
            fVar25 = _DAT_140c78410 * fVar14;
            fVar26 = fRam0000000140c78414 * fVar14;
            fVar27 = fRam0000000140c78418 * fVar14;
            fVar13 = fRam0000000140c7841c * fVar14;
            fVar20 = _DAT_140c78420 * fVar14;
            fVar15 = fRam0000000140c78424 * fVar14;
            fVar17 = fRam0000000140c78428 * fVar14;
            fVar14 = fRam0000000140c7842c * fVar14;
            _local_208 = CONCAT412(local_208._4_4_ * fVar14 + local_208._0_4_ * fVar13 +
                                   fStack512 * fVar23 + fStack508 * fRam0000000140c7844c,
                                   CONCAT48(local_208._4_4_ * fVar17 + local_208._0_4_ * fVar27 +
                                            fStack512 * fVar21 + fStack508 * fRam0000000140c78448,
                                            CONCAT44(local_208._4_4_ * fVar15 + local_208._0_4_ * fVar26 +
                                                     fStack512 * fVar19 + fStack508 * fRam0000000140c78444
                                                    ,local_208._4_4_ * fVar20 + local_208._0_4_ * fVar25
                                                     + fStack512 * fVar18 + fStack508 * _DAT_140c78440)))
                    ;
            _local_1f8 = CONCAT412(local_1f8._0_4_ * fVar13 + local_1f8._4_4_ * fVar14 +
                                   fStack496 * fVar23 + fStack492 * fRam0000000140c7844c,
                                   CONCAT48(local_1f8._0_4_ * fVar27 + local_1f8._4_4_ * fVar17 +
                                            fStack496 * fVar21 + fStack492 * fRam0000000140c78448,
                                            CONCAT44(local_1f8._0_4_ * fVar26 + local_1f8._4_4_ * fVar15 +
                                                     fStack496 * fVar19 + fStack492 * fRam0000000140c78444
                                                    ,local_1f8._0_4_ * fVar25 + local_1f8._4_4_ * fVar20
                                                     + fStack496 * fVar18 + fStack492 * _DAT_140c78440)))
                    ;
            _local_1e8 = CONCAT412(local_1e8 * fVar13 + auStack484 * fVar14 + (float)uStack480 * fVar23 +
                                   uStack480._4_4_ * fRam0000000140c7844c,
                                   CONCAT48(local_1e8 * fVar27 + auStack484 * fVar17 +
                                            (float)uStack480 * fVar21 +
                                            uStack480._4_4_ * fRam0000000140c78448,
                                            CONCAT44(local_1e8 * fVar26 + auStack484 * fVar15 +
                                                     (float)uStack480 * fVar19 +
                                                     uStack480._4_4_ * fRam0000000140c78444,
                                                     local_1e8 * fVar25 + auStack484 * fVar20 +
                                                     (float)uStack480 * fVar18 +
                                                     uStack480._4_4_ * _DAT_140c78440)));
            fVar25 = local_1d8._0_4_ * fVar25;
            fVar26 = local_1d8._0_4_ * fVar26;
            fVar27 = local_1d8._0_4_ * fVar27;
            fVar13 = local_1d8._0_4_ * fVar13;
            fVar20 = local_1d8._4_4_ * fVar20;
            fVar15 = local_1d8._4_4_ * fVar15;
            fVar17 = local_1d8._4_4_ * fVar17;
            local_1d8._0_4_ = local_1d8._4_4_ * fVar14;
            goto LAB_14071dcf3;
        }
    }
    else {
        (**(code **)(*param_3 + 0x378))(param_3,*(undefined4 *)((longlong)param_1 + 0x23c),&local_1a8,1)
                ;
        fVar23 = 1.0 / SQRT(local_1a8 * local_1a8 + fStack420 * fStack420 + fStack416 * fStack416);
        fVar20 = _DAT_140c78410 * fVar23;
        fVar15 = fRam0000000140c78414 * fVar23;
        fVar17 = fRam0000000140c78418 * fVar23;
        fVar14 = fRam0000000140c7841c * fVar23;
        fVar25 = _DAT_140c78420 * fVar23;
        fVar26 = fRam0000000140c78424 * fVar23;
        fVar27 = fRam0000000140c78428 * fVar23;
        fVar13 = fRam0000000140c7842c * fVar23;
        fVar18 = _DAT_140c78430 * fVar23;
        fVar19 = fRam0000000140c78434 * fVar23;
        fVar21 = fRam0000000140c78438 * fVar23;
        fVar23 = fRam0000000140c7843c * fVar23;
        _local_208 = CONCAT412(local_208._4_4_ * fVar13 + local_208._0_4_ * fVar14 + fStack512 * fVar23
                               + fStack508 * fRam0000000140c7844c,
                               CONCAT48(local_208._4_4_ * fVar27 + local_208._0_4_ * fVar17 +
                                        fStack512 * fVar21 + fStack508 * fRam0000000140c78448,
                                        CONCAT44(local_208._4_4_ * fVar26 + local_208._0_4_ * fVar15 +
                                                 fStack512 * fVar19 + fStack508 * fRam0000000140c78444,
                                                 local_208._4_4_ * fVar25 + local_208._0_4_ * fVar20 +
                                                 fStack512 * fVar18 + fStack508 * _DAT_140c78440)));
        _local_1f8 = CONCAT412(local_1f8._4_4_ * fVar13 + local_1f8._0_4_ * fVar14 + fStack496 * fVar23
                               + fStack492 * fRam0000000140c7844c,
                               CONCAT48(local_1f8._4_4_ * fVar27 + local_1f8._0_4_ * fVar17 +
                                        fStack496 * fVar21 + fStack492 * fRam0000000140c78448,
                                        CONCAT44(local_1f8._4_4_ * fVar26 + local_1f8._0_4_ * fVar15 +
                                                 fStack496 * fVar19 + fStack492 * fRam0000000140c78444,
                                                 local_1f8._4_4_ * fVar25 + local_1f8._0_4_ * fVar20 +
                                                 fStack496 * fVar18 + fStack492 * _DAT_140c78440)));
        _local_1e8 = CONCAT412(auStack484 * fVar13 + local_1e8 * fVar14 + (float)uStack480 * fVar23 +
                               uStack480._4_4_ * fRam0000000140c7844c,
                               CONCAT48(auStack484 * fVar27 + local_1e8 * fVar17 +
                                        (float)uStack480 * fVar21 +
                                        uStack480._4_4_ * fRam0000000140c78448,
                                        CONCAT44(auStack484 * fVar26 + local_1e8 * fVar15 +
                                                 (float)uStack480 * fVar19 +
                                                 uStack480._4_4_ * fRam0000000140c78444,
                                                 auStack484 * fVar25 + local_1e8 * fVar20 +
                                                 (float)uStack480 * fVar18 +
                                                 uStack480._4_4_ * _DAT_140c78440)));
        fVar25 = local_1d8._4_4_ * fVar25;
        fVar26 = local_1d8._4_4_ * fVar26;
        fVar27 = local_1d8._4_4_ * fVar27;
        fVar13 = local_1d8._4_4_ * fVar13;
        fVar20 = local_1d8._0_4_ * fVar20;
        fVar15 = local_1d8._0_4_ * fVar15;
        fVar17 = local_1d8._0_4_ * fVar17;
        local_1d8._0_4_ = local_1d8._0_4_ * fVar14;
        LAB_14071dcf3:
        _local_1d8 = CONCAT412(local_1d8._0_4_ + fVar13 + fStack464 * fVar23 +
                               fStack460 * fRam0000000140c7844c,
                               CONCAT48(fVar17 + fVar27 + fStack464 * fVar21 +
                                        fStack460 * fRam0000000140c78448,
                                        CONCAT44(fVar15 + fVar26 + fStack464 * fVar19 +
                                                 fStack460 * fRam0000000140c78444,
                                                 fVar20 + fVar25 + fStack464 * fVar18 +
                                                 fStack460 * _DAT_140c78440)));
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar6 + 0x3c) != 0) {
        FUN_1408fe3d0();
        fVar23 = extraout_XMM0_Db;
        FUN_1408fc950();
        uStack308 = 0;
        uStack300 = 0;
        local_158 = (float *)(ulonglong)(uint)extraout_XMM0_Da_06;
        fVar25 = (float)((uint)fVar23 ^ uVar24);
        puStack336 = (undefined *)(ulonglong)(uint)fVar25;
        _local_208 = CONCAT412(local_208._4_4_ * 0.0 + local_208._0_4_ * 0.0 + fStack512 * 0.0 +
                               fStack508 * fRam0000000140c7844c,
                               CONCAT48(local_208._4_4_ * 0.0 + local_208._0_4_ * fVar25 +
                                        fStack512 * extraout_XMM0_Da_06 +
                                        fStack508 * fRam0000000140c78448,
                                        CONCAT44(local_208._4_4_ * 1.0 + local_208._0_4_ * 0.0 +
                                                 fStack512 * 0.0 + fStack508 * fRam0000000140c78444,
                                                 local_208._4_4_ * 0.0 +
                                                 local_208._0_4_ * extraout_XMM0_Da_06 +
                                                 fStack512 * fVar23 + fStack508 * _DAT_140c78440)));
        _local_1f8 = CONCAT412(local_1f8._4_4_ * 0.0 + local_1f8._0_4_ * 0.0 + fStack496 * 0.0 +
                               fStack492 * fRam0000000140c7844c,
                               CONCAT48(local_1f8._4_4_ * 0.0 + local_1f8._0_4_ * fVar25 +
                                        fStack496 * extraout_XMM0_Da_06 +
                                        fStack492 * fRam0000000140c78448,
                                        CONCAT44(local_1f8._4_4_ * 1.0 + local_1f8._0_4_ * 0.0 +
                                                 fStack496 * 0.0 + fStack492 * fRam0000000140c78444,
                                                 local_1f8._4_4_ * 0.0 +
                                                 local_1f8._0_4_ * extraout_XMM0_Da_06 +
                                                 fStack496 * fVar23 + fStack492 * _DAT_140c78440)));
        _local_1e8 = CONCAT412(auStack484 * 0.0 + local_1e8 * 0.0 + (float)uStack480 * 0.0 +
                               uStack480._4_4_ * fRam0000000140c7844c,
                               CONCAT48(auStack484 * 0.0 + local_1e8 * fVar25 +
                                        (float)uStack480 * extraout_XMM0_Da_06 +
                                        uStack480._4_4_ * fRam0000000140c78448,
                                        CONCAT44(auStack484 * 1.0 + local_1e8 * 0.0 +
                                                 (float)uStack480 * 0.0 +
                                                 uStack480._4_4_ * fRam0000000140c78444,
                                                 auStack484 * 0.0 + local_1e8 * extraout_XMM0_Da_06 +
                                                 (float)uStack480 * fVar23 +
                                                 uStack480._4_4_ * _DAT_140c78440)));
        _local_1d8 = CONCAT412(local_1d8._0_4_ * 0.0 + local_1d8._4_4_ * 0.0 + fStack464 * 0.0 +
                               fStack460 * fRam0000000140c7844c,
                               CONCAT48(local_1d8._0_4_ * fVar25 + local_1d8._4_4_ * 0.0 +
                                        fStack464 * extraout_XMM0_Da_06 +
                                        fStack460 * fRam0000000140c78448,
                                        CONCAT44(local_1d8._0_4_ * 0.0 + local_1d8._4_4_ * 1.0 +
                                                 fStack464 * 0.0 + fStack460 * fRam0000000140c78444,
                                                 local_1d8._0_4_ * extraout_XMM0_Da_06 +
                                                 local_1d8._4_4_ * 0.0 + fStack464 * fVar23 +
                                                 fStack460 * _DAT_140c78440)));
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar6 + 0x34) == 0) {
        local_1d8 = CONCAT44(local_1d8._4_4_ + *(float *)((longlong)param_1 + 0x214),
                             local_1d8._0_4_ + *(float *)(param_1 + 0x42));
        fStack464 = fStack464 + 0.0;
    }
    else {
        fVar23 = *(float *)(param_1 + 0x42);
        fVar25 = *(float *)((longlong)param_1 + 0x214);
        fVar26 = *(float *)(param_1 + 0x43);
        local_1d8 = CONCAT44(local_1d8._4_4_ +
                             fVar25 * local_1f8._4_4_ + fVar23 * local_208._4_4_ + fVar26 * auStack484,
                             local_1d8._0_4_ +
                             fVar25 * local_1f8._0_4_ + fVar23 * local_208._0_4_ + fVar26 * local_1e8);
        fStack464 = fStack464 + fVar25 * fStack496 + fVar23 * fStack512 + fVar26 * (float)uStack480;
    }
    (**(code **)(*(longlong *)param_1[0x1c] + 0x48))((longlong *)param_1[0x1c],local_208);
    LAB_14071df7d:
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack552);
    return;
}



void FUN_14071dfa0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined4 local_18 [4];

    lVar2 = (**(code **)(*param_1 + 0x80))();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x90))(param_1);
    if ((lVar2 != 0) && (plVar3 != (longlong *)0x0)) {
        local_18[0] = 0;
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,local_18,0);
        if (iVar1 != 0) {
            iVar1 = (**(code **)(*plVar3 + 0x350))(plVar3,*(undefined4 *)((longlong)param_1 + 0x23c));
            if (iVar1 != 0) {
                FUN_14071cfe0(param_1,lVar2,plVar3);
            }
        }
    }
    return;
}



undefined8 FUN_14071e030(undefined8 param_1,ulonglong param_2)

{
    FUN_14071e070();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071e070(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b740f0;
    if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4c] + 8))();
        param_1[0x4c] = 0;
    }
    if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4d] + 8))();
        param_1[0x4d] = 0;
    }
    if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4d] + 8))();
    }
    if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4c] + 8))();
    }
    FUN_14071bf80(param_1);
    return;
}



undefined8
FUN_14071e0f0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
    undefined8 uVar1;

    if ((param_3 == (undefined8 *)0x0) || (param_4 == (undefined8 *)0x0)) {
        uVar1 = 0x80004005;
    }
    else {
        if ((undefined8 *)param_1[0x4c] != param_3) {
            (**(code **)*param_3)(param_3);
            if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0x4c] + 8))();
            }
            param_1[0x4c] = (longlong)param_3;
        }
        if ((undefined8 *)param_1[0x4d] != param_4) {
            (**(code **)*param_4)(param_4);
            if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0x4d] + 8))();
            }
            param_1[0x4d] = (longlong)param_4;
        }
        FUN_14071ca20(param_1 + 0x2c,param_2);
        (**(code **)(*param_1 + 0x60))(param_1,*(undefined4 *)((longlong)param_1 + 0x25c));
        uVar1 = FUN_14071c0b0(param_1,param_1 + 0x2c);
    }
    return uVar1;
}



void FUN_14071e1c0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x88))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    if (*(int *)((longlong)param_1 + 0x234) != 0) {
        // WARNING: Could not recover jumptable at 0x00014071e1f3. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x70))
                (plVar1,*(int *)((longlong)param_1 + 0x234),*(undefined4 *)(param_1 + 0x47));
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014071e201. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x118))(plVar1,0);
    return;
}



longlong FUN_14071e280(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    FUN_14071cae0();
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    uVar1 = *(undefined4 *)(param_2 + 0xe4);
    uVar2 = *(undefined4 *)(param_2 + 0xe8);
    uVar3 = *(undefined4 *)(param_2 + 0xec);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0xe8) = uVar2;
    *(undefined4 *)(param_1 + 0xec) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0xf4);
    uVar2 = *(undefined4 *)(param_2 + 0xf8);
    uVar3 = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
    *(undefined4 *)(param_1 + 0xf8) = uVar2;
    *(undefined4 *)(param_1 + 0xfc) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined4 *)(param_2 + 0x108);
    uVar3 = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = uVar1;
    *(undefined4 *)(param_1 + 0x108) = uVar2;
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x114);
    uVar2 = *(undefined4 *)(param_2 + 0x118);
    uVar3 = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x124);
    uVar2 = *(undefined4 *)(param_2 + 0x128);
    uVar3 = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    *(undefined4 *)(param_1 + 0x128) = uVar2;
    *(undefined4 *)(param_1 + 300) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x134);
    uVar2 = *(undefined4 *)(param_2 + 0x138);
    uVar3 = *(undefined4 *)(param_2 + 0x13c);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = uVar1;
    *(undefined4 *)(param_1 + 0x138) = uVar2;
    *(undefined4 *)(param_1 + 0x13c) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x144);
    uVar2 = *(undefined4 *)(param_2 + 0x148);
    uVar3 = *(undefined4 *)(param_2 + 0x14c);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    *(undefined4 *)(param_1 + 0x148) = uVar2;
    *(undefined4 *)(param_1 + 0x14c) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x154);
    uVar2 = *(undefined4 *)(param_2 + 0x158);
    uVar3 = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = uVar1;
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    *(undefined4 *)(param_1 + 0x15c) = uVar3;
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
    return param_1;
}



void FUN_14071e3a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    if (*(longlong **)(param_3 + 0x2f0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_3 + 0x2f0) + 0x98))();
    }
    *(undefined4 *)(param_3 + 0x14c) = param_2;
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14071e3f0(longlong *param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined auVar3 [16];
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    float *pfVar8;
    longlong *plVar9;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    uint extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    undefined auVar10 [16];
    float fVar11;
    undefined auVar12 [12];
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
    uint uVar23;
    float fVar24;
    undefined auStack424 [32];
    undefined local_188 [8];
    float fStack384;
    float fStack380;
    undefined local_178 [8];
    undefined8 uStack368;
    undefined local_168 [4];
    undefined auStack356 [4];
    undefined8 uStack352;
    undefined local_158 [4];
    undefined auStack340 [4];
    undefined8 uStack336;
    undefined local_148 [16];
    ulonglong local_138;
    ulonglong uStack304;
    float local_128;
    float fStack292;
    float fStack288;
    float fStack284;
    undefined local_118 [8];
    undefined8 uStack272;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float *local_e8;
    undefined *local_e0;
    ulonglong local_98;

    local_98 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    lVar5 = FUN_1403d90d0(DAT_140c65898);
    lVar6 = FUN_1403d90d0();
    local_128 = _DAT_140c783a0;
    fStack292 = (float)uRam0000000140c783a4;
    fStack288 = (float)uRam0000000140c783a8;
    fStack284 = (float)uRam0000000140c783ac;
    local_118 = CONCAT44(uRam0000000140c783b4,_DAT_140c783b0);
    _local_118 = CONCAT48(uRam0000000140c783b8,local_118);
    _local_118 = CONCAT412(uRam0000000140c783bc,_local_118);
    local_108 = (float)_DAT_140c783c0;
    fStack260 = (float)uRam0000000140c783c4;
    fStack256 = (float)uRam0000000140c783c8;
    fStack252 = (float)uRam0000000140c783cc;
    local_188 = CONCAT44(fRam0000000140c78394,_DAT_140c78390);
    _local_188 = CONCAT48(uRam0000000140c78398,local_188);
    _local_188 = CONCAT412(uRam0000000140c7839c,_local_188);
    local_178 = CONCAT44(uRam0000000140c783a4,_DAT_140c783a0);
    _local_178 = CONCAT48(uRam0000000140c783a8,local_178);
    _local_178 = CONCAT412(uRam0000000140c783ac,_local_178);
    _local_168 = CONCAT44(uRam0000000140c783b4,_DAT_140c783b0);
    _local_168 = CONCAT48(uRam0000000140c783b8,_local_168);
    _local_168 = CONCAT412(uRam0000000140c783bc,_local_168);
    _local_158 = CONCAT44(uRam0000000140c783c4,_DAT_140c783c0);
    _local_158 = CONCAT48(uRam0000000140c783c8,_local_158);
    _local_158 = CONCAT412(uRam0000000140c783cc,_local_158);
    fVar14 = _DAT_140c78390;
    fVar15 = fRam0000000140c78394;
    if (((*(int *)(param_1 + 0x46) == 1) && (lVar5 != 0)) &&
        (*(int *)((longlong)param_1 + 0x2c4) != 0)) {
        if (*(int *)(lVar5 + 0x80) == 0x12) {
            lVar7 = *(longlong *)(lVar5 + 0x3698);
        }
        else {
            lVar7 = *(longlong *)(lVar5 + 0x16e8);
        }
        if (lVar7 == 0) goto LAB_14071e89a;
        if (*(int *)(lVar5 + 0x80) == 0x12) {
            plVar9 = *(longlong **)(lVar5 + 0x3698);
        }
        else {
            plVar9 = *(longlong **)(lVar5 + 0x16e8);
        }
        iVar4 = (**(code **)(*plVar9 + 0x350))();
        if (iVar4 == 0) goto LAB_14071e89a;
        *(undefined4 *)(param_1 + 0x59) = 1;
        if (*(int *)(lVar5 + 0x80) == 0x12) {
            plVar9 = *(longlong **)(lVar5 + 0x3698);
        }
        else {
            plVar9 = *(longlong **)(lVar5 + 0x16e8);
        }
        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar7 == 0) {
            lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        local_138 = (**(code **)(*plVar9 + 0x370))(plVar9,*(undefined4 *)((longlong)param_1 + 0x2c4),0);
        uStack304 = lVar7 + 0xa0;
        local_148 = CONCAT88(uStack304,local_138);
        FUN_1401afb10(&local_138,local_188);
        local_128 = local_178._0_4_;
        fStack292 = local_178._4_4_;
        fStack288 = (float)uStack368;
        fStack284 = uStack368._4_4_;
        _local_118 = _local_168;
        local_108 = local_158;
        fStack260 = auStack340;
        fStack256 = (float)uStack336;
        fStack252 = uStack336._4_4_;
        fVar14 = local_188._0_4_;
        fVar15 = local_188._4_4_;
        if (*(int *)((longlong)param_1 + 0x2cc) != 0) {
            if (lVar6 == 0) goto LAB_14071ea57;
            plVar9 = *(longlong **)(lVar6 + 0x16e8);
            if (plVar9 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar9 + 0x350))(plVar9,*(undefined4 *)(param_1 + 0x5c));
                if (iVar4 == 0) {
                    fVar16 = *(float *)(lVar6 + 0x11e0);
                    fVar17 = *(float *)(lVar6 + 0x11e4);
                    fVar19 = *(float *)(lVar6 + 0x11e8);
                    fVar21 = *(float *)(lVar6 + 0x11ec);
                    fVar14 = local_188._0_4_;
                    fVar15 = local_188._4_4_;
                }
                else {
                    lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
                    if (lVar7 == 0) {
                        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
                    }
                    pfVar8 = (float *)(**(code **)(*plVar9 + 0x358))
                            (plVar9,local_148,*(undefined4 *)(param_1 + 0x5c),0);
                    fVar14 = *pfVar8;
                    fVar15 = pfVar8[1];
                    fVar21 = pfVar8[2];
                    fVar16 = fVar15 * *(float *)(lVar7 + 0xb0) + fVar14 * *(float *)(lVar7 + 0xa0) +
                             fVar21 * *(float *)(lVar7 + 0xc0) + *(float *)(lVar7 + 0xd0);
                    fVar17 = fVar15 * *(float *)(lVar7 + 0xb4) + fVar14 * *(float *)(lVar7 + 0xa4) +
                             fVar21 * *(float *)(lVar7 + 0xc4) + *(float *)(lVar7 + 0xd4);
                    fVar19 = fVar15 * *(float *)(lVar7 + 0xb8) + fVar14 * *(float *)(lVar7 + 0xa8) +
                             fVar21 * *(float *)(lVar7 + 200) + *(float *)(lVar7 + 0xd8);
                    fVar21 = fVar15 * *(float *)(lVar7 + 0xbc) + fVar14 * *(float *)(lVar7 + 0xac) +
                             fVar21 * *(float *)(lVar7 + 0xcc) + *(float *)(lVar7 + 0xdc);
                    fVar14 = local_188._0_4_;
                    fVar15 = local_188._4_4_;
                }
                if ((1e-05 < (float)((uint)(fVar16 - local_158) & 0x7fffffff)) ||
                    (1e-05 < (float)((uint)(fVar19 - (float)uStack336) & 0x7fffffff))) {
                    fVar16 = fVar16 - local_158;
                    fVar17 = fVar17 - auStack340;
                    fVar19 = fVar19 - (float)uStack336;
                    fVar11 = fVar17 * fVar17;
                    fVar24 = SQRT(local_188._0_4_ * local_188._0_4_ + local_188._4_4_ * local_188._4_4_ +
                                  fStack384 * fStack384);
                    fVar13 = fVar16 * fVar16 + fVar11 + fVar19 * fVar19;
                    auVar10 = rsqrtss(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar11))),
                                      CONCAT412((fVar21 - uStack336._4_4_) * (fVar21 - uStack336._4_4_),
                                                CONCAT48(fVar19 * fVar19,CONCAT44(fVar11,fVar13))));
                    fVar21 = SUB164(auVar10,0);
                    fVar21 = (3.0 - fVar13 * fVar21 * fVar21) * 0.5 * fVar21;
                    if (fVar21 <= 0.0) {
                        fVar21 = 0.0;
                    }
                    fVar16 = fVar21 * fVar16;
                    fVar17 = fVar21 * fVar17;
                    fVar21 = fVar21 * fVar19;
                    fVar13 = 0.0 - fVar17 * 0.0;
                    fVar18 = fVar16 * 0.0 - fVar21 * 0.0;
                    fVar20 = fVar17 * 0.0 - fVar16 * 1.0;
                    fVar22 = uStack352._4_4_ * 0.0 - uStack352._4_4_ * 0.0;
                    fVar19 = fVar18 * fVar18;
                    fVar11 = fVar13 * fVar13 + fVar19 + fVar20 * fVar20;
                    auVar10 = rsqrtss(CONCAT412(fVar19,CONCAT48(fVar19,CONCAT44(fVar19,fVar19))),
                                      CONCAT412(fVar22 * fVar22,
                                                CONCAT48(fVar20 * fVar20,CONCAT44(fVar19,fVar11))));
                    fVar19 = SUB164(auVar10,0);
                    fVar19 = (3.0 - fVar11 * fVar19 * fVar19) * 0.5 * fVar19;
                    if (fVar19 <= 0.0) {
                        fVar19 = 0.0;
                    }
                    fVar13 = fVar19 * fVar13;
                    fVar18 = fVar19 * fVar18;
                    local_188 = CONCAT44(fVar18 * fVar24,fVar13 * fVar24);
                    _local_188 = CONCAT48(fVar19 * fVar20 * fVar24,local_188);
                    local_178 = CONCAT44((fVar13 * 0.0 - fVar19 * fVar20 * fVar16) * fVar24,
                                         (fVar17 * 0.0 - fVar18 * fVar21) * fVar24);
                    _local_178 = CONCAT48((fVar18 * fVar16 - fVar13 * fVar17) * fVar24,local_178);
                    _local_168 = CONCAT44(fVar17 * fVar24,fVar16 * fVar24);
                    _local_168 = CONCAT48(fVar21 * fVar24,_local_168);
                }
            }
        }
    }
    else {
        LAB_14071e89a:
        _local_188 = *(undefined (*) [16])(param_1 + 0x48);
        _local_178 = *(undefined (*) [16])(param_1 + 0x4a);
        _local_168 = *(undefined (*) [16])(param_1 + 0x4c);
        auVar12 = *(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x4e);
        _local_158 = *(undefined (*) [16])(param_1 + 0x4e);
        if ((lVar5 != 0) && (*(int *)(param_1 + 0x46) != 1)) {
            local_158 = SUB124(auVar12,0);
            auStack340 = SUB124(auVar12 >> 0x20,0);
            uStack336._0_4_ = SUB124(auVar12 >> 0x40,0);
            _local_158 = CONCAT44(local_158 * *(float *)(lVar5 + 0x11b4) +
                                  auStack340 * *(float *)(lVar5 + 0x11c4) +
                                  (float)uStack336 * *(float *)(lVar5 + 0x11d4) +
                                  *(float *)(lVar5 + 0x11e4),
                                  auStack340 * *(float *)(lVar5 + 0x11c0) +
                                  local_158 * *(float *)(lVar5 + 0x11b0) +
                                  (float)uStack336 * *(float *)(lVar5 + 0x11d0) +
                                  *(float *)(lVar5 + 0x11e0));
            uStack336._4_4_ = SUB164(_local_158 >> 0x60,0);
            _local_158 = CONCAT48(auStack340 * *(float *)(lVar5 + 0x11c8) +
                                  local_158 * *(float *)(lVar5 + 0x11b8) +
                                  (float)uStack336 * *(float *)(lVar5 + 0x11d8) +
                                  *(float *)(lVar5 + 0x11e8),_local_158);
        }
    }
    if (lVar6 != 0) {
        fStack252 = *(float *)(lVar6 + 0x12c4);
        local_e8 = &local_128;
        local_e0 = local_188;
        local_138 = CONCAT44(fStack252,fStack252);
        uStack304 = uStack304 & 0xffffffff00000000 | (ulonglong)(uint)fStack252;
        local_128 = _DAT_140c78410 * fStack252;
        fStack292 = fRam0000000140c78414 * fStack252;
        fStack288 = fRam0000000140c78418 * fStack252;
        fStack284 = fRam0000000140c7841c * fStack252;
        local_148 = CONCAT88(local_e0,local_e8);
        _local_118 = CONCAT412(fRam0000000140c7842c * fStack252,
                               CONCAT48(fRam0000000140c78428 * fStack252,
                                        CONCAT44(fRam0000000140c78424 * fStack252,
                                                 _DAT_140c78420 * fStack252)));
        local_108 = _DAT_140c78430 * fStack252;
        fStack260 = fRam0000000140c78434 * fStack252;
        fStack256 = fRam0000000140c78438 * fStack252;
        fStack252 = fRam0000000140c7843c * fStack252;
        local_f8 = _DAT_140c78440;
        fStack244 = fRam0000000140c78444;
        fStack240 = fRam0000000140c78448;
        fStack236 = fRam0000000140c7844c;
        FUN_1401afb10(&local_e8,local_188);
        local_128 = local_178._0_4_;
        fStack292 = local_178._4_4_;
        fStack288 = (float)uStack368;
        fStack284 = uStack368._4_4_;
        local_108 = local_158;
        fStack260 = auStack340;
        fStack256 = (float)uStack336;
        fStack252 = uStack336._4_4_;
        _local_118 = _local_168;
        fVar14 = local_188._0_4_;
        fVar15 = local_188._4_4_;
    }
    LAB_14071ea57:
    auVar3 = _local_168;
    auVar10 = _local_178;
    fVar16 = *(float *)(param_1 + 0x40);
    local_138 = *(ulonglong *)((longlong)param_1 + 0x204);
    local_188 = CONCAT44(local_188._4_4_ * fVar16,local_188._0_4_ * fVar16);
    _local_188 = CONCAT48(fStack384 * fVar16,local_188);
    _local_178 = CONCAT124(CONCAT84(uStack368,local_178._4_4_ * fVar16),local_178._0_4_ * fVar16);
    uStack368._0_4_ = SUB164(auVar10,8);
    _local_168 = CONCAT124(_auStack356,local_168 * fVar16);
    uStack352._0_4_ = SUB164(auVar3,8);
    uStack368._4_4_ = SUB164(auVar10,0xc);
    _local_178 = CONCAT48((float)uStack368 * fVar16,local_178);
    auStack356 = SUB164(auVar3,4);
    uStack352._4_4_ = SUB164(auVar3,0xc);
    _local_168 = CONCAT48((float)uStack352 * fVar16,_local_168);
    uStack304 = uStack304 & 0xffffffff00000000 | (ulonglong)*(uint *)((longlong)param_1 + 0x20c);
    _local_168 = _local_168 & 0xffffffff | (ulonglong)(uint)(auStack356 * fVar16) << 0x20;
    FUN_1408fe3d0();
    fVar13 = extraout_XMM0_Da;
    FUN_1408fc950();
    fVar11 = extraout_XMM0_Da_00;
    FUN_1408fe3d0();
    fVar21 = extraout_XMM0_Da_01;
    FUN_1408fc950();
    fVar19 = extraout_XMM0_Da_02;
    FUN_1408fe3d0();
    fVar16 = extraout_XMM0_Da_03;
    FUN_1408fc950();
    fVar17 = 0.0;
    fStack284 = 0.0;
    local_128 = fVar21 * fVar13 * fVar16 + extraout_XMM0_Da_04 * fVar19;
    fStack292 = fVar16 * fVar11;
    fStack288 = fVar19 * fVar13 * fVar16 - extraout_XMM0_Da_04 * fVar21;
    local_118 = CONCAT44(extraout_XMM0_Da_04 * fVar11,
                         fVar21 * fVar13 * extraout_XMM0_Da_04 - fVar16 * fVar19);
    fStack260 = (float)((uint)fVar13 ^ 0x80000000);
    local_e8 = &local_128;
    local_e0 = local_188;
    local_f8 = _DAT_140c78440;
    fStack244 = fRam0000000140c78444;
    fStack240 = fRam0000000140c78448;
    fStack236 = fRam0000000140c7844c;
    fStack256 = fVar19 * fVar11;
    local_108 = fVar21 * fVar11;
    local_148 = CONCAT88(local_e0,local_e8);
    _local_118 = _local_118 & (undefined  [16])0xffffffffffffffff;
    fStack252 = 0.0;
    _local_118 = CONCAT48(fVar19 * fVar13 * extraout_XMM0_Da_04 + fVar16 * fVar21,local_118);
    FUN_1401afb10(&local_e8,local_188);
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    auVar3 = _local_168;
    auVar10 = _local_178;
    fVar16 = 1.0;
    if (*(int *)(lVar6 + 0x38) != 0) {
        fVar14 = 1.0 / SQRT(fVar14 * fVar14 + fVar15 * fVar15 + 0.0);
        local_188 = CONCAT44(local_188._4_4_ * fVar14,local_188._0_4_ * fVar14);
        _local_188 = CONCAT48(fStack384 * fVar14,local_188);
        _local_178 = CONCAT124(CONCAT84(uStack368,local_178._4_4_ * fVar14),local_178._0_4_ * fVar14);
        uStack368._0_4_ = SUB164(auVar10,8);
        _local_168 = CONCAT124(_auStack356,local_168 * fVar14);
        uStack352._0_4_ = SUB164(auVar3,8);
        uStack368._4_4_ = SUB164(auVar10,0xc);
        _local_178 = CONCAT48((float)uStack368 * fVar14,local_178);
        auStack356 = SUB164(auVar3,4);
        uStack352._4_4_ = SUB164(auVar3,0xc);
        _local_168 = CONCAT48((float)uStack352 * fVar14,_local_168);
        _local_168 = _local_168 & 0xffffffff | (ulonglong)(uint)(auStack356 * fVar14) << 0x20;
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar6 + 0x3c) != 0) {
        FUN_1408fe3d0();
        uVar23 = extraout_XMM0_Da_05;
        FUN_1408fc950();
        local_118 = (ulonglong)uVar23;
        _local_118 = _local_118 & (undefined  [16])0xffffffffffffffff;
        auVar10 = _local_118;
        local_138 = (ulonglong)(uint)extraout_XMM0_Da_06;
        _local_118 = CONCAT48(extraout_XMM0_Da_06,local_118);
        local_118._0_4_ = SUB164(auVar10,0);
        local_118._4_4_ = SUB164(auVar10,4);
        uStack304 = (ulonglong)uVar23 ^ 0x80000000;
        _local_188 = CONCAT412(local_188._4_4_ * 0.0 + local_188._0_4_ * 0.0 + uStack272._4_4_ * 0.0 +
                               fStack380 * fRam0000000140c7844c,
                               CONCAT48(local_188._4_4_ * 0.0 + local_188._0_4_ * (float)uStack304 +
                                        extraout_XMM0_Da_06 * 0.0 + fStack380 * fRam0000000140c78448,
                                        CONCAT44(local_188._4_4_ * 1.0 + local_188._0_4_ * 0.0 +
                                                 fStack384 * local_118._4_4_ +
                                                 fStack380 * fRam0000000140c78444,
                                                 local_188._4_4_ * 0.0 +
                                                 local_188._0_4_ * extraout_XMM0_Da_06 +
                                                 fStack384 * local_118._0_4_ +
                                                 fStack380 * _DAT_140c78440)));
        _local_178 = CONCAT412(local_178._4_4_ * 0.0 + local_178._0_4_ * 0.0 + uStack272._4_4_ * 0.0 +
                               uStack368._4_4_ * fRam0000000140c7844c,
                               CONCAT48(local_178._4_4_ * 0.0 + local_178._0_4_ * (float)uStack304 +
                                        extraout_XMM0_Da_06 * 0.0 +
                                        uStack368._4_4_ * fRam0000000140c78448,
                                        CONCAT44(local_178._4_4_ * 1.0 + local_178._0_4_ * 0.0 +
                                                 (float)uStack368 * local_118._4_4_ +
                                                 uStack368._4_4_ * fRam0000000140c78444,
                                                 local_178._4_4_ * 0.0 +
                                                 local_178._0_4_ * extraout_XMM0_Da_06 +
                                                 (float)uStack368 * local_118._0_4_ +
                                                 uStack368._4_4_ * _DAT_140c78440)));
        _local_168 = CONCAT412(auStack356 * 0.0 + local_168 * 0.0 + uStack272._4_4_ * 0.0 +
                               uStack352._4_4_ * fRam0000000140c7844c,
                               CONCAT48(auStack356 * 0.0 + local_168 * (float)uStack304 +
                                        extraout_XMM0_Da_06 * 0.0 +
                                        uStack352._4_4_ * fRam0000000140c78448,
                                        CONCAT44(auStack356 * 1.0 + local_168 * 0.0 +
                                                 (float)uStack352 * local_118._4_4_ +
                                                 uStack352._4_4_ * fRam0000000140c78444,
                                                 auStack356 * 0.0 + local_168 * extraout_XMM0_Da_06 +
                                                 (float)uStack352 * local_118._0_4_ +
                                                 uStack352._4_4_ * _DAT_140c78440)));
        _local_158 = CONCAT412(auStack340 * 0.0 + local_158 * 0.0 + uStack272._4_4_ * 0.0 +
                               uStack336._4_4_ * fRam0000000140c7844c,
                               CONCAT48(auStack340 * 0.0 + local_158 * (float)uStack304 +
                                        extraout_XMM0_Da_06 * 0.0 +
                                        uStack336._4_4_ * fRam0000000140c78448,
                                        CONCAT44(auStack340 * 1.0 + local_158 * 0.0 +
                                                 (float)uStack336 * local_118._4_4_ +
                                                 uStack336._4_4_ * fRam0000000140c78444,
                                                 auStack340 * 0.0 + local_158 * extraout_XMM0_Da_06 +
                                                 (float)uStack336 * local_118._0_4_ +
                                                 uStack336._4_4_ * _DAT_140c78440)));
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar6 + 0x34) == 0) {
        local_108 = local_158;
        fStack260 = auStack340;
        fStack256 = (float)uStack336;
        fStack252 = uStack336._4_4_;
        fStack284 = uStack368._4_4_;
        fVar14 = fVar16 / SQRT(local_188._0_4_ * local_188._0_4_ + local_188._4_4_ * local_188._4_4_ +
                               0.0);
        uStack304 = CONCAT44(fStack380,fStack384 * fVar14);
        fStack292 = local_178._4_4_ * fVar14;
        fStack288 = (float)uStack368 * fVar14;
        local_128 = local_178._0_4_ * fVar14;
        local_138 = CONCAT44(local_188._4_4_ * fVar14,local_188._0_4_ * fVar14);
        local_118 = CONCAT44(auStack356 * fVar14,local_168 * fVar14);
        _local_118 = CONCAT48((float)uStack352 * fVar14,local_118);
        _local_118 = CONCAT412(uStack352._4_4_,_local_118);
        _local_158 = CONCAT44(auStack340 +
                              *(float *)((longlong)param_1 + 0x214) * fStack292 +
                              *(float *)(param_1 + 0x42) * local_188._4_4_ * fVar14 +
                              auStack356 * fVar14 * 0.0,
                              local_158 +
                              *(float *)((longlong)param_1 + 0x214) * local_128 +
                              *(float *)(param_1 + 0x42) * local_188._0_4_ * fVar14 +
                              local_168 * fVar14 * 0.0);
    }
    else {
        _local_158 = CONCAT44(auStack340 +
                              *(float *)((longlong)param_1 + 0x214) * local_178._4_4_ +
                              *(float *)(param_1 + 0x42) * local_188._4_4_ +
                              *(float *)(param_1 + 0x43) * auStack356,
                              local_158 +
                              *(float *)((longlong)param_1 + 0x214) * local_178._0_4_ +
                              *(float *)(param_1 + 0x42) * local_188._0_4_ +
                              *(float *)(param_1 + 0x43) * local_168);
    }
    _local_158 = CONCAT48((float)uStack336 + 0.0,_local_158);
    if (*(int *)((longlong)param_1 + 0x2dc) - 1U < 2) {
        lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x2d4));
        if (((lVar6 != 0) && (lVar5 != 0)) &&
            (plVar9 = *(longlong **)(lVar6 + 0x16e8), plVar9 != (longlong *)0x0)) {
            iVar4 = (**(code **)(*plVar9 + 0x350))(plVar9,*(undefined4 *)(param_1 + 0x5c));
            if (iVar4 != 0) {
                lVar6 = *(longlong *)(DAT_140c65898 + 0x71a8);
                if (lVar6 == 0) {
                    lVar6 = *(longlong *)(DAT_140c65898 + 0x71a0);
                }
                pfVar8 = (float *)(**(code **)(*plVar9 + 0x358))
                        (plVar9,local_148,*(undefined4 *)(param_1 + 0x5c),0);
                fVar14 = *pfVar8;
                fVar15 = pfVar8[1];
                fVar19 = pfVar8[2];
                fVar21 = fVar19 * *(float *)(lVar6 + 0xc0);
                fVar11 = fVar19 * *(float *)(lVar6 + 0xc4);
                fVar13 = fVar19 * *(float *)(lVar6 + 200);
                fVar19 = fVar19 * *(float *)(lVar6 + 0xcc);
                auVar12 = SUB1612(CONCAT412(fVar19,CONCAT48(fVar13,CONCAT44(fVar11,fVar21))) >> 0x20,0);
                fVar21 = fVar15 * *(float *)(lVar6 + 0xb0) + fVar14 * *(float *)(lVar6 + 0xa0) + fVar21 +
                         *(float *)(lVar6 + 0xd0);
                fVar11 = fVar15 * *(float *)(lVar6 + 0xb4) + fVar14 * *(float *)(lVar6 + 0xa4) + fVar11 +
                         *(float *)(lVar6 + 0xd4);
                fVar13 = fVar15 * *(float *)(lVar6 + 0xb8) + fVar14 * *(float *)(lVar6 + 0xa8) + fVar13 +
                         *(float *)(lVar6 + 0xd8);
                fVar14 = fVar15 * *(float *)(lVar6 + 0xbc) + fVar14 * *(float *)(lVar6 + 0xac) + fVar19 +
                         *(float *)(lVar6 + 0xdc);
                lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
                if (*(int *)(lVar6 + 0x38) == 0) {
                    fVar16 = *(float *)(lVar5 + 0x12c4);
                }
                lVar6 = *(longlong *)(lVar5 + 0xd08);
                if (lVar6 == 0) {
                    lVar5 = FUN_14022d500(*(undefined4 *)(lVar5 + 0xd8));
                    if (lVar5 != 0) {
                        fVar17 = *(float *)(lVar5 + 0x28);
                    }
                }
                else {
                    FUN_14047a940(lVar5);
                    fVar17 = extraout_XMM0_Da_07 * *(float *)(lVar6 + 0x8c);
                }
                fVar21 = local_158 - fVar21;
                fVar11 = auStack340 - fVar11;
                fVar13 = (float)uStack336 - fVar13;
                fVar14 = uStack336._4_4_ - fVar14;
                fVar15 = fVar11 * fVar11;
                uVar1 = SUB128(CONCAT84(SUB168((ZEXT1216(auVar12) << 0x20) >> 0x40,0),fVar15),0);
                uVar2 = uVar1 & 0xffffffff;
                fVar19 = fVar21 * fVar21 + (float)uVar2 + 0.0;
                auVar10 = rsqrtss(CONCAT412(fVar15,CONCAT48(fVar15,uVar1 << 0x20 | uVar2)),
                                  CONCAT412(fVar14 * fVar14,
                                            CONCAT48(fVar13 * fVar13,CONCAT44(fVar15,fVar19))));
                fVar15 = SUB164(auVar10,0);
                fVar15 = (3.0 - fVar19 * fVar15 * fVar15) * 0.5 * fVar15;
                if (fVar15 <= 0.0) {
                    fVar15 = 0.0;
                }
                fVar19 = fVar15 * fVar21 * fVar17 * fVar16;
                fVar21 = fVar15 * fVar11 * fVar17 * fVar16;
                fVar11 = fVar15 * fVar13 * fVar17 * fVar16;
                local_148 = CONCAT412(fVar15 * fVar14 * fVar17 * fVar16,
                                      CONCAT48(fVar11,CONCAT44(fVar21,fVar19)));
                if (*(int *)((longlong)param_1 + 0x2dc) == 1) {
                    local_158 = local_158 - fVar19;
                    auStack340 = auStack340 - fVar21;
                    uStack336._0_4_ = (float)uStack336 - fVar11;
                }
                else {
                    local_158 = local_158 + fVar19;
                    auStack340 = auStack340 + fVar21;
                    uStack336._0_4_ = (float)uStack336 + fVar11;
                }
                _local_158 = _local_158 & 0xffffffff | (ulonglong)(uint)auStack340 << 0x20;
            }
        }
    }
    *(float *)(param_1 + 0x50) = local_188._0_4_;
    *(float *)((longlong)param_1 + 0x284) = local_188._4_4_;
    *(float *)(param_1 + 0x51) = fStack384;
    *(float *)((longlong)param_1 + 0x28c) = fStack380;
    *(float *)(param_1 + 0x52) = local_178._0_4_;
    *(float *)((longlong)param_1 + 0x294) = local_178._4_4_;
    *(float *)(param_1 + 0x53) = (float)uStack368;
    *(float *)((longlong)param_1 + 0x29c) = uStack368._4_4_;
    *(float *)(param_1 + 0x54) = local_168;
    *(float *)((longlong)param_1 + 0x2a4) = auStack356;
    *(float *)(param_1 + 0x55) = (float)uStack352;
    *(float *)((longlong)param_1 + 0x2ac) = uStack352._4_4_;
    *(float *)(param_1 + 0x56) = local_158;
    *(float *)((longlong)param_1 + 0x2b4) = auStack340;
    *(float *)(param_1 + 0x57) = (float)uStack336;
    *(float *)((longlong)param_1 + 700) = uStack336._4_4_;
    FUN_1407db4f0(local_98 ^ (ulonglong)auStack424);
    return;
}



void FUN_14071f2b0(longlong *param_1)

{
    undefined4 uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bc;
    undefined uVar5;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Bf;
    undefined uVar6;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bh;
    undefined8 uVar7;
    undefined auVar9 [16];
    float local_68;
    float fStack100;
    float fStack96;
    float fStack92;
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
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined8 local_18;
    undefined auVar8 [12];
    undefined auVar10 [16];
    undefined auVar11 [16];
    undefined auVar12 [16];

    local_68 = 0.0;
    iVar4 = (**(code **)(*(longlong *)param_1[0x1c] + 0x10))((longlong *)param_1[0x1c],&local_68,0);
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x1d) == 0)) {
        (**(code **)(*param_1 + 0x80))(param_1);
        if ((*(int *)(param_1 + 0x58) != 0) &&
            ((*(int *)(param_1 + 0x46) == 1 && (*(int *)(param_1 + 0x59) == 0)))) {
            // WARNING: Could not recover jumptable at 0x00014071f32c. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x50))(param_1,0);
            return;
        }
        local_58 = *(undefined4 *)(param_1 + 0x50);
        uStack84 = *(undefined4 *)((longlong)param_1 + 0x284);
        uStack80 = *(undefined4 *)(param_1 + 0x51);
        uStack76 = *(undefined4 *)((longlong)param_1 + 0x28c);
        local_48 = *(undefined4 *)(param_1 + 0x52);
        uStack68 = *(undefined4 *)((longlong)param_1 + 0x294);
        uStack64 = *(undefined4 *)(param_1 + 0x53);
        uStack60 = *(undefined4 *)((longlong)param_1 + 0x29c);
        local_18 = 0;
        local_38 = *(undefined4 *)(param_1 + 0x54);
        uStack52 = *(undefined4 *)((longlong)param_1 + 0x2a4);
        uStack48 = *(undefined4 *)(param_1 + 0x55);
        uStack44 = *(undefined4 *)((longlong)param_1 + 0x2ac);
        local_28 = *(undefined4 *)(param_1 + 0x56);
        uStack36 = *(undefined4 *)((longlong)param_1 + 0x2b4);
        uStack32 = *(undefined4 *)(param_1 + 0x57);
        uStack28 = *(undefined4 *)((longlong)param_1 + 700);
        iVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,&local_58,param_1[0x1c],1,0,
                 param_1 + 0x5e,0);
        if (iVar4 < 0) {
            (**(code **)(*param_1 + 0x50))(param_1,0);
        }
        else {
            *(undefined4 *)(param_1 + 0x1d) = 1;
            FUN_14071c4e0(param_1);
            FUN_14071f500(param_1);
            (**(code **)(*(longlong *)param_1[0x5e] + 0x98))();
            uVar1 = *(undefined4 *)(param_1 + 0x2a);
            uVar2 = CONCAT13(extraout_XMM0_Bd,
                             CONCAT12(extraout_XMM0_Bc,CONCAT11(extraout_XMM0_Bb,extraout_XMM0_Ba))) ^
                    CONCAT13(extraout_XMM0_Bd,
                             CONCAT12(extraout_XMM0_Bc,CONCAT11(extraout_XMM0_Bb,extraout_XMM0_Ba)));
            uVar5 = (undefined)(uVar2 >> 0x10);
            uVar3 = CONCAT13(extraout_XMM0_Bh,
                             CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be))) ^
                    CONCAT13(extraout_XMM0_Bh,
                             CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be)));
            uVar6 = (undefined)(uVar3 >> 8);
            uVar7 = CONCAT44(uVar1,uVar1);
            auVar8 = CONCAT48(uVar1,uVar7);
            auVar12 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412
                                                                                                         (SUB164(CONCAT313(SUB163(CONCAT214(SUB162(
                                                                                                                                   CONCAT115((char)(uVar3 >> 0x18),
                                                                                                                                             CONCAT114((char)((uint)uVar1 >> 0x18),
                                                                                                                                                       SUB1614(CONCAT412(uVar1,auVar8
                                                                                                                                                       ),0))) >>
                                                                                                                                                              0x70,0),CONCAT113((char)(uVar3 >> 0x10),
                                                                                                                                                                                SUB1613(CONCAT412(uVar1,auVar8),
                                                                                                                                                                                        0))) >> 0x68,0),
                                                                                                                           CONCAT112((char)((uint)uVar1 >> 0x10),auVar8)) >>
                                                                                                                                                                          0x60,0),CONCAT111(uVar6,SUB1211(auVar8,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar1 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar8,0))) >> 0x50,0),
                                                                         CONCAT19((char)uVar3,SUB129(auVar8,0))) >> 0x48,0)
                                                ,CONCAT18((char)uVar1,uVar7)) >> 0x40,0),
                                        (char)(uVar2 >> 0x18)),((uint7)uVar7 >> 0x18) << 0x30);
            auVar11 = CONCAT115(CONCAT101(SUB1610(auVar12 >> 0x30,0),uVar5),((uint5)uVar7 >> 0x10) << 0x20
            );
            auVar10 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar11 >> 0x20,0),(uVar2 >> 8) << 0x18) >> 0x18
                    ,0),((uint3)uVar1 >> 8) << 0x10);
            auVar9 = CONCAT142(SUB1614(auVar10 >> 0x10,0),(ushort)uVar1 & 0xff | (ushort)(byte)uVar2 << 8)
            ;
            local_68 = (float)CONCAT13(uVar6,CONCAT12((char)uVar3,SUB162(auVar11 >> 0x20,0))) *
                       0.003921569;
            fStack100 = (float)CONCAT13((char)(((ulonglong)(ushort)(uVar2 >> 0x10) << 0x30) >> 0x38),
                                        CONCAT12(uVar5,SUB162(auVar10 >> 0x10,0))) * 0.003921569;
            fStack96 = (float)(SUB164(auVar9,0) & 0xffff | uVar2 << 0x10) * 0.003921569;
            fStack92 = (float)SUB164(CONCAT214((short)(uVar3 >> 0x10),
                                               CONCAT212(SUB162(auVar12 >> 0x30,0),SUB1612(auVar9,0))) >>
                                                                                                       0x60,0) * 0.003921569;
            (**(code **)(*(longlong *)param_1[0x1c] + 0x470))((longlong *)param_1[0x1c],&local_68);
        }
    }
    return;
}



void FUN_14071f450(longlong *param_1)

{
    longlong *plVar1;
    undefined4 local_18 [4];

    if (*(int *)((longlong)param_1 + 0x144) != 0) {
        // WARNING: Could not recover jumptable at 0x00014071f46f. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x50))(param_1,1);
        return;
    }
    if ((param_1[9] != 0) && (plVar1 = (longlong *)param_1[0x1c], plVar1 != (longlong *)0x0)) {
        local_18[0] = 0;
        (**(code **)(*plVar1 + 0x10))(plVar1,local_18,0);
        return;
    }
    if (param_1[0x1c] != 0) {
        if (*(int *)(param_1 + 0x1d) == 0) {
            // WARNING: Could not recover jumptable at 0x00014071f4c0. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x68))(param_1);
            return;
        }
        if ((*(int *)(param_1 + 0x46) != 1) && (*(int *)(param_1 + 0x58) != 0)) {
            (**(code **)(*param_1 + 0x80))(param_1);
            FUN_14071f500(param_1);
            return;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14071f500(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined auVar3 [16];
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auStack584 [32];
    undefined8 local_228;
    undefined local_218 [8];
    float fStack528;
    float fStack524;
    undefined local_208 [8];
    float fStack512;
    float fStack508;
    float local_1f8;
    float fStack500;
    float fStack496;
    float fStack492;
    float local_1e8;
    float fStack484;
    float fStack480;
    float fStack476;
    float local_1d8;
    float fStack468;
    float fStack464;
    float fStack460;
    undefined4 local_1c8;
    undefined4 local_1c4;
    undefined4 local_1ac;
    undefined local_1a8 [16];
    undefined local_198 [16];
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    undefined8 local_168;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack584;
    local_1ac = 0;
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x250))
            (*(longlong **)(param_1 + 0xe0),0,&local_1c8);
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x1a8))
            (*(longlong **)(param_1 + 0xe0),local_1c8,local_1c4);
    local_218._0_4_ = *(float *)*(undefined (*) [16])(param_1 + 0x280);
    local_218._4_4_ = *(float *)(param_1 + 0x284);
    fStack528 = *(float *)(param_1 + 0x288);
    fStack524 = *(float *)(param_1 + 0x28c);
    _local_218 = *(undefined (*) [16])(param_1 + 0x280);
    local_208._0_4_ = *(float *)*(undefined (*) [16])(param_1 + 0x290);
    local_208._4_4_ = *(float *)(param_1 + 0x294);
    fStack512 = *(float *)(param_1 + 0x298);
    fStack508 = *(float *)(param_1 + 0x29c);
    _local_208 = *(undefined (*) [16])(param_1 + 0x290);
    local_188 = *(float *)(param_1 + 0x2a0);
    fStack388 = *(float *)(param_1 + 0x2a4);
    fStack496 = *(float *)(param_1 + 0x2a8);
    fStack492 = *(float *)(param_1 + 0x2ac);
    local_1e8 = *(float *)(param_1 + 0x2b0);
    fStack484 = *(float *)(param_1 + 0x2b4);
    fStack480 = *(float *)(param_1 + 0x2b8);
    fStack476 = *(float *)(param_1 + 700);
    if (1 < *(int *)(lVar2 + 0xc) - 2U) goto LAB_14071f8d8;
    local_1d8 = local_1e8 + 0.0;
    fStack468 = fStack484 + 0.5;
    fStack464 = fStack480 + 0.0;
    fStack460 = fStack476 + 0.0;
    local_228 = 0;
    local_1f8 = local_188;
    fStack500 = fStack388;
    iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1b8))
            (*(longlong **)(DAT_140c65898 + 0x7248),&local_1d8,&local_158,2);
    if (iVar1 == 0) {
        local_158 = _DAT_140c77870;
        fStack340 = fRam0000000140c77874;
        fStack336 = fRam0000000140c77878;
        fStack332 = fRam0000000140c7787c;
    }
    fVar6 = SQRT(local_218._0_4_ * local_218._0_4_ + local_218._4_4_ * local_218._4_4_ +
                 fStack528 * fStack528);
    fVar7 = SQRT(local_208._0_4_ * local_208._0_4_ + local_208._4_4_ * local_208._4_4_ +
                 fStack512 * fStack512);
    fVar8 = SQRT(local_1f8 * local_1f8 + fStack500 * fStack500 + fStack496 * fStack496);
    if (*(int *)(lVar2 + 0xc) == 2) {
        fVar4 = local_218._4_4_ * local_218._4_4_;
        fVar5 = local_218._0_4_ * local_218._0_4_ + fVar4 + fStack528 * fStack528;
        auVar3 = rsqrtss(CONCAT412(fVar4,CONCAT48(fVar4,CONCAT44(fVar4,fVar4))),
                         CONCAT124(SUB1612(CONCAT412(fStack524 * fStack524,
                                                     CONCAT48(fStack528 * fStack528,
                                                              CONCAT44(fVar4,local_218._0_4_ *
                                                                             local_218._0_4_))) >> 0x20,
                                           0),fVar5));
        fVar4 = SUB164(auVar3,0);
        fVar4 = (3.0 - fVar5 * fVar4 * fVar4) * 0.5 * fVar4;
        if (fVar4 <= 0.0) {
            fVar4 = 0.0;
        }
        local_218._0_4_ = fVar4 * local_218._0_4_;
        local_218._4_4_ = fVar4 * local_218._4_4_;
        fStack528 = fVar4 * fStack528;
        fVar4 = fStack340 * local_218._4_4_ + local_158 * local_218._0_4_ + fStack336 * fStack528;
        fVar9 = local_158 - fVar4 * local_218._0_4_;
        fVar10 = fStack340 - fVar4 * local_218._4_4_;
        fVar11 = fStack336 - fVar4 * fStack528;
        fVar12 = fStack332 - fVar4 * fStack524;
        fVar4 = fVar10 * fVar10;
        fVar5 = fVar9 * fVar9 + fVar4 + fVar11 * fVar11;
        auVar3 = rsqrtss(CONCAT412(fVar4,CONCAT48(fVar4,CONCAT44(fVar4,fVar4))),
                         CONCAT124(SUB1612(CONCAT412(fVar12 * fVar12,
                                                     CONCAT48(fVar11 * fVar11,
                                                              CONCAT44(fVar4,fVar9 * fVar9))) >> 0x20,0)
                                 ,fVar5));
        fVar4 = SUB164(auVar3,0);
        fVar4 = (3.0 - fVar5 * fVar4 * fVar4) * 0.5 * fVar4;
        if (fVar4 <= 0.0) {
            fVar4 = 0.0;
        }
        local_208._0_4_ = fVar4 * fVar9;
        local_208._4_4_ = fVar4 * fVar10;
        fStack512 = fVar4 * fVar11;
        LAB_14071f840:
        local_1f8 = fStack512 * local_218._4_4_ - local_208._4_4_ * fStack528;
        fStack500 = local_208._0_4_ * fStack528 - fStack512 * local_218._0_4_;
        fStack496 = local_208._4_4_ * local_218._0_4_ - local_208._0_4_ * local_218._4_4_;
    }
    else if (*(int *)(lVar2 + 0xc) == 3) {
        local_218._0_4_ = fStack496 * fStack340 - fStack500 * fStack336;
        local_218._4_4_ = local_1f8 * fStack336 - fStack496 * local_158;
        fVar9 = fStack500 * local_158 - local_1f8 * fStack340;
        fVar10 = fStack492 * fStack508 - fStack492 * fStack508;
        fVar4 = local_218._4_4_ * local_218._4_4_;
        fVar5 = local_218._0_4_ * local_218._0_4_ + fVar4 + fVar9 * fVar9;
        auVar3 = rsqrtss(CONCAT412(fVar4,CONCAT48(fVar4,CONCAT44(fVar4,fVar4))),
                         CONCAT412(fVar10 * fVar10,CONCAT48(fVar9 * fVar9,CONCAT44(fVar4,fVar5))));
        fStack528 = SUB164(auVar3,0);
        fStack528 = (3.0 - fVar5 * fStack528 * fStack528) * 0.5 * fStack528;
        if (fStack528 <= 0.0) {
            fStack528 = 0.0;
        }
        local_218._0_4_ = fStack528 * local_218._0_4_;
        local_218._4_4_ = fStack528 * local_218._4_4_;
        fStack528 = fStack528 * fVar9;
        local_208._0_4_ = local_158;
        local_208._4_4_ = fStack340;
        fStack512 = fStack336;
        goto LAB_14071f840;
    }
    local_218._0_4_ = local_218._0_4_ * fVar6;
    local_218._4_4_ = local_218._4_4_ * fVar6;
    fStack528 = fStack528 * fVar6;
    fStack524 = fStack524 * fVar6;
    _local_218 = CONCAT412(fStack524,CONCAT48(fStack528,CONCAT44(local_218._4_4_,local_218._0_4_)));
    local_208._0_4_ = local_208._0_4_ * fVar7;
    local_208._4_4_ = local_208._4_4_ * fVar7;
    fStack512 = fStack512 * fVar7;
    fStack508 = fStack508 * fVar7;
    _local_208 = CONCAT412(fStack508,CONCAT48(fStack512,CONCAT44(local_208._4_4_,local_208._0_4_)));
    local_188 = local_1f8 * fVar8;
    fStack388 = fStack500 * fVar8;
    fStack496 = fStack496 * fVar8;
    fStack492 = fStack492 * fVar8;
    LAB_14071f8d8:
    local_1a8 = CONCAT412(fStack524,CONCAT48(fStack528,CONCAT44(local_218._4_4_,local_218._0_4_)));
    local_198 = CONCAT412(fStack508,CONCAT48(fStack512,CONCAT44(local_208._4_4_,local_208._0_4_)));
    local_168 = 0;
    fStack384 = fStack496;
    fStack380 = fStack492;
    local_178 = local_1e8;
    fStack372 = fStack484;
    fStack368 = fStack480;
    fStack364 = fStack476;
    local_1f8 = local_188;
    fStack500 = fStack388;
    (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x140))(*(longlong **)(param_1 + 0x2f0),local_1a8)
            ;
    lVar2 = *(longlong *)(param_1 + 0xd0);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x2ac) != 0)) {
        (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x58))(*(longlong **)(lVar2 + 0x210),local_218);
    }
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack584);
    return;
}



undefined8 * FUN_14071f970(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b73fa0;
    FUN_140719d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071f9b0(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar1 = (undefined4 *)(param_1 + 0xe0);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar8 = puVar5;
            puVar7 = param_2;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar8[0x18] = puVar7[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar8[0x1c] = puVar7[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        puVar8[0x20] = puVar7[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar7[0x25];
        uVar3 = puVar7[0x26];
        uVar4 = puVar7[0x27];
        puVar8[0x24] = puVar7[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
    }
    else {
        FUN_1407db590(puVar1,param_2,0xa0);
    }
    FUN_140719ef0(param_1,puVar1);
    return;
}



undefined8 FUN_14071fad0(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;

    puVar1 = (undefined4 *)(param_1 + 0xe8);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar9 = puVar5;
            puVar8 = param_2;
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *puVar9 = *puVar8;
            puVar9[1] = uVar2;
            puVar9[2] = uVar3;
            puVar9[3] = uVar4;
            uVar2 = puVar8[5];
            uVar3 = puVar8[6];
            uVar4 = puVar8[7];
            puVar9[4] = puVar8[4];
            puVar9[5] = uVar2;
            puVar9[6] = uVar3;
            puVar9[7] = uVar4;
            uVar2 = puVar8[9];
            uVar3 = puVar8[10];
            uVar4 = puVar8[0xb];
            puVar9[8] = puVar8[8];
            puVar9[9] = uVar2;
            puVar9[10] = uVar3;
            puVar9[0xb] = uVar4;
            uVar2 = puVar8[0xd];
            uVar3 = puVar8[0xe];
            uVar4 = puVar8[0xf];
            puVar9[0xc] = puVar8[0xc];
            puVar9[0xd] = uVar2;
            puVar9[0xe] = uVar3;
            puVar9[0xf] = uVar4;
            uVar2 = puVar8[0x11];
            uVar3 = puVar8[0x12];
            uVar4 = puVar8[0x13];
            puVar9[0x10] = puVar8[0x10];
            puVar9[0x11] = uVar2;
            puVar9[0x12] = uVar3;
            puVar9[0x13] = uVar4;
            uVar2 = puVar8[0x15];
            uVar3 = puVar8[0x16];
            uVar4 = puVar8[0x17];
            puVar9[0x14] = puVar8[0x14];
            puVar9[0x15] = uVar2;
            puVar9[0x16] = uVar3;
            puVar9[0x17] = uVar4;
            uVar2 = puVar8[0x19];
            uVar3 = puVar8[0x1a];
            uVar4 = puVar8[0x1b];
            puVar9[0x18] = puVar8[0x18];
            puVar9[0x19] = uVar2;
            puVar9[0x1a] = uVar3;
            puVar9[0x1b] = uVar4;
            uVar2 = puVar8[0x1d];
            uVar3 = puVar8[0x1e];
            uVar4 = puVar8[0x1f];
            puVar9[0x1c] = puVar8[0x1c];
            puVar9[0x1d] = uVar2;
            puVar9[0x1e] = uVar3;
            puVar9[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar8 + 0x20;
            puVar5 = puVar9 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar8[0x21];
        uVar3 = puVar8[0x22];
        uVar4 = puVar8[0x23];
        puVar9[0x20] = puVar8[0x20];
        puVar9[0x21] = uVar2;
        puVar9[0x22] = uVar3;
        puVar9[0x23] = uVar4;
        uVar2 = puVar8[0x25];
        uVar3 = puVar8[0x26];
        uVar4 = puVar8[0x27];
        puVar9[0x24] = puVar8[0x24];
        puVar9[0x25] = uVar2;
        puVar9[0x26] = uVar3;
        puVar9[0x27] = uVar4;
    }
    else {
        FUN_1407db590(puVar1,param_2,0xa0);
    }
    if (*(int *)(param_1 + 0x180) == 0) {
        return 0x80004005;
    }
    uVar7 = FUN_140719ef0(param_1,puVar1);
    return uVar7;
}



void FUN_14071fbd0(longlong param_1)

{
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 8))();
        *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    FUN_140719fc0(param_1);
    return;
}



void FUN_14071fc10(longlong param_1,undefined4 param_2)

{
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 8))();
        *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    FUN_14071a150(param_1,param_2);
    return;
}



undefined8 * FUN_14071fc90(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b73ee0;
    FUN_140719d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071fcd0(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar1 = (undefined4 *)(param_1 + 0xe0);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = puVar1;
        do {
            puVar8 = puVar5;
            puVar7 = param_2;
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar7[9];
            uVar3 = puVar7[10];
            uVar4 = puVar7[0xb];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar7[0xd];
            uVar3 = puVar7[0xe];
            uVar4 = puVar7[0xf];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar7[0x11];
            uVar3 = puVar7[0x12];
            uVar4 = puVar7[0x13];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar7[0x15];
            uVar3 = puVar7[0x16];
            uVar4 = puVar7[0x17];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar7[0x19];
            uVar3 = puVar7[0x1a];
            uVar4 = puVar7[0x1b];
            puVar8[0x18] = puVar7[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar7[0x1d];
            uVar3 = puVar7[0x1e];
            uVar4 = puVar7[0x1f];
            puVar8[0x1c] = puVar7[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            param_2 = puVar7 + 0x20;
            puVar5 = puVar8 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar7[0x21];
        uVar3 = puVar7[0x22];
        uVar4 = puVar7[0x23];
        puVar8[0x20] = puVar7[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar7[0x25];
        uVar3 = puVar7[0x26];
        uVar4 = puVar7[0x27];
        puVar8[0x24] = puVar7[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
        uVar2 = puVar7[0x29];
        uVar3 = puVar7[0x2a];
        uVar4 = puVar7[0x2b];
        puVar8[0x28] = puVar7[0x28];
        puVar8[0x29] = uVar2;
        puVar8[0x2a] = uVar3;
        puVar8[0x2b] = uVar4;
    }
    else {
        FUN_1407db590(puVar1,param_2,0xb0);
    }
    FUN_140719ef0(param_1,puVar1);
    return;
}



void FUN_14071fda0(longlong param_1)

{
    FUN_1404296f0(*(undefined8 *)(DAT_140c65898 + 0x7340),*(undefined4 *)(param_1 + 0x180),
                  *(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x188));
    return;
}



undefined8 * FUN_14071fe40(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b73f40;
    FUN_140719d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14071fe80(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x178));
    if (lVar2 != 0) {
        *(int *)(lVar2 + 0x1338) = *(int *)(lVar2 + 0x1338) + 1;
        plVar1 = *(longlong **)(lVar2 + 0x16e8);
        if (plVar1 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x00014071fec3. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*plVar1 + 0x188))(plVar1,*(int *)(lVar2 + 0x1338) != 0);
            return;
        }
    }
    return;
}



longlong FUN_14071ff40(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong **pplVar3;
    undefined8 *puVar4;
    longlong **pplVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong local_res8;
    longlong local_res18 [2];
    undefined8 local_38 [2];
    longlong **local_28;

    lVar9 = DAT_140c7f0f0;
    if (*(longlong *)(DAT_140c7f0f0 + 8) != 0) {
        lVar6 = *(longlong *)(DAT_140c7f0f0 + 8);
        do {
            if ((*(uint *)(lVar6 + 0x20) < *(uint *)param_2) ||
                ((*(uint *)(lVar6 + 0x20) <= *(uint *)param_2 &&
                  (*(uint *)(lVar6 + 0x24) < *(uint *)((longlong)param_2 + 4))))) {
                lVar7 = *(longlong *)(lVar6 + 0x18);
            }
            else {
                lVar7 = *(longlong *)(lVar6 + 0x10);
                lVar9 = lVar6;
            }
            lVar6 = lVar7;
        } while (lVar7 != 0);
    }
    if (lVar9 != DAT_140c7f0f0) {
        if ((*(uint *)(lVar9 + 0x20) <= *(uint *)param_2) &&
            ((*(uint *)(lVar9 + 0x20) < *(uint *)param_2 ||
              (*(uint *)(lVar9 + 0x24) <= *(uint *)((longlong)param_2 + 4))))) goto LAB_140720098;
    }
    local_res8 = param_1;
    puVar8 = (undefined8 *)FUN_14018b280(0x18);
    *puVar8 = puVar8;
    puVar8[1] = puVar8;
    local_38[0] = *param_2;
    local_28 = (longlong **)FUN_14018b280(0x18);
    *local_28 = (longlong *)local_28;
    local_28[1] = (longlong *)local_28;
    local_res8 = (longlong)*local_28;
    FUN_14001fdd0(local_res8,&local_res8,*puVar8,puVar8);
    local_res8 = lVar9;
    FUN_1407200b0(&DAT_140c7f0e8,local_res18,&local_res8,local_38);
    pplVar5 = local_28;
    pplVar3 = (longlong **)*local_28;
    while (pplVar3 != pplVar5) {
        plVar1 = *pplVar3;
        FUN_14018b900(pplVar3,0);
        pplVar3 = (longlong **)plVar1;
    }
    *pplVar5 = (longlong *)pplVar5;
    pplVar5[1] = (longlong *)pplVar5;
    FUN_14018b900(pplVar5,0);
    puVar4 = (undefined8 *)*puVar8;
    while (puVar4 != puVar8) {
        puVar2 = (undefined8 *)*puVar4;
        FUN_14018b900(puVar4,0);
        puVar4 = puVar2;
    }
    *puVar8 = puVar8;
    puVar8[1] = puVar8;
    FUN_14018b900(puVar8,0);
    lVar9 = local_res18[0];
    LAB_140720098:
    return lVar9 + 0x28;
}



longlong * FUN_1407200b0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *param_3;
    pcVar3 = *(char **)(param_1 + 8);
    if (pcVar2 == *(char **)(pcVar3 + 0x10)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            if ((*param_4 < *(uint *)(pcVar2 + 0x20)) ||
                ((*param_4 <= *(uint *)(pcVar2 + 0x20) && (param_4[1] < *(uint *)(pcVar2 + 0x24))))) {
                FUN_140720470(param_1,param_2,pcVar2,pcVar2,param_4);
                return param_2;
            }
        }
    }
    else {
        if (pcVar2 == pcVar3) {
            uVar1 = *param_4;
            pcVar2 = *(char **)(pcVar3 + 0x18);
            if ((uVar1 <= *(uint *)(pcVar2 + 0x20)) &&
                ((uVar1 < *(uint *)(pcVar2 + 0x20) || (param_4[1] <= *(uint *)(pcVar2 + 0x24))))) {
                plVar4 = (longlong *)FUN_140720540(param_1,local_18,param_4);
                *param_2 = *plVar4;
                return param_2;
            }
            if (((pcVar2 == pcVar3) || (uVar1 < *(uint *)(pcVar2 + 0x20))) ||
                ((uVar1 <= *(uint *)(pcVar2 + 0x20) && (param_4[1] < *(uint *)(pcVar2 + 0x24))))) {
                lVar5 = FUN_140720710(uVar1,param_4);
                *(longlong *)(pcVar2 + 0x10) = lVar5;
                pcVar3 = *(char **)(param_1 + 8);
                if (pcVar2 == pcVar3) {
                    *(longlong *)(pcVar3 + 8) = lVar5;
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                }
                else if (pcVar2 == *(char **)(pcVar3 + 0x10)) {
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                }
            }
            else {
                lVar5 = FUN_140720710(uVar1,param_4);
                *(longlong *)(pcVar2 + 0x18) = lVar5;
                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                }
            }
            *(char **)(lVar5 + 8) = pcVar2;
            *(undefined8 *)(lVar5 + 0x10) = 0;
            *(undefined8 *)(lVar5 + 0x18) = 0;
            FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
            *param_2 = lVar5;
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar5 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar2 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar5;
                if (pcVar2 == *(char **)(lVar5 + 0x10)) {
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
        uVar1 = *param_4;
        if (((*(uint *)(lVar5 + 0x20) < uVar1) ||
             ((*(uint *)(lVar5 + 0x20) <= uVar1 && (*(uint *)(lVar5 + 0x24) < param_4[1])))) &&
            ((uVar1 < *(uint *)(pcVar2 + 0x20) ||
              ((uVar1 <= *(uint *)(pcVar2 + 0x20) && (param_4[1] < *(uint *)(pcVar2 + 0x24))))))) {
            if (*(longlong *)(lVar5 + 0x18) == 0) {
                FUN_140720470(param_1,param_2,0,lVar5,param_4);
                return param_2;
            }
            FUN_140720470(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    plVar4 = (longlong *)FUN_140720540(param_1,local_18,param_4);
    *param_2 = *plVar4;
    return param_2;
}



void FUN_140720310(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8b124,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001407203d6. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_140720400();
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_140720400(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_2 + 0x30);
    if (plVar2 != *(longlong **)(param_2 + 0x30)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_2 + 0x30));
    }
    *(undefined8 *)*(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(longlong *)(*(longlong *)(param_2 + 0x30) + 8) = *(longlong *)(param_2 + 0x30);
    FUN_14018b900(*(undefined8 *)(param_2 + 0x30),0);
    FUN_14018b900(param_2,0);
    return;
}



longlong *
FUN_140720470(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(uint *)(param_4 + 0x20) <= *param_5) &&
            ((*(uint *)(param_4 + 0x20) < *param_5 || (*(uint *)(param_4 + 0x24) <= param_5[1])))) {
            lVar2 = FUN_140720710();
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1407204fe;
        }
    }
    lVar2 = FUN_140720710();
    *(longlong *)(param_4 + 0x10) = lVar2;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar2;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar2;
    }
    LAB_1407204fe:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140720540(longlong param_1,char **param_2,uint *param_3)

{
    uint uVar1;
    char *pcVar2;
    char **ppcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    bool bVar8;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar8 = true;
    pcVar7 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar7 = pcVar4;
            if ((*param_3 < *(uint *)(pcVar7 + 0x20)) ||
                ((*param_3 <= *(uint *)(pcVar7 + 0x20) && (param_3[1] < *(uint *)(pcVar7 + 0x24))))) {
                pcVar4 = *(char **)(pcVar7 + 0x10);
                bVar8 = true;
            }
            else {
                pcVar4 = *(char **)(pcVar7 + 0x18);
                bVar8 = false;
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar6 = pcVar7;
    if (bVar8) {
        if (pcVar7 == *(char **)(pcVar2 + 0x10)) {
            ppcVar3 = (char **)FUN_140720470(param_1,local_res8,pcVar4,pcVar7,param_3);
            *param_2 = *ppcVar3;
            goto LAB_1407206ea;
        }
        if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
            pcVar6 = *(char **)(pcVar7 + 0x18);
        }
        else {
            pcVar6 = *(char **)(pcVar7 + 0x10);
            if (pcVar6 == (char *)0x0) {
                pcVar6 = *(char **)(pcVar7 + 8);
                pcVar5 = pcVar6;
                if (pcVar7 == *(char **)(pcVar6 + 0x10)) {
                    do {
                        pcVar6 = *(char **)(pcVar5 + 8);
                        bVar8 = pcVar5 == *(char **)(pcVar6 + 0x10);
                        pcVar5 = pcVar6;
                    } while (bVar8);
                }
            }
            else {
                for (pcVar5 = *(char **)(pcVar6 + 0x18); pcVar5 != (char *)0x0;
                     pcVar5 = *(char **)(pcVar5 + 0x18)) {
                    pcVar6 = pcVar5;
                }
            }
        }
    }
    uVar1 = *param_3;
    if ((uVar1 <= *(uint *)(pcVar6 + 0x20)) &&
        ((uVar1 < *(uint *)(pcVar6 + 0x20) || (param_3[1] <= *(uint *)(pcVar6 + 0x24))))) {
        *param_2 = pcVar6;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    if ((((pcVar7 == pcVar2) || (pcVar4 != (char *)0x0)) || (uVar1 < *(uint *)(pcVar7 + 0x20))) ||
        ((uVar1 <= *(uint *)(pcVar7 + 0x20) && (param_3[1] < *(uint *)(pcVar7 + 0x24))))) {
        pcVar4 = (char *)FUN_140720710(pcVar6,param_3);
        *(char **)(pcVar7 + 0x10) = pcVar4;
        pcVar2 = *(char **)(param_1 + 8);
        if (pcVar7 == pcVar2) {
            *(char **)(pcVar2 + 8) = pcVar4;
            *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar4;
        }
        else if (pcVar7 == *(char **)(pcVar2 + 0x10)) {
            *(char **)(pcVar2 + 0x10) = pcVar4;
        }
    }
    else {
        pcVar4 = (char *)FUN_140720710(pcVar6,param_3);
        *(char **)(pcVar7 + 0x18) = pcVar4;
        if (pcVar7 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar4;
        }
    }
    *(char **)(pcVar4 + 8) = pcVar7;
    *(undefined8 *)(pcVar4 + 0x10) = 0;
    *(undefined8 *)(pcVar4 + 0x18) = 0;
    FUN_1400081c0(pcVar4,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = pcVar4;
    LAB_1407206ea:
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140720710(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14018b280(0x38);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        uVar2 = FUN_14018b280(0x18);
        *(undefined8 *)(lVar1 + 0x30) = uVar2;
        *(undefined8 *)uVar2 = uVar2;
        *(longlong *)(*(longlong *)(lVar1 + 0x30) + 8) = *(longlong *)(lVar1 + 0x30);
        FUN_14001fdd0();
    }
    return lVar1;
}

