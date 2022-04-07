//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_1406a1fc0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        puVar1 = *(uint **)(param_1 + 0x10);
        lVar2 = *(longlong *)(DAT_140c635f0 + 0x16a0);
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(lVar4 == lVar2);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 * FUN_1406a2150(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    param_1[1] = param_3;
    if (param_3 == 0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        puVar1 = (undefined8 *)FUN_14018b280(param_3 * 4 + 0x10,0);
        if (puVar1 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar1[1] = param_3;
            puVar2 = puVar1 + 2;
            *puVar1 = &PTR_LAB_140b55060;
        }
    }
    *param_1 = puVar2;
    FUN_1407db590(puVar2,param_2,param_1[1] << 2);
    return param_1;
}



undefined8 FUN_1406a21d0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.GenericMapNode");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a2290(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1406a22d3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.GenericMapNode",0x13);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_1406a23b7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a22d3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a23b7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a23d0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



undefined4 FUN_1406a2450(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.GenericMapNode");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5d550;
    puVar6 = PTR_DAT_140c5d550;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"GenericMapNode",&PTR_DAT_140b6ffe0);
    FUN_140058710(param_1,"GenericMapNodeType",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 3;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_1406a2690(longlong param_1)

{
    int iVar1;
    int *piVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (piVar2 = *(int **)(*(longlong *)(lVar5 + 8) + 8), piVar2 != (int *)0x0)) {
        iVar1 = *piVar2;
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a2710(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
        iVar1 = *(int *)(lVar4 + 4);
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



undefined8 FUN_1406a2790(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined local_38 [16];
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar3 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        lVar3 = FUN_14024b980(*(undefined4 *)(lVar3 + 8));
        if (lVar3 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        local_38 = ZEXT1216(*(undefined (*) [12])(lVar3 + 0xc));
        FUN_1400fa3c0(local_28,param_1,local_38);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
        puVar1 = *(undefined8 **)(local_18 + 0x10);
        uVar2 = *puVar4;
        *puVar1 = uVar2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
        FUN_1400579e0(local_18,uVar2,local_20);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a2890(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 == 0)) ||
        (((uVar1 = *(ulonglong *)(lVar2 + 0x18), uVar1 == 0 || (DAT_140c3fe70 < uVar1)) ||
          (DAT_140c3fe68 + uVar1 == 0)))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        if (uVar1 == 0) {
            lVar2 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar2 = 0;
        }
        else {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        lVar2 = FUN_14018f0e0(local_28,lVar2);
        if (*(longlong *)(lVar2 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_1406a2980(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f62ac);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406a29f9;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0xc));
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406a29f9:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406a2a22;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406a2a22:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406a2a40(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f628c);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406a2ab9;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0x10));
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406a2ab9:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406a2ae2;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406a2ae2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406a2b00(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.GenericMapNode");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 0x20);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_1406a2b80(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.GenericMapNode",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406a2c60(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Contract");
    lVar6 = 0;
    lVar7 = lVar6;
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 8);
    }
    lVar5 = FUN_140056ab0(param_1,2,"Game.Contract");
    if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 8);
    }
    if ((lVar7 == 0) || (lVar6 == 0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        iVar1 = *(int *)(lVar6 + 8);
        puVar3 = *(uint **)(param_1 + 0x10);
        iVar2 = *(int *)(lVar7 + 8);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar2 == iVar1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a2d00(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1406a2d43:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.Contract",0xd);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_1406a2e27;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a2d43;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a2e27:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a2e40(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Contract");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



undefined8 FUN_1406a2ec0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.Contract");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5d5f0;
    puVar6 = PTR_DAT_140c5d5f0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"Contract",&PTR_DAT_140b70000);
    return 1;
}



undefined8 FUN_1406a30d0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Contract");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        if (*(int *)(*(longlong *)(lVar1 + 8) + 8) != 0) {
            lVar1 = FUN_1405a8a40();
            if (lVar1 != 0) {
                uVar2 = FUN_140663030(param_1,lVar1);
                return uVar2;
            }
        }
        return 0;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3140(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Contract");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405a8a40();
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            plVar4 = (longlong *)
                    FUN_140489580(DAT_140c65930,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x1ac));
            if (plVar4 != (longlong *)0x0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar1 = *(int *)(*plVar4 + 0x18);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a31e0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Contract");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405a8a40();
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            plVar4 = (longlong *)
                    FUN_140489580(DAT_140c65930,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x1ac));
            if (plVar4 != (longlong *)0x0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar1 = *(int *)(*plVar4 + 0x14);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3280(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;

    lVar2 = FUN_140056ab0();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405a8a40();
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            plVar3 = (longlong *)FUN_140489580(DAT_140c65930);
            if (plVar3 != (longlong *)0x0) {
                iVar5 = *(int *)(*plVar3 + 0x14) + -1;
                if (iVar5 == 0) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = 5;
                    if (*(int *)(*plVar3 + 0x14) == 2) {
                        iVar4 = iVar5;
                    }
                }
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3340(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;

    lVar3 = FUN_140056ab0();
    if (((((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) || (lVar3 = FUN_1405a8a40(), lVar3 == 0))
         || ((*(longlong *)(lVar3 + 8) == 0 ||
              (plVar4 = (longlong *)FUN_140489580(DAT_140c65930), plVar4 == (longlong *)0x0)))) ||
        ((*(int *)(*plVar4 + 0x14) == 0 || (*(int *)(*plVar4 + 0x18) == 0)))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if ((DAT_140dc4b10 & 1) == 0) {
            DAT_140dc4b10 = DAT_140dc4b10 | 1;
            lVar3 = FUN_140200220(0x4a9);
            if (lVar3 == 0) {
                DAT_140c8b020 = 0x14;
            }
            else {
                DAT_140c8b020 = *(int *)(lVar3 + 4);
            }
            lVar3 = FUN_140200220(0x4a9);
            if (lVar3 == 0) {
                DAT_140c8b024 = 100;
            }
            else {
                DAT_140c8b024 = *(int *)(lVar3 + 8);
            }
            lVar3 = FUN_140200220(0x4a9);
            if (lVar3 == 0) {
                DAT_140c8b028 = 200;
            }
            else {
                DAT_140c8b028 = *(int *)(lVar3 + 0xc);
            }
            lVar3 = FUN_140200220(0x4a9);
            if (lVar3 == 0) {
                DAT_140c8b02c = 500;
            }
            else {
                DAT_140c8b02c = *(int *)(lVar3 + 0x10);
            }
        }
        iVar1 = *(int *)(*plVar4 + 0x18);
        iVar5 = DAT_140c8b020;
        if (((iVar1 != 1) && (iVar5 = DAT_140c8b024, iVar1 != 2)) &&
            ((iVar5 = DAT_140c8b028, iVar1 != 3 && (iVar5 = 0, iVar1 == 4)))) {
            iVar5 = DAT_140c8b02c;
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a34e0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Contract");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        iVar2 = FUN_14048a2b0();
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar2 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3550(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        iVar2 = FUN_1405fbc40(*DAT_140c65b80);
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar2 == 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a35e0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        iVar2 = FUN_1405fbc40(*DAT_140c65b80);
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar2 == 2);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3670(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res10;

    lVar3 = FUN_140056ab0();
    if ((((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 8), lVar3 == 0)) ||
         (lVar4 = FUN_1405a8a40(), lVar4 == 0)) ||
        ((*(longlong *)(lVar4 + 8) == 0 || (lVar4 = FUN_140489580(DAT_140c65930), lVar4 == 0)))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar4 = *(longlong *)(lVar4 + 0x50);
        uVar1 = *(uint *)(lVar3 + 8);
        local_res10 = lVar4;
        lVar3 = *(longlong *)(lVar4 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar4) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar4;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(local_res10 != lVar4);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406a3760(longlong param_1)

{
    short sVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    undefined2 *puVar5;
    longlong lVar6;
    short *psVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined8 *puVar10;
    undefined4 local_res10;
    undefined4 uStackX20;
    undefined8 local_108;
    undefined4 local_100;
    undefined **local_f8;
    undefined local_f0 [8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_38 [16];
    undefined2 *local_28;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Contract");
    lVar8 = 0;
    lVar6 = lVar8;
    if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
    }
    lVar4 = FUN_1405a8a40();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_1405a4850();
    if (iVar3 == 0) {
        FUN_1400b6f30(&local_f8);
        local_f8 = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = CONCAT88(puVar5,puVar5);
        local_28 = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        lVar4 = FUN_14018b280(0x60);
        lVar6 = lVar8;
        if (lVar4 != 0) {
            lVar6 = FUN_1404db7e0(lVar4,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(&local_f8,lVar6);
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) {
            if (local_e8 != local_e0) {
                *local_e8 = 0;
                local_e0 = local_e8;
            }
        }
        else {
            sVar1 = *psVar7;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            FUN_14001c480(local_f0,psVar7,psVar7 + lVar8);
        }
        lVar6 = FUN_1400b7660(&local_f8);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                      *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),
                      *(undefined8 *)(lVar6 + 8));
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(&local_f8);
        return 1;
    }
    iVar3 = FUN_140552550(lVar4,0xffffffff);
    if (iVar3 == 0) {
        iVar3 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar4 + 8));
        if (iVar3 == 4) {
            local_res10 = *(undefined4 *)(lVar6 + 8);
            puVar10 = (undefined8 *)&local_res10;
            uVar9 = 0x365;
        }
        else {
            local_res10 = 300;
            uStackX20 = 0xffffffff;
            local_100 = *(undefined4 *)(lVar6 + 8);
            local_108 = 0xffffffff0000012c;
            puVar10 = &local_108;
            uVar9 = 0x35b;
        }
        FUN_1403f4900(DAT_140c65898,uVar9,puVar10);
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_1400b6f30(&local_f8);
    local_f8 = &PTR_FUN_140b69230;
    local_28 = (undefined2 *)0x0;
    local_38 = ZEXT816(0);
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    local_38 = CONCAT88(puVar5,puVar5);
    local_28 = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    lVar4 = FUN_14018b280(0x60);
    lVar6 = lVar8;
    if (lVar4 != 0) {
        lVar6 = FUN_1404db7e0(lVar4,*(undefined8 *)(DAT_140c65898 + 0x78));
    }
    FUN_1400b7480(&local_f8,lVar6);
    if (iVar3 == 3) {
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) {
            if (local_e8 != local_e0) {
                *local_e8 = 0;
                local_e0 = local_e8;
            }
            goto LAB_1406a3a8a;
        }
        lVar8 = 0;
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar7[lVar8];
        }
    }
    else if (iVar3 == 0xf) {
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) {
            if (local_e8 != local_e0) {
                *local_e8 = 0;
                local_e0 = local_e8;
            }
            goto LAB_1406a3a8a;
        }
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar7[lVar8];
        }
    }
    else {
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) {
            if (local_e8 != local_e0) {
                *local_e8 = 0;
                local_e0 = local_e8;
            }
            goto LAB_1406a3a8a;
        }
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar7[lVar8];
        }
    }
    FUN_14001c480(local_f0,psVar7,psVar7 + lVar8);
    LAB_1406a3a8a:
    lVar6 = FUN_1400b7660(&local_f8);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                  *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),*(undefined8 *)(lVar6 + 8))
            ;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_38._0_8_ != 0) {
        FUN_14018b900(local_38._0_8_,0);
    }
    FUN_1400b7390(&local_f8);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406a3ba0(longlong param_1)

{
    short sVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong lVar7;
    short *psVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 local_f8;
    undefined4 local_f0;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Contract");
    lVar9 = 0;
    uVar4 = 0;
    lVar7 = lVar9;
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 8);
    }
    lVar5 = FUN_1405a8a40();
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        iVar3 = FUN_1405a4850();
        if (iVar3 == 0) {
            FUN_1400b6f30(&local_e8);
            local_e8 = &PTR_FUN_140b69230;
            local_18 = (undefined2 *)0x0;
            local_28 = ZEXT816(0);
            puVar6 = (undefined2 *)FUN_14018b280(0x10);
            local_28 = CONCAT88(puVar6,puVar6);
            local_18 = puVar6 + 8;
            if (puVar6 != (undefined2 *)0x0) {
                *puVar6 = 0;
            }
            lVar5 = FUN_14018b280(0x60);
            lVar7 = lVar9;
            if (lVar5 != 0) {
                lVar7 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            FUN_1400b7480(&local_e8,lVar7);
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_d8 != local_d0) {
                    *local_d8 = 0;
                    local_d0 = local_d8;
                }
            }
            else {
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar9 = lVar9 + 1;
                    sVar1 = psVar8[lVar9];
                }
                FUN_14001c480(local_e0,psVar8,psVar8 + lVar9);
            }
            lVar7 = FUN_1400b7660(&local_e8);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                          *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),
                          *(undefined8 *)(lVar7 + 8));
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (local_28._0_8_ != 0) {
                FUN_14018b900(local_28._0_8_,0);
            }
            FUN_1400b7390(&local_e8);
            return 1;
        }
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar10 < *(undefined8 **)(param_1 + 0x10)) && (puVar10 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar4 = FUN_140056d60(param_1,2);
        }
        local_f0 = 0;
        local_f8 = CONCAT44(uVar4,*(undefined4 *)(lVar7 + 8));
        FUN_1403f4900(DAT_140c65898,0x35d,&local_f8);
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3df0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ICComm");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.ICComm");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        puVar1 = *(uint **)(param_1 + 0x10);
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x68) + 0x18);
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x18);
        puVar1[2] = 1;
        *puVar1 = (uint)(lVar5 == lVar4);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3ea0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1406a3ee3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.ICComm",0xb);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_1406a3fc7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a3ee3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a3fc7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a3fe0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ICComm");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



undefined8 * FUN_1406a4060(undefined8 *param_1,undefined8 *param_2)

{
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b70020;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0xfffffffe;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0xfffffffe;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xfffffffe;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0xfffffffe;
    param_1[0xd] = param_2;
    if (param_2 != (undefined8 *)0x0) {
        (**(code **)*param_2)(param_2);
    }
    param_1[0xf] = 0;
    plVar1 = param_2 + 6;
    plVar2 = param_1 + 0xf;
    param_1[0xe] = plVar1;
    *plVar2 = *plVar1;
    *plVar1 = (longlong)param_1;
    if (*plVar2 != 0) {
        *(longlong **)(*plVar2 + 0x70) = plVar2;
    }
    return param_1;
}



undefined8 FUN_1406a4110(undefined8 param_1,ulonglong param_2)

{
    FUN_1406a4150();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001406a41f1)

void FUN_1406a4150(undefined8 *param_1)

{
    undefined8 uVar1;
    longlong lVar2;

    *param_1 = &PTR_FUN_140b70020;
    uVar1 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    if (*(int *)(param_1 + 3) != -2) {
        FUN_1400579e0(uVar1);
    }
    if (*(int *)(param_1 + 6) != -2) {
        FUN_1400579e0(uVar1);
    }
    if (*(int *)(param_1 + 9) != -2) {
        FUN_1400579e0(uVar1);
    }
    if (*(int *)(param_1 + 0xc) != -2) {
        FUN_1400579e0(uVar1);
    }
    if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 *)(param_1[0xf] + 0x70) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd] + 8))();
    }
    lVar2 = param_1[0xb];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[8];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[5];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[2];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = &PTR_FUN_140b567a8;
    return;
}



void FUN_1406a4280(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char *param_4,
                   undefined4 param_5)

{
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    longlong lVar6;

    lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
    if (*(int *)(param_3 + 2) != -2) {
        FUN_1400579e0(param_2);
    }
    lVar3 = param_3[1];
    if (param_4 == (char *)0x0) {
        param_3[1] = 0;
    }
    else {
        lVar6 = 0;
        cVar1 = *param_4;
        while (cVar1 != '\0') {
            lVar6 = lVar6 + 1;
            cVar1 = param_4[lVar6];
        }
        puVar4 = (undefined8 *)FUN_14018b280(lVar6 + 0x11,0);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = lVar6;
            *puVar4 = &PTR_LAB_140b55060;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_4,lVar6);
        *(undefined *)(lVar6 + (longlong)puVar4) = 0;
        param_3[1] = puVar4;
    }
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    uVar5 = FUN_14013a390(lVar2 + 0x9c0,param_5);
    *(undefined4 *)(param_3 + 2) = param_5;
    *param_3 = uVar5;
    return;
}



void FUN_1406a4360(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    short *psVar5;
    short *psVar6;
    longlong lVar7;
    undefined8 local_res20;

    lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
    if ((*param_2 != 0) && (5 < *(int *)(*param_2 + 0x218))) {
        psVar5 = &DAT_140b7b704;
        if (*(short **)(DAT_140c63650 + 0x310) != (short *)0x0) {
            psVar5 = *(short **)(DAT_140c63650 + 0x310);
        }
        psVar6 = (short *)0x0;
        sVar1 = *psVar5;
        psVar3 = psVar6;
        while (sVar1 != 0) {
            psVar3 = (short *)((longlong)psVar3 + 1);
            sVar1 = psVar5[(longlong)psVar3];
        }
        lVar7 = (longlong)psVar3 * 2 >> 1;
        psVar3 = psVar6;
        local_res20 = param_4;
        if (lVar7 + 1U < 0x7fffffffffffffff) {
            psVar3 = (short *)FUN_14018b280((lVar7 + 1U) * 2,0);
        }
        FUN_1407db590(psVar3,psVar5,lVar7 * 2);
        if (psVar3 + lVar7 != (short *)0x0) {
            psVar3[lVar7] = 0;
        }
        psVar5 = &DAT_140b7b704;
        if (*(short **)(*param_2 + 0xa0) != (short *)0x0) {
            psVar5 = *(short **)(*param_2 + 0xa0);
        }
        sVar1 = *psVar5;
        psVar4 = psVar6;
        while (sVar1 != 0) {
            psVar4 = (short *)((longlong)psVar4 + 1);
            sVar1 = psVar5[(longlong)psVar4];
        }
        FUN_14001c480(DAT_140c63650 + 0x308,psVar5,psVar5 + (longlong)psVar4);
        FUN_1400f3040(lVar2 + 0x180,*param_2,*(undefined4 *)(param_2 + 2),param_2[1],param_3,
                      &local_res20);
        psVar5 = &DAT_140b7b704;
        if (psVar3 != (short *)0x0) {
            psVar5 = psVar3;
        }
        sVar1 = *psVar5;
        while (sVar1 != 0) {
            psVar6 = (short *)((longlong)psVar6 + 1);
            sVar1 = psVar5[(longlong)psVar6];
        }
        FUN_14001c480(DAT_140c63650 + 0x308,psVar5,psVar5 + (longlong)psVar6);
        if (psVar3 != (short *)0x0) {
            FUN_14018b900(psVar3,0);
        }
    }
    return;
}



undefined8 FUN_1406a4710(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ICComm");
    if (lVar3 == 0) {
        lVar3 = 0;
    }
    else {
        lVar3 = *(longlong *)(lVar3 + 8);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x68) + 0x28);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a4770(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ICComm");
    lVar4 = 0;
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    iVar1 = *(int *)(*(longlong *)(lVar4 + 0x68) + 0x2c);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a47d0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res10;

    lVar5 = FUN_140056ab0(param_1,1,"Game.ICComm");
    lVar6 = 0;
    iVar4 = 0;
    lVar7 = lVar6;
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 8);
    }
    lVar5 = FUN_140056bb0(param_1,2);
    if (lVar5 != 0) {
        FUN_14018d320(&local_res10,lVar5);
        lVar6 = local_res10;
    }
    iVar3 = FUN_1403e1170(lVar6,0x1b);
    if (iVar3 == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
    }
    else {
        if (*(int *)(*(longlong *)(lVar7 + 0x68) + 0x2c) != 0) {
            iVar4 = FUN_140631240();
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar4;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    return 1;
}



undefined8 FUN_1406a48d0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    double *pdVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res10;
    undefined local_38 [8];
    longlong local_30;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ICComm");
    lVar6 = 0;
    iVar2 = 0;
    lVar7 = lVar6;
    if (lVar3 != 0) {
        lVar7 = *(longlong *)(lVar3 + 8);
    }
    uVar4 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_38,uVar4);
    lVar3 = FUN_140056bb0(param_1,3);
    if (lVar3 != 0) {
        FUN_14018d320(&local_res10,lVar3);
        lVar6 = local_res10;
    }
    iVar1 = FUN_1403e1170(lVar6,0x1b);
    if (iVar1 == 0) {
        pdVar5 = *(double **)(param_1 + 0x10);
        *pdVar5 = 0.0;
    }
    else {
        if (*(int *)(*(longlong *)(lVar7 + 0x68) + 0x2c) != 0) {
            iVar2 = FUN_140631240();
        }
        pdVar5 = *(double **)(param_1 + 0x10);
        *pdVar5 = (double)iVar2;
    }
    *(undefined4 *)(pdVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return 1;
}



undefined8 FUN_1406a4a00(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    FUN_140056ab0(param_1,1,"Game.ICComm");
    FUN_140056bb0(param_1,2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar2 < puVar1) && (puVar2 != &DAT_140a12138)) &&
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x28) == 5)) {
        puVar3 = &DAT_140a12138;
        if (puVar2 < puVar1) {
            puVar3 = puVar2;
        }
        *puVar1 = *puVar3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400578c0(param_1);
    }
    FUN_1406a4280();
    return 0;
}



undefined8 FUN_1406a4d60(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1406a4da3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.HousingPlot",0x10);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_1406a4e87;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a4da3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a4e87:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



ulonglong FUN_1406a4ea0(int param_1)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    longlong *plVar4;
    ulonglong uVar5;

    if ((DAT_140c7dfe0 != 0) && (uVar5 = 0, uVar3 = uVar5, DAT_140c7de20 != 0)) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar3 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (lVar1 != 0) {
                    iVar2 = 200;
                    if (*(int *)(lVar1 + 0x10) == 1) {
                        iVar2 = 100;
                    }
                    iVar2 = 200 - iVar2;
                    if (((-1 < iVar2) && (iVar2 < *(int *)(lVar1 + 0x278))) &&
                        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x270) + (longlong)iVar2 * 8), lVar1 != 0)
                            ) {
                        if (*(uint *)(lVar1 + 0x10) != 0) {
                            plVar4 = *(longlong **)(lVar1 + 8);
                            uVar3 = (ulonglong)*(uint *)(lVar1 + 0x10);
                            do {
                                lVar1 = *plVar4;
                                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_1)) {
                                    iVar2 = 1;
                                    if (*(int *)(lVar1 + 0x78) != 0) {
                                        iVar2 = *(int *)(lVar1 + 0x78);
                                    }
                                    uVar5 = (ulonglong)(uint)((int)uVar5 + iVar2);
                                }
                                plVar4 = plVar4 + 1;
                                uVar3 = uVar3 - 1;
                            } while (uVar3 != 0);
                        }
                        return uVar5;
                    }
                    return 0;
                }
                break;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < DAT_140c7de20);
    }
    uVar3 = FUN_1403ac840(DAT_140c65898 + 0xa0,2,param_1);
    return uVar3;
}



undefined8 FUN_1406a4f80(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.HousingPlot");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_s_GetPlugName_140c5d7a0;
    puVar6 = PTR_s_GetPlugName_140c5d7a0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"HousingPlot",&PTR_DAT_140b70050);
    return 1;
}



undefined8 FUN_1406a51d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar2 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if ((((lVar2 != 0) &&
              ((ulonglong)**(uint **)(lVar1 + 8) <
               (ulonglong)(*(longlong *)(lVar2 + 0x100) - *(longlong *)(lVar2 + 0xf8) >> 3))) &&
             (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xf8) + (ulonglong)**(uint **)(lVar1 + 8) * 8),
                     lVar1 != 0)) && (lVar1 = FUN_140206c60(*(undefined4 *)(lVar1 + 4)), lVar1 != 0)) {
            uVar3 = FUN_14034bdd0();
            lVar1 = FUN_14018f0e0(local_28,uVar3);
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
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a52f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar2 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (((lVar2 != 0) &&
             ((ulonglong)**(uint **)(lVar1 + 8) <
              (ulonglong)(*(longlong *)(lVar2 + 0x100) - *(longlong *)(lVar2 + 0xf8) >> 3))) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xf8) + (ulonglong)**(uint **)(lVar1 + 8) * 8),
                    lVar1 != 0)) {
            FUN_140206c60(*(undefined4 *)(lVar1 + 4));
            uVar3 = FUN_14034bdd0();
            lVar1 = FUN_14018f0e0(local_28,uVar3);
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
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a5410(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = **(int **)(lVar3 + 8);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(iVar1 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a5480(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    iVar1 = *(int *)(*(longlong *)(lVar4 + 8) + 0xc);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a54f0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar1 != 0) {
        FUN_1404b7540(param_1,**(undefined4 **)(lVar1 + 8));
    }
    return 0;
}



undefined8 FUN_1406a5520(longlong param_1)

{
    int iVar1;
    undefined uVar2;
    undefined4 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;

    uVar2 = 1;
    lVar4 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar4 != 0) {
        uVar7 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar5 = uVar7;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                    param_1) {
                    uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                    break;
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        uVar3 = FUN_1400f26a0(uVar7 + 0x180,2);
        puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x20);
        puVar8 = &DAT_140a12138;
        if (puVar6 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
            puVar8 = puVar6;
        }
        iVar1 = *(int *)(puVar8 + 1);
        if ((iVar1 == 0) || ((iVar1 == 1 && (*(int *)puVar8 == 0)))) {
            uVar2 = 0;
        }
        FUN_1404b73e0(iVar1,**(undefined4 **)(lVar4 + 8),uVar3,4,uVar2);
    }
    return 0;
}



undefined8 FUN_1406a5630(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar1 != 0) {
        FUN_1404b7620(param_1,**(undefined4 **)(lVar1 + 8));
    }
    return 0;
}



undefined8 FUN_1406a5660(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar3 != 0) {
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
        uVar2 = FUN_1400f26a0(uVar5 + 0x180,2);
        puVar1 = *(undefined4 **)(lVar3 + 8);
        FUN_1404b73e0(puVar1,*puVar1,puVar1[3],uVar2,1);
    }
    return 0;
}



undefined8 FUN_1406a5710(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = FUN_140205fa0(*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8));
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 8);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a57a0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar4 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (((lVar4 == 0) ||
             ((ulonglong)(*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3) <=
              (ulonglong)**(uint **)(lVar3 + 8))) ||
            (lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xf8) + (ulonglong)**(uint **)(lVar3 + 8) * 8),
                    lVar3 == 0)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            iVar1 = *(int *)(lVar3 + 8);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a5860(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;

    lVar3 = FUN_140056ab0(param_1,1);
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        lVar4 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338),
                              *(undefined4 *)(*(longlong *)(lVar3 + 8) + 4));
        lVar6 = 0;
        uVar5 = 0;
        if (lVar4 != 0) {
            if ((*(longlong *)(lVar4 + 0xe8) != 0) && (**(uint **)(lVar3 + 8) < *(uint *)(lVar4 + 0x110)))
            {
                lVar6 = (ulonglong)**(uint **)(lVar3 + 8) * 0xc0 + *(longlong *)(lVar4 + 0xe8);
            }
            if (((*(uint *)(lVar6 + 0xb8) & 0xfffffffa) != 0) || (*(uint *)(lVar6 + 0xb8) == 4)) {
                uVar5 = 1;
            }
            uVar5 = (uint)(uVar5 != 0);
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = uVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a5ad0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        lVar4 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (((lVar4 == 0) ||
             ((ulonglong)(*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3) <=
              (ulonglong)**(uint **)(lVar3 + 8))) ||
            (*(longlong *)(*(longlong *)(lVar4 + 0xf8) + (ulonglong)**(uint **)(lVar3 + 8) * 8) == 0)) {
            uVar5 = 0;
        }
        else {
            lVar3 = FUN_140206c60();
            bVar6 = false;
            if (lVar3 != 0) {
                bVar6 = *(int *)(lVar3 + 0x5c) != 0;
            }
            uVar5 = (uint)bVar6;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = uVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a5cd0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        lVar4 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (((lVar4 == 0) ||
             ((ulonglong)(*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3) <=
              (ulonglong)**(uint **)(lVar3 + 8))) ||
            (*(longlong *)(*(longlong *)(lVar4 + 0xf8) + (ulonglong)**(uint **)(lVar3 + 8) * 8) == 0)) {
            uVar5 = 0;
        }
        else {
            lVar3 = FUN_140206c60();
            if (lVar3 == 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (uint)((*(uint *)(lVar3 + 0x20) & 0x10) != 0);
            }
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = uVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a5db0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    longlong lVar3;
    float fVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar2 != 0) {
        lVar3 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar3 != 0) {
            if ((*(longlong *)(lVar3 + 0xe8) == 0) || (*(uint *)(lVar3 + 0x110) <= **(uint **)(lVar2 + 8))
                    ) {
                lVar2 = 0;
            }
            else {
                lVar2 = (ulonglong)**(uint **)(lVar2 + 8) * 0xc0 + *(longlong *)(lVar3 + 0xe8);
            }
            fVar4 = (float)FUN_1405a9d80(lVar2);
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)(fVar4 * 86400.0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1406a5e70(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = FUN_140056ab0(param_1,1);
    if (lVar3 != 0) {
        lVar4 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338),
                              *(undefined4 *)(*(longlong *)(lVar3 + 8) + 4));
        if (((lVar4 != 0) &&
             ((ulonglong)**(uint **)(lVar3 + 8) <
              (ulonglong)(*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3))) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0xf8) + (ulonglong)**(uint **)(lVar3 + 8) * 8),
                    lVar3 != 0)) {
            iVar1 = *(int *)(lVar3 + 0x38);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1406a6ba0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.HousingPlot");
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar3 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if ((((lVar3 != 0) &&
              ((ulonglong)**(uint **)(lVar2 + 8) <
               (ulonglong)(*(longlong *)(lVar3 + 0x100) - *(longlong *)(lVar3 + 0xf8) >> 3))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0xf8) + (ulonglong)**(uint **)(lVar2 + 8) * 8) != 0))
            && (((lVar2 = FUN_140206c60(), lVar2 != 0 && (*(int *)(lVar2 + 0x5c) != 0)) &&
                 ((lVar2 = FUN_140206c60(), lVar2 != 0 &&
                                            (iVar1 = FUN_1406a6c80(param_1,lVar2,0,1), iVar1 != 0)))))) {
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406a6c80(longlong param_1,uint *param_2,longlong param_3,int param_4)

{
    undefined4 uVar1;
    uint *puVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    uint uVar6;
    undefined4 uVar7;
    uint uVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    undefined4 *puVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    short *psVar16;
    longlong lVar17;
    ulonglong *puVar18;
    longlong lVar19;
    double dVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    int local_118;
    int local_110;
    int iStack268;
    undefined **local_108;
    int local_100;
    undefined4 uStack252;
    longlong local_f8;
    undefined4 local_f0;
    longlong local_e8;
    uint *local_e0;
    uint *local_d8;
    undefined **local_d0;
    undefined4 local_c8;
    longlong local_c0;
    undefined4 local_b8;
    undefined **local_b0;
    undefined4 local_a8;
    longlong local_a0;
    undefined4 local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined4 local_58;

    if (((*(byte *)(param_2 + 8) & 2) != 0) && (param_4 == 0)) {
        return 0;
    }
    if ((((param_2[0x1e] == 0) || (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar3 != 0)) ||
         (param_4 != 0)) ||
        (((param_2[0x35] != 0 && (lVar9 = FUN_14044fb30(), lVar9 != 0)) &&
          ((*(int *)(lVar9 + 0xc) != 0 || (*(int *)(lVar9 + 0x18) != 0)))))) {
        FUN_14034bdd0();
        FUN_14034bdd0();
        local_b8 = 1;
        local_d0 = &PTR_FUN_140b569f0;
        local_c0 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        uVar13 = (ulonglong)*param_2;
        local_c8 = uVar4;
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar15,&DAT_140b35bb8,uVar13 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        FUN_1406a8160(param_1,&local_d0);
        local_90 = &PTR_FUN_140b569f0;
        local_78 = 1;
        local_80 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_88 = FUN_1400578c0(param_1);
        puVar18 = (ulonglong *)(param_2 + 0x2a);
        lVar9 = 5;
        do {
            uVar13 = *puVar18;
            if (((uVar13 != 0) && (uVar13 <= DAT_140c3fe70)) &&
                ((psVar16 = (short *)(DAT_140c3fe68 + uVar13), psVar16 != (short *)0x0 && (*psVar16 != 0)))
                    ) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                uVar10 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar10;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                *puVar15 = *puVar11;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0870(param_1,puVar15,L"strSprite",psVar16);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1400fb1d0(&local_90);
                FUN_1400579e0(param_1);
            }
            puVar18 = puVar18 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_c8);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_108,L"tScreenshots");
        lVar17 = -1;
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar19 = -1;
            do {
                lVar19 = lVar19 + 1;
            } while (*(char *)(lVar9 + lVar19) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar9,lVar19);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar10;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (CONCAT44(uStack252,local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252,local_100),0);
        }
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_88);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = *(longlong *)(param_1 + 0x10);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        uVar8 = param_2[8];
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_108,L"bIsUnique");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar19 = -1;
            do {
                lVar19 = lVar19 + 1;
            } while (*(char *)(lVar9 + lVar19) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar9,lVar19);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar10;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (CONCAT44(uStack252,local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252,local_100),0);
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)((uVar8 & 4) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        uVar8 = param_2[8];
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_108,L"bIsUniqueHarvest");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar19 = -1;
            do {
                lVar19 = lVar19 + 1;
            } while (*(char *)(lVar9 + lVar19) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar9,lVar19);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar10;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (CONCAT44(uStack252,local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252,local_100),0);
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)((uVar8 & 8) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        uVar8 = param_2[8];
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_108,L"bIsUniqueGarden");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar19 = -1;
            do {
                lVar19 = lVar19 + 1;
            } while (*(char *)(lVar9 + lVar19) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar9,lVar19);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar10;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (CONCAT44(uStack252,local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252,local_100),0);
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)((uVar8 & 0x20) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        uVar8 = param_2[8];
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_108,L"bIsRotatable");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar19 = -1;
            do {
                lVar19 = lVar19 + 1;
            } while (*(char *)(lVar9 + lVar19) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar9,lVar19);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar10;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (CONCAT44(uStack252,local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252,local_100),0);
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)((uVar8 & 0x10) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_c8);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_108,L"tFlags");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *)(lVar9 + lVar17) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar9,lVar17);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar10;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (CONCAT44(uStack252,local_100) != 0) {
            FUN_14018b900(CONCAT44(uStack252,local_100),0);
        }
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = *(longlong *)(param_1 + 0x10);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        uVar7 = 1;
        uVar4 = 1;
        local_118 = 0;
        local_58 = 1;
        local_70 = &PTR_FUN_140b569f0;
        local_60 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_68 = FUN_1400578c0(param_1);
        uVar21 = 0;
        uVar22 = 0;
        local_d8 = param_2 + 0x12;
        local_e8 = 5;
        local_e0 = local_d8;
        do {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e00 == 0) && (iVar3 = FUN_140204c40(), -1 < iVar3)) {
                    lVar9 = (**(code **)(*DAT_140c64c88 + 0x18))();
                    goto LAB_1406a779b;
                }
            }
            else {
                lVar9 = (*DAT_140c63840)(&PTR_u_HousingContributionInfo_140a6a7f8,*local_d8,DAT_140c63858);
                LAB_1406a779b:
                if (lVar9 != 0) {
                    uVar8 = *(uint *)(lVar9 + 8);
                    if ((param_2[0x20] == 5) && (*(uint *)(lVar9 + 0x20) != 0)) {
                        uVar8 = uVar8 / *(uint *)(lVar9 + 0x20);
                    }
                    local_108 = &PTR_FUN_140b569f0;
                    local_f0 = 1;
                    local_f8 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar15 = *(undefined8 **)(param_1 + 0x10);
                    uVar10 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar15 + 1) = 5;
                    *puVar15 = uVar10;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    iVar3 = FUN_1400578c0(param_1);
                    uVar1 = *(undefined4 *)(lVar9 + 4);
                    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
                    if (iVar3 - 1U < *(uint *)(lVar17 + 0x38)) {
                        puVar15 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar17 + 0x18));
                    }
                    else {
                        dVar20 = (double)iVar3;
                        if (dVar20 == (double)CONCAT44(uVar22,uVar21)) {
                            puVar15 = *(undefined8 **)(lVar17 + 0x20);
                        }
                        else {
                            iStack268 = (int)((ulonglong)dVar20 >> 0x20);
                            local_110 = SUB84(dVar20,0);
                            puVar15 = (undefined8 *)
                                    (*(longlong *)(lVar17 + 0x20) +
                                     ((longlong)(ulonglong)(uint)(iStack268 + local_110) %
                                      (longlong)((1 << (*(byte *)(lVar17 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                        }
                        do {
                            if ((*(int *)(puVar15 + 3) == 3) && (dVar20 == (double)puVar15[2]))
                                goto LAB_1406a78ad;
                            puVar15 = (undefined8 *)puVar15[4];
                        } while (puVar15 != (undefined8 *)0x0);
                        puVar15 = &DAT_140a12138;
                    }
                    LAB_1406a78ad:
                    puVar11 = *(undefined8 **)(param_1 + 0x10);
                    *puVar11 = *puVar15;
                    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar15 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    local_100 = iVar3;
                    FUN_1400f06f0(param_1,puVar15,L"eType",uVar1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    FUN_14034bdd0();
                    puVar11 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar3);
                    puVar15 = *(undefined8 **)(param_1 + 0x10);
                    *puVar15 = *puVar11;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f0870(param_1,puVar15,L"strName");
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(param_1 + 0x10);
                    puVar11 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                    *puVar15 = *puVar11;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    iVar5 = *(int *)(lVar9 + 4);
                    if (iVar5 == 2) {
                        puVar12 = (undefined4 *)FUN_1400b5df0(DAT_140c658f0);
                        if (puVar12 != (undefined4 *)0x0) {
                            if (local_118 == 0) {
                                local_118 = puVar12[0x58];
                            }
                            iVar5 = FUN_140415c70(param_1,puVar12);
                            if (iVar5 != 0) {
                                FUN_1400fb540(&local_108,L"itemCostReq");
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            }
                            uVar6 = FUN_1406a4ea0(*puVar12);
                            puVar11 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar3);
                            puVar15 = *(undefined8 **)(param_1 + 0x10);
                            *puVar15 = *puVar11;
                            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_1400f06f0(param_1,puVar15,L"nAvailableCount",uVar6);
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            if (uVar6 < uVar8) {
                                uVar7 = 0;
                                uVar4 = 0;
                            }
                            goto LAB_1406a7aa1;
                        }
                    }
                    else {
                        if (iVar5 == 1) {
                            if (*(ulonglong *)(DAT_140c65898 + 0x15f8) < (ulonglong)uVar8) {
                                uVar4 = 0;
                                uVar7 = 0;
                            }
                        }
                        else if (iVar5 == 3) {
                            if (*(ulonglong *)(DAT_140c65898 + 0x1600) < (ulonglong)uVar8) {
                                uVar7 = 0;
                                uVar4 = 0;
                            }
                        }
                        else if (iVar5 == 4) {
                            uVar13 = 0;
                            if (DAT_140c7de20 != 0) {
                                uVar14 = uVar13;
                                if (DAT_140c7de20 == 0) goto LAB_1406a7a89;
                                do {
                                    uVar14 = *(ulonglong *)(DAT_140c7de18 + uVar13 * 8);
                                    LAB_1406a7a89:
                                    if ((*(int *)(uVar14 + 0x10) == 3) &&
                                        (uVar4 = uVar7, *(uint *)(uVar14 + 0x1f8) < uVar8)) {
                                        uVar4 = 0;
                                        uVar7 = 0;
                                    }
                                    uVar13 = uVar13 + 1;
                                } while (uVar13 < DAT_140c7de20);
                            }
                        }
                        LAB_1406a7aa1:
                        FUN_1400fb1d0(&local_70);
                    }
                    FUN_1400579e0(param_1);
                }
            }
            local_d8 = local_d8 + 1;
            local_e8 = local_e8 + -1;
        } while (local_e8 != 0);
        FUN_1400fb2a0(&local_d0,L"tCostRequirements",local_68);
        local_b0 = &PTR_FUN_140b569f0;
        local_98 = 1;
        local_a0 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_a8 = FUN_1400578c0();
        local_e8 = 5;
        do {
            lVar9 = FUN_140204ea0();
            if (lVar9 != 0) {
                local_108 = &PTR_FUN_140b569f0;
                local_f0 = 1;
                local_f8 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                uVar10 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar10;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                iVar5 = FUN_1400578c0(param_1);
                uVar13 = (ulonglong)*(uint *)(lVar9 + 4);
                local_100 = iVar5;
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar5);
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                *puVar15 = *puVar11;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1,puVar15,L"eType",uVar13 & 0xffffffff);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_14034bdd0();
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar5);
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                *puVar15 = *puVar11;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0870(param_1,puVar15,L"strName");
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0))
                        ;
                *puVar15 = *puVar11;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0();
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                iVar3 = *(int *)(lVar9 + 4);
                if (iVar3 == 2) {
                    puVar12 = (undefined4 *)FUN_1400b5df0(DAT_140c658f0);
                    if (puVar12 != (undefined4 *)0x0) {
                        iVar3 = FUN_140415c70(param_1,puVar12);
                        if (iVar3 != 0) {
                            FUN_1400fb540(&local_108,L"itemRepairReq");
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        }
                        uVar7 = FUN_1406a4ea0(*puVar12);
                        puVar11 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar5);
                        puVar15 = *(undefined8 **)(param_1 + 0x10);
                        *puVar15 = *puVar11;
                        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1,puVar15,L"nAvailableCount",uVar7);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        goto LAB_1406a7e02;
                    }
                }
                else {
                    if ((((iVar3 != 1) && (iVar3 != 3)) && (iVar3 == 4)) && (uVar13 = 0, DAT_140c7de20 != 0))
                    {
                        do {
                            uVar13 = uVar13 + 1;
                        } while (uVar13 < DAT_140c7de20);
                    }
                    LAB_1406a7e02:
                    FUN_1400fb1d0(&local_b0);
                }
                FUN_1400579e0();
            }
            local_e0 = local_e0 + 1;
            local_e8 = local_e8 + -1;
        } while (local_e8 != 0);
        FUN_1400fb2a0(&local_d0,L"tRepairRequirements",local_a8);
        local_108 = &PTR_FUN_140b569f0;
        local_f0 = 1;
        local_f8 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_100 = FUN_1400578c0(param_1);
        param_2 = param_2 + 0x18;
        lVar9 = 3;
        do {
            uVar8 = param_2[3];
            if ((uVar8 != 0) && (lVar17 = FUN_1402259c0(uVar8), lVar17 != 0)) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                uVar10 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar15 + 1) = 5;
                *puVar15 = uVar10;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar7 = FUN_1400578c0(param_1);
                uVar8 = (**(code **)(*DAT_140c659a0 + 0x18))
                        (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),uVar8,0,0,0);
                uVar13 = (ulonglong)uVar8;
                if (uVar8 == 0) {
                    uVar4 = 0;
                }
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                *puVar15 = *puVar11;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0630(param_1,puVar15,L"bPrerequisiteMet",uVar13 & 0xffffffff);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_14034bdd0();
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
                puVar15 = *(undefined8 **)(param_1 + 0x10);
                *puVar15 = *puVar11;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0870(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1400fb1d0(&local_108);
                FUN_1400579e0();
            }
            param_2 = param_2 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        FUN_1400fb2a0(&local_d0,L"tPrerequisites",local_100);
        uVar7 = local_c8;
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_c8);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0630(param_1,puVar15,L"bAreCostRequirementsMet",uVar4);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar7);
        *puVar15 = *puVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0630(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        if (param_3 == 0) {
            puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
            *puVar15 = *puVar11;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            FUN_1400fb1d0(param_3,uVar7);
        }
        if (local_f8 != 0) {
            FUN_1400579e0();
        }
        if (local_a0 != 0) {
            FUN_1400579e0();
        }
        if (local_60 != 0) {
            FUN_1400579e0();
        }
        FUN_1400579e0(param_1);
        if (local_80 != 0) {
            FUN_1400579e0();
        }
        FUN_1400579e0(param_1);
        uVar10 = 1;
    }
    else {
        uVar10 = 0;
    }
    return uVar10;
}



// WARNING: Removing unreachable block (ram,0x0001406a8ad9)
// WARNING: Removing unreachable block (ram,0x0001406a89a0)
// WARNING: Removing unreachable block (ram,0x0001406a8a3c)
// WARNING: Removing unreachable block (ram,0x0001406a8e7f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406a8160(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    double *pdVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong *plVar10;
    undefined8 *puVar11;
    uint uVar12;
    ulonglong uVar13;
    longlong lVar14;
    int *piVar15;
    longlong lVar16;
    int iVar17;
    ulonglong uVar18;
    double dVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    int local_78;
    int iStack116;
    undefined local_70 [8];
    longlong local_68;

    uVar18 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64a48 != 0) {
            return 0;
        }
        iVar4 = FUN_140207f40();
        if (iVar4 < 0) {
            return 0;
        }
        uVar3 = (**(code **)(*DAT_140c64a00 + 0x28))();
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_HousingWarplotPlugInfo_140a6aa98,DAT_140c63858);
    }
    uVar13 = uVar18;
    if (uVar3 == 0) {
        return 0;
    }
    while( true ) {
        if (DAT_140c63848 == (code *)0x0) {
            uVar7 = uVar18;
            if (_DAT_140c64a48 == 0) {
                iVar4 = FUN_140207f40();
                if (iVar4 < 0) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = (**(code **)(*DAT_140c64a00 + 0x20))(DAT_140c64a00,uVar13);
                }
            }
        }
        else {
            uVar7 = (*DAT_140c63848)(&PTR_u_HousingWarplotPlugInfo_140a6aa98,uVar13,DAT_140c63858);
        }
        if (*(int *)(uVar7 + 4) == param_4) break;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        if (uVar3 <= uVar12) {
            return 0;
        }
    }
    if (param_2 == 0) {
        lVar14 = FUN_14018f0e0(local_70,L"tWarplotPlugInfo");
        lVar14 = *(longlong *)(lVar14 + 8);
        if (lVar14 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar14 + lVar16) != '\0');
            FUN_140058710(param_1,lVar14,lVar16);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar4 = *(int *)(uVar7 + 8);
        FUN_140058710(param_1,"nMaintenanceCost",0x10);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        FUN_140058710(param_1,"tUpgradeCost",0xc);
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar4 = FUN_1400578c0();
        piVar15 = (int *)(uVar7 + 0xc);
        uVar13 = uVar18;
        do {
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)((int)uVar13 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            iVar17 = *piVar15;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar17;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar14 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            lVar14 = *(longlong *)(param_1 + 0x10);
            uVar13 = uVar13 + 1;
            piVar15 = piVar15 + 1;
        } while (uVar13 < 3);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_140062650(param_1,"tSpell4IdAbility",0x10);
        *(undefined4 *)(puVar11 + 1) = 4;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        piVar15 = (int *)(uVar7 + 0x18);
        do {
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)((int)uVar18 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            iVar17 = *piVar15;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar17;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar14 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            lVar14 = *(longlong *)(param_1 + 0x10);
            uVar18 = uVar18 + 1;
            piVar15 = piVar15 + 1;
        } while (uVar18 < 3);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        lVar14 = *(longlong *)(param_1 + 0x10);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        if (iVar4 < 0) {
            return 1;
        }
        plVar10 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar11 = *(undefined8 **)(*plVar10 + 0x20);
        do {
            if ((*(int *)(puVar11 + 3) == 3) && ((double)puVar11[2] == 0.0)) goto LAB_1406a8ead;
            puVar11 = (undefined8 *)puVar11[4];
        } while (puVar11 != (undefined8 *)0x0);
        puVar11 = &DAT_140a12138;
        LAB_1406a8ead:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar11;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,iVar4);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar4;
    }
    else {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar4 = FUN_1400578c0(param_1);
        uVar18 = (ulonglong)*(uint *)(uVar7 + 8);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar4);
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        *puVar11 = *puVar9;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar11,L"nMaintenanceCost",uVar18 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar5 = FUN_1400578c0();
        uVar20 = 0;
        uVar21 = 0;
        piVar15 = (int *)(uVar7 + 0xc);
        lVar14 = 3;
        iVar17 = 1;
        do {
            iVar6 = *piVar15;
            lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar16 + 0x38)) {
                puVar11 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar16 + 0x18));
            }
            else {
                dVar19 = (double)iVar5;
                if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar11 = *(undefined8 **)(lVar16 + 0x20);
                }
                else {
                    iStack116 = (int)((ulonglong)dVar19 >> 0x20);
                    local_78 = SUB84(dVar19,0);
                    puVar11 = (undefined8 *)
                            (*(longlong *)(lVar16 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack116 + local_78) %
                              (longlong)((1 << (*(byte *)(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar11 + 3) == 3) && (dVar19 == (double)puVar11[2])) goto LAB_1406a83c1;
                    puVar11 = (undefined8 *)puVar11[4];
                } while (puVar11 != (undefined8 *)0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_1406a83c1:
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            *puVar9 = *puVar11;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar17;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar6;
            lVar16 = *(longlong *)(param_1 + 0x10);
            *(longlong *)(param_1 + 0x10) = lVar16 + 0x10;
            FUN_14005ea50(param_1,lVar16 + -0x20,lVar16 + -0x10,lVar16);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            piVar15 = piVar15 + 1;
            lVar14 = lVar14 + -1;
            iVar17 = iVar17 + 1;
        } while (lVar14 != 0);
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar4 - 1U < *(uint *)(lVar14 + 0x38)) {
            puVar11 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
        }
        else {
            dVar19 = (double)iVar4;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar11 = *(undefined8 **)(lVar14 + 0x20);
            }
            else {
                iStack116 = (int)((ulonglong)dVar19 >> 0x20);
                local_78 = SUB84(dVar19,0);
                puVar11 = (undefined8 *)
                        (*(longlong *)(lVar14 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack116 + local_78) %
                          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar11 + 3) == 3) && (dVar19 == (double)puVar11[2])) goto LAB_1406a84ca;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
        }
        LAB_1406a84ca:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar11;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar14 = FUN_14018f0e0(local_70,L"tUpgradeCost");
        lVar14 = *(longlong *)(lVar14 + 8);
        if (lVar14 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar16 = -1;
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar14 + lVar16) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar11 = *(undefined8 **)(param_1 + 0x10);
            uVar8 = FUN_140062650(param_1,lVar14,lVar16);
            *(undefined4 *)(puVar11 + 1) = 4;
            *puVar11 = uVar8;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar5 - 1U < *(uint *)(lVar14 + 0x38)) {
            puVar11 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
        }
        else {
            dVar19 = (double)iVar5;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar11 = *(undefined8 **)(lVar14 + 0x20);
            }
            else {
                iStack116 = (int)((ulonglong)dVar19 >> 0x20);
                local_78 = SUB84(dVar19,0);
                puVar11 = (undefined8 *)
                        (*(longlong *)(lVar14 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack116 + local_78) %
                          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar11 + 3) == 3) && (dVar19 == (double)puVar11[2])) goto LAB_1406a85e9;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
        }
        LAB_1406a85e9:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar11;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        lVar14 = *(longlong *)(param_1 + 0x10);
        *(longlong *)(param_1 + 0x10) = lVar14 + 0x10;
        FUN_14005ea50(param_1,lVar14 + -0x20,lVar14 + -0x10,lVar14);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar8 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar6 = FUN_1400578c0(param_1);
        piVar15 = (int *)(uVar7 + 0x18);
        lVar14 = 3;
        iVar17 = 1;
        do {
            iVar1 = *piVar15;
            lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar6 - 1U < *(uint *)(lVar16 + 0x38)) {
                puVar11 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar16 + 0x18));
            }
            else {
                dVar19 = (double)iVar6;
                if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar11 = *(undefined8 **)(lVar16 + 0x20);
                }
                else {
                    iStack116 = (int)((ulonglong)dVar19 >> 0x20);
                    local_78 = SUB84(dVar19,0);
                    puVar11 = (undefined8 *)
                            (*(longlong *)(lVar16 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack116 + local_78) %
                              (longlong)((1 << (*(byte *)(lVar16 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar11 + 3) == 3) && (dVar19 == (double)puVar11[2])) goto LAB_1406a8709;
                    puVar11 = (undefined8 *)puVar11[4];
                } while (puVar11 != (undefined8 *)0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_1406a8709:
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            *puVar9 = *puVar11;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar17;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            lVar16 = *(longlong *)(param_1 + 0x10);
            *(longlong *)(param_1 + 0x10) = lVar16 + 0x10;
            FUN_14005ea50(param_1,lVar16 + -0x20,lVar16 + -0x10,lVar16);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            piVar15 = piVar15 + 1;
            lVar14 = lVar14 + -1;
            iVar17 = iVar17 + 1;
        } while (lVar14 != 0);
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar4 - 1U < *(uint *)(lVar14 + 0x38)) {
            puVar11 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
        }
        else {
            dVar19 = (double)iVar4;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar11 = *(undefined8 **)(lVar14 + 0x20);
            }
            else {
                iStack116 = (int)((ulonglong)dVar19 >> 0x20);
                local_78 = SUB84(dVar19,0);
                puVar11 = (undefined8 *)
                        (*(longlong *)(lVar14 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack116 + local_78) %
                          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar11 + 3) == 3) && (dVar19 == (double)puVar11[2])) goto LAB_1406a8819;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
        }
        LAB_1406a8819:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar11;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar14 = FUN_14018f0e0(local_70,L"tSpell4IdAbility");
        lVar16 = -1;
        lVar14 = *(longlong *)(lVar14 + 8);
        if (lVar14 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar14 + lVar16) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar11 = *(undefined8 **)(param_1 + 0x10);
            uVar8 = FUN_140062650(param_1,lVar14,lVar16);
            *(undefined4 *)(puVar11 + 1) = 4;
            *puVar11 = uVar8;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar6 - 1U < *(uint *)(lVar14 + 0x38)) {
            puVar11 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
        }
        else {
            dVar19 = (double)iVar6;
            if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                puVar11 = *(undefined8 **)(lVar14 + 0x20);
            }
            else {
                iStack116 = (int)((ulonglong)dVar19 >> 0x20);
                local_78 = SUB84(dVar19,0);
                puVar11 = (undefined8 *)
                        (*(longlong *)(lVar14 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStack116 + local_78) %
                          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar11 + 3) == 3) && (dVar19 == (double)puVar11[2])) goto LAB_1406a8939;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
        }
        LAB_1406a8939:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar11;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        lVar14 = *(longlong *)(param_1 + 0x10);
        *(longlong *)(param_1 + 0x10) = lVar14 + 0x10;
        FUN_14005ea50(param_1,lVar14 + -0x20,lVar14 + -0x10,lVar14);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        FUN_1400fb2a0(param_2,L"tWarplotPlugInfo",iVar4);
        if (-1 < iVar6) {
            plVar10 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
            puVar11 = *(undefined8 **)(*plVar10 + 0x20);
            do {
                if ((*(int *)(puVar11 + 3) == 3) && ((double)CONCAT44(uVar21,uVar20) == (double)puVar11[2]))
                    goto LAB_1406a89c9;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
            LAB_1406a89c9:
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            *puVar9 = *puVar11;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058b30(param_1,0xffffd8f0,iVar6);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058b30(param_1,0xffffd8f0,0);
        }
        if (-1 < iVar5) {
            plVar10 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
            puVar11 = *(undefined8 **)(*plVar10 + 0x20);
            do {
                if ((*(int *)(puVar11 + 3) == 3) && ((double)CONCAT44(uVar21,uVar20) == (double)puVar11[2]))
                    goto LAB_1406a8a69;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
            LAB_1406a8a69:
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            *puVar9 = *puVar11;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058b30(param_1,0xffffd8f0,iVar5);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058b30(param_1,0xffffd8f0,0);
        }
        if (iVar4 < 0) {
            return 1;
        }
        plVar10 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar11 = *(undefined8 **)(*plVar10 + 0x20);
        do {
            if ((*(int *)(puVar11 + 3) == 3) && ((double)CONCAT44(uVar21,uVar20) == (double)puVar11[2]))
                goto LAB_1406a8b00;
            puVar11 = (undefined8 *)puVar11[4];
        } while (puVar11 != (undefined8 *)0x0);
        puVar11 = &DAT_140a12138;
        LAB_1406a8b00:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar11;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,iVar4);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar4;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058b30(param_1,0xffffd8f0,0);
    return 1;
}



undefined8 FUN_1406a8fb0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1406a8ff3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.Residence",0xe);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_1406a90d7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a8ff3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a90d7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a90f0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



undefined8 FUN_1406a9170(undefined4 param_1)

{
    switch(param_1) {
        case 2:
        case 0xf:
        case 0x12:
        case 0x14:
        case 0x19:
        case 0x1c:
        case 0x1f:
        case 0x22:
        case 0x25:
        case 0x28:
        case 0x2b:
        case 0x2e:
        case 0x31:
        case 0x34:
        case 0x3b:
        case 0x3e:
            return 2;
        case 3:
            return 7;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xd:
        case 0x10:
        case 0x13:
        case 0x17:
        case 0x1a:
        case 0x1d:
        case 0x20:
        case 0x23:
        case 0x26:
        case 0x29:
        case 0x2c:
        case 0x2f:
        case 0x32:
        case 0x39:
        case 0x3c:
            return 1;
        default:
            return 5;
        case 0xe:
        case 0x11:
        case 0x15:
        case 0x18:
        case 0x1b:
        case 0x1e:
        case 0x21:
        case 0x24:
        case 0x27:
        case 0x2a:
        case 0x2d:
        case 0x30:
        case 0x33:
        case 0x3a:
        case 0x3d:
            return 3;
        case 0x16:
            return 9;
        case 0x35:
            return 6;
        case 0x36:
            return 10;
    }
}



undefined8 FUN_1406a9230(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.Residence");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5d930;
    puVar6 = PTR_DAT_140c5d930;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"Residence",&PTR_DAT_140b70070);
    return 1;
}



longlong FUN_1406a93c0(undefined8 param_1)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = FUN_140056ab0(param_1,1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        if (DAT_140c7dfc0 != DAT_140c7dfc8) {
            plVar2 = DAT_140c7dfc0;
            do {
                if (*(int *)(*plVar2 + 0xbc) == *(int *)(*(longlong *)(lVar1 + 8) + 8)) {
                    return *plVar2;
                }
                plVar2 = plVar2 + 1;
            } while (plVar2 != DAT_140c7dfc8);
        }
    }
    return 0;
}



undefined8 FUN_1406a9430(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406a93c0();
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = *(longlong *)(DAT_140c635f0 + 0x16a0);
    pdVar2 = *(double **)(param_1 + 0x10);
    lVar3 = *(longlong *)(lVar3 + 0x20);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)((lVar3 != lVar1) + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a94a0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    byte bVar3;
    byte bVar4;
    longlong lVar5;

    lVar5 = FUN_1406a93c0();
    bVar4 = 0;
    if (lVar5 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        bVar3 = 1;
        if ((((DAT_140c7dfd8 != lVar5) && (bVar3 = bVar4, *(int *)(lVar5 + 0x30) == 5)) &&
             (lVar5 = FUN_1405845f0(), lVar5 != 0)) &&
            ((((ulonglong)(longlong)*(int *)(lVar5 + 0x304) < 10 &&
               (lVar5 = lVar5 + ((longlong)*(int *)(lVar5 + 0x304) * 5 + 3) * 8, lVar5 != 0)) &&
              (bVar3 = 0, (*(uint *)(lVar5 + 8) & 0x10000000) != 0)))) {
            bVar3 = 1;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)bVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a9550(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_1406a93c0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0x38));
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



undefined8 FUN_1406a95e0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_1406a93c0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_1405b04e0(lVar1);
    lVar1 = FUN_14018f0e0(local_28,uVar2);
    if (*(longlong *)(lVar1 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406a9670(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        uVar6 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar5 = uVar6;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                    param_1) {
                    uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                    break;
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        lVar1 = *(longlong *)(uVar6 + 400);
        lVar2 = FUN_14018f0e0(local_48,0);
        uVar4 = *(undefined8 *)(lVar2 + 8);
        puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x18))) {
            uVar4 = FUN_140056bb0(lVar1,2);
        }
        FUN_14018f2d0(local_28,uVar4);
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        FUN_1404b6d00();
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return 0;
}



undefined8 FUN_1406a9770(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1406a93c0();
    if (lVar2 == 0) {
        iVar3 = 0;
    }
    else {
        iVar3 = *(int *)(lVar2 + 0x110);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a97c0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_1406a93c0();
    if (lVar4 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((DAT_140c7dfe0 == 0) || (bVar3 = 1, lVar4 != DAT_140c7dfe0)) {
        bVar3 = 0;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a9830(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    uint *puVar3;
    longlong lVar4;

    lVar4 = FUN_1406a93c0();
    if (lVar4 == 0) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 0x30);
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 == 5);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a9d00(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    double *pdVar3;
    int iVar4;

    lVar1 = FUN_1406a93c0();
    if (lVar1 == 0) {
        pdVar3 = *(double **)(param_1 + 0x10);
        *pdVar3 = 0.0;
    }
    else {
        if ((DAT_140c65b98 == 0) || (*(int *)(DAT_140c65b98 + 0x10c) != 4)) {
            plVar2 = (longlong *)FUN_1404bc9b0();
            iVar4 = 0;
            for (lVar1 = *plVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
                iVar4 = iVar4 + 1;
            }
        }
        else {
            iVar4 = *(int *)(DAT_140c65b98 + 0x198);
        }
        pdVar3 = *(double **)(param_1 + 0x10);
        *pdVar3 = (double)iVar4;
    }
    *(undefined4 *)(pdVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a9d90(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    double *pdVar3;
    int iVar4;

    lVar1 = FUN_1406a93c0();
    if (lVar1 == 0) {
        pdVar3 = *(double **)(param_1 + 0x10);
        *pdVar3 = 0.0;
    }
    else {
        if ((DAT_140c65b98 == 0) || (*(int *)(DAT_140c65b98 + 0x10c) != 4)) {
            plVar2 = (longlong *)FUN_1404bca30();
            iVar4 = 0;
            for (lVar1 = *plVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x38)) {
                iVar4 = iVar4 + 1;
            }
        }
        else {
            iVar4 = *(int *)(DAT_140c65b98 + 0x198);
        }
        pdVar3 = *(double **)(param_1 + 0x10);
        *pdVar3 = (double)iVar4;
    }
    *(undefined4 *)(pdVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406a9e20(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((DAT_140dc4b14 & 1) == 0) {
        DAT_140dc4b14 = DAT_140dc4b14 | 1;
    }
    else if (_DAT_140dc4b1c != 0) goto LAB_1406a9ea5;
    _DAT_140dc4b1c = 1;
    lVar4 = FUN_140200220(0x49a);
    if (lVar4 == 0) {
        DAT_140dc4b18 = 0;
    }
    else {
        DAT_140dc4b18 = *(int *)(lVar4 + 4);
    }
    LAB_1406a9ea5:
    iVar5 = DAT_140dc4b18;
    if (DAT_140c65898 != 0) {
        iVar3 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1f);
        iVar5 = iVar5 + iVar3;
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1406a9f10(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_1406a93c0();
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x7258) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 7)) {
        if ((DAT_140dc4b20 & 1) == 0) {
            DAT_140dc4b20 = DAT_140dc4b20 | 1;
        }
        else {
            iVar4 = DAT_140dc4b28;
            if (_DAT_140dc4b2c != 0) goto LAB_1406aa08f;
        }
        _DAT_140dc4b2c = 1;
        lVar3 = FUN_140200220(0x40b);
        if (lVar3 == 0) {
            DAT_140dc4b28 = 0;
            iVar4 = 0;
        }
        else {
            DAT_140dc4b28 = *(int *)(lVar3 + 8);
            iVar4 = DAT_140dc4b28;
        }
        goto LAB_1406aa08f;
    }
    if (*(int *)(lVar3 + 0x30) == 5) {
        if ((DAT_140dc4b20 & 2) == 0) {
            DAT_140dc4b20 = DAT_140dc4b20 | 2;
        }
        else {
            iVar4 = DAT_140dc4b30;
            if (_DAT_140dc4b34 != 0) goto LAB_1406aa08f;
        }
        _DAT_140dc4b34 = 1;
        lVar3 = FUN_140200220(0x449);
        if (lVar3 == 0) {
            DAT_140dc4b30 = 0;
            iVar4 = 0;
        }
        else {
            DAT_140dc4b30 = *(int *)(lVar3 + 8);
            iVar4 = DAT_140dc4b30;
        }
        goto LAB_1406aa08f;
    }
    if ((DAT_140dc4b20 & 4) == 0) {
        DAT_140dc4b20 = DAT_140dc4b20 | 4;
        LAB_1406aa034:
        _DAT_140dc4b3c = 1;
        lVar3 = FUN_140200220(0x449);
        if (lVar3 == 0) {
            DAT_140dc4b38 = 0;
        }
        else {
            DAT_140dc4b38 = *(int *)(lVar3 + 4);
        }
    }
    else if (_DAT_140dc4b3c == 0) goto LAB_1406aa034;
    iVar4 = DAT_140dc4b38;
    if (DAT_140c65898 != 0) {
        iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1f);
        iVar4 = iVar4 + iVar2;
    }
    LAB_1406aa08f:
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406aa0c0(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    longlong local_res10;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 3;
        goto LAB_1406aa1ef;
    }
    if ((DAT_140dc4b40 & 1) == 0) {
        DAT_140dc4b40 = DAT_140dc4b40 | 1;
        LAB_1406aa116:
        _DAT_140dc4b4c = 1;
        lVar5 = FUN_140200220(0x49a);
        if (lVar5 == 0) {
            DAT_140dc4b48 = 0;
        }
        else {
            DAT_140dc4b48 = *(int *)(lVar5 + 4);
        }
    }
    else if (_DAT_140dc4b4c == 0) goto LAB_1406aa116;
    iVar6 = DAT_140dc4b48;
    if (DAT_140c658c8 != 0) {
        lVar5 = FUN_140436d70(DAT_140c658c8,*(undefined4 *)(DAT_140c658c8 + 4));
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar4 = lVar5;
        lVar1 = *(longlong *)(lVar5 + 8);
        while (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x20) < 0x1f) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar4 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        local_res10 = lVar5;
        if (((lVar4 != lVar5) && (*(int *)(lVar4 + 0x20) < 0x20)) &&
            ((*(int *)(lVar4 + 0x20) < 0x1f || (*(int *)(lVar4 + 0x24) == 0)))) {
            local_res10 = lVar4;
        }
        iVar7 = 0;
        if ((local_res10 != lVar5) && (iVar7 = 0, *(int *)(local_res10 + 0x30) == 1)) {
            iVar7 = *(int *)(local_res10 + 0x34);
        }
        iVar6 = iVar6 + iVar7;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar6;
    LAB_1406aa1ef:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406aa210(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    longlong local_res10;

    lVar4 = FUN_1406a93c0();
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        goto LAB_1406aa40d;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x7258) == 0) ||
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) != 7)) {
        if (*(int *)(lVar4 + 0x30) == 5) {
            if ((DAT_140dc4b50 & 2) == 0) {
                DAT_140dc4b50 = DAT_140dc4b50 | 2;
            }
            else {
                iVar6 = DAT_140dc4b60;
                if (_DAT_140dc4b64 != 0) goto LAB_1406aa3fa;
            }
            _DAT_140dc4b64 = 1;
            lVar4 = FUN_140200220(0x449);
            if (lVar4 == 0) {
                DAT_140dc4b60 = 0;
                iVar6 = 0;
            }
            else {
                DAT_140dc4b60 = *(int *)(lVar4 + 8);
                iVar6 = DAT_140dc4b60;
            }
        }
        else {
            if ((DAT_140dc4b50 & 4) == 0) {
                DAT_140dc4b50 = DAT_140dc4b50 | 4;
                LAB_1406aa347:
                _DAT_140dc4b6c = 1;
                lVar4 = FUN_140200220(0x449);
                if (lVar4 == 0) {
                    DAT_140dc4b68 = 0;
                }
                else {
                    DAT_140dc4b68 = *(int *)(lVar4 + 4);
                }
            }
            else if (_DAT_140dc4b6c == 0) goto LAB_1406aa347;
            iVar6 = DAT_140dc4b68;
            if (DAT_140c658c8 != 0) {
                lVar4 = FUN_140436d70(DAT_140c658c8,*(undefined4 *)(DAT_140c658c8 + 4));
                lVar4 = *(longlong *)(lVar4 + 8);
                lVar3 = lVar4;
                lVar1 = *(longlong *)(lVar4 + 8);
                while (lVar1 != 0) {
                    if (*(int *)(lVar1 + 0x20) < 0x1f) {
                        lVar1 = *(longlong *)(lVar1 + 0x18);
                    }
                    else {
                        lVar3 = lVar1;
                        lVar1 = *(longlong *)(lVar1 + 0x10);
                    }
                }
                local_res10 = lVar4;
                if (((lVar3 != lVar4) && (*(int *)(lVar3 + 0x20) < 0x20)) &&
                    ((*(int *)(lVar3 + 0x20) < 0x1f || (*(int *)(lVar3 + 0x24) == 0)))) {
                    local_res10 = lVar3;
                }
                iVar5 = 0;
                if ((local_res10 != lVar4) && (iVar5 = 0, *(int *)(local_res10 + 0x30) == 1)) {
                    iVar5 = *(int *)(local_res10 + 0x34);
                }
                iVar6 = iVar6 + iVar5;
            }
        }
    }
    else {
        if ((DAT_140dc4b50 & 1) == 0) {
            DAT_140dc4b50 = DAT_140dc4b50 | 1;
        }
        else {
            iVar6 = DAT_140dc4b58;
            if (_DAT_140dc4b5c != 0) goto LAB_1406aa3fa;
        }
        _DAT_140dc4b5c = 1;
        lVar4 = FUN_140200220(0x40b);
        if (lVar4 == 0) {
            DAT_140dc4b58 = 0;
            iVar6 = 0;
        }
        else {
            DAT_140dc4b58 = *(int *)(lVar4 + 8);
            iVar6 = DAT_140dc4b58;
        }
    }
    LAB_1406aa3fa:
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar6;
    LAB_1406aa40d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_1406aa430(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406a93c0();
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((DAT_140c65b98 == 0) || (*(int *)(DAT_140c65b98 + 0x10c) != 4)) {
        iVar1 = *(int *)(lVar3 + 0x1b8);
    }
    else {
        iVar1 = *(int *)(DAT_140c65b98 + 0x194);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406aa4b0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;

    lVar8 = FUN_1406a93c0();
    if (lVar8 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else if ((DAT_140c65b98 == 0) || (*(int *)(DAT_140c65b98 + 0x10c) != 4)) {
        iVar3 = FUN_1405ad1b0(lVar8,5);
        iVar4 = FUN_1405ad1b0(lVar8,10);
        iVar5 = FUN_1405ad1b0(lVar8,9);
        iVar6 = FUN_1405ad1b0(lVar8,7);
        iVar7 = FUN_1405ad1b0(lVar8,6);
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(lVar8 + 0x1b8);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)(iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7);
    }
    else {
        iVar1 = *(int *)(DAT_140c65b98 + 0x194);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406aa5a0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;

    lVar3 = FUN_1406a93c0();
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if ((DAT_140dc4b70 & 1) == 0) {
            DAT_140dc4b70 = DAT_140dc4b70 | 1;
            DAT_140dc4b7c = 0;
        }
        if ((DAT_140dc4b70 & 2) == 0) {
            DAT_140dc4b70 = DAT_140dc4b70 | 2;
            _DAT_140dc4b84 = 0;
        }
        if ((DAT_140dc4b70 & 4) == 0) {
            DAT_140dc4b70 = DAT_140dc4b70 | 4;
            _DAT_140dc4b8c = 0;
        }
        if (DAT_140dc4b7c == 0) {
            DAT_140dc4b7c = 1;
            lVar4 = FUN_140200220(0x40b);
            if (lVar4 == 0) {
                DAT_140dc4b78 = 0;
            }
            else {
                DAT_140dc4b78 = *(int *)(lVar4 + 4);
            }
        }
        iVar5 = DAT_140dc4b78;
        if (DAT_140c65898 != 0) {
            iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1f);
            iVar5 = iVar5 + iVar2 * 2;
        }
        if ((DAT_140c7dfe0 != 0) && (iVar5 = DAT_140dc4b80, _DAT_140dc4b84 == 0)) {
            _DAT_140dc4b84 = 1;
            lVar4 = FUN_140200220(0x40b);
            if (lVar4 == 0) {
                DAT_140dc4b80 = 0;
                iVar5 = 0;
            }
            else {
                DAT_140dc4b80 = *(int *)(lVar4 + 8);
                iVar5 = DAT_140dc4b80;
            }
        }
        if ((*(int *)(lVar3 + 0x30) == 5) && (iVar5 = DAT_140dc4b88, _DAT_140dc4b8c == 0)) {
            _DAT_140dc4b8c = 1;
            lVar3 = FUN_140200220(0x40b);
            if (lVar3 == 0) {
                DAT_140dc4b88 = 0;
                iVar5 = 0;
            }
            else {
                DAT_140dc4b88 = *(int *)(lVar3 + 0xc);
                iVar5 = DAT_140dc4b88;
            }
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406aa740(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar3 = FUN_1406a93c0();
    uVar5 = 0;
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
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
        FUN_1400f26a0(uVar5 + 0x180,2);
        FUN_140205fa0(*(undefined4 *)(lVar3 + 0xb8));
        iVar2 = FUN_1404ca000();
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar2;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406aa880(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar4 = FUN_1400f26a0(uVar7 + 0x180,2);
    lVar5 = FUN_1402041e0(uVar4);
    if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 4);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_1406aa960(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar6 = 0;
    uVar5 = uVar6;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar5 + 0x180,2);
    FUN_1400f26a0(uVar5 + 0x180,3);
    lVar2 = FUN_1404c9e20();
    if (lVar2 != 0) {
        uVar6 = (ulonglong)*(uint *)(lVar2 + 0x1f0);
    }
    uVar3 = FUN_1406ae160(param_1,uVar6);
    return uVar3;
}



undefined8 FUN_1406aaa90(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar6 = 0;
    uVar5 = uVar6;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar5 + 0x180,2);
    lVar2 = FUN_1404c9b90();
    if (lVar2 != 0) {
        uVar6 = (ulonglong)*(uint *)(lVar2 + 0x1f0);
    }
    uVar3 = FUN_1406ae160(param_1,uVar6);
    return uVar3;
}



undefined8 FUN_1406aab60(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        plVar1 = *(longlong **)(DAT_140c659f8 + 200);
        if (plVar1 != (longlong *)0x0) {
            lVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
            if (lVar3 != 0) {
                lVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
                uVar4 = FUN_1406ae160(param_1,*(undefined4 *)(lVar3 + 0x1f0));
                return uVar4;
            }
        }
        return 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406ab000(longlong param_1,int param_2,undefined8 param_3,short **param_4)

{
    short *psVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    double *pdVar6;
    bool bVar7;
    int iVar8;
    undefined4 uVar9;
    longlong lVar10;
    undefined *puVar11;
    undefined *puVar12;
    uint *puVar13;
    short *psVar14;
    undefined8 uVar15;
    undefined *puVar16;
    undefined *puVar17;
    undefined **ppuVar18;
    undefined *puVar19;
    ulonglong uVar20;
    undefined8 *puVar21;
    undefined8 *puVar22;
    undefined8 *puVar23;
    short sVar24;
    undefined *puVar25;
    longlong lVar26;
    uint local_128;
    undefined4 local_124;
    undefined local_120 [8];
    undefined *local_118;
    longlong local_110;
    undefined *local_100;
    undefined *local_f8;
    undefined **local_f0;
    undefined4 local_e8;
    longlong local_e0;
    undefined4 local_d8;
    undefined local_d0 [8];
    longlong local_c8;
    undefined local_b0 [8];
    undefined *local_a8;
    undefined8 local_a0;
    undefined local_90 [8];
    longlong local_88;
    undefined8 *local_80;
    undefined8 *local_78;
    undefined *local_70;
    undefined *local_68;
    undefined *local_60;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    lVar10 = FUN_1406a93c0();
    puVar23 = (undefined8 *)0x0;
    if (lVar10 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        psVar14 = *param_4;
        if (psVar14 != (short *)0x0) {
            (**(code **)(*(longlong *)(psVar14 + -8) + 8))(psVar14 + -8);
        }
        return 1;
    }
    local_88 = 0;
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    if (*(longlong *)(lVar10 + 0x1b8) == 0) {
        psVar14 = *param_4;
        if (psVar14 != (short *)0x0) {
            (**(code **)(*(longlong *)(psVar14 + -8) + 8))(psVar14 + -8);
        }
    }
    else {
        local_80 = (undefined8 *)0x0;
        puVar21 = puVar23;
        puVar22 = puVar23;
        if (*(longlong *)(lVar10 + 0x1c0) != 0) {
            do {
                lVar26 = *(longlong *)(*(longlong *)(lVar10 + 0x1c8) + (longlong)puVar22 * 8);
                while (lVar26 != 0) {
                    lVar3 = *(longlong *)(lVar26 + 8);
                    puVar4 = *(undefined8 **)(lVar26 + 0x18);
                    lVar26 = lVar3;
                    if (puVar4 != (undefined8 *)0x0) {
                        if (puVar21 == puVar23) {
                            FUN_1400b4c50(local_90);
                            puVar23 = local_78;
                            puVar21 = local_80;
                        }
                        else {
                            if (puVar21 != (undefined8 *)0x0) {
                                *puVar21 = *puVar4;
                                puVar21[1] = puVar4[1];
                            }
                            local_80 = puVar21 + 2;
                            puVar21 = local_80;
                        }
                    }
                }
                puVar22 = (undefined8 *)((longlong)puVar22 + 1);
            } while (puVar22 < *(undefined8 **)(lVar10 + 0x1c0));
        }
        lVar10 = local_88;
        local_a8 = (undefined *)FUN_14018b280(0x28);
        local_a0 = 0;
        *local_a8 = 0;
        *(undefined8 *)(local_a8 + 8) = 0;
        *(undefined **)(local_a8 + 0x10) = local_a8;
        *(undefined **)(local_a8 + 0x18) = local_a8;
        local_118 = (undefined *)FUN_14018b280(0x38);
        local_110 = 0;
        *local_118 = 0;
        *(undefined8 *)(local_118 + 8) = 0;
        *(undefined **)(local_118 + 0x10) = local_118;
        uVar20 = (longlong)puVar21 - lVar10 >> 4;
        *(undefined **)(local_118 + 0x18) = local_118;
        if ((int)uVar20 != 0) {
            puVar23 = (undefined8 *)(lVar10 + 8);
            uVar20 = uVar20 & 0xffffffff;
            do {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c646a8 == 0) && (iVar8 = FUN_140203b40(), -1 < iVar8)) {
                        lVar10 = (**(code **)(*DAT_140c65008 + 0x18))();
                        goto LAB_1406ab1ed;
                    }
                }
                else {
                    lVar10 = (*DAT_140c63840)();
                    LAB_1406ab1ed:
                    if ((lVar10 != 0) && (*(int *)(lVar10 + 8) == param_2)) {
                        uVar2 = *(uint *)puVar23;
                        uVar15 = puVar23[-1];
                        uVar5 = *puVar23;
                        local_f0 = (undefined **)((ulonglong)local_f0 & 0xffffffff00000000 | (ulonglong)uVar2);
                        puVar11 = *(undefined **)(local_118 + 8);
                        puVar25 = local_118;
                        if (*(undefined **)(local_118 + 8) == (undefined *)0x0) {
                            LAB_1406ab27c:
                            lVar10 = FUN_14018b280(0x38);
                            if ((ulonglong *)(lVar10 + 0x20) != (ulonglong *)0x0) {
                                *(ulonglong *)(lVar10 + 0x20) = (ulonglong)local_f0;
                                *(undefined8 *)(lVar10 + 0x28) = uVar15;
                                *(undefined8 *)(lVar10 + 0x30) = uVar5;
                            }
                            *(longlong *)(puVar25 + 0x10) = lVar10;
                            if (puVar25 == local_118) {
                                *(longlong *)(local_118 + 8) = lVar10;
                                *(longlong *)(local_118 + 0x18) = lVar10;
                            }
                            else if (puVar25 == *(undefined **)(local_118 + 0x10)) {
                                *(longlong *)(local_118 + 0x10) = lVar10;
                            }
                        }
                        else {
                            do {
                                puVar25 = puVar11;
                                if (uVar2 < *(uint *)(puVar25 + 0x20)) {
                                    puVar11 = *(undefined **)(puVar25 + 0x10);
                                }
                                else {
                                    puVar11 = *(undefined **)(puVar25 + 0x18);
                                }
                            } while (puVar11 != (undefined *)0x0);
                            if ((puVar25 == local_118) || (uVar2 < *(uint *)(puVar25 + 0x20))) goto LAB_1406ab27c;
                            lVar10 = FUN_14018b280(0x38,0);
                            if ((ulonglong *)(lVar10 + 0x20) != (ulonglong *)0x0) {
                                *(ulonglong *)(lVar10 + 0x20) = (ulonglong)local_f0;
                                *(undefined8 *)(lVar10 + 0x28) = uVar15;
                                *(undefined8 *)(lVar10 + 0x30) = uVar5;
                            }
                            *(longlong *)(puVar25 + 0x18) = lVar10;
                            if (puVar25 == *(undefined **)(local_118 + 0x18)) {
                                *(longlong *)(local_118 + 0x18) = lVar10;
                            }
                        }
                        *(undefined **)(lVar10 + 8) = puVar25;
                        *(undefined8 *)(lVar10 + 0x10) = 0;
                        *(undefined8 *)(lVar10 + 0x18) = 0;
                        FUN_1400081c0(lVar10,local_118 + 8);
                        local_110 = local_110 + 1;
                        puVar11 = *(undefined **)(local_a8 + 8);
                        if (puVar11 == (undefined *)0x0) {
                            LAB_1406ab32d:
                            local_68 = local_a8;
                            ppuVar18 = &local_68;
                        }
                        else {
                            puVar25 = puVar11;
                            puVar16 = local_a8;
                            do {
                                if (*(uint *)(puVar25 + 0x20) < *(uint *)puVar23) {
                                    puVar12 = *(undefined **)(puVar25 + 0x18);
                                }
                                else {
                                    puVar12 = *(undefined **)(puVar25 + 0x10);
                                    puVar16 = puVar25;
                                }
                                puVar25 = puVar12;
                            } while (puVar12 != (undefined *)0x0);
                            if ((puVar16 == local_a8) || (*(uint *)puVar23 < *(uint *)(puVar16 + 0x20)))
                                goto LAB_1406ab32d;
                            local_60 = puVar16;
                            ppuVar18 = &local_60;
                        }
                        if (*ppuVar18 == local_118) {
                            puVar25 = local_a8;
                            if (puVar11 != (undefined *)0x0) {
                                do {
                                    if (*(uint *)(puVar11 + 0x20) < *(uint *)puVar23) {
                                        puVar16 = *(undefined **)(puVar11 + 0x18);
                                    }
                                    else {
                                        puVar16 = *(undefined **)(puVar11 + 0x10);
                                        puVar25 = puVar11;
                                    }
                                    puVar11 = puVar16;
                                } while (puVar16 != (undefined *)0x0);
                            }
                            if ((puVar25 == local_a8) || (*(uint *)puVar23 < *(uint *)(puVar25 + 0x20))) {
                                local_128 = *(uint *)puVar23;
                                local_124 = 0;
                                local_f8 = puVar25;
                                FUN_140032b30(local_b0);
                                puVar25 = local_100;
                            }
                            *(undefined4 *)(puVar25 + 0x24) = 1;
                        }
                        else {
                            puVar25 = local_a8;
                            if (puVar11 != (undefined *)0x0) {
                                do {
                                    if (*(uint *)(puVar11 + 0x20) < *(uint *)puVar23) {
                                        puVar16 = *(undefined **)(puVar11 + 0x18);
                                    }
                                    else {
                                        puVar16 = *(undefined **)(puVar11 + 0x10);
                                        puVar25 = puVar11;
                                    }
                                    puVar11 = puVar16;
                                } while (puVar16 != (undefined *)0x0);
                            }
                            if ((puVar25 == local_a8) || (*(uint *)puVar23 < *(uint *)(puVar25 + 0x20))) {
                                local_f8 = puVar25;
                                FUN_140032b30(local_b0);
                                puVar25 = local_70;
                            }
                            *(int *)(puVar25 + 0x24) = *(int *)(puVar25 + 0x24) + 1;
                        }
                    }
                }
                puVar23 = puVar23 + 2;
                uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
        }
        lVar10 = 0;
        psVar14 = *param_4;
        if (psVar14 == (short *)&DAT_1409f6764) {
            LAB_1406ab457:
            bVar7 = false;
        }
        else {
            if ((psVar14 != (short *)0x0) && (sVar24 = *psVar14, sVar24 == 0)) {
                do {
                    if (sVar24 == 0) goto LAB_1406ab457;
                    sVar24 = psVar14[lVar10 + 1];
                    psVar1 = &DAT_1409f6766 + lVar10;
                    lVar10 = lVar10 + 1;
                } while (sVar24 == *psVar1);
            }
            bVar7 = true;
        }
        puVar11 = *(undefined **)(local_a8 + 0x10);
        if (puVar11 != local_a8) {
            do {
                puVar23 = (undefined8 *)0x0;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c646a8 == 0) && (iVar8 = FUN_140203b40(), -1 < iVar8)) {
                        puVar13 = (uint *)(**(code **)(*DAT_140c65008 + 0x18))();
                        goto LAB_1406ab4bc;
                    }
                    LAB_1406ac008:
                    FUN_140008410(local_120);
                    FUN_14018b900(local_118,0);
                    FUN_140008410(local_b0);
                    FUN_14018b900(local_a8,0);
                    if (local_88 != 0) {
                        FUN_14018b900(local_88,0);
                    }
                    psVar14 = *param_4;
                    goto LAB_1406ac08d;
                }
                puVar13 = (uint *)(*DAT_140c63840)(&PTR_u_HousingDecorInfo_140a6a718,
                                                   *(undefined4 *)(puVar11 + 0x20),DAT_140c63858);
                LAB_1406ab4bc:
                if (puVar13 == (uint *)0x0) goto LAB_1406ac008;
                psVar14 = (short *)FUN_14034bdd0();
                if (psVar14 != (short *)0x0) {
                    sVar24 = *psVar14;
                    puVar21 = puVar23;
                    while (sVar24 != 0) {
                        puVar21 = (undefined8 *)((longlong)puVar21 + 1);
                        sVar24 = psVar14[(longlong)puVar21];
                    }
                    puVar22 = (undefined8 *)FUN_14018b280((longlong)puVar21 * 2 + 0x12,0);
                    if (puVar22 != (undefined8 *)0x0) {
                        puVar22[1] = puVar21;
                        *puVar22 = &PTR_LAB_140b55060;
                        puVar23 = puVar22;
                    }
                    puVar23 = puVar23 + 2;
                    FUN_1407db590(puVar23,psVar14,(longlong)puVar21 * 2);
                    *(undefined2 *)((longlong)puVar23 + (longlong)puVar21 * 2) = 0;
                }
                puVar25 = (undefined *)0x0;
                if (bVar7) {
                    psVar14 = *param_4;
                    uVar20 = *(ulonglong *)(psVar14 + -4);
                    if (uVar20 <= (ulonglong)puVar23[-1]) {
                        local_100 = (undefined *)(puVar23[-1] - uVar20);
                        puVar21 = puVar23;
                        do {
                            iVar8 = FUN_14018e3e0(puVar21,psVar14,uVar20);
                            if ((iVar8 == 0) && (psVar14[uVar20] == 0)) goto LAB_1406ab597;
                            puVar25 = puVar25 + 1;
                            puVar21 = (undefined8 *)((longlong)puVar21 + 2);
                        } while (puVar25 <= local_100);
                    }
                }
                else {
                    LAB_1406ab597:
                    local_f0 = &PTR_FUN_140b569f0;
                    local_d8 = 1;
                    local_e0 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    uVar15 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar21 + 1) = 5;
                    *puVar21 = uVar15;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar9 = FUN_1400578c0(param_1);
                    uVar2 = *puVar13;
                    local_e8 = uVar9;
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,&DAT_140b364b0);
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                        uVar9 = local_e8;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)uVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    iVar8 = *(int *)(puVar11 + 0x24);
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,L"nCount");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                        uVar9 = local_e8;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)iVar8;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    uVar2 = puVar13[6];
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,L"nCost");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                        uVar9 = local_e8;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)uVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    uVar2 = puVar13[5];
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,L"nHookAssetId");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                        uVar9 = local_e8;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)uVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    uVar2 = puVar13[4];
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,L"nFlags");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                        uVar9 = local_e8;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)uVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f0870(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    iVar8 = FUN_1406a9170(puVar13[2]);
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,L"eHookType");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                        uVar9 = local_e8;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)iVar8;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar21 = *(undefined8 **)(param_1 + 0x10);
                    uVar2 = puVar13[1];
                    puVar22 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                    *puVar21 = *puVar22;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_d0,L"eDecorType");
                    lVar10 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar26 = -1;
                        do {
                            lVar26 = lVar26 + 1;
                        } while (*(char *)(lVar10 + lVar26) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_140062650(param_1,lVar10,lVar26);
                        *(undefined4 *)(puVar21 + 1) = 4;
                        *puVar21 = uVar15;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (local_c8 != 0) {
                        FUN_14018b900(local_c8,0);
                    }
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar6 + 1) = 3;
                    *pdVar6 = (double)uVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar15 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar15,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    lVar10 = FUN_1403acd90(DAT_140c65b70,puVar13[10]);
                    if (lVar10 != 0) {
                        local_128 = puVar13[10];
                        iVar8 = FUN_1403d3470(param_1,&local_128);
                        if (iVar8 != 0) {
                            FUN_1400fb540(&local_f0,L"splBuff");
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        }
                    }
                    local_40 = 1;
                    local_58 = &PTR_FUN_140b569f0;
                    local_48 = param_1;
                    FUN_140058900(param_1);
                    local_50 = FUN_1400578c0(param_1);
                    puVar25 = *(undefined **)(local_118 + 8);
                    puVar16 = local_118;
                    lVar10 = param_1;
                    puVar12 = local_118;
                    if (puVar25 != (undefined *)0x0) {
                        puVar17 = puVar25;
                        do {
                            if (*puVar13 < *(uint *)(puVar17 + 0x20)) {
                                puVar19 = *(undefined **)(puVar17 + 0x10);
                                puVar12 = puVar17;
                            }
                            else {
                                puVar19 = *(undefined **)(puVar17 + 0x18);
                            }
                            puVar17 = puVar19;
                        } while (puVar19 != (undefined *)0x0);
                        if (puVar25 != (undefined *)0x0) {
                            do {
                                if (*(uint *)(puVar25 + 0x20) < *puVar13) {
                                    puVar17 = *(undefined **)(puVar25 + 0x18);
                                }
                                else {
                                    puVar17 = *(undefined **)(puVar25 + 0x10);
                                    puVar16 = puVar25;
                                }
                                puVar25 = puVar17;
                            } while (puVar17 != (undefined *)0x0);
                        }
                    }
                    while (puVar16 != puVar12) {
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        uVar15 = FUN_14005c1b0(param_1,0,0);
                        *(undefined4 *)(puVar21 + 1) = 5;
                        *puVar21 = uVar15;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        uVar9 = FUN_1400578c0(param_1);
                        uVar20 = (ulonglong)*(uint *)(puVar16 + 0x28);
                        puVar22 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar9);
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        *puVar21 = *puVar22;
                        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1,puVar21,L"nDecorId",uVar20 & 0xffffffff);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        puVar22 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                        *puVar21 = *puVar22;
                        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        puVar21 = *(undefined8 **)(param_1 + 0x10);
                        puVar22 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                        *puVar21 = *puVar22;
                        *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar22 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        FUN_1400fb1d0(&local_58);
                        FUN_1400579e0(param_1);
                        puVar25 = *(undefined **)(puVar16 + 0x18);
                        lVar10 = local_48;
                        if (puVar25 == (undefined *)0x0) {
                            puVar25 = *(undefined **)(puVar16 + 8);
                            if (puVar16 == *(undefined **)(puVar25 + 0x18)) {
                                do {
                                    puVar16 = puVar25;
                                    puVar25 = *(undefined **)(puVar16 + 8);
                                } while (puVar16 == *(undefined **)(puVar25 + 0x18));
                            }
                            if (*(undefined **)(puVar16 + 0x18) != puVar25) {
                                puVar16 = puVar25;
                            }
                        }
                        else {
                            for (puVar17 = *(undefined **)(puVar25 + 0x10); puVar16 = puVar25,
                                    puVar17 != (undefined *)0x0; puVar17 = *(undefined **)(puVar17 + 0x10)) {
                                puVar25 = puVar17;
                            }
                        }
                    }
                    FUN_1400fb2a0(&local_f0);
                    FUN_1400fb1d0(param_3);
                    if (lVar10 != 0) {
                        FUN_1400579e0(lVar10);
                    }
                    FUN_1400579e0(param_1);
                }
                if (puVar23 != (undefined8 *)0x0) {
                    (**(code **)(puVar23[-2] + 8))(puVar23 + -2);
                }
                puVar25 = *(undefined **)(puVar11 + 0x18);
                if (puVar25 == (undefined *)0x0) {
                    puVar25 = *(undefined **)(puVar11 + 8);
                    if (puVar11 == *(undefined **)(puVar25 + 0x18)) {
                        do {
                            puVar11 = puVar25;
                            puVar25 = *(undefined **)(puVar11 + 8);
                        } while (puVar11 == *(undefined **)(puVar25 + 0x18));
                    }
                    if (*(undefined **)(puVar11 + 0x18) != puVar25) {
                        puVar11 = puVar25;
                    }
                }
                else {
                    for (puVar16 = *(undefined **)(puVar25 + 0x10); puVar11 = puVar25,
                            puVar16 != (undefined *)0x0; puVar16 = *(undefined **)(puVar16 + 0x10)) {
                        puVar25 = puVar16;
                    }
                }
            } while (puVar11 != local_a8);
        }
        FUN_140008410(local_120);
        FUN_14018b900(local_118,0);
        FUN_140008410(local_b0);
        FUN_14018b900(local_a8,0);
        if (local_88 != 0) {
            FUN_14018b900(local_88,0);
        }
        psVar14 = *param_4;
        LAB_1406ac08d:
        if (psVar14 != (short *)0x0) {
            (**(code **)(*(longlong *)(psVar14 + -8) + 8))(psVar14 + -8);
        }
    }
    return 1;
}



undefined8 FUN_1406ac5e0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        uVar3 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar2 = uVar3;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                    param_1) {
                    uVar3 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8);
                    break;
                }
                uVar2 = (ulonglong)((int)uVar2 + 1);
            } while (uVar2 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        lVar1 = uVar3 + 0x180;
        FUN_1400f26a0(lVar1,2);
        FUN_1400f26a0(lVar1,3);
        FUN_1400f26a0(lVar1,4);
        FUN_1400f26a0(lVar1,5);
        FUN_1400f26a0(lVar1,6);
        FUN_1400f26a0(lVar1,7);
        FUN_1400f26a0(lVar1,8);
        FUN_1404b77d0();
    }
    return 0;
}



undefined8 FUN_1406ac8a0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    lVar8 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
        uVar10 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar9 = uVar10;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                    param_1) {
                    uVar10 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                    break;
                }
                uVar9 = (ulonglong)((int)uVar9 + 1);
            } while (uVar9 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        lVar8 = uVar10 + 0x180;
        uVar1 = FUN_1400f26a0(lVar8,2);
        uVar2 = FUN_1400f26a0(lVar8,3);
        uVar3 = FUN_1400f26a0(lVar8,4);
        uVar4 = FUN_1400f26a0(lVar8,5);
        uVar5 = FUN_1400f26a0(lVar8,6);
        uVar6 = FUN_1400f26a0(lVar8,7);
        uVar7 = FUN_1400f26a0(lVar8,8);
        lVar8 = FUN_1405b1510(&DAT_140c7dfb0);
        if (lVar8 != 0) {
            FUN_1405aa950(lVar8,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
        }
    }
    return 0;
}



void FUN_1406aca10(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    undefined auStack104 [32];
    ulonglong local_48;
    ulonglong local_40;
    ulonglong local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    lVar8 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
        uVar11 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar9 = uVar11;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                    param_1) {
                    uVar11 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                    break;
                }
                uVar9 = (ulonglong)((int)uVar9 + 1);
            } while (uVar9 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        lVar8 = uVar11 + 0x180;
        uVar1 = FUN_1400f26a0(lVar8,2);
        uVar2 = FUN_1400f26a0(lVar8,3);
        uVar3 = FUN_1400f26a0(lVar8,4);
        uVar4 = FUN_1400f26a0(lVar8,5);
        uVar5 = FUN_1400f26a0(lVar8,6);
        uVar6 = FUN_1400f26a0(lVar8,7);
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        lVar8 = FUN_140207d60(uVar1);
        uVar10 = 0;
        if ((uVar1 != 0) && (lVar8 != 0)) {
            uVar7 = uVar10;
            if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
                uVar7 = uVar1;
            }
            local_48 = local_48 & 0xffffffff00000000 | (ulonglong)uVar7;
        }
        lVar8 = FUN_140207d60(uVar2);
        if ((uVar2 != 0) && (lVar8 != 0)) {
            uVar1 = uVar10;
            if ((*(byte *)(lVar8 + 0x18) & 4) != 0) {
                uVar1 = uVar2;
            }
            local_48 = local_48 & 0xffffffff | (ulonglong)uVar1 << 0x20;
        }
        lVar8 = FUN_140207d60(uVar3);
        if ((uVar3 != 0) && (lVar8 != 0)) {
            uVar1 = uVar10;
            if ((*(byte *)(lVar8 + 0x18) & 8) != 0) {
                uVar1 = uVar3;
            }
            local_40 = local_40 & 0xffffffff00000000 | (ulonglong)uVar1;
        }
        lVar8 = FUN_140207d60(uVar4);
        if ((uVar4 != 0) && (lVar8 != 0)) {
            uVar1 = uVar10;
            if ((*(byte *)(lVar8 + 0x18) & 0x10) != 0) {
                uVar1 = uVar4;
            }
            local_40 = local_40 & 0xffffffff | (ulonglong)uVar1 << 0x20;
        }
        lVar8 = FUN_140207d60(uVar5);
        if ((uVar5 != 0) && (lVar8 != 0)) {
            uVar1 = uVar10;
            if ((*(byte *)(lVar8 + 0x18) & 0x20) != 0) {
                uVar1 = uVar5;
            }
            local_38 = local_38 & 0xffffffff00000000 | (ulonglong)uVar1;
        }
        lVar8 = FUN_140207d60(uVar6);
        if ((uVar6 != 0) && (lVar8 != 0)) {
            if ((*(byte *)(lVar8 + 0x18) & 0x80) != 0) {
                uVar10 = uVar6;
            }
            local_38 = local_38 & 0xffffffff | (ulonglong)uVar10 << 0x20;
        }
        FUN_1404b79d0();
    }
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack104);
    return;
}



undefined8 FUN_1406acc30(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        uVar4 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar3 = uVar4;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                    param_1) {
                    uVar4 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                    break;
                }
                uVar3 = (ulonglong)((int)uVar3 + 1);
            } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        iVar1 = FUN_1400f26a0(uVar4 + 0x180,2);
        if (iVar1 - 1U < 6) {
            FUN_1404b7bc0(iVar1 - 1U,iVar1);
        }
    }
    return 0;
}



undefined8 FUN_1406accd0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
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
        iVar1 = FUN_1400f26a0(uVar5 + 0x180,2);
        iVar2 = FUN_1400f26a0(uVar5 + 0x180,3);
        if (((longlong)iVar2 << 0x20 | (longlong)iVar1) != 0) {
            FUN_1404b97b0();
        }
    }
    return 0;
}



undefined8 FUN_1406acda0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        uVar6 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar5 = uVar6;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                    param_1) {
                    uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                    break;
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        FUN_1400f26a0(uVar6 + 0x180,2);
        FUN_1400f26a0(uVar6 + 0x180,3);
        iVar3 = FUN_1404b9ae0();
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar3 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406acea0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
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
        iVar1 = FUN_1400f26a0(uVar5 + 0x180,2);
        iVar2 = FUN_1400f26a0(uVar5 + 0x180,3);
        if (((longlong)iVar2 << 0x20 | (longlong)iVar1) != 0) {
            FUN_1404b9ca0();
        }
    }
    return 0;
}



undefined8 FUN_1406acf70(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406a93c0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0xc0);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406acfd0(void)

{
    uint uVar1;
    longlong lVar2;

    lVar2 = FUN_1406a93c0();
    if (lVar2 != 0) {
        uVar1 = FUN_1400f26a0(*(longlong *)(DAT_140c65898 + 0x7340) + 0x180,2);
        if (uVar1 < 5) {
            FUN_1405ad310(lVar2,uVar1);
        }
    }
    return 0;
}



undefined8 FUN_1406ad020(longlong param_1)

{
    uint uVar1;
    double *pdVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        uVar1 = *(uint *)(DAT_140c65898 + 0x7518);
        if ((uVar1 & 2) == 0) {
            if ((uVar1 & 4) == 0) {
                iVar4 = 0;
                if ((uVar1 & 1) != 0) {
                    iVar4 = 3;
                }
            }
            else {
                iVar4 = 2;
            }
        }
        else {
            iVar4 = 1;
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ad0b0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    int local_res10 [6];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if (lVar2 == 0) {
        return 0;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) != 3) {
        if ((*(int *)(pdVar4 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10), iVar1 == 0)) {
            local_res10[0] = 0;
            goto LAB_1406ad12c;
        }
        local_10 = 3;
        pdVar4 = &local_18;
    }
    local_res10[0] = (int)*pdVar4;
    LAB_1406ad12c:
    FUN_1403f4900(DAT_140c65898,0xc9,local_res10);
    return 0;
}



undefined8 FUN_1406ad160(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double *pdVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    pdVar5 = (double *)0x0;
    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
        pdVar4 = (double *)&DAT_140a12138;
        if (pdVar3 < *(double **)(param_1 + 0x10)) {
            pdVar4 = pdVar3;
        }
        if (*(int *)(pdVar4 + 1) != 3) {
            if (*(int *)(pdVar4 + 1) != 4) {
                LAB_1406ad1e9:
                FUN_1404b78d0();
                return 0;
            }
            pdVar5 = local_res10;
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,pdVar5);
            if (iVar1 == 0) goto LAB_1406ad1e9;
            local_10 = 3;
            pdVar4 = &local_18;
            local_18 = local_res10[0];
        }
        FUN_1404b78d0(pdVar4,(ulonglong)pdVar5 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4);
    }
    return 0;
}



undefined8 FUN_1406ad200(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1406a93c0();
    iVar3 = 0;
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (lVar2 != -8) {
        iVar3 = *(int *)(lVar2 + 0x68);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ad260(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double *pdVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    pdVar5 = (double *)0x0;
    lVar2 = FUN_140056ab0(param_1,1,"Game.Residence");
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) != 3) {
        if (*(int *)(pdVar4 + 1) == 4) {
            pdVar5 = local_res10;
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,pdVar5);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1406ad2d8;
            }
        }
        FUN_1404b7950();
        return 1;
    }
    LAB_1406ad2d8:
    FUN_1404b7950(pdVar4,(ulonglong)pdVar5 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4);
    return 1;
}



undefined8 FUN_1406ad310(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1406a93c0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (lVar2 == -8) {
        iVar3 = 0;
    }
    else {
        iVar3 = *(int *)(lVar2 + 0x6c);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ad370(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    uint uVar4;

    lVar3 = FUN_1406a93c0();
    uVar4 = 0;
    if (lVar3 != 0) {
        if (lVar3 != -8) {
            uVar4 = *(uint *)(lVar3 + 100) & 1;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(uVar4 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ad3e0(longlong param_1)

{
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    lVar2 = FUN_1406a93c0();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
            puVar4 = puVar3;
        }
        if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
            bVar1 = false;
        }
        else {
            bVar1 = true;
        }
        if (bVar1) {
            uVar5 = *(uint *)(lVar2 + 100) | 1;
        }
        else {
            uVar5 = *(uint *)(lVar2 + 100) & 0xfffffffe;
        }
        lVar2 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar2 != 0) {
            local_28 = *(undefined8 *)(lVar2 + 8);
            local_20 = *(undefined8 *)(lVar2 + 0x10);
            local_18 = CONCAT44(*(undefined4 *)(lVar2 + 0x68),uVar5);
            local_10 = (ulonglong)*(uint *)(lVar2 + 0x6c);
            FUN_1403f4900(DAT_140c65898,0x50e,&local_28);
        }
    }
    return 0;
}



undefined8 FUN_1406ad4b0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    uint uVar4;

    lVar3 = FUN_1406a93c0();
    uVar4 = 0;
    if (lVar3 != 0) {
        if (lVar3 != -8) {
            uVar4 = *(uint *)(lVar3 + 100) & 2;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(uVar4 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ad520(longlong param_1)

{
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    lVar2 = FUN_1406a93c0();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
            puVar4 = puVar3;
        }
        if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
            bVar1 = false;
        }
        else {
            bVar1 = true;
        }
        if (bVar1) {
            uVar5 = *(uint *)(lVar2 + 100) | 2;
        }
        else {
            uVar5 = *(uint *)(lVar2 + 100) & 0xfffffffd;
        }
        lVar2 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar2 != 0) {
            local_28 = *(undefined8 *)(lVar2 + 8);
            local_20 = *(undefined8 *)(lVar2 + 0x10);
            local_18 = CONCAT44(*(undefined4 *)(lVar2 + 0x68),uVar5);
            local_10 = (ulonglong)*(uint *)(lVar2 + 0x6c);
            FUN_1403f4900(DAT_140c65898,0x50e,&local_28);
        }
    }
    return 0;
}



undefined8 FUN_1406ad5f0(longlong param_1,uint *param_2,undefined8 param_3)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined4 local_res10 [2];
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    if (param_2[9] != 0) {
        uVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),param_2[9],0,0,0);
        if ((int)uVar3 == 0) {
            return uVar3;
        }
    }
    FUN_14034bdd0();
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    uVar6 = (ulonglong)*param_2;
    local_30 = uVar1;
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar7,&DAT_140b36600,uVar6 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    if (DAT_140c7dfe0 == 0) {
        puVar4 = (undefined8 *)FUN_14005c3c0(uVar3,uVar1);
        *puVar7 = *puVar4;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    }
    else {
        puVar4 = (undefined8 *)FUN_14005c3c0(uVar3,uVar1);
        *puVar7 = *puVar4;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    }
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar6 = (ulonglong)param_2[5];
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar7,L"nHookAssetId",uVar6 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    FUN_1406a9170(param_2[2]);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar7 = *puVar4;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    lVar5 = FUN_1403acd90(DAT_140c65b70,param_2[10],*(undefined8 *)(DAT_140c65898 + 0x6490));
    if (lVar5 != 0) {
        local_res10[0] = **(undefined4 **)(lVar5 + 0x70);
        iVar2 = FUN_1403d3470(param_1,local_res10);
        if (iVar2 != 0) {
            FUN_1400fb540(&local_38,L"splBuff");
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
    }
    FUN_1400fb1d0(param_3,uVar1);
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1406ad9f0(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
    uint uVar1;
    byte bVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    bool bVar9;
    longlong lVar10;
    bool bVar11;

    lVar10 = 0;
    bVar9 = false;
    lVar5 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    bVar11 = bVar9;
    if (lVar5 != 0) {
        lVar5 = FUN_1405b1510();
        lVar10 = lVar5 + 8;
        bVar9 = false;
        bVar11 = false;
        if (lVar10 != 0) {
            uVar1 = param_3[6];
            bVar2 = *(byte *)((ulonglong)((uint)param_3[9] >> 3) + 0x68 + lVar10) >>
                                                                                  ((byte)param_3[9] & 7);
            bVar9 = (bool)(bVar2 & 1);
            if ((uVar1 >> 9 & 1) == 0) {
                if ((uVar1 & 0x40) == 0) {
                    bVar11 = false;
                    if ((uVar1 >> 8 & 1) != 0) {
                        bVar11 = *(int *)(lVar5 + 0x5c) == *param_3;
                    }
                }
                else {
                    bVar11 = *(int *)(lVar5 + 0x58) == *param_3;
                }
            }
            else {
                bVar11 = *(int *)(lVar5 + 0x60) == *param_3;
            }
            if ((bVar2 & 1) != 0) goto LAB_1406adae3;
        }
    }
    if (((*(int *)(lVar10 + 0x28) == 5) &&
         (lVar5 = *(longlong *)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x28), lVar5 != 0)) &&
        (lVar5 = lVar5 + 8, lVar5 != 0)) {
        bVar9 = (bool)(*(byte *)((ulonglong)((uint)param_3[9] >> 3) + 0x68 + lVar5) >>
                                                                                    ((byte)param_3[9] & 7) & 1);
    }
    LAB_1406adae3:
    if (((((bVar9 == false) && (param_3[7] != 0)) &&
          (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar3 == 0)) &&
         (((bVar11 == false && (param_3[0xf] == 0)) ||
           ((lVar5 = FUN_14044fb30(), bVar11 == false &&
                                      ((lVar5 == 0 || ((*(int *)(lVar5 + 0xc) == 0 && (*(int *)(lVar5 + 0x18) == 0)))))))))) ||
        ((bVar11 == false &&
          ((param_3[8] != 0 &&
            (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),param_3[8],0,0,0),
                    iVar3 == 0)))))) {
        uVar6 = 0;
    }
    else {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        uVar6 = FUN_14034bdd0();
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar8,L"strName",uVar6);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
        *(undefined8 **)(param_1 + 0x10) = puVar7;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar7 = *puVar8;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        FUN_1400fb1d0(param_4,uVar4);
        FUN_1400579e0(param_1);
        uVar6 = 1;
    }
    return uVar6;
}



undefined8 FUN_1406ade90(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1406aded3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.Decor",10);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_1406adfb7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406aded3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406adfb7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406adfd0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.Decor");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_s_GetName_140c5dc40;
    puVar6 = PTR_s_GetName_140c5dc40;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"Decor",&PTR_DAT_140b70090);
    return 1;
}



undefined8 FUN_1406ae160(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = FUN_140059170();
    *(undefined4 *)(lVar1 + 8) = param_2;
    lVar2 = FUN_1404c9b90();
    if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x58);
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Decor",10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406ae210(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 8) = 0;
    }
    return 0;
}



undefined8 FUN_1406ae240(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if ((lVar1 == 0) || (DAT_140c659f0 == 0)) {
        LAB_1406ae2fc:
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6904);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406ae316:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406ae342;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 == 0) goto LAB_1406ae2fc;
        lVar1 = FUN_140203da0(*(undefined4 *)(lVar1 + 0x60));
        if (lVar1 != 0) {
            uVar2 = FUN_14034bdd0();
            lVar1 = FUN_14018f0e0(local_28,uVar2);
            if (*(longlong *)(lVar1 + 8) != 0) {
                lVar3 = -1;
                do {
                    lVar3 = lVar3 + 1;
                } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
                goto LAB_1406ae33a;
            }
            goto LAB_1406ae316;
        }
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6924);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406ae316;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    LAB_1406ae33a:
    FUN_140058710(param_1);
    LAB_1406ae342:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406ae360(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar5 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar5 + 0x10) == 0) {
            lVar5 = FUN_1404c9b90();
        }
        else {
            lVar5 = FUN_1404b6e50();
        }
        if (lVar5 != 0) {
            iVar1 = *(int *)(lVar5 + 0x58);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar3 = *(undefined8 *)(lVar5 + 0x58);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)(int)((ulonglong)uVar3 >> 0x20);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 2;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 2;
}



undefined4 FUN_1406ae430(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 8);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ae4a0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar4 = FUN_1404c9b90();
        }
        else {
            lVar4 = FUN_1404b6e50();
        }
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0x60);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ae5d0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar4 = FUN_1404c9b90();
        }
        else {
            lVar4 = FUN_1404b6e50();
        }
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0x80);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ae670(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 local_res10 [6];

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            lVar1 = FUN_140203da0(*(undefined4 *)(lVar1 + 0x60));
            if (lVar1 != 0) {
                lVar1 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar1 + 0x28),
                                      *(undefined8 *)(DAT_140c65898 + 0x6490));
                if (lVar1 != 0) {
                    local_res10[0] = **(undefined4 **)(lVar1 + 0x70);
                    uVar2 = FUN_1403d3470(param_1,local_res10);
                    return uVar2;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406af7a0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x68) != 0) {
                FUN_140649870(param_1);
                return 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406af840(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar4 = FUN_1404c9b90();
        }
        else {
            lVar4 = FUN_1404b6e50();
        }
        if (lVar4 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar4 + 0x130);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 1;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406af8d0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar4 = FUN_1404c9b90();
        }
        else {
            lVar4 = FUN_1404b6e50();
        }
        if (lVar4 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar4 + 0x28c);
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



undefined8 FUN_1406af960(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar4 = FUN_1404c9b90();
        }
        else {
            lVar4 = FUN_1404b6e50();
        }
        if (lVar4 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar4 + 0x290);
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



undefined8 FUN_1406af9f0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    longlong local_res10;

    uVar6 = 1;
    lVar2 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            plVar3 = (longlong *)FUN_1404c9b90();
        }
        else {
            plVar3 = (longlong *)FUN_1404b6e50();
        }
        if (plVar3 != (longlong *)0x0) {
            if ((*(int *)(plVar3 + 0x54) != 0) &&
                (*(int *)(plVar3 + 0x54) != *(int *)((longlong)plVar3 + 0x2a4))) {
                FUN_1403cc530(DAT_140c65898,0x67);
                return 0;
            }
            if ((*(int *)(plVar3 + 0x26) != 0) && (plVar3[0xb] == 0)) {
                puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                puVar5 = &DAT_140a12138;
                if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
                    puVar5 = puVar4;
                }
                if ((*(int *)(puVar5 + 1) == 0) || ((*(int *)(puVar5 + 1) == 1 && (*(int *)puVar5 == 0)))) {
                    uVar6 = 0;
                }
                FUN_1404b8b40(puVar5,*(undefined4 *)(plVar3 + 0x3e),uVar6);
                return 0;
            }
            FUN_1404b92a0(DAT_140c659f0,*(undefined4 *)(plVar3 + 0x3e),0,0);
            iVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3,&local_res10);
            if (-1 < iVar1) {
                for (; local_res10 != 0; local_res10 = *(longlong *)(local_res10 + 0x28)) {
                    FUN_1406b0f90(local_res10);
                }
            }
            FUN_1404b95d0(DAT_140c659f0);
        }
    }
    return 0;
}



undefined8 FUN_1406afb50(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar3 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar3 + 0x10) == 0) {
            lVar3 = FUN_1404c9b90();
        }
        else {
            lVar3 = FUN_1404b6e50();
        }
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x2a0);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406afbe0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar3 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar3 + 0x10) == 0) {
            lVar3 = FUN_1404c9b90();
        }
        else {
            lVar3 = FUN_1404b6e50();
        }
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x2a4);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406afc70(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90(param_1,*(undefined4 *)(lVar1 + 8));
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x80) != 8) {
                FUN_1404b9660(param_1,*(undefined4 *)(lVar1 + 0x1f0));
                return 0;
            }
            FUN_1404b97b0(param_1,*(undefined8 *)(lVar1 + 0x58));
        }
    }
    return 0;
}



undefined8 FUN_1406afce0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
            if (lVar1 != 0) {
                FUN_1405aaeb0(lVar1);
            }
            lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
            if (((lVar1 != 0) && (lVar1 = FUN_1405b1510(&DAT_140c7dfb0), lVar1 != 0)) &&
                (lVar1 = FUN_1404c9e20(), lVar1 != 0)) {
                FUN_1404c9520();
            }
        }
    }
    return 0;
}



undefined8 FUN_1406afda0(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            lVar2 = FUN_1404c9b90();
        }
        else {
            lVar2 = FUN_1404b6e50();
        }
        if ((lVar2 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
            lVar3 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x98))();
            lVar1 = DAT_140c659f8;
            if (lVar2 == lVar3) {
                if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
                    *(undefined8 *)(lVar1 + 200) = 0;
                }
                lVar2 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
                if (lVar2 != 0) {
                    FUN_1405afe10(lVar2);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1406afe60(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            FUN_1404b92a0(DAT_140c659f0,*(undefined4 *)(lVar1 + 0x1f0),1);
            FUN_1404b95d0(DAT_140c659f0);
        }
    }
    return 0;
}



undefined8 FUN_1406afed0(undefined8 param_1)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar3 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar3 + 0x10) == 0) {
            lVar3 = FUN_1404c9b90();
        }
        else {
            lVar3 = FUN_1404b6e50();
        }
        if (lVar3 != 0) {
            if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
                lVar4 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x98))();
                lVar5 = DAT_140c659f8;
                if (lVar3 == lVar4) {
                    if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
                        *(undefined8 *)(lVar5 + 200) = 0;
                    }
                    lVar5 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
                    if (lVar5 != 0) {
                        FUN_1405afe10(lVar5);
                    }
                }
            }
            uVar1 = *(uint *)(lVar3 + 0x1f0);
            lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
            uVar2 = uVar1 >> 0x18;
            if ((uVar2 < *(uint *)(DAT_140c659f8 + 0xd8) || uVar2 == *(uint *)(DAT_140c659f8 + 0xd8)) &&
                (lVar5 = *(longlong *)(DAT_140c659f8 + 0x70), lVar5 != 0)) {
                while (*(uint *)(lVar5 + 0x98) != uVar2) {
                    lVar5 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == 0) {
                        return 0;
                    }
                }
                if ((lVar5 != 0) && (*(int *)(lVar5 + 0x14) == *(int *)(lVar3 + 0xbc))) {
                    FUN_1404c7770(lVar5,uVar1);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b0000(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;
    undefined local_48 [16];

    lVar2 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            lVar2 = FUN_1404c9b90();
        }
        else {
            lVar2 = FUN_1404b6e50();
        }
        if (lVar2 != 0) {
            uVar5 = 0;
            if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                uVar4 = uVar5;
                do {
                    if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400)
                        == param_1) {
                        uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                        break;
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            uVar7 = 0;
            uVar8 = 0;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x18))) {
                dVar6 = (double)FUN_140056c40(lVar2,2);
            }
            else {
                dVar6 = 0.0;
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            fVar10 = (float)dVar6;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x20);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x28))) {
                dVar6 = (double)FUN_140056c40(lVar2,3);
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            fVar9 = (float)dVar6;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x30);
            dVar6 = (double)CONCAT44(uVar8,uVar7);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) &&
                 (dVar6 = (double)CONCAT44(uVar8,uVar7), puVar3 != &DAT_140a12138)) &&
                (dVar6 = (double)CONCAT44(uVar8,uVar7), 0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x38)))
            {
                dVar6 = (double)FUN_140056c40(lVar2,4);
            }
            local_48 = ZEXT1216(CONCAT48((float)dVar6,CONCAT44(fVar9,fVar10)));
            lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar2 != 0) && (plVar1 = *(longlong **)(DAT_140c659f8 + 200), plVar1 != (longlong *)0x0))
            {
                (**(code **)(*plVar1 + 0x30))(plVar1,local_48);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b01c0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;
    undefined local_48 [16];

    lVar2 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            lVar2 = FUN_1404c9b90();
        }
        else {
            lVar2 = FUN_1404b6e50();
        }
        if (lVar2 != 0) {
            uVar5 = 0;
            if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                uVar4 = uVar5;
                do {
                    if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400)
                        == param_1) {
                        uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                        break;
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            uVar7 = 0;
            uVar8 = 0;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x18))) {
                dVar6 = (double)FUN_140056c40(lVar2,2);
            }
            else {
                dVar6 = 0.0;
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            fVar10 = (float)dVar6;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x20);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x28))) {
                dVar6 = (double)FUN_140056c40(lVar2,3);
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            fVar9 = (float)dVar6;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x30);
            dVar6 = (double)CONCAT44(uVar8,uVar7);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) &&
                 (dVar6 = (double)CONCAT44(uVar8,uVar7), puVar3 != &DAT_140a12138)) &&
                (dVar6 = (double)CONCAT44(uVar8,uVar7), 0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x38)))
            {
                dVar6 = (double)FUN_140056c40(lVar2,4);
            }
            local_48 = ZEXT1216(CONCAT48((float)dVar6,CONCAT44(fVar9,fVar10)));
            lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar2 != 0) && (plVar1 = *(longlong **)(DAT_140c659f8 + 200), plVar1 != (longlong *)0x0))
            {
                (**(code **)(*plVar1 + 0x10))(plVar1,local_48);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b0380(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    float fVar9;
    float local_48;
    float local_44;
    float local_40;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            lVar2 = FUN_1404c9b90();
        }
        else {
            lVar2 = FUN_1404b6e50();
        }
        if (lVar2 != 0) {
            uVar5 = 0;
            if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                uVar4 = uVar5;
                do {
                    if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400)
                        == param_1) {
                        uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                        break;
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            uVar7 = 0;
            uVar8 = 0;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x18))) {
                dVar6 = (double)FUN_140056c40(lVar2,2);
            }
            else {
                dVar6 = 0.0;
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            local_44 = (float)dVar6;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x20);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x28))) {
                dVar6 = (double)FUN_140056c40(lVar2,3);
            }
            lVar2 = *(longlong *)(uVar5 + 400);
            fVar9 = (float)dVar6;
            puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x30);
            dVar6 = (double)CONCAT44(uVar8,uVar7);
            if (((puVar3 < *(undefined8 **)(lVar2 + 0x10)) &&
                 (dVar6 = (double)CONCAT44(uVar8,uVar7), puVar3 != &DAT_140a12138)) &&
                (dVar6 = (double)CONCAT44(uVar8,uVar7), 0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x38)))
            {
                dVar6 = (double)FUN_140056c40(lVar2,4);
            }
            local_40 = DAT_140c3b438 * 0.005555556;
            local_48 = (float)dVar6 * local_40;
            local_44 = local_40 * local_44;
            local_40 = local_40 * fVar9;
            lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar2 != 0) && (plVar1 = *(longlong **)(DAT_140c659f8 + 200), plVar1 != (longlong *)0x0))
            {
                (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b0560(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            uVar4 = 0;
            if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                uVar3 = uVar4;
                do {
                    if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400)
                        == param_1) {
                        uVar4 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                        break;
                    }
                    uVar3 = (ulonglong)((int)uVar3 + 1);
                } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
            }
            lVar1 = *(longlong *)(uVar4 + 400);
            puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
            if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x18))) {
                FUN_140056c40(lVar1,2);
            }
            lVar1 = *(longlong *)(uVar4 + 400);
            puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
            if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x28))) {
                FUN_140056c40(lVar1,3);
            }
            lVar1 = *(longlong *)(uVar4 + 400);
            puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x30);
            if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x38))) {
                FUN_140056c40(lVar1,4);
            }
            lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
            if (lVar1 != 0) {
                FUN_1405ab700();
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b0710(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar1 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x50))();
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b0790(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 extraout_XMM0_Da;
    double dVar6;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            lVar2 = FUN_1404c9b90();
        }
        else {
            lVar2 = FUN_1404b6e50();
        }
        if (lVar2 != 0) {
            uVar5 = 0;
            lVar2 = DAT_140c63650;
            if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                lVar2 = *(longlong *)(DAT_140c63650 + 0x2f8);
                uVar4 = uVar5;
                do {
                    if (*(longlong *)(*(longlong *)(lVar2 + uVar4 * 8) + 400) == param_1) {
                        uVar5 = *(ulonglong *)(lVar2 + uVar4 * 8);
                        break;
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
            }
            lVar1 = *(longlong *)(uVar5 + 400);
            puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
            if (((puVar3 < *(undefined8 **)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x18))) {
                dVar6 = (double)FUN_140056c40(lVar1,2,lVar2,uVar5,
                                              CONCAT412(in_XMM6_Dd,
                                                        CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))
                                              ));
            }
            else {
                dVar6 = 0.0;
            }
            lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar2 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x20))(extraout_XMM0_Da,(float)dVar6);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b08b0(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar3 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar3 + 0x10) == 0) {
            lVar3 = FUN_1404c9b90();
        }
        else {
            lVar3 = FUN_1404b6e50();
        }
        if (lVar3 != 0) {
            uVar5 = 0;
            if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                uVar4 = uVar5;
                do {
                    if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400)
                        == param_1) {
                        uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                        break;
                    }
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
            }
            uVar2 = FUN_1400f26a0(uVar5 + 0x180,2);
            lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar3 != 0) && (plVar1 = *(longlong **)(DAT_140c659f8 + 200), plVar1 != (longlong *)0x0))
            {
                (**(code **)(*plVar1 + 0x28))(plVar1,uVar2);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b09a0(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if ((lVar1 != 0) && (iVar3 = *(int *)(lVar1 + 0x2a4), *(int *)(lVar1 + 0x2a0) != iVar3)) {
            if ((iVar3 != 0) && (lVar2 = FUN_1404ca4f0(), lVar2 == 0)) {
                return 0;
            }
            *(int *)(lVar1 + 0x2a0) = iVar3;
            *(int *)(lVar1 + 0xf8) = iVar3;
            FUN_1404c6b10(lVar1);
        }
    }
    return 0;
}



undefined8 FUN_1406b0a20(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar4 = FUN_1404c9b90();
        }
        else {
            lVar4 = FUN_1404b6e50();
        }
        if (lVar4 != 0) {
            if ((*(int *)(lVar4 + 0x284) == 0) || (bVar3 = 1, *(int *)(lVar4 + 0x288) == 0)) {
                bVar3 = 0;
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



undefined8 FUN_1406b0ac0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            lVar1 = FUN_140056ab0(param_1,2,"Game.Decor");
            if (lVar1 != 0) {
                FUN_1404c9b90();
                FUN_1404b84d0();
            }
        }
    }
    return 0;
}



undefined8 FUN_1406b0b50(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            FUN_1404b8280(DAT_140c659f0,*(undefined4 *)(lVar1 + 0x1f0),0);
        }
    }
    return 0;
}



undefined8 FUN_1406b0bb0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            lVar1 = FUN_1404c9b90();
        }
        else {
            lVar1 = FUN_1404b6e50();
        }
        if (lVar1 != 0) {
            FUN_1404b8440(DAT_140c659f0,*(undefined4 *)(lVar1 + 0x1f0),0);
        }
    }
    return 0;
}



undefined8 FUN_1406b0c10(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong local_res10 [3];

    lVar3 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar3 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar3 + 0x10) == 0) {
            plVar4 = (longlong *)FUN_1404c9b90();
        }
        else {
            plVar4 = (longlong *)FUN_1404b6e50();
        }
        if (plVar4 != (longlong *)0x0) {
            local_res10[0] = 0;
            (**(code **)(*plVar4 + 0xd0))(plVar4,local_res10);
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(local_res10[0] != 0);
            goto LAB_1406b0c9a;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_1406b0c9a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b0d50(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong local_res10 [3];

    lVar1 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar1 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            plVar2 = (longlong *)FUN_1404c9b90();
        }
        else {
            plVar2 = (longlong *)FUN_1404b6e50();
        }
        if (plVar2 != (longlong *)0x0) {
            local_res10[0] = 0;
            (**(code **)(*plVar2 + 0xc0))(plVar2,local_res10);
            if (local_res10[0] == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            uVar3 = FUN_1406ae160(param_1,*(undefined4 *)(local_res10[0] + 0x1f0));
            return uVar3;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b0e10(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong local_res10 [3];
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Decor");
    if ((lVar4 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar4 + 0x10) == 0) {
            plVar5 = (longlong *)FUN_1404c9b90();
        }
        else {
            plVar5 = (longlong *)FUN_1404b6e50();
        }
        if ((plVar5 != (longlong *)0x0) &&
            (iVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5,local_res10), -1 < iVar3)) {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(param_1);
            for (; local_res10[0] != 0; local_res10[0] = *(longlong *)(local_res10[0] + 0x28)) {
                iVar3 = FUN_1406ae160(param_1,*(undefined4 *)(local_res10[0] + 0x1f0));
                if (iVar3 != 0) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
            }
            uVar8 = (ulonglong)local_20;
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar7;
            uVar1 = *(undefined4 *)(puVar7 + 1);
            *(undefined4 *)(puVar2 + 1) = uVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,uVar1,uVar8 & 0xffffffff);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_1406b0f90(longlong *param_1)

{
    undefined4 uVar1;
    bool bVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *local_res8;
    undefined4 local_res10 [2];
    undefined8 local_res18;
    longlong local_res20;
    undefined4 local_98 [2];
    undefined8 local_90;
    undefined local_88 [8];
    int local_80;
    uint local_7c;

    if (param_1 != (longlong *)0x0) {
        local_res10[0] = 0;
        local_res8 = param_1;
        do {
            uVar1 = *(undefined4 *)(local_res8 + 0x3e);
            local_res20 = DAT_140c659f0;
            lVar5 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar5 != 0) && (plVar6 = (longlong *)FUN_1404c9b90(), plVar6 != (longlong *)0x0)) {
                if ((*(int *)((longlong)plVar6 + 0x284) != 0) && (*(int *)(plVar6 + 0x51) != 0)) {
                    iVar3 = movmskps((int)plVar6,
                                     CONCAT412(-(uint)(*(float *)((longlong)plVar6 + 0x9c) !=
                                                       *(float *)((longlong)plVar6 + 0x20c)),
                                               CONCAT48(-(uint)(*(float *)(plVar6 + 0x13) !=
                                                                *(float *)(plVar6 + 0x41)),
                                                        CONCAT44(-(uint)(*(float *)((longlong)plVar6 + 0x94)
                                                                         != *(float *)((longlong)plVar6 + 0x204
                                                                 )),
                                                                 -(uint)(*(float *)(plVar6 + 0x12) !=
                                                                         *(float *)(plVar6 + 0x40))))));
                    if ((((iVar3 == 0) && (plVar6[0x14] == plVar6[0x42])) &&
                         (*(int *)(plVar6 + 0x15) == *(int *)(plVar6 + 0x43))) &&
                        ((*(float *)((longlong)plVar6 + 0x21c) == *(float *)((longlong)plVar6 + 0xac) &&
                          (*(int *)(plVar6 + 0x26) == 0)))) {
                        bVar2 = false;
                    }
                    else {
                        bVar2 = true;
                    }
                    (**(code **)(*plVar6 + 0x60))();
                    lVar7 = DAT_140c659f8;
                    if ((*(int *)((longlong)plVar6 + 0x284) != 0) && (*(int *)(plVar6 + 0x51) != 0)) {
                        if ((bVar2) || (*(int *)(plVar6 + 0x54) != *(int *)((longlong)plVar6 + 0x2a4))) {
                            lVar7 = *(longlong *)(lVar5 + 0xe8);
                            if ((lVar7 == 0) || (*(int *)(lVar5 + 0x110) == 0)) {
                                lVar7 = 0;
                            }
                            if (((*(uint *)(lVar7 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar7 + 0xb8) != 4)) {
                                local_98[0] = 0;
                                local_90 = 0;
                                FUN_1407e4830(local_88,0,0x58);
                                lVar5 = FUN_140203da0(*(undefined4 *)(plVar6 + 0xc));
                                if (lVar5 != 0) {
                                    iVar3 = *(int *)(lVar5 + 8);
                                    if (iVar3 == 0xc) {
                                        local_80 = 4;
                                    }
                                    else if (iVar3 == 0x16) {
                                        local_80 = 6;
                                    }
                                    else if (iVar3 == 0x35) {
                                        local_80 = 7;
                                    }
                                    else if (iVar3 == 0x36) {
                                        local_80 = 8;
                                    }
                                    else {
                                        local_80 = 2;
                                    }
                                    FUN_1404b89a0();
                                    lVar5 = local_res20;
                                    if (local_80 == 8) {
                                        if (*(int *)(plVar6 + 0x26) != 0) {
                                            uVar4 = 0;
                                            plVar6 = DAT_140c4df18;
                                            local_7c = 0xffffffff;
                                            if ((uint)DAT_140c4df20 == 0) {
                                                LAB_1406b1216:
                                                local_7c = local_7c | 0x10000;
                                            }
                                            else {
                                                do {
                                                    local_7c = uVar4;
                                                    if (*plVar6 == 0) goto LAB_1406b1216;
                                                    uVar4 = uVar4 + 1;
                                                    plVar6 = plVar6 + 1;
                                                } while (uVar4 < (uint)DAT_140c4df20);
                                                local_7c = 0xffffffff;
                                            }
                                        }
                                    }
                                    else if (((local_80 == 7) && (DAT_140c65b98 != 0)) &&
                                             (*(int *)(DAT_140c65b98 + 0x10c) == 4)) {
                                        *(int *)(DAT_140c65b98 + 0x198) = *(int *)(DAT_140c65b98 + 0x198) + 1;
                                    }
                                    FUN_1404bc7e0(local_res20 + 0x2a8,local_98);
                                    FUN_140003460(lVar5 + 0x2f8,local_res10);
                                }
                            }
                        }
                        else {
                            if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
                                (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
                                *(undefined8 *)(lVar7 + 200) = 0;
                            }
                            lVar5 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
                            if (lVar5 != 0) {
                                FUN_1405afe10(lVar5);
                            }
                            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingMyResidenceDecorChanged"
                                    ,&DAT_1409ebf4c,uVar1);
                        }
                        goto LAB_1406b1288;
                    }
                }
                FUN_1403cc530(DAT_140c65898,0x67);
            }
            LAB_1406b1288:
            local_res18 = 0;
            iVar3 = (**(code **)(*local_res8 + 0xd0))(local_res8);
            if (-1 < iVar3) {
                FUN_1406b0f90(local_res18);
            }
            local_res8 = (longlong *)local_res8[5];
        } while (local_res8 != (longlong *)0x0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406b1300(longlong param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                   char param_5)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    undefined4 uVar5;
    undefined2 *puVar6;
    longlong *plVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 uVar11;
    short *psVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong *plVar15;
    longlong *plVar16;
    undefined ***pppuVar17;
    longlong *plVar18;
    ulonglong uVar19;
    ulonglong uVar20;
    longlong lVar21;
    undefined auStack1688 [32];
    undefined4 local_678;
    longlong *local_670;
    undefined8 local_668;
    char local_658;
    uint local_654;
    undefined local_650 [8];
    longlong local_648;
    longlong local_640;
    undefined local_630 [8];
    longlong local_628;
    undefined2 *local_620;
    longlong local_618;
    undefined local_610 [8];
    longlong local_608;
    undefined2 *local_600;
    longlong local_5f8;
    longlong local_5f0;
    undefined local_5e8 [8];
    longlong local_5e0;
    undefined2 *local_5d8;
    longlong local_5d0;
    undefined local_5c8 [8];
    longlong local_5c0;
    undefined2 *local_5b8;
    longlong local_5b0;
    undefined local_5a8 [8];
    longlong local_5a0;
    undefined2 *local_598;
    longlong local_590;
    undefined local_588 [8];
    longlong local_580;
    undefined2 *local_578;
    longlong local_570;
    undefined local_568 [8];
    longlong local_560;
    undefined2 *local_558;
    longlong local_550;
    undefined local_548 [8];
    longlong local_540;
    undefined2 *local_538;
    longlong local_530;
    undefined local_528 [8];
    longlong local_520;
    undefined2 *local_518;
    longlong local_510;
    undefined local_508 [8];
    longlong local_500;
    undefined2 *local_4f8;
    longlong local_4f0;
    undefined local_4e8 [8];
    longlong local_4e0;
    undefined2 *local_4d8;
    longlong local_4d0;
    undefined local_4c8 [8];
    longlong local_4c0;
    undefined2 *local_4b8;
    longlong local_4b0;
    undefined local_4a8 [8];
    longlong local_4a0;
    undefined2 *local_498;
    longlong local_490;
    undefined local_488 [8];
    longlong local_480;
    undefined2 *local_478;
    longlong local_470;
    undefined local_468 [8];
    longlong local_460;
    undefined2 *local_458;
    longlong local_450;
    undefined local_448 [8];
    longlong local_440;
    undefined2 *local_438;
    longlong local_430;
    undefined local_428 [8];
    longlong local_420;
    undefined2 *local_418;
    longlong local_410;
    undefined local_408 [8];
    longlong local_400;
    undefined8 local_3f8;
    undefined8 local_3f0;
    undefined local_3e8 [8];
    longlong local_3e0;
    undefined8 local_3d8;
    undefined8 local_3d0;
    undefined local_3c8 [8];
    longlong local_3c0;
    undefined8 local_3b8;
    undefined8 local_3b0;
    longlong local_3a8;
    undefined *local_3a0;
    undefined local_398 [8];
    longlong local_390;
    undefined8 local_388;
    undefined8 local_380;
    undefined local_378 [8];
    longlong local_370;
    undefined8 local_368;
    undefined8 local_360;
    undefined local_358 [8];
    longlong local_350;
    undefined8 local_348;
    undefined8 local_340;
    undefined local_338 [8];
    longlong local_330;
    undefined8 local_328;
    undefined8 local_320;
    undefined local_318 [8];
    longlong local_310;
    undefined8 local_308;
    undefined8 local_300;
    undefined4 local_2f8 [2];
    undefined8 local_2f0;
    undefined local_2e8 [8];
    longlong local_2e0;
    undefined8 local_2d8;
    undefined8 local_2d0;
    undefined local_2c8 [8];
    longlong local_2c0;
    undefined8 local_2b8;
    undefined8 local_2b0;
    undefined local_2a8 [8];
    longlong local_2a0;
    undefined8 local_298;
    undefined8 local_290;
    undefined local_288 [8];
    longlong local_280;
    undefined8 local_278;
    undefined8 local_270;
    undefined **local_268 [24];
    undefined local_1a8 [16];
    undefined2 *local_198;
    undefined **local_188 [24];
    undefined2 *local_c8;
    undefined2 *local_c0;
    undefined2 *local_b8;
    longlong local_a8 [12];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack1688;
    local_658 = param_5;
    local_5f0 = param_1;
    if ((param_4 == (short *)0x0) || (*param_4 == 0)) {
        FUN_1400b7090(local_188,param_3);
        local_c8 = (undefined2 *)0x0;
        local_188[0] = &PTR_FUN_140b69230;
        local_c0 = (undefined2 *)0x0;
        local_b8 = (undefined2 *)0x0;
        local_c8 = (undefined2 *)FUN_14018b280(0x10,0);
        local_b8 = local_c8 + 8;
        if (local_c8 != (undefined2 *)0x0) {
            *local_c8 = 0;
        }
        local_c0 = local_c8;
        lVar21 = (*(code *)local_188[0][0x16])(local_188);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        FUN_14001c1b0(param_1,*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar21 + 0x10));
        if (local_c8 != (undefined2 *)0x0) {
            FUN_14018b900(local_c8,0);
        }
        pppuVar17 = local_188;
        goto LAB_1406b333c;
    }
    FUN_1400b7090(local_268,param_3);
    plVar15 = (longlong *)0x0;
    local_198 = (undefined2 *)0x0;
    local_1a8 = ZEXT816(0);
    local_268[0] = &PTR_FUN_140b69230;
    puVar6 = (undefined2 *)FUN_14018b280(0x10,0);
    local_1a8 = CONCAT88(puVar6,puVar6);
    local_198 = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    local_628 = 0;
    local_618 = 0;
    plVar7 = plVar15;
    do {
        psVar12 = &DAT_1409f69e6 + (longlong)plVar7;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
    } while (*psVar12 != 0);
    lVar21 = (longlong)plVar7 * 2 >> 1;
    uVar20 = lVar21 + 1;
    if (uVar20 < 0x7fffffffffffffff) {
        lVar13 = uVar20 * 2;
        local_628 = FUN_14018b280(lVar13,0);
        local_618 = local_628 + lVar13;
    }
    lVar13 = local_628;
    lVar21 = lVar21 * 2;
    FUN_1407db590(local_628,&DAT_1409f69e4,lVar21);
    local_620 = (undefined2 *)(lVar13 + lVar21);
    if (local_620 != (undefined2 *)0x0) {
        *local_620 = 0;
    }
    local_608 = 0;
    local_5f8 = 0;
    sVar1 = *param_4;
    plVar7 = plVar15;
    while (sVar1 != 0) {
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        sVar1 = param_4[(longlong)plVar7];
    }
    lVar21 = (longlong)plVar7 * 2 >> 1;
    uVar20 = lVar21 + 1;
    if (uVar20 < 0x7fffffffffffffff) {
        lVar9 = uVar20 * 2;
        local_608 = FUN_14018b280(lVar9,0);
        local_5f8 = local_608 + lVar9;
    }
    lVar9 = local_608;
    lVar21 = lVar21 * 2;
    FUN_1407db590(local_608,param_4,lVar21);
    local_600 = (undefined2 *)(lVar9 + lVar21);
    if (local_600 != (undefined2 *)0x0) {
        *local_600 = 0;
    }
    local_678 = CONCAT22(local_678._2_2_,0x5c);
    FUN_14018f570(local_650,local_610,local_630,0x22);
    if (lVar9 != 0) {
        FUN_14018b900(lVar9,0);
    }
    if (lVar13 != 0) {
        FUN_14018b900(lVar13,0);
    }
    lVar21 = local_648;
    plVar7 = plVar15;
    switch(param_2) {
        case 1:
        case 2:
        case 3:
        case 0x1c:
        case 0x1d:
            if (4 < (ulonglong)(local_640 - local_648 >> 5)) {
                FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 0x28));
                uVar4 = FUN_14018e820(*(undefined8 *)(local_648 + 0x48));
                local_654 = uVar4;
                lVar21 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x68));
                uVar11 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x88));
                lVar13 = FUN_14018b280(0x58);
                if (lVar13 != 0) {
                    uVar8 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar13,uVar8,uVar4);
                }
                local_5c0 = 0;
                local_5b8 = (undefined2 *)0x0;
                local_5b0 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36d1a + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar13 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar13 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar9 = uVar20 * 2;
                    local_5b8 = (undefined2 *)FUN_14018b280(lVar9,0);
                    local_5b0 = (longlong)local_5b8 + lVar9;
                }
                lVar9 = (longlong)local_5b8;
                lVar13 = lVar13 * 2;
                local_5c0 = (longlong)local_5b8;
                FUN_1407db590(local_5b8,&DAT_140b36d18,lVar13);
                local_5b8 = (undefined2 *)(lVar13 + lVar9);
                if (local_5b8 != (undefined2 *)0x0) {
                    *local_5b8 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_5c8);
                if (local_5c0 != 0) {
                    FUN_14018b900(local_5c0,0);
                }
                lVar13 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar13 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar13,lVar21);
                }
                local_5a0 = 0;
                local_598 = (undefined2 *)0x0;
                local_590 = 0;
                plVar14 = plVar15;
                do {
                    lVar13 = (longlong)plVar14 + 1;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (L"price"[lVar13] != L'\0');
                lVar13 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar13 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar9 = uVar20 * 2;
                    local_598 = (undefined2 *)FUN_14018b280(lVar9,0);
                    local_590 = (longlong)local_598 + lVar9;
                }
                lVar9 = (longlong)local_598;
                lVar13 = lVar13 * 2;
                local_5a0 = (longlong)local_598;
                FUN_1407db590(local_598,L"price",lVar13);
                local_598 = (undefined2 *)(lVar13 + lVar9);
                if (local_598 != (undefined2 *)0x0) {
                    *local_598 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_5a8);
                if (local_5a0 != 0) {
                    FUN_14018b900(local_5a0,0);
                }
                lVar13 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar13 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar13,uVar11);
                }
                local_420 = 0;
                local_418 = (undefined2 *)0x0;
                local_410 = 0;
                plVar14 = plVar15;
                do {
                    lVar13 = (longlong)plVar14 + 1;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (L"reservePrice"[lVar13] != L'\0');
                lVar13 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar13 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar9 = uVar20 * 2;
                    local_418 = (undefined2 *)FUN_14018b280(lVar9,0);
                    local_410 = (longlong)local_418 + lVar9;
                }
                lVar9 = (longlong)local_418;
                lVar13 = lVar13 * 2;
                local_420 = (longlong)local_418;
                FUN_1407db590(local_418,L"reservePrice",lVar13);
                local_418 = (undefined2 *)(lVar13 + lVar9);
                if (local_418 != (undefined2 *)0x0) {
                    *local_418 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_428);
                if (local_420 != 0) {
                    FUN_14018b900(local_420,0);
                }
                lVar13 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar13 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar13,(ulonglong)local_654 * lVar21);
                }
                local_4c0 = 0;
                local_4b8 = (undefined2 *)0x0;
                local_4b0 = 0;
                do {
                    lVar21 = (longlong)plVar15 + 1;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (L"total"[lVar21] != L'\0');
                lVar21 = (longlong)plVar15 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_4b8 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_4b0 = (longlong)local_4b8 + lVar13;
                }
                lVar13 = (longlong)local_4b8;
                lVar21 = lVar21 * 2;
                local_4c0 = (longlong)local_4b8;
                FUN_1407db590(local_4b8,L"total",lVar21);
                local_4b8 = (undefined2 *)(lVar21 + lVar13);
                if (local_4b8 != (undefined2 *)0x0) {
                    *local_4b8 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_4c8);
                lVar21 = local_4c0;
                LAB_1406b2ec4:
                if (lVar21 != 0) {
                    FUN_14018b900(lVar21,0);
                }
            }
            break;
        case 4:
            if (3 < (ulonglong)(local_640 - local_648 >> 5)) {
                FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 0x28));
                lVar21 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x48));
                lVar13 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x68));
                lVar9 = FUN_14018b280(0x58);
                if (lVar9 != 0) {
                    uVar11 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar9,uVar11,1);
                }
                local_580 = 0;
                local_578 = (undefined2 *)0x0;
                local_570 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36c9a + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar9 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar9 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar2 = uVar20 * 2;
                    local_578 = (undefined2 *)FUN_14018b280(lVar2,0);
                    local_570 = (longlong)local_578 + lVar2;
                }
                lVar2 = (longlong)local_578;
                lVar9 = lVar9 * 2;
                local_580 = (longlong)local_578;
                FUN_1407db590(local_578,&DAT_140b36c98,lVar9);
                local_578 = (undefined2 *)(lVar2 + lVar9);
                if (local_578 != (undefined2 *)0x0) {
                    *local_578 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_588);
                if (local_580 != 0) {
                    FUN_14018b900(local_580,0);
                }
                lVar9 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar9 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar9,lVar21);
                }
                local_560 = 0;
                local_558 = (undefined2 *)0x0;
                local_550 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36c72 + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar9 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar9 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar2 = uVar20 * 2;
                    local_558 = (undefined2 *)FUN_14018b280(lVar2,0);
                    local_550 = (longlong)local_558 + lVar2;
                }
                lVar2 = (longlong)local_558;
                lVar9 = lVar9 * 2;
                local_560 = (longlong)local_558;
                FUN_1407db590(local_558,&DAT_140b36c70,lVar9);
                local_558 = (undefined2 *)(lVar2 + lVar9);
                if (local_558 != (undefined2 *)0x0) {
                    *local_558 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_568);
                if (local_560 != 0) {
                    FUN_14018b900(local_560,0);
                }
                lVar9 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar9 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar9,lVar13);
                }
                local_520 = 0;
                local_518 = (undefined2 *)0x0;
                local_510 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36c7a + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar9 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar9 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar2 = uVar20 * 2;
                    local_518 = (undefined2 *)FUN_14018b280(lVar2,0);
                    local_510 = (longlong)local_518 + lVar2;
                }
                lVar2 = (longlong)local_518;
                lVar9 = lVar9 * 2;
                local_520 = (longlong)local_518;
                FUN_1407db590(local_518,&DAT_140b36c78,lVar9);
                local_518 = (undefined2 *)(lVar2 + lVar9);
                if (local_518 != (undefined2 *)0x0) {
                    *local_518 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_528);
                if (local_520 != 0) {
                    FUN_14018b900(local_520,0);
                }
                lVar9 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar9 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar9,lVar21 - lVar13);
                }
                local_4e0 = 0;
                local_4d8 = (undefined2 *)0x0;
                local_4d0 = 0;
                do {
                    lVar21 = (longlong)plVar15 + 1;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (L"total"[lVar21] != L'\0');
                lVar21 = (longlong)plVar15 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_4d8 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_4d0 = (longlong)local_4d8 + lVar13;
                }
                lVar13 = (longlong)local_4d8;
                lVar21 = lVar21 * 2;
                local_4e0 = (longlong)local_4d8;
                FUN_1407db590(local_4d8,L"total",lVar21);
                local_4d8 = (undefined2 *)(lVar13 + lVar21);
                if (local_4d8 != (undefined2 *)0x0) {
                    *local_4d8 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_4e8);
                lVar21 = local_4e0;
                goto LAB_1406b2ec4;
            }
            break;
        case 5:
            if (2 < (ulonglong)(local_640 - local_648 >> 5)) {
                FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 0x28));
                uVar11 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x48));
                lVar21 = FUN_14018b280(0x58);
                if (lVar21 != 0) {
                    uVar8 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar21,uVar8,1);
                }
                local_5e0 = 0;
                local_5d8 = (undefined2 *)0x0;
                local_5d0 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36c62 + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar21 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_5d8 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_5d0 = (longlong)local_5d8 + lVar13;
                }
                lVar13 = (longlong)local_5d8;
                lVar21 = lVar21 * 2;
                local_5e0 = (longlong)local_5d8;
                FUN_1407db590(local_5d8,&DAT_140b36c60,lVar21);
                local_5d8 = (undefined2 *)(lVar13 + lVar21);
                if (local_5d8 != (undefined2 *)0x0) {
                    *local_5d8 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_5e8);
                if (local_5e0 != 0) {
                    FUN_14018b900(local_5e0,0);
                }
                lVar21 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar21 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar21,uVar11);
                }
                local_4a0 = 0;
                local_498 = (undefined2 *)0x0;
                local_490 = 0;
                do {
                    psVar12 = &DAT_140b36c3a + (longlong)plVar15;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (*psVar12 != 0);
                lVar21 = (longlong)plVar15 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_498 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_490 = (longlong)local_498 + lVar13;
                }
                lVar13 = (longlong)local_498;
                lVar21 = lVar21 * 2;
                local_4a0 = (longlong)local_498;
                FUN_1407db590(local_498,&DAT_140b36c38,lVar21);
                local_498 = (undefined2 *)(lVar13 + lVar21);
                if (local_498 != (undefined2 *)0x0) {
                    *local_498 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_4a8);
                lVar21 = local_4a0;
                goto LAB_1406b2ec4;
            }
            break;
        case 6:
            if (3 < (ulonglong)(local_640 - local_648 >> 5)) {
                FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 0x28));
                uVar11 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x48));
                uVar8 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x68));
                lVar21 = FUN_14018b280(0x58);
                if (lVar21 != 0) {
                    uVar10 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar21,uVar10,1);
                }
                local_460 = 0;
                local_458 = (undefined2 *)0x0;
                local_450 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36c42 + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar21 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_458 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_450 = (longlong)local_458 + lVar13;
                }
                lVar13 = (longlong)local_458;
                lVar21 = lVar21 * 2;
                local_460 = (longlong)local_458;
                FUN_1407db590(local_458,&DAT_140b36c40,lVar21);
                local_458 = (undefined2 *)(lVar21 + lVar13);
                if (local_458 != (undefined2 *)0x0) {
                    *local_458 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_468);
                if (local_460 != 0) {
                    FUN_14018b900(local_460,0);
                }
                lVar21 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar21 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar21,uVar11);
                }
                local_608 = 0;
                local_600 = (undefined2 *)0x0;
                local_5f8 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36e42 + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar21 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_600 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_5f8 = (longlong)local_600 + lVar13;
                }
                lVar13 = (longlong)local_600;
                lVar21 = lVar21 * 2;
                local_608 = (longlong)local_600;
                FUN_1407db590(local_600,&DAT_140b36e40,lVar21);
                local_600 = (undefined2 *)(lVar21 + lVar13);
                if (local_600 != (undefined2 *)0x0) {
                    *local_600 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_610);
                if (local_608 != 0) {
                    FUN_14018b900(local_608,0);
                }
                lVar21 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar21 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar21,uVar8);
                }
                local_628 = 0;
                local_620 = (undefined2 *)0x0;
                local_618 = 0;
                do {
                    psVar12 = &DAT_140b36e52 + (longlong)plVar15;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (*psVar12 != 0);
                lVar21 = (longlong)plVar15 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_620 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_618 = (longlong)local_620 + lVar13;
                }
                lVar13 = (longlong)local_620;
                lVar21 = lVar21 * 2;
                local_628 = (longlong)local_620;
                FUN_1407db590(local_620,&DAT_140b36e50,lVar21);
                local_620 = (undefined2 *)(lVar21 + lVar13);
                if (local_620 != (undefined2 *)0x0) {
                    *local_620 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_630);
                lVar21 = local_628;
                goto LAB_1406b2ec4;
            }
            break;
        case 7:
        case 8:
            if (3 < (ulonglong)(local_640 - local_648 >> 5)) {
                FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 0x28));
                uVar11 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x48));
                uVar8 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x68));
                lVar21 = FUN_14018b280(0x58);
                if (lVar21 != 0) {
                    uVar10 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar21,uVar10,1);
                }
                local_400 = 0;
                local_3f8 = 0;
                local_3f0 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36e22 + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                FUN_14001c1b0(local_408,&DAT_140b36e20,&DAT_140b36e20 + (longlong)plVar14 * 2);
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_408);
                if (local_400 != 0) {
                    FUN_14018b900(local_400,0);
                }
                lVar21 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar21 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar21,uVar11);
                }
                local_280 = 0;
                local_278 = 0;
                local_270 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36e32 + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                FUN_14001c1b0(local_288,&DAT_140b36e30,&DAT_140b36e30 + (longlong)plVar14 * 2);
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_288);
                if (local_280 != 0) {
                    FUN_14018b900(local_280,0);
                }
                lVar21 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar21 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar21,uVar8);
                }
                local_370 = 0;
                local_368 = 0;
                local_360 = 0;
                do {
                    lVar21 = (longlong)plVar15 + 1;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (L"buyout"[lVar21] != L'\0');
                FUN_14001c1b0(local_378,L"buyout",L"buyout" + (longlong)plVar15);
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_378);
                lVar21 = local_370;
                goto LAB_1406b2ec4;
            }
            break;
        case 0x1b:
            if (4 < (ulonglong)(local_640 - local_648 >> 5)) {
                FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 0x28));
                uVar4 = FUN_14018e820(*(undefined8 *)(local_648 + 0x48));
                local_654 = uVar4;
                lVar21 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x68));
                lVar13 = FUN_14018e8f0(*(undefined8 *)(local_648 + 0x88));
                lVar9 = FUN_14018b280(0x58);
                if (lVar9 != 0) {
                    uVar11 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar9,uVar11,uVar4);
                }
                local_540 = 0;
                local_538 = (undefined2 *)0x0;
                local_530 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36cda + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar9 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar9 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar2 = uVar20 * 2;
                    local_538 = (undefined2 *)FUN_14018b280(lVar2,0);
                    local_530 = (longlong)local_538 + lVar2;
                }
                lVar2 = (longlong)local_538;
                lVar9 = lVar9 * 2;
                local_540 = (longlong)local_538;
                FUN_1407db590(local_538,&DAT_140b36cd8,lVar9);
                local_538 = (undefined2 *)(lVar9 + lVar2);
                if (local_538 != (undefined2 *)0x0) {
                    *local_538 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_548);
                if (local_540 != 0) {
                    FUN_14018b900(local_540,0);
                }
                lVar9 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar9 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar9,lVar21);
                }
                local_440 = 0;
                local_438 = (undefined2 *)0x0;
                local_430 = 0;
                plVar14 = plVar15;
                do {
                    lVar9 = (longlong)plVar14 + 1;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (L"price"[lVar9] != L'\0');
                lVar9 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar9 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar2 = uVar20 * 2;
                    local_438 = (undefined2 *)FUN_14018b280(lVar2,0);
                    local_430 = (longlong)local_438 + lVar2;
                }
                lVar2 = (longlong)local_438;
                lVar9 = lVar9 * 2;
                local_440 = (longlong)local_438;
                FUN_1407db590(local_438,L"price",lVar9);
                local_438 = (undefined2 *)(lVar9 + lVar2);
                if (local_438 != (undefined2 *)0x0) {
                    *local_438 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_448);
                if (local_440 != 0) {
                    FUN_14018b900(local_440,0);
                }
                lVar9 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar9 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar9,lVar13);
                }
                local_500 = 0;
                local_4f8 = (undefined2 *)0x0;
                local_4f0 = 0;
                plVar14 = plVar15;
                do {
                    psVar12 = &DAT_140b36cba + (longlong)plVar14;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                } while (*psVar12 != 0);
                lVar9 = (longlong)plVar14 * 2 >> 1;
                uVar20 = lVar9 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar2 = uVar20 * 2;
                    local_4f8 = (undefined2 *)FUN_14018b280(lVar2,0);
                    local_4f0 = (longlong)local_4f8 + lVar2;
                }
                lVar2 = (longlong)local_4f8;
                lVar9 = lVar9 * 2;
                local_500 = (longlong)local_4f8;
                FUN_1407db590(local_4f8,&DAT_140b36cb8,lVar9);
                local_4f8 = (undefined2 *)(lVar9 + lVar2);
                if (local_4f8 != (undefined2 *)0x0) {
                    *local_4f8 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_508);
                if (local_500 != 0) {
                    FUN_14018b900(local_500,0);
                }
                lVar9 = FUN_14018b280(0x58);
                plVar7 = plVar15;
                if (lVar9 != 0) {
                    plVar7 = (longlong *)FUN_1404dd880(lVar9,(ulonglong)local_654 * lVar21 - lVar13);
                }
                local_480 = 0;
                local_478 = (undefined2 *)0x0;
                local_470 = 0;
                do {
                    lVar21 = (longlong)plVar15 + 1;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (L"total"[lVar21] != L'\0');
                lVar21 = (longlong)plVar15 * 2 >> 1;
                uVar20 = lVar21 + 1;
                if (uVar20 < 0x7fffffffffffffff) {
                    lVar13 = uVar20 * 2;
                    local_478 = (undefined2 *)FUN_14018b280(lVar13,0);
                    local_470 = (longlong)local_478 + lVar13;
                }
                lVar13 = (longlong)local_478;
                lVar21 = lVar21 * 2;
                local_480 = (longlong)local_478;
                FUN_1407db590(local_478,L"total",lVar21);
                local_478 = (undefined2 *)(lVar21 + lVar13);
                if (local_478 != (undefined2 *)0x0) {
                    *local_478 = 0;
                }
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_488);
                lVar21 = local_480;
                goto LAB_1406b2ec4;
            }
            break;
        case 0x3d:
        case 0x45:
            if (local_640 - local_648 >> 5 != 0) {
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 8));
                lVar21 = FUN_14018b280(0x58);
                if (lVar21 != 0) {
                    uVar11 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                    plVar7 = (longlong *)FUN_1404dc4f0(lVar21,uVar11,1);
                }
                local_2c0 = 0;
                local_2b8 = 0;
                local_2b0 = 0;
                do {
                    psVar12 = &DAT_140b36e12 + (longlong)plVar15;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (*psVar12 != 0);
                FUN_14001c1b0(local_2c8,&DAT_140b36e10,&DAT_140b36e10 + (longlong)plVar15 * 2);
                FUN_1400b7480(local_268,plVar7);
                (**(code **)(*plVar7 + 0x48))(plVar7,local_2c8);
                lVar21 = local_2c0;
                goto LAB_1406b2ec4;
            }
            break;
        case 0x46:
        case 0x47:
            uVar20 = local_640 - local_648 >> 5;
            if (uVar20 != 0) {
                uVar5 = FUN_14018e820(*(undefined8 *)(local_648 + 8));
                uVar11 = FUN_1400b5df0(DAT_140c658f0,uVar5,0);
                FUN_1404dc4f0(local_a8,uVar11,1);
                psVar12 = (short *)(**(code **)(local_a8[0] + 0x38))(local_a8,L"name",0,0);
                if (psVar12 != (short *)0x0) {
                    sVar1 = *psVar12;
                    plVar14 = plVar15;
                    while (sVar1 != 0) {
                        plVar14 = (longlong *)((longlong)plVar14 + 1);
                        sVar1 = psVar12[(longlong)plVar14];
                    }
                    plVar18 = (longlong *)FUN_14018b280((longlong)plVar14 * 2 + 0x12,0);
                    if (plVar18 != (longlong *)0x0) {
                        *plVar18 = (longlong)&PTR_LAB_140b55060;
                        plVar18[1] = (longlong)plVar14;
                        plVar7 = plVar18;
                    }
                    plVar7 = plVar7 + 2;
                    FUN_1407db590(plVar7,psVar12,(longlong)plVar14 * 2);
                    *(undefined2 *)((longlong)plVar14 * 2 + (longlong)plVar7) = 0;
                    lVar21 = local_648;
                }
                uVar19 = 1;
                plVar14 = plVar7;
                if (1 < uVar20) {
                    do {
                        iVar3 = FUN_14018e820(*(undefined8 *)(uVar19 * 0x20 + 8 + lVar21));
                        plVar7 = plVar14;
                        if (iVar3 != 0) {
                            FUN_1404ddf50(local_188,0xb399a);
                            lVar21 = FUN_14018b280(0x60);
                            plVar7 = plVar15;
                            if (lVar21 != 0) {
                                plVar7 = (longlong *)FUN_1404ddb40(lVar21,plVar14);
                            }
                            FUN_1400b7480(local_188,plVar7);
                            lVar21 = FUN_14018b280(0x58);
                            plVar7 = plVar15;
                            if (lVar21 != 0) {
                                uVar11 = FUN_1400b5df0(DAT_140c658f0,iVar3,0);
                                plVar7 = (longlong *)FUN_1404dc4f0(lVar21,uVar11);
                            }
                            FUN_1400b7480(local_188,plVar7);
                            lVar21 = FUN_1400b7660(local_188);
                            psVar12 = *(short **)(lVar21 + 8);
                            plVar7 = plVar15;
                            if (psVar12 != (short *)0x0) {
                                sVar1 = *psVar12;
                                plVar18 = plVar15;
                                while (sVar1 != 0) {
                                    plVar18 = (longlong *)((longlong)plVar18 + 1);
                                    sVar1 = psVar12[(longlong)plVar18];
                                }
                                plVar16 = (longlong *)FUN_14018b280((longlong)plVar18 * 2 + 0x12,0);
                                if (plVar16 != (longlong *)0x0) {
                                    plVar16[1] = (longlong)plVar18;
                                    *plVar16 = (longlong)&PTR_LAB_140b55060;
                                    plVar7 = plVar16;
                                }
                                plVar7 = plVar7 + 2;
                                FUN_1407db590(plVar7,psVar12);
                                *(undefined2 *)((longlong)plVar18 * 2 + (longlong)plVar7) = 0;
                            }
                            if (plVar14 != (longlong *)0x0) {
                                (**(code **)(plVar14[-2] + 8))(plVar14 + -2);
                            }
                            if (local_c8 != (undefined2 *)0x0) {
                                FUN_14018b900(local_c8,0);
                            }
                            FUN_1400b7390(local_188);
                            lVar21 = local_648;
                        }
                        uVar19 = (ulonglong)((int)uVar19 + 1);
                        plVar14 = plVar7;
                    } while (uVar19 < uVar20);
                }
                lVar21 = FUN_14018b280(0x60);
                plVar14 = plVar15;
                if (lVar21 != 0) {
                    plVar14 = (longlong *)FUN_1404ddb40(lVar21,plVar7);
                }
                local_330 = 0;
                local_328 = 0;
                local_320 = 0;
                do {
                    psVar12 = &DAT_140b36de2 + (longlong)plVar15;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (*psVar12 != 0);
                FUN_14001c1b0(local_338,&DAT_140b36de0,&DAT_140b36de0 + (longlong)plVar15 * 2);
                FUN_1400b7480(local_268,plVar14);
                (**(code **)(*plVar14 + 0x48))(plVar14,local_338);
                if (local_330 != 0) {
                    FUN_14018b900(local_330,0);
                }
                FUN_1400b6470(local_a8);
                LAB_1406b320e:
                if (plVar7 != (longlong *)0x0) {
                    (**(code **)(plVar7[-2] + 8))(plVar7 + -2);
                }
            }
            break;
        case 0x5f:
        case 0x60:
            uVar20 = local_640 - local_648 >> 5;
            if (2 < uVar20) {
                local_2f0 = FUN_14018e8f0(*(undefined8 *)(local_648 + 8));
                local_2f8[0] = FUN_14018e820(*(undefined8 *)(lVar21 + 0x28));
                local_668 = 0;
                local_3a0 = &DAT_14062a080;
                local_3a8 = DAT_140c65898 + 0x6bc8;
                local_670 = &local_3a8;
                local_678 = 0x21;
                iVar3 = FUN_1403f82f0(DAT_140c65898,0,local_2f8,local_a8);
                if (iVar3 == 0) {
                    lVar13 = FUN_14018b280(0x60);
                    plVar14 = plVar15;
                    if (lVar13 != 0) {
                        plVar14 = (longlong *)FUN_1404ddaf0(lVar13,0x6c);
                    }
                    local_3e0 = 0;
                    local_3d8 = 0;
                    local_3d0 = 0;
                    plVar18 = plVar15;
                    do {
                        lVar13 = (longlong)plVar18 + 1;
                        plVar18 = (longlong *)((longlong)plVar18 + 1);
                    } while (L"gifter"[lVar13] != L'\0');
                    FUN_14001c1b0(local_3e8,L"gifter",L"gifter" + (longlong)plVar18);
                    FUN_1400b7480(local_268,plVar14);
                    (**(code **)(*plVar14 + 0x48))(plVar14,local_3e8);
                    lVar13 = local_3e0;
                }
                else {
                    lVar13 = FUN_14018b280(0x60);
                    plVar14 = plVar15;
                    if (lVar13 != 0) {
                        plVar14 = (longlong *)FUN_1404ddb40(lVar13,local_a8);
                    }
                    local_2a0 = 0;
                    local_298 = 0;
                    local_290 = 0;
                    plVar18 = plVar15;
                    do {
                        lVar13 = (longlong)plVar18 + 1;
                        plVar18 = (longlong *)((longlong)plVar18 + 1);
                    } while (L"gifter"[lVar13] != L'\0');
                    FUN_14001c1b0(local_2a8,L"gifter",L"gifter" + (longlong)plVar18);
                    FUN_1400b7480(local_268,plVar14);
                    (**(code **)(*plVar14 + 0x48))(plVar14,local_2a8);
                    lVar13 = local_2a0;
                }
                if (lVar13 != 0) {
                    FUN_14018b900(lVar13,0);
                }
                uVar4 = FUN_14018e820(*(undefined8 *)(lVar21 + 0x48));
                if (uVar20 != 3) {
                    uVar19 = 3;
                    plVar14 = plVar15;
                    local_654 = uVar4;
                    if (3 < uVar20) {
                        do {
                            uVar4 = local_654;
                            uVar5 = FUN_14018e820(*(undefined8 *)(uVar19 * 0x20 + 8 + lVar21));
                            FUN_1404ddf50(local_188,0xb8d6e);
                            if ((int)uVar19 == 3) {
                                local_390 = 0;
                                local_388 = 0;
                                local_380 = 0;
                                plVar7 = plVar15;
                                do {
                                    lVar21 = (longlong)plVar7 + 1;
                                    plVar7 = (longlong *)((longlong)plVar7 + 1);
                                } while (L"existing"[lVar21] != L'\0');
                                FUN_14001c1b0(local_398,L"existing",L"existing" + (longlong)plVar7);
                                plVar7 = (longlong *)FUN_1404dc5e0(uVar4);
                                FUN_1400b7480(local_188,plVar7);
                                (**(code **)(*plVar7 + 0x48))(plVar7,local_398);
                                lVar21 = local_390;
                            }
                            else {
                                lVar21 = FUN_14018b280(0x60);
                                plVar7 = plVar15;
                                if (lVar21 != 0) {
                                    plVar7 = (longlong *)FUN_1404ddb40(lVar21,plVar14);
                                }
                                local_350 = 0;
                                local_348 = 0;
                                local_340 = 0;
                                plVar18 = plVar15;
                                do {
                                    lVar21 = (longlong)plVar18 + 1;
                                    plVar18 = (longlong *)((longlong)plVar18 + 1);
                                } while (L"existing"[lVar21] != L'\0');
                                FUN_14001c1b0(local_358,L"existing",L"existing" + (longlong)plVar18);
                                FUN_1400b7480(local_188,plVar7);
                                (**(code **)(*plVar7 + 0x48))(plVar7,local_358);
                                lVar21 = local_350;
                            }
                            if (lVar21 != 0) {
                                FUN_14018b900(lVar21,0);
                            }
                            local_310 = 0;
                            local_308 = 0;
                            local_300 = 0;
                            plVar7 = plVar15;
                            do {
                                psVar12 = &DAT_140b36d6a + (longlong)plVar7;
                                plVar7 = (longlong *)((longlong)plVar7 + 1);
                            } while (*psVar12 != 0);
                            FUN_14001c1b0(local_318,&DAT_140b36d68,&DAT_140b36d68 + (longlong)plVar7 * 2);
                            plVar7 = (longlong *)FUN_1404dc5e0(uVar5);
                            FUN_1400b7480(local_188,plVar7);
                            (**(code **)(*plVar7 + 0x48))(plVar7,local_318);
                            if (local_310 != 0) {
                                FUN_14018b900(local_310,0);
                            }
                            lVar21 = FUN_1400b7660(local_188);
                            psVar12 = *(short **)(lVar21 + 8);
                            plVar7 = plVar15;
                            if (psVar12 != (short *)0x0) {
                                sVar1 = *psVar12;
                                plVar18 = plVar15;
                                while (sVar1 != 0) {
                                    plVar18 = (longlong *)((longlong)plVar18 + 1);
                                    sVar1 = psVar12[(longlong)plVar18];
                                }
                                plVar16 = (longlong *)FUN_14018b280((longlong)plVar18 * 2 + 0x12,0);
                                if (plVar16 != (longlong *)0x0) {
                                    plVar16[1] = (longlong)plVar18;
                                    *plVar16 = (longlong)&PTR_LAB_140b55060;
                                    plVar7 = plVar16;
                                }
                                plVar7 = plVar7 + 2;
                                FUN_1407db590(plVar7,psVar12,(longlong)plVar18 * 2);
                                *(undefined2 *)((longlong)plVar7 + (longlong)plVar18 * 2) = 0;
                            }
                            if (plVar14 != (longlong *)0x0) {
                                (**(code **)(plVar14[-2] + 8))(plVar14 + -2);
                            }
                            if (local_c8 != (undefined2 *)0x0) {
                                FUN_14018b900(local_c8,0);
                            }
                            FUN_1400b7390(local_188);
                            uVar19 = (ulonglong)((int)uVar19 + 1);
                            plVar14 = plVar7;
                            lVar21 = local_648;
                        } while (uVar19 < uVar20);
                    }
                    lVar21 = FUN_14018b280(0x60);
                    plVar14 = plVar15;
                    if (lVar21 != 0) {
                        plVar14 = (longlong *)FUN_1404ddb40(lVar21,plVar7);
                    }
                    local_2e0 = 0;
                    local_2d8 = 0;
                    local_2d0 = 0;
                    do {
                        lVar21 = (longlong)plVar15 + 1;
                        plVar15 = (longlong *)((longlong)plVar15 + 1);
                    } while (L"purchase"[lVar21] != L'\0');
                    FUN_14001c1b0(local_2e8,L"purchase",L"purchase" + (longlong)plVar15);
                    FUN_1400b7480(local_268,plVar14);
                    (**(code **)(*plVar14 + 0x48))(plVar14,local_2e8);
                    if (local_2e0 != 0) {
                        FUN_14018b900(local_2e0,0);
                    }
                    goto LAB_1406b320e;
                }
                local_3c0 = 0;
                local_3b8 = 0;
                local_3b0 = 0;
                do {
                    lVar21 = (longlong)plVar15 + 1;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (L"purchase"[lVar21] != L'\0');
                FUN_14001c1b0(local_3c8,L"purchase",L"purchase" + (longlong)plVar15);
                plVar15 = (longlong *)FUN_1404dc5e0(uVar4);
                FUN_1400b7480(local_268,plVar15);
                (**(code **)(*plVar15 + 0x48))(plVar15,local_3c8);
                lVar21 = local_3c0;
                goto LAB_1406b2ec4;
            }
    }
    lVar21 = FUN_1400b7660(local_268);
    if (local_658 == '\0') {
        FUN_14001c250(local_5f0,lVar21);
    }
    else {
        FUN_14018efa0(local_5f0,L"<Doc><P>%s</P></Doc>",*(undefined8 *)(lVar21 + 8));
    }
    FUN_14002c630(local_650);
    if (local_1a8._0_8_ != 0) {
        FUN_14018b900(local_1a8._0_8_,0);
    }
    pppuVar17 = local_268;
    LAB_1406b333c:
    FUN_1400b7390(pppuVar17);
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack1688);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406b33f0(longlong param_1,longlong param_2)

{
    undefined2 *puVar1;
    short sVar2;
    short *psVar3;
    double *pdVar4;
    uint *puVar5;
    byte bVar6;
    undefined8 uVar7;
    undefined4 uVar8;
    int iVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    undefined *puVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong lVar16;
    undefined4 *puVar17;
    ulonglong uVar18;
    wchar_t *pwVar19;
    longlong lVar20;
    longlong lVar21;
    uint uVar22;
    undefined auStack3576 [32];
    undefined8 local_dd8;
    ulonglong *local_dd0;
    undefined8 local_dc8;
    undefined local_db8 [8];
    undefined4 local_db0;
    undefined4 uStack3500;
    longlong local_da8;
    undefined **local_d98;
    undefined4 local_d90;
    longlong local_d88;
    undefined4 local_d80;
    undefined local_d78 [8];
    undefined4 local_d70;
    longlong local_d68;
    undefined local_d38 [1216];
    ulonglong local_878;
    undefined8 local_870;
    undefined8 local_868;
    undefined8 local_860;
    int local_858;
    undefined4 uStack2132;
    undefined4 uStack2128;
    undefined4 uStack2124;
    undefined local_848 [16];
    longlong local_838;
    undefined4 local_830;
    undefined4 local_82c;
    undefined4 local_828;
    undefined4 local_824;
    undefined4 local_820;
    undefined4 local_81c;
    undefined4 local_818;
    undefined4 local_814;
    undefined8 *local_810;
    undefined4 local_808;
    undefined4 local_804;
    undefined4 local_800;
    longlong local_7f8;
    undefined8 *local_7f0;
    undefined4 local_7e8;
    longlong local_7e0;
    ulonglong *local_7d8;
    longlong *local_6d8;
    longlong local_6d0;
    ulonglong local_3f0;
    undefined *local_3e8;
    longlong local_3d8;
    int local_238;
    int local_234;
    undefined local_218 [320];
    undefined local_d8 [64];
    undefined local_98 [80];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack3576;
    if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        goto LAB_1406b43a2;
    }
    local_d98 = &PTR_FUN_140b569f0;
    local_d80 = 1;
    local_d88 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar12 + 1) = 5;
    *puVar12 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar8 = FUN_1400578c0(param_1);
    local_d90 = uVar8;
    FUN_14001b370(local_d8,0x1e,L"%I64u",*(undefined8 *)(param_2 + 8));
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1,puVar12,L"strId",local_d8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar18 = 0;
    if ((*(int *)(param_2 + 0x50) == 0) || (*(longlong *)(param_2 + 0x58) == 0)) {
        LAB_1406b35a1:
        if (((*(int *)(param_2 + 0x30) == 0) || (lVar16 = FUN_1404835c0(DAT_140c65918), lVar16 == 0)) ||
            (puVar13 = (undefined *)FUN_14034bdd0(), puVar13 == (undefined *)0x0)) {
            puVar13 = (undefined *)FUN_14034bdd0();
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
            pwVar19 = L"strSenderName";
        }
        else {
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
            pwVar19 = L"strSenderName";
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        *puVar11 = *puVar12;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar12 + 1);
    }
    else {
        local_dc8 = 0;
        local_870 = &DAT_14062a080;
        local_878 = DAT_140c65898 + 0x6bc8;
        local_dd0 = &local_878;
        local_dd8 = CONCAT44(local_dd8._4_4_,0x21);
        iVar9 = FUN_1403f82f0();
        if (iVar9 == 0) goto LAB_1406b35a1;
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        puVar13 = local_98;
        pwVar19 = L"strSenderName";
        *puVar11 = *puVar12;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar12 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1,puVar11,pwVar19,puVar13);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    if (*(int *)(param_2 + 0x28) == 0) {
        uVar10 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
        uVar10 = FUN_14034bdd0();
    }
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1,puVar12,L"strSubject",uVar10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    if (*(int *)(param_2 + 0x2c) == 0) {
        psVar3 = *(short **)(param_2 + 0x20);
        sVar2 = *psVar3;
        uVar14 = uVar18;
        while (sVar2 != 0) {
            uVar14 = uVar14 + 1;
            sVar2 = psVar3[uVar14];
        }
        lVar16 = (longlong)(uVar14 * 2) >> 1;
        uVar14 = lVar16 + 1;
        uVar15 = uVar18;
        if (uVar14 < 0x7fffffffffffffff) {
            uVar15 = FUN_14018b280(uVar14 * 2,0);
        }
        lVar16 = lVar16 * 2;
        FUN_1407db590(uVar15,psVar3,lVar16);
        puVar1 = (undefined2 *)(uVar15 + lVar16);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        *puVar12 = *puVar11;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar12,L"strBody",uVar15);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    }
    else {
        local_dd8 = local_dd8 & 0xffffffffffffff00;
        FUN_1406b1300(local_db8,*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0x2c),
                      *(undefined8 *)(param_2 + 0x20));
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        uVar15 = CONCAT44(uStack3500,local_db0);
        *puVar12 = *puVar11;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar12,L"strBody",uVar15);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        local_dd8 = CONCAT71(local_dd8._1_7_,1);
        FUN_1406b1300(local_db8,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x2c),
                      *(undefined8 *)(param_2 + 0x20));
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8);
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        lVar16 = CONCAT44(uStack3500,local_db0);
        *puVar12 = *puVar11;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar12,L"strBodyAML",lVar16);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (lVar16 != 0) {
            FUN_14018b900(lVar16,0);
        }
    }
    if (uVar15 != 0) {
        FUN_14018b900(uVar15,0);
    }
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = FUN_14018f0e0(local_db8,L"fDeliveryTime");
    lVar21 = -1;
    if (*(longlong *)(lVar16 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar20 = -1;
        do {
            lVar20 = lVar20 + 1;
        } while (*(char *)(*(longlong *)(lVar16 + 8) + lVar20) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack3500,local_db0) != 0) {
        FUN_14018b900(CONCAT44(uStack3500,local_db0),0);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = 0;
    *(undefined4 *)(puVar12 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    local_868 = (ulonglong)local_868._4_4_ << 0x20;
    FUN_1401e83a0(&local_868,*(undefined8 *)(param_2 + 0x70));
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = FUN_14018f0e0(local_db8,L"fExpirationTime");
    if (*(longlong *)(lVar16 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar20 = -1;
        do {
            lVar20 = lVar20 + 1;
        } while (*(char *)(*(longlong *)(lVar16 + 8) + lVar20) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack3500,local_db0) != 0) {
        FUN_14018b900(CONCAT44(uStack3500,local_db0),0);
    }
    pdVar4 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar4 + 1) = 3;
    *pdVar4 = (double)(float)local_868;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    uStack2132 = 0;
    uStack2128 = 0;
    uStack2124 = 0;
    local_858 = 1;
    puVar12 = (undefined8 *)FUN_140059170(param_1,0x18);
    uVar7 = CONCAT44(uStack2124,uStack2128);
    *puVar12 = uVar10;
    puVar12[1] = CONCAT44(uStack2132,local_858);
    puVar12[2] = uVar7;
    lVar16 = *(longlong *)(param_1 + 0x20);
    local_878 = FUN_140062650(param_1,"Game.Money",10);
    local_870._0_4_ = 4;
    FUN_14005e8e0(param_1,lVar16 + 0xa0,&local_878,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    FUN_1400fb540(&local_d98,L"monCod");
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    local_858 = 1;
    if (*(int *)(param_2 + 0x34) - 1U < 0xe) {
        local_858 = *(int *)(param_2 + 0x34);
    }
    puVar12 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar12 = uVar10;
    puVar12[1] = CONCAT44(uStack2132,local_858);
    puVar12[2] = uVar7;
    lVar16 = *(longlong *)(param_1 + 0x20);
    local_878 = FUN_140062650(param_1,"Game.Money",10);
    local_870 = (undefined *)CONCAT44(local_870._4_4_,4);
    FUN_14005e8e0(param_1,lVar16 + 0xa0,&local_878,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    FUN_1400fb540(&local_d98,L"monGift");
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar22 = *(uint *)(param_2 + 0x4c);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = FUN_14018f0e0(local_db8,L"bIsRead");
    if (*(longlong *)(lVar16 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar20 = -1;
        do {
            lVar20 = lVar20 + 1;
        } while (*(char *)(*(longlong *)(lVar16 + 8) + lVar20) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack3500,local_db0) != 0) {
        FUN_14018b900(CONCAT44(uStack3500,local_db0),0);
    }
    puVar5 = *(uint **)(param_1 + 0x10);
    puVar5[2] = 1;
    *puVar5 = (uint)((uVar22 >> 1 & 1) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar22 = *(uint *)(param_2 + 0x4c);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = FUN_14018f0e0(local_db8,L"bIsSaved");
    if (*(longlong *)(lVar16 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar20 = -1;
        do {
            lVar20 = lVar20 + 1;
        } while (*(char *)(*(longlong *)(lVar16 + 8) + lVar20) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack3500,local_db0) != 0) {
        FUN_14018b900(CONCAT44(uStack3500,local_db0),0);
    }
    puVar5 = *(uint **)(param_1 + 0x10);
    puVar5[2] = 1;
    *puVar5 = (uint)((uVar22 >> 2 & 1) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar22 = *(uint *)(param_2 + 0x4c);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = FUN_14018f0e0(local_db8,L"bIsReturnable");
    if (*(longlong *)(lVar16 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar20 = -1;
        do {
            lVar20 = lVar20 + 1;
        } while (*(char *)(*(longlong *)(lVar16 + 8) + lVar20) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack3500,local_db0) != 0) {
        FUN_14018b900(CONCAT44(uStack3500,local_db0),0);
    }
    puVar5 = *(uint **)(param_1 + 0x10);
    puVar5[2] = 1;
    *puVar5 = (uint)((~(uVar22 >> 3) & 1) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar22 = *(uint *)(param_2 + 0x4c);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = FUN_14018f0e0(local_db8,L"bNoExpiry");
    lVar16 = *(longlong *)(lVar16 + 8);
    if (lVar16 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar21 = lVar21 + 1;
        } while (*(char *)(lVar16 + lVar21) != '\0');
        FUN_140058710(param_1,lVar16,lVar21);
    }
    if (CONCAT44(uStack3500,local_db0) != 0) {
        FUN_14018b900(CONCAT44(uStack3500,local_db0),0);
    }
    puVar5 = *(uint **)(param_1 + 0x10);
    puVar5[2] = 1;
    *puVar5 = (uint)((uVar22 >> 5 & 1) != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0630(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    *puVar12 = *puVar11;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_1400fa0f0(local_db8,param_1,1);
    uVar14 = uVar18;
    do {
        if (*(uint *)(param_2 + 0x60) <= (uint)uVar14) break;
        lVar16 = *(longlong *)(param_2 + 0x68);
        lVar21 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(uVar18 + lVar16),0);
        if (lVar21 != 0) {
            FUN_1400fa0f0(local_d78,param_1,1);
            FUN_14040fae0();
            if (local_238 < 7) {
                local_238 = 6;
                local_6d0 = lVar21;
            }
            uVar22 = *(uint *)(uVar18 + 0x18 + lVar16);
            local_870 = (undefined *)
                    (CONCAT44(uVar22 >> 6,(uint)CONCAT11((char)uVar22,(char)(uVar22 >> 3))) &
                     0x1ffff0707);
            bVar6 = (byte)(uVar22 >> 0x18);
            local_878 = CONCAT17(bVar6 >> 4,
                                 CONCAT16(bVar6 >> 1,
                                          CONCAT15((char)(uVar22 >> 0x16),
                                                   CONCAT14((char)(uVar22 >> 0x13),
                                                            CONCAT13((char)(uVar22 >> 0x10),
                                                                     CONCAT12((char)(uVar22 >> 0xd),
                                                                              CONCAT11((char)(uVar22 >> 10
                                                                              ),(char)(
                                                                                      uVar22 >> 7)))))))) & 0x707070707070707;
            uVar15 = *(ulonglong *)(uVar18 + 0x20 + lVar16);
            local_868 = CONCAT26((short)(uVar15 >> 0x18),
                                 CONCAT24((short)(uVar15 >> 0xe),
                                          CONCAT22((short)(uVar15 >> 4),(short)uVar15))) &
                        0x3ff03ff03ff000f;
            local_858 = 1;
            local_860 = 0;
            FUN_14040bd50(&local_860,*(undefined8 *)(uVar18 + 0x10 + lVar16),lVar21);
            FUN_14041fd30(local_848,0);
            puVar17 = (undefined4 *)FUN_140445210();
            local_830 = *puVar17;
            local_82c = puVar17[1];
            local_828 = puVar17[2];
            local_824 = puVar17[3];
            local_820 = puVar17[4];
            local_81c = puVar17[5];
            local_818 = puVar17[6];
            local_814 = puVar17[7];
            local_808 = *(undefined4 *)(uVar18 + 0x28 + lVar16);
            local_804 = 1;
            local_800 = 5;
            local_7f8 = lVar16 + 0x2c + uVar18;
            local_7e8 = 8;
            local_7f0 = &local_860;
            local_810 = &local_868;
            local_7e0 = lVar16 + 0x40 + uVar18;
            local_7d8 = &local_878;
            local_838 = lVar21;
            FUN_1400b52a0(local_218);
            local_dd0 = (ulonglong *)0x0;
            local_dd8 = 0;
            iVar9 = FUN_14040c310(local_848,local_218,DAT_140c658f0,0);
            if ((iVar9 == 0) && (FUN_140412570(&local_6d8,local_218,0), local_234 < 7)) {
                local_234 = 6;
                local_3f0 = local_878;
                local_3e8 = local_870;
                if ((local_6d8 != (longlong *)0x0) &&
                    ((local_6d8[0xb] != 0 && (*(int *)(local_6d8[0xb] + 8) < 1)))) {
                    local_234 = 0;
                    local_3f0 = 0;
                    local_3e8 = (undefined *)0x0;
                }
            }
            uVar10 = FUN_14040fc60(local_d38,&local_6d8);
            lVar16 = local_d68;
            iVar9 = FUN_140415bb0(local_d68,uVar10);
            if (iVar9 != 0) {
                FUN_1400fb540(local_d78,L"itemAttached");
                *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x10;
            }
            FUN_14040fdf0(uVar10);
            puVar11 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),local_d70);
            puVar12 = *(undefined8 **)(lVar16 + 0x10);
            *puVar12 = *puVar11;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
            FUN_1400f06f0(lVar16,puVar12,L"nStackCount");
            *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x10;
            puVar12 = *(undefined8 **)(lVar16 + 0x10);
            puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0));
            *puVar12 = *puVar11;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
            FUN_1400f06f0(lVar16);
            *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x10;
            FUN_1400fb1d0(local_db8);
            if (local_6d8 != (longlong *)0x0) {
                (**(code **)(*local_6d8 + 8))();
                local_6d8 = (longlong *)0x0;
            }
            if (local_3d8 != 0) {
                FUN_14018b900();
            }
            FUN_1400579e0(lVar16);
        }
        uVar22 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar22;
        uVar18 = uVar18 + 0x60;
    } while (uVar22 < 10);
    FUN_1400fb2a0(&local_d98,L"arAttachments",local_db0);
    puVar11 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_d90);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = *puVar11;
    *puVar12 = uVar10;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_da8 != 0) {
        FUN_1400579e0(local_da8,uVar10,local_db0);
    }
    FUN_1400579e0(param_1);
    LAB_1406b43a2:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack3576);
    return;
}



undefined8 FUN_1406b43c0(undefined8 param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    puVar1 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar1 == (undefined8 *)0x0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *puVar1;
    }
    lVar2 = FUN_140629af0(DAT_140c65898 + 0x6bc8,uVar3);
    if (lVar2 == 0) {
        return 0;
    }
    FUN_1406b33f0(param_1,lVar2);
    return 1;
}



void FUN_1406b4420(undefined8 param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined auStack88 [32];
    char local_38 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
        FUN_1400efdd0(local_38,0x1e);
        lVar3 = -1;
        do {
            lVar1 = lVar3 + 1;
            lVar3 = lVar3 + 1;
        } while (local_38[lVar1] != '\0');
        FUN_140058710(param_1,local_38);
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
    return;
}



undefined8 FUN_1406b44c0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    float local_res10 [6];

    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar2 == (undefined8 *)0x0) {
        uVar4 = 0;
    }
    else {
        uVar4 = *puVar2;
    }
    lVar3 = FUN_140629af0(DAT_140c65898 + 0x6bc8,uVar4);
    if (lVar3 == 0) {
        return 0;
    }
    local_res10[0] = 0.0;
    FUN_1401e83a0(local_res10,*(undefined8 *)(lVar3 + 0x70));
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)local_res10[0];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b4550(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;

    puVar3 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar3 == (undefined8 *)0x0) {
        uVar5 = 0;
    }
    else {
        uVar5 = *puVar3;
    }
    lVar4 = FUN_140629af0(DAT_140c65898 + 0x6bc8,uVar5);
    if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x10);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b45e0(longlong param_1)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    double *pdVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = *(ulonglong *)(DAT_140c65898 + 0x6bf0);
    uVar6 = 0;
    if (uVar2 != 0) {
        do {
            if (uVar6 < *(ulonglong *)(DAT_140c65898 + 0x6bf0)) {
                lVar5 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x6be8) + uVar6 * 8);
            }
            else {
                lVar5 = 0;
            }
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)((int)uVar6 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1406b5ed0(param_1,*(undefined8 *)(lVar5 + 8));
            lVar5 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar5,lVar5 + -0x20,lVar5 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
    }
    return 1;
}



undefined8 FUN_1406b46d0(longlong param_1)

{
    undefined8 *puVar1;
    uint uVar2;
    undefined8 uVar3;
    uint local_res10;
    uint local_res14;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar2 = FUN_140056d60(param_1);
    }
    else {
        uVar2 = 0xffffffff;
    }
    local_res14 = uVar2 & 0xff;
    local_res10 = (uint)((ulonglong)(longlong)(int)uVar2 >> 8) & 0xff;
    if (((local_res10 < 300) && (local_res14 != 0xffffffff)) &&
        (((char)((ulonglong)(longlong)(int)uVar2 >> 8) != '\0' || ((uVar2 & 0xff) < 0x1f)))) {
        uVar3 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
        uVar3 = FUN_140415d60(param_1,uVar3);
        return uVar3;
    }
    return 0;
}



undefined8 FUN_1406b4810(undefined8 param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    puVar1 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar1 == (undefined8 *)0x0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *puVar1;
    }
    FUN_14062acc0(DAT_140c65898 + 0x6bc8,uVar2);
    return 0;
}



undefined8 FUN_1406b4ad0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 uVar3;

    iVar1 = 1;
    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar2 == (undefined8 *)0x0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *puVar2;
    }
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1,2);
    }
    FUN_14062a8c0(DAT_140c65898 + 0x6bc8,uVar3,iVar1 + -1);
    return 0;
}



undefined8 FUN_1406b4b60(undefined8 param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    puVar1 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar1 == (undefined8 *)0x0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *puVar1;
    }
    FUN_14062af50(DAT_140c65898 + 0x6bc8,uVar2);
    return 0;
}



undefined8 FUN_1406b4ba0(undefined8 param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    puVar1 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar1 == (undefined8 *)0x0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *puVar1;
    }
    FUN_14062b000(DAT_140c65898 + 0x6bc8,uVar2);
    return 0;
}



undefined8 FUN_1406b4be0(undefined8 param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *local_18;
    undefined8 local_10;

    puVar1 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (puVar1 == (undefined8 *)0x0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *puVar1;
    }
    local_10 = 1;
    local_18 = (undefined8 *)FUN_14018b280(0x18);
    if (local_18 != (undefined8 *)0x0) {
        local_18[1] = 1;
        *local_18 = &PTR_LAB_140b55060;
    }
    local_18 = local_18 + 2;
    lVar2 = DAT_140c65898 + 0x6bc8;
    *local_18 = uVar3;
    FUN_14062b0b0(lVar2,&local_18);
    if (local_18 != (undefined8 *)0x0) {
        (**(code **)(local_18[-2] + 8))(local_18 + -2);
    }
    return 0;
}



undefined8
FUN_1406b4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;

    uVar4 = 0;
    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(DAT_140c65898 + 0x6bc8));
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) == 0xc)) {
        uVar4 = extraout_XMM0_Qa;
        if ((DAT_140dc4b90 & 1) == 0) {
            DAT_140dc4b90 = DAT_140dc4b90 | 1;
            lVar3 = FUN_140200220(0xed);
            uVar4 = extraout_XMM0_Qa_00;
            if (lVar3 == 0) {
                DAT_140dc4b94 = 0x42480000;
            }
            else {
                DAT_140dc4b94 = *(undefined4 *)(lVar3 + 0x18);
            }
        }
        iVar1 = FUN_14062b670(uVar4,param_2,DAT_140dc4b94,*(undefined8 *)(DAT_140c65898 + 0x78),lVar2,
                              param_5,param_6,0);
        uVar4 = 0;
        if (iVar1 != 0) {
            uVar4 = 1;
        }
    }
    return uVar4;
}



undefined8 FUN_1406b4da0(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_1406b4cf0();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b4de0(undefined8 param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *local_18;
    undefined8 local_10;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.MailSystem");
    if (plVar2 == (longlong *)0x0) {
        lVar4 = 0;
    }
    else {
        lVar4 = *plVar2;
    }
    local_10 = 1;
    plVar2 = (longlong *)FUN_14018b280(0x18);
    if (plVar2 != (longlong *)0x0) {
        plVar2[1] = 1;
        *plVar2 = (longlong)&PTR_LAB_140b55060;
    }
    plVar1 = plVar2 + 2;
    lVar3 = DAT_140c65898 + 0x6bc8;
    *plVar1 = lVar4;
    local_18 = plVar1;
    FUN_14062ad80(lVar3,&local_18);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
    }
    return 0;
}



undefined8 FUN_1406b53a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    double dVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    int local_res8;
    int iStackX12;
    undefined8 *local_a8;
    undefined8 *local_a0;
    undefined local_98 [8];
    int local_90;
    longlong local_88;
    undefined **local_80;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined **local_60;
    undefined4 local_58;
    longlong local_50;
    undefined ***local_48;

    puVar9 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)FUN_14018b280(0x1a0,0);
    puVar8 = puVar9;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0x32;
        *puVar4 = &PTR_LAB_140b55060;
        puVar8 = puVar4;
    }
    local_68 = 1;
    local_78 = 0xfffffffe;
    puVar4 = puVar9;
    if (puVar8 + 2 != (undefined8 *)0x0) {
        puVar4 = puVar8 + 2;
    }
    local_80 = &PTR_FUN_140b569f0;
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    local_a8 = puVar4;
    local_70 = param_1;
    if (((puVar8 < *(undefined8 **)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (*(int *)(puVar8 + 1) == 5)) {
        FUN_1400579e0(param_1);
        puVar7 = &DAT_140a12138;
        puVar8 = *(undefined8 **)(local_70 + 0x10);
        if (*(undefined8 **)(local_70 + 0x18) < puVar8) {
            puVar7 = *(undefined8 **)(local_70 + 0x18);
        }
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + 0x10;
        local_78 = FUN_1400578c0(local_70);
    }
    local_58 = 0xfffffffe;
    local_48 = &local_80;
    local_60 = &PTR_FUN_140b56a08;
    *(undefined4 *)(*(longlong *)(local_70 + 0x10) + 8) = 0;
    *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + 0x10;
    local_50 = local_70;
    FUN_1400fa090(&local_60,0xffffffff);
    uVar11 = 0;
    uVar12 = 0;
    *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + -0x10;
    do {
        iVar3 = (*(code *)(*local_48)[1])();
        if ((iVar3 == 0) || (iVar3 = FUN_1400fcba0(&local_60), iVar3 == 0)) {
            if (puVar9 != (undefined8 *)0x0) {
                FUN_14062ad80(DAT_140c65898 + 0x6bc8,&local_a8);
            }
            LAB_1406b5664:
            local_60 = &PTR_FUN_140b56a08;
            if (local_50 != 0) {
                FUN_1400579e0();
            }
            local_80 = &PTR_FUN_140b56a08;
            if (local_70 != 0) {
                FUN_1400579e0();
            }
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
            }
            return 0;
        }
        FUN_1400fb8d0(&local_60,local_98);
        lVar2 = local_88;
        lVar1 = *(longlong *)(*(longlong *)(local_88 + 0x20) + 0xa0);
        if (local_90 - 1U < *(uint *)(lVar1 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(local_90 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
        }
        else {
            dVar10 = (double)local_90;
            if (dVar10 == (double)CONCAT44(uVar12,uVar11)) {
                puVar8 = *(undefined8 **)(lVar1 + 0x20);
            }
            else {
                iStackX12 = (int)((ulonglong)dVar10 >> 0x20);
                local_res8 = SUB84(dVar10,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar1 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                          (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar10 == (double)puVar8[2])) goto LAB_1406b5599;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_1406b5599:
        puVar7 = *(undefined8 **)(local_88 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(local_88 + 0x10) = *(longlong *)(local_88 + 0x10) + 0x10;
        plVar5 = (longlong *)FUN_140056ab0(local_88,0xffffffff,"Game.MailSystem");
        if ((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) {
            FUN_1400579e0(lVar2);
            goto LAB_1406b5664;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar8 = (undefined8 *)((longlong)puVar9 + 1);
        puVar6 = (undefined8 *)FUN_14018db00(puVar4,puVar8,8);
        puVar6[(longlong)puVar9] = lVar1;
        puVar9 = puVar4;
        puVar7 = local_a8;
        if ((puVar4 != puVar6) &&
            (FUN_1407db590(puVar6,puVar4), puVar9 = puVar6, puVar7 = puVar6, puVar4 != (undefined8 *)0x0)
                ) {
            (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
        }
        local_a8 = puVar7;
        local_a0 = puVar8;
        FUN_1400579e0(lVar2);
        puVar4 = puVar9;
        puVar9 = puVar8;
    } while( true );
}



undefined8 FUN_1406b56f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    double dVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    int local_res8;
    int iStackX12;
    undefined8 *local_a8;
    undefined8 *local_a0;
    undefined local_98 [8];
    int local_90;
    longlong local_88;
    undefined **local_80;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined **local_60;
    undefined4 local_58;
    longlong local_50;
    undefined ***local_48;

    puVar9 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)FUN_14018b280(0x1a0,0);
    puVar8 = puVar9;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0x32;
        *puVar4 = &PTR_LAB_140b55060;
        puVar8 = puVar4;
    }
    local_68 = 1;
    local_78 = 0xfffffffe;
    puVar4 = puVar9;
    if (puVar8 + 2 != (undefined8 *)0x0) {
        puVar4 = puVar8 + 2;
    }
    local_80 = &PTR_FUN_140b569f0;
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    local_a8 = puVar4;
    local_70 = param_1;
    if (((puVar8 < *(undefined8 **)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (*(int *)(puVar8 + 1) == 5)) {
        FUN_1400579e0(param_1);
        puVar7 = &DAT_140a12138;
        puVar8 = *(undefined8 **)(local_70 + 0x10);
        if (*(undefined8 **)(local_70 + 0x18) < puVar8) {
            puVar7 = *(undefined8 **)(local_70 + 0x18);
        }
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + 0x10;
        local_78 = FUN_1400578c0(local_70);
    }
    local_58 = 0xfffffffe;
    local_48 = &local_80;
    local_60 = &PTR_FUN_140b56a08;
    *(undefined4 *)(*(longlong *)(local_70 + 0x10) + 8) = 0;
    *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + 0x10;
    local_50 = local_70;
    FUN_1400fa090(&local_60,0xffffffff);
    uVar11 = 0;
    uVar12 = 0;
    *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + -0x10;
    do {
        iVar3 = (*(code *)(*local_48)[1])();
        if ((iVar3 == 0) || (iVar3 = FUN_1400fcba0(&local_60), iVar3 == 0)) {
            if (puVar9 != (undefined8 *)0x0) {
                FUN_14062aa70(DAT_140c65898 + 0x6bc8,&local_a8);
            }
            LAB_1406b59b4:
            local_60 = &PTR_FUN_140b56a08;
            if (local_50 != 0) {
                FUN_1400579e0();
            }
            local_80 = &PTR_FUN_140b56a08;
            if (local_70 != 0) {
                FUN_1400579e0();
            }
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
            }
            return 0;
        }
        FUN_1400fb8d0(&local_60,local_98);
        lVar2 = local_88;
        lVar1 = *(longlong *)(*(longlong *)(local_88 + 0x20) + 0xa0);
        if (local_90 - 1U < *(uint *)(lVar1 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(local_90 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
        }
        else {
            dVar10 = (double)local_90;
            if (dVar10 == (double)CONCAT44(uVar12,uVar11)) {
                puVar8 = *(undefined8 **)(lVar1 + 0x20);
            }
            else {
                iStackX12 = (int)((ulonglong)dVar10 >> 0x20);
                local_res8 = SUB84(dVar10,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar1 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                          (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar10 == (double)puVar8[2])) goto LAB_1406b58e9;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_1406b58e9:
        puVar7 = *(undefined8 **)(local_88 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(local_88 + 0x10) = *(longlong *)(local_88 + 0x10) + 0x10;
        plVar5 = (longlong *)FUN_140056ab0(local_88,0xffffffff,"Game.MailSystem");
        if ((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) {
            FUN_1400579e0(lVar2);
            goto LAB_1406b59b4;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar8 = (undefined8 *)((longlong)puVar9 + 1);
        puVar6 = (undefined8 *)FUN_14018db00(puVar4,puVar8,8);
        puVar6[(longlong)puVar9] = lVar1;
        puVar9 = puVar4;
        puVar7 = local_a8;
        if ((puVar4 != puVar6) &&
            (FUN_1407db590(puVar6,puVar4), puVar9 = puVar6, puVar7 = puVar6, puVar4 != (undefined8 *)0x0)
                ) {
            (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
        }
        local_a8 = puVar7;
        local_a0 = puVar8;
        FUN_1400579e0(lVar2);
        puVar4 = puVar9;
        puVar9 = puVar8;
    } while( true );
}



undefined8 FUN_1406b5a40(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    double dVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    int local_res8;
    int iStackX12;
    undefined8 *local_a8;
    undefined8 *local_a0;
    undefined local_98 [8];
    int local_90;
    longlong local_88;
    undefined **local_80;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined **local_60;
    undefined4 local_58;
    longlong local_50;
    undefined ***local_48;

    puVar9 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)FUN_14018b280(0x1a0,0);
    puVar8 = puVar9;
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0x32;
        *puVar4 = &PTR_LAB_140b55060;
        puVar8 = puVar4;
    }
    local_68 = 1;
    local_78 = 0xfffffffe;
    puVar4 = puVar9;
    if (puVar8 + 2 != (undefined8 *)0x0) {
        puVar4 = puVar8 + 2;
    }
    local_80 = &PTR_FUN_140b569f0;
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    local_a8 = puVar4;
    local_70 = param_1;
    if (((puVar8 < *(undefined8 **)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (*(int *)(puVar8 + 1) == 5)) {
        FUN_1400579e0(param_1);
        puVar7 = &DAT_140a12138;
        puVar8 = *(undefined8 **)(local_70 + 0x10);
        if (*(undefined8 **)(local_70 + 0x18) < puVar8) {
            puVar7 = *(undefined8 **)(local_70 + 0x18);
        }
        *puVar8 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + 0x10;
        local_78 = FUN_1400578c0(local_70);
    }
    local_58 = 0xfffffffe;
    local_48 = &local_80;
    local_60 = &PTR_FUN_140b56a08;
    *(undefined4 *)(*(longlong *)(local_70 + 0x10) + 8) = 0;
    *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + 0x10;
    local_50 = local_70;
    FUN_1400fa090(&local_60,0xffffffff);
    uVar11 = 0;
    uVar12 = 0;
    *(longlong *)(local_70 + 0x10) = *(longlong *)(local_70 + 0x10) + -0x10;
    do {
        iVar3 = (*(code *)(*local_48)[1])();
        if ((iVar3 == 0) || (iVar3 = FUN_1400fcba0(&local_60), iVar3 == 0)) {
            if (puVar9 != (undefined8 *)0x0) {
                FUN_14062b0b0(DAT_140c65898 + 0x6bc8,&local_a8);
                puVar4 = local_a8;
            }
            LAB_1406b5d08:
            local_60 = &PTR_FUN_140b56a08;
            if (local_50 != 0) {
                FUN_1400579e0();
            }
            local_80 = &PTR_FUN_140b56a08;
            if (local_70 != 0) {
                FUN_1400579e0();
            }
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
            }
            return 0;
        }
        FUN_1400fb8d0(&local_60,local_98);
        lVar2 = local_88;
        lVar1 = *(longlong *)(*(longlong *)(local_88 + 0x20) + 0xa0);
        if (local_90 - 1U < *(uint *)(lVar1 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(local_90 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
        }
        else {
            dVar10 = (double)local_90;
            if (dVar10 == (double)CONCAT44(uVar12,uVar11)) {
                puVar8 = *(undefined8 **)(lVar1 + 0x20);
            }
            else {
                iStackX12 = (int)((ulonglong)dVar10 >> 0x20);
                local_res8 = SUB84(dVar10,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar1 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                          (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar10 == (double)puVar8[2])) goto LAB_1406b5c39;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_1406b5c39:
        puVar7 = *(undefined8 **)(local_88 + 0x10);
        *puVar7 = *puVar8;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(local_88 + 0x10) = *(longlong *)(local_88 + 0x10) + 0x10;
        plVar5 = (longlong *)FUN_140056ab0(local_88,0xffffffff,"Game.MailSystem");
        if ((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) {
            FUN_1400579e0(lVar2);
            goto LAB_1406b5d08;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar8 = (undefined8 *)((longlong)puVar9 + 1);
        puVar6 = (undefined8 *)FUN_14018db00(puVar4,puVar8,8);
        puVar6[(longlong)puVar9] = lVar1;
        puVar9 = puVar4;
        puVar7 = local_a8;
        if ((puVar4 != puVar6) &&
            (FUN_1407db590(puVar6,puVar4), puVar9 = puVar6, puVar7 = puVar6, puVar4 != (undefined8 *)0x0)
                ) {
            (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
        }
        local_a8 = puVar7;
        local_a0 = puVar8;
        FUN_1400579e0(lVar2);
        puVar4 = puVar9;
        puVar9 = puVar8;
    } while( true );
}



undefined8 FUN_1406b5ed0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_140059170(param_1,8);
    *plVar2 = param_2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.MailSystem",0xf);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406b63d0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.PetFlair");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5df70;
    puVar6 = PTR_DAT_140c5df70;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"PetFlair",&PTR_DAT_140b70290);
    return 1;
}



undefined8 FUN_1406b65e0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if ((((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) ||
        (lVar1 = FUN_1407a0fd0(DAT_140c65b70,*(undefined4 *)(lVar1 + 0x10)), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6b54);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406b6676;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0();
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406b6676:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b66a2;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b66a2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b66c0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if ((((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) ||
        (lVar1 = FUN_1407a0fd0(DAT_140c65b70,*(undefined4 *)(lVar1 + 0x10)), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6ae4);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406b6756;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        uVar2 = FUN_14034bdd0();
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406b6756:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b6782;
        }
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b6782:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b67a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if ((((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) ||
        (lVar1 = FUN_1407a0fd0(DAT_140c65b70,*(undefined4 *)(lVar1 + 0x10)), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f6b2c);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_1406b6829;
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar2) != '\0');
    }
    else {
        lVar1 = FUN_14018f0e0(local_28,**(undefined8 **)(lVar1 + 8));
        if (*(longlong *)(lVar1 + 8) == 0) {
            LAB_1406b6829:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1406b6852;
        }
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar2) != '\0');
    }
    FUN_140058710(param_1);
    LAB_1406b6852:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406b6870(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.PetFlair");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
        iVar1 = *(int *)(lVar4 + 0xc);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0x4020000000000000;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b6900(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0x14));
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_1406b69b0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int iVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.PetFlair");
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
        (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 == 0)) {
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 3;
        goto LAB_1406b6a8a;
    }
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar2 = FUN_140056d60();
    }
    else {
        iVar2 = 0;
    }
    iVar5 = 0;
    switch(*(undefined4 *)(lVar3 + 0xc)) {
        case 1:
        case 2:
        case 5:
            bVar6 = iVar2 == 0;
            break;
        case 3:
        case 6:
            bVar6 = iVar2 == 1;
            break;
        case 4:
        case 7:
            if (iVar2 != 2) {
                iVar5 = 0;
                if (iVar2 == 3) {
                    iVar5 = *(int *)(lVar3 + 0x1c);
                }
                goto switchD_1406b6a44_caseD_7;
            }
            goto LAB_1406b6a5e;
        default:
            goto switchD_1406b6a44_caseD_7;
    }
    iVar5 = 0;
    if (bVar6) {
        LAB_1406b6a5e:
        iVar5 = *(int *)(lVar3 + 0x18);
    }
    switchD_1406b6a44_caseD_7:
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar5;
    LAB_1406b6a8a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406b6b50(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.PetCustomization");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5deb0;
    puVar6 = PTR_DAT_140c5deb0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"PetCustomization",&PTR_DAT_140b70270);
    return 1;
}



undefined8 FUN_1406b6d60(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar4 + 8) + 0xc);
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



undefined8 FUN_1406b6de0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.PetCustomization");
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
        if (*(int *)(lVar3 + 8) == 0) {
            lVar3 = FUN_1402215c0(*(undefined4 *)(lVar3 + 0xc));
            if (lVar3 == 0) {
                iVar4 = 0;
            }
            else {
                iVar4 = *(int *)(lVar3 + 0x40);
            }
        }
        else {
            iVar4 = 0;
            if (*(int *)(lVar3 + 8) - 1U < 2) {
                iVar4 = 4;
            }
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}
