//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong *
FUN_140618020(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        bVar3 = *(uint *)param_5 < *(uint *)(param_4 + 0x20);
        if (*(uint *)param_5 == *(uint *)(param_4 + 0x20)) {
            bVar3 = *(uint *)((longlong)param_5 + 4) < *(uint *)(param_4 + 0x24);
        }
        if (!bVar3) {
            lVar2 = FUN_14018b280(0x28);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1406180db;
        }
    }
    lVar2 = FUN_14018b280(0x28);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
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
    LAB_1406180db:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



void FUN_140618120(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_140618200(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_140618200(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8afe0,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001406182c6. Too many branches
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



undefined8 FUN_140618300(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar2 = DAT_140c65960;
    lVar4 = *(longlong *)(*(longlong *)(DAT_140c65960 + 0x10) + 0x10);
    if (lVar4 != *(longlong *)(DAT_140c65960 + 0x10)) {
        do {
            lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10);
            if (lVar3 != *(longlong *)(lVar4 + 0x30)) {
                do {
                    *(undefined4 *)(*(longlong *)(lVar3 + 0x28) + 0x60) = 0;
                    *(undefined4 *)(*(longlong *)(lVar3 + 0x28) + 100) = 0;
                    *(undefined4 *)(*(longlong *)(lVar3 + 0x28) + 0x68) = 0;
                    lVar5 = *(longlong *)(lVar3 + 0x18);
                    if (lVar5 == 0) {
                        lVar5 = *(longlong *)(lVar3 + 8);
                        if (lVar3 == *(longlong *)(lVar5 + 0x18)) {
                            do {
                                lVar3 = lVar5;
                                lVar5 = *(longlong *)(lVar3 + 8);
                            } while (lVar3 == *(longlong *)(lVar5 + 0x18));
                        }
                        if (*(longlong *)(lVar3 + 0x18) != lVar5) {
                            lVar3 = lVar5;
                        }
                    }
                    else {
                        for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar3 = lVar5, lVar1 != 0;
                             lVar1 = *(longlong *)(lVar1 + 0x10)) {
                            lVar5 = lVar1;
                        }
                    }
                } while (lVar3 != *(longlong *)(lVar4 + 0x30));
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
                for (lVar5 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar5 != 0;
                     lVar5 = *(longlong *)(lVar5 + 0x10)) {
                    lVar3 = lVar5;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 0x10));
    }
    return 0;
}



undefined8 FUN_140618400(longlong param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint *puVar12;
    longlong local_res8;
    longlong local_res10;

    if ((*(int *)(param_2 + 4) != 0) &&
        (local_res8 = param_1, lVar3 = FUN_140432960(DAT_140c65960), lVar3 != 0)) {
        uVar9 = 0;
        iVar2 = 0;
        plVar4 = (longlong *)FUN_1403d90d0();
        uVar11 = uVar9;
        if (*(int *)(param_2 + 4) != 0) {
            do {
                lVar1 = *(longlong *)(lVar3 + 0x18);
                puVar12 = (uint *)(uVar11 * 0x10 + *(longlong *)(param_2 + 8));
                lVar8 = lVar1;
                if (*(longlong *)(lVar1 + 8) != 0) {
                    lVar5 = *(longlong *)(lVar1 + 8);
                    do {
                        if (*(uint *)(lVar5 + 0x20) < *puVar12) {
                            lVar6 = *(longlong *)(lVar5 + 0x18);
                        }
                        else {
                            lVar6 = *(longlong *)(lVar5 + 0x10);
                            lVar8 = lVar5;
                        }
                        lVar5 = lVar6;
                    } while (lVar6 != 0);
                }
                if ((lVar8 == lVar1) || (*puVar12 < *(uint *)(lVar8 + 0x20))) {
                    local_res10 = lVar1;
                    plVar7 = &local_res10;
                }
                else {
                    local_res8 = lVar8;
                    plVar7 = &local_res8;
                }
                lVar8 = *plVar7;
                if (lVar8 != lVar1) {
                    *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x68) = puVar12[2];
                    *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x6c) = puVar12[1];
                    *(uint *)(*(longlong *)(lVar8 + 0x28) + 0x70) = puVar12[3];
                    if ((plVar4 != (longlong *)0x0) &&
                        (lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x28) + 0x18),
                                iVar2 = (**(code **)(*plVar4 + 8))(plVar4), *(int *)(lVar1 + 0xc) == iVar2)) {
                        uVar9 = 1;
                    }
                }
                iVar2 = (int)uVar9;
                uVar10 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(param_2 + 4));
        }
        if ((plVar4 != (longlong *)0x0) && (iVar2 != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SettlerBuildStatusUpdate",
                          &DAT_1409ed92c,**(undefined4 **)(lVar3 + 8),*(undefined4 *)(plVar4 + 1));
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406185a0(ulonglong param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    ulonglong local_res8;

    local_res8 = param_1;
    lVar1 = FUN_140432960(DAT_140c65960,*param_2);
    if (lVar1 != 0) {
        if (*(int *)(DAT_140c65898 + 0x6644) == 0x1e) {
            uVar3 = *(undefined4 *)(DAT_140c65898 + 0x6640);
        }
        else {
            uVar3 = 0;
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,uVar3);
        local_res8 = local_res8 & 0xffffffff00000000;
        FUN_1406187e0(lVar1,param_2 + 1,lVar2,&local_res8);
        if ((lVar2 != 0) && ((int)local_res8 != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SettlerBuildStatusUpdate",
                          &DAT_1409ed92c,**(undefined4 **)(lVar1 + 8),*(undefined4 *)(lVar2 + 8));
        }
    }
    return 0;
}



longlong FUN_140618780(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar2 != *(longlong **)(param_1 + 0x38)) {
        do {
            iVar1 = FUN_1403c92e0();
            if (iVar1 != 0) {
                return plVar2[2];
            }
            plVar2 = (longlong *)*plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    return 0;
}



void FUN_1406187e0(longlong param_1,uint *param_2,longlong *param_3,uint *param_4)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x18);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar3 + 0x20) < *param_2) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        *(uint *)(*(longlong *)(local_res8 + 0x28) + 0x68) = param_2[2];
        *(uint *)(*(longlong *)(local_res8 + 0x28) + 0x6c) = param_2[1];
        *(uint *)(*(longlong *)(local_res8 + 0x28) + 0x70) = param_2[3];
        if ((param_3 != (longlong *)0x0) && (param_4 != (uint *)0x0)) {
            lVar1 = *(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x18);
            iVar2 = (**(code **)(*param_3 + 8))();
            *param_4 = (uint)(*(int *)(lVar1 + 0xc) == iVar2);
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140618de4)
// WARNING: Removing unreachable block (ram,0x000140618df1)
// WARNING: Removing unreachable block (ram,0x000140618e14)

void FUN_140618c60(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_LAB_140b672f0;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
        } while (lVar4 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    lVar4 = *(longlong *)(param_1[6] + 0x10);
    if (lVar4 != param_1[6]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
        } while (lVar4 != param_1[6]);
    }
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140619220(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined auStack152 [32];
    undefined8 local_78;
    longlong local_70;
    ulonglong local_68;
    longlong local_60;
    undefined8 *local_58;
    ulonglong local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    uVar10 = param_2[1];
    local_60 = param_1;
    if (*(ulonglong *)(param_1 + 0x50) != uVar10) goto LAB_140619597;
    uVar5 = 0;
    uVar4 = 0;
    local_78 = CONCAT44(local_78._4_4_,1);
    local_70 = 0;
    local_68 = 0;
    lVar8 = 0;
    if (uVar10 == 0) {
        LAB_1406194f7:
        lVar6 = local_70;
        uVar3 = 0;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        if (uVar10 != 0) {
            lVar8 = *param_2;
            uVar5 = 0;
            do {
                uVar3 = uVar3 + 1;
                *(undefined4 *)((longlong)&local_58 + uVar5 * 4) = *(undefined4 *)(lVar8 + uVar5 * 4);
                uVar5 = (ulonglong)uVar3;
            } while (uVar5 < uVar10);
        }
        FUN_1403f4900(DAT_140c65898,0x66a,&local_58);
        lVar8 = local_60;
    }
    else {
        do {
            lVar6 = lVar8;
            if (*(int *)(*(longlong *)(param_1 + 0x48) + uVar4 * 4) == *(int *)(*param_2 + uVar4 * 4)) {
                lVar9 = FUN_14018db00(lVar8,uVar5 + 1,4);
                *(undefined4 *)(uVar5 * 4 + lVar9) = 2;
                if ((lVar8 != lVar9) && (FUN_1407db590(), lVar6 = lVar9, lVar8 != 0)) {
                    (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))();
                }
                iVar7 = (int)local_78;
                uVar5 = uVar5 + 1;
                param_1 = local_60;
            }
            else {
                iVar7 = 0;
                local_78 = local_78 & 0xffffffff00000000;
            }
            uVar4 = uVar4 + 1;
            lVar8 = lVar6;
        } while (uVar4 < uVar10);
        local_70 = lVar6;
        local_68 = uVar5;
        if (iVar7 != 0) goto LAB_1406194f7;
        uVar10 = *(ulonglong *)(param_1 + 0x50);
        local_50 = uVar10;
        if (uVar10 == 0) {
            puVar12 = (undefined8 *)0x0;
        }
        else {
            puVar1 = (undefined8 *)FUN_14018b280(uVar10 * 4 + 0x10,0);
            if (puVar1 == (undefined8 *)0x0) {
                puVar12 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar1[1] = uVar10;
                puVar12 = puVar1 + 2;
                *puVar1 = &PTR_LAB_140b55060;
            }
        }
        local_58 = puVar12;
        FUN_1407db590(puVar12,*(undefined8 *)(param_1 + 0x48),uVar10 * 4);
        lVar9 = 0;
        for (lVar8 = param_2[1]; lVar8 != 0; lVar8 = lVar8 + -1) {
            if (*(int *)(*param_2 + lVar9 * 4) == *(int *)((longlong)puVar12 + lVar9 * 4)) {
                FUN_1401c2f20(param_2,lVar9);
                FUN_1401c2f20();
                puVar12 = local_58;
            }
            else {
                lVar9 = lVar9 + 1;
            }
            uVar10 = local_50;
        }
        lVar9 = 0;
        lVar2 = local_70;
        uVar4 = local_68;
        lVar8 = local_60;
        for (local_78 = param_2[1]; local_60 = lVar8, local_78 != 0; local_78 = local_78 - 1) {
            uVar4 = 0;
            lVar2 = lVar6;
            if (uVar10 != 0) {
                do {
                    if (*(int *)(*param_2 + lVar9 * 4) == *(int *)((longlong)puVar12 + uVar4 * 4)) {
                        FUN_1401c2f20(param_2,lVar9);
                        FUN_1401c2f20(&local_58,uVar4);
                        lVar8 = FUN_14018db00(lVar6,uVar5 + 1,4);
                        *(undefined4 *)(uVar5 * 4 + lVar8) = 1;
                        if ((lVar6 != lVar8) && (FUN_1407db590(), lVar2 = lVar8, lVar6 != 0)) {
                            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))();
                        }
                        uVar5 = uVar5 + 1;
                        uVar10 = local_50;
                        puVar12 = local_58;
                        goto LAB_1406193ee;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar10);
            }
            lVar9 = lVar9 + 1;
            LAB_1406193ee:
            lVar6 = lVar2;
            uVar4 = uVar5;
            lVar8 = local_60;
        }
        if (uVar5 < *(ulonglong *)(lVar8 + 0x50)) {
            lVar11 = *(ulonglong *)(lVar8 + 0x50) - uVar5;
            lVar9 = lVar6;
            local_70 = lVar2;
            local_68 = uVar4;
            do {
                uVar4 = uVar5 + 1;
                lVar2 = FUN_14018db00(lVar9,uVar4,4);
                *(undefined4 *)(uVar5 * 4 + lVar2) = 0;
                lVar6 = lVar9;
                if ((lVar9 != lVar2) && (FUN_1407db590(lVar2), lVar6 = lVar2, lVar9 != 0)) {
                    (**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
                }
                lVar11 = lVar11 + -1;
                uVar5 = uVar4;
                lVar9 = lVar6;
                lVar2 = lVar6;
            } while (lVar11 != 0);
        }
        local_68 = uVar4;
        local_70 = lVar2;
        if (puVar12 != (undefined8 *)0x0) {
            (**(code **)(puVar12[-2] + 8))(puVar12 + -2);
        }
    }
    *(int *)(lVar8 + 0x68) = *(int *)(lVar8 + 0x68) + 1;
    if (*(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x70) + 8) + 4) <= *(uint *)(lVar8 + 0x68)) {
        *(undefined8 *)(lVar8 + 0x70) = 0;
    }
    FUN_14042d030(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_70);
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    LAB_140619597:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack152);
    return;
}



undefined8 FUN_1406195b0(void)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined4 uVar4;

    if (*(longlong *)(DAT_140c65950 + 0x70) != 0) {
        return 0x80004005;
    }
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x1d) {
        uVar4 = *(undefined4 *)(DAT_140c65898 + 0x6640);
    }
    else {
        uVar4 = 0;
    }
    lVar2 = FUN_1403d90d0(DAT_140c65898,uVar4);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) && (DAT_140c65970 != 0)) {
        plVar3 = (longlong *)
                FUN_1404804a0(DAT_140c65970,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x78),0x16);
        if (plVar3 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
            if (iVar1 == 0) {
                WindowHandlerFunction(DAT_140c65898,*(undefined4 *)(lVar2 + 8),0x1d,1);
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_140619660(void)

{
    int iVar1;
    undefined8 *puVar2;

    if (DAT_140c65bb8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_14018b280(0xd8,0);
        if (puVar2 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
        }
        else {
            FUN_1404cd470(puVar2);
            *puVar2 = &PTR_FUN_140b6fac0;
        }
        DAT_140c65bb8 = puVar2;
        iVar1 = FUN_1404cd630(puVar2);
        if (iVar1 < 0) {
            if (DAT_140c65bb8 != (undefined8 *)0x0) {
                (**(code **)*DAT_140c65bb8)(DAT_140c65bb8,1);
            }
            DAT_140c65bb8 = (undefined8 *)0x0;
            return 0x80004005;
        }
    }
    return 0;
}



undefined8 * FUN_1406196f0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6fac0;
    FUN_1404cd540();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140619730(undefined8 param_1,uint *param_2,uint param_3)

{
    uint uVar1;

    if (((*param_2 ^ param_3) & 2) != 0) {
        uVar1 = *param_2 >> 1 & 1;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CommodityAuctionsDisabled",&DAT_1409ec70c
                ,uVar1);
        if ((uVar1 != 0) && (*(int *)(DAT_140c65898 + 0x6644) == 0x4b)) {
            WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        }
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    return 0;
}



undefined8 FUN_1406197f0(void)

{
    int iVar1;
    undefined8 *puVar2;

    if (DAT_140c65bc0 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_14018b280(0xd8,0);
        if (puVar2 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
        }
        else {
            FUN_1404cd470(puVar2);
            *puVar2 = &PTR_FUN_140b6fad0;
        }
        DAT_140c65bc0 = puVar2;
        iVar1 = FUN_1404cd630(puVar2);
        if (iVar1 < 0) {
            if (DAT_140c65bc0 != (undefined8 *)0x0) {
                (**(code **)*DAT_140c65bc0)(DAT_140c65bc0,1);
            }
            DAT_140c65bc0 = (undefined8 *)0x0;
            return 0x80004005;
        }
    }
    return 0;
}



undefined8 * FUN_140619880(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6fad0;
    FUN_1404cd540();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_140619900(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined *puVar4;
    undefined4 in_XMM6_Da;
    undefined4 uVar5;
    undefined4 in_XMM6_Db;
    undefined4 uVar6;
    undefined4 in_XMM6_Dc;
    undefined4 uVar7;
    undefined4 in_XMM6_Dd;
    undefined4 uVar8;

    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
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
    *(undefined (*) [16])(param_1 + 0x30) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x3c) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar3 = uRam0000000140c7787c;
    uVar2 = uRam0000000140c77878;
    uVar1 = uRam0000000140c77874;
    *(undefined4 *)(param_1 + 0x42) = _DAT_140c77870;
    *(undefined4 *)((longlong)param_1 + 0x214) = uVar1;
    *(undefined4 *)(param_1 + 0x43) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x21c) = uVar3;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0x501502f9;
    *(undefined4 *)((longlong)param_1 + 0x254) = 0;
    *(undefined8 *)((longlong)param_1 + 0x25c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x264) = 0;
    *(undefined4 *)(param_1 + 0x52) = 0;
    *(undefined8 *)((longlong)param_1 + 0x29c) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
    *(undefined8 *)((longlong)param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    *(undefined4 *)(param_1 + 0x86) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x474) = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    *(undefined4 *)(param_1 + 0x8f) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    *(undefined4 *)(param_1 + 0x98) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x504) = 0;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    *(undefined4 *)(param_1 + 0xaa) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x594) = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb7] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    *(undefined4 *)(param_1 + 0xba) = 0;
    puVar4 = (undefined *)
            FUN_14018b280(0x28,0,param_3,param_4,
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))))
            ;
    param_1[0xbd] = 0;
    param_1[0xbc] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xbc] + 8) = 0;
    *(undefined8 *)(param_1[0xbc] + 0x10) = param_1[0xbc];
    *(undefined8 *)(param_1[0xbc] + 0x18) = param_1[0xbc];
    *(undefined (*) [16])(param_1 + 0xc0) = CONCAT412(uVar8,CONCAT48(uVar7,CONCAT44(uVar6,uVar5)));
    puVar4 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xc6] = 0;
    param_1[0xc5] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xc5] + 8) = 0;
    *(undefined8 *)(param_1[0xc5] + 0x10) = param_1[0xc5];
    *(undefined8 *)(param_1[0xc5] + 0x18) = param_1[0xc5];
    param_1[200] = 0;
    param_1[0xc9] = 0;
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    param_1[0xcc] = 0;
    param_1[0xcd] = 0;
    return param_1;
}



void FUN_140619bb0(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    uint local_res8 [2];

    if (param_1[0x88] != 0) {
        FUN_140195d70(param_1 + 0x86);
    }
    if (param_1[0x91] != 0) {
        FUN_140195d70(param_1 + 0x8f);
    }
    if (param_1[0x9a] != 0) {
        FUN_140195d70(param_1 + 0x98);
    }
    if (param_1[0xa3] != 0) {
        FUN_140195d70(param_1 + 0xa1);
    }
    if (param_1[0xac] != 0) {
        FUN_140195d70(param_1 + 0xaa);
    }
    plVar1 = (longlong *)param_1[0x10];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x150))(plVar1,0);
        if ((longlong *)param_1[0x10] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x10] + 8))();
            param_1[0x10] = 0;
        }
    }
    if ((longlong *)param_1[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[9] + 0x3a8))();
        if ((longlong *)param_1[9] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[9] + 8))();
            param_1[9] = 0;
        }
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 0x3a8))();
        if ((longlong *)param_1[0xb] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0xb] + 8))();
            param_1[0xb] = 0;
        }
    }
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 0x3a8))();
        if ((longlong *)param_1[10] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[10] + 8))();
            param_1[10] = 0;
        }
    }
    if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcb] + 8))();
        param_1[0xcb] = 0;
    }
    if ((longlong *)param_1[0xcc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcc] + 8))();
        param_1[0xcc] = 0;
    }
    if ((longlong *)param_1[0xcd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcd] + 8))();
        param_1[0xcd] = 0;
    }
    lVar2 = param_1[0xb8];
    while (lVar2 != 0) {
        lVar2 = param_1[0xb8];
        if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        lVar2 = param_1[0xb8];
    }
    lVar2 = param_1[0x11];
    while (lVar2 != 0) {
        lVar2 = param_1[0x11];
        if (lVar2 != 0) {
            FUN_140625c30(lVar2);
            FUN_14018b900(lVar2,0);
        }
        lVar2 = param_1[0x11];
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_14061a140(param_1);
    if (((*(uint *)(param_1 + 0x7b) & 0xc0000000) == 0x40000000) &&
        (*(longlong *)(DAT_140c65898 + 0x7198) != 0)) {
        local_res8[0] = *(uint *)(param_1 + 0x7b);
        FUN_140003460(*(longlong *)(DAT_140c65898 + 0x7198) + 0x2f8,local_res8);
    }
    if ((longlong *)param_1[0xcd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcd] + 8))();
    }
    if ((longlong *)param_1[0xcc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcc] + 8))();
    }
    if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcb] + 8))();
    }
    lVar2 = param_1[0xca];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0xc9];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[200];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_140008410(param_1 + 0xc4);
    FUN_14018b900(param_1[0xc5],0);
    FUN_140008410(param_1 + 0xbb);
    FUN_14018b900(param_1[0xbc],0);
    if (param_1[0xb8] != 0) {
        FUN_1401a4a00(param_1 + 0xb8);
    }
    FUN_140195d70(param_1 + 0xaa);
    *(undefined4 *)(param_1 + 0xaa) = 0;
    if ((longlong *)param_1[0xac] != (longlong *)0x0) {
        *(longlong *)param_1[0xac] = param_1[0xad];
    }
    if ((longlong *)param_1[0xad] != (longlong *)0x0) {
        *(longlong *)param_1[0xad] = param_1[0xac];
    }
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    FUN_140195d70(param_1 + 0xa1);
    *(undefined4 *)(param_1 + 0xa1) = 0;
    if ((longlong *)param_1[0xa3] != (longlong *)0x0) {
        *(longlong *)param_1[0xa3] = param_1[0xa4];
    }
    if ((longlong *)param_1[0xa4] != (longlong *)0x0) {
        *(longlong *)param_1[0xa4] = param_1[0xa3];
    }
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    FUN_140195d70(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((longlong *)param_1[0x9a] != (longlong *)0x0) {
        *(longlong *)param_1[0x9a] = param_1[0x9b];
    }
    if ((longlong *)param_1[0x9b] != (longlong *)0x0) {
        *(longlong *)param_1[0x9b] = param_1[0x9a];
    }
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    FUN_140195d70(param_1 + 0x8f);
    *(undefined4 *)(param_1 + 0x8f) = 0;
    if ((longlong *)param_1[0x91] != (longlong *)0x0) {
        *(longlong *)param_1[0x91] = param_1[0x92];
    }
    if ((longlong *)param_1[0x92] != (longlong *)0x0) {
        *(longlong *)param_1[0x92] = param_1[0x91];
    }
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    FUN_140195d70(param_1 + 0x86);
    *(undefined4 *)(param_1 + 0x86) = 0;
    if ((longlong *)param_1[0x88] != (longlong *)0x0) {
        *(longlong *)param_1[0x88] = param_1[0x89];
    }
    if ((longlong *)param_1[0x89] != (longlong *)0x0) {
        *(longlong *)param_1[0x89] = param_1[0x88];
    }
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    if (param_1[0x11] != 0) {
        FUN_1401a4a00(param_1 + 0x11);
    }
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10] + 8))();
    }
    if ((longlong *)param_1[0xf] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf] + 8))();
    }
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe] + 8))();
    }
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd] + 8))();
    }
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 8))();
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
    }
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
    }
    if ((longlong *)param_1[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[9] + 8))();
    }
    if ((longlong *)param_1[8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[8] + 8))();
    }
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
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
    if ((longlong *)*param_1 != (longlong *)0x0) {
        *(longlong *)*param_1 = param_1[1];
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = *param_1;
    }
    param_1[1] = 0;
    *param_1 = 0;
    return;
}



void FUN_14061a140(longlong *param_1,int param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    undefined auStack312 [32];
    longlong *local_118;
    undefined8 local_110;
    undefined *local_108;
    undefined local_f8 [16];
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8 [64];
    undefined8 local_78;
    undefined *puStack112;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined8 local_38;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    plVar3 = (longlong *)param_1[10];
    if ((plVar3 != (longlong *)0x0) &&
        ((**(code **)(*plVar3 + 0x3b8))(plVar3,&local_118), local_118 != (longlong *)0x0)) {
        (**(code **)(*local_118 + 0x378))(local_118,*(undefined4 *)(param_1 + 0x76),local_b8,0);
        local_110 = (**(code **)(*(longlong *)param_1[10] + 0x50))();
        local_108 = local_b8;
        local_78 = local_110;
        puStack112 = local_108;
        FUN_1401afb10(&local_78,local_f8);
        (**(code **)(*(longlong *)param_1[0x10] + 0x150))((longlong *)param_1[0x10],param_1[10]);
        local_38 = 0;
        local_68 = local_e8;
        uStack100 = uStack228;
        uStack96 = uStack224;
        uStack92 = uStack220;
        local_58 = local_d8;
        uStack84 = uStack212;
        uStack80 = uStack208;
        uStack76 = uStack204;
        local_48 = local_c8;
        uStack68 = uStack196;
        uStack64 = uStack192;
        uStack60 = uStack188;
        (**(code **)(*(longlong *)param_1[0x10] + 0x140))((longlong *)param_1[0x10],&local_78);
        if (local_118 != (longlong *)0x0) {
            (**(code **)(*local_118 + 8))();
            local_118 = (longlong *)0x0;
        }
        (**(code **)(*(longlong *)param_1[10] + 0x3a8))();
    }
    plVar3 = (longlong *)param_1[6];
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x288))(plVar3,0,0);
        plVar3 = (longlong *)param_1[6];
        if (param_2 == 0) {
            *(int *)((longlong)param_1 + 0x264) = *(int *)((longlong)param_1 + 0x264) + 1;
            (**(code **)(*plVar3 + 0x460))(plVar3,&LAB_140622d70,param_1);
            (**(code **)(*(longlong *)param_1[6] + 0x458))();
            (**(code **)(*(longlong *)param_1[6] + 0x2d8))((longlong *)param_1[6],0x3d);
            (**(code **)(*(longlong *)param_1[6] + 0x2d8))((longlong *)param_1[6],0x3e);
            (**(code **)(*(longlong *)param_1[6] + 0x2d8))((longlong *)param_1[6],0x3f);
            (**(code **)(*(longlong *)param_1[6] + 0x2d8))((longlong *)param_1[6],0x40);
        }
        else {
            (**(code **)(*plVar3 + 0x460))(plVar3,0,0);
            (**(code **)(*(longlong *)param_1[6] + 0x3a8))();
            if ((longlong *)param_1[0xe] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0xe] + 8))();
                param_1[0xe] = 0;
            }
            if ((longlong *)param_1[6] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[6] + 8))();
                param_1[6] = 0;
            }
        }
    }
    plVar3 = (longlong *)param_1[7];
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x288))(plVar3,0,0);
        plVar3 = (longlong *)param_1[7];
        if (param_2 == 0) {
            *(int *)((longlong)param_1 + 0x264) = *(int *)((longlong)param_1 + 0x264) + 1;
            (**(code **)(*plVar3 + 0x460))(plVar3,&LAB_140622db0,param_1);
            (**(code **)(*(longlong *)param_1[7] + 0x458))();
            (**(code **)(*(longlong *)param_1[7] + 0x2d8))((longlong *)param_1[7],0x3d);
            (**(code **)(*(longlong *)param_1[7] + 0x2d8))((longlong *)param_1[7],0x3e);
            (**(code **)(*(longlong *)param_1[7] + 0x2d8))((longlong *)param_1[7],0x3f);
            (**(code **)(*(longlong *)param_1[7] + 0x2d8))((longlong *)param_1[7],0x40);
        }
        else {
            (**(code **)(*plVar3 + 0x460))(plVar3,0,0);
            (**(code **)(*(longlong *)param_1[7] + 0x3a8))();
            if ((longlong *)param_1[8] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[8] + 0x3a8))();
            }
            if ((longlong *)param_1[7] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[7] + 8))();
                param_1[7] = 0;
            }
            if ((longlong *)param_1[8] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[8] + 8))();
                param_1[8] = 0;
            }
            if ((longlong *)param_1[0xf] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0xf] + 8))();
                param_1[0xf] = 0;
            }
        }
    }
    plVar3 = (longlong *)param_1[0xc];
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x288))(plVar3,0,0);
        plVar3 = (longlong *)param_1[0xc];
        if (param_2 == 0) {
            *(int *)((longlong)param_1 + 0x264) = *(int *)((longlong)param_1 + 0x264) + 1;
            (**(code **)(*plVar3 + 0x460))(plVar3,&LAB_140622df0,param_1);
            (**(code **)(*(longlong *)param_1[0xc] + 0x458))();
            (**(code **)(*(longlong *)param_1[0xc] + 0x2d8))((longlong *)param_1[0xc],0x3d);
            (**(code **)(*(longlong *)param_1[0xc] + 0x2d8))((longlong *)param_1[0xc],0x3e);
            (**(code **)(*(longlong *)param_1[0xc] + 0x2d8))((longlong *)param_1[0xc],0x3f);
            (**(code **)(*(longlong *)param_1[0xc] + 0x2d8))((longlong *)param_1[0xc],0x40);
        }
        else {
            (**(code **)(*plVar3 + 0x460))(plVar3,0,0);
            (**(code **)(*(longlong *)param_1[0xc] + 0x3a8))();
            if ((longlong *)param_1[0xc] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0xc] + 8))();
                param_1[0xc] = 0;
            }
        }
    }
    if (((longlong *)param_1[0xd] != (longlong *)0x0) && (param_2 != 0)) {
        (**(code **)(*(longlong *)param_1[0xd] + 0x3a8))();
        if ((longlong *)param_1[0xd] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0xd] + 8))();
            param_1[0xd] = 0;
        }
    }
    pplVar1 = (longlong **)param_1[0x11];
    while (pplVar2 = pplVar1, pplVar2 != (longlong **)0x0) {
        pplVar1 = (longlong **)pplVar2[3];
        if (param_2 == 0) {
            plVar3 = (longlong *)(**(code **)(**pplVar2 + 0x148))();
            if (plVar3 != (longlong *)0x0) {
                *(int *)((longlong)param_1 + 0x264) = *(int *)((longlong)param_1 + 0x264) + 1;
                pplVar2[1] = param_1;
                (**(code **)(*plVar3 + 0x288))(plVar3,0,0);
                (**(code **)(*plVar3 + 0x460))(plVar3);
                (**(code **)(*plVar3 + 0x458))(plVar3);
            }
        }
        else {
            FUN_140625c30(pplVar2);
            FUN_14018b900(pplVar2);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack312);
    return;
}



void FUN_14061a600(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x38);
    if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x2a4) == 0)) {
        (**(code **)(*plVar1 + 0x288))(plVar1,0,0);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x460))(*(longlong **)(param_1 + 0x38),0,0);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3a8))();
        if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x3a8))();
        }
        if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
            *(undefined8 *)(param_1 + 0x38) = 0;
        }
        if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
            *(undefined8 *)(param_1 + 0x40) = 0;
        }
        if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x78) + 8))();
            *(undefined8 *)(param_1 + 0x78) = 0;
        }
    }
    return;
}



void FUN_14061a6b0(ulonglong param_1)

{
    int iVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    longlong *local_res8;
    undefined4 local_res10;
    undefined4 local_res14;
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    ulonglong local_38;
    ulonglong local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined8 local_10;

    local_58 = *(float *)(param_1 + 0x150);
    fStack84 = *(float *)(param_1 + 0x154);
    fStack80 = *(float *)(param_1 + 0x158);
    fStack76 = *(float *)(param_1 + 0x15c);
    local_48 = *(float *)(param_1 + 0x160);
    fStack68 = *(float *)(param_1 + 0x164);
    fStack64 = *(float *)(param_1 + 0x168);
    fStack60 = *(float *)(param_1 + 0x16c);
    local_res14 = 0x3f800000;
    local_res8 = (longlong *)0x0;
    local_38 = 0x45;
    iVar2 = 0;
    local_30 = local_30 & 0xffffffff00000000;
    local_28 = (code *)0x0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_res10 = 0;
    iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1a8))
            (*(longlong **)(DAT_140c65898 + 0x7248),&local_58,&local_48,&local_res10,
             &local_res8,&local_38);
    if (iVar1 != 0) {
        fVar3 = (float)(**(code **)(*local_res8 + 0x10))();
        fVar4 = (local_48 - local_58) * fVar3 + local_58;
        fVar5 = (fStack68 - fStack84) * fVar3 + fStack84;
        *(undefined (*) [16])(param_1 + 0x1f0) =
                CONCAT412((fStack60 - fStack76) * fVar3 + fStack76,
                          CONCAT48((fStack64 - fStack80) * fVar3 + fStack80,CONCAT44(fVar5,fVar4)));
        fVar4 = fVar4 - local_58;
        fVar5 = fVar5 - fStack84;
        fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + 0.0);
        if (fVar3 < 1e-05) {
            fVar3 = 0.0;
        }
        iVar1 = iVar2;
        if (*(uint *)(param_1 + 0x3d0) != 0) {
            iVar1 = (int)(longlong)((fVar3 / (float)(ulonglong)*(uint *)(param_1 + 0x3d0)) * 1000.0);
        }
        if (*(int *)(param_1 + 0x2a0) == 0) {
            iVar2 = (int)(longlong)*(float *)(param_1 + 0x39c);
        }
        if (iVar1 + iVar2 != 0) {
            local_28 = FUN_140622fd0;
            local_38 = local_38 & 0xffffffff00000000;
            local_20 = 0;
            local_30 = param_1;
            FUN_140195960(param_1 + 0x550,iVar1 + iVar2,&local_38,4);
        }
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14061a840(longlong param_1,longlong param_2)

{
    short sVar1;
    undefined4 uVar2;
    longlong *plVar3;
    short *psVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    uint6 uVar9;
    uint uVar10;
    int iVar11;
    longlong lVar12;
    longlong lVar13;
    float *pfVar14;
    longlong *plVar15;
    undefined8 uVar16;
    undefined4 *puVar17;
    undefined8 *puVar18;
    undefined8 *puVar19;
    undefined8 *puVar20;
    undefined4 *puVar21;
    ulonglong uVar22;
    undefined4 extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    undefined extraout_XMM0 [16];
    undefined auVar23 [16];
    float fVar24;
    ushort uVar29;
    float fVar28;
    undefined auVar25 [12];
    float fVar30;
    undefined auVar26 [16];
    float fVar31;
    float fVar32;
    float fVar33;
    undefined auStack472 [32];
    undefined4 local_1b8;
    undefined4 local_1b0;
    longlong local_1a8;
    undefined4 local_1a0;
    ulonglong local_198;
    longlong local_190;
    code *local_188;
    undefined8 local_180;
    undefined local_178 [16];
    undefined local_168 [16];
    code *local_158;
    float local_148;
    float local_144;
    float local_140;
    float local_138;
    float fStack308;
    float fStack304;
    float fStack300;
    undefined local_128 [16];
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    float *local_f8;
    float *pfStack240;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined8 local_b8;
    ulonglong local_a8;
    undefined auVar27 [16];

    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    FUN_14061b670(param_1 + 0x2d0);
    lVar12 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 900));
    lVar13 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388));
    if (lVar12 != 0) {
        *(undefined (*) [16])(param_1 + 0x240) = extraout_XMM0 & (undefined  [16])0x0;
    }
    if ((*(byte *)(param_1 + 0x380) & 0x80) != 0) {
        if (lVar12 == 0) {
            if (lVar13 != 0) {
                uVar2 = *(undefined4 *)(lVar13 + 0x1744);
                uVar6 = *(undefined4 *)(lVar13 + 0x1748);
                uVar7 = *(undefined4 *)(lVar13 + 0x174c);
                *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar13 + 0x1740);
                *(undefined4 *)(param_1 + 0x214) = uVar2;
                *(undefined4 *)(param_1 + 0x218) = uVar6;
                *(undefined4 *)(param_1 + 0x21c) = uVar7;
                fVar33 = *(float *)(lVar13 + 0x1740);
                fVar24 = *(float *)(lVar13 + 0x1744);
                fVar28 = *(float *)(lVar13 + 0x174c);
                fVar30 = *(float *)(lVar13 + 0x11b0);
                fVar31 = *(float *)(lVar13 + 0x11b4);
                fVar32 = *(float *)(lVar13 + 0x11b8);
                fVar5 = *(float *)(lVar13 + 0x11bc);
                auVar23 = ZEXT416((uint)(0.0 - (fVar24 * 0.0 - fVar31 * *(float *)(lVar13 + 0x1748)))) &
                          (undefined  [16])0xffffffffffffffff;
                *(int *)(param_1 + 0x1e0) = SUB164(auVar23,0);
                *(float *)(param_1 + 0x1e4) = 0.0 - (fVar30 * 0.0 - fVar32 * fVar33);
                *(float *)(param_1 + 0x1e8) =
                        SUB164(auVar23 >> 0x40,0) - (fVar31 * fVar33 - fVar30 * fVar24);
                *(float *)(param_1 + 0x1ec) = SUB164(auVar23 >> 0x60,0) - (fVar5 * fVar28 - fVar5 * fVar28);
                goto LAB_14061a959;
            }
        }
        else {
            uVar2 = *(undefined4 *)(lVar12 + 0x1744);
            uVar6 = *(undefined4 *)(lVar12 + 0x1748);
            uVar7 = *(undefined4 *)(lVar12 + 0x174c);
            *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(lVar12 + 0x1740);
            *(undefined4 *)(param_1 + 0x214) = uVar2;
            *(undefined4 *)(param_1 + 0x218) = uVar6;
            *(undefined4 *)(param_1 + 0x21c) = uVar7;
            pfVar14 = (float *)FUN_1405b4520(lVar12,&local_148);
            *(undefined (*) [16])(param_1 + 0x1e0) =
                    CONCAT412(pfVar14[3] * *(float *)(lVar12 + 0x174c) -
                              pfVar14[3] * *(float *)(lVar12 + 0x174c),
                              CONCAT48(pfVar14[1] * *(float *)(lVar12 + 0x1740) -
                                       *pfVar14 * *(float *)(lVar12 + 0x1744),
                                       CONCAT44(*pfVar14 * 0.0 - pfVar14[2] * *(float *)(lVar12 + 0x1740),
                                                *(float *)(lVar12 + 0x1744) * 0.0 -
                                                pfVar14[1] * *(float *)(lVar12 + 0x1748))));
            LAB_14061a959:
            FUN_1408fd190();
            *(undefined4 *)(param_1 + 0x200) = extraout_XMM0_Da;
        }
        fVar33 = *(float *)(param_1 + 0x1e0);
        fVar24 = *(float *)(param_1 + 0x1e4);
        fVar28 = *(float *)(param_1 + 0x1e8);
        fVar30 = *(float *)(param_1 + 0x1ec);
        fVar31 = fVar24 * fVar24;
        fVar32 = fVar33 * fVar33 + fVar31 + 0.0;
        auVar23 = rsqrtss(CONCAT412(fVar31,CONCAT48(fVar31,CONCAT44(fVar31,fVar31))),
                          CONCAT412(fVar30 * fVar30,CONCAT48(fVar28 * fVar28,CONCAT44(fVar31,fVar32))));
        fVar31 = SUB164(auVar23,0);
        fVar31 = (3.0 - fVar32 * fVar31 * fVar31) * 0.5 * fVar31;
        if (fVar31 <= 0.0) {
            fVar31 = 0.0;
        }
        *(undefined (*) [16])(param_1 + 0x1e0) =
                CONCAT412(fVar31 * fVar30,
                          CONCAT48(fVar31 * fVar28,CONCAT44(fVar31 * fVar24,fVar31 * fVar33)));
    }
    puVar17 = (undefined4 *)0x0;
    uVar10 = 0;
    if (*(int *)(param_1 + 0x3ec) != 0) {
        lVar12 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 900));
        if (((lVar12 == 0) || (plVar3 = *(longlong **)(lVar12 + 0xcc0), plVar3 == (longlong *)0x0)) ||
            (plVar15 = (longlong *)
                    (**(code **)(*plVar3 + 0x70))
                    (plVar3,*(undefined4 *)(param_1 + 0x3ec),
                     *(undefined4 *)(param_1 + 0x3f0)), plVar15 == (longlong *)0x0))
            goto LAB_14061b648;
        uVar16 = (**(code **)(*plVar15 + 0x30))(plVar15);
        *(undefined8 *)(param_1 + 0x340) = uVar16;
        uVar10 = (**(code **)(*plVar3 + 0x98))(plVar3);
        puVar17 = (undefined4 *)(**(code **)(*plVar3 + 0x90))(plVar3);
    }
    if (*(int *)(param_1 + 0x3c8) == 1) {
        uVar16 = *(undefined8 *)(param_1 + 0x340);
        *(undefined4 *)(param_1 + 0x3c8) = 2;
        *(undefined8 *)(param_1 + 0x340) = 0;
        *(undefined8 *)(param_1 + 0x370) = uVar16;
    }
    psVar4 = *(short **)(param_1 + 0x340);
    if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x30,0);
        if (iVar11 < 0) goto LAB_14061b648;
        plVar3 = *(longlong **)(param_1 + 0x30);
        if (plVar3 != (longlong *)0x0) {
            uVar2 = *(undefined4 *)(param_1 + 0x420);
            uVar16 = CONCAT44(uVar2,uVar2);
            auVar25 = CONCAT48(uVar2,uVar16);
            auVar27 = CONCAT97((unkuint9)
                                       SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                                 CONCAT213(SUB152(CONCAT114((char)((uint)uVar2 >>
                                                                                                                                               0x18),
                                                                                                                            ZEXT1314(SUB1613(
                                                                                                                                    CONCAT412(uVar2,auVar25),0))) >> 0x68,0),
                                                                                                           CONCAT112((char)((uint)uVar2 >> 0x10),auVar25)) >>
                                                                                                                                                           0x60,0),auVar25) >> 0x58,0),
                                                                                         CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                   SUB1210(auVar25,0))) >> 0x50,0),
                                                                        (unkuint10)SUB129(auVar25,0)) >> 0x48,0),
                                                       CONCAT18((char)uVar2,uVar16)) >> 0x40,0) << 8,
                               ((uint7)uVar16 >> 0x18) << 0x30);
            auVar26 = CONCAT115(ZEXT1011(SUB1610(auVar27 >> 0x30,0)) << 8,((uint5)uVar16 >> 0x10) << 0x20)
                    ;
            auVar23 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar26 >> 0x20,0)) << 8,
                                                  ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),(short)uVar2) &
                      (undefined  [16])0xffffffffffff00ff;
            uVar29 = SUB162(auVar27 >> 0x30,0);
            uVar9 = CONCAT42(SUB144(CONCAT212(uVar29,ZEXT1012(SUB1610(auVar23,0))) >> 0x50,0),
                             SUB162(auVar26 >> 0x20,0));
            local_178 = CONCAT412((float)(uint)uVar29 * 0.003921569,
                                  CONCAT48((float)(SUB164(auVar23,0) & 0xffff) * 0.003921569,
                                           CONCAT44((float)SUB164(CONCAT106((unkuint10)uVar9 << 0x10,
                                                                            (SUB166(auVar23,0) >> 0x10) <<
                                                                                                        0x20) >> 0x20,0) * 0.003921569
                                                   ,(float)(int)uVar9 * 0.003921569)));
            (**(code **)(*plVar3 + 0x470))(plVar3,local_178);
            if (uVar10 != 0) {
                uVar22 = (ulonglong)uVar10;
                puVar21 = puVar17;
                do {
                    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))
                            (*(longlong **)(param_1 + 0x30),*puVar21,1);
                    puVar21 = puVar21 + 1;
                    uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
            }
        }
    }
    psVar4 = *(short **)(param_1 + 0x370);
    if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x38,0);
        if (iVar11 < 0) goto LAB_14061b648;
        plVar3 = *(longlong **)(param_1 + 0x38);
        if (plVar3 != (longlong *)0x0) {
            uVar2 = *(undefined4 *)(param_1 + 0x41c);
            uVar16 = CONCAT44(uVar2,uVar2);
            auVar25 = CONCAT48(uVar2,uVar16);
            auVar27 = CONCAT97((unkuint9)
                                       SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                                 CONCAT213(SUB152(CONCAT114((char)((uint)uVar2 >>
                                                                                                                                               0x18),
                                                                                                                            ZEXT1314(SUB1613(
                                                                                                                                    CONCAT412(uVar2,auVar25),0))) >> 0x68,0),
                                                                                                           CONCAT112((char)((uint)uVar2 >> 0x10),auVar25)) >>
                                                                                                                                                           0x60,0),auVar25) >> 0x58,0),
                                                                                         CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                   SUB1210(auVar25,0))) >> 0x50,0),
                                                                        (unkuint10)SUB129(auVar25,0)) >> 0x48,0),
                                                       CONCAT18((char)uVar2,uVar16)) >> 0x40,0) << 8,
                               ((uint7)uVar16 >> 0x18) << 0x30);
            auVar26 = CONCAT115(ZEXT1011(SUB1610(auVar27 >> 0x30,0)) << 8,((uint5)uVar16 >> 0x10) << 0x20)
                    ;
            auVar23 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar26 >> 0x20,0)) << 8,
                                                  ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),(short)uVar2) &
                      (undefined  [16])0xffffffffffff00ff;
            uVar29 = SUB162(auVar27 >> 0x30,0);
            uVar9 = CONCAT42(SUB144(CONCAT212(uVar29,ZEXT1012(SUB1610(auVar23,0))) >> 0x50,0),
                             SUB162(auVar26 >> 0x20,0));
            local_168 = CONCAT412((float)(uint)uVar29 * 0.003921569,
                                  CONCAT48((float)(SUB164(auVar23,0) & 0xffff) * 0.003921569,
                                           CONCAT44((float)SUB164(CONCAT106((unkuint10)uVar9 << 0x10,
                                                                            (SUB166(auVar23,0) >> 0x10) <<
                                                                                                        0x20) >> 0x20,0) * 0.003921569
                                                   ,(float)(int)uVar9 * 0.003921569)));
            (**(code **)(*plVar3 + 0x470))(plVar3,local_168);
        }
        if (((uVar10 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) && (uVar10 != 0)) {
            uVar22 = (ulonglong)uVar10;
            do {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2d8))
                        (*(longlong **)(param_1 + 0x38),*puVar17,1);
                puVar17 = puVar17 + 1;
                uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
        }
        iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                (*(longlong **)(DAT_140c65898 + 0x7250),L"Art\\Dev\\BeamScale.m3",
                 param_1 + 0x40,0);
        if (iVar11 < 0) goto LAB_14061b648;
        local_198 = 0x96;
        local_190 = 0x3f800000;
        local_188 = (code *)0x0;
        local_180 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x248))
                (*(longlong **)(param_1 + 0x40),0,&local_198);
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x380))
                (*(longlong **)(param_1 + 0x40),9,*(undefined8 *)(param_1 + 0x38));
    }
    puVar19 = (undefined8 *)0x0;
    psVar4 = *(short **)(param_1 + 0x350);
    if (((((psVar4 == (short *)0x0) || (*psVar4 == 0)) ||
          (iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                  (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x48,0),
                  -1 < iVar11)) &&
         (((psVar4 = *(short **)(param_1 + 0x358), psVar4 == (short *)0x0 || (*psVar4 == 0)) ||
           (iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                   (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x50,0),
                   -1 < iVar11)))) &&
        (((psVar4 = *(short **)(param_1 + 0x360), psVar4 == (short *)0x0 || (*psVar4 == 0)) ||
          (iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                  (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x58,0),
                  -1 < iVar11)))) {
        psVar4 = *(short **)(param_1 + 0x348);
        if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
            iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x60,0);
            if (iVar11 < 0) goto LAB_14061b648;
            local_198 = 0x96;
            local_190 = 0x3f800000;
            local_188 = (code *)0x0;
            local_180 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))
                    (*(longlong **)(param_1 + 0x60),0,&local_198);
        }
        psVar4 = *(short **)(param_1 + 0x368);
        if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
            iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),psVar4,param_1 + 0x68,0);
            if (iVar11 < 0) goto LAB_14061b648;
            local_198 = 0x96;
            local_190 = 0x3f800000;
            local_188 = (code *)0x0;
            local_180 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x68) + 0x248))
                    (*(longlong **)(param_1 + 0x68),0,&local_198);
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x380))
                    (*(longlong **)(param_1 + 0x30),0xa8,*(undefined8 *)(param_1 + 0x68));
        }
        fVar33 = 0.0;
        if ((*(float *)(param_1 + 0x400) == 0.0) && (*(float *)(param_1 + 0x404) == 0.0)) {
            *(undefined4 *)(param_1 + 0x404) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x400) = 0x3f800000;
        }
        *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x400);
        pfStack240 = (float *)(param_1 + 0x90);
        FUN_1408fe3d0();
        fVar32 = extraout_XMM0_Da_00;
        FUN_1408fc950();
        fVar31 = extraout_XMM0_Da_01;
        FUN_1408fe3d0();
        fVar30 = extraout_XMM0_Da_02;
        FUN_1408fc950();
        fVar28 = extraout_XMM0_Da_03;
        FUN_1408fe3d0();
        fVar24 = extraout_XMM0_Da_04;
        FUN_1408fc950();
        *(undefined4 *)(param_1 + 0x9c) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *(uint *)(param_1 + 0xb4) = (uint)fVar32 ^ 0x80000000;
        *pfStack240 = fVar30 * fVar32 * fVar24 + extraout_XMM0_Da_05 * fVar28;
        *(float *)(param_1 + 0x94) = fVar24 * fVar31;
        *(float *)(param_1 + 0x98) = fVar28 * fVar32 * fVar24 - extraout_XMM0_Da_05 * fVar30;
        *(float *)(param_1 + 0xa4) = extraout_XMM0_Da_05 * fVar31;
        *(float *)(param_1 + 0xa0) = fVar30 * fVar32 * extraout_XMM0_Da_05 - fVar24 * fVar28;
        *(float *)(param_1 + 0xa8) = fVar28 * fVar32 * extraout_XMM0_Da_05 + fVar24 * fVar30;
        *(float *)(param_1 + 0xb0) = fVar30 * fVar31;
        *(float *)(param_1 + 0xb8) = fVar28 * fVar31;
        uVar7 = uRam0000000140c7844c;
        uVar6 = uRam0000000140c78448;
        uVar2 = uRam0000000140c78444;
        *(undefined4 *)(param_1 + 0xc0) = _DAT_140c78440;
        *(undefined4 *)(param_1 + 0xc4) = uVar2;
        *(undefined4 *)(param_1 + 200) = uVar6;
        *(undefined4 *)(param_1 + 0xcc) = uVar7;
        local_148 = *(float *)(param_1 + 0x400);
        local_138 = _DAT_140c78410 * local_148;
        fStack308 = fRam0000000140c78414 * local_148;
        fStack304 = fRam0000000140c78418 * local_148;
        fStack300 = fRam0000000140c7841c * local_148;
        local_128 = CONCAT412(fRam0000000140c7842c * local_148,
                              CONCAT48(fRam0000000140c78428 * local_148,
                                       CONCAT44(fRam0000000140c78424 * local_148,
                                                _DAT_140c78420 * local_148)));
        local_118 = _DAT_140c78430 * local_148;
        fStack276 = fRam0000000140c78434 * local_148;
        fStack272 = fRam0000000140c78438 * local_148;
        fStack268 = fRam0000000140c7843c * local_148;
        local_f8 = &local_138;
        local_108 = _DAT_140c78440;
        uStack260 = uRam0000000140c78444;
        uStack256 = uRam0000000140c78448;
        uStack252 = uRam0000000140c7844c;
        local_178 = CONCAT88(pfStack240,local_f8);
        local_144 = local_148;
        local_140 = local_148;
        FUN_1401afb10(&local_f8);
        if ((*(longlong *)(param_1 + 0x30) != 0) || (*(longlong *)(param_1 + 0x38) != 0)) {
            local_1a0 = 0;
            local_b8 = 0;
            local_f8 = (float *)CONCAT44(uRam0000000140c78394,_DAT_140c78390);
            pfStack240 = (float *)CONCAT44(uRam0000000140c7839c,uRam0000000140c78398);
            local_e8 = _DAT_140c783a0;
            uStack228 = uRam0000000140c783a4;
            uStack224 = uRam0000000140c783a8;
            uStack220 = uRam0000000140c783ac;
            local_1a8 = param_1 + 0x80;
            local_d8 = _DAT_140c783b0;
            uStack212 = uRam0000000140c783b4;
            uStack208 = uRam0000000140c783b8;
            uStack204 = uRam0000000140c783bc;
            local_1b0 = 0;
            local_1b8 = 1;
            local_c8 = _DAT_140c783c0;
            uStack196 = uRam0000000140c783c4;
            uStack192 = uRam0000000140c783c8;
            uStack188 = uRam0000000140c783cc;
            iVar11 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))();
            if (iVar11 < 0) {
                local_168 = ZEXT816(0x140b5e648);
                local_158 = (code *)TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,local_168);
                local_198 = local_168._0_8_;
                local_178 = CONCAT88(local_178._8_8_,0x141e22030);
                local_188 = local_158;
                local_190 = local_168._8_8_;
                iVar11 = FUN_1401971e0(&DAT_140c8afec,5,local_178,&local_198);
                local_168 = CONCAT88(local_168._8_8_,0x140b5e648);
                TlsSetValue(DAT_140c63720,local_158);
                if (iVar11 != 0) {
                    DebugBreak();
                }
            }
            else {
                *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x2e0);
                *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x2e4);
                *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x2e8);
                *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x2ec);
                *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x2f0);
                *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x2f4);
                *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x2f8);
                *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x2fc);
                *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x300);
                *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x304);
                *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x308);
                *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x30c);
                *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x310);
                *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x314);
                *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x318);
                *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x31c);
                FUN_140622800(param_1);
                *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x110);
                *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x114);
                *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x118);
                *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x11c);
                *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x120);
                *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x124);
                *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x128);
                *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 300);
                *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x130);
                *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x134);
                *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x138);
                *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x13c);
                uVar2 = *(undefined4 *)(param_1 + 0x140);
                uVar6 = *(undefined4 *)(param_1 + 0x144);
                uVar7 = *(undefined4 *)(param_1 + 0x148);
                uVar8 = *(undefined4 *)(param_1 + 0x14c);
                *(undefined4 *)(param_1 + 0x310) = uVar2;
                *(undefined4 *)(param_1 + 0x314) = uVar6;
                *(undefined4 *)(param_1 + 0x318) = uVar7;
                *(undefined4 *)(param_1 + 0x31c) = uVar8;
                *(undefined4 *)(param_1 + 400) = uVar2;
                *(undefined4 *)(param_1 + 0x194) = uVar6;
                *(undefined4 *)(param_1 + 0x198) = uVar7;
                *(undefined4 *)(param_1 + 0x19c) = uVar8;
                *(undefined4 *)(param_1 + 0x150) = uVar2;
                *(undefined4 *)(param_1 + 0x154) = uVar6;
                *(undefined4 *)(param_1 + 0x158) = uVar7;
                *(undefined4 *)(param_1 + 0x15c) = uVar8;
                fVar24 = *(float *)(param_1 + 800);
                fVar28 = *(float *)(param_1 + 0x324);
                fVar30 = *(float *)(param_1 + 0x328);
                *(float *)(param_1 + 0x1a0) = fVar24;
                *(float *)(param_1 + 0x1a4) = fVar28;
                *(float *)(param_1 + 0x1a8) = fVar30;
                *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x32c);
                *(float *)(param_1 + 0x160) = fVar24;
                *(float *)(param_1 + 0x164) = fVar28;
                *(float *)(param_1 + 0x168) = fVar30;
                *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x32c);
                if ((*(byte *)(param_1 + 0x380) & 8) != 0) {
                    fVar24 = *(float *)(param_1 + 0x150) - fVar24;
                    fVar28 = *(float *)(param_1 + 0x154) - fVar28;
                    fVar30 = *(float *)(param_1 + 0x158) - fVar30;
                    fVar24 = SQRT(fVar24 * fVar24 + fVar28 * fVar28 + fVar30 * fVar30);
                    if ((DAT_140dc3e48 & 1) == 0) {
                        DAT_140dc3e48 = DAT_140dc3e48 | 1;
                        lVar12 = FUN_140200220(0x4ab);
                        if (lVar12 == 0) {
                            DAT_140dc3e4c = 0.1;
                        }
                        else {
                            DAT_140dc3e4c = *(float *)(lVar12 + 0x18);
                        }
                    }
                    if ((((fVar33 < fVar24) && (fVar33 < (float)(ulonglong)*(uint *)(param_2 + 0x100))) &&
                         (fVar33 < DAT_140dc3e4c)) &&
                        (fVar24 < (float)(ulonglong)*(uint *)(param_2 + 0x100) * DAT_140dc3e4c)) {
                        fVar24 = fVar24 / DAT_140dc3e4c;
                        if (fVar24 <= 1.0) {
                            fVar24 = 1.0;
                        }
                        *(int *)(param_1 + 0x3d0) = (int)(longlong)fVar24;
                    }
                }
                if (*(int *)(param_1 + 0x3c8) == 2) {
                    fVar24 = *(float *)(param_1 + 0x3d4);
                    if (*(float *)(param_1 + 0x3d4) <= fVar33) {
                        fVar24 = fVar33;
                    }
                    *(float *)(param_1 + 0x3d4) = fVar24;
                    if (((float)(ulonglong)*(uint *)(param_1 + 0x3d0) == fVar33) && (fVar24 == fVar33)) {
                        *(undefined4 *)(param_1 + 0x3d4) = 0x40a00000;
                    }
                }
                if (*(int *)(param_1 + 0x3bc) == 0) {
                    FUN_140622e60(param_1);
                }
                else {
                    local_198 = local_198 & 0xffffffff00000000;
                    local_188 = FUN_140622e60;
                    local_180 = 0;
                    local_190 = param_1;
                    FUN_140195960(param_1 + 0x430,*(int *)(param_1 + 0x3bc),&local_198,4);
                }
                iVar11 = *(int *)(param_1 + 0x3c0);
                if (((iVar11 != -1) && ((*(uint *)(param_1 + 0x380) & 0x400) == 0)) &&
                    ((iVar11 != 0 &&
                      ((*(int *)(param_1 + 0x3c8) == 3 || (*(longlong *)(param_1 + 0x38) != 0)))))) {
                    local_198 = local_198 & 0xffffffff00000000;
                    local_188 = FUN_140623150;
                    local_180 = 0;
                    local_190 = param_1;
                    FUN_140195960(param_1 + 0x478,iVar11,&local_198,4);
                }
                psVar4 = *(short **)(param_1 + 0x340);
                if (psVar4 != (short *)0x0) {
                    lVar12 = *(longlong *)(param_1 + 0x640);
                    sVar1 = *psVar4;
                    puVar20 = puVar19;
                    while (sVar1 != 0) {
                        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
                        sVar1 = psVar4[(longlong)puVar20];
                    }
                    puVar18 = (undefined8 *)FUN_14018b280((longlong)puVar20 * 2 + 0x12,0);
                    if (puVar18 != (undefined8 *)0x0) {
                        *puVar18 = &PTR_LAB_140b55060;
                        puVar18[1] = puVar20;
                        puVar19 = puVar18;
                    }
                    puVar19 = puVar19 + 2;
                    FUN_1407db590(puVar19,psVar4);
                    *(undefined2 *)((longlong)puVar19 + (longlong)puVar20 * 2) = 0;
                    *(undefined8 **)(param_1 + 0x640) = puVar19;
                    if (lVar12 != 0) {
                        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                    }
                    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x640);
                }
                puVar19 = (undefined8 *)0x0;
                psVar4 = *(short **)(param_1 + 0x368);
                if (psVar4 != (short *)0x0) {
                    lVar12 = *(longlong *)(param_1 + 0x648);
                    sVar1 = *psVar4;
                    puVar20 = puVar19;
                    while (sVar1 != 0) {
                        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
                        sVar1 = psVar4[(longlong)puVar20];
                    }
                    puVar18 = (undefined8 *)FUN_14018b280((longlong)puVar20 * 2 + 0x12,0);
                    if (puVar18 != (undefined8 *)0x0) {
                        *puVar18 = &PTR_LAB_140b55060;
                        puVar18[1] = puVar20;
                        puVar19 = puVar18;
                    }
                    puVar19 = puVar19 + 2;
                    FUN_1407db590(puVar19,psVar4);
                    *(undefined2 *)((longlong)puVar19 + (longlong)puVar20 * 2) = 0;
                    *(undefined8 **)(param_1 + 0x648) = puVar19;
                    if (lVar12 != 0) {
                        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                    }
                    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x648);
                }
                puVar19 = (undefined8 *)0x0;
                psVar4 = *(short **)(param_1 + 0x370);
                if (psVar4 != (short *)0x0) {
                    lVar12 = *(longlong *)(param_1 + 0x650);
                    sVar1 = *psVar4;
                    puVar20 = puVar19;
                    while (sVar1 != 0) {
                        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
                        sVar1 = psVar4[(longlong)puVar20];
                    }
                    puVar18 = (undefined8 *)FUN_14018b280((longlong)puVar20 * 2 + 0x12,0);
                    if (puVar18 != (undefined8 *)0x0) {
                        puVar18[1] = puVar20;
                        *puVar18 = &PTR_LAB_140b55060;
                        puVar19 = puVar18;
                    }
                    puVar19 = puVar19 + 2;
                    FUN_1407db590(puVar19,psVar4);
                    *(undefined2 *)((longlong)puVar19 + (longlong)puVar20 * 2) = 0;
                    *(undefined8 **)(param_1 + 0x650) = puVar19;
                    if (lVar12 != 0) {
                        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                    }
                    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x650);
                }
                if ((*(int *)(param_1 + 0x40c) != 0) &&
                    ((*(longlong *)(param_1 + 0x658) != 0 ||
                      (iVar11 = (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,param_1 + 0x658),
                              -1 < iVar11)))) {
                    (**(code **)(**(longlong **)(param_1 + 0x658) + 0x20))
                            (*(longlong **)(param_1 + 0x658),param_1 + 0x660,
                             *(undefined4 *)(param_1 + 0x40c),*(undefined4 *)(param_1 + 0x410));
                }
                if (*(int *)(param_1 + 0x414) != 0) {
                    (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,param_1 + 0x668);
                }
            }
        }
    }
    LAB_14061b648:
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack472);
    return;
}



undefined4 * FUN_14061b670(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = *param_2;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    uVar1 = param_2[0x15];
    uVar2 = param_2[0x16];
    uVar3 = param_2[0x17];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar3;
    uVar1 = param_2[0x19];
    uVar2 = param_2[0x1a];
    uVar3 = param_2[0x1b];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = param_2[0x2d];
    param_1[0x2e] = param_2[0x2e];
    param_1[0x2f] = param_2[0x2f];
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = param_2[0x31];
    param_1[0x32] = param_2[0x32];
    param_1[0x33] = param_2[0x33];
    param_1[0x34] = param_2[0x34];
    param_1[0x35] = param_2[0x35];
    param_1[0x36] = param_2[0x36];
    param_1[0x37] = param_2[0x37];
    param_1[0x38] = param_2[0x38];
    param_1[0x39] = param_2[0x39];
    param_1[0x3a] = param_2[0x3a];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3c] = param_2[0x3c];
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x40] = param_2[0x40];
    param_1[0x41] = param_2[0x41];
    param_1[0x42] = param_2[0x42];
    param_1[0x43] = param_2[0x43];
    param_1[0x44] = param_2[0x44];
    param_1[0x45] = param_2[0x45];
    param_1[0x46] = param_2[0x46];
    param_1[0x47] = param_2[0x47];
    param_1[0x48] = param_2[0x48];
    param_1[0x49] = param_2[0x49];
    param_1[0x4a] = param_2[0x4a];
    param_1[0x4b] = param_2[0x4b];
    param_1[0x4c] = param_2[0x4c];
    param_1[0x4d] = param_2[0x4d];
    param_1[0x4e] = param_2[0x4e];
    param_1[0x4f] = param_2[0x4f];
    param_1[0x50] = param_2[0x50];
    param_1[0x51] = param_2[0x51];
    param_1[0x52] = param_2[0x52];
    param_1[0x53] = param_2[0x53];
    param_1[0x54] = param_2[0x54];
    return param_1;
}


/*
Unable to decompile 'FUN_14061b900'
Cause: Exception while decompiling 14061b900: process: timeout

*/


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_14061f3d0(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5
)

{
    undefined auVar1 [16];
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar4 = fRam0000000140c7839c;
    fVar3 = fRam0000000140c78398;
    fVar2 = fRam0000000140c78394;
    *param_2 = _DAT_140c78390;
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    param_2[3] = fVar4;
    fVar4 = fRam0000000140c783ac;
    fVar3 = fRam0000000140c783a8;
    fVar2 = fRam0000000140c783a4;
    param_2[4] = _DAT_140c783a0;
    param_2[5] = fVar2;
    param_2[6] = fVar3;
    param_2[7] = fVar4;
    fVar4 = fRam0000000140c783bc;
    fVar3 = fRam0000000140c783b8;
    fVar2 = fRam0000000140c783b4;
    param_2[8] = _DAT_140c783b0;
    param_2[9] = fVar2;
    param_2[10] = fVar3;
    param_2[0xb] = fVar4;
    fVar4 = fRam0000000140c783cc;
    fVar3 = fRam0000000140c783c8;
    fVar2 = fRam0000000140c783c4;
    param_2[0xc] = _DAT_140c783c0;
    param_2[0xd] = fVar2;
    param_2[0xe] = fVar3;
    param_2[0xf] = fVar4;
    fVar4 = *param_4 - *param_3;
    fVar5 = param_4[1] - param_3[1];
    fVar6 = param_4[2] - param_3[2];
    fVar2 = fVar5 * fVar5;
    fVar3 = fVar4 * fVar4 + fVar2 + fVar6 * fVar6;
    auVar1 = rsqrtss(CONCAT412(fVar2,CONCAT48(fVar2,CONCAT44(fVar2,fVar2))),
                     CONCAT412((param_4[3] - param_3[3]) * (param_4[3] - param_3[3]),
                               CONCAT48(fVar6 * fVar6,CONCAT44(fVar2,fVar3))));
    fVar2 = SUB164(auVar1,0);
    fVar2 = (3.0 - fVar3 * fVar2 * fVar2) * 0.5 * fVar2;
    if (fVar2 <= 0.0) {
        fVar2 = 0.0;
    }
    param_2[8] = fVar2 * fVar4;
    param_2[9] = fVar2 * fVar5;
    param_2[10] = fVar2 * fVar6;
    if ((1e-05 < (float)((uint)param_2[8] & 0x7fffffff)) ||
        (1e-05 < (float)((uint)param_2[10] & 0x7fffffff))) {
        fVar4 = param_2[10] * fRam0000000140c77874 - param_2[9] * fRam0000000140c77878;
        fVar5 = param_2[8] * 0.0 - param_2[10] * _DAT_140c77870;
        fVar6 = param_2[9] * _DAT_140c77870 - param_2[8] * fRam0000000140c77874;
        fVar7 = param_2[0xb] * fRam0000000140c7787c - param_2[0xb] * fRam0000000140c7787c;
        fVar2 = fVar5 * fVar5;
        fVar3 = fVar4 * fVar4 + fVar2 + fVar6 * fVar6;
        auVar1 = rsqrtss(CONCAT412(fVar2,CONCAT48(fVar2,CONCAT44(fVar2,fVar2))),
                         CONCAT412(fVar7 * fVar7,CONCAT48(fVar6 * fVar6,CONCAT44(fVar2,fVar3))));
        fVar2 = SUB164(auVar1,0);
        fVar2 = (3.0 - fVar3 * fVar2 * fVar2) * 0.5 * fVar2;
        if (fVar2 <= 0.0) {
            fVar2 = 0.0;
        }
        *param_2 = fVar2 * fVar4;
        param_2[1] = fVar2 * fVar5;
        param_2[2] = fVar2 * fVar6;
        fVar4 = param_2[2] * param_2[9] - param_2[1] * param_2[10];
        fVar5 = *param_2 * 0.0 - param_2[2] * param_2[8];
        fVar6 = param_2[1] * param_2[8] - *param_2 * param_2[9];
        fVar7 = param_2[3] * param_2[0xb] - param_2[3] * param_2[0xb];
        fVar2 = fVar5 * fVar5;
        fVar3 = fVar4 * fVar4 + fVar2 + fVar6 * fVar6;
        auVar1 = rsqrtss(CONCAT412(fVar2,CONCAT48(fVar2,CONCAT44(fVar2,fVar2))),
                         CONCAT412(fVar7 * fVar7,CONCAT48(fVar6 * fVar6,CONCAT44(fVar2,fVar3))));
        fVar2 = SUB164(auVar1,0);
        fVar2 = (3.0 - fVar3 * fVar2 * fVar2) * 0.5 * fVar2;
        if (fVar2 <= 0.0) {
            fVar2 = 0.0;
        }
        param_2[4] = fVar2 * fVar4;
        param_2[5] = fVar2 * fVar5;
        param_2[6] = fVar2 * fVar6;
    }
    else {
        param_2[4] = 1.0;
        param_2[5] = 0.0;
        param_2[6] = 0.0;
        *param_2 = param_2[10] * param_2[5] - param_2[9] * param_2[6];
        param_2[1] = param_2[8] * 0.0 - param_2[10] * param_2[4];
        param_2[2] = param_2[9] * param_2[4] - param_2[8] * param_2[5];
    }
    param_2[0xc] = *param_5;
    param_2[0xd] = param_5[1];
    param_2[0xe] = param_5[2];
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14061f640(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    bool bVar4;
    bool bVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    float *pfVar10;
    longlong *plVar11;
    undefined4 *puVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined local_138 [16];
    undefined local_128 [16];
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined8 local_108;
    float fStack256;
    undefined4 uStack252;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    float local_c8;
    float fStack196;
    float fStack192;
    float fStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    undefined local_78 [16];
    undefined local_68 [16];
    undefined local_58 [16];
    float local_48;
    float fStack68;
    float fStack64;
    undefined4 uStack60;
    longlong local_38;

    local_38 = FUN_1403d90d0(DAT_140c65898);
    lVar7 = FUN_1403d90d0(DAT_140c65898);
    bVar4 = false;
    bVar5 = false;
    if ((local_38 == 0) && (lVar7 == 0)) {
        FUN_1407e4830(local_138,0,0x40);
        local_48 = (float)(undefined4)local_108;
        fStack68 = (float)local_108._4_4_;
        fStack64 = fStack256;
        uStack60 = uStack252;
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x140))(*(longlong **)(param_1 + 0x78),local_78);
        return;
    }
    if ((*(int *)(param_1 + 0x3a4) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
        if (local_38 != 0) {
            plVar9 = *(longlong **)(local_38 + 0x16e8);
            if (plVar9 != (longlong *)0x0) {
                iVar6 = (**(code **)(*plVar9 + 0x350))(plVar9);
                if (iVar6 == 0) {
                    if ((((*(int *)(param_1 + 0x3b4) != 0) &&
                          (plVar9 = *(longlong **)(local_38 + 0xcc0), plVar9 != (longlong *)0x0)) &&
                         (plVar9 = (longlong *)
                                 (**(code **)(*plVar9 + 0x70))
                                 (plVar9,*(int *)(param_1 + 0x3b4),*(undefined4 *)(param_1 + 0x3b8)
                                 ), plVar9 != (longlong *)0x0)) &&
                        (iVar6 = (**(code **)(*plVar9 + 0x350))(plVar9,*(undefined4 *)(param_1 + 0x3ac)),
                                iVar6 != 0)) {
                        iVar6 = (**(code **)(*plVar9 + 0x3b0))(plVar9);
                        if (iVar6 != 0) goto LAB_14061f880;
                        if ((*(int *)(param_1 + 0x3b4) == 0x14) || (*(int *)(param_1 + 0x3b4) == 7)) {
                            *(undefined4 *)(param_1 + 0x2c4) = 1;
                        }
                    }
                    goto LAB_14061f94c;
                }
                LAB_14061f880:
                (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined4 *)(param_1 + 0x3ac),&local_f8,0);
                *(float *)(param_1 + 400) = local_c8;
                *(float *)(param_1 + 0x194) = fStack196;
                *(float *)(param_1 + 0x198) = fStack192;
                *(float *)(param_1 + 0x19c) = fStack188;
                iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1d0))
                        (*(longlong **)(param_1 + 0x38),0x3c);
                if (iVar6 != 0) {
                    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1f0))
                            (*(longlong **)(param_1 + 0x38),0x3c,plVar9,*(undefined4 *)(param_1 + 0x3ac));
                    bVar4 = true;
                    goto LAB_14061f95a;
                }
                goto LAB_14061f849;
            }
            LAB_14061f94c:
            uVar1 = *(undefined4 *)(local_38 + 0x1234);
            uVar2 = *(undefined4 *)(local_38 + 0x1238);
            uVar3 = *(undefined4 *)(local_38 + 0x123c);
            *(undefined4 *)(param_1 + 400) = *(undefined4 *)(local_38 + 0x1230);
            *(undefined4 *)(param_1 + 0x194) = uVar1;
            *(undefined4 *)(param_1 + 0x198) = uVar2;
            *(undefined4 *)(param_1 + 0x19c) = uVar3;
        }
    }
    else {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
        if (lVar8 == 0) {
            LAB_14061f77e:
            plVar9 = *(longlong **)(param_1 + 0x50);
            if (((plVar9 == (longlong *)0x0) ||
                 (plVar11 = (longlong *)(**(code **)(*plVar9 + 0x3c8))(plVar9), plVar11 == plVar9)) ||
                (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x350))
                        (*(longlong **)(param_1 + 0x50),0x43), iVar6 == 0)) {
                *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1b0);
                *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1b4);
                *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1b8);
                *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1bc);
            }
            else {
                (**(code **)(**(longlong **)(param_1 + 0x50) + 0x368))
                        (*(longlong **)(param_1 + 0x50),0x43,param_1 + 400);
            }
        }
        else {
            plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
            iVar6 = (**(code **)(*plVar9 + 0x350))(plVar9,0x43);
            if (iVar6 == 0) goto LAB_14061f77e;
            plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
            (**(code **)(*plVar9 + 0x368))(plVar9,0x43,param_1 + 400);
        }
        pfVar10 = (float *)FUN_14061f3d0();
        local_f8 = *pfVar10;
        fStack244 = pfVar10[1];
        fStack240 = pfVar10[2];
        fStack236 = pfVar10[3];
        local_e8 = pfVar10[4];
        fStack228 = pfVar10[5];
        fStack224 = pfVar10[6];
        fStack220 = pfVar10[7];
        local_d8 = pfVar10[8];
        fStack212 = pfVar10[9];
        fStack208 = pfVar10[10];
        fStack204 = pfVar10[0xb];
        local_c8 = pfVar10[0xc];
        fStack196 = pfVar10[0xd];
        fStack192 = pfVar10[0xe];
        fStack188 = pfVar10[0xf];
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1d0))
                (*(longlong **)(param_1 + 0x38),0x3c);
        if (iVar6 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1e8))
                    (*(longlong **)(param_1 + 0x38),0x3c,&local_f8);
        }
        LAB_14061f849:
        bVar4 = true;
    }
    LAB_14061f95a:
    if ((*(int *)(param_1 + 0x3a8) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
        if (lVar7 == 0) goto LAB_14061fb43;
        plVar9 = *(longlong **)(lVar7 + 0x16e8);
        if ((plVar9 == (longlong *)0x0) ||
            (iVar6 = (**(code **)(*plVar9 + 0x350))(plVar9,*(undefined4 *)(param_1 + 0x3b0)), iVar6 == 0)
                ) {
            uVar1 = *(undefined4 *)(lVar7 + 0x1234);
            uVar2 = *(undefined4 *)(lVar7 + 0x1238);
            uVar3 = *(undefined4 *)(lVar7 + 0x123c);
            *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar7 + 0x1230);
            *(undefined4 *)(param_1 + 0x1a4) = uVar1;
            *(undefined4 *)(param_1 + 0x1a8) = uVar2;
            *(undefined4 *)(param_1 + 0x1ac) = uVar3;
            goto LAB_14061fb43;
        }
        (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined4 *)(param_1 + 0x3b0),&local_b8,0);
        *(float *)(param_1 + 0x1a0) = local_88;
        *(float *)(param_1 + 0x1a4) = fStack132;
        *(float *)(param_1 + 0x1a8) = fStack128;
        *(float *)(param_1 + 0x1ac) = fStack124;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1d0))
                (*(longlong **)(param_1 + 0x38),0x3d);
        if (iVar6 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1f0))
                    (*(longlong **)(param_1 + 0x38),0x3d,plVar9,*(undefined4 *)(param_1 + 0x3b0));
            bVar5 = true;
            goto LAB_14061fb43;
        }
    }
    else {
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
        if (lVar7 == 0) {
            LAB_14061f9dd:
            plVar9 = *(longlong **)(param_1 + 0x50);
            if (((plVar9 == (longlong *)0x0) ||
                 (plVar11 = (longlong *)(**(code **)(*plVar9 + 0x3c8))(plVar9), plVar11 == plVar9)) ||
                (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x350))
                        (*(longlong **)(param_1 + 0x50),0x43), iVar6 == 0)) {
                *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1b0);
                *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1b4);
                *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1b8);
                *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1bc);
            }
            else {
                (**(code **)(**(longlong **)(param_1 + 0x50) + 0x368))
                        (*(longlong **)(param_1 + 0x50),0x43,param_1 + 0x1a0);
            }
        }
        else {
            plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
            iVar6 = (**(code **)(*plVar9 + 0x350))(plVar9,0x43);
            if (iVar6 == 0) goto LAB_14061f9dd;
            plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
            (**(code **)(*plVar9 + 0x368))(plVar9,0x43,param_1 + 0x1a0);
        }
        puVar12 = (undefined4 *)FUN_14061f3d0();
        local_b8 = *puVar12;
        uStack180 = puVar12[1];
        uStack176 = puVar12[2];
        uStack172 = puVar12[3];
        local_a8 = puVar12[4];
        uStack164 = puVar12[5];
        uStack160 = puVar12[6];
        uStack156 = puVar12[7];
        local_98 = puVar12[8];
        uStack148 = puVar12[9];
        uStack144 = puVar12[10];
        uStack140 = puVar12[0xb];
        local_88 = (float)puVar12[0xc];
        fStack132 = (float)puVar12[0xd];
        fStack128 = (float)puVar12[0xe];
        fStack124 = (float)puVar12[0xf];
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1d0))
                (*(longlong **)(param_1 + 0x38),0x3d);
        if (iVar6 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1e8))
                    (*(longlong **)(param_1 + 0x38),0x3d,&local_b8);
        }
    }
    bVar5 = true;
    LAB_14061fb43:
    if (!bVar4) {
        pfVar10 = (float *)FUN_14061f3d0();
        local_f8 = *pfVar10;
        fStack244 = pfVar10[1];
        fStack240 = pfVar10[2];
        fStack236 = pfVar10[3];
        local_e8 = pfVar10[4];
        fStack228 = pfVar10[5];
        fStack224 = pfVar10[6];
        fStack220 = pfVar10[7];
        local_d8 = pfVar10[8];
        fStack212 = pfVar10[9];
        fStack208 = pfVar10[10];
        fStack204 = pfVar10[0xb];
        local_c8 = pfVar10[0xc];
        fStack196 = pfVar10[0xd];
        fStack192 = pfVar10[0xe];
        fStack188 = pfVar10[0xf];
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1d0))
                (*(longlong **)(param_1 + 0x38),0x3c);
        if (iVar6 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1e8))
                    (*(longlong **)(param_1 + 0x38),0x3c,&local_f8);
        }
    }
    if (!bVar5) {
        puVar12 = (undefined4 *)FUN_14061f3d0();
        local_b8 = *puVar12;
        uStack180 = puVar12[1];
        uStack176 = puVar12[2];
        uStack172 = puVar12[3];
        local_a8 = puVar12[4];
        uStack164 = puVar12[5];
        uStack160 = puVar12[6];
        uStack156 = puVar12[7];
        local_98 = puVar12[8];
        uStack148 = puVar12[9];
        uStack144 = puVar12[10];
        uStack140 = puVar12[0xb];
        local_88 = (float)puVar12[0xc];
        fStack132 = (float)puVar12[0xd];
        fStack128 = (float)puVar12[0xe];
        fStack124 = (float)puVar12[0xf];
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1d0))
                (*(longlong **)(param_1 + 0x38),0x3d);
        if (iVar6 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1e8))
                    (*(longlong **)(param_1 + 0x38),0x3d,&local_b8);
        }
    }
    fVar13 = (float)((uint)(fStack196 - fStack132) & 0x7fffffff);
    fVar14 = (float)((uint)(fStack192 - fStack128) & 0x7fffffff);
    fVar15 = fVar14;
    if (fVar14 < fVar13) {
        fVar15 = fVar13;
    }
    fVar16 = (float)((uint)(local_c8 - local_88) & 0x7fffffff);
    if ((fVar16 <= fVar15) && (fVar16 = fVar14, fVar14 < fVar13)) {
        fVar16 = fVar13;
    }
    local_38 = 0;
    local_48 = (local_88 + local_c8) * 0.5;
    fStack68 = (fStack132 + fStack196) * 0.5;
    local_108 = CONCAT44(fStack68,local_48);
    fStack256 = (fStack128 + fStack192) * 0.5;
    local_78 = CONCAT412(fRam0000000140c7841c * fVar16,
                         CONCAT48(fRam0000000140c78418 * fVar16,
                                  CONCAT44(fRam0000000140c78414 * fVar16,_DAT_140c78410 * fVar16)));
    local_68 = CONCAT412(fRam0000000140c7842c * fVar16,
                         CONCAT48(fRam0000000140c78428 * fVar16,
                                  CONCAT44(fRam0000000140c78424 * fVar16,_DAT_140c78420 * fVar16)));
    uStack252 = 0x3f800000;
    local_58 = CONCAT412(fRam0000000140c7843c * fVar16,
                         CONCAT48(fRam0000000140c78438 * fVar16,
                                  CONCAT44(fRam0000000140c78434 * fVar16,_DAT_140c78430 * fVar16)));
    uStack60 = 0x3f800000;
    fStack64 = fStack256;
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x140))
            (local_48,SUB168(CONCAT412((fStack124 + fStack188) * 0.5,CONCAT48(fStack256,local_108))
                                     >> 0x40,0),*(longlong **)(param_1 + 0x78),local_78);
    fVar15 = SQRT(local_f8 * local_f8 + fStack244 * fStack244 + fStack240 * fStack240);
    if (1e-05 < fVar16) {
        fVar15 = fVar15 / fVar16;
    }
    local_118 = _DAT_140c78430 * fVar15;
    fStack276 = fRam0000000140c78434 * fVar15;
    fStack272 = fRam0000000140c78438 * fVar15;
    fStack268 = fRam0000000140c7843c * fVar15;
    local_138 = CONCAT412(fRam0000000140c7841c * fVar15,
                          CONCAT48(fRam0000000140c78418 * fVar15,
                                   CONCAT44(fRam0000000140c78414 * fVar15,_DAT_140c78410 * fVar15)));
    local_128 = CONCAT412(fRam0000000140c7842c * fVar15,
                          CONCAT48(fRam0000000140c78428 * fVar15,
                                   CONCAT44(fRam0000000140c78424 * fVar15,_DAT_140c78420 * fVar15)));
    local_108 = CONCAT44(uRam0000000140c78444,_DAT_140c78440);
    fStack256 = (float)uRam0000000140c78448;
    uStack252 = uRam0000000140c7844c;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))(*(longlong **)(param_1 + 0x38),local_138);
    return;
}



void FUN_140620c80(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    if (*(int *)(param_1 + 0x3c8) != 3) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388));
        lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 900));
        if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x16e8), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x128))(plVar1,1);
        }
        if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x16e8), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x128))(plVar1,1);
        }
        plVar1 = *(longlong **)(param_1 + 0x30);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xd0))(plVar1,10);
        }
        plVar1 = *(longlong **)(param_1 + 0x38);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xd0))(plVar1,10);
        }
        plVar1 = *(longlong **)(param_1 + 0x40);
        if (plVar1 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x000140620d57. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*plVar1 + 0xd0))(plVar1,10);
            return;
        }
    }
    return;
}



void FUN_140620d70(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    longlong local_res18;

    if ((*(longlong *)(param_1 + 0x10) != 0) &&
        (lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388)), lVar4 != 0)) {
        if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
        }
        if (*(longlong *)(param_1 + 0x18) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
        }
        uVar1 = *(uint *)(param_1 + 1000);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        if (uVar1 < 0x46) {
            lVar4 = *(longlong *)(lVar4 + 0x16c0);
            local_res18 = lVar4;
            lVar2 = *(longlong *)(lVar4 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < uVar1) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_res18 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_res18 == lVar4) || (uVar1 < *(uint *)(local_res18 + 0x20))) {
                local_res18 = lVar4;
            }
            if ((local_res18 != lVar4) &&
                (plVar3 = *(longlong **)(local_res18 + 0x28), plVar3 != (longlong *)0x0)) {
                if (*(int *)(plVar3 + 1) != 0) {
                    *(int *)(plVar3 + 1) = *(int *)(plVar3 + 1) + -1;
                    if (*(float *)((longlong)plVar3 + 0x1c) != 0.0) {
                        *(float *)(plVar3 + 3) = *(float *)(plVar3 + 3) / *(float *)((longlong)plVar3 + 0x1c);
                    }
                    if (*(float *)(plVar3 + 4) != 0.0) {
                        *(float *)(plVar3 + 2) = *(float *)(plVar3 + 2) / *(float *)(plVar3 + 4);
                    }
                }
                iVar5 = 0;
                for (lVar4 = *plVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
                    *(int *)(lVar4 + 0x5c8) = iVar5;
                    iVar5 = iVar5 + 1;
                    if (*(uint *)(plVar3 + 1) == 0) {
                        *(undefined4 *)(lVar4 + 0x5d0) = 0;
                    }
                    else {
                        *(float *)(lVar4 + 0x5d0) =
                                ((float)(ulonglong)*(uint *)(lVar4 + 0x5c8) * 6.283185) /
                                (float)(ulonglong)*(uint *)(plVar3 + 1);
                    }
                }
            }
        }
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140620de0(longlong param_1,int param_2)

{
    longlong **pplVar1;
    undefined auVar2 [12];
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined8 uVar8;
    longlong *plVar9;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined auStack488 [32];
    undefined local_1c8 [8];
    float fStack448;
    float fStack444;
    undefined local_1b8 [4];
    undefined auStack436 [8];
    float fStack428;
    undefined local_1a8 [8];
    undefined8 uStack416;
    undefined local_198 [4];
    undefined auStack404 [8];
    float fStack396;
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    undefined local_148 [16];
    undefined local_138 [16];
    undefined local_128 [16];
    undefined local_118 [16];
    undefined8 local_108;
    undefined *local_f8 [10];
    ulonglong local_a8;

    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack488;
    if (((*(int *)(param_1 + 0x388) == param_2) &&
         (lVar4 = FUN_1403d90d0(DAT_140c65898,*(int *)(param_1 + 0x388)), lVar4 != 0)) &&
        (*(longlong *)(lVar4 + 0x16e8) != 0)) {
        if (*(longlong *)(param_1 + 0x88) != 0) {
            lVar5 = FUN_140237680(*(undefined4 *)(param_1 + 0x3e4));
            if (lVar5 != 0) {
                FUN_14046bec0(lVar4,*(undefined4 *)(param_1 + 1000));
                FUN_1408fe3d0();
                fVar16 = extraout_XMM0_Da;
                FUN_1408fc950();
                fVar10 = extraout_XMM0_Da_00;
                FUN_1408fe3d0();
                fVar15 = extraout_XMM0_Da_01;
                FUN_1408fc950();
                _local_1c8 = CONCAT124(_local_1c8 >> 0x20,fVar10 * extraout_XMM0_Da_02) &
                             (undefined  [16])0xffffffffffffffff;
                local_1c8 = CONCAT44(fVar16 * extraout_XMM0_Da_02,local_1c8._0_4_);
                _local_1b8 = CONCAT124(_local_1b8 >> 0x20,fVar10 * fVar15 * fVar16 - fVar16 * fVar10) &
                             (undefined  [16])0xffffffffffffffff;
                _local_1c8 = CONCAT412(fStack444,CONCAT48(fVar15,local_1c8)) ^ (undefined  [16])0x80000000;
                _local_1b8 = CONCAT44(fVar16 * fVar15 * fVar16 + fVar10 * fVar10,local_1b8);
                _local_1b8 = CONCAT48(extraout_XMM0_Da_02 * fVar16,_local_1b8);
                _local_1a8 = CONCAT124(_local_1a8 >> 0x20,fVar16 * fVar16 + fVar10 * fVar15 * fVar10) &
                             (undefined  [16])0xffffffffffffffff;
                _local_1a8 = CONCAT48(extraout_XMM0_Da_02 * fVar10,local_1a8);
                local_1a8 = local_1a8 & 0xffffffff |
                            (ulonglong)(uint)(fVar16 * fVar15 * fVar10 - fVar10 * fVar16) << 0x20;
                fVar15 = _DAT_140c78440;
                fVar16 = fRam0000000140c78444;
                fVar10 = fRam0000000140c78448;
                fVar17 = fRam0000000140c7844c;
                iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x16e8) + 0x350))
                        (*(longlong **)(lVar4 + 0x16e8),*(undefined4 *)(lVar5 + 0x44));
                if (iVar3 == 0) {
                }
                else {
                    (**(code **)(**(longlong **)(lVar4 + 0x16e8) + 0x378))
                            (*(longlong **)(lVar4 + 0x16e8),*(undefined4 *)(lVar5 + 0x44),local_148,1);
                    local_f8[0] = local_148;
                    FUN_1401afc20(0,local_f8,&local_188);
                    fVar13 = local_1c8._4_4_ * fStack368;
                    fVar14 = local_1c8._4_4_ * fStack364;
                    fVar10 = local_1c8._0_4_ * fStack388;
                    fVar11 = local_1c8._0_4_ * fStack384;
                    fVar12 = local_1c8._0_4_ * fStack380;
                    local_1c8._0_4_ =
                            local_1c8._4_4_ * local_178 + local_1c8._0_4_ * local_188 + local_168 * 0.0 +
                            fStack444 * local_158;
                    local_1c8._4_4_ =
                            local_1c8._4_4_ * fStack372 + fVar10 + fStack356 * 0.0 + fStack444 * fStack340;
                    fStack448 = fVar13 + fVar11 + fStack352 * 0.0 + fStack444 * fStack336;
                    fStack444 = fVar14 + fVar12 + fStack348 * 0.0 + fStack444 * fStack332;
                    fVar10 = local_1b8 * fStack388;
                    fVar11 = local_1b8 * fStack384;
                    fVar12 = local_1b8 * fStack380;
                    fVar13 = auStack436._0_4_ * fStack368;
                    fVar14 = auStack436._0_4_ * fStack364;
                    local_1b8 = auStack436._0_4_ * local_178 + local_1b8 * local_188 + local_168 * 0.0 +
                                fStack428 * local_158;
                    auStack436._0_4_ =
                            auStack436._0_4_ * fStack372 + fVar10 + fStack356 * 0.0 + fStack428 * fStack340;
                    auStack436._4_4_ = fVar13 + fVar11 + fStack352 * 0.0 + fStack428 * fStack336;
                    fStack428 = fVar14 + fVar12 + fStack348 * 0.0 + fStack428 * fStack332;
                    fVar10 = local_1a8._0_4_ * fStack388;
                    fVar11 = local_1a8._0_4_ * fStack384;
                    fVar12 = local_1a8._0_4_ * fStack380;
                    fVar13 = local_1a8._4_4_ * fStack368;
                    fVar14 = local_1a8._4_4_ * fStack364;
                    local_1a8._0_4_ =
                            local_1a8._4_4_ * local_178 + local_1a8._0_4_ * local_188 + local_168 * 0.0 +
                            uStack416._4_4_ * local_158;
                    local_1a8._4_4_ =
                            local_1a8._4_4_ * fStack372 + fVar10 + fStack356 * 0.0 + uStack416._4_4_ * fStack340;
                    uStack416._0_4_ = fVar13 + fVar11 + fStack352 * 0.0 + uStack416._4_4_ * fStack336;
                    uStack416._4_4_ = fVar14 + fVar12 + fStack348 * 0.0 + uStack416._4_4_ * fStack332;
                    fVar13 = fVar16 * fStack368;
                    fVar14 = fVar16 * fStack364;
                    fVar10 = fVar15 * fStack388;
                    fVar11 = fVar15 * fStack384;
                    fVar12 = fVar15 * fStack380;
                    fVar15 = fVar16 * local_178 + fVar15 * local_188 + local_168 * 0.0 + fVar17 * local_158;
                    fVar16 = fVar16 * fStack372 + fVar10 + fStack356 * 0.0 + fVar17 * fStack340;
                    fVar10 = fVar13 + fVar11 + fStack352 * 0.0 + fVar17 * fStack336;
                    fVar17 = fVar14 + fVar12 + fStack348 * 0.0 + fVar17 * fStack332;
                }
                for (pplVar1 = *(longlong ***)(param_1 + 0x88); pplVar1 != (longlong **)0x0;
                     pplVar1 = (longlong **)pplVar1[3]) {
                    if ((*pplVar1 != (longlong *)0x0) &&
                        (lVar6 = (**(code **)(**pplVar1 + 0x148))(), lVar6 != 0)) {
                        plVar7 = (longlong *)(**(code **)(**pplVar1 + 0x148))();
                        iVar3 = (**(code **)(*plVar7 + 0x3b0))(plVar7);
                        if (iVar3 != 0) {
                            plVar7 = (longlong *)(**(code **)(**pplVar1 + 0x148))();
                            lVar6 = (**(code **)(*plVar7 + 0x3c0))(plVar7);
                            if (*(longlong *)(lVar4 + 0x16e8) == lVar6) {
                                plVar7 = (longlong *)(**(code **)(**pplVar1 + 0x148))();
                                (**(code **)(*plVar7 + 0x3a8))(plVar7);
                                local_148 = CONCAT412(fStack444,
                                                      CONCAT48(fStack448,CONCAT44(local_1c8._4_4_,local_1c8._0_4_)))
                                        ;
                                local_138 = CONCAT412(fStack428,
                                                      CONCAT48(auStack436._4_4_,CONCAT44(auStack436._0_4_,local_1b8)
                                                      ));
                                local_128 = CONCAT412(uStack416._4_4_,
                                                      CONCAT48((float)uStack416,
                                                               CONCAT44(local_1a8._4_4_,local_1a8._0_4_)));
                                local_118 = CONCAT412(fVar17,CONCAT48(fVar10,CONCAT44(fVar16,fVar15)));
                                local_108 = 0;
                                (**(code **)(**pplVar1 + 0x140))(*pplVar1,local_148);
                                iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x16e8) + 0x350))
                                        (*(longlong **)(lVar4 + 0x16e8),*(undefined4 *)(lVar5 + 0x44));
                                if (iVar3 != 0) {
                                    plVar7 = *(longlong **)(lVar4 + 0x16e8);
                                    lVar6 = *plVar7;
                                    uVar8 = (**(code **)(**pplVar1 + 0x148))();
                                    (**(code **)(lVar6 + 0x380))(plVar7,*(undefined4 *)(lVar5 + 0x44),uVar8);
                                }
                            }
                        }
                    }
                }
            }
        }
        plVar7 = *(longlong **)(param_1 + 0x50);
        if ((plVar7 != (longlong *)0x0) &&
            (plVar9 = (longlong *)(**(code **)(*plVar7 + 0x3c8))(plVar7), plVar9 != plVar7)) {
            fVar15 = *(float *)(param_1 + 0x280);
            fVar16 = *(float *)(param_1 + 0x284);
            fVar10 = *(float *)(param_1 + 0x28c);
            _local_198 = CONCAT412(0x3f800000,_local_198);
            fVar17 = fVar16 * 2.0;
            fVar12 = fVar10 * fVar15 * 2.0;
            fVar11 = 1.0 - fVar15 * fVar15 * 2.0;
            local_1c8 = CONCAT44(fVar15 * fVar17 + fVar10 * 0.0,(1.0 - fVar16 * fVar17) - 0.0);
            _local_1c8 = CONCAT48(fVar15 * 0.0 - fVar10 * fVar17,local_1c8);
            _local_1c8 = CONCAT412(SUB164(_local_1c8 >> 0x60,0),_local_1c8) &
                         (undefined  [16])0xffffffffffffffff;
            auVar2 = CONCAT84(SUB168(_local_1b8 >> 0x40,0),fVar11 - 0.0) &
                     (undefined  [12])0xffffffffffffffff;
            _local_1b8 = SUB128(auVar2,0) << 0x20;
            _local_198 = CONCAT124(_auStack404,*(undefined4 *)(param_1 + 0x160));
            fStack428 = SUB124(auVar2 >> 0x40,0);
            _local_1b8 = CONCAT48(fVar16 * 0.0 + fVar12,_local_1b8);
            _local_198 = CONCAT48(*(undefined4 *)(param_1 + 0x168),_local_198);
            _local_198 = CONCAT412(0x3f800000,_local_198);
            _local_1b8 = CONCAT124(_auStack436,fVar15 * fVar17 - fVar10 * 0.0);
            local_1a8 = CONCAT44(fVar16 * 0.0 - fVar12,fVar15 * 0.0 + fVar10 * fVar17);
            _local_1a8 = CONCAT48(fVar11 - fVar16 * fVar17,local_1a8);
            _local_1a8 = CONCAT412(SUB164(_local_1a8 >> 0x60,0),_local_1a8) &
                         (undefined  [16])0xffffffffffffffff;
            _local_198 = _local_198 & 0xffffffff | (ulonglong)*(uint *)(param_1 + 0x164) << 0x20;
            lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388));
            if ((lVar4 != 0) &&
                ((plVar7 = *(longlong **)(lVar4 + 0x16e8), plVar7 != (longlong *)0x0 &&
                                                           (iVar3 = (**(code **)(*plVar7 + 0x350))(plVar7,*(undefined4 *)(param_1 + 0x3b0)),
                                                                   iVar3 != 0)))) {
                (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined4 *)(param_1 + 0x3b0),local_148,1);
                local_f8[0] = local_148;
                FUN_1401afc20(local_f8,&local_188);
                _local_1c8 = CONCAT412(local_1c8._0_4_ * fStack380 + local_1c8._4_4_ * fStack364 +
                                       fStack348 * 0.0 + fStack444 * fStack332,
                                       CONCAT48(local_1c8._0_4_ * fStack384 + local_1c8._4_4_ * fStack368 +
                                                fStack352 * 0.0 + fStack444 * fStack336,
                                                CONCAT44(local_1c8._0_4_ * fStack388 +
                                                         local_1c8._4_4_ * fStack372 + fStack356 * 0.0 +
                                                         fStack444 * fStack340,
                                                         local_1c8._0_4_ * local_188 +
                                                         local_1c8._4_4_ * local_178 + local_168 * 0.0 +
                                                         fStack444 * local_158)));
                _local_1b8 = CONCAT412(auStack436._0_4_ * fStack364 + local_1b8 * fStack380 +
                                       fStack348 * 0.0 + fStack428 * fStack332,
                                       CONCAT48(auStack436._0_4_ * fStack368 + local_1b8 * fStack384 +
                                                fStack352 * 0.0 + fStack428 * fStack336,
                                                CONCAT44(auStack436._0_4_ * fStack372 +
                                                         local_1b8 * fStack388 + fStack356 * 0.0 +
                                                         fStack428 * fStack340,
                                                         auStack436._0_4_ * local_178 +
                                                         local_1b8 * local_188 + local_168 * 0.0 +
                                                         fStack428 * local_158)));
                _local_1a8 = CONCAT412(local_1a8._4_4_ * fStack364 + local_1a8._0_4_ * fStack380 +
                                       fStack348 * 0.0 + uStack416._4_4_ * fStack332,
                                       CONCAT48(local_1a8._4_4_ * fStack368 + local_1a8._0_4_ * fStack384 +
                                                fStack352 * 0.0 + uStack416._4_4_ * fStack336,
                                                CONCAT44(local_1a8._4_4_ * fStack372 +
                                                         local_1a8._0_4_ * fStack388 + fStack356 * 0.0 +
                                                         uStack416._4_4_ * fStack340,
                                                         local_1a8._4_4_ * local_178 +
                                                         local_1a8._0_4_ * local_188 + local_168 * 0.0 +
                                                         uStack416._4_4_ * local_158)));
                _local_198 = CONCAT412(auStack404._0_4_ * fStack364 + local_198 * fStack380 +
                                       fStack348 * 0.0 + fStack396 * fStack332,
                                       CONCAT48(auStack404._0_4_ * fStack368 + local_198 * fStack384 +
                                                fStack352 * 0.0 + fStack396 * fStack336,
                                                CONCAT44(auStack404._0_4_ * fStack372 +
                                                         local_198 * fStack388 + fStack356 * 0.0 +
                                                         fStack396 * fStack340,
                                                         auStack404._0_4_ * local_178 +
                                                         local_198 * local_188 + local_168 * 0.0 +
                                                         fStack396 * local_158)));
            }
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
                    (*(longlong **)(param_1 + 0x50),local_1c8);
        }
    }
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack488);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406215d0(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong *plVar9;
    float fVar10;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined extraout_XMM0 [16];
    float fVar12;
    undefined auVar11 [16];
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
    undefined auStack440 [32];
    uint local_198 [4];
    undefined local_188 [16];
    longlong local_178;
    longlong local_170;
    undefined local_168 [16];
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    float local_138;
    float fStack308;
    float fStack304;
    float local_118;
    float fStack276;
    float fStack272;
    undefined4 uStack268;
    float local_108;
    float fStack260;
    float fStack256;
    undefined4 uStack252;
    float local_f8;
    float fStack244;
    float fStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack440;
    if (param_2 != 0) {
        do {
            uVar1 = *(uint *)(param_2 + 0x40);
            local_198[0] = uVar1;
            if (uVar1 != *(uint *)(param_1 + 900)) {
                lVar8 = *(longlong *)(param_1 + 0x5e0);
                lVar6 = lVar8;
                lVar2 = *(longlong *)(lVar8 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar1) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar6 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar6 == lVar8) || (uVar1 < *(uint *)(lVar6 + 0x20))) {
                    local_178 = lVar8;
                    plVar9 = &local_178;
                }
                else {
                    local_170 = lVar6;
                    plVar9 = &local_170;
                }
                if (*plVar9 == lVar8) {
                    FUN_1400293c0(param_1 + 0x5d8,local_168,local_198);
                    lVar8 = FUN_1403d90d0(DAT_140c65898,uVar1);
                    if (lVar8 != 0) {
                        plVar9 = *(longlong **)(lVar8 + 0x16e8);
                        if ((plVar9 == (longlong *)0x0) ||
                            (iVar7 = (**(code **)(*plVar9 + 0x350))(plVar9,*(undefined4 *)(param_1 + 0x3b0)),
                                    iVar7 == 0)) {
                            local_188 = *(undefined (*) [16])(lVar8 + 0x1230);
                        }
                        else {
                            (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined4 *)(param_1 + 0x3b0),local_188,0);
                        }
                        *(float *)(param_1 + 0x600) = *(float *)(param_1 + 0x600) + SUB164(local_188,0);
                        *(float *)(param_1 + 0x604) = *(float *)(param_1 + 0x604) + SUB164(local_188 >> 0x20,0);
                        *(float *)(param_1 + 0x608) = *(float *)(param_1 + 0x608) + SUB164(local_188 >> 0x40,0);
                        *(float *)(param_1 + 0x60c) = *(float *)(param_1 + 0x60c) + SUB164(local_188 >> 0x60,0);
                    }
                }
            }
            param_2 = *(longlong *)(param_2 + 0x28);
        } while (param_2 != 0);
    }
    lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 900));
    if (lVar8 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x5e8);
        if (lVar2 != 0) {
            auVar11 = ZEXT416((uint)(float)lVar2) & (undefined  [16])0xffffffffffffffff;
            if (lVar2 < 0) {
                auVar11 = CONCAT124(SUB1612(auVar11 >> 0x20,0),SUB164(auVar11,0) + 1.844674e+19);
            }
            fVar23 = 3.0;
            fVar24 = 0.5;
            uVar3 = SUB164(auVar11,0);
            auVar11 = divps(*(undefined (*) [16])(param_1 + 0x600),
                            CONCAT412(uVar3,CONCAT48(uVar3,CONCAT44(uVar3,uVar3))));
            fVar26 = 0.0;
            fVar27 = 0.0;
            fVar28 = 0.0;
            *(undefined (*) [16])(param_1 + 0x610) = auVar11;
            fVar22 = *(float *)(param_1 + 0x310);
            fVar17 = *(float *)(param_1 + 0x314);
            fVar16 = *(float *)(param_1 + 0x318);
            fVar15 = *(float *)(param_1 + 0x31c);
            fVar18 = *(float *)(param_1 + 0x160) - fVar22;
            fVar19 = *(float *)(param_1 + 0x164) - fVar17;
            fVar20 = *(float *)(param_1 + 0x168) - fVar16;
            fVar21 = *(float *)(param_1 + 0x16c) - fVar15;
            fVar10 = *(float *)(param_1 + 0x610);
            fVar12 = fVar19 * fVar19;
            fVar13 = fVar18 * fVar18 + fVar12 + fVar20 * fVar20;
            auVar11 = rsqrtss(CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))),
                              CONCAT412(fVar21 * fVar21,CONCAT48(fVar20 * fVar20,CONCAT44(fVar12,fVar13)))
            );
            fVar12 = SUB164(auVar11,0);
            fVar12 = (3.0 - fVar13 * fVar12 * fVar12) * 0.5 * fVar12;
            if (fVar12 <= 0.0) {
                fVar12 = 0.0;
            }
            fVar13 = 0.0 - *(float *)(param_1 + 0x618);
            fVar13 = (fVar22 - fVar10) * (fVar22 - fVar10) + fVar13 * fVar13;
            if (0.0 < fVar10 * fVar12 * fVar18 + *(float *)(param_1 + 0x614) * fVar12 * fVar19 +
                      *(float *)(param_1 + 0x618) * fVar12 * fVar20 +
                      (float)((uint)(fVar12 * fVar18 * fVar22 + fVar12 * fVar19 * fVar17 + 0.0) ^
                              0x80000000)) {
                fVar25 = 1.0;
                fVar12 = 1.0;
                if (fVar13 < 25.0) {
                    fVar12 = fVar13 * 0.04;
                }
                local_168 = CONCAT412(fVar21,CONCAT48(fVar20,CONCAT44(fVar19,fVar18)));
                fVar14 = ((*(float *)(param_1 + 0x614) - fVar17) * fVar19 + (fVar10 - fVar22) * fVar18) /
                         (fVar19 * fVar19 + fVar18 * fVar18);
                fVar10 = fVar14 * fVar18 + fVar22;
                fVar13 = fVar14 * fVar20 + fVar16;
                fVar18 = fVar14 * fVar21 + fVar15;
                local_188._0_8_ = CONCAT44(fVar14 * fVar19 + fVar17,fVar10);
                local_188 = CONCAT412(fVar18,CONCAT48(fVar13,local_188._0_8_));
                local_188._0_8_ = CONCAT44(*(float *)(param_1 + 0x614),fVar10);
                fVar17 = *(float *)(param_1 + 0x614) - fVar17;
                fVar13 = fVar13 - fVar16;
                fVar18 = fVar18 - fVar15;
                fVar16 = *(float *)(param_1 + 0x200);
                fVar17 = fVar17 * fVar17;
                fVar13 = fVar13 * fVar13;
                uVar4 = SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT412(0) & (undefined  [12])0xffffffffffffffff)
                        << 0x20) >> 0x40,0),fVar17),0);
                uVar5 = uVar4 & 0xffffffff;
                rsqrtss(CONCAT412(fVar17,CONCAT48(fVar17,uVar4 << 0x20 | uVar5)),
                        CONCAT412(fVar18 * fVar18,
                                  CONCAT48(fVar13,CONCAT44(fVar17,(fVar10 - fVar22) * (fVar10 - fVar22) +
                                                                  (float)uVar5 + fVar13))));
                FUN_1408fd190();
                *(float *)(param_1 + 0x200) = (extraout_XMM0_Da - fVar16) * fVar12 + fVar16;
                FUN_1405b4520(lVar8,&local_158);
                local_108 = *(float *)(param_1 + 0x200);
                FUN_1408fe3d0();
                fVar17 = extraout_XMM0_Da_00;
                FUN_1408fc950();
                fStack240 = SUB164(extraout_XMM0,0);
                fVar25 = fVar25 - fStack240;
                fVar16 = local_158 * local_158 + fStack340 * fStack340 + 0.0;
                auVar11 = rsqrtss(extraout_XMM0,
                                  CONCAT412(fStack332 * fStack332,
                                            CONCAT48(fStack336 * fStack336,
                                                     CONCAT44(fStack340 * fStack340,fVar16))));
                fVar22 = SUB164(auVar11,0);
                uStack268 = 0;
                uStack252 = 0;
                uStack236 = 0;
                fVar22 = (fVar23 - fVar16 * fVar22 * fVar22) * fVar24 * fVar22;
                if (fVar22 <= fVar26) {
                    fVar22 = fVar26;
                }
                local_158 = fVar22 * local_158;
                fVar22 = fVar22 * fStack340;
                local_118 = local_158 * local_158 * fVar25 + fStack240;
                local_108 = fVar22 * local_158 * fVar25;
                local_f8 = local_158 * 0.0 * fVar25;
                fStack244 = fVar22 * 0.0 * fVar25;
                fStack276 = fVar17 * 0.0 + local_108;
                local_108 = local_108 - fVar17 * 0.0;
                local_138 = fVar26 - local_138;
                fVar27 = fVar27 - fStack308;
                fVar28 = fVar28 - fStack304;
                fStack272 = local_f8 - fVar22 * fVar17;
                local_f8 = fVar22 * fVar17 + local_f8;
                fStack260 = fVar22 * fVar22 * fVar25 + fStack240;
                fStack256 = local_158 * fVar17 + fStack244;
                fStack240 = fVar25 * 0.0 + fStack240;
                fStack244 = fStack244 - local_158 * fVar17;
                local_e8 = 0;
                uStack228 = 0;
                uStack224 = 0;
                uStack220 = 0x3f800000;
                fVar17 = fVar27 * local_108 + local_138 * local_118 + fVar28 * local_f8;
                fVar15 = fVar27 * fStack260 + local_138 * fStack276 + fVar28 * fStack244;
                fVar10 = fVar27 * fStack256 + local_138 * fStack272 + fVar28 * fStack240;
                fVar12 = fVar27 * 0.0 + local_138 * 0.0 + fVar28 * 0.0;
                *(undefined (*) [16])(param_1 + 0x1e0) =
                        CONCAT412(fVar12,CONCAT48(fVar10,CONCAT44(fVar15,fVar17)));
                fVar22 = fVar15 * fVar15;
                fVar16 = fVar17 * fVar17 + fVar22 + fVar10 * fVar10;
                auVar11 = rsqrtss(CONCAT412(fVar22,CONCAT48(fVar22,CONCAT44(fVar22,fVar22))),
                                  CONCAT412(fVar12 * fVar12,
                                            CONCAT48(fVar10 * fVar10,CONCAT44(fVar22,fVar16))));
                fVar22 = SUB164(auVar11,0);
                fVar22 = (fVar23 - fVar16 * fVar22 * fVar22) * fVar24 * fVar22;
                if (fVar22 <= fVar26) {
                    fVar22 = fVar26;
                }
                *(undefined (*) [16])(param_1 + 0x1e0) =
                        CONCAT412(fVar22 * fVar12,
                                  CONCAT48(fVar22 * fVar10,CONCAT44(fVar22 * fVar15,fVar22 * fVar17)));
            }
        }
    }
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack440);
    return;
}



void FUN_140621c30(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    longlong lVar8;
    undefined4 *puVar9;
    longlong lVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar15;
    float fVar17;
    undefined in_XMM1 [16];
    float fVar18;
    undefined auVar16 [12];
    undefined auVar14 [16];
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    undefined local_48 [64];

    auVar16 = SUB1612(in_XMM1 >> 0x20,0);
    if (*(int *)(param_1 + 0x260) == 0) {
        lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388));
        if (lVar8 == 0) {
            if ((*(byte *)(param_1 + 0x380) & 0x80) != 0) {
                fVar25 = *(float *)(param_1 + 800) - *(float *)(param_1 + 0x310);
                fVar12 = *(float *)(param_1 + 0x324) - *(float *)(param_1 + 0x314);
                fVar25 = SQRT(fVar25 * fVar25 + fVar12 * fVar12 + 0.0);
                *(undefined (*) [16])(param_1 + 0x160) =
                        CONCAT412(*(float *)(param_1 + 0x1ec) * fVar25 + *(float *)(param_1 + 0x31c),
                                  CONCAT48(*(float *)(param_1 + 0x1e8) * fVar25 + *(float *)(param_1 + 0x318),
                                           CONCAT44(*(float *)(param_1 + 0x1e4) * fVar25 +
                                                    *(float *)(param_1 + 0x314),
                                                    *(float *)(param_1 + 0x1e0) * fVar25 +
                                                    *(float *)(param_1 + 0x310))));
                return;
            }
            lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x38c));
            if (lVar8 == 0) {
                *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 800);
                *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x324);
                *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x328);
                *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x32c);
                return;
            }
            fVar25 = *(float *)(param_1 + 800);
            fVar12 = *(float *)(param_1 + 0x324);
            fVar18 = *(float *)(param_1 + 0x328);
            *(undefined (*) [16])(param_1 + 0x160) =
                    CONCAT412(fVar12 * *(float *)(lVar8 + 0x11cc) + fVar25 * *(float *)(lVar8 + 0x11bc) +
                              fVar18 * *(float *)(lVar8 + 0x11dc) + *(float *)(lVar8 + 0x11ec),
                              CONCAT48(fVar12 * *(float *)(lVar8 + 0x11c8) +
                                       fVar25 * *(float *)(lVar8 + 0x11b8) +
                                       fVar18 * *(float *)(lVar8 + 0x11d8) + *(float *)(lVar8 + 0x11e8),
                                       CONCAT44(fVar12 * *(float *)(lVar8 + 0x11c4) +
                                                fVar25 * *(float *)(lVar8 + 0x11b4) +
                                                fVar18 * *(float *)(lVar8 + 0x11d4) +
                                                *(float *)(lVar8 + 0x11e4),
                                                fVar12 * *(float *)(lVar8 + 0x11c0) +
                                                fVar25 * *(float *)(lVar8 + 0x11b0) +
                                                fVar18 * *(float *)(lVar8 + 0x11d0) +
                                                *(float *)(lVar8 + 0x11e0))));
            return;
        }
        plVar1 = *(longlong **)(lVar8 + 0x16e8);
        if ((plVar1 == (longlong *)0x0) ||
            (iVar7 = (**(code **)(*plVar1 + 0x350))(plVar1,*(undefined4 *)(param_1 + 0x3b0)), iVar7 == 0)
                ) {
            lVar11 = DAT_140c65898;
            uVar4 = *(undefined4 *)(lVar8 + 0x1234);
            uVar5 = *(undefined4 *)(lVar8 + 0x1238);
            uVar6 = *(undefined4 *)(lVar8 + 0x123c);
            *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(lVar8 + 0x1230);
            *(undefined4 *)(param_1 + 0x164) = uVar4;
            *(undefined4 *)(param_1 + 0x168) = uVar5;
            *(undefined4 *)(param_1 + 0x16c) = uVar6;
        }
        else {
            iVar7 = (**(code **)(*plVar1 + 0x138))(plVar1);
            if (iVar7 == 0) {
                (**(code **)(*plVar1 + 0x128))(plVar1,1);
            }
            puVar9 = (undefined4 *)
                    (**(code **)(*plVar1 + 0x358))(plVar1,local_48,*(undefined4 *)(param_1 + 0x3b0),0);
            lVar11 = DAT_140c65898;
            uVar4 = puVar9[1];
            uVar5 = puVar9[2];
            uVar6 = puVar9[3];
            *(undefined4 *)(param_1 + 0x160) = *puVar9;
            *(undefined4 *)(param_1 + 0x164) = uVar4;
            *(undefined4 *)(param_1 + 0x168) = uVar5;
            *(undefined4 *)(param_1 + 0x16c) = uVar6;
            lVar10 = *(longlong *)(lVar11 + 0x71a8);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar11 + 0x71a0);
            }
            fVar25 = *(float *)(param_1 + 0x160);
            fVar12 = *(float *)(param_1 + 0x164);
            fVar18 = *(float *)(param_1 + 0x168);
            fVar13 = fVar18 * *(float *)(lVar10 + 0xc0);
            fVar15 = fVar18 * *(float *)(lVar10 + 0xc4);
            fVar17 = fVar18 * *(float *)(lVar10 + 200);
            fVar18 = fVar18 * *(float *)(lVar10 + 0xcc);
            auVar16 = SUB1612(CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar15,fVar13))) >> 0x20,0);
            *(undefined (*) [16])(param_1 + 0x160) =
                    CONCAT412(fVar12 * *(float *)(lVar10 + 0xbc) + fVar25 * *(float *)(lVar10 + 0xac) +
                              fVar18 + *(float *)(lVar10 + 0xdc),
                              CONCAT48(fVar12 * *(float *)(lVar10 + 0xb8) +
                                       fVar25 * *(float *)(lVar10 + 0xa8) + fVar17 +
                                       *(float *)(lVar10 + 0xd8),
                                       CONCAT44(fVar12 * *(float *)(lVar10 + 0xb4) +
                                                fVar25 * *(float *)(lVar10 + 0xa4) + fVar15 +
                                                *(float *)(lVar10 + 0xd4),
                                                fVar12 * *(float *)(lVar10 + 0xb0) +
                                                fVar25 * *(float *)(lVar10 + 0xa0) + fVar13 +
                                                *(float *)(lVar10 + 0xd0))));
        }
        *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x160);
        *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x164);
        *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x168);
        *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0x16c);
        if (((*(byte *)(param_1 + 0x380) & 0x30) != 0) &&
            (lVar11 = FUN_1403d90d0(lVar11,*(undefined4 *)(param_1 + 900)), lVar11 != 0)) {
            lVar11 = *(longlong *)(lVar8 + 0xd08);
            fVar25 = *(float *)(lVar8 + 0x12c4);
            if (lVar11 == 0) {
                lVar8 = FUN_14022d500(*(undefined4 *)(lVar8 + 0xd8));
                if (lVar8 == 0) {
                    fVar12 = 0.0;
                }
                else {
                    fVar12 = *(float *)(lVar8 + 0x28);
                }
            }
            else {
                fVar12 = (float)FUN_14047a940(lVar8);
                fVar12 = fVar12 * *(float *)(lVar11 + 0x8c);
            }
            fVar18 = *(float *)(param_1 + 0x160);
            fVar13 = *(float *)(param_1 + 0x164);
            fVar15 = *(float *)(param_1 + 0x168);
            fVar17 = *(float *)(param_1 + 0x16c);
            fVar21 = fVar18 - *(float *)(param_1 + 0x150);
            fVar22 = fVar13 - *(float *)(param_1 + 0x154);
            fVar23 = fVar15 - *(float *)(param_1 + 0x158);
            fVar24 = fVar17 - *(float *)(param_1 + 0x15c);
            fVar19 = fVar22 * fVar22;
            uVar2 = SUB128(CONCAT84(SUB168((ZEXT1216(auVar16) << 0x20) >> 0x40,0),fVar19),0);
            uVar3 = uVar2 & 0xffffffff;
            fVar20 = fVar21 * fVar21 + (float)uVar3 + 0.0;
            auVar14 = rsqrtss(CONCAT412(fVar19,CONCAT48(fVar19,uVar2 << 0x20 | uVar3)),
                              CONCAT412(fVar24 * fVar24,CONCAT48(fVar23 * fVar23,CONCAT44(fVar19,fVar20)))
            );
            fVar19 = SUB164(auVar14,0);
            fVar19 = (3.0 - fVar20 * fVar19 * fVar19) * 0.5 * fVar19;
            if (fVar19 <= 0.0) {
                fVar19 = 0.0;
            }
            fVar20 = fVar19 * fVar21 * fVar12 * fVar25;
            fVar21 = fVar19 * fVar22 * fVar12 * fVar25;
            fVar22 = fVar19 * fVar23 * fVar12 * fVar25;
            fVar25 = fVar19 * fVar24 * fVar12 * fVar25;
            if ((*(byte *)(param_1 + 0x380) & 0x10) == 0) {
                *(undefined (*) [16])(param_1 + 0x160) =
                        CONCAT412(fVar25 + fVar17,
                                  CONCAT48(fVar22 + fVar15,CONCAT44(fVar21 + fVar13,fVar20 + fVar18)));
            }
            else {
                *(undefined (*) [16])(param_1 + 0x160) =
                        CONCAT412(fVar17 - fVar25,
                                  CONCAT48(fVar15 - fVar22,CONCAT44(fVar13 - fVar21,fVar18 - fVar20)));
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140621f70(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined auVar5 [16];
    undefined extraout_var [12];
    undefined extraout_var_00 [12];
    undefined auVar6 [12];
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
    undefined4 local_e8;
    undefined4 local_e4;
    undefined8 local_e0;
    undefined4 local_d8;
    undefined8 local_d4;
    undefined4 local_cc;
    float local_c8;
    float local_c4;
    float local_c0;
    undefined4 local_bc;
    float local_b8;
    float local_b4;
    float local_b0;
    undefined4 local_ac;
    float local_a8;
    float local_a4;
    float local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;

    plVar1 = *(longlong **)(param_1 + 0x50);
    if (((plVar1 != (longlong *)0x0) &&
         (iVar4 = (**(code **)(*plVar1 + 0x198))(plVar1,0x96), iVar4 != 0)) &&
        (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x350))
                (*(longlong **)(param_1 + 0x50),0x43), iVar4 != 0)) {
        if ((*(int *)(param_1 + 0x38c) == 0) &&
            (fVar8 = *(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x1b0),
             fVar11 = *(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x1b4),
             fVar8 = fVar8 * fVar8 + fVar11 * fVar11 + 0.0,
                    fVar8 < *(float *)(param_1 + 0x290) || fVar8 == *(float *)(param_1 + 0x290))) {
            return;
        }
        fVar8 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1d0);
        fVar11 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1d4);
        fVar12 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1d8);
        fVar13 = *(float *)(param_1 + 0x1bc) - *(float *)(param_1 + 0x1dc);
        fVar19 = 0.0;
        fVar20 = 3.0;
        fVar18 = 0.5;
        if (fVar8 * fVar8 + fVar11 * fVar11 + 0.0 <= _DAT_140c4a8a8) {
            fVar8 = *(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x150);
            fVar11 = *(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x154);
            fVar12 = *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x158);
            fVar13 = *(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x15c);
        }
        fVar7 = fVar11 * fVar11;
        fVar9 = fVar8 * fVar8 + fVar7 + 0.0;
        auVar5 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                         CONCAT412(fVar13 * fVar13,CONCAT48(fVar12 * fVar12,CONCAT44(fVar7,fVar9))));
        fVar7 = SUB164(auVar5,0);
        fVar7 = (3.0 - fVar9 * fVar7 * fVar7) * 0.5 * fVar7;
        if (fVar7 <= 0.0) {
            fVar7 = 0.0;
        }
        fVar8 = fVar7 * fVar8;
        fVar11 = fVar7 * fVar11;
        fVar12 = fVar7 * fVar12;
        fVar7 = fVar7 * fVar13;
        fVar13 = *(float *)(param_1 + 0x270);
        fVar9 = *(float *)(param_1 + 0x274);
        fVar14 = fVar9 * 0.0 - fVar11 * *(float *)(param_1 + 0x278);
        fVar15 = fVar8 * *(float *)(param_1 + 0x278) - fVar13 * 0.0;
        fVar16 = fVar11 * fVar13 - fVar8 * fVar9;
        fVar17 = fVar7 * *(float *)(param_1 + 0x27c) - fVar7 * *(float *)(param_1 + 0x27c);
        if (fVar8 * fVar13 + fVar11 * fVar9 + 0.0 <= 0.0) {
            FUN_1408fcf3c();
            auVar6 = extraout_var_00;
        }
        else {
            FUN_1408fcf3c();
            auVar6 = extraout_var;
        }
        fVar13 = fVar15 * fVar15;
        uVar2 = SUB128(CONCAT84(SUB168((ZEXT1216(auVar6) << 0x20) >> 0x40,0),fVar13),0);
        uVar3 = uVar2 & 0xffffffff;
        fVar9 = fVar14 * fVar14 + (float)uVar3 + 0.0;
        auVar5 = rsqrtss(CONCAT412(fVar13,CONCAT48(fVar13,uVar2 << 0x20 | uVar3)),
                         CONCAT412(fVar17 * fVar17,CONCAT48(fVar16 * fVar16,CONCAT44(fVar13,fVar9))));
        fVar13 = SUB164(auVar5,0);
        fVar13 = (fVar20 - fVar9 * fVar13 * fVar13) * fVar18 * fVar13;
        if (fVar13 <= fVar19) {
            fVar13 = fVar19;
        }
        fVar14 = fVar13 * fVar14;
        fVar15 = fVar13 * fVar15;
        fVar9 = fVar15 * fVar15;
        fVar10 = fVar14 * fVar14 + fVar9 + 0.0;
        auVar5 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                         CONCAT412(fVar13 * fVar17 * fVar13 * fVar17,
                                   CONCAT48(fVar13 * fVar16 * fVar13 * fVar16,CONCAT44(fVar9,fVar10))));
        fVar13 = SUB164(auVar5,0);
        fVar13 = (fVar20 - fVar10 * fVar13 * fVar13) * fVar18 * fVar13;
        if (fVar13 <= fVar19) {
            fVar13 = fVar19;
        }
        fVar14 = fVar13 * fVar14;
        fVar13 = fVar13 * fVar15;
        FUN_1408fe3d0();
        fVar9 = extraout_XMM0_Da;
        FUN_1408fc950();
        fVar18 = *(float *)(param_1 + 0x280);
        fVar19 = *(float *)(param_1 + 0x284);
        fVar20 = *(float *)(param_1 + 0x28c);
        fVar14 = fVar14 * fVar9;
        fVar10 = fVar9 * 0.0;
        fVar13 = fVar13 * fVar9;
        fVar9 = *(float *)(param_1 + 0x288);
        fVar16 = (fVar18 * extraout_XMM0_Da_00 + fVar20 * fVar14 + fVar9 * fVar13) - fVar19 * fVar10;
        fVar15 = (fVar19 * extraout_XMM0_Da_00 - fVar9 * fVar14) + fVar20 * fVar13 + fVar18 * fVar10;
        local_bc = 0;
        local_ac = 0;
        local_9c = 0;
        local_8c = 0x3f800000;
        fVar17 = ((fVar20 * extraout_XMM0_Da_00 - fVar18 * fVar14) - fVar19 * fVar13) - fVar9 * fVar10;
        *(undefined (*) [16])(param_1 + 0x280) =
                CONCAT412(fVar17,CONCAT48(((fVar9 * extraout_XMM0_Da_00 + fVar19 * fVar14) -
                                           fVar18 * fVar13) + fVar20 * fVar10,CONCAT44(fVar15,fVar16)));
        fVar13 = fVar15 * 2.0;
        local_a4 = fVar17 * fVar16 * 2.0;
        local_a0 = 1.0 - fVar16 * fVar16 * 2.0;
        local_c8 = (1.0 - fVar15 * fVar13) - 0.0;
        local_a8 = fVar16 * 0.0 + fVar17 * fVar13;
        local_c0 = fVar16 * 0.0 - fVar17 * fVar13;
        local_c4 = fVar16 * fVar13 + fVar17 * 0.0;
        local_b8 = fVar16 * fVar13 - fVar17 * 0.0;
        local_b0 = fVar15 * 0.0 + local_a4;
        local_a4 = fVar15 * 0.0 - local_a4;
        local_b4 = local_a0 - 0.0;
        local_a0 = local_a0 - fVar15 * fVar13;
        local_94 = *(undefined4 *)(param_1 + 0x164);
        local_98 = *(undefined4 *)(param_1 + 0x160);
        local_90 = *(undefined4 *)(param_1 + 0x168);
        *(undefined (*) [16])(param_1 + 0x270) =
                CONCAT412(fVar7,CONCAT48(fVar12,CONCAT44(fVar11,fVar8)));
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))(*(longlong **)(param_1 + 0x50),&local_c8);
        plVar1 = *(longlong **)(param_1 + 0x50);
        local_e4 = FUN_1401ae6f0(0,0xffffffff);
        local_e8 = 0x96;
        local_e0 = 0x3f800000;
        local_d4 = 3;
        local_d8 = 0;
        local_cc = 0;
        (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_e8);
        fVar8 = *(float *)(param_1 + 0x170);
        fVar11 = *(float *)(param_1 + 0x174);
        fVar12 = *(float *)(param_1 + 0x178);
        fVar13 = *(float *)(param_1 + 0x17c);
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x368))
                (*(longlong **)(param_1 + 0x50),0x43,param_1 + 0x170);
        *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x170) - fVar8;
        *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0x174) - fVar11;
        *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x178) - fVar12;
        *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x17c) - fVar13;
        return;
    }
    fVar8 = *(float *)(param_1 + 0x170);
    fVar11 = *(float *)(param_1 + 0x174);
    fVar12 = *(float *)(param_1 + 0x178);
    fVar13 = *(float *)(param_1 + 0x17c);
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x160);
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x164);
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x168);
    *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x16c);
    *(undefined (*) [16])(param_1 + 0x180) =
            CONCAT412(*(float *)(param_1 + 0x16c) - fVar13,
                      CONCAT48(*(float *)(param_1 + 0x168) - fVar12,
                               CONCAT44(*(float *)(param_1 + 0x164) - fVar11,
                                        *(float *)(param_1 + 0x160) - fVar8)));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140622590(longlong param_1,undefined8 param_2)

{
    float *pfVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auStack328 [32];
    float *local_128;
    float *local_118;
    undefined8 local_110;
    float local_108;
    float local_104;
    uint local_100;
    undefined4 local_fc;
    float local_f8;
    float local_f4;
    float local_f0;
    undefined4 local_ec;
    float local_e8;
    float local_e4;
    float local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    float *local_c8;
    undefined8 local_c0;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack328;
    pfVar1 = (float *)(param_1 + 0x160);
    local_128 = pfVar1;
    FUN_14061f3d0(param_1,param_2,pfVar1,param_1 + 0x150);
    FUN_1408fe3d0();
    fVar8 = extraout_XMM0_Da;
    FUN_1408fc950();
    fVar9 = extraout_XMM0_Da_00;
    FUN_1408fe3d0();
    fVar7 = extraout_XMM0_Da_01;
    FUN_1408fc950();
    local_118 = &local_108;
    local_104 = fVar7 * fVar9;
    local_108 = extraout_XMM0_Da_02 * fVar9;
    local_fc = 0;
    local_ec = 0;
    local_dc = 0;
    local_f8 = extraout_XMM0_Da_02 * fVar8 * fVar8 - fVar7 * fVar9;
    local_100 = (uint)fVar8 ^ 0x80000000;
    local_f4 = fVar7 * fVar8 * fVar8 + extraout_XMM0_Da_02 * fVar9;
    local_e8 = fVar7 * fVar8 + extraout_XMM0_Da_02 * fVar8 * fVar9;
    local_f0 = fVar9 * fVar8;
    local_e0 = fVar9 * fVar9;
    local_e4 = fVar7 * fVar8 * fVar9 - extraout_XMM0_Da_02 * fVar8;
    local_d8 = _DAT_140c78440;
    uStack212 = uRam0000000140c78444;
    uStack208 = uRam0000000140c78448;
    uStack204 = uRam0000000140c7844c;
    local_110 = param_2;
    local_c8 = local_118;
    local_c0 = param_2;
    FUN_1401afb10(&local_c8,param_2);
    puVar5 = (undefined4 *)FUN_1401b1d60(&local_118);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined4 *)(param_1 + 0x280) = *puVar5;
    *(undefined4 *)(param_1 + 0x284) = uVar2;
    *(undefined4 *)(param_1 + 0x288) = uVar3;
    *(undefined4 *)(param_1 + 0x28c) = uVar4;
    fVar9 = *pfVar1 - *(float *)(param_1 + 0x150);
    fVar10 = *(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x154);
    fVar11 = *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x158);
    fVar12 = *(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x15c);
    fVar7 = fVar10 * fVar10;
    fVar8 = fVar9 * fVar9 + fVar7 + 0.0;
    auVar6 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                     CONCAT412(fVar12 * fVar12,CONCAT48(fVar11 * fVar11,CONCAT44(fVar7,fVar8))));
    fVar7 = SUB164(auVar6,0);
    fVar7 = (3.0 - fVar8 * fVar7 * fVar7) * 0.5 * fVar7;
    if (fVar7 <= 0.0) {
        fVar7 = 0.0;
    }
    *(undefined (*) [16])(param_1 + 0x270) =
            CONCAT412(fVar7 * fVar12,CONCAT48(fVar7 * fVar11,CONCAT44(fVar7 * fVar10,fVar7 * fVar9)));
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack328);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140622800(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    float fVar9;
    float fVar10;

    lVar5 = FUN_1403d90d0(DAT_140c65898);
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar5 == 0) {
        if ((lVar6 != 0) && ((*(byte *)(param_1 + 0x380) & 0x80) != 0)) {
            fVar9 = *(float *)(lVar6 + 0x1230) - *(float *)(param_1 + 0x310);
            fVar10 = *(float *)(lVar6 + 0x1234) - *(float *)(param_1 + 0x314);
            fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + 0.0);
            *(undefined (*) [16])(param_1 + 0x150) =
                    CONCAT412((0.0 - *(float *)(param_1 + 0x1ec)) * fVar9 + *(float *)(lVar6 + 0x123c),
                              CONCAT48((0.0 - *(float *)(param_1 + 0x1e8)) * fVar9 +
                                       *(float *)(lVar6 + 0x1238),
                                       CONCAT44((0.0 - *(float *)(param_1 + 0x1e4)) * fVar9 +
                                                *(float *)(lVar6 + 0x1234),
                                                (0.0 - *(float *)(param_1 + 0x1e0)) * fVar9 +
                                                *(float *)(lVar6 + 0x1230))));
            return;
        }
        *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x140);
        *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x144);
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x148);
        *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x14c);
        return;
    }
    if (*(int *)(param_1 + 0x3b4) == 0) {
        LAB_14062289f:
        plVar7 = *(longlong **)(lVar5 + 0x16e8);
    }
    else {
        plVar7 = *(longlong **)(lVar5 + 0xcc0);
        if (plVar7 == (longlong *)0x0) goto LAB_14062293d;
        plVar7 = (longlong *)
                (**(code **)(*plVar7 + 0x70))
                (plVar7,*(int *)(param_1 + 0x3b4),*(undefined4 *)(param_1 + 0x3b8));
        if (plVar7 == (longlong *)0x0) goto LAB_14062293d;
        iVar4 = (**(code **)(*plVar7 + 0x3b0))(plVar7);
        if (iVar4 == 0) {
            if ((*(int *)(param_1 + 0x3b4) == 0x14) || (*(int *)(param_1 + 0x3b4) == 7)) {
                *(undefined4 *)(param_1 + 0x2c4) = 1;
            }
            goto LAB_14062289f;
        }
    }
    if (plVar7 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar7 + 0x350))(plVar7,*(undefined4 *)(param_1 + 0x3ac));
        if (iVar4 != 0) {
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x3c8))(plVar7);
            iVar4 = (**(code **)(*plVar8 + 0x1b8))(plVar8);
            if (iVar4 != 0) {
                iVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);
                if (iVar4 == 0) {
                    (**(code **)(*plVar7 + 0x128))(plVar7,1);
                }
                (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined4 *)(param_1 + 0x3ac),param_1 + 0x110,0);
                *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x140);
                *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x144);
                *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x148);
                *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x14c);
                return;
            }
        }
    }
    LAB_14062293d:
    uVar1 = *(undefined4 *)(lVar5 + 0x1234);
    uVar2 = *(undefined4 *)(lVar5 + 0x1238);
    uVar3 = *(undefined4 *)(lVar5 + 0x123c);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar5 + 0x1230);
    *(undefined4 *)(param_1 + 0x154) = uVar1;
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    *(undefined4 *)(param_1 + 0x15c) = uVar3;
    uVar3 = uRam0000000140c7841c;
    uVar2 = uRam0000000140c78418;
    uVar1 = uRam0000000140c78414;
    *(undefined4 *)(param_1 + 0x110) = _DAT_140c78410;
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
    uVar3 = uRam0000000140c7842c;
    uVar2 = uRam0000000140c78428;
    uVar1 = uRam0000000140c78424;
    *(undefined4 *)(param_1 + 0x120) = _DAT_140c78420;
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    *(undefined4 *)(param_1 + 0x128) = uVar2;
    *(undefined4 *)(param_1 + 300) = uVar3;
    uVar3 = uRam0000000140c7843c;
    uVar2 = uRam0000000140c78438;
    uVar1 = uRam0000000140c78434;
    *(undefined4 *)(param_1 + 0x130) = _DAT_140c78430;
    *(undefined4 *)(param_1 + 0x134) = uVar1;
    *(undefined4 *)(param_1 + 0x138) = uVar2;
    *(undefined4 *)(param_1 + 0x13c) = uVar3;
    *(undefined (*) [16])(param_1 + 0x140) =
            CONCAT412(0x3f800000,*(undefined (*) [12])(param_1 + 0x150));
    return;
}



void FUN_140622a40(longlong param_1)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    longlong lVar6;
    float *pfVar7;
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    undefined local_48 [64];

    if ((*(byte *)(param_1 + 0x380) & 0x80) != 0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 900));
        lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388));
        if (lVar5 == 0) {
            if (lVar6 != 0) {
                *(undefined (*) [16])(param_1 + 0x1e0) =
                        CONCAT412(0.0 - (*(float *)(lVar6 + 0x11bc) * *(float *)(param_1 + 0x21c) -
                                         *(float *)(lVar6 + 0x11bc) * *(float *)(param_1 + 0x21c)),
                                  CONCAT48(0.0 - (*(float *)(lVar6 + 0x11b4) * *(float *)(param_1 + 0x210) -
                                                  *(float *)(lVar6 + 0x11b0) * *(float *)(param_1 + 0x214)),
                                           CONCAT44(0.0 - (*(float *)(lVar6 + 0x11b0) * 0.0 -
                                                           *(float *)(lVar6 + 0x11b8) *
                                                           *(float *)(param_1 + 0x210)),
                                                    0.0 - (*(float *)(param_1 + 0x214) * 0.0 -
                                                           *(float *)(lVar6 + 0x11b4) * 0.0))));
            }
        }
        else {
            pfVar7 = (float *)FUN_1405b4520(lVar5,local_48);
            *(undefined (*) [16])(param_1 + 0x1e0) =
                    CONCAT412(pfVar7[3] * *(float *)(param_1 + 0x21c) -
                              pfVar7[3] * *(float *)(param_1 + 0x21c),
                              CONCAT48(pfVar7[1] * *(float *)(param_1 + 0x210) -
                                       *pfVar7 * *(float *)(param_1 + 0x214),
                                       CONCAT44(*pfVar7 * 0.0 - pfVar7[2] * *(float *)(param_1 + 0x210),
                                                *(float *)(param_1 + 0x214) * 0.0 - pfVar7[1] * 0.0)));
        }
        fVar1 = *(float *)(param_1 + 0x1e0);
        fVar2 = *(float *)(param_1 + 0x1e4);
        fVar3 = *(float *)(param_1 + 0x1e8);
        fVar4 = *(float *)(param_1 + 0x1ec);
        fVar9 = fVar2 * fVar2;
        fVar10 = fVar1 * fVar1 + fVar9 + 0.0;
        auVar8 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                         CONCAT412(fVar4 * fVar4,CONCAT48(fVar3 * fVar3,CONCAT44(fVar9,fVar10))));
        fVar9 = SUB164(auVar8,0);
        fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * 0.5 * fVar9;
        if (fVar9 <= 0.0) {
            fVar9 = 0.0;
        }
        *(undefined (*) [16])(param_1 + 0x1e0) =
                CONCAT412(fVar9 * fVar4,CONCAT48(fVar9 * fVar3,CONCAT44(fVar9 * fVar2,fVar9 * fVar1)));
    }
    return;
}



void FUN_140622b70(longlong param_1)

{
    if (*(int *)(param_1 + 0x2a4) == 0) {
        *(undefined4 *)(param_1 + 0x2a4) = 1;
        if (*(longlong *)(param_1 + 0x440) != 0) {
            FUN_140195d70();
        }
        if (*(longlong *)(param_1 + 0x488) != 0) {
            FUN_140195d70();
        }
        if (*(longlong *)(param_1 + 0x4d0) != 0) {
            FUN_140195d70();
        }
        if (*(longlong *)(param_1 + 0x518) != 0) {
            FUN_140195d70();
        }
        if (*(longlong *)(param_1 + 0x560) != 0) {
            FUN_140195d70();
        }
        if ((((*(longlong *)(param_1 + 0x30) != 0) || (*(longlong *)(param_1 + 0x38) != 0)) ||
             (*(longlong *)(param_1 + 0x88) != 0)) || (*(longlong *)(param_1 + 0x60) != 0)) {
            FUN_14061a140(param_1,*(int *)(param_1 + 0x2b8) == 0);
        }
        if (*(int *)(param_1 + 0x3c8) == 3) {
            FUN_140620d70();
        }
        if ((*(longlong *)(param_1 + 0x5a0) != 0) || (*(longlong *)(param_1 + 0x5a8) != 0)) {
            if (*(int *)(param_1 + 0x598) == 0) {
                (**(code **)(param_1 + 0x5a8))(*(undefined8 *)(param_1 + 0x5a0));
            }
            else if (*(int *)(param_1 + 0x598) == 1) {
                (**(code **)(param_1 + 0x5a8))
                        (*(undefined8 *)(param_1 + 0x5a0),*(undefined8 *)(param_1 + 0x5b0));
            }
        }
        if ((*(int *)(param_1 + 0x264) == 0) || (*(int *)(param_1 + 0x2b8) == 0)) {
            *(undefined4 *)(param_1 + 700) = 1;
        }
        if (*(longlong **)(param_1 + 0x660) != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x000140622cc3. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(**(longlong **)(param_1 + 0x660) + 0x48))();
            return;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140622e60(longlong param_1)

{
    float *pfVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    float fVar4;
    undefined4 uVar5;
    int iVar6;
    float *pfVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    float **ppfVar11;
    undefined *puVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    undefined auVar16 [16];
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined auStack520 [32];
    undefined8 local_1e8;
    undefined4 local_1e0;
    longlong local_1d8;
    undefined4 local_1d0;
    undefined **local_1c8;
    float fStack448;
    float fStack444;
    float fStack440;
    float fStack436;
    float fStack432;
    undefined4 local_1ac;
    undefined8 local_1a8;
    float fStack416;
    float fStack412;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    undefined **local_188;
    undefined8 local_180;
    LPVOID local_178;
    float *local_170;
    longlong local_168;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    float local_148;
    float fStack324;
    undefined8 uStack320;
    float local_138;
    float fStack308;
    float fStack304;
    float fStack300;
    float fStack296;
    float fStack292;
    float fStack288;
    float fStack284;
    undefined8 local_118;
    undefined4 uStack272;
    undefined4 uStack268;
    float *local_108;
    longlong local_100;
    undefined8 local_c8;
    float *local_b8;
    longlong local_b0;
    ulonglong local_68;
    undefined local_58 [16];

    plVar10 = *(longlong **)(param_1 + 0x30);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622e8a,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x38);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622ead,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x40);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622ed0,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x48);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622ef3,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x50);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622f12,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x58);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622f31,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x60);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622f50,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) goto LAB_140622f73;
    }
    plVar10 = *(longlong **)(param_1 + 0x68);
    if (plVar10 != (longlong *)0x0) {
        local_58 = CONCAT88(0x140622f6f,local_58._0_8_);
        iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,&stack0xffffffffffffffd8,0);
        if (iVar6 == 0) {
            LAB_140622f73:
            local_58 = CONCAT88(0x140622fa6,local_58._0_8_);
            FUN_140195960(param_1 + 0x430,0,&stack0xffffffffffffffd8,4);
            return;
        }
    }
    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack520;
    if ((*(int *)(param_1 + 0x2a4) != 0) || (*(int *)(param_1 + 0x2ac) != 0)) goto LAB_140620637;
    puVar12 = (undefined *)0x0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    plVar10 = *(longlong **)(param_1 + 0x30);
    local_58 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    if (*(int *)(param_1 + 0x3c8) == 3) {
        (**(code **)(*plVar10 + 0x288))(plVar10,FUN_140623460,param_1);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3d,1);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3e,1);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3f,1);
        plVar10 = *(longlong **)(param_1 + 0x30);
        LAB_14061ff59:
        (**(code **)(*plVar10 + 0x2d8))();
    }
    else {
        if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x288))(plVar10,&LAB_140622cd0,param_1);
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3d,1);
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3e,1);
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3f,1);
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x40,1);
        }
        plVar10 = *(longlong **)(param_1 + 0x60);
        if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x288))(plVar10,&LAB_140622cd0,param_1);
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2d8))(*(longlong **)(param_1 + 0x60),0x3d,1);
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2d8))(*(longlong **)(param_1 + 0x60),0x3e,1);
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2d8))(*(longlong **)(param_1 + 0x60),0x3f,1);
            plVar10 = *(longlong **)(param_1 + 0x60);
            goto LAB_14061ff59;
        }
    }
    plVar10 = *(longlong **)(param_1 + 0x30);
    fVar21 = 1.0;
    uVar14 = 0x222;
    uVar13 = 0;
    if (plVar10 != (longlong *)0x0) {
        iVar6 = *(int *)(param_1 + 0x3c8);
        fStack448 = fVar21;
        if ((iVar6 == 0) || (iVar6 == 2)) {
            if ((*(float *)(param_1 + 0x39c) <= 1e-05) ||
                (((iVar6 = (**(code **)(*plVar10 + 0x198))(plVar10), iVar6 == 0 ||
                                                                     (*(longlong **)(param_1 + 0x48) == (longlong *)0x0)) ||
                  (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x350))(), iVar6 == 0)))) {
                iVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x198))();
                uVar15 = 0x96;
                if (iVar6 != 0) {
                    uVar15 = 0x223;
                }
            }
            else {
                lVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x1a8))
                        (*(longlong **)(param_1 + 0x30),0x222,0);
                fStack448 = (float)(ulonglong)*(uint *)(lVar8 + 0x14) / *(float *)(param_1 + 0x39c);
                uVar15 = uVar14;
            }
        }
        else if (iVar6 == 3) {
            iVar6 = (**(code **)(*plVar10 + 0x198))(plVar10);
            uVar15 = 0x96;
            if (iVar6 != 0) {
                uVar15 = 0x536;
            }
        }
        else {
            uVar15 = 0x96;
        }
        plVar10 = *(longlong **)(param_1 + 0x30);
        fStack444 = *(float *)(param_1 + 0x3c4);
        uVar5 = FUN_1401ae6f0(0);
        fStack440 = 0.0;
        fStack436 = 4.203895e-45;
        fStack432 = 0.0;
        local_1ac = 0;
        local_1c8 = (undefined **)CONCAT44(uVar5,uVar15);
        (**(code **)(*plVar10 + 0x248))(plVar10,0,&local_1c8);
    }
    plVar10 = *(longlong **)(param_1 + 0x60);
    fVar21 = 0.0;
    if (plVar10 != (longlong *)0x0) {
        iVar6 = *(int *)(param_1 + 0x3c8);
        if ((iVar6 == 0) || (iVar6 == 2)) {
            if ((((*(float *)(param_1 + 0x39c) <= 1e-05) ||
                  ((iVar6 = (**(code **)(*plVar10 + 0x198))(plVar10,0x222), iVar6 == 0 ||
                                                                            (*(longlong **)(param_1 + 0x48) == (longlong *)0x0)))) ||
                 (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x350))(), iVar6 == 0)) ||
                (uVar15 = uVar14, fVar21 == *(float *)(param_1 + 0x39c))) {
                iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x198))
                        (*(longlong **)(param_1 + 0x60),0x223);
                uVar15 = 0x96;
                if (iVar6 != 0) {
                    uVar15 = 0x223;
                }
            }
        }
        else if (iVar6 == 3) {
            iVar6 = (**(code **)(*plVar10 + 0x198))(plVar10,0x536);
            uVar15 = 0x96;
            if (iVar6 != 0) {
                uVar15 = 0x536;
            }
        }
        else {
            uVar15 = 0x96;
        }
        fStack444 = *(float *)(param_1 + 0x3c4);
        local_1c8 = (undefined **)(ulonglong)uVar15;
        fStack448 = 1.0;
        fStack440 = 0.0;
        fStack436 = 4.203895e-45;
        fStack432 = 0.0;
        local_1ac = 0;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))
                (*(longlong **)(param_1 + 0x60),0,&local_1c8);
    }
    plVar10 = *(longlong **)(param_1 + 0x38);
    if (plVar10 != (longlong *)0x0) {
        iVar6 = (**(code **)(*plVar10 + 0x198))(plVar10,0x222);
        if (iVar6 == 0) {
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                    (*(longlong **)(param_1 + 0x38),0x96);
            if (iVar6 == 0) {
                iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                        (*(longlong **)(param_1 + 0x38),0x7e0);
                if (iVar6 == 0) {
                    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                            (*(longlong **)(param_1 + 0x38),0x7e1);
                    if (iVar6 == 0) {
                        if ((*(int *)(param_1 + 0x2ac) == 0) &&
                            (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                                    (*(longlong **)(param_1 + 0x38),0x7e1), iVar6 != 0)) {
                            puVar12 = &LAB_140624c10;
                            uVar13 = 0x7e1;
                        }
                        else {
                            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                                    (*(longlong **)(param_1 + 0x38),0x7e2);
                            if (iVar6 != 0) {
                                puVar12 = &LAB_140624a90;
                                uVar13 = 0x7e2;
                            }
                        }
                    }
                    else {
                        puVar12 = &LAB_140624c10;
                        uVar13 = 0x7e1;
                    }
                }
                else {
                    puVar12 = &LAB_140624b60;
                    uVar13 = 0x7e0;
                }
            }
            else {
                puVar12 = &LAB_140624ab0;
                uVar13 = 0x96;
            }
        }
        else {
            puVar12 = &LAB_140624ab0;
            uVar13 = uVar14;
        }
        fStack444 = *(float *)(param_1 + 0x3c4);
        local_1c8 = (undefined **)(ulonglong)uVar13;
        fStack448 = 1.0;
        fStack440 = 0.0;
        fStack436 = 0.0;
        fStack432 = 0.0;
        local_1ac = 0;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                (*(longlong **)(param_1 + 0x38),0,&local_1c8);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                (*(longlong **)(param_1 + 0x38),puVar12,param_1);
    }
    fVar18 = fStack444;
    fVar17 = fStack448;
    iVar6 = *(int *)(param_1 + 0x3c0);
    fStack448 = (float)param_1;
    fVar20 = fStack448;
    fStack444 = (float)((ulonglong)param_1 >> 0x20);
    fVar4 = fStack444;
    if ((((iVar6 != -1) && ((*(uint *)(param_1 + 0x380) & 0x400) != 0)) && (iVar6 != 0)) &&
        ((*(int *)(param_1 + 0x3c8) == 3 || (*(longlong *)(param_1 + 0x38) != 0)))) {
        local_1c8 = (undefined **)((ulonglong)local_1c8 & 0xffffffff00000000);
        fStack440 = 3.53426;
        fStack436 = 1.401298e-45;
        fStack432 = 0.0;
        local_1ac = 0;
        FUN_140195960(param_1 + 0x478,iVar6,&local_1c8,4);
        fVar17 = fStack448;
        fVar18 = fStack444;
    }
    fStack444 = fVar18;
    fStack448 = fVar17;
    FUN_140622800(param_1);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x14c);
    FUN_140621c30(param_1);
    pfVar1 = (float *)(param_1 + 0x150);
    fVar17 = *pfVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x154);
    uVar2 = *(undefined4 *)(param_1 + 0x158);
    uVar3 = *(undefined4 *)(param_1 + 0x15c);
    *(float *)(param_1 + 0x1d0) = fVar17;
    *(undefined4 *)(param_1 + 0x1d4) = uVar5;
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
    *(undefined4 *)(param_1 + 0x1dc) = uVar3;
    *(float *)(param_1 + 0x1c0) = fVar17;
    *(undefined4 *)(param_1 + 0x1c4) = uVar5;
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
    *(float *)(param_1 + 0x1b0) = fVar17;
    *(undefined4 *)(param_1 + 0x1b4) = uVar5;
    *(undefined4 *)(param_1 + 0x1b8) = uVar2;
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
    fVar17 = *pfVar1 - *(float *)(param_1 + 0x160);
    fVar18 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x164);
    fVar19 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x168);
    fVar17 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19);
    if (1e-05 < fVar17) {
        fVar17 = (*(float *)(param_1 + 0x404) - *(float *)(param_1 + 0x400)) / fVar17;
    }
    else {
        fVar17 = 1e+08;
    }
    *(float *)(param_1 + 0x298) = fVar17;
    *(undefined4 *)(param_1 + 0x250) = 0;
    FUN_140622590(param_1);
    FUN_140621f70();
    if (*(longlong *)(param_1 + 0x30) != 0) {
        local_1e8 = pfVar1;
        pfVar7 = (float *)FUN_14061f3d0();
        local_1d0 = 0;
        local_158 = *pfVar7;
        fStack340 = pfVar7[1];
        fStack336 = pfVar7[2];
        fStack332 = pfVar7[3];
        local_148 = pfVar7[4];
        fStack324 = pfVar7[5];
        uStack320 = *(undefined8 *)(pfVar7 + 6);
        local_138 = pfVar7[8];
        fStack308 = pfVar7[9];
        fStack304 = pfVar7[10];
        fStack300 = pfVar7[0xb];
        fStack296 = pfVar7[0xc];
        fStack292 = pfVar7[0xd];
        fStack288 = pfVar7[0xe];
        fStack284 = pfVar7[0xf];
        local_118 = 0;
        local_1d8 = param_1 + 0x70;
        local_1e0 = 0;
        local_1e8 = (float *)CONCAT44(local_1e8._4_4_,1);
        iVar6 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,&local_158,
                 *(undefined8 *)(param_1 + 0x30));
        if (-1 < iVar6) goto LAB_1406204e9;
        local_180 = 0;
        local_188 = &PTR_LAB_140b5e648;
        local_178 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_188);
        local_170 = (float *)0x141e21ef0;
        puVar12 = &DAT_140c8afe4;
        LAB_1406205b1:
        local_1c8 = local_188;
        fStack448 = (float)local_180;
        fStack444 = (float)((ulonglong)local_180 >> 0x20);
        fStack440 = SUB84(local_178,0);
        fStack436 = (float)((ulonglong)local_178 >> 0x20);
        iVar6 = FUN_1401971e0(puVar12,5,&local_170,&local_1c8);
        local_188 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_178);
        if (iVar6 != 0) {
            DebugBreak();
        }
        goto LAB_140620637;
    }
    LAB_1406204e9:
    if (*(longlong *)(param_1 + 0x40) != 0) {
        local_1e8 = pfVar1;
        pfVar7 = (float *)FUN_14061f3d0();
        local_1d0 = 0;
        local_158 = *pfVar7;
        fStack340 = pfVar7[1];
        fStack336 = pfVar7[2];
        fStack332 = pfVar7[3];
        local_148 = pfVar7[4];
        fStack324 = pfVar7[5];
        uStack320 = *(undefined8 *)(pfVar7 + 6);
        local_138 = pfVar7[8];
        fStack308 = pfVar7[9];
        fStack304 = pfVar7[10];
        fStack300 = pfVar7[0xb];
        fStack296 = pfVar7[0xc];
        fStack292 = pfVar7[0xd];
        fStack288 = pfVar7[0xe];
        fStack284 = pfVar7[0xf];
        local_118 = 0;
        local_1d8 = param_1 + 0x78;
        local_1e0 = 0;
        local_1e8 = (float *)CONCAT44(local_1e8._4_4_,1);
        iVar6 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,&local_158,
                 *(undefined8 *)(param_1 + 0x40));
        if (iVar6 < 0) {
            local_180 = 0;
            local_188 = &PTR_LAB_140b5e648;
            local_178 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_188);
            local_170 = (float *)0x141e21f70;
            puVar12 = &DAT_140c8afe8;
            goto LAB_1406205b1;
        }
    }
    if (*(int *)(param_1 + 0x3c8) == 0) {
        *(float *)(param_1 + 0x254) = (float)(ulonglong)*(uint *)(param_1 + 0x390) * 0.001;
    }
    if (*(int *)(param_1 + 0x3c8) == 3) {
        FUN_14061b900(param_1);
        lVar8 = FUN_1403d90d0(DAT_140c65898);
        if (lVar8 != 0) {
            lVar9 = FUN_14046bec0(lVar8);
            iVar6 = *(int *)(lVar9 + 8);
            *(undefined4 *)(param_1 + 0x5c8) = 0;
            fVar21 = fVar21 / (float)(ulonglong)(iVar6 + 1);
            *(float *)(param_1 + 0x5d0) = fVar21;
            *(float *)(param_1 + 0x5cc) = fVar21;
            FUN_14046bfe0(lVar8,param_1,*(undefined4 *)(param_1 + 1000));
            if (*(int *)(param_1 + 0x3e4) != 0) {
                if (*(int *)(param_1 + 0x3dc) == 0) {
                    FUN_140623d40(param_1);
                }
                else {
                    local_1c8 = (undefined **)((ulonglong)local_1c8 & 0xffffffff00000000);
                    fStack440 = 3.534988;
                    fStack436 = 1.401298e-45;
                    fStack432 = 0.0;
                    local_1ac = 0;
                    fStack448 = fVar20;
                    fStack444 = fVar4;
                    FUN_140195960(param_1 + 0x4c0,*(int *)(param_1 + 0x3dc),&local_1c8,4);
                }
            }
        }
    }
    else if (((*(float *)(param_1 + 0x39c) <= 1e-05) ||
              (plVar10 = *(longlong **)(param_1 + 0x48), plVar10 == (longlong *)0x0)) ||
             ((iVar6 = (**(code **)(*plVar10 + 0x198))(plVar10,0x96), iVar6 == 0 ||
                                                                      (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x350))
                                                                              (*(longlong **)(param_1 + 0x48),0x43), iVar6 == 0)))) {
        FUN_140625410(param_1);
    }
    else {
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x150))
                (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x48));
        if ((*(uint *)(param_1 + 0x380) & 0x100) == 0) {
            local_158 = *(float *)(param_1 + 0x394);
            local_1e8 = pfVar1;
            local_168 = FUN_14061f3d0();
            FUN_1408fe3d0();
            fVar21 = extraout_XMM0_Da;
            FUN_1408fc950();
            fStack324 = fVar21;
            local_170 = &local_148;
            local_138 = (float)((uint)fStack324 ^ 0x80000000);
            local_118 = CONCAT44(uRam0000000140c78444,_DAT_140c78440);
            uStack272 = uRam0000000140c78448;
            uStack268 = uRam0000000140c7844c;
            uStack320 = 0;
            fStack304 = 0.0;
            fStack300 = 0.0;
            fStack296 = 0.0;
            fStack292 = 0.0;
            fStack288 = 1.0;
            fStack284 = 0.0;
            local_148 = extraout_XMM0_Da_00;
            fStack308 = extraout_XMM0_Da_00;
            local_b8 = local_170;
            local_b0 = local_168;
            FUN_1401afb10(&local_b8,&local_108);
            local_c8 = 0;
            ppfVar11 = &local_108;
        }
        else {
            local_158 = *(float *)(param_1 + 0x2e0);
            fStack340 = *(float *)(param_1 + 0x2e4);
            fVar21 = *(float *)(param_1 + 0x2e8);
            local_198 = *(float *)(param_1 + 0x310);
            local_1ac = uRam0000000140c783ac;
            fStack396 = fRam0000000140c783cc;
            fStack444 = fRam0000000140c7839c;
            fStack404 = *(float *)(param_1 + 0x314);
            fStack400 = *(float *)(param_1 + 0x318);
            fStack412 = fRam0000000140c783bc;
            fVar17 = fStack340 * fStack340;
            fVar20 = local_158 * local_158 + fVar17 + fVar21 * fVar21;
            auVar16 = rsqrtss(CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))),
                              CONCAT412(*(float *)(param_1 + 0x2ec) * *(float *)(param_1 + 0x2ec),
                                        CONCAT48(fVar21 * fVar21,CONCAT44(fVar17,fVar20))));
            fVar17 = SUB164(auVar16,0);
            fVar17 = (3.0 - fVar20 * fVar17 * fVar17) * 0.5 * fVar17;
            if (fVar17 <= 0.0) {
                fVar17 = 0.0;
            }
            local_158 = fVar17 * local_158;
            fStack340 = fVar17 * fStack340;
            local_1c8 = (undefined **)CONCAT44(fStack340,local_158);
            fStack448 = fVar17 * fVar21;
            fStack440 = *(float *)(param_1 + 0x2f0);
            fStack436 = *(float *)(param_1 + 0x2f4);
            fVar21 = *(float *)(param_1 + 0x2f8);
            fVar17 = fStack436 * fStack436;
            fVar20 = fStack440 * fStack440 + fVar17 + fVar21 * fVar21;
            auVar16 = rsqrtss(CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))),
                              CONCAT412(*(float *)(param_1 + 0x2fc) * *(float *)(param_1 + 0x2fc),
                                        CONCAT48(fVar21 * fVar21,CONCAT44(fVar17,fVar20))));
            fStack432 = SUB164(auVar16,0);
            fStack432 = (3.0 - fVar20 * fStack432 * fStack432) * 0.5 * fStack432;
            if (fStack432 <= 0.0) {
                fStack432 = 0.0;
            }
            fStack440 = fStack432 * fStack440;
            fStack436 = fStack432 * fStack436;
            fStack432 = fStack432 * fVar21;
            local_138 = *(float *)(param_1 + 0x300);
            fStack308 = *(float *)(param_1 + 0x304);
            fVar21 = *(float *)(param_1 + 0x308);
            fVar17 = fStack308 * fStack308;
            fVar20 = local_138 * local_138 + fVar17 + fVar21 * fVar21;
            auVar16 = rsqrtss(CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))),
                              CONCAT412(*(float *)(param_1 + 0x30c) * *(float *)(param_1 + 0x30c),
                                        CONCAT48(fVar21 * fVar21,CONCAT44(fVar17,fVar20))));
            fStack416 = SUB164(auVar16,0);
            fStack416 = (3.0 - fVar20 * fStack416 * fStack416) * 0.5 * fStack416;
            if (fStack416 <= 0.0) {
                fStack416 = 0.0;
            }
            local_138 = fStack416 * local_138;
            fStack308 = fStack416 * fStack308;
            local_1a8 = CONCAT44(fStack308,local_138);
            fStack416 = fStack416 * fVar21;
            local_118 = 0;
            fStack332 = fRam0000000140c7839c;
            uStack320 = CONCAT44(uRam0000000140c783ac,fStack432);
            fStack300 = fRam0000000140c783bc;
            fStack284 = fRam0000000140c783cc;
            ppfVar11 = (float **)&local_158;
            fStack336 = fStack448;
            local_148 = fStack440;
            fStack324 = fStack436;
            fStack304 = fStack416;
            fStack296 = local_198;
            fStack292 = fStack404;
            fStack288 = fStack400;
        }
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x140))(*(longlong **)(param_1 + 0x80),ppfVar11);
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1a8))
                (*(longlong **)(param_1 + 0x48),0x96,0);
        plVar10 = *(longlong **)(param_1 + 0x48);
        fVar21 = (float)(ulonglong)*(uint *)(lVar8 + 0x14) / *(float *)(param_1 + 0x39c);
        uVar5 = FUN_1401ae6f0(0,0xffffffff);
        fStack444 = 0.0;
        fStack440 = 0.0;
        fStack436 = 4.203895e-45;
        fStack432 = 0.0;
        local_1c8 = (undefined **)CONCAT44(uVar5,0x96);
        local_1ac = 0;
        fStack448 = fVar21;
        (**(code **)(*plVar10 + 0x248))(plVar10,0,&local_1c8);
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x288))
                (*(longlong **)(param_1 + 0x48),FUN_1406246f0,param_1);
        plVar10 = *(longlong **)(param_1 + 0x30);
        if (plVar10 != (longlong *)0x0) {
            if ((*(byte *)(param_1 + 0x380) & 0x80) == 0) {
                (**(code **)(*plVar10 + 0x48))(plVar10,param_1 + 0xd0);
            }
            else {
                local_158 = *(float *)(param_1 + 0x200);
                FUN_1408fe3d0();
                fVar21 = extraout_XMM0_Da_01;
                FUN_1408fc950();
                local_170 = &local_148;
                local_168 = param_1 + 0xd0;
                fStack292 = (float)((uint)fVar21 ^ 0x80000000);
                local_148 = 1.0;
                fStack324 = 0.0;
                uStack320 = 0;
                local_118 = CONCAT44(uRam0000000140c78444,_DAT_140c78440);
                uStack272 = uRam0000000140c78448;
                uStack268 = uRam0000000140c7844c;
                local_138 = 0.0;
                fStack300 = 0.0;
                fStack296 = 0.0;
                fStack284 = 0.0;
                fStack308 = extraout_XMM0_Da_02;
                fStack304 = fVar21;
                fStack288 = extraout_XMM0_Da_02;
                local_108 = local_170;
                local_100 = local_168;
                FUN_1401afb10(&local_108,&local_1c8);
                (**(code **)(*plVar10 + 0x48))(plVar10,&local_1c8);
            }
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x380))
                    (*(longlong **)(param_1 + 0x48),0x43,*(undefined8 *)(param_1 + 0x30));
        }
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
        if (lVar8 != 0) {
            plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
            iVar6 = (**(code **)(*plVar10 + 0x350))(plVar10,0x15);
            if (iVar6 != 0) {
                plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
                (**(code **)(*plVar10 + 0x380))(plVar10,0x15,*(undefined8 *)(param_1 + 0x60));
                goto LAB_140620c42;
            }
        }
        plVar10 = *(longlong **)(param_1 + 0x30);
        if ((plVar10 != (longlong *)0x0) &&
            (iVar6 = (**(code **)(*plVar10 + 0x350))(plVar10,0x2c), iVar6 != 0)) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x380))
                    (*(longlong **)(param_1 + 0x30),0x2c,*(undefined8 *)(param_1 + 0x60));
        }
    }
    LAB_140620c42:
    *(undefined4 *)(param_1 + 0x2b8) = 1;
    if (*(longlong *)(param_1 + 0x38) == 0) {
        FUN_14061a6b0(param_1);
    }
    else {
        FUN_14061b900();
    }
    LAB_140620637:
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack520);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140622fd0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_58 [80];

    FUN_14061f3d0(param_1,local_58,param_1 + 0x160,param_1 + 0x150,param_1 + 0x1f0);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x628)) {
        do {
            uVar1 = *(undefined4 *)(lVar5 + 0x20);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c04 == 0) && (iVar3 = FUN_140248ca0(), -1 < iVar3)) {
                    (**(code **)(*DAT_140c63b40 + 0x18))(DAT_140c63b40,uVar1);
                }
            }
            else {
                (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,uVar1,DAT_140c63858);
            }
            FUN_1405787d0(local_58,0,*(undefined4 *)(param_1 + 900));
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
                for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar4 = lVar2;
                }
            }
        } while (lVar5 != *(longlong *)(param_1 + 0x628));
    }
    return;
}



void FUN_140623150(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined *puVar3;
    uint uVar4;
    ulonglong local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 local_10;
    undefined4 uStack12;

    if (*(int *)(param_1 + 0x3c8) != 3) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
            FUN_140622b70();
            *(undefined4 *)(param_1 + 700) = 1;
            return;
        }
        plVar1 = *(longlong **)(param_1 + 0x38);
        if (plVar1 != (longlong *)0x0) {
            uVar4 = 0x7e0;
            iVar2 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e0);
            if (iVar2 == 0) {
                uVar4 = 0x7e1;
                iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                        (*(longlong **)(param_1 + 0x38),0x7e1);
                if ((iVar2 == 0) &&
                    ((*(int *)(param_1 + 0x2ac) != 0 ||
                      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                              (*(longlong **)(param_1 + 0x38),0x7e1), iVar2 == 0)))) {
                    uVar4 = 0x7e2;
                    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                            (*(longlong **)(param_1 + 0x38),0x7e2);
                    if (iVar2 == 0) {
                        FUN_14061a600(param_1);
                        return;
                    }
                    puVar3 = &LAB_140624a90;
                }
                else {
                    puVar3 = &LAB_140624c10;
                }
            }
            else {
                puVar3 = &LAB_140624b60;
            }
            local_20 = 0x3f800000;
            local_28 = (ulonglong)uVar4;
            uStack28 = 0;
            local_18 = 0;
            uStack20 = 0;
            local_10 = 0;
            uStack12 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                    (*(longlong **)(param_1 + 0x38),0,&local_28);
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                    (*(longlong **)(param_1 + 0x38),puVar3,param_1);
            return;
        }
        return;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x198))
            (*(longlong **)(param_1 + 0x30),0xa5);
    if (iVar2 == 0) {
        FUN_140622b70(param_1);
        return;
    }
    *(undefined4 *)(param_1 + 0x2ac) = 1;
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x458))();
        local_28 = 0xa5;
        local_20 = 0x3f800000;
        uStack28 = 0;
        local_18 = 0;
        uStack20 = 0;
        local_10 = 0;
        uStack12 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x248))
                (*(longlong **)(param_1 + 0x30),0,&local_28);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x288))
                (*(longlong **)(param_1 + 0x30),&DAT_1406235e0,param_1);
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x458))();
        uVar4 = 0x7e0;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                (*(longlong **)(param_1 + 0x38),0x7e0);
        if (iVar2 == 0) {
            uVar4 = 0x7e1;
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                    (*(longlong **)(param_1 + 0x38),0x7e1);
            if (iVar2 == 0) {
                if ((*(int *)(param_1 + 0x2ac) == 0) &&
                    (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                            (*(longlong **)(param_1 + 0x38),0x7e1), iVar2 != 0)) {
                    puVar3 = &LAB_140624c10;
                }
                else {
                    uVar4 = 0x7e2;
                    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                            (*(longlong **)(param_1 + 0x38),0x7e2);
                    if (iVar2 == 0) {
                        FUN_14061a600(param_1);
                        goto LAB_1406232da;
                    }
                    puVar3 = &LAB_140624a90;
                }
            }
            else {
                puVar3 = &LAB_140624c10;
            }
        }
        else {
            puVar3 = &LAB_140624b60;
        }
        local_28 = (ulonglong)uVar4;
        local_20 = 0x3f800000;
        uStack28 = 0;
        local_18 = 0;
        uStack20 = 0;
        local_10 = 0;
        uStack12 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                (*(longlong **)(param_1 + 0x38),0,&local_28);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                (*(longlong **)(param_1 + 0x38),puVar3,param_1);
    }
    LAB_1406232da:
    plVar1 = *(longlong **)(param_1 + 0x60);
    if ((plVar1 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*plVar1 + 0x198))(plVar1,0xa5), iVar2 != 0)) {
        local_28 = 0xa5;
        local_20 = 0x3f800000;
        uStack28 = 0;
        local_18 = 0;
        uStack20 = 0;
        local_10 = 0;
        uStack12 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))
                (*(longlong **)(param_1 + 0x60),0,&local_28);
    }
    return;
}



void FUN_140623460(void)

{
    longlong *plVar1;
    int in_R9D;
    longlong in_stack_00000030;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    if ((((in_R9D == 0) && (in_stack_00000030 != 0)) && (*(int *)(in_stack_00000030 + 0x2a4) == 0)) &&
        (*(int *)(in_stack_00000030 + 0x2ac) == 0)) {
        plVar1 = *(longlong **)(in_stack_00000030 + 0x30);
        if (plVar1 != (longlong *)0x0) {
            local_28 = 0x96;
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
            (**(code **)(**(longlong **)(in_stack_00000030 + 0x30) + 0x288))
                    (*(longlong **)(in_stack_00000030 + 0x30),FUN_140623530,in_stack_00000030);
        }
        plVar1 = *(longlong **)(in_stack_00000030 + 0x60);
        if (plVar1 != (longlong *)0x0) {
            local_28 = 0x96;
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
        }
    }
    return;
}



void FUN_140623530(void)

{
    longlong *plVar1;
    int in_R9D;
    longlong in_stack_00000030;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    if ((((in_R9D == 0) && (in_stack_00000030 != 0)) && (*(int *)(in_stack_00000030 + 0x2a4) == 0)) &&
        (*(int *)(in_stack_00000030 + 0x2ac) == 0)) {
        plVar1 = *(longlong **)(in_stack_00000030 + 0x30);
        if (plVar1 != (longlong *)0x0) {
            local_28 = 0x96;
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
        }
        plVar1 = *(longlong **)(in_stack_00000030 + 0x60);
        if (plVar1 != (longlong *)0x0) {
            local_28 = 0x96;
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
        }
    }
    return;
}



void FUN_140623d10(void)

{
    int in_R9D;
    longlong in_stack_00000030;

    if ((in_R9D == 0) && (in_stack_00000030 != 0)) {
        FUN_140625c30(in_stack_00000030);
        FUN_14018b900(in_stack_00000030,0);
        return;
    }
    return;
}



void FUN_140623d40(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    float fVar3;
    ulonglong uVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    undefined4 *puVar8;
    longlong *plVar9;
    longlong *plVar10;
    undefined4 local_188 [2];
    longlong local_180;
    code *local_178;
    undefined8 local_170;
    undefined local_168 [16];
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    longlong *local_f8;
    longlong *local_f0;
    longlong *local_e8;
    longlong *local_e0;
    longlong *local_d8;
    longlong *local_c8;
    longlong *local_c0;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 local_7c;
    undefined4 local_78;
    uint local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    float local_44;
    undefined4 local_40;

    if ((*(int *)(param_1 + 0x2a4) == 0) && (*(int *)(param_1 + 0x2ac) == 0)) {
        lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x388));
        local_180 = param_1;
        if (((lVar7 == 0) || (*(int *)(lVar7 + 0x250) != 0)) ||
            ((*(longlong *)(DAT_140c65898 + 0x6490) == lVar7 &&
              ((*(uint *)(DAT_140c65898 + 0x674c) & *(uint *)(DAT_140c65898 + 0x6750)) == 0)))) {
            local_188[0] = 0;
            local_178 = FUN_140623d40;
            local_170 = 0;
            FUN_140195960(param_1 + 0x4c0,*(undefined4 *)(param_1 + 0x3e0),local_188,4);
        }
        else {
            lVar7 = FUN_140237680(*(undefined4 *)(param_1 + 0x3e4));
            if (lVar7 != 0) {
                FUN_1407e4830(local_168,0,0x160);
                local_b4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))();
                puVar8 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
                local_158 = *puVar8;
                uStack340 = puVar8[1];
                uStack336 = puVar8[2];
                uStack332 = puVar8[3];
                plVar9 = (longlong *)0x0;
                local_148 = puVar8[4];
                uStack324 = puVar8[5];
                uStack320 = puVar8[6];
                uStack316 = puVar8[7];
                local_138 = puVar8[8];
                uStack308 = puVar8[9];
                uStack304 = puVar8[10];
                uStack300 = puVar8[0xb];
                local_128 = puVar8[0xc];
                uStack292 = puVar8[0xd];
                uStack288 = puVar8[0xe];
                uStack284 = puVar8[0xf];
                local_118 = *(undefined4 *)(param_1 + 800);
                uStack276 = *(undefined4 *)(param_1 + 0x324);
                uStack272 = *(undefined4 *)(param_1 + 0x328);
                uStack268 = *(undefined4 *)(param_1 + 0x32c);
                local_b0 = *(undefined4 *)(param_1 + 0x388);
                local_ac = *(undefined4 *)(param_1 + 0x38c);
                uVar4 = *(ulonglong *)(lVar7 + 0x18);
                local_f8 = plVar9;
                if (uVar4 != 0) {
                    if (DAT_140c3fe70 < uVar4) {
                        local_f8 = (longlong *)0x0;
                    }
                    else {
                        local_f8 = (longlong *)(uVar4 + DAT_140c3fe68);
                    }
                }
                uVar4 = *(ulonglong *)(lVar7 + 0x28);
                local_c8 = plVar9;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_c8 = (longlong *)(uVar4 + DAT_140c3fe68);
                }
                local_94 = *(undefined4 *)(lVar7 + 0x30);
                local_90 = *(undefined4 *)(lVar7 + 0x34);
                uVar4 = *(ulonglong *)(lVar7 + 0x20);
                local_f0 = plVar9;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_f0 = (longlong *)(uVar4 + DAT_140c3fe68);
                }
                uVar4 = *(ulonglong *)(lVar7 + 0x80);
                local_e8 = plVar9;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_e8 = (longlong *)(uVar4 + DAT_140c3fe68);
                }
                uVar4 = *(ulonglong *)(lVar7 + 0x88);
                local_e0 = plVar9;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_e0 = (longlong *)(uVar4 + DAT_140c3fe68);
                }
                uVar4 = *(ulonglong *)(lVar7 + 0x90);
                local_d8 = plVar9;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_d8 = (longlong *)(uVar4 + DAT_140c3fe68);
                }
                local_9c = *(undefined4 *)(lVar7 + 0x98);
                local_a4 = FUN_1401ae760(*(undefined4 *)(lVar7 + 0x9c),*(undefined4 *)(lVar7 + 0xa0));
                local_a0 = FUN_1401ae760(*(undefined4 *)(lVar7 + 0xa4),*(undefined4 *)(lVar7 + 0xa8));
                lVar5 = DAT_140c65bb0;
                local_8c = *(undefined4 *)(lVar7 + 0x40);
                local_88 = *(undefined4 *)(lVar7 + 0x44);
                local_7c = *(undefined4 *)(lVar7 + 0x48);
                local_6c = 0;
                local_78 = *(undefined4 *)(lVar7 + 0x54);
                local_70 = ((byte)~(byte)*(uint *)(lVar7 + 4) & 2 | 4) >> 1;
                if ((*(uint *)(lVar7 + 4) & 1) != 0) {
                    uVar4 = *(ulonglong *)(lVar7 + 0x18);
                    local_70 = 2;
                    local_f8 = (longlong *)0x0;
                    local_c8 = plVar9;
                    if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                        local_c8 = (longlong *)(uVar4 + DAT_140c3fe68);
                    }
                }
                local_68 = *(undefined4 *)(lVar7 + 0x5c);
                local_64 = *(undefined4 *)(lVar7 + 0x60);
                local_5c = *(undefined4 *)(lVar7 + 100);
                local_58 = *(undefined4 *)(lVar7 + 0x68);
                local_54 = *(undefined4 *)(lVar7 + 0x6c);
                uVar4 = *(ulonglong *)(lVar7 + 0x70);
                local_c0 = plVar9;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_c0 = (longlong *)(uVar4 + DAT_140c3fe68);
                }
                fVar3 = *(float *)(lVar7 + 0xb8);
                local_50 = *(undefined4 *)(lVar7 + 0x78);
                if (fVar3 == 0.0) {
                    local_44 = 0.0;
                }
                else {
                    local_44 = 1.0 / (fVar3 * fVar3);
                }
                local_40 = *(undefined4 *)(lVar7 + 0xbc);
                lVar7 = FUN_14018b280(0x670,0);
                if (lVar7 != 0) {
                    plVar9 = (longlong *)FUN_140619900(lVar7);
                }
                iVar6 = FUN_14061a840(plVar9,local_168);
                if (iVar6 < 0) {
                    if (plVar9 != (longlong *)0x0) {
                        FUN_140619bb0(plVar9);
                        FUN_14018b900(plVar9,0);
                    }
                }
                else {
                    lVar7 = *(longlong *)(lVar5 + 8);
                    plVar10 = (longlong *)FUN_14018b280(0x18);
                    if ((longlong **)(plVar10 + 2) != (longlong **)0x0) {
                        plVar10[2] = (longlong)plVar9;
                    }
                    *plVar10 = lVar7;
                    plVar10[1] = *(longlong *)(lVar7 + 8);
                    **(longlong ***)(lVar7 + 8) = plVar10;
                    *(longlong **)(lVar7 + 8) = plVar10;
                    if (*plVar9 == 0) {
                        pplVar1 = (longlong **)(param_1 + 8);
                        pplVar2 = (longlong **)(plVar9 + 1);
                        *plVar9 = (longlong)pplVar1;
                        *pplVar2 = *pplVar1;
                        *pplVar1 = plVar9;
                        if ((longlong **)*pplVar2 != (longlong **)0x0) {
                            **pplVar2 = (longlong)pplVar2;
                        }
                    }
                    pplVar1 = (longlong **)(param_1 + 0x5c0);
                    if (plVar9[4] == 0) {
                        plVar9[4] = (longlong)pplVar1;
                        pplVar2 = (longlong **)(plVar9 + 5);
                        *pplVar2 = *pplVar1;
                        *pplVar1 = plVar9;
                        if (*pplVar2 != (longlong *)0x0) {
                            (*pplVar2)[4] = (longlong)pplVar2;
                        }
                    }
                    *(undefined4 *)(plVar9 + 0xb3) = 0;
                    plVar9[0xb4] = param_1;
                    plVar9[0xb5] = (longlong)&DAT_140623670;
                    plVar9[0xb6] = 0;
                }
                local_178 = FUN_140623d40;
                local_188[0] = 0;
                local_170 = 0;
                FUN_140195960(param_1 + 0x4c0,*(undefined4 *)(param_1 + 0x3e0),local_188,4);
            }
        }
    }
    return;
}



undefined4 FUN_140624200(longlong param_1)

{
    longlong *plVar1;
    bool bVar2;
    int iVar3;
    undefined *puVar4;
    undefined4 uVar5;
    int iVar6;
    bool bVar7;
    undefined8 local_f8;
    undefined8 local_f0;
    undefined8 local_e8;
    undefined8 local_e0;
    undefined4 local_d8;
    undefined4 local_d4;
    undefined8 local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    int local_b8;
    undefined4 local_b4;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    int local_38;
    undefined4 local_34;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    if (*(int *)(param_1 + 0x2a4) != 0) {
        return *(undefined4 *)(param_1 + 0x2ac);
    }
    *(undefined4 *)(param_1 + 0x2ac) = 1;
    if (*(int *)(param_1 + 0x2b8) == 0) {
        FUN_140622b70();
        *(undefined4 *)(param_1 + 700) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x3c8);
    if (iVar3 != 0) {
        if (iVar3 == 1) goto LAB_14062456b;
        if (iVar3 != 2) {
            if (iVar3 != 3) {
                return 0;
            }
            plVar1 = *(longlong **)(param_1 + 0x38);
            if (plVar1 != (longlong *)0x0) {
                uVar5 = 0x7e0;
                iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e0);
                if (iVar3 == 0) {
                    uVar5 = 0x7e1;
                    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                            (*(longlong **)(param_1 + 0x38),0x7e1);
                    if (iVar3 == 0) {
                        if ((*(int *)(param_1 + 0x2ac) == 0) &&
                            (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                                    (*(longlong **)(param_1 + 0x38),0x7e1), iVar3 != 0)) {
                            puVar4 = &LAB_140624c10;
                        }
                        else {
                            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                                    (*(longlong **)(param_1 + 0x38),0x7e2);
                            if (iVar3 == 0) {
                                FUN_14061a600(param_1);
                                goto LAB_140624379;
                            }
                            uVar5 = 0x7e2;
                            puVar4 = &LAB_140624a90;
                        }
                    }
                    else {
                        puVar4 = &LAB_140624c10;
                    }
                }
                else {
                    puVar4 = &LAB_140624b60;
                }
                local_d4 = 0;
                local_d0 = 0x3f800000;
                local_c8 = 0;
                local_c0 = 0;
                local_d8 = uVar5;
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                        (*(longlong **)(param_1 + 0x38),0,&local_d8);
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                        (*(longlong **)(param_1 + 0x38),puVar4,param_1);
            }
            LAB_140624379:
            plVar1 = *(longlong **)(param_1 + 0x30);
            if ((plVar1 != (longlong *)0x0) &&
                (iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0xa5), iVar3 != 0)) {
                local_58 = 0xa5;
                local_50 = 0x3f800000;
                local_48 = 0;
                local_40 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x248))
                        (*(longlong **)(param_1 + 0x30),0,&local_58);
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x288))
                        (*(longlong **)(param_1 + 0x30),&DAT_1406235e0,param_1);
                plVar1 = *(longlong **)(param_1 + 0x60);
                if (plVar1 == (longlong *)0x0) {
                    return 1;
                }
                iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0xa5);
                if (iVar3 == 0) {
                    return 1;
                }
                local_98 = 0xa5;
                local_90 = 0x3f800000;
                local_88 = 0;
                local_80 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x60) + 0x248))
                        (*(longlong **)(param_1 + 0x60),0,&local_98);
                return 1;
            }
            LAB_14062456b:
            FUN_140622b70(param_1);
            return 0;
        }
        plVar1 = *(longlong **)(param_1 + 0x30);
        puVar4 = (undefined *)0x0;
        bVar7 = true;
        if ((plVar1 != (longlong *)0x0) &&
            (iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e2), iVar3 != 0)) {
            local_f8 = 0x7e2;
            local_f0 = 0x3f800000;
            local_e8 = 0;
            local_e0 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x248))
                    (*(longlong **)(param_1 + 0x30),0,&local_f8);
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x288))
                    (*(longlong **)(param_1 + 0x30),&LAB_140624a90,param_1);
            bVar7 = false;
        }
        plVar1 = *(longlong **)(param_1 + 0x38);
        if (plVar1 != (longlong *)0x0) {
            if (*(int *)(param_1 + 0x2ac) == 0) {
                iVar6 = 0x7e1;
                iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e1);
                if (iVar3 == 0) goto LAB_1406244d3;
                puVar4 = &LAB_140624c10;
            }
            else {
                LAB_1406244d3:
                iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                        (*(longlong **)(param_1 + 0x38),0x7e2);
                if (iVar3 == 0) {
                    iVar6 = 0;
                }
                else {
                    iVar6 = 0x7e2;
                    puVar4 = &LAB_140624a90;
                }
            }
            local_b4 = 0;
            local_b0 = 0x3f800000;
            local_a8 = 0;
            local_a0 = 0;
            local_b8 = iVar6;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                    (*(longlong **)(param_1 + 0x38),0,&local_b8);
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                    (*(longlong **)(param_1 + 0x38),puVar4,param_1);
            if (iVar6 != 0) {
                return 1;
            }
            FUN_14061a600(param_1);
        }
        if (!bVar7) {
            return 1;
        }
        bVar7 = *(longlong *)(param_1 + 0x488) == 0;
        goto LAB_1406246a4;
    }
    plVar1 = *(longlong **)(param_1 + 0x30);
    puVar4 = (undefined *)0x0;
    bVar7 = false;
    bVar2 = true;
    if ((plVar1 != (longlong *)0x0) &&
        (iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e2), iVar3 != 0)) {
        local_78 = 0x7e2;
        local_70 = 0x3f800000;
        local_68 = 0;
        local_60 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x248))
                (*(longlong **)(param_1 + 0x30),0,&local_78);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x288))
                (*(longlong **)(param_1 + 0x30),&LAB_140624a90,param_1);
        bVar2 = bVar7;
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
        if (*(int *)(param_1 + 0x2ac) == 0) {
            iVar6 = 0x7e1;
            iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e1);
            if (iVar3 == 0) goto LAB_140624616;
            puVar4 = &LAB_140624c10;
        }
        else {
            LAB_140624616:
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                    (*(longlong **)(param_1 + 0x38),0x7e2);
            if (iVar3 == 0) {
                iVar6 = 0;
            }
            else {
                iVar6 = 0x7e2;
                puVar4 = &LAB_140624a90;
            }
        }
        local_34 = 0;
        local_30 = 0x3f800000;
        local_28 = 0;
        local_20 = 0;
        local_38 = iVar6;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x248))
                (*(longlong **)(param_1 + 0x38),0,&local_38);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x288))
                (*(longlong **)(param_1 + 0x38),puVar4,param_1);
        if (iVar6 != 0) {
            return 1;
        }
        FUN_14061a600(param_1);
    }
    if (!bVar2) {
        return 1;
    }
    if ((*(longlong *)(param_1 + 0x488) == 0) && (*(longlong *)(param_1 + 0x30) == 0)) {
        bVar7 = true;
    }
    LAB_1406246a4:
    FUN_140622b70(param_1);
    if (bVar7) {
        *(undefined4 *)(param_1 + 700) = 1;
    }
    return 1;
}



void FUN_1406246f0(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int in_R9D;
    longlong in_stack_00000030;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    if (in_R9D == 0) {
        (**(code **)(**(longlong **)(in_stack_00000030 + 0x48) + 0x368))
                (*(longlong **)(in_stack_00000030 + 0x48),0x43,&local_18);
        *(undefined4 *)(in_stack_00000030 + 0x1d0) = local_18;
        *(undefined4 *)(in_stack_00000030 + 0x1d4) = uStack20;
        *(undefined4 *)(in_stack_00000030 + 0x1d8) = uStack16;
        *(undefined4 *)(in_stack_00000030 + 0x1dc) = uStack12;
        *(undefined4 *)(in_stack_00000030 + 0x1c0) = local_18;
        *(undefined4 *)(in_stack_00000030 + 0x1c4) = uStack20;
        *(undefined4 *)(in_stack_00000030 + 0x1c8) = uStack16;
        *(undefined4 *)(in_stack_00000030 + 0x1cc) = uStack12;
        *(undefined4 *)(in_stack_00000030 + 0x1b0) = local_18;
        *(undefined4 *)(in_stack_00000030 + 0x1b4) = uStack20;
        *(undefined4 *)(in_stack_00000030 + 0x1b8) = uStack16;
        *(undefined4 *)(in_stack_00000030 + 0x1bc) = uStack12;
        *(undefined4 *)(in_stack_00000030 + 0x150) = local_18;
        *(undefined4 *)(in_stack_00000030 + 0x154) = uStack20;
        *(undefined4 *)(in_stack_00000030 + 0x158) = uStack16;
        *(undefined4 *)(in_stack_00000030 + 0x15c) = uStack12;
        if (*(longlong **)(in_stack_00000030 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(in_stack_00000030 + 0x30) + 0x3a8))();
        }
        if (*(longlong **)(in_stack_00000030 + 0x60) != (longlong *)0x0) {
            plVar1 = *(longlong **)(in_stack_00000030 + 0x80);
            lVar2 = (**(code **)(**(longlong **)(in_stack_00000030 + 0x60) + 0x3c0))();
            lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
            if (lVar2 == lVar3) {
                (**(code **)(**(longlong **)(in_stack_00000030 + 0x60) + 0x3a8))();
            }
        }
        (**(code **)(**(longlong **)(in_stack_00000030 + 0x80) + 0x150))
                (*(longlong **)(in_stack_00000030 + 0x80),0);
        if (*(longlong **)(in_stack_00000030 + 0x48) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(in_stack_00000030 + 0x48) + 0x3a8))();
        }
        FUN_140625410(in_stack_00000030);
        FUN_140622a40(in_stack_00000030);
    }
    return;
}



void FUN_1406247e0(void)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int in_R9D;
    longlong in_stack_00000030;

    if (in_R9D == 0) {
        if (*(longlong *)(in_stack_00000030 + 0x518) != 0) {
            FUN_140195d70(in_stack_00000030 + 0x508);
        }
        plVar1 = *(longlong **)(in_stack_00000030 + 0x30);
        if ((plVar1 == (longlong *)0x0) ||
            (iVar2 = (**(code **)(*plVar1 + 0x198))(plVar1,0x7e2), iVar2 == 0)) {
            if (*(longlong **)(in_stack_00000030 + 0x60) != (longlong *)0x0) {
                plVar1 = *(longlong **)(in_stack_00000030 + 0x80);
                lVar3 = (**(code **)(**(longlong **)(in_stack_00000030 + 0x60) + 0x3c0))();
                lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
                if (lVar3 == lVar4) {
                    (**(code **)(**(longlong **)(in_stack_00000030 + 0x60) + 0x3a8))();
                }
            }
            *(undefined4 *)(in_stack_00000030 + 0x2c0) = 1;
            FUN_140622b70(in_stack_00000030);
            return;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140624cc0(longlong param_1)

{
    longlong *plVar1;
    float extraout_XMM0_Da;
    undefined auVar2 [16];
    undefined extraout_XMM0 [16];
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
    undefined auStack504 [32];
    longlong local_1d8;
    undefined *local_1d0;
    float local_1c8;
    undefined8 local_1c4;
    undefined local_1b8 [16];
    undefined local_1a8 [16];
    undefined local_198 [16];
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined8 local_178;
    longlong local_168;
    undefined8 uStack352;
    undefined8 local_158;
    float fStack336;
    float fStack332;
    float local_148;
    float fStack324;
    float fStack320;
    float fStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined local_118 [16];
    undefined4 local_108;
    undefined8 local_d8;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    fVar8 = *(float *)(param_1 + 0x1dc);
    local_158 = CONCAT44(uRam0000000140c783a4,_DAT_140c783a0);
    fStack336 = (float)uRam0000000140c783a8;
    fStack332 = fRam0000000140c783ac;
    local_148 = *(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x160);
    fStack324 = *(float *)(param_1 + 0x1d4) - *(float *)(param_1 + 0x164);
    fVar7 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x168);
    local_168 = CONCAT44(uRam0000000140c78394,_DAT_140c78390);
    uStack352._0_4_ = uRam0000000140c78398;
    uStack352._4_4_ = uRam0000000140c7839c;
    local_138 = _DAT_140c783c0;
    uStack308 = uRam0000000140c783c4;
    uStack304 = uRam0000000140c783c8;
    uStack300 = uRam0000000140c783cc;
    fVar10 = 0.0;
    fStack316 = fRam0000000140c783bc;
    fVar11 = 3.0;
    fVar15 = 0.5;
    if (local_148 * local_148 + fStack324 * fStack324 + fVar7 * fVar7 <= _DAT_140c4a8a8) {
        fVar8 = *(float *)(param_1 + 0x15c);
        local_148 = *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x160);
        fStack324 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x164);
        fVar7 = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x168);
    }
    fVar8 = fVar8 - *(float *)(param_1 + 0x16c);
    local_1c8 = 1.0;
    fVar3 = fStack324 * fStack324;
    fVar4 = local_148 * local_148 + fVar3 + fVar7 * fVar7;
    auVar2 = rsqrtss(CONCAT412(fVar3,CONCAT48(fVar3,CONCAT44(fVar3,fVar3))),
                     CONCAT124(SUB1612(CONCAT412(fVar8 * fVar8,
                                                 CONCAT48(fVar7 * fVar7,
                                                          CONCAT44(fVar3,local_148 * local_148))) >>
                                                                                                  0x20,0),fVar4));
    fStack320 = SUB164(auVar2,0);
    fStack320 = (3.0 - fVar4 * fStack320 * fStack320) * 0.5 * fStack320;
    if (fStack320 <= 0.0) {
        fStack320 = 0.0;
    }
    local_148 = fStack320 * local_148;
    fStack324 = fStack320 * fStack324;
    fStack320 = fStack320 * fVar7;
    if ((local_148 == 0.0) && (fStack320 == 0.0)) {
        if (fStack324 <= 0.0) {
            auVar2 = ZEXT416((uint)(0.0 - *(float *)(param_1 + 0x240))) &
                     (undefined  [16])0xffffffffffffffff;
            local_158._0_4_ = SUB164(auVar2,0);
            local_158._4_4_ = 0.0 - *(float *)(param_1 + 0x244);
            fStack336 = SUB164(auVar2 >> 0x40,0) - *(float *)(param_1 + 0x248);
        }
        else {
            local_158._0_4_ = *(float *)(param_1 + 0x240);
            local_158._4_4_ = *(float *)(param_1 + 0x244);
            fStack336 = *(float *)(param_1 + 0x248);
        }
        fVar7 = fStack336 * fStack324 - local_158._4_4_ * fStack320;
        fVar5 = (float)local_158 * fStack320 - fStack336 * local_148;
        local_168 = CONCAT44(fVar5,fVar7);
        fVar8 = local_158._4_4_ * local_148 - (float)local_158 * fStack324;
        uStack352 = (undefined *)CONCAT44(uRam0000000140c7839c,fVar8);
    }
    else {
        local_108 = *(undefined4 *)(param_1 + 0x394);
        FUN_1408fe3d0();
        fVar7 = extraout_XMM0_Da;
        FUN_1408fc950();
        fVar3 = SUB164(extraout_XMM0,0);
        fVar5 = local_1c8 - fVar3;
        fVar4 = local_148 * local_148 + fStack324 * fStack324 + fStack320 * fStack320;
        auVar2 = rsqrtss(extraout_XMM0,
                         CONCAT412(fStack316 * fStack316,
                                   CONCAT48(fStack320 * fStack320,CONCAT44(fStack324 * fStack324,fVar4))
                         ));
        fVar8 = SUB164(auVar2,0);
        fVar8 = (fVar11 - fVar4 * fVar8 * fVar8) * fVar15 * fVar8;
        if (fVar8 <= fVar10) {
            fVar8 = fVar10;
        }
        fVar14 = fVar8 * local_148;
        fVar8 = fVar8 * fStack324;
        fVar6 = fVar8 * fVar14 * fVar5;
        fVar9 = fVar14 * 0.0 * fVar5;
        fVar4 = fVar8 * fVar7 + fVar9;
        fVar12 = fVar8 * 0.0 * fVar5;
        fVar13 = fVar12 - fVar14 * fVar7;
        local_198 = ZEXT1216(CONCAT48(fVar5 * 0.0 + fVar3,CONCAT44(fVar13,fVar4)));
        fVar4 = fRam0000000140c77874 * (fVar6 - fVar7 * 0.0) +
                _DAT_140c77870 * (fVar14 * fVar14 * fVar5 + fVar3) + fRam0000000140c77878 * fVar4;
        fVar3 = fRam0000000140c77874 * (fVar8 * fVar8 * fVar5 + fVar3) +
                _DAT_140c77870 * (fVar7 * 0.0 + fVar6) + fRam0000000140c77878 * fVar13;
        fVar8 = fRam0000000140c77874 * (fVar14 * fVar7 + fVar12) +
                _DAT_140c77870 * (fVar9 - fVar8 * fVar7) + fRam0000000140c77878 * local_198._8_4_;
        fVar7 = fVar3 * 0.0 - fStack324 * fVar8;
        fVar5 = local_148 * fVar8 - fStack320 * fVar4;
        fVar4 = fStack324 * fVar4 - local_148 * fVar3;
        fVar6 = fStack316 * fStack332 - fStack316 * fStack332;
        fVar8 = fVar5 * fVar5;
        fVar3 = fVar7 * fVar7 + fVar8 + fVar4 * fVar4;
        auVar2 = rsqrtss(CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))),
                         CONCAT124(SUB1612(CONCAT412(fVar6 * fVar6,
                                                     CONCAT48(fVar4 * fVar4,
                                                              CONCAT44(fVar8,fVar7 * fVar7))) >> 0x20,0)
                                 ,fVar3));
        fVar8 = SUB164(auVar2,0);
        fVar8 = (fVar11 - fVar3 * fVar8 * fVar8) * fVar15 * fVar8;
        if (fVar8 <= fVar10) {
            fVar8 = fVar10;
        }
        fVar7 = fVar8 * fVar7;
        fVar5 = fVar8 * fVar5;
        local_168 = CONCAT44(fVar5,fVar7);
        fVar8 = fVar8 * fVar4;
        uStack352 = (undefined *)CONCAT44(uStack352._4_4_,fVar8);
        local_158._0_4_ = fVar8 * fStack324 - fVar5 * fStack320;
        local_158._4_4_ = fVar7 * fStack320 - fVar8 * local_148;
        fStack336 = fVar5 * local_148 - fVar7 * fStack324;
    }
    local_188 = *(undefined4 *)(param_1 + 0x1b0);
    uStack388 = *(undefined4 *)(param_1 + 0x1b4);
    local_1b8 = CONCAT412(uStack352._4_4_,CONCAT48(fVar8,CONCAT44(fVar5,fVar7)));
    local_1a8 = CONCAT412(fStack332,CONCAT48(fStack336,CONCAT44(local_158._4_4_,(float)local_158)));
    local_198 = CONCAT412(fStack316,CONCAT48(fStack320,CONCAT44(fStack324,local_148)));
    local_178 = 0;
    uStack384 = *(undefined4 *)(param_1 + 0x1b8);
    uStack380 = uStack300;
    local_138 = local_188;
    uStack308 = uStack388;
    uStack304 = uStack384;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x140))(*(longlong **)(param_1 + 0x80),local_1b8);
    fVar8 = *(float *)(param_1 + 0x3f4);
    fVar10 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x150);
    fVar11 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x154);
    fVar15 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x158);
    fVar7 = local_1c8;
    if ((fVar10 * fVar10 + fVar11 * fVar11 + fVar15 * fVar15) * fVar8 < local_1c8) {
        fVar7 = (fVar10 * fVar10 + fVar11 * fVar11 + 0.0) * fVar8;
    }
    fVar11 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x160);
    fVar15 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x164);
    fVar3 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x168);
    fVar10 = local_1c8;
    if ((fVar11 * fVar11 + fVar15 * fVar15 + fVar3 * fVar3) * fVar8 < local_1c8) {
        fVar10 = (fVar11 * fVar11 + fVar15 * fVar15 + 0.0) * fVar8;
    }
    if (fVar10 < fVar7) {
        if (fVar10 < local_1c8) {
            *(undefined4 *)(param_1 + 0x2b4) = 1;
            local_1c8 = fVar10;
        }
    }
    else if (fVar7 < local_1c8) {
        local_1c8 = fVar7;
    }
    local_1c8 = SQRT(local_1c8);
    if ((*(byte *)(param_1 + 0x380) & 4) != 0) {
        local_1c8 = SQRT(local_1c8);
    }
    local_1d8 = 0x9a;
    local_1d0 = (undefined *)0x3f800000;
    local_1c4 = 1;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 600))(*(longlong **)(param_1 + 0x58),0,&local_1d8);
    if ((*(int *)(param_1 + 0x2b4) == 0) || ((*(byte *)(param_1 + 0x380) & 1) != 0)) {
        plVar1 = *(longlong **)(param_1 + 0x30);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x48))(plVar1,param_1 + 0xd0);
        }
    }
    else {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x378))
                (*(longlong **)(param_1 + 0x58),0x43,local_1b8);
        *(undefined4 *)(param_1 + 0x1b0) = local_188;
        *(undefined4 *)(param_1 + 0x1b4) = uStack388;
        *(undefined4 *)(param_1 + 0x1b8) = uStack384;
        *(undefined4 *)(param_1 + 0x1bc) = uStack380;
        if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x3a8))();
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x150))
                    (*(longlong **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x30));
            local_1d8 = param_1 + 0xd0;
            local_1d0 = local_1b8;
            local_168 = local_1d8;
            uStack352 = local_1d0;
            FUN_1401afb10(&local_168,local_118);
            local_d8 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x140))
                    (*(longlong **)(param_1 + 0x70),local_118);
        }
    }
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack504);
    return;
}



void FUN_140625410(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined8 local_88;
    undefined4 local_80;
    undefined4 uStack124;
    undefined4 uStack120;
    undefined8 local_74;
    undefined4 local_6c;
    undefined local_68 [96];

    fVar7 = 1.0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 1;
    plVar4 = *(longlong **)(param_1 + 0x58);
    if (plVar4 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar4 + 0x350))(plVar4,0x43);
        if (iVar1 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x80) + 0x150))
                    (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x58));
            plVar4 = *(longlong **)(param_1 + 0x58);
            local_80 = *(undefined4 *)(param_1 + 0x3f8);
            uVar2 = FUN_1401ae6f0(0,0xffffffff);
            uStack124 = 0;
            uStack120 = 0;
            local_74 = 3;
            local_6c = 0;
            local_88 = CONCAT44(uVar2,0x96);
            (**(code **)(*plVar4 + 0x248))(plVar4,0,&local_88);
            local_88 = 0x9a;
            uStack120 = 0;
            local_80 = 0x3f800000;
            uStack124 = 0;
            local_74 = 1;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 600))
                    (*(longlong **)(param_1 + 0x58),3,&local_88);
            plVar4 = *(longlong **)(param_1 + 0x30);
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x48))(plVar4,param_1 + 0xd0);
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x3a8))();
                (**(code **)(**(longlong **)(param_1 + 0x58) + 0x380))
                        (*(longlong **)(param_1 + 0x58),0x43,*(undefined8 *)(param_1 + 0x30));
            }
            FUN_140624cc0(param_1);
        }
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
        if (lVar3 != 0) {
            plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
            iVar1 = (**(code **)(*plVar4 + 0x350))(plVar4,0x15);
            if (iVar1 != 0) {
                (**(code **)(**(longlong **)(param_1 + 0x60) + 0x3a8))();
                plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
                (**(code **)(*plVar4 + 0x380))(plVar4,0x15,*(undefined8 *)(param_1 + 0x60));
                goto LAB_140625602;
            }
        }
        plVar4 = *(longlong **)(param_1 + 0x30);
        if (plVar4 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar4 + 0x350))(plVar4,0x2c);
            if (iVar1 != 0) {
                (**(code **)(**(longlong **)(param_1 + 0x60) + 0x3a8))();
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x380))
                        (*(longlong **)(param_1 + 0x30),0x2c,*(undefined8 *)(param_1 + 0x60));
            }
        }
    }
    LAB_140625602:
    FUN_140622800(param_1);
    FUN_140621c30(param_1);
    FUN_140621f70(param_1);
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (plVar4 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar4 + 0x198))(plVar4,0x96);
        if (iVar1 != 0) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x350))
                    (*(longlong **)(param_1 + 0x50),0x43);
            if (iVar1 != 0) {
                FUN_140622590(param_1,local_68);
                (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
                        (*(longlong **)(param_1 + 0x50),local_68);
                plVar4 = *(longlong **)(param_1 + 0x50);
                uVar2 = FUN_1401ae6f0(0,0xffffffff);
                local_80 = 0x3f800000;
                uStack124 = 0;
                uStack120 = 0;
                local_74 = 3;
                local_6c = 0;
                local_88 = CONCAT44(uVar2,0x96);
                (**(code **)(*plVar4 + 0x248))(plVar4,0,&local_88);
                (**(code **)(**(longlong **)(param_1 + 0x50) + 0x368))
                        (*(longlong **)(param_1 + 0x50),0x43,(float *)(param_1 + 0x170));
                fVar5 = *(float *)(param_1 + 0x170) - *(float *)(param_1 + 0x160);
                fVar6 = *(float *)(param_1 + 0x174) - *(float *)(param_1 + 0x164);
                *(float *)(param_1 + 0x290) = fVar5 * fVar5 + fVar6 * fVar6 + 0.0;
                goto LAB_14062570d;
            }
        }
    }
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x16c);
    LAB_14062570d:
    fVar5 = *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x170);
    fVar6 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x174);
    *(float *)(param_1 + 0x22c) =
            SQRT(fVar5 * fVar5 + fVar6 * fVar6 + 0.0) * *(float *)(param_1 + 0x3fc);
    if (1e-05 <= *(float *)(param_1 + 0x254)) {
        *(float *)(param_1 + 0x230) = fVar7 / *(float *)(param_1 + 0x254);
    }
    else {
        *(undefined4 *)(param_1 + 0x230) = 0x501502f9;
    }
    return;
}



void FUN_1406257a0(longlong param_1,int param_2,undefined4 *param_3,undefined8 *param_4)

{
    int iVar1;

    if (param_2 == 0x96) {
        LAB_14062584c:
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                (*(longlong **)(param_1 + 0x38),0x7e0);
        if (iVar1 != 0) {
            *param_3 = 0x7e0;
            *param_4 = &LAB_140624b60;
            return;
        }
        LAB_140625882:
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                (*(longlong **)(param_1 + 0x38),0x7e1);
        if (iVar1 != 0) goto LAB_140625898;
    }
    else {
        if (param_2 == 0x222) {
            LAB_140625816:
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                    (*(longlong **)(param_1 + 0x38),0x96);
            if (iVar1 != 0) {
                *param_3 = 0x96;
                *param_4 = &LAB_140624ab0;
                return;
            }
            goto LAB_14062584c;
        }
        if (param_2 == 0x7e0) goto LAB_140625882;
        if (param_2 != 0x7e1) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                    (*(longlong **)(param_1 + 0x38),0x222);
            if (iVar1 != 0) {
                *param_3 = 0x222;
                *param_4 = &LAB_140624ab0;
                return;
            }
            goto LAB_140625816;
        }
    }
    if (*(int *)(param_1 + 0x2ac) == 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
                (*(longlong **)(param_1 + 0x38),0x7e1);
        if (iVar1 != 0) {
            LAB_140625898:
            *param_3 = 0x7e1;
            *param_4 = &LAB_140624c10;
            return;
        }
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))
            (*(longlong **)(param_1 + 0x38),0x7e2);
    if (iVar1 != 0) {
        *param_3 = 0x7e2;
        *param_4 = &LAB_140624a90;
        return;
    }
    *param_4 = 0;
    *param_3 = 0;
    return;
}



void FUN_140625930(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x440) != 0) {
        FUN_140195d70(param_1 + 0x430);
    }
    if (*(longlong *)(param_1 + 0x488) != 0) {
        FUN_140195d70(param_1 + 0x478);
    }
    if (*(longlong *)(param_1 + 0x4d0) != 0) {
        FUN_140195d70(param_1 + 0x4c0);
    }
    if (*(longlong *)(param_1 + 0x518) != 0) {
        FUN_140195d70(param_1 + 0x508);
    }
    if (*(longlong *)(param_1 + 0x560) != 0) {
        FUN_140195d70(param_1 + 0x550);
    }
    if ((((*(longlong *)(param_1 + 0x30) != 0) || (*(longlong *)(param_1 + 0x38) != 0)) ||
         (*(longlong *)(param_1 + 0x88) != 0)) || (*(longlong *)(param_1 + 0x60) != 0)) {
        FUN_14061a140(param_1,1);
    }
    if (*(int *)(param_1 + 0x3c8) == 3) {
        FUN_140620d70(param_1);
    }
    if (*(longlong **)(param_1 + 0x660) != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001406259f8. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)(param_1 + 0x660) + 0x48))();
        return;
    }
    return;
}



void FUN_140625a10(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    longlong **pplVar1;
    longlong lVar2;

    *(undefined4 *)(param_3 + 0x29c) = param_2;
    if (*(longlong **)(param_3 + 0x70) != (longlong *)0x0) {
        param_1 = (**(code **)(**(longlong **)(param_3 + 0x70) + 0x98))();
    }
    if (*(longlong **)(param_3 + 0x78) != (longlong *)0x0) {
        param_1 = (**(code **)(**(longlong **)(param_3 + 0x78) + 0x98))(param_1,param_2);
    }
    if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
        param_1 = (**(code **)(**(longlong **)(param_3 + 0x80) + 0x98))(param_1,param_2);
    }
    for (pplVar1 = *(longlong ***)(param_3 + 0x88); pplVar1 != (longlong **)0x0;
         pplVar1 = (longlong **)pplVar1[3]) {
        param_1 = (**(code **)(**pplVar1 + 0x98))(param_1,param_2);
    }
    for (lVar2 = *(longlong *)(param_3 + 0x5c0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
        param_1 = FUN_140625a10(param_1,param_2,lVar2);
    }
    return;
}



undefined8 FUN_140625ad0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = DAT_140c65898;
    if ((*(longlong *)(DAT_140c65898 + 0x71a8) == 0) ||
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x71a8) + 0x2b8) == 0)) {
        return 0;
    }
    lVar3 = *(longlong *)(DAT_140c65898 + 0x7198);
    if (*(int *)(lVar3 + 0x2c) != 0) {
        if (((*(uint *)(param_1 + 0x388) & 0xc0000000) != 0x40000000) &&
            (iVar1 = FUN_140482550(lVar3), iVar1 == 0)) {
            return 1;
        }
        if (((*(uint *)(param_1 + 900) & 0xc0000000) != 0x40000000) &&
            (iVar1 = FUN_140482550(lVar3), iVar1 == 0)) {
            return 1;
        }
    }
    lVar2 = FUN_1403d90d0(lVar2);
    lVar3 = FUN_1403d90d0();
    if ((((lVar2 == 0) || (*(longlong *)(DAT_140c65898 + 0x71a8) == 0)) ||
         (*(longlong *)(lVar2 + 0x36f8) != *(longlong *)(DAT_140c65898 + 0x71a8))) &&
        (((lVar3 == 0 || (*(longlong *)(DAT_140c65898 + 0x71a8) == 0)) ||
          (*(longlong *)(lVar3 + 0x36f8) != *(longlong *)(DAT_140c65898 + 0x71a8))))) {
        return 0;
    }
    return 1;
}



undefined8 FUN_140625c00(longlong param_1)

{
    undefined8 uVar1;

    if (*(longlong *)(param_1 + 0x658) != 0) {
        return 0;
    }
    // WARNING: Could not recover jumptable at 0x000140625c1d. Too many branches
    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,(longlong *)(param_1 + 0x658),0);
    return uVar1;
}



void FUN_140625c30(longlong **param_1)

{
    int *piVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*param_1 != (longlong *)0x0) {
        lVar2 = (**(code **)(**param_1 + 0x148))();
        if (lVar2 != 0) {
            plVar3 = (longlong *)(**(code **)(**param_1 + 0x148))();
            (**(code **)(*plVar3 + 0x288))(plVar3,0,0);
            plVar3 = (longlong *)(**(code **)(**param_1 + 0x148))();
            (**(code **)(*plVar3 + 0x460))(plVar3,0,0);
            plVar3 = (longlong *)(**(code **)(**param_1 + 0x148))();
            (**(code **)(*plVar3 + 0x3a8))(plVar3);
        }
        if (*param_1 != (longlong *)0x0) {
            (**(code **)(**param_1 + 8))();
            *param_1 = (longlong *)0x0;
        }
    }
    if (param_1[1] != (longlong *)0x0) {
        piVar1 = (int *)((longlong)param_1[1] + 0x264);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            *(undefined4 *)((longlong)param_1[1] + 700) = 1;
        }
    }
    if ((longlong **)param_1[2] != (longlong **)0x0) {
        *param_1[2] = (longlong)param_1[3];
    }
    if (param_1[3] != (longlong *)0x0) {
        param_1[3][2] = (longlong)param_1[2];
    }
    param_1[2] = (longlong *)0x0;
    param_1[3] = (longlong *)0x0;
    if (*param_1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140625d18. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**param_1 + 8))();
        return;
    }
    return;
}



ulonglong FUN_140625d30(longlong param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_res8 [2];

    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        do {
            lVar2 = DAT_140c65898;
            local_res8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4);
            uVar4 = (**(code **)(DAT_140c65898 + 0x6f20))(local_res8);
            for (puVar1 = *(ulonglong **)
                    (*(longlong *)(lVar2 + 0x6f18) + (uVar4 % *(ulonglong *)(lVar2 + 0x6f10)) * 8);
                 puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
                if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x6f28))(local_res8), iVar3 != 0)) {
                    if ((puVar1 + 3 != (ulonglong *)0x0) &&
                        ((uVar4 = puVar1[3], uVar4 != 0 && (*(int *)(uVar4 + 0x250) == 0)))) {
                        return uVar4;
                    }
                    break;
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x18));
    }
    return 0;
}



char FUN_140625e00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar6 [16];

    uVar1 = *(ulonglong *)(param_1 + 0x18);
    uVar3 = 0;
    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar5 = 0.0;
    if (uVar1 != 0) {
        do {
            lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4)
                    ,param_3,param_4,auVar6);
            if (*(longlong *)(lVar2 + 0x100) == 0) {
                if (*(longlong *)(lVar2 + 0x18) == 0) {
                    fVar4 = 0.0;
                }
                else {
                    fVar4 = *(float *)(*(longlong *)(lVar2 + 0x18) + 0x30);
                }
            }
            else {
                fVar4 = *(float *)(*(longlong *)(lVar2 + 0x100) + 0xc);
            }
            uVar3 = uVar3 + 1;
            fVar5 = fVar5 + fVar4;
        } while (uVar3 < uVar1);
        if (0.6 < fVar5) {
            if (fVar5 <= 1.3) {
                return '\x01';
            }
            if (fVar5 <= 1.75) {
                return '\x02';
            }
            if (fVar5 <= 2.5) {
                return '\x03';
            }
            if (fVar5 <= 10.0) {
                return '\x04';
            }
            if (fVar5 <= 20.0) {
                return '\x05';
            }
            return (40.0 < fVar5) + '\x06';
        }
    }
    return '\0';
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140625f00(longlong *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    int iVar7;
    float *pfVar8;
    longlong lVar9;
    uint extraout_XMM0_Da;
    undefined auVar10 [16];
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    uint uVar15;
    undefined auStack824 [32];
    undefined4 local_318;
    undefined4 local_310;
    longlong **local_308;
    undefined *local_2f8;
    float *local_2f0;
    float local_2e8;
    float fStack740;
    float fStack736;
    float fStack732;
    float local_2d8;
    float fStack724;
    float fStack720;
    float fStack716;
    float local_2c8;
    float fStack708;
    float fStack704;
    float fStack700;
    undefined local_2b8 [8];
    undefined4 uStack688;
    undefined local_2a8 [16];
    undefined local_298 [16];
    undefined local_288 [16];
    undefined4 local_278;
    undefined4 uStack628;
    undefined4 uStack624;
    undefined4 uStack620;
    longlong local_268;
    undefined local_258 [16];
    undefined local_248 [16];
    undefined local_238 [16];
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined local_218 [64];
    longlong local_1d8;
    undefined local_1c8 [64];
    undefined *local_188;
    undefined *local_180;
    undefined *local_138;
    float *local_130;
    undefined local_128 [64];
    undefined *local_e8 [2];
    undefined local_d8 [64];
    ulonglong local_98;

    local_98 = DAT_140c0f7b0 ^ (ulonglong)auStack824;
    if (*(int *)((longlong)param_1 + 0xbc) == 1) {
        pfVar8 = (float *)(**(code **)(*(longlong *)param_1[1] + 0x38))();
        local_2e8 = *pfVar8;
        fStack740 = pfVar8[1];
        fStack736 = pfVar8[2];
        fStack732 = pfVar8[3];
        local_2d8 = pfVar8[4];
        fStack724 = pfVar8[5];
        fStack720 = pfVar8[6];
        fStack716 = pfVar8[7];
        local_2c8 = pfVar8[8];
        fStack708 = pfVar8[9];
        fStack704 = pfVar8[10];
        fStack700 = pfVar8[0xb];
        _local_2b8 = *(undefined (*) [16])(pfVar8 + 0xc);
    }
    else {
        lVar9 = (**(code **)(*(longlong *)param_1[1] + 0x38))();
        local_2e8 = _DAT_140c78410;
        fStack740 = fRam0000000140c78414;
        fStack736 = fRam0000000140c78418;
        fStack732 = fRam0000000140c7841c;
        local_2c8 = _DAT_140c78430;
        fStack708 = fRam0000000140c78434;
        fStack704 = fRam0000000140c78438;
        fStack700 = fRam0000000140c7843c;
        local_2d8 = _DAT_140c78420;
        fStack724 = fRam0000000140c78424;
        fStack720 = fRam0000000140c78428;
        fStack716 = fRam0000000140c7842c;
        _local_2b8 = CONCAT412(0x3f800000,*(undefined (*) [12])(lVar9 + 0x30));
    }
    lVar9 = DAT_140c65898;
    fVar11 = fStack708 * fStack708;
    fVar13 = local_2c8 * local_2c8 + fVar11 + 0.0;
    fVar12 = fStack724 * fStack724;
    auVar10 = rsqrtss(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar11))),
                      CONCAT412(fStack700 * fStack700,
                                CONCAT48(fStack704 * fStack704,CONCAT44(fVar11,fVar13))));
    fVar11 = SUB164(auVar10,0);
    fVar11 = (3.0 - fVar13 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    fVar14 = local_2d8 * local_2d8 + fVar12 + 0.0;
    auVar10 = rsqrtss(CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))),
                      CONCAT412(fStack716 * fStack716,
                                CONCAT48(fStack720 * fStack720,CONCAT44(fVar12,fVar14))));
    fVar13 = fStack740 * fStack740;
    fVar12 = SUB164(auVar10,0);
    fVar12 = (3.0 - fVar14 * fVar12 * fVar12) * 0.5 * fVar12;
    if (fVar12 <= 0.0) {
        fVar12 = 0.0;
    }
    fVar14 = local_2e8 * local_2e8 + fVar13 + 0.0;
    auVar10 = rsqrtss(CONCAT412(fVar13,CONCAT48(fVar13,CONCAT44(fVar13,fVar13))),
                      CONCAT412(fStack732 * fStack732,
                                CONCAT48(fStack736 * fStack736,CONCAT44(fVar13,fVar14))));
    fVar13 = SUB164(auVar10,0);
    fVar13 = (3.0 - fVar14 * fVar13 * fVar13) * 0.5 * fVar13;
    if (fVar13 <= 0.0) {
        fVar13 = 0.0;
    }
    local_258 = ZEXT1216(CONCAT48(fVar13 * fStack736,CONCAT44(fVar13 * fStack740,fVar13 * local_2e8)))
            ;
    local_248 = ZEXT1216(CONCAT48(fVar12 * fStack720,CONCAT44(fVar12 * fStack724,fVar12 * local_2d8)))
            ;
    local_238 = ZEXT1216(CONCAT48(fVar11 * fStack704,CONCAT44(fVar11 * fStack708,fVar11 * local_2c8)))
            ;
    local_228 = local_2b8._0_4_;
    uStack548 = local_2b8._4_4_;
    uStack544 = uStack688;
    uStack540 = 0x3f800000;
    local_2a8 = ZEXT1216(CONCAT48(fVar13 * fStack736,CONCAT44(fVar13 * fStack740,fVar13 * local_2e8)))
            ;
    local_268 = *(longlong *)(DAT_140c65898 + 0x78) + 0x11e0;
    local_298 = ZEXT1216(CONCAT48(fVar12 * fStack720,CONCAT44(fVar12 * fStack724,fVar12 * local_2d8)))
            ;
    local_288 = ZEXT1216(CONCAT48(fVar11 * fStack704,CONCAT44(fVar11 * fStack708,fVar11 * local_2c8)))
            ;
    local_278 = local_2b8._0_4_;
    uStack628 = local_2b8._4_4_;
    uStack624 = uStack688;
    uStack620 = 0x3f800000;
    FUN_1408fe3d0();
    uVar15 = extraout_XMM0_Da;
    FUN_1408fc950();
    local_e8[0] = local_258;
    fStack736 = (float)(uVar15 ^ 0x80000000);
    _local_2b8 = CONCAT412(uRam0000000140c7844c,
                           CONCAT48(uRam0000000140c78448,CONCAT44(uRam0000000140c78444,_DAT_140c78440)
                           ));
    fStack740 = 0.0;
    fStack732 = 0.0;
    fStack708 = 0.0;
    local_2d8 = 0.0;
    fStack724 = 1.0;
    fStack720 = 0.0;
    fStack716 = 0.0;
    fStack700 = 0.0;
    FUN_1401afc20(local_e8,local_d8);
    local_2f8 = local_d8;
    local_2f0 = &local_2e8;
    local_138 = local_2f8;
    local_130 = local_2f0;
    FUN_1401afb10(&local_138,local_128);
    local_2f8 = local_128;
    local_2f0 = (float *)local_258;
    local_188 = local_2f8;
    local_180 = (undefined *)local_2f0;
    FUN_1401afb10(&local_188,local_1c8);
    local_1d8 = *(longlong *)(lVar9 + 0x78);
    local_2f8 = local_258;
    local_2f0 = (float *)local_1c8;
    local_188 = local_2f8;
    local_180 = (undefined *)local_2f0;
    FUN_1401afb10(&local_188,local_218);
    pplVar1 = (longlong **)(param_1 + 0xc);
    local_1d8 = local_1d8 + 0x11e0;
    if ((*pplVar1 == (longlong *)0x0) &&
        (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar7 != 0)) {
        local_310 = 0;
        local_318 = 1;
        local_308 = pplVar1;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_218,
                 L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Z.m3");
    }
    pplVar2 = (longlong **)(param_1 + 0xd);
    if ((param_1[0xd] == 0) && (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar7 != 0)) {
        local_310 = 0;
        local_318 = 1;
        local_308 = pplVar2;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Y.m3");
    }
    pplVar3 = (longlong **)(param_1 + 0xe);
    if ((param_1[0xe] == 0) && (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,3), iVar7 != 0)) {
        local_310 = 0;
        local_318 = 1;
        local_308 = pplVar3;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_218,
                 L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_X.m3");
    }
    pplVar4 = (longlong **)(param_1 + 0xf);
    if ((param_1[0xf] == 0) && (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,4), iVar7 != 0)) {
        local_310 = 0;
        local_318 = 1;
        local_308 = pplVar4;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X.m3");
        local_308 = (longlong **)(param_1 + 0x12);
        local_310 = 0;
        local_318 = 1;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X_noSelect.m3");
    }
    pplVar5 = (longlong **)(param_1 + 0x10);
    if ((*pplVar5 == (longlong *)0x0) &&
        (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,5), iVar7 != 0)) {
        local_310 = 0;
        local_318 = 1;
        local_308 = pplVar5;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y.m3");
        local_308 = (longlong **)(param_1 + 0x13);
        local_310 = 0;
        local_318 = 1;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y_noSelect.m3");
    }
    pplVar6 = (longlong **)(param_1 + 0x11);
    if ((*pplVar6 == (longlong *)0x0) &&
        (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,6), iVar7 != 0)) {
        local_310 = 0;
        local_318 = 1;
        local_308 = pplVar6;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z.m3");
        local_308 = (longlong **)(param_1 + 0x14);
        local_310 = 0;
        local_318 = 1;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb0))
                (*(longlong **)(DAT_140c65898 + 0x7248),0,local_2a8,
                 L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z_noSelect.m3");
    }
    if (((*pplVar1 != (longlong *)0x0) &&
         (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar7 == 0)) &&
        (*pplVar1 != (longlong *)0x0)) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    if (((*pplVar2 != (longlong *)0x0) &&
         (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar7 == 0)) &&
        (*pplVar2 != (longlong *)0x0)) {
        (**(code **)(**pplVar2 + 8))();
        *pplVar2 = (longlong *)0x0;
    }
    if (((*pplVar3 != (longlong *)0x0) &&
         (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,3), iVar7 == 0)) &&
        (*pplVar3 != (longlong *)0x0)) {
        (**(code **)(**pplVar3 + 8))();
        *pplVar3 = (longlong *)0x0;
    }
    if ((*pplVar4 != (longlong *)0x0) &&
        (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,4), iVar7 == 0)) {
        if (*pplVar4 != (longlong *)0x0) {
            (**(code **)(**pplVar4 + 8))();
            *pplVar4 = (longlong *)0x0;
        }
        if ((longlong *)param_1[0x12] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x12] + 8))();
            param_1[0x12] = 0;
        }
    }
    if ((*pplVar5 != (longlong *)0x0) &&
        (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,5), iVar7 == 0)) {
        if (*pplVar5 != (longlong *)0x0) {
            (**(code **)(**pplVar5 + 8))();
            *pplVar5 = (longlong *)0x0;
        }
        if ((longlong *)param_1[0x13] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x13] + 8))();
            param_1[0x13] = 0;
        }
    }
    if ((*pplVar6 != (longlong *)0x0) &&
        (iVar7 = (**(code **)(*param_1 + 0x70))(param_1,6), iVar7 == 0)) {
        if (*pplVar6 != (longlong *)0x0) {
            (**(code **)(**pplVar6 + 8))();
            *pplVar6 = (longlong *)0x0;
        }
        if ((longlong *)param_1[0x14] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x14] + 8))();
            param_1[0x14] = 0;
        }
    }
    FUN_1407db4f0(local_98 ^ (ulonglong)auStack824);
    return;
}



void FUN_140626760(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
        *(undefined8 *)(param_1 + 0x68) = 0;
    }
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x78) + 8))();
        *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x80) + 8))();
        *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
        *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
        *(undefined8 *)(param_1 + 0x90) = 0;
    }
    if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
        *(undefined8 *)(param_1 + 0x98) = 0;
    }
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))();
        *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return;
}



undefined8
FUN_140626d00(undefined8 param_1,int *param_2,int *param_3,float *param_4,float *param_5,
              undefined (*param_6) [16])

{
    float fVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar15;
    float fVar16;
    undefined auVar14 [16];
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

    puVar2 = (uint *)(**(code **)(*DAT_140c65670 + 0x248))();
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar5 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar5 == 0) {
        lVar5 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar25 = (float)(ulonglong)*puVar2;
    fVar26 = (float)(ulonglong)puVar2[1];
    fVar23 = 1.0 / (float)(ulonglong)puVar2[2];
    fVar8 = ((float)*param_2 - fVar25) * fVar23 * 2.0 - 1.0;
    fVar24 = 1.0 / (float)(ulonglong)puVar2[3];
    fVar9 = 1.0 - ((float)param_2[1] - fVar26) * fVar24 * 2.0;
    fVar16 = fVar9 * *(float *)(lVar4 + 0x13c) + fVar8 * *(float *)(lVar4 + 300) +
             *(float *)(lVar4 + 0x14c) * 0.0 + *(float *)(lVar4 + 0x15c);
    auVar14 = divps(CONCAT412(fVar16,CONCAT48(fVar9 * *(float *)(lVar4 + 0x138) +
                                              fVar8 * *(float *)(lVar4 + 0x128) +
                                              *(float *)(lVar4 + 0x148) * 0.0 +
                                              *(float *)(lVar4 + 0x158),
                                              CONCAT44(fVar9 * *(float *)(lVar4 + 0x134) +
                                                       fVar8 * *(float *)(lVar4 + 0x124) +
                                                       *(float *)(lVar4 + 0x144) * 0.0 +
                                                       *(float *)(lVar4 + 0x154),
                                                       fVar9 * *(float *)(lVar4 + 0x130) +
                                                       fVar8 * *(float *)(lVar4 + 0x120) +
                                                       *(float *)(lVar4 + 0x140) * 0.0 +
                                                       *(float *)(lVar4 + 0x150)))),
                    CONCAT412(fVar16,CONCAT48(fVar16,CONCAT44(fVar16,fVar16))));
    fVar9 = SUB164(auVar14 >> 0x20,0);
    fVar16 = SUB164(auVar14 >> 0x40,0);
    fVar8 = SUB164(auVar14,0);
    fVar21 = fVar9 * *(float *)(lVar5 + 0xb0) + fVar8 * *(float *)(lVar5 + 0xa0) +
             fVar16 * *(float *)(lVar5 + 0xc0) + *(float *)(lVar5 + 0xd0);
    fVar22 = fVar9 * *(float *)(lVar5 + 0xb4) + fVar8 * *(float *)(lVar5 + 0xa4) +
             fVar16 * *(float *)(lVar5 + 0xc4) + *(float *)(lVar5 + 0xd4);
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar3 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar3 == 0) {
        lVar3 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar10 = ((float)*param_2 - fVar25) * fVar23 * 2.0 - 1.0;
    fVar11 = 1.0 - ((float)param_2[1] - fVar26) * fVar24 * 2.0;
    fVar17 = fVar11 * *(float *)(lVar4 + 0x13c) + fVar10 * *(float *)(lVar4 + 300) +
             *(float *)(lVar4 + 0x14c) * 0.0 + *(float *)(lVar4 + 0x15c);
    lVar6 = *(longlong *)(DAT_140c65898 + 0x71a8);
    auVar14 = divps(CONCAT412(fVar17,CONCAT48(fVar11 * *(float *)(lVar4 + 0x138) +
                                              fVar10 * *(float *)(lVar4 + 0x128) +
                                              *(float *)(lVar4 + 0x148) * 0.0 +
                                              *(float *)(lVar4 + 0x158),
                                              CONCAT44(fVar11 * *(float *)(lVar4 + 0x134) +
                                                       fVar10 * *(float *)(lVar4 + 0x124) +
                                                       *(float *)(lVar4 + 0x144) * 0.0 +
                                                       *(float *)(lVar4 + 0x154),
                                                       fVar11 * *(float *)(lVar4 + 0x130) +
                                                       fVar10 * *(float *)(lVar4 + 0x120) +
                                                       *(float *)(lVar4 + 0x140) * 0.0 +
                                                       *(float *)(lVar4 + 0x150)))),
                    CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))));
    fVar11 = SUB164(auVar14 >> 0x20,0);
    fVar17 = SUB164(auVar14 >> 0x40,0);
    fVar10 = SUB164(auVar14,0);
    if (lVar6 == 0) {
        lVar6 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar12 = ((float)*param_3 - fVar25) * fVar23 * 2.0 - 1.0;
    fVar13 = 1.0 - ((float)param_3[1] - fVar26) * fVar24 * 2.0;
    fVar18 = fVar13 * *(float *)(lVar6 + 0x13c) + fVar12 * *(float *)(lVar6 + 300) +
             *(float *)(lVar6 + 0x14c) * 0.0 + *(float *)(lVar6 + 0x15c);
    lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
    auVar14 = divps(CONCAT412(fVar18,CONCAT48(fVar13 * *(float *)(lVar6 + 0x138) +
                                              fVar12 * *(float *)(lVar6 + 0x128) +
                                              *(float *)(lVar6 + 0x148) * 0.0 +
                                              *(float *)(lVar6 + 0x158),
                                              CONCAT44(fVar13 * *(float *)(lVar6 + 0x134) +
                                                       fVar12 * *(float *)(lVar6 + 0x124) +
                                                       *(float *)(lVar6 + 0x144) * 0.0 +
                                                       *(float *)(lVar6 + 0x154),
                                                       fVar13 * *(float *)(lVar6 + 0x130) +
                                                       fVar12 * *(float *)(lVar6 + 0x120) +
                                                       *(float *)(lVar6 + 0x140) * 0.0 +
                                                       *(float *)(lVar6 + 0x150)))),
                    CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))));
    fVar12 = SUB164(auVar14 >> 0x20,0);
    fVar13 = SUB164(auVar14 >> 0x40,0);
    fVar18 = fVar12 * *(float *)(lVar4 + 0xb0) + SUB164(auVar14,0) * *(float *)(lVar4 + 0xa0) +
             fVar13 * *(float *)(lVar4 + 0xc0) + *(float *)(lVar4 + 0xd0);
    fVar12 = fVar12 * *(float *)(lVar4 + 0xb4) + SUB164(auVar14,0) * *(float *)(lVar4 + 0xa4) +
             fVar13 * *(float *)(lVar4 + 0xc4) + *(float *)(lVar4 + 0xd4);
    if (lVar7 == 0) {
        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar19 = (fVar11 * *(float *)(lVar3 + 0xb0) + fVar10 * *(float *)(lVar3 + 0xa0) +
              fVar17 * *(float *)(lVar3 + 0xc0) + *(float *)(lVar3 + 0xd0)) - fVar21;
    fVar20 = (fVar11 * *(float *)(lVar3 + 0xb4) + fVar10 * *(float *)(lVar3 + 0xa4) +
              fVar17 * *(float *)(lVar3 + 0xc4) + *(float *)(lVar3 + 0xd4)) - fVar22;
    fVar13 = *param_4;
    fVar1 = param_4[1];
    fVar23 = ((float)*param_3 - fVar25) * fVar23 * 2.0 - 1.0;
    fVar25 = 1.0 - ((float)param_3[1] - fVar26) * fVar24 * 2.0;
    fVar24 = fVar25 * *(float *)(lVar7 + 0x13c) + fVar23 * *(float *)(lVar7 + 300) +
             *(float *)(lVar7 + 0x14c) * 0.0 + *(float *)(lVar7 + 0x15c);
    auVar14 = divps(CONCAT412(fVar24,CONCAT48(fVar25 * *(float *)(lVar7 + 0x138) +
                                              fVar23 * *(float *)(lVar7 + 0x128) +
                                              *(float *)(lVar7 + 0x148) * 0.0 +
                                              *(float *)(lVar7 + 0x158),
                                              CONCAT44(fVar25 * *(float *)(lVar7 + 0x134) +
                                                       fVar23 * *(float *)(lVar7 + 0x124) +
                                                       *(float *)(lVar7 + 0x144) * 0.0 +
                                                       *(float *)(lVar7 + 0x154),
                                                       fVar25 * *(float *)(lVar7 + 0x130) +
                                                       fVar23 * *(float *)(lVar7 + 0x120) +
                                                       *(float *)(lVar7 + 0x140) * 0.0 +
                                                       *(float *)(lVar7 + 0x150)))),
                    CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar24,fVar24))));
    fVar26 = SUB164(auVar14 >> 0x20,0);
    fVar15 = SUB164(auVar14 >> 0x40,0);
    fVar23 = *param_5;
    fVar24 = param_5[1];
    fVar25 = param_5[2];
    fVar8 = ((fVar11 * *(float *)(lVar3 + 0xb8) + fVar10 * *(float *)(lVar3 + 0xa8) +
              fVar17 * *(float *)(lVar3 + 200) + *(float *)(lVar3 + 0xd8)) -
             (fVar9 * *(float *)(lVar5 + 0xb8) + fVar8 * *(float *)(lVar5 + 0xa8) +
              fVar16 * *(float *)(lVar5 + 200) + *(float *)(lVar5 + 0xd8))) *
            (fVar23 * 0.0 - fVar19 * 0.0) - fVar20 * 0.0;
    fVar9 = fVar19 * (fVar24 * fVar19 - fVar23 * fVar20) - (fVar25 * fVar20 - fVar24 * 0.0) * 0.0;
    fVar16 = (fVar13 - fVar21) * fVar8 + (fVar1 - fVar22) * fVar9 + 0.0;
    fVar8 = (((fVar23 + fVar13) - fVar21) * fVar8 + ((fVar24 + fVar1) - fVar22) * fVar9 + 0.0) -
            fVar16;
    if (1e-05 <= (float)((uint)fVar8 & 0x7fffffff)) {
        fVar9 = (fVar26 * *(float *)(lVar4 + 0xb0) + SUB164(auVar14,0) * *(float *)(lVar4 + 0xa0) +
                 fVar15 * *(float *)(lVar4 + 0xc0) + *(float *)(lVar4 + 0xd0)) - fVar18;
        fVar21 = (fVar26 * *(float *)(lVar4 + 0xb4) + SUB164(auVar14,0) * *(float *)(lVar4 + 0xa4) +
                  fVar15 * *(float *)(lVar4 + 0xc4) + *(float *)(lVar4 + 0xd4)) - fVar12;
        fVar22 = (float)((uint)(fVar16 / fVar8) ^ 0x80000000);
        fVar8 = (fVar23 * 0.0 - fVar9 * 0.0) * 0.0 - fVar21 * 0.0;
        fVar16 = fVar9 * (fVar24 * fVar9 - fVar23 * fVar21) - (fVar25 * fVar21 - fVar24 * 0.0) * 0.0;
        fVar9 = (fVar13 - fVar18) * fVar8 + (fVar1 - fVar12) * fVar16 + 0.0;
        fVar8 = (((fVar23 + fVar13) - fVar18) * fVar8 + ((fVar24 + fVar1) - fVar12) * fVar16 + 0.0) -
                fVar9;
        if (1e-05 <= (float)((uint)fVar8 & 0x7fffffff)) {
            fVar8 = (float)((uint)(fVar9 / fVar8) ^ 0x80000000);
            *param_6 = CONCAT412((fVar8 * param_5[3] + param_4[3]) - (fVar22 * param_5[3] + param_4[3]),
                                 CONCAT48((fVar8 * fVar25 + param_4[2]) - (fVar22 * fVar25 + param_4[2]),
                                          CONCAT44((fVar8 * fVar24 + fVar1) - (fVar22 * fVar24 + fVar1),
                                                   (fVar8 * fVar23 + fVar13) - (fVar22 * fVar23 + fVar13))
                                 ));
            return 1;
        }
    }
    return 0;
}



void FUN_140627430(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0x60);
        if (*(int *)(param_1 + 0xb8) == 1) {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x460;
        }
        else {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x45e;
        }
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    }
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0x68);
        if (*(int *)(param_1 + 0xb8) == 2) {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x460;
        }
        else {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x45e;
        }
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    }
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0x70);
        if (*(int *)(param_1 + 0xb8) == 3) {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x460;
        }
        else {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x45e;
        }
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    }
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0x78);
        if (*(int *)(param_1 + 0xb8) == 4) {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x460;
        }
        else {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x45e;
        }
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    }
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0x80);
        if (*(int *)(param_1 + 0xb8) == 5) {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x460;
        }
        else {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x45e;
        }
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    }
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0x88);
        if (*(int *)(param_1 + 0xb8) == 6) {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x460;
        }
        else {
            plVar2 = (longlong *)(**(code **)(lVar1 + 0x148))();
            local_28 = 0x45e;
        }
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    }
    return;
}



void FUN_140627670(longlong param_1,int param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined8 local_c8;
    undefined4 local_c0;
    undefined4 uStack188;
    undefined4 uStack184;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 local_ac;
    undefined8 local_a8;
    undefined4 local_a0;
    undefined8 local_9c;
    undefined8 local_94;
    undefined4 local_8c;
    undefined8 local_88;
    undefined4 local_80;
    undefined8 local_7c;
    undefined8 local_74;
    undefined4 local_6c;
    undefined8 local_68;
    undefined4 local_60;
    undefined8 local_5c;
    undefined8 local_54;
    undefined4 local_4c;
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_3c;
    undefined8 local_34;
    undefined4 local_2c;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    *(int *)(param_1 + 0xa8) = param_2;
    if (param_2 != 0) {
        GetCursorPos((LPPOINT)(param_1 + 0xac));
        ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),(LPPOINT)(param_1 + 0xac));
        switch(*(undefined4 *)(param_1 + 0xb8)) {
            case 0:
                *(undefined4 *)(param_1 + 0xb4) = 0;
                *(undefined4 *)(param_1 + 0xa8) = 0;
                break;
            case 1:
                *(undefined4 *)(param_1 + 0xb4) = 1;
                if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
                    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x148))();
                    local_48 = 0x462;
                    local_3c = 0;
                    local_34 = 0;
                    local_2c = 0;
                    local_40 = 0x3f800000;
                    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_48);
                    *(undefined4 *)(param_1 + 0xb8) = 0;
                    return;
                }
                break;
            case 2:
                *(undefined4 *)(param_1 + 0xb4) = 2;
                if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
                    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x68) + 0x148))();
                    local_28 = 0x462;
                    local_1c = 0;
                    local_14 = 0;
                    local_c = 0;
                    local_20 = 0x3f800000;
                    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
                    *(undefined4 *)(param_1 + 0xb8) = 0;
                    return;
                }
                break;
            case 3:
                *(undefined4 *)(param_1 + 0xb4) = 3;
                if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
                    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x70) + 0x148))();
                    local_a8 = 0x462;
                    local_9c = 0;
                    local_94 = 0;
                    local_8c = 0;
                    local_a0 = 0x3f800000;
                    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_a8);
                    *(undefined4 *)(param_1 + 0xb8) = 0;
                    return;
                }
                break;
            case 4:
                iVar1 = FUN_1406285f0(param_1);
                if (((-1 < iVar1) && (*(int *)(param_1 + 0xf0) != 0)) &&
                    (iVar1 = FUN_140628770(param_1,param_1 + 0xac,param_1 + 0xc0), -1 < iVar1)) {
                    *(undefined4 *)(param_1 + 0xb4) = 4;
                    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
                        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x78) + 0x148))();
                        local_88 = 0x462;
                        local_7c = 0;
                        local_74 = 0;
                        local_6c = 0;
                        local_80 = 0x3f800000;
                        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_88);
                        *(undefined4 *)(param_1 + 0xb8) = 0;
                        return;
                    }
                }
                break;
            case 5:
                iVar1 = FUN_1406285f0(param_1);
                if (((-1 < iVar1) && (*(int *)(param_1 + 0xf0) != 0)) &&
                    (iVar1 = FUN_140628770(param_1,param_1 + 0xac,param_1 + 0xc0), -1 < iVar1)) {
                    *(undefined4 *)(param_1 + 0xb4) = 5;
                    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
                        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
                        local_68 = 0x462;
                        local_5c = 0;
                        local_54 = 0;
                        local_4c = 0;
                        local_60 = 0x3f800000;
                        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_68);
                        *(undefined4 *)(param_1 + 0xb8) = 0;
                        return;
                    }
                }
                break;
            case 6:
                iVar1 = FUN_1406285f0(param_1);
                if (((-1 < iVar1) && (*(int *)(param_1 + 0xf0) != 0)) &&
                    (iVar1 = FUN_140628770(param_1,param_1 + 0xac,param_1 + 0xc0), -1 < iVar1)) {
                    *(undefined4 *)(param_1 + 0xb4) = 6;
                    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
                        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x148))();
                        local_c8 = 0x462;
                        uStack188 = 0;
                        uStack184 = 0;
                        uStack180 = 0;
                        uStack176 = 0;
                        local_ac = 0;
                        local_c0 = 0x3f800000;
                        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
                        *(undefined4 *)(param_1 + 0xb8) = 0;
                        return;
                    }
                }
        }
        *(undefined4 *)(param_1 + 0xb8) = 0;
        return;
    }
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x148))();
        local_c8 = 0x45e;
        local_c0 = 0x3f800000;
        uStack188 = 0;
        uStack184 = 0;
        uStack180 = 0;
        uStack176 = 0;
        local_ac = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
    }
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x68) + 0x148))();
        local_c8 = 0x45e;
        local_c0 = 0x3f800000;
        uStack188 = 0;
        uStack184 = 0;
        uStack180 = 0;
        uStack176 = 0;
        local_ac = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
    }
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x70) + 0x148))();
        local_c8 = 0x45e;
        local_c0 = 0x3f800000;
        uStack188 = 0;
        uStack184 = 0;
        uStack180 = 0;
        uStack176 = 0;
        local_ac = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
    }
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x78) + 0x148))();
        local_c8 = 0x45e;
        local_c0 = 0x3f800000;
        uStack188 = 0;
        uStack184 = 0;
        uStack180 = 0;
        uStack176 = 0;
        local_ac = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
    }
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x80) + 0x148))();
        local_c8 = 0x45e;
        local_c0 = 0x3f800000;
        uStack188 = 0;
        uStack184 = 0;
        uStack180 = 0;
        uStack176 = 0;
        local_ac = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
    }
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x88) + 0x148))();
        local_c8 = 0x45e;
        local_c0 = 0x3f800000;
        uStack188 = 0;
        uStack184 = 0;
        uStack180 = 0;
        uStack176 = 0;
        local_ac = 0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_c8);
        return;
    }
    return;
}



void FUN_140627bc0(longlong *param_1,int param_2)

{
    int iVar1;

    if (*(int *)((longlong)param_1 + 0xbc) != param_2) {
        *(int *)((longlong)param_1 + 0xbc) = param_2;
        iVar1 = (**(code **)(*param_1 + 0x40))();
        if (iVar1 != 0) {
            (**(code **)(*param_1 + 8))(param_1);
            // WARNING: Could not recover jumptable at 0x000140627bf5. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)*param_1)(param_1);
            return;
        }
    }
    return;
}



bool FUN_140627c40(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;
    float fVar8;
    float fVar9;
    undefined auVar7 [16];
    longlong *local_res8;
    tagPOINT local_res10;
    undefined4 local_res18;
    undefined4 local_res1c;
    undefined local_88 [16];
    undefined local_78 [16];
    undefined8 local_68;
    undefined4 local_60;
    undefined *local_58;
    longlong local_50;
    undefined4 local_48;
    undefined8 local_40;

    puVar2 = (uint *)(**(code **)(*DAT_140c65670 + 0x248))();
    GetCursorPos(&local_res10);
    ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),&local_res10);
    lVar3 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar3 == 0) {
        lVar3 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar6 = (((float)local_res10.x - (float)(ulonglong)*puVar2) / (float)(ulonglong)puVar2[2]) * 2.0 -
            1.0;
    fVar5 = 1.0 - (((float)local_res10.y - (float)(ulonglong)puVar2[1]) / (float)(ulonglong)puVar2[3])
                  * 2.0;
    fVar9 = fVar5 * *(float *)(lVar3 + 0x13c) + fVar6 * *(float *)(lVar3 + 300) +
            *(float *)(lVar3 + 0x14c) * 0.0 + *(float *)(lVar3 + 0x15c);
    auVar7 = divps(CONCAT412(fVar9,CONCAT48(fVar5 * *(float *)(lVar3 + 0x138) +
                                            fVar6 * *(float *)(lVar3 + 0x128) +
                                            *(float *)(lVar3 + 0x148) * 0.0 +
                                            *(float *)(lVar3 + 0x158),
                                            CONCAT44(fVar5 * *(float *)(lVar3 + 0x134) +
                                                     fVar6 * *(float *)(lVar3 + 0x124) +
                                                     *(float *)(lVar3 + 0x144) * 0.0 +
                                                     *(float *)(lVar3 + 0x154),
                                                     fVar5 * *(float *)(lVar3 + 0x130) +
                                                     fVar6 * *(float *)(lVar3 + 0x120) +
                                                     *(float *)(lVar3 + 0x140) * 0.0 +
                                                     *(float *)(lVar3 + 0x150)))),
                   CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))));
    fVar6 = SUB164(auVar7 >> 0x20,0);
    fVar9 = SUB164(auVar7 >> 0x40,0);
    fVar5 = SUB164(auVar7,0);
    local_78 = CONCAT412(fVar6 * *(float *)(lVar4 + 0xbc) + fVar5 * *(float *)(lVar4 + 0xac) +
                         fVar9 * *(float *)(lVar4 + 0xcc) + *(float *)(lVar4 + 0xdc),
                         CONCAT48(fVar6 * *(float *)(lVar4 + 0xb8) + fVar5 * *(float *)(lVar4 + 0xa8)
                                  + fVar9 * *(float *)(lVar4 + 200) + *(float *)(lVar4 + 0xd8),
                                  CONCAT44(fVar6 * *(float *)(lVar4 + 0xb4) +
                                           fVar5 * *(float *)(lVar4 + 0xa4) +
                                           fVar9 * *(float *)(lVar4 + 0xc4) + *(float *)(lVar4 + 0xd4)
                                          ,fVar6 * *(float *)(lVar4 + 0xb0) +
                                           fVar5 * *(float *)(lVar4 + 0xa0) +
                                           fVar9 * *(float *)(lVar4 + 0xc0) +
                                           *(float *)(lVar4 + 0xd0))));
    lVar3 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar3 == 0) {
        lVar3 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar5 = (((float)local_res10.x - (float)(ulonglong)*puVar2) / (float)(ulonglong)puVar2[2]) * 2.0 -
            1.0;
    fVar9 = 1.0 - (((float)local_res10.y - (float)(ulonglong)puVar2[1]) / (float)(ulonglong)puVar2[3])
                  * 2.0;
    fVar6 = fVar9 * *(float *)(lVar3 + 0x13c) + fVar5 * *(float *)(lVar3 + 300) +
            *(float *)(lVar3 + 0x14c) * 0.0 + *(float *)(lVar3 + 0x15c);
    auVar7 = divps(CONCAT412(fVar6,CONCAT48(fVar9 * *(float *)(lVar3 + 0x138) +
                                            fVar5 * *(float *)(lVar3 + 0x128) +
                                            *(float *)(lVar3 + 0x148) * 0.0 +
                                            *(float *)(lVar3 + 0x158),
                                            CONCAT44(fVar9 * *(float *)(lVar3 + 0x134) +
                                                     fVar5 * *(float *)(lVar3 + 0x124) +
                                                     *(float *)(lVar3 + 0x144) * 0.0 +
                                                     *(float *)(lVar3 + 0x154),
                                                     fVar9 * *(float *)(lVar3 + 0x130) +
                                                     fVar5 * *(float *)(lVar3 + 0x120) +
                                                     *(float *)(lVar3 + 0x140) * 0.0 +
                                                     *(float *)(lVar3 + 0x150)))),
                   CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar6))));
    fVar9 = SUB164(auVar7 >> 0x20,0);
    fVar8 = SUB164(auVar7 >> 0x40,0);
    fVar6 = SUB164(auVar7,0);
    local_res8 = (longlong *)0x0;
    local_88 = CONCAT412(fVar9 * *(float *)(lVar4 + 0xbc) + fVar6 * *(float *)(lVar4 + 0xac) +
                         fVar8 * *(float *)(lVar4 + 0xcc) + *(float *)(lVar4 + 0xdc),
                         CONCAT48(fVar9 * *(float *)(lVar4 + 0xb8) + fVar6 * *(float *)(lVar4 + 0xa8)
                                  + fVar8 * *(float *)(lVar4 + 200) + *(float *)(lVar4 + 0xd8),
                                  CONCAT44(fVar9 * *(float *)(lVar4 + 0xb4) +
                                           fVar6 * *(float *)(lVar4 + 0xa4) +
                                           fVar8 * *(float *)(lVar4 + 0xc4) + *(float *)(lVar4 + 0xd4)
                                          ,fVar9 * *(float *)(lVar4 + 0xb0) +
                                           fVar6 * *(float *)(lVar4 + 0xa0) +
                                           fVar8 * *(float *)(lVar4 + 0xc0) +
                                           *(float *)(lVar4 + 0xd0))));
    local_40 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x16f0);
    local_68 = 0x800;
    local_58 = &LAB_140627c00;
    local_60 = 0;
    local_48 = 0;
    local_res18 = 0;
    local_res1c = 0x3f800000;
    local_50 = param_1;
    iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1a8))
            (*(longlong **)(DAT_140c65898 + 0x7248),local_78,local_88,&local_res18,
             &local_res8,&local_68,fVar5,
             (0.0 - (float)puVar2[4]) / ((float)puVar2[5] - (float)puVar2[4]));
    if (iVar1 == 0) {
        LAB_14062802a:
        *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    else {
        lVar3 = (**(code **)(*local_res8 + 0x20))();
        if (lVar3 == 0) {
            lVar3 = (**(code **)(*local_res8 + 0x18))();
            if (lVar3 == 0) goto LAB_14062802a;
        }
        if (lVar3 == *(longlong *)(param_1 + 0x60)) {
            *(undefined4 *)(param_1 + 0xb8) = 1;
        }
        else if (lVar3 == *(longlong *)(param_1 + 0x68)) {
            *(undefined4 *)(param_1 + 0xb8) = 2;
        }
        else if (lVar3 == *(longlong *)(param_1 + 0x70)) {
            *(undefined4 *)(param_1 + 0xb8) = 3;
        }
        else if (lVar3 == *(longlong *)(param_1 + 0x78)) {
            *(undefined4 *)(param_1 + 0xb8) = 4;
        }
        else if (lVar3 == *(longlong *)(param_1 + 0x80)) {
            *(undefined4 *)(param_1 + 0xb8) = 5;
        }
        else if (lVar3 == *(longlong *)(param_1 + 0x88)) {
            *(undefined4 *)(param_1 + 0xb8) = 6;
        }
    }
    iVar1 = *(int *)(param_1 + 0xb8);
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1 != 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140628090(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    undefined auVar4 [16];
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    float fVar8;
    undefined auVar9 [16];
    float fVar10;
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined auStack376 [32];
    undefined *local_158;
    undefined *local_150;
    undefined local_148 [8];
    undefined8 uStack320;
    tagPOINT local_138 [2];
    undefined local_128 [8];
    float fStack288;
    longlong *local_118;
    undefined *puStack272;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    undefined local_d8 [16];
    undefined local_c8 [48];
    undefined local_98 [16];
    longlong *local_88;
    undefined *local_80;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    (**(code **)(*DAT_140c65670 + 0x248))();
    GetCursorPos(local_138);
    ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),local_138);
    if ((param_1[0xc] != 0) && (iVar1 = *(int *)((longlong)param_1 + 0xb4), iVar1 - 1U < 3)) {
        iVar3 = iVar1 + -1;
        local_148._0_4_ = _DAT_140c77860;
        local_148._4_4_ = fRam0000000140c77864;
        uVar6 = uRam0000000140c77868;
        uVar7 = uRam0000000140c7786c;
        if (((iVar3 == 0) ||
             (iVar3 = iVar1 + -2, local_148._0_4_ = _DAT_140c77870,
              local_148._4_4_ = fRam0000000140c77874, uVar6 = uRam0000000140c77878,
              uVar7 = uRam0000000140c7787c, iVar3 == 0)) ||
            (iVar3 = iVar1 + -3, local_148._0_4_ = _DAT_140c77880, local_148._4_4_ = fRam0000000140c77884
                    , uVar6 = uRam0000000140c77888, uVar7 = uRam0000000140c7788c, iVar3 == 0)) {
            _local_148 = CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(local_148._4_4_,local_148._0_4_)));
        }
        else {
        }
        if (*(int *)((longlong)param_1 + 0xbc) == 1) {
            fVar12 = local_148._4_4_ * *(float *)(param_1 + 6) + local_148._0_4_ * *(float *)(param_1 + 4)
                     + *(float *)(param_1 + 8) * 0.0;
            fVar13 = local_148._4_4_ * *(float *)((longlong)param_1 + 0x34) +
                     local_148._0_4_ * *(float *)((longlong)param_1 + 0x24) +
                     *(float *)((longlong)param_1 + 0x44) * 0.0;
            fVar14 = local_148._4_4_ * *(float *)(param_1 + 7) + local_148._0_4_ * *(float *)(param_1 + 5)
                     + *(float *)(param_1 + 9) * 0.0;
            fVar15 = local_148._4_4_ * *(float *)((longlong)param_1 + 0x3c) +
                     local_148._0_4_ * *(float *)((longlong)param_1 + 0x2c) +
                     *(float *)((longlong)param_1 + 0x4c) * 0.0;
            fVar5 = fVar13 * fVar13;
            fVar8 = fVar12 * fVar12 + fVar5 + 0.0;
            auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,CONCAT44(fVar5,fVar5))),
                             CONCAT124(SUB1612(CONCAT412(fVar15 * fVar15,
                                                         CONCAT48(fVar14 * fVar14,
                                                                  CONCAT44(fVar5,fVar12 * fVar12))) >>
                                                                                                    0x20,0),fVar8));
            fVar5 = SUB164(auVar4,0);
            fVar5 = (3.0 - fVar8 * fVar5 * fVar5) * 0.5 * fVar5;
            if (fVar5 <= 0.0) {
                fVar5 = 0.0;
            }
            local_148 = CONCAT44(fVar5 * fVar13,fVar5 * fVar12);
            _local_148 = CONCAT48(fVar5 * fVar14,local_148);
            _local_148 = CONCAT412(fVar5 * fVar15,_local_148);
        }
        local_118 = (longlong *)param_1[10];
        puStack272 = (undefined *)param_1[0xb];
        local_150 = local_128;
        local_158 = local_148;
        iVar1 = FUN_140626d00(iVar3,(longlong)param_1 + 0xac,local_138,&local_118);
        if (iVar1 != 0) {
            if (*(int *)((longlong)param_1 + 0xbc) == 1) {
                local_88 = param_1 + 4;
                FUN_1401afc20(&local_88,&local_108);
                _local_128 = CONCAT412(local_128._4_4_ * fStack236 + local_128._0_4_ * fStack252 +
                                       fStack288 * fStack220,
                                       CONCAT48(local_128._4_4_ * fStack240 + local_128._0_4_ * fStack256 +
                                                fStack288 * fStack224,
                                                CONCAT44(local_128._4_4_ * fStack244 +
                                                         local_128._0_4_ * fStack260 + fStack288 * fStack228
                                                        ,local_128._4_4_ * local_f8 +
                                                         local_128._0_4_ * local_108 + fStack288 * local_e8
                                                )));
            }
            (**(code **)(*param_1 + 0x60))(param_1,local_128);
        }
        goto LAB_1406285b8;
    }
    if ((param_1[0x10] == 0) || (*(int *)(param_1 + 0x1e) == 0)) goto LAB_1406285b8;
    fVar13 = ((float)local_138[0].x - *(float *)(param_1 + 0x1a)) / (*(float *)(param_1 + 0x1c) * 0.5)
            ;
    fVar8 = ((float)local_138[0].y - *(float *)((longlong)param_1 + 0xd4)) /
            (*(float *)((longlong)param_1 + 0xe4) * 0.5);
    fVar12 = (float)((uint)fVar8 ^ 0x80000000);
    fVar5 = fVar12 * fVar12 + fVar13 * fVar13;
    if (fVar5 <= 1.0) {
        _local_148 = CONCAT88(uStack320,CONCAT44(fVar8,fVar13)) ^ (undefined  [16])0x8000000000000000;
        auVar4 = sqrtps(ZEXT416((uint)(fVar13 * fVar13)) & (undefined  [16])0xffffffffffffffff,
                        ZEXT416((uint)(1.0 - fVar5)));
        _local_148 = CONCAT48(SUB164(auVar4,0),local_148);
    }
    else {
        _local_148 = ZEXT812(local_148);
        _local_148 = CONCAT124(CONCAT84(uStack320,(1.0 / SQRT(fVar5)) * fVar12),
                               (1.0 / SQRT(fVar5)) * fVar13);
    }
    fVar5 = *(float *)((longlong)param_1 + 0xc4) * 0.0 - local_148._4_4_ * *(float *)(param_1 + 0x19);
    fVar8 = local_148._0_4_ * 0.0 - (float)uStack320 * *(float *)(param_1 + 0x18);
    fVar12 = local_148._4_4_ * *(float *)(param_1 + 0x18) -
             local_148._0_4_ * *(float *)((longlong)param_1 + 0xc4);
    _local_128 = CONCAT412(uStack320._4_4_ * *(float *)((longlong)param_1 + 0xcc) -
                           uStack320._4_4_ * *(float *)((longlong)param_1 + 0xcc),
                           CONCAT48(fVar12,CONCAT44(fVar8,fVar5)));
    if (*(int *)((longlong)param_1 + 0xbc) == 0) {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar2 == 0) {
            lVar2 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        fVar16 = fVar8 * *(float *)(lVar2 + 0xb8);
        fVar10 = fVar8 * *(float *)(lVar2 + 0xbc);
        fVar13 = fVar5 * *(float *)(lVar2 + 0xa4);
        fVar14 = fVar5 * *(float *)(lVar2 + 0xa8);
        fVar15 = fVar5 * *(float *)(lVar2 + 0xac);
        fVar5 = fVar8 * *(float *)(lVar2 + 0xb0) + fVar5 * *(float *)(lVar2 + 0xa0) +
                fVar12 * *(float *)(lVar2 + 0xc0);
        fVar8 = fVar8 * *(float *)(lVar2 + 0xb4) + fVar13 + fVar12 * *(float *)(lVar2 + 0xc4);
        fVar13 = fVar16 + fVar14 + fVar12 * *(float *)(lVar2 + 200);
        fVar12 = fVar10 + fVar15 + fVar12 * *(float *)(lVar2 + 0xcc);
        LAB_140628491:
        _local_128 = CONCAT412(fVar12,CONCAT48(fVar13,CONCAT44(fVar8,fVar5)));
        fVar12 = local_148._0_4_;
        fVar13 = local_148._4_4_;
        fVar14 = (float)uStack320;
        fVar15 = uStack320._4_4_;
    }
    else {
        fVar12 = local_148._0_4_;
        fVar13 = local_148._4_4_;
        fVar14 = (float)uStack320;
        fVar15 = uStack320._4_4_;
        if (*(int *)((longlong)param_1 + 0xbc) == 1) {
            local_88 = param_1 + 4;
            FUN_1401afc20(&local_88,local_c8);
            lVar2 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            local_118 = (longlong *)(lVar2 + 0xa0);
            puStack272 = local_c8;
            local_88 = local_118;
            local_80 = puStack272;
            FUN_1401afb10(&local_88,&local_108);
            fVar12 = SQRT(local_108 * local_108 + fStack260 * fStack260 + 0.0);
            local_98 = divps(local_d8,CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))));
            auVar11 = divps(CONCAT412(fStack252,CONCAT48(fStack256,CONCAT44(fStack260,local_108))),
                            CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))));
            auVar4 = divps(CONCAT412(fStack236,CONCAT48(fStack240,CONCAT44(fStack244,local_f8))),
                           CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))));
            auVar9 = divps(CONCAT412(fStack220,CONCAT48(fStack224,CONCAT44(fStack228,local_e8))),
                           CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))));
            fVar15 = fVar8 * SUB164(auVar4 >> 0x40,0);
            fVar16 = fVar8 * SUB164(auVar4 >> 0x60,0);
            fVar12 = fVar5 * SUB164(auVar11 >> 0x20,0);
            fVar13 = fVar5 * SUB164(auVar11 >> 0x40,0);
            fVar14 = fVar5 * SUB164(auVar11 >> 0x60,0);
            fVar5 = fVar8 * SUB164(auVar4,0) + fVar5 * SUB164(auVar11,0) + SUB164(auVar9,0) * 0.0;
            fVar8 = fVar8 * SUB164(auVar4 >> 0x20,0) + fVar12 + SUB164(auVar9 >> 0x20,0) * 0.0;
            fVar13 = fVar15 + fVar13 + SUB164(auVar9 >> 0x40,0) * 0.0;
            fVar12 = fVar16 + fVar14 + SUB164(auVar9 >> 0x60,0) * 0.0;
            goto LAB_140628491;
        }
    }
    if (fVar5 * fVar5 + fVar8 * fVar8 + 0.0 <= _DAT_140c4a9a8) {
        local_148 = CONCAT44(uRam0000000140c78454,_DAT_140c78450);
        _local_148 = CONCAT48(uRam0000000140c78458,local_148);
        _local_148 = CONCAT412(uRam0000000140c7845c,_local_148);
    }
    else {
        _local_148 = SUB1612(_local_128,0);
        _local_148 = CONCAT412(*(float *)(param_1 + 0x18) * fVar12 +
                               *(float *)((longlong)param_1 + 0xc4) * fVar13 + 0.0,_local_148);
    }
    iVar1 = *(int *)((longlong)param_1 + 0xb4);
    if (iVar1 != 4) {
        _local_148 = _local_148 & (undefined  [16])0xffffffff00000000;
    }
    if (iVar1 != 5) {
        local_148 = (ulonglong)(uint)local_148._0_4_;
    }
    if (iVar1 != 6) {
        _local_148 = ZEXT812(local_148);
    }
    fVar8 = local_148._0_4_ * local_148._0_4_ + (float)uStack320 * (float)uStack320;
    fVar16 = local_148._4_4_ * local_148._4_4_ + uStack320._4_4_ * uStack320._4_4_;
    fVar5 = (float)uStack320 * (float)uStack320 + local_148._0_4_ * local_148._0_4_;
    fVar10 = uStack320._4_4_ * uStack320._4_4_ + local_148._4_4_ * local_148._4_4_;
    auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar10,CONCAT44(fVar8,fVar16))),
                     CONCAT412(fVar10 + fVar5,
                               CONCAT48(fVar5 + fVar10,CONCAT44(fVar16 + fVar8,fVar8 + fVar16))));
    fVar5 = SUB164(auVar4,0);
    fVar5 = (3.0 - (fVar8 + fVar16) * fVar5 * fVar5) * 0.5 * fVar5;
    if (fVar5 <= 0.0) {
        fVar5 = 0.0;
    }
    _local_148 = CONCAT412(fVar5 * uStack320._4_4_,
                           CONCAT48(fVar5 * (float)uStack320,
                                    CONCAT44(fVar5 * local_148._4_4_,fVar5 * local_148._0_4_)));
    (**(code **)(*param_1 + 0x68))(param_1,local_148);
    *(undefined (*) [16])(param_1 + 0x18) = CONCAT412(fVar15,CONCAT48(fVar14,CONCAT44(fVar13,fVar12)))
            ;
    LAB_1406285b8:
    *(LONG *)((longlong)param_1 + 0xac) = local_138[0].x;
    *(LONG *)(param_1 + 0x16) = local_138[0].y;
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack376);
    return;
}



undefined8 FUN_1406285f0(longlong param_1)

{
    float fVar1;
    float fVar2;
    float fVar3;
    uint *puVar4;
    uint *puVar5;
    longlong lVar6;
    float fVar8;
    undefined auVar7 [16];

    puVar4 = (uint *)(**(code **)(*DAT_140c65670 + 0x18))();
    puVar5 = (uint *)(**(code **)(*DAT_140c65670 + 0x248))();
    fVar1 = *(float *)(param_1 + 0x50);
    fVar2 = *(float *)(param_1 + 0x54);
    fVar3 = *(float *)(param_1 + 0x58);
    lVar6 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar6 == 0) {
        lVar6 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar8 = fVar2 * *(float *)(lVar6 + 0x17c) + fVar1 * *(float *)(lVar6 + 0x16c) +
            fVar3 * *(float *)(lVar6 + 0x18c) + *(float *)(lVar6 + 0x19c);
    auVar7 = divps(CONCAT412(fVar8,CONCAT48(fVar2 * *(float *)(lVar6 + 0x178) +
                                            fVar1 * *(float *)(lVar6 + 0x168) +
                                            fVar3 * *(float *)(lVar6 + 0x188) +
                                            *(float *)(lVar6 + 0x198),
                                            CONCAT44(fVar2 * *(float *)(lVar6 + 0x174) +
                                                     fVar1 * *(float *)(lVar6 + 0x164) +
                                                     fVar3 * *(float *)(lVar6 + 0x184) +
                                                     *(float *)(lVar6 + 0x194),
                                                     fVar2 * *(float *)(lVar6 + 0x170) +
                                                     fVar1 * *(float *)(lVar6 + 0x160) +
                                                     fVar3 * *(float *)(lVar6 + 0x180) +
                                                     *(float *)(lVar6 + 400)))),
                   CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))) &
                   (undefined  [16])0xffffffffffffffff);
    *(undefined (*) [16])(param_1 + 0xd0) =
            ZEXT816(CONCAT44((float)(int)((0.5 - SUB164(auVar7 >> 0x20,0) * 0.5) *
                                          (float)(ulonglong)puVar5[3] + (float)(ulonglong)puVar5[1]),
                             (float)(int)((SUB164(auVar7,0) + 1.0) * 0.5 * (float)(ulonglong)puVar5[2] +
                                          (float)(ulonglong)*puVar5)));
    *(undefined (*) [16])(param_1 + 0xe0) =
            ZEXT816(CONCAT44((float)(int)((float)(ulonglong)*puVar4 * 0.166),
                             (float)(int)((float)(ulonglong)*puVar4 * 0.166)));
    *(undefined4 *)(param_1 + 0xf0) = 1;
    return 0;
}



undefined8 FUN_140628770(longlong param_1,int *param_2,float *param_3)

{
    undefined auVar1 [16];
    float fVar2;
    float fVar3;
    float fVar4;

    if (param_3 == (float *)0x0) {
        return 0x80070057;
    }
    fVar4 = ((float)*param_2 - *(float *)(param_1 + 0xd0)) / (*(float *)(param_1 + 0xe0) * 0.5);
    fVar3 = (float)((uint)(((float)param_2[1] - *(float *)(param_1 + 0xd4)) /
                           (*(float *)(param_1 + 0xe4) * 0.5)) ^ 0x80000000);
    fVar2 = fVar3 * fVar3 + fVar4 * fVar4;
    if (1.0 < fVar2) {
        param_3[2] = 0.0;
        param_3[1] = (1.0 / SQRT(fVar2)) * fVar3;
        *param_3 = (1.0 / SQRT(fVar2)) * fVar4;
        return 0;
    }
    *param_3 = fVar4;
    param_3[1] = fVar3;
    auVar1 = sqrtps(ZEXT416((uint)(fVar4 * fVar4)) & (undefined  [16])0xffffffffffffffff,
                    ZEXT416((uint)(1.0 - fVar2)));
    param_3[2] = SUB164(auVar1,0);
    return 0;
}



void FUN_140629a70(longlong param_1)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar1 = *(ulonglong *)(param_1 + 0x28);
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8);
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,1);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return;
}



longlong FUN_140629af0(longlong param_1,ulonglong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_2 != 0) {
        uVar1 = *(ulonglong *)(param_1 + 0x28);
        uVar4 = 0;
        uVar5 = uVar4;
        uVar6 = uVar1;
        if (uVar1 != 0) {
            do {
                uVar4 = (uVar6 - uVar5 >> 1) + uVar5;
                uVar2 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + 8);
                if (param_2 < uVar2) {
                    uVar5 = uVar4 + 1;
                }
                else {
                    uVar6 = uVar4;
                    if (param_2 <= uVar2) break;
                }
                uVar4 = uVar5;
                uVar5 = uVar4;
            } while (uVar4 < uVar6);
        }
        if ((uVar4 != uVar1) &&
            (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8),
                    *(ulonglong *)(lVar3 + 8) == param_2)) {
            return lVar3;
        }
    }
    return 0;
}



undefined8 FUN_140629b70(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = *(ulonglong *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar4 = 0;
    uVar5 = uVar4;
    if (uVar6 != 0) {
        do {
            uVar4 = (uVar6 - uVar5 >> 1) + uVar5;
            uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + uVar4 * 8) + 8);
            if (param_2 < uVar2) {
                uVar5 = uVar4 + 1;
            }
            else {
                uVar6 = uVar4;
                if (param_2 <= uVar2) break;
            }
            uVar4 = uVar5;
            uVar5 = uVar4;
        } while (uVar4 < uVar6);
    }
    if ((uVar4 != *(ulonglong *)(param_1 + 0x28)) &&
        (uVar6 = *(ulonglong *)(*(longlong *)(lVar1 + uVar4 * 8) + 8), uVar6 == param_2)) {
        if (uVar6 == *(ulonglong *)(param_1 + 0x30)) {
            *(undefined8 *)(param_1 + 0x30) = 0;
        }
        puVar3 = *(undefined8 **)(lVar1 + uVar4 * 8);
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
        }
        FUN_140007270(param_1 + 0x20,uVar4);
    }
    return 0;
}



int FUN_140629c20(longlong param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined *puVar6;
    undefined *puVar7;
    ulonglong uVar8;
    undefined *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    longlong lVar15;
    ulonglong uVar16;
    undefined *puVar17;
    ulonglong uVar18;
    int local_res8;
    ulonglong local_78;
    undefined local_68 [16];
    undefined local_58 [8];
    undefined *local_50;
    longlong local_48;

    local_50 = (undefined *)FUN_14018b280();
    local_48 = 0;
    local_res8 = 0;
    *local_50 = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    local_78 = 0;
    *(undefined **)(local_50 + 0x10) = local_50;
    *(undefined **)(local_50 + 0x18) = local_50;
    if (param_4 != 0) {
        do {
            uVar14 = *(ulonglong *)(param_1 + 0x28);
            uVar18 = *param_3;
            uVar16 = 0;
            uVar10 = uVar14;
            uVar13 = uVar16;
            if (uVar14 != 0) {
                do {
                    uVar12 = (uVar10 - uVar16 >> 1) + uVar16;
                    uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar12 * 8) + 8);
                    if (uVar18 < uVar11) {
                        uVar16 = uVar12 + 1;
                        uVar12 = uVar10;
                    }
                    else {
                        uVar13 = uVar12;
                        if (uVar18 <= uVar11) break;
                    }
                    uVar10 = uVar12;
                    uVar13 = uVar16;
                } while (uVar16 < uVar12);
            }
            if ((uVar14 <= uVar13) ||
                (*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar13 * 8) + 8) != uVar18))
            {
                puVar4 = (undefined8 *)FUN_14018b280(0x88,0);
                if (puVar4 == (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)0x0;
                }
                else {
                    *(undefined4 *)(puVar4 + 10) = 0;
                    puVar4[0xb] = 0;
                    puVar4[0x10] = 0;
                    puVar4[0xf] = 0;
                    FUN_1407e4830(puVar4 + 1,0,0x68);
                    *(undefined4 *)(puVar4 + 2) = 7;
                    *puVar4 = &PTR_FUN_140b77d28;
                }
                local_res8 = FUN_14079fd90(puVar4,param_3);
                if (local_res8 < 0) {
                    if (puVar4 != (undefined8 *)0x0) {
                        (**(code **)*puVar4)(puVar4,1);
                    }
                    break;
                }
                lVar15 = *(longlong *)(param_1 + 0x28) + 1;
                lVar5 = FUN_14018db00(*(undefined8 *)(param_1 + 0x20),lVar15,8);
                lVar1 = uVar13 * 8;
                FUN_1407db590(lVar5 + 8 + lVar1,*(longlong *)(param_1 + 0x20) + lVar1,
                              (*(longlong *)(param_1 + 0x28) - uVar13) * 8);
                *(undefined8 **)(lVar1 + lVar5) = puVar4;
                if (*(longlong *)(param_1 + 0x20) != lVar5) {
                    FUN_1407db590(lVar5,*(longlong *)(param_1 + 0x20),lVar1);
                    lVar1 = *(longlong *)(param_1 + 0x20);
                    if (lVar1 != 0) {
                        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                    }
                    *(longlong *)(param_1 + 0x20) = lVar5;
                }
                *(longlong *)(param_1 + 0x28) = lVar15;
                lVar5 = param_2[1];
                uVar2 = puVar4[1];
                lVar1 = lVar5 + 1;
                lVar15 = FUN_14018db00(*param_2,lVar1,8);
                *(undefined8 *)(lVar15 + lVar5 * 8) = uVar2;
                if (*param_2 != lVar15) {
                    FUN_1407db590(lVar15,*param_2,param_2[1] << 3);
                    lVar5 = *param_2;
                    if (lVar5 != 0) {
                        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
                    }
                    *param_2 = lVar15;
                }
                param_2[1] = lVar1;
                FUN_140007810(local_58,local_68);
                if ((*(byte *)((longlong)puVar4 + 0x4c) & 2) == 0) {
                    *(undefined8 *)(param_1 + 0x30) = puVar4[1];
                }
            }
            param_3 = param_3 + 0xd;
            local_78 = local_78 + 1;
        } while (local_78 < param_4);
    }
    uVar18 = 1;
    FUN_14062b370(param_1 + 0x20);
    uVar16 = *(ulonglong *)(param_1 + 0x40);
    uVar14 = 0;
    puVar17 = local_50;
    if (uVar16 != 0) {
        do {
            if (*(undefined **)(puVar17 + 8) != (undefined *)0x0) {
                uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + uVar14 * 8);
                puVar6 = *(undefined **)(puVar17 + 8);
                puVar9 = puVar17;
                do {
                    if (*(ulonglong *)(puVar6 + 0x20) < uVar10) {
                        puVar7 = *(undefined **)(puVar6 + 0x18);
                    }
                    else {
                        puVar7 = *(undefined **)(puVar6 + 0x10);
                        puVar9 = puVar6;
                    }
                    puVar6 = puVar7;
                } while (puVar7 != (undefined *)0x0);
                if (((puVar9 != puVar17) && (*(ulonglong *)(puVar9 + 0x20) <= uVar10)) && (uVar10 != 0)) {
                    uVar13 = *(ulonglong *)(param_1 + 0x28);
                    uVar8 = 0;
                    uVar11 = uVar8;
                    uVar12 = uVar13;
                    if (uVar13 != 0) {
                        do {
                            uVar8 = (uVar12 - uVar11 >> 1) + uVar11;
                            uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8) + 8);
                            if (uVar10 < uVar3) {
                                uVar11 = uVar8 + 1;
                            }
                            else {
                                uVar12 = uVar8;
                                if (uVar10 <= uVar3) break;
                            }
                            uVar8 = uVar11;
                            uVar11 = uVar8;
                        } while (uVar8 < uVar12);
                    }
                    if (((uVar8 != uVar13) &&
                         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8),
                                 *(ulonglong *)(lVar1 + 8) == uVar10)) && (lVar1 != 0)) {
                        FUN_140430aa0(*(undefined8 *)(DAT_140c65898 + 0x7340));
                        FUN_140007270(param_1 + 0x38,uVar14);
                        puVar17 = local_50;
                        if (uVar18 == uVar16) break;
                        uVar14 = uVar14 - 1;
                        uVar18 = uVar18 - 1;
                        uVar16 = uVar16 - 1;
                    }
                }
            }
            uVar14 = uVar14 + 1;
            uVar18 = uVar18 + 1;
        } while (uVar14 < uVar16);
    }
    if (local_48 != 0) {
        lVar1 = *(longlong *)(puVar17 + 8);
        puVar6 = puVar17;
        puVar17 = local_50;
        while (local_50 = puVar17, lVar1 != 0) {
            FUN_1400083b0(local_58,*(undefined8 *)(lVar1 + 0x18));
            lVar5 = *(longlong *)(lVar1 + 0x10);
            FUN_14018b900(lVar1,0);
            lVar1 = lVar5;
            puVar6 = local_50;
            puVar17 = local_50;
        }
        *(undefined **)(puVar6 + 0x10) = puVar6;
        *(undefined8 *)(puVar17 + 8) = 0;
        *(undefined **)(puVar17 + 0x18) = puVar17;
        local_48 = 0;
    }
    FUN_14018b900(puVar17,0);
    return local_res8;
}



void FUN_14062a160(undefined4 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 extraout_XMM0_Da;
    float local_res10 [6];

    if ((param_4 != 0) && (*(int *)(param_4 + 0x80) == 0xc)) {
        if ((DAT_140dc3e50 & 1) == 0) {
            DAT_140dc3e50 = DAT_140dc3e50 | 1;
            lVar3 = FUN_140200220(0xed);
            param_1 = extraout_XMM0_Da;
            if (lVar3 == 0) {
                DAT_140dc3e54 = 0x42480000;
            }
            else {
                DAT_140dc3e54 = *(undefined4 *)(lVar3 + 0x18);
            }
        }
        iVar2 = FUN_14062b670(param_1,param_2,DAT_140dc3e54,*(undefined8 *)(DAT_140c65898 + 0x78),
                              param_4,param_5,param_6,local_res10);
        if (((iVar2 != 0) &&
             (iVar2 = FUN_14045a950(param_4,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8)),
                     0 < iVar2)) && (local_res10[0] < (float)param_3[1])) {
            uVar1 = *(undefined4 *)(param_4 + 8);
            param_3[1] = local_res10[0];
            *param_3 = uVar1;
        }
    }
    return;
}



undefined8 FUN_14062a2b0(undefined8 param_1,undefined8 *param_2)

{
    longlong *plVar1;

    if (*(int *)(param_2 + 1) != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c);
        return 0;
    }
    plVar1 = (longlong *)FUN_140629af0(param_1,*param_2);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,(longlong)param_2 + 0xc,1);
        FUN_140430a40(*(undefined8 *)(DAT_140c65898 + 0x7340),plVar1[1]);
    }
    return 0;
}



undefined8 FUN_14062a340(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong local_18;
    undefined8 local_10;

    if (param_2[1] != 0) {
        local_10 = 0;
        local_18 = 0;
        iVar2 = FUN_140629c20(param_1,&local_18,*(undefined8 *)(param_2 + 2),param_2[1]);
        lVar1 = local_18;
        if (-1 < iVar2) {
            FUN_140430650(*(undefined8 *)(DAT_140c65898 + 0x7340),local_18,local_10,*param_2,
                          *(undefined8 *)(param_1 + 0x30));
        }
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
    }
    return 0;
}



void FUN_14062a4c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
    uint uVar1;
    int iVar2;
    undefined4 uVar3;
    undefined auStack232 [32];
    undefined8 local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined4 local_98;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    uVar1 = DAT_140c636a8 - *(int *)(param_1 + 8);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
        if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x14)) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            goto LAB_14062a55f;
        }
        uVar3 = 0x40;
    }
    else {
        if (uVar1 < *(uint *)(param_1 + 0x10)) {
            *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0x18) + *(int *)(param_1 + 8);
        }
        else {
            *(int *)(param_1 + 8) = DAT_140c636a8;
            *(undefined4 *)(param_1 + 0xc) = 1;
        }
        LAB_14062a55f:
        iVar2 = FUN_1403e1170(param_2,0);
        if (iVar2 != 0) {
            FUN_1407e4830(&local_c8,0,0x88);
            local_a8 = param_7;
            local_98 = param_6;
            local_b0 = param_5;
            local_c8 = param_2;
            local_c0 = param_3;
            local_b8 = param_4;
            FUN_1403f4900(DAT_140c65898,0x168,&local_c8);
            goto LAB_14062a5c9;
        }
        uVar3 = 0x35;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,uVar3);
    LAB_14062a5c9:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



void FUN_14062a5f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                   longlong *param_9)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    float fVar11;
    undefined auStack296 [32];
    ulonglong local_108;
    undefined8 local_100;
    undefined8 local_f8;
    undefined8 local_e8;
    undefined8 local_e0;
    undefined8 local_d8;
    ulonglong local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined8 auStack176 [11];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    local_108 = param_5;
    uVar1 = DAT_140c636a8 - param_1[2];
    local_f8 = param_4;
    if (uVar1 < (uint)param_1[6]) {
        if (param_1[3] != param_1[5]) {
            param_1[3] = param_1[3] + 1;
            goto LAB_14062a6a2;
        }
        uVar10 = 0x40;
        LAB_14062a65f:
        uVar5 = *(undefined8 *)(DAT_140c65898 + 0x7340);
    }
    else {
        if (uVar1 < (uint)param_1[4]) {
            param_1[2] = param_1[6] + param_1[2];
        }
        else {
            param_1[2] = DAT_140c636a8;
            param_1[3] = 1;
        }
        LAB_14062a6a2:
        if (param_9[1] == 0) {
            uVar10 = 0x42;
            goto LAB_14062a65f;
        }
        lVar3 = DAT_140c65898;
        iVar2 = FUN_1403a6930(DAT_140c65898);
        if (iVar2 != 0) {
            lVar3 = FUN_140200220(0xed);
            if (lVar3 == 0) {
                fVar11 = 5.0;
            }
            else {
                fVar11 = *(float *)(lVar3 + 0x18);
            }
            if ((float)param_1[1] <= fVar11) {
                uVar6 = 0;
                uVar7 = *(ulonglong *)(DAT_140c635f0 + 0x1750);
                uVar10 = 0;
                if (uVar7 != 0) {
                    puVar9 = *(undefined8 **)(DAT_140c635f0 + 0x1748);
                    do {
                        iVar2 = FUN_14018e2c0(*puVar9,param_2);
                        if (iVar2 == 0) {
                            uVar10 = 1;
                            break;
                        }
                        uVar6 = uVar6 + 1;
                        puVar9 = puVar9 + 1;
                    } while (uVar6 < uVar7);
                }
                FUN_1407e4830(&local_e8,0,0x88);
                uVar7 = 0;
                local_d8 = local_f8;
                local_d0 = local_108;
                local_c8 = param_8;
                local_b4 = *param_1;
                local_c0 = param_7;
                local_b8 = param_6;
                uVar6 = uVar7;
                local_e8 = param_2;
                local_e0 = param_3;
                if (param_9[1] != 0) {
                    do {
                        plVar4 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0,*param_9 + uVar6 * 8);
                        uVar8 = uVar7;
                        if (plVar4 != (longlong *)0x0) {
                            local_108 = local_108 & 0xffffffff00000000;
                            local_100 = 0;
                            iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4,&local_108,uVar10);
                            if (iVar2 == 0) {
                                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,
                                              0x9e);
                                goto LAB_14062a869;
                            }
                            uVar5 = (**(code **)(*plVar4 + 0x30))();
                            uVar1 = (int)uVar7 + 1;
                            uVar8 = (ulonglong)uVar1;
                            auStack176[uVar7] = uVar5;
                            if (9 < uVar1) break;
                        }
                        uVar6 = uVar6 + 1;
                        uVar7 = uVar8;
                    } while (uVar6 < (ulonglong)param_9[1]);
                }
                FUN_1403f4900(DAT_140c65898,0x168,&local_e8);
                goto LAB_14062a869;
            }
            uVar10 = 0x41;
            goto LAB_14062a65f;
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x7340);
        uVar10 = 0x9e;
    }
    FUN_1400ea3e0(uVar5,"MailResult",&DAT_1409eef7c,uVar10);
    LAB_14062a869:
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack296);
    return;
}



undefined8 FUN_14062a8c0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
    uint uVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined8 local_10;

    uVar1 = DAT_140c636a8 - param_1[2];
    if (uVar1 < (uint)param_1[6]) {
        if (param_1[3] == param_1[5]) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0x40);
            return 0x80004005;
        }
        param_1[3] = param_1[3] + 1;
    }
    else if (uVar1 < (uint)param_1[4]) {
        param_1[2] = param_1[6] + param_1[2];
    }
    else {
        param_1[2] = DAT_140c636a8;
        param_1[3] = 1;
    }
    if ((DAT_140dc3e58 & 1) == 0) {
        DAT_140dc3e58 = DAT_140dc3e58 | 1;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            DAT_140dc3e5c = 3;
        }
        else {
            DAT_140dc3e5c = *(uint *)(lVar2 + 4);
        }
    }
    if (DAT_140dc3e5c <= *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38)) {
        local_10 = CONCAT44(*param_1,param_3);
        local_18 = param_2;
        FUN_1403f4900(DAT_140c65898,0x126,&local_18);
        return 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0xa1);
    return 0x80004005;
}



int FUN_14062aa20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_140629af0(param_3,*param_1);
    lVar2 = FUN_140629af0(param_3,*param_2);
    return *(int *)(lVar2 + 0x70) - *(int *)(lVar1 + 0x70);
}



ulonglong FUN_14062aa70(uint *param_1,longlong *param_2)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong local_48;
    ulonglong local_40;
    ulonglong local_38;
    ulonglong local_30;
    ulonglong local_28;

    uVar2 = DAT_140c636a8 - param_1[2];
    if (uVar2 < param_1[6]) {
        if (param_1[3] == param_1[5]) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0x40);
            return 0x80004005;
        }
        param_1[3] = param_1[3] + 1;
    }
    else if (uVar2 < param_1[4]) {
        param_1[2] = param_1[6] + param_1[2];
    }
    else {
        param_1[2] = DAT_140c636a8;
        param_1[3] = 1;
    }
    if ((DAT_140dc3e60 & 1) == 0) {
        DAT_140dc3e60 = DAT_140dc3e60 | 1;
        lVar3 = FUN_140200220();
        if (lVar3 == 0) {
            DAT_140dc3e64 = 3;
        }
        else {
            DAT_140dc3e64 = *(uint *)(lVar3 + 4);
        }
    }
    if (*(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38) < DAT_140dc3e64) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0xa1);
        return 0x80004005;
    }
    uVar8 = 0;
    local_40 = 0;
    uVar4 = FUN_14018dbc0(0,param_2[1],8);
    uVar7 = uVar8;
    if (uVar4 != 0) {
        uVar7 = uVar4;
    }
    uVar4 = uVar8;
    uVar6 = uVar8;
    local_48 = uVar7;
    if (param_2[1] != 0) {
        do {
            plVar1 = (longlong *)(*param_2 + uVar6 * 8);
            if (uVar4 != 0) {
                uVar5 = uVar8;
                do {
                    if (*(longlong *)(uVar7 + uVar5 * 8) == *plVar1) goto LAB_14062ac18;
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar4);
            }
            lVar3 = FUN_140629af0(param_1,*plVar1);
            if (lVar3 != 0) {
                FUN_140033260(&local_48,plVar1);
                uVar4 = local_40;
                uVar7 = local_48;
            }
            LAB_14062ac18:
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)param_2[1]);
        if (uVar4 != 0) {
            if (1 < uVar4) {
                FUN_14062b4f0(&local_48,param_1);
                uVar4 = local_40;
                uVar7 = local_48;
            }
            local_38 = uVar4 & 0xffffffff;
            local_28 = (ulonglong)*param_1;
            local_30 = uVar7;
            FUN_1403f4900(DAT_140c65898,0x125,&local_38);
            goto LAB_14062ac87;
        }
    }
    uVar8 = 0x80004005;
    LAB_14062ac87:
    if (uVar7 != 0) {
        (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))(uVar7 - 0x10);
    }
    return uVar8;
}



undefined8 FUN_14062acc0(longlong param_1,undefined8 param_2)

{
    uint uVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 local_res8 [4];

    uVar1 = DAT_140c636a8 - *(int *)(param_1 + 8);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
        if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x14)) {
            uVar3 = 0x40;
            goto LAB_14062acfd;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else if (uVar1 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0x18) + *(int *)(param_1 + 8);
    }
    else {
        *(int *)(param_1 + 8) = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0xc) = 1;
    }
    lVar2 = FUN_140629af0(param_1,param_2);
    if (lVar2 == 0) {
        uVar3 = 0x47;
    }
    else {
        if ((*(byte *)(lVar2 + 0x4c) & 8) == 0) {
            local_res8[0] = param_2;
            FUN_1403f4900(DAT_140c65898,0x124,local_res8);
            return 0;
        }
        uVar3 = 0x77;
    }
    LAB_14062acfd:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,uVar3);
    return 0x80004005;
}



undefined8 FUN_14062ad80(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    ulonglong local_38;
    ulonglong local_30;

    uVar2 = DAT_140c636a8 - *(int *)(param_1 + 8);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
        if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x14)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0x40);
            return 0x80004005;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else if (uVar2 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0x18) + *(int *)(param_1 + 8);
    }
    else {
        *(int *)(param_1 + 8) = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0xc) = 1;
    }
    uVar7 = 0;
    uVar3 = FUN_14018dbc0(0,param_2[1],8);
    uVar6 = uVar7;
    if (uVar3 != 0) {
        uVar6 = uVar3;
    }
    uVar3 = uVar6;
    uVar9 = uVar7;
    if (param_2[1] != 0) {
        do {
            uVar4 = 0;
            plVar1 = (longlong *)(*param_2 + uVar7 * 8);
            uVar3 = uVar6;
            if (uVar9 != 0) {
                do {
                    if (*(longlong *)(uVar6 + uVar4 * 8) == *plVar1) goto LAB_14062aecd;
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar9);
            }
            lVar5 = FUN_140629af0(param_1,*plVar1);
            if (lVar5 != 0) {
                uVar4 = FUN_14018db00(uVar6,uVar9 + 1,8);
                *(longlong *)(uVar9 * 8 + uVar4) = *plVar1;
                if ((uVar6 != uVar4) && (FUN_1407db590(uVar4,uVar6), uVar3 = uVar4, uVar6 != 0)) {
                    (**(code **)(*(longlong *)(uVar6 - 0x10) + 8))(uVar6 - 0x10);
                }
                uVar9 = uVar9 + 1;
            }
            LAB_14062aecd:
            uVar8 = 0;
            uVar7 = uVar7 + 1;
            uVar6 = uVar3;
        } while (uVar7 < (ulonglong)param_2[1]);
        if (uVar9 != 0) {
            local_38 = uVar9 & 0xffffffff;
            local_30 = uVar3;
            FUN_1403f4900(DAT_140c65898,0x11e,&local_38);
            goto LAB_14062af1b;
        }
    }
    uVar8 = 0x80004005;
    LAB_14062af1b:
    if (uVar3 != 0) {
        (**(code **)(*(longlong *)(uVar3 - 0x10) + 8))(uVar3 - 0x10);
    }
    return uVar8;
}



undefined8 FUN_14062af50(uint *param_1,undefined8 param_2)

{
    uint uVar1;
    undefined8 local_18;
    ulonglong local_10;

    uVar1 = DAT_140c636a8 - param_1[2];
    if (uVar1 < param_1[6]) {
        if (param_1[3] == param_1[5]) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0x40);
            return 0x80004005;
        }
        param_1[3] = param_1[3] + 1;
    }
    else if (uVar1 < param_1[4]) {
        param_1[2] = param_1[6] + param_1[2];
    }
    else {
        param_1[2] = DAT_140c636a8;
        param_1[3] = 1;
    }
    local_10 = (ulonglong)*param_1;
    local_18 = param_2;
    FUN_1403f4900(DAT_140c65898,0x127,&local_18);
    return 0;
}



undefined8 FUN_14062b000(uint *param_1,undefined8 param_2)

{
    uint uVar1;
    undefined8 local_18;
    ulonglong local_10;

    uVar1 = DAT_140c636a8 - param_1[2];
    if (uVar1 < param_1[6]) {
        if (param_1[3] == param_1[5]) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0x40);
            return 0x80004005;
        }
        param_1[3] = param_1[3] + 1;
    }
    else if (uVar1 < param_1[4]) {
        param_1[2] = param_1[6] + param_1[2];
    }
    else {
        param_1[2] = DAT_140c636a8;
        param_1[3] = 1;
    }
    local_10 = (ulonglong)*param_1;
    local_18 = param_2;
    FUN_1403f4900(DAT_140c65898,0x123,&local_18);
    return 0;
}



void FUN_14062b0b0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    undefined auStack184 [32];
    ulonglong local_98;
    ulonglong local_90;
    ulonglong local_88;
    ulonglong local_80;
    undefined local_78 [64];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    uVar5 = DAT_140c636a8 - *(int *)(param_1 + 8);
    if (uVar5 < *(uint *)(param_1 + 0x18)) {
        if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x14)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MailResult",&DAT_1409eef7c,0x40);
            goto LAB_14062b34c;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else if (uVar5 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0x18) + *(int *)(param_1 + 8);
    }
    else {
        *(int *)(param_1 + 8) = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0xc) = 1;
    }
    uVar15 = 0;
    local_80 = 0;
    uVar7 = FUN_14018dbc0(0,param_2[1],8);
    uVar16 = uVar15;
    if (uVar7 != 0) {
        uVar16 = uVar7;
    }
    uVar7 = uVar15;
    uVar13 = uVar15;
    local_88 = uVar16;
    if (param_2[1] != 0) {
        do {
            plVar1 = (longlong *)(*param_2 + uVar7 * 8);
            if (uVar13 != 0) {
                uVar8 = uVar15;
                do {
                    if (*(longlong *)(uVar16 + uVar8 * 8) == *plVar1) goto LAB_14062b1fd;
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar13);
            }
            lVar9 = FUN_140629af0(param_1,*plVar1);
            if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x4c) & 2) == 0)) {
                FUN_140033260(&local_88,plVar1);
                uVar13 = local_80;
                uVar16 = local_88;
            }
            LAB_14062b1fd:
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong)param_2[1]);
        uVar7 = uVar15;
        if (uVar13 != 0) {
            do {
                uVar8 = *(ulonglong *)(uVar16 + uVar7 * 8);
                if (uVar8 != 0) {
                    uVar2 = *(ulonglong *)(param_1 + 0x28);
                    uVar11 = uVar15;
                    uVar12 = uVar15;
                    uVar14 = uVar2;
                    if (uVar2 != 0) {
                        do {
                            uVar10 = (uVar14 - uVar12 >> 1) + uVar12;
                            uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar10 * 8) + 8);
                            if (uVar8 < uVar3) {
                                uVar12 = uVar10 + 1;
                                uVar10 = uVar14;
                            }
                            else {
                                uVar11 = uVar10;
                                if (uVar8 <= uVar3) break;
                            }
                            uVar11 = uVar12;
                            uVar12 = uVar11;
                            uVar14 = uVar10;
                        } while (uVar11 < uVar10);
                    }
                    if ((((uVar11 != uVar2) &&
                          (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar11 * 8),
                                  *(ulonglong *)(lVar9 + 8) == uVar8)) && (lVar9 != 0)) &&
                        (uVar5 = *(uint *)(lVar9 + 0x4c), uVar6 = uVar5 | 2, *(uint *)(lVar9 + 0x4c) = uVar6,
                                uVar5 != uVar6)) {
                        uVar4 = *(undefined8 *)(DAT_140c65898 + 0x7340);
                        FUN_14001b370(local_78,0x1e,L"%I64u",*(undefined8 *)(uVar16 + uVar7 * 8));
                        FUN_1400ea3e0(uVar4,"MailRead",&DAT_1409ef014,local_78);
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar13);
            local_98 = uVar13 & 0xffffffff;
            local_90 = uVar16;
            FUN_1403f4900(DAT_140c65898,0x122,&local_98);
        }
    }
    if (uVar16 != 0) {
        (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
    }
    LAB_14062b34c:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack184);
    return;
}



void FUN_14062b370(longlong *param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    uVar8 = param_1[1];
    if (1 < uVar8) {
        local_28 = *param_1;
        uVar7 = 0;
        local_20 = &LAB_140629a50;
        local_18 = 0;
        uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        local_10 = FUN_14018b280(uVar3,0);
        if (uVar8 != 0) {
            uVar5 = uVar7;
            if (1 < uVar8) {
                uVar4 = uVar7;
                do {
                    uVar5 = uVar4 + 2;
                    puVar1 = (ulonglong *)(local_10 + -0x10 + uVar5 * 8);
                    *puVar1 = uVar4;
                    puVar1[1] = uVar4 + 1;
                    uVar4 = uVar5;
                } while (uVar5 < uVar8 - ((uint)uVar8 & 1));
            }
            for (; uVar5 < uVar8; uVar5 = uVar5 + 1) {
                *(ulonglong *)(local_10 + uVar5 * 8) = uVar5;
            }
        }
        FUN_14001fec0(&LAB_14004f5f0,local_10,uVar8,&local_28);
        lVar2 = param_1[1];
        if (lVar2 == 0) {
            puVar9 = (undefined8 *)0x0;
        }
        else {
            puVar6 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
            if (puVar6 == (undefined8 *)0x0) {
                puVar9 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar6[1] = lVar2;
                puVar9 = puVar6 + 2;
                *puVar6 = &PTR_LAB_140b55060;
            }
        }
        if (param_1[1] != 0) {
            do {
                uVar8 = uVar7 + 1;
                puVar9[uVar7] = *(undefined8 *)(*param_1 + *(longlong *)(local_10 + -8 + uVar8 * 8) * 8);
                uVar7 = uVar8;
            } while (uVar8 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar9;
        FUN_14018b900(local_10,0);
    }
    return;
}



void FUN_14062b4f0(longlong *param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong local_28;
    code *local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar8 = param_1[1];
    local_20 = FUN_14062aa20;
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    local_18 = param_2;
    local_10 = FUN_14018b280(uVar3,0);
    uVar7 = 0;
    if (uVar8 != 0) {
        uVar5 = uVar7;
        if (1 < uVar8) {
            uVar4 = uVar7;
            do {
                uVar5 = uVar4 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar5 * 8);
                *puVar1 = uVar4;
                puVar1[1] = uVar4 + 1;
                uVar4 = uVar5;
            } while (uVar5 < uVar8 - ((uint)uVar8 & 1));
        }
        for (; uVar5 < uVar8; uVar5 = uVar5 + 1) {
            *(ulonglong *)(local_10 + uVar5 * 8) = uVar5;
        }
    }
    FUN_14001fec0(&LAB_14004f5f0,local_10,uVar8,&local_28);
    lVar2 = param_1[1];
    if (lVar2 == 0) {
        puVar9 = (undefined8 *)0x0;
    }
    else {
        puVar6 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
        if (puVar6 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar6[1] = lVar2;
            puVar9 = puVar6 + 2;
            *puVar6 = &PTR_LAB_140b55060;
        }
    }
    if (param_1[1] != 0) {
        do {
            uVar8 = uVar7 + 1;
            puVar9[uVar7] = *(undefined8 *)(*param_1 + *(longlong *)(local_10 + -8 + uVar8 * 8) * 8);
            uVar7 = uVar8;
        } while (uVar8 < (ulonglong)param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = (longlong)puVar9;
    FUN_14018b900(local_10,0);
    return;
}



bool FUN_14062b670(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                   longlong param_5_00,undefined8 param_6,undefined8 param_7,float *param_5)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;

    if ((param_4 != 0) && (param_5_00 != 0)) {
        lVar1 = *(longlong *)(param_5_00 + 0xd08);
        fVar3 = *(float *)(param_5_00 + 0x11e0) - *(float *)(param_4 + 0x11e0);
        fVar4 = *(float *)(param_5_00 + 0x11e4) - *(float *)(param_4 + 0x11e4);
        fVar5 = 0.0;
        fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + 0.0);
        if (lVar1 == 0) {
            lVar1 = FUN_14022d500(*(undefined4 *)(param_5_00 + 0xd8));
            fVar4 = fVar5;
            if (lVar1 != 0) {
                fVar4 = *(float *)(lVar1 + 0x28);
            }
        }
        else {
            fVar4 = (float)FUN_14047a940(param_5_00);
            fVar4 = fVar4 * *(float *)(lVar1 + 0x8c);
        }
        lVar1 = *(longlong *)(param_4 + 0xd08);
        if (lVar1 == 0) {
            lVar1 = FUN_14022d500(*(undefined4 *)(param_4 + 0xd8));
            fVar2 = fVar5;
            if (lVar1 != 0) {
                fVar2 = *(float *)(lVar1 + 0x28);
            }
        }
        else {
            fVar2 = (float)FUN_14047a940(param_4);
            fVar2 = fVar2 * *(float *)(lVar1 + 0x8c);
        }
        fVar2 = (fVar3 - fVar4) - fVar2;
        if (fVar2 < fVar5) {
            fVar2 = fVar5;
        }
        if (param_5 != (float *)0x0) {
            *param_5 = fVar2;
        }
        return fVar2 <= param_3;
    }
    return false;
}



void FUN_14062b7b0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    return;
}



ulonglong FUN_14062b830(undefined8 *param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    puVar2 = (undefined8 *)FUN_14018b280(0x300,0);
    if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        FUN_1405cfcb0();
        *puVar2 = &PTR_FUN_140b6dda0;
        *(undefined (*) [16])(puVar2 + 0x50) = ZEXT816(0);
        *(undefined4 *)(puVar2 + 0x5a) = 0;
    }
    uVar3 = 0;
    *param_1 = puVar2;
    *(undefined (*) [16])(param_1 + 0xc) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0xe) = ZEXT816(0);
    uVar1 = FUN_1405cfed0(*param_1,param_1);
    uVar3 = uVar3 & 0xffffffff;
    if ((int)uVar1 < 0) {
        uVar3 = (ulonglong)uVar1;
    }
    return uVar3;
}



undefined8 FUN_14062b8a0(longlong param_1)

{
    undefined8 uVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    uVar1 = FUN_1402ec590(param_1,param_1 + 0x10);
    if ((-1 < (int)uVar1) &&
        (uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                (*(longlong **)(param_1 + 0x10),L"Art\\Camera\\Camera_Shake.m3",
                 param_1 + 0x18,2), -1 < (int)uVar1)) {
        local_28 = 0x96;
        local_20 = 0x3f800000;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x248))
                (*(longlong **)(param_1 + 0x18),0,&local_28);
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                (*(longlong **)(param_1 + 0x10),L"Art\\Camera\\Camera_Shake.m3",param_1 + 0x20
                        ,2);
        if (-1 < (int)uVar1) {
            local_28 = 0x96;
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x248))
                    (*(longlong **)(param_1 + 0x20),0,&local_28);
            uVar1 = 0;
        }
    }
    return uVar1;
}



void FUN_14062b990(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    return;
}



void FUN_14062b9f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                   undefined8 param_5_00,undefined8 param_6_00,undefined8 param_7_00,longlong param_5
        ,longlong *param_6,int param_7)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    float fVar5;
    float fVar6;
    int *piVar7;
    int iVar8;
    longlong lVar9;
    undefined4 uVar10;
    undefined4 extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    float fVar16;
    float fVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 local_res18 [2];
    undefined8 local_res20;
    float local_78;
    float fStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    float local_68;
    float fStack100;
    undefined4 uStack96;
    undefined4 uStack92;

    local_res18[0] = param_3;
    local_res20 = param_7_00;
    (**(code **)(*(longlong *)param_4[2] + 0x30))((longlong *)param_4[2],DAT_140c636a8,0);
    lVar9 = param_4[1];
    lVar2 = lVar9;
    if (lVar9 == 0) {
        lVar9 = *param_4;
        lVar2 = *param_4;
    }
    uVar10 = 0;
    (**(code **)(*(longlong *)param_4[2] + 0x50))
            ((longlong *)param_4[2],lVar9 + 0x60,lVar2 + 0xa0,lVar2 + 0x1f8,0);
    lVar9 = DAT_140c65898;
    if ((param_4[1] != 0) && (*(int *)(param_4[1] + 0x2a8) != 0)) {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x7198);
        if ((lVar2 == 0) ||
            (((*(int *)(lVar2 + 0x24) == 0 && (*(int *)(lVar2 + 0x1c) == 0)) &&
              (*(longlong *)(lVar2 + 0x1f0) == 0)))) {
            puVar1 = (undefined4 *)(DAT_140c65898 + 0x7478);
            *(undefined4 *)(DAT_140c65898 + 0x7400) = 3;
            *(undefined4 *)(lVar9 + 0x7474) = *puVar1;
            (***(code ***)(lVar9 + 0x7408))(lVar9 + 0x7408);
            local_res18[0] = extraout_XMM0_Da;
            (**(code **)(*(longlong *)(lVar9 + 0x7408) + 8))(lVar9 + 0x7408,local_res18);
            FUN_1400f9c30(lVar9 + 0x7408);
        }
        puVar3 = (undefined8 *)param_4[1];
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
        }
        lVar9 = DAT_140c65898;
        param_4[1] = 0;
        local_res20 = 3;
        FUN_1403f4900(lVar9,0x720,&local_res20);
        lVar9 = DAT_140c65898;
        *(undefined4 *)(DAT_140c65898 + 0x79a0) = 0;
    }
    if (param_5 == 0) {
        lVar9 = param_4[1];
        if (lVar9 == 0) {
            lVar9 = *param_4;
        }
        fVar13 = *(float *)(lVar9 + 0xd0);
        fVar12 = *(float *)(lVar9 + 0xd4);
        uVar14 = *(undefined4 *)(lVar9 + 0xd8);
        uVar15 = *(undefined4 *)(lVar9 + 0xdc);
        *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        fVar16 = fVar13;
        fVar17 = fVar12;
        uVar18 = uVar14;
        uVar19 = uVar15;
    }
    else {
        if ((((param_7 != 0) &&
              (lVar9 = FUN_1403d90d0(lVar9,*(undefined4 *)(param_5 + 0xc0)), lVar9 != 0)) &&
             ((*(int *)(lVar9 + 0x80) == 9 &&
               ((lVar9 = FUN_14047b6d0(param_5), lVar9 != 0 &&
                                                 (*(longlong **)(lVar9 + 0x16e8) != (longlong *)0x0)))))) &&
            ((iVar8 = (**(code **)(**(longlong **)(lVar9 + 0x16e8) + 0x430))(), iVar8 != 0 ||
                                                                                (iVar8 = (**(code **)(**(longlong **)(lVar9 + 0x16e8) + 0x440))(), iVar8 != 0)))) {
            param_5 = lVar9;
        }
        lVar9 = *param_4;
        fVar13 = *(float *)(lVar9 + 0x34);
        uVar10 = *(undefined4 *)(lVar9 + 0x38);
        uVar14 = *(undefined4 *)(lVar9 + 0x3c);
        if ((*(int *)(param_4 + 5) == *(int *)(param_5 + 8)) ||
            (*(float *)(param_5 + 0x12c0) == *(float *)(param_4 + 6))) {
            if (fVar13 != *(float *)(param_5 + 0x12c0)) {
                fVar12 = fVar13 - *(float *)(param_5 + 0x12c0);
                local_78 = *(float *)(lVar9 + 0x220);
                uStack112 = *(undefined4 *)(lVar9 + 0x228);
                uStack108 = *(undefined4 *)(lVar9 + 0x22c);
                fStack116 = *(float *)(lVar9 + 0x224) + fVar12;
                *(float *)(lVar9 + 0x220) = local_78;
                *(float *)(lVar9 + 0x224) = fStack116;
                *(undefined4 *)(lVar9 + 0x228) = uStack112;
                *(undefined4 *)(lVar9 + 0x22c) = uStack108;
                lVar9 = *param_4;
                local_68 = *(float *)(lVar9 + 0x230);
                fStack100 = *(float *)(lVar9 + 0x234);
                uStack96 = *(undefined4 *)(lVar9 + 0x238);
                uStack92 = *(undefined4 *)(lVar9 + 0x23c);
                *(float *)(lVar9 + 0x230) = local_78;
                *(float *)(lVar9 + 0x234) = fStack116;
                *(undefined4 *)(lVar9 + 0x238) = uStack112;
                *(undefined4 *)(lVar9 + 0x23c) = uStack108;
                lVar9 = *param_4;
                *(float *)(lVar9 + 0x34) = fVar13 - fVar12;
                *(undefined4 *)(lVar9 + 0x38) = uVar10;
                *(undefined4 *)(lVar9 + 0x3c) = uVar14;
            }
        }
        else {
            auVar11 = ZEXT816(0) & (undefined  [16])0xffffffff;
            *(undefined (*) [16])(lVar9 + 0x220) = auVar11;
            *(undefined (*) [16])(*param_4 + 0x230) = auVar11;
            *(undefined (*) [16])(*param_4 + 0x210) = auVar11;
            *(undefined (*) [16])(*param_4 + 0x240) = auVar11;
        }
        *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_5 + 0x12c0);
        lVar9 = (**(code **)(*param_6 + 0x18))();
        piVar7 = DAT_140c63750;
        fVar13 = *(float *)(param_5 + 0x11e4);
        fVar12 = *(float *)(param_5 + 0x11e8);
        fVar16 = *(float *)(param_5 + 0x11ec);
        fVar17 = *(float *)(lVar9 + 0x34);
        fVar5 = *(float *)(lVar9 + 0x38);
        fVar6 = *(float *)(lVar9 + 0x3c);
        *(float *)(param_4 + 10) = *(float *)(param_5 + 0x11e0) - *(float *)(lVar9 + 0x30);
        *(float *)((longlong)param_4 + 0x54) = fVar13 - fVar17;
        *(float *)(param_4 + 0xb) = fVar12 - fVar5;
        *(float *)((longlong)param_4 + 0x5c) = fVar16 - fVar6;
        plVar4 = *(longlong **)(param_5 + 0x16e8);
        iVar8 = DAT_140c4e7e0;
        if (*piVar7 < DAT_140c4e7e0) {
            iVar8 = *piVar7;
        }
        if ((((&DAT_140c4e7f0)[iVar8] == '\0') || (plVar4 == (longlong *)0x0)) ||
            (iVar8 = (**(code **)(*plVar4 + 0x440))(), iVar8 == 0)) {
            local_78 = *(float *)(param_4 + 10);
            uStack112 = *(undefined4 *)(param_4 + 0xb);
            uStack108 = *(undefined4 *)((longlong)param_4 + 0x5c);
            fStack116 = *(float *)((longlong)param_4 + 0x54) + *(float *)(*param_4 + 0x298);
        }
        else {
            local_78 = *(float *)(param_4 + 10);
            fStack116 = *(float *)((longlong)param_4 + 0x54);
            uStack112 = *(undefined4 *)(param_4 + 0xb);
            uStack108 = *(undefined4 *)((longlong)param_4 + 0x5c);
            fVar13 = *(float *)(param_5 + 0x12c4);
            (**(code **)(*plVar4 + 0x448))();
            fStack116 = fStack116 + extraout_XMM0_Da_00 * fVar13;
        }
        iVar8 = DAT_140c4e7a0;
        if (*DAT_140c63750 < DAT_140c4e7a0) {
            iVar8 = *DAT_140c63750;
        }
        fVar13 = local_78;
        fVar12 = fStack116;
        uVar14 = uStack112;
        uVar15 = uStack108;
        fVar16 = local_78;
        fVar17 = fStack116;
        uVar18 = uStack112;
        uVar19 = uStack108;
        if ((((&DAT_140c4e7b0)[iVar8] != '\0') && (plVar4 != (longlong *)0x0)) &&
            (iVar8 = (**(code **)(*plVar4 + 0x430))(plVar4), fVar16 = fVar13, fVar17 = fVar12,
             uVar18 = uVar14, uVar19 = uVar15, iVar8 != 0)) {
            local_78 = *(float *)(param_4 + 10);
            fStack116 = *(float *)((longlong)param_4 + 0x54);
            uStack112 = *(undefined4 *)(param_4 + 0xb);
            uStack108 = *(undefined4 *)((longlong)param_4 + 0x5c);
            fVar13 = *(float *)(param_5 + 0x12c4);
            (**(code **)(*plVar4 + 0x438))(plVar4);
            fStack116 = fStack116 + extraout_XMM0_Da_01 * fVar13;
            fVar13 = local_78;
            fVar12 = fStack116;
            uVar14 = uStack112;
            uVar15 = uStack108;
        }
        *(undefined4 *)((longlong)param_4 + 0x34) = *(undefined4 *)(param_5 + 0x1328);
        if ((param_7 != 0) && (*(int *)((longlong)param_4 + 0x2c) == 0)) {
            plVar4 = *(longlong **)(param_5 + 0x16e8);
            if ((plVar4 != (longlong *)0x0) &&
                ((iVar8 = (**(code **)(*plVar4 + 0x350))(plVar4,0x27), iVar8 != 0 &&
                                                                       (iVar8 = (**(code **)(*plVar4 + 0x350))(plVar4,0x60), iVar8 != 0)))) {
                (**(code **)(*plVar4 + 0x358))(plVar4,&local_78,0x27);
                (**(code **)(*plVar4 + 0x358))(plVar4,&local_68,0x60);
                *(float *)(*param_4 + 0x2a8) =
                        SQRT((local_78 - local_68) * (local_78 - local_68) +
                             (fStack116 - fStack100) * (fStack116 - fStack100) + 0.0);
                uVar10 = *(undefined4 *)(param_5 + 8);
                goto LAB_14062becb;
            }
            *(undefined4 *)(*param_4 + 0x2a8) = *(undefined4 *)(*param_4 + 0x29c);
        }
        uVar10 = *(undefined4 *)(param_5 + 8);
    }
    LAB_14062becb:
    *(undefined4 *)(param_4 + 5) = uVar10;
    if (*(int *)(*param_4 + 0x54) == 0) {
        *(undefined (*) [16])(*param_4 + 0x40) =
                CONCAT412(uVar19,CONCAT48(uVar18,CONCAT44(fVar17,fVar16)));
    }
    if (*(int *)(*param_4 + 0x54) == 0) {
        *(undefined (*) [16])(*param_4 + 0x260) =
                CONCAT412(uVar15,CONCAT48(uVar14,CONCAT44(fVar12,fVar13)));
    }
    *(int *)((longlong)param_4 + 0x2c) = param_7;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14062bf20(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                   undefined8 param_5_00,undefined8 param_6_00,undefined8 param_7_00,
                   undefined8 param_5,longlong *param_6,undefined8 param_7)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined (*pauVar6) [16];
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    undefined auVar12 [16];
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float local_98;
    float fStack148;
    float fStack144;
    float fStack140;
    undefined local_88 [8];
    float fStack128;
    float fStack124;
    undefined local_78 [16];

    _local_88 = *(undefined (*) [16])(*param_4 + 0x40);
    local_78 = *(undefined (*) [16])(*param_4 + 0x260);
    auVar12 = ZEXT1216(ZEXT812(0x3e4ccccd));
    lVar4 = FUN_1403d90d0();
    if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x16e8) != (longlong *)0x0)) {
        fVar7 = *(float *)(lVar4 + 0x12c4);
        local_98 = *(float *)(param_4 + 10);
        fStack148 = *(float *)((longlong)param_4 + 0x54);
        fStack144 = *(float *)(param_4 + 0xb);
        fStack140 = *(float *)((longlong)param_4 + 0x5c);
        lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x16e8) + 0x4c0))();
        lVar4 = param_4[1];
        fStack148 = fStack148 + (*(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 4)) * 0.5 * fVar7;
        if (lVar4 == 0) {
            lVar4 = *param_4;
        }
        fVar8 = *(float *)(lVar4 + 0x118) / *(float *)(lVar4 + 0x108);
        fVar9 = fVar8 / *(float *)(lVar4 + 0xe0);
        fVar7 = fVar8 / *(float *)(lVar4 + 0xf4);
        auVar12 = sqrtps(auVar12,ZEXT416((uint)(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7)));
        fVar16 = SUB164(auVar12,0);
        fVar7 = fVar16 * -1.0;
        fVar8 = fVar16 * -1.0;
        fVar9 = fVar16 * -1.0;
        fVar10 = fVar16 * 0.0;
        fVar13 = fVar16 * 1.0;
        fVar14 = fVar16 * 1.0;
        fVar15 = fVar16 * 1.0;
        fVar16 = fVar16 * 0.0;
        pauVar6 = (undefined (*) [16])(**(code **)(*param_6 + 0x18))(param_6);
        *pauVar6 = CONCAT412(fVar10,CONCAT48(fVar9,CONCAT44(fVar8,fVar7)));
        pauVar6[1] = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        *(float *)pauVar6[2] = local_98;
        *(float *)(pauVar6[2] + 4) = fStack148;
        *(float *)(pauVar6[2] + 8) = fStack144;
        *(float *)(pauVar6[2] + 0xc) = fStack140;
        fVar7 = local_98;
        fVar8 = fStack148;
        fVar9 = fStack144;
        fVar10 = fStack140;
        fVar16 = (float)(**(code **)(*param_6 + 0x48))(param_6,local_88,0x4011);
        if (fVar16 < 1.0) {
            fVar7 = (local_88._0_4_ - fVar7) * fVar16 + fVar7;
            fVar8 = (local_88._4_4_ - fVar8) * fVar16 + fVar8;
            fVar9 = (fStack128 - fVar9) * fVar16 + fVar9;
            fVar10 = (fStack124 - fVar10) * fVar16 + fVar10;
            _local_88 = CONCAT412(fVar10,CONCAT48(fVar9,CONCAT44(fVar8,fVar7)));
            local_78 = CONCAT412(fVar10,CONCAT48(fVar9,CONCAT44(fVar8,fVar7)));
        }
    }
    uVar11 = SUB164(auVar12,0);
    iVar3 = *DAT_140c63750;
    iVar2 = DAT_140c536b0;
    if (iVar3 < DAT_140c536b0) {
        iVar2 = iVar3;
    }
    if ((&DAT_140c536c0)[iVar2] == '\0') {
        iVar2 = DAT_140c536f0;
        if (iVar3 < DAT_140c536f0) {
            iVar2 = iVar3;
        }
        if ((&DAT_140c53700)[iVar2] == '\0') goto LAB_14062c1f8;
        local_98 = *(float *)(param_4 + 8);
        fStack144 = *(float *)(param_4 + 9);
        fStack140 = *(float *)((longlong)param_4 + 0x4c);
        iVar2 = DAT_140c4e820;
        if (iVar3 < DAT_140c4e820) {
            iVar2 = iVar3;
        }
        fStack148 = *(float *)((longlong)param_4 + 0x44) +
                    *(float *)(&DAT_140c4e830 + (longlong)iVar2 * 4);
    }
    else {
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (lVar4 == 0) goto LAB_14062c1f8;
        plVar1 = *(longlong **)(lVar4 + 0x16e8);
        iVar3 = DAT_140c4e7e0;
        if (*DAT_140c63750 < DAT_140c4e7e0) {
            iVar3 = *DAT_140c63750;
        }
        if ((((&DAT_140c4e7f0)[iVar3] == '\0') || (plVar1 == (longlong *)0x0)) ||
            (iVar3 = (**(code **)(*plVar1 + 0x440))(plVar1), iVar3 == 0)) {
            local_98 = *(float *)(lVar4 + 0x11e0);
            fStack144 = *(float *)(lVar4 + 0x11e8);
            fStack140 = *(float *)(lVar4 + 0x11ec);
            fStack148 = *(float *)(lVar4 + 0x11e4) + *(float *)(*param_4 + 0x298);
        }
        else {
            local_98 = *(float *)(lVar4 + 0x11e0);
            fStack148 = *(float *)(lVar4 + 0x11e4);
            fStack144 = *(float *)(lVar4 + 0x11e8);
            fStack140 = *(float *)(lVar4 + 0x11ec);
            fVar7 = *(float *)(lVar4 + 0x12c4);
            fVar8 = (float)(**(code **)(*plVar1 + 0x448))(plVar1);
            fStack148 = fStack148 + fVar8 * fVar7;
        }
    }
    FUN_1405d2b80(*param_4,local_78,&local_98);
    LAB_14062c1f8:
    if ((param_4[1] == 0) || (*(int *)(param_4[1] + 0x2b0) != 0)) {
        FUN_1405d0300(*param_4,param_7_00,param_5,param_7,uVar11,param_2,param_3,local_78,local_88,
                      *(undefined4 *)((longlong)param_4 + 0x34),
                      *(undefined4 *)((longlong)param_4 + 0x2c));
    }
    if (param_4[1] != 0) {
        FUN_1405d5190(param_4[1],param_7_00);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14062c2d0(undefined8 param_1,float param_2,longlong *param_3,undefined8 param_4,
                   undefined (*param_5) [16],longlong param_6)

{
    longlong lVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    undefined (*pauVar7) [16];
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
    uint uVar18;
    undefined local_98 [4];
    undefined auStack148 [12];
    undefined local_88 [8];
    undefined8 uStack128;
    undefined local_78 [8];
    undefined8 uStack112;
    undefined local_68 [8];
    undefined8 uStack96;

    _local_88 = *param_5;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    _local_68 = ZEXT816(0);
    _local_78 = ZEXT816(0);
    iVar4 = FUN_14039e1a0();
    if (iVar4 != 0) {
        pauVar7 = (undefined (*) [16])FUN_14062c9b0();
        _local_88 = *pauVar7;
    }
    piVar3 = DAT_140c63750;
    uVar18 = 0x80000000;
    fVar9 = 0.0;
    iVar4 = *DAT_140c63750;
    iVar5 = DAT_140c4e9a0;
    if (iVar4 < DAT_140c4e9a0) {
        iVar5 = iVar4;
    }
    iVar6 = DAT_140c4e8e0;
    if (iVar4 < DAT_140c4e8e0) {
        iVar6 = iVar4;
    }
    fVar17 = (*(float *)(&DAT_140c4e9b0 + (longlong)iVar5 * 4) * 0.00390625) /
             *(float *)(&DAT_140c4e8f0 + (longlong)iVar6 * 4);
    iVar5 = DAT_140c4ea00;
    if (iVar4 < DAT_140c4ea00) {
        iVar5 = iVar4;
    }
    if (*(float *)(&DAT_140c4ea10 + (longlong)iVar5 * 4) <= 0.0) {
        *(undefined (*) [16])(param_3 + 0xc) =
                CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        *(undefined (*) [16])(param_3 + 0xe) =
                CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
    }
    else {
        if (*(char *)(param_6 + 2) == '\0') {
            if (*(char *)(param_6 + 3) != '\0') {
                *(float *)(param_3 + 0xc) = local_88._0_4_ + *(float *)(param_3 + 0xc);
                *(float *)((longlong)param_3 + 100) = local_88._4_4_ + *(float *)((longlong)param_3 + 100);
                *(undefined (*) [16])(param_3 + 0xe) =
                        CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
            }
        }
        else {
            *(float *)(param_3 + 0xe) = local_88._0_4_ + *(float *)(param_3 + 0xe);
            *(float *)((longlong)param_3 + 0x74) = local_88._4_4_ + *(float *)((longlong)param_3 + 0x74);
            *(undefined (*) [16])(param_3 + 0xc) =
                    CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        }
        iVar4 = DAT_140c4ea00;
        if (*piVar3 < DAT_140c4ea00) {
            iVar4 = *piVar3;
        }
        if (1e-05 < *(float *)(&DAT_140c4ea10 + (longlong)iVar4 * 4)) {
            fVar9 = (float)FUN_1408fc7f0((param_2 * -0.6931472) /
                                         *(float *)(&DAT_140c4ea10 + (longlong)iVar4 * 4));
        }
        local_88 = CONCAT44(fVar14,fVar13);
        fVar9 = 1.0 - fVar9;
        fVar11 = *(float *)(param_3 + 0xc);
        fVar8 = *(float *)((longlong)param_3 + 100) * fVar9;
        fVar10 = fVar9 * *(float *)(param_3 + 0xe);
        fVar12 = fVar9 * *(float *)((longlong)param_3 + 0x74);
        *(undefined (*) [16])(param_3 + 0xe) =
                CONCAT412(*(float *)((longlong)param_3 + 0x7c) -
                          fVar9 * *(float *)((longlong)param_3 + 0x7c),
                          CONCAT48(*(float *)(param_3 + 0xf) - fVar9 * *(float *)(param_3 + 0xf),
                                   CONCAT44(*(float *)((longlong)param_3 + 0x74) - fVar12,
                                            *(float *)(param_3 + 0xe) - fVar10)));
        *(undefined (*) [16])(param_3 + 0xc) =
                CONCAT412(*(float *)((longlong)param_3 + 0x6c) -
                          *(float *)((longlong)param_3 + 0x6c) * fVar9,
                          CONCAT48(*(float *)(param_3 + 0xd) - *(float *)(param_3 + 0xd) * fVar9,
                                   CONCAT44(*(float *)((longlong)param_3 + 100) - fVar8,
                                            *(float *)(param_3 + 0xc) - fVar11 * fVar9)));
        fVar12 = fVar12 * fVar17 * -0.5;
        iVar4 = DAT_140c4e760;
        if (*piVar3 < DAT_140c4e760) {
            iVar4 = *piVar3;
        }
        fVar8 = fVar8 * fVar17 * -0.5;
        if ((&DAT_140c4e770)[iVar4] != '\0') {
            fVar8 = (float)((uint)fVar8 ^ uVar18);
            fVar12 = (float)((uint)fVar12 ^ uVar18);
        }
        local_78._4_4_ = local_78._4_4_ + fVar11 * fVar9 * fVar17 * -1.0;
        local_78._0_4_ = local_78._0_4_ + fVar8;
        local_68._4_4_ = local_68._4_4_ + fVar10 * fVar17 * -1.0;
        local_68._0_4_ = local_68._0_4_ + fVar12;
        _local_78 = CONCAT124(CONCAT84(uStack112,local_78._4_4_),local_78._0_4_);
        _local_68 = CONCAT124(CONCAT84(uStack96,local_68._4_4_),local_68._0_4_);
    }
    iVar4 = *piVar3;
    iVar5 = DAT_140c4e760;
    if (iVar4 < DAT_140c4e760) {
        iVar5 = iVar4;
    }
    fVar11 = local_88._0_4_ * fVar17 * -1.0;
    fVar9 = local_88._4_4_ * fVar17 * -0.5;
    if ((&DAT_140c4e770)[iVar5] != '\0') {
        fVar9 = (float)((uint)fVar9 ^ uVar18);
    }
    _local_88 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
    _local_98 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
    if (*(char *)(param_6 + 2) == '\0') {
        if (*(char *)(param_6 + 3) != '\0') {
            fVar17 = fVar14;
            if (*(char *)(param_6 + 4) != '\0') {
                iVar5 = DAT_140c4e940;
                if (iVar4 < DAT_140c4e940) {
                    iVar5 = iVar4;
                }
                iVar6 = DAT_140c4e880;
                if (iVar4 < DAT_140c4e880) {
                    iVar6 = iVar4;
                }
                local_68._4_4_ =
                        (*(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * 3.141593) /
                        *(float *)(&DAT_140c4e890 + (longlong)iVar6 * 4);
                fVar17 = fVar14 + local_68._4_4_;
                uStack128 = SUB168(_local_88 >> 0x40,0);
                local_88 = CONCAT44(fVar17,fVar13);
            }
            if (*(char *)(param_6 + 5) != '\0') {
                iVar5 = DAT_140c4e940;
                if (iVar4 < DAT_140c4e940) {
                    iVar5 = iVar4;
                }
                iVar6 = DAT_140c4e880;
                if (iVar4 < DAT_140c4e880) {
                    iVar6 = iVar4;
                }
                local_68._4_4_ =
                        (*(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * -3.141593) /
                        *(float *)(&DAT_140c4e890 + (longlong)iVar6 * 4);
                fVar17 = fVar17 + local_68._4_4_;
                local_88 = CONCAT44(fVar17,local_88._0_4_);
            }
            _local_98 = CONCAT412(fVar16 - uStack128._4_4_,
                                  CONCAT48(fVar15 - (float)uStack128,
                                           CONCAT44(fVar14 - local_88._4_4_,fVar13 - local_88._0_4_)));
            _local_78 = CONCAT124(CONCAT84(uStack112,local_78._4_4_ + fVar11),local_78._0_4_ + fVar9);
            fVar14 = fVar17;
        }
    }
    else {
        lVar1 = *param_3;
        _local_68 = CONCAT124(CONCAT84(uStack96,local_68._4_4_ + fVar11),local_68._0_4_ + fVar9);
        *(undefined4 *)(lVar1 + 0x220) = *(undefined4 *)(lVar1 + 0x230);
        *(undefined4 *)(lVar1 + 0x224) = *(undefined4 *)(lVar1 + 0x234);
        *(undefined4 *)(lVar1 + 0x228) = *(undefined4 *)(lVar1 + 0x238);
        *(undefined4 *)(lVar1 + 0x22c) = *(undefined4 *)(lVar1 + 0x23c);
        fVar13 = *(float *)(lVar1 + 0x220);
        *(undefined8 *)(lVar1 + 0x220) = 0;
        *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) + *(float *)(lVar1 + 0x224);
        *(float *)(lVar1 + 0x38) = *(float *)(lVar1 + 0x38) + fVar13;
        local_68._4_4_ = *(float *)(lVar1 + 0x220);
        *(float *)(lVar1 + 0x230) = local_68._4_4_;
        *(undefined4 *)(lVar1 + 0x234) = *(undefined4 *)(lVar1 + 0x224);
        *(undefined4 *)(lVar1 + 0x238) = *(undefined4 *)(lVar1 + 0x228);
        *(undefined4 *)(lVar1 + 0x23c) = *(undefined4 *)(lVar1 + 0x22c);
    }
    if (*(char *)(param_6 + 3) == '\0') {
        if (*(char *)(param_6 + 4) == '\0') {
            if (*(char *)(param_6 + 5) == '\0') goto LAB_14062c70d;
        }
        else {
            iVar4 = *piVar3;
            iVar5 = DAT_140c4e940;
            if (iVar4 < DAT_140c4e940) {
                iVar5 = iVar4;
            }
            iVar6 = DAT_140c4e880;
            if (iVar4 < DAT_140c4e880) {
                iVar6 = iVar4;
            }
            fVar14 = fVar14 + (*(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * 3.141593) /
                              *(float *)(&DAT_140c4e890 + (longlong)iVar6 * 4);
            local_88 = CONCAT44(fVar14,local_88._0_4_);
        }
        if (*(char *)(param_6 + 5) != '\0') {
            iVar5 = *piVar3;
            iVar6 = DAT_140c4e940;
            if (iVar5 < DAT_140c4e940) {
                iVar6 = iVar5;
            }
            iVar2 = DAT_140c4e880;
            if (iVar5 < DAT_140c4e880) {
                iVar2 = iVar5;
            }
            local_88 = CONCAT44(fVar14 + (*(float *)(&DAT_140c4e950 + (longlong)iVar6 * 4) * -3.141593) /
                                         *(float *)(&DAT_140c4e890 + (longlong)iVar2 * 4),local_88._0_4_);
        }
        lVar1 = *param_3;
        *(undefined4 *)(lVar1 + 0x220) = *(undefined4 *)(lVar1 + 0x230);
        *(undefined4 *)(lVar1 + 0x224) = *(undefined4 *)(lVar1 + 0x234);
        *(undefined4 *)(lVar1 + 0x228) = *(undefined4 *)(lVar1 + 0x238);
        *(undefined4 *)(lVar1 + 0x22c) = *(undefined4 *)(lVar1 + 0x23c);
        fVar14 = *(float *)(lVar1 + 0x220);
        *(undefined8 *)(lVar1 + 0x220) = 0;
        *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x224) + *(float *)(lVar1 + 0x34);
        *(float *)(lVar1 + 0x38) = *(float *)(lVar1 + 0x38) + fVar14;
        local_68._4_4_ = *(float *)(lVar1 + 0x220);
        *(float *)(lVar1 + 0x230) = local_68._4_4_;
        *(undefined4 *)(lVar1 + 0x234) = *(undefined4 *)(lVar1 + 0x224);
        *(undefined4 *)(lVar1 + 0x238) = *(undefined4 *)(lVar1 + 0x228);
        *(undefined4 *)(lVar1 + 0x23c) = *(undefined4 *)(lVar1 + 0x22c);
    }
    LAB_14062c70d:
    if (*(char *)(param_6 + 6) != '\0') {
        iVar4 = *piVar3;
        iVar5 = DAT_140c4e940;
        if (iVar4 < DAT_140c4e940) {
            iVar5 = iVar4;
        }
        iVar6 = DAT_140c4e880;
        if (iVar4 < DAT_140c4e880) {
            iVar6 = iVar4;
        }
        local_68._4_4_ =
                (*(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * 3.141593) /
                *(float *)(&DAT_140c4e890 + (longlong)iVar6 * 4);
        auStack148._0_4_ = auStack148._0_4_ + local_68._4_4_;
    }
    if (*(char *)(param_6 + 7) != '\0') {
        iVar4 = *piVar3;
        iVar5 = DAT_140c4e940;
        if (iVar4 < DAT_140c4e940) {
            iVar5 = iVar4;
        }
        iVar6 = DAT_140c4e880;
        if (iVar4 < DAT_140c4e880) {
            iVar6 = iVar4;
        }
        local_68._4_4_ =
                (*(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * -3.141593) /
                *(float *)(&DAT_140c4e890 + (longlong)iVar6 * 4);
        _local_98 = CONCAT44(auStack148._0_4_ + local_68._4_4_,local_98);
    }
    if (*(char *)(param_6 + 8) != '\0') {
        iVar4 = *piVar3;
        iVar5 = DAT_140c4e760;
        if (iVar4 < DAT_140c4e760) {
            iVar5 = iVar4;
        }
        if ((&DAT_140c4e770)[iVar5] == '\0') {
            iVar5 = DAT_140c4e940;
            if (iVar4 < DAT_140c4e940) {
                iVar5 = iVar4;
            }
            local_68._4_4_ = *(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * 3.141593;
        }
        else {
            iVar5 = DAT_140c4e940;
            if (iVar4 < DAT_140c4e940) {
                iVar5 = iVar4;
            }
            local_68._4_4_ = *(float *)(&DAT_140c4e950 + (longlong)iVar5 * 4) * -3.141593;
        }
        iVar5 = DAT_140c4e880;
        if (iVar4 < DAT_140c4e880) {
            iVar5 = iVar4;
        }
        local_68._4_4_ = local_68._4_4_ / *(float *)(&DAT_140c4e890 + (longlong)iVar5 * 4);
        local_98 = local_98 + local_68._4_4_;
    }
    if (*(char *)(param_6 + 9) != '\0') {
        iVar5 = *piVar3;
        iVar6 = DAT_140c4e760;
        if (iVar5 < DAT_140c4e760) {
            iVar6 = iVar5;
        }
        if ((&DAT_140c4e770)[iVar6] == '\0') {
            iVar6 = DAT_140c4e940;
            if (iVar5 < DAT_140c4e940) {
                iVar6 = iVar5;
            }
            local_68._4_4_ = *(float *)(&DAT_140c4e950 + (longlong)iVar6 * 4) * 3.141593;
        }
        else {
            iVar6 = DAT_140c4e940;
            if (iVar5 < DAT_140c4e940) {
                iVar6 = iVar5;
            }
            local_68._4_4_ = *(float *)(&DAT_140c4e950 + (longlong)iVar6 * 4) * -3.141593;
        }
        iVar6 = DAT_140c4e880;
        if (iVar5 < DAT_140c4e880) {
            iVar6 = iVar5;
        }
        local_68._4_4_ = local_68._4_4_ / *(float *)(&DAT_140c4e890 + (longlong)iVar6 * 4);
        _local_98 = CONCAT124(auStack148,local_98 - local_68._4_4_);
    }
    if (param_3[1] == 0) {
        FUN_1405cffa0(local_68._4_4_,param_2,*param_3,iVar4,local_68,local_78,local_88,local_98);
    }
    return;
}



float * FUN_14062c9b0(undefined8 param_1,float *param_2,float *param_3)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    uint uVar14;
    tagPOINT local_res8;
    int local_res10;
    int local_res14;

    fVar12 = param_3[1];
    fVar9 = param_3[2];
    fVar13 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = fVar12;
    param_2[2] = fVar9;
    param_2[3] = fVar13;
    local_res8 = param_1;
    iVar1 = FUN_14039e1a0();
    if (iVar1 != 0) {
        iVar1 = DAT_140c4eac0;
        if (*DAT_140c63750 < DAT_140c4eac0) {
            iVar1 = *DAT_140c63750;
        }
        if ((&DAT_140c4ead0)[iVar1] != '\0') {
            piVar2 = (int *)(**(code **)(*DAT_140c65670 + 0x248))();
            local_res10 = ((uint)piVar2[2] >> 1) + *piVar2;
            local_res14 = ((uint)piVar2[3] >> 1) + piVar2[1];
            GetCursorPos(&local_res8);
            ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),&local_res8);
            lVar3 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
            fVar12 = (float)(ulonglong)*(uint *)(lVar3 + 0x1e8) * 0.5;
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            fVar13 = (float)(ulonglong)*(uint *)(lVar4 + 0x1ec) * 0.5;
            fVar9 = (float)(local_res8.x - local_res10);
            if (fVar12 <= (float)(local_res8.x - local_res10)) {
                fVar9 = fVar12;
            }
            fVar10 = (float)((uint)fVar12 ^ 0x80000000);
            if ((float)((uint)fVar12 ^ 0x80000000) <= fVar9) {
                fVar10 = fVar9;
            }
            uVar5 = (uint)fVar10;
            fVar10 = (float)(ulonglong)(uint)piVar2[2] * 0.04;
            fVar9 = (float)(local_res8.y - local_res14);
            if (fVar13 <= (float)(local_res8.y - local_res14)) {
                fVar9 = fVar13;
            }
            fVar7 = (float)((uint)fVar13 ^ 0x80000000);
            if ((float)((uint)fVar13 ^ 0x80000000) <= fVar9) {
                fVar7 = fVar9;
            }
            fVar9 = (float)(ulonglong)(uint)piVar2[3] * 0.04;
            uVar6 = (uint)fVar7;
            if (fVar9 * fVar9 < (float)(uVar6 * uVar6 + uVar5 * uVar5)) {
                fVar11 = 0.0;
                fVar8 = 0.0;
                fVar7 = (float)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f));
                if (fVar10 < fVar7) {
                    fVar8 = (fVar7 - fVar10) / (fVar12 - fVar10);
                }
                fVar12 = (float)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f));
                if (fVar9 < fVar12) {
                    fVar11 = (fVar12 - fVar9) / (fVar13 - fVar9);
                }
                uVar14 = 0x7fffffff;
                fVar12 = -1.0;
                if (1e-05 <= (float)((uint)fVar8 & 0x7fffffff)) {
                    FUN_1408fbfc0();
                    *param_2 = extraout_XMM0_Da;
                    if ((int)uVar5 < 0) {
                        *param_2 = extraout_XMM0_Da * fVar12;
                    }
                }
                if (1e-05 <= (float)((uint)fVar11 & uVar14)) {
                    FUN_1408fbfc0();
                    param_2[1] = extraout_XMM0_Da_00;
                    if ((int)uVar6 < 0) {
                        param_2[1] = extraout_XMM0_Da_00 * fVar12;
                    }
                }
            }
            return param_2;
        }
    }
    return param_2;
}



void FUN_14062cc70(longlong *param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined local_res8 [8];
    undefined8 local_res10;

    lVar4 = DAT_140c65898;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x2d4) != 0) {
            FUN_1405d31f0(lVar2,*param_1 + 0x20,*param_1 + 0x40);
            return;
        }
        puVar1 = (undefined4 *)(DAT_140c65898 + 0x7478);
        *(undefined4 *)(DAT_140c65898 + 0x7400) = 3;
        *(undefined4 *)(lVar4 + 0x7474) = *puVar1;
        (***(code ***)(lVar4 + 0x7408))(lVar4 + 0x7408);
        (**(code **)(*(longlong *)(lVar4 + 0x7408) + 8))(lVar4 + 0x7408,local_res8);
        FUN_1400f9c30(lVar4 + 0x7408);
        puVar3 = (undefined8 *)param_1[1];
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
        }
        lVar2 = DAT_140c65898;
        param_1[1] = 0;
        local_res10 = 3;
        FUN_1403f4900(lVar2,0x720,&local_res10);
        FUN_1405cc9a0(*(undefined8 *)(DAT_140c65898 + 0x7198));
        *(undefined4 *)(DAT_140c65898 + 0x79a0) = 0;
    }
    return;
}



undefined8 FUN_14062cd90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    longlong lVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    undefined4 in_XMM6_Da;
    undefined4 uVar16;
    undefined4 in_XMM6_Db;
    undefined4 uVar17;
    undefined4 in_XMM6_Dc;
    undefined4 uVar18;
    undefined4 in_XMM6_Dd;
    undefined4 uVar19;
    ulonglong local_res8;

    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)
                (puVar5,1,param_3,param_4,
                 CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    }
    lVar10 = FUN_14018b280(0x4c0,0);
    lVar11 = 0;
    if (lVar10 != 0) {
        lVar11 = FUN_1405d2f90(lVar10);
    }
    lVar10 = *param_1;
    param_1[1] = lVar11;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    fVar12 = *(float *)(lVar10 + 0x20) - *(float *)(lVar10 + 0xc0);
    fVar13 = *(float *)(lVar10 + 0x24) - *(float *)(lVar10 + 0xc4);
    fVar14 = *(float *)(lVar10 + 0x28) - *(float *)(lVar10 + 200);
    fVar15 = *(float *)(lVar10 + 0x2c) - *(float *)(lVar10 + 0xcc);
    *(longlong **)(lVar11 + 8) = param_1;
    *(undefined4 *)(lVar11 + 0x2f0) = 0;
    uVar1 = *(undefined4 *)(lVar10 + 0x24);
    uVar2 = *(undefined4 *)(lVar10 + 0x28);
    uVar3 = *(undefined4 *)(lVar10 + 0x2c);
    *(undefined4 *)(lVar11 + 0x300) = *(undefined4 *)(lVar10 + 0x20);
    *(undefined4 *)(lVar11 + 0x304) = uVar1;
    *(undefined4 *)(lVar11 + 0x308) = uVar2;
    *(undefined4 *)(lVar11 + 0x30c) = uVar3;
    *(undefined (*) [16])(lVar11 + 0x310) = ZEXT816(0);
    *(undefined4 *)(lVar11 + 800) = 0;
    *(undefined (*) [16])(lVar11 + 0x330) = CONCAT412(fVar15,CONCAT48(fVar14,CONCAT44(fVar13,fVar12)))
            ;
    *(undefined (*) [16])(lVar11 + 0x340) = ZEXT816(0);
    uVar1 = *(undefined4 *)(lVar10 + 0x24);
    uVar2 = *(undefined4 *)(lVar10 + 0x28);
    uVar3 = *(undefined4 *)(lVar10 + 0x2c);
    *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
    *(undefined4 *)(lVar11 + 0x24) = uVar1;
    *(undefined4 *)(lVar11 + 0x28) = uVar2;
    *(undefined4 *)(lVar11 + 0x2c) = uVar3;
    *(undefined (*) [16])(lVar11 + 0x40) = CONCAT412(fVar15,CONCAT48(fVar14,CONCAT44(fVar13,fVar12)));
    *(undefined4 *)(lVar11 + 0x4a0) = 0;
    local_res8 = (ulonglong)CONCAT14((*(byte *)(param_2 + 8) & 8) != 0,2);
    FUN_1403f4900(DAT_140c65898,0x720,&local_res8);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    lVar10 = param_1[1];
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(lVar10 + 0x2ac) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(lVar10 + 0x2d4) = uVar1;
    *(undefined4 *)(lVar10 + 0x2d8) = uVar4;
    *(undefined4 *)(lVar10 + 0x2dc) = uVar3;
    *(undefined4 *)(lVar10 + 0x2e0) = uVar2;
    lVar10 = *param_1;
    lVar11 = param_1[1];
    *(undefined4 *)(lVar11 + 0x350) = 0;
    uVar1 = *(undefined4 *)(lVar10 + 0x24);
    uVar2 = *(undefined4 *)(lVar10 + 0x28);
    uVar3 = *(undefined4 *)(lVar10 + 0x2c);
    *(undefined4 *)(lVar11 + 0x360) = *(undefined4 *)(lVar10 + 0x20);
    *(undefined4 *)(lVar11 + 0x364) = uVar1;
    *(undefined4 *)(lVar11 + 0x368) = uVar2;
    *(undefined4 *)(lVar11 + 0x36c) = uVar3;
    *(undefined (*) [16])(lVar11 + 0x370) = CONCAT412(uVar19,CONCAT48(uVar18,CONCAT44(uVar17,uVar16)))
            ;
    lVar10 = *param_1;
    fVar12 = *(float *)(lVar10 + 0x20);
    fVar13 = *(float *)(lVar10 + 0x24);
    fVar14 = *(float *)(lVar10 + 0x28);
    fVar15 = *(float *)(lVar10 + 0x2c);
    fVar6 = *(float *)(lVar10 + 0xc0);
    fVar7 = *(float *)(lVar10 + 0xc4);
    fVar8 = *(float *)(lVar10 + 200);
    fVar9 = *(float *)(lVar10 + 0xcc);
    lVar10 = param_1[1];
    if (*(int *)(lVar10 + 0x2b0) == 0) {
        *(undefined4 *)(lVar10 + 0x380) = 0;
        *(undefined (*) [16])(lVar10 + 0x390) =
                CONCAT412(fVar15 - fVar9,CONCAT48(fVar14 - fVar8,CONCAT44(fVar13 - fVar7,fVar12 - fVar6)));
        *(undefined (*) [16])(lVar10 + 0x3a0) =
                CONCAT412(uVar19,CONCAT48(uVar18,CONCAT44(uVar17,uVar16)));
    }
    *(undefined4 *)(DAT_140c65898 + 0x79a0) = 1;
    return 0;
}



undefined4 FUN_14062cf20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar6;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined local_res8 [8];
    undefined8 local_res10;
    undefined auVar7 [16];
    undefined auVar8 [16];

    lVar5 = DAT_140c65898;
    lVar2 = param_1[1];
    if (lVar2 == 0) {
        return 1;
    }
    if (*(int *)(lVar2 + 0x2d4) != 0) {
        FUN_1405d31f0(lVar2,*param_1 + 0x20,*param_1 + 0x40);
        return 0;
    }
    auVar8 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar7 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    puVar1 = (undefined4 *)(DAT_140c65898 + 0x7478);
    *(undefined4 *)(DAT_140c65898 + 0x7400) = 3;
    *(undefined4 *)(lVar5 + 0x7474) = *puVar1;
    (***(code ***)(lVar5 + 0x7408))(lVar5 + 0x7408);
    (**(code **)(*(longlong *)(lVar5 + 0x7408) + 8))(lVar5 + 0x7408,local_res8);
    fVar6 = 0.0;
    FUN_1400f9c30(lVar5 + 0x7408);
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
    }
    lVar2 = DAT_140c65898;
    param_1[1] = 0;
    local_res10 = 3;
    FUN_1403f4900(lVar2,0x720,&local_res10,param_4,auVar7,auVar8);
    FUN_1405cc9a0(*(undefined8 *)(DAT_140c65898 + 0x7198));
    lVar2 = DAT_140c65898;
    *(undefined4 *)(DAT_140c65898 + 0x79a0) = 0;
    uVar4 = DAT_140c636a8;
    if (*(int *)(lVar2 + 0x7450) != 0) {
        if (*(int *)(lVar2 + 0x747c) < 1) {
            if ((fVar6 != *(float *)(lVar2 + 0x7440)) || (*(float *)(lVar2 + 0x7444) != 0.0)) {
                *(undefined8 *)(lVar2 + 0x7440) = 0;
                *(undefined4 *)(lVar2 + 0x7438) = 0;
                *(undefined4 *)(lVar2 + 0x7430) = uVar4;
            }
        }
        else {
            FUN_1400c3230(lVar2 + 0x7428);
        }
        *(undefined4 *)(lVar2 + 0x7448) = 1;
        *(undefined8 *)(lVar2 + 0x744c) = 0x3f800000;
    }
    return 0;
}



void FUN_14062d0f0(undefined8 param_1,undefined8 param_2,float param_3,longlong *param_4)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 in_EAX;
    uint uVar5;
    int iVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;

    uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
    lVar1 = *param_4;
    fVar9 = ((float)param_2 + 3.141593) * 0.1591549;
    iVar6 = (int)fVar9;
    fVar8 = fVar9;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar9)) {
        uVar5 = movmskps(in_EAX,CONCAT88(SUB168(CONCAT412(uVar7,CONCAT48(uVar7,param_2)) >> 0x40,0),
                                         CONCAT44(fVar9,fVar9)) & (undefined  [16])0xffffffffffffffff);
        fVar8 = (float)(iVar6 - (uVar5 & 1));
    }
    *(undefined8 *)(lVar1 + 0x220) = 0;
    if (1.570796 <= param_3) {
        param_3 = 1.570796;
    }
    fVar9 = -1.570796;
    if (-1.570796 <= param_3) {
        fVar9 = param_3;
    }
    *(float *)(lVar1 + 0x34) = (fVar9 - fVar8) * 6.283185 - 3.141593;
    *(float *)(lVar1 + 0x38) = fVar9;
    lVar1 = param_4[1];
    if ((lVar1 != 0) && (lVar2 = *param_4, *(int *)(lVar1 + 0x2b0) != 0)) {
        uVar7 = *(undefined4 *)(lVar2 + 0x24);
        uVar3 = *(undefined4 *)(lVar2 + 0x28);
        uVar4 = *(undefined4 *)(lVar2 + 0x2c);
        *(undefined4 *)(lVar1 + 0x3c0) = *(undefined4 *)(lVar2 + 0x20);
        *(undefined4 *)(lVar1 + 0x3c4) = uVar7;
        *(undefined4 *)(lVar1 + 0x3c8) = uVar3;
        *(undefined4 *)(lVar1 + 0x3cc) = uVar4;
        uVar7 = *(undefined4 *)(lVar2 + 0x44);
        uVar3 = *(undefined4 *)(lVar2 + 0x48);
        uVar4 = *(undefined4 *)(lVar2 + 0x4c);
        *(undefined4 *)(lVar1 + 0x3f0) = *(undefined4 *)(lVar2 + 0x40);
        *(undefined4 *)(lVar1 + 0x3f4) = uVar7;
        *(undefined4 *)(lVar1 + 0x3f8) = uVar3;
        *(undefined4 *)(lVar1 + 0x3fc) = uVar4;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_14062d1c0(longlong *param_1)

{
    longlong lVar1;
    code *pcVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;

    pcVar2 = DAT_140c63838;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if (pcVar2 == (code *)0x0) {
        iVar3 = 0;
        if (_DAT_140c646d4 == 0) {
            iVar3 = FUN_140247ba0();
            if (iVar3 < 0) {
                iVar3 = 0;
            }
            else {
                iVar3 = (**(code **)(*DAT_140c63c58 + 0x28))();
            }
        }
    }
    else {
        iVar3 = (*pcVar2)(&PTR_u_UnitRace_140a6df18,DAT_140c63858);
    }
    uVar5 = (ulonglong)(iVar3 + 10);
    if (uVar5 <= (ulonglong)param_1[1] && param_1[1] != uVar5) {
        param_1[1] = uVar5;
    }
    lVar4 = FUN_14018dbc0(*param_1,uVar5,0x28);
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0x28);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar4;
    }
    if (uVar5 <= (ulonglong)param_1[3] && param_1[3] != uVar5) {
        param_1[3] = uVar5;
    }
    lVar4 = FUN_14018dbc0(param_1[2],uVar5,8);
    if (param_1[2] != lVar4) {
        FUN_1407db590(lVar4,param_1[2],param_1[3] << 3);
        lVar1 = param_1[2];
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        param_1[2] = lVar4;
    }
    param_1[6] = 0;
    param_1[4] = 0;
    return param_1;
}



void FUN_14062d2f0(longlong *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = 0;
    for (lVar4 = param_1[1]; lVar4 != 0; lVar4 = lVar4 + -1) {
        lVar1 = *param_1;
        plVar2 = *(longlong **)(lVar1 + 0x20 + lVar3);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
            *(undefined8 *)(lVar1 + 0x20 + lVar3) = 0;
        }
        lVar3 = lVar3 + 0x28;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    lVar4 = param_1[2];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = *param_1;
    if (lVar4 != 0) {
        // WARNING: Could not recover jumptable at 0x00014062d395. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        return;
    }
    return;
}



void FUN_14062d3f0(longlong *param_1,longlong param_2)

{
    int *piVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong local_res10 [3];
    ulonglong local_38;
    undefined4 local_30;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 local_20;
    undefined4 uStack28;
    undefined8 local_18;

    if ((((param_2 != 0) && (*(int *)(param_2 + 0x2ac) != 0)) && (*(int *)(param_2 + 0x250) == 0)) &&
        (((*(int *)(param_2 + 0x130) != 0 ||
           (((lVar4 = *(longlong *)(DAT_140c65898 + 0x78), lVar4 != 0 &&
                                                           ((*(int *)(param_2 + 0x124) == *(int *)(lVar4 + 8) ||
                                                             ((*(longlong *)(param_2 + 0x128) != 0 &&
                                                               (*(longlong *)(&DAT_000018a0 + lVar4) == *(longlong *)(param_2 + 0x128))))))) ||
             (*(int *)(param_2 + 0x108) == *(int *)((longlong)param_1 + 0x2c))))) ||
          (*(int *)(param_2 + 0x108) == *(int *)(param_1 + 5))))) {
        local_30 = 0;
        uStack44 = 0;
        local_28 = 0;
        uStack36 = 0;
        local_20 = 0;
        uStack28 = 0;
        local_18 = 0;
        local_38 = 0;
        if (*(longlong *)(param_2 + 0x18) != 0) {
            local_38 = FUN_140232a00();
        }
        if ((local_38 != 0) ||
            ((*(longlong *)(param_2 + 0xd0) != 0 && (local_38 = FUN_140232a00(), local_38 != 0)))) {
            uVar2 = param_1[1];
            param_1[6] = param_1[6] + 1;
            uVar5 = 0;
            if (uVar2 != 0) {
                lVar4 = *param_1;
                uVar5 = 0;
                uVar7 = uVar2;
                if (uVar2 != 0) {
                    do {
                        uVar6 = (uVar7 - uVar5 >> 1) + uVar5;
                        uVar3 = *(ulonglong *)(lVar4 + uVar6 * 0x28);
                        if (uVar3 <= local_38) {
                            uVar5 = uVar6;
                            if (local_38 <= uVar3) break;
                            uVar5 = uVar6 + 1;
                            uVar6 = uVar7;
                        }
                        uVar7 = uVar6;
                    } while (uVar5 < uVar6);
                }
                if ((uVar5 < uVar2) && (local_38 == *(ulonglong *)(lVar4 + uVar5 * 0x28))) {
                    piVar1 = (int *)(lVar4 + 0xc + uVar5 * 0x28);
                    *piVar1 = *piVar1 + 1;
                    return;
                }
            }
            lVar4 = FUN_1402347c0(*(undefined4 *)(local_38 + 0xc));
            if (lVar4 == 0) {
                local_30 = 0;
            }
            else {
                local_30 = *(undefined4 *)(lVar4 + 4);
            }
            local_res10[0] = param_1[1];
            uStack44 = 1;
            local_28 = 0;
            local_18 = 0;
            uStack36 = 0;
            local_20 = 0;
            uStack28 = 0;
            FUN_140033260(param_1 + 2,local_res10);
            FUN_14062da90(param_1,uVar5,&local_38);
        }
    }
    return;
}



void FUN_14062d5c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    undefined *puVar11;
    ulonglong uVar12;
    undefined4 uVar13;
    float in_XMM3_Da;
    float fVar14;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    *(undefined4 *)(param_1 + 5) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x2c) = param_3;
    if ((param_1[4] == 0) &&
        (iVar9 = (**(code **)(*DAT_140c65848 + 0x28))
                (DAT_140c65848,param_1 + 4,0,param_4,
                 CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))))
                , iVar9 < 0)) {
        param_1[6] = 0;
        return;
    }
    FUN_14001fec0(&LAB_14062d3a0,param_1[2],param_1[3],param_1);
    uVar3 = param_1[3];
    iVar9 = DAT_140c4eb00;
    if (*DAT_140c63750 < DAT_140c4eb00) {
        iVar9 = *DAT_140c63750;
    }
    uVar12 = 0;
    uVar1 = *(uint *)(&DAT_140c4eb10 + (longlong)iVar9 * 4);
    uVar4 = param_1[6];
    if (uVar3 != 0) {
        do {
            lVar5 = *param_1;
            lVar6 = *(longlong *)(param_1[2] + uVar12 * 8);
            iVar9 = DAT_140c4eb90;
            if (*DAT_140c63750 < DAT_140c4eb90) {
                iVar9 = *DAT_140c63750;
            }
            if ((uVar12 < *(uint *)(&DAT_140c4eba0 + (longlong)iVar9 * 4)) && (uVar1 <= uVar4)) {
                uVar2 = *(uint *)(lVar5 + 0xc + lVar6 * 0x28);
                *(undefined4 *)(lVar5 + 0xc + lVar6 * 0x28) = 0;
                fVar14 = (float)(ulonglong)uVar2;
                if (*(int *)(*(longlong *)(lVar5 + lVar6 * 0x28) + 4) == 0) {
                    *(float *)(lVar5 + 0x10 + lVar6 * 0x28) = fVar14;
                    *(float *)(lVar5 + 0x18 + lVar6 * 0x28) = fVar14;
                    LAB_14062d749:
                    *(float *)(lVar5 + 0x14 + lVar6 * 0x28) = fVar14;
                }
                else {
                    if (*(longlong *)(lVar5 + 0x20 + lVar6 * 0x28) == 0) {
                        iVar9 = (**(code **)(*(longlong *)param_1[4] + 0x20))();
                        if (iVar9 < 0) goto LAB_14062da46;
                        *(float *)(lVar5 + 0x10 + lVar6 * 0x28) = fVar14;
                        *(float *)(lVar5 + 0x18 + lVar6 * 0x28) = fVar14;
                        goto LAB_14062d749;
                    }
                    if (fVar14 != *(float *)(lVar5 + 0x14 + lVar6 * 0x28)) {
                        *(undefined4 *)(lVar5 + 0x1c + lVar6 * 0x28) = 0;
                        *(undefined4 *)(lVar5 + 0x18 + lVar6 * 0x28) =
                                *(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x28);
                        goto LAB_14062d749;
                    }
                }
                piVar8 = DAT_140c63750;
                fVar14 = in_XMM3_Da + *(float *)(lVar5 + 0x1c + lVar6 * 0x28);
                *(float *)(lVar5 + 0x1c + lVar6 * 0x28) = fVar14;
                iVar9 = *piVar8;
                iVar10 = DAT_140c4ec20;
                if (iVar9 < DAT_140c4ec20) {
                    iVar10 = iVar9;
                }
                if (*(float *)(&DAT_140c4ec30 + (longlong)iVar10 * 4) <= fVar14) {
                    *(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x28) =
                            *(undefined4 *)(lVar5 + 0x14 + lVar6 * 0x28);
                }
                else {
                    iVar10 = DAT_140c4ec20;
                    if (iVar9 < DAT_140c4ec20) {
                        iVar10 = iVar9;
                    }
                    *(float *)(lVar5 + 0x10 + lVar6 * 0x28) =
                            (fVar14 / *(float *)(&DAT_140c4ec30 + (longlong)iVar10 * 4)) *
                            (*(float *)(lVar5 + 0x14 + lVar6 * 0x28) - *(float *)(lVar5 + 0x18 + lVar6 * 0x28)) +
                            *(float *)(lVar5 + 0x18 + lVar6 * 0x28);
                }
                if (uVar12 == 0) {
                    if ((DAT_140dc3e68 & 1) == 0) {
                        DAT_140dc3e68 = DAT_140dc3e68 | 1;
                        FUN_1401ad620(&DAT_140dc3e70);
                    }
                    uVar13 = FUN_1401ada40(&DAT_140dc3e70);
                    if ((DAT_140dc3e68 & 2) == 0) {
                        DAT_140dc3e68 = DAT_140dc3e68 | 2;
                        uVar13 = FUN_1401ad510(&DAT_140dc3f90);
                    }
                    puVar11 = &DAT_140dc3f90;
                    LAB_14062d9f2:
                    FUN_1401ad8f0(uVar13,*(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x28),puVar11);
                }
                else {
                    if (uVar12 == 1) {
                        if ((DAT_140dc3e68 & 4) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 4;
                            FUN_1401ad620(&DAT_140dc40b0);
                        }
                        uVar13 = FUN_1401ada40(&DAT_140dc40b0);
                        if ((DAT_140dc3e68 & 8) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 8;
                            uVar13 = FUN_1401ad510(&DAT_140dc41d0);
                        }
                        puVar11 = &DAT_140dc41d0;
                        goto LAB_14062d9f2;
                    }
                    if (uVar12 == 2) {
                        if ((DAT_140dc3e68 & 0x10) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 0x10;
                            FUN_1401ad620(&DAT_140dc42f0);
                        }
                        uVar13 = FUN_1401ada40(&DAT_140dc42f0);
                        if ((DAT_140dc3e68 & 0x20) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 0x20;
                            uVar13 = FUN_1401ad510(&DAT_140dc4410);
                        }
                        puVar11 = &DAT_140dc4410;
                        goto LAB_14062d9f2;
                    }
                    if (uVar12 == 3) {
                        if ((DAT_140dc3e68 & 0x40) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 0x40;
                            FUN_1401ad620(&DAT_140dc4530);
                        }
                        uVar13 = FUN_1401ada40(&DAT_140dc4530);
                        if (-1 < (char)DAT_140dc3e68) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 0x80;
                            uVar13 = FUN_1401ad510(&DAT_140dc4650);
                        }
                        puVar11 = &DAT_140dc4650;
                        goto LAB_14062d9f2;
                    }
                    if (uVar12 == 4) {
                        if ((DAT_140dc3e68 >> 8 & 1) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 0x100;
                            FUN_1401ad620(&DAT_140dc4770);
                        }
                        uVar13 = FUN_1401ada40(&DAT_140dc4770);
                        if ((DAT_140dc3e68 >> 9 & 1) == 0) {
                            DAT_140dc3e68 = DAT_140dc3e68 | 0x200;
                            uVar13 = FUN_1401ad510(&DAT_140dc4890);
                        }
                        puVar11 = &DAT_140dc4890;
                        goto LAB_14062d9f2;
                    }
                }
                plVar7 = *(longlong **)(lVar5 + 0x20 + lVar6 * 0x28);
                if (plVar7 != (longlong *)0x0) {
                    (**(code **)(*plVar7 + 0x40))();
                }
                (**(code **)(*(longlong *)param_1[4] + 0x50))();
            }
            else {
                plVar7 = *(longlong **)(lVar5 + 0x20 + lVar6 * 0x28);
                if (plVar7 != (longlong *)0x0) {
                    (**(code **)(*plVar7 + 8))();
                    *(undefined8 *)(lVar5 + 0x20 + lVar6 * 0x28) = 0;
                }
                *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x28) = 0;
                *(undefined8 *)(lVar5 + 0x18 + lVar6 * 0x28) = 0;
                *(undefined4 *)(lVar5 + 0xc + lVar6 * 0x28) = 0;
            }
            LAB_14062da46:
            uVar12 = uVar12 + 1;
        } while (uVar12 < uVar3);
    }
    param_1[6] = 0;
    return;
}



void FUN_14062da90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar2 + 1,0x28);
    lVar1 = param_2 * 0x28;
    FUN_1407db590(lVar1 + 0x28 + lVar3,*param_1 + lVar1,(param_1[1] - param_2) * 0x28);
    *(undefined8 *)(lVar1 + lVar3) = *param_3;
    *(undefined8 *)(lVar1 + 8 + lVar3) = param_3[1];
    *(undefined8 *)(lVar1 + 0x10 + lVar3) = param_3[2];
    *(undefined8 *)(lVar1 + 0x18 + lVar3) = param_3[3];
    *(undefined8 *)(lVar1 + 0x20 + lVar3) = param_3[4];
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,lVar1);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar2 + 1;
    return;
}



void FUN_14062db70(longlong *param_1)

{
    longlong lVar1;

    FUN_14062e340();
    lVar1 = param_1[8];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[6];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[4];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x00014062dbe3. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



undefined8 FUN_14062dbf0(longlong param_1,longlong param_2)

{
    float fVar1;
    float fVar2;

    fVar1 = *(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x10);
    fVar2 = *(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x14);
    fVar2 = fVar2 * fVar2;
    return CONCAT44(fVar2,fVar1 * fVar1 + fVar2 + 0.0);
}



uint FUN_14062dc20(int *param_1,int *param_2,longlong param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    if (*param_1 != *param_2) {
        return *param_1 - *param_2;
    }
    fVar3 = *(float *)(param_3 + 0x20) - (float)param_2[8];
    fVar4 = *(float *)(param_3 + 0x24) - (float)param_2[9];
    fVar1 = *(float *)(param_3 + 0x20) - (float)param_1[8];
    fVar2 = *(float *)(param_3 + 0x24) - (float)param_1[9];
    fVar1 = (fVar1 * fVar1 + fVar2 * fVar2 + 0.0) - (fVar3 * fVar3 + fVar4 * fVar4 + 0.0);
    if (fVar1 < 0.0) {
        return 0xffffffff;
    }
    return (uint)(0.0 < fVar1);
}



void FUN_14062dc90(longlong param_1,ulonglong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;

    uVar1 = *(ulonglong *)(param_1 + 0x48);
    if (param_2 < uVar1) {
        lVar5 = param_2 * 0x18;
        lVar4 = uVar1 - param_2;
        do {
            lVar2 = *(longlong *)(param_1 + 0x40);
            plVar3 = *(longlong **)(lVar2 + 0x10 + lVar5);
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 8))();
                *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
            }
            lVar2 = *(longlong *)(param_1 + 0x40);
            plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 8))();
                *(undefined8 *)(lVar2 + 8 + lVar5) = 0;
            }
            lVar5 = lVar5 + 0x18;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    if (*(ulonglong *)(param_1 + 0x48) < param_2 || *(ulonglong *)(param_1 + 0x48) == param_2) {
        lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x40),param_2,0x18);
        if (*(longlong *)(param_1 + 0x40) != lVar4) {
            FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48) * 0x18);
            lVar5 = *(longlong *)(param_1 + 0x40);
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *(longlong *)(param_1 + 0x40) = lVar4;
        }
    }
    *(ulonglong *)(param_1 + 0x48) = param_2;
    if (uVar1 < param_2) {
        lVar5 = param_2 - uVar1;
        lVar4 = uVar1 * 0x18;
        do {
            *(undefined4 *)(lVar4 + *(longlong *)(param_1 + 0x40)) = 0;
            *(undefined8 *)(lVar4 + 8 + *(longlong *)(param_1 + 0x40)) = 0;
            *(undefined8 *)(lVar4 + 0x10 + *(longlong *)(param_1 + 0x40)) = 0;
            lVar5 = lVar5 + -1;
            lVar4 = lVar4 + 0x18;
        } while (lVar5 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14062ddc0(longlong *param_1)

{
    longlong *plVar1;
    int **ppiVar2;
    int iVar3;
    ulonglong uVar4;
    int **ppiVar5;
    longlong *plVar6;
    int *piVar7;
    longlong lVar8;
    int iVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 *puVar12;
    ulonglong uVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong uVar16;
    undefined8 *puVar17;
    longlong **pplVar18;
    longlong lVar19;
    ulonglong local_res18;

    uVar4 = param_1[9];
    if (uVar4 == 0) {
        FUN_14062e3e0(param_1,0);
        return;
    }
    plVar6 = param_1 + 2;
    FUN_14004eed0(plVar6);
    uVar13 = param_1[3];
    uVar16 = 0;
    if (uVar13 != 0) {
        lVar19 = 0;
        do {
            uVar16 = uVar16 + 1;
            lVar15 = *param_1 + lVar19;
            lVar19 = lVar19 + 0x30;
            *(longlong *)(*plVar6 + -8 + uVar16 * 8) = lVar15;
        } while (uVar16 < uVar13);
    }
    lVar15 = param_1[3];
    lVar19 = lVar15 + 1;
    lVar10 = FUN_14018db00(*plVar6,lVar19,8);
    *(undefined8 *)(lVar10 + lVar15 * 8) = 0;
    if (*plVar6 != lVar10) {
        FUN_1407db590(lVar10,*plVar6,param_1[3] << 3);
        lVar15 = *plVar6;
        if (lVar15 != 0) {
            (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
        }
        *plVar6 = lVar10;
    }
    param_1[3] = lVar19;
    FUN_14062e490();
    plVar1 = param_1 + 4;
    FUN_1400523e0();
    if (uVar13 != 0) {
        lVar15 = param_1[5];
        lVar10 = *plVar6;
        lVar19 = lVar15 + 1;
        lVar11 = FUN_14018db00(*plVar1,lVar19,8);
        *(longlong *)(lVar11 + lVar15 * 8) = lVar10;
        if (*plVar1 != lVar11) {
            FUN_1407db590(lVar11,*plVar1,param_1[5] << 3);
            if (*plVar1 != 0) {
                (**(code **)(*(longlong *)(*plVar1 + -0x10) + 8))();
            }
            *plVar1 = lVar11;
        }
        param_1[5] = lVar19;
    }
    uVar16 = 1;
    if (1 < uVar13) {
        do {
            lVar19 = *plVar6;
            if (**(int **)(lVar19 + -8 + uVar16 * 8) != **(int **)(lVar19 + uVar16 * 8)) {
                lVar10 = param_1[5];
                lVar15 = lVar10 + 1;
                lVar11 = FUN_14018db00(*plVar1,lVar15,8);
                *(ulonglong *)(lVar11 + lVar10 * 8) = lVar19 + uVar16 * 8;
                if (*plVar1 != lVar11) {
                    FUN_1407db590(lVar11,*plVar1,param_1[5] << 3);
                    if (*plVar1 != 0) {
                        (**(code **)(*(longlong *)(*plVar1 + -0x10) + 8))();
                    }
                    *plVar1 = lVar11;
                }
                param_1[5] = lVar15;
            }
            uVar16 = uVar16 + 1;
        } while (uVar16 < uVar13);
    }
    FUN_14062e680();
    lVar19 = param_1[9];
    if (lVar19 == 0) {
        puVar17 = (undefined8 *)0x0;
    }
    else {
        puVar12 = (undefined8 *)FUN_14018b280(lVar19 * 0x18 + 0x10,0);
        if (puVar12 == (undefined8 *)0x0) {
            puVar17 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar12[1] = lVar19;
            puVar17 = puVar12 + 2;
            *puVar12 = &PTR_LAB_140b55060;
        }
    }
    lVar15 = 0;
    FUN_1407db590(puVar17,param_1[8],lVar19 * 0x18);
    local_res18 = 0;
    if (uVar4 != 0) {
        do {
            if (local_res18 < (ulonglong)param_1[5]) {
                ppiVar5 = *(int ***)(param_1[4] + local_res18 * 8);
                iVar3 = **ppiVar5;
                uVar13 = 0;
                puVar12 = puVar17;
                do {
                    if (*(int *)puVar12 == iVar3) break;
                    uVar13 = uVar13 + 1;
                    puVar12 = puVar12 + 3;
                } while (uVar13 < uVar4);
                if (uVar13 == uVar4) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c646c8 != 0) || (iVar9 = FUN_140233020(), iVar9 < 0)) goto LAB_14062e276;
                        lVar10 = (**(code **)(*DAT_140c638a0 + 0x18))(DAT_140c638a0,iVar3);
                    }
                    else {
                        lVar10 = (*DAT_140c63840)(&PTR_u_SoundDirectionalAmbience_140a6ce08,iVar3,DAT_140c63858)
                                ;
                    }
                    if ((lVar10 == 0) ||
                        (iVar9 = (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,param_1[8] + 8 + lVar15,0),
                                iVar9 < 0)) goto LAB_14062e276;
                    *(int *)(lVar15 + param_1[8]) = iVar3;
                    plVar6 = *(longlong **)(lVar15 + 8 + param_1[8]);
                    (**(code **)(*plVar6 + 0x20))
                            (plVar6,param_1[8] + 0x10 + lVar15,*(undefined4 *)(lVar10 + 4),
                             *(undefined4 *)(lVar10 + 8));
                    plVar6 = *(longlong **)(lVar15 + 0x10 + param_1[8]);
                    if (plVar6 != (longlong *)0x0) {
                        (**(code **)(*plVar6 + 0x40))();
                    }
                }
                else {
                    lVar10 = param_1[8];
                    *(undefined8 *)(lVar10 + lVar15) = puVar17[uVar13 * 3];
                    *(undefined8 *)(lVar10 + 8 + lVar15) = puVar17[uVar13 * 3 + 1];
                    *(undefined8 *)(lVar10 + 0x10 + lVar15) = puVar17[uVar13 * 3 + 2];
                    (**(code **)**(undefined8 **)(lVar15 + 0x10 + param_1[8]))();
                    (**(code **)**(undefined8 **)(lVar15 + 8 + param_1[8]))();
                }
                lVar10 = 0;
                param_1[7] = 0;
                piVar7 = *ppiVar5;
                ppiVar2 = ppiVar5;
                while ((piVar7 != (int *)0x0 && (piVar7 = *ppiVar2, *piVar7 == iVar3))) {
                    lVar11 = param_1[7];
                    lVar14 = FUN_14018db00(param_1[6],lVar11 + 1);
                    *(int **)(lVar14 + lVar11 * 8) = piVar7 + 4;
                    if (param_1[6] != lVar14) {
                        FUN_1407db590(lVar14);
                        lVar8 = param_1[6];
                        if (lVar8 != 0) {
                            (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
                        }
                        param_1[6] = lVar14;
                    }
                    lVar10 = lVar10 + 1;
                    param_1[7] = lVar11 + 1;
                    piVar7 = ppiVar5[lVar10];
                    ppiVar2 = ppiVar5 + lVar10;
                }
                lVar10 = **(longlong **)(lVar15 + 8 + param_1[8]);
                if (param_1[7] == 1) {
                    (**(code **)(lVar10 + 0x60))();
                }
                else {
                    (**(code **)(lVar10 + 0x70))();
                }
            }
            else {
                LAB_14062e276:
                *(undefined4 *)(lVar15 + param_1[8]) = 0;
                *(undefined8 *)(lVar15 + 0x10 + param_1[8]) = 0;
                *(undefined8 *)(lVar15 + 8 + param_1[8]) = 0;
            }
            local_res18 = local_res18 + 1;
            lVar15 = lVar15 + 0x18;
        } while (local_res18 < uVar4);
    }
    if (lVar19 != 0) {
        pplVar18 = (longlong **)(puVar17 + 1);
        do {
            if (pplVar18[1] != (longlong *)0x0) {
                (**(code **)(*pplVar18[1] + 8))();
                pplVar18[1] = (longlong *)0x0;
            }
            if (*pplVar18 != (longlong *)0x0) {
                (**(code **)(**pplVar18 + 8))();
                *pplVar18 = (longlong *)0x0;
            }
            pplVar18 = pplVar18 + 3;
            lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
    }
    FUN_14062e3e0(param_1,0);
    if (puVar17 != (undefined8 *)0x0) {
        (**(code **)(puVar17[-2] + 8))(puVar17 + -2);
    }
    return;
}



void FUN_14062e340(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = 0;
    for (lVar4 = *(longlong *)(param_1 + 0x48); lVar4 != 0; lVar4 = lVar4 + -1) {
        lVar1 = *(longlong *)(param_1 + 0x40);
        plVar2 = *(longlong **)(lVar1 + 0x10 + lVar3);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
            *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
        }
        lVar1 = *(longlong *)(param_1 + 0x40);
        plVar2 = *(longlong **)(lVar1 + 8 + lVar3);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
            *(undefined8 *)(lVar1 + 8 + lVar3) = 0;
        }
        lVar3 = lVar3 + 0x18;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_14062e3e0(param_1,0);
    return;
}



void FUN_14062e3e0(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    ulonglong uVar8;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        puVar5 = (undefined4 *)FUN_14018db00(*param_1);
        if ((undefined4 *)*param_1 != puVar5) {
            uVar8 = 0;
            if (param_1[1] != 0) {
                puVar6 = puVar5;
                do {
                    if (puVar6 != (undefined4 *)0x0) {
                        puVar7 = (undefined4 *)((longlong)puVar6 + (*param_1 - (longlong)puVar5));
                        *puVar6 = *puVar7;
                        uVar2 = puVar7[5];
                        uVar3 = puVar7[6];
                        uVar4 = puVar7[7];
                        puVar6[4] = puVar7[4];
                        puVar6[5] = uVar2;
                        puVar6[6] = uVar3;
                        puVar6[7] = uVar4;
                        uVar2 = puVar7[9];
                        uVar3 = puVar7[10];
                        uVar4 = puVar7[0xb];
                        puVar6[8] = puVar7[8];
                        puVar6[9] = uVar2;
                        puVar6[10] = uVar3;
                        puVar6[0xb] = uVar4;
                    }
                    uVar8 = uVar8 + 1;
                    puVar6 = puVar6 + 0xc;
                } while (uVar8 < (ulonglong)param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = (longlong)puVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_14062e490(undefined8 param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

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
        iVar3 = FUN_14062dc20(*param_2,param_2[1],param_4);
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
                        iVar3 = FUN_14062dc20(uVar10,uVar8,param_4);
                        if ((0 < iVar3) || ((iVar3 == 0 && (uVar8 < uVar10)))) {
                            uVar6 = uVar7;
                            uVar8 = uVar10;
                        }
                    }
                    iVar3 = FUN_14062dc20(uVar8,uVar2,param_4);
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
            param_2[param_3] = *param_2;
            uVar10 = 0;
            if (1 < param_3) {
                do {
                    uVar9 = param_2[uVar4];
                    uVar2 = uVar4 + 1;
                    uVar7 = uVar4;
                    if (uVar2 < param_3) {
                        uVar4 = param_2[uVar2];
                        iVar3 = FUN_14062dc20(uVar4,uVar9,param_4);
                        if ((0 < iVar3) || ((iVar3 == 0 && (uVar9 < uVar4)))) {
                            uVar7 = uVar2;
                            uVar9 = uVar4;
                        }
                    }
                    iVar3 = FUN_14062dc20(uVar9,uVar5,param_4);
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



void FUN_14062e680(undefined8 param_1,longlong **param_2,ulonglong param_3,undefined8 param_4)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong *plVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong *plVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    if (param_3 == 2) {
        plVar3 = param_2[1];
        fVar10 = (float)FUN_14062dbf0(param_4,**param_2 + 0x10);
        fVar11 = (float)FUN_14062dbf0(param_4,*plVar3 + 0x10);
        if (0.0 < fVar10 - fVar11) {
            plVar3 = *param_2;
            *param_2 = param_2[1];
            param_2[1] = plVar3;
            return;
        }
    }
    else if (1 < param_3) {
        fVar10 = 0.0;
        uVar5 = param_3 >> 1;
        if (uVar5 != 0) {
            uVar6 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                plVar3 = param_2[uVar5 - 1];
                uVar5 = uVar5 - 1;
                uVar6 = uVar6 - 2;
                uVar8 = uVar5;
                uVar2 = uVar6;
                while (uVar2 < param_3) {
                    plVar9 = param_2[uVar2];
                    uVar1 = uVar2 + 1;
                    uVar7 = uVar2;
                    if (uVar1 < param_3) {
                        plVar4 = param_2[uVar1];
                        fVar11 = (float)FUN_14062dbf0(param_4,*plVar4 + 0x10);
                        fVar12 = (float)FUN_14062dbf0(param_4,*plVar9 + 0x10);
                        if ((fVar10 <= fVar11 - fVar12) && ((fVar10 < fVar11 - fVar12 || (plVar9 < plVar4)))) {
                            uVar7 = uVar1;
                            plVar9 = plVar4;
                        }
                    }
                    fVar11 = (float)FUN_14062dbf0(param_4,*plVar9 + 0x10);
                    fVar12 = (float)FUN_14062dbf0(param_4,*plVar3 + 0x10);
                    if ((fVar11 - fVar12 < fVar10) || ((fVar11 - fVar12 <= fVar10 && (plVar9 <= plVar3))))
                        break;
                    param_2[uVar8] = plVar9;
                    uVar8 = uVar7;
                    uVar2 = uVar7 * 2 + 1;
                }
                param_2[uVar8] = plVar3;
            } while (uVar5 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            plVar3 = param_2[param_3];
            uVar5 = 1;
            param_2[param_3] = *param_2;
            uVar6 = 0;
            if (1 < param_3) {
                do {
                    plVar9 = param_2[uVar5];
                    uVar2 = uVar5 + 1;
                    uVar8 = uVar5;
                    if (uVar2 < param_3) {
                        plVar4 = param_2[uVar2];
                        fVar11 = (float)FUN_14062dbf0(param_4,*plVar4 + 0x10);
                        fVar12 = (float)FUN_14062dbf0(param_4,*plVar9 + 0x10);
                        if ((fVar10 <= fVar11 - fVar12) && ((fVar10 < fVar11 - fVar12 || (plVar9 < plVar4)))) {
                            uVar8 = uVar2;
                            plVar9 = plVar4;
                        }
                    }
                    fVar11 = (float)FUN_14062dbf0(param_4,*plVar9 + 0x10);
                    fVar12 = (float)FUN_14062dbf0(param_4,*plVar3 + 0x10);
                    if ((fVar11 - fVar12 < fVar10) || ((fVar11 - fVar12 <= fVar10 && (plVar9 <= plVar3))))
                        break;
                    param_2[uVar6] = plVar9;
                    uVar5 = uVar8 * 2 + 1;
                    uVar6 = uVar8;
                } while (uVar5 < param_3);
            }
            param_2[uVar6] = plVar3;
        }
    }
    return;
}



void FUN_14062ebe0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined4 uVar7;
    float fVar8;
    undefined4 in_XMM7_Da;
    float fVar9;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar10 [16];

    FUN_14018b900(DAT_140c65be0,0);
    FUN_14018b900(DAT_140c65bd8,0);
    FUN_14018b900(DAT_140c65bf0,0);
    FUN_14018b900(DAT_140c65be8,0);
    uVar6 = 0;
    DAT_140c65be0 = (undefined4 *)0x0;
    uVar4 = param_2 + 1U & 0xfffffffe;
    DAT_140c65bd8 = 0;
    DAT_140c65bf0 = 0;
    DAT_140c65be8 = 0;
    DAT_140c65bc8 = uVar4;
    if (param_2 != 0) {
        auVar10 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        uVar1 = SUB168(ZEXT816(4) * ZEXT416(uVar4),0);
        if (SUB168(ZEXT816(4) * ZEXT416(uVar4) >> 0x40,0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        fVar9 = 6.283185 / (float)(ulonglong)uVar4;
        DAT_140c65be0 =
                (undefined4 *)FUN_14018b280((float)(ulonglong)uVar4,uVar1,0,param_3,param_4,auVar10);
        uVar1 = SUB168(ZEXT816(4) * ZEXT416(DAT_140c65bc8),0);
        if (SUB168(ZEXT816(4) * ZEXT416(DAT_140c65bc8) >> 0x40,0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        DAT_140c65bd8 = FUN_14018b280(uVar1,0,param_3,param_4,auVar10);
        uVar4 = DAT_140c65bc8;
        if (DAT_140c65bc8 != 0) {
            lVar3 = DAT_140c65bd8 - (longlong)DAT_140c65be0;
            puVar2 = DAT_140c65be0;
            do {
                fVar8 = (float)uVar6 * fVar9;
                uVar7 = FUN_1408fe3d0(fVar8);
                *(undefined4 *)((longlong)puVar2 + lVar3) = uVar7;
                uVar7 = FUN_1408fc950(fVar8);
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
                *puVar2 = uVar7;
                puVar2 = puVar2 + 1;
            } while (uVar5 < uVar4);
        }
    }
    uVar5 = DAT_140c65bcc;
    if (DAT_140c65bcc < DAT_140c65c10) {
        uVar5 = DAT_140c65c10;
    }
    if (uVar5 < uVar4) {
        uVar5 = uVar4;
    }
    if (uVar5 != 0) {
        auVar10 = ZEXT816(0x10) * ZEXT816((ulonglong)uVar5);
        uVar1 = SUB168(auVar10,0);
        if (SUB168(auVar10 >> 0x40,0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        DAT_140c65bf0 = FUN_14018b280(uVar1,0);
        auVar10 = ZEXT816(0x10) * ZEXT816((ulonglong)uVar5);
        uVar1 = SUB168(auVar10,0);
        if (SUB168(auVar10 >> 0x40,0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        DAT_140c65be8 = FUN_14018b280(uVar1,0);
    }
    return;
}



void FUN_14062eda0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x88);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
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
        // WARNING: Could not recover jumptable at 0x00014062ee62. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



void FUN_14062ee70(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            FUN_14062eda0(*param_1 + uVar3);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x98;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014062eece. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_14062eee0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    undefined8 *puVar1;
    undefined (*pauVar2) [16];
    longlong lVar3;

    _DAT_140c7e4b0 = &PTR_LAB_140b5e6e8;
    _DAT_140c7e4b8 = *param_3;
    _DAT_140c7e4c0 = 1;
    _DAT_140c7e4c4 = *(undefined4 *)(param_3 + 1);
    _DAT_140c7e4c8 = 0;
    if (_DAT_140c7e4b8 != 0) {
        puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&DAT_140c7e4b8);
        *puVar1 = &DAT_140c7e4b0;
    }
    _DAT_140c7e558 = 0;
    _DAT_140c7e4b0 = &PTR_LAB_140b6fbf8;
    _DAT_140c7e560 = 0;
    _DAT_140c7e540 = _DAT_140c7e4a0;
    uRam0000000140c7e544 = uRam0000000140c7e4a4;
    uRam0000000140c7e548 = uRam0000000140c7e4a8;
    uRam0000000140c7e54c = uRam0000000140c7e4ac;
    _DAT_140c7e550 = &DAT_140c7e4a0;
    pauVar2 = (undefined (*) [16])&DAT_140c7e4d0;
    lVar3 = 5;
    do {
        *pauVar2 = CONCAT412(uRam0000000140c7e54c,
                             CONCAT48(uRam0000000140c7e548,CONCAT44(uRam0000000140c7e544,_DAT_140c7e540)
                             ));
        pauVar2 = pauVar2[1];
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return &DAT_140c7e4b0;
}



void FUN_14062f080(longlong param_1,int param_2,int param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    uint uVar4;
    float *pfVar5;
    longlong lVar6;
    float *pfVar7;
    ulonglong uVar8;
    float in_xmmTmp2_Dd;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    if (param_3 < param_2) {
        pfVar7 = (float *)(((longlong)param_3 + 2) * 0x10 + param_1);
        pfVar5 = (float *)(param_1 + ((longlong)param_2 + 2) * 0x10);
        local_18 = *pfVar5;
        fStack20 = pfVar5[1];
        fStack16 = pfVar5[2];
        fStack12 = pfVar5[3];
        uVar8 = (ulonglong)(param_3 + 1);
        if (uVar8 < 5) {
            lVar6 = 5 - uVar8;
            pfVar5 = (float *)((uVar8 + 2) * 0x10 + param_1);
            do {
                fVar1 = pfVar7[1];
                fVar2 = pfVar7[2];
                fVar3 = pfVar7[3];
                *pfVar5 = *pfVar7;
                pfVar5[1] = fVar1;
                pfVar5[2] = fVar2;
                pfVar5[3] = fVar3;
                lVar6 = lVar6 + -1;
                pfVar5 = pfVar5 + 4;
            } while (lVar6 != 0);
        }
        uVar4 = (2 << ((byte)param_3 & 0x1f)) - 1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & uVar4;
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
            uVar4 = movmskps(uVar4,CONCAT412(-(uint)(pfVar7[3] != in_xmmTmp2_Dd),
                                             CONCAT48(-(uint)(pfVar7[2] != fStack12),
                                                      CONCAT44(-(uint)(pfVar7[1] != fStack20),
                                                               -(uint)(*pfVar7 != local_18)))));
            if ((uVar4 & 7) != 0) {
                (**(code **)(param_1 + 0xb0))(&local_18);
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14062f1a0(void)

{
    DAT_140c7e598 = (undefined *)FUN_14018b280(0x28);
    _DAT_140c7e5a0 = 0;
    *DAT_140c7e598 = 0;
    *(undefined8 *)(DAT_140c7e598 + 8) = 0;
    *(undefined **)(DAT_140c7e598 + 0x10) = DAT_140c7e598;
    *(undefined **)(DAT_140c7e598 + 0x18) = DAT_140c7e598;
    DAT_140c7e570 = 0;
    DAT_140c7e578 = FUN_14018b280(0x28,0);
    DAT_140c7e580 = 0;
    _DAT_140c7e584 = 10;
    _DAT_140c7e588 = 6;
    return &DAT_140c7e570;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14062f230(undefined8 param_1,int param_2)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;

    lVar1 = DAT_140c7e578;
    uVar5 = (ulonglong)DAT_140c7e580;
    uVar3 = 0;
    if (DAT_140c7e580 != 0) {
        do {
            if (param_2 == *(int *)(DAT_140c7e578 + uVar3 * 4)) {
                return 1;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < DAT_140c7e580);
    }
    if (_DAT_140c7e584 <= DAT_140c7e580) {
        _DAT_140c7e584 = DAT_140c7e580 + 10;
        uVar4 = SUB168(ZEXT816(4) * ZEXT416(_DAT_140c7e584),0);
        if (SUB168(ZEXT816(4) * ZEXT416(_DAT_140c7e584) >> 0x40,0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        DAT_140c7e578 = FUN_14018b280(uVar4,0);
        FUN_1407db590(DAT_140c7e578,lVar1);
        FUN_14018b900(lVar1,0);
        uVar5 = (ulonglong)DAT_140c7e580;
    }
    *(int *)(DAT_140c7e578 + uVar5 * 4) = param_2;
    DAT_140c7e580 = DAT_140c7e580 + 1;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14062f300(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 *puVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 uVar9;
    undefined auStack424 [32];
    undefined8 local_188;
    undefined8 local_180;
    undefined4 *local_178;
    undefined4 local_170;
    undefined8 local_168;
    undefined *local_160;
    undefined4 local_158;
    undefined4 *local_148;
    undefined4 *local_140;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined local_f8 [16];
    undefined local_e8 [16];
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined local_a8 [16];
    undefined4 *local_98;
    undefined4 *local_90;
    ulonglong local_48;

    lVar8 = DAT_140c7e570;
    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    uVar6 = (**(code **)(DAT_140c7e570 + 0x18))(param_3);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar8 + 0x10) + (uVar6 % *(ulonglong *)(lVar8 + 8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_14062f541:
            FUN_1407db4f0(local_48 ^ (ulonglong)auStack424);
            return;
        }
        if ((uVar6 == *puVar1) && (iVar5 = (**(code **)(lVar8 + 0x20))(), iVar5 != 0)) {
            if ((longlong **)(puVar1 + 5) != (longlong **)0x0) {
                plVar2 = (longlong *)puVar1[5];
                lVar8 = plVar2[1];
                if (lVar8 != 0) {
                    lVar7 = 0;
                    uVar9 = 0x3f800000;
                    do {
                        lVar3 = *plVar2;
                        if (((byte)((~(byte)*(undefined4 *)(param_2 + 5) & 2 |
                                     (byte)*(undefined4 *)(param_2 + 5) & 5) &
                                    ((byte)*(undefined4 *)(lVar7 + 8 + lVar3) ^ 2)) != 0) &&
                            (iVar5 = FUN_14062f230(), iVar5 == 0)) {
                            puVar4 = (undefined4 *)*param_2;
                            if (puVar4 == (undefined4 *)0x0) {
                                local_160 = local_f8;
                                local_f8 = ZEXT816(0);
                                local_178 = (undefined4 *)0x0;
                            }
                            else {
                                local_138 = _DAT_140c78390;
                                uStack308 = uRam0000000140c78394;
                                uStack304 = uRam0000000140c78398;
                                uStack300 = uRam0000000140c7839c;
                                local_128 = _DAT_140c783a0;
                                uStack292 = uRam0000000140c783a4;
                                uStack288 = uRam0000000140c783a8;
                                uStack284 = uRam0000000140c783ac;
                                local_118 = _DAT_140c783b0;
                                uStack276 = uRam0000000140c783b4;
                                uStack272 = uRam0000000140c783b8;
                                uStack268 = uRam0000000140c783bc;
                                local_108 = _DAT_140c783c0;
                                uStack260 = uRam0000000140c783c4;
                                uStack256 = uRam0000000140c783c8;
                                uStack252 = uRam0000000140c783cc;
                                if ((*(byte *)(param_2 + 5) & 1) == 0) {
                                    local_138 = *puVar4;
                                    uStack308 = puVar4[1];
                                    uStack304 = puVar4[2];
                                    uStack300 = puVar4[3];
                                    local_128 = puVar4[4];
                                    uStack292 = puVar4[5];
                                    uStack288 = puVar4[6];
                                    uStack284 = puVar4[7];
                                    local_118 = puVar4[8];
                                    uStack276 = puVar4[9];
                                    uStack272 = puVar4[10];
                                    uStack268 = puVar4[0xb];
                                    local_108 = puVar4[0xc];
                                    uStack260 = puVar4[0xd];
                                    uStack256 = puVar4[0xe];
                                    uStack252 = puVar4[0xf];
                                }
                                else {
                                    local_140 = &local_d8;
                                    local_d8 = _DAT_140c78410;
                                    uStack212 = uRam0000000140c78414;
                                    uStack208 = uRam0000000140c78418;
                                    uStack204 = uRam0000000140c7841c;
                                    local_c8 = _DAT_140c78420;
                                    uStack196 = uRam0000000140c78424;
                                    uStack192 = uRam0000000140c78428;
                                    uStack188 = uRam0000000140c7842c;
                                    local_b8 = _DAT_140c78430;
                                    uStack180 = uRam0000000140c78434;
                                    uStack176 = uRam0000000140c78438;
                                    uStack172 = uRam0000000140c7843c;
                                    local_a8 = CONCAT412(uVar9,ZEXT412((uint)(*(float *)((longlong)param_2 + 0xc) -
                                                                              (float)puVar4[0xd])) << 0x20);
                                    local_148 = puVar4;
                                    local_98 = puVar4;
                                    local_90 = local_140;
                                    FUN_1401afb10();
                                }
                                local_160 = local_e8;
                                local_178 = &local_138;
                                local_e8 = ZEXT816(0);
                            }
                            local_158 = 0;
                            local_168 = 0;
                            local_170 = 0;
                            local_188 = *(undefined8 *)(lVar7 + lVar3);
                            local_180 = 0;
                            FUN_1405787d0();
                        }
                        lVar7 = lVar7 + 0x10;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
            }
            goto LAB_14062f541;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}
