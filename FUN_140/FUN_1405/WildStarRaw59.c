//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_14051f300(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    char cVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    undefined8 uVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;

    lVar2 = DAT_140c63650;
    plVar9 = (longlong *)0x0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar1 = *(longlong **)(lVar2 + 0x300);
    plVar8 = plVar9;
    if (plVar1 != (longlong *)0x0) {
        lVar2 = *(longlong *)(lVar2 + 0x2f8);
        plVar10 = plVar9;
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + (longlong)plVar10 * 8) + 400) == param_2) {
                plVar8 = *(longlong **)(lVar2 + (longlong)plVar10 * 8);
                break;
            }
            plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
        } while (plVar10 < plVar1);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x20);
    if (((((puVar5 < *(undefined8 **)(param_2 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
          (*(int *)(*(longlong *)(param_2 + 0x18) + 0x28) == 0)) ||
         ((pplVar6 = (longlong **)FUN_140056ab0(param_2,3,"Game.ItemData"), pplVar6 == (longlong **)0x0
                                                                            || (plVar1 = *pplVar6, plVar1 == (longlong *)0x0)))) ||
        ((*plVar1 == 0 || ((*(int *)(plVar1 + 0x94) == 0 || (plVar1[1] == 0)))))) {
        uVar7 = FUN_140056570(param_2,3,"must be a valid item");
    }
    else {
        uVar4 = FUN_1400f26a0(plVar8 + 0x30,4);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
        cVar3 = FUN_14040f320(uVar4);
        if (5 < (byte)(cVar3 - 1U)) {
            *(undefined4 *)(param_1 + 0x18) = 0;
        }
        if ((longlong **)*pplVar6 != (longlong **)0x0) {
            plVar9 = (longlong *)**pplVar6;
        }
        uVar7 = (**(code **)(*plVar9 + 0x30))(plVar9);
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        uVar7 = 0;
    }
    return uVar7;
}



void FUN_14051f440(longlong param_1)

{
    uint uVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 uVar6;

    if (((*(int *)(param_1 + 0x10) < 300) && (uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0xffffffff))
        && ((uVar6 = 0, *(int *)(param_1 + 0x10) != 0 || (uVar1 < 0x1f)))) {
        uVar3 = FUN_1403b8f00(uVar1,param_1 + 0x10);
        lVar5 = DAT_140c65898;
        lVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0,param_1 + 0x10);
        if (lVar4 != 0) {
            uVar6 = **(undefined4 **)(lVar4 + 0x40);
        }
        uVar2 = *(undefined8 *)(lVar5 + 0x7340);
        lVar5 = FUN_1400b5df0(DAT_140c658f0,uVar6,0);
        if (lVar5 != 0) {
            FUN_1400ea3e0(uVar2,"CostumeUnlockResult",&DAT_1409ef8bc,lVar5,uVar3);
        }
    }
    return;
}



undefined8 * FUN_14051f8e0(longlong param_1,undefined8 *param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18 [16];

    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
            piVar5 = (int *)FUN_1400cb3d0(uVar4,local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *)param_2 = piVar5[2] - *piVar5;
            *(int *)((longlong)param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}



undefined8 FUN_14051f960(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;

    uVar4 = 0;
    lVar2 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x10),0);
    if (lVar2 == 0) {
        return 0;
    }
    iVar3 = 1;
    if (1 < *(int *)(lVar2 + 8)) {
        iVar3 = *(int *)(lVar2 + 8);
    }
    iVar1 = 7;
    if (iVar3 < 7) {
        iVar1 = iVar3;
    }
    if (iVar1 == 1) {
        uVar4 = 100;
    }
    else if (1 < iVar1) {
        if (iVar1 < 4) {
            return 0xfa;
        }
        if (iVar1 < 8) {
            return 1000;
        }
    }
    return uVar4;
}



undefined8 FUN_14051f9e0(longlong param_1,longlong param_2)

{
    uint *puVar1;
    undefined4 uVar2;
    int iVar3;

    uVar2 = FUN_140056d60(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    iVar3 = FUN_1403b91d0();
    if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar1 = *(uint **)(param_2 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    return 1;
}



void FUN_14051fa40(longlong param_1)

{
    undefined8 uVar1;
    undefined4 uVar2;
    longlong lVar3;

    if (*(int *)(param_1 + 0x10) != 0) {
        uVar2 = FUN_1403b90b0();
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        lVar3 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x10),0);
        if (lVar3 != 0) {
            FUN_1400ea3e0(uVar1,"CostumeForgetResult",&DAT_1409ef8a4,lVar3,uVar2);
        }
    }
    return;
}



undefined8 FUN_14051fdf0(longlong param_1,longlong param_2)

{
    uint *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;

    lVar3 = FUN_140056ab0(param_2);
    lVar6 = 0;
    if (lVar3 != 0) {
        lVar6 = *(longlong *)(lVar3 + 8);
    }
    *(longlong *)(param_1 + 0x10) = lVar6;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x30);
    puVar5 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(param_2 + 0x10)) {
        puVar5 = puVar4;
    }
    if ((*(int *)(puVar5 + 1) == 0) || ((*(int *)(puVar5 + 1) == 1 && (*(int *)puVar5 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    puVar1 = *(uint **)(param_2 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar6 != 0);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    return 1;
}



void FUN_14051fe90(longlong param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong local_28;
    int local_20;
    int local_14;

    if ((*(longlong *)(param_1 + 0x10) != 0) &&
        ((FUN_14073faf0(*(longlong *)(param_1 + 0x10),&local_28,*(undefined4 *)(param_1 + 0x18)),
                local_14 != 9 ||
                (puVar1 = (ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118),
                        local_28 < *puVar1 || local_28 == *puVar1)))) {
        if (local_20 < 0xf) {
            if (local_20 - 1U < 0xe) {
                uVar2 = *(ulonglong *)(DAT_140c65898 + 0x15f0 + (longlong)local_20 * 8);
            }
            else {
                uVar2 = 0;
            }
            if (uVar2 < local_28) {
                return;
            }
        }
        FUN_14073fe40(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CostumeSaveResult",&DAT_1409ef84c,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8),0xd);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14051ff50(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined8 uVar10;
    undefined local_1f8 [12];
    int local_1ec;
    undefined **local_1d8 [24];
    undefined local_118 [16];
    undefined2 *local_108;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    uVar9 = 0;
    lVar4 = FUN_1400f52e0(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa80,L"UI\\ActionConfirmButton.xml"
            ,L"TooltipBase",0,0,0xfffffffe);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x208))(*(longlong **)(param_1 + 8),lVar4);
    if (((lVar4 != 0) && (lVar5 = FUN_1400d3830(lVar4 + 0x228,L"ActionConfirm_LabelML"), lVar5 != 0))
        && (lVar6 = FUN_1400d3830(lVar4 + 0x228,L"Container"), lVar6 != 0)) {
        FUN_1400b7090(local_1d8,0x6dba5);
        local_1d8[0] = &PTR_FUN_140b69230;
        local_108 = (undefined2 *)0x0;
        local_118 = ZEXT816(0);
        puVar7 = (undefined2 *)FUN_14018b280(0x10);
        local_118 = CONCAT88(puVar7,puVar7);
        local_108 = puVar7 + 8;
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        lVar8 = FUN_14018b280(0x58);
        if (lVar8 != 0) {
            uVar9 = FUN_1404dda70(lVar8,*(int *)(*(longlong *)(param_1 + 0x10) + 8) + 1);
        }
        FUN_1400b7480(local_1d8,uVar9);
        lVar8 = FUN_1400b7660(local_1d8);
        FUN_140514f00(lVar5,lVar6,*(undefined8 *)(lVar8 + 8));
        FUN_1400b7090(local_f8,0x6f329);
        local_f8[0] = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar7 = (undefined2 *)FUN_14018b280(0x10);
        local_28 = puVar7 + 8;
        local_38 = CONCAT88(puVar7,puVar7);
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        lVar5 = FUN_1400b7660(local_f8);
        uVar9 = *(undefined8 *)(lVar5 + 8);
        uVar10 = FUN_14073faf0(*(undefined8 *)(param_1 + 0x10),local_1f8,*(undefined4 *)(param_1 + 0x18)
        );
        FUN_140514ab0(lVar6,uVar9,uVar10);
        iVar3 = FUN_1400cd4c0(lVar6,0);
        lVar5 = FUN_1400cb3d0(lVar6,local_1f8);
        iVar1 = *(int *)(lVar5 + 0xc);
        iVar2 = *(int *)(lVar5 + 4);
        FUN_1400cb3d0();
        iVar3 = (local_1ec - (iVar1 - iVar2)) + iVar3;
        if (iVar3 < local_1ec) {
            iVar3 = local_1ec;
        }
        local_1ec = iVar3;
        FUN_1400cc7c0(lVar4,local_1f8);
        FUN_1400cb690(lVar4);
        FUN_1400cb960(lVar4);
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(local_f8);
        if (local_118._0_8_ != 0) {
            FUN_14018b900(local_118._0_8_,0);
        }
        FUN_1400b7390(local_1d8);
    }
    return;
}



undefined8 FUN_1405201f0(longlong param_1,longlong param_2)

{
    uint *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar2 = FUN_1404f87c0();
    *(longlong *)(param_1 + 0x10) = lVar2;
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x30);
    puVar5 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(param_2 + 0x10)) {
        puVar5 = puVar4;
    }
    uVar3 = 0;
    if ((*(int *)(puVar5 + 1) != 0) && ((*(int *)(puVar5 + 1) != 1 || (*(int *)puVar5 != 0)))) {
        uVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    puVar1 = *(uint **)(param_2 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar2 != 0);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    return 1;
}



void FUN_140520280(longlong param_1)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong local_28;
    int local_20;
    int local_14;

    if ((*(longlong *)(param_1 + 0x10) != 0) &&
        ((FUN_1404fd530(*(longlong *)(param_1 + 0x10),&local_28,*(undefined4 *)(param_1 + 0x18)),
                local_14 != 9 ||
                (puVar1 = (ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118),
                        local_28 < *puVar1 || local_28 == *puVar1)))) {
        if (local_20 < 0xf) {
            if (local_20 - 1U < 0xe) {
                uVar3 = *(ulonglong *)(DAT_140c65898 + 0x15f0 + (longlong)local_20 * 8);
            }
            else {
                uVar3 = 0;
            }
            if (uVar3 < local_28) {
                return;
            }
        }
        iVar2 = FUN_1404fd1c0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
        if (iVar2 != 0) {
            FUN_1400d4040(*(undefined8 *)(param_1 + 8),"CommitCustomizationChangesResult",
                          *(undefined8 *)(param_1 + 8),&DAT_140b7b700);
            return;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140520330(longlong param_1)

{
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined2 *puVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined local_1f8 [12];
    int local_1ec;
    undefined **local_1d8 [24];
    undefined local_118 [16];
    undefined2 *local_108;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    lVar5 = FUN_1400f52e0(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa80,L"UI\\ActionConfirmButton.xml"
            ,L"TooltipBase",0,0,0xfffffffe);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x208))(*(longlong **)(param_1 + 8),lVar5);
    if (((lVar5 != 0) && (lVar6 = FUN_1400d3830(lVar5 + 0x228,L"ActionConfirm_LabelML"), lVar6 != 0))
        && (lVar7 = FUN_1400d3830(lVar5 + 0x228,L"Container"), lVar7 != 0)) {
        FUN_1400b7090(local_f8,0x20d6d);
        local_f8[0] = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar8 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = CONCAT88(puVar8,puVar8);
        local_28 = puVar8 + 8;
        if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = 0;
        }
        lVar9 = FUN_1400b7660(local_f8);
        FUN_140514f00(lVar6,lVar7,*(undefined8 *)(lVar9 + 8));
        FUN_1400b7090(local_1d8,0x20d5c);
        local_1d8[0] = &PTR_FUN_140b69230;
        local_108 = (undefined2 *)0x0;
        local_118 = ZEXT816(0);
        puVar8 = (undefined2 *)FUN_14018b280(0x10);
        local_108 = puVar8 + 8;
        local_118 = CONCAT88(puVar8,puVar8);
        if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = 0;
        }
        lVar6 = FUN_1400b7660(local_1d8);
        uVar3 = *(undefined8 *)(lVar6 + 8);
        uVar10 = FUN_1404fd530(*(undefined8 *)(param_1 + 0x10),local_1f8,*(undefined4 *)(param_1 + 0x18)
        );
        FUN_140514ab0(lVar7,uVar3,uVar10);
        iVar4 = FUN_1400cd4c0(lVar7,0);
        lVar6 = FUN_1400cb3d0(lVar7,local_1f8);
        iVar1 = *(int *)(lVar6 + 0xc);
        iVar2 = *(int *)(lVar6 + 4);
        FUN_1400cb3d0();
        iVar4 = (local_1ec - (iVar1 - iVar2)) + iVar4;
        if (iVar4 < local_1ec) {
            iVar4 = local_1ec;
        }
        local_1ec = iVar4;
        FUN_1400cc7c0(lVar5,local_1f8);
        FUN_1400cb690(lVar5);
        FUN_1400cb960(lVar5);
        if (local_118._0_8_ != 0) {
            FUN_14018b900(local_118._0_8_,0);
        }
        FUN_1400b7390(local_1d8);
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(local_f8);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405205a0(void)

{
    longlong lVar1;

    if ((DAT_140dc32b8 & 1) == 0) {
        DAT_140dc32b8 = DAT_140dc32b8 | 1;
    }
    else if (_DAT_140dc32c4 != 0) goto LAB_1405205f6;
    _DAT_140dc32c4 = 1;
    lVar1 = FUN_140200220(0x51b);
    if (lVar1 == 0) {
        DAT_140dc32c0 = 0;
    }
    else {
        DAT_140dc32c0 = *(int *)(lVar1 + 4);
    }
    LAB_1405205f6:
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1608);
    while( true ) {
        if (lVar1 == 0) {
            return 0;
        }
        if (*(int *)(lVar1 + 8) == DAT_140dc32c0) break;
        lVar1 = *(longlong *)(lVar1 + 0x88);
    }
    return 1;
}



undefined8 FUN_140520640(void)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_1405205a0();
    uVar2 = 500;
    if (iVar1 != 0) {
        uVar2 = 1000;
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140520710(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;

    iVar2 = 0x14a;
    iVar1 = FUN_1404adfe0();
    if (iVar1 != 0) {
        iVar1 = 0;
        if ((DAT_140dc32c8 & 1) == 0) {
            DAT_140dc32c8 = DAT_140dc32c8 | 1;
            _DAT_140dc32d4 = 0;
        }
        if ((DAT_140dc32c8 & 2) == 0) {
            DAT_140dc32c8 = DAT_140dc32c8 | 2;
            _DAT_140dc32dc = 0;
        }
        if (_DAT_140dc32d4 == 0) {
            _DAT_140dc32d4 = 1;
            lVar3 = FUN_140200220(0x51b);
            if (lVar3 == 0) {
                DAT_140dc32d0 = 0;
            }
            else {
                DAT_140dc32d0 = *(int *)(lVar3 + 4);
            }
        }
        lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
        for (lVar4 = *(longlong *)(lVar3 + 0x1608); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x88)) {
            if (*(int *)(lVar4 + 8) == DAT_140dc32d0) {
                iVar2 = DAT_140dc32d8;
                if (_DAT_140dc32dc == 0) {
                    _DAT_140dc32dc = 1;
                    lVar4 = FUN_140200220(0x51b);
                    DAT_140dc32d8 = iVar1;
                    iVar2 = iVar1;
                    if (lVar4 != 0) {
                        DAT_140dc32d8 = *(int *)(lVar4 + 8);
                        iVar2 = DAT_140dc32d8;
                    }
                }
                goto LAB_14052083f;
            }
        }
        iVar2 = DAT_140dc32d0;
        if (_DAT_140dc32d4 == 0) {
            _DAT_140dc32d4 = 1;
            lVar4 = FUN_140200220(0x51b);
            if (lVar4 == 0) {
                DAT_140dc32d0 = 0;
                iVar2 = iVar1;
            }
            else {
                DAT_140dc32d0 = *(int *)(lVar4 + 4);
                iVar2 = DAT_140dc32d0;
            }
        }
        LAB_14052083f:
        uVar5 = FUN_1403acd90(DAT_140c65b70,iVar2,lVar3);
        iVar2 = FUN_1403993c0();
        if ((iVar2 != 0) && (iVar2 != 0x13d)) {
            FUN_1403a12a0(DAT_140c65898,iVar2,uVar5,0);
        }
    }
    FUN_1400d4040(*(undefined8 *)(param_1 + 8),"RapidTransportResult",*(undefined8 *)(param_1 + 8),
                  &DAT_140b6bf84,*(undefined4 *)(param_1 + 0x10),iVar2);
    return;
}



void FUN_140520c10(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar1 = 0x14b;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) == 0) {
        lVar2 = 0;
    }
    else {
        if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (DAT_140c65898 != 0)) {
            lVar2 = FUN_1405a5b90(DAT_140c65898,uVar3);
            if (lVar2 != 0) goto LAB_140520c64;
        }
        lVar2 = FUN_1407a0fd0(DAT_140c65b70,uVar3 & 0xffffffff);
    }
    LAB_140520c64:
    if ((*(uint *)(*(longlong *)(lVar2 + 0x70) + 0x108) & 0x20000000) != 0) {
        uVar1 = FUN_1403994f0();
    }
    FUN_1400d4040(*(undefined8 *)(param_1 + 8),"ServiceTokenCastResult",*(undefined8 *)(param_1 + 8),
                  &DAT_140b6bf84,*(undefined4 *)(param_1 + 0x10),uVar1);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140520f80(longlong param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong local_18;
    undefined4 local_10;

    if (_DAT_140c7d6bc == 0) {
        _DAT_140c7d6bc = 1;
        lVar2 = FUN_140200220(0x523);
        if (lVar2 == 0) {
            DAT_140c7d6b8 = 0;
        }
        else {
            DAT_140c7d6b8 = *(int *)(lVar2 + 4);
        }
    }
    puVar1 = (ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118);
    if (((ulonglong)(longlong)DAT_140c7d6b8 < *puVar1 || (longlong)DAT_140c7d6b8 == *puVar1) &&
    (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        local_10 = 0;
        local_18 = (ulonglong)CONCAT14(0x40,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8));
        FUN_1403f4900(DAT_140c65898,0x15a,&local_18);
        FUN_1400d4040(*(undefined8 *)(param_1 + 8),"WakeHereServiceTokenCompleted",
                      *(undefined8 *)(param_1 + 8),&DAT_140b7b700);
        return;
    }
    return;
}



undefined8 FUN_140521a70(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    double *pdVar3;
    undefined8 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 *puVar13;
    int iVar14;
    int iVar15;
    longlong *plVar16;
    undefined4 *puVar17;
    longlong lVar18;
    longlong *plVar19;
    undefined4 *puVar20;
    undefined4 *puVar21;
    undefined8 local_res18;
    undefined **local_348;
    undefined8 local_340;
    LPVOID local_338;
    undefined **local_328;
    undefined8 local_320;
    LPVOID local_318;
    undefined4 local_308 [96];
    undefined local_188 [384];

    iVar14 = 0;
    plVar1 = *(longlong **)(DAT_140c65898 + 0x7588);
    if (plVar1 == (longlong *)0x0) {
        local_340 = 0;
        local_348 = &PTR_LAB_140b5e648;
        local_338 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_348);
        local_328 = local_348;
        local_res18 = 0x141e66530;
        local_318 = local_338;
        local_320 = local_340;
        iVar14 = FUN_1401971e0(&DAT_140c8ad6c,0xd,&local_res18,&local_328);
        local_348 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_338);
        if (iVar14 != 0) {
            DebugBreak();
        }
    }
    else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        plVar2 = *(longlong **)(param_2 + 0x10);
        plVar16 = (longlong *)(*(longlong *)(param_2 + 0x18) + 0x20);
        plVar19 = &DAT_140a12138;
        if (plVar16 < plVar2) {
            plVar19 = plVar16;
        }
        iVar15 = *(int *)(plVar19 + 1);
        if ((iVar15 == 5) || (iVar15 == 7)) {
            lVar18 = *(longlong *)(*plVar19 + 0x10);
        }
        else {
            lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xe0 + (longlong)iVar15 * 8);
        }
        if (lVar18 != 0) {
            *plVar2 = lVar18;
            *(undefined4 *)(plVar2 + 1) = 5;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        }
        iVar15 = (**(code **)(*plVar1 + 0x140))(plVar1);
        if (0 < iVar15) {
            do {
                pdVar3 = *(double **)(param_2 + 0x10);
                iVar14 = iVar14 + 1;
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar14;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                lVar18 = *(longlong *)(param_2 + 0x10) + -0x10;
                FUN_14005e8e0(param_2,*(longlong *)(param_2 + 0x10) + -0x20,lVar18,lVar18);
                puVar17 = (undefined4 *)FUN_1406f4860(local_188,param_2);
                if ((((uint)puVar17 | (uint)local_308) & 0xf) == 0) {
                    lVar18 = 2;
                    puVar13 = local_308;
                    do {
                        puVar21 = puVar17;
                        puVar20 = puVar13;
                        uVar5 = puVar21[1];
                        uVar6 = puVar21[2];
                        uVar7 = puVar21[3];
                        uVar8 = puVar21[4];
                        uVar9 = puVar21[5];
                        uVar10 = puVar21[6];
                        uVar11 = puVar21[7];
                        *puVar20 = *puVar21;
                        puVar20[1] = uVar5;
                        puVar20[2] = uVar6;
                        puVar20[3] = uVar7;
                        uVar5 = puVar21[8];
                        uVar6 = puVar21[9];
                        uVar7 = puVar21[10];
                        uVar12 = puVar21[0xb];
                        puVar20[4] = uVar8;
                        puVar20[5] = uVar9;
                        puVar20[6] = uVar10;
                        puVar20[7] = uVar11;
                        uVar8 = puVar21[0xc];
                        uVar9 = puVar21[0xd];
                        uVar10 = puVar21[0xe];
                        uVar11 = puVar21[0xf];
                        puVar20[8] = uVar5;
                        puVar20[9] = uVar6;
                        puVar20[10] = uVar7;
                        puVar20[0xb] = uVar12;
                        uVar5 = puVar21[0x10];
                        uVar6 = puVar21[0x11];
                        uVar7 = puVar21[0x12];
                        uVar12 = puVar21[0x13];
                        puVar20[0xc] = uVar8;
                        puVar20[0xd] = uVar9;
                        puVar20[0xe] = uVar10;
                        puVar20[0xf] = uVar11;
                        uVar8 = puVar21[0x14];
                        uVar9 = puVar21[0x15];
                        uVar10 = puVar21[0x16];
                        uVar11 = puVar21[0x17];
                        puVar20[0x10] = uVar5;
                        puVar20[0x11] = uVar6;
                        puVar20[0x12] = uVar7;
                        puVar20[0x13] = uVar12;
                        uVar5 = puVar21[0x18];
                        uVar6 = puVar21[0x19];
                        uVar7 = puVar21[0x1a];
                        uVar12 = puVar21[0x1b];
                        puVar20[0x14] = uVar8;
                        puVar20[0x15] = uVar9;
                        puVar20[0x16] = uVar10;
                        puVar20[0x17] = uVar11;
                        uVar8 = puVar21[0x1c];
                        uVar9 = puVar21[0x1d];
                        uVar10 = puVar21[0x1e];
                        uVar11 = puVar21[0x1f];
                        puVar20[0x18] = uVar5;
                        puVar20[0x19] = uVar6;
                        puVar20[0x1a] = uVar7;
                        puVar20[0x1b] = uVar12;
                        puVar20[0x1c] = uVar8;
                        puVar20[0x1d] = uVar9;
                        puVar20[0x1e] = uVar10;
                        puVar20[0x1f] = uVar11;
                        lVar18 = lVar18 + -1;
                        puVar13 = puVar20 + 0x20;
                        puVar17 = puVar21 + 0x20;
                    } while (lVar18 != 0);
                    uVar5 = puVar21[0x21];
                    uVar6 = puVar21[0x22];
                    uVar7 = puVar21[0x23];
                    uVar8 = puVar21[0x24];
                    uVar9 = puVar21[0x25];
                    uVar10 = puVar21[0x26];
                    uVar11 = puVar21[0x27];
                    uVar4 = *(undefined8 *)(puVar21 + 0x3c);
                    puVar20[0x20] = puVar21[0x20];
                    puVar20[0x21] = uVar5;
                    puVar20[0x22] = uVar6;
                    puVar20[0x23] = uVar7;
                    uVar5 = puVar21[0x28];
                    uVar6 = puVar21[0x29];
                    uVar7 = puVar21[0x2a];
                    uVar12 = puVar21[0x2b];
                    puVar20[0x24] = uVar8;
                    puVar20[0x25] = uVar9;
                    puVar20[0x26] = uVar10;
                    puVar20[0x27] = uVar11;
                    uVar8 = puVar21[0x2c];
                    uVar9 = puVar21[0x2d];
                    uVar10 = puVar21[0x2e];
                    uVar11 = puVar21[0x2f];
                    puVar20[0x28] = uVar5;
                    puVar20[0x29] = uVar6;
                    puVar20[0x2a] = uVar7;
                    puVar20[0x2b] = uVar12;
                    uVar5 = puVar21[0x30];
                    uVar6 = puVar21[0x31];
                    uVar7 = puVar21[0x32];
                    uVar12 = puVar21[0x33];
                    puVar20[0x2c] = uVar8;
                    puVar20[0x2d] = uVar9;
                    puVar20[0x2e] = uVar10;
                    puVar20[0x2f] = uVar11;
                    uVar8 = puVar21[0x34];
                    uVar9 = puVar21[0x35];
                    uVar10 = puVar21[0x36];
                    uVar11 = puVar21[0x37];
                    puVar20[0x30] = uVar5;
                    puVar20[0x31] = uVar6;
                    puVar20[0x32] = uVar7;
                    puVar20[0x33] = uVar12;
                    uVar5 = puVar21[0x38];
                    uVar6 = puVar21[0x39];
                    uVar7 = puVar21[0x3a];
                    uVar12 = puVar21[0x3b];
                    puVar20[0x34] = uVar8;
                    puVar20[0x35] = uVar9;
                    puVar20[0x36] = uVar10;
                    puVar20[0x37] = uVar11;
                    puVar20[0x38] = uVar5;
                    puVar20[0x39] = uVar6;
                    puVar20[0x3a] = uVar7;
                    puVar20[0x3b] = uVar12;
                    *(undefined8 *)(puVar20 + 0x3c) = uVar4;
                    puVar20[0x3e] = puVar21[0x3e];
                }
                else {
                    FUN_1407db590(local_308,puVar17,0x17c);
                }
                FUN_140527760(param_1 + 0x10,local_308);
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                iVar15 = (**(code **)(*plVar1 + 0x140))(plVar1);
            } while (iVar14 < iVar15);
        }
    }
    return 0;
}



undefined8 * FUN_140521d20(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6ac40;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140521d80(longlong param_1,longlong param_2)

{
    int iVar1;
    double *pdVar2;
    double *pdVar3;
    double local_res8 [4];
    double local_18;
    undefined4 local_10;

    pdVar2 = (double *)(*(longlong *)(param_2 + 0x18) + 0x20);
    pdVar3 = (double *)&DAT_140a12138;
    if (pdVar2 < *(double **)(param_2 + 0x10)) {
        pdVar3 = pdVar2;
    }
    if (*(int *)(pdVar3 + 1) != 3) {
        if (*(int *)(pdVar3 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar3 + 0x20,local_res8);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res8[0];
                goto LAB_140521ddc;
            }
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 0;
    }
    LAB_140521ddc:
    *(int *)(param_1 + 0x10) = (int)*pdVar3;
    return 0;
}



void FUN_140521e00(longlong param_1)

{
    undefined4 uVar1;

    if (((*(int *)(param_1 + 0x10) < 4) && (DAT_140c65970 != 0)) &&
        (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        if (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x2ac) == 0) {
            uVar1 = FUN_14056f550(param_1,*(int *)(param_1 + 0x10));
        }
        else {
            uVar1 = 0x3f;
        }
    }
    else {
        uVar1 = 1;
    }
    FUN_1400d4040(*(undefined8 *)(param_1 + 8),"PathUnlockResult",*(undefined8 *)(param_1 + 8),
                  &DAT_140b6b8f8,uVar1);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140521e70(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    longlong lVar8;
    uint uVar9;
    longlong local_1f8;
    undefined8 local_1f0;
    undefined4 local_1e8;
    undefined4 local_1e4;
    undefined **local_1d8 [24];
    undefined local_118 [16];
    undefined2 *local_108;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    lVar4 = FUN_1400f52e0(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa80,L"UI\\ActionConfirmButton.xml"
            ,L"TooltipBase",0,0,0xfffffffe);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x208))(*(longlong **)(param_1 + 8),lVar4);
    if (((lVar4 != 0) && (lVar5 = FUN_1400d3830(lVar4 + 0x228,L"ActionConfirm_LabelML"), lVar5 != 0))
        && (lVar6 = FUN_1400d3830(lVar4 + 0x228,L"Container"), lVar6 != 0)) {
        FUN_1400b7090(local_f8,0xb96ad);
        local_f8[0] = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar7 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = CONCAT88(puVar7,puVar7);
        local_28 = puVar7 + 8;
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        lVar8 = FUN_1400b7660(local_f8);
        FUN_140514f00(lVar5,lVar6,*(undefined8 *)(lVar8 + 8));
        if ((DAT_140dc32e0 & 1) == 0) {
            DAT_140dc32e0 = DAT_140dc32e0 | 1;
            _DAT_140dc32ec = 0;
        }
        FUN_1400b7090(local_1d8,0xafa93);
        local_1d8[0] = &PTR_FUN_140b69230;
        local_108 = (undefined2 *)0x0;
        local_118 = ZEXT816(0);
        puVar7 = (undefined2 *)FUN_14018b280(0x10);
        local_108 = puVar7 + 8;
        local_118 = CONCAT88(puVar7,puVar7);
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        if (_DAT_140dc32ec == 0) {
            _DAT_140dc32ec = 1;
            lVar5 = FUN_140200220(0x93d);
            if (lVar5 == 0) {
                DAT_140dc32e8 = 0;
            }
            else {
                DAT_140dc32e8 = *(int *)(lVar5 + 4);
            }
        }
        local_1f8 = (longlong)DAT_140dc32e8;
        local_1f0 = 0xf;
        local_1e8 = 0;
        local_1e4 = 9;
        lVar5 = FUN_1400b7660(local_1d8);
        FUN_140514ab0(lVar6,*(undefined8 *)(lVar5 + 8),&local_1f8);
        iVar3 = FUN_1400cd4c0(lVar6,0);
        lVar5 = FUN_1400cb3d0(lVar6,&local_1f8);
        iVar1 = *(int *)(lVar5 + 0xc);
        iVar2 = *(int *)(lVar5 + 4);
        FUN_1400cb3d0();
        uVar9 = (local_1f0._4_4_ - (iVar1 - iVar2)) + iVar3;
        if ((int)uVar9 < (int)local_1f0._4_4_) {
            uVar9 = local_1f0._4_4_;
        }
        local_1f0 = local_1f0 & 0xffffffff | (ulonglong)uVar9 << 0x20;
        FUN_1400cc7c0(lVar4,&local_1f8);
        FUN_1400cb690(lVar4);
        FUN_1400cb960(lVar4);
        if (local_118._0_8_ != 0) {
            FUN_14018b900(local_118._0_8_,0);
        }
        FUN_1400b7390(local_1d8);
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(local_f8);
    }
    return;
}



undefined8 FUN_140522130(longlong param_1,longlong param_2)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    double *pdVar4;
    double local_res8 [4];
    double local_18;
    undefined4 local_10;

    pdVar2 = (double *)(*(longlong *)(param_2 + 0x18) + 0x20);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar2 < *(double **)(param_2 + 0x10)) {
        pdVar4 = pdVar2;
    }
    if (*(int *)(pdVar4 + 1) == 3) {
        LAB_14052218c:
        iVar1 = (int)*pdVar4;
    }
    else {
        if (*(int *)(pdVar4 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res8);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res8[0];
                goto LAB_14052218c;
            }
        }
        iVar1 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar1;
    lVar3 = FUN_140527540();
    if (lVar3 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 1;
    }
    return 0;
}



void FUN_1405221c0(longlong param_1)

{
    undefined4 uVar1;

    if (((*(int *)(param_1 + 0x10) < 4) && (DAT_140c65970 != 0)) &&
        (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        if (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x2ac) == 0) {
            uVar1 = FUN_14056f650(param_1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
        }
        else {
            uVar1 = 0x3f;
        }
    }
    else {
        uVar1 = 1;
    }
    FUN_1400d4040(*(undefined8 *)(param_1 + 8),"PathChangeResult",*(undefined8 *)(param_1 + 8),
                  &DAT_140b6b8f8,uVar1);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140522240(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    longlong lVar8;
    uint uVar9;
    longlong local_1f8;
    undefined8 local_1f0;
    undefined4 local_1e8;
    undefined4 local_1e4;
    undefined **local_1d8 [24];
    undefined local_118 [16];
    undefined2 *local_108;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    lVar4 = FUN_1400f52e0(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa80,L"UI\\ActionConfirmButton.xml"
            ,L"TooltipBase",0,0,0xfffffffe);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x208))(*(longlong **)(param_1 + 8),lVar4);
    if (((lVar4 != 0) && (lVar5 = FUN_1400d3830(lVar4 + 0x228,L"ActionConfirm_LabelML"), lVar5 != 0))
        && (lVar6 = FUN_1400d3830(lVar4 + 0x228,L"Container"), lVar6 != 0)) {
        FUN_1400b7090(local_f8,0xb96ae);
        local_f8[0] = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar7 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = CONCAT88(puVar7,puVar7);
        local_28 = puVar7 + 8;
        if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
        }
        lVar8 = FUN_1400b7660(local_f8);
        FUN_140514f00(lVar5,lVar6,*(undefined8 *)(lVar8 + 8));
        if (*(int *)(param_1 + 0x14) != 0) {
            if ((DAT_140dc32f0 & 1) == 0) {
                DAT_140dc32f0 = DAT_140dc32f0 | 1;
                _DAT_140dc32fc = 0;
            }
            FUN_1400b7090(local_1d8,0xafa93);
            local_1d8[0] = &PTR_FUN_140b69230;
            local_108 = (undefined2 *)0x0;
            local_118 = ZEXT816(0);
            puVar7 = (undefined2 *)FUN_14018b280(0x10);
            local_118 = CONCAT88(puVar7,puVar7);
            local_108 = puVar7 + 8;
            if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = 0;
            }
            if (_DAT_140dc32fc == 0) {
                _DAT_140dc32fc = 1;
                lVar5 = FUN_140200220(0x93e);
                if (lVar5 == 0) {
                    DAT_140dc32f8 = 0;
                }
                else {
                    DAT_140dc32f8 = *(int *)(lVar5 + 8);
                }
            }
            local_1f8 = (longlong)DAT_140dc32f8;
            local_1f0 = 0xf;
            local_1e8 = 0;
            local_1e4 = 9;
            lVar5 = FUN_1400b7660(local_1d8);
            FUN_140514ab0(lVar6,*(undefined8 *)(lVar5 + 8),&local_1f8);
            if (local_118._0_8_ != 0) {
                FUN_14018b900(local_118._0_8_,0);
            }
            FUN_1400b7390(local_1d8);
        }
        iVar3 = FUN_1400cd4c0(lVar6,0);
        lVar5 = FUN_1400cb3d0(lVar6,&local_1f8);
        iVar1 = *(int *)(lVar5 + 0xc);
        iVar2 = *(int *)(lVar5 + 4);
        FUN_1400cb3d0();
        uVar9 = (local_1f0._4_4_ - (iVar1 - iVar2)) + iVar3;
        if ((int)uVar9 < (int)local_1f0._4_4_) {
            uVar9 = local_1f0._4_4_;
        }
        local_1f0 = local_1f0 & 0xffffffff | (ulonglong)uVar9 << 0x20;
        FUN_1400cc7c0(lVar4,&local_1f8);
        FUN_1400cb690(lVar4);
        FUN_1400cb960(lVar4);
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(local_f8);
    }
    return;
}



undefined8 FUN_140522520(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined4 uVar6;

    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar2 = FUN_140056ab0(param_2,3,"Game.Decor");
    if ((lVar2 != 0) && (DAT_140c659f0 != 0)) {
        if (*(longlong *)(lVar2 + 0x10) == 0) {
            lVar2 = FUN_1404c9b90();
        }
        else {
            lVar2 = FUN_1404b6e50();
        }
        if (lVar2 != 0) {
            puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x30);
            puVar5 = &DAT_140a12138;
            if (puVar3 < *(undefined8 **)(param_2 + 0x10)) {
                puVar5 = puVar3;
            }
            if ((*(int *)(puVar5 + 1) != 0) && ((*(int *)(puVar5 + 1) != 1 || (*(int *)puVar5 != 0)))) {
                uVar6 = 1;
            }
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x58);
            uVar1 = *(undefined4 *)(lVar2 + 0x1f0);
            *(undefined4 *)(param_1 + 0x1c) = uVar6;
            *(undefined4 *)(param_1 + 0x18) = uVar1;
            return 0;
        }
    }
    uVar4 = FUN_140056570(param_2,3,"not a valid decor");
    return uVar4;
}



void FUN_140522600(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar1 = FUN_1404c9b90(param_1,*(undefined4 *)(param_1 + 0x18));
    }
    else {
        lVar1 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar1 == 0) {
            return;
        }
        lVar1 = FUN_1404c9e20();
    }
    if (lVar1 != 0) {
        FUN_1404b8110();
        FUN_1400d4040(*(undefined8 *)(param_1 + 8),"HousingColorShifted",*(undefined8 *)(param_1 + 8),
                      &DAT_140b7b700);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140522680(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    longlong lVar8;
    uint uVar9;
    undefined auStack616 [32];
    undefined8 local_248;
    undefined4 local_240;
    undefined local_238 [8];
    undefined8 local_230;
    undefined8 local_228;
    undefined **local_218 [24];
    undefined local_158 [16];
    undefined2 *local_148;
    undefined **local_138 [24];
    undefined local_78 [16];
    undefined2 *local_68;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack616;
    lVar5 = 0;
    if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = FUN_1404c9b90(param_1,*(undefined4 *)(param_1 + 0x18));
    }
    else {
        lVar4 = FUN_1405b1510();
        if (lVar4 != 0) {
            lVar5 = FUN_1404c9e20();
        }
    }
    if (lVar5 != 0) {
        local_230 = 1;
        local_50 = 1;
        local_48 = 0;
        local_58 = 0;
        local_38 = 1;
        local_228 = 0;
        local_30 = 0;
        local_40 = 0;
        iVar2 = FUN_1404b8680(lVar5,*(undefined4 *)(lVar5 + 0x2a0),&local_58,
                              *(undefined4 *)(param_1 + 0x1c));
        if (-1 < iVar2) {
            local_240 = 0xfffffffe;
            local_248 = 0;
            lVar5 = FUN_1400f52e0(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa80,
                                  L"UI\\ActionConfirmButton.xml",L"TooltipBase",0);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x208))(*(longlong **)(param_1 + 8),lVar5);
            if (((lVar5 != 0) &&
                 (lVar4 = FUN_1400d3830(lVar5 + 0x228,L"ActionConfirm_LabelML"), lVar4 != 0)) &&
                (lVar6 = FUN_1400d3830(lVar5 + 0x228,L"Container"), lVar6 != 0)) {
                FUN_1400b7090(local_138,0xbae52);
                local_138[0] = &PTR_FUN_140b69230;
                local_68 = (undefined2 *)0x0;
                local_78 = ZEXT816(0);
                puVar7 = (undefined2 *)FUN_14018b280(0x10);
                local_78 = CONCAT88(puVar7,puVar7);
                local_68 = puVar7 + 8;
                if (puVar7 != (undefined2 *)0x0) {
                    *puVar7 = 0;
                }
                lVar8 = FUN_1400b7660(local_138);
                FUN_140514f00(lVar4,lVar6,*(undefined8 *)(lVar8 + 8));
                iVar2 = FUN_1403d8c80(&local_58);
                if (iVar2 != 0) {
                    FUN_1400b7090(local_218,0xafa93);
                    local_218[0] = &PTR_FUN_140b69230;
                    local_148 = (undefined2 *)0x0;
                    local_158 = ZEXT816(0);
                    puVar7 = (undefined2 *)FUN_14018b280(0x10);
                    local_158 = CONCAT88(puVar7,puVar7);
                    local_148 = puVar7 + 8;
                    if (puVar7 != (undefined2 *)0x0) {
                        *puVar7 = 0;
                    }
                    lVar4 = FUN_1400b7660(local_218);
                    FUN_140514ab0(lVar6,*(undefined8 *)(lVar4 + 8),&local_58);
                    if (local_158._0_8_ != 0) {
                        FUN_14018b900(local_158._0_8_,0);
                    }
                    FUN_1400b7390(local_218);
                }
                iVar2 = FUN_1403d8c80(&local_40);
                if (iVar2 != 0) {
                    FUN_1400b7090(local_218,0xafa93);
                    local_218[0] = &PTR_FUN_140b69230;
                    local_148 = (undefined2 *)0x0;
                    local_158 = ZEXT816(0);
                    puVar7 = (undefined2 *)FUN_14018b280(0x10);
                    local_158 = CONCAT88(puVar7,puVar7);
                    local_148 = puVar7 + 8;
                    if (puVar7 != (undefined2 *)0x0) {
                        *puVar7 = 0;
                    }
                    lVar4 = FUN_1400b7660(local_218);
                    FUN_140514ab0(lVar6,*(undefined8 *)(lVar4 + 8),&local_40);
                    if (local_158._0_8_ != 0) {
                        FUN_14018b900(local_158._0_8_,0);
                    }
                    FUN_1400b7390(local_218);
                }
                iVar3 = FUN_1400cd4c0(lVar6,0);
                lVar4 = FUN_1400cb3d0(lVar6,local_238);
                iVar2 = *(int *)(lVar4 + 0xc);
                iVar1 = *(int *)(lVar4 + 4);
                FUN_1400cb3d0();
                uVar9 = (local_230._4_4_ - (iVar2 - iVar1)) + iVar3;
                if ((int)uVar9 < (int)local_230._4_4_) {
                    uVar9 = local_230._4_4_;
                }
                local_230 = local_230 & 0xffffffff | (ulonglong)uVar9 << 0x20;
                FUN_1400cc7c0(lVar5,local_238);
                FUN_1400cb690(lVar5);
                FUN_1400cb960(lVar5);
                if (local_78._0_8_ != 0) {
                    FUN_14018b900(local_78._0_8_,0);
                }
                FUN_1400b7390(local_138);
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack616);
    return;
}



void FUN_140522c10(longlong param_1)

{
    longlong lVar1;

    if (*(int *)(param_1 + 0x10) != 0) {
        FUN_1404b8f30(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
        FUN_1400d4040(*(undefined8 *)(param_1 + 8),"HousingColorShifted",*(undefined8 *)(param_1 + 8),
                      &DAT_140b7b700);
        return;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar1 = FUN_1404c9b90(param_1,*(undefined4 *)(param_1 + 0x20));
    }
    else {
        lVar1 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar1 == 0) {
            return;
        }
        lVar1 = FUN_1404c9e20();
    }
    if (lVar1 != 0) {
        FUN_1404b8b40();
        FUN_1400d4040(*(undefined8 *)(param_1 + 8),"HousingColorShifted",*(undefined8 *)(param_1 + 8),
                      &DAT_140b7b700);
    }
    return;
}



undefined8 FUN_1405239b0(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;

    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar1 = (undefined8 *)FUN_1406e8880(param_2,3);
    if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1);
        }
        if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        }
        *(undefined8 **)(param_1 + 0x10) = puVar1;
    }
    FUN_1406e6910(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18,param_1 + 0x28,param_1 + 0x38,
                  param_1 + 0x50,param_1 + 0x68,param_1 + 0x80);
    return 0;
}



void FUN_140523a60(longlong param_1)

{
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;

    if ((*(longlong *)(param_1 + 0x20) != 0) || (*(longlong *)(param_1 + 0x30) != 0)) {
        if (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_1 + 0x30)) {
            local_28 = (ulonglong)*(uint *)(param_1 + 0x20);
            local_20 = *(undefined8 *)(param_1 + 0x18);
            local_18 = *(undefined8 *)(param_1 + 0x28);
            FUN_1403f4900(DAT_140c65898,0x72,&local_28);
        }
        FUN_1406e6ad0(*(undefined8 *)(param_1 + 0x10));
        FUN_1400d4040(*(undefined8 *)(param_1 + 8),"PrimalMatrixSaving",*(undefined8 *)(param_1 + 8),
                      &DAT_140b6b8f8);
        if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            *(undefined8 *)(param_1 + 0x10) = 0;
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    return;
}



undefined8 * FUN_140523fa0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6a9c0;
    lVar1 = param_1[5];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140524160(void)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined local_58 [48];

    psVar4 = (short *)FUN_14034bdd0();
    lVar7 = 0;
    sVar3 = *psVar4;
    lVar8 = lVar7;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = psVar4[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    lVar5 = lVar7;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar5 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(lVar5,psVar4,lVar8);
    puVar2 = (undefined2 *)(lVar8 + lVar5);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    psVar4 = (short *)FUN_14034bdd0();
    sVar3 = *psVar4;
    lVar8 = lVar7;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = psVar4[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    lVar6 = lVar7;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(lVar6,psVar4,lVar8);
    puVar2 = (undefined2 *)(lVar8 + lVar6);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    psVar4 = (short *)FUN_14034bdd0();
    sVar3 = *psVar4;
    lVar8 = lVar7;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = psVar4[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar7 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(lVar7,psVar4,lVar8);
    puVar2 = (undefined2 *)(lVar8 + lVar7);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    FUN_1407e4830(local_58,0,0x30);
    FUN_140584490();
    if (lVar7 != 0) {
        FUN_14018b900(lVar7,0);
    }
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    return;
}



undefined8 * FUN_1405246b0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6aa60;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140524710(longlong param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_1404b87b0(param_1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    FUN_1400d4040(*(undefined8 *)(param_1 + 8),"CommunityRenameResult",*(undefined8 *)(param_1 + 8),
                  &DAT_140b6b8f8,uVar1);
    return;
}



undefined8 * FUN_140524ac0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6aa10;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140524b20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    longlong lVar1;
    char cVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined2 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    int iVar10;
    undefined8 uVar11;
    undefined extraout_XMM0 [16];
    undefined auVar13 [16];
    undefined in_XMM6_Ba;
    byte bVar16;
    undefined in_XMM6_Bb;
    undefined uVar17;
    undefined in_XMM6_Bc;
    undefined uVar18;
    undefined in_XMM6_Bd;
    undefined uVar19;
    undefined in_XMM6_Be;
    undefined uVar20;
    undefined in_XMM6_Bf;
    undefined uVar21;
    undefined in_XMM6_Bg;
    undefined uVar22;
    undefined in_XMM6_Bh;
    undefined uVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined4 auStack1560 [314];
    undefined8 uStack304;
    undefined auStack296 [32];
    undefined8 local_108;
    undefined8 local_100;
    undefined8 local_f8;
    undefined8 local_e8 [2];
    undefined local_d8 [16];
    undefined8 local_c8;
    undefined local_c0;
    undefined local_b8 [16];
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined8 local_88;
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    ulonglong local_60;
    undefined auVar12 [12];
    undefined auVar14 [16];
    undefined auVar15 [16];

    local_60 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    lVar8 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = param_6;
    uStack304 = 0x140524b78;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b6c180;
    uStack304 = 0x140524b8e;
    FUN_1400c35f0(param_1 + 0x80);
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0xffffffffffffffff;
    iVar10 = 7;
    puVar7 = param_1 + 0xbe;
    do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        uStack304 = 0x140524bd5;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar7[-1] = puVar5;
        *puVar7 = puVar5;
        puVar7[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        uVar4 = DAT_140c63664;
        local_b8 = ZEXT416(DAT_140c63664);
        puVar7[-4] = 0;
        *(undefined4 *)((longlong)puVar7 + -0x14) = 0x3f800000;
        *(uint *)(puVar7 + -3) = uVar4;
        puVar7 = puVar7 + 6;
        iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    param_1[0xea] = 0;
    param_1[0xeb] = 0;
    param_1[0xec] = 0;
    param_1[0xed] = 0;
    local_78 = 0xffffffffffe0e0e0;
    param_1[0x36] = param_1[0x36] | 0x40000000000;
    local_70 = 0xffffffffffe0e0e0;
    local_68 = 0xff808080;
    if ((*(byte *)((longlong)param_1 + 0x1d) & 0x80) == 0) {
        uStack304 = 0x140524c6c;
        puVar6 = (undefined4 *)FUN_1400cb0e0(param_1,local_d8,param_1 + 8);
        *(undefined4 *)((longlong)param_1 + 0x18c) = *puVar6;
        *(undefined4 *)(param_1 + 0x32) = puVar6[1];
        *(undefined4 *)((longlong)param_1 + 0x194) = puVar6[2];
        *(undefined4 *)(param_1 + 0x33) = puVar6[3];
        *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 0x80;
        puVar7 = param_1;
        do {
            local_b8 = extraout_XMM0;
            if (*(int *)(puVar7 + 0x31) == 0) break;
            *(undefined4 *)(puVar7 + 0x31) = 0;
            puVar7 = (undefined8 *)puVar7[2];
        } while (puVar7 != (undefined8 *)0x0);
    }
    local_b8 = local_b8 & (undefined  [16])0x0;
    local_a8 = ZEXT816(0);
    local_d8._0_12_ =
            CONCAT48(*(int *)((longlong)param_1 + 0x194) - *(int *)((longlong)param_1 + 0x18c),
                     local_d8._0_8_);
    local_d8 = CONCAT412(*(int *)(param_1 + 0x33) - *(int *)(param_1 + 0x32),local_d8._0_12_);
    local_d8 = local_d8 & (undefined  [16])0xffffffffffffffff;
    local_c8 = 0;
    local_c0 = 0;
    local_88 = 0;
    uStack304 = 0x140524d11;
    local_98 = local_b8;
    FUN_14010b330(&local_c8,param_1[4],param_4);
    uStack304 = 0x140524d21;
    FUN_1400c3730(param_1 + 0x80,&local_c8);
    uStack304 = 0x140524d32;
    FUN_1400c3ad0(param_1 + 0x80,local_d8);
    lVar9 = 6;
    fVar24 = 0.003921569;
    fVar25 = 0.003921569;
    fVar26 = 0.003921569;
    fVar27 = 0.003921569;
    uVar4 = CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba)));
    bVar16 = (byte)uVar4;
    uVar17 = (undefined)(uVar4 >> 8);
    uVar18 = (undefined)(uVar4 >> 0x10);
    uVar19 = (undefined)(uVar4 >> 0x18);
    uVar4 = CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be)));
    uVar20 = (undefined)uVar4;
    uVar21 = (undefined)(uVar4 >> 8);
    uVar22 = (undefined)(uVar4 >> 0x10);
    uVar23 = (undefined)(uVar4 >> 0x18);
    puVar7 = param_1 + 0xb4;
    do {
        uStack304 = 0x140524d5e;
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar7);
        uVar3 = *(undefined4 *)(((longlong)auStack1560 - (longlong)param_1) + (longlong)puVar7);
        uVar11 = CONCAT44(uVar3,uVar3);
        auVar12 = CONCAT48(uVar3,uVar11);
        auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar23,CONCAT114((char)((uint)uVar3 >> 0x18),
                                                                                                                                                SUB1614(CONCAT412(uVar3,auVar12)
                                                                                                                                                        ,0))) >> 0x70,0),
                                                                                                               CONCAT113(uVar22,SUB1613(CONCAT412(uVar3,auVar12),
                                                                                                                                        0))) >> 0x68,0),
                                                                                              CONCAT112((char)((uint)uVar3 >> 0x10),auVar12)) >>
                                                                                                                                              0x60,0),CONCAT111(uVar21,SUB1211(auVar12,0))) >>
                                                                                                                                                                                            0x58,0),CONCAT110((char)((uint)uVar3 >> 8),
                                                                                                                                                                                                              SUB1210(auVar12,0))) >> 0x50,0),
                                                                     CONCAT19(uVar20,SUB129(auVar12,0))) >> 0x48,0),
                                                    CONCAT18((char)uVar3,uVar11)) >> 0x40,0),uVar19),
                           ((uint7)uVar11 >> 0x18) << 0x30);
        auVar14 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30,0),uVar18),((uint5)uVar11 >> 0x10) << 0x20
        );
        auVar13 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar14 >> 0x20,0),uVar17),
                                              ((uint3)uVar3 >> 8) << 0x10) >> 0x10,0),
                            (ushort)uVar3 & 0xff | (ushort)bVar16 << 8);
        iVar10 = SUB164(CONCAT214(CONCAT11(uVar23,uVar22),
                                  CONCAT212(SUB162(auVar15 >> 0x30,0),SUB1612(auVar13,0))) >> 0x60,0);
        auVar14 = CONCAT610(SUB166(CONCAT412(iVar10,CONCAT210(CONCAT11(uVar21,uVar20),SUB1610(auVar13,0)
                            )) >> 0x50,0),
                            CONCAT28(SUB162(auVar14 >> 0x20,0),SUB168(auVar13,0)));
        local_d8 = CONCAT412((float)iVar10 * fVar27,
                             CONCAT48((float)(SUB164(auVar13,0) & 0xffff |
                                              (uint)CONCAT11(uVar17,bVar16) << 0x10) * fVar26,
                                      CONCAT44((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar14 >> 0x40,0
                                               ),CONCAT11(uVar19,
                                                          uVar18)),(SUB166(auVar13,0) >> 0x10) << 0x20) >>
                                                                                                        0x20,0) * fVar25,
                                               (float)SUB164(auVar14 >> 0x40,0) * fVar24)));
        uStack304 = 0x140524d96;
        uVar3 = FUN_140141f10(DAT_140c63678);
        *(undefined4 *)puVar7 = uVar3;
        lVar9 = lVar9 + -1;
        puVar7 = (undefined8 *)((longlong)puVar7 + 4);
    } while (lVar9 != 0);
    local_d8._0_8_ = CONCAT44(uRam0000000140c777d4,_DAT_140c777d0);
    local_d8._0_12_ = CONCAT48(uRam0000000140c777d8,local_d8._0_8_);
    local_d8 = CONCAT412(uRam0000000140c777dc,local_d8._0_12_);
    uStack304 = 0x140524dc0;
    FUN_1401429a0(DAT_140c63678,*(undefined4 *)(param_1 + 0xea));
    uStack304 = 0x140524dd1;
    uVar3 = FUN_140141f10(DAT_140c63678,local_d8);
    lVar9 = DAT_140c63678;
    *(undefined4 *)(param_1 + 0xea) = uVar3;
    uStack304 = 0x140524dea;
    uVar4 = FUN_140142170(lVar9,L"ItemQuality_Inferior");
    puVar7 = (undefined8 *)((longlong)param_1 + 0x754);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x140524e0b;
        FUN_1401429a0(DAT_140c63678,*(uint *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x140524e4d;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    uStack304 = 0x140524e60;
    uVar4 = FUN_140142170(DAT_140c63678,L"ItemQuality_Average");
    puVar7 = param_1 + 0xeb;
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x140524e81;
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x140524ec3;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    uStack304 = 0x140524ed6;
    uVar4 = FUN_140142170(DAT_140c63678,L"ItemQuality_Good");
    puVar7 = (undefined8 *)((longlong)param_1 + 0x75c);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x140524ef7;
        FUN_1401429a0(DAT_140c63678,*(uint *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x140524f39;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    uStack304 = 0x140524f4c;
    uVar4 = FUN_140142170(DAT_140c63678,L"ItemQuality_Excellent");
    puVar7 = param_1 + 0xec;
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x140524f6d;
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x140524faf;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    uStack304 = 0x140524fc2;
    uVar4 = FUN_140142170(DAT_140c63678,L"ItemQuality_Superb");
    puVar7 = (undefined8 *)((longlong)param_1 + 0x764);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x140524fe3;
        FUN_1401429a0(DAT_140c63678,*(uint *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x140525025;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    uStack304 = 0x140525038;
    uVar4 = FUN_140142170(DAT_140c63678,L"ItemQuality_Legendary");
    puVar7 = param_1 + 0xed;
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x140525059;
        FUN_1401429a0(DAT_140c63678,*(undefined4 *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x14052509b;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    uStack304 = 0x1405250ae;
    uVar4 = FUN_140142170(DAT_140c63678,L"ItemQuality_Artifact");
    puVar7 = (undefined8 *)((longlong)param_1 + 0x76c);
    lVar9 = DAT_140c63678;
    if (puVar7 != local_e8) {
        uStack304 = 0x1405250cf;
        FUN_1401429a0(DAT_140c63678,*(uint *)puVar7);
        lVar9 = DAT_140c63678;
        *(uint *)puVar7 = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            iVar10 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar10 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar10 + 1;
            }
        }
    }
    uStack304 = 0x140525111;
    FUN_1401429a0(lVar9,(ulonglong)uVar4);
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xba] != 0) {
            uStack304 = 0x14052513d;
            cVar2 = FUN_14002c740(param_1 + 0xbc,L"UI_RarityBorder_Grey");
            if (cVar2 != '\0') goto LAB_1405251b5;
        }
        uStack304 = 0x140525150;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Grey");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_Grey"[lVar1] != L'\0');
            uStack304 = 0x14052517f;
            FUN_14001c480(param_1 + 0xbc,L"UI_RarityBorder_Grey",L"UI_RarityBorder_Grey" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xba]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x140525195;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xba] != (longlong *)0x0) {
                uStack304 = 0x1405251a7;
                (**(code **)(*(longlong *)param_1[0xba] + 8))();
                param_1[0xba] = 0;
            }
            param_1[0xba] = puVar7;
        }
    }
    LAB_1405251b5:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xc0] != 0) {
            uStack304 = 0x1405251e1;
            cVar2 = FUN_14002c740(param_1 + 0xc2,L"UI_RarityBorder_Grey");
            if (cVar2 != '\0') goto LAB_140525255;
        }
        uStack304 = 0x1405251f4;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Grey");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_Grey"[lVar1] != L'\0');
            uStack304 = 0x14052521f;
            FUN_14001c480(param_1 + 0xc2,L"UI_RarityBorder_Grey",L"UI_RarityBorder_Grey" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xc0]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x140525235;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xc0] != (longlong *)0x0) {
                uStack304 = 0x140525247;
                (**(code **)(*(longlong *)param_1[0xc0] + 8))();
                param_1[0xc0] = 0;
            }
            param_1[0xc0] = puVar7;
        }
    }
    LAB_140525255:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xc6] != 0) {
            uStack304 = 0x140525281;
            cVar2 = FUN_14002c740(param_1 + 200,L"UI_RarityBorder_White");
            if (cVar2 != '\0') goto LAB_1405252f5;
        }
        uStack304 = 0x140525294;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_White");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_White"[lVar1] != L'\0');
            uStack304 = 0x1405252bf;
            FUN_14001c480(param_1 + 200,L"UI_RarityBorder_White",L"UI_RarityBorder_White" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xc6]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x1405252d5;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xc6] != (longlong *)0x0) {
                uStack304 = 0x1405252e7;
                (**(code **)(*(longlong *)param_1[0xc6] + 8))();
                param_1[0xc6] = 0;
            }
            param_1[0xc6] = puVar7;
        }
    }
    LAB_1405252f5:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xcc] != 0) {
            uStack304 = 0x140525321;
            cVar2 = FUN_14002c740(param_1 + 0xce,L"UI_RarityBorder_Green");
            if (cVar2 != '\0') goto LAB_140525395;
        }
        uStack304 = 0x140525334;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Green");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_Green"[lVar1] != L'\0');
            uStack304 = 0x14052535f;
            FUN_14001c480(param_1 + 0xce,L"UI_RarityBorder_Green",L"UI_RarityBorder_Green" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xcc]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x140525375;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xcc] != (longlong *)0x0) {
                uStack304 = 0x140525387;
                (**(code **)(*(longlong *)param_1[0xcc] + 8))();
                param_1[0xcc] = 0;
            }
            param_1[0xcc] = puVar7;
        }
    }
    LAB_140525395:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xd2] != 0) {
            uStack304 = 0x1405253c1;
            cVar2 = FUN_14002c740(param_1 + 0xd4,L"UI_RarityBorder_Blue");
            if (cVar2 != '\0') goto LAB_140525435;
        }
        uStack304 = 0x1405253d4;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Blue");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_Blue"[lVar1] != L'\0');
            uStack304 = 0x1405253ff;
            FUN_14001c480(param_1 + 0xd4,L"UI_RarityBorder_Blue",L"UI_RarityBorder_Blue" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xd2]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x140525415;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xd2] != (longlong *)0x0) {
                uStack304 = 0x140525427;
                (**(code **)(*(longlong *)param_1[0xd2] + 8))();
                param_1[0xd2] = 0;
            }
            param_1[0xd2] = puVar7;
        }
    }
    LAB_140525435:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xd8] != 0) {
            uStack304 = 0x140525461;
            cVar2 = FUN_14002c740(param_1 + 0xda,L"UI_RarityBorder_Purple");
            if (cVar2 != '\0') goto LAB_1405254d5;
        }
        uStack304 = 0x140525474;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Purple");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_Purple"[lVar1] != L'\0');
            uStack304 = 0x14052549f;
            FUN_14001c480(param_1 + 0xda,L"UI_RarityBorder_Purple",L"UI_RarityBorder_Purple" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xd8]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x1405254b5;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xd8] != (longlong *)0x0) {
                uStack304 = 0x1405254c7;
                (**(code **)(*(longlong *)param_1[0xd8] + 8))();
                param_1[0xd8] = 0;
            }
            param_1[0xd8] = puVar7;
        }
    }
    LAB_1405254d5:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xde] != 0) {
            uStack304 = 0x140525501;
            cVar2 = FUN_14002c740(param_1 + 0xe0,L"UI_RarityBorder_Orange");
            if (cVar2 != '\0') goto LAB_140525575;
        }
        uStack304 = 0x140525514;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Orange");
        lVar9 = lVar8;
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar1 = lVar9 + 1;
                lVar9 = lVar9 + 1;
            } while (L"UI_RarityBorder_Orange"[lVar1] != L'\0');
            uStack304 = 0x14052553f;
            FUN_14001c480(param_1 + 0xe0,L"UI_RarityBorder_Orange",L"UI_RarityBorder_Orange" + lVar9);
        }
        if (puVar7 != (undefined8 *)param_1[0xde]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x140525555;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xde] != (longlong *)0x0) {
                uStack304 = 0x140525567;
                (**(code **)(*(longlong *)param_1[0xde] + 8))();
                param_1[0xde] = 0;
            }
            param_1[0xde] = puVar7;
        }
    }
    LAB_140525575:
    lVar9 = param_1[4];
    if (lVar9 != 0) {
        if (param_1[0xe4] != 0) {
            uStack304 = 0x1405255a1;
            cVar2 = FUN_14002c740(param_1 + 0xe6,L"UI_RarityBorder_Pink");
            if (cVar2 != '\0') goto LAB_140525615;
        }
        uStack304 = 0x1405255b4;
        puVar7 = (undefined8 *)FUN_140108e80(lVar9 + 0xf0,L"UI_RarityBorder_Pink");
        if (puVar7 != (undefined8 *)0x0) {
            do {
                lVar9 = lVar8 + 1;
                lVar8 = lVar8 + 1;
            } while (L"UI_RarityBorder_Pink"[lVar9] != L'\0');
            uStack304 = 0x1405255df;
            FUN_14001c480(param_1 + 0xe6,L"UI_RarityBorder_Pink",L"UI_RarityBorder_Pink" + lVar8);
        }
        if (puVar7 != (undefined8 *)param_1[0xe4]) {
            if (puVar7 != (undefined8 *)0x0) {
                uStack304 = 0x1405255f5;
                (**(code **)*puVar7)(puVar7);
            }
            if ((longlong *)param_1[0xe4] != (longlong *)0x0) {
                uStack304 = 0x140525607;
                (**(code **)(*(longlong *)param_1[0xe4] + 8))();
                param_1[0xe4] = 0;
            }
            param_1[0xe4] = puVar7;
        }
    }
    LAB_140525615:
    uStack304 = 0x140525624;
    FUN_1407db4f0(local_60 ^ (ulonglong)auStack296);
    return;
}



undefined8 FUN_140525650(undefined8 param_1,ulonglong param_2)

{
    FUN_140525690();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140525690(undefined8 *param_1)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;

    *param_1 = &PTR_LAB_140b6c180;
    puVar2 = (undefined8 *)param_1[0xb8];
    if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
    }
    iVar4 = 7;
    puVar2 = param_1 + 0xee;
    param_1[0xb8] = 0;
    iVar3 = 7;
    do {
        puVar1 = (undefined4 *)((longlong)puVar2 + -4);
        puVar2 = (undefined8 *)((longlong)puVar2 + -4);
        FUN_1401429a0(DAT_140c63678,*puVar1);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar2 = param_1 + 0xea;
    do {
        if ((longlong *)puVar2[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar2[-6] + 8))();
            puVar2[-6] = 0;
        }
        if (puVar2[-3] != 0) {
            FUN_14018b900(puVar2[-3],0);
        }
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + -6;
    } while (-1 < iVar4);
    puVar2 = param_1 + 0xb7;
    iVar3 = 5;
    do {
        puVar1 = (undefined4 *)((longlong)puVar2 + -4);
        puVar2 = (undefined8 *)((longlong)puVar2 + -4);
        FUN_1401429a0(DAT_140c63678,*puVar1);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_1400c4170(param_1 + 0x80);
    FUN_1400c6030(param_1);
    return;
}



float FUN_1405257a0(longlong param_1)

{
    int iVar1;
    uint uVar2;
    uint uVar3;

    if (*(longlong **)(param_1 + 0x5c0) == (longlong *)0x0) {
        return 0.0;
    }
    iVar1 = *(int *)(param_1 + 0x5c8);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x28))();
    if (iVar1 == -1) {
        return 0.0;
    }
    if ((uVar2 != 0) && (uVar3 = DAT_140c636a8 - iVar1, uVar3 < uVar2)) {
        return (float)(ulonglong)uVar3 / (float)(ulonglong)uVar2;
    }
    return 1.0;
}



ulonglong FUN_1405258e0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined param_4)

{
    undefined4 uVar1;
    int iVar2;
    ulonglong uVar3;
    float fVar4;

    if (((*(byte *)(param_1 + 0x1c) & 0x80) != 0) && ((int)param_2 == 0)) {
        fVar4 = (float)FUN_1405257a0();
        if (1.0 <= fVar4) {
            uVar1 = *param_3;
            *(undefined4 *)(param_1 + 0x388) = uVar1;
            *(undefined4 *)(param_1 + 0x38c) = param_3[1];
            *(undefined4 *)(param_1 + 0x360) = uVar1;
            *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x38c);
            uVar1 = FUN_14018cdf0();
            *(undefined4 *)(param_1 + 0x3a4) = uVar1;
            *(undefined4 *)(param_1 + 0x390) = uVar1;
            iVar2 = FUN_1400c3d70(param_1 + 0x400,param_3);
            return (ulonglong)(iVar2 == 9);
        }
        param_2 = 0;
    }
    uVar3 = FUN_1400d2120(param_1,param_2,param_3,param_4);
    return uVar3;
}



ulonglong FUN_140525990(longlong param_1,int param_2)

{
    char cVar1;
    int iVar2;
    ulonglong uVar3;
    float fVar4;

    if (param_2 != 0) {
        uVar3 = FUN_1400d2550();
        return uVar3;
    }
    if (((*(longlong **)(param_1 + 0x5c0) != (longlong *)0x0) &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x38))(), cVar1 != '\0')) &&
        ((uint)(DAT_140c636a8 - *(int *)(&DAT_140c65a60 + (longlong)*(int *)(param_1 + 0x5b8) * 4)) <
         1000)) {
        return 0;
    }
    iVar2 = FUN_1400c3e20(param_1 + 0x400);
    if (iVar2 == 2) {
        if ((*(longlong *)(param_1 + 0x5c0) != 0) &&
            (fVar4 = (float)FUN_1405257a0(param_1), 1.0 <= fVar4)) {
            (**(code **)(**(longlong **)(param_1 + 0x5c0) + 8))();
            *(undefined8 *)(param_1 + 0x5c8) = 0xffffffffffffffff;
            if (*(longlong *)(param_1 + 0x5c0) != 0) {
                *(int *)(&DAT_140c65a60 + (longlong)*(int *)(param_1 + 0x5b8) * 4) = DAT_140c636a8;
            }
        }
    }
    else if ((iVar2 != 5) && (1 < iVar2 - 7U)) {
        return (ulonglong)(~(uint)(*(byte *)(param_1 + 0x59c) >> 5) & 1);
    }
    return 0;
}



undefined8 * FUN_140525a80(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x5c0);
    if (plVar1 == (longlong *)0x0) {
        *param_2 = 0;
        return param_2;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,1);
    return param_2;
}



undefined8 * FUN_140525ac0(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x5c0);
    if (plVar1 == (longlong *)0x0) {
        *param_2 = 0;
        return param_2;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0);
    return param_2;
}



void FUN_140525b00(longlong *param_1,char param_2,float *param_3)

{
    char cVar1;
    longlong lVar2;
    undefined8 uVar3;
    float fVar4;
    undefined4 uVar5;
    int local_48;
    int iStack68;
    int iStack64;
    int iStack60;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;

    if ((longlong *)param_1[0xb8] == (longlong *)0x0) {
        return;
    }
    cVar1 = (**(code **)(*(longlong *)param_1[0xb8] + 0x20))();
    if (cVar1 == '\0') {
        return;
    }
    fVar4 = (float)FUN_1405257a0(param_1);
    if (1.0 <= fVar4) {
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x10);
        local_48 = 0x3fb33333;
        iStack68 = 0x3fb33333;
        iStack64 = 0x3fb33333;
        iStack60 = 0x3f800000;
        (**(code **)(*DAT_140c65680 + 0xb0))();
    }
    else {
        uVar5 = (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x1a);
        (**(code **)(*DAT_140c65680 + 0xa0))(uVar5,0);
        local_48 = 0x3ecccccd;
        iStack68 = 0x3ecccccd;
        iStack64 = 0x3ecccccd;
        iStack60 = 0x3f800000;
        (**(code **)(*DAT_140c65680 + 0xb0))(DAT_140c65680,&local_48);
        fStack52 = param_3[1];
        fStack48 = param_3[2];
        fStack44 = param_3[3];
        local_28 = param_3[4];
        fStack36 = param_3[5];
        fStack32 = param_3[6];
        fStack28 = param_3[7];
        local_38 = *param_3 + (param_3[4] - *param_3) * fVar4;
        (**(code **)(*DAT_140c65680 + 0x68))();
        if (param_2 == '\0') {
            lVar2 = (**(code **)(*param_1 + 0xb0))();
            if (lVar2 != 0) {
                local_48 = (int)*param_3;
                iStack68 = (int)param_3[1];
                iStack64 = (int)param_3[4];
                iStack60 = (int)param_3[5];
                uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
                FUN_1400cc7c0(uVar3,&local_48);
                uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
                goto LAB_140525c86;
            }
        }
        else {
            lVar2 = (**(code **)(*param_1 + 0xa8))();
            if (lVar2 != 0) {
                local_48 = (int)*param_3;
                iStack68 = (int)param_3[1];
                iStack64 = (int)param_3[4];
                iStack60 = (int)param_3[5];
                uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
                FUN_1400cc7c0(uVar3,&local_48);
                uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
                LAB_140525c86:
                FUN_1400d0a00(uVar3,0);
            }
        }
        (**(code **)(*DAT_140c65680 + 0x48))();
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,2);
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        local_38 = *param_3;
        fStack52 = param_3[1];
        fStack48 = param_3[2];
        fStack44 = param_3[3];
        fStack36 = param_3[5];
        fStack32 = param_3[6];
        fStack28 = param_3[7];
        local_28 = (param_3[4] - *param_3) * fVar4 + local_38;
        (**(code **)(*DAT_140c65680 + 0x68))();
    }
    if (param_2 == '\0') {
        lVar2 = (**(code **)(*param_1 + 0xb0))();
        if (lVar2 == 0) goto LAB_140525de5;
        local_48 = (int)*param_3;
        iStack68 = (int)param_3[1];
        iStack60 = (int)param_3[5];
        iStack64 = (int)param_3[4];
        uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
        FUN_1400cc7c0(uVar3,&local_48);
        uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
    }
    else {
        lVar2 = (**(code **)(*param_1 + 0xa8))();
        if (lVar2 == 0) goto LAB_140525de5;
        local_48 = (int)*param_3;
        iStack68 = (int)param_3[1];
        iStack64 = (int)param_3[4];
        iStack60 = (int)param_3[5];
        uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
        FUN_1400cc7c0(uVar3,&local_48);
        uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
    }
    FUN_1400d0a00(uVar3,0);
    LAB_140525de5:
    (**(code **)(*DAT_140c65680 + 0x48))();
    return;
}



void FUN_140525e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    byte bVar1;
    int iVar2;
    bool bVar3;
    char cVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined8 uVar9;
    uint local_res10 [2];
    undefined local_28 [16];
    undefined local_18 [16];

    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xb50);
    if ((lVar6 == param_1) ||
        (((((*(byte *)(param_1 + 0x1c) & 0x80) != 0 && (lVar6 != 0)) &&
           (lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0)) &&
          ((lVar6 == param_1 || (cVar4 = FUN_1400d1a90(lVar6,param_1), cVar4 != '\0')))))) {
        uVar9 = 1;
    }
    else {
        uVar9 = 0;
    }
    FUN_1400c3cb0(param_1 + 0x400,param_3,*(byte *)(param_1 + 0x1c) >> 3 & 1,uVar9);
    local_18 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x57c),
                                (float)(int)*(undefined8 *)(param_1 + 0x578)));
    local_28 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x574),
                                (float)(int)*(undefined8 *)(param_1 + 0x570)));
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xb50);
    if ((lVar6 == param_1) ||
        (((lVar6 != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
          ((*(longlong *)(lVar6 + 0x10) == param_1 || (cVar4 = FUN_1400d1a90(), cVar4 != '\0')))))) {
        bVar3 = true;
    }
    else {
        bVar3 = false;
    }
    lVar6 = DAT_140c63678;
    bVar1 = *(byte *)(param_1 + 0x59c);
    if ((bVar1 & 0x10) == 0) {
        uVar5 = 4;
        goto LAB_140525f62;
    }
    if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) != 0) {
            if (bVar3) {
                uVar5 = 3;
                goto LAB_140525f62;
            }
            goto LAB_140525f38;
        }
    }
    else {
        LAB_140525f38:
        if ((bVar1 & 0x40) != 0) {
            uVar5 = 1;
            goto LAB_140525f62;
        }
    }
    if (((char)bVar1 < '\0') && (bVar3)) {
        uVar5 = 2;
    }
    else {
        uVar5 = -(uint)((*(byte *)(param_1 + 0x59e) & 1) != 0) & 5;
    }
    LAB_140525f62:
    uVar5 = *(uint *)(param_1 + 0x5a0 + (longlong)(int)uVar5 * 4);
    uVar7 = (ulonglong)uVar5;
    if (uVar7 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
        lVar8 = (ulonglong)uVar5 * 0x20;
        iVar2 = *(int *)(lVar8 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
        if (iVar2 - 1U < 0xfffffffe) {
            *(int *)(lVar8 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar2 + 1;
        }
    }
    if (((*(uint *)(param_1 + 0x298) >> 8 & 1) != 0) && (local_res10 != (uint *)(param_1 + 0x2c4))) {
        FUN_1401429a0();
        lVar6 = DAT_140c63678;
        uVar5 = *(uint *)(param_1 + 0x2c4);
        uVar7 = (ulonglong)uVar5;
        if (uVar7 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            lVar8 = (ulonglong)uVar5 * 0x20;
            iVar2 = *(int *)(lVar8 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
            if (iVar2 - 1U < 0xfffffffe) {
                *(int *)(lVar8 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar2 + 1;
            }
        }
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
        if (uVar7 < *(ulonglong *)(lVar6 + 0x30)) {
            lVar6 = uVar7 * 0x20 + *(longlong *)(lVar6 + 0x28);
        }
        else {
            lVar6 = *(longlong *)(lVar6 + 0x28);
        }
        (**(code **)(*DAT_140c65680 + 0x118))
                (DAT_140c65680,*(longlong *)(param_1 + 0x2b0),0,0xffffffffffffffff,local_28,
                 *(undefined4 *)(param_1 + 0x2c0),lVar6,1,0);
        lVar6 = DAT_140c63678;
    }
    FUN_1401429a0(lVar6,uVar7);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140526090(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    float extraout_XMM0_Da;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined local_68 [16];
    undefined local_58 [16];

    lVar6 = DAT_140c63678;
    iVar1 = *(int *)(param_1 + 0x2cc);
    iVar2 = *(int *)(param_1 + 0x2d0);
    iVar3 = *(int *)(undefined8 *)(param_1 + 0x2d4);
    iVar4 = *(int *)(param_1 + 0x2d8);
    uVar5 = *(undefined8 *)(param_1 + 0x2d4);
    if ((ulonglong)*(uint *)(param_1 + 0x2c8) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
        lVar8 = (ulonglong)*(uint *)(param_1 + 0x2c8) * 0x20;
        iVar7 = *(int *)(lVar8 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
        if (iVar7 - 1U < 0xfffffffe) {
            *(int *)(lVar8 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) = iVar7 + 1;
        }
    }
    FUN_1401429a0(lVar6);
    FUN_1400c9d10(param_1);
    FUN_1400c9c30(param_1);
    if ((*(longlong **)(param_1 + 0x5c0) == (longlong *)0x0) ||
        (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x28))(), iVar7 != 0)) {
        FUN_1405257a0(param_1);
        if (1.0 <= extraout_XMM0_Da) {
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x10);
            local_78 = 0x3fb33333;
            uStack116 = 0x3fb33333;
            uStack112 = 0x3fb33333;
            uStack108 = 0x3f800000;
            (**(code **)(*DAT_140c65680 + 0xb0))(DAT_140c65680,&local_78);
            FUN_140525e10(param_1);
            (**(code **)(*DAT_140c65680 + 0x48))();
        }
        else {
            fVar9 = extraout_XMM0_Da;
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x1a);
            (**(code **)(*DAT_140c65680 + 0xa0))();
            local_78 = 0x3f4ccccd;
            uStack116 = 0x3f4ccccd;
            uStack112 = 0x3f4ccccd;
            uStack108 = 0x3f800000;
            (**(code **)(*DAT_140c65680 + 0xb0))(DAT_140c65680,&local_78);
            fVar9 = (float)(iVar3 - iVar1) * fVar9;
            fVar14 = (float)iVar4;
            uVar15 = 0;
            uVar16 = 0;
            local_58 = ZEXT816(CONCAT44(fVar14,(float)(int)uVar5));
            fVar10 = (float)iVar1;
            fVar11 = (float)iVar2;
            uVar12 = 0;
            uVar13 = 0;
            local_68 = ZEXT816(CONCAT44(fVar11,fVar10 + fVar9));
            (**(code **)(*DAT_140c65680 + 0x68))(DAT_140c65680,local_68);
            FUN_140525e10(param_1);
            (**(code **)(*DAT_140c65680 + 0x48))();
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,2);
            local_68 = CONCAT124(SUB1612(CONCAT412(uVar13,CONCAT48(uVar12,CONCAT44(fVar11,fVar10))) >>
                                                                                                    0x20,0),fVar10);
            local_58 = CONCAT124(CONCAT48(uVar16,CONCAT44(uVar15,fVar14)),fVar9 + fVar10);
            (**(code **)(*DAT_140c65680 + 0x68))(DAT_140c65680,local_68);
            FUN_140525e10(param_1);
            (**(code **)(*DAT_140c65680 + 0x48))();
        }
    }
    else {
        FUN_140525e10(param_1);
    }
    return;
}



void FUN_140526380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    wchar_t wVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    wchar_t *pwVar5;
    wchar_t *pwVar6;
    uint *puVar7;
    uint *puVar8;
    wchar_t *pwVar9;
    undefined **ppuVar10;
    longlong lVar11;
    undefined auStack232 [32];
    undefined8 local_c8;
    undefined *local_c0;
    uint local_b8 [4];
    undefined local_a8 [96];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    lVar4 = FUN_1401a6b80(param_5,L"Base");
    pwVar6 = (wchar_t *)0x0;
    pwVar5 = pwVar6;
    if (lVar4 != 0) {
        pwVar5 = (wchar_t *)FUN_1401a4f40(lVar4 + 0x20);
    }
    pwVar9 = L"kitBtn_Metal_LargeGreen";
    if (pwVar5 != (wchar_t *)0x0) {
        pwVar9 = pwVar5;
    }
    wVar1 = *pwVar9;
    pwVar5 = pwVar6;
    while (wVar1 != L'\0') {
        pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
        wVar1 = pwVar9[(longlong)pwVar5];
    }
    lVar4 = (longlong)pwVar5 * 2 >> 1;
    pwVar5 = pwVar6;
    if (lVar4 + 1U < 0x7fffffffffffffff) {
        pwVar5 = (wchar_t *)FUN_14018b280((lVar4 + 1U) * 2,0);
    }
    FUN_1407db590(pwVar5,pwVar9,lVar4 * 2);
    if (pwVar5 + lVar4 != (wchar_t *)0x0) {
        pwVar5[lVar4] = L'\0';
    }
    local_c8 = 0;
    FUN_1400d45e0(local_a8,param_1,param_2,param_5);
    lVar4 = FUN_14018b280(0x770,0);
    if (lVar4 != 0) {
        local_c0 = local_a8;
        local_c8 = param_3;
        pwVar6 = (wchar_t *)FUN_140524b20(lVar4,param_1,param_2,pwVar5);
    }
    ppuVar10 = &PTR_u_NormalTextColor_140a20fb0;
    puVar8 = (uint *)(pwVar6 + 0x2d0);
    do {
        puVar7 = (uint *)FUN_1400f66f0(local_b8,param_5,*ppuVar10,
                                       *(undefined4 *)
                                               ((0x140c2c348 - (longlong)pwVar6) + (longlong)puVar8));
        lVar4 = DAT_140c63678;
        if (puVar8 != puVar7) {
            FUN_1401429a0(DAT_140c63678);
            lVar4 = DAT_140c63678;
            uVar2 = *puVar7;
            *puVar8 = uVar2;
            if ((ulonglong)uVar2 < *(ulonglong *)(lVar4 + 0x30)) {
                lVar11 = *(longlong *)(lVar4 + 0x28) + (ulonglong)uVar2 * 0x20;
                iVar3 = *(int *)(lVar11 + 0x10);
                if (iVar3 - 1U < 0xfffffffe) {
                    *(int *)(lVar11 + 0x10) = iVar3 + 1;
                }
            }
        }
        FUN_1401429a0(lVar4,local_b8[0]);
        ppuVar10 = ppuVar10 + 1;
        puVar8 = puVar8 + 1;
    } while ((longlong)ppuVar10 < 0x140a20fe0);
    FUN_1400f66f0(local_b8,param_5,L"TextColor",0xffffffff);
    lVar4 = DAT_140c63678;
    if ((uint *)(pwVar6 + 0x162) != local_b8) {
        FUN_1401429a0(DAT_140c63678);
        lVar4 = DAT_140c63678;
        *(uint *)(pwVar6 + 0x162) = local_b8[0];
        if ((ulonglong)local_b8[0] < *(ulonglong *)(lVar4 + 0x30)) {
            lVar11 = *(longlong *)(lVar4 + 0x28) + (ulonglong)local_b8[0] * 0x20;
            iVar3 = *(int *)(lVar11 + 0x10);
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *)(lVar11 + 0x10) = iVar3 + 1;
            }
        }
    }
    *(ulonglong *)(pwVar6 + 0x148) = *(ulonglong *)(pwVar6 + 0x148) | 0x10000000;
    *(undefined4 *)(pwVar6 + 0x152) = 0;
    FUN_1401429a0(lVar4,(ulonglong)local_b8[0]);
    if (pwVar5 != (wchar_t *)0x0) {
        FUN_14018b900(pwVar5,0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack232);
    return;
}



undefined4 FUN_140526610(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    double *pdVar7;
    undefined **ppuVar8;
    undefined2 *puVar9;
    longlong lVar10;
    undefined8 uVar11;
    short *psVar12;
    double *pdVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    int iVar16;
    double local_res10;
    double local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined8 local_18;
    undefined8 local_10;

    lVar6 = FUN_140527110();
    pdVar13 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar7 = (double *)&DAT_140a12138;
    if (pdVar13 < *(double **)(param_1 + 0x10)) {
        pdVar7 = pdVar13;
    }
    puVar15 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)0x0;
    iVar16 = 0;
    if (*(int *)(pdVar7 + 1) == 3) {
        LAB_140526683:
        iVar16 = (int)*pdVar7;
    }
    else if ((*(int *)(pdVar7 + 1) == 4) &&
             (iVar4 = FUN_14005ac80((longlong)*pdVar7 + 0x20,&local_res10), iVar4 != 0)) {
        local_20 = 3;
        pdVar7 = &local_28;
        local_28 = local_res10;
        goto LAB_140526683;
    }
    puVar2 = *(undefined8 **)(lVar6 + 0x5c0);
    if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
    }
    *(int *)(lVar6 + 0x5b8) = iVar16;
    *(undefined8 *)(lVar6 + 0x5c0) = 0;
    switch(iVar16) {
        case 1:
            lVar10 = FUN_14018b280(0xb8,0);
            if (lVar10 != 0) {
                puVar14 = (undefined8 *)FUN_1405176f0(lVar10,lVar6);
            }
            goto LAB_1405266ee;
        case 2:
            puVar14 = (undefined8 *)FUN_14018b280(0x10);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6b540;
                puVar15 = puVar14;
            }
            break;
        case 3:
            puVar14 = (undefined8 *)FUN_14018b280(0x38);
            if (puVar14 != (undefined8 *)0x0) {
                FUN_140515120(puVar14,lVar6);
                ppuVar8 = &PTR_LAB_140b6b680;
                puVar15 = puVar14;
                LAB_140526752:
                *puVar15 = ppuVar8;
                LAB_140526755:
                FUN_1400e2630();
                lVar10 = puVar15[4];
                puVar15[4] = CONCAT44(uStack28,local_20);
                puVar15[5] = local_18;
                puVar15[6] = local_10;
                if (lVar10 != 0) {
                    FUN_14018b900(lVar10,0);
                    *(undefined8 **)(lVar6 + 0x5c0) = puVar15;
                    goto switchD_1405266c9_caseD_8;
                }
            }
            goto LAB_140526799;
        case 4:
            puVar14 = (undefined8 *)FUN_14018b280(0x38);
            if (puVar14 != (undefined8 *)0x0) {
                FUN_140515120(puVar14,lVar6);
                ppuVar8 = &PTR_LAB_140b6b5e0;
                puVar15 = puVar14;
                goto LAB_140526752;
            }
            goto LAB_140526799;
        case 5:
            puVar14 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar14 != (undefined8 *)0x0) {
                FUN_140515120(puVar14,lVar6);
                *puVar14 = &PTR_LAB_140b6b6d0;
                *(undefined4 *)(puVar14 + 7) = 300;
                *(undefined4 *)((longlong)puVar14 + 0x3c) = 0xffffffff;
                puVar15 = puVar14;
                goto LAB_140526755;
            }
            goto LAB_140526799;
        case 6:
            lVar10 = FUN_14018b280(0x38);
            puVar14 = puVar15;
            if (lVar10 != 0) {
                uVar11 = FUN_1405163c0(lVar10,lVar6);
                *(undefined8 *)(lVar6 + 0x5c0) = uVar11;
                goto switchD_1405266c9_caseD_8;
            }
            goto LAB_1405266ee;
        case 7:
            lVar10 = FUN_14018b280(0x50);
            puVar14 = puVar15;
            if (lVar10 != 0) {
                uVar11 = FUN_140515880(lVar10,lVar6);
                *(undefined8 *)(lVar6 + 0x5c0) = uVar11;
                goto switchD_1405266c9_caseD_8;
            }
            goto LAB_1405266ee;
        default:
            goto switchD_1405266c9_caseD_8;
        case 10:
            puVar14 = (undefined8 *)FUN_14018b280(0x10);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6b140;
                puVar15 = puVar14;
            }
            break;
        case 0xb:
            puVar14 = (undefined8 *)FUN_14018b280(0x48);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6b280;
                puVar14[2] = 0;
                puVar14[3] = 1;
                puVar14[4] = 0;
                puVar14[5] = 0;
                puVar14[6] = 1;
                puVar14[7] = 0;
                puVar14[8] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0xc:
            puVar14 = (undefined8 *)FUN_14018b280(0x38);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6b230;
                puVar14[2] = 0;
                puVar14[3] = 1;
                puVar14[4] = 0;
                puVar14[5] = 0;
                *(undefined4 *)(puVar14 + 6) = 0;
                puVar15 = puVar14;
            }
            break;
        case 0xd:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6b190;
                puVar15 = puVar14;
            }
            break;
        case 0xe:
            puVar14 = (undefined8 *)FUN_14018b280(0x30);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0xffffffffffffffff;
                puVar14[4] = 0;
                puVar14[3] = 0;
                *puVar14 = &PTR_FUN_140b6b3e0;
                puVar15 = puVar14;
            }
            break;
        case 0xf:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0xffffffffffffffff;
                *puVar14 = &PTR_FUN_140b6b4a0;
                puVar15 = puVar14;
            }
            break;
        case 0x10:
            puVar14 = (undefined8 *)FUN_14018b280(0x50);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0xffffffffffffffff;
                puVar14[4] = 0;
                puVar14[3] = 0;
                *(undefined4 *)(puVar14 + 6) = 0;
                puVar14[7] = 0;
                *puVar14 = &PTR_FUN_140b6b2d0;
                *(undefined4 *)(puVar14 + 8) = 0;
                puVar14[9] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x11:
            puVar14 = (undefined8 *)FUN_14018b280(0x30);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0xffffffffffffffff;
                puVar14[4] = 0;
                puVar14[3] = 0;
                *puVar14 = &PTR_FUN_140b6b330;
                puVar15 = puVar14;
            }
            break;
        case 0x12:
            if (*(int *)(DAT_140c635f0 + 0x1708) != 0) goto switchD_1405266c9_caseD_8;
            puVar14 = (undefined8 *)FUN_14018b280(0x30);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6b390;
                puVar14[3] = 0;
                puVar14[4] = 1;
                puVar14[5] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x13:
            if (*(int *)(DAT_140c635f0 + 0x1708) != 0) goto switchD_1405266c9_caseD_8;
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                *puVar14 = &PTR_FUN_140b6b0f0;
                puVar15 = puVar14;
            }
            break;
        case 0x14:
            puVar14 = (undefined8 *)FUN_14018b280(0x30);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6b1e0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                puVar14[5] = 0;
                puVar9 = (undefined2 *)FUN_14018b280(0x10);
                puVar14[3] = puVar9;
                puVar14[4] = puVar9;
                puVar14[5] = puVar9 + 8;
                puVar15 = puVar14;
                if (puVar9 != (undefined2 *)0x0) {
                    *puVar9 = 0;
                    *(undefined8 **)(lVar6 + 0x5c0) = puVar14;
                    goto switchD_1405266c9_caseD_8;
                }
            }
            goto LAB_140526799;
        case 0x15:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                *puVar14 = &PTR_FUN_140b6b000;
                puVar15 = puVar14;
            }
            break;
        case 0x16:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                *puVar14 = &PTR_FUN_140b6b0a0;
                puVar15 = puVar14;
            }
            break;
        case 0x17:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6b050;
                puVar14[2] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x18:
            lVar10 = FUN_14018b280(0x58);
            puVar14 = puVar15;
            if (lVar10 != 0) {
                uVar11 = FUN_14051d250(lVar10,lVar6);
                *(undefined8 *)(lVar6 + 0x5c0) = uVar11;
                goto switchD_1405266c9_caseD_8;
            }
        LAB_1405266ee:
            *(undefined8 **)(lVar6 + 0x5c0) = puVar14;
            goto switchD_1405266c9_caseD_8;
        case 0x19:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6afb0;
                puVar14[3] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x1a:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6af10;
                *(undefined4 *)(puVar14 + 3) = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x1b:
            puVar14 = (undefined8 *)FUN_14018b280(0x28);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                puVar14[3] = 0;
                *(undefined4 *)(puVar14 + 4) = 0;
                *puVar14 = &PTR_FUN_140b6aec0;
                puVar15 = puVar14;
            }
            break;
        case 0x1c:
            puVar14 = (undefined8 *)FUN_14018b280(0x38);
            if (puVar14 != (undefined8 *)0x0) {
                FUN_140515120(puVar14,lVar6);
                *puVar14 = &PTR_LAB_140b6add0;
                psVar12 = (short *)FUN_14034bdd0();
                sVar1 = *psVar12;
                while (sVar1 != 0) {
                    puVar15 = (undefined8 *)((longlong)puVar15 + 1);
                    sVar1 = psVar12[(longlong)puVar15];
                }
                FUN_14001c480(puVar14 + 3,psVar12,psVar12 + (longlong)puVar15);
                *(undefined8 **)(lVar6 + 0x5c0) = puVar14;
                goto switchD_1405266c9_caseD_8;
            }
        LAB_140526799:
            *(undefined8 **)(lVar6 + 0x5c0) = puVar15;
            goto switchD_1405266c9_caseD_8;
        case 0x1d:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                *puVar14 = &PTR_FUN_140b6ae20;
                puVar15 = puVar14;
            }
            break;
        case 0x1e:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6ae70;
                *(undefined4 *)(puVar14 + 3) = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x1f:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6ad30;
                *(undefined4 *)(puVar14 + 3) = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x20:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                *puVar14 = &PTR_FUN_140b6ad80;
                puVar15 = puVar14;
            }
            break;
        case 0x21:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6ac90;
                puVar15 = puVar14;
            }
            break;
        case 0x22:
            puVar14 = (undefined8 *)FUN_14018b280(0x10);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6ace0;
                puVar15 = puVar14;
            }
            break;
        case 0x23:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6ac40;
                puVar14[3] = 0;
                puVar14[2] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x24:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 4;
                *puVar14 = &PTR_FUN_140b6aba0;
                puVar15 = puVar14;
            }
            break;
        case 0x25:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 4;
                *puVar14 = &PTR_FUN_140b6abf0;
                puVar15 = puVar14;
            }
            break;
        case 0x26:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                puVar14[2] = 0;
                *puVar14 = &PTR_FUN_140b6aab0;
                puVar14[3] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x27:
            puVar14 = (undefined8 *)FUN_14018b280(0x30);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                puVar14[3] = 0;
                *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
                *(undefined4 *)((longlong)puVar14 + 0x2c) = 0;
                *puVar14 = &PTR_FUN_140b6ab00;
                puVar15 = puVar14;
            }
            break;
        case 0x28:
            puVar14 = (undefined8 *)FUN_14018b280(0x18);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *(undefined4 *)(puVar14 + 2) = 0;
                *puVar14 = &PTR_FUN_140b6ab50;
                puVar15 = puVar14;
            }
            break;
        case 0x29:
            puVar14 = (undefined8 *)FUN_14018b280(0x98,0);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6a9c0;
                puVar14[2] = 0;
                puVar14[4] = 0;
                puVar14[3] = 0;
                puVar14[6] = 0;
                puVar14[5] = 0;
                puVar14[7] = 0;
                puVar14[8] = 1;
                puVar14[9] = 0;
                puVar14[10] = 0;
                puVar14[0xb] = 1;
                puVar14[0xc] = 0;
                puVar14[0xd] = 0;
                puVar14[0xe] = 1;
                puVar14[0xf] = 0;
                puVar14[0x10] = 0;
                puVar14[0x11] = 1;
                puVar14[0x12] = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x2a:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6aa60;
                puVar14[2] = 0;
                *(undefined4 *)(puVar14 + 3) = 0;
                puVar15 = puVar14;
            }
            break;
        case 0x2b:
            puVar14 = (undefined8 *)FUN_14018b280(0x20);
            if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = lVar6;
                *puVar14 = &PTR_FUN_140b6aa10;
                puVar14[2] = 0;
                *(undefined4 *)(puVar14 + 3) = 0;
                puVar15 = puVar14;
            }
    }
    *(undefined8 **)(lVar6 + 0x5c0) = puVar15;
    switchD_1405266c9_caseD_8:
    plVar3 = *(longlong **)(lVar6 + 0x5c0);
    *(undefined8 *)(lVar6 + 0x5c8) = 0xffffffffffffffff;
    if (plVar3 == (longlong *)0x0) {
        uVar5 = 0;
    }
    else {
        uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        (**(code **)(**(longlong **)(lVar6 + 0x5c0) + 0x48))();
    }
    return uVar5;
}



void FUN_1405270a0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.ActionConfirmButton",0x1a);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



longlong FUN_140527110(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x2a & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"ActionConfirmButton",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



// WARNING: Removing unreachable block (ram,0x000140527501)

void FUN_1405271c0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1405271d1;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140527212;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_SetActionData_140c59f30 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 == 0);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405272af;
    LuaElementLoaderOrSo(lVar2,"Apollo.ActionConfirmButton");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1405272d1:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1405272ed:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1405272ed;
        if (iVar1 == 7) goto LAB_1405272d1;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1405272ed;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x14052731c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140527342;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x14052738a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405273af;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405273d3;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405273f4;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140527419;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x14052745c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140527481;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1405274bc:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1405274d5;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1405274bc;
        if (iVar1 != 8) goto LAB_1405274d5;
    }
    uVar15 = *puVar10;
    LAB_1405274d5:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405274e4;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_140526380;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x14052751b;
    FUN_1400f85d0(param_1 + 0xa80,L"ActionConfirmButton",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x14052752b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



longlong FUN_140527540(_FILETIME param_1)

{
    uint *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    _FILETIME local_res8 [4];

    if ((DAT_140c8aed0 & 1) == 0) {
        DAT_140c8aed0 = DAT_140c8aed0 | 1;
        DAT_140c8aec8 = 0;
    }
    local_res8[0] = param_1;
    GetSystemTimeAsFileTime(local_res8);
    uVar3 = (ulonglong)((longlong)local_res8[0] - *(longlong *)(DAT_140c65970 + 0x30)) / 10000000;
    if (DAT_140c8aec8 == 0) {
        DAT_140c8aec8 = 1;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            DAT_140c8aec0 = 0;
            return 0;
        }
        DAT_140c8aec0 = (ulonglong)*(uint *)(lVar2 + 4);
    }
    if (DAT_140c8aec0 <= uVar3) {
        return 0;
    }
    if (DAT_140c8aec8 == 0) {
        DAT_140c8aec8 = 1;
        DAT_140c8aec0 = FUN_140200220(0x93e);
        if (DAT_140c8aec0 != 0) {
            puVar1 = (uint *)(DAT_140c8aec0 + 4);
            DAT_140c8aec0 = (ulonglong)*puVar1;
            return *puVar1 - uVar3;
        }
    }
    return DAT_140c8aec0 - uVar3;
}



undefined8 FUN_140527630(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c659c8 + 0x30);
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
            return *(undefined8 *)(local_res8 + 0x28);
        }
    }
    return 0;
}



longlong FUN_140527690(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    puVar3 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1);
    puVar4 = puVar3 + lVar1 * 2;
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
    }
    if ((undefined4 *)*param_1 != puVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar4 + (*param_1 - (longlong)puVar3));
                    *puVar4 = *puVar5;
                    puVar4[1] = puVar5[1];
                }
                uVar6 = uVar6 + 1;
                puVar4 = puVar4 + 2;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong FUN_140527760(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;

    lVar1 = param_1[1];
    lVar5 = FUN_14018db00(*param_1,lVar1 + 1,0x17c);
    puVar7 = (undefined4 *)(lVar1 * 0x17c + lVar5);
    if ((((uint)param_2 | (uint)puVar7) & 0xf) == 0) {
        lVar6 = 2;
        do {
            puVar9 = param_2;
            puVar8 = puVar7;
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            *puVar8 = *puVar9;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar9[5];
            uVar3 = puVar9[6];
            uVar4 = puVar9[7];
            puVar8[4] = puVar9[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar9[9];
            uVar3 = puVar9[10];
            uVar4 = puVar9[0xb];
            puVar8[8] = puVar9[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar9[0xd];
            uVar3 = puVar9[0xe];
            uVar4 = puVar9[0xf];
            puVar8[0xc] = puVar9[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar9[0x11];
            uVar3 = puVar9[0x12];
            uVar4 = puVar9[0x13];
            puVar8[0x10] = puVar9[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar9[0x15];
            uVar3 = puVar9[0x16];
            uVar4 = puVar9[0x17];
            puVar8[0x14] = puVar9[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar9[0x19];
            uVar3 = puVar9[0x1a];
            uVar4 = puVar9[0x1b];
            puVar8[0x18] = puVar9[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar9[0x1d];
            uVar3 = puVar9[0x1e];
            uVar4 = puVar9[0x1f];
            puVar8[0x1c] = puVar9[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            puVar7 = puVar8 + 0x20;
            param_2 = puVar9 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar9[0x21];
        uVar3 = puVar9[0x22];
        uVar4 = puVar9[0x23];
        puVar8[0x20] = puVar9[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar9[0x25];
        uVar3 = puVar9[0x26];
        uVar4 = puVar9[0x27];
        puVar8[0x24] = puVar9[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
        uVar2 = puVar9[0x29];
        uVar3 = puVar9[0x2a];
        uVar4 = puVar9[0x2b];
        puVar8[0x28] = puVar9[0x28];
        puVar8[0x29] = uVar2;
        puVar8[0x2a] = uVar3;
        puVar8[0x2b] = uVar4;
        uVar2 = puVar9[0x2d];
        uVar3 = puVar9[0x2e];
        uVar4 = puVar9[0x2f];
        puVar8[0x2c] = puVar9[0x2c];
        puVar8[0x2d] = uVar2;
        puVar8[0x2e] = uVar3;
        puVar8[0x2f] = uVar4;
        uVar2 = puVar9[0x31];
        uVar3 = puVar9[0x32];
        uVar4 = puVar9[0x33];
        puVar8[0x30] = puVar9[0x30];
        puVar8[0x31] = uVar2;
        puVar8[0x32] = uVar3;
        puVar8[0x33] = uVar4;
        uVar2 = puVar9[0x35];
        uVar3 = puVar9[0x36];
        uVar4 = puVar9[0x37];
        puVar8[0x34] = puVar9[0x34];
        puVar8[0x35] = uVar2;
        puVar8[0x36] = uVar3;
        puVar8[0x37] = uVar4;
        uVar2 = puVar9[0x39];
        uVar3 = puVar9[0x3a];
        uVar4 = puVar9[0x3b];
        puVar8[0x38] = puVar9[0x38];
        puVar8[0x39] = uVar2;
        puVar8[0x3a] = uVar3;
        puVar8[0x3b] = uVar4;
        *(undefined8 *)(puVar8 + 0x3c) = *(undefined8 *)(puVar9 + 0x3c);
        puVar8[0x3e] = puVar9[0x3e];
    }
    else {
        FUN_1407db590(puVar7,param_2,0x17c);
    }
    if (*param_1 != lVar5) {
        FUN_1407db590(lVar5,*param_1,param_1[1] * 0x17c);
        lVar6 = *param_1;
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



undefined8 FUN_1405278c0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0();
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.PathMission",0x10);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
                if (*(int *)(plVar3 + 1) == 2) {
                    lVar4 = *plVar3;
                }
                else {
                    if (*(int *)(plVar3 + 1) != 7) {
                        return 0;
                    }
                    lVar4 = *plVar3 + 0x30;
                }
                if (lVar4 != 0) {
                    return *(undefined8 *)(lVar4 + 8);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_140527a10(longlong param_1,undefined4 param_2)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0();
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.PublicEvent",0x10);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
                if (*(int *)(plVar3 + 1) == 2) {
                    lVar4 = *plVar3;
                }
                else {
                    if (*(int *)(plVar3 + 1) != 7) {
                        return 0;
                    }
                    lVar4 = *plVar3 + 0x30;
                }
                if (lVar4 != 0) {
                    return *(undefined8 *)(lVar4 + 8);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_140527b60(longlong param_1,undefined4 param_2)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0();
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.PublicEventObjective",0x19);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
                if (*(int *)(plVar3 + 1) == 2) {
                    lVar4 = *plVar3;
                }
                else {
                    if (*(int *)(plVar3 + 1) != 7) {
                        return 0;
                    }
                    lVar4 = *plVar3 + 0x30;
                }
                if (lVar4 != 0) {
                    return *(undefined8 *)(lVar4 + 8);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_140527cb0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0();
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.Challenges",0xf);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,param_2);
                if (*(int *)(plVar3 + 1) == 2) {
                    lVar4 = *plVar3;
                }
                else {
                    if (*(int *)(plVar3 + 1) != 7) {
                        return 0;
                    }
                    lVar4 = *plVar3 + 0x30;
                }
                if (lVar4 != 0) {
                    return *(undefined8 *)(lVar4 + 8);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_140527e00(longlong param_1)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0(param_1,5);
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,5);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.HexGroups",0xe);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,5);
                if (*(int *)(plVar3 + 1) == 2) {
                    lVar4 = *plVar3;
                }
                else {
                    if (*(int *)(plVar3 + 1) != 7) {
                        return 0;
                    }
                    lVar4 = *plVar3 + 0x30;
                }
                if (lVar4 != 0) {
                    return *(undefined8 *)(lVar4 + 8);
                }
            }
        }
    }
    return 0;
}



undefined8 * FUN_140527f50(undefined8 *param_1,undefined8 param_2)

{
    longlong lVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    short *psVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong local_res8;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;

    param_1[1] = param_2;
    uVar7 = 0;
    *param_1 = &PTR_FUN_140b6c600;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[7] = 0;
    (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],&local_38);
    *(undefined4 *)((longlong)param_1 + 0x24) = local_38;
    *(undefined4 *)(param_1 + 5) = local_34;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_30;
    *(undefined4 *)(param_1 + 6) = local_2c;
    uVar9 = uVar7;
    while( true ) {
        plVar8 = (longlong *)0x0;
        if (DAT_140c658f8 == 0) break;
        puVar2 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
        lVar3 = DAT_140c658f8;
        if ((ulonglong)*puVar2 / 0x30 <= uVar7) break;
        if ((DAT_140c658f8 != 0) && (*(longlong *)(DAT_140c658f8 + 8) != 0)) {
            puVar2 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
            if (uVar7 < (ulonglong)*puVar2 / 0x30) {
                plVar8 = (longlong *)(*(longlong *)(lVar3 + 8) + uVar9);
            }
        }
        lVar3 = (**(code **)(*plVar8 + 0x18))(plVar8);
        if (lVar3 == param_1[1]) {
            lVar1 = param_1[3];
            lVar3 = lVar1 + 1;
            lVar4 = FUN_14018db00(param_1[2],lVar3,8);
            *(longlong **)(lVar4 + lVar1 * 8) = plVar8;
            if (param_1[2] != lVar4) {
                FUN_1407db590(lVar4,param_1[2],param_1[3] << 3);
                lVar1 = param_1[2];
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                param_1[2] = lVar4;
            }
            param_1[3] = lVar3;
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 0x50;
    }
    puVar5 = (undefined4 *)
            (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],&local_res8);
    *(undefined4 *)(param_1 + 8) = *puVar5;
    *(undefined4 *)((longlong)param_1 + 0x44) = puVar5[1];
    psVar6 = (short *)(**(code **)(*(longlong *)param_1[1] + 0x18))();
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        FUN_14018d540(&local_res8,L"UI\\Maps\\%s\\UI_CRB_Revealed_0.tga",psVar6);
        (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,local_res8,0,1,2,0,0,0,param_1 + 7);
        if (local_res8 != 0) {
            (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
        }
    }
    return param_1;
}



undefined8 * FUN_140528190(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = &PTR_FUN_140b6c600;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined (*) [16]
FUN_140528200(longlong param_1,undefined (*param_2) [16],int *param_3,undefined8 param_4)

{
float fVar1;
int iVar2;
undefined extraout_XMM0 [16];
float fVar3;
int local_res8 [2];
int local_38;
int local_34;
int local_30;
float local_28;
undefined4 uStack36;
undefined4 uStack32;
undefined4 uStack28;
float local_18;

FUN_140528300(param_1,&local_38,param_4);
*param_2 = extraout_XMM0 & (undefined  [16])0x0;
FUN_140528400(param_1,local_res8);
FUN_14044a2d0(param_1 + 0x24,&local_28);
*(float *)*param_2 = local_28;
*(undefined4 *)(*param_2 + 4) = uStack36;
*(undefined4 *)(*param_2 + 8) = uStack32;
*(undefined4 *)(*param_2 + 0xc) = uStack28;
FUN_14044a2d0();
iVar2 = *param_3;
fVar3 = ((local_18 - *(float *)*param_2) * (1.0 / (float)local_res8[0])) /
        ((float)(local_30 - local_38) * (1.0 / (float)local_res8[0]));
fVar1 = *(float *)*param_2;
*(float *)(*param_2 + 8) = (float)(param_3[1] - local_34) * fVar3 + *(float *)(*param_2 + 8);
*(float *)*param_2 = (float)(iVar2 - local_38) * fVar3 + fVar1;
return param_2;
}



int * FUN_140528300(longlong param_1,int *param_2,int *param_3)

{
    int *piVar1;
    longlong lVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    int local_res8;
    int local_resc;
    undefined local_res10 [8];

    fVar5 = (float)(param_3[2] - *param_3) / (float)*(int *)(param_1 + 0x40);
    fVar4 = (float)(param_3[3] - param_3[1]) / (float)*(int *)(param_1 + 0x44);
    FUN_140528400(param_1,&local_res8);
    piVar1 = (int *)(**(code **)(**(longlong **)(param_1 + 8) + 0x28))
            (*(longlong **)(param_1 + 8),local_res10);
    *param_2 = (int)((float)*piVar1 * fVar5) + *param_3;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
            (*(longlong **)(param_1 + 8),local_res10);
    iVar3 = (int)((float)*(int *)(lVar2 + 4) * fVar4) + param_3[1];
    param_2[1] = iVar3;
    param_2[2] = (int)((float)local_res8 * fVar5) + *param_2;
    param_2[3] = (int)((float)local_resc * fVar4) + iVar3;
    return param_2;
}



int * FUN_140528400(longlong param_1,int *param_2)

{
    uint uVar1;
    float extraout_XMM0_Da;
    float fVar2;
    undefined4 local_98;
    undefined4 local_94;
    int local_90;
    int local_8c;
    float local_88;
    undefined4 uStack132;
    float fStack128;
    undefined4 uStack124;
    float local_78;
    undefined4 uStack116;
    float fStack112;
    undefined4 uStack108;
    float local_68 [8];
    float local_48;
    undefined4 uStack68;
    float fStack64;
    undefined4 uStack60;

    *param_2 = *(int *)(param_1 + 0x40);
    param_2[1] = *(int *)(param_1 + 0x44);
    local_98 = *(undefined4 *)(param_1 + 0x24);
    local_94 = *(undefined4 *)(param_1 + 0x28);
    local_90 = *(int *)(param_1 + 0x2c);
    local_8c = *(int *)(param_1 + 0x30);
    FUN_14044a2d0(&local_98,local_68,param_1);
    fVar2 = 0.5;
    uStack132 = uRam0000000140c7ce24;
    uStack124 = uRam0000000140c7ce2c;
    uStack116 = uRam0000000140c7ce34;
    uStack108 = uRam0000000140c7ce3c;
    local_88 = (DAT_140c7ce20 - DAT_140c7ce00 * 0.5) +
               DAT_140c7ce00 * 3.0 * 0.25 * (float)(local_90 - (int)DAT_140c77768);
    fStack128 = (DAT_140c7ce28 - DAT_140c7ce04 * 0.5) +
                (float)(local_8c - DAT_140c77768._4_4_) * DAT_140c7ce04;
    uVar1 = local_90 - (int)DAT_140c77768 & 0x80000001;
    if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
        fStack128 = fStack128 + DAT_140c7ce04 * 0.5;
    }
    fStack112 = fStack128 + DAT_140c7ce04;
    local_78 = local_88 + DAT_140c7ce00;
    uStack68 = uRam0000000140c7ce24;
    uStack60 = uRam0000000140c7ce2c;
    local_48 = local_88;
    fStack64 = fStack128;
    FUN_140528590(param_1);
    *param_2 = (int)((1.0 / extraout_XMM0_Da) * (local_78 - local_68[0]) + fVar2);
    param_2[1] = (int)((1.0 / extraout_XMM0_Da) * 0.0 + fVar2);
    return param_2;
}



void FUN_140528590(longlong param_1)

{
    uint uVar1;
    float fVar2;
    undefined4 local_68;
    undefined4 uStack100;
    int iStack96;
    int iStack92;
    float local_48 [2];
    float fStack64;

    local_68 = *(undefined4 *)(param_1 + 0x24);
    uStack100 = *(undefined4 *)(param_1 + 0x28);
    iStack96 = *(int *)(param_1 + 0x2c);
    iStack92 = *(int *)(param_1 + 0x30);
    FUN_14044a2d0(&local_68,local_48);
    fVar2 = (DAT_140c7ce28 - DAT_140c7ce04 * 0.5) +
            (float)(iStack92 - DAT_140c77768._4_4_) * DAT_140c7ce04;
    uVar1 = iStack96 - (int)DAT_140c77768 & 0x80000001;
    if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
        fVar2 = fVar2 + DAT_140c7ce04 * 0.5;
    }
    if ((fVar2 + DAT_140c7ce04) - fStack64 <
        ((DAT_140c7ce20 - DAT_140c7ce00 * 0.5) +
         DAT_140c7ce00 * 3.0 * 0.25 * (float)(iStack96 - (int)DAT_140c77768) + DAT_140c7ce00) -
        local_48[0]) {
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_1405286f0(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined extraout_XMM0 [16];
    undefined auVar10 [14];
    undefined auVar11 [16];
    undefined in_XMM8_Ba;
    byte bVar14;
    undefined in_XMM8_Bb;
    undefined uVar15;
    undefined in_XMM8_Bc;
    undefined uVar16;
    undefined in_XMM8_Bd;
    undefined uVar17;
    undefined in_XMM8_Be;
    undefined uVar18;
    undefined in_XMM8_Bf;
    undefined uVar19;
    undefined in_XMM8_Bg;
    undefined uVar20;
    undefined in_XMM8_Bh;
    undefined uVar21;
    undefined auStack648 [32];
    undefined local_268;
    int local_258;
    int local_254;
    int local_250;
    int local_24c;
    int local_248;
    int local_244;
    int local_240;
    int local_23c;
    code **local_238;
    undefined4 local_230;
    undefined local_228 [24];
    undefined2 *local_210;
    undefined local_208 [16];
    undefined local_1f8;
    undefined local_1f6;
    float local_1e8;
    float fStack484;
    float fStack480;
    float fStack476;
    float local_1d8;
    float fStack468;
    float fStack464;
    float fStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined local_1b8 [16];
    undefined local_1a8 [16];
    code ***local_198;
    int local_190;
    int local_18c;
    int local_188;
    int local_184;
    int local_180;
    int local_17c;
    int local_178;
    int local_174;
    int local_170;
    int local_16c;
    int local_168;
    int local_164;
    undefined2 local_160;
    undefined local_15e;
    undefined4 local_15c;
    int local_158;
    int local_154;
    int local_150;
    int local_14c;
    undefined8 local_148;
    uint local_140;
    uint local_13c;
    undefined local_138;
    undefined8 local_118 [4];
    undefined4 auStack248 [4];
    undefined4 auStack232 [4];
    undefined4 local_d8;
    undefined8 local_b8 [4];
    undefined4 auStack152 [4];
    undefined4 auStack136 [4];
    undefined4 local_78;
    ulonglong local_68;
    undefined auVar12 [16];
    undefined auVar13 [16];

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack648;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    if (iVar3 != 0) {
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x10);
        (**(code **)(*DAT_140c65680 + 0xb8))();
        local_250 = *(int *)(param_1 + 0x40);
        local_228._0_16_ = extraout_XMM0 & (undefined  [16])0x0;
        local_24c = *(int *)(param_1 + 0x44);
        puVar7 = *(undefined8 **)(param_1 + 0x38);
        local_248 = DAT_140c77760;
        local_244 = DAT_140c77764;
        local_230 = 1;
        local_238 = (code **)&PTR_LAB_140b56c80;
        local_210 = (undefined2 *)0x0;
        local_240 = local_250;
        local_23c = local_24c;
        local_208 = local_228._0_16_;
        local_210 = (undefined2 *)FUN_14018b280(0x10);
        local_208 = CONCAT88(local_210 + 8,local_210);
        if (local_210 != (undefined2 *)0x0) {
            *local_210 = 0;
        }
        local_1f6 = 0;
        if (puVar7 != (undefined8 *)0x0) {
            local_228._0_16_ = CONCAT88(local_228._8_8_,puVar7);
            (**(code **)*puVar7)(puVar7);
        }
        uVar4 = CONCAT13(in_XMM8_Bd,CONCAT12(in_XMM8_Bc,CONCAT11(in_XMM8_Bb,in_XMM8_Ba))) ^
                CONCAT13(in_XMM8_Bd,CONCAT12(in_XMM8_Bc,CONCAT11(in_XMM8_Bb,in_XMM8_Ba)));
        bVar14 = (byte)uVar4;
        uVar15 = (undefined)(uVar4 >> 8);
        uVar16 = (undefined)(uVar4 >> 0x10);
        uVar17 = (undefined)(uVar4 >> 0x18);
        uVar2 = CONCAT13(in_XMM8_Bh,CONCAT12(in_XMM8_Bg,CONCAT11(in_XMM8_Bf,in_XMM8_Be))) ^
                CONCAT13(in_XMM8_Bh,CONCAT12(in_XMM8_Bg,CONCAT11(in_XMM8_Bf,in_XMM8_Be)));
        uVar18 = (undefined)uVar2;
        uVar19 = (undefined)(uVar2 >> 8);
        uVar20 = (undefined)(uVar2 >> 0x10);
        uVar21 = (undefined)(uVar2 >> 0x18);
        local_1f8 = 1;
        auVar10 = SUB1614(_DAT_140b7b6f0 >> 0x38,0);
        auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                            SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                             (uVar21,CONCAT114(SUB161(_DAT_140b7b6f0 >> 0x38,0)
                                                                                                                     ,SUB1614(_DAT_140b7b6f0,0))) >>
                                                                                                                                                  0x70,0),CONCAT113(uVar20,SUB1613(_DAT_140b7b6f0,0)
                                                                             )) >> 0x68,0),
                                                                             CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30,0),
                                                                                       SUB1612(_DAT_140b7b6f0,0))) >> 0x60,0),
                                                            CONCAT111(uVar19,SUB1611(_DAT_140b7b6f0,0))) >>
                                                                                                         0x58,0),CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28,0)
                                                            ,SUB1610(_DAT_140b7b6f0,0))) >>
                                                                                         0x50,0),CONCAT19(uVar18,SUB169(_DAT_140b7b6f0,0)))
                                                                   >> 0x48,0),
                                                    CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20,0),
                                                             SUB168(_DAT_140b7b6f0,0))) >> 0x40,0),
                                    uVar17),(SUB167(_DAT_140b7b6f0,0) >> 0x18) << 0x30);
        auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30,0),uVar16),
                            (SUB165(_DAT_140b7b6f0,0) >> 0x10) << 0x20);
        auVar11 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar12 >> 0x20,0),uVar15),
                                              (SUB163(_DAT_140b7b6f0,0) >> 8) << 0x10) >> 0x10,0),
                            SUB162(_DAT_140b7b6f0,0) & 0xff | (ushort)bVar14 << 8);
        iVar3 = SUB164(CONCAT214((short)(uVar2 >> 0x10),
                                 CONCAT212(SUB162(auVar13 >> 0x30,0),SUB1612(auVar11,0))) >> 0x60,0);
        auVar12 = CONCAT610(SUB166(CONCAT412(iVar3,CONCAT210((short)uVar2,SUB1610(auVar11,0))) >> 0x50,0
        ),CONCAT28(SUB162(auVar12 >> 0x20,0),SUB168(auVar11,0)));
        local_1d8 = (float)SUB164(auVar12 >> 0x40,0) * 0.003921569;
        fStack468 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar12 >> 0x40,0),(short)(uVar4 >> 0x10)),
                                            (SUB166(auVar11,0) >> 0x10) << 0x20) >> 0x20,0) *
                    0.003921569;
        fStack464 = (float)(SUB164(auVar11,0) & 0xffff | uVar4 << 0x10) * 0.003921569;
        fStack460 = (float)iVar3 * 0.003921569;
        uVar4 = FUN_140141f10(DAT_140c63678,&local_1d8);
        auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                              SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                               (uVar21,CONCAT114(SUB141(auVar10 >> 0x38,0),
                                                                                                                                                                 auVar10)) >> 0x70,0),
                                                                                                                                CONCAT113(uVar20,SUB1413(auVar10,0))) >> 0x68,0),
                                                                                                               CONCAT112(SUB141(auVar10 >> 0x30,0),
                                                                                                                         SUB1412(auVar10,0))) >> 0x60,0),
                                                                                              CONCAT111(uVar19,SUB1411(auVar10,0))) >> 0x58,0),
                                                                                      CONCAT110(SUB141(auVar10 >> 0x28,0),
                                                                                                SUB1410(auVar10,0))) >> 0x50,0),
                                                                     CONCAT19(uVar18,SUB149(auVar10,0))) >> 0x48,0),
                                                    CONCAT18(SUB141(auVar10 >> 0x20,0),SUB148(auVar10,0)
                                                    )) >> 0x40,0),uVar17),
                           (SUB147(auVar10,0) >> 0x18) << 0x30);
        auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30,0),uVar16),
                            (SUB145(auVar10,0) >> 0x10) << 0x20);
        auVar11 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar12 >> 0x20,0),uVar15),
                                              (SUB143(auVar10,0) >> 8) << 0x10) >> 0x10,0),
                            SUB142(auVar10,0) & 0xff | (ushort)bVar14 << 8);
        iVar3 = SUB164(CONCAT214(CONCAT11(uVar21,uVar20),
                                 CONCAT212(SUB162(auVar13 >> 0x30,0),SUB1612(auVar11,0))) >> 0x60,0);
        auVar12 = CONCAT610(SUB166(CONCAT412(iVar3,CONCAT210(CONCAT11(uVar19,uVar18),SUB1610(auVar11,0))
                            ) >> 0x50,0),
                            CONCAT28(SUB162(auVar12 >> 0x20,0),SUB168(auVar11,0)));
        local_1e8 = (float)SUB164(auVar12 >> 0x40,0) * 0.003921569;
        fStack484 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar12 >> 0x40,0),CONCAT11(uVar17,uVar16)),
                                            (SUB166(auVar11,0) >> 0x10) << 0x20) >> 0x20,0) *
                    0.003921569;
        fStack480 = (float)(SUB164(auVar11,0) & 0xffff | (uint)CONCAT11(uVar15,bVar14) << 0x10) *
                    0.003921569;
        fStack476 = (float)iVar3 * 0.003921569;
        local_140 = FUN_140141f10(DAT_140c63678,&local_1e8);
        lVar9 = DAT_140c63678;
        local_15c = 0x3f800000;
        uVar8 = (ulonglong)local_140;
        local_258 = local_248;
        local_254 = local_244;
        local_150 = DAT_140c77760;
        local_160 = 1;
        local_15e = 0;
        local_14c = DAT_140c77764;
        local_148 = 0;
        if (uVar8 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            iVar3 = *(int *)((ulonglong)local_140 * 0x20 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28));
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)local_140 * 0x20 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) =
                        iVar3 + 1;
            }
        }
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar9 + 0x30)) {
            lVar5 = (ulonglong)uVar4 * 0x20;
            iVar3 = *(int *)(lVar5 + 0x10 + *(longlong *)(lVar9 + 0x28));
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *)(lVar5 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar3 + 1;
            }
        }
        local_138 = 0;
        local_d8 = 0;
        puVar7 = local_118;
        lVar5 = 0;
        do {
            uVar1 = *(undefined4 *)((longlong)&DAT_140a1b148 + lVar5);
            *(undefined4 *)((longlong)auStack232 + lVar5) = 0;
            lVar6 = lVar5 + 4;
            *(undefined4 *)((longlong)auStack248 + lVar5) = uVar1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
            lVar5 = lVar6;
        } while (lVar6 < 0x10);
        local_78 = 0;
        puVar7 = local_b8;
        lVar5 = 0;
        do {
            uVar1 = *(undefined4 *)((longlong)&DAT_140a1b148 + lVar5);
            *(undefined4 *)((longlong)auStack136 + lVar5) = 0;
            lVar6 = lVar5 + 4;
            *(undefined4 *)((longlong)auStack152 + lVar5) = uVar1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
            lVar5 = lVar6;
        } while (lVar6 < 0x10);
        local_198 = &local_238;
        local_13c = uVar4;
        if (&local_238 != (code ***)0x0) {
            (**local_238)(&local_238);
            lVar9 = DAT_140c63678;
        }
        local_158 = local_250 - local_258;
        local_154 = local_24c - local_254;
        local_190 = local_258;
        local_18c = local_258;
        local_188 = local_250;
        local_184 = local_250;
        local_180 = local_250;
        local_17c = local_250;
        local_178 = local_254;
        local_174 = local_254;
        local_170 = local_24c;
        local_16c = local_24c;
        local_168 = local_24c;
        local_164 = local_24c;
        FUN_1401429a0(lVar9,uVar8);
        FUN_1401429a0(DAT_140c63678,uVar4);
        local_1c8 = 0x3f800000;
        uStack452 = 0x3f800000;
        uStack448 = 0x3f800000;
        uStack444 = 0x3f800000;
        if (&local_238 != (code ***)0x0) {
            local_268 = 0;
            local_1b8 = ZEXT816(CONCAT44((float)param_2[1],(float)*param_2));
            local_1a8 = ZEXT816(CONCAT44((float)param_2[3],(float)(int)*(undefined8 *)(param_2 + 2)));
            FUN_140100010(&local_198,local_1b8,&local_1c8);
            if (local_198 != (code ***)0x0) {
                (*(*local_198)[1])();
            }
        }
        FUN_1401429a0(DAT_140c63678,local_13c);
        FUN_1401429a0(DAT_140c63678,local_140);
        local_238 = (code **)&PTR_LAB_140b56c80;
        if (local_228._0_8_ != (longlong *)0x0) {
            (**(code **)(*local_228._0_8_ + 8))();
            local_228._0_16_ = local_228._0_16_ & (undefined  [16])0xffffffffffffffff;
        }
        if (local_228._8_8_ != (longlong *)0x0) {
            (**(code **)(*local_228._8_8_ + 8))();
            local_228._0_16_ = local_228._0_16_ & (undefined  [16])0xffffffffffffffff;
        }
        if (local_210 != (undefined2 *)0x0) {
            FUN_14018b900(local_210,0);
        }
        (**(code **)(*DAT_140c65680 + 0x48))();
    }
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack648);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140528bd0(undefined8 *param_1)

{
    longlong lVar1;
    uint uVar2;
    float fVar3;
    char cVar4;
    uint uVar5;
    int iVar6;
    undefined *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined8 uVar11;
    longlong *plVar12;
    longlong lVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    longlong **pplVar16;
    longlong **pplVar17;
    longlong lVar18;
    longlong **pplVar19;
    undefined auVar20 [16];
    undefined extraout_XMM0 [16];
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined in_XMM1_Bg;
    undefined in_XMM1_Bh;
    longlong local_res8;
    ulonglong in_stack_00000028;
    undefined8 in_stack_00000030;
    ulonglong in_stack_00000038;
    undefined4 uVar23;
    undefined8 in_stack_ffffffffffffff98;
    longlong local_58;
    longlong local_50;
    longlong local_48;
    uint local_40;
    undefined4 uStack60;
    undefined8 local_38;
    undefined auVar21 [16];
    undefined auVar22 [16];

    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b6c3c0;
    FUN_1401095e0(param_1 + 0x81);
    FUN_1401095e0(param_1 + 0x87);
    uVar5 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
            CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
    uVar2 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
            CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
    auVar22 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char)(uVar2 >> 0x18),
                                                                                                                                            CONCAT114(SUB161(_DAT_140b7b6f0 >> 0x38,0),
                                                                                                                                                      SUB1614(_DAT_140b7b6f0,0))) >> 0x70,0),
                                                                                                                            CONCAT113((char)(uVar2 >> 0x10),
                                                                                                                                      SUB1613(_DAT_140b7b6f0,0))) >> 0x68,0),
                                                                                                           CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30,0),
                                                                                                                     SUB1612(_DAT_140b7b6f0,0))) >> 0x60,0),
                                                                                          CONCAT111((char)(uVar2 >> 8),
                                                                                                    SUB1611(_DAT_140b7b6f0,0))) >> 0x58,0),
                                                                                  CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28,0),
                                                                                            SUB1610(_DAT_140b7b6f0,0))) >> 0x50,0),
                                                                 CONCAT19((char)uVar2,SUB169(_DAT_140b7b6f0,0))) >>
                                                                                                                 0x48,0),
                                                CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20,0),
                                                         SUB168(_DAT_140b7b6f0,0))) >> 0x40,0),
                                (char)(uVar5 >> 0x18)),(SUB167(_DAT_140b7b6f0,0) >> 0x18) << 0x30);
    auVar21 = CONCAT115(CONCAT101(SUB1610(auVar22 >> 0x30,0),(char)(uVar5 >> 0x10)),
                        (SUB165(_DAT_140b7b6f0,0) >> 0x10) << 0x20);
    auVar20 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar21 >> 0x20,0),
                                                            (uVar5 >> 8) << 0x18) >> 0x18,0),
                                          (SUB163(_DAT_140b7b6f0,0) >> 8) << 0x10) >> 0x10,0),
                        SUB162(_DAT_140b7b6f0,0) & 0xff | (ushort)(byte)uVar5 << 8);
    iVar6 = SUB164(CONCAT214((short)(uVar2 >> 0x10),
                             CONCAT212(SUB162(auVar22 >> 0x30,0),SUB1612(auVar20,0))) >> 0x60,0);
    auVar21 = CONCAT610(SUB166(CONCAT412(iVar6,CONCAT210((short)uVar2,SUB1610(auVar20,0))) >> 0x50,0),
                        CONCAT28(SUB162(auVar21 >> 0x20,0),SUB168(auVar20,0)));
    fVar3 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar21 >> 0x40,0),(short)(uVar5 >> 0x10)),
                                    (SUB166(auVar20,0) >> 0x10) << 0x20) >> 0x20,0) * 0.003921569;
    *(undefined (*) [16])(param_1 + 0x8e) =
            CONCAT412((float)iVar6 * 0.003921569,
                      CONCAT48((float)(SUB164(auVar20,0) & 0xffff | uVar5 << 0x10) * 0.003921569,
                               CONCAT17((char)((uint)fVar3 >> 0x18),
                                        CONCAT16((char)((uint)fVar3 >> 0x10),
                                                 CONCAT15((char)((uint)fVar3 >> 8),
                                                          CONCAT14(SUB41(fVar3,0),
                                                                   (float)SUB164(auVar21 >> 0x40,0) *
                                                                   0.003921569))))));
    puVar7 = (undefined *)FUN_14018b280(0x30);
    uVar15 = 0;
    param_1[0x92] = puVar7;
    param_1[0x93] = 0;
    *puVar7 = 0;
    *(undefined8 *)(param_1[0x92] + 8) = 0;
    *(undefined8 *)(param_1[0x92] + 0x10) = param_1[0x92];
    *(undefined8 *)(param_1[0x92] + 0x18) = param_1[0x92];
    param_1[0x97] = 0;
    param_1[0x96] = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined (*) [16])(param_1 + 0x9c) = extraout_XMM0 & (undefined  [16])0x0;
    *(undefined4 *)((longlong)param_1 + 0x4f4) = 1;
    *(undefined4 *)(param_1 + 0x9f) = 5;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    puVar7 = (undefined *)FUN_14018b280(0x380,0);
    param_1[0xae] = 0;
    param_1[0xad] = puVar7;
    *puVar7 = 0;
    *(undefined8 *)(param_1[0xad] + 8) = 0;
    *(undefined8 *)(param_1[0xad] + 0x10) = param_1[0xad];
    *(undefined8 *)(param_1[0xad] + 0x18) = param_1[0xad];
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    FUN_1401095e0(param_1 + 0xb8);
    FUN_1401095e0(param_1 + 0xbe);
    *(undefined4 *)(param_1 + 0xc4) = 1;
    param_1[0xc6] = 0;
    param_1[0xc5] = 0;
    puVar7 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xc9] = 0;
    param_1[200] = puVar7;
    *puVar7 = 0;
    *(undefined8 *)(param_1[200] + 8) = 0;
    lVar18 = DAT_140c658f8;
    *(undefined8 *)(param_1[200] + 0x10) = param_1[200];
    *(undefined8 *)(param_1[200] + 0x18) = param_1[200];
    param_1[0x36] = param_1[0x36] | 0x80000000;
    uVar8 = uVar15;
    if (lVar18 != 0) {
        uVar8 = (**(code **)(**(longlong **)(lVar18 + 0x68) + 0x10))();
        uVar8 = uVar8 / 0xc;
    }
    uVar23 = (undefined4)((ulonglong)in_stack_00000030 >> 0x20);
    uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (uVar8 != 0) {
        lVar18 = 0;
        do {
            lVar10 = DAT_140c658f8;
            if (((DAT_140c658f8 == 0) || (*(longlong *)(DAT_140c658f8 + 0x10) == 0)) ||
                (uVar9 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x68) + 0x10))(),
                        uVar9 / 0xc <= uVar15)) {
                puVar14 = (undefined8 *)0x0;
            }
            else {
                puVar14 = (undefined8 *)(*(longlong *)(lVar10 + 0x10) + lVar18);
            }
            if (puVar14 != (undefined8 *)0x0) {
                uVar5 = (**(code **)*puVar14)(puVar14);
                lVar10 = param_1[0x92];
                lVar13 = lVar10;
                lVar1 = *(longlong *)(lVar10 + 8);
                while (lVar1 != 0) {
                    if (*(uint *)(lVar1 + 0x20) < uVar5) {
                        lVar1 = *(longlong *)(lVar1 + 0x18);
                    }
                    else {
                        lVar13 = lVar1;
                        lVar1 = *(longlong *)(lVar1 + 0x10);
                    }
                }
                if ((lVar13 == lVar10) || (uVar5 < *(uint *)(lVar13 + 0x20))) {
                    local_58 = lVar10;
                    plVar12 = &local_58;
                }
                else {
                    plVar12 = &local_res8;
                    local_res8 = lVar13;
                }
                if (*plVar12 == param_1[0x92]) {
                    lVar10 = FUN_14018b280(0x48);
                    if (lVar10 == 0) {
                        uVar11 = 0;
                    }
                    else {
                        uVar11 = FUN_140527f50(lVar10,puVar14);
                    }
                    uVar5 = (**(code **)*puVar14)(puVar14);
                    lVar10 = param_1[0x92];
                    lVar13 = lVar10;
                    lVar1 = *(longlong *)(lVar10 + 8);
                    while (lVar1 != 0) {
                        if (*(uint *)(lVar1 + 0x20) < uVar5) {
                            lVar1 = *(longlong *)(lVar1 + 0x18);
                        }
                        else {
                            lVar13 = lVar1;
                            lVar1 = *(longlong *)(lVar1 + 0x10);
                        }
                    }
                    if ((lVar13 == lVar10) || (uVar5 < *(uint *)(lVar13 + 0x20))) {
                        local_38 = 0;
                        local_50 = lVar13;
                        local_40 = uVar5;
                        FUN_140055c60(param_1 + 0x91,&local_48,&local_50,&local_40);
                        lVar13 = local_48;
                    }
                    *(undefined8 *)(lVar13 + 0x28) = uVar11;
                }
            }
            uVar23 = (undefined4)((ulonglong)in_stack_00000030 >> 0x20);
            uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            uVar15 = uVar15 + 1;
            lVar18 = lVar18 + 0x18;
        } while (uVar15 < uVar8);
    }
    pplVar19 = (longlong **)(param_1 + 0xb8);
    pplVar17 = (longlong **)(param_1 + 0x81);
    pplVar16 = (longlong **)(param_1 + 0x87);
    lVar18 = param_1[4];
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x9e) = 3;
    param_1[0x90] = 0;
    param_1[0x95] = 0;
    param_1[0xa9] = 0;
    *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
    if ((lVar18 != 0) &&
        ((*pplVar17 == (longlong *)0x0 ||
                                   (cVar4 = FUN_14002c740(param_1 + 0x83,L"sprMap_PlayerArrow"), cVar4 == '\0')))) {
        plVar12 = (longlong *)FUN_140108e80(lVar18 + 0xf0,L"sprMap_PlayerArrow");
        uVar15 = uVar8;
        if (plVar12 != (longlong *)0x0) {
            do {
                lVar18 = uVar15 + 1;
                uVar15 = uVar15 + 1;
            } while (L"sprMap_PlayerArrow"[lVar18] != L'\0');
            FUN_14001c480(param_1 + 0x83,L"sprMap_PlayerArrow",L"sprMap_PlayerArrow" + uVar15);
        }
        if (plVar12 != *pplVar17) {
            if (plVar12 != (longlong *)0x0) {
                (**(code **)*plVar12)(plVar12);
            }
            if (*pplVar17 != (longlong *)0x0) {
                (**(code **)(**pplVar17 + 8))();
                *pplVar17 = (longlong *)0x0;
            }
            *pplVar17 = plVar12;
        }
    }
    lVar18 = param_1[4];
    if ((lVar18 != 0) &&
        ((*pplVar16 == (longlong *)0x0 ||
                                   (cVar4 = FUN_14002c740(param_1 + 0x89,L"sprMap_LabelBacker"), cVar4 == '\0')))) {
        plVar12 = (longlong *)FUN_140108e80(lVar18 + 0xf0,L"sprMap_LabelBacker");
        uVar15 = uVar8;
        if (plVar12 != (longlong *)0x0) {
            do {
                lVar18 = uVar15 + 1;
                uVar15 = uVar15 + 1;
            } while (L"sprMap_LabelBacker"[lVar18] != L'\0');
            FUN_14001c480(param_1 + 0x89,L"sprMap_LabelBacker",L"sprMap_LabelBacker" + uVar15);
        }
        if (plVar12 != *pplVar16) {
            if (plVar12 != (longlong *)0x0) {
                (**(code **)*plVar12)(plVar12);
            }
            if (*pplVar16 != (longlong *)0x0) {
                (**(code **)(**pplVar16 + 8))();
                *pplVar16 = (longlong *)0x0;
            }
            *pplVar16 = plVar12;
        }
    }
    lVar18 = param_1[4];
    if ((lVar18 != 0) &&
        ((*pplVar19 == (longlong *)0x0 ||
                                   (cVar4 = FUN_14002c740(param_1 + 0xba,L"sprMap_SuperMapEdgeLeft"), cVar4 == '\0')))) {
        plVar12 = (longlong *)FUN_140108e80(lVar18 + 0xf0,L"sprMap_SuperMapEdgeLeft");
        uVar15 = uVar8;
        if (plVar12 != (longlong *)0x0) {
            do {
                lVar18 = uVar15 + 1;
                uVar15 = uVar15 + 1;
            } while (L"sprMap_SuperMapEdgeLeft"[lVar18] != L'\0');
            FUN_14001c480(param_1 + 0xba,L"sprMap_SuperMapEdgeLeft",L"sprMap_SuperMapEdgeLeft" + uVar15);
        }
        if (plVar12 != *pplVar19) {
            if (plVar12 != (longlong *)0x0) {
                (**(code **)*plVar12)(plVar12);
            }
            if (*pplVar19 != (longlong *)0x0) {
                (**(code **)(**pplVar19 + 8))();
                *pplVar19 = (longlong *)0x0;
            }
            *pplVar19 = plVar12;
        }
    }
    lVar18 = param_1[4];
    if ((lVar18 != 0) &&
        ((pplVar16 = (longlong **)(param_1 + 0xbe), *pplVar16 == (longlong *)0x0 ||
                                                                             (cVar4 = FUN_14002c740(param_1 + 0xc0,L"sprMap_SuperMapEdgeRight"), cVar4 == '\0')))) {
        plVar12 = (longlong *)FUN_140108e80(lVar18 + 0xf0,L"sprMap_SuperMapEdgeRight");
        uVar15 = uVar8;
        if (plVar12 != (longlong *)0x0) {
            do {
                lVar18 = uVar15 + 1;
                uVar15 = uVar15 + 1;
            } while (L"sprMap_SuperMapEdgeRight"[lVar18] != L'\0');
            FUN_14001c480(param_1 + 0xc0,L"sprMap_SuperMapEdgeRight",L"sprMap_SuperMapEdgeRight" + uVar15)
                    ;
        }
        if (plVar12 != *pplVar16) {
            if (plVar12 != (longlong *)0x0) {
                (**(code **)*plVar12)(plVar12);
            }
            if (*pplVar16 != (longlong *)0x0) {
                (**(code **)(**pplVar16 + 8))();
                *pplVar16 = (longlong *)0x0;
            }
            *pplVar16 = plVar12;
        }
    }
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined8 *)((longlong)param_1 + 0x534) = 1;
    *(undefined4 *)((longlong)param_1 + 0x53c) = 1;
    param_1[0xb0] = 5;
    lVar18 = FUN_1400e58c0(param_1[4],L"Default");
    plVar12 = (longlong *)param_1[0x56];
    param_1[0x57] = lVar18;
    if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12,*(undefined8 *)(lVar18 + 0x60));
    }
    *(undefined4 *)(param_1 + 0xa0) = 0x44480000;
    *(undefined4 *)((longlong)param_1 + 0x504) = 0x43fa0000;
    *(undefined4 *)(param_1 + 0xa2) = 0x44e74000;
    *(undefined4 *)((longlong)param_1 + 0x514) = 0x44960000;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 1;
    FUN_140538ab0(param_1 + 0xc5,*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(*DAT_140c65670 + 0x98))(DAT_140c65670,L"Shaders\\SimplePS.sho",param_1 + 0xb6);
    (**(code **)(*DAT_140c65670 + 0x98))(DAT_140c65670,L"Shaders\\ZoneMapPS.sho",param_1 + 0xb7);
    in_stack_00000038 = in_stack_00000038 & 0xffffffff00000000;
    uVar15 = CONCAT44(uVar23,1);
    (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,2,*(int *)(param_1 + 0xb0) + 3,1,in_stack_00000028 & 0xffffffff00000000,
             uVar15,in_stack_00000038,0,(ulonglong)uVar5 << 0x20,param_1 + 0xb3);
    (**(code **)(*DAT_140c65670 + 0x50))
            (DAT_140c65670,L"UI\\Textures\\ZoneMapHexes.tex",0,1,2,uVar15 & 0xffffffff00000000,
             in_stack_00000038 & 0xffffffff00000000,0,param_1 + 0xb4);
    FUN_14052a510(param_1);
    uVar15 = uVar8;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c651f8 != 0) || (iVar6 = FUN_140213660(), iVar6 < 0)) {
                // WARNING: Read-only address (ram,0x000140b7b6f0) is written
                return param_1;
            }
            uVar5 = (**(code **)(*DAT_140c63890 + 0x28))();
        }
        else {
            uVar5 = (*DAT_140c63838)(&PTR_u_MapZoneLevelBand_140a6b400,DAT_140c63858);
        }
        if (uVar5 <= (uint)uVar15) {
            return param_1;
        }
        if (DAT_140c63848 == (code *)0x0) {
            uVar9 = uVar8;
            if (_DAT_140c651f8 == 0) {
                iVar6 = FUN_140213660();
                if (iVar6 < 0) {
                    uVar9 = 0;
                }
                else {
                    uVar9 = (**(code **)(*DAT_140c63890 + 0x20))(DAT_140c63890,uVar15);
                }
            }
        }
        else {
            uVar9 = (*DAT_140c63848)(&PTR_u_MapZoneLevelBand_140a6b400,uVar15,DAT_140c63858);
        }
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a98 == 0) && (iVar6 = FUN_140212de0(), -1 < iVar6)) {
                lVar18 = (**(code **)(*DAT_140c64888 + 0x18))();
                goto LAB_140529427;
            }
        }
        else {
            lVar18 = (*DAT_140c63840)(&PTR_u_MapZoneHexGroup_140a6b390,*(undefined4 *)(uVar9 + 4),
                                      DAT_140c63858);
            LAB_140529427:
            if (lVar18 != 0) {
                lVar10 = param_1[200];
                local_40 = *(uint *)(lVar18 + 4);
                lVar18 = lVar10;
                lVar1 = *(longlong *)(lVar10 + 8);
                while (lVar1 != 0) {
                    lVar18 = lVar1;
                    if (local_40 < *(uint *)(lVar1 + 0x20)) {
                        lVar1 = *(longlong *)(lVar1 + 0x10);
                    }
                    else {
                        lVar1 = *(longlong *)(lVar1 + 0x18);
                    }
                }
                if ((lVar18 == lVar10) || (local_40 < *(uint *)(lVar18 + 0x20))) {
                    lVar10 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack60,local_40);
                        *(ulonglong *)(lVar10 + 0x28) = uVar9;
                    }
                    *(longlong *)(lVar18 + 0x10) = lVar10;
                    lVar1 = param_1[200];
                    if (lVar18 == lVar1) {
                        *(longlong *)(lVar1 + 8) = lVar10;
                        *(longlong *)(param_1[200] + 0x18) = lVar10;
                    }
                    else if (lVar18 == *(longlong *)(lVar1 + 0x10)) {
                        *(longlong *)(lVar1 + 0x10) = lVar10;
                    }
                }
                else {
                    lVar10 = FUN_14018b280(0x30,0);
                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack60,local_40);
                        *(ulonglong *)(lVar10 + 0x28) = uVar9;
                    }
                    *(longlong *)(lVar18 + 0x18) = lVar10;
                    if (lVar18 == *(longlong *)(param_1[200] + 0x18)) {
                        *(longlong *)(param_1[200] + 0x18) = lVar10;
                    }
                }
                *(longlong *)(lVar10 + 8) = lVar18;
                *(undefined8 *)(lVar10 + 0x10) = 0;
                *(undefined8 *)(lVar10 + 0x18) = 0;
                FUN_1400081c0();
                param_1[0xc9] = param_1[0xc9] + 1;
            }
        }
        uVar15 = (ulonglong)((uint)uVar15 + 1);
    } while( true );
}



undefined8 FUN_140529550(undefined8 param_1,ulonglong param_2)

{
    FUN_140529590();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140529590(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong *plVar8;

    *param_1 = &PTR_LAB_140b6c3c0;
    if (DAT_140c65b10 == param_1) {
        DAT_140c65b10 = (undefined8 *)0x0;
    }
    lVar6 = *(longlong *)(param_1[0xad] + 0x10);
    if (lVar6 != param_1[0xad]) {
        do {
            FUN_140774790(lVar6 + 0x30);
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
        } while (lVar6 != param_1[0xad]);
    }
    if (param_1[0xae] != 0) {
        lVar6 = *(longlong *)(param_1[0xad] + 8);
        while (lVar6 != 0) {
            FUN_1405387a0(param_1 + 0xac,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_140771ad0(lVar6 + 0x30);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(undefined8 *)(param_1[0xad] + 0x10) = param_1[0xad];
        *(undefined8 *)(param_1[0xad] + 8) = 0;
        *(undefined8 *)(param_1[0xad] + 0x18) = param_1[0xad];
        param_1[0xae] = 0;
    }
    if (param_1[0xa9] != 0) {
        FUN_14018b900(param_1[0xa9],0);
    }
    param_1[0xa9] = 0;
    lVar6 = *(longlong *)(param_1[0x92] + 0x10);
    if (lVar6 != param_1[0x92]) {
        do {
            puVar1 = *(undefined8 **)(lVar6 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
                for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar5 = lVar2;
                }
            }
        } while (lVar6 != param_1[0x92]);
    }
    if (param_1[0xc9] != 0) {
        lVar6 = *(longlong *)(param_1[200] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 199,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(undefined8 *)(param_1[200] + 0x10) = param_1[200];
        *(undefined8 *)(param_1[200] + 8) = 0;
        *(undefined8 *)(param_1[200] + 0x18) = param_1[200];
        param_1[0xc9] = 0;
    }
    FUN_14018b900(param_1[200],0);
    FUN_140538a10(param_1 + 0xc5);
    if ((longlong *)param_1[0xbe] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xbe] + 8))();
        param_1[0xbe] = 0;
    }
    if (param_1[0xc1] != 0) {
        FUN_14018b900(param_1[0xc1],0);
    }
    if ((longlong *)param_1[0xb8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb8] + 8))();
        param_1[0xb8] = 0;
    }
    if (param_1[0xbb] != 0) {
        FUN_14018b900(param_1[0xbb],0);
    }
    if ((longlong *)param_1[0xb7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb7] + 8))();
    }
    if ((longlong *)param_1[0xb6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb6] + 8))();
    }
    if ((longlong *)param_1[0xb5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb5] + 8))();
    }
    if ((longlong *)param_1[0xb4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb4] + 8))();
    }
    if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb3] + 8))();
    }
    if ((longlong *)param_1[0xb2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb2] + 8))();
    }
    if ((longlong *)param_1[0xb1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb1] + 8))();
    }
    if (param_1[0xae] != 0) {
        lVar6 = *(longlong *)(param_1[0xad] + 8);
        while (lVar6 != 0) {
            uVar7 = 0;
            FUN_1405387a0(param_1 + 0xac,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_140774790(lVar6 + 0x30);
            if (*(longlong *)(lVar6 + 0x358) != 0) {
                do {
                    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x350) + uVar7 * 8);
                    if (lVar2 != 0) {
                        FUN_14076f7c0(lVar2);
                        FUN_14018b900(lVar2,0);
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(ulonglong *)(lVar6 + 0x358));
            }
            *(undefined8 *)(lVar6 + 0x358) = 0;
            FUN_140774990(lVar6 + 0x30);
            if (*(longlong *)(lVar6 + 0x370) != 0) {
                lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x368) + 8);
                while (lVar2 != 0) {
                    FUN_1400083b0(lVar6 + 0x360,*(undefined8 *)(lVar2 + 0x18));
                    lVar3 = *(longlong *)(lVar2 + 0x10);
                    FUN_14018b900(lVar2,0);
                    lVar2 = lVar3;
                }
                *(longlong *)(*(longlong *)(lVar6 + 0x368) + 0x10) = *(longlong *)(lVar6 + 0x368);
                *(undefined8 *)(*(longlong *)(lVar6 + 0x368) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar6 + 0x368) + 0x18) = *(longlong *)(lVar6 + 0x368);
                *(undefined8 *)(lVar6 + 0x370) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar6 + 0x368),0);
            lVar2 = *(longlong *)(lVar6 + 0x350);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_140538480(lVar6 + 0x1e0);
            FUN_140538480(lVar6 + 0x70);
            plVar8 = (longlong *)**(longlong **)(lVar6 + 0x68);
            if (plVar8 != *(longlong **)(lVar6 + 0x68)) {
                do {
                    plVar4 = (longlong *)*plVar8;
                    lVar2 = plVar8[3];
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    FUN_14018b900(plVar8,0);
                    plVar8 = plVar4;
                } while (plVar4 != (longlong *)*(longlong *)(lVar6 + 0x68));
            }
            *(undefined8 *)*(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(lVar6 + 0x68);
            *(longlong *)(*(longlong *)(lVar6 + 0x68) + 8) = *(longlong *)(lVar6 + 0x68);
            FUN_14018b900(*(undefined8 *)(lVar6 + 0x68),0);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(undefined8 *)(param_1[0xad] + 0x10) = param_1[0xad];
        *(undefined8 *)(param_1[0xad] + 8) = 0;
        *(undefined8 *)(param_1[0xad] + 0x18) = param_1[0xad];
        param_1[0xae] = 0;
    }
    FUN_14018b900(param_1[0xad],0);
    FUN_140538590(param_1 + 0x96);
    if (param_1[0x93] != 0) {
        lVar6 = *(longlong *)(param_1[0x92] + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x91,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(undefined8 *)(param_1[0x92] + 0x10) = param_1[0x92];
        *(undefined8 *)(param_1[0x92] + 8) = 0;
        *(undefined8 *)(param_1[0x92] + 0x18) = param_1[0x92];
        param_1[0x93] = 0;
    }
    FUN_14018b900(param_1[0x92],0);
    if ((longlong *)param_1[0x87] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x87] + 8))();
        param_1[0x87] = 0;
    }
    if (param_1[0x8a] != 0) {
        FUN_14018b900(param_1[0x8a],0);
    }
    if ((longlong *)param_1[0x81] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if (param_1[0x84] != 0) {
        FUN_14018b900(param_1[0x84],0);
    }
    FUN_1400c6030(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140529b60(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    int *piVar9;
    int iVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined8 local_res8;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48 [2];
    undefined4 local_40;
    undefined4 local_38;
    undefined4 local_30;

    if (*(longlong *)(param_1 + 0x548) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x548),0);
    }
    uVar12 = 0;
    *(longlong **)(param_1 + 0x480) = param_2;
    *(undefined8 *)(param_1 + 0x548) = 0;
    if (param_2 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x534) = 0;
        return;
    }
    uVar1 = (**(code **)*param_2)(param_2);
    lVar6 = *(longlong *)(param_1 + 0x480);
    local_res8 = CONCAT44(local_res8._4_4_,uVar1);
    lVar4 = FUN_140538120(param_1 + 0x560,&local_res8);
    if (*(longlong *)(lVar4 + 8) != lVar6) {
        *(longlong *)(lVar4 + 8) = lVar6;
    }
    *(undefined4 *)(param_1 + 0x584) = 0;
    uVar5 = (**(code **)(*param_2 + 0x58))(param_2);
    FUN_14044a3b0(local_48,uVar5);
    *(undefined4 *)(param_1 + 0x500) = local_48[0];
    *(undefined4 *)(param_1 + 0x504) = local_40;
    *(undefined4 *)(param_1 + 0x508) = uStack96;
    *(undefined4 *)(param_1 + 0x50c) = uStack92;
    *(undefined4 *)(param_1 + 0x510) = local_38;
    *(undefined4 *)(param_1 + 0x514) = local_30;
    *(undefined4 *)(param_1 + 0x518) = uStack80;
    *(undefined4 *)(param_1 + 0x51c) = uStack76;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x18))();
    if (lVar6 != 0) {
        puVar7 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x18))();
        uVar2 = (**(code **)*puVar7)(puVar7);
        lVar6 = *(longlong *)(param_1 + 0x490);
        local_res8 = lVar6;
        lVar4 = *(longlong *)(lVar6 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar2) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res8 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res8 == lVar6) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar6;
        }
        if ((local_res8 != lVar6) &&
            (*(longlong *)(local_res8 + 0x28) != *(longlong *)(param_1 + 0x4a8))) {
            *(longlong *)(param_1 + 0x4a8) = *(longlong *)(local_res8 + 0x28);
        }
    }
    FUN_14052b650(param_1);
    uVar5 = (**(code **)(*param_2 + 0x80))(param_2);
    FUN_140538630(param_1 + 0x4b0,uVar5);
    lVar6 = (**(code **)(*param_2 + 0x80))(param_2);
    uVar11 = uVar12;
    uVar14 = uVar12;
    if (lVar6 != 0) {
        do {
            lVar6 = (**(code **)(*param_2 + 0x78))(param_2,uVar11);
            uVar1 = *(undefined4 *)(lVar6 + 0x18);
            if (DAT_140c63840 == (code *)0x0) {
                uVar8 = uVar12;
                if ((_DAT_140c64ce4 == 0) && (iVar10 = FUN_140214320(), -1 < iVar10)) {
                    uVar8 = (**(code **)(*DAT_140c63c38 + 0x18))(DAT_140c63c38,uVar1);
                }
            }
            else {
                uVar8 = (*DAT_140c63840)(&PTR_u_MapZoneSprite_140a6b4a8,uVar1,DAT_140c63858);
            }
            uVar8 = *(ulonglong *)(uVar8 + 8);
            uVar13 = uVar12;
            if ((uVar8 != 0) && (uVar8 <= DAT_140c3fe70)) {
                uVar13 = DAT_140c3fe68 + uVar8;
            }
            if (*(longlong *)(param_1 + 0x20) != 0) {
                FUN_140109710(*(longlong *)(param_1 + 0x4b0) + uVar14,*(longlong *)(param_1 + 0x20) + 0xf0,
                              uVar13,0);
            }
            uVar11 = uVar11 + 1;
            uVar8 = (**(code **)(*param_2 + 0x80))(param_2);
            uVar14 = uVar14 + 0x30;
        } while (uVar11 < uVar8);
    }
    piVar9 = (int *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
    iVar10 = (piVar9[3] - piVar9[1]) * (piVar9[2] - *piVar9);
    uVar5 = FUN_14018b280(iVar10,0);
    *(undefined8 *)(param_1 + 0x548) = uVar5;
    FUN_1407e4830(uVar5,0,iVar10);
    iVar3 = FUN_140529ff0(param_1);
    iVar10 = *(int *)(param_1 + 0x534);
    *(int *)(param_1 + 0x534) = iVar3;
    if (iVar3 != iVar10) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ZoneMapPlayerIndicatorUpdated",
                      &DAT_1409ef904,iVar3);
    }
    return;
}



void FUN_140529e90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   int param_5)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined4 local_res8;
    undefined4 local_resc;

    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *(undefined4 *)(param_1 + 0x520) = *param_4;
    *(undefined4 *)(param_1 + 0x524) = uVar2;
    *(undefined4 *)(param_1 + 0x528) = uVar3;
    *(undefined4 *)(param_1 + 0x52c) = uVar4;
    lVar6 = FUN_14024acc0(param_2);
    if (lVar6 != 0) {
        lVar6 = 0;
        if (param_5 != 0) {
            if (DAT_140c658f8 != 0) {
                local_res8 = DAT_140c77760;
                local_resc = DAT_140c77764;
                lVar6 = FUN_140448be0(*(undefined8 *)(param_1 + 0x480),param_2,param_3,param_4,
                                      *(undefined8 *)(param_1 + 0x480),1,&local_res8);
            }
            if (lVar6 != *(longlong *)(param_1 + 0x480)) {
                FUN_140529b60(param_1,lVar6);
            }
        }
        iVar5 = FUN_140529ff0(param_1);
        iVar1 = *(int *)(param_1 + 0x534);
        *(int *)(param_1 + 0x534) = iVar5;
        if (iVar5 != iVar1) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ZoneMapPlayerIndicatorUpdated",
                          &DAT_1409ef904,iVar5);
        }
    }
    return;
}



void FUN_140529f90(longlong param_1)

{
    int iVar1;
    int iVar2;

    iVar2 = FUN_140529ff0();
    iVar1 = *(int *)(param_1 + 0x534);
    *(int *)(param_1 + 0x534) = iVar2;
    if (iVar2 != iVar1) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ZoneMapPlayerIndicatorUpdated",
                      &DAT_1409ef904,iVar2);
        return;
    }
    return;
}



undefined8 FUN_140529ff0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined local_18 [16];

    if (*(longlong *)(param_1 + 0x480) == 0) {
        return 1;
    }
    lVar6 = *(longlong *)(DAT_140c65898 + 0x6490);
    if ((lVar6 == 0) && (lVar6 = *(longlong *)(DAT_140c65898 + 0x78), lVar6 == 0)) {
        return 0;
    }
    local_18 = CONCAT412(*(float *)(lVar6 + 0x11ec) + 0.0,
                         CONCAT48(*(float *)(lVar6 + 0x11e8) + 0.0,
                                  CONCAT44(*(float *)(lVar6 + 0x11e4) + 0.1,
                                           *(float *)(lVar6 + 0x11e0) + 0.0)));
    plVar5 = (longlong *)
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1c8))
            (*(longlong **)(DAT_140c65898 + 0x7248),local_18);
    if ((plVar5 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5), iVar2 != 0)) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x20))();
        if (iVar2 != 0) {
            puVar1 = *(undefined8 **)(param_1 + 0x480);
            iVar2 = FUN_14052b8d0(param_1,lVar6);
            iVar4 = (**(code **)*puVar1)(puVar1);
            if (iVar2 != iVar4) {
                return 0;
            }
        }
        return 1;
    }
    if (*(int *)(param_1 + 0x4f0) == 4) {
        return 0;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = (**(code **)(*plVar5 + 0xd8))(plVar5);
    lVar6 = FUN_14024db80(uVar3);
    if (lVar6 == 0) {
        return 1;
    }
    if ((*(byte *)(lVar6 + 0x1c) & 2) != 0) {
        return 1;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x20))();
    if (iVar2 != 0) {
        return 1;
    }
    return 0;
}



void FUN_14052a120(longlong param_1)

{
    undefined4 *puVar1;
    undefined auVar2 [16];
    undefined4 uVar3;
    int *piVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    undefined4 *puVar11;
    ulonglong uVar12;

    if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
        piVar4 = (int *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
        uVar10 = (piVar4[3] - piVar4[1]) * (piVar4[2] - *piVar4);
        auVar2 = ZEXT816(8) * ZEXT416(uVar10);
        uVar5 = SUB168(auVar2,0);
        if (SUB168(auVar2 >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        puVar6 = (undefined4 *)FUN_14018b280(uVar5,0);
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0xa0))
                (*(longlong **)(param_1 + 0x480),puVar6,uVar10);
        if (uVar7 != 0) {
            uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar7),0);
            if (SUB168(ZEXT816(8) * ZEXT816(uVar7) >> 0x40,0) != 0) {
                uVar5 = 0xffffffffffffffff;
            }
            lVar8 = FUN_14018b280(uVar5,0);
            uVar12 = 0;
            puVar11 = puVar6;
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                lVar9 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x60))
                        (*(longlong **)(param_1 + 0x480),puVar11);
                if ((lVar9 != -1) && (*(char *)(lVar9 + *(longlong *)(param_1 + 0x548)) == '\0')) {
                    puVar1 = (undefined4 *)(lVar8 + uVar12 * 8);
                    uVar12 = (ulonglong)((int)uVar12 + 1);
                    *puVar1 = *puVar11;
                    puVar1[1] = puVar11[1];
                }
                puVar11 = puVar11 + 2;
            }
            FUN_14052a270(param_1,lVar8,uVar12);
            FUN_14018b900(lVar8,0);
        }
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x98))();
        *(undefined4 *)(param_1 + 0x540) = uVar3;
        FUN_14018b900(puVar6,0);
    }
    return;
}



void FUN_14052a270(longlong param_1,int *param_2,ulonglong param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;
    undefined4 *puVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    undefined4 local_28 [2];
    undefined8 local_20;
    undefined4 local_14;

    if (((param_3 != 0) && (*(longlong *)(param_1 + 0x480) != 0)) && (*(int *)(param_1 + 0x584) == 2))
    {
        uVar8 = param_3;
        piVar6 = param_2;
        if (param_3 != 0) {
            do {
                lVar5 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x60))
                        (*(longlong **)(param_1 + 0x480),piVar6);
                if (lVar5 != -1) {
                    *(undefined *)(lVar5 + *(longlong *)(param_1 + 0x548)) = 1;
                }
                uVar8 = uVar8 - 1;
                piVar6 = piVar6 + 2;
            } while (uVar8 != 0);
        }
        if ((*(longlong **)(param_1 + 0x590) != (longlong *)0x0) &&
        (*(longlong *)(param_1 + 0x5b0) != 0)) {
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x590) + 0x30))();
            if (iVar4 == 0) {
                FUN_14052d5c0(param_1);
            }
            else {
                (**(code **)(*DAT_140c65670 + 0x1f8))();
                (**(code **)(*DAT_140c65670 + 0x200))();
                local_20 = *(undefined8 *)(param_1 + 0x590);
                local_28[0] = 1;
                local_14 = 0;
                uVar9 = 1;
                (**(code **)(*DAT_140c65670 + 0x208))
                        (DAT_140c65670,local_28,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
                (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
                (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x5b0),0);
                lVar5 = (**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,(int)param_3 * 0x1c,0);
                if (lVar5 != 0) {
                    piVar6 = (int *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
                    if ((int)param_3 != 0) {
                        uVar8 = param_3 & 0xffffffff;
                        puVar7 = (undefined4 *)(lVar5 + 0x10);
                        do {
                            iVar4 = *param_2;
                            iVar1 = param_2[1];
                            iVar2 = *piVar6;
                            iVar3 = piVar6[1];
                            puVar7[-1] = 0x3f800000;
                            *puVar7 = 0xff020202;
                            param_2 = param_2 + 2;
                            puVar7[-4] = (float)(iVar4 - iVar2);
                            puVar7[-3] = (float)(iVar1 - iVar3);
                            puVar7[-2] = 0;
                            uVar8 = uVar8 - 1;
                            puVar7 = puVar7 + 7;
                        } while (uVar8 != 0);
                    }
                    (**(code **)(*DAT_140c65670 + 0xe8))();
                }
                (**(code **)(*DAT_140c65670 + 0x288))
                        (DAT_140c65670,0,0,param_3 & 0xffffffff,CONCAT44(uVar9,1));
                (**(code **)(*DAT_140c65670 + 0x2a0))();
                (**(code **)(*DAT_140c65670 + 0x220))();
                (**(code **)(*DAT_140c65670 + 0x228))();
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14052a510(longlong param_1)

{
    longlong **pplVar1;
    longlong lVar2;
    uint *puVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined extraout_XMM0 [16];
    undefined auVar6 [16];
    undefined auVar7 [16];
    float fVar9;
    undefined auVar8 [16];
    float fVar10;
    float fVar12;
    undefined4 uVar13;
    undefined in_XMM5 [16];
    float fVar14;
    undefined auVar11 [16];
    uint local_res8;
    uint local_res10;
    uint local_res18 [2];

    pplVar1 = (longlong **)(param_1 + 0x598);
    if (*pplVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(**pplVar1 + 0x18))();
        if (*(uint *)(lVar2 + 8) < *(int *)(param_1 + 0x580) + 3U) {
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
            (**(code **)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670,2,*(int *)(param_1 + 0x580) + 3,1,0,1,0,0,0,pplVar1);
        }
        puVar3 = (uint *)(**(code **)(**pplVar1 + 0x48))(*pplVar1,0,local_res18,2);
        auVar8 = _DAT_140b7b470;
        auVar11 = _DAT_140b7b240;
        if (puVar3 != (uint *)0x0) {
            if (*(int *)(param_1 + 0x580) != 0) {
                fVar10 = SUB164(_DAT_140b7b470,0);
                fVar12 = SUB164(_DAT_140b7b470 >> 0x20,0);
                fVar14 = SUB164(_DAT_140b7b470 >> 0x60,0);
                uVar5 = 0;
                auVar6 = extraout_XMM0;
                do {
                    uVar4 = (int)uVar5 + 1;
                    auVar6 = maxps(auVar6 & (undefined  [16])0x0,
                                   *(undefined (*) [16])(*(longlong *)(param_1 + 0x628) + 0x10 + uVar5 * 0x60)
                    );
                    auVar6 = minps(auVar6,auVar11);
                    fVar9 = SUB164(auVar6 >> 0x20,0) * fVar12 + 0.5;
                    local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar6,0) * fVar10 + 0.5),
                                                (char)(longlong)fVar9) << 8;
                    local_res8 = local_res8 |
                                 (uint)(byte)(longlong)(SUB164(auVar6 >> 0x60,0) * fVar14 + 0.5) << 0x18;
                    *puVar3 = local_res8;
                    auVar6 = maxps(ZEXT816(CONCAT44(fVar9,fVar9)) << 0x40 & (undefined  [16])0x0,
                                   *(undefined (*) [16])(uVar5 * 0x60 + *(longlong *)(param_1 + 0x628)));
                    auVar7 = minps(auVar6,auVar11);
                    fVar9 = SUB164(auVar7 >> 0x20,0) * fVar12 + 0.5;
                    auVar6 = ZEXT816(CONCAT44(fVar9,fVar9)) << 0x40 & (undefined  [16])0xffffffffffffffff;
                    local_res10 = (uint)CONCAT11((char)(longlong)(SUB164(auVar7,0) * fVar10 + 0.5),
                                                 (char)(longlong)fVar9) << 8;
                    local_res10 = local_res10 |
                                  (uint)(byte)(longlong)(SUB164(auVar7 >> 0x60,0) * fVar14 + 0.5) << 0x18;
                    puVar3[1] = local_res10;
                    puVar3 = (uint *)((longlong)puVar3 + (ulonglong)local_res18[0]);
                    uVar5 = (ulonglong)uVar4;
                    in_XMM5 = auVar8;
                } while (uVar4 < *(uint *)(param_1 + 0x580));
            }
            auVar11 = _DAT_140b7b240;
            uVar4 = SUB164(in_XMM5,0);
            in_XMM5 = in_XMM5 & (undefined  [16])0x0;
            uVar13 = SUB164(in_XMM5 >> 0x40,0);
            auVar8 = maxps(ZEXT1216(CONCAT48(uVar13,(ulonglong)uVar4) &
                                    (undefined  [12])0xffffffffffffffff),_DAT_140b7afa0);
            auVar8 = minps(auVar8,_DAT_140b7b240);
            local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar8,0) * 255.0 + 0.5),
                                        (char)(longlong)(SUB164(auVar8 >> 0x20,0) * 255.0 + 0.5)) << 8;
            auVar6 = maxps(ZEXT1216(CONCAT48(uVar13,(ulonglong)uVar4) &
                                    (undefined  [12])0xffffffffffffffff),_DAT_140b7b230);
            local_res8 = local_res8 |
                         (uint)(byte)(longlong)(SUB164(auVar8 >> 0x60,0) * 255.0 + 0.5) << 0x18;
            *puVar3 = local_res8;
            auVar8 = minps(auVar6,auVar11);
            local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar8,0) * 255.0 + 0.5),
                                        (char)(longlong)(SUB164(auVar8 >> 0x20,0) * 255.0 + 0.5)) << 8;
            auVar6 = maxps(ZEXT1216(CONCAT48(uVar13,(ulonglong)uVar4) &
                                    (undefined  [12])0xffffffffffffffff),_DAT_140b7afc0);
            local_res8 = local_res8 |
                         (uint)(byte)(longlong)(SUB164(auVar8 >> 0x60,0) * 255.0 + 0.5) << 0x18;
            puVar3[1] = local_res8;
            auVar8 = minps(auVar6,auVar11);
            puVar3 = (uint *)((longlong)puVar3 + (ulonglong)local_res18[0]);
            local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar8,0) * 255.0 + 0.5),
                                        (char)(longlong)(SUB164(auVar8 >> 0x20,0) * 255.0 + 0.5)) << 8;
            auVar6 = maxps(ZEXT1216(CONCAT48(uVar13,(ulonglong)uVar4) &
                                    (undefined  [12])0xffffffffffffffff),_DAT_140b7ad00);
            local_res8 = local_res8 |
                         (uint)(byte)(longlong)(SUB164(auVar8 >> 0x60,0) * 255.0 + 0.5) << 0x18;
            *puVar3 = local_res8;
            auVar6 = minps(auVar6,auVar11);
            local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar6,0) * 255.0 + 0.5),
                                        (char)(longlong)(SUB164(auVar6 >> 0x20,0) * 255.0 + 0.5)) << 8;
            auVar8 = maxps(ZEXT1216(CONCAT48(uVar13,(ulonglong)uVar4) &
                                    (undefined  [12])0xffffffffffffffff),in_XMM5);
            auVar7 = maxps(in_XMM5,in_XMM5);
            auVar8 = minps(auVar8,auVar11);
            auVar11 = minps(auVar7,auVar11);
            local_res8 = local_res8 |
                         (uint)(byte)(longlong)(SUB164(auVar6 >> 0x60,0) * 255.0 + 0.5) << 0x18;
            puVar3[1] = local_res8;
            local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar8,0) * 255.0 + 0.5),
                                        (char)(longlong)(SUB164(auVar8 >> 0x20,0) * 255.0 + 0.5)) << 8;
            local_res8 = local_res8 |
                         (uint)(byte)(longlong)(SUB164(auVar8 >> 0x60,0) * 255.0 + 0.5) << 0x18;
            *(uint *)((longlong)puVar3 + (ulonglong)local_res18[0]) = local_res8;
            local_res8 = (uint)CONCAT11((char)(longlong)(SUB164(auVar11,0) * 255.0 + 0.5),
                                        (char)(longlong)(SUB164(auVar11 >> 0x20,0) * 255.0 + 0.5)) << 8;
            local_res8 = local_res8 |
                         (uint)(byte)(longlong)(SUB164(auVar11 >> 0x60,0) * 255.0 + 0.5) << 0x18;
            ((uint *)((longlong)puVar3 + (ulonglong)local_res18[0]))[1] = local_res8;
            (**(code **)(**pplVar1 + 0x50))(*pplVar1,0);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14052a8c0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 local_res8 [2];
    float local_48;
    float fStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    float local_34;
    float local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;

    if (*(longlong *)(param_1 + 0x480) == 0) goto LAB_14052a940;
    if (*(int *)(param_1 + 0x584) != 2) {
        plVar1 = *(longlong **)(param_1 + 0x588);
        if (plVar1 == (longlong *)0x0) goto LAB_14052a940;
        local_38 = 0;
        iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_38);
        if (iVar3 == 0) goto LAB_14052a940;
        *(undefined4 *)(param_1 + 0x584) = 2;
        FUN_14052a120(param_1);
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x98))();
    if (*(int *)(param_1 + 0x540) != iVar3) {
        FUN_14052a120(param_1);
    }
    LAB_14052a940:
    lVar2 = *(longlong *)(param_1 + 0x4a8);
    if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x20) == 0) &&
            (plVar1 = *(longlong **)(lVar2 + 0x38), plVar1 != (longlong *)0x0)) {
            local_48 = 0.0;
            iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
            if (iVar3 != 0) {
                *(undefined4 *)(lVar2 + 0x20) = 1;
            }
        }
        FUN_14052e280(param_1);
    }
    if ((DAT_140c65898 != 0) && (lVar2 = *(longlong *)(DAT_140c65898 + 0x6490), lVar2 != 0)) {
        local_48 = *(float *)(lVar2 + 0x11e0);
        uStack64 = *(undefined4 *)(lVar2 + 0x11e8);
        uStack60 = *(undefined4 *)(lVar2 + 0x11ec);
        fVar8 = 0.0;
        fStack68 = 0.0;
        uVar4 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
        fVar6 = local_48 - *(float *)(param_1 + 0x550);
        fVar7 = fStack68 - *(float *)(param_1 + 0x554);
        if (_DAT_140c46288 < fVar6 * fVar6 + fVar7 * fVar7 + 0.0) {
            if ((fVar8 < *(float *)(param_1 + 0x288)) && (*(longlong *)(param_1 + 0x10) != 0)) {
                FUN_1400d1a60(*(longlong *)(param_1 + 0x10),uVar4,*(undefined4 *)(DAT_140c65898 + 0x7150));
            }
            FUN_140529e90(param_1);
            FUN_14052e160(param_1);
            *(undefined4 *)(param_1 + 0x400) = 1;
        }
        *(undefined (*) [16])(param_1 + 0x550) =
                CONCAT412(uStack60,CONCAT48(uStack64,CONCAT44(fStack68,local_48)));
    }
    if (*(longlong *)(param_1 + 0x480) != 0) {
        if ((*(longlong *)(param_1 + 0x4a8) != 0) &&
            (iVar3 = FUN_14052b1a0(param_1,&local_48,&local_38,local_res8), iVar3 != 0)) {
            local_38 = 0;
            local_34 = local_48;
            local_24 = 0;
            local_30 = fStack68;
            local_2c = uStack64;
            local_28 = uStack60;
            local_res8[0] = (**(code **)**(undefined8 **)(param_1 + 0x480))();
            uVar5 = FUN_140538120(param_1 + 0x560,local_res8);
            FUN_140773e50(uVar5,*(undefined4 *)(param_1 + 0x400));
        }
        *(undefined4 *)(param_1 + 0x400) = 0;
    }
    return;
}



undefined8 * FUN_14052ab00(longlong param_1,undefined8 *param_2,float *param_3)

{
    float fVar1;
    int *piVar2;
    undefined8 uVar3;
    int iVar4;
    float extraout_XMM0_Da;
    float fVar5;
    undefined4 local_res8;
    undefined4 local_resc;
    int local_68;
    int local_64;
    int local_60;
    int local_5c;
    float local_58;
    undefined4 uStack84;
    float fStack80;
    undefined4 uStack76;
    float local_48;
    undefined4 uStack68;
    float fStack64;
    undefined4 uStack60;
    float local_38;

    FUN_14052b440(param_1,&local_68);
    FUN_14052b130();
    iVar4 = *(int *)(param_1 + 0x4f0);
    if (iVar4 == 4) {
        if (*(longlong *)(param_1 + 0x4a8) == 0) {
            LAB_14052ab57:
            *param_2 = 0xffffffffffffffff;
            return param_2;
        }
        piVar2 = (int *)FUN_140528300(*(longlong *)(param_1 + 0x4a8),&local_58);
        local_68 = *piVar2;
        local_64 = piVar2[1];
        iVar4 = piVar2[2];
        local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x4a8) + 0x24);
        local_resc = *(undefined4 *)(*(longlong *)(param_1 + 0x4a8) + 0x28);
        FUN_14044a2d0(&local_res8,&local_48);
        local_58 = local_48;
        uStack84 = uStack68;
        fStack80 = fStack64;
        uStack76 = uStack60;
        local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x4a8) + 0x2c);
        local_resc = *(undefined4 *)(*(longlong *)(param_1 + 0x4a8) + 0x30);
        FUN_14044a2d0(&local_res8,&local_48);
        fVar5 = (local_38 - local_48) / (float)(iVar4 - local_68);
        local_58 = local_48;
    }
    else if (iVar4 == 3) {
        if (*(longlong **)(param_1 + 0x480) == (longlong *)0x0) goto LAB_14052ab57;
        fVar5 = extraout_XMM0_Da;
        (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
        FUN_14044a2d0();
        local_58 = local_48;
        fStack80 = fStack64;
        if (*(longlong *)(param_1 + 0x480) == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = 0x800;
            if (*(int *)(param_1 + 0x4f0) == 1) {
                iVar4 = 0x1000;
            }
        }
        if (local_60 - local_68 < local_5c - local_64) {
            fVar5 = fVar5 / ((float)(local_5c - local_64) / (float)iVar4);
        }
        else {
            fVar5 = fVar5 / ((float)(local_60 - local_68) / (float)iVar4);
        }
    }
    else {
        fVar5 = extraout_XMM0_Da;
        if (iVar4 < 3) {
            if (*(longlong **)(param_1 + 0x480) == (longlong *)0x0) goto LAB_14052ab57;
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
            FUN_14044a2d0(uVar3,&local_48);
            local_58 = local_48;
            fStack80 = fStack64;
            if (*(int *)(param_1 + 0x4f0) == 1) {
                fVar5 = fVar5 * 0.5;
            }
        }
    }
    fVar1 = param_3[2];
    *(int *)param_2 = (int)((*param_3 - local_58) * (1.0 / fVar5) + 0.5) + local_68;
    *(int *)((longlong)param_2 + 4) = (int)((fVar1 - fStack80) * (1.0 / fVar5) + 0.5) + local_64;
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_14052ad50(undefined8 param_1,int *param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    undefined auVar12 [16];
    float fVar13;
    float fVar14;
    float fVar15;
    undefined local_28 [8];
    undefined8 uStack32;
    undefined4 local_18;
    undefined auVar9 [16];
    undefined4 uVar10;

    _local_28 = SUB1612(_local_28 >> 0x40,0);
    local_18 = SUB164(_local_28 >> 0x80,0);
    uVar1 = FUN_14052af60(param_1,local_28);
    fVar6 = (DAT_140c3b738 + (float)uStack32) / _DAT_140c66f48 + 1.0;
    fVar11 = (DAT_140c3b738 + local_28._0_4_) / DAT_140c66f1c + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = fVar6 * 0.5;
    fVar13 = fVar15 + fVar11;
    auVar12 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar15))) >> 0x20,0),
                        fVar13);
    iVar2 = (int)fVar13;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar13)) {
        uVar8 = SUB168(auVar12,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar14 = SUB164(auVar12,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar12 >> 0x20,0);
    fVar13 = fVar14 * 0.3333333 + 1e-05;
    auVar12 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar12 >> 0x60,0),
                                          CONCAT48(SUB164(auVar12 >> 0x40,0),CONCAT44(uVar10,fVar14)))
                                        >> 0x20,0),fVar13);
    iVar2 = (int)fVar13;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar13)) {
        uVar8 = SUB168(auVar12,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar11 - fVar15)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar11 = SUB164(auVar12,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar4,0) - fVar6) - fVar11) + 1.0 + (fVar14 - fVar11)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar5 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    fVar11 = (fVar6 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar3 = (int)fVar11;
    iVar2 = (int)(SUB164(auVar12,0) * 2.0 + fVar6 + SUB164(auVar5,0));
    *param_2 = iVar2;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(iVar2,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar3 - (uVar1 & 1)));
    }
    param_2[1] = (int)SUB164(auVar4,0);
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_14052af60(longlong param_1,float *param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    float extraout_XMM0_Da;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int local_48;
    int local_44;
    int local_40;
    int local_3c;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;

    FUN_14052b440(param_1,&local_48);
    FUN_14052b130(param_1);
    fVar4 = _DAT_140c7d6c0;
    fVar5 = fRam0000000140c7d6c4;
    fVar7 = fRam0000000140c7d6c8;
    fVar6 = fRam0000000140c7d6cc;
    if (*(int *)(param_1 + 0x4f0) == 4) {
        if (*(longlong *)(param_1 + 0x4a8) != 0) {
            FUN_140528200(*(longlong *)(param_1 + 0x4a8),param_2,param_3,&local_48);
            return param_2;
        }
    }
    else if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
        iVar3 = 0x800;
        iVar2 = 0x800;
        if (*(int *)(param_1 + 0x4f0) == 1) {
            iVar3 = 0x1000;
            iVar2 = 0x1000;
        }
        fVar7 = extraout_XMM0_Da;
        (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
        FUN_14044a2d0();
        iVar1 = *(int *)(param_1 + 0x4f0);
        if (iVar1 == 3) {
            if (local_40 - local_48 < local_3c - local_44) {
                fVar7 = fVar7 / ((float)(local_3c - local_44) / (float)iVar2);
            }
            else {
                fVar7 = fVar7 / ((float)(local_40 - local_48) / (float)iVar3);
            }
        }
        else if (iVar1 < 3) {
            local_48 = local_48 - (int)*(float *)(param_1 + 0x4e0);
            local_44 = local_44 - (int)*(float *)(param_1 + 0x4e4);
            if (iVar1 == 1) {
                fVar7 = fVar7 * 0.5;
            }
        }
        fVar4 = local_38 + (float)(*param_3 - local_48) * fVar7;
        fVar5 = fStack52;
        fVar7 = fStack48 + (float)(param_3[1] - local_44) * fVar7;
        fVar6 = fStack44;
    }
    *param_2 = fVar4;
    param_2[1] = fVar5;
    param_2[2] = fVar7;
    param_2[3] = fVar6;
    return param_2;
}



undefined8 FUN_14052b130(longlong param_1)

{
    undefined8 uVar1;
    float local_28;
    float fStack36;
    float local_18;
    float fStack20;

    if (*(longlong **)(param_1 + 0x480) == (longlong *)0x0) {
        return 0x3f800000;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
    FUN_14044a3b0(&local_28,uVar1);
    if (0.0 <= local_18 - local_28) {
        return CONCAT44(fStack20 - fStack36,(local_18 - local_28) * 0.0004882813);
    }
    return 0;
}



undefined8 FUN_14052b1a0(longlong param_1,int *param_2,float *param_3,float *param_4)

{
    float fVar1;
    int iVar2;
    longlong lVar3;
    int *piVar4;
    undefined8 uVar5;
    float extraout_XMM0_Da;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;

    piVar4 = (int *)FUN_14052b440();
    *param_2 = *piVar4;
    param_2[1] = piVar4[1];
    param_2[2] = piVar4[2];
    param_2[3] = piVar4[3];
    iVar2 = *(int *)(param_1 + 0x4f0);
    if (iVar2 == 4) {
        lVar3 = *(longlong *)(param_1 + 0x4a8);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) != 0)) {
            local_50 = *(undefined4 *)(lVar3 + 0x2c);
            local_4c = *(undefined4 *)(lVar3 + 0x30);
            local_58 = *(undefined4 *)(lVar3 + 0x24);
            local_54 = *(undefined4 *)(lVar3 + 0x28);
            FUN_14044a3b0(&local_48,&local_58);
            *param_3 = (local_38 + local_48) * 0.5;
            param_3[1] = (fStack52 + fStack68) * 0.5;
            param_3[2] = (fStack48 + fStack64) * 0.5;
            param_3[3] = (fStack44 + fStack60) * 0.5;
            piVar4 = (int *)FUN_140528300(*(undefined8 *)(param_1 + 0x4a8),&local_48,param_2);
            *param_2 = *piVar4;
            param_2[1] = piVar4[1];
            iVar2 = piVar4[2];
            param_2[2] = iVar2;
            param_2[3] = piVar4[3];
            *param_4 = (local_38 - local_48) / (float)(iVar2 - *param_2);
            return 1;
        }
    }
    else if (iVar2 == 3) {
        if (*(longlong **)(param_1 + 0x480) != (longlong *)0x0) {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
            FUN_14044a3b0(&local_48,uVar5);
            *param_3 = (local_48 + local_38) * 0.5;
            param_3[1] = (fStack68 + fStack52) * 0.5;
            param_3[2] = (fStack64 + fStack48) * 0.5;
            param_3[3] = (fStack60 + fStack44) * 0.5;
            if (0.0 <= local_38 - local_48) {
                *param_4 = (local_38 - local_48) / (float)(param_2[2] - *param_2);
                return 1;
            }
            *param_4 = 0.0 / (float)(param_2[3] - param_2[1]);
            return 1;
        }
    }
    else if ((iVar2 < 3) && (*(longlong *)(param_1 + 0x480) != 0)) {
        FUN_14052b130(param_1);
        iVar2 = *(int *)(param_1 + 0x4f0);
        fVar8 = 0.5;
        *param_4 = extraout_XMM0_Da;
        if (iVar2 == 1) {
            *param_4 = extraout_XMM0_Da * 0.5;
        }
        FUN_14052b810(param_1,&local_48);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
        FUN_14044a3b0(&local_48,uVar5);
        fVar1 = *param_4;
        *param_3 = local_48;
        param_3[1] = fStack68;
        param_3[2] = fStack64;
        param_3[3] = fStack60;
        fVar6 = fVar1 * *(float *)(param_1 + 0x4e0) + *param_3;
        *param_3 = fVar6;
        fVar7 = fVar1 * *(float *)(param_1 + 0x4e4) + param_3[2];
        param_3[2] = fVar7;
        *param_3 = (float)(param_2[2] - *param_2) * fVar1 * fVar8 + fVar6;
        param_3[2] = (float)(param_2[3] - param_2[1]) * fVar1 * fVar8 + fVar7;
        return 1;
    }
    return 0;
}



int * FUN_14052b440(longlong param_1,int *param_2)

{
    longlong lVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    int local_res8;
    int local_resc;

    iVar5 = *(int *)(param_1 + 0x2cc);
    iVar6 = *(int *)(param_1 + 0x2d4);
    iVar4 = *(int *)(param_1 + 0x2d0);
    iVar3 = *(int *)(param_1 + 0x2d8);
    if ((((iVar6 <= iVar5) || (iVar3 <= iVar4)) ||
         (*(float *)(param_1 + 0x510) < *(float *)(param_1 + 0x500) ||
          *(float *)(param_1 + 0x510) == *(float *)(param_1 + 0x500))) ||
        (*(float *)(param_1 + 0x514) < *(float *)(param_1 + 0x504) ||
         *(float *)(param_1 + 0x514) == *(float *)(param_1 + 0x504))) {
        LAB_14052b618:
        *param_2 = iVar5;
        param_2[1] = iVar4;
        param_2[3] = iVar3;
        param_2[2] = iVar6;
    }
    else {
        if (*(int *)(param_1 + 0x4f0) == 4) {
            lVar1 = *(longlong *)(param_1 + 0x4a8);
            if ((lVar1 == 0) || (*(int *)(lVar1 + 0x20) == 0)) goto LAB_14052b618;
            local_res8 = *(int *)(lVar1 + 0x40);
            local_resc = *(int *)(lVar1 + 0x44);
        }
        else if (*(int *)(param_1 + 0x4f0) < 4) {
            if (*(longlong *)(param_1 + 0x480) == 0) goto LAB_14052b618;
            piVar2 = (int *)FUN_14052b810();
            local_res8 = piVar2[2] - *piVar2;
            local_resc = piVar2[3] - piVar2[1];
        }
        if ((*(int *)(param_1 + 0x4f0) < 3) ||
            ((local_res8 <= iVar6 - iVar5 && (local_resc <= iVar3 - iVar4)))) {
            if (local_res8 <= iVar6 - iVar5) {
                iVar5 = ((iVar6 - iVar5) - local_res8) / 2 + iVar5;
                iVar6 = iVar5 + local_res8;
            }
            if (local_resc <= iVar3 - iVar4) {
                iVar4 = ((iVar3 - iVar4) - local_resc) / 2 + iVar4;
                iVar3 = iVar4 + local_resc;
            }
            *param_2 = iVar5;
            param_2[1] = iVar4;
            param_2[2] = iVar6;
            param_2[3] = iVar3;
        }
        else {
            fVar9 = 1.0 / (float)local_resc;
            fVar7 = (float)(iVar6 - iVar5);
            fVar8 = (float)(iVar3 - iVar4);
            fVar11 = (float)local_res8;
            fVar10 = fVar9 * fVar11;
            if (fVar7 / fVar8 <= fVar10) {
                if (fVar7 / fVar8 < fVar10) {
                    iVar4 = (int)((fVar8 - (fVar7 / fVar11) * (float)local_resc) * 0.5);
                    iVar3 = iVar3 - iVar4;
                }
            }
            else {
                iVar5 = (int)((fVar7 - fVar9 * fVar8 * fVar11) * 0.5);
                iVar6 = iVar6 - iVar5;
            }
            *param_2 = iVar5;
            param_2[1] = iVar4;
            param_2[2] = iVar6;
            param_2[3] = iVar3;
        }
    }
    return param_2;
}



void FUN_14052b650(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    longlong lVar7;
    int iVar8;
    undefined8 uVar9;
    int *piVar10;
    ulonglong uVar11;
    uint uVar12;
    longlong local_res8;
    longlong **pplVar13;

    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x10))();
    FUN_14018d540(&local_res8,L"UI\\Maps\\%s\\UI_CRB_Revealed.tga",uVar9);
    piVar10 = (int *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
    pplVar13 = (longlong **)(param_1 + 0x588);
    iVar3 = piVar10[2];
    iVar4 = piVar10[3];
    iVar5 = *piVar10;
    iVar6 = piVar10[1];
    if (*pplVar13 != (longlong *)0x0) {
        (**(code **)(**pplVar13 + 8))();
        *pplVar13 = (longlong *)0x0;
    }
    pplVar1 = (longlong **)(param_1 + 0x590);
    if (*pplVar1 != (longlong *)0x0) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    pplVar2 = (longlong **)(param_1 + 0x5a8);
    if (*pplVar2 != (longlong *)0x0) {
        (**(code **)(**pplVar2 + 8))();
        *pplVar2 = (longlong *)0x0;
    }
    lVar7 = **(longlong **)(param_1 + 0x480);
    uVar9 = (**(code **)(lVar7 + 0x58))();
    uVar11 = (**(code **)(lVar7 + 0x68))(*(undefined8 *)(param_1 + 0x480),uVar9);
    uVar12 = 0;
    if ((uVar11 & 1) == 0) {
        uVar12 = 0xff020202;
    }
    iVar8 = (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,local_res8,0,1,2,0,0,0,pplVar13);
    if (-1 < iVar8) {
        uVar11 = (ulonglong)pplVar13 & 0xffffffff00000000 | (ulonglong)uVar12;
        iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,iVar3 - iVar5,iVar4 - iVar6,1,0,3,0,0x3f,uVar11,pplVar1);
        if (-1 < iVar8) {
            (**(code **)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670,iVar3 - iVar5,iVar4 - iVar6,1,0,3,0,0x3f,uVar11 & 0xffffffff00000000,
                     pplVar2);
        }
    }
    if (local_res8 != 0) {
        (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

int * FUN_14052b810(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    float fVar3;
    undefined local_38 [8];
    float fStack48;
    float fStack44;
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;

    (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
    FUN_14044a3b0(local_38);
    local_28 = local_28 - local_38._0_4_;
    _local_38 = CONCAT412(fStack28 - fStack44,
                          CONCAT48(fStack32 - fStack48,CONCAT44(fStack36 - local_38._4_4_,local_28)));
    fVar3 = (float)FUN_14052b130(param_1);
    iVar2 = (int)((2048.0 - local_28 * (1.0 / fVar3)) * 0.5);
    iVar1 = (int)((2048.0 - fStack48 * (1.0 / fVar3)) * 0.5);
    *param_2 = iVar2;
    param_2[2] = 0x800 - iVar2;
    param_2[3] = 0x800 - iVar1;
    param_2[1] = iVar1;
    return param_2;
}



undefined8 FUN_14052b8d0(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined4 local_res10;
    undefined4 local_res14;

    local_res14 = DAT_140c77764;
    local_res10 = DAT_140c77760;
    if (param_2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x480);
        uVar1 = *(undefined4 *)(param_2 + 0x17e8);
        uVar2 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
        if (DAT_140c658f8 != 0) {
            puVar3 = (undefined8 *)
            FUN_140448be0(&local_res10,uVar2,uVar1,param_2 + 0xf70,uVar4,1,&local_res10);
            if (puVar3 != (undefined8 *)0x0) {
                uVar4 = (**(code **)*puVar3)(puVar3);
                return uVar4;
            }
        }
    }
    return 0;
}



undefined8 FUN_14052b980(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined local_18 [16];

    if ((param_2 != 0) && (*(int *)(param_2 + 0x18) != 0x10)) {
        lVar1 = FUN_14024b980(*(undefined4 *)(param_2 + 0x14));
        uVar3 = *(undefined8 *)(param_1 + 0x480);
        if (lVar1 == 0) {
            local_18 = ZEXT816(0);
            if (DAT_140c658f8 != 0) {
                local_res10 = DAT_140c77760;
                local_res14 = DAT_140c77764;
                puVar2 = (undefined8 *)
                FUN_140448be0(uVar3,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                              local_18,uVar3,1,&local_res10);
                if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00014052baa0. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar3 = (**(code **)*puVar2)(puVar2);
                    return uVar3;
                }
            }
        }
        else {
            local_18 = ZEXT1216(*(undefined (*) [12])(lVar1 + 0xc));
            if (DAT_140c658f8 != 0) {
                local_res10 = DAT_140c77760;
                local_res14 = DAT_140c77764;
                puVar2 = (undefined8 *)
                FUN_140448be0(uVar3,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                              local_18,uVar3,1,&local_res10);
                if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00014052ba3a. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar3 = (**(code **)*puVar2)(puVar2);
                    return uVar3;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_14052bab0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined local_18 [16];

    if (param_2 != 0) {
        lVar1 = FUN_14024b980(*(undefined4 *)(*(longlong *)(param_2 + 8) + 0x3c));
        if (lVar1 != 0) {
            local_18 = ZEXT1216(*(undefined (*) [12])(lVar1 + 0xc));
            if (DAT_140c658f8 != 0) {
                local_res10 = DAT_140c77760;
                local_res14 = DAT_140c77764;
                puVar2 = (undefined8 *)
                FUN_140448be0(*(undefined8 *)(param_1 + 0x480),*(undefined4 *)(lVar1 + 0x28),
                              *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x38),local_18,
                              *(undefined8 *)(param_1 + 0x480),1,&local_res10);
                if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00014052bb67. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar3 = (**(code **)*puVar2)(puVar2);
                    return uVar3;
                }
            }
        }
    }
    return 0;
}



void FUN_14052bb80(longlong *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    longlong *plVar6;
    char cVar7;
    undefined4 *puVar8;
    longlong *plVar9;
    undefined8 uVar10;
    undefined local_48 [16];
    undefined local_38 [16];

    plVar6 = (longlong *)param_1[2];
    plVar9 = param_1;
    while (plVar5 = plVar6, plVar5 != (longlong *)0x0) {
        plVar9 = plVar5;
        plVar6 = (longlong *)plVar5[2];
    }
    if ((*(float *)(plVar9 + 0x51) <= 0.0) ||
        ((plVar9[2] != 0 && (cVar7 = FUN_1400d1a60(), cVar7 == '\0')))) {
        if ((*(byte *)((longlong)param_1 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *)FUN_1400cb0e0(param_1,local_48,param_1 + 8);
            *(undefined4 *)((longlong)param_1 + 0x18c) = *puVar8;
            *(undefined4 *)(param_1 + 0x32) = puVar8[1];
            *(undefined4 *)((longlong)param_1 + 0x194) = puVar8[2];
            *(undefined4 *)(param_1 + 0x33) = puVar8[3];
            *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 0x80;
            plVar9 = param_1;
            do {
                if (*(int *)(plVar9 + 0x31) == 0) break;
                *(undefined4 *)(plVar9 + 0x31) = 0;
                plVar9 = (longlong *)plVar9[2];
            } while (plVar9 != (longlong *)0x0);
        }
        iVar1 = *(int *)((longlong)param_1 + 0x18c);
        iVar2 = *(int *)(param_1 + 0x32);
        iVar3 = *(int *)((longlong)param_1 + 0x194);
        iVar4 = *(int *)(param_1 + 0x33);
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,*(int *)(param_1 + 0x54) * 2);
        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x17);
        uVar10 = FUN_1400c95c0(param_1,local_48);
        (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,uVar10);
        local_38 = ZEXT816(CONCAT44((float)(iVar4 - iVar2),(float)(iVar3 - iVar1)));
        local_48 = ZEXT816(CONCAT44((float)DAT_140c77764,(float)DAT_140c77760));
        (**(code **)(*DAT_140c65680 + 0x68))(DAT_140c65680,local_48);
        *(undefined4 *)(param_1 + 0x99) = 0;
        FUN_14052e160(param_1);
        (**(code **)(*param_1 + 0xe8))(param_1);
        (**(code **)(*DAT_140c65680 + 0x48))();
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14052d5c0(longlong param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int *piVar4;
    float *pfVar5;
    float *pfVar6;
    undefined4 uVar7;
    undefined extraout_XMM0 [16];
    undefined auVar8 [16];
    int local_res8;
    int local_resc;
    undefined *puVar9;
    ulonglong uVar10;
    undefined4 uVar11;
    undefined local_38 [20];
    undefined4 local_24;

    if ((*(longlong *)(param_1 + 0x590) != 0) && (*(longlong *)(param_1 + 0x5b0) != 0)) {
        (**(code **)(*DAT_140c65670 + 0x1f8))();
        (**(code **)(*DAT_140c65670 + 0x200))();
        local_38._0_16_ = CONCAT88(*(undefined8 *)(param_1 + 0x590),local_38._0_8_);
        local_38._0_16_ = CONCAT124(local_38._4_12_,1);
        uVar7 = 0;
        local_24 = 0;
        puVar9 = &DAT_140c3fe88;
        (**(code **)(*DAT_140c65670 + 0x208))
                (DAT_140c65670,local_38,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
        (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
        local_38._0_16_ = extraout_XMM0 & (undefined  [16])0x0;
        uVar10 = (ulonglong)puVar9 & 0xffffffff00000000;
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1);
        (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x5b0));
        piVar4 = (int *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
        pfVar5 = (float *)(**(code **)(*DAT_140c65670 + 0xe0))
                (DAT_140c65670,
                 (piVar4[3] - piVar4[1]) * (piVar4[2] - *piVar4) * 0x1c,0,0,uVar10);
        uVar11 = (undefined4)(uVar10 >> 0x20);
        if (pfVar5 != (float *)0x0) {
            local_resc = piVar4[1];
            pfVar6 = pfVar5;
            if (local_resc < piVar4[3]) {
                do {
                    local_res8 = *piVar4;
                    if (local_res8 < piVar4[2]) {
                        do {
                            uVar2 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x68))();
                            if ((uVar2 & 1) == 0) {
                                iVar3 = *piVar4;
                                iVar1 = piVar4[1];
                                pfVar6[3] = 1.0;
                                auVar8 = ZEXT816((ulonglong)
                                                         (SUB128(CONCAT84(SUB168((ZEXT1216((undefined  [12])0x0) << 0x20) >>
                                                                                                                          0x40,0),(float)(local_resc - iVar1)),0) <<
                                                                                                                                                                  0x20));
                                *pfVar6 = (float)(local_res8 - iVar3);
                                pfVar6[1] = SUB164(auVar8 >> 0x20,0);
                                pfVar6[2] = 0.0;
                                if (((uVar2 & 2) == 0) &&
                                    (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x88))
                                            (SUB168(auVar8 >> 0x20,0),*(longlong **)(param_1 + 0x480),
                                             &local_res8), iVar3 == 0)) {
                                    pfVar6[4] = -1.714756e+38;
                                }
                                else {
                                    pfVar6[4] = -1.728101e+38;
                                }
                                pfVar6 = pfVar6 + 7;
                            }
                            local_res8 = local_res8 + 1;
                        } while (local_res8 < piVar4[2]);
                    }
                    uVar11 = (undefined4)(uVar10 >> 0x20);
                    local_resc = local_resc + 1;
                } while (local_resc < piVar4[3]);
            }
            uVar7 = (undefined4)(((longlong)pfVar6 - (longlong)pfVar5) / 0x1c);
            (**(code **)(*DAT_140c65670 + 0xe8))();
        }
        (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,0,0,uVar7,CONCAT44(uVar11,1));
        (**(code **)(*DAT_140c65670 + 0x2a0))();
        (**(code **)(*DAT_140c65670 + 0x220))();
        (**(code **)(*DAT_140c65670 + 0x228))();
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14052d8a0(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    float fVar3;
    int iVar4;
    int *piVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 uVar8;
    ulonglong uVar9;
    undefined auVar11 [16];
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined in_XMM1_Bg;
    undefined in_XMM1_Bh;
    undefined4 local_res8 [2];
    longlong local_res10;
    undefined *puVar14;
    ulonglong uVar15;
    undefined4 uVar16;
    undefined local_38 [20];
    undefined4 local_24;
    undefined auVar10 [12];
    undefined auVar12 [16];
    undefined auVar13 [16];

    if ((*(longlong *)(param_1 + 0x5b0) != 0) && (*(longlong *)(param_1 + 0x5a8) != 0)) {
        (**(code **)(*DAT_140c65670 + 0x1f8))();
        (**(code **)(*DAT_140c65670 + 0x200))();
        local_38._0_16_ = CONCAT88(*(undefined8 *)(param_1 + 0x5a8),local_38._0_8_);
        local_38._0_16_ = CONCAT124(local_38._4_12_,1);
        local_24 = 0;
        puVar14 = &DAT_140c3fe88;
        (**(code **)(*DAT_140c65670 + 0x208))
                (DAT_140c65670,local_38,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
        (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
        uVar1 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
                CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
        uVar2 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
                CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
        iVar4 = *(int *)(param_1 + 0x580) * 0x10000 + 0x20000;
        uVar15 = (ulonglong)puVar14 & 0xffffffff00000000;
        uVar9 = CONCAT44(iVar4,iVar4);
        auVar10 = CONCAT48(iVar4,uVar9);
        auVar13 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                   SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                    ((char)(uVar2 >> 0x18),
                                                                                                                     CONCAT114((char)((uint)iVar4 >> 0x18),
                                                                                                                               SUB1614(CONCAT412(iVar4,auVar10),0)))
                                                                                                                    >> 0x70,0),
                                                                                                     CONCAT113((char)(uVar2 >> 0x10),
                                                                                                               SUB1613(CONCAT412(iVar4,auVar10),0))) >>
                                                                                                                                                     0x68,0),CONCAT112((char)((uint)iVar4 >> 0x10),
                                                                                                                                                                       auVar10)) >> 0x60,0),
                                                                   CONCAT111((char)(uVar2 >> 8),SUB1211(auVar10,0)))
                                                                                                     >> 0x58,0),ZEXT1011(SUB1210(auVar10,0))) >> 0x50,0
                                                           ),CONCAT19((char)uVar2,SUB129(auVar10,0))) >> 0x48
                                            ,0),(unkuint9)uVar9) >> 0x40,0),
                                    (char)(uVar1 >> 0x18)),((uint7)uVar9 >> 0x18) << 0x30);
        auVar12 = CONCAT115(CONCAT101(SUB1610(auVar13 >> 0x30,0),(char)(uVar1 >> 0x10)),
                            ((uint5)uVar9 >> 0x10) << 0x20);
        auVar11 = ZEXT1516(CONCAT141(SUB1614(CONCAT124(SUB1612(auVar12 >> 0x20,0),(uVar1 >> 8) << 0x18)
                                                     >> 0x10,0) &
                                     SUB1614((undefined  [16])0xffffffffff000000 >> 0x10,0),(char)uVar1)
        ) << 8;
        iVar4 = SUB164(CONCAT214((short)(uVar2 >> 0x10),
                                 CONCAT212(SUB162(auVar13 >> 0x30,0),SUB1612(auVar11,0))) >> 0x60,0);
        auVar12 = CONCAT610(SUB166(CONCAT412(iVar4,CONCAT210((short)uVar2,SUB1610(auVar11,0))) >> 0x50,0
        ),CONCAT28(SUB162(auVar12 >> 0x20,0),SUB168(auVar11,0)));
        fVar3 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar12 >> 0x40,0),(short)(uVar1 >> 0x10)),
                                        (SUB166(auVar11,0) >> 0x10) << 0x20) >> 0x20,0) * 0.003921569;
        local_38._0_16_ =
                CONCAT412((float)iVar4 * 0.003921569,
                          CONCAT48((float)(SUB164(auVar11,0) & 0xffff | uVar1 << 0x10) * 0.003921569,
                                   CONCAT17((char)((uint)fVar3 >> 0x18),
                                            CONCAT16((char)((uint)fVar3 >> 0x10),
                                                     CONCAT15((char)((uint)fVar3 >> 8),
                                                              CONCAT14(SUB41(fVar3,0),
                                                                       (float)SUB164(auVar12 >> 0x40,0) *
                                                                       0.003921569))))));
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_38);
        (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x5b0),0);
        piVar5 = (int *)(**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))();
        uVar8 = 0;
        lVar6 = (**(code **)(*DAT_140c65670 + 0xe0))
                (DAT_140c65670,(piVar5[3] - piVar5[1]) * (piVar5[2] - *piVar5) * 0x1c,0,0,
                 uVar15);
        uVar16 = (undefined4)(uVar15 >> 0x20);
        if (lVar6 != 0) {
            local_res10 = lVar6;
            if (*(undefined8 **)(param_1 + 0x480) != (undefined8 *)0x0) {
                local_res8[0] = (**(code **)**(undefined8 **)(param_1 + 0x480))();
                uVar7 = FUN_140538120(param_1 + 0x560,local_res8);
                FUN_140772c80(uVar7,&local_res10,piVar5);
            }
            uVar8 = (undefined4)((local_res10 - lVar6) / 0x1c);
            (**(code **)(*DAT_140c65670 + 0xe8))();
        }
        (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,0,0,uVar8,CONCAT44(uVar16,1));
        (**(code **)(*DAT_140c65670 + 0x2a0))();
        (**(code **)(*DAT_140c65670 + 0x220))();
        (**(code **)(*DAT_140c65670 + 0x228))();
        *(undefined4 *)(param_1 + 0x620) = 0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14052e160(longlong param_1)

{
    int iVar1;
    int iVar2;
    undefined auVar3 [16];
    int local_res8;
    int local_resc;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    undefined local_18 [16];

    if ((*(longlong *)(param_1 + 0x480) != 0) && (*(int *)(param_1 + 0x4f0) < 3)) {
        FUN_14052b440(param_1,&local_28);
        FUN_14052ab00(param_1,&local_res8,param_1 + 0x520);
        iVar1 = 0;
        if (*(longlong *)(param_1 + 0x480) == 0) {
            iVar2 = 0;
        }
        else {
            iVar1 = 0x800;
            iVar2 = 0x800;
            if (*(int *)(param_1 + 0x4f0) == 1) {
                iVar1 = 0x1000;
                iVar2 = 0x1000;
            }
        }
        auVar3 = divps(ZEXT816(CONCAT44((float)(local_1c - local_24),(float)(local_20 - local_28))),
                       _DAT_140b7b2f0);
        local_18 = ZEXT816(CONCAT44((float)iVar2 - (float)(local_1c - local_24),
                                    (float)iVar1 - (float)(local_20 - local_28)));
        if (*(int *)(param_1 + 0x4c8) == 0) {
            *(undefined (*) [16])(param_1 + 0x4e0) =
                    ZEXT816(CONCAT44((float)local_resc,(float)local_res8));
            *(float *)(param_1 + 0x4e0) = (float)local_res8 - SUB164(auVar3,0);
            *(float *)(param_1 + 0x4e4) = (float)local_resc - SUB164(auVar3 >> 0x20,0);
            *(float *)(param_1 + 0x4e8) = 0.0 - SUB164(auVar3 >> 0x40,0);
            *(float *)(param_1 + 0x4ec) = 0.0 - SUB164(auVar3 >> 0x60,0);
        }
        FUN_14052e280(param_1);
    }
    return;
}



void FUN_14052e280(longlong param_1)

{
    int *piVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    if ((*(longlong *)(param_1 + 0x480) != 0) && (*(int *)(param_1 + 0x4f0) < 3)) {
        piVar1 = (int *)FUN_14052b810();
        fVar3 = (float)(piVar1[2] - *piVar1);
        fVar4 = (float)(piVar1[3] - piVar1[1]);
        if (*(int *)(param_1 + 0x4f0) == 1) {
            fVar3 = fVar3 * 2.0;
            fVar4 = fVar4 * 2.0;
        }
        piVar1 = (int *)FUN_14052b440(0);
        fVar3 = fVar3 - (float)(piVar1[2] - *piVar1);
        fVar4 = fVar4 - (float)(piVar1[3] - piVar1[1]);
        fVar2 = *(float *)(param_1 + 0x4e0);
        if (fVar3 <= *(float *)(param_1 + 0x4e0)) {
            fVar2 = fVar3;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
            fVar3 = fVar2;
        }
        fVar2 = *(float *)(param_1 + 0x4e4);
        if (fVar4 <= *(float *)(param_1 + 0x4e4)) {
            fVar2 = fVar4;
        }
        *(float *)(param_1 + 0x4e0) = fVar3;
        fVar3 = 0.0;
        if (0.0 <= fVar2) {
            fVar3 = fVar2;
        }
        *(float *)(param_1 + 0x4e4) = fVar3;
    }
    return;
}



void FUN_14052e3d0(longlong param_1)

{
    undefined8 *puVar1;
    int *piVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined local_res8 [8];

    if ((*(longlong *)(param_1 + 0x480) != 0) && (*(int *)(param_1 + 0x4f0) < 3)) {
        puVar1 = (undefined8 *)FUN_14052ab00(param_1,local_res8,param_1 + 0x520);
        fVar3 = (float)(int)*puVar1;
        fVar4 = (float)*(int *)((longlong)puVar1 + 4);
        fVar5 = 0.0;
        fVar6 = 0.0;
        piVar2 = (int *)FUN_14052b440(0);
        *(undefined (*) [16])(param_1 + 0x4e0) =
                CONCAT412(fVar6 - 0.0,
                          CONCAT48(fVar5 - 0.0,
                                   CONCAT44(fVar4 - (float)(piVar2[3] - piVar2[1]) * 0.5,
                                            fVar3 - (float)(piVar2[2] - *piVar2) * 0.5)));
        FUN_14052e280(param_1);
    }
    return;
}



longlong FUN_14052e9b0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if (-1 < *(int *)(lVar1 + 0x1b0)) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_14052ea60(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;

    lVar3 = FUN_14052e9b0();
    if (lVar3 != 0) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            iVar1 = FUN_140056d60(param_1,2);
        }
        else {
            iVar1 = -1;
        }
        if ((*(undefined8 **)(lVar3 + 0x480) != (undefined8 *)0x0) &&
        (iVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x480))(), iVar1 == iVar2)) {
            return 0;
        }
        if (DAT_140c658f8 == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = FUN_140448420();
        }
        FUN_140529b60(lVar3,uVar5);
    }
    return 0;
}



undefined8 FUN_14052ebc0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x530);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14052ec10(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_14052e9b0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(undefined4 *)(lVar1 + 0x534) = 1;
            return 0;
        }
        *(undefined4 *)(lVar1 + 0x534) = 0;
    }
    return 0;
}



undefined8 FUN_14052ec80(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x534);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14052ecd0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_14052e9b0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(undefined4 *)(lVar1 + 0x538) = 1;
            return 0;
        }
        *(undefined4 *)(lVar1 + 0x538) = 0;
    }
    return 0;
}



undefined8 FUN_14052ed60(longlong *param_1,longlong param_2)

{
    double *pdVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 *puVar10;
    longlong lVar11;
    longlong lVar12;
    float local_48 [2];
    float local_40;
    float local_38;
    float local_30;
    undefined local_28 [8];
    longlong local_20;

    lVar4 = (**(code **)(*param_1 + 0x18))();
    if (lVar4 != 0) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
        uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
        if ((uVar6 & 1) == 0) {
            uVar7 = (**(code **)(*param_1 + 0x58))(param_1);
            FUN_14044a3b0(local_48,uVar7);
            uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
            lVar4 = *(longlong *)(param_2 + 0x10);
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar10,L"strFolder",uVar7);
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            uVar7 = (**(code **)(*param_1 + 8))(param_1);
            lVar4 = *(longlong *)(param_2 + 0x10);
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar10,L"strName",uVar7);
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            uVar2 = (**(code **)*param_1)(param_1);
            lVar4 = *(longlong *)(param_2 + 0x10);
            uVar6 = (ulonglong)uVar2;
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar10,&DAT_140b132c4,uVar6 & 0xffffffff);
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
            lVar4 = *(longlong *)(param_2 + 0x10);
            uVar6 = (ulonglong)uVar2;
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar10,L"nWorldId",uVar6 & 0xffffffff);
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            lVar9 = FUN_14018f0e0(local_28,L"fNorth");
            lVar11 = -1;
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
                *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar12) != '\0');
                FUN_140058710(lVar4);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(lVar4 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)local_40;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(lVar4,0xfffffffd);
            FUN_14005ea50(lVar4,uVar7,*(longlong *)(lVar4 + 0x10) + -0x20,
                          *(longlong *)(lVar4 + 0x10) + -0x10);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            lVar9 = FUN_14018f0e0(local_28,L"fSouth");
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
                *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar12) != '\0');
                FUN_140058710(lVar4);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(lVar4 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)local_30;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(lVar4,0xfffffffd);
            FUN_14005ea50(lVar4,uVar7,*(longlong *)(lVar4 + 0x10) + -0x20,
                          *(longlong *)(lVar4 + 0x10) + -0x10);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            lVar9 = FUN_14018f0e0(local_28,L"fEast");
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
                *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar12) != '\0');
                FUN_140058710(lVar4);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(lVar4 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)local_38;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(lVar4,0xfffffffd);
            FUN_14005ea50(lVar4,uVar7,*(longlong *)(lVar4 + 0x10) + -0x20,
                          *(longlong *)(lVar4 + 0x10) + -0x10);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_2 + 0x10);
            lVar9 = FUN_14018f0e0(local_28,L"fWest");
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
                *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            }
            else {
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar9 + lVar11) != '\0');
                FUN_140058710(lVar4,lVar9,lVar11);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar1 = *(double **)(lVar4 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)local_48[0];
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(lVar4,0xfffffffd);
            FUN_14005ea50(lVar4,uVar7,*(longlong *)(lVar4 + 0x10) + -0x20,
                          *(longlong *)(lVar4 + 0x10) + -0x10);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1);
            uVar2 = (**(code **)*puVar10)(puVar10);
            lVar4 = *(longlong *)(param_2 + 0x10);
            uVar6 = (ulonglong)uVar2;
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar10,L"continentId",uVar6 & 0xffffffff);
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
            lVar4 = *(longlong *)(param_2 + 0x10);
            uVar6 = (ulonglong)uVar2;
            puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
            puVar10 = *(undefined8 **)(lVar4 + 0x10);
            *puVar10 = *puVar8;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar10,L"parentZoneId",uVar6 & 0xffffffff);
            plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar5 = *plVar5 + -0x10;
            iVar3 = FUN_140449570();
            if (iVar3 != 0) {
                iVar3 = FUN_1406b9790(*(undefined8 *)(param_2 + 0x10),iVar3);
                if (iVar3 != 0) {
                    FUN_1400fb540(param_2,L"rtZoneRewardTrack");
                    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                    *plVar5 = *plVar5 + -0x10;
                }
            }
            return 0;
        }
    }
    return 0x80004005;
}



bool FUN_14052f370(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return false;
    }
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((((*(undefined8 **)(param_1 + 0x10) <= puVar4) || (puVar4 == &DAT_140a12138)) ||
          (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) < 1)) ||
         (iVar1 = FUN_140056d60(param_1,2), iVar1 < 0)) &&
        (*(undefined8 **)(lVar3 + 0x480) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar3 + 0x480))();
    }
    if ((DAT_140c658f8 != 0) && (lVar3 = FUN_140448420(), lVar3 != 0)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar4 + 1) = 5;
        *puVar4 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(param_1);
        local_20 = uVar2;
        iVar1 = FUN_14052ed60(lVar3,&local_28);
        if (-1 < iVar1) {
            puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar4 = *(undefined8 **)(param_1 + 0x10);
            *puVar4 = *puVar6;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        FUN_1400579e0(param_1);
        return -1 < iVar1;
    }
    return false;
}



undefined8 FUN_14052fa00(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_14052e9b0();
    if (lVar4 == 0) {
        return 0;
    }
    if (*(longlong *)(lVar4 + 0x4a8) != 0) {
        iVar3 = (**(code **)**(undefined8 **)(*(longlong *)(lVar4 + 0x4a8) + 8))();
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14052fa80(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    lVar6 = FUN_14052e9b0();
    if (lVar6 == 0) {
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x490) + 0x10);
    if (lVar11 != *(longlong *)(lVar6 + 0x490)) {
        do {
            lVar9 = *(longlong *)(lVar11 + 0x28);
            if ((*(longlong **)(lVar9 + 8) != (longlong *)0x0) &&
            (uVar8 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x30))(), (uVar8 & 4) != 0)) {
                uVar8 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x30))();
                if ((uVar8 & 1) != 0) {
                    plVar2 = *(longlong **)(lVar9 + 8);
                    lVar3 = *plVar2;
                    uVar4 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
                    iVar5 = (**(code **)(lVar3 + 0x40))(plVar2,uVar4);
                    if (iVar5 == 0) goto LAB_14052fb8f;
                }
                (**(code **)**(undefined8 **)(lVar9 + 8))();
                FUN_1400fa9e0(&local_28);
            }
            LAB_14052fb8f:
            lVar9 = *(longlong *)(lVar11 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar11 = lVar9;
                        lVar9 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar9) {
                    lVar11 = lVar9;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar9 + 0x10); lVar11 = lVar9, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar9 = lVar3;
                }
            }
            param_1 = local_18;
        } while (lVar11 != *(longlong *)(lVar6 + 0x490));
    }
    uVar8 = (ulonglong)local_20;
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar8)
            ;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar10;
    uVar4 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar4,uVar8 & 0xffffffff);
    return 1;
}



undefined8 FUN_140530160(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_14052e9b0();
    if (lVar3 != 0) {
        iVar4 = 0;
        if ((*(longlong *)(lVar3 + 0x480) != 0) && (iVar4 = 0x800, *(int *)(lVar3 + 0x4f0) == 1)) {
            iVar4 = 0x1000;
        }
        bVar2 = 1;
        if ((iVar4 <= *(int *)(lVar3 + 0x2d4) - *(int *)(lVar3 + 0x2cc)) &&
            (bVar2 = 1, iVar4 <= *(int *)(lVar3 + 0x2d8) - *(int *)(lVar3 + 0x2d0))) {
            bVar2 = 0;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar2;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_140530ec0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    double *pdVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar5 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar5 = pdVar4;
    }
    if (*(int *)(pdVar5 + 1) != 3) {
        if ((*(int *)(pdVar5 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong)*pdVar5 + 0x20,local_res10), iVar1 == 0)) {
            iVar1 = 0;
            goto LAB_140530f30;
        }
        local_10 = 3;
        pdVar5 = &local_18;
        local_18 = local_res10[0];
    }
    iVar1 = (int)*pdVar5;
    LAB_140530f30:
    iVar2 = 1;
    if (1 < iVar1) {
        iVar2 = iVar1;
    }
    *(int *)(lVar3 + 0x4f4) = iVar2;
    return 0;
}



undefined8 FUN_140530f60(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_14052e9b0();
    if (lVar2 == 0) {
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
            iVar1 = 0;
            goto LAB_140530fd0;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res10[0];
    }
    iVar1 = (int)*pdVar4;
    LAB_140530fd0:
    if (5 < iVar1) {
        iVar1 = 5;
    }
    *(int *)(lVar2 + 0x4f8) = iVar1;
    return 0;
}



undefined8 FUN_140531000(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    iVar3 = 3;
    lVar2 = FUN_14052e9b0();
    if (lVar2 != 0) {
        iVar3 = *(int *)(lVar2 + 0x4f0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_140531360(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    undefined8 uVar5;
    double *pdVar6;
    int local_res10;
    int local_res14;
    double local_res18;
    double local_18;
    float local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) == 3) {
        LAB_1405313f6:
        local_res10 = (int)*pdVar6;
    }
    else {
        if (*(int *)(pdVar6 + 1) == 4) {
            iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res18);
            if (iVar2 != 0) {
                local_10 = 4.203895e-45;
                pdVar6 = &local_18;
                local_18 = local_res18;
                goto LAB_1405313f6;
            }
        }
        local_res10 = 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x20);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) == 3) {
        LAB_140531451:
        local_res14 = (int)*pdVar6;
    }
    else {
        if (*(int *)(pdVar6 + 1) == 4) {
            iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res18);
            if (iVar2 != 0) {
                local_10 = 4.203895e-45;
                pdVar6 = &local_18;
                local_18 = local_res18;
                goto LAB_140531451;
            }
        }
        local_res14 = 0;
    }
    FUN_14052af60(lVar3,&local_18,&local_res10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_1409f1e34,1);
    pdVar6 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar6 + 1) = 3;
    *pdVar6 = (double)local_18._0_4_;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f1e14,1);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f1ea4,1);
    pdVar6 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar6 + 1) = 3;
    *pdVar6 = (double)local_10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_140531c50(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    uint *puVar3;
    longlong *plVar4;

    lVar2 = FUN_14052e9b0();
    if (lVar2 == 0) {
        return 0;
    }
    plVar4 = *(longlong **)(lVar2 + 0x480);
    if (plVar4 != (longlong *)0x0) {
        puVar3 = (uint *)(**(code **)(*plVar4 + 0xa8))();
        plVar4 = (longlong *)(ulonglong)*puVar3;
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(int)plVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140532320(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    double local_res10;
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res10), iVar2 == 0)) {
            iVar2 = 0;
            goto LAB_140532399;
        }
        local_10 = 3;
        pdVar6 = &local_18;
        local_18 = local_res10;
    }
    iVar2 = (int)*pdVar6;
    LAB_140532399:
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
        do {
            FUN_140774420(lVar7 + 0x30,iVar2);
            lVar5 = *(longlong *)(lVar7 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar7 = lVar5;
                        lVar5 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                    lVar7 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar7 != *(longlong *)(lVar3 + 0x568));
    }
    return 0;
}



undefined8 FUN_140532570(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    double *pdVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    float fVar9;
    undefined4 local_res10 [2];
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar5 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar5 = pdVar4;
    }
    uVar7 = 0;
    if (*(int *)(pdVar5 + 1) != 3) {
        if ((*(int *)(pdVar5 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar5 + 0x20,local_res10), iVar2 == 0)) {
            iVar2 = 0;
            goto LAB_1405325ff;
        }
        local_10 = 3;
        pdVar5 = &local_18;
    }
    iVar2 = (int)*pdVar5;
    LAB_1405325ff:
    local_res10[0] = (**(code **)**(undefined8 **)(lVar3 + 0x480))();
    lVar3 = FUN_140538120(lVar3 + 0x560,local_res10);
    puVar1 = (undefined8 *)**(undefined8 **)(lVar3 + 0x38);
    do {
        if (puVar1 == *(undefined8 **)(lVar3 + 0x38)) {
            LAB_14053266a:
            fVar9 = 0.0;
            if (uVar7 != 0) {
                fVar9 = *(float *)(uVar7 + 0xb0);
            }
            pdVar5 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)fVar9;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        if (puVar1[4] != 0) {
            plVar8 = (longlong *)puVar1[3];
            uVar6 = uVar7;
            do {
                if (*(int *)(*plVar8 + 8) == iVar2) {
                    uVar7 = *(ulonglong *)(puVar1[3] + uVar6 * 8);
                    goto LAB_14053266a;
                }
                uVar6 = uVar6 + 1;
                plVar8 = plVar8 + 1;
            } while (uVar6 < (ulonglong)puVar1[4]);
        }
        puVar1 = (undefined8 *)*puVar1;
    } while( true );
}



undefined8 FUN_1405326b0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    double local_res10;
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res10), iVar2 == 0)) {
            iVar2 = 0;
            goto LAB_140532729;
        }
        local_10 = 3;
        pdVar6 = &local_18;
        local_18 = local_res10;
    }
    iVar2 = (int)*pdVar6;
    LAB_140532729:
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
        do {
            FUN_140774590(lVar7 + 0x30,iVar2);
            lVar5 = *(longlong *)(lVar7 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar7 = lVar5;
                        lVar5 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                    lVar7 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar7 != *(longlong *)(lVar3 + 0x568));
    }
    return 0;
}



void FUN_140532d90(longlong **param_1)

{
    if (param_1[0x17] != (longlong *)0x0) {
        (**(code **)(*param_1[0x17] + 8))();
        param_1[0x17] = (longlong *)0x0;
    }
    if (param_1[0x1a] != (longlong *)0x0) {
        FUN_14018b900(param_1[0x1a],0);
    }
    if (param_1[0x11] != (longlong *)0x0) {
        (**(code **)(*param_1[0x11] + 8))();
        param_1[0x11] = (longlong *)0x0;
    }
    if (param_1[0x14] != (longlong *)0x0) {
        FUN_14018b900(param_1[0x14],0);
    }
    if (param_1[6] != (longlong *)0x0) {
        (**(code **)(*param_1[6] + 8))();
        param_1[6] = (longlong *)0x0;
    }
    if (param_1[9] != (longlong *)0x0) {
        FUN_14018b900(param_1[9],0);
    }
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    if (param_1[3] != (longlong *)0x0) {
        FUN_14018b900(param_1[3],0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 * FUN_140533770(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    longlong lVar7;
    double *pdVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    double *pdVar12;
    longlong lVar13;
    longlong *plVar14;
    ulonglong uVar15;
    undefined8 *puVar16;
    undefined8 *puVar17;
    undefined8 uVar18;
    int *piVar19;
    undefined8 *puVar20;
    longlong lVar21;
    int iVar22;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined extraout_XMM0_01 [16];
    undefined extraout_XMM0_02 [16];
    undefined extraout_XMM0_03 [16];
    undefined extraout_XMM0_04 [16];
    undefined extraout_XMM0_05 [16];
    undefined extraout_XMM0_06 [16];
    undefined extraout_XMM0_07 [16];
    undefined extraout_XMM0_08 [16];
    undefined extraout_XMM0_09 [16];
    undefined extraout_XMM0_10 [16];
    undefined extraout_XMM0_11 [16];
    undefined auVar23 [16];
    int local_res10;
    int iStackX20;
    int local_res18;
    int local_res20;
    undefined local_138 [12];
    undefined4 uStack300;
    undefined **local_128;
    int local_120;
    undefined4 uStack284;
    longlong local_118;
    undefined4 local_108;
    undefined4 uStack260;
    undefined **local_100;
    int local_f8;
    longlong local_f0;
    undefined4 local_e8;
    undefined **local_e0;
    undefined4 local_d8;
    longlong local_d0;
    longlong local_c8;
    undefined **local_c0;
    undefined4 local_b8;
    longlong local_b0;
    undefined ***local_a8;
    undefined local_98 [12];
    undefined4 uStack140;
    undefined8 local_88;
    double local_80;
    undefined4 local_78;
    undefined local_70 [8];
    longlong local_68;

    lVar7 = FUN_14052e9b0();
    local_c8 = lVar7;
    if (lVar7 == 0) {
        return (undefined8 *)0x0;
    }
    pdVar8 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar12 = (double *)&DAT_140a12138;
    if (pdVar8 < *(double **)(param_1 + 0x10)) {
        pdVar12 = pdVar8;
    }
    puVar17 = (undefined8 *)0x0;
    iVar22 = 0;
    if (*(int *)(pdVar12 + 1) == 3) {
        LAB_140533813:
        local_res20 = (int)*pdVar12;
        if (local_res20 < 0) {
            return (undefined8 *)0x0;
        }
    }
    else {
        if ((*(int *)(pdVar12 + 1) == 4) &&
            (iVar3 = FUN_14005ac80((longlong)*pdVar12 + 0x20), iVar3 != 0)) {
            local_138 = CONCAT48(3,local_138._0_8_);
            pdVar12 = (double *)local_138;
            _local_138 = CONCAT88(stack0xfffffffffffffed0,CONCAT44(iStackX20,local_res10));
            goto LAB_140533813;
        }
        local_res20 = 0;
    }
    pdVar8 = (double *)(*(longlong *)(param_1 + 0x18) + 0x20);
    pdVar12 = (double *)&DAT_140a12138;
    if (pdVar8 < *(double **)(param_1 + 0x10)) {
        pdVar12 = pdVar8;
    }
    if (*(int *)(pdVar12 + 1) != 3) {
        iVar3 = iVar22;
        if ((*(int *)(pdVar12 + 1) != 4) ||
            (iVar4 = FUN_14005ac80((longlong)*pdVar12 + 0x20,&local_res10), iVar4 == 0))
            goto LAB_14053389d;
        local_138 = CONCAT48(3,local_138._0_8_);
        pdVar12 = (double *)local_138;
        _local_138 = CONCAT88(stack0xfffffffffffffed0,CONCAT44(iStackX20,local_res10));
    }
    iVar3 = (int)*pdVar12;
    LAB_14053389d:
    local_e8 = 1;
    local_100 = &PTR_FUN_140b569f0;
    local_f8 = -2;
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    local_res18 = iVar3;
    local_f0 = param_1;
    if (((puVar20 < *(undefined8 **)(param_1 + 0x10)) && (puVar20 != &DAT_140a12138)) &&
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x38) == 5)) {
        FUN_1400579e0(param_1);
        puVar20 = *(undefined8 **)(local_f0 + 0x10);
        puVar9 = (undefined8 *)(*(longlong *)(local_f0 + 0x18) + 0x30);
        puVar10 = &DAT_140a12138;
        if (puVar9 < puVar20) {
            puVar10 = puVar9;
        }
        *puVar20 = *puVar10;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(local_f0 + 0x10) = *(longlong *)(local_f0 + 0x10) + 0x10;
        local_f8 = FUN_1400578c0(local_f0);
    }
    if ((local_f0 != 0) && (local_f8 != -2)) {
        lVar13 = local_f0;
        puVar10 = (undefined8 *)
        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_f0 + 0x20) + 0xa0),local_f8);
        puVar20 = *(undefined8 **)(lVar13 + 0x10);
        *puVar20 = *puVar10;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        puVar20 = (undefined8 *)(*(longlong *)(local_f0 + 0x10) + -0x10);
        if (puVar20 == &DAT_140a12138) {
            iVar4 = -1;
        }
        else {
            iVar4 = *(int *)(*(longlong *)(local_f0 + 0x10) + -8);
        }
        *(undefined8 **)(local_f0 + 0x10) = puVar20;
        if (iVar4 == 5) {
            local_c0 = &PTR_FUN_140b56a08;
            local_b8 = 0xfffffffe;
            local_b0 = local_f0;
            local_a8 = &local_100;
            *(undefined4 *)(*(longlong *)(local_f0 + 0x10) + 8) = 0;
            *(longlong *)(local_f0 + 0x10) = *(longlong *)(local_f0 + 0x10) + 0x10;
            _local_138 = _local_138 & (undefined  [16])0xffffffffffffffff;
            FUN_1400fa090(&local_c0,0xffffffff);
            *(longlong *)(local_f0 + 0x10) = *(longlong *)(local_f0 + 0x10) + -0x10;
            while ((iVar4 = (*(code *)(*local_a8)[1])(), iVar4 != 0 &&
                                                         (iVar4 = FUN_1400fcba0(&local_c0), iVar4 != 0))) {
                FUN_1400fbf40(&local_c0);
                if ((local_118 != 0) && (local_120 != -2)) {
                    lVar13 = local_118;
                    puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_118 + 0x20) + 0xa0));
                    puVar20 = *(undefined8 **)(lVar13 + 0x10);
                    *puVar20 = *puVar10;
                    *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                    puVar20 = (undefined8 *)(*(longlong *)(local_118 + 0x10) + -0x10);
                    if (puVar20 == &DAT_140a12138) {
                        iVar4 = -1;
                    }
                    else {
                        iVar4 = *(int *)(*(longlong *)(local_118 + 0x10) + -8);
                    }
                    *(undefined8 **)(local_118 + 0x10) = puVar20;
                    if ((iVar4 == 5) && (iVar4 = (*(code *)local_128[1])(&local_128), iVar4 != 0)) {
                        lVar11 = local_118;
                        puVar10 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_118 + 0x20) + 0xa0),
                                      local_120);
                        lVar13 = local_118;
                        puVar20 = *(undefined8 **)(lVar11 + 0x10);
                        *puVar20 = *puVar10;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar10 + 1);
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                        lVar11 = FUN_14018f0e0(local_70,&DAT_1409f207c);
                        if (*(longlong *)(lVar11 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
                            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                        }
                        else {
                            lVar21 = -1;
                            do {
                                lVar21 = lVar21 + 1;
                            } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar21) != '\0');
                            FUN_140058710(lVar13);
                        }
                        if (local_68 != 0) {
                            FUN_14018b900(local_68,0);
                        }
                        lVar13 = *(longlong *)(local_118 + 0x10) + -0x10;
                        FUN_14005e8e0(local_118,*(longlong *)(local_118 + 0x10) + -0x20,lVar13,lVar13);
                        lVar13 = *(longlong *)(local_118 + 0x10);
                        pdVar12 = (double *)(lVar13 + -0x10);
                        if ((pdVar12 == (double *)&DAT_140a12138) || (*(int *)(lVar13 + -8) != 3)) {
                            LAB_140533cd4:
                            *(longlong *)(local_118 + 0x10) = lVar13 + -0x20;
                        }
                        else {
                            if (*(int *)(lVar13 + -8) == 3) {
                                LAB_140533b88:
                                iVar4 = (int)*pdVar12;
                            }
                            else {
                                iVar4 = iVar22;
                                if ((*(int *)(lVar13 + -8) == 4) &&
                                    (iVar5 = FUN_14005ac80((longlong)*pdVar12 + 0x20,&local_108), iVar5 != 0)) {
                                    local_78 = 3;
                                    pdVar12 = &local_80;
                                    goto LAB_140533b88;
                                }
                            }
                            *(longlong *)(local_118 + 0x10) = *(longlong *)(local_118 + 0x10) + -0x20;
                            local_res10 = iVar4;
                            iVar4 = (*(code *)local_128[1])(&local_128);
                            if (iVar4 != 0) {
                                lVar11 = local_118;
                                puVar10 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_118 + 0x20) + 0xa0),
                                              local_120);
                                lVar13 = local_118;
                                puVar20 = *(undefined8 **)(lVar11 + 0x10);
                                *puVar20 = *puVar10;
                                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar10 + 1);
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                                lVar11 = FUN_14018f0e0(local_70,&DAT_1409f2014);
                                if (*(longlong *)(lVar11 + 8) == 0) {
                                    *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
                                    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                                }
                                else {
                                    lVar21 = -1;
                                    do {
                                        lVar21 = lVar21 + 1;
                                    } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar21) != '\0');
                                    FUN_140058710(lVar13);
                                }
                                if (local_68 != 0) {
                                    FUN_14018b900(local_68,0);
                                }
                                lVar13 = *(longlong *)(local_118 + 0x10) + -0x10;
                                FUN_14005e8e0(local_118,*(longlong *)(local_118 + 0x10) + -0x20,lVar13,lVar13);
                                lVar13 = *(longlong *)(local_118 + 0x10);
                                pdVar12 = (double *)(lVar13 + -0x10);
                                if ((pdVar12 == (double *)&DAT_140a12138) || (*(int *)(lVar13 + -8) != 3))
                                    goto LAB_140533cd4;
                                if (*(int *)(lVar13 + -8) == 3) {
                                    LAB_140533ca8:
                                    iVar4 = (int)*pdVar12;
                                }
                                else {
                                    iVar4 = iVar22;
                                    if ((*(int *)(lVar13 + -8) == 4) &&
                                        (iVar5 = FUN_14005ac80((longlong)*pdVar12 + 0x20,&local_88), iVar5 != 0)) {
                                        pdVar12 = (double *)local_98;
                                        _local_98 = CONCAT88(stack0xffffffffffffff70,local_88);
                                        goto LAB_140533ca8;
                                    }
                                }
                                *(longlong *)(local_118 + 0x10) = *(longlong *)(local_118 + 0x10) + -0x20;
                                iStackX20 = iVar4;
                                FUN_140527690(local_138,&local_res10);
                            }
                        }
                    }
                }
                local_128 = &PTR_FUN_140b56a08;
                if (local_118 != 0) {
                    FUN_1400579e0(local_118);
                }
            }
            if (stack0xfffffffffffffed0 == (undefined8 *)0x0) {
            }
            else {
                local_d8 = 0xfffffffe;
                local_e0 = &PTR_FUN_140b56a08;
                local_d0 = param_1;
                FUN_1400579e0(param_1);
                puVar20 = *(undefined8 **)(local_d0 + 0x10);
                puVar9 = (undefined8 *)(*(longlong *)(local_d0 + 0x18) + 0x40);
                puVar10 = &DAT_140a12138;
                if (puVar9 < puVar20) {
                    puVar10 = puVar9;
                }
                *puVar20 = *puVar10;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(local_d0 + 0x10) = *(longlong *)(local_d0 + 0x10) + 0x10;
                local_d8 = FUN_1400578c0(local_d0);
                if (*(undefined8 **)(lVar7 + 0x480) == (undefined8 *)0x0) {
                    local_res10 = 0;
                }
                else {
                    local_res10 = (**(code **)**(undefined8 **)(lVar7 + 0x480))();
                }
                lVar13 = FUN_140527cb0(param_1,5);
                puVar20 = local_138._0_8_;
                if (lVar13 == 0) {
                    lVar13 = FUN_140527a10(param_1,5);
                    if (lVar13 == 0) {
                        lVar7 = FUN_140527e00(param_1);
                        if (lVar7 == 0) {
                            auVar23 = extraout_XMM0_01;
                            if (iVar3 != 0) {
                                uVar1 = *(undefined4 *)local_138._0_8_;
                                _local_98 = extraout_XMM0_01 & (undefined  [16])0x0;
                                uVar2 = *(undefined4 *)((longlong)local_138._0_8_ + 4);
                                uVar18 = *(undefined8 *)(local_c8 + 0x480);
                                uVar6 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48)
                                        ;
                                auVar23 = extraout_XMM0_03;
                                if ((DAT_140c658f8 != 0) &&
                                    (local_108 = uVar1, uStack260 = uVar2,
                                     puVar10 = (undefined8 *)
                                    FUN_140448be0(&local_108,uVar6,local_res18,local_98,uVar18,1,&local_108
                                    ), auVar23 = extraout_XMM0_04,
                                            puVar10 != (undefined8 *)0x0)) {
                                    local_res10 = (**(code **)*puVar10)(puVar10);
                                    auVar23 = extraout_XMM0_05;
                                }
                            }
                        }
                        else {
                            lVar7 = FUN_140213040(*(undefined4 *)(lVar7 + 8));
                            auVar23 = extraout_XMM0_02;
                            if (lVar7 != 0) {
                                local_res10 = *(int *)(lVar7 + 4);
                            }
                        }
                    }
                    else {
                        uVar18 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x18))();
                        local_res10 = FUN_14052b980(lVar7,uVar18);
                        auVar23 = extraout_XMM0_00;
                    }
                }
                else {
                    local_res10 = FUN_14052bab0(lVar7,lVar13);
                    auVar23 = extraout_XMM0;
                }
                if (((stack0xfffffffffffffed0 != (undefined8 *)0x0) && (DAT_140c658f8 != 0)) &&
                (plVar14 = (longlong *)FUN_140448420(), auVar23 = extraout_XMM0_06,
                        plVar14 != (longlong *)0x0)) {
                    _local_138 = _local_138 & (undefined  [16])0xffffffffffffffff;
                    puVar10 = puVar17;
                    puVar9 = puVar17;
                    if (stack0xfffffffffffffed0 != (undefined8 *)0x0) {
                        do {
                            uVar15 = (**(code **)(*plVar14 + 0x68))(plVar14,local_138._0_8_);
                            auVar23 = extraout_XMM0_07;
                            if ((uVar15 & 1) == 0) {
                                FUN_140527690(local_138,local_138._0_8_);
                                auVar23 = extraout_XMM0_08;
                            }
                            local_138._0_8_ = local_138._0_8_ + 1;
                            register0x00000030 = (undefined8 *)((longlong)register0x00000030 + -1);
                        } while (register0x00000030 != (undefined8 *)0x0);
                        puVar10 = stack0xfffffffffffffed0;
                        puVar9 = local_138._0_8_;
                    }
                    if (puVar10 != (undefined8 *)0x0) {
                        puVar16 = (undefined8 *)FUN_14018b280((longlong)puVar10 * 8 + 0x10,0);
                        if (puVar16 != (undefined8 *)0x0) {
                            puVar16[1] = puVar10;
                            *puVar16 = &PTR_LAB_140b55060;
                            puVar17 = puVar16;
                        }
                        puVar17 = puVar17 + 2;
                        auVar23 = extraout_XMM0_09;
                        if (puVar10 != (undefined8 *)0x0) {
                            puVar16 = puVar17;
                            do {
                                if (puVar16 != (undefined8 *)0x0) {
                                    *(undefined4 *)puVar16 =
                                            *(undefined4 *)(((longlong)puVar9 - (longlong)puVar17) + (longlong)puVar16);
                                    *(undefined4 *)((longlong)puVar16 + 4) =
                                    *(undefined4 *)
                                            (((longlong)puVar9 - (longlong)puVar17) + 4 + (longlong)puVar16);
                                }
                                puVar16 = puVar16 + 1;
                                puVar10 = (undefined8 *)((longlong)puVar10 + -1);
                            } while (puVar10 != (undefined8 *)0x0);
                        }
                    }
                    if (puVar20 != (undefined8 *)0x0) {
                        (**(code **)(puVar20[-2] + 8))(puVar20 + -2);
                        auVar23 = extraout_XMM0_10;
                    }
                    local_138._0_8_ = puVar17;
                    if (puVar9 != (undefined8 *)0x0) {
                        (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
                        auVar23 = extraout_XMM0_11;
                    }
                }
                _local_138 = auVar23 & (undefined  [16])0x0;
                puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50);
                if (((puVar17 < *(undefined8 **)(param_1 + 0x10)) && (puVar17 != &DAT_140a12138)) &&
                    (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x58))) {
                    FUN_1400f0bb0(param_1);
                    FUN_1400f0bb0(param_1);
                    FUN_1400f0bb0(param_1);
                }
                lVar7 = FUN_14018f0e0(local_70,&DAT_1409f1ecc);
                uVar18 = *(undefined8 *)(lVar7 + 8);
                puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x60);
                if (((puVar17 < *(undefined8 **)(param_1 + 0x10)) && (puVar17 != &DAT_140a12138)) &&
                    (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x68))) {
                    uVar18 = FUN_140056bb0(param_1,7);
                }
                FUN_14018f2d0(&local_128,uVar18);
                if (local_68 != 0) {
                    FUN_14018b900(local_68,0);
                }
                lVar13 = local_c8;
                uVar15 = (ulonglong)local_res20;
                lVar7 = *(longlong *)(local_c8 + 0x628);
                uVar18 = FUN_140538120(local_c8 + 0x560,&local_res10);
                piVar19 = (int *)FUN_140772910(uVar18,uVar15 & 0xffffffff,uVar15 * 0x60 + lVar7);
                pdVar12 = *(double **)(param_1 + 0x10);
                puVar17 = (undefined8 *)0x1;
                iVar22 = *piVar19;
                *(undefined4 *)(pdVar12 + 1) = 3;
                *pdVar12 = (double)iVar22;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                *(undefined4 *)(lVar13 + 0x620) = 1;
                if (CONCAT44(uStack284,local_120) != 0) {
                    FUN_14018b900(CONCAT44(uStack284,local_120),0);
                }
                local_e0 = &PTR_FUN_140b56a08;
                if (local_d0 != 0) {
                    FUN_1400579e0();
                }
            }
            local_c0 = &PTR_FUN_140b56a08;
            if (local_b0 != 0) {
                FUN_1400579e0();
            }
            if (local_138._0_8_ != (undefined8 *)0x0) {
                (**(code **)(local_138._0_8_[-2] + 8))(local_138._0_8_ + -2);
            }
        }
    }
    local_100 = &PTR_FUN_140b56a08;
    if (local_f0 != 0) {
        FUN_1400579e0(local_f0);
    }
    return puVar17;
}



undefined8 FUN_1405341b0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    double local_res10;
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,&local_res10), iVar2 == 0)) {
            iVar2 = 0;
            goto LAB_140534229;
        }
        local_10 = 3;
        pdVar6 = &local_18;
        local_18 = local_res10;
    }
    iVar2 = (int)*pdVar6;
    LAB_140534229:
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
        do {
            FUN_1407725e0(lVar7 + 0x30,iVar2);
            lVar5 = *(longlong *)(lVar7 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar7 = lVar5;
                        lVar5 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                    lVar7 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar7 != *(longlong *)(lVar3 + 0x568));
    }
    *(undefined4 *)(lVar3 + 0x620) = 1;
    return 0;
}



undefined8 FUN_140534630(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;

    lVar3 = FUN_14052e9b0();
    if (lVar3 != 0) {
        local_20 = 0xfffffffe;
        local_28 = &PTR_FUN_140b56a08;
        local_18 = param_1;
        FUN_1400579e0(param_1);
        puVar1 = *(undefined8 **)(local_18 + 0x10);
        puVar4 = (undefined8 *)(*(longlong *)(local_18 + 0x18) + 0x10);
        puVar6 = &DAT_140a12138;
        if (puVar4 < puVar1) {
            puVar6 = puVar4;
        }
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(local_18);
        lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
        if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
            do {
                FUN_140772670(lVar7 + 0x30,&local_28,0);
                lVar5 = *(longlong *)(lVar7 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar7 + 8);
                    if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar7 = lVar5;
                            lVar5 = *(longlong *)(lVar7 + 8);
                        } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                        lVar7 = lVar5;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar5 = lVar2;
                    }
                }
            } while (lVar7 != *(longlong *)(lVar3 + 0x568));
        }
        *(undefined4 *)(lVar3 + 0x620) = 1;
        local_28 = &PTR_FUN_140b56a08;
        if (local_18 != 0) {
            FUN_1400579e0();
        }
    }
    return 0;
}



undefined8 FUN_140534780(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    ulonglong uVar8;
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) || (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20), iVar2 == 0)
                ) {
            iVar2 = 0;
            goto LAB_1405347fd;
        }
        local_10 = 3;
        pdVar6 = &local_18;
    }
    iVar2 = (int)*pdVar6;
    LAB_1405347fd:
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar5 != *(longlong *)(lVar3 + 0x568)) {
        do {
            uVar8 = 0;
            if (*(longlong *)(lVar5 + 0x358) != 0) {
                do {
                    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x350) + uVar8 * 8);
                    if (*(int *)(lVar7 + 4) == iVar2) {
                        *(undefined4 *)(lVar7 + 0xd8) = 1;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(ulonglong *)(lVar5 + 0x358));
            }
            lVar7 = *(longlong *)(lVar5 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar5 = lVar7;
                        lVar7 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar7) {
                    lVar5 = lVar7;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar7 + 0x10); lVar5 = lVar7, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar7 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(lVar3 + 0x568));
    }
    *(undefined4 *)(lVar3 + 0x620) = 1;
    return 0;
}



undefined8 FUN_1405348c0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    ulonglong uVar8;
    int iVar9;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    iVar9 = 0;
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,local_res10), iVar2 == 0))
            goto LAB_14053493f;
        local_10 = 3;
        pdVar6 = &local_18;
        local_18 = local_res10[0];
    }
    iVar9 = (int)*pdVar6;
    LAB_14053493f:
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar5 != *(longlong *)(lVar3 + 0x568)) {
        do {
            uVar8 = 0;
            if (*(longlong *)(lVar5 + 0x358) != 0) {
                do {
                    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x350) + uVar8 * 8);
                    if (*(int *)(lVar7 + 4) == iVar9) {
                        *(undefined4 *)(lVar7 + 0xd8) = 0;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(ulonglong *)(lVar5 + 0x358));
            }
            lVar7 = *(longlong *)(lVar5 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar5 = lVar7;
                        lVar7 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar7) {
                    lVar5 = lVar7;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar7 + 0x10); lVar5 = lVar7, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar7 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(lVar3 + 0x568));
    }
    *(undefined4 *)(lVar3 + 0x620) = 1;
    return 0;
}



undefined8 FUN_140534a00(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    ulonglong uVar8;
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) || (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20), iVar2 == 0)
                ) {
            iVar2 = 0;
            goto LAB_140534a7d;
        }
        local_10 = 3;
        pdVar6 = &local_18;
    }
    iVar2 = (int)*pdVar6;
    LAB_140534a7d:
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar5 != *(longlong *)(lVar3 + 0x568)) {
        do {
            uVar8 = 0;
            if (*(longlong *)(lVar5 + 0x358) != 0) {
                do {
                    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x350) + uVar8 * 8);
                    if (*(int *)(lVar7 + 4) == iVar2) {
                        *(undefined4 *)(lVar7 + 0xdc) = 1;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(ulonglong *)(lVar5 + 0x358));
            }
            lVar7 = *(longlong *)(lVar5 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar5 = lVar7;
                        lVar7 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar7) {
                    lVar5 = lVar7;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar7 + 0x10); lVar5 = lVar7, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar7 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(lVar3 + 0x568));
    }
    *(undefined4 *)(lVar3 + 0x620) = 1;
    return 0;
}



undefined8 FUN_140534b40(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    double *pdVar6;
    longlong lVar7;
    ulonglong uVar8;
    int iVar9;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar6 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar6 = pdVar4;
    }
    iVar9 = 0;
    if (*(int *)(pdVar6 + 1) != 3) {
        if ((*(int *)(pdVar6 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar6 + 0x20,local_res10), iVar2 == 0))
            goto LAB_140534bbf;
        local_10 = 3;
        pdVar6 = &local_18;
        local_18 = local_res10[0];
    }
    iVar9 = (int)*pdVar6;
    LAB_140534bbf:
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar5 != *(longlong *)(lVar3 + 0x568)) {
        do {
            uVar8 = 0;
            if (*(longlong *)(lVar5 + 0x358) != 0) {
                do {
                    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x350) + uVar8 * 8);
                    if (*(int *)(lVar7 + 4) == iVar9) {
                        *(undefined4 *)(lVar7 + 0xdc) = 0;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < *(ulonglong *)(lVar5 + 0x358));
            }
            lVar7 = *(longlong *)(lVar5 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar5 = lVar7;
                        lVar7 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar7) {
                    lVar5 = lVar7;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar7 + 0x10); lVar5 = lVar7, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar7 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(lVar3 + 0x568));
    }
    *(undefined4 *)(lVar3 + 0x620) = 1;
    return 0;
}



undefined8 FUN_140534c80(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;

    lVar3 = FUN_14052e9b0();
    if (lVar3 != 0) {
        local_20 = 0xfffffffe;
        local_28 = &PTR_FUN_140b56a08;
        local_18 = param_1;
        FUN_1400579e0(param_1);
        puVar1 = *(undefined8 **)(local_18 + 0x10);
        puVar4 = (undefined8 *)(*(longlong *)(local_18 + 0x18) + 0x10);
        puVar6 = &DAT_140a12138;
        if (puVar4 < puVar1) {
            puVar6 = puVar4;
        }
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(local_18);
        lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
        if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
            do {
                FUN_1407727c0(lVar7 + 0x30,&local_28,1);
                lVar5 = *(longlong *)(lVar7 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar7 + 8);
                    if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar7 = lVar5;
                            lVar5 = *(longlong *)(lVar7 + 8);
                        } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                        lVar7 = lVar5;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar5 = lVar2;
                    }
                }
            } while (lVar7 != *(longlong *)(lVar3 + 0x568));
        }
        *(undefined4 *)(lVar3 + 0x620) = 1;
        local_28 = &PTR_FUN_140b56a08;
        if (local_18 != 0) {
            FUN_1400579e0();
        }
    }
    return 0;
}



undefined8 FUN_140534dd0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;

    lVar3 = FUN_14052e9b0();
    if (lVar3 != 0) {
        local_20 = 0xfffffffe;
        local_28 = &PTR_FUN_140b56a08;
        local_18 = param_1;
        FUN_1400579e0(param_1);
        puVar1 = *(undefined8 **)(local_18 + 0x10);
        puVar4 = (undefined8 *)(*(longlong *)(local_18 + 0x18) + 0x10);
        puVar6 = &DAT_140a12138;
        if (puVar4 < puVar1) {
            puVar6 = puVar4;
        }
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(local_18);
        lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
        if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
            do {
                FUN_1407727c0(lVar7 + 0x30,&local_28,0);
                lVar5 = *(longlong *)(lVar7 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar7 + 8);
                    if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar7 = lVar5;
                            lVar5 = *(longlong *)(lVar7 + 8);
                        } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                        lVar7 = lVar5;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar5 = lVar2;
                    }
                }
            } while (lVar7 != *(longlong *)(lVar3 + 0x568));
        }
        *(undefined4 *)(lVar3 + 0x620) = 1;
        local_28 = &PTR_FUN_140b56a08;
        if (local_18 != 0) {
            FUN_1400579e0();
        }
    }
    return 0;
}



undefined8 FUN_140535480(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    double *pdVar4;
    longlong *plVar5;
    longlong lVar6;
    double *pdVar7;
    longlong lVar8;
    ulonglong uVar9;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar7 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar7 = pdVar4;
    }
    if (*(int *)(pdVar7 + 1) != 3) {
        if ((*(int *)(pdVar7 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar7 + 0x20,local_res10), iVar2 == 0)) {
            iVar2 = 0;
            goto LAB_1405354fd;
        }
        local_10 = 3;
        pdVar7 = &local_18;
        local_18 = local_res10[0];
    }
    iVar2 = (int)*pdVar7;
    LAB_1405354fd:
    lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar8 != *(longlong *)(lVar3 + 0x568)) {
        do {
            plVar5 = (longlong *)**(longlong **)(lVar8 + 0x68);
            if (plVar5 != *(longlong **)(lVar8 + 0x68)) {
                do {
                    uVar9 = 0;
                    if (plVar5[4] != 0) {
                        do {
                            lVar6 = *(longlong *)(plVar5[3] + uVar9 * 8);
                            if (*(int *)(lVar6 + 0xc) == iVar2) {
                                *(undefined4 *)(lVar6 + 0x178) = 1;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < (ulonglong)plVar5[4]);
                    }
                    plVar5 = (longlong *)*plVar5;
                } while (plVar5 != (longlong *)*(longlong *)(lVar8 + 0x68));
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
                for (lVar1 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar6 = lVar1;
                }
            }
        } while (lVar8 != *(longlong *)(lVar3 + 0x568));
    }
    return 0;
}



undefined8 FUN_1405364a0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = FUN_14052e9b0();
    if ((lVar2 != 0) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x568) + 0x10),
                lVar4 != *(longlong *)(lVar2 + 0x568))) {
        do {
            FUN_140774360(lVar4 + 0x30);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 0x568));
    }
    return 0;
}



undefined8 FUN_140536540(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = FUN_14052e9b0();
    if ((lVar2 != 0) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x568) + 0x10),
                lVar4 != *(longlong *)(lVar2 + 0x568))) {
        do {
            FUN_140772560(lVar4 + 0x30);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 0x568));
    }
    return 0;
}



undefined8 FUN_1405365e0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_14052e9b0();
    if (lVar2 == 0) {
        return 0;
    }
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar4 = &DAT_140a12138;
    if (plVar3 < *(longlong **)(param_1 + 0x10)) {
        plVar4 = plVar3;
    }
    if (*(int *)(plVar4 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1);
        if (iVar1 == 0) {
            lVar5 = 0;
            goto LAB_14053665f;
        }
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        plVar4 = &DAT_140a12138;
        if (plVar3 < *(longlong **)(param_1 + 0x10)) {
            plVar4 = plVar3;
        }
    }
    lVar5 = *plVar4 + 0x20;
    LAB_14053665f:
    FUN_14018f2d0(local_28,lVar5);
    if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_140109710(lVar2 + 0x408,*(longlong *)(lVar2 + 0x20) + 0xf0,local_20,0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_1405366b0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined local_28 [8];
    longlong local_20;

    lVar3 = FUN_14052e9b0();
    if (lVar3 == 0) {
        return 0;
    }
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar4 < *(longlong **)(param_1 + 0x10)) {
        plVar6 = plVar4;
    }
    if (*(int *)(plVar6 + 1) != 4) {
        iVar2 = FUN_14005e620(param_1);
        if (iVar2 == 0) {
            lVar7 = 0;
            goto LAB_140536733;
        }
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        plVar6 = &DAT_140a12138;
        if (plVar4 < *(longlong **)(param_1 + 0x10)) {
            plVar6 = plVar4;
        }
    }
    lVar7 = *plVar6 + 0x20;
    LAB_140536733:
    FUN_14018f2d0(local_28,lVar7);
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
    if (lVar7 != *(longlong *)(lVar3 + 0x568)) {
        do {
            if (*(longlong *)(lVar3 + 0x20) != 0) {
                FUN_140109710(lVar7 + 0x90,*(longlong *)(lVar3 + 0x20) + 0xf0,local_20,0);
            }
            lVar5 = *(longlong *)(lVar7 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar7 = lVar5;
                        lVar5 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                    lVar7 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar7 != *(longlong *)(lVar3 + 0x568));
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_140536a00(undefined8 param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 *puVar5;

    lVar4 = FUN_14052e9b0();
    if (lVar4 != 0) {
        puVar5 = (undefined4 *)FUN_140056ab0(param_1,2,"CColor");
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(lVar4 + 0x470) = *puVar5;
        *(undefined4 *)(lVar4 + 0x474) = uVar1;
        *(undefined4 *)(lVar4 + 0x478) = uVar2;
        *(undefined4 *)(lVar4 + 0x47c) = uVar3;
    }
    return 0;
}



undefined8 FUN_140536a50(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    double *pdVar6;
    longlong *plVar7;
    longlong lVar8;
    double *pdVar9;
    longlong *plVar10;
    longlong lVar11;
    double local_res10;
    double local_28;
    undefined4 local_20;
    undefined4 uStack28;

    lVar5 = FUN_14052e9b0();
    if (lVar5 == 0) {
        return 0;
    }
    pdVar6 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar9 = (double *)&DAT_140a12138;
    if (pdVar6 < *(double **)(param_1 + 0x10)) {
        pdVar9 = pdVar6;
    }
    lVar11 = 0;
    if (*(int *)(pdVar9 + 1) == 3) {
        LAB_140536ad4:
        iVar3 = (int)*pdVar9;
    }
    else {
        if ((*(int *)(pdVar9 + 1) == 4) &&
            (iVar3 = FUN_14005ac80((longlong)*pdVar9 + 0x20,&local_res10), iVar3 != 0)) {
            local_20 = 3;
            pdVar9 = &local_28;
            local_28 = local_res10;
            goto LAB_140536ad4;
        }
        iVar3 = 0;
    }
    if (5 < iVar3 - 1U) {
        return 0;
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    plVar10 = &DAT_140a12138;
    if (plVar7 < *(longlong **)(param_1 + 0x10)) {
        plVar10 = plVar7;
    }
    if (*(int *)(plVar10 + 1) != 4) {
        iVar4 = FUN_14005e620(param_1,plVar10);
        if (iVar4 == 0) goto LAB_140536b44;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
        plVar10 = &DAT_140a12138;
        if (plVar7 < *(longlong **)(param_1 + 0x10)) {
            plVar10 = plVar7;
        }
    }
    lVar11 = *plVar10 + 0x20;
    LAB_140536b44:
    FUN_14018f2d0(&local_28,lVar11);
    lVar1 = CONCAT44(uStack28,local_20);
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x568) + 0x10);
    if (lVar11 != *(longlong *)(lVar5 + 0x568)) {
        do {
            if (*(longlong *)(lVar5 + 0x20) != 0) {
                FUN_140109710(((longlong)(int)(iVar3 - 1U) + 4) * 0x30 + lVar11,
                        *(longlong *)(lVar5 + 0x20) + 0xf0,lVar1,0);
            }
            lVar8 = *(longlong *)(lVar11 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar11 = lVar8;
                        lVar8 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar8) {
                    lVar11 = lVar8;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar8 + 0x10); lVar11 = lVar8, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar8 = lVar2;
                }
            }
        } while (lVar11 != *(longlong *)(lVar5 + 0x568));
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return 0;
}



undefined8 FUN_140536c20(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    double *pdVar6;
    longlong *plVar7;
    longlong lVar8;
    double *pdVar9;
    longlong *plVar10;
    longlong lVar11;
    double local_res10;
    double local_28;
    undefined4 local_20;
    undefined4 uStack28;

    lVar5 = FUN_14052e9b0();
    if (lVar5 == 0) {
        return 0;
    }
    pdVar6 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar9 = (double *)&DAT_140a12138;
    if (pdVar6 < *(double **)(param_1 + 0x10)) {
        pdVar9 = pdVar6;
    }
    lVar11 = 0;
    if (*(int *)(pdVar9 + 1) == 3) {
        LAB_140536ca4:
        iVar3 = (int)*pdVar9;
    }
    else {
        if ((*(int *)(pdVar9 + 1) == 4) &&
            (iVar3 = FUN_14005ac80((longlong)*pdVar9 + 0x20,&local_res10), iVar3 != 0)) {
            local_20 = 3;
            pdVar9 = &local_28;
            local_28 = local_res10;
            goto LAB_140536ca4;
        }
        iVar3 = 0;
    }
    if (5 < iVar3 - 1U) {
        return 0;
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    plVar10 = &DAT_140a12138;
    if (plVar7 < *(longlong **)(param_1 + 0x10)) {
        plVar10 = plVar7;
    }
    if (*(int *)(plVar10 + 1) != 4) {
        iVar4 = FUN_14005e620(param_1,plVar10);
        if (iVar4 == 0) goto LAB_140536d14;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
        plVar10 = &DAT_140a12138;
        if (plVar7 < *(longlong **)(param_1 + 0x10)) {
            plVar10 = plVar7;
        }
    }
    lVar11 = *plVar10 + 0x20;
    LAB_140536d14:
    FUN_14018f2d0(&local_28,lVar11);
    lVar1 = CONCAT44(uStack28,local_20);
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x568) + 0x10);
    if (lVar11 != *(longlong *)(lVar5 + 0x568)) {
        do {
            if (*(longlong *)(lVar5 + 0x20) != 0) {
                FUN_140109710((longlong)(int)(iVar3 - 1U) * 0x30 + 0x230 + lVar11,
                        *(longlong *)(lVar5 + 0x20) + 0xf0,lVar1,0);
            }
            lVar8 = *(longlong *)(lVar11 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar11 = lVar8;
                        lVar8 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar8) {
                    lVar11 = lVar8;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar8 + 0x10); lVar11 = lVar8, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar8 = lVar2;
                }
            }
        } while (lVar11 != *(longlong *)(lVar5 + 0x568));
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return 0;
}



undefined8 FUN_140536e00(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_14052e9b0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            DAT_140c65b10 = lVar1;
            *(undefined4 *)(lVar1 + 0x4c0) = 1;
            return 0;
        }
        if (DAT_140c65b10 == lVar1) {
            *(undefined4 *)(DAT_140c65b10 + 0x4c0) = 0;
            DAT_140c65b10 = 0;
        }
    }
    return 0;
}



undefined8 FUN_140536ec0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_14052e9b0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(undefined4 *)(lVar1 + 0x53c) = 1;
            return 0;
        }
        *(undefined4 *)(lVar1 + 0x53c) = 0;
    }
    return 0;
}



undefined8 FUN_1405372e0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;

    lVar3 = FUN_14052e9b0();
    if (lVar3 != 0) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar2 = FUN_140056d60(param_1,2);
        }
        else {
            uVar2 = 0;
        }
        lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x568) + 0x10);
        if (lVar6 != *(longlong *)(lVar3 + 0x568)) {
            do {
                FUN_140774850(lVar6 + 0x30,uVar2);
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
                    for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar5 = lVar1;
                    }
                }
            } while (lVar6 != *(longlong *)(lVar3 + 0x568));
        }
    }
    return 0;
}



undefined8 FUN_140537500(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = FUN_14052e9b0();
    if ((lVar2 != 0) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x568) + 0x10),
                lVar4 != *(longlong *)(lVar2 + 0x568))) {
        do {
            FUN_140774990(lVar4 + 0x30);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 0x568));
    }
    return 0;
}



undefined8 FUN_1405375a0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong local_res10;
    longlong local_res18;

    lVar6 = FUN_14052e9b0();
    if (lVar6 != 0) {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar5 = FUN_140056d60(param_1,2);
        }
        else {
            uVar5 = 0;
        }
        puVar8 = (undefined4 *)FUN_140118290(param_1,3);
        if (puVar8 != (undefined4 *)0x0) {
            lVar6 = *(longlong *)(lVar6 + 0x568);
            lVar9 = *(longlong *)(lVar6 + 0x10);
            if (lVar9 != lVar6) {
                while( true ) {
                    local_res18 = *(longlong *)(lVar9 + 0x368);
                    local_res10 = local_res18;
                    lVar11 = *(longlong *)(local_res18 + 8);
                    while (lVar11 != 0) {
                        if (*(uint *)(lVar11 + 0x20) < uVar5) {
                            lVar11 = *(longlong *)(lVar11 + 0x18);
                        }
                        else {
                            local_res10 = lVar11;
                            lVar11 = *(longlong *)(lVar11 + 0x10);
                        }
                    }
                    if ((local_res10 == local_res18) || (uVar5 < *(uint *)(local_res10 + 0x20))) {
                        plVar10 = &local_res18;
                    }
                    else {
                        plVar10 = &local_res10;
                    }
                    if ((*plVar10 != local_res18) && (lVar11 = *(longlong *)(*plVar10 + 0x28), lVar11 != 0))
                        break;
                    lVar11 = *(longlong *)(lVar9 + 0x18);
                    if (lVar11 == 0) {
                        lVar11 = *(longlong *)(lVar9 + 8);
                        if (lVar9 == *(longlong *)(lVar11 + 0x18)) {
                            do {
                                lVar9 = lVar11;
                                lVar11 = *(longlong *)(lVar9 + 8);
                            } while (lVar9 == *(longlong *)(lVar11 + 0x18));
                        }
                        if (*(longlong *)(lVar9 + 0x18) != lVar11) {
                            lVar9 = lVar11;
                        }
                    }
                    else {
                        for (lVar4 = *(longlong *)(lVar11 + 0x10); lVar9 = lVar11, lVar4 != 0;
                             lVar4 = *(longlong *)(lVar4 + 0x10)) {
                            lVar11 = lVar4;
                        }
                    }
                    if (lVar9 == lVar6) {
                        return 0;
                    }
                }
                uVar1 = puVar8[1];
                uVar2 = puVar8[2];
                uVar3 = puVar8[3];
                *(undefined4 *)(lVar11 + 0x40) = *puVar8;
                *(undefined4 *)(lVar11 + 0x44) = uVar1;
                *(undefined4 *)(lVar11 + 0x48) = uVar2;
                *(undefined4 *)(lVar11 + 0x4c) = uVar3;
            }
        }
    }
    return 0;
}



void FUN_140537910(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 local_res10 [6];

    lVar1 = FUN_14052e9b0();
    if (lVar1 == 0) {
        return;
    }
    local_res10[0] = (**(code **)**(undefined8 **)(lVar1 + 0x480))();
    uVar2 = FUN_140538120(lVar1 + 0x560,local_res10);
    FUN_140775220(uVar2,param_1);
    return;
}



void FUN_140537970(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.ZoneMapWindow",0x14);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140537fbd)

void FUN_1405379e0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RSI;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1405379f1;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RSI;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537a32;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
        *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_IsShowLabelsOn_140c59f40 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 0x4d);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537acf;
    LuaElementLoaderOrSo(lVar2);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_140537af1:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_140537b0d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_140537b0d;
        if (iVar1 == 7) goto LAB_140537af1;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_140537b0d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537b3c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537b62;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537baa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537bcf;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537bf3;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537c14;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537c39;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            uVar5 = *(undefined8 *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    *(undefined8 *)(lVar2 + 0x10) = uVar5;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537c75;
    FUN_140057020(lVar2,"ZoneMapWindow",&DAT_140b720b8);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537c8a;
    FUN_140058710(lVar2,"CodeEnumDisplayMode",0x13);
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537ca8;
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537cb9;
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537cdd;
    FUN_140058710(lVar2,"SuperPanning",0xc);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *puVar8 = 0x3ff0000000000000;
    *(undefined4 *)(puVar8 + 1) = 3;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537d07;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537d1e;
    FUN_14005ea50(lVar2,uVar5,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537d38;
    FUN_140058710(lVar2,"Panning",7);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *puVar8 = 0x4000000000000000;
    *(undefined4 *)(puVar8 + 1) = 3;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537d62;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537d79;
    FUN_14005ea50(lVar2,uVar5,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537d93;
    FUN_140058710(lVar2,"Scaled",6);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *puVar8 = 0x4008000000000000;
    *(undefined4 *)(puVar8 + 1) = 3;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537dbd;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537dd4;
    FUN_14005ea50(lVar2,uVar5,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537dee;
    FUN_140058710(lVar2,"Continent",9);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *puVar8 = 0x4010000000000000;
    *(undefined4 *)(puVar8 + 1) = 3;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537e18;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537e2f;
    FUN_14005ea50(lVar2,uVar5,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537e49;
    FUN_140058710(lVar2,"World",5);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *puVar8 = 0x4014000000000000;
    *(undefined4 *)(puVar8 + 1) = 3;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537e73;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537e8a;
    FUN_14005ea50(lVar2,uVar5,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537ea4;
    FUN_140058710(lVar2,"SolarSystem",0xb);
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    *puVar8 = 0x4018000000000000;
    *(undefined4 *)(puVar8 + 1) = 3;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537ece;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537ee5;
    FUN_14005ea50(lVar2,uVar5,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x20;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537f02;
    FUN_14005ea50(lVar2,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537f20;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537f45;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_140537f78:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_140537f91;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140537f78;
        if (iVar1 != 8) goto LAB_140537f91;
    }
    uVar15 = *puVar10;
    LAB_140537f91:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537fa0;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_140538000;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537fd7;
    FUN_1400f85d0(param_1 + 0xa80,L"ZoneMapWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x140537fe7;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_140538000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined auStack248 [32];
    undefined *local_d8;
    undefined8 local_d0;
    ulonglong local_c8;
    char local_b8 [16];
    undefined local_a8 [96];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    local_d8 = (undefined *)0x0;
    FUN_1400d45e0(local_a8,param_1,param_2,param_5);
    uVar4 = 0;
    uVar3 = 0;
    do {
        local_b8[0] = '\0';
        lVar1 = FUN_1401a6b80(param_5,(&PTR_u_DisableWheelZoom_140b13b68)[uVar3]);
        if (lVar1 != 0) {
            uVar2 = FUN_1401a4f40(lVar1 + 0x20);
            FUN_1401a52e0(uVar2,local_b8);
            if (local_b8[0] != '\0') {
                uVar4 = uVar4 | 1 << ((byte)uVar3 & 0x3f);
            }
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    lVar1 = FUN_14018b280(0x660,0);
    if (lVar1 != 0) {
        local_d8 = local_a8;
        local_d0 = param_4;
        local_c8 = uVar4;
        FUN_140528bd0(lVar1,param_1,param_2,param_3);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack248);
    return;
}



void FUN_140538120(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined auStack1784 [32];
    undefined local_6d8 [8];
    longlong local_6d0;
    undefined local_6c8 [48];
    undefined local_698 [8];
    undefined8 local_690;
    undefined local_688 [368];
    undefined local_518 [368];
    longlong local_3a8;
    ulonglong local_3a0;
    undefined local_398 [8];
    undefined8 local_390;
    uint local_378 [4];
    undefined local_368 [848];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack1784;
    lVar1 = *(longlong *)(param_1 + 8);
    lVar6 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                lVar6 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((lVar6 == lVar1) || (*param_2 < *(uint *)(lVar6 + 0x20))) {
        uVar4 = FUN_140771790(local_6c8);
        local_378[0] = *param_2;
        FUN_1405382e0(local_368,uVar4);
        local_6d0 = lVar6;
        FUN_140538800(param_1,local_6d8,&local_6d0,local_378);
        FUN_140771ad0(local_368);
        FUN_140774790(local_6c8);
        uVar7 = 0;
        uVar5 = local_3a0;
        if (local_3a0 != 0) {
            do {
                lVar1 = *(longlong *)(local_3a8 + uVar7 * 8);
                if (lVar1 != 0) {
                    FUN_14076f7c0(lVar1);
                    FUN_14018b900(lVar1,0);
                    uVar5 = local_3a0;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar5);
        }
        local_3a0 = 0;
        FUN_140774990(local_6c8);
        FUN_140008410(local_398);
        FUN_14018b900(local_390,0);
        if (local_3a8 != 0) {
            (**(code **)(*(longlong *)(local_3a8 + -0x10) + 8))(local_3a8 + -0x10);
        }
        FUN_140538480(local_518);
        FUN_140538480(local_688);
        FUN_140538520(local_698);
        FUN_14018b900(local_690,0);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack1784);
    return;
}



undefined8 * FUN_1405382e0(undefined8 *param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 uVar4;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar2 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 5) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
    uVar4 = FUN_14018b280(0x28);
    param_1[7] = uVar4;
    *(undefined8 *)uVar4 = uVar4;
    *(undefined8 *)(param_1[7] + 8) = param_1[7];
    FUN_140538ee0();
    FUN_1405383a0(param_1 + 8,param_2 + 8);
    FUN_1405383a0(param_1 + 0x36,param_2 + 0x36);
    FUN_1403fe910(param_1 + 100,param_2 + 100);
    FUN_14048b2a0(param_1 + 0x66,param_2 + 0x66);
    return param_1;
}



undefined4 * FUN_1405383a0(undefined4 *param_1,undefined4 *param_2)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined2 *puVar5;
    undefined8 *puVar6;
    int iVar7;

    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    FUN_140109690(param_1 + 8,param_2 + 8);
    iVar7 = 5;
    puVar6 = (undefined8 *)(param_1 + 0x1c);
    do {
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        puVar6[-1] = puVar5;
        *puVar6 = puVar5;
        puVar6[1] = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        puVar1 = *(undefined8 **)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)puVar6);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)();
        }
        iVar7 = iVar7 + -1;
        puVar6[-4] = *(undefined8 *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)puVar6)
        ;
        *(undefined4 *)(puVar6 + -3) =
                *(undefined4 *)((longlong)param_2 + (-0x48 - (longlong)param_1) + (longlong)(puVar6 + 6));
        puVar6 = puVar6 + 6;
    } while (-1 < iVar7);
    return param_1;
}



void FUN_140538480(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;

    iVar2 = 5;
    puVar1 = (undefined8 *)(param_1 + 0x170);
    do {
        if ((longlong *)puVar1[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar1[-6] + 8))();
            puVar1[-6] = 0;
        }
        if (puVar1[-3] != 0) {
            FUN_14018b900(puVar1[-3],0);
        }
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + -6;
    } while (-1 < iVar2);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x38),0);
    }
    return;
}



void FUN_140538520(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar3 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar3;
            lVar2 = plVar3[3];
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_14018b900(plVar3,0);
            plVar3 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    return;
}



void FUN_140538590(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            lVar1 = *param_1;
            if (*(longlong **)(lVar1 + uVar3) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + uVar3) + 8))();
                *(undefined8 *)(lVar1 + uVar3) = 0;
            }
            lVar1 = *(longlong *)(lVar1 + 0x18 + uVar3);
            if (lVar1 != 0) {
                FUN_14018b900(lVar1,0);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x30;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140538621. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



void FUN_140538630(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    if (param_2 < (ulonglong)param_1[1]) {
        if ((ulonglong)param_1[1] <= param_2) {
            param_1[1] = param_2;
            return;
        }
        lVar4 = param_2 * 0x30;
        uVar2 = param_2;
        do {
            lVar3 = *param_1;
            if (*(longlong **)(lVar3 + lVar4) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar3 + lVar4) + 8))();
                *(undefined8 *)(lVar3 + lVar4) = 0;
            }
            lVar3 = *(longlong *)(lVar3 + 0x18 + lVar4);
            if (lVar3 != 0) {
                FUN_14018b900(lVar3,0);
            }
            uVar2 = uVar2 + 1;
            lVar4 = lVar4 + 0x30;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    else {
        lVar4 = FUN_14018db00(*param_1,param_2,0x30);
        uVar2 = param_1[1];
        if (uVar2 < param_2) {
            lVar5 = uVar2 * 0x30 + lVar4;
            lVar3 = param_2 - uVar2;
            do {
                if (lVar5 != 0) {
                    FUN_1401095e0(lVar5);
                }
                lVar5 = lVar5 + 0x30;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
        }
        if (*param_1 != lVar4) {
            uVar1 = 0;
            uVar2 = uVar1;
            if (param_1[1] != 0) {
                do {
                    if (uVar2 + lVar4 != 0) {
                        FUN_140109690(uVar2 + lVar4,*param_1 + uVar2);
                    }
                    lVar3 = *param_1;
                    if (*(longlong **)(lVar3 + uVar2) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar3 + uVar2) + 8))();
                        *(undefined8 *)(lVar3 + uVar2) = 0;
                    }
                    lVar3 = *(longlong *)(lVar3 + 0x18 + uVar2);
                    if (lVar3 != 0) {
                        FUN_14018b900(lVar3,0);
                    }
                    uVar1 = uVar1 + 1;
                    uVar2 = uVar2 + 0x30;
                } while (uVar1 < (ulonglong)param_1[1]);
            }
            lVar3 = *param_1;
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *param_1 = lVar4;
        }
    }
    param_1[1] = param_2;
    return;
}



void FUN_1405387a0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_1405387a0(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            FUN_140771ad0(param_2 + 0x30);
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_140538800(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
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
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_14053885a:
            plVar4 = (longlong *)FUN_140538de0(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x380,0);
                    if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar5 + 0x20) = *param_4;
                        FUN_1405382e0(lVar5 + 0x30,param_4 + 4);
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
                    lVar5 = FUN_140538f80(uVar1,param_4);
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
            else {
                plVar4 = (longlong *)FUN_140538de0(param_1,local_18,param_4);
                *param_2 = *plVar4;
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
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14053885a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140538cf0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140538cf0();
    return param_2;
}



void FUN_140538a10(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_1[1] != 0) {
        do {
            lVar1 = *param_1;
            lVar2 = *(longlong *)(lVar1 + 0x48 + uVar4);
            if (lVar2 != 0) {
                FUN_14018b900(lVar2,0);
            }
            lVar1 = *(longlong *)(lVar1 + 0x28 + uVar4);
            if (lVar1 != 0) {
                FUN_14018b900(lVar1,0);
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 + 0x60;
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140538a9a. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



void FUN_140538ab0(longlong *param_1,ulonglong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *puVar9;

    if ((ulonglong)param_1[1] <= param_2) {
        lVar7 = FUN_14018db00(*param_1,param_2,0x60);
        uVar4 = param_1[1];
        if (uVar4 < param_2) {
            lVar8 = uVar4 * 0x60 + lVar7;
            lVar5 = param_2 - uVar4;
            do {
                if (lVar8 != 0) {
                    FUN_140538c70(lVar8);
                }
                lVar8 = lVar8 + 0x60;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
        if (*param_1 != lVar7) {
            uVar4 = 0;
            if (param_1[1] != 0) {
                puVar6 = (undefined8 *)(lVar7 + 0x30);
                do {
                    if (puVar6 + -6 != (undefined8 *)0x0) {
                        puVar9 = (undefined4 *)
                                ((longlong)puVar6 + (longlong)(&DAT_ffffffffffffffd0 + (*param_1 - lVar7)));
                        uVar1 = puVar9[1];
                        uVar2 = puVar9[2];
                        uVar3 = puVar9[3];
                        *(undefined4 *)(puVar6 + -6) = *puVar9;
                        *(undefined4 *)((longlong)puVar6 + -0x2c) = uVar1;
                        *(undefined4 *)(puVar6 + -5) = uVar2;
                        *(undefined4 *)((longlong)puVar6 + -0x24) = uVar3;
                        uVar1 = puVar9[5];
                        uVar2 = puVar9[6];
                        uVar3 = puVar9[7];
                        *(undefined4 *)(puVar6 + -4) = puVar9[4];
                        *(undefined4 *)((longlong)puVar6 + -0x1c) = uVar1;
                        *(undefined4 *)(puVar6 + -3) = uVar2;
                        *(undefined4 *)((longlong)puVar6 + -0x14) = uVar3;
                        puVar6[-1] = 0;
                        *puVar6 = 0;
                        puVar6[1] = 0;
                        FUN_14001c1b0(puVar6 + -2,*(undefined8 *)(puVar9 + 10),*(undefined8 *)(puVar9 + 0xc));
                        puVar6[3] = 0;
                        puVar6[4] = 0;
                        puVar6[5] = 0;
                        FUN_14001c1b0(puVar6 + 2,*(undefined8 *)(puVar9 + 0x12),*(undefined8 *)(puVar9 + 0x14));
                    }
                    lVar5 = *param_1;
                    lVar8 = *(longlong *)
                            ((longlong)puVar6 + (longlong)(&DAT_ffffffffffffffd0 + (lVar5 - lVar7) + 0x48));
                    if (lVar8 != 0) {
                        FUN_14018b900(lVar8,0);
                    }
                    lVar5 = *(longlong *)
                            ((longlong)puVar6 + (longlong)(&DAT_ffffffffffffffd0 + (lVar5 - lVar7) + 0x28));
                    if (lVar5 != 0) {
                        FUN_14018b900(lVar5,0);
                    }
                    uVar4 = uVar4 + 1;
                    puVar6 = puVar6 + 0xc;
                } while (uVar4 < (ulonglong)param_1[1]);
            }
            lVar5 = *param_1;
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *param_1 = lVar7;
        }
        param_1[1] = param_2;
        return;
    }
    if ((ulonglong)param_1[1] <= param_2) {
        param_1[1] = param_2;
        return;
    }
    lVar7 = param_2 * 0x60;
    uVar4 = param_2;
    do {
        lVar5 = *param_1;
        lVar8 = *(longlong *)(lVar5 + 0x48 + lVar7);
        if (lVar8 != 0) {
            FUN_14018b900(lVar8,0);
        }
        lVar5 = *(longlong *)(lVar5 + 0x28 + lVar7);
        if (lVar5 != 0) {
            FUN_14018b900(lVar5,0);
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x60;
    } while (uVar4 < (ulonglong)param_1[1]);
    param_1[1] = param_2;
    return;
}



longlong FUN_140538c70(longlong param_1)

{
    undefined2 *puVar1;

    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 0x28) = puVar1;
    *(undefined2 **)(param_1 + 0x30) = puVar1;
    *(undefined2 **)(param_1 + 0x38) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x48) = puVar1;
    *(undefined2 **)(param_1 + 0x50) = puVar1;
    *(undefined2 **)(param_1 + 0x58) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    return param_1;
}



longlong *
FUN_140538cf0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x380,0);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_1405382e0(lVar2 + 0x30,param_5 + 4);
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
        lVar2 = FUN_140538f80(param_1,param_5);
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



char ** FUN_140538de0(longlong param_1,char **param_2,uint *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(uint *)(pcVar5 + 0x20);
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140538e3e;
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
    if (*param_3 <= *(uint *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140538e3e:
    ppcVar1 = (char **)FUN_140538cf0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140538ee0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *local_res18;

    local_res18 = param_3;
    if (param_3 != param_4) {
        do {
            lVar1 = *param_2;
            plVar2 = (longlong *)FUN_14018b280(0x28);
            if (plVar2 + 2 != (longlong *)0x0) {
                *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(local_res18 + 2);
                FUN_1403fe910();
            }
            *plVar2 = lVar1;
            plVar2[1] = *(longlong *)(lVar1 + 8);
            **(longlong ***)(lVar1 + 8) = plVar2;
            *(longlong **)(lVar1 + 8) = plVar2;
            local_res18 = (longlong *)*local_res18;
        } while (local_res18 != param_4);
    }
    return;
}



longlong FUN_140538f80(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x380,0);
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1405382e0(lVar1 + 0x30,param_2 + 4);
    }
    return lVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140538fd0(longlong param_1)

{
    short *psVar1;
    undefined4 *puVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    short *psVar8;
    undefined8 *puVar9;
    undefined auStack968 [32];
    wchar_t *local_3a8;
    undefined8 local_3a0;
    wchar_t *local_398;
    undefined **local_388;
    undefined8 uStack896;
    undefined8 local_378;
    int iStack880;
    undefined4 uStack876;
    undefined **local_368;
    undefined8 local_360;
    LPVOID local_358;
    undefined4 local_348;
    undefined4 uStack836;
    undefined4 uStack832;
    undefined4 uStack828;
    undefined4 local_338;
    undefined4 uStack820;
    int iStack816;
    undefined4 uStack812;
    undefined4 local_328;
    undefined4 uStack804;
    undefined4 uStack800;
    undefined4 uStack796;
    undefined8 local_318 [4];
    undefined8 local_2f8;
    undefined8 uStack752;
    undefined8 local_2e8;
    undefined8 uStack736;
    uint local_2d8;
    undefined8 local_2b8;
    undefined8 uStack688;
    undefined8 local_2a8;
    undefined8 uStack672;
    undefined **local_268;
    undefined8 local_260;
    LPVOID local_258;
    undefined4 local_250 [6];
    short local_238;
    short local_236 [263];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack968;
    iVar4 = FUN_14040ad50();
    if ((-1 < iVar4) && (iVar4 = FUN_140631390(), -1 < iVar4)) {
        FUN_140008410(param_1 + 0x73d0);
        FUN_1400e1ea0(DAT_140c63650,*(undefined8 *)(param_1 + 0x7b80),*(undefined8 *)(param_1 + 0x7b88))
                ;
        lVar5 = FUN_14018b280(0x17d0,0);
        puVar9 = (undefined8 *)0x0;
        puVar6 = puVar9;
        if (lVar5 != 0) {
            puVar6 = (undefined8 *)FUN_1404218a0(lVar5);
        }
        *(undefined8 **)(param_1 + 0x7340) = puVar6;
        iVar4 = FUN_1400e4e80(puVar6,0);
        if (-1 < iVar4) {
            FUN_1405b3a40();
            lVar5 = FUN_14018b280(1);
            puVar6 = puVar9;
            if (lVar5 != 0) {
                puVar6 = (undefined8 *)FUN_1406f26c0(lVar5,*(longlong *)(param_1 + 0x7340) + 0x180);
            }
            *(undefined8 **)(param_1 + 0x73f0) = puVar6;
            puVar7 = (undefined8 *)FUN_14018b280(0x20);
            puVar6 = puVar9;
            if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = 0xffffffffffffffff;
                puVar7[2] = 0;
                puVar7[1] = 0;
                *(undefined *)(puVar7 + 3) = 0;
                puVar6 = puVar7;
            }
            *(undefined8 **)(param_1 + 0x7368) = puVar6;
            lVar5 = FUN_14018b280(0x50);
            puVar6 = puVar9;
            if (lVar5 != 0) {
                puVar6 = (undefined8 *)FUN_1407772f0(lVar5,*(undefined8 *)(param_1 + 0x7340));
            }
            *(undefined8 **)(param_1 + 0x7350) = puVar6;
            lVar5 = FUN_14018b280(0x188,0);
            puVar6 = puVar9;
            if (lVar5 != 0) {
                puVar6 = (undefined8 *)LoadGameLibs(lVar5);
            }
            *(undefined8 **)(param_1 + 0x7360) = puVar6;
            FUN_1400f2440(*(longlong *)(param_1 + 0x7340) + 0x180,"DemoSummary",&LAB_140513c50);
            local_398 = L"Addons.xml";
            local_3a0 = *(undefined8 *)(DAT_140c63788 + 0x1320);
            local_3a8 = L"NCSOFT";
            iVar4 = FUN_14001b370(&local_238,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
            if ((-1 < iVar4) && (local_238 != 0)) {
                psVar8 = &local_238;
                do {
                    psVar1 = psVar8 + 1;
                    psVar8 = psVar8 + 1;
                } while (*psVar1 != 0);
            }
            FUN_1401380c0(*(longlong *)(param_1 + 0x7340) + 0x9c0,&local_238);
            FUN_1401396e0(*(longlong *)(param_1 + 0x7340) + 0x9c0,&DAT_140b145c0,L"Addons",1);
            FUN_1401396e0(*(longlong *)(param_1 + 0x7340) + 0x9c0,&DAT_140b144d4,&DAT_1409f2214,1);
            local_398 = L"Addons";
            local_3a0 = *(undefined8 *)(DAT_140c63788 + 0x1320);
            local_3a8 = L"NCSOFT";
            iVar4 = FUN_14001b370(&local_238,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
            if ((-1 < iVar4) && (local_238 != 0)) {
                psVar8 = &local_238;
                do {
                    psVar1 = psVar8 + 1;
                    psVar8 = psVar8 + 1;
                } while (*psVar1 != 0);
            }
            FUN_1401396e0(*(longlong *)(param_1 + 0x7340) + 0x9c0,&local_238,&DAT_1409f21fc,0);
            iVar4 = FUN_1404d6e30(param_1);
            if (iVar4 < 0) {
                local_260 = 0;
                local_268 = &PTR_LAB_140b5e648;
                local_258 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_268);
                local_368 = local_268;
                local_360 = local_260;
                local_388 = &PTR_LAB_140b5e648;
                uStack896 = L"Result";
                local_358 = local_258;
                local_378 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_388);
                local_388 = &PTR_LAB_140b5e640;
                local_338 = (undefined4)local_378;
                uStack820 = local_378._4_4_;
                uStack812 = uStack876;
                local_250[0] = 0x41e0eb98;
                local_250[1] = 1;
                local_3a8 = (wchar_t *)&local_368;
                local_348 = 0x40b5e640;
                uStack836 = 1;
                uStack832 = (undefined4)uStack896;
                uStack828 = uStack896._4_4_;
                iStack880 = iVar4;
                iStack816 = iVar4;
                iVar4 = FUN_1401971e0(&DAT_140c8aef8,5,local_250,&local_348);
                local_388 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_378);
                local_268 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_258);
                if (iVar4 != 0) {
                    DebugBreak();
                }
            }
            else {
                FUN_140139ae0(*(longlong *)(param_1 + 0x7340) + 0x9c0,local_250);
                *(undefined8 *)(param_1 + 0x7358) = 0;
                local_250[0] = 0;
                local_250[1] = 0x3f800000;
                local_250[2] = 0;
                local_250[3] = 0x3f800000;
                local_268 = (undefined **)0xfffffeb40000000a;
                local_260 = 0xfffffeb400000120;
                local_2d8 = 0;
                puVar6 = puVar9;
                puVar7 = local_318;
                do {
                    puVar2 = (undefined4 *)((longlong)local_250 + (longlong)puVar6);
                    puVar6 = (undefined8 *)((longlong)puVar6 + 4);
                    *(undefined4 *)((longlong)local_318 + 0x1c + (longlong)puVar6) = *puVar2;
                    *(undefined4 *)((longlong)&uStack752 + 4 + (longlong)puVar6) =
                    *(undefined4 *)(&stack0xfffffffffffffd94 + (longlong)puVar6);
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                } while ((longlong)puVar6 < 0x10);
                lVar5 = *(longlong *)(param_1 + 0x7340);
                *(undefined4 *)(lVar5 + 0xb80) = local_328;
                *(undefined4 *)(lVar5 + 0xb84) = uStack804;
                *(undefined4 *)(lVar5 + 0xb88) = uStack800;
                *(undefined4 *)(lVar5 + 0xb8c) = uStack796;
                local_2b8 = local_318[0];
                uStack688 = local_318[1];
                local_2a8 = local_318[2];
                uStack672 = local_318[3];
                *(undefined8 *)(lVar5 + 0xb90) = local_318[0];
                *(undefined8 *)(lVar5 + 0xba0) = local_318[2];
                *(undefined8 *)(lVar5 + 0xbb0) = local_2f8;
                *(undefined8 *)(lVar5 + 0xb98) = local_318[1];
                *(undefined8 *)(lVar5 + 0xba8) = local_318[3];
                *(undefined8 *)(lVar5 + 3000) = uStack752;
                *(undefined8 *)(lVar5 + 0xbc0) = local_2e8;
                *(undefined8 *)(lVar5 + 0xbc8) = uStack736;
                *(uint *)(lVar5 + 0xbd0) = local_2d8 & 0xfffffdff | 0x100;
                lVar5 = *(longlong *)(param_1 + 0x7340);
                lVar3 = *(longlong *)(lVar5 + 0x170);
                puVar6 = *(undefined8 **)(lVar3 + 0x18);
                puVar7 = (undefined8 *)
                FUN_14010e2e0(local_328,local_318[1],local_318[3],uStack752,
                              *(undefined8 *)(lVar3 + 0x10),puVar6,L"CRB_TooltipBasic");
                if (puVar7 != puVar6) {
                    puVar9 = (undefined8 *)*puVar7;
                }
                *(undefined8 **)(lVar5 + 0xb78) = puVar9;
                FUN_1400ec4b0(*(undefined8 *)(param_1 + 0x7340),L"cfconfig",&LAB_14053b480,
                              *(undefined8 *)(param_1 + 0x7340));
                FUN_1400e74a0(*(undefined8 *)(param_1 + 0x7340));
                if (*DAT_140c65b80 != 0) {
                    FUN_1405fbba0();
                }
                lVar5 = *(longlong *)(param_1 + 0x7340);
                local_3a8 = (wchar_t *)
                        ((ulonglong)local_3a8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar5 + 0x54))
                        ;
                FUN_1400ea3e0(lVar5,"ResolutionChanged",&DAT_1409ec364,*(undefined4 *)(lVar5 + 0x50));
                lVar3 = DAT_140c65898;
                for (lVar5 = *(longlong *)(param_1 + 0x6f30); DAT_140c65898 = lVar3, lVar5 != 0;
                     lVar5 = *(longlong *)(lVar5 + 0x60)) {
                    *(undefined4 *)(lVar5 + 0x18a8) = 1;
                    if ((*(longlong *)(lVar3 + 0x78) != 0) &&
                        (*(int *)(lVar5 + 8) == *(int *)(*(longlong *)(lVar3 + 0x78) + 8))) {
                        *(undefined4 *)(lVar3 + 0x6f98) = 1;
                    }
                    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"UnitCreated",&DAT_1409ede34,
                                  *(undefined4 *)(lVar5 + 8));
                    lVar3 = DAT_140c65898;
                }
                if (DAT_140c65970 != 0) {
                    FUN_14056fad0();
                }
                FUN_1405ddf70(param_1 + 0x6838);
                FUN_1404b49a0();
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack968);
    return;
}



void FUN_140539640(longlong param_1,int param_2)

{
    short *psVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    short *psVar6;
    undefined auStack616 [32];
    wchar_t *local_248;
    undefined8 local_240;
    wchar_t *local_238;
    short local_228;
    short local_226 [263];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack616;
    if (*(longlong **)(param_1 + 0x7588) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x7588) + 8))();
        *(undefined8 *)(param_1 + 0x7588) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x7350);
    if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
    }
    if (*(longlong **)(param_1 + 0x7540) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x7540) + 8))();
        *(undefined8 *)(param_1 + 0x7540) = 0;
    }
    FUN_14053c0d0(param_1 + 30000);
    lVar3 = *(longlong *)(param_1 + 0x7368);
    if (lVar3 != 0) {
        FUN_140611940(lVar3);
        FUN_14018b900(lVar3,0);
    }
    lVar3 = *(longlong *)(param_1 + 0x7360);
    *(undefined8 *)(param_1 + 0x7368) = 0;
    if (lVar3 != 0) {
        FUN_14050b150(lVar3);
        FUN_14018b900(lVar3,0);
    }
    lVar3 = DAT_140c65b88;
    *(undefined8 *)(param_1 + 0x7360) = 0;
    if (lVar3 != 0) {
        FUN_1405bb940();
    }
    if (*(longlong *)(param_1 + 0x7340) != 0) {
        local_238 = L"Addons.xml";
        local_240 = *(undefined8 *)(DAT_140c63788 + 0x1320);
        local_248 = L"NCSOFT";
        iVar5 = FUN_14001b370(&local_228,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
        if ((-1 < iVar5) && (local_228 != 0)) {
            psVar6 = &local_228;
            do {
                psVar1 = psVar6 + 1;
                psVar6 = psVar6 + 1;
            } while (*psVar1 != 0);
        }
        FUN_140138940(*(longlong *)(param_1 + 0x7340) + 0x9c0,&local_228);
        lVar3 = *(longlong *)(param_1 + 0x7340);
        *(undefined *)(lVar3 + 0x69) = 1;
        FUN_14013a1d0(lVar3 + 0x9c0);
        *(undefined *)(lVar3 + 0x69) = 0;
        plVar4 = *(longlong **)(param_1 + 0x7340);
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
        }
        *(undefined8 *)(param_1 + 0x7340) = 0;
    }
    if (param_2 == 0) {
        FUN_1400e2b40(DAT_140c63650);
    }
    lVar3 = *(longlong *)(param_1 + 0x73f0);
    if (lVar3 != 0) {
        if (DAT_140c65c48 == lVar3) {
            DAT_140c65c48 = 0;
        }
        FUN_14018b900(lVar3,0);
    }
    *(undefined8 *)(param_1 + 0x73f0) = 0;
    FUN_14053c030(param_1 + 0x7cb0,*(undefined8 *)(param_1 + 0x7cb8),*(undefined8 *)(param_1 + 0x7cc0)
    );
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack616);
    return;
}
