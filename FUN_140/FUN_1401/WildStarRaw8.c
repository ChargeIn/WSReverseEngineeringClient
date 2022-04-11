//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140154180(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong * ) * *(longlong * *)(param_1 + 0x10);
    if (plVar2 != *(longlong * *)(param_1 + 0x10)) {
        do {
            if ((longlong *) plVar2[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) plVar2[2] + 8))();
            }
            plVar2 = (longlong * ) * plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x10));
    }
    plVar2 = (longlong * ) * *(longlong * *)(param_1 + 0x10);
    if (plVar2 != *(longlong * *)(param_1 + 0x10)) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong * ) * (longlong * )(param_1 + 0x10));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x10) = *(undefined8 * )(param_1 + 0x10);
    *(longlong * )(*(longlong * )(param_1 + 0x10) + 8) = *(longlong * )(param_1 + 0x10);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    return;
}


undefined8 *FUN_140154210(undefined8 *param_1, undefined8 param_2) {
    undefined *puVar1;
    undefined8 uVar2;

    *param_1 = param_2;
    puVar1 = (undefined *) FUN_14018b280(0x48);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 * )(param_1[2] + 8) = 0;
    *(undefined8 * )(param_1[2] + 0x10) = param_1[2];
    *(undefined8 * )(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *) FUN_14018b280(0x48, 0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 * )(param_1[6] + 8) = 0;
    *(undefined8 * )(param_1[6] + 0x10) = param_1[6];
    *(undefined8 * )(param_1[6] + 0x18) = param_1[6];
    uVar2 = FUN_14018b280(0x18, 0);
    param_1[10] = uVar2;
    *(undefined8 *) uVar2 = uVar2;
    *(undefined8 * )(param_1[10] + 8) = param_1[10];
    return param_1;
}


void FUN_1401542b0(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;

    FUN_140154390();
    plVar2 = (longlong * ) * *(longlong * *)(param_1 + 0x50);
    if (plVar2 != *(longlong * *)(param_1 + 0x50)) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong * ) * (longlong * )(param_1 + 0x50));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x50) = *(undefined8 * )(param_1 + 0x50);
    *(longlong * )(*(longlong * )(param_1 + 0x50) + 8) = *(longlong * )(param_1 + 0x50);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x50), 0);
    if (*(longlong * )(param_1 + 0x38) != 0) {
        FUN_140044ca0(param_1 + 0x28, *(undefined8 * )(*(longlong * )(param_1 + 0x30) + 8));
        *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10) = *(longlong * )(param_1 + 0x30);
        *(undefined8 * )(*(longlong * )(param_1 + 0x30) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x18) = *(longlong * )(param_1 + 0x30);
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    if (*(longlong * )(param_1 + 0x18) != 0) {
        FUN_140044ca0(param_1 + 8, *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 8));
        *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x10) = *(longlong * )(param_1 + 0x10);
        *(undefined8 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(*(longlong * )(param_1 + 0x10) + 0x18) = *(longlong * )(param_1 + 0x10);
        *(undefined8 * )(param_1 + 0x18) = 0;
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    return;
}


void FUN_140154390(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x50);
    if (plVar3 != *(longlong * *)(param_1 + 0x50)) {
        do {
            lVar1 = plVar3[2];
            if (lVar1 != 0) {
                FUN_140154180(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x50));
    }
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x50);
    if (plVar3 != *(longlong * *)(param_1 + 0x50)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x50));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x50) = *(undefined8 * )(param_1 + 0x50);
    *(longlong * )(*(longlong * )(param_1 + 0x50) + 8) = *(longlong * )(param_1 + 0x50);
    return;
}


void FUN_140154420(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong local_res8;
    longlong local_res10;

    lVar6 = 0;
    sVar3 = *param_2;
    lVar5 = lVar6;
    while (sVar3 != 0) {
        lVar5 = lVar5 + 1;
        sVar3 = param_2[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(lVar6, param_2, lVar5);
    puVar2 = (undefined2 * )(lVar5 + lVar6);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    local_res10 = *(longlong * )(param_1 + 0x10);
    lVar5 = *(longlong * )(local_res10 + 8);
    local_res8 = local_res10;
    lVar8 = lVar5;
    lVar7 = local_res10;
    if (lVar5 != 0) {
        do {
            iVar4 = FUN_1400454d0(lVar6, puVar2, *(undefined8 * )(lVar8 + 0x28), *(undefined8 * )(lVar8 + 0x30)
            );
            if (iVar4 < 0) {
                lVar7 = *(longlong * )(lVar8 + 0x10);
                local_res8 = lVar8;
            } else {
                lVar7 = *(longlong * )(lVar8 + 0x18);
            }
            lVar8 = lVar7;
        } while (lVar7 != 0);
        while (lVar7 = local_res10, lVar5 != 0) {
            iVar4 = FUN_1400454d0(*(undefined8 * )(lVar5 + 0x28), *(undefined8 * )(lVar5 + 0x30), lVar6, puVar2
            );
            if (iVar4 < 0) {
                lVar5 = *(longlong * )(lVar5 + 0x18);
            } else {
                local_res10 = lVar5;
                lVar5 = *(longlong * )(lVar5 + 0x10);
            }
        }
    }
    while (lVar7 != local_res8) {
        lVar5 = *(longlong * )(lVar7 + 0x18);
        if (lVar5 == 0) {
            lVar5 = *(longlong * )(lVar7 + 8);
            if (lVar7 == *(longlong * )(lVar5 + 0x18)) {
                do {
                    lVar7 = lVar5;
                    lVar5 = *(longlong * )(lVar7 + 8);
                } while (lVar7 == *(longlong * )(lVar5 + 0x18));
            }
            if (*(longlong * )(lVar7 + 0x18) != lVar5) {
                lVar7 = lVar5;
            }
        } else {
            for (lVar8 = *(longlong * )(lVar5 + 0x10); lVar7 = lVar5, lVar8 != 0;
                 lVar8 = *(longlong * )(lVar8 + 0x10)) {
                lVar5 = lVar8;
            }
        }
    }
    FUN_140155240(param_1 + 8, &local_res10, &local_res8);
    if (lVar6 != 0) {
        FUN_14018b900(lVar6, 0);
    }
    return;
}


undefined8 FUN_1401545c0(longlong param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong local_res8;

    lVar7 = 0;
    sVar3 = *param_2;
    lVar6 = lVar7;
    while (sVar3 != 0) {
        lVar6 = lVar6 + 1;
        sVar3 = param_2[lVar6];
    }
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar7 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(lVar7, param_2, lVar6);
    puVar2 = (undefined2 * )(lVar6 + lVar7);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar6 = *(longlong * )(param_1 + 0x10);
    local_res8 = lVar6;
    lVar4 = *(longlong * )(lVar6 + 8);
    while (lVar4 != 0) {
        iVar5 = FUN_1400454d0(*(undefined8 * )(lVar4 + 0x28), *(undefined8 * )(lVar4 + 0x30), lVar7, puVar2);
        if (iVar5 < 0) {
            lVar4 = *(longlong * )(lVar4 + 0x18);
        } else {
            local_res8 = lVar4;
            lVar4 = *(longlong * )(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar6) ||
        (iVar5 = FUN_1400454d0(lVar7, puVar2, *(undefined8 * )(local_res8 + 0x28),
                               *(undefined8 * )(local_res8 + 0x30)), iVar5 < 0)) {
        local_res8 = lVar6;
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7, 0);
    }
    if (local_res8 == *(longlong * )(param_1 + 0x10)) {
        uVar8 = 0;
    } else {
        uVar8 = *(undefined8 * )(local_res8 + 0x40);
    }
    return uVar8;
}


void FUN_1401546e0(longlong param_1, short *param_2, longlong param_3, undefined8 param_4,
                   longlong *param_5) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *local_res8;
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    lVar5 = 0;
    local_res8 = (longlong *) 0x0;
    if (param_3 != 0) {
        (**(code * *)(*DAT_140c65670 + 0xa0))(DAT_140c65670, param_3, &local_res8);
    }
    lVar3 = FUN_14018b280(0x90, 0);
    lVar4 = lVar5;
    if (lVar3 != 0) {
        lVar4 = FUN_140152aa0(lVar3, param_2, param_3, param_1, local_res8, param_4);
    }
    *param_5 = lVar4;
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
        local_res8 = (longlong *) 0x0;
    }
    local_40 = 0;
    local_30 = 0;
    sVar2 = *param_2;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = param_2[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_40 = FUN_14018b280(lVar4, 0);
        local_30 = lVar4 + local_40;
    }
    lVar4 = local_40;
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_40, param_2, lVar5);
    local_38 = (undefined2 * )(lVar5 + lVar4);
    if (local_38 != (undefined2 *) 0x0) {
        *local_38 = 0;
    }
    lVar5 = *param_5;
    plVar6 = (longlong *) FUN_1400eda60(param_1 + 8, local_48);
    *plVar6 = lVar5;
    if (lVar4 != 0) {
        FUN_14018b900(lVar4, 0);
    }
    return;
}


void FUN_140154850(longlong param_1, short *param_2, longlong param_3, undefined8 param_4,
                   longlong *param_5) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *local_res8;
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    lVar5 = 0;
    local_res8 = (longlong *) 0x0;
    if (param_3 != 0) {
        (**(code * *)(*DAT_140c65670 + 0xa0))(DAT_140c65670, param_3, &local_res8);
    }
    lVar3 = FUN_14018b280(0x90, 0);
    lVar4 = lVar5;
    if (lVar3 != 0) {
        lVar4 = FUN_140152aa0(lVar3, param_2, param_3, param_1, local_res8, param_4);
    }
    *param_5 = lVar4;
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
        local_res8 = (longlong *) 0x0;
    }
    local_40 = 0;
    local_30 = 0;
    sVar2 = *param_2;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = param_2[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_40 = FUN_14018b280(lVar4, 0);
        local_30 = lVar4 + local_40;
    }
    lVar4 = local_40;
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_40, param_2, lVar5);
    local_38 = (undefined2 * )(lVar5 + lVar4);
    if (local_38 != (undefined2 *) 0x0) {
        *local_38 = 0;
    }
    lVar5 = *param_5;
    plVar6 = (longlong *) FUN_1400eda60(param_1 + 0x28, local_48);
    *plVar6 = lVar5;
    if (lVar4 != 0) {
        FUN_14018b900(lVar4, 0);
    }
    return;
}


void FUN_1401549c0(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    char cVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *local_res18[2];

    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    lVar6 = 0;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    local_res18[0] = (longlong *) 0x0;
    cVar2 = FUN_1400e27b0(DAT_140c63650, param_2, local_res18);
    plVar1 = local_res18[0];
    if (cVar2 != '\0') {
        lVar4 = FUN_14018b280(0x18);
        if (lVar4 != 0) {
            uVar5 = (**(code * *)(*plVar1 + 0x10))(plVar1);
            lVar6 = FUN_1401538f0(lVar4, param_1, uVar5);
        }
        lVar4 = *(longlong * )(param_1 + 0x50);
        plVar7 = (longlong *) FUN_14018b280(0x18);
        if (plVar7 + 2 != (longlong *) 0x0) {
            plVar7[2] = lVar6;
        }
        *plVar7 = lVar4;
        plVar7[1] = *(longlong * )(lVar4 + 8);
        **(longlong * **)(lVar4 + 8) = plVar7;
        *(longlong * *)(lVar4 + 8) = plVar7;
    }
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 8))(plVar1);
    }
    if (puVar3 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar3, 0);
        return;
    }
    return;
}


undefined8 FUN_140154ac0(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1, "Apollo.ApolloCursor");
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "__index", 7);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar3 + -0x20, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c57bd0;
    puVar6 = PTR_DAT_140c57bd0;
    while (puVar6 != (undefined *) 0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1, 0);
        *(undefined * *)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong * *)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 * )(plVar2 + 1) = 6;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1, puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1, uVar4, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        lVar3 = *(longlong * )(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(longlong * )(param_1 + 0x10) = lVar3 + -0x10;
    FUN_140057020(param_1, "ApolloCursor", &PTR_DAT_140b5c700);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return 0;
}


undefined4 FUN_140154c60(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *) 0x0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    (**(code * *) * param_2)(param_2);
    puVar2 = (undefined8 *) FUN_140059170(param_1, 8);
    *puVar2 = param_2;
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_18 = FUN_140062650(param_1, "Apollo.ApolloCursor", 0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_140154d10(void) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_1401551b0();
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 8))(plVar1);
    }
    return 0;
}


undefined4 FUN_140154d40(longlong param_1) {
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined local_28[8];
    longlong local_20;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar4;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar1 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                if (lVar1 != 0) {
                    uVar3 = FUN_140056bb0(param_1, 1);
                    FUN_14018f2d0(local_28, uVar3);
                    if (local_20 != 0) {
                        uVar4 = FUN_1401545c0(*(undefined8 * )(lVar1 + 0x168), local_20);
                    }
                    uVar2 = FUN_140154c60(param_1, uVar4);
                    if (local_20 != 0) {
                        FUN_14018b900(local_20, 0);
                    }
                    return uVar2;
                }
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140154e20(longlong param_1) {
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

    plVar3 = *(longlong * *)(param_1 + 0x18);
    plVar4 = *(longlong * *)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *) (plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_140154e63:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *) (plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong * )(*plVar6 + 0x10);
            } else {
                lVar7 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 * )(plVar4 + 1) = 5;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong * )(param_1 + 0x20);
                local_18 = FUN_140062650(param_1, "Apollo.ApolloCursor", 0x13);
                local_10 = 4;
                FUN_14005e8e0(param_1, lVar7 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong * )(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 * )(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 * )(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 * )(lVar7 + -0x10), puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 * *)(param_1 + 0x10) = puVar1;
                *(undefined4 * )(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *) puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_140154f47;
            }
        }
    } else if (*(int *) (plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140154e63;
    }
    *(undefined4 *) plVar4 = 0;
    *(undefined4 * )(plVar4 + 1) = 1;
    LAB_140154f47:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140154f60(longlong param_1) {
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    ulonglong **ppuVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;

    plVar3 = (longlong *) FUN_1400580e0(param_1, 1);
    lVar11 = DAT_140c63650;
    if (*(int *) (plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    } else {
        if (*(int *) (plVar3 + 1) != 7) goto LAB_1401550bd;
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *) FUN_1400580e0(param_1, 1);
        iVar1 = *(int *) (plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong * )(*plVar3 + 0x10);
        } else {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar1 * 8);
        }
        lVar11 = DAT_140c63650;
        if (lVar4 != 0) {
            plVar3 = *(longlong * *)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 * )(plVar3 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar11 = *(longlong * )(param_1 + 0x20);
            local_28 = FUN_140062650(param_1, "Apollo.ApolloCursor", 0x13);
            local_20 = 4;
            FUN_14005e8e0(param_1, lVar11 + 0xa0, &local_28, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1, 0xffffffff);
            uVar6 = FUN_1400586a0(param_1, 0xfffffffe);
            lVar11 = DAT_140c63650;
            cVar2 = FUN_1400e2100(DAT_140c63650, uVar6, uVar5);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                ppuVar7 = (ulonglong **) FUN_1400580e0(param_1, 1);
                if (*(int *) (ppuVar7 + 1) == 2) {
                    return **ppuVar7;
                }
                if (*(int *) (ppuVar7 + 1) != 7) {
                    return _DAT_00000000;
                }
                return (*ppuVar7)[6];
            }
        }
    }
    LAB_1401550bd:
    puVar8 = (undefined8 *) FUN_1400580e0(param_1, 1);
    if ((puVar8 != &DAT_140a12138) && (*(int *) (puVar8 + 1) - 3U < 2)) {
        uVar9 = 0;
        if (*(ulonglong * )(lVar11 + 0x300) != 0) {
            uVar10 = uVar9;
            do {
                if (*(longlong * )(*(longlong * )(*(longlong * )(lVar11 + 0x2f8) + uVar10 * 8) + 400) ==
                    param_1) {
                    lVar11 = *(longlong * )(*(longlong * )(lVar11 + 0x2f8) + uVar10 * 8);
                    if (lVar11 == 0) {
                        return 0;
                    }
                    uVar5 = FUN_140056bb0(param_1, 1);
                    FUN_14018f2d0(&local_28, uVar5);
                    lVar4 = CONCAT44(uStack28, local_20);
                    if (lVar4 != 0) {
                        uVar9 = FUN_1401545c0(*(undefined8 * )(lVar11 + 0x168), lVar4);
                        FUN_14018b900(lVar4, 0);
                    }
                    return uVar9;
                }
                uVar10 = (ulonglong)((int) uVar10 + 1);
            } while (uVar10 < *(ulonglong * )(lVar11 + 0x300));
        }
        return 0;
    }
    return 0;
}


longlong FUN_1401551b0(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_140154f60();
    if (lVar1 == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "ApolloCursor", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


void FUN_140155240(longlong param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong * )(param_1 + 8);
    if ((*param_2 == *(longlong * )(lVar2 + 0x10)) && (*param_3 == lVar2)) {
        if (*(longlong * )(param_1 + 0x10) != 0) {
            FUN_140044ca0(param_1, *(undefined8 * )(lVar2 + 8));
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x10) = *(longlong * )(param_1 + 8);
            *(undefined8 * )(*(longlong * )(param_1 + 8) + 8) = 0;
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = *(longlong * )(param_1 + 8);
            *(undefined8 * )(param_1 + 0x10) = 0;
            return;
        }
    } else if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong * )(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong * )(*param_2 + 8);
                if (*param_2 == *(longlong * )(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong * )(lVar2 + 8);
                    } while (*param_2 == *(longlong * )(lVar2 + 0x18));
                }
                if (*(longlong * )(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            } else {
                *param_2 = lVar2;
                lVar1 = *(longlong * )(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong * )(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong * )(lVar2 + 0x10);
                }
            }
            FUN_140155340(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


void FUN_140155340(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a144, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140155405. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        lVar2 = FUN_140007db0(*param_2, lVar2 + 8, lVar2 + 0x10, lVar2 + 0x18);
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            FUN_14018b900(*(longlong * )(lVar2 + 0x28), 0);
        }
        FUN_14018b900(lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


undefined8 *FUN_140155450(undefined8 *param_1) {
    undefined *puVar1;
    undefined2 *puVar2;
    int iVar3;
    undefined8 *puVar4;

    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[9] = puVar2;
    param_1[10] = puVar2;
    param_1[0xb] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xd] = puVar2;
    param_1[0xe] = puVar2;
    param_1[0xf] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    iVar3 = 9;
    puVar4 = param_1 + 0x12;
    do {
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar2 = (undefined2 *) FUN_14018b280(0x10);
        puVar4[-1] = puVar2;
        *puVar4 = puVar2;
        puVar4[1] = puVar2 + 8;
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        puVar4 = puVar4 + 4;
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    param_1[2] = 0;
    param_1[3] = 0;
    puVar1 = PTR_DAT_140c2ca08;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[4] = puVar1;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 * )(param_1 + 5) = 1;
    *(undefined4 * )(param_1 + 0x3a) = 1;
    return param_1;
}


void FUN_140155570(HWND *param_1) {
    HWND pHVar1;
    undefined8 *puVar2;
    int iVar3;
    HIMC pHVar4;
    longlong *local_res8[4];

    *(undefined4 * )(param_1 + 2) = 1;
    if (*param_1 == (HWND) 0x0) {
        pHVar1 = *(HWND * )(DAT_140c65678 + 8);
        *param_1 = pHVar1;
        pHVar4 = ImmGetContext(pHVar1);
        param_1[1] = (HWND) pHVar4;
        ImmReleaseContext(*param_1, pHVar4);
    }
    FUN_140155e50(param_1);
    *(undefined4 * )((longlong) param_1 + 0x14) = 0;
    ImmAssociateContext(*param_1, (HIMC) 0x0);
    puVar2 = (undefined8 *) param_1[0x3b];
    if ((puVar2 != (undefined8 *) 0x0) && (*(int *) (param_1 + 0x3e) != -1)) {
        local_res8[0] = (longlong *) 0x0;
        iVar3 = (**(code * *) * puVar2)(puVar2, &DAT_140b5c848, local_res8);
        if (-1 < iVar3) {
            (**(code * *)(*local_res8[0] + 0x20))(local_res8[0], *(undefined4 * )(param_1 + 0x3e));
            *(undefined4 * )(param_1 + 0x3e) = 0xffffffff;
            (**(code * *)(*local_res8[0] + 0x10))();
        }
    }
    return;
}


undefined8 FUN_140155630(longlong param_1, int param_2, longlong param_3) {
    if ((*(int *) (param_1 + 0x10) == 0) || (*(int *) (param_1 + 0x14) == 0)) {
        return 0;
    }
    if (param_2 == 0x51) {
        FUN_1401556c0();
        return 0;
    }
    if (param_2 != 0x10f) {
        if (param_2 == 0x281) {
            return 0;
        }
        if (param_2 != 0x282) {
            if (param_2 != 0x286) {
                return 0;
            }
            *(undefined4 * )(param_1 + 0x1c0) = 0;
            *(undefined4 * )(param_1 + 0x1c8) = 0;
            return 0;
        }
        if (param_3 != 3) {
            if (param_3 == 4) {
                *(undefined4 * )(param_1 + 0x1c0) = 0;
                *(undefined4 * )(param_1 + 0x1c8) = 0;
                return 1;
            }
            if (param_3 != 5) {
                return 1;
            }
        }
        FUN_1401558f0();
        return 1;
    }
    FUN_140155790();
    return 0;
}


void FUN_1401556c0(longlong param_1) {
    HKL pHVar1;
    undefined *puVar2;
    undefined *puVar3;
    HKL pHVar4;
    uint uVar5;

    pHVar1 = *(HKL * )(param_1 + 0x18);
    pHVar4 = GetKeyboardLayout(0);
    *(HKL * )(param_1 + 0x18) = pHVar4;
    puVar3 = PTR_DAT_140c2ca28;
    puVar2 = PTR_DAT_140c2ca20;
    if (pHVar1 == pHVar4) {
        return;
    }
    uVar5 = (uint) pHVar4 & 0x3ff;
    if (uVar5 == 4) {
        uVar5 = ((uint) pHVar4 & 0xffff) >> 10;
        *(undefined4 * )(param_1 + 0x28) = 1;
        puVar2 = PTR_DAT_140c2ca10;
        if (uVar5 == 1) {
            *(undefined * *)(param_1 + 0x20) = PTR_DAT_140c2ca18;
            return;
        }
        if (uVar5 == 2) {
            *(undefined4 * )(param_1 + 0x28) = 0;
            *(undefined * *)(param_1 + 0x20) = puVar2;
            return;
        }
    } else {
        if (uVar5 == 0x11) {
            *(undefined4 * )(param_1 + 0x28) = 1;
            *(undefined * *)(param_1 + 0x20) = puVar3;
            return;
        }
        if (uVar5 == 0x12) {
            *(undefined4 * )(param_1 + 0x28) = 0;
            *(undefined * *)(param_1 + 0x20) = puVar2;
            return;
        }
    }
    *(undefined * *)(param_1 + 0x20) = PTR_DAT_140c2ca08;
    return;
}


void FUN_140155790(HWND *param_1) {
    HWND pHVar1;
    code *pcVar2;
    LONG LVar3;
    HIMC pHVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined auStack584[32];
    short local_228[256];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack584;
    pHVar4 = ImmGetContext(*param_1);
    LVar3 = ImmGetCompositionStringW(pHVar4, 8, local_228, 0x100);
    ImmReleaseContext(*param_1, pHVar4);
    lVar6 = (longlong)(int)((ulonglong)(longlong)
    LVar3 >> 1);
    if (0x1ff < (ulonglong)(lVar6 * 2)) {
        __report_rangecheckfailure();
        pcVar2 = (code *) swi(3);
        (*pcVar2)();
        return;
    }
    lVar5 = 0;
    local_228[lVar6] = 0;
    while (local_228[0] != 0) {
        lVar5 = lVar5 + 1;
        local_228[0] = local_228[lVar5];
    }
    pHVar1 = param_1[0xd];
    uVar8 = (longlong) param_1[0xe] - (longlong) pHVar1 >> 1;
    uVar7 = (longlong)(local_228 + lVar5) - (longlong) local_228 >> 1;
    if (uVar8 < uVar7) {
        FUN_1407db590(pHVar1, local_228, uVar8 * 2);
        FUN_14001c310(param_1 + 0xc, local_228 + ((longlong) param_1[0xe] - (longlong) param_1[0xd] >> 1),
                      local_228 + lVar5);
    } else {
        lVar6 = uVar7 * 2;
        FUN_1407db590(pHVar1, local_228, lVar6);
        FUN_14001c2b0(param_1 + 0xc, (longlong) & param_1[0xd]->unused + lVar6, param_1[0xe]);
    }
    LVar3 = ImmGetCompositionStringW(pHVar4, 0x80, (LPVOID) 0x0, 0);
    *(LONG * )((longlong) param_1 + 0x3c) = LVar3;
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack584);
    return;
}


void FUN_1401558f0(HWND *param_1) {
    short sVar1;
    DWORD DVar2;
    HIMC pHVar3;
    LPCANDIDATELIST lpCandList;
    longlong lVar4;
    short *psVar5;
    uint uVar6;
    ulonglong uVar7;

    if ((*(int *) (param_1 + 7) != 0) && (pHVar3 = ImmGetContext(*param_1), pHVar3 != (HIMC) 0x0)) {
        DVar2 = ImmGetCandidateListW(pHVar3, 0, (LPCANDIDATELIST) 0x0, 0);
        if (DVar2 != 0) {
            lpCandList = (LPCANDIDATELIST) FUN_14018b280(DVar2);
            DVar2 = ImmGetCandidateListW(pHVar3, 0, lpCandList, DVar2);
            if (DVar2 != 0) {
                uVar7 = 0;
                *(DWORD * )(param_1 + 0x38) = lpCandList->dwCount;
                *(DWORD * )((longlong) param_1 + 0x1cc) = lpCandList->dwSelection;
                if (lpCandList->dwCount != 0) {
                    do {
                        lVar4 = 0;
                        psVar5 = (short *) ((longlong) lpCandList->dwOffset +
                                            (longlong)(&DAT_ffffffffffffffe8 + lpCandList->dwOffset[uVar7]));
                        sVar1 = *psVar5;
                        while (sVar1 != 0) {
                            lVar4 = lVar4 + 1;
                            sVar1 = psVar5[lVar4];
                        }
                        FUN_14001c480(param_1 + (uVar7 + 4) * 4, psVar5, psVar5 + lVar4);
                        uVar6 = (int) uVar7 + 1;
                        uVar7 = (ulonglong) uVar6;
                    } while (uVar6 < lpCandList->dwCount);
                }
            }
            FUN_14018b900(lpCandList, 0);
        }
        ImmReleaseContext(*param_1, pHVar3);
    }
    return;
}


void FUN_1401559e0(HWND *param_1) {
    HIMC pHVar1;

    if (((*(int *) (param_1 + 2) != 0) && (DAT_140c8a148 == '\0')) &&
        (pHVar1 = ImmGetContext(*param_1), pHVar1 != (HIMC) 0x0)) {
        DAT_140c8a148 = 1;
        if (param_1[0xd] != param_1[0xe]) {
            *(undefined2 * ) & param_1[0xd]->unused = 0;
            param_1[0xe] = param_1[0xd];
        }
        ImmNotifyIME(pHVar1, 0x15, 4, 0);
        ImmSetCompositionStringW(pHVar1, 9, &DAT_1409db9c4, 2, &DAT_1409db9dc, 2);
        ImmNotifyIME(pHVar1, 0x11, 0, 0);
        ImmReleaseContext(*param_1, pHVar1);
        *(undefined4 * )(param_1 + 0x38) = 0;
        *(undefined4 * )(param_1 + 0x39) = 0;
        DAT_140c8a148 = '\0';
    }
    return;
}


undefined8 FUN_140155ad0(longlong *param_1, longlong *param_2, longlong **param_3) {
    longlong *plVar1;

    if (param_3 == (longlong **) 0x0) {
        return 0x80070057;
    }
    plVar1 = (longlong *) 0x0;
    *param_3 = (longlong *) 0x0;
    if ((*param_2 == 0) && (param_2[1] == 0x46000000000000c0)) {
        *param_3 = param_1;
    } else if ((*param_2 == 0x11d719dfea1ea136) && (param_2[1] == 0x5c43845b0600d2a6)) {
        *param_3 = param_1;
    } else {
        if ((*param_2 == 0x11d80f2871c6e74e) && (param_2[1] == 0x5c43845b06002aa8)) {
            if (param_1 != (longlong *) 0x0) {
                plVar1 = param_1 + 1;
            }
        } else {
            if (*param_2 != 0x48dff26d743abd5f) {
                return 0x80004002;
            }
            if (param_2[1] != 0x649b41928423c58c) {
                return 0x80004002;
            }
            if (param_1 != (longlong *) 0x0) {
                plVar1 = param_1 + 2;
            }
        }
        *param_3 = plVar1;
    }
    if (*param_3 == (longlong *) 0x0) {
        return 0x80004002;
    }
    (**(code * *)(*param_1 + 8))();
    return 0;
}


undefined4 FUN_140155ba0(undefined8 *param_1) {
    undefined8 *puVar1;
    undefined4 uVar2;

    puVar1 = param_1 + 3;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    uVar2 = *(undefined4 * )(param_1 + 3);
    if (*(int *) puVar1 == 0) {
        *param_1 = &PTR_FUN_140b5c818;
        param_1[1] = &PTR_LAB_140b5c7f8;
        param_1[2] = &PTR_LAB_140b5c7c8;
        FUN_14018b900(param_1, 0);
    }
    return uVar2;
}


undefined8 FUN_140155c10(longlong *param_1, undefined4 param_2, int param_3) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong *local_res8;
    longlong *local_res20;
    longlong *local_18;
    longlong *local_10;

    local_10 = (longlong *) 0x0;
    local_res8 = param_1;
    iVar3 = (**(code * *) * *(undefined8 * *)(DAT_140c63650 + 0x2a0))
            (*(undefined8 * *)(DAT_140c63650 + 0x2a0), &DAT_140b5c788, &local_18);
    if (-1 < iVar3) {
        (**(code * *)(*local_18 + 0x30))(local_18, param_2, &local_10);
        (**(code * *)(*local_18 + 0x10))();
    }
    plVar2 = local_10;
    if (local_10 == (longlong *) 0x0) {
        return 0x80070057;
    }
    local_res8 = (longlong *) 0x0;
    local_res20 = (longlong *) 0x0;
    iVar3 = (**(code * *) * local_10)(local_10, &DAT_140b5c798, &local_res8);
    if (-1 < iVar3) {
        FUN_1401563a0(DAT_140c63650 + 200, local_res8);
        (**(code * *)(*local_res8 + 0x10))();
    }
    iVar3 = (**(code * *) * plVar2)(plVar2, &DAT_140b5c7b8, &local_res20);
    lVar1 = DAT_140c63650;
    if (-1 < iVar3) {
        if (param_3 != 0) {
            *(int *) (DAT_140c63650 + 0x290) = *(int *) (DAT_140c63650 + 0x290) + 1;
        }
        FUN_140156450(lVar1 + 200, local_res20);
        (**(code * *)(*local_res20 + 0x10))();
    }
    (**(code * *)(*plVar2 + 0x10))(plVar2);
    return 0;
}


undefined8 *FUN_140155e50(longlong param_1) {
    longlong **ppv;
    HRESULT HVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined local_res8[8];
    longlong *local_res10;

    ppv = (longlong * *)(param_1 + 0x1d8);
    HVar1 = CoCreateInstance((IID * ) & DAT_1409c6400, (LPUNKNOWN) 0x0, 1, (IID * ) & DAT_140b5c778, ppv);
    if ((HVar1 == 0) && (iVar2 = (**(code * *)(**ppv + 0x70))(*ppv, local_res8, 4), -1 < iVar2)) {
        puVar5 = (undefined8 *) 0x0;
        puVar3 = (undefined8 *) FUN_14018b280(0x20, 0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *) 0x0) {
            *(undefined4 * )(puVar3 + 3) = 1;
            *puVar3 = &PTR_FUN_140b5c818;
            puVar3[1] = &PTR_LAB_140b5c7f8;
            puVar3[2] = &PTR_LAB_140b5c7c8;
            puVar4 = puVar3;
        }
        *(undefined8 * *)(param_1 + 0x1e8) = puVar4;
        if ((puVar4 != (undefined8 *) 0x0) &&
            (iVar2 = (**(code * *) * *ppv)(*ppv, &DAT_140b5c848, &local_res10), -1 < iVar2)) {
            iVar2 = (**(code * *)(*local_res10 + 0x18))
                    (local_res10, &DAT_140b5c858, *(undefined8 * )(param_1 + 0x1e8), param_1 + 0x1f0
                    );
            if (-1 < iVar2) {
                puVar4 = (undefined8 * )(*(longlong * )(param_1 + 0x1e8) + 8);
                if (*(longlong * )(param_1 + 0x1e8) == 0) {
                    puVar4 = puVar5;
                }
                iVar2 = (**(code * *)(*local_res10 + 0x18))(local_res10, &DAT_140b5c7e8, puVar4, param_1 + 500);
                if (-1 < iVar2) {
                    iVar2 = FUN_140156170(param_1, 0);
                    puVar5 = (undefined8 *) 0x0;
                    if (iVar2 != 0) {
                        puVar5 = (undefined8 *) 0x1;
                    }
                }
            }
            (**(code * *)(*local_res10 + 0x10))();
        }
        return puVar5;
    }
    return (undefined8 *) 0x0;
}


void FUN_140155f90(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong *local_res8[4];

    puVar1 = *(undefined8 * *)(param_1 + 0x1d8);
    if (puVar1 != (undefined8 *) 0x0) {
        iVar2 = (**(code * *) * puVar1)(puVar1, &DAT_140b5c848, local_res8);
        if (-1 < iVar2) {
            (**(code * *)(*local_res8[0] + 0x20))(local_res8[0], *(undefined4 * )(param_1 + 0x1f0));
            (**(code * *)(*local_res8[0] + 0x20))(local_res8[0], *(undefined4 * )(param_1 + 500));
            (**(code * *)(*local_res8[0] + 0x10))();
            FUN_140156170(param_1, 1);
            (**(code * *)(**(longlong * *)(param_1 + 0x1d8) + 0x20))();
            if (*(longlong * *)(param_1 + 0x1d8) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x1d8) + 0x10))();
                *(undefined8 * )(param_1 + 0x1d8) = 0;
            }
            if (*(longlong * *)(param_1 + 0x1e8) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x1e8) + 0x10))();
                *(undefined8 * )(param_1 + 0x1e8) = 0;
            }
        }
    }
    return;
}


undefined8 FUN_140156050(void) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong *in_stack_00000030;

    lVar1 = DAT_140c63650;
    lVar3 = DAT_140c57c00 - *in_stack_00000030;
    if (lVar3 == 0) {
        lVar3 = DAT_140c57c08 - in_stack_00000030[1];
    }
    *(uint * )(DAT_140c63650 + 0x298) = (uint)(lVar3 != 0);
    iVar2 = FUN_1401560b0();
    *(uint * )(lVar1 + 0x100) = (uint)(iVar2 == 0);
    return 0;
}


void FUN_1401560b0(void) {
    HRESULT HVar1;
    int iVar2;
    undefined auStackY184[32];
    longlong *local_88;
    longlong *local_80;
    undefined local_78[96];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStackY184;
    HVar1 = CoCreateInstance((IID * ) & DAT_1409c6440, (LPUNKNOWN) 0x0, 1, (IID * ) & DAT_140b5c758, &local_88);
    if (-1 < HVar1) {
        iVar2 = (**(code * *) * local_88)(local_88, &DAT_140b5c768, &local_80);
        if (-1 < iVar2) {
            (**(code * *)(*local_80 + 0x50))(local_80, &DAT_1409c6510, local_78);
            (**(code * *)(*local_80 + 0x10))();
        }
        (**(code * *)(*local_88 + 0x10))();
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStackY184);
    return;
}


longlong FUN_140156170(longlong param_1, int param_2, longlong *param_3) {
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *local_res18;
    longlong *local_res20;
    longlong *local_48;
    longlong *local_40;
    longlong *local_38[2];

    lVar5 = 0;
    local_res20 = (longlong *) 0x0;
    local_40 = (longlong *) 0x0;
    local_38[0] = (longlong *) 0x0;
    local_res18 = param_3;
    iVar4 = (**(code * *) * *(undefined8 * *)(param_1 + 0x1d8))
            (*(undefined8 * *)(param_1 + 0x1d8), &DAT_1409c6ba0, &local_res20);
    if (iVar4 < 0) {
        return 0;
    }
    iVar4 = (**(code * *)(*local_res20 + 0x18))(local_res20, &DAT_1409c6580, &local_40);
    if (iVar4 < 0) {
        LAB_14015637f:
        (**(code * *)(*local_res20 + 0x10))();
        return 0;
    }
    iVar4 = (**(code * *)(*local_res20 + 0x18))(local_res20, &DAT_140c57bf0, local_38);
    plVar3 = local_38[0];
    plVar2 = local_40;
    plVar1 = local_res20;
    if (iVar4 < 0) {
        (**(code * *)(*local_40 + 0x10))();
        goto LAB_14015637f;
    }
    if (local_40 == (longlong *) 0x0) {
        return 0;
    }
    if (local_38[0] == (longlong *) 0x0) {
        return 0;
    }
    local_48 = (longlong *) 0x0;
    iVar4 = (**(code * *) * local_40)(local_40, &DAT_1409c6d60, &local_48);
    if (iVar4 < 0) goto LAB_140156345;
    if (*(int *) (param_1 + 0x1f8) != -1) {
        (**(code * *)(*local_48 + 0x20))();
        *(undefined4 * )(param_1 + 0x1f8) = 0xffffffff;
    }
    if (param_2 == 0) {
        lVar6 = *(longlong * )(param_1 + 0x1e8) + 0x10;
        if (*(longlong * )(param_1 + 0x1e8) == 0) {
            lVar6 = lVar5;
        }
        iVar4 = (**(code * *)(*local_48 + 0x18))(local_48, &DAT_1409c6b90, lVar6, param_1 + 0x1f8);
        if (-1 < iVar4) goto LAB_1401562a4;
    } else {
        LAB_1401562a4:
        local_res18 = (longlong *) 0x0;
        iVar4 = (**(code * *) * plVar3)(plVar3, &DAT_1409c6d60, &local_res18);
        if (-1 < iVar4) {
            if (*(int *) (param_1 + 0x1fc) != -1) {
                (**(code * *)(*local_res18 + 0x20))();
                *(undefined4 * )(param_1 + 0x1fc) = 0xffffffff;
            }
            if (param_2 == 0) {
                lVar6 = *(longlong * )(param_1 + 0x1e8) + 0x10;
                if (*(longlong * )(param_1 + 0x1e8) == 0) {
                    lVar6 = lVar5;
                }
                iVar4 = (**(code * *)(*local_res18 + 0x18))(local_res18, &DAT_1409c6b90, lVar6, param_1 + 0x1fc);
                if (-1 < iVar4) goto LAB_140156322;
            } else {
                LAB_140156322:
                lVar5 = 1;
            }
            (**(code * *)(*local_res18 + 0x10))();
        }
    }
    (**(code * *)(*local_48 + 0x10))();
    LAB_140156345:
    (**(code * *)(*plVar2 + 0x10))(plVar2);
    (**(code * *)(*plVar3 + 0x10))(plVar3);
    (**(code * *)(*plVar1 + 0x10))(plVar1);
    return lVar5;
}


void FUN_1401563a0(longlong param_1, longlong *param_2) {
    short sVar1;
    int iVar2;
    longlong lVar3;
    undefined4 local_res8[2];
    undefined4 local_res10[2];
    undefined local_res18[8];
    undefined local_res20[8];
    short *local_28[2];

    lVar3 = 0;
    *(undefined4 * )(param_1 + 0x1c0) = 0;
    local_res8[0] = 0;
    (**(code * *)(*param_2 + 0x38))(param_2, local_res18);
    (**(code * *)(*param_2 + 0x50))(param_2, local_res20);
    (**(code * *)(*param_2 + 0x58))(param_2, local_res8);
    (**(code * *)(*param_2 + 0x60))(param_2, local_res10);
    *(undefined4 * )(param_1 + 0x28) = local_res10[0];
    iVar2 = (**(code * *)(*param_2 + 0x48))(param_2, local_28);
    if ((-1 < iVar2) && (local_28[0] != (short *) 0x0)) {
        sVar1 = *local_28[0];
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = local_28[0][lVar3];
        }
        FUN_14001c480(param_1 + 0x40, local_28[0], local_28[0] + lVar3);
        Ordinal_6(local_28[0]);
    }
    return;
}


ulonglong FUN_140156450(longlong param_1, longlong *param_2) {
    short sVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    uint local_res8[2];
    uint local_res10;
    uint local_res18[2];
    short *psStackX32;

    local_res8[0] = 0;
    local_res18[0] = 0;
    local_res10 = 0;
    (**(code * *)(*param_2 + 0x50))(param_2, local_res8);
    (**(code * *)(*param_2 + 0x48))(param_2, local_res18);
    (**(code * *)(*param_2 + 0x70))();
    *(undefined4 * )(param_1 + 0x1c0) = 10;
    uVar3 = (ulonglong) local_res8[0] * 0xcccccccd & 0xffffffff;
    *(uint * )(param_1 + 0x1cc) = local_res8[0] % 10;
    uVar2 = local_res10 * 10;
    if (local_res18[0] != 0) {
        uVar3 = (ulonglong) local_res18[0] * 0xcccccccd & 0xffffffff;
        if (local_res18[0] / 10 == local_res10) {
            uVar3 = (ulonglong)((local_res18[0] / 10) * 10);
            *(uint * )(param_1 + 0x1c0) = local_res18[0] % 10;
        }
        if (uVar2 < *(int *) (param_1 + 0x1c0) + uVar2) {
            iVar6 = local_res10 * -10;
            uVar5 = uVar2;
            do {
                uVar3 = (**(code * *)(*param_2 + 0x58))(param_2, uVar5, &psStackX32);
                if ((-1 < (int) uVar3) && (psStackX32 != (short *) 0x0)) {
                    lVar4 = 0;
                    sVar1 = *psStackX32;
                    while (sVar1 != 0) {
                        lVar4 = lVar4 + 1;
                        sVar1 = psStackX32[lVar4];
                    }
                    FUN_14001c480(((ulonglong)(iVar6 + uVar5) + 4) * 0x20 + param_1, psStackX32,
                                  psStackX32 + lVar4);
                    uVar3 = Ordinal_6();
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(int *) (param_1 + 0x1c0) + uVar2);
        }
    }
    return uVar3;
}


void FUN_1401564e6(uint param_1, undefined8 param_2, uint param_3) {
    short sVar1;
    int iVar2;
    ulonglong in_RAX;
    longlong lVar3;
    uint uVar4;
    uint unaff_ESI;
    longlong unaff_RDI;
    longlong *unaff_R14;
    short *in_stack_00000068;

    uVar4 = (uint)((in_RAX & 0xffffffff) * (ulonglong) param_1 >> 0x23);
    if (uVar4 == param_3) {
        *(uint * )(unaff_RDI + 0x1c0) = param_1 + uVar4 * -10;
    }
    if (unaff_ESI < *(int *) (unaff_RDI + 0x1c0) + unaff_ESI) {
        uVar4 = unaff_ESI;
        do {
            iVar2 = (**(code * *)(*unaff_R14 + 0x58))();
            if ((-1 < iVar2) && (in_stack_00000068 != (short *) 0x0)) {
                lVar3 = 0;
                sVar1 = *in_stack_00000068;
                while (sVar1 != 0) {
                    lVar3 = lVar3 + 1;
                    sVar1 = in_stack_00000068[lVar3];
                }
                FUN_14001c480(((ulonglong)(uVar4 - unaff_ESI) + 4) * 0x20 + unaff_RDI, in_stack_00000068,
                              in_stack_00000068 + lVar3);
                Ordinal_6();
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(int *) (unaff_RDI + 0x1c0) + unaff_ESI);
    }
    return;
}


undefined8 *FUN_1401565e0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5c868;
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
    }
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_140156660(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    lVar4 = 0;
    *param_1 = &PTR_LAB_140b5c868;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    lVar3 = lVar4;
    do {
        lVar1 = lVar3 + 1;
        lVar3 = lVar3 + 1;
    } while (L"Arial Unicode MS"[lVar1] != L'\0');
    FUN_14001c1b0(param_1 + 2, L"Arial Unicode MS", L"Arial Unicode MS" + lVar3);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    do {
        lVar3 = lVar4 + 1;
        lVar4 = lVar4 + 1;
    } while (L"Default"[lVar3] != L'\0');
    FUN_14001c1b0(param_1 + 6, L"Default", L"Default" + lVar4);
    param_1[0xc] = 0;
    *(undefined4 * )(param_1 + 10) = 0xc;
    *(undefined4 * )((longlong) param_1 + 0x54) = 8;
    param_1[0xb] = 0x3f800000;
    iVar2 = (**(code * *)(*DAT_140c65680 + 0x20))
            (DAT_140c65680, L"Arial Unicode MS", 0xc, param_4, 8, param_1 + 0xc);
    if (-1 < iVar2) {
        puVar5 = (undefined4 * )(**(code * *)(*(longlong *) param_1[0xc] + 0x20))();
        *(undefined4 * )((longlong) param_1 + 0x5c) = *puVar5;
    }
    return param_1;
}


undefined8 *FUN_140156770(undefined8 *param_1, undefined8 param_2) {
    longlong **pplVar1;
    short sVar2;
    int iVar3;
    undefined2 *puVar4;
    longlong lVar5;
    short *psVar6;
    undefined8 uVar7;
    undefined4 *puVar8;
    short *psVar9;
    short *psVar10;
    char local_res8[8];

    psVar10 = (short *) 0x0;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b5c868;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar4 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = puVar4 + 8;
    if (puVar4 != (undefined2 *) 0x0) {
        *puVar4 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    puVar4 = (undefined2 *) FUN_14018b280(0x10);
    param_1[7] = puVar4;
    param_1[8] = puVar4;
    param_1[9] = puVar4 + 8;
    if (puVar4 != (undefined2 *) 0x0) {
        *puVar4 = 0;
    }
    pplVar1 = (longlong * *)(param_1 + 0xc);
    param_1[10] = 0;
    param_1[0xb] = 0x3f800000;
    *pplVar1 = (longlong *) 0x0;
    lVar5 = FUN_1401a6b80(param_2, &DAT_140a31790);
    psVar6 = psVar10;
    if (lVar5 != 0) {
        psVar6 = (short *) FUN_1401a4f40(lVar5 + 0x20);
    }
    psVar9 = (short *) &DAT_1409dbaec;
    if (psVar6 != (short *) 0x0) {
        psVar9 = psVar6;
    }
    sVar2 = *psVar9;
    psVar6 = psVar10;
    while (sVar2 != 0) {
        psVar6 = (short *) ((longlong) psVar6 + 1);
        sVar2 = psVar9[(longlong) psVar6];
    }
    FUN_14001c480(param_1 + 6, psVar9, psVar9 + (longlong) psVar6);
    lVar5 = FUN_1401a6b80(param_2, L"Face");
    psVar6 = psVar10;
    if (lVar5 != 0) {
        psVar6 = (short *) FUN_1401a4f40(lVar5 + 0x20);
    }
    psVar9 = (short *) &DAT_1409dba94;
    if (psVar6 != (short *) 0x0) {
        psVar9 = psVar6;
    }
    sVar2 = *psVar9;
    psVar6 = psVar10;
    while (sVar2 != 0) {
        psVar6 = (short *) ((longlong) psVar6 + 1);
        sVar2 = psVar9[(longlong) psVar6];
    }
    FUN_14001c480(param_1 + 2, psVar9, psVar9 + (longlong) psVar6);
    psVar6 = psVar10;
    do {
        local_res8[0] = '\0';
        lVar5 = FUN_1401a6b80(param_2, (&PTR_u_GfxFont_3D_140a348c0)[(longlong) psVar10]);
        if (lVar5 != 0) {
            uVar7 = FUN_1401a4f40(lVar5 + 0x20);
            FUN_1401a52e0(uVar7, local_res8);
            if (local_res8[0] != '\0') {
                psVar6 = (short *) ((ulonglong) psVar6 | 1 << ((byte) psVar10 & 0x3f));
            }
        }
        psVar10 = (short *) ((longlong) psVar10 + 1);
    } while (psVar10 < &DAT_00000005);
    *(int *) ((longlong) param_1 + 0x54) = (int) psVar6;
    lVar5 = FUN_1401a6b80(param_2, L"Size");
    if (lVar5 != 0) {
        uVar7 = FUN_1401a4f40(lVar5 + 0x20);
        FUN_1407df428(uVar7, &DAT_1409e4114, param_1 + 10);
    }
    iVar3 = (**(code * *)(*DAT_140c65680 + 0x20))
            (DAT_140c65680, param_1[3], *(undefined4 * )(param_1 + 10), *DAT_140c65680,
             *(undefined4 * )((longlong) param_1 + 0x54), pplVar1);
    if (-1 < iVar3) {
        puVar8 = (undefined4 * )(**(code * *)(**pplVar1 + 0x20))();
        *(undefined4 * )((longlong) param_1 + 0x5c) = *puVar8;
    }
    return param_1;
}


undefined8 *FUN_1401569a0(undefined8 *param_1, short *param_2, undefined param_3) {
    short sVar1;
    undefined2 *puVar2;
    undefined8 uVar3;
    short *psVar4;
    longlong lVar5;

    *(undefined * )(param_1 + 1) = param_3;
    lVar5 = 0;
    *param_1 = &PTR_LAB_140b5c880;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = puVar2;
    param_1[4] = puVar2;
    param_1[5] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    uVar3 = FUN_14018b280(0x18);
    param_1[7] = uVar3;
    *(undefined8 *) uVar3 = uVar3;
    *(undefined8 * )(param_1[7] + 8) = param_1[7];
    uVar3 = FUN_14018b280(0x18);
    param_1[9] = uVar3;
    *(undefined8 *) uVar3 = uVar3;
    *(undefined8 * )(param_1[9] + 8) = param_1[9];
    uVar3 = FUN_14018b280(0x18);
    param_1[0xb] = uVar3;
    *(undefined8 *) uVar3 = uVar3;
    *(undefined8 * )(param_1[0xb] + 8) = param_1[0xb];
    uVar3 = FUN_14018b280(0x18);
    param_1[0xd] = uVar3;
    *(undefined8 *) uVar3 = uVar3;
    psVar4 = (short *) &DAT_1409dbb04;
    if (param_2 != (short *) 0x0) {
        psVar4 = param_2;
    }
    *(undefined8 * )(param_1[0xd] + 8) = param_1[0xd];
    sVar1 = *psVar4;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar4[lVar5];
    }
    FUN_14001c480(param_1 + 2, psVar4, psVar4 + lVar5);
    return param_1;
}


void FUN_140156ae0(undefined8 *param_1) {
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_LAB_140b5c880;
    FUN_140156c20();
    plVar2 = *(longlong * *)(longlong * )
    param_1[0xd];
    if (plVar2 != (longlong *) param_1[0xd]) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *) param_1[0xd]);
    }
    *(undefined8 *) param_1[0xd] = param_1[0xd];
    *(undefined8 * )(param_1[0xd] + 8) = param_1[0xd];
    FUN_14018b900(param_1[0xd], 0);
    plVar2 = *(longlong * *)(longlong * )
    param_1[0xb];
    if (plVar2 != (longlong *) param_1[0xb]) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *) param_1[0xb]);
    }
    *(undefined8 *) param_1[0xb] = param_1[0xb];
    *(undefined8 * )(param_1[0xb] + 8) = param_1[0xb];
    FUN_14018b900(param_1[0xb], 0);
    plVar2 = *(longlong * *)(longlong * )
    param_1[9];
    if (plVar2 != (longlong *) param_1[9]) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *) param_1[9]);
    }
    *(undefined8 *) param_1[9] = param_1[9];
    *(undefined8 * )(param_1[9] + 8) = param_1[9];
    FUN_14018b900(param_1[9], 0);
    plVar2 = *(longlong * *)(longlong * )
    param_1[7];
    if (plVar2 != (longlong *) param_1[7]) {
        do {
            plVar1 = (longlong * ) * plVar2;
            FUN_14018b900(plVar2, 0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *) param_1[7]);
    }
    *(undefined8 *) param_1[7] = param_1[7];
    *(undefined8 * )(param_1[7] + 8) = param_1[7];
    FUN_14018b900(param_1[7], 0);
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
    }
    return;
}


void FUN_140156c20(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
    if (plVar3 != *(longlong * *)(param_1 + 0x38)) {
        do {
            lVar1 = plVar3[2];
            FUN_1400c6b20(lVar1);
            *(undefined8 * )(lVar1 + 0x20) = 0;
            if ((longlong *) plVar3[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) plVar3[2] + 8))();
                plVar3[2] = 0;
            }
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x38));
    }
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x58);
    if (plVar3 != *(longlong * *)(param_1 + 0x58)) {
        do {
            plVar2 = (longlong *) plVar3[2];
            FUN_1400c6b20(plVar2);
            plVar2[4] = 0;
            (**(code * *)(*plVar2 + 8))(plVar2);
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x58));
    }
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x48);
    if (plVar3 != *(longlong * *)(param_1 + 0x48)) {
        do {
            plVar2 = (longlong *) plVar3[2];
            plVar2[4] = 0;
            (**(code * *)(*plVar2 + 8))();
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x48));
    }
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
    if (plVar3 != *(longlong * *)(param_1 + 0x38)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x38));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x38) = *(undefined8 * )(param_1 + 0x38);
    *(longlong * )(*(longlong * )(param_1 + 0x38) + 8) = *(longlong * )(param_1 + 0x38);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x48);
    if (plVar3 != *(longlong * *)(param_1 + 0x48)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x48));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x48) = *(undefined8 * )(param_1 + 0x48);
    *(longlong * )(*(longlong * )(param_1 + 0x48) + 8) = *(longlong * )(param_1 + 0x48);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x58);
    if (plVar3 != *(longlong * *)(param_1 + 0x58)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x58));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x58) = *(undefined8 * )(param_1 + 0x58);
    *(longlong * )(*(longlong * )(param_1 + 0x58) + 8) = *(longlong * )(param_1 + 0x58);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x68);
    if (plVar3 != *(longlong * *)(param_1 + 0x68)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x68));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x68) = *(undefined8 * )(param_1 + 0x68);
    *(longlong * )(*(longlong * )(param_1 + 0x68) + 8) = *(longlong * )(param_1 + 0x68);
    return;
}


undefined8 FUN_140156dc0(longlong param_1, longlong param_2) {
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong *plVar5;
    int iVar6;

    iVar6 = 1;
    if (*(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar1 = *(undefined8 * *)(param_2 + 0x10);
    uVar4 = FUN_14005c1b0(param_2, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    plVar5 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
    if (plVar5 != *(longlong * *)(param_1 + 0x38)) {
        do {
            if ((*(byte * )(plVar5[2] + 0x1c) & 1) != 0) {
                pdVar2 = *(double **) (param_2 + 0x10);
                *(undefined4 * )(pdVar2 + 1) = 3;
                *pdVar2 = (double) iVar6;
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                FUN_1400d62a0(param_2);
                lVar3 = *(longlong * )(param_2 + 0x10);
                FUN_14005ea50(param_2, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
                iVar6 = iVar6 + 1;
            }
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong * ) * (longlong * )(param_1 + 0x38));
    }
    plVar5 = (longlong * ) * *(longlong * *)(param_1 + 0x58);
    if (plVar5 != *(longlong * *)(param_1 + 0x58)) {
        do {
            if ((*(byte * )(plVar5[2] + 0x1c) & 1) != 0) {
                pdVar2 = *(double **) (param_2 + 0x10);
                *(undefined4 * )(pdVar2 + 1) = 3;
                *pdVar2 = (double) iVar6;
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
                FUN_1400d62a0(param_2);
                lVar3 = *(longlong * )(param_2 + 0x10);
                FUN_14005ea50(param_2, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
                *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + -0x20;
                iVar6 = iVar6 + 1;
            }
            plVar5 = (longlong * ) * plVar5;
        } while (plVar5 != (longlong * ) * (longlong * )(param_1 + 0x58));
    }
    return 1;
}


void FUN_140156f00(longlong param_1, longlong *param_2) {
    longlong **pplVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong *plVar4;

    pplVar1 = *(longlong * **)(param_1 + 0x38);
    pplVar3 = (longlong * *) * pplVar1;
    if (pplVar3 != pplVar1) {
        do {
            if (pplVar3[2] == param_2) break;
            pplVar3 = (longlong * *) * pplVar3;
        } while (pplVar3 != pplVar1);
        if (pplVar3 != pplVar1) {
            return;
        }
    }
    pplVar1 = *(longlong * **)(param_1 + 0x58);
    pplVar3 = (longlong * *) * pplVar1;
    if (pplVar3 != pplVar1) {
        do {
            if (pplVar3[2] == param_2) break;
            pplVar3 = (longlong * *) * pplVar3;
        } while (pplVar3 != pplVar1);
        if (pplVar3 != pplVar1) {
            return;
        }
    }
    (**(code * *) * param_2)(param_2);
    lVar2 = *(longlong * )(param_1 + 0x58);
    plVar4 = (longlong *) FUN_14018b280(0x18);
    if ((longlong * *)(plVar4 + 2) != (longlong **) 0x0) {
        plVar4[2] = (longlong) param_2;
    }
    *plVar4 = lVar2;
    plVar4[1] = *(longlong * )(lVar2 + 8);
    **(longlong * **)(lVar2 + 8) = plVar4;
    *(longlong * *)(lVar2 + 8) = plVar4;
    return;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140156fa0(longlong param_1, ushort *param_2) {
    ushort *puVar1;
    undefined2 *puVar2;
    longlong **pplVar3;
    longlong lVar4;
    longlong lVar5;
    undefined2 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong **pplVar9;
    ushort uVar10;
    longlong lVar11;
    undefined4 local_res10;

    if (param_2 == (ushort *) 0x0) {
        return 0;
    }
    lVar11 = 0;
    uVar10 = *param_2;
    lVar4 = lVar11;
    while (uVar10 != 0) {
        lVar4 = lVar4 + 1;
        uVar10 = param_2[lVar4];
    }
    lVar4 = lVar4 * 2 >> 1;
    uVar8 = lVar4 + 1;
    lVar5 = lVar11;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar5 = FUN_14018b280(uVar8 * 2, 0);
    }
    lVar4 = lVar4 * 2;
    FUN_1407db590(lVar5, param_2, lVar4);
    puVar2 = (undefined2 * )(lVar4 + lVar5);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    uVar8 = (longlong) puVar2 - lVar5 >> 1;
    if (uVar8 != 0) {
        local_res10 = CONCAT22(0x3a, (undefined2) local_res10);
        puVar6 = (undefined2 *) FUN_14002c8a0(lVar5, puVar2, local_res10);
        if (puVar6 != puVar2) {
            uVar7 = (longlong) puVar6 - lVar5 >> 1;
            goto LAB_140157068;
        }
    }
    uVar7 = 0xffffffffffffffff;
    LAB_140157068:
    if (uVar8 < uVar7) {
        pplVar3 = *(longlong * **)(param_1 + 0x38);
        pplVar9 = (longlong * *) * pplVar3;
        if (pplVar9 != pplVar3) {
            uVar8 = (ulonglong) * param_2;
            do {
                uVar10 = (ushort) uVar8;
                lVar4 = lVar11;
                puVar1 = param_2;
                while (uVar10 != 0) {
                    puVar1 = puVar1 + 1;
                    lVar4 = lVar4 * 0xaa7f8ea9 + (ulonglong) uVar10;
                    uVar10 = *puVar1;
                }
                lVar4 = FUN_1400d3940(pplVar9[2], param_2, lVar4);
                if (lVar4 != 0) goto LAB_140157151;
                pplVar9 = (longlong * *) * pplVar9;
            } while (pplVar9 != pplVar3);
        }
        pplVar3 = *(longlong * **)(param_1 + 0x58);
        pplVar9 = (longlong * *) * pplVar3;
        if (pplVar9 != pplVar3) {
            uVar8 = (ulonglong) * param_2;
            do {
                uVar10 = (ushort) uVar8;
                lVar4 = lVar11;
                puVar1 = param_2;
                while (uVar10 != 0) {
                    puVar1 = puVar1 + 1;
                    lVar4 = lVar4 * 0xaa7f8ea9 + (ulonglong) uVar10;
                    uVar10 = *puVar1;
                }
                lVar4 = FUN_1400d3940(pplVar9[2], param_2, lVar4);
                if (lVar4 != 0) goto LAB_140157151;
                pplVar9 = (longlong * *) * pplVar9;
            } while (pplVar9 != pplVar3);
        }
        lVar4 = 0;
    } else {
        lVar4 = FUN_1400d3830(param_1 + 0x30, param_2);
        if (lVar4 == 0) {
            lVar4 = FUN_1400d3830(param_1 + 0x50, param_2);
        }
    }
    LAB_140157151:
    if (lVar5 != 0) {
        FUN_14018b900(lVar5, 0);
    }
    return lVar4;
}


void FUN_140157180(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
    if (plVar3 != *(longlong * *)(param_1 + 0x38)) {
        do {
            plVar1 = (longlong *) plVar3[2];
            (**(code * *)(*plVar1 + 0xd0))(plVar1);
            plVar2 = *(longlong * *)(longlong * )
            plVar1[0x46];
            if (plVar2 != (longlong *) plVar1[0x46]) {
                do {
                    FUN_1400c86a0(plVar2[2]);
                    plVar2 = (longlong * ) * plVar2;
                } while (plVar2 != (longlong *) plVar1[0x46]);
            }
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x38));
    }
    return;
}


void FUN_140157210(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
    if (plVar3 != *(longlong * *)(param_1 + 0x38)) {
        do {
            plVar1 = (longlong *) plVar3[2];
            (**(code * *)(*plVar1 + 0xd8))(plVar1);
            plVar2 = *(longlong * *)(longlong * )
            plVar1[0x46];
            if (plVar2 != (longlong *) plVar1[0x46]) {
                do {
                    FUN_1400c86f0(plVar2[2]);
                    plVar2 = (longlong * ) * plVar2;
                } while (plVar2 != (longlong *) plVar1[0x46]);
            }
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x38));
    }
    return;
}


void FUN_1401572b0(undefined8 param_1, undefined4 param_2, longlong param_3, undefined8 param_4,
                   char param_5, char param_6) {
    longlong *plVar1;
    longlong **pplVar2;
    char cVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong **pplVar6;
    uint uVar7;
    longlong lVar8;
    float fVar9;
    float extraout_XMM0_Da;
    float fVar10;
    undefined8 *local_res8;
    undefined8 local_48;
    undefined8 local_40[5];

    local_res8 = *(undefined8 * *)(param_3 + 0x58);
    local_40[0] = *(undefined8 * )(param_3 + 0x38);
    local_48 = *local_res8;
    FUN_1400e10f0(param_3, local_40, &local_48, &local_res8);
    plVar4 = (longlong * ) * *(longlong * *)(param_3 + 0x58);
    if (plVar4 != *(longlong * *)(param_3 + 0x58)) {
        do {
            plVar4 = (longlong * ) * plVar4;
            FUN_14018b900();
        } while (plVar4 != (longlong * ) * (longlong * )(param_3 + 0x58));
    }
    *(undefined8 * ) * (undefined8 * )(param_3 + 0x58) = *(undefined8 * )(param_3 + 0x58);
    *(longlong * )(*(longlong * )(param_3 + 0x58) + 8) = *(longlong * )(param_3 + 0x58);
    if (*(char *) (param_3 + 8) != '\0') {
        FUN_140158750();
    }
    plVar4 = *(longlong * *)(param_3 + 0x38);
    if (plVar4 != (longlong * ) * plVar4) {
        do {
            plVar1 = *(longlong * *)(plVar4[1] + 0x10);
            if ((*(byte * )((longlong) plVar1 + 0x1c) & 1) != 0) {
                if (param_6 != '\0') {
                    (**(code * *)(*plVar1 + 0x60))(plVar1);
                    plVar5 = *(longlong * *)(longlong * )
                    plVar1[0x46];
                    if (plVar5 != (longlong *) plVar1[0x46]) {
                        do {
                            FUN_1400d29e0(plVar5[2]);
                            plVar5 = (longlong * ) * plVar5;
                        } while (plVar5 != (longlong *) plVar1[0x46]);
                    }
                }
                if (param_5 == '\0') {
                    if ((*(byte * )(plVar1 + 0x31) & 2) == 0) {
                        uVar7 = 0;
                        plVar5 = plVar1 + 10;
                        do {
                            if (*plVar5 != 0) {
                                *(byte * )((longlong) plVar1 + 0x1d) = *(byte * )((longlong) plVar1 + 0x1d) & 0x7f;
                                *(byte * )((longlong) plVar1 + 0x1e) = *(byte * )((longlong) plVar1 + 0x1e) & 0xfe;
                                if ((plVar1[2] != 0) && ((*(byte * )(plVar1[2] + 0x1e) & 1) != 0)) {
                                    FUN_1400cb660();
                                }
                                plVar1[0x30] = -1;
                                break;
                            }
                            uVar7 = uVar7 + 1;
                            plVar5 = plVar5 + 1;
                        } while (uVar7 < 4);
                        *(uint * )(plVar1 + 0x31) = *(uint * )(plVar1 + 0x31) | 2;
                        plVar5 = *(longlong * *)(longlong * )
                        plVar1[0x46];
                        if (plVar5 != (longlong *) plVar1[0x46]) {
                            do {
                                FUN_1400cb710(plVar5[2]);
                                plVar5 = (longlong * ) * plVar5;
                            } while (plVar5 != (longlong *) plVar1[0x46]);
                        }
                    }
                } else if ((*(byte * )(plVar1 + 0x31) & 1) == 0) {
                    *(byte * )((longlong) plVar1 + 0x1d) = *(byte * )((longlong) plVar1 + 0x1d) & 0x7f;
                    *(byte * )((longlong) plVar1 + 0x1e) = *(byte * )((longlong) plVar1 + 0x1e) & 0xfe;
                    if ((plVar1[2] != 0) && ((*(byte * )(plVar1[2] + 0x1e) & 1) != 0)) {
                        FUN_1400cb660();
                    }
                    *(uint * )(plVar1 + 0x31) = *(uint * )(plVar1 + 0x31) | 3;
                    plVar1[0x30] = -1;
                    plVar5 = *(longlong * *)(longlong * )
                    plVar1[0x46];
                    if (plVar5 != (longlong *) plVar1[0x46]) {
                        do {
                            FUN_1400cb690(plVar5[2]);
                            plVar5 = (longlong * ) * plVar5;
                        } while (plVar5 != (longlong *) plVar1[0x46]);
                    }
                }
            }
            plVar4 = (longlong *) plVar4[1];
        } while (plVar4 != **(longlong * **)(param_3 + 0x38));
    }
    plVar4 = *(longlong * *)(param_3 + 0x38);
    if (plVar4 != (longlong * ) * plVar4) {
        fVar10 = 0.0;
        do {
            plVar1 = *(longlong * *)(plVar4[1] + 0x10);
            if ((*(byte * )((longlong) plVar1 + 0x1c) & 1) == 0) {
                lVar8 = *(longlong * )(param_3 + 0x68);
                plVar5 = (longlong *) FUN_14018b280(0x18);
                if ((longlong * *)(plVar5 + 2) != (longlong **) 0x0) {
                    plVar5[2] = (longlong) plVar1;
                }
                *plVar5 = lVar8;
                plVar5[1] = *(longlong * )(lVar8 + 8);
                **(longlong * **)(lVar8 + 8) = plVar5;
                *(longlong * *)(lVar8 + 8) = plVar5;
            } else if ((*(int *) (plVar1 + 5) + 1U < *(uint * )(plVar1 + 1)) ||
                       (fVar10 < *(float *) (plVar1 + 0x51))) {
                fVar9 = (float) (**(code **) plVar1[0x4e])();
                if ((fVar10 < fVar9) ||
                    ((*(char *) ((longlong) plVar1 + 0x284) != '\0' ||
                      (cVar3 = (**(code * *)(*plVar1 + 0x20))(plVar1), fVar9 = extraout_XMM0_Da, cVar3 != '\0')
                    ))) {
                    FUN_1400c88f0(fVar9, param_2, plVar1);
                }
            } else {
                FUN_1400c88f0(*(float *) (plVar1 + 0x51), param_2, plVar1);
            }
            plVar4 = (longlong *) plVar4[1];
        } while (plVar4 != **(longlong * **)(param_3 + 0x38));
    }
    plVar4 = (longlong * ) * *(longlong * *)(param_3 + 0x48);
    if (plVar4 != *(longlong * *)(param_3 + 0x48)) {
        do {
            plVar1 = (longlong *) plVar4[2];
            while (((plVar1 != (longlong *) 0x0 && ((*(byte * )((longlong) plVar1 + 0x1c) & 1) != 0)) &&
                    ((*(uint * )(plVar1 + 0x52) >> 0x12 & 1) == 0))) {
                lVar8 = plVar1[2];
                if (lVar8 == 0) {
                    pplVar2 = *(longlong * **)(param_3 + 0x38);
                    pplVar6 = (longlong * *) * pplVar2;
                    if (pplVar6 != pplVar2) {
                        do {
                            if (pplVar6[2] == plVar1) break;
                            pplVar6 = (longlong * *) * pplVar6;
                        } while (pplVar6 != pplVar2);
                        if (pplVar6 != pplVar2) {
                            plVar5 = *pplVar6;
                            pplVar2 = (longlong **) pplVar6[1];
                            *pplVar2 = plVar5;
                            plVar5[1] = (longlong) pplVar2;
                            FUN_14018b900(pplVar6, 0);
                            lVar8 = *(longlong * )(param_3 + 0x38);
                            goto LAB_14015764c;
                        }
                    }
                } else {
                    pplVar2 = *(longlong * **)(lVar8 + 0x230);
                    pplVar6 = (longlong * *) * pplVar2;
                    if (pplVar6 != pplVar2) {
                        do {
                            if (pplVar6[2] == plVar1) break;
                            pplVar6 = (longlong * *) * pplVar6;
                        } while (pplVar6 != pplVar2);
                        if (pplVar6 != pplVar2) {
                            plVar5 = *pplVar6;
                            pplVar2 = (longlong **) pplVar6[1];
                            *pplVar2 = plVar5;
                            plVar5[1] = (longlong) pplVar2;
                            FUN_14018b900(pplVar6, 0);
                            lVar8 = *(longlong * )(lVar8 + 0x230);
                            LAB_14015764c:
                            plVar5 = (longlong *) FUN_14018b280(0x18);
                            if ((longlong * *)(plVar5 + 2) != (longlong **) 0x0) {
                                plVar5[2] = (longlong) plVar1;
                            }
                            *plVar5 = lVar8;
                            plVar5[1] = *(longlong * )(lVar8 + 8);
                            **(longlong * **)(lVar8 + 8) = plVar5;
                            *(longlong * *)(lVar8 + 8) = plVar5;
                        }
                    }
                }
                plVar1 = (longlong *) plVar1[2];
            }
            if ((longlong *) plVar4[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) plVar4[2] + 8))();
            }
            plVar4 = (longlong * ) * plVar4;
        } while (plVar4 != (longlong * ) * (longlong * )(param_3 + 0x48));
    }
    plVar4 = (longlong * ) * *(longlong * *)(param_3 + 0x48);
    if (plVar4 != *(longlong * *)(param_3 + 0x48)) {
        do {
            plVar1 = (longlong * ) * plVar4;
            FUN_14018b900(plVar4, 0);
            plVar4 = plVar1;
        } while (plVar1 != (longlong * ) * (longlong * )(param_3 + 0x48));
    }
    *(undefined8 * ) * (undefined8 * )(param_3 + 0x48) = *(undefined8 * )(param_3 + 0x48);
    *(longlong * )(*(longlong * )(param_3 + 0x48) + 8) = *(longlong * )(param_3 + 0x48);
    plVar4 = (longlong * ) * *(longlong * *)(param_3 + 0x68);
    if (plVar4 != *(longlong * *)(param_3 + 0x68)) {
        do {
            pplVar2 = *(longlong * **)(param_3 + 0x38);
            plVar1 = (longlong *) plVar4[2];
            pplVar6 = (longlong * *) * pplVar2;
            if (pplVar6 != pplVar2) {
                do {
                    if (pplVar6[2] == plVar1) break;
                    pplVar6 = (longlong * *) * pplVar6;
                } while (pplVar6 != pplVar2);
                if (pplVar6 != pplVar2) {
                    plVar5 = *pplVar6;
                    pplVar2 = (longlong **) pplVar6[1];
                    *pplVar2 = plVar5;
                    plVar5[1] = (longlong) pplVar2;
                    FUN_14018b900(pplVar6, 0);
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 8))(plVar1);
                    }
                }
            }
            plVar4 = (longlong * ) * plVar4;
        } while (plVar4 != (longlong * ) * (longlong * )(param_3 + 0x68));
    }
    plVar4 = (longlong * ) * *(longlong * *)(param_3 + 0x68);
    if (plVar4 != *(longlong * *)(param_3 + 0x68)) {
        do {
            plVar1 = (longlong * ) * plVar4;
            FUN_14018b900(plVar4, 0);
            plVar4 = plVar1;
        } while (plVar1 != (longlong * ) * (longlong * )(param_3 + 0x68));
    }
    *(undefined8 * ) * (undefined8 * )(param_3 + 0x68) = *(undefined8 * )(param_3 + 0x68);
    *(longlong * )(*(longlong * )(param_3 + 0x68) + 8) = *(longlong * )(param_3 + 0x68);
    return;
}


void FUN_140157780(longlong param_1, int *param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5) {
    int iVar1;
    longlong lVar2;
    char cVar3;
    longlong *plVar4;
    int *piVar5;
    float *pfVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;
    undefined local_88[96];

    plVar4 = *(longlong * *)(param_1 + 0x38);
    if (plVar4 != (longlong * ) * plVar4) {
        fVar9 = 0.0;
        do {
            lVar2 = *(longlong * )(plVar4[1] + 0x10);
            if (((*(byte * )(lVar2 + 0x1c) & 0x10) == 0) &&
                (((char) *(byte * )(lVar2 + 0x1c) < '\0' ||
                  ((fVar9 < *(float *) (lVar2 + 0x288) &&
                    ((*(longlong * )(lVar2 + 0x10) == 0 || (cVar3 = FUN_1400d1a60(), cVar3 != '\0')))))))) {
                piVar5 = (int *) FUN_1400cb1c0();
                iVar1 = *param_2;
                if (((*piVar5 <= iVar1) &&
                     (((iVar1 < piVar5[2] && (piVar5[1] <= param_2[1])) && (param_2[1] < piVar5[3])))) ||
                    ((*(byte * )(lVar2 + 0x1c) & 0x80) != 0)) {
                    fVar7 = (float) iVar1;
                    fVar8 = (float) param_2[1];
                    pfVar6 = (float *) FUN_1400c98b0(0, lVar2, local_88);
                    local_a8 = fVar8 * pfVar6[4] + fVar7 * *pfVar6 + pfVar6[0xc];
                    fStack164 = fVar8 * pfVar6[5] + fVar7 * pfVar6[1] + pfVar6[0xd];
                    fStack160 = fVar8 * pfVar6[6] + fVar7 * pfVar6[2] + pfVar6[0xe];
                    fStack156 = fVar8 * pfVar6[7] + fVar7 * pfVar6[3] + pfVar6[0xf];
                    FUN_1400d0f30(lVar2, 1, param_3, param_4, param_5, &local_a8);
                }
            }
            plVar4 = (longlong *) plVar4[1];
        } while (plVar4 != **(longlong * **)(param_1 + 0x38));
    }
    return;
}


undefined4 *FUN_140157910(longlong param_1, undefined4 *param_2, float *param_3, longlong param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    char cVar9;
    int iVar10;
    undefined4 *puVar11;
    longlong lVar12;
    longlong *plVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    float fVar18;
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    float local_68;
    float fStack100;
    float fStack96;
    float fStack92;
    undefined local_58[16];
    undefined local_48[16];

    local_78 = *param_3;
    fStack116 = param_3[1];
    fStack112 = param_3[2];
    fStack108 = param_3[3];
    local_68 = param_3[4];
    fStack100 = param_3[5];
    fStack96 = param_3[6];
    fStack92 = param_3[7];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    plVar13 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
    if (plVar13 == *(longlong * *)(param_1 + 0x38)) {
        return param_2;
    }
    fVar18 = 0.0;
    lVar12 = param_4;
    do {
        lVar4 = plVar13[2];
        if ((fVar18 < *(float *) (lVar4 + 0x288)) &&
            (((*(longlong * )(lVar4 + 0x10) == 0 || (cVar9 = FUN_1400d1a60(), cVar9 != '\0')) &&
              (lVar4 != lVar12)))) {
            if ((*(byte * )(lVar4 + 0x1d) & 0x80) == 0) {
                puVar11 = (undefined4 *) FUN_1400cb0e0();
                *(undefined4 * )(lVar4 + 0x18c) = *puVar11;
                *(undefined4 * )(lVar4 + 400) = puVar11[1];
                *(undefined4 * )(lVar4 + 0x194) = puVar11[2];
                *(undefined4 * )(lVar4 + 0x198) = puVar11[3];
                *(byte * )(lVar4 + 0x1d) = *(byte * )(lVar4 + 0x1d) | 0x80;
                lVar12 = lVar4;
                do {
                    if (*(int *) (lVar12 + 0x188) == 0) break;
                    *(undefined4 * )(lVar12 + 0x188) = 0;
                    lVar12 = *(longlong * )(lVar12 + 0x10);
                } while (lVar12 != 0);
            }
            iVar10 = *(int *) (lVar4 + 0x18c);
            iVar16 = (int) fStack100;
            iVar17 = (int) local_78;
            iVar1 = *(int *) (lVar4 + 400);
            iVar2 = *(int *) (lVar4 + 0x194);
            iVar14 = (int) fStack116;
            iVar3 = *(int *) (lVar4 + 0x198);
            iVar15 = (int) local_68;
            iVar5 = iVar2;
            if (iVar15 < iVar2) {
                iVar5 = iVar15;
            }
            iVar6 = iVar3;
            if (iVar16 < iVar3) {
                iVar6 = iVar16;
            }
            iVar7 = iVar10;
            if (iVar10 < iVar17) {
                iVar7 = iVar17;
            }
            iVar8 = iVar1;
            if (iVar1 < iVar14) {
                iVar8 = iVar14;
            }
            if (((iVar7 < iVar5) && (iVar8 < iVar6)) ||
                (((lVar12 = param_4, iVar10 <= iVar17 && ((iVar15 <= iVar2 && (iVar1 <= iVar14)))) &&
                  (iVar16 <= iVar3)))) {
                local_48 = ZEXT816(CONCAT44((float) iVar3, (float) iVar2));
                local_58 = ZEXT816(CONCAT44((float) iVar1, (float) iVar10));
                iVar10 = FUN_140157b70(param_1, &local_78, local_58, param_2, param_4);
                lVar12 = param_4;
                if (iVar10 != 0) {
                    return param_2;
                }
            }
        }
        plVar13 = (longlong * ) * plVar13;
        if (plVar13 == (longlong * ) * (longlong * )(param_1 + 0x38)) {
            return param_2;
        }
    } while (true);
}


void FUN_140157b70(undefined8 param_1, undefined8 param_2, float *param_3, undefined (*param_4)[16],
                   undefined8 param_5) {
    float fVar1;
    float fVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;

    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    *param_4 = ZEXT816(0);
    lVar4 = (**(code * *)(*DAT_140c65670 + 0x248))();
    fVar1 = *param_3;
    iVar5 = *(int *) (lVar4 + 8) - (int) param_3[4];
    fVar2 = param_3[1];
    iVar6 = *(int *) (lVar4 + 0xc) - (int) param_3[5];
    if (iVar5 < (int) fVar1) {
        iVar3 = FUN_140157cb0();
    } else {
        iVar3 = FUN_140157db0(param_1, param_2, param_3, param_4, param_5);
    }
    if (iVar3 == 0) {
        if ((int) fVar2 < iVar6) {
            iVar3 = FUN_140157ec0();
        } else {
            iVar3 = FUN_140157ff0(param_1, param_2, param_3, param_4, param_5);
        }
        if (iVar3 == 0) {
            if (iVar5 < (int) fVar1) {
                iVar5 = FUN_140157db0();
            } else {
                iVar5 = FUN_140157cb0(param_1, param_2, param_3, param_4, param_5);
            }
            if (iVar5 == 0) {
                if ((int) fVar2 < iVar6) {
                    iVar5 = FUN_140157ff0();
                } else {
                    iVar5 = FUN_140157ec0(param_1, param_2, param_3, param_4, param_5);
                }
                if (iVar5 == 0) {
                    *param_4 = CONCAT412(uVar10, CONCAT48(uVar9, CONCAT44(uVar8, uVar7)));
                }
            }
        }
    }
    return;
}


undefined8
FUN_140157cb0(undefined8 param_1, float *param_2, float *param_3, undefined (*param_4)[16],
              undefined8 param_5) {
    longlong lVar1;
    undefined8 uVar2;
    float local_48;
    float local_44;
    float local_38;
    float local_34;
    undefined local_28[16];
    undefined local_18[16];

    *param_4 = ZEXT816(0);
    *(float *) *param_4 = (*param_3 - param_2[4]) - 10.0;
    lVar1 = (**(code * *)(*DAT_140c65670 + 0x248))();
    local_38 = param_2[4] + *(float *) *param_4;
    local_48 = *param_2 + *(float *) *param_4;
    local_18 = CONCAT412(param_2[7] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[6] + *(float *) (*param_4 + 8),
                                  CONCAT44(param_2[5] + *(float *) (*param_4 + 4), local_38)));
    local_28 = CONCAT412(param_2[3] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[2] + *(float *) (*param_4 + 8),
                                  CONCAT44(param_2[1] + *(float *) (*param_4 + 4), local_48)));
    if (0.0 <= local_48 - 10.0) {
        local_34 = (float) (ulonglong) * (uint * )(lVar1 + 0xc);
        if (param_3[5] <= (float) (ulonglong) * (uint * )(lVar1 + 0xc)) {
            local_34 = param_3[5];
        }
        local_44 = param_3[1];
        local_38 = local_38 + 10.0;
        uVar2 = FUN_1401580e0(param_1, local_28, &local_48, *param_4 + 4, param_5);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}


undefined8
FUN_140157db0(undefined8 param_1, float *param_2, longlong param_3, undefined (*param_4)[16],
              undefined8 param_5) {
    longlong lVar1;
    undefined8 uVar2;
    float local_48;
    undefined4 local_44;
    float local_38;
    float local_34;
    undefined local_28[16];
    undefined local_18[16];

    *param_4 = ZEXT816(0);
    *(float *) *param_4 = (*(float *) (param_3 + 0x10) - *param_2) + 10.0;
    lVar1 = (**(code * *)(*DAT_140c65670 + 0x248))();
    local_48 = *param_2 + *(float *) *param_4;
    local_38 = param_2[4] + *(float *) *param_4;
    local_28 = CONCAT412(param_2[3] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[2] + *(float *) (*param_4 + 8),
                                  CONCAT44(param_2[1] + *(float *) (*param_4 + 4), local_48)));
    local_18 = CONCAT412(param_2[7] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[6] + *(float *) (*param_4 + 8),
                                  CONCAT44(param_2[5] + *(float *) (*param_4 + 4), local_38)));
    if (local_38 + 10.0 <= (float) (ulonglong) * (uint * )(lVar1 + 8)) {
        local_34 = (float) (ulonglong) * (uint * )(lVar1 + 0xc);
        if (*(float *) (param_3 + 0x14) <= (float) (ulonglong) * (uint * )(lVar1 + 0xc)) {
            local_34 = *(float *) (param_3 + 0x14);
        }
        local_48 = local_48 - 10.0;
        local_44 = *(undefined4 * )(param_3 + 4);
        uVar2 = FUN_1401580e0(param_1, local_28, &local_48, *param_4 + 4, param_5);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}


undefined8
FUN_140157ec0(undefined8 param_1, float *param_2, undefined4 *param_3, undefined (*param_4)[16],
              undefined8 param_5) {
    longlong lVar1;
    undefined8 uVar2;
    float fVar3;
    undefined4 local_58;
    float local_54;
    float local_48;
    float local_44;
    undefined local_38[16];
    undefined local_28[16];

    fVar3 = 10.0;
    *param_4 = ZEXT816(0);
    *(float *) (*param_4 + 4) = ((float) param_3[1] - param_2[5]) - 10.0;
    lVar1 = (**(code * *)(*DAT_140c65670 + 0x248))();
    local_54 = param_2[1] + *(float *) (*param_4 + 4);
    local_44 = param_2[5] + *(float *) (*param_4 + 4);
    local_38 = CONCAT412(param_2[3] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[2] + *(float *) (*param_4 + 8),
                                  CONCAT44(local_54, *param_2 + *(float *) *param_4)));
    local_28 = CONCAT412(param_2[7] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[6] + *(float *) (*param_4 + 8),
                                  CONCAT44(local_44, param_2[4] + *(float *) *param_4)));
    if (((float) (ulonglong) * (uint * )(lVar1 + 0xc) < local_44 + fVar3) || (local_54 - fVar3 < 0.0)) {
        uVar2 = 0;
    } else {
        local_48 = (float) (ulonglong) * (uint * )(lVar1 + 8);
        if ((float) param_3[4] <= (float) (ulonglong) * (uint * )(lVar1 + 8)) {
            local_48 = (float) param_3[4];
        }
        local_58 = *param_3;
        local_44 = local_44 - fVar3;
        uVar2 = FUN_140158420(param_1, local_38, &local_58, param_4, param_5);
    }
    return uVar2;
}


void FUN_140157ff0(undefined8 param_1, float *param_2, undefined4 *param_3, undefined (*param_4)[16],
                   undefined8 param_5) {
    longlong lVar1;
    undefined4 local_48;
    float local_44;
    float local_38;
    float local_34;
    undefined local_28[16];
    undefined local_18[16];

    *param_4 = ZEXT816(0);
    *(float *) (*param_4 + 4) = ((float) param_3[5] - param_2[1]) + 10.0;
    lVar1 = (**(code * *)(*DAT_140c65670 + 0x248))();
    local_44 = param_2[1] + *(float *) (*param_4 + 4);
    local_34 = param_2[5] + *(float *) (*param_4 + 4);
    local_28 = CONCAT412(param_2[3] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[2] + *(float *) (*param_4 + 8),
                                  CONCAT44(local_44, *param_2 + *(float *) *param_4)));
    local_18 = CONCAT412(param_2[7] + *(float *) (*param_4 + 0xc),
                         CONCAT48(param_2[6] + *(float *) (*param_4 + 8),
                                  CONCAT44(local_34, param_2[4] + *(float *) *param_4)));
    local_38 = (float) (ulonglong) * (uint * )(lVar1 + 8);
    if ((float) param_3[4] <= (float) (ulonglong) * (uint * )(lVar1 + 8)) {
        local_38 = (float) param_3[4];
    }
    local_48 = *param_3;
    local_44 = local_44 + 10.0;
    FUN_140158420(param_1, local_28, &local_48, param_4, param_5);
    return;
}


ulonglong FUN_1401580e0(longlong param_1, float *param_2, longlong param_3, float *param_4,
                        longlong param_5) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    bool bVar11;
    bool bVar12;
    char cVar13;
    undefined4 *puVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    longlong *plVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    uint local_c8;
    int local_c4;

    fVar25 = 0.0;
    *param_4 = 0.0;
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar26 = -1.0;
    uVar16 = 0;
    local_c4 = 0;
    uVar17 = 1;
    local_c8 = 0;
    LAB_140158148:
    do {
        if ((int) uVar16 == 0) goto LAB_140158154;
        do {
            if (local_c4 != 0) {
                return 0;
            }
            LAB_140158154:
            fVar9 = *param_2;
            fVar10 = param_2[4];
            bVar11 = false;
            bVar12 = false;
            uVar16 = (ulonglong)(uint)(int)
            fVar9;
            iVar21 = (int) (param_2[5] + *param_4);
            iVar22 = (int) (param_2[1] + *param_4);
            plVar18 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
            if (plVar18 == *(longlong * *)(param_1 + 0x38)) {
                LAB_1401583ef:
                return uVar17 & 0xffffffff;
            }
            do {
                lVar5 = plVar18[2];
                if ((fVar25 < *(float *) (lVar5 + 0x288)) &&
                    (((*(longlong * )(lVar5 + 0x10) == 0 || (cVar13 = FUN_1400d1a60(), cVar13 != '\0')) &&
                      (iVar20 = (int) uVar16, lVar5 != param_5)))) {
                    if ((*(byte * )(lVar5 + 0x1d) & 0x80) == 0) {
                        puVar14 = (undefined4 *) FUN_1400cb0e0();
                        *(undefined4 * )(lVar5 + 0x18c) = *puVar14;
                        *(undefined4 * )(lVar5 + 400) = puVar14[1];
                        *(undefined4 * )(lVar5 + 0x194) = puVar14[2];
                        *(undefined4 * )(lVar5 + 0x198) = puVar14[3];
                        *(byte * )(lVar5 + 0x1d) = *(byte * )(lVar5 + 0x1d) | 0x80;
                        lVar15 = lVar5;
                        do {
                            if (*(int *) (lVar15 + 0x188) == 0) break;
                            *(undefined4 * )(lVar15 + 0x188) = 0;
                            lVar15 = *(longlong * )(lVar15 + 0x10);
                        } while (lVar15 != 0);
                        iVar20 = (int) fVar9;
                    }
                    iVar1 = *(int *) (lVar5 + 0x18c);
                    iVar2 = *(int *) (lVar5 + 400);
                    iVar3 = *(int *) (lVar5 + 0x194);
                    iVar4 = *(int *) (lVar5 + 0x198);
                    iVar19 = (int) fVar10;
                    iVar6 = iVar3;
                    if (iVar19 < iVar3) {
                        iVar6 = iVar19;
                    }
                    iVar7 = iVar4;
                    if (iVar21 < iVar4) {
                        iVar7 = iVar21;
                    }
                    iVar8 = iVar1;
                    if (iVar1 < iVar20) {
                        iVar8 = iVar20;
                    }
                    iVar20 = iVar2;
                    if (iVar2 < iVar22) {
                        iVar20 = iVar22;
                    }
                    if ((iVar8 < iVar6) && (iVar20 < iVar7)) {
                        uVar16 = (ulonglong)(uint)(int)
                        fVar9;
                    } else {
                        uVar16 = (ulonglong)(uint)(int)
                        fVar9;
                        if ((((int) fVar9 < iVar1) || ((iVar3 < iVar19 || (iVar22 < iVar2)))) || (iVar4 < iVar21)
                                ) {
                            uVar17 = 1;
                            goto LAB_1401582f2;
                        }
                    }
                    uVar17 = 1;
                    if (fVar24 < param_2[5] - (float) iVar2) {
                        bVar12 = true;
                        fVar24 = param_2[5] - (float) iVar2;
                    }
                    if (fVar23 < (float) iVar4 - param_2[1]) {
                        bVar12 = true;
                        fVar23 = (float) iVar4 - param_2[1];
                    }
                    bVar11 = true;
                    if (bVar12) goto LAB_140158310;
                }
                LAB_1401582f2:
                plVar18 = (longlong * ) * plVar18;
            } while (plVar18 != (longlong * ) * (longlong * )(param_1 + 0x38));
            if (!bVar11) goto LAB_1401583ef;
            if (!bVar12) {
                return 0;
            }
            LAB_140158310:
            uVar16 = (ulonglong) local_c8;
            if (param_2[1] - fVar24 < *(float *) (param_3 + 4)) {
                uVar16 = uVar17 & 0xffffffff;
            }
            local_c8 = (uint) uVar16;
            if (*(float *) (param_3 + 0x14) <= fVar23 + param_2[5] &&
                fVar23 + param_2[5] != *(float *) (param_3 + 0x14)) {
                local_c4 = (int) uVar17;
            }
            if (fVar23 <= fVar24) {
                if (local_c4 == 0) {
                    *param_4 = fVar23;
                }
                goto LAB_140158148;
            }
        } while (local_c8 != 0);
        *param_4 = fVar24 * fVar26;
    } while (true);
}


undefined8
FUN_140158420(longlong param_1, float *param_2, float *param_3, float *param_4, longlong param_5) {
    uint uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    char cVar13;
    int iVar14;
    undefined4 *puVar15;
    longlong lVar16;
    longlong *plVar17;
    uint uVar18;
    uint uVar19;
    int iVar21;
    bool bVar22;
    int iVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fStack132;
    ulonglong uVar20;

    fVar26 = 0.0;
    bVar22 = false;
    *param_4 = 0.0;
    fVar25 = 0.0;
    fVar24 = 0.0;
    fVar27 = -1.0;
    bVar12 = false;
    LAB_140158485:
    do {
        if (!bVar22) goto LAB_140158492;
        do {
            if (bVar12) {
                return 0;
            }
            LAB_140158492:
            bVar10 = false;
            bVar11 = false;
            fStack132 = SUB164(*(undefined(*)[16])(param_2 + 4) >> 0x20, 0);
            iVar23 = (int) fStack132;
            iVar21 = (int) param_2[1];
            iVar14 = (int) (*param_2 + *param_4);
            uVar18 = (uint)(SUB164(*(undefined(*)[16])(param_2 + 4), 0) + *param_4);
            uVar20 = (ulonglong) uVar18;
            plVar17 = (longlong * ) * *(longlong * *)(param_1 + 0x38);
            if (plVar17 == *(longlong * *)(param_1 + 0x38)) {
                return 1;
            }
            do {
                lVar5 = plVar17[2];
                if ((fVar26 < *(float *) (lVar5 + 0x288)) &&
                    (((*(longlong * )(lVar5 + 0x10) == 0 || (cVar13 = FUN_1400d1a60(), cVar13 != '\0')) &&
                      (lVar5 != param_5)))) {
                    uVar19 = (uint) uVar20;
                    if ((*(byte * )(lVar5 + 0x1d) & 0x80) == 0) {
                        puVar15 = (undefined4 *) FUN_1400cb0e0();
                        *(undefined4 * )(lVar5 + 0x18c) = *puVar15;
                        *(undefined4 * )(lVar5 + 400) = puVar15[1];
                        *(undefined4 * )(lVar5 + 0x194) = puVar15[2];
                        *(undefined4 * )(lVar5 + 0x198) = puVar15[3];
                        *(byte * )(lVar5 + 0x1d) = *(byte * )(lVar5 + 0x1d) | 0x80;
                        lVar16 = lVar5;
                        do {
                            uVar19 = uVar18;
                            if (*(int *) (lVar16 + 0x188) == 0) break;
                            *(undefined4 * )(lVar16 + 0x188) = 0;
                            lVar16 = *(longlong * )(lVar16 + 0x10);
                        } while (lVar16 != 0);
                    }
                    uVar1 = *(uint * )(lVar5 + 0x194);
                    iVar2 = *(int *) (lVar5 + 0x18c);
                    iVar3 = *(int *) (lVar5 + 400);
                    iVar4 = *(int *) (lVar5 + 0x198);
                    uVar6 = uVar1;
                    if ((int) uVar19 < (int) uVar1) {
                        uVar6 = uVar19;
                    }
                    iVar7 = iVar4;
                    if (iVar23 < iVar4) {
                        iVar7 = iVar23;
                    }
                    iVar8 = iVar2;
                    if (iVar2 < iVar14) {
                        iVar8 = iVar14;
                    }
                    iVar9 = iVar3;
                    if (iVar3 < iVar21) {
                        iVar9 = iVar21;
                    }
                    if (((iVar8 < (int) uVar6) && (iVar9 < iVar7)) ||
                        (((uVar20 = (ulonglong) uVar18, iVar2 <= iVar14 &&
                                                        (((int) uVar18 <= (int) uVar1 && (iVar3 <= iVar21)))) &&
                          (iVar23 <= iVar4)))) {
                        uVar20 = (ulonglong) uVar18;
                        if (fVar25 < param_2[4] - (float) iVar2) {
                            bVar11 = true;
                            fVar25 = param_2[4] - (float) iVar2;
                        }
                        if (fVar24 < (float) uVar1 - *param_2) {
                            bVar11 = true;
                            fVar24 = (float) uVar1 - *param_2;
                        }
                        bVar10 = true;
                        if (bVar11) goto LAB_140158649;
                    }
                }
                plVar17 = (longlong * ) * plVar17;
            } while (plVar17 != (longlong * ) * (longlong * )(param_1 + 0x38));
            if (!bVar10) {
                return 1;
            }
            if (!bVar11) {
                return 0;
            }
            LAB_140158649:
            if (*param_2 - fVar25 < *param_3) {
                bVar22 = true;
            }
            if (param_3[4] <= fVar24 + param_2[4] && fVar24 + param_2[4] != param_3[4]) {
                bVar12 = true;
            }
            if (fVar24 <= fVar25) {
                if (!bVar12) {
                    *param_4 = fVar24;
                }
                goto LAB_140158485;
            }
        } while (bVar22);
        *param_4 = fVar25 * fVar27;
    } while (true);
}


void FUN_140158750(longlong param_1) {
    longlong *plVar1;
    longlong **pplVar2;
    undefined8 uVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong **pplVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;
    int iVar10;
    longlong **pplVar11;
    ulonglong uVar12;
    int iVar13;
    undefined auStack1128[32];
    undefined local_448[8];
    longlong **local_440;
    undefined local_438[8];
    longlong *local_430;
    undefined local_428[1000];
    longlong *local_40;
    ulonglong local_38;
    longlong local_30;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1128;
    plVar5 = *(longlong * *)(param_1 + 8);
    if (((longlong * *) * plVar5 != (longlong **) plVar5) && (*(longlong * *) * plVar5 != plVar5)) {
        pplVar4 = (longlong **) FUN_14018b280(0x18);
        *pplVar4 = (longlong *) pplVar4;
        pplVar4[1] = (longlong *) pplVar4;
        iVar10 = 0x3f;
        pplVar6 = &local_430;
        local_440 = pplVar4;
        do {
            plVar5 = (longlong *) FUN_14018b280(0x18);
            iVar10 = iVar10 + -1;
            *plVar5 = (longlong) plVar5;
            *pplVar6 = plVar5;
            plVar5[1] = (longlong) plVar5;
            pplVar6 = pplVar6 + 2;
        } while (-1 < iVar10);
        pplVar6 = *(longlong * **)(param_1 + 8);
        iVar10 = 0;
        if ((longlong * *) * pplVar6 != pplVar6) {
            do {
                plVar5 = *pplVar6;
                plVar8 = *pplVar4;
                plVar1 = (longlong * ) * plVar5;
                if ((plVar8 != plVar5) && (plVar8 != plVar1)) {
                    *(longlong **) plVar1[1] = plVar8;
                    *(longlong **) plVar5[1] = plVar1;
                    *(longlong **) plVar8[1] = plVar5;
                    lVar9 = plVar8[1];
                    plVar8[1] = plVar1[1];
                    plVar1[1] = plVar5[1];
                    plVar5[1] = lVar9;
                }
                iVar13 = 0;
                lVar9 = 0;
                pplVar6 = pplVar4;
                if (0 < iVar10) {
                    pplVar11 = &local_430;
                    do {
                        pplVar2 = (longlong * *) * pplVar11;
                        pplVar6 = pplVar4;
                        if ((longlong * *) * pplVar2 == pplVar2) break;
                        FUN_1401589f0(local_438 + (longlong) iVar13 * 0x10, local_448, &LAB_1401572a0);
                        lVar9 = lVar9 + 1;
                        *pplVar11 = (longlong *) pplVar4;
                        pplVar11 = pplVar11 + 2;
                        iVar13 = iVar13 + 1;
                        pplVar6 = pplVar2;
                        pplVar4 = pplVar2;
                        local_440 = pplVar2;
                    } while (lVar9 < iVar10);
                }
                pplVar4 = *(longlong * **)(local_428 + lVar9 * 0x10 + -8);
                *(longlong * **)(local_428 + lVar9 * 0x10 + -8) = pplVar6;
                if (iVar13 == iVar10) {
                    iVar10 = iVar10 + 1;
                }
                pplVar6 = *(longlong * **)(param_1 + 8);
                local_440 = pplVar4;
            } while ((longlong * *) * pplVar6 != pplVar6);
        }
        iVar13 = 0x3f;
        if (1 < iVar10) {
            puVar7 = local_428;
            uVar12 = (ulonglong)(iVar10 - 1);
            do {
                FUN_1401589f0(puVar7, puVar7 + -0x10, &LAB_1401572a0);
                puVar7 = puVar7 + 0x10;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        plVar5 = &local_30;
        uVar3 = *(undefined8 * )(local_428 + (longlong)(iVar10 + -1) * 0x10 + -8);
        *(undefined8 * )(local_428 + (longlong)(iVar10 + -1) * 0x10 + -8) = *(undefined8 * )(param_1 + 8);
        *(undefined8 * )(param_1 + 8) = uVar3;
        do {
            pplVar6 = (longlong * *)(plVar5 + -2);
            plVar5 = plVar5 + -2;
            plVar8 = (longlong * ) * *pplVar6;
            if (plVar8 != *pplVar6) {
                do {
                    plVar1 = (longlong * ) * plVar8;
                    FUN_14018b900(plVar8, 0);
                    plVar8 = plVar1;
                } while (plVar1 != (longlong * ) * plVar5);
            }
            *(longlong * ) * plVar5 = *plVar5;
            *(longlong * )(*plVar5 + 8) = *plVar5;
            FUN_14018b900(*plVar5, 0);
            iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
        pplVar6 = (longlong * *) * pplVar4;
        while (pplVar6 != pplVar4) {
            pplVar11 = (longlong * *) * pplVar6;
            FUN_14018b900(pplVar6, 0);
            pplVar6 = pplVar11;
        }
        *pplVar4 = (longlong *) pplVar4;
        pplVar4[1] = (longlong *) pplVar4;
        FUN_14018b900(pplVar4, 0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1128);
    return;
}


void FUN_1401589f0(longlong param_1, longlong param_2, code *param_3) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    char cVar7;

    puVar1 = *(undefined8 * *)(param_1 + 8);
    puVar2 = *(undefined8 * *)(param_2 + 8);
    puVar3 = (undefined8 * ) * puVar1;
    puVar4 = (undefined8 * ) * puVar2;
    while (true) {
        puVar6 = puVar4;
        if (puVar3 == puVar1) {
            if ((puVar6 != puVar2) && (puVar1 != puVar2)) {
                *(undefined8 **) puVar2[1] = puVar1;
                *(undefined8 **) puVar6[1] = puVar2;
                *(undefined8 **) puVar1[1] = puVar6;
                uVar5 = puVar1[1];
                puVar1[1] = puVar2[1];
                puVar2[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
            return;
        }
        if (puVar6 == puVar2) break;
        cVar7 = (*param_3)(puVar6[2], puVar3[2]);
        if (cVar7 == '\0') {
            puVar3 = (undefined8 * ) * puVar3;
            puVar4 = puVar6;
        } else {
            puVar4 = (undefined8 * ) * puVar6;
            if (puVar3 != puVar4) {
                *(undefined8 **) puVar4[1] = puVar3;
                *(undefined8 **) puVar6[1] = puVar4;
                *(undefined8 **) puVar3[1] = puVar6;
                uVar5 = puVar3[1];
                puVar3[1] = puVar4[1];
                puVar4[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
        }
    }
    return;
}


void FUN_140158ad0(longlong param_1, short *param_2, short *param_3) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = 0;
    sVar1 = *param_2;
    lVar2 = lVar3;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = param_2[lVar2];
    }
    FUN_14001c480(param_1 + 0xa0, param_2, param_2 + lVar2);
    sVar1 = *param_3;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_3[lVar3];
    }
    FUN_14001c480(param_1 + 0xc0, param_3, param_3 + lVar3);
    return;
}


undefined8 *
FUN_140158b40(undefined8 *param_1, short *param_2, longlong param_3, undefined8 param_4, short *param_5,
              undefined8 *param_6, undefined param_7) {
    short sVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined *puVar5;
    undefined2 *puVar6;
    undefined local_38[8];
    longlong local_30;

    *(undefined * )(param_1 + 1) = 0;
    *(undefined * )((longlong) param_1 + 10) = 1;
    lVar4 = 0;
    *param_1 = &PTR_FUN_140b5cae0;
    *(undefined * )((longlong) param_1 + 9) = param_7;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    sVar1 = *param_2;
    lVar3 = lVar4;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_2[lVar3];
    }
    FUN_14001c1b0(param_1 + 2, param_2, param_2 + lVar3);
    FUN_1401095e0(param_1 + 6);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    sVar1 = *param_5;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_5[lVar4];
    }
    FUN_14001c1b0(param_1 + 0xc, param_5, param_5 + lVar4);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar5 = (undefined *) FUN_14018b280(8);
    param_1[0x11] = puVar5;
    param_1[0x12] = puVar5;
    param_1[0x13] = puVar5 + 8;
    if (puVar5 != (undefined *) 0x0) {
        *puVar5 = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x15] = puVar6;
    param_1[0x16] = puVar6;
    param_1[0x17] = puVar6 + 8;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x19] = puVar6;
    param_1[0x1a] = puVar6;
    param_1[0x1b] = puVar6 + 8;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    param_1[0x1c] = param_6;
    if (param_6 != (undefined8 *) 0x0) {
        (**(code * *) * param_6)();
    }
    if (param_3 != 0) {
        FUN_140109710(param_1 + 6, param_3 + 0xf0, param_4, 0);
    }
    lVar4 = FUN_14018f0e0(local_38, param_5);
    uVar2 = param_1[0x11];
    param_1[0x11] = *(undefined8 * )(lVar4 + 8);
    *(undefined8 * )(lVar4 + 8) = uVar2;
    uVar2 = param_1[0x12];
    param_1[0x12] = *(undefined8 * )(lVar4 + 0x10);
    *(undefined8 * )(lVar4 + 0x10) = uVar2;
    uVar2 = param_1[0x13];
    param_1[0x13] = *(undefined8 * )(lVar4 + 0x18);
    *(undefined8 * )(lVar4 + 0x18) = uVar2;
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    return param_1;
}


undefined8 FUN_140158d70(undefined8 param_1, ulonglong param_2) {
    FUN_140158f10();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_140158db0(undefined8 *param_1) {
    undefined2 *puVar1;
    undefined *puVar2;

    *(undefined2 * )(param_1 + 1) = 1;
    *(undefined * )((longlong) param_1 + 10) = 1;
    *param_1 = &PTR_FUN_140b5cae0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = puVar1;
    param_1[4] = puVar1;
    param_1[5] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    FUN_1401095e0(param_1 + 6);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xd] = puVar1;
    param_1[0xe] = puVar1;
    param_1[0xf] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar2 = (undefined *) FUN_14018b280(8);
    param_1[0x11] = puVar2;
    param_1[0x12] = puVar2;
    param_1[0x13] = puVar2 + 8;
    if (puVar2 != (undefined *) 0x0) {
        *puVar2 = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x15] = puVar1;
    param_1[0x16] = puVar1;
    param_1[0x17] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x19] = puVar1;
    param_1[0x1a] = puVar1;
    param_1[0x1b] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x1c] = 0;
    return param_1;
}


void FUN_140158f10(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b5cae0;
    if ((longlong *) param_1[0x1c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x1c] + 8))();
        param_1[0x1c] = 0;
    }
    if (param_1[0x19] != 0) {
        FUN_14018b900(param_1[0x19], 0);
    }
    if (param_1[0x15] != 0) {
        FUN_14018b900(param_1[0x15], 0);
    }
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11], 0);
    }
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd], 0);
    }
    if ((longlong *) param_1[6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[6] + 8))();
        param_1[6] = 0;
    }
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
        return;
    }
    return;
}


undefined8 *FUN_140158fd0(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[3] = 0;
    *param_1 = &PTR_LAB_140b5cac8;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[9] = puVar1;
    param_1[10] = puVar1;
    param_1[0xb] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xd] = puVar1;
    param_1[0xe] = puVar1;
    param_1[0xf] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x11] = puVar1;
    param_1[0x12] = puVar1;
    param_1[0x13] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x15] = puVar1;
    param_1[0x16] = puVar1;
    param_1[0x17] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x2d] = puVar1;
    param_1[0x2e] = puVar1;
    param_1[0x2f] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    FUN_140159310(param_1);
    return param_1;
}


undefined8 FUN_140159150(undefined8 param_1, ulonglong param_2) {
    FUN_140159780();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_140159190(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[3] = param_2;
    param_1[2] = 0;
    *param_1 = &PTR_LAB_140b5cac8;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[9] = puVar1;
    param_1[10] = puVar1;
    param_1[0xb] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xd] = puVar1;
    param_1[0xe] = puVar1;
    param_1[0xf] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x11] = puVar1;
    param_1[0x12] = puVar1;
    param_1[0x13] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x15] = puVar1;
    param_1[0x16] = puVar1;
    param_1[0x17] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0x2d] = puVar1;
    param_1[0x2e] = puVar1;
    param_1[0x2f] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    FUN_140159310(param_1);
    return param_1;
}


void FUN_140159310(longlong param_1) {
    short sVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    short *psVar7;
    short *psVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong uVar11;

    lVar10 = *(longlong * )(param_1 + 0x18);
    if (lVar10 != 0) {
        *(undefined8 * )(param_1 + 0x10) = *(undefined8 * )(lVar10 + 0x10);
        psVar7 = (short *) &DAT_1409dbd34;
        if (*(short **) (lVar10 + 0x48) != (short *) 0x0) {
            psVar7 = *(short **) (lVar10 + 0x48);
        }
        lVar10 = 0;
        sVar1 = *psVar7;
        lVar6 = lVar10;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar7[lVar6];
        }
        FUN_14001c480(param_1 + 0x40, psVar7, psVar7 + lVar6);
        psVar7 = *(short **) (*(longlong * )(param_1 + 0x18) + 0xa8);
        psVar8 = (short *) &DAT_1409dbd7c;
        if (psVar7 != (short *) 0x0) {
            psVar8 = psVar7;
        }
        sVar1 = *psVar8;
        lVar6 = lVar10;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar8[lVar6];
        }
        FUN_14001c480(param_1 + 0xa0, psVar8, psVar8 + lVar6);
        psVar7 = *(short **) (*(longlong * )(param_1 + 0x18) + 0x88);
        psVar8 = (short *) &DAT_1409dbd4c;
        if (psVar7 != (short *) 0x0) {
            psVar8 = psVar7;
        }
        sVar1 = *psVar8;
        lVar6 = lVar10;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar8[lVar6];
        }
        FUN_14001c480(param_1 + 0x80, psVar8, psVar8 + lVar6);
        psVar7 = *(short **) (*(longlong * )(param_1 + 0x18) + 0x68);
        psVar8 = (short *) &DAT_1409dbd9c;
        if (psVar7 != (short *) 0x0) {
            psVar8 = psVar7;
        }
        sVar1 = *psVar8;
        while (sVar1 != 0) {
            lVar10 = lVar10 + 1;
            sVar1 = psVar8[lVar10];
        }
        FUN_14001c480(param_1 + 0x60, psVar8, psVar8 + lVar10);
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0xc4);
        uVar4 = *(undefined4 * )(lVar10 + 200);
        uVar5 = *(undefined4 * )(lVar10 + 0xcc);
        *(undefined4 * )(param_1 + 0xc0) = *(undefined4 * )(lVar10 + 0xc0);
        *(undefined4 * )(param_1 + 0xc4) = uVar3;
        *(undefined4 * )(param_1 + 200) = uVar4;
        *(undefined4 * )(param_1 + 0xcc) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0xd4);
        uVar4 = *(undefined4 * )(lVar10 + 0xd8);
        uVar5 = *(undefined4 * )(lVar10 + 0xdc);
        *(undefined4 * )(param_1 + 0xd0) = *(undefined4 * )(lVar10 + 0xd0);
        *(undefined4 * )(param_1 + 0xd4) = uVar3;
        *(undefined4 * )(param_1 + 0xd8) = uVar4;
        *(undefined4 * )(param_1 + 0xdc) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0xe4);
        uVar4 = *(undefined4 * )(lVar10 + 0xe8);
        uVar5 = *(undefined4 * )(lVar10 + 0xec);
        *(undefined4 * )(param_1 + 0xe0) = *(undefined4 * )(lVar10 + 0xe0);
        *(undefined4 * )(param_1 + 0xe4) = uVar3;
        *(undefined4 * )(param_1 + 0xe8) = uVar4;
        *(undefined4 * )(param_1 + 0xec) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0xf4);
        uVar4 = *(undefined4 * )(lVar10 + 0xf8);
        uVar5 = *(undefined4 * )(lVar10 + 0xfc);
        *(undefined4 * )(param_1 + 0xf0) = *(undefined4 * )(lVar10 + 0xf0);
        *(undefined4 * )(param_1 + 0xf4) = uVar3;
        *(undefined4 * )(param_1 + 0xf8) = uVar4;
        *(undefined4 * )(param_1 + 0xfc) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0x104);
        uVar4 = *(undefined4 * )(lVar10 + 0x108);
        uVar5 = *(undefined4 * )(lVar10 + 0x10c);
        *(undefined4 * )(param_1 + 0x100) = *(undefined4 * )(lVar10 + 0x100);
        *(undefined4 * )(param_1 + 0x104) = uVar3;
        *(undefined4 * )(param_1 + 0x108) = uVar4;
        *(undefined4 * )(param_1 + 0x10c) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0x114);
        uVar4 = *(undefined4 * )(lVar10 + 0x118);
        uVar5 = *(undefined4 * )(lVar10 + 0x11c);
        *(undefined4 * )(param_1 + 0x110) = *(undefined4 * )(lVar10 + 0x110);
        *(undefined4 * )(param_1 + 0x114) = uVar3;
        *(undefined4 * )(param_1 + 0x118) = uVar4;
        *(undefined4 * )(param_1 + 0x11c) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0x124);
        uVar4 = *(undefined4 * )(lVar10 + 0x128);
        uVar5 = *(undefined4 * )(lVar10 + 300);
        *(undefined4 * )(param_1 + 0x120) = *(undefined4 * )(lVar10 + 0x120);
        *(undefined4 * )(param_1 + 0x124) = uVar3;
        *(undefined4 * )(param_1 + 0x128) = uVar4;
        *(undefined4 * )(param_1 + 300) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0x134);
        uVar4 = *(undefined4 * )(lVar10 + 0x138);
        uVar5 = *(undefined4 * )(lVar10 + 0x13c);
        *(undefined4 * )(param_1 + 0x130) = *(undefined4 * )(lVar10 + 0x130);
        *(undefined4 * )(param_1 + 0x134) = uVar3;
        *(undefined4 * )(param_1 + 0x138) = uVar4;
        *(undefined4 * )(param_1 + 0x13c) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0x144);
        uVar4 = *(undefined4 * )(lVar10 + 0x148);
        uVar5 = *(undefined4 * )(lVar10 + 0x14c);
        *(undefined4 * )(param_1 + 0x140) = *(undefined4 * )(lVar10 + 0x140);
        *(undefined4 * )(param_1 + 0x144) = uVar3;
        *(undefined4 * )(param_1 + 0x148) = uVar4;
        *(undefined4 * )(param_1 + 0x14c) = uVar5;
        lVar10 = *(longlong * )(param_1 + 0x18);
        uVar3 = *(undefined4 * )(lVar10 + 0x154);
        uVar4 = *(undefined4 * )(lVar10 + 0x158);
        uVar5 = *(undefined4 * )(lVar10 + 0x15c);
        *(undefined4 * )(param_1 + 0x150) = *(undefined4 * )(lVar10 + 0x150);
        *(undefined4 * )(param_1 + 0x154) = uVar3;
        *(undefined4 * )(param_1 + 0x158) = uVar4;
        *(undefined4 * )(param_1 + 0x15c) = uVar5;
        return;
    }
    lVar6 = 0;
    lVar10 = lVar6;
    do {
        lVar2 = lVar10 + 1;
        lVar10 = lVar10 + 1;
    } while (L"Default"[lVar2] != L'\0');
    lVar2 = *(longlong * )(param_1 + 0x48);
    uVar11 = *(longlong * )(param_1 + 0x50) - lVar2 >> 1;
    uVar9 = lVar10 * 2 >> 1;
    if (uVar11 < uVar9) {
        FUN_1407db590(lVar2, L"Default", uVar11 * 2);
        FUN_14001c310(param_1 + 0x40,
                      L"Default" + (*(longlong * )(param_1 + 0x50) - *(longlong * )(param_1 + 0x48) >> 1),
                      L"Default" + lVar10);
    } else {
        lVar10 = uVar9 * 2;
        FUN_1407db590(lVar2, L"Default", lVar10);
        FUN_14001c2b0(param_1 + 0x40, *(longlong * )(param_1 + 0x48) + lVar10,
                      *(undefined8 * )(param_1 + 0x50));
    }
    lVar10 = lVar6;
    do {
        lVar2 = lVar10 + 1;
        lVar10 = lVar10 + 1;
    } while (L"Default"[lVar2] != L'\0');
    lVar2 = *(longlong * )(param_1 + 0xa8);
    uVar11 = *(longlong * )(param_1 + 0xb0) - lVar2 >> 1;
    uVar9 = lVar10 * 2 >> 1;
    if (uVar11 < uVar9) {
        FUN_1407db590(lVar2, L"Default", uVar11 * 2);
        FUN_14001c310(param_1 + 0xa0,
                      L"Default" + (*(longlong * )(param_1 + 0xb0) - *(longlong * )(param_1 + 0xa8) >> 1),
                      L"Default" + lVar10);
    } else {
        lVar10 = uVar9 * 2;
        FUN_1407db590(lVar2, L"Default", lVar10);
        FUN_14001c2b0(param_1 + 0xa0, *(longlong * )(param_1 + 0xa8) + lVar10,
                      *(undefined8 * )(param_1 + 0xb0));
    }
    lVar10 = lVar6;
    do {
        lVar2 = lVar10 + 1;
        lVar10 = lVar10 + 1;
    } while (L"TargetOffscreenRight"[lVar2] != L'\0');
    lVar2 = *(longlong * )(param_1 + 0x88);
    uVar11 = *(longlong * )(param_1 + 0x90) - lVar2 >> 1;
    uVar9 = lVar10 * 2 >> 1;
    if (uVar11 < uVar9) {
        FUN_1407db590(lVar2, L"TargetOffscreenRight", uVar11 * 2);
        FUN_14001c310(param_1 + 0x80,
                      L"TargetOffscreenRight" +
                      (*(longlong * )(param_1 + 0x90) - *(longlong * )(param_1 + 0x88) >> 1),
                      L"TargetOffscreenRight" + lVar10);
    } else {
        lVar10 = uVar9 * 2;
        FUN_1407db590(lVar2, L"TargetOffscreenRight", lVar10);
        FUN_14001c2b0(param_1 + 0x80, *(longlong * )(param_1 + 0x88) + lVar10,
                      *(undefined8 * )(param_1 + 0x90));
    }
    do {
        lVar10 = lVar6 + 1;
        lVar6 = lVar6 + 1;
    } while (L"WhiteFill"[lVar10] != L'\0');
    lVar10 = *(longlong * )(param_1 + 0x68);
    uVar11 = *(longlong * )(param_1 + 0x70) - lVar10 >> 1;
    uVar9 = lVar6 * 2 >> 1;
    if (uVar11 < uVar9) {
        FUN_1407db590(lVar10, L"WhiteFill", uVar11 * 2);
        FUN_14001c310(param_1 + 0x60,
                      L"WhiteFill" +
                      (*(longlong * )(param_1 + 0x70) - *(longlong * )(param_1 + 0x68) >> 1),
                      L"WhiteFill" + lVar6);
    } else {
        lVar6 = uVar9 * 2;
        FUN_1407db590(lVar10, L"WhiteFill", lVar6);
        FUN_14001c2b0(param_1 + 0x60, *(longlong * )(param_1 + 0x68) + lVar6,
                      *(undefined8 * )(param_1 + 0x70));
    }
    *(undefined4 * )(param_1 + 0xc0) = 0;
    *(undefined4 * )(param_1 + 0xc4) = 0;
    *(undefined4 * )(param_1 + 200) = 0;
    *(undefined4 * )(param_1 + 0xcc) = 0x3f800000;
    *(undefined4 * )(param_1 + 0xd0) = 0;
    *(undefined4 * )(param_1 + 0xd4) = 0;
    *(undefined4 * )(param_1 + 0xd8) = 0x3f800000;
    *(undefined4 * )(param_1 + 0xdc) = 0x3f800000;
    *(undefined4 * )(param_1 + 0xe0) = 0;
    *(undefined4 * )(param_1 + 0xe4) = 0;
    *(undefined4 * )(param_1 + 0xe8) = 0;
    *(undefined4 * )(param_1 + 0xec) = 0x3f800000;
    *(undefined4 * )(param_1 + 0xf0) = 0;
    *(undefined4 * )(param_1 + 0xf4) = 0;
    *(undefined4 * )(param_1 + 0xf8) = 0x3f800000;
    *(undefined4 * )(param_1 + 0xfc) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x100) = 0;
    *(undefined4 * )(param_1 + 0x104) = 0;
    *(undefined4 * )(param_1 + 0x108) = 0;
    *(undefined4 * )(param_1 + 0x10c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x110) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x114) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x118) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x11c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x120) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x124) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x128) = 0x3f800000;
    *(undefined4 * )(param_1 + 300) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x130) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x134) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x138) = 0;
    *(undefined4 * )(param_1 + 0x13c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x140) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x144) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x148) = 0;
    *(undefined4 * )(param_1 + 0x14c) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x150) = 0x3f000000;
    *(undefined4 * )(param_1 + 0x154) = 0x3f000000;
    *(undefined4 * )(param_1 + 0x158) = 0x3f000000;
    *(undefined4 * )(param_1 + 0x15c) = 0x3f800000;
    return;
}


void FUN_140159780(undefined8 *param_1) {
    undefined8 *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *) param_1[5];
    *param_1 = &PTR_LAB_140b5cac8;
    if (plVar2 != (longlong *) param_1[6]) {
        do {
            puVar1 = (undefined8 * ) * plVar2;
            if (puVar1 != (undefined8 *) 0x0) {
                (**(code * *) * puVar1)(puVar1, 1);
            }
            plVar2 = plVar2 + 1;
        } while (plVar2 != (longlong *) param_1[6]);
    }
    if (param_1[0x2d] != 0) {
        FUN_14018b900(param_1[0x2d], 0);
    }
    if (param_1[0x15] != 0) {
        FUN_14018b900(param_1[0x15], 0);
    }
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11], 0);
    }
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd], 0);
    }
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
    }
    if (param_1[5] != 0) {
        FUN_14018b900(param_1[5], 0);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140159840(longlong param_1, undefined8 param_2) {
    ulonglong uVar1;
    short sVar2;
    short **ppsVar3;
    char cVar4;
    short sVar7;
    short sVar8;
    short sVar9;
    unkbyte10 Var10;
    undefined auVar11[12];
    undefined auVar12[14];
    short sVar13;
    undefined4 uVar14;
    undefined6 uVar15;
    ulonglong uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    longlong lVar19;
    char cVar20;
    longlong lVar21;
    short *psVar22;
    short *psVar23;
    uint *puVar24;
    undefined2 *puVar25;
    wchar_t *pwVar26;
    undefined8 uVar27;
    longlong *plVar28;
    undefined2 *puVar29;
    short *psVar30;
    undefined4 *puVar31;
    short *psVar32;
    short *psVar33;
    wchar_t *pwVar34;
    bool bVar35;
    int iVar36;
    uint uVar38;
    int iVar39;
    undefined auVar37[16];
    int iVar40;
    char cVar41;
    char cVar42;
    undefined in_XMM6[16];
    undefined auVar43[16];
    undefined4 uVar44;
    undefined4 uVar45;
    undefined4 uVar46;
    undefined4 uVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    int local_res18[2];
    int local_res20[2];
    longlong local_b0;
    short *local_a8;
    longlong local_a0;
    longlong local_98;
    longlong local_90;
    longlong local_88;
    undefined local_80[8];
    longlong local_78;
    char cVar5;
    char cVar6;

    psVar30 = *(short **) (param_1 + 0x48);
    lVar21 = FUN_1401a6b80(param_2, L"Template");
    psVar23 = (short *) 0x0;
    psVar22 = psVar23;
    if (lVar21 != 0) {
        psVar22 = (short *) FUN_1401a4f40(lVar21 + 0x20);
    }
    if (psVar22 != (short *) 0x0) {
        psVar30 = psVar22;
    }
    sVar2 = *psVar30;
    psVar22 = psVar23;
    while (sVar2 != 0) {
        psVar22 = (short *) ((longlong) psVar22 + 1);
        sVar2 = psVar30[(longlong) psVar22];
    }
    FUN_14001c480(param_1 + 0x40, psVar30, psVar30 + (longlong) psVar22);
    psVar30 = *(short **) (param_1 + 0xa8);
    lVar21 = FUN_1401a6b80(param_2, &DAT_140a31aa8);
    psVar22 = psVar23;
    if (lVar21 != 0) {
        psVar22 = (short *) FUN_1401a4f40(lVar21 + 0x20);
    }
    if (psVar22 != (short *) 0x0) {
        psVar30 = psVar22;
    }
    sVar2 = *psVar30;
    psVar22 = psVar23;
    while (sVar2 != 0) {
        psVar22 = (short *) ((longlong) psVar22 + 1);
        sVar2 = psVar30[(longlong) psVar22];
    }
    FUN_14001c480(param_1 + 0xa0, psVar30, psVar30 + (longlong) psVar22);
    psVar30 = *(short **) (param_1 + 0x68);
    lVar21 = FUN_1401a6b80(param_2, L"Base");
    psVar22 = psVar23;
    if (lVar21 != 0) {
        psVar22 = (short *) FUN_1401a4f40(lVar21 + 0x20);
    }
    if (psVar22 != (short *) 0x0) {
        psVar30 = psVar22;
    }
    sVar2 = *psVar30;
    while (sVar2 != 0) {
        psVar23 = (short *) ((longlong) psVar23 + 1);
        sVar2 = psVar30[(longlong) psVar23];
    }
    FUN_14001c480(param_1 + 0x60, psVar30, psVar30 + (longlong) psVar23);
    uVar44 = SUB164(_DAT_140b7b240, 0);
    uVar45 = SUB164(_DAT_140b7b240 >> 0x20, 0);
    uVar46 = SUB164(_DAT_140b7b240 >> 0x40, 0);
    uVar47 = SUB164(_DAT_140b7b240 >> 0x60, 0);
    fVar48 = 255.0;
    fVar49 = 255.0;
    fVar50 = 255.0;
    fVar51 = 255.0;
    fVar52 = 0.5;
    fVar53 = 0.5;
    fVar54 = 0.5;
    fVar55 = 0.5;
    auVar43 = in_XMM6 & (undefined[16]) 0x0;
    auVar37 = maxps(ZEXT1216(CONCAT48(SUB164(auVar43 >> 0x40, 0), (ulonglong) SUB164(in_XMM6, 0)) &
                             (undefined[12]) 0xffffffffffffffff),
                    *(undefined(*)[16])(param_1 + 0xc0));
    auVar37 = minps(auVar37, _DAT_140b7b240);
    iVar36 = (int) (SUB164(auVar37, 0) * 255.0 + 0.5);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * 255.0 + 0.5);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * 255.0 + 0.5);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * 255.0 + 0.5);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar20 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar20);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar5, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar6, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"BGNormalColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar4 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar20
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0xc0) = *puVar31;
    *(undefined4 * )(param_1 + 0xc4) = uVar14;
    *(undefined4 * )(param_1 + 200) = uVar17;
    *(undefined4 * )(param_1 + 0xcc) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0xd0));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar20 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar20);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar5, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar6, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"BGSelectedColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar4 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar20
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0xd0) = *puVar31;
    *(undefined4 * )(param_1 + 0xd4) = uVar14;
    *(undefined4 * )(param_1 + 0xd8) = uVar17;
    *(undefined4 * )(param_1 + 0xdc) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0xe0));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar20 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar20);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar5, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar6, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"BGNormalFocusColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar4 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar20
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0xe0) = *puVar31;
    *(undefined4 * )(param_1 + 0xe4) = uVar14;
    *(undefined4 * )(param_1 + 0xe8) = uVar17;
    *(undefined4 * )(param_1 + 0xec) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0xf0));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar20 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar20);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar5, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar6, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"BGSelectedFocusColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar4 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar20
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0xf0) = *puVar31;
    *(undefined4 * )(param_1 + 0xf4) = uVar14;
    *(undefined4 * )(param_1 + 0xf8) = uVar17;
    *(undefined4 * )(param_1 + 0xfc) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0x100));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar20 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar20);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar5, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar6, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"BGSelectedFocusColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar4 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar20
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0x100) = *puVar31;
    *(undefined4 * )(param_1 + 0x104) = uVar14;
    *(undefined4 * )(param_1 + 0x108) = uVar17;
    *(undefined4 * )(param_1 + 0x10c) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0x110));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar4 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar5 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar6 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar20 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar4);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar5, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar6, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar20, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"TextNormalColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar20 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar6 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar5 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar4
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0x110) = *puVar31;
    *(undefined4 * )(param_1 + 0x114) = uVar14;
    *(undefined4 * )(param_1 + 0x118) = uVar17;
    *(undefined4 * )(param_1 + 0x11c) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0x120));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar6 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar5 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar20 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar6);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar5, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar4, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar20, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"TextSelectedColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar20 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar5 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar6
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0x120) = *puVar31;
    *(undefined4 * )(param_1 + 0x124) = uVar14;
    *(undefined4 * )(param_1 + 0x128) = uVar17;
    *(undefined4 * )(param_1 + 300) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0x130));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar4 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar20 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar6 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar4);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar20, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar6, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar5, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"TextNormalFocusColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar6 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar20 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar4
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0x130) = *puVar31;
    *(undefined4 * )(param_1 + 0x134) = uVar14;
    *(undefined4 * )(param_1 + 0x138) = uVar17;
    *(undefined4 * )(param_1 + 0x13c) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0x140));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar4 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar5 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar6 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar20 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar4);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar5, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar6, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar20, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"TextSelectedFocusColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar20 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar6 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar5 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar4
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar17 = puVar31[2];
    uVar18 = puVar31[3];
    *(undefined4 * )(param_1 + 0x140) = *puVar31;
    *(undefined4 * )(param_1 + 0x144) = uVar14;
    *(undefined4 * )(param_1 + 0x148) = uVar17;
    *(undefined4 * )(param_1 + 0x14c) = uVar18;
    FUN_1401429a0(lVar21, local_res18[0]);
    auVar37 = maxps(auVar43, *(undefined(*)[16])(param_1 + 0x150));
    auVar37 = minps(auVar37, CONCAT412(uVar47, CONCAT48(uVar46, CONCAT44(uVar45, uVar44))));
    iVar36 = (int) (SUB164(auVar37, 0) * fVar48 + fVar52);
    uVar38 = (uint)(SUB164(auVar37 >> 0x20, 0) * fVar49 + fVar53);
    iVar39 = (int) (SUB164(auVar37 >> 0x40, 0) * fVar50 + fVar54);
    iVar40 = (int) (SUB164(auVar37 >> 0x60, 0) * fVar51 + fVar55);
    cVar41 = (char) ((uint) iVar36 >> 0x10);
    cVar42 = (char) ((uint) iVar40 >> 0x10);
    uVar16 = (ulonglong)
            CONCAT16((char) (uVar38 >> 0x10),
                     CONCAT15((char) (uVar38 >> 8), CONCAT14((char) uVar38, iVar39)));
    uVar1 = ((ulonglong) uVar38 & 0xff000000) << 0x20 | uVar16;
    Var10 = CONCAT19((char) ((uint) iVar36 >> 8), CONCAT18((char) iVar36, uVar1));
    auVar11 = CONCAT111((char) ((uint) iVar36 >> 0x18), CONCAT110(cVar41, Var10));
    auVar12 = CONCAT113((char) ((uint) iVar40 >> 8), CONCAT112((char) iVar40, auVar11));
    sVar2 = (short) iVar39;
    cVar20 = (0 < sVar2) * (sVar2 < 0xff) * (char) iVar39 - (0xff < sVar2);
    sVar2 = (short) (uVar16 >> 0x10);
    sVar7 = (short) (uVar16 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
    sVar7 = (short) (uVar1 >> 0x30);
    sVar8 = (short) ((unkuint10) Var10 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar36 - (0xff < sVar8);
    sVar8 = SUB122(auVar11 >> 0x50, 0);
    sVar9 = SUB142(auVar12 >> 0x60, 0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar40 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char) ((uint) iVar40 >> 0x18), CONCAT114(cVar42, auVar12)) >> 0x70, 0);
    sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar2), cVar20);
    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4, sVar13));
    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8), CONCAT14(cVar5, uVar14));
    sVar2 = (short) ((uint) uVar14 >> 0x10);
    sVar7 = (short) ((uint6) uVar15 >> 0x20);
    sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar42 - (0xff < sVar9),
                              CONCAT16(cVar6, uVar15)) >> 0x30);
    puVar24 = (uint *) FUN_1400f66f0(local_res18, param_2, L"TextDisabledColor",
                                     CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                              CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 -
                                                       (0xff < sVar7),
                                                       CONCAT11((0 < sVar2) * (sVar2 < 0xff) * cVar4 -
                                                                (0xff < sVar2),
                                                                (0 < sVar13) * (sVar13 < 0xff) * cVar20
                                                                - (0xff < sVar13)))));
    lVar21 = DAT_140c63678;
    if ((ulonglong) * puVar24 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        puVar31 = (undefined4 * )((ulonglong) * puVar24 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28));
    } else {
        puVar31 = *(undefined4 * *)(DAT_140c63678 + 0x28);
    }
    uVar14 = puVar31[1];
    uVar44 = puVar31[2];
    uVar45 = puVar31[3];
    *(undefined4 * )(param_1 + 0x150) = *puVar31;
    *(undefined4 * )(param_1 + 0x154) = uVar14;
    *(undefined4 * )(param_1 + 0x158) = uVar44;
    *(undefined4 * )(param_1 + 0x15c) = uVar45;
    FUN_1401429a0(lVar21, local_res18[0]);
    puVar25 = (undefined2 *) FUN_1401a5ae0(param_2);
    puVar29 = puVar25;
    joined_r0x000140159e11:
    if (puVar29 == (undefined2 *) 0x0) {
        return (ulonglong) puVar25 & 0xffffffffffffff00 |
               (ulonglong)
                       (0 < (int) (*(longlong * )(param_1 + 0x30) - *(longlong * )(param_1 + 0x28) >> 3));
    }
    psVar30 = (short *) 0x0;
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        psVar22 = &DAT_140a35588;
        psVar23 = (short *) FUN_1401a4f40(lVar21 + 8);
        if (psVar23 == &DAT_140a35588) {
            LAB_140159eab:
            if ((lVar21 != 0) && (lVar21 = FUN_1401a4f40(lVar21 + 0x20), lVar21 != 0)) goto LAB_140159f6a;
            break;
        }
        psVar33 = psVar30;
        if (*psVar23 == 0) {
            LAB_140159e93:
            if (*psVar22 == 0) goto LAB_140159eab;
        } else {
            do {
                uVar38 = (uint) psVar33;
                if (((*psVar22 == 0) || (*psVar23 != *psVar22)) || (0x7ffffffe < (int) uVar38)) break;
                psVar23 = psVar23 + 1;
                psVar22 = psVar22 + 1;
                uVar38 = uVar38 + 1;
                psVar33 = (short *) (ulonglong) uVar38;
            } while (*psVar23 != 0);
            if (uVar38 == 0x7fffffff) goto LAB_140159eab;
            if (*psVar23 == 0) goto LAB_140159e93;
        }
    }
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"TextId";
        pwVar26 = (wchar_t *) FUN_1401a4f40(lVar21 + 8);
        if (pwVar26 == L"TextId") {
            LAB_140159f4f:
            if ((lVar21 != 0) && (lVar21 = FUN_1401a4f40(lVar21 + 0x20), lVar21 != 0)) goto LAB_140159f6a;
            break;
        }
        psVar23 = psVar30;
        if (*pwVar26 == L'\0') {
            LAB_140159f33:
            if (*pwVar34 == L'\0') goto LAB_140159f4f;
        } else {
            do {
                uVar38 = (uint) psVar23;
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < (int) uVar38)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                uVar38 = uVar38 + 1;
                psVar23 = (short *) (ulonglong) uVar38;
            } while (*pwVar26 != L'\0');
            if (uVar38 == 0x7fffffff) goto LAB_140159f4f;
            if (*pwVar26 == L'\0') goto LAB_140159f33;
        }
    }
    lVar21 = FUN_14018b280(0xe8, 0);
    if (lVar21 != 0) {
        psVar30 = (short *) FUN_140158db0(lVar21);
    }
    ppsVar3 = *(short ***) (param_1 + 0x30);
    local_a8 = psVar30;
    if (ppsVar3 == *(short ***) (param_1 + 0x38)) {
        FUN_14010a1c0(param_1 + 0x20, ppsVar3, &local_a8);
    } else {
        if (ppsVar3 != (short **) 0x0) {
            *ppsVar3 = psVar30;
        }
        *(longlong * )(param_1 + 0x30) = *(longlong * )(param_1 + 0x30) + 8;
    }
    goto LAB_14015a8bc;
    LAB_140159f6a:
    for (lVar21 = *(longlong * )(puVar29 + 0x30); psVar23 = psVar30, lVar21 != 0;
         lVar21 = *(longlong * )(lVar21 + 0x38)) {
        psVar33 = &DAT_140a35588;
        psVar22 = (short *) FUN_1401a4f40(lVar21 + 8);
        if (psVar22 == &DAT_140a35588) {
            LAB_14015a616:
            if (lVar21 != 0) {
                psVar23 = (short *) FUN_1401a4f40(lVar21 + 0x20);
            }
            break;
        }
        psVar32 = psVar30;
        if (*psVar22 == 0) {
            LAB_140159fdf:
            if (*psVar33 == 0) goto LAB_14015a616;
        } else {
            do {
                uVar38 = (uint) psVar32;
                if (((*psVar33 == 0) || (*psVar22 != *psVar33)) || (0x7ffffffe < (int) uVar38)) break;
                psVar22 = psVar22 + 1;
                psVar33 = psVar33 + 1;
                uVar38 = uVar38 + 1;
                psVar32 = (short *) (ulonglong) uVar38;
            } while (*psVar22 != 0);
            if (uVar38 == 0x7fffffff) goto LAB_14015a616;
            if (*psVar22 == 0) goto LAB_140159fdf;
        }
    }
    psVar22 = (short *) &DAT_1409dbdc4;
    if (psVar23 != (short *) 0x0) {
        psVar22 = psVar23;
    }
    local_b0 = 0;
    sVar2 = *psVar22;
    psVar23 = psVar30;
    while (sVar2 != 0) {
        psVar23 = (short *) ((longlong) psVar23 + 1);
        sVar2 = psVar22[(longlong) psVar23];
    }
    lVar21 = (longlong) psVar23 * 2 >> 1;
    uVar1 = lVar21 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_b0 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar19 = local_b0;
    lVar21 = lVar21 * 2;
    FUN_1407db590(local_b0, psVar22, lVar21);
    puVar25 = (undefined2 * )(local_b0 + lVar21);
    if (puVar25 != (undefined2 *) 0x0) {
        *puVar25 = 0;
    }
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"TextId";
        pwVar26 = (wchar_t *) FUN_1401a4f40(lVar21 + 8);
        if (pwVar26 == L"TextId") {
            LAB_14015a62d:
            if (lVar21 != 0) {
                psVar30 = (short *) FUN_1401a4f40(lVar21 + 0x20);
            }
            break;
        }
        psVar23 = psVar30;
        if (*pwVar26 == L'\0') {
            LAB_14015a0df:
            if (*pwVar34 == L'\0') goto LAB_14015a62d;
        } else {
            do {
                uVar38 = (uint) psVar23;
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < (int) uVar38)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                uVar38 = uVar38 + 1;
                psVar23 = (short *) (ulonglong) uVar38;
            } while (*pwVar26 != L'\0');
            if (uVar38 == 0x7fffffff) goto LAB_14015a62d;
            if (*pwVar26 == L'\0') goto LAB_14015a0df;
        }
    }
    local_a8 = (short *) 0x0;
    psVar23 = (short *) &DAT_1409dbedc;
    if (psVar30 != (short *) 0x0) {
        psVar23 = psVar30;
    }
    lVar21 = 0;
    sVar2 = *psVar23;
    while (sVar2 != 0) {
        lVar21 = lVar21 + 1;
        sVar2 = psVar23[lVar21];
    }
    lVar21 = lVar21 * 2 >> 1;
    if (lVar21 + 1U < 0x7fffffffffffffff) {
        local_a8 = (short *) FUN_14018b280((lVar21 + 1U) * 2, 0);
    }
    psVar22 = local_a8;
    FUN_1407db590(local_a8, psVar23, lVar21 * 2);
    psVar30 = psVar22 + lVar21;
    if (psVar30 != (short *) 0x0) {
        *psVar30 = 0;
    }
    if (psVar22 != psVar30) {
        FUN_1400e2630(psVar30, local_80, psVar22, local_b0);
        local_b0 = local_78;
        if (lVar19 != 0) {
            FUN_14018b900(lVar19);
        }
    }
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"Image";
        pwVar26 = (wchar_t *) FUN_1401a4f40();
        if (pwVar26 == L"Image") {
            LAB_14015a644:
            if (lVar21 != 0) {
                psVar30 = (short *) FUN_1401a4f40(lVar21 + 0x20);
                goto LAB_14015a21c;
            }
            break;
        }
        iVar36 = 0;
        if (*pwVar26 != L'\0') {
            do {
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < iVar36)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                iVar36 = iVar36 + 1;
            } while (*pwVar26 != L'\0');
            if (iVar36 == 0x7fffffff) goto LAB_14015a644;
        }
        if ((*pwVar26 == L'\0') && (*pwVar34 == L'\0')) goto LAB_14015a644;
    }
    psVar30 = (short *) 0x0;
    LAB_14015a21c:
    psVar23 = (short *) &DAT_1409dbe8c;
    if (psVar30 != (short *) 0x0) {
        psVar23 = psVar30;
    }
    lVar21 = 0;
    local_a0 = 0;
    sVar2 = *psVar23;
    while (sVar2 != 0) {
        lVar21 = lVar21 + 1;
        sVar2 = psVar23[lVar21];
    }
    lVar21 = lVar21 * 2 >> 1;
    uVar1 = lVar21 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_a0 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar19 = local_a0;
    lVar21 = lVar21 * 2;
    FUN_1407db590(local_a0, psVar23, lVar21);
    puVar25 = (undefined2 * )(lVar21 + lVar19);
    psVar30 = (short *) 0x0;
    if (puVar25 != (undefined2 *) 0x0) {
        *puVar25 = 0;
    }
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        psVar22 = &DAT_1409dbe84;
        psVar23 = (short *) FUN_1401a4f40(lVar21 + 8);
        if (psVar23 == &DAT_1409dbe84) {
            LAB_14015a65b:
            if (lVar21 != 0) {
                psVar30 = (short *) FUN_1401a4f40(lVar21 + 0x20);
            }
            break;
        }
        psVar33 = psVar30;
        if (*psVar23 == 0) {
            LAB_14015a2ff:
            if (*psVar22 == 0) goto LAB_14015a65b;
        } else {
            do {
                uVar38 = (uint) psVar33;
                if (((*psVar22 == 0) || (*psVar23 != *psVar22)) || (0x7ffffffe < (int) uVar38)) break;
                psVar23 = psVar23 + 1;
                psVar22 = psVar22 + 1;
                uVar38 = uVar38 + 1;
                psVar33 = (short *) (ulonglong) uVar38;
            } while (*psVar23 != 0);
            if (uVar38 == 0x7fffffff) goto LAB_14015a65b;
            if (*psVar23 == 0) goto LAB_14015a2ff;
        }
    }
    local_98 = 0;
    psVar23 = (short *) &DAT_1409dbfcc;
    if (psVar30 != (short *) 0x0) {
        psVar23 = psVar30;
    }
    lVar21 = 0;
    sVar2 = *psVar23;
    while (sVar2 != 0) {
        lVar21 = lVar21 + 1;
        sVar2 = psVar23[lVar21];
    }
    lVar21 = lVar21 * 2 >> 1;
    uVar1 = lVar21 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_98 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar19 = local_98;
    lVar21 = lVar21 * 2;
    FUN_1407db590(local_98, psVar23, lVar21);
    puVar25 = (undefined2 * )(lVar21 + lVar19);
    psVar30 = (short *) 0x0;
    if (puVar25 != (undefined2 *) 0x0) {
        *puVar25 = 0;
    }
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"InputName";
        pwVar26 = (wchar_t *) FUN_1401a4f40(lVar21 + 8);
        if (pwVar26 == L"InputName") {
            LAB_14015a672:
            if (lVar21 != 0) {
                psVar30 = (short *) FUN_1401a4f40(lVar21 + 0x20);
            }
            break;
        }
        psVar23 = psVar30;
        if (*pwVar26 == L'\0') {
            LAB_14015a3ff:
            if (*pwVar34 == L'\0') goto LAB_14015a672;
        } else {
            do {
                uVar38 = (uint) psVar23;
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < (int) uVar38)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                uVar38 = uVar38 + 1;
                psVar23 = (short *) (ulonglong) uVar38;
            } while (*pwVar26 != L'\0');
            if (uVar38 == 0x7fffffff) goto LAB_14015a672;
            if (*pwVar26 == L'\0') goto LAB_14015a3ff;
        }
    }
    local_88 = 0;
    psVar23 = (short *) &DAT_1409dbf74;
    if (psVar30 != (short *) 0x0) {
        psVar23 = psVar30;
    }
    lVar21 = 0;
    sVar2 = *psVar23;
    while (sVar2 != 0) {
        lVar21 = lVar21 + 1;
        sVar2 = psVar23[lVar21];
    }
    lVar21 = lVar21 * 2 >> 1;
    uVar1 = lVar21 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_88 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar19 = local_88;
    lVar21 = lVar21 * 2;
    FUN_1407db590(local_88, psVar23, lVar21);
    puVar25 = (undefined2 * )(lVar21 + lVar19);
    psVar30 = (short *) 0x0;
    if (puVar25 != (undefined2 *) 0x0) {
        *puVar25 = 0;
    }
    for (lVar21 = *(longlong * )(puVar29 + 0x30); psVar23 = psVar30, lVar21 != 0;
         lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"InputContext";
        pwVar26 = (wchar_t *) FUN_1401a4f40(lVar21 + 8);
        if (pwVar26 == L"InputContext") {
            LAB_14015a689:
            if (lVar21 != 0) {
                psVar23 = (short *) FUN_1401a4f40(lVar21 + 0x20);
            }
            break;
        }
        psVar22 = psVar30;
        if (*pwVar26 == L'\0') {
            LAB_14015a4ff:
            if (*pwVar34 == L'\0') goto LAB_14015a689;
        } else {
            do {
                uVar38 = (uint) psVar22;
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < (int) uVar38)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                uVar38 = uVar38 + 1;
                psVar22 = (short *) (ulonglong) uVar38;
            } while (*pwVar26 != L'\0');
            if (uVar38 == 0x7fffffff) goto LAB_14015a689;
            if (*pwVar26 == L'\0') goto LAB_14015a4ff;
        }
    }
    psVar22 = (short *) &DAT_1409dbe54;
    if (psVar23 != (short *) 0x0) {
        psVar22 = psVar23;
    }
    lVar21 = 0;
    sVar2 = *psVar22;
    while (sVar2 != 0) {
        lVar21 = lVar21 + 1;
        sVar2 = psVar22[lVar21];
    }
    lVar21 = lVar21 * 2 >> 1;
    if (lVar21 + 1U < 0x7fffffffffffffff) {
        psVar30 = (short *) FUN_14018b280((lVar21 + 1U) * 2, 0);
    }
    FUN_1407db590(psVar30, psVar22, lVar21 * 2);
    if (psVar30 + lVar21 != (short *) 0x0) {
        psVar30[lVar21] = 0;
    }
    local_res20[0] = 0;
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"Disabled";
        pwVar26 = (wchar_t *) FUN_1401a4f40(lVar21 + 8);
        if (pwVar26 == L"Disabled") {
            LAB_14015a6a0:
            if (lVar21 != 0) {
                uVar27 = FUN_1401a4f40(lVar21 + 0x20);
                FUN_1407df428(uVar27, &DAT_1409e4114, local_res20);
            }
            break;
        }
        iVar36 = 0;
        if (*pwVar26 != L'\0') {
            do {
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < iVar36)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                iVar36 = iVar36 + 1;
            } while (*pwVar26 != L'\0');
            if (iVar36 == 0x7fffffff) goto LAB_14015a6a0;
        }
        if ((*pwVar26 == L'\0') && (*pwVar34 == L'\0')) goto LAB_14015a6a0;
    }
    local_res18[0] = 0;
    for (lVar21 = *(longlong * )(puVar29 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x38)) {
        pwVar34 = L"CancelNode";
        pwVar26 = (wchar_t *) FUN_1401a4f40(lVar21 + 8);
        if (pwVar26 == L"CancelNode") {
            LAB_14015a747:
            if (lVar21 != 0) {
                uVar27 = FUN_1401a4f40(lVar21 + 0x20);
                FUN_1407df428(uVar27, &DAT_1409e4114, local_res18);
            }
            break;
        }
        iVar36 = 0;
        if (*pwVar26 != L'\0') {
            do {
                if (((*pwVar34 == L'\0') || (*pwVar26 != *pwVar34)) || (0x7ffffffe < iVar36)) break;
                pwVar26 = pwVar26 + 1;
                pwVar34 = pwVar34 + 1;
                iVar36 = iVar36 + 1;
            } while (*pwVar26 != L'\0');
            if (iVar36 == 0x7fffffff) goto LAB_14015a747;
        }
        if ((*pwVar26 == L'\0') && (*pwVar34 == L'\0')) goto LAB_14015a747;
    }
    bVar35 = local_res18[0] != 0;
    lVar21 = FUN_14018b280(0x180, 0);
    if (lVar21 == 0) {
        plVar28 = (longlong *) 0x0;
    } else {
        plVar28 = (longlong *) FUN_140159190(lVar21, param_1);
    }
    cVar20 = FUN_140159840(plVar28, puVar29);
    if (cVar20 == '\0') {
        if (plVar28 != (longlong *) 0x0) {
            (**(code * *)(*plVar28 + 8))(plVar28);
        }
        plVar28 = (longlong *) 0x0;
    }
    lVar21 = FUN_14018b280(0xe8, 0);
    if (lVar21 == 0) {
        local_90 = 0;
    } else {
        local_90 = FUN_140158b40(lVar21, local_b0, *(undefined8 * )(param_1 + 0x10), local_a0, local_98,
                                 plVar28, bVar35);
    }
    lVar21 = local_90;
    *(bool *) (local_90 + 10) = local_res20[0] == 0;
    if (plVar28 != (longlong *) 0x0) {
        (**(code * *)(*plVar28 + 8))(plVar28);
    }
    lVar19 = local_88;
    FUN_140158ad0(lVar21, local_88, psVar30);
    plVar28 = *(longlong * *)(param_1 + 0x30);
    if (plVar28 == *(longlong * *)(param_1 + 0x38)) {
        FUN_14010a1c0(param_1 + 0x20, plVar28, &local_90);
    } else {
        if (plVar28 != (longlong *) 0x0) {
            *plVar28 = lVar21;
        }
        *(longlong * )(param_1 + 0x30) = *(longlong * )(param_1 + 0x30) + 8;
    }
    if (psVar30 != (short *) 0x0) {
        FUN_14018b900(psVar30, 0);
    }
    if (lVar19 != 0) {
        FUN_14018b900(lVar19, 0);
    }
    if (local_98 != 0) {
        FUN_14018b900(local_98, 0);
    }
    if (local_a0 != 0) {
        FUN_14018b900(local_a0, 0);
    }
    if (local_a8 != (short *) 0x0) {
        FUN_14018b900(local_a8, 0);
    }
    if (local_b0 != 0) {
        FUN_14018b900(local_b0, 0);
    }
    LAB_14015a8bc:
    puVar29 = (undefined2 *) FUN_1401a5bc0(puVar29);
    puVar25 = &DAT_140a35588;
    goto joined_r0x000140159e11;
}


ulonglong FUN_14015a980(longlong param_1, longlong *param_2, short *param_3) {
    longlong *in_RAX;
    longlong lVar1;
    short *psVar2;
    longlong lVar3;
    int iVar4;
    short *psVar5;

    if (((*param_2 == 0) ||
         (in_RAX = (longlong *) FUN_1401a5ae0(*param_2, L"Menus"), in_RAX == (longlong *) 0x0)) ||
        (in_RAX = (longlong * )(**(code * *)(*in_RAX + 8))(in_RAX), in_RAX == (longlong *) 0x0)) {
        return (ulonglong) in_RAX & 0xffffffffffffff00;
    }
    lVar1 = FUN_1401a5ae0(in_RAX);
    joined_r0x00014015a9e2:
    if (lVar1 == 0) {
        return (ulonglong)
                (0 < (int) (*(longlong * )(param_1 + 0x30) - *(longlong * )(param_1 + 0x28) >> 3));
    }
    for (lVar3 = *(longlong * )(lVar1 + 0x60); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x38)) {
        psVar5 = &DAT_140a31790;
        psVar2 = (short *) FUN_1401a4f40();
        if (psVar2 == &DAT_140a31790) {
            LAB_14015aa69:
            if (lVar3 != 0) {
                if ((param_3 == (short *) 0x0) || (psVar2 = (short *) FUN_1401a4f40(), psVar2 == param_3))
                    goto LAB_14015aac6;
                iVar4 = 0;
                psVar5 = param_3;
                if (*psVar2 != 0) goto LAB_14015aa90;
                goto LAB_14015aabc;
            }
            break;
        }
        iVar4 = 0;
        if (*psVar2 != 0) {
            do {
                if (((*psVar5 == 0) || (*psVar2 != *psVar5)) || (0x7ffffffe < iVar4)) break;
                psVar2 = psVar2 + 1;
                psVar5 = psVar5 + 1;
                iVar4 = iVar4 + 1;
            } while (*psVar2 != 0);
            if (iVar4 == 0x7fffffff) goto LAB_14015aa69;
        }
        if ((*psVar2 == 0) && (*psVar5 == 0)) goto LAB_14015aa69;
    }
    goto LAB_14015aadf;
    while (true) {
        psVar2 = psVar2 + 1;
        psVar5 = psVar5 + 1;
        iVar4 = iVar4 + 1;
        if (*psVar2 == 0) break;
        LAB_14015aa90:
        if (((*psVar5 == 0) || (*psVar2 != *psVar5)) || (0x7ffffffe < iVar4)) break;
    }
    if (iVar4 != 0x7fffffff) {
        LAB_14015aabc:
        if ((*psVar2 != 0) || (*psVar5 != 0)) goto LAB_14015aadf;
    }
    LAB_14015aac6:
    lVar3 = FUN_1401a4f40(lVar3 + 0x20);
    if (lVar3 != 0) {
        FUN_140159840(param_1, lVar1);
    }
    LAB_14015aadf:
    lVar1 = FUN_1401a5bc0(lVar1);
    goto joined_r0x00014015a9e2;
}



// WARNING: Removing unreachable block (ram,0x00014015ac14)

ulonglong FUN_14015ab40(undefined8 param_1, short *param_2, undefined8 param_3) {
    short sVar1;
    short *psVar2;
    byte bVar3;
    int iVar4;
    ulonglong in_RAX;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    longlong lVar8;
    undefined *local_res10;
    undefined local_2c8[8];
    short *local_2c0;
    short *local_2b8;
    short *local_2b0;
    undefined local_2a8[640];

    if (param_2 == (short *) 0x0) {
        return in_RAX & 0xffffffffffffff00;
    }
    local_2c0 = (short *) FUN_14018b280(0x10);
    lVar8 = 0;
    local_2b0 = local_2c0 + 8;
    if (local_2c0 != (short *) 0x0) {
        *local_2c0 = 0;
    }
    psVar2 = *(short **) (DAT_140c63650 + 0x310);
    local_2b8 = local_2c0;
    if ((psVar2 != (short *) 0x0) && (lVar5 = lVar8, *psVar2 != 0)) {
        do {
            lVar6 = lVar5 + 1;
            lVar5 = lVar5 + 1;
        } while (psVar2[lVar6] != 0);
        lVar6 = lVar8;
        if (lVar5 * 2 >> 1 == 0) {
            FUN_1407db590(local_2c0, psVar2, 0);
        } else {
            FUN_14001c310(local_2c8, psVar2);
        }
        do {
            psVar7 = &DAT_1409dbe6e + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar7 != 0);
        FUN_14001c310(local_2c8, &DAT_1409dbe6c, &DAT_1409dbe6c + lVar6 * 2);
    }
    psVar7 = local_2c0;
    iVar4 = FUN_1401b58d0();
    if (iVar4 == 0) {
        if ((psVar2 != (short *) 0x0) && (*psVar2 != 0)) {
            sVar1 = *param_2;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = param_2[lVar8];
            }
            FUN_14001c310(local_2c8, param_2, param_2 + lVar8);
            psVar7 = local_2c0;
            iVar4 = FUN_1401b58d0();
            param_2 = psVar7;
            if (iVar4 != 0) goto LAB_14015acc4;
        }
        bVar3 = 0;
    } else {
        LAB_14015acc4:
        FUN_1401a72e0(local_2a8);
        iVar4 = FUN_1401a7bd0(local_2a8, param_2);
        if (iVar4 < 0) {
            bVar3 = 0;
        } else {
            local_res10 = local_2a8;
            bVar3 = FUN_14015a980(param_1, &local_res10, param_3);
        }
        FUN_1401a76a0(local_2a8);
    }
    if (psVar7 != (short *) 0x0) {
        FUN_14018b900(psVar7, 0);
    }
    return (ulonglong) bVar3;
}


longlong FUN_14015ad50(longlong param_1, short *param_2) {
    undefined2 *puVar1;
    short sVar2;
    ushort uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    ushort *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    int local_res10;
    longlong local_res18;

    lVar5 = 0;
    if (param_2 != (short *) 0x0) {
        lVar6 = 0;
        sVar2 = *param_2;
        while (sVar2 != 0) {
            lVar5 = lVar5 + 1;
            sVar2 = param_2[lVar5];
        }
        lVar5 = lVar5 * 2 >> 1;
        uVar7 = lVar5 + 1;
        if (uVar7 < 0x7fffffffffffffff) {
            lVar6 = FUN_14018b280(uVar7 * 2, 0);
        }
        lVar5 = lVar5 * 2;
        FUN_1407db590(lVar6, param_2, lVar5);
        puVar1 = (undefined2 * )(lVar5 + lVar6);
        if (puVar1 != (undefined2 *) 0x0) {
            *puVar1 = 0;
        }
        local_res10 = 0;
        if (0 < (int) (*(longlong * )(param_1 + 0x30) - *(longlong * )(param_1 + 0x28) >> 3)) {
            local_res18 = 0;
            do {
                uVar9 = 0;
                lVar5 = *(longlong * )(local_res18 + *(longlong * )(param_1 + 0x28));
                puVar8 = *(ushort * *)(lVar5 + 0x68);
                uVar3 = *puVar8;
                uVar7 = uVar9;
                while (uVar3 != 0) {
                    uVar7 = uVar7 + 1;
                    uVar3 = puVar8[uVar7];
                }
                if ((longlong) puVar1 - lVar6 >> 1 == uVar7) {
                    if (uVar7 == 0) goto LAB_14015aeda;
                    lVar10 = lVar6 - (longlong) puVar8;
                    while (true) {
                        uVar3 = *(ushort * )(lVar10 + (longlong) puVar8);
                        if (uVar3 != *puVar8) break;
                        uVar9 = uVar9 + 1;
                        puVar8 = puVar8 + 1;
                        if (uVar7 <= uVar9) goto LAB_14015aeda;
                    }
                    iVar4 = 1;
                    if (uVar3 < *puVar8) {
                        iVar4 = -1;
                    }
                    if (iVar4 == 0) goto LAB_14015aeda;
                }
                if ((*(longlong * )(lVar5 + 0xe0) != 0) && (lVar5 = FUN_14015ad50(), lVar5 != 0))
                    goto LAB_14015aeda;
                local_res10 = local_res10 + 1;
                local_res18 = local_res18 + 8;
            } while (local_res10 <
                     (int) (*(longlong * )(param_1 + 0x30) - *(longlong * )(param_1 + 0x28) >> 3));
        }
        lVar5 = 0;
        LAB_14015aeda:
        if (lVar6 != 0) {
            FUN_14018b900(lVar6, 0);
        }
    }
    return lVar5;
}


void FUN_14015af00(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1, "Apollo.Menu");
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar1 + -1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "__index", 7);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar3 + -0x20, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    lVar3 = *(longlong * )(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c57c20;
    puVar6 = PTR_DAT_140c57c20;
    while (puVar6 != (undefined *) 0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1, 0);
        *(undefined * *)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong * *)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 * )(plVar2 + 1) = 6;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1, puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1, uVar4, &local_18, *(longlong * )(param_1 + 0x10) + -0x10);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        lVar3 = *(longlong * )(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(longlong * )(param_1 + 0x10) = lVar3 + -0x10;
    FUN_140057020(param_1, &DAT_140a3587c, &PTR_DAT_140c57c90);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    return;
}


undefined8 FUN_14015b0a0(longlong param_1, undefined4 param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar4 = (longlong *) FUN_1400580e0();
    if (*(int *) (plVar4 + 1) == 2) {
        lVar5 = *plVar4;
    } else {
        if (*(int *) (plVar4 + 1) != 7) {
            return 0;
        }
        lVar5 = *plVar4 + 0x30;
    }
    if (lVar5 != 0) {
        plVar4 = (longlong *) FUN_1400580e0(param_1, param_2);
        iVar3 = *(int *) (plVar4 + 1);
        if ((iVar3 == 5) || (iVar3 == 7)) {
            lVar5 = *(longlong * )(*plVar4 + 0x10);
        } else {
            lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar3 * 8);
        }
        if (lVar5 != 0) {
            plVar4 = *(longlong * *)(param_1 + 0x10);
            *plVar4 = lVar5;
            *(undefined4 * )(plVar4 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar5 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "Apollo.Menu", 0xb);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar5 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            FUN_1400586a0(param_1, 0xffffffff);
            FUN_1400586a0(param_1, 0xfffffffe);
            puVar6 = (undefined8 *) 0x0;
            iVar3 = 0;
            puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
            puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
            if ((puVar1 != &DAT_140a12138) && (puVar2 != &DAT_140a12138)) {
                iVar3 = FUN_14005ac20(puVar1, puVar2);
            }
            *(undefined8 * *)(param_1 + 0x10) = puVar2;
            if (iVar3 != 0) {
                plVar4 = (longlong *) FUN_1400580e0(param_1, param_2);
                if (*(int *) (plVar4 + 1) == 2) {
                    puVar6 = (undefined8 * ) * plVar4;
                } else if (*(int *) (plVar4 + 1) == 7) {
                    return *(undefined8 * )(*plVar4 + 0x30);
                }
                return *puVar6;
            }
        }
    }
    return 0;
}


undefined8 FUN_14015b210(longlong param_1) {
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_14015b0a0(param_1, 1);
    lVar3 = FUN_14015b0a0(param_1);
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(lVar2 == lVar3);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14015b270(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong * *)(param_1 + 0x18);
    plVar4 = *(longlong * *)(param_1 + 0x10);
    plVar5 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar5 = plVar3;
    }
    if (*(int *) (plVar5 + 1) == 2) {
        lVar7 = *plVar5;
    } else {
        if (*(int *) (plVar5 + 1) != 7) {
            return 0;
        }
        lVar7 = *plVar5 + 0x30;
    }
    if (lVar7 != 0) {
        plVar5 = &DAT_140a12138;
        if (plVar3 < plVar4) {
            plVar5 = plVar3;
        }
        iVar2 = *(int *) (plVar5 + 1);
        if ((iVar2 == 5) || (iVar2 == 7)) {
            lVar7 = *(longlong * )(*plVar5 + 0x10);
        } else {
            lVar7 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xe0 + (longlong) iVar2 * 8);
        }
        if (lVar7 != 0) {
            *plVar4 = lVar7;
            *(undefined4 * )(plVar4 + 1) = 5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar7 = *(longlong * )(param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "Apollo.Menu", 0xb);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar7 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
            puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
            if ((puVar1 != &DAT_140a12138) && (puVar8 != &DAT_140a12138)) {
                uVar6 = FUN_14005ac20(puVar1, puVar8);
                *(undefined8 * *)(param_1 + 0x10) = puVar8;
                return uVar6;
            }
            *(undefined8 * *)(param_1 + 0x10) = puVar8;
            return 0;
        }
    }
    return 0;
}


undefined4 FUN_14015b3a0(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *) 0x0) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *) FUN_140059170(param_1, 8);
    *puVar2 = param_2;
    (**(code * *) * param_2)(param_2);
    lVar1 = *(longlong * )(param_1 + 0x20);
    local_18 = FUN_140062650(param_1, "Apollo.Menu", 0xb);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_1 + 0x10));
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_14015b450(undefined8 param_1) {
    longlong *plVar1;

    plVar1 = (longlong *) FUN_14015b0a0(param_1, 1);
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 8))(plVar1);
    }
    return 0;
}


longlong *FUN_14015b480(longlong param_1) {
    wchar_t *pwVar1;
    wchar_t *pwVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined8 local_res10;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    wchar_t *local_40;
    undefined **local_38;
    wchar_t *local_30;
    LPVOID local_28;
    wchar_t *local_20;

    plVar9 = (longlong *) 0x0;
    plVar8 = plVar9;
    if (*(longlong * *)(DAT_140c63650 + 0x300) != (longlong *) 0x0) {
        plVar7 = plVar9;
        do {
            if (*(longlong * )
                    (*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar7 * 8) + 400) ==
                param_1) {
                plVar8 = *(longlong * *)(*(longlong * )(DAT_140c63650 + 0x2f8) + (longlong) plVar7 * 8);
                break;
            }
            plVar7 = (longlong * )(ulonglong)((int) plVar7 + 1);
        } while (plVar7 < *(longlong * *)(DAT_140c63650 + 0x300));
    }
    uVar5 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(&local_58, uVar5);
    uVar5 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(&local_38, uVar5);
    FUN_1400d6530(param_1, 3);
    lVar6 = FUN_14018b280(0x180, 0);
    plVar7 = plVar9;
    if (lVar6 != 0) {
        plVar7 = (longlong *) FUN_140158fd0(lVar6, plVar8);
    }
    pwVar2 = local_30;
    pwVar1 = local_50;
    FUN_14015ab40(plVar7, local_50, local_30);
    if (plVar7 == (longlong *) 0x0) {
        local_90 = 0;
        local_98 = &PTR_LAB_140b5e648;
        local_88 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_98);
        local_78 = local_98;
        local_70 = local_90;
        local_58 = &PTR_LAB_140b5e648;
        local_50 = L"FileName";
        local_68 = local_88;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_58);
        local_40 = pwVar1;
        local_30 = local_50;
        local_58 = &PTR_LAB_140b5e638;
        local_20 = pwVar1;
        local_38 = &PTR_LAB_140b5e638;
        local_res10 = 0x141d2fef0;
        local_28 = local_48;
        iVar3 = FUN_1401971e0(&DAT_140c8a14c, 0xd, &local_res10, pwVar2, pwVar1, &local_38, &local_78);
        local_58 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_48);
        local_98 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_88);
        if (iVar3 != 0) {
            DebugBreak();
        }
    } else {
        uVar4 = FUN_14015b3a0(param_1, plVar7);
        plVar9 = (longlong * )(ulonglong)
        uVar4;
        (**(code * *)(*plVar7 + 8))(plVar7);
    }
    if (pwVar2 != (wchar_t *) 0x0) {
        FUN_14018b900(pwVar2, 0);
    }
    if (pwVar1 != (wchar_t *) 0x0) {
        FUN_14018b900(pwVar1, 0);
    }
    return plVar9;
}


undefined8 FUN_14015b820(longlong param_1) {
    undefined uVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    uint uVar7;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar2 = 0;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar7 = uVar7 + 1;
            uVar2 = (ulonglong) uVar7;
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    uVar1 = 1;
    lVar3 = FUN_14015b0a0(param_1, 1);
    if (lVar3 != 0) {
        uVar4 = FUN_140056bb0(param_1, 2, 0);
        FUN_14018f2d0(local_28, uVar4);
        puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
        puVar6 = &DAT_140a12138;
        if (puVar5 < *(undefined8 * *)(param_1 + 0x10)) {
            puVar6 = puVar5;
        }
        if ((*(int *) (puVar6 + 1) == 0) || ((*(int *) (puVar6 + 1) == 1 && (*(int *) puVar6 == 0)))) {
            uVar1 = 0;
        }
        lVar3 = FUN_14015ad50(lVar3);
        if (lVar3 != 0) {
            *(undefined * )(lVar3 + 10) = uVar1;
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 *FUN_14015ba00(undefined8 *param_1) {
    short *psVar1;
    char cVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;

    FUN_1400c5920();
    plVar5 = (longlong *) 0x0;
    *param_1 = &PTR_LAB_140b5c890;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x36] = param_1[0x36] | 0x80;
    param_1[0x52] = param_1[0x52] | 0x10;
    lVar3 = FUN_14018b280(0x30, 0);
    plVar4 = plVar5;
    if (lVar3 != 0) {
        plVar4 = (longlong *) FUN_1401095e0(lVar3);
    }
    lVar3 = param_1[4];
    param_1[99] = plVar4;
    if ((lVar3 != 0) &&
        ((*plVar4 == 0 || (cVar2 = FUN_14002c740(plVar4 + 2, &DAT_140a35890), cVar2 == '\0')))) {
        lVar3 = FUN_140108e80(lVar3 + 0xf0, &DAT_140a35890);
        plVar6 = plVar5;
        if (lVar3 != 0) {
            do {
                psVar1 = &DAT_140a35892 + (longlong) plVar6;
                plVar6 = (longlong * )((longlong) plVar6 + 1);
            } while (*psVar1 != 0);
            FUN_14001c480(plVar4 + 2, &DAT_140a35890, &DAT_140a35890 + (longlong) plVar6 * 2);
        }
        FUN_1401097f0(plVar4, lVar3);
    }
    lVar3 = FUN_14018b280(0x180, 0);
    if (lVar3 != 0) {
        plVar5 = (longlong *) FUN_140158fd0(lVar3, param_1[4]);
    }
    param_1[0x80] = plVar5;
    param_1[0x81] = plVar5;
    if (plVar5 != (longlong *) 0x0) {
        (**(code * *) * plVar5)(plVar5);
    }
    return param_1;
}


void FUN_14015bba0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5c890;
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if ((longlong *) param_1[0x81] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if (param_1[0x83] != 0) {
        FUN_14018b900(param_1[0x83], 0);
    }
    FUN_1400c6030(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14015bc10(longlong param_1) {
    int iVar1;
    int iVar2;
    longlong *plVar3;
    int *piVar4;
    undefined4 uVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    uint uVar9;
    ulonglong uVar11;
    ulonglong uVar12;
    undefined auVar13[16];
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    int local_res8;
    int local_resc;
    int local_88;
    int local_84;
    uint local_80;
    int local_7c;
    undefined local_78[16];
    float local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    float local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    ulonglong uVar10;

    uVar10 = 0;
    FUN_14015c920(param_1 + 0x410);
    lVar8 = *(longlong * )(param_1 + 0x408);
    if (0 < (int) (*(longlong * )(lVar8 + 0x30) - *(longlong * )(lVar8 + 0x28) >> 3)) {
        uVar14 = 0x3f800000;
        uVar15 = 0x3f800000;
        uVar16 = 0x3f800000;
        uVar17 = 0x3f800000;
        uVar11 = uVar10;
        uVar12 = uVar10;
        do {
            iVar1 = *(int *) (param_1 + 0x2d0);
            iVar2 = *(int *) (param_1 + 0x2d8);
            lVar8 = *(longlong * )(uVar12 + *(longlong * )(lVar8 + 0x28));
            local_68 = _DAT_140c784e0;
            uStack100 = _DAT_140c784e4;
            uStack96 = uRam0000000140c784e8;
            uStack92 = uRam0000000140c784ec;
            local_58 = _DAT_140c784f0;
            uStack84 = _DAT_140c784f4;
            uStack80 = uRam0000000140c784f8;
            uStack76 = uRam0000000140c784fc;
            plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60);
            local_84 = iVar1;
            local_7c = iVar2;
            (**(code * *)(*plVar3 + 0x20))(plVar3);
            (**(code * *)(*plVar3 + 0x18))(plVar3);
            local_78 = CONCAT412(uVar17, CONCAT48(uVar16, CONCAT44(uVar15, uVar14)));
            uVar5 = (**(code * *)(*DAT_140c65680 + 0x108))
                    (DAT_140c65680, plVar3, *(undefined8 * )(lVar8 + 0x18), 0xffffffffffffffff,
                     &local_68, 0x400, local_78, 1);
            auVar13 = ZEXT416((uint)(local_58 - local_68)) & (undefined[16]) 0xffffffffffffffff;
            iVar7 = (int) SUB164(auVar13, 0);
            if ((iVar7 != -0x80000000) && ((float) iVar7 != SUB164(auVar13, 0))) {
                uVar6 = movmskps(uVar5, ZEXT816(SUB168(auVar13, 0) | SUB168(auVar13, 0) << 0x20));
                auVar13 = ZEXT416((uint)(float)(iVar7 + (uVar6 & 1 ^ 1)));
            }
            iVar7 = (int) SUB164(auVar13, 0) + 8;
            if (*(longlong * )(lVar8 + 0x30) != 0) {
                iVar7 = (int) SUB164(auVar13, 0) + 10;
                FUN_140101470();
                if (iVar2 - iVar1 < local_resc) {
                    iVar7 = iVar7 + ((iVar2 - iVar1) * local_res8) / local_resc;
                } else {
                    iVar7 = iVar7 + local_res8;
                }
            }
            piVar4 = *(int **) (param_1 + 0x420);
            local_88 = (int) uVar11;
            uVar6 = iVar7 + local_88;
            local_80 = uVar6;
            if (piVar4 == *(int **) (param_1 + 0x428)) {
                FUN_14015c990(param_1 + 0x410, piVar4, &local_88);
            } else {
                if (piVar4 != (int *) 0x0) {
                    *piVar4 = local_88;
                    piVar4[1] = iVar1;
                    piVar4[2] = uVar6;
                    piVar4[3] = iVar2;
                }
                *(longlong * )(param_1 + 0x420) = *(longlong * )(param_1 + 0x420) + 0x10;
            }
            lVar8 = *(longlong * )(param_1 + 0x408);
            uVar9 = (int) uVar10 + 1;
            uVar10 = (ulonglong) uVar9;
            uVar12 = uVar12 + 8;
            uVar11 = (ulonglong) uVar6;
        } while ((int) uVar9 < (int) (*(longlong * )(lVar8 + 0x30) - *(longlong * )(lVar8 + 0x28) >> 3));
    }
    return;
}


undefined8 FUN_14015be50(longlong param_1, undefined4 param_2, int *param_3, undefined param_4) {
    longlong lVar1;
    char cVar2;
    undefined8 uVar3;
    int *piVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    ulonglong in_stack_ffffffffffffffb8;
    undefined4 uVar9;
    int local_38;
    undefined4 local_34;
    undefined local_30[8];
    longlong local_28;
    undefined *local_20;
    longlong local_18;

    cVar2 = FUN_140001d30(param_1, param_3);
    uVar9 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    if (cVar2 == '\0') {
        uVar3 = FUN_1400d2120(param_1, param_2, param_3, param_4);
    } else {
        iVar7 = 0;
        iVar6 = (int) (*(longlong * )(param_1 + 0x420) - *(longlong * )(param_1 + 0x418) >> 4);
        if (0 < iVar6) {
            piVar4 = *(int **) (param_1 + 0x418);
            do {
                if ((((*piVar4 <= *param_3) && (*param_3 < piVar4[2])) && (piVar4[1] <= param_3[1])) &&
                    (param_3[1] < piVar4[3])) {
                    if (-1 < iVar7) {
                        lVar1 = *(longlong * )
                                (*(longlong * )(*(longlong * )(param_1 + 0x408) + 0x28) + (longlong) iVar7 * 8);
                        if (*(longlong * )(lVar1 + 0xe0) == 0) {
                            lVar5 = FUN_14018b280(0xf);
                            local_18 = lVar5 + 0xf;
                            local_28 = lVar5;
                            FUN_1407db590(lVar5, "MenuSelection_");
                            local_20 = (undefined * )(lVar5 + 0xe);
                            if (local_20 != (undefined *) 0x0) {
                                *local_20 = 0;
                            }
                            lVar5 = *(longlong * )(lVar1 + 0x88);
                            lVar8 = -1;
                            do {
                                lVar8 = lVar8 + 1;
                            } while (*(char *) (lVar5 + lVar8) != '\0');
                            FUN_14001b050(local_30, lVar5, lVar8 + lVar5);
                            lVar8 = local_28;
                            lVar5 = *(longlong * )(param_1 + 0x10);
                            if (lVar5 == 0) {
                                FUN_1400ea3e0(*(undefined8 * )(param_1 + 0x20), local_28, &DAT_1409dc064, iVar7,
                                              *(undefined8 * )(lVar1 + 0x88));
                            } else {
                                FUN_1400d4040(lVar5, local_28, lVar5, &DAT_1409dc08c, CONCAT44(uVar9, iVar7),
                                              *(undefined8 * )(lVar1 + 0x88));
                            }
                            if (lVar8 != 0) {
                                FUN_14018b900(lVar8, 0);
                            }
                        } else {
                            local_38 = (*(int **) (param_1 + 0x418))[(longlong) iVar7 * 4];
                            local_34 = *(undefined4 * )(param_1 + 0x2d8);
                            FUN_1400ecf40(*(undefined8 * )(param_1 + 0x20), *(undefined8 * )(param_1 + 0x10),
                                          &local_38, *(longlong * )(lVar1 + 0xe0),
                                          in_stack_ffffffffffffffb8 & 0xffffffff00000000 |
                                          (ulonglong) * (uint * )(param_1 + 0x328));
                        }
                    }
                    break;
                }
                iVar7 = iVar7 + 1;
                piVar4 = piVar4 + 4;
            } while (iVar7 < iVar6);
        }
        uVar3 = 0;
    }
    return uVar3;
}


undefined8 FUN_14015c020(void) {
    FUN_14015bc10();
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14015c040(longlong param_1, int *param_2, longlong *param_3, undefined8 param_4,
                   undefined8 param_5) {
    int iVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int local_res8;
    int local_resc;
    undefined8 in_stack_ffffffffffffff68;
    undefined4 uVar8;
    undefined local_78[16];
    float local_68;
    float fStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined local_58[8];
    undefined8 uStack80;
    undefined local_48[4];
    undefined auStack68[8];
    undefined4 uStack60;
    undefined local_38[16];

    uVar8 = (undefined4)((ulonglong) in_stack_ffffffffffffff68 >> 0x20);
    lVar2 = *param_3;
    iVar1 = param_2[1];
    fVar5 = (float) param_2[3];
    uVar6 = 0;
    uVar7 = 0;
    local_38 = ZEXT816(CONCAT44(fVar5, (float) (int) *(undefined8 * )(param_2 + 2)));
    _local_48 = ZEXT816(CONCAT44((float) iVar1, (float) *param_2 + 4.0));
    if (lVar2 == 0) {
        local_res8 = 0;
        local_resc = 0;
    } else {
        FUN_140101470(lVar2, &local_res8);
    }
    fVar3 = (float) local_res8;
    fVar4 = (float) local_resc;
    local_78 = ZEXT816(CONCAT44(fVar4, fVar3));
    if (0.0 < fVar4) {
        unique0x100002f7 = CONCAT48(uVar7, CONCAT44(uVar6, fVar5));
        local_68 = local_48;
        fStack100 = auStack68._0_4_;
        uStack96 = auStack68._4_4_;
        uStack92 = uStack60;
        fVar5 = (float) (param_2[3] - iVar1);
        if (fVar5 < fVar4) {
            fVar3 = (fVar5 * fVar3) / fVar4;
        } else {
            fStack100 = auStack68._0_4_ + (fVar5 - fVar4) * 0.5;
            uStack80 = SUB128(unique0x100002f7 >> 0x20, 0);
            unique0x100002da = CONCAT84(uStack80, fStack100 + fVar4);
        }
        fVar3 = fVar3 + local_48;
        local_78 = CONCAT412(0x3f800000, CONCAT48(0x3f800000, 0x3f8000003f800000));
        _local_58 = CONCAT124(stack0xffffffffffffffac, fVar3);
        if (lVar2 != 0) {
            FUN_140103e60(lVar2, &local_68, local_78, 0,
                          CONCAT44(uVar8, (DAT_140c63664 - *(float *) (param_3 + 1)) *
                                          *(float *) ((longlong) param_3 + 0xc)));
            fVar3 = SUB164(_local_58, 0);
        }
        _local_48 = CONCAT124(_auStack68, fVar3 + 2.0);
    }
    (**(code * *)(*DAT_140c65680 + 0x108))
            (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 0x2b8) + 0x60), param_4,
             0xffffffffffffffff, local_48, 0, param_5, 1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14015c230(longlong param_1) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar1 = *(longlong * )(param_1 + 0x408);
    iVar2 = 0;
    if (0 < (int) (*(longlong * )(lVar1 + 0x30) - *(longlong * )(lVar1 + 0x28) >> 3)) {
        lVar3 = 0;
        do {
            lVar1 = *(longlong * )(lVar3 + *(longlong * )(lVar1 + 0x28));
            local_18 = _DAT_140c777d0;
            uStack20 = uRam0000000140c777d4;
            uStack16 = uRam0000000140c777d8;
            uStack12 = uRam0000000140c777dc;
            FUN_14015c040(param_1, (longlong) iVar2 * 0x10 + *(longlong * )(param_1 + 0x418), lVar1 + 0x30,
                          *(undefined8 * )(lVar1 + 0x18), &local_18);
            lVar1 = *(longlong * )(param_1 + 0x408);
            iVar2 = iVar2 + 1;
            lVar3 = lVar3 + 8;
        } while (iVar2 < (int) (*(longlong * )(lVar1 + 0x30) - *(longlong * )(lVar1 + 0x28) >> 3));
    }
    return;
}


void FUN_14015c2f0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5) {
    longlong lVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined auStack232[32];
    undefined *local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    char local_a8[16];
    undefined local_98[96];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    local_c8 = (undefined *) 0x0;
    FUN_1400d45e0(local_98, param_1, param_2, param_5);
    uVar3 = 0;
    local_a8[0] = '\0';
    lVar1 = FUN_1401a6b80(param_5, &DAT_1409dc0a4);
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
        FUN_1401a52e0(uVar2, local_a8);
        if (local_a8[0] != '\0') {
            uVar3 = 1;
        }
    }
    lVar1 = FUN_14018b280(0x430, 0);
    if (lVar1 != 0) {
        local_c8 = local_98;
        local_c0 = param_4;
        local_b8 = uVar3;
        FUN_14015ba00(lVar1, param_1, param_2, param_3);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack232);
    return;
}


void FUN_14015c540(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x14015c550;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c591;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_LoadMenu_140c57c10 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 == 0);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c61f;
    LuaElementLoaderOrSo(lVar2, "Apollo.MenuBarWindow");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_14015c641:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14015c65d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14015c65d;
        if (iVar1 == 7) goto LAB_14015c641;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14015c65d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c68c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c6b2;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c6fa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c71f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c743;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c764;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c789;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c7cc;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c7f1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_14015c859:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14015c82a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14015c859;
        if (iVar1 != 8) goto LAB_14015c82a;
    }
    uVar14 = *puVar12;
    LAB_14015c82a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c83c;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14015c84c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_14015c870(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if (-1 < *(char *) (lVar1 + 0x1b0)) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "MenuBarWindow", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}



// WARNING: Removing unreachable block (ram,0x00014015c93a)
// WARNING: Removing unreachable block (ram,0x00014015c950)

void FUN_14015c920(longlong param_1) {
    *(longlong * )(param_1 + 0x10) =
            *(longlong * )(param_1 + 0x10) +
            (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8) >> 4) * -0x10;
    return;
}


void FUN_14015c990(longlong param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    longlong lVar13;

    puVar12 = *(undefined4 * *)(param_1 + 0x10);
    if (puVar12 == *(undefined4 * *)(param_1 + 0x18)) {
        lVar13 = (longlong) puVar12 - *(longlong * )(param_1 + 8) >> 4;
        lVar9 = lVar13 * 2;
        if (lVar13 == 0) {
            lVar9 = 1;
        }
        uVar7 = FUN_14018a3e0(lVar9 << 4);
        puVar8 = (undefined4 *) FUN_14018b280(uVar7 & 0xfffffffffffffff0, 0);
        puVar11 = puVar8;
        for (puVar12 = *(undefined4 * *)(param_1 + 8); puVar12 != param_2; puVar12 = puVar12 + 4) {
            if (puVar11 != (undefined4 *) 0x0) {
                *puVar11 = *puVar12;
                puVar11[1] = puVar12[1];
                puVar11[2] = puVar12[2];
                puVar11[3] = puVar12[3];
            }
            puVar11 = puVar11 + 4;
        }
        if (puVar11 != (undefined4 *) 0x0) {
            *puVar11 = *param_3;
            puVar11[1] = param_3[1];
            puVar11[2] = param_3[2];
            puVar11[3] = param_3[3];
        }
        puVar6 = *(undefined4 * *)(param_1 + 0x10);
        puVar12 = puVar11 + 4;
        if (param_2 != puVar6) {
            puVar10 = (undefined4 * )((longlong) param_2 + (longlong) puVar12 + (-0xc - (longlong) puVar11));
            do {
                if (puVar12 != (undefined4 *) 0x0) {
                    *puVar12 = puVar10[-1];
                    *(undefined4 * )((longlong) puVar11 + (0x10 - (longlong) param_2) + (longlong) puVar10) =
                            *puVar10;
                    *(undefined4 * )((longlong) puVar11 + (0x14 - (longlong) param_2) + (longlong) puVar10) =
                            puVar10[1];
                    *(undefined4 * )((longlong) puVar11 + (0x18 - (longlong) param_2) + (longlong) puVar10) =
                            puVar10[2];
                }
                puVar12 = puVar12 + 4;
                puVar1 = puVar10 + 3;
                puVar10 = puVar10 + 4;
            } while (puVar1 != puVar6);
        }
        if (*(longlong * )(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        }
        *(undefined4 * *)(param_1 + 8) = puVar8;
        *(undefined4 * *)(param_1 + 0x10) = puVar12;
        *(ulonglong * )(param_1 + 0x18) = (uVar7 & 0xfffffffffffffff0) + (longlong) puVar8;
        return;
    }
    if (puVar12 != (undefined4 *) 0x0) {
        *puVar12 = puVar12[-4];
        puVar12[1] = puVar12[-3];
        puVar12[2] = puVar12[-2];
        puVar12[3] = puVar12[-1];
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar9 = *(longlong * )(param_1 + 0x10) + -0x20;
    puVar12 = (undefined4 * )(*(longlong * )(param_1 + 0x10) + -0x10);
    for (lVar13 = lVar9 - (longlong) param_2 >> 4; 0 < lVar13; lVar13 = lVar13 + -1) {
        puVar12[-4] = *(undefined4 * )(lVar9 + -0x10);
        puVar12[-3] = *(undefined4 * )(lVar9 + -0xc);
        puVar12[-2] = *(undefined4 * )(lVar9 + -8);
        puVar12[-1] = *(undefined4 * )(lVar9 + -4);
        lVar9 = lVar9 + -0x10;
        puVar12 = puVar12 + -4;
    }
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    return;
}


void FUN_14015cb70(longlong param_1, uint *param_2) {
    uint *puVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;

    puVar1 = (uint * )(param_1 + 0xa0);
    if (puVar1 != param_2) {
        FUN_1401429a0(DAT_140c63678, *puVar1);
        uVar2 = *param_2;
        *puVar1 = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            lVar4 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) uVar2 * 0x20;
            iVar3 = *(int *) (lVar4 + 0x10);
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *) (lVar4 + 0x10) = iVar3 + 1;
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_14015cbe0(longlong param_1) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined2 *puVar3;
    undefined auVar4[16];
    undefined auVar5[16];
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar3;
    *(undefined2 * *)(param_1 + 0x10) = puVar3;
    *(undefined2 * *)(param_1 + 0x18) = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x28) = puVar3;
    *(undefined2 * *)(param_1 + 0x30) = puVar3;
    *(undefined2 * *)(param_1 + 0x38) = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    uVar1 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x54) = 0;
    *(undefined4 * )(param_1 + 0x40) = 0;
    *(undefined4 * )(param_1 + 0x44) = 10;
    *(undefined4 * )(param_1 + 0x48) = 0x400;
    *(undefined4 * )(param_1 + 0x4c) = 4;
    *(undefined2 * )(param_1 + 0x50) = 0x100;
    FUN_1401429a0(uVar1, *(undefined4 * )(param_1 + 0x54));
    auVar4 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
                                                                                                       (CONCAT97(
                                                                                                                (unkuint9)
                                                                                                                        SUB158(CONCAT78(
                                                                                                                                       SUB157(CONCAT69(
                                                                                                                                                      SUB156(
                                                                                                                                                              CONCAT510(
                                                                                                                                                                      SUB155(CONCAT411(
                                                                                                                                                                                     SUB154(CONCAT312(
                                                                                                                                                                                                    SUB153
                                                                                                                                                                                                            (CONCAT213(
                                                                                                                                                                                                                     SUB152(CONCAT114(
                                                                                                                                                                                                                                    SUB161(_DAT_140b7b610
                                                                                                                                                                                                                                                   >> 0x38,
                                                                                                                                                                                                                                           0),
                                                                                                                                                                                                                                    SUB1614(_DAT_140b7b610,
                                                                                                                                                                                                                                            0))
                                                                                                                                                                                                                                    >> 0x68,
                                                                                                                                                                                                                            0
                                                                                                                                                                                                                     ),
                                                                                                                                                                                                                     CONCAT112(
                                                                                                                                                                                                                             SUB161(_DAT_140b7b610
                                                                                                                                                                                                                                            >> 0x30,
                                                                                                                                                                                                                                    0),
                                                                                                                                                                                                                             SUB1612(
                                                                                                                                                                                                                                     _DAT_140b7b610,
                                                                                                                                                                                                                                     0)))
                                                                                                                                                                                                                     >> 0x60,
                                                                                                                                                                                                             0),
                                                                                                                                                                                                    SUB1612(_DAT_140b7b610,
                                                                                                                                                                                                            0))
                                                                                                                                                                                                    >> 0x58,
                                                                                                                                                                                            0),
                                                                                                                                                                                     CONCAT110(
                                                                                                                                                                                             SUB161(_DAT_140b7b610
                                                                                                                                                                                                            >> 0x28,
                                                                                                                                                                                                    0),
                                                                                                                                                                                             SUB1610(_DAT_140b7b610,
                                                                                                                                                                                                     0)))
                                                                                                                                                                                     >> 0x50,
                                                                                                                                                                             0),
                                                                                                                                                                      SUB1610(_DAT_140b7b610,
                                                                                                                                                                              0))
                                                                                                                                                                      >> 0x48,
                                                                                                                                                              0),
                                                                                                                                                      CONCAT18(
                                                                                                                                                              SUB161(_DAT_140b7b610
                                                                                                                                                                             >> 0x20,
                                                                                                                                                                     0),
                                                                                                                                                              SUB168(_DAT_140b7b610,
                                                                                                                                                                     0)))
                                                                                                                                                      >> 0x40,
                                                                                                                                              0),
                                                                                                                                       SUB168(_DAT_140b7b610,
                                                                                                                                              0))
                                                                                                                                       >> 0x38,
                                                                                                                               0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0),
                                                                                                                (SUB167(_DAT_140b7b610,
                                                                                                                        0)
                                                                                                                        >> 0x18)
                                                                                                                        << 0x30)
                                                                                                                >>
                                                                                                                0x30,
                                                                                                        0),
                                                                                               SUB166(_DAT_140b7b610,
                                                                                                      0)) >> 0x28, 0) &
                                                                             SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                             >>
                                                                                             0x28, 0),
                                                                             (SUB165(_DAT_140b7b610, 0) >> 0x10)
                                                                                     << 0x20) >>
                                                                                              0x20, 0),
                                                           SUB164(_DAT_140b7b610, 0)) >> 0x18, 0) &
                                         SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                         (SUB163(_DAT_140b7b610, 0) >> 8) << 0x10) >> 0x10, 0),
                       SUB162(_DAT_140b7b610, 0)) & (undefined[16]) 0xffffffffffff00ff;
    auVar5 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar4 >> 0x30, 0), SUB1612(auVar4, 0)) >> 0x50, 0),
                                                                                  CONCAT28(SUB162(auVar4 >> 0x20, 0),
                                                                                           SUB168(auVar4, 0)
                                                                                  )) >> 0x40, 0), SUB168(auVar4, 0))
                                                                >> 0x30, 0)
                                         & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                         SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                         (SUB166(auVar4, 0) >> 0x10) << 0x20) >> 0x20, 0),
                       SUB164(auVar4, 0)) & (undefined[16]) 0xffffffff0000ffff;
    local_18 = (float) SUB164(auVar5 >> 0x40, 0) * 0.003921569;
    fStack20 = (float) SUB164(auVar5 >> 0x20, 0) * 0.003921569;
    fStack16 = (float) (SUB164(auVar4, 0) & 0xffff) * 0.003921569;
    fStack12 = (float) SUB164(auVar5 >> 0x60, 0) * 0.003921569;
    uVar2 = FUN_140141f10(DAT_140c63678, &local_18);
    *(undefined4 * )(param_1 + 0x54) = uVar2;
    return param_1;
}


longlong *FUN_14015ccd0(longlong *param_1, longlong param_2, undefined *param_3, undefined8 param_4) {
    longlong **pplVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined2 *puVar5;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    *param_1 = param_2;
    *(undefined * )(param_1 + 1) = 1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = (longlong) puVar5;
    param_1[4] = (longlong) puVar5;
    param_1[5] = (longlong)(puVar5 + 8);
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    param_1[7] = (longlong) puVar5;
    param_1[8] = (longlong) puVar5;
    param_1[9] = (longlong)(puVar5 + 8);
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xb] = (longlong) puVar5;
    param_1[0xc] = (longlong) puVar5;
    param_1[0xd] = (longlong)(puVar5 + 8);
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    FUN_1401095e0(param_1 + 0xe);
    uVar3 = DAT_140c63678;
    local_28 = 0x3f800000;
    uStack36 = 0x3f800000;
    uStack32 = 0x3f800000;
    uStack28 = 0x3f800000;
    *(undefined4 * )(param_1 + 0x14) = 0;
    uVar4 = FUN_140141f10(uVar3, &local_28);
    pplVar1 = (longlong * *)(param_1 + 0x18);
    *(undefined4 * )((longlong) param_1 + 0xa4) = uVar4;
    param_1[0x15] = 0;
    *(undefined4 * )(param_1 + 0x16) = 0xfffffffe;
    param_1[0x17] = 0;
    *pplVar1 = (longlong *) 0x0;
    if (*(longlong * )(param_2 + 0x20) != 0) {
        FUN_140109710(param_1 + 0xe, *(longlong * )(param_2 + 0x20) + 0xf0, param_4, 0);
    }
    plVar2 = *pplVar1;
    if (plVar2 == (longlong *) 0x0) {
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(*param_1 + 0x2b8) + 0x60), param_3,
                 0xffffffffffffffff, pplVar1);
    } else {
        if (param_3 == (undefined *) 0x0) {
            param_3 = &DAT_1409dc304;
        }
        (**(code * *)(*plVar2 + 0x38))(plVar2, param_3, 0xffffffffffffffff);
    }
    return param_1;
}


void FUN_14015ce70(longlong *param_1, undefined8 param_2) {
    if (*(longlong * )(*param_1 + 0x20) != 0) {
        FUN_1400579e0(*(undefined8 * )(*(longlong * )(*param_1 + 0x20) + 400), param_2,
                      *(undefined4 * )(param_1 + 0x16));
    }
    if ((longlong *) param_1[0x17] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x17] + 8))();
        param_1[0x17] = 0;
    }
    if ((longlong *) param_1[0x18] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x18] + 8))();
        param_1[0x18] = 0;
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0xa4));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x14));
    if ((longlong *) param_1[0xe] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe] + 8))();
        param_1[0xe] = 0;
    }
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11], 0);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb], 0);
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
        return;
    }
    return;
}


void FUN_14015cf60(longlong *param_1, undefined4 param_2) {
    FUN_1400579e0(*(undefined8 * )(*(longlong * )(*param_1 + 0x20) + 400), param_2,
                  *(undefined4 * )(param_1 + 0x16));
    *(undefined4 * )(param_1 + 0x16) = param_2;
    return;
}


void FUN_14015cfa0(longlong *param_1, longlong *param_2) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = 0;
    if ((longlong *) param_1[0x17] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x17] + 8))();
        param_1[0x17] = 0;
    }
    lVar2 = FUN_14018b280(0x360, 0);
    if (lVar2 != 0) {
        lVar3 = FUN_14013feb0(lVar2, *(undefined8 * )(*param_1 + 0x20));
    }
    param_1[0x17] = lVar3;
    plVar1 = (longlong * )(lVar3 + 0x18);
    if (plVar1 != param_2) {
        (**(code * *)(*plVar1 + 0x78))(plVar1, 0);
        FUN_1401a7460(plVar1, param_2);
    }
    FUN_1401411c0(lVar3);
    return;
}


void FUN_14015d030(longlong *param_1, undefined *param_2) {
    longlong *plVar1;

    plVar1 = (longlong *) param_1[0x18];
    if (plVar1 == (longlong *) 0x0) {
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(*param_1 + 0x2b8) + 0x60), param_2,
                 0xffffffffffffffff, param_1 + 0x18);
        return;
    }
    if (param_2 == (undefined *) 0x0) {
        param_2 = &DAT_1409dc304;
    }
    // WARNING: Could not recover jumptable at 0x00014015d08c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar1 + 0x38))(plVar1, param_2, 0xffffffffffffffff);
    return;
}


undefined *
FUN_14015d090(undefined *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4,
              undefined8 param_5, undefined4 param_6, uint *param_7) {
    uint uVar1;
    int iVar2;
    longlong lVar3;

    *param_1 = 1;
    param_1[2] = 1;
    *(undefined4 * )(param_1 + 4) = param_3;
    *(undefined8 * )(param_1 + 0x10) = 0;
    FUN_1401095e0();
    *(undefined4 * )(param_1 + 0x48) = param_6;
    lVar3 = DAT_140c63678;
    uVar1 = *param_7;
    *(uint * )(param_1 + 0x4c) = uVar1;
    if ((ulonglong) uVar1 < *(ulonglong * )(lVar3 + 0x30)) {
        lVar3 = *(longlong * )(lVar3 + 0x28) + (ulonglong) uVar1 * 0x20;
        iVar2 = *(int *) (lVar3 + 0x10);
        if (iVar2 - 1U < 0xfffffffe) {
            *(int *) (lVar3 + 0x10) = iVar2 + 1;
        }
    }
    *(undefined4 * )(param_1 + 8) = 10;
    *(undefined4 * )(param_1 + 0xc) = 0x800;
    FUN_14015d130(param_1, &DAT_1409dc7a4, param_4);
    return param_1;
}


void FUN_14015d130(longlong param_1, undefined *param_2, longlong param_3) {
    longlong *plVar1;
    undefined *puVar2;

    if ((param_2 == (undefined *) 0x0) && (param_3 == 0)) {
        if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
            *(undefined8 * )(param_1 + 0x10) = 0;
            return;
        }
        return;
    }
    plVar1 = *(longlong * *)(param_1 + 0x10);
    if (plVar1 == (longlong *) 0x0) {
        puVar2 = &DAT_1409dc39c;
        if (param_2 != (undefined *) 0x0) {
            puVar2 = param_2;
        }
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(param_3 + 0x60), puVar2, 0xffffffffffffffff,
                 param_1 + 0x10);
        return;
    }
    if (param_2 == (undefined *) 0x0) {
        param_2 = &DAT_1409dc37c;
    }
    // WARNING: Could not recover jumptable at 0x00014015d1b6. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar1 + 0x38))(plVar1, param_2, 0xffffffffffffffff);
    return;
}


undefined8 *
FUN_14015d1c0(undefined8 *param_1, undefined8 param_2, undefined4 param_3, uint *param_4, uint param_5) {
    uint *puVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;

    *param_1 = param_2;
    *(undefined2 * )(param_1 + 1) = 1;
    *(undefined4 * )((longlong) param_1 + 0xc) = param_3;
    param_1[3] = 0;
    param_1[2] = 0;
    if (0 < (int) param_5) {
        uVar8 = (ulonglong) param_5;
        do {
            lVar5 = FUN_14018b280(200, 0);
            if (lVar5 == 0) {
                lVar5 = 0;
            } else {
                lVar5 = FUN_14015ccd0(lVar5, *param_1, &DAT_1409dc31c, &DAT_1409dc334);
            }
            puVar1 = (uint * )(lVar5 + 0xa0);
            if (puVar1 != param_4) {
                FUN_1401429a0(DAT_140c63678, *puVar1);
                uVar2 = *param_4;
                *puVar1 = uVar2;
                if ((ulonglong) uVar2 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                    lVar7 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) uVar2 * 0x20;
                    iVar3 = *(int *) (lVar7 + 0x10);
                    if (iVar3 - 1U < 0xfffffffe) {
                        *(int *) (lVar7 + 0x10) = iVar3 + 1;
                    }
                }
            }
            lVar4 = param_1[3];
            lVar7 = lVar4 + 1;
            lVar6 = FUN_14018db00(param_1[2], lVar7, 8);
            *(longlong * )(lVar6 + lVar4 * 8) = lVar5;
            if (param_1[2] != lVar6) {
                FUN_1407db590(lVar6, param_1[2], param_1[3] << 3);
                lVar5 = param_1[2];
                if (lVar5 != 0) {
                    (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
                }
                param_1[2] = lVar6;
            }
            param_1[3] = lVar7;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    return param_1;
}


void FUN_14015d320(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(longlong * )(param_1 + 0x18) != 0) {
        do {
            lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x10) + uVar2 * 8);
            if (lVar1 != 0) {
                FUN_14015ce70(lVar1);
                FUN_14018b900(lVar1);
            }
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(param_1 + 0x18));
    }
    lVar1 = *(longlong * )(param_1 + 0x10);
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014015d38d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}


void FUN_14015d3a0(undefined8 *param_1, int param_2, undefined8 param_3) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    int iVar6;

    if (-1 < param_2) {
        iVar6 = *(int *) (param_1 + 3);
        while (iVar6 <= param_2) {
            lVar3 = FUN_14018b280(200, 0);
            if (lVar3 == 0) {
                uVar4 = 0;
            } else {
                uVar4 = FUN_14015ccd0(lVar3, *param_1, &DAT_1409dc34c, &DAT_1409dc35c);
            }
            lVar1 = param_1[3];
            lVar3 = lVar1 + 1;
            lVar5 = FUN_14018db00(param_1[2], lVar3, 8);
            *(undefined8 * )(lVar5 + lVar1 * 8) = uVar4;
            if (param_1[2] != lVar5) {
                FUN_1407db590(lVar5, param_1[2], param_1[3] << 3);
                lVar1 = param_1[2];
                if (lVar1 != 0) {
                    (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                param_1[2] = lVar5;
            }
            param_1[3] = lVar3;
            iVar6 = (int) lVar3;
        }
        lVar3 = (longlong) param_2 * 8;
        FUN_14015cfa0(*(undefined8 * )(lVar3 + param_1[2]), param_3);
        *(undefined8 * )(*(longlong * )(lVar3 + param_1[2]) + 0xa8) = 0;
        plVar2 = *(longlong * *)(lVar3 + param_1[2]);
        FUN_1400579e0(*(undefined8 * )(*(longlong * )(*plVar2 + 0x20) + 400));
        *(undefined4 * )(plVar2 + 0x16) = 0xfffffffe;
    }
    return;
}


void FUN_14015d4f0(undefined8 *param_1, int param_2, undefined *param_3, longlong param_4,
                   undefined8 param_5, undefined8 param_6, undefined4 param_7) {
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    int iVar7;

    iVar7 = *(int *) (param_1 + 3);
    while (iVar7 <= param_2) {
        lVar4 = FUN_14018b280(200, 0);
        uVar5 = 0;
        if (lVar4 != 0) {
            uVar5 = FUN_14015ccd0(lVar4, *param_1, &DAT_1409dc4f4, &DAT_1409dc554);
        }
        lVar2 = param_1[3];
        lVar4 = lVar2 + 1;
        lVar6 = FUN_14018db00(param_1[2], lVar4, 8);
        *(undefined8 * )(lVar6 + lVar2 * 8) = uVar5;
        if (param_1[2] != lVar6) {
            FUN_1407db590(lVar6, param_1[2], param_1[3] << 3);
            lVar2 = param_1[2];
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            param_1[2] = lVar6;
        }
        param_1[3] = lVar4;
        iVar7 = (int) lVar4;
    }
    lVar4 = (longlong) param_2 * 8;
    pplVar1 = (longlong * *)(*(longlong * *)(lVar4 + param_1[2]) + 0x18);
    plVar3 = *pplVar1;
    if (plVar3 == (longlong *) 0x0) {
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680,
                 *(undefined8 * )(*(longlong * )(**(longlong * *)(lVar4 + param_1[2]) + 0x2b8) + 0x60),
                 param_3, 0xffffffffffffffff, pplVar1);
    } else {
        if (param_3 == (undefined *) 0x0) {
            param_3 = &DAT_1409dc304;
        }
        (**(code * *)(*plVar3 + 0x38))(plVar3, param_3, 0xffffffffffffffff);
    }
    lVar2 = *(longlong * )(**(longlong * *)(lVar4 + param_1[2]) + 0x20);
    if (lVar2 != 0) {
        FUN_140109710(*(longlong * *)(lVar4 + param_1[2]) + 0xe, lVar2 + 0xf0, param_5, 0);
    }
    *(undefined8 * )(*(longlong * )(lVar4 + param_1[2]) + 0xa8) = param_6;
    plVar3 = *(longlong * *)(lVar4 + param_1[2]);
    FUN_1400579e0(*(undefined8 * )(*(longlong * )(*plVar3 + 0x20) + 400));
    *(undefined4 * )(plVar3 + 0x16) = param_7;
    if (param_4 != 0) {
        FUN_14015cb70(*(undefined8 * )(lVar4 + param_1[2]), param_4);
    }
    return;
}


ulonglong FUN_14015d6e0(longlong param_1, longlong param_2) {
    int iVar1;
    undefined4 extraout_var;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    PCNZWCH lpString1;
    PCNZWCH lpString2;

    lVar4 = 0;
    lpString1 = L"";
    lpString2 = L"";
    lVar2 = lVar4;
    if ((-1 < DAT_140c63680) && (DAT_140c63680 < *(int *) (param_1 + 0x18))) {
        lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x10) + (longlong) DAT_140c63680 * 8);
    }
    if ((-1 < DAT_140c63680) && (DAT_140c63680 < *(int *) (param_2 + 0x18))) {
        lVar4 = *(longlong * )(*(longlong * )(param_2 + 0x10) + (longlong) DAT_140c63680 * 8);
    }
    if (lVar2 != 0) {
        if (*(longlong * )(lVar2 + 0x18) == *(longlong * )(lVar2 + 0x20)) {
            if (*(longlong * *)(lVar2 + 0xc0) == (longlong *) 0x0) {
                lpString1 = L"";
            } else {
                lpString1 = (PCNZWCH)(**(code * *)(**(longlong * *)(lVar2 + 0xc0) + 0x40))();
            }
        } else {
            lpString1 = *(PCNZWCH * )(lVar2 + 0x18);
        }
    }
    if (lVar4 != 0) {
        if (*(longlong * )(lVar4 + 0x18) == *(longlong * )(lVar4 + 0x20)) {
            if (*(longlong * *)(lVar4 + 0xc0) == (longlong *) 0x0) {
                lpString2 = L"";
            } else {
                lpString2 = (PCNZWCH)(**(code * *)(**(longlong * *)(lVar4 + 0xc0) + 0x40))();
            }
        } else {
            lpString2 = *(PCNZWCH * )(lVar4 + 0x18);
        }
    }
    uVar3 = 0xffffffff;
    iVar1 = CompareStringW(*(LCID * )(DAT_140c7aac0 + 0xc), 0, lpString1, -1, lpString2, -1);
    if (iVar1 != 1) {
        uVar3 = (uint)(iVar1 == 3);
    }
    return CONCAT44(extraout_var, iVar1) & 0xffffffffffffff00 | (ulonglong)((int) uVar3 < 0);
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_14015d7f0(undefined8 *param_1, undefined8 param_2, undefined8 param_3, longlong param_4, int param_5,
              longlong *param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9) {
    char cVar1;
    undefined *puVar2;
    longlong **pplVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    uint uVar6;
    longlong *plVar7;
    int iVar8;
    wchar_t **ppwVar9;
    longlong lVar10;
    uint uVar11;
    ulonglong uVar12;
    longlong *plVar13;
    longlong lVar14;
    undefined auVar15[16];
    undefined auVar16[16];
    undefined auVar17[16];
    undefined in_XMM6_Ba;
    byte bVar18;
    undefined in_XMM6_Bb;
    undefined uVar19;
    undefined in_XMM6_Bc;
    undefined uVar20;
    undefined in_XMM6_Bd;
    undefined uVar21;
    undefined in_XMM6_Be;
    undefined uVar22;
    undefined in_XMM6_Bf;
    undefined uVar23;
    undefined in_XMM6_Bg;
    undefined uVar24;
    undefined in_XMM6_Bh;
    undefined uVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    undefined auVar30[14];
    undefined auVar31[15];
    undefined auVar32[14];
    undefined in_register_00001322[19];
    undefined in_register_00001342[19];
    longlong *local_res8;
    int local_res20;
    undefined4 local_res24;
    undefined local_f8[8];
    ulonglong uStack240;
    wchar_t *local_e8[4];
    wchar_t *local_c8;
    wchar_t *local_c0;
    undefined4 local_94;

    FUN_1400c5920();
    iVar8 = 0;
    *(undefined4 * )(param_1 + 0x84) = 0;
    *(undefined4 * )((longlong) param_1 + 0x43c) = 2;
    *(undefined4 * )(param_1 + 0x88) = 2;
    *(undefined4 * )((longlong) param_1 + 0x444) = 2;
    *(undefined4 * )(param_1 + 0x89) = 2;
    *(undefined * )((longlong) param_1 + 0x44c) = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    *param_1 = &PTR_LAB_140b5caf0;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    puVar2 = (undefined *) FUN_14018b280(0x28, 0);
    param_1[0x94] = 0;
    plVar7 = param_1 + 0x97;
    param_1[0x93] = puVar2;
    *puVar2 = 0;
    *(undefined8 * )(param_1[0x93] + 8) = 0;
    *(undefined8 * )(param_1[0x93] + 0x10) = param_1[0x93];
    *(undefined8 * )(param_1[0x93] + 0x18) = param_1[0x93];
    param_1[0x96] = 0;
    FUN_1400c35f0(plVar7);
    FUN_1400c35f0(param_1 + 0xcb);
    FUN_1401095e0(param_1 + 0xff);
    FUN_1401095e0(param_1 + 0x105);
    FUN_1401095e0(param_1 + 0x10b);
    param_1[0x111] = 0;
    param_1[0x112] = 0;
    param_1[0x113] = 0;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    *(undefined4 * )(param_1 + 0x116) = 0;
    param_1[0x36] = param_1[0x36] | 0x40;
    if ((param_4 == 0) || (param_5 < 1)) {
        FUN_14015cbe0(local_e8);
        param_1[0x53] = param_1[0x53] | 8;
        FUN_14015f870(param_1, local_e8);
        FUN_1401429a0(DAT_140c63678, local_94);
        if (local_c0 != (wchar_t *) 0x0) {
            FUN_14018b900(local_c0, 0);
        }
        if (local_e8[1] != (wchar_t *) 0x0) {
            FUN_14018b900(local_e8[1], 0);
        }
    } else {
        param_1[0x53] = param_1[0x53] | 1;
        if (0 < param_5) {
            do {
                if (0x1f < iVar8) break;
                FUN_14015f870(param_1, (longlong) iVar8 * 0x58 + param_4);
                iVar8 = iVar8 + 1;
            } while (iVar8 < param_5);
        }
    }
    lVar10 = param_1[4];
    lVar14 = 6;
    param_1[0x96] = param_1[0x57];
    param_1[0x81] = 0xffffffffffffffff;
    local_e8[0] = L"WhiteFill";
    param_1[0x82] = 0xffffffffffffffff;
    local_e8[1] = L"WhiteFill";
    param_1[0x83] = 0xffffffffffffffff;
    local_e8[2] = L"WhiteFill";
    *(undefined4 * )((longlong) param_1 + 0x42c) = 0xffffffff;
    local_e8[3] = L"WhiteFill";
    *(undefined4 * )((longlong) param_1 + 0x424) = 0xffffffff;
    local_c8 = L"WhiteFill";
    *(undefined4 * )((longlong) param_1 + 0x404) = 0x10;
    ppwVar9 = local_e8;
    puVar4 = param_1 + 0xcb;
    plVar13 = (longlong * ) & DAT_00000006;
    local_c0 = L"WhiteFill";
    do {
        if (lVar10 != 0) {
            FUN_140109710(puVar4, lVar10 + 0xf0, *ppwVar9);
        }
        puVar4 = puVar4 + 6;
        ppwVar9 = ppwVar9 + 1;
        plVar13 = (longlong * )((longlong) plVar13 + -1);
    } while (plVar13 != (longlong *) 0x0);
    FUN_1400c3ad0(param_1 + 0xcb, param_1 + 0xf5);
    if (CONCAT44(param_6._4_4_, (int) param_6) == 0) {
        lVar10 = param_1[4];
        ppwVar9 = local_e8;
        plVar13 = plVar7;
        do {
            if (lVar10 != 0) {
                FUN_140109710(plVar13, lVar10 + 0xf0, *ppwVar9);
            }
            plVar13 = plVar13 + 6;
            ppwVar9 = ppwVar9 + 1;
            lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        FUN_1400c3ad0(plVar7, param_1 + 0xc1);
        plVar13 = (longlong *) 0x0;
        uVar6 = (int) *(float *) (param_1[0x57] + 0x5c) + 4;
    } else {
        FUN_1400c3730(plVar7, CONCAT44(param_6._4_4_, (int) param_6) + 0x288);
        uVar12 = 0;
        local_res8 = plVar13;
        uVar11 = 0;
        do {
            iVar8 = (int) uVar12;
            lVar10 = *plVar7;
            if (lVar10 == 0) {
                local_res24 = 0;
                local_res20 = 0;
            } else {
                FUN_140101470(lVar10, &local_res20);
            }
            pplVar3 = &param_6;
            if (local_res20 <= iVar8) {
                pplVar3 = &local_res8;
            }
            param_6._0_4_ = local_res20;
            uVar12 = (ulonglong) * (uint *) pplVar3;
            local_res8 = (longlong * )
                    ((ulonglong) local_res8 & 0xffffffff00000000 | (ulonglong) * (uint *) pplVar3);
            if (lVar10 == 0) {
                local_f8._4_4_ = 0;
                uStack240 = SUB168(_local_f8 >> 0x40, 0) & 0xffffffff00000000;
                _local_f8 = ZEXT816(uStack240) << 0x40;
            } else {
                FUN_140101470(lVar10, local_f8);
            }
            puVar4 = &param_6;
            if (local_f8._4_4_ <= (int) uVar11) {
                puVar4 = (undefined8 * )((longlong) & local_res8 + 4);
            }
            param_6._0_4_ = local_f8._4_4_;
            plVar7 = plVar7 + 6;
            uVar11 = *(uint *) puVar4;
            local_res8 = (longlong * )((ulonglong) local_res8 & 0xffffffff | (ulonglong) uVar11 << 0x20);
            lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar6 = (int) *(float *) (param_1[0x57] + 0x5c) + 4;
        if ((int) uVar6 < (int) uVar11) {
            uVar6 = uVar11;
        }
    }
    lVar10 = param_1[4];
    *(uint * )(param_1 + 0x80) = uVar6;
    if ((lVar10 != 0) &&
        ((pplVar3 = (longlong * *)(param_1 + 0x105), *pplVar3 == (longlong *) 0x0 ||
                                                     (cVar1 = FUN_14002c740(param_1 + 0x107, L"HoloArrowUpBtnNormal"),
                                                             cVar1 == '\0')))) {
        plVar5 = (longlong *) FUN_140108e80(lVar10 + 0xf0, L"HoloArrowUpBtnNormal");
        plVar7 = plVar13;
        if (plVar5 != (longlong *) 0x0) {
            do {
                puVar2 = (undefined * )((longlong) plVar7 + 1);
                plVar7 = (longlong * )((longlong) plVar7 + 1);
            } while (L"HoloArrowUpBtnNormal"[(longlong) puVar2] != L'\0');
            FUN_14001c480(param_1 + 0x107, L"HoloArrowUpBtnNormal",
                          L"HoloArrowUpBtnNormal" + (longlong) plVar7);
        }
        if (plVar5 != *pplVar3) {
            if (plVar5 != (longlong *) 0x0) {
                (**(code * *) * plVar5)(plVar5);
            }
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 8))();
                *pplVar3 = plVar13;
            }
            *pplVar3 = plVar5;
        }
    }
    lVar10 = param_1[4];
    if ((lVar10 != 0) &&
        ((pplVar3 = (longlong * *)(param_1 + 0x10b), *pplVar3 == (longlong *) 0x0 ||
                                                     (cVar1 = FUN_14002c740(param_1 + 0x10d, L"HoloArrowDownBtnNormal"),
                                                             cVar1 == '\0')))) {
        plVar5 = (longlong *) FUN_140108e80(lVar10 + 0xf0, L"HoloArrowDownBtnNormal");
        plVar7 = plVar13;
        if (plVar5 != (longlong *) 0x0) {
            do {
                puVar2 = (undefined * )((longlong) plVar7 + 1);
                plVar7 = (longlong * )((longlong) plVar7 + 1);
            } while (L"HoloArrowDownBtnNormal"[(longlong) puVar2] != L'\0');
            FUN_14001c480(param_1 + 0x10d, L"HoloArrowDownBtnNormal",
                          L"HoloArrowDownBtnNormal" + (longlong) plVar7);
        }
        if (plVar5 != *pplVar3) {
            if (plVar5 != (longlong *) 0x0) {
                (**(code * *) * plVar5)(plVar5);
            }
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 8))();
                *pplVar3 = plVar13;
            }
            *pplVar3 = plVar5;
        }
    }
    auVar31 = SUB1615(_DAT_140b7b6f0, 0);
    fVar26 = 0.003921569;
    fVar27 = 0.003921569;
    fVar28 = 0.003921569;
    fVar29 = 0.003921569;
    uVar6 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
            CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar18 = (byte) uVar6;
    uVar19 = (undefined)(uVar6 >> 8);
    uVar20 = (undefined)(uVar6 >> 0x10);
    uVar21 = (undefined)(uVar6 >> 0x18);
    uVar11 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
             CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar22 = (undefined) uVar11;
    uVar23 = (undefined)(uVar11 >> 8);
    uVar24 = (undefined)(uVar11 >> 0x10);
    uVar25 = (undefined)(uVar11 >> 0x18);
    auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114(SUB161(_DAT_140b7b6f0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6f0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(_DAT_140b7b6f0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6f0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar23, SUB1611(_DAT_140b7b6f0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6f0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar22, SUB169(_DAT_140b7b6f0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6f0, 0))) >> 0x40, 0), uVar21),
                       (SUB167(_DAT_140b7b6f0, 0) >> 0x18) << 0x30);
    auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar20),
                        (SUB165(_DAT_140b7b6f0, 0) >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar19),
                                          (SUB163(_DAT_140b7b6f0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6f0, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214((short) (uVar11 >> 0x10),
                             CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210((short) uVar11, SUB1610(auVar15, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
    _local_f8 = CONCAT412((float) iVar8 * 0.003921569,
                          CONCAT48((float) (SUB164(auVar15, 0) & 0xffff | uVar6 << 0x10) * 0.003921569,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), (short) (uVar6 >> 0x10)),
                                                              (SUB166(auVar15, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * 0.003921569,
                                            (float) SUB164(auVar16 >> 0x40, 0) * 0.003921569)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = param_1 + 0x111;
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114(SUB161(_DAT_140b7b610 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b610, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(_DAT_140b7b610, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b610 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b610, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar23, SUB1611(_DAT_140b7b610, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b610 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b610, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar22, SUB169(_DAT_140b7b610, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b610 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b610, 0))) >> 0x40, 0), uVar21),
                       (SUB167(_DAT_140b7b610, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar20),
                        (SUB165(_DAT_140b7b610, 0) >> 0x10) << 0x20);
    auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB163(_DAT_140b7b610, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b610, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar16 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar15, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar15, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar15, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar15, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar16 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = (undefined8 * )((longlong) param_1 + 0x88c);
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(uint *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB151(auVar31 >> 0x38, 0),
                                                                                                                                                              SUB1514(auVar31, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1513(auVar31, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB151(auVar31 >> 0x30, 0),
                                                                                                                     SUB1512(auVar31, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1511(auVar31, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB151(auVar31 >> 0x28, 0),
                                                                                            SUB1510(auVar31, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB159(auVar31, 0))) >> 0x48, 0),
                                                CONCAT18(SUB151(auVar31 >> 0x20, 0), SUB158(auVar31, 0)))
                                               >> 0x40, 0), uVar21), (SUB157(auVar31, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB155(auVar31, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB153(auVar31, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB152(auVar31, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    auVar30 = SUB1514(auVar31 >> 0x38, 0);
    puVar4 = param_1 + 0x114;
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114(SUB161(_DAT_140b7b6c0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6c0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(_DAT_140b7b6c0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6c0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6c0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar23, SUB1611(_DAT_140b7b6c0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6c0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6c0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar22, SUB169(_DAT_140b7b6c0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6c0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6c0, 0))) >> 0x40, 0), uVar21),
                       (SUB167(_DAT_140b7b6c0, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB165(_DAT_140b7b6c0, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB163(_DAT_140b7b6c0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6c0, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = (undefined8 * )((longlong) param_1 + 0x894);
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(uint *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB141(auVar30 >> 0x38, 0),
                                                                                                                                                              auVar30)) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1413(auVar30, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB141(auVar30 >> 0x30, 0),
                                                                                                                     SUB1412(auVar30, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1411(auVar30, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB141(auVar30 >> 0x28, 0),
                                                                                            SUB1410(auVar30, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB149(auVar30, 0))) >> 0x48, 0),
                                                CONCAT18(SUB141(auVar30 >> 0x20, 0), SUB148(auVar30, 0)))
                                               >> 0x40, 0), uVar21), (SUB147(auVar30, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB145(auVar30, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB143(auVar30, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB142(auVar30, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = (undefined8 * )((longlong) param_1 + 0x8a4);
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(uint *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    auVar30 = SUB1914(in_register_00001342 >> 0x28, 0);
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB141(auVar30 >> 0x38, 0),
                                                                                                                                                              auVar30)) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1413(auVar30, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB141(auVar30 >> 0x30, 0),
                                                                                                                     SUB1412(auVar30, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1411(auVar30, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB141(auVar30 >> 0x28, 0),
                                                                                            SUB1410(auVar30, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB149(auVar30, 0))) >> 0x48, 0),
                                                CONCAT18(SUB141(auVar30 >> 0x20, 0), SUB148(auVar30, 0)))
                                               >> 0x40, 0), uVar21), (SUB147(auVar30, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB145(auVar30, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB143(auVar30, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB142(auVar30, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = param_1 + 0x112;
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar30 = SUB1614(_DAT_140b7b6e0 >> 0x38, 0);
    auVar16 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114(SUB161(_DAT_140b7b6e0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6e0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(_DAT_140b7b6e0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6e0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6e0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar23, SUB1611(_DAT_140b7b6e0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6e0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6e0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar22, SUB169(_DAT_140b7b6e0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6e0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6e0, 0))) >> 0x40, 0), uVar21),
                       (SUB167(_DAT_140b7b6e0, 0) >> 0x18) << 0x30);
    auVar15 = CONCAT115(CONCAT101(SUB1610(auVar16 >> 0x30, 0), uVar20),
                        (SUB165(_DAT_140b7b6e0, 0) >> 0x10) << 0x20);
    auVar17 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar15 >> 0x20, 0), uVar19),
                                          (SUB163(_DAT_140b7b6e0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6e0, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar16 >> 0x30, 0), SUB1612(auVar17, 0))) >> 0x60, 0);
    auVar16 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar17, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar15 >> 0x20, 0), SUB168(auVar17, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar17, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar17, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar16 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = param_1 + 0x115;
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    auVar32 = SUB1914(in_register_00001322 >> 0x28, 0);
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB141(auVar32 >> 0x38, 0),
                                                                                                                                                              auVar32)) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1413(auVar32, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB141(auVar32 >> 0x30, 0),
                                                                                                                     SUB1412(auVar32, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1411(auVar32, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB141(auVar32 >> 0x28, 0),
                                                                                            SUB1410(auVar32, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB149(auVar32, 0))) >> 0x48, 0),
                                                CONCAT18(SUB141(auVar32 >> 0x20, 0), SUB148(auVar32, 0)))
                                               >> 0x40, 0), uVar21), (SUB147(auVar32, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB145(auVar32, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB143(auVar32, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB142(auVar32, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = param_1 + 0x113;
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           (uVar25, CONCAT114(SUB141(auVar30 >> 0x38, 0),
                                                                                                                                                              auVar30)) >> 0x70, 0),
                                                                                                                            CONCAT113(uVar24, SUB1413(auVar30, 0))) >> 0x68, 0),
                                                                                                           CONCAT112(SUB141(auVar30 >> 0x30, 0),
                                                                                                                     SUB1412(auVar30, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar23, SUB1411(auVar30, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB141(auVar30 >> 0x28, 0),
                                                                                            SUB1410(auVar30, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19(uVar22, SUB149(auVar30, 0))) >> 0x48, 0),
                                                CONCAT18(SUB141(auVar30 >> 0x20, 0), SUB148(auVar30, 0)))
                                               >> 0x40, 0), uVar21), (SUB147(auVar30, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB145(auVar30, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB143(auVar30, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB142(auVar30, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = (undefined8 * )((longlong) param_1 + 0x8ac);
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(uint *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    auVar15 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar25, CONCAT114(SUB161(_DAT_140b7b6a0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6a0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar24, SUB1613(_DAT_140b7b6a0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6a0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6a0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar23, SUB1611(_DAT_140b7b6a0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6a0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6a0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar22, SUB169(_DAT_140b7b6a0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6a0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6a0, 0))) >> 0x40, 0), uVar21),
                       (SUB167(_DAT_140b7b6a0, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar15 >> 0x30, 0), uVar20),
                        (SUB165(_DAT_140b7b6a0, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar17 >> 0x20, 0), uVar19),
                                          (SUB163(_DAT_140b7b6a0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6a0, 0) & 0xff | (ushort) bVar18 << 8);
    iVar8 = SUB164(CONCAT214(CONCAT11(uVar25, uVar24),
                             CONCAT212(SUB162(auVar15 >> 0x30, 0), SUB1612(auVar16, 0))) >> 0x60, 0);
    auVar17 = CONCAT610(SUB166(CONCAT412(iVar8, CONCAT210(CONCAT11(uVar23, uVar22), SUB1610(auVar16, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar17 >> 0x20, 0), SUB168(auVar16, 0)));
    _local_f8 = CONCAT412((float) iVar8 * fVar29,
                          CONCAT48((float) (SUB164(auVar16, 0) & 0xffff |
                                            (uint) CONCAT11(uVar19, bVar18) << 0x10) * fVar28,
                                   CONCAT44((float) SUB164(
                                                    CONCAT106(CONCAT82(SUB168(auVar17 >> 0x40, 0), CONCAT11(uVar21, uVar20)),
                                                              (SUB166(auVar16, 0) >> 0x10) <<
                                                                                           0x20) >> 0x20, 0) * fVar27,
                                            (float) SUB164(auVar17 >> 0x40, 0) * fVar26)));
    uVar6 = FUN_140141f10(DAT_140c63678, local_f8);
    puVar4 = param_1 + 0x116;
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    uVar6 = FUN_140142170(DAT_140c63678, L"black");
    puVar4 = (undefined8 * )((longlong) param_1 + 0x89c);
    lVar10 = DAT_140c63678;
    if ((longlong **) puVar4 != &param_6) {
        FUN_1401429a0(DAT_140c63678, *(uint *) puVar4);
        lVar10 = DAT_140c63678;
        *(uint *) puVar4 = uVar6;
        if ((ulonglong) uVar6 < *(ulonglong * )(lVar10 + 0x30)) {
            iVar8 = *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28));
            if (iVar8 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) uVar6 * 0x20 + 0x10 + *(longlong * )(lVar10 + 0x28)) = iVar8 + 1;
            }
        }
    }
    FUN_1401429a0(lVar10, (ulonglong) uVar6);
    return param_1;
}


undefined8 FUN_14015e3b0(undefined8 param_1, ulonglong param_2) {
    FUN_14015ea50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *
FUN_14015e3f0(undefined8 *param_1, undefined8 param_2, longlong param_3, int *param_4,
              undefined8 param_5) {
    longlong *plVar1;
    undefined2 *puVar2;
    undefined8 uVar3;
    uint uVar4;
    undefined4 uVar5;
    undefined *puVar6;
    longlong lVar7;
    float *pfVar8;
    undefined2 *puVar9;
    int iVar10;
    undefined2 *puVar11;
    undefined2 *puVar12;
    undefined2 *puVar13;
    undefined extraout_XMM0[16];
    undefined auVar14[16];
    int local_e8;
    int iStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    int local_d8;
    int local_d4;
    int local_d0;
    int local_cc;
    undefined8 local_c8;
    undefined local_c0;
    undefined local_b8[16];
    undefined local_a8[16];
    undefined local_98[16];
    undefined8 local_88;
    undefined local_78[8];
    longlong local_70;
    longlong local_50;
    undefined4 local_24;

    puVar12 = (undefined2 *) 0x0;
    FUN_1400c5920();
    *(undefined4 * )(param_1 + 0x84) = 0;
    *(undefined4 * )((longlong) param_1 + 0x43c) = 2;
    *(undefined4 * )(param_1 + 0x88) = 2;
    *(undefined4 * )((longlong) param_1 + 0x444) = 2;
    *(undefined4 * )(param_1 + 0x89) = 2;
    *(undefined * )((longlong) param_1 + 0x44c) = 1;
    param_1[0x8b] = param_3;
    *param_1 = &PTR_LAB_140b5caf0;
    param_1[0x8a] = param_5;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    puVar6 = (undefined *) FUN_14018b280(0x28);
    param_1[0x94] = 0;
    param_1[0x93] = puVar6;
    *puVar6 = 0;
    *(undefined8 * )(param_1[0x93] + 8) = 0;
    *(undefined8 * )(param_1[0x93] + 0x10) = param_1[0x93];
    *(undefined8 * )(param_1[0x93] + 0x18) = param_1[0x93];
    param_1[0x96] = 0;
    FUN_1400c35f0(param_1 + 0x97);
    FUN_1400c35f0(param_1 + 0xcb);
    FUN_1401095e0(param_1 + 0xff);
    FUN_1401095e0(param_1 + 0x105);
    FUN_1401095e0(param_1 + 0x10b);
    param_1[0x111] = 0;
    param_1[0x112] = 0;
    param_1[0x113] = 0;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    *(undefined4 * )(param_1 + 0x116) = 0;
    param_1[0x36] = param_1[0x36] | 0x40;
    FUN_1400d2c30(param_1, L"PopupMenuGridWindow");
    FUN_14015cbe0(local_78);
    FUN_14015f870();
    param_1[0x52] = param_1[0x52] | 0x30008;
    param_1[0x53] = param_1[0x53] | 0xe8;
    *(undefined4 * )(param_1 + 0x54) = 2;
    local_e8 = DAT_140c77760;
    iStack228 = DAT_140c77764;
    uStack224 = 100;
    uStack220 = 100;
    local_d0 = *param_4 + 100;
    local_d8 = *param_4 + DAT_140c77760;
    local_cc = param_4[1] + 100;
    local_d4 = param_4[1] + DAT_140c77764;
    FUN_1400cc7c0(param_1, &local_d8);
    param_1[0x81] = 0xffffffffffffffff;
    param_1[0x82] = 0xffffffffffffffff;
    param_1[0x83] = 0xffffffffffffffff;
    lVar7 = FUN_1400e58c0(param_1[4], *(undefined8 * )(param_3 + 0xa8));
    if (lVar7 != 0) {
        plVar1 = (longlong *) param_1[0x56];
        param_1[0x57] = lVar7;
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 0x28))(plVar1, *(undefined8 * )(lVar7 + 0x60));
        }
    }
    pfVar8 = (float *) (**(code * *)(**(longlong * *)(param_1[0x57] + 0x60) + 0x20))();
    auVar14 = ZEXT416((uint)(pfVar8[4] + *pfVar8)) & (undefined[16]) 0xffffffffffffffff;
    iVar10 = (int) SUB164(auVar14, 0);
    local_b8 = extraout_XMM0;
    if ((iVar10 != -0x80000000) &&
        (local_b8 = ZEXT416((uint)(float)
        iVar10), (float) iVar10 != SUB164(auVar14, 0))) {
        uVar4 = movmskps((int) pfVar8, ZEXT816(SUB168(auVar14, 0) | SUB168(auVar14, 0) << 0x20));
        auVar14 = ZEXT416((uint)(float)(iVar10 + (uVar4 & 1 ^ 1)));
    }
    local_b8 = local_b8 & (undefined[16]) 0x0;
    local_a8 = auVar14 & (undefined[16]) 0x0;
    *(int *) ((longlong) param_1 + 0x404) = (int) SUB164(auVar14, 0);
    *(int *) (param_1 + 0x80) = (int) SUB164(auVar14, 0);
    local_c8 = 0;
    local_c0 = 0;
    local_88 = 0;
    local_98 = local_b8;
    FUN_14010b330(&local_c8, param_1[4], *(undefined8 * )(param_3 + 0x68), 0);
    FUN_1400c3730(param_1 + 0xcb, &local_c8);
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0xff, param_1[4] + 0xf0, *(undefined8 * )(param_3 + 0x88), 0);
    }
    local_e8 = *(int *) (param_3 + 0xc0);
    iStack228 = *(undefined4 * )(param_3 + 0xc4);
    uStack224 = *(undefined4 * )(param_3 + 200);
    uStack220 = *(undefined4 * )(param_3 + 0xcc);
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x88c));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )((longlong) param_1 + 0x88c) = uVar5;
    local_e8 = *(int *) (param_3 + 0x110);
    iStack228 = *(undefined4 * )(param_3 + 0x114);
    uStack224 = *(undefined4 * )(param_3 + 0x118);
    uStack220 = *(undefined4 * )(param_3 + 0x11c);
    FUN_1401429a0(uVar3, *(undefined4 * )(param_1 + 0x114));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x114) = uVar5;
    local_e8 = *(int *) (param_3 + 0xd0);
    iStack228 = *(undefined4 * )(param_3 + 0xd4);
    uStack224 = *(undefined4 * )(param_3 + 0xd8);
    uStack220 = *(undefined4 * )(param_3 + 0xdc);
    FUN_1401429a0(uVar3, *(undefined4 * )((longlong) param_1 + 0x894));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )((longlong) param_1 + 0x894) = uVar5;
    local_e8 = *(int *) (param_3 + 0x120);
    iStack228 = *(undefined4 * )(param_3 + 0x124);
    uStack224 = *(undefined4 * )(param_3 + 0x128);
    uStack220 = *(undefined4 * )(param_3 + 300);
    FUN_1401429a0(uVar3, *(undefined4 * )((longlong) param_1 + 0x8a4));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )((longlong) param_1 + 0x8a4) = uVar5;
    local_e8 = *(int *) (param_3 + 0xe0);
    iStack228 = *(undefined4 * )(param_3 + 0xe4);
    uStack224 = *(undefined4 * )(param_3 + 0xe8);
    uStack220 = *(undefined4 * )(param_3 + 0xec);
    FUN_1401429a0(uVar3, *(undefined4 * )(param_1 + 0x112));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x112) = uVar5;
    local_e8 = *(int *) (param_3 + 0x130);
    iStack228 = *(undefined4 * )(param_3 + 0x134);
    uStack224 = *(undefined4 * )(param_3 + 0x138);
    uStack220 = *(undefined4 * )(param_3 + 0x13c);
    FUN_1401429a0(uVar3, *(undefined4 * )(param_1 + 0x115));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x115) = uVar5;
    local_e8 = *(int *) (param_3 + 0xf0);
    iStack228 = *(undefined4 * )(param_3 + 0xf4);
    uStack224 = *(undefined4 * )(param_3 + 0xf8);
    uStack220 = *(undefined4 * )(param_3 + 0xfc);
    FUN_1401429a0(uVar3, *(undefined4 * )(param_1 + 0x113));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x113) = uVar5;
    local_e8 = *(int *) (param_3 + 0x140);
    iStack228 = *(undefined4 * )(param_3 + 0x144);
    uStack224 = *(undefined4 * )(param_3 + 0x148);
    uStack220 = *(undefined4 * )(param_3 + 0x14c);
    FUN_1401429a0(uVar3, *(undefined4 * )((longlong) param_1 + 0x8ac));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    uVar3 = DAT_140c63678;
    *(undefined4 * )((longlong) param_1 + 0x8ac) = uVar5;
    local_e8 = *(int *) (param_3 + 0x100);
    iStack228 = *(undefined4 * )(param_3 + 0x104);
    uStack224 = *(undefined4 * )(param_3 + 0x108);
    uStack220 = *(undefined4 * )(param_3 + 0x10c);
    FUN_1401429a0(uVar3, *(undefined4 * )((longlong) param_1 + 0x89c));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    *(undefined4 * )((longlong) param_1 + 0x89c) = uVar5;
    local_e8 = *(int *) (param_3 + 0x150);
    iStack228 = *(undefined4 * )(param_3 + 0x154);
    uStack224 = *(undefined4 * )(param_3 + 0x158);
    uStack220 = *(undefined4 * )(param_3 + 0x15c);
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x116));
    uVar5 = FUN_140141f10(DAT_140c63678, &local_e8);
    *(undefined4 * )(param_1 + 0x116) = uVar5;
    puVar11 = puVar12;
    puVar13 = puVar12;
    if (0 < (int) (*(longlong * )(param_3 + 0x30) - *(longlong * )(param_3 + 0x28) >> 3)) {
        do {
            lVar7 = *(longlong * )((longlong) puVar11 + *(longlong * )(param_3 + 0x28));
            puVar9 = puVar12;
            if (*(longlong * )(lVar7 + 0x30) != 0) {
                puVar2 = *(undefined2 * *)(*(longlong * )(lVar7 + 0x30) + 0x20);
                puVar9 = &DAT_140b7b704;
                if (puVar2 != (undefined2 *) 0x0) {
                    puVar9 = puVar2;
                }
            }
            FUN_14015fd10(param_1, *(undefined8 * )(lVar7 + 0x18), puVar9, (longlong)(int)
            puVar13, 0xfffffffe);
            puVar9 = puVar12;
            if (0 < *(int *) (*(longlong * )((longlong) puVar11 + param_1[0x90]) + 0x18)) {
                puVar9 = (undefined2 * )
                         * *(undefined8 * *)(*(longlong * )((longlong) puVar11 + param_1[0x90]) + 0x10);
            }
            *(undefined * )(puVar9 + 4) = *(undefined * )(lVar7 + 10);
            uVar4 = (int) puVar13 + 1;
            puVar11 = puVar11 + 4;
            puVar13 = (undefined2 * )(ulonglong)
            uVar4;
        } while ((int) uVar4 < (int) (*(longlong * )(param_3 + 0x30) - *(longlong * )(param_3 + 0x28) >> 3));
    }
    if ((undefined8 *) param_1[0x8b] != (undefined8 *) 0x0) {
        (***(code * **)(undefined8 * )
        param_1[0x8b])();
    }
    FUN_1401429a0(DAT_140c63678, local_24);
    if (local_50 != 0) {
        FUN_14018b900(local_50, 0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70, 0);
    }
    return param_1;
}


void FUN_14015ea50(undefined8 *param_1) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;

    uVar7 = 0;
    *param_1 = &PTR_LAB_140b5caf0;
    uVar6 = uVar7;
    uVar9 = uVar7;
    if (0 < *(int *) (param_1 + 0x91)) {
        do {
            lVar1 = *(longlong * )(uVar9 + param_1[0x90]);
            if (lVar1 != 0) {
                FUN_14015d320(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            uVar4 = (int) uVar6 + 1;
            uVar6 = (ulonglong) uVar4;
            uVar9 = uVar9 + 8;
        } while ((int) uVar4 < *(int *) (param_1 + 0x91));
    }
    if (param_1[0x8f] != 0) {
        do {
            lVar1 = *(longlong * )(param_1[0x8e] + uVar7 * 8);
            if (lVar1 != 0) {
                if (*(longlong * *)(lVar1 + 0x10) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar1 + 0x10) + 8))();
                    *(undefined8 * )(lVar1 + 0x10) = 0;
                }
                FUN_1401429a0(DAT_140c63678, *(undefined4 * )(lVar1 + 0x4c));
                if (*(longlong * *)(lVar1 + 0x18) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar1 + 0x18) + 8))();
                    *(undefined8 * )(lVar1 + 0x18) = 0;
                }
                if (*(longlong * )(lVar1 + 0x30) != 0) {
                    FUN_14018b900();
                }
                FUN_14018b900();
            }
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < (ulonglong) param_1[0x8f]);
    }
    if ((longlong *) param_1[0x8b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8b] + 8))();
        param_1[0x8b] = 0;
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x116));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x8ac));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x115));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x8a4));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x114));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x89c));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x113));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x894));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x112));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x88c));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x111));
    if ((longlong *) param_1[0x10b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x10b] + 8))();
        param_1[0x10b] = 0;
    }
    if (param_1[0x10e] != 0) {
        FUN_14018b900(param_1[0x10e], 0);
    }
    if ((longlong *) param_1[0x105] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x105] + 8))();
        param_1[0x105] = 0;
    }
    if (param_1[0x108] != 0) {
        FUN_14018b900(param_1[0x108], 0);
    }
    if ((longlong *) param_1[0xff] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xff] + 8))();
        param_1[0xff] = 0;
    }
    if (param_1[0x102] != 0) {
        FUN_14018b900(param_1[0x102], 0);
    }
    if (param_1[0xf2] != 0) {
        FUN_14018b900(param_1[0xf2], 0);
    }
    iVar5 = 5;
    iVar3 = 5;
    puVar8 = param_1 + 0xef;
    do {
        if ((longlong *) puVar8[-6] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) puVar8[-6] + 8))();
            puVar8[-6] = 0;
        }
        if (puVar8[-3] != 0) {
            FUN_14018b900(puVar8[-3], 0);
        }
        iVar3 = iVar3 + -1;
        puVar8 = puVar8 + -6;
    } while (-1 < iVar3);
    if (param_1[0xbe] != 0) {
        FUN_14018b900(param_1[0xbe], 0);
    }
    puVar8 = param_1 + 0xbb;
    do {
        if ((longlong *) puVar8[-6] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) puVar8[-6] + 8))();
            puVar8[-6] = 0;
        }
        if (puVar8[-3] != 0) {
            FUN_14018b900(puVar8[-3], 0);
        }
        iVar5 = iVar5 + -1;
        puVar8 = puVar8 + -6;
    } while (-1 < iVar5);
    if (param_1[0x94] != 0) {
        lVar1 = *(longlong * )(param_1[0x93] + 8);
        while (lVar1 != 0) {
            FUN_1400083b0(param_1 + 0x92, *(undefined8 * )(lVar1 + 0x18));
            lVar2 = *(longlong * )(lVar1 + 0x10);
            FUN_14018b900(lVar1, 0);
            lVar1 = lVar2;
        }
        *(undefined8 * )(param_1[0x93] + 0x10) = param_1[0x93];
        *(undefined8 * )(param_1[0x93] + 8) = 0;
        *(undefined8 * )(param_1[0x93] + 0x18) = param_1[0x93];
        param_1[0x94] = 0;
    }
    FUN_14018b900(param_1[0x93], 0);
    lVar1 = param_1[0x90];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x8e];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x8c];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1400c6030(param_1);
    return;
}


longlong FUN_14015ee20(longlong param_1) {
    if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
        *(undefined8 * )(param_1 + 0x10) = 0;
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0x4c));
    if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        *(undefined8 * )(param_1 + 0x18) = 0;
    }
    if (*(longlong * )(param_1 + 0x30) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 0x30), 0);
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined8 FUN_14015ee90(longlong param_1, int param_2, int param_3) {
    if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
        if ((*(int *) (param_1 + 0x410) == param_2) && (*(int *) (param_1 + 0x414) == param_3)) {
            return 1;
        }
    } else if (*(int *) (param_1 + 0x410) == param_2) {
        return 1;
    }
    return 0;
}


ulonglong FUN_14015eed0(longlong param_1, int param_2, int param_3) {
    ulonglong in_RAX;
    longlong lVar1;

    if ((((param_3 < 0) || (*(int *) (param_1 + 0x478) <= param_3)) || (param_2 < 0)) ||
        ((*(int *) (param_1 + 0x488) <= param_2 ||
          (in_RAX = *(ulonglong * )(*(longlong * )(param_1 + 0x480) + (longlong) param_2 * 8),
                  *(int *) (in_RAX + 0x18) <= param_3)))) {
        lVar1 = 0;
    } else {
        in_RAX = *(ulonglong * )(in_RAX + 0x10);
        lVar1 = *(longlong * )(in_RAX + (longlong) param_3 * 8);
    }
    if ((*(char *) (lVar1 + 8) != '\0') &&
        (in_RAX = *(ulonglong * )(param_1 + 0x480),
                *(char *) (*(longlong * )(in_RAX + (longlong) param_2 * 8) + 8) != '\0')) {
        return CONCAT71((int7)(in_RAX >> 8), 1);
    }
    return in_RAX & 0xffffffffffffff00;
}


undefined FUN_14015ef30(longlong param_1, int param_2, int param_3) {
    if (((*(ulonglong * )(param_1 + 0x298) & 0xff) >> 4 & 1) != 0) {
        return *(undefined * )(*(longlong * )(*(longlong * )(param_1 + 0x480) + (longlong) param_2 * 8) + 9);
    }
    if (((byte) * (ulonglong * )(param_1 + 0x298) >> 3 & 1) == 0) {
        if ((*(int *) (param_1 + 0x408) == param_2) && (*(int *) (param_1 + 0x40c) == param_3)) {
            return 1;
        }
    } else if (*(int *) (param_1 + 0x408) == param_2) {
        return 1;
    }
    return 0;
}


void FUN_14015ef90(longlong param_1, undefined8 param_2) {
    undefined8 local_58;
    undefined local_50;
    undefined local_48[16];
    undefined local_38[16];
    undefined local_28[16];
    undefined8 local_18;

    local_58 = 0;
    local_48 = ZEXT816(0);
    local_28 = ZEXT816(0);
    local_38 = ZEXT816(0);
    local_50 = 0;
    local_18 = 0;
    FUN_14010b330(&local_58, *(undefined8 * )(param_1 + 0x20), param_2, 0);
    FUN_1400c3730(param_1 + 0x658, &local_58);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14015eff0(longlong param_1, int param_2, longlong param_3) {
    longlong lVar1;
    longlong *plVar2;

    if ((-1 < param_2) && (param_2 < *(int *) (param_1 + 0x468))) {
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x470) + (longlong) param_2 * 8);
        if (param_3 != 0) {
            plVar2 = *(longlong * *)(lVar1 + 0x10);
            if (plVar2 != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x00014015f08c. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(*plVar2 + 0x38))(plVar2, param_3, 0xffffffffffffffff);
                return;
            }
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, _DAT_00000060, param_3, 0xffffffffffffffff, lVar1 + 0x10);
            return;
        }
        if (*(longlong * *)(lVar1 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(lVar1 + 0x10) + 8))();
            *(undefined8 * )(lVar1 + 0x10) = 0;
            return;
        }
    }
    return;
}


void FUN_14015f0a0(longlong param_1, int param_2, int param_3, short *param_4, short *param_5) {
    short sVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;

    if ((((-1 < param_2) && (param_2 < *(int *) (param_1 + 0x488))) && (-1 < param_3)) &&
        (param_3 < *(int *) (param_1 + 0x478))) {
        lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x480) + (longlong) param_2 * 8);
        lVar4 = 0;
        lVar5 = lVar4;
        if (param_3 < *(int *) (lVar2 + 0x18)) {
            lVar5 = *(longlong * )(*(longlong * )(lVar2 + 0x10) + (longlong) param_3 * 8);
        }
        psVar3 = &DAT_140b7b704;
        if (param_4 != (short *) 0x0) {
            psVar3 = param_4;
        }
        sVar1 = *psVar3;
        lVar2 = lVar4;
        while (sVar1 != 0) {
            lVar2 = lVar2 + 1;
            sVar1 = psVar3[lVar2];
        }
        FUN_14001c480(lVar5 + 0x30, psVar3, psVar3 + lVar2);
        psVar3 = &DAT_140b7b704;
        if (param_5 != (short *) 0x0) {
            psVar3 = param_5;
        }
        sVar1 = *psVar3;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar3[lVar4];
        }
        FUN_14001c480(lVar5 + 0x50, psVar3, psVar3 + lVar4);
    }
    return;
}


void FUN_14015f180(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4) {
    byte *pbVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    int iVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    uint uVar11;
    uint uVar13;
    int iVar14;
    uint uVar15;
    uint uVar16;
    ulonglong uVar17;
    byte bVar18;
    uint uVar19;
    undefined4 in_XMM6_Da;
    float fVar21;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    ulonglong uVar12;
    ulonglong uVar20;

    uVar12 = 0;
    uVar17 = *(ulonglong * )(param_1 + 0x478);
    uVar15 = 0;
    uVar19 = uVar15;
    if (uVar17 != 0) {
        param_4 = *(ulonglong * )(param_1 + 0x470);
        uVar10 = uVar12;
        uVar20 = uVar12;
        do {
            pcVar4 = *(char **) (param_4 + uVar10 * 8);
            uVar19 = uVar15;
            if (*pcVar4 != '\0') {
                uVar19 = *(uint * )(pcVar4 + 4);
            }
            uVar10 = (ulonglong)((int) uVar10 + 1);
            uVar19 = (int) uVar20 + uVar19;
            uVar20 = (ulonglong) uVar19;
        } while (uVar10 < uVar17);
    }
    bVar18 = (byte) * (undefined8 * )(param_1 + 0x298);
    uVar10 = uVar12;
    if ((bVar18 >> 1 & 1) != 0) {
        uVar10 = (ulonglong) * (uint * )(param_1 + 0x400);
    }
    uVar16 = (uint) uVar10;
    bVar18 = bVar18 >> 2 & 1;
    if (bVar18 == 0) {
        uVar16 = uVar16 + *(int *) (param_1 + 0x488) * *(int *) (param_1 + 0x404);
    } else {
        uVar13 = *(uint * )(param_1 + 0x488);
        param_4 = (ulonglong) uVar13;
        uVar17 = uVar12;
        if (0 < (int) uVar13) {
            do {
                if ((((longlong) uVar17 < 0) || ((int) uVar13 <= (int) uVar12)) || (bVar18 == 0)) {
                    iVar5 = *(int *) (param_1 + 0x404);
                } else {
                    iVar5 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + uVar17 * 8) + 0xc);
                }
                uVar11 = (int) uVar12 + 1;
                uVar12 = (ulonglong) uVar11;
                uVar16 = (int) uVar10 + iVar5;
                uVar10 = (ulonglong) uVar16;
                uVar17 = uVar17 + 1;
            } while ((int) uVar11 < (int) uVar13);
        }
    }
    iVar5 = *(int *) (param_1 + 0x2cc);
    iVar14 = *(int *) (param_1 + 0x2d4);
    iVar2 = *(int *) (param_1 + 0x2d0);
    iVar3 = *(int *) (param_1 + 0x2d8);
    uVar19 = (iVar5 - iVar14) + uVar19;
    uVar13 = uVar15;
    if (0 < (int) uVar19) {
        uVar13 = uVar19;
    }
    if ((int) uVar13 < 0) {
        uVar13 = uVar15;
    }
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar7 = FUN_14018b280(0x578, 0, uVar17, param_4,
                                  CONCAT412(in_XMM6_Dd,
                                            CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
            if (lVar7 == 0) {
                lVar7 = 0;
            } else {
                FUN_1400c35f0(lVar7);
                FUN_1400c35f0(lVar7 + 0x1a0);
                FUN_1400c35f0(lVar7 + 0x340);
                FUN_1401095e0(lVar7 + 0x4e0);
                FUN_1400c41e0(lVar7);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar7;
            FUN_1400c4330(lVar7, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        lVar7 = *(longlong * )(param_1 + 0x1d0);
        *(uint * )(lVar7 + 0x510) = uVar13;
        if ((int) *(uint * )(lVar7 + 0x514) < (int) uVar13) {
            uVar13 = *(uint * )(lVar7 + 0x514);
        }
        uVar19 = 0;
        if (0 < (int) uVar13) {
            uVar19 = uVar13;
        }
        *(byte * )(lVar7 + 0x570) = *(byte * )(lVar7 + 0x570) | 0x10;
        *(uint * )(lVar7 + 0x514) = uVar19;
    }
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar7 = FUN_14018b280(0x578, 0);
            if (lVar7 == 0) {
                lVar7 = 0;
            } else {
                FUN_1400c35f0(lVar7);
                FUN_1400c35f0(lVar7 + 0x1a0);
                FUN_1400c35f0(lVar7 + 0x340);
                FUN_1401095e0(lVar7 + 0x4e0);
                FUN_1400c41e0(lVar7);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar7;
            FUN_1400c4330(lVar7, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        lVar7 = *(longlong * )(param_1 + 0x1d0);
        pbVar1 = (byte * )(lVar7 + 0x570);
        *pbVar1 = *pbVar1 | 0x10;
        *(int *) (lVar7 + 0x518) = iVar14 - iVar5;
    }
    iVar5 = *(int *) (param_1 + 0x404);
    fVar21 = 1.0;
    iVar14 = iVar5 << 3;
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar7 = FUN_14018b280(0x578, 0);
            if (lVar7 == 0) {
                lVar7 = 0;
            } else {
                FUN_1400c35f0(lVar7);
                FUN_1400c35f0(lVar7 + 0x1a0);
                FUN_1400c35f0(lVar7 + 0x340);
                FUN_1401095e0(lVar7 + 0x4e0);
                FUN_1400c41e0(lVar7);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar7;
            FUN_1400c4330(lVar7, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        lVar7 = *(longlong * )(param_1 + 0x1d0);
        if (iVar5 << 3 < 1) {
            iVar14 = 1;
        }
        *(float *) (lVar7 + 0x330) = fVar21 / (float) iVar14;
        *(float *) (lVar7 + 400) = fVar21 / (float) iVar14;
    }
    iVar5 = *(int *) (param_1 + 0x404);
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar7 = FUN_14018b280(0x578, 0);
            if (lVar7 == 0) {
                lVar7 = 0;
            } else {
                FUN_1400c35f0(lVar7);
                FUN_1400c35f0(lVar7 + 0x1a0);
                FUN_1400c35f0(lVar7 + 0x340);
                FUN_1401095e0(lVar7 + 0x4e0);
                FUN_1400c41e0(lVar7);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar7;
            FUN_1400c4330(lVar7, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        iVar14 = 1;
        if (1 < iVar5) {
            iVar14 = iVar5;
        }
        *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x51c) = iVar14;
    }
    iVar14 = 0;
    lVar7 = 0;
    iVar6 = (iVar2 - iVar3) + uVar16;
    iVar5 = iVar14;
    if (0 < iVar6) {
        iVar5 = iVar6;
    }
    if (iVar5 < 0) {
        iVar5 = iVar14;
    }
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar8 = FUN_14018b280(0x578, 0);
            lVar9 = lVar7;
            if (lVar8 != 0) {
                FUN_1400c35f0(lVar8);
                FUN_1400c35f0(lVar8 + 0x1a0);
                FUN_1400c35f0(lVar8 + 0x340);
                FUN_1401095e0(lVar8 + 0x4e0);
                FUN_1400c41e0(lVar8);
                lVar9 = lVar8;
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d8);
        *(int *) (lVar9 + 0x510) = iVar5;
        if (*(int *) (lVar9 + 0x514) < iVar5) {
            iVar5 = *(int *) (lVar9 + 0x514);
        }
        if (0 < iVar5) {
            iVar14 = iVar5;
        }
        *(byte * )(lVar9 + 0x570) = *(byte * )(lVar9 + 0x570) | 0x10;
        *(int *) (lVar9 + 0x514) = iVar14;
    }
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar8 = FUN_14018b280(0x578, 0);
            lVar9 = lVar7;
            if (lVar8 != 0) {
                FUN_1400c35f0(lVar8);
                FUN_1400c35f0(lVar8 + 0x1a0);
                FUN_1400c35f0(lVar8 + 0x340);
                FUN_1401095e0(lVar8 + 0x4e0);
                FUN_1400c41e0(lVar8);
                lVar9 = lVar8;
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d8);
        pbVar1 = (byte * )(lVar9 + 0x570);
        *pbVar1 = *pbVar1 | 0x10;
        *(int *) (lVar9 + 0x518) = iVar3 - iVar2;
    }
    iVar5 = *(int *) (param_1 + 0x404);
    iVar14 = iVar5 << 3;
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar8 = FUN_14018b280(0x578, 0);
            lVar9 = lVar7;
            if (lVar8 != 0) {
                FUN_1400c35f0(lVar8);
                FUN_1400c35f0(lVar8 + 0x1a0);
                FUN_1400c35f0(lVar8 + 0x340);
                FUN_1401095e0(lVar8 + 0x4e0);
                FUN_1400c41e0(lVar8);
                lVar9 = lVar8;
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d8);
        if (iVar5 << 3 < 1) {
            iVar14 = 1;
        }
        *(float *) (lVar9 + 0x330) = fVar21 / (float) iVar14;
        *(float *) (lVar9 + 400) = fVar21 / (float) iVar14;
    }
    iVar5 = *(int *) (param_1 + 0x404);
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                FUN_1401095e0(lVar9 + 0x4e0);
                FUN_1400c41e0(lVar9);
                lVar7 = lVar9;
            }
            *(longlong * )(param_1 + 0x1d8) = lVar7;
            FUN_1400c4330(lVar7, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        iVar14 = 1;
        if (1 < iVar5) {
            iVar14 = iVar5;
        }
        *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x51c) = iVar14;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14015f870(longlong param_1, longlong param_2) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    int iVar8;

    lVar5 = FUN_14018b280(0x50);
    if (lVar5 == 0) {
        uVar6 = 0;
    } else {
        uVar6 = FUN_14015d090(lVar5);
    }
    lVar2 = *(longlong * )(param_1 + 0x478);
    lVar5 = lVar2 + 1;
    lVar7 = FUN_14018db00(*(undefined8 * )(param_1 + 0x470), lVar5, 8);
    *(undefined8 * )(lVar7 + lVar2 * 8) = uVar6;
    if (*(longlong * )(param_1 + 0x470) != lVar7) {
        FUN_1407db590(lVar7, *(longlong * )(param_1 + 0x470), *(longlong * )(param_1 + 0x478) << 3);
        lVar2 = *(longlong * )(param_1 + 0x470);
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong * )(param_1 + 0x470) = lVar7;
    }
    *(longlong * )(param_1 + 0x478) = lVar5;
    lVar2 = *(longlong * )(param_2 + 8);
    iVar8 = (int) lVar5 + -1;
    lVar5 = (longlong) iVar8 * 8;
    lVar7 = *(longlong * )(lVar5 + *(longlong * )(param_1 + 0x470));
    if (lVar2 == 0) {
        if (*(longlong * *)(lVar7 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(lVar7 + 0x10) + 8))();
            *(undefined8 * )(lVar7 + 0x10) = 0;
        }
    } else {
        plVar3 = *(longlong * *)(lVar7 + 0x10);
        if (plVar3 == (longlong *) 0x0) {
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, _DAT_00000060, lVar2, 0xffffffffffffffff, lVar7 + 0x10);
        } else {
            (**(code * *)(*plVar3 + 0x38))(plVar3, lVar2, 0xffffffffffffffff);
        }
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(*(longlong * )(*(longlong * )(param_1 + 0x470) + lVar5) + 0x18,
                      *(longlong * )(param_1 + 0x20) + 0xf0, *(undefined8 * )(param_2 + 0x28), 0);
    }
    *(undefined * )(*(longlong * )(*(longlong * )(param_1 + 0x470) + lVar5) + 1) =
            *(undefined * )(param_2 + 0x50);
    iVar1 = *(int *) (param_2 + 0x44);
    lVar2 = *(longlong * )(lVar5 + *(longlong * )(param_1 + 0x470));
    *(int *) (lVar2 + 8) = iVar1;
    iVar4 = *(int *) (lVar2 + 4);
    if (*(int *) (lVar2 + 4) < iVar1) {
        iVar4 = iVar1;
    }
    *(int *) (lVar2 + 4) = iVar4;
    iVar1 = *(int *) (param_2 + 0x48);
    lVar2 = *(longlong * )(lVar5 + *(longlong * )(param_1 + 0x470));
    *(int *) (lVar2 + 0xc) = iVar1;
    iVar4 = *(int *) (lVar2 + 4);
    if (iVar1 < *(int *) (lVar2 + 4)) {
        iVar4 = iVar1;
    }
    *(int *) (lVar2 + 4) = iVar4;
    *(undefined * )(*(longlong * )(*(longlong * )(param_1 + 0x470) + lVar5) + 2) =
            *(undefined * )(param_2 + 0x51);
    lVar2 = *(longlong * )(param_1 + 0x468);
    lVar5 = lVar2 + 1;
    lVar7 = FUN_14018db00(*(undefined8 * )(param_1 + 0x460), lVar5, 4);
    *(int *) (lVar7 + lVar2 * 4) = iVar8;
    if (*(longlong * )(param_1 + 0x460) != lVar7) {
        FUN_1407db590(lVar7, *(longlong * )(param_1 + 0x460), *(longlong * )(param_1 + 0x468) << 2);
        lVar2 = *(longlong * )(param_1 + 0x460);
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong * )(param_1 + 0x460) = lVar7;
    }
    *(longlong * )(param_1 + 0x468) = lVar5;
    FUN_14015f180(param_1);
    return iVar8;
}


int *FUN_14015fad0(longlong param_1, int *param_2, int *param_3) {
    char *pcVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar8;
    int iVar9;
    ulonglong uVar7;

    iVar9 = *(int *) (param_1 + 0x2d0);
    iVar4 = *(int *) (param_1 + 0x2d4);
    iVar2 = *(int *) (param_1 + 0x2d8);
    *param_2 = *(int *) (param_1 + 0x2cc);
    param_2[1] = iVar9;
    param_2[2] = iVar4;
    param_2[3] = iVar2;
    if ((*(byte * )(param_1 + 0x298) >> 1 & 1) != 0) {
        param_2[1] = param_2[1] + *(int *) (param_1 + 0x400);
    }
    uVar5 = 0;
    iVar4 = 0;
    iVar9 = iVar4;
    if (*(longlong * )(param_1 + 0x1d8) != 0) {
        iVar9 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
    }
    param_2[1] = param_2[1] - iVar9;
    iVar9 = param_2[1];
    if ((*(byte * )(param_1 + 0x298) >> 2 & 1) == 0) {
        iVar9 = param_3[1] * *(int *) (param_1 + 0x404) + iVar9;
        param_2[1] = iVar9;
        iVar9 = iVar9 + *(int *) (param_1 + 0x404);
    } else {
        uVar7 = uVar5;
        uVar8 = uVar5;
        if (0 < param_3[1]) {
            do {
                if ((((longlong) uVar8 < 0) || (*(int *) (param_1 + 0x488) <= (int) uVar7)) ||
                    ((*(byte * )(param_1 + 0x298) >> 2 & 1) == 0)) {
                    iVar2 = *(int *) (param_1 + 0x404);
                } else {
                    iVar2 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + uVar8 * 8) + 0xc);
                }
                iVar9 = iVar9 + iVar2;
                uVar6 = (int) uVar7 + 1;
                uVar7 = (ulonglong) uVar6;
                uVar8 = uVar8 + 1;
                param_2[1] = iVar9;
            } while ((int) uVar6 < param_3[1]);
        }
        iVar9 = param_3[1];
        if (((iVar9 < 0) || (*(int *) (param_1 + 0x488) <= iVar9)) ||
            ((*(byte * )(param_1 + 0x298) >> 2 & 1) == 0)) {
            iVar9 = param_2[1] + *(int *) (param_1 + 0x404);
        } else {
            iVar9 = param_2[1] +
                    *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + (longlong) iVar9 * 8) + 0xc);
        }
    }
    param_2[3] = iVar9;
    iVar9 = iVar4;
    if (*(longlong * )(param_1 + 0x1d0) != 0) {
        iVar9 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
    }
    *param_2 = *param_2 - iVar9;
    lVar3 = *(longlong * )(param_1 + 0x460);
    uVar7 = uVar5;
    uVar8 = uVar5;
    if (*(int *) (lVar3 + (longlong) * param_3 * 4) != 0) {
        do {
            iVar9 = *(int *) (lVar3 + uVar7);
            iVar2 = iVar4;
            if ((-1 < iVar9) && (iVar9 < *(int *) (param_1 + 0x478))) {
                if ((iVar9 == 0) &&
                    (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                    iVar2 = *(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc);
                } else {
                    pcVar1 = *(char **) (*(longlong * )(param_1 + 0x470) + (longlong) iVar9 * 8);
                    if (*pcVar1 != '\0') {
                        iVar2 = *(int *) (pcVar1 + 4);
                    }
                }
            }
            *param_2 = *param_2 + iVar2;
            lVar3 = *(longlong * )(param_1 + 0x460);
            uVar6 = (int) uVar8 + 1;
            uVar7 = uVar7 + 4;
            uVar8 = (ulonglong) uVar6;
        } while (uVar6 != *(uint * )(lVar3 + (longlong) * param_3 * 4));
    }
    iVar9 = *param_3;
    if ((-1 < iVar9) && (iVar9 < *(int *) (param_1 + 0x478))) {
        if ((iVar9 == 0) &&
            (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
            uVar5 = (ulonglong)(uint)(*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc));
        } else {
            pcVar1 = *(char **) (*(longlong * )(param_1 + 0x470) + (longlong) iVar9 * 8);
            uVar5 = 0;
            if (*pcVar1 != '\0') {
                uVar5 = (ulonglong) * (uint * )(pcVar1 + 4);
            }
        }
    }
    param_2[2] = *param_2 + (int) uVar5;
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14015fd10(longlong param_1, undefined8 param_2, short *param_3, undefined8 param_4,
                  undefined4 param_5) {
    short sVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong *plVar6;
    undefined4 uVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined2 *puVar12;
    longlong *plVar13;
    byte bVar14;
    int iVar15;
    longlong lVar16;
    longlong *plVar17;
    undefined auVar18[16];
    int local_res8;
    int local_resc;
    undefined8 in_stack_ffffffffffffff38;
    float *pfVar19;
    undefined8 uVar20;
    undefined8 in_stack_ffffffffffffff48;
    int *piVar21;
    undefined4 uVar22;
    int local_a8;
    int iStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    int local_98;
    int local_94;
    int local_90;
    int local_8c;
    float local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    float local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    longlong *local_68;
    undefined4 local_60;
    undefined4 local_5c;
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    uVar7 = (undefined4)((ulonglong) in_stack_ffffffffffffff48 >> 0x20);
    uVar8 = (uint)((ulonglong) in_stack_ffffffffffffff38 >> 0x20);
    lVar9 = FUN_14018b280(0x20);
    lVar16 = 0;
    lVar10 = lVar16;
    if (lVar9 != 0) {
        lVar10 = FUN_14015d1c0(lVar9, param_1, *(undefined4 * )(param_1 + 0x404), param_1 + 0x8a0,
                               *(ulonglong * )(param_1 + 0x478) & 0xffffffff | (ulonglong) uVar8 << 0x20);
    }
    FUN_14015d4f0(lVar10, 0, param_2, param_1 + 0x8a0, param_3, param_4, CONCAT44(uVar7, param_5));
    uVar7 = (undefined4)((ulonglong) param_4 >> 0x20);
    lVar3 = *(longlong * )(param_1 + 0x488);
    lVar9 = lVar3 + 1;
    lVar11 = FUN_14018db00(*(undefined8 * )(param_1 + 0x480), lVar9, 8);
    *(longlong * )(lVar11 + lVar3 * 8) = lVar10;
    if (*(longlong * )(param_1 + 0x480) != lVar11) {
        FUN_1407db590(lVar11, *(longlong * )(param_1 + 0x480), *(longlong * )(param_1 + 0x488) << 3);
        lVar10 = *(longlong * )(param_1 + 0x480);
        if (lVar10 != 0) {
            (**(code * *)(*(longlong * )(lVar10 + -0x10) + 8))(lVar10 + -0x10);
        }
        *(longlong * )(param_1 + 0x480) = lVar11;
    }
    *(longlong * )(param_1 + 0x488) = lVar9;
    bVar14 = (byte) * (undefined8 * )(param_1 + 0x298);
    if (((bVar14 >> 6 & 1) != 0) || ((char) bVar14 < '\0')) {
        FUN_1400cb3d0(param_1, &local_98);
        FUN_1400ca590(param_1, &local_a8);
        iVar5 = local_a8;
        local_resc = iStack164;
        bVar14 = (byte) * (undefined8 * )(param_1 + 0x298);
        local_res8 = local_a8;
        if ((bVar14 >> 6 & 1) == 0) {
            local_res8 = local_90 - local_98;
        }
        if (-1 < (char) bVar14) {
            local_resc = local_8c - local_94;
        }
        uVar22 = 1;
        piVar21 = &local_a8;
        local_88 = _DAT_140c784e0;
        uStack132 = _DAT_140c784e4;
        uStack128 = uRam0000000140c784e8;
        uStack124 = uRam0000000140c784ec;
        local_78 = _DAT_140c784f0;
        uStack116 = _DAT_140c784f4;
        uStack112 = uRam0000000140c784f8;
        uStack108 = uRam0000000140c784fc;
        pfVar19 = &local_88;
        uVar20 = CONCAT44(uVar7, 0x400);
        local_a8 = 0x3f800000;
        iStack164 = 0x3f800000;
        uStack160 = 0x3f800000;
        uStack156 = 0x3f800000;
        uVar7 = (**(code * *)(*DAT_140c65680 + 0x108))();
        auVar18 = ZEXT416((uint)(local_78 - local_88)) & (undefined[16]) 0xffffffffffffffff;
        iVar15 = (int) SUB164(auVar18, 0);
        if ((iVar15 != -0x80000000) && ((float) iVar15 != SUB164(auVar18, 0))) {
            uVar8 = movmskps(uVar7, ZEXT816(SUB168(auVar18, 0) | SUB168(auVar18, 0) << 0x20));
            auVar18 = ZEXT416((uint)(float)(iVar15 + (uVar8 & 1 ^ 1)));
        }
        iVar15 = (int) SUB164(auVar18, 0) + 2;
        if (*(char *) (param_1 + 0x44c) == '\0') {
            puVar12 = (undefined2 *) FUN_14018b280(0x10);
            local_40 = puVar12 + 8;
            if (puVar12 != (undefined2 *) 0x0) {
                *puVar12 = 0;
            }
            local_68 = (longlong *) 0x0;
            local_60 = DAT_140c63664;
            local_5c = 0x3f800000;
            local_50 = puVar12;
            local_48 = puVar12;
            if ((((*(longlong * )(param_1 + 0x20) != 0) && (param_3 != (short *) 0x0)) && (*param_3 != 0))
                && (plVar13 = (longlong *) FUN_140108e80(), plVar13 != (longlong *) 0x0)) {
                sVar1 = *param_3;
                while (sVar1 != 0) {
                    lVar16 = lVar16 + 1;
                    sVar1 = param_3[lVar16];
                }
                FUN_14001c480();
                plVar6 = local_68;
                plVar17 = local_68;
                if ((plVar13 != local_68) &&
                    ((**(code * *) * plVar13)(), plVar17 = plVar13, plVar6 != (longlong *) 0x0)) {
                    (**(code * *)(*plVar6 + 8))();
                }
                puVar12 = local_50;
                if (plVar17 != (longlong *) 0x0) {
                    iVar2 = *(int *) (param_1 + 0x43c);
                    FUN_140101470();
                    iVar4 = local_a8;
                    if (*(int *) (param_1 + 0x404) < iStack164) {
                        iVar4 = (*(int *) (param_1 + 0x404) * local_a8) / iStack164;
                    }
                    iVar15 = iVar15 + iVar2 + iVar4;
                    (**(code * *)(*plVar17 + 8))();
                    puVar12 = local_50;
                }
            }
            if (puVar12 != (undefined2 *) 0x0) {
                FUN_14018b900();
            }
        } else {
            iVar15 = iVar15 + *(int *) (param_1 + 0x404) * 2;
        }
        iVar2 = *(int *) (param_1 + 0x488);
        if (iVar2 == 1) {
            bVar14 = (byte) * (undefined8 * )(param_1 + 0x298);
            if ((bVar14 >> 6 & 1) != 0) {
                local_res8 = local_res8 + iVar15;
            }
            if ((char) bVar14 < '\0') {
                local_resc = local_resc + *(int *) (param_1 + 0x404);
            }
        } else {
            bVar14 = (byte) * (undefined8 * )(param_1 + 0x298);
            if ((bVar14 >> 6 & 1) != 0) {
                local_res8 = iVar5 + iVar15;
                if (iVar5 + iVar15 < local_90 - local_98) {
                    local_res8 = local_90 - local_98;
                }
            }
            if ((char) bVar14 < '\0') {
                local_resc = local_resc + *(int *) (param_1 + 0x404) * iVar2;
            }
        }
        local_90 = local_res8 + local_98;
        local_8c = local_94 + local_resc;
        FUN_1400cc7c0(param_1, &local_98, iVar2, local_98, pfVar19, uVar20, piVar21, uVar22);
    }
    FUN_14015f180(param_1);
    return *(int *) (param_1 + 0x488) + -1;
}


void FUN_140160120(longlong param_1, int param_2) {
    longlong lVar1;
    int iVar2;
    int iVar3;

    if ((-1 < param_2) && (param_2 < *(int *) (param_1 + 0x488))) {
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x480) + (longlong) param_2 * 8);
        if (lVar1 != 0) {
            FUN_14015d320(lVar1);
            FUN_14018b900(lVar1, 0);
        }
        FUN_140007270();
        iVar3 = *(int *) (param_1 + 0x488) + -1;
        iVar2 = iVar3;
        if (*(int *) (param_1 + 0x408) < iVar3) {
            iVar2 = *(int *) (param_1 + 0x408);
        }
        *(int *) (param_1 + 0x408) = iVar2;
        if (*(int *) (param_1 + 0x410) < iVar3) {
            iVar3 = *(int *) (param_1 + 0x410);
        }
        *(int *) (param_1 + 0x410) = iVar3;
        FUN_14015f180(param_1);
    }
    return;
}


void FUN_1401601d0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    iVar3 = 0;
    if (0 < *(int *) (param_1 + 0x488)) {
        lVar2 = 0;
        do {
            lVar1 = *(longlong * )(lVar2 + *(longlong * )(param_1 + 0x480));
            if (lVar1 != 0) {
                FUN_14015d320(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            iVar3 = iVar3 + 1;
            lVar2 = lVar2 + 8;
        } while (iVar3 < *(int *) (param_1 + 0x488));
    }
    *(undefined8 * )(param_1 + 0x488) = 0;
    *(undefined8 * )(param_1 + 0x408) = 0xffffffffffffffff;
    *(undefined8 * )(param_1 + 0x410) = 0xffffffffffffffff;
    *(undefined8 * )(param_1 + 0x418) = 0xffffffffffffffff;
    FUN_14015f180(param_1);
    return;
}


void FUN_140160280(longlong param_1, int param_2) {
    char cVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    byte bVar9;

    if (-1 < param_2) {
        lVar8 = (longlong) param_2;
        if (param_2 < *(int *) (param_1 + 0x488)) {
            iVar4 = *(int *) (param_1 + 0x2d0);
            uVar3 = 0;
            iVar5 = 0;
            if (*(longlong * )(param_1 + 0x1d8) != 0) {
                iVar5 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
            }
            bVar9 = (byte) * (undefined8 * )(param_1 + 0x298);
            if ((bVar9 >> 1 & 1) != 0) {
                iVar4 = iVar4 + *(int *) (param_1 + 0x400);
            }
            bVar9 = bVar9 >> 2 & 1;
            if (bVar9 == 0) {
                iVar6 = iVar4 + *(int *) (param_1 + 0x404) * param_2;
                iVar2 = *(int *) (param_1 + 0x404) + iVar6;
            } else {
                uVar7 = uVar3;
                iVar6 = iVar4;
                if (0 < lVar8) {
                    do {
                        if ((((longlong) uVar3 < 0) || (*(int *) (param_1 + 0x488) <= (int) uVar7)) || (bVar9 == 0)
                                ) {
                            iVar2 = *(int *) (param_1 + 0x404);
                        } else {
                            iVar2 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + uVar3 * 8) + 0xc);
                        }
                        uVar3 = uVar3 + 1;
                        iVar6 = iVar6 + iVar2;
                        uVar7 = (ulonglong)((int) uVar7 + 1);
                    } while ((longlong) uVar3 < lVar8);
                }
                if (bVar9 == 0) {
                    iVar2 = *(int *) (param_1 + 0x404) + iVar6;
                } else {
                    iVar2 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + lVar8 * 8) + 0xc) + iVar6;
                }
            }
            if (iVar6 - iVar5 <= iVar4) {
                iVar5 = iVar6 - iVar4;
            }
            if (*(int *) (param_1 + 0x2d8) < iVar2 - iVar5) {
                iVar5 = iVar2 - *(int *) (param_1 + 0x2d8);
            }
            cVar1 = FUN_1400c6e00(param_1);
            if (cVar1 != '\0') {
                lVar8 = *(longlong * )(param_1 + 0x1d8);
                iVar4 = *(int *) (lVar8 + 0x510);
                if (iVar5 < *(int *) (lVar8 + 0x510)) {
                    iVar4 = iVar5;
                }
                iVar5 = 0;
                if (0 < iVar4) {
                    iVar5 = iVar4;
                }
                *(byte * )(lVar8 + 0x570) = *(byte * )(lVar8 + 0x570) | 0x10;
                *(int *) (lVar8 + 0x514) = iVar5;
                FUN_1400cac90(param_1);
            }
        }
    }
    return;
}


void FUN_1401603f0(longlong param_1, int param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    int iVar8;
    int iVar9;
    ulonglong uVar10;
    int iVar11;

    if (-1 < param_2) {
        iVar6 = *(int *) (param_1 + 0x478);
        if (param_2 <= iVar6) {
            iVar1 = *(int *) (param_1 + 0x2cc);
            iVar2 = *(int *) (param_1 + 0x2d4);
            uVar7 = 0;
            iVar8 = 0;
            iVar9 = iVar8;
            if (*(longlong * )(param_1 + 0x1d0) != 0) {
                iVar9 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
            }
            uVar10 = uVar7;
            iVar11 = iVar1;
            if (0 < param_2) {
                do {
                    iVar5 = iVar8;
                    if ((-1 < (longlong) uVar7) && ((int) uVar10 < iVar6)) {
                        if ((uVar7 == 0) &&
                            (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                            iVar5 = iVar2 - iVar1;
                        } else {
                            iVar5 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x470) + uVar7 * 8) + 4);
                        }
                    }
                    uVar7 = uVar7 + 1;
                    iVar11 = iVar11 + iVar5;
                    uVar10 = (ulonglong)((int) uVar10 + 1);
                } while ((longlong) uVar7 < (longlong) param_2);
            }
            if (param_2 < iVar6) {
                if ((param_2 == 0) &&
                    (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                    iVar6 = iVar2 - iVar1;
                } else {
                    iVar6 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x470) + (longlong) param_2 * 8) + 4
                    );
                }
            } else {
                iVar6 = 0;
            }
            if (iVar11 - iVar9 <= iVar1) {
                iVar9 = iVar11 - iVar1;
            }
            if (iVar2 < (iVar6 + iVar11) - iVar9) {
                iVar9 = (iVar6 + iVar11) - iVar2;
            }
            cVar4 = FUN_1400c6d90(param_1);
            if (cVar4 != '\0') {
                lVar3 = *(longlong * )(param_1 + 0x1d0);
                iVar6 = *(int *) (lVar3 + 0x510);
                if (iVar9 < *(int *) (lVar3 + 0x510)) {
                    iVar6 = iVar9;
                }
                if (0 < iVar6) {
                    iVar8 = iVar6;
                }
                *(byte * )(lVar3 + 0x570) = *(byte * )(lVar3 + 0x570) | 0x10;
                *(int *) (lVar3 + 0x514) = iVar8;
                FUN_1400cae90(param_1);
            }
        }
    }
    return;
}


int *FUN_140160560(int *param_1, int *param_2, longlong *param_3, uint *param_4, char param_5,
                   int param_6) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    int local_res8;
    int iStackX12;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    if ((((*param_3 != 0) && (FUN_140101470(), 0 < iStackX12)) && (0 < local_res8)) &&
        ((0 < param_2[2] - *param_2 && (0 < param_2[3] - param_2[1])))) {
        *param_1 = *param_1 + param_6;
        param_1[1] = param_1[1] + param_6;
        param_1[3] = param_1[3] - param_6;
        iVar3 = param_2[3] - param_2[1];
        if ((iVar3 < iStackX12) || (param_2[2] - *param_2 < local_res8)) {
            if (local_res8 / (param_2[2] - *param_2) < iStackX12 / iVar3) {
                iVar3 = (iVar3 * local_res8) / iStackX12;
                if (param_5 == '\0') {
                    *param_1 = param_1[2] - iVar3;
                } else {
                    param_1[2] = iVar3 + *param_1;
                }
            } else {
                iVar1 = ((param_2[2] - *param_2) * iStackX12) / local_res8;
                iVar3 = (iVar3 - iVar1) / 2 + param_1[1];
                param_1[1] = iVar3;
                param_1[3] = iVar3 + iVar1;
            }
        } else {
            iVar3 = (iVar3 - iStackX12) / 2 + param_1[1];
            param_1[1] = iVar3;
            param_1[3] = iVar3 + iStackX12;
            if (param_5 == '\0') {
                *param_1 = param_1[2] - local_res8;
            } else {
                param_1[2] = *param_1 + local_res8;
            }
        }
        if ((ulonglong) * param_4 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            lVar2 = (ulonglong) * param_4 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
        } else {
            lVar2 = *(longlong * )(DAT_140c63678 + 0x28);
        }
        FUN_140109a70(param_3, param_1, lVar2);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1401606f0(longlong param_1, undefined8 *param_2, longlong *param_3, undefined8 param_4,
              undefined8 param_5, uint *param_6, uint param_7, undefined8 param_8, undefined8 param_9,
              int param_10) {
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    float fVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    int local_res8;
    int local_resc;
    int local_88;
    int local_84;
    int local_80;
    int local_7c;
    undefined local_78[16];
    undefined local_68[16];
    undefined local_58[16];
    undefined local_48[16];
    undefined local_38[16];

    iVar4 = *(int *) (param_2 + 1);
    iVar5 = *(int *) param_2;
    iVar3 = *(int *) ((longlong) param_2 + 4);
    local_58 = ZEXT816(CONCAT44((float) *(int *) ((longlong) param_2 + 0xc), (float) (int) param_2[1]));
    local_68 = ZEXT816(CONCAT44((float) iVar3, (float) (int) *param_2));
    if (*param_3 != 0) {
        FUN_140101470();
        if ((((0 < local_resc) && (0 < local_res8)) && (0 < iVar4 - iVar5)) &&
            (0 < *(int *) ((longlong) param_2 + 0xc) - iVar3)) {
            FUN_140160560(&local_88, param_2, param_3, param_4, 1, *(undefined4 * )(param_1 + 0x448));
            local_48 = ZEXT816(CONCAT44((float) local_84, (float) local_88));
            local_38 = ZEXT816(CONCAT44((float) local_7c, (float) local_80));
            if (param_10 == 0) {
                lVar2 = *(longlong * )(param_1 + 0x2b8);
            } else {
                lVar2 = *(longlong * )(param_1 + 0x4b0);
            }
            uVar6 = 0x3f800000;
            uVar8 = 0x3f800000;
            uVar9 = 0x3f800000;
            uVar10 = 0x3f800000;
            local_78._0_12_ = CONCAT48(0x3f800000, 0x3f8000003f800000);
            local_78 = CONCAT412(0x3f800000, local_78._0_12_);
            (**(code * *)(*DAT_140c65680 + 0x108))
                    (DAT_140c65680, *(undefined8 * )(lVar2 + 0x60), param_8, 0xffffffffffffffff, local_48, 8,
                     local_78, 1);
            if (param_10 == 0) {
                lVar2 = *(longlong * )(param_1 + 0x2b8);
            } else {
                lVar2 = *(longlong * )(param_1 + 0x4b0);
            }
            local_78 = CONCAT412(uVar10, CONCAT48(uVar9, CONCAT44(uVar8, uVar6)));
            (**(code * *)(*DAT_140c65680 + 0x108))
                    (DAT_140c65680, *(undefined8 * )(lVar2 + 0x60), param_9, 0xffffffffffffffff, local_48, 10,
                     local_78, 1);
            local_68._0_4_ = (float) local_80;
            goto LAB_14016090a;
        }
    }
    if (*(char *) (param_1 + 0x44c) != '\0') {
        local_68._0_4_ = local_68._0_4_ + (float) *(int *) (param_1 + 0x404);
    }
    LAB_14016090a:
    local_68 = CONCAT124(local_68._4_12_, local_68._0_4_ + (float) *(int *) (param_1 + 0x448));
    if ((ulonglong) * param_6 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        lVar2 = (ulonglong) * param_6 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
    } else {
        lVar2 = *(longlong * )(DAT_140c63678 + 0x28);
    }
    (**(code * *)(*DAT_140c65680 + 0x118))
            (DAT_140c65680, param_5, 0, 0xffffffffffffffff, local_68, param_7, lVar2, 1, 0);
    fVar7 = local_58._0_4_ - local_68._0_4_;
    local_78._0_12_ = CONCAT48(0x3f800000, 0x3f8000003f800000);
    local_78 = CONCAT412(0x3f800000, local_78._0_12_);
    (**(code * *)(*DAT_140c65680 + 0x118))
            (DAT_140c65680, param_5, 0, 0xffffffffffffffff, local_68, param_7 | 0x400, local_78, 1, 0);
    if ((fVar7 < local_58._0_4_ - local_68._0_4_) ||
        (uVar1 = 0, (float) (*(int *) (param_2 + 1) - *(int *) param_2) < local_58._0_4_ - local_68._0_4_)
            ) {
        uVar1 = 1;
    }
    return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140160a20(longlong param_1) {
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined uVar4;
    undefined4 uVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    int iVar9;
    uint uVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    ulonglong local_res8;
    undefined4 local_res10[2];
    undefined8 local_res18;
    undefined8 local_res20;
    ulonglong in_stack_ffffffffffffff28;
    longlong local_a0;
    longlong local_98;
    ulonglong local_90;
    int local_88;
    int local_84;
    int local_80;
    int local_7c;
    int local_78;
    int local_74;
    int local_70;
    int local_6c;
    int local_68;
    int local_64;
    int local_60;
    int local_5c;
    int local_58;
    int local_54;
    int local_50;
    int local_4c;

    if ((*(byte * )(param_1 + 0x298) >> 1 & 1) != 0) {
        local_64 = *(int *) (param_1 + 0x2d0);
        local_5c = *(int *) (param_1 + 0x400) + local_64;
        local_res8._0_4_ = 0;
        local_60 = 0;
        if (*(longlong * )(param_1 + 0x1d0) != 0) {
            local_60 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
        }
        iVar9 = *(int *) (param_1 + 0x478);
        local_60 = *(int *) (param_1 + 0x2cc) - local_60;
        local_res8 = local_res8 & 0xffffffff00000000;
        if (0 < iVar9) {
            local_98 = 0;
            local_a0 = 1;
            local_68 = local_60;
            do {
                lVar6 = *(longlong * )(local_98 + *(longlong * )(param_1 + 0x470));
                if (*(char *) (lVar6 + 1) == '\0') {
                    iVar14 = 0;
                    iVar13 = iVar14;
                    if ((-1 < (int) (uint) local_res8) && ((int) (uint) local_res8 < iVar9)) {
                        if (((uint) local_res8 == 0) &&
                            (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                            iVar13 = *(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc);
                        } else {
                            iVar13 = *(int *) (lVar6 + 4);
                        }
                    }
                    local_60 = iVar13 + local_60;
                    uVar10 = (uint) local_res8;
                    for (lVar6 = local_a0; lVar6 < iVar9; lVar6 = lVar6 + 1) {
                        uVar10 = uVar10 + 1;
                        lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x470) + lVar6 * 8);
                        if (*(char *) (lVar2 + 1) == '\0') break;
                        iVar13 = iVar14;
                        if ((-1 < lVar6) && ((int) uVar10 < iVar9)) {
                            if ((lVar6 == 0) &&
                                (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                                iVar13 = *(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc);
                            } else {
                                iVar13 = *(int *) (lVar2 + 4);
                            }
                        }
                        local_60 = local_60 + iVar13;
                    }
                    if ((ulonglong) * (uint * )(param_1 + 0x888) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                        lVar6 = (ulonglong) * (uint * )(param_1 + 0x888) * 0x20 +
                                *(longlong * )(DAT_140c63678 + 0x28);
                    } else {
                        lVar6 = *(longlong * )(DAT_140c63678 + 0x28);
                    }
                    if (*(longlong * )(param_1 + 0x4b8) != 0) {
                        in_stack_ffffffffffffff28 =
                                in_stack_ffffffffffffff28 & 0xffffffff00000000 |
                                (ulonglong)
                                        (uint)(
                                        (DAT_140c63664 - *(float *) (param_1 + 0x4c0)) * *(float *) (param_1 + 0x4c4));
                        FUN_140103cf0(*(longlong * )(param_1 + 0x4b8), &local_68, lVar6, 0, in_stack_ffffffffffffff28
                        );
                    }
                    (**(code * *)(*DAT_140c65680 + 0x90))(DAT_140c65680, 1);
                    iVar14 = local_60 + -4;
                    iVar15 = local_5c + -2;
                    iVar9 = local_68 + 4;
                    iVar13 = local_64 + 2;
                    local_58 = iVar9;
                    local_54 = iVar13;
                    local_50 = iVar14;
                    local_4c = iVar15;
                    if (*(uint * )(param_1 + 0x424) == (uint) local_res8) {
                        if (*(char *) (param_1 + 0x428) == '\0') {
                            uVar10 = FUN_140141f10(DAT_140c63678, &DAT_140c67350);
                            iVar1 = *(int *) (param_1 + 0x448);
                            uVar8 = (ulonglong) uVar10;
                            lVar6 = local_res18;
                            lVar2 = *(longlong * )(param_1 + 0x858);
                            local_78 = iVar9;
                            local_74 = iVar13;
                            local_70 = iVar14;
                            local_6c = iVar15;
                            if (*(longlong * )(param_1 + 0x858) != 0) {
                                FUN_140101470();
                                lVar6 = local_res18;
                                lVar2 = local_res20;
                                if ((((0 < local_res20._4_4_) && (0 < (int) local_res20)) &&
                                     (iVar12 = iVar14 - iVar9, 0 < iVar12)) && (iVar11 = iVar15 - iVar13, 0 < iVar11)
                                        ) {
                                    local_78 = iVar9 + iVar1;
                                    local_6c = iVar15 - iVar1;
                                    local_74 = iVar13 + iVar1;
                                    if ((iVar11 < local_res20._4_4_) || (iVar12 < (int) local_res20)) {
                                        if ((int) local_res20 / iVar12 < local_res20._4_4_ / iVar11) {
                                            local_78 = iVar14 - ((int) local_res20 * iVar11) / local_res20._4_4_;
                                        } else {
                                            local_res20._0_4_ = (local_res20._4_4_ * iVar12) / (int) local_res20;
                                            local_74 = (iVar11 - (int) local_res20) / 2 + local_74;
                                            local_6c = (int) local_res20 + local_74;
                                        }
                                    } else {
                                        local_74 = (iVar11 - local_res20._4_4_) / 2 + local_74;
                                        local_6c = local_74 + local_res20._4_4_;
                                        local_78 = iVar14 - (int) local_res20;
                                    }
                                    if (uVar8 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                                        lVar6 = uVar8 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
                                    } else {
                                        lVar6 = *(longlong * )(DAT_140c63678 + 0x28);
                                    }
                                    FUN_140103cf0(*(undefined8 * )(param_1 + 0x858), &local_78, lVar6, 0,
                                                  in_stack_ffffffffffffff28 & 0xffffffff00000000 |
                                                  (ulonglong)
                                                          (uint)((DAT_140c63664 - *(float *) (param_1 + 0x860)) *
                                                                 *(float *) (param_1 + 0x864)));
                                    iVar9 = local_78;
                                    lVar6 = local_res18;
                                    lVar2 = local_res20;
                                }
                            }
                        } else {
                            uVar10 = FUN_140141f10(DAT_140c63678, &DAT_140c67350);
                            iVar1 = *(int *) (param_1 + 0x448);
                            uVar8 = (ulonglong) uVar10;
                            lVar6 = *(longlong * )(param_1 + 0x828);
                            lVar2 = local_res20;
                            local_88 = iVar9;
                            local_84 = iVar13;
                            local_80 = iVar14;
                            local_7c = iVar15;
                            if (*(longlong * )(param_1 + 0x828) != 0) {
                                FUN_140101470();
                                lVar6 = local_res18;
                                lVar2 = local_res20;
                                if (((0 < local_res18._4_4_) && (0 < (int) local_res18)) &&
                                    ((iVar12 = iVar14 - iVar9, 0 < iVar12 && (iVar11 = iVar15 - iVar13, 0 < iVar11)))
                                        ) {
                                    local_88 = iVar9 + iVar1;
                                    local_7c = iVar15 - iVar1;
                                    local_84 = iVar13 + iVar1;
                                    if ((iVar11 < local_res18._4_4_) || (iVar12 < (int) local_res18)) {
                                        if ((int) local_res18 / iVar12 < local_res18._4_4_ / iVar11) {
                                            local_88 = iVar14 - ((int) local_res18 * iVar11) / local_res18._4_4_;
                                        } else {
                                            local_res18._0_4_ = (local_res18._4_4_ * iVar12) / (int) local_res18;
                                            local_84 = (iVar11 - (int) local_res18) / 2 + local_84;
                                            local_7c = (int) local_res18 + local_84;
                                        }
                                    } else {
                                        local_84 = (iVar11 - local_res18._4_4_) / 2 + local_84;
                                        local_7c = local_84 + local_res18._4_4_;
                                        local_88 = iVar14 - (int) local_res18;
                                    }
                                    if (uVar8 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                                        lVar6 = uVar8 * 0x20 + *(longlong * )(DAT_140c63678 + 0x28);
                                    } else {
                                        lVar6 = *(longlong * )(DAT_140c63678 + 0x28);
                                    }
                                    FUN_140103cf0(*(undefined8 * )(param_1 + 0x828), &local_88, lVar6, 0,
                                                  in_stack_ffffffffffffff28 & 0xffffffff00000000 |
                                                  (ulonglong)
                                                          (uint)((DAT_140c63664 - *(float *) (param_1 + 0x830)) *
                                                                 *(float *) (param_1 + 0x834)));
                                    iVar9 = local_88;
                                    lVar6 = local_res18;
                                    lVar2 = local_res20;
                                }
                            }
                        }
                        local_res20 = lVar2;
                        local_res18 = lVar6;
                        FUN_1401429a0(DAT_140c63678, uVar8);
                        local_50 = iVar9;
                    }
                    (**(code * *)(*DAT_140c65680 + 0x90))(DAT_140c65680, 1);
                    uVar5 = FUN_140141f10(DAT_140c63678, &DAT_140c67350);
                    uVar10 = *(uint * )(*(longlong * )(local_98 + *(longlong * )(param_1 + 0x470)) + 0x4c);
                    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong) uVar10;
                    if ((ulonglong) uVar10 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                        iVar9 = *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
                        if (iVar9 - 1U < 0xfffffffe) {
                            *(int *) ((ulonglong) uVar10 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) =
                                    iVar9 + 1;
                        }
                    }
                    lVar6 = *(longlong * )(local_98 + *(longlong * )(param_1 + 0x470));
                    in_stack_ffffffffffffff28 = *(ulonglong * )(lVar6 + 0x10);
                    local_res10[0] = uVar5;
                    uVar4 = FUN_1401606f0(param_1, &local_58, lVar6 + 0x18, local_res10, in_stack_ffffffffffffff28,
                                          &local_res8, 4, 0, 0, 1);
                    FUN_1401429a0(DAT_140c63678, (ulonglong) uVar10);
                    FUN_1401429a0(DAT_140c63678, uVar5);
                    uVar8 = *(ulonglong * )(param_1 + 0x498);
                    uVar7 = uVar8;
                    uVar3 = *(ulonglong * )(uVar8 + 8);
                    while (uVar3 != 0) {
                        if (*(uint * )(uVar3 + 0x20) < (uint) local_res8) {
                            uVar3 = *(ulonglong * )(uVar3 + 0x18);
                        } else {
                            uVar7 = uVar3;
                            uVar3 = *(ulonglong * )(uVar3 + 0x10);
                        }
                    }
                    if ((uVar7 == uVar8) || ((uint) local_res8 < *(uint * )(uVar7 + 0x20))) {
                        local_res8 = uVar7;
                        FUN_140032b30(param_1 + 0x490);
                        uVar7 = local_90;
                    }
                    *(undefined * )(uVar7 + 0x24) = uVar4;
                    local_68 = local_60;
                }
                iVar9 = *(int *) (param_1 + 0x478);
                local_res8._0_4_ = (uint) local_res8 + 1;
                local_a0 = local_a0 + 1;
                local_98 = local_98 + 8;
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
                local_res8;
            } while ((int) (uint) local_res8 < iVar9);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401610d0(longlong param_1, uint param_2, uint param_3) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    char cVar5;
    undefined uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint *puVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    longlong lVar14;
    uint local_res10[2];
    undefined4 local_res18;
    uint local_res20;
    uint local_res24;
    ulonglong in_stack_ffffffffffffff38;
    longlong local_98[2];
    undefined local_88[8];
    undefined8 uStack128;
    undefined local_78[16];
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    int local_58;
    int local_54;
    int local_50;
    int local_4c;

    if ((int) param_3 < 0) {
        return;
    }
    lVar13 = (longlong)(int)
    param_3;
    lVar14 = (longlong)(int)
    param_2;
    if (*(int *) (param_1 + 0x478) <= (int) param_3) {
        return;
    }
    if ((int) param_2 < 0) {
        return;
    }
    if (*(int *) (param_1 + 0x488) <= (int) param_2) {
        return;
    }
    lVar8 = 0;
    lVar12 = *(longlong * )(*(longlong * )(param_1 + 0x480) + lVar14 * 8);
    lVar7 = lVar8;
    if ((int) param_3 < *(int *) (lVar12 + 0x18)) {
        lVar7 = *(longlong * )(*(longlong * )(lVar12 + 0x10) + lVar13 * 8);
    }
    if (lVar7 == 0) {
        return;
    }
    local_res20 = param_3;
    local_res24 = param_2;
    FUN_14015fad0(param_1, &local_58);
    lVar12 = DAT_140c63678;
    if ((((int) param_3 < *(int *) (param_1 + 0x478)) && ((int) param_2 < *(int *) (param_1 + 0x488))) &&
        (lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x480) + lVar14 * 8),
                (int) param_3 < *(int *) (lVar2 + 0x18))) {
        lVar8 = *(longlong * )(*(longlong * )(lVar2 + 0x10) + lVar13 * 8);
    }
    local_res10[0] = *(uint * )(lVar8 + 0xa0);
    uVar9 = (ulonglong) local_res10[0];
    local_res18 = *(undefined4 * )(*(longlong * )(*(longlong * )(param_1 + 0x470) + lVar13 * 8) + 0x48);
    if (uVar9 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        iVar1 = *(int *) ((ulonglong) local_res10[0] * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
        if (iVar1 - 1U < 0xfffffffe) {
            *(int *) ((ulonglong) local_res10[0] * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) =
                    iVar1 + 1;
        }
    }
    cVar5 = FUN_14015eed0();
    if (cVar5 == '\0') {
        puVar10 = (uint * )(param_1 + 0x8b0);
    } else {
        cVar5 = FUN_14015ef30();
        if (cVar5 == '\0') {
            if ((((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) || (*(uint * )(param_1 + 0x410) != param_2))
                && ((*(uint * )(param_1 + 0x410) != param_2 || (*(uint * )(param_1 + 0x414) != param_3))))
                goto LAB_1401612b7;
            puVar10 = (uint * )(param_1 + 0x8a8);
        } else if ((((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) ||
                    (*(uint * )(param_1 + 0x410) != param_2)) &&
                   ((*(uint * )(param_1 + 0x410) != param_2 || (*(uint * )(param_1 + 0x414) != param_3)))) {
            puVar10 = (uint * )(param_1 + 0x8a4);
        } else {
            puVar10 = (uint * )(param_1 + 0x8ac);
        }
    }
    if (local_res10 != puVar10) {
        FUN_1401429a0();
        lVar12 = DAT_140c63678;
        local_res10[0] = *puVar10;
        uVar9 = (ulonglong) local_res10[0];
        if (uVar9 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            iVar1 = *(int *) (uVar9 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (uVar9 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) = iVar1 + 1;
            }
        }
    }
    LAB_1401612b7:
    uVar6 = 1;
    if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
        cVar5 = FUN_14015eed0(param_1);
        if (cVar5 == '\0') {
            lVar13 = *(longlong * )(param_1 + 0x718);
        } else {
            cVar5 = FUN_14015ef30(param_1);
            if (cVar5 == '\0') {
                cVar5 = FUN_14015ee90(param_1);
                if (cVar5 == '\0') {
                    lVar13 = *(longlong * )(param_1 + 0x658);
                } else {
                    lVar13 = *(longlong * )(param_1 + 0x6b8);
                }
            } else {
                cVar5 = FUN_14015ee90(param_1);
                if (cVar5 == '\0') {
                    lVar13 = *(longlong * )(param_1 + 0x688);
                } else {
                    lVar13 = *(longlong * )(param_1 + 0x6e8);
                }
            }
        }
        if (lVar13 != 0) {
            in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffff00000000;
            FUN_140103cf0();
        }
        (**(code * *)(*DAT_140c65680 + 0x90))();
        lVar12 = DAT_140c63678;
    }
    local_50 = local_50 - *(int *) (param_1 + 0x444);
    local_58 = local_58 + *(int *) (param_1 + 0x444);
    local_4c = local_4c - *(int *) (param_1 + 0x440);
    local_54 = local_54 + *(int *) (param_1 + 0x440);
    if (param_3 == 0) {
        local_58 = local_58 + *(int *) (param_1 + 0x43c);
    }
    lVar13 = *(longlong * )(lVar7 + 0xb8);
    if (lVar13 == 0) {
        local_res20 = *(uint * )(lVar7 + 0xa4);
        uVar11 = (ulonglong) local_res20;
        uVar3 = *(undefined8 * )(lVar7 + 0x58);
        uVar4 = *(undefined8 * )(lVar7 + 0x38);
        in_stack_ffffffffffffff38 = *(ulonglong * )(lVar7 + 0xc0);
        if (uVar11 < *(ulonglong * )(lVar12 + 0x30)) {
            iVar1 = *(int *) ((ulonglong) local_res20 * 0x20 + 0x10 + *(longlong * )(lVar12 + 0x28));
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) ((ulonglong) local_res20 * 0x20 + 0x10 + *(longlong * )(lVar12 + 0x28)) = iVar1 + 1;
            }
        }
        uVar6 = FUN_1401606f0(param_1, &local_58, lVar7 + 0x70, &local_res20, in_stack_ffffffffffffff38,
                              local_res10, local_res18, uVar4, uVar3, 0);
        FUN_1401429a0(DAT_140c63678, uVar11);
        lVar13 = *(longlong * )(param_1 + 0x498);
        param_3 = (param_2 + 1) * 0x20 + param_3;
        lVar8 = lVar13;
        lVar12 = *(longlong * )(lVar13 + 8);
        while (lVar12 != 0) {
            if (*(uint * )(lVar12 + 0x20) < param_3) {
                lVar12 = *(longlong * )(lVar12 + 0x18);
            } else {
                lVar8 = lVar12;
                lVar12 = *(longlong * )(lVar12 + 0x10);
            }
        }
        if ((lVar8 == lVar13) || (param_3 < *(uint * )(lVar8 + 0x20))) {
            _local_88 = CONCAT88(uStack128, lVar8);
            local_res24 = local_res24 & 0xffffff00;
            local_res20 = param_3;
            FUN_140032b30(param_1 + 0x490, local_98, local_88, &local_res20);
            lVar8 = local_98[0];
        }
        *(undefined * )(lVar8 + 0x24) = uVar6;
    } else {
        if ((float) (local_50 - local_58) != *(float *) (lVar13 + 0x2a0)) {
            FUN_140141100(lVar13);
        }
        FUN_140141910(lVar13);
        if ((local_88._0_4_ <= (float) (local_50 - local_58)) &&
            (local_88._4_4_ <= (float) (local_4c - local_54))) {
            uVar6 = 0;
        }
        lVar12 = *(longlong * )(param_1 + 0x498);
        param_3 = (param_2 + 1) * 0x20 + param_3;
        lVar7 = lVar12;
        lVar8 = *(longlong * )(lVar12 + 8);
        while (lVar8 != 0) {
            if (*(uint * )(lVar8 + 0x20) < param_3) {
                lVar8 = *(longlong * )(lVar8 + 0x18);
            } else {
                lVar7 = lVar8;
                lVar8 = *(longlong * )(lVar8 + 0x10);
            }
        }
        if ((lVar7 == lVar12) || (param_3 < *(uint * )(lVar7 + 0x20))) {
            local_res24 = local_res24 & 0xffffff00;
            local_res20 = param_3;
            local_98[0] = lVar7;
            FUN_140032b30();
            lVar7 = local_88;
        }
        *(undefined * )(lVar7 + 0x24) = uVar6;
        if (local_88._4_4_ < (float) (local_4c - local_54)) {
            local_54 = local_54 + ((local_4c - (int) local_88._4_4_) - local_54) / 2;
        }
        (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 2);
        local_78 = ZEXT816(CONCAT44((float) local_4c, (float) local_50));
        _local_88 = ZEXT816(CONCAT44((float) local_54, (float) local_58));
        (**(code * *)(*DAT_140c65680 + 0x68))(DAT_140c65680, local_88);
        local_78 = ZEXT816(CONCAT44((float) local_4c, (float) local_50));
        _local_88 = ZEXT816(CONCAT44((float) local_54, (float) local_58));
        FUN_140141820(lVar13, local_88);
        (**(code * *)(*DAT_140c65680 + 0x48))();
    }
    if ((*(char *) (param_1 + 0x44c) != '\0') &&
        (*(longlong * )
                (*(longlong * )(*(longlong * )(*(longlong * )(param_1 + 0x458) + 0x28) + lVar14 * 8) + 0xe0) !=
         0)) {
        local_68 = 0x3f800000;
        uStack100 = 0x3f800000;
        uStack96 = 0x3f800000;
        uStack92 = 0x3f800000;
        local_58 = (local_50 - local_4c) + local_54;
        if (*(longlong * )(param_1 + 0x7f8) != 0) {
            FUN_140103cf0(*(longlong * )(param_1 + 0x7f8), &local_58, &local_68, 0,
                          in_stack_ffffffffffffff38 & 0xffffffff00000000 |
                          (ulonglong)
                                  (uint)((DAT_140c63664 - *(float *) (param_1 + 0x800)) *
                                         *(float *) (param_1 + 0x804)));
        }
    }
    FUN_1401429a0(DAT_140c63678, uVar9);
    return;
}


undefined8 FUN_140161890(longlong param_1) {
    longlong lVar1;
    int iVar2;
    int iVar3;

    if (*(int *) (param_1 + 0x478) == 1) {
        lVar1 = **(longlong * *)(param_1 + 0x470);
        iVar3 = *(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc);
        iVar2 = *(int *) (lVar1 + 0xc);
        if (iVar3 < *(int *) (lVar1 + 0xc)) {
            iVar2 = iVar3;
        }
        iVar3 = *(int *) (lVar1 + 8);
        if (*(int *) (lVar1 + 8) < iVar2) {
            iVar3 = iVar2;
        }
        *(int *) (lVar1 + 4) = iVar3;
    }
    FUN_14015f180();
    return 0;
}


void FUN_1401618e0(longlong param_1) {
    int iVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    byte bVar5;
    int iVar6;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    int iVar12;
    char cVar13;
    float fVar14;
    int local_58;
    int local_54;
    undefined4 local_50;
    int local_4c;
    undefined local_48[16];
    undefined local_38[16];
    ulonglong uVar7;

    FUN_140160a20();
    iVar3 = *(int *) (param_1 + 0x2cc);
    iVar12 = *(int *) (param_1 + 0x2d0);
    local_50 = *(undefined4 * )(undefined8 * )(param_1 + 0x2d4);
    iVar1 = *(int *) (param_1 + 0x2d8);
    uVar2 = *(undefined8 * )(param_1 + 0x2d4);
    uVar10 = 0;
    local_54 = 0;
    if (*(longlong * )(param_1 + 0x1d8) != 0) {
        local_54 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
    }
    local_54 = iVar12 - local_54;
    if ((*(byte * )(param_1 + 0x298) >> 1 & 1) != 0) {
        local_54 = local_54 + *(int *) (param_1 + 0x400);
        iVar12 = iVar12 + *(int *) (param_1 + 0x400);
    }
    local_58 = iVar3;
    local_4c = iVar1;
    (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 2);
    local_38 = ZEXT816(CONCAT44((float) iVar1, (float) (int) uVar2));
    local_48 = ZEXT816(CONCAT44((float) iVar12, (float) iVar3));
    (**(code * *)(*DAT_140c65680 + 0x68))();
    iVar3 = *(int *) (param_1 + 0x488);
    uVar7 = uVar10;
    uVar11 = uVar10;
    if (0 < iVar3) {
        do {
            iVar6 = (int) uVar7;
            if (((iVar6 < 0) || (iVar3 <= iVar6)) || ((*(byte * )(param_1 + 0x298) >> 2 & 1) == 0)) {
                local_4c = *(int *) (param_1 + 0x404);
            } else {
                local_4c = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + uVar11) + 0xc);
            }
            local_4c = local_4c + local_54;
            if (iVar1 < local_54) break;
            if (iVar12 < local_4c) {
                bVar5 = (byte) * (undefined8 * )(param_1 + 0x298);
                if ((bVar5 >> 3 & 1) != 0) {
                    bVar5 = bVar5 >> 4 & 1;
                    if (bVar5 == 0) {
                        cVar13 = iVar6 == *(int *) (param_1 + 0x408);
                    } else {
                        cVar13 = *(char *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + uVar11) + 9);
                    }
                    if (*(char *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + uVar11) + 8) == '\0') {
                        if ((ulonglong) * (uint * )(param_1 + 0x89c) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                            lVar9 = (ulonglong) * (uint * )(param_1 + 0x89c) * 0x20 +
                                    *(longlong * )(DAT_140c63678 + 0x28);
                        } else {
                            lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
                        }
                        lVar4 = *(longlong * )(param_1 + 0x718);
                        if (lVar4 != 0) {
                            fVar14 = (DAT_140c63664 - *(float *) (param_1 + 0x720)) * *(float *) (param_1 + 0x724);
                            goto LAB_140161c24;
                        }
                    } else if (iVar6 == *(int *) (param_1 + 0x410)) {
                        if (cVar13 == '\0') {
                            if ((ulonglong) * (uint * )(param_1 + 0x890) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                                lVar9 = (ulonglong) * (uint * )(param_1 + 0x890) * 0x20 +
                                        *(longlong * )(DAT_140c63678 + 0x28);
                            } else {
                                lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
                            }
                            lVar4 = *(longlong * )(param_1 + 0x6b8);
                            if (lVar4 != 0) {
                                fVar14 = (DAT_140c63664 - *(float *) (param_1 + 0x6c0)) * *(float *) (param_1 + 0x6c4);
                                goto LAB_140161c24;
                            }
                        } else {
                            if ((ulonglong) * (uint * )(param_1 + 0x898) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                                lVar9 = (ulonglong) * (uint * )(param_1 + 0x898) * 0x20 +
                                        *(longlong * )(DAT_140c63678 + 0x28);
                            } else {
                                lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
                            }
                            lVar4 = *(longlong * )(param_1 + 0x6e8);
                            if (lVar4 != 0) {
                                fVar14 = (DAT_140c63664 - *(float *) (param_1 + 0x6f0)) * *(float *) (param_1 + 0x6f4);
                                LAB_140161c24:
                                FUN_140103cf0(lVar4, &local_58, lVar9, 0, fVar14);
                            }
                        }
                    } else if (((cVar13 == '\0') || (bVar5 == 0)) && (*(int *) (param_1 + 0x408) != iVar6)) {
                        if ((ulonglong) * (uint * )(param_1 + 0x88c) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                            lVar9 = (ulonglong) * (uint * )(param_1 + 0x88c) * 0x20 +
                                    *(longlong * )(DAT_140c63678 + 0x28);
                        } else {
                            lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
                        }
                        lVar4 = *(longlong * )(param_1 + 0x658);
                        if (lVar4 != 0) {
                            fVar14 = (DAT_140c63664 - *(float *) (param_1 + 0x660)) * *(float *) (param_1 + 0x664);
                            goto LAB_140161c24;
                        }
                    } else {
                        if ((ulonglong) * (uint * )(param_1 + 0x894) < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                            lVar9 = (ulonglong) * (uint * )(param_1 + 0x894) * 0x20 +
                                    *(longlong * )(DAT_140c63678 + 0x28);
                        } else {
                            lVar9 = *(longlong * )(DAT_140c63678 + 0x28);
                        }
                        lVar4 = *(longlong * )(param_1 + 0x688);
                        if (lVar4 != 0) {
                            fVar14 = (DAT_140c63664 - *(float *) (param_1 + 0x690)) * *(float *) (param_1 + 0x694);
                            goto LAB_140161c24;
                        }
                    }
                }
                (**(code * *)(*DAT_140c65680 + 0x90))();
                uVar7 = uVar10;
                if (0 < *(int *) (param_1 + 0x478)) {
                    do {
                        FUN_1401610d0(param_1);
                        uVar8 = (int) uVar7 + 1;
                        uVar7 = (ulonglong) uVar8;
                    } while ((int) uVar8 < *(int *) (param_1 + 0x478));
                }
            }
            iVar3 = *(int *) (param_1 + 0x488);
            uVar7 = (ulonglong)(iVar6 + 1U);
            uVar11 = uVar11 + 8;
            local_54 = local_4c;
        } while ((int) (iVar6 + 1U) < iVar3);
    }
    (**(code * *)(*DAT_140c65680 + 0x48))();
    return;
}


longlong FUN_140161cd0(longlong param_1, int *param_2, int *param_3, uint *param_4) {
    int iVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;
    int iVar5;
    longlong lVar6;
    int iVar7;
    uint uVar8;
    int iVar9;

    iVar1 = *param_2;
    iVar9 = param_2[1];
    iVar2 = *(int *) (param_1 + 0x2cc);
    iVar5 = *(int *) (param_1 + 0x2d0);
    if ((((iVar1 < iVar2) || (*(int *) (param_1 + 0x2d4) <= iVar1)) || (iVar9 < iVar5)) ||
        (*(int *) (param_1 + 0x2d8) <= iVar9)) {
        return (ulonglong)(uint3)((uint) iVar5 >> 8) << 8;
    }
    iVar9 = iVar9 - iVar5;
    if ((*(byte * )(param_1 + 0x298) >> 1 & 1) != 0) {
        if (iVar9 < *(int *) (param_1 + 0x400)) {
            *param_4 = 0xffffffff;
            *param_3 = -1;
            goto LAB_140161e0e;
        }
        iVar9 = iVar9 - *(int *) (param_1 + 0x400);
    }
    if (*(longlong * )(param_1 + 0x1d8) == 0) {
        iVar5 = 0;
    } else {
        iVar5 = *(int *) (*(longlong * )(param_1 + 0x1d8) + 0x514);
    }
    iVar9 = iVar9 + iVar5;
    lVar6 = 0;
    *param_3 = *(int *) (param_1 + 0x488);
    iVar5 = *(int *) (param_1 + 0x488);
    iVar7 = 0;
    if (0 < iVar5) {
        do {
            if (((lVar6 < 0) || (iVar5 <= iVar7)) || ((*(byte * )(param_1 + 0x298) >> 2 & 1) == 0)) {
                iVar3 = *(int *) (param_1 + 0x404);
            } else {
                iVar3 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + lVar6 * 8) + 0xc);
            }
            if (iVar9 < iVar3) {
                *param_3 = iVar7;
                break;
            }
            if (((lVar6 < 0) || (iVar5 <= iVar7)) || ((*(byte * )(param_1 + 0x298) >> 2 & 1) == 0)) {
                iVar3 = *(int *) (param_1 + 0x404);
            } else {
                iVar3 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x480) + lVar6 * 8) + 0xc);
            }
            lVar6 = lVar6 + 1;
            iVar9 = iVar9 - iVar3;
            iVar7 = iVar7 + 1;
        } while (lVar6 < iVar5);
    }
    LAB_140161e0e:
    if (*(longlong * )(param_1 + 0x1d0) == 0) {
        iVar9 = 0;
    } else {
        iVar9 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
    }
    uVar4 = (ulonglong) * (uint * )(param_1 + 0x478);
    iVar9 = (iVar1 - iVar2) + iVar9;
    uVar8 = 0;
    *param_4 = *(uint * )(param_1 + 0x478);
    iVar1 = *(int *) (param_1 + 0x478);
    lVar6 = 0;
    if (0 < iVar1) {
        while (true) {
            if ((lVar6 < 0) || (iVar1 <= (int) uVar8)) {
                uVar4 = 0;
            } else if ((lVar6 == 0) &&
                       (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                uVar4 = (ulonglong)(uint)(*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc));
            } else {
                uVar4 = (ulonglong) * (uint * )(*(longlong * )(*(longlong * )(param_1 + 0x470) + lVar6 * 8) + 4);
            }
            if (iVar9 < (int) uVar4) break;
            if ((lVar6 < 0) || (iVar1 <= (int) uVar8)) {
                uVar4 = 0;
            } else if ((lVar6 == 0) &&
                       (((*(byte * )(param_1 + 0x298) & 1) == 0 || (*(longlong * )(param_1 + 0x478) == 1)))) {
                uVar4 = (ulonglong)(uint)(*(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc));
            } else {
                uVar4 = (ulonglong) * (uint * )(*(longlong * )(*(longlong * )(param_1 + 0x470) + lVar6 * 8) + 4);
            }
            lVar6 = lVar6 + 1;
            iVar9 = iVar9 - (int) uVar4;
            uVar8 = uVar8 + 1;
            if (iVar1 <= lVar6) {
                return CONCAT71((int7)(uVar4 >> 8), 1);
            }
        }
        *param_4 = uVar8;
    }
    return CONCAT71((int7)(uVar4 >> 8), 1);
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_140161f20(longlong *param_1, int param_2, int *param_3, char param_4) {
    char *pcVar1;
    longlong *plVar2;
    longlong *plVar3;
    char cVar4;
    undefined4 uVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    int local_res8[2];
    undefined8 in_stack_ffffffffffffff58;
    undefined4 uVar15;
    ulonglong uVar14;
    undefined8 in_stack_ffffffffffffff60;
    undefined4 uVar17;
    ulonglong uVar16;
    int iVar18;
    int *piVar19;
    int local_78[2];
    int local_70;
    undefined4 local_6c;
    int local_68;
    int local_64;
    undefined local_60[4];
    undefined4 local_5c;
    longlong local_58;
    undefined *local_50;
    longlong local_48;

    uVar15 = (undefined4)((ulonglong) in_stack_ffffffffffffff58 >> 0x20);
    uVar17 = (undefined4)((ulonglong) in_stack_ffffffffffffff60 >> 0x20);
    uVar5 = FUN_1400d2120();
    iVar18 = *(int *) ((longlong) param_1 + 0x2cc);
    iVar7 = *(int *) ((longlong) param_1 + 0x2d4);
    local_70 = *(int *) (param_1 + 0x5a);
    lVar8 = -1;
    local_68 = *(int *) (param_1 + 0x5b);
    local_78[0] = -1;
    local_res8[0] = -1;
    cVar4 = FUN_140161cd0(param_1, param_3, local_78, local_res8);
    if (cVar4 == '\0') {
        if (*(char *) ((longlong) param_1 + 0x44c) != '\0') {
            FUN_1400c6b20(param_1);
            uVar5 = 1;
        }
    } else {
        if (((((iVar18 <= *param_3) && (*param_3 < iVar7)) && (local_70 <= param_3[1])) &&
             ((param_3[1] < local_68 && ((*(uint * )(param_1 + 0x53) >> 8 & 1) != 0)))) &&
            ((lVar10 = param_1[4], lVar10 == 0 || (*(longlong * *)(lVar10 + 0xb40) != param_1)))) {
            FUN_1400e8c50(lVar10, param_1);
        }
        local_64 = local_78[0];
        iVar18 = local_res8[0];
        uVar9 = (ulonglong) local_78[0];
        if ((local_78[0] < 0) && (param_2 == 0)) {
            if (param_3[1] < *(int *) (param_1 + 0x80)) {
                (**(code * *)(*param_1 + 0x240))(param_1, param_3, local_res8[0]);
            }
        } else if ((*(byte * )(param_1 + 0x53) >> 3 & 1) == 0) {
            if ((((-1 < local_res8[0]) && (local_res8[0] < *(int *) (param_1 + 0x8f))) &&
                 (-1 < local_78[0])) &&
                (((local_78[0] < *(int *) (param_1 + 0x91) &&
                   (lVar8 = *(longlong * )(param_1[0x90] + uVar9 * 8), local_res8[0] < *(int *) (lVar8 + 0x18)
                   )) && ((*(longlong * )(*(longlong * )(lVar8 + 0x10) + (longlong) local_res8[0] * 8) != 0 &&
                           (cVar4 = FUN_14015eed0(param_1, local_78[0], local_res8[0]), cVar4 != '\0')))))) {
                piVar19 = local_res8;
                uVar13 = iVar18 + 1;
                uVar12 = local_64 + 1;
                uVar14 = CONCAT44(uVar17, *(int *) ((longlong) param_1 + 0x40c) + 1);
                local_res8[0] = 1;
                uVar9 = CONCAT44(uVar15, *(int *) (param_1 + 0x81) + 1);
                uVar11 = uVar13;
                iVar7 = param_2;
                FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", uVar9, uVar14, uVar12, uVar13, param_2, piVar19);
                if (local_res8[0] != 0) {
                    uVar14 = uVar14 & 0xffffffff00000000 | (ulonglong) uVar13;
                    *(int *) (param_1 + 0x81) = local_64;
                    *(int *) ((longlong) param_1 + 0x40c) = iVar18;
                    *(int *) (param_1 + 0x82) = local_64;
                    *(int *) ((longlong) param_1 + 0x414) = iVar18;
                    uVar9 = uVar9 & 0xffffffff00000000 | (ulonglong) uVar12;
                    FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc88c, uVar9, uVar14, param_2, uVar11, iVar7,
                                  piVar19);
                    *(int *) ((longlong) param_1 + 0x434) = iVar18;
                    *(int *) (param_1 + 0x87) = local_64;
                }
                if (param_4 != '\0') {
                    FUN_1400d4070(param_1, 0x2e, param_1, &DAT_1409dc86c,
                                  uVar9 & 0xffffffff00000000 | (ulonglong) uVar12,
                                  uVar14 & 0xffffffff00000000 | (ulonglong) uVar13, param_2, uVar11, iVar7, piVar19
                    );
                }
            }
        } else {
            lVar10 = (longlong) local_res8[0];
            if (((-1 < local_res8[0]) && (local_res8[0] < *(int *) (param_1 + 0x8f))) &&
                ((-1 < local_78[0] && (local_78[0] < *(int *) (param_1 + 0x91))))) {
                lVar6 = *(longlong * )(uVar9 * 8 + param_1[0x90]);
                if (((local_res8[0] < *(int *) (lVar6 + 0x18)) &&
                     (*(longlong * )(*(longlong * )(lVar6 + 0x10) + lVar10 * 8) != 0)) &&
                    (cVar4 = FUN_14015eed0(param_1, uVar9 & 0xffffffff), cVar4 != '\0')) {
                    piVar19 = local_res8;
                    iVar7 = *(int *) ((longlong) param_1 + 0x40c) + 1;
                    uVar11 = (int) lVar10 + 1;
                    uVar12 = local_64 + 1;
                    uVar16 = CONCAT44(uVar17, uVar11);
                    local_res8[0] = 1;
                    uVar14 = CONCAT44(uVar15, uVar12);
                    iVar18 = param_2;
                    FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", uVar14, uVar16, *(int *) (param_1 + 0x81) + 1,
                                  iVar7, param_2, piVar19);
                    if (local_res8[0] != 0) {
                        *(int *) (param_1 + 0x81) = local_64;
                        *(int *) (param_1 + 0x82) = local_64;
                        uVar16 = uVar16 & 0xffffffff00000000 | (ulonglong) uVar11;
                        *(undefined4 * )((longlong) param_1 + 0x434) = 0;
                        *(int *) (param_1 + 0x87) = local_64;
                        uVar14 = uVar14 & 0xffffffff00000000 | (ulonglong) uVar12;
                        FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc7dc, uVar14, uVar16, param_2, iVar7, iVar18,
                                      piVar19);
                    }
                    if (param_4 != '\0') {
                        uVar14 = uVar14 & 0xffffffff00000000 | (ulonglong) uVar12;
                        FUN_1400d4070(param_1, 0x2e, param_1, &DAT_1409dc7bc, uVar14,
                                      uVar16 & 0xffffffff00000000 | (ulonglong) uVar11, param_2, iVar7, iVar18,
                                      piVar19);
                    }
                    if (*(char *) ((longlong) param_1 + 0x44c) != '\0') {
                        lVar10 = *(longlong * )(uVar9 * 8 + *(longlong * )(param_1[0x8b] + 0x28));
                        if (*(longlong * )(lVar10 + 0xe0) == 0) {
                            lVar6 = FUN_14018b280(0xf);
                            local_48 = lVar6 + 0xf;
                            local_58 = lVar6;
                            FUN_1407db590(lVar6, "MenuSelection_", 0xe);
                            local_50 = (undefined * )(lVar6 + 0xe);
                            if (local_50 != (undefined *) 0x0) {
                                *local_50 = 0;
                            }
                            lVar6 = *(longlong * )(lVar10 + 0x88);
                            do {
                                pcVar1 = (char *) (lVar6 + 1 + lVar8);
                                lVar8 = lVar8 + 1;
                            } while (*pcVar1 != '\0');
                            FUN_14001b050(local_60, lVar6, lVar6 + lVar8);
                            lVar6 = local_58;
                            lVar8 = param_1[0x8a];
                            if (lVar8 == 0) {
                                FUN_1400ea3e0(param_1[4], local_58, &DAT_1409dc78c, uVar12,
                                              *(undefined8 * )(lVar10 + 0x88));
                            } else {
                                uVar9 = uVar14 & 0xffffffff00000000 | (ulonglong) uVar12;
                                cVar4 = FUN_1400d4040(lVar8, local_58, lVar8, &DAT_1409dc744, uVar9,
                                                      *(undefined8 * )(lVar10 + 0x88));
                                if (((cVar4 == '\0') && (*(longlong * )(param_1[0x8b] + 0x18) != 0)) &&
                                    ((lVar8 = param_1[0x8a], (*(byte * )(lVar8 + 0x1b0) >> 6 & 1) != 0 &&
                                                             (*(char *) (lVar8 + 0x44c) != '\0')))) {
                                    FUN_1400d4040(*(undefined8 * )(lVar8 + 0x450), lVar6,
                                                  *(undefined8 * )(lVar8 + 0x450),
                                                  &DAT_1409dc72c, uVar9 & 0xffffffff00000000 | (ulonglong) uVar12,
                                                  *(undefined8 * )(lVar10 + 0x88));
                                }
                            }
                            plVar3 = (longlong *) param_1[2];
                            while (((plVar2 = plVar3, plVar2 != (longlong *) 0x0 &&
                                                      ((*(byte * )(plVar2 + 0x36) >> 6 & 1) != 0)) &&
                                    (*(char *) ((longlong) plVar2 + 0x44c) != '\0'))) {
                                param_1 = plVar2;
                                plVar3 = (longlong *) plVar2[2];
                            }
                            FUN_1400c6b20(param_1);
                            if (lVar6 != 0) {
                                FUN_14018b900(lVar6, 0);
                            }
                        } else {
                            local_68 = 0;
                            FUN_14015fad0(param_1, local_60, &local_68);
                            local_6c = local_5c;
                            local_70 = (int) local_58;
                            uVar11 = FUN_1400d45b0(param_1);
                            FUN_1400ecf40(param_1[4], param_1, &local_70, *(undefined8 * )(lVar10 + 0xe0),
                                          uVar14 & 0xffffffff00000000 | (ulonglong) uVar11);
                        }
                    }
                }
            }
        }
        uVar5 = 0;
    }
    return uVar5;
}


undefined8 FUN_1401624a0(longlong param_1, int param_2, undefined4 *param_3) {
    char cVar1;
    undefined8 uVar2;
    int local_res8[2];
    int local_res20[2];

    if ((-1 < *(int *) (param_1 + 0x42c)) && (param_2 == 0)) {
        *(undefined4 * )(param_1 + 0x42c) = 0xffffffff;
    }
    if (-1 < *(int *) (param_1 + 0x438)) {
        local_res8[0] = -1;
        local_res20[0] = -1;
        cVar1 = FUN_140161cd0(param_1, param_3, local_res8, local_res20);
        if (((cVar1 != '\0') && (*(int *) (param_1 + 0x438) == local_res8[0])) &&
            (*(int *) (param_1 + 0x434) == local_res20[0])) {
            local_res8[0] = 0;
            FUN_1400d4070(param_1, 0x14, param_1, &DAT_140a358a4, *param_3, param_3[1], local_res8);
            if (local_res8[0] != 0) {
                FUN_1400d2550(param_1, param_2, param_3);
                return 0;
            }
        }
        *(undefined4 * )(param_1 + 0x438) = 0xffffffff;
    }
    uVar2 = FUN_1400d2550(param_1, param_2, param_3);
    return uVar2;
}


undefined8 FUN_140162850(longlong param_1, int *param_2) {
    longlong *plVar1;
    longlong *plVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    undefined8 uVar6;
    int iVar7;
    int iVar8;
    char **ppcVar9;
    longlong lVar10;
    int local_res8[2];
    undefined local_res18[8];

    bVar4 = false;
    bVar3 = false;
    if (*(int *) (param_1 + 0x42c) < 0) {
        local_res8[0] = -1;
        cVar5 = FUN_140161cd0(param_1, param_2, local_res8, local_res18);
        if (((cVar5 != '\0') && (local_res8[0] < 0)) && (param_2[1] < *(int *) (param_1 + 0x400))) {
            if (*(longlong * )(param_1 + 0x1d0) == 0) {
                iVar7 = 0;
            } else {
                iVar7 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
            }
            lVar10 = *(longlong * )(param_1 + 0x478);
            iVar7 = -iVar7;
            if (lVar10 != 0) {
                ppcVar9 = *(char ***) (param_1 + 0x470);
                do {
                    if (**ppcVar9 == '\0') {
                        iVar8 = 0;
                    } else {
                        iVar8 = *(int *) (*ppcVar9 + 4);
                    }
                    iVar7 = iVar7 + iVar8;
                    if ((iVar7 <= *param_2) && (bVar3 = bVar4, *param_2 < iVar7 + 10)) {
                        bVar4 = true;
                        bVar3 = true;
                    }
                    ppcVar9 = ppcVar9 + 1;
                    lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                if (bVar3) goto LAB_14016291f;
            }
        }
        uVar6 = FUN_1400d1710(param_1, param_2);
        return uVar6;
    }
    LAB_14016291f:
    lVar10 = *(longlong * )(param_1 + 0x20);
    plVar1 = *(longlong * *)(lVar10 + 0xb20);
    plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x30) + 0x3c8);
    if (plVar2 != plVar1) {
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))();
            *(undefined8 * )(lVar10 + 0xb20) = 0;
        }
        *(longlong * *)(lVar10 + 0xb20) = plVar2;
        if (plVar2 != (longlong *) 0x0) {
            (**(code * *) * plVar2)(plVar2);
        }
    }
    return 1;
}


undefined8 FUN_140162980(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    int local_res8[2];
    ulonglong in_stack_ffffffffffffffd8;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;

    iVar1 = *(int *) (param_1 + 0x408);
    if (iVar1 != 0) {
        piVar6 = local_res8;
        iVar2 = *(int *) (param_1 + 0x40c) + 1;
        uVar5 = 0;
        iVar3 = iVar1 + -1;
        local_res8[0] = 1;
        iVar4 = iVar2;
        FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", iVar1, iVar2,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(iVar1 + 1), iVar2, 0,
                      piVar6);
        if (local_res8[0] != 0) {
            *(int *) (param_1 + 0x408) = iVar3;
            *(int *) (param_1 + 0x410) = iVar3;
            FUN_140160280(param_1, iVar3);
            FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc7f4, iVar1, iVar2, 0, iVar4, uVar5, piVar6);
        }
    }
    return 0;
}


undefined8 FUN_140162a60(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    int local_res8[2];
    ulonglong in_stack_ffffffffffffffd8;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;

    iVar2 = *(int *) (param_1 + 0x408);
    if (iVar2 < *(int *) (param_1 + 0x488) + -1) {
        iVar1 = iVar2 + 1;
        piVar6 = local_res8;
        iVar3 = *(int *) (param_1 + 0x40c) + 1;
        uVar5 = 0;
        local_res8[0] = 1;
        iVar4 = iVar3;
        FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", iVar2 + 2, iVar3,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(iVar2 + 1), iVar3, 0,
                      piVar6);
        if (local_res8[0] != 0) {
            *(int *) (param_1 + 0x408) = iVar1;
            *(int *) (param_1 + 0x410) = iVar1;
            FUN_140160280(param_1, iVar1);
            FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc844, iVar2 + 2, iVar3, 0, iVar4, uVar5, piVar6);
        }
    }
    return 0;
}


undefined8 FUN_140162b40(longlong param_1) {
    uint uVar1;
    int iVar2;
    int iVar3;
    int local_res8[2];
    ulonglong in_stack_ffffffffffffffd8;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;

    iVar2 = *(int *) (param_1 + 0x40c);
    if ((0 < iVar2) && ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0)) {
        iVar4 = iVar2 + 1;
        piVar6 = local_res8;
        iVar3 = *(int *) (param_1 + 0x408);
        uVar5 = 0;
        uVar1 = iVar3 + 1;
        local_res8[0] = 1;
        FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", uVar1, iVar2,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong) uVar1, iVar4, 0, piVar6);
        if (local_res8[0] != 0) {
            *(int *) (param_1 + 0x408) = iVar3;
            *(int *) (param_1 + 0x410) = iVar3;
            FUN_1401603f0(param_1, *(undefined4 * )(param_1 + 0x40c));
            FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc944, uVar1, iVar2, 0, iVar4, uVar5, piVar6);
        }
    }
    return 0;
}


undefined8 FUN_140162c30(longlong param_1) {
    uint uVar1;
    int iVar2;
    int iVar3;
    int local_res8[2];
    ulonglong in_stack_ffffffffffffffd8;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;

    iVar2 = *(int *) (param_1 + 0x40c);
    if ((iVar2 < *(int *) (param_1 + 0x478)) && ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0)) {
        iVar4 = iVar2 + 1;
        piVar6 = local_res8;
        iVar3 = *(int *) (param_1 + 0x408);
        uVar5 = 0;
        uVar1 = iVar3 + 1;
        local_res8[0] = 1;
        FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", uVar1, iVar2 + 2,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong) uVar1, iVar4, 0, piVar6);
        if (local_res8[0] != 0) {
            *(int *) (param_1 + 0x408) = iVar3;
            *(int *) (param_1 + 0x410) = iVar3;
            FUN_1401603f0(param_1, *(undefined4 * )(param_1 + 0x40c));
            FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc95c, uVar1, iVar2 + 2, 0, iVar4, uVar5, piVar6);
        }
    }
    return 0;
}


undefined8 FUN_140162d20(longlong param_1) {
    uint uVar1;
    int iVar2;
    int local_res8[2];
    ulonglong in_stack_ffffffffffffffd8;
    int iVar3;
    undefined8 uVar4;
    int *piVar5;

    if ((0 < *(int *) (param_1 + 0x40c)) && ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0)) {
        iVar3 = *(int *) (param_1 + 0x40c) + 1;
        piVar5 = local_res8;
        uVar4 = 0;
        iVar2 = *(int *) (param_1 + 0x408);
        uVar1 = iVar2 + 1;
        local_res8[0] = 1;
        FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", uVar1, 1,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong) uVar1, iVar3, 0, piVar5);
        if (local_res8[0] != 0) {
            *(int *) (param_1 + 0x408) = iVar2;
            *(int *) (param_1 + 0x410) = iVar2;
            FUN_1401603f0(param_1, *(undefined4 * )(param_1 + 0x40c));
            FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc904, uVar1, 1, 0, iVar3, uVar4, piVar5);
        }
    }
    return 0;
}


undefined8 FUN_140162e10(longlong param_1) {
    uint uVar1;
    int iVar2;
    int iVar3;
    int local_res8[2];
    ulonglong in_stack_ffffffffffffffd8;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;

    iVar2 = *(int *) (param_1 + 0x478);
    if ((*(int *) (param_1 + 0x40c) < iVar2) && ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0)) {
        iVar4 = *(int *) (param_1 + 0x40c) + 1;
        piVar6 = local_res8;
        iVar3 = *(int *) (param_1 + 0x408);
        uVar5 = 0;
        uVar1 = iVar3 + 1;
        local_res8[0] = 1;
        FUN_1400d4070(param_1, 0x2c, param_1, "iiiii>b", uVar1, iVar2,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong) uVar1, iVar4, 0, piVar6);
        if (local_res8[0] != 0) {
            *(int *) (param_1 + 0x408) = iVar3;
            *(int *) (param_1 + 0x410) = iVar3;
            FUN_1401603f0(param_1, *(undefined4 * )(param_1 + 0x40c));
            FUN_1400d4070(param_1, 0x2d, param_1, &DAT_1409dc924, uVar1, iVar2, 0, iVar4, uVar5, piVar6);
        }
    }
    return 0;
}


undefined8 FUN_140163280(longlong *param_1, int *param_2) {
    longlong lVar1;
    char cVar2;
    int iVar3;
    undefined8 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int local_res8[2];
    int local_res10[2];
    int local_res18[2];

    iVar3 = *(int *) ((longlong) param_1 + 0x42c);
    iVar6 = *(int *) (param_1 + 0x71) - *param_2;
    iVar7 = *(int *) ((longlong) param_1 + 0x38c) - param_2[1];
    local_res18[0] = -1;
    local_res10[0] = -1;
    if (-1 < iVar3) {
        if (iVar3 < *(int *) (param_1 + 0x8f)) {
            lVar1 = *(longlong * )(param_1[0x8e] + (longlong) iVar3 * 8);
            iVar3 = *(int *) (lVar1 + 0xc);
            if (*(int *) (param_1 + 0x86) - iVar6 < *(int *) (lVar1 + 0xc)) {
                iVar3 = *(int *) (param_1 + 0x86) - iVar6;
            }
            iVar5 = *(int *) (lVar1 + 8);
            if (*(int *) (lVar1 + 8) < iVar3) {
                iVar5 = iVar3;
            }
            *(int *) (lVar1 + 4) = iVar5;
            FUN_14015f180(param_1);
        } else {
            *(undefined4 * )((longlong) param_1 + 0x42c) = 0xffffffff;
        }
    }
    if ((((-1 < *(int *) (param_1 + 0x87)) && (*(longlong * )(param_1[4] + 0xd38) == 0)) &&
         (0x30 < iVar7 * iVar7 + iVar6 * iVar6)) &&
        (iVar3 = FUN_14018cdf0(), 0x7d < (uint)(iVar3 - *(int *) ((longlong) param_1 + 0x3a4)))) {
        local_res8[0] = 0;
        FUN_1400d4070(param_1, 0x13, param_1, &DAT_140a36450, *(undefined4 * )(param_1 + 0x71),
                      *(undefined4 * )((longlong) param_1 + 0x38c), local_res8);
        if (local_res8[0] != 0) {
            FUN_1400d23b0(param_1, param_2);
            return 0;
        }
    }
    cVar2 = FUN_140161cd0(param_1, param_2, local_res18, local_res10);
    iVar6 = local_res18[0];
    iVar3 = local_res10[0];
    if (cVar2 == '\0') {
        param_1[0x82] = -1;
    } else {
        (**(code * *)(*param_1 + 0x238))(param_1, local_res18[0], local_res10[0]);
        if (((byte) param_1[0x53] >> 5 & 1) != 0) {
            if (((byte) param_1[0x53] >> 3 & 1) == 0) {
                if (((iVar6 < 0) || (*(int *) (param_1 + 0x91) <= iVar6)) ||
                    ((iVar3 < 0 || (*(int *) (param_1 + 0x8f) <= iVar3))))
                    goto LAB_140163429;
                *(int *) ((longlong) param_1 + 0x414) = iVar3;
            } else if ((iVar6 < 0) || (*(int *) (param_1 + 0x91) <= iVar6)) goto LAB_140163429;
            *(int *) (param_1 + 0x82) = iVar6;
        }
    }
    LAB_140163429:
    uVar4 = FUN_1400d23b0(param_1, param_2);
    return uVar4;
}


void FUN_140163460(longlong param_1, int param_2, byte param_3) {
    ulonglong uVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    char cVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    int iVar14;
    ulonglong local_res20;
    ulonglong in_stack_ffffffffffffffe8;
    ulonglong in_stack_fffffffffffffff0;

    if ((ulonglong)(longlong)param_2 < *(ulonglong * )(param_1 + 0x478)) {
        *(int *) (param_1 + 0x424) = param_2;
        *(byte * )(param_1 + 0x428) = param_3;
        if (*(char *) (*(longlong * )(*(longlong * )(param_1 + 0x470) + (longlong) param_2 * 8) + 2) != '\0'
                ) {
            puVar2 = *(undefined8 * *)(param_1 + 0x480);
            uVar13 = (ulonglong) * (int *) (param_1 + 0x488);
            DAT_140c1d18e = param_3;
            DAT_140c63680 = param_2;
            if (uVar13 == 2) {
                uVar3 = *puVar2;
                uVar4 = puVar2[1];
                cVar5 = FUN_14015d6e0(uVar3, uVar4);
                if (cVar5 == '\0') {
                    cVar5 = FUN_14015d6e0(uVar4, uVar3);
                    if (cVar5 == '\0') {
                        return;
                    }
                    iVar14 = -1;
                    if (DAT_140c1d18e != 0) {
                        iVar14 = 1;
                    }
                } else {
                    iVar14 = 1;
                    if (DAT_140c1d18e != 0) {
                        iVar14 = -1;
                    }
                }
                if (0 < iVar14) {
                    uVar3 = *puVar2;
                    *puVar2 = puVar2[1];
                    puVar2[1] = uVar3;
                    return;
                }
            } else if (1 < uVar13) {
                uVar7 = uVar13 >> 1;
                if (uVar7 != 0) {
                    uVar8 = (uVar13 & 0xfffffffffffffffe) + 1;
                    do {
                        uVar10 = puVar2[uVar7 - 1];
                        uVar7 = uVar7 - 1;
                        uVar8 = uVar8 - 2;
                        uVar12 = uVar7;
                        uVar6 = uVar8;
                        while (uVar6 < uVar13) {
                            uVar9 = puVar2[uVar6];
                            uVar1 = uVar6 + 1;
                            uVar11 = uVar6;
                            if (uVar1 < uVar13) {
                                uVar6 = puVar2[uVar1];
                                cVar5 = FUN_14015d6e0(uVar6, uVar9);
                                if (cVar5 == '\0') {
                                    cVar5 = FUN_14015d6e0(uVar9, uVar6);
                                    if (cVar5 != '\0') {
                                        iVar14 = -1;
                                        if (DAT_140c1d18e != 0) {
                                            iVar14 = 1;
                                        }
                                        goto LAB_14016839d;
                                    }
                                    LAB_1401683a3:
                                    if (uVar6 <= uVar9) goto LAB_1401683b6;
                                } else {
                                    iVar14 = 1;
                                    if (DAT_140c1d18e != 0) {
                                        iVar14 = -1;
                                    }
                                    LAB_14016839d:
                                    if (iVar14 < 1) {
                                        if (iVar14 != 0) goto LAB_1401683b6;
                                        goto LAB_1401683a3;
                                    }
                                }
                                uVar9 = uVar6;
                                uVar11 = uVar1;
                            }
                            LAB_1401683b6:
                            cVar5 = FUN_14015d6e0(uVar9, uVar10);
                            if (cVar5 == '\0') {
                                cVar5 = FUN_14015d6e0(uVar10, uVar9);
                                if (cVar5 != '\0') {
                                    iVar14 = -1;
                                    if (DAT_140c1d18e != 0) {
                                        iVar14 = 1;
                                    }
                                    goto LAB_1401683f2;
                                }
                                LAB_1401683f8:
                                if (uVar9 <= uVar10) break;
                            } else {
                                iVar14 = 1;
                                if (DAT_140c1d18e != 0) {
                                    iVar14 = -1;
                                }
                                LAB_1401683f2:
                                if (iVar14 < 1) {
                                    if (iVar14 == 0) goto LAB_1401683f8;
                                    break;
                                }
                            }
                            puVar2[uVar12] = uVar9;
                            uVar12 = uVar11;
                            uVar6 = uVar11 * 2 + 1;
                        }
                        puVar2[uVar12] = uVar10;
                    } while (uVar7 != 0);
                }
                while (uVar13 = uVar13 - 1, uVar13 != 0) {
                    uVar8 = puVar2[uVar13];
                    uVar7 = 1;
                    puVar2[uVar13] = *puVar2;
                    local_res20 = 0;
                    uVar6 = 0;
                    if (1 < uVar13) {
                        do {
                            uVar10 = puVar2[uVar7];
                            uVar6 = uVar7 + 1;
                            uVar12 = uVar7;
                            if (uVar6 < uVar13) {
                                uVar7 = puVar2[uVar6];
                                cVar5 = FUN_14015d6e0(uVar7, uVar10);
                                if (cVar5 == '\0') {
                                    cVar5 = FUN_14015d6e0(uVar10, uVar7);
                                    if (cVar5 != '\0') {
                                        iVar14 = -1;
                                        if (DAT_140c1d18e != 0) {
                                            iVar14 = 1;
                                        }
                                        goto LAB_1401684ce;
                                    }
                                    LAB_1401684d4:
                                    if (uVar7 <= uVar10) goto LAB_1401684e7;
                                } else {
                                    iVar14 = 1;
                                    if (DAT_140c1d18e != 0) {
                                        iVar14 = -1;
                                    }
                                    LAB_1401684ce:
                                    if (iVar14 < 1) {
                                        if (iVar14 != 0) goto LAB_1401684e7;
                                        goto LAB_1401684d4;
                                    }
                                }
                                uVar10 = uVar7;
                                uVar12 = uVar6;
                            }
                            LAB_1401684e7:
                            cVar5 = FUN_14015d6e0(uVar10, uVar8);
                            uVar6 = local_res20;
                            if (cVar5 == '\0') {
                                cVar5 = FUN_14015d6e0(uVar8, uVar10);
                                if (cVar5 != '\0') {
                                    iVar14 = -1;
                                    if (DAT_140c1d18e != 0) {
                                        iVar14 = 1;
                                    }
                                    goto LAB_140168523;
                                }
                                LAB_140168529:
                                if (uVar10 <= uVar8) break;
                            } else {
                                iVar14 = 1;
                                if (DAT_140c1d18e != 0) {
                                    iVar14 = -1;
                                }
                                LAB_140168523:
                                if (iVar14 < 1) {
                                    if (iVar14 == 0) goto LAB_140168529;
                                    break;
                                }
                            }
                            puVar2[local_res20] = uVar10;
                            uVar7 = uVar12 * 2 + 1;
                            uVar6 = uVar12;
                            local_res20 = uVar12;
                        } while (uVar7 < uVar13);
                    }
                    puVar2[uVar6] = uVar8;
                }
            }
            return;
        }
        FUN_1400d4070(param_1, 0x2f, param_1, &DAT_1409dc9a4,
                      in_stack_ffffffffffffffe8 & 0xffffffff00000000 | (ulonglong)(param_2 + 1),
                      in_stack_fffffffffffffff0 & 0xffffffff00000000 | (ulonglong) param_3);
    }
    return;
}


undefined8 FUN_1401634f0(longlong param_1, int *param_2, int param_3) {
    int iVar1;
    char **ppcVar2;
    ulonglong uVar3;
    int iVar4;

    if (*(longlong * )(param_1 + 0x1d0) == 0) {
        iVar4 = 0;
    } else {
        iVar4 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
    }
    iVar4 = -iVar4;
    uVar3 = 0;
    *(undefined4 * )(param_1 + 0x42c) = 0xffffffff;
    if (*(ulonglong * )(param_1 + 0x478) != 0) {
        ppcVar2 = *(char ***) (param_1 + 0x470);
        do {
            if (**ppcVar2 == '\0') {
                iVar1 = 0;
            } else {
                iVar1 = *(int *) (*ppcVar2 + 4);
            }
            iVar4 = iVar4 + iVar1;
            if ((iVar4 <= *param_2) && (*param_2 < iVar4 + 10)) {
                *(int *) (param_1 + 0x42c) = (int) uVar3;
                *(undefined4 * )(param_1 + 0x430) = *(undefined4 * )(*ppcVar2 + 4);
            }
            uVar3 = uVar3 + 1;
            ppcVar2 = ppcVar2 + 1;
        } while (uVar3 < *(ulonglong * )(param_1 + 0x478));
    }
    if (*(int *) (param_1 + 0x42c) < 0) {
        if (param_3 == *(int *) (param_1 + 0x424)) {
            uVar3 = uVar3 & 0xffffffffffffff00 | (ulonglong)(*(char *) (param_1 + 0x428) == '\0');
        } else {
            uVar3 = CONCAT71((int7)(uVar3 >> 8), 1);
        }
        FUN_140163460(param_1, param_3, uVar3);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1401635c0(ulonglong param_1, undefined8 param_2, longlong param_3) {
    short sVar1;
    longlong lVar2;
    wchar_t *pwVar3;
    longlong lVar4;
    short *psVar5;
    short *psVar6;
    longlong lVar7;
    undefined8 uVar8;
    uint *puVar9;
    uint uVar10;
    short *psVar11;
    int iVar12;
    short *psVar13;
    wchar_t *pwVar14;
    short *psVar15;
    ulonglong uVar16;
    longlong lVar17;
    ulonglong uVar18;
    longlong lVar19;
    ulonglong uVar20;
    int iVar21;
    ulonglong local_res8;
    int local_res20[2];
    int local_68;
    undefined local_64[12];
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;

    uVar20 = 0;
    local_res8 = param_1;
    lVar2 = FUN_1401a5ae0(param_2);
    uVar16 = uVar20;
    if (lVar2 == 0) {
        return 0;
    }
    do {
        psVar11 = (short *) 0x0;
        iVar21 = (int) uVar16;
        if (0x1f < iVar21) {
            return uVar16;
        }
        for (lVar4 = *(longlong * )(lVar2 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar14 = L"Width";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"Width") {
                LAB_140163694:
                if (lVar4 != 0) {
                    uVar8 = FUN_1401a4f40(lVar4 + 0x20);
                    FUN_1407df428(uVar8, &DAT_1409e4114, param_3 + 0x40 + (longlong) iVar21 * 0x58);
                }
                break;
            }
            psVar5 = psVar11;
            if (*pwVar3 == L'\0') {
                LAB_140163683:
                if (*pwVar14 == L'\0') goto LAB_140163694;
            } else {
                do {
                    uVar10 = (uint) psVar5;
                    if (((*pwVar14 == L'\0') || (*pwVar3 != *pwVar14)) || (0x7ffffffe < (int) uVar10)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar14 = pwVar14 + 1;
                    uVar10 = uVar10 + 1;
                    psVar5 = (short *) (ulonglong) uVar10;
                } while (*pwVar3 != L'\0');
                if (uVar10 == 0x7fffffff) goto LAB_140163694;
                if (*pwVar3 == L'\0') goto LAB_140163683;
            }
        }
        lVar4 = FUN_1401a6b80(lVar2, L"Text");
        psVar5 = psVar11;
        if (lVar4 != 0) {
            psVar5 = (short *) FUN_1401a4f40(lVar4 + 0x20);
        }
        psVar6 = (short *) &DAT_1409d4564;
        if (psVar5 != (short *) 0x0) {
            psVar6 = psVar5;
        }
        sVar1 = *psVar6;
        psVar5 = psVar11;
        while (sVar1 != 0) {
            psVar5 = (short *) ((longlong) psVar5 + 1);
            sVar1 = psVar6[(longlong) psVar5];
        }
        lVar4 = (longlong) psVar5 * 2 >> 1;
        psVar5 = psVar11;
        if (lVar4 + 1U < 0x7fffffffffffffff) {
            psVar5 = (short *) FUN_14018b280((lVar4 + 1U) * 2, 0);
        }
        FUN_1407db590(psVar5, psVar6, lVar4 * 2);
        if (psVar5 + lVar4 != (short *) 0x0) {
            psVar5[lVar4] = 0;
        }
        lVar4 = FUN_1401a6b80(lVar2, L"TextId");
        if (lVar4 != 0) {
            FUN_1401a4f40(lVar4 + 0x20);
        }
        FUN_1400e2630();
        if (psVar5 != (short *) 0x0) {
            FUN_14018b900(psVar5);
        }
        lVar17 = uVar20 * 0x58 + param_3;
        lVar4 = *(longlong * )(lVar17 + 8);
        *(undefined8 * )(lVar17 + 8) = local_58;
        *(undefined8 * )(lVar17 + 0x10) = local_50;
        *(undefined8 * )(lVar17 + 0x18) = local_48;
        if (lVar4 != 0) {
            FUN_14018b900();
        }
        if (*(longlong * )(lVar17 + 8) == *(longlong * )(lVar17 + 0x10)) {
            for (lVar4 = *(longlong * )(lVar2 + 0x60); psVar5 = psVar11, lVar4 != 0;
                 lVar4 = *(longlong * )(lVar4 + 0x38)) {
                psVar15 = &DAT_140a31790;
                psVar6 = (short *) FUN_1401a4f40(lVar4 + 8);
                if (psVar6 == &DAT_140a31790) {
                    LAB_140163ab7:
                    if (lVar4 != 0) {
                        psVar5 = (short *) FUN_1401a4f40(lVar4 + 0x20);
                    }
                    break;
                }
                psVar13 = psVar11;
                if (*psVar6 == 0) {
                    LAB_14016383f:
                    if (*psVar15 == 0) goto LAB_140163ab7;
                } else {
                    do {
                        uVar10 = (uint) psVar13;
                        if (((*psVar15 == 0) || (*psVar6 != *psVar15)) || (0x7ffffffe < (int) uVar10)) break;
                        psVar6 = psVar6 + 1;
                        psVar15 = psVar15 + 1;
                        uVar10 = uVar10 + 1;
                        psVar13 = (short *) (ulonglong) uVar10;
                    } while (*psVar6 != 0);
                    if (uVar10 == 0x7fffffff) goto LAB_140163ab7;
                    if (*psVar6 == 0) goto LAB_14016383f;
                }
            }
            psVar6 = (short *) &DAT_1409dc9d4;
            if (psVar5 != (short *) 0x0) {
                psVar6 = psVar5;
            }
            sVar1 = *psVar6;
            psVar5 = psVar11;
            while (sVar1 != 0) {
                psVar5 = (short *) ((longlong) psVar5 + 1);
                sVar1 = psVar6[(longlong) psVar5];
            }
            FUN_14001c480((longlong) iVar21 * 0x58 + param_3, psVar6, psVar6 + (longlong) psVar5);
        }
        for (lVar4 = *(longlong * )(lVar2 + 0x60); psVar5 = psVar11, lVar4 != 0;
             lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar14 = L"Image";
            pwVar3 = (wchar_t *) FUN_1401a4f40(lVar4 + 8);
            if (pwVar3 == L"Image") {
                LAB_140163ace:
                if (lVar4 != 0) {
                    psVar5 = (short *) FUN_1401a4f40(lVar4 + 0x20);
                }
                break;
            }
            psVar6 = psVar11;
            if (*pwVar3 == L'\0') {
                LAB_1401638ff:
                if (*pwVar14 == L'\0') goto LAB_140163ace;
            } else {
                do {
                    uVar10 = (uint) psVar6;
                    if (((*pwVar14 == L'\0') || (*pwVar3 != *pwVar14)) || (0x7ffffffe < (int) uVar10)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar14 = pwVar14 + 1;
                    uVar10 = uVar10 + 1;
                    psVar6 = (short *) (ulonglong) uVar10;
                } while (*pwVar3 != L'\0');
                if (uVar10 == 0x7fffffff) goto LAB_140163ace;
                if (*pwVar3 == L'\0') goto LAB_1401638ff;
            }
        }
        psVar6 = (short *) &DAT_1409dc9bc;
        if (psVar5 != (short *) 0x0) {
            psVar6 = psVar5;
        }
        sVar1 = *psVar6;
        while (sVar1 != 0) {
            psVar11 = (short *) ((longlong) psVar11 + 1);
            sVar1 = psVar6[(longlong) psVar11];
        }
        lVar4 = (longlong) iVar21 * 0x58 + param_3;
        FUN_14001c480(lVar4 + 0x20, psVar6, psVar6 + (longlong) psVar11);
        uVar18 = 0;
        uVar16 = 0;
        do {
            local_res8 = local_res8 & 0xffffffffffffff00;
            lVar7 = FUN_1401a6b80(lVar2, (&PTR_u_DT_CENTER_140a36bb0)[uVar16]);
            if (lVar7 != 0) {
                uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                FUN_1401a52e0(uVar8, &local_res8);
                if ((char) local_res8 != '\0') {
                    uVar18 = uVar18 | 1 << ((byte) uVar16 & 0x3f);
                }
            }
            uVar16 = uVar16 + 1;
        } while (uVar16 < 6);
        *(int *) (lVar17 + 0x4c) = (int) uVar18;
        puVar9 = (uint *) FUN_1400f66f0(local_64, lVar2, L"TextColor", 0);
        lVar7 = DAT_140c63678;
        if ((uint * )(lVar17 + 0x54) != puVar9) {
            FUN_1401429a0(DAT_140c63678);
            lVar7 = DAT_140c63678;
            uVar10 = *puVar9;
            *(uint * )(lVar17 + 0x54) = uVar10;
            if ((ulonglong) uVar10 < *(ulonglong * )(lVar7 + 0x30)) {
                lVar19 = *(longlong * )(lVar7 + 0x28) + (ulonglong) uVar10 * 0x20;
                iVar12 = *(int *) (lVar19 + 0x10);
                if (iVar12 - 1U < 0xfffffffe) {
                    *(int *) (lVar19 + 0x10) = iVar12 + 1;
                }
            }
        }
        FUN_1401429a0(lVar7);
        *(undefined * )(lVar17 + 0x50) = 0;
        lVar7 = *(longlong * )(lVar2 + 0x60);
        local_res20[0] = 0;
        for (; lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x38)) {
            pwVar14 = L"MergeLeft";
            pwVar3 = (wchar_t *) FUN_1401a4f40(lVar7 + 8);
            if (pwVar3 == L"MergeLeft") {
                LAB_140163ae5:
                if (lVar7 != 0) {
                    uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                    iVar12 = FUN_1407df428(uVar8, &DAT_1409e4114, local_res20);
                    if (iVar12 == 1) {
                        *(bool *) (lVar17 + 0x50) = local_res20[0] != 0;
                    }
                }
                break;
            }
            iVar12 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar14 == L'\0') || (*pwVar3 != *pwVar14)) || (0x7ffffffe < iVar12)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar14 = pwVar14 + 1;
                    iVar12 = iVar12 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar12 == 0x7fffffff) goto LAB_140163ae5;
            }
            if ((*pwVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_140163ae5;
        }
        lVar7 = *(longlong * )(lVar2 + 0x60);
        local_68 = 1;
        for (; lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x38)) {
            pwVar14 = L"SimpleSort";
            pwVar3 = (wchar_t *) FUN_1401a4f40(lVar7 + 8);
            if (pwVar3 == L"SimpleSort") {
                LAB_140163ba7:
                if (lVar7 != 0) {
                    uVar8 = FUN_1401a4f40(lVar7 + 0x20);
                    iVar12 = FUN_1407df428(uVar8, &DAT_1409e4114, &local_68);
                    if (iVar12 == 1) {
                        *(bool *) (lVar17 + 0x51) = local_68 != 0;
                    }
                }
                break;
            }
            iVar12 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar14 == L'\0') || (*pwVar3 != *pwVar14)) || (0x7ffffffe < iVar12)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar14 = pwVar14 + 1;
                    iVar12 = iVar12 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar12 == 0x7fffffff) goto LAB_140163ba7;
            }
            if ((*pwVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_140163ba7;
        }
        for (lVar17 = *(longlong * )(lVar2 + 0x60); lVar17 != 0; lVar17 = *(longlong * )(lVar17 + 0x38)) {
            pwVar14 = L"MinWidth";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"MinWidth") {
                LAB_140163c4c:
                if (lVar17 != 0) {
                    uVar8 = FUN_1401a4f40(lVar17 + 0x20);
                    FUN_1407df428(uVar8, &DAT_1409e4114, lVar4 + 0x44);
                }
                break;
            }
            iVar12 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar14 == L'\0') || (*pwVar3 != *pwVar14)) || (0x7ffffffe < iVar12)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar14 = pwVar14 + 1;
                    iVar12 = iVar12 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar12 == 0x7fffffff) goto LAB_140163c4c;
            }
            if ((*pwVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_140163c4c;
        }
        for (lVar17 = *(longlong * )(lVar2 + 0x60); lVar17 != 0; lVar17 = *(longlong * )(lVar17 + 0x38)) {
            pwVar14 = L"MaxWidth";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"MaxWidth") {
                LAB_140163ce4:
                if (lVar17 != 0) {
                    uVar8 = FUN_1401a4f40(lVar17 + 0x20);
                    FUN_1407df428(uVar8, &DAT_1409e4114, lVar4 + 0x48);
                }
                break;
            }
            iVar12 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar14 == L'\0') || (*pwVar3 != *pwVar14)) || (0x7ffffffe < iVar12)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar14 = pwVar14 + 1;
                    iVar12 = iVar12 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar12 == 0x7fffffff) goto LAB_140163ce4;
            }
            if ((*pwVar3 == L'\0') && (*pwVar14 == L'\0')) goto LAB_140163ce4;
        }
        uVar20 = uVar20 + 1;
        lVar2 = FUN_1401a5bc0(lVar2);
        uVar16 = (ulonglong)(iVar21 + 1);
        if (lVar2 == 0) {
            return (ulonglong)(iVar21 + 1);
        }
    } while (true);
}


void FUN_140165440(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.GridWindow", 0x11);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_1401654b0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x1401654c0;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140165501;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_AddRow_140c57cc0 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 0x28);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016558f;
    LuaElementLoaderOrSo(lVar2, "Apollo.GridWindow");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_1401655b1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_1401655cd:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1401655cd;
        if (iVar1 == 7) goto LAB_1401655b1;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_1401655cd;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401655fc;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140165622;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016566a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016568f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401656b3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401656d4;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401656f9;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016573c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140165761;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_1401657c9:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14016579a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1401657c9;
        if (iVar1 != 8) goto LAB_14016579a;
    }
    uVar14 = *puVar12;
    LAB_14016579a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401657ac;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401657bc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_1401657e0(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if ((lVar1 == 0) || ((*(byte * )(lVar1 + 0x1b0) >> 6 & 1) == 0)) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, &DAT_140a366a8, pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140165880(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    pdVar2 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar3 + 0x488);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1401658c0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    pdVar2 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar3 + 0x478);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140165900(longlong param_1) {
    undefined8 *puVar1;
    uint *puVar2;
    double *pdVar3;
    char cVar4;
    undefined8 uVar5;
    int local_res8;
    int local_resc;
    undefined4 local_res10;
    undefined4 local_res14;

    uVar5 = FUN_1401657e0();
    local_res10 = FUN_140056d60(param_1, 2);
    local_res14 = FUN_140056d60(param_1, 3);
    cVar4 = FUN_140161cd0(uVar5, &local_res10, &local_resc, &local_res8);
    if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
        *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 * )(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "bValidCell", 10);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar4 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140a36714, 4);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) local_resc;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140a36738, 4);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) local_res8;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                  *(longlong * )(param_1 + 0x10) + -0x10);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x20;
    return 1;
}


undefined8 FUN_140165ac0(longlong param_1) {
    uint *puVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    byte bVar5;
    char cVar6;

    lVar4 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar2 = iVar2 + -1;
    iVar3 = FUN_140056d60(param_1, 3);
    bVar5 = (byte) * (undefined8 * )(lVar4 + 0x298);
    if ((bVar5 >> 4 & 1) == 0) {
        if ((bVar5 >> 3 & 1) == 0) {
            if ((*(int *) (lVar4 + 0x408) == iVar2) && (*(int *) (lVar4 + 0x40c) == iVar3 + -1)) {
                cVar6 = '\x01';
                goto LAB_140165b49;
            }
        } else if (*(int *) (lVar4 + 0x408) == iVar2) {
            cVar6 = '\x01';
            goto LAB_140165b49;
        }
        cVar6 = '\0';
    } else {
        cVar6 = *(char *) (*(longlong * )(*(longlong * )(lVar4 + 0x480) + (longlong) iVar2 * 8) + 9);
    }
    LAB_140165b49:
    puVar1 = *(uint * *)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar6 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140165b80(longlong param_1) {
    char cVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    puVar2 = *(uint * *)(param_1 + 0x10);
    cVar1 = *(char *) (lVar3 + 0x428);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar1 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140165bc0(longlong param_1) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;

    lVar3 = FUN_1401657e0();
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 * *)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60();
    } else {
        iVar1 = 0;
    }
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    iVar2 = 0;
    if (((puVar5 < *(undefined8 * *)(param_1 + 0x10)) && (iVar2 = 0, puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x28))) {
        iVar2 = FUN_140056d60();
    }
    iVar4 = *(int *) (lVar3 + 0x488) + -1;
    if (iVar1 + -1 < iVar4) {
        iVar4 = iVar1 + -1;
    }
    iVar1 = -1;
    if (-1 < iVar4) {
        iVar1 = iVar4;
    }
    iVar4 = *(int *) (lVar3 + 0x478) + -1;
    *(int *) (lVar3 + 0x408) = iVar1;
    *(int *) (lVar3 + 0x410) = iVar1;
    if (iVar2 + -1 < iVar4) {
        iVar4 = iVar2 + -1;
    }
    iVar1 = -1;
    if (-1 < iVar4) {
        iVar1 = iVar4;
    }
    *(int *) (lVar3 + 0x40c) = iVar1;
    *(int *) (lVar3 + 0x414) = iVar1;
    return 0;
}


undefined8 FUN_140165fd0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    iVar1 = *(int *) (lVar3 + 0x408);
    if (iVar1 == -1) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (iVar1 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140166030(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar2 = iVar2 + -1;
    if ((-1 < iVar2) && (iVar2 < *(int *) (lVar3 + 0x478))) {
        if ((iVar2 == 0) &&
            (((*(byte * )(lVar3 + 0x298) & 1) == 0 || (*(longlong * )(lVar3 + 0x478) == 1)))) {
            iVar2 = *(int *) (lVar3 + 0x2d4) - *(int *) (lVar3 + 0x2cc);
        } else {
            iVar2 = *(int *) (*(longlong * )(*(longlong * )(lVar3 + 0x470) + (longlong) iVar2 * 8) + 4);
        }
        if (0 < iVar2) {
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar2;
            goto LAB_1401660bc;
        }
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    LAB_1401660bc:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1401660e0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    iVar1 = *(int *) (lVar3 + 0x40c);
    if (iVar1 == -1) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (iVar1 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140166140(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    iVar1 = *(int *) (lVar3 + 0x424);
    if (iVar1 == -1) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (iVar1 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1401661a0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    iVar1 = *(int *) (lVar3 + 0x410);
    if (iVar1 == -1) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (iVar1 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140166200(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401657e0();
    iVar1 = *(int *) (lVar3 + 0x414);
    if (iVar1 == -1) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (iVar1 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140166260(undefined8 param_1) {
    int iVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined local_28[8];
    longlong local_20;

    uVar2 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    uVar3 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_28, uVar3);
    FUN_14015eff0(uVar2, iVar1 + -1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_1401662e0(undefined8 param_1) {
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar3 = FUN_140056d60(param_1, 3);
    iVar2 = iVar2 + -1;
    if ((-1 < iVar2) && (iVar2 < *(int *) (lVar4 + 0x468))) {
        lVar1 = *(longlong * )(*(longlong * )(lVar4 + 0x470) + (longlong) iVar2 * 8);
        iVar2 = *(int *) (lVar1 + 0xc);
        if (iVar3 < *(int *) (lVar1 + 0xc)) {
            iVar2 = iVar3;
        }
        iVar3 = *(int *) (lVar1 + 8);
        if (*(int *) (lVar1 + 8) < iVar2) {
            iVar3 = iVar2;
        }
        *(int *) (lVar1 + 4) = iVar3;
        FUN_14015f180(lVar4);
    }
    return 0;
}


undefined8 FUN_140166430(undefined8 param_1) {
    short sVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    undefined local_28[8];
    short *local_20;

    lVar4 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar3 = FUN_140056d60(param_1, 3);
    iVar3 = iVar3 + -1;
    uVar5 = FUN_140056bb0(param_1, 4);
    FUN_14018f2d0(local_28, uVar5);
    iVar2 = iVar2 + -1;
    if ((((-1 < iVar2) && (iVar2 < *(int *) (lVar4 + 0x488))) && (-1 < iVar3)) &&
        (iVar3 < *(int *) (lVar4 + 0x478))) {
        lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x480) + (longlong) iVar2 * 8);
        lVar6 = 0;
        lVar7 = lVar6;
        if (iVar3 < *(int *) (lVar4 + 0x18)) {
            lVar7 = *(longlong * )(*(longlong * )(lVar4 + 0x10) + (longlong) iVar3 * 8);
        }
        psVar8 = &DAT_140b7b704;
        if (local_20 != (short *) 0x0) {
            psVar8 = local_20;
        }
        sVar1 = *psVar8;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar8[lVar6];
        }
        FUN_14001c480(lVar7 + 0x10, psVar8, psVar8 + lVar6);
    }
    if (local_20 != (short *) 0x0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140166520(undefined8 param_1) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong *plVar5;
    undefined local_28[8];
    longlong local_20;

    lVar3 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    iVar2 = FUN_140056d60(param_1, 3);
    iVar2 = iVar2 + -1;
    uVar4 = FUN_140056bb0(param_1, 4);
    FUN_14018f2d0(local_28, uVar4);
    iVar1 = iVar1 + -1;
    if ((((-1 < iVar1) && (iVar1 < *(int *) (lVar3 + 0x488))) && (-1 < iVar2)) &&
        (iVar2 < *(int *) (lVar3 + 0x478))) {
        lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar1 * 8);
        if (iVar2 < *(int *) (lVar3 + 0x18)) {
            plVar5 = *(longlong * *)(*(longlong * )(lVar3 + 0x10) + (longlong) iVar2 * 8);
        } else {
            plVar5 = (longlong *) 0x0;
        }
        if (*(longlong * )(*plVar5 + 0x20) != 0) {
            FUN_140109710(plVar5 + 0xe, *(longlong * )(*plVar5 + 0x20) + 0xf0, local_20, 0);
        }
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140166610(undefined8 param_1) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint *puVar6;
    uint local_res10[2];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar3 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    iVar2 = FUN_140056d60(param_1, 3);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    iVar2 = iVar2 + -1;
    FUN_140143880(local_res10, param_1, 4, &local_18);
    iVar1 = iVar1 + -1;
    uVar5 = (ulonglong) local_res10[0];
    lVar4 = DAT_140c63678;
    if ((((-1 < iVar1) && (iVar1 < *(int *) (lVar3 + 0x488))) && (-1 < iVar2)) &&
        (iVar2 < *(int *) (lVar3 + 0x478))) {
        lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar1 * 8);
        if (iVar2 < *(int *) (lVar3 + 0x18)) {
            lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x10) + (longlong) iVar2 * 8);
        } else {
            lVar3 = 0;
        }
        puVar6 = (uint * )(lVar3 + 0xa4);
        if (puVar6 != local_res10) {
            FUN_1401429a0(DAT_140c63678, *puVar6);
            lVar4 = DAT_140c63678;
            *puVar6 = local_res10[0];
            if (uVar5 < *(ulonglong * )(lVar4 + 0x30)) {
                lVar3 = *(longlong * )(lVar4 + 0x28) + uVar5 * 0x20;
                iVar1 = *(int *) (lVar3 + 0x10);
                if (iVar1 - 1U < 0xfffffffe) {
                    *(int *) (lVar3 + 0x10) = iVar1 + 1;
                }
            }
        }
    }
    FUN_1401429a0(lVar4, uVar5);
    return 0;
}


undefined8 FUN_140166730(undefined8 param_1) {
    longlong lVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined local_2a8[8];
    longlong local_2a0;
    longlong local_298;
    undefined local_288[640];

    lVar5 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar2 = iVar2 + -1;
    iVar3 = FUN_140056d60(param_1, 3);
    iVar3 = iVar3 + -1;
    uVar6 = FUN_140056bb0(param_1, 4);
    FUN_14018f2d0(local_2a8, uVar6);
    FUN_1401a72e0(local_288);
    iVar4 = FUN_1401a7a60(local_288, local_2a0, local_298 - local_2a0 >> 1);
    if (iVar4 < 0) {
        FUN_140056570(param_1, 4, "invalid xml string");
    } else if ((((-1 < iVar2) && (iVar2 < *(int *) (lVar5 + 0x488))) && (-1 < iVar3)) &&
               ((iVar3 < *(int *) (lVar5 + 0x478) &&
                 (lVar5 = *(longlong * )(*(longlong * )(lVar5 + 0x480) + (longlong) iVar2 * 8), lVar5 != 0)))
            ) {
        if ((iVar3 < *(int *) (lVar5 + 0x18)) &&
            (lVar1 = *(longlong * )(*(longlong * )(lVar5 + 0x10) + (longlong) iVar3 * 8), lVar1 != 0)) {
            FUN_14015cfa0(lVar1, local_288);
        } else {
            FUN_14015d3a0(lVar5, iVar3, local_288);
        }
    }
    FUN_1401a76a0(local_288);
    if (local_2a0 != 0) {
        FUN_14018b900(local_2a0, 0);
    }
    return 0;
}


undefined8 FUN_140166870(longlong param_1) {
    undefined uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar3 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    iVar2 = iVar2 + -1;
    puVar4 = &DAT_140a12138;
    if (puVar5 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar4 = puVar5;
    }
    if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
        uVar1 = 0;
    } else {
        uVar1 = 1;
    }
    if (((-1 < iVar2) && (iVar2 < *(int *) (lVar3 + 0x488))) &&
        (lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar2 * 8), lVar3 != 0)) {
        *(undefined * )(lVar3 + 8) = uVar1;
    }
    return 0;
}


undefined8 FUN_140166900(undefined8 param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    iVar2 = FUN_140056d60(param_1, 3);
    iVar2 = iVar2 + -1;
    iVar3 = FUN_140056d60(param_1, 4);
    iVar1 = iVar1 + -1;
    if ((((-1 < iVar1) && (iVar1 < *(int *) (lVar4 + 0x488))) && (-1 < iVar2)) &&
        (((iVar2 < *(int *) (lVar4 + 0x478) &&
           (lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x480) + (longlong) iVar1 * 8), lVar4 != 0)) &&
          ((iVar2 < *(int *) (lVar4 + 0x18) &&
            (lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x10) + (longlong) iVar2 * 8), lVar4 != 0)))))) {
        *(bool *) (lVar4 + 8) = iVar3 != 0;
    }
    return 0;
}


undefined8 FUN_140166a10(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    iVar3 = *(int *) (lVar2 + 0x478) + -1;
    if (iVar1 + -1 < iVar3) {
        iVar3 = iVar1 + -1;
    }
    iVar1 = -1;
    if (-1 < iVar3) {
        iVar1 = iVar3;
    }
    *(int *) (lVar2 + 0x40c) = iVar1;
    *(int *) (lVar2 + 0x414) = iVar1;
    return 0;
}


undefined8 FUN_140166a70(longlong param_1) {
    undefined uVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    uVar3 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    puVar4 = &DAT_140a12138;
    if (puVar5 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar4 = puVar5;
    }
    if ((*(int *) (puVar4 + 1) == 0) || ((*(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
        uVar1 = 0;
    } else {
        uVar1 = 1;
    }
    FUN_140163460(uVar3, iVar2 + -1, uVar1);
    return 0;
}


undefined8 FUN_140166af0(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar5 = FUN_1401657e0();
    uVar6 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar6);
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    if (((puVar8 < *(undefined8 * *)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x28))) {
        puVar7 = (undefined *) FUN_140056bb0(param_1, 3);
    } else {
        puVar7 = &DAT_1409d05af;
    }
    FUN_14018f2d0(local_48, puVar7);
    puVar8 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = 0xfffffffe;
    if (3 < (int) ((longlong) puVar8 - *(longlong * )(param_1 + 0x18) >> 4)) {
        puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
        puVar9 = &DAT_140a12138;
        if (puVar1 < puVar8) {
            puVar9 = puVar1;
        }
        *puVar8 = *puVar9;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar9 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    iVar4 = FUN_14015fd10(uVar5, local_20, local_40, 0, uVar3);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) (iVar4 + 1);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140166c30(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined *puVar8;
    undefined local_c8[8];
    longlong local_c0;
    undefined8 local_b8;
    undefined local_a8[8];
    longlong local_a0;
    undefined local_88[8];
    longlong local_80;
    undefined local_68[8];
    longlong local_60;
    undefined4 local_48;
    uint local_34;
    undefined local_28[8];
    longlong local_20;
    undefined8 local_18;

    lVar5 = FUN_1401657e0();
    if (lVar5 == 0) {
        return 0;
    }
    uVar6 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar6);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    if (((puVar7 < *(undefined8 * *)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x28))) {
        puVar8 = (undefined *) FUN_140056bb0(param_1, 3);
    } else {
        puVar8 = &DAT_1409d05ae;
    }
    FUN_14018f2d0(local_c8, puVar8);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    if (((puVar7 < *(undefined8 * *)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x38))) {
        local_48 = FUN_140056d60(param_1, 4);
    } else {
        local_48 = 10;
    }
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
    if (((puVar7 < *(undefined8 * *)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x48))) {
        puVar8 = (undefined *) FUN_140056bb0(param_1, 5);
    } else {
        puVar8 = &DAT_1409d05df;
    }
    FUN_14018f2d0(local_a8, puVar8);
    FUN_14015cbe0(local_88);
    FUN_14001c480(local_88, local_20, local_18);
    FUN_14001c480(local_68, local_c0, local_b8);
    uVar3 = FUN_140142170(DAT_140c63678);
    FUN_1401429a0(DAT_140c63678);
    lVar2 = DAT_140c63678;
    if ((ulonglong) uVar3 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        iVar4 = *(int *) ((ulonglong) uVar3 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
        if (iVar4 - 1U < 0xfffffffe) {
            *(int *) ((ulonglong) uVar3 * 0x20 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) = iVar4 + 1;
        }
    }
    local_34 = uVar3;
    FUN_1401429a0(lVar2, (ulonglong) uVar3);
    iVar4 = FUN_14015f870(lVar5, local_88);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar4;
    lVar5 = DAT_140c63678;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    FUN_1401429a0(lVar5, uVar3);
    if (local_60 != 0) {
        FUN_14018b900(local_60, 0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80, 0);
    }
    if (local_a0 != 0) {
        FUN_14018b900(local_a0, 0);
    }
    if (local_c0 != 0) {
        FUN_14018b900(local_c0, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140166eb0(void) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    lVar1 = FUN_1401657e0();
    if (lVar1 != 0) {
        iVar3 = 0;
        if (0 < *(int *) (lVar1 + 0x478)) {
            lVar2 = 0;
            do {
                if (*(longlong * )(lVar2 + *(longlong * )(lVar1 + 0x470)) != 0) {
                    FUN_14015ee20();
                }
                iVar3 = iVar3 + 1;
                lVar2 = lVar2 + 8;
            } while (iVar3 < *(int *) (lVar1 + 0x478));
        }
        FUN_1400523e0(lVar1 + 0x470);
        *(undefined8 * )(lVar1 + 0x468) = 0;
        FUN_1401601d0(lVar1);
    }
    return 0;
}


undefined8 FUN_140166f40(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined *puVar8;
    undefined8 *puVar9;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    lVar5 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar2 = iVar2 + -1;
    iVar3 = FUN_140056d60(param_1, 3);
    iVar3 = iVar3 + -1;
    uVar6 = FUN_140056bb0(param_1, 4);
    FUN_14018f2d0(local_48, uVar6);
    puVar7 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
    if (((puVar7 < *(undefined8 * *)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x48))) {
        puVar8 = (undefined *) FUN_140056bb0(param_1, 5);
    } else {
        puVar8 = &DAT_1409d05de;
    }
    FUN_14018f2d0(local_28, puVar8);
    puVar7 = *(undefined8 * *)(param_1 + 0x10);
    uVar4 = 0xfffffffe;
    if (5 < (int) ((longlong) puVar7 - *(longlong * )(param_1 + 0x18) >> 4)) {
        puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x50);
        puVar9 = &DAT_140a12138;
        if (puVar1 < puVar7) {
            puVar9 = puVar1;
        }
        *puVar7 = *puVar9;
        *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar9 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
    }
    if (((-1 < iVar2) && (iVar2 < *(int *) (lVar5 + 0x488))) &&
        ((-1 < iVar3 && (iVar3 < *(int *) (lVar5 + 0x478))))) {
        FUN_14015d4f0(*(undefined8 * )(*(longlong * )(lVar5 + 0x480) + (longlong) iVar2 * 8), iVar3, local_40,
                      lVar5 + 0x8a0, local_20, 0, uVar4);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    return 0;
}


undefined8 FUN_140167270(longlong param_1) {
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar3 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    iVar2 = FUN_140056d60(param_1, 3);
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    if (((puVar5 < *(undefined8 * *)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x38))) {
        puVar4 = (undefined *) FUN_140056bb0(param_1, 4);
    } else {
        puVar4 = &DAT_1409d060f;
    }
    FUN_14018f2d0(local_28, puVar4);
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
    if (((puVar5 < *(undefined8 * *)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x48))) {
        puVar4 = (undefined *) FUN_140056bb0(param_1, 5);
    } else {
        puVar4 = &DAT_1409d060e;
    }
    FUN_14018f2d0(local_48, puVar4);
    FUN_14015f0a0(uVar3, iVar1 + -1, iVar2 + -1, local_20, local_40);
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_1401673a0(undefined8 param_1) {
    int iVar1;
    undefined8 uVar2;

    uVar2 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    FUN_140160120(uVar2, iVar1 + -1);
    return 0;
}


undefined8 FUN_1401673e0(void) {
    undefined8 uVar1;

    uVar1 = FUN_1401657e0();
    FUN_1401601d0(uVar1);
    return 0;
}


undefined8 FUN_140167400(longlong param_1) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined local_28[8];
    longlong local_20;

    lVar3 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1);
    puVar5 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    iVar1 = iVar1 + -1;
    if (((puVar5 < *(undefined8 * *)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x28))) {
        iVar2 = FUN_140056d60(param_1);
    } else {
        iVar2 = 1;
    }
    iVar2 = iVar2 + -1;
    if (((-1 < iVar2) && (iVar2 < *(int *) (lVar3 + 0x478))) &&
        ((-1 < iVar1 && (iVar1 < *(int *) (lVar3 + 0x488))))) {
        lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar1 * 8);
        if (iVar2 < *(int *) (lVar3 + 0x18)) {
            lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x10) + (longlong) iVar2 * 8);
        } else {
            lVar3 = 0;
        }
        if (lVar3 != 0) {
            if (*(longlong * *)(lVar3 + 0xc0) == (longlong *) 0x0) {
                puVar4 = &DAT_1409dc2ec;
            } else {
                puVar4 = (undefined * )(**(code * *)(**(longlong * *)(lVar3 + 0xc0) + 0x40))();
                if (puVar4 == (undefined *) 0x0) {
                    return 0;
                }
            }
            lVar3 = FUN_14018f0e0(local_28, puVar4);
            if (*(longlong * )(lVar3 + 8) == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            } else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *) (*(longlong * )(lVar3 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_140167540(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;

    lVar4 = FUN_1401657e0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar2 = iVar2 + -1;
    iVar3 = FUN_140056d60(param_1);
    iVar3 = iVar3 + -1;
    if ((((-1 < iVar3) && (iVar3 < *(int *) (lVar4 + 0x478))) && (-1 < iVar2)) &&
        (iVar2 < *(int *) (lVar4 + 0x488))) {
        lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x480) + (longlong) iVar2 * 8);
        if (iVar3 < *(int *) (lVar4 + 0x18)) {
            lVar4 = *(longlong * )(*(longlong * )(lVar4 + 0x10) + (longlong) iVar3 * 8);
        } else {
            lVar4 = 0;
        }
        if (lVar4 != 0) {
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0),
                                  *(undefined4 * )(lVar4 + 0xb0));
            puVar1 = *(undefined8 * *)(param_1 + 0x10);
            *puVar1 = *puVar5;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar5 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_140167610(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    uint uVar7;
    uint uVar8;
    double dVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    int local_res10;
    int iStackX20;

    lVar2 = FUN_1401657e0();
    uVar8 = 0;
    uVar7 = *(uint * )(lVar2 + 0x488);
    if (uVar7 != 0) {
        uVar10 = 0;
        uVar11 = 0;
        do {
            if ((((*(int *) (lVar2 + 0x478) < 1) || ((int) uVar8 < 0)) ||
                 (*(int *) (lVar2 + 0x488) <= (int) uVar8)) ||
                (lVar4 = *(longlong * )(*(longlong * )(lVar2 + 0x480) + (longlong)(int)
                uVar8 * 8),
            *(int *) (lVar4 + 0x18) < 1)) {
                lVar4 = 0;
            }
            else {
                lVar4 = **(longlong * *)(lVar4 + 0x10);
            }
            iVar1 = *(int *) (lVar4 + 0xb0);
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x20) + 0xa0);
            if (iVar1 - 1U < *(uint * )(lVar4 + 0x38)) {
                puVar5 = (undefined8 * )((longlong)(iVar1 + -1) * 0x10 + *(longlong * )(lVar4 + 0x18));
            } else {
                dVar9 = (double) iVar1;
                if (dVar9 == (double) CONCAT44(uVar11, uVar10)) {
                    puVar5 = *(undefined8 * *)(lVar4 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar9 >> 0x20);
                    local_res10 = SUB84(dVar9, 0);
                    puVar5 = (undefined8 * )
                            (*(longlong * )(lVar4 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte * )(lVar4 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar5 + 3) == 3) && (dVar9 == (double) puVar5[2])) goto LAB_14016770f;
                    puVar5 = (undefined8 *) puVar5[4];
                } while (puVar5 != (undefined8 *) 0x0);
                puVar5 = &DAT_140a12138;
            }
            LAB_14016770f:
            puVar6 = *(undefined8 * *)(param_1 + 0x10);
            *puVar6 = *puVar5;
            *(undefined4 * )(puVar6 + 1) = *(undefined4 * )(puVar5 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar5 = *(undefined8 * *)(param_1 + 0x10);
            puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
            puVar6 = &DAT_140a12138;
            if (puVar3 < puVar5) {
                puVar6 = puVar3;
            }
            if (((puVar6 == &DAT_140a12138) || (puVar5 == (undefined8 * ) & DAT_140a12148)) ||
                ((*(int *) (puVar6 + 1) != *(int *) (puVar5 + -1) || (iVar1 = FUN_14005f0d0(), iVar1 == 0)))) {
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
                uVar8 = uVar8 + 1;
            } else {
                FUN_140160120();
                uVar7 = *(uint * )(lVar2 + 0x488);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
            }
        } while (uVar8 < uVar7);
    }
    return 0;
}


undefined8 FUN_1401677a0(undefined8 param_1) {
    int iVar1;
    int iVar2;
    undefined8 uVar3;

    uVar3 = FUN_1401657e0();
    iVar1 = FUN_140056d60(param_1, 2);
    iVar2 = FUN_140056d60(param_1, 3);
    FUN_140160280(uVar3, iVar1 + -1);
    FUN_1401603f0(uVar3, iVar2 + -1);
    return 0;
}


undefined8 FUN_1401678d0(undefined8 param_1) {
    longlong lVar1;
    undefined8 uVar2;
    undefined4 *puVar3;
    undefined local_78[8];
    longlong local_70;
    undefined8 local_58;
    undefined local_50;
    undefined local_48[16];
    undefined local_38[16];
    undefined local_28[16];
    undefined8 local_18;

    lVar1 = FUN_1401657e0();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_78, uVar2);
    puVar3 = (undefined4 *) FUN_140056ab0(param_1, 3, "CColor");
    local_38 = ZEXT816(0);
    local_58 = 0;
    local_48 = ZEXT816(0);
    local_28 = ZEXT816(0);
    local_50 = 0;
    local_18 = 0;
    FUN_14010b330(&local_58, *(undefined8 * )(lVar1 + 0x20), local_70, 0, *puVar3, puVar3[2]);
    FUN_1400c3730(lVar1 + 0x4b8, &local_58);
    if (local_70 != 0) {
        FUN_14018b900(local_70, 0);
    }
    return 0;
}


void FUN_140167f50(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;

    if (param_2 != 0) {
        lVar4 = FUN_1400e58c0(*(undefined8 * )(param_1 + 0x20));
        *(longlong * )(param_1 + 0x4b0) = lVar4;
        if (lVar4 == 0) {
            *(undefined8 * )(param_1 + 0x4b0) = *(undefined8 * )(param_1 + 0x2b8);
        }
        iVar5 = 0;
        if (0 < *(int *) (param_1 + 0x478)) {
            lVar4 = 0;
            do {
                lVar1 = *(longlong * )(lVar4 + *(longlong * )(param_1 + 0x470));
                if (*(longlong * )(param_1 + 0x4b0) != 0) {
                    plVar2 = *(longlong * *)(lVar1 + 0x10);
                    uVar3 = *(undefined8 * )(*(longlong * )(param_1 + 0x4b0) + 0x60);
                    if (plVar2 == (longlong *) 0x0) {
                        (**(code * *)(*DAT_140c65680 + 0x28))
                                (DAT_140c65680, uVar3, &DAT_1409dc43c, 0xffffffffffffffff, lVar1 + 0x10);
                    } else {
                        (**(code * *)(*plVar2 + 0x28))(plVar2, uVar3);
                    }
                }
                iVar5 = iVar5 + 1;
                lVar4 = lVar4 + 8;
            } while (iVar5 < *(int *) (param_1 + 0x478));
        }
    }
    return;
}


void FUN_140168010(longlong param_1, ulonglong param_2) {
    ulonglong *puVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    int iVar10;
    int iVar11;
    longlong local_res8;
    ulonglong local_res10;
    undefined local_78[8];
    longlong local_70;
    undefined8 local_68;
    undefined local_58[8];
    longlong local_50;
    undefined8 local_48;

    uVar7 = 0;
    iVar10 = 0;
    local_res10 = param_2 & 0xffffffff00000000;
    lVar6 = DAT_140c63678;
    if (0 < *(int *) (param_1 + 0x488)) {
        do {
            iVar5 = *(int *) (param_1 + 0x478);
            iVar11 = 0;
            if (0 < iVar5) {
                local_res8 = 0;
                do {
                    iVar2 = *(int *) (local_res8 + *(longlong * )(param_1 + 0x460));
                    if ((((iVar2 < 0) || (iVar5 <= iVar2)) || (iVar10 < 0)) ||
                        ((*(int *) (param_1 + 0x488) <= iVar10 ||
                          (lVar8 = *(longlong * )(*(longlong * )(param_1 + 0x480) + (longlong) iVar10 * 8),
                                  *(int *) (lVar8 + 0x18) <= iVar2)))) {
                        lVar8 = 0;
                    } else {
                        lVar8 = *(longlong * )(*(longlong * )(lVar8 + 0x10) + (longlong) iVar2 * 8);
                    }
                    puVar1 = (ulonglong * )(lVar8 + 0xa0);
                    if (&local_res10 != puVar1) {
                        FUN_1401429a0(lVar6);
                        lVar6 = DAT_140c63678;
                        uVar3 = *(uint *) puVar1;
                        uVar7 = (ulonglong) uVar3;
                        local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong) uVar3;
                        if (uVar7 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                            lVar8 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) uVar3 * 0x20;
                            iVar5 = *(int *) (lVar8 + 0x10);
                            if (iVar5 - 1U < 0xfffffffe) {
                                *(int *) (lVar8 + 0x10) = iVar5 + 1;
                            }
                        }
                    }
                    FUN_140142e30(lVar6, local_58, &local_res10);
                    FUN_140142e30(DAT_140c63678, local_78, &local_res10);
                    lVar4 = local_50;
                    lVar8 = local_70;
                    iVar5 = FUN_1400454d0(local_50, local_48, local_70, local_68);
                    lVar6 = DAT_140c63678;
                    if ((iVar5 == 0) && (puVar1 != (ulonglong * )(param_1 + 0x8a0))) {
                        FUN_1401429a0(DAT_140c63678);
                        lVar6 = DAT_140c63678;
                        uVar3 = *(uint * )(ulonglong * )(param_1 + 0x8a0);
                        *(uint *) puVar1 = uVar3;
                        if ((ulonglong) uVar3 < *(ulonglong * )(lVar6 + 0x30)) {
                            lVar9 = *(longlong * )(lVar6 + 0x28) + (ulonglong) uVar3 * 0x20;
                            iVar5 = *(int *) (lVar9 + 0x10);
                            if (iVar5 - 1U < 0xfffffffe) {
                                *(int *) (lVar9 + 0x10) = iVar5 + 1;
                            }
                        }
                    }
                    if (lVar8 != 0) {
                        FUN_14018b900(lVar8);
                        lVar6 = DAT_140c63678;
                    }
                    if (lVar4 != 0) {
                        FUN_14018b900(lVar4);
                        lVar6 = DAT_140c63678;
                    }
                    iVar5 = *(int *) (param_1 + 0x478);
                    iVar11 = iVar11 + 1;
                    local_res8 = local_res8 + 4;
                } while (iVar11 < iVar5);
            }
            iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *) (param_1 + 0x488));
    }
    FUN_1401429a0(lVar6, uVar7);
    return;
}


void FUN_140168590(longlong param_1, uint *param_2) {
    uint *puVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;

    puVar1 = (uint * )(param_1 + 0x5a4);
    if (puVar1 != param_2) {
        FUN_1401429a0(DAT_140c63678, *puVar1);
        uVar2 = *param_2;
        *puVar1 = uVar2;
        if ((ulonglong) uVar2 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
            lVar4 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) uVar2 * 0x20;
            iVar3 = *(int *) (lVar4 + 0x10);
            if (iVar3 - 1U < 0xfffffffe) {
                *(int *) (lVar4 + 0x10) = iVar3 + 1;
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_140168600(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
              undefined8 param_5, undefined8 param_6) {
    uint uVar1;
    uint uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined(*pauVar5)[16];
    longlong lVar6;
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Ba_00;
    undefined extraout_XMM0_Ba_01;
    undefined extraout_XMM0_Ba_02;
    undefined extraout_XMM0_Ba_03;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bb_00;
    undefined extraout_XMM0_Bb_01;
    undefined extraout_XMM0_Bb_02;
    undefined extraout_XMM0_Bb_03;
    undefined extraout_XMM0_Bc;
    undefined uVar7;
    undefined extraout_XMM0_Bc_00;
    undefined extraout_XMM0_Bc_01;
    undefined extraout_XMM0_Bc_02;
    undefined extraout_XMM0_Bc_03;
    undefined uVar8;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Bd_00;
    undefined extraout_XMM0_Bd_01;
    undefined extraout_XMM0_Bd_02;
    undefined extraout_XMM0_Bd_03;
    undefined uVar9;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Be_00;
    undefined extraout_XMM0_Be_01;
    undefined extraout_XMM0_Be_02;
    undefined extraout_XMM0_Be_03;
    undefined uVar10;
    undefined extraout_XMM0_Bf;
    undefined uVar11;
    undefined extraout_XMM0_Bf_00;
    undefined extraout_XMM0_Bf_01;
    undefined extraout_XMM0_Bf_02;
    undefined extraout_XMM0_Bf_03;
    undefined uVar12;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bg_00;
    undefined extraout_XMM0_Bg_01;
    undefined extraout_XMM0_Bg_02;
    undefined extraout_XMM0_Bg_03;
    undefined uVar13;
    undefined extraout_XMM0_Bh;
    undefined extraout_XMM0_Bh_00;
    undefined extraout_XMM0_Bh_01;
    undefined extraout_XMM0_Bh_02;
    undefined extraout_XMM0_Bh_03;
    undefined uVar14;
    undefined auVar15[16];
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;
    undefined auVar16[16];
    undefined auVar17[16];
    undefined auVar18[16];

    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b5cd40;
    FUN_1401095e0(param_1 + 0x80);
    FUN_1401095e0(param_1 + 0x86);
    FUN_1401095e0(param_1 + 0x8c);
    FUN_1401095e0(param_1 + 0x92);
    FUN_1401095e0(param_1 + 0x98);
    FUN_1401095e0(param_1 + 0x9e);
    uVar3 = DAT_140c63678;
    auVar15 = _DAT_140b7b6f0;
    uVar1 = CONCAT13(extraout_XMM0_Bd,
                     CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba))) ^
            CONCAT13(extraout_XMM0_Bd,
                     CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba)));
    uVar7 = (undefined)(uVar1 >> 0x10);
    uVar2 = CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be))) ^
            CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be)));
    uVar11 = (undefined)(uVar2 >> 8);
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
    auVar18 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                          SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                           ((char) (uVar2 >> 0x18),
                                                                                                                                            CONCAT114(SUB161(auVar15 >> 0x38, 0),
                                                                                                                                                      SUB1614(auVar15, 0))) >> 0x70, 0),
                                                                                                                            CONCAT113((char) (uVar2 >> 0x10), SUB1613(auVar15, 0)
                                                                                                                            )) >> 0x68, 0),
                                                                                                           CONCAT112(SUB161(auVar15 >> 0x30, 0),
                                                                                                                     SUB1612(auVar15, 0))) >> 0x60, 0),
                                                                                          CONCAT111(uVar11, SUB1611(auVar15, 0))) >> 0x58, 0),
                                                                                  CONCAT110(SUB161(auVar15 >> 0x28, 0),
                                                                                            SUB1610(auVar15, 0)))
                                                                                >> 0x50, 0),
                                                                 CONCAT19((char) uVar2, SUB169(auVar15, 0))) >> 0x48, 0
                                ), CONCAT18(SUB161(auVar15 >> 0x20, 0),
                                            SUB168(auVar15, 0))) >> 0x40, 0),
                                (char) (uVar1 >> 0x18)), (SUB167(auVar15, 0) >> 0x18) << 0x30);
    auVar17 = CONCAT115(CONCAT101(SUB1610(auVar18 >> 0x30, 0), uVar7),
                        (SUB165(auVar15, 0) >> 0x10) << 0x20);
    auVar16 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar17 >> 0x20, 0), (uVar1 >> 8) << 0x18) >> 0x18, 0),
                        (SUB163(auVar15, 0) >> 8) << 0x10);
    auVar15 = CONCAT142(SUB1614(auVar16 >> 0x10, 0), SUB162(auVar15, 0) & 0xff | (ushort)(byte)
    uVar1 << 8
    );
    local_28 = (float) CONCAT13(uVar11, CONCAT12((char) uVar2, SUB162(auVar17 >> 0x20, 0))) * 0.003921569;
    fStack36 = (float) CONCAT13((char) (((ulonglong)(ushort)(uVar1 >> 0x10) << 0x30) >> 0x38),
                                CONCAT12(uVar7, SUB162(auVar16 >> 0x10, 0))) * 0.003921569;
    fStack32 = (float) (SUB164(auVar15, 0) & 0xffff | uVar1 << 0x10) * 0.003921569;
    fStack28 = (float) SUB164(CONCAT214((short) (uVar2 >> 0x10),
                                        CONCAT212(SUB162(auVar18 >> 0x30, 0), SUB1612(auVar15, 0))) >>
                                                                                                    0x60, 0) *
               0.003921569;
    uVar4 = FUN_140141f10(uVar3, &local_28);
    *(undefined4 * )((longlong) param_1 + 0x5a4) = uVar4;
    param_1[0x36] = param_1[0x36] | 8;
    uVar7 = extraout_XMM0_Ba_00;
    uVar11 = extraout_XMM0_Bb_00;
    uVar8 = extraout_XMM0_Bc_00;
    uVar9 = extraout_XMM0_Bd_00;
    uVar10 = extraout_XMM0_Be_00;
    uVar12 = extraout_XMM0_Bf_00;
    uVar13 = extraout_XMM0_Bg_00;
    uVar14 = extraout_XMM0_Bh_00;
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0x80, param_1[4] + 0xf0, param_4, 0);
        uVar7 = extraout_XMM0_Ba_01;
        uVar11 = extraout_XMM0_Bb_01;
        uVar8 = extraout_XMM0_Bc_01;
        uVar9 = extraout_XMM0_Bd_01;
        uVar10 = extraout_XMM0_Be_01;
        uVar12 = extraout_XMM0_Bf_01;
        uVar13 = extraout_XMM0_Bg_01;
        uVar14 = extraout_XMM0_Bh_01;
    }
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0x86, param_1[4] + 0xf0, param_5, 0);
        uVar7 = extraout_XMM0_Ba_02;
        uVar11 = extraout_XMM0_Bb_02;
        uVar8 = extraout_XMM0_Bc_02;
        uVar9 = extraout_XMM0_Bd_02;
        uVar10 = extraout_XMM0_Be_02;
        uVar12 = extraout_XMM0_Bf_02;
        uVar13 = extraout_XMM0_Bg_02;
        uVar14 = extraout_XMM0_Bh_02;
    }
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0x92, param_1[4] + 0xf0, param_6, 0);
        uVar7 = extraout_XMM0_Ba_03;
        uVar11 = extraout_XMM0_Bb_03;
        uVar8 = extraout_XMM0_Bc_03;
        uVar9 = extraout_XMM0_Bd_03;
        uVar10 = extraout_XMM0_Be_03;
        uVar12 = extraout_XMM0_Bf_03;
        uVar13 = extraout_XMM0_Bg_03;
        uVar14 = extraout_XMM0_Bh_03;
    }
    *(undefined4 * )(param_1 + 0xa4) = 0;
    *(undefined8 * )((longlong) param_1 + 0x524) = 0x3f800000;
    *(undefined8 * )((longlong) param_1 + 0x52c) = 0x3f800000;
    uVar1 = CONCAT13(uVar14, CONCAT12(uVar13, CONCAT11(uVar12, uVar10))) ^
            CONCAT13(uVar14, CONCAT12(uVar13, CONCAT11(uVar12, uVar10)));
    *(undefined8 * )((longlong) param_1 + 0x534) = 0x40c90fdb;
    *(undefined4 * )(param_1 + 0x58) = 0x25;
    pauVar5 = (undefined(*)[16])(param_1 + 0xa8);
    lVar6 = 4;
    do {
        *pauVar5 = ZEXT816(CONCAT17((char) (uVar1 >> 0x18),
                                    CONCAT16((char) (uVar1 >> 0x10),
                                             CONCAT15((char) (uVar1 >> 8),
                                                      CONCAT14((char) uVar1,
                                                               CONCAT13(uVar9, CONCAT12(uVar8, CONCAT11(
                                                                       uVar11, uVar7))) ^
                                                               CONCAT13(uVar9, CONCAT12(uVar8, CONCAT11(uVar11,
                                                                                                        uVar7))))))));
        pauVar5 = pauVar5[1];
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined4 * )((longlong) param_1 + 0x594) = *(undefined4 * )((longlong) param_1 + 0x2cc);
    *(undefined4 * )(param_1 + 0xb3) = *(undefined4 * )(param_1 + 0x5a);
    *(undefined4 * )((longlong) param_1 + 0x59c) = *(undefined4 * )((longlong) param_1 + 0x2d4);
    *(undefined4 * )(param_1 + 0xb4) = *(undefined4 * )(param_1 + 0x5b);
    return param_1;
}


undefined8 FUN_140168810(undefined8 param_1, ulonglong param_2) {
    FUN_140168850();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140168850(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5cd40;
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x5a4));
    lVar1 = param_1[0xb0];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *) param_1[0x9e] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9e] + 8))();
        param_1[0x9e] = 0;
    }
    if (param_1[0xa1] != 0) {
        FUN_14018b900(param_1[0xa1], 0);
    }
    if ((longlong *) param_1[0x98] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x98] + 8))();
        param_1[0x98] = 0;
    }
    if (param_1[0x9b] != 0) {
        FUN_14018b900(param_1[0x9b], 0);
    }
    if ((longlong *) param_1[0x92] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x92] + 8))();
        param_1[0x92] = 0;
    }
    if (param_1[0x95] != 0) {
        FUN_14018b900(param_1[0x95], 0);
    }
    if ((longlong *) param_1[0x8c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8c] + 8))();
        param_1[0x8c] = 0;
    }
    if (param_1[0x8f] != 0) {
        FUN_14018b900(param_1[0x8f], 0);
    }
    if ((longlong *) param_1[0x86] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    if (param_1[0x89] != 0) {
        FUN_14018b900(param_1[0x89], 0);
    }
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if (param_1[0x83] != 0) {
        FUN_14018b900(param_1[0x83], 0);
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_1401689b0(longlong *param_1) {
    short *psVar1;
    undefined2 *puVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined local_68[8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    undefined local_48[8];
    longlong local_40;
    undefined8 local_38;
    undefined local_28[8];
    longlong local_20;
    undefined8 local_18;

    if ((*(byte * )(param_1 + 0x53) & 1) != 0) {
        puVar2 = (undefined2 *) FUN_14018b280(0x10);
        lVar4 = 0;
        local_50 = puVar2 + 8;
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        local_60 = puVar2;
        local_58 = puVar2;
        FUN_14018efa0(local_48, L"%.0f / %.0f",
                      (double) (*(float *) (param_1 + 0xa5) + *(float *) (param_1 + 0xa6)),
                      (double) *(float *) ((longlong) param_1 + 0x524));
        if ((*(byte * )(param_1 + 0x53) >> 2 & 1) != 0) {
            puVar3 = (undefined *)
                    FUN_14018efa0(local_28, L"%.0f",
                                  (double) (*(float *) (param_1 + 0xa5) + *(float *) (param_1 + 0xa6)));
            if (puVar3 != local_48) {
                FUN_14001c480(local_48, *(undefined8 * )(puVar3 + 8), *(undefined8 * )(puVar3 + 0x10));
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
        }
        if (((*(byte * )(param_1 + 0x53) >> 1 & 1) != 0) &&
            (FUN_14001c480(local_68, local_40, local_38), puVar2 = local_60,
                    (*(byte * )(param_1 + 0x53) >> 3 & 1) != 0)) {
            do {
                psVar1 = &DAT_1409dcc66 + lVar4;
                lVar4 = lVar4 + 1;
            } while (*psVar1 != 0);
            FUN_14001c310(local_68, &DAT_1409dcc64, &DAT_1409dcc64 + lVar4 * 2);
            puVar2 = local_60;
        }
        if (((*(byte * )(param_1 + 0x53) >> 3 & 1) != 0) && (0.0 < *(float *) ((longlong) param_1 + 0x524))
                ) {
            FUN_14018efa0(local_28, L"%.0f%%",
                          (double) (((*(float *) (param_1 + 0xa5) + *(float *) (param_1 + 0xa6)) * 100.0) /
                                    *(float *) ((longlong) param_1 + 0x524)));
            FUN_14001c310(local_68, local_20, local_18);
            puVar2 = local_60;
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
                puVar2 = local_60;
            }
        }
        (**(code * *)(*param_1 + 0x50))(param_1, puVar2);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (puVar2 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar2, 0);
        }
    }
    return;
}


void FUN_140168bc0(longlong param_1, undefined8 param_2, undefined8 param_3) {
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(param_1 + 0x4f0, *(longlong * )(param_1 + 0x20) + 0xf0, param_3, 0);
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(param_1 + 0x4c0, *(longlong * )(param_1 + 0x20) + 0xf0, param_2, 0);
    }
    return;
}