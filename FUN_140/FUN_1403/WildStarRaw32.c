//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140332580(longlong *param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
    u_short uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    char *pcVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    longlong local_res8;
    undefined local_48 [8];
    longlong local_40;

    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(param_3);
        }
        else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(&local_res8);
    lVar9 = local_res8 - _DAT_140c87988;
    lVar2 = (**(code **)(*param_1 + 0x130))(param_1,param_3);
    if (lVar2 != 0) {
        if (((param_2 & 0xffff) < (ulonglong)param_1[0x16]) &&
            (lVar3 = *(longlong *)(param_1[0x15] + (param_2 & 0xffff) * 8), lVar3 != 0)) {
            if (DAT_140c65820 == 1) {
                lVar5 = *(longlong *)(lVar3 + 0x18);
                iVar7 = 100;
                if ((lVar5 != 0) && (*(int *)(lVar5 + 0x118) == 2)) {
                    while (iVar7 = iVar7 + -1, iVar7 != 0) {
                        uVar1 = htons(*(u_short *)(lVar5 + 0x92));
                        local_res8 = 0x141debdf0;
                        FUN_1401a3130(0x15,2,&local_res8,100 - iVar7,uVar1);
                        Sleep(1);
                        lVar5 = *(longlong *)(lVar3 + 0x18);
                        if ((lVar5 == 0) || (*(int *)(lVar5 + 0x118) != 2)) break;
                    }
                }
            }
            if (*(int *)(lVar3 + 8) != 2) {
                if (*(int *)(lVar3 + 8) == 1) {
                    *(undefined4 *)(lVar3 + 8) = 2;
                }
                FUN_140333fc0(param_1,lVar3,lVar2,param_4);
            }
        }
        goto LAB_1403327d5;
    }
    if (DAT_140c65828 == 0) {
        pcVar6 = "Message Id #%d";
        LAB_1403326a4:
        FUN_14018ee90(local_48,pcVar6,param_3);
    }
    else {
        if (param_3 < 3) {
            pcVar6 = "Base Message Id #%d";
            goto LAB_1403326a4;
        }
        if ((_DAT_140c1e564 <= param_3) ||
            (lVar2 = *(longlong *)(DAT_140c65828 + 8 + (ulonglong)(param_3 - 3) * 0x10), lVar2 == 0)) {
            pcVar6 = "Invalid or foreign Message Id #%d";
            goto LAB_1403326a4;
        }
        local_40 = 0;
        lVar3 = -1;
        do {
            pcVar6 = (char *)(lVar2 + 1 + lVar3);
            lVar3 = lVar3 + 1;
        } while (*pcVar6 != '\0');
        lVar8 = (lVar3 + lVar2) - lVar2;
        lVar5 = lVar8 + 1;
        if (lVar5 != -1) {
            local_40 = FUN_14018b280(lVar5,0);
        }
        FUN_1407db590(local_40,lVar2,lVar8);
        puVar4 = (undefined *)((local_40 - lVar2) + lVar3 + lVar2);
        if (puVar4 != (undefined *)0x0) {
            *puVar4 = 0;
        }
    }
    local_res8 = 0x141debe70;
    FUN_1401a2e50(0xb,0,&local_res8,local_40,param_3);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    LAB_1403327d5:
    QueryPerformanceCounter(&local_res8);
    if (_DAT_140c796cc == 0) {
        if (30000 < (uint)(DAT_140c636a8 - _DAT_140c785b0)) {
            _DAT_140c796cc = 1;
            return;
        }
        FUN_1401c5100(L"H Network_SendMessageById",param_3,(local_res8 - lVar9) - _DAT_140c87988,1);
    }
    return;
}



undefined8 FUN_140332870(longlong param_1,ushort param_2,uint *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;

    if (((ulonglong)param_2 < *(ulonglong *)(param_1 + 0xb0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)param_2 * 8), lVar3 != 0)) {
        iVar4 = FUN_1403365e0(lVar3 + 0x60,param_3,(ulonglong)*param_3 + (longlong)param_3);
        if (iVar4 != 0) {
            return 4;
        }
        if (*(longlong *)(lVar3 + 0x308) == 0) {
            plVar1 = (longlong *)(param_1 + 0xf0);
            plVar2 = (longlong *)(lVar3 + 0x310);
            *(longlong **)(lVar3 + 0x308) = plVar1;
            *plVar2 = *plVar1;
            *plVar1 = lVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x308) = plVar2;
            }
        }
        return 0;
    }
    return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_140332920(longlong *param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    char *pcVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined8 local_res8;
    undefined8 in_stack_ffffffffffffffa8;
    undefined4 uVar8;
    undefined **local_48;
    longlong local_40;
    undefined8 local_38;
    undefined8 local_30;
    longlong local_28;
    undefined8 local_20;

    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    lVar3 = (**(code **)(*param_1 + 0x130))(param_1,param_3);
    if (lVar3 != 0) {
        lVar4 = *param_2;
        local_res8 = 0;
        if (lVar4 == 0) {
            local_40 = 0;
        }
        else {
            local_40 = lVar4 + 0x10;
            param_2 = (longlong *)0x0;
            *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar4 + 0x20);
        }
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_48 = &PTR_FUN_140b64640;
        iVar2 = FUN_1403355e0(&local_48,lVar3,param_4,&local_res8,param_2);
        local_48 = &PTR_FUN_140b64640;
        if (local_28 != 0) {
            FUN_14018b900(local_28,0);
        }
        if (iVar2 == 1) {
            return 9;
        }
        return -(iVar2 != 0) & 0xc;
    }
    if (DAT_140c65828 == 0) {
        pcVar5 = "Message Id #%d";
    }
    else if (param_3 < 3) {
        pcVar5 = "Base Message Id #%d";
    }
    else {
        if ((param_3 < _DAT_140c1e564) &&
            (lVar3 = *(longlong *)(DAT_140c65828 + 8 + (ulonglong)(param_3 - 3) * 0x10), lVar3 != 0)) {
            local_40 = 0;
            lVar4 = -1;
            do {
                pcVar5 = (char *)(lVar3 + 1 + lVar4);
                lVar4 = lVar4 + 1;
            } while (*pcVar5 != '\0');
            lVar7 = (lVar4 + lVar3) - lVar3;
            lVar1 = lVar7 + 1;
            if (lVar1 != -1) {
                local_40 = FUN_14018b280(lVar1,0);
            }
            FUN_1407db590(local_40,lVar3,lVar7);
            puVar6 = (undefined *)(((lVar4 + lVar3) - lVar3) + local_40);
            if (puVar6 != (undefined *)0x0) {
                *puVar6 = 0;
            }
            goto LAB_140332a0a;
        }
        pcVar5 = "Invalid or foreign Message Id #%d";
    }
    FUN_14018ee90(&local_48,pcVar5,param_3);
    LAB_140332a0a:
    local_res8 = 0x141debeb8;
    FUN_1401a2e50(0xb,0,&local_res8,local_40,CONCAT44(uVar8,param_3));
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return 0xb;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140332ae0(longlong param_1,longlong param_2)

{
    longlong local_res8 [4];

    local_res8[0] = param_1;
    QueryPerformanceCounter(local_res8);
    local_res8[0] = local_res8[0] - _DAT_140c87988;
    if ((ulonglong)*(uint *)(param_2 + 0x1a4) <=
        (ulonglong)((local_res8[0] - *(longlong *)(param_2 + 0x1a8)) * 1000) / DAT_140c636b8) {
        *(longlong *)(param_2 + 0x1a8) = local_res8[0];
        *(undefined8 *)(param_2 + 0x1b8 + (ulonglong)*(uint *)(param_2 + 0x2f0) * 0x10) =
                *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x1c0);
        *(longlong *)(param_2 + ((ulonglong)*(uint *)(param_2 + 0x2f0) + 0x1b) * 0x10) = local_res8[0];
        *(undefined8 *)(param_2 + 600 + (ulonglong)*(uint *)(param_2 + 0x2f4) * 0x10) =
                *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x1b0);
        *(longlong *)(param_2 + ((ulonglong)*(uint *)(param_2 + 0x2f4) + 0x25) * 0x10) = local_res8[0];
        *(uint *)(param_2 + 0x2f0) = (*(int *)(param_2 + 0x2f0) + 1U) % 10;
        *(uint *)(param_2 + 0x2f4) = (*(int *)(param_2 + 0x2f4) + 1U) % 10;
    }
    return;
}



longlong FUN_140332c10(longlong param_1,ushort param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    if (((ulonglong)param_2 < *(ulonglong *)(param_1 + 0xb0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)param_2 * 8), lVar3 != 0)) {
        FUN_140332ae0();
        uVar1 = *(uint *)(lVar3 + 0x2f0);
        uVar4 = (ulonglong)((uVar1 + 9) % 10);
        lVar2 = *(longlong *)(lVar3 + 0x1b8 + uVar4 * 0x10) -
                *(longlong *)((ulonglong)uVar1 * 0x10 + 0x1b8 + lVar3);
        fVar6 = (float)lVar2;
        if (lVar2 < 0) {
            fVar6 = fVar6 + 1.844674e+19;
        }
        lVar3 = *(longlong *)(lVar3 + (uVar4 + 0x1b) * 0x10) -
                *(longlong *)(((ulonglong)uVar1 + 0x1b) * 0x10 + lVar3);
        fVar5 = (float)lVar3;
        if (lVar3 < 0) {
            fVar5 = fVar5 + 1.844674e+19;
        }
        fVar7 = (float)DAT_140c636b8;
        if (DAT_140c636b8 < 0) {
            fVar7 = fVar7 + 1.844674e+19;
        }
        return (longlong)(fVar6 / (fVar5 / fVar7));
    }
    return 0;
}



longlong FUN_140332cf0(longlong param_1,ushort param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    if (((ulonglong)param_2 < *(ulonglong *)(param_1 + 0xb0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)param_2 * 8), lVar3 != 0)) {
        FUN_140332ae0();
        uVar1 = *(uint *)(lVar3 + 0x2f4);
        uVar4 = (ulonglong)((uVar1 + 9) % 10);
        lVar2 = *(longlong *)(lVar3 + 600 + uVar4 * 0x10) -
                *(longlong *)((ulonglong)uVar1 * 0x10 + 600 + lVar3);
        fVar6 = (float)lVar2;
        if (lVar2 < 0) {
            fVar6 = fVar6 + 1.844674e+19;
        }
        lVar3 = *(longlong *)(lVar3 + (uVar4 + 0x25) * 0x10) -
                *(longlong *)(((ulonglong)uVar1 + 0x25) * 0x10 + lVar3);
        fVar5 = (float)lVar3;
        if (lVar3 < 0) {
            fVar5 = fVar5 + 1.844674e+19;
        }
        fVar7 = (float)DAT_140c636b8;
        if (DAT_140c636b8 < 0) {
            fVar7 = fVar7 + 1.844674e+19;
        }
        return (longlong)(fVar6 / (fVar5 / fVar7));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140332dd0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_res10;
    undefined7 uStackX17;

    if (499 < (uint)(DAT_140c636a8 - _DAT_140c8a618)) {
        _DAT_140c8a618 = DAT_140c636a8;
        QueryPerformanceCounter((LARGE_INTEGER *)&local_res10);
        lVar3 = *(longlong *)(param_1[0x1b] + 0x10);
        lVar4 = CONCAT71(uStackX17,local_res10) - _DAT_140c87988;
        if (lVar3 != param_1[0x1b]) {
            do {
                if (((((ulonglong)*(ushort *)(lVar3 + 0x28) < (ulonglong)param_1[0x16]) &&
                      (lVar2 = *(longlong *)(param_1[0x15] + (ulonglong)*(ushort *)(lVar3 + 0x28) * 8),
                              lVar2 != 0)) && (*(int *)(*(longlong *)(lVar2 + 0x18) + 0x118) == 3)) &&
                    ((*(int *)(lVar2 + 0x20) == 0 &&
                      ((*(int *)(lVar2 + 0x1a0) + 1U) % 0x14 == *(uint *)(lVar2 + 0x19c))))) {
                    *(longlong *)(lVar2 + 0xa8 + (ulonglong)*(uint *)(lVar2 + 0x19c) * 8) = lVar4;
                    local_res10 = *(undefined *)(lVar2 + 0x19c);
                    *(longlong *)(lVar2 + 0xa0) = lVar4;
                    (**(code **)(*param_1 + 0xf0))();
                    *(uint *)(lVar2 + 0x19c) = (*(int *)(lVar2 + 0x19c) + 1U) % 0x14;
                }
                lVar2 = *(longlong *)(lVar3 + 0x18);
                if (lVar2 == 0) {
                    lVar2 = *(longlong *)(lVar3 + 8);
                    if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                        do {
                            lVar3 = lVar2;
                            lVar2 = *(longlong *)(lVar3 + 8);
                        } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                    }
                    if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                        lVar3 = lVar2;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar2 = lVar1;
                    }
                }
            } while (lVar3 != param_1[0x1b]);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140332f60(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    longlong lVar7;
    undefined8 *local_res8;

    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(0);
        }
        else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(&local_res8);
    lVar7 = (longlong)local_res8 - _DAT_140c87988;
    QueryPerformanceCounter(&local_res8);
    FUN_14018cdf0();
    lVar3 = param_1[0x1e];
    do {
        do {
            lVar5 = lVar3;
            if (lVar5 == 0) {
                QueryPerformanceCounter(&local_res8);
                if (_DAT_140c796cc == 0) {
                    if (30000 < (uint)(DAT_140c636a8 - _DAT_140c785b0)) {
                        _DAT_140c796cc = 1;
                        return;
                    }
                    FUN_1401c5100(L"H Network_Outgoing",0,(longlong)local_res8 + (-_DAT_140c87988 - lVar7),1);
                }
                return;
            }
            plVar1 = (longlong *)(lVar5 + 0x310);
            lVar3 = *plVar1;
            FUN_140332ae0();
            if ((0 < *(int *)(lVar5 + 0x31c)) &&
                (uVar6 = (**(code **)(*param_1 + 0xb0))(param_1,*(undefined4 *)(lVar5 + 0x10)),
                        *(uint *)(lVar5 + 0x31c) <= uVar6 && uVar6 != *(uint *)(lVar5 + 0x31c))) {
                local_res8 = (undefined8 *)0x141debf00;
                FUN_1401a2e50(0xb,0,&local_res8,*(undefined4 *)(lVar5 + 0x10));
                (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)(lVar5 + 0x10));
            }
            if (*(longlong **)(lVar5 + 0x308) != (longlong *)0x0) {
                **(longlong **)(lVar5 + 0x308) = *plVar1;
            }
            if (*plVar1 != 0) {
                *(undefined8 *)(*plVar1 + 0x308) = *(undefined8 *)(lVar5 + 0x308);
            }
            *(undefined8 *)(lVar5 + 0x308) = 0;
            *plVar1 = 0;
        } while (**(longlong **)(lVar5 + 0x80) == 0);
        do {
            lVar4 = **(longlong **)(lVar5 + 0x80);
            if ((*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 0x20)) &&
                (*(longlong *)(lVar4 + 0x38) == 0)) break;
            param_1[0x1f] = param_1[0x1f] + (*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x10));
            FUN_140337f20(*(longlong *)(lVar5 + 0x18) + 0x180);
        } while (**(longlong **)(lVar5 + 0x80) != 0);
        iVar2 = *(int *)(lVar5 + 8);
        local_res8 = *(undefined8 **)(lVar5 + 0x18);
        if (local_res8 != (undefined8 *)0x0) {
            (**(code **)*local_res8)();
        }
        (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6],&local_res8,iVar2 == 2);
        plVar1 = *(longlong **)(lVar5 + 0x80);
        if (plVar1 == (longlong *)0x0) {
            *(undefined8 *)(lVar5 + 0x70) = 0;
        }
        else if (*plVar1 == 0) {
            *(undefined8 *)(lVar5 + 0x68) = 0;
        }
        else {
            *(longlong *)(lVar5 + 0x68) = plVar1[1];
        }
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403331c0(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong *local_res8;
    uint local_28 [2];
    longlong *local_20;

    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(0);
        }
        else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(&local_res8);
    lVar4 = (longlong)local_res8 - _DAT_140c87988;
    while( true ) {
        local_28[0] = 6;
        local_20 = (longlong *)0x0;
        iVar2 = (**(code **)(*(longlong *)param_1[6] + 0x30))((longlong *)param_1[6],local_28);
        plVar1 = local_20;
        if (iVar2 != 0) break;
        switch(local_28[0]) {
            case 0:
                if (local_20 != (longlong *)0x0) {
                    (**(code **)*local_20)(local_20);
                }
                local_res8 = plVar1;
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)*plVar1)(plVar1);
                }
                (***(code ***)(undefined8 *)param_1[0xf])((undefined8 *)param_1[0xf],param_1,&local_res8);
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 8))(plVar1);
                }
                break;
            case 1:
                uVar3 = (**(code **)(*param_1 + 0x40))(param_1,&local_20);
                FUN_1403315a0(param_1,uVar3,1);
                break;
            case 2:
                uVar3 = (**(code **)(*param_1 + 0x40))(param_1,&local_20);
                FUN_1403315a0(param_1,uVar3,10);
                break;
            case 3:
                FUN_1403323a0(param_1,&local_20);
                break;
            case 4:
                uVar3 = (**(code **)(*param_1 + 0x40))(param_1,&local_20);
                FUN_1403315a0(param_1,uVar3,2);
                break;
            case 5:
                uVar3 = (**(code **)(*param_1 + 0x40))(param_1,&local_20);
                FUN_1403315a0(param_1,uVar3,0x11);
                break;
            default:
                local_res8 = (longlong *)0x141dec288;
                FUN_1401a2e50(0xb,0,&local_res8);
        }
        if (local_20 != (longlong *)0x0) {
            (**(code **)(*local_20 + 8))();
        }
    }
    if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 8))();
    }
    QueryPerformanceCounter(&local_res8);
    if (_DAT_140c796cc == 0) {
        if (30000 < (uint)(DAT_140c636a8 - _DAT_140c785b0)) {
            _DAT_140c796cc = 1;
            return;
        }
        FUN_1401c5100(L"H Network_Incoming",0,(longlong)local_res8 + (-_DAT_140c87988 - lVar4),1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1403336d0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong local_res8 [4];

    if (((param_2 & 0xffff) < *(ulonglong *)(param_1 + 0xb0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (param_2 & 0xffff) * 8), lVar1 != 0)) {
        QueryPerformanceCounter(local_res8);
        return (ulonglong)(((local_res8[0] - *(longlong *)(lVar1 + 0x300)) - _DAT_140c87988) * 1000) /
               DAT_140c636b8;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140333790(longlong param_1,ulonglong param_2,byte *param_3)

{
    byte bVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    ulonglong uVar5;
    longlong local_res8;

    if (((param_2 & 0xffff) < *(ulonglong *)(param_1 + 0xb0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (param_2 & 0xffff) * 8), lVar2 != 0)) {
        bVar1 = *param_3;
        uVar3 = (uint)bVar1;
        if (uVar3 < 0x14) {
            *(uint *)(lVar2 + 0x1a0) = uVar3;
            uVar5 = (ulonglong)uVar3;
            *(int *)(lVar2 + 0x198) =
                    *(int *)(lVar2 + 0x198) - *(int *)(lVar2 + 0x148 + (ulonglong)bVar1 * 4);
            QueryPerformanceCounter(&local_res8);
            iVar4 = (int)((ulonglong)
                                  (((local_res8 - *(longlong *)(lVar2 + 0xa8 + uVar5 * 8)) - _DAT_140c87988) *
                                   1000) / DAT_140c636b8);
            *(int *)(lVar2 + 0x148 + uVar5 * 4) = iVar4;
            *(int *)(lVar2 + 0x198) = *(int *)(lVar2 + 0x198) + iVar4;
            *(uint *)(lVar2 + 0x2f8) = *(uint *)(lVar2 + 0x198) / 0x14;
            *(undefined4 *)(lVar2 + 0x2fc) = *(undefined4 *)(lVar2 + 0x148 + uVar5 * 4);
        }
    }
    return;
}



void FUN_140333850(undefined8 param_1,undefined8 *param_2)

{
    (**(code **)*param_2)(param_2,0,1,&LAB_140088110,&LAB_140330000,&LAB_14007b1d0,0);
    (**(code **)*param_2)(param_2,1,1,&LAB_140088110,&LAB_140330000,&LAB_14007b1d0,0);
    (**(code **)*param_2)(param_2,2,1,FUN_140001b70,&LAB_140001ba0,&LAB_14007d8e0,0);
    return;
}



undefined8 FUN_140333960(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    local_res8 = param_1;
    puVar1 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
    }
    else {
        puVar1[1] = 1;
        puVar1[2] = 0;
        *puVar1 = &DAT_140af1d40;
    }
    puVar1[2] = DAT_140c63770;
    DAT_140c63770 = puVar1;
    local_res8 = 0x141dec308;
    FUN_1401a2e50(0xb,2,&local_res8);
    DAT_140c65820 = 0;
    local_res8 = 0;
    lVar4 = DAT_140c65838;
    if ((DAT_140c65838 != 0) ||
        (uVar2 = FUN_14033a5a0(&local_res8), lVar4 = local_res8, -1 < (int)uVar2)) {
        lVar3 = FUN_14018b280(0x108,0);
        if (lVar3 != 0) {
            DAT_140c65808 = FUN_1403300b0(lVar3,param_2,lVar4);
            return 0;
        }
        DAT_140c65808 = 0;
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 FUN_140333a50(void)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 local_res8;

    local_res8 = 0x141dec200;
    FUN_1401a2e50(0xb,1,&local_res8);
    if (DAT_140c65808 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65808 + 8))();
    }
    puVar2 = DAT_140c65838;
    DAT_140c65808 = (longlong *)0x0;
    if (DAT_140c65820 == 0) {
        if (DAT_140c65838 != (undefined8 *)0x0) {
            puVar1 = DAT_140c65838 + 3;
            *DAT_140c65838 = &PTR_FUN_140b64920;
            FUN_14033a960(puVar1);
            FUN_14033a960(puVar2 + 3);
            FUN_14018b900(puVar2[4],0);
            FUN_14033a8f0(puVar2 + 1);
            FUN_14018b900(puVar2,0);
            DAT_140c65838 = (undefined8 *)0x0;
            WSACleanup();
        }
    }
    else {
        if (DAT_140c65820 != 1) {
            local_res8 = 0x141dec1d8;
            FUN_1401a2e50(0xb,0,&local_res8);
            return 0;
        }
        if (DAT_140c65840 != 0) {
            FUN_14033d200();
            lVar3 = DAT_140c65840;
            if (DAT_140c65840 != 0) {
                FUN_14033b580(DAT_140c65840);
                FUN_14018b900(lVar3,0);
            }
            DAT_140c65840 = 0;
            WSACleanup();
            return 0;
        }
    }
    return 0;
}



void FUN_140333b90(IPAddr param_1,DWORD param_2,undefined4 *param_3)

{
    DWORD DVar1;
    HANDLE IcmpHandle;
    undefined auStackY152 [32];
    undefined2 local_58;
    undefined local_56;
    undefined local_50 [4];
    int local_4c;
    undefined4 local_48;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStackY152;
    IcmpHandle = IcmpCreateFile();
    if (IcmpHandle != (HANDLE)0xffffffffffffffff) {
        local_58 = 0x2a57;
        local_56 = 0;
        DVar1 = IcmpSendEcho(IcmpHandle,param_1,&local_58,3,(PIP_OPTION_INFORMATION)0x0,local_50,0x2b,
                             param_2);
        if (DVar1 == 0) {
            IcmpCloseHandle(IcmpHandle);
            GetLastError();
        }
        else if (local_4c == 0) {
            *param_3 = local_48;
            IcmpCloseHandle(IcmpHandle);
        }
        else {
            IcmpCloseHandle(IcmpHandle);
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong)auStackY152);
    return;
}



void FUN_140333c80(longlong **param_1)

{
    longlong *plVar1;

    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 0x10))();
    }
    plVar1 = param_1[1];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,0xffffffff);
    }
    if (param_1[1] != (longlong *)0x0) {
        (**(code **)(*param_1[1] + 8))();
    }
    if (*param_1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140333cc8. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**param_1 + 8))();
        return;
    }
    return;
}



ulonglong FUN_140333ce0(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    undefined *local_38;
    undefined4 local_30;
    undefined4 local_2c;
    longlong local_28;
    code *local_20;
    undefined8 local_18;
    undefined4 local_10;

    *(undefined4 *)(param_1 + 0x14) = 5000;
    *(undefined4 *)(param_1 + 0x18) = 5000;
    uVar2 = FUN_1401a1070(param_1,1,0,0,0);
    if (-1 < (int)uVar2) {
        local_38 = &DAT_140ae7594;
        local_30 = 2;
        local_2c = 1;
        local_18 = 0;
        local_20 = FUN_140333d70;
        local_10 = 1;
        local_28 = param_1;
        uVar1 = FUN_1401a0eb0(&local_38);
        uVar2 = 0;
        if ((int)uVar1 < 0) {
            uVar2 = (ulonglong)uVar1;
        }
    }
    return uVar2;
}



void FUN_140333d70(longlong **param_1)

{
    bool bVar1;
    int iVar2;

    iVar2 = (**(code **)(**param_1 + 0x20))(*param_1,*(undefined4 *)(param_1 + 3));
    do {
        if (iVar2 != 0) {
            return;
        }
        if (*(int *)(param_1 + 2) != 0) {
            *(undefined4 *)(param_1 + 4) = 0;
            bVar1 = false;
            iVar2 = FUN_140333b90(*(int *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                                  (longlong)param_1 + 0x1c);
            if (iVar2 < 0) {
                if (iVar2 == -0x7ff8d4fe) {
                    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
                    bVar1 = true;
                    if ((*(int *)((longlong)param_1 + 0x1c) != -1) &&
                        (*(uint *)((longlong)param_1 + 0x24) < 0xc)) goto LAB_140333de1;
                }
                *(int *)(param_1 + 4) = iVar2;
                if (bVar1) goto LAB_140333de1;
            }
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        }
        LAB_140333de1:
        iVar2 = (**(code **)(**param_1 + 0x20))();
    } while( true );
}



// WARNING: Removing unreachable block (ram,0x000140333f81)

DWORD FUN_140333e10(uint *param_1,IPAddr param_2)

{
    DWORD DVar1;
    ulonglong uVar2;
    uint uVar3;
    DWORD *pDVar4;
    longlong lVar6;
    DWORD *pDVar7;
    HANDLE *ppvVar8;
    undefined2 local_res8;
    undefined local_resa;
    ulonglong local_res18;
    ulonglong uVar5;

    pDVar7 = param_1 + 2;
    lVar6 = 0x40;
    uVar2 = 0;
    pDVar4 = pDVar7;
    do {
        *pDVar4 = 0;
        FUN_1407e4830(pDVar4 + 1,0,0x40);
        pDVar4 = pDVar4 + 0x11;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    ppvVar8 = (HANDLE *)(param_1 + 0x442);
    local_res8 = 0x2a57;
    local_resa = 0;
    local_res18 = 0;
    uVar5 = uVar2;
    do {
        local_res18 = local_res18 & 0xffffffffffffff00 | (ulonglong)(byte)((char)uVar5 + 1);
        ResetEvent(*ppvVar8);
        DVar1 = IcmpSendEcho2(*(HANDLE *)(param_1 + 0x4c2),*ppvVar8,(FARPROC)0x0,(PVOID)0x0,param_2,
                              &local_res8,3,(PIP_OPTION_INFORMATION)&local_res18,pDVar7 + 1,0x40,3000);
        if (DVar1 == 0) {
            DVar1 = GetLastError();
            *pDVar7 = DVar1;
        }
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        ppvVar8 = ppvVar8 + 1;
        pDVar7 = pDVar7 + 0x11;
    } while (uVar3 < 0x40);
    DVar1 = WaitForMultipleObjects(0x40,(HANDLE *)(param_1 + 0x442),1,3000);
    IcmpCloseHandle(*(HANDLE *)(param_1 + 0x4c2));
    if (((DVar1 == 0) || (DVar1 == 0x80)) || (DVar1 == 0x102)) {
        do {
            uVar3 = (int)uVar2 + 1;
            *param_1 = uVar3;
            if (param_1[uVar2 * 0x11 + 4] == 0) {
                param_1[1] = param_1[uVar2 * 0x11 + 5];
                return 0;
            }
            uVar2 = (ulonglong)uVar3;
        } while (uVar3 < 0x40);
        DVar1 = 0x80070003;
    }
    else {
        DVar1 = GetLastError();
        if (0 < (int)DVar1) {
            DVar1 = DVar1 & 0xffff | 0x80070000;
        }
    }
    return DVar1;
}



void FUN_140333fc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 local_res10 [3];

    local_res10[0] = 0;
    iVar3 = FUN_1403355e0(param_2 + 0x60,param_3,param_4,local_res10,0);
    if (iVar3 != 1) {
        if (iVar3 != 0) {
            FUN_1403315a0(param_1,*(undefined4 *)(param_2 + 0x10),0xc);
            return;
        }
        if (*(longlong *)(param_2 + 0x308) == 0) {
            plVar1 = (longlong *)(param_1 + 0xf0);
            plVar2 = (longlong *)(param_2 + 0x310);
            *(longlong **)(param_2 + 0x308) = plVar1;
            *plVar2 = *plVar1;
            *plVar1 = param_2;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x308) = plVar2;
            }
        }
    }
    return;
}



void FUN_140334090(longlong param_1,longlong *param_2)

{
    ushort uVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    undefined auStack104 [32];
    longlong local_48;
    longlong local_40;
    longlong local_38;
    longlong local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar1 = *(ushort *)(param_1 + 0xb0);
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            if ((((ulonglong)(uVar4 & 0xffff) < *(ulonglong *)(param_1 + 0xb0)) &&
                 (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar4 & 0xffff) * 8),
                         lVar2 != 0)) && (plVar3 = *(longlong **)(lVar2 + 0x18), plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
                param_2[1] = param_2[1] + local_40;
                *param_2 = *param_2 + local_48;
                param_2[2] = param_2[2] + local_38;
                param_2[3] = param_2[3] + local_30;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
    return;
}



void FUN_140334160(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = *(longlong *)(param_1 + 8);
    if ((ulonglong)(*(longlong *)(param_1 + 0x18) - lVar1 >> 3) < param_2) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar3 = FUN_14018b280(param_2 * 8,0);
        FUN_1407db590(lVar3,lVar1,lVar2 - lVar1 & 0xfffffffffffffff8);
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar3;
        *(longlong *)(param_1 + 0x10) = lVar3 + (lVar2 - lVar1 >> 3) * 8;
        *(ulonglong *)(param_1 + 0x18) = param_2 * 8 + lVar3;
    }
    return;
}



void FUN_140334210(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong *)(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong *)(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *)(lVar2 + 8);
                if (*(longlong *)(lVar2 + 0xa0) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 0xa0),0);
                    *(undefined8 *)(lVar2 + 0xa0) = 0;
                }
                if (*(longlong *)(lVar2 + 0x48) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 0x48),0);
                }
                FUN_14018b900(lVar2,0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



longlong FUN_1403342d0(longlong *param_1,undefined2 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1,2);
    *(undefined2 *)(lVar3 + lVar1 * 2) = *param_2;
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,param_1[1] * 2);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_140334370(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = *param_1 + param_2 * 2;
    uVar5 = param_1[1] - 1;
    FUN_1407db590(lVar2,lVar2 + 2,(uVar5 - param_2) * 2);
    puVar3 = (undefined8 *)*param_1;
    if (uVar5 == 0) goto LAB_140334430;
    if (puVar3 == (undefined8 *)0x0) {
        lVar2 = uVar5 * 2 + 0x10;
        uVar4 = uVar5;
    }
    else {
        if (uVar5 < (ulonglong)puVar3[-1] || uVar5 == puVar3[-1]) goto LAB_140334430;
        lVar2 = FUN_14018a3e0(uVar5 * 2 + 0x10);
        uVar4 = lVar2 - 0x10U >> 1;
        lVar2 = (lVar2 - 0x10U & 0xfffffffffffffffe) + 0x10;
        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar4;
            goto LAB_140334430;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = uVar4;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_140334430:
    if ((undefined8 *)*param_1 != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)*param_1,uVar5 * 2);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = uVar5;
    return;
}



longlong FUN_140334470(longlong param_1,ulonglong *param_2)

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
            if (*param_2 < *(ulonglong *)(lVar2 + 0x20)) {
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
                if (*(ulonglong *)(lVar4 + 0x20) < *param_2) {
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
    FUN_140334560(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_140334560(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong *)(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
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
            FUN_140334640(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_140334640(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a614,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140334706. Too many branches
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



void FUN_140334740(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    if (*(longlong *)(param_2 + 0xe) == 0) {
        if (*(longlong *)(param_1 + 0xe) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 0xe),0);
            *(undefined8 *)(param_1 + 0xe) = 0;
        }
        return;
    }
    if (*(longlong *)(param_1 + 0xe) == 0) {
        puVar6 = (undefined *)FUN_14018b280(0x418,0);
        if (puVar6 == (undefined *)0x0) {
            puVar6 = (undefined *)0x0;
        }
        else {
            *puVar6 = 7;
            *(undefined4 *)(puVar6 + 4) = 0x80;
            puVar6[8] = 0;
            *(undefined4 *)(puVar6 + 0xc) = 1;
            puVar6[0x10] = 7;
            *(undefined4 *)(puVar6 + 0x14) = 0x80;
            FUN_1407e4830(puVar6 + 0x18,0,0x400);
        }
        *(undefined **)(param_1 + 0xe) = puVar6;
    }
    puVar1 = *(undefined4 **)(param_2 + 0xe);
    puVar2 = *(undefined4 **)(param_1 + 0xe);
    if ((((uint)puVar1 | (uint)puVar2) & 0xf) == 0) {
        lVar7 = 8;
        do {
            puVar9 = puVar1;
            puVar8 = puVar2;
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *puVar8 = *puVar9;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
            uVar3 = puVar9[5];
            uVar4 = puVar9[6];
            uVar5 = puVar9[7];
            puVar8[4] = puVar9[4];
            puVar8[5] = uVar3;
            puVar8[6] = uVar4;
            puVar8[7] = uVar5;
            uVar3 = puVar9[9];
            uVar4 = puVar9[10];
            uVar5 = puVar9[0xb];
            puVar8[8] = puVar9[8];
            puVar8[9] = uVar3;
            puVar8[10] = uVar4;
            puVar8[0xb] = uVar5;
            uVar3 = puVar9[0xd];
            uVar4 = puVar9[0xe];
            uVar5 = puVar9[0xf];
            puVar8[0xc] = puVar9[0xc];
            puVar8[0xd] = uVar3;
            puVar8[0xe] = uVar4;
            puVar8[0xf] = uVar5;
            uVar3 = puVar9[0x11];
            uVar4 = puVar9[0x12];
            uVar5 = puVar9[0x13];
            puVar8[0x10] = puVar9[0x10];
            puVar8[0x11] = uVar3;
            puVar8[0x12] = uVar4;
            puVar8[0x13] = uVar5;
            uVar3 = puVar9[0x15];
            uVar4 = puVar9[0x16];
            uVar5 = puVar9[0x17];
            puVar8[0x14] = puVar9[0x14];
            puVar8[0x15] = uVar3;
            puVar8[0x16] = uVar4;
            puVar8[0x17] = uVar5;
            uVar3 = puVar9[0x19];
            uVar4 = puVar9[0x1a];
            uVar5 = puVar9[0x1b];
            puVar8[0x18] = puVar9[0x18];
            puVar8[0x19] = uVar3;
            puVar8[0x1a] = uVar4;
            puVar8[0x1b] = uVar5;
            uVar3 = puVar9[0x1d];
            uVar4 = puVar9[0x1e];
            uVar5 = puVar9[0x1f];
            puVar8[0x1c] = puVar9[0x1c];
            puVar8[0x1d] = uVar3;
            puVar8[0x1e] = uVar4;
            puVar8[0x1f] = uVar5;
            lVar7 = lVar7 + -1;
            puVar2 = puVar8 + 0x20;
            puVar1 = puVar9 + 0x20;
        } while (lVar7 != 0);
        uVar3 = puVar9[0x21];
        uVar4 = puVar9[0x22];
        uVar5 = puVar9[0x23];
        puVar8[0x20] = puVar9[0x20];
        puVar8[0x21] = uVar3;
        puVar8[0x22] = uVar4;
        puVar8[0x23] = uVar5;
        *(undefined8 *)(puVar8 + 0x24) = *(undefined8 *)(puVar9 + 0x24);
        return;
    }
    FUN_1407db590(puVar2,puVar1,0x418);
    return;
}



undefined8 * FUN_1403348b0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b64640;
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4],0);
        param_1[4] = 0;
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140334900(longlong param_1,ulonglong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined (*pauVar4) [16];
    uint uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined (*pauVar10) [16];
    byte bVar11;
    int iVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;

    if (*(uint *)(param_1 + 0x14) <= param_2) {
        uVar9 = 0xffffffff;
        iVar12 = 1;
        uVar8 = param_2;
        uVar5 = 0x20;
        do {
            if (uVar9 < uVar8) {
                iVar12 = iVar12 + uVar5;
                uVar8 = uVar8 >> (sbyte)uVar5;
            }
            uVar9 = uVar9 >> (sbyte)(uVar5 >> 1);
            uVar7 = uVar5 >> 1;
            uVar5 = uVar5 >> 1;
        } while (uVar7 != 0);
        uVar5 = iVar12 - (uint)*(byte *)(param_1 + 0x10);
        pauVar4 = (undefined (*) [16])(param_1 + 0x18);
        if (7 < uVar5) {
            uVar5 = 7;
        }
        uVar7 = 1 << ((byte)uVar5 & 0x1f);
        uVar5 = 1 << (7 - (byte)uVar5 & 0x1f);
        if (uVar5 != 0) {
            uVar9 = 0;
            uVar8 = (ulonglong)uVar5;
            pauVar10 = pauVar4;
            do {
                uVar5 = 0;
                uVar15 = uVar9;
                if (uVar7 != 0) {
                    if (1 < uVar7) {
                        lVar13 = 0;
                        lVar14 = 0;
                        do {
                            puVar3 = *pauVar4;
                            lVar2 = *(longlong *)(*pauVar4 + 8);
                            uVar5 = (int)uVar15 + 2;
                            uVar15 = (ulonglong)uVar5;
                            *pauVar4 = ZEXT816(0);
                            pauVar4 = pauVar4[1];
                            lVar13 = *(longlong *)puVar3 + lVar13;
                            lVar14 = lVar2 + lVar14;
                        } while (uVar5 < uVar7 - (uVar7 & 1));
                        uVar15 = lVar13 + lVar14;
                    }
                    if (uVar5 < uVar7) {
                        uVar6 = (ulonglong)(uVar7 - uVar5);
                        do {
                            uVar15 = uVar15 + *(longlong *)*pauVar4;
                            *(undefined8 *)*pauVar4 = 0;
                            pauVar4 = (undefined (*) [16])(*pauVar4 + 8);
                            uVar6 = uVar6 - 1;
                        } while (uVar6 != 0);
                    }
                }
                *(ulonglong *)*pauVar10 = uVar15;
                pauVar10 = (undefined (*) [16])(*pauVar10 + 8);
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        bVar11 = (byte)iVar12;
        *(byte *)(param_1 + 0x10) = bVar11;
        *(int *)(param_1 + 0x14) = 1 << (bVar11 & 0x1f);
        *(byte *)(param_1 + 8) = bVar11 - 7;
        *(int *)(param_1 + 0xc) = 1 << (bVar11 - 7 & 0x1f);
    }
    plVar1 = (longlong *)(param_1 + 0x18 + (param_2 >> (*(byte *)(param_1 + 8) & 0x3f)) * 8);
    *plVar1 = *plVar1 + param_3;
    return;
}



void FUN_140334a70(longlong param_1,ulonglong param_2,uint param_3)

{
    undefined4 uVar1;
    undefined *puVar2;

    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | param_3;
    if (((*(longlong *)(param_1 + 0x38) == 0) &&
         (*(ulonglong *)(param_1 + 0x10) == *(ulonglong *)(param_1 + 8))) &&
        (*(ulonglong *)(param_1 + 8) != param_2)) {
        puVar2 = (undefined *)FUN_14018b280(0x418,0);
        if (puVar2 == (undefined *)0x0) {
            puVar2 = (undefined *)0x0;
        }
        else {
            *puVar2 = 7;
            *(undefined4 *)(puVar2 + 4) = 0x80;
            puVar2[8] = 0;
            *(undefined4 *)(puVar2 + 0xc) = 1;
            puVar2[0x10] = 7;
            *(undefined4 *)(puVar2 + 0x14) = 0x80;
            FUN_1407e4830(puVar2 + 0x18,0,0x400);
        }
        *(undefined **)(param_1 + 0x38) = puVar2;
        FUN_140334900(puVar2,*(ulonglong *)(param_1 + 0x20) / *(ulonglong *)(param_1 + 0x18));
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_2;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_2 * param_2;
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 4) = uVar1;
    if (*(ulonglong *)(param_1 + 8) <= param_2 && param_2 != *(ulonglong *)(param_1 + 8)) {
        *(ulonglong *)(param_1 + 8) = param_2;
    }
    if (param_2 <= *(ulonglong *)(param_1 + 0x10) && *(ulonglong *)(param_1 + 0x10) != param_2) {
        *(ulonglong *)(param_1 + 0x10) = param_2;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_140334900(*(longlong *)(param_1 + 0x38),param_2,1);
        return;
    }
    return;
}



undefined2 * FUN_140334bb0(undefined2 *param_1,u_long param_2,u_short param_3)

{
    u_short uVar1;
    u_long uVar2;
    undefined *puVar3;

    *(undefined *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar3 = (undefined *)FUN_14018b280(8,0);
    *(undefined **)(param_1 + 0x10) = puVar3;
    *(undefined **)(param_1 + 0x14) = puVar3;
    *(undefined **)(param_1 + 0x18) = puVar3 + 8;
    if (puVar3 != (undefined *)0x0) {
        *puVar3 = 0;
    }
    *(undefined *)(param_1 + 0x1c) = 0;
    param_1[0x27] = 0;
    *param_1 = 2;
    uVar2 = ntohl(param_2);
    *(u_long *)(param_1 + 2) = uVar2;
    uVar1 = ntohs(param_3);
    param_1[1] = uVar1;
    *(undefined *)(param_1 + 0x1c) = 0;
    param_1[0x27] = 0;
    FUN_140334d90(param_1);
    if (*(char *)(param_1 + 0x1c) == '\0') {
        FUN_140334d90(param_1);
    }
    return param_1;
}



undefined2 * FUN_140334c60(undefined2 *param_1)

{
    u_short uVar1;
    undefined *puVar2;

    *(undefined *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar2 = (undefined *)FUN_14018b280(8,0);
    *(undefined **)(param_1 + 0x10) = puVar2;
    *(undefined **)(param_1 + 0x14) = puVar2;
    *(undefined **)(param_1 + 0x18) = puVar2 + 8;
    if (puVar2 != (undefined *)0x0) {
        *puVar2 = 0;
    }
    *(undefined *)(param_1 + 0x1c) = 0;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 2;
    uVar1 = ntohs(0);
    param_1[1] = uVar1;
    *(undefined *)(param_1 + 0x1c) = 0;
    param_1[0x27] = 0;
    FUN_140334d90(param_1);
    if (*(char *)(param_1 + 0x1c) == '\0') {
        FUN_140334d90(param_1);
    }
    return param_1;
}



sockaddr * FUN_140334cf0(sockaddr *param_1,SOCKET param_2)

{
    undefined *puVar1;
    int local_res8 [2];

    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1[2].sa_data + 6) = 0;
    *(undefined8 *)(param_1 + 3) = 0;
    puVar1 = (undefined *)FUN_14018b280(8,0);
    *(undefined **)(param_1 + 2) = puVar1;
    *(undefined **)(param_1[2].sa_data + 6) = puVar1;
    *(undefined **)(param_1 + 3) = puVar1 + 8;
    if (puVar1 != (undefined *)0x0) {
        *puVar1 = 0;
    }
    param_1[3].sa_data[6] = '\0';
    *(undefined2 *)(param_1[4].sa_data + 0xc) = 0;
    local_res8[0] = 0x10;
    getsockname(param_2,param_1,local_res8);
    param_1[3].sa_data[6] = '\0';
    *(undefined2 *)(param_1[4].sa_data + 0xc) = 0;
    FUN_140334d90(param_1);
    if (param_1[3].sa_data[6] == '\0') {
        FUN_140334d90(param_1);
    }
    return param_1;
}



void FUN_140334d90(longlong param_1)

{
    u_short uVar1;
    DWORD DVar2;
    longlong lVar3;
    HANDLE hObject;
    short *psVar4;
    undefined *puVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    short *psVar9;
    bool bVar10;
    undefined auStack152 [32];
    uint local_78;
    uint local_70;
    uint local_68;
    uint local_60;
    undefined4 *local_58;
    undefined local_50 [8];
    longlong local_48;
    undefined local_30 [24];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    local_58 = &DAT_140c7a010;
    DVar2 = GetCurrentThreadId();
    uVar6 = 0;
    if (DAT_140c7a010 == DVar2) {
        DAT_140c7a018 = DAT_140c7a018 + 1;
        DVar2 = DAT_140c7a010;
    }
    else {
        do {
            LOCK();
            bVar10 = DAT_140c7a018 == 0;
            DAT_140c7a018 = DAT_140c7a018 ^ (ulonglong)bVar10 * (DAT_140c7a018 ^ 1);
            if (bVar10) goto LAB_140334e1d;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60();
        DVar2 = DAT_140c7a010;
    }
    LAB_140334e1d:
    DAT_140c7a010 = DVar2;
    if (*(char *)(param_1 + 0x38) == '\0') {
        uVar1 = htons(*(u_short *)(param_1 + 2));
        local_60 = (uint)uVar1;
        local_68 = (uint)*(byte *)(param_1 + 7);
        local_70 = (uint)*(byte *)(param_1 + 6);
        local_78 = (uint)*(byte *)(param_1 + 5);
        lVar8 = 0x16;
        FUN_1400efdd0(local_30,0x16,"%d.%d.%d.%d:%d",*(undefined *)(param_1 + 4));
        lVar3 = FUN_14018f2d0(local_50);
        psVar4 = (short *)(param_1 + 0x4e);
        lVar7 = 0x16;
        psVar9 = *(short **)(lVar3 + 8);
        do {
            if ((lVar7 == -0x7fffffe8) || (*psVar9 == 0)) {
                if (lVar7 != 0) goto LAB_140334ec0;
                break;
            }
            *psVar4 = *psVar9;
            psVar4 = psVar4 + 1;
            psVar9 = psVar9 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        psVar4 = psVar4 + -1;
        LAB_140334ec0:
        *psVar4 = 0;
        if (local_48 != 0) {
            FUN_14018b900(local_48,0);
        }
        puVar5 = (undefined *)(param_1 + 0x4d);
        do {
            *puVar5 = puVar5[(longlong)&local_68 - param_1];
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + -1;
        } while (lVar8 != 0);
    }
    if (DAT_140c7a018 < 2) {
        DAT_140c7a010 = 0;
        DAT_140c7a018 = 0;
        if (DAT_140c7a020 != 0) {
            if (DAT_140c7a028 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar10 = DAT_140c7a028 == (HANDLE)0x0;
                DAT_140c7a028 =
                        (HANDLE)((ulonglong)DAT_140c7a028 ^
                                 (ulonglong)bVar10 * ((ulonglong)DAT_140c7a028 ^ (ulonglong)hObject));
                if (!bVar10) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a028);
        }
    }
    else {
        DAT_140c7a018 = DAT_140c7a018 - 1;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



void FUN_140334f90(undefined2 *param_1,longlong param_2,u_short param_3)

{
    char *pcVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;
    char *pcVar5;
    char cVar6;
    u_short uVar7;
    ulong uVar8;
    int iVar9;
    char *pcVar10;
    char *pcVar11;
    longlong lVar12;
    char **ppcVar13;
    hostent *phVar14;
    char cVar15;
    ulonglong uVar16;
    char *pcVar18;
    char *pcVar19;
    undefined auStack408 [32];
    undefined local_178;
    undefined local_168;
    char *local_160;
    char *local_158;
    longlong local_150;
    char local_148 [256];
    ulonglong local_48;
    ulonglong uVar17;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    *(undefined *)(param_1 + 0x1c) = 0;
    param_1[0x27] = 0;
    lVar3 = *(longlong *)(param_2 + 0x10);
    lVar4 = *(longlong *)(param_2 + 8);
    pcVar10 = (char *)0x0;
    lVar12 = (lVar3 - lVar4) + 1;
    local_150 = param_2;
    if (lVar12 != -1) {
        pcVar10 = (char *)FUN_14018b280(lVar12,0);
    }
    FUN_1407db590(pcVar10,lVar4);
    pcVar18 = pcVar10 + (lVar3 - lVar4);
    if (pcVar18 != (char *)0x0) {
        *pcVar18 = '\0';
    }
    pcVar19 = pcVar18 + -(longlong)pcVar10;
    *param_1 = 2;
    if (pcVar19 == (char *)0x0) {
        LAB_140335185:
        uVar7 = ntohs(param_3);
        param_1[1] = uVar7;
        pcVar18 = pcVar10;
    }
    else {
        local_178 = local_168;
        pcVar11 = (char *)FUN_140335470(pcVar10,pcVar18);
        if ((pcVar11 == pcVar18) ||
            (pcVar11 = pcVar11 + -(longlong)pcVar10, pcVar11 == (char *)0xffffffffffffffff))
            goto LAB_140335185;
        pcVar18 = pcVar11 + 1;
        local_160 = (char *)0xffffffffffffffff;
        local_158 = pcVar19 + -(longlong)pcVar18;
        pcVar1 = pcVar10 + (longlong)pcVar18;
        ppcVar13 = &local_158;
        if (pcVar19 + -(longlong)pcVar18 == (char *)0xffffffffffffffff) {
            ppcVar13 = &local_160;
        }
        lVar12 = 0;
        pcVar5 = *ppcVar13;
        local_160 = pcVar10 + ((longlong)(pcVar18 + (longlong)pcVar5) - (longlong)pcVar1);
        if (local_160 + 1 != (char *)0xffffffffffffffff) {
            lVar12 = FUN_14018b280(local_160 + 1,0);
        }
        FUN_1407db590(lVar12,pcVar1,local_160);
        if (pcVar10 + (longlong)(pcVar18 + (longlong)pcVar5 + (lVar12 - (longlong)pcVar1)) !=
            (char *)0x0) {
            pcVar10[(longlong)(pcVar18 + (longlong)pcVar5 + (lVar12 - (longlong)pcVar1))] = '\0';
        }
        uVar7 = FUN_1407df3e4(lVar12);
        uVar7 = ntohs(uVar7);
        param_1[1] = uVar7;
        if (lVar12 != 0) {
            FUN_14018b900(lVar12,0);
        }
        local_158 = pcVar11;
        local_160 = pcVar19;
        ppcVar13 = &local_160;
        if (pcVar11 <= pcVar19) {
            ppcVar13 = &local_158;
        }
        pcVar18 = (char *)0x0;
        pcVar19 = *ppcVar13;
        pcVar11 = pcVar19 + 1;
        if (pcVar11 != (char *)0xffffffffffffffff) {
            pcVar18 = (char *)FUN_14018b280(pcVar11,0);
        }
        FUN_1407db590(pcVar18,pcVar10);
        if (pcVar10 + (longlong)(pcVar18 + ((longlong)pcVar19 - (longlong)pcVar10)) != (char *)0x0) {
            pcVar10[(longlong)(pcVar18 + ((longlong)pcVar19 - (longlong)pcVar10))] = '\0';
        }
        param_2 = local_150;
        if (pcVar10 != (char *)0x0) {
            FUN_14018b900(pcVar10,0);
            param_2 = local_150;
        }
    }
    if ((byte)(*pcVar18 - 0x30U) < 10) {
        uVar8 = inet_addr(pcVar18);
    }
    else {
        pcVar10 = *(char **)(param_2 + 8);
        uVar17 = 0xffffffffffffffff;
        do {
            uVar16 = uVar17 + 1;
            pcVar19 = s_host__140c58bb9 + uVar17;
            uVar17 = uVar16;
        } while (*pcVar19 != '\0');
        if (uVar16 != 0) {
            pcVar19 = pcVar10;
            do {
                cVar2 = *pcVar19;
                cVar15 = cVar2;
                if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                    cVar15 = cVar2 + ' ';
                }
                cVar6 = pcVar19[(longlong)&DAT_140c58bb8 - (longlong)pcVar10];
                if ((byte)(cVar6 + 0xbfU) < 0x1a) {
                    cVar6 = cVar6 + ' ';
                }
                if (cVar15 != cVar6) {
                    phVar14 = gethostbyname(pcVar18);
                    if (phVar14 != (hostent *)0x0) {
                        uVar8 = *(ulong *)*phVar14->h_addr_list;
                        goto LAB_140335254;
                    }
                    *(undefined4 *)(param_1 + 2) = 0;
                    goto LAB_140335257;
                }
            } while ((cVar2 != '\0') &&
                     (pcVar19 = pcVar19 + 1, (ulonglong)((longlong)pcVar19 - (longlong)pcVar10) < uVar16));
        }
        iVar9 = gethostname(local_148,0x100);
        if (iVar9 != 0) {
            *(undefined4 *)(param_1 + 2) = 0;
            goto LAB_140335257;
        }
        phVar14 = gethostbyname(local_148);
        if (phVar14 == (hostent *)0x0) {
            *(undefined4 *)(param_1 + 2) = 0;
            goto LAB_140335257;
        }
        uVar8 = *(ulong *)*phVar14->h_addr_list;
    }
    LAB_140335254:
    *(ulong *)(param_1 + 2) = uVar8;
    LAB_140335257:
    *(undefined *)(param_1 + 0x1c) = 0;
    param_1[0x27] = 0;
    FUN_140334d90(param_1);
    if (*(char *)(param_1 + 0x1c) == '\0') {
        FUN_140334d90(param_1);
    }
    FUN_14018b900(pcVar18,0);
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack408);
    return;
}



undefined8 FUN_1403352b0(undefined8 param_1,uint param_2,short param_3)

{
    longlong lVar1;
    undefined *puVar2;
    undefined local_28 [8];
    longlong local_20;

    if (param_3 == 0) {
        puVar2 = &DAT_1409e6794;
    }
    else {
        lVar1 = FUN_14018efa0(local_28,&DAT_140af1d68,param_3);
        puVar2 = *(undefined **)(lVar1 + 8);
    }
    FUN_14018efa0(param_1,L"%u.%u.%u.%u%s",param_2 >> 0x18,param_2 >> 0x10 & 0xff,param_2 >> 8 & 0xff,
                  param_2 & 0xff,puVar2);
    if ((param_3 != 0) && (local_20 != 0)) {
        FUN_14018b900(local_20,0);
    }
    return param_1;
}



u_long FUN_140335360(char *param_1)

{
    char cVar1;
    ulong hostlong;
    u_long uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    longlong lVar6;

    if (param_1 == (char *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        lVar6 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
            lVar6 = lVar6 + 1;
            cVar1 = param_1[lVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280(lVar6 + 0x11,0);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = lVar6;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_1,lVar6);
        *(undefined *)(lVar6 + (longlong)puVar3) = 0;
    }
    uVar5 = 0;
    puVar4 = puVar3;
    if (puVar3[-1] != 0) {
        do {
            if (*(char *)(uVar5 + (longlong)puVar3) == ':') {
                puVar4 = (undefined8 *)FUN_14018b280(uVar5 + 0x11,0);
                if (puVar4 != (undefined8 *)0x0) {
                    *puVar4 = &PTR_LAB_140b55060;
                    puVar4[1] = uVar5;
                }
                puVar4 = puVar4 + 2;
                FUN_1407db590(puVar4,puVar3,uVar5);
                *(undefined *)((longlong)puVar4 + uVar5) = 0;
                if (puVar3 != (undefined8 *)0x0) {
                    (**(code **)(puVar3[-2] + 8))(puVar3 + -2);
                }
                break;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)puVar3[-1]);
    }
    hostlong = inet_addr((char *)puVar4);
    uVar2 = htonl(hostlong);
    if (puVar4 != (undefined8 *)0x0) {
        (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
    }
    return uVar2;
}



char * FUN_140335470(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;

    if ((param_1 == param_2) || (param_4 == ":")) {
        return param_1;
    }
    if (param_4 == "") {
        do {
            if (*param_1 == ':') {
                return param_1;
            }
            param_1 = param_1 + 1;
        } while (param_1 != param_2);
        return param_1;
    }
    do {
        while (*param_1 != ':') {
            param_1 = param_1 + 1;
            if (param_1 == param_2) {
                return param_2;
            }
        }
        pcVar1 = param_1 + 1;
        pcVar3 = "";
        if (pcVar1 == param_2) {
            return param_2;
        }
        pcVar2 = pcVar1;
        if (*pcVar1 == '\0') {
            do {
                pcVar3 = pcVar3 + 1;
                if (pcVar3 == param_4) {
                    return param_1;
                }
                pcVar2 = pcVar2 + 1;
                if (pcVar2 == param_2) {
                    return param_2;
                }
            } while (*pcVar2 == *pcVar3);
        }
        param_1 = pcVar1;
        if (pcVar1 == param_2) {
            return pcVar1;
        }
    } while( true );
}



undefined8 * FUN_140335530(undefined8 *param_1,undefined8 param_2)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b648f0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[3] = param_2;
    lVar1 = FUN_14018b280(param_2,0);
    *(undefined4 *)(param_1 + 7) = 1;
    param_1[4] = lVar1;
    param_1[6] = lVar1;
    param_1[5] = param_1[3] + lVar1;
    return param_1;
}



undefined4 FUN_140335590(longlong param_1)

{
    int *piVar1;
    undefined4 uVar2;

    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (*piVar1 == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
            FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
        }
        FUN_14018b900(param_1,0);
        uVar2 = 0;
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1403355e0(longlong param_1,uint *param_2,undefined8 param_3,ulonglong *param_4,
                   longlong *param_5)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    undefined ***pppuVar6;
    longlong lVar7;
    longlong lVar8;
    undefined *puVar9;
    char *pcVar10;
    ulonglong uVar11;
    uint uVar12;
    undefined *puVar13;
    longlong lVar14;
    ulonglong uVar15;
    longlong local_res10;
    undefined8 local_res18;
    ulonglong in_stack_ffffffffffffff40;
    undefined8 local_a8;
    undefined **local_a0;
    undefined8 local_98;
    LPVOID local_90;
    undefined **local_88;
    longlong local_80;
    LPVOID local_78;
    undefined local_68 [8];
    longlong local_60;
    ulonglong local_48;

    local_res18 = param_3;
    if (*(code **)(param_2 + 4) != (code *)0x0) {
        local_48 = *(ulonglong *)(param_2 + 2);
        local_res10 = 0x10;
        (**(code **)(param_2 + 4))(param_3,&local_res10);
        if ((param_2[0x12] - 1 & 0xfffffffd) != 0) {
            local_res10 = local_res10 + 0x20;
        }
        uVar15 = local_res10 + 7U >> 3;
        if (param_4 != (ulonglong *)0x0) {
            *param_4 = uVar15;
        }
        uVar4 = *param_2;
        lVar8 = 0;
        uVar12 = 0x1fffe;
        if (2 < uVar4) {
            if (uVar4 < _DAT_140c1e564) {
                uVar2 = *(uint *)(DAT_140c65828 + (ulonglong)(uVar4 - 3) * 0x10);
                uVar12 = 0x1fffe;
                if (uVar2 != 0) {
                    uVar12 = uVar2;
                }
            }
            else {
                uVar12 = 0x1fffe;
                if (((uVar4 >> 0x10) - 1 & 0xfffffffd) != 0) {
                    uVar12 = 0;
                }
            }
        }
        uVar11 = (ulonglong)((float)(ulonglong)uVar12 * 2.0);
        if (uVar12 < uVar15) {
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(&local_88,"Message Id #%d");
                pppuVar6 = &local_88;
            }
            else {
                pppuVar6 = (undefined ***)FUN_140335f10(&local_88,uVar4);
            }
            local_a8 = 0x141dec590;
            FUN_1401a3130(0xb,0,&local_a8,*param_2,pppuVar6[1],uVar15,uVar12);
            if (local_80 == 0) {
                return 1;
            }
            FUN_14018b900(local_80,0);
            return 1;
        }
        if (((longlong)((float)(ulonglong)uVar12 * 0.9) & 0xffffffffU) < uVar15) {
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(&local_88,"Message Id #%d");
                pppuVar6 = &local_88;
            }
            else {
                pppuVar6 = (undefined ***)FUN_140335f10(&local_88,uVar4);
            }
            local_a8 = 0x141dec4a0;
            in_stack_ffffffffffffff40 = uVar15;
            FUN_1401a3130(0xb,1,&local_a8,*param_2,pppuVar6[1],uVar15,uVar12);
            if (local_80 != 0) {
                FUN_14018b900(local_80,0);
            }
        }
        if ((uVar11 & 0xffffffff) < uVar15) {
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(&local_88,"Message Id #%d");
                pppuVar6 = &local_88;
            }
            else {
                pppuVar6 = (undefined ***)FUN_140335f10(&local_88,*param_2);
            }
            local_a8 = 0x141dec750;
            FUN_1401a3130(0xb,0,&local_a8,*param_2,pppuVar6[1],local_48,(int)uVar11);
            if (local_80 == 0) {
                return 1;
            }
            FUN_14018b900(local_80,0);
            return 1;
        }
        if (((longlong)((float)(uVar11 & 0xffffffff) * 0.9) & 0xffffffffU) < local_48) {
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(&local_88,"Message Id #%d");
                pppuVar6 = &local_88;
            }
            else {
                pppuVar6 = (undefined ***)FUN_140335f10(&local_88,*param_2);
            }
            local_a8 = 0x141dec670;
            in_stack_ffffffffffffff40 = local_48;
            FUN_1401a3130(0xb,1,&local_a8,*param_2,pppuVar6[1],local_48,(int)uVar11);
            if (local_80 != 0) {
                FUN_14018b900(local_80,0);
            }
        }
        if ((*(longlong *)(param_1 + 8) == 0) && (*(longlong *)(param_1 + 0x18) == 0)) {
            if (param_5 == (longlong *)0x0) {
                local_98 = 0;
                local_a0 = &PTR_LAB_140b5e648;
                local_90 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_a0);
                local_88 = local_a0;
                local_80 = local_98;
                local_78 = local_90;
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_68,"Message Id #%d");
                    puVar13 = local_68;
                }
                else {
                    puVar13 = (undefined *)FUN_140335f10(local_68,*param_2);
                }
                local_a8 = 0x141dec870;
                iVar3 = FUN_1401971e0(&DAT_140c8a628,0xb,&local_a8,*param_2,*(undefined8 *)(puVar13 + 8),
                                      &local_88);
                if (local_60 != 0) {
                    FUN_14018b900(local_60,0);
                }
                local_a0 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_90);
                if (iVar3 == 0) {
                    return 0x80004005;
                }
                DebugBreak();
                return 0x80004005;
            }
            lVar7 = FUN_14018b280(0x40);
            lVar5 = lVar8;
            if (lVar7 != 0) {
                lVar5 = FUN_140335530(lVar7,uVar15);
            }
            *(longlong *)(param_1 + 8) = lVar5 + 0x10;
            *param_5 = lVar5;
        }
        FUN_140334a70(param_2 + 0x14,uVar15,1);
        if (*(longlong *)(param_1 + 0x10) != 0) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
            *plVar1 = *plVar1 + 1;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar8 = FUN_1403366f0(param_1);
        }
        else {
            lVar5 = *(longlong *)(param_1 + 8);
            if (lVar5 == 0) {
                *(undefined8 *)(param_1 + 0x28) = 0;
            }
            else {
                *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
                lVar8 = *(longlong *)(param_1 + 0x10) +
                        (*(longlong *)(lVar5 + 0x20) - *(longlong *)(lVar5 + 0x10)) * 8;
            }
        }
        if (param_2[0x12] == 3) {
            LAB_140335d18:
            if (*(code **)(param_2 + 6) == (code *)0x0) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_68,"Message Id #%d");
                    puVar13 = local_68;
                }
                else {
                    puVar13 = (undefined *)FUN_140335f10(local_68,*param_2);
                }
                local_a8 = 0x141dec910;
                FUN_1401a3130(0xb,0,&local_a8,*param_2,*(undefined8 *)(puVar13 + 8));
                if (local_60 != 0) {
                    FUN_14018b900(local_60,0);
                }
                return 0x80004005;
            }
            uVar4 = (**(code **)(param_2 + 6))(param_1,local_res18);
            if ((int)uVar4 < 0) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_68,"Message Id #%d");
                    puVar13 = local_68;
                }
                else {
                    puVar13 = (undefined *)FUN_140335f10(local_68,*param_2);
                }
                local_a8 = 0x141decab0;
                FUN_1401a3130(0xb,0,&local_a8,*param_2,*(undefined8 *)(puVar13 + 8),
                              in_stack_ffffffffffffff40 & 0xffffffff00000000 | (ulonglong)uVar4);
                if (local_60 != 0) {
                    FUN_14018b900(local_60,0);
                    return uVar4;
                }
                return uVar4;
            }
            lVar5 = FUN_140336750(param_1);
            if ((lVar5 - lVar8 != local_res10) && (param_2[0x12] == 0)) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_68,"Message Id #%d");
                    puVar13 = local_68;
                }
                else {
                    puVar13 = (undefined *)FUN_140335f10(local_68,*param_2);
                }
                local_a8 = 0x141dec9d0;
                FUN_1401a2e50(0xb,0,&local_a8,*(undefined8 *)(puVar13 + 8),lVar5 - lVar8,local_res10);
                if (local_60 != 0) {
                    FUN_14018b900(local_60,0);
                }
            }
            if (*(longlong *)(param_1 + 0x10) != 0) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
                *plVar1 = *plVar1 + 1;
            }
            return 0;
        }
        uVar4 = FUN_140336380(param_1,uVar15 & 0xffffffff,0x20);
        if ((int)uVar4 < 0) {
            local_98 = 0;
            local_a0 = &PTR_LAB_140b5e648;
            local_90 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a0);
            local_88 = local_a0;
            local_80 = local_98;
            local_78 = local_90;
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(local_68,"Message Id #%d");
                puVar13 = local_68;
            }
            else {
                puVar13 = (undefined *)FUN_140335f10(local_68,*param_2);
            }
            local_a8 = 0x141dec820;
            puVar9 = &DAT_140c8a624;
        }
        else {
            uVar4 = FUN_140336380(param_1,*(undefined2 *)param_2,0x10);
            if (-1 < (int)uVar4) goto LAB_140335d18;
            local_98 = 0;
            local_a0 = &PTR_LAB_140b5e648;
            local_90 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a0);
            local_88 = local_a0;
            local_80 = local_98;
            local_78 = local_90;
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(local_68,"Message Id #%d");
                puVar13 = local_68;
            }
            else {
                puVar13 = (undefined *)FUN_140335f10(local_68,*param_2);
            }
            local_a8 = 0x141dec970;
            puVar9 = &DAT_140c8a620;
        }
        iVar3 = FUN_1401971e0(puVar9,0xb,&local_a8,*param_2,*(undefined8 *)(puVar13 + 8),&local_88);
        if (local_60 != 0) {
            FUN_14018b900(local_60,0);
        }
        local_a0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_90);
        if (iVar3 != 0) {
            DebugBreak();
            return uVar4;
        }
        return uVar4;
    }
    uVar4 = *param_2;
    if (DAT_140c65828 == 0) {
        pcVar10 = "Message Id #%d";
    }
    else if (uVar4 < 3) {
        pcVar10 = "Base Message Id #%d";
    }
    else {
        if ((uVar4 < _DAT_140c1e564) &&
            (lVar8 = *(longlong *)(DAT_140c65828 + 8 + (ulonglong)(uVar4 - 3) * 0x10), lVar8 != 0)) {
            local_80 = 0;
            lVar5 = -1;
            do {
                pcVar10 = (char *)(lVar8 + 1 + lVar5);
                lVar5 = lVar5 + 1;
            } while (*pcVar10 != '\0');
            lVar14 = (lVar5 + lVar8) - lVar8;
            lVar7 = lVar14 + 1;
            if (lVar7 != -1) {
                local_80 = FUN_14018b280(lVar7,0);
            }
            FUN_1407db590(local_80,lVar8,lVar14);
            puVar13 = (undefined *)(((lVar5 + lVar8) - lVar8) + local_80);
            if (puVar13 != (undefined *)0x0) {
                *puVar13 = 0;
            }
            goto LAB_1403356bb;
        }
        pcVar10 = "Invalid or foreign Message Id #%d";
    }
    FUN_14018ee90(&local_88,pcVar10);
    LAB_1403356bb:
    local_a8 = 0x141dec410;
    FUN_1401a3130(0xb,0,&local_a8,*param_2,local_80);
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return 0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140335ec0(uint param_1)

{
    int iVar1;

    if (param_1 < 3) {
        return 0x1fffe;
    }
    if (param_1 < _DAT_140c1e564) {
        iVar1 = *(int *)(DAT_140c65828 + (ulonglong)(param_1 - 3) * 0x10);
        if (iVar1 == 0) {
            return 0x1fffe;
        }
    }
    else {
        iVar1 = 0x1fffe;
        if (((param_1 >> 0x10) - 1 & 0xfffffffd) != 0) {
            iVar1 = 0;
        }
    }
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140335f10(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_2 < 3) {
        FUN_14018ee90(param_1,"Base Message Id #%d",param_2);
        return param_1;
    }
    if ((param_2 < _DAT_140c1e564) &&
        (lVar1 = *(longlong *)(DAT_140c65828 + 8 + (ulonglong)(param_2 - 3) * 0x10), lVar1 != 0)) {
        lVar2 = -1;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(lVar1 + lVar2) != '\0');
        FUN_14001b240(param_1,lVar1,lVar2 + lVar1);
        return param_1;
    }
    FUN_14018ee90(param_1,"Invalid or foreign Message Id #%d",param_2);
    return param_1;
}



void FUN_140335fb0(undefined8 param_1,longlong param_2)

{
    int iVar1;
    ulonglong uVar2;
    undefined4 uVar3;

    if (param_2 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffffffffffffff;
        do {
            uVar2 = uVar2 + 1;
        } while (*(char *)(param_2 + uVar2) != '\0');
        if (0x7f < uVar2) {
            iVar1 = FUN_140336380(param_1,1,1);
            if (iVar1 != 0) {
                return;
            }
            uVar3 = 0xf;
            goto LAB_14033600b;
        }
    }
    iVar1 = FUN_140336380(param_1,0,1);
    if (iVar1 != 0) {
        return;
    }
    uVar3 = 7;
    LAB_14033600b:
    iVar1 = FUN_140336380(param_1,uVar2,uVar3);
    if (iVar1 == 0) {
        FUN_1403360d0(param_1,param_2,uVar2 + param_2);
    }
    return;
}



void FUN_140336040(undefined8 param_1,longlong param_2)

{
    int iVar1;
    ulonglong uVar2;
    undefined4 uVar3;

    if (param_2 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffffffffffffff;
        do {
            uVar2 = uVar2 + 1;
        } while (*(short *)(param_2 + uVar2 * 2) != 0);
        if (0x7f < uVar2) {
            iVar1 = FUN_140336380(param_1,1,1);
            if (iVar1 != 0) {
                return;
            }
            uVar3 = 0xf;
            goto LAB_14033609c;
        }
    }
    iVar1 = FUN_140336380(param_1,0,1);
    if (iVar1 != 0) {
        return;
    }
    uVar3 = 7;
    LAB_14033609c:
    iVar1 = FUN_140336380(param_1,uVar2,uVar3);
    if (iVar1 == 0) {
        FUN_1403360d0(param_1,param_2,param_2 + uVar2 * 2);
    }
    return;
}



void FUN_1403360d0(longlong param_1,ulonglong *param_2,longlong param_3)

{
    byte bVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong *puVar4;
    ulonglong uVar5;
    int iVar6;
    ulonglong uVar7;

    iVar6 = 0;
    uVar7 = param_3 - (longlong)param_2;
    if ((uVar7 & 1) != 0) {
        lVar3 = *(longlong *)(param_1 + 8);
        bVar1 = *(byte *)param_2;
        if ((lVar3 == 0) ||
            ((ulonglong)
                     ((*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x20)) * 8 -
                      *(longlong *)(param_1 + 0x10)) < 0x40)) {
            iVar6 = FUN_140336470(param_1,bVar1,8);
        }
        else {
            puVar4 = *(ulonglong **)(lVar3 + 0x20);
            *puVar4 = *puVar4 & (1 << ((byte)*(longlong *)(param_1 + 0x10) & 0x3f)) - 1U;
            *puVar4 = *puVar4 | (ulonglong)bVar1 << ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
            if (0x40 < (*(longlong *)(param_1 + 0x10) + 0xfU & 0xfffffffffffffff8)) {
                *(byte *)(*(longlong *)(lVar3 + 0x20) + 8) =
                        bVar1 >> (0x40U - (char)*(longlong *)(param_1 + 0x10) & 0x3f);
            }
            *(longlong *)(lVar3 + 0x20) =
                    *(longlong *)(lVar3 + 0x20) + (*(longlong *)(param_1 + 0x10) + 8U >> 3);
            *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 7;
            iVar6 = 0;
        }
        uVar7 = uVar7 - 1;
        param_2 = (ulonglong *)((longlong)param_2 + 1);
    }
    if (((uVar7 & 2) != 0) && (-1 < iVar6)) {
        iVar6 = FUN_1400a7360(param_1);
        uVar7 = uVar7 - 2;
        param_2 = (ulonglong *)((longlong)param_2 + 2);
    }
    if (((uVar7 & 4) != 0) && (-1 < iVar6)) {
        lVar3 = *(longlong *)(param_1 + 8);
        uVar2 = *(uint *)param_2;
        if ((lVar3 == 0) ||
            ((ulonglong)
                     ((*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x20)) * 8 -
                      *(longlong *)(param_1 + 0x10)) < 0x40)) {
            iVar6 = FUN_140336470(param_1,uVar2,0x20);
        }
        else {
            puVar4 = *(ulonglong **)(lVar3 + 0x20);
            *puVar4 = *puVar4 & (1 << ((byte)*(longlong *)(param_1 + 0x10) & 0x3f)) - 1U;
            *puVar4 = *puVar4 | (ulonglong)uVar2 << ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
            if (0x40 < (*(longlong *)(param_1 + 0x10) + 0x27U & 0xfffffffffffffff8)) {
                *(char *)(*(longlong *)(lVar3 + 0x20) + 8) =
                        (char)(uVar2 >> (0x40U - (char)*(longlong *)(param_1 + 0x10) & 0x3f));
            }
            *(longlong *)(lVar3 + 0x20) =
                    *(longlong *)(lVar3 + 0x20) + (*(longlong *)(param_1 + 0x10) + 0x20U >> 3);
            *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 7;
            iVar6 = 0;
        }
        uVar7 = uVar7 - 4;
        param_2 = (ulonglong *)((longlong)param_2 + 4);
    }
    while ((uVar7 != 0 && (-1 < iVar6))) {
        lVar3 = *(longlong *)(param_1 + 8);
        uVar5 = *param_2;
        if ((lVar3 == 0) ||
            ((ulonglong)
                     ((*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x20)) * 8 -
                      *(longlong *)(param_1 + 0x10)) < 0x40)) {
            iVar6 = FUN_140336470(param_1,uVar5,0x40);
        }
        else {
            puVar4 = *(ulonglong **)(lVar3 + 0x20);
            *puVar4 = *puVar4 & (1 << ((byte)*(longlong *)(param_1 + 0x10) & 0x3f)) - 1U;
            *puVar4 = *puVar4 | uVar5 << ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
            if (0x40 < (*(longlong *)(param_1 + 0x10) + 0x47U & 0xfffffffffffffff8)) {
                *(char *)(*(longlong *)(lVar3 + 0x20) + 8) =
                        (char)(uVar5 >> (0x40U - (char)*(longlong *)(param_1 + 0x10) & 0x3f));
            }
            *(longlong *)(lVar3 + 0x20) =
                    *(longlong *)(lVar3 + 0x20) + (*(longlong *)(param_1 + 0x10) + 0x40U >> 3);
            *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) & 7;
            iVar6 = 0;
        }
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 8;
    }
    return;
}



undefined8 FUN_140336330(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar1 = FUN_140338550(*(undefined8 *)(param_1 + 0x18));
        if (lVar1 != 0) {
            FUN_140337f20(*(undefined8 *)(param_1 + 0x20),lVar1);
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_140336380(longlong param_1,undefined8 param_2,ulonglong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = (*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x20)) * 8 -
                *(longlong *)(param_1 + 0x10);
    }
    if (uVar2 < param_3) {
        uVar3 = FUN_140336470();
        return uVar3;
    }
    switch(param_3 + 7 >> 3) {
        case 1:
            FUN_1403367d0(lVar1 + 0x20,param_1 + 0x10,param_2,param_3);
            return 0;
        case 2:
            FUN_140336860(lVar1 + 0x20,param_1 + 0x10,param_2,param_3);
            return 0;
        case 3:
        case 4:
            FUN_1403368f0(lVar1 + 0x20,param_1 + 0x10,param_2,param_3);
            return 0;
        case 5:
        case 6:
        case 7:
        case 8:
            FUN_1400a7540(lVar1 + 0x20,param_1 + 0x10,param_2,param_3);
    }
    return 0;
}



undefined8 FUN_140336470(longlong param_1,ulonglong param_2,ulonglong param_3)

{
    longlong *plVar1;
    byte *pbVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    byte bVar6;

    lVar3 = *(longlong *)(param_1 + 8);
    if ((lVar3 == 0) ||
        ((*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x20)) * 8 ==
         *(longlong *)(param_1 + 0x10))) {
        if ((*(longlong *)(param_1 + 0x20) == 0) ||
            (lVar3 = FUN_140338550(*(undefined8 *)(param_1 + 0x18)), lVar3 == 0)) {
            return 0x80004005;
        }
        FUN_140337f20(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    if (param_3 == 0) {
        return 0;
    }
    do {
        uVar5 = 8 - *(longlong *)(param_1 + 0x10);
        if (param_3 < uVar5) {
            uVar5 = param_3;
        }
        bVar6 = ('\x01' << ((byte)uVar5 & 0x1f)) - 1;
        if (*(longlong *)(param_1 + 0x10) == 0) {
            **(byte **)(*(longlong *)(param_1 + 8) + 0x20) = (byte)param_2 & bVar6;
        }
        else {
            pbVar2 = *(byte **)(*(longlong *)(param_1 + 8) + 0x20);
            *pbVar2 = *pbVar2 | (byte)((bVar6 & param_2) << ((byte)*(longlong *)(param_1 + 0x10) & 0x3f));
        }
        param_3 = param_3 - uVar5;
        param_2 = param_2 >> ((byte)uVar5 & 0x3f);
        uVar4 = *(int *)(param_1 + 0x10) + (int)uVar5 & 7;
        *(ulonglong *)(param_1 + 0x10) = (ulonglong)uVar4;
        if ((uVar4 == 0) &&
            (plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20), *plVar1 = *plVar1 + 1,
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x20) ==
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18))) {
            if (*(longlong *)(param_1 + 0x20) == 0) {
                if (param_3 == 0) {
                    return 0;
                }
                return 0x80004005;
            }
            lVar3 = FUN_140338550(*(undefined8 *)(param_1 + 0x18));
            if (lVar3 == 0) {
                return 0x80004005;
            }
            FUN_140337f20(*(undefined8 *)(param_1 + 0x20));
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
        }
        if (param_3 == 0) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_1403365e0(longlong param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    if (*(longlong *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
        *plVar1 = *plVar1 + 1;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
        if (*(longlong *)(param_1 + 0x20) == 0) {
            return 0x80004005;
        }
        uVar2 = FUN_140336330();
        if ((int)uVar2 != 0) {
            return uVar2;
        }
    }
    if (param_2 != param_3) {
        do {
            lVar4 = *(longlong *)(param_1 + 8);
            uVar5 = *(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x20);
            if ((ulonglong)(param_3 - param_2) <= uVar5) {
                FUN_1407db590(*(undefined8 *)(lVar4 + 0x20),param_2,param_3 - param_2);
                *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + (param_3 - param_2);
                return 0;
            }
            FUN_1407db590(*(undefined8 *)(lVar4 + 0x20),param_2,uVar5);
            *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + uVar5;
            lVar4 = param_2 + uVar5;
            if ((((param_3 != param_2) && (*(longlong *)(param_1 + 0x20) == 0)) ||
                 (*(longlong *)(param_1 + 0x20) == 0)) ||
                (lVar3 = FUN_140338550(*(undefined8 *)(param_1 + 0x18)), lVar3 == 0)) {
                return 0x80004005;
            }
            FUN_140337f20(*(undefined8 *)(param_1 + 0x20),lVar3);
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
            param_2 = lVar4;
        } while (lVar4 != param_3);
    }
    return 0;
}



longlong FUN_1403366f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
        return 0;
    }
    lVar4 = 0;
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        lVar2 = **(longlong **)(param_1 + 0x20);
        for (lVar3 = *(longlong *)(lVar2 + 0x38); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x38)) {
            lVar4 = lVar4 + (*(longlong *)(lVar2 + 0x20) - *(longlong *)(lVar2 + 0x10)) * 8;
            lVar2 = lVar3;
        }
    }
    return *(longlong *)(param_1 + 0x10) +
           (*(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x10)) * 8 + lVar4;
}



longlong FUN_140336750(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
        lVar1 = *(longlong *)(param_1 + 8);
        if (lVar1 == 0) {
            return 0;
        }
        lVar5 = 0;
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
            lVar4 = **(longlong **)(param_1 + 0x20);
            for (lVar2 = *(longlong *)(lVar4 + 0x38); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x38)) {
                lVar5 = lVar5 + (*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x10)) * 8;
                lVar4 = lVar2;
            }
        }
        return *(longlong *)(param_1 + 0x10) +
               (*(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x10)) * 8 + lVar5;
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        return 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    if (lVar4 == 0) {
        lVar4 = **(longlong **)(param_1 + 0x20);
    }
    lVar2 = *(longlong *)(lVar4 + 0x38);
    while (lVar3 = lVar2, lVar3 != 0) {
        lVar5 = lVar5 + (*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x10)) * 8;
        lVar4 = lVar3;
        lVar2 = *(longlong *)(lVar3 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return *(longlong *)(param_1 + 0x10) +
           (*(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x10)) * 8 + lVar5;
}



void FUN_1403367d0(byte **param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
    byte *pbVar1;
    byte bVar2;

    if (param_4 < 8) {
        bVar2 = ('\x01' << ((byte)param_4 & 0x1f)) - 1;
    }
    else {
        bVar2 = 0xff;
    }
    pbVar1 = *param_1;
    *pbVar1 = *pbVar1 & ('\x01' << ((byte)*param_2 & 0x1f)) - 1U;
    *pbVar1 = *pbVar1 | (byte)((bVar2 & param_3) << ((byte)*param_2 & 0x3f));
    if (8 < (param_4 + 7 + *param_2 & 0xfffffffffffffff8)) {
        (*param_1)[1] = (byte)(param_3 >> (8U - (char)*param_2 & 0x3f));
    }
    *param_1 = *param_1 + (*param_2 + param_4 >> 3);
    *param_2 = (ulonglong)((int)*param_2 + (int)param_4 & 7);
    return;
}



void FUN_140336860(ushort **param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
    ushort *puVar1;
    ushort uVar2;

    if (param_4 < 0x10) {
        uVar2 = (1 << ((byte)param_4 & 0x1f)) - 1;
    }
    else {
        uVar2 = 0xffff;
    }
    puVar1 = *param_1;
    *puVar1 = *puVar1 & (1 << ((byte)*param_2 & 0x1f)) - 1U;
    *puVar1 = *puVar1 | (ushort)((uVar2 & param_3) << ((byte)*param_2 & 0x3f));
    if (0x10 < (param_4 + 7 + *param_2 & 0xfffffffffffffff8)) {
        *(char *)(*param_1 + 1) = (char)(param_3 >> (0x10U - (char)*param_2 & 0x3f));
    }
    *param_1 = (ushort *)((longlong)*param_1 + (*param_2 + param_4 >> 3));
    *param_2 = (ulonglong)((int)*param_2 + (int)param_4 & 7);
    return;
}



void FUN_1403368f0(uint **param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
    uint *puVar1;
    ulonglong uVar2;

    if (param_4 < 0x20) {
        uVar2 = (ulonglong)((1 << ((byte)param_4 & 0x1f)) - 1);
    }
    else {
        uVar2 = 0xffffffff;
    }
    puVar1 = *param_1;
    *puVar1 = *puVar1 & (1 << ((byte)*param_2 & 0x1f)) - 1U;
    *puVar1 = *puVar1 | (uint)((uVar2 & param_3) << ((byte)*param_2 & 0x3f));
    if (0x20 < (param_4 + 7 + *param_2 & 0xfffffffffffffff8)) {
        *(char *)(*param_1 + 1) = (char)(param_3 >> (0x20U - (char)*param_2 & 0x3f));
    }
    *param_1 = (uint *)((longlong)*param_1 + (*param_2 + param_4 >> 3));
    *param_2 = (ulonglong)((int)*param_2 + (int)param_4 & 7);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140336980(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined8 uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ushort local_res20 [4];

    uVar1 = FUN_140336c60(param_1,local_res20,1);
    if (-1 < (int)uVar1) {
        if ((byte)local_res20[0] == '\0') {
            uVar1 = FUN_140336c60(param_1,local_res20,7);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (ulonglong)(byte)local_res20[0];
        }
        else {
            uVar1 = FUN_140336c60(param_1,local_res20,0xf);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            uVar3 = (ulonglong)local_res20[0];
        }
        lVar2 = FUN_1403374e0(param_2,uVar3 + 1);
        if (lVar2 == 0) {
            uVar1 = 0x80004005;
        }
        else {
            uVar1 = FUN_140337160(param_1,lVar2,uVar3);
            *(undefined *)(lVar2 + uVar3) = 0;
            *param_3 = lVar2;
        }
    }
    return uVar1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140336a40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    ushort local_res20 [4];

    uVar2 = FUN_140336c60(param_1,local_res20,1);
    if (-1 < (int)uVar2) {
        if ((byte)local_res20[0] == '\0') {
            uVar2 = FUN_140336c60(param_1,local_res20,7);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar3 = (ulonglong)(byte)local_res20[0];
        }
        else {
            uVar2 = FUN_140336c60(param_1,local_res20,0xf);
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar3 = (ulonglong)local_res20[0];
        }
        lVar1 = uVar3 * 2;
        lVar4 = FUN_1403374e0(param_2,lVar1 + 2);
        if (lVar4 == 0) {
            uVar2 = 0x80004005;
        }
        else {
            uVar2 = FUN_140337160(param_1,lVar4,lVar1);
            *(undefined2 *)(lVar1 + lVar4) = 0;
            *param_3 = lVar4;
        }
    }
    return uVar2;
}



ulonglong FUN_140336b00(longlong param_1)

{
    DWORD *pDVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong uVar8;

    if ((*(DWORD ***)(param_1 + 0x28) == (DWORD **)0x0) || (*(longlong *)(param_1 + 0x30) == 0)) {
        return 0x80070026;
    }
    pDVar1 = **(DWORD ***)(param_1 + 0x28);
    DVar5 = GetCurrentThreadId();
    uVar8 = 0;
    puVar7 = (ulonglong *)(pDVar1 + 2);
    uVar6 = uVar8;
    if (*pDVar1 == DVar5) {
        *puVar7 = *puVar7 + 1;
    }
    else {
        do {
            LOCK();
            uVar2 = *puVar7;
            *puVar7 = *puVar7 ^ (ulonglong)(uVar2 == 0) * (*puVar7 ^ 1);
            if (uVar2 == 0) {
                *pDVar1 = DVar5;
                goto LAB_140336b8a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar1);
    }
    LAB_140336b8a:
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_140338730(*(undefined8 *)(param_1 + 0x28),**(undefined8 **)(param_1 + 0x30));
    }
    lVar3 = **(longlong **)(param_1 + 0x30);
    if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar8 = 0x80070026;
    }
    else {
        *(longlong *)(param_1 + 0x10) = lVar3;
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x18) = uVar4;
    }
    if (*puVar7 < 2) {
        *pDVar1 = 0;
        *puVar7 = 0;
        if (*(longlong *)(pDVar1 + 4) != 0) {
            if (*(longlong *)(pDVar1 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar7 = (ulonglong *)(pDVar1 + 6);
                uVar6 = *puVar7;
                *puVar7 = *puVar7 ^ (ulonglong)(uVar6 == 0) * (*puVar7 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(pDVar1 + 6));
        }
        return uVar8;
    }
    *puVar7 = *puVar7 - 1;
    return uVar8;
}



undefined8 FUN_140336c60(longlong param_1,ulonglong *param_2,longlong param_3)

{
    longlong lVar1;
    byte bVar2;
    ushort uVar3;
    uint uVar4;
    undefined8 uVar5;
    ulonglong uVar6;

    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar6 = 0;
    *param_2 = 0;
    if (lVar1 != 0) {
        uVar6 = *(longlong *)(lVar1 + 0x20) - *(longlong *)(param_1 + 0x18);
    }
    if (uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x20) + 7 + param_3) >> 3) {
        uVar5 = FUN_140336d60(param_1,param_2);
        return uVar5;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    switch(param_3 + 7U >> 3) {
        case 1:
            bVar2 = FUN_140337320(param_1 + 0x18);
            uVar6 = (ulonglong)bVar2;
            break;
        case 2:
            uVar3 = FUN_1403373b0(param_1 + 0x18);
            uVar6 = (ulonglong)uVar3;
            break;
        case 3:
        case 4:
            uVar4 = FUN_140337440(param_1 + 0x18);
            uVar6 = (ulonglong)uVar4;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            uVar6 = FUN_1400a71c0(param_1 + 0x18,param_1 + 0x20);
            break;
        default:
            goto switchD_140336cd3_caseD_8;
    }
    *param_2 = uVar6;
    switchD_140336cd3_caseD_8:
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (*(int *)(param_1 + 0x18) - (int)uVar5);
    return 0;
}



undefined8 FUN_140336d60(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
    ulonglong *puVar1;
    byte *pbVar2;
    DWORD *pDVar3;
    longlong lVar4;
    DWORD DVar5;
    uint uVar6;
    undefined8 uVar7;
    HANDLE pvVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    *param_2 = 0;
    if ((*(longlong *)(param_1 + 0x10) != 0) || (uVar7 = FUN_140336b00(), -1 < (int)uVar7)) {
        uVar10 = 0;
        if (param_3 != 0) {
            do {
                pbVar2 = *(byte **)(param_1 + 0x18);
                if (pbVar2 == *(byte **)(*(longlong *)(param_1 + 0x10) + 0x20)) {
                    if ((*(DWORD ***)(param_1 + 0x28) == (DWORD **)0x0) ||
                        (*(longlong *)(param_1 + 0x30) == 0)) {
                        return 0x80070026;
                    }
                    pDVar3 = **(DWORD ***)(param_1 + 0x28);
                    DVar5 = GetCurrentThreadId();
                    uVar9 = 0;
                    if (*pDVar3 == DVar5) {
                        *(longlong *)(pDVar3 + 2) = *(longlong *)(pDVar3 + 2) + 1;
                    }
                    else {
                        do {
                            LOCK();
                            puVar1 = (ulonglong *)(pDVar3 + 2);
                            uVar11 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar11 == 0) * (*puVar1 ^ 1);
                            if (uVar11 == 0) {
                                *pDVar3 = DVar5;
                                goto LAB_140336e17;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < 0x400);
                        FUN_14019fb60();
                    }
                    LAB_140336e17:
                    if (*(longlong *)(param_1 + 0x10) != 0) {
                        FUN_140338730();
                    }
                    lVar4 = **(longlong **)(param_1 + 0x30);
                    if (lVar4 == 0) {
                        *(undefined8 *)(param_1 + 0x10) = 0;
                        if (1 < *(ulonglong *)(pDVar3 + 2)) {
                            *(longlong *)(pDVar3 + 2) = *(longlong *)(pDVar3 + 2) + -1;
                            return 0x80070026;
                        }
                        *pDVar3 = 0;
                        *(undefined8 *)(pDVar3 + 2) = 0;
                        if (*(longlong *)(pDVar3 + 4) == 0) {
                            return 0x80070026;
                        }
                        if (*(longlong *)(pDVar3 + 6) == 0) {
                            pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                            LOCK();
                            puVar1 = (ulonglong *)(pDVar3 + 6);
                            uVar10 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong)pvVar8);
                            if (uVar10 != 0) {
                                CloseHandle(pvVar8);
                            }
                        }
                        SetEvent(*(HANDLE *)(pDVar3 + 6));
                        return 0x80070026;
                    }
                    *(longlong *)(param_1 + 0x10) = lVar4;
                    uVar7 = *(undefined8 *)(lVar4 + 0x10);
                    *(undefined8 *)(param_1 + 0x20) = 0;
                    *(undefined8 *)(param_1 + 0x18) = uVar7;
                    uVar9 = uVar10;
                    if (*(ulonglong *)(pDVar3 + 2) < 2) {
                        *pDVar3 = 0;
                        *(undefined8 *)(pDVar3 + 2) = 0;
                        if (*(longlong *)(pDVar3 + 4) != 0) {
                            if (*(longlong *)(pDVar3 + 6) == 0) {
                                pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                                LOCK();
                                puVar1 = (ulonglong *)(pDVar3 + 6);
                                uVar10 = *puVar1;
                                *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong)pvVar8);
                                if (uVar10 != 0) {
                                    CloseHandle(pvVar8);
                                }
                            }
                            SetEvent(*(HANDLE *)(pDVar3 + 6));
                        }
                    }
                    else {
                        *(longlong *)(pDVar3 + 2) = *(longlong *)(pDVar3 + 2) + -1;
                    }
                }
                else {
                    uVar7 = *(undefined8 *)(param_1 + 0x20);
                    uVar11 = 8 - *(longlong *)(param_1 + 0x20);
                    if (param_3 - uVar10 < uVar11) {
                        uVar11 = param_3 - uVar10;
                    }
                    uVar9 = uVar10 + uVar11;
                    *param_2 = *param_2 |
                               ((ulonglong)(*pbVar2 >> ((byte)uVar7 & 0x3f)) &
                                (1 << ((byte)uVar11 & 0x3f)) - 1U) << ((byte)uVar10 & 0x3f);
                    uVar6 = (int)uVar7 + (int)uVar11 & 7;
                    *(ulonglong *)(param_1 + 0x20) = (ulonglong)uVar6;
                    if (uVar6 == 0) {
                        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
                        *(byte **)(param_1 + 0x18) = pbVar2 + 1;
                    }
                }
                uVar10 = uVar9;
            } while (uVar9 < param_3);
        }
        uVar7 = 0;
    }
    return uVar7;
}



undefined8 FUN_140336fa0(longlong param_1,ulonglong *param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    byte *pbVar7;
    undefined8 *puVar8;

    puVar2 = *(undefined8 **)(param_1 + 0x30);
    pbVar7 = *(byte **)(param_1 + 0x18);
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    *param_2 = 0;
    uVar4 = *(ulonglong *)(param_1 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar2;
    }
    uVar3 = uVar4;
    if (puVar8 == (undefined8 *)0x0) {
        if (puVar2 == (undefined8 *)0x0) {
            return 0x80070026;
        }
        pbVar7 = (byte *)puVar2[2];
        uVar3 = 0;
        puVar8 = puVar2;
    }
    if ((ulonglong)(puVar8[4] - *(longlong *)(param_1 + 0x18)) < uVar4 + 0x27 >> 3) {
        uVar4 = 0;
        if (puVar2 == (undefined8 *)0x0) {
            return 0x80070026;
        }
        do {
            if (pbVar7 == (byte *)puVar8[4]) {
                puVar2 = (undefined8 *)puVar2[7];
                if (puVar2 == (undefined8 *)0x0) {
                    return 0x80070026;
                }
                pbVar7 = (byte *)puVar2[2];
                uVar3 = 0;
                uVar5 = uVar4;
                puVar8 = puVar2;
            }
            else {
                uVar6 = 8 - uVar3;
                if (0x20 - uVar4 < 8 - uVar3) {
                    uVar6 = 0x20 - uVar4;
                }
                uVar5 = uVar4 + uVar6;
                *param_2 = *param_2 |
                           ((ulonglong)(*pbVar7 >> ((byte)uVar3 & 0x3f)) & (1 << ((byte)uVar6 & 0x3f)) - 1U)
                                   << ((byte)uVar4 & 0x3f);
                uVar1 = (int)uVar3 + (int)uVar6 & 7;
                uVar3 = (ulonglong)uVar1;
                if (uVar1 == 0) {
                    pbVar7 = pbVar7 + 1;
                }
            }
            uVar4 = uVar5;
        } while (uVar5 < 0x20);
        return 0;
    }
    uVar1 = FUN_14001b320(*(undefined8 *)(param_1 + 0x18),uVar4,0x20);
    *param_2 = (ulonglong)uVar1;
    return 0;
}



undefined8 FUN_1403370c0(longlong param_1,ulonglong param_2)

{
    undefined8 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if ((*(longlong *)(param_1 + 0x10) != 0) || (uVar1 = FUN_140336b00(), (int)uVar1 == 0)) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            *(undefined8 *)(param_1 + 0x20) = 0;
        }
        if (((*(longlong *)(param_1 + 0x10) != 0) &&
             (*(longlong *)(param_1 + 0x18) != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20))) ||
            (uVar1 = FUN_140336b00(param_1), (int)uVar1 == 0)) {
            if (param_2 != 0) {
                do {
                    uVar2 = FUN_1403374c0(param_1);
                    uVar3 = param_2;
                    if (uVar2 < param_2) {
                        uVar3 = uVar2;
                    }
                    if (uVar3 == 0) {
                        uVar1 = FUN_140336b00(param_1);
                        if ((int)uVar1 != 0) {
                            return uVar1;
                        }
                    }
                    else {
                        param_2 = param_2 - uVar3;
                        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + uVar3;
                    }
                } while (param_2 != 0);
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}



int FUN_140337160(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined local_res10;
    undefined uStackX17;
    undefined2 uStackX18;
    undefined4 uStackX20;

    iVar1 = 0;
    if ((param_3 & 1) != 0) {
        iVar1 = FUN_140336c60(param_1,&local_res10,8);
        param_3 = param_3 - 1;
        *(undefined *)param_2 = local_res10;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
    }
    puVar2 = param_2;
    if (((param_3 & 2) != 0) && (-1 < iVar1)) {
        iVar1 = FUN_140336c60(param_1,&local_res10,0x10);
        param_3 = param_3 - 2;
        puVar2 = (undefined8 *)((longlong)param_2 + 2);
        *(ushort *)param_2 = CONCAT11(uStackX17,local_res10);
    }
    puVar3 = puVar2;
    if (((param_3 & 4) != 0) && (-1 < iVar1)) {
        iVar1 = FUN_140336c60(param_1,&local_res10,0x20);
        param_3 = param_3 - 4;
        puVar3 = (undefined8 *)((longlong)puVar2 + 4);
        *(uint *)puVar2 = CONCAT22(uStackX18,CONCAT11(uStackX17,local_res10));
    }
    while ((param_3 != 0 && (-1 < iVar1))) {
        iVar1 = FUN_140336c60(param_1,&local_res10,0x40);
        *puVar3 = CONCAT44(uStackX20,CONCAT22(uStackX18,CONCAT11(uStackX17,local_res10)));
        param_3 = param_3 - 8;
        puVar3 = puVar3 + 1;
    }
    return iVar1;
}



undefined8 FUN_140337250(longlong param_1,longlong param_2,ulonglong param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if ((*(longlong *)(param_1 + 0x10) != 0) || (uVar1 = FUN_140336b00(), (int)uVar1 == 0)) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            *(undefined8 *)(param_1 + 0x20) = 0;
        }
        if (((*(longlong *)(param_1 + 0x10) != 0) &&
             (*(longlong *)(param_1 + 0x18) != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20))) ||
            (uVar1 = FUN_140336b00(param_1), (int)uVar1 == 0)) {
            if (param_3 != 0) {
                do {
                    uVar2 = FUN_1403374c0(param_1);
                    uVar3 = param_3;
                    if (uVar2 < param_3) {
                        uVar3 = uVar2;
                    }
                    if (uVar3 == 0) {
                        uVar1 = FUN_140336b00(param_1);
                        if ((int)uVar1 != 0) {
                            return uVar1;
                        }
                    }
                    else {
                        FUN_1407db590(param_2,*(undefined8 *)(param_1 + 0x18),uVar3);
                        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + uVar3;
                        param_3 = param_3 - uVar3;
                        param_2 = param_2 + uVar3;
                    }
                } while (param_3 != 0);
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}



byte FUN_140337320(byte **param_1,ulonglong *param_2,ulonglong param_3)

{
    byte *pbVar1;
    ulonglong uVar2;
    byte bVar3;

    pbVar1 = *param_1;
    uVar2 = *param_2;
    bVar3 = *pbVar1 >> ((byte)uVar2 & 0x1f);
    if (8 < (param_3 + 7 + uVar2 & 0xfffffffffffffff8)) {
        bVar3 = bVar3 | pbVar1[1] << (8 - (byte)uVar2 & 0x1f);
    }
    if (param_3 < 8) {
        bVar3 = bVar3 & ('\x01' << ((byte)param_3 & 0x1f)) - 1U;
    }
    *param_1 = pbVar1 + (uVar2 + param_3 >> 3);
    *param_2 = (ulonglong)((int)*param_2 + (int)param_3 & 7);
    return bVar3;
}



ushort FUN_1403373b0(ushort **param_1,ulonglong *param_2,ulonglong param_3)

{
    ushort *puVar1;
    ulonglong uVar2;
    ushort uVar3;

    puVar1 = *param_1;
    uVar2 = *param_2;
    uVar3 = *puVar1 >> ((byte)uVar2 & 0x1f);
    if (0x10 < (param_3 + 7 + uVar2 & 0xfffffffffffffff8)) {
        uVar3 = uVar3 | (ushort)*(byte *)(puVar1 + 1) << (0x10 - (byte)uVar2 & 0x1f);
    }
    if (param_3 < 0x10) {
        uVar3 = uVar3 & (1 << ((byte)param_3 & 0x1f)) - 1U;
    }
    *param_1 = (ushort *)((uVar2 + param_3 >> 3) + (longlong)puVar1);
    *param_2 = (ulonglong)((int)*param_2 + (int)param_3 & 7);
    return uVar3;
}



uint FUN_140337440(uint **param_1,ulonglong *param_2,ulonglong param_3)

{
    uint *puVar1;
    ulonglong uVar2;
    uint uVar3;

    puVar1 = *param_1;
    uVar2 = *param_2;
    uVar3 = *puVar1 >> ((byte)uVar2 & 0x1f);
    if (0x20 < (param_3 + 7 + uVar2 & 0xfffffffffffffff8)) {
        uVar3 = uVar3 | (uint)*(byte *)(puVar1 + 1) << (0x20 - (byte)uVar2 & 0x1f);
    }
    if (param_3 < 0x20) {
        uVar3 = uVar3 & (1 << ((byte)param_3 & 0x1f)) - 1U;
    }
    *param_1 = (uint *)((uVar2 + param_3 >> 3) + (longlong)puVar1);
    *param_2 = (ulonglong)((int)*param_2 + (int)param_3 & 7);
    return uVar3;
}



longlong FUN_1403374c0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
        return *(longlong *)(lVar1 + 0x20) - *(longlong *)(param_1 + 0x18);
    }
    return lVar1;
}



ulonglong FUN_1403374e0(ulonglong *param_1,longlong param_2)

{
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined *puVar5;
    ulonglong uVar6;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar3 = param_1[4] - param_1[2];
    lVar3 = (lVar3 + 3U & 0xfffffffffffffffc) - lVar3;
    if (lVar3 != 0) {
        uVar1 = param_1[4] + lVar3;
        if (param_1[3] <= uVar1 && uVar1 != param_1[3]) {
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_res8 = 0x141deca48;
            puVar5 = &DAT_140c8a630;
            goto LAB_140337563;
        }
        param_1[4] = uVar1;
    }
    uVar1 = param_1[4];
    uVar6 = param_2 + 3U & 0xfffffffffffffffc;
    if (param_1[3] - uVar1 < uVar6) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_res8 = 0x141decb30;
        puVar5 = &DAT_140c8a62c;
    }
    else {
        uVar4 = (uVar1 - param_1[2]) + uVar6;
        if (uVar4 < *param_1 || uVar4 == *param_1) {
            param_1[4] = uVar6 + uVar1;
            return uVar1;
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_res8 = 0x141deca78;
        puVar5 = &DAT_140c8a634;
    }
    LAB_140337563:
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    iVar2 = FUN_1401971e0(puVar5,0xb,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar2 != 0) {
        DebugBreak();
    }
    return 0;
}



undefined8 FUN_1403376a0(longlong param_1,longlong param_2,int *param_3)

{
    char *pcVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    char *pcVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    char *pcVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined local_res8 [8];
    undefined local_b8 [16];
    uint local_a8;
    char local_6c;
    undefined8 local_60;

    pcVar11 = *(char **)(param_2 + 0x18);
    uVar10 = *(ulonglong *)(param_2 + 0x10);
    uVar9 = 0;
    uVar8 = uVar9;
    if (*(ulonglong **)(param_2 + 0x30) != (ulonglong *)0x0) {
        uVar8 = **(ulonglong **)(param_2 + 0x30);
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
        pcVar11 = pcVar11 + 1;
    }
    local_a8 = 0;
    pcVar1 = (char *)(param_1 + 0xc);
    uVar12 = uVar9;
    uVar13 = uVar9;
    uVar14 = uVar9;
    do {
        lVar6 = 0x100;
        pcVar7 = pcVar1;
        if (uVar10 == 0) {
            if (uVar8 == 0) {
                return 0x80070026;
            }
            pcVar11 = *(char **)(uVar8 + 0x10);
            uVar10 = uVar8;
        }
        do {
            if (pcVar11 == *(char **)(uVar10 + 0x20)) {
                uVar8 = *(ulonglong *)(uVar8 + 0x38);
                if (uVar8 == 0) {
                    return 0x80070026;
                }
                pcVar11 = *(char **)(uVar8 + 0x10);
                uVar10 = uVar8;
            }
            else {
                cVar2 = *pcVar11;
                uVar9 = (ulonglong)((int)uVar9 + 1);
                lVar6 = lVar6 + -1;
                pcVar11 = pcVar11 + 1;
                *pcVar7 = cVar2;
                if (cVar2 == '\n') break;
                pcVar7 = pcVar7 + 1;
            }
        } while (lVar6 != 0);
        pcVar1[0x100 - lVar6] = '\0';
        if ((int)uVar14 == 5) {
            iVar3 = 5;
        }
        else {
            iVar3 = FUN_1403377f0(local_b8,pcVar1,local_res8);
            uVar14 = (ulonglong)local_a8;
        }
        if (iVar3 != 0) {
            if (iVar3 != 1) {
                if ((iVar3 == 2) && ((int)uVar12 != 0)) {
                    *param_3 = (int)uVar9 + (int)uVar13;
                    uVar5 = 0;
                }
                else {
                    uVar5 = 0x80004005;
                }
                return uVar5;
            }
            if (local_6c == 'l') {
                uVar4 = FUN_1407df3e4(local_60);
                uVar12 = 1;
                uVar13 = (ulonglong)uVar4;
            }
        }
    } while( true );
}



int FUN_1403377f0(char **param_1,char *param_2,char **param_3)

{
    char cVar1;
    char cVar2;
    int iVar3;
    char *pcVar4;
    char cVar5;
    int iVar6;

    iVar6 = *(int *)(param_1 + 2);
    if (iVar6 != 4) {
        pcVar4 = (char *)FUN_1407ddcf8();
        if (pcVar4 != (char *)0x0) {
            pcVar4 = pcVar4 + 1;
        }
        *param_3 = pcVar4;
        *param_1 = param_2;
        param_1[1] = pcVar4;
        if (pcVar4 != (char *)0x0) {
            iVar3 = *(int *)(param_1 + 2);
            if (iVar3 == 0) {
                pcVar4 = param_2;
                do {
                    cVar1 = *pcVar4;
                    cVar5 = cVar1;
                    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                        cVar5 = cVar1 + ' ';
                    }
                    cVar2 = pcVar4[(longlong)&DAT_140ae8764 - (longlong)param_2];
                    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                        cVar2 = cVar2 + ' ';
                    }
                    if (cVar5 != cVar2) {
                        *(undefined4 *)((longlong)param_1 + 0x14) = 1;
                        iVar3 = FUN_140337a00(param_1,param_1 + 9,param_1 + 7);
                        if (-1 < iVar3) {
                            return iVar6;
                        }
                        return 5;
                    }
                } while ((cVar1 != '\0') &&
                         (pcVar4 = pcVar4 + 1, (ulonglong)((longlong)pcVar4 - (longlong)param_2) < 4));
                *(undefined4 *)((longlong)param_1 + 0x14) = 0;
                iVar3 = FUN_140337950(param_1,param_1 + 3,param_1 + 5);
                if (iVar3 < 0) {
                    return 5;
                }
            }
            else if (iVar3 == 1) {
                iVar3 = FUN_140337b50(param_1,(longlong)param_1 + 0x4c,param_1 + 10);
                if (iVar3 < 0) {
                    return 5;
                }
                if (*(int *)(param_1 + 2) != 1) {
                    iVar6 = 2;
                }
            }
            else if (iVar3 == 3) {
                param_1[0xe] = param_2;
                *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_1 + 0xc);
                *(undefined4 *)(param_1 + 2) = 4;
            }
            return iVar6;
        }
        *(undefined4 *)(param_1 + 2) = 4;
    }
    return 4;
}



undefined8 FUN_140337950(undefined8 *param_1,int *param_2,int *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = FUN_1407ddcf8(*param_1,&DAT_1409e68fc);
    lVar3 = 0;
    lVar2 = lVar3;
    if (lVar1 != 0) {
        lVar2 = lVar1 + 1;
    }
    lVar2 = lVar2 + 1;
    *(longlong *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
        lVar2 = FUN_1407ddcf8(lVar2,&DAT_1409e69c4);
        if (lVar2 != 0) {
            lVar3 = lVar2 + 1;
        }
        *(longlong *)(param_3 + 2) = lVar3;
        if ((lVar3 != 0) && (lVar2 = FUN_1407ddcf8(lVar3,&DAT_1409e6984), lVar2 != 0)) {
            *param_2 = (param_3[2] - param_2[2]) + -1;
            *param_3 = (int)lVar2 - param_3[2];
            *(undefined4 *)(param_1 + 2) = 1;
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_140337a00(char **param_1,undefined4 *param_2,int *param_3)

{
    char *pcVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    char *pcVar5;
    undefined8 local_res8;

    pcVar1 = *param_1;
    pcVar5 = pcVar1;
    do {
        if (*pcVar5 != pcVar5[(longlong)&DAT_140ae87c4 - (longlong)pcVar1]) {
            pcVar5 = pcVar1;
            do {
                if (*pcVar5 != pcVar5[(longlong)&DAT_1409e6b04 - (longlong)pcVar1]) {
                    return 0x80004005;
                }
            } while ((*pcVar5 != '\0') &&
                     (pcVar5 = pcVar5 + 1, (ulonglong)((longlong)pcVar5 - (longlong)pcVar1) < 3));
            goto LAB_140337a9f;
        }
    } while ((*pcVar5 != '\0') &&
             (pcVar5 = pcVar5 + 1, (ulonglong)((longlong)pcVar5 - (longlong)pcVar1) < 4));
    local_res8 = 0x141decc20;
    FUN_1401a3130(0x15,1,&local_res8);
    LAB_140337a9f:
    lVar3 = FUN_1407ddcf8(*param_1,&DAT_1409e6a5c);
    if ((lVar3 != 0) && (lVar3 = lVar3 + 1, lVar3 != 0)) {
        lVar4 = FUN_1407ddcf8(lVar3,&DAT_1409e6bcc);
        if (lVar4 != 0) {
            lVar4 = lVar4 + 1;
        }
        *(longlong *)(param_3 + 2) = lVar4;
        if ((lVar4 != 0) && (pcVar1 = param_1[1], pcVar1 != (char *)0x0)) {
            pcVar5 = pcVar1 + -1;
            if (*pcVar5 == '\n') {
                pcVar5 = pcVar1 + -2;
            }
            if (*pcVar5 == '\r') {
                pcVar5 = pcVar5 + -1;
            }
            if (pcVar5 + 1 != (char *)0x0) {
                uVar2 = FUN_1407df3e4(lVar3);
                *param_2 = uVar2;
                *param_3 = (int)(pcVar5 + 1) - param_3[2];
                *(undefined4 *)(param_1 + 2) = 1;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_140337b50(char **param_1,char *param_2,int *param_3)

{
    char cVar1;
    char *pcVar2;
    char cVar3;
    undefined4 uVar4;
    longlong lVar5;
    char *pcVar6;
    char cVar7;

    cVar1 = **param_1;
    if ((cVar1 == '\r') || (cVar1 == '\n')) {
        *param_2 = '\0';
        *(undefined4 *)(param_1 + 2) = 3;
        return 0;
    }
    lVar5 = FUN_1407ddcf8(*param_1,&DAT_1409e6b34);
    if (lVar5 != 0) {
        lVar5 = lVar5 + 1;
    }
    *(longlong *)(param_3 + 2) = lVar5;
    if ((lVar5 != 0) && (pcVar2 = param_1[1], pcVar2 != (char *)0x0)) {
        pcVar6 = pcVar2 + -1;
        if (*pcVar6 == '\n') {
            pcVar6 = pcVar2 + -2;
        }
        if (*pcVar6 == '\r') {
            pcVar6 = pcVar6 + -1;
        }
        if (pcVar6 + 1 != (char *)0x0) {
            *param_3 = (int)(pcVar6 + 1) - param_3[2];
            pcVar2 = *param_1;
            pcVar6 = pcVar2;
            while( true ) {
                cVar1 = *pcVar6;
                cVar7 = cVar1;
                if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                    cVar7 = cVar1 + ' ';
                }
                cVar3 = pcVar6[(longlong)"content-length" - (longlong)pcVar2];
                if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                    cVar3 = cVar3 + ' ';
                }
                if (cVar7 != cVar3) break;
                if ((cVar1 == '\0') ||
                    (pcVar6 = pcVar6 + 1, 0xd < (ulonglong)((longlong)pcVar6 - (longlong)pcVar2))) {
                    *param_2 = 'l';
                    LAB_140337c4c:
                    uVar4 = FUN_1407df3e4(*(undefined8 *)(param_3 + 2));
                    *(undefined4 *)(param_1 + 0xc) = uVar4;
                    return 0;
                }
            }
            cVar1 = *pcVar2;
            *param_2 = cVar1;
            if (cVar1 != 'l') {
                return 0;
            }
            goto LAB_140337c4c;
        }
    }
    return 0x80004005;
}



longlong FUN_140337c90(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    DWORD *pDVar4;
    ulonglong uVar5;
    DWORD DVar6;
    longlong lVar7;
    HANDLE hObject;
    ulonglong uVar8;
    longlong lVar9;

    if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar9 = *(longlong *)(param_1 + 0x38);
        lVar7 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10);
        if (lVar9 != 0) {
            do {
                plVar1 = (longlong *)(lVar9 + 0x20);
                plVar2 = (longlong *)(lVar9 + 0x10);
                lVar9 = *(longlong *)(lVar9 + 0x38);
                lVar7 = lVar7 + (*plVar1 - *plVar2);
            } while (lVar9 != 0);
            return lVar7;
        }
    }
    else {
        pDVar4 = *(DWORD **)(*(longlong *)(param_1 + 0x30) + 0x10);
        DVar6 = GetCurrentThreadId();
        uVar8 = 0;
        if (*pDVar4 == DVar6) {
            *(longlong *)(pDVar4 + 2) = *(longlong *)(pDVar4 + 2) + 1;
        }
        else {
            do {
                LOCK();
                puVar3 = (ulonglong *)(pDVar4 + 2);
                uVar5 = *puVar3;
                *puVar3 = *puVar3 ^ (ulonglong)(uVar5 == 0) * (*puVar3 ^ 1);
                if (uVar5 == 0) {
                    *pDVar4 = DVar6;
                    goto LAB_140337d34;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0x400);
            FUN_14019fb60(pDVar4);
        }
        LAB_140337d34:
        lVar7 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10);
        for (lVar9 = *(longlong *)(param_1 + 0x38); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x38)) {
            lVar7 = lVar7 + (*(longlong *)(lVar9 + 0x20) - *(longlong *)(lVar9 + 0x10));
        }
        if (*(ulonglong *)(pDVar4 + 2) < 2) {
            *pDVar4 = 0;
            *(undefined8 *)(pDVar4 + 2) = 0;
            if (*(longlong *)(pDVar4 + 4) != 0) {
                if (*(longlong *)(pDVar4 + 6) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar3 = (ulonglong *)(pDVar4 + 6);
                    uVar8 = *puVar3;
                    *puVar3 = *puVar3 ^ (ulonglong)(uVar8 == 0) * (*puVar3 ^ (ulonglong)hObject);
                    if (uVar8 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(pDVar4 + 6));
            }
        }
        else {
            *(longlong *)(pDVar4 + 2) = *(longlong *)(pDVar4 + 2) + -1;
        }
    }
    return lVar7;
}



void FUN_140337de0(longlong param_1)

{
    ulonglong *puVar1;
    longlong *plVar2;
    DWORD *pDVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 != (longlong *)0x0) {
        pDVar3 = (DWORD *)plVar2[2];
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*pDVar3 == DVar5) {
            *(longlong *)(pDVar3 + 2) = *(longlong *)(pDVar3 + 2) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(pDVar3 + 2);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *pDVar3 = DVar5;
                    goto LAB_140337e58;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(pDVar3,DVar5);
        }
        LAB_140337e58:
        if (*plVar2 == param_1) {
            *plVar2 = *(longlong *)(param_1 + 0x38);
            if (plVar2[1] == param_1) {
                plVar2[1] = 0;
            }
        }
        else if (plVar2[1] == param_1) {
            plVar2[1] = *(longlong *)(param_1 + 0x40);
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40) = *(undefined8 *)(param_1 + 0x40);
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38) = *(undefined8 *)(param_1 + 0x38);
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (*(ulonglong *)(pDVar3 + 2) < 2) {
            *pDVar3 = 0;
            *(undefined8 *)(pDVar3 + 2) = 0;
            if (*(longlong *)(pDVar3 + 4) != 0) {
                if (*(longlong *)(pDVar3 + 6) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(pDVar3 + 6);
                    uVar6 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(pDVar3 + 6));
            }
        }
        else {
            *(longlong *)(pDVar3 + 2) = *(longlong *)(pDVar3 + 2) + -1;
        }
    }
    return;
}



void FUN_140337f20(longlong *param_1,longlong param_2)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    if (param_2 != 0) {
        pDVar2 = (DWORD *)param_1[2];
        DVar4 = GetCurrentThreadId();
        uVar5 = 0;
        if (*pDVar2 == DVar4) {
            *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(pDVar2 + 2);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar2 = DVar4;
                    goto LAB_140337f94;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(pDVar2);
        }
        LAB_140337f94:
        FUN_140337de0(param_2);
        if (*param_1 == 0) {
            param_1[1] = param_2;
            *param_1 = param_2;
            *(undefined8 *)(param_2 + 0x40) = 0;
            *(undefined8 *)(param_2 + 0x38) = 0;
        }
        else {
            *(longlong *)(param_1[1] + 0x38) = param_2;
            *(longlong *)(param_2 + 0x40) = param_1[1];
            param_1[1] = param_2;
        }
        *(longlong **)(param_2 + 0x30) = param_1;
        if (*(ulonglong *)(pDVar2 + 2) < 2) {
            *pDVar2 = 0;
            *(undefined8 *)(pDVar2 + 2) = 0;
            if (*(longlong *)(pDVar2 + 4) != 0) {
                if (*(longlong *)(pDVar2 + 6) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(pDVar2 + 6);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(pDVar2 + 6));
            }
        }
        else {
            *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + -1;
        }
    }
    return;
}



ulonglong FUN_140338040(longlong *param_1)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong uVar7;

    pDVar2 = (DWORD *)param_1[2];
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    uVar6 = uVar7;
    if (*pDVar2 == DVar5) {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(pDVar2 + 2);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar5;
                goto LAB_1403380a8;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar2,DVar5);
    }
    LAB_1403380a8:
    for (lVar4 = *param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x38)) {
        uVar7 = uVar7 + (*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x10));
    }
    if (*(ulonglong *)(pDVar2 + 2) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(pDVar2 + 2) = 0;
        if (*(longlong *)(pDVar2 + 4) != 0) {
            if (*(longlong *)(pDVar2 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(pDVar2 + 6);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(pDVar2 + 6));
        }
    }
    else {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + -1;
    }
    return uVar7;
}



ulonglong FUN_140338150(longlong *param_1)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong uVar7;

    pDVar2 = (DWORD *)param_1[2];
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    uVar6 = uVar7;
    if (*pDVar2 == DVar5) {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(pDVar2 + 2);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar5;
                goto LAB_1403381b8;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar2,DVar5);
    }
    LAB_1403381b8:
    for (lVar4 = *param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x38)) {
        uVar7 = uVar7 + 1;
    }
    if (*(ulonglong *)(pDVar2 + 2) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(pDVar2 + 2) = 0;
        if (*(longlong *)(pDVar2 + 4) != 0) {
            if (*(longlong *)(pDVar2 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(pDVar2 + 6);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(pDVar2 + 6));
        }
    }
    else {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + -1;
    }
    return uVar7;
}



undefined8 * FUN_140338240(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined4 *puVar3;

    *param_1 = 8;
    param_1[1] = 0x1fb5;
    param_1[2] = 0;
    uVar2 = FUN_14018b280(0x10000,0);
    param_1[5] = uVar2;
    puVar3 = (undefined4 *)FUN_14018b280(4,0);
    param_1[4] = puVar3;
    *puVar3 = 1;
    puVar1 = (undefined8 *)param_1[5];
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    *puVar1 = 0x1fb5;
    puVar1[1] = 0x1fb5;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[2] = puVar1 + 9;
    puVar1[4] = puVar1 + 9;
    puVar1[3] = (longlong)puVar1 + 0x1ffd;
    puVar1[0x407] = 0;
    puVar1[0x408] = 0;
    puVar1[0x406] = 0;
    puVar1[0x401] = 0x1fb5;
    puVar1[0x400] = 0x1fb5;
    puVar1[0x402] = puVar1 + 0x409;
    puVar1[0x403] = (longlong)(puVar1 + 0x409) + puVar1[0x401];
    puVar1[0x404] = puVar1[0x402];
    *(undefined4 *)(puVar1 + 0x405) = 0;
    puVar1[0x807] = 0;
    puVar1[0x808] = 0;
    puVar1[0x806] = 0;
    puVar1[0x801] = 0x1fb5;
    puVar1[0x800] = 0x1fb5;
    puVar1[0x802] = puVar1 + 0x809;
    puVar1[0x803] = (longlong)(puVar1 + 0x809) + puVar1[0x801];
    puVar1[0x804] = puVar1[0x802];
    *(undefined4 *)(puVar1 + 0x805) = 0;
    puVar1[0xc07] = 0;
    puVar1[0xc08] = 0;
    puVar1[0xc06] = 0;
    puVar1[0xc01] = 0x1fb5;
    puVar1[0xc00] = 0x1fb5;
    puVar1[0xc02] = puVar1 + 0xc09;
    puVar1[0xc03] = (longlong)(puVar1 + 0xc09) + puVar1[0xc01];
    puVar1[0xc04] = puVar1[0xc02];
    *(undefined4 *)(puVar1 + 0xc05) = 0;
    puVar1[0x1007] = 0;
    puVar1[0x1008] = 0;
    puVar1[0x1006] = 0;
    puVar1[0x1001] = 0x1fb5;
    puVar1[0x1000] = 0x1fb5;
    puVar1[0x1002] = puVar1 + 0x1009;
    puVar1[0x1003] = (longlong)(puVar1 + 0x1009) + puVar1[0x1001];
    puVar1[0x1004] = puVar1[0x1002];
    *(undefined4 *)(puVar1 + 0x1005) = 0;
    puVar1[0x1407] = 0;
    puVar1[0x1408] = 0;
    puVar1[0x1406] = 0;
    puVar1[0x1401] = 0x1fb5;
    puVar1[0x1400] = 0x1fb5;
    puVar1[0x1402] = puVar1 + 0x1409;
    puVar1[0x1403] = (longlong)(puVar1 + 0x1409) + puVar1[0x1401];
    puVar1[0x1404] = puVar1[0x1402];
    *(undefined4 *)(puVar1 + 0x1405) = 0;
    puVar1[0x1807] = 0;
    puVar1[0x1808] = 0;
    puVar1[0x1806] = 0;
    puVar1[0x1801] = 0x1fb5;
    puVar1[0x1800] = 0x1fb5;
    puVar1[0x1802] = puVar1 + 0x1809;
    puVar1[0x1803] = (longlong)(puVar1 + 0x1809) + puVar1[0x1801];
    puVar1[0x1804] = puVar1[0x1802];
    *(undefined4 *)(puVar1 + 0x1805) = 0;
    puVar1[0x1c07] = 0;
    puVar1[0x1c08] = 0;
    puVar1[0x1c06] = 0;
    puVar1[0x1c01] = 0x1fb5;
    puVar1[0x1c00] = 0x1fb5;
    puVar1[0x1c02] = puVar1 + 0x1c09;
    puVar1[0x1c03] = (longlong)(puVar1 + 0x1c09) + puVar1[0x1c01];
    puVar1[0x1c04] = puVar1[0x1c02];
    *(undefined4 *)(puVar1 + 0x1c05) = 0;
    return param_1;
}



DWORD * FUN_140338550(DWORD **param_1)

{
    DWORD *pDVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    DWORD *pDVar5;
    ulonglong *puVar6;
    DWORD *pDVar7;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    int *local_18;
    undefined8 local_10;

    pDVar1 = *param_1;
    DVar4 = GetCurrentThreadId();
    pDVar7 = (DWORD *)0x0;
    puVar6 = (ulonglong *)(pDVar1 + 2);
    pDVar5 = pDVar7;
    if (*pDVar1 == DVar4) {
        *puVar6 = *puVar6 + 1;
    }
    else {
        do {
            LOCK();
            uVar3 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar3 == 0) * (*puVar6 ^ 1);
            if (uVar3 == 0) {
                *pDVar1 = DVar4;
                goto LAB_1403385bf;
            }
            pDVar5 = (DWORD *)((longlong)pDVar5 + 1);
        } while (pDVar5 < &DAT_00000400);
        FUN_14019fb60(pDVar1,DVar4);
    }
    LAB_1403385bf:
    if (param_1[5] == (DWORD *)0x0) {
        pDVar5 = param_1[3];
        if ((param_1[2] == pDVar5) || (*(longlong *)(pDVar5 + -0xc) == *(longlong *)(pDVar5 + -8))) {
            FUN_140338240(&local_38);
            puVar2 = (undefined8 *)param_1[3];
            if (puVar2 == (undefined8 *)param_1[4]) {
                FUN_140338a20(param_1 + 1,puVar2,&local_38);
            }
            else {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = local_38;
                    puVar2[1] = local_30;
                    puVar2[2] = local_28;
                    puVar2[4] = local_18;
                    puVar2[5] = local_10;
                    LOCK();
                    *local_18 = *local_18 + 1;
                }
                param_1[3] = param_1[3] + 0xc;
            }
            LOCK();
            *local_18 = *local_18 + -1;
            if (*local_18 == 0) {
                FUN_14018b900(local_10,0);
                FUN_14018b900(local_18,0);
            }
        }
        pDVar5 = param_1[3];
        uVar3 = *(ulonglong *)(pDVar5 + -8);
        if (uVar3 < *(ulonglong *)(pDVar5 + -0xc)) {
            pDVar7 = (DWORD *)(uVar3 * 0x2000 + *(longlong *)(pDVar5 + -2));
            *(ulonglong *)(pDVar5 + -8) = uVar3 + 1;
        }
    }
    else {
        pDVar7 = param_1[6];
        FUN_140337de0(pDVar7);
        *(undefined8 *)(pDVar7 + 8) = *(undefined8 *)(pDVar7 + 4);
    }
    if (*puVar6 < 2) {
        *pDVar1 = 0;
        *puVar6 = 0;
        if (*(longlong *)(pDVar1 + 4) != 0) {
            if (*(longlong *)(pDVar1 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar6 = (ulonglong *)(pDVar1 + 6);
                uVar3 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar3 == 0) * (*puVar6 ^ (ulonglong)hObject);
                if (uVar3 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(pDVar1 + 6));
        }
        return pDVar7;
    }
    *puVar6 = *puVar6 - 1;
    return pDVar7;
}



void FUN_140338730(DWORD **param_1,longlong param_2)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    if (param_2 != 0) {
        pDVar2 = *param_1;
        DVar4 = GetCurrentThreadId();
        uVar5 = 0;
        if (*pDVar2 == DVar4) {
            *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(pDVar2 + 2);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar2 = DVar4;
                    goto LAB_1403387a4;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(pDVar2);
        }
        LAB_1403387a4:
        FUN_140337f20(param_1 + 5,param_2);
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x10);
        if (*(ulonglong *)(pDVar2 + 2) < 2) {
            *pDVar2 = 0;
            *(undefined8 *)(pDVar2 + 2) = 0;
            if (*(longlong *)(pDVar2 + 4) != 0) {
                if (*(longlong *)(pDVar2 + 6) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(pDVar2 + 6);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(pDVar2 + 6));
            }
        }
        else {
            *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + -1;
        }
    }
    return;
}



ulonglong FUN_140338830(DWORD **param_1)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong uVar7;

    pDVar2 = *param_1;
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    uVar6 = uVar7;
    if (*pDVar2 == DVar5) {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(pDVar2 + 2);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar5;
                goto LAB_140338898;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar2,DVar5);
    }
    LAB_140338898:
    lVar4 = ((longlong)param_1[3] - (longlong)param_1[2]) / 0x30;
    if (lVar4 != 0) {
        uVar7 = *(longlong *)(param_1[3] + -8) + -8 + lVar4 * 8;
    }
    if (*(ulonglong *)(pDVar2 + 2) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(pDVar2 + 2) = 0;
        if (*(longlong *)(pDVar2 + 4) != 0) {
            if (*(longlong *)(pDVar2 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(pDVar2 + 6);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(pDVar2 + 6));
        }
    }
    else {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + -1;
    }
    return uVar7;
}



undefined8 FUN_140338940(DWORD **param_1)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    DWORD DVar4;
    undefined8 uVar5;
    HANDLE hObject;
    ulonglong uVar6;

    pDVar2 = *param_1;
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*pDVar2 == DVar4) {
        *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(pDVar2 + 2);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar4;
                goto LAB_14033899c;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar2,DVar4);
    }
    LAB_14033899c:
    uVar5 = FUN_140338150(param_1 + 5);
    if (*(ulonglong *)(pDVar2 + 2) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(pDVar2 + 2) = 0;
        if (*(longlong *)(pDVar2 + 4) != 0) {
            if (*(longlong *)(pDVar2 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(pDVar2 + 6);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(pDVar2 + 6));
        }
        return uVar5;
    }
    *(longlong *)(pDVar2 + 2) = *(longlong *)(pDVar2 + 2) + -1;
    return uVar5;
}



void FUN_140338a20(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    int *piVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    int **ppiVar11;
    longlong lVar12;
    longlong lVar13;

    puVar9 = *(undefined8 **)(param_1 + 0x10);
    if (puVar9 == *(undefined8 **)(param_1 + 0x18)) {
        lVar8 = ((longlong)puVar9 - *(longlong *)(param_1 + 8)) / 0x30;
        if (lVar8 == 0) {
            lVar8 = 1;
        }
        else {
            lVar8 = lVar8 * 2;
        }
        uVar7 = FUN_14018a3e0(lVar8 * 0x30);
        lVar13 = (uVar7 / 0x30) * 0x30;
        lVar8 = FUN_14018b280(lVar13,0);
        puVar9 = (undefined8 *)FUN_140338c90(*(undefined8 *)(param_1 + 8),param_2,lVar8);
        if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = *param_3;
            puVar9[1] = param_3[1];
            puVar9[2] = param_3[2];
            piVar1 = (int *)param_3[4];
            puVar9[4] = piVar1;
            puVar9[5] = param_3[5];
            LOCK();
            *piVar1 = *piVar1 + 1;
        }
        uVar10 = FUN_140338c90(param_2,*(undefined8 *)(param_1 + 0x10),puVar9 + 6);
        lVar6 = *(longlong *)(param_1 + 0x10);
        lVar12 = *(longlong *)(param_1 + 8);
        if (lVar12 != lVar6) {
            ppiVar11 = (int **)(lVar12 + 0x20);
            do {
                piVar1 = *ppiVar11;
                LOCK();
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    FUN_14018b900(ppiVar11[1],0);
                    FUN_14018b900(*ppiVar11);
                }
                lVar12 = lVar12 + 0x30;
                ppiVar11 = ppiVar11 + 6;
            } while (lVar12 != lVar6);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar8;
        *(undefined8 *)(param_1 + 0x10) = uVar10;
        *(longlong *)(param_1 + 0x18) = lVar8 + lVar13;
    }
    else {
        if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = puVar9[-6];
            puVar9[1] = puVar9[-5];
            puVar9[2] = puVar9[-4];
            piVar1 = (int *)puVar9[-2];
            puVar9[4] = piVar1;
            puVar9[5] = puVar9[-1];
            LOCK();
            *piVar1 = *piVar1 + 1;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x30;
        uVar10 = *param_3;
        piVar1 = (int *)param_3[4];
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[5];
        LOCK();
        *piVar1 = *piVar1 + 1;
        FUN_140338cf0(param_2,&DAT_ffffffffffffffa0 + *(longlong *)(param_1 + 0x10),
                      &DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        *param_2 = uVar10;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        LOCK();
        *piVar1 = *piVar1 + 1;
        piVar5 = (int *)param_2[4];
        param_2[4] = piVar1;
        uVar10 = param_2[5];
        param_2[5] = uVar4;
        LOCK();
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
            FUN_14018b900(uVar10,0);
            FUN_14018b900(piVar5,0);
        }
        LOCK();
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            FUN_14018b900(uVar4,0);
            FUN_14018b900(piVar1,0);
            return;
        }
    }
    return;
}



undefined8 * FUN_140338c90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    int *piVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if (param_1 != param_2) {
        lVar4 = (longlong)param_3 - (longlong)param_1;
        puVar3 = param_1 + 5;
        do {
            if (param_3 != (undefined8 *)0x0) {
                *param_3 = puVar3[-5];
                *(undefined8 *)(lVar4 + -0x20 + (longlong)puVar3) = puVar3[-4];
                *(undefined8 *)(&DAT_ffffffffffffffe8 + lVar4 + (longlong)puVar3) = puVar3[-3];
                piVar2 = (int *)puVar3[-1];
                *(int **)(lVar4 + -8 + (longlong)puVar3) = piVar2;
                *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
                LOCK();
                *piVar2 = *piVar2 + 1;
            }
            param_3 = param_3 + 6;
            puVar1 = puVar3 + 1;
            puVar3 = puVar3 + 6;
        } while (puVar1 != param_2);
    }
    return param_3;
}



undefined * FUN_140338cf0(longlong param_1,longlong param_2,undefined *param_3)

{
    undefined8 *puVar1;
    int *piVar2;
    undefined8 uVar3;
    int *piVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;

    lVar6 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
    lVar6 = (lVar6 >> 3) - (lVar6 >> 0x3f);
    if (0 < lVar6) {
        puVar7 = (undefined8 *)(param_2 + 0x28);
        puVar8 = (undefined8 *)(param_3 + 0x28);
        do {
            puVar1 = puVar8 + -6;
            *(undefined8 *)(&DAT_ffffffffffffffd0 + (longlong)param_3) = puVar7[-0xb];
            param_3 = &DAT_ffffffffffffffd0 + (longlong)param_3;
            puVar8[-10] = puVar7[-10];
            puVar8[-9] = puVar7[-9];
            piVar2 = (int *)puVar7[-7];
            uVar3 = puVar7[-6];
            LOCK();
            *piVar2 = *piVar2 + 1;
            piVar4 = (int *)puVar8[-7];
            puVar8[-7] = piVar2;
            uVar5 = *puVar1;
            *puVar1 = uVar3;
            LOCK();
            *piVar4 = *piVar4 + -1;
            if (*piVar4 == 0) {
                FUN_14018b900(uVar5,0);
                FUN_14018b900(piVar4);
            }
            lVar6 = lVar6 + -1;
            puVar7 = puVar7 + -6;
            puVar8 = puVar1;
        } while (0 < lVar6);
    }
    return param_3;
}



void FUN_140338df0(longlong param_1,undefined4 param_2,longlong **param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar1 = *param_3;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)*plVar1)(plVar1);
        (**(code **)*plVar1)(plVar1);
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    plVar3 = (longlong *)FUN_14018b280(0x20);
    if (plVar3 + 2 != (longlong *)0x0) {
        *(undefined4 *)(plVar3 + 2) = param_2;
        plVar3[3] = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)*plVar1)(plVar1);
        }
    }
    *plVar3 = lVar2;
    plVar3[1] = *(longlong *)(lVar2 + 8);
    **(longlong ***)(lVar2 + 8) = plVar3;
    *(longlong **)(lVar2 + 8) = plVar3;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (*param_3 != (longlong *)0x0) {
        (**(code **)(**param_3 + 8))();
    }
    return;
}



void FUN_140338eb0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
    short sVar1;
    longlong lVar2;
    undefined8 unaff_RDI;
    longlong lStackX8;
    longlong alStackX16 [3];
    undefined8 uStack32;

    uStack32 = 0x140338ebe;
    lVar2 = FUN_1407f0f60();
    lVar2 = -lVar2;
    *(ulonglong *)(&stack0x00001038 + lVar2) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe8 + lVar2);
    *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x140338eed;
    FUN_1401b3450(&stack0x00000038 + lVar2,0x800,param_2 & 0xffffffff);
    if (param_3 == 0) {
        *(undefined8 *)(&stack0x00000028 + lVar2) = 0x141decd90;
        *(undefined **)((longlong)alStackX16 + lVar2) = &stack0x00000038 + lVar2;
        *(int *)((longlong)&lStackX8 + lVar2) = (int)param_2;
        *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x140338f74;
        FUN_1401a3130(0xb,0,&stack0x00000028 + lVar2,param_1);
    }
    else {
        sVar1 = *(short *)(param_3 + 0x4e);
        *(undefined8 *)(&stack0x00001080 + lVar2) = unaff_RDI;
        if (sVar1 == 0) {
            *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x140338f0d;
            FUN_140334d90(param_3);
        }
        *(undefined8 *)(&stack0x00000028 + lVar2) = 0x141decdb8;
        *(undefined **)((longlong)alStackX16 + lVar2 + 8) = &stack0x00000038 + lVar2;
        *(int *)((longlong)alStackX16 + lVar2) = (int)param_2;
        *(longlong *)((longlong)&lStackX8 + lVar2) = param_3 + 0x4e;
        *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x140338f3e;
        FUN_1401a3130(0xb,0,&stack0x00000028 + lVar2,param_1);
    }
    *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x140338f84;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00001038 + lVar2) ^
                  (ulonglong)(&stack0xffffffffffffffe8 + lVar2));
    return;
}



void FUN_140338f90(undefined8 param_1,SOCKET *param_2)

{
    int iVar1;
    longlong lVar2;
    SOCKET s;
    wchar_t *pwVar3;
    int aiStackX24 [2];
    longlong lStackX32;
    undefined8 uStack16;

    uStack16 = 0x140338fa0;
    lVar2 = FUN_1407f0f60();
    lVar2 = -lVar2;
    *(ulonglong *)(&stack0x00001038 + lVar2) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xfffffffffffffff8 + lVar2);
    *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140338fc8;
    s = socket(2,1,0);
    if (s == 0xffffffffffffffff) {
        *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140339064;
        iVar1 = WSAGetLastError();
        *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140339078;
        FUN_1401b3450(&stack0x00000038 + lVar2,0x800,iVar1);
        pwVar3 = L"socket()";
    }
    else {
        *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140338fea;
        iVar1 = ioctlsocket(s,-0x7ffb9982,(u_long *)&DAT_140c58bc0);
        if (iVar1 != -1) {
            *(undefined4 *)(&stack0x00000030 + lVar2) = 1;
            *(undefined4 *)((longlong)aiStackX24 + lVar2) = 4;
            *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140339039;
            iVar1 = setsockopt(s,6,1,&stack0x00000030 + lVar2,*(int *)((longlong)aiStackX24 + lVar2));
            if (iVar1 == -1) {
                *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140339044;
                iVar1 = WSAGetLastError();
                *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140339055;
                FUN_140338eb0(L"setsockopt(TCP_NODELAY)",iVar1,0);
            }
            else {
                *param_2 = s;
            }
            goto LAB_1403390ad;
        }
        *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140338ff5;
        iVar1 = WSAGetLastError();
        *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x140339009;
        FUN_1401b3450(&stack0x00000038 + lVar2,0x800,iVar1);
        pwVar3 = L"ioctlsocket()";
    }
    *(undefined8 *)(&stack0x00000028 + lVar2) = 0x141decd90;
    *(undefined **)((longlong)&lStackX32 + lVar2) = &stack0x00000038 + lVar2;
    *(int *)((longlong)aiStackX24 + lVar2) = iVar1;
    *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x1403390a8;
    FUN_1401a3130(0xb,0,&stack0x00000028 + lVar2,pwVar3);
    LAB_1403390ad:
    *(undefined8 *)((longlong)&uStack16 + lVar2) = 0x1403390bd;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00001038 + lVar2) ^
                  (ulonglong)(&stack0xfffffffffffffff8 + lVar2));
    return;
}



void FUN_1403390d0(undefined8 param_1,longlong **param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    undefined auStack168 [32];
    longlong local_88;
    longlong *local_78;
    undefined **local_70;
    undefined8 local_68;
    LPVOID local_60;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    if (*(int *)(*param_2 + 0x23) != 2) {
        local_68 = 0;
        local_70 = &PTR_LAB_140b5e648;
        local_60 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_70);
        local_58 = local_70;
        local_78 = (longlong *)0x141ded038;
        local_48 = local_60;
        local_50 = local_68;
        iVar3 = FUN_140196f30(&DAT_140c8a640,0xb,&local_78,&local_58);
        local_70 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_60);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    plVar1 = *param_2;
    local_38 = *(undefined4 *)(plVar1 + 0x12);
    local_34 = *(undefined4 *)((longlong)plVar1 + 0x94);
    local_30 = *(undefined4 *)(plVar1 + 0x13);
    local_2c = *(undefined4 *)((longlong)plVar1 + 0x9c);
    iVar3 = connect(plVar1[0x22],(sockaddr *)&local_38,0x10);
    iVar4 = WSAGetLastError();
    if (iVar3 == -1) {
        if ((0xf < iVar4 - 0x2726U) || ((0xa001U >> (iVar4 - 0x2726U & 0x1f) & 1) == 0)) {
            if (iVar4 != 0x2748) {
                plVar1 = *param_2;
                iVar3 = WSAGetLastError();
                FUN_140338eb0(L"connect",iVar3,plVar1 + 0x12);
                *(undefined4 *)(*param_2 + 0x23) = 5;
                if (*param_2 != (longlong *)0x0) {
                    (**(code **)(**param_2 + 8))();
                }
                goto LAB_140339379;
            }
            plVar1 = *param_2;
            if (*(short *)((longlong)plVar1 + 0xde) == 0) {
                FUN_140334d90();
            }
            plVar2 = *param_2;
            if (*(short *)((longlong)plVar2 + 0x5e) == 0) {
                FUN_140334d90();
            }
            local_78 = (longlong *)0x141ded0b0;
            goto LAB_14033931d;
        }
        local_88 = (longlong)*param_2 + 0xde;
        if (*(short *)((longlong)*param_2 + 0xde) == 0) {
            FUN_140334d90();
        }
        plVar1 = *param_2;
        if (*(short *)((longlong)plVar1 + 0x5e) == 0) {
            FUN_140334d90();
        }
        local_78 = (longlong *)0x141ded100;
        FUN_1401a3130(0xb,3,&local_78,(longlong)plVar1 + 0x5e);
    }
    else {
        plVar1 = *param_2;
        if (*(short *)((longlong)plVar1 + 0xde) == 0) {
            FUN_140334d90();
        }
        plVar2 = *param_2;
        if (*(short *)((longlong)plVar2 + 0x5e) == 0) {
            FUN_140334d90();
        }
        local_78 = (longlong *)0x141ded150;
        LAB_14033931d:
        local_88 = (longlong)plVar1 + 0xde;
        FUN_1401a3130(0xb,1,&local_78,(longlong)plVar2 + 0x5e);
        *(undefined4 *)(*param_2 + 0x23) = 3;
        local_78 = *param_2;
        if (local_78 != (longlong *)0x0) {
            (**(code **)*local_78)();
        }
        FUN_140338df0(param_1,1,&local_78);
    }
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    LAB_140339379:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack168);
    return;
}



void FUN_1403393a0(undefined8 param_1,longlong **param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    longlong *local_res20;

    iVar2 = FUN_140338f90(param_1,&local_res20);
    if (-1 < iVar2) {
        plVar3 = (longlong *)FUN_14018b280(0x1f0,0);
        if (plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)FUN_14033ea90(plVar3,local_res20,param_3);
        }
        plVar1 = *param_2;
        *param_2 = plVar3;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
        }
        *(undefined4 *)(*param_2 + 0x23) = 2;
        local_res20 = *param_2;
        if (local_res20 != (longlong *)0x0) {
            (**(code **)*local_res20)();
        }
        FUN_1403390d0(param_1,&local_res20);
    }
    return;
}



undefined8 FUN_1403395d0(longlong param_1,longlong **param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    lVar1 = *(longlong *)(param_1 + 0x20);
    plVar3 = (longlong *)FUN_14018b280(0x18);
    if ((longlong **)(plVar3 + 2) != (longlong **)0x0) {
        plVar2 = *param_2;
        plVar3[2] = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
            (**(code **)*plVar2)();
        }
    }
    *plVar3 = lVar1;
    plVar3[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar3;
    *(longlong **)(lVar1 + 8) = plVar3;
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return 0;
}



undefined8 FUN_1403396e0(undefined8 param_1,longlong **param_2,longlong param_3)

{
    longlong lVar1;
    longlong *plVar2;

    plVar2 = *param_2;
    if (param_3 != 0) {
        FUN_140337f20(plVar2 + 0x30,param_3);
        plVar2 = *param_2;
        lVar1 = FUN_140337c90(param_3);
        plVar2[0x3b] = plVar2[0x3b] + 1;
        plVar2[0x37] = plVar2[0x37] + lVar1;
        plVar2[0x3a] = plVar2[0x3a] + 1;
        plVar2 = *param_2;
    }
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
    }
    return 0;
}



undefined8 FUN_140339750(undefined8 param_1,longlong **param_2)

{
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return 0;
}



undefined8 FUN_140339770(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong *plVar4;

    plVar1 = *(longlong **)(param_1 + 0x10);
    if ((longlong *)*plVar1 == plVar1) {
        return 1;
    }
    lVar2 = *plVar1;
    *param_2 = *(undefined4 *)(lVar2 + 0x10);
    puVar3 = *(undefined8 **)(lVar2 + 0x18);
    if (*(undefined8 **)(param_2 + 2) != puVar3) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)();
        }
        if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_2 + 2) + 8))();
        }
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar2 + 0x18);
    }
    plVar1 = **(longlong ***)(param_1 + 0x10);
    lVar2 = *plVar1;
    plVar4 = (longlong *)plVar1[1];
    *plVar4 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar4;
    if ((longlong *)plVar1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[3] + 8))();
    }
    FUN_14018b900(plVar1,0);
    return 0;
}



void FUN_140339820(longlong param_1,undefined4 param_2)

{
    code *pcVar1;
    SOCKET SVar2;
    code **ppcVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar10;
    fd_set *readfds;
    undefined8 uVar11;
    ulonglong uVar12;
    longlong *plVar13;
    longlong *plVar14;
    ulonglong uVar15;
    fd_set *writefds;
    uint uVar16;
    fd_set *exceptfds;
    ulonglong uVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    uint auStackX8 [2];
    ulonglong uStackX16;
    fd_set local_1468;
    fd_set local_1258;
    undefined local_1048 [4096];
    ulonglong local_48;
    undefined8 uStack64;
    ulonglong uVar9;

    uStack64 = 0x140339842;
    lVar6 = FUN_1407f0f60();
    lVar6 = -lVar6;
    local_48 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar6);
    plVar14 = *(longlong **)(param_1 + 0x20);
    uVar12 = 0;
    *(undefined4 *)(&stack0x00000000 + lVar6) = param_2;
    *(undefined4 *)((longlong)auStackX8 + lVar6) = 0;
    local_1468.fd_count = 0;
    local_1258.fd_count = 0;
    plVar13 = (longlong *)*plVar14;
    uVar15 = uVar12;
    uVar9 = uVar12;
    uVar10 = uVar12;
    uVar17 = uVar12;
    uVar18 = uVar12;
    uVar19 = uVar12;
    if (plVar13 != plVar14) {
        do {
            uVar8 = (uint)uVar15;
            plVar14 = (longlong *)plVar13[2];
            uVar7 = (uint)uVar10;
            uVar16 = (uint)uVar9;
            if (plVar14 != (longlong *)0x0) {
                pcVar1 = *(code **)*plVar14;
                *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x1403398b1;
                (*pcVar1)();
                uVar8 = *(uint *)((longlong)auStackX8 + lVar6);
                uVar7 = local_1258.fd_count;
                uVar16 = local_1468.fd_count;
            }
            uVar9 = 0;
            iVar4 = *(int *)(plVar14 + 0x23);
            uVar15 = plVar14[0x22];
            if (iVar4 == 2) {
                uVar8 = 0;
                uVar10 = uVar9;
                if (uVar16 != 0) {
                    do {
                        uVar8 = (uint)uVar10;
                        if (local_1468.fd_array[uVar10] == uVar15) break;
                        uVar8 = uVar8 + 1;
                        uVar10 = (ulonglong)uVar8;
                    } while (uVar8 < uVar16);
                }
                if ((uVar8 == uVar16) && (uVar16 < 0x40)) {
                    local_1468.fd_array[uVar8] = uVar15;
                    local_1468.fd_count = local_1468.fd_count + 1;
                }
                uVar19 = (ulonglong)((int)uVar19 + 1);
                if (uVar7 != 0) {
                    do {
                        if (local_1258.fd_array[uVar9] == uVar15) break;
                        uVar8 = (int)uVar9 + 1;
                        uVar9 = (ulonglong)uVar8;
                    } while (uVar8 < uVar7);
                }
                if (((uint)uVar9 == uVar7) && (uVar7 < 0x40)) {
                    local_1258.fd_array[uVar9] = uVar15;
                    local_1258.fd_count = local_1258.fd_count + 1;
                }
                uVar18 = (ulonglong)((int)uVar18 + 1);
                LAB_140339a21:
                if (uVar12 < uVar15) {
                    uVar12 = uVar15;
                }
            }
            else {
                if (iVar4 == 3) {
                    uVar10 = uVar9;
                    if (uVar8 != 0) {
                        do {
                            if (*(ulonglong *)((longlong)&uStackX16 + uVar10 * 8 + lVar6) == uVar15) break;
                            uVar7 = (int)uVar10 + 1;
                            uVar10 = (ulonglong)uVar7;
                        } while (uVar7 < uVar8);
                    }
                    if (((uint)uVar10 == uVar8) && (uVar8 < 0x40)) {
                        *(ulonglong *)((longlong)&uStackX16 + uVar10 * 8 + lVar6) = uVar15;
                        *(int *)((longlong)auStackX8 + lVar6) = *(int *)((longlong)auStackX8 + lVar6) + 1;
                    }
                    uVar17 = (ulonglong)((int)uVar17 + 1);
                    if (plVar14[0x30] != 0) {
                        if (uVar16 != 0) {
                            do {
                                if (local_1468.fd_array[uVar9] == uVar15) break;
                                uVar8 = (int)uVar9 + 1;
                                uVar9 = (ulonglong)uVar8;
                            } while (uVar8 < uVar16);
                        }
                        if (((uint)uVar9 == uVar16) && (uVar16 < 0x40)) {
                            local_1468.fd_array[uVar9] = uVar15;
                            local_1468.fd_count = local_1468.fd_count + 1;
                        }
                        uVar19 = (ulonglong)((int)uVar19 + 1);
                    }
                    goto LAB_140339a21;
                }
                if (iVar4 == 4) {
                    if (uVar8 != 0) {
                        do {
                            if (*(ulonglong *)((longlong)&uStackX16 + uVar9 * 8 + lVar6) == uVar15) break;
                            uVar7 = (int)uVar9 + 1;
                            uVar9 = (ulonglong)uVar7;
                        } while (uVar7 < uVar8);
                    }
                    if (((uint)uVar9 == uVar8) && (uVar8 < 0x40)) {
                        *(ulonglong *)((longlong)&uStackX16 + uVar9 * 8 + lVar6) = uVar15;
                        *(int *)((longlong)auStackX8 + lVar6) = *(int *)((longlong)auStackX8 + lVar6) + 1;
                    }
                    uVar17 = (ulonglong)((int)uVar17 + 1);
                    goto LAB_140339a21;
                }
            }
            pcVar1 = *(code **)(*plVar14 + 8);
            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339a31;
            (*pcVar1)();
            plVar13 = (longlong *)*plVar13;
            if (plVar13 == (longlong *)*(longlong *)(param_1 + 0x20)) goto LAB_140339a55;
            uVar15 = (ulonglong)*(uint *)((longlong)auStackX8 + lVar6);
            uVar9 = (ulonglong)local_1468.fd_count;
            uVar10 = (ulonglong)local_1258.fd_count;
        } while( true );
    }
    LAB_140339d2b:
    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339d35;
    Sleep(*(DWORD *)(&stack0x00000000 + lVar6));
    LAB_140339d35:
    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339d46;
    FUN_1407db4f0(local_48 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar6));
    return;
    LAB_140339a55:
    if ((((int)uVar17 != 0) || ((int)uVar19 != 0)) || ((int)uVar18 != 0)) {
        uVar8 = *(uint *)(&stack0x00000000 + lVar6);
        exceptfds = &local_1258;
        writefds = &local_1468;
        *(uint *)(&stack0x00000000 + lVar6) = uVar8 / 1000;
        readfds = (fd_set *)((longlong)auStackX8 + lVar6);
        *(uint *)(&stack0x00000004 + lVar6) = (uVar8 % 1000) * 1000;
        if ((int)uVar18 == 0) {
            exceptfds = (fd_set *)0x0;
        }
        if ((int)uVar19 == 0) {
            writefds = (fd_set *)0x0;
        }
        if ((int)uVar17 == 0) {
            readfds = (fd_set *)0x0;
        }
        *(longlong *)(&stack0xffffffffffffffe8 + lVar6) = (longlong)&stack0x00000000 + lVar6;
        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339acb;
        iVar4 = select((int)uVar12,readfds,writefds,exceptfds,
                       *(timeval **)(&stack0xffffffffffffffe8 + lVar6));
        if (iVar4 == -1) {
            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339ad6;
            iVar4 = WSAGetLastError();
            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339aec;
            FUN_1401b3450(local_1048,0x800,iVar4);
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar6) = 0x141decd90;
            *(undefined **)(&stack0xfffffffffffffff0 + lVar6) = local_1048;
            *(int *)(&stack0xffffffffffffffe8 + lVar6) = iVar4;
            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339b1e;
            FUN_1401a3130(0xb,0,&stack0xfffffffffffffff8 + lVar6,L"Unexpected select() error");
        }
        else if (iVar4 == 0) goto LAB_140339d35;
        plVar14 = (longlong *)**(longlong **)(param_1 + 0x20);
        if (plVar14 != *(longlong **)(param_1 + 0x20)) {
            do {
                plVar13 = (longlong *)plVar14[2];
                if (plVar13 != (longlong *)0x0) {
                    pcVar1 = *(code **)*plVar13;
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339b57;
                    (*pcVar1)(plVar13);
                }
                iVar4 = *(int *)(plVar13 + 0x23);
                SVar2 = plVar13[0x22];
                if (iVar4 == 2) {
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c21;
                    iVar4 = __WSAFDIsSet(SVar2,&local_1258);
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c33;
                    iVar5 = __WSAFDIsSet(SVar2,&local_1468);
                    if (iVar4 == 0) {
                        if (iVar5 == 0) goto LAB_140339d13;
                        if (*(short *)((longlong)plVar13 + 0xde) == 0) {
                            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339cb7;
                            FUN_140334d90();
                        }
                        if (*(short *)((longlong)plVar13 + 0x5e) == 0) {
                            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339ccb;
                            FUN_140334d90();
                        }
                        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar6) = 0x141dece80;
                        *(longlong *)(&stack0xffffffffffffffe8 + lVar6) = (longlong)plVar13 + 0xde;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339cea;
                        FUN_1401a3130(0xb,1,&stack0xfffffffffffffff8 + lVar6,(longlong)plVar13 + 0x5e);
                        *(undefined4 *)(plVar13 + 0x23) = 3;
                        ppcVar3 = (code **)*plVar13;
                        *(longlong **)(&stack0xfffffffffffffff8 + lVar6) = plVar13;
                        pcVar1 = *ppcVar3;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339d01;
                        (*pcVar1)(plVar13);
                        uVar11 = 1;
                    }
                    else {
                        if (*(short *)((longlong)plVar13 + 0xde) == 0) {
                            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c4e;
                            FUN_140334d90();
                        }
                        if (*(short *)((longlong)plVar13 + 0x5e) == 0) {
                            *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c62;
                            FUN_140334d90();
                        }
                        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar6) = 0x141deced0;
                        *(longlong *)(&stack0xffffffffffffffe8 + lVar6) = (longlong)plVar13 + 0xde;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c7e;
                        FUN_1401a3130(0xb,0,&stack0xfffffffffffffff8 + lVar6,(longlong)plVar13 + 0x5e);
                        *(undefined4 *)(plVar13 + 0x23) = 5;
                        ppcVar3 = (code **)*plVar13;
                        *(longlong **)(&stack0xfffffffffffffff8 + lVar6) = plVar13;
                        pcVar1 = *ppcVar3;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c95;
                        (*pcVar1)(plVar13);
                        uVar11 = 2;
                    }
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339d13;
                    FUN_140338df0(param_1,uVar11,&stack0xfffffffffffffff8 + lVar6);
                }
                else if (iVar4 == 3) {
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339bbc;
                    iVar4 = __WSAFDIsSet(SVar2,(fd_set *)((longlong)auStackX8 + lVar6));
                    if (iVar4 != 0) {
                        ppcVar3 = (code **)*plVar13;
                        *(longlong **)(&stack0xfffffffffffffff8 + lVar6) = plVar13;
                        pcVar1 = *ppcVar3;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339bcd;
                        (*pcVar1)(plVar13);
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339bda;
                        FUN_140339db0(param_1,&stack0xfffffffffffffff8 + lVar6);
                    }
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339bea;
                    iVar4 = __WSAFDIsSet(SVar2,&local_1468);
                    if (iVar4 != 0) {
                        ppcVar3 = (code **)*plVar13;
                        *(longlong **)(&stack0xfffffffffffffff8 + lVar6) = plVar13;
                        pcVar1 = *ppcVar3;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339bff;
                        (*pcVar1)(plVar13);
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339c0c;
                        FUN_14033a030(param_1);
                    }
                }
                else if (iVar4 == 4) {
                    *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339b87;
                    iVar4 = __WSAFDIsSet(SVar2,(fd_set *)((longlong)auStackX8 + lVar6));
                    if (iVar4 != 0) {
                        ppcVar3 = (code **)*plVar13;
                        *(longlong **)(&stack0xfffffffffffffff8 + lVar6) = plVar13;
                        pcVar1 = *ppcVar3;
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339b9c;
                        (*pcVar1)(plVar13);
                        *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339ba9;
                        FUN_14033a200(param_1);
                    }
                }
                LAB_140339d13:
                pcVar1 = *(code **)(*plVar13 + 8);
                *(undefined8 *)((longlong)&uStack64 + lVar6) = 0x140339d1c;
                (*pcVar1)(plVar13);
                plVar14 = (longlong *)*plVar14;
            } while (plVar14 != (longlong *)*(longlong *)(param_1 + 0x20));
        }
        goto LAB_140339d35;
    }
    goto LAB_140339d2b;
}



undefined8 FUN_140339d70(undefined8 param_1,longlong **param_2)

{
    if (*(int *)(*param_2 + 0x23) != 1) {
        shutdown((*param_2)[0x22],1);
    }
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return 0;
}



void FUN_140339db0(undefined8 param_1,longlong **param_2)

{
    longlong *plVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *local_res10;

    plVar6 = *param_2 + 0x28;
    bVar2 = true;
    lVar5 = FUN_140338550(plVar6);
    iVar3 = recv((*param_2)[0x22],*(char **)(lVar5 + 0x10),*(int *)(lVar5 + 8),0);
    iVar4 = WSAGetLastError();
    do {
        if (iVar3 == 0) {
            FUN_140338730(plVar6,lVar5);
            if (iVar4 != 0) {
                plVar6 = *param_2;
                if (*(short *)((longlong)plVar6 + 0xde) == 0) {
                    FUN_140334d90();
                }
                plVar1 = *param_2;
                if (*(short *)((longlong)plVar1 + 0x5e) == 0) {
                    FUN_140334d90();
                }
                local_res10 = (longlong *)0x141decfd0;
                FUN_1401a3130(0xb,0,&local_res10,(longlong)plVar1 + 0x5e,(longlong)plVar6 + 0xde);
                *(undefined4 *)(*param_2 + 0x23) = 1;
                LAB_140339f2c:
                local_res10 = *param_2;
                if (local_res10 != (longlong *)0x0) {
                    (**(code **)*local_res10)();
                }
                FUN_140338df0(param_1,4,&local_res10);
            }
            LAB_140339f50:
            if (*param_2 != (longlong *)0x0) {
                (**(code **)(**param_2 + 8))();
            }
            return;
        }
        if (iVar3 < 0) {
            FUN_140338730(plVar6,lVar5);
            if (iVar4 == 0x2733) {
                if (!bVar2) goto LAB_140339f50;
                plVar6 = *param_2;
                if (*(short *)((longlong)plVar6 + 0xde) == 0) {
                    FUN_140334d90();
                }
                plVar1 = *param_2;
                if (*(short *)((longlong)plVar1 + 0x5e) == 0) {
                    FUN_140334d90();
                }
                local_res10 = (longlong *)0x141decf40;
                FUN_1401a3130(0xb,3,&local_res10,(longlong)plVar1 + 0x5e,(longlong)plVar6 + 0xde);
                *(undefined4 *)(*param_2 + 0x23) = 5;
            }
            else {
                plVar6 = *param_2;
                iVar3 = WSAGetLastError();
                FUN_140338eb0(L"recv",iVar3,plVar6 + 0x12);
                *(undefined4 *)(*param_2 + 0x23) = 5;
            }
            goto LAB_140339f2c;
        }
        plVar1 = *param_2;
        plVar6 = plVar1 + 0x36;
        *plVar6 = *plVar6 + (longlong)iVar3;
        plVar1 = plVar1 + 0x3d;
        *plVar1 = *plVar1 + 1;
        *(longlong *)(lVar5 + 0x20) = (longlong)iVar3 + *(longlong *)(lVar5 + 0x10);
        FUN_140337f20(*param_2 + 0x33);
        if (bVar2) {
            local_res10 = *param_2;
            if (local_res10 != (longlong *)0x0) {
                (**(code **)*local_res10)();
            }
            FUN_140338df0(param_1,3,&local_res10);
            bVar2 = false;
        }
        plVar6 = *param_2 + 0x28;
        lVar5 = FUN_140338550(plVar6);
        iVar3 = recv((*param_2)[0x22],*(char **)(lVar5 + 0x10),*(int *)(lVar5 + 8),0);
        iVar4 = WSAGetLastError();
    } while( true );
}



void FUN_14033a030(undefined8 param_1,longlong **param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *local_res10;

    plVar1 = *param_2;
    lVar4 = plVar1[0x30];
    do {
        if (lVar4 == 0) {
            LAB_14033a1ca:
            if (*param_2 != (longlong *)0x0) {
                // WARNING: Could not recover jumptable at 0x00014033a1e8. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code **)(**param_2 + 8))();
                return;
            }
            return;
        }
        lVar4 = (*param_2)[0x30];
        iVar5 = send((*param_2)[0x22],*(char **)(lVar4 + 0x10),
                     (int)*(undefined8 *)(lVar4 + 0x20) - (int)*(char **)(lVar4 + 0x10),0);
        lVar7 = (longlong)iVar5;
        iVar6 = WSAGetLastError();
        if (iVar5 < 0) {
            if (iVar6 == 0x2733) {
                plVar1 = *param_2;
                if (*(short *)((longlong)plVar1 + 0xde) == 0) {
                    FUN_140334d90();
                }
                plVar2 = *param_2;
                if (*(short *)((longlong)plVar2 + 0x5e) == 0) {
                    FUN_140334d90();
                }
                local_res10 = (longlong *)0x141ded260;
                FUN_1401a3130(0xb,3,&local_res10,(longlong)plVar2 + 0x5e,(longlong)plVar1 + 0xde);
            }
            else {
                plVar1 = *param_2;
                iVar5 = WSAGetLastError();
                FUN_140338eb0(L"send",iVar5,plVar1 + 0x12);
                *(undefined4 *)(*param_2 + 0x23) = 5;
                local_res10 = *param_2;
                if (local_res10 != (longlong *)0x0) {
                    (**(code **)*local_res10)();
                }
                FUN_140338df0(param_1,4,&local_res10);
            }
            goto LAB_14033a1ca;
        }
        plVar2 = *param_2;
        plVar2[0x38] = plVar2[0x38] + lVar7;
        plVar2[0x39] = plVar2[0x39] + 1;
        plVar2[0x3a] = plVar2[0x3a] + -1;
        plVar2[0x3c] = plVar2[0x3c] + 1;
        lVar3 = *(longlong *)(lVar4 + 0x10);
        lVar8 = *(longlong *)(lVar4 + 0x20) - lVar3;
        if (lVar7 == lVar8) {
            FUN_140338730(plVar1 + 0x28,lVar4);
        }
        else {
            lVar8 = lVar8 - lVar7;
            FUN_1407db590(lVar3,lVar3 + lVar7,lVar8);
            *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x10) + lVar8;
        }
        lVar4 = (*param_2)[0x30];
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14033a200(undefined8 param_1,longlong **param_2)

{
    longlong *plVar1;
    int iVar2;
    SOCKET SVar3;
    undefined *puVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined auStack264 [32];
    short *local_e8;
    longlong *local_d8;
    int local_d0 [2];
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8;
    undefined local_a8 [16];
    undefined *local_98;
    char local_90;
    short local_7a [25];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    local_d0[0] = 0x10;
    SVar3 = accept((*param_2)[0x22],(sockaddr *)&local_48,local_d0);
    WSAGetLastError();
    if (SVar3 == 0xffffffffffffffff) {
        plVar6 = *param_2;
        iVar2 = WSAGetLastError();
        FUN_140338eb0(L"accept",iVar2,plVar6 + 2);
    }
    else {
        plVar6 = (longlong *)0x0;
        local_b8 = 0;
        local_a8 = ZEXT816(0);
        local_98 = (undefined *)0x0;
        puVar4 = (undefined *)FUN_14018b280(8,0);
        local_98 = puVar4 + 8;
        local_a8 = CONCAT88(puVar4,puVar4);
        if (puVar4 != (undefined *)0x0) {
            *puVar4 = 0;
        }
        local_90 = '\0';
        local_7a[0] = 0;
        local_c8 = local_48;
        uStack196 = uStack68;
        uStack192 = uStack64;
        uStack188 = uStack60;
        FUN_140334d90(&local_c8);
        if (local_90 == '\0') {
            FUN_140334d90(&local_c8);
        }
        if (local_7a[0] == 0) {
            FUN_140334d90(&local_c8);
        }
        plVar1 = *param_2;
        if (*(short *)((longlong)plVar1 + 0x5e) == 0) {
            FUN_140334d90();
        }
        local_d8 = (longlong *)0x141ded300;
        local_e8 = local_7a;
        FUN_1401a3130(0xb,3,&local_d8,(longlong)plVar1 + 0x5e);
        lVar5 = FUN_14018b280(0x1f0,0);
        if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_14033ea90(lVar5,SVar3,&local_c8);
        }
        local_d8 = plVar6;
        if (plVar6 != (longlong *)0x0) {
            (**(code **)*plVar6)(plVar6);
        }
        FUN_140338df0(param_1,0,&local_d8);
        if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 8))(plVar6);
        }
        if (local_a8._0_8_ != 0) {
            FUN_14018b900(local_a8._0_8_,0);
        }
    }
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack264);
    return;
}



void FUN_14033a5a0(undefined8 *param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined auStack552 [32];
    char *local_208;
    uint local_200;
    undefined8 local_1f8;
    undefined **local_1f0;
    undefined8 local_1e8;
    LPVOID local_1e0;
    undefined **local_1d8;
    undefined8 local_1d0;
    LPVOID local_1c8;
    WSADATA local_1b8;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    local_1f8 = 0x141ded2d8;
    FUN_1401a2e50(0xb,1,&local_1f8);
    iVar1 = WSAStartup(0x202,&local_1b8);
    if (iVar1 == 0) {
        local_1f8 = 0x141ded1b0;
        local_200 = (uint)local_1b8.iMaxSockets;
        local_208 = local_1b8.szDescription;
        FUN_1401a2e50(0xb,1,&local_1f8,local_1b8.wVersion);
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
        }
        else {
            *puVar2 = &PTR_FUN_140b64920;
            uVar3 = FUN_14018b280(0x20);
            puVar2[2] = uVar3;
            *(undefined8 *)uVar3 = uVar3;
            *(undefined8 *)(puVar2[2] + 8) = puVar2[2];
            uVar3 = FUN_14018b280(0x18);
            puVar2[4] = uVar3;
            *(undefined8 *)uVar3 = uVar3;
            *(undefined8 *)(puVar2[4] + 8) = puVar2[4];
            *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
            *(undefined4 *)(puVar2 + 5) = 0;
        }
        DAT_140c65838 = puVar2;
        *param_1 = puVar2;
    }
    else {
        local_1e8 = 0;
        local_1f0 = &PTR_LAB_140b5e648;
        local_1e0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_1f0);
        local_1d8 = local_1f0;
        local_1f8 = 0x141ded1f8;
        local_1c8 = local_1e0;
        local_1d0 = local_1e8;
        iVar1 = FUN_140196f30(&DAT_140c8a63c,0xb,&local_1f8,&local_1d8);
        local_1f0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_1e0);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack552);
    return;
}



void FUN_14033a780(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;

    lVar1 = *(longlong *)(param_1 + 8);
    plVar3 = (longlong *)FUN_14018b280(0x18);
    if (plVar3 + 2 != (longlong *)0x0) {
        puVar2 = (undefined8 *)*param_2;
        plVar3[2] = (longlong)puVar2;
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)();
        }
    }
    *plVar3 = lVar1;
    plVar3[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar3;
    *(longlong **)(lVar1 + 8) = plVar3;
    return;
}



longlong FUN_14033a7e0(longlong param_1,ulonglong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;

    puVar5 = *(undefined8 **)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18) - (longlong)puVar5;
    lVar3 = lVar6 * 0x2aaaaaaaaaaaaaab;
    if ((ulonglong)(lVar6 / 0x18) < param_2) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        lVar4 = ((longlong)puVar2 - (longlong)puVar5) / 6 +
                ((longlong)puVar2 - (longlong)puVar5 >> 0x3f);
        lVar6 = FUN_14018b280(param_2 * 0x18,0);
        if (puVar5 != puVar2) {
            lVar3 = lVar6 - (longlong)puVar5;
            do {
                puVar1 = (undefined8 *)(lVar3 + (longlong)puVar5);
                if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = *puVar5;
                    puVar1[1] = puVar5[1];
                    puVar1[2] = puVar5[2];
                }
                puVar5 = puVar5 + 3;
            } while (puVar5 != puVar2);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar6;
        lVar3 = param_2 * 0x18 + lVar6;
        *(longlong *)(param_1 + 0x18) = lVar3;
        *(longlong *)(param_1 + 0x10) = lVar6 + ((lVar4 >> 2) - (lVar4 >> 0x3f)) * 0x18;
    }
    return lVar3;
}



void FUN_14033a8f0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            if ((longlong *)plVar2[3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[3] + 8))();
            }
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



void FUN_14033a960(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            if ((longlong *)plVar2[2] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[2] + 8))();
            }
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    return;
}



void FUN_14033a9d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    undefined *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;

    puVar7 = *(undefined8 **)(param_1 + 0x10);
    if (puVar7 != *(undefined8 **)(param_1 + 0x18)) {
        if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = puVar7[-3];
            puVar7[1] = puVar7[-2];
            puVar7[2] = puVar7[-1];
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x18;
        puVar2 = &DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10);
        puVar7 = (undefined8 *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
        for (lVar6 = ((longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10)) -
                      (longlong)param_2) / 0x18; 0 < lVar6; lVar6 = lVar6 + -1) {
            puVar7[-3] = *(undefined8 *)(&DAT_ffffffffffffffe8 + (longlong)puVar2);
            puVar7[-2] = *(undefined8 *)(puVar2 + -0x10);
            puVar7[-1] = *(undefined8 *)(puVar2 + -8);
            puVar2 = &DAT_ffffffffffffffe8 + (longlong)puVar2;
            puVar7 = puVar7 + -3;
        }
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
        return;
    }
    lVar6 = ((longlong)puVar7 - *(longlong *)(param_1 + 8)) / 0x18;
    if (lVar6 == 0) {
        lVar6 = 1;
    }
    else {
        lVar6 = lVar6 * 2;
    }
    uVar3 = FUN_14018a3e0(lVar6 * 0x18);
    puVar4 = (undefined8 *)FUN_14018b280((uVar3 / 0x18) * 0x18,0);
    puVar5 = puVar4;
    for (puVar7 = *(undefined8 **)(param_1 + 8); puVar7 != param_2; puVar7 = puVar7 + 3) {
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = *puVar7;
            puVar5[1] = puVar7[1];
            puVar5[2] = puVar7[2];
        }
        puVar5 = puVar5 + 3;
    }
    if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *param_3;
        puVar5[1] = param_3[1];
        puVar5[2] = param_3[2];
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    puVar7 = puVar5 + 3;
    if (param_2 != puVar1) {
        param_2 = (undefined8 *)
                ((longlong)param_2 +
                 (longlong)puVar7 + ((longlong)&DAT_ffffffffffffffe8 - (longlong)puVar5));
        do {
            if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = *param_2;
                puVar7[1] = param_2[1];
                puVar7[2] = param_2[2];
            }
            param_2 = param_2 + 3;
            puVar7 = puVar7 + 3;
        } while (param_2 != puVar1);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 0x10) = puVar7;
    *(undefined8 **)(param_1 + 0x18) = puVar4 + (uVar3 / 0x18) * 3;
    return;
}



void FUN_14033abe0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    undefined8 uVar2;

    if (*(longlong *)(param_1 + 200) == 0) {
        uVar2 = FUN_14018b280(0x40);
        *(undefined8 *)(param_1 + 200) = uVar2;
    }
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != param_2) {
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
        }
        *(longlong **)(param_1 + 0xc0) = param_2;
    }
    return;
}



undefined8 * FUN_14033ac40(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;

    param_1[0x18] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = param_2;
    param_1[5] = param_3;
    param_1[0x19] = 0;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x18] + 8))();
        param_1[0x18] = 0;
    }
    *(undefined4 *)(param_1 + 6) = 0;
    puVar2 = param_1 + 7;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return param_1;
}



void FUN_14033acd0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;

    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = param_2;
    param_1[5] = param_3;
    param_1[0x19] = 0;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x18] + 8))();
        param_1[0x18] = 0;
    }
    *(undefined4 *)(param_1 + 6) = 0;
    puVar2 = param_1 + 7;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return;
}



void FUN_14033ad30(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 8))();
        *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 200),0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xe8);
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xd8);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 8))();
    }
    return;
}



undefined8 * FUN_14033ae10(undefined8 *param_1)

{
    FUN_14033e900();
    *param_1 = &PTR_LAB_140b64a88;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    return param_1;
}



void FUN_14033ae50(undefined8 *param_1)

{
    ulonglong *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    puVar2 = param_1 + 0x24;
    *param_1 = &PTR_LAB_140b64a88;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD *)puVar2 == DVar5) {
        param_1[0x25] = param_1[0x25] + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = param_1 + 0x25;
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD *)puVar2 = DVar5;
                goto LAB_14033aec8;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(puVar2,DVar5);
    }
    LAB_14033aec8:
    lVar4 = param_1[0x3e];
    while (lVar4 != 0) {
        lVar4 = param_1[0x3e];
        if (lVar4 != 0) {
            FUN_14033ad30(lVar4);
            FUN_14018b900(lVar4,0);
        }
        lVar4 = param_1[0x3e];
    }
    lVar4 = param_1[0x3f];
    while (lVar4 != 0) {
        lVar4 = param_1[0x3f];
        if (lVar4 != 0) {
            FUN_14033ad30(lVar4);
            FUN_14018b900(lVar4,0);
        }
        lVar4 = param_1[0x3f];
    }
    if ((ulonglong)param_1[0x25] < 2) {
        *(int *)puVar2 = 0;
        param_1[0x25] = 0;
        if (param_1[0x26] != 0) {
            if (param_1[0x27] == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = param_1 + 0x27;
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent((HANDLE)param_1[0x27]);
        }
    }
    else {
        param_1[0x25] = param_1[0x25] + -1;
    }
    if (param_1[0x3f] != 0) {
        FUN_1401a4a00(param_1 + 0x3f);
    }
    if (param_1[0x3e] != 0) {
        FUN_1401a4a00(param_1 + 0x3e);
    }
    FUN_14033ec10(param_1);
    return;
}



ulonglong FUN_14033afe0(longlong param_1,undefined4 param_2)

{
    DWORD *pDVar1;
    ulonglong *puVar2;
    ulonglong *puVar3;
    ulonglong uVar4;
    DWORD DVar5;
    longlong lVar6;
    ulonglong uVar7;
    HANDLE hObject;
    ulonglong uVar8;

    pDVar1 = (DWORD *)(param_1 + 0x120);
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    uVar8 = uVar7;
    if (*pDVar1 == DVar5) {
        *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 1;
    }
    else {
        do {
            LOCK();
            puVar2 = (ulonglong *)(param_1 + 0x128);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ 1);
            if (uVar4 == 0) {
                *pDVar1 = DVar5;
                goto LAB_14033b058;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar1,DVar5);
    }
    LAB_14033b058:
    uVar8 = *(ulonglong *)(param_1 + 0x1f8);
    if (uVar8 == 0) {
        lVar6 = FUN_14018b280(0xf0,0);
        if (lVar6 != 0) {
            uVar7 = FUN_14033ac40(lVar6,param_2,param_1);
        }
        puVar2 = (ulonglong *)(param_1 + 0x1f0);
        if (*(longlong *)(uVar7 + 0xd0) == 0) {
            *(ulonglong **)(uVar7 + 0xd0) = puVar2;
            puVar3 = (ulonglong *)(uVar7 + 0xd8);
            *puVar3 = *puVar2;
            *puVar2 = uVar7;
            if (*puVar3 != 0) {
                *(ulonglong **)(*puVar3 + 0xd0) = puVar3;
            }
        }
        *(longlong *)(param_1 + 0x208) = *(longlong *)(param_1 + 0x208) + 1;
    }
    else {
        if (*(undefined8 **)(uVar8 + 0xd0) != (undefined8 *)0x0) {
            **(undefined8 **)(uVar8 + 0xd0) = *(undefined8 *)(uVar8 + 0xd8);
        }
        puVar2 = (ulonglong *)(uVar8 + 0xd8);
        if (*puVar2 != 0) {
            *(undefined8 *)(*puVar2 + 0xd0) = *(undefined8 *)(uVar8 + 0xd0);
        }
        *(undefined8 *)(uVar8 + 0xd0) = 0;
        *puVar2 = 0;
        *(longlong *)(param_1 + 0x200) = *(longlong *)(param_1 + 0x200) + -1;
        puVar3 = (ulonglong *)(param_1 + 0x1f0);
        if (*(longlong *)(uVar8 + 0xd0) == 0) {
            *(ulonglong **)(uVar8 + 0xd0) = puVar3;
            *puVar2 = *puVar3;
            *puVar3 = uVar8;
            if (*puVar2 != 0) {
                *(ulonglong **)(*puVar2 + 0xd0) = puVar2;
            }
        }
        FUN_14033acd0(uVar8,param_2,param_1);
        uVar7 = uVar8;
    }
    if (*(ulonglong *)(param_1 + 0x128) < 2) {
        *pDVar1 = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
        if (*(longlong *)(param_1 + 0x130) != 0) {
            if (*(longlong *)(param_1 + 0x138) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar2 = (ulonglong *)(param_1 + 0x138);
                uVar8 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar8 == 0) * (*puVar2 ^ (ulonglong)hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_1 + 0x138));
        }
    }
    else {
        *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + -1;
    }
    return uVar7;
}



void FUN_14033b1d0(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    longlong *plVar3;
    longlong *plVar4;
    ulonglong uVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;

    if (param_2 != 0) {
        pDVar2 = (DWORD *)(param_1 + 0x120);
        DVar6 = GetCurrentThreadId();
        uVar7 = 0;
        if (*pDVar2 == DVar6) {
            *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(param_1 + 0x128);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
                if (uVar5 == 0) {
                    *pDVar2 = DVar6;
                    goto LAB_14033b244;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar2);
        }
        LAB_14033b244:
        if (*(undefined8 **)(param_2 + 0xd0) != (undefined8 *)0x0) {
            **(undefined8 **)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xd8);
        }
        plVar3 = (longlong *)(param_2 + 0xd8);
        if (*plVar3 != 0) {
            *(undefined8 *)(*plVar3 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
        }
        *(undefined8 *)(param_2 + 0xd0) = 0;
        *plVar3 = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        if (*(longlong **)(param_2 + 0xc0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_2 + 0xc0) + 8))();
            *(undefined8 *)(param_2 + 0xc0) = 0;
        }
        FUN_14018b900(*(undefined8 *)(param_2 + 200),0);
        *(undefined8 *)(param_2 + 200) = 0;
        *(undefined4 *)(param_2 + 0xb8) = 0;
        plVar4 = (longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_2 + 0xd0) == 0) {
            *(longlong **)(param_2 + 0xd0) = plVar4;
            *plVar3 = *plVar4;
            *plVar4 = param_2;
            if (*plVar3 != 0) {
                *(longlong **)(*plVar3 + 0xd0) = plVar3;
            }
        }
        *(longlong *)(param_1 + 0x200) = *(longlong *)(param_1 + 0x200) + 1;
        if (*(ulonglong *)(param_1 + 0x128) < 2) {
            *pDVar2 = 0;
            *(undefined8 *)(param_1 + 0x128) = 0;
            if (*(longlong *)(param_1 + 0x130) != 0) {
                if (*(longlong *)(param_1 + 0x138) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(param_1 + 0x138);
                    uVar7 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(param_1 + 0x138));
            }
        }
        else {
            *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + -1;
        }
    }
    return;
}



void FUN_14033b360(longlong param_1)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    longlong lVar6;
    DWORD DVar7;
    HANDLE hObject;
    ulonglong uVar8;
    undefined8 local_res8;

    pDVar2 = (DWORD *)(param_1 + 0x120);
    DVar7 = GetCurrentThreadId();
    uVar8 = 0;
    if (*pDVar2 == DVar7) {
        *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0x128);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar7;
                goto LAB_14033b3c8;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar2,DVar7);
    }
    LAB_14033b3c8:
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x208);
        uVar5 = *(undefined8 *)(param_1 + 0x200);
        if (*(short *)(param_1 + 0xde) == 0) {
            FUN_140334d90();
        }
        local_res8 = 0x141e5efc0;
        FUN_1401a3130(99,1,&local_res8,param_1 + 0xde,uVar5,uVar4);
        lVar6 = *(longlong *)(param_1 + 0x1f0);
        while (lVar6 != 0) {
            FUN_14033b1d0(param_1,lVar6);
            lVar6 = *(longlong *)(param_1 + 0x1f0);
        }
    }
    if (1 < *(ulonglong *)(param_1 + 0x128)) {
        *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + -1;
        return;
    }
    *pDVar2 = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (*(longlong *)(param_1 + 0x130) != 0) {
        if (*(longlong *)(param_1 + 0x138) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0x138);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
            if (uVar8 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE *)(param_1 + 0x138));
    }
    return;
}



void FUN_14033b4e0(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;

    param_2[2] = *(undefined8 *)(param_1 + 0x200);
    param_2[3] = *(undefined8 *)(param_1 + 0x208);
    uVar1 = FUN_140338940(param_1 + 0x140);
    *param_2 = uVar1;
    uVar1 = FUN_140338830(param_1 + 0x140);
    param_2[1] = uVar1;
    return;
}



undefined8 FUN_14033b530(undefined8 param_1,ulonglong param_2)

{
    FUN_14033ae50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14033b580(undefined8 *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b64a30;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x26] + 8))();
    }
    lVar3 = param_1[0x1e];
    lVar1 = param_1[0x20];
    plVar2 = (longlong *)param_1[0x21];
    while (lVar3 != param_1[0x22]) {
        lVar3 = lVar3 + 8;
        if (lVar3 == lVar1) {
            plVar2 = plVar2 + 1;
            lVar3 = *plVar2;
            lVar1 = lVar3 + 0x1f0;
        }
    }
    FUN_14033e040();
    if (param_1[0x1a] != 0) {
        CloseHandle((HANDLE)param_1[0x1a]);
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13] + 8))();
    }
    FUN_14033a960(param_1 + 0x10);
    FUN_14018b900(param_1[0x11],0);
    if (param_1[0xe] != 0) {
        FUN_14033e290(param_1 + 0xc,*(undefined8 *)(param_1[0xd] + 8));
        *(undefined8 *)(param_1[0xd] + 0x10) = param_1[0xd];
        *(undefined8 *)(param_1[0xd] + 8) = 0;
        *(undefined8 *)(param_1[0xd] + 0x18) = param_1[0xd];
        param_1[0xe] = 0;
    }
    FUN_14018b900(param_1[0xd],0);
    FUN_14033dc90(param_1 + 1);
    return;
}



void FUN_14033b690(longlong param_1,undefined4 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    undefined4 *puVar4;
    DWORD DVar5;
    HANDLE hObject;
    uint uVar6;
    ulonglong uVar7;
    undefined4 local_28 [2];
    longlong *local_20;

    pDVar2 = (DWORD *)(param_1 + 0xb8);
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    if (*pDVar2 == DVar5) {
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0xc0);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar5;
                goto LAB_14033b708;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar2,DVar5);
    }
    LAB_14033b708:
    local_28[0] = param_2;
    local_20 = param_3;
    if (param_3 != (longlong *)0x0) {
        (**(code **)*param_3)(param_3);
        (**(code **)*param_3)(param_3);
        (**(code **)*param_3)(param_3);
        (**(code **)(*param_3 + 8))(param_3);
    }
    puVar4 = *(undefined4 **)(param_1 + 0x40);
    if (puVar4 == (undefined4 *)(*(longlong *)(param_1 + 0x50) + -0x10)) {
        FUN_14033e1d0(param_1 + 8,local_28);
    }
    else {
        if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = param_2;
            *(longlong **)(puVar4 + 2) = param_3;
            if (param_3 != (longlong *)0x0) {
                (**(code **)*param_3)(param_3);
            }
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x10;
    }
    if (param_3 != (longlong *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
    }
    uVar6 = ((int)(*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x38) >> 3) + -1) * 0x1f +
            (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x48) >> 4) +
            (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x20) >> 4);
    if (*(uint *)(param_1 + 0x158) <= uVar6 && uVar6 != *(uint *)(param_1 + 0x158)) {
        *(uint *)(param_1 + 0x158) = uVar6;
    }
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    if (param_3 != (longlong *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
    }
    if (*(ulonglong *)(param_1 + 0xc0) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        if (*(longlong *)(param_1 + 200) != 0) {
            if (*(longlong *)(param_1 + 0xd0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(param_1 + 0xd0);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_1 + 0xd0));
        }
    }
    else {
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + -1;
    }
    return;
}



void FUN_14033b860(undefined8 param_1,ulonglong param_2,longlong param_3)

{
    short sVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 unaff_RSI;
    longlong lStackX8;
    longlong alStackX16 [3];
    undefined8 uStack32;

    uStack32 = 0x14033b86e;
    lVar2 = FUN_1407f0f60();
    lVar2 = -lVar2;
    *(ulonglong *)(&stack0x00001038 + lVar2) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe8 + lVar2);
    uVar3 = (uint)param_2;
    if ((int)uVar3 < 1) {
        param_2 = param_2 & 0xffffffff;
    }
    else {
        param_2 = (ulonglong)(uVar3 & 0xffff | 0x80070000);
    }
    *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x14033b8ae;
    FUN_1401b3450(&stack0x00000038 + lVar2,0x800,param_2);
    if (param_3 == 0) {
        *(undefined8 *)(&stack0x00000028 + lVar2) = 0x141ded238;
        *(undefined **)((longlong)alStackX16 + lVar2) = &stack0x00000038 + lVar2;
        *(uint *)((longlong)&lStackX8 + lVar2) = uVar3;
        *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x14033b935;
        FUN_1401a3130(99,0,&stack0x00000028 + lVar2,param_1);
    }
    else {
        sVar1 = *(short *)(param_3 + 0x4e);
        *(undefined8 *)(&stack0x00001080 + lVar2) = unaff_RSI;
        if (sVar1 == 0) {
            *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x14033b8ce;
            FUN_140334d90(param_3);
        }
        *(undefined8 *)(&stack0x00000028 + lVar2) = 0x141decf98;
        *(undefined **)((longlong)alStackX16 + lVar2 + 8) = &stack0x00000038 + lVar2;
        *(uint *)((longlong)alStackX16 + lVar2) = uVar3;
        *(longlong *)((longlong)&lStackX8 + lVar2) = param_3 + 0x4e;
        *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x14033b8ff;
        FUN_1401a3130(99,0,&stack0x00000028 + lVar2,param_1);
    }
    *(undefined8 *)((longlong)&uStack32 + lVar2) = 0x14033b945;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00001038 + lVar2) ^
                  (ulonglong)(&stack0xffffffffffffffe8 + lVar2));
    return;
}



void FUN_14033b950(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    uint uVar1;
    undefined8 local_res20;
    undefined auStack2152 [32];
    undefined *local_848;
    undefined *local_840;
    undefined8 local_838 [2];
    undefined local_828 [2046];
    undefined2 local_2a;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack2152;
    local_res20 = param_4;
    uVar1 = FUN_1407dda14(local_828,0x3ff,param_3,&local_res20);
    if ((((int)uVar1 < 0) || (0x3ff < uVar1)) || (uVar1 == 0x3ff)) {
        local_2a = 0;
    }
    if (param_2 == 0) {
        local_838[0] = 0x141ded540;
        local_848 = local_828;
        FUN_1401a3130(99,2,local_838,param_1);
    }
    else {
        local_848 = (undefined *)(param_2 + 0x4e);
        if (*(short *)(param_2 + 0x4e) == 0) {
            FUN_140334d90(param_2);
        }
        local_838[0] = 0x141ded098;
        local_840 = local_828;
        FUN_1401a3130(99,2,local_838,param_1);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack2152);
    return;
}



void FUN_14033ba50(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined auStack2168 [32];
    undefined *local_858;
    undefined *local_850;
    undefined8 local_848 [2];
    undefined local_838 [2046];
    undefined2 local_3a;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2168;
    uVar1 = FUN_1407dda14(local_838,0x3ff,param_4,&stack0x00000028);
    if ((((int)uVar1 < 0) || (0x3ff < uVar1)) || (uVar1 == 0x3ff)) {
        local_3a = 0;
    }
    if (param_3 == 0) {
        local_848[0] = 0x141ded5b8;
        local_858 = local_838;
        FUN_1401a3130(99,param_2,local_848,param_1);
    }
    else {
        local_858 = (undefined *)(param_3 + 0x4e);
        if (*(short *)(param_3 + 0x4e) == 0) {
            FUN_140334d90(param_3);
        }
        local_848[0] = 0x141ded528;
        local_850 = local_838;
        FUN_1401a3130(99,param_2,local_848,param_1);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2168);
    return;
}



undefined8 FUN_14033bb50(ulonglong param_1,SOCKET *param_2)

{
    int iVar1;
    SOCKET s;
    wchar_t *pwVar2;
    ulonglong local_res8;
    undefined4 local_res18 [4];

    local_res8 = param_1;
    s = WSASocketW(2,1,6,0,0,1);
    if (s == 0xffffffffffffffff) {
        iVar1 = WSAGetLastError();
        pwVar2 = L"CNetworkDriverIOCompletion::CreateSocket WSASocket";
    }
    else {
        local_res8 = local_res8 & 0xffffffff00000000;
        local_res18[0] = 1;
        iVar1 = setsockopt(s,0xffff,0x1001,(char *)&local_res8,4);
        if (iVar1 == -1) {
            iVar1 = WSAGetLastError();
            pwVar2 = L"CNetworkDriverIOCompletion::CreateSocket setsockopt SO_SNDBUF";
        }
        else {
            iVar1 = setsockopt(s,6,1,(char *)local_res18,4);
            if (iVar1 != -1) {
                *param_2 = s;
                return 0;
            }
            iVar1 = WSAGetLastError();
            pwVar2 = L"CNetworkDriverIOCompletion::CreateSocket setsockopt TCP_NODELAY";
        }
    }
    FUN_14033b860(pwVar2,iVar1,0);
    return 0x80004005;
}



undefined8 FUN_14033bf90(longlong param_1,longlong param_2)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 local_res8 [2];
    undefined local_res10 [8];
    undefined4 local_18 [2];
    undefined8 local_10;

    LOCK();
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    uVar2 = iVar3 + 1;
    if (*(uint *)(param_1 + 0x160) <= uVar2 && uVar2 != *(uint *)(param_1 + 0x160)) {
        *(uint *)(param_1 + 0x160) = uVar2;
    }
    lVar5 = FUN_14033afe0(param_2,2);
    lVar6 = FUN_140338550();
    *(undefined4 *)(lVar5 + 0x30) = 1;
    *(longlong *)(lVar5 + 0x38) = lVar6;
    local_18[0] = *(undefined4 *)(lVar6 + 8);
    local_10 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x10);
    local_res8[0] = 0;
    iVar3 = WSARecv(*(undefined8 *)(param_2 + 0x110),local_18,1,local_res10,local_res8,lVar5,0);
    iVar4 = WSAGetLastError();
    if ((iVar3 == -1) && (iVar4 != 0x3e5)) {
        FUN_14033b860(L"WSARecv",iVar4,param_2 + 0x90);
        LOCK();
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
        return 0x80004005;
    }
    return 0;
}



void FUN_14033c7e0(longlong *param_1,undefined8 *param_2,int param_3)

{
    int *piVar1;
    ulonglong uVar2;
    DWORD DVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    HANDLE hObject;
    ulonglong uVar7;
    int iVar8;
    undefined4 uVar9;
    ulonglong *puVar10;
    longlong *plVar11;
    undefined8 *puVar12;
    ulonglong uVar13;
    undefined auStack456 [32];
    undefined4 local_1a8;
    longlong local_1a0;
    undefined8 local_198;
    undefined8 *local_188;
    uint local_180;
    longlong local_178;
    int local_170;
    longlong *local_168;
    undefined8 *local_160;
    undefined local_158 [16];
    undefined4 local_148 [2];
    undefined8 local_140 [31];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack456;
    local_188 = param_2 + 0x24;
    local_170 = param_3;
    DVar3 = GetCurrentThreadId();
    uVar13 = 0;
    puVar10 = local_188 + 1;
    uVar9 = 1;
    uVar7 = uVar13;
    if (*(DWORD *)(param_2 + 0x24) == DVar3) {
        *puVar10 = *puVar10 + 1;
    }
    else {
        do {
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 ^ (ulonglong)(uVar2 == 0) * (*puVar10 ^ 1);
            if (uVar2 == 0) {
                *(DWORD *)local_188 = DVar3;
                goto LAB_14033c86e;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(local_188);
    }
    LAB_14033c86e:
    if (param_2[0x30] != 0) {
        LOCK();
        piVar1 = (int *)((longlong)param_1 + 0x14c);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + 1;
        uVar4 = iVar8 + 1;
        if (*(uint *)((longlong)param_1 + 0x15c) <= uVar4 &&
            uVar4 != *(uint *)((longlong)param_1 + 0x15c)) {
            *(uint *)((longlong)param_1 + 0x15c) = uVar4;
        }
        FUN_1407e4830(local_148,0,0x100);
        lVar6 = FUN_14033afe0(param_2);
        local_180 = 0;
        puVar12 = local_140;
        local_168 = (longlong *)(lVar6 + 0x38);
        do {
            if ((param_2[0x30] == 0) || (0xf < *(uint *)(lVar6 + 0x30))) break;
            *(undefined8 *)(lVar6 + 0x38 + (ulonglong)*(uint *)(lVar6 + 0x30) * 8) = param_2[0x30];
            *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
            FUN_140337de0();
            uVar4 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar4;
            plVar11 = local_168 + 1;
            iVar8 = *(int *)(*local_168 + 0x20) - *(int *)(*local_168 + 0x10);
            local_180 = local_180 + iVar8;
            *(int *)(puVar12 + -1) = iVar8;
            *puVar12 = *(undefined8 *)(*local_168 + 0x10);
            puVar12 = puVar12 + 2;
            local_168 = plVar11;
        } while (uVar4 < 0x10);
        if ((local_170 == 0) || (param_2[0x30] != 0)) {
            uVar9 = 0;
        }
        *(undefined4 *)(lVar6 + 0xb8) = uVar9;
        local_198 = 0;
        local_1a8 = 0;
        local_1a0 = lVar6;
        iVar8 = WSASend(param_2[0x22],local_148,uVar13,local_158);
        iVar5 = WSAGetLastError();
        if ((iVar8 == 0) || (iVar5 == 0x3e5)) {
            param_2[0x37] = param_2[0x37] + (ulonglong)local_180;
            param_2[0x3b] = param_2[0x3b] + uVar13;
            param_2[0x3a] = param_2[0x3a] + 1;
        }
        else {
            FUN_14018d540(&local_178,L"SendBuffersOverlapped->WSASend [%d buffers]",uVar13);
            if (iVar5 == 0x274a) {
                FUN_14033ba50(local_178,3,param_2 + 0x12,
                              L"Error 10058 [[A request to send or receive data was disallowed because the socket hd alredy been shut down in that direction with a previous shutdown call. (8007274a)]]"
                );
            }
            else {
                FUN_14033b860(local_178,iVar5,param_2 + 0x12);
            }
            local_160 = param_2;
            (**(code **)*param_2)(param_2);
            (**(code **)(*param_1 + 0x18))(param_1,&local_160);
            FUN_14033b690(param_1,4,param_2);
            FUN_14033b1d0(param_2,lVar6);
            LOCK();
            *(int *)((longlong)param_1 + 0x14c) = *(int *)((longlong)param_1 + 0x14c) + -1;
            if (local_178 != 0) {
                (**(code **)(*(longlong *)(local_178 + -0x10) + 8))(local_178 + -0x10);
            }
        }
    }
    puVar12 = local_188;
    if (*puVar10 < 2) {
        *(int *)local_188 = 0;
        *puVar10 = 0;
        if (local_188[2] != 0) {
            if (local_188[3] == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar10 = puVar12 + 3;
                uVar7 = *puVar10;
                *puVar10 = *puVar10 ^ (ulonglong)(uVar7 == 0) * (*puVar10 ^ (ulonglong)hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent((HANDLE)puVar12[3]);
        }
    }
    else {
        *puVar10 = *puVar10 - 1;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack456);
    return;
}



ulonglong FUN_14033cb10(undefined8 param_1,longlong **param_2,undefined8 param_3)

{
    ulonglong uVar1;

    FUN_140337f20(*param_2 + 0x30,param_3);
    do {
        uVar1 = FUN_14033c7e0(param_1,*param_2,0);
    } while ((int)uVar1 == 0);
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
        uVar1 = uVar1 & 0xffffffff;
    }
    return uVar1;
}



undefined8 FUN_14033cb80(longlong param_1,longlong **param_2,int param_3)

{
    DWORD *pDVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    longlong lVar4;
    undefined4 uVar5;
    DWORD DVar6;
    undefined8 uVar7;
    longlong *plVar8;
    HANDLE hObject;
    ulonglong uVar9;

    uVar5 = (**(code **)(*DAT_140c65808 + 0x40))();
    pDVar1 = (DWORD *)(param_1 + 0xb8);
    DVar6 = GetCurrentThreadId();
    uVar9 = 0;
    if (*pDVar1 == DVar6) {
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
    }
    else {
        do {
            LOCK();
            puVar3 = (ulonglong *)(param_1 + 0xc0);
            uVar2 = *puVar3;
            *puVar3 = *puVar3 ^ (ulonglong)(uVar2 == 0) * (*puVar3 ^ 1);
            if (uVar2 == 0) {
                *pDVar1 = DVar6;
                goto LAB_14033cc08;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x400);
        FUN_14019fb60(pDVar1,DVar6);
    }
    LAB_14033cc08:
    puVar3 = *(ulonglong **)(param_1 + 0x110);
    if (puVar3 == (ulonglong *)(*(longlong *)(param_1 + 0x120) + -8)) {
        if ((ulonglong)
                    (*(longlong *)(param_1 + 0xe8) -
                     (*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0xe0) >> 3)) < 2) {
            FUN_140173030(param_1 + 0xd8);
        }
        uVar7 = FUN_14018b280(0x1f0,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 8) = uVar7;
        if (*(ulonglong **)(param_1 + 0x110) != (ulonglong *)0x0) {
            **(ulonglong **)(param_1 + 0x110) = (ulonglong)CONCAT14(param_3 != 0,uVar5);
        }
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x128) + 8);
        *(longlong **)(param_1 + 0x128) = plVar8;
        lVar4 = *plVar8;
        *(longlong *)(param_1 + 0x118) = lVar4;
        *(longlong *)(param_1 + 0x120) = lVar4 + 0x1f0;
        *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x118);
    }
    else {
        if (puVar3 != (ulonglong *)0x0) {
            *puVar3 = (ulonglong)CONCAT14(param_3 != 0,uVar5);
        }
        *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 8;
    }
    if (*(ulonglong *)(param_1 + 0xc0) < 2) {
        *pDVar1 = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        if (*(longlong *)(param_1 + 200) != 0) {
            if (*(longlong *)(param_1 + 0xd0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar3 = (ulonglong *)(param_1 + 0xd0);
                uVar9 = *puVar3;
                *puVar3 = *puVar3 ^ (ulonglong)(uVar9 == 0) * (*puVar3 ^ (ulonglong)hObject);
                if (uVar9 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_1 + 0xd0));
        }
    }
    else {
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + -1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return 0;
}



ulonglong FUN_14033cd40(longlong param_1,undefined4 *param_2)

{
    DWORD *pDVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong *puVar7;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined local_38 [32];

    pDVar1 = (DWORD *)(param_1 + 0xb8);
    DVar5 = GetCurrentThreadId();
    puVar7 = (ulonglong *)(param_1 + 0xc0);
    uVar6 = 0;
    if (*pDVar1 == DVar5) {
        *puVar7 = *puVar7 + 1;
    }
    else {
        do {
            LOCK();
            uVar4 = *puVar7;
            *puVar7 = *puVar7 ^ (ulonglong)(uVar4 == 0) * (*puVar7 ^ 1);
            if (uVar4 == 0) {
                *pDVar1 = DVar5;
                goto LAB_14033cdc9;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar1,DVar5);
    }
    LAB_14033cdc9:
    puVar2 = *(undefined4 **)(param_1 + 0x20);
    uVar6 = 1;
    if (*(undefined4 **)(param_1 + 0x40) != puVar2) {
        *param_2 = *puVar2;
        puVar3 = *(undefined8 **)(puVar2 + 2);
        if (*(undefined8 **)(param_2 + 2) != puVar3) {
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)();
            }
            if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_2 + 2) + 8))();
            }
            *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar2 + 2);
        }
        local_58 = *(undefined8 *)(param_1 + 0x20);
        local_50 = *(undefined8 *)(param_1 + 0x28);
        local_48 = *(undefined8 *)(param_1 + 0x30);
        local_40 = *(undefined8 *)(param_1 + 0x38);
        FUN_14033dd20(param_1 + 8,local_38,&local_58);
        uVar6 = 0;
    }
    if (*puVar7 < 2) {
        *pDVar1 = 0;
        *puVar7 = 0;
        if (*(longlong *)(param_1 + 200) != 0) {
            if (*(longlong *)(param_1 + 0xd0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar7 = (ulonglong *)(param_1 + 0xd0);
                uVar4 = *puVar7;
                *puVar7 = *puVar7 ^ (ulonglong)(uVar4 == 0) * (*puVar7 ^ (ulonglong)hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_1 + 0xd0));
        }
    }
    else {
        *puVar7 = *puVar7 - 1;
    }
    return uVar6;
}



undefined8 FUN_14033ced0(longlong param_1,int param_2)

{
    _FILETIME local_res18 [2];

    if (param_2 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))();
    }
    GetSystemTimeAsFileTime(local_res18);
    FUN_14033d0b0(param_1,local_res18[0]);
    return 0;
}



undefined8 FUN_14033cf10(longlong param_1,longlong **param_2)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined4 uVar6;
    DWORD DVar7;
    undefined8 uVar8;
    longlong *plVar9;
    HANDLE hObject;
    ulonglong uVar10;

    uVar6 = (**(code **)(*DAT_140c65808 + 0x40))();
    pDVar2 = (DWORD *)(param_1 + 0xb8);
    DVar7 = GetCurrentThreadId();
    uVar10 = 0;
    if (*pDVar2 == DVar7) {
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0xc0);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar2 = DVar7;
                goto LAB_14033cf88;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < 0x400);
        FUN_14019fb60(pDVar2,DVar7);
    }
    LAB_14033cf88:
    puVar4 = *(undefined8 **)(param_1 + 0x110);
    if (puVar4 == (undefined8 *)(*(longlong *)(param_1 + 0x120) + -8)) {
        if ((ulonglong)
                    (*(longlong *)(param_1 + 0xe8) -
                     (*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0xe0) >> 3)) < 2) {
            FUN_140173030(param_1 + 0xd8);
        }
        uVar8 = FUN_14018b280(0x1f0,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 8) = uVar8;
        if (*(undefined8 **)(param_1 + 0x110) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x110) = CONCAT44(2,uVar6);
        }
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x128) + 8);
        *(longlong **)(param_1 + 0x128) = plVar9;
        lVar5 = *plVar9;
        *(longlong *)(param_1 + 0x118) = lVar5;
        *(longlong *)(param_1 + 0x120) = lVar5 + 0x1f0;
        *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x118);
    }
    else {
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = CONCAT44(2,uVar6);
        }
        *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 8;
    }
    if (*(ulonglong *)(param_1 + 0xc0) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        if (*(longlong *)(param_1 + 200) != 0) {
            if (*(longlong *)(param_1 + 0xd0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(param_1 + 0xd0);
                uVar10 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar10 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_1 + 0xd0));
        }
    }
    else {
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + -1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return 0;
}



void FUN_14033d0b0(longlong param_1,ulonglong param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    longlong lVar6;
    undefined8 local_res8;

    pplVar1 = *(longlong ***)(param_1 + 0x88);
    lVar6 = 0;
    pplVar5 = (longlong **)*pplVar1;
    if (pplVar5 != pplVar1) {
        do {
            pplVar5 = (longlong **)*pplVar5;
            lVar6 = lVar6 + 1;
        } while (pplVar5 != pplVar1);
        while (lVar6 != 0) {
            plVar2 = *(longlong **)(**(longlong **)(param_1 + 0x88) + 0x10);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)*plVar2)(plVar2);
            }
            if ((param_2 != 0) && (param_2 <= (ulonglong)plVar2[0x42] && plVar2[0x42] != param_2)) {
                (**(code **)(*plVar2 + 8))(plVar2);
                return;
            }
            if (*(short *)((longlong)plVar2 + 0xde) == 0) {
                FUN_140334d90();
            }
            local_res8 = 0x141dede30;
            FUN_1401a3130(99,3,&local_res8,(longlong)plVar2 + 0xde);
            FUN_14033b360(plVar2);
            plVar3 = **(longlong ***)(param_1 + 0x88);
            lVar6 = *plVar3;
            plVar4 = (longlong *)plVar3[1];
            *plVar4 = lVar6;
            *(longlong **)(lVar6 + 8) = plVar4;
            if ((longlong *)plVar3[2] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar3[2] + 8))();
            }
            FUN_14018b900(plVar3);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))(plVar2);
            }
            pplVar1 = *(longlong ***)(param_1 + 0x88);
            lVar6 = 0;
            pplVar5 = (longlong **)*pplVar1;
            if (pplVar5 == pplVar1) {
                return;
            }
            do {
                pplVar5 = (longlong **)*pplVar5;
                lVar6 = lVar6 + 1;
            } while (pplVar5 != pplVar1);
        }
    }
    return;
}



undefined8 FUN_14033d200(void)

{
    ulonglong *puVar1;
    longlong *plVar2;
    int iVar3;
    ulonglong uVar4;
    longlong *plVar5;
    int iVar6;
    longlong lVar7;
    longlong *plVar8;
    DWORD DVar9;
    longlong lVar10;
    HANDLE pvVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    longlong lVar15;
    int iVar16;
    undefined8 local_res18;

    plVar8 = DAT_140c65840;
    uVar13 = 0;
    if (*(int *)((longlong)DAT_140c65840 + 0x144) == 0) {
        *(undefined4 *)((longlong)DAT_140c65840 + 0x144) = 1;
        iVar3 = *(int *)(plVar8 + 0x28);
        iVar6 = 100;
        while ((iVar3 != 0 && (iVar6 != 0))) {
            uVar12 = uVar13;
            if (*(int *)(plVar8 + 0x28) != 0) {
                do {
                    (**(code **)(*(longlong *)plVar8[0x26] + 0x10))();
                    uVar14 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar14;
                } while (uVar14 < *(uint *)(plVar8 + 0x28));
            }
            Sleep(100);
            iVar3 = *(int *)(plVar8 + 0x28);
            iVar6 = iVar6 + -1;
        }
        if ((longlong *)plVar8[0x27] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar8[0x27] + 0x28))();
            (**(code **)(*(longlong *)plVar8[0x27] + 0x30))();
            (**(code **)(*(longlong *)plVar8[0x27] + 8))();
            plVar8[0x27] = 0;
        }
    }
    if (plVar8[0x12] != 0) {
        plVar2 = plVar8 + 0x17;
        DVar9 = GetCurrentThreadId();
        uVar12 = uVar13;
        if (*(DWORD *)plVar2 == DVar9) {
            plVar8[0x18] = plVar8[0x18] + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(plVar8 + 0x18);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD *)plVar2 = DVar9;
                    goto LAB_14033d324;
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 < 0x400);
            FUN_14019fb60(plVar2);
        }
        LAB_14033d324:
        lVar15 = *(longlong *)(plVar8[0xd] + 0x10);
        if (lVar15 != plVar8[0xd]) {
            do {
                plVar5 = *(longlong **)(lVar15 + 0x20);
                if (plVar5 != (longlong *)0x0) {
                    (**(code **)*plVar5)(plVar5);
                }
                lVar10 = *(longlong *)(lVar15 + 0x18);
                if (lVar10 == 0) {
                    lVar10 = *(longlong *)(lVar15 + 8);
                    if (lVar15 == *(longlong *)(lVar10 + 0x18)) {
                        do {
                            lVar15 = lVar10;
                            lVar10 = *(longlong *)(lVar15 + 8);
                        } while (lVar15 == *(longlong *)(lVar10 + 0x18));
                    }
                    if (*(longlong *)(lVar15 + 0x18) != lVar10) {
                        lVar15 = lVar10;
                    }
                }
                else {
                    for (lVar7 = *(longlong *)(lVar10 + 0x10); lVar15 = lVar10, lVar7 != 0;
                         lVar7 = *(longlong *)(lVar7 + 0x10)) {
                        lVar10 = lVar7;
                    }
                }
                if (plVar5 != (longlong *)0x0) {
                    (**(code **)*plVar5)(plVar5);
                }
                (**(code **)(*plVar8 + 0x18))(plVar8);
                if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                }
            } while (lVar15 != plVar8[0xd]);
        }
        if ((ulonglong)plVar8[0x18] < 2) {
            *(int *)plVar2 = 0;
            plVar8[0x18] = 0;
            if (plVar8[0x19] != 0) {
                if (plVar8[0x1a] == 0) {
                    pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(plVar8 + 0x1a);
                    uVar12 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)pvVar11);
                    if (uVar12 != 0) {
                        CloseHandle(pvVar11);
                    }
                }
                SetEvent((HANDLE)plVar8[0x1a]);
            }
        }
        else {
            plVar8[0x18] = plVar8[0x18] + -1;
        }
        iVar3 = *(int *)(plVar8 + 0x15);
        iVar6 = 100;
        while ((iVar16 = iVar6, iVar3 != 0 && (iVar16 = iVar6 + -1, iVar6 != 0))) {
            Sleep(100);
            uVar12 = uVar13;
            if (*(int *)(plVar8 + 0x15) != 0) {
                do {
                    PostQueuedCompletionStatus((HANDLE)plVar8[0x12],0,0,(LPOVERLAPPED)0x0);
                    uVar14 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar14;
                } while (uVar14 < *(uint *)(plVar8 + 0x15));
            }
            FUN_1401a3130(99);
            iVar3 = *(int *)(plVar8 + 0x15);
            iVar6 = iVar16;
        }
        if ((*(int *)(plVar8 + 0x15) != 0) || (iVar16 == 0)) {
            local_res18 = 0x141dede80;
            FUN_1401a3130(99,0,&local_res18,*(int *)(plVar8 + 0x15),iVar16);
        }
        if ((longlong *)plVar8[0x14] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar8[0x14] + 0x28))();
            (**(code **)(*(longlong *)plVar8[0x14] + 0x30))();
            (**(code **)(*(longlong *)plVar8[0x14] + 8))();
            plVar8[0x14] = 0;
        }
        CloseHandle((HANDLE)plVar8[0x12]);
        plVar8[0x12] = 0;
    }
    plVar2 = plVar8 + 0x17;
    DVar9 = GetCurrentThreadId();
    if (*(DWORD *)plVar2 == DVar9) {
        plVar8[0x18] = plVar8[0x18] + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(plVar8 + 0x18);
            uVar12 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ 1);
            if (uVar12 == 0) {
                *(DWORD *)plVar2 = DVar9;
                goto LAB_14033d566;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < 0x400);
        FUN_14019fb60(plVar2);
    }
    LAB_14033d566:
    FUN_14033e0a0(plVar8 + 1);
    if (plVar8[0xe] != 0) {
        lVar15 = *(longlong *)(plVar8[0xd] + 8);
        while (lVar15 != 0) {
            FUN_14033e290(plVar8 + 0xc,*(undefined8 *)(lVar15 + 0x18));
            lVar10 = *(longlong *)(lVar15 + 0x10);
            if (*(longlong **)(lVar15 + 0x20) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar15 + 0x20) + 8))();
            }
            FUN_14018b900(lVar15,0);
            lVar15 = lVar10;
        }
        *(longlong *)(plVar8[0xd] + 0x10) = plVar8[0xd];
        *(undefined8 *)(plVar8[0xd] + 8) = 0;
        *(longlong *)(plVar8[0xd] + 0x18) = plVar8[0xd];
        plVar8[0xe] = 0;
    }
    if ((ulonglong)plVar8[0x18] < 2) {
        *(int *)plVar2 = 0;
        plVar8[0x18] = 0;
        if (plVar8[0x19] != 0) {
            if (plVar8[0x1a] == 0) {
                pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(plVar8 + 0x1a);
                uVar13 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar13 == 0) * (*puVar1 ^ (ulonglong)pvVar11);
                if (uVar13 != 0) {
                    CloseHandle(pvVar11);
                }
            }
            SetEvent((HANDLE)plVar8[0x1a]);
        }
    }
    else {
        plVar8[0x18] = plVar8[0x18] + -1;
    }
    FUN_14033d0b0(plVar8,0xffffffffffffffff);
    return 0;
}



void FUN_14033dc90(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    while (lVar4 != lVar1) {
        if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar4 + 8) + 8))();
        }
        lVar4 = lVar4 + 0x10;
        if (lVar4 == lVar2) {
            lVar4 = *(longlong *)(lVar3 + 8);
            lVar3 = lVar3 + 8;
            lVar2 = lVar4 + 0x1f0;
        }
    }
    FUN_14033e040(param_1);
    return;
}



undefined8 FUN_14033dd20(longlong param_1,undefined8 param_2,longlong *param_3)

{
    ulonglong uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong local_a8;
    longlong local_a0;
    longlong local_98;
    longlong local_90;
    longlong local_88;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    longlong local_60;
    longlong local_58;
    longlong local_50;
    undefined local_48 [32];

    local_58 = param_3[2];
    local_68 = *param_3;
    local_60 = param_3[1];
    local_50 = param_3[3];
    local_a8 = local_68 + 0x10;
    local_90 = local_50;
    local_a0 = local_60;
    local_98 = local_58;
    if (local_a8 == local_58) {
        local_a8 = *(longlong *)(local_50 + 8);
        local_90 = local_50 + 8;
        local_98 = local_a8 + 0x1f0;
        local_a0 = local_a8;
    }
    lVar3 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x18) >> 4;
    uVar1 = (local_50 - *(longlong *)(param_1 + 0x30) >> 3) * 0x1f + lVar3 +
            (local_68 - local_60 >> 4) + -0x1f;
    if (uVar1 < (ulonglong)
            ((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x40) >> 4) +
             ((*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x30) >> 3) + -1) * 0x1f +
             lVar3) >> 1) {
        local_88 = local_68;
        local_80 = local_60;
        local_78 = local_58;
        local_70 = local_50;
        local_68 = *(longlong *)(param_1 + 0x18);
        local_60 = *(longlong *)(param_1 + 0x20);
        local_58 = *(longlong *)(param_1 + 0x28);
        local_50 = *(longlong *)(param_1 + 0x30);
        FUN_14033e600(local_48,&local_68,&local_88,&local_a8);
        FUN_14033df00(param_1);
    }
    else {
        local_88 = *(longlong *)(param_1 + 0x38);
        local_78 = *(longlong *)(param_1 + 0x48);
        local_80 = *(longlong *)(param_1 + 0x40);
        local_70 = *(longlong *)(param_1 + 0x50);
        FUN_14033e780(local_48,&local_a8,&local_88,&local_68);
        lVar3 = *(longlong *)(param_1 + 0x38);
        if (lVar3 == *(longlong *)(param_1 + 0x40)) {
            FUN_14018b900(*(longlong *)(param_1 + 0x40),0);
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x50) + -8);
            *(longlong **)(param_1 + 0x50) = plVar2;
            lVar3 = *plVar2;
            *(longlong *)(param_1 + 0x40) = lVar3;
            lVar3 = lVar3 + 0x1f0;
            *(longlong *)(param_1 + 0x48) = lVar3;
        }
        *(longlong *)(param_1 + 0x38) = lVar3 + -0x10;
        if (*(longlong **)(lVar3 + -8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar3 + -8) + 8))();
        }
    }
    FUN_14033df80(param_1 + 0x18,param_2,uVar1);
    return param_2;
}



void FUN_14033df00(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x28) + -0x10) {
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
        }
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x10;
        return;
    }
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    *(longlong **)(param_1 + 0x30) = plVar2;
    lVar1 = *plVar2;
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(longlong *)(param_1 + 0x28) = lVar1 + 0x1f0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    return;
}



longlong * FUN_14033df80(longlong *param_1,longlong *param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;

    lVar4 = param_1[2];
    lVar6 = param_1[3];
    lVar3 = param_1[1];
    uVar5 = (*param_1 - lVar3 >> 4) + param_3;
    if (uVar5 < 0x1f) {
        lVar1 = *param_1 + param_3 * 0x10;
    }
    else {
        if ((longlong)uVar5 < 1) {
            uVar2 = (-uVar5 - 1) / 0x1f;
            lVar1 = -1 - (((-uVar5 - 1) - uVar2 >> 1) + uVar2 >> 4);
        }
        else {
            lVar4 = uVar5 + SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)uVar5) >> 0x40,0);
            lVar1 = (lVar4 >> 4) - (lVar4 >> 0x3f);
        }
        lVar3 = *(longlong *)(lVar6 + lVar1 * 8);
        lVar6 = lVar6 + lVar1 * 8;
        lVar4 = lVar3 + 0x1f0;
        lVar1 = (uVar5 + lVar1 * -0x1f) * 0x10 + lVar3;
    }
    *param_2 = lVar1;
    param_2[2] = lVar4;
    param_2[1] = lVar3;
    param_2[3] = lVar6;
    return param_2;
}



void FUN_14033e040(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;

    if (*(longlong *)(param_1 + 8) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x50);
        for (puVar2 = *(undefined8 **)(param_1 + 0x30); puVar2 < (undefined8 *)(lVar1 + 8);
             puVar2 = puVar2 + 1) {
            FUN_14018b900(*puVar2,0);
        }
        FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    }
    return;
}



void FUN_14033e0a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (plVar3 < *(longlong **)(param_1 + 0x50)) {
        do {
            lVar1 = *plVar3;
            lVar2 = lVar1 + 0x1f0;
            for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
                if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
                }
            }
            FUN_14018b900(*plVar3,0);
            plVar3 = plVar3 + 1;
        } while (plVar3 < *(longlong **)(param_1 + 0x50));
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x30) == *(longlong *)(param_1 + 0x50)) {
        lVar1 = *(longlong *)(param_1 + 0x38);
        for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
            if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 8) + 8))();
            }
        }
    }
    else {
        lVar1 = *(longlong *)(param_1 + 0x28);
        for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
            if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 8) + 8))();
            }
        }
        lVar2 = *(longlong *)(param_1 + 0x38);
        for (lVar1 = *(longlong *)(param_1 + 0x40); lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
            if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
            }
        }
        FUN_14018b900(*(undefined8 *)(param_1 + 0x40),0);
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x30);
    return;
}



void FUN_14033e1d0(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;

    plVar2 = *(longlong **)(param_2 + 2);
    uVar1 = *param_2;
    if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2);
    }
    if ((ulonglong)
                (*(longlong *)(param_1 + 0x10) -
                 (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 8) >> 3)) < 2) {
        FUN_140173030(param_1);
    }
    uVar5 = FUN_14018b280(0x1f0,0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = uVar5;
    puVar3 = *(undefined4 **)(param_1 + 0x38);
    if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uVar1;
        *(longlong **)(puVar3 + 2) = plVar2;
        if (plVar2 != (longlong *)0x0) {
            (**(code **)*plVar2)(plVar2);
        }
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    *(longlong **)(param_1 + 0x50) = plVar6;
    lVar4 = *plVar6;
    *(longlong *)(param_1 + 0x40) = lVar4;
    *(longlong *)(param_1 + 0x48) = lVar4 + 0x1f0;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
    }
    return;
}



void FUN_14033e290(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_14033e290(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



char ** FUN_14033e300(longlong param_1,char **param_2,ulonglong *param_3)

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
            bVar6 = *param_3 < *(ulonglong *)(pcVar5 + 0x20);
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14033e35e;
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
    if (*param_3 <= *(ulonglong *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14033e35e:
    ppcVar1 = (char **)FUN_14033e510(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_14033e400(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a644,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x00014033e4c5. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar2 + 0x20) + 8))();
        }
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong *
FUN_14033e510(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              ulonglong *param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(ulonglong *)(param_4 + 0x20))) {
        lVar3 = FUN_14018b280(0x28);
        if ((ulonglong *)(lVar3 + 0x20) != (ulonglong *)0x0) {
            puVar1 = (undefined8 *)*param_5;
            *(ulonglong *)(lVar3 + 0x20) = (ulonglong)puVar1;
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)();
            }
        }
        *(longlong *)(param_4 + 0x10) = lVar3;
        lVar2 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar2) {
            *(longlong *)(lVar2 + 8) = lVar3;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
        }
        else if (param_4 == *(longlong *)(lVar2 + 0x10)) {
            *(longlong *)(lVar2 + 0x10) = lVar3;
        }
    }
    else {
        lVar3 = FUN_14033e740(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar3;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
        }
    }
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



longlong * FUN_14033e600(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;

    for (lVar5 = (*param_3 - param_3[1] >> 4) + -0x1f +
                 (param_3[3] - param_2[3] >> 3) * 0x1f + (param_2[2] - *param_2 >> 4); 0 < lVar5;
         lVar5 = lVar5 + -1) {
        if (*param_3 == param_3[1]) {
            lVar4 = param_3[3];
            param_3[3] = (longlong)(longlong *)(lVar4 + -8);
            lVar4 = *(longlong *)(lVar4 + -8);
            param_3[1] = lVar4;
            lVar4 = lVar4 + 0x1f0;
            param_3[2] = lVar4;
            *param_3 = lVar4;
        }
        *param_3 = *param_3 + -0x10;
        puVar1 = (undefined4 *)*param_3;
        if (*param_4 == param_4[1]) {
            lVar4 = param_4[3];
            param_4[3] = (longlong)(longlong *)(lVar4 + -8);
            lVar4 = *(longlong *)(lVar4 + -8);
            param_4[1] = lVar4;
            lVar4 = lVar4 + 0x1f0;
            param_4[2] = lVar4;
            *param_4 = lVar4;
        }
        *param_4 = *param_4 + -0x10;
        puVar2 = (undefined4 *)*param_4;
        *puVar2 = *puVar1;
        puVar3 = *(undefined8 **)(puVar1 + 2);
        if (*(undefined8 **)(puVar2 + 2) != puVar3) {
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)();
            }
            if (*(longlong **)(puVar2 + 2) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(puVar2 + 2) + 8))();
            }
            *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
        }
    }
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
    return param_1;
}



longlong FUN_14033e740(undefined8 param_1,longlong *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;

    lVar2 = FUN_14018b280(0x28);
    if ((longlong *)(lVar2 + 0x20) != (longlong *)0x0) {
        puVar1 = (undefined8 *)*param_2;
        *(longlong *)(lVar2 + 0x20) = (longlong)puVar1;
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)();
        }
    }
    return lVar2;
}



longlong * FUN_14033e780(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;

    for (lVar5 = (param_2[2] - *param_2 >> 4) + -0x1f +
                 (*param_3 - param_3[1] >> 4) + (param_3[3] - param_2[3] >> 3) * 0x1f; 0 < lVar5;
         lVar5 = lVar5 + -1) {
        puVar1 = (undefined4 *)*param_2;
        puVar2 = (undefined4 *)*param_4;
        *puVar2 = *puVar1;
        puVar3 = *(undefined8 **)(puVar1 + 2);
        if (*(undefined8 **)(puVar2 + 2) != puVar3) {
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)();
            }
            if (*(longlong **)(puVar2 + 2) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(puVar2 + 2) + 8))();
            }
            *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
        }
        *param_2 = *param_2 + 0x10;
        if (*param_2 == param_2[2]) {
            lVar4 = param_2[3];
            param_2[3] = (longlong)(longlong *)(lVar4 + 8);
            lVar4 = *(longlong *)(lVar4 + 8);
            param_2[1] = lVar4;
            *param_2 = lVar4;
            param_2[2] = lVar4 + 0x1f0;
        }
        *param_4 = *param_4 + 0x10;
        if (*param_4 == param_4[2]) {
            lVar4 = param_4[3];
            param_4[3] = (longlong)(longlong *)(lVar4 + 8);
            lVar4 = *(longlong *)(lVar4 + 8);
            param_4[1] = lVar4;
            *param_4 = lVar4;
            param_4[2] = lVar4 + 0x1f0;
        }
    }
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
    return param_1;
}



void FUN_14033e8c0(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;

    param_2[3] = 0;
    param_2[2] = 0;
    uVar1 = FUN_140338940(param_1 + 0x140);
    *param_2 = uVar1;
    uVar1 = FUN_140338830(param_1 + 0x140);
    param_2[1] = uVar1;
    return;
}



undefined8 * FUN_14033e900(undefined8 *param_1,undefined8 param_2)

{
    undefined8 *puVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b64aa8;
    FUN_140334cf0();
    FUN_140334c60();
    param_1[0x22] = param_2;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
    puVar1 = param_1 + 0x24;
    *(undefined4 *)(param_1 + 0x23) = 0;
    *puVar1 = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = puVar1;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = param_1[0x28];
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = puVar1;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = puVar1;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    if (*(char *)(param_1 + 9) == '\0') {
        FUN_140334d90(param_1 + 2);
    }
    FUN_1400035b0(0xb,4,0,param_1 + 9);
    return param_1;
}



undefined8 FUN_14033ea50(undefined8 param_1,ulonglong param_2)

{
    FUN_14033ec10();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_14033ea90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 *puVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b64aa8;
    FUN_140334cf0();
    FUN_140018930(param_1 + 0x12,param_3);
    param_1[0x22] = param_2;
    *(undefined4 *)(param_1 + 0x23) = 3;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
    puVar1 = param_1 + 0x24;
    *puVar1 = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = puVar1;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = param_1[0x28];
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = puVar1;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = puVar1;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    if (*(char *)(param_1 + 0x19) == '\0') {
        FUN_140334d90(param_1 + 0x12);
    }
    if (*(char *)(param_1 + 9) == '\0') {
        FUN_140334d90(param_1 + 2);
    }
    FUN_1400035b0(0xb,4,0,param_1 + 9,param_1 + 0x19);
    return param_1;
}



void FUN_14033ec10(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b64aa8;
    if (*(char *)(param_1 + 0x19) == '\0') {
        FUN_140334d90();
    }
    if (*(char *)(param_1 + 9) == '\0') {
        FUN_140334d90();
    }
    FUN_1400035b0(0xb,2,0,param_1 + 9,param_1 + 0x19);
    closesocket(param_1[0x22]);
    FUN_14033ed70(param_1 + 0x29);
    if (param_1[0x27] != 0) {
        CloseHandle((HANDLE)param_1[0x27]);
    }
    if (param_1[0x16] != 0) {
        FUN_14018b900(param_1[0x16],0);
    }
    if (param_1[6] != 0) {
        FUN_14018b900(param_1[6],0);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_14033ece0(longlong param_1)

{
    if (*(int *)(param_1 + 0x118) != 1) {
        *(undefined4 *)(param_1 + 0x118) = 1;
        if (*(char *)(param_1 + 200) == '\0') {
            FUN_140334d90();
        }
        if (*(char *)(param_1 + 0x48) == '\0') {
            FUN_140334d90();
        }
        FUN_1400035b0(0xb,2,0,param_1 + 0x48,param_1 + 200);
        closesocket(*(SOCKET *)(param_1 + 0x110));
        *(undefined8 *)(param_1 + 0x110) = 0;
    }
    return;
}



void FUN_14033ed70(longlong param_1)

{
    longlong lVar1;
    int *piVar2;
    int **ppiVar3;
    longlong lVar4;

    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 != lVar1) {
        ppiVar3 = (int **)(lVar4 + 0x20);
        do {
            piVar2 = *ppiVar3;
            LOCK();
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
                FUN_14018b900(ppiVar3[1],0);
                FUN_14018b900(*ppiVar3);
            }
            lVar4 = lVar4 + 0x30;
            ppiVar3 = ppiVar3 + 6;
        } while (lVar4 != lVar1);
    }
    if (*(longlong *)(param_1 + 8) == 0) {
        return;
    }
    FUN_14018b900(*(longlong *)(param_1 + 8),0);
    return;
}



int FUN_14033ee00(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c65850 != 0) {
        return -0x7fffbffb;
    }
    lVar2 = FUN_14018b280(0x78,0);
    if (lVar2 == 0) {
        DAT_140c65850 = 0;
    }
    else {
        *(undefined4 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        *(undefined8 *)(lVar2 + 0x40) = 0;
        DAT_140c65850 = lVar2;
        *(undefined **)(lVar2 + 8) = &DAT_1409e6de4;
        *(undefined **)(lVar2 + 0x10) = &DAT_1409e6e44;
        *(undefined **)(lVar2 + 0x18) = &DAT_1409e6d94;
        *(undefined **)(lVar2 + 0x20) = &DAT_1409e6dbc;
        *(undefined8 *)(lVar2 + 0x70) = 0;
        *(undefined8 *)(lVar2 + 0x68) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined2 *)(lVar2 + 0x48) = 0;
    }
    iVar1 = FUN_14033f710();
    lVar2 = DAT_140c65850;
    if (iVar1 < 0) {
        if (DAT_140c65850 != 0) {
            FUN_14033efa0(DAT_140c65850);
            FUN_14018b900(lVar2,0);
        }
        DAT_140c65850 = 0;
    }
    return iVar1;
}



int FUN_14033ef30(void)

{
    longlong lVar1;
    int iVar2;

    if (DAT_140c65850 == 0) {
        return -0x7fffbffb;
    }
    iVar2 = FUN_14033f940(DAT_140c65850,&DAT_140c65848);
    lVar1 = DAT_140c65850;
    if (-1 < iVar2) {
        if (DAT_140c65850 != 0) {
            FUN_14033efa0(DAT_140c65850);
            FUN_14018b900(lVar1,0);
        }
        DAT_140c65850 = 0;
    }
    return iVar2;
}



void FUN_14033efa0(longlong param_1)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(longlong *)(param_1 + 0x58) != 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141dee530;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8a64c,0x13,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        FUN_14033f940(param_1,*(undefined8 *)(param_1 + 0x58));
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1401a4a00(param_1 + 0x70);
        return;
    }
    return;
}



void FUN_14033f0a0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    code **ppcVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong **pplVar5;

    **(longlong ***)(param_1 + 0x58) = param_2;
    DAT_140c65858 = param_2;
    for (lVar4 = DAT_140c7a0c0; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x38)) {
        (**(code **)(*DAT_140c65858 + 0xb0))(DAT_140c65858,*(undefined8 *)(lVar4 + 0x28),0);
    }
    pplVar5 = (longlong **)&DAT_140c7a100;
    lVar4 = 0x20;
    do {
        for (plVar1 = *pplVar5; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0x4e]) {
            (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        pplVar5 = pplVar5 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pplVar5 = (longlong **)&DAT_140c7a230;
    lVar4 = 0x100;
    do {
        for (plVar1 = *pplVar5; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0x15]) {
            (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        pplVar5 = pplVar5 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    for (ppcVar2 = *(code ***)(param_1 + 0x70); ppcVar2 != (code **)0x0; ppcVar2 = (code **)ppcVar2[3]
            ) {
        uVar3 = (**(code **)*DAT_140c65858)();
        (**ppcVar2)(uVar3,ppcVar2[1]);
    }
    return;
}



ulonglong FUN_14033f1d0(undefined8 param_1)

{
    short *psVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar9 = 0;
    local_50 = 0;
    local_40 = 0;
    uVar7 = uVar9;
    do {
        psVar1 = &DAT_140ae9776 + uVar7;
        uVar7 = uVar7 + 1;
    } while (*psVar1 != 0);
    lVar10 = (longlong)(uVar7 * 2) >> 1;
    uVar7 = lVar10 + 1;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar3 = uVar7 * 2;
        local_50 = FUN_14018b280(lVar3,0);
        local_40 = local_50 + lVar3;
    }
    lVar3 = local_50;
    lVar10 = lVar10 * 2;
    FUN_1407db590(local_50,&DAT_140ae9774,lVar10);
    local_48 = (undefined2 *)(lVar3 + lVar10);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,param_1,local_58,0x22,0x5c);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    lVar3 = DAT_140c63748;
    lVar10 = local_30;
    if ((local_28 - local_30 & 0xffffffffffffffe0U) == 0) {
        puVar8 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (puVar8 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
            do {
                (*(code *)puVar8[1])(*puVar8,L"usage: sound <cmd>");
                puVar8 = puVar8 + 2;
            } while (puVar8 != *(undefined8 **)(lVar3 + 0x40));
        }
        lVar3 = DAT_140c63748;
        puVar8 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (puVar8 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
            do {
                (*(code *)puVar8[1])(*puVar8,L"       cmd = reset");
                puVar8 = puVar8 + 2;
            } while (puVar8 != *(undefined8 **)(lVar3 + 0x40));
        }
        lVar3 = DAT_140c63748;
        puVar8 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (puVar8 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
            do {
                (*(code *)puVar8[1])(*puVar8,L"       cmd = on");
                puVar8 = puVar8 + 2;
            } while (puVar8 != *(undefined8 **)(lVar3 + 0x40));
        }
        lVar3 = DAT_140c63748;
        puVar8 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (puVar8 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
            do {
                (*(code *)puVar8[1])(*puVar8,L"       cmd = off");
                puVar8 = puVar8 + 2;
            } while (puVar8 != *(undefined8 **)(lVar3 + 0x40));
        }
    }
    else {
        uVar2 = *(undefined8 *)(local_30 + 8);
        iVar5 = FUN_14018e2c0(uVar2,&DAT_140aea5f4);
        if (iVar5 == 0) {
            uVar6 = FUN_14033f4e0();
            uVar9 = (ulonglong)uVar6;
            goto joined_r0x00014033f382;
        }
        iVar5 = FUN_14018e2c0(uVar2,&DAT_140af4180);
        lVar4 = DAT_140c65850;
        lVar3 = DAT_140c63748;
        if (iVar5 == 0) {
            if (*(char *)(DAT_140c65850 + 0x48) == '\0') {
                puVar8 = *(undefined8 **)(DAT_140c63748 + 0x38);
                if (puVar8 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
                    do {
                        (*(code *)puVar8[1])(*puVar8,L"sound is already off.");
                        puVar8 = puVar8 + 2;
                    } while (puVar8 != *(undefined8 **)(lVar3 + 0x40));
                }
                uVar9 = 0x80004005;
            }
            else {
                FUN_14033f0a0(DAT_140c65850,*(undefined8 *)(DAT_140c65850 + 0x68));
                (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x198))();
                *(undefined *)(lVar4 + 0x48) = 0;
            }
            goto joined_r0x00014033f382;
        }
        iVar5 = FUN_14018e2c0(uVar2,L"reset");
        if (iVar5 == 0) {
            uVar6 = FUN_14033f5e0();
            uVar9 = (ulonglong)uVar6;
            goto joined_r0x00014033f382;
        }
    }
    uVar9 = 0x80070057;
    joined_r0x00014033f382:
    for (; lVar10 != local_28; lVar10 = lVar10 + 0x20) {
        if (*(longlong *)(lVar10 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar10 + 8),0);
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return uVar9;
}



void FUN_14033f490(undefined8 param_1,char param_2)

{
    longlong *plVar1;

    if (DAT_140c65850 != 0) {
        if (*(char *)(DAT_140c65850 + 0x48) == '\0') {
            plVar1 = *(longlong **)(DAT_140c65850 + 0x68);
        }
        else {
            plVar1 = *(longlong **)(DAT_140c65850 + 0x60);
        }
        (**(code **)(*plVar1 + 0x180))();
        *(uint *)(DAT_140c65850 + 0x28) = (uint)(param_2 != '\0');
    }
    return;
}



int FUN_14033f4e0(void)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;

    lVar2 = DAT_140c65850;
    lVar1 = DAT_140c63748;
    if (*(char *)(DAT_140c65850 + 0x48) == '\0') {
        iVar3 = (**(code **)(**(longlong **)(DAT_140c65850 + 0x60) + 400))
                (*(longlong **)(DAT_140c65850 + 0x60),DAT_140c65850 + 8);
        lVar1 = DAT_140c63748;
        puVar5 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (iVar3 < 0) {
            if (puVar5 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
                do {
                    (*(code *)puVar5[1])(*puVar5,L"Sound initialization failed.");
                    puVar5 = puVar5 + 2;
                } while (puVar5 != *(undefined8 **)(lVar1 + 0x40));
            }
            uVar4 = *(undefined8 *)(lVar2 + 0x68);
        }
        else {
            if (puVar5 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
                do {
                    (*(code *)puVar5[1])(*puVar5,L"sound is now on.");
                    puVar5 = puVar5 + 2;
                } while (puVar5 != *(undefined8 **)(lVar1 + 0x40));
            }
            uVar4 = *(undefined8 *)(lVar2 + 0x60);
            *(undefined *)(lVar2 + 0x48) = 1;
        }
        FUN_14033f0a0(lVar2,uVar4);
        return iVar3;
    }
    puVar5 = *(undefined8 **)(DAT_140c63748 + 0x38);
    if (puVar5 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
        do {
            (*(code *)puVar5[1])(*puVar5,L"sound is already on.");
            puVar5 = puVar5 + 2;
        } while (puVar5 != *(undefined8 **)(lVar1 + 0x40));
    }
    return -0x7fffbffb;
}



int FUN_14033f5e0(void)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;

    lVar2 = DAT_140c65850;
    lVar1 = DAT_140c63748;
    if (*(char *)(DAT_140c65850 + 0x48) == '\0') {
        puVar4 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (puVar4 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
            do {
                (*(code *)puVar4[1])(*puVar4,L"sound is off.");
                puVar4 = puVar4 + 2;
            } while (puVar4 != *(undefined8 **)(lVar1 + 0x40));
        }
        return 0;
    }
    FUN_14033f0a0(DAT_140c65850,*(undefined8 *)(DAT_140c65850 + 0x68));
    (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x198))();
    iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x60) + 400))(*(longlong **)(lVar2 + 0x60),lVar2 + 8)
            ;
    lVar1 = DAT_140c63748;
    if (iVar3 < 0) {
        *(undefined *)(lVar2 + 0x48) = 0;
        lVar1 = DAT_140c63748;
        puVar4 = *(undefined8 **)(DAT_140c63748 + 0x38);
        if (puVar4 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
            do {
                (*(code *)puVar4[1])(*puVar4,L"sound failed to restart during reset. Sound is now off");
                puVar4 = puVar4 + 2;
            } while (puVar4 != *(undefined8 **)(lVar1 + 0x40));
        }
        return iVar3;
    }
    puVar4 = *(undefined8 **)(DAT_140c63748 + 0x38);
    if (puVar4 != *(undefined8 **)(DAT_140c63748 + 0x40)) {
        do {
            (*(code *)puVar4[1])(*puVar4,L"sound has reset.");
            puVar4 = puVar4 + 2;
        } while (puVar4 != *(undefined8 **)(lVar1 + 0x40));
    }
    FUN_14033f0a0(lVar2,*(undefined8 *)(lVar2 + 0x60));
    return iVar3;
}



int FUN_14033f710(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
    undefined8 uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    lVar3 = DAT_140c65850;
    if (param_4 != (undefined8 *)0x0) {
        FUN_140198d60(param_1,L"sound",FUN_14033f1d0,0);
        *(bool *)(lVar3 + 0x49) = *(int *)(param_4 + 4) == 1;
        *(undefined8 *)(lVar3 + 8) = *param_4;
        *(undefined8 *)(lVar3 + 0x10) = param_4[1];
        *(undefined8 *)(lVar3 + 0x18) = param_4[2];
        *(undefined8 *)(lVar3 + 0x20) = param_4[3];
        *(undefined8 *)(lVar3 + 0x28) = param_4[4];
        *(undefined8 *)(lVar3 + 0x30) = param_4[5];
        *(undefined8 *)(lVar3 + 0x38) = param_4[6];
        uVar1 = param_4[7];
        *(undefined *)(lVar3 + 0x48) = 0;
        *(undefined8 *)(lVar3 + 0x40) = uVar1;
        puVar5 = (undefined8 *)FUN_14018b280(0x9f8,0);
        if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)0x0;
        }
        else {
            FUN_14033fbe0(puVar5);
            *puVar5 = &PTR_FUN_140b65030;
            FUN_140344cf0(puVar5 + 4);
            puVar5[0x13c] = 0;
            puVar5[0x13b] = 0;
            puVar5[0x13e] = 0;
            puVar5[0x13d] = 0;
        }
        puVar6 = (undefined8 *)0x0;
        *(undefined8 **)(lVar3 + 0x60) = puVar5;
        puVar5 = (undefined8 *)FUN_14018b280(0x20);
        if (puVar5 != (undefined8 *)0x0) {
            FUN_14033fbe0(puVar5);
            *puVar5 = &PTR_LAB_140b64ad0;
            puVar6 = puVar5;
        }
        *(undefined8 **)(lVar3 + 0x68) = puVar6;
        if ((param_2 == 1) &&
            (iVar4 = (**(code **)(**(longlong **)(lVar3 + 0x60) + 400))
                    (*(longlong **)(lVar3 + 0x60),lVar3 + 8), -1 < iVar4)) {
            *(undefined *)(lVar3 + 0x48) = 1;
            *(undefined8 **)(lVar3 + 0x58) = &DAT_140c65848;
            FUN_14033f0a0(lVar3,*(undefined8 *)(lVar3 + 0x60));
        }
        else {
            iVar4 = (**(code **)(**(longlong **)(lVar3 + 0x68) + 400))
                    (*(longlong **)(lVar3 + 0x68),lVar3 + 8);
            if (iVar4 < 0) {
                FUN_140198f50();
                plVar2 = *(longlong **)(lVar3 + 0x60);
                if (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 0xa8))(plVar2,1);
                }
                plVar2 = *(longlong **)(lVar3 + 0x68);
                if (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 0xa8))(plVar2,1);
                }
                *(undefined8 *)(lVar3 + 0x60) = 0;
                *(undefined8 *)(lVar3 + 0x68) = 0;
                *(undefined8 *)(lVar3 + 0x50) = 0;
                *(undefined8 *)(lVar3 + 0x58) = 0;
            }
            else {
                *(undefined *)(lVar3 + 0x48) = 0;
                *(undefined8 **)(lVar3 + 0x58) = &DAT_140c65848;
                FUN_14033f0a0(lVar3,*(undefined8 *)(lVar3 + 0x68));
            }
        }
        return iVar4;
    }
    return -0x7ff8ffa9;
}



undefined8 * FUN_14033f910(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b64c80;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14033f940(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *(longlong *)(param_1 + 0x70);
    while (lVar1 != 0) {
        (***(code ***)(param_1 + 0x70))(2,(*(code ***)(param_1 + 0x70))[1]);
        lVar1 = *(longlong *)(param_1 + 0x70);
        if (lVar1 != 0) {
            if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
            }
            if (*(longlong *)(lVar1 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
            }
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            FUN_14018b900(lVar1,0);
        }
        lVar1 = *(longlong *)(param_1 + 0x70);
    }
    if (param_2 == (longlong *)0x0) {
        param_2 = (longlong *)(param_1 + 0x50);
    }
    if (*param_2 == **(longlong **)(param_1 + 0x58)) {
        FUN_140198f50(**(longlong **)(param_1 + 0x58),L"sound");
        *param_2 = 0;
        DAT_140c65858 = *(undefined8 *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x48) != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x198))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x198))();
        FUN_140347a10();
        FUN_14033fde0();
        plVar2 = *(longlong **)(param_1 + 0x60);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0xa8))(plVar2,1);
        }
        plVar2 = *(longlong **)(param_1 + 0x68);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0xa8))(plVar2,1);
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        return 0;
    }
    return 0x80070057;
}



undefined8 FUN_14033fa70(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = DAT_140c65850;
    if (param_2 == 0) {
        return 0x80070057;
    }
    if (*(longlong *)(DAT_140c65850 + 0x58) == 0) {
        return 0x80004004;
    }
    plVar4 = (longlong *)FUN_14018b280(0x20);
    if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4[2] = 0;
        plVar4[3] = 0;
    }
    *plVar4 = param_2;
    plVar4[1] = param_3;
    pplVar1 = (longlong **)(lVar3 + 0x70);
    if (plVar4[2] == 0) {
        plVar4[2] = (longlong)pplVar1;
        pplVar2 = (longlong **)(plVar4 + 3);
        *pplVar2 = *pplVar1;
        *pplVar1 = plVar4;
        if (*pplVar2 != (longlong *)0x0) {
            (*pplVar2)[2] = (longlong)pplVar2;
        }
    }
    return 0;
}



undefined8 FUN_14033fb30(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;

    uVar2 = 0x80004005;
    if (*(longlong *)(DAT_140c65850 + 0x70) != 0) {
        lVar3 = *(longlong *)(DAT_140c65850 + 0x70);
        do {
            lVar1 = *(longlong *)(lVar3 + 0x18);
            if (*(longlong *)(lVar3 + 8) == param_2) {
                if (*(longlong **)(lVar3 + 0x10) != (longlong *)0x0) {
                    **(longlong **)(lVar3 + 0x10) = lVar1;
                }
                if (*(longlong *)(lVar3 + 0x18) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x10) = *(undefined8 *)(lVar3 + 0x10);
                }
                *(undefined8 *)(lVar3 + 0x10) = 0;
                *(undefined8 *)(lVar3 + 0x18) = 0;
                FUN_14018b900(lVar3,0);
                uVar2 = 0;
            }
            lVar3 = lVar1;
        } while (lVar1 != 0);
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14033fbe0(undefined8 *param_1)

{
    undefined4 uVar1;

    param_1[2] = 0;
    *param_1 = &PTR_FUN_140b64c80;
    param_1[1] = &LAB_14033fd50;
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 3) = uVar1;
    _DAT_140c7a030 = 0;
    _DAT_140c7a038 = 0;
    _DAT_140c7a040 = 0;
    _DAT_140c7a048 = 0;
    _DAT_140c7a050 = 0;
    _DAT_140c7a058 = 0;
    _DAT_140c7a060 = 0;
    _DAT_140c7a068 = 0;
    return param_1;
}



undefined8 FUN_14033fde0(void)

{
    longlong *plVar1;

    plVar1 = (longlong *)FUN_140341200();
    while (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xf0))(plVar1,1);
        plVar1 = (longlong *)FUN_140341200();
    }
    plVar1 = (longlong *)FUN_140340fb0();
    while (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x68))(plVar1,1);
        plVar1 = (longlong *)FUN_140340fb0();
    }
    plVar1 = (longlong *)FUN_140340d60();
    while (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,1);
        plVar1 = (longlong *)FUN_140340d60();
    }
    return 0;
}



int FUN_14033fe60(undefined8 param_1,longlong **param_2,longlong param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    if ((param_3 != 0) && (param_2 != (longlong **)0x0)) {
        plVar2 = (longlong *)FUN_140343e40(param_3);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)*plVar2)(plVar2);
            *param_2 = plVar2;
            return 0;
        }
        lVar3 = FUN_14018b280(0x278,0);
        if (lVar3 == 0) {
            plVar2 = (longlong *)0x0;
        }
        else {
            plVar2 = (longlong *)FUN_140343ad0(lVar3);
        }
        iVar1 = FUN_140343d30(plVar2,param_3);
        if (iVar1 < 0) {
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x38))(plVar2,1);
                return iVar1;
            }
        }
        else {
            *param_2 = plVar2;
        }
        return iVar1;
    }
    return -0x7ff8ffa9;
}



int FUN_1403400f0(undefined8 param_1,longlong **param_2,longlong param_3,longlong param_4)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;

    if (((param_4 != 0) && (param_3 != 0)) && (param_2 != (longlong **)0x0)) {
        plVar2 = (longlong *)FUN_14018b280(0x50);
        plVar3 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
            *plVar2 = (longlong)&PTR_LAB_140b64f70;
            *(undefined4 *)(plVar2 + 2) = 1;
            *(undefined4 *)(plVar2 + 5) = 0x80070057;
            plVar2[6] = 0;
            plVar2[4] = (longlong)&PTR_FUN_140b65328;
            plVar2[7] = 0;
            *(undefined4 *)(plVar2 + 9) = 1;
            plVar2[3] = 0;
            plVar2[1] = 0;
            plVar2[8] = 0;
            FUN_14034a1a0(plVar2 + 4,0x80070057);
            plVar3 = plVar2;
        }
        iVar1 = FUN_140344600(plVar3,param_3,param_4);
        if (iVar1 < 0) {
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x40))(plVar3,1);
                return iVar1;
            }
        }
        else {
            *param_2 = plVar3;
        }
        return iVar1;
    }
    return -0x7ff8ffa9;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140340210(longlong *param_1,longlong **param_2,int param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    float in_XMM3_Da;
    undefined auStack664 [32];
    longlong *local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined local_258 [512];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack664;
    if (param_2 == (longlong **)0x0) goto LAB_1403404a7;
    FUN_1407e4830(local_258,0,0x200);
    local_270 = 0;
    local_268 = 0;
    iVar3 = (*(code *)param_1[1])(param_1[2],param_3,&local_270,local_258);
    if ((iVar3 < 0) ||
        (((in_XMM3_Da != 0.0 && (local_270._4_4_ != 0.0)) && (local_270._4_4_ < in_XMM3_Da))))
        goto LAB_1403404a7;
    plVar5 = (longlong *)(&DAT_140c7a230)[local_270 & 0xff];
    plVar7 = (longlong *)0x0;
    plVar6 = plVar7;
    if (plVar5 != (longlong *)0x0) {
        do {
            plVar6 = plVar5;
            if (*(int *)(plVar5 + 1) == (int)local_270) break;
            plVar5 = (longlong *)plVar5[0x15];
            plVar6 = plVar7;
        } while (plVar5 != (longlong *)0x0);
    }
    *param_2 = plVar6;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)*plVar6)();
        goto LAB_1403404a7;
    }
    iVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,&local_278,local_258);
    if (iVar3 < 0) goto LAB_1403404a7;
    plVar4 = (longlong *)FUN_14018b280(0xb0,0);
    plVar5 = local_278;
    plVar6 = plVar7;
    if (plVar4 != (longlong *)0x0) {
        plVar4[3] = 0;
        *plVar4 = (longlong)&PTR_LAB_140b64fc0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        *(undefined4 *)(plVar4 + 0xc) = 0x80070057;
        plVar4[0xd] = 0;
        plVar4[0xb] = (longlong)&PTR_FUN_140b65328;
        plVar4[0xe] = 0;
        plVar4[0xf] = 1;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        plVar4[0x12] = 0;
        plVar4[0x14] = 0;
        plVar4[0x15] = 0;
        plVar4[8] = (longlong)FUN_140344410;
        *(undefined4 *)(plVar4 + 1) = 0;
        *(undefined8 *)((longlong)plVar4 + 0xc) = 0x41f00000;
        *(undefined4 *)(plVar4 + 10) = 0;
        *(undefined4 *)(plVar4 + 0x13) = 0;
        plVar4[9] = (longlong)plVar4;
        plVar4[5] = (longlong)plVar4;
        plVar4[4] = (longlong)FUN_1403443c0;
        plVar6 = plVar4;
    }
    if ((local_278 == (longlong *)0x0) || (param_3 == 0)) {
        LAB_140340473:
        (**(code **)(*plVar6 + 8))(plVar6);
        plVar6 = plVar7;
    }
    else {
        *(int *)(plVar6 + 10) = param_3;
        if ((longlong *)plVar6[3] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar6[3] + 8))();
            plVar6[3] = 0;
        }
        plVar6[3] = (longlong)plVar5;
        (**(code **)*plVar5)(plVar5);
        *(int *)(plVar6 + 1) = (int)local_270;
        *(float *)((longlong)plVar6 + 0xc) = local_270._4_4_;
        *(undefined4 *)(plVar6 + 2) = local_268;
        pplVar2 = (longlong **)(&DAT_140c7a230 + (local_270 & 0xff));
        if (plVar6[0x14] == 0) {
            plVar6[0x14] = (longlong)pplVar2;
            pplVar1 = (longlong **)(plVar6 + 0x15);
            *pplVar1 = *pplVar2;
            *pplVar2 = plVar6;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0x14] = (longlong)pplVar1;
            }
        }
        iVar3 = FUN_140344310(plVar6);
        if (iVar3 < 0) goto LAB_140340473;
    }
    (**(code **)(*local_278 + 8))();
    *param_2 = plVar6;
    LAB_1403404a7:
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack664);
    return;
}



undefined8 FUN_1403404d0(undefined8 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
    }
    else {
        *puVar1 = &PTR_LAB_140b65240;
        *(undefined4 *)(puVar1 + 1) = 1;
        puVar1[3] = 0;
        puVar1[2] = 0;
    }
    FUN_1403480d0(puVar1 + 2);
    *param_2 = puVar1;
    return 0;
}



int FUN_140340550(undefined8 param_1,longlong **param_2,undefined8 param_3)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (param_2 == (longlong **)0x0) {
        return -0x7ff8ffa9;
    }
    lVar2 = FUN_14018b280(0xa0,0);
    if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
    }
    else {
        plVar3 = (longlong *)FUN_140342b10(lVar2);
    }
    iVar1 = (**(code **)(*DAT_140c65858 + 0xb0))(DAT_140c65858,plVar3[5],param_3);
    if (iVar1 < 0) {
        (**(code **)(*plVar3 + 0xf0))(plVar3,1);
        return iVar1;
    }
    *param_2 = plVar3;
    return iVar1;
}



undefined8 FUN_140340ad0(undefined8 param_1,code *param_2,undefined8 param_3)

{
    undefined8 uVar1;
    longlong lVar2;

    if (param_2 == (code *)0x0) {
        return 0x80070057;
    }
    uVar1 = 0;
    lVar2 = DAT_140c7a0c0;
    if (DAT_140c7a0c0 != 0) {
        do {
            uVar1 = (*param_2)(lVar2,param_3);
            if ((int)uVar1 < 0) {
                return uVar1;
            }
            lVar2 = *(longlong *)(lVar2 + 0x38);
        } while (lVar2 != 0);
    }
    return uVar1;
}



undefined8 FUN_140340b30(undefined8 param_1,code *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;

    uVar2 = 0;
    plVar3 = &DAT_140c7a230;
    lVar4 = 0x100;
    do {
        lVar1 = *plVar3;
        while ((lVar1 != 0 && (uVar2 = (*param_2)(lVar1,param_3), -1 < (int)uVar2))) {
            lVar1 = *(longlong *)(lVar1 + 0xa8);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return uVar2;
}



ulonglong FUN_140340bb0(undefined8 param_1,code *param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong lVar4;
    uint local_res20;

    uVar2 = (ulonglong)local_res20;
    plVar3 = &DAT_140c7a100;
    lVar4 = 0x20;
    do {
        lVar1 = *plVar3;
        while ((lVar1 != 0 && (uVar2 = (*param_2)(lVar1,param_3), -1 < (int)uVar2))) {
            lVar1 = *(longlong *)(lVar1 + 0x270);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return uVar2;
}



ulonglong FUN_140340c20(undefined8 param_1,int param_2)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    uVar3 = uVar4;
    if (DAT_140c7a0d8 == DVar2) {
        DAT_140c7a0e0 = DAT_140c7a0e0 + 1;
        DVar2 = DAT_140c7a0d8;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7a0e0 == 0;
            DAT_140c7a0e0 = DAT_140c7a0e0 ^ (ulonglong)bVar5 * (DAT_140c7a0e0 ^ 1);
            if (bVar5) goto LAB_140340c9f;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a0d8,DVar2);
        DVar2 = DAT_140c7a0d8;
    }
    LAB_140340c9f:
    DAT_140c7a0d8 = DVar2;
    lVar1 = DAT_140c7a0c8;
    if ((DAT_140c7a0c8 != 0) && (0 < param_2 - *(int *)(DAT_140c7a0c8 + 4))) {
        FUN_140341310();
        uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    if (DAT_140c7a0e0 < 2) {
        DAT_140c7a0d8 = 0;
        DAT_140c7a0e0 = 0;
        if (DAT_140c7a0e8 != 0) {
            if (DAT_140c7a0f0 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7a0f0 == (HANDLE)0x0;
                DAT_140c7a0f0 =
                        (HANDLE)((ulonglong)DAT_140c7a0f0 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7a0f0 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a0f0);
        }
        return uVar4;
    }
    DAT_140c7a0e0 = DAT_140c7a0e0 - 1;
    return uVar4;
}



ulonglong FUN_140340d60(void)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    uVar3 = uVar4;
    if (DAT_140c7a0d8 == DVar2) {
        DAT_140c7a0e0 = DAT_140c7a0e0 + 1;
        DVar2 = DAT_140c7a0d8;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7a0e0 == 0;
            DAT_140c7a0e0 = DAT_140c7a0e0 ^ (ulonglong)bVar5 * (DAT_140c7a0e0 ^ 1);
            if (bVar5) goto LAB_140340dbf;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a0d8);
        DVar2 = DAT_140c7a0d8;
    }
    LAB_140340dbf:
    DAT_140c7a0d8 = DVar2;
    lVar1 = DAT_140c7a0c8;
    if (DAT_140c7a0c8 != 0) {
        FUN_140341310();
        uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    if (DAT_140c7a0e0 < 2) {
        DAT_140c7a0d8 = 0;
        DAT_140c7a0e0 = 0;
        if (DAT_140c7a0e8 != 0) {
            if (DAT_140c7a0f0 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7a0f0 == (HANDLE)0x0;
                DAT_140c7a0f0 =
                        (HANDLE)((ulonglong)DAT_140c7a0f0 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7a0f0 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a0f0);
        }
        return uVar4;
    }
    DAT_140c7a0e0 = DAT_140c7a0e0 - 1;
    return uVar4;
}



ulonglong FUN_140340e70(undefined8 param_1,int param_2)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    uVar3 = uVar4;
    if (DAT_140c7a210 == DVar2) {
        DAT_140c7a218 = DAT_140c7a218 + 1;
        DVar2 = DAT_140c7a210;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7a218 == 0;
            DAT_140c7a218 = DAT_140c7a218 ^ (ulonglong)bVar5 * (DAT_140c7a218 ^ 1);
            if (bVar5) goto LAB_140340eef;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a210,DVar2);
        DVar2 = DAT_140c7a210;
    }
    LAB_140340eef:
    DAT_140c7a210 = DVar2;
    lVar1 = DAT_140c7a200;
    if ((DAT_140c7a200 != 0) && (0 < param_2 - *(int *)(DAT_140c7a200 + 4))) {
        FUN_140341370();
        uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    if (DAT_140c7a218 < 2) {
        DAT_140c7a210 = 0;
        DAT_140c7a218 = 0;
        if (DAT_140c7a220 != 0) {
            if (DAT_140c7a228 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7a228 == (HANDLE)0x0;
                DAT_140c7a228 =
                        (HANDLE)((ulonglong)DAT_140c7a228 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7a228 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a228);
        }
        return uVar4;
    }
    DAT_140c7a218 = DAT_140c7a218 - 1;
    return uVar4;
}



ulonglong FUN_140340fb0(void)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    uVar3 = uVar4;
    if (DAT_140c7a210 == DVar2) {
        DAT_140c7a218 = DAT_140c7a218 + 1;
        DVar2 = DAT_140c7a210;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7a218 == 0;
            DAT_140c7a218 = DAT_140c7a218 ^ (ulonglong)bVar5 * (DAT_140c7a218 ^ 1);
            if (bVar5) goto LAB_14034100f;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a210);
        DVar2 = DAT_140c7a210;
    }
    LAB_14034100f:
    DAT_140c7a210 = DVar2;
    lVar1 = DAT_140c7a200;
    if (DAT_140c7a200 != 0) {
        FUN_140341370();
        uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    if (DAT_140c7a218 < 2) {
        DAT_140c7a210 = 0;
        DAT_140c7a218 = 0;
        if (DAT_140c7a220 != 0) {
            if (DAT_140c7a228 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7a228 == (HANDLE)0x0;
                DAT_140c7a228 =
                        (HANDLE)((ulonglong)DAT_140c7a228 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7a228 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a228);
        }
        return uVar4;
    }
    DAT_140c7a218 = DAT_140c7a218 - 1;
    return uVar4;
}



ulonglong FUN_1403410c0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    uVar3 = uVar4;
    if (DAT_140c7a0a0 == DVar2) {
        DAT_140c7a0a8 = DAT_140c7a0a8 + 1;
        DVar2 = DAT_140c7a0a0;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7a0a8 == 0;
            DAT_140c7a0a8 = DAT_140c7a0a8 ^ (ulonglong)bVar5 * (DAT_140c7a0a8 ^ 1);
            if (bVar5) goto LAB_14034113f;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a0a0,DVar2);
        DVar2 = DAT_140c7a0a0;
    }
    LAB_14034113f:
    DAT_140c7a0a0 = DVar2;
    lVar1 = DAT_140c7a090;
    if ((DAT_140c7a090 != 0) && (0 < param_2 - *(int *)(DAT_140c7a090 + 4))) {
        FUN_1403413d0();
        uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    if (DAT_140c7a0a8 < 2) {
        DAT_140c7a0a0 = 0;
        DAT_140c7a0a8 = 0;
        if (DAT_140c7a0b0 != 0) {
            if (DAT_140c7a0b8 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7a0b8 == (HANDLE)0x0;
                DAT_140c7a0b8 =
                        (HANDLE)((ulonglong)DAT_140c7a0b8 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7a0b8 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a0b8);
        }
        return uVar4;
    }
    DAT_140c7a0a8 = DAT_140c7a0a8 - 1;
    return uVar4;
}



ulonglong FUN_140341200(void)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    uVar3 = uVar4;
    if (DAT_140c7a0a0 == DVar2) {
        DAT_140c7a0a8 = DAT_140c7a0a8 + 1;
        DVar2 = DAT_140c7a0a0;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7a0a8 == 0;
            DAT_140c7a0a8 = DAT_140c7a0a8 ^ (ulonglong)bVar5 * (DAT_140c7a0a8 ^ 1);
            if (bVar5) goto LAB_14034125f;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a0a0);
        DVar2 = DAT_140c7a0a0;
    }
    LAB_14034125f:
    DAT_140c7a0a0 = DVar2;
    lVar1 = DAT_140c7a090;
    if (DAT_140c7a090 != 0) {
        FUN_1403413d0();
        uVar4 = *(ulonglong *)(lVar1 + 8);
    }
    if (DAT_140c7a0a8 < 2) {
        DAT_140c7a0a0 = 0;
        DAT_140c7a0a8 = 0;
        if (DAT_140c7a0b0 != 0) {
            if (DAT_140c7a0b8 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7a0b8 == (HANDLE)0x0;
                DAT_140c7a0b8 =
                        (HANDLE)((ulonglong)DAT_140c7a0b8 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7a0b8 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a0b8);
        }
        return uVar4;
    }
    DAT_140c7a0a8 = DAT_140c7a0a8 - 1;
    return uVar4;
}



void FUN_140341310(undefined8 param_1,longlong param_2)

{
    if (param_2 == DAT_140c7a0c8) {
        DAT_140c7a0c8 = *(longlong *)(param_2 + 0x18);
    }
    if (param_2 == DAT_140c7a0d0) {
        DAT_140c7a0d0 = *(longlong *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
}



void FUN_140341370(undefined8 param_1,longlong param_2)

{
    if (param_2 == DAT_140c7a200) {
        DAT_140c7a200 = *(longlong *)(param_2 + 0x18);
    }
    if (param_2 == DAT_140c7a208) {
        DAT_140c7a208 = *(longlong *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
}



void FUN_1403413d0(undefined8 param_1,longlong param_2)

{
    if (param_2 == DAT_140c7a090) {
        DAT_140c7a090 = *(longlong *)(param_2 + 0x18);
    }
    if (param_2 == DAT_140c7a098) {
        DAT_140c7a098 = *(longlong *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140341430(void)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined4 *puVar7;

    puVar4 = DAT_140c42e00;
    if (0xfe < DAT_140c42de8) {
        DAT_140c42de8 = 0;
        _DAT_140c42de4 = _DAT_140c42de4 & 0xffffffff;
        if (DAT_140c42e00 != (undefined4 *)0x0) {
            if (((ulonglong)DAT_140c42e00 & 0xf) == 0) {
                lVar5 = 0x10;
                puVar6 = &DAT_140c42e00;
                puVar7 = DAT_140c42e00;
                do {
                    uVar1 = puVar7[1];
                    uVar2 = puVar7[2];
                    uVar3 = puVar7[3];
                    *(undefined4 *)puVar6 = *puVar7;
                    *(undefined4 *)((longlong)puVar6 + 4) = uVar1;
                    *(undefined4 *)(puVar6 + 1) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
                    uVar1 = puVar7[5];
                    uVar2 = puVar7[6];
                    uVar3 = puVar7[7];
                    *(undefined4 *)(puVar6 + 2) = puVar7[4];
                    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
                    *(undefined4 *)(puVar6 + 3) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
                    uVar1 = puVar7[9];
                    uVar2 = puVar7[10];
                    uVar3 = puVar7[0xb];
                    *(undefined4 *)(puVar6 + 4) = puVar7[8];
                    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
                    *(undefined4 *)(puVar6 + 5) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
                    uVar1 = puVar7[0xd];
                    uVar2 = puVar7[0xe];
                    uVar3 = puVar7[0xf];
                    *(undefined4 *)(puVar6 + 6) = puVar7[0xc];
                    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
                    *(undefined4 *)(puVar6 + 7) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
                    uVar1 = puVar7[0x11];
                    uVar2 = puVar7[0x12];
                    uVar3 = puVar7[0x13];
                    *(undefined4 *)(puVar6 + 8) = puVar7[0x10];
                    *(undefined4 *)((longlong)puVar6 + 0x44) = uVar1;
                    *(undefined4 *)(puVar6 + 9) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar3;
                    uVar1 = puVar7[0x15];
                    uVar2 = puVar7[0x16];
                    uVar3 = puVar7[0x17];
                    *(undefined4 *)(puVar6 + 10) = puVar7[0x14];
                    *(undefined4 *)((longlong)puVar6 + 0x54) = uVar1;
                    *(undefined4 *)(puVar6 + 0xb) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x5c) = uVar3;
                    uVar1 = puVar7[0x19];
                    uVar2 = puVar7[0x1a];
                    uVar3 = puVar7[0x1b];
                    *(undefined4 *)(puVar6 + 0xc) = puVar7[0x18];
                    *(undefined4 *)((longlong)puVar6 + 100) = uVar1;
                    *(undefined4 *)(puVar6 + 0xd) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar3;
                    uVar1 = puVar7[0x1d];
                    uVar2 = puVar7[0x1e];
                    uVar3 = puVar7[0x1f];
                    *(undefined4 *)(puVar6 + 0xe) = puVar7[0x1c];
                    *(undefined4 *)((longlong)puVar6 + 0x74) = uVar1;
                    *(undefined4 *)(puVar6 + 0xf) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x7c) = uVar3;
                    lVar5 = lVar5 + -1;
                    puVar6 = puVar6 + 0x10;
                    puVar7 = puVar7 + 0x20;
                } while (lVar5 != 0);
            }
            else {
                FUN_1407db590(&DAT_140c42e00,DAT_140c42e00,0x800);
            }
            puVar6 = &DAT_140c42e00;
            if ((undefined4 *)PTR_DAT_140c42df8 != puVar4) {
                puVar6 = (undefined8 *)PTR_DAT_140c42df8;
            }
            PTR_DAT_140c42df8 = (undefined *)puVar6;
            FUN_14018b900(puVar4);
        }
    }
    if ((undefined8 *)(PTR_DAT_140c42df8 + ((_DAT_140c42de4 & 0xffffffff) + 1) * 8) ==
        &DAT_140c42e08 + DAT_140c42de8) {
        do {
            do {
                DAT_140c42df0 = DAT_140c42df0 + 1;
            } while (DAT_140c42df0 == 0);
        } while (DAT_140c42df0 == -1);
        _DAT_140c42de4 = 0;
        return DAT_140c42df0;
    }
    _DAT_140c42de4 = _DAT_140c42de4 & 0xffffffff | (ulonglong)(DAT_140c42de8 + 1) << 0x20;
    return (&DAT_140c42e08)[DAT_140c42de8];
}



void FUN_140341580(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x50);
    while (lVar1 != 0) {
        if (*(undefined8 **)(lVar1 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
        }
        if (*(longlong *)(lVar1 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
        }
        if (*(longlong *)(lVar1 + 0x18) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
        }
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        FUN_14018b900(lVar1,0);
        lVar1 = *(longlong *)(param_1 + 0x50);
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    while (lVar1 != 0) {
        if (*(undefined8 **)(lVar1 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
        }
        if (*(longlong *)(lVar1 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
        }
        if (*(longlong *)(lVar1 + 0x18) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
        }
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        FUN_14018b900(lVar1,0);
        lVar1 = *(longlong *)(param_1 + 0x58);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401a4a00(param_1 + 0x58);
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1401a4a00(param_1 + 0x50);
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return;
}



undefined8 FUN_1403416f0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;

    plVar1 = *(longlong **)(param_1 + 0x50);
    while( true ) {
        if (plVar1 == (longlong *)0x0) {
            return 0;
        }
        if ((*plVar1 == param_2) || (iVar2 = FUN_1403416f0(*plVar1,param_2), iVar2 != 0)) break;
        plVar1 = (longlong *)plVar1[3];
    }
    return 1;
}



int FUN_140341740(longlong param_1,longlong param_2)

{
    float fVar1;

    fVar1 = (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
             *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) + 0.0) -
            (*(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
             *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14) + 0.0);
    if (0.0 < fVar1) {
        return 1;
    }
    return (0.0 <= fVar1) - 1;
}



undefined8 FUN_1403417a0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
    longlong *plVar1;
    float *pfVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    float fVar12;
    float fVar13;
    undefined4 in_XMM6_Da;
    float fVar14;
    undefined4 in_XMM6_Db;
    undefined4 uVar15;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar4 = *(ulonglong *)(param_1 + 0x10);
    plVar1 = (longlong *)(param_1 + 8);
    fVar14 = 0.0;
    uVar15 = 0;
    FUN_1402877c0(plVar1,param_3,param_3,param_4,
                  CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    uVar10 = 0;
    uVar11 = uVar10;
    if (param_3 != 0) {
        do {
            if (uVar11 < uVar4) {
                lVar5 = *(longlong *)(param_2 + uVar11 * 8);
                pfVar2 = (float *)(*plVar1 + 0x10 + uVar10);
                fVar12 = *pfVar2 - *(float *)(lVar5 + 0x10);
                fVar13 = pfVar2[1] - *(float *)(lVar5 + 0x14);
                fVar14 = fVar14 + fVar12 * fVar12 + fVar13 * fVar13 + 0.0;
            }
            puVar6 = *(undefined4 **)(param_2 + uVar11 * 8);
            lVar5 = *plVar1;
            uVar11 = uVar11 + 1;
            uVar7 = puVar6[1];
            uVar8 = puVar6[2];
            uVar9 = puVar6[3];
            puVar3 = (undefined4 *)(uVar10 + lVar5);
            *puVar3 = *puVar6;
            puVar3[1] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            uVar7 = puVar6[5];
            uVar8 = puVar6[6];
            uVar9 = puVar6[7];
            puVar3 = (undefined4 *)(uVar10 + 0x10 + lVar5);
            *puVar3 = puVar6[4];
            puVar3[1] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            uVar10 = uVar10 + 0x20;
        } while (uVar11 < param_3);
    }
    return CONCAT44(uVar15,fVar14);
}



undefined8 FUN_140341860(longlong param_1,longlong param_2,ulonglong param_3)

{
    longlong *plVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    float fVar12;
    undefined4 uVar13;

    uVar3 = *(ulonglong *)(param_1 + 0x10);
    plVar1 = (longlong *)(param_1 + 8);
    fVar12 = 0.0;
    uVar13 = 0;
    FUN_1402877c0(plVar1);
    uVar10 = 0;
    uVar11 = uVar10;
    if (param_3 != 0) {
        do {
            if (uVar11 < uVar3) {
                lVar4 = *(longlong *)(param_2 + uVar11 * 8);
                fVar5 = *(float *)(lVar4 + 0x30);
                fVar6 = *(float *)(lVar4 + 0x34);
                fVar12 = fVar12 + fVar5 * fVar5 + fVar6 * fVar6 + 0.0;
            }
            lVar4 = *(longlong *)(param_2 + uVar11 * 8);
            uVar11 = uVar11 + 1;
            uVar7 = *(undefined4 *)(lVar4 + 0x34);
            uVar8 = *(undefined4 *)(lVar4 + 0x38);
            uVar9 = *(undefined4 *)(lVar4 + 0x3c);
            puVar2 = (undefined4 *)(*plVar1 + -0x10 + uVar10 + 0x20);
            *puVar2 = *(undefined4 *)(lVar4 + 0x30);
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            lVar4 = *(longlong *)(param_2 + -8 + uVar11 * 8);
            *(undefined (*) [16])(uVar10 + *plVar1) =
                    CONCAT412(0.0 - *(float *)(lVar4 + 0x2c),
                              CONCAT48(0.0 - *(float *)(lVar4 + 0x28),
                                       CONCAT44(0.0 - *(float *)(lVar4 + 0x24),0.0 - *(float *)(lVar4 + 0x20)
                                       )));
            uVar10 = uVar10 + 0x20;
        } while (uVar11 < param_3);
    }
    return CONCAT44(uVar13,fVar12);
}



undefined8 FUN_140341920(longlong param_1,longlong param_2)

{
    longlong **pplVar1;
    int iVar2;
    longlong *plVar3;
    longlong **pplVar4;

    if (param_2 != param_1) {
        plVar3 = *(longlong **)(param_1 + 0x50);
        pplVar4 = (longlong **)(param_1 + 0x50);
        while( true ) {
            if (plVar3 == (longlong *)0x0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    plVar3[2] = 0;
                    plVar3[3] = 0;
                    plVar3[4] = 0;
                    plVar3[5] = 0;
                }
                *plVar3 = param_2;
                if (plVar3[2] == 0) {
                    plVar3[2] = (longlong)pplVar4;
                    pplVar1 = (longlong **)(plVar3 + 3);
                    *pplVar1 = *pplVar4;
                    *pplVar4 = plVar3;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[2] = (longlong)pplVar1;
                    }
                }
                pplVar4 = (longlong **)(param_2 + 0x58);
                plVar3[1] = param_1;
                if (plVar3[4] == 0) {
                    plVar3[4] = (longlong)pplVar4;
                    pplVar1 = (longlong **)(plVar3 + 5);
                    *pplVar1 = *pplVar4;
                    *pplVar4 = plVar3;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[4] = (longlong)pplVar1;
                    }
                }
                return 0;
            }
            if ((*plVar3 == param_2) || (iVar2 = FUN_1403416f0(*plVar3,param_2), iVar2 != 0)) break;
            plVar3 = (longlong *)plVar3[3];
        }
    }
    return 0x80070057;
}



undefined8 FUN_140341a20(longlong param_1,longlong param_2)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x50);
    while( true ) {
        if (plVar1 == (longlong *)0x0) {
            return 0x80004005;
        }
        if (*plVar1 == param_2) break;
        plVar1 = (longlong *)plVar1[3];
    }
    if ((longlong *)plVar1[4] != (longlong *)0x0) {
        *(longlong *)plVar1[4] = plVar1[5];
    }
    if (plVar1[5] != 0) {
        *(longlong *)(plVar1[5] + 0x20) = plVar1[4];
    }
    plVar1[4] = 0;
    plVar1[5] = 0;
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
        *(longlong *)plVar1[2] = plVar1[3];
    }
    if (plVar1[3] != 0) {
        *(longlong *)(plVar1[3] + 0x10) = plVar1[2];
    }
    plVar1[2] = 0;
    plVar1[3] = 0;
    FUN_14018b900(plVar1,0);
    return 0;
}



undefined8 FUN_140341ab0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
        if (lVar1 == 0) goto LAB_140341b2a;
        do {
            if (*(undefined8 **)(lVar1 + 0x20) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
            }
            if (*(longlong *)(lVar1 + 0x28) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
            }
            *(undefined8 *)(lVar1 + 0x20) = 0;
            *(undefined8 *)(lVar1 + 0x28) = 0;
            if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
            }
            if (*(longlong *)(lVar1 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
            }
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            FUN_14018b900(lVar1,0);
            LAB_140341b2a:
            lVar1 = *(longlong *)(param_1 + 0x50);
        } while (lVar1 != 0);
    }
    return 0;
}



void FUN_140341b40(float *param_1,undefined8 param_2,float param_3,code *param_4)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    float **ppfVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    float fVar10;
    longlong local_48;
    longlong local_40;

    if (param_1[0xe] != param_3) {
        FUN_1402877c0(param_1 + 6,*(undefined8 *)(param_1 + 4));
        plVar1 = (longlong *)(param_1 + 10);
        FUN_14004eed0(plVar1,0);
        local_40 = *(longlong *)(param_1 + 4);
        *param_1 = 3.402823e+38;
        if (local_40 != 0) {
            local_48 = 0;
            do {
                fVar10 = (float)(*param_4)(*(longlong *)(param_1 + 6) + local_48,
                                           *(longlong *)(param_1 + 2) + local_48,param_2);
                if (fVar10 < *param_1) {
                    *param_1 = fVar10;
                }
                lVar7 = *(longlong *)(param_1 + 6);
                lVar3 = *(longlong *)(param_1 + 0xc);
                lVar6 = FUN_14018db00(*plVar1,lVar3 + 1,8);
                *(longlong *)(lVar6 + lVar3 * 8) = lVar7 + local_48;
                if (*plVar1 != lVar6) {
                    FUN_1407db590(lVar6,*plVar1,*(longlong *)(param_1 + 0xc) << 3);
                    lVar7 = *plVar1;
                    if (lVar7 != 0) {
                        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                    }
                    *plVar1 = lVar6;
                }
                local_48 = local_48 + 0x20;
                local_40 = local_40 + -1;
                *(longlong *)(param_1 + 0xc) = lVar3 + 1;
            } while (local_40 != 0);
        }
        for (ppfVar4 = *(float ***)(param_1 + 0x14); ppfVar4 != (float **)0x0;
             ppfVar4 = (float **)ppfVar4[3]) {
            FUN_140341b40(*ppfVar4,param_2,param_3);
            if (**ppfVar4 < *param_1) {
                *param_1 = **ppfVar4;
            }
            uVar8 = 0;
            uVar9 = *(ulonglong *)(*ppfVar4 + 0xc);
            if (uVar9 != 0) {
                do {
                    FUN_140033260(plVar1,*(longlong *)(*ppfVar4 + 10) + uVar8 * 8);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar9);
            }
        }
        FUN_1403438a0();
        iVar2 = *DAT_140c63750;
        iVar5 = DAT_140c42d90;
        if (iVar2 < DAT_140c42d90) {
            iVar5 = iVar2;
        }
        if ((ulonglong)*(uint *)(&DAT_140c42da0 + (longlong)iVar5 * 4) < *(ulonglong *)(param_1 + 0xc))
        {
            iVar5 = DAT_140c42d90;
            if (iVar2 < DAT_140c42d90) {
                iVar5 = iVar2;
            }
            uVar9 = (ulonglong)*(uint *)(&DAT_140c42da0 + (longlong)iVar5 * 4);
            if (*(ulonglong *)(param_1 + 0xc) < uVar9 || *(ulonglong *)(param_1 + 0xc) == uVar9) {
                lVar7 = FUN_14018db00(*plVar1,uVar9,8);
                if (*plVar1 != lVar7) {
                    FUN_1407db590(lVar7,*plVar1,*(longlong *)(param_1 + 0xc) << 3);
                    lVar3 = *plVar1;
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    *plVar1 = lVar7;
                }
            }
            *(ulonglong *)(param_1 + 0xc) = uVar9;
        }
        param_1[0xe] = param_3;
    }
    return;
}



undefined8 FUN_140341da0(longlong param_1,code *param_2,undefined8 param_3)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar1 = *(ulonglong *)(param_1 + 0x10);
    uVar4 = 0;
    uVar5 = uVar4;
    if (uVar1 != 0) {
        do {
            iVar3 = (*param_2)(*(longlong *)(param_1 + 8) + uVar5,param_3);
            if (iVar3 < 0) {
                return 0x80004005;
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x20;
        } while (uVar4 < uVar1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    while( true ) {
        if (puVar2 == (undefined8 *)0x0) {
            return 0;
        }
        iVar3 = FUN_140341da0(*puVar2,param_2,param_3);
        if (iVar3 < 0) break;
        puVar2 = (undefined8 *)puVar2[3];
    }
    return 0x80004005;
}



longlong FUN_140341e40(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0x10) != 0) {
        return *(longlong *)(param_1 + 8);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    while( true ) {
        if (puVar1 == (undefined8 *)0x0) {
            return 0;
        }
        lVar2 = FUN_140341e40(*puVar1);
        if (lVar2 != 0) break;
        puVar1 = (undefined8 *)puVar1[3];
    }
    return lVar2;
}



void FUN_140341e90(undefined4 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;

    if (*(longlong *)(param_1 + 8) != 0) {
        return;
    }
    puVar4 = (undefined4 *)FUN_14018b280();
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        *(undefined8 *)(puVar4 + 0x14) = 0;
        *(undefined8 *)(puVar4 + 0x16) = 0;
        puVar4[0x12] = 1;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        puVar4[0xe] = 0;
        *puVar4 = 0;
        puVar5 = puVar4;
    }
    *(undefined4 **)(param_1 + 8) = puVar5;
    if (param_1[0xc] != 0) {
        FUN_1402877c0(puVar5 + 2,1);
        puVar5 = *(undefined4 **)(puVar5 + 2);
        uVar1 = param_1[1];
        uVar2 = param_1[2];
        uVar3 = param_1[3];
        *puVar5 = *param_1;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        uVar1 = param_1[5];
        uVar2 = param_1[6];
        uVar3 = param_1[7];
        puVar5[4] = param_1[4];
        puVar5[5] = uVar1;
        puVar5[6] = uVar2;
        puVar5[7] = uVar3;
        return;
    }
    FUN_1403417a0(puVar5,0,0);
    return;
}



undefined8 FUN_140341f70(undefined4 *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    bool bVar8;

    DVar6 = GetCurrentThreadId();
    uVar7 = 0;
    if (DAT_140c7a070 == DVar6) {
        DAT_140c7a078 = DAT_140c7a078 + 1;
        DVar6 = DAT_140c7a070;
    }
    else {
        do {
            LOCK();
            bVar8 = DAT_140c7a078 == 0;
            DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar8 * (DAT_140c7a078 ^ 1);
            if (bVar8) goto LAB_140341fe3;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(&DAT_140c7a070,DVar6);
        DVar6 = DAT_140c7a070;
    }
    LAB_140341fe3:
    DAT_140c7a070 = DVar6;
    if ((param_1[0xc] == 0) || ((float)param_1[10] == 3.402823e+38)) {
        param_1[10] = 0x7f7fffff;
    }
    else {
        param_1[10] = (float)param_1[10] +
                      ((float)param_1[4] - (float)param_2[4]) * ((float)param_1[4] - (float)param_2[4])
                      + ((float)param_1[5] - (float)param_2[5]) *
                        ((float)param_1[5] - (float)param_2[5]) + 0.0;
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    lVar1 = *(longlong *)(param_1 + 8);
    param_1[0xc] = 1;
    if (lVar1 != 0) {
        FUN_1402877c0(lVar1 + 8,1);
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        puVar2 = *(undefined4 **)(lVar1 + 8);
        *puVar2 = *param_1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = param_1[5];
        uVar4 = param_1[6];
        uVar5 = param_1[7];
        puVar2[4] = param_1[4];
        puVar2[5] = uVar3;
        puVar2[6] = uVar4;
        puVar2[7] = uVar5;
    }
    if (DAT_140c7a078 < 2) {
        DAT_140c7a070 = 0;
        DAT_140c7a078 = 0;
        if (DAT_140c7a080 != 0) {
            if (DAT_140c7a088 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar8 = DAT_140c7a088 == (HANDLE)0x0;
                DAT_140c7a088 =
                        (HANDLE)((ulonglong)DAT_140c7a088 ^
                                 (ulonglong)bVar8 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
                if (!bVar8) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a088);
        }
    }
    else {
        DAT_140c7a078 = DAT_140c7a078 - 1;
    }
    return 0;
}



undefined8 FUN_140342110(undefined (*param_1) [16],longlong param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    bool bVar8;
    float fVar9;
    float fVar10;

    DVar6 = GetCurrentThreadId();
    uVar7 = 0;
    if (DAT_140c7a070 == DVar6) {
        DAT_140c7a078 = DAT_140c7a078 + 1;
        DVar6 = DAT_140c7a070;
    }
    else {
        do {
            LOCK();
            bVar8 = DAT_140c7a078 == 0;
            DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar8 * (DAT_140c7a078 ^ 1);
            if (bVar8) goto LAB_140342183;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(&DAT_140c7a070,DVar6);
        DVar6 = DAT_140c7a070;
    }
    LAB_140342183:
    DAT_140c7a070 = DVar6;
    fVar9 = *(float *)param_1[1] - *(float *)(param_2 + 0x30);
    fVar10 = *(float *)(param_1[1] + 4) - *(float *)(param_2 + 0x34);
    if ((*(int *)param_1[3] == 0) || (*(float *)(param_1[2] + 8) == 3.402823e+38)) {
        *(undefined4 *)(param_1[2] + 8) = 0x7f7fffff;
    }
    else {
        *(float *)(param_1[2] + 8) = *(float *)(param_1[2] + 8) + fVar9 * fVar9 + fVar10 * fVar10 + 0.0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 0x38);
    uVar5 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)param_1[1] = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1[1] + 4) = uVar3;
    *(undefined4 *)(param_1[1] + 8) = uVar4;
    *(undefined4 *)(param_1[1] + 0xc) = uVar5;
    *param_1 = CONCAT412(0.0 - *(float *)(param_2 + 0x2c),
                         CONCAT48(0.0 - *(float *)(param_2 + 0x28),
                                  CONCAT44(0.0 - *(float *)(param_2 + 0x24),
                                           0.0 - *(float *)(param_2 + 0x20))));
    lVar1 = *(longlong *)param_1[2];
    *(undefined4 *)param_1[3] = 1;
    if (lVar1 != 0) {
        FUN_1402877c0(lVar1 + 8,1);
        uVar3 = *(undefined4 *)(*param_1 + 4);
        uVar4 = *(undefined4 *)(*param_1 + 8);
        uVar5 = *(undefined4 *)(*param_1 + 0xc);
        puVar2 = *(undefined4 **)(lVar1 + 8);
        *puVar2 = *(undefined4 *)*param_1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = *(undefined4 *)(param_1[1] + 4);
        uVar4 = *(undefined4 *)(param_1[1] + 8);
        uVar5 = *(undefined4 *)(param_1[1] + 0xc);
        puVar2[4] = *(undefined4 *)param_1[1];
        puVar2[5] = uVar3;
        puVar2[6] = uVar4;
        puVar2[7] = uVar5;
    }
    if (DAT_140c7a078 < 2) {
        DAT_140c7a070 = 0;
        DAT_140c7a078 = 0;
        if (DAT_140c7a080 != 0) {
            if (DAT_140c7a088 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar8 = DAT_140c7a088 == (HANDLE)0x0;
                DAT_140c7a088 =
                        (HANDLE)((ulonglong)DAT_140c7a088 ^
                                 (ulonglong)bVar8 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
                if (!bVar8) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a088);
        }
    }
    else {
        DAT_140c7a078 = DAT_140c7a078 - 1;
    }
    return 0;
}



undefined4 * FUN_1403422c0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
    DWORD DVar1;
    uint uVar2;
    undefined4 *puVar3;
    HANDLE hObject;
    undefined4 *puVar4;
    undefined4 *puVar5;
    bool bVar6;
    float fVar7;

    DVar1 = GetCurrentThreadId();
    puVar5 = (undefined4 *)0x0;
    puVar4 = puVar5;
    if (DAT_140c7a070 == DVar1) {
        DAT_140c7a078 = DAT_140c7a078 + 1;
        DVar1 = DAT_140c7a070;
    }
    else {
        do {
            LOCK();
            bVar6 = DAT_140c7a078 == 0;
            DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar6 * (DAT_140c7a078 ^ 1);
            if (bVar6) goto LAB_140342340;
            puVar4 = (undefined4 *)((longlong)puVar4 + 1);
        } while (puVar4 < &DAT_00000400);
        FUN_14019fb60(&DAT_140c7a070,DVar1);
        DVar1 = DAT_140c7a070;
    }
    LAB_140342340:
    DAT_140c7a070 = DVar1;
    if (param_2[1] == 0) {
        puVar5 = (undefined4 *)0x80004005;
    }
    else if (param_2[1] == 1) {
        uVar2 = FUN_140341f70(param_1,*(undefined8 *)*param_2);
        puVar5 = (undefined4 *)(ulonglong)uVar2;
    }
    else {
        if (*(longlong *)(param_1 + 0x20) == 0) {
            puVar3 = (undefined4 *)FUN_14018b280(0x60);
            puVar4 = puVar5;
            if (puVar3 != (undefined4 *)0x0) {
                *(undefined8 *)(puVar3 + 4) = 0;
                *(undefined8 *)(puVar3 + 2) = 0;
                *(undefined8 *)(puVar3 + 8) = 0;
                *(undefined8 *)(puVar3 + 6) = 0;
                *(undefined8 *)(puVar3 + 0xc) = 0;
                *(undefined8 *)(puVar3 + 10) = 0;
                *(undefined8 *)(puVar3 + 0x14) = 0;
                *(undefined8 *)(puVar3 + 0x16) = 0;
                puVar3[0x12] = 1;
                *(undefined8 *)(puVar3 + 0x10) = 0;
                puVar3[0xe] = 0;
                *puVar3 = 0;
                puVar4 = puVar3;
            }
            *(undefined4 **)(param_1 + 0x20) = puVar4;
        }
        fVar7 = (float)FUN_1403417a0(*(undefined8 *)(param_1 + 0x20),*param_2,param_2[1]);
        if ((*(int *)(param_1 + 0x30) == 0) || (*(float *)(param_1 + 0x28) == 3.402823e+38)) {
            *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
        }
        else {
            *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar7;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x48) = param_3;
        *(undefined4 *)(param_1 + 0x30) = 1;
    }
    if (DAT_140c7a078 < 2) {
        DAT_140c7a070 = 0;
        DAT_140c7a078 = 0;
        if (DAT_140c7a080 != 0) {
            if (DAT_140c7a088 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar6 = DAT_140c7a088 == (HANDLE)0x0;
                DAT_140c7a088 =
                        (HANDLE)((ulonglong)DAT_140c7a088 ^
                                 (ulonglong)bVar6 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
                if (!bVar6) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a088);
        }
    }
    else {
        DAT_140c7a078 = DAT_140c7a078 - 1;
    }
    return puVar5;
}



undefined4 * FUN_140342490(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
    DWORD DVar1;
    uint uVar2;
    undefined4 *puVar3;
    HANDLE hObject;
    undefined4 *puVar4;
    undefined4 *puVar5;
    bool bVar6;
    float fVar7;

    DVar1 = GetCurrentThreadId();
    puVar5 = (undefined4 *)0x0;
    puVar4 = puVar5;
    if (DAT_140c7a070 == DVar1) {
        DAT_140c7a078 = DAT_140c7a078 + 1;
        DVar1 = DAT_140c7a070;
    }
    else {
        do {
            LOCK();
            bVar6 = DAT_140c7a078 == 0;
            DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar6 * (DAT_140c7a078 ^ 1);
            if (bVar6) goto LAB_140342510;
            puVar4 = (undefined4 *)((longlong)puVar4 + 1);
        } while (puVar4 < &DAT_00000400);
        FUN_14019fb60(&DAT_140c7a070,DVar1);
        DVar1 = DAT_140c7a070;
    }
    LAB_140342510:
    DAT_140c7a070 = DVar1;
    if (param_2[1] == 0) {
        puVar5 = (undefined4 *)0x80004005;
    }
    else if (param_2[1] == 1) {
        uVar2 = FUN_140342110(param_1,*(undefined8 *)*param_2);
        puVar5 = (undefined4 *)(ulonglong)uVar2;
    }
    else {
        if (*(longlong *)(param_1 + 0x20) == 0) {
            puVar3 = (undefined4 *)FUN_14018b280(0x60);
            puVar4 = puVar5;
            if (puVar3 != (undefined4 *)0x0) {
                *(undefined8 *)(puVar3 + 4) = 0;
                *(undefined8 *)(puVar3 + 2) = 0;
                *(undefined8 *)(puVar3 + 8) = 0;
                *(undefined8 *)(puVar3 + 6) = 0;
                *(undefined8 *)(puVar3 + 0xc) = 0;
                *(undefined8 *)(puVar3 + 10) = 0;
                *(undefined8 *)(puVar3 + 0x14) = 0;
                *(undefined8 *)(puVar3 + 0x16) = 0;
                puVar3[0x12] = 1;
                *(undefined8 *)(puVar3 + 0x10) = 0;
                puVar3[0xe] = 0;
                *puVar3 = 0;
                puVar4 = puVar3;
            }
            *(undefined4 **)(param_1 + 0x20) = puVar4;
        }
        fVar7 = (float)FUN_140341860(*(undefined8 *)(param_1 + 0x20),*param_2,param_2[1]);
        if ((*(int *)(param_1 + 0x30) == 0) || (*(float *)(param_1 + 0x28) == 3.402823e+38)) {
            *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
        }
        else {
            *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar7;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x48) = param_3;
        *(undefined4 *)(param_1 + 0x30) = 1;
    }
    if (DAT_140c7a078 < 2) {
        DAT_140c7a070 = 0;
        DAT_140c7a078 = 0;
        if (DAT_140c7a080 != 0) {
            if (DAT_140c7a088 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar6 = DAT_140c7a088 == (HANDLE)0x0;
                DAT_140c7a088 =
                        (HANDLE)((ulonglong)DAT_140c7a088 ^
                                 (ulonglong)bVar6 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
                if (!bVar6) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a088);
        }
    }
    else {
        DAT_140c7a078 = DAT_140c7a078 - 1;
    }
    return puVar5;
}



ulonglong FUN_140342660(longlong param_1,longlong param_2,undefined4 param_3)

{
    DWORD DVar1;
    ulonglong uVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    DVar1 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7a070 == DVar1) {
        DAT_140c7a078 = DAT_140c7a078 + 1;
        DVar1 = DAT_140c7a070;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7a078 == 0;
            DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar4 * (DAT_140c7a078 ^ 1);
            if (bVar4) goto LAB_1403426e3;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a070,DVar1);
        DVar1 = DAT_140c7a070;
    }
    LAB_1403426e3:
    DAT_140c7a070 = DVar1;
    FUN_140341e90(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x48) = param_3;
    FUN_140341e90(param_2);
    uVar2 = FUN_140341920(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
    uVar3 = uVar2 & 0xffffffff;
    if (DAT_140c7a078 < 2) {
        DAT_140c7a070 = 0;
        DAT_140c7a078 = 0;
        if (DAT_140c7a080 != 0) {
            if (DAT_140c7a088 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7a088 == (HANDLE)0x0;
                DAT_140c7a088 =
                        (HANDLE)((ulonglong)DAT_140c7a088 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a088);
        }
    }
    else {
        DAT_140c7a078 = DAT_140c7a078 - 1;
        uVar3 = uVar2;
    }
    return uVar3;
}



undefined4 FUN_140342950(undefined4 *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    DWORD DVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    HANDLE hObject;
    ulonglong uVar7;
    undefined8 *puVar8;
    bool bVar9;

    DVar4 = GetCurrentThreadId();
    uVar7 = 0;
    if (DAT_140c7a070 == DVar4) {
        DAT_140c7a078 = DAT_140c7a078 + 1;
        DVar4 = DAT_140c7a070;
    }
    else {
        do {
            LOCK();
            bVar9 = DAT_140c7a078 == 0;
            DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar9 * (DAT_140c7a078 ^ 1);
            if (bVar9) goto LAB_1403429cd;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(&DAT_140c7a070,DVar4);
        DVar4 = DAT_140c7a070;
    }
    LAB_1403429cd:
    DAT_140c7a070 = DVar4;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
        uVar5 = 0x80004005;
    }
    else {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
            for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puVar8 != (undefined8 *)0x0;
                 puVar8 = (undefined8 *)puVar8[3]) {
                puVar6 = (undefined4 *)FUN_140341e40(*puVar8);
                if (puVar6 != (undefined4 *)0x0) goto LAB_140342a1c;
            }
            puVar6 = (undefined4 *)0x0;
        }
        else {
            puVar6 = *(undefined4 **)(lVar1 + 8);
        }
        LAB_140342a1c:
        param_1[0xc] = (uint)(puVar6 != (undefined4 *)0x0);
        if ((puVar6 != (undefined4 *)0x0) != 0) {
            uVar5 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *param_1 = *puVar6;
            param_1[1] = uVar5;
            param_1[2] = uVar2;
            param_1[3] = uVar3;
            uVar5 = puVar6[5];
            uVar2 = puVar6[6];
            uVar3 = puVar6[7];
            param_1[4] = puVar6[4];
            param_1[5] = uVar5;
            param_1[6] = uVar2;
            param_1[7] = uVar3;
        }
        uVar5 = FUN_140341ab0(*(undefined8 *)(param_1 + 8));
        lVar1 = *(longlong *)(param_1 + 8);
        if ((*(longlong *)(lVar1 + 0x50) == 0) && (*(ulonglong *)(lVar1 + 0x10) < 2)) {
            if (lVar1 != 0) {
                FUN_140341580(lVar1);
                FUN_14018b900(lVar1,0);
            }
            *(undefined8 *)(param_1 + 8) = 0;
        }
    }
    if (1 < DAT_140c7a078) {
        DAT_140c7a078 = DAT_140c7a078 - 1;
        return uVar5;
    }
    DAT_140c7a070 = 0;
    DAT_140c7a078 = 0;
    if (DAT_140c7a080 != 0) {
        if (DAT_140c7a088 == (HANDLE)0x0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            bVar9 = DAT_140c7a088 == (HANDLE)0x0;
            DAT_140c7a088 =
                    (HANDLE)((ulonglong)DAT_140c7a088 ^
                             (ulonglong)bVar9 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
            if (!bVar9) {
                CloseHandle(hObject);
            }
        }
        SetEvent(DAT_140c7a088);
    }
    return uVar5;
}



undefined8 * FUN_140342b10(undefined8 *param_1)

{
    longlong *plVar1;
    undefined8 uVar2;

    DAT_140c65860 = DAT_140c65860 + 1;
    *param_1 = &PTR_LAB_140b64e30;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x12] = 0;
    uVar2 = FUN_140341430();
    param_1[5] = uVar2;
    if (param_1[6] == 0) {
        plVar1 = param_1 + 7;
        param_1[6] = &DAT_140c7a0c0;
        *plVar1 = (longlong)DAT_140c7a0c0;
        DAT_140c7a0c0 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x30) = plVar1;
        }
    }
    return param_1;
}



undefined8 FUN_140342bc0(undefined8 param_1,ulonglong param_2)

{
    FUN_140342c00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140342c00(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = &PTR_LAB_140b64e30;
    if (DAT_140c65860 != 0) {
        DAT_140c65860 = DAT_140c65860 + -1;
    }
    FUN_1403470f0(param_1 + 8);
    puVar3 = (undefined8 *)0x0;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x12] + 8))();
        param_1[0x12] = 0;
    }
    (**(code **)(*DAT_140c65858 + 0xd0))(DAT_140c65858,param_1[5]);
    (**(code **)(*DAT_140c65858 + 0xb8))();
    *(undefined8 *)(PTR_DAT_140c42df8 + (ulonglong)DAT_140c42de4 * 8 + 8) = param_1[5];
    DAT_140c42de4 = DAT_140c42de4 + 1;
    if (0xfe < DAT_140c42de4) {
        DAT_140c42de4 = 0;
        puVar2 = (undefined8 *)FUN_14018b280(0x800,0);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar3 = puVar2;
        }
        *(undefined8 **)PTR_DAT_140c42df8 = puVar3;
        PTR_DAT_140c42df8 = (undefined *)puVar3;
    }
    param_1[5] = 0;
    lVar1 = param_1[0xe];
    if (lVar1 != 0) {
        FUN_140341580(lVar1);
        FUN_14018b900(lVar1,0);
    }
    if (param_1[8] != 0) {
        FUN_1401a4a00(param_1 + 8);
    }
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 *)(param_1[7] + 0x30) = param_1[6];
    }
    param_1[7] = 0;
    param_1[6] = 0;
    return;
}



undefined8
FUN_140342d50(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
    undefined8 uVar1;

    if (param_2 == 0) {
        return 0x80070057;
    }
    uVar1 = FUN_140346e50(param_1 + 0x40,param_3,param_1,param_2,param_4,param_5,param_6,param_7);
    return uVar1;
}



ulonglong FUN_140342db0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
    uint uVar1;
    ulonglong uVar2;
    longlong *local_18 [2];

    uVar2 = FUN_140340210(DAT_140c65858,local_18,param_2);
    if (-1 < (int)uVar2) {
        uVar1 = FUN_140346e50(param_1 + 0x40,param_3,param_1,local_18[0],param_4,param_5,param_6,param_7
        );
        uVar2 = (ulonglong)uVar1;
        if (local_18[0] != (longlong *)0x0) {
            (**(code **)(*local_18[0] + 8))(local_18[0]);
        }
    }
    return uVar2;
}



int FUN_140342e70(undefined8 *param_1,longlong **param_2,longlong *param_3,undefined8 param_4)

{
    int iVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    if (param_2 == (longlong **)0x0) {
        return -0x7ff8ffa9;
    }
    uVar2 = (**(code **)(*param_3 + 0x40))(param_3);
    if ((uVar2 & 1) == 0) {
        lVar4 = FUN_14018b280(0xb8);
        if (lVar4 == 0) {
            plVar5 = (longlong *)0x0;
        }
        else {
            plVar5 = (longlong *)FUN_140348380(lVar4);
        }
        iVar1 = FUN_1403485a0(plVar5,param_3,param_4,param_1);
        if (iVar1 < 0) {
            if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x50))(plVar5,1);
            }
        }
        else {
            *param_2 = plVar5;
        }
    }
    else {
        plVar3 = (longlong *)FUN_14018b280(0x20);
        plVar5 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
            *plVar3 = (longlong)&PTR_LAB_140b65260;
            *(undefined4 *)((longlong)plVar3 + 0x1c) = 1;
            plVar3[2] = 0;
            plVar3[1] = 0;
            *(undefined4 *)(plVar3 + 3) = 0;
            plVar5 = plVar3;
        }
        if ((plVar5[2] == 0) && (param_1 != (undefined8 *)0x0)) {
            iVar1 = FUN_140349010(plVar5 + 2,param_3,param_4);
            if (-1 < iVar1) {
                (**(code **)*param_1)(param_1);
                plVar5[1] = (longlong)param_1;
                *param_2 = plVar5;
                return 0;
            }
        }
        else {
            iVar1 = -0x7ff8ffa9;
        }
        (**(code **)(*plVar5 + 0x50))(plVar5,1);
    }
    return iVar1;
}



ulonglong FUN_140342fb0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    uint uVar1;
    ulonglong uVar2;
    longlong *local_18;
    longlong *local_10;

    local_18 = (longlong *)0x0;
    local_10 = (longlong *)0x0;
    uVar2 = (**(code **)(*DAT_140c65858 + 0x18))(DAT_140c65858,&local_18);
    if (-1 < (int)uVar2) {
        if (param_4 != 0) {
            (**(code **)(*DAT_140c65858 + 0x18))(DAT_140c65858,&local_10,param_4);
        }
        uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,local_18,local_10);
        uVar2 = (ulonglong)uVar1;
        if (local_18 != (longlong *)0x0) {
            (**(code **)(*local_18 + 8))();
            local_18 = (longlong *)0x0;
        }
        if (local_10 != (longlong *)0x0) {
            (**(code **)(*local_10 + 8))();
        }
    }
    return uVar2;
}



undefined8
FUN_140343080(longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4,
              undefined4 param_5)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;

    if (param_3 == (longlong *)0x0) {
        return 0x80070057;
    }
    lVar1 = *DAT_140c65858;
    uVar2 = (**(code **)(*param_3 + 0x30))(param_3);
    uVar3 = (**(code **)(lVar1 + 0xe0))
            (DAT_140c65858,*(undefined8 *)(param_1 + 0x28),param_2,uVar2,param_4,param_5);
    return uVar3;
}



bool FUN_1403432a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    float fVar1;
    undefined4 in_XMM6_Da;
    float fVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (*(float **)(param_1 + 0x70) == (float *)0x0) {
        fVar2 = *(float *)(param_1 + 0x7c);
    }
    else {
        fVar2 = **(float **)(param_1 + 0x70);
    }
    fVar1 = (float)(**(code **)(*DAT_140c65858 + 0x118))
            (DAT_140c65858,*(undefined8 *)(param_1 + 0x28),param_3,param_4,
             CONCAT412(in_XMM6_Dd,
                       CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    return fVar2 < fVar1;
}



undefined8 FUN_140343310(longlong param_1,code *param_2,undefined8 param_3)

{
    if (param_2 == (code *)0x0) {
        return 0x80070057;
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_140341da0();
        return 0;
    }
    (*param_2)(param_1 + 0x50,param_3);
    return 0;
}



void FUN_140343380(undefined8 param_1,code *param_2)

{
    longlong *plVar1;
    int iVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    longlong lVar5;
    bool bVar6;
    undefined4 uVar7;
    undefined local_48 [32];

    DAT_140c65864 = DAT_140c65864 + 1;
    if (DAT_140c7a0c0 != 0) {
        lVar5 = DAT_140c7a0c0;
        do {
            iVar2 = DAT_140c65864;
            DVar3 = GetCurrentThreadId();
            uVar4 = 0;
            if (DAT_140c7a070 == DVar3) {
                DAT_140c7a078 = DAT_140c7a078 + 1;
                DVar3 = DAT_140c7a070;
            }
            else {
                do {
                    LOCK();
                    bVar6 = DAT_140c7a078 == 0;
                    DAT_140c7a078 = DAT_140c7a078 ^ (ulonglong)bVar6 * (DAT_140c7a078 ^ 1);
                    if (bVar6) goto LAB_140343421;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < 0x400);
                FUN_14019fb60(&DAT_140c7a070);
                DVar3 = DAT_140c7a070;
            }
            LAB_140343421:
            DAT_140c7a070 = DVar3;
            plVar1 = DAT_140c65858;
            if ((*(int *)(lVar5 + 0x80) == 0) && (*(longlong *)(lVar5 + 0x70) == 0)) {
                *(undefined4 *)(lVar5 + 0x7c) = 0;
                (**(code **)(*plVar1 + 0x120))();
            }
            else if (*(longlong *)(lVar5 + 0x70) == 0) {
                uVar7 = (*param_2)(local_48,lVar5 + 0x50,param_1);
                plVar1 = DAT_140c65858;
                *(undefined4 *)(lVar5 + 0x7c) = uVar7;
                (**(code **)(*plVar1 + 0x120))();
            }
            else {
                FUN_140341b40(*(longlong *)(lVar5 + 0x70),param_1,iVar2,param_2);
                (**(code **)(*DAT_140c65858 + 0x128))();
            }
            if (DAT_140c7a078 < 2) {
                DAT_140c7a070 = 0;
                DAT_140c7a078 = 0;
                if (DAT_140c7a080 != 0) {
                    if (DAT_140c7a088 == (HANDLE)0x0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                        LOCK();
                        bVar6 = DAT_140c7a088 == (HANDLE)0x0;
                        DAT_140c7a088 =
                                (HANDLE)((ulonglong)DAT_140c7a088 ^
                                         (ulonglong)bVar6 * ((ulonglong)DAT_140c7a088 ^ (ulonglong)hObject));
                        if (!bVar6) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(DAT_140c7a088);
                }
            }
            else {
                DAT_140c7a078 = DAT_140c7a078 - 1;
            }
            lVar5 = *(longlong *)(lVar5 + 0x38);
        } while (lVar5 != 0);
    }
    return;
}



int FUN_140343600(undefined8 param_1,int *param_2)

{
    int iVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7a0a0 == DVar2) {
        DAT_140c7a0a8 = DAT_140c7a0a8 + 1;
        DVar2 = DAT_140c7a0a0;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7a0a8 == 0;
            DAT_140c7a0a8 = DAT_140c7a0a8 ^ (ulonglong)bVar4 * (DAT_140c7a0a8 ^ 1);
            if (bVar4) goto LAB_140343662;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a0a0);
        DVar2 = DAT_140c7a0a0;
    }
    LAB_140343662:
    DAT_140c7a0a0 = DVar2;
    *param_2 = *param_2 + 1;
    if (param_2 == DAT_140c7a090) {
        DAT_140c7a090 = *(int **)(param_2 + 6);
    }
    if (param_2 == DAT_140c7a098) {
        DAT_140c7a098 = *(int **)(param_2 + 4);
    }
    if (*(longlong *)(param_2 + 6) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 6) + 0x10) = *(undefined8 *)(param_2 + 4);
    }
    if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x18) = *(undefined8 *)(param_2 + 6);
    }
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    iVar1 = *param_2;
    if (DAT_140c7a0a8 < 2) {
        DAT_140c7a0a0 = 0;
        DAT_140c7a0a8 = 0;
        if (DAT_140c7a0b0 != 0) {
            if (DAT_140c7a0b8 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7a0b8 == (HANDLE)0x0;
                DAT_140c7a0b8 =
                        (HANDLE)((ulonglong)DAT_140c7a0b8 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7a0b8 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a0b8);
        }
        return iVar1;
    }
    DAT_140c7a0a8 = DAT_140c7a0a8 - 1;
    return iVar1;
}



void FUN_1403438a0(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    if (param_3 == 2) {
        iVar3 = FUN_140341740(*param_2,param_2[1],0);
        if (0 < iVar3) {
            uVar1 = *param_2;
            *param_2 = param_2[1];
            param_2[1] = uVar1;
            return;
        }
    }
    else if (1 < param_3) {
        uVar4 = param_3 >> 1;
        if (uVar4 != 0) {
            uVar5 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                uVar2 = param_2[uVar4 - 1];
                uVar4 = uVar4 - 1;
                uVar5 = uVar5 - 2;
                uVar9 = uVar4;
                uVar10 = uVar5;
                while (uVar10 < param_3) {
                    uVar8 = param_2[uVar10];
                    uVar7 = uVar10 + 1;
                    uVar6 = uVar10;
                    if (uVar7 < param_3) {
                        uVar10 = param_2[uVar7];
                        iVar3 = FUN_140341740(uVar10,uVar8,0);
                        if ((0 < iVar3) || ((iVar3 == 0 && (uVar8 < uVar10)))) {
                            uVar6 = uVar7;
                            uVar8 = uVar10;
                        }
                    }
                    iVar3 = FUN_140341740(uVar8,uVar2,0);
                    if ((iVar3 < 1) && ((iVar3 != 0 || (uVar8 <= uVar2)))) break;
                    param_2[uVar9] = uVar8;
                    uVar9 = uVar6;
                    uVar10 = uVar6 * 2 + 1;
                }
                param_2[uVar9] = uVar2;
            } while (uVar4 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            uVar5 = param_2[param_3];
            uVar4 = 1;
            uVar10 = 0;
            param_2[param_3] = *param_2;
            if (1 < param_3) {
                do {
                    uVar9 = param_2[uVar4];
                    uVar2 = uVar4 + 1;
                    uVar7 = uVar4;
                    if (uVar2 < param_3) {
                        uVar4 = param_2[uVar2];
                        iVar3 = FUN_140341740(uVar4,uVar9,0);
                        if ((0 < iVar3) || ((iVar3 == 0 && (uVar9 < uVar4)))) {
                            uVar7 = uVar2;
                            uVar9 = uVar4;
                        }
                    }
                    iVar3 = FUN_140341740(uVar9,uVar5,0);
                    if ((iVar3 < 1) && ((iVar3 != 0 || (uVar9 <= uVar5)))) break;
                    param_2[uVar10] = uVar9;
                    uVar4 = uVar7 * 2 + 1;
                    uVar10 = uVar7;
                } while (uVar4 < param_3);
            }
            param_2[uVar10] = uVar5;
        }
    }
    return;
}



void FUN_140343a80(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = param_2;
    if (param_2 != (undefined8 *)0x0) {
        (**(code **)*param_2)(param_2);
    }
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140343ab1. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 8))(plVar1);
        return;
    }
    return;
}



undefined8 * FUN_140343ad0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b64f30;
    *(undefined4 *)(param_1 + 0x42) = 0;
    param_1[0x45] = 0;
    param_1[0x43] = &PTR_FUN_140b65328;
    *(undefined4 *)(param_1 + 0x44) = 0x80070057;
    param_1[0x46] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 1;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    FUN_1407e4830(param_1 + 1,0,0x208);
    param_1[0x4c] = param_1;
    param_1[0x4b] = FUN_140343c50;
    return param_1;
}
