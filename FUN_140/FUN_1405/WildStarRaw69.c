//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1405de2e0(longlong param_1,longlong param_2,longlong param_3)

{
    short sVar1;
    uint uVar2;
    char cVar3;
    int iVar4;
    short *psVar5;
    longlong lVar6;
    uint uVar7;
    undefined8 local_18;
    undefined8 local_10;

    uVar7 = 0;
    if (((param_2 == 0) || (iVar4 = FUN_1403e1170(*(undefined8 *)(param_2 + 8),7), iVar4 != 0)) &&
        ((param_3 == 0 || (iVar4 = FUN_1403e1170(*(undefined8 *)(param_3 + 8),7), iVar4 != 0)))) {
        if (param_2 != 0) {
            cVar3 = FUN_14001be70(param_1 + 0x2d0,param_2);
            uVar7 = (uint)(cVar3 == '\0');
            if (param_2 != param_1 + 0x2b0) {
                FUN_14001c480(param_1 + 0x2b0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
            }
        }
        if (param_3 != 0) {
            if ((uVar7 != 0) || (cVar3 = FUN_14001be70(param_1 + 0x2d0,param_3), cVar3 == '\0')) {
                uVar7 = 1;
            }
            if (param_3 != param_1 + 0x2d0) {
                FUN_14001c480(param_1 + 0x2d0,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
            }
        }
        if (*(longlong *)(param_1 + 0x2b8) == *(longlong *)(param_1 + 0x2c0)) {
            psVar5 = (short *)FUN_14034bdd0();
            lVar6 = 0;
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = psVar5[lVar6];
            }
            FUN_14001c480(param_1 + 0x2b0,psVar5,psVar5 + lVar6);
            uVar7 = 1;
        }
        if (*(longlong *)(param_1 + 0x2d8) == *(longlong *)(param_1 + 0x2e0)) {
            psVar5 = (short *)FUN_14034bdd0();
            lVar6 = 0;
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = psVar5[lVar6];
            }
            FUN_14001c480(param_1 + 0x2d0,psVar5,psVar5 + lVar6);
            uVar7 = 1;
        }
        lVar6 = DAT_140c65898;
        if (*(int *)(DAT_140c65898 + 0x7b48) == 0x7f) {
            uVar2 = *(uint *)(param_1 + 0x340);
            *(undefined4 *)(param_1 + 0x340) = 0;
            if ((uVar7 | uVar2) != 0) {
                local_18 = *(undefined8 *)(param_1 + 0x2b8);
                local_10 = *(undefined8 *)(param_1 + 0x2d8);
                FUN_1403f4740(lVar6,0x3b7,&local_18);
            }
        }
        else {
            *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | uVar7;
        }
    }
    else {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0x25);
    }
    return;
}



void FUN_1405de4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                   undefined8 param_5)

{
    int iVar1;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;
    undefined8 local_10;

    iVar1 = FUN_1403e1170(param_5,0xc);
    if (iVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,10);
    }
    else {
        local_10 = param_5;
        local_18 = (ulonglong)param_4;
        local_28 = param_2;
        local_20 = param_3;
        FUN_1403f4740(DAT_140c65898,0x3b4,&local_28);
    }
    return;
}



void FUN_1405de590(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
    int iVar1;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;
    undefined8 local_10;

    iVar1 = FUN_1403e1170(param_4,0xc);
    if (iVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,10);
        return;
    }
    local_28 = *param_2;
    local_18 = (ulonglong)param_3;
    local_20 = param_2[1];
    local_10 = param_4;
    FUN_1403f4740(DAT_140c65898,0x3b3,&local_28);
    return;
}



void FUN_1405de650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    iVar1 = FUN_1403e1170(param_4,0xc);
    if (iVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,10);
        return;
    }
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    FUN_1403f4740(DAT_140c65898,0x3c8,&local_28);
    return;
}



void FUN_1405de700(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
    int iVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    iVar1 = FUN_1403e1170(param_3,0xc);
    if (iVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,10);
        return;
    }
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_3;
    FUN_1403f4740(DAT_140c65898,0x3c7,&local_28);
    return;
}



void FUN_1405de7a0(longlong param_1,undefined4 param_2,uint param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];
    undefined8 local_18;
    ulonglong local_10;

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0xe0))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xd8) + (uVar3 % *(ulonglong *)(param_1 + 0xd0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1405de806:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,7);
            return;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xe8))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                local_18 = *(undefined8 *)(puVar1[3] + 0x10);
                local_10 = (ulonglong)param_3;
                FUN_1403f4740(DAT_140c65898,0x3bc,&local_18);
                return;
            }
            goto LAB_1405de806;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



ulonglong FUN_1405de890(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    undefined4 local_res10 [2];
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    local_res10[0] = param_2;
    uVar2 = (**(code **)(param_1 + 0xe0))(local_res10);
    uVar3 = uVar2 / *(ulonglong *)(param_1 + 0xd0);
    puVar4 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xd8) + (uVar2 % *(ulonglong *)(param_1 + 0xd0)) * 8);
    if (puVar4 == (ulonglong *)0x0) {
        return uVar3;
    }
    while ((uVar2 != *puVar4 ||
            (uVar3 = (**(code **)(param_1 + 0xe8))(local_res10,puVar4 + 2), (int)uVar3 == 0))) {
        puVar4 = (ulonglong *)puVar4[1];
        if (puVar4 == (ulonglong *)0x0) {
            return uVar3;
        }
    }
    if (puVar4 + 3 == (ulonglong *)0x0) {
        return uVar3;
    }
    uVar2 = puVar4[3];
    if (0 < *(int *)(uVar2 + 0x28)) {
        return uVar3;
    }
    *(undefined4 *)(uVar2 + 0x28) = 1;
    if (*(undefined8 **)(uVar2 + 0x70) != (undefined8 *)0x0) {
        **(undefined8 **)(uVar2 + 0x70) = *(undefined8 *)(uVar2 + 0x78);
    }
    puVar4 = (ulonglong *)(uVar2 + 0x78);
    if (*(longlong *)(uVar2 + 0x78) != 0) {
        *(undefined8 *)(*(longlong *)(uVar2 + 0x78) + 0x70) = *(undefined8 *)(uVar2 + 0x70);
    }
    puVar1 = (ulonglong *)(param_1 + 0x268);
    *puVar4 = 0;
    *(ulonglong **)(uVar2 + 0x70) = puVar1;
    *puVar4 = *puVar1;
    *puVar1 = uVar2;
    uVar2 = *puVar4;
    if (uVar2 != 0) {
        *(ulonglong **)(uVar2 + 0x70) = puVar4;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        return uVar2;
    }
    local_28[0] = 0;
    local_10 = 0;
    local_18 = &DAT_1405df820;
    local_20 = param_1;
    uVar2 = FUN_140195960(param_1 + 8,30000,local_28,4);
    return uVar2;
}



void FUN_1405de9c0(longlong param_1,longlong *param_2)

{
    ulonglong uVar1;
    ulonglong *puVar2;
    int iVar3;
    int *piVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    int *piVar10;
    int *piVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    ulonglong uVar14;
    longlong lVar15;
    ulonglong uVar16;
    int *local_res18;
    ulonglong local_res20;
    ulonglong local_60;
    int *local_58;
    ulonglong local_50;
    undefined8 *local_48;

    local_60 = 0;
    piVar4 = (int *)FUN_14018dbc0(0,param_2[1],0x10);
    local_res20 = 0;
    piVar11 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
        piVar11 = piVar4;
    }
    local_res18 = piVar11;
    lVar5 = FUN_14018dbc0(0,param_2[1],8);
    lVar15 = 0;
    if (lVar5 != 0) {
        lVar15 = lVar5;
    }
    uVar14 = param_2[1];
    uVar16 = 0;
    lVar5 = lVar15;
    piVar4 = local_res18;
    if (uVar14 != 0) {
        do {
            local_res18 = (int *)((ulonglong)local_res18 & 0xffffffff00000000 |
                                  (ulonglong)*(uint *)(*param_2 + uVar16 * 4));
            uVar6 = (**(code **)(param_1 + 0x68))(&local_res18);
            for (puVar2 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x60) + (uVar6 % *(ulonglong *)(param_1 + 0x58)) * 8);
                 lVar5 = lVar15, piVar4 = piVar11, puVar2 != (ulonglong *)0x0;
                 puVar2 = (ulonglong *)puVar2[1]) {
                if ((uVar6 == *puVar2) && (iVar3 = (**(code **)(param_1 + 0x70))(&local_res18), iVar3 != 0))
                {
                    if ((puVar2 + 3 != (ulonglong *)0x0) && (uVar6 = puVar2[3], uVar6 != 0)) {
                        uVar1 = local_60 + 1;
                        piVar10 = (int *)FUN_14018db00(piVar11,uVar1,0x10);
                        lVar15 = local_60 * 0x10;
                        *(undefined8 *)(piVar10 + local_60 * 4) = *(undefined8 *)(uVar6 + 0xb8);
                        *(undefined8 *)(piVar10 + local_60 * 4 + 2) = *(undefined8 *)(uVar6 + 0xc0);
                        local_60 = uVar1;
                        uVar6 = local_res20;
                        if ((piVar11 != piVar10) &&
                            (FUN_1407db590(piVar10,piVar11,lVar15), piVar4 = piVar10, uVar6 = local_res20,
                                    piVar11 != (int *)0x0)) {
                            (**(code **)(*(longlong *)(piVar11 + -4) + 8))(piVar11 + -4);
                            uVar6 = local_res20;
                        }
                        goto LAB_1405deb0f;
                    }
                    break;
                }
            }
            lVar7 = FUN_1405e2000(param_1);
            uVar6 = local_res20;
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x70) != 0)) {
                uVar6 = local_res20 + 1;
                lVar8 = FUN_14018db00(lVar15,uVar6,8);
                *(longlong *)(local_res20 * 8 + lVar8) = lVar7;
                if ((lVar15 != lVar8) && (FUN_1407db590(lVar8), lVar5 = lVar8, lVar15 != 0)) {
                    (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
                }
            }
            LAB_1405deb0f:
            local_res20 = uVar6;
            uVar16 = uVar16 + 1;
            lVar15 = lVar5;
            piVar11 = piVar4;
        } while (uVar16 < uVar14);
    }
    local_res18 = piVar4;
    local_50 = 0;
    lVar15 = param_2[1] - local_60;
    puVar13 = (undefined8 *)0x0;
    if (lVar15 != 0) {
        puVar9 = (undefined8 *)FUN_14018b280(lVar15 * 8 + 0x10);
        if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = lVar15;
            *puVar9 = &PTR_LAB_140b55060;
        }
        if (puVar9 + 2 != (undefined8 *)0x0) {
            puVar13 = puVar9 + 2;
        }
    }
    uVar14 = 0;
    puVar9 = puVar13;
    if (local_res20 != 0) {
        do {
            lVar15 = *(longlong *)(lVar5 + uVar14 * 8);
            uVar16 = 0;
            lVar7 = **(longlong **)(lVar15 + 0x68);
            puVar13 = puVar9;
            if (local_60 != 0) {
                piVar11 = local_res18;
                do {
                    if ((*piVar11 == *(int *)(lVar7 + 8)) &&
                        (*(longlong *)(piVar11 + 2) == *(longlong *)(lVar7 + 0x10))) goto LAB_1405dec86;
                    uVar16 = uVar16 + 1;
                    piVar11 = piVar11 + 4;
                } while (uVar16 < local_60);
            }
            puVar12 = (undefined8 *)FUN_14018db00(puVar9,local_50 + 1,8);
            puVar12[local_50] = *(undefined8 *)(lVar15 + 0x18);
            if ((puVar9 != puVar12) &&
                (FUN_1407db590(puVar12), puVar13 = puVar12, puVar9 != (undefined8 *)0x0)) {
                (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
            }
            local_50 = local_50 + 1;
            LAB_1405dec86:
            uVar14 = uVar14 + 1;
            puVar9 = puVar13;
        } while (uVar14 < local_res20);
    }
    piVar11 = local_res18;
    local_58 = local_res18;
    local_60 = local_60 & 0xff;
    local_50 = local_50 & 0xff;
    local_48 = puVar13;
    FUN_1403f4740(DAT_140c65898,0x3bf,&local_60);
    if (puVar13 != (undefined8 *)0x0) {
        (**(code **)(puVar13[-2] + 8))(puVar13 + -2);
    }
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if (piVar11 != (int *)0x0) {
        (**(code **)(*(longlong *)(piVar11 + -4) + 8))(piVar11 + -4);
    }
    return;
}



void FUN_1405ded30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 local_18;
    undefined8 local_10;

    iVar1 = FUN_1405df7c0();
    if (iVar1 == 0) {
        return;
    }
    iVar1 = FUN_1403e1170(param_2,0x15);
    if (iVar1 == 0) {
        uVar2 = 0x22;
    }
    else {
        iVar1 = FUN_1403e1170(param_3,0x16);
        if (iVar1 == 0) {
            uVar2 = 10;
        }
        else {
            iVar1 = (**(code **)(*DAT_140c65890 + 8))(DAT_140c65890,param_3,1,0,0);
            if (iVar1 == 0) {
                local_18 = param_2;
                local_10 = param_3;
                FUN_1400161d0(DAT_140c635f0,0x397,&local_18);
                return;
            }
            uVar2 = 0x1f;
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,uVar2);
    return;
}



void FUN_1405dee20(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    iVar1 = FUN_1405df7c0();
    if (iVar1 != 0) {
        lVar2 = FUN_1405e2300(DAT_140c65898 + 0x6838,param_2);
        if (lVar2 != 0) {
            iVar1 = FUN_1403e1170(param_3,0x16);
            if (iVar1 == 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,10
                );
                return;
            }
            iVar1 = (**(code **)(*DAT_140c65890 + 8))(DAT_140c65890,param_3,1,0,0);
            if (iVar1 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,
                              0x1f);
                return;
            }
            local_28 = *(undefined8 *)(lVar2 + 0xb8);
            local_20 = *(undefined8 *)(lVar2 + 0xc0);
            local_18 = param_3;
            FUN_1403f4740(DAT_140c65898,0x398,&local_28);
        }
    }
    return;
}



ulonglong * FUN_1405def50(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    undefined4 local_res10 [2];
    undefined8 local_res18;

    local_res10[0] = param_2;
    puVar1 = (ulonglong *)FUN_1405df7c0();
    if ((int)puVar1 != 0) {
        uVar2 = (**(code **)(param_1 + 0x180))(local_res10);
        puVar1 = (ulonglong *)(uVar2 / *(ulonglong *)(param_1 + 0x170));
        puVar3 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x178) + (uVar2 % *(ulonglong *)(param_1 + 0x170)) * 8);
        if (puVar3 != (ulonglong *)0x0) {
            while ((uVar2 != *puVar3 ||
                    (puVar1 = (ulonglong *)(**(code **)(param_1 + 0x188))(local_res10,puVar3 + 2),
                            (int)puVar1 == 0))) {
                puVar3 = (ulonglong *)puVar3[1];
                if (puVar3 == (ulonglong *)0x0) {
                    return puVar1;
                }
            }
            puVar1 = puVar3 + 3;
            if (puVar1 != (ulonglong *)0x0) {
                local_res18 = *(undefined8 *)(*puVar1 + 0x18);
                puVar1 = (ulonglong *)FUN_1400161d0(DAT_140c635f0,0x3af,&local_res18);
            }
        }
    }
    return puVar1;
}



ulonglong FUN_1405df020(longlong param_1,undefined4 param_2)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    undefined8 local_res8;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar2 = (**(code **)(param_1 + 0x220))(local_res10);
    uVar3 = uVar2 / *(ulonglong *)(param_1 + 0x210);
    puVar4 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x218) + (uVar2 % *(ulonglong *)(param_1 + 0x210)) * 8);
    if (puVar4 == (ulonglong *)0x0) {
        return uVar3;
    }
    while ((uVar2 != *puVar4 ||
            (uVar3 = (**(code **)(param_1 + 0x228))(local_res10,puVar4 + 2), (int)uVar3 == 0))) {
        puVar4 = (ulonglong *)puVar4[1];
        if (puVar4 == (ulonglong *)0x0) {
            return uVar3;
        }
    }
    if (puVar4 + 3 == (ulonglong *)0x0) {
        return uVar3;
    }
    uVar2 = puVar4[3];
    uVar1 = *(uint *)(uVar2 + 0x30);
    if ((uVar1 & 1) != 0) {
        return (ulonglong)uVar1;
    }
    *(uint *)(uVar2 + 0x30) = uVar1 | 1;
    local_res8 = *(undefined8 *)(uVar2 + 8);
    uVar2 = FUN_1400161d0(DAT_140c635f0,0x3a2,&local_res8);
    return uVar2;
}



ulonglong FUN_1405df0e0(longlong param_1,undefined4 param_2,uint param_3)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];
    undefined8 local_18;
    ulonglong local_10;

    local_res10[0] = param_2;
    uVar2 = FUN_1405df7c0();
    if ((int)uVar2 != 0) {
        uVar3 = (**(code **)(param_1 + 0x220))(local_res10);
        uVar2 = uVar3 / *(ulonglong *)(param_1 + 0x210);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x218) + (uVar3 % *(ulonglong *)(param_1 + 0x210)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar3 == *puVar1) &&
                (uVar2 = (**(code **)(param_1 + 0x228))(local_res10,puVar1 + 2), (int)uVar2 != 0)) {
                if (puVar1 + 3 == (ulonglong *)0x0) {
                    return 0;
                }
                local_18 = *(undefined8 *)(puVar1[3] + 8);
                local_10 = (ulonglong)param_3;
                uVar2 = FUN_1400161d0(DAT_140c635f0,0x3a1,&local_18);
                return uVar2;
            }
        }
    }
    return uVar2;
}



void FUN_1405df1b0(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 local_res18 [2];
    undefined4 uVar2;

    iVar1 = FUN_1405df7c0();
    if (iVar1 == 0) {
        return;
    }
    iVar1 = FUN_1403e1170(param_2,0x14);
    if (iVar1 == 0) {
        uVar2 = 0x21;
    }
    else {
        iVar1 = (**(code **)(*DAT_140c65890 + 8))(DAT_140c65890,param_2,1,0,0);
        if (iVar1 == 0) {
            if (*(int *)(param_1 + 0x290) == 4) {
                return;
            }
            local_res18[0] = param_2;
            FUN_1400161d0(DAT_140c635f0,0x3ac,local_res18);
            return;
        }
        uVar2 = 0x1f;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,uVar2);
    return;
}



void FUN_1405df280(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 local_res18 [2];
    undefined4 uVar2;

    iVar1 = FUN_1405df7c0();
    if (iVar1 == 0) {
        return;
    }
    iVar1 = FUN_1403e1170(param_2,0x12);
    if (iVar1 == 0) {
        uVar2 = 0x21;
    }
    else {
        iVar1 = (**(code **)(*DAT_140c65890 + 8))(DAT_140c65890,param_2,0,0,0);
        if (iVar1 == 0) {
            if (*(int *)(param_1 + 0x290) == 4) {
                return;
            }
            local_res18[0] = param_2;
            FUN_1400161d0(DAT_140c635f0,0x39b,local_res18);
            return;
        }
        uVar2 = 0x27;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,uVar2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405df340(longlong param_1)

{
    if ((DAT_140dc3514 & 1) == 0) {
        DAT_140dc3514 = DAT_140dc3514 | 1;
        DAT_140dc351c = 0;
        _DAT_140dc3520 = 1000;
        DAT_140dc3518 = DAT_140c636a8 + -1000;
        _DAT_140dc3524 = 1;
        DAT_140dc3528 = 1000;
        FUN_1407dd89c();
    }
    if ((uint)(DAT_140c636a8 - DAT_140dc3518) < DAT_140dc3528) {
        if (DAT_140dc351c == _DAT_140dc3524) {
            return;
        }
        DAT_140dc351c = DAT_140dc351c + 1;
    }
    else if ((uint)(DAT_140c636a8 - DAT_140dc3518) < _DAT_140dc3520) {
        DAT_140dc3518 = DAT_140dc3518 + DAT_140dc3528;
    }
    else {
        DAT_140dc3518 = DAT_140c636a8;
        DAT_140dc351c = 1;
    }
    FUN_140195d70(param_1 + 0x348);
    if (*(int *)(param_1 + 0x2f0) == 1) {
        FUN_1405df560(param_1,0);
    }
    FUN_1405df430(param_1);
    return;
}



void FUN_1405df430(longlong param_1)

{
    int iVar1;
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    *(uint *)(param_1 + 0x344) = (uint)(*(int *)(DAT_140c65898 + 0x7b48) != 0x7f);
    if (*(int *)(param_1 + 0x2f0) == 0) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_1405df4c0;
        iVar1 = DAT_140c7e180;
        if (*DAT_140c63750 < DAT_140c7e180) {
            iVar1 = *DAT_140c63750;
        }
        local_20 = param_1;
        FUN_140195960(param_1 + 0x348,*(int *)(&DAT_140c7e190 + (longlong)iVar1 * 4) * 1000,local_28,4);
    }
    return;
}



void FUN_1405df4e0(undefined8 param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 local_18;
    undefined *local_10;

    if (param_2 != 0) {
        iVar1 = *(int *)(param_2 + 0xd0);
        uVar2 = 1;
        if ((iVar1 == 0) || (iVar1 == 4)) {
            uVar2 = 2;
        }
        else if ((iVar1 == 3) || (iVar1 == 4)) {
            uVar2 = 3;
        }
        local_10 = &LAB_1405e2a30;
        local_18 = param_1;
        FUN_1403f8660(param_1,uVar2,param_2 + 0xb8,&local_18);
    }
    return;
}



int FUN_1405df560(longlong param_1,int param_2)

{
    short sVar1;
    uint uVar2;
    int iVar3;
    short *psVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 local_18;
    undefined8 local_10;

    lVar8 = 0;
    lVar7 = lVar8;
    if (*(longlong *)(param_1 + 0x2b8) == *(longlong *)(param_1 + 0x2c0)) {
        psVar4 = (short *)FUN_14034bdd0();
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar7 = lVar7 + 1;
            sVar1 = psVar4[lVar7];
        }
        FUN_14001c480(param_1 + 0x2b0,psVar4,psVar4 + lVar7);
        lVar7 = 1;
    }
    uVar6 = (uint)lVar7;
    if (*(longlong *)(param_1 + 0x2d8) == *(longlong *)(param_1 + 0x2e0)) {
        psVar4 = (short *)FUN_14034bdd0(lVar7,0x86e40);
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar4[lVar8];
        }
        FUN_14001c480(param_1 + 0x2d0,psVar4,psVar4 + lVar8);
        uVar6 = 1;
    }
    lVar8 = DAT_140c65898;
    if (*(int *)(DAT_140c65898 + 0x7b48) == 0x7f) {
        uVar2 = *(uint *)(param_1 + 0x340);
        *(undefined4 *)(param_1 + 0x340) = 0;
        if ((uVar6 | uVar2) != 0) {
            local_18 = *(undefined8 *)(param_1 + 0x2b8);
            local_10 = *(undefined8 *)(param_1 + 0x2d8);
            FUN_1403f4740(lVar8,0x3b7,&local_18);
            lVar8 = DAT_140c65898;
        }
    }
    else {
        *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | uVar6;
    }
    iVar3 = *(int *)(param_1 + 0x2f0);
    if ((param_2 != iVar3) && (iVar3 != 4)) {
        *(int *)(param_1 + 0x2f0) = param_2;
        FUN_1400ea3e0(*(undefined8 *)(lVar8 + 0x7340),"FriendshipAccountPersonalStatusUpdate","");
        if ((*(int *)(param_1 + 0x2f0) == 1) || (*(int *)(param_1 + 0x2f0) == 2)) {
            uVar5 = FUN_14034bdd0();
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
        }
        if (*(int *)(param_1 + 0x2f0) == 0) {
            FUN_1405df430(param_1);
        }
        else {
            FUN_140195d70(param_1 + 0x348);
        }
        FUN_1405df720(param_1);
        iVar3 = param_2;
    }
    return iVar3;
}



void FUN_1405df720(longlong param_1)

{
    int iVar1;
    undefined4 local_res8 [8];
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if ((*(int *)(param_1 + 0x2f0) != *(int *)(param_1 + 0x290)) && (*(int *)(param_1 + 0x290) != 4))
    {
        iVar1 = FUN_1405df7c0();
        if (iVar1 != 0) {
            local_res8[0] = *(undefined4 *)(param_1 + 0x2f0);
            FUN_1400161d0(DAT_140c635f0,0x3a7,local_res8);
            return;
        }
        if (*(longlong *)(param_1 + 0x308) == 0) {
            local_28[0] = 0;
            local_10 = 0;
            local_18 = FUN_1405df720;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x2f8,800,local_28,4);
        }
    }
    return;
}



undefined8 FUN_1405df7c0(int *param_1)

{
    if (*(longlong *)(param_1 + 0xc2) == 0) {
        if ((*param_1 - DAT_140c636a8) + 800 < 1) {
            *param_1 = DAT_140c636a8;
            return 1;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0x1e);
    }
    return 0;
}



ulonglong FUN_1405df990(longlong param_1,undefined4 param_2,uint param_3,longlong param_4)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];
    undefined8 local_38;
    ulonglong local_30;
    undefined8 local_28;

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x180))(local_res10);
    uVar4 = uVar3 / *(ulonglong *)(param_1 + 0x170);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x178) + (uVar3 % *(ulonglong *)(param_1 + 0x170)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (uVar4 = (**(code **)(param_1 + 0x188))(local_res10,puVar1 + 2), (int)uVar4 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return uVar4;
    }
    uVar3 = puVar1[3];
    if (param_3 == 0) {
        return uVar4;
    }
    iVar2 = FUN_1403e1170(*(undefined8 *)(param_4 + 8),0x13);
    if (iVar2 == 0) {
        uVar4 = FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,
                              0,10);
        return uVar4;
    }
    local_38 = *(undefined8 *)(uVar3 + 0x18);
    local_30 = (ulonglong)param_3;
    local_28 = *(undefined8 *)(param_4 + 8);
    uVar4 = FUN_1400161d0(DAT_140c635f0,0x39d,&local_38);
    return uVar4;
}



undefined8 FUN_1405dfab0(longlong param_1,ushort *param_2)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    undefined4 uVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    undefined8 uVar11;
    ulonglong local_res8;
    longlong local_res18;

    local_res8 = 0;
    if (*param_2 != 0) {
        local_res18 = 0;
        do {
            lVar6 = *(longlong *)(param_2 + 4);
            uVar5 = (**(code **)(param_1 + 0x90))(lVar6 + local_res18);
            for (puVar7 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x88) + (uVar5 % *(ulonglong *)(param_1 + 0x80)) * 8);
                 puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                if ((uVar5 == *puVar7) &&
                    (iVar4 = (**(code **)(param_1 + 0x98))(lVar6 + local_res18), iVar4 != 0)) {
                    if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1405dfd85;
                    break;
                }
            }
            lVar6 = FUN_14018b280(0x118);
            if (lVar6 == 0) {
                puVar7 = (ulonglong *)0x0;
            }
            else {
                *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
                puVar7 = (ulonglong *)
                        FUN_1405da9f0(lVar6,*(longlong *)(param_2 + 4) + local_res18,param_1 + 600,
                                      *(undefined4 *)(param_1 + 0x288));
            }
            puVar10 = (ulonglong *)0x0;
            if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_1 + 0x80)) {
                FUN_1400290d0(param_1 + 0x78);
            }
            uVar5 = (**(code **)(param_1 + 0x90))(puVar7);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x88) + (uVar5 % *(ulonglong *)(param_1 + 0x80)) * 8);
            puVar8 = (ulonglong *)FUN_14018b280(0x20);
            puVar9 = puVar10;
            if (puVar8 != (ulonglong *)0x0) {
                puVar9 = *ppuVar2;
                *puVar8 = uVar5;
                puVar8[1] = (ulonglong)puVar9;
                uVar5 = *puVar7;
                puVar8[3] = (ulonglong)puVar7;
                puVar8[2] = uVar5;
                puVar9 = puVar8;
            }
            *ppuVar2 = puVar9;
            *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
            if (*(longlong *)(param_1 + 0x50) == *(longlong *)(param_1 + 0x58)) {
                FUN_1400290d0(param_1 + 0x50);
            }
            uVar5 = (**(code **)(param_1 + 0x68))(puVar7 + 1);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x60) + (uVar5 % *(ulonglong *)(param_1 + 0x58)) * 8);
            puVar9 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar9 != (ulonglong *)0x0) {
                puVar10 = *ppuVar2;
                *puVar9 = uVar5;
                puVar9[1] = (ulonglong)puVar10;
                uVar3 = *(undefined4 *)(puVar7 + 1);
                puVar9[3] = (ulonglong)puVar7;
                *(undefined4 *)(puVar9 + 2) = uVar3;
                puVar10 = puVar9;
            }
            *ppuVar2 = puVar10;
            *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
            plVar1 = (longlong *)(param_1 + 0xa0);
            if (*plVar1 == *(longlong *)(param_1 + 0xa8)) {
                FUN_1400290d0(plVar1);
            }
            uVar5 = (**(code **)(param_1 + 0xb8))(puVar7 + 0x17);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0xb0) + (uVar5 % *(ulonglong *)(param_1 + 0xa8)) * 8);
            puVar9 = (ulonglong *)FUN_14018b280();
            puVar10 = (ulonglong *)0x0;
            if (puVar9 != (ulonglong *)0x0) {
                puVar10 = *ppuVar2;
                *puVar9 = uVar5;
                puVar9[1] = (ulonglong)puVar10;
                puVar9[2] = puVar7[0x17];
                uVar5 = puVar7[0x18];
                puVar9[4] = (ulonglong)puVar7;
                puVar9[3] = uVar5;
                puVar10 = puVar9;
            }
            *ppuVar2 = puVar10;
            *plVar1 = *plVar1 + 1;
            if (puVar7 != (ulonglong *)0x0) {
                iVar4 = *(int *)(puVar7 + 0x1a);
                uVar11 = 1;
                if ((iVar4 == 0) || (iVar4 == 4)) {
                    uVar11 = 2;
                }
                else if ((iVar4 == 3) || (iVar4 == 4)) {
                    uVar11 = 3;
                }
                FUN_1403f8660(iVar4,uVar11,puVar7 + 0x17);
            }
            FUN_1403f87b0(DAT_140c65898);
            *(undefined4 *)(puVar7 + 0x20) = 1;
            LAB_1405dfd85:
            local_res8 = local_res8 + 1;
            local_res18 = local_res18 + 0x28;
        } while (local_res8 < *param_2);
    }
    lVar6 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x28c) = 1;
    FUN_1400ea3e0(*(undefined8 *)(lVar6 + 0x7340),"FriendshipLoaded",&DAT_1409d0ed6);
    return 0;
}



undefined8 FUN_1405e0080(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong local_18;
    undefined *local_10;

    uVar4 = (**(code **)(param_1 + 0x90))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x88) + (uVar4 % *(ulonglong *)(param_1 + 0x80)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x98))(param_2,puVar1 + 2), lVar2 = DAT_140c65898, iVar3 != 0
            )) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    uVar4 = puVar1[3];
    *(undefined4 *)(uVar4 + 0xd0) = *(undefined4 *)(param_2 + 8);
    FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"FriendshipUpdate",&DAT_1409eac3c,
                  *(undefined4 *)(uVar4 + 8));
    iVar3 = *(int *)(uVar4 + 0xd0);
    uVar5 = 1;
    if ((iVar3 == 0) || (iVar3 == 4)) {
        uVar5 = 2;
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
        uVar5 = 3;
    }
    local_10 = &LAB_1405e2a30;
    local_18 = param_1;
    FUN_1403f8660(iVar3,uVar5,uVar4 + 0xb8,&local_18);
    iVar3 = *(int *)(uVar4 + 0xd0);
    if (((iVar3 != 0) && (iVar3 != 4)) && (iVar3 != 1)) {
        return 0;
    }
    FUN_1405e28c0(param_1,uVar4 + 0xb8);
    return 0;
}



undefined8 FUN_1405e01d0(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0xb8))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xb0) + (uVar3 % *(ulonglong *)(param_1 + 0xa8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xc0))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return 0;
    }
    uVar3 = puVar1[4];
    *(undefined4 *)(uVar3 + 0xfc) = 1;
    FUN_1405df4e0(param_1,uVar3);
    if (*(float *)(param_2 + 0x10) == 0.0) {
        *(undefined8 *)(uVar3 + 200) = 0;
        return 0;
    }
    if (uVar3 == 0xffffffffffffff38) {
        return 0;
    }
    FUN_1401e82f0();
    return 0;
}



undefined8 FUN_1405e02a0(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0xb8))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xb0) + (uVar3 % *(ulonglong *)(param_1 + 0xa8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xc0))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return 0;
    }
    uVar3 = puVar1[4];
    *(undefined4 *)(uVar3 + 0xe8) = *(undefined4 *)(param_2 + 0x10);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipUpdate",&DAT_1409eac3c,
                  *(undefined4 *)(uVar3 + 8));
    return 0;
}



undefined8 FUN_1405e0360(longlong param_1,longlong param_2)

{
    short sVar1;
    ulonglong *puVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;

    uVar6 = (**(code **)(param_1 + 0x90))(param_2);
    puVar2 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x88) + (uVar6 % *(ulonglong *)(param_1 + 0x80)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar6 == *puVar2) &&
            (iVar5 = (**(code **)(param_1 + 0x98))(param_2,puVar2 + 2), iVar5 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 != (ulonglong *)0x0) {
        uVar6 = puVar2[3];
        psVar3 = *(short **)(param_2 + 8);
        puVar8 = (undefined8 *)0x0;
        lVar4 = *(longlong *)(uVar6 + 0xd8);
        if (psVar3 == (short *)0x0) {
            *(undefined8 *)(uVar6 + 0xd8) = 0;
        }
        else {
            sVar1 = *psVar3;
            puVar9 = puVar8;
            while (sVar1 != 0) {
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                sVar1 = psVar3[(longlong)puVar9];
            }
            puVar7 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 2 + 0x12,0);
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[1] = puVar9;
                *puVar7 = &PTR_LAB_140b55060;
                puVar8 = puVar7;
            }
            puVar8 = puVar8 + 2;
            FUN_1407db590(puVar8,psVar3,(longlong)puVar9 * 2);
            *(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar8) = 0;
            *(undefined8 **)(uVar6 + 0xd8) = puVar8;
        }
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipUpdate",&DAT_1409eac3c,
                      *(undefined4 *)(uVar6 + 8));
    }
    return 0;
}



undefined8 FUN_1405e04b0(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0x90))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x88) + (uVar3 % *(ulonglong *)(param_1 + 0x80)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x98))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    uVar3 = puVar1[3];
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipRemove",&DAT_1409eabdc,
                  *(undefined4 *)(uVar3 + 8));
    FUN_1400b6120(param_1 + 0x50,uVar3 + 8);
    FUN_1400b6120(param_1 + 0x78,uVar3);
    FUN_1400b6120(param_1 + 0xa0,uVar3 + 0xb8);
    FUN_1405ddd80(uVar3);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipPostRemove",&DAT_1409d0eee);
    return 0;
}



undefined8 FUN_1405e05d0(longlong param_1,ushort *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    ulonglong *puVar6;
    int iVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined4 *puVar11;
    ulonglong *puVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    lVar10 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = lVar10;
    if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar10);
    }
    puVar5 = *(undefined8 **)(lVar10 + 0x10);
    uVar8 = FUN_14005c1b0(lVar10,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar8;
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    local_60 = FUN_1400578c0(lVar10);
    uVar14 = 0;
    if (*param_2 != 0) {
        lVar13 = 0;
        plVar1 = (longlong *)(param_1 + 0xf0);
        do {
            lVar10 = *(longlong *)(param_2 + 4);
            uVar9 = (**(code **)(param_1 + 0x108))(lVar10 + lVar13);
            for (puVar12 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x100) + (uVar9 % *(ulonglong *)(param_1 + 0xf8)) * 8
                    ); puVar12 != (ulonglong *)0x0; puVar12 = (ulonglong *)puVar12[1]) {
                if ((uVar9 == *puVar12) &&
                    (iVar7 = (**(code **)(param_1 + 0x110))(lVar10 + lVar13), iVar7 != 0)) {
                    if (puVar12 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1405e0863;
                    break;
                }
            }
            lVar10 = FUN_14018b280(0x80);
            if (lVar10 == 0) {
                puVar11 = (undefined4 *)0x0;
            }
            else {
                *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
                puVar11 = (undefined4 *)
                        FUN_1405db4d0(lVar10,*(longlong *)(param_2 + 4) + lVar13,param_1 + 0x260,
                                      *(undefined4 *)(param_1 + 0x288));
            }
            if (*plVar1 == *(longlong *)(param_1 + 0xf8)) {
                FUN_1400290d0(plVar1);
            }
            uVar9 = (**(code **)(param_1 + 0x108))(puVar11 + 4);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x100) + (uVar9 % *(ulonglong *)(param_1 + 0xf8)) * 8);
            puVar12 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar12 != (ulonglong *)0x0) {
                puVar6 = *ppuVar3;
                *puVar12 = uVar9;
                puVar12[1] = (ulonglong)puVar6;
                uVar9 = *(ulonglong *)(puVar11 + 4);
                puVar12[3] = (ulonglong)puVar11;
                puVar12[2] = uVar9;
            }
            *ppuVar3 = puVar12;
            *plVar1 = *plVar1 + 1;
            plVar2 = (longlong *)(param_1 + 200);
            if (*plVar2 == *(longlong *)(param_1 + 0xd0)) {
                FUN_1400290d0(plVar2);
            }
            uVar9 = (**(code **)(param_1 + 0xe0))(puVar11);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(param_1 + 0xd8) + (uVar9 % *(ulonglong *)(param_1 + 0xd0)) * 8);
            puVar12 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar12 != (ulonglong *)0x0) {
                puVar6 = *ppuVar3;
                *puVar12 = uVar9;
                puVar12[1] = (ulonglong)puVar6;
                uVar4 = *puVar11;
                puVar12[3] = (ulonglong)puVar11;
                *(undefined4 *)(puVar12 + 2) = uVar4;
            }
            *ppuVar3 = puVar12;
            *plVar2 = *plVar2 + 1;
            local_30 = 1;
            lVar10 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
            local_48 = &PTR_FUN_140b569f0;
            local_38 = lVar10;
            if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar10);
            }
            puVar5 = *(undefined8 **)(lVar10 + 0x10);
            uVar8 = FUN_14005c1b0(lVar10,0,0);
            *(undefined4 *)(puVar5 + 1) = 5;
            *puVar5 = uVar8;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(lVar10);
            FUN_1405db6b0(puVar11);
            FUN_1400fb1d0(&local_68);
            FUN_1400579e0(lVar10);
            LAB_1405e0863:
            uVar14 = uVar14 + 1;
            lVar13 = lVar13 + 0x40;
            lVar10 = local_58;
        } while (uVar14 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipInvitesRecieved",&DAT_1409eac64,
                  local_60);
    if (lVar10 != 0) {
        FUN_1400579e0(lVar10);
    }
    return 0;
}



undefined8 FUN_1405e08f0(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = (**(code **)(param_1 + 0x108))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x100) + (uVar4 % *(ulonglong *)(param_1 + 0xf8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x110))(param_2,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipInviteRemoved",&DAT_1409eab1c,
                  *puVar2);
    FUN_1400b6120(param_1 + 200,puVar2);
    FUN_1400b6120(param_1 + 0xf0,puVar2 + 4);
    FUN_1405dded0(puVar2);
    FUN_14018b900(puVar2,0);
    return 0;
}



undefined8 FUN_1405e0f80(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = (**(code **)(param_1 + 0x1d0))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1c8) + (uVar4 % *(ulonglong *)(param_1 + 0x1c0)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x1d8))(param_2,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountFriendRemoved",
                  &DAT_1409eab2c,*puVar2);
    FUN_1400b6120(param_1 + 400,puVar2 + 4);
    FUN_1400b6120(param_1 + 0x1b8,puVar2 + 6);
    FUN_1400b6120(param_1 + 0x168,puVar2);
    FUN_1405dc3a0(puVar2);
    FUN_14018b900(puVar2,0);
    return 0;
}



undefined8 FUN_1405e1080(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = (**(code **)(param_1 + 0x1a8))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a0) + (uVar4 % *(ulonglong *)(param_1 + 0x198)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x1b0))(param_2,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    if (puVar2 == (undefined4 *)0x0) {
        return 0;
    }
    puVar2[0x10] = *(undefined4 *)(param_2 + 4);
    FUN_1405dcbe0(puVar2,*(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",&DAT_1409eacd4
            ,*puVar2);
    return 0;
}



undefined8 FUN_1405e1200(longlong param_1,int *param_2)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    undefined4 *puVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    ulonglong *puVar10;

    if (*param_2 == *(int *)(DAT_140c635f0 + 0x1668)) {
        psVar2 = *(short **)(param_2 + 2);
        puVar7 = (undefined8 *)0x0;
        lVar3 = *(longlong *)(param_1 + 0x298);
        if (psVar2 == (short *)0x0) {
            *(undefined8 *)(param_1 + 0x298) = 0;
        }
        else {
            sVar1 = *psVar2;
            puVar9 = puVar7;
            while (sVar1 != 0) {
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                sVar1 = psVar2[(longlong)puVar9];
            }
            puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 2 + 0x12,0);
            if (puVar6 != (undefined8 *)0x0) {
                puVar6[1] = puVar9;
                *puVar6 = &PTR_LAB_140b55060;
                puVar7 = puVar6;
            }
            puVar7 = puVar7 + 2;
            FUN_1407db590(puVar7,psVar2,(longlong)puVar9 * 2);
            *(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar7) = 0;
            *(undefined8 **)(param_1 + 0x298) = puVar7;
        }
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountPersonalStatusUpdate",""
        );
        return 0;
    }
    uVar8 = (**(code **)(param_1 + 0x1a8))(param_2);
    puVar10 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a0) + (uVar8 % *(ulonglong *)(param_1 + 0x198)) * 8);
    if (puVar10 != (ulonglong *)0x0) {
        while ((uVar8 != *puVar10 ||
                (iVar5 = (**(code **)(param_1 + 0x1b0))(param_2,puVar10 + 2), iVar5 == 0))) {
            puVar10 = (ulonglong *)puVar10[1];
            if (puVar10 == (ulonglong *)0x0) {
                return 0;
            }
        }
        if (puVar10 + 3 != (ulonglong *)0x0) {
            puVar4 = (undefined4 *)puVar10[3];
            FUN_1405dcb20(puVar4,*(undefined8 *)(param_2 + 2));
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",
                          &DAT_1409eacd4,*puVar4);
        }
    }
    return 0;
}



undefined8 FUN_1405e13a0(longlong param_1,int *param_2)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    undefined4 *puVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    ulonglong *puVar10;

    if (*param_2 == *(int *)(DAT_140c635f0 + 0x1668)) {
        psVar2 = *(short **)(param_2 + 2);
        puVar7 = (undefined8 *)0x0;
        lVar3 = *(longlong *)(param_1 + 0x2a0);
        if (psVar2 == (short *)0x0) {
            *(undefined8 *)(param_1 + 0x2a0) = 0;
        }
        else {
            sVar1 = *psVar2;
            puVar9 = puVar7;
            while (sVar1 != 0) {
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                sVar1 = psVar2[(longlong)puVar9];
            }
            puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 2 + 0x12,0);
            if (puVar6 != (undefined8 *)0x0) {
                puVar6[1] = puVar9;
                *puVar6 = &PTR_LAB_140b55060;
                puVar7 = puVar6;
            }
            puVar7 = puVar7 + 2;
            FUN_1407db590(puVar7,psVar2,(longlong)puVar9 * 2);
            *(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar7) = 0;
            *(undefined8 **)(param_1 + 0x2a0) = puVar7;
        }
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountPersonalStatusUpdate",""
        );
        return 0;
    }
    uVar8 = (**(code **)(param_1 + 0x1a8))(param_2);
    puVar10 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a0) + (uVar8 % *(ulonglong *)(param_1 + 0x198)) * 8);
    if (puVar10 != (ulonglong *)0x0) {
        while ((uVar8 != *puVar10 ||
                (iVar5 = (**(code **)(param_1 + 0x1b0))(param_2,puVar10 + 2), iVar5 == 0))) {
            puVar10 = (ulonglong *)puVar10[1];
            if (puVar10 == (ulonglong *)0x0) {
                return 0;
            }
        }
        if (puVar10 + 3 != (ulonglong *)0x0) {
            puVar4 = (undefined4 *)puVar10[3];
            FUN_1405dc9a0(puVar4,*(undefined8 *)(param_2 + 2));
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",
                          &DAT_1409eacd4,*puVar4);
        }
    }
    return 0;
}



undefined8 FUN_1405e1540(longlong param_1,int *param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;

    if (*param_2 != *(int *)(DAT_140c635f0 + 0x1668)) {
        uVar4 = (**(code **)(param_1 + 0x1a8))(param_2);
        puVar1 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x1a0) + (uVar4 % *(ulonglong *)(param_1 + 0x198)) * 8);
        while( true ) {
            if (puVar1 == (ulonglong *)0x0) {
                return 0;
            }
            if ((uVar4 == *puVar1) &&
                (iVar3 = (**(code **)(param_1 + 0x1b0))(param_2,puVar1 + 2), iVar3 != 0)) break;
            puVar1 = (ulonglong *)puVar1[1];
        }
        if (puVar1 + 3 == (ulonglong *)0x0) {
            return 0;
        }
        puVar2 = (undefined4 *)puVar1[3];
        puVar2[0x10] = param_2[1];
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",
                      &DAT_1409eacd4,*puVar2);
        return 0;
    }
    if (param_2[1] == 0) {
        if (*(int *)(param_1 + 0x290) == 1) {
            uVar5 = 0x86e35;
        }
        else {
            if (*(int *)(param_1 + 0x290) != 2) goto LAB_1405e15ae;
            uVar5 = 0x86e36;
        }
        uVar5 = FUN_14034bdd0(param_1,uVar5);
        FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
    }
    LAB_1405e15ae:
    iVar3 = param_2[1];
    *(int *)(param_1 + 0x290) = iVar3;
    if (*(int *)(param_1 + 0x2f0) == 4) {
        *(int *)(param_1 + 0x2f0) = iVar3;
    }
    if (*(int *)(param_1 + 0x290) != *(int *)(param_1 + 0x2f0)) {
        FUN_1405df720(param_1);
        return 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountPersonalStatusUpdate","");
    return 0;
}



undefined8 FUN_1405e1860(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = (**(code **)(param_1 + 0x1a8))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a0) + (uVar4 % *(ulonglong *)(param_1 + 0x198)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x1b0))(param_2,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    if (*(float *)(param_2 + 4) == 0.0) {
        *(undefined8 *)(puVar2 + 2) = 0;
    }
    else {
        if (puVar2 != (undefined4 *)&DAT_fffffffffffffff8) {
            FUN_1401e82f0();
        }
        FUN_1405dcee0(puVar2,1);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",&DAT_1409eacd4
            ,*puVar2);
    return 0;
}



undefined8 FUN_1405e1940(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = (**(code **)(param_1 + 0x1d0))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1c8) + (uVar4 % *(ulonglong *)(param_1 + 0x1c0)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x1d8))(param_2,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    FUN_1405dca60(puVar2,*(undefined8 *)(param_2 + 8));
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",&DAT_1409eacd4
            ,*puVar2);
    return 0;
}



undefined8 FUN_1405e1a00(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong *plVar8;

    uVar5 = (**(code **)(param_1 + 0x1a8))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a0) + (uVar5 % *(ulonglong *)(param_1 + 0x198)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar5 == *puVar1) && (iVar4 = (**(code **)(param_1 + 0x1b0))(param_2), iVar4 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    uVar6 = 0;
    uVar5 = *(ulonglong *)(puVar2 + 0x1c);
    if (uVar5 != 0) {
        plVar8 = *(longlong **)(puVar2 + 0x1a);
        uVar7 = uVar6;
        do {
            if ((*(int *)(*plVar8 + 8) == *(int *)(param_2 + 8)) &&
                (*(longlong *)(*plVar8 + 0x10) == *(longlong *)(param_2 + 0x10))) break;
            uVar7 = uVar7 + 1;
            plVar8 = plVar8 + 1;
        } while (uVar7 < uVar5);
    }
    if (uVar5 != 0) {
        plVar8 = *(longlong **)(puVar2 + 0x1a);
        do {
            if ((*(int *)(*plVar8 + 8) == *(int *)(param_2 + 8)) &&
                (*(longlong *)(*plVar8 + 0x10) == *(longlong *)(param_2 + 0x10))) {
                lVar3 = (*(longlong **)(puVar2 + 0x1a))[uVar6];
                if (lVar3 == 0) {
                    return 0;
                }
                if (*(uint *)(lVar3 + 0x24) == (uint)*(byte *)(param_2 + 0x18)) {
                    return 0;
                }
                *(uint *)(lVar3 + 0x24) = (uint)*(byte *)(param_2 + 0x18);
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),
                              "FriendshipAccountCharacterLevelUpdate",&DAT_1409eacf4,*puVar2);
                return 0;
            }
            uVar6 = uVar6 + 1;
            plVar8 = plVar8 + 1;
        } while (uVar6 < uVar5);
    }
    return 0;
}



ulonglong FUN_1405e2000(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x180))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x178) + (uVar3 % *(ulonglong *)(param_1 + 0x170)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x188))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



ulonglong FUN_1405e2090(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0x1f8))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1f0) + (uVar3 % *(ulonglong *)(param_1 + 0x1e8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x200))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[4];
}



ulonglong FUN_1405e2120(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 local_res10;

    local_res10 = param_2;
    uVar3 = (**(code **)(param_1 + 0x1d0))(&local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1c8) + (uVar3 % *(ulonglong *)(param_1 + 0x1c0)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x1d8))(&local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



longlong FUN_1405e21b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    longlong *plVar6;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6ab0);
    do {
        if (lVar1 == 0) {
            return 0;
        }
        uVar2 = *(ulonglong *)(lVar1 + 0x70);
        uVar5 = 0;
        if (uVar2 != 0) {
            plVar6 = *(longlong **)(lVar1 + 0x68);
            do {
                if ((((*(longlong *)(*plVar6 + 0x30) != 0) &&
                      (lVar3 = *(longlong *)(*plVar6 + 0x38), lVar3 != 0)) &&
                     (iVar4 = FUN_14018e2c0(param_2), iVar4 == 0)) &&
                    (iVar4 = FUN_14018e2c0(param_3,lVar3), iVar4 == 0)) {
                    return lVar1;
                }
                uVar5 = uVar5 + 1;
                plVar6 = plVar6 + 1;
            } while (uVar5 < uVar2);
        }
        lVar1 = *(longlong *)(lVar1 + 0x80);
    } while( true );
}



ulonglong FUN_1405e2270(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x220))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x218) + (uVar3 % *(ulonglong *)(param_1 + 0x210)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x228))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



ulonglong FUN_1405e2300(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x68))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x60) + (uVar3 % *(ulonglong *)(param_1 + 0x58)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x70))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



ulonglong FUN_1405e2380(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0xe0))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xd8) + (uVar3 % *(ulonglong *)(param_1 + 0xd0)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xe8))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



bool FUN_1405e2410(longlong param_1,undefined8 param_2,int param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    if (param_3 == 8) {
        uVar3 = (**(code **)(param_1 + 0x1f8))(param_2);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x1f0) + (uVar3 % *(ulonglong *)(param_1 + 0x1e8)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar3 == *puVar1) &&
                (iVar2 = (**(code **)(param_1 + 0x200))(param_2,puVar1 + 2), iVar2 != 0)) {
                if (puVar1 == (ulonglong *)&DAT_ffffffffffffffe0) {
                    return false;
                }
                return true;
            }
        }
    }
    else {
        uVar3 = (**(code **)(param_1 + 0xb8))();
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(param_1 + 0xb0) + (uVar3 % *(ulonglong *)(param_1 + 0xa8)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar3 == *puVar1) &&
                (iVar2 = (**(code **)(param_1 + 0xc0))(param_2,puVar1 + 2), iVar2 != 0)) {
                if (puVar1 + 4 == (ulonglong *)0x0) {
                    return false;
                }
                iVar2 = *(int *)(puVar1[4] + 0xd0);
                if (iVar2 != param_3) {
                    if ((param_3 != 0) && (param_3 != 3)) {
                        return false;
                    }
                    return iVar2 == 4;
                }
                return true;
            }
        }
    }
    return false;
}



void FUN_1405e2530(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 *param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
    ulonglong *puVar1;
    ulonglong **ppuVar2;
    short sVar3;
    undefined4 uVar4;
    ulonglong *puVar5;
    bool bVar6;
    int iVar7;
    undefined4 *puVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    undefined4 *puVar12;
    longlong lVar13;
    char *pcVar14;
    undefined *puVar15;
    undefined4 *local_res20;

    if ((((*(int *)param_2 != 0) && (param_2[1] != 0)) && (param_3 != 0)) &&
        (local_res20 = param_4, iVar7 = FUN_1404bc580(param_1 + 0xa0,param_2,&local_res20), iVar7 == 0)
            ) {
        puVar1 = (ulonglong *)(param_1 + 0x140);
        bVar6 = true;
        iVar7 = FUN_1404bc580(puVar1,param_2,&local_res20);
        puVar12 = (undefined4 *)0x0;
        puVar8 = local_res20;
        if (iVar7 == 0) {
            puVar8 = (undefined4 *)FUN_14018b280(0xe0);
            if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0;
                puVar8[0x2c] = 0;
                *(undefined8 *)(puVar8 + 0x2e) = 0;
                puVar8[0x30] = 0x17;
                *(undefined8 *)(puVar8 + 0x31) = 4;
                *(undefined8 *)(puVar8 + 0x34) = 0;
                *(undefined8 *)(puVar8 + 0x36) = 0;
                *(undefined8 *)(puVar8 + 1) = 0;
                *(undefined8 *)(puVar8 + 3) = 0;
                *(undefined8 *)(puVar8 + 5) = 0;
                *(undefined8 *)(puVar8 + 7) = 0;
                *(undefined8 *)(puVar8 + 9) = 0;
                *(undefined8 *)(puVar8 + 0xb) = 0;
                *(undefined8 *)(puVar8 + 0xd) = 0;
                *(undefined8 *)(puVar8 + 0xf) = 0;
                *(undefined2 *)(puVar8 + 0x11) = 0;
                FUN_1407e4830((longlong)puVar8 + 0x46,0,0x66);
                puVar12 = puVar8;
            }
            if (*(longlong *)(puVar12 + 0x34) == 0) {
                plVar9 = (longlong *)(param_1 + 0x270);
                lVar13 = *plVar9;
                while (lVar13 != 0) {
                    plVar9 = (longlong *)(*plVar9 + 0xd8);
                    lVar13 = *plVar9;
                }
                *(longlong **)(puVar12 + 0x34) = plVar9;
                *(undefined8 *)(puVar12 + 0x36) = 0;
                *plVar9 = (longlong)puVar12;
            }
            *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
            plVar9 = (longlong *)(param_1 + 0x118);
            *puVar12 = *(undefined4 *)(param_1 + 0x288);
            if (*plVar9 == *(longlong *)(param_1 + 0x120)) {
                FUN_1400290d0(plVar9);
            }
            uVar10 = (**(code **)(param_1 + 0x130))(puVar12);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x128) + (uVar10 % *(ulonglong *)(param_1 + 0x120)) * 8);
            puVar11 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar11 == (ulonglong *)0x0) {
                puVar11 = (ulonglong *)0x0;
            }
            else {
                puVar5 = *ppuVar2;
                *puVar11 = uVar10;
                puVar11[1] = (ulonglong)puVar5;
                uVar4 = *puVar12;
                puVar11[3] = (ulonglong)puVar12;
                *(undefined4 *)(puVar11 + 2) = uVar4;
            }
            *ppuVar2 = puVar11;
            *plVar9 = *plVar9 + 1;
            if (*puVar1 == *(ulonglong *)(param_1 + 0x148)) {
                FUN_1400290d0(puVar1);
            }
            uVar10 = (**(code **)(param_1 + 0x158))(param_2);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x150) + (uVar10 % *(ulonglong *)(param_1 + 0x148)) * 8);
            puVar11 = (ulonglong *)FUN_14018b280(0x28);
            bVar6 = false;
            puVar8 = puVar12;
            if (puVar11 == (ulonglong *)0x0) {
                *ppuVar2 = (ulonglong *)0x0;
                *puVar1 = *puVar1 + 1;
            }
            else {
                puVar5 = *ppuVar2;
                *puVar11 = uVar10;
                puVar11[1] = (ulonglong)puVar5;
                puVar11[2] = *param_2;
                uVar10 = param_2[1];
                puVar11[4] = (ulonglong)puVar12;
                puVar11[3] = uVar10;
                *ppuVar2 = puVar11;
                *puVar1 = *puVar1 + 1;
            }
        }
        puVar12 = puVar8 + 1;
        lVar13 = 0x21;
        param_3 = param_3 - (longlong)puVar12;
        do {
            if ((lVar13 == -0x7fffffdd) || (sVar3 = *(short *)(param_3 + (longlong)puVar12), sVar3 == 0))
            {
                if (lVar13 != 0) goto LAB_1405e279d;
                break;
            }
            *(short *)puVar12 = sVar3;
            puVar12 = (undefined4 *)((longlong)puVar12 + 2);
            lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar12 = (undefined4 *)((longlong)puVar12 + -2);
        LAB_1405e279d:
        *(undefined2 *)puVar12 = 0;
        lVar13 = DAT_140c65898;
        *(undefined2 *)((longlong)puVar8 + 0x46) = 0;
        *(ulonglong *)(puVar8 + 0x2c) = *param_2;
        *(ulonglong *)(puVar8 + 0x2e) = param_2[1];
        puVar8[0x30] = param_5;
        puVar8[0x31] = param_6;
        puVar8[0x32] = param_7;
        if (bVar6) {
            puVar15 = &DAT_1409eaadc;
            pcVar14 = "FriendshipSuggestedUpdate";
        }
        else {
            puVar15 = &DAT_1409eab0c;
            pcVar14 = "FriendshipSuggestedAdd";
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar13 + 0x7340),pcVar14,puVar15,*puVar8);
        uVar10 = *puVar1;
        lVar13 = FUN_140200220(0x345);
        if (lVar13 == 0) {
            iVar7 = 0x32;
        }
        else {
            iVar7 = *(int *)(lVar13 + 4);
        }
        if ((ulonglong)(longlong)iVar7 < uVar10) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipSuggestedRemove",
                          &DAT_1409eaabc,**(undefined4 **)(param_1 + 0x270));
            FUN_1400b6120(puVar1,*(longlong *)(param_1 + 0x270) + 0xb0);
            FUN_1400b6120(param_1 + 0x118,*(undefined8 *)(param_1 + 0x270));
            if (*(longlong *)(param_1 + 0x270) != 0) {
                FUN_1405dde00();
            }
        }
    }
    return;
}



ulonglong FUN_1405e28c0(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = (**(code **)(param_1 + 0x158))(param_2);
    uVar4 = uVar3 / *(ulonglong *)(param_1 + 0x148);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x150) + (uVar3 % *(ulonglong *)(param_1 + 0x148)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (uVar4 = (**(code **)(param_1 + 0x160))(param_2,puVar1 + 2), (int)uVar4 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return uVar4;
    }
    puVar2 = (undefined4 *)puVar1[4];
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipSuggestedRemove",&DAT_1409eaabc,
                  *puVar2);
    FUN_1400b6120(param_1 + 0x140,param_2);
    FUN_1400b6120(param_1 + 0x118,puVar2);
    uVar4 = FUN_1405dde00(puVar2);
    return uVar4;
}



ulonglong FUN_1405e29a0(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x130))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x128) + (uVar3 % *(ulonglong *)(param_1 + 0x120)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x138))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



void FUN_1405e2d90(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    uint *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined local_28 [8];
    longlong local_20;

    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x2f0);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nPresenceState",uVar10 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x2a0);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strDisplayName",uVar7);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x298);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strPublicNote",uVar7);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    iVar2 = *(int *)(param_1 + 0x2a8);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    lVar6 = FUN_14018f0e0(local_28,L"bIgnoreStrangerInvites");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
        FUN_140058710(lVar9);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    puVar4 = *(uint **)(lVar9 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar2 != 0);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(lVar9,0xfffffffd);
    FUN_14005ea50(lVar9,uVar7,*(longlong *)(lVar9 + 0x10) + -0x20,*(longlong *)(lVar9 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x2b8);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strAwayMsg",uVar7);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x2d8);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar5;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strBusyMsg",uVar7);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



void FUN_1405e3030(undefined8 param_1)

{
    longlong lVar1;
    ulonglong in_stack_ffffffffffffff58;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;

    FUN_14040b680(local_88,param_1,0);
    if (local_60 == local_58) {
        if (((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
             (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) == 0)) ||
            (lVar1 = FUN_1403d90d0(), lVar1 == 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,
                          &DAT_1409f393c,in_stack_ffffffffffffff58 & 0xffffffff00000000);
        }
        else {
            if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
                (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) != 0)) {
                FUN_1403d90d0();
            }
            FUN_1405de590();
        }
    }
    else {
        FUN_1405de4d0();
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_1405e3190(undefined8 param_1,undefined8 param_2,uint param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong local_a8;
    longlong local_a0;
    ulonglong local_98;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;

    FUN_14040b680(local_88,param_1,0);
    if (local_60 == local_58) {
        if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) == 0)) goto LAB_1405e3285;
        lVar1 = FUN_1403d90d0();
        if (lVar1 == 0) goto LAB_1405e3285;
        if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) == 0)) {
            lVar1 = 0;
        }
        else {
            lVar1 = FUN_1403d90d0();
        }
        local_a8 = *(longlong *)(lVar1 + 0x1a0);
        local_a0 = *(longlong *)(lVar1 + 0x1a8);
        uVar2 = 0x3c1;
    }
    else {
        uVar2 = 0x3c2;
        local_a8 = local_60;
        local_a0 = local_40;
    }
    local_98 = (ulonglong)param_3;
    FUN_1403f4740(DAT_140c65898,uVar2,&local_a8);
    LAB_1405e3285:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return;
}



void FUN_1405e3340(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22f02 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22f00,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    uVar5 = FUN_14018e820(local_50);
    FUN_1405de7a0(DAT_140c65898 + 0x6838,uVar5,0);
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e34c0(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22f12 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22f10,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    uVar5 = FUN_14018e820(local_50);
    FUN_1405de7a0(DAT_140c65898 + 0x6838,uVar5,1);
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e3640(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22ee2 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22ee0,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    uVar5 = FUN_14018e820(local_50);
    FUN_1405de7a0(DAT_140c65898 + 0x6838,uVar5,2);
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e37c0(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22ef2 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22ef0,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    uVar5 = FUN_14018e820(local_50);
    FUN_1405de7a0(DAT_140c65898 + 0x6838,uVar5,3);
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e39e0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    uint local_res8 [8];

    uVar2 = FUN_14034bdd0(param_1,0x4fc7e);
    iVar1 = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar2);
    if (iVar1 == 0) {
        local_res8[0] = 1;
    }
    else {
        uVar2 = FUN_14034bdd0();
        local_res8[0] = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar2);
        if (local_res8[0] != 0) {
            local_res8[0] = ~(*(uint *)(DAT_140c65898 + 0x6328) >> 1) & 1;
        }
    }
    FUN_1403f4900(DAT_140c65898,0xb8,local_res8);
    return;
}



void FUN_1405e3a70(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    int iVar5;
    longlong lVar6;
    longlong local_78;
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22ec2 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22ec0,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,&local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    iVar5 = FUN_14018e820(local_50);
    if (iVar5 != 0) {
        local_70 = 1;
        local_78 = (longlong)iVar5;
        FUN_1400161d0(DAT_140c635f0,0x3a1,&local_78);
    }
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e3c10(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    int iVar5;
    longlong lVar6;
    longlong local_78;
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22ed2 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22ed0,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,&local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    iVar5 = FUN_14018e820(local_50);
    if (iVar5 != 0) {
        local_70 = 0;
        local_78 = (longlong)iVar5;
        FUN_1400161d0(DAT_140c635f0,0x3a1,&local_78);
    }
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e3db0(undefined8 param_1)

{
    ulonglong uVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    int iVar5;
    longlong lVar6;
    longlong local_res18;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_50 = (undefined2 *)FUN_14018b280(0x10);
    lVar6 = 0;
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_30 = (undefined2 *)FUN_14018b280(0x10);
    local_20 = local_30 + 8;
    if (local_30 != (undefined2 *)0x0) {
        *local_30 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    do {
        psVar2 = &DAT_140b22eb2 + lVar6;
        lVar6 = lVar6 + 1;
    } while (*psVar2 != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar1 = lVar6 + 1;
    local_28 = local_30;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar3 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_70,&DAT_140b22eb0,lVar6);
    local_68 = (undefined2 *)(lVar6 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,local_58,local_38,local_78);
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    puVar4 = local_50;
    iVar5 = FUN_14018e820(local_50);
    if (iVar5 != 0) {
        local_res18 = (longlong)iVar5;
        FUN_1400161d0(DAT_140c635f0,0x3af,&local_res18);
    }
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    return;
}



void FUN_1405e3f40(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = DAT_140c65898;
    lVar2 = DAT_140c65898 + 0x6838;
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
        FUN_1405de2e0(lVar2,param_1,0);
    }
    if (*(int *)(lVar1 + 0x6b28) != 1) {
        FUN_1405df560(lVar2,1);
        return;
    }
    FUN_1405df560(lVar2,0);
    return;
}



void FUN_1405e3fa0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = DAT_140c65898;
    lVar2 = DAT_140c65898 + 0x6838;
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
        FUN_1405de2e0(lVar2,0,param_1);
    }
    if (*(int *)(lVar1 + 0x6b28) != 2) {
        FUN_1405df560(lVar2,2);
        return;
    }
    FUN_1405df560(lVar2,0);
    return;
}



undefined8 * FUN_1405e4000(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(600);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1400522d0;
    param_1[4] = &LAB_1400522e0;
    return param_1;
}



undefined8 * FUN_1405e4080(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(600);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1400195e0;
    param_1[4] = &LAB_1400195f0;
    return param_1;
}



undefined8 * FUN_1405e4100(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(600);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1404bc720;
    param_1[4] = &LAB_1404bc740;
    return param_1;
}



undefined8 * FUN_1405e4180(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x32);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1400522d0;
    param_1[4] = &LAB_1400522e0;
    return param_1;
}



undefined8 * FUN_1405e4200(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x32);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1404bc720;
    param_1[4] = &LAB_1404bc740;
    return param_1;
}



undefined8 * FUN_1405e4280(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(200);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1404bc720;
    param_1[4] = &LAB_1404bc740;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_1405e4300(undefined8 param_1,longlong *param_2)

{
    undefined8 *puVar1;

    _DAT_140c7e170 = &PTR_LAB_140b5e6e8;
    _DAT_140c7e178 = *param_2;
    DAT_140c7e180 = 2;
    _DAT_140c7e184 = *(undefined4 *)(param_2 + 1);
    _DAT_140c7e188 = 0;
    if (_DAT_140c7e178 != 0) {
        puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&DAT_140c7e178);
        *puVar1 = &DAT_140c7e170;
    }
    _DAT_140c7e170 = &PTR_LAB_140b55dd8;
    _DAT_140c7e190 = 300;
    uRam0000000140c7e194 = 300;
    uRam0000000140c7e198 = 300;
    uRam0000000140c7e19c = 300;
    _DAT_140c7e1a0 = 300;
    _DAT_140c7e1ac = 300;
    _DAT_140c7e1b0 = 0;
    _DAT_140c7e1b8 = 0;
    _DAT_140c7e1c0 = 0;
    return &DAT_140c7e170;
}



void FUN_1405e43c0(longlong param_1,undefined4 param_2)

{
    FUN_1405e4670(param_1,*(undefined8 *)(param_1 + 0x120),param_1,*(undefined2 *)(param_1 + 100));
    FUN_1404c10e0(param_1,param_2);
    return;
}



undefined8 FUN_1405e4400(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    longlong local_40;
    LPVOID local_38;
    undefined **local_28;
    longlong local_20;
    LPVOID local_18;

    local_40 = FUN_140203520(*(undefined4 *)(param_1 + 0x6c));
    if (local_40 == 0) {
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e1d560;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8afb8,0x2e,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    FUN_1404bd280(param_1 + 0x90,param_2,1);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405e4500(ulonglong param_1,undefined8 param_2)

{
    ulonglong **ppuVar1;
    ushort uVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong uVar7;

    FUN_1404c2960();
    FUN_1404c1d60(param_1,param_2);
    uVar2 = *(ushort *)(param_1 + 100);
    uVar7 = *(ulonglong *)(param_1 + 0x120);
    if ((uVar7 != 0) && (param_1 != 0)) {
        uVar5 = (*DAT_140c4df08)(&stack0x00000008);
        for (puVar6 = *(ulonglong **)(DAT_140c4df00 + (uVar5 % DAT_140c4def8) * 8);
             puVar6 != (ulonglong *)0x0; puVar6 = (ulonglong *)puVar6[1]) {
            if ((uVar5 == *puVar6) && (iVar4 = (*DAT_140c4df10)(&stack0x00000008), iVar4 != 0)) {
                if (puVar6 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1405e4647;
                break;
            }
        }
        if (_DAT_140c4def0 == DAT_140c4def8) {
            FUN_1400290d0(&DAT_140c4def0);
        }
        uVar5 = (*DAT_140c4df08)(&stack0x00000008);
        ppuVar1 = (ulonglong **)(DAT_140c4df00 + (uVar5 % DAT_140c4def8) * 8);
        puVar6 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *)0x0) {
            puVar3 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong)puVar3;
            puVar6[3] = param_1;
            puVar6[2] = uVar7;
        }
        *ppuVar1 = puVar6;
        _DAT_140c4def0 = _DAT_140c4def0 + 1;
    }
    LAB_1405e4647:
    if (*(longlong *)(DAT_140c4df18 + (ulonglong)uVar2 * 8) == 0) {
        *(ulonglong *)(DAT_140c4df18 + (ulonglong)uVar2 * 8) = param_1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405e4670(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong **ppuVar4;
    longlong local_res8;

    if (param_2 != 0) {
        local_res8 = param_2;
        uVar3 = (*DAT_140c4df08)(&local_res8);
        ppuVar4 = (ulonglong **)(DAT_140c4df00 + (uVar3 % DAT_140c4def8) * 8);
        puVar1 = *(ulonglong **)(DAT_140c4df00 + (uVar3 % DAT_140c4def8) * 8);
        while (puVar1 != (ulonglong *)0x0) {
            if ((uVar3 == **ppuVar4) && (iVar2 = (*DAT_140c4df10)(&local_res8,*ppuVar4 + 2), iVar2 != 0))
            {
                puVar1 = *ppuVar4;
                *ppuVar4 = (ulonglong *)puVar1[1];
                FUN_14018b900(puVar1,0);
                _DAT_140c4def0 = _DAT_140c4def0 + -1;
                break;
            }
            ppuVar4 = (ulonglong **)(*ppuVar4 + 1);
            puVar1 = *ppuVar4;
        }
    }
    if (*(longlong *)(DAT_140c4df18 + (ulonglong)param_4 * 8) == param_3) {
        *(undefined8 *)(DAT_140c4df18 + (ulonglong)param_4 * 8) = 0;
    }
    return;
}



void FUN_1405e4740(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong)param_1[1] < 6) {
        lVar2 = FUN_14018db00(*param_1,5,8);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] << 3);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = 5;
        return;
    }
    param_1[1] = 5;
    return;
}



ulonglong FUN_1405e47c0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    int *piVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int **ppiVar7;
    ulonglong uVar8;

    lVar1 = FUN_140245c00();
    if (((lVar1 != 0) && (lVar1 = FUN_1405be150(), lVar1 != 0)) &&
        ((*(byte *)(lVar1 + 0x10) & 8) != 0)) {
        if ((DAT_140c8afc0 & 1) == 0) {
            DAT_140c8afc0 = DAT_140c8afc0 | 1;
            lVar1 = FUN_140200220();
            if (lVar1 == 0) {
                uVar8 = 1;
                DAT_140c8afbc = 1;
            }
            else {
                DAT_140c8afbc = *(uint *)(lVar1 + 4);
                uVar8 = (ulonglong)DAT_140c8afbc;
            }
        }
        else {
            uVar8 = (ulonglong)DAT_140c8afbc;
        }
        if (1 < (uint)uVar8) {
            puVar2 = (undefined8 *)FUN_1405be260();
            uVar6 = 0;
            if (puVar2 == (undefined8 *)0x0) {
                uVar5 = 0;
            }
            else {
                uVar5 = puVar2[1];
            }
            if (uVar5 != 0) {
                ppiVar7 = (int **)*puVar2;
                do {
                    uVar4 = 0;
                    if (*(ulonglong *)(param_1 + 0x48) == 0) {
                        return 1;
                    }
                    piVar3 = *(int **)(param_1 + 0x40);
                    while (*piVar3 != **ppiVar7) {
                        uVar4 = uVar4 + 1;
                        piVar3 = piVar3 + 1;
                        if (*(ulonglong *)(param_1 + 0x48) <= uVar4) {
                            return 1;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    ppiVar7 = ppiVar7 + 1;
                } while (uVar6 < uVar5);
            }
            return uVar8 & 0xffffffff;
        }
    }
    return 1;
}



undefined8 * FUN_1405e48c0(undefined8 *param_1)

{
    undefined4 uVar1;

    param_1[1] = 0;
    *param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x444) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44c) = 1;
    *(undefined8 *)((longlong)param_1 + 0x454) = 0;
    *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x8a) = 1;
    FUN_1405e4ba0();
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_1407e4830(param_1 + 0x87,0,100);
    *(undefined4 *)(param_1 + 0x93) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x494) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x444) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44c) = 1;
    *(undefined8 *)((longlong)param_1 + 0x454) = 0;
    *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x464) = 0;
    uVar1 = DAT_140c636a8;
    *(undefined4 *)(param_1 + 0x8a) = 1;
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
    return param_1;
}



void FUN_1405e4980(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int **ppiVar5;
    int iVar6;
    undefined4 in_XMM6_Da;
    int iVar7;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar8 [16];

    auVar8 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    FUN_1405e4aa0();
    iVar7 = 0x3f800000;
    lVar3 = 0x42;
    ppiVar5 = (int **)(param_1 + 2);
    lVar4 = 0x42;
    do {
        piVar1 = *ppiVar5;
        iVar6 = iVar7;
        if (*piVar1 != 3) {
            iVar6 = 0;
        }
        piVar1[1] = iVar6;
        piVar1[2] = 0;
        *(undefined8 *)(piVar1 + 6) = 0;
        piVar1 = *ppiVar5;
        if (piVar1 != (int *)0x0) {
            *(undefined8 *)(piVar1 + 6) = 0;
            lVar2 = *(longlong *)(piVar1 + 4);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_14018b900(piVar1,0,param_3,param_4,auVar8);
        }
        ppiVar5 = ppiVar5 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    ppiVar5 = (int **)(param_1 + 0x45);
    do {
        piVar1 = *ppiVar5;
        iVar6 = iVar7;
        if (*piVar1 != 3) {
            iVar6 = 0;
        }
        piVar1[1] = iVar6;
        piVar1[2] = 0;
        *(undefined8 *)(piVar1 + 6) = 0;
        piVar1 = *ppiVar5;
        if (piVar1 != (int *)0x0) {
            *(undefined8 *)(piVar1 + 6) = 0;
            lVar4 = *(longlong *)(piVar1 + 4);
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            FUN_14018b900(piVar1,0);
        }
        ppiVar5 = ppiVar5 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = *param_1;
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return;
}



void FUN_1405e4aa0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (param_1[1] == 0) {
        param_1[1] = 0;
        return;
    }
    do {
        lVar1 = uVar4 * 8;
        *(undefined8 *)(*(longlong *)(lVar1 + *param_1) + 0x48) = 0;
        *(undefined8 *)(*(longlong *)(lVar1 + *param_1) + 0x80) = 0;
        lVar2 = *(longlong *)(lVar1 + *param_1);
        if (lVar2 != 0) {
            lVar3 = *(longlong *)(lVar2 + 0x78);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            lVar3 = *(longlong *)(lVar2 + 0x68);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            lVar3 = *(longlong *)(lVar2 + 0x58);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            lVar3 = *(longlong *)(lVar2 + 0x40);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            FUN_14018b900(lVar2,0);
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
        *(undefined8 *)(lVar1 + *param_1) = 0;
    } while (uVar4 < (ulonglong)param_1[1]);
    param_1[1] = 0;
    return;
}



void FUN_1405e4ba0(longlong param_1)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    int **ppiVar5;
    uint uVar6;
    int *piVar7;
    int iVar8;

    piVar7 = (int *)0x0;
    iVar8 = 0x3f800000;
    ppiVar5 = (int **)(param_1 + 0x10);
    piVar4 = piVar7;
    do {
        piVar2 = (int *)FUN_14018b280(0x20);
        if (piVar2 == (int *)0x0) {
            piVar2 = (int *)0x0;
        }
        else {
            iVar1 = FUN_14079e860(piVar4);
            *piVar2 = iVar1;
            *(undefined8 *)(piVar2 + 6) = 0;
            *(undefined8 *)(piVar2 + 4) = 0;
            if (*piVar2 == 3) {
                piVar2[2] = 0;
                piVar2[1] = iVar8;
                FUN_14079e900();
            }
            else {
                piVar2[2] = 0;
                piVar2[1] = 0;
                FUN_14079e900();
            }
        }
        uVar6 = (int)piVar4 + 1;
        piVar4 = (int *)(ulonglong)uVar6;
        *ppiVar5 = piVar2;
        ppiVar5 = ppiVar5 + 1;
    } while (uVar6 < 0x42);
    ppiVar5 = (int **)(param_1 + 0x228);
    piVar4 = piVar7;
    do {
        piVar3 = (int *)FUN_14018b280(0x20);
        piVar2 = piVar7;
        if (piVar3 != (int *)0x0) {
            iVar1 = FUN_14079e860();
            *piVar3 = iVar1;
            *(undefined8 *)(piVar3 + 6) = 0;
            *(undefined8 *)(piVar3 + 4) = 0;
            piVar2 = piVar3;
            if (*piVar3 == 3) {
                piVar3[2] = 0;
                piVar3[1] = iVar8;
                *(undefined8 *)(piVar3 + 6) = 0;
            }
            else {
                piVar3[2] = 0;
                piVar3[1] = 0;
                *(undefined8 *)(piVar3 + 6) = 0;
            }
        }
        uVar6 = (int)piVar4 + 1;
        piVar4 = (int *)(ulonglong)uVar6;
        *ppiVar5 = piVar2;
        ppiVar5 = ppiVar5 + 1;
    } while (uVar6 < 0x42);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405e4cd0(longlong *param_1,uint *param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    uint uVar3;
    int iVar4;
    int *piVar5;
    longlong *plVar6;
    uint *puVar7;
    int *piVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    uint uVar14;
    int *piVar16;
    ulonglong uVar17;
    int *piVar18;
    ulonglong uVar19;
    longlong lVar20;
    int *piVar21;
    ulonglong uVar22;
    longlong local_res10;
    longlong local_res18;
    int *piVar15;

    FUN_1405e4aa0();
    FUN_14004eed0(param_1);
    piVar21 = (int *)0x0;
    piVar18 = piVar21;
    if (*param_2 != 0) {
        do {
            piVar5 = (int *)FUN_14018b280(0x88);
            piVar15 = piVar21;
            if (piVar5 != (int *)0x0) {
                *(undefined8 *)(piVar5 + 0x12) = 0;
                *(undefined8 *)(piVar5 + 0x10) = 0;
                FUN_1407e4830(piVar5);
                *(undefined8 *)(piVar5 + 0x18) = 0;
                *(undefined8 *)(piVar5 + 0x16) = 0;
                *(undefined8 *)(piVar5 + 0x1c) = 0;
                *(undefined8 *)(piVar5 + 0x1a) = 0;
                *(undefined8 *)(piVar5 + 0x20) = 0;
                *(undefined8 *)(piVar5 + 0x1e) = 0;
                piVar15 = piVar5;
            }
            lVar12 = DAT_140c65b90;
            lVar10 = (longlong)piVar18 * 8;
            lVar20 = (longlong)piVar18 * 0x3c;
            *(int **)(lVar10 + *param_1) = piVar15;
            *(undefined4 *)(*(longlong *)(lVar10 + *param_1) + 8) =
                    *(undefined4 *)(lVar20 + *(longlong *)(param_2 + 2));
            *(undefined4 *)(*(longlong *)(lVar10 + *param_1) + 0x50) =
                    *(undefined4 *)(lVar20 + 4 + *(longlong *)(param_2 + 2));
            *(uint *)(*(longlong *)(lVar10 + *param_1) + 0xc) =
                    *(uint *)(lVar20 + 8 + *(longlong *)(param_2 + 2)) & 1;
            *(undefined4 *)(*(longlong *)(lVar10 + *param_1) + 0x10) =
                    *(undefined4 *)(lVar20 + 0xc + *(longlong *)(param_2 + 2));
            *(undefined4 *)(*(longlong *)(lVar10 + *param_1) + 0x14) =
                    *(undefined4 *)(lVar20 + 0x10 + *(longlong *)(param_2 + 2));
            lVar9 = *(longlong *)(param_2 + 2);
            lVar11 = *(longlong *)(lVar10 + *param_1);
            *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)(lVar20 + 0x14 + lVar9);
            *(undefined4 *)(lVar11 + 0x1c) = *(undefined4 *)(lVar20 + 0x18 + lVar9);
            *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar20 + 0x1c + lVar9);
            *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(lVar20 + 0x20 + lVar9);
            *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(lVar20 + 0x24 + lVar9);
            *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)(lVar20 + 0x28 + lVar9);
            *(undefined4 *)(lVar11 + 0x30) = *(undefined4 *)(lVar20 + 0x2c + lVar9);
            *(undefined4 *)(lVar11 + 0x34) = *(undefined4 *)(lVar20 + 0x30 + lVar9);
            *(undefined4 *)(lVar11 + 0x38) = *(undefined4 *)(lVar20 + 0x34 + lVar9);
            *(undefined4 *)(lVar11 + 0x3c) = *(undefined4 *)(lVar20 + 0x38 + lVar9);
            lVar9 = *(longlong *)(lVar12 + 0x10);
            uVar3 = *(uint *)(lVar20 + *(longlong *)(param_2 + 2));
            lVar12 = lVar9;
            lVar11 = *(longlong *)(lVar9 + 8);
            while (lVar11 != 0) {
                if (*(uint *)(lVar11 + 0x20) < uVar3) {
                    lVar11 = *(longlong *)(lVar11 + 0x18);
                }
                else {
                    lVar12 = lVar11;
                    lVar11 = *(longlong *)(lVar11 + 0x10);
                }
            }
            if ((lVar12 == lVar9) || (uVar3 < *(uint *)(lVar12 + 0x20))) {
                local_res18 = lVar9;
                plVar6 = &local_res18;
            }
            else {
                local_res10 = lVar12;
                plVar6 = &local_res10;
            }
            if ((*plVar6 != lVar9) && (lVar9 = *(longlong *)(*plVar6 + 0x28), lVar9 != 0)) {
                uVar3 = *(uint *)(lVar9 + 0xc);
                uVar14 = uVar3;
                if (uVar3 != 0) {
                    puVar7 = (uint *)(lVar9 + 0x20);
                    piVar15 = piVar21;
                    do {
                        uVar14 = (uint)piVar15;
                        if (*(uint *)(lVar20 + 4 + *(longlong *)(param_2 + 2)) < *puVar7) break;
                        uVar13 = (uint)piVar15 + 1;
                        piVar15 = (int *)(ulonglong)uVar13;
                        puVar7 = puVar7 + 0xc;
                        uVar14 = uVar3;
                    } while (uVar13 < uVar3);
                }
                *(uint *)(*(longlong *)(lVar10 + *param_1) + 0x54) = uVar14;
                piVar15 = piVar21;
                do {
                    if (DAT_140c63838 == (code *)0x0) {
                        if ((_DAT_140c654f8 != 0) || (iVar4 = FUN_1402459a0(), iVar4 < 0)) break;
                        uVar3 = (**(code **)(*DAT_140c63868 + 0x28))();
                    }
                    else {
                        uVar3 = (*DAT_140c63838)(&PTR_u_TradeskillSchematic2_140a6dd58);
                    }
                    if (uVar3 <= (uint)piVar15) break;
                    if (DAT_140c63848 == (code *)0x0) {
                        piVar5 = piVar21;
                        if (_DAT_140c654f8 == 0) {
                            iVar4 = FUN_1402459a0();
                            if (iVar4 < 0) {
                                piVar5 = (int *)0x0;
                            }
                            else {
                                piVar5 = (int *)(**(code **)(*DAT_140c63868 + 0x20))();
                            }
                        }
                    }
                    else {
                        piVar5 = (int *)(*DAT_140c63848)(&PTR_u_TradeskillSchematic2_140a6dd58);
                    }
                    lVar9 = *(longlong *)(lVar10 + *param_1);
                    if (piVar5[2] == *(int *)(lVar9 + 8)) {
                        if (*(int **)(lVar9 + 0x70) != (int *)0x0) {
                            piVar8 = *(int **)(lVar9 + 0x68);
                            piVar16 = piVar21;
                            do {
                                if (*piVar8 == *piVar5) goto LAB_1405e4fc9;
                                piVar16 = (int *)((longlong)piVar16 + 1);
                                piVar8 = piVar8 + 1;
                            } while (piVar16 < *(int **)(lVar9 + 0x70));
                        }
                        FUN_140003460();
                        LAB_1405e4fc9:
                        if (((*(byte *)(piVar5 + 8) & 1) != 0) &&
                            (uVar3 = *(uint *)(*(longlong *)(lVar10 + *param_1) + 0x54),
                                    (uint)piVar5[7] < uVar3 || piVar5[7] == uVar3)) {
                            lVar9 = FUN_1405e6000(param_1,piVar5[2]);
                            FUN_140003460(lVar9 + 0x40);
                        }
                    }
                    piVar15 = (int *)(ulonglong)((uint)piVar15 + 1);
                } while( true );
            }
            uVar3 = (int)piVar18 + 1;
            piVar18 = (int *)(ulonglong)uVar3;
        } while (uVar3 < *param_2);
    }
    if (param_2[4] != 0) {
        do {
            uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 6) + (longlong)piVar21 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c654f8 == 0) && (iVar4 = FUN_1402459a0(), -1 < iVar4)) {
                    lVar10 = (**(code **)(*DAT_140c63868 + 0x18))(DAT_140c63868,uVar2);
                    goto LAB_1405e5077;
                }
            }
            else {
                lVar10 = (*DAT_140c63840)(&PTR_u_TradeskillSchematic2_140a6dd58,uVar2,DAT_140c63858);
                LAB_1405e5077:
                if (lVar10 != 0) {
                    lVar9 = FUN_1405e6000(param_1,*(undefined4 *)(lVar10 + 8),1);
                    uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 6) + (longlong)piVar21 * 4);
                    lVar11 = FUN_1405e6000(param_1,*(undefined4 *)(lVar10 + 8),1);
                    lVar10 = *(longlong *)(lVar11 + 0x48);
                    lVar12 = FUN_14018db00(*(undefined8 *)(lVar11 + 0x40),lVar10 + 1,4);
                    *(undefined4 *)(lVar12 + lVar10 * 4) = uVar2;
                    if (*(longlong *)(lVar11 + 0x40) != lVar12) {
                        FUN_1407db590(lVar12,*(longlong *)(lVar11 + 0x40),*(longlong *)(lVar11 + 0x48) << 2);
                        if (*(longlong *)(lVar11 + 0x40) != 0) {
                            (**(code **)(*(longlong *)(*(longlong *)(lVar11 + 0x40) + -0x10) + 8))();
                        }
                        *(longlong *)(lVar11 + 0x40) = lVar12;
                    }
                    *(longlong *)(lVar11 + 0x48) = lVar10 + 1;
                    if ((*(uint *)(*(longlong *)(param_2 + 0xe) + ((ulonglong)piVar21 >> 5) * 4) >>
                                                                                                 ((uint)piVar21 & 0x1f) & 1) != 0) {
                        plVar6 = (longlong *)(lVar9 + 0x78);
                        uVar17 = *(ulonglong *)(lVar9 + 0x80);
                        uVar22 = *(longlong *)(lVar9 + 0x48) - 1;
                        uVar19 = uVar22 >> 3;
                        if ((uVar17 <= uVar19) && (uVar1 = uVar19 + 1, uVar17 < uVar1)) {
                            FUN_140033620(plVar6,uVar1);
                            for (; uVar17 < uVar1; uVar17 = uVar17 + 1) {
                                *(undefined *)(uVar17 + *plVar6) = 0;
                            }
                        }
                        *(byte *)(*plVar6 + uVar19) = *(byte *)(*plVar6 + uVar19) | '\x01' << ((byte)uVar22 & 7)
                                ;
                    }
                }
            }
            uVar3 = (uint)piVar21 + 1;
            piVar21 = (int *)(ulonglong)uVar3;
        } while (uVar3 < param_2[4]);
    }
    uVar17 = 0;
    if (param_2[8] != 0) {
        do {
            uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 10) + uVar17 * 0xc);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c654f8 == 0) && (iVar4 = FUN_1402459a0(), -1 < iVar4)) {
                    lVar10 = (**(code **)(*DAT_140c63868 + 0x18))(DAT_140c63868,uVar2);
                    goto LAB_1405e51fe;
                }
            }
            else {
                lVar10 = (*DAT_140c63840)(&PTR_u_TradeskillSchematic2_140a6dd58,uVar2,DAT_140c63858);
                LAB_1405e51fe:
                if (lVar10 != 0) {
                    lVar10 = FUN_1405e6000(param_1,*(undefined4 *)(lVar10 + 8),1);
                    FUN_1405e7080(lVar10 + 0x58);
                }
            }
            uVar3 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar3;
        } while (uVar3 < param_2[8]);
    }
    iVar4 = DAT_140c636a8;
    uVar3 = param_2[0x10];
    if (uVar3 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
    }
    else {
        *(undefined4 *)((longlong)param_1 + 0x49c) = 1;
        iVar4 = uVar3 * 1000 + DAT_140c636a8;
    }
    lVar10 = DAT_140c65898;
    *(int *)(param_1 + 0x94) = iVar4;
    FUN_1400ea3e0(*(undefined8 *)(lVar10 + 0x7340),"ProfessionsLoaded",&DAT_1409d135f);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProfessionUpdated",&DAT_1409d135e);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405e52f0(undefined8 param_1,int *param_2)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    int *piVar9;
    int *piVar10;
    uint uVar11;
    uint *puVar13;
    undefined8 uVar14;
    int iVar15;
    ulonglong uVar16;
    ulonglong in_stack_ffffffffffffff98;
    uint uVar17;
    ulonglong uVar18;
    undefined local_48 [8];
    ulonglong local_40;
    ulonglong uVar12;

    lVar6 = FUN_1405e6000();
    iVar5 = *(int *)(lVar6 + 0x50);
    iVar15 = *(int *)(lVar6 + 0xc);
    iVar1 = *(int *)(lVar6 + 0x54);
    *(int *)(lVar6 + 8) = *param_2;
    uVar4 = param_2[1];
    *(uint *)(lVar6 + 0x50) = uVar4;
    *(uint *)(lVar6 + 0xc) = param_2[2] & 1;
    *(int *)(lVar6 + 0x10) = param_2[3];
    *(int *)(lVar6 + 0x14) = param_2[4];
    *(int *)(lVar6 + 0x18) = param_2[5];
    *(int *)(lVar6 + 0x1c) = param_2[6];
    *(int *)(lVar6 + 0x20) = param_2[7];
    *(int *)(lVar6 + 0x24) = param_2[8];
    *(int *)(lVar6 + 0x28) = param_2[9];
    *(int *)(lVar6 + 0x2c) = param_2[10];
    *(int *)(lVar6 + 0x30) = param_2[0xb];
    *(int *)(lVar6 + 0x34) = param_2[0xc];
    *(int *)(lVar6 + 0x38) = param_2[0xd];
    *(int *)(lVar6 + 0x3c) = param_2[0xe];
    lVar7 = FUN_1405be150();
    lVar3 = DAT_140c65898;
    uVar17 = (uint)(in_stack_ffffffffffffff98 >> 0x20);
    if (lVar7 == 0) {
        return;
    }
    uVar2 = *(uint *)(lVar7 + 0xc);
    uVar16 = 0;
    if (uVar2 != 0) {
        puVar13 = (uint *)(lVar7 + 0x20);
        uVar12 = uVar16;
        do {
            if (uVar4 < *puVar13) goto LAB_1405e53d3;
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            puVar13 = puVar13 + 0xc;
        } while (uVar11 < uVar2);
    }
    uVar12 = (ulonglong)uVar2;
    LAB_1405e53d3:
    *(int *)(lVar6 + 0x54) = (int)uVar12;
    if (*(longlong *)(lVar3 + 0x78) != 0) {
        if (*(int *)(lVar6 + 0xc) != iVar15) {
            uVar14 = 0xeacc;
            if (iVar15 != 0) {
                uVar14 = 0x34baa;
            }
            uVar14 = FUN_14034bdd0(uVar12,uVar14);
            uVar8 = FUN_14034bdd0();
            FUN_14018efa0(local_48,uVar14,uVar8);
            uVar12 = local_40;
            uVar18 = 0;
            FUN_140003890(DAT_140c658a0,2,0,local_40,(ulonglong)uVar17 << 0x20,0);
            in_stack_ffffffffffffff98 = uVar12;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"TradeSkillFloater",&DAT_1409eeefc,
                          *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),uVar12);
            *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
            if (*(int *)(lVar6 + 0xc) != 0) {
                if (*(int *)(lVar7 + 0x14) != 0) {
                    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
                    FUN_140437a10(DAT_140c658d8,*(int *)(lVar7 + 0x14),0,0,in_stack_ffffffffffffff98,
                                  uVar18 & 0xffffffff00000000,1);
                }
                if (((*(byte *)(lVar7 + 0x10) & 2) == 0) && (*param_2 != 0x16)) {
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"TradeSkills_Learned",&DAT_1409ed9dc
                    );
                }
            }
            if (uVar12 != 0) {
                FUN_14018b900(uVar12,0);
            }
        }
        if (*(int *)(lVar6 + 0x50) != iVar5) {
            uVar14 = FUN_14034bdd0();
            uVar8 = FUN_14034bdd0();
            FUN_14018efa0(local_48,uVar14,*(int *)(lVar6 + 0x50) - iVar5,uVar8);
            uVar12 = local_40;
            FUN_140003890(DAT_140c658a0,2,0,local_40,in_stack_ffffffffffffff98 & 0xffffffff00000000,0);
            in_stack_ffffffffffffff98 = uVar12;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"TradeSkillFloater",&DAT_1409eeefc,
                          *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),uVar12);
            if (uVar12 != 0) {
                FUN_14018b900(uVar12,0);
            }
        }
        if (*(int *)(lVar6 + 0x54) != iVar1) {
            uVar14 = FUN_14034bdd0();
            uVar8 = FUN_14034bdd0();
            FUN_14018efa0(local_48,uVar14,uVar8,*(undefined4 *)(lVar6 + 0x54));
            FUN_140003890(DAT_140c658a0,2,0,local_40,in_stack_ffffffffffffff98 & 0xffffffff00000000,0);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"TradeSkillFloater",&DAT_1409eeefc,
                          *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),local_40);
            uVar12 = uVar16;
            do {
                if (DAT_140c63838 == (code *)0x0) {
                    if ((_DAT_140c654f8 != 0) || (iVar5 = FUN_1402459a0(), iVar5 < 0)) goto LAB_1405e56f9;
                    uVar4 = (**(code **)(*DAT_140c63868 + 0x28))();
                }
                else {
                    uVar4 = (*DAT_140c63838)(&PTR_u_TradeskillSchematic2_140a6dd58,DAT_140c63858);
                }
                if (uVar4 <= (uint)uVar12) goto LAB_1405e56f9;
                piVar9 = (int *)FUN_140245c60();
                if (piVar9[2] == *param_2) {
                    if (*(ulonglong *)(lVar6 + 0x70) != 0) {
                        piVar10 = *(int **)(lVar6 + 0x68);
                        uVar18 = uVar16;
                        do {
                            if (*piVar10 == *piVar9) goto LAB_1405e56ae;
                            uVar18 = uVar18 + 1;
                            piVar10 = piVar10 + 1;
                        } while (uVar18 < *(ulonglong *)(lVar6 + 0x70));
                    }
                    FUN_140003460();
                    LAB_1405e56ae:
                    if (((*(byte *)(piVar9 + 8) & 1) != 0) &&
                        ((uint)piVar9[7] < *(uint *)(lVar6 + 0x54) || piVar9[7] == *(uint *)(lVar6 + 0x54))) {
                        if (*(ulonglong *)(lVar6 + 0x48) != 0) {
                            piVar10 = *(int **)(lVar6 + 0x40);
                            uVar18 = uVar16;
                            do {
                                if (*piVar10 == *piVar9) goto LAB_1405e56f2;
                                uVar18 = uVar18 + 1;
                                piVar10 = piVar10 + 1;
                            } while (uVar18 < *(ulonglong *)(lVar6 + 0x48));
                        }
                        FUN_1405e5900(param_1,piVar9[2],*piVar9);
                    }
                }
                LAB_1405e56f2:
                uVar12 = (ulonglong)((uint)uVar12 + 1);
            } while( true );
        }
    }
    LAB_1405e5710:
    if (*param_2 != 0x16) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProfessionUpdated",&DAT_1409d135e);
    }
    return;
    LAB_1405e56f9:
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    goto LAB_1405e5710;
}



void FUN_1405e5760(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;

    lVar1 = FUN_140245c00(param_2[1]);
    if ((lVar1 != 0) && (lVar1 = FUN_1405e6000(param_1), lVar1 != 0)) {
        uVar3 = 0;
        if (*(ulonglong *)(lVar1 + 0x60) != 0) {
            piVar2 = *(int **)(lVar1 + 0x58);
            do {
                if (*piVar2 == param_2[1]) {
                    FUN_1405e7160(lVar1 + 0x58);
                    break;
                }
                uVar3 = uVar3 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar3 < *(ulonglong *)(lVar1 + 0x60));
        }
        FUN_1405e5ae0(param_1,*param_2,param_2[1]);
    }
    return;
}



void FUN_1405e57f0(longlong param_1,uint *param_2)

{
    float fVar1;
    int *piVar2;
    uint uVar3;
    ulonglong uVar4;
    int **ppiVar5;
    longlong lVar6;
    int iVar7;

    uVar4 = 0;
    ppiVar5 = (int **)(param_1 + 0x10);
    lVar6 = 0x42;
    do {
        piVar2 = *ppiVar5;
        if (*piVar2 == 3) {
            iVar7 = 0x3f800000;
        }
        else {
            iVar7 = 0;
        }
        ppiVar5 = ppiVar5 + 1;
        piVar2[1] = iVar7;
        piVar2[2] = 0;
        *(undefined8 *)(piVar2 + 6) = 0;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*param_2 != 0) {
        do {
            lVar6 = *(longlong *)(param_2 + 2);
            uVar3 = *(uint *)(lVar6 + uVar4 * 0x18);
            if (uVar3 < 0x42) {
                fVar1 = *(float *)(lVar6 + 0x10 + uVar4 * 0x18);
                piVar2 = *(int **)(param_1 + 0x10 + (ulonglong)uVar3 * 8);
                if (((*(int *)(lVar6 + 4 + uVar4 * 0x18) == 0) && (*(int *)(lVar6 + 8 + uVar4 * 0x18) == 0))
                    && (*(int *)(lVar6 + 0xc + uVar4 * 0x18) == 0)) {
                    iVar7 = *piVar2;
                    if (iVar7 == 0) {
                        piVar2[2] = 1;
                    }
                    else if (iVar7 == 1) {
                        piVar2[2] = *(int *)(lVar6 + 0x14 + uVar4 * 0x18);
                    }
                    else if (iVar7 == 2) {
                        piVar2[1] = (int)(fVar1 + (float)piVar2[1]);
                    }
                    else if (iVar7 == 3) {
                        piVar2[1] = (int)(fVar1 * (float)piVar2[1]);
                    }
                }
                else {
                    FUN_14079e250();
                }
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *param_2);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405e5900(undefined8 param_1,ulonglong param_2,undefined4 param_3,int param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 local_res18 [4];
    undefined local_118 [8];
    longlong local_110;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    local_res18[0] = param_3;
    lVar3 = FUN_1405e6000(param_1,param_2,1);
    FUN_140003460(lVar3 + 0x40,local_res18);
    if ((param_4 == 0) && (lVar3 = FUN_140245c00(param_3), lVar3 != 0)) {
        uVar1 = *(undefined4 *)(lVar3 + 0xc);
        iVar2 = FUN_140444550(DAT_140c658f0,uVar1);
        if ((iVar2 != 0) &&
            ((lVar3 = FUN_1402096e0(uVar1), lVar3 != 0 &&
                                            (uVar4 = FUN_14034bdd0(), (int)(param_2 & 0xffffffff) != 0x16)))) {
            FUN_1400b7210(local_f8,&DAT_140b22f90);
            uVar7 = 0;
            local_f8[0] = &PTR_FUN_140b69230;
            local_38 = ZEXT816(0);
            local_28 = (undefined2 *)0x0;
            puVar5 = (undefined2 *)FUN_14018b280(0x10);
            local_28 = puVar5 + 8;
            local_38 = CONCAT88(puVar5,puVar5);
            if (puVar5 != (undefined2 *)0x0) {
                *puVar5 = 0;
            }
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                uVar7 = FUN_1404ddaf0(lVar6,*(undefined4 *)(lVar3 + 0xb0));
            }
            FUN_1400b7480(local_f8,uVar7);
            lVar3 = FUN_1400b7660(local_f8);
            FUN_14018efa0(local_118,uVar4,*(undefined8 *)(lVar3 + 8));
            FUN_140003890(DAT_140c658a0,2,0,local_110,0,0);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CraftingSchematicLearned",
                          &DAT_1409ef22c,param_2 & 0xffffffff,param_3);
            if (local_110 != 0) {
                FUN_14018b900(local_110,0);
            }
            if (local_38._0_8_ != 0) {
                FUN_14018b900(local_38._0_8_,0);
            }
            FUN_1400b7390(local_f8);
        }
    }
    return;
}



void FUN_1405e5ae0(longlong *param_1,int param_2,int param_3)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    uVar4 = 0;
    if (param_1[1] != 0) {
        while (*(int *)(*(longlong *)(*param_1 + uVar4 * 8) + 8) != param_2) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            if ((ulonglong)param_1[1] <= uVar4) {
                return;
            }
        }
        lVar1 = *(longlong *)(*param_1 + uVar4 * 8);
        if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x48) != 0)) {
            piVar2 = *(int **)(lVar1 + 0x40);
            while (*piVar2 != param_3) {
                uVar3 = uVar3 + 1;
                piVar2 = piVar2 + 1;
                if (*(ulonglong *)(lVar1 + 0x48) <= uVar3) {
                    return;
                }
            }
            FUN_1401c2f20(lVar1 + 0x40);
            if (param_2 != 0x16) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProfessionUpdated",&DAT_1409d135e);
                return;
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405e5b90(longlong param_1,undefined4 param_2)

{
    int *piVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    int *piVar8;
    uint uVar9;
    undefined4 *puVar10;
    uint uVar11;
    undefined auStack632 [32];
    undefined4 local_258;
    longlong local_248;
    undefined local_238 [8];
    undefined local_230 [148];
    undefined4 local_19c [85];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack632;
    if ((DAT_140dc352c & 1) == 0) {
        DAT_140dc352c = DAT_140dc352c | 1;
        _DAT_140dc3534 = 0;
    }
    if ((DAT_140dc352c & 2) == 0) {
        DAT_140dc352c = DAT_140dc352c | 2;
        _DAT_140dc353c = 0;
    }
    lVar4 = FUN_140245c00(param_2);
    if ((lVar4 != 0) && (local_248 = FUN_1405be150(), local_248 != 0)) {
        FUN_1400b52a0(local_230);
        FUN_1407e4830(local_238,0,0x1f0);
        FUN_1407e4830(local_230,0,0x138);
        FUN_1407e4830(local_19c,0,0x90);
        puVar10 = local_19c;
        for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = 0xc5;
            puVar10 = puVar10 + 1;
        }
        lVar7 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar4 + 0xc),local_238);
        if (lVar7 != 0) {
            uVar11 = 0;
            piVar8 = (int *)(lVar4 + 0x24);
            do {
                if ((*piVar8 != 0) && (uVar3 = piVar8[5], uVar3 != 0)) {
                    if (((*(int *)(param_1 + 0x220) == 0) ||
                         (piVar1 = *(int **)(param_1 + 0x260), *piVar1 != 1)) ||
                        ((piVar1[2] == 0 &&
                          ((*(longlong *)(piVar1 + 6) == 0 || (*(int *)(*(longlong *)(piVar1 + 4) + 0x10) == 0))
                          )))) {
                        FUN_14079e710(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(lVar4 + 8),
                                      *(undefined4 *)(lVar7 + 0x144));
                    }
                    lVar5 = FUN_1400b5df0(DAT_140c658f0);
                    if (lVar5 != 0) {
                        local_258 = *(undefined4 *)(lVar5 + 0x144);
                        iVar2 = FUN_1405e6300(param_1,6);
                        if ((*(byte *)(local_248 + 0x10) & 4) == 0) {
                            if (_DAT_140dc353c == 0) {
                                _DAT_140dc353c = 1;
                                uVar6 = FUN_140200220();
                                if (uVar6 == 0) {
                                    DAT_140dc3538 = 0;
                                }
                                else {
                                    DAT_140dc3538 = *(uint *)(uVar6 + 8);
                                    uVar6 = (ulonglong)DAT_140dc3538;
                                }
                            }
                            else {
                                uVar6 = (ulonglong)DAT_140dc3538;
                            }
                        }
                        else if (_DAT_140dc3534 == 0) {
                            _DAT_140dc3534 = 1;
                            uVar6 = FUN_140200220();
                            if (uVar6 == 0) {
                                DAT_140dc3530 = 0;
                            }
                            else {
                                DAT_140dc3530 = *(uint *)(uVar6 + 4);
                                uVar6 = (ulonglong)DAT_140dc3530;
                            }
                        }
                        else {
                            uVar6 = (ulonglong)DAT_140dc3530;
                        }
                        uVar9 = uVar3;
                        if ((uint)uVar6 < uVar3) {
                            uVar9 = (uint)uVar6;
                        }
                        if (uVar9 + iVar2 < uVar3) {
                            uVar9 = uVar3 - iVar2;
                        }
                        uVar3 = FUN_1403ac840(DAT_140c65898 + 0xa0);
                        if (uVar3 < uVar9) break;
                    }
                }
                uVar11 = uVar11 + 1;
                piVar8 = piVar8 + 1;
            } while (uVar11 < 5);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack632);
    return;
}



ulonglong FUN_1405e5e70(longlong *param_1,int param_2)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar1 = FUN_140245c00();
    if (lVar1 != 0) {
        uVar4 = 0;
        if (param_1[1] != 0) {
            uVar3 = uVar4;
            do {
                if (*(int *)(*(longlong *)(*param_1 + uVar3 * 8) + 8) == *(int *)(lVar1 + 8)) {
                    lVar1 = *(longlong *)(*param_1 + uVar3 * 8);
                    if (lVar1 == 0) {
                        return 0;
                    }
                    if (*(ulonglong *)(lVar1 + 0x48) != 0) {
                        piVar2 = *(int **)(lVar1 + 0x40);
                        while (*piVar2 != param_2) {
                            uVar4 = uVar4 + 1;
                            piVar2 = piVar2 + 1;
                            if (*(ulonglong *)(lVar1 + 0x48) <= uVar4) {
                                return 0;
                            }
                        }
                        uVar4 = 1;
                    }
                    return uVar4;
                }
                uVar3 = (ulonglong)((int)uVar3 + 1);
            } while (uVar3 < (ulonglong)param_1[1]);
        }
    }
    return 0;
}



undefined8 FUN_1405e5f20(longlong *param_1,int param_2,undefined (*param_3) [16])

{
    int *piVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = FUN_140245c00();
    if (lVar2 != 0) {
        uVar4 = 0;
        if (param_1[1] != 0) {
            uVar5 = uVar4;
            do {
                if (*(int *)(*(longlong *)(*param_1 + uVar5 * 8) + 8) == *(int *)(lVar2 + 8)) {
                    lVar2 = *(longlong *)(*param_1 + uVar5 * 8);
                    if (lVar2 == 0) {
                        return 0;
                    }
                    if (*(ulonglong *)(lVar2 + 0x60) == 0) {
                        return 0;
                    }
                    piVar1 = *(int **)(lVar2 + 0x58);
                    piVar3 = piVar1;
                    do {
                        if (*piVar3 == param_2) {
                            *param_3 = ZEXT816(CONCAT44(piVar1[uVar4 * 3 + 2],piVar1[uVar4 * 3 + 1]));
                            return 1;
                        }
                        uVar4 = uVar4 + 1;
                        piVar3 = piVar3 + 3;
                    } while (uVar4 < *(ulonglong *)(lVar2 + 0x60));
                    return 0;
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < (ulonglong)param_1[1]);
        }
    }
    return 0;
}



ulonglong FUN_1405e6000(longlong *param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (param_1[1] != 0) {
        uVar3 = uVar5;
        do {
            if (*(int *)(*(longlong *)(*param_1 + uVar3 * 8) + 8) == param_2) {
                return *(ulonglong *)(*param_1 + uVar3 * 8);
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    if (param_3 == 0) {
        return 0;
    }
    uVar3 = FUN_14018b280(0x88,0);
    if (uVar3 != 0) {
        *(undefined8 *)(uVar3 + 0x48) = 0;
        *(undefined8 *)(uVar3 + 0x40) = 0;
        FUN_1407e4830(uVar3,0,0x58);
        *(undefined8 *)(uVar3 + 0x60) = 0;
        *(undefined8 *)(uVar3 + 0x58) = 0;
        *(undefined8 *)(uVar3 + 0x70) = 0;
        *(undefined8 *)(uVar3 + 0x68) = 0;
        *(undefined8 *)(uVar3 + 0x80) = 0;
        *(undefined8 *)(uVar3 + 0x78) = 0;
        uVar5 = uVar3;
    }
    *(int *)(uVar5 + 8) = param_2;
    *(undefined8 *)(uVar5 + 0x50) = 0;
    *(undefined4 *)(uVar5 + 0xc) = 0;
    lVar2 = param_1[1];
    lVar1 = lVar2 + 1;
    lVar4 = FUN_14018db00(*param_1,lVar1,8);
    *(ulonglong *)(lVar4 + lVar2 * 8) = uVar5;
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] << 3);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar1;
    return uVar5;
}



ulonglong FUN_1405e6140(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    int *piVar1;
    int *piVar2;
    float *pfVar3;
    longlong lVar4;
    ulonglong uVar5;
    int iVar6;
    ulonglong uVar7;
    float fVar8;
    float fVar9;

    uVar5 = (ulonglong)param_2;
    if (0x41 < uVar5) {
        return 0;
    }
    piVar1 = *(int **)(param_1 + 0x10 + uVar5 * 8);
    iVar6 = 0;
    uVar7 = FUN_14079e410(piVar1,param_3,param_4);
    fVar9 = (float)uVar7;
    if (*(int *)(param_1 + 0x220) == iVar6) goto LAB_1405e621c;
    piVar2 = *(int **)(param_1 + 0x228 + uVar5 * 8);
    iVar6 = *piVar2;
    if (iVar6 == 2) {
        fVar8 = 0.0;
        LAB_1405e61b6:
        if (iVar6 == 3) {
            fVar8 = fVar8 * (float)piVar2[1];
        }
        else {
            fVar8 = fVar8 + (float)piVar2[1];
        }
        lVar4 = *(longlong *)(piVar2 + 6);
        if (lVar4 != 0) {
            pfVar3 = (float *)(*(longlong *)(piVar2 + 4) + 0xc);
            do {
                if (iVar6 == 3) {
                    fVar8 = fVar8 * *pfVar3;
                }
                else {
                    fVar8 = fVar8 + *pfVar3;
                }
                pfVar3 = pfVar3 + 5;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
    }
    else {
        fVar8 = 1.0;
        if (iVar6 == 3) goto LAB_1405e61b6;
    }
    if (*piVar1 == 3) {
        return uVar7 & 0xffffffff00000000 | (ulonglong)(uint)(fVar9 * fVar8);
    }
    fVar9 = fVar9 + fVar8;
    LAB_1405e621c:
    return uVar7 & 0xffffffff00000000 | (ulonglong)(uint)fVar9;
}



ulonglong FUN_1405e6230(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    float *pfVar4;
    longlong lVar5;
    ulonglong uVar6;
    float fVar7;
    float fVar8;

    piVar2 = *(int **)(param_1 + 0x10 + (longlong)param_2 * 8);
    uVar6 = FUN_14079e630(piVar2,param_3,param_4);
    fVar8 = (float)uVar6;
    if (*(int *)(param_1 + 0x220) == 0) goto LAB_1405e62e7;
    piVar3 = *(int **)(param_1 + 0x228 + (longlong)param_2 * 8);
    iVar1 = *piVar3;
    if (iVar1 == 2) {
        fVar7 = 0.0;
        LAB_1405e6288:
        if (iVar1 == 3) {
            fVar7 = fVar7 * (float)piVar3[1];
        }
        else {
            fVar7 = fVar7 + (float)piVar3[1];
        }
        lVar5 = *(longlong *)(piVar3 + 6);
        if (lVar5 != 0) {
            pfVar4 = (float *)(*(longlong *)(piVar3 + 4) + 0xc);
            do {
                if (iVar1 == 3) {
                    fVar7 = fVar7 * *pfVar4;
                }
                else {
                    fVar7 = fVar7 + *pfVar4;
                }
                pfVar4 = pfVar4 + 5;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
    }
    else {
        fVar7 = 1.0;
        if (iVar1 == 3) goto LAB_1405e6288;
    }
    if (*piVar2 == 3) {
        return uVar6 & 0xffffffff00000000 | (ulonglong)(uint)(fVar8 * fVar7);
    }
    fVar8 = fVar8 + fVar7;
    LAB_1405e62e7:
    return uVar6 & 0xffffffff00000000 | (ulonglong)(uint)fVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405e6300(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    float *pfVar4;
    longlong lVar5;
    ulonglong uVar6;
    float fVar7;
    float fVar8;

    uVar6 = (ulonglong)param_2;
    if (0x41 < uVar6) {
        return 0;
    }
    if (*(int *)(param_1 + 0x220) == 0) {
        fVar7 = (float)FUN_14079e410(*(undefined8 *)(param_1 + 0x10 + uVar6 * 8),param_3,param_4,param_5
        );
        return (longlong)(fVar7 + _DAT_140c4cca8);
    }
    piVar2 = *(int **)(param_1 + 0x10 + uVar6 * 8);
    fVar7 = (float)FUN_14079e410(piVar2,param_3,param_4,param_5);
    piVar3 = *(int **)(param_1 + 0x228 + uVar6 * 8);
    iVar1 = *piVar3;
    if (iVar1 == 2) {
        fVar8 = 0.0;
    }
    else {
        fVar8 = 1.0;
        if (iVar1 != 3) goto LAB_1405e63bc;
    }
    if (iVar1 == 3) {
        fVar8 = fVar8 * (float)piVar3[1];
    }
    else {
        fVar8 = fVar8 + (float)piVar3[1];
    }
    lVar5 = *(longlong *)(piVar3 + 6);
    if (lVar5 != 0) {
        pfVar4 = (float *)(*(longlong *)(piVar3 + 4) + 0xc);
        do {
            if (iVar1 == 3) {
                fVar8 = fVar8 * *pfVar4;
            }
            else {
                fVar8 = fVar8 + *pfVar4;
            }
            pfVar4 = pfVar4 + 5;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    LAB_1405e63bc:
    if (*piVar2 != 3) {
        return (longlong)(DAT_140c4a7e8 + fVar8 + fVar7);
    }
    return (longlong)(DAT_140c4a7e8 + fVar8 * fVar7);
}



void FUN_1405e6430(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    int *piVar1;

    if (((*(int *)(param_1 + 0x220) != 0) && (piVar1 = *(int **)(param_1 + 0x260), *piVar1 == 1)) &&
        ((piVar1[2] != 0 ||
          ((*(longlong *)(piVar1 + 6) != 0 && (*(int *)(*(longlong *)(piVar1 + 4) + 0x10) != 0)))))) {
        return;
    }
    FUN_14079e710(*(undefined8 *)(param_1 + 0x48),param_3,param_4,param_5);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1405e6480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar5;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar6;
    undefined4 in_XMM8_Db;
    undefined4 uVar7;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    float fVar8;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined4 in_XMM10_Da;
    float fVar9;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined auVar10 [16];
    undefined auVar11 [16];
    undefined auVar12 [16];
    undefined auVar13 [16];
    undefined auVar14 [16];

    if (DAT_140c65898 == 0) {
        return 0;
    }
    auVar14 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar13 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    fVar5 = 0.0;
    auVar12 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    auVar11 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
    auVar10 = CONCAT412(in_XMM10_Dd,CONCAT48(in_XMM10_Dc,CONCAT44(in_XMM10_Db,in_XMM10_Da)));
    fVar9 = 1.0;
    fVar6 = 0.0;
    uVar7 = 0;
    uVar1 = FUN_1403d2140(DAT_140c65898,0x27,param_3,param_4,auVar10,auVar11,auVar12,auVar13,auVar14);
    lVar3 = DAT_140c65898;
    fVar4 = (float)(ulonglong)uVar1 * 0.01;
    if (fVar9 <= (float)(ulonglong)uVar1 * 0.01) {
        fVar4 = fVar9;
    }
    fVar8 = fVar5;
    if (fVar5 <= fVar4) {
        fVar8 = fVar4;
    }
    iVar2 = FUN_1403d2140(DAT_140c65898,0x16,param_3,param_4,auVar10,auVar11,auVar12,auVar13,auVar14);
    if (iVar2 == 0) {
        FUN_1403d2140(lVar3,0x15,param_3,param_4,auVar10,auVar11,auVar12,auVar13,auVar14);
        goto LAB_1405e6573;
    }
    if ((DAT_140dc3540 & 1) == 0) {
        DAT_140dc3540 = DAT_140dc3540 | 1;
        LAB_1405e653e:
        _DAT_140dc354c = 1;
        lVar3 = FUN_140200220(0x524);
        DAT_140dc3548 = fVar5;
        if (lVar3 != 0) {
            DAT_140dc3548 = *(float *)(lVar3 + 0x18);
        }
    }
    else if (_DAT_140dc354c == 0) goto LAB_1405e653e;
    fVar8 = fVar8 + DAT_140dc3548;
    LAB_1405e6573:
    if (fVar9 <= fVar8) {
        fVar8 = fVar9;
    }
    if (fVar6 <= fVar8) {
        fVar6 = fVar8;
    }
    return CONCAT44(uVar7,fVar6);
}



void FUN_1405e65b0(longlong param_1)

{
    int *piVar1;
    int **ppiVar2;
    longlong lVar3;
    int iVar4;

    ppiVar2 = (int **)(param_1 + 0x228);
    lVar3 = 0x42;
    do {
        piVar1 = *ppiVar2;
        if (*piVar1 == 3) {
            iVar4 = 0x3f800000;
        }
        else {
            iVar4 = 0;
        }
        ppiVar2 = ppiVar2 + 1;
        piVar1[1] = iVar4;
        piVar1[2] = 0;
        *(undefined8 *)(piVar1 + 6) = 0;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
}



void FUN_1405e65f0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_1407e4830((undefined4 *)(param_1 + 0x438),0,100);
    *(undefined4 *)(param_1 + 0x498) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x444) = 0;
    *(undefined8 *)(param_1 + 0x44c) = 1;
    *(undefined8 *)(param_1 + 0x454) = 0;
    *(undefined8 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x450) = 1;
    *(undefined4 *)(param_1 + 0x438) = param_2;
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 0x43c) = param_3;
    *(undefined4 *)(param_1 + 0x440) = uVar1;
    return;
}



void FUN_1405e6690(longlong param_1,int *param_2)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    ulonglong in_stack_ffffffffffffffd8;
    undefined8 uVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    uVar3 = 0;
    if (param_2 == (int *)0x0) {
        iVar9 = 0;
        iVar8 = 0;
        iVar5 = 0;
        iVar7 = 0;
        iVar4 = 0;
        uVar6 = 0;
    }
    else {
        if (*param_2 != 0) {
            lVar1 = FUN_140245c00(*(undefined4 *)(param_1 + 0x438));
            if ((lVar1 != 0) && (lVar1 = FUN_1405e6000(param_1,*(undefined4 *)(lVar1 + 8),1), lVar1 != 0))
            {
                if (*(ulonglong *)(lVar1 + 0x48) != 0) {
                    piVar2 = *(int **)(lVar1 + 0x40);
                    do {
                        if (*piVar2 == *(int *)(param_1 + 0x438)) {
                            FUN_1407b0810(lVar1 + 0x78,uVar3,1);
                            break;
                        }
                        uVar3 = uVar3 + 1;
                        piVar2 = piVar2 + 1;
                    } while (uVar3 < *(ulonglong *)(lVar1 + 0x48));
                }
                if (param_2[4] != 3) {
                    in_stack_ffffffffffffffd8 =
                            in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(uint)param_2[5];
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CraftingDiscoveryHotCold",
                                  &DAT_1409ef0b4,param_2[4],in_stack_ffffffffffffffd8);
                }
            }
            FUN_140437a10(DAT_140c658d8,0x1c,0,0,in_stack_ffffffffffffffd8 & 0xffffffff00000000,0,1);
        }
        iVar9 = param_2[2];
        iVar5 = param_2[6];
        iVar4 = *param_2;
        iVar8 = param_2[1];
        iVar7 = param_2[7];
        uVar6 = *(undefined8 *)(param_2 + 8);
    }
    FUN_140430bf0(*(undefined8 *)(DAT_140c65898 + 0x7340),*(undefined4 *)(param_1 + 0x438),iVar4,iVar5
            ,uVar6,iVar7,iVar8,iVar9);
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_1407e4830((undefined4 *)(param_1 + 0x438),0,100);
    *(undefined4 *)(param_1 + 0x498) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x444) = 0;
    *(undefined8 *)(param_1 + 0x44c) = 1;
    *(undefined8 *)(param_1 + 0x454) = 0;
    *(undefined8 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x450) = 1;
    return;
}



void FUN_1405e69e0(longlong *param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong local_res8;
    longlong local_res10;

    uVar7 = 0;
    lVar8 = DAT_140c65b90;
    if (param_1[1] != 0) {
        do {
            lVar3 = *(longlong *)(*param_1 + uVar7 * 8);
            if (*(int *)(lVar3 + 0xc) != 0) {
                uVar1 = *(uint *)(lVar3 + 8);
                lVar3 = *(longlong *)(lVar8 + 0x10);
                lVar5 = lVar3;
                lVar4 = *(longlong *)(lVar3 + 8);
                while (lVar4 != 0) {
                    if (*(uint *)(lVar4 + 0x20) < uVar1) {
                        lVar4 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        lVar5 = lVar4;
                        lVar4 = *(longlong *)(lVar4 + 0x10);
                    }
                }
                if ((lVar5 == lVar3) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
                    local_res10 = lVar3;
                    plVar6 = &local_res10;
                }
                else {
                    local_res8 = lVar5;
                    plVar6 = &local_res8;
                }
                if (((*plVar6 != lVar3) && (lVar3 = *(longlong *)(*plVar6 + 0x28), lVar3 != 0)) &&
                    (iVar2 = *(int *)(lVar3 + 0x14), iVar2 != 0)) {
                    FUN_140437a10(DAT_140c658d8,iVar2,0,0,0,0,1);
                    lVar8 = DAT_140c65b90;
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong)param_1[1]);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405e6ad0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
    undefined4 uVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong lVar10;

    switch(*(undefined4 *)(*param_2 + 4)) {
        case 0x21:
        case 0x23:
        case 0x26:
        case 0x28:
        case 0x4c:
        case 0x4d:
            break;
        default:
            return;
    }
    lVar5 = FUN_1401e98e0(*(undefined4 *)(*param_2 + 8));
    if (lVar5 == 0) {
        return;
    }
    uVar8 = 0;
    while( true ) {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c64d70 != 0) {
                return;
            }
            iVar4 = FUN_140242ae0();
            if (iVar4 < 0) {
                return;
            }
            uVar3 = (**(code **)(*DAT_140c64068 + 0x28))();
        }
        else {
            uVar3 = (*DAT_140c63838)(&PTR_u_Tradeskill_140a6daf0,DAT_140c63858);
        }
        if (uVar3 <= uVar8) {
            return;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c64d70 == 0) {
                iVar4 = FUN_140242ae0();
                if (iVar4 < 0) {
                    piVar6 = (int *)0x0;
                }
                else {
                    piVar6 = (int *)(**(code **)(*DAT_140c64068 + 0x20))(DAT_140c64068,uVar8);
                }
            }
            else {
                piVar6 = (int *)0x0;
            }
        }
        else {
            piVar6 = (int *)(*DAT_140c63848)(&PTR_u_Tradeskill_140a6daf0);
        }
        if (piVar6[5] == *(int *)(lVar5 + 0xc)) break;
        uVar8 = uVar8 + 1;
    }
    if (*piVar6 == 0) {
        return;
    }
    uVar9 = 0;
    if (param_1[1] == 0) {
        return;
    }
    while (*(int *)(*(longlong *)(*param_1 + uVar9 * 8) + 8) != *piVar6) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        if ((ulonglong)param_1[1] <= uVar9) {
            return;
        }
    }
    lVar5 = *(longlong *)(*param_1 + uVar9 * 8);
    if (lVar5 == 0) {
        return;
    }
    uVar9 = 0;
    if (*(longlong *)(lVar5 + 0x70) == 0) {
        return;
    }
    do {
        uVar1 = *(undefined4 *)(*(longlong *)(lVar5 + 0x68) + uVar9 * 4);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c654f8 == 0) && (iVar4 = FUN_1402459a0(), -1 < iVar4)) {
                lVar7 = (**(code **)(*DAT_140c63868 + 0x18))(DAT_140c63868,uVar1);
                goto LAB_1405e6c90;
            }
        }
        else {
            lVar7 = (*DAT_140c63840)(&PTR_u_TradeskillSchematic2_140a6dd58);
            LAB_1405e6c90:
            if ((lVar7 != 0) && (*(int *)(lVar7 + 0x1c) != 0)) {
                iVar4 = *(int *)(*param_2 + 0x24);
                if (((iVar4 == 0) || (iVar4 == *(int *)(lVar7 + 0xc))) &&
                    ((*(int *)(*param_2 + 0x3c) == 0 || (iVar4 = FUN_14049c010(), iVar4 != 0)))) {
                    if (*(int *)(*param_2 + 4) == 0x23) {
                        LAB_1405e6d29:
                        FUN_140003460(param_3);
                    }
                    else {
                        uVar8 = 0;
                        lVar10 = 0;
                        do {
                            if ((((param_2[3] != 0) && (uVar8 < 0x20)) &&
                                 (lVar2 = *(longlong *)(lVar10 + param_2[3]), lVar2 != 0)) &&
                                ((*(int *)(lVar2 + 0xc) == *(int *)(lVar7 + 0xc) ||
                                  (iVar4 = FUN_14049c010(), iVar4 != 0)))) goto LAB_1405e6d29;
                            uVar8 = uVar8 + 1;
                            lVar10 = lVar10 + 8;
                        } while (uVar8 < 0x20);
                    }
                }
            }
        }
        uVar9 = uVar9 + 1;
        if (*(ulonglong *)(lVar5 + 0x70) <= uVar9) {
            return;
        }
    } while( true );
}



void FUN_1405e6da0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
        if (*(int *)(param_1 + 0x10) == 0) goto LAB_1405e6e86;
        do {
            lVar2 = *(longlong *)(param_1 + 0x18 + uVar6 * 8);
            if (lVar2 != 0) {
                if (*(int *)(lVar2 + 4) == 4) {
                    if (lVar2 == 0) {
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = *(undefined4 *)(lVar2 + 0xc);
                    }
                    lVar2 = FUN_1400b5df0(DAT_140c658f0,uVar4,0);
                    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1cc) != 0)) {
                        FUN_140003460();
                    }
                }
                else if (*(int *)(lVar2 + 4) == 0x21) {
                    if (lVar2 == 0) {
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = *(undefined4 *)(lVar2 + 0xc);
                    }
                    lVar1 = param_2[1];
                    lVar2 = lVar1 + 1;
                    lVar3 = FUN_14018db00(*param_2,lVar2,4);
                    *(undefined4 *)(lVar3 + lVar1 * 4) = uVar4;
                    if (*param_2 != lVar3) {
                        FUN_1407db590(lVar3,*param_2,param_2[1] << 2);
                        if (*param_2 != 0) {
                            (**(code **)(*(longlong *)(*param_2 + -0x10) + 8))();
                        }
                        *param_2 = lVar3;
                    }
                    param_2[1] = lVar2;
                }
            }
            LAB_1405e6e86:
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x10));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405e6ec0(undefined8 param_1,int param_2)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    float fVar6;
    undefined4 uVar8;
    undefined extraout_XMM0 [16];
    undefined auVar7 [16];

    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar5 * 8) + 8) == param_2)
            {
                lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar5 * 8);
                if (lVar3 == 0) {
                    return 0;
                }
                if (*(int *)(lVar3 + 0xc) != 0) {
                    return 0;
                }
                if (*(int *)(lVar3 + 0x54) == 0) {
                    return 0;
                }
                if ((DAT_140dc3550 & 1) == 0) {
                    DAT_140dc3550 = DAT_140dc3550 | 1;
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        _DAT_140dc3554 = 4.2;
                    }
                    else {
                        _DAT_140dc3554 = *(float *)(lVar3 + 0x18);
                    }
                }
                if ((DAT_140dc3550 & 2) == 0) {
                    DAT_140dc3550 = DAT_140dc3550 | 2;
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        _DAT_140dc3558 = 0x3f333333;
                    }
                    else {
                        _DAT_140dc3558 = *(undefined4 *)(lVar3 + 0x1c);
                    }
                }
                if ((DAT_140dc3550 & 4) == 0) {
                    DAT_140dc3550 = DAT_140dc3550 | 4;
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        DAT_140dc355c = 0x3f4ccccd;
                    }
                    else {
                        DAT_140dc355c = *(undefined4 *)(lVar3 + 0x20);
                    }
                }
                if ((DAT_140dc3550 & 8) == 0) {
                    DAT_140dc3550 = DAT_140dc3550 | 8;
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        DAT_140dc3560 = -2.9;
                    }
                    else {
                        DAT_140dc3560 = *(float *)(lVar3 + 0x24);
                    }
                }
                fVar6 = DAT_140dc3560;
                uVar1 = FUN_1408fbfc0();
                fVar6 = SUB164(extraout_XMM0,0) * _DAT_140dc3554 + fVar6;
                auVar7 = CONCAT124(SUB1612(extraout_XMM0 >> 0x20,0),fVar6);
                iVar4 = (int)fVar6;
                if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar6)) {
                    uVar8 = SUB164(extraout_XMM0 >> 0x20,0);
                    uVar5 = SUB168(auVar7,0);
                    uVar2 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar8,CONCAT48(uVar8,uVar5)) >> 0x40,0),
                                                    uVar5 & 0xffffffff | uVar5 << 0x20));
                    auVar7 = ZEXT416((uint)(float)(iVar4 + (uVar2 & 1 ^ 1)));
                }
                return (longlong)SUB164(auVar7,0);
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    return 0;
}



longlong FUN_1405e7080(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    puVar3 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1);
    puVar5 = puVar3 + lVar1 * 3;
    if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
        puVar5[1] = param_2[1];
        puVar5[2] = param_2[2];
    }
    if ((undefined4 *)*param_1 != puVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar5 = puVar3;
            do {
                if (puVar5 != (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)((longlong)puVar5 + (*param_1 - (longlong)puVar3));
                    *puVar5 = *puVar4;
                    puVar5[1] = puVar4[1];
                    puVar5[2] = puVar4[2];
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 3;
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



void FUN_1405e7160(longlong *param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 *puVar8;
    longlong lVar9;

    uVar2 = param_1[1];
    uVar4 = param_2 + 1;
    uVar1 = uVar2 - 1;
    if (uVar4 < uVar2) {
        lVar6 = uVar4 * 0xc;
        do {
            lVar7 = *param_1;
            puVar8 = (undefined4 *)(lVar7 + -0xc + lVar6);
            if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = *(undefined4 *)(lVar6 + lVar7);
                puVar8[1] = *(undefined4 *)(lVar6 + 4 + lVar7);
                puVar8[2] = *(undefined4 *)(lVar6 + 8 + lVar7);
            }
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 0xc;
        } while (uVar4 < (ulonglong)param_1[1]);
    }
    lVar6 = FUN_14018db00(*param_1,uVar1,0xc);
    if (*param_1 != lVar6) {
        uVar4 = 0;
        if (3 < (longlong)uVar1) {
            lVar7 = -lVar6;
            lVar9 = (uVar2 - 5 >> 2) + 1;
            puVar8 = (undefined4 *)(lVar6 + 0x20);
            uVar4 = lVar9 * 4;
            do {
                if (puVar8 + -8 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar8 + *param_1 + lVar7 + -0x20);
                    puVar8[-8] = *puVar5;
                    puVar8[-7] = puVar5[1];
                    puVar8[-6] = puVar5[2];
                }
                if (puVar8 + -5 != (undefined4 *)0x0) {
                    lVar3 = *param_1;
                    puVar8[-5] = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar7 + -0x14);
                    puVar8[-4] = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar7 + -0x10);
                    puVar8[-3] = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar7 + -0xc);
                }
                if (puVar8 + -2 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar8 + *param_1 + (-8 - lVar6));
                    puVar8[-2] = *puVar5;
                    puVar8[-1] = puVar5[1];
                    *puVar8 = puVar5[2];
                }
                if (puVar8 + 1 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar8 + *param_1 + (4 - lVar6));
                    puVar8[1] = *puVar5;
                    puVar8[2] = puVar5[1];
                    puVar8[3] = puVar5[2];
                }
                puVar8 = puVar8 + 0xc;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
        }
        if (uVar4 < uVar1) {
            lVar9 = -lVar6;
            puVar8 = (undefined4 *)(lVar6 + uVar4 * 0xc);
            lVar7 = uVar1 - uVar4;
            do {
                if (puVar8 != (undefined4 *)0x0) {
                    lVar3 = *param_1;
                    *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar9 + lVar3);
                    puVar8[1] = *(undefined4 *)((longlong)puVar8 + lVar9 + lVar3 + 4);
                    puVar8[2] = *(undefined4 *)((longlong)puVar8 + lVar9 + lVar3 + 8);
                }
                puVar8 = puVar8 + 3;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
        }
        lVar7 = *param_1;
        if (lVar7 != 0) {
            (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
        }
        *param_1 = lVar6;
    }
    param_1[1] = uVar1;
    return;
}



undefined8 * FUN_1405e7330(undefined8 *param_1,longlong param_2)

{
    int *piVar1;
    uint uVar2;

    param_1[6] = 4;
    uVar2 = 0;
    *param_1 = &PTR_FUN_140b6e4a0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 9) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_2 != 0) {
        piVar1 = (int *)(param_2 + 0x1c);
        do {
            if (*piVar1 == 0) {
                return param_1;
            }
            param_1[7] = param_1[7] + 1;
            *(int *)((longlong)param_1 + (-0x14 - param_2) + (longlong)piVar1) = *piVar1;
            *(int *)((longlong)param_1 + (-8 - param_2) + (longlong)piVar1) = piVar1[3];
            if (piVar1[6] != 0) {
                *(int *)((longlong)param_1 + (4 - param_2) + (longlong)piVar1) = piVar1[6];
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 1;
        } while (uVar2 < 3);
    }
    return param_1;
}



ulonglong FUN_1405e73e0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    int *piVar4;

    if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        return 1;
    }
    uVar3 = 1;
    if (1 < *(ulonglong *)(param_1 + 0x38)) {
        piVar4 = (int *)(param_1 + 0x24);
        lVar2 = DAT_140c65898;
        do {
            if ((*piVar4 != 0) &&
                (iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                        (DAT_140c659a0,*(undefined8 *)(lVar2 + 0x78),*piVar4,0,0,0),
                        lVar2 = DAT_140c65898, iVar1 == 0)) {
                return uVar3;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 0x38));
    }
    return *(ulonglong *)(param_1 + 0x38);
}



undefined8 FUN_1405e7490(longlong param_1,ulonglong param_2,int param_3)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined local_res10 [8];

    uVar2 = FUN_1405e73e0();
    if (uVar2 <= param_2) {
        return 0x80004005;
    }
    if (param_2 != *(ulonglong *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 8 + param_2 * 4) == 0) {
            return 0x80004005;
        }
        if (param_3 != 0) {
            if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
                return 0x80004005;
            }
            lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(param_1 + 0x14 + param_2 * 4));
            if ((lVar3 != 0) && ((*(uint *)(*(longlong *)(lVar3 + 0x70) + 0x24) & 0xfffffffd) == 0)) {
                for (lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1608); lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x88)) {
                    if (((*(int *)(lVar3 + 4) == 0) && (*(longlong *)(lVar3 + 0x20) != 0)) &&
                        (iVar1 = FUN_140195f70(lVar3 + 0x10), iVar1 != 0)) {
                        return 0x80004005;
                    }
                }
            }
        }
        *(ulonglong *)(param_1 + 0x30) = param_2;
        if (DAT_140c89d90 != 0) {
            FUN_1405c7960(DAT_140c89d90,*(undefined4 *)(param_1 + 8 + param_2 * 4));
        }
        if (param_3 != 0) {
            local_res10[0] = (undefined)param_2;
            FUN_1403f4900(DAT_140c65898,0x16f,local_res10);
        }
        return 0;
    }
    return 0;
}



undefined8 FUN_1405e7710(longlong *param_1,uint param_2)

{
    float fVar1;
    float fVar2;
    undefined4 uVar3;
    float fVar4;
    undefined4 uVar5;

    if ((param_2 < 0xb) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        fVar4 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x21c + (longlong)(int)param_2 * 4);
        uVar5 = 0;
        fVar1 = (float)(**(code **)(*param_1 + 0x38))();
        fVar2 = 0.0;
        uVar3 = 0;
        if (fVar1 != 0.0) {
            fVar2 = fVar4 / fVar1;
            uVar3 = uVar5;
        }
        return CONCAT44(uVar3,fVar2);
    }
    return 0;
}



undefined8 FUN_1405e7770(undefined8 param_1,int param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    if ((((param_2 < 0xb) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xe0), lVar1 != 0)) &&
        (*(int *)(lVar1 + 100 + (longlong)param_2 * 4) < 0x1f)) {
        lVar1 = FUN_140249340();
        if (lVar1 != 0) {
            uVar2 = FUN_14034bdd0();
            return uVar2;
        }
    }
    return 0;
}



uint FUN_1405e78c0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xe0), lVar1 != 0)) {
        auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar4 = 0.0;
        uVar2 = 0;
        lVar3 = 0x21c;
        while (((*(int *)(lVar3 + -0x1b8 + lVar1) != param_2 ||
                 ((**(code **)(*param_1 + 0x38))(param_1,uVar2,param_3,param_4,auVar5), 10 < (int)uVar2))
                || (*(float *)(lVar3 + *(longlong *)(DAT_140c65898 + 0x78)) <= fVar4))) {
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 4;
            if (7 < uVar2) {
                return 0xb;
            }
        }
        return uVar2;
    }
    return 0xb;
}



undefined8 FUN_1405e7b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    while( true ) {
        uVar1 = FUN_1403b3320(uVar2,param_2,param_3);
        if (((int)uVar1 != 0) && ((int)uVar1 != 0x13d)) break;
        uVar2 = uVar2 + 1;
        if (1 < uVar2) {
            return 0;
        }
    }
    return uVar1;
}



undefined8 FUN_1405e7ed0(longlong *param_1,undefined8 param_2)

{
    (**(code **)(*param_1 + 0x18))(param_1,param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
    return 0;
}



undefined8
FUN_1405e7ef0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
    undefined8 uVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    uVar1 = (**(code **)(*param_1 + 0x18))
            (param_1,param_2,*(undefined8 *)(DAT_140c65898 + 0x78),param_5);
    uVar3 = 0;
    while( true ) {
        uVar2 = FUN_1403b3320(uVar3,uVar1,param_3);
        if (((int)uVar2 != 0) && ((int)uVar2 != 0x13d)) break;
        uVar3 = uVar3 + 1;
        if (1 < uVar3) {
            return 0;
        }
    }
    return uVar2;
}



bool FUN_1405e7f60(void)

{
    longlong lVar1;

    if ((DAT_140dc356c & 1) == 0) {
        DAT_140dc356c = DAT_140dc356c | 1;
        lVar1 = FUN_140200220(0x2a0);
        if (lVar1 == 0) {
            DAT_140dc3570 = 0xb4c9;
        }
        else {
            DAT_140dc3570 = *(undefined4 *)(lVar1 + 0xc);
        }
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar1 = FUN_140469920(*(longlong *)(DAT_140c65898 + 0x78),DAT_140dc3570);
        return lVar1 != 0;
    }
    return false;
}



undefined8 FUN_1405e8070(longlong param_1)

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
        LAB_1405e80b3:
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
                local_18 = FUN_140062650(param_1,"Game.Spell",10);
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
                goto LAB_1405e8197;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1405e80b3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1405e8197:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405e81b0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Spell");
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



undefined4 FUN_1405e8230(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined8 local_38;
    undefined4 local_30;

    FUN_1400569b0(param_1,"Game.Spell");
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
    ppuVar5 = &PTR_DAT_140c5a480;
    puVar7 = PTR_DAT_140c5a480;
    while (puVar7 != (undefined *)0x0) {
        puVar7 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar7;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar7 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar7[lVar3] != '\0');
        local_38 = FUN_140062650(param_1,puVar7);
        local_30 = 4;
        FUN_14005ea50(param_1,uVar4,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar7 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"Spell",&PTR_DAT_140b6e640);
    FUN_140058710(param_1,"CodeEnumCastResult",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    lVar6 = 5;
    lVar3 = 0x147;
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
    FUN_140058710(param_1,"CodeEnumSpellEffectType",0x17);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x96;
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
    FUN_140058710(param_1,"CodeEnumSpellTag",0x10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0xb;
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
    FUN_140058710(param_1,"CodeEnumReagentType",0x13);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b233b4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ItemFamily",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ItemCategory",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCastMethod",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Normal",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Channeled",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PressHold",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ChanneledField",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"UNUSED04",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ClientSideInteraction",0x15);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RapidTap",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ChargeRelease",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Multiphase",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4020000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Transactional",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b234a0,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumSchool",0xe);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Spell",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Melee",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Ranged",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Unarmed",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumComparison",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Equals",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Greater",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"GreaterThanEqualTo",0x12);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b2343c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LessThanEqualTo",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Percent_Equals",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Percent_Greater",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Percent_GreaterThanEqualTo",0x1a);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Percent_Less",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Percent_LessThanEqualTo",0x17);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumAOESelectionType",0x18);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b23594,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Closest",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Furthest",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Random",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LowestAbsoluteHealth",0x14);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MissingMostHealth",0x11);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CombatMessageType",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x3f;
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
    FUN_140058710(param_1,"CodeEnumSpellClass",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_1405e9400(undefined8 param_1,ulonglong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    param_2 = param_2 & 0xffffffff;
    puVar1 = (undefined8 *)FUN_1400580e0();
    if ((puVar1 == &DAT_140a12138) || (*(int *)(puVar1 + 1) != 0)) {
        lVar2 = FUN_140056ab0(param_1,param_2 & 0xffffffff,"Game.Spell");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            uVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            return uVar3;
        }
    }
    return 0;
}



undefined8 FUN_1405e9470(longlong param_1)

{
    longlong lVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar3 = 0;
    uVar9 = 0;
    uVar7 = uVar3;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar3;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar7 + 0x180,1);
    puVar2 = (undefined4 *)FUN_1406622c0(param_1,2);
    if (puVar2 != (undefined4 *)0x0) {
        uVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2);
    }
    puVar2 = (undefined4 *)FUN_1406622c0(param_1,3);
    if (puVar2 != (undefined4 *)0x0) {
        FUN_1403d90d0(DAT_140c65898,*puVar2);
    }
    lVar1 = *(longlong *)(uVar7 + 400);
    lVar4 = FUN_14018f0e0(local_48,0);
    uVar6 = *(undefined8 *)(lVar4 + 8);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x30);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x38))) {
        uVar6 = FUN_140056bb0(lVar1,4);
    }
    FUN_14018f2d0(local_28,uVar6);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (uVar3 != 0) {
        uVar9 = *(undefined4 *)(uVar3 + 8);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,uVar9,
                  local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1405e95f0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar4 != 0) {
                pdVar3 = *(double **)(param_1 + 0x10);
                iVar1 = **(int **)(lVar4 + 0x70);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405e96a0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar4 != 0) {
                pdVar3 = *(double **)(param_1 + 0x10);
                iVar1 = *(int *)(*(longlong *)(lVar4 + 0x70) + 4);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405e9750(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
         (*(int *)(puVar1 + 1) == 0)) ||
        (((lVar2 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar2 == 0 || (*(longlong *)(lVar2 + 8) == 0)
          ) || (lVar2 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8)),
                lVar2 == 0)))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = FUN_14034bdd0();
    lVar2 = FUN_14018f0e0(local_28,uVar3);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_1405e9840(longlong param_1)

{
    byte bVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar4 != 0) {
                pdVar3 = *(double **)(param_1 + 0x10);
                bVar1 = *(byte *)(*(longlong *)(lVar4 + 0x70) + 8);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)(uint)bVar1;
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



undefined8 FUN_1405e9d50(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    uint uVar3;
    longlong lVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar4 != 0) {
                uVar3 = FUN_14054e340(*(undefined4 **)(lVar4 + 0x70),**(undefined4 **)(lVar4 + 0x70),
                                      *(undefined8 *)(DAT_140c65898 + 0x78));
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)((float)(ulonglong)uVar3 * 0.001);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405e9e30(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
                uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x48);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)((float)(ulonglong)uVar1 * 0.001);
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



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405e9f00(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined local_108 [8];
    undefined2 *local_100;
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar3 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)
          ) || (lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8)),
                lVar3 == 0)))) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
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
        psVar5 = (short *)FUN_14034bdd0();
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_f0 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        local_100 = puVar4;
        local_f8 = puVar4;
        if (psVar5 != (short *)0x0) {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar3 = lVar3 + 1;
                sVar1 = psVar5[lVar3];
            }
            FUN_14001c480(local_e0,psVar5);
            puVar6 = (undefined *)FUN_1400b7660(&local_e8);
            if (puVar6 != local_108) {
                FUN_14001c480(local_108,*(undefined8 *)(puVar6 + 8));
                puVar4 = local_100;
            }
        }
        lVar3 = FUN_14018f0e0(local_108,puVar4);
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
        if (local_100 != (undefined2 *)0x0) {
            FUN_14018b900(local_100,0);
        }
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405ea130(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined local_108 [8];
    undefined2 *local_100;
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar3 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)
          ) || (lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8)),
                lVar3 == 0)))) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
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
        psVar5 = (short *)FUN_14034bdd0();
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_f0 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        local_100 = puVar4;
        local_f8 = puVar4;
        if (psVar5 != (short *)0x0) {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar3 = lVar3 + 1;
                sVar1 = psVar5[lVar3];
            }
            FUN_14001c480(local_e0,psVar5);
            puVar6 = (undefined *)FUN_1400b7660(&local_e8);
            if (puVar6 != local_108) {
                FUN_14001c480(local_108,*(undefined8 *)(puVar6 + 8));
                puVar4 = local_100;
            }
        }
        lVar3 = FUN_14018f0e0(local_108,puVar4);
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
        if (local_100 != (undefined2 *)0x0) {
            FUN_14018b900(local_100,0);
        }
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



undefined8 FUN_1405ea360(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
         (*(int *)(puVar1 + 1) != 0)) &&
        (((lVar4 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar4 != 0 && (*(longlong *)(lVar4 + 8) != 0)
          ) && (lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8)),
                lVar4 != 0)))) {
        uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x70) + 0x184);
        if (*(int *)(*(longlong *)(lVar4 + 0x70) + 0x18) == 7) {
            iVar3 = FUN_140564fb0();
            uVar6 = 0;
            uVar7 = uVar6;
            if (0 < iVar3) {
                do {
                    iVar5 = (int)uVar6;
                    lVar4 = FUN_140564f40();
                    if (lVar4 != 0) {
                        uVar7 = (ulonglong)(uint)((int)uVar7 + *(int *)(lVar4 + 0x10));
                    }
                    uVar6 = (ulonglong)(iVar5 + 1U);
                } while ((int)(iVar5 + 1U) < iVar3);
            }
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)((float)(uVar7 & 0xffffffff) * 0.001);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ea490(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    float fVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar3 != 0) {
                fVar4 = (float)FUN_1403ad860(DAT_140c65b70,**(undefined4 **)(lVar3 + 0x70),
                                             *(undefined8 *)(DAT_140c65898 + 0x78));
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ea560(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    float fVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar3 != 0) {
                fVar4 = (float)FUN_1403ad8f0(DAT_140c65b70,**(undefined4 **)(lVar3 + 0x70),
                                             *(undefined8 *)(DAT_140c65898 + 0x78));
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ea630(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    double *pdVar6;
    uint *puVar7;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_1405e9400(param_1,1);
    lVar2 = DAT_140c65898;
    if (lVar5 == 0) {
        pdVar6 = *(double **)(param_1 + 0x10);
        *pdVar6 = 0.0;
    }
    else {
        puVar7 = *(uint **)(lVar5 + 0x38);
        if (puVar7 != (uint *)0x0) {
            puVar7 = (uint *)(ulonglong)*puVar7;
            iVar3 = FUN_1404823c0(lVar5);
            if (iVar3 != 0) {
                puVar7 = (uint *)(longlong)
                        ((float)(longlong)puVar7 * *(float *)(*(longlong *)(lVar2 + 0x78) + 0xa04))
                        ;
            }
        }
        uVar4 = FUN_14046a890(*(undefined8 *)(lVar2 + 0x78),lVar5,(ulonglong)puVar7 & 0xffffffff);
        pdVar6 = *(double **)(param_1 + 0x10);
        *pdVar6 = (double)((float)(ulonglong)uVar4 * 0.001);
    }
    *(undefined4 *)(pdVar6 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ea720(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    int *piVar8;
    uint uVar9;
    uint uVar10;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar6 = FUN_1405e9400();
    if (lVar6 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = **(int **)(lVar6 + 0x70);
    lVar6 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1608);
    uVar4 = 0;
    do {
        if (lVar6 == 0) {
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)((float)(ulonglong)uVar4 * 0.001);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        uVar10 = uVar4;
        if (((((*(int *)(lVar6 + 4) - 1U < 2) && (*(longlong *)(lVar6 + 0x20) != 0)) &&
              (uVar5 = FUN_140195f70(lVar6 + 0x10), uVar4 < uVar5)) &&
             ((uVar10 = uVar5, *(int *)(lVar6 + 8) != iVar1 && (uVar10 = uVar4, *(int *)(lVar6 + 4) == 2)
             ))) && ((lVar7 = FUN_1403acd90(), lVar7 != 0 &&
                                               (piVar8 = *(int **)(lVar7 + 0x38), piVar8 != (int *)0x0)))) {
            uVar9 = 0;
            do {
                piVar8 = piVar8 + 1;
                uVar10 = uVar5;
                if ((*piVar8 == *(int *)(lVar6 + 0xc)) || (uVar10 = uVar4, *piVar8 == 0)) break;
                uVar9 = uVar9 + 1;
            } while (uVar9 < 3);
        }
        lVar6 = *(longlong *)(lVar6 + 0x88);
        uVar4 = uVar10;
    } while( true );
}



undefined8 FUN_1405ea8a0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar4 = FUN_1405e9400(param_1,1);
    if (lVar4 != 0) {
        lVar5 = FUN_14023dc80(*(undefined4 *)(*(longlong *)(lVar4 + 0x70) + 0x28));
        if (lVar5 != 0) {
            pdVar2 = *(double **)(param_1 + 0x10);
            uVar3 = FUN_14046a760(*(undefined8 *)(DAT_140c65898 + 0x78),
                                  *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + 0x28),
                                  *(undefined4 *)(lVar5 + 4));
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)((float)(ulonglong)uVar3 * 0.001);
            goto LAB_1405ea961;
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    LAB_1405ea961:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405eac30(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    ulonglong uVar6;
    undefined *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined local_108 [8];
    undefined2 *local_100;
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    uVar6 = 0;
    uVar8 = uVar6;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar9 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                break;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400eaf90(uVar8);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar3 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)
          ) || ((lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8)),
                lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)))))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        FUN_1400b6f30(&local_e8);
        local_e8 = &PTR_FUN_140b69230;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_28 = CONCAT88(puVar4,puVar4);
        local_18 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        psVar5 = (short *)FUN_14034bdd0();
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_f0 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        local_100 = puVar4;
        local_f8 = puVar4;
        if (psVar5 != (short *)0x0) {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                uVar6 = uVar6 + 1;
                sVar1 = psVar5[uVar6];
            }
            FUN_14001c480(local_e0,psVar5);
            puVar7 = (undefined *)FUN_1400b7660(&local_e8);
            if (puVar7 != local_108) {
                FUN_14001c480(local_108,*(undefined8 *)(puVar7 + 8));
                puVar4 = local_100;
            }
        }
        lVar3 = FUN_14018f0e0(local_108,puVar4);
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar10) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != (undefined2 *)0x0) {
            FUN_14018b900(local_100,0);
        }
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405eaec0(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined2 *puVar6;
    short *psVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar4 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar4 == 0 || (*(longlong *)(lVar4 + 8) == 0)
          ) || ((lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                       *(undefined8 *)(DAT_140c65898 + 0x78)), lVar4 == 0 ||
                                                                               (*(longlong *)(lVar4 + 8) == 0)))))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
        FUN_1400b6f30(&local_e8);
        lVar9 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar6 = (undefined2 *)FUN_14018b280(0x10,0);
        local_28 = CONCAT88(puVar6,puVar6);
        local_18 = puVar6 + 8;
        if (puVar6 != (undefined2 *)0x0) {
            *puVar6 = 0;
        }
        psVar7 = (short *)FUN_14034bdd0(puVar6,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x20));
        if (psVar7 != (short *)0x0) {
            sVar1 = *psVar7;
            lVar4 = lVar9;
            while (sVar1 != 0) {
                lVar4 = lVar4 + 1;
                sVar1 = psVar7[lVar4];
            }
            FUN_14001c480(local_e0,psVar7,psVar7 + lVar4);
            FUN_1400b7660(&local_e8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar8;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 != (short *)0x0) {
            sVar1 = *psVar7;
            lVar4 = lVar9;
            while (sVar1 != 0) {
                lVar4 = lVar4 + 1;
                sVar1 = psVar7[lVar4];
            }
            FUN_14001c480(local_e0,psVar7,psVar7 + lVar4);
            FUN_1400b7660(&local_e8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar8;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 != (short *)0x0) {
            sVar1 = *psVar7;
            lVar4 = lVar9;
            while (sVar1 != 0) {
                lVar4 = lVar4 + 1;
                sVar1 = psVar7[lVar4];
            }
            FUN_14001c480(local_e0,psVar7,psVar7 + lVar4);
            FUN_1400b7660(&local_e8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar8;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 != (short *)0x0) {
            sVar1 = *psVar7;
            while (sVar1 != 0) {
                lVar9 = lVar9 + 1;
                sVar1 = psVar7[lVar9];
            }
            FUN_14001c480(local_e0,psVar7,psVar7 + lVar9);
            FUN_1400b7660(&local_e8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar8;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar8;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
        FUN_1400579e0(param_1);
    }
    return 1;
}



undefined8 FUN_1405eb290(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
          (*(int *)(puVar2 + 1) != 0)) &&
         ((lVar3 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar3 != 0 && (*(longlong *)(lVar3 + 8) != 0)
         ))) && (lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8)),
            lVar3 != 0)) {
        plVar6 = (longlong *)0x0;
        if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
             (iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc), iVar1 < 0x17)) &&
            ((pplVar4 = (longlong **)(DAT_140c65b70 + 0x58 + (longlong)iVar1 * 0x10),
                    pplVar4 != (longlong **)0x0 && (pplVar4[1] != (longlong *)0x0)))) {
            plVar5 = *pplVar4;
            do {
                if (**(int **)(*plVar5 + 0x70) == **(int **)(lVar3 + 0x70)) {
                    local_28 = (ulonglong)*(uint *)((longlong)plVar5 + 0xc);
                    local_20 = 1;
                    local_18 = 0;
                    FUN_140501210(param_1,&local_28);
                    return 1;
                }
                plVar6 = (longlong *)((longlong)plVar6 + 1);
                plVar5 = plVar5 + 3;
            } while (plVar6 < pplVar4[1]);
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405eb3c0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;
    longlong **pplVar5;
    longlong *plVar6;
    longlong *plVar7;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8));
            if (lVar4 != 0) {
                if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                     (iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc), iVar1 < 0x17)) &&
                    (pplVar5 = (longlong **)(DAT_140c65b70 + 0x58 + (longlong)iVar1 * 0x10),
                            pplVar5 != (longlong **)0x0)) {
                    plVar7 = (longlong *)0x0;
                    if (pplVar5[1] != (longlong *)0x0) {
                        plVar6 = *pplVar5;
                        do {
                            if (**(int **)(*plVar6 + 0x70) == **(int **)(lVar4 + 0x70)) {
                                iVar1 = *(int *)(plVar6 + 1);
                                pdVar3 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar3 + 1) = 3;
                                *pdVar3 = (double)iVar1;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                return 1;
                            }
                            plVar7 = (longlong *)((longlong)plVar7 + 1);
                            plVar6 = plVar6 + 3;
                        } while (plVar7 < pplVar5[1]);
                    }
                }
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405eb4e0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong *plVar7;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
          (*(int *)(puVar2 + 1) != 0)) &&
         ((lVar5 = FUN_140056ab0(param_1,1), lVar5 != 0 && (*(longlong *)(lVar5 + 8) != 0)))) &&
        (lVar5 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar5 + 8) + 8)), lVar5 != 0
        )) {
        uVar6 = 0;
        iVar1 = *(int *)(*(longlong *)(lVar5 + 0x70) + 4);
        if ((iVar1 != 0) && (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0)) {
            plVar7 = *(longlong **)(DAT_140c65898 + 0xa90);
            do {
                lVar5 = *plVar7;
                if ((lVar5 != 0) && (*(int *)(lVar5 + 0x40) == iVar1)) {
                    iVar1 = *(int *)(lVar5 + 0x48);
                    puVar3 = *(uint **)(param_1 + 0x10);
                    puVar3[2] = 1;
                    *puVar3 = (uint)(iVar1 != 0);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
                uVar6 = uVar6 + 1;
                plVar7 = plVar7 + 1;
            } while (uVar6 < *(ulonglong *)(DAT_140c65898 + 0xa98));
        }
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    puVar4[2] = 1;
    *puVar4 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405eb5f0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined4 uVar7;
    undefined4 uVar8;

    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar3) || (puVar3 == &DAT_140a12138)) ||
        (*(int *)(puVar3 + 1) != 0)) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            lVar2 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar2 != 0) {
                uVar5 = 0;
                puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                uVar7 = 0;
                uVar8 = 0;
                if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) &&
                     (uVar8 = uVar7, puVar3 != &DAT_140a12138)) &&
                    (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 1)) {
                    puVar6 = &DAT_140a12138;
                    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
                        puVar6 = puVar3;
                    }
                    if ((*(int *)(puVar6 + 1) != 0) && ((*(int *)(puVar6 + 1) != 1 || (*(int *)puVar6 != 0))))
                    {
                        uVar8 = 1;
                    }
                }
                iVar1 = *(int *)(*(longlong *)(lVar2 + 0x70) + 4);
                if (iVar1 != 0) {
                    if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
                        plVar4 = *(longlong **)(DAT_140c65898 + 0xa90);
                        while ((lVar2 = *plVar4, lVar2 == 0 || (*(int *)(lVar2 + 0x40) != iVar1))) {
                            uVar5 = uVar5 + 1;
                            plVar4 = plVar4 + 1;
                            if (*(ulonglong *)(DAT_140c65898 + 0xa98) <= uVar5) {
                                return 0;
                            }
                        }
                        *(undefined4 *)(lVar2 + 0x48) = uVar8;
                    }
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1405eb710(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            lVar5 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar5 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar5 != 0) {
                puVar3 = *(uint **)(param_1 + 0x10);
                uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x70) + 0x10c);
                puVar3[2] = 1;
                *puVar3 = (uVar1 & 0x4000000) >> 0x1a;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    *puVar4 = 0;
    puVar4[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ebab0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
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
                local_20 = FUN_1400578c0(param_1);
                uVar6 = (ulonglong)local_20;
                if ((*(longlong *)(lVar3 + 0x40) != 0) && (0 < *(int *)(*(longlong *)(lVar3 + 0x40) + 0x20))
                        ) {
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
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    puVar1 = *(undefined8 **)(param_1 + 0x10);
                    *puVar1 = *puVar5;
                    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar1 = *(undefined8 **)(param_1 + 0x10);
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar1 = *puVar5;
                    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar1 = *(undefined8 **)(param_1 + 0x10);
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar1 = *puVar5;
                    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    FUN_1400fb1d0(&local_28,uVar2);
                    FUN_1400579e0(param_1);
                    uVar6 = (ulonglong)local_20;
                    param_1 = local_18;
                }
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = *puVar5;
                uVar2 = *(undefined4 *)(puVar5 + 1);
                *(undefined4 *)(puVar1 + 1) = uVar2;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400579e0(param_1,uVar2,uVar6 & 0xffffffff);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ec060(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar4 != 0) {
                pdVar3 = *(double **)(param_1 + 0x10);
                iVar1 = *(int *)(*(longlong *)(lVar4 + 0x70) + 0x18);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ec110(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar4 != 0) {
                pdVar3 = *(double **)(param_1 + 0x10);
                iVar1 = *(int *)(*(longlong *)(lVar4 + 0x70) + 0xf4);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405ece10(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
          (*(int *)(puVar1 + 1) == 0)) ||
         ((lVar2 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar2 == 0 || (*(longlong *)(lVar2 + 8) == 0)
         ))) || ((lVar2 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8)),
            lVar2 == 0 ||
            ((*(int *)(*(longlong *)(lVar2 + 0x70) + 0x164) == 0 ||
              (lVar2 = FUN_14024db80(), lVar2 == 0)))))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = FUN_14034bdd0();
    lVar2 = FUN_14018f0e0(local_28,uVar3);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_1405ed640(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    float fVar10;
    undefined local_38 [8];
    longlong local_30;

    puVar9 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar9) || (puVar9 == &DAT_140a12138)) ||
        (*(int *)(puVar9 + 1) != 0)) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x50) != 0) {
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar9 = *(undefined8 **)(param_1 + 0x10);
                    uVar4 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar9 + 1) = 5;
                    *puVar9 = uVar4;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar2 = FUN_1400578c0(param_1);
                    fVar10 = (float)(ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x50) + 4) * 0.001;
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    puVar9 = *(undefined8 **)(param_1 + 0x10);
                    *puVar9 = *puVar5;
                    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar6 = FUN_14018f0e0(local_38,L"fMaxTime");
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
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar10;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar9 = *(undefined8 **)(param_1 + 0x10);
                    fVar10 = (float)(ulonglong)**(uint **)(lVar3 + 0x50) * 0.001;
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar9 = *puVar5;
                    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar6 = FUN_14018f0e0(local_38,L"fInitialDelay");
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
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar10;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar9 = *(undefined8 **)(param_1 + 0x10);
                    fVar10 = (float)(ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x50) + 8) * 0.001;
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar9 = *puVar5;
                    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar3 = FUN_14018f0e0(local_38,L"fPulseTime");
                    lVar3 = *(longlong *)(lVar3 + 8);
                    if (lVar3 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        do {
                            lVar7 = lVar7 + 1;
                        } while (*(char *)(lVar3 + lVar7) != '\0');
                        FUN_140058710(param_1,lVar3,lVar7);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar10;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar9 = *(undefined8 **)(param_1 + 0x10);
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar9 = *puVar5;
                    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400579e0(param_1);
                    return 1;
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                goto LAB_1405ed9f8;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_1405ed9f8:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405edef0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
         (*(int *)(puVar1 + 1) == 0)) ||
        (((lVar2 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar2 == 0 || (*(longlong *)(lVar2 + 8) == 0)
          ) || (lVar2 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8)),
                lVar2 == 0)))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = FUN_1405645b0();
    lVar2 = FUN_14018f0e0(local_28,uVar3);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_1405ee640(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    uint *puVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res10;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar6 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar6 == 0 || (*(longlong *)(lVar6 + 8) == 0)
          ) || (lVar6 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar6 + 8) + 8),
                                      *(undefined8 *)(DAT_140c65898 + 0x78)), lVar6 == 0)))) {
        puVar5 = *(undefined4 **)(param_1 + 0x10);
        *puVar5 = 0;
        puVar5[2] = 1;
    }
    else {
        if ((*(uint **)(lVar6 + 0x70))[6] == 7) {
            uVar1 = **(uint **)(lVar6 + 0x70);
            lVar7 = *(longlong *)(DAT_140c65b70 + 0x788);
            local_res10 = lVar7;
            lVar3 = *(longlong *)(lVar7 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_res10 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_res10 == lVar7) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
                local_res10 = lVar7;
            }
            if ((((local_res10 != lVar7) && (0 < *(int *)(*(longlong ***)(local_res10 + 0x28) + 1))) &&
                 (***(longlong ***)(local_res10 + 0x28) != 0)) && (lVar7 = FUN_1407a0fd0(), lVar7 != 0)) {
                puVar4 = *(uint **)(param_1 + 0x10);
                uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x70) + 0x108);
                puVar4[2] = 1;
                *puVar4 = (uVar1 & 0x400000) >> 0x16;
                goto LAB_1405ee79b;
            }
        }
        puVar4 = *(uint **)(param_1 + 0x10);
        uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x70) + 0x108);
        puVar4[2] = 1;
        *puVar4 = (uVar1 & 0x400000) >> 0x16;
    }
    LAB_1405ee79b:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405ee870(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined local_108 [8];
    undefined2 *local_100;
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar3 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)
          ) || ((lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8)),
                lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)))))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
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
        psVar5 = (short *)FUN_14034bdd0();
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_f0 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        local_100 = puVar4;
        local_f8 = puVar4;
        if (psVar5 != (short *)0x0) {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar3 = lVar3 + 1;
                sVar1 = psVar5[lVar3];
            }
            FUN_14001c480(local_e0,psVar5);
            puVar6 = (undefined *)FUN_1400b7660(&local_e8);
            if (puVar6 != local_108) {
                FUN_14001c480(local_108,*(undefined8 *)(puVar6 + 8));
                puVar4 = local_100;
            }
        }
        lVar3 = FUN_14018f0e0(local_108,puVar4);
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
        if (local_100 != (undefined2 *)0x0) {
            FUN_14018b900(local_100,0);
        }
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405eeab0(longlong param_1)

{
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    undefined *puVar6;
    longlong lVar7;
    undefined local_108 [8];
    undefined2 *local_100;
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
         (*(int *)(puVar2 + 1) == 0)) ||
        (((lVar3 = FUN_140056ab0(param_1,1,"Game.Spell"), lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)
          ) || ((lVar3 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8)),
                lVar3 == 0 || (*(longlong *)(lVar3 + 8) == 0)))))) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
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
        psVar5 = (short *)FUN_14034bdd0();
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_f0 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        local_100 = puVar4;
        local_f8 = puVar4;
        if (psVar5 != (short *)0x0) {
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar3 = lVar3 + 1;
                sVar1 = psVar5[lVar3];
            }
            FUN_14001c480(local_e0,psVar5);
            puVar6 = (undefined *)FUN_1400b7660(&local_e8);
            if (puVar6 != local_108) {
                FUN_14001c480(local_108,*(undefined8 *)(puVar6 + 8));
                puVar4 = local_100;
            }
        }
        lVar3 = FUN_14018f0e0(local_108,puVar4);
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
        if (local_100 != (undefined2 *)0x0) {
            FUN_14018b900(local_100,0);
        }
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



undefined8 FUN_1405eecf0(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            lVar5 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar5 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar5 != 0) {
                puVar3 = *(uint **)(param_1 + 0x10);
                uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x70) + 0x10c);
                puVar3[2] = 1;
                *puVar3 = (uVar1 & 0x200) >> 9;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    *puVar4 = 0;
    puVar4[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405eedb0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 local_14;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Spell");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if ((lVar4 != 0) &&
                (puVar2 = *(undefined4 **)(lVar4 + 0x70), (puVar2[0x42] & 0x20000000) != 0)) {
                uVar3 = FUN_1405a4d90(puVar2,*puVar2);
                local_20 = 0xf;
                local_28 = (ulonglong)uVar3;
                local_14 = 9;
                local_18 = 0;
                FUN_140501210(param_1,&local_28);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_1405eee80(longlong *param_1,uint *param_2,longlong *param_3)

{
    int *piVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;

    FUN_140052360();
    uVar2 = param_3[1];
    uVar4 = 0;
    if (uVar2 != 0) {
        do {
            uVar4 = uVar4 + 1;
            *(int *)(*param_1 + -4 + uVar4 * 4) =
                    *(int *)(*param_3 + -4 + uVar4 * 4) - *(int *)(*param_3 + (uVar2 >> 1) * 4);
        } while (uVar4 < (ulonglong)param_3[1]);
    }
    uVar4 = 1;
    uVar2 = 0xffffffffffffffff;
    *param_2 = 0;
    if (1 < (ulonglong)param_1[1]) {
        do {
            uVar5 = *(int *)(*param_1 + uVar4 * 4) - *(int *)(*param_1 + -4 + uVar4 * 4);
            uVar3 = (int)*param_2 >> 0x1f;
            if ((int)((*param_2 ^ uVar3) - uVar3) <
                (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
                *param_2 = uVar5;
                uVar2 = uVar4;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)param_1[1]);
        if ((uVar2 != 0xffffffffffffffff) &&
            (uVar3 = *param_2, 5000 < (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
            if ((int)uVar3 < 1) {
                uVar3 = uVar3 + 1000;
            }
            else {
                uVar3 = uVar3 - 1000;
            }
            *param_2 = uVar3;
            if (uVar2 < (ulonglong)param_1[1]) {
                do {
                    piVar1 = (int *)(*param_1 + uVar2 * 4);
                    uVar2 = uVar2 + 1;
                    *piVar1 = *piVar1 - *param_2;
                } while (uVar2 < (ulonglong)param_1[1]);
            }
        }
    }
    return;
}



void FUN_1405eef90(float *param_1,float *param_2,float *param_3,longlong *param_4)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined auVar7 [16];
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;

    uVar3 = param_4[1];
    uVar6 = 0;
    fVar12 = 0.0;
    fVar8 = 0.0;
    uVar4 = uVar6;
    if (3 < uVar3) {
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
        fVar11 = 0.0;
        do {
            piVar2 = (int *)(*param_4 + uVar4 * 4);
            uVar4 = (ulonglong)((int)uVar4 + 4);
            fVar8 = fVar8 + (float)*piVar2;
            fVar9 = fVar9 + (float)piVar2[1];
            fVar10 = fVar10 + (float)piVar2[2];
            fVar11 = fVar11 + (float)piVar2[3];
        } while (uVar4 < uVar3 - ((uint)uVar3 & 3));
        fVar8 = fVar10 + fVar8 + fVar11 + fVar9;
    }
    if (uVar4 < uVar3) {
        do {
            lVar1 = uVar4 * 4;
            uVar4 = (ulonglong)((int)uVar4 + 1);
            fVar8 = fVar8 + (float)*(int *)(*param_4 + lVar1);
        } while (uVar4 < uVar3);
    }
    fVar9 = (float)(uVar3 - 1);
    if ((longlong)(uVar3 - 1) < 0) {
        fVar9 = fVar9 + 1.844674e+19;
    }
    fVar10 = (float)uVar3;
    if ((longlong)uVar3 < 0) {
        fVar10 = fVar10 + 1.844674e+19;
    }
    fVar13 = 0.0;
    fVar11 = 0.0;
    fVar9 = (fVar9 + 1.0) * fVar9 * 0.5 * (1.0 / fVar10);
    fVar8 = (1.0 / fVar10) * fVar8;
    if (uVar3 != 0) {
        uVar4 = uVar6;
        do {
            uVar5 = (ulonglong)((int)uVar4 + 1);
            fVar10 = (float)uVar4 - fVar9;
            fVar13 = fVar13 + fVar10 * fVar10;
            fVar11 = fVar11 + ((float)*(int *)(*param_4 + uVar4 * 4) - fVar8) * fVar10;
            uVar4 = uVar5;
        } while (uVar5 < uVar3);
    }
    *param_2 = fVar11 / fVar13;
    fVar8 = fVar8 - (fVar11 / fVar13) * fVar9;
    *param_1 = fVar8;
    uVar3 = param_4[1];
    if (uVar3 != 0) {
        do {
            uVar4 = (ulonglong)((int)uVar6 + 1);
            fVar9 = (float)*(int *)(*param_4 + uVar6 * 4) - ((float)uVar6 * *param_2 + fVar8);
            fVar12 = fVar12 + fVar9 * fVar9;
            uVar6 = uVar4;
        } while (uVar4 < uVar3);
    }
    auVar7 = ZEXT416((uint)(float)(uVar3 - 2)) & (undefined  [16])0xffffffffffffffff;
    if ((longlong)(uVar3 - 2) < 0) {
        auVar7 = CONCAT124(SUB1612(auVar7 >> 0x20,0),SUB164(auVar7,0) + 1.844674e+19);
    }
    *param_3 = SQRT(fVar12 / SUB164(auVar7,0));
    return;
}



void FUN_1405ef190(longlong param_1)

{
    longlong lVar1;
    longlong local_28;
    ulonglong local_20;
    longlong local_18;
    undefined8 local_10;

    local_10 = 0;
    local_18 = 0;
    if (DAT_140c886b8 != 0) {
        FUN_1401a4200(param_1,&local_18);
    }
    lVar1 = local_18;
    local_20 = 0;
    local_28 = 0;
    FUN_1405eee80(&local_28,param_1 + 0x7dd0,&local_18);
    if (local_20 < 3) {
        *(undefined4 *)(param_1 + 0x7dd4) = 0;
        *(undefined4 *)(param_1 + 0x7dd8) = 0;
        *(undefined4 *)(param_1 + 0x7ddc) = 0;
    }
    else {
        FUN_1405eef90();
    }
    FUN_1403f4900(param_1,0x23c,param_1 + 0x7dc0);
    FUN_1403b55e0(param_1);
    if (local_28 != 0) {
        (**(code **)(*(longlong *)(local_28 + -0x10) + 8))(local_28 + -0x10);
    }
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return;
}



undefined8 FUN_1405ef270(longlong param_1,byte *param_2)

{
    if (*(longlong *)(param_1 + 0x7e58) == 0) {
        FUN_140115f50(param_1 + 0x7e40);
        FUN_140115f50(param_1 + 0x7e30);
        FUN_140250b70(param_1 + 0x7e40,*param_2);
        FUN_140250b70(param_1 + 0x7e30,*param_2);
        FUN_1405eff20(param_1 + 0x7e50,*param_2);
        FUN_1407db590(*(undefined8 *)(param_1 + 0x7e50),*(undefined8 *)(param_2 + 8),
                      (ulonglong)*param_2 * 0x30);
        FUN_1405ef320(param_1);
    }
    return 0;
}



void FUN_1405ef320(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    short *psVar4;
    ulonglong uVar5;
    undefined *puVar6;
    ulonglong uVar7;
    undefined2 *puVar8;
    longlong lVar9;
    undefined2 *puVar10;
    undefined2 *puVar11;
    uint uVar12;
    longlong lVar13;
    longlong lVar14;
    int iVar16;
    undefined auStack296 [32];
    undefined4 local_108;
    undefined8 *local_100;
    ulonglong local_f8;
    uint local_e8;
    int local_e4;
    int local_e0;
    undefined local_d8 [8];
    undefined2 *local_d0;
    undefined2 *local_c8;
    undefined2 *local_c0;
    longlong local_b8;
    undefined8 local_b0;
    undefined *local_a8;
    undefined8 local_a0;
    code *local_98;
    short local_88 [40];
    ulonglong local_38;
    ulonglong uVar15;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    psVar4 = (short *)FUN_14034bdd0(param_1,0x6c);
    uVar15 = 0;
    local_d0 = (undefined2 *)0x0;
    local_c0 = (undefined2 *)0x0;
    sVar1 = *psVar4;
    uVar5 = uVar15;
    while (sVar1 != 0) {
        uVar5 = uVar5 + 1;
        sVar1 = psVar4[uVar5];
    }
    lVar13 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar13 + 1;
    if (uVar5 < 0x7fffffffffffffff) {
        local_d0 = (undefined2 *)FUN_14018b280(uVar5 * 2,0);
        local_c0 = local_d0 + uVar5;
    }
    puVar10 = local_d0;
    FUN_1407db590(local_d0,psVar4,lVar13 * 2);
    puVar11 = puVar10 + lVar13;
    if (puVar11 != (undefined2 *)0x0) {
        *puVar11 = 0;
    }
    uVar5 = uVar15;
    local_c8 = puVar11;
    if (puVar10 == puVar11) {
        do {
            psVar4 = &DAT_1409f3ac6 + uVar5;
            uVar5 = uVar5 + 1;
        } while (*psVar4 != 0);
        lVar13 = uVar5 * 2;
        uVar5 = (longlong)puVar11 - (longlong)puVar10 >> 1;
        uVar7 = lVar13 >> 1;
        if (uVar5 < uVar7) {
            lVar14 = uVar5 * 2;
            FUN_1407db590(puVar10,&DAT_1409f3ac4,lVar14);
            FUN_14001c310(local_d8,&DAT_1409f3ac4 + lVar14,&DAT_1409f3ac4 + lVar13);
            puVar10 = local_d0;
            puVar11 = local_c8;
        }
        else {
            FUN_1407db590(puVar10,&DAT_1409f3ac4,uVar7 * 2);
            puVar8 = puVar10 + uVar7;
            if (puVar8 != puVar11) {
                FUN_1407db590(puVar8,puVar11,2);
                puVar11 = puVar11 + -((longlong)puVar11 - (longlong)puVar8 >> 1);
            }
        }
    }
    local_e4 = 0;
    local_e8 = 0;
    if (*(longlong *)(param_1 + 0x7e58) != 0) {
        do {
            uVar12 = (uint)uVar15;
            local_b8 = uVar15 * 0x30;
            lVar13 = *(longlong *)(param_1 + 0x7e50) + local_b8;
            if ((*(int *)(lVar13 + 8) == 0) || (*(longlong *)(lVar13 + 0x10) == 0)) {
                puVar6 = (undefined *)(*(longlong *)(param_1 + 0x7e40) + uVar15 * 0x20);
                iVar16 = 1;
                if (local_d8 != puVar6) {
                    FUN_14001c480(puVar6,puVar10,puVar11);
                }
                puVar6 = (undefined *)(*(longlong *)(param_1 + 0x7e30) + uVar15 * 0x20);
                if (local_d8 != puVar6) {
                    FUN_14001c480(puVar6,puVar10,puVar11);
                }
            }
            else {
                local_e0 = 0;
                local_a8 = &DAT_1405efb00;
                local_b0 = FUN_14001c280(param_1);
                local_100 = &local_b0;
                local_108 = 0x21;
                local_f8 = uVar15;
                iVar3 = FUN_1403f82f0(param_1,10,lVar13 + 8,local_88);
                iVar16 = 0;
                if (iVar3 != 0) {
                    lVar13 = 0;
                    lVar14 = uVar15 * 0x20 + *(longlong *)(param_1 + 0x7e40);
                    sVar1 = local_88[0];
                    while (sVar1 != 0) {
                        lVar13 = lVar13 + 1;
                        sVar1 = local_88[lVar13];
                    }
                    lVar2 = *(longlong *)(lVar14 + 8);
                    uVar7 = *(longlong *)(lVar14 + 0x10) - lVar2 >> 1;
                    uVar5 = (longlong)(local_88 + lVar13) - (longlong)local_88 >> 1;
                    if (uVar7 < uVar5) {
                        FUN_1407db590(lVar2,local_88,uVar7 * 2);
                        FUN_14001c310(lVar14,local_88 +
                                             (*(longlong *)(lVar14 + 0x10) - *(longlong *)(lVar14 + 8) >> 1),
                                      local_88 + lVar13);
                        iVar16 = local_e0;
                        uVar12 = local_e8;
                    }
                    else {
                        lVar9 = uVar5 * 2;
                        FUN_1407db590(lVar2,local_88,lVar9);
                        lVar13 = *(longlong *)(lVar14 + 0x10);
                        lVar9 = lVar9 + *(longlong *)(lVar14 + 8);
                        iVar16 = local_e0;
                        uVar12 = local_e8;
                        if (lVar9 != lVar13) {
                            FUN_1407db590(lVar9,lVar13,2);
                            *(longlong *)(lVar14 + 0x10) =
                                    *(longlong *)(lVar14 + 0x10) + (lVar13 - lVar9 >> 1) * -2;
                            iVar16 = local_e0;
                            uVar12 = local_e8;
                        }
                    }
                }
                local_98 = FUN_1405efe60;
                local_a0 = FUN_14001c280(param_1);
                FUN_1403f87b0(param_1,*(undefined4 *)(local_b8 + 8 + *(longlong *)(param_1 + 0x7e50)),
                              &local_a0,uVar15);
                lVar13 = uVar15 * 0x20;
                if ((*(longlong *)(*(longlong *)(param_1 + 0x7e40) + 8 + lVar13) ==
                     *(longlong *)(*(longlong *)(param_1 + 0x7e40) + 0x10 + lVar13)) ||
                    (*(longlong *)(*(longlong *)(param_1 + 0x7e30) + 8 + lVar13) ==
                     *(longlong *)(*(longlong *)(param_1 + 0x7e30) + 0x10 + lVar13))) {
                    local_e4 = 1;
                }
            }
            local_e8 = uVar12 + 1;
            uVar15 = (ulonglong)local_e8;
        } while (uVar15 < *(ulonglong *)(param_1 + 0x7e58));
        if ((iVar16 != 0) && (local_e4 == 0)) {
            FUN_1405ef710(param_1);
        }
    }
    if (puVar10 != (undefined2 *)0x0) {
        FUN_14018b900(puVar10,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack296);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001405ef902)

void FUN_1405ef710(longlong param_1)

{
    undefined2 *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong lVar7;
    uint *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    undefined8 uVar13;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    longlong local_30;

    uVar9 = 0;
    local_50 = (undefined2 *)0x0;
    local_40 = (undefined2 *)0x0;
    uVar2 = uVar9;
    do {
        lVar10 = uVar2 + 1;
        uVar2 = uVar2 + 1;
    } while (L"\n---------------------"[lVar10] != L'\0');
    lVar10 = (longlong)(uVar2 * 2) >> 1;
    uVar2 = lVar10 + 1;
    if (uVar2 < 0x7fffffffffffffff) {
        lVar3 = uVar2 * 2;
        local_50 = (undefined2 *)FUN_14018b280(lVar3,0);
        local_40 = (undefined2 *)((longlong)local_50 + lVar3);
    }
    lVar3 = (longlong)local_50;
    lVar10 = lVar10 * 2;
    FUN_1407db590(local_50,L"\n---------------------",lVar10);
    local_48 = (undefined2 *)(lVar3 + lVar10);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    uVar2 = uVar9;
    uVar11 = uVar9;
    if (*(longlong *)(param_1 + 0x7e58) != 0) {
        do {
            uVar4 = (int)uVar11 + 1;
            lVar10 = FUN_14018efa0(local_38,
                                   L"\n%2d.    confidence: %3d%%    accountId: %6u    character:%s@%s",
                                   uVar4,*(undefined *)
                            (*(longlong *)(param_1 + 0x7e50) + 0x20 + uVar11 * 0x30),
                                   *(undefined4 *)(*(longlong *)(param_1 + 0x7e50) + uVar11 * 0x30),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x7e40) + 8 + uVar11 * 0x20),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x7e30) + 8 + uVar11 * 0x20));
            FUN_14001c310(local_58,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
            uVar11 = (ulonglong)uVar4;
        } while ((ulonglong)uVar4 < *(ulonglong *)(param_1 + 0x7e58));
    }
    do {
        lVar10 = uVar2 + 1;
        uVar2 = uVar2 + 1;
    } while (L"\n---------------------\ndetails copied to clipboard."[lVar10] != L'\0');
    FUN_14001c310(local_58,L"\n---------------------\ndetails copied to clipboard.",
                  L"\n---------------------\ndetails copied to clipboard." + uVar2);
    lVar10 = (longlong)local_50;
    uVar11 = 0;
    FUN_140003890(DAT_140c658a0,3,0,local_50,0,0);
    local_50 = (undefined2 *)FUN_14018b280(0x10);
    local_40 = local_50 + 8;
    uVar2 = uVar9;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    do {
        lVar3 = uVar2 + 1;
        uVar2 = uVar2 + 1;
    } while (L"actualScore, expectedScore, confidence, accountId, character"[lVar3] != L'\0');
    uVar6 = uVar9;
    local_48 = local_50;
    if ((longlong)(uVar2 * 2) >> 1 == 0) {
        FUN_1407db590(local_50,L"actualScore, expectedScore, confidence, accountId, character",0);
    }
    else {
        FUN_14001c310(local_58);
    }
    do {
        lVar3 = FUN_14018efa0(local_38,L", fails%d, tests%d",uVar6,uVar6);
        FUN_14001c310(local_58,*(undefined8 *)(lVar3 + 8));
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
    } while (uVar4 < 0x10);
    uVar2 = uVar9;
    if (*(longlong *)(param_1 + 0x7e58) != 0) {
        do {
            lVar7 = uVar2 * 0x30;
            uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x7e30) + 8 + uVar2 * 0x20);
            puVar8 = (uint *)(*(longlong *)(param_1 + 0x7e50) + lVar7);
            uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x7e40) + 8 + uVar2 * 0x20);
            uVar11 = uVar11 & 0xffffffff00000000 | (ulonglong)*puVar8;
            uVar4 = (uint)*(byte *)(puVar8 + 8);
            lVar3 = FUN_14018efa0(local_38,L"\r\n%u, %u, %d, %u, %s@%s",puVar8[6],puVar8[7],uVar4,uVar11,
                                  uVar12,uVar13);
            FUN_14001c310(local_58,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
            lVar3 = *(longlong *)(param_1 + 0x7e50) + lVar7;
            uVar6 = uVar9;
            if (*(char *)(lVar3 + 0x21) != '\0') {
                do {
                    lVar3 = *(longlong *)(lVar3 + 0x28);
                    lVar3 = FUN_14018efa0(local_38,L", %d, %d",*(undefined4 *)(lVar3 + 8 + uVar6 * 0xc),
                                          *(int *)(lVar3 + 4 + uVar6 * 0xc) +
                                          *(int *)(lVar3 + 8 + uVar6 * 0xc),uVar4,uVar11,uVar12,uVar13);
                    FUN_14001c310(local_58,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    uVar5 = (int)uVar6 + 1;
                    lVar3 = *(longlong *)(param_1 + 0x7e50) + lVar7;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < *(byte *)(lVar3 + 0x21));
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < *(ulonglong *)(param_1 + 0x7e58));
    }
    puVar1 = local_50;
    FUN_14063ad00(local_50);
    *(undefined8 *)(param_1 + 0x7e58) = 0;
    if (puVar1 != (undefined2 *)0x0) {
        FUN_14018b900(puVar1,0);
    }
    if (lVar10 != 0) {
        FUN_14018b900(lVar10,0);
    }
    return;
}



void FUN_1405efe60(longlong param_1,int param_2,short *param_3,ulonglong param_4)

{
    short sVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;

    param_4 = param_4 & 0xffffffff;
    if ((param_4 < *(ulonglong *)(param_1 + 0x7e58)) &&
        (*(int *)(*(longlong *)(param_1 + 0x7e50) + 8 + param_4 * 0x30) == param_2)) {
        uVar4 = 0;
        sVar1 = *param_3;
        uVar2 = uVar4;
        while (sVar1 != 0) {
            uVar2 = uVar2 + 1;
            sVar1 = param_3[uVar2];
        }
        FUN_14001c480(param_4 * 0x20 + *(longlong *)(param_1 + 0x7e30),param_3,param_3 + uVar2);
        if (*(ulonglong *)(param_1 + 0x7e48) != 0) {
            do {
                lVar3 = uVar4 * 0x20;
                if (*(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x7e40)) ==
                    *(longlong *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x7e40))) {
                    return;
                }
                lVar3 = *(longlong *)(param_1 + 0x7e30) + lVar3;
                if (*(longlong *)(lVar3 + 8) == *(longlong *)(lVar3 + 0x10)) {
                    return;
                }
                uVar4 = (ulonglong)((int)uVar4 + 1);
            } while (uVar4 < *(ulonglong *)(param_1 + 0x7e48));
        }
        FUN_1405ef710(param_1);
    }
    return;
}



void FUN_1405eff20(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1,param_2,0x30);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] * 0x30);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



undefined8 FUN_1405effd0(undefined8 param_1,ulonglong param_2)

{
    FUN_1405f0080();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1405f0010(undefined8 *param_1)

{
    undefined *puVar1;

    FUN_1405f75b0();
    *param_1 = &PTR_FUN_140b6ed20;
    puVar1 = (undefined *)FUN_14018b280();
    param_1[0x14] = puVar1;
    param_1[0x15] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x14] + 8) = 0;
    *(undefined8 *)(param_1[0x14] + 0x10) = param_1[0x14];
    *(undefined8 *)(param_1[0x14] + 0x18) = param_1[0x14];
    FUN_1400522f0(param_1 + 0x17);
    return param_1;
}



void FUN_1405f0080(longlong param_1)

{
    FUN_140019490(param_1 + 0xb8);
    FUN_14018b900(*(undefined8 *)(param_1 + 200),0);
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_140008410(param_1 + 0x98);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_1405f7620(param_1);
    return;
}



undefined8 FUN_1405f01f0(undefined8 param_1,ulonglong param_2)

{
    FUN_1405f0230();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405f0230(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x1c0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x1b0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 200);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xd0),0);
    FUN_140008410(param_1 + 0x98);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_1405f80e0(param_1);
    return;
}



wchar_t * FUN_1405f02c0(undefined4 param_1)

{
    switch(param_1) {
        case 0:
            return L"nDamage";
        case 1:
            return L"nHits";
        case 2:
            return L"nHaters";
        case 3:
            return L"nKills";
        case 4:
            return L"nDeaths";
        case 5:
            return L"nHealed";
        case 6:
            return L"nContributions";
        case 7:
            return L"nDamageReceived";
        case 8:
            return L"nHealingReceived";
        case 9:
            return L"nAssists";
        case 10:
            return L"nSaves";
        case 0xb:
            return L"nOverhealed";
        case 0xc:
            return L"nOverhealingReceived";
        case 0xd:
            return L"nMedalPoints";
        default:
            return (wchar_t *)0x0;
        case 100:
            return L"nMaxMultiKills";
        case 0x65:
            return L"nLongestImpulse";
        case 0x66:
            return L"nLongestLife";
        case 0x67:
            return L"nKillStreak";
    }
}



void FUN_1405f0430(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar1 = *(longlong *)(param_2 + 0x10);
    local_20 = 1;
    local_38 = &PTR_FUN_140b569f0;
    local_28 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar3 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    local_30 = FUN_1400578c0(lVar1);
    FUN_1405f8630(&local_38,*param_1,param_1[1],param_3,param_4);
    FUN_1400fb2a0(param_2,L"arTeamStats",local_30);
    lVar1 = *(longlong *)(param_2 + 0x10);
    local_58 = &PTR_FUN_140b569f0;
    local_40 = 1;
    local_48 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar3 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    local_50 = FUN_1400578c0(lVar1);
    FUN_1405f8760(&local_58,param_1[2],param_1[3],param_3);
    FUN_1400fb2a0(param_2,L"arParticipantStats",local_50);
    if (local_48 != 0) {
        FUN_1400579e0();
    }
    if (local_28 != 0) {
        FUN_1400579e0();
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001405f0d40)
// WARNING: Removing unreachable block (ram,0x0001405f0e04)

void FUN_1405f05b0(longlong param_1,longlong param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    double *pdVar3;
    int iVar4;
    int iVar5;
    uint *puVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    int iVar11;
    undefined8 *puVar12;
    uint uVar13;
    longlong lVar14;
    ulonglong uVar15;
    double dVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    int local_res18;
    int iStackX28;
    int local_res20;
    int iStackX36;
    ulonglong local_c0;
    int local_b8;
    int iStack180;
    undefined local_b0 [8];
    longlong local_a8;
    longlong local_90 [10];

    uVar17 = 0;
    uVar18 = 0;
    uVar13 = 0;
    do {
        puVar6 = (uint *)FUN_1405f8a80(param_2);
        uVar15 = (ulonglong)*puVar6;
        uVar7 = FUN_1405f02c0(uVar13);
        lVar1 = *(longlong *)(param_1 + 0x10);
        iVar4 = *(int *)(param_1 + 8);
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xa0);
        if (iVar4 - 1U < *(uint *)(lVar2 + 0x38)) {
            puVar12 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
        }
        else {
            dVar16 = (double)iVar4;
            if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                puVar12 = *(undefined8 **)(lVar2 + 0x20);
            }
            else {
                iStackX28 = (int)((ulonglong)dVar16 >> 0x20);
                local_res18 = SUB84(dVar16,0);
                puVar12 = (undefined8 *)
                        (*(longlong *)(lVar2 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                          (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar12 + 3) == 3) && (dVar16 == (double)puVar12[2])) goto LAB_1405f0691;
                puVar12 = (undefined8 *)puVar12[4];
            } while (puVar12 != (undefined8 *)0x0);
            puVar12 = &DAT_140a12138;
        }
        LAB_1405f0691:
        puVar10 = *(undefined8 **)(lVar1 + 0x10);
        *puVar10 = *puVar12;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar12,uVar7,uVar15 & 0xffffffff);
        uVar13 = uVar13 + 1;
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar9 = *plVar9 + -0x10;
    } while (uVar13 < 0xe);
    uVar13 = 100;
    do {
        puVar6 = (uint *)FUN_1405f8a80(param_2);
        uVar15 = (ulonglong)*puVar6;
        uVar7 = FUN_1405f02c0(uVar13);
        lVar1 = *(longlong *)(param_1 + 0x10);
        iVar4 = *(int *)(param_1 + 8);
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xa0);
        if (iVar4 - 1U < *(uint *)(lVar2 + 0x38)) {
            puVar12 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
        }
        else {
            dVar16 = (double)iVar4;
            if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                puVar12 = *(undefined8 **)(lVar2 + 0x20);
            }
            else {
                iStackX28 = (int)((ulonglong)dVar16 >> 0x20);
                local_res18 = SUB84(dVar16,0);
                puVar12 = (undefined8 *)
                        (*(longlong *)(lVar2 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                          (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar12 + 3) == 3) && (dVar16 == (double)puVar12[2])) goto LAB_1405f0771;
                puVar12 = (undefined8 *)puVar12[4];
            } while (puVar12 != (undefined8 *)0x0);
            puVar12 = &DAT_140a12138;
        }
        LAB_1405f0771:
        puVar10 = *(undefined8 **)(lVar1 + 0x10);
        *puVar10 = *puVar12;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar12,uVar7,uVar15 & 0xffffffff);
        uVar13 = uVar13 + 1;
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar9 = *plVar9 + -0x10;
    } while (uVar13 < 0x68);
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res18 = 1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    uVar7 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar12 + 1) = 5;
    *puVar12 = uVar7;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    iVar4 = FUN_1400578c0(lVar1);
    (**(code **)(*param_3 + 0x28))(param_3);
    (**(code **)(*param_3 + 0x20))(param_3);
    FUN_1405f6f90();
    local_c0 = 0;
    do {
        if (local_90[local_c0] != 0) {
            lVar2 = *(longlong *)(param_1 + 0x10);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar12 = *(undefined8 **)(lVar2 + 0x10);
            uVar7 = FUN_14005c1b0(lVar2,0,0);
            *(undefined4 *)(puVar12 + 1) = 5;
            *puVar12 = uVar7;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar2);
            uVar7 = FUN_14034bdd0();
            uVar13 = iVar5 - 1;
            lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (uVar13 < *(uint *)(lVar8 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar8 + 0x18));
            }
            else {
                dVar16 = (double)iVar5;
                if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                    puVar12 = *(undefined8 **)(lVar8 + 0x20);
                }
                else {
                    iStack180 = (int)((ulonglong)dVar16 >> 0x20);
                    local_b8 = SUB84(dVar16,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar8 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack180 + local_b8) %
                              (longlong)((1 << (*(byte *)(lVar8 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar16 == (double)puVar12[2])) goto LAB_1405f090d;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_1405f090d:
            puVar10 = *(undefined8 **)(lVar2 + 0x10);
            *puVar10 = *puVar12;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            FUN_1400f0870(lVar2,puVar12,L"strName",uVar7);
            lVar8 = *(longlong *)(lVar2 + 0x10);
            puVar12 = (undefined8 *)(lVar8 + -0x10);
            *(undefined8 **)(lVar2 + 0x10) = puVar12;
            lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (uVar13 < *(uint *)(lVar14 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
            }
            else {
                dVar16 = (double)iVar5;
                if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                    puVar10 = *(undefined8 **)(lVar14 + 0x20);
                }
                else {
                    iStack180 = (int)((ulonglong)dVar16 >> 0x20);
                    local_b8 = SUB84(dVar16,0);
                    puVar10 = (undefined8 *)
                            (*(longlong *)(lVar14 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack180 + local_b8) %
                              (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar10 + 3) == 3) && (dVar16 == (double)puVar10[2])) goto LAB_1405f09ed;
                    puVar10 = (undefined8 *)puVar10[4];
                } while (puVar10 != (undefined8 *)0x0);
                puVar10 = &DAT_140a12138;
            }
            LAB_1405f09ed:
            *puVar12 = *puVar10;
            *(undefined4 *)(lVar8 + -8) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            FUN_1400f0870(lVar2);
            lVar8 = *(longlong *)(lVar2 + 0x10);
            puVar12 = (undefined8 *)(lVar8 + -0x10);
            *(undefined8 **)(lVar2 + 0x10) = puVar12;
            iVar11 = *(int *)(param_2 + 0x90 + local_c0 * 8);
            lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (uVar13 < *(uint *)(lVar14 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
            }
            else {
                dVar16 = (double)iVar5;
                if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                    puVar10 = *(undefined8 **)(lVar14 + 0x20);
                }
                else {
                    iStack180 = (int)((ulonglong)dVar16 >> 0x20);
                    local_b8 = SUB84(dVar16,0);
                    puVar10 = (undefined8 *)
                            (*(longlong *)(lVar14 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack180 + local_b8) %
                              (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar10 + 3) == 3) && (dVar16 == (double)puVar10[2])) goto LAB_1405f0ab0;
                    puVar10 = (undefined8 *)puVar10[4];
                } while (puVar10 != (undefined8 *)0x0);
                puVar10 = &DAT_140a12138;
            }
            LAB_1405f0ab0:
            *puVar12 = *puVar10;
            *(undefined4 *)(lVar8 + -8) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            lVar8 = FUN_14018f0e0(local_b0,L"nValue");
            lVar8 = *(longlong *)(lVar8 + 8);
            if (lVar8 == 0) {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            }
            else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *)(lVar8 + lVar14) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar12 = *(undefined8 **)(lVar2 + 0x10);
                uVar7 = FUN_140062650(lVar2,lVar8,lVar14);
                *(undefined4 *)(puVar12 + 1) = 4;
                *puVar12 = uVar7;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            if (local_a8 != 0) {
                FUN_14018b900(local_a8,0);
            }
            pdVar3 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar11;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
            FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                          *(longlong *)(lVar2 + 0x10) + -0x10);
            *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
            lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xa0);
            if (iVar4 - 1U < *(uint *)(lVar8 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar8 + 0x18));
            }
            else {
                dVar16 = (double)iVar4;
                if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                    puVar12 = *(undefined8 **)(lVar8 + 0x20);
                }
                else {
                    iStackX36 = (int)((ulonglong)dVar16 >> 0x20);
                    local_res20 = SUB84(dVar16,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar8 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                              (longlong)((1 << (*(byte *)(lVar8 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar16 == (double)puVar12[2])) goto LAB_1405f0c1d;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_1405f0c1d:
            puVar10 = *(undefined8 **)(lVar1 + 0x10);
            *puVar10 = *puVar12;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            pdVar3 = *(double **)(lVar1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            iVar11 = local_res18 + 1;
            *pdVar3 = (double)local_res18;
            lVar8 = *(longlong *)(lVar1 + 0x10);
            puVar12 = (undefined8 *)(lVar8 + 0x10);
            *(undefined8 **)(lVar1 + 0x10) = puVar12;
            lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xa0);
            if (uVar13 < *(uint *)(lVar14 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
            }
            else {
                dVar16 = (double)iVar5;
                if (dVar16 == (double)CONCAT44(uVar18,uVar17)) {
                    puVar10 = *(undefined8 **)(lVar14 + 0x20);
                }
                else {
                    iStackX36 = (int)((ulonglong)dVar16 >> 0x20);
                    local_res20 = SUB84(dVar16,0);
                    puVar10 = (undefined8 *)
                            (*(longlong *)(lVar14 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                              (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar10 + 3) == 3) && (dVar16 == (double)puVar10[2])) goto LAB_1405f0cf0;
                    puVar10 = (undefined8 *)puVar10[4];
                } while (puVar10 != (undefined8 *)0x0);
                puVar10 = &DAT_140a12138;
            }
            LAB_1405f0cf0:
            *puVar12 = *puVar10;
            *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(puVar10 + 1);
            lVar8 = *(longlong *)(lVar1 + 0x10);
            *(longlong *)(lVar1 + 0x10) = lVar8 + 0x10;
            FUN_14005ea50(lVar1,lVar8 + -0x20,lVar8 + -0x10,lVar8);
            *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
            local_res18 = iVar11;
            if (-1 < iVar5) {
                plVar9 = (longlong *)FUN_1400580e0(lVar2,0xffffd8f0);
                puVar12 = *(undefined8 **)(*plVar9 + 0x20);
                do {
                    if ((*(int *)(puVar12 + 3) == 3) &&
                        ((double)CONCAT44(uVar18,uVar17) == (double)puVar12[2])) goto LAB_1405f0d69;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
                LAB_1405f0d69:
                puVar10 = *(undefined8 **)(lVar2 + 0x10);
                *puVar10 = *puVar12;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_140058b30(lVar2,0xffffd8f0);
                pdVar3 = *(double **)(lVar2 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar5;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_140058b30(lVar2);
            }
        }
        local_c0 = local_c0 + 1;
    } while (local_c0 < 6);
    FUN_1400fb2a0(param_1,L"arCustomStats",iVar4);
    if (-1 < iVar4) {
        plVar9 = (longlong *)FUN_1400580e0(lVar1,0xffffd8f0);
        puVar12 = *(undefined8 **)(*plVar9 + 0x20);
        do {
            if ((*(int *)(puVar12 + 3) == 3) && ((double)CONCAT44(uVar18,uVar17) == (double)puVar12[2]))
                goto LAB_1405f0e2b;
            puVar12 = (undefined8 *)puVar12[4];
        } while (puVar12 != (undefined8 *)0x0);
        puVar12 = &DAT_140a12138;
        LAB_1405f0e2b:
        puVar10 = *(undefined8 **)(lVar1 + 0x10);
        *puVar10 = *puVar12;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_140058b30(lVar1,0xffffd8f0,iVar4);
        pdVar3 = *(double **)(lVar1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar4;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_140058b30(lVar1,0xffffd8f0,0);
    }
    return;
}



void FUN_1405f0ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    undefined auStack264 [32];
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    undefined4 local_cc;
    undefined4 local_c8;
    undefined4 local_c4;
    undefined4 local_c0;
    undefined4 local_bc;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_e4 = DAT_140c636a8;
    local_dc = DAT_140c636a8;
    local_d4 = DAT_140c636a8;
    local_cc = DAT_140c636a8;
    local_c4 = DAT_140c636a8;
    local_bc = DAT_140c636a8;
    local_b4 = DAT_140c636a8;
    local_ac = DAT_140c636a8;
    local_a4 = DAT_140c636a8;
    local_9c = DAT_140c636a8;
    local_94 = DAT_140c636a8;
    local_8c = DAT_140c636a8;
    local_84 = DAT_140c636a8;
    local_7c = DAT_140c636a8;
    local_74 = DAT_140c636a8;
    local_6c = DAT_140c636a8;
    local_64 = DAT_140c636a8;
    local_5c = DAT_140c636a8;
    local_54 = DAT_140c636a8;
    local_4c = DAT_140c636a8;
    local_44 = DAT_140c636a8;
    local_3c = DAT_140c636a8;
    local_34 = DAT_140c636a8;
    local_2c = DAT_140c636a8;
    FUN_1405f8c40(&local_e8);
    FUN_1405f05b0(param_1,&local_e8,param_3);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack264);
    return;
}



longlong FUN_1405f0f90(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
    undefined4 *puVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    undefined local_48 [8];
    longlong local_40;

    plVar9 = (longlong *)0x0;
    lVar5 = FUN_140229540(*param_2);
    if (lVar5 != 0) {
        puVar1 = param_2 + 2;
        lVar6 = FUN_1405f1540(local_48,puVar1);
        lVar5 = *(longlong *)(param_1 + 0x10);
        uVar8 = *(undefined8 *)(lVar6 + 8);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_1 + 0x10),puVar3,L"strName",uVar8);
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar2 = *plVar2 + -0x10;
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        uVar8 = FUN_14034bdd0();
        lVar5 = *(longlong *)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_1 + 0x10),puVar3,L"strTeamName",uVar8);
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar2 = *plVar2 + -0x10;
        lVar5 = *(longlong *)(param_1 + 0x10);
        uVar10 = (ulonglong)(uint)param_2[6];
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar3,L"eClass",uVar10 & 0xffffffff);
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar2 = *plVar2 + -0x10;
        lVar5 = *(longlong *)(param_1 + 0x10);
        uVar10 = (ulonglong)(uint)param_2[7];
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar3,L"ePlayerPath",uVar10 & 0xffffffff);
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar2 = *plVar2 + -0x10;
        iVar4 = FUN_140649870(*(undefined8 *)(param_1 + 0x10),param_2[1]);
        if (iVar4 != 0) {
            FUN_1400fb540(param_1,L"unitParticipant");
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar2 = *plVar2 + -0x10;
        }
        FUN_1405f05b0(param_1,param_2 + 8,param_3);
        if (param_4 != 0) {
            lVar5 = FUN_14018b280(0x68);
            if (lVar5 != 0) {
                lVar6 = FUN_1405f1540(local_48,puVar1);
                plVar9 = (longlong *)FUN_14073e140(lVar5,*(undefined8 *)(lVar6 + 8),0,3,7,param_2[1],puVar1)
                        ;
                if (local_40 != 0) {
                    FUN_14018b900(local_40,0);
                }
            }
            if (plVar9 != (longlong *)0x0) {
                (**(code **)*plVar9)(plVar9);
            }
            iVar4 = FUN_14073eb30(*(undefined8 *)(param_1 + 0x10),plVar9);
            if (iVar4 != 0) {
                FUN_1400fb540(param_1,L"rptParticipant");
                plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
                *plVar2 = *plVar2 + -0x10;
            }
            if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
                (**(code **)(*plVar9 + 8))(plVar9);
            }
        }
        lVar5 = 1;
    }
    return lVar5;
}



int * FUN_1405f1250(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    uint *puVar4;
    int *piVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    undefined local_38 [8];
    longlong local_30;

    piVar5 = (int *)FUN_140229540(*param_2);
    if (piVar5 != (int *)0x0) {
        uVar6 = FUN_14034bdd0();
        lVar10 = *(longlong *)(param_1 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_1 + 0x10),puVar3,L"strTeamName",uVar6);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar10 = *(longlong *)(param_1 + 0x10);
        iVar2 = *piVar5;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_1 + 0x10);
        lVar8 = FUN_14018f0e0(local_38,L"bIsMyTeam");
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar9) != '\0');
            FUN_140058710(lVar10);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar4 = *(uint **)(lVar10 + 0x10);
        puVar4[2] = 1;
        *puVar4 = (uint)(param_4 == iVar2);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10,uVar6,*(longlong *)(lVar10 + 0x10) + -0x20,
                      *(longlong *)(lVar10 + 0x10) + -0x10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        FUN_1405f05b0(param_1,param_2 + 1,param_3);
        piVar5 = (int *)0x1;
    }
    return piVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405f13f0(undefined8 param_1,longlong *param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    uint uVar7;
    longlong lVar8;

    lVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64a4c == 0) {
            iVar3 = FUN_140227520();
            if (iVar3 < 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c64600 + 0x28))();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_PublicEventStatDisplay_140a6c468,DAT_140c63858);
    }
    uVar7 = 0;
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64a4c == 0) {
                    iVar3 = FUN_140227520();
                    if (iVar3 < 0) {
                        lVar5 = 0;
                    }
                    else {
                        lVar5 = (**(code **)(*DAT_140c64600 + 0x20))(DAT_140c64600,uVar7);
                    }
                }
                else {
                    lVar5 = 0;
                }
            }
            else {
                lVar5 = (*DAT_140c63848)(&PTR_u_PublicEventStatDisplay_140a6c468,uVar7,DAT_140c63858);
            }
            iVar3 = *(int *)(lVar5 + 8);
            iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
            if (iVar2 == iVar3) break;
            if ((iVar3 == 0) &&
                (iVar3 = (**(code **)(*param_2 + 0x28))(param_2), iVar3 == *(int *)(lVar5 + 4))) {
                lVar8 = lVar5;
            }
            uVar7 = uVar7 + 1;
            lVar5 = lVar8;
        } while (uVar7 < uVar1);
        if (lVar5 != 0) {
            uVar1 = 1;
            lVar8 = 0x12;
            do {
                if ((*(uint *)(lVar5 + 0xc) & uVar1) != 0) {
                    uVar4 = FUN_1405f8900(uVar1);
                    uVar6 = FUN_1405f02c0(uVar4);
                    FUN_1400fad30(param_1,uVar6);
                }
                uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
                lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
        }
    }
    return;
}



void FUN_1405f1540(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    short *psVar6;
    longlong lVar7;
    longlong lVar8;
    undefined auStack200 [32];
    undefined4 local_a8;
    undefined8 *local_a0;
    undefined8 local_98;
    undefined8 local_88;
    undefined8 local_80;
    short local_78 [40];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    if (*(longlong *)(param_2 + 8) == 0) {
        psVar6 = (short *)FUN_14034bdd0(param_1,0x6c);
        lVar8 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        sVar3 = *psVar6;
        while (sVar3 != 0) {
            lVar8 = lVar8 + 1;
            sVar3 = psVar6[lVar8];
        }
    }
    else {
        lVar8 = 0;
        local_a0 = &local_88;
        local_98 = 0;
        local_80 = 0;
        local_88 = 0;
        local_a8 = 0x21;
        iVar5 = FUN_1403f82f0(DAT_140c65898,10,param_2,local_78);
        if (iVar5 != 0) {
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            while (local_78[0] != 0) {
                lVar8 = lVar8 + 1;
                local_78[0] = local_78[lVar8];
            }
            lVar8 = lVar8 * 2 >> 1;
            uVar1 = lVar8 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar4 = uVar1 * 2;
                lVar7 = FUN_14018b280(lVar4,0);
                *(longlong *)(param_1 + 8) = lVar7;
                *(longlong *)(param_1 + 0x10) = lVar7;
                *(longlong *)(param_1 + 0x18) = lVar7 + lVar4;
            }
            lVar4 = *(longlong *)(param_1 + 8);
            lVar8 = lVar8 * 2;
            FUN_1407db590(lVar4,local_78,lVar8);
            puVar2 = (undefined2 *)(lVar8 + lVar4);
            *(undefined2 **)(param_1 + 0x10) = puVar2;
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            goto LAB_1405f16d9;
        }
        psVar6 = (short *)FUN_14034bdd0();
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        sVar3 = *psVar6;
        while (sVar3 != 0) {
            lVar8 = lVar8 + 1;
            sVar3 = psVar6[lVar8];
        }
    }
    FUN_14001c1b0(param_1,psVar6,psVar6 + lVar8);
    LAB_1405f16d9:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack200);
    return;
}



undefined8 FUN_1405f1740(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_140008410();
    return 0;
}



undefined8 FUN_1405f17c0(longlong *param_1,int param_2,int param_3)

{
    int iVar1;

    param_2 = DAT_140c636a8 - param_2;
    *(int *)(param_1 + 5) = param_3;
    *(int *)(param_1 + 7) = param_2;
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (iVar1 != 0) {
        *(int *)(param_1 + 8) = DAT_140c636a8;
        return 0;
    }
    if (param_3 != 0) {
        *(int *)((longlong)param_1 + 0x3c) = DAT_140c636a8;
    }
    return 0;
}



undefined8 * FUN_1405f1830(longlong *param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;

    puVar7 = (undefined8 *)0x0;
    if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
    }
    (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_140487750();
    puVar4 = puVar7;
    if ((lVar3 != 0) &&
        (iVar2 = FUN_140487e40(lVar3,*(undefined4 *)(param_1 + 3),0,0,0,0,0),
                puVar4 = (undefined8 *)0x0, iVar2 != 0)) {
        puVar4 = (undefined8 *)FUN_14018db00(0,1,4);
        *(int *)puVar4 = iVar2;
        if (param_4 != (undefined4 *)0x0) {
            *param_4 = 1;
        }
        if (param_3 != 0) {
            param_2[1] = 1;
            *param_2 = puVar4;
            return param_2;
        }
    }
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x118))(param_1);
    lVar3 = puVar5[1];
    if (lVar3 != 0) {
        puVar6 = (undefined8 *)FUN_14018b280(lVar3 * 4 + 0x10,0);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = lVar3;
            *puVar6 = &PTR_LAB_140b55060;
            puVar7 = puVar6;
        }
        puVar7 = puVar7 + 2;
    }
    lVar1 = lVar3 * 4;
    FUN_1407db590(puVar7,*puVar5,lVar1);
    if (puVar4 != (undefined8 *)0x0) {
        (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
    }
    lVar8 = (**(code **)(*param_1 + 0x140))(param_1);
    puVar4 = puVar7;
    if (*(int *)(*(longlong *)(lVar8 + 8) + 0x10) != 0) {
        lVar8 = (**(code **)(*param_1 + 0x140))(param_1);
        lVar3 = lVar3 + 1;
        lVar8 = *(longlong *)(lVar8 + 8);
        puVar5 = (undefined8 *)FUN_14018db00(puVar7,lVar3,4);
        *(undefined4 *)(lVar1 + (longlong)puVar5) = *(undefined4 *)(lVar8 + 0x10);
        if ((puVar7 != puVar5) &&
            (FUN_1407db590(puVar5,puVar7,lVar1), puVar4 = puVar5, puVar7 != (undefined8 *)0x0)) {
            (**(code **)(puVar7[-2] + 8))(puVar7 + -2);
        }
    }
    param_2[1] = lVar3;
    *param_2 = puVar4;
    return param_2;
}



bool FUN_1405f19e0(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x150))();
    if (iVar1 != 0x14) {
        iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
        if (iVar1 != 0x13) {
            iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
            if (iVar1 != 0x17) {
                iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
                if (iVar1 != 0x1b) {
                    iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
                    if (iVar1 != 0x20) {
                        iVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
                        return iVar1 != 0;
                    }
                }
            }
            return true;
        }
    }
    return false;
}



uint FUN_1405f1a70(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    uVar1 = (**(code **)(*param_1 + 0x150))();
    switch(uVar1) {
        case 1:
        case 8:
        case 0xc:
        case 0xf:
        case 0x10:
        case 0x14:
            lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
            return *(uint *)(lVar2 + 0xc) & 2;
        default:
            return 0;
    }
}



undefined8 FUN_1405f1af0(longlong *param_1)

{
    uint uVar1;
    int iVar2;

    uVar1 = (**(code **)(*param_1 + 0x178))();
    if ((uVar1 >> 9 & 1) != 0) {
        return 1;
    }
    iVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    if ((iVar2 != 0) && (uVar1 = (**(code **)(*param_1 + 0x178))(param_1), (uVar1 >> 0xb & 1) != 0)) {
        return 1;
    }
    return 0;
}



undefined4 FUN_1405f1b40(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    return *(undefined4 *)(lVar1 + 0x3c);
}



ulonglong FUN_1405f2420(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong **ppuVar5;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar2 = (**(code **)(param_1 + 0xd0))(local_res10);
    uVar3 = uVar2 / *(ulonglong *)(param_1 + 0xc0);
    uVar4 = uVar2 % *(ulonglong *)(param_1 + 0xc0);
    ppuVar5 = (ulonglong **)(*(longlong *)(param_1 + 200) + uVar4 * 8);
    if (*(longlong *)(*(longlong *)(param_1 + 200) + uVar4 * 8) == 0) {
        return uVar3;
    }
    while ((uVar2 != **ppuVar5 ||
            (uVar3 = (**(code **)(param_1 + 0xd8))(local_res10,*ppuVar5 + 2), (int)uVar3 == 0))) {
        ppuVar5 = (ulonglong **)(*ppuVar5 + 1);
        if (*ppuVar5 == (ulonglong *)0x0) {
            return uVar3;
        }
    }
    puVar1 = *ppuVar5;
    *ppuVar5 = (ulonglong *)puVar1[1];
    uVar2 = FUN_14018b900(puVar1,0);
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + -1;
    return uVar2;
}



undefined8 FUN_1405f2510(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong lVar4;
    char *pcVar5;
    char *pcVar6;
    ulonglong uVar7;
    uint uVar8;
    bool bVar9;

    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x18) = param_2[1];
    *(undefined4 *)(param_1 + 0x1c) = param_2[2];
    *(undefined4 *)(param_1 + 0x24) = param_2[3];
    *(undefined4 *)(param_1 + 0x20) = param_2[4];
    FUN_140008410();
    uVar7 = 0;
    if (param_2[6] != 0) {
        do {
            pcVar2 = *(char **)(param_1 + 0xe8);
            uVar8 = *(uint *)(*(longlong *)(param_2 + 8) + uVar7 * 8);
            uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4 + uVar7 * 8);
            bVar9 = true;
            pcVar3 = pcVar2;
            pcVar6 = *(char **)(pcVar2 + 8);
            while (pcVar6 != (char *)0x0) {
                bVar9 = uVar8 < *(uint *)(pcVar6 + 0x20);
                pcVar3 = pcVar6;
                if (bVar9) {
                    pcVar6 = *(char **)(pcVar6 + 0x10);
                }
                else {
                    pcVar6 = *(char **)(pcVar6 + 0x18);
                }
            }
            pcVar6 = pcVar3;
            if (bVar9) {
                if (pcVar3 != *(char **)(pcVar2 + 0x10)) {
                    if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                        pcVar6 = *(char **)(pcVar3 + 0x18);
                    }
                    else {
                        pcVar6 = *(char **)(pcVar3 + 0x10);
                        if (pcVar6 == (char *)0x0) {
                            pcVar6 = *(char **)(pcVar3 + 8);
                            pcVar5 = pcVar6;
                            if (pcVar3 == *(char **)(pcVar6 + 0x10)) {
                                do {
                                    pcVar6 = *(char **)(pcVar5 + 8);
                                    bVar9 = pcVar5 == *(char **)(pcVar6 + 0x10);
                                    pcVar5 = pcVar6;
                                } while (bVar9);
                            }
                        }
                        else {
                            for (pcVar5 = *(char **)(pcVar6 + 0x18); pcVar5 != (char *)0x0;
                                 pcVar5 = *(char **)(pcVar5 + 0x18)) {
                                pcVar6 = pcVar5;
                            }
                        }
                    }
                    goto LAB_1405f260d;
                }
                LAB_1405f2617:
                if ((pcVar3 == pcVar2) || (uVar8 < *(uint *)(pcVar3 + 0x20))) {
                    lVar4 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar4 + 0x20) = CONCAT44(uVar1,uVar8);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar4;
                    pcVar2 = *(char **)(param_1 + 0xe8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar4;
                        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = lVar4;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar4;
                    }
                }
                else {
                    lVar4 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar4 + 0x20) = CONCAT44(uVar1,uVar8);
                    }
                    *(longlong *)(pcVar3 + 0x18) = lVar4;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 0xe8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = lVar4;
                    }
                }
                *(char **)(lVar4 + 8) = pcVar3;
                *(undefined8 *)(lVar4 + 0x10) = 0;
                *(undefined8 *)(lVar4 + 0x18) = 0;
                FUN_1400081c0(lVar4,*(longlong *)(param_1 + 0xe8) + 8);
                *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 1;
            }
            else {
                LAB_1405f260d:
                if (*(uint *)(pcVar6 + 0x20) < uVar8) goto LAB_1405f2617;
            }
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
        } while (uVar8 < (uint)param_2[6]);
    }
    return 0;
}



undefined8 FUN_1405f26e0(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x20) = 3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_140008410();
    return 0;
}



undefined4 * FUN_1405f2950(undefined4 *param_1,undefined4 *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    param_1[0x25] = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x27] = param_2[0x27];
    param_1[0x28] = param_2[0x28];
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = param_2[0x2d];
    param_1[0x2e] = param_2[0x2e];
    param_1[0x2f] = param_2[0x2f];
    return param_1;
}



undefined8 FUN_1405f2e90(longlong *param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;

    iVar3 = (**(code **)(*param_1 + 0x68))();
    if (iVar3 == 0) {
        return 0x80004005;
    }
    lVar8 = *(longlong *)(param_1[0xc] + 0x10);
    uVar9 = 0;
    uVar11 = uVar9;
    uVar10 = uVar9;
    uVar12 = uVar9;
    if (lVar8 != param_1[0xc]) {
        do {
            iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x68))();
            uVar11 = uVar10;
            if (iVar3 != 0) {
                uVar4 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x158))();
                uVar5 = FUN_14018db00(uVar10,uVar12 + 1,4);
                *(undefined4 *)(uVar12 * 4 + uVar5) = uVar4;
                if ((uVar10 != uVar5) && (FUN_1407db590(uVar5), uVar11 = uVar5, uVar10 != 0)) {
                    (**(code **)(*(longlong *)(uVar10 - 0x10) + 8))(uVar10 - 0x10);
                }
                uVar12 = uVar12 + 1;
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
                for (lVar2 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
            uVar10 = uVar11;
        } while (lVar8 != param_1[0xc]);
    }
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 1;
    iVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (iVar3 != 0) {
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
        FUN_1400ea3e0(uVar1,"PublicEventLeave",&DAT_1409ed224,uVar7,param_2[1]);
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    lVar8 = DAT_140c65ba8;
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    FUN_1405f9e30(lVar8,lVar8 + 0x120,*param_2);
    if (uVar12 != 0) {
        do {
            FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0x140,*(undefined4 *)(uVar11 + uVar9 * 4));
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar12);
    }
    if (uVar11 != 0) {
        (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
    }
    return 0;
}



undefined8 FUN_1405f3520(longlong *param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1,*param_2);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x1b0))(plVar4,param_2 + 2);
        (**(code **)(*plVar4 + 0x1c0))(plVar4,param_2[0xd],param_2[0xc]);
        (**(code **)(*plVar4 + 0x1c8))(plVar4,param_2[0xe]);
        (**(code **)(*plVar4 + 0x110))();
        uVar6 = 0;
        uVar8 = uVar6;
        if (param_2[0xf] != 0) {
            do {
                (**(code **)(*plVar4 + 0x100))
                        (plVar4,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + uVar8 * 4));
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
            } while (uVar7 < (uint)param_2[0xf]);
        }
        (**(code **)(*plVar4 + 0x130))(plVar4);
        if (param_2[0x12] != 0) {
            do {
                (**(code **)(*plVar4 + 0x120))
                        (plVar4,*(undefined4 *)(*(longlong *)(param_2 + 0x14) + uVar6 * 8),
                         *(undefined4 *)(*(longlong *)(param_2 + 0x14) + 4 + uVar6 * 8));
                uVar7 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar7;
            } while (uVar7 < (uint)param_2[0x12]);
        }
        iVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (iVar3 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveUpdate",&DAT_1409ed1ac,uVar5);
        }
        lVar2 = DAT_140c65ba8;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        FUN_1405f9e30(lVar2,lVar2 + 0x140,*param_2);
    }
    return 0;
}



undefined8 FUN_1405f3680(longlong *param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1,*param_2);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x1b0))(plVar4,param_2 + 2);
        iVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (iVar3 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveUpdate",&DAT_1409ed1ac,uVar5);
        }
        lVar2 = DAT_140c65ba8;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        FUN_1405f9e30(lVar2,lVar2 + 0x140,*param_2);
    }
    return 0;
}



undefined8 FUN_1405f3750(longlong *param_1,longlong param_2)

{
    undefined8 uVar1;
    int iVar2;
    undefined8 uVar3;

    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 4);
    iVar2 = DAT_140c636a8;
    *(int *)(param_1 + 4) = DAT_140c636a8 - *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 4) != 0) {
        *(int *)((longlong)param_1 + 0x24) = iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (iVar2 != 0) {
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
        FUN_1400ea3e0(uVar1,"PublicEventUpdate",&DAT_1409ed1bc,uVar3);
    }
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    return 0;
}



undefined8 FUN_1405f37e0(longlong *param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 uVar4;

    plVar3 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1,*param_2);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x1c8))(plVar3,param_2[1]);
        iVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (iVar2 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar4 = (**(code **)(*plVar3 + 0x140))(plVar3);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveUpdate",&DAT_1409ed1ac,uVar4);
        }
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    return 0;
}



undefined8 FUN_1405f3b60(longlong *param_1)

{
    undefined8 uVar1;
    int iVar2;
    undefined8 uVar3;

    FUN_1405f8c40((longlong)param_1 + 0xec);
    iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (iVar2 != 0) {
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
        FUN_1400ea3e0(uVar1,"PublicEventStatsUpdate",&DAT_1409eceac,uVar3);
    }
    return 0;
}



undefined8 FUN_1405f3bd0(longlong *param_1,undefined8 param_2,int param_3)

{
    undefined8 uVar1;
    int iVar2;
    int *piVar3;
    undefined8 uVar4;

    piVar3 = (int *)FUN_1405f8a80((longlong)param_1 + 0xec);
    iVar2 = DAT_140c636a8;
    if (*piVar3 != param_3) {
        *piVar3 = param_3;
        piVar3[1] = iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (iVar2 != 0) {
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        FUN_1400ea3e0(uVar1,"PublicEventStatsUpdate",&DAT_1409eceac,uVar4);
    }
    return 0;
}



undefined8 FUN_1405f3c50(longlong param_1,int param_2)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    int iVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;

    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
    if (lVar9 != *(longlong *)(param_1 + 0x60)) {
        do {
            plVar1 = *(longlong **)(lVar9 + 0x28);
            if (((plVar1 != (longlong *)0x0) &&
                 (iVar4 = (**(code **)(*plVar1 + 0x170))(plVar1), iVar4 != param_2)) &&
                (uVar6 = (**(code **)(*plVar1 + 0x178))(plVar1), (uVar6 & 8) != 0)) {
                (**(code **)(*plVar1 + 0x1b8))(plVar1);
                iVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
                if (iVar4 != 0) {
                    uVar2 = *(undefined8 *)(DAT_140c65898 + 0x7340);
                    uVar7 = (**(code **)(*plVar1 + 0x140))(plVar1);
                    FUN_1400ea3e0(uVar2,"PublicEventObjectiveUpdate",&DAT_1409ed1ac,uVar7);
                }
                uVar5 = (**(code **)(*plVar1 + 0x158))(plVar1);
                FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0x140,uVar5);
            }
            lVar8 = *(longlong *)(lVar9 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar9 = lVar8;
                        lVar8 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar8) {
                    lVar9 = lVar8;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar8 + 0x10); lVar9 = lVar8, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar8 = lVar3;
                }
            }
        } while (lVar9 != *(longlong *)(param_1 + 0x60));
    }
    lVar9 = DAT_140c65898;
    *(int *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(lVar9 + 0x6f98) = 1;
    return 0;
}



undefined8 FUN_1405f3e60(longlong *param_1,int param_2)

{
    undefined8 uVar1;
    int iVar2;
    int *piVar3;
    undefined8 uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (param_1[0x10] != 0) {
        piVar3 = (int *)param_1[0xf];
        do {
            if (*piVar3 == param_2) {
                FUN_1401c2f20();
                iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
                if (iVar2 != 0) {
                    uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
                    uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
                    FUN_1400ea3e0(uVar1,"PublicEventLocationRemoved",&DAT_1409ed1fc,uVar4);
                }
                return 0;
            }
            uVar5 = uVar5 + 1;
            piVar3 = piVar3 + 1;
        } while (uVar5 < (ulonglong)param_1[0x10]);
    }
    return 0x80004005;
}



int FUN_1405f3f00(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x88))();
    if (plVar4 == (longlong *)0x0) {
        return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*plVar4 + 0x100))(plVar4,param_3);
    if (-1 < iVar2) {
        iVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (iVar3 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveLocationAdded",&DAT_1409ed2ac,uVar5);
        }
    }
    return iVar2;
}



int FUN_1405f3fa0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x88))();
    if (plVar4 == (longlong *)0x0) {
        return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*plVar4 + 0x108))(plVar4,param_3);
    if (-1 < iVar2) {
        iVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (iVar3 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveLocationRemoved",&DAT_1409ed28c,uVar5);
        }
    }
    return iVar2;
}



int FUN_1405f4040(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x88))();
    if (plVar4 == (longlong *)0x0) {
        return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*plVar4 + 0x120))(plVar4,param_3,param_4);
    if (-1 < iVar2) {
        iVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (iVar3 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveLocationAdded",&DAT_1409ed2ac,uVar5);
        }
    }
    return iVar2;
}



int FUN_1405f40f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x88))();
    if (plVar4 == (longlong *)0x0) {
        return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*plVar4 + 0x128))(plVar4,param_3,param_4);
    if (-1 < iVar2) {
        iVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (iVar3 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            uVar5 = (**(code **)(*plVar4 + 0x140))(plVar4);
            FUN_1400ea3e0(uVar1,"PublicEventObjectiveLocationRemoved",&DAT_1409ed28c,uVar5);
        }
    }
    return iVar2;
}



undefined8 FUN_1405f41a0(longlong *param_1,undefined8 param_2)

{
    undefined8 uVar1;
    longlong *plVar2;
    longlong lVar3;

    uVar1 = (**(code **)(*param_1 + 0x58))();
    FUN_1403b4f00(param_2,uVar1);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (*(int *)(lVar3 + 0x14) != 0) {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
        lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
        FUN_140003460(param_2,lVar3 + 0x14);
    }
    return param_2;
}



void FUN_1405f4250(longlong param_1,longlong *param_2)

{
    undefined4 local_res8 [8];
    undefined local_18 [16];

    local_res8[0] = (**(code **)(*param_2 + 0x170))(param_2);
    FUN_1400293c0(param_1 + 0x98,local_18,local_res8);
    return;
}

