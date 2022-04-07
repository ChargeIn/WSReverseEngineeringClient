//
// Created by flop on 04.04.22.
//
#include "../../include.h"
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14068a1a0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    double dVar12;
    undefined in_XMM1 [16];
    int local_res8;
    int iStackX12;
    longlong local_98;
    longlong *local_90;
    undefined local_88 [16];
    undefined local_78 [16];
    undefined **local_68;
    int local_60;
    longlong local_58;
    undefined4 local_50;
    undefined local_48 [16];
    longlong local_38;

    plVar9 = (longlong *)0x0;
    local_68 = &PTR_FUN_140b569f0;
    plVar10 = (longlong *)0x0;
    local_90 = (longlong *)0x0;
    lVar11 = 0;
    local_98 = 0;
    local_50 = 1;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar2 = FUN_1400578c0(param_1);
    plVar6 = plVar9;
    local_60 = iVar2;
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent"), lVar5 != 0)) &&
        (*(longlong *)(lVar5 + 8) != 0)) {
        uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
        plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
        if (plVar6 != (longlong *)0x0) {
            plVar7 = (longlong *)(**(code **)(*plVar6 + 0x158))(plVar6,&local_98);
            plVar10 = (longlong *)plVar7[1];
            lVar11 = *plVar7;
            plVar7[1] = 0;
            *plVar7 = 0;
            if (local_98 != 0) {
                (**(code **)(*(longlong *)(local_98 + -0x10) + 8))();
            }
            goto LAB_14068a312;
        }
    }
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent"), lVar5 != 0)) &&
        ((*(longlong *)(lVar5 + 8) != 0 &&
          (plVar7 = *(longlong **)(*(longlong *)(lVar5 + 8) + 8), plVar7 != (longlong *)0x0)))) {
        lVar11 = (**(code **)(*plVar7 + 0x18))();
        FUN_140003460(&local_98,lVar11 + 0x14);
        plVar10 = local_90;
        lVar11 = local_98;
    }
    LAB_14068a312:
    if (plVar10 != (longlong *)0x0) {
        do {
            uVar3 = *(undefined4 *)(lVar11 + (longlong)plVar9 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e98 == 0) && (iVar2 = FUN_14024b720(), -1 < iVar2)) {
                    lVar5 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar3);
                    goto LAB_14068a36d;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar3,DAT_140c63858);
                LAB_14068a36d:
                if (lVar5 != 0) {
                    if ((plVar6 == (longlong *)0x0) ||
                        (iVar2 = FUN_14043e6d0(DAT_140c65898,*(undefined4 *)(plVar6 + 0x3e),
                                               *(undefined4 *)(lVar11 + (longlong)plVar9 * 4),local_88),
                                iVar2 == 0)) {
                        uVar3 = SUB164(in_XMM1,0);
                        in_XMM1 = in_XMM1 & (undefined  [16])0x0;
                        local_78 = CONCAT412(uVar3,*(undefined (*) [12])(lVar5 + 0xc)) &
                                   (undefined  [16])0xffffffffffffffff;
                    }
                    FUN_1400fa3c0(local_48);
                    FUN_1400fb1d0(&local_68);
                    if (local_38 != 0) {
                        FUN_1400579e0();
                    }
                }
            }
            plVar9 = (longlong *)((longlong)plVar9 + 1);
            param_1 = local_58;
            iVar2 = local_60;
        } while (plVar9 < plVar10);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar2 - 1U < *(uint *)(lVar5 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(iVar2 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
    }
    else {
        dVar12 = (double)iVar2;
        if (dVar12 == 0.0) {
            puVar8 = *(undefined8 **)(lVar5 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar5 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_14068a4a1;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_14068a4a1:
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar8;
    uVar3 = *(undefined4 *)(puVar8 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar3,iVar2);
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    return 1;
}



undefined8 FUN_14068ad40(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 8) + 8) + 0x20))();
            plVar3 = (longlong *)FUN_140498a40(DAT_140c65980,uVar1,0);
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x188))(plVar3);
            }
        }
    }
    return 0;
}



undefined8 FUN_14068adb0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar6 = FUN_140056ab0(param_1,1,"Game.PublicEvent"), lVar6 != 0)) &&
        (*(longlong *)(lVar6 + 8) != 0)) {
        uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 8) + 8) + 0x20))();
        plVar7 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
        if ((plVar7 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar7 + 0x68))(plVar7), iVar4 != 0))
        {
            lVar6 = *(longlong *)(plVar7[0x1a] + 0x10);
            if (lVar6 != plVar7[0x1a]) {
                do {
                    iVar4 = FUN_140649870(param_1,*(undefined4 *)(lVar6 + 0x20));
                    if (iVar4 != 0) {
                        FUN_1400fb470(&local_28);
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                        param_1 = local_18;
                    }
                    lVar8 = *(longlong *)(lVar6 + 0x18);
                    if (lVar8 == 0) {
                        lVar8 = *(longlong *)(lVar6 + 8);
                        if (lVar6 == *(longlong *)(lVar8 + 0x18)) {
                            do {
                                lVar6 = lVar8;
                                lVar8 = *(longlong *)(lVar6 + 8);
                            } while (lVar6 == *(longlong *)(lVar8 + 0x18));
                        }
                        if (*(longlong *)(lVar6 + 0x18) != lVar8) {
                            lVar6 = lVar8;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar8 + 0x10); lVar6 = lVar8, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar8 = lVar1;
                        }
                    }
                    uVar2 = local_20;
                } while (lVar6 != plVar7[0x1a]);
            }
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar11 = *(undefined8 **)(param_1 + 0x10);
            *puVar11 = *puVar9;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
            goto LAB_14068af79;
        }
    }
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2)
            ;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    puVar11 = (undefined8 *)(ulonglong)*(uint *)(puVar10 + 1);
    *(uint *)(puVar9 + 1) = *(uint *)(puVar10 + 1);
    LAB_14068af79:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar11,uVar2);
    return 1;
}



undefined8 FUN_14068afb0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar6 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 8) + 8) + 0x20))();
            plVar7 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar7 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar7 + 0x68))(plVar7);
                if (iVar3 != 0) {
                    local_28 = &PTR_FUN_140b569f0;
                    local_10 = 1;
                    local_18 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar1 = *(undefined8 **)(param_1 + 0x10);
                    uVar8 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar1 + 1) = 5;
                    *puVar1 = uVar8;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar2 = FUN_1400578c0(param_1);
                    local_20 = uVar2;
                    uVar4 = (**(code **)(*plVar7 + 0x170))(plVar7);
                    uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
                    FUN_1405f0430(plVar7 + 0x36,&local_28,uVar5,uVar4);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    puVar1 = *(undefined8 **)(param_1 + 0x10);
                    *puVar1 = *puVar9;
                    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400579e0(param_1,puVar1,uVar2);
                    return 1;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b140(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
                if (iVar4 != 0) {
                    iVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)(iVar4 != 0);
                    goto LAB_14068b1db;
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14068b1db:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b410(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x20))();
            plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar4 != (longlong *)0x0) {
                local_28 = &PTR_FUN_140b569f0;
                local_10 = 1;
                local_18 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                local_20 = FUN_1400578c0(param_1);
                uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
                FUN_1405f13f0(&local_28,uVar5);
                lVar3 = local_18;
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
                puVar1 = *(undefined8 **)(lVar3 + 0x10);
                *puVar1 = *puVar6;
                uVar2 = *(undefined4 *)(puVar6 + 1);
                *(undefined4 *)(puVar1 + 1) = uVar2;
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                FUN_1400579e0(lVar3,uVar2,local_20);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b570(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent"), lVar5 != 0)) &&
        (*(longlong *)(lVar5 + 8) != 0)) {
        uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
        plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
        if ((plVar6 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6), iVar4 != 0))
        {
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
            lVar5 = *(longlong *)(plVar6[0x1a] + 0x10);
            if (lVar5 != plVar6[0x1a]) {
                do {
                    iVar4 = FUN_140649870(param_1,*(undefined4 *)(lVar5 + 0x20));
                    if (iVar4 != 0) {
                        FUN_1400fb470(&local_28);
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                        param_1 = local_18;
                    }
                    lVar8 = *(longlong *)(lVar5 + 0x18);
                    if (lVar8 == 0) {
                        lVar8 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar8 + 0x18)) {
                            do {
                                lVar5 = lVar8;
                                lVar8 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar8 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar8) {
                            lVar5 = lVar8;
                        }
                    }
                    else {
                        for (lVar2 = *(longlong *)(lVar8 + 0x10); lVar5 = lVar8, lVar2 != 0;
                             lVar2 = *(longlong *)(lVar2 + 0x10)) {
                            lVar8 = lVar2;
                        }
                    }
                } while (lVar5 != plVar6[0x1a]);
            }
            uVar10 = (ulonglong)local_20;
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar10);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar9;
            uVar3 = *(undefined4 *)(puVar9 + 1);
            *(undefined4 *)(puVar1 + 1) = uVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,uVar3,uVar10 & 0xffffffff);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b750(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x20))();
            plVar5 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b800(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 8) + 8) + 0x20))();
            plVar3 = (longlong *)FUN_140498a40(DAT_140c65980,uVar1,0);
            if (plVar3 != (longlong *)0x0) {
                lVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
                if (*(int *)(lVar2 + 0x1c) != 0) {
                    lVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
                    FUN_140688bf0(param_1,*(undefined4 *)(lVar2 + 0x1c));
                    return 1;
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                goto LAB_14068b8ac;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14068b8ac:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b8d0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
                if (iVar4 != 0) {
                    iVar4 = (**(code **)(*plVar6 + 0xa8))(plVar6);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar4;
                    goto LAB_14068b971;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068b971:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068b990(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 *puVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x20))();
            plVar5 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                if (iVar3 != 0) {
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
                        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                        iVar3 = FUN_140056d60(param_1,2);
                    }
                    else {
                        iVar3 = 1;
                    }
                    iVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,iVar3 + -1);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar3;
                    goto LAB_14068ba75;
                }
            }
        }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 3;
    LAB_14068ba75:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068ba90(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEvent"), lVar3 != 0)) &&
        (*(longlong *)(lVar3 + 8) != 0)) {
        uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x20))();
        plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,uVar1,0);
        if ((plVar4 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4), iVar2 != 0))
        {
            lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
            if (*(int *)(lVar3 + 0x24) != 0) {
                lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
                lVar3 = FUN_14020fd40(*(undefined4 *)(lVar3 + 0x24));
                if (lVar3 == 0) {
                    return 1;
                }
                if ((*(byte *)(lVar3 + 0xc) & 8) != 0) {
                    return 1;
                }
                FUN_1406b91f0(param_1,lVar3);
                return 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            goto LAB_14068bb64;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14068bb64:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068bd60(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    int *piVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x20))();
            plVar5 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                if (iVar3 != 0) {
                    iVar3 = FUN_140056d60(param_1);
                    if (iVar3 < 0xce) {
                        piVar6 = (int *)FUN_1405f8a80((longlong)plVar5 + 0xec);
                        iVar3 = *piVar6;
                    }
                    else {
                        iVar3 = 0;
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar3;
                    goto LAB_14068be18;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14068be18:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068be30(longlong param_1)

{
    uint *puVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    uint uVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x20))();
            plVar5 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                if (iVar3 != 0) {
                    lVar4 = (**(code **)(*plVar5 + 0x18))();
                    if (*(int *)(DAT_140c65898 + 0x6424) == 0) {
                        uVar6 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x28) >> 0xc & 1;
                    }
                    else if (*(int *)(DAT_140c65898 + 0x6424) == 1) {
                        uVar6 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x28) >> 0xd & 1;
                    }
                    else {
                        uVar6 = 0;
                    }
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)(uVar6 != 0);
                    goto LAB_14068bf0c;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14068bf0c:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068bf30(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar6 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) {
            uVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 8) + 8) + 0x20))();
            plVar7 = (longlong *)FUN_140498a40(DAT_140c65980,uVar4,0);
            if (plVar7 != (longlong *)0x0) {
                iVar5 = (**(code **)(*plVar7 + 0x68))(plVar7);
                if (iVar5 != 0) {
                    lVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
                    puVar2 = *(uint **)(param_1 + 0x10);
                    uVar1 = *(uint *)(*(longlong *)(lVar6 + 8) + 0x28);
                    puVar2[2] = 1;
                    *puVar2 = uVar1 >> 0xe & 1;
                    goto LAB_14068bfd2;
                }
            }
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    LAB_14068bfd2:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14068bff0(longlong param_1)

{
    short sVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    undefined **local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;
    undefined local_28 [8];
    longlong local_20;

    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar3 = FUN_140056ab0(param_1,1), lVar3 != 0))
        && (*(longlong *)(lVar3 + 8) != 0)) {
        uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x20))();
        plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2);
        if (plVar4 != (longlong *)0x0) {
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
            lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
            if (*(int *)(lVar3 + 0x2c) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            FUN_1400b6f30(&local_108);
            lVar3 = 0;
            local_38 = (undefined2 *)0x0;
            local_48 = ZEXT816(0);
            local_108 = &PTR_FUN_140b69230;
            puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
            local_38 = puVar5 + 8;
            local_48 = CONCAT88(puVar5,puVar5);
            if (puVar5 != (undefined2 *)0x0) {
                *puVar5 = 0;
            }
            lVar6 = FUN_14018b280(0x60);
            lVar7 = lVar3;
            if (lVar6 != 0) {
                lVar7 = FUN_1404db7e0(lVar6,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            FUN_1400b7480(&local_108,lVar7);
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_f8 != local_f0) {
                    *local_f8 = 0;
                    local_f0 = local_f8;
                }
            }
            else {
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar3 = lVar3 + 1;
                    sVar1 = psVar8[lVar3];
                }
                FUN_14001c480(local_100);
            }
            lVar3 = FUN_1400b7660(&local_108);
            lVar3 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar3 + 8));
            if (*(longlong *)(lVar3 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar7) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            if (local_48._0_8_ != 0) {
                FUN_14018b900(local_48._0_8_,0);
            }
            FUN_1400b7390(&local_108);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068c220(longlong param_1)

{
    uint *puVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 8) + 8) + 0x20))();
            plVar5 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
                uVar3 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x28) >> 0xf & 1;
                goto LAB_14068c293;
            }
        }
    }
    uVar3 = 0;
    LAB_14068c293:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068c2c0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_38;
    undefined4 local_30;

    FUN_1400569b0(param_1,"Game.PublicEventObjective");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"__index",7);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5cc30;
    puVar6 = PTR_DAT_140c5cc30;
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
        local_38 = FUN_140062650(param_1,puVar6);
        local_30 = 4;
        FUN_14005ea50(param_1,uVar4,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"PublicEventObjective",&PTR_DAT_140b6fec0);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventStatus_Inactive",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventStatus_Active",0x18);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventStatus_Failed",0x18);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventStatus_Succeeded",0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveNotificationMode_Normal",0x2b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveNotificationMode_LowTime",0x2c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveNotificationMode_Warn",0x29);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveNotificationMode_Serious",0x2c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveNotificationMode_Critical",0x2d);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveNotificationMode_Achieving",0x2e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveCategory_Main",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveCategory_Optional",0x25);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveCategory_PlayerPath",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4008000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveCategory_Challenge",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillTargetGroup",0x28);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillEventUnit",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_CollectItem",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ActivateTargetGroup",0x2c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ActivateTargetGroupChecklist",0x35);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_Script",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ParticipantsInTriggerVolume",0x34);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_InteractDepot",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4020000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillEventObjectiveUnit",0x2f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ScriptWithoutCount",0x2b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillOtherTeam",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ControlPointDefend",0x2b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_DefendObjectiveUnits",0x2d);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_TimedWin",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillClusterTargetGroup",0x2f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillClusterEventUnit",0x2d);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_KillClusterEventObjectiveUnit",0x36);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_TalkTo",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_TalkToChecklist",0x28);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_Turnstile",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_Exterminate",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ResourcePool",0x25);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_VirtualCollect",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ContestedArea",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_ScriptWithoutMax",0x29);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4038000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_State",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_GatherResource",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403b000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_CapturePointDefend",0x2b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_CapturePoint",0x25);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403f000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_BombDeployment",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4040000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_VictoryPool",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4041000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventObjectiveType_HardMode",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



void FUN_14068d4a0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    lVar1 = *(longlong *)(DAT_140c65988 + 0x30);
    local_res18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar1;
    }
    if (local_res18 == lVar1) {
        FUN_140432d60(param_1,0);
        return;
    }
    FUN_140432d60(param_1,*(undefined8 *)(local_res18 + 0x28));
    return;
}



undefined8 FUN_14068d500(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
            // WARNING: Could not recover jumptable at 0x00014068d54f. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar1 + 8) + 8) + 8),0);
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_14068d560(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (param_1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*param_1 + 0x28))();
        if (lVar2 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
            if (iVar1 != 0) {
                plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
                iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
                if (iVar1 != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_14068db80(longlong param_1)

{
    uint uVar1;
    double *pdVar2;
    longlong lVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
            pdVar2 = *(double **)(param_1 + 0x10);
            uVar1 = **(uint **)(lVar3 + 8);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)(ulonglong)uVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068dc10(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    int *piVar4;
    int local_res10 [6];

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8),0);
            if (plVar3 != (longlong *)0x0) {
                lVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
                if (lVar2 != 0) {
                    iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
                    if (iVar1 != 0) {
                        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
                        iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
                        if ((iVar1 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
                            lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
                            if ((lVar2 != 0) &&
                                ((*(longlong *)(lVar2 + 8) != 0 &&
                                  (*(longlong *)(*(longlong *)(lVar2 + 8) + 8) != 0)))) {
                                piVar4 = (int *)FUN_1403ba420();
                                if ((piVar4 != (int *)0x0) && (local_res10[0] = *piVar4, local_res10[0] != 0)) {
                                    FUN_1403d3470(param_1,local_res10);
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068de40(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                    if (iVar3 != 0) {
                        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
                        iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
                        if (iVar3 != 0) {
                            iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
                            pdVar1 = *(double **)(param_1 + 0x10);
                            *(undefined4 *)(pdVar1 + 1) = 3;
                            *pdVar1 = (double)iVar3;
                            goto LAB_14068df0d;
                        }
                    }
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068df0d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068df30(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                    if (iVar3 != 0) {
                        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
                        iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
                        if (iVar3 != 0) {
                            iVar3 = (**(code **)(*plVar5 + 0xa8))(plVar5);
                            pdVar1 = *(double **)(param_1 + 0x10);
                            *(undefined4 *)(pdVar1 + 1) = 3;
                            *pdVar1 = (double)iVar3;
                            goto LAB_14068e000;
                        }
                    }
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068e000:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068e020(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                    if (iVar3 != 0) {
                        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
                        iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
                        if (iVar3 != 0) {
                            iVar3 = (**(code **)(*plVar5 + 0x180))(plVar5);
                            pdVar1 = *(double **)(param_1 + 0x10);
                            *(undefined4 *)(pdVar1 + 1) = 3;
                            *pdVar1 = (double)iVar3;
                            goto LAB_14068e0f0;
                        }
                    }
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068e0f0:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068e110(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong uVar8;
    longlong lVar9;
    float extraout_XMM0_Da;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar6 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) {
            plVar7 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar6 + 8) + 8) + 8),0);
            if (plVar7 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
                if (lVar6 != 0) {
                    iVar3 = (**(code **)(*plVar7 + 0x150))(plVar7);
                    if (iVar3 != 0x18) {
                        iVar3 = (**(code **)(*plVar7 + 0x150))(plVar7);
                        if (iVar3 != 0x1e) {
                            iVar3 = (**(code **)(*plVar7 + 0x150))(plVar7);
                            lVar6 = *plVar7;
                            if (iVar3 == 0x17) {
                                LAB_14068e1d8:
                                (**(code **)(lVar6 + 0x88))();
                                iVar3 = (int)(extraout_XMM0_Da * 100.0);
                                LAB_14068e1ea:
                                pdVar1 = *(double **)(param_1 + 0x10);
                                *pdVar1 = (double)iVar3;
                                *(undefined4 *)(pdVar1 + 1) = 3;
                            }
                            else {
                                iVar3 = (**(code **)(lVar6 + 0x150))(plVar7);
                                if (iVar3 != 0x1b) {
                                    iVar3 = (**(code **)(*plVar7 + 0x150))(plVar7);
                                    if (iVar3 != 0x20) {
                                        iVar3 = (**(code **)(*plVar7 + 0x1e0))(plVar7);
                                        lVar6 = *plVar7;
                                        if (iVar3 == 0) {
                                            iVar3 = (**(code **)(lVar6 + 0x1d8))(plVar7);
                                            lVar6 = *plVar7;
                                            if (iVar3 != 0) goto LAB_14068e1d8;
                                            iVar3 = (**(code **)(lVar6 + 0x150))(plVar7);
                                            if (iVar3 == 0xd) {
                                                lVar6 = (**(code **)(*plVar7 + 0x148))();
                                                if ((*(uint *)(lVar6 + 8) & 0x4000) == 0) {
                                                    uVar4 = (**(code **)(*plVar7 + 0xa8))();
                                                    pdVar1 = *(double **)(param_1 + 0x10);
                                                    *(undefined4 *)(pdVar1 + 1) = 3;
                                                    *pdVar1 = (double)(uVar4 / 1000);
                                                }
                                                else {
                                                    uVar4 = (**(code **)(*plVar7 + 0x180))();
                                                    uVar8 = (**(code **)(*plVar7 + 0xa8))();
                                                    pdVar1 = *(double **)(param_1 + 0x10);
                                                    *pdVar1 = (double)(int)((float)((uVar8 & 0xffffffff) / (ulonglong)uVar4) *
                                                                            100.0);
                                                    *(undefined4 *)(pdVar1 + 1) = 3;
                                                }
                                                goto LAB_14068e404;
                                            }
                                            lVar9 = (**(code **)(*plVar7 + 0x148))(plVar7);
                                            lVar6 = *plVar7;
                                            if ((*(uint *)(lVar9 + 8) & 0x4000) == 0) {
                                                iVar3 = (**(code **)(lVar6 + 0x98))(plVar7);
                                                goto LAB_14068e1ea;
                                            }
                                        }
                                        uVar4 = (**(code **)(lVar6 + 0xd0))();
                                        if (uVar4 == 0) {
                                            puVar2 = *(undefined8 **)(param_1 + 0x10);
                                            *puVar2 = 0;
                                            *(undefined4 *)(puVar2 + 1) = 3;
                                        }
                                        else {
                                            uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7);
                                            pdVar1 = *(double **)(param_1 + 0x10);
                                            *pdVar1 = (double)((float)(int)((float)(ulonglong)uVar5 * 100.0) /
                                                               (float)(ulonglong)uVar4);
                                            *(undefined4 *)(pdVar1 + 1) = 3;
                                        }
                                        goto LAB_14068e404;
                                    }
                                }
                                uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
                                pdVar1 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar1 + 1) = 3;
                                *pdVar1 = (double)((float)(ulonglong)uVar4 * 0.001);
                            }
                            goto LAB_14068e404;
                        }
                    }
                    puVar2 = *(undefined8 **)(param_1 + 0x10);
                    *puVar2 = 0;
                    *(undefined4 *)(puVar2 + 1) = 3;
                    goto LAB_14068e404;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068e404:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068e420(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                    if (iVar3 != 0) {
                        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
                        iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
                        if (iVar3 != 0) {
                            iVar3 = (**(code **)(*plVar5 + 0x150))(plVar5);
                            if (iVar3 == 0x17) {
                                iVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
                                pdVar1 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar1 + 1) = 3;
                                *pdVar1 = (double)iVar3;
                                goto LAB_14068e505;
                            }
                        }
                    }
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068e505:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068e520(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    double *pdVar7;
    uint uVar8;
    float fVar9;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        LAB_14068e690:
        pdVar7 = *(double **)(param_1 + 0x10);
        *pdVar7 = 0.0;
    }
    else {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) goto LAB_14068e690;
        plVar5 = (longlong *)
                (**(code **)(*DAT_140c65980 + 0x30))
                (DAT_140c65980,
                 **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
        if (plVar5 == (longlong *)0x0) goto LAB_14068e690;
        lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (lVar4 == 0) goto LAB_14068e690;
        iVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
        if (iVar2 == 0) goto LAB_14068e690;
        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
        iVar2 = (**(code **)(*plVar6 + 0x68))(plVar6);
        if (iVar2 == 0) goto LAB_14068e690;
        iVar2 = (**(code **)(*plVar5 + 0x150))(plVar5);
        if (iVar2 != 0x17) goto LAB_14068e690;
        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
        if (plVar6 == (longlong *)0x0) {
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = 0;
            *(undefined4 *)(puVar1 + 1) = 3;
            goto LAB_14068e6a2;
        }
        iVar2 = (**(code **)(*plVar6 + 0x170))(plVar6);
        iVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
        if (iVar3 == 0) {
            iVar3 = (**(code **)(*plVar5 + 0x170))();
            lVar4 = *plVar5;
            if (iVar2 == iVar3) {
                LAB_14068e669:
                fVar9 = (float)(**(code **)(lVar4 + 0x88))(plVar5);
            }
            else {
                uVar8 = (**(code **)(lVar4 + 0x88))();
                fVar9 = (float)(uVar8 ^ 0x80000000);
            }
        }
        else {
            lVar4 = *plVar5;
            if (iVar2 != iVar3) goto LAB_14068e669;
            fVar9 = (float)(**(code **)(lVar4 + 0x88))(plVar5);
            fVar9 = 1.0 - fVar9;
        }
        pdVar7 = *(double **)(param_1 + 0x10);
        *pdVar7 = (double)(fVar9 * 100.0);
    }
    *(undefined4 *)(pdVar7 + 1) = 3;
    LAB_14068e6a2:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068e6c0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_40 = uVar2;
    if (((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
           (lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective"), lVar5 != 0)) &&
          (*(longlong *)(lVar5 + 8) != 0)) &&
         ((plVar6 = (longlong *)
                 (**(code **)(*DAT_140c65980 + 0x30))
                 (DAT_140c65980,
                  **(undefined4 **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 8),0),
                 plVar6 != (longlong *)0x0 && (lVar5 = (**(code **)(*plVar6 + 0x28))(plVar6), lVar5 != 0))))
        && (iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6), iVar3 != 0)) {
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x28))(plVar6);
        iVar3 = (**(code **)(*plVar7 + 0x68))(plVar7);
        if ((iVar3 != 0) && (iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6), iVar3 == 0x1c)) {
            lVar5 = *(longlong *)(plVar6[0x1d] + 0x10);
            lVar8 = param_1;
            if (lVar5 != plVar6[0x1d]) {
                do {
                    local_28 = &PTR_FUN_140b569f0;
                    local_10 = 1;
                    local_18 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar11 = *(undefined8 **)(param_1 + 0x10);
                    uVar4 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar11 + 1) = 5;
                    *puVar11 = uVar4;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    local_20 = FUN_1400578c0(param_1);
                    FUN_140416130();
                    FUN_1400fb1d0(&local_48);
                    FUN_1400579e0(param_1);
                    lVar8 = *(longlong *)(lVar5 + 0x18);
                    if (lVar8 == 0) {
                        lVar8 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar8 + 0x18)) {
                            do {
                                lVar5 = lVar8;
                                lVar8 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar8 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar8) {
                            lVar5 = lVar8;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar8 + 0x10); lVar5 = lVar8, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar8 = lVar1;
                        }
                    }
                    lVar8 = local_38;
                    uVar2 = local_40;
                } while (lVar5 != plVar6[0x1d]);
            }
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),uVar2);
            puVar11 = *(undefined8 **)(lVar8 + 0x10);
            *puVar11 = *puVar9;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
            param_1 = lVar8;
            goto LAB_14068e932;
        }
    }
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2)
            ;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    puVar11 = (undefined8 *)(ulonglong)*(uint *)(puVar10 + 1);
    *(uint *)(puVar9 + 1) = *(uint *)(puVar10 + 1);
    LAB_14068e932:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar11,uVar2);
    return 1;
}



undefined8 FUN_14068ed90(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 8),0);
            if (plVar6 != (longlong *)0x0) {
                lVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
                if (lVar5 != 0) {
                    iVar4 = (**(code **)(*plVar6 + 0x1d8))(plVar6);
                    if (iVar4 == 0) {
                        lVar5 = (**(code **)(*plVar6 + 0x148))(plVar6);
                        bVar3 = 0;
                        if ((*(uint *)(lVar5 + 8) & 0x4000) != 0) goto LAB_14068ee34;
                    }
                    else {
                        LAB_14068ee34:
                        bVar3 = 1;
                    }
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)bVar3;
                    goto LAB_14068ee5d;
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14068ee5d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068ee80(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x1e0))(plVar5);
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)(iVar3 != 0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068ef30(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 8),0);
            if (plVar6 != (longlong *)0x0) {
                lVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
                if (lVar5 != 0) {
                    iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6);
                    if (iVar3 != 0x19) {
                        iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6);
                        if (iVar3 != 0x18) {
                            iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6);
                            if (iVar3 != 0x1e) {
                                iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6);
                                if (iVar3 != 0x1b) {
                                    iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6);
                                    if (iVar3 != 0x20) {
                                        iVar3 = (**(code **)(*plVar6 + 0x1d8))(plVar6);
                                        if (iVar3 == 0) {
                                            iVar3 = (**(code **)(*plVar6 + 0x1e0))(plVar6);
                                            if (iVar3 == 0) {
                                                lVar5 = (**(code **)(*plVar6 + 0x148))(plVar6);
                                                if ((*(uint *)(lVar5 + 8) & 0x4000) == 0) {
                                                    iVar3 = (**(code **)(*plVar6 + 0x150))(plVar6);
                                                    if (iVar3 == 0xd) {
                                                        uVar4 = (**(code **)(*plVar6 + 0x180))();
                                                        pdVar1 = *(double **)(param_1 + 0x10);
                                                        *(undefined4 *)(pdVar1 + 1) = 3;
                                                        *pdVar1 = (double)(uVar4 / 1000);
                                                    }
                                                    else {
                                                        iVar3 = (**(code **)(*plVar6 + 0xd0))();
                                                        pdVar1 = *(double **)(param_1 + 0x10);
                                                        *pdVar1 = (double)iVar3;
                                                        *(undefined4 *)(pdVar1 + 1) = 3;
                                                    }
                                                    goto LAB_14068f12a;
                                                }
                                            }
                                        }
                                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                                        *puVar2 = 0x4059000000000000;
                                        *(undefined4 *)(puVar2 + 1) = 3;
                                        goto LAB_14068f12a;
                                    }
                                }
                                uVar4 = (**(code **)(*plVar6 + 0xd0))(plVar6);
                                pdVar1 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar1 + 1) = 3;
                                *pdVar1 = (double)((float)(ulonglong)uVar4 * 0.001);
                                goto LAB_14068f12a;
                            }
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        *puVar2 = 0;
                        *(undefined4 *)(puVar2 + 1) = 3;
                        goto LAB_14068f12a;
                    }
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 1) = 3;
    *puVar2 = 0;
    LAB_14068f12a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068f200(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                    if (iVar3 != 0) {
                        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
                        iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
                        if (iVar3 != 0) {
                            iVar3 = (**(code **)(*plVar5 + 0x208))(plVar5);
                            pdVar1 = *(double **)(param_1 + 0x10);
                            *(undefined4 *)(pdVar1 + 1) = 3;
                            *pdVar1 = (double)iVar3;
                            goto LAB_14068f2d0;
                        }
                    }
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068f2d0:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_14068fc30(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   undefined8 param_5)

{
    undefined8 *puVar1;
    double *pdVar2;
    undefined *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined *puVar10;
    longlong lVar11;
    undefined local_c8 [8];
    undefined *local_c0;
    longlong local_b8;
    undefined **local_a8;
    undefined4 local_a0;
    undefined4 uStack156;
    longlong local_98;
    undefined4 local_90;
    undefined **local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined local_48 [16];

    local_c0 = (undefined *)FUN_14018b280(0x28);
    local_b8 = 0;
    *local_c0 = 0;
    *(undefined8 *)(local_c0 + 8) = 0;
    *(undefined **)(local_c0 + 0x10) = local_c0;
    *(undefined **)(local_c0 + 0x18) = local_c0;
    FUN_140449b10(param_2);
    if (local_b8 != 0) {
        local_70 = 1;
        local_88 = &PTR_FUN_140b569f0;
        local_78 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar1 + 1) = 5;
        *puVar1 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        local_a8 = &PTR_FUN_140b569f0;
        local_90 = 1;
        local_98 = param_1;
        local_80 = uVar4;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar1 + 1) = 5;
        *puVar1 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_a0 = FUN_1400578c0(param_1);
        puVar10 = *(undefined **)(local_c0 + 0x10);
        lVar6 = param_1;
        if (puVar10 != local_c0) {
            do {
                local_48 = ZEXT816(CONCAT44((float)*(int *)(puVar10 + 0x24),
                                            (float)(int)*(undefined8 *)(puVar10 + 0x20)));
                lVar6 = FUN_1400fa180(&local_68,param_1,local_48);
                FUN_1400fb1d0(&local_a8,*(undefined4 *)(lVar6 + 8));
                local_68 = &PTR_FUN_140b56a08;
                if (local_58 != 0) {
                    FUN_1400579e0();
                }
                puVar7 = *(undefined **)(puVar10 + 0x18);
                if (puVar7 == (undefined *)0x0) {
                    puVar7 = *(undefined **)(puVar10 + 8);
                    if (puVar10 == *(undefined **)(puVar7 + 0x18)) {
                        do {
                            puVar10 = puVar7;
                            puVar7 = *(undefined **)(puVar10 + 8);
                        } while (puVar10 == *(undefined **)(puVar7 + 0x18));
                    }
                    if (*(undefined **)(puVar10 + 0x18) != puVar7) {
                        puVar10 = puVar7;
                    }
                }
                else {
                    for (puVar3 = *(undefined **)(puVar7 + 0x10); puVar10 = puVar7, puVar3 != (undefined *)0x0
                            ; puVar3 = *(undefined **)(puVar3 + 0x10)) {
                        puVar7 = puVar3;
                    }
                }
                lVar6 = local_98;
            } while (puVar10 != local_c0);
        }
        FUN_1400fb2a0(&local_88,L"tHexes",local_a0);
        FUN_1400fa3c0(&local_68,param_1,param_2);
        FUN_1400fb2a0(&local_88,L"tIndicator",local_60);
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar8;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(&local_a8,L"nWorldZoneId");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(lVar9 + lVar11) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_140062650(param_1,lVar9,lVar11);
            *(undefined4 *)(puVar1 + 1) = 4;
            *puVar1 = uVar5;
            uVar4 = local_80;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (CONCAT44(uStack156,local_a0) != 0) {
            FUN_14018b900(CONCAT44(uStack156,local_a0),0);
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)param_4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        FUN_1400fb1d0(param_5,uVar4);
        if (local_58 != 0) {
            FUN_1400579e0();
        }
        if (lVar6 != 0) {
            FUN_1400579e0(lVar6);
        }
        FUN_1400579e0(param_1);
    }
    FUN_140008410(local_c8);
    FUN_14018b900(local_c0,0);
    return;
}



undefined8 FUN_14068fff0(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8),0);
            if (plVar3 != (longlong *)0x0) {
                lVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
                if (lVar2 != 0) {
                    iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
                    if (iVar1 != 0) {
                        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
                        iVar1 = (**(code **)(*plVar4 + 0x68))(plVar4);
                        if (iVar1 != 0) {
                            (**(code **)(*plVar3 + 0x1f8))(plVar3);
                        }
                    }
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1406900a0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            plVar4 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar3 + 8) + 8) + 8),0);
            if (plVar4 != (longlong *)0x0) {
                lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
                if (lVar3 != 0) {
                    iVar2 = (**(code **)(*plVar4 + 0x150))(plVar4);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    goto LAB_14069013e;
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14069013e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690160(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 uVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8),0);
            if (plVar3 != (longlong *)0x0) {
                lVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
                if (lVar2 != 0) {
                    iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
                    if (iVar1 != 0) {
                        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
                        iVar1 = (**(code **)(*plVar4 + 0x68))(plVar4);
                        if (iVar1 != 0) {
                            plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3);
                            uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
                            FUN_140432c80(param_1,uVar5);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690250(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
                    if (iVar3 != 0) {
                        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
                        iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
                        if (iVar3 != 0) {
                            iVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5);
                            puVar1 = *(uint **)(param_1 + 0x10);
                            puVar1[2] = 1;
                            *puVar1 = (uint)(iVar3 != 0);
                            goto LAB_14069031a;
                        }
                    }
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14069031a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690500(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective"), lVar5 != 0)) &&
         (*(longlong *)(lVar5 + 8) != 0)) &&
        (((plVar6 = (longlong *)
                (**(code **)(*DAT_140c65980 + 0x30))
                (DAT_140c65980,
                 **(undefined4 **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 8),0),
                plVar6 != (longlong *)0x0 && (lVar5 = (**(code **)(*plVar6 + 0x28))(plVar6), lVar5 != 0)) &&
          (iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6), iVar3 != 0)))) {
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x28))(plVar6);
        iVar3 = (**(code **)(*plVar7 + 0x68))(plVar7);
        if (iVar3 != 0) {
            lVar5 = *(longlong *)(plVar6[0x14] + 0x10);
            if (lVar5 != plVar6[0x14]) {
                do {
                    iVar3 = FUN_140649870(param_1,*(undefined4 *)(lVar5 + 0x20));
                    if (iVar3 != 0) {
                        FUN_1400fb470(&local_28);
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                        param_1 = local_18;
                    }
                    lVar8 = *(longlong *)(lVar5 + 0x18);
                    if (lVar8 == 0) {
                        lVar8 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar8 + 0x18)) {
                            do {
                                lVar5 = lVar8;
                                lVar8 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar8 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar8) {
                            lVar5 = lVar8;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar8 + 0x10); lVar5 = lVar8, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar8 = lVar1;
                        }
                    }
                    uVar2 = local_20;
                } while (lVar5 != plVar6[0x14]);
            }
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar11 = *(undefined8 **)(param_1 + 0x10);
            *puVar11 = *puVar9;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
            goto LAB_1406906f9;
        }
    }
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2)
            ;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    puVar11 = (undefined8 *)(ulonglong)*(uint *)(puVar10 + 1);
    *(uint *)(puVar9 + 1) = *(uint *)(puVar10 + 1);
    LAB_1406906f9:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar11,uVar2);
    return 1;
}



undefined8 FUN_140690730(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x1e8))();
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)(iVar3 != 0);
                    goto LAB_1406907d1;
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 1;
    puVar2[2] = 1;
    LAB_1406907d1:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406907f0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            plVar5 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar4 + 8) + 8) + 8),0);
            if (plVar5 != (longlong *)0x0) {
                lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
                if (lVar4 != 0) {
                    iVar3 = (**(code **)(*plVar5 + 0x1f0))(plVar5);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar3;
                    goto LAB_140690895;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_140690895:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406908b0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 8),0);
            if (plVar6 != (longlong *)0x0) {
                lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
                if (lVar5 != 0) {
                    bVar3 = 1;
                    iVar4 = (**(code **)(*plVar6 + 0x150))();
                    if ((iVar4 - 0x18U < 2) || (iVar4 == 0x1f)) {
                        bVar3 = 0;
                    }
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)bVar3;
                    goto LAB_140690974;
                }
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 1;
    puVar2[2] = 1;
    LAB_140690974:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690990(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8),0);
            if (plVar3 != (longlong *)0x0) {
                lVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
                if (lVar2 != 0) {
                    iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
                    if (iVar1 != 0) {
                        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
                        iVar1 = (**(code **)(*plVar4 + 0x68))(plVar4);
                        if (iVar1 != 0) {
                            lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
                            if (*(int *)(lVar2 + 0x44) != 0) {
                                lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
                                FUN_14068d4a0(param_1,*(undefined4 *)(lVar2 + 0x44));
                                return 1;
                            }
                            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                            goto LAB_140690a7e;
                        }
                    }
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140690a7e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690aa0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar2 = FUN_140056ab0(param_1,1), lVar2 != 0)
         ) && (*(longlong *)(lVar2 + 8) != 0)) &&
        (((plVar3 = (longlong *)
                (**(code **)(*DAT_140c65980 + 0x30))
                (DAT_140c65980,
                 **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8)),
                plVar3 != (longlong *)0x0 && (lVar2 = (**(code **)(*plVar3 + 0x28))(plVar3), lVar2 != 0)) &&
          (iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3), iVar1 != 0)))) {
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar4 + 0x68))(plVar4);
        if (iVar1 != 0) {
            lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
            if (*(int *)(lVar2 + 0x40) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                goto LAB_140690bfe;
            }
            lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
            lVar2 = FUN_14020fd40(*(undefined4 *)(lVar2 + 0x40));
            if (lVar2 != 0) {
                uVar5 = FUN_14034bdd0();
                lVar2 = FUN_14018f0e0(local_28,uVar5);
                if (*(longlong *)(lVar2 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                }
                else {
                    lVar6 = -1;
                    do {
                        lVar6 = lVar6 + 1;
                    } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
                    FUN_140058710(param_1);
                }
                if (local_20 == 0) {
                    return 1;
                }
                FUN_14018b900(local_20,0);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140690bfe:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690c20(longlong param_1)

{
    short sVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    undefined local_108 [8];
    longlong local_100;
    undefined local_e8 [8];
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    longlong local_28;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar3 = FUN_140056ab0(param_1,1), lVar3 != 0)
         ) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (((plVar4 = (longlong *)
                (**(code **)(*DAT_140c65980 + 0x30))
                (DAT_140c65980,
                 **(undefined4 **)(*(longlong *)(*(longlong *)(lVar3 + 8) + 8) + 8)),
                plVar4 != (longlong *)0x0 && (lVar3 = (**(code **)(*plVar4 + 0x28))(plVar4), lVar3 != 0)) &&
          (iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4), iVar2 != 0)))) {
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x28))(plVar4);
        iVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
        if (iVar2 != 0) {
            lVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
            if (*(int *)(lVar3 + 0x40) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            lVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
            lVar3 = FUN_14020fd40(*(undefined4 *)(lVar3 + 0x40));
            if (lVar3 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            if (*(int *)(lVar3 + 0x1c) == 0) {
                FUN_140058710(param_1,&DAT_1409d153f,0);
                return 1;
            }
            FUN_1404dde90(local_e8);
            lVar6 = FUN_14018b280(0x60);
            lVar3 = 0;
            lVar7 = lVar3;
            if (lVar6 != 0) {
                lVar7 = FUN_1404db7e0(lVar6,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            FUN_1400b7480(local_e8,lVar7);
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
                    lVar3 = lVar3 + 1;
                    sVar1 = psVar8[lVar3];
                }
                FUN_14001c480(local_e0);
            }
            lVar3 = FUN_1400b7660(local_e8);
            lVar3 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar3 + 8));
            if (*(longlong *)(lVar3 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar7) != '\0');
                FUN_140058710(param_1);
            }
            if (local_100 != 0) {
                FUN_14018b900(local_100,0);
            }
            if (local_28 != 0) {
                FUN_14018b900(local_28,0);
            }
            FUN_1400b7390(local_e8);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140690e80(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8),0);
            if (plVar3 != (longlong *)0x0) {
                lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
                iVar4 = *(int *)(lVar2 + 0x4c);
                goto LAB_140690eec;
            }
        }
    }
    iVar4 = 0;
    LAB_140690eec:
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140690f20(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    undefined **local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar2 = FUN_140056ab0(param_1,1), lVar2 == 0)
         ) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar3 = (longlong *)
                (**(code **)(*DAT_140c65980 + 0x30))
                (DAT_140c65980,
                 **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8)),
                plVar3 == (longlong *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = (**(code **)(*plVar3 + 0x140))(plVar3);
        if (*(int *)(*(longlong *)(lVar2 + 8) + 0x50) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            FUN_1400b6f30(&local_108);
            lVar2 = 0;
            local_38 = (undefined2 *)0x0;
            local_48 = ZEXT816(0);
            local_108 = &PTR_FUN_140b69230;
            puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
            local_38 = puVar4 + 8;
            local_48 = CONCAT88(puVar4,puVar4);
            if (puVar4 != (undefined2 *)0x0) {
                *puVar4 = 0;
            }
            lVar5 = FUN_14018b280(0x60);
            lVar6 = lVar2;
            if (lVar5 != 0) {
                lVar6 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            FUN_1400b7480(&local_108,lVar6);
            psVar7 = (short *)FUN_14034bdd0();
            if (psVar7 == (short *)0x0) {
                if (local_f8 != local_f0) {
                    *local_f8 = 0;
                    local_f0 = local_f8;
                }
            }
            else {
                sVar1 = *psVar7;
                while (sVar1 != 0) {
                    lVar2 = lVar2 + 1;
                    sVar1 = psVar7[lVar2];
                }
                FUN_14001c480(local_100);
            }
            lVar2 = FUN_1400b7660(&local_108);
            lVar2 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar2 + 8));
            if (*(longlong *)(lVar2 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            if (local_48._0_8_ != 0) {
                FUN_14018b900(local_48._0_8_,0);
            }
            FUN_1400b7390(&local_108);
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140691150(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    undefined **local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar2 = FUN_140056ab0(param_1,1), lVar2 == 0)
         ) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar3 = (longlong *)
                (**(code **)(*DAT_140c65980 + 0x30))
                (DAT_140c65980,
                 **(undefined4 **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 8)),
                plVar3 == (longlong *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = (**(code **)(*plVar3 + 0x140))(plVar3);
        if (*(int *)(*(longlong *)(lVar2 + 8) + 0x54) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            FUN_1400b6f30(&local_108);
            lVar2 = 0;
            local_38 = (undefined2 *)0x0;
            local_48 = ZEXT816(0);
            local_108 = &PTR_FUN_140b69230;
            puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
            local_38 = puVar4 + 8;
            local_48 = CONCAT88(puVar4,puVar4);
            if (puVar4 != (undefined2 *)0x0) {
                *puVar4 = 0;
            }
            lVar5 = FUN_14018b280(0x60);
            lVar6 = lVar2;
            if (lVar5 != 0) {
                lVar6 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            FUN_1400b7480(&local_108,lVar6);
            psVar7 = (short *)FUN_14034bdd0();
            if (psVar7 == (short *)0x0) {
                if (local_f8 != local_f0) {
                    *local_f8 = 0;
                    local_f0 = local_f8;
                }
            }
            else {
                sVar1 = *psVar7;
                while (sVar1 != 0) {
                    lVar2 = lVar2 + 1;
                    sVar1 = psVar7[lVar2];
                }
                FUN_14001c480(local_100);
            }
            lVar2 = FUN_1400b7660(&local_108);
            lVar2 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar2 + 8));
            if (*(longlong *)(lVar2 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            if (local_48._0_8_ != 0) {
                FUN_14018b900(local_48._0_8_,0);
            }
            FUN_1400b7390(&local_108);
        }
    }
    return 1;
}



undefined8 FUN_140691380(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            plVar4 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x30))
                    (DAT_140c65980,
                     **(undefined4 **)(*(longlong *)(*(longlong *)(lVar3 + 8) + 8) + 8),0);
            if (plVar4 != (longlong *)0x0) {
                lVar3 = (**(code **)(*plVar4 + 0x140))(plVar4);
                iVar2 = *(int *)(*(longlong *)(lVar3 + 8) + 0x58);
                goto LAB_1406913f0;
            }
        }
    }
    iVar2 = 0;
    LAB_1406913f0:
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691420(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    lVar4 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    lVar5 = 0;
    lVar6 = lVar5;
    if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
    }
    lVar4 = FUN_140056ab0(param_1,2,"Game.ChatChannel");
    if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar6 == 0) || (lVar5 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int *)(lVar6 + 8) != *(int *)(lVar5 + 8)) ||
            (bVar3 = 1, *(longlong *)(lVar6 + 0x10) != *(longlong *)(lVar5 + 0x10))) {
            bVar3 = 0;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691610(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
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



undefined8 FUN_140691690(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.ChatChannel");
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
    ppuVar5 = &PTR_DAT_140c5ceb0;
    puVar6 = PTR_DAT_140c5ceb0;
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
    FUN_140057020(param_1,"ChatChannelLib",&PTR_DAT_140b6fee0);
    return 1;
}



undefined8 FUN_140691910(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8));
        if (lVar1 != 0) {
            lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0x20));
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
    }
    return 0;
}



undefined8 FUN_1406919c0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8));
        if (lVar1 != 0) {
            lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0x80));
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
    }
    return 0;
}



undefined8 FUN_140691a70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8));
        if (lVar1 != 0) {
            lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0xa0));
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
    }
    return 0;
}



undefined8 FUN_140691b20(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8));
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (((ulonglong)(longlong)iVar1 < 2) &&
            (lVar2 = (longlong)iVar1 * 0x20 + 0xb8 + lVar2, lVar2 != 0)) {
                lVar2 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar2 + 8));
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
                }
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_140691c10(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
        lVar3 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (lVar3 != 0) {
            pdVar2 = *(double **)(param_1 + 0x10);
            iVar1 = **(int **)(lVar3 + 8);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140691c90(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    bool bVar3;

    lVar2 = FUN_140056ab0();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_140401220(DAT_140c658a0);
        if (lVar2 != 0) {
            bVar3 = **(int **)(lVar2 + 8) == 0x12;
            goto LAB_140691ce7;
        }
    }
    bVar3 = false;
    LAB_140691ce7:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691d10(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    uint *puVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
        puVar3 = (uint *)FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar2 + 8),
                                       *(undefined8 *)(lVar2 + 0x10));
        if (puVar3 != (uint *)0x0) {
            uVar1 = *puVar3 & 1;
            goto LAB_140691d5f;
        }
    }
    uVar1 = 0;
    LAB_140691d5f:
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(uVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691d90(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    uint *puVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
        puVar3 = (uint *)FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar2 + 8),
                                       *(undefined8 *)(lVar2 + 0x10));
        if (puVar3 != (uint *)0x0) {
            uVar1 = *puVar3 >> 1 & 1;
            goto LAB_140691de1;
        }
    }
    uVar1 = 0;
    LAB_140691de1:
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(uVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691e10(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) &&
        (lVar2 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10)),
                lVar2 != 0)) {
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691e80(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
        lVar3 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (lVar3 != 0) {
            iVar2 = FUN_140401cb0(lVar3);
            goto LAB_140691ed2;
        }
    }
    iVar2 = 0;
    LAB_140691ed2:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140691f00(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        lVar1 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar2);
            FUN_140401e40(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140692020(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
        lVar2 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
        if (lVar2 != 0) {
            puVar3 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),
                                  *(undefined4 *)(lVar2 + 0x118));
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar3;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140692130(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
        lVar3 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if ((lVar3 != 0) &&
            ((*(int *)(DAT_140c635f0 + 0x1708) == 1 || ((*(byte *)(lVar3 + 4) & 1) != 0)))) {
            bVar2 = 1;
            goto LAB_140692198;
        }
    }
    bVar2 = 0;
    LAB_140692198:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_1406922f0(longlong param_1,longlong param_2,undefined8 param_3)

{
    int iVar1;
    uint *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined local_38 [8];
    longlong local_30;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1,puVar9,L"strMemberName",param_2 + 0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    iVar1 = *(int *)(param_2 + 0x54);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_38,L"bIsChannelOwner");
    lVar7 = -1;
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    iVar1 = *(int *)(param_2 + 0x58);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_38,L"bIsModerator");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    iVar1 = *(int *)(param_2 + 0x5c);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_38,L"bIsMuted");
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar7 = lVar7 + 1;
        } while (*(char *)(lVar6 + lVar7) != '\0');
        FUN_140058710(param_1,lVar6,lVar7);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    FUN_1400fb1d0(param_3,uVar3);
    FUN_1400579e0(param_1);
    return;
}



undefined8 FUN_140692610(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    lVar4 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) &&
        (lVar4 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10)),
                lVar4 != 0)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        lVar3 = param_1;
        for (lVar4 = *(longlong *)(lVar4 + 0x120); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
            FUN_1406922f0(param_1,lVar4,&local_28);
            lVar3 = local_18;
        }
        uVar7 = (ulonglong)local_20;
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar7);
        puVar2 = *(undefined8 **)(lVar3 + 0x10);
        *puVar2 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(puVar2 + 1) = uVar1;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        FUN_1400579e0(lVar3,uVar1,uVar7 & 0xffffffff);
        return 1;
    }
    return 0;
}



undefined8 FUN_140692760(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    lVar4 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) &&
        (lVar4 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10)),
                lVar4 != 0)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        lVar3 = param_1;
        for (lVar4 = *(longlong *)(lVar4 + 0x128); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
            FUN_1406922f0(param_1,lVar4,&local_28);
            lVar3 = local_18;
        }
        uVar7 = (ulonglong)local_20;
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar7);
        puVar2 = *(undefined8 **)(lVar3 + 0x10);
        *puVar2 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(puVar2 + 1) = uVar1;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        FUN_1400579e0(lVar3,uVar1,uVar7 & 0xffffffff);
        return 1;
    }
    return 0;
}



undefined8 FUN_1406928b0(undefined8 param_1)

{
    longlong lVar1;
    ulonglong local_18;
    undefined8 local_10;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        lVar1 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
        if (lVar1 != 0) {
            local_10 = *(undefined8 *)(lVar1 + 0x10);
            local_18 = (ulonglong)**(uint **)(lVar1 + 8);
            FUN_1403f4740(DAT_140c65898,0x1d2,&local_18);
        }
    }
    return 0;
}



undefined8 FUN_140692930(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong local_28;
    longlong local_20;
    longlong local_18;
    ulonglong local_10;

    lVar4 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
        lVar4 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        if (lVar4 != 0) {
            FUN_140056bb0(param_1,2);
            FUN_14018f2d0(&local_28);
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
                uVar2 = FUN_140056d60(param_1);
            }
            else {
                uVar2 = 0;
            }
            lVar1 = local_20;
            iVar3 = FUN_1403e1170(local_20);
            if (iVar3 != 0) {
                local_20 = *(longlong *)(lVar4 + 0x10);
                local_18 = lVar1;
                local_10 = (ulonglong)uVar2;
                local_28 = (ulonglong)**(uint **)(lVar4 + 8);
                FUN_1403f4740(DAT_140c65898,0x1ce,&local_28);
            }
            if (lVar1 != 0) {
                FUN_14018b900(lVar1,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140692a60(undefined8 param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong local_28;
    longlong local_20;
    longlong local_18;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
        lVar3 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (lVar3 != 0) {
            FUN_140056bb0(param_1,2);
            FUN_14018f2d0(&local_28);
            lVar1 = local_20;
            iVar2 = FUN_1403e1170(local_20);
            if (iVar2 != 0) {
                local_20 = *(longlong *)(lVar3 + 0x10);
                local_18 = lVar1;
                local_28 = (ulonglong)**(uint **)(lVar3 + 8);
                FUN_1403f4740(DAT_140c65898,0x1cf,&local_28);
            }
            if (lVar1 != 0) {
                FUN_14018b900(lVar1,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140692b40(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
        lVar2 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
        if (lVar2 != 0) {
            uVar3 = *(uint *)(*(longlong *)(lVar2 + 8) + 0x34) >> 7 & 1;
            goto LAB_140692b97;
        }
    }
    uVar3 = 0;
    LAB_140692b97:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140692c40(undefined8 param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong local_28;
    longlong local_20;
    longlong local_18;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
        lVar3 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (lVar3 != 0) {
            FUN_140056bb0(param_1,2);
            FUN_14018f2d0(&local_28);
            lVar1 = local_20;
            iVar2 = FUN_1403e1170(local_20);
            if (iVar2 != 0) {
                local_20 = *(longlong *)(lVar3 + 0x10);
                local_18 = lVar1;
                local_28 = (ulonglong)**(uint **)(lVar3 + 8);
                FUN_1403f4740(DAT_140c65898,0x1bd,&local_28);
            }
            if (lVar1 != 0) {
                FUN_14018b900(lVar1,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140692d20(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong local_48;
    undefined8 local_40;
    longlong local_38;
    undefined local_30 [8];
    longlong local_28;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ChatChannel");
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        lVar1 = FUN_140401220(DAT_140c658a0,*(undefined4 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_30,uVar2);
            local_40 = *(undefined8 *)(lVar1 + 0x10);
            local_38 = local_28;
            local_48 = (ulonglong)**(uint **)(lVar1 + 8);
            FUN_1403f4740(DAT_140c65898,0x1d0,&local_48);
            if (local_28 != 0) {
                FUN_14018b900(local_28,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140693090(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Achievement");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.Achievement");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int ***)(lVar5 + 8) == (int **)0x0) || (*(int ***)(lVar4 + 8) == (int **)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = ***(int ***)(lVar5 + 8) == ***(int ***)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140693150(longlong param_1)

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
        LAB_140693193:
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
                local_18 = FUN_140062650(param_1,"Game.Achievement",0x10);
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
                goto LAB_140693277;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140693193;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140693277:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140693290(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Achievement");
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



undefined8 FUN_140693310(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.Achievement");
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
    ppuVar5 = &PTR_DAT_140c5d0a0;
    puVar6 = PTR_DAT_140c5d0a0;
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
    FUN_140057020(param_1,"Achievement",&PTR_DAT_140b6ff00);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140693520(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    longlong lVar5;
    short *psVar6;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (*(longlong *)(*(longlong *)(lVar2 + 8) + 8) == 0)) {
        lVar2 = FUN_14018f0e0(local_108,&DAT_1409f5b64);
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
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar2 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar3,puVar3);
        local_18 = puVar3 + 8;
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
            lVar4 = FUN_14018b280(0x60);
            lVar5 = lVar2;
            if (lVar4 != 0) {
                lVar5 = FUN_1404db7e0(lVar4,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            FUN_1400b7480(&local_e8,lVar5);
        }
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
                lVar2 = lVar2 + 1;
                sVar1 = psVar6[lVar2];
            }
            FUN_14001c480(local_e0);
        }
        lVar2 = FUN_1400b7660(&local_e8);
        lVar2 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar2 + 8));
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
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140693740(longlong param_1)

{
    short sVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    longlong lVar6;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar3 = FUN_140056ab0(param_1,1);
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
        (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 8) + 8), plVar2 == (longlong *)0x0)) {
        lVar3 = FUN_14018f0e0(local_108,&DAT_1409f605c);
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar3 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar4,puVar4);
        local_18 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        psVar5 = (short *)FUN_14034bdd0(puVar4,*(undefined4 *)(*plVar2 + 0x18));
        if (psVar5 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar3 = lVar3 + 1;
                sVar1 = psVar5[lVar3];
            }
            FUN_14001c480(local_e0);
        }
        lVar3 = FUN_1400b7660(&local_e8);
        lVar3 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar3 + 8));
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140693920(longlong param_1)

{
    short sVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    longlong lVar6;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar3 = FUN_140056ab0(param_1,1);
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
        (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 8) + 8), plVar2 == (longlong *)0x0)) {
        lVar3 = FUN_14018f0e0(local_108,&DAT_1409f6094);
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar3 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar4,puVar4);
        local_18 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        psVar5 = (short *)FUN_14034bdd0(puVar4,*(undefined4 *)(*plVar2 + 0x1c));
        if (psVar5 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar3 = lVar3 + 1;
                sVar1 = psVar5[lVar3];
            }
            FUN_14001c480(local_e0);
        }
        lVar3 = FUN_1400b7660(&local_e8);
        lVar3 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar3 + 8));
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



undefined8 FUN_140693b00(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 == (longlong *)0x0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5f24);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693bb6;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        lVar2 = FUN_1401e98e0(*(undefined4 *)(*plVar1 + 8));
        if (lVar2 == 0) {
            lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5fec);
            if (*(longlong *)(lVar2 + 8) == 0) {
                LAB_140693bb6:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_140693be2;
            }
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
        else {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693bb6;
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_140693be2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_140693c00(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 == (longlong *)0x0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5ecc);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693cb6;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        lVar2 = FUN_1401e98e0(*(undefined4 *)(*plVar1 + 8));
        if (lVar2 == 0) {
            lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5f0c);
            if (*(longlong *)(lVar2 + 8) == 0) {
                LAB_140693cb6:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_140693ce2;
            }
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
        else {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693cb6;
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_140693ce2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_140693d70(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 == (longlong *)0x0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5e8c);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693e26;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        lVar2 = FUN_1401e9d20(*(undefined4 *)(*plVar1 + 0x4c));
        if (lVar2 == 0) {
            lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5eac);
            if (*(longlong *)(lVar2 + 8) == 0) {
                LAB_140693e26:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_140693e52;
            }
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
        else {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693e26;
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_140693e52:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_140693e70(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (plVar2 = *(longlong **)(*(longlong *)(lVar5 + 8) + 8), plVar2 != (longlong *)0x0)) {
        pdVar3 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(*plVar2 + 0x50);
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



undefined8 FUN_140693ef0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 == (longlong *)0x0)) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5e3c);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693fa6;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        lVar2 = FUN_1401ea160(*(undefined4 *)(*plVar1 + 0x50));
        if (lVar2 == 0) {
            lVar2 = FUN_14018f0e0(local_28,&DAT_1409f5e54);
            if (*(longlong *)(lVar2 + 8) == 0) {
                LAB_140693fa6:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_140693fd2;
            }
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
        else {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140693fa6;
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_140693fd2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined4 FUN_140693ff0(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    int *piVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (puVar10 = *(undefined8 **)(*(longlong *)(lVar4 + 8) + 8), puVar10 != (undefined8 *)0x0)) {
        puVar1 = (undefined4 *)*puVar10;
        lVar4 = FUN_140644db0(puVar1,*puVar1);
        if (lVar4 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(param_1);
        uVar9 = (ulonglong)*(uint *)(lVar4 + 0x1c);
        local_30 = uVar2;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar10,&DAT_1409f5dec,uVar9 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        local_58 = &PTR_FUN_140b569f0;
        local_40 = 1;
        local_48 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_50 = FUN_1400578c0(param_1);
        piVar8 = (int *)(lVar4 + 8);
        lVar4 = 5;
        do {
            if (*piVar8 != 0) {
                lVar7 = FUN_140644db0();
                if (lVar7 != 0) {
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    uVar5 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar10 + 1) = 5;
                    *puVar10 = uVar5;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar3 = FUN_1400578c0(param_1);
                    uVar9 = (ulonglong)*(uint *)(lVar7 + 0x1c);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1,puVar10,&DAT_1409f5d9c,uVar9 & 0xffffffff);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    FUN_1400fb1d0(&local_58);
                    FUN_1400579e0(param_1);
                }
            }
            uVar3 = local_50;
            piVar8 = piVar8 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        FUN_1400fb2a0(&local_38,L"arParents",local_50);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_48 != 0) {
            FUN_1400579e0(local_48,puVar10,uVar3);
        }
        FUN_1400579e0(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140694370(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;

    if (DAT_140c65c28 != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Achievement");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            lVar3 = FUN_140643ea0(DAT_140c65c28);
            if (lVar3 != 0) {
                puVar1 = *(uint **)(param_1 + 0x10);
                lVar3 = *(longlong *)(lVar3 + 0x20);
                puVar1[2] = 1;
                *puVar1 = (uint)(lVar3 != 0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140694400(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong local_res10 [3];
    undefined local_28 [8];
    longlong local_20;

    if ((((DAT_140c65c28 == 0) || (lVar1 = FUN_140056ab0(param_1,1), lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = FUN_140643ea0(DAT_140c65c28,
                               *(undefined4 *)**(undefined8 **)(*(longlong *)(lVar1 + 8) + 8)),
                lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f5d64);
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
    puVar2 = (undefined8 *)FUN_14048bf80(lVar1,local_res10);
    lVar1 = FUN_14018f0e0(local_28,*puVar2);
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
    if (local_res10[0] == 0) {
        return 1;
    }
    (**(code **)(*(longlong *)(local_res10[0] + -0x10) + 8))(local_res10[0] + -0x10);
    return 1;
}



undefined8 FUN_140694530(longlong param_1)

{
    longlong *plVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    int iVar5;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if ((((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) ||
         (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), plVar1 == (longlong *)0x0)) ||
        (DAT_140c65c28 == 0)) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar4 = *plVar1;
    if ((*(byte *)(lVar4 + 0xc) & 2) == 0) {
        iVar5 = *(int *)(lVar4 + 0x54);
        if (iVar5 == 1) {
            iVar5 = 10;
            goto LAB_140694598;
        }
        if (iVar5 == 2) {
            iVar5 = 0x19;
            goto LAB_140694598;
        }
        if (iVar5 == 3) {
            iVar5 = 0x32;
            goto LAB_140694598;
        }
    }
    iVar5 = 0;
    LAB_140694598:
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_1406945e0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 != 0)) && (DAT_140c65c28 != 0)) {
        if (*(longlong *)(lVar1 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        FUN_1404332a0(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140694670(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 != 0)) && (DAT_140c65c28 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        FUN_1404332a0(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140694700(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (plVar2 = *(longlong **)(*(longlong *)(lVar5 + 8) + 8), plVar2 != (longlong *)0x0)) {
        pdVar3 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(*plVar2 + 0x10);
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



undefined8 FUN_140694780(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    uint *puVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (plVar2 = *(longlong **)(*(longlong *)(lVar5 + 8) + 8), plVar2 != (longlong *)0x0)) {
        puVar3 = *(uint **)(param_1 + 0x10);
        uVar1 = *(uint *)(*plVar2 + 0xc);
        puVar3[2] = 1;
        *puVar3 = uVar1 >> 2 & 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140694800(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;

    if (DAT_140c65c28 != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Achievement");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_140643ea0(DAT_140c65c28,
                                  *(undefined4 *)**(undefined8 **)(*(longlong *)(lVar4 + 8) + 8));
            if (lVar4 != 0) {
                iVar3 = FUN_14048c3d0(*(undefined8 *)(lVar4 + 0x28));
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406948a0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;

    if (DAT_140c65c28 != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Achievement");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_140643ea0(DAT_140c65c28,
                                  *(undefined4 *)**(undefined8 **)(*(longlong *)(lVar4 + 8) + 8));
            if (lVar4 != 0) {
                iVar3 = FUN_14048c320(*(undefined8 *)(lVar4 + 0x28));
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140694940(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    int iVar4;
    longlong lVar5;

    if (DAT_140c65c28 != 0) {
        lVar5 = FUN_140056ab0();
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            lVar5 = FUN_140643ea0(DAT_140c65c28);
            if (lVar5 != 0) {
                iVar4 = FUN_1406428d0(*(undefined8 *)(lVar5 + 0x28));
                if (((iVar4 == 1) || (iVar4 == 3)) || (bVar3 = 0, iVar4 == 5)) {
                    bVar3 = 1;
                }
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)bVar3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140694ee0(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    int local_res10 [2];

    lVar3 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
        (plVar1 = *(longlong **)(*(longlong *)(lVar3 + 8) + 8), plVar1 == (longlong *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar4 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_res10[0] = *(int *)(*plVar1 + 0x30);
        if (local_res10[0] != 0) {
            FUN_140058710(param_1,"strTitle",8);
            FUN_14066db90(param_1,local_res10);
            lVar3 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_1406958a0(longlong param_1)

{
    longlong *plVar1;
    undefined4 *puVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
        (plVar1 = *(longlong **)(*(longlong *)(lVar3 + 8) + 8), plVar1 != (longlong *)0x0)) {
        if (*(int *)(*plVar1 + 4) != 0x4b) {
            puVar2 = *(undefined4 **)(param_1 + 0x10);
            *puVar2 = 0;
            puVar2[2] = 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140695940(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Achievement");
    if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
         (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), plVar2 != (longlong *)0x0)) &&
        (lVar4 = *plVar2, *(int *)(lVar4 + 4) == 0x4b)) {
        iVar1 = *(int *)(lVar4 + 0x24);
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406959c0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.Guild");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        lVar4 = *(longlong *)(lVar4 + 8);
        puVar1 = *(uint **)(param_1 + 0x10);
        lVar5 = *(longlong *)(lVar5 + 8);
        puVar1[2] = 1;
        *puVar1 = (uint)(lVar5 == lVar4);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140695a60(longlong param_1)

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
        LAB_140695aa3:
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
                local_18 = FUN_140062650(param_1,"Game.Guild",10);
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
                goto LAB_140695b87;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140695aa3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140695b87:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140695ba0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140695c20(longlong param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;
    longlong *plVar3;
    ulonglong uVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    undefined8 uVar8;
    uint *puVar9;
    uint *puVar10;
    uint uVar11;
    undefined *puVar13;
    undefined **ppuVar14;
    uint *puVar15;
    undefined auStack1608 [32];
    undefined8 local_628;
    undefined4 local_620;
    undefined *local_618;
    code *local_610;
    undefined8 local_608;
    undefined8 local_600;
    undefined *local_5f8;
    code *local_5f0 [3];
    char *local_5d8;
    code *local_5d0;
    char *local_5c8;
    code *local_5c0;
    char *local_5b8;
    code *local_5b0;
    undefined *local_5a8;
    undefined *local_5a0;
    char *local_598;
    code *local_590;
    char *local_588;
    code *local_580;
    char *local_578;
    undefined *local_570;
    char *local_568;
    code *local_560;
    char *local_558;
    code *local_550;
    char *local_548;
    code *local_540;
    char *local_538;
    undefined *local_530;
    char *local_528;
    code *local_520;
    char *local_518;
    code *local_510;
    undefined *local_508;
    code *local_500;
    char *local_4f8;
    code *local_4f0;
    char *local_4e8;
    code *local_4e0;
    char *local_4d8;
    undefined *local_4d0;
    char *local_4c8;
    code *local_4c0;
    char *local_4b8;
    code *local_4b0;
    char *local_4a8;
    code *local_4a0;
    char *local_498;
    code *local_490;
    char *local_488;
    code *local_480;
    char *local_478;
    undefined *local_470;
    char *local_468;
    undefined *local_460;
    char *local_458;
    undefined *local_450;
    char *local_448;
    code *local_440;
    char *local_438;
    code *local_430;
    char *local_428;
    code *local_420;
    char *local_418;
    code *local_410;
    char *local_408;
    code *local_400;
    char *local_3f8;
    code *local_3f0;
    char *local_3e8;
    code *local_3e0;
    char *local_3d8;
    code *local_3d0;
    char *local_3c8;
    code *local_3c0;
    char *local_3b8;
    undefined *local_3b0;
    char *local_3a8;
    undefined *local_3a0;
    char *local_398;
    code *local_390;
    char *local_388;
    code *local_380;
    char *local_378;
    code *local_370;
    char *local_368;
    code *local_360;
    char *local_358;
    undefined *local_350;
    char *local_348;
    undefined *local_340;
    char *local_338;
    undefined *local_330;
    char *local_328;
    code *local_320;
    char *local_318;
    code *local_310;
    char *local_308;
    code *local_300;
    char *local_2f8;
    code *local_2f0;
    char *local_2e8;
    code *local_2e0;
    char *local_2d8;
    code *local_2d0;
    char *local_2c8;
    code *local_2c0;
    char *local_2b8;
    code *local_2b0;
    char *local_2a8;
    code *local_2a0;
    char *local_298;
    undefined *local_290;
    char *local_288;
    code *local_280;
    char *local_278;
    code *local_270;
    char *local_268;
    code *local_260;
    char *local_258;
    code *local_250;
    char *local_248;
    code *local_240;
    char *local_238;
    code *local_230;
    char *local_228;
    code *local_220;
    char *local_218;
    code *local_210;
    char *local_208;
    undefined *local_200;
    char *local_1f8;
    code *local_1f0;
    char *local_1e8;
    code *local_1e0;
    char *local_1d8;
    code *local_1d0;
    char *local_1c8;
    code *local_1c0;
    char *local_1b8;
    code *local_1b0;
    char *local_1a8;
    undefined *local_1a0;
    char *local_198;
    code *local_190;
    char *local_188;
    code *local_180;
    char *local_178;
    undefined *local_170;
    char *local_168;
    code *local_160;
    char *local_158;
    code *local_150;
    char *local_148;
    code *local_140;
    char *local_138;
    undefined *local_130;
    char *local_128;
    code *local_120;
    char *local_118;
    code *local_110;
    char *local_108;
    code *local_100;
    char *local_f8;
    undefined *local_f0;
    char *local_e8;
    undefined *local_e0;
    char *local_d8;
    undefined *local_d0;
    char *local_c8;
    code *local_c0;
    char *local_b8;
    code *local_b0;
    char *local_a8;
    code *local_a0;
    char *local_98;
    code *local_90;
    char *local_88;
    code *local_80;
    char *local_78;
    code *local_70;
    char *local_68;
    code *local_60;
    char *local_58;
    code *local_50;
    undefined *local_48;
    code *local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    uint *puVar12;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack1608;
    puVar13 = &DAT_140b34018;
    local_5f0[1] = (code *)&DAT_140b33ff8;
    local_5f0[2] = FUN_140695ba0;
    local_5f8 = &DAT_140b34018;
    local_5d8 = "GetType";
    local_5f0[0] = FUN_1406959c0;
    local_5d0 = FUN_1406968d0;
    local_5c8 = "GetName";
    local_5c0 = FUN_140696950;
    local_5b8 = "Modify";
    local_5b0 = FUN_140696a00;
    local_5a8 = &DAT_140b33fe8;
    local_5a0 = &LAB_140696b70;
    local_598 = "Invite";
    local_590 = FUN_140696c00;
    local_588 = "Leave";
    local_580 = FUN_140696c90;
    local_578 = "Promote";
    local_570 = &LAB_140696cd0;
    local_568 = "PromoteMaster";
    local_560 = FUN_140696d60;
    local_558 = "Demote";
    local_550 = FUN_140696df0;
    local_548 = "AddRank";
    local_540 = FUN_140696e80;
    local_538 = "ModifyRank";
    local_530 = &DAT_140696f30;
    local_528 = "RenameRank";
    local_520 = FUN_140697150;
    local_518 = "RemoveRank";
    local_510 = FUN_140697200;
    local_508 = &DAT_140b3410c;
    local_500 = FUN_140697270;
    local_4f8 = "Nominate";
    local_4f0 = FUN_140697300;
    local_4e8 = "Disband";
    local_4e0 = FUN_140697390;
    local_4d8 = "GetRanks";
    local_4d0 = &DAT_1406973d0;
    local_4c8 = "GetFlags";
    local_4c0 = FUN_140698310;
    local_4b8 = "SetFlags";
    local_4b0 = FUN_14069c540;
    local_4a8 = "GetChannel";
    local_4a0 = FUN_140698440;
    local_498 = "RequestMembers";
    local_490 = FUN_140698610;
    local_488 = "GetMyRank";
    local_480 = FUN_1406984d0;
    local_478 = "SetAsNameplate";
    local_470 = &LAB_140698550;
    local_468 = "IsNameplate";
    local_460 = &LAB_140698590;
    local_458 = "GetMemberCount";
    local_450 = &LAB_140698650;
    local_448 = "GetOnlineMemberCount";
    local_440 = FUN_1406986d0;
    local_438 = "GetStandard";
    local_430 = FUN_140698750;
    local_428 = "SetStandard";
    local_420 = FUN_140698880;
    local_418 = "GetInfluence";
    local_410 = FUN_140698a80;
    local_408 = "GetBonusInfluenceRemaining";
    local_400 = FUN_140698b00;
    local_3f8 = "BeginBankItemTransfer";
    local_3f0 = FUN_1406990b0;
    local_3e8 = "EndBankItemTransfer";
    local_3e0 = FUN_140699230;
    local_3d8 = "MoveBankItemToInventory";
    local_3d0 = FUN_1406992d0;
    local_3c8 = "OpenBankTab";
    local_3c0 = FUN_1406993a0;
    local_3b8 = "CloseBankTab";
    local_3b0 = &LAB_140699420;
    local_3a8 = "GetBankTab";
    local_3a0 = &DAT_140699470;
    local_398 = "RenameBankTab";
    local_390 = FUN_1406999c0;
    local_388 = "GetBankTabName";
    local_380 = FUN_140699770;
    local_378 = "GetBankTabCount";
    local_370 = FUN_1406998a0;
    local_368 = "GetBankTabSlots";
    local_360 = FUN_140699920;
    local_358 = "ListBossTokens";
    local_350 = &LAB_140699aa0;
    local_348 = "GetBossTokens";
    local_340 = &DAT_140699ae0;
    local_338 = "UseBossToken";
    local_330 = &LAB_140699d40;
    local_328 = "IsArenaTeam";
    local_320 = FUN_140699dd0;
    local_318 = "GetMoney";
    local_310 = FUN_140698b80;
    local_308 = "GetBankMoneyWithdrawnToday";
    local_300 = FUN_140698c80;
    local_2f8 = "GetBankMoneyRepairToday";
    local_2f0 = FUN_140698d80;
    local_2e8 = "GetBankMoneyRepairRemaining";
    local_2e0 = FUN_140698e80;
    local_2d8 = "GetBankTabItemWithdrawnToday";
    local_2d0 = FUN_140698f50;
    local_2c8 = "DepositMoney";
    local_2c0 = FUN_14069a980;
    local_2b8 = "WithdrawMoney";
    local_2b0 = FUN_14069aa30;
    local_2a8 = "GetWarCoins";
    local_2a0 = FUN_140699030;
    local_298 = "SetBankTabPermissions";
    local_290 = &DAT_140699e60;
    local_288 = "SetRankBankMoneyLimit";
    local_280 = FUN_14069a780;
    local_278 = "SetRankBankMoneyLimitToAll";
    local_270 = FUN_14069a810;
    local_268 = "SetRankBankRepairLimit";
    local_260 = FUN_14069a880;
    local_258 = "SetRankBankRepairLimitToAll";
    local_250 = FUN_14069a910;
    local_248 = "IsUnitMember";
    local_240 = FUN_14069aae0;
    local_238 = "GetPvpRatings";
    local_230 = FUN_14069ac50;
    local_228 = "GetMyPvpRatings";
    local_220 = FUN_14069ae80;
    local_218 = "GetQueueState";
    local_210 = FUN_14069abd0;
    local_208 = "GetPerks";
    local_200 = &DAT_14069b140;
    local_1f8 = "GetPerk";
    local_1f0 = FUN_14069b3b0;
    local_1e8 = "PurchasePerk";
    local_1e0 = FUN_14069b520;
    local_1d8 = "ActivatePerk";
    local_1d0 = FUN_14069b590;
    local_1c8 = "GetMessageOfTheDay";
    local_1c0 = FUN_14069b690;
    local_1b8 = "SetMessageOfTheDay";
    local_1b0 = FUN_14069b600;
    local_1a8 = "GetInfoMessage";
    local_1a0 = &LAB_14069b840;
    local_198 = "SetInfoMessage";
    local_190 = FUN_14069b740;
    local_188 = "SetMemberNoteSelf";
    local_180 = FUN_14069b8f0;
    local_178 = "RepairItemVendor";
    local_170 = &LAB_14069c6d0;
    local_168 = "RepairAllItemsVendor";
    local_160 = FUN_14069c760;
    local_158 = "GetCreationDate";
    local_150 = FUN_14069b980;
    local_148 = "RequestEventLogList";
    local_140 = FUN_14069ba10;
    local_138 = "GetEventLogs";
    local_130 = &DAT_14069ba90;
    local_128 = "RequestRepairLogs";
    local_120 = FUN_14069c4f0;
    local_118 = "RequestMoneyLogs";
    local_110 = FUN_14069c4a0;
    local_108 = "RequestBankLogs";
    local_100 = FUN_14069c420;
    local_f8 = "Rename";
    local_f0 = &LAB_14069c7a0;
    puVar15 = (uint *)0x0;
    local_e8 = "SetRecruitmentDescription";
    local_40 = FUN_1406959c0;
    local_e0 = &LAB_14069c8a0;
    local_d8 = "GetRecruitmentDescription";
    local_d0 = &LAB_14069c9a0;
    local_38 = 0;
    local_c8 = "SetRecruitmentDemand";
    local_30 = 0;
    local_c0 = FUN_14069ca50;
    local_608 = 0;
    local_b8 = "GetRecruitmentDemands";
    local_600 = 0;
    local_b0 = FUN_14069cb10;
    local_a8 = "SetGuildClassification";
    local_a0 = FUN_14069cf90;
    local_98 = "GetGuildClassification";
    local_90 = FUN_14069d070;
    local_88 = "SetRecruitmentMinLevel";
    local_80 = FUN_14069d0f0;
    local_78 = "GetRecruitmentMinLevel";
    local_70 = FUN_14069d1d0;
    local_68 = "SetMyRecruitmentAvailability";
    local_60 = FUN_14069d250;
    local_58 = "GetMyRecruitmentAvailability";
    local_50 = FUN_14069d350;
    local_48 = &DAT_140b34508;
    local_618 = &DAT_1409f60cc;
    local_610 = FUN_140695a60;
    FUN_1400569b0(param_1,"Game.Guild");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_628 = FUN_140062650(param_1,"__index",7);
    local_620 = 4;
    FUN_14005ea50(param_1,lVar7 + -0x20,&local_628,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    ppuVar14 = &local_5f8;
    do {
        puVar2 = ppuVar14[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar7 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar7 + 0x20) = puVar2;
        plVar3 = *(longlong **)(param_1 + 0x10);
        *plVar3 = lVar7;
        *(undefined4 *)(plVar3 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(param_1,0xfffffffe);
        lVar7 = -1;
        do {
            lVar7 = lVar7 + 1;
        } while (puVar13[lVar7] != '\0');
        local_628 = FUN_140062650(param_1,puVar13);
        local_620 = 4;
        FUN_14005ea50(param_1,uVar8,&local_628,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar13 = ppuVar14[2];
        ppuVar14 = ppuVar14 + 2;
    } while (puVar13 != (undefined *)0x0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    FUN_140057020(param_1,"GuildTypeLib",&local_618);
    if (DAT_140c7e9c8 == 0) {
        FUN_14069df40();
        FUN_1407e4830(DAT_140c7e9c0,0,DAT_140c7e9c8 * 8);
        *DAT_140c7e9c0 = L"bValid";
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c63bb0 != 0) || (iVar6 = FUN_1402021c0(), iVar6 < 0)) goto LAB_14069689e;
            uVar5 = (**(code **)(*DAT_140c648c8 + 0x28))();
        }
        else {
            uVar5 = (*DAT_140c63838)(&PTR_u_GuildPermission_140a6a5c8);
        }
        puVar12 = puVar15;
        if (uVar5 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    puVar9 = puVar15;
                    if ((_DAT_140c63bb0 == 0) && (iVar6 = FUN_1402021c0(), -1 < iVar6)) {
                        puVar9 = (uint *)(**(code **)(*DAT_140c648c8 + 0x20))();
                    }
                }
                else {
                    puVar9 = (uint *)(*DAT_140c63848)(&PTR_u_GuildPermission_140a6a5c8,puVar12,DAT_140c63858);
                }
                if (*puVar9 < DAT_140c7e9c8) {
                    uVar4 = *(ulonglong *)(puVar9 + 4);
                    puVar10 = puVar15;
                    if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                        puVar10 = (uint *)(uVar4 + DAT_140c3fe68);
                    }
                    DAT_140c7e9c0[*puVar9] = (wchar_t *)puVar10;
                }
                uVar11 = (int)puVar12 + 1;
                puVar12 = (uint *)(ulonglong)uVar11;
            } while (uVar11 < uVar5);
        }
    }
    LAB_14069689e:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack1608);
    return;
}



undefined8 FUN_1406968d0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x10);
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



undefined8 FUN_140696950(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) || (lVar1 = FUN_1405845f0(), lVar1 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 8));
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



undefined8 FUN_140696a00(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined local_38 [48];

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            local_40 = 1;
            local_50 = 0xfffffffe;
            local_58 = &PTR_FUN_140b569f0;
            local_48 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar4 = *(undefined8 **)(param_1 + 0x10);
            uVar2 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar4 + 1) = 5;
            *puVar4 = uVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_50 = FUN_1400578c0(param_1);
            puVar4 = (undefined8 *)(*(longlong *)(local_48 + 0x18) + 0x10);
            if (((puVar4 < *(undefined8 **)(local_48 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
                (*(int *)(*(longlong *)(local_48 + 0x18) + 0x18) == 5)) {
                FUN_1400579e0(local_48,puVar4,local_50);
                puVar4 = *(undefined8 **)(local_48 + 0x10);
                puVar3 = (undefined8 *)(*(longlong *)(local_48 + 0x18) + 0x10);
                puVar5 = &DAT_140a12138;
                if (puVar3 < puVar4) {
                    puVar5 = puVar3;
                }
                *puVar4 = *puVar5;
                *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(local_48 + 0x10) = *(longlong *)(local_48 + 0x10) + 0x10;
                local_50 = FUN_1400578c0(local_48);
                FUN_14069d750(local_38,&local_58);
                FUN_14057e670(lVar1,local_38);
            }
            local_58 = &PTR_FUN_140b56a08;
            if (local_48 != 0) {
                FUN_1400579e0(local_48,&PTR_FUN_140b56a08,local_50);
            }
        }
    }
    return 0;
}



undefined8 FUN_140696c00(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar2);
            FUN_14057e7b0(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140696c90(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            FUN_14057e8d0(lVar1);
        }
    }
    return 0;
}



undefined8 FUN_140696d60(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar2);
            FUN_14057f8a0(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140696df0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar2);
            FUN_14057e9d0(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140696e80(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (0 < iVar1) {
                iVar1 = iVar1 + -1;
            }
            uVar3 = FUN_140056bb0(param_1,3);
            FUN_14018f2d0(local_28,uVar3);
            FUN_14057ea50(lVar2,iVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140697150(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (0 < iVar1) {
                iVar1 = iVar1 + -1;
            }
            uVar3 = FUN_140056bb0(param_1,3);
            FUN_14018f2d0(local_28,uVar3);
            FUN_14057ebd0(lVar2,iVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140697200(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (0 < iVar1) {
                iVar1 = iVar1 + -1;
            }
            FUN_14057ead0(lVar2,iVar1);
        }
    }
    return 0;
}



undefined8 FUN_140697270(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            puVar1 = *(undefined8 **)(param_1 + 0x18);
            if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
                (0 < *(int *)(puVar1 + 1))) {
                uVar2 = FUN_140056d60(param_1,1);
            }
            else {
                uVar2 = 0;
            }
            FUN_14057ed50(lVar3,uVar2);
        }
    }
    return 0;
}



undefined8 FUN_140697300(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,1);
            FUN_14018f2d0(local_28,uVar2);
            FUN_14057ecd0(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_140697390(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            FUN_14057e730(lVar1);
        }
    }
    return 0;
}



undefined8 FUN_140698310(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar2 = FUN_1400578c0(param_1);
            local_20 = uVar2;
            FUN_1400fafe0(&local_28,*(undefined4 *)(lVar3 + 0x14),&PTR_u_bTax_140c39558,4);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar5;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,puVar1,uVar2);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140698440(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            lVar2 = FUN_140580040(lVar1);
            if (lVar2 != 0) {
                uVar3 = FUN_140580040(lVar1);
                FUN_140433380(param_1,uVar3);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406984d0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x304);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)(iVar1 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140698610(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            FUN_14057e830(lVar1);
        }
    }
    return 0;
}



undefined8 FUN_1406986d0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x1e0);
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



undefined8 FUN_140698750(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar2 = FUN_1400578c0(param_1);
            local_20 = uVar2;
            FUN_14069d3d0(&local_28,lVar3 + 0x1a8);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar5;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,puVar1,uVar2);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140698880(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined auStack216 [32];
    undefined **local_b8;
    undefined4 local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined4 local_98;
    undefined4 uStack148;
    undefined8 uStack144;
    undefined local_88 [48];
    undefined8 local_58;
    undefined8 uStack80;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        puVar2 = (undefined8 *)FUN_1405845f0();
        if (puVar2 != (undefined8 *)0x0) {
            local_a0 = 1;
            local_b0 = 0xfffffffe;
            local_b8 = &PTR_FUN_140b569f0;
            local_a8 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            uVar3 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar5 + 1) = 5;
            *puVar5 = uVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_b0 = FUN_1400578c0(param_1);
            puVar5 = (undefined8 *)(*(longlong *)(local_a8 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(local_a8 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (*(int *)(*(longlong *)(local_a8 + 0x18) + 0x18) == 5)) {
                FUN_1400579e0(local_a8,puVar5,local_b0);
                puVar5 = *(undefined8 **)(local_a8 + 0x10);
                puVar4 = (undefined8 *)(*(longlong *)(local_a8 + 0x18) + 0x10);
                puVar6 = &DAT_140a12138;
                if (puVar4 < puVar5) {
                    puVar6 = puVar4;
                }
                *puVar5 = *puVar6;
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(local_a8 + 0x10) = *(longlong *)(local_a8 + 0x10) + 0x10;
                local_b0 = FUN_1400578c0(local_a8);
                FUN_14069d750(local_88,&local_b8);
                local_98 = *(undefined4 *)(DAT_140c635f0 + 0x1680);
                uStack144 = *puVar2;
                local_58 = CONCAT44(uStack148,local_98);
                uStack80 = uStack144;
                FUN_1403f4900(DAT_140c65898,0x4cf,&local_58);
            }
            local_b8 = &PTR_FUN_140b56a08;
            if (local_a8 != 0) {
                FUN_1400579e0(local_a8,&PTR_FUN_140b56a08,local_b0);
            }
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack216);
    return;
}



undefined8 FUN_140698a80(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x1e8);
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



undefined8 FUN_140698b00(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x1ec);
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



undefined8 FUN_140698b80(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            uVar1 = *(undefined8 *)(lVar2 + 0x1f0);
            uStack28 = 0;
            uStack24 = 0;
            uStack20 = 0;
            local_20 = 1;
            puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
            *puVar3 = uVar1;
            puVar3[1] = CONCAT44(uStack28,local_20);
            puVar3[2] = CONCAT44(uStack20,uStack24);
            lVar2 = *(longlong *)(param_1 + 0x20);
            local_28 = FUN_140062650(param_1,"Game.Money",10);
            local_20 = 4;
            FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140698c80(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            uVar1 = *(undefined8 *)(lVar2 + 0x260);
            uStack28 = 0;
            uStack24 = 0;
            uStack20 = 0;
            local_20 = 1;
            puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
            *puVar3 = uVar1;
            puVar3[1] = CONCAT44(uStack28,local_20);
            puVar3[2] = CONCAT44(uStack20,uStack24);
            lVar2 = *(longlong *)(param_1 + 0x20);
            local_28 = FUN_140062650(param_1,"Game.Money",10);
            local_20 = 4;
            FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140698d80(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            uVar1 = *(undefined8 *)(lVar2 + 0x268);
            uStack28 = 0;
            uStack24 = 0;
            uStack20 = 0;
            local_20 = 1;
            puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
            *puVar3 = uVar1;
            puVar3[1] = CONCAT44(uStack28,local_20);
            puVar3[2] = CONCAT44(uStack20,uStack24);
            lVar2 = *(longlong *)(param_1 + 0x20);
            local_28 = FUN_140062650(param_1,"Game.Money",10);
            local_20 = 4;
            FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140698e80(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined4 local_14;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if ((lVar2 != 0) &&
            (((ulonglong)(longlong)*(int *)(lVar2 + 0x304) < 10 &&
              (lVar1 = lVar2 + ((longlong)*(int *)(lVar2 + 0x304) * 5 + 3) * 8, lVar1 != 0)))) {
            local_20 = 1;
            local_28 = *(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar2 + 0x268);
            local_1c = 0;
            local_14 = 0;
            if (local_28 < 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            FUN_140501210(param_1,&local_28);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140698f50(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        lVar4 = FUN_1405845f0();
        if (lVar4 != 0) {
            iVar6 = *(int *)(lVar4 + 0x10);
            iVar2 = FUN_140056d60(param_1,2);
            iVar5 = 200;
            iVar3 = 200;
            if (*(int *)(lVar4 + 0x10) == 1) {
                iVar3 = 100;
            }
            if (iVar6 == 1) {
                iVar5 = 100;
            }
            iVar6 = (iVar5 - iVar3) + iVar2 + -1;
            if (((iVar6 < 0) || (*(int *)(lVar4 + 0x278) <= iVar6)) ||
                (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + (longlong)iVar6 * 8), lVar4 == 0)) {
                iVar6 = 0;
            }
            else {
                iVar6 = *(int *)(lVar4 + 0x20);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar6;
            goto LAB_140699018;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140699018:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140699030(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x1f8);
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



undefined8 FUN_1406990b0(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong **pplVar5;
    char *pcVar6;
    longlong lVar7;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) || (lVar3 = FUN_1405845f0(), lVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
              (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 0)) ||
             ((pplVar5 = (longlong **)FUN_140056ab0(param_1,2,"Game.ItemData"),
                     pplVar5 == (longlong **)0x0 || (*pplVar5 == (longlong *)0x0)))) || (**pplVar5 == 0)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
                iVar2 = FUN_140056d60(param_1,3);
                if (iVar2 < 0) {
                    iVar2 = 0;
                }
            }
            else {
                iVar2 = 0;
            }
            lVar7 = 0;
            if (*(int *)(lVar3 + 0x10) == 1) {
                uVar1 = 0xf;
                pcVar6 = "DDGuildBankItem";
            }
            else {
                if (*(int *)(lVar3 + 0x10) != 3) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
                uVar1 = 0x12;
                pcVar6 = "DDWarPartyBankItem";
            }
            FUN_140058710(param_1,pcVar6,uVar1);
            if (*pplVar5 != (longlong *)0x0) {
                lVar7 = **pplVar5;
            }
            FUN_14057f6a0(lVar3,lVar7,iVar2);
        }
    }
    return 1;
}



undefined8 FUN_140699230(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    int local_res10;
    int local_res14;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            local_res14 = FUN_140056d60(param_1,3);
            local_res14 = local_res14 + -1;
            local_res10 = 200;
            if (*(int *)(lVar2 + 0x10) == 1) {
                local_res10 = 100;
            }
            local_res10 = local_res10 + iVar1 + -1;
            FUN_14057f730(lVar2,&local_res10);
        }
    }
    return 0;
}



undefined8 FUN_1406992d0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined8 local_res10;
    undefined local_res18 [16];

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((*(undefined8 **)(param_1 + 0x10) <= puVar5) || (puVar5 == &DAT_140a12138)) ||
                (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) != 0)) {
                pplVar3 = (longlong **)FUN_140056ab0(param_1,2,"Game.ItemData");
                if (((pplVar3 != (longlong **)0x0) && ((longlong **)*pplVar3 != (longlong **)0x0)) &&
                    (plVar1 = (longlong *)**pplVar3, plVar1 != (longlong *)0x0)) {
                    local_res10 = 1;
                    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,local_res18);
                    FUN_14057f0b0(lVar2,uVar4,0,&local_res10,1);
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1406993a0(undefined8 param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x10);
            iVar2 = FUN_140056d60(param_1,2);
            iVar4 = 200;
            if (iVar1 == 1) {
                iVar4 = 100;
            }
            FUN_14057ee50(lVar3,iVar4 + iVar2 + -1);
        }
    }
    return 0;
}



undefined8 FUN_140699770(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) && (lVar3 = FUN_1405845f0(), lVar3 != 0)) {
        iVar5 = *(int *)(lVar3 + 0x10);
        iVar1 = FUN_140056d60(param_1,2);
        iVar4 = 200;
        iVar2 = 200;
        if (*(int *)(lVar3 + 0x10) == 1) {
            iVar2 = 100;
        }
        if (iVar5 == 1) {
            iVar4 = 100;
        }
        iVar5 = (iVar4 - iVar2) + iVar1 + -1;
        if (((-1 < iVar5) && (iVar5 < *(int *)(lVar3 + 0x278))) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x270) + (longlong)iVar5 * 8), lVar3 != 0)) {
            lVar3 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar3 + 0x18));
            if (*(longlong *)(lVar3 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406998a0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x278);
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



undefined8 FUN_140699920(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            if ((*(int *)(lVar2 + 0x10) - 1U & 0xfffffffd) == 0) {
                lVar2 = FUN_140200220(0x284);
                if (lVar2 == 0) {
                    iVar3 = 0x40;
                }
                else {
                    iVar3 = *(int *)(lVar2 + 4);
                }
            }
            else {
                iVar3 = 0;
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406999c0(undefined8 param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int iVar5;
    undefined local_28 [8];
    longlong local_20;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x10);
            iVar2 = FUN_140056d60(param_1,2);
            iVar5 = 200;
            if (iVar1 == 1) {
                iVar5 = 100;
            }
            iVar5 = iVar5 + iVar2 + -1;
            if (iVar5 != 300) {
                uVar4 = FUN_140056bb0(param_1,3);
                FUN_14018f2d0(local_28,uVar4);
                FUN_14057f920(lVar3,iVar5,local_20);
                if (local_20 != 0) {
                    FUN_14018b900(local_20,0);
                }
            }
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_140699dd0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        lVar4 = FUN_1405845f0();
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 0x10);
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 - 4U < 3);
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



undefined8 FUN_14069a780(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            puVar3 = (undefined8 *)FUN_14069dfe0(param_1,3);
            if (puVar3 == (undefined8 *)0x0) {
                uVar4 = 0;
            }
            else {
                uVar4 = *puVar3;
            }
            FUN_14057fa20(lVar2,iVar1 + -1,uVar4);
        }
    }
    return 0;
}



undefined8 FUN_14069a810(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            FUN_14057fa20(lVar2,iVar1 + -1,0x7fffffffffffffff);
        }
    }
    return 0;
}



undefined8 FUN_14069a880(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            puVar3 = (undefined8 *)FUN_14069dfe0(param_1,3);
            if (puVar3 == (undefined8 *)0x0) {
                uVar4 = 0;
            }
            else {
                uVar4 = *puVar3;
            }
            FUN_14057faa0(lVar2,iVar1 + -1,uVar4);
        }
    }
    return 0;
}



undefined8 FUN_14069a910(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            FUN_14057faa0(lVar2,iVar1 + -1,0x7fffffffffffffff);
        }
    }
    return 0;
}



undefined8 FUN_14069a980(undefined8 param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong *puVar4;
    ulonglong uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) && (lVar3 = FUN_1405845f0(), lVar3 != 0))
        && (((puVar4 = (ulonglong *)FUN_140056ab0(param_1,2,"Game.Money"), lVar1 = DAT_140c65898,
            puVar4 != (ulonglong *)0x0 && (*(int *)(puVar4 + 1) == 1)) &&
             ((iVar2 = FUN_1403b5040(DAT_140c65898), iVar2 == 0 ||
                                                     (uVar5 = (longlong)*puVar4 >> 0x3f, uVar5 = (*puVar4 ^ uVar5) - uVar5,
                                                             uVar5 < *(ulonglong *)(lVar1 + 0x1670) || uVar5 == *(ulonglong *)(lVar1 + 0x1670))))))) {
        FUN_14057fb20(lVar3,-*puVar4);
    }
    return 0;
}



undefined8 FUN_14069aa30(undefined8 param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong *puVar4;
    ulonglong uVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) && (lVar3 = FUN_1405845f0(), lVar3 != 0))
        && (((puVar4 = (ulonglong *)FUN_140056ab0(param_1,2,"Game.Money"), lVar1 = DAT_140c65898,
            puVar4 != (ulonglong *)0x0 && (*(int *)(puVar4 + 1) == 1)) &&
             ((iVar2 = FUN_1403b5040(DAT_140c65898), iVar2 == 0 ||
                                                     (uVar5 = (longlong)*puVar4 >> 0x3f, uVar5 = (*puVar4 ^ uVar5) - uVar5,
                                                             uVar5 < *(ulonglong *)(lVar1 + 0x1670) || uVar5 == *(ulonglong *)(lVar1 + 0x1670))))))) {
        FUN_14057fb20(lVar3,*puVar4);
    }
    return 0;
}



undefined8 FUN_14069aae0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined4 uVar6;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) {
        LAB_14069aba6:
        uVar6 = 0;
    }
    else {
        plVar3 = (longlong *)FUN_1405845f0();
        if (plVar3 == (longlong *)0x0) goto LAB_14069aba6;
        lVar2 = FUN_140056ab0(param_1,2,"Game.Unit");
        if (lVar2 == 0) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_14069abb5;
        }
        lVar2 = FUN_1403d90d0();
        uVar5 = 0;
        uVar6 = 0;
        if (lVar2 != 0) {
            if (*(ulonglong *)(lVar2 + 0xa8) != 0) {
                plVar4 = *(longlong **)(lVar2 + 0xa0);
                do {
                    if (*plVar4 == *plVar3) {
                        uVar6 = 1;
                        goto LAB_14069aba8;
                    }
                    uVar5 = uVar5 + 1;
                    plVar4 = plVar4 + 1;
                } while (uVar5 < *(ulonglong *)(lVar2 + 0xa8));
            }
            uVar6 = 0;
        }
    }
    LAB_14069aba8:
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = uVar6;
    LAB_14069abb5:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069abd0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x230);
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



undefined8 FUN_14069ac50(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            if ((*(int *)(lVar2 + 0x10) - 4U < 3) || (*(int *)(lVar2 + 0x10) == 3)) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar6 = *(undefined8 **)(param_1 + 0x10);
                uVar3 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar6 + 1) = 5;
                *puVar6 = uVar3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar1 = FUN_1400578c0(param_1);
                uVar5 = (ulonglong)*(uint *)(lVar2 + 0x208);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                puVar6 = *(undefined8 **)(param_1 + 0x10);
                *puVar6 = *puVar4;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1,puVar6,L"nRating",uVar5 & 0xffffffff);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar6 = *(undefined8 **)(param_1 + 0x10);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                *puVar6 = *puVar4;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar6 = *(undefined8 **)(param_1 + 0x10);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                *puVar6 = *puVar4;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar6 = *(undefined8 **)(param_1 + 0x10);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                *puVar6 = *puVar4;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar6 = *(undefined8 **)(param_1 + 0x10);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                *puVar6 = *puVar4;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400579e0(param_1);
                return 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            goto LAB_14069ae68;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14069ae68:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069ae80(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    float fVar9;
    undefined local_38 [8];
    longlong local_30;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            if ((*(int *)(lVar3 + 0x10) - 4U < 3) || (*(int *)(lVar3 + 0x10) == 3)) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                uVar4 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar8 + 1) = 5;
                *puVar8 = uVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar2 = FUN_1400578c0(param_1);
                uVar7 = (ulonglong)*(uint *)(lVar3 + 0x30c);
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                *puVar8 = *puVar5;
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1,puVar8,L"nWins",uVar7 & 0xffffffff);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                *puVar8 = *puVar5;
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                *puVar8 = *puVar5;
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                fVar9 = *(float *)(lVar3 + 0x314);
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                *puVar8 = *puVar5;
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar3 = FUN_14018f0e0(local_38,L"fParticipation");
                if (*(longlong *)(lVar3 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                }
                else {
                    lVar6 = -1;
                    do {
                        lVar6 = lVar6 + 1;
                    } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
                    FUN_140058710(param_1);
                }
                if (local_30 != 0) {
                    FUN_14018b900(local_30,0);
                }
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)fVar9;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                *puVar8 = *puVar5;
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400579e0(param_1);
                return 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            goto LAB_14069b11f;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14069b11f:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14069b3b0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        lVar4 = FUN_1405845f0();
        if (lVar4 != 0) {
            iVar2 = FUN_140056d60(param_1,2);
            if (iVar2 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0(param_1);
            local_20 = uVar3;
            uVar5 = FUN_140202ca0(iVar2);
            FUN_140580280(lVar4,&local_28,uVar5);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar6;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,puVar1,uVar3);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069b520(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (iVar1 != 0) {
                FUN_14057fb80(lVar2,iVar1);
            }
        }
    }
    return 0;
}



undefined8 FUN_14069b590(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            if (iVar1 != 0) {
                FUN_14057fc00(lVar2,iVar1);
            }
        }
    }
    return 0;
}



undefined8 FUN_14069b600(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar2);
            FUN_14057fc80(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_14069b690(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) || (lVar1 = FUN_1405845f0(), lVar1 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0x220));
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



undefined8 FUN_14069b740(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined4 uStack100;
    undefined local_58 [8];
    longlong local_50;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    longlong local_18;
    undefined8 local_10;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        puVar2 = (undefined8 *)FUN_1405845f0();
        if (puVar2 != (undefined8 *)0x0) {
            uVar3 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_58,uVar3);
            local_10 = 0x21;
            local_30 = *puVar2;
            local_38 = CONCAT44(uStack100,*(undefined4 *)(DAT_140c635f0 + 0x1680));
            local_18 = local_50;
            local_28 = 0;
            local_20 = 0;
            FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_14069b8f0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            uVar2 = FUN_140056bb0(param_1,2);
            FUN_14018f2d0(local_28,uVar2);
            FUN_14057fd00(lVar1,local_20);
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_14069b980(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float local_res10 [6];

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            FUN_1401e83a0(local_res10,*(undefined8 *)(lVar2 + 0x238));
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)local_res10[0];
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069ba10(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            if (*(longlong *)(lVar1 + 0x348) != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildEventLogChange",&DAT_1409ea76c,
                              lVar1);
                return 0;
            }
            FUN_14057efa0(lVar1);
        }
    }
    return 0;
}



undefined8 FUN_14069c420(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            iVar1 = FUN_140056d60(param_1,2);
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) {
                iVar1 = 0;
            }
            else if (0x14 < iVar1) {
                iVar1 = 0x14;
            }
            FUN_14057f020(lVar2,100000,iVar1);
        }
    }
    return 0;
}



undefined8 FUN_14069c4a0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            FUN_14057f020(lVar1,1000,0);
        }
    }
    return 0;
}



undefined8 FUN_14069c4f0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0();
        if (lVar1 != 0) {
            FUN_14057f020(lVar1,2000,0);
        }
    }
    return 0;
}



undefined8 FUN_14069c540(longlong param_1)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        lVar4 = FUN_1405845f0();
        if (lVar4 != 0) {
            local_10 = 1;
            local_20 = 0xfffffffe;
            local_28 = &PTR_FUN_140b569f0;
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            local_18 = param_1;
            if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
                (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 5)) {
                FUN_1400579e0(param_1);
                puVar6 = *(undefined8 **)(local_18 + 0x10);
                puVar5 = (undefined8 *)(*(longlong *)(local_18 + 0x18) + 0x10);
                puVar9 = &DAT_140a12138;
                if (puVar5 < puVar6) {
                    puVar9 = puVar5;
                }
                *puVar6 = *puVar9;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
                local_20 = FUN_1400578c0(local_18);
            }
            uVar8 = 0;
            uVar10 = 0;
            uVar7 = 1;
            do {
                iVar3 = FUN_1400fb720(&local_28,*(undefined8 *)((longlong)&PTR_u_bTax_140c39558 + uVar10),1)
                        ;
                if (-1 < iVar3) {
                    lVar1 = *(longlong *)(local_18 + 0x10);
                    if ((*(int *)(lVar1 + -8) == 0) ||
                        ((*(int *)(lVar1 + -8) == 1 && (*(int *)(lVar1 + -0x10) == 0)))) {
                        bVar2 = false;
                    }
                    else {
                        bVar2 = true;
                    }
                    *(longlong *)(local_18 + 0x10) = lVar1 + -0x20;
                    if (bVar2) {
                        uVar8 = uVar8 | uVar7;
                    }
                }
                uVar7 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
                uVar10 = uVar10 + 8;
            } while (uVar10 < 0x20);
            FUN_14057fd80(lVar4,uVar8 & 0xffffffff);
            local_28 = &PTR_FUN_140b56a08;
            if (local_18 != 0) {
                FUN_1400579e0();
            }
        }
    }
    return 0;
}



undefined8 FUN_14069c760(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 8));
        if (lVar1 != 0) {
            FUN_1403c2a20(param_1,lVar1);
        }
    }
    return 0;
}



undefined8 FUN_14069ca50(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined4 uVar6;

    uVar6 = 1;
    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            uVar1 = FUN_140056d60(param_1,2);
            puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            puVar5 = &DAT_140a12138;
            if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
                puVar5 = puVar4;
            }
            if ((*(int *)(puVar5 + 1) == 0) || ((*(int *)(puVar5 + 1) == 1 && (*(int *)puVar5 == 0)))) {
                uVar6 = 0;
            }
            uVar2 = FUN_140056d60(param_1,4);
            FUN_14057fe00(lVar3,uVar1,uVar6,uVar2);
        }
    }
    return 0;
}



undefined8 FUN_14069cb10(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        lVar2 = FUN_1405845f0();
        if (lVar2 != 0) {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            uVar3 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar5 + 1) = 5;
            *puVar5 = uVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar1 = FUN_1400578c0(param_1);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            *puVar5 = *puVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069cf90(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        puVar3 = (undefined8 *)FUN_1405845f0();
        if (puVar3 != (undefined8 *)0x0) {
            iVar1 = FUN_140056d60(param_1,2);
            local_20 = (longlong)iVar1;
            local_10 = 0x25;
            local_30 = *puVar3;
            local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
            local_18 = 0;
            local_28 = 0;
            FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
        }
    }
    return 0;
}



undefined8 FUN_14069d070(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x368);
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



undefined8 FUN_14069d0f0(undefined8 param_1)

{
    uint uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        puVar3 = (undefined8 *)FUN_1405845f0();
        if (puVar3 != (undefined8 *)0x0) {
            uVar1 = FUN_140056d60();
            local_20 = (ulonglong)uVar1;
            local_10 = 0x26;
            local_30 = *puVar3;
            local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
            local_18 = 0;
            local_28 = 0;
            FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
        }
    }
    return 0;
}



undefined8 FUN_14069d1d0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            iVar1 = *(int *)(lVar3 + 0x36c);
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



undefined8 FUN_14069d250(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    int iVar5;
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        puVar2 = (undefined8 *)FUN_1405845f0();
        if (puVar2 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            puVar4 = &DAT_140a12138;
            if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
                puVar4 = puVar3;
            }
            if ((*(int *)(puVar4 + 1) == 0) ||
                ((iVar5 = 1, *(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
                iVar5 = 0;
            }
            local_20 = (longlong)iVar5;
            local_10 = 0x27;
            local_18 = 0;
            local_30 = *puVar2;
            local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
            local_28 = 0;
            FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
        }
    }
    return 0;
}



undefined8 FUN_14069d350(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Guild");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_1405845f0();
        if (lVar3 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar3 + 0x37c);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_14069d3d0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 uVar4;
    undefined **local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_20 = 1;
    local_30 = 0xfffffffe;
    local_38 = &PTR_FUN_140b569f0;
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
    iVar3 = (*(code *)local_38[1])(&local_38);
    if (iVar3 != 0) {
        FUN_14069d600(&local_38,param_2);
    }
    FUN_1400fb2a0(param_1,L"tBackgroundIcon",local_30);
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_58 = &PTR_FUN_140b569f0;
    local_40 = 1;
    local_50 = 0xfffffffe;
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
    iVar3 = (*(code *)local_58[1])(&local_58);
    if (iVar3 != 0) {
        FUN_14069d600(&local_58,param_2 + 0x10);
    }
    FUN_1400fb2a0(param_1,L"tForegroundIcon",local_50);
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_78 = &PTR_FUN_140b569f0;
    local_60 = 1;
    local_70 = 0xfffffffe;
    local_68 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    local_70 = FUN_1400578c0(lVar1);
    iVar3 = (*(code *)local_78[1])(&local_78);
    if (iVar3 != 0) {
        FUN_14069d600(&local_78,param_2 + 0x20);
    }
    FUN_1400fb2a0(param_1,L"tScanLines",local_70);
    local_78 = &PTR_FUN_140b56a08;
    if (local_68 != 0) {
        FUN_1400579e0();
    }
    local_58 = &PTR_FUN_140b56a08;
    if (local_48 != 0) {
        FUN_1400579e0();
    }
    local_38 = &PTR_FUN_140b56a08;
    if (local_28 != 0) {
        FUN_1400579e0();
    }
    return;
}



void FUN_14069d600(longlong param_1,uint *param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar5 = (ulonglong)*param_2;
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar2,L"idPart",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar5 = (ulonglong)param_2[1];
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar2,L"idColor1",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar5 = (ulonglong)param_2[2];
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar2,L"idColor2",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar5 = (ulonglong)param_2[3];
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar2,L"idColor3",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



void FUN_14069d750(longlong param_1,longlong *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined **local_88;
    int local_80;
    longlong local_78;
    undefined **local_70;
    int local_68;
    longlong local_60;
    undefined **local_58;
    int local_50;
    longlong local_48;
    undefined **local_40;
    undefined4 local_38;
    undefined4 uStack52;
    longlong local_30;
    undefined4 local_28;

    local_58 = &PTR_FUN_140b56a08;
    local_50 = -2;
    local_48 = 0;
    local_70 = &PTR_FUN_140b56a08;
    local_60 = 0;
    local_68 = -2;
    local_88 = &PTR_FUN_140b56a08;
    local_78 = 0;
    local_80 = -2;
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar1 != 0) {
        lVar8 = param_2[2];
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 1));
        puVar6 = *(undefined8 **)(lVar8 + 0x10);
        *puVar6 = *puVar4;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = param_2[2];
        lVar5 = FUN_14018f0e0(&local_40,L"tBackgroundIcon");
        iVar1 = -1;
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar7 = -1;
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar7) != '\0');
            FUN_140058710(lVar8);
        }
        if (CONCAT44(uStack52,local_38) != 0) {
            FUN_14018b900(CONCAT44(uStack52,local_38),0);
        }
        lVar5 = *(longlong *)(param_2[2] + 0x10);
        lVar8 = lVar5 + -0x10;
        FUN_14005e8e0(param_2[2],lVar5 + -0x20,lVar8,lVar8);
        local_60 = param_2[2];
        (*(code *)local_70[2])(&local_70,0xffffffff);
        *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
        iVar2 = (**(code **)(*param_2 + 8))(param_2);
        if (iVar2 != 0) {
            lVar8 = param_2[2];
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 1));
            puVar6 = *(undefined8 **)(lVar8 + 0x10);
            *puVar6 = *puVar4;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            lVar8 = param_2[2];
            lVar5 = FUN_14018f0e0(&local_40,L"tForegroundIcon");
            if (*(longlong *)(lVar5 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            }
            else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar7) != '\0');
                FUN_140058710(lVar8);
            }
            if (CONCAT44(uStack52,local_38) != 0) {
                FUN_14018b900(CONCAT44(uStack52,local_38),0);
            }
            lVar5 = *(longlong *)(param_2[2] + 0x10);
            lVar8 = lVar5 + -0x10;
            FUN_14005e8e0(param_2[2],lVar5 + -0x20,lVar8,lVar8);
            local_78 = param_2[2];
            (*(code *)local_88[2])(&local_88,0xffffffff);
            *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
            iVar2 = (**(code **)(*param_2 + 8))(param_2);
            if (iVar2 != 0) {
                lVar8 = param_2[2];
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 1));
                puVar6 = *(undefined8 **)(lVar8 + 0x10);
                *puVar6 = *puVar4;
                *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                lVar8 = param_2[2];
                lVar5 = FUN_14018f0e0(&local_40,L"tScanLines");
                if (*(longlong *)(lVar5 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                }
                else {
                    lVar7 = -1;
                    do {
                        lVar7 = lVar7 + 1;
                    } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar7) != '\0');
                    FUN_140058710(lVar8);
                }
                if (CONCAT44(uStack52,local_38) != 0) {
                    FUN_14018b900(CONCAT44(uStack52,local_38),0);
                }
                FUN_14005e8e0();
                local_48 = param_2[2];
                iVar2 = -1;
                (*(code *)local_58[2])(&local_58);
                *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
                local_40 = &PTR_FUN_140b569f0;
                local_30 = local_48;
                local_28 = 1;
                local_38 = 0xfffffffe;
                if ((local_48 != 0) && (local_50 != -2)) {
                    lVar8 = local_48;
                    puVar4 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_48 + 0x20) + 0xa0));
                    puVar6 = *(undefined8 **)(lVar8 + 0x10);
                    *puVar6 = *puVar4;
                    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                    puVar6 = (undefined8 *)(*(longlong *)(local_48 + 0x10) + -0x10);
                    iVar3 = iVar2;
                    if (puVar6 != &DAT_140a12138) {
                        iVar3 = *(int *)(*(longlong *)(local_48 + 0x10) + -8);
                    }
                    *(undefined8 **)(local_48 + 0x10) = puVar6;
                    if (iVar3 == 5) {
                        lVar8 = local_48;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_48 + 0x20) + 0xa0),local_50);
                        puVar6 = *(undefined8 **)(lVar8 + 0x10);
                        *puVar6 = *puVar4;
                        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                        local_38 = FUN_1400578c0(local_30);
                    }
                }
                FUN_14069dd00(param_1 + 0x20);
                local_40 = &PTR_FUN_140b56a08;
                if (local_30 != 0) {
                    FUN_1400579e0();
                }
                local_40 = &PTR_FUN_140b569f0;
                local_28 = 1;
                local_30 = local_60;
                local_38 = 0xfffffffe;
                if ((local_60 != 0) && (local_68 != -2)) {
                    lVar8 = local_60;
                    puVar4 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_60 + 0x20) + 0xa0));
                    puVar6 = *(undefined8 **)(lVar8 + 0x10);
                    *puVar6 = *puVar4;
                    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                    puVar6 = (undefined8 *)(*(longlong *)(local_60 + 0x10) + -0x10);
                    if (puVar6 != &DAT_140a12138) {
                        iVar2 = *(int *)(*(longlong *)(local_60 + 0x10) + -8);
                    }
                    *(undefined8 **)(local_60 + 0x10) = puVar6;
                    if (iVar2 == 5) {
                        lVar8 = local_60;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_60 + 0x20) + 0xa0),local_68);
                        puVar6 = *(undefined8 **)(lVar8 + 0x10);
                        *puVar6 = *puVar4;
                        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                        local_38 = FUN_1400578c0(local_30);
                    }
                }
                FUN_14069dd00(param_1);
                local_40 = &PTR_FUN_140b56a08;
                if (local_30 != 0) {
                    FUN_1400579e0();
                }
                local_40 = &PTR_FUN_140b569f0;
                local_28 = 1;
                local_30 = local_78;
                local_38 = 0xfffffffe;
                if ((local_78 != 0) && (local_80 != -2)) {
                    lVar8 = local_78;
                    puVar4 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_78 + 0x20) + 0xa0));
                    puVar6 = *(undefined8 **)(lVar8 + 0x10);
                    *puVar6 = *puVar4;
                    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                    puVar6 = (undefined8 *)(*(longlong *)(local_78 + 0x10) + -0x10);
                    if (puVar6 != &DAT_140a12138) {
                        iVar1 = *(int *)(*(longlong *)(local_78 + 0x10) + -8);
                    }
                    *(undefined8 **)(local_78 + 0x10) = puVar6;
                    if (iVar1 == 5) {
                        lVar8 = local_78;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_78 + 0x20) + 0xa0),local_80);
                        puVar6 = *(undefined8 **)(lVar8 + 0x10);
                        *puVar6 = *puVar4;
                        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                        local_38 = FUN_1400578c0(local_30);
                    }
                }
                FUN_14069dd00(param_1 + 0x10,&local_40);
                local_40 = &PTR_FUN_140b56a08;
                if (local_30 != 0) {
                    FUN_1400579e0();
                }
            }
        }
    }
    local_88 = &PTR_FUN_140b56a08;
    if (local_78 != 0) {
        FUN_1400579e0();
    }
    local_70 = &PTR_FUN_140b56a08;
    if (local_60 != 0) {
        FUN_1400579e0();
    }
    local_58 = &PTR_FUN_140b56a08;
    if (local_48 != 0) {
        FUN_1400579e0();
    }
    return;
}



void FUN_14069dd00(undefined8 *param_1,longlong *param_2)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    double *pdVar4;
    ulonglong uVar5;
    int iVar6;
    double local_res8;
    double local_18;
    undefined4 local_10;

    uVar5 = 0;
    iVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = FUN_1400fb720(param_2,L"idPart",3);
    if (iVar1 < 0) {
        return;
    }
    iVar1 = *(int *)(*(longlong *)(param_2[2] + 0x10) + -8);
    pdVar4 = (double *)(*(longlong *)(param_2[2] + 0x10) + -0x10);
    if (iVar1 == 3) {
        LAB_14069dd99:
        uVar5 = (ulonglong)pdVar4 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4;
    }
    else if ((iVar1 == 4) && (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,&local_res8), iVar1 != 0)
            ) {
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res8;
        goto LAB_14069dd99;
    }
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
    puVar2 = (undefined4 *)FUN_140202860(uVar5);
    if (puVar2 == (undefined4 *)0x0) {
        return;
    }
    *(undefined4 *)param_1 = *puVar2;
    iVar1 = FUN_1400fb720(param_2,L"idColor1",3);
    if (-1 < iVar1) {
        iVar1 = *(int *)(*(longlong *)(param_2[2] + 0x10) + -8);
        pdVar4 = (double *)(*(longlong *)(param_2[2] + 0x10) + -0x10);
        if (iVar1 == 3) {
            LAB_14069de20:
            iVar3 = (int)*pdVar4;
        }
        else {
            iVar3 = iVar6;
            if ((iVar1 == 4) && (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,&local_res8), iVar1 != 0))
            {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res8;
                goto LAB_14069de20;
            }
        }
        *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
        *(int *)((longlong)param_1 + 4) = iVar3;
    }
    iVar1 = FUN_1400fb720(param_2,L"idColor2",3);
    if (-1 < iVar1) {
        iVar1 = *(int *)(*(longlong *)(param_2[2] + 0x10) + -8);
        pdVar4 = (double *)(*(longlong *)(param_2[2] + 0x10) + -0x10);
        if (iVar1 == 3) {
            LAB_14069de98:
            iVar3 = (int)*pdVar4;
        }
        else {
            iVar3 = iVar6;
            if ((iVar1 == 4) && (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,&local_res8), iVar1 != 0))
            {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res8;
                goto LAB_14069de98;
            }
        }
        *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
        *(int *)(param_1 + 1) = iVar3;
    }
    iVar1 = FUN_1400fb720(param_2,L"idColor3",3);
    if (iVar1 < 0) {
        return;
    }
    iVar1 = *(int *)(*(longlong *)(param_2[2] + 0x10) + -8);
    pdVar4 = (double *)(*(longlong *)(param_2[2] + 0x10) + -0x10);
    if (iVar1 != 3) {
        if ((iVar1 != 4) || (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,&local_res8), iVar1 == 0))
            goto LAB_14069df0c;
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res8;
    }
    iVar6 = (int)*pdVar4;
    LAB_14069df0c:
    *(longlong *)(param_2[2] + 0x10) = *(longlong *)(param_2[2] + 0x10) + -0x20;
    *(int *)((longlong)param_1 + 0xc) = iVar6;
    return;
}



void FUN_14069df40(void)

{
    longlong lVar1;
    longlong lVar2;

    if (0x40 < DAT_140c7e9c8) {
        DAT_140c7e9c8 = 0x40;
        return;
    }
    lVar2 = FUN_14018db00(DAT_140c7e9c0,0x40,8);
    lVar1 = DAT_140c7e9c0;
    if ((DAT_140c7e9c0 != lVar2) &&
        (FUN_1407db590(lVar2,DAT_140c7e9c0,DAT_140c7e9c8 * 8), lVar1 = lVar2, DAT_140c7e9c0 != 0)) {
        (**(code **)(*(longlong *)(DAT_140c7e9c0 + -0x10) + 8))(DAT_140c7e9c0 + -0x10);
    }
    DAT_140c7e9c0 = lVar1;
    DAT_140c7e9c8 = 0x40;
    return;
}



longlong FUN_14069dfe0(longlong param_1,undefined4 param_2)

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
            local_18 = FUN_140062650(param_1,"Game.Money",10);
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
                    return *plVar3;
                }
                if (*(int *)(plVar3 + 1) == 7) {
                    return *plVar3 + 0x30;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_14069e130(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.RecruitmentGuild");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.RecruitmentGuild");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        lVar4 = *(longlong *)(lVar4 + 8);
        puVar1 = *(uint **)(param_1 + 0x10);
        lVar5 = *(longlong *)(lVar5 + 8);
        puVar1[2] = 1;
        *puVar1 = (uint)(lVar5 == lVar4);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069e1d0(longlong param_1)

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
        LAB_14069e213:
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
                local_18 = FUN_140062650(param_1,"Game.RecruitmentGuild",0x15);
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
                goto LAB_14069e2f7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14069e213;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14069e2f7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069e310(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.RecruitmentGuild");
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



void FUN_14069e390(longlong param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined *puVar6;
    undefined **ppuVar7;
    undefined auStack216 [32];
    undefined8 local_b8;
    undefined4 local_b0;
    undefined *local_a8;
    code *local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined *local_88;
    code *local_80 [3];
    char *local_68;
    undefined *local_60;
    char *local_58;
    undefined *local_50;
    undefined *local_48;
    code *local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    local_80[1] = (code *)&DAT_140b34ee8;
    local_80[0] = FUN_14069e130;
    local_80[2] = FUN_14069e310;
    local_40 = FUN_14069e130;
    local_68 = "RecruitmentRequestDetailedGuildInfo";
    local_60 = &LAB_14069e5c0;
    local_38 = 0;
    local_58 = "RecruitmentGetDetailedGuildInfo";
    local_30 = 0;
    local_50 = &DAT_14069e630;
    local_98 = 0;
    local_48 = &DAT_140b34ee0;
    local_90 = 0;
    local_a8 = &DAT_1409f6164;
    puVar6 = &DAT_140b34f30;
    local_a0 = FUN_14069e1d0;
    local_88 = &DAT_140b34f30;
    FUN_1400569b0(param_1,"Game.RecruitmentGuild");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_b8 = FUN_140062650(param_1,"__index",7);
    local_b0 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_b8,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    ppuVar7 = &local_88;
    do {
        puVar2 = ppuVar7[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar4 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar4 + 0x20) = puVar2;
        plVar3 = *(longlong **)(param_1 + 0x10);
        *plVar3 = lVar4;
        *(undefined4 *)(plVar3 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(param_1,0xfffffffe);
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (puVar6[lVar4] != '\0');
        local_b8 = FUN_140062650(param_1,puVar6);
        local_b0 = 4;
        FUN_14005ea50(param_1,uVar5,&local_b8,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar6 = ppuVar7[2];
        ppuVar7 = ppuVar7 + 2;
    } while (puVar6 != (undefined *)0x0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    FUN_140057020(param_1,"RecruitmentGuildTypeLib",&local_a8);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack216);
    return;
}



undefined8 FUN_14069ef50(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    bool bVar5;

    puVar3 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.QuestCategory");
    puVar4 = (undefined8 *)FUN_140056ab0(param_1);
    if ((puVar3 == (undefined8 *)0x0) || (puVar4 == (undefined8 *)0x0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if (((int **)*puVar3 == (int **)0x0) || ((int **)*puVar4 == (int **)0x0)) {
            bVar5 = false;
        }
        else {
            bVar5 = **(int **)*puVar3 == **(int **)*puVar4;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069f000(longlong param_1)

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
        LAB_14069f043:
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
                local_18 = FUN_140062650(param_1,"Game.QuestCategory",0x12);
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
                goto LAB_14069f127;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14069f043;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14069f127:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14069f140(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.QuestCategory");
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
    ppuVar5 = &PTR_DAT_140c5d280;
    puVar6 = PTR_DAT_140c5d280;
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
    FUN_140057020(param_1,"QuestCategory",&PTR_DAT_140b6ff20);
    FUN_140058710(param_1,"QuestCategoryType",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 10;
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



undefined8 FUN_14069f380(longlong param_1,longlong param_2)

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
    local_18 = FUN_140062650(param_1,"Game.QuestCategory",0x12);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_14069f410(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.QuestCategory");
    if (puVar3 == (undefined8 *)0x0) {
        return 0;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    iVar1 = **(int **)*puVar3;
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069f470(longlong param_1)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        uVar2 = FUN_14034bdd0();
        lVar3 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar4) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_14069f510(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong *plVar7;
    int iVar8;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1,"Game.QuestCategory");
    if (plVar5 == (longlong *)0x0) {
        return 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *plVar5;
    plVar5 = *(longlong **)(lVar2 + 0x20);
    plVar7 = (longlong *)*plVar5;
    iVar8 = 1;
    if (plVar7 != plVar5) {
        do {
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar6 = FUN_1407242b0();
            FUN_14072d5b0(param_1,uVar6);
            lVar4 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            plVar7 = (longlong *)*plVar7;
            iVar8 = iVar8 + 1;
        } while (plVar7 != (longlong *)*(longlong *)(lVar2 + 0x20));
    }
    return 1;
}



undefined8 FUN_14069f610(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.QuestCategory");
    if (pplVar3 == (longlong **)0x0) {
        return 0;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    iVar1 = *(int *)(**pplVar3 + 0x14);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069f670(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar5 = FUN_140056ab0(param_1,1,"Game.HexGroups");
    lVar6 = 0;
    lVar7 = lVar6;
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 8);
    }
    lVar5 = FUN_140056ab0(param_1,2,"Game.HexGroups");
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



undefined8 FUN_14069f710(longlong param_1)

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
        LAB_14069f753:
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
                local_18 = FUN_140062650(param_1,"Game.HexGroups",0xe);
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
                goto LAB_14069f837;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14069f753;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14069f837:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14069f850(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.HexGroups");
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



undefined8 FUN_14069f8d0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.HexGroups");
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
    ppuVar5 = &PTR_DAT_140c5d2f0;
    puVar6 = PTR_DAT_140c5d2f0;
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
    FUN_140057020(param_1,"HexGroups",&PTR_DAT_140b6ff40);
    return 1;
}



undefined8 FUN_14069fac0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140056ab0();
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) {
        iVar3 = 0;
    }
    else {
        iVar3 = *(int *)(*(longlong *)(lVar2 + 8) + 0x10);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14069fb20(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined *puVar3;
    int iVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined *puVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    undefined *puVar11;
    double dVar12;
    undefined8 local_res8;
    undefined local_98 [12];
    undefined4 uStack140;
    undefined local_88 [8];
    undefined *local_80;
    undefined8 local_78;
    undefined **local_68;
    int local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48 [2];
    longlong local_38;

    FUN_140056ab0(param_1,1,"Game.HexGroups");
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar9 = &DAT_140a12138;
    if (plVar5 < *(longlong **)(param_1 + 0x10)) {
        plVar9 = plVar5;
    }
    if (((*(int *)(plVar9 + 1) != 3) && (*(int *)(plVar9 + 1) == 4)) &&
        (iVar4 = FUN_14005ac80(*plVar9 + 0x20), iVar4 != 0)) {
        _local_98 = CONCAT88(stack0xffffffffffffff70,local_res8);
    }
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar4 = FUN_1400578c0();
    local_60 = iVar4;
    local_80 = (undefined *)FUN_14018b280();
    local_78 = 0;
    *local_80 = 0;
    *(undefined8 *)(local_80 + 8) = 0;
    *(undefined **)(local_80 + 0x10) = local_80;
    *(undefined **)(local_80 + 0x18) = local_80;
    FUN_140448a80();
    puVar11 = *(undefined **)(local_80 + 0x10);
    lVar7 = param_1;
    if (puVar11 != local_80) {
        do {
            _local_98 = ZEXT816(CONCAT44((float)*(int *)(puVar11 + 0x24),
                                         (float)(int)*(undefined8 *)(puVar11 + 0x20)));
            lVar7 = FUN_1400fa180(local_48,param_1,local_98);
            FUN_1400fb1d0(&local_68,*(undefined4 *)(lVar7 + 8));
            local_48[0] = &PTR_FUN_140b56a08;
            if (local_38 != 0) {
                FUN_1400579e0();
            }
            puVar8 = *(undefined **)(puVar11 + 0x18);
            if (puVar8 == (undefined *)0x0) {
                puVar8 = *(undefined **)(puVar11 + 8);
                if (puVar11 == *(undefined **)(puVar8 + 0x18)) {
                    do {
                        puVar11 = puVar8;
                        puVar8 = *(undefined **)(puVar11 + 8);
                    } while (puVar11 == *(undefined **)(puVar8 + 0x18));
                }
                if (*(undefined **)(puVar11 + 0x18) != puVar8) {
                    puVar11 = puVar8;
                }
            }
            else {
                for (puVar3 = *(undefined **)(puVar8 + 0x10); puVar11 = puVar8, puVar3 != (undefined *)0x0;
                     puVar3 = *(undefined **)(puVar3 + 0x10)) {
                    puVar8 = puVar3;
                }
            }
            lVar7 = local_58;
            iVar4 = local_60;
        } while (puVar11 != local_80);
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *)(lVar1 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)iVar4;
        if (dVar12 == 0.0) {
            puVar10 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_res8._0_4_ = SUB84(dVar12,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar12 == (double)puVar10[2])) goto LAB_14069fdbf;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_14069fdbf:
    puVar2 = *(undefined8 **)(lVar7 + 0x10);
    *puVar2 = *puVar10;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_140008410(local_88);
    FUN_14018b900(local_80,0);
    FUN_1400579e0(lVar7);
    return 1;
}



undefined8 FUN_14069fe20(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    FUN_140056ab0(param_1,1);
    uVar1 = FUN_14034bdd0();
    lVar2 = FUN_14018f0e0(local_28,uVar1);
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
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14069feb0(longlong param_1)

{
    int iVar1;
    uint5 uVar2;
    undefined auVar3 [14];
    uint uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    longlong lVar8;
    undefined (*pauVar9) [16];
    undefined8 uVar10;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    byte bVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined local_28 [32];

    lVar8 = FUN_140056ab0(param_1,1,"Game.HexGroups");
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar8 + 8) + 0x14);
        uVar4 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
                CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
        bVar11 = (byte)(uVar4 >> 0x18);
        uVar2 = CONCAT14((char)(uVar4 >> 8),uVar4) & 0xff000000ff;
        auVar3 = ZEXT1314(CONCAT112(bVar11,ZEXT912(CONCAT18((char)(uVar4 >> 0x10),(ulonglong)uVar2))));
        fVar5 = (float)SUB144(auVar3 >> 0x20,0) * 0.003921569;
        fVar6 = (float)(int)uVar2 * 0.003921569;
        fVar7 = (float)(uint)bVar11 * 0.003921569;
        local_28._0_16_ =
                CONCAT115((char)((uint)fVar7 >> 0x18),
                          CONCAT114((char)((uint)fVar7 >> 0x10),
                                    CONCAT113((char)((uint)fVar7 >> 8),
                                              CONCAT112(SUB41(fVar7,0),
                                                        CONCAT111((char)((uint)fVar6 >> 0x18),
                                                                  CONCAT110((char)((uint)fVar6 >> 0x10),
                                                                            CONCAT19((char)((uint)fVar6 >>
                                                                                                        8),CONCAT18(
                                                                                    SUB41(fVar6,0),
                                                                                    CONCAT17((char)((uint)fVar5 >> 0x18),
                                                                                             CONCAT16((char)((uint)fVar5 >> 0x10),
                                                                                                      CONCAT15((char)((uint)fVar5 >> 8
                                                                                                      ),CONCAT14(SUB41(
                                                                                                              fVar5,0),(float)SUB144(auVar3 >> 0x40,0) *
                                                                                                                       0.003921569))))))))))));
        if (iVar1 == 0) {
            uVar12 = 0x3f19999a;
            uVar13 = 0;
            uVar14 = 0;
            uVar15 = 0x3f800000;
        }
        else if (iVar1 == 1) {
            uVar12 = 0;
            uVar13 = 0;
            uVar14 = 0x3f19999a;
            uVar15 = 0x3f800000;
        }
        else if (iVar1 == 2) {
            uVar12 = 0x3eef1aa0;
            uVar13 = 0x3eef1aa0;
            uVar14 = 0x3eef1aa0;
            uVar15 = 0x3f800000;
        }
        else {
            uVar12 = _DAT_140c77810;
            uVar13 = uRam0000000140c77814;
            uVar14 = uRam0000000140c77818;
            uVar15 = uRam0000000140c7781c;
            if (iVar1 == 3) {
                uVar12 = 0;
                uVar13 = 0x3f19999a;
                uVar14 = 0x3f19999a;
                uVar15 = 0x3f800000;
            }
        }
        pauVar9 = (undefined (*) [16])FUN_140059170(param_1,0x10);
        *pauVar9 = CONCAT412(uVar15,CONCAT48(uVar14,CONCAT44(uVar13,uVar12)));
        lVar8 = *(longlong *)(param_1 + 0x20);
        uVar10 = FUN_140062650(param_1,"CColor",6);
        FUN_14005e8e0(param_1,lVar8 + 0xa0,local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
    }
    return 1;
}



undefined8 FUN_14069ffe0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;

    lVar4 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    lVar5 = 0;
    lVar6 = lVar5;
    if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
    }
    lVar4 = FUN_140056ab0(param_1,2,"Game.CommodityOrder");
    if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar6 == 0) || (lVar5 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar6 + 8) == 0) && (*(longlong *)(lVar5 + 8) == 0)) {
            iVar3 = FUN_1407e6af0(lVar6 + 8,lVar5 + 8,0x38);
            bVar7 = iVar3 == 0;
        }
        else {
            bVar7 = *(longlong *)(lVar6 + 8) == *(longlong *)(lVar5 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar7;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a00b0(longlong param_1)

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
        LAB_1406a00f3:
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
                local_18 = FUN_140062650(param_1,"Game.CommodityOrder",0x13);
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
                goto LAB_1406a01d7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a00f3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a01d7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a01f0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
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



undefined8 FUN_1406a0270(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.ItemAuction");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar5 + 8) == 0) && (*(longlong *)(lVar4 + 8) == 0)) {
            bVar6 = false;
        }
        else {
            bVar6 = *(longlong *)(lVar5 + 8) == *(longlong *)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0330(longlong param_1)

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
        LAB_1406a0373:
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
                local_18 = FUN_140062650(param_1,"Game.ItemAuction",0x10);
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
                goto LAB_1406a0457;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406a0373;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406a0457:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0470(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
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



bool FUN_1406a04f0(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 8) == 0) {
        if ((DAT_140dc4afc & 1) == 0) {
            DAT_140dc4afc = DAT_140dc4afc | 1;
            lVar1 = FUN_140200220();
            if (lVar1 == 0) {
                DAT_140dc4b00 = 200;
            }
            else {
                DAT_140dc4b00 = *(uint *)(lVar1 + 0xc);
            }
        }
        if ((*(uint *)(param_1 + 0x14) != 0) && (*(uint *)(param_1 + 0x14) <= DAT_140dc4b00)) {
            return 0 < *(longlong *)(param_1 + 0x18);
        }
    }
    return false;
}



void FUN_1406a0570(longlong param_1)

{
    int iVar1;
    undefined auStack104 [32];
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    iVar1 = FUN_1406a04f0();
    if (iVar1 == 0) {
        FUN_1407db4f0(local_10 ^ (ulonglong)auStack104);
        return;
    }
    local_48 = *(undefined8 *)(param_1 + 8);
    local_40 = *(undefined8 *)(param_1 + 0x10);
    local_38 = *(undefined8 *)(param_1 + 0x18);
    local_30 = *(undefined8 *)(param_1 + 0x20);
    local_28 = *(undefined8 *)(param_1 + 0x28);
    local_20 = *(undefined8 *)(param_1 + 0x30);
    local_18 = *(undefined8 *)(param_1 + 0x38);
    FUN_1403f4900(DAT_140c65898,0x6da,&local_48);
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack104);
    return;
}



undefined8 * FUN_1406a0620(undefined8 *param_1,undefined8 *param_2)

{
    _FILETIME local_res8;

    *param_1 = &PTR_FUN_140b6ffc0;
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
    param_1[4] = param_2[3];
    param_1[5] = param_2[4];
    param_1[6] = param_2[5];
    param_1[7] = param_2[6];
    param_1[8] = param_2[7];
    param_1[9] = param_2[8];
    param_1[10] = param_2[9];
    param_1[0xb] = param_2[10];
    param_1[0xc] = param_2[0xb];
    param_1[0xd] = param_2[0xc];
    param_1[0xe] = param_2[0xd];
    FUN_1406a2150(param_1 + 0xf,param_2[9],*(undefined *)((longlong)param_2 + 0x44));
    GetSystemTimeAsFileTime(&local_res8);
    *(_FILETIME *)(param_1 + 0x11) = local_res8;
    param_1[10] = param_1[0xf];
    return param_1;
}



undefined8 * FUN_1406a06f0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    lVar1 = param_1[0xf];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b567a8;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1406a0740(longlong param_1,undefined8 param_2)

{
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;

    if (*(longlong *)(param_1 + 0x10) == *(longlong *)(DAT_140c635f0 + 0x16a0)) {
        return 0;
    }
    local_28 = (ulonglong)*(uint *)(param_1 + 0x40);
    local_20 = *(undefined8 *)(param_1 + 8);
    local_18 = param_2;
    FUN_1403f4900(DAT_140c65898,0x55e,&local_28);
    return 1;
}



undefined8 FUN_1406a07b0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.CommodityOrder");
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
    ppuVar5 = &PTR_DAT_140c5d370;
    puVar6 = PTR_DAT_140c5d370;
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
    FUN_140057020(param_1,"CommodityOrder",&PTR_DAT_140b6ff60);
    return 1;
}



undefined8 FUN_1406a0a50(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) && (lVar1 != -8)) {
        uVar2 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar1 + 0x10),0);
        FUN_140415c70(param_1,uVar2);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0ad0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) && (lVar3 != -8)) {
        iVar1 = *(int *)(lVar3 + 0x14);
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



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406a0b50(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar2 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) && (lVar2 != -8)) {
        uVar1 = *(undefined8 *)(lVar2 + 0x18);
        local_20 = 1;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
        *puVar3 = uVar1;
        puVar3[1] = local_20;
        puVar3[2] = local_18;
        lVar2 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0c50(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) && (lVar4 != -8)) {
        puVar2 = *(uint **)(param_1 + 0x10);
        iVar1 = *(int *)(lVar4 + 0x28);
        puVar2[2] = 1;
        *puVar2 = (uint)(iVar1 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0cd0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) && (lVar4 != -8)) {
        puVar2 = *(uint **)(param_1 + 0x10);
        iVar1 = *(int *)(lVar4 + 0x2c);
        puVar2[2] = 1;
        *puVar2 = (uint)(iVar1 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0d50(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) &&
        (*(longlong *)(lVar1 + 8) != 0)) {
        FUN_140184510(param_1,*(undefined8 *)(lVar1 + 0x30));
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0dc0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) &&
        (*(longlong *)(lVar1 + 8) != 0)) {
        FUN_140184510(param_1,*(undefined8 *)(lVar1 + 0x38));
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0e30(longlong param_1)

{
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) &&
        (*(longlong *)(lVar1 + 8) == 0)) {
        if (*(int *)(lVar1 + 0x28) == 0) {
            local_28 = 0;
        }
        else {
            local_28 = FUN_1403e0290(*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x14));
        }
        local_18 = 0;
        local_20 = 1;
        FUN_140501210(param_1,&local_28);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a0fe0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
        if (*(longlong *)(lVar2 + 8) != 0) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_1406a10c4;
        }
        plVar3 = (longlong *)FUN_140056ab0(param_1,2,"Game.Money");
        if (plVar3 != (longlong *)0x0) {
            if (*(int *)(plVar3 + 1) != 1) {
                uVar4 = FUN_140056570(param_1,2,"price must be in credits");
                return uVar4;
            }
            if (*plVar3 < 1) {
                uVar4 = FUN_140056570(param_1,2,"price must be greater than zero");
                return uVar4;
            }
            *(longlong *)(lVar2 + 0x18) = *plVar3;
            *(longlong *)(lVar2 + 0x20) = *plVar3;
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 1;
            puVar1[2] = 1;
            goto LAB_1406a10c4;
        }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = 0;
    LAB_1406a10c4:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a10e0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 8), lVar1 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
    }
    else {
        if (*(longlong *)(lVar1 + 8) != 0) {
            puVar3 = *(undefined4 **)(param_1 + 0x10);
            *puVar3 = 0;
            puVar3[2] = 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar4 = puVar2;
        }
        if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
            *(undefined4 *)(lVar1 + 0x2c) = 0;
            puVar3 = *(undefined4 **)(param_1 + 0x10);
            *puVar3 = 1;
        }
        else {
            *(undefined4 *)(lVar1 + 0x2c) = 1;
            puVar3 = *(undefined4 **)(param_1 + 0x10);
            *puVar3 = 1;
        }
    }
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a11a0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if ((((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
         (plVar4 = (longlong *)(*(longlong *)(lVar3 + 8) + 8), plVar4 == (longlong *)0x0)) ||
        (bVar2 = 1, *plVar4 == 0)) {
        bVar2 = 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a1200(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        iVar3 = FUN_1406a04f0();
        bVar2 = 1;
        if (iVar3 != 0) goto LAB_1406a123c;
    }
    bVar2 = 0;
    LAB_1406a123c:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a1270(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong local_18;
    undefined8 local_10;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CommodityOrder");
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        local_18 = *(longlong *)(lVar1 + 8);
        if (local_18 == 0) {
            uVar2 = FUN_140056830(param_1,"Error canceling: commodity order is not posted");
            return uVar2;
        }
        local_10 = CONCAT44(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x10));
        FUN_1403f4900(DAT_140c65898,0x93,&local_18);
    }
    return 0;
}



undefined4 FUN_1406a1300(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.ItemAuction");
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
    ppuVar5 = &PTR_DAT_140c5d480;
    puVar6 = PTR_DAT_140c5d480;
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
    FUN_140057020(param_1,"ItemAuction",&PTR_DAT_140b6ffa0);
    FUN_140058710(param_1,"CodeEnumAuctionRemaining",0x18);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    lVar3 = 5;
    *puVar1 = uVar4;
    *(undefined4 *)(puVar1 + 1) = 5;
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



void FUN_1406a1530(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    byte bVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 *puVar12;
    undefined4 *puVar13;
    int iVar14;
    longlong lVar15;
    undefined8 uVar16;
    undefined8 *puVar17;
    undefined4 *puVar18;
    longlong lVar19;
    undefined4 *puVar20;
    undefined auStack2072 [32];
    undefined8 local_7f8;
    undefined8 local_7f0;
    undefined local_7e8 [32];
    ulonglong local_7c8;
    uint local_7c0;
    ulonglong local_7b8;
    ulonglong local_7b0;
    ulonglong local_7a8 [2];
    undefined **local_798;
    undefined4 local_790;
    longlong local_788;
    undefined8 local_780;
    undefined8 local_778;
    undefined8 local_770;
    undefined8 local_768;
    ulonglong *local_760;
    undefined8 local_758;
    uint local_750;
    undefined local_748 [16];
    undefined4 local_738;
    undefined8 local_730;
    ulonglong *local_728;
    undefined8 local_71c;
    undefined4 local_714;
    undefined8 local_710;
    undefined8 local_708;
    undefined8 local_700;
    undefined local_6f8 [16];
    undefined8 local_6e8;
    undefined4 local_6cc;
    undefined8 local_680;
    undefined8 local_678;
    undefined8 local_670;
    undefined8 local_668;
    undefined8 local_660;
    longlong *local_628;
    longlong local_620;
    undefined4 local_608 [178];
    ulonglong local_340;
    ulonglong local_338;
    longlong local_328;
    int local_190;
    int local_188;
    int local_184;
    undefined4 local_168 [80];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack2072;
    lVar15 = FUN_140056ab0(param_1,1);
    if (((lVar15 == 0) || (lVar15 = *(longlong *)(lVar15 + 8), lVar15 == 0)) || (lVar15 == -8)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        FUN_14040fae0(&local_628);
        uVar16 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar15 + 0x40));
        FUN_140412470(&local_628,uVar16,0,6);
        if ((local_188 == 0) || (local_620 == 0)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            uVar1 = *(uint *)(lVar15 + 0x60);
            local_7b0 = CONCAT44(uVar1 >> 6,(uint)CONCAT11((char)uVar1,(char)(uVar1 >> 3))) & 0x1ffff0707;
            bVar3 = (byte)(uVar1 >> 0x18);
            local_7b8 = ((ulonglong)(bVar3 >> 4) & 7) << 0x38 |
                        (ulonglong)
                                (CONCAT16(bVar3 >> 1,
                                          CONCAT15((char)(uVar1 >> 0x16),
                                                   CONCAT14((char)(uVar1 >> 0x13),
                                                            CONCAT13((char)(uVar1 >> 0x10),
                                                                     CONCAT12((char)(uVar1 >> 0xd),
                                                                              CONCAT11((char)(uVar1 >> 10),
                                                                                       (char)(uVar1 >> 7))))))) &
                                 0xff070707070707) & 0xff07ffffffffffff;
            if (local_184 < 7) {
                local_184 = 6;
                local_340 = local_7b8;
                local_338 = local_7b0;
                if (((local_628 != (longlong *)0x0) && (local_628[0xb] != 0)) &&
                    (*(int *)(local_628[0xb] + 8) < 1)) {
                    local_184 = 0;
                    local_340 = 0;
                    local_338 = 0;
                }
            }
            uVar2 = *(ulonglong *)(lVar15 + 0x68);
            local_7a8[0] = (uVar2 >> 0x18 & 0x3ff) << 0x30 |
                           (ulonglong)
                                   (CONCAT24((short)(uVar2 >> 0xe),CONCAT22((short)(uVar2 >> 4),(short)uVar2)) &
                                    0xffff03ff000f) & 0xffff03ffffffffff;
            uVar2 = *(ulonglong *)(lVar15 + 0x58);
            lVar19 = 0;
            if (local_188 != 0) {
                lVar19 = local_620;
            }
            if (uVar2 == 0) {
                local_7c0 = 1;
                local_7c8 = uVar2;
                if ((lVar19 != 0) && (*(int *)(lVar19 + 0x140) - 1U < 2)) {
                    local_7c0 = 0;
                }
            }
            else {
                local_7c8 = uVar2 & 0xffffffffffffff;
                local_7c0 = (uint)(byte)(uVar2 >> 0x38);
            }
            local_798 = &PTR_FUN_140b66a40;
            local_748 = ZEXT816(0);
            local_6f8 = ZEXT816(0);
            local_790 = 0;
            local_714 = 1;
            local_788 = 0;
            local_780 = 1;
            lVar19 = 0;
            if (local_188 != 0) {
                lVar19 = local_620;
            }
            local_778 = 0;
            local_770 = 0;
            local_768 = 0;
            local_760 = (ulonglong *)0x0;
            local_758 = 0;
            local_750 = 0;
            local_738 = 0;
            local_730 = 0;
            local_728 = (ulonglong *)0x0;
            local_71c = 0;
            local_710 = 0;
            local_708 = 0;
            local_700 = 0;
            local_6e8 = 0;
            local_6cc = 0;
            local_680 = 0;
            local_678 = 0;
            local_670 = 0;
            local_668 = 0;
            local_660 = 0;
            puVar17 = (undefined8 *)FUN_140445210(local_7e8);
            local_780 = *puVar17;
            local_778 = puVar17[1];
            local_770 = puVar17[2];
            local_768 = puVar17[3];
            local_760 = local_7a8;
            local_750 = (uint)*(byte *)(lVar15 + 0x4c);
            local_728 = &local_7b8;
            local_758 = CONCAT44(1,*(undefined4 *)(lVar15 + 0x48));
            local_748 = CONCAT88(&local_7c8,*(undefined8 *)(lVar15 + 0x50));
            local_738 = 0;
            local_730 = 0;
            local_788 = lVar19;
            FUN_1400b52a0(local_168);
            local_7f0 = 0;
            local_7f8 = 0;
            iVar14 = FUN_14040c310(&local_798,local_168,DAT_140c658f0,0);
            if ((iVar14 == 0) && (local_190 < 7)) {
                if ((((uint)local_168 | (uint)local_608) & 0xf) == 0) {
                    lVar15 = 2;
                    puVar12 = local_168;
                    puVar13 = local_608;
                    do {
                        puVar20 = puVar13;
                        puVar18 = puVar12;
                        uVar4 = puVar18[1];
                        uVar5 = puVar18[2];
                        uVar6 = puVar18[3];
                        uVar7 = puVar18[4];
                        uVar8 = puVar18[5];
                        uVar9 = puVar18[6];
                        uVar10 = puVar18[7];
                        *puVar20 = *puVar18;
                        puVar20[1] = uVar4;
                        puVar20[2] = uVar5;
                        puVar20[3] = uVar6;
                        uVar4 = puVar18[8];
                        uVar5 = puVar18[9];
                        uVar6 = puVar18[10];
                        uVar11 = puVar18[0xb];
                        puVar20[4] = uVar7;
                        puVar20[5] = uVar8;
                        puVar20[6] = uVar9;
                        puVar20[7] = uVar10;
                        uVar7 = puVar18[0xc];
                        uVar8 = puVar18[0xd];
                        uVar9 = puVar18[0xe];
                        uVar10 = puVar18[0xf];
                        puVar20[8] = uVar4;
                        puVar20[9] = uVar5;
                        puVar20[10] = uVar6;
                        puVar20[0xb] = uVar11;
                        uVar4 = puVar18[0x10];
                        uVar5 = puVar18[0x11];
                        uVar6 = puVar18[0x12];
                        uVar11 = puVar18[0x13];
                        puVar20[0xc] = uVar7;
                        puVar20[0xd] = uVar8;
                        puVar20[0xe] = uVar9;
                        puVar20[0xf] = uVar10;
                        uVar7 = puVar18[0x14];
                        uVar8 = puVar18[0x15];
                        uVar9 = puVar18[0x16];
                        uVar10 = puVar18[0x17];
                        puVar20[0x10] = uVar4;
                        puVar20[0x11] = uVar5;
                        puVar20[0x12] = uVar6;
                        puVar20[0x13] = uVar11;
                        uVar4 = puVar18[0x18];
                        uVar5 = puVar18[0x19];
                        uVar6 = puVar18[0x1a];
                        uVar11 = puVar18[0x1b];
                        puVar20[0x14] = uVar7;
                        puVar20[0x15] = uVar8;
                        puVar20[0x16] = uVar9;
                        puVar20[0x17] = uVar10;
                        uVar7 = puVar18[0x1c];
                        uVar8 = puVar18[0x1d];
                        uVar9 = puVar18[0x1e];
                        uVar10 = puVar18[0x1f];
                        puVar20[0x18] = uVar4;
                        puVar20[0x19] = uVar5;
                        puVar20[0x1a] = uVar6;
                        puVar20[0x1b] = uVar11;
                        puVar20[0x1c] = uVar7;
                        puVar20[0x1d] = uVar8;
                        puVar20[0x1e] = uVar9;
                        puVar20[0x1f] = uVar10;
                        lVar15 = lVar15 + -1;
                        puVar12 = puVar18 + 0x20;
                        puVar13 = puVar20 + 0x20;
                    } while (lVar15 != 0);
                    uVar4 = puVar18[0x21];
                    uVar5 = puVar18[0x22];
                    uVar6 = puVar18[0x23];
                    uVar8 = puVar18[0x24];
                    uVar9 = puVar18[0x25];
                    uVar10 = puVar18[0x26];
                    uVar11 = puVar18[0x27];
                    uVar16 = *(undefined8 *)(puVar18 + 0x2c);
                    puVar20[0x20] = puVar18[0x20];
                    puVar20[0x21] = uVar4;
                    puVar20[0x22] = uVar5;
                    puVar20[0x23] = uVar6;
                    uVar4 = puVar18[0x28];
                    uVar5 = puVar18[0x29];
                    uVar6 = puVar18[0x2a];
                    uVar7 = puVar18[0x2b];
                    puVar20[0x24] = uVar8;
                    puVar20[0x25] = uVar9;
                    puVar20[0x26] = uVar10;
                    puVar20[0x27] = uVar11;
                    puVar20[0x28] = uVar4;
                    puVar20[0x29] = uVar5;
                    puVar20[0x2a] = uVar6;
                    puVar20[0x2b] = uVar7;
                    *(undefined8 *)(puVar20 + 0x2c) = uVar16;
                }
                else {
                    FUN_1407db590(local_608,local_168,0x138);
                }
                local_190 = 6;
            }
            FUN_140415bb0(param_1,&local_628);
        }
        if (local_628 != (longlong *)0x0) {
            (**(code **)(*local_628 + 8))();
            local_628 = (longlong *)0x0;
        }
        if (local_328 != 0) {
            FUN_14018b900(local_328,0);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack2072);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406a1ae0(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) && (lVar2 != -8)) {
        uVar1 = *(undefined8 *)(lVar2 + 0x18);
        local_20 = 1;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
        *puVar3 = uVar1;
        puVar3[1] = local_20;
        puVar3[2] = local_18;
        lVar2 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406a1be0(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) && (lVar2 != -8)) {
        uVar1 = *(undefined8 *)(lVar2 + 0x20);
        local_20 = 1;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
        *puVar3 = uVar1;
        puVar3[1] = local_20;
        puVar3[2] = local_18;
        lVar2 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406a1ce0(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) && (lVar2 != -8)) {
        uVar1 = *(undefined8 *)(lVar2 + 0x28);
        local_20 = 1;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140059170(param_1,0x18);
        *puVar3 = uVar1;
        puVar3[1] = local_20;
        puVar3[2] = local_18;
        lVar2 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406a1de0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.ItemAuction");
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
        if (*(longlong *)(lVar1 + 0x10) != *(longlong *)(DAT_140c635f0 + 0x16a0)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        FUN_140184510(param_1,*(longlong *)(lVar1 + 0x38) * 10000000 + *(longlong *)(lVar1 + 0x88));
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406a1e80(longlong param_1)

{
    ulonglong uVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong *puVar6;
    uint uVar7;
    uint uVar8;

    lVar4 = FUN_140056ab0(param_1,1);
    if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 8), lVar4 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if ((DAT_140dc4b0c & 1) == 0) {
            DAT_140dc4b0c = DAT_140dc4b0c | 1;
            lVar5 = FUN_140200220(0x420);
            if (lVar5 == 0) {
                iVar3 = 300;
            }
            else {
                iVar3 = *(int *)(lVar5 + 4);
            }
            DAT_140c8b000 = (longlong)iVar3;
            lVar5 = FUN_140200220(0x420);
            if (lVar5 == 0) {
                iVar3 = 0x708;
            }
            else {
                iVar3 = *(int *)(lVar5 + 8);
            }
            DAT_140c8b008 = (longlong)iVar3;
            lVar5 = FUN_140200220(0x420);
            if (lVar5 == 0) {
                iVar3 = 0x1c20;
            }
            else {
                iVar3 = *(int *)(lVar5 + 0xc);
            }
            _DAT_140c8b010 = (longlong)iVar3;
            lVar5 = FUN_140200220();
            if (lVar5 == 0) {
                iVar3 = 0xa8c0;
            }
            else {
                iVar3 = *(int *)(lVar5 + 0x10);
            }
            _DAT_140c8b018 = (longlong)iVar3;
        }
        uVar1 = *(ulonglong *)(lVar4 + 0x38);
        uVar7 = 0;
        puVar6 = (ulonglong *)&DAT_140c8b000;
        do {
            uVar8 = uVar7;
            if (uVar1 < *puVar6 || uVar1 == *puVar6) break;
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 1;
            uVar8 = 4;
        } while (uVar7 < 4);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)uVar8;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}
