//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1405bb940(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x10)) {
        do {
            if (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
                *(undefined8 *)(lVar4 + 0x28) = 0;
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
        } while (lVar4 != *(longlong *)(param_1 + 0x10));
    }
    FUN_140008410(param_1 + 8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x30)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            lVar2 = *(longlong *)(lVar3 + 8);
            lVar5 = *(longlong *)(lVar2 + 0x10);
            if (lVar5 != lVar2) {
                do {
                    if (*(longlong **)(lVar5 + 0x28) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))();
                        *(undefined8 *)(lVar5 + 0x28) = 0;
                    }
                    lVar2 = *(longlong *)(lVar5 + 0x18);
                    if (lVar2 == 0) {
                        lVar2 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar2 + 0x18)) {
                            do {
                                lVar5 = lVar2;
                                lVar2 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar2 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar2) {
                            lVar5 = lVar2;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar5 = lVar2, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar2 = lVar1;
                        }
                    }
                } while (lVar5 != *(longlong *)(lVar3 + 8));
            }
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x10) != 0) {
                    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8);
                    while (lVar2 != 0) {
                        FUN_1400083b0(lVar3,*(undefined8 *)(lVar2 + 0x18));
                        lVar5 = *(longlong *)(lVar2 + 0x10);
                        FUN_14018b900(lVar2,0);
                        lVar2 = lVar5;
                    }
                    *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) = *(longlong *)(lVar3 + 8);
                    *(undefined8 *)(*(longlong *)(lVar3 + 8) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar3 + 8) + 0x18) = *(longlong *)(lVar3 + 8);
                    *(undefined8 *)(lVar3 + 0x10) = 0;
                }
                FUN_14018b900(*(undefined8 *)(lVar3 + 8),0);
                FUN_14018b900(lVar3);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x30));
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x28,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return;
}



longlong FUN_1405bbbb0(void)

{
    longlong lVar1;

    if (DAT_140c65b88 == 0) {
        lVar1 = FUN_14018b280(0x48,0);
        if (lVar1 != 0) {
            DAT_140c65b88 = FUN_1405b92d0(lVar1);
            return DAT_140c65b88;
        }
        DAT_140c65b88 = 0;
    }
    return DAT_140c65b88;
}



void FUN_1405bbc00(void)

{
    longlong lVar1;

    lVar1 = DAT_140c65b88;
    if (DAT_140c65b88 != 0) {
        FUN_1405bb940(DAT_140c65b88);
        FUN_140008410(lVar1 + 0x28);
        FUN_14018b900(*(undefined8 *)(lVar1 + 0x30),0);
        FUN_140008410(lVar1 + 8);
        FUN_14018b900(*(undefined8 *)(lVar1 + 0x10),0);
        FUN_14018b900(lVar1,0);
    }
    DAT_140c65b88 = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405bbc70(longlong param_1,uint param_2,undefined8 *param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res20;
    longlong local_38;
    uint local_30 [2];
    undefined8 local_28;
    longlong local_20;

    lVar2 = FUN_1403d90d0(DAT_140c65898);
    if (lVar2 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        uVar1 = *(uint *)(param_3 + 2);
        local_res20 = lVar4;
        lVar5 = *(longlong *)(lVar4 + 8);
        while (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x20) < uVar1) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                local_res20 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        if ((local_res20 == lVar4) || (uVar1 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar4;
        }
        lVar3 = lVar4;
        lVar5 = *(longlong *)(lVar4 + 8);
        if (local_res20 == lVar4) {
            while (lVar5 != 0) {
                if (*(uint *)(lVar5 + 0x20) < uVar1) {
                    lVar5 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar3 = lVar5;
                    lVar5 = *(longlong *)(lVar5 + 0x10);
                }
            }
            if ((lVar3 == lVar4) || (uVar1 < *(uint *)(lVar3 + 0x20))) {
                local_28 = 0;
                local_res20 = lVar3;
                local_30[0] = uVar1;
                FUN_140055c60(param_1 + 8,&local_38,&local_res20,local_30);
                lVar3 = local_38;
            }
            *(undefined8 **)(lVar3 + 0x28) = param_3;
            (**(code **)*param_3)(param_3);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        local_res20 = lVar4;
        lVar5 = *(longlong *)(lVar4 + 8);
        while (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x20) < param_2) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                local_res20 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        if ((local_res20 == lVar4) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar4;
        }
        if (local_res20 == lVar4) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
                return;
            }
            if (*(longlong *)(&DAT_000018a0 + lVar2) !=
                *(longlong *)(&DAT_000018a0 + *(longlong *)(DAT_140c65898 + 0x78))) {
                return;
            }
            if (*(longlong *)(&DAT_000018a0 + lVar2) == 0) {
                return;
            }
            lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
        }
        else {
            lVar2 = *(longlong *)(local_res20 + 0x28);
            lVar4 = *(longlong *)(lVar2 + 8);
            lVar5 = *(longlong *)(lVar4 + 0x10);
            if (lVar5 != lVar4) {
                do {
                    FUN_1405bb6c0(*(undefined8 *)(lVar5 + 0x28),param_3);
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
                } while (lVar5 != *(longlong *)(lVar2 + 8));
            }
            lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
        }
        FUN_1405bc680(local_30,*(undefined8 *)(lVar2 + 400),param_3);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"BuffAdded",&DAT_1409eb8fc,param_2,
                      (undefined4)local_28);
        if (local_20 != 0) {
            FUN_1400579e0();
        }
    }
    return;
}



void FUN_1405bbef0(longlong param_1,uint param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    bool bVar5;
    longlong local_res20;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar2 = FUN_1403d90d0(DAT_140c65898);
    if (lVar2 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        local_res20 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_3 + 2)) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res20 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res20 == lVar2) || (*(uint *)(param_3 + 2) < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar2;
        }
        bVar5 = local_res20 != *(longlong *)(param_1 + 0x10);
        if (bVar5) {
            FUN_1405bcc50(param_1 + 8,&local_res20);
        }
        lVar2 = *(longlong *)(param_1 + 0x30);
        local_res20 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res20 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res20 == lVar2) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar2;
        }
        if (local_res20 != lVar2) {
            lVar2 = *(longlong *)(*(longlong *)(local_res20 + 0x28) + 8);
            lVar3 = *(longlong *)(lVar2 + 0x10);
            while (lVar3 != lVar2) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong *)(lVar3 + 8);
                    if (lVar3 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar3 = lVar4;
                            lVar4 = *(longlong *)(lVar3 + 8);
                        } while (lVar3 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar3 + 0x18) != lVar4) {
                        lVar3 = lVar4;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar3 = lVar4, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar4 = lVar1;
                    }
                }
            }
        }
        FUN_1405bc680(local_28,*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400),param_3);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"BuffRemoved",&DAT_1409eb874,param_2,
                      local_20);
        if (bVar5) {
            (**(code **)(*param_3 + 8))(param_3);
        }
        if (local_18 != 0) {
            FUN_1400579e0();
        }
    }
    return;
}



void FUN_1405bc0d0(longlong param_1,uint param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res20;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar2 = FUN_1403d90d0(DAT_140c65898);
    if (lVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        local_res20 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < param_2) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res20 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res20 == lVar3) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar3;
        }
        if (local_res20 == lVar3) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
                return;
            }
            if (*(longlong *)(&DAT_000018a0 + lVar2) !=
                *(longlong *)(&DAT_000018a0 + *(longlong *)(DAT_140c65898 + 0x78))) {
                return;
            }
            if (*(longlong *)(&DAT_000018a0 + lVar2) == 0) {
                return;
            }
            lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
        }
        else {
            lVar2 = *(longlong *)(*(longlong *)(local_res20 + 0x28) + 8);
            lVar3 = *(longlong *)(lVar2 + 0x10);
            while (lVar3 != lVar2) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong *)(lVar3 + 8);
                    if (lVar3 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar3 = lVar4;
                            lVar4 = *(longlong *)(lVar3 + 8);
                        } while (lVar3 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar3 + 0x18) != lVar4) {
                        lVar3 = lVar4;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar3 = lVar4, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar4 = lVar1;
                    }
                }
            }
            lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
        }
        FUN_1405bc680(local_28,*(undefined8 *)(lVar2 + 400),param_3);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"BuffUpdated",&DAT_1409eb89c,param_2,
                      local_20);
        if (local_18 != 0) {
            FUN_1400579e0();
        }
    }
    return;
}



void FUN_1405bc270(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x30);
    local_res8 = lVar1;
    lVar4 = *(longlong *)(lVar1 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < *(uint *)(param_2 + 8)) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (*(uint *)(param_2 + 8) < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        lVar1 = *(longlong *)(local_res8 + 0x28);
        FUN_1405bcd50(param_1 + 0x28,&local_res8);
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
        if (lVar4 != *(longlong *)(lVar1 + 8)) {
            do {
                if (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
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
            } while (lVar4 != *(longlong *)(lVar1 + 8));
        }
        FUN_140008410(lVar1);
        FUN_14018b900(*(undefined8 *)(lVar1 + 8),0);
        FUN_14018b900(lVar1,0);
    }
    return;
}



void FUN_1405bc390(longlong param_1,longlong param_2,undefined8 *param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res18;
    longlong local_res20;
    uint local_28 [2];
    undefined8 local_20;

    if (((param_3 != (undefined8 *)0x0) && ((*(byte *)((longlong)param_3 + 0x1c) & 1) != 0)) &&
        (param_2 != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x30);
        local_res18 = lVar6;
        lVar3 = *(longlong *)(lVar6 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_2 + 8)) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res18 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res18 == lVar6) || (*(uint *)(param_2 + 8) < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar6;
        }
        lVar6 = 0;
        if (local_res18 == *(longlong *)(param_1 + 0x30)) {
            lVar3 = FUN_14018b280(0x20);
            if (lVar3 != 0) {
                puVar4 = (undefined *)FUN_14018b280(0x30);
                *(undefined8 *)(lVar3 + 0x10) = 0;
                *(undefined **)(lVar3 + 8) = puVar4;
                *puVar4 = 0;
                *(undefined8 *)(*(longlong *)(lVar3 + 8) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) = *(longlong *)(lVar3 + 8);
                *(longlong *)(*(longlong *)(lVar3 + 8) + 0x18) = *(longlong *)(lVar3 + 8);
                lVar6 = lVar3;
            }
            lVar3 = *(longlong *)(param_1 + 0x30);
            uVar1 = *(uint *)(param_2 + 8);
            local_res18 = lVar3;
            lVar2 = *(longlong *)(lVar3 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < uVar1) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_res18 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_res18 == lVar3) || (uVar1 < *(uint *)(local_res18 + 0x20))) {
                local_20 = 0;
                local_28[0] = uVar1;
                FUN_140055c60(param_1 + 0x28,&local_res20,&local_res18,local_28);
                local_res18 = local_res20;
            }
            *(longlong *)(local_res18 + 0x28) = lVar6;
        }
        else {
            lVar6 = *(longlong *)(local_res18 + 0x28);
        }
        lVar3 = *(longlong *)(lVar6 + 8);
        uVar1 = *(uint *)(param_3 + 3);
        local_res18 = lVar3;
        lVar2 = *(longlong *)(lVar3 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar1) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res18 == lVar3) || (uVar1 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar3;
        }
        lVar5 = lVar3;
        lVar2 = *(longlong *)(lVar3 + 8);
        if (local_res18 == lVar3) {
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < uVar1) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    lVar5 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((lVar5 == lVar3) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
                local_20 = 0;
                local_res18 = lVar5;
                local_28[0] = uVar1;
                FUN_140055c60(lVar6,&local_res20,&local_res18,local_28);
                lVar5 = local_res20;
            }
            *(undefined8 **)(lVar5 + 0x28) = param_3;
            (**(code **)*param_3)(param_3);
        }
    }
    return;
}



void FUN_1405bc5a0(longlong param_1,longlong param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res18 [2];

    if ((param_3 != (longlong *)0x0) && (param_2 != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        local_res18[0] = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_2 + 8)) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res18[0] = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res18[0] == lVar2) || (*(uint *)(param_2 + 8) < *(uint *)(local_res18[0] + 0x20))) {
            local_res18[0] = lVar2;
        }
        if (local_res18[0] != lVar2) {
            plVar1 = (longlong *)(local_res18[0] + 0x28);
            lVar2 = *(longlong *)(*plVar1 + 8);
            local_res18[0] = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_3 + 3)) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_res18[0] = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_res18[0] == lVar2) || (*(uint *)(param_3 + 3) < *(uint *)(local_res18[0] + 0x20)))
            {
                local_res18[0] = lVar2;
            }
            if (local_res18[0] != lVar2) {
                FUN_1405bce50(*plVar1,local_res18);
                (**(code **)(*param_3 + 8))(param_3);
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 * FUN_1405bc680(undefined8 *param_1,longlong param_2,longlong param_3)

{
    short sVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined4 uVar4;
    int iVar5;
    uint uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined2 *puVar10;
    short *psVar11;
    longlong *plVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong *plVar15;
    longlong lVar16;
    ulonglong uVar17;
    bool bVar18;
    undefined extraout_XMM0 [16];
    float fVar19;
    undefined4 local_res8 [2];
    undefined local_138 [8];
    longlong local_130;
    undefined2 *local_128;
    longlong local_120;
    undefined **local_118;
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    undefined local_58 [16];
    undefined2 *local_48;

    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
    bVar18 = true;
    *param_1 = &PTR_FUN_140b569f0;
    *(undefined4 *)(param_1 + 3) = 1;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    uVar7 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_2);
    lVar9 = param_1[2];
    *(undefined4 *)(param_1 + 1) = uVar4;
    uVar17 = (ulonglong)*(uint *)(param_3 + 0x10);
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(param_1[2],puVar2,L"idBuff",uVar17 & 0xffffffff);
    *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    iVar5 = FUN_140649870(param_1[2]);
    if (iVar5 != 0) {
        FUN_1400fb540(param_1);
        *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    }
    iVar5 = FUN_140649870(param_1[2]);
    if (iVar5 != 0) {
        FUN_1400fb540(param_1);
        *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    }
    lVar9 = FUN_1403d90d0(DAT_140c65898);
    plVar15 = (longlong *)0x0;
    if (*(int *)(param_3 + 0x50) == 0) goto LAB_1405bc845;
    if (lVar9 == 0) {
        LAB_1405bc802:
        lVar9 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar9 == 0) goto LAB_1405bc845;
    }
    else {
        if (DAT_140c65898[0xf] != lVar9) {
            bVar18 = DAT_140c65898[0xc92] == lVar9;
        }
        plVar14 = plVar15;
        if (bVar18) {
            plVar14 = DAT_140c65898;
        }
        if ((plVar14 == (longlong *)0x0) || (lVar9 = FUN_1405a5b90(), lVar9 == 0)) goto LAB_1405bc802;
    }
    local_res8[0] = **(undefined4 **)(lVar9 + 0x70);
    iVar5 = FUN_1403d3470(param_1[2],local_res8);
    if (iVar5 != 0) {
        FUN_1400fb540(param_1,L"splEffect");
        *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    }
    LAB_1405bc845:
    FUN_1400b6f30(&local_118);
    local_58 = extraout_XMM0 & (undefined  [16])0x0;
    local_118 = &PTR_FUN_140b69230;
    local_48 = (undefined2 *)0x0;
    puVar10 = (undefined2 *)FUN_14018b280(0x10);
    local_58 = CONCAT88(puVar10,puVar10);
    local_48 = puVar10 + 8;
    if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0;
    }
    psVar11 = (short *)FUN_14034bdd0(local_48,*(undefined4 *)(param_3 + 0x18));
    if (psVar11 == (short *)0x0) {
        if (local_108 != local_100) {
            *local_108 = 0;
            local_100 = local_108;
        }
    }
    else {
        sVar1 = *psVar11;
        plVar14 = plVar15;
        while (sVar1 != 0) {
            plVar14 = (longlong *)((longlong)plVar14 + 1);
            sVar1 = psVar11[(longlong)plVar14];
        }
        FUN_14001c480(local_110,psVar11,psVar11 + (longlong)plVar14);
    }
    plVar12 = (longlong *)FUN_14018b280(0x58);
    plVar14 = plVar15;
    if (plVar12 != (longlong *)0x0) {
        iVar5 = *(int *)(param_3 + 0x10);
        FUN_1400b6390(plVar12);
        *(int *)(plVar12 + 1) = iVar5;
        *plVar12 = (longlong)&PTR_FUN_140b69300;
        *(float *)((longlong)plVar12 + 0xc) = (float)iVar5;
        plVar14 = plVar12;
    }
    FUN_1400b7480(&local_118,plVar14);
    if (((*(longlong *)(param_3 + 0x48) != 0) &&
         (lVar9 = FUN_140561c30(DAT_140c65b70,
                                *(undefined4 *)
                                        (*(longlong *)(param_3 + 0x40) + -4 +
                                         *(longlong *)(param_3 + 0x48) * 4)), lVar9 != 0)) &&
        (*(short *)(lVar9 + 0x88) != 0)) {
        lVar13 = FUN_14018b280(0x58);
        plVar14 = plVar15;
        if (lVar13 != 0) {
            plVar14 = (longlong *)FUN_1404dda70(lVar13,*(undefined2 *)(lVar9 + 0x88));
        }
        local_130 = 0;
        local_128 = (undefined2 *)0x0;
        local_120 = 0;
        do {
            lVar9 = (longlong)plVar15 + 1;
            plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (L"CasterItemLevel"[lVar9] != L'\0');
        lVar9 = (longlong)plVar15 * 2 >> 1;
        uVar17 = lVar9 + 1;
        if (uVar17 < 0x7fffffffffffffff) {
            lVar13 = uVar17 * 2;
            local_128 = (undefined2 *)FUN_14018b280(lVar13,0);
            local_120 = (longlong)local_128 + lVar13;
        }
        lVar13 = (longlong)local_128;
        lVar9 = lVar9 * 2;
        local_130 = (longlong)local_128;
        FUN_1407db590(local_128,L"CasterItemLevel",lVar9);
        local_128 = (undefined2 *)(lVar13 + lVar9);
        if (local_128 != (undefined2 *)0x0) {
            *local_128 = 0;
        }
        FUN_1400b7480(&local_118,plVar14);
        (**(code **)(*plVar14 + 0x48))(plVar14,local_138);
        if (local_130 != 0) {
            FUN_14018b900(local_130,0);
        }
    }
    lVar13 = FUN_1400b7660(&local_118);
    lVar9 = param_1[2];
    uVar7 = *(undefined8 *)(lVar13 + 8);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 1));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(param_1[2],puVar2,L"strTooltip",uVar7);
    *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    uVar6 = FUN_140453ee0(param_3);
    lVar9 = param_1[2];
    fVar19 = (float)(ulonglong)uVar6 * 0.001;
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 1));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    lVar9 = param_1[2];
    lVar13 = FUN_14018f0e0(local_138,L"fTimeRemaining");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    }
    else {
        lVar16 = -1;
        do {
            lVar16 = lVar16 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar16) != '\0');
        FUN_140058710(lVar9);
    }
    if (local_130 != 0) {
        FUN_14018b900(local_130,0);
    }
    pdVar3 = *(double **)(lVar9 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar19;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(lVar9,0xfffffffd);
    FUN_14005ea50(lVar9,uVar7,*(longlong *)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
    *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    lVar9 = param_1[2];
    uVar17 = (ulonglong)*(uint *)(param_3 + 0x1c);
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 1));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(param_1[2],puVar2,L"nCount",uVar17 & 0xffffffff);
    *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
    if (local_58._0_8_ != 0) {
        FUN_14018b900(local_58._0_8_,0);
    }
    FUN_1400b7390(&local_118);
    return param_1;
}



void FUN_1405bcc50(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
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
        iVar2 = FUN_1401971e0(&DAT_140c8afa4,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405bcd16. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_1405bcd50(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
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
        iVar2 = FUN_1401971e0(&DAT_140c8afa8,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405bce16. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_1405bce50(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
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
        iVar2 = FUN_1401971e0(&DAT_140c8afa0,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405bcf16. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



undefined8 FUN_1405bcf50(longlong *param_1)

{
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;

    (**(code **)(*param_1 + 0x48))();
    if (0.0 < extraout_XMM0_Da) {
        (**(code **)(*param_1 + 0x48))(param_1);
        if (extraout_XMM0_Da_00 < 1.0) {
            return 1;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405bcf90(longlong param_1)

{
    char *pcVar1;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    uint *puVar6;
    longlong lVar7;
    uint *puVar8;
    int *piVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong lVar12;
    longlong lVar13;
    int *piVar14;
    longlong *plVar15;
    undefined8 *puVar16;
    int *piVar17;
    int **ppiVar18;
    undefined8 *puVar19;
    int *piVar20;
    int *piVar21;
    longlong lVar22;
    char *pcVar23;
    char *pcVar24;
    int *piVar25;
    int *piVar26;
    int *piVar27;
    uint uVar28;
    undefined8 *puVar29;
    uint *puVar30;
    uint *puVar31;
    int *piVar32;
    uint uVar33;
    bool bVar34;
    int *local_res10;
    int *local_res18;
    int *local_res20;
    int *local_a8 [2];
    longlong local_98;
    longlong local_90;
    int *local_88;
    uint local_80;
    undefined4 uStack124;
    int local_70 [2];
    undefined8 *local_68;
    uint local_60 [2];
    undefined8 local_58;
    undefined8 local_50;
    undefined local_48 [16];

    puVar31 = (uint *)0x0;
    uVar3 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64d70 == 0) && (iVar4 = FUN_140242ae0(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c64068 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)();
    }
    puVar30 = puVar31;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar5 = puVar31;
                if (_DAT_140c64d70 == 0) {
                    iVar4 = FUN_140242ae0();
                    if (iVar4 < 0) {
                        puVar5 = (uint *)0x0;
                    }
                    else {
                        puVar5 = (uint *)(**(code **)(*DAT_140c64068 + 0x20))(DAT_140c64068,puVar30);
                    }
                }
            }
            else {
                puVar5 = (uint *)(*DAT_140c63848)(&PTR_u_Tradeskill_140a6daf0,puVar30);
            }
            puVar6 = (uint *)FUN_14018b280(0x238,0);
            puVar8 = puVar31;
            if (puVar6 != (uint *)0x0) {
                FUN_1407e4830(puVar6,0);
                puVar8 = puVar6;
            }
            *puVar8 = *puVar5;
            puVar8[1] = puVar5[1];
            puVar8[2] = puVar5[2];
            puVar8[4] = puVar5[3];
            puVar8[5] = puVar5[4];
            puVar8[6] = puVar5[6];
            puVar8[0x80] = puVar5[7];
            puVar8[0x81] = puVar5[8];
            puVar8[0x82] = puVar5[9];
            puVar8[0x83] = puVar5[10];
            pcVar1 = *(char **)(param_1 + 0x10);
            uVar33 = *puVar5;
            local_a8[0] = (int *)((ulonglong)local_a8[0] & 0xffffffff00000000 | (ulonglong)uVar33);
            bVar34 = true;
            pcVar2 = pcVar1;
            pcVar24 = *(char **)(pcVar1 + 8);
            while (pcVar24 != (char *)0x0) {
                bVar34 = uVar33 < *(uint *)(pcVar24 + 0x20);
                pcVar2 = pcVar24;
                if (bVar34) {
                    pcVar24 = *(char **)(pcVar24 + 0x10);
                }
                else {
                    pcVar24 = *(char **)(pcVar24 + 0x18);
                }
            }
            pcVar24 = pcVar2;
            if (bVar34) {
                if (pcVar2 != *(char **)(pcVar1 + 0x10)) {
                    if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
                        pcVar24 = *(char **)(pcVar2 + 0x18);
                    }
                    else {
                        pcVar24 = *(char **)(pcVar2 + 0x10);
                        if (pcVar24 == (char *)0x0) {
                            pcVar24 = *(char **)(pcVar2 + 8);
                            pcVar23 = pcVar24;
                            if (pcVar2 == *(char **)(pcVar24 + 0x10)) {
                                do {
                                    pcVar24 = *(char **)(pcVar23 + 8);
                                    bVar34 = pcVar23 == *(char **)(pcVar24 + 0x10);
                                    pcVar23 = pcVar24;
                                } while (bVar34);
                            }
                        }
                        else {
                            for (pcVar23 = *(char **)(pcVar24 + 0x18); pcVar23 != (char *)0x0;
                                 pcVar23 = *(char **)(pcVar23 + 0x18)) {
                                pcVar24 = pcVar23;
                            }
                        }
                    }
                    goto LAB_1405bd16d;
                }
                LAB_1405bd177:
                if ((pcVar2 == pcVar1) || (uVar33 < *(uint *)(pcVar2 + 0x20))) {
                    lVar7 = FUN_14018b280(0x30);
                    if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                        *(int **)(lVar7 + 0x20) = local_a8[0];
                        *(uint **)(lVar7 + 0x28) = puVar8;
                    }
                    *(longlong *)(pcVar2 + 0x10) = lVar7;
                    pcVar1 = *(char **)(param_1 + 0x10);
                    if (pcVar2 == pcVar1) {
                        *(longlong *)(pcVar1 + 8) = lVar7;
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar7;
                    }
                    else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                        *(longlong *)(pcVar1 + 0x10) = lVar7;
                    }
                }
                else {
                    lVar7 = FUN_14018b280(0x30);
                    if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                        *(int **)(lVar7 + 0x20) = local_a8[0];
                        *(uint **)(lVar7 + 0x28) = puVar8;
                    }
                    *(longlong *)(pcVar2 + 0x18) = lVar7;
                    if (pcVar2 == *(char **)(*(longlong *)(param_1 + 0x10) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar7;
                    }
                }
                *(char **)(lVar7 + 8) = pcVar2;
                *(undefined8 *)(lVar7 + 0x10) = 0;
                *(undefined8 *)(lVar7 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            }
            else {
                LAB_1405bd16d:
                if (*(uint *)(pcVar24 + 0x20) < uVar33) goto LAB_1405bd177;
            }
            uVar33 = (int)puVar30 + 1;
            puVar30 = (uint *)(ulonglong)uVar33;
        } while (uVar33 < uVar3);
    }
    uVar3 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar33 = uVar3;
        if ((_DAT_140c63e34 == 0) && (iVar4 = FUN_140246220(), -1 < iVar4)) {
            uVar33 = (**(code **)(*DAT_140c64160 + 0x28))();
        }
    }
    else {
        uVar33 = (*DAT_140c63838)();
    }
    puVar5 = puVar31;
    puVar30 = puVar31;
    if (uVar33 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar8 = puVar31;
                if (_DAT_140c63e34 == 0) {
                    iVar4 = FUN_140246220();
                    if (iVar4 < 0) {
                        puVar8 = (uint *)0x0;
                    }
                    else {
                        puVar8 = (uint *)(**(code **)(*DAT_140c64160 + 0x20))();
                    }
                }
            }
            else {
                puVar8 = (uint *)(*DAT_140c63848)(&PTR_u_TradeskillTier_140a6ddc8,puVar5,DAT_140c63858);
            }
            uVar28 = puVar8[2];
            if (uVar28 != 0) {
                if ((puVar30 == (uint *)0x0) || (*puVar30 != puVar8[1])) {
                    piVar14 = *(int **)(param_1 + 0x10);
                    piVar21 = piVar14;
                    if (*(int **)(piVar14 + 2) != (int *)0x0) {
                        piVar9 = *(int **)(piVar14 + 2);
                        do {
                            if ((uint)piVar9[8] < puVar8[1]) {
                                piVar17 = *(int **)(piVar9 + 6);
                            }
                            else {
                                piVar17 = *(int **)(piVar9 + 4);
                                piVar21 = piVar9;
                            }
                            piVar9 = piVar17;
                        } while (piVar17 != (int *)0x0);
                    }
                    if ((piVar21 == piVar14) || (puVar8[1] < (uint)piVar21[8])) {
                        local_res18 = piVar14;
                        ppiVar18 = &local_res18;
                    }
                    else {
                        local_res10 = piVar21;
                        ppiVar18 = &local_res10;
                    }
                    puVar30 = *(uint **)(*ppiVar18 + 10);
                }
                if (uVar28 < 0xb) {
                    puVar30[(ulonglong)(uVar28 - 1) * 0xc + 8] = puVar8[3];
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 9] = puVar8[4];
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 10] = puVar8[5];
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 0xb] = puVar8[8];
                    puVar30[((ulonglong)(puVar8[2] - 1) + 1) * 0xc] = puVar8[7];
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 0xd] = puVar8[9];
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 0xe] = 0xffffffff;
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 0xf] = puVar8[10];
                    puVar30[(ulonglong)(puVar8[2] - 1) * 0xc + 0x10] = puVar8[0xe];
                    *(undefined8 *)(puVar30 + (ulonglong)(puVar8[2] - 1) * 0xc + 0x12) =
                            *(undefined8 *)(puVar8 + 0xc);
                    uVar28 = puVar30[3];
                    if (uVar28 < puVar8[2]) {
                        uVar28 = puVar8[2];
                    }
                    puVar30[3] = uVar28;
                }
            }
            uVar28 = (int)puVar5 + 1;
            puVar5 = (uint *)(ulonglong)uVar28;
        } while (uVar28 < uVar33);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63d5c == 0) && (iVar4 = FUN_140243360(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c643a0 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)();
    }
    puVar30 = puVar31;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar5 = puVar31;
                if (_DAT_140c63d5c == 0) {
                    iVar4 = FUN_140243360();
                    if (iVar4 < 0) {
                        puVar5 = (uint *)0x0;
                    }
                    else {
                        puVar5 = (uint *)(**(code **)(*DAT_140c643a0 + 0x20))(DAT_140c643a0,puVar30);
                    }
                }
            }
            else {
                puVar5 = (uint *)(*DAT_140c63848)(&PTR_u_TradeskillAchievementReward_140a6db60,puVar30,
                                                  DAT_140c63858);
            }
            piVar14 = *(int **)(param_1 + 0x30);
            piVar21 = *(int **)(piVar14 + 2);
            piVar9 = piVar14;
            if (piVar21 != (int *)0x0) {
                piVar17 = piVar21;
                do {
                    if ((uint)piVar17[8] < puVar5[1]) {
                        piVar20 = *(int **)(piVar17 + 6);
                    }
                    else {
                        piVar20 = *(int **)(piVar17 + 4);
                        piVar9 = piVar17;
                    }
                    piVar17 = piVar20;
                } while (piVar20 != (int *)0x0);
            }
            if ((piVar9 == piVar14) || (puVar5[1] < (uint)piVar9[8])) {
                local_res18 = piVar14;
                ppiVar18 = &local_res18;
            }
            else {
                local_res10 = piVar9;
                ppiVar18 = &local_res10;
            }
            if (*ppiVar18 == piVar14) {
                uVar33 = puVar5[1];
                bVar34 = true;
                local_a8[0] = (int *)((ulonglong)local_a8[0] & 0xffffffff00000000 | (ulonglong)uVar33);
                piVar9 = piVar14;
                while (piVar21 != (int *)0x0) {
                    bVar34 = uVar33 < (uint)piVar21[8];
                    piVar9 = piVar21;
                    if (bVar34) {
                        piVar21 = *(int **)(piVar21 + 4);
                    }
                    else {
                        piVar21 = *(int **)(piVar21 + 6);
                    }
                }
                piVar21 = piVar9;
                if (bVar34) {
                    if (piVar9 != *(int **)(piVar14 + 4)) {
                        if ((*(char *)piVar9 == '\0') && (*(int **)(*(longlong *)(piVar9 + 2) + 8) == piVar9)) {
                            piVar21 = *(int **)(piVar9 + 6);
                        }
                        else {
                            piVar21 = *(int **)(piVar9 + 4);
                            if (piVar21 == (int *)0x0) {
                                piVar21 = *(int **)(piVar9 + 2);
                                piVar17 = piVar21;
                                if (piVar9 == *(int **)(piVar21 + 4)) {
                                    do {
                                        piVar21 = *(int **)(piVar17 + 2);
                                        bVar34 = piVar17 == *(int **)(piVar21 + 4);
                                        piVar17 = piVar21;
                                    } while (bVar34);
                                }
                            }
                            else {
                                for (piVar17 = *(int **)(piVar21 + 6); piVar17 != (int *)0x0;
                                     piVar17 = *(int **)(piVar17 + 6)) {
                                    piVar21 = piVar17;
                                }
                            }
                        }
                        goto LAB_1405bd5dd;
                    }
                }
                else {
                    LAB_1405bd5dd:
                    if (uVar33 <= (uint)piVar21[8]) goto LAB_1405bd68d;
                }
                if ((piVar9 == piVar14) || (uVar33 < (uint)piVar9[8])) {
                    lVar7 = FUN_14018b280(0x30);
                    if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                        *(int **)(lVar7 + 0x20) = local_a8[0];
                        *(uint **)(lVar7 + 0x28) = puVar5;
                    }
                    *(longlong *)(piVar9 + 4) = lVar7;
                    piVar14 = *(int **)(param_1 + 0x30);
                    if (piVar9 == piVar14) {
                        *(longlong *)(piVar14 + 2) = lVar7;
                        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = lVar7;
                    }
                    else if (piVar9 == *(int **)(piVar14 + 4)) {
                        *(longlong *)(piVar14 + 4) = lVar7;
                    }
                }
                else {
                    lVar7 = FUN_14018b280(0x30);
                    if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                        *(int **)(lVar7 + 0x20) = local_a8[0];
                        *(uint **)(lVar7 + 0x28) = puVar5;
                    }
                    *(longlong *)(piVar9 + 6) = lVar7;
                    if (piVar9 == *(int **)(*(longlong *)(param_1 + 0x30) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = lVar7;
                    }
                }
                *(int **)(lVar7 + 8) = piVar9;
                *(undefined8 *)(lVar7 + 0x10) = 0;
                *(undefined8 *)(lVar7 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
            }
            LAB_1405bd68d:
            uVar33 = (int)puVar30 + 1;
            puVar30 = (uint *)(ulonglong)uVar33;
        } while (uVar33 < uVar3);
    }
    if (DAT_140c63838 == (code *)0x0) {
        puVar30 = puVar31;
        if (_DAT_140c65174 != 0) goto LAB_1405bd6e6;
        iVar4 = FUN_140243be0();
        if (iVar4 < 0) {
            puVar30 = (uint *)0x0;
            goto LAB_1405bd6e6;
        }
        uVar3 = (**(code **)(*DAT_140c64e30 + 0x28))();
    }
    else {
        uVar3 = (*DAT_140c63838)();
    }
    puVar30 = (uint *)(ulonglong)uVar3;
    LAB_1405bd6e6:
    local_res10 = (int *)((ulonglong)local_res10 & 0xffffffff00000000 | (ulonglong)puVar30);
    local_res18 = (int *)((ulonglong)local_res18 & 0xffffffff00000000);
    puVar5 = puVar31;
    if ((int)puVar30 != 0) {
        do {
            plVar15 = (longlong *)0x0;
            local_res18._0_4_ = (int)puVar31;
            if (DAT_140c63848 == (code *)0x0) {
                plVar10 = plVar15;
                if (_DAT_140c65174 == 0) {
                    iVar4 = FUN_140243be0();
                    if (iVar4 < 0) {
                        plVar10 = (longlong *)0x0;
                    }
                    else {
                        plVar10 = (longlong *)(**(code **)(*DAT_140c64e30 + 0x20))();
                    }
                }
            }
            else {
                plVar10 = (longlong *)
                        (*DAT_140c63848)(&PTR_u_TradeskillBonus_140a6dbd0,puVar31,DAT_140c63858);
            }
            uVar3 = *(uint *)(plVar10 + 1);
            if (uVar3 != 0) {
                piVar14 = *(int **)(param_1 + 0x50);
                piVar9 = piVar14;
                piVar21 = *(int **)(piVar14 + 2);
                while (piVar21 != (int *)0x0) {
                    if ((uint)piVar21[8] < uVar3) {
                        piVar21 = *(int **)(piVar21 + 6);
                    }
                    else {
                        piVar9 = piVar21;
                        piVar21 = *(int **)(piVar21 + 4);
                    }
                }
                if ((piVar9 == piVar14) || (uVar3 < (uint)piVar9[8])) {
                    local_88 = piVar14;
                    ppiVar18 = &local_88;
                }
                else {
                    ppiVar18 = &local_res20;
                    local_res20 = piVar9;
                }
                if (*ppiVar18 == piVar14) {
                    plVar11 = (longlong *)FUN_14018b280(0x10);
                    if (plVar11 != (longlong *)0x0) {
                        plVar11[1] = 0;
                        *plVar11 = 0;
                        plVar15 = plVar11;
                    }
                    pcVar1 = *(char **)(param_1 + 0x50);
                    uVar3 = *(uint *)(plVar10 + 1);
                    bVar34 = true;
                    local_a8[0] = (int *)((ulonglong)local_a8[0] & 0xffffffff00000000 | (ulonglong)uVar3);
                    pcVar2 = pcVar1;
                    pcVar24 = *(char **)(pcVar1 + 8);
                    while (pcVar24 != (char *)0x0) {
                        bVar34 = uVar3 < *(uint *)(pcVar24 + 0x20);
                        pcVar2 = pcVar24;
                        if (bVar34) {
                            pcVar24 = *(char **)(pcVar24 + 0x10);
                        }
                        else {
                            pcVar24 = *(char **)(pcVar24 + 0x18);
                        }
                    }
                    pcVar24 = pcVar2;
                    if (bVar34) {
                        if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                            if ((pcVar2 == pcVar1) || (uVar3 < *(uint *)(pcVar2 + 0x20))) {
                                lVar7 = FUN_14018b280(0x30);
                                if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                                    *(int **)(lVar7 + 0x20) = local_a8[0];
                                    *(longlong **)(lVar7 + 0x28) = plVar15;
                                }
                                *(longlong *)(pcVar2 + 0x10) = lVar7;
                                pcVar1 = *(char **)(param_1 + 0x50);
                                if (pcVar2 == pcVar1) {
                                    *(longlong *)(pcVar1 + 8) = lVar7;
                                    *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) = lVar7;
                                }
                                else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                                    *(longlong *)(pcVar1 + 0x10) = lVar7;
                                }
                            }
                            else {
                                lVar7 = FUN_14018b280(0x30);
                                if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                                    *(int **)(lVar7 + 0x20) = local_a8[0];
                                    *(longlong **)(lVar7 + 0x28) = plVar15;
                                }
                                *(longlong *)(pcVar2 + 0x18) = lVar7;
                                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 0x50) + 0x18)) {
                                    *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) = lVar7;
                                }
                            }
                            *(char **)(lVar7 + 8) = pcVar2;
                            *(undefined8 *)(lVar7 + 0x10) = 0;
                            *(undefined8 *)(lVar7 + 0x18) = 0;
                            FUN_1400081c0(lVar7,*(longlong *)(param_1 + 0x50) + 8);
                            *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
                            goto LAB_1405bd9d3;
                        }
                        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
                            pcVar24 = *(char **)(pcVar2 + 0x18);
                        }
                        else {
                            pcVar24 = *(char **)(pcVar2 + 0x10);
                            if (pcVar24 == (char *)0x0) {
                                pcVar24 = *(char **)(pcVar2 + 8);
                                pcVar23 = pcVar24;
                                if (pcVar2 == *(char **)(pcVar24 + 0x10)) {
                                    do {
                                        pcVar24 = *(char **)(pcVar23 + 8);
                                        bVar34 = pcVar23 == *(char **)(pcVar24 + 0x10);
                                        pcVar23 = pcVar24;
                                    } while (bVar34);
                                }
                            }
                            else {
                                for (pcVar23 = *(char **)(pcVar24 + 0x18); pcVar23 != (char *)0x0;
                                     pcVar23 = *(char **)(pcVar23 + 0x18)) {
                                    pcVar24 = pcVar23;
                                }
                            }
                        }
                    }
                    if (*(uint *)(pcVar24 + 0x20) < uVar3) {
                        if ((pcVar2 == pcVar1) || (uVar3 < *(uint *)(pcVar2 + 0x20))) {
                            lVar7 = FUN_14018b280(0x30);
                            if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                                *(int **)(lVar7 + 0x20) = local_a8[0];
                                *(longlong **)(lVar7 + 0x28) = plVar15;
                            }
                            *(longlong *)(pcVar2 + 0x10) = lVar7;
                            pcVar1 = *(char **)(param_1 + 0x50);
                            if (pcVar2 == pcVar1) {
                                *(longlong *)(pcVar1 + 8) = lVar7;
                                *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) = lVar7;
                            }
                            else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                                *(longlong *)(pcVar1 + 0x10) = lVar7;
                            }
                        }
                        else {
                            lVar7 = FUN_14018b280(0x30);
                            if ((int **)(lVar7 + 0x20) != (int **)0x0) {
                                *(int **)(lVar7 + 0x20) = local_a8[0];
                                *(longlong **)(lVar7 + 0x28) = plVar15;
                            }
                            *(longlong *)(pcVar2 + 0x18) = lVar7;
                            if (pcVar2 == *(char **)(*(longlong *)(param_1 + 0x50) + 0x18)) {
                                *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) = lVar7;
                            }
                        }
                        *(char **)(lVar7 + 8) = pcVar2;
                        *(undefined8 *)(lVar7 + 0x10) = 0;
                        *(undefined8 *)(lVar7 + 0x18) = 0;
                        FUN_1400081c0(lVar7,*(longlong *)(param_1 + 0x50) + 8);
                        *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
                    }
                }
                else {
                    plVar15 = *(longlong **)(*ppiVar18 + 10);
                }
                LAB_1405bd9d3:
                lVar22 = plVar15[1];
                lVar7 = lVar22 + 1;
                lVar12 = FUN_14018db00(*plVar15,lVar7,8);
                *(longlong **)(lVar12 + lVar22 * 8) = plVar10;
                if (*plVar15 != lVar12) {
                    FUN_1407db590(lVar12,*plVar15,plVar15[1] << 3);
                    if (*plVar15 != 0) {
                        (**(code **)(*(longlong *)(*plVar15 + -0x10) + 8))();
                    }
                    *plVar15 = lVar12;
                }
                puVar30 = (uint *)((ulonglong)local_res10 & 0xffffffff);
                plVar15[1] = lVar7;
            }
            if ((puVar5 == (uint *)0x0) || (*(uint *)((longlong)plVar10 + 4) != *puVar5)) {
                if (DAT_140c63840 == (code *)0x0) {
                    if (_DAT_140c63e34 == 0) {
                        iVar4 = FUN_140246220();
                        if (-1 < iVar4) {
                            puVar5 = (uint *)(**(code **)(*DAT_140c64160 + 0x18))();
                            goto LAB_1405bda96;
                        }
                        puVar5 = (uint *)0x0;
                    }
                    else {
                        puVar5 = (uint *)0x0;
                    }
                }
                else {
                    puVar5 = (uint *)(*DAT_140c63840)(&PTR_u_TradeskillTier_140a6ddc8,
                                                      *(undefined4 *)((longlong)plVar10 + 4),DAT_140c63858);
                    LAB_1405bda96:
                    if (puVar5 != (uint *)0x0) {
                        lVar7 = *(longlong *)(param_1 + 0x10);
                        lVar22 = lVar7;
                        if (*(longlong *)(lVar7 + 8) != 0) {
                            lVar12 = *(longlong *)(lVar7 + 8);
                            do {
                                if (*(uint *)(lVar12 + 0x20) < puVar5[1]) {
                                    lVar13 = *(longlong *)(lVar12 + 0x18);
                                }
                                else {
                                    lVar13 = *(longlong *)(lVar12 + 0x10);
                                    lVar22 = lVar12;
                                }
                                lVar12 = lVar13;
                            } while (lVar13 != 0);
                        }
                        if ((lVar22 == lVar7) || (puVar5[1] < *(uint *)(lVar22 + 0x20))) {
                            local_98 = lVar7;
                            plVar15 = &local_98;
                        }
                        else {
                            local_90 = lVar22;
                            plVar15 = &local_90;
                        }
                        if (*(longlong *)(*plVar15 + 0x28) != 0) {
                            *(int *)(*(longlong *)(*plVar15 + 0x28) + 0x38 + (ulonglong)(puVar5[2] - 1) * 0x30) =
                                    (int)local_res18;
                        }
                    }
                }
            }
            uVar3 = (int)local_res18 + 1;
            puVar31 = (uint *)(ulonglong)uVar3;
            local_res18 = (int *)((ulonglong)local_res18 & 0xffffffff00000000 | (ulonglong)uVar3);
        } while (uVar3 < (uint)puVar30);
    }
    uVar3 = 0;
    LAB_1405bdb20:
    piVar14 = (int *)0x0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c654f8 != 0) goto LAB_1405be051;
        iVar4 = FUN_1402459a0();
        if (iVar4 < 0) goto LAB_1405be033;
        uVar33 = (**(code **)(*DAT_140c63868 + 0x28))();
    }
    else {
        uVar33 = (*DAT_140c63838)();
    }
    if (uVar33 <= uVar3) goto LAB_1405be033;
    if (DAT_140c63848 == (code *)0x0) {
        if ((_DAT_140c654f8 == 0) && (iVar4 = FUN_1402459a0(), -1 < iVar4)) {
            piVar14 = (int *)(**(code **)(*DAT_140c63868 + 0x20))();
        }
    }
    else {
        piVar14 = (int *)(*DAT_140c63848)(&PTR_u_TradeskillSchematic2_140a6dd58,uVar3,DAT_140c63858);
    }
    local_res10 = piVar14;
    if (DAT_140c63840 == (code *)0x0) {
        if ((DAT_140c649fc == 0) && (iVar4 = FUN_140209480(), -1 < iVar4)) {
            lVar7 = (**(code **)(*DAT_140c640e8 + 0x18))();
            goto LAB_1405bdc08;
        }
        LAB_1405bdc46:
        if (DAT_140c63840 == (code *)0x0) {
            if ((DAT_140c649fc == 0) && (iVar4 = FUN_140209480(), -1 < iVar4)) {
                lVar7 = (**(code **)(*DAT_140c640e8 + 0x18))();
                goto LAB_1405bdc7f;
            }
        }
        else {
            lVar7 = (*DAT_140c63840)(&PTR_u_Item2_140a6abb0,piVar14[0x18],DAT_140c63858);
            LAB_1405bdc7f:
            if ((lVar7 != 0) &&
                (((*(int *)(lVar7 + 0x90) != 0 && (*(int *)(lVar7 + 0x88) != 1)) ||
                  ((*(int *)(lVar7 + 0x94) != 0 && (*(int *)(lVar7 + 0x8c) != 1)))))) goto LAB_1405be02b;
        }
        if (((*(byte *)(piVar14 + 8) & 4) != 0) && (uVar33 = piVar14[9], uVar33 != 0)) {
            piVar21 = *(int **)(param_1 + 0xb0);
            piVar17 = piVar21;
            piVar9 = *(int **)(piVar21 + 2);
            while (piVar9 != (int *)0x0) {
                if ((uint)piVar9[8] < uVar33) {
                    piVar9 = *(int **)(piVar9 + 6);
                }
                else {
                    piVar17 = piVar9;
                    piVar9 = *(int **)(piVar9 + 4);
                }
            }
            if ((piVar17 == piVar21) || (uVar33 < (uint)piVar17[8])) {
                local_50 = 0;
                local_58 = 0;
                local_res18 = piVar17;
                local_60[0] = uVar33;
                FUN_140494520(param_1 + 0xa8,&local_res20,&local_res18,local_60);
                piVar17 = local_res20;
            }
            lVar22 = *(longlong *)(piVar17 + 0xc);
            lVar7 = lVar22 + 1;
            lVar12 = FUN_14018db00(*(undefined8 *)(piVar17 + 10),lVar7,8);
            *(int **)(lVar12 + lVar22 * 8) = piVar14;
            if (*(longlong *)(piVar17 + 10) != lVar12) {
                FUN_1407db590(lVar12,*(longlong *)(piVar17 + 10),*(longlong *)(piVar17 + 0xc) << 3);
                if (*(longlong *)(piVar17 + 10) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(piVar17 + 10) + -0x10) + 8))();
                }
                *(longlong *)(piVar17 + 10) = lVar12;
            }
            *(longlong *)(piVar17 + 0xc) = lVar7;
        }
        puVar29 = (undefined8 *)0x0;
        uVar33 = piVar14[0x13];
        if (uVar33 == 0) goto LAB_1405be02b;
        lVar7 = *(longlong *)(param_1 + 0x90);
        lVar12 = lVar7;
        lVar22 = *(longlong *)(lVar7 + 8);
        while (lVar22 != 0) {
            if (*(uint *)(lVar22 + 0x20) < uVar33) {
                lVar22 = *(longlong *)(lVar22 + 0x18);
            }
            else {
                lVar12 = lVar22;
                lVar22 = *(longlong *)(lVar22 + 0x10);
            }
        }
        if ((lVar12 == lVar7) || (uVar33 < *(uint *)(lVar12 + 0x20))) {
            local_90 = lVar7;
            plVar15 = &local_90;
        }
        else {
            local_98 = lVar12;
            plVar15 = &local_98;
        }
        if (*plVar15 == lVar7) {
            puVar16 = (undefined8 *)FUN_14018b280(0x10);
            puVar19 = puVar29;
            if (puVar16 != (undefined8 *)0x0) {
                puVar16[1] = 0;
                *puVar16 = 0;
                puVar19 = puVar16;
            }
            pcVar1 = *(char **)(param_1 + 0x90);
            local_80 = piVar14[0x13];
            bVar34 = true;
            pcVar2 = pcVar1;
            pcVar24 = *(char **)(pcVar1 + 8);
            while (pcVar24 != (char *)0x0) {
                bVar34 = local_80 < *(uint *)(pcVar24 + 0x20);
                pcVar2 = pcVar24;
                if (bVar34) {
                    pcVar24 = *(char **)(pcVar24 + 0x10);
                }
                else {
                    pcVar24 = *(char **)(pcVar24 + 0x18);
                }
            }
            pcVar24 = pcVar2;
            if (bVar34) {
                if (pcVar2 != *(char **)(pcVar1 + 0x10)) {
                    if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
                        pcVar24 = *(char **)(pcVar2 + 0x18);
                    }
                    else {
                        pcVar24 = *(char **)(pcVar2 + 0x10);
                        if (pcVar24 == (char *)0x0) {
                            pcVar24 = *(char **)(pcVar2 + 8);
                            pcVar23 = pcVar24;
                            if (pcVar2 == *(char **)(pcVar24 + 0x10)) {
                                do {
                                    pcVar24 = *(char **)(pcVar23 + 8);
                                    bVar34 = pcVar23 == *(char **)(pcVar24 + 0x10);
                                    pcVar23 = pcVar24;
                                } while (bVar34);
                            }
                        }
                        else {
                            for (pcVar23 = *(char **)(pcVar24 + 0x18); pcVar23 != (char *)0x0;
                                 pcVar23 = *(char **)(pcVar23 + 0x18)) {
                                pcVar24 = pcVar23;
                            }
                        }
                    }
                    goto LAB_1405bde9d;
                }
            }
            else {
                LAB_1405bde9d:
                if (local_80 <= *(uint *)(pcVar24 + 0x20)) goto LAB_1405bdf62;
            }
            if ((pcVar2 == pcVar1) || (local_80 < *(uint *)(pcVar2 + 0x20))) {
                lVar7 = FUN_14018b280(0x30);
                if ((undefined8 *)(lVar7 + 0x20) != (undefined8 *)0x0) {
                    *(undefined8 *)(lVar7 + 0x20) = CONCAT44(uStack124,local_80);
                    *(undefined8 **)(lVar7 + 0x28) = puVar19;
                }
                *(longlong *)(pcVar2 + 0x10) = lVar7;
                pcVar1 = *(char **)(param_1 + 0x90);
                if (pcVar2 == pcVar1) {
                    *(longlong *)(pcVar1 + 8) = lVar7;
                    *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) = lVar7;
                }
                else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                    *(longlong *)(pcVar1 + 0x10) = lVar7;
                }
            }
            else {
                lVar7 = FUN_14018b280(0x30);
                if ((undefined8 *)(lVar7 + 0x20) != (undefined8 *)0x0) {
                    *(undefined8 *)(lVar7 + 0x20) = CONCAT44(uStack124,local_80);
                    *(undefined8 **)(lVar7 + 0x28) = puVar19;
                }
                *(longlong *)(pcVar2 + 0x18) = lVar7;
                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 0x90) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) = lVar7;
                }
            }
            *(char **)(lVar7 + 8) = pcVar2;
            *(undefined8 *)(lVar7 + 0x10) = 0;
            *(undefined8 *)(lVar7 + 0x18) = 0;
            FUN_1400081c0(lVar7,*(longlong *)(param_1 + 0x90) + 8);
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
        }
        LAB_1405bdf62:
        FUN_140033260();
        piVar14 = local_res10;
        if ((*(byte *)(local_res10 + 8) & 2) == 0) goto LAB_1405be02b;
        piVar21 = *(int **)(param_1 + 0x70);
        piVar9 = piVar21;
        if (*(int **)(piVar21 + 2) != (int *)0x0) {
            piVar17 = *(int **)(piVar21 + 2);
            do {
                if ((uint)piVar17[8] < (uint)local_res10[0x13]) {
                    piVar20 = *(int **)(piVar17 + 6);
                }
                else {
                    piVar20 = *(int **)(piVar17 + 4);
                    piVar9 = piVar17;
                }
                piVar17 = piVar20;
            } while (piVar20 != (int *)0x0);
        }
        if ((piVar9 == piVar21) || ((uint)local_res10[0x13] < (uint)piVar9[8])) {
            local_a8[0] = piVar21;
            ppiVar18 = local_a8;
        }
        else {
            local_88 = piVar9;
            ppiVar18 = &local_88;
        }
        if (*ppiVar18 != piVar21) {
            FUN_140033260();
            goto LAB_1405be02b;
        }
        puVar19 = (undefined8 *)FUN_14018b280(0x10);
        if (puVar19 != (undefined8 *)0x0) {
            puVar19[1] = 0;
            *puVar19 = 0;
            puVar29 = puVar19;
        }
        local_70[0] = piVar14[0x13];
        local_68 = puVar29;
        FUN_140055f80(param_1 + 0x68,local_48,local_70);
        FUN_140033260();
        uVar3 = uVar3 + 1;
    }
    else {
        lVar7 = (*DAT_140c63840)(&PTR_u_Item2_140a6abb0,piVar14[3],DAT_140c63858);
        LAB_1405bdc08:
        if ((lVar7 == 0) ||
            (((*(int *)(lVar7 + 0x90) == 0 || (*(int *)(lVar7 + 0x88) == 1)) &&
              ((*(int *)(lVar7 + 0x94) == 0 || (*(int *)(lVar7 + 0x8c) == 1)))))) goto LAB_1405bdc46;
        LAB_1405be02b:
        uVar3 = uVar3 + 1;
    }
    goto LAB_1405bdb20;
    LAB_1405be033:
    if (DAT_140c63838 == (code *)0x0) {
        LAB_1405be051:
        uVar3 = 0;
        if ((_DAT_140c64d74 == 0) && (iVar4 = FUN_140245de0(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c63b08 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_TradeskillTalentTier_140a6dd90,DAT_140c63858);
    }
    piVar21 = piVar14;
    piVar9 = piVar14;
    piVar17 = piVar14;
    if (uVar3 != 0) {
        do {
            piVar20 = (int *)FUN_1402460a0();
            if ((piVar21 == (int *)0x0) || (piVar32 = piVar9, *piVar21 != piVar20[1])) {
                piVar32 = *(int **)(param_1 + 0x10);
                piVar27 = piVar32;
                if (*(int **)(piVar32 + 2) != (int *)0x0) {
                    piVar25 = *(int **)(piVar32 + 2);
                    do {
                        if ((uint)piVar25[8] < (uint)piVar20[1]) {
                            piVar26 = *(int **)(piVar25 + 6);
                        }
                        else {
                            piVar26 = *(int **)(piVar25 + 4);
                            piVar27 = piVar25;
                        }
                        piVar25 = piVar26;
                    } while (piVar26 != (int *)0x0);
                }
                if ((piVar27 == piVar32) || ((uint)piVar20[1] < (uint)piVar27[8])) {
                    local_res18 = piVar32;
                    ppiVar18 = &local_res18;
                }
                else {
                    local_res10 = piVar27;
                    ppiVar18 = &local_res10;
                }
                if (*ppiVar18 != piVar32) {
                    piVar21 = *(int **)(*ppiVar18 + 10);
                    piVar32 = piVar14;
                    goto LAB_1405be106;
                }
            }
            else {
                LAB_1405be106:
                piVar9 = piVar32;
                if ((piVar21 != (int *)0x0) && ((uint)piVar32 < 10)) {
                    piVar9 = (int *)(ulonglong)((uint)piVar32 + 1);
                    piVar21[(longlong)(piVar32 + 0x21)] = *piVar20;
                }
            }
            uVar33 = (int)piVar17 + 1;
            piVar17 = (int *)(ulonglong)uVar33;
        } while (uVar33 < uVar3);
    }
    return;
}



undefined8 FUN_1405be150(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b90 + 0x10);
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
    return 0;
}



undefined8 FUN_1405be1b0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b90 + 0x30);
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
    return 0;
}



ulonglong FUN_1405be210(undefined8 param_1,undefined4 param_2,uint param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    lVar1 = FUN_140246480(param_2);
    if (lVar1 == 0) {
        return 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar1 + 0x1c);
    if (param_3 != 100) {
        uVar2 = (ulonglong)((float)(ulonglong)param_3 * 0.01 * (float)uVar2);
    }
    return uVar2 & 0xffffffff;
}



undefined8 FUN_1405be260(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b90 + 0x90);
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
    return 0;
}



longlong FUN_1405be2c0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b90 + 0xb0);
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
        return local_res8 + 0x28;
    }
    return 0;
}



void FUN_1405be320(undefined8 param_1,undefined8 param_2,undefined (*param_3) [16],float *param_4,
                   float *param_5,float *param_6,float *param_7)

{
    undefined4 uVar1;
    float fVar2;
    uint uVar3;
    longlong lVar4;
    float *pfVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    lVar4 = FUN_140244280();
    if (lVar4 != 0) {
        pfVar5 = (float *)(lVar4 + 0x20);
        lVar4 = 5;
        do {
            switch(pfVar5[-5]) {
                case 1.401298e-45:
                    *(float *)*param_3 = *(float *)*param_3 * *pfVar5;
                    break;
                case 2.802597e-45:
                    *(float *)(*param_3 + 4) = *(float *)(*param_3 + 4) * *pfVar5;
                    break;
                case 4.203895e-45:
                    uVar1 = *(undefined4 *)*param_3;
                    *(undefined4 *)*param_3 = *(undefined4 *)(*param_3 + 4);
                    *(undefined4 *)(*param_3 + 4) = uVar1;
                    break;
                case 5.605194e-45:
                    fVar8 = DAT_140c3b438 * 0.005555556 * *pfVar5;
                    fVar6 = (float)FUN_1408fe3d0(fVar8);
                    fVar7 = (float)FUN_1408fc950(fVar8);
                    fVar8 = *(float *)(*param_3 + 4);
                    fVar2 = *(float *)*param_3;
                    *(float *)(*param_3 + 4) = fVar8 * fVar7 + fVar2 * fVar6;
                    *(float *)*param_3 = fVar2 * fVar7 - fVar8 * fVar6;
                    break;
                case 7.006492e-45:
                    uVar3 = *(uint *)(*param_3 + 4);
                    *(uint *)*param_3 = *(uint *)*param_3 ^ 0x80000000;
                    *(uint *)(*param_3 + 4) = uVar3 ^ 0x80000000;
                    break;
                case 8.407791e-45:
                    *param_7 = *param_7 * *pfVar5;
                    break;
                case 9.809089e-45:
                    *param_6 = (*param_7 - *param_6) * *pfVar5 + *param_6;
                    break;
                case 1.121039e-44:
                    *param_4 = DAT_140c3b438 * 0.005555556 * *pfVar5;
                    break;
                case 1.261169e-44:
                    *param_5 = DAT_140c3b438 * 0.005555556 * *pfVar5;
                    break;
                case 1.961818e-44:
                    fVar8 = *pfVar5;
                    *param_3 = CONCAT412(*(float *)(*param_3 + 0xc) * fVar8,
                                         CONCAT48(*(float *)(*param_3 + 8) * fVar8,
                                                  CONCAT44(*(float *)(*param_3 + 4) * fVar8,
                                                           *(float *)*param_3 * fVar8)));
            }
            pfVar5 = pfVar5 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    return;
}



undefined8 FUN_1405be550(void)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    uint *puVar4;

    lVar2 = FUN_140244280();
    if (lVar2 != 0) {
        uVar3 = 0;
        puVar4 = (uint *)(lVar2 + 0xc);
        do {
            uVar1 = *puVar4;
            if (((10 < uVar1) && (uVar1 != 0xe)) && (uVar1 < 0x11)) {
                return 1;
            }
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
        } while (uVar3 < 5);
    }
    return 0;
}



undefined8 * FUN_1405be5a0(undefined8 *param_1)

{
    undefined *puVar1;

    FUN_14079da60();
    *param_1 = &PTR_FUN_140b6dcd8;
    puVar1 = (undefined *)FUN_14018b280();
    param_1[0x1a] = puVar1;
    param_1[0x1b] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    return param_1;
}



undefined8 FUN_1405be630(undefined8 param_1,ulonglong param_2)

{
    FUN_1405be670();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405be670(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b6dcd8;
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
    FUN_140008410(param_1 + 0x11);
    FUN_140008410(param_1 + 0x19);
    lVar4 = param_1[0x21];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x1f];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x1d];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    FUN_140008410(param_1 + 0x19);
    FUN_14018b900(param_1[0x1a],0);
    FUN_14079dc00(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405be7d0(void)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    code *pcVar4;
    longlong lVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong uVar11;
    char *pcVar12;
    char *pcVar13;
    ulonglong uVar14;
    uint *puVar15;
    longlong lVar16;
    ulonglong uVar17;
    undefined4 *puVar18;
    ulonglong uVar19;
    bool bVar20;
    undefined auStack584 [32];
    uint local_228;
    undefined4 uStack548;
    undefined local_218 [8];
    undefined local_210 [148];
    undefined4 local_17c [85];
    ulonglong local_28;

    lVar5 = DAT_140c65b90;
    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack584;
    FUN_1405bcf90(DAT_140c65b90);
    uVar19 = 0;
    uVar8 = 0;
    uVar17 = uVar19;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c63d5c != 0) || (iVar7 = FUN_140243360(), iVar7 < 0)) {
                LAB_1405bea52:
                pcVar4 = DAT_140c63838;
                FUN_1400b52a0(local_210);
                FUN_1407e4830(local_218,0,0x1f0);
                FUN_1407e4830(local_210,0,0x138);
                FUN_1407e4830(local_17c,0,0x90);
                puVar18 = local_17c;
                for (lVar16 = 0xf; lVar16 != 0; lVar16 = lVar16 + -1) {
                    *puVar18 = 0xc5;
                    puVar18 = puVar18 + 1;
                }
                if (pcVar4 == (code *)0x0) {
                    if (_DAT_140c654f8 == 0) {
                        iVar7 = FUN_1402459a0();
                        if (iVar7 < 0) {
                            uVar8 = 0;
                        }
                        else {
                            uVar8 = (**(code **)(*DAT_140c63868 + 0x28))();
                        }
                    }
                }
                else {
                    uVar8 = (*pcVar4)(&PTR_u_TradeskillSchematic2_140a6dd58,DAT_140c63858);
                }
                uVar17 = uVar19;
                if (uVar8 != 0) {
                    do {
                        if (DAT_140c63848 == (code *)0x0) {
                            uVar9 = uVar19;
                            if (_DAT_140c654f8 == 0) {
                                iVar7 = FUN_1402459a0();
                                if (iVar7 < 0) {
                                    uVar9 = 0;
                                }
                                else {
                                    uVar9 = (**(code **)(*DAT_140c63868 + 0x20))(DAT_140c63868,uVar17);
                                }
                            }
                        }
                        else {
                            uVar9 = (*DAT_140c63848)(&PTR_u_TradeskillSchematic2_140a6dd58,uVar17,DAT_140c63858);
                        }
                        if (((*(int *)(uVar9 + 8) == 0x16) &&
                             (lVar16 = FUN_1400b5df0(DAT_140c658f0), lVar16 != 0)) &&
                            (*(int *)(lVar16 + 0x140) == 0x21)) {
                            FUN_140003460(lVar5 + 0xe8,uVar9);
                            if (*(ulonglong *)(lVar5 + 0x100) != 0) {
                                uVar14 = *(ulonglong *)(lVar5 + 0x100);
                                uVar9 = uVar19;
                                do {
                                    uVar11 = (uVar14 - uVar9 >> 1) + uVar9;
                                    uVar6 = *(uint *)(*(longlong *)(lVar5 + 0xf8) + uVar11 * 4);
                                    if (uVar6 <= *(uint *)(lVar16 + 0x160)) {
                                        if (*(uint *)(lVar16 + 0x160) <= uVar6) goto LAB_1405bebfb;
                                        uVar9 = uVar11 + 1;
                                        uVar11 = uVar14;
                                    }
                                    uVar14 = uVar11;
                                } while (uVar9 < uVar11);
                            }
                            FUN_1401c2e70(lVar5 + 0xf8);
                            LAB_1405bebfb:
                            uVar6 = *(uint *)(lVar16 + 0x124);
                            if ((uVar6 != 0) && (*(int *)(lVar16 + 0x128) != 0)) {
                                uVar9 = uVar19;
                                if (*(ulonglong *)(lVar5 + 0x110) != 0) {
                                    uVar14 = *(ulonglong *)(lVar5 + 0x110);
                                    do {
                                        uVar11 = (uVar14 - uVar9 >> 1) + uVar9;
                                        uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x108) + uVar11 * 4);
                                        if (uVar1 <= uVar6) {
                                            if (uVar6 <= uVar1) goto LAB_1405bec6b;
                                            uVar9 = uVar11 + 1;
                                            uVar11 = uVar14;
                                        }
                                        uVar14 = uVar11;
                                    } while (uVar9 < uVar11);
                                }
                                FUN_1401c2e70(lVar5 + 0x108,uVar9,lVar16 + 0x124);
                            }
                        }
                        LAB_1405bec6b:
                        uVar6 = (int)uVar17 + 1;
                        uVar17 = (ulonglong)uVar6;
                    } while (uVar6 < uVar8);
                }
                FUN_1407db4f0(local_28 ^ (ulonglong)auStack584);
                return;
            }
            uVar6 = (**(code **)(*DAT_140c643a0 + 0x28))();
        }
        else {
            uVar6 = (*DAT_140c63838)(&PTR_u_TradeskillAchievementReward_140a6db60,DAT_140c63858);
        }
        if (uVar6 <= (uint)uVar17) goto LAB_1405bea52;
        if (DAT_140c63848 == (code *)0x0) {
            uVar9 = uVar19;
            if (_DAT_140c63d5c == 0) {
                iVar7 = FUN_140243360();
                if (iVar7 < 0) {
                    uVar9 = 0;
                }
                else {
                    uVar9 = (**(code **)(*DAT_140c643a0 + 0x20))();
                }
            }
        }
        else {
            uVar9 = (*DAT_140c63848)(&PTR_u_TradeskillAchievementReward_140a6db60);
        }
        puVar15 = (uint *)(uVar9 + 0x14);
        lVar16 = 8;
        do {
            uVar6 = *puVar15;
            if (uVar6 != 0) {
                pcVar2 = *(char **)(lVar5 + 0xd0);
                uStack548 = *(undefined4 *)(uVar9 + 4);
                bVar20 = true;
                pcVar3 = pcVar2;
                pcVar13 = *(char **)(pcVar2 + 8);
                while (pcVar13 != (char *)0x0) {
                    bVar20 = uVar6 < *(uint *)(pcVar13 + 0x20);
                    pcVar3 = pcVar13;
                    if (bVar20) {
                        pcVar13 = *(char **)(pcVar13 + 0x10);
                    }
                    else {
                        pcVar13 = *(char **)(pcVar13 + 0x18);
                    }
                }
                pcVar13 = pcVar3;
                local_228 = uVar6;
                if (bVar20) {
                    if (pcVar3 != *(char **)(pcVar2 + 0x10)) {
                        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                            pcVar13 = *(char **)(pcVar3 + 0x18);
                        }
                        else {
                            pcVar13 = *(char **)(pcVar3 + 0x10);
                            if (pcVar13 == (char *)0x0) {
                                pcVar13 = *(char **)(pcVar3 + 8);
                                pcVar12 = pcVar13;
                                if (pcVar3 == *(char **)(pcVar13 + 0x10)) {
                                    do {
                                        pcVar13 = *(char **)(pcVar12 + 8);
                                        bVar20 = pcVar12 == *(char **)(pcVar13 + 0x10);
                                        pcVar12 = pcVar13;
                                    } while (bVar20);
                                }
                            }
                            else {
                                for (pcVar12 = *(char **)(pcVar13 + 0x18); pcVar12 != (char *)0x0;
                                     pcVar12 = *(char **)(pcVar12 + 0x18)) {
                                    pcVar13 = pcVar12;
                                }
                            }
                        }
                        goto LAB_1405be97d;
                    }
                }
                else {
                    LAB_1405be97d:
                    if (uVar6 <= *(uint *)(pcVar13 + 0x20)) goto LAB_1405bea36;
                }
                if ((pcVar3 == pcVar2) || (uVar6 < *(uint *)(pcVar3 + 0x20))) {
                    lVar10 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack548,local_228);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar10;
                    pcVar2 = *(char **)(lVar5 + 0xd0);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar10;
                        *(longlong *)(*(longlong *)(lVar5 + 0xd0) + 0x18) = lVar10;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar10;
                    }
                }
                else {
                    lVar10 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack548,local_228);
                    }
                    *(longlong *)(pcVar3 + 0x18) = lVar10;
                    if (pcVar3 == *(char **)(*(longlong *)(lVar5 + 0xd0) + 0x18)) {
                        *(longlong *)(*(longlong *)(lVar5 + 0xd0) + 0x18) = lVar10;
                    }
                }
                *(char **)(lVar10 + 8) = pcVar3;
                *(undefined8 *)(lVar10 + 0x10) = 0;
                *(undefined8 *)(lVar10 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(lVar5 + 0xd8) = *(longlong *)(lVar5 + 0xd8) + 1;
            }
            LAB_1405bea36:
            puVar15 = puVar15 + 1;
            lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        uVar17 = (ulonglong)((uint)uVar17 + 1);
    } while( true );
}



longlong FUN_1405becb0(longlong param_1)

{
    undefined2 *puVar1;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    *(undefined2 **)(param_1 + 8) = puVar1;
    *(undefined2 **)(param_1 + 0x18) = puVar1 + 1;
    *(undefined2 **)(param_1 + 0x10) = puVar1;
    FUN_1407db590(puVar1,&DAT_140b7b704,0);
    *(undefined2 **)(param_1 + 0x10) = puVar1;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    return param_1;
}



uint FUN_1405bed30(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x48);
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
    if ((local_res8 != lVar1) && (local_res8 != -0x28)) {
        return *(uint *)(local_res8 + 0x40) >> 2 & 1;
    }
    return 0;
}



undefined8 FUN_1405beda0(undefined8 param_1,longlong param_2)

{
    undefined8 uVar1;

    if (*(int *)(param_2 + 0x20) != 0) {
        uVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),*(int *)(param_2 + 0x20),
                 0,0,0);
        return uVar1;
    }
    return 1;
}



undefined8 FUN_1405bedf0(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c65b98 == 0) {
        lVar2 = FUN_14018b280(0x238,0);
        if (lVar2 == 0) {
            DAT_140c65b98 = 0;
        }
        else {
            DAT_140c65b98 = FUN_1405bee80(lVar2);
        }
        iVar1 = FUN_1405c2f20();
        lVar2 = DAT_140c65b98;
        if (iVar1 < 0) {
            if (DAT_140c65b98 != 0) {
                FUN_1405bf130(DAT_140c65b98);
                FUN_14018b900(lVar2,0);
            }
            DAT_140c65b98 = 0;
            return 0x80004005;
        }
    }
    return 0;
}



longlong FUN_1405bee80(longlong param_1)

{
    undefined4 uVar1;

    FUN_1405bf900();
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0x544e5645;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0x10;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_140195d70();
    uVar1 = DAT_140c636a8;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 300) = uVar1;
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_1405bf040(param_1 + 0x1b8);
    return param_1;
}



longlong FUN_1405bf040(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x30);
    *(undefined **)(param_1 + 0x48) = puVar1;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    puVar1 = (undefined *)FUN_14018b280(0x38,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined **)(param_1 + 0x68) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    return param_1;
}



void FUN_1405bf0c0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14001a270(param_1 + 0x60,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
    FUN_140008410(param_1 + 0x40);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    return;
}



void FUN_1405bf130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    undefined8 unaff_RDI;

    FUN_1405bf0c0(param_1 + 0x1b8);
    lVar1 = *(longlong *)(param_1 + 0x1a0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x180);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1405c4a00(param_1 + 0x160);
    FUN_140195d70((undefined4 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xd8);
    }
    if (*(undefined8 **)(param_1 + 0xd8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14001a270(param_1 + 0x40,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8),param_3,param_4,
                      unaff_RDI);
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140032150(param_1 + 0x20,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_140032150(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



undefined8 FUN_1405bf1d0(undefined8 *param_1,longlong param_2,uint param_3)

{
    undefined *puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    int iVar9;
    undefined **local_a8;
    int local_a0;
    longlong local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined4 local_58;
    undefined **local_50;
    undefined4 local_48;
    undefined4 uStack68;
    longlong local_40;
    undefined ***local_38;

    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    puVar4 = (undefined8 *)FUN_1400580e0(param_2,2);
    if ((puVar4 != &DAT_140a12138) && (*(int *)(puVar4 + 1) == 5)) {
        local_78 = 1;
        local_88 = 0xfffffffe;
        local_90 = &PTR_FUN_140b569f0;
        local_80 = param_2;
        puVar4 = (undefined8 *)FUN_1400580e0(param_2,2);
        if ((puVar4 != &DAT_140a12138) && (*(int *)(puVar4 + 1) == 5)) {
            FUN_1400579e0(local_80);
            lVar8 = local_80;
            puVar5 = (undefined8 *)FUN_1400580e0(local_80,2);
            puVar4 = *(undefined8 **)(lVar8 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            local_88 = FUN_1400578c0(local_80);
        }
        iVar2 = (*(code *)local_90[1])(&local_90);
        iVar9 = 0;
        if (iVar2 != 0) {
            lVar6 = local_80;
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_80 + 0x20) + 0xa0),local_88);
            lVar8 = local_80;
            puVar4 = *(undefined8 **)(lVar6 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_50,L"bAsMercenary");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
                FUN_140058710(lVar8);
            }
            if (CONCAT44(uStack68,local_48) != 0) {
                FUN_14018b900(CONCAT44(uStack68,local_48),0);
            }
            lVar8 = *(longlong *)(local_80 + 0x10) + -0x10;
            FUN_14005e8e0(local_80,*(longlong *)(local_80 + 0x10) + -0x20,lVar8,lVar8);
            lVar8 = *(longlong *)(local_80 + 0x10);
            if (((undefined8 *)(lVar8 + -0x10) != &DAT_140a12138) && (*(int *)(lVar8 + -8) == 1)) {
                iVar2 = iVar9;
                if ((*(int *)(lVar8 + -8) != 0) &&
                    ((*(int *)(lVar8 + -8) != 1 || (*(int *)(undefined8 *)(lVar8 + -0x10) != 0)))) {
                    iVar2 = 1;
                }
                *(int *)(param_1 + 1) = iVar2;
            }
            *(longlong *)(local_80 + 0x10) = lVar8 + -0x20;
        }
        iVar2 = (*(code *)local_90[1])(&local_90);
        if (iVar2 != 0) {
            lVar6 = local_80;
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_80 + 0x20) + 0xa0),local_88);
            lVar8 = local_80;
            puVar4 = *(undefined8 **)(lVar6 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_50,L"bVeteran");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
                FUN_140058710(lVar8);
            }
            if (CONCAT44(uStack68,local_48) != 0) {
                FUN_14018b900(CONCAT44(uStack68,local_48),0);
            }
            lVar8 = *(longlong *)(local_80 + 0x10) + -0x10;
            FUN_14005e8e0(local_80,*(longlong *)(local_80 + 0x10) + -0x20,lVar8,lVar8);
            lVar8 = *(longlong *)(local_80 + 0x10);
            if (((undefined8 *)(lVar8 + -0x10) != &DAT_140a12138) && (*(int *)(lVar8 + -8) == 1)) {
                iVar2 = iVar9;
                if ((*(int *)(lVar8 + -8) != 0) &&
                    ((*(int *)(lVar8 + -8) != 1 || (*(int *)(undefined8 *)(lVar8 + -0x10) != 0)))) {
                    iVar2 = 1;
                }
                *(int *)(param_1 + 2) = iVar2;
            }
            *(longlong *)(local_80 + 0x10) = lVar8 + -0x20;
        }
        iVar2 = (*(code *)local_90[1])(&local_90);
        if (iVar2 != 0) {
            lVar6 = local_80;
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_80 + 0x20) + 0xa0),local_88);
            lVar8 = local_80;
            puVar4 = *(undefined8 **)(lVar6 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_50,L"bFindOthers");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
                FUN_140058710(lVar8);
            }
            if (CONCAT44(uStack68,local_48) != 0) {
                FUN_14018b900(CONCAT44(uStack68,local_48),0);
            }
            lVar8 = *(longlong *)(local_80 + 0x10) + -0x10;
            FUN_14005e8e0(local_80,*(longlong *)(local_80 + 0x10) + -0x20,lVar8,lVar8);
            lVar8 = *(longlong *)(local_80 + 0x10);
            if (((undefined8 *)(lVar8 + -0x10) == &DAT_140a12138) || (*(int *)(lVar8 + -8) != 1)) {
                *(longlong *)(local_80 + 0x10) = lVar8 + -0x20;
            }
            else {
                if ((*(int *)(lVar8 + -8) != 0) &&
                    ((*(int *)(lVar8 + -8) != 1 || (*(int *)(undefined8 *)(lVar8 + -0x10) != 0)))) {
                    iVar9 = 1;
                }
                *(longlong *)(local_80 + 0x10) = lVar8 + -0x20;
                *(uint *)((longlong)param_1 + 0xc) = (uint)(iVar9 == 0);
            }
        }
        local_a8 = &PTR_FUN_140b56a08;
        local_98 = 0;
        local_a0 = -2;
        iVar2 = (*(code *)local_90[1])(&local_90);
        if (iVar2 != 0) {
            lVar6 = local_80;
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_80 + 0x20) + 0xa0),local_88);
            lVar8 = local_80;
            puVar4 = *(undefined8 **)(lVar6 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_50,L"arRoles");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
                FUN_140058710(lVar8);
            }
            if (CONCAT44(uStack68,local_48) != 0) {
                FUN_14018b900(CONCAT44(uStack68,local_48),0);
            }
            FUN_14005e8e0();
            local_98 = local_80;
            (*(code *)local_a8[2])(&local_a8);
            local_70 = &PTR_FUN_140b569f0;
            *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + -0x20;
            local_58 = 1;
            local_60 = local_98;
            local_68 = 0xfffffffe;
            if ((local_98 != 0) && (local_a0 != -2)) {
                lVar8 = local_98;
                puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_98 + 0x20) + 0xa0))
                        ;
                puVar4 = *(undefined8 **)(lVar8 + 0x10);
                *puVar4 = *puVar5;
                *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                puVar4 = (undefined8 *)(*(longlong *)(local_98 + 0x10) + -0x10);
                if (puVar4 == &DAT_140a12138) {
                    iVar2 = -1;
                }
                else {
                    iVar2 = *(int *)(*(longlong *)(local_98 + 0x10) + -8);
                }
                *(undefined8 **)(local_98 + 0x10) = puVar4;
                if (iVar2 == 5) {
                    lVar8 = local_98;
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_98 + 0x20) + 0xa0),local_a0);
                    puVar4 = *(undefined8 **)(lVar8 + 0x10);
                    *puVar4 = *puVar5;
                    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                    local_68 = FUN_1400578c0(local_60);
                }
            }
            local_50 = &PTR_FUN_140b56a08;
            local_48 = 0xfffffffe;
            local_38 = &local_70;
            *(undefined4 *)(*(longlong *)(local_60 + 0x10) + 8) = 0;
            *(longlong *)(local_60 + 0x10) = *(longlong *)(local_60 + 0x10) + 0x10;
            local_40 = local_60;
            FUN_1400fa090(&local_50,0xffffffff);
            *(longlong *)(local_60 + 0x10) = *(longlong *)(local_60 + 0x10) + -0x10;
            while ((iVar2 = (*(code *)(*local_38)[1])(), iVar2 != 0 &&
                                                         (iVar2 = FUN_1400fcba0(&local_50), iVar2 != 0))) {
                iVar2 = FUN_1400fc8e0();
                if ((-1 < iVar2) && (param_3 < 3)) {
                    *(uint *)param_1 = *(uint *)param_1 | 1 << ((byte)param_3 & 0x1f);
                }
            }
            local_50 = &PTR_FUN_140b56a08;
            if (local_40 != 0) {
                FUN_1400579e0();
            }
            local_70 = &PTR_FUN_140b56a08;
            if (local_60 != 0) {
                FUN_1400579e0();
            }
        }
        iVar2 = (*(code *)local_90[1])(&local_90);
        if (iVar2 != 0) {
            lVar6 = local_80;
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_80 + 0x20) + 0xa0),local_88);
            lVar8 = local_80;
            puVar4 = *(undefined8 **)(lVar6 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_50,L"nPrimeLevel");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
                FUN_140058710(lVar8);
            }
            if (CONCAT44(uStack68,local_48) != 0) {
                FUN_14018b900(CONCAT44(uStack68,local_48),0);
            }
            lVar8 = *(longlong *)(local_80 + 0x10) + -0x10;
            FUN_14005e8e0(local_80,*(longlong *)(local_80 + 0x10) + -0x20,lVar8,lVar8);
            puVar1 = *(undefined **)(local_80 + 0x10);
            if ((puVar1 == &DAT_140a12148) || (*(int *)(puVar1 + -8) != 3)) {
                *(undefined **)(local_80 + 0x10) = puVar1 + -0x20;
            }
            else {
                uVar3 = FUN_1400584e0(local_80,0xffffffff);
                *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + -0x20;
                *(undefined4 *)((longlong)param_1 + 4) = uVar3;
            }
        }
        local_a8 = &PTR_FUN_140b56a08;
        if (local_98 != 0) {
            FUN_1400579e0();
        }
        local_90 = &PTR_FUN_140b56a08;
        if (local_80 != 0) {
            FUN_1400579e0();
        }
        return 1;
    }
    return 0;
}



longlong FUN_1405bf900(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x48);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined *)FUN_14018b280(0x50,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x48) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    FUN_1407e4830(param_1 + 0x60,0,0x40);
    FUN_1405bf9d0(param_1);
    FUN_1407e4830(param_1 + 0x60,0,0x40);
    return param_1;
}



void FUN_1405bf9d0(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14001a270(param_1 + 0x40,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    lVar1 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(lVar1 + 0x558) = 1;
    return;
}



undefined8 FUN_1405bfa40(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(param_1 + 0x48)) {
            return 0;
        }
        if (*(int *)(lVar2 + 0x3c) == 0) break;
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
    }
    return 1;
}



undefined8 FUN_1405bfac0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(param_1 + 0x48)) {
            return 0;
        }
        if ((*(int *)(lVar2 + 0x3c) == 0) && ((*(byte *)(lVar2 + 0x40) & 4) != 0)) break;
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
    }
    return 1;
}



undefined8 FUN_1405bfb30(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x48);
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
    if ((lVar1 != local_res8) && (*(int *)(local_res8 + 0x3c) == 0)) {
        return 1;
    }
    return 0;
}



undefined8 FUN_1405bfb90(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x48);
    local_res8 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 != lVar2) && (*(int *)(local_res8 + 0x3c) == 0)) {
        if (*(int *)(local_res8 + 0x38) == param_3) {
            return 1;
        }
        uVar3 = 0;
        if (*(longlong *)(local_res8 + 0x30) != 0) {
            do {
                lVar2 = FUN_140215240(*(undefined4 *)(*(longlong *)(local_res8 + 0x28) + uVar3 * 4));
                if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == param_3)) {
                    return 1;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(ulonglong *)(local_res8 + 0x30));
        }
        return 0;
    }
    return 0;
}



ulonglong FUN_1405bfc70(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x48);
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
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x3c) == 0)) {
        uVar4 = 0;
        if (*(ulonglong *)(local_res8 + 0x30) != 0) {
            piVar3 = *(int **)(local_res8 + 0x28);
            while (*piVar3 != param_3) {
                uVar4 = uVar4 + 1;
                piVar3 = piVar3 + 1;
                if (*(ulonglong *)(local_res8 + 0x30) <= uVar4) {
                    return 0;
                }
            }
            uVar4 = 1;
        }
        return uVar4;
    }
    return 0;
}



longlong FUN_1405bfd00(longlong param_1,uint param_2,uint param_3,byte param_4,uint param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_5 == 0xffffffff) {
        lVar2 = FUN_140200220(0x95a);
        if (lVar2 == 0) {
            param_5 = 1;
        }
        else {
            param_5 = *(uint *)(lVar2 + 4);
        }
    }
    lVar2 = *(longlong *)(param_1 + 8);
    local_res8 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_5) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_5 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 != lVar2) {
        lVar2 = *(longlong *)(local_res8 + 0x30);
        local_res8 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if ((((*(uint *)(lVar1 + 0x20) & 0xffff) < (param_2 & 0xffff)) ||
                 (*(byte *)(lVar1 + 0x22) < param_4)) ||
                ((int)((*(uint *)(lVar1 + 0x20) & 0xff000000) * 0x40) < (int)((param_3 & 3) << 0x1e))) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res8 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if (((local_res8 == lVar2) ||
             ((ushort)(param_2 & 0xffff) < (ushort)*(uint *)(local_res8 + 0x20))) ||
            ((param_4 < *(byte *)(local_res8 + 0x22) ||
              ((int)((param_3 & 3) << 0x1e) < (int)((*(uint *)(local_res8 + 0x20) & 0xff000000) * 0x40))))
                ) {
            local_res8 = lVar2;
        }
        if (local_res8 != lVar2) {
            return local_res8 + 0x24;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405bfe80(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong local_res20;
    longlong local_38;
    char local_30;
    int local_28;
    int local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined4 local_14;

    if (param_2 < 5) {
        if (param_3 == 0xffffffff) {
            param_3 = FUN_1403e00e0(param_2);
        }
        lVar1 = *(longlong *)(param_1 + 0x28);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_3) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) || (param_3 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        lVar2 = local_res20;
        if (local_res20 != lVar1) {
            lVar3 = *(longlong *)(local_res20 + 0x30);
            lVar1 = local_res20 + 0x28;
            local_res20 = lVar3;
            lVar4 = *(longlong *)(lVar3 + 8);
            while (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x20) < param_2) {
                    lVar4 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    local_res20 = lVar4;
                    lVar4 = *(longlong *)(lVar4 + 0x10);
                }
            }
            if ((local_res20 == lVar3) || (param_2 < *(int *)(local_res20 + 0x20))) {
                local_res20 = lVar3;
            }
            if (local_res20 == *(longlong *)(lVar2 + 0x30)) {
                if (_DAT_140c7e0ac == 0) {
                    _DAT_140c7e0ac = 1;
                    uVar5 = FUN_140200220(0x330);
                    if (uVar5 == 0) {
                        DAT_140c7e0a8 = 0;
                    }
                    else {
                        DAT_140c7e0a8 = *(uint *)(uVar5 + 4);
                        uVar5 = (ulonglong)DAT_140c7e0a8;
                    }
                }
                else {
                    uVar5 = (ulonglong)DAT_140c7e0a8;
                }
                local_20 = (undefined4)uVar5;
                local_1c = 0;
                local_14 = 0;
                local_28 = param_2;
                local_24 = param_2;
                FUN_1405c5410(lVar1,&local_38,&local_28);
                local_res20 = local_38;
                if (local_30 == '\0') {
                    return 0;
                }
            }
            return local_res20 + 0x24;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405bffe0(void)

{
    longlong lVar1;

    lVar1 = FUN_1405bfe80();
    if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 4);
    }
    if (_DAT_140c7e0ac == 0) {
        _DAT_140c7e0ac = 1;
        lVar1 = FUN_140200220(0x330);
        if (lVar1 != 0) {
            DAT_140c7e0a8 = *(undefined4 *)(lVar1 + 4);
            return *(undefined4 *)(lVar1 + 4);
        }
        DAT_140c7e0a8 = 0;
        return 0;
    }
    return DAT_140c7e0a8;
}



void FUN_1405c0040(longlong param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    byte bVar6;
    uint uVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint uVar12;
    longlong lVar13;
    uint local_res8;
    longlong local_res20;
    uint local_108;
    uint local_104;
    undefined *local_100;
    undefined8 local_f8;
    byte local_e8 [8];
    undefined *local_e0;
    undefined8 local_d8;
    uint local_c0;
    uint local_bc;
    uint local_b8;
    uint local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    uint local_a8;
    undefined local_a0 [8];
    undefined8 local_98;
    longlong local_80 [2];
    longlong local_70 [2];
    uint local_60;
    undefined local_58 [8];
    undefined8 local_50;

    uVar11 = 0;
    local_res8 = (uint)param_1;
    if (*(longlong *)(param_1 + 0x10) == 0) {
        if (*param_2 != 0) {
            do {
                local_100 = (undefined *)FUN_14018b280(0x38);
                local_f8 = 0;
                *local_100 = 0;
                *(undefined8 *)(local_100 + 8) = 0;
                *(undefined **)(local_100 + 0x10) = local_100;
                *(undefined **)(local_100 + 0x18) = local_100;
                local_e8[0] = *(byte *)(uVar11 * 0x18 + *(longlong *)(param_2 + 2));
                FUN_1405c5510(&local_e0,&local_108);
                local_a8 = (uint)local_e8[0];
                FUN_1405c5510(local_a0,&local_e0);
                FUN_1405c4b10(param_1,local_80);
                FUN_140008410(local_a0);
                FUN_14018b900(local_98,0);
                FUN_140008410(&local_e0);
                FUN_14018b900(local_d8,0);
                FUN_140008410(&local_108);
                FUN_14018b900(local_100,0);
                lVar8 = *(longlong *)(param_2 + 2) + uVar11 * 0x18;
                local_bc = *(uint *)(lVar8 + 4);
                local_b8 = *(uint *)(lVar8 + 8);
                local_b4 = *(uint *)(lVar8 + 0xc);
                local_ac = *(undefined4 *)(lVar8 + 0x14);
                local_res8 = (local_b4 & 0xff) << 0x10 | (local_b8 & 3) << 0x18 | local_res8 & 0xfc000000 |
                             local_bc & 0xffff;
                local_b0 = *(undefined4 *)(lVar8 + 0x10);
                local_c0 = local_res8;
                FUN_1405c52a0(local_80[0] + 0x28,local_70,&local_c0);
                uVar12 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar12;
            } while (uVar12 < *param_2);
        }
    }
    else if (*param_2 != 0) {
        do {
            local_e0 = (undefined *)FUN_14018b280(0x38);
            local_d8 = 0;
            *local_e0 = 0;
            *(undefined8 *)(local_e0 + 8) = 0;
            *(undefined **)(local_e0 + 0x10) = local_e0;
            *(undefined **)(local_e0 + 0x18) = local_e0;
            lVar8 = uVar11 * 0x18;
            local_a8 = local_a8 & 0xffffff00 | (uint)*(byte *)(lVar8 + *(longlong *)(param_2 + 2));
            FUN_1405c5510(local_a0,local_e8);
            local_60 = local_a8 & 0xff;
            FUN_1405c5510(local_58,local_a0);
            FUN_1405c4b10(param_1);
            FUN_140008410(local_58);
            FUN_14018b900(local_50);
            FUN_140008410(local_a0);
            FUN_14018b900(local_98);
            FUN_140008410(local_e8);
            FUN_14018b900();
            lVar1 = *(longlong *)(local_70[0] + 0x30);
            lVar13 = *(longlong *)(param_2 + 2) + lVar8;
            uVar12 = *(uint *)(lVar13 + 4);
            uVar2 = *(uint *)(lVar13 + 8) & 3;
            uVar7 = *(uint *)(lVar13 + 0xc) & 0xff;
            uVar3 = uVar12 & 0xffff;
            local_res8 = uVar7 << 0x10 | uVar2 * 0x1000000 | local_res8 & 0xfc000000 | uVar3;
            lVar4 = *(longlong *)(lVar1 + 8);
            bVar6 = (byte)uVar7;
            lVar10 = lVar1;
            if (lVar4 != 0) {
                do {
                    if ((((*(uint *)(lVar4 + 0x20) & 0xffff) < uVar3) || (*(byte *)(lVar4 + 0x22) < bVar6)) ||
                        ((int)((*(uint *)(lVar4 + 0x20) & 0xff000000) * 0x40) < (int)(uVar2 << 0x1e))) {
                        lVar5 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        lVar5 = *(longlong *)(lVar4 + 0x10);
                        lVar10 = lVar4;
                    }
                    lVar4 = lVar5;
                } while (lVar5 != 0);
                uVar12 = *(uint *)(lVar13 + 4);
            }
            if (((lVar10 == lVar1) || ((ushort)uVar3 < (ushort)*(uint *)(lVar10 + 0x20))) ||
                ((bVar6 < *(byte *)(lVar10 + 0x22) ||
                  ((int)(uVar2 << 0x1e) < (int)((*(uint *)(lVar10 + 0x20) & 0xff000000) * 0x40))))) {
                local_80[0] = lVar1;
                plVar9 = local_80;
            }
            else {
                plVar9 = &local_res20;
                local_res20 = lVar10;
            }
            lVar4 = *plVar9;
            if (lVar4 == lVar1) {
                local_100 = *(undefined **)(lVar13 + 8);
                local_f8 = CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x10));
                local_108 = local_res8;
                local_104 = uVar12;
                FUN_1405c52a0(local_70[0] + 0x28,&local_c0,&local_108);
            }
            else {
                *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar13 + 0x10);
                *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x14 + lVar8);
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PveRatingUpdated",&DAT_1409eebf4,
                          *(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x28),
                          *(undefined4 *)(lVar4 + 0x2c));
            uVar12 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
        } while (uVar12 < *param_2);
    }
    return;
}



undefined8 FUN_1405c0760(longlong param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong *plVar6;
    int iVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong local_res18;
    int local_res20;
    ulonglong local_c8;
    ulonglong local_c0;
    longlong local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined4 local_98;
    undefined4 local_94;
    undefined8 local_90;
    int local_88;
    longlong local_80 [2];
    undefined8 local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined8 local_60;
    longlong local_58;
    char local_50;

    uVar5 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_res20 = param_4;
    uVar10 = local_c8;
    uVar8 = local_c0;
    if (param_3 != (int *)0x0) {
        uVar8 = uVar5;
        uVar9 = uVar5;
        do {
            uVar4 = DAT_140c636a8;
            iVar7 = (int)uVar5;
            uVar10 = uVar9;
            if (*param_3 == 0) {
                lVar1 = *(longlong *)(param_1 + 0x48);
                lVar3 = lVar1;
                lVar2 = *(longlong *)(lVar1 + 8);
                while (lVar2 != 0) {
                    if (*(int *)(lVar2 + 0x20) < iVar7) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar3 == lVar1) || (iVar7 < *(int *)(lVar3 + 0x20))) {
                    local_b8 = lVar1;
                    plVar6 = &local_b8;
                }
                else {
                    plVar6 = &local_res18;
                    local_res18 = lVar3;
                }
                if (*plVar6 != *(longlong *)(param_1 + 0x48)) {
                    uVar5 = FUN_14018db00(uVar9,uVar8 + 1,4);
                    *(int *)(uVar8 * 4 + uVar5) = iVar7;
                    if ((uVar9 != uVar5) && (FUN_1407db590(uVar5,uVar9), uVar10 = uVar5, uVar9 != 0)) {
                        (**(code **)(*(longlong *)(uVar9 - 0x10) + 8))(uVar9 - 0x10);
                    }
                    uVar8 = uVar8 + 1;
                    param_5 = iVar7;
                    FUN_1405c4dd0(param_1 + 0x40,&param_5);
                    param_4 = local_res20;
                }
            }
            else {
                local_a8 = 0;
                local_b0 = 0;
                local_a0 = 0;
                local_94 = DAT_140c636a8;
                local_98 = 0;
                local_90 = 0;
                local_88 = iVar7;
                FUN_1403b4f00(local_80,&local_b0);
                local_70 = 0;
                local_68 = 0;
                local_64 = uVar4;
                local_60 = 0;
                FUN_1405c4c10(param_1 + 0x40,&local_58);
                if (local_80[0] != 0) {
                    (**(code **)(*(longlong *)(local_80[0] + -0x10) + 8))(local_80[0] + -0x10);
                }
                *(uint *)(local_58 + 0x3c) = (uint)(param_4 == iVar7);
                if (local_50 != '\0') {
                    *(undefined4 *)(local_58 + 0x44) = DAT_140c636a8;
                }
            }
            uVar5 = (ulonglong)(iVar7 + 1U);
            param_3 = param_3 + 1;
            uVar9 = uVar10;
        } while (iVar7 + 1U < 0x10);
    }
    local_c0 = uVar8;
    local_c8 = uVar10;
    uVar10 = local_c0;
    uVar8 = local_c8;
    lVar1 = DAT_140c65b98;
    uVar4 = DAT_140c636a8;
    switch(param_2) {
        case 1:
        case 6:
            if (*(int *)(param_1 + 0xa4) == 0) goto switchD_1405c0963_caseD_2;
            *(undefined4 *)(param_1 + 0xa4) = 0;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
            goto switchD_1405c0963_caseD_2;
        default:
            if (*(int *)(DAT_140c65b98 + 0x10c) != 0x10) {
                *(undefined4 *)(DAT_140c65b98 + 0x130) = 0;
                *(undefined4 *)(lVar1 + 0x120) = 0x34;
                *(undefined4 *)(lVar1 + 0x128) = 0x34;
                *(undefined4 *)(lVar1 + 0x124) = uVar4;
                *(undefined4 *)(lVar1 + 300) = uVar4;
                *(undefined4 *)(lVar1 + 0x138) = 0;
                *(undefined8 *)(lVar1 + 0x140) = 0;
                *(undefined4 *)(lVar1 + 0x154) = 0;
                *(undefined4 *)(lVar1 + 0x108) = 0;
                *(undefined4 *)(lVar1 + 0x148) = 0;
                *(undefined8 *)(lVar1 + 0x14c) = 0;
                *(undefined4 *)(lVar1 + 0x10c) = 0x10;
                *(undefined4 *)(lVar1 + 0x110) = 0x10;
                lVar1 = DAT_140c65898;
                *(undefined4 *)(DAT_140c65898 + 0x558) = 1;
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"MatchLeft","");
            }
            if (*(int *)(param_1 + 0xa4) == 0) goto switchD_1405c0963_caseD_2;
            *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingRoleCheckCanceled",&DAT_1409d1276);
    switchD_1405c0963_caseD_2:
    if (uVar10 != 0) {
        FUN_14042fd40(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_c8);
    }
    if (uVar8 != 0) {
        (**(code **)(*(longlong *)(uVar8 - 0x10) + 8))(uVar8 - 0x10);
    }
    return 0;
}



undefined8 FUN_1405c0ad0(longlong param_1,undefined4 *param_2)

{
    *(undefined4 *)(param_1 + 0x60) = *param_2;
    *(undefined4 *)(param_1 + 100) = param_2[1];
    *(undefined4 *)(param_1 + 0x68) = param_2[2];
    *(undefined4 *)(param_1 + 0x6c) = param_2[3];
    *(undefined4 *)(param_1 + 0x70) = param_2[4];
    *(undefined4 *)(param_1 + 0x74) = param_2[5];
    *(undefined4 *)(param_1 + 0x78) = param_2[6];
    *(undefined4 *)(param_1 + 0x7c) = param_2[7];
    *(undefined4 *)(param_1 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + 0x84) = param_2[9];
    *(undefined4 *)(param_1 + 0x88) = param_2[10];
    *(undefined4 *)(param_1 + 0x8c) = param_2[0xb];
    *(undefined4 *)(param_1 + 0x90) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x94) = param_2[0xd];
    *(undefined4 *)(param_1 + 0x98) = param_2[0xe];
    *(undefined4 *)(param_1 + 0x9c) = param_2[0xf];
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingPenaltyUpdated","");
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405c0b80(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong local_88 [2];
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined4 local_60;
    int local_5c;
    undefined8 local_58;
    undefined4 local_50 [2];
    longlong local_48 [2];
    undefined8 local_38;
    undefined4 local_30;
    int local_2c;
    undefined8 local_28;
    ulonglong uVar7;

    local_2c = DAT_140c636a8;
    local_50[0] = *(undefined4 *)(param_2 + 0x18);
    uVar7 = 0;
    local_70 = 0;
    local_78 = 0;
    local_68 = 0;
    iVar2 = 0;
    local_60 = 0;
    local_5c = DAT_140c636a8;
    local_58 = 0;
    FUN_1403b4f00(local_48,&local_78);
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    FUN_1405c4c10(param_1 + 0x40,local_88,local_50);
    if (local_48[0] != 0) {
        (**(code **)(*(longlong *)(local_48[0] + -0x10) + 8))();
    }
    *(undefined8 *)(local_88[0] + 0x30) = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            FUN_140003460(local_88[0] + 0x28,*(longlong *)(param_2 + 8) + uVar7 * 4);
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_2 + 4));
    }
    *(undefined4 *)(local_88[0] + 0x38) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(local_88[0] + 0x40) = *(undefined4 *)(param_2 + 0x14);
    *(int *)(local_88[0] + 0x44) = DAT_140c636a8 - *(int *)(param_2 + 0x20);
    *(undefined4 *)(local_88[0] + 0x48) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(local_88[0] + 0x4c) = *(undefined4 *)(param_2 + 0x28);
    if (*(int *)(local_88[0] + 0x3c) != 0) {
        return 0;
    }
    iVar1 = _DAT_140dc34c8;
    if ((DAT_140dc34c4 & 1) == 0) {
        DAT_140dc34c4 = DAT_140dc34c4 | 1;
        iVar1 = iVar2;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c638ac != 0) || (iVar2 = FUN_1401fffc0(), iVar2 < 0)) goto LAB_1405c0ced;
            lVar3 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x346);
        }
        else {
            lVar3 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x346,DAT_140c63858);
        }
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 4);
        }
    }
    LAB_1405c0ced:
    _DAT_140dc34c8 = iVar1;
    lVar3 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar3 + 0x1600));
        if ((plVar4 != (longlong *)0x0) || (*(longlong *)(DAT_140c65898 + 0x78) != lVar3))
            goto LAB_1405c0d41;
        lVar3 = FUN_14039df50();
        if (lVar3 != 0) {
            plVar4 = (longlong *)FUN_1404695e0(lVar3);
            goto LAB_1405c0d41;
        }
    }
    plVar4 = (longlong *)0x0;
    LAB_1405c0d41:
    if ((plVar4 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*plVar4 + 8))(plVar4), iVar2 == _DAT_140dc34c8)) {
        FUN_14039cce0(DAT_140c65898,*(undefined4 *)((longlong)plVar4 + 0x5c),0xb);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    if (*(int *)(param_2 + 0x1c) != 0) {
        *(uint *)(local_88[0] + 0x40) = *(uint *)(local_88[0] + 0x40) | 4;
    }
    uVar5 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingJoinQueue",&DAT_1409eea34,
                  *(undefined4 *)(param_2 + 0x18));
    return 0;
}



undefined8 FUN_1405c0e00(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x48);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < *param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (*param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (((local_res8 != lVar1) && (local_res8 != -0x28)) &&
        (*(int *)(local_res8 + 0x48) = param_2[1], *(int *)(local_res8 + 0x3c) == 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingAverageWaitTimeUpdated","");
    }
    return 0;
}



undefined8 FUN_1405c0e90(longlong param_1,undefined4 *param_2)

{
    undefined8 uVar1;

    *(undefined4 *)(param_1 + 0xa4) = 1;
    uVar1 = FUN_14034bdd0(param_1,0x4b85c);
    FUN_140003890(DAT_140c658a0,2,0,uVar1,0,0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingRoleCheckStarted",&DAT_1409ee9b4,
                  *param_2);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405c0f00(longlong param_1,longlong param_2)

{
    short sVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    short *psVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    bool bVar10;
    longlong local_res8;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        return 1;
    }
    local_res8 = param_1;
    FUN_1400b6f30(&local_e8);
    lVar7 = 0;
    local_18 = (undefined2 *)0x0;
    local_28 = ZEXT816(0);
    local_e8 = &PTR_FUN_140b69230;
    local_28._0_8_ = (undefined2 *)FUN_14018b280(0x10,0);
    local_18 = local_28._0_8_ + 8;
    local_28 = CONCAT88(local_28._0_8_,local_28._0_8_);
    if (local_28._0_8_ != (undefined2 *)0x0) {
        *local_28._0_8_ = 0;
    }
    lVar9 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if (lVar9 == 0) goto LAB_1405c1179;
    iVar3 = FUN_14079ee60(lVar9,param_2,&local_res8);
    if ((iVar3 != 0) &&
        (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x58) + local_res8 * 8), lVar9 != 0)) {
        lVar4 = FUN_14018b280(0x60);
        lVar5 = lVar7;
        if (lVar4 != 0) {
            lVar5 = FUN_1404ddb40(lVar4,lVar9 + 0x20);
        }
        FUN_1400b7480(&local_e8,lVar5);
        uVar2 = *(uint *)(param_2 + 0x10);
        if (uVar2 == 0) {
            LAB_1405c10ff:
            psVar6 = (short *)FUN_14034bdd0(uVar2,0x4b787);
            if (psVar6 == (short *)0x0) {
                if (local_d8 != local_d0) {
                    *local_d8 = 0;
                    local_d0 = local_d8;
                }
            }
            else {
                sVar1 = *psVar6;
                while (sVar1 != 0) {
                    lVar7 = lVar7 + 1;
                    sVar1 = psVar6[lVar7];
                }
                FUN_14001c480(local_e0,psVar6,psVar6 + lVar7);
            }
        }
        else {
            lVar9 = lVar7;
            if ((uVar2 & 1) != 0) {
                lVar9 = 0x72a62;
            }
            iVar3 = (int)lVar9;
            if (((uVar2 & 2) != 0) && (bVar10 = iVar3 != 0, iVar3 = 0x72a63, bVar10)) {
                iVar3 = 0x72a65;
            }
            if (((uVar2 & 4) == 0) && (iVar3 == 0)) goto LAB_1405c10ff;
            psVar6 = (short *)FUN_14034bdd0(uVar2,0x4b788);
            if (psVar6 == (short *)0x0) {
                if (local_d8 != local_d0) {
                    *local_d8 = 0;
                    local_d0 = local_d8;
                }
            }
            else {
                sVar1 = *psVar6;
                while (sVar1 != 0) {
                    lVar7 = lVar7 + 1;
                    sVar1 = psVar6[lVar7];
                }
                FUN_14001c480(local_e0,psVar6,psVar6 + lVar7);
            }
            lVar7 = FUN_14018b280(0x60);
            if (lVar7 == 0) {
                FUN_1400b7480(&local_e8,0);
            }
            else {
                uVar8 = FUN_14034bdd0();
                uVar8 = FUN_1404ddb40(lVar7,uVar8);
                FUN_1400b7480(&local_e8,uVar8);
            }
        }
        lVar7 = FUN_1400b7660(&local_e8);
        FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar7 + 8),0,0);
    }
    LAB_1405c1179:
    if (local_28._0_8_ != (undefined2 *)0x0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(&local_e8);
    return 0;
}



undefined8 FUN_1405c11c0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined local_a0 [8];
    undefined *local_98;
    undefined8 local_90;
    longlong local_80;
    char local_78;
    uint local_70;
    undefined local_68 [8];
    undefined8 local_60;
    uint local_48 [2];
    undefined local_40 [8];
    undefined8 local_38;

    uVar2 = FUN_1403e00e0();
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_res8 = lVar1;
    lVar5 = *(longlong *)(lVar1 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < uVar2) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res8 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    lVar5 = local_res8;
    if (local_res8 == lVar1) {
        local_98 = (undefined *)FUN_14018b280();
        local_90 = 0;
        *local_98 = 0;
        *(undefined8 *)(local_98 + 8) = 0;
        *(undefined **)(local_98 + 0x10) = local_98;
        *(undefined **)(local_98 + 0x18) = local_98;
        local_70 = uVar2;
        FUN_1405c5510(local_68,local_a0);
        local_48[0] = local_70;
        FUN_1405c5510(local_40,local_68);
        FUN_1405c4b10(param_1 + 0x20,&local_80,local_48);
        FUN_140008410(local_40);
        FUN_14018b900(local_38);
        FUN_140008410(local_68);
        FUN_14018b900(local_60);
        FUN_140008410(local_a0);
        FUN_14018b900(local_98);
        lVar5 = local_80;
    }
    lVar1 = *(longlong *)(lVar5 + 0x30);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
        do {
            if (*(int *)(lVar3 + 0x20) < (int)param_2[4]) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
    }
    if ((local_res8 == lVar1) || ((int)param_2[4] < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        local_b0 = *param_2;
        local_ac = param_2[1];
        local_b8 = param_2[4];
        local_a8 = param_2[2];
        local_a4 = param_2[3];
        local_b4 = local_b8;
        FUN_1405c5410(lVar5 + 0x28,&local_80,&local_b8);
        if (local_78 == '\0') {
            return 0x80004005;
        }
    }
    else {
        *(undefined4 *)(local_res8 + 0x28) = *param_2;
        *(undefined4 *)(local_res8 + 0x2c) = param_2[1];
        *(undefined4 *)(local_res8 + 0x30) = param_2[2];
        *(undefined4 *)(local_res8 + 0x34) = param_2[3];
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PvpRatingUpdated",&DAT_1409eeb04,param_2[4]
    );
    return 0;
}



void FUN_1405c13d0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 local_18;
    undefined8 local_10;

    if ((*(int *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
        if ((*(longlong *)(DAT_140c65898 + 0x6c50) != 0) &&
            ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 3 & 1) != 0)) {
            lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
            if ((*(int *)(lVar1 + 0x1a0) == *(int *)param_2) &&
                (*(longlong *)(lVar1 + 0x1a8) == param_2[1])) {
                uVar2 = FUN_14034bdd0(lVar1,0x634f2);
                FUN_140003890(DAT_140c658a0,2,0,uVar2,0,0);
                return;
            }
            local_18 = *param_2;
            local_10 = param_2[1];
            FUN_1403f4900(DAT_140c65898,0x5d1,&local_18);
        }
    }
    return;
}



void FUN_1405c1480(longlong param_1)

{
    uint uVar1;
    ulonglong local_res8 [4];

    if (((*(int *)(param_1 + 0x40) == 0) && (*(uint *)(param_1 + 4) < 9)) &&
        ((0x116U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) != 0)) {
        uVar1 = *(uint *)(param_1 + 0x28);
        if (uVar1 != 0) {
            if ((uint)(DAT_140c636a8 - *(int *)(param_1 + 0x24)) < uVar1) {
                local_res8[0] =
                        CONCAT44((*(int *)(param_1 + 0x24) - DAT_140c636a8) + uVar1,
                                 *(undefined4 *)(param_1 + 0x20));
                FUN_1405c1fc0(param_1,local_res8);
                return;
            }
        }
        local_res8[0] = local_res8[0] & 0xffffffffffffff00;
        FUN_1403f4900(DAT_140c65898,0x5d3,local_res8);
    }
    return;
}



bool FUN_1405c1510(int *param_1)

{
    longlong lVar1;
    int iVar2;
    undefined *puVar3;
    longlong lVar4;

    if (param_1[0x11] != 0) {
        return false;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 8) & 1) == 0)) {
        iVar2 = FUN_140605490();
        if (iVar2 != 0) {
            if ((uint)param_1[1] < 0x10) {
                puVar3 = &DAT_140b51560 + (longlong)param_1[1] * 0x10;
            }
            else {
                puVar3 = &DAT_140b51550;
            }
            if ((puVar3[0xc] & 2) != 0) {
                if (*param_1 != 0) {
                    lVar4 = FUN_140215240();
                    if (lVar4 != 0) {
                        lVar4 = FUN_140214e00(*(undefined4 *)(lVar4 + 0x10));
                        if (lVar4 != 0) {
                            return *(ulonglong *)(lVar1 + 0x60) < (ulonglong)*(uint *)(lVar4 + 0x14);
                        }
                    }
                }
                return false;
            }
        }
    }
    return false;
}



int FUN_1405c15d0(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;

    if (((*param_1 == 0) || (lVar4 = FUN_140215240(), lVar4 == 0)) ||
        (lVar4 = FUN_140214e00(), lVar4 == 0)) {
        return 0;
    }
    if ((DAT_140dc34cc & 1) == 0) {
        DAT_140dc34cc = DAT_140dc34cc | 1;
        lVar5 = FUN_140200220();
        if (lVar5 == 0) {
            DAT_140dc34d0 = 0;
        }
        else {
            DAT_140dc34d0 = *(int *)(lVar5 + 4);
        }
    }
    iVar1 = param_1[3];
    iVar3 = 0;
    if (((iVar1 != 1) || (iVar2 = *(int *)(lVar4 + 0x20), iVar2 == 0)) &&
        ((iVar1 != 2 || (iVar2 = *(int *)(lVar4 + 0x24), iVar2 == 0)))) {
        if (iVar1 == 3) {
            iVar3 = DAT_140dc34d0 - (DAT_140c636a8 - param_1[5]);
        }
        iVar1 = 0;
        if (0 < iVar3) {
            iVar1 = iVar3;
        }
        return iVar1;
    }
    iVar2 = iVar2 - (DAT_140c636a8 - param_1[5]);
    iVar1 = 0;
    if (0 < iVar2) {
        iVar1 = iVar2;
    }
    return iVar1;
}



void FUN_1405c16d0(longlong param_1,undefined4 *param_2,uint param_3)

{
    byte bVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    ulonglong uVar9;

    uVar9 = (ulonglong)param_3;
    if (param_3 != 0) {
        do {
            bVar1 = *(byte *)param_2;
            if (*(ulonglong *)(param_1 + 0xa0) < (ulonglong)bVar1 ||
                *(ulonglong *)(param_1 + 0xa0) == (ulonglong)bVar1) {
                uVar6 = (ulonglong)(int)(bVar1 + 1);
                if (*(ulonglong *)(param_1 + 0xa0) < uVar6 || *(ulonglong *)(param_1 + 0xa0) == uVar6) {
                    lVar3 = FUN_14018db00(*(undefined8 *)(param_1 + 0x98),uVar6,0x10);
                    uVar4 = *(ulonglong *)(param_1 + 0xa0);
                    if (uVar4 < uVar6) {
                        puVar7 = (undefined8 *)(uVar4 * 0x10 + lVar3);
                        *puVar7 = 0;
                        puVar7[1] = 0;
                        puVar8 = puVar7 + 2;
                        for (uVar4 = (uVar6 - uVar4) * 0x10 - 9 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                            *puVar8 = *puVar7;
                            puVar7 = puVar7 + 1;
                            puVar8 = puVar8 + 1;
                        }
                    }
                    if (*(longlong *)(param_1 + 0x98) != lVar3) {
                        FUN_1407db590(lVar3);
                        lVar2 = *(longlong *)(param_1 + 0x98);
                        if (lVar2 != 0) {
                            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                        }
                        *(longlong *)(param_1 + 0x98) = lVar3;
                    }
                }
                *(ulonglong *)(param_1 + 0xa0) = uVar6;
            }
            puVar5 = (undefined4 *)((ulonglong)*(byte *)param_2 * 0x10 + *(longlong *)(param_1 + 0x98));
            *puVar5 = *param_2;
            puVar5[1] = param_2[1];
            puVar5[2] = param_2[2];
            puVar5[3] = param_2[3];
            uVar9 = uVar9 - 1;
            param_2 = param_2 + 4;
        } while (uVar9 != 0);
    }
    if (param_3 == 0) {
        return;
    }
    FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x1350);
    return;
}



undefined8 FUN_1405c1850(undefined4 *param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    uVar1 = DAT_140c636a8;
    param_1[6] = 0x34;
    param_1[8] = 0x34;
    param_1[7] = uVar1;
    param_1[9] = uVar1;
    param_1[10] = 0;
    param_1[0xc] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x11) = 0;
    param_1[0x13] = 0;
    *param_1 = 0;
    param_1[0x10] = 0;
    param_1[1] = 0x10;
    param_1[2] = 0x10;
    lVar2 = DAT_140c65898;
    *(undefined4 *)(DAT_140c65898 + 0x558) = 1;
    FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"MatchLeft","");
    return 0;
}



undefined8 FUN_1405c18d0(longlong param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    uint uVar2;

    *(undefined4 *)(param_1 + 0xc) = *param_2;
    *(int *)(param_1 + 0x14) = DAT_140c636a8 - param_2[1];
    uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
    uVar2 = FUN_1405c15d0();
    FUN_1400ea3e0(uVar1,"PVPMatchStateUpdated",&DAT_1409eeac4,*param_2,
                  (double)((float)(ulonglong)uVar2 * 0.001));
    return 0;
}



undefined8 FUN_1405c1950(longlong param_1,short **param_2)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    short **ppsVar7;

    FUN_1405c4a60(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    lVar6 = 0;
    ppsVar7 = param_2 + 2;
    lVar5 = 2;
    do {
        lVar3 = *(longlong *)(param_1 + 0x68);
        if (lVar3 == *(longlong *)(param_1 + 0x70)) {
            FUN_1405c4ec0(param_1 + 0x58);
        }
        else {
            if (lVar3 != 0) {
                FUN_1405becb0(lVar3);
            }
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 0x28;
        }
        lVar4 = *(longlong *)(param_1 + 0x60) + lVar6;
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)ppsVar7;
        psVar2 = *param_2;
        lVar3 = 0;
        sVar1 = *psVar2;
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = psVar2[lVar3];
        }
        FUN_14001c480(lVar4,psVar2,psVar2 + lVar3);
        ppsVar7 = (short **)((longlong)ppsVar7 + 4);
        lVar6 = lVar6 + 0x28;
        param_2 = param_2 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PVPMatchTeamInfoUpdated",&DAT_1409d128f);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405c1ab0(longlong param_1,int *param_2)

{
    short sVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined2 *puVar5;
    undefined8 *puVar6;
    short *psVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined extraout_XMM0 [16];
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    uVar2 = DAT_140c636a8;
    if ((*param_2 - 0x14U & 0xfffffffb) == 0) {
        *(int *)(param_1 + 0x18) = *param_2;
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
        FUN_1400b6f30(&local_e8);
        local_28 = extraout_XMM0 & (undefined  [16])0x0;
        puVar8 = (undefined8 *)0x0;
        local_e8 = &PTR_FUN_140b69230;
        local_18 = (undefined2 *)0x0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar5,puVar5);
        local_18 = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        puVar6 = (undefined8 *)FUN_14018b280(0x58);
        puVar10 = puVar8;
        if (puVar6 != (undefined8 *)0x0) {
            iVar3 = param_2[1];
            FUN_1400b6390(puVar6);
            *(int *)(puVar6 + 1) = iVar3;
            *puVar6 = &PTR_FUN_140b69300;
            *(float *)((longlong)puVar6 + 0xc) = (float)iVar3;
            puVar10 = puVar6;
        }
        FUN_1400b7480(&local_e8,puVar10);
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar7;
            while (sVar1 != 0) {
                puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                sVar1 = psVar7[(longlong)puVar8];
            }
            FUN_14001c480(local_e0,psVar7,psVar7 + (longlong)puVar8);
        }
        lVar9 = FUN_1400b7660(&local_e8);
        FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar9 + 8),0,0);
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    else {
        iVar3 = FUN_1405c42c0();
        if (iVar3 != 0) {
            uVar4 = FUN_14034bdd0();
            FUN_140003890(DAT_140c658a0,2,0,uVar4,0,0);
            return 0;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405c1cb0(longlong param_1,int *param_2)

{
    short sVar1;
    int iVar2;
    undefined2 *puVar3;
    longlong lVar4;
    longlong lVar5;
    short *psVar6;
    longlong lVar7;
    longlong lVar8;
    longlong local_res18 [2];
    int local_f8;
    int iStack244;
    int iStack240;
    int iStack236;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar7 = DAT_140c65898;
    lVar8 = *(longlong *)(DAT_140c65898 + 0x78);
    if ((lVar8 != 0) &&
        ((*(int *)(lVar8 + 0x1a0) != *param_2 ||
          (*(longlong *)(lVar8 + 0x1a8) != *(longlong *)(param_2 + 2))))) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 6);
        local_f8 = param_2[4];
        iStack244 = param_2[5];
        iStack240 = param_2[6];
        iStack236 = param_2[7];
        FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"MatchVoteKickBegin",&DAT_1409eec2c,&local_f8);
    }
    lVar8 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if (((lVar8 != 0) && (iVar2 = FUN_14079ee60(lVar8,param_2 + 4,local_res18), iVar2 != 0)) &&
        (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + local_res18[0] * 8), lVar8 != 0)) {
        FUN_1400b6f30(&local_e8);
        lVar7 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar3 + 8;
        local_28 = CONCAT88(puVar3,puVar3);
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
        }
        lVar4 = FUN_14018b280(0x60);
        lVar5 = lVar7;
        if (lVar4 != 0) {
            lVar5 = FUN_1404ddb40(lVar4,lVar8 + 0x20);
        }
        FUN_1400b7480(&local_e8,lVar5);
        psVar6 = (short *)FUN_14034bdd0();
        if (psVar6 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar6;
            while (sVar1 != 0) {
                lVar7 = lVar7 + 1;
                sVar1 = psVar6[lVar7];
            }
            FUN_14001c480(local_e0,psVar6,psVar6 + lVar7);
        }
        lVar8 = FUN_1400b7660(&local_e8);
        FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar8 + 8),0,0);
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 0;
}



undefined8 FUN_1405c1ea0(longlong param_1)

{
    undefined8 uVar1;

    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchVoteKickEnd","");
    uVar1 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar1,0,0);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405c1fc0(longlong param_1,int *param_2)

{
    short sVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined2 *puVar5;
    undefined8 *puVar6;
    short *psVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined extraout_XMM0 [16];
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    uVar2 = DAT_140c636a8;
    if (*param_2 - 0x1eU < 2) {
        *(int *)(param_1 + 0x20) = *param_2;
        *(undefined4 *)(param_1 + 0x24) = uVar2;
        *(int *)(param_1 + 0x28) = param_2[1];
        FUN_1400b6f30(&local_e8);
        puVar8 = (undefined8 *)0x0;
        local_28 = extraout_XMM0 & (undefined  [16])0x0;
        local_e8 = &PTR_FUN_140b69230;
        local_18 = (undefined2 *)0x0;
        puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar5 + 8;
        local_28 = CONCAT88(puVar5,puVar5);
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        puVar6 = (undefined8 *)FUN_14018b280(0x58);
        puVar10 = puVar8;
        if (puVar6 != (undefined8 *)0x0) {
            iVar3 = param_2[1];
            FUN_1400b6390(puVar6);
            *(int *)(puVar6 + 1) = iVar3;
            *puVar6 = &PTR_FUN_140b69300;
            *(float *)((longlong)puVar6 + 0xc) = (float)iVar3;
            puVar10 = puVar6;
        }
        FUN_1400b7480(&local_e8,puVar10);
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar7;
            while (sVar1 != 0) {
                puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                sVar1 = psVar7[(longlong)puVar8];
            }
            FUN_14001c480(local_e0,psVar7,psVar7 + (longlong)puVar8);
        }
        lVar9 = FUN_1400b7660(&local_e8);
        FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar9 + 8),0,0);
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    else {
        iVar3 = FUN_1405c42c0();
        if (iVar3 != 0) {
            uVar4 = FUN_14034bdd0();
            FUN_140003890(DAT_140c658a0,2,0,uVar4,0,0);
        }
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001405c2287)

undefined8 FUN_1405c21d0(longlong param_1)

{
    short sVar1;
    undefined2 *puVar2;
    short *psVar3;
    longlong lVar4;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    *(undefined4 *)(param_1 + 0x40) = 1;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchVoteSurrenderBegin","");
    puVar2 = (undefined2 *)FUN_14018b280(0x10);
    lVar4 = 0;
    local_10 = puVar2 + 8;
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    local_20 = puVar2;
    local_18 = puVar2;
    if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) - 3U < 5)) {
        psVar3 = (short *)FUN_14034bdd0();
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
    }
    else {
        psVar3 = (short *)FUN_14034bdd0();
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
    }
    if (lVar4 * 2 >> 1 == 0) {
        FUN_1407db590(puVar2,psVar3,0);
    }
    else {
        FUN_14001c310(local_28,psVar3);
        puVar2 = local_20;
    }
    FUN_140003890(DAT_140c658a0,2,0,puVar2,0,0);
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001405c23c3)

undefined8 FUN_1405c2310(longlong param_1)

{
    short sVar1;
    undefined2 *puVar2;
    short *psVar3;
    longlong lVar4;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchVoteSurrenderEnd",&DAT_1409d12a7);
    puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
    local_10 = puVar2 + 8;
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    local_20 = puVar2;
    local_18 = puVar2;
    if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) - 3U < 5)) {
        psVar3 = (short *)FUN_14034bdd0(local_10,0x6bd48);
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
    }
    else {
        psVar3 = (short *)FUN_14034bdd0(local_10,0x79242);
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
    }
    if (lVar4 * 2 >> 1 == 0) {
        FUN_1407db590(puVar2,psVar3,0);
    }
    else {
        FUN_14001c310(local_28,psVar3);
        puVar2 = local_20;
    }
    FUN_140003890(DAT_140c658a0,2,0,puVar2,0,0);
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    return 0;
}



undefined8 FUN_1405c24a0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;

    *(undefined4 *)(DAT_140c65b98 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchStoppedLookingForReplacements",
                  &DAT_1409d128e);
    iVar1 = FUN_1405bed30(DAT_140c65b98,0x10);
    iVar3 = 0x57bbd;
    if (iVar1 != 0) {
        iVar3 = 0x4b889;
    }
    if (iVar3 != 0) {
        uVar2 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar2,0,0);
    }
    return 0;
}



undefined8
FUN_1405c2530(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,int param_5,
              int param_6,undefined4 *param_7)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined2 *puVar3;
    undefined8 local_18;
    undefined *local_10;

    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined2 *)(param_2 + 8) = 0;
    if (param_6 == 0) {
        if (param_4 < param_5) {
            local_10 = &LAB_1405c27e0;
            local_18 = param_1;
            uVar1 = FUN_1403f82f0(DAT_140c65898,10,param_7,param_2,0x21,&local_18,(longlong)param_5);
            if ((int)uVar1 == 0) {
                return uVar1;
            }
        }
        else {
            local_10 = (undefined *)0x0;
            local_18 = 0;
            FUN_1403f82f0(DAT_140c65898,10,param_7,param_2,0x21,&local_18,0);
        }
    }
    else if (param_6 == 1) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*param_7);
        if (lVar2 == 0) {
            lVar2 = FUN_1404835c0(DAT_140c65918,param_7[1]);
            if (lVar2 == 0) goto LAB_1405c266f;
            puVar3 = (undefined2 *)FUN_14034bdd0();
        }
        else {
            puVar3 = &DAT_140b7b704;
            if (*(undefined2 **)(lVar2 + 0x10) != (undefined2 *)0x0) {
                puVar3 = *(undefined2 **)(lVar2 + 0x10);
            }
        }
        FUN_14001b2d0(param_2,0x21,puVar3);
    }
    LAB_1405c266f:
    if (*(short *)param_2 == 0) {
        FUN_14034bdd0();
        FUN_14001b680(param_2,0x21);
    }
    return 1;
}



void FUN_1405c26a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    undefined auStack248 [32];
    uint local_d8;
    undefined *local_d0;
    uint *local_c8;
    uint local_c0;
    undefined local_b8 [80];
    undefined local_68 [80];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    if (*(longlong *)(param_1 + 0x80) != 0) {
        puVar1 = *(uint **)(param_1 + 0x78);
        local_c8 = puVar1 + 2;
        local_d0 = (undefined *)((ulonglong)local_d0 & 0xffffffff00000000 | (ulonglong)*puVar1);
        local_d8 = 1;
        iVar2 = FUN_1405c2530(param_1,local_b8,param_3,param_2);
        if (iVar2 != 0) {
            local_c8 = puVar1 + 10;
            local_d0 = (undefined *)((ulonglong)local_d0 & 0xffffffff00000000 | (ulonglong)puVar1[8]);
            local_d8 = 2;
            iVar2 = FUN_1405c2530(param_1,local_68);
            if (iVar2 != 0) {
                if (*puVar1 == 0) {
                    uVar3 = puVar1[6];
                }
                else {
                    uVar3 = 0x17;
                }
                local_c0 = puVar1[0x10];
                local_c8 = (uint *)((ulonglong)local_c8 & 0xffffffff00000000 | (ulonglong)uVar3);
                local_d0 = local_b8;
                local_d8 = puVar1[0x11];
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PvpKillNotification","SiSii",local_68
                );
                FUN_1405c5180(param_1 + 0x78);
                if (*(longlong *)(param_1 + 0x80) != 0) {
                    FUN_1405c26a0(param_1,0);
                }
            }
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack248);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405c27f0(undefined8 *param_1)

{
    undefined4 uVar1;
    char *pcVar2;
    char *pcVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    char *pcVar12;
    char *pcVar13;
    ulonglong uVar14;
    uint uVar15;
    ulonglong uVar16;
    bool bVar17;
    ulonglong local_res8;
    uint local_58;
    undefined4 uStack84;
    longlong local_50;
    undefined4 local_48;
    undefined8 local_40;
    undefined8 local_38;

    uVar16 = 0;
    uVar6 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar4 = 0;
        if ((_DAT_140c65558 == 0) && (iVar5 = FUN_140214fe0(), uVar4 = uVar6, -1 < iVar5)) {
            uVar4 = (**(code **)(*DAT_140c641f0 + 0x28))();
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_MatchingGameMap_140a6b550,DAT_140c63858);
    }
    uVar14 = uVar16;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                uVar9 = uVar16;
                if ((_DAT_140c65558 == 0) && (iVar5 = FUN_140214fe0(), -1 < iVar5)) {
                    uVar9 = (**(code **)(*DAT_140c641f0 + 0x20))(DAT_140c641f0,uVar14);
                }
            }
            else {
                uVar9 = (*DAT_140c63848)(&PTR_u_MatchingGameMap_140a6b550);
            }
            local_res8 = uVar9;
            if ((uVar9 != 0) && ((*(byte *)(uVar9 + 4) & 1) != 0)) {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c6417c != 0) || (iVar5 = FUN_140214ba0(), iVar5 < 0))
                        goto switchD_1405c295d_caseD_3;
                    lVar10 = (**(code **)(*DAT_140c652e0 + 0x18))();
                }
                else {
                    lVar10 = (*DAT_140c63840)(&PTR_u_MatchingGameType_140a6b518);
                }
                if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) {
                    uVar1 = *(undefined4 *)(lVar10 + 0xc);
                    local_38 = 0;
                    local_40 = 0;
                    local_48 = uVar1;
                    FUN_1404958b0();
                    switch(uVar1) {
                        case 0:
                        case 1:
                        case 5:
                        case 8:
                        case 0xd:
                        case 0xe:
                        case 0xf:
                        switchD_1405c295d_caseD_0:
                            FUN_140033260(CONCAT44(uStack84,local_58) + 0x28);
                            break;
                        case 2:
                            if ((*(byte *)(lVar10 + 0x10) & 0x20) != 0) goto switchD_1405c295d_caseD_0;
                    }
                }
            }
            switchD_1405c295d_caseD_3:
            uVar15 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar15;
        } while (uVar15 < uVar4);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar4 = uVar6;
        if ((_DAT_140c64ca8 == 0) && (iVar5 = FUN_140215860(), uVar4 = 0, -1 < iVar5)) {
            uVar4 = (**(code **)(*DAT_140c63930 + 0x28))();
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_MatchingMapPrerequisite_140a6b5c0,DAT_140c63858);
    }
    uVar14 = uVar16;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64ca8 == 0) && (iVar5 = FUN_140215860(), -1 < iVar5)) {
                    lVar10 = (**(code **)(*DAT_140c63930 + 0x20))(DAT_140c63930,uVar14);
                    goto LAB_1405c2a29;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_MatchingMapPrerequisite_140a6b5c0);
                LAB_1405c2a29:
                if ((lVar10 != 0) && (uVar15 = *(uint *)(lVar10 + 4), uVar15 != 0)) {
                    pcVar2 = (char *)param_1[9];
                    bVar17 = true;
                    pcVar3 = pcVar2;
                    pcVar13 = *(char **)(pcVar2 + 8);
                    while (pcVar13 != (char *)0x0) {
                        bVar17 = uVar15 < *(uint *)(pcVar13 + 0x20);
                        pcVar3 = pcVar13;
                        if (bVar17) {
                            pcVar13 = *(char **)(pcVar13 + 0x10);
                        }
                        else {
                            pcVar13 = *(char **)(pcVar13 + 0x18);
                        }
                    }
                    pcVar13 = pcVar3;
                    local_58 = uVar15;
                    local_50 = lVar10;
                    if (bVar17) {
                        if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                            FUN_140055e80(param_1 + 8,&local_res8,0,pcVar3,&local_58);
                            goto LAB_1405c2bc1;
                        }
                        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                            pcVar13 = *(char **)(pcVar3 + 0x18);
                        }
                        else {
                            pcVar13 = *(char **)(pcVar3 + 0x10);
                            if (pcVar13 == (char *)0x0) {
                                pcVar13 = *(char **)(pcVar3 + 8);
                                pcVar12 = pcVar13;
                                if (pcVar3 == *(char **)(pcVar13 + 0x10)) {
                                    do {
                                        pcVar13 = *(char **)(pcVar12 + 8);
                                        bVar17 = pcVar12 == *(char **)(pcVar13 + 0x10);
                                        pcVar12 = pcVar13;
                                    } while (bVar17);
                                }
                            }
                            else {
                                for (pcVar12 = *(char **)(pcVar13 + 0x18); pcVar12 != (char *)0x0;
                                     pcVar12 = *(char **)(pcVar12 + 0x18)) {
                                    pcVar13 = pcVar12;
                                }
                            }
                        }
                    }
                    if (*(uint *)(pcVar13 + 0x20) < uVar15) {
                        if ((pcVar3 == pcVar2) || (uVar15 < *(uint *)(pcVar3 + 0x20))) {
                            lVar11 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar11 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar11 + 0x20) = CONCAT44(uStack84,local_58);
                                *(longlong *)(lVar11 + 0x28) = lVar10;
                            }
                            *(longlong *)(pcVar3 + 0x10) = lVar11;
                            pcVar2 = (char *)param_1[9];
                            if (pcVar3 == pcVar2) {
                                *(longlong *)(pcVar2 + 8) = lVar11;
                                *(longlong *)(param_1[9] + 0x18) = lVar11;
                            }
                            else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                                *(longlong *)(pcVar2 + 0x10) = lVar11;
                            }
                        }
                        else {
                            lVar11 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar11 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar11 + 0x20) = CONCAT44(uStack84,local_58);
                                *(longlong *)(lVar11 + 0x28) = lVar10;
                            }
                            *(longlong *)(pcVar3 + 0x18) = lVar11;
                            if (pcVar3 == *(char **)(param_1[9] + 0x18)) {
                                *(longlong *)(param_1[9] + 0x18) = lVar11;
                            }
                        }
                        *(char **)(lVar11 + 8) = pcVar3;
                        *(undefined8 *)(lVar11 + 0x10) = 0;
                        *(undefined8 *)(lVar11 + 0x18) = 0;
                        FUN_1400081c0();
                        param_1[10] = param_1[10] + 1;
                    }
                }
            }
            LAB_1405c2bc1:
            uVar15 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar15;
        } while (uVar15 < uVar4);
    }
    param_1[5] = 0;
    iVar5 = 5;
    param_1[6] = 5;
    *param_1 = DAT_140c79890;
    param_1[1] = DAT_140c79890;
    param_1[2] = DAT_140c79890;
    param_1[3] = DAT_140c79890;
    param_1[4] = DAT_140c79890;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c65418 == 0) && (iVar7 = FUN_14022a3e0(), -1 < iVar7)) {
            uVar6 = (**(code **)(*DAT_140c64ee8 + 0x28))();
        }
    }
    else {
        uVar6 = (*DAT_140c63838)(&PTR_u_PvPRatingFloor_140a6c6d0,DAT_140c63858);
    }
    uVar14 = uVar16;
    if (uVar6 != 0) {
        do {
            iVar7 = (int)uVar14;
            if (DAT_140c63848 == (code *)0x0) {
                uVar9 = uVar16;
                if ((_DAT_140c65418 == 0) && (iVar8 = FUN_14022a3e0(), -1 < iVar8)) {
                    uVar9 = (**(code **)(*DAT_140c64ee8 + 0x20))(DAT_140c64ee8,uVar14);
                }
            }
            else {
                uVar9 = (*DAT_140c63848)(&PTR_u_PvPRatingFloor_140a6c6d0,uVar14,DAT_140c63858);
            }
            iVar8 = *(int *)(uVar9 + 8);
            if (iVar5 != iVar8) {
                if (iVar5 != 5) {
                    *(int *)((longlong)param_1 + (longlong)iVar5 * 8 + 4) = iVar7;
                }
                *(int *)(param_1 + iVar8) = iVar7;
                iVar5 = iVar8;
            }
            uVar14 = (ulonglong)(iVar7 + 1U);
        } while (iVar7 + 1U < uVar6);
        if (iVar5 != 5) {
            *(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4) = uVar6;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405c2d40(undefined8 param_1,int param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;

    uVar4 = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c6558c != 0) {
                return 0;
            }
            iVar2 = FUN_140215420();
            if (iVar2 < 0) {
                return 0;
            }
            uVar1 = (**(code **)(*DAT_140c64d10 + 0x28))();
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_MatchingRandomReward_140a6b588,DAT_140c63858);
        }
        if (uVar1 <= uVar4) {
            return 0;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c6558c == 0) && (iVar2 = FUN_140215420(), -1 < iVar2)) {
                lVar3 = (**(code **)(*DAT_140c64d10 + 0x20))(DAT_140c64d10,uVar4);
                goto LAB_1405c2de2;
            }
        }
        else {
            lVar3 = (*DAT_140c63848)(&PTR_u_MatchingRandomReward_140a6b588,uVar4,DAT_140c63858);
            LAB_1405c2de2:
            if (((lVar3 != 0) && (*(int *)(lVar3 + 4) == param_2)) && (*(int *)(lVar3 + 0x30) == param_3))
            {
                return lVar3;
            }
        }
        uVar4 = uVar4 + 1;
    } while( true );
}



undefined4 FUN_1405c2e10(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x48);
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
        return *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 8);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405c2e70(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = param_1 + 0x28;
    iVar4 = *(int *)(param_1 + (longlong)*param_2 * 8);
    param_1 = param_1 + (longlong)*param_2 * 8;
    if (iVar4 < *(int *)(param_1 + 4)) {
        while (DAT_140c63848 != (code *)0x0) {
            lVar2 = (*DAT_140c63848)(&PTR_u_PvPRatingFloor_140a6c6d0,iVar4,DAT_140c63858);
            LAB_1405c2ee1:
            if (lVar2 == 0) goto LAB_1405c2f13;
            if ((uint)param_2[1] <= *(uint *)(lVar2 + 0xc) && *(uint *)(lVar2 + 0xc) != param_2[1]) {
                return lVar3;
            }
            iVar4 = iVar4 + 1;
            lVar3 = lVar2;
            if (*(int *)(param_1 + 4) <= iVar4) {
                return lVar2;
            }
        }
        if ((_DAT_140c65418 == 0) && (iVar1 = FUN_14022a3e0(), -1 < iVar1)) {
            lVar2 = (**(code **)(*DAT_140c64ee8 + 0x20))(DAT_140c64ee8,iVar4);
            goto LAB_1405c2ee1;
        }
        LAB_1405c2f13:
        lVar3 = 0;
    }
    return lVar3;
}



undefined8 FUN_1405c2f20(void)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = DAT_140c65b98;
    FUN_1405c27f0(DAT_140c65b98 + 0x1b8);
    FUN_1405bf9d0();
    uVar1 = DAT_140c636a8;
    *(undefined4 *)(lVar3 + 0x124) = DAT_140c636a8;
    *(undefined4 *)(lVar3 + 300) = uVar1;
    lVar2 = DAT_140c65898;
    *(undefined4 *)(lVar3 + 0x120) = 0x34;
    *(undefined4 *)(lVar3 + 0x128) = 0x34;
    *(undefined4 *)(lVar3 + 0x130) = 0;
    *(undefined4 *)(lVar3 + 0x138) = 0;
    *(undefined8 *)(lVar3 + 0x140) = 0;
    *(undefined8 *)(lVar3 + 0x14c) = 0;
    *(undefined4 *)(lVar3 + 0x154) = 0;
    *(undefined4 *)(lVar3 + 0x108) = 0;
    *(undefined4 *)(lVar3 + 0x148) = 0;
    *(undefined4 *)(lVar3 + 0x10c) = 0x10;
    *(undefined4 *)(lVar3 + 0x110) = 0x10;
    *(undefined4 *)(lVar2 + 0x558) = 1;
    *(undefined4 *)(lVar3 + 0x1b0) = 0;
    return 0;
}



undefined4 FUN_1405c2fd0(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined *puVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    ulonglong uVar12;

    lVar7 = DAT_140c65898;
    if (*(longlong *)(DAT_140c65898 + 0x6c50) == 0) {
        return 7;
    }
    if ((param_3 != 0) && (*(uint *)(param_3 + 0xc) != param_2)) {
        return 4;
    }
    if (param_4 == (undefined4 *)0x0) {
        if (param_3 != 0) goto LAB_1405c3042;
    }
    else {
        if (param_3 == 0) {
            return 9;
        }
        LAB_1405c3042:
        if ((((*(byte *)(param_3 + 0x10) & 0x80) == 0) && (*(longlong *)(DAT_140c65898 + 0x6c50) != 0))
            && ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 8 & 1) != 0)) {
            return 0x32;
        }
    }
    if (((param_2 == 2) && (*(longlong *)(DAT_140c65898 + 0x6c50) != 0)) &&
        ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 8 & 1) != 0)) {
        return 0x32;
    }
    uVar9 = 0;
    uVar3 = 0;
    uVar11 = uVar9;
    if ((*(longlong *)(DAT_140c65898 + 0x6c50) == 0) ||
        (uVar11 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x60), (uint)uVar11 < 2)) {
        if ((param_2 != 8) || ((*(int *)(param_1 + 0x10c) == 0x10 || (*(int *)(param_1 + 0x154) == 0))))
        {
            return 3;
        }
        LAB_1405c30e9:
        puVar5 = &DAT_140b51560 + (longlong)(int)param_2 * 0x10;
    }
    else {
        if (param_2 < 0x10) goto LAB_1405c30e9;
        puVar5 = &DAT_140b51550;
    }
    uVar10 = (uint)uVar11;
    if ((((*(uint *)(puVar5 + 0xc) & 0x200) != 0) && (*(int *)(param_1 + 0x1b0) == 0)) &&
        (uVar10 != *(uint *)(param_3 + 0x14))) {
        return 0x33;
    }
    uVar6 = uVar9;
    if (param_3 == 0) {
        LAB_1405c318b:
        if (param_4 != (undefined4 *)0x0) {
            iVar2 = FUN_1405beda0();
            if (iVar2 == 0) {
                return 0x26;
            }
            uVar3 = FUN_1405c2e10(param_1 + 0x1b8,*param_4);
            lVar7 = DAT_140c65898;
        }
        if (uVar10 != 0) {
            do {
                lVar8 = *(longlong *)(lVar7 + 0x6c50);
                if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + 0x60) <= uVar9)) {
                    return 10;
                }
                if (uVar9 == 0) {
                    uVar12 = *(ulonglong *)(lVar8 + 0x68);
                }
                else {
                    uVar12 = uVar9;
                    if (uVar9 < *(ulonglong *)(lVar8 + 0x68) || uVar9 == *(ulonglong *)(lVar8 + 0x68)) {
                        uVar12 = uVar9 - 1;
                    }
                }
                lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + uVar12 * 8);
                if (lVar8 == 0) {
                    return 10;
                }
                if ((*(byte *)(lVar8 + 8) & 8) != 0) {
                    return 5;
                }
                if ((uVar3 != 0) && ((*(uint *)(lVar8 + 0x98) & uVar3) == 0)) {
                    return 0x2d;
                }
                if (param_3 != 0) {
                    FUN_1403d9500(lVar7,lVar8 + 0x10);
                    lVar7 = FUN_1403d90d0();
                    if (lVar7 == 0) {
                        uVar10 = *(uint *)(lVar8 + 0x78);
                    }
                    else {
                        uVar10 = *(uint *)(lVar7 + 0x38);
                    }
                    if ((*(uint *)(param_3 + 0x1c) < uVar10) ||
                        (uVar10 <= *(uint *)(param_3 + 0x18) && *(uint *)(param_3 + 0x18) != uVar10)) {
                        return 2;
                    }
                    lVar7 = DAT_140c65898;
                    if ((uVar6 != 0) &&
                        (lVar8 = FUN_14057ff90(uVar6,lVar8 + 0x10), lVar7 = DAT_140c65898, lVar8 == 0)) {
                        return 10;
                    }
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < (uVar11 & 0xffffffff));
        }
        if ((*(int *)(param_1 + 0x10c) != 0x10) && (*(int *)(param_1 + 0x154) != 0)) {
            if (param_2 < 0x10) {
                puVar5 = &DAT_140b51560 + (longlong)(int)param_2 * 0x10;
            }
            else {
                puVar5 = &DAT_140b51550;
            }
            if ((*(uint *)(puVar5 + 0xc) & 0x100) == 0) {
                return 0x2f;
            }
        }
        uVar4 = 0;
    }
    else {
        if (param_2 == 3) {
            uVar1 = *(uint *)(param_3 + 0x14);
            if (uVar10 == uVar1) {
                if (uVar1 == 2) {
                    uVar6 = 4;
                }
                else if (uVar1 == 3) {
                    uVar6 = 5;
                }
                else if (uVar1 == 5) {
                    uVar6 = 6;
                }
                uVar6 = FUN_1405846c0(param_1,uVar6);
                if (uVar6 == 0) {
                    return 10;
                }
                if (*(int *)(uVar6 + 0x2fc) == 0) {
                    FUN_14057e830(uVar6);
                    return 10;
                }
                goto LAB_1405c318b;
            }
        }
        else {
            uVar6 = 0;
            if (uVar10 < *(uint *)(param_3 + 0x14) || uVar10 == *(uint *)(param_3 + 0x14))
                goto LAB_1405c318b;
        }
        uVar4 = 3;
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1405c3320(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;

    if (param_2 != 0) {
        lVar3 = FUN_140214e00(*(undefined4 *)(param_2 + 0x10));
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc) - 10U < 3)) {
            uVar1 = *(undefined4 *)(param_2 + 0x14);
            if (_DAT_140c7e6a0 == 0) {
                FUN_1406454b0(uVar1);
            }
            lVar3 = FUN_14024acc0(uVar1);
            if (lVar3 == 0) {
                return 0;
            }
            uVar4 = *(int *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar3 + 0x50) * 4) -
                    *(int *)(lVar3 + 0x48);
            uVar2 = *(uint *)(lVar3 + 0x4c);
            if (uVar4 < *(uint *)(lVar3 + 0x4c)) {
                uVar2 = uVar4;
            }
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1405c3360(undefined8 param_1,longlong *param_2)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar10 = uVar9;
    if (param_2[1] != 0) {
        do {
            uVar7 = uVar9;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c65558 == 0) && (iVar3 = FUN_140214fe0(), -1 < iVar3)) {
                    lVar4 = (**(code **)(*DAT_140c641f0 + 0x18))();
                    goto LAB_1405c33ef;
                }
            }
            else {
                lVar4 = (*DAT_140c63840)(&PTR_u_MatchingGameMap_140a6b550,
                                         *(undefined4 *)(*param_2 + uVar10 * 4),DAT_140c63858);
                LAB_1405c33ef:
                if (lVar4 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c6417c != 0) || (iVar3 = FUN_140214ba0(), iVar3 < 0)) goto LAB_1405c34c6;
                        lVar5 = (**(code **)(*DAT_140c652e0 + 0x18))();
                    }
                    else {
                        lVar5 = (*DAT_140c63840)(&PTR_u_MatchingGameType_140a6b518,*(undefined4 *)(lVar4 + 0x10)
                                ,DAT_140c63858);
                    }
                    if ((lVar5 != 0) && (*(int *)(lVar5 + 0xc) - 10U < 3)) {
                        uVar1 = *(undefined4 *)(lVar4 + 0x14);
                        if (_DAT_140c7e6a0 == 0) {
                            FUN_1406454b0();
                        }
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64698 != 0) || (iVar3 = FUN_14024aa60(), iVar3 < 0)) goto LAB_1405c34c6;
                            lVar4 = (**(code **)(*DAT_140c63c08 + 0x18))();
                        }
                        else {
                            lVar4 = (*DAT_140c63840)(&PTR_u_World_140a6e180,uVar1,DAT_140c63858);
                        }
                        if (lVar4 != 0) {
                            uVar6 = *(int *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar4 + 0x50) * 4) -
                                    *(int *)(lVar4 + 0x48);
                            uVar2 = *(uint *)(lVar4 + 0x4c);
                            if (uVar6 < *(uint *)(lVar4 + 0x4c)) {
                                uVar2 = uVar6;
                            }
                            uVar7 = (ulonglong)uVar2;
                        }
                    }
                }
            }
            LAB_1405c34c6:
            if ((uint)uVar7 < uVar8) {
                uVar8 = (uint)uVar7;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)param_2[1]);
    }
    if (uVar8 != 0xffffffff) {
        uVar9 = (ulonglong)uVar8;
    }
    return uVar9;
}



void FUN_1405c3500(ulonglong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong local_res8;

    lVar2 = DAT_140c65b98;
    if (*(longlong *)(DAT_140c65b98 + 0xd0) != 0) {
        local_res8 = param_1;
        FUN_140195d70(DAT_140c65b98 + 0xc0);
        local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)param_2;
        FUN_1403f4900(DAT_140c65898,0x5c8,&local_res8);
        lVar1 = DAT_140c65898;
        if ((*(int *)(lVar2 + 0xac) == 0) || (param_2 == 0)) {
            *(undefined4 *)(lVar2 + 0xa4) = 0;
            *(undefined4 *)(lVar1 + 0x558) = 1;
            *(undefined8 *)(lVar2 + 0xb0) = 0;
            *(undefined4 *)(lVar2 + 0xb8) = 0;
            *(undefined8 *)(lVar2 + 0xa8) = 0x10;
            FUN_140195d70(lVar2 + 0xc0);
            if (param_2 == 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingCancelPendingGame","");
            }
        }
    }
    return;
}



void FUN_1405c35d0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res8;
    int local_res10 [6];

    lVar1 = *(longlong *)(DAT_140c65b98 + 0x48);
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
    if (((lVar1 != local_res8) && (*(int *)(local_res8 + 0x3c) == 0)) &&
        (iVar3 = FUN_1405bed30(DAT_140c65b98,param_2), iVar3 == 0)) {
        local_res10[0] = param_2;
        FUN_1403f4900(DAT_140c65898,0x5b5,local_res10);
    }
    return;
}



void FUN_1405c3660(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_res18 [4];

    iVar3 = FUN_1405bed30(DAT_140c65b98);
    if (iVar3 != 0) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
        if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) &&
             (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8),
                     lVar2 != 0)) &&
            ((*(int *)(lVar2 + 0x10) == *(int *)(lVar1 + 0x10) &&
              (*(longlong *)(lVar2 + 0x18) == *(longlong *)(lVar1 + 0x18))))) {
            local_res18[0] = param_2;
            FUN_1403f4900(DAT_140c65898,0x5b6,local_res18);
        }
    }
    return;
}



void FUN_1405c36e0(undefined8 param_1,uint param_2)

{
    undefined4 uVar1;
    uint uVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        uVar1 = 0x17;
    }
    else {
        uVar1 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc);
    }
    switch(uVar1) {
        case 1:
        case 2:
        case 5:
            uVar2 = 5;
            break;
        case 3:
        case 4:
        case 7:
            uVar2 = 6;
            break;
        default:
            uVar2 = 0;
    }
    local_18 = CONCAT44(uVar2 & param_2,*(undefined4 *)(DAT_140c65b98 + 0x110));
    local_10 = 1;
    FUN_1403f4900(DAT_140c65898,0x5b2,&local_18);
    return;
}



undefined8 FUN_1405c3790(undefined8 param_1,int param_2,uint param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong local_res8;

    lVar4 = DAT_140c65b98;
    uVar7 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    switch(param_2) {
        case 0:
        case 5:
            if (param_3 == 0) goto switchD_1405c37df_caseD_1;
            break;
        case 2:
            if (param_3 == 0) {
                return 0;
            }
        case 1:
        case 8:
        case 0xf:
        switchD_1405c37df_caseD_1:
            lVar6 = *(longlong *)(DAT_140c65b98 + 0x220);
            local_res8 = lVar6;
            lVar1 = *(longlong *)(lVar6 + 8);
            while (lVar1 != 0) {
                if (*(int *)(lVar1 + 0x20) < param_2) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar6) || (param_2 < *(int *)(local_res8 + 0x20))) {
                local_res8 = lVar6;
            }
            if ((local_res8 != lVar6) && ((longlong *)(local_res8 + 0x28) != (longlong *)0x0)) {
                uVar2 = *(ulonglong *)(local_res8 + 0x30);
                uVar9 = uVar7;
                if (uVar2 != 0) {
                    do {
                        puVar3 = *(undefined4 **)(*(longlong *)(local_res8 + 0x28) + uVar7 * 8);
                        lVar6 = FUN_140214e00(puVar3[4]);
                        if ((((*(uint *)(lVar6 + 0x18) < uVar8 || *(uint *)(lVar6 + 0x18) == uVar8) &&
                              (uVar8 <= *(uint *)(lVar6 + 0x1c))) &&
                             (param_3 == (*(uint *)(lVar6 + 0x10) >> 5 & 1))) &&
                            (((iVar5 = FUN_1405beda0(), iVar5 != 0 &&
                                                        (iVar5 = FUN_1405c3960(lVar4,*puVar3), iVar5 != 0)) && (uVar9 = uVar9 + 1, 1 < uVar9)
                            ))) {
                            return 1;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar2);
                }
                return 0;
            }
            return 0;
        case 0xd:
        case 0xe:
            if (param_3 != 0) goto switchD_1405c37df_caseD_1;
    }
    return 0;
}



bool FUN_1405c3960(longlong param_1,uint param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x200);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 != lVar2) {
        uVar1 = *(uint *)(*(longlong *)(local_res8 + 0x28) + 8);
        return (uVar1 & (*(uint *)(param_1 + 0xa0) & uVar1) == 0) == 0;
    }
    return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405c39f0(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    lVar2 = DAT_140c65b98;
    if ((DAT_140dc34d4 & 1) == 0) {
        DAT_140dc34d4 = DAT_140dc34d4 | 1;
    }
    else if (_DAT_140dc34dc != 0) goto LAB_1405c3a5c;
    _DAT_140dc34dc = 1;
    lVar3 = FUN_140200220(0x26a);
    if (lVar3 == 0) {
        DAT_140dc34d8 = 0;
    }
    else {
        DAT_140dc34d8 = *(undefined4 *)(lVar3 + 4);
    }
    LAB_1405c3a5c:
    local_28[0] = 0;
    local_20 = lVar2;
    local_18 = FUN_1405c4260;
    local_10 = 0;
    FUN_140195960(lVar2 + 0xc0,DAT_140dc34d8,local_28,4);
    lVar3 = DAT_140c65898;
    *(undefined4 *)(lVar2 + 0xa8) = *param_2;
    *(undefined4 *)(lVar2 + 0xac) = param_2[1];
    uVar1 = param_2[2];
    *(undefined4 *)(lVar2 + 0xb0) = 0;
    *(undefined4 *)(lVar2 + 0xb8) = 0;
    *(undefined4 *)(lVar2 + 0xb4) = uVar1;
    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"MatchingGameReady",&DAT_1409ee9a4,0);
    return 0;
}



undefined8 FUN_1405c3af0(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    char *pcVar4;
    undefined *puVar5;
    bool bVar6;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    lVar2 = DAT_140c65b98;
    if ((DAT_140dc34e0 & 1) == 0) {
        DAT_140dc34e0 = DAT_140dc34e0 | 1;
        lVar3 = FUN_140200220(0x26a);
        if (lVar3 == 0) {
            DAT_140dc34e4 = 30000;
        }
        else {
            DAT_140dc34e4 = *(undefined4 *)(lVar3 + 4);
        }
    }
    local_20 = lVar2;
    local_28[0] = 0;
    local_18 = FUN_1405c4260;
    local_10 = 0;
    FUN_140195960(lVar2 + 0xc0,DAT_140dc34e4,local_28,4);
    lVar3 = DAT_140c65898;
    *(undefined4 *)(lVar2 + 0xa8) = *param_2;
    *(undefined4 *)(lVar2 + 0xac) = param_2[1];
    uVar1 = param_2[2];
    *(undefined8 *)(lVar2 + 0xb4) = 0;
    *(undefined4 *)(lVar2 + 0xb0) = uVar1;
    if (*(int *)(lVar2 + 0x150) == 0) {
        bVar6 = true;
        puVar5 = &DAT_1409ee9a4;
        pcVar4 = "MatchingGameReady";
    }
    else {
        bVar6 = param_2[1] == 0;
        puVar5 = &DAT_1409ee984;
        pcVar4 = "MatchingGamePendingUpdate";
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),pcVar4,puVar5,bVar6);
    return 0;
}



undefined8 FUN_1405c3c00(undefined8 param_1,int *param_2)

{
    int *piVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar2 = DAT_140c65b98;
    if (*param_2 == 0) {
        piVar1 = (int *)(DAT_140c65b98 + 0xb4);
        *(int *)(DAT_140c65b98 + 0xb8) = *(int *)(DAT_140c65b98 + 0xb8) + 1;
        if (*piVar1 != 0) {
            *(int *)(lVar2 + 0xb4) = *piVar1 + -1;
        }
    }
    else {
        piVar1 = (int *)(DAT_140c65b98 + 0xac);
        *(int *)(DAT_140c65b98 + 0xb0) = *(int *)(DAT_140c65b98 + 0xb0) + 1;
        if (*piVar1 != 0) {
            *(int *)(lVar2 + 0xac) = *piVar1 + -1;
        }
    }
    if ((*(int *)(lVar2 + 0xac) == 0) && (*(int *)(lVar2 + 0xb4) == 0)) {
        uVar3 = 1;
    }
    else {
        uVar3 = 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingGamePendingUpdate",&DAT_1409ee984,
                  uVar3);
    return 0;
}



undefined8 FUN_1405c3c90(void)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar2 = DAT_140c65b98;
    lVar1 = DAT_140c65898;
    *(undefined4 *)(DAT_140c65b98 + 0xa4) = 0;
    *(undefined4 *)(lVar1 + 0x558) = 1;
    *(undefined8 *)(lVar2 + 0xa8) = 0x10;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined4 *)(lVar2 + 0xb8) = 0;
    FUN_140195d70(lVar2 + 0xc0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingCancelPendingGame","");
    uVar3 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return 0;
}



undefined8 FUN_1405c3d30(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    char *pcVar5;
    char *pcVar6;

    lVar2 = DAT_140c65b98;
    FUN_1405c0760(DAT_140c65b98,param_2[1],0,0x10);
    lVar1 = DAT_140c65898;
    iVar3 = *param_2;
    if (iVar3 == 0xf) {
        pcVar6 = "";
        pcVar5 = "MatchLeft";
    }
    else if (iVar3 == 0x16) {
        *(undefined4 *)(lVar2 + 0xa4) = 0;
        pcVar6 = "";
        pcVar5 = "MatchingRoleCheckCanceled";
    }
    else {
        if (iVar3 != 0x17) goto LAB_1405c3df5;
        *(undefined4 *)(lVar2 + 0xa4) = 0;
        *(undefined4 *)(lVar1 + 0x558) = 1;
        *(undefined8 *)(lVar2 + 0xa8) = 0x10;
        *(undefined8 *)(lVar2 + 0xb0) = 0;
        *(undefined4 *)(lVar2 + 0xb8) = 0;
        FUN_140195d70(lVar2 + 0xc0);
        pcVar6 = "";
        pcVar5 = "MatchingCancelPendingGame";
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),pcVar5,pcVar6);
    LAB_1405c3df5:
    iVar3 = FUN_1405c42c0(*param_2);
    if (iVar3 != 0) {
        uVar4 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar4,0,0);
    }
    return 0;
}



undefined8 FUN_1405c3e40(undefined8 param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = DAT_140c65b98;
    puVar1 = param_2 + 3;
    FUN_1405c0760(DAT_140c65b98,*param_2,puVar1,param_2[1]);
    lVar3 = DAT_140c65898;
    uVar2 = DAT_140c636a8;
    if (puVar1 != (undefined4 *)0x0) {
        if ((*(int *)(lVar4 + 0x10c) != 0x10) && (param_2[1] != *(int *)(lVar4 + 0x10c))) {
            *(undefined4 *)(lVar4 + 0x120) = 0x34;
            *(undefined4 *)(lVar4 + 0x124) = uVar2;
            *(undefined4 *)(lVar4 + 300) = uVar2;
            *(undefined4 *)(lVar4 + 0x128) = 0x34;
            *(undefined4 *)(lVar4 + 0x130) = 0;
            *(undefined4 *)(lVar4 + 0x138) = 0;
            *(undefined8 *)(lVar4 + 0x140) = 0;
            *(undefined8 *)(lVar4 + 0x14c) = 0;
            *(undefined4 *)(lVar4 + 0x154) = 0;
            *(undefined4 *)(lVar4 + 0x108) = 0;
            *(undefined4 *)(lVar4 + 0x148) = 0;
            *(undefined4 *)(lVar4 + 0x10c) = 0x10;
            *(undefined4 *)(lVar4 + 0x110) = 0x10;
            *(undefined4 *)(lVar3 + 0x558) = 1;
            FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"MatchLeft","");
        }
        if (puVar1 != (undefined4 *)0x0) {
            *(undefined4 *)(lVar4 + 0x10c) = param_2[1];
            *(undefined4 *)(lVar4 + 0x110) = param_2[2];
        }
    }
    return 0;
}



undefined8 FUN_1405c3f50(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    wchar_t *pwVar4;
    uint uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;

    uVar3 = 0;
    local_50 = 0;
    local_40 = 0;
    uVar2 = uVar3;
    do {
        lVar7 = uVar2 + 1;
        uVar2 = uVar2 + 1;
    } while (L" \n----------------------------------------------------------------------------------"
             [lVar7] != L'\0');
    lVar7 = (longlong)(uVar2 * 2) >> 1;
    uVar2 = lVar7 + 1;
    if (uVar2 < 0x7fffffffffffffff) {
        lVar1 = uVar2 * 2;
        local_50 = FUN_14018b280(lVar1,0);
        local_40 = lVar1 + local_50;
    }
    lVar1 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,
                  L" \n----------------------------------------------------------------------------------"
            ,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar1);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    lVar7 = FUN_14018efa0(local_38,L"\n%d players are queued for map %d:\n",param_2[1],*param_2);
    FUN_14001c310(local_58,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    uVar2 = uVar3;
    if (param_2[1] != 0) {
        do {
            pwVar4 = L"Dominion";
            puVar6 = (undefined4 *)(uVar2 * 0x60 + *(longlong *)(param_2 + 2));
            uVar5 = (int)uVar2 + 1;
            if (puVar6[6] == 0xa7) {
                pwVar4 = L"Exiles";
            }
            lVar7 = FUN_14018efa0(local_38,L"\n%d.   %s   lvl:%d   Faction:%s   Realm:%d\n",uVar5,
                                  *(undefined8 *)(puVar6 + 4),puVar6[10],pwVar4,*puVar6);
            FUN_14001c310(local_58,*(undefined8 *)(lVar7 + 8));
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
            uVar2 = (ulonglong)uVar5;
        } while (uVar5 < (uint)param_2[1]);
    }
    do {
        lVar7 = uVar3 + 1;
        uVar3 = uVar3 + 1;
    } while (L"\n----------------------------------------------------------------------------------"
             [lVar7] != L'\0');
    FUN_14001c310(local_58,
                  L"\n----------------------------------------------------------------------------------"
            ,L"\n----------------------------------------------------------------------------------"
             + uVar3);
    lVar7 = local_50;
    FUN_140003890(DAT_140c658a0,3,0,local_50,0,0);
    if (lVar7 != 0) {
        FUN_14018b900(lVar7,0);
    }
    return 0;
}



undefined8 FUN_1405c4140(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = DAT_140c65b98;
    lVar1 = DAT_140c65898;
    *(undefined4 *)(DAT_140c65b98 + 0x108) = *param_2;
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"MatchJoined","");
    lVar1 = DAT_140c65898;
    *(undefined4 *)(lVar2 + 0xa4) = 0;
    *(undefined4 *)(lVar1 + 0x558) = 1;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined4 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0x10;
    FUN_140195d70(lVar2 + 0xc0);
    return 0;
}



undefined8 FUN_1405c41c0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res8;

    lVar2 = DAT_140c65b98;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
    local_res8 = param_1;
    if (lVar1 != 0) {
        iVar3 = FUN_14079ee60(lVar1,DAT_140c65898 + 0x6c60,&local_res8);
        if ((iVar3 != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
            *(undefined4 *)(lVar1 + 0x98) = *param_2;
        }
    }
    *(undefined4 *)(lVar2 + 0xa0) = *param_2;
    FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x13d8);
    return 0;
}



void FUN_1405c4260(longlong param_1)

{
    longlong lVar1;

    lVar1 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(lVar1 + 0x558) = 1;
    *(undefined8 *)(param_1 + 0xa8) = 0x10;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_140195d70();
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingCancelPendingGame","");
    return;
}



int FUN_1405c42c0(undefined4 param_1)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;

    switch(param_1) {
        case 0:
            return 0x57ba0;
        case 1:
            return 0x57ba6;
        case 2:
            return 0x57ba7;
        case 3:
            return 0x57ba8;
        case 4:
            return 0x57bae;
        case 5:
            return 0x57baf;
        case 6:
            return 0x4b85d;
        case 7:
            return 0x57bb3;
        case 8:
            return 0x57bb4;
        case 9:
        case 0xe:
            return 0x57ba9;
        case 10:
            return 0x57bbc;
        case 0xb:
            iVar1 = FUN_1405bed30(DAT_140c65b98,0x10);
            iVar3 = 0x57bbd;
            if (iVar1 != 0) {
                iVar3 = 0x4b889;
            }
            return iVar3;
        case 0xc:
            iVar1 = FUN_1405bed30(DAT_140c65b98,0x10);
            if (iVar1 == 0) {
                return 0x57bbd;
            }
            uVar2 = FUN_14034bdd0();
            FUN_140003890(DAT_140c658a0,2,0,uVar2,0,0);
            return 0x4b889;
        default:
            return 0;
        case 0xf:
            return 0x57bbf;
        case 0x12:
            return 0x634f2;
        case 0x13:
            return 0x634f3;
        case 0x19:
            return 0x6781b;
        case 0x1d:
            break;
        case 0x20:
            if ((*(int *)(DAT_140c65b98 + 0x10c) != 0) && (4 < *(int *)(DAT_140c65b98 + 0x10c) - 3U)) {
                return 0x79248;
            }
            return 0x6bd51;
        case 0x21:
            if ((*(int *)(DAT_140c65b98 + 0x10c) != 0) && (4 < *(int *)(DAT_140c65b98 + 0x10c) - 3U)) {
                return 0x7924d;
            }
            return 0x6bf2c;
        case 0x22:
            return 0x6c575;
        case 0x23:
            if ((*(int *)(DAT_140c65b98 + 0x10c) != 0) && (4 < *(int *)(DAT_140c65b98 + 0x10c) - 3U)) {
                return 0x7924e;
            }
            return 0x6d22c;
        case 0x26:
            iVar1 = FUN_1405bed30(DAT_140c65b98,0x10);
            return (iVar1 != 0) + 0x73ae7;
        case 0x28:
            return 0x9830e;
        case 0x29:
            return 0x9830c;
        case 0x2a:
            return 0x98357;
        case 0x2b:
            return 0x98356;
        case 0x2c:
            return 0x99056;
        case 0x2d:
            return 0x99057;
        case 0x2e:
            return 0x9ad5c;
        case 0x2f:
            return 0xb9ad7;
        case 0x30:
            return 0xba67a;
        case 0x31:
            return 0xbb33b;
        case 0x33:
            return 0xbb713;
    }
    if ((*(int *)(DAT_140c65b98 + 0x10c) != 0) && (4 < *(int *)(DAT_140c65b98 + 0x10c) - 3U)) {
        return 0x79245;
    }
    return 0x6bf3b;
}



undefined8 FUN_1405c4690(longlong param_1,undefined4 param_2,int param_3,uint *param_4)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined *puVar7;

    puVar4 = (undefined4 *)FUN_140215240(param_2);
    if (((puVar4 == (undefined4 *)0x0) || (lVar5 = FUN_140214e00(puVar4[4]), lVar5 == 0)) ||
        ((*(byte *)(lVar5 + 0x10) & 1) == 0)) {
        return 9;
    }
    if (*param_4 == 0x10) {
        *param_4 = *(uint *)(lVar5 + 0xc);
    }
    if (param_3 == 0) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar1 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(uint *)(lVar1 + 0x38);
        }
        if ((*(uint *)(lVar5 + 0x1c) <= uVar2 && uVar2 != *(uint *)(lVar5 + 0x1c)) ||
            (uVar2 < *(uint *)(lVar5 + 0x18))) {
            return 2;
        }
        iVar3 = FUN_1405beda0(lVar1,puVar4);
        if (iVar3 == 0) {
            return 0x26;
        }
        iVar3 = FUN_1405c3960(param_1,*puVar4);
        if (iVar3 == 0) {
            return 0x2c;
        }
        if (*param_4 < 0x10) {
            puVar7 = &DAT_140b51560 + (longlong)(int)*param_4 * 0x10;
        }
        else {
            puVar7 = &DAT_140b51550;
        }
        if (((*(uint *)(puVar7 + 0xc) & 0x200) != 0) && (*(int *)(param_1 + 0x1b0) == 0)) {
            return 7;
        }
    }
    else {
        uVar6 = FUN_1405c2fd0(param_1,*param_4,lVar5,puVar4);
        if ((int)uVar6 != 0) {
            return uVar6;
        }
    }
    if ((*param_4 == 3) && (param_3 == 0)) {
        return 7;
    }
    if (*param_4 != *(uint *)(lVar5 + 0xc)) {
        return 4;
    }
    return 0;
}



ulonglong FUN_1405c47e0(longlong param_1,undefined4 param_2,int param_3,uint *param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined *puVar3;
    uint uVar4;

    lVar1 = FUN_140214e00(param_2);
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x10) & 1) == 0)) {
        return 9;
    }
    if (*param_4 == 0x10) {
        *param_4 = *(uint *)(lVar1 + 0xc);
    }
    if (param_3 == 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
        }
        if ((*(uint *)(lVar1 + 0x1c) <= uVar4 && uVar4 != *(uint *)(lVar1 + 0x1c)) ||
            (uVar4 < *(uint *)(lVar1 + 0x18))) {
            return 2;
        }
        if (*param_4 < 0x10) {
            puVar3 = &DAT_140b51560 + (longlong)(int)*param_4 * 0x10;
        }
        else {
            puVar3 = &DAT_140b51550;
        }
        if (((*(uint *)(puVar3 + 0xc) & 0x200) != 0) && (*(int *)(param_1 + 0x1b0) == 0)) {
            return 7;
        }
    }
    else {
        uVar2 = FUN_1405c2fd0(param_1,*param_4,lVar1,0);
        if ((int)uVar2 != 0) {
            return uVar2;
        }
    }
    if ((*param_4 == 3) && (param_3 == 0)) {
        return 7;
    }
    uVar4 = 0;
    if (*param_4 != *(uint *)(lVar1 + 0xc)) {
        uVar4 = 4;
    }
    return (ulonglong)uVar4;
}



ulonglong FUN_1405c48e0(longlong param_1,int *param_2,int param_3,longlong *param_4,
                        undefined4 param_5)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong local_28;

    if ((param_3 == 0) || (uVar3 = FUN_1405c47e0(param_1,param_3,param_5,param_2), (int)uVar3 == 0)) {
        uVar3 = 0;
        uVar5 = uVar3;
        if (param_4[1] != 0) {
            do {
                uVar4 = FUN_1405c4690(param_1,*(undefined4 *)(*param_4 + uVar5 * 4),param_5,param_2);
                if ((int)uVar4 != 0) {
                    return uVar4;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < (ulonglong)param_4[1]);
        }
        if ((((*(int *)(param_1 + 0x10c) == 0x10) || (*(int *)(param_1 + 0x154) != 0)) &&
             (*(longlong *)(param_1 + 0xd0) == 0)) &&
            ((*(int *)(param_1 + 0xac) == 0 && (*(int *)(param_1 + 0xb4) == 0)))) {
            lVar1 = *(longlong *)(param_1 + 0x48);
            local_28 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(int *)(lVar2 + 0x20) < *param_2) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_28 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_28 == lVar1) || (*param_2 < *(int *)(local_28 + 0x20))) {
                local_28 = lVar1;
            }
            if ((lVar1 != local_28) && (*(int *)(local_28 + 0x3c) == 0)) {
                uVar3 = 0xe;
            }
        }
        else {
            uVar3 = 1;
        }
    }
    return uVar3;
}



void FUN_1405c4a00(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 0x10);
    for (lVar2 = *(longlong *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
        if (*(longlong *)(lVar2 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar2 + 8),0);
        }
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    return;
}



longlong FUN_1405c4a60(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_1405c5eb0(param_3,*(undefined8 *)(param_1 + 0x10),param_2);
    lVar2 = *(longlong *)(param_1 + 0x10);
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
        if (*(longlong *)(lVar1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar1 + 8),0);
        }
    }
    lVar2 = SUB168(SEXT816(-0x6666666666666667) * SEXT816(param_3 - param_2) >> 0x40,0);
    *(longlong *)(param_1 + 0x10) =
            *(longlong *)(param_1 + 0x10) + ((lVar2 >> 4) - (lVar2 >> 0x3f)) * 0x28;
    return param_2;
}



char ** FUN_1405c4b10(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1405c4b6e;
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
    LAB_1405c4b6e:
    ppcVar1 = (char **)FUN_1405c55e0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



char ** FUN_1405c4c10(longlong param_1,char **param_2,int *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(int *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_1405c56d0(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
                }
            }
            else {
                for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                     pcVar4 = *(char **)(pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    if (*(int *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(int *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1405c5c50(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1405c5c50(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



longlong FUN_1405c4dd0(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18 [2];

    local_res18[0] = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18[0] + 8);
    local_res8 = local_res18[0];
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if (*param_2 < *(int *)(lVar2 + 0x20)) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if (lVar4 != 0) {
            do {
                if (*(int *)(lVar4 + 0x20) < *param_2) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18[0] = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18[0];
    while (lVar2 != local_res8) {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
        lVar4 = lVar4 + 1;
    }
    FUN_1405c5790(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_1405c4ec0(longlong param_1,undefined *param_2)

{
    undefined2 *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined local_48 [48];

    lVar6 = *(longlong *)(param_1 + 0x10);
    if (lVar6 == *(longlong *)(param_1 + 0x18)) {
        lVar6 = (lVar6 - *(longlong *)(param_1 + 8)) / 0x28;
        if (lVar6 == 0) {
            lVar6 = 1;
        }
        else {
            lVar6 = lVar6 * 2;
        }
        uVar2 = FUN_14018a3e0(lVar6 * 0x28);
        lVar6 = (uVar2 / 0x28) * 0x28;
        lVar3 = FUN_14018b280(lVar6,0);
        lVar4 = FUN_1405c5e20(*(undefined8 *)(param_1 + 8),param_2,lVar3);
        if (lVar4 != 0) {
            FUN_1405becb0(lVar4);
        }
        uVar5 = FUN_1405c5e20(param_2,*(undefined8 *)(param_1 + 0x10),lVar4 + 0x28);
        lVar4 = *(longlong *)(param_1 + 0x10);
        for (lVar7 = *(longlong *)(param_1 + 8); lVar7 != lVar4; lVar7 = lVar7 + 0x28) {
            if (*(longlong *)(lVar7 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar7 + 8),0);
            }
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        *(longlong *)(param_1 + 0x18) = lVar6 + lVar3;
        *(longlong *)(param_1 + 8) = lVar3;
    }
    else {
        if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 8) = 0;
            *(undefined8 *)(lVar6 + 0x10) = 0;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            FUN_14001c1b0(lVar6,*(undefined8 *)(lVar6 + -0x20),
                          *(undefined8 *)(&DAT_ffffffffffffffe8 + lVar6));
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar6 + -8);
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar6 + -4);
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x28;
        FUN_1405c5f60(param_2,&DAT_ffffffffffffffb0 + *(longlong *)(param_1 + 0x10),
                      *(longlong *)(param_1 + 0x10) + -0x28);
        puVar1 = (undefined2 *)FUN_14018b280(2);
        FUN_1407db590(puVar1,&DAT_140b7b704,0);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        if (local_48 != param_2) {
            FUN_14001c480(param_2,puVar1,puVar1);
        }
        *(undefined8 *)(param_2 + 0x20) = 0;
        if (puVar1 != (undefined2 *)0x0) {
            FUN_14018b900(puVar1,0);
            return;
        }
    }
    return;
}



longlong FUN_1405c50a0(longlong *param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,0x48);
    puVar1 = (undefined8 *)(lVar4 + lVar2 * 0x48);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
    puVar1[8] = param_2[8];
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0x48);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



void FUN_1405c5180(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = param_1[1] - 1;
    FUN_1407db590(*param_1,*param_1 + 0x48,uVar4 * 0x48);
    puVar3 = (undefined8 *)*param_1;
    if (uVar4 == 0) goto LAB_1405c5257;
    if (puVar3 == (undefined8 *)0x0) {
        lVar2 = uVar4 * 0x48 + 0x10;
        uVar5 = uVar4;
    }
    else {
        if (uVar4 < (ulonglong)puVar3[-1] || uVar4 == puVar3[-1]) goto LAB_1405c5257;
        lVar2 = FUN_14018a3e0(uVar4 * 0x48 + 0x10);
        uVar5 = (lVar2 - 0x10U) / 0x48;
        lVar2 = uVar5 * 0x48 + 0x10;
        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar5;
            goto LAB_1405c5257;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = uVar5;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_1405c5257:
    if ((undefined8 *)*param_1 != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)*param_1,uVar4 * 0x48);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = uVar4;
    return;
}



char ** FUN_1405c52a0(longlong param_1,char **param_2,uint *param_3)

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
            if ((*param_3 & 0xffff) < (*(uint *)(pcVar5 + 0x20) & 0xffff)) {
                bVar6 = true;
            }
            else if (*(byte *)((longlong)param_3 + 2) < (byte)pcVar5[0x22]) {
                bVar6 = true;
            }
            else {
                bVar6 = (int)((*param_3 & 0xff000000) * 0x40) <
                        (int)((*(uint *)(pcVar5 + 0x20) & 0xff000000) * 0x40);
            }
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1405c53d8;
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
    if ((((ushort)*param_3 <= (ushort)*(uint *)(pcVar3 + 0x20)) &&
         (*(byte *)((longlong)param_3 + 2) <= (byte)pcVar3[0x22])) &&
        ((int)((*param_3 & 0xff000000) * 0x40) <= (int)((*(uint *)(pcVar3 + 0x20) & 0xff000000) * 0x40)
        )) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1405c53d8:
    ppcVar1 = (char **)FUN_1405c5890(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



char ** FUN_1405c5410(longlong param_1,char **param_2,int *param_3)

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
            bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1405c546e;
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
    if (*param_3 <= *(int *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1405c546e:
    ppcVar1 = (char **)FUN_1405c5b00(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_1405c5510(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;

    puVar3 = (undefined *)FUN_14018b280();
    *(undefined **)(param_1 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
    *puVar3 = 0;
    if (lVar1 == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    }
    else {
        lVar1 = *(longlong *)(param_1 + 8);
        uVar4 = FUN_1405c59c0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar4;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    return param_1;
}



longlong *
FUN_1405c55e0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_1405c5510(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1405c5c10(param_1,param_5);
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



longlong *
FUN_1405c56d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_1405c5c50();
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
        lVar2 = FUN_1405c5c50();
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



void FUN_1405c5790(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 8);
    if ((*param_2 == *(longlong *)(lVar2 + 0x10)) && (*param_3 == lVar2)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            FUN_14001a270(param_1,*(undefined8 *)(lVar2 + 8));
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
            *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
            *(undefined8 *)(param_1 + 0x10) = 0;
            return;
        }
    }
    else if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_1405c5d10(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_1405c5890(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if (((ushort)*(uint *)(param_4 + 0x20) <= (ushort)*param_5) &&
            (*(byte *)(param_4 + 0x22) <= *(byte *)((longlong)param_5 + 2))) {
            iVar3 = (*(uint *)(param_4 + 0x20) & 0xff000000) * 0x40;
            if (iVar3 <= (int)((*param_5 & 0xff000000) * 0x40)) {
                lVar2 = FUN_1405c5cc0(iVar3,param_5);
                *(longlong *)(param_4 + 0x18) = lVar2;
                if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
                }
                goto LAB_1405c5976;
            }
        }
    }
    lVar2 = FUN_14018b280(0x38);
    if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
        *(uint *)(lVar2 + 0x20) = *param_5;
        *(uint *)(lVar2 + 0x24) = param_5[1];
        *(uint *)(lVar2 + 0x28) = param_5[2];
        *(uint *)(lVar2 + 0x2c) = param_5[3];
        *(uint *)(lVar2 + 0x30) = param_5[4];
        *(uint *)(lVar2 + 0x34) = param_5[5];
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
    LAB_1405c5976:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



undefined * FUN_1405c59c0(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    puVar2 = (undefined *)FUN_14018b280();
    if ((undefined4 *)(puVar2 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(puVar2 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *puVar2 = uVar1;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_1405c59c0(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x38);
        if ((undefined4 *)(puVar4 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
            *(undefined4 *)(puVar4 + 0x24) = *(undefined4 *)(puVar6 + 0x24);
            *(undefined4 *)(puVar4 + 0x28) = *(undefined4 *)(puVar6 + 0x28);
            *(undefined4 *)(puVar4 + 0x2c) = *(undefined4 *)(puVar6 + 0x2c);
            *(undefined4 *)(puVar4 + 0x30) = *(undefined4 *)(puVar6 + 0x30);
            *(undefined4 *)(puVar4 + 0x34) = *(undefined4 *)(puVar6 + 0x34);
        }
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_1405c59c0(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



longlong *
FUN_1405c5b00(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            *(int *)(lVar2 + 0x24) = param_5[1];
            *(int *)(lVar2 + 0x28) = param_5[2];
            *(int *)(lVar2 + 0x2c) = param_5[3];
            *(int *)(lVar2 + 0x30) = param_5[4];
            *(int *)(lVar2 + 0x34) = param_5[5];
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
        lVar2 = FUN_1405c5cc0(param_1,param_5);
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



longlong FUN_1405c5c10(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1405c5510(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



longlong FUN_1405c5c50(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1403b4f00(lVar1 + 0x28,param_2 + 2);
        *(undefined4 *)(lVar1 + 0x38) = param_2[6];
        *(undefined4 *)(lVar1 + 0x3c) = param_2[7];
        *(undefined4 *)(lVar1 + 0x40) = param_2[8];
        *(undefined4 *)(lVar1 + 0x44) = param_2[9];
        *(undefined4 *)(lVar1 + 0x48) = param_2[10];
        *(undefined4 *)(lVar1 + 0x4c) = param_2[0xb];
    }
    return lVar1;
}



longlong FUN_1405c5cc0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        *(undefined4 *)(lVar1 + 0x24) = param_2[1];
        *(undefined4 *)(lVar1 + 0x28) = param_2[2];
        *(undefined4 *)(lVar1 + 0x2c) = param_2[3];
        *(undefined4 *)(lVar1 + 0x30) = param_2[4];
        *(undefined4 *)(lVar1 + 0x34) = param_2[5];
    }
    return lVar1;
}



void FUN_1405c5d10(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8afac,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405c5dd5. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        lVar1 = *(longlong *)(lVar3 + 0x28);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(lVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong FUN_1405c5e20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    if (param_1 != param_2) {
        lVar3 = param_3 - (longlong)param_1;
        puVar2 = param_1 + 1;
        do {
            if (param_3 != 0) {
                *(undefined8 *)(lVar3 + (longlong)puVar2) = 0;
                *(undefined8 *)(lVar3 + 8 + (longlong)puVar2) = 0;
                *(undefined8 *)(lVar3 + 0x10 + (longlong)puVar2) = 0;
                FUN_14001c1b0(param_3,*puVar2,puVar2[1]);
                *(undefined4 *)(lVar3 + 0x18 + (longlong)puVar2) = *(undefined4 *)(puVar2 + 3);
                *(undefined4 *)(lVar3 + 0x1c + (longlong)puVar2) = *(undefined4 *)((longlong)puVar2 + 0x1c);
            }
            param_3 = param_3 + 0x28;
            puVar1 = puVar2 + 4;
            puVar2 = puVar2 + 5;
        } while (puVar1 != param_2);
    }
    return param_3;
}



undefined8 * FUN_1405c5eb0(longlong param_1,longlong param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar3 = (param_2 - param_1) / 0x28;
    puVar4 = param_3;
    if (0 < lVar3) {
        puVar1 = (undefined8 *)(param_1 + 8);
        do {
            if (puVar1 + -1 != puVar4) {
                FUN_14001c480(puVar4,*puVar1,puVar1[1]);
            }
            lVar3 = lVar3 + -1;
            puVar2 = puVar1 + 5;
            *(undefined4 *)((longlong)param_3 + (-0x10 - param_1) + (longlong)puVar2) =
                    *(undefined4 *)(puVar1 + 3);
            puVar4 = puVar4 + 5;
            *(undefined4 *)((longlong)param_3 + (-0xc - param_1) + (longlong)puVar2) =
                    *(undefined4 *)((longlong)puVar1 + 0x1c);
            puVar1 = puVar2;
        } while (0 < lVar3);
    }
    return puVar4;
}



undefined8 * FUN_1405c5f60(longlong param_1,longlong param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = (param_2 - param_1) / 0x28;
    if (0 < lVar2) {
        puVar1 = (undefined8 *)(param_2 + 8);
        puVar3 = param_3;
        do {
            param_3 = puVar3 + -5;
            if (puVar1 + -6 != param_3) {
                FUN_14001c480(param_3,puVar1[-5],puVar1[-4]);
            }
            lVar2 = lVar2 + -1;
            *(undefined4 *)(puVar3 + -1) = *(undefined4 *)(puVar1 + -2);
            *(undefined4 *)((longlong)puVar3 + -4) = *(undefined4 *)((longlong)puVar1 + -0xc);
            puVar1 = puVar1 + -5;
            puVar3 = param_3;
        } while (0 < lVar2);
    }
    return param_3;
}



wchar_t * FUN_1405c6000(undefined8 param_1)

{
    wchar_t *pwVar1;
    int iVar2;

    iVar2 = (int)param_1;
    if (iVar2 == 0) {
        pwVar1 = (wchar_t *)FUN_14034bdd0(param_1,0x37f82);
        return pwVar1;
    }
    if (iVar2 != 1) {
        if (iVar2 != 2) {
            return L"Unknown pet command";
        }
        pwVar1 = (wchar_t *)FUN_14034bdd0(0,0x38ace);
        return pwVar1;
    }
    pwVar1 = (wchar_t *)FUN_14034bdd0(0,0x38acd);
    return pwVar1;
}



undefined8 * FUN_1405c6040(longlong param_1,undefined8 *param_2,longlong param_3)

{
    int iVar1;
    undefined8 *puVar2;
    uint *puVar3;
    double *pdVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    ulonglong uVar12;
    float fVar13;
    undefined local_48 [8];
    longlong local_40;

    param_2[2] = param_3;
    *(undefined4 *)(param_2 + 3) = 1;
    *(undefined4 *)(param_2 + 1) = 0xfffffffe;
    *param_2 = &PTR_FUN_140b569f0;
    if (*(ulonglong *)(*(longlong *)(param_3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_3 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_3);
    }
    puVar2 = *(undefined8 **)(param_3 + 0x10);
    uVar6 = FUN_14005c1b0(param_3,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(param_3);
    lVar11 = param_2[2];
    *(undefined4 *)(param_2 + 1) = uVar5;
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(param_2[2],puVar2,L"sprite",uVar6);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(param_2[2],puVar2,L"textString",uVar6);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(param_2[2],puVar2,L"countString",uVar6);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0x80);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"globalCooldown");
    lVar9 = -1;
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    fVar13 = *(float *)(param_1 + 0x84);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"cooldownPercent");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar4 = *(double **)(lVar11 + 0x10);
    *(undefined4 *)(pdVar4 + 1) = 3;
    *pdVar4 = (double)fVar13;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x88);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(param_2[2],puVar2,L"cooldownTime",uVar12 & 0xffffffff);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0x90);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"casting");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0x94);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"radarSweep");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0x98);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"popIcon");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0x9c);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"readyBlingSprite");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0xa0);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"blur");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0xa4);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"shake");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0xa8);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"shatterSprite");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    iVar1 = *(int *)(param_1 + 0xac);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"itemUnavailable");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    FUN_1401181f0(param_3,param_1 + 0xc0);
    FUN_1400fb540(param_2,L"textColor");
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + -0x10;
    FUN_1401181f0(param_3,param_1 + 0xd0);
    FUN_1400fb540(param_2,L"diffuse");
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + -0x10;
    lVar11 = param_2[2];
    fVar13 = *(float *)(param_1 + 0x84);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = param_2[2];
    lVar8 = FUN_14018f0e0(local_48,L"saturation");
    lVar8 = *(longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar8 + lVar9) != '\0');
        FUN_140058710(lVar11,lVar8,lVar9);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar4 = *(double **)(lVar11 + 0x10);
    *(undefined4 *)(pdVar4 + 1) = 3;
    *pdVar4 = (double)fVar13;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar6,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    uVar12 = (ulonglong)*(uint *)(param_1 + 0xf0);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0630(param_2[2],puVar2,L"lightOverlay",uVar12 & 0xffffffff);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    uVar12 = (ulonglong)*(uint *)(param_1 + 0xf4);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0630(param_2[2],puVar2,L"diffused",uVar12 & 0xffffffff);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    lVar11 = param_2[2];
    uVar12 = (ulonglong)*(uint *)(param_1 + 0xf8);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 1));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0630(param_2[2],puVar2,L"indicatorSprite",uVar12 & 0xffffffff);
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x10;
    return param_2;
}



void FUN_1405c6c80(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    double *pdVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    double local_res8;
    double local_18;
    undefined4 local_10;

    FUN_1400fabf0(param_2,L"sprite",param_1);
    FUN_1400fabf0(param_2,L"textString",param_1 + 0x20);
    FUN_1400fabf0(param_2,L"countString",param_1 + 0x40);
    uVar8 = 1;
    iVar4 = FUN_1400fb720(param_2,L"globalCooldown",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0x80) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"cooldownPercent",3);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        pdVar7 = (double *)(lVar2 + -0x10);
        if (iVar4 == 3) {
            LAB_1405c6d7e:
            uVar5 = SUB84(*pdVar7,0);
            uVar9 = (undefined4)((ulonglong)*pdVar7 >> 0x20);
        }
        else {
            if (iVar4 == 4) {
                iVar4 = FUN_14005ac80((longlong)*pdVar7 + 0x20,&local_res8);
                if (iVar4 != 0) {
                    local_10 = 3;
                    pdVar7 = &local_18;
                    local_18 = local_res8;
                    goto LAB_1405c6d7e;
                }
            }
            uVar5 = 0;
            uVar9 = 0;
        }
        *(float *)(param_1 + 0x84) = (float)(double)CONCAT44(uVar9,uVar5);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"cooldownTime",3);
    if (iVar4 < 0) goto LAB_1405c6e0a;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    iVar4 = *(int *)(lVar2 + -8);
    pdVar7 = (double *)(lVar2 + -0x10);
    if (iVar4 == 3) {
        LAB_1405c6df7:
        iVar4 = (int)*pdVar7;
    }
    else {
        if (iVar4 == 4) {
            iVar4 = FUN_14005ac80((longlong)*pdVar7 + 0x20,&local_res8);
            if (iVar4 != 0) {
                local_10 = 3;
                pdVar7 = &local_18;
                local_18 = local_res8;
                goto LAB_1405c6df7;
            }
        }
        iVar4 = 0;
    }
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x20;
    *(int *)(param_1 + 0x88) = iVar4;
    LAB_1405c6e0a:
    iVar4 = FUN_1400fb720(param_2,L"casting",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0x90) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"radarSweep",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0x94) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"popIcon",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0x98) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"readyBlingSprite",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0x9c) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"blur",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xa0) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"shake",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xa4) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"shatterSprite",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xa8) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"itemUnavailable",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xac) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    puVar6 = (undefined4 *)FUN_1401183e0(param_2,L"textColor");
    if (puVar6 != (undefined4 *)0x0) {
        uVar5 = puVar6[1];
        uVar9 = puVar6[2];
        uVar3 = puVar6[3];
        *(undefined4 *)(param_1 + 0xc0) = *puVar6;
        *(undefined4 *)(param_1 + 0xc4) = uVar5;
        *(undefined4 *)(param_1 + 200) = uVar9;
        *(undefined4 *)(param_1 + 0xcc) = uVar3;
    }
    puVar6 = (undefined4 *)FUN_1401183e0(param_2,L"diffuse");
    if (puVar6 != (undefined4 *)0x0) {
        uVar5 = puVar6[1];
        uVar9 = puVar6[2];
        uVar3 = puVar6[3];
        *(undefined4 *)(param_1 + 0xd0) = *puVar6;
        *(undefined4 *)(param_1 + 0xd4) = uVar5;
        *(undefined4 *)(param_1 + 0xd8) = uVar9;
        *(undefined4 *)(param_1 + 0xdc) = uVar3;
    }
    iVar4 = FUN_1400fb720(param_2,L"lightOverlay",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xf0) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"diffused",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar5 = 0;
        }
        else {
            uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xf4) = uVar5;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    iVar4 = FUN_1400fb720(param_2,L"indicatorSprite",1);
    if (-1 < iVar4) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        iVar4 = *(int *)(lVar2 + -8);
        if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(lVar2 + -0x10) == 0)))) {
            uVar8 = 0;
        }
        *(undefined4 *)(param_1 + 0xf8) = uVar8;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x20;
    }
    return;
}



undefined8 * FUN_1405c7150(undefined8 *param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 1) = param_2;
    *param_1 = &PTR_LAB_140b6dce0;
    FUN_1405cad90(param_1 + 2);
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x24] = 0;
    *(undefined8 *)((longlong)param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
    param_1[0x25] = 0;
    *(undefined8 *)((longlong)param_1 + 0x144) = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffffffffffff;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    *(undefined4 *)((longlong)param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x36) = 0x544e5645;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3f) = 9;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x204) = 3;
    *(undefined4 *)(param_1 + 0x41) = 1;
    return param_1;
}



void FUN_1405c72a0(longlong *param_1)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    bool bVar6;

    uVar4 = 0;
    *param_1 = (longlong)&PTR_LAB_140b6dce0;
    if ((DAT_140c65898 != 0) && (*(longlong **)(DAT_140c65898 + 0x14e8) == param_1)) {
        *(undefined8 *)(DAT_140c65898 + 0x14e8) = 0;
        uVar2 = (**(code **)(*param_1 + 8))();
        switch(uVar2) {
            case 1:
                if (*(int *)((longlong)param_1 + 0x144) == 0) {
                    (**(code **)(*param_1 + 0x48))(param_1,3);
                }
                else {
                    lVar3 = FUN_140584690();
                    if (lVar3 != 0) {
                        uVar5 = uVar4;
                        do {
                            if (*(ulonglong *)(lVar3 + 0x290) <= uVar4) {
                                if ((int)uVar5 != 0) {
                                    FUN_140399d40();
                                }
                                goto switchD_1405c7312_caseD_2;
                            }
                            iVar1 = *(int *)(param_1 + 0x28);
                            bVar6 = *(int *)(*(longlong *)(lVar3 + 0x288) + uVar4 * 8) == iVar1;
                            uVar5 = (ulonglong)bVar6;
                            uVar4 = uVar4 + 1;
                        } while (!bVar6);
                        FUN_140399d40(*(longlong *)(lVar3 + 0x288),iVar1);
                    }
                }
                break;
            case 2:
            case 0xc:
                break;
            case 7:
                FUN_14039dfb0();
                break;
            case 9:
                (**(code **)(*param_1 + 0x58))(param_1,3);
            default:
                (**(code **)(*param_1 + 0x50))(param_1,3);
                break;
            case 0xb:
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
        }
    }
    switchD_1405c7312_caseD_2:
    FUN_1403bdac0(DAT_140c65898);
    FUN_1405ca990();
    FUN_1405ca990();
    lVar3 = param_1[0x2b];
    if (lVar3 != 0) {
        if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
        }
        if (*(longlong *)(lVar3 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        }
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        FUN_14018b900(lVar3,0);
    }
    lVar3 = param_1[0x2c];
    if (lVar3 != 0) {
        if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
        }
        if (*(longlong *)(lVar3 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        }
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        FUN_14018b900(lVar3,0);
    }
    lVar3 = param_1[0x2d];
    if (lVar3 != 0) {
        if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
        }
        if (*(longlong *)(lVar3 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        }
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        FUN_14018b900(lVar3,0);
    }
    lVar3 = param_1[0x2e];
    if (lVar3 != 0) {
        if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
        }
        if (*(longlong *)(lVar3 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        }
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        FUN_14018b900(lVar3,0);
    }
    lVar3 = param_1[0x2f];
    if (lVar3 != 0) {
        if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
        }
        if (*(longlong *)(lVar3 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x20) = *(undefined8 *)(lVar3 + 0x20);
        }
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        FUN_14018b900(lVar3,0);
    }
    FUN_140195d70(param_1 + 0x36);
    *(undefined4 *)(param_1 + 0x36) = 0;
    if ((longlong *)param_1[0x38] != (longlong *)0x0) {
        *(longlong *)param_1[0x38] = param_1[0x39];
    }
    if ((longlong *)param_1[0x39] != (longlong *)0x0) {
        *(longlong *)param_1[0x39] = param_1[0x38];
    }
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    if (param_1[0x34] != 0) {
        FUN_1401a4a00(param_1 + 0x34);
    }
    if (param_1[0x33] != 0) {
        FUN_1401a4a00(param_1 + 0x33);
    }
    lVar3 = param_1[0x24];
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    if (param_1[0xf] != 0) {
        FUN_14018b900(param_1[0xf],0);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb],0);
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7],0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3],0);
    }
    return;
}



undefined8 FUN_1405c7620(longlong *param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    longlong *plVar6;

    lVar2 = param_1[0x2b];
    puVar5 = (undefined4 *)0x0;
    if (lVar2 != 0) {
        if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x2c];
    param_1[0x2b] = 0;
    if (lVar2 != 0) {
        if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x2d];
    param_1[0x2c] = 0;
    if (lVar2 != 0) {
        if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x2e];
    param_1[0x2d] = 0;
    if (lVar2 != 0) {
        if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x2f];
    param_1[0x2e] = 0;
    if (lVar2 != 0) {
        if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        FUN_14018b900(lVar2,0);
    }
    param_1[0x2f] = 0;
    (**(code **)(*param_1 + 0x90))(param_1,param_2,param_1 + 2);
    if (param_2 != 0) {
        *(undefined4 *)((longlong)param_1 + 0x114) = **(undefined4 **)(param_2 + 0x70);
        *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4);
        puVar3 = (undefined4 *)FUN_14018b280(0x40);
        puVar4 = puVar5;
        if (puVar3 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar3 + 2) = 0;
            *(undefined8 *)(puVar3 + 4) = 0;
            *(undefined8 *)(puVar3 + 8) = 0;
            *(undefined8 *)(puVar3 + 10) = 0;
            *puVar3 = 0;
            *(longlong **)(puVar3 + 2) = param_1;
            *(undefined **)(puVar3 + 4) = &LAB_1405cac9c;
            *(undefined8 *)(puVar3 + 6) = 0;
            *(undefined8 *)(puVar3 + 0xc) = 0;
            *(undefined8 *)(puVar3 + 0xe) = 0;
            puVar4 = puVar3;
        }
        lVar2 = DAT_140c65898;
        param_1[0x2b] = (longlong)puVar4;
        plVar6 = (longlong *)(lVar2 + 0x6cc8);
        if (*(longlong *)(puVar4 + 8) == 0) {
            *(longlong **)(puVar4 + 8) = plVar6;
            plVar1 = (longlong *)(puVar4 + 10);
            *plVar1 = *plVar6;
            *plVar6 = (longlong)puVar4;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x20) = plVar1;
            }
        }
        puVar3 = (undefined4 *)FUN_14018b280(0x40);
        puVar4 = puVar5;
        if (puVar3 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar3 + 2) = 0;
            *(undefined8 *)(puVar3 + 4) = 0;
            *(undefined8 *)(puVar3 + 8) = 0;
            *(undefined8 *)(puVar3 + 10) = 0;
            *puVar3 = 0;
            *(longlong **)(puVar3 + 2) = param_1;
            *(undefined **)(puVar3 + 4) = &LAB_1405cac94;
            *(undefined8 *)(puVar3 + 6) = 0;
            *(undefined8 *)(puVar3 + 0xc) = 0;
            *(undefined8 *)(puVar3 + 0xe) = 0;
            puVar4 = puVar3;
        }
        lVar2 = DAT_140c65898;
        param_1[0x2c] = (longlong)puVar4;
        plVar6 = (longlong *)(lVar2 + 0x6cd0);
        if (*(longlong *)(puVar4 + 8) == 0) {
            *(longlong **)(puVar4 + 8) = plVar6;
            plVar1 = (longlong *)(puVar4 + 10);
            *plVar1 = *plVar6;
            *plVar6 = (longlong)puVar4;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x20) = plVar1;
            }
        }
        puVar4 = (undefined4 *)FUN_14018b280(0x40);
        if (puVar4 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar4 + 2) = 0;
            *(undefined8 *)(puVar4 + 4) = 0;
            *(undefined8 *)(puVar4 + 8) = 0;
            *(undefined8 *)(puVar4 + 10) = 0;
            *puVar4 = 0;
            *(longlong **)(puVar4 + 2) = param_1;
            *(undefined **)(puVar4 + 4) = &LAB_1405caca4;
            *(undefined8 *)(puVar4 + 6) = 0;
            *(undefined8 *)(puVar4 + 0xc) = 0;
            *(undefined8 *)(puVar4 + 0xe) = 0;
            puVar5 = puVar4;
        }
        lVar2 = DAT_140c65898;
        param_1[0x2d] = (longlong)puVar5;
        plVar6 = (longlong *)(lVar2 + 0x6cd8);
        if (*(longlong *)(puVar5 + 8) == 0) {
            *(longlong **)(puVar5 + 8) = plVar6;
            plVar1 = (longlong *)(puVar5 + 10);
            *plVar1 = *plVar6;
            *plVar6 = (longlong)puVar5;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x20) = plVar1;
            }
        }
        return 0;
    }
    *(undefined8 *)((longlong)param_1 + 0x114) = 0;
    return 0x80004005;
}



undefined8 FUN_1405c7960(undefined8 param_1,int param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 != 0) {
        if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (DAT_140c65898 != 0)) {
            lVar1 = FUN_1405a5b90();
            if (lVar1 != 0) goto LAB_1405c799b;
        }
        lVar1 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar1 != 0) {
            LAB_1405c799b:
            uVar2 = FUN_1405c7620(param_1,lVar1);
            return uVar2;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1405c79c0(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    iVar1 = FUN_1407a1440(param_1,param_2,1);
    if (iVar1 != 0) {
        if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (DAT_140c65898 != 0)) {
            lVar2 = FUN_1405a5b90(DAT_140c65898,iVar1);
            if (lVar2 != 0) goto LAB_1405c7a05;
        }
        lVar2 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar2 != 0) {
            LAB_1405c7a05:
            uVar3 = FUN_1405c7620(param_1,lVar2);
            return uVar3;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1405c7a20(longlong param_1,int param_2)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;
    longlong local_res18;

    lVar4 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7350) + 0x20);
    local_res18 = lVar4;
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res18 == lVar4) || (param_2 < *(int *)(local_res18 + 0x20))) {
        local_res18 = lVar4;
    }
    if ((local_res18 != lVar4) && (lVar4 = *(longlong *)(local_res18 + 0x28), lVar4 != 0)) {
        *(int *)(param_1 + 0x14c) = param_2;
        psVar3 = *(short **)(lVar4 + 0x30);
        lVar4 = 0;
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
        FUN_14001c480(param_1 + 0x10,psVar3,psVar3 + lVar4);
        return 0;
    }
    return 0x80004005;
}



ulonglong FUN_1405c7ad0(longlong param_1,undefined8 param_2,int param_3)

{
    short sVar1;
    undefined4 uVar2;
    short *psVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong local_28;
    ulonglong local_20;

    lVar7 = FUN_1400b5df0(DAT_140c658f0,param_2,0);
    uVar10 = 0;
    if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x140) = 0;
        FUN_1405c7620(param_1,0);
        return 0x80004005;
    }
    *(int *)(param_1 + 0x140) = (int)param_2;
    psVar3 = *(short **)(lVar7 + 0x1e8);
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
        sVar1 = *psVar3;
        uVar8 = uVar10;
        while (sVar1 != 0) {
            uVar8 = uVar8 + 1;
            sVar1 = psVar3[uVar8];
        }
        FUN_14001c480(param_1 + 0x10,psVar3,psVar3 + uVar8);
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
    uVar8 = uVar10;
    if (((param_3 != 0) && (*(int *)(lVar7 + 0x1d4) != 0)) &&
        (lVar9 = FUN_1402085e0(), lVar4 = DAT_140c65898, uVar8 = 0, lVar9 != 0)) {
        *(undefined4 *)(param_1 + 0x144) = 1;
        uVar8 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar9 + 4),*(undefined8 *)(lVar4 + 0x78));
        if (uVar8 != 0) goto LAB_1405c7cb0;
    }
    lVar4 = DAT_140c65898;
    uVar2 = *(undefined4 *)(param_1 + 0x140);
    local_20 = 0;
    local_28 = 0;
    FUN_1405cabd0(DAT_140c65898 + 0xa0,uVar2,&local_28);
    FUN_1405cabd0(lVar4 + 0xb8,uVar2,&local_28);
    FUN_1405cabd0(lVar4 + 0x118,uVar2,&local_28);
    FUN_1405cabd0(lVar4 + 0x130,uVar2,&local_28);
    uVar5 = local_20;
    lVar4 = local_28;
    uVar11 = uVar10;
    if (local_20 == 0) {
        if ((*(int *)(lVar7 + 0x1bc) != 0) && (*(int *)(lVar7 + 0x11c) != 0)) {
            uVar8 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar7 + 0x11c),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
        }
    }
    else {
        do {
            lVar7 = *(longlong *)(lVar4 + uVar11 * 8);
            lVar9 = *(longlong *)(lVar7 + 0x50);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar7 + 0x40) + 0x9c;
            }
            uVar8 = uVar10;
            if (*(int *)(lVar9 + 0x80) != 0) {
                uVar8 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar9 + 0x80),
                                      *(undefined8 *)(DAT_140c65898 + 0x78));
            }
        } while ((uVar8 == 0) && (uVar11 = uVar11 + 1, uVar11 < uVar5));
    }
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    LAB_1405c7cb0:
    uVar6 = FUN_1405c7620(param_1,uVar8);
    if (uVar8 != 0) {
        uVar10 = (ulonglong)uVar6;
    }
    return uVar10;
}



undefined8
FUN_1405c7d00(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    bool bVar3;

    lVar1 = FUN_1403d90d0();
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    }
    if (param_4 == 0) {
        LAB_1405c7db4:
        uVar2 = 0x80004005;
    }
    else {
        if (lVar1 == 0) {
            LAB_1405c7d81:
            lVar1 = FUN_1407a0fd0(DAT_140c65b70,param_4);
            if (lVar1 == 0) goto LAB_1405c7db4;
        }
        else {
            if (*(longlong *)(DAT_140c65898 + 0x78) == lVar1) {
                bVar3 = true;
            }
            else {
                bVar3 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar1;
            }
            lVar1 = 0;
            if (bVar3) {
                lVar1 = DAT_140c65898;
            }
            if (lVar1 == 0) goto LAB_1405c7d81;
            lVar1 = FUN_1405a5b90(lVar1,param_4);
            if (lVar1 == 0) goto LAB_1405c7d81;
        }
        *(undefined4 *)(param_1 + 0x1f8) = param_2;
        *(undefined4 *)(param_1 + 0x1fc) = param_3;
        *(undefined4 *)(param_1 + 0x200) = param_5;
        uVar2 = FUN_1405c7620(param_1,lVar1);
    }
    return uVar2;
}



undefined8
FUN_1405c7de0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    wchar_t *pwVar4;
    ulonglong uVar5;

    FUN_1403d90d0(DAT_140c65898,param_5);
    *(undefined4 *)(param_1 + 0x1f8) = param_2;
    *(undefined4 *)(param_1 + 0x1fc) = param_3;
    *(undefined4 *)(param_1 + 0x200) = param_5;
    *(int *)(param_1 + 0x204) = param_4;
    if (param_4 == 0) {
        lVar2 = 0;
        pwVar4 = L"Icon_PowerSlash";
        do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
        } while (L"Icon_PowerSlash"[lVar1] != L'\0');
    }
    else if (param_4 == 1) {
        lVar2 = 0;
        pwVar4 = L"Icon_SkillMisc_UI_misc_dshbck";
        do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
        } while (L"Icon_SkillMisc_UI_misc_dshbck"[lVar1] != L'\0');
    }
    else {
        if (param_4 != 2) {
            return 0x80004005;
        }
        lVar2 = 0;
        pwVar4 = L"Icon_SkillMisc_UI_ss_recharge";
        do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
        } while (L"Icon_SkillMisc_UI_ss_recharge"[lVar1] != L'\0');
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar5 = *(longlong *)(param_1 + 0x20) - lVar1 >> 1;
    uVar3 = (longlong)(pwVar4 + lVar2) - (longlong)pwVar4 >> 1;
    if (uVar5 < uVar3) {
        FUN_1407db590(lVar1,pwVar4,uVar5 * 2);
        FUN_14001c310(param_1 + 0x10,
                      pwVar4 + (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 1),
                      pwVar4 + lVar2);
    }
    else {
        lVar2 = uVar3 * 2;
        FUN_1407db590(lVar1,pwVar4,lVar2);
        FUN_14001c2b0(param_1 + 0x10,*(longlong *)(param_1 + 0x18) + lVar2,
                      *(undefined8 *)(param_1 + 0x20));
    }
    return 0;
}



undefined8 FUN_1405c7f20(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    wchar_t *pwVar5;

    *(undefined4 *)(param_1 + 0x1f8) = param_2;
    *(undefined4 *)(param_1 + 0x1fc) = param_3;
    *(int *)(param_1 + 0x204) = param_4;
    if (param_4 == 0) {
        lVar2 = 0;
        pwVar5 = L"Icon_PowerSlash";
        do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
        } while (L"Icon_PowerSlash"[lVar1] != L'\0');
    }
    else if (param_4 == 1) {
        lVar2 = 0;
        pwVar5 = L"Icon_SkillMisc_UI_misc_dshbck";
        do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
        } while (L"Icon_SkillMisc_UI_misc_dshbck"[lVar1] != L'\0');
    }
    else {
        if (param_4 != 2) {
            return 0x80004005;
        }
        lVar2 = 0;
        pwVar5 = L"Icon_SkillMisc_UI_ss_recharge";
        do {
            lVar1 = lVar2 + 1;
            lVar2 = lVar2 + 1;
        } while (L"Icon_SkillMisc_UI_ss_recharge"[lVar1] != L'\0');
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar4 = *(longlong *)(param_1 + 0x20) - lVar1 >> 1;
    uVar3 = (longlong)(pwVar5 + lVar2) - (longlong)pwVar5 >> 1;
    if (uVar4 < uVar3) {
        FUN_1407db590(lVar1,pwVar5,uVar4 * 2);
        FUN_14001c310(param_1 + 0x10,
                      pwVar5 + (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 1),
                      pwVar5 + lVar2);
    }
    else {
        lVar2 = uVar3 * 2;
        FUN_1407db590(lVar1,pwVar5,lVar2);
        FUN_14001c2b0(param_1 + 0x10,*(longlong *)(param_1 + 0x18) + lVar2,
                      *(undefined8 *)(param_1 + 0x20));
    }
    return 0;
}



undefined8 FUN_1405c8040(longlong param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;

    lVar1 = FUN_14039df50();
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    }
    if (param_3 == 0) {
        return 0x80004005;
    }
    if (lVar1 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar1) {
            bVar3 = true;
        }
        else {
            bVar3 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar1;
        }
        lVar1 = 0;
        if (bVar3) {
            lVar1 = DAT_140c65898;
        }
        if ((lVar1 != 0) && (lVar2 = DAT_140c65898, lVar1 = FUN_1405a5b90(lVar1,param_3), lVar1 != 0))
            goto LAB_1405c80ca;
    }
    lVar1 = FUN_1407a0fd0(DAT_140c65b70,param_3);
    lVar2 = DAT_140c65898;
    if (lVar1 == 0) {
        return 0x80004005;
    }
    LAB_1405c80ca:
    *(undefined4 *)(param_1 + 0x1fc) = param_2;
    if ((((*(longlong *)(lVar2 + 0x78) == 0) || (lVar2 == 0)) ||
         (lVar1 = FUN_1405a5b90(lVar2,param_3), lVar1 == 0)) &&
        (lVar1 = FUN_1407a0fd0(DAT_140c65b70,param_3), lVar1 == 0)) {
        return 0;
    }
    FUN_1405c7620(param_1,lVar1);
    return 0;
}



void FUN_1405c83b0(longlong param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
    if ((*(int *)(param_1 + 8) == 7) && (lVar3 != 0)) {
        plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar3 + 0xc0));
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))();
            if (iVar1 != 0) {
                lVar3 = FUN_14039dfb0();
            }
        }
    }
    *(undefined4 *)(param_3 + 0x84) = 0;
    *(undefined4 *)(param_3 + 0x80) = 0;
    *(undefined4 *)(param_3 + 0x88) = 0;
    if (param_2 != 0) {
        FUN_1405650e0(lVar3,param_2,(undefined4 *)(param_3 + 0x84),(undefined4 *)(param_3 + 0x80),
                      (undefined4 *)(param_3 + 0x88));
    }
    return;
}



undefined8 FUN_1405c8450(longlong *param_1,undefined4 param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;

    uVar1 = (**(code **)(*param_1 + 8))();
    switch(uVar1) {
        case 1:
        case 3:
        case 6:
        case 7:
        case 9:
        case 10:
            if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                uVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)((longlong)param_1 + 0x114));
                return uVar3;
            }
            break;
        case 4:
        case 0xd:
            lVar2 = FUN_1403c1780(DAT_140c65898,*(undefined4 *)(param_1 + 0x23));
            if (lVar2 != 0) {
                uVar3 = FUN_1405a4b80(lVar2,param_2);
                return uVar3;
            }
    }
    return 0;
}



undefined8 FUN_1405c8520(longlong *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;

    uVar1 = (**(code **)(*param_1 + 8))();
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    return CONCAT44(uVar1,uVar2);
}



void FUN_1405c8ab0(longlong *param_1)

{
    int iVar1;
    longlong **pplVar2;
    int iVar3;
    longlong lVar4;

    pplVar2 = *(longlong ***)(param_1[0x2c] + 0x38);
    lVar4 = (**(code **)(*param_1 + 0x80))(param_1,1);
    if ((pplVar2 != (longlong **)0x0) && (lVar4 != 0)) {
        iVar1 = **(int **)(lVar4 + 0x70);
        iVar3 = (**(code **)(**pplVar2 + 8))();
        if ((iVar3 == iVar1) &&
            (((iVar1 = *(int *)(pplVar2 + 1), 1 < iVar1 - 7U && (iVar1 != 0)) && (iVar1 != 0xb9)))) {
            *(undefined4 *)(param_1 + 0x31) = 1;
        }
    }
    return;
}



void FUN_1405c8b30(longlong *param_1)

{
    int iVar1;
    longlong **pplVar2;
    int iVar3;
    longlong lVar4;

    pplVar2 = *(longlong ***)(param_1[0x2d] + 0x38);
    lVar4 = (**(code **)(*param_1 + 0x80))(param_1,1);
    if ((pplVar2 != (longlong **)0x0) && (lVar4 != 0)) {
        iVar1 = **(int **)(lVar4 + 0x70);
        iVar3 = (**(code **)(**pplVar2 + 8))();
        if ((iVar3 == iVar1) &&
            (((iVar1 = *(int *)(pplVar2 + 1), 1 < iVar1 - 7U && (iVar1 != 0)) && (iVar1 != 0xb9)))) {
            *(undefined4 *)((longlong)param_1 + 0x18c) = 1;
        }
    }
    return;
}



void FUN_1405c8bb0(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined *puVar6;
    ulonglong in_stack_ffffffffffffffd8;
    longlong *local_18;
    longlong local_10;

    uVar3 = (**(code **)(*param_1 + 8))();
    switch(uVar3) {
        case 1:
            lVar4 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x28),0);
            if ((lVar4 == 0) && (param_2[0x55] != 0)) {
                FUN_1400c5810();
            }
            lVar1 = DAT_140c65898;
            uVar3 = *(undefined4 *)(param_1 + 0x28);
            local_10 = 0;
            local_18 = (longlong *)0x0;
            FUN_1405cabd0(DAT_140c65898 + 0xa0,uVar3,&local_18);
            FUN_1405cabd0(lVar1 + 0xb8,uVar3,&local_18);
            FUN_1405cabd0(lVar1 + 0x118,uVar3,&local_18);
            FUN_1405cabd0(lVar1 + 0x130,uVar3,&local_18);
            plVar2 = local_18;
            if (local_10 == 0) {
                (**(code **)(*param_2 + 0x78))(param_2,&DAT_1409f35cc,2,lVar4,1);
            }
            else {
                (**(code **)(*param_2 + 0x78))
                        (param_2,&DAT_1409f35b4,3,*local_18,
                         in_stack_ffffffffffffffd8 & 0xffffffff00000000 |
                         (ulonglong)*(uint *)(*local_18 + 0x24));
            }
            if (plVar2 == (longlong *)0x0) {
                return;
            }
            // WARNING: Could not recover jumptable at 0x0001405c8cf9. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(plVar2[-2] + 8))(plVar2 + -2);
            return;
        case 2:
            lVar4 = FUN_140778230(*(undefined8 *)(DAT_140c65898 + 0x7350),
                                  *(undefined4 *)((longlong)param_1 + 0x14c));
            if (lVar4 != 0) {
                // WARNING: Could not recover jumptable at 0x0001405c8d45. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code **)(*param_2 + 0x78))(param_2,&DAT_1409f3684,8,*(undefined8 *)(lVar4 + 0x10));
                return;
            }
            break;
        case 7:
            FUN_14039dfb0();
            lVar4 = (**(code **)(*param_1 + 0x80))(param_1,1);
            if (lVar4 == 0) break;
            puVar6 = &DAT_1409f3654;
            goto LAB_1405c8d85;
        case 10:
            lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
            if (lVar4 == 0) {
                return;
            }
        default:
            lVar4 = (**(code **)(*param_1 + 0x80))(param_1,1);
            if (lVar4 != 0) {
                puVar6 = &DAT_1409f3614;
                LAB_1405c8d85:
                // WARNING: Could not recover jumptable at 0x0001405c8da3. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code **)(*param_2 + 0x78))(param_2,puVar6,4,lVar4);
                return;
            }
            break;
        case 0xb:
            lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
            if (lVar4 != 0) {
                lVar4 = *param_2;
                uVar5 = FUN_1405c6000(*(undefined4 *)((longlong)param_1 + 0x204));
                (**(code **)(lVar4 + 0x78))
                        (param_2,&DAT_1409f36c4,0xd,*(undefined4 *)((longlong)param_1 + 0x204),uVar5);
                return;
            }
            break;
        case 0xc:
            lVar4 = *param_2;
            uVar5 = FUN_1405c6000(*(undefined4 *)((longlong)param_1 + 0x204));
            (**(code **)(lVar4 + 0x78))
                    (param_2,&DAT_1409f3644,0xd,*(undefined4 *)((longlong)param_1 + 0x204),uVar5);
            return;
    }
    if (param_2[0x55] != 0) {
        FUN_1400c5810();
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001405c926e)
// WARNING: Removing unreachable block (ram,0x0001405c9271)
// WARNING: Removing unreachable block (ram,0x0001405c9278)
// WARNING: Removing unreachable block (ram,0x0001405c927a)

void FUN_1405c8ec0(longlong *param_1)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    undefined4 uVar4;
    int iVar5;
    uint uVar6;
    undefined8 uVar7;
    int *piVar8;
    longlong *plVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 uVar13;
    ulonglong uVar14;
    bool bVar15;
    undefined8 local_res8;
    ulonglong in_stack_ffffffffffffff48;
    uint uVar16;
    longlong *local_98;
    longlong local_90;
    longlong local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined8 local_74;
    undefined4 local_6c;
    undefined local_68 [8];
    longlong local_60;
    undefined local_48 [8];
    longlong local_40;

    uVar7 = (**(code **)(*param_1 + 0x80))(param_1,1);
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    param_1[0x20] = 0;
    *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    local_res8 = uVar7;
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar4 = (**(code **)(*param_1 + 8))();
    lVar12 = DAT_140c65898;
    uVar16 = (uint)(in_stack_ffffffffffffff48 >> 0x20);
    switch(uVar4) {
        case 1:
            if (*(int *)((longlong)param_1 + 0x144) == 0) {
                uVar4 = *(undefined4 *)(param_1 + 0x28);
                local_90 = 0;
                local_98 = (longlong *)0x0;
                FUN_1405cabd0(DAT_140c65898 + 0xa0,uVar4,&local_98);
                FUN_1405cabd0(lVar12 + 0xb8,uVar4,&local_98);
                FUN_1405cabd0(lVar12 + 0x118,uVar4,&local_98);
                FUN_1405cabd0(lVar12 + 0x130,uVar4,&local_98);
                if (local_90 != 0) {
                    lVar12 = *local_98;
                    *(undefined8 *)((longlong)param_1 + 0x134) = 1;
                    *(undefined4 *)(param_1 + 0x26) = 0;
                    *(undefined4 *)((longlong)param_1 + 0x13c) = 0x60;
                    param_1[0x25] = 0;
                    lVar11 = *(longlong *)(lVar12 + 0x50);
                    if (lVar11 == 0) {
                        lVar11 = *(longlong *)(lVar12 + 0x40) + 0x9c;
                    }
                    if ((*(int *)(lVar11 + 0x80) != 0) &&
                        (lVar11 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar11 + 0x80),
                                                *(undefined8 *)(DAT_140c65898 + 0x78)), lVar11 != 0)) {
                        lVar2 = *(longlong *)(lVar12 + 0x40);
                        if (((*(uint *)(lVar2 + 0x154) & 0x400) == 0) || (*(int *)(lVar2 + 0x180) == 0)) {
                            bVar15 = true;
                        }
                        else {
                            bVar15 = *(int *)(lVar12 + 0x20) == 0;
                        }
                        if (((*(uint *)(lVar2 + 0x154) & 0x200) != 0) || (bVar15)) {
                            if (param_1 == (longlong *)0xfffffffffffffee0) {
                                local_88 = 0;
                                local_74 = 0;
                                local_78 = 0;
                                local_6c = 0x60;
                                local_80 = 0;
                                FUN_14055bdc0();
                                FUN_1403986f0();
                                if (local_88 != 0) {
                                    (**(code **)(*(longlong *)(local_88 + -0x10) + 8))(local_88 + -0x10);
                                }
                            }
                            else {
                                FUN_14055bdc0(DAT_140c65898,*(undefined8 *)(DAT_140c65898 + 0x78),lVar11,1,
                                              in_stack_ffffffffffffff48 & 0xffffffff00000000);
                                FUN_1403986f0();
                            }
                        }
                    }
                    uVar4 = *(undefined4 *)(param_1 + 0x28);
                    iVar5 = FUN_140444550(DAT_140c658f0,uVar4);
                    if (iVar5 == 0) {
                        uVar6 = 0;
                    }
                    else {
                        uVar6 = FUN_1403ac840(DAT_140c65898 + 0xa0,0x303,uVar4);
                    }
                }
                uVar7 = local_res8;
                if (local_98 != (longlong *)0x0) {
                    (**(code **)(local_98[-2] + 8))();
                    uVar7 = local_res8;
                }
                LAB_1405c9231:
                if (uVar6 == 0) goto LAB_1405c9239;
                lVar12 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x28),0);
                if (((lVar12 != 0) && (psVar3 = *(short **)(lVar12 + 0x1e8), psVar3 != (short *)0x0)) &&
                    (*psVar3 != 0)) {
                    sVar1 = *psVar3;
                    while (sVar1 != 0) {
                        uVar10 = uVar10 + 1;
                        sVar1 = psVar3[uVar10];
                    }
                    FUN_14001c480(param_1 + 2,psVar3,psVar3 + uVar10);
                }
                if (uVar6 < 2) {
                    if ((undefined2 *)param_1[0xb] != (undefined2 *)param_1[0xc]) {
                        *(undefined2 *)param_1[0xb] = 0;
                        param_1[0xc] = param_1[0xb];
                    }
                    break;
                }
                plVar9 = (longlong *)FUN_14018efa0(local_48,&DAT_140b16074,uVar6);
                if (plVar9 != param_1 + 10) {
                    FUN_14001c480(param_1 + 10,plVar9[1],plVar9[2]);
                }
            }
            else {
                lVar12 = FUN_140584690();
                if ((lVar12 != 0) && (*(ulonglong *)(lVar12 + 0x290) != 0)) {
                    piVar8 = *(int **)(lVar12 + 0x288);
                    uVar14 = uVar10;
                    do {
                        if (*piVar8 == *(int *)(param_1 + 0x28)) {
                            uVar6 = (*(int **)(lVar12 + 0x288))[uVar14 * 2 + 1];
                            goto LAB_1405c9231;
                        }
                        uVar14 = uVar14 + 1;
                        piVar8 = piVar8 + 2;
                    } while (uVar14 < *(ulonglong *)(lVar12 + 0x290));
                }
                LAB_1405c9239:
                local_res8 = CONCAT44(local_res8._4_4_,0x19);
                *(undefined8 *)((longlong)param_1 + 0x134) = 1;
                param_1[0x27] = 1;
                param_1[0x25] = 0;
                *(undefined4 *)(param_1 + 0x26) = 0x19;
                FUN_1401c2e70(param_1 + 0x24,0,&local_res8);
                (**(code **)(*param_1 + 0x88))(param_1,uVar7,param_1 + 0x24);
                *(undefined4 *)((longlong)param_1 + 0xbc) = 1;
                plVar9 = (longlong *)FUN_14018efa0(local_68,&DAT_140b16504,0);
                local_40 = local_60;
                if (plVar9 != param_1 + 10) {
                    FUN_14001c480(param_1 + 10,plVar9[1],plVar9[2]);
                    local_40 = local_60;
                }
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            break;
        case 3:
        case 4:
        case 0xd:
            iVar5 = *(int *)(param_1 + 0x23);
            lVar11 = FUN_1403c1780(DAT_140c65898,iVar5);
            if (lVar11 == 0) {
                if (iVar5 == 0) {
                    return;
                }
                FUN_1405cacc0(param_1 + 2);
                return;
            }
            *(undefined8 *)((longlong)param_1 + 0x134) = 1;
            *(undefined4 *)(param_1 + 0x26) = 0;
            *(undefined4 *)((longlong)param_1 + 0x13c) = 0x60;
            param_1[0x25] = 0;
            FUN_14039a040(lVar12,*(undefined4 *)(lVar11 + 0x24),param_1 + 0x24,1,
                          in_stack_ffffffffffffff48 & 0xffffffff00000000,0);
            break;
        case 6:
        case 9:
            uVar13 = FUN_14055bdc0(DAT_140c65898,*(undefined8 *)(DAT_140c65898 + 0x78),uVar7,1,
                                   in_stack_ffffffffffffff48 & 0xffffffff00000000);
            lVar11 = DAT_140c65898;
            *(undefined8 *)((longlong)param_1 + 0x134) = 1;
            *(undefined4 *)(param_1 + 0x26) = 0;
            *(undefined4 *)((longlong)param_1 + 0x13c) = 0x60;
            param_1[0x25] = 0;
            lVar12 = *(longlong *)(lVar11 + 0x78);
            uVar4 = 1;
            goto LAB_1405c9509;
        case 7:
            lVar12 = FUN_14039dfb0();
            if ((lVar12 == 0) || ((*(int *)(lVar12 + 0x80) != 3 && (*(int *)(lVar12 + 0x80) != 9)))) {
                lVar12 = *(longlong *)(DAT_140c65898 + 0x78);
            }
            goto LAB_1405c94c5;
        case 10:
            lVar12 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x40));
            if (lVar12 == 0) {
                return;
            }
        LAB_1405c94c5:
            uVar13 = FUN_14055bdc0(DAT_140c65898,lVar12,uVar7,1,(ulonglong)uVar16 << 0x20);
            lVar11 = DAT_140c65898;
            *(undefined8 *)((longlong)param_1 + 0x134) = 1;
            *(undefined4 *)(param_1 + 0x26) = 0;
            *(undefined4 *)((longlong)param_1 + 0x13c) = 0x60;
            param_1[0x25] = 0;
            uVar4 = 0;
        LAB_1405c9509:
            FUN_1403986f0(lVar11 + 0x6d10,*(undefined4 *)((longlong)param_1 + 0x114),lVar12,uVar13,
                          lVar11 + 0x6d10,0,param_1 + 0x24,uVar4);
    }
    (**(code **)(*param_1 + 0x88))(param_1,uVar7,param_1 + 0x24);
    return;
}



void FUN_1405c9590(longlong param_1,int param_2)

{
    undefined4 uVar1;
    longlong **pplVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined8 uVar9;
    undefined local_res8 [8];
    longlong **local_28;
    longlong local_20;

    lVar7 = DAT_140c65898;
    uVar1 = *(undefined4 *)(param_1 + 0x140);
    local_20 = 0;
    local_28 = (longlong **)0x0;
    FUN_1405cabd0(DAT_140c65898 + 0xa0,uVar1,&local_28);
    FUN_1405cabd0(lVar7 + 0xb8,uVar1,&local_28);
    FUN_1405cabd0(lVar7 + 0x118,uVar1,&local_28);
    FUN_1405cabd0(lVar7 + 0x130,uVar1,&local_28);
    pplVar2 = local_28;
    if ((local_20 != 0) && (plVar6 = *local_28, plVar6 != (longlong *)0x0)) {
        if (*(longlong *)(DAT_140c65898 + 0x7188) == 0) {
            if (param_2 == 0) {
                iVar4 = FUN_1403998e0(DAT_140c65898,plVar6 + 4,0,0);
                if ((iVar4 != 0) && (iVar4 != 0x13d)) {
                    *(undefined4 *)(param_1 + 0x148) = 1;
                    uVar8 = FUN_14056a030(plVar6);
                    FUN_1403a12a0(DAT_140c65898,iVar4,uVar8,0);
                }
                uVar8 = *(undefined8 *)(DAT_140c65898 + 0x7368);
                uVar9 = (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
                FUN_140611dd0(uVar8,uVar9);
            }
        }
        else {
            lVar5 = FUN_14056a030(plVar6);
            lVar7 = *(longlong *)(DAT_140c65898 + 0x78);
            plVar6 = (longlong *)0x0;
            if ((((lVar7 != 0) &&
                  (plVar6 = (longlong *)FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar7 + 0x1600)),
                          plVar6 == (longlong *)0x0)) && (*(longlong *)(DAT_140c65898 + 0x78) == lVar7)) &&
                (lVar7 = FUN_14039df50(), plVar6 = (longlong *)0x0, lVar7 != 0)) {
                plVar6 = (longlong *)FUN_1404695e0(lVar7);
            }
            if (((plVar6 != (longlong *)0x0) && (lVar5 != 0)) &&
                (iVar4 = **(int **)(lVar5 + 0x70), iVar3 = (**(code **)(*plVar6 + 8))(plVar6),
                        iVar4 == iVar3)) {
                if (param_2 == 1) {
                    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7188) + 0x28))();
                }
                else if (param_2 == 0) {
                    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7188) + 0x20))();
                }
            }
        }
    }
    if (pplVar2 != (longlong **)0x0) {
        (*(code *)pplVar2[-2][1])(pplVar2 + -2);
    }
    return;
}



void FUN_1405c9b90(longlong *param_1,int param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    bool bVar9;
    undefined8 local_res8;

    plVar7 = (longlong *)0x0;
    plVar8 = param_1;
    if (1 < param_2 - 1U) {
        plVar8 = plVar7;
    }
    *(longlong **)(DAT_140c65898 + 0x14e8) = plVar8;
    uVar2 = (**(code **)(*param_1 + 8))();
    switch(uVar2) {
        case 1:
            if (*(int *)((longlong)param_1 + 0x144) == 0) {
                // WARNING: Could not recover jumptable at 0x0001405c9c84. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code **)(*param_1 + 0x48))(param_1,param_2);
                return;
            }
            lVar4 = FUN_140584690();
            if (lVar4 != 0) {
                plVar8 = plVar7;
                while (plVar7 < *(longlong **)(lVar4 + 0x290)) {
                    iVar3 = *(int *)(param_1 + 0x28);
                    bVar9 = *(int *)(*(longlong *)(lVar4 + 0x288) + (longlong)plVar7 * 8) == iVar3;
                    plVar8 = (longlong *)(ulonglong)bVar9;
                    plVar7 = (longlong *)((longlong)plVar7 + 1);
                    if (bVar9) {
                        FUN_140399d40(*(longlong *)(lVar4 + 0x288),iVar3);
                        return;
                    }
                }
                if ((int)plVar8 != 0) {
                    FUN_140399d40();
                    return;
                }
            }
            break;
        case 2:
            if (param_2 == 0) {
                FUN_1407784c0(*(undefined8 *)(DAT_140c65898 + 0x7350),
                              *(undefined4 *)((longlong)param_1 + 0x14c));
                return;
            }
            break;
        default:
            goto switchD_1405c9be5_caseD_3;
        case 6:
            if (param_2 == 0) {
                *(uint *)((longlong)param_1 + 0x1fc) = *(uint *)((longlong)param_1 + 0x1fc) % 0xc;
                lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
                iVar3 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
                lVar6 = DAT_140c65898;
                if (*(int *)(lVar4 + 0x108) != iVar3) {
                    *(int *)(lVar4 + 0x108) = iVar3;
                    uVar2 = FUN_14045a950(lVar4);
                    lVar6 = DAT_140c65898;
                    *(undefined4 *)(lVar4 + 0x10c) = uVar2;
                }
                uVar2 = *(undefined4 *)((longlong)param_1 + 0x114);
                lVar4 = *(longlong *)(lVar6 + 0x78);
                LAB_1405c9f37:
                iVar3 = FUN_14039ac90(lVar6,lVar4,*(undefined4 *)(param_1 + 0x3f),
                                      *(undefined4 *)((longlong)param_1 + 0x1fc),uVar2);
                if ((iVar3 != 0) && (iVar3 != 0x13d)) goto LAB_1405c9f55;
            }
            goto switchD_1405c9be5_caseD_3;
        case 7:
            lVar4 = FUN_14039dfb0();
            lVar6 = DAT_140c65898;
            if ((lVar4 == 0) || ((*(int *)(lVar4 + 0x80) != 3 && (*(int *)(lVar4 + 0x80) != 9)))) {
                lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
            }
            if (param_2 == 0) {
                uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x1fc) / 0xc;
                iVar3 = *(uint *)((longlong)param_1 + 0x1fc) + (int)uVar1 * -0xc;
                *(int *)((longlong)param_1 + 0x1fc) = iVar3;
                iVar3 = FUN_14039ac90(lVar6,lVar4,uVar1,iVar3,*(undefined4 *)((longlong)param_1 + 0x114));
                if ((iVar3 != 0) && (iVar3 != 0x13d)) {
                    *(undefined4 *)(param_1 + 0x29) = 1;
                    return;
                }
            }
            break;
        case 9:
            (**(code **)(*param_1 + 0x58))(param_1,param_2);
            goto switchD_1405c9be5_caseD_3;
        case 10:
            if (param_2 == 0) {
                *(uint *)((longlong)param_1 + 0x1fc) = *(uint *)((longlong)param_1 + 0x1fc) % 0xc;
                lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
                iVar3 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
                lVar6 = DAT_140c65898;
                if (*(int *)(lVar4 + 0x108) != iVar3) {
                    *(int *)(lVar4 + 0x108) = iVar3;
                    uVar2 = FUN_14045a950(lVar4);
                    lVar6 = DAT_140c65898;
                    *(undefined4 *)(lVar4 + 0x10c) = uVar2;
                }
                lVar4 = FUN_1403d90d0(lVar6,*(undefined4 *)(param_1 + 0x40));
                if (lVar4 != 0) {
                    uVar2 = *(undefined4 *)((longlong)param_1 + 0x114);
                    lVar6 = DAT_140c65898;
                    goto LAB_1405c9f37;
                }
                LAB_1405c9f55:
                *(undefined4 *)(param_1 + 0x29) = 1;
            }
        switchD_1405c9be5_caseD_3:
            (**(code **)(*param_1 + 0x50))(param_1,param_2);
            break;
        case 0xb:
            lVar4 = FUN_1403d90d0();
            if ((lVar4 != 0) && (param_2 == 0)) {
                uVar5 = *(uint *)((longlong)param_1 + 0x1fc) % 0xc;
                *(uint *)((longlong)param_1 + 0x1fc) = uVar5;
                local_res8 = CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x3f));
                FUN_1403f4900(DAT_140c65898,0x68a,&local_res8);
                return;
            }
            break;
        case 0xc:
            if (param_2 == 0) {
                uVar5 = *(uint *)((longlong)param_1 + 0x1fc) % 0xc;
                *(uint *)((longlong)param_1 + 0x1fc) = uVar5;
                local_res8 = CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x3f));
                FUN_1403f4900(DAT_140c65898,0x73,&local_res8);
                return;
            }
    }
    return;
}



void FUN_1405c9fb0(longlong param_1)

{
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    if ((*(longlong *)(param_1 + 0x1a0) == 0) && (*(longlong *)(param_1 + 0x1c0) == 0)) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &DAT_1405ca010;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x1b0,0xfa,local_28,4);
    }
    return;
}



undefined4 FUN_1405ca250(undefined8 param_1,int param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong lVar6;
    int *piVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    undefined4 local_res10 [2];

    if (param_2 != 0) {
        uVar8 = 0;
        if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
            plVar5 = *(longlong **)(DAT_140c65898 + 0xa90);
            uVar4 = uVar8;
            do {
                lVar6 = *plVar5;
                if ((lVar6 != 0) && (*(int *)(lVar6 + 0x40) == param_2)) {
                    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
                    if (lVar2 == 0) {
                        return 0;
                    }
                    if (*(int *)(lVar2 + 0x250) != 0) {
                        return 0;
                    }
                    uVar1 = *(undefined4 *)(lVar2 + 8);
                    iVar3 = FUN_1405a4ce0(lVar6,local_res10);
                    uVar9 = uVar1;
                    if (((iVar3 == 2) && (lVar6 = FUN_1405a4b80(lVar6,1), lVar6 != 0)) &&
                        ((ulonglong)*(uint *)(lVar6 + 0x28) != 0)) {
                        piVar7 = (int *)(*(longlong *)(lVar6 + 0x30) + 0x10);
                        while (uVar9 = local_res10[0], *piVar7 != 0x6f) {
                            uVar8 = uVar8 + 1;
                            piVar7 = piVar7 + 0x2a;
                            if (*(uint *)(lVar6 + 0x28) <= uVar8) {
                                return uVar1;
                            }
                        }
                    }
                    return uVar9;
                }
                uVar4 = uVar4 + 1;
                plVar5 = plVar5 + 1;
            } while (uVar4 < *(ulonglong *)(DAT_140c65898 + 0xa98));
        }
    }
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (plVar5 = (longlong *)
                 FUN_1403d90d0(DAT_140c65898,
                               *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0)),
                 plVar5 != (longlong *)0x0)) &&
        ((iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5), iVar3 != 0 &&
                                                         (lVar6 = FUN_14039dfb0(), lVar6 != 0)))) {
        lVar6 = FUN_14039dfb0();
        return *(undefined4 *)(lVar6 + 8);
    }
    return 0;
}



void FUN_1405ca390(longlong param_1,int param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong *plVar4;
    bool bVar5;
    longlong lVar6;
    uint uVar7;
    int iVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong lVar13;
    longlong lVar14;
    longlong *plVar15;
    ulonglong uVar16;
    ulonglong in_stack_ffffffffffffff18;
    ulonglong in_stack_ffffffffffffff20;
    longlong local_88;
    longlong lStack128;
    uint local_78;
    undefined4 uStack116;
    longlong lStack112;
    undefined4 local_68;
    uint local_58;
    undefined4 local_54;
    undefined8 local_50;
    undefined4 local_48;

    pplVar2 = (longlong **)(param_1 + 0x198);
    if ((*pplVar2 == (longlong *)0x0) && (param_2 != 0)) {
        uVar9 = 0;
        if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
            plVar15 = *(longlong **)(DAT_140c65898 + 0xa90);
            while ((lVar10 = *plVar15, lVar10 == 0 || (*(int *)(lVar10 + 0x40) != param_2))) {
                uVar9 = uVar9 + 1;
                plVar15 = plVar15 + 1;
                if (*(ulonglong *)(DAT_140c65898 + 0xa98) <= uVar9) {
                    return;
                }
            }
            lVar10 = FUN_1405a4b80(lVar10);
            if ((((lVar10 != 0) && (*(longlong *)(lVar10 + 8) != 0)) &&
                 (lVar3 = *(longlong *)(DAT_140c65898 + 0x78), lVar3 != 0)) &&
                ((*(int *)(lVar3 + 0x250) == 0 && (uVar7 = FUN_1405ca250(), uVar7 != 0)))) {
                bVar5 = false;
                local_78 = (uint)(*(int *)(*(longlong *)(lVar10 + 0x70) + 0x18) == 8);
                lStack112 = 0;
                uStack116 = *(undefined4 *)(*(longlong *)(lVar10 + 8) + 0x1c);
                local_68 = 0;
                FUN_1405663f0(DAT_140c65b70 + 0x650,&local_88,&local_78);
                lVar6 = lStack128;
                lVar13 = local_88;
                while (lVar13 != lVar6) {
                    lVar14 = *(longlong *)(lVar13 + 0x38);
                    if (((lVar14 != 0) && ((*(uint *)(lVar14 + 0x10) & 0x100) != 0)) &&
                        (lVar11 = FUN_140248f00(*(undefined4 *)(lVar14 + 0x18)), lVar11 != 0)) {
                        uVar12 = FUN_140248f00(*(undefined4 *)(lVar14 + 0x1c));
                        in_stack_ffffffffffffff20 = DAT_140c65898 + 0x6358;
                        in_stack_ffffffffffffff18 = 0;
                        FUN_140578770(in_stack_ffffffffffffff20,uVar7,lVar11,uVar12,0,in_stack_ffffffffffffff20)
                                ;
                        bVar5 = true;
                    }
                    lVar14 = *(longlong *)(lVar13 + 0x18);
                    if (lVar14 == 0) {
                        lVar14 = *(longlong *)(lVar13 + 8);
                        if (lVar13 == *(longlong *)(lVar14 + 0x18)) {
                            do {
                                lVar13 = lVar14;
                                lVar14 = *(longlong *)(lVar13 + 8);
                            } while (lVar13 == *(longlong *)(lVar14 + 0x18));
                        }
                        if (*(longlong *)(lVar13 + 0x18) != lVar14) {
                            lVar13 = lVar14;
                        }
                    }
                    else {
                        for (lVar11 = *(longlong *)(lVar14 + 0x10); lVar13 = lVar14, lVar11 != 0;
                             lVar11 = *(longlong *)(lVar11 + 0x10)) {
                            lVar14 = lVar11;
                        }
                    }
                }
                lVar13 = FUN_1403d90d0();
                if (lVar13 != 0) {
                    local_50 = 1;
                    local_58 = (uint)(*(int *)(*(longlong *)(lVar10 + 0x70) + 0x18) == 8);
                    local_48 = 0;
                    local_54 = *(undefined4 *)(*(longlong *)(lVar10 + 8) + 0x1c);
                    FUN_1405663f0(DAT_140c65b70 + 0x650,&local_78,&local_58);
                    lVar6 = lStack112;
                    local_88 = CONCAT44(uStack116,local_78);
                    lStack128 = lStack112;
                    lVar13 = local_88;
                    while (lVar13 != lVar6) {
                        lVar14 = *(longlong *)(lVar13 + 0x38);
                        if (((lVar14 != 0) && ((*(uint *)(lVar14 + 0x10) & 0x100) != 0)) &&
                            (lVar11 = FUN_140248f00(*(undefined4 *)(lVar14 + 0x18)), lVar11 != 0)) {
                            FUN_140248f00(*(undefined4 *)(lVar14 + 0x1c));
                            FUN_1403b4ec0();
                            in_stack_ffffffffffffff20 = DAT_140c65898 + 0x6358;
                            in_stack_ffffffffffffff18 = 0;
                            FUN_140578770();
                            bVar5 = true;
                        }
                        lVar14 = *(longlong *)(lVar13 + 0x18);
                        if (lVar14 == 0) {
                            lVar14 = *(longlong *)(lVar13 + 8);
                            if (lVar13 == *(longlong *)(lVar14 + 0x18)) {
                                do {
                                    lVar13 = lVar14;
                                    lVar14 = *(longlong *)(lVar13 + 8);
                                } while (lVar13 == *(longlong *)(lVar14 + 0x18));
                            }
                            if (*(longlong *)(lVar13 + 0x18) != lVar14) {
                                lVar13 = lVar14;
                            }
                        }
                        else {
                            for (lVar11 = *(longlong *)(lVar14 + 0x10); lVar13 = lVar14, lVar11 != 0;
                                 lVar11 = *(longlong *)(lVar11 + 0x10)) {
                                lVar14 = lVar11;
                            }
                        }
                    }
                }
                uVar9 = 0;
                if (*(longlong *)(lVar10 + 0x68) != 0) {
                    do {
                        lVar13 = *(longlong *)(*(longlong *)(lVar10 + 0x60) + uVar9 * 8);
                        if (((*(byte *)(lVar13 + 0x44) & 0x40) == 0) && ((*(byte *)(lVar13 + 0x58) & 2) != 0)) {
                            if (*(int *)(lVar13 + 0x50) != 0) {
                                in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
                                in_stack_ffffffffffffff18 = 0;
                                iVar8 = (**(code **)(*DAT_140c659a0 + 0x18))
                                        (DAT_140c659a0,lVar3,*(undefined4 *)(lVar13 + 0x50),0,0,
                                         in_stack_ffffffffffffff20);
                                if (iVar8 == 0) goto LAB_1405ca91c;
                            }
                            iVar8 = FUN_1403b5290();
                            if ((iVar8 == 0) ||
                                (iVar8 = FUN_1403bfb60(*(undefined8 *)(*(longlong *)(lVar10 + 0x60) + uVar9 * 8),
                                                       *(undefined4 *)(param_1 + 0x114)), iVar8 != 0)) {
                                plVar15 = *(longlong **)(param_1 + 0x1a0);
                                bVar5 = true;
                                uVar16 = 0;
                                if (plVar15 != (longlong *)0x0) {
                                    do {
                                        plVar4 = (longlong *)plVar15[1];
                                        pplVar1 = (longlong **)(plVar15 + 1);
                                        if ((((int *)plVar15[6] != (int *)0x0) &&
                                             (*(int *)(plVar15 + 4) == **(int **)(lVar10 + 0x70))) &&
                                            (*(int *)plVar15[6] == **(int **)(*(longlong *)(lVar10 + 0x60) + uVar9 * 8)))
                                        {
                                            if ((longlong **)*plVar15 != (longlong **)0x0) {
                                                *(longlong **)*plVar15 = plVar4;
                                            }
                                            if (*pplVar1 != (longlong *)0x0) {
                                                **pplVar1 = *plVar15;
                                            }
                                            *pplVar1 = (longlong *)0x0;
                                            *plVar15 = (longlong)pplVar2;
                                            *pplVar1 = *pplVar2;
                                            *pplVar2 = plVar15;
                                            if (*pplVar1 != (longlong *)0x0) {
                                                **pplVar1 = (longlong)pplVar1;
                                            }
                                            uVar16 = 1;
                                        }
                                        plVar15 = plVar4;
                                    } while (plVar4 != (longlong *)0x0);
                                    if ((int)uVar16 != 0) goto LAB_1405ca91c;
                                }
                                lVar13 = FUN_14018b280(0x140,0);
                                if (lVar13 != 0) {
                                    in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
                                    in_stack_ffffffffffffff18 =
                                            in_stack_ffffffffffffff18 & 0xffffffff00000000 | (ulonglong)uVar7;
                                    FUN_140549b90(lVar13,**(undefined4 **)(lVar10 + 0x70),
                                                  *(undefined8 *)(*(longlong *)(lVar10 + 0x60) + uVar9 * 8),uVar7,
                                                  in_stack_ffffffffffffff18,in_stack_ffffffffffffff20,pplVar2,1,0,
                                                  *(undefined4 *)(*(longlong *)(lVar10 + 8) + 0x6c),0,param_1);
                                }
                            }
                        }
                        LAB_1405ca91c:
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < *(ulonglong *)(lVar10 + 0x68));
                }
                lVar3 = DAT_140c65898;
                if (bVar5) {
                    *(undefined4 *)(DAT_140c65898 + 0x6360) = 1;
                    FUN_14039dd70(lVar3,lVar10,0xffffffff,1);
                }
            }
        }
    }
    return;
}



void FUN_1405ca990(ulonglong param_1,longlong **param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    ulonglong local_res8;

    plVar1 = *param_2;
    local_res8 = param_1;
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)plVar2[1];
        if (plVar2[0x20] != 0) {
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)plVar2[6];
            FUN_1400ee810(plVar2[0x20] + 0x240,&local_res8);
        }
        if ((longlong *)*plVar2 != (longlong *)0x0) {
            *(longlong *)*plVar2 = plVar2[1];
        }
        if ((longlong *)plVar2[1] != (longlong *)0x0) {
            *(longlong *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[0x20] = 0;
        uVar3 = DAT_140c636a8;
        if (*(int *)((longlong)plVar2 + 0x24) != 2) {
            *(undefined4 *)((longlong)plVar2 + 0x24) = 2;
            *(undefined4 *)((longlong)plVar2 + 0x4c) = uVar3;
        }
    }
    return;
}



void FUN_1405caa50(longlong param_1,undefined8 param_2)

{
    FUN_1405caa90(param_1,param_2,param_1 + 0x1a0);
    FUN_1405caa90();
    return;
}



void FUN_1405caa90(ulonglong param_1,longlong param_2,longlong **param_3)

{
    uint *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined4 uVar5;
    int iVar6;
    ulonglong local_res8;

    plVar2 = *param_3;
    local_res8 = param_1;
    do {
        while( true ) {
            plVar4 = plVar2;
            if (plVar4 == (longlong *)0x0) {
                return;
            }
            puVar1 = (uint *)plVar4[6];
            plVar2 = (longlong *)plVar4[1];
            if ((*(byte *)(puVar1 + 0x16) & 0xc) != 0) break;
            lVar3 = plVar4[0x20];
            if (lVar3 != 0) {
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*puVar1;
                LAB_1405cab5e:
                FUN_1400ee810(lVar3 + 0x240,&local_res8);
            }
            LAB_1405cab68:
            if ((longlong *)*plVar4 != (longlong *)0x0) {
                *(longlong *)*plVar4 = plVar4[1];
            }
            if ((longlong *)plVar4[1] != (longlong *)0x0) {
                *(longlong *)plVar4[1] = *plVar4;
            }
            plVar4[0x20] = 0;
            plVar4[1] = 0;
            *plVar4 = 0;
            uVar5 = DAT_140c636a8;
            if (*(int *)((longlong)plVar4 + 0x24) != 2) {
                *(undefined4 *)((longlong)plVar4 + 0x24) = 2;
                *(undefined4 *)((longlong)plVar4 + 0x4c) = uVar5;
            }
        }
        if (((param_2 == 0) ||
             ((((*(byte *)(puVar1 + 0x12) & 1) == 0 && (puVar1 != (uint *)0x0)) &&
               (*(int *)(plVar4 + 0xf) == *(int *)(param_2 + 0x154))))) ||
            (iVar6 = FUN_140548bd0(param_2,plVar4), iVar6 < 0)) {
            lVar3 = plVar4[0x20];
            if (lVar3 != 0) {
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)plVar4[6];
                goto LAB_1405cab5e;
            }
            goto LAB_1405cab68;
        }
        if ((*(int *)((longlong)plVar4 + 0x24) != 2) && (*(int *)(plVar4 + 0x10) != 0)) {
            if (*(int *)((longlong)plVar4 + 0x24) == 1) {
                *(undefined4 *)((longlong)plVar4 + 0x4c) = DAT_140c636a8;
            }
            *(undefined4 *)(plVar4 + 0x10) = 0;
        }
    } while( true );
}



void FUN_1405cabd0(longlong param_1,int param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
            if ((lVar2 != 0) && (**(int **)(lVar2 + 0x40) == param_2)) {
                lVar3 = param_3[1];
                lVar1 = lVar3 + 1;
                lVar4 = FUN_14018db00(*param_3,lVar1,8);
                *(longlong *)(lVar4 + lVar3 * 8) = lVar2;
                if (*param_3 != lVar4) {
                    FUN_1407db590(lVar4,*param_3,param_3[1] << 3);
                    lVar2 = *param_3;
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    *param_3 = lVar4;
                }
                param_3[1] = lVar1;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1405cacc0(longlong param_1)

{
    FUN_14001c480(param_1,&DAT_140b7b704,&DAT_140b7b704);
    FUN_14001c480(param_1 + 0x20,&DAT_140b7b704,&DAT_140b7b704);
    FUN_14001c480(param_1 + 0x40,&DAT_140b7b704,&DAT_140b7b704);
    FUN_14001c480(param_1 + 0x60,&DAT_140b7b704,&DAT_140b7b704);
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
    *(undefined4 *)(param_1 + 200) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined (*) [16])(param_1 + 0xd0) = ZEXT816(0);
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    return;
}



longlong FUN_1405cad90(longlong param_1)

{
    undefined2 *puVar1;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 8) = puVar1;
    *(undefined2 **)(param_1 + 0x10) = puVar1;
    *(undefined2 **)(param_1 + 0x18) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
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
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x68) = puVar1;
    *(undefined2 **)(param_1 + 0x70) = puVar1;
    *(undefined2 **)(param_1 + 0x78) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    FUN_1405cacc0(param_1);
    return param_1;
}


