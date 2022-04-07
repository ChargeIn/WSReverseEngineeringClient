//
// Created by flop on 04.04.22.
//
#include "../../include.h"

int FUN_140368cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,longlong *param_6)

{
    int iVar1;
    longlong lVar2;

    if (param_6 == (longlong *)0x0) {
        iVar1 = -0x7ff8ffa9;
    }
    else {
        lVar2 = FUN_14018b280(0x210,0);
        if (lVar2 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = FUN_14038e5b0(lVar2,param_1);
        }
        iVar1 = FUN_14038e8b0(lVar2,param_2,param_3,param_4,param_5);
        if (iVar1 < 0) {
            if (lVar2 != 0) {
                FUN_14038e6d0(lVar2);
                FUN_14018b900(lVar2,0);
            }
        }
        else {
            *param_6 = lVar2;
            iVar1 = 0;
        }
    }
    return iVar1;
}



undefined8 FUN_140368d90(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar3 = (undefined8 *)FUN_14018b280(0x110,0);
    if (puVar3 != (undefined8 *)0x0) {
        plVar1 = (longlong *)(param_1 + 0x1518);
        *puVar3 = &PTR_LAB_140b65c68;
        puVar3[0x1c] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x1f] = 0;
        puVar3[0x20] = 0;
        puVar3[1] = 1;
        puVar3[2] = param_1;
        if (puVar3[0x1d] == 0) {
            puVar3[0x1d] = plVar1;
            plVar2 = puVar3 + 0x1e;
            *plVar2 = *plVar1;
            *plVar1 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0xe8) = plVar2;
                *param_2 = puVar3;
                return 0;
            }
        }
    }
    *param_2 = puVar3;
    return 0;
}



undefined8 FUN_140368e70(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_14018b280(0x80,0);
    if (lVar1 != 0) {
        uVar2 = FUN_14037a960(lVar1,param_1);
        *param_2 = uVar2;
        return 0;
    }
    *param_2 = 0;
    return 0;
}



int FUN_140368ee0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,int param_7)

{
    int iVar1;
    undefined8 *puVar2;

    if (param_7 == 0) {
        iVar1 = DAT_140c442a0;
        if (*DAT_140c63750 < DAT_140c442a0) {
            iVar1 = *DAT_140c63750;
        }
        if (*(uint *)(&DAT_140c442b0 + (longlong)iVar1 * 4) <= *(uint *)(param_1 + 0x12e8)) {
            return 1;
        }
    }
    puVar2 = (undefined8 *)FUN_14018b280(0xc0,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        FUN_1407e4830(puVar2 + 10,0,0x60);
    }
    iVar1 = FUN_14037b1c0(puVar2,param_1,param_3,param_4,param_5,param_6);
    if (iVar1 < 0) {
        if (puVar2 != (undefined8 *)0x0) {
            FUN_14037b140(puVar2);
            FUN_14018b900(puVar2,0);
        }
    }
    else {
        *(int *)(param_1 + 0x12e8) = *(int *)(param_1 + 0x12e8) + 1;
        iVar1 = 0;
    }
    return iVar1;
}



longlong FUN_140369200(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 200) = *(undefined8 *)(param_1 + 0xd0);
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 200) = *(undefined8 *)(param_1 + 200);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8
FUN_140369260(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
              float param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    float in_XMM3_Da;
    int local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    float local_44;
    float local_40;
    undefined4 local_3c;
    undefined4 local_38;
    float local_34;
    float local_30;
    undefined4 local_2c;
    undefined4 local_28;

    if ((DAT_140c65878 != 0) && (lVar1 = FUN_140351120(), lVar1 != 0)) {
        local_68 = *(int *)(lVar1 + 4);
        local_64 = 0;
        local_38 = *(undefined4 *)(lVar1 + 8);
        local_60 = *(undefined4 *)(lVar1 + 0x18);
        local_5c = *(undefined4 *)(lVar1 + 0x1c);
        local_58 = *param_3;
        uStack84 = param_3[1];
        uStack80 = param_3[2];
        uStack76 = param_3[3];
        local_48 = *(undefined4 *)(lVar1 + 0xc);
        local_44 = DAT_140c3b438 * 0.005555556 * *(float *)(lVar1 + 0x10) + in_XMM3_Da;
        local_40 = DAT_140c3b438 * 0.005555556 * *(float *)(lVar1 + 0x14) + local_44;
        local_3c = *(undefined4 *)(lVar1 + 0x20);
        if (local_68 == 0) {
            local_2c = *(undefined4 *)(lVar1 + 0x2c);
            local_34 = param_5 * *(float *)(lVar1 + 0x24);
            local_30 = param_5 * *(float *)(lVar1 + 0x28);
            local_28 = *(undefined4 *)(lVar1 + 0x30);
        }
        else if (local_68 == 1) {
            local_34 = *(float *)(lVar1 + 0x34);
            local_30 = param_5 * *(float *)(lVar1 + 0x38);
        }
        uVar2 = (**(code **)(*param_1 + 0x110))(param_1,&local_68);
        return uVar2;
    }
    return 0x80004005;
}



undefined8
FUN_1403693b0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 *param_5)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    uint uVar7;
    double dVar8;
    undefined4 in_XMM3_Da;
    float fVar9;
    float fVar10;

    if ((DAT_140c65878 == 0) || (lVar4 = FUN_1403511c0(param_1,param_3), lVar4 == 0)) {
        uVar5 = 0x80004005;
    }
    else {
        fVar9 = *(float *)(lVar4 + 0x10);
        fVar10 = *(float *)(lVar4 + 0xc);
        dVar8 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
        lVar6 = *param_1;
        dVar8 = dVar8 * (double)(fVar9 - fVar10);
        (**(code **)(lVar6 + 0x30))(dVar8,(double)(fVar9 - fVar10),(float)dVar8 + fVar10,param_1);
        uVar5 = (**(code **)(lVar6 + 0x108))();
        if (-1 < (int)uVar5) {
            if (param_5 != (undefined4 *)0x0) {
                if (DAT_140c65878 == 0) {
                    lVar6 = 0;
                }
                else {
                    lVar6 = FUN_140351120();
                }
                uVar1 = *(uint *)(lVar6 + 8);
                uVar7 = uVar1 >> 1;
                uVar2 = *(uint *)(lVar4 + 8);
                if (*(uint *)(lVar4 + 8) < uVar1) {
                    uVar2 = uVar1;
                }
                uVar1 = *(uint *)(lVar4 + 4);
                if (*(uint *)(lVar4 + 4) < uVar7) {
                    uVar1 = uVar7;
                }
                uVar3 = FUN_1401ae6f0(uVar1,uVar2,uVar7,param_4,in_XMM3_Da);
                *param_5 = uVar3;
            }
            uVar5 = 0;
        }
    }
    return uVar5;
}



void FUN_1403694e0(longlong param_1)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    undefined *puVar8;
    ulonglong uVar9;

    pDVar2 = (DWORD *)(param_1 + 0x1380);
    DVar6 = GetCurrentThreadId();
    uVar9 = 0;
    uVar7 = uVar9;
    if (*pDVar2 == DVar6) {
        *(longlong *)(param_1 + 5000) = *(longlong *)(param_1 + 5000) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 5000);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *pDVar2 = DVar6;
                goto LAB_140369548;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar2,DVar6);
    }
    LAB_140369548:
    uVar7 = uVar9;
    if (*(longlong *)(param_1 + 0x12f8) != 0) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x12f0) + uVar7 * 8);
            if (lVar5 != 0) {
                if (*(undefined8 **)(lVar5 + 200) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xd0);
                }
                if (*(longlong *)(lVar5 + 0xd0) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar5 + 0xd0) + 200) = *(undefined8 *)(lVar5 + 200);
                }
                *(undefined8 *)(lVar5 + 200) = 0;
                *(undefined8 *)(lVar5 + 0xd0) = 0;
                FUN_14018b900(lVar5,0);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x12f8));
    }
    *(undefined8 *)(param_1 + 0x12f8) = 0;
    *(undefined8 *)(param_1 + 0x1350) = 0;
    if (*(longlong *)(param_1 + 0x1340) != 0) {
        FUN_14036f9f0();
        FUN_14036f9f0(*(longlong *)(param_1 + 0x1340) + 0x50);
        FUN_14036f9f0(*(longlong *)(param_1 + 0x1340) + 0xa0);
        FUN_14036f9f0(*(longlong *)(param_1 + 0x1340) + 0xf0);
    }
    lVar5 = *(longlong *)(param_1 + 0x1340);
    if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + -0x10);
        puVar8 = (undefined *)((longlong)iVar3 * 0x50 + lVar5);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
            puVar8 = &DAT_ffffffffffffffb0 + (longlong)puVar8;
            FUN_14036f9b0(puVar8);
        }
        FUN_14018b900(lVar5 + -0x10,0);
    }
    *(undefined8 *)(param_1 + 0x1340) = 0;
    uVar7 = uVar9;
    if (*(longlong *)(param_1 + 0x1308) != 0) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1300) + uVar7 * 8);
            if (lVar5 != 0) {
                if (*(undefined8 **)(lVar5 + 200) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xd0);
                }
                if (*(longlong *)(lVar5 + 0xd0) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar5 + 0xd0) + 200) = *(undefined8 *)(lVar5 + 200);
                }
                *(undefined8 *)(lVar5 + 200) = 0;
                *(undefined8 *)(lVar5 + 0xd0) = 0;
                FUN_14018b900(lVar5,0);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x1308));
    }
    *(undefined8 *)(param_1 + 0x1308) = 0;
    uVar7 = uVar9;
    if (*(longlong *)(param_1 + 0x1368) != 0) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1360) + uVar7 * 8);
            if (lVar5 != 0) {
                if (*(undefined8 **)(lVar5 + 200) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xd0);
                }
                if (*(longlong *)(lVar5 + 0xd0) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar5 + 0xd0) + 200) = *(undefined8 *)(lVar5 + 200);
                }
                *(undefined8 *)(lVar5 + 200) = 0;
                *(undefined8 *)(lVar5 + 0xd0) = 0;
                FUN_14018b900(lVar5,0);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x1368));
    }
    *(undefined8 *)(param_1 + 0x1368) = 0;
    if (*(longlong *)(param_1 + 0x1378) != 0) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1370) + uVar9 * 8);
            if (lVar5 != 0) {
                if (*(undefined8 **)(lVar5 + 200) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0xd0);
                }
                if (*(longlong *)(lVar5 + 0xd0) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar5 + 0xd0) + 200) = *(undefined8 *)(lVar5 + 200);
                }
                *(undefined8 *)(lVar5 + 200) = 0;
                *(undefined8 *)(lVar5 + 0xd0) = 0;
                FUN_14018b900(lVar5,0);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(param_1 + 0x1378));
    }
    *(undefined8 *)(param_1 + 0x1378) = 0;
    if (1 < *(ulonglong *)(param_1 + 5000)) {
        *(longlong *)(param_1 + 5000) = *(longlong *)(param_1 + 5000) + -1;
        return;
    }
    *pDVar2 = 0;
    *(undefined8 *)(param_1 + 5000) = 0;
    if (*(longlong *)(param_1 + 0x1390) != 0) {
        if (*(longlong *)(param_1 + 0x1398) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0x1398);
            uVar7 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
            if (uVar7 != 0) {
                CloseHandle(hObject);
            }
        }
        // WARNING: Could not recover jumptable at 0x00014036984c. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(*(HANDLE *)(param_1 + 0x1398));
        return;
    }
    return;
}



undefined4 FUN_140369a00(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 local_28;
    undefined4 local_20;

    local_28 = *param_2;
    local_20 = param_3;
    uVar3 = (**(code **)(param_1 + 0x1428))(&local_28);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1420) + (uVar3 % *(ulonglong *)(param_1 + 0x1418)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x1430))(&local_28,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return 0;
    }
    return *(undefined4 *)(puVar1 + 4);
}



undefined8 FUN_14036b7c0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar5 = (undefined8 *)0x0;
    puVar6 = puVar5;
    for (lVar1 = *(longlong *)(param_1 + 0x920); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x590)) {
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x20);
    puVar7 = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_140b65ff8;
        puVar2[3] = 0;
        puVar7 = puVar2;
    }
    puVar7[2] = puVar6;
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(puVar6),0);
    if (SUB168(ZEXT816(8) * ZEXT816(puVar6) >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    uVar3 = FUN_14018b280(uVar3,0);
    puVar7[3] = uVar3;
    for (lVar1 = *(longlong *)(param_1 + 0x920); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x590)) {
        puVar4 = (undefined4 *)(puVar7[3] + (longlong)puVar5);
        puVar5 = puVar5 + 1;
        *puVar4 = *(undefined4 *)(lVar1 + 8);
        puVar4[1] = *(undefined4 *)(lVar1 + 0xc);
    }
    *param_2 = puVar7;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_14036bea0(longlong param_1,float *param_2,float *param_3,undefined4 *param_4,longlong **param_5,
              uint *param_6)

{
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong **pplVar9;
    float fVar10;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float fVar11;
    float local_res10;
    undefined4 uStackX20;
    undefined4 local_res18;
    float local_res1c;
    longlong *local_res20;
    undefined local_e8 [8];
    undefined8 uStack224;
    undefined local_d8 [16];
    uint local_c8;
    uint local_c4;
    uint local_c0;
    code *local_b8;
    undefined8 local_b0;
    uint local_a8;
    undefined8 local_a0;
    longlong *local_98 [2];
    undefined local_88 [16];
    undefined local_78 [16];

    fVar11 = (DAT_140c43fb8 * *param_2 + 0.5) * 2048.0;
    fVar10 = (DAT_140c43fb8 * param_2[2] + 0.5) * 2048.0;
    local_d8 = ZEXT1216(CONCAT48(fVar10,CONCAT44(param_2[1],fVar11)));
    local_res18 = *param_4;
    local_res1c = (float)param_4[1];
    local_e8 = (longlong **)
            CONCAT44(param_3[1] - param_2[1],(DAT_140c43fb8 * *param_3 + 0.5) * 2048.0 - fVar11);
    _local_e8 = ZEXT1216(CONCAT48(0.0 - fVar10,local_e8));
    local_78 = ZEXT1216(CONCAT48((float)*(int *)(param_1 + 0x8dc),
                                 CONCAT44(DAT_140c7ac74,(float)*(int *)(param_1 + 0x8d8))));
    local_88 = ZEXT1216(CONCAT48((float)*(int *)(param_1 + 0x8d4),
                                 CONCAT44(DAT_140c7ac64,(float)*(int *)(param_1 + 0x8d0))));
    uVar5 = FUN_140351780(local_88,local_d8,local_e8,&local_res18);
    if ((int)uVar5 == 0) {
        return uVar5;
    }
    local_c8 = *param_6;
    local_a8 = param_6[8];
    local_c0 = param_6[2];
    local_c4 = param_6[1] & 0x8003f;
    local_b8 = *(code **)(param_6 + 4);
    local_b0 = *(undefined8 *)(param_6 + 6);
    local_a0 = *(undefined8 *)(param_6 + 10);
    plVar6 = (longlong *)FUN_14035c650(param_1,local_d8,local_e8,&local_res18,&local_c8);
    local_res20 = plVar6;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        local_res1c = extraout_XMM0_Da;
    }
    if ((local_c8 & 4) != 0) {
        plVar7 = (longlong *)FUN_14035c9f0(param_1,local_d8,local_e8);
        if (plVar7 != (longlong *)0x0) {
            if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6);
            }
            local_res20 = plVar7;
            (**(code **)(*plVar7 + 0x10))(plVar7);
            plVar6 = plVar7;
            local_res1c = extraout_XMM0_Da_00;
        }
        pplVar9 = (longlong **)(param_1 + 0x10e8);
        plVar7 = *pplVar9;
        while (plVar7 != (longlong *)0x0) {
            plVar1 = (longlong *)plVar7[0x1d];
            if (plVar7 == *(longlong **)(param_6 + 10)) {
                if ((longlong **)plVar7[0x1c] != (longlong **)0x0) {
                    *(longlong **)plVar7[0x1c] = plVar1;
                }
                LAB_14036c197:
                if (plVar7[0x1d] != 0) {
                    *(longlong *)(plVar7[0x1d] + 0xe0) = plVar7[0x1c];
                }
                plVar7[0x1d] = 0;
                plVar7[0x1c] = 0;
                plVar7 = plVar1;
            }
            else {
                lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,0);
                iVar2 = FUN_1401b1850(lVar8 + 0x20,param_2,param_3);
                if ((iVar2 == 0) || (local_res1c <= local_res10)) {
                    if ((longlong *)plVar7[0x1c] != (longlong *)0x0) {
                        *(longlong *)plVar7[0x1c] = plVar7[0x1d];
                    }
                    goto LAB_14036c197;
                }
                fVar10 = local_res1c;
                iVar2 = FUN_1401c9b90(lVar8);
                if ((iVar2 == 0) || (fVar10 <= local_res10)) {
                    FUN_140370a40(plVar7);
                    plVar7 = plVar1;
                }
                else {
                    *(float *)(plVar7 + 0x19) = local_res10;
                    plVar7 = plVar1;
                }
            }
        }
        FUN_140370910(pplVar9);
        plVar1 = local_res20;
        for (plVar7 = *pplVar9;
             (plVar7 != (longlong *)0x0 &&
              (plVar1 = plVar6,
                      *(float *)(plVar7 + 0x19) <= local_res1c && local_res1c != *(float *)(plVar7 + 0x19)));
             plVar7 = (longlong *)plVar7[0x1d]) {
            iVar2 = (**(code **)(*plVar7 + 0x70))(plVar7,param_2,param_3,&local_res18,local_98,&local_c8);
            if (iVar2 != 0) {
                if (plVar6 != (longlong *)0x0) {
                    (**(code **)(*plVar6 + 8))(plVar6);
                }
                plVar6 = local_98[0];
                (**(code **)(*local_98[0] + 0x10))(local_98[0]);
                local_res1c = extraout_XMM0_Da_01;
            }
            plVar1 = plVar6;
        }
        local_res20 = plVar1;
        plVar7 = *pplVar9;
        while (plVar7 != (longlong *)0x0) {
            if ((longlong *)plVar7[0x1c] != (longlong *)0x0) {
                *(longlong *)plVar7[0x1c] = plVar7[0x1d];
            }
            if (plVar7[0x1d] != 0) {
                *(longlong *)(plVar7[0x1d] + 0xe0) = plVar7[0x1c];
            }
            plVar7[0x1c] = 0;
            plVar7[0x1d] = 0;
            plVar7 = *pplVar9;
        }
    }
    if ((local_c8 & 0x7f8) != 0) {
        pplVar9 = (longlong **)(param_1 + 0x13c0);
        plVar7 = *pplVar9;
        uVar3 = local_c8 & 0x38;
        local_d8 = CONCAT88(local_d8._8_8_,pplVar9);
        if (plVar7 != (longlong *)0x0) {
            do {
                plVar1 = (longlong *)plVar7[0x9b];
                if (plVar7 == *(longlong **)(param_6 + 10)) {
                    if ((longlong **)plVar7[0x9a] != (longlong **)0x0) {
                        *(longlong **)plVar7[0x9a] = plVar1;
                    }
                    if (plVar7[0x9b] != 0) {
                        *(longlong *)(plVar7[0x9b] + 0x4d0) = plVar7[0x9a];
                    }
                    LAB_14036c3e5:
                    plVar7[0x9b] = 0;
                    plVar7[0x9a] = 0;
                }
                else {
                    if (param_6[2] != 0) {
                        _local_e8 = CONCAT124(stack0xffffffffffffff1c,0xffffffff);
                        (**(code **)(*plVar7 + 0x20))(plVar7);
                    }
                    if (plVar7[0xa2] != 0) {
                        LAB_14036c3b3:
                        if ((longlong *)plVar7[0x9a] != (longlong *)0x0) {
                            *(longlong *)plVar7[0x9a] = plVar7[0x9b];
                        }
                        if (plVar7[0x9b] != 0) {
                            *(longlong *)(plVar7[0x9b] + 0x4d0) = plVar7[0x9a];
                        }
                        goto LAB_14036c3e5;
                    }
                    lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,2 - (uint)(uVar3 != 0));
                    iVar2 = FUN_1401b1850(lVar8 + 0x20,param_2,param_3);
                    if ((((iVar2 == 0) || (local_res1c <= local_res10)) ||
                         (fVar10 = local_res1c, iVar2 = FUN_1401c9b90(lVar8), iVar2 == 0)) ||
                        (fVar10 <= local_res10)) goto LAB_14036c3b3;
                    *(float *)(plVar7 + 0x8d) = local_res10;
                }
                plVar7 = plVar1;
            } while (plVar1 != (longlong *)0x0);
            pplVar9 = local_d8._0_8_;
        }
        FUN_1403707e0(pplVar9,0,&LAB_1403792d0);
        local_d8._0_8_ = (longlong **)plVar6;
        plVar6 = local_res20;
        for (plVar7 = *pplVar9;
             (plVar7 != (longlong *)0x0 &&
              (plVar6 = (longlong *)local_d8._0_8_,
                      *(float *)(plVar7 + 0x8d) <= local_res1c && local_res1c != *(float *)(plVar7 + 0x8d)));
             plVar7 = (longlong *)plVar7[0x9b]) {
            iVar2 = (**(code **)(*plVar7 + 0x70))(plVar7,param_2,param_3,&local_res18,local_d8,&local_c8);
            if (iVar2 != 0) {
                if (local_d8._0_8_ != (longlong **)0x0) {
                    (**(code **)((longlong)*local_d8._0_8_ + 8))(local_d8._0_8_);
                }
                (**(code **)((longlong)*local_d8._0_8_ + 0x10))(local_d8._0_8_);
                local_res1c = extraout_XMM0_Da_02;
            }
            plVar6 = (longlong *)local_d8._0_8_;
        }
        local_res20 = plVar6;
        plVar7 = *pplVar9;
        while (plVar6 = (longlong *)local_d8._0_8_, plVar7 != (longlong *)0x0) {
            if ((longlong *)plVar7[0x9a] != (longlong *)0x0) {
                *(longlong *)plVar7[0x9a] = plVar7[0x9b];
            }
            if (plVar7[0x9b] != 0) {
                *(longlong *)(plVar7[0x9b] + 0x4d0) = plVar7[0x9a];
            }
            plVar7[0x9a] = 0;
            plVar7[0x9b] = 0;
            plVar7 = *pplVar9;
        }
    }
    if ((local_c8 & 0xf800) != 0) {
        uVar3 = local_c8 & 0xb800;
        local_e8 = (longlong **)(param_1 + 0x14b0);
        plVar7 = *local_e8;
        if (plVar7 != (longlong *)0x0) {
            do {
                plVar6 = (longlong *)plVar7[0x8b];
                if (plVar7 == *(longlong **)(param_6 + 10)) {
                    if ((longlong **)plVar7[0x8a] != (longlong **)0x0) {
                        *(longlong **)plVar7[0x8a] = plVar6;
                    }
                    if (plVar7[0x8b] != 0) {
                        *(longlong *)(plVar7[0x8b] + 0x450) = plVar7[0x8a];
                    }
                    LAB_14036c63c:
                    plVar7[0x8a] = 0;
                    plVar7[0x8b] = 0;
                }
                else {
                    if (param_6[2] != 0) {
                        local_88 = CONCAT124(local_88._4_12_,0xffffffff);
                        (**(code **)(*plVar7 + 0x20))(plVar7);
                    }
                    if ((plVar7[0x92] != 0) ||
                        ((iVar2 = 1, local_b8 != (code *)0x0 && (iVar2 = (*local_b8)(plVar7), iVar2 == 0)))) {
                        LAB_14036c60a:
                        if ((longlong *)plVar7[0x8a] != (longlong *)0x0) {
                            *(longlong *)plVar7[0x8a] = plVar7[0x8b];
                        }
                        if (plVar7[0x8b] != 0) {
                            *(longlong *)(plVar7[0x8b] + 0x450) = plVar7[0x8a];
                        }
                        goto LAB_14036c63c;
                    }
                    lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,2 - (uint)(uVar3 != 0));
                    iVar4 = FUN_1401b1850(lVar8 + 0x20,param_2,param_3);
                    if ((iVar4 == 0) ||
                        (((local_res1c <= local_res10 ||
                           (fVar10 = local_res1c, iVar4 = FUN_1401c9b90(lVar8), iVar4 == 0)) ||
                          (fVar10 <= local_res10)))) goto LAB_14036c60a;
                    *(float *)((longlong)plVar7 + 0x3c4) = local_res10;
                    *(int *)(plVar7 + 0x79) = iVar2;
                }
                plVar7 = plVar6;
            } while (plVar6 != (longlong *)0x0);
            plVar6 = local_res20;
        }
        FUN_1403706b0(local_e8);
        uVar3 = 0;
        for (plVar7 = *local_e8;
             ((plVar7 != (longlong *)0x0 && (uVar3 <= *(uint *)(plVar7 + 0x79))) &&
              (*(float *)((longlong)plVar7 + 0x3c4) <= local_res1c &&
               local_res1c != *(float *)((longlong)plVar7 + 0x3c4))); plVar7 = (longlong *)plVar7[0x8b]) {
            iVar2 = (**(code **)(*plVar7 + 0x70))
                    (plVar7,param_2,param_3,&local_res18,&local_res10,&local_c8);
            if (iVar2 != 0) {
                if (plVar6 != (longlong *)0x0) {
                    (**(code **)(*plVar6 + 8))(plVar6);
                }
                plVar6 = (longlong *)CONCAT44(uStackX20,local_res10);
                (**(code **)(*plVar6 + 0x10))(plVar6);
                uVar3 = *(uint *)(plVar7 + 0x79);
                local_res1c = extraout_XMM0_Da_03;
            }
        }
        plVar7 = *local_e8;
        while (plVar7 != (longlong *)0x0) {
            if ((longlong *)plVar7[0x8a] != (longlong *)0x0) {
                *(longlong *)plVar7[0x8a] = plVar7[0x8b];
            }
            if (plVar7[0x8b] != 0) {
                *(longlong *)(plVar7[0x8b] + 0x450) = plVar7[0x8a];
            }
            plVar7[0x8a] = 0;
            plVar7[0x8b] = 0;
            plVar7 = *local_e8;
        }
    }
    if (plVar6 == (longlong *)0x0) {
        uVar5 = 0;
    }
    else {
        if ((param_6[1] & 0x7ffc0) != 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            _local_e8 = CONCAT412((param_3[3] - param_2[3]) * extraout_XMM0_Da_04 + param_2[3],
                                  CONCAT48((param_3[2] - param_2[2]) * extraout_XMM0_Da_04 + param_2[2],
                                           CONCAT44((param_3[1] - param_2[1]) * extraout_XMM0_Da_04 +
                                                    param_2[1],
                                                    (*param_3 - *param_2) * extraout_XMM0_Da_04 + *param_2
                                           )));
            if ((param_6[1] & 0x1fc0) != 0) {
                FUN_14035cc90(param_1,local_e8,plVar6 + 4);
            }
            if ((param_6[1] & 0x7e000) != 0) {
                FUN_14035cd90(param_1,local_e8,plVar6 + 4);
            }
        }
        uVar5 = 1;
        *param_5 = plVar6;
    }
    return uVar5;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_14036c800(longlong param_1,float *param_2,float *param_3,undefined4 *param_4,undefined8 *param_5
        ,uint *param_6)

{
    uint uVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong **pplVar9;
    ulonglong uVar10;
    bool bVar11;
    float fVar12;
    float fVar13;
    float extraout_XMM0_Da;
    float fVar14;
    float fVar15;
    longlong *local_118;
    undefined4 local_110;
    float local_10c;
    float local_108;
    float local_104;
    longlong *local_100;
    undefined8 local_f8;
    longlong *local_f0;
    undefined local_e8 [16];
    undefined8 local_d8 [2];
    undefined local_c8 [16];
    undefined4 local_b8 [4];
    undefined4 local_a8 [4];
    undefined local_98 [16];
    undefined local_88 [16];
    undefined local_78 [16];
    undefined local_68 [16];
    undefined local_58 [16];

    if (param_5 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    fVar12 = (DAT_140c43fb8 * param_2[2] + 0.5) * 2048.0;
    fVar14 = (DAT_140c43fb8 * *param_2 + 0.5) * 2048.0;
    local_c8 = ZEXT1216(CONCAT48(fVar12,CONCAT44(param_2[1],fVar14)));
    local_10c = (float)param_4[1];
    fVar13 = (DAT_140c43fb8 * param_3[2] + 0.5) * 2048.0;
    fVar15 = (DAT_140c43fb8 * *param_3 + 0.5) * 2048.0;
    local_110 = *param_4;
    local_58 = ZEXT1216(CONCAT48(fVar13,CONCAT44(param_3[1],fVar15)));
    local_e8 = ZEXT1216(CONCAT48(fVar13 - fVar12,CONCAT44(param_3[1] - param_2[1],fVar15 - fVar14)));
    fVar12 = (float)*(int *)(param_1 + 0x8d4);
    fVar13 = (float)*(int *)(param_1 + 0x8d0);
    local_78 = ZEXT1216(CONCAT48((float)*(int *)(param_1 + 0x8dc),
                                 CONCAT44(DAT_140c7ac74,(float)*(int *)(param_1 + 0x8d8))));
    local_88 = ZEXT1216(CONCAT48((float)*(int *)(param_1 + 0x8dc),
                                 CONCAT44(DAT_140c7ac74,(float)*(int *)(param_1 + 0x8d8))));
    local_68 = ZEXT1216(CONCAT48(fVar12,CONCAT44(DAT_140c7ac64,fVar13)));
    local_98 = ZEXT1216(CONCAT48(fVar12,CONCAT44(DAT_140c7ac64,fVar13)));
    iVar3 = FUN_140351780(*(int *)(param_1 + 0x8d4),fVar12,*(int *)(param_1 + 0x8d0),local_98,local_c8
            ,local_e8,&local_110);
    if (iVar3 == 0) {
        puVar4 = (undefined8 *)FUN_14018b280(0x20,0);
        if (puVar4 == (undefined8 *)0x0) {
            *param_5 = 0;
            uVar5 = 1;
        }
        else {
            *puVar4 = &PTR_LAB_140b787c0;
            *(undefined4 *)(puVar4 + 3) = 1;
            puVar4[1] = 0;
            puVar4[2] = 0;
            *param_5 = puVar4;
            uVar5 = 1;
        }
    }
    else {
        puVar4 = (undefined8 *)0x0;
        local_f0 = (longlong *)FUN_14035c650(param_1,local_c8,local_e8,&local_110,param_6);
        bVar11 = local_f0 != (longlong *)0x0;
        if (bVar11) {
            (**(code **)(*local_f0 + 0x10))(local_f0);
            local_10c = extraout_XMM0_Da;
        }
        uVar10 = (ulonglong)bVar11;
        if ((*(byte *)param_6 & 4) != 0) {
            uVar10 = uVar10 + 1;
            plVar2 = *(longlong **)(param_1 + 0x10e8);
            while (plVar2 != (longlong *)0x0) {
                plVar6 = (longlong *)plVar2[0x1d];
                local_118 = plVar6;
                if (plVar2 == *(longlong **)(param_6 + 10)) {
                    pplVar9 = (longlong **)plVar2[0x1c];
                    if (pplVar9 != (longlong **)0x0) {
                        LAB_14036cad5:
                        *pplVar9 = plVar6;
                    }
                    LAB_14036cad8:
                    if (plVar2[0x1d] != 0) {
                        *(longlong *)(plVar2[0x1d] + 0xe0) = plVar2[0x1c];
                    }
                    plVar2[0x1d] = 0;
                    plVar2[0x1c] = 0;
                    plVar2 = local_118;
                }
                else {
                    lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,0);
                    iVar3 = FUN_1401b1850(lVar8 + 0x20,param_2,param_3,&local_108);
                    if ((iVar3 == 0) || (local_10c <= local_108)) {
                        pplVar9 = (longlong **)plVar2[0x1c];
                        if (pplVar9 != (longlong **)0x0) {
                            plVar6 = (longlong *)plVar2[0x1d];
                            goto LAB_14036cad5;
                        }
                        goto LAB_14036cad8;
                    }
                    fVar12 = local_10c;
                    iVar3 = FUN_1401c9b90(lVar8);
                    if ((iVar3 == 0) || (fVar12 <= local_108)) {
                        FUN_140370a40(plVar2);
                        plVar2 = local_118;
                    }
                    else {
                        uVar10 = uVar10 + 1;
                        plVar2 = local_118;
                    }
                }
            }
        }
        uVar1 = *param_6;
        if ((uVar1 & 0x7f8) != 0) {
            plVar2 = *(longlong **)(param_1 + 0x13c0);
            while (plVar2 != (longlong *)0x0) {
                plVar6 = (longlong *)plVar2[0x9b];
                local_118 = plVar6;
                if (plVar2 == *(longlong **)(param_6 + 10)) {
                    pplVar9 = (longlong **)plVar2[0x9a];
                    if (pplVar9 != (longlong **)0x0) {
                        LAB_14036cbff:
                        *pplVar9 = plVar6;
                    }
                    LAB_14036cc02:
                    if (plVar2[0x9b] != 0) {
                        *(longlong *)(plVar2[0x9b] + 0x4d0) = plVar2[0x9a];
                    }
                    plVar2[0x9a] = 0;
                    plVar2[0x9b] = 0;
                    plVar2 = local_118;
                }
                else {
                    if (param_6[2] != 0) {
                        local_b8[0] = 0xffffffff;
                        (**(code **)(*plVar2 + 0x20))(plVar2,local_b8);
                    }
                    if (plVar2[0xa2] != 0) {
                        LAB_14036cbec:
                        pplVar9 = (longlong **)plVar2[0x9a];
                        if (pplVar9 != (longlong **)0x0) {
                            plVar6 = (longlong *)plVar2[0x9b];
                            goto LAB_14036cbff;
                        }
                        goto LAB_14036cc02;
                    }
                    lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,2 - (uint)((uVar1 & 0x38) != 0));
                    iVar3 = FUN_1401b1850(lVar8 + 0x20,param_2,param_3,&local_104);
                    if ((iVar3 == 0) || (local_10c <= local_104)) goto LAB_14036cbec;
                    fVar12 = local_10c;
                    iVar3 = FUN_1401c9b90(lVar8);
                    if ((iVar3 == 0) || (fVar12 <= local_104)) {
                        FUN_140371a90(plVar2);
                        plVar2 = local_118;
                    }
                    else {
                        uVar10 = uVar10 + 1;
                        plVar2 = local_118;
                    }
                }
            }
        }
        uVar1 = *param_6;
        if ((uVar1 & 0xf800) != 0) {
            plVar2 = *(longlong **)(param_1 + 0x14b0);
            while (plVar2 != (longlong *)0x0) {
                plVar6 = (longlong *)plVar2[0x8b];
                local_100 = plVar6;
                if (plVar2 == *(longlong **)(param_6 + 10)) {
                    pplVar9 = (longlong **)plVar2[0x8a];
                    if (pplVar9 != (longlong **)0x0) {
                        LAB_14036cd25:
                        *pplVar9 = plVar6;
                    }
                    LAB_14036cd28:
                    if (plVar2[0x8b] != 0) {
                        *(longlong *)(plVar2[0x8b] + 0x450) = plVar2[0x8a];
                    }
                    plVar2[0x8b] = 0;
                    plVar2[0x8a] = 0;
                    plVar2 = local_100;
                }
                else {
                    if (param_6[2] != 0) {
                        local_a8[0] = 0xffffffff;
                        (**(code **)(*plVar2 + 0x20))(plVar2,local_a8);
                    }
                    if (plVar2[0x92] != 0) {
                        LAB_14036cd12:
                        pplVar9 = (longlong **)plVar2[0x8a];
                        if (pplVar9 != (longlong **)0x0) {
                            plVar6 = (longlong *)plVar2[0x8b];
                            goto LAB_14036cd25;
                        }
                        goto LAB_14036cd28;
                    }
                    lVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,2 - (uint)((uVar1 & 0xb800) != 0));
                    iVar3 = FUN_1401b1850(lVar8 + 0x20,param_2,param_3,&local_118);
                    if ((((iVar3 == 0) || (local_10c <= local_118._0_4_)) ||
                         (fVar12 = local_10c, iVar3 = FUN_1401c9b90(lVar8), iVar3 == 0)) ||
                        (fVar12 <= local_118._0_4_)) goto LAB_14036cd12;
                    uVar10 = uVar10 + 1;
                    plVar2 = local_100;
                }
            }
        }
        puVar7 = (undefined8 *)FUN_14018b280(0x20);
        if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR_LAB_140b787c0;
            *(undefined4 *)(puVar7 + 3) = 1;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar4 = puVar7;
        }
        puVar4[1] = 0;
        uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar10),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar10) >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        lVar8 = FUN_14018b280(uVar5,0);
        puVar4[2] = lVar8;
        if (local_f0 != (longlong *)0x0) {
            *(longlong **)(lVar8 + puVar4[1] * 8) = local_f0;
            puVar4[1] = puVar4[1] + 1;
        }
        if ((*(byte *)param_6 & 4) != 0) {
            lVar8 = FUN_14035c9f0(param_1,local_c8,local_e8,&local_110);
            if (lVar8 != 0) {
                *(longlong *)(puVar4[2] + puVar4[1] * 8) = lVar8;
                puVar4[1] = puVar4[1] + 1;
            }
            plVar2 = *(longlong **)(param_1 + 0x10e8);
            while (plVar2 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3,&local_110,&local_100,param_6);
                if (iVar3 != 0) {
                    *(longlong **)(puVar4[2] + puVar4[1] * 8) = local_100;
                    puVar4[1] = puVar4[1] + 1;
                }
                lVar8 = *(longlong *)(param_1 + 0x10e8);
                if (*(undefined8 **)(lVar8 + 0xe0) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar8 + 0xe0) = *(undefined8 *)(lVar8 + 0xe8);
                }
                if (*(longlong *)(lVar8 + 0xe8) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar8 + 0xe8) + 0xe0) = *(undefined8 *)(lVar8 + 0xe0);
                }
                *(undefined8 *)(lVar8 + 0xe0) = 0;
                *(undefined8 *)(lVar8 + 0xe8) = 0;
                plVar2 = *(longlong **)(param_1 + 0x10e8);
            }
        }
        if ((*param_6 & 0x7f8) != 0) {
            plVar2 = *(longlong **)(param_1 + 0x13c0);
            while (plVar2 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3,&local_110,local_d8,param_6);
                if (iVar3 != 0) {
                    *(undefined8 *)(puVar4[2] + puVar4[1] * 8) = local_d8[0];
                    puVar4[1] = puVar4[1] + 1;
                }
                lVar8 = *(longlong *)(param_1 + 0x13c0);
                if (*(undefined8 **)(lVar8 + 0x4d0) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar8 + 0x4d0) = *(undefined8 *)(lVar8 + 0x4d8);
                }
                if (*(longlong *)(lVar8 + 0x4d8) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar8 + 0x4d8) + 0x4d0) = *(undefined8 *)(lVar8 + 0x4d0);
                }
                *(undefined8 *)(lVar8 + 0x4d0) = 0;
                *(undefined8 *)(lVar8 + 0x4d8) = 0;
                plVar2 = *(longlong **)(param_1 + 0x13c0);
            }
        }
        if ((*param_6 & 0xf800) != 0) {
            plVar2 = *(longlong **)(param_1 + 0x14b0);
            while (plVar2 != (longlong *)0x0) {
                iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3,&local_110,&local_f8,param_6);
                if (iVar3 != 0) {
                    *(undefined8 *)(puVar4[2] + puVar4[1] * 8) = local_f8;
                    puVar4[1] = puVar4[1] + 1;
                }
                lVar8 = *(longlong *)(param_1 + 0x14b0);
                if (*(undefined8 **)(lVar8 + 0x450) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar8 + 0x450) = *(undefined8 *)(lVar8 + 0x458);
                }
                if (*(longlong *)(lVar8 + 0x458) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar8 + 0x458) + 0x450) = *(undefined8 *)(lVar8 + 0x450);
                }
                *(undefined8 *)(lVar8 + 0x450) = 0;
                *(undefined8 *)(lVar8 + 0x458) = 0;
                plVar2 = *(longlong **)(param_1 + 0x14b0);
            }
        }
        *param_5 = puVar4;
        uVar5 = 0;
    }
    return uVar5;
}



undefined4 * FUN_14036dc40(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;

    fVar1 = *param_4;
    fVar2 = param_4[1];
    fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + 0.0);
    if (*(int *)(param_1 + 0x648) == 0) {
        fVar1 = (param_3[1] * param_4[4] + *param_3 * fVar1 + param_4[8] * 0.0 + param_4[0xc]) -
                *(float *)(param_1 + 0x390);
        fVar2 = (param_3[1] * param_4[5] + *param_3 * fVar2 + param_4[9] * 0.0 + param_4[0xd]) -
                *(float *)(param_1 + 0x394);
        fVar1 = (float)((uint)(SQRT(fVar1 * fVar1 + fVar2 * fVar2 + 0.0) - fVar3 * param_3[4]) &
                        0xfff00000);
        if (fVar1 <= *(float *)(param_1 + 0x64c)) {
            fVar1 = *(float *)(param_1 + 0x64c);
        }
    }
    else {
        fVar1 = 1.0;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x774);
    param_2[1] = *(undefined4 *)(param_1 + 0x778);
    param_2[2] = (fVar1 / fVar3) * *(float *)(param_1 + 0x77c);
    return param_2;
}



undefined8 * FUN_14036ea20(undefined8 *param_1,undefined8 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 *puVar6;
    longlong lVar7;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    puVar6 = param_2 + 8;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 3);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar3 = *(undefined4 *)(param_2 + 5);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 5) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(undefined4 *)(param_2 + 7);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 7) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
    lVar7 = 8;
    do {
        uVar2 = *(undefined4 *)puVar6;
        uVar3 = *(undefined4 *)((longlong)puVar6 + 4);
        uVar4 = *(undefined4 *)(puVar6 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar1 = (undefined4 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar6);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc4);
    uVar3 = *(undefined4 *)(param_2 + 0x19);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
    *(undefined4 *)(param_1 + 0x19) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xd4);
    uVar3 = *(undefined4 *)(param_2 + 0x1b);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar2;
    *(undefined4 *)(param_1 + 0x1b) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xe4);
    uVar3 = *(undefined4 *)(param_2 + 0x1d);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xec);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
    *(undefined4 *)(param_1 + 0x1d) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xf4);
    uVar3 = *(undefined4 *)(param_2 + 0x1f);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xfc);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar2;
    *(undefined4 *)(param_1 + 0x1f) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x104);
    uVar3 = *(undefined4 *)(param_2 + 0x21);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
    *(undefined4 *)(param_1 + 0x21) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x114);
    uVar3 = *(undefined4 *)(param_2 + 0x23);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
    *(undefined4 *)((longlong)param_1 + 0x114) = uVar2;
    *(undefined4 *)(param_1 + 0x23) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x11c) = uVar4;
    param_1[0x24] = param_2[0x24];
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x134);
    uVar3 = *(undefined4 *)(param_2 + 0x27);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x13c);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar2;
    *(undefined4 *)(param_1 + 0x27) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x13c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x144);
    uVar3 = *(undefined4 *)(param_2 + 0x29);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14c);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x144) = uVar2;
    *(undefined4 *)(param_1 + 0x29) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x14c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x154);
    uVar3 = *(undefined4 *)(param_2 + 0x2b);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x15c);
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
    *(undefined4 *)((longlong)param_1 + 0x154) = uVar2;
    *(undefined4 *)(param_1 + 0x2b) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x15c) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
    param_1[0x2e] = param_2[0x2e];
    param_1[0x2d] = param_2[0x2d];
    param_1[0x30] = param_2[0x30];
    param_1[0x2f] = param_2[0x2f];
    param_1[0x32] = param_2[0x32];
    param_1[0x31] = param_2[0x31];
    param_1[0x34] = param_2[0x34];
    param_1[0x33] = param_2[0x33];
    param_1[0x36] = param_2[0x36];
    param_1[0x35] = param_2[0x35];
    param_1[0x38] = param_2[0x38];
    param_1[0x37] = param_2[0x37];
    param_1[0x3a] = param_2[0x3a];
    param_1[0x39] = param_2[0x39];
    param_1[0x3c] = param_2[0x3c];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3d] = param_2[0x3d];
    *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)((longlong)param_2 + 0x1fc);
    param_1[0x40] = param_2[0x40];
    *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
    *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x214);
    uVar3 = *(undefined4 *)(param_2 + 0x43);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x21c);
    *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
    *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
    *(undefined4 *)(param_1 + 0x43) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
    param_1[0x44] = param_2[0x44];
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14036ec90(longlong param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
                   float *param_5)

{
    float *pfVar1;
    float *pfVar2;
    undefined (*pauVar3) [16];
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
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
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float *pfVar25;
    float fVar26;
    undefined8 *puVar27;
    longlong lVar28;
    longlong lVar29;
    undefined4 *puVar30;
    float fVar31;
    undefined auVar32 [16];
    undefined auStack232 [32];
    undefined4 *local_c8;
    undefined8 uStack192;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined8 local_a8;
    undefined8 uStack160;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    local_c8 = (undefined4 *)(param_1 + 0x3c0);
    *local_c8 = *param_2;
    *(undefined4 *)(param_1 + 0x3c4) = uVar4;
    *(undefined4 *)(param_1 + 0x3c8) = uVar5;
    *(undefined4 *)(param_1 + 0x3cc) = uVar6;
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    uVar6 = param_2[7];
    puVar30 = (undefined4 *)(param_1 + 0x440);
    pfVar2 = (float *)(param_1 + 0x500);
    *(undefined4 *)(param_1 + 0x3d0) = param_2[4];
    *(undefined4 *)(param_1 + 0x3d4) = uVar4;
    *(undefined4 *)(param_1 + 0x3d8) = uVar5;
    *(undefined4 *)(param_1 + 0x3dc) = uVar6;
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    uVar6 = param_2[0xb];
    *(undefined4 *)(param_1 + 0x3e0) = param_2[8];
    *(undefined4 *)(param_1 + 0x3e4) = uVar4;
    *(undefined4 *)(param_1 + 1000) = uVar5;
    *(undefined4 *)(param_1 + 0x3ec) = uVar6;
    uVar4 = param_2[0xc];
    uVar5 = param_2[0xd];
    uVar6 = param_2[0xe];
    uVar7 = param_2[0xf];
    *(undefined4 *)(param_1 + 0x3f0) = uVar4;
    *(undefined4 *)(param_1 + 0x3f4) = uVar5;
    *(undefined4 *)(param_1 + 0x3f8) = uVar6;
    *(undefined4 *)(param_1 + 0x3fc) = uVar7;
    auVar32 = *(undefined (*) [16])(param_1 + 0x3e0);
    *(undefined (*) [16])(param_1 + 0x400) =
            CONCAT412(uVar4,CONCAT48(SUB164(auVar32,0),
                                     CONCAT44(*(undefined4 *)(param_1 + 0x3d0),*local_c8))) &
            (undefined  [16])0xffffffffffffffff;
    *(undefined (*) [16])(param_1 + 0x410) =
            ZEXT1216(CONCAT48(uVar5,CONCAT44(SUB164(auVar32 >> 0x20,0),*(undefined4 *)(param_1 + 0x3d4)))
            ) << 0x20;
    *(undefined (*) [16])(param_1 + 0x420) =
            CONCAT412(uVar6,CONCAT48(SUB164(auVar32 >> 0x40,0),
                                     CONCAT44(*(undefined4 *)(param_1 + 0x3d8),
                                              *(undefined4 *)(param_1 + 0x3c8))));
    *(undefined (*) [16])(param_1 + 0x430) =
            CONCAT412(uVar7,ZEXT412(*(uint *)(param_1 + 0x3dc)) << 0x20);
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *puVar30 = *param_3;
    *(undefined4 *)(param_1 + 0x444) = uVar4;
    *(undefined4 *)(param_1 + 0x448) = uVar5;
    *(undefined4 *)(param_1 + 0x44c) = uVar6;
    uVar4 = param_3[5];
    uVar5 = param_3[6];
    uVar6 = param_3[7];
    *(undefined4 *)(param_1 + 0x450) = param_3[4];
    *(undefined4 *)(param_1 + 0x454) = uVar4;
    *(undefined4 *)(param_1 + 0x458) = uVar5;
    *(undefined4 *)(param_1 + 0x45c) = uVar6;
    uVar4 = param_3[9];
    uVar5 = param_3[10];
    uVar6 = param_3[0xb];
    *(undefined4 *)(param_1 + 0x460) = param_3[8];
    *(undefined4 *)(param_1 + 0x464) = uVar4;
    *(undefined4 *)(param_1 + 0x468) = uVar5;
    *(undefined4 *)(param_1 + 0x46c) = uVar6;
    uVar4 = param_3[0xd];
    uVar5 = param_3[0xe];
    uVar6 = param_3[0xf];
    *(undefined4 *)(param_1 + 0x470) = param_3[0xc];
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined4 *)(param_1 + 0x478) = uVar5;
    *(undefined4 *)(param_1 + 0x47c) = uVar6;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *(undefined4 *)(param_1 + 0x480) = *param_2;
    *(undefined4 *)(param_1 + 0x484) = uVar4;
    *(undefined4 *)(param_1 + 0x488) = uVar5;
    *(undefined4 *)(param_1 + 0x48c) = uVar6;
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    uVar6 = param_2[7];
    *(undefined4 *)(param_1 + 0x490) = param_2[4];
    *(undefined4 *)(param_1 + 0x494) = uVar4;
    *(undefined4 *)(param_1 + 0x498) = uVar5;
    *(undefined4 *)(param_1 + 0x49c) = uVar6;
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    uVar6 = param_2[0xb];
    *(undefined4 *)(param_1 + 0x4a0) = param_2[8];
    *(undefined4 *)(param_1 + 0x4a4) = uVar4;
    *(undefined4 *)(param_1 + 0x4a8) = uVar5;
    *(undefined4 *)(param_1 + 0x4ac) = uVar6;
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar6 = param_2[0xf];
    *(undefined4 *)(param_1 + 0x4b0) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x4b4) = uVar4;
    *(undefined4 *)(param_1 + 0x4b8) = uVar5;
    *(undefined4 *)(param_1 + 0x4bc) = uVar6;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(param_1 + 0x4c0) = *param_3;
    *(undefined4 *)(param_1 + 0x4c4) = uVar4;
    *(undefined4 *)(param_1 + 0x4c8) = uVar5;
    *(undefined4 *)(param_1 + 0x4cc) = uVar6;
    uVar4 = param_3[5];
    uVar5 = param_3[6];
    uVar6 = param_3[7];
    *(undefined4 *)(param_1 + 0x4d0) = param_3[4];
    *(undefined4 *)(param_1 + 0x4d4) = uVar4;
    *(undefined4 *)(param_1 + 0x4d8) = uVar5;
    *(undefined4 *)(param_1 + 0x4dc) = uVar6;
    uVar4 = param_3[9];
    uVar5 = param_3[10];
    uVar6 = param_3[0xb];
    *(undefined4 *)(param_1 + 0x4e0) = param_3[8];
    *(undefined4 *)(param_1 + 0x4e4) = uVar4;
    *(undefined4 *)(param_1 + 0x4e8) = uVar5;
    *(undefined4 *)(param_1 + 0x4ec) = uVar6;
    uVar4 = param_3[0xd];
    uVar5 = param_3[0xe];
    uVar6 = param_3[0xf];
    lVar28 = param_1 + 0x580;
    *(undefined4 *)(param_1 + 0x4f0) = param_3[0xc];
    *(undefined4 *)(param_1 + 0x4f4) = uVar4;
    *(undefined4 *)(param_1 + 0x4f8) = uVar5;
    *(undefined4 *)(param_1 + 0x4fc) = uVar6;
    fVar31 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = param_4[3];
    *pfVar2 = *param_4;
    *(float *)(param_1 + 0x504) = fVar31;
    *(float *)(param_1 + 0x508) = fVar8;
    *(float *)(param_1 + 0x50c) = fVar9;
    fVar31 = param_4[5];
    fVar8 = param_4[6];
    fVar9 = param_4[7];
    *(float *)(param_1 + 0x510) = param_4[4];
    *(float *)(param_1 + 0x514) = fVar31;
    *(float *)(param_1 + 0x518) = fVar8;
    *(float *)(param_1 + 0x51c) = fVar9;
    fVar31 = param_4[9];
    fVar8 = param_4[10];
    fVar9 = param_4[0xb];
    *(float *)(param_1 + 0x520) = param_4[8];
    *(float *)(param_1 + 0x524) = fVar31;
    *(float *)(param_1 + 0x528) = fVar8;
    *(float *)(param_1 + 0x52c) = fVar9;
    fVar31 = param_4[0xd];
    fVar8 = param_4[0xe];
    fVar9 = param_4[0xf];
    *(float *)(param_1 + 0x530) = param_4[0xc];
    *(float *)(param_1 + 0x534) = fVar31;
    *(float *)(param_1 + 0x538) = fVar8;
    *(float *)(param_1 + 0x53c) = fVar9;
    fVar31 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = param_4[3];
    *(float *)(param_1 + 0x540) = *param_4;
    *(float *)(param_1 + 0x544) = fVar31;
    *(float *)(param_1 + 0x548) = fVar8;
    *(float *)(param_1 + 0x54c) = fVar9;
    fVar31 = param_4[5];
    fVar8 = param_4[6];
    fVar9 = param_4[7];
    *(float *)(param_1 + 0x550) = param_4[4];
    *(float *)(param_1 + 0x554) = fVar31;
    *(float *)(param_1 + 0x558) = fVar8;
    *(float *)(param_1 + 0x55c) = fVar9;
    fVar31 = param_4[9];
    fVar8 = param_4[10];
    fVar9 = param_4[0xb];
    *(float *)(param_1 + 0x560) = param_4[8];
    *(float *)(param_1 + 0x564) = fVar31;
    *(float *)(param_1 + 0x568) = fVar8;
    *(float *)(param_1 + 0x56c) = fVar9;
    fVar31 = param_4[0xd];
    fVar8 = param_4[0xe];
    fVar9 = param_4[0xf];
    *(float *)(param_1 + 0x570) = param_4[0xc];
    *(float *)(param_1 + 0x574) = fVar31;
    *(float *)(param_1 + 0x578) = fVar8;
    *(float *)(param_1 + 0x57c) = fVar9;
    local_a8 = param_4;
    FUN_1401afc20(&local_a8,lVar28);
    uStack192 = pfVar2;
    local_a8 = (float *)local_c8;
    uStack160 = pfVar2;
    FUN_1401afb10(&local_a8,param_1 + 0x5c0);
    local_c8 = (undefined4 *)lVar28;
    uStack192 = (float *)puVar30;
    local_a8 = (float *)lVar28;
    uStack160 = (float *)puVar30;
    FUN_1401afb10(&local_a8);
    pfVar1 = param_5 + 0x18;
    fVar31 = *(float *)(param_1 + 0x400);
    fVar8 = *(float *)(param_1 + 0x404);
    fVar9 = *(float *)(param_1 + 0x408);
    fVar10 = *(float *)(param_1 + 0x40c);
    fVar11 = *(float *)(param_1 + 0x410);
    fVar12 = *(float *)(param_1 + 0x414);
    fVar13 = *(float *)(param_1 + 0x418);
    fVar14 = *(float *)(param_1 + 0x41c);
    fVar15 = *(float *)(param_1 + 0x420);
    fVar16 = *(float *)(param_1 + 0x424);
    fVar17 = *(float *)(param_1 + 0x428);
    fVar18 = *(float *)(param_1 + 0x42c);
    fVar19 = *(float *)(param_1 + 0x430);
    fVar20 = *(float *)(param_1 + 0x434);
    fVar21 = *(float *)(param_1 + 0x438);
    fVar22 = *(float *)(param_1 + 0x43c);
    if (param_5 < pfVar1) {
        lVar28 = (longlong)&local_a8 - (longlong)param_5;
        do {
            pauVar3 = (undefined (*) [16])(lVar28 + (longlong)param_5);
            fVar23 = *param_5;
            fVar24 = param_5[1];
            pfVar25 = param_5 + 2;
            fVar26 = param_5[3];
            param_5 = param_5 + 4;
            *pauVar3 = CONCAT412(fVar24 * fVar14 + fVar23 * fVar10 + *pfVar25 * fVar18 + fVar26 * fVar22,
                                 CONCAT48(fVar24 * fVar13 + fVar23 * fVar9 + *pfVar25 * fVar17 +
                                          fVar26 * fVar21,
                                          CONCAT44(fVar24 * fVar12 + fVar23 * fVar8 + fVar16 * 0.0 +
                                                   fVar26 * fVar20,
                                                   fVar24 * fVar11 + fVar23 * fVar31 + fVar15 * 0.0 +
                                                   fVar26 * fVar19)));
        } while (param_5 < pfVar1);
    }
    lVar28 = 6;
    lVar29 = 6;
    puVar27 = &local_a8;
    do {
        fVar8 = *(float *)puVar27;
        fVar9 = *(float *)((longlong)puVar27 + 4);
        fVar10 = *(float *)(puVar27 + 1);
        fVar11 = *(float *)((longlong)puVar27 + 0xc);
        auVar32 = CONCAT124(SUB1612(CONCAT412(fVar11 * fVar11,
                                              CONCAT48(fVar10 * fVar10,
                                                       CONCAT44(fVar9 * fVar9,fVar8 * fVar8))) >> 0x20,0
        ),fVar8 * fVar8 + fVar9 * fVar9 + 0.0);
        auVar32 = rsqrtss(auVar32,auVar32);
        fVar31 = SUB164(auVar32,0);
        *(float *)puVar27 = fVar31 * fVar8;
        *(float *)((longlong)puVar27 + 4) = fVar31 * fVar9;
        *(float *)(puVar27 + 1) = fVar31 * fVar10;
        *(float *)((longlong)puVar27 + 0xc) = fVar31 * fVar11;
        lVar29 = lVar29 + -1;
        puVar27 = puVar27 + 2;
    } while (lVar29 != 0);
    puVar27 = &local_a8;
    do {
        uVar4 = *(undefined4 *)puVar27;
        uVar5 = *(undefined4 *)((longlong)puVar27 + 4);
        uVar6 = *(undefined4 *)(puVar27 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar27 + 0xc);
        puVar27 = puVar27 + 2;
        puVar30 = (undefined4 *)((param_1 - (longlong)&local_a8) + 0x680 + (longlong)puVar27);
        *puVar30 = uVar4;
        puVar30[1] = uVar5;
        puVar30[2] = uVar6;
        puVar30[3] = uVar7;
        lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    local_b8 = 0x3f800000;
    uStack180 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x754) = 0;
    *(undefined4 *)(param_1 + 0x758) = (undefined4)uStack192;
    *(undefined4 *)(param_1 + 0x75c) = uStack192._4_4_;
    *(undefined4 *)(param_1 + 0x760) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x764) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x768) = uStack176;
    *(undefined4 *)(param_1 + 0x76c) = uStack172;
    *(undefined4 *)(param_1 + 0x770) = 0;
    if (param_4[0xb] == 0.0) {
        *(undefined4 *)(param_1 + 0x648) = 1;
        fVar31 = 1.0 / *(float *)(param_1 + 0x528);
        local_c8 = (undefined4 *)
                CONCAT44((*(float *)(param_1 + 0x538) - 1.0) * fVar31,
                         *(float *)(param_1 + 0x538) * fVar31);
        *(undefined4 **)(param_1 + 0x64c) = local_c8;
        *(undefined (*) [16])(param_1 + 0x660) =
                ZEXT816(CONCAT44(2.0 / *(float *)(param_1 + 0x514),2.0 / *pfVar2));
        *(float *)(param_1 + 0x670) =
                (*(float *)(param_1 + 0x530) + 1.0) * *(float *)(param_1 + 0x660) * -0.5;
        fVar31 = (*(float *)(param_1 + 0x534) + 1.0) * *(float *)(param_1 + 0x664) * -0.5;
    }
    else {
        *(undefined4 *)(param_1 + 0x648) = 0;
        local_c8 = (undefined4 *)
                CONCAT44(*(float *)(param_1 + 0x538) / (*(float *)(param_1 + 0x528) + 1.0),
                         *(float *)(param_1 + 0x538) / *(float *)(param_1 + 0x528));
        *(undefined4 **)(param_1 + 0x64c) = local_c8;
        fVar31 = *(float *)(param_1 + 0x64c) * 2.0;
        *(undefined (*) [16])(param_1 + 0x660) =
                ZEXT816(CONCAT44(fVar31 / param_4[5],fVar31 / *param_4));
        *(float *)(param_1 + 0x670) =
                (*(float *)(param_1 + 0x520) - 1.0) * *(float *)(param_1 + 0x660) * 0.5;
        fVar31 = (*(float *)(param_1 + 0x524) - 1.0) * *(float *)(param_1 + 0x664) * 0.5;
    }
    *(float *)(param_1 + 0x674) = fVar31;
    *(undefined (*) [16])(param_1 + 0x680) =
            CONCAT412(*(float *)(param_1 + 0x67c) + *(float *)(param_1 + 0x66c),
                      CONCAT48(*(float *)(param_1 + 0x678) + *(float *)(param_1 + 0x668),
                               CONCAT44(*(float *)(param_1 + 0x674) + *(float *)(param_1 + 0x664),
                                        *(float *)(param_1 + 0x670) + *(float *)(param_1 + 0x660))));
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack232);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14036f190(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    uint uVar4;
    ulonglong uVar5;
    int iVar6;
    float fVar7;
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    ulonglong uVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined in_XMM10 [16];
    undefined auVar19 [16];
    float fVar20;
    undefined4 uVar21;
    undefined auStack776 [32];
    undefined *local_2e8;
    undefined local_2d8 [8];
    undefined8 uStack720;
    undefined4 local_2c4;
    float local_2b8;
    undefined8 local_2b4;
    undefined8 local_2ac;
    float local_2a4;
    undefined8 local_2a0;
    undefined8 local_298;
    float local_290;
    undefined8 local_28c;
    undefined4 local_284;
    float local_280;
    undefined4 local_27c;
    undefined4 local_278;
    undefined4 uStack628;
    undefined4 uStack624;
    undefined4 uStack620;
    undefined4 local_268;
    undefined4 uStack612;
    undefined4 uStack608;
    undefined4 uStack604;
    undefined local_258 [16];
    undefined8 local_248;
    undefined8 uStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined local_208 [16];
    undefined4 local_1f8 [16];
    undefined8 local_1b8;
    undefined8 uStack432;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined4 *local_168;
    float *local_160;
    undefined4 local_158 [16];
    undefined4 *local_118;
    undefined4 *local_110;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack776;
    fVar18 = 1.0;
    uVar21 = 0;
    fVar10 = param_4[0xe] / param_4[10];
    fVar9 = (1.0 / param_4[5]) * (1.0 / param_4[5]) + (1.0 / *param_4) * (1.0 / *param_4);
    fVar11 = fVar9;
    if (param_4[0xb] != 0.0) {
        fVar11 = fVar9 * fVar10 * fVar10;
        fVar9 = fVar9 * 1024.0;
    }
    fVar7 = ((((fVar11 + fVar10 * fVar10) - fVar9) - 1024.0) * 0.5) / (fVar10 - 32.0);
    if (fVar10 < fVar7) {
        if (fVar7 < 32.0) {
            auVar19 = sqrtps(in_XMM10,ZEXT416((uint)((fVar10 - fVar7) * (fVar10 - fVar7) + fVar11)));
            fVar11 = SUB164(auVar19,0);
        }
        else {
            auVar19 = sqrtps(in_XMM10,ZEXT416((uint)fVar9));
            fVar11 = SUB164(auVar19,0);
        }
    }
    else {
        auVar19 = sqrtps(in_XMM10,ZEXT416((uint)fVar11));
        fVar11 = SUB164(auVar19,0);
    }
    auVar19 = CONCAT412(param_3[7] * 0.0 + param_3[3] * 0.0 + param_3[0xb] * 0.0 + param_3[0xf],
                        CONCAT48(param_3[6] * 0.0 + param_3[2] * 0.0 + param_3[10] * 0.0 +
                                 param_3[0xe],
                                 CONCAT44(param_3[5] * 0.0 + param_3[1] * 0.0 + param_3[9] * 0.0 +
                                          param_3[0xd],
                                          param_3[4] * 0.0 + *param_3 * 0.0 + param_3[8] * 0.0 +
                                          param_3[0xc])));
    _local_2d8 = auVar19;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1578) + 0x18))();
    fVar9 = SUB164(auVar19 >> 0x20,0);
    fVar12 = fVar9 * 65536.0;
    auVar19 = CONCAT124(SUB1612(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))) >> 0x20,0),
                        fVar12);
    fVar7 = (float)(ulonglong)*(uint *)(uVar5 + 4);
    iVar6 = (int)fVar12;
    fVar20 = fVar18 / fVar7;
    fVar10 = fVar11 * 2.0 * (fVar18 / DAT_140c7ac54) * fVar7 * 0.0004882813;
    local_2b8 = fVar18 / fVar10;
    fVar10 = fVar20 * fVar10;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar12)) {
        uVar14 = SUB168(auVar19,0);
        uVar4 = movmskps((int)uVar5,
                         CONCAT88(SUB168(CONCAT412(fVar9,CONCAT48(fVar9,uVar14)) >> 0x40,0),
                                  uVar14 & 0xffffffff | uVar14 << 0x20));
        uVar5 = (ulonglong)(uVar4 & 1);
        auVar19 = ZEXT416((uint)(float)(iVar6 - (uVar4 & 1)));
    }
    uVar4 = (uint)uVar5;
    fVar13 = SUB164(auVar19,0) * 1.525879e-05;
    fVar9 = (fVar18 / DAT_140c7ac54) * fVar13;
    local_2d8 = (float *)CONCAT44(fVar13,local_2d8._0_4_);
    fVar15 = local_2d8._0_4_ - fVar9 * DAT_140c7ac50;
    fVar16 = fVar13 - fVar9 * DAT_140c7ac54;
    fVar17 = (float)uStack720 - fVar9 * DAT_140c7ac58;
    fVar12 = fVar15 * local_2b8 * fVar7;
    auVar19 = CONCAT124(SUB1612(CONCAT412(uStack720._4_4_ - fVar9 * fRam0000000140c7ac5c,
                                          CONCAT48(fVar17,CONCAT44(fVar16,fVar15))) >> 0x20,0),fVar12)
            ;
    iVar6 = (int)fVar12;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar12)) {
        uVar5 = SUB168(auVar19,0);
        uVar4 = movmskps(uVar4,CONCAT88(SUB168(CONCAT412(fVar16,CONCAT48(fVar16,uVar5)) >> 0x40,0),
                                        uVar5 & 0xffffffff | uVar5 << 0x20));
        uVar4 = uVar4 & 1;
        auVar19 = ZEXT416((uint)(float)(iVar6 - uVar4));
    }
    fVar9 = fVar17 * local_2b8 * fVar7;
    auVar8 = ZEXT816(CONCAT44(fVar17,fVar9)) & (undefined  [16])0xffffffffffffffff;
    uVar5 = SUB168(auVar8,0);
    iVar6 = (int)fVar9;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar9)) {
        uVar4 = movmskps(uVar4,CONCAT88(SUB168(CONCAT412(SUB164(auVar8 >> 0x20,0),CONCAT48(fVar17,uVar5)
        ) >> 0x40,0),uVar5 & 0xffffffff | uVar5 << 0x20)
                               & (undefined  [16])0xffffffffffffffff);
        uVar5 = (ulonglong)(uint)(float)(iVar6 - (uVar4 & 1));
    }
    local_118 = &local_278;
    local_2d8._0_4_ = (SUB164(auVar19,0) * fVar10 - fVar15) + local_2d8._0_4_;
    fVar13 = (0.0 - fVar16) + fVar13;
    uStack720._0_4_ = ((float)uVar5 * fVar10 - fVar17) + (float)uStack720;
    local_278 = 0x3f800000;
    uStack628 = 0;
    uStack624 = 0;
    uStack620 = 0;
    fVar9 = ((fVar11 * 1.414214 + *(float *)(param_1 + 0x88)) * DAT_140c7ac54) /
            SQRT(DAT_140c7ac50 * DAT_140c7ac50 + 0.0);
    fVar10 = fVar13 - fVar11;
    if (DAT_140c7ac74 <= fVar9) {
        fVar9 = DAT_140c7ac74;
    }
    local_268 = 0;
    uStack612 = 0;
    uStack608 = 0xbf800000;
    uStack604 = 0;
    if (fVar9 <= fVar13 + fVar11) {
        fVar9 = fVar13 + fVar11;
    }
    local_258 = CONCAT412(uVar21,CONCAT48(DAT_140c7ac58,CONCAT44(DAT_140c7ac54,DAT_140c7ac50)));
    uStack576 = SUB168(CONCAT412(fVar18,CONCAT48((float)uStack720,
                                                 CONCAT44((float)uStack720,local_2d8._0_4_))) >> 0x40,
                       0);
    local_248 = CONCAT44(fVar13,local_2d8._0_4_);
    FUN_1401afc20(&local_118,local_1f8);
    local_2a4 = local_2b8 * 2.0;
    local_2b8 = local_2b8 * 2.0;
    local_2b4 = 0;
    local_2ac = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_28c = 0;
    local_284 = 0;
    local_27c = 0x3f800000;
    local_290 = fVar18 / ((fVar13 - fVar9) - (fVar13 - fVar10));
    local_280 = local_290 * (fVar13 - fVar9);
    local_2e8 = (undefined *)FUN_1401b20f0(&local_118,&local_2b8);
    FUN_14036ec90(param_1,local_1f8,&local_278,&local_2b8);
    uStack432 = local_1f8;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x480) = *param_2;
    *(undefined4 *)(param_1 + 0x484) = uVar1;
    *(undefined4 *)(param_1 + 0x488) = uVar2;
    *(undefined4 *)(param_1 + 0x48c) = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    *(undefined4 *)(param_1 + 0x490) = param_2[4];
    *(undefined4 *)(param_1 + 0x494) = uVar1;
    *(undefined4 *)(param_1 + 0x498) = uVar2;
    *(undefined4 *)(param_1 + 0x49c) = uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    *(undefined4 *)(param_1 + 0x4a0) = param_2[8];
    *(undefined4 *)(param_1 + 0x4a4) = uVar1;
    *(undefined4 *)(param_1 + 0x4a8) = uVar2;
    *(undefined4 *)(param_1 + 0x4ac) = uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    *(undefined4 *)(param_1 + 0x4b0) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x4b4) = uVar1;
    *(undefined4 *)(param_1 + 0x4b8) = uVar2;
    *(undefined4 *)(param_1 + 0x4bc) = uVar3;
    fVar11 = param_3[1];
    fVar9 = param_3[2];
    fVar10 = param_3[3];
    *(float *)(param_1 + 0x4c0) = *param_3;
    *(float *)(param_1 + 0x4c4) = fVar11;
    *(float *)(param_1 + 0x4c8) = fVar9;
    *(float *)(param_1 + 0x4cc) = fVar10;
    fVar11 = param_3[5];
    fVar9 = param_3[6];
    fVar10 = param_3[7];
    *(float *)(param_1 + 0x4d0) = param_3[4];
    *(float *)(param_1 + 0x4d4) = fVar11;
    *(float *)(param_1 + 0x4d8) = fVar9;
    *(float *)(param_1 + 0x4dc) = fVar10;
    fVar11 = param_3[9];
    fVar9 = param_3[10];
    fVar10 = param_3[0xb];
    *(float *)(param_1 + 0x4e0) = param_3[8];
    *(float *)(param_1 + 0x4e4) = fVar11;
    *(float *)(param_1 + 0x4e8) = fVar9;
    *(float *)(param_1 + 0x4ec) = fVar10;
    fVar11 = param_3[0xd];
    fVar9 = param_3[0xe];
    fVar10 = param_3[0xf];
    *(float *)(param_1 + 0x4f0) = param_3[0xc];
    *(float *)(param_1 + 0x4f4) = fVar11;
    *(float *)(param_1 + 0x4f8) = fVar9;
    *(float *)(param_1 + 0x4fc) = fVar10;
    local_1b8 = param_3;
    local_2d8 = param_3;
    uStack720 = (float *)uStack432;
    FUN_1401afb10(&local_1b8,&local_1a8);
    local_168 = &local_1a8;
    local_160 = &local_2b8;
    local_2d8 = (float *)local_168;
    uStack720 = local_160;
    FUN_1401afb10(&local_168,param_1 + 0x540);
    local_168 = local_1f8;
    local_160 = &local_2b8;
    fVar11 = (fVar20 + fVar18) * 0.5;
    local_238 = 0x3f000000;
    uStack564 = 0;
    uStack560 = 0;
    uStack556 = 0;
    local_228 = 0;
    uStack548 = 0xbf000000;
    uStack544 = 0;
    uStack540 = 0;
    local_218 = 0;
    uStack532 = 0;
    uStack528 = 0x3f800000;
    uStack524 = 0;
    local_208 = CONCAT412(fVar18,CONCAT48(uVar21,CONCAT44(fVar11,fVar11)));
    local_2d8 = (float *)local_168;
    uStack720 = local_160;
    FUN_1401afb10(&local_168,local_158);
    local_118 = local_158;
    local_110 = &local_238;
    _local_2d8 = CONCAT88(local_110,local_118);
    FUN_1401afb10(&local_118,&local_1b8);
    FUN_1402c8730(param_1 + 0xdb0,param_1 + 0xaa0);
    FUN_140262c40(param_1 + 0xdb0,param_1 + 0x3c0,param_1 + 0x440);
    FUN_140359a20(param_1);
    FUN_140359e70(param_1);
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    _local_2d8 = CONCAT88(*(undefined8 *)(param_1 + 0x1570),local_2d8);
    _local_2d8 = CONCAT124(stack0xfffffffffffffd2c,1);
    local_2c4 = 0;
    local_2e8 = &DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_2d8,&DAT_140c3fe88,&DAT_140c3fe88);
    _local_2d8 = CONCAT88(*(undefined8 *)(param_1 + 0x1578),local_2d8);
    _local_2d8 = CONCAT124(stack0xfffffffffffffd2c,1);
    local_2c4 = 0;
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,local_2d8,1);
    (**(code **)(*DAT_140c65670 + 0x278))(DAT_140c65670,1);
    FUN_140361040(param_1);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    (**(code **)(*DAT_140c65670 + 0x228))();
    *(undefined8 *)(param_1 + 0xda8) = *(undefined8 *)(param_1 + 0x1578);
    *(undefined4 *)(param_1 + 0xd10) = (undefined4)local_1b8;
    *(undefined4 *)(param_1 + 0xd14) = local_1b8._4_4_;
    *(undefined4 *)(param_1 + 0xd18) = (undefined4)uStack432;
    *(undefined4 *)(param_1 + 0xd1c) = uStack432._4_4_;
    *(undefined4 *)(param_1 + 0xd20) = local_1a8;
    *(undefined4 *)(param_1 + 0xd24) = uStack420;
    *(undefined4 *)(param_1 + 0xd28) = uStack416;
    *(undefined4 *)(param_1 + 0xd2c) = uStack412;
    *(undefined4 *)(param_1 + 0xd30) = local_198;
    *(undefined4 *)(param_1 + 0xd34) = uStack404;
    *(undefined4 *)(param_1 + 0xd38) = uStack400;
    *(undefined4 *)(param_1 + 0xd3c) = uStack396;
    *(undefined4 *)(param_1 + 0xd40) = local_188;
    *(undefined4 *)(param_1 + 0xd44) = uStack388;
    *(undefined4 *)(param_1 + 0xd48) = uStack384;
    *(undefined4 *)(param_1 + 0xd4c) = uStack380;
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack776);
    return;
}



undefined8 * FUN_14036f940(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1400522d0;
    param_1[4] = &LAB_140351a00;
    return param_1;
}



void FUN_14036f9b0(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14036ff20();
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x00014036f9dd. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



void FUN_14036f9f0(longlong param_1)

{
    FUN_14004eed0(param_1 + 0x38,0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14036f9f0();
        FUN_14036f9f0(*(longlong *)(param_1 + 0x30) + 0x50);
        FUN_14036f9f0(*(longlong *)(param_1 + 0x30) + 0xa0);
        FUN_14036f9f0(*(longlong *)(param_1 + 0x30) + 0xf0);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14036ff20();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
}



undefined8 FUN_14036fa60(longlong param_1,longlong param_2)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    longlong local_res10 [3];

    if ((((param_2 == 0) ||
          (*(float *)(param_2 + 0x50) <= *(float *)(param_1 + 0x10) &&
           *(float *)(param_1 + 0x10) != *(float *)(param_2 + 0x50))) ||
         (*(float *)(param_1 + 0x20) < *(float *)(param_2 + 0x60))) ||
        ((*(float *)(param_2 + 0x54) <= *(float *)(param_1 + 0x14) &&
          *(float *)(param_1 + 0x14) != *(float *)(param_2 + 0x54) ||
          (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 100))))) {
        return 0;
    }
    local_res10[0] = param_2;
    if ((*(longlong *)(param_1 + 0x30) == 0) && (7 < *(ulonglong *)(param_1 + 0x40))) {
        FUN_140370000();
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
        fVar2 = (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x10)) * 0.5;
        fVar3 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14)) * 0.5;
        if (*(float *)(param_2 + 0x60) <= fVar2) {
            if (fVar3 < *(float *)(param_2 + 100)) {
                if (*(float *)(param_2 + 0x54) <= fVar3 && fVar3 != *(float *)(param_2 + 0x54))
                    goto LAB_14036fb78;
                lVar1 = lVar1 + 0x50;
            }
            FUN_14036fa60(lVar1,param_2);
            return 1;
        }
        if (fVar2 < *(float *)(param_2 + 0x50) || fVar2 == *(float *)(param_2 + 0x50)) {
            if (*(float *)(param_2 + 100) <= fVar3) {
                FUN_14036fa60(lVar1 + 0xa0,param_2);
                return 1;
            }
            if (fVar3 < *(float *)(param_2 + 0x54) || fVar3 == *(float *)(param_2 + 0x54)) {
                FUN_14036fa60(lVar1 + 0xf0,param_2);
                return 1;
            }
        }
    }
    LAB_14036fb78:
    FUN_140033260(param_1 + 0x38,local_res10);
    return 1;
}



undefined8 FUN_14036fbb0(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;

    if ((((param_2 != 0) &&
          (*(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x50) ||
           *(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x50))) &&
         (*(float *)(param_2 + 0x60) <= *(float *)(param_1 + 0x20))) &&
        ((*(float *)(param_1 + 0x14) < *(float *)(param_2 + 0x54) ||
          *(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x54) &&
          (*(float *)(param_2 + 100) <= *(float *)(param_1 + 0x24))))) {
        uVar2 = FUN_1403702a0();
        iVar1 = FUN_140370330(uVar2,param_2);
        if (iVar1 == 0) {
            uVar2 = FUN_140370330(param_1,param_2);
            return uVar2;
        }
    }
    return 0;
}



undefined8 * FUN_14036fc30(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x1ff3);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_140375780;
    param_1[4] = &LAB_1403757c0;
    return param_1;
}



void FUN_14036fcb0(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong *puVar4;

    if (*param_1 == param_1[1]) {
        FUN_1400290d0();
    }
    uVar3 = (*(code *)param_1[3])(param_2);
    ppuVar1 = (ulonglong **)(param_1[2] + (uVar3 % (ulonglong)param_1[1]) * 8);
    puVar4 = (ulonglong *)FUN_14018b280(0x30);
    if (puVar4 == (ulonglong *)0x0) {
        *ppuVar1 = (ulonglong *)0x0;
    }
    else {
        puVar2 = *ppuVar1;
        *puVar4 = uVar3;
        puVar4[1] = (ulonglong)puVar2;
        puVar4[2] = *param_2;
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_2 + 1);
        puVar4[4] = *param_3;
        puVar4[5] = param_3[1];
        *ppuVar1 = puVar4;
    }
    *param_1 = *param_1 + 1;
    return;
}



undefined8 FUN_14036fd60(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0x18))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x10) + (uVar3 % *(ulonglong *)(param_1 + 8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x20))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return 0;
    }
    if (param_3 != (ulonglong *)0x0) {
        *param_3 = puVar1[4];
        param_3[1] = puVar1[5];
    }
    return 1;
}



undefined8 FUN_14036fe00(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0x18))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x10) + (uVar3 % *(ulonglong *)(param_1 + 8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x20))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 4 == (ulonglong *)0x0) {
        return 0;
    }
    puVar1[4] = *param_3;
    puVar1[5] = param_3[1];
    return 1;
}



undefined8 * FUN_14036fea0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x1ff3);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_14037a360;
    param_1[4] = &LAB_14037a3c0;
    return param_1;
}



longlong FUN_14036ff20(longlong param_1)

{
    int iVar1;
    undefined *puVar2;

    iVar1 = *(int *)(param_1 + -0x10);
    puVar2 = (undefined *)((longlong)iVar1 * 0x50 + param_1);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
        puVar2 = &DAT_ffffffffffffffb0 + (longlong)puVar2;
        FUN_14036f9b0(puVar2);
    }
    FUN_14018b900(param_1 + -0x10,0);
    return param_1 + -0x10;
}



undefined8 * FUN_14036ff80(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xfff1);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = FUN_1402dd520;
    param_1[4] = FUN_1402dd540;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140370000(int *param_1)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 *puVar6;
    int iVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 uStack48;
    undefined4 uStack44;

    if ((*param_1 != 0) && (*(longlong *)(param_1 + 0xc) == 0)) {
        puVar6 = (undefined8 *)FUN_14018b280(0x150,0);
        puVar10 = (undefined8 *)0x0;
        puVar9 = puVar10;
        if (puVar6 != (undefined8 *)0x0) {
            puVar9 = puVar6 + 2;
            *(undefined4 *)puVar6 = 4;
            iVar7 = 3;
            do {
                iVar7 = iVar7 + -1;
                *(undefined4 *)(puVar6 + 2) = 6;
                uVar5 = uRam0000000140c784ec;
                uVar4 = uRam0000000140c784e8;
                uVar3 = _DAT_140c784e4;
                *(undefined4 *)(puVar6 + 4) = _DAT_140c784e0;
                *(undefined4 *)((longlong)puVar6 + 0x24) = uVar3;
                *(undefined4 *)(puVar6 + 5) = uVar4;
                *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar5;
                uVar5 = uRam0000000140c784fc;
                uVar4 = uRam0000000140c784f8;
                uVar3 = _DAT_140c784f4;
                *(undefined4 *)(puVar6 + 6) = _DAT_140c784f0;
                *(undefined4 *)((longlong)puVar6 + 0x34) = uVar3;
                *(undefined4 *)(puVar6 + 7) = uVar4;
                *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar5;
                puVar6[8] = 0;
                puVar6[10] = 0;
                puVar6[9] = 0;
                puVar6 = puVar6 + 10;
            } while (-1 < iVar7);
        }
        iVar2 = *param_1;
        iVar7 = param_1[4];
        iVar1 = param_1[5];
        *(undefined8 **)(param_1 + 0xc) = puVar9;
        fVar12 = ((float)param_1[8] + (float)param_1[4]) * 0.5;
        fVar14 = ((float)param_1[9] + (float)param_1[5]) * 0.5;
        fVar11 = fVar14;
        fVar13 = fVar12;
        FUN_14036f9f0(puVar9);
        *(int *)(puVar9 + 2) = iVar7;
        *(int *)((longlong)puVar9 + 0x14) = iVar1;
        *(undefined4 *)(puVar9 + 3) = uStack64;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack60;
        *(float *)(puVar9 + 4) = fVar12;
        *(float *)((longlong)puVar9 + 0x24) = fVar14;
        *(undefined4 *)(puVar9 + 5) = uStack48;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack44;
        *(int *)puVar9 = iVar2 + -1;
        lVar8 = *(longlong *)(param_1 + 0xc);
        iVar2 = *param_1;
        iVar7 = param_1[4];
        iVar1 = param_1[9];
        fVar12 = fVar11;
        fVar14 = fVar13;
        FUN_14036f9f0(lVar8 + 0x50);
        *(int *)(lVar8 + 0x60) = iVar7;
        *(float *)(lVar8 + 100) = fVar11;
        *(undefined4 *)(lVar8 + 0x68) = uStack64;
        *(undefined4 *)(lVar8 + 0x6c) = uStack60;
        *(float *)(lVar8 + 0x70) = fVar13;
        *(int *)(lVar8 + 0x74) = iVar1;
        *(undefined4 *)(lVar8 + 0x78) = uStack48;
        *(undefined4 *)(lVar8 + 0x7c) = uStack44;
        *(int *)(lVar8 + 0x50) = iVar2 + -1;
        lVar8 = *(longlong *)(param_1 + 0xc);
        iVar2 = *param_1;
        iVar7 = param_1[5];
        iVar1 = param_1[8];
        fVar11 = fVar12;
        fVar13 = fVar14;
        FUN_14036f9f0(lVar8 + 0xa0);
        *(float *)(lVar8 + 0xb0) = fVar14;
        *(int *)(lVar8 + 0xb4) = iVar7;
        *(undefined4 *)(lVar8 + 0xb8) = uStack64;
        *(undefined4 *)(lVar8 + 0xbc) = uStack60;
        *(int *)(lVar8 + 0xc0) = iVar1;
        *(float *)(lVar8 + 0xc4) = fVar12;
        *(undefined4 *)(lVar8 + 200) = uStack48;
        *(undefined4 *)(lVar8 + 0xcc) = uStack44;
        *(int *)(lVar8 + 0xa0) = iVar2 + -1;
        lVar8 = *(longlong *)(param_1 + 0xc);
        iVar2 = *param_1;
        iVar7 = param_1[8];
        iVar1 = param_1[9];
        fVar12 = fVar11;
        fVar14 = fVar13;
        FUN_14036f9f0(lVar8 + 0xf0);
        *(float *)(lVar8 + 0x100) = fVar13;
        *(float *)(lVar8 + 0x104) = fVar11;
        *(undefined4 *)(lVar8 + 0x108) = uStack64;
        *(undefined4 *)(lVar8 + 0x10c) = uStack60;
        *(int *)(lVar8 + 0x110) = iVar7;
        *(int *)(lVar8 + 0x114) = iVar1;
        *(undefined4 *)(lVar8 + 0x118) = uStack48;
        *(undefined4 *)(lVar8 + 0x11c) = uStack44;
        *(int *)(lVar8 + 0xf0) = iVar2 + -1;
        if (*(longlong *)(param_1 + 0x10) != 0) {
            do {
                lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xe) + (longlong)puVar10 * 8);
                if (fVar14 < *(float *)(lVar8 + 0x60)) {
                    if (fVar14 < *(float *)(lVar8 + 0x50) || fVar14 == *(float *)(lVar8 + 0x50)) {
                        if (fVar12 < *(float *)(lVar8 + 100)) {
                            if (*(float *)(lVar8 + 0x54) <= fVar12 && fVar12 != *(float *)(lVar8 + 0x54))
                                goto LAB_14037025f;
                            lVar8 = *(longlong *)(param_1 + 0xc) + 0xf0;
                        }
                        else {
                            lVar8 = *(longlong *)(param_1 + 0xc) + 0xa0;
                        }
                        goto LAB_1403701fb;
                    }
                    LAB_14037025f:
                    puVar10 = (undefined8 *)(ulonglong)((int)puVar10 + 1);
                }
                else {
                    if (fVar12 < *(float *)(lVar8 + 100)) {
                        if (*(float *)(lVar8 + 0x54) <= fVar12 && fVar12 != *(float *)(lVar8 + 0x54))
                            goto LAB_14037025f;
                        lVar8 = *(longlong *)(param_1 + 0xc) + 0x50;
                    }
                    else {
                        lVar8 = *(longlong *)(param_1 + 0xc);
                    }
                    LAB_1403701fb:
                    FUN_14036fa60(lVar8);
                    *(undefined8 *)(*(longlong *)(param_1 + 0xe) + (longlong)puVar10 * 8) =
                            *(undefined8 *)
                                    (*(longlong *)(param_1 + 0xe) + -8 + *(longlong *)(param_1 + 0x10) * 8);
                    FUN_14004eed0(param_1 + 0xe,*(longlong *)(param_1 + 0x10) + -1);
                }
            } while (puVar10 < *(undefined8 **)(param_1 + 0x10));
        }
    }
    return;
}



longlong FUN_1403702a0(longlong param_1,float *param_2)

{
    longlong lVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
        lVar2 = param_1;
        do {
            fVar3 = (*(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x10)) * 0.5;
            fVar4 = (*(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x14)) * 0.5;
            if (fVar3 < param_2[4]) {
                if (*param_2 <= fVar3 && fVar3 != *param_2) {
                    return lVar2;
                }
                if (fVar4 < param_2[5]) {
                    if (param_2[1] <= fVar4 && fVar4 != param_2[1]) {
                        return lVar2;
                    }
                    param_1 = lVar1 + 0xf0;
                }
                else {
                    param_1 = lVar1 + 0xa0;
                }
            }
            else {
                param_1 = lVar1;
                if (fVar4 < param_2[5]) {
                    if (param_2[1] <= fVar4 && fVar4 != param_2[1]) {
                        return lVar2;
                    }
                    param_1 = lVar1 + 0x50;
                }
            }
            lVar1 = *(longlong *)(param_1 + 0x30);
            lVar2 = param_1;
        } while (lVar1 != 0);
    }
    return param_1;
}



undefined8 FUN_140370330(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    uVar1 = *(ulonglong *)(param_1 + 0x40);
    uVar4 = 0;
    if (uVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x38);
        do {
            if (*(longlong *)(lVar2 + uVar4 * 8) == param_2) {
                *(undefined8 *)(lVar2 + uVar4 * 8) = *(undefined8 *)(lVar2 + -8 + uVar1 * 8);
                FUN_14004eed0(param_1 + 0x38,*(longlong *)(param_1 + 0x40) + -1);
                return 1;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < uVar1);
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
        return 0;
    }
    iVar3 = FUN_140370330();
    if ((((iVar3 == 0) &&
          (iVar3 = FUN_140370330(*(longlong *)(param_1 + 0x30) + 0x50,param_2), iVar3 == 0)) &&
         (iVar3 = FUN_140370330(*(longlong *)(param_1 + 0x30) + 0xa0,param_2), iVar3 == 0)) &&
        (iVar3 = FUN_140370330(*(longlong *)(param_1 + 0x30) + 0xf0,param_2), iVar3 == 0)) {
        return 0;
    }
    return 1;
}



undefined8 * FUN_1403703f0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x1ff3);
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



void FUN_140370470(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    if (param_3 == 2) {
        uVar6 = *param_2;
        if (param_2[1] < uVar6) {
            *param_2 = param_2[1];
            param_2[1] = uVar6;
            return;
        }
    }
    else if (1 < param_3) {
        uVar6 = param_3 >> 1;
        if (uVar6 != 0) {
            uVar8 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                uVar1 = param_2[uVar6 - 1];
                uVar6 = uVar6 - 1;
                uVar8 = uVar8 - 2;
                uVar3 = uVar6;
                uVar7 = uVar8;
                while (uVar7 < param_3) {
                    uVar2 = param_2[uVar7];
                    uVar5 = uVar7 + 1;
                    uVar4 = uVar7;
                    if ((uVar5 < param_3) && (uVar2 < param_2[uVar5])) {
                        uVar2 = param_2[uVar5];
                        uVar4 = uVar5;
                    }
                    if (uVar2 <= uVar1) break;
                    param_2[uVar3] = uVar2;
                    uVar3 = uVar4;
                    uVar7 = uVar4 * 2 + 1;
                }
                param_2[uVar3] = uVar1;
            } while (uVar6 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            uVar8 = param_2[param_3];
            uVar6 = 1;
            uVar7 = 0;
            param_2[param_3] = *param_2;
            if (1 < param_3) {
                do {
                    uVar3 = param_2[uVar6];
                    uVar1 = uVar6 + 1;
                    uVar5 = uVar6;
                    if ((uVar1 < param_3) && (uVar3 < param_2[uVar1])) {
                        uVar3 = param_2[uVar1];
                        uVar5 = uVar1;
                    }
                    if (uVar3 <= uVar8) break;
                    param_2[uVar7] = uVar3;
                    uVar6 = uVar5 * 2 + 1;
                    uVar7 = uVar5;
                } while (uVar6 < param_3);
            }
            param_2[uVar7] = uVar8;
        }
    }
    return;
}



longlong FUN_1403705b0(longlong *param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    if (param_3 != 0) {
        lVar3 = FUN_14018db00(*param_1,lVar1 + param_3,8);
        FUN_1407db590(lVar3 + lVar1 * 8,param_2,param_3 * 8);
        if (*param_1 != lVar3) {
            FUN_1407db590(lVar3,*param_1,param_1[1] << 3);
            lVar2 = *param_1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *param_1 = lVar3;
        }
        param_1[1] = lVar1 + param_3;
    }
    return lVar1;
}



void FUN_140370660(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x118) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x120);
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x118) = *(undefined8 *)(param_1 + 0x118);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    return;
}



void FUN_1403706b0(longlong *param_1,undefined8 param_2,code *param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    lVar10 = 1;
    LAB_1403706e0:
    lVar6 = *param_1;
    bVar4 = true;
    lVar2 = lVar10;
    lVar8 = lVar6;
    do {
        for (; (lVar7 = lVar10, lVar9 = lVar10, lVar6 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar6 = *(longlong *)(lVar6 + 0x458);
        }
        while( true ) {
            if (lVar6 == 0) goto LAB_140370793;
            if (lVar7 == 0) goto LAB_1403707a0;
            if (lVar9 == 0) break;
            iVar5 = (*param_3)(lVar8,lVar6,0);
            if (iVar5 < 1) {
                lVar8 = *(longlong *)(lVar8 + 0x458);
                lVar7 = lVar7 + -1;
            }
            else {
                pplVar1 = (longlong **)(lVar6 + 0x450);
                lVar9 = lVar9 + -1;
                **pplVar1 = *(longlong *)(lVar6 + 0x458);
                lVar2 = **pplVar1;
                if (lVar2 != 0) {
                    *(longlong **)(lVar2 + 0x450) = *pplVar1;
                }
                plVar3 = *(longlong **)(lVar8 + 0x450);
                *(longlong *)(lVar6 + 0x458) = lVar8;
                *pplVar1 = plVar3;
                *plVar3 = lVar6;
                *(longlong **)(lVar8 + 0x450) = (longlong *)(lVar6 + 0x458);
                lVar6 = lVar2;
            }
        }
        LAB_1403707b6:
        bVar4 = false;
        lVar2 = lVar10;
        lVar8 = lVar6;
    } while( true );
    LAB_1403707a0:
    if (lVar9 == 0) goto LAB_1403707b6;
    lVar6 = *(longlong *)(lVar6 + 0x458);
    lVar9 = lVar9 + -1;
    if (lVar6 == 0) goto LAB_140370793;
    goto LAB_1403707a0;
    LAB_140370793:
    if (bVar4) {
        return;
    }
    lVar10 = lVar10 * 2;
    goto LAB_1403706e0;
}



void FUN_1403707e0(longlong *param_1,undefined8 param_2,code *param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    lVar10 = 1;
    LAB_140370810:
    lVar6 = *param_1;
    bVar4 = true;
    lVar2 = lVar10;
    lVar8 = lVar6;
    do {
        for (; (lVar7 = lVar10, lVar9 = lVar10, lVar6 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar6 = *(longlong *)(lVar6 + 0x4d8);
        }
        while( true ) {
            if (lVar6 == 0) goto LAB_1403708c3;
            if (lVar7 == 0) goto LAB_1403708d0;
            if (lVar9 == 0) break;
            iVar5 = (*param_3)(lVar8,lVar6,0);
            if (iVar5 < 1) {
                lVar8 = *(longlong *)(lVar8 + 0x4d8);
                lVar7 = lVar7 + -1;
            }
            else {
                pplVar1 = (longlong **)(lVar6 + 0x4d0);
                lVar9 = lVar9 + -1;
                **pplVar1 = *(longlong *)(lVar6 + 0x4d8);
                lVar2 = **pplVar1;
                if (lVar2 != 0) {
                    *(longlong **)(lVar2 + 0x4d0) = *pplVar1;
                }
                plVar3 = *(longlong **)(lVar8 + 0x4d0);
                *(longlong *)(lVar6 + 0x4d8) = lVar8;
                *pplVar1 = plVar3;
                *plVar3 = lVar6;
                *(longlong **)(lVar8 + 0x4d0) = (longlong *)(lVar6 + 0x4d8);
                lVar6 = lVar2;
            }
        }
        LAB_1403708e6:
        bVar4 = false;
        lVar2 = lVar10;
        lVar8 = lVar6;
    } while( true );
    LAB_1403708d0:
    if (lVar9 == 0) goto LAB_1403708e6;
    lVar6 = *(longlong *)(lVar6 + 0x4d8);
    lVar9 = lVar9 + -1;
    if (lVar6 == 0) goto LAB_1403708c3;
    goto LAB_1403708d0;
    LAB_1403708c3:
    if (bVar4) {
        return;
    }
    lVar10 = lVar10 * 2;
    goto LAB_140370810;
}



void FUN_140370910(longlong *param_1,undefined8 param_2,code *param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    lVar10 = 1;
    LAB_140370940:
    lVar6 = *param_1;
    bVar4 = true;
    lVar2 = lVar10;
    lVar8 = lVar6;
    do {
        for (; (lVar7 = lVar10, lVar9 = lVar10, lVar6 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar6 = *(longlong *)(lVar6 + 0xe8);
        }
        while( true ) {
            if (lVar6 == 0) goto LAB_1403709f3;
            if (lVar7 == 0) goto LAB_140370a00;
            if (lVar9 == 0) break;
            iVar5 = (*param_3)(lVar8,lVar6,0);
            if (iVar5 < 1) {
                lVar8 = *(longlong *)(lVar8 + 0xe8);
                lVar7 = lVar7 + -1;
            }
            else {
                pplVar1 = (longlong **)(lVar6 + 0xe0);
                lVar9 = lVar9 + -1;
                **pplVar1 = *(longlong *)(lVar6 + 0xe8);
                lVar2 = **pplVar1;
                if (lVar2 != 0) {
                    *(longlong **)(lVar2 + 0xe0) = *pplVar1;
                }
                plVar3 = *(longlong **)(lVar8 + 0xe0);
                *(longlong *)(lVar6 + 0xe8) = lVar8;
                *pplVar1 = plVar3;
                *plVar3 = lVar6;
                *(longlong **)(lVar8 + 0xe0) = (longlong *)(lVar6 + 0xe8);
                lVar6 = lVar2;
            }
        }
        LAB_140370a16:
        bVar4 = false;
        lVar2 = lVar10;
        lVar8 = lVar6;
    } while( true );
    LAB_140370a00:
    if (lVar9 == 0) goto LAB_140370a16;
    lVar6 = *(longlong *)(lVar6 + 0xe8);
    lVar9 = lVar9 + -1;
    if (lVar6 == 0) goto LAB_1403709f3;
    goto LAB_140370a00;
    LAB_1403709f3:
    if (bVar4) {
        return;
    }
    lVar10 = lVar10 * 2;
    goto LAB_140370940;
}



void FUN_140370a40(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xe8);
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return;
}



void FUN_140370a90(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x4f0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x4f8);
    }
    if (*(longlong *)(param_1 + 0x4f8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x4f8) + 0x4f0) = *(undefined8 *)(param_1 + 0x4f0);
    }
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    return;
}



void FUN_140370ae0(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x4e0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x4e8);
    }
    if (*(longlong *)(param_1 + 0x4e8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x4e8) + 0x4e0) = *(undefined8 *)(param_1 + 0x4e0);
    }
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    return;
}



void FUN_140370b30(longlong **param_1,longlong param_2,code *param_3,undefined8 param_4)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    bool bVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;

    lVar11 = 1;
    LAB_140370b70:
    plVar7 = *param_1;
    bVar4 = true;
    lVar5 = lVar11;
    plVar10 = plVar7;
    do {
        for (; (lVar8 = lVar11, lVar9 = lVar11, plVar7 != (longlong *)0x0 && (lVar5 != 0));
               lVar5 = lVar5 + -1) {
            plVar7 = *(longlong **)((longlong)plVar7 + param_2 + 8);
        }
        while( true ) {
            if (plVar7 == (longlong *)0x0) goto LAB_140370c0e;
            if (lVar8 == 0) goto LAB_140370c20;
            if (lVar9 == 0) break;
            iVar6 = (*param_3)(plVar10,plVar7,param_4);
            if (iVar6 < 1) {
                plVar10 = *(longlong **)((longlong)plVar10 + param_2 + 8);
                lVar8 = lVar8 + -1;
            }
            else {
                pplVar1 = (longlong **)((longlong)plVar7 + param_2);
                lVar9 = lVar9 + -1;
                **(longlong ***)((longlong)plVar7 + param_2) = pplVar1[1];
                plVar2 = (longlong *)**pplVar1;
                if (plVar2 != (longlong *)0x0) {
                    *(longlong **)((longlong)plVar2 + param_2) = *pplVar1;
                }
                pplVar3 = *(longlong ***)((longlong)plVar10 + param_2);
                pplVar1[1] = plVar10;
                *pplVar1 = (longlong *)pplVar3;
                *pplVar3 = plVar7;
                *(longlong ***)((longlong)plVar10 + param_2) = pplVar1 + 1;
                plVar7 = plVar2;
            }
        }
        LAB_140370c34:
        bVar4 = false;
        lVar5 = lVar11;
        plVar10 = plVar7;
    } while( true );
    LAB_140370c20:
    if (lVar9 == 0) goto LAB_140370c34;
    plVar7 = *(longlong **)((longlong)plVar7 + param_2 + 8);
    lVar9 = lVar9 + -1;
    if (plVar7 == (longlong *)0x0) goto LAB_140370c0e;
    goto LAB_140370c20;
    LAB_140370c0e:
    if (bVar4) {
        return;
    }
    lVar11 = lVar11 * 2;
    goto LAB_140370b70;
}



void FUN_140370c80(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong **pplVar1;
    undefined4 local_38;
    undefined4 local_34;
    longlong *local_30;
    undefined *local_28;
    undefined8 local_20;
    undefined4 local_18;

    *param_1 = param_2;
    param_1[1] = param_3;
    pplVar1 = (longlong **)(param_1 + 3);
    param_1[2] = *(longlong *)(param_2 + 8);
    local_28 = &LAB_140370e20;
    local_38 = 4;
    local_34 = 1;
    local_20 = 0;
    local_18 = 1;
    local_30 = param_1;
    FUN_14019dca0(&local_38,1,0,pplVar1);
    (**(code **)(**pplVar1 + 0x48))(*pplVar1,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(**pplVar1 + 0x48))(*pplVar1,*(undefined8 *)(param_3 + 0x10));
    // WARNING: Could not recover jumptable at 0x000140370d1d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**pplVar1 + 0x58))();
    return;
}



void FUN_140370d30(longlong *param_1,longlong *param_2,longlong param_3,code *param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    longlong local_res8;

    lVar1 = *param_2;
    lVar2 = *param_1;
    local_res8 = 0;
    plVar4 = &local_res8;
    do {
        if (lVar2 == 0) {
            if (lVar1 == 0) {
                LAB_140370dda:
                *plVar4 = 0;
            }
            else {
                *plVar4 = lVar1;
                *(longlong **)(lVar1 + param_3) = plVar4;
            }
            LAB_140370de1:
            *param_1 = 0;
            *param_2 = local_res8;
            if (local_res8 != 0) {
                *(longlong **)(local_res8 + param_3) = param_2;
            }
            return;
        }
        if (lVar1 == 0) {
            if (lVar2 == 0) goto LAB_140370dda;
            *plVar4 = lVar2;
            *(longlong **)(lVar2 + param_3) = plVar4;
            goto LAB_140370de1;
        }
        iVar3 = (*param_4)(lVar2,lVar1,param_5);
        if (iVar3 < 1) {
            *plVar4 = lVar2;
            *(longlong **)(lVar2 + param_3) = plVar4;
            plVar4 = (longlong *)(param_3 + 8 + lVar2);
            lVar2 = *plVar4;
        }
        else {
            *plVar4 = lVar1;
            *(longlong **)(lVar1 + param_3) = plVar4;
            plVar4 = (longlong *)(param_3 + 8 + lVar1);
            lVar1 = *plVar4;
        }
    } while( true );
}



void FUN_140370e50(undefined8 *param_1,longlong param_2,longlong param_3)

{
    longlong **pplVar1;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 *local_30;
    undefined *local_28;
    undefined8 local_20;
    undefined4 local_18;

    pplVar1 = (longlong **)(param_1 + 3);
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_3 + 8);
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    local_28 = &LAB_140370e20;
    local_38 = 4;
    local_34 = 1;
    local_20 = 0;
    local_18 = 1;
    local_30 = param_1;
    FUN_14019dca0(&local_38,1,0,pplVar1);
    (**(code **)(**pplVar1 + 0x48))(*pplVar1,*(undefined8 *)(param_2 + 0x18));
    (**(code **)(**pplVar1 + 0x48))(*pplVar1,*(undefined8 *)(param_3 + 0x18));
    // WARNING: Could not recover jumptable at 0x000140370ef5. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**pplVar1 + 0x58))();
    return;
}



void FUN_140370f00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong **pplVar10;
    longlong *plVar11;
    longlong *plVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined4 local_74;
    longlong *local_70;
    undefined *local_68;
    undefined8 local_60;
    undefined4 local_58;
    undefined8 local_50;
    ulonglong local_40;

    lVar3 = *param_1;
    if (lVar3 != 0) {
        local_80 = 0;
        local_90 = 0x70;
        if (param_5 == 0) {
            do {
                lVar3 = *(longlong *)(lVar3 + 0x78);
                param_5 = param_5 + 1;
            } while (lVar3 != 0);
        }
        uVar13 = DAT_140c63758;
        if (DAT_140c63758 != 0) {
            uVar13 = (ulonglong)*(uint *)(DAT_140c63758 + 0xb8);
        }
        uVar7 = param_5 + 0x3fU >> 6;
        if (uVar13 < uVar7) {
            uVar7 = uVar13;
        }
        local_88 = param_3;
        local_40 = uVar7;
        if (uVar7 == 1) {
            FUN_140370b30(param_1,0x70,param_3,0);
        }
        else {
            uVar13 = uVar7;
            if (uVar7 == 0) {
                plVar11 = (longlong *)0x0;
                plVar12 = plVar11;
            }
            else {
                puVar4 = (undefined8 *)FUN_14018b280(uVar7 * 0x18 + 0x10);
                if (puVar4 == (undefined8 *)0x0) {
                    plVar11 = (longlong *)&DAT_00000010;
                    plVar12 = plVar11;
                }
                else {
                    *puVar4 = &PTR_FUN_140b5f110;
                    plVar11 = puVar4 + 2;
                    plVar12 = plVar11;
                }
            }
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                if (plVar11 != (longlong *)0x0) {
                    plVar11[2] = 0;
                }
                plVar11 = plVar11 + 3;
            }
            lVar3 = *param_1;
            if (lVar3 != 0) {
                **(undefined8 **)(lVar3 + local_90) = 0;
                *(undefined8 *)(lVar3 + local_90) = 0;
            }
            uVar13 = 0;
            plVar8 = plVar12;
            plVar11 = local_70;
            while (local_70 = plVar8, lVar3 != 0) {
                if (uVar7 - 1 <= uVar13) {
                    if (lVar3 != 0) {
                        local_70 = plVar12 + uVar13 * 3;
                        *local_70 = lVar3;
                        local_70[1] = (longlong)&local_90;
                        *(longlong **)(lVar3 + local_90) = local_70;
                        uVar13 = uVar13 + 1;
                        local_78 = 4;
                        local_74 = 1;
                        local_68 = &LAB_140370c60;
                        local_60 = 0;
                        local_58 = 1;
                        FUN_14019dca0(&local_78,0,0,local_70 + 2);
                        plVar11 = local_70;
                    }
                    break;
                }
                uVar7 = 0;
                for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8 + local_90)) {
                    if ((param_5 + -1 + uVar7) / uVar7 <= uVar7) {
                        if (lVar1 != 0) {
                            **(undefined8 **)(lVar1 + local_90) = 0;
                            *(undefined8 *)(lVar1 + local_90) = 0;
                        }
                        break;
                    }
                    uVar7 = uVar7 + 1;
                }
                uVar13 = uVar13 + 1;
                plVar8 = local_70 + 3;
                local_70[1] = (longlong)&local_90;
                *local_70 = lVar3;
                if (lVar3 != 0) {
                    *(longlong **)(lVar3 + local_90) = local_70;
                }
                local_78 = 4;
                local_74 = 1;
                local_68 = &LAB_140370c60;
                local_60 = 0;
                local_58 = 1;
                FUN_14019dca0(&local_78,0,0,local_70 + 2);
                lVar3 = lVar1;
                plVar11 = local_70;
            }
            local_70 = plVar11;
            uVar15 = uVar13 + 1 >> 1;
            uVar7 = uVar15;
            uVar14 = uVar15;
            while (1 < uVar7) {
                uVar7 = uVar7 + 1 >> 1;
                uVar14 = uVar14 + uVar7;
            }
            local_50 = uVar14;
            uVar7 = uVar14;
            if (uVar14 == 0) {
                puVar4 = (undefined8 *)0x0;
                puVar5 = puVar4;
            }
            else {
                puVar5 = (undefined8 *)FUN_14018b280(uVar14 * 0x20 + 0x10,0);
                if (puVar5 == (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)&DAT_00000010;
                    puVar5 = puVar4;
                }
                else {
                    puVar4 = puVar5 + 2;
                    *puVar5 = &PTR_FUN_140b5f110;
                    puVar5 = puVar4;
                }
            }
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar4[3] = 0;
                }
                puVar4 = puVar4 + 4;
            }
            puVar4 = puVar5;
            if (uVar15 != 0) {
                uVar9 = 1;
                pplVar6 = (longlong **)(puVar5 + 3);
                pplVar10 = (longlong **)(plVar12 + 2);
                uVar7 = uVar15;
                do {
                    if (uVar9 < uVar13) {
                        FUN_140370c80(pplVar6 + -3,pplVar10 + -2,pplVar10 + 1);
                    }
                    else {
                        pplVar6[-3] = (longlong *)0x0;
                        pplVar6[-2] = (longlong *)(pplVar10 + -2);
                        pplVar6[-1] = pplVar10[-1];
                        plVar11 = *pplVar10;
                        if (*pplVar6 != plVar11) {
                            if (plVar11 != (longlong *)0x0) {
                                (**(code **)*plVar11)();
                            }
                            if (*pplVar6 != (longlong *)0x0) {
                                (**(code **)(**pplVar6 + 8))();
                            }
                            *pplVar6 = *pplVar10;
                        }
                    }
                    uVar9 = uVar9 + 2;
                    pplVar10 = pplVar10 + 6;
                    pplVar6 = pplVar6 + 4;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            while (puVar2 = puVar4, uVar13 = uVar15, 1 < uVar13) {
                puVar4 = puVar2 + uVar13 * 4;
                uVar15 = uVar13 + 1 >> 1;
                uVar14 = local_50;
                if (uVar15 != 0) {
                    uVar9 = 1;
                    pplVar6 = (longlong **)(puVar4 + 3);
                    pplVar10 = (longlong **)(puVar2 + 3);
                    uVar7 = uVar15;
                    do {
                        if (uVar9 < uVar13) {
                            FUN_140370e50(pplVar6 + -3,pplVar10 + -3,pplVar10 + 1);
                        }
                        else {
                            pplVar6[-3] = (longlong *)0x0;
                            pplVar6[-2] = pplVar10[-2];
                            pplVar6[-1] = pplVar10[-1];
                            plVar11 = *pplVar10;
                            if (*pplVar6 != plVar11) {
                                if (plVar11 != (longlong *)0x0) {
                                    (**(code **)*plVar11)();
                                }
                                if (*pplVar6 != (longlong *)0x0) {
                                    (**(code **)(**pplVar6 + 8))();
                                }
                                *pplVar6 = *pplVar10;
                            }
                        }
                        uVar9 = uVar9 + 2;
                        pplVar10 = pplVar10 + 8;
                        pplVar6 = pplVar6 + 4;
                        uVar7 = uVar7 - 1;
                        uVar14 = local_50;
                    } while (uVar7 != 0);
                }
            }
            local_50 = CONCAT44((int)(local_50 >> 0x20),0xffffffff);
            (**(code **)(*(longlong *)puVar2[3] + 0x20))((longlong *)puVar2[3],&local_50);
            lVar3 = *(longlong *)puVar2[1];
            *(longlong **)(lVar3 + local_90) = param_1;
            *param_1 = lVar3;
            if (uVar14 != 0) {
                pplVar6 = (longlong **)(puVar5 + 3);
                do {
                    if (*pplVar6 != (longlong *)0x0) {
                        (**(code **)(**pplVar6 + 8))();
                    }
                    pplVar6 = pplVar6 + 4;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            if (puVar5 != (undefined8 *)0x0) {
                (**(code **)puVar5[-2])(puVar5 + -2);
            }
            if (local_40 != 0) {
                pplVar6 = (longlong **)(plVar12 + 2);
                uVar13 = local_40;
                do {
                    if (*pplVar6 != (longlong *)0x0) {
                        (**(code **)(**pplVar6 + 8))();
                    }
                    pplVar6 = pplVar6 + 3;
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            if (plVar12 != (longlong *)0x0) {
                (**(code **)plVar12[-2])(plVar12 + -2);
            }
        }
    }
    return;
}



void FUN_140371430(longlong **param_1,longlong param_2,code *param_3)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    bool bVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;

    lVar11 = 1;
    LAB_140371460:
    plVar7 = *param_1;
    bVar4 = true;
    lVar5 = lVar11;
    plVar10 = plVar7;
    do {
        for (; (lVar8 = lVar11, lVar9 = lVar11, plVar7 != (longlong *)0x0 && (lVar5 != 0));
               lVar5 = lVar5 + -1) {
            plVar7 = *(longlong **)((longlong)plVar7 + param_2 + 8);
        }
        while( true ) {
            if (plVar7 == (longlong *)0x0) goto LAB_140371502;
            if (lVar8 == 0) goto LAB_140371514;
            if (lVar9 == 0) break;
            iVar6 = (*param_3)(plVar10,plVar7,0);
            if (iVar6 < 1) {
                plVar10 = *(longlong **)((longlong)plVar10 + param_2 + 8);
                lVar8 = lVar8 + -1;
            }
            else {
                pplVar1 = (longlong **)((longlong)plVar7 + param_2);
                lVar9 = lVar9 + -1;
                **(longlong ***)((longlong)plVar7 + param_2) = pplVar1[1];
                plVar2 = (longlong *)**pplVar1;
                if (plVar2 != (longlong *)0x0) {
                    *(longlong **)((longlong)plVar2 + param_2) = *pplVar1;
                }
                pplVar3 = *(longlong ***)((longlong)plVar10 + param_2);
                pplVar1[1] = plVar10;
                *pplVar1 = (longlong *)pplVar3;
                *pplVar3 = plVar7;
                *(longlong ***)((longlong)plVar10 + param_2) = pplVar1 + 1;
                plVar7 = plVar2;
            }
        }
        LAB_140371528:
        bVar4 = false;
        lVar5 = lVar11;
        plVar10 = plVar7;
    } while( true );
    LAB_140371514:
    if (lVar9 == 0) goto LAB_140371528;
    plVar7 = *(longlong **)((longlong)plVar7 + param_2 + 8);
    lVar9 = lVar9 + -1;
    if (plVar7 == (longlong *)0x0) goto LAB_140371502;
    goto LAB_140371514;
    LAB_140371502:
    if (bVar4) {
        return;
    }
    lVar11 = lVar11 * 2;
    goto LAB_140371460;
}



void FUN_140371550(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong **pplVar10;
    longlong *plVar11;
    longlong *plVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined4 local_74;
    longlong *local_70;
    undefined *local_68;
    undefined8 local_60;
    undefined4 local_58;
    undefined8 local_50;
    ulonglong local_40;

    lVar3 = *param_1;
    if (lVar3 != 0) {
        local_80 = 0;
        local_90 = 0x588;
        if (param_5 == 0) {
            do {
                lVar3 = *(longlong *)(lVar3 + 0x590);
                param_5 = param_5 + 1;
            } while (lVar3 != 0);
        }
        uVar13 = DAT_140c63758;
        if (DAT_140c63758 != 0) {
            uVar13 = (ulonglong)*(uint *)(DAT_140c63758 + 0xb8);
        }
        uVar7 = param_5 + 0x3fU >> 6;
        if (uVar13 < uVar7) {
            uVar7 = uVar13;
        }
        local_88 = param_3;
        local_40 = uVar7;
        if (uVar7 == 1) {
            FUN_140370b30(param_1,0x588,param_3,0);
        }
        else {
            uVar13 = uVar7;
            if (uVar7 == 0) {
                plVar11 = (longlong *)0x0;
                plVar12 = plVar11;
            }
            else {
                puVar4 = (undefined8 *)FUN_14018b280(uVar7 * 0x18 + 0x10);
                if (puVar4 == (undefined8 *)0x0) {
                    plVar11 = (longlong *)&DAT_00000010;
                    plVar12 = plVar11;
                }
                else {
                    *puVar4 = &PTR_FUN_140b5f110;
                    plVar11 = puVar4 + 2;
                    plVar12 = plVar11;
                }
            }
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                if (plVar11 != (longlong *)0x0) {
                    plVar11[2] = 0;
                }
                plVar11 = plVar11 + 3;
            }
            lVar3 = *param_1;
            if (lVar3 != 0) {
                **(undefined8 **)(lVar3 + local_90) = 0;
                *(undefined8 *)(lVar3 + local_90) = 0;
            }
            uVar13 = 0;
            plVar8 = plVar12;
            plVar11 = local_70;
            while (local_70 = plVar8, lVar3 != 0) {
                if (uVar7 - 1 <= uVar13) {
                    if (lVar3 != 0) {
                        local_70 = plVar12 + uVar13 * 3;
                        *local_70 = lVar3;
                        local_70[1] = (longlong)&local_90;
                        *(longlong **)(lVar3 + local_90) = local_70;
                        uVar13 = uVar13 + 1;
                        local_78 = 4;
                        local_74 = 1;
                        local_68 = &LAB_140370c60;
                        local_60 = 0;
                        local_58 = 1;
                        FUN_14019dca0(&local_78,0,0,local_70 + 2);
                        plVar11 = local_70;
                    }
                    break;
                }
                uVar7 = 0;
                for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8 + local_90)) {
                    if ((param_5 + -1 + uVar7) / uVar7 <= uVar7) {
                        if (lVar1 != 0) {
                            **(undefined8 **)(lVar1 + local_90) = 0;
                            *(undefined8 *)(lVar1 + local_90) = 0;
                        }
                        break;
                    }
                    uVar7 = uVar7 + 1;
                }
                uVar13 = uVar13 + 1;
                plVar8 = local_70 + 3;
                local_70[1] = (longlong)&local_90;
                *local_70 = lVar3;
                if (lVar3 != 0) {
                    *(longlong **)(lVar3 + local_90) = local_70;
                }
                local_78 = 4;
                local_74 = 1;
                local_68 = &LAB_140370c60;
                local_60 = 0;
                local_58 = 1;
                FUN_14019dca0(&local_78,0,0,local_70 + 2);
                lVar3 = lVar1;
                plVar11 = local_70;
            }
            local_70 = plVar11;
            uVar15 = uVar13 + 1 >> 1;
            uVar7 = uVar15;
            uVar14 = uVar15;
            while (1 < uVar7) {
                uVar7 = uVar7 + 1 >> 1;
                uVar14 = uVar14 + uVar7;
            }
            local_50 = uVar14;
            uVar7 = uVar14;
            if (uVar14 == 0) {
                puVar4 = (undefined8 *)0x0;
                puVar5 = puVar4;
            }
            else {
                puVar5 = (undefined8 *)FUN_14018b280(uVar14 * 0x20 + 0x10,0);
                if (puVar5 == (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)&DAT_00000010;
                    puVar5 = puVar4;
                }
                else {
                    puVar4 = puVar5 + 2;
                    *puVar5 = &PTR_FUN_140b5f110;
                    puVar5 = puVar4;
                }
            }
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar4[3] = 0;
                }
                puVar4 = puVar4 + 4;
            }
            puVar4 = puVar5;
            if (uVar15 != 0) {
                uVar9 = 1;
                pplVar6 = (longlong **)(puVar5 + 3);
                pplVar10 = (longlong **)(plVar12 + 2);
                uVar7 = uVar15;
                do {
                    if (uVar9 < uVar13) {
                        FUN_140370c80(pplVar6 + -3,pplVar10 + -2,pplVar10 + 1);
                    }
                    else {
                        pplVar6[-3] = (longlong *)0x0;
                        pplVar6[-2] = (longlong *)(pplVar10 + -2);
                        pplVar6[-1] = pplVar10[-1];
                        plVar11 = *pplVar10;
                        if (*pplVar6 != plVar11) {
                            if (plVar11 != (longlong *)0x0) {
                                (**(code **)*plVar11)();
                            }
                            if (*pplVar6 != (longlong *)0x0) {
                                (**(code **)(**pplVar6 + 8))();
                            }
                            *pplVar6 = *pplVar10;
                        }
                    }
                    uVar9 = uVar9 + 2;
                    pplVar10 = pplVar10 + 6;
                    pplVar6 = pplVar6 + 4;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            while (puVar2 = puVar4, uVar13 = uVar15, 1 < uVar13) {
                puVar4 = puVar2 + uVar13 * 4;
                uVar15 = uVar13 + 1 >> 1;
                uVar14 = local_50;
                if (uVar15 != 0) {
                    uVar9 = 1;
                    pplVar6 = (longlong **)(puVar4 + 3);
                    pplVar10 = (longlong **)(puVar2 + 3);
                    uVar7 = uVar15;
                    do {
                        if (uVar9 < uVar13) {
                            FUN_140370e50(pplVar6 + -3,pplVar10 + -3,pplVar10 + 1);
                        }
                        else {
                            pplVar6[-3] = (longlong *)0x0;
                            pplVar6[-2] = pplVar10[-2];
                            pplVar6[-1] = pplVar10[-1];
                            plVar11 = *pplVar10;
                            if (*pplVar6 != plVar11) {
                                if (plVar11 != (longlong *)0x0) {
                                    (**(code **)*plVar11)();
                                }
                                if (*pplVar6 != (longlong *)0x0) {
                                    (**(code **)(**pplVar6 + 8))();
                                }
                                *pplVar6 = *pplVar10;
                            }
                        }
                        uVar9 = uVar9 + 2;
                        pplVar10 = pplVar10 + 8;
                        pplVar6 = pplVar6 + 4;
                        uVar7 = uVar7 - 1;
                        uVar14 = local_50;
                    } while (uVar7 != 0);
                }
            }
            local_50 = CONCAT44((int)(local_50 >> 0x20),0xffffffff);
            (**(code **)(*(longlong *)puVar2[3] + 0x20))((longlong *)puVar2[3],&local_50);
            lVar3 = *(longlong *)puVar2[1];
            *(longlong **)(lVar3 + local_90) = param_1;
            *param_1 = lVar3;
            if (uVar14 != 0) {
                pplVar6 = (longlong **)(puVar5 + 3);
                do {
                    if (*pplVar6 != (longlong *)0x0) {
                        (**(code **)(**pplVar6 + 8))();
                    }
                    pplVar6 = pplVar6 + 4;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            if (puVar5 != (undefined8 *)0x0) {
                (**(code **)puVar5[-2])(puVar5 + -2);
            }
            if (local_40 != 0) {
                pplVar6 = (longlong **)(plVar12 + 2);
                uVar13 = local_40;
                do {
                    if (*pplVar6 != (longlong *)0x0) {
                        (**(code **)(**pplVar6 + 8))();
                    }
                    pplVar6 = pplVar6 + 3;
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            if (plVar12 != (longlong *)0x0) {
                (**(code **)plVar12[-2])(plVar12 + -2);
            }
        }
    }
    return;
}



void FUN_140371a90(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x4d0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x4d0) = *(undefined8 *)(param_1 + 0x4d8);
    }
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x4d8) + 0x4d0) = *(undefined8 *)(param_1 + 0x4d0);
    }
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    return;
}



undefined8 FUN_140371ae0(undefined8 param_1,ulonglong param_2)

{
    FUN_140371b20();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140371b20(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b65a38;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xb] = param_1[0xc];
    }
    if (param_1[0xc] != 0) {
        *(undefined8 *)(param_1[0xc] + 0x58) = param_1[0xb];
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    lVar1 = param_1[9];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



undefined8 FUN_140371ba0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined4 uVar8;

    lVar7 = (longlong)*(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = 0x400;
    *(undefined4 *)(param_1 + 0x2c) = 0x41;
    iVar5 = *(int *)(&DAT_140c387f0 + lVar7 * 4);
    *(undefined4 *)(param_1 + 0x38) = 0x3d800000;
    uVar4 = ~(iVar5 - 1U) & iVar5 + 0x40U;
    *(uint *)(param_1 + 0x30) = uVar4;
    *(float *)(param_1 + 0x3c) = (float)(ulonglong)uVar4 * 0.0009765625;
    *(int *)(param_1 + 0x34) = (int)(0x400 / (ulonglong)uVar4);
    if (*(int *)(&DAT_140c38820 + lVar7 * 4) == 1) {
        uVar8 = 0x3a000000;
    }
    else {
        uVar8 = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = uVar8;
    uVar6 = 0;
    uVar3 = (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,0x400,0x400,1,*(undefined4 *)(&DAT_140c38808 + lVar7 * 4),1,
             *(undefined4 *)(&DAT_140c38820 + lVar7 * 4),0,0,param_1 + 0x20);
    if (-1 < (int)uVar3) {
        uVar4 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x34);
        FUN_140052360(param_1 + 0x48,uVar4);
        if ((ulonglong)uVar4 != 0) {
            do {
                iVar5 = (int)uVar6;
                uVar6 = uVar6 + 1;
                *(uint *)(*(longlong *)(param_1 + 0x48) + -4 + uVar6 * 4) = (uVar4 - iVar5) + -1;
            } while (uVar6 < uVar4);
        }
        plVar2 = (longlong *)
                (*(longlong *)(param_1 + 0x10) + ((longlong)*(int *)(param_1 + 0x18) + 0x62) * 8);
        if (*(longlong *)(param_1 + 0x58) == 0) {
            *(longlong **)(param_1 + 0x58) = plVar2;
            plVar1 = (longlong *)(param_1 + 0x60);
            *plVar1 = *plVar2;
            *plVar2 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x58) = plVar1;
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}



ulonglong FUN_140371d10(longlong param_1,uint param_2,longlong param_3,ulonglong param_4,
                        uint *param_5)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    uint local_res18;
    ulonglong in_stack_ffffffffffffff68;
    ulonglong in_stack_ffffffffffffff70;
    longlong *local_68;
    uint local_60;
    uint local_5c;
    undefined local_58 [4];
    int local_54;
    int local_50;
    int local_48;
    int local_44;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;

    if (param_3 == 0) {
        return 0x80070057;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    local_5c = param_2 / *(uint *)(param_1 + 0x34);
    local_60 = param_2 % *(uint *)(param_1 + 0x34);
    local_44 = iVar1 * local_5c;
    local_48 = iVar1 * local_60;
    local_40 = local_48 + iVar1;
    local_3c = local_44 + iVar1;
    if (*(uint *)(param_4 + 0xc) == *(uint *)(&DAT_140c38808 + (longlong)*(int *)(param_1 + 0x18) * 4)
            ) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                (*(longlong **)(param_1 + 0x20),0,*(uint *)(param_4 + 0xc),param_3,
                 in_stack_ffffffffffffff68 & 0xffffffff00000000 | (ulonglong)*param_5,
                 &local_48);
        if ((int)uVar3 < 0) {
            return uVar3;
        }
        LAB_140371f6f:
        uVar3 = 0;
    }
    else {
        local_68 = (longlong *)0x0;
        uVar2 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,iVar1,iVar1,1,
                 in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                 (ulonglong)*(uint *)(&DAT_140c38808 + (longlong)*(int *)(param_1 + 0x18) * 4)
                        ,in_stack_ffffffffffffff70 & 0xffffffff00000000,0,0,0,&local_68);
        uVar3 = (ulonglong)uVar2;
        if (-1 < (int)uVar2) {
            lVar4 = (**(code **)(*local_68 + 0x48))();
            if (lVar4 == 0) {
                uVar3 = 0x80004005;
            }
            else {
                lVar5 = (**(code **)(*local_68 + 0x18))();
                local_38 = *(int *)(lVar5 + 4) + (uint)(*(int *)(lVar5 + 4) == 0);
                local_34 = *(int *)(lVar5 + 8) + (uint)(*(int *)(lVar5 + 8) == 0);
                local_30 = *(int *)(lVar5 + 0xc) + (uint)(*(int *)(lVar5 + 0xc) == 0);
                iVar1 = *(int *)(lVar5 + 0x18);
                lVar5 = (longlong)iVar1 * 0x2c;
                local_54 = ((uint)(*(int *)(&DAT_140ae5210 + lVar5) + local_34) >>
                                                                                ((byte)*(undefined4 *)(&DAT_140ae5214 + lVar5) & 0x1f)) * local_res18;
                local_50 = ((uint)(*(int *)(&DAT_140ae521c + lVar5) + local_30) >>
                                                                                ((byte)*(undefined4 *)(&DAT_140ae5220 + lVar5) & 0x1f)) * local_54;
                local_2c = iVar1;
                uVar2 = FUN_1402645d0(lVar4,&local_38,local_58,param_3,param_4,param_5);
                uVar3 = (ulonglong)uVar2;
                if (-1 < (int)uVar2) {
                    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                            (*(longlong **)(param_1 + 0x20),0,iVar1,lVar4,
                             param_4 & 0xffffffff00000000 | (ulonglong)local_res18,&local_48);
                    uVar3 = (ulonglong)uVar2;
                    if (-1 < (int)uVar2) {
                        if (local_68 != (longlong *)0x0) {
                            (**(code **)(*local_68 + 8))();
                        }
                        goto LAB_140371f6f;
                    }
                }
            }
        }
        if (local_68 != (longlong *)0x0) {
            (**(code **)(*local_68 + 8))();
        }
    }
    return uVar3;
}



undefined8 * FUN_140371f80(undefined8 *param_1,undefined8 *param_2)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b65a20;
    param_1[2] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if ((undefined8 *)param_1[2] != param_2) {
        if (param_2 != (undefined8 *)0x0) {
            (**(code **)*param_2)(param_2);
        }
        if ((longlong *)param_1[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[2] + 8))();
        }
        param_1[2] = param_2;
    }
    lVar3 = param_2[10];
    uVar2 = *(uint *)(param_2[9] + -4 + lVar3 * 4);
    FUN_140052360(param_2 + 9);
    if (lVar3 == 1) {
        if ((undefined8 *)param_2[0xb] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[0xb] = param_2[0xc];
        }
        if (param_2[0xc] != 0) {
            *(undefined8 *)(param_2[0xc] + 0x58) = param_2[0xb];
        }
        param_2[0xb] = 0;
        param_2[0xc] = 0;
    }
    *(uint *)(param_1 + 3) = uVar2;
    *(undefined (*) [16])(param_1 + 4) =
            CONCAT412((float)(uVar2 / *(uint *)((longlong)param_2 + 0x34)) *
                      *(float *)((longlong)param_2 + 0x3c) + *(float *)(param_2 + 8),
                      CONCAT48((float)(uVar2 % *(uint *)((longlong)param_2 + 0x34)) *
                               *(float *)((longlong)param_2 + 0x3c) + *(float *)(param_2 + 8),
                               CONCAT44(*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_2 + 7))));
    plVar4 = (longlong *)(*(longlong *)(param_1[2] + 0x10) + 0x358);
    if (param_1[6] == 0) {
        param_1[6] = plVar4;
        plVar1 = param_1 + 7;
        *plVar1 = *plVar4;
        *plVar4 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x30) = plVar1;
        }
    }
    return param_1;
}



undefined8 FUN_1403720e0(undefined8 param_1,ulonglong param_2)

{
    FUN_140372120();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140372120(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 local_res8 [2];

    lVar3 = param_1[2];
    *param_1 = &PTR_LAB_140b65a20;
    local_res8[0] = *(undefined4 *)(param_1 + 3);
    lVar4 = *(longlong *)(lVar3 + 0x50);
    FUN_140003460(lVar3 + 0x48,local_res8);
    if ((lVar4 == 0) &&
        (plVar2 = (longlong *)
                (*(longlong *)(lVar3 + 0x10) + ((longlong)*(int *)(lVar3 + 0x18) + 0x62) * 8),
                *(longlong *)(lVar3 + 0x58) == 0)) {
        *(longlong **)(lVar3 + 0x58) = plVar2;
        plVar1 = (longlong *)(lVar3 + 0x60);
        *plVar1 = *plVar2;
        *plVar2 = lVar3;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x58) = plVar1;
        }
    }
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 *)(param_1[7] + 0x30) = param_1[6];
    }
    param_1[6] = 0;
    param_1[7] = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_1403721f0(undefined8 *param_1)

{
    int *piVar1;
    longlong lVar2;

    *param_1 = &PTR_LAB_140b65a50;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    lVar2 = param_1[2];
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        FUN_14034d010(lVar2);
        FUN_14018b900(lVar2,0);
    }
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xb] = param_1[0xc];
    }
    if (param_1[0xc] != 0) {
        *(undefined8 *)(param_1[0xc] + 0x58) = param_1[0xb];
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[9] = param_1[10];
    }
    if (param_1[10] != 0) {
        *(undefined8 *)(param_1[10] + 0x20) = param_1[9];
    }
    param_1[9] = 0;
    param_1[10] = 0;
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 *)(param_1[8] + 0x10) = param_1[7];
    }
    param_1[8] = 0;
    param_1[7] = 0;
    return;
}



int FUN_1403722d0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    int iVar2;
    undefined8 uVar3;

    *(undefined4 *)(param_1 + 0x18) = param_2;
    switch(param_2) {
        case 0:
            iVar2 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x884,1,param_1 + 0x20);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
            return iVar1;
        case 1:
            iVar2 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,0x1800,0,1,param_1 + 0x20);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
            return iVar1;
        case 2:
            iVar2 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x1324,1,param_1 + 0x20);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
            return iVar1;
        case 3:
            uVar3 = 0;
            break;
        case 4:
            uVar3 = 1;
            break;
        case 5:
            uVar3 = 2;
            break;
        case 6:
            uVar3 = 3;
            break;
        case 7:
            uVar3 = 4;
            break;
        case 8:
            uVar3 = 5;
            break;
        default:
            return -0x7ff8ffa9;
    }
    iVar2 = FUN_140350990(*(undefined8 *)(param_1 + 0x10),uVar3,param_1 + 0x20);
    iVar1 = 0;
    if (iVar2 < 0) {
        iVar1 = iVar2;
    }
    return iVar1;
}



int FUN_140372450(longlong param_1)

{
    int *piVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar4 = iVar4 + -1;
    if (iVar4 != -1) {
        if (iVar4 != 0) {
            return iVar4;
        }
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 8) != 0) {
            FUN_140198370(param_1 + 0x28,param_1,*(longlong *)(param_1 + 0x10) + 0x308);
            plVar3 = (longlong *)
                    (*(longlong *)(param_1 + 0x10) + ((longlong)*(int *)(param_1 + 0x18) + 0x4d) * 8);
            if (*(longlong *)(param_1 + 0x58) != 0) {
                return 0;
            }
            *(longlong **)(param_1 + 0x58) = plVar3;
            plVar2 = (longlong *)(param_1 + 0x60);
            *plVar2 = *plVar3;
            *plVar3 = param_1;
            if (*plVar2 == 0) {
                return 0;
            }
            *(longlong **)(*plVar2 + 0x58) = plVar2;
            return 0;
        }
    }
    if (param_1 != 0) {
        FUN_1403721f0();
        FUN_14018b900(param_1,0);
    }
    return 0;
}



undefined8 FUN_1403724f0(int *param_1,longlong param_2,longlong *param_3)

{
    longlong **pplVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    float fVar5;

    if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
        return 0;
    }
    iVar2 = *param_1;
    plVar3 = *(longlong **)(param_1 + 2);
    pplVar1 = (longlong **)(param_1 + 2);
    if (iVar2 == 0) {
        if (plVar3 != (longlong *)0x0) {
            LAB_14037253b:
            plVar4 = *(longlong **)(param_1 + 4);
            if (plVar4 != (longlong *)0x0) {
                if (*(int *)(plVar4 + 4) == iVar2) goto LAB_14037255a;
                if (plVar4 != (longlong *)0x0) goto LAB_140372660;
            }
            if (iVar2 != 0) {
                LAB_140372660:
                if (plVar4 != plVar3) {
                    if (plVar3 != (longlong *)0x0) {
                        (**(code **)*plVar3)(plVar3);
                    }
                    if (*(longlong **)(param_1 + 4) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(param_1 + 4) + 8))();
                    }
                    *(longlong **)(param_1 + 4) = *pplVar1;
                }
                if (*pplVar1 != (longlong *)0x0) {
                    (**(code **)(**pplVar1 + 8))();
                    *pplVar1 = (longlong *)0x0;
                }
                param_1[6] = 0;
                if (*param_1 == 0) {
                    return 0;
                }
                FUN_1403543e0(param_2,*param_1,param_3,pplVar1);
                return 0;
            }
            LAB_14037255a:
            if (plVar3 != (longlong *)0x0) {
                (**(code **)*plVar3)(plVar3);
            }
            plVar4 = *(longlong **)(param_1 + 4);
            if (*pplVar1 != plVar4) {
                if (plVar4 != (longlong *)0x0) {
                    (**(code **)*plVar4)();
                }
                if (*pplVar1 != (longlong *)0x0) {
                    (**(code **)(**pplVar1 + 8))();
                }
                *pplVar1 = *(longlong **)(param_1 + 4);
            }
            if (*(longlong **)(param_1 + 4) != plVar3) {
                if (plVar3 != (longlong *)0x0) {
                    (**(code **)*plVar3)(plVar3);
                }
                if (*(longlong **)(param_1 + 4) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 4) + 8))();
                }
                *(longlong **)(param_1 + 4) = plVar3;
            }
            param_1[6] = (int)(1.0 - (float)param_1[6]);
            if (plVar3 == (longlong *)0x0) {
                return 0;
            }
            (**(code **)(*plVar3 + 8))(plVar3);
            return 0;
        }
    }
    else {
        if ((plVar3 == (longlong *)0x0) || (*(int *)(plVar3 + 4) != iVar2)) goto LAB_14037253b;
        if ((plVar3 != (longlong *)0x0) && ((longlong *)plVar3[5] != (longlong *)0x0)) {
            fVar5 = (float)param_1[7];
            if (fVar5 == 0.0) {
                fVar5 = (float)(**(code **)(*(longlong *)plVar3[5] + 0x30))();
            }
            goto LAB_140372622;
        }
    }
    fVar5 = (float)(**(code **)(*param_3 + 0x100))(param_3);
    LAB_140372622:
    fVar5 = fVar5 * *(float *)(param_2 + 0x37c) + (float)param_1[6];
    if (1.0 < fVar5) {
        fVar5 = 1.0;
    }
    param_1[6] = (int)fVar5;
    if ((fVar5 == 1.0) && (*(longlong **)(param_1 + 4) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_1 + 4) + 8))();
        *(undefined8 *)(param_1 + 4) = 0;
    }
    return 0;
}



ulonglong FUN_1403726d0(undefined4 param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                        undefined8 param_5,undefined8 param_6)

{
    longlong lVar1;
    longlong *plVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    undefined4 uVar4;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 uVar6;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar7 [16];

    lVar1 = *(longlong *)(param_3 + 0x10);
    auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (lVar1 != 0) {
        if (*(longlong *)(param_3 + 8) != 0) {
            uVar4 = 0x3f800000;
            uVar6 = 0;
            if (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x70))
                        (param_1,param_2,1.0 - *(float *)(param_3 + 0x18));
            }
            plVar2 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x28);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x70))(plVar2,param_4,param_5,param_6,auVar7);
            }
            return CONCAT44(uVar6,uVar4);
        }
        if (lVar1 != 0) {
            fVar5 = 1.0;
            if (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x70))(param_1,param_2,0x3f800000);
            }
            fVar3 = fVar5 - *(float *)(param_3 + 0x18);
            if (fVar5 <= fVar3) {
                fVar3 = fVar5;
            }
            fVar5 = 0.0;
            if (0.0 <= fVar3) {
                fVar5 = fVar3;
            }
            return (ulonglong)(uint)fVar5;
        }
    }
    if (*(longlong *)(param_3 + 8) != 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x28);
        fVar5 = 1.0;
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x70))(param_1,param_2,0x3f800000);
        }
        fVar3 = *(float *)(param_3 + 0x18);
        if (fVar5 <= *(float *)(param_3 + 0x18)) {
            fVar3 = fVar5;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar3) {
            fVar5 = fVar3;
        }
        return (ulonglong)(uint)fVar5;
    }
    return 0;
}



ulonglong FUN_1403727f0(undefined8 *param_1)

{
    uint uVar1;
    longlong lVar2;
    ulonglong *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong **ppuVar7;
    uint local_18 [2];
    undefined8 local_10;

    *param_1 = &PTR_LAB_140b65a60;
    uVar1 = *(uint *)(param_1 + 4);
    uVar5 = (ulonglong)uVar1;
    if (uVar1 != 0) {
        local_10 = param_1[3];
        lVar2 = param_1[2];
        local_18[0] = uVar1;
        uVar4 = (**(code **)(lVar2 + 0x798))(local_18);
        uVar5 = uVar4 / *(ulonglong *)(lVar2 + 0x788);
        uVar6 = uVar4 % *(ulonglong *)(lVar2 + 0x788);
        ppuVar7 = (ulonglong **)(*(longlong *)(lVar2 + 0x790) + uVar6 * 8);
        puVar3 = *(ulonglong **)(*(longlong *)(lVar2 + 0x790) + uVar6 * 8);
        while (puVar3 != (ulonglong *)0x0) {
            if ((uVar4 == **ppuVar7) &&
                (uVar5 = (**(code **)(lVar2 + 0x7a0))(local_18,*ppuVar7 + 2), (int)uVar5 != 0)) {
                puVar3 = *ppuVar7;
                *ppuVar7 = (ulonglong *)puVar3[1];
                uVar5 = FUN_14018b900(puVar3,0);
                *(longlong *)(lVar2 + 0x780) = *(longlong *)(lVar2 + 0x780) + -1;
                break;
            }
            ppuVar7 = (ulonglong **)(*ppuVar7 + 1);
            puVar3 = *ppuVar7;
        }
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        uVar5 = (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        uVar5 = (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = 0;
    }
    if ((longlong *)param_1[0x6a] != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001403728e2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar5 = (**(code **)(*(longlong *)param_1[0x6a] + 8))();
        return uVar5;
    }
    return uVar5;
}



ulonglong * FUN_1403728f0(ulonglong param_1,undefined4 param_2)

{
    ulonglong **ppuVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong *puVar6;
    longlong *plVar7;
    ulonglong *puVar8;
    undefined4 local_18;
    undefined4 uStack20;
    ulonglong local_10;

    local_10 = *(ulonglong *)(param_1 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = param_2;
    plVar7 = (longlong *)(lVar2 + 0x780);
    local_18 = param_2;
    if (*plVar7 == *(longlong *)(lVar2 + 0x788)) {
        FUN_1400290d0(plVar7);
    }
    uVar4 = (**(code **)(lVar2 + 0x798))(&local_18);
    ppuVar1 = (ulonglong **)
            (*(longlong *)(lVar2 + 0x790) + (uVar4 % *(ulonglong *)(lVar2 + 0x788)) * 8);
    puVar5 = (ulonglong *)FUN_14018b280(0x28);
    puVar8 = (ulonglong *)0x0;
    puVar6 = puVar8;
    if (puVar5 != (ulonglong *)0x0) {
        puVar6 = *ppuVar1;
        *puVar5 = uVar4;
        puVar5[1] = (ulonglong)puVar6;
        puVar5[2] = CONCAT44(uStack20,local_18);
        puVar5[4] = param_1;
        puVar5[3] = local_10;
        puVar6 = puVar5;
    }
    *ppuVar1 = puVar6;
    *plVar7 = *plVar7 + 1;
    uVar3 = FUN_1403729c0(param_1);
    if ((int)uVar3 < 0) {
        puVar8 = (ulonglong *)(ulonglong)uVar3;
    }
    return puVar8;
}



undefined8 FUN_1403729c0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;

    lVar2 = FUN_140350b90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0x20));
    if (lVar2 != 0) {
        lVar4 = 0;
        if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
            *(undefined8 *)(param_1 + 0x30) = 0;
        }
        if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
            *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar1 = *(ulonglong *)(lVar2 + 8);
        if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
            lVar4 = DAT_140c3fe68 + uVar1;
        }
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),lVar4,param_1 + 0x28);
        if (-1 < (int)uVar3) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
            FUN_1401b6bf0();
            uVar3 = 0;
            *(int *)(param_1 + 0x38) = *(int *)(*(longlong *)(param_1 + 0x10) + 0x350) + -1;
        }
        return uVar3;
    }
    return 0x80004005;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140372af0(longlong param_1)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;
    int iVar5;
    longlong lVar6;
    undefined auStack280 [32];
    undefined4 *local_f8;
    undefined4 local_f0;
    undefined8 local_e8;
    ulonglong local_e0;
    undefined4 local_d8;
    longlong *local_d0;
    undefined local_c8 [64];
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    longlong local_78 [10];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    plVar2 = *(longlong **)(param_1 + 0x28);
    local_88 = 0;
    if ((plVar2 == (longlong *)0x0) ||
        (iVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_88), iVar5 != 0)) {
        plVar2 = (longlong *)(param_1 + 0x350);
        if (*plVar2 == 0) {
            uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa8);
            local_d8 = 0;
            local_e0 = local_e0 & 0xffffffff00000000;
            local_e8 = CONCAT44(local_e8._4_4_,1);
            local_f0 = 5;
            local_f8 = (undefined4 *)((ulonglong)local_f8 & 0xffffffff00000000);
            local_d0 = plVar2;
            iVar5 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,uVar1,uVar1,1);
            if (iVar5 < 0) {
                FUN_1402c8730(param_1 + 0x40,*(longlong *)(param_1 + 0x10) + 0xdb0);
                goto LAB_140372d40;
            }
            *(int *)(param_1 + 0x38) = *(int *)(*(longlong *)(param_1 + 0x10) + 0x350) + -1;
        }
        lVar6 = *(longlong *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0x38) != *(int *)(lVar6 + 0x350)) {
            *(int *)(param_1 + 0x38) = *(int *)(lVar6 + 0x350);
            plVar3 = *(longlong **)(lVar6 + 0x128);
            if (*(longlong **)(param_1 + 0x18) == plVar3) {
                local_80 = FUN_1403726d0(lVar6 + 0xa80,2);
                plVar4 = *(longlong **)(param_1 + 0x28);
                if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x70))(plVar4,1);
                }
                lVar6 = *(longlong *)(param_1 + 0x10);
                local_d8 = 0;
                local_e0 = lVar6 + 0x390;
                local_88 = 0;
                local_84 = 0x3f800000;
                local_f0 = *(undefined4 *)(lVar6 + 0x648);
                local_e8 = lVar6 + 0x774;
                local_f8 = &local_88;
                (**(code **)(*plVar3 + 0x38))
                        (plVar3,*(undefined4 *)(lVar6 + 0x370),*(undefined4 *)(lVar6 + 0x380),&local_88);
            }
            FUN_140367b30(*(undefined8 *)(param_1 + 0x10),plVar3,param_1 + 0x40,0);
            lVar6 = *(longlong *)(param_1 + 0x10) + 0x3c0;
            *(undefined4 *)(param_1 + 0x2f4) = 0x3f800000;
            local_78[0] = lVar6;
            FUN_1401afc20(local_78,local_c8);
            FUN_140262c40(param_1 + 0x40,lVar6,local_c8);
            (**(code **)(*plVar3 + 0x50))
                    (plVar3,*(longlong *)(param_1 + 0x10) + 0x500,*(longlong *)(param_1 + 0x10) + 0x3c0,
                     *plVar2);
            *(longlong *)(param_1 + 0x340) = *plVar2;
        }
    }
    else {
        FUN_1402c8730(param_1 + 0x40,*(longlong *)(param_1 + 0x10) + 0xdb0);
    }
    LAB_140372d40:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack280);
    return;
}



int FUN_140372d70(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1403727f0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



ulonglong * FUN_140372db0(ulonglong param_1,undefined4 param_2)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    ulonglong *puVar9;

    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = param_2;
    plVar8 = (longlong *)(lVar3 + 0x7a8);
    if (*plVar8 == *(longlong *)(lVar3 + 0x7b0)) {
        FUN_1400290d0(plVar8);
    }
    uVar5 = (**(code **)(lVar3 + 0x7c0))(param_1 + 0x18);
    ppuVar1 = (ulonglong **)
            (*(longlong *)(lVar3 + 0x7b8) + (uVar5 % *(ulonglong *)(lVar3 + 0x7b0)) * 8);
    puVar6 = (ulonglong *)FUN_14018b280(0x20);
    puVar9 = (ulonglong *)0x0;
    puVar7 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
        puVar7 = *ppuVar1;
        *puVar6 = uVar5;
        puVar6[1] = (ulonglong)puVar7;
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        puVar6[3] = param_1;
        *(undefined4 *)(puVar6 + 2) = uVar2;
        puVar7 = puVar6;
    }
    *ppuVar1 = puVar7;
    *plVar8 = *plVar8 + 1;
    uVar4 = FUN_140372e60(param_1);
    if ((int)uVar4 < 0) {
        puVar9 = (ulonglong *)(ulonglong)uVar4;
    }
    return puVar9;
}



undefined8 FUN_140372e60(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bc;
    undefined uVar6;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Bf;
    undefined uVar7;
    undefined extraout_XMM0_Bg;
    undefined extraout_XMM0_Bh;
    undefined8 uVar8;
    undefined auVar10 [16];
    undefined auVar9 [12];

    lVar5 = FUN_140350c30(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0x18));
    if (lVar5 == 0) {
        return 0x80004005;
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    uVar4 = (uint)(uint3)(CONCAT12(extraout_XMM0_Bd,CONCAT11(extraout_XMM0_Bc,extraout_XMM0_Bb)) ^
                          CONCAT12(extraout_XMM0_Bd,CONCAT11(extraout_XMM0_Bc,extraout_XMM0_Bb)));
    iVar2 = uVar4 << 8;
    uVar6 = (undefined)((uint)iVar2 >> 0x10);
    uVar3 = CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be))) ^
            CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be)));
    uVar7 = (undefined)(uVar3 >> 8);
    *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    uVar8 = CONCAT44(uVar1,uVar1);
    auVar9 = CONCAT48(uVar1,uVar8);
    auVar10 = CONCAT115(CONCAT101(SUB1610((ZEXT916(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(
                                                                                                     CONCAT511(SUB165(CONCAT412(SUB164(CONCAT313(SUB163
                                                                                                                                                         (CONCAT214(SUB162(CONCAT115((char)(uVar3 >> 0x18),
                                                                                                                                                                                     CONCAT114((char)((uint
                                                                                                                                                                                               )uVar1 >> 0x18),SUB1614(CONCAT412(uVar1,auVar9),0)
                                                                                                                                                                                     )) >> 0x70,0),
                                                                                                                                                                    CONCAT113((char)(uVar3 >> 0x10),
                                                                                                                                                                              SUB1613(CONCAT412(uVar1,auVar9),0))) >>
                                                                                                                                                                                                                   0x68,0),CONCAT112((char)((uint)uVar1 >> 0x10),
                                                                                                                                                                                                                                     auVar9)) >> 0x60,0),
                                                                                                                                CONCAT111(uVar7,SUB1211(auVar9,0))) >> 0x58,0),
                                                                                                               CONCAT110((char)((uint)uVar1 >> 8),
                                                                                                                         SUB1210(auVar9,0))) >> 0x50,0),
                                                                                             CONCAT19((char)uVar3,SUB129(auVar9,0))) >> 0x48,0)
                                                                    ,CONCAT18((char)uVar1,uVar8)) >> 0x40,0),
                                                            (char)((uint)iVar2 >> 0x18))) << 0x38) >> 0x30,0),
                                  uVar6),((uint5)uVar8 >> 0x10) << 0x20);
    *(float *)(param_1 + 0x28) =
            (float)CONCAT13(uVar7,CONCAT12((char)uVar3,SUB162(auVar10 >> 0x20,0))) * 0.003921569;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(float *)(param_1 + 0x24) =
            (float)CONCAT13((char)(((ulonglong)(ushort)((uint)iVar2 >> 0x10) << 0x30) >> 0x38),
                            CONCAT12(uVar6,SUB162(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar10 >> 0x20,0),
                                                                              uVar4 << 0x18) >> 0x18,0),
                                                            ((uint3)uVar1 >> 8) << 0x10) >> 0x10,0))) *
            0.003921569;
    return 0;
}



int FUN_140372ee0(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *)0x0) {
            *param_1 = &PTR_LAB_140b65a70;
            if (*(int *)(param_1 + 3) != 0) {
                FUN_1400b6120(param_1[2] + 0x7a8,param_1 + 3);
            }
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



ulonglong * FUN_140372f30(ulonglong param_1,undefined4 param_2)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    ulonglong *puVar9;

    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc) = param_2;
    plVar8 = (longlong *)(lVar3 + 2000);
    if (*plVar8 == *(longlong *)(lVar3 + 0x7d8)) {
        FUN_1400290d0(plVar8);
    }
    uVar5 = (**(code **)(lVar3 + 0x7e8))(param_1 + 0xc);
    ppuVar1 = (ulonglong **)
            (*(longlong *)(lVar3 + 0x7e0) + (uVar5 % *(ulonglong *)(lVar3 + 0x7d8)) * 8);
    puVar6 = (ulonglong *)FUN_14018b280(0x20);
    puVar9 = (ulonglong *)0x0;
    puVar7 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
        puVar7 = *ppuVar1;
        *puVar6 = uVar5;
        puVar6[1] = (ulonglong)puVar7;
        uVar2 = *(undefined4 *)(param_1 + 0xc);
        puVar6[3] = param_1;
        *(undefined4 *)(puVar6 + 2) = uVar2;
        puVar7 = puVar6;
    }
    *ppuVar1 = puVar7;
    *plVar8 = *plVar8 + 1;
    uVar4 = FUN_140372fe0(param_1);
    if ((int)uVar4 < 0) {
        puVar9 = (ulonglong *)(ulonglong)uVar4;
    }
    return puVar9;
}



// WARNING: Removing unreachable block (ram,0x000140373059)

undefined8 FUN_140372fe0(longlong param_1)

{
    undefined4 uVar1;
    undefined2 uVar2;
    undefined2 uVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined auVar9 [16];
    int iVar12;
    float fVar13;
    float fVar14;
    undefined in_XMM9_Ba;
    undefined in_XMM9_Bb;
    undefined uVar15;
    undefined in_XMM9_Bc;
    undefined uVar16;
    undefined in_XMM9_Bd;
    undefined uVar17;
    undefined in_XMM9_Be;
    undefined in_XMM9_Bf;
    undefined uVar18;
    undefined in_XMM9_Bg;
    undefined uVar19;
    undefined in_XMM9_Bh;
    undefined uVar20;
    undefined auVar8 [12];
    undefined auVar10 [16];
    undefined auVar11 [16];

    lVar6 = FUN_140350cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0xc));
    if (lVar6 != 0) {
        uVar1 = *(undefined4 *)(lVar6 + 0x58);
        uVar7 = CONCAT44(uVar1,uVar1);
        auVar8 = CONCAT48(uVar1,uVar7);
        uVar4 = CONCAT13(in_XMM9_Bd,CONCAT12(in_XMM9_Bc,CONCAT11(in_XMM9_Bb,in_XMM9_Ba))) ^
                CONCAT13(in_XMM9_Bd,CONCAT12(in_XMM9_Bc,CONCAT11(in_XMM9_Bb,in_XMM9_Ba)));
        uVar15 = (undefined)(uVar4 >> 8);
        uVar16 = (undefined)(uVar4 >> 0x10);
        uVar17 = (undefined)(uVar4 >> 0x18);
        uVar5 = CONCAT13(in_XMM9_Bh,CONCAT12(in_XMM9_Bg,CONCAT11(in_XMM9_Bf,in_XMM9_Be))) ^
                CONCAT13(in_XMM9_Bh,CONCAT12(in_XMM9_Bg,CONCAT11(in_XMM9_Bf,in_XMM9_Be)));
        uVar18 = (undefined)(uVar5 >> 8);
        uVar19 = (undefined)(uVar5 >> 0x10);
        uVar20 = (undefined)(uVar5 >> 0x18);
        auVar11 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar20,CONCAT114((char)((uint)uVar1 >> 0x18),
                                                                                                                                                SUB1614(CONCAT412(uVar1,auVar8),
                                                                                                                                                        0))) >> 0x70,0),
                                                                                                               CONCAT113(uVar19,SUB1613(CONCAT412(uVar1,auVar8),0
                                                                                                               ))) >> 0x68,0),
                                                                                              CONCAT112((char)((uint)uVar1 >> 0x10),auVar8)) >>
                                                                                                                                             0x60,0),CONCAT111(uVar18,SUB1211(auVar8,0))) >>
                                                                                                                                                                                          0x58,0),CONCAT110((char)((uint)uVar1 >> 8),
                                                                                                                                                                                                            SUB1210(auVar8,0))) >> 0x50,0),
                                                                     CONCAT19((char)uVar5,SUB129(auVar8,0))) >> 0x48,0)
                                   ,CONCAT18((char)uVar1,uVar7)) >> 0x40,0),uVar17),
                           ((uint7)uVar7 >> 0x18) << 0x30);
        auVar10 = CONCAT115(CONCAT101(SUB1610(auVar11 >> 0x30,0),uVar16),((uint5)uVar7 >> 0x10) << 0x20)
                ;
        auVar9 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar10 >> 0x20,0),uVar15),
                                             ((uint3)uVar1 >> 8) << 0x10) >> 0x10,0),
                           (ushort)uVar1 & 0xff | (ushort)(byte)uVar4 << 8);
        uVar3 = (undefined2)(uVar5 >> 0x10);
        iVar12 = SUB164(CONCAT214(uVar3,CONCAT212(SUB162(auVar11 >> 0x30,0),SUB1612(auVar9,0))) >> 0x60,
                        0);
        auVar10 = CONCAT610(SUB166(CONCAT412(iVar12,CONCAT210((short)uVar5,SUB1610(auVar9,0))) >> 0x50,0
        ),CONCAT28(SUB162(auVar10 >> 0x20,0),SUB168(auVar9,0)));
        uVar2 = (undefined2)(uVar4 >> 0x10);
        *(undefined (*) [16])(param_1 + 0x30) =
                CONCAT412((float)iVar12 * 0.003921569 * 1.0,
                          CONCAT48((float)(SUB164(auVar9,0) & 0xffff | uVar4 << 0x10) * 0.003921569 * 2.0,
                                   CONCAT44((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar10 >> 0x40,0),
                                                                             uVar2),
                                                                    (SUB166(auVar9,0) >> 0x10) << 0x20) >>
                                                                                                        0x20,0) * 0.003921569 * 2.0,
                                            (float)SUB164(auVar10 >> 0x40,0) * 0.003921569 * 2.0)));
        fVar14 = *(float *)(lVar6 + 0x10);
        if (fVar14 <= 0.0) {
            fVar14 = 0.0;
        }
        *(float *)(param_1 + 0x58) = fVar14;
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar6 + 0x14);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar6 + 0x18);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar6 + 0x1c);
        fVar13 = 1.0 / *(float *)(lVar6 + 0x20);
        *(float *)(param_1 + 0x68) = fVar13;
        fVar14 = fVar13 * *(float *)(lVar6 + 0x5c) * 0.001;
        *(float *)(param_1 + 0x40) = fVar14;
        fVar14 = 1.0 / (float)((uint)fVar14 & 0x7fffffff);
        fVar13 = *(float *)(lVar6 + 0x60) * fVar13 * 0.001;
        if (fVar14 <= 1.0) {
            fVar14 = 1.0;
        }
        *(float *)(param_1 + 0x44) = fVar13;
        *(int *)(param_1 + 0x50) = (int)fVar14;
        fVar14 = 1.0 / (float)((uint)fVar13 & 0x7fffffff);
        if (fVar14 <= 1.0) {
            fVar14 = 1.0;
        }
        *(int *)(param_1 + 0x54) = (int)fVar14;
        uVar1 = *(undefined4 *)(lVar6 + 0x38);
        uVar7 = CONCAT44(uVar1,uVar1);
        auVar8 = CONCAT48(uVar1,uVar7);
        auVar11 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar20,CONCAT114((char)((uint)uVar1 >> 0x18),
                                                                                                                                                SUB1614(CONCAT412(uVar1,auVar8),
                                                                                                                                                        0))) >> 0x70,0),
                                                                                                               CONCAT113(uVar19,SUB1613(CONCAT412(uVar1,auVar8),0
                                                                                                               ))) >> 0x68,0),
                                                                                              CONCAT112((char)((uint)uVar1 >> 0x10),auVar8)) >>
                                                                                                                                             0x60,0),CONCAT111(uVar18,SUB1211(auVar8,0))) >>
                                                                                                                                                                                          0x58,0),CONCAT110((char)((uint)uVar1 >> 8),
                                                                                                                                                                                                            SUB1210(auVar8,0))) >> 0x50,0),
                                                                     CONCAT19((char)uVar5,SUB129(auVar8,0))) >> 0x48,0)
                                   ,CONCAT18((char)uVar1,uVar7)) >> 0x40,0),uVar17),
                           ((uint7)uVar7 >> 0x18) << 0x30);
        auVar10 = CONCAT115(CONCAT101(SUB1610(auVar11 >> 0x30,0),uVar16),((uint5)uVar7 >> 0x10) << 0x20)
                ;
        auVar9 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar10 >> 0x20,0),uVar15),
                                             ((uint3)uVar1 >> 8) << 0x10) >> 0x10,0),
                           (ushort)uVar1 & 0xff | (ushort)(byte)uVar4 << 8);
        iVar12 = SUB164(CONCAT214(uVar3,CONCAT212(SUB162(auVar11 >> 0x30,0),SUB1612(auVar9,0))) >> 0x60,
                        0);
        auVar10 = CONCAT610(SUB166(CONCAT412(iVar12,CONCAT210((short)uVar5,SUB1610(auVar9,0))) >> 0x50,0
        ),CONCAT28(SUB162(auVar10 >> 0x20,0),SUB168(auVar9,0)));
        *(undefined (*) [16])(param_1 + 0x20) =
                CONCAT412((float)iVar12 * 0.003921569,
                          CONCAT48((float)(SUB164(auVar9,0) & 0xffff | uVar4 << 0x10) * 0.003921569,
                                   CONCAT44((float)SUB164(CONCAT106(CONCAT82(SUB168(auVar10 >> 0x40,0),
                                                                             uVar2),
                                                                    (SUB166(auVar9,0) >> 0x10) << 0x20) >>
                                                                                                        0x20,0) * 0.003921569,
                                            (float)SUB164(auVar10 >> 0x40,0) * 0.003921569)));
        *(float *)(param_1 + 0x6c) =
                *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar6 + 0x3c);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar6 + 0x40);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar6 + 0x44);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar6 + 0x48);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar6 + 0x4c);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar6 + 0x50);
        return 0;
    }
    return 0x80004005;
}



ulonglong FUN_140373190(longlong param_1,longlong **param_2,longlong **param_3)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong *local_res8;
    longlong *local_res20;

    lVar3 = FUN_140350cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0xc));
    if (lVar3 == 0) {
        return 0x80004005;
    }
    uVar1 = *(undefined4 *)
            (&DAT_140b65808 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) * 4);
    uVar6 = 0;
    local_res8 = (longlong *)0x0;
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xe8) & 1) != 0) {
        uVar5 = *(ulonglong *)(lVar3 + 0x28);
        uVar4 = uVar6;
        if (uVar5 != 0) {
            if (DAT_140c3fe70 < uVar5) {
                uVar4 = 0;
            }
            else {
                uVar4 = DAT_140c3fe68 + uVar5;
            }
        }
        uVar2 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,uVar4,uVar1,0x15,0,0,&local_res8);
        uVar5 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) goto LAB_14037333f;
    }
    local_res20 = (longlong *)0x0;
    if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xe8) & 1) == 0) ||
        (*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < 0)) {
        LAB_1403732f2:
        *param_2 = local_res8;
        if (local_res8 != (longlong *)0x0) {
            (**(code **)*local_res8)();
        }
        *param_3 = local_res20;
        uVar5 = uVar6;
        if (local_res20 != (longlong *)0x0) {
            (**(code **)*local_res20)(local_res20);
        }
    }
    else {
        uVar5 = *(ulonglong *)(lVar3 + 0x30);
        uVar4 = uVar6;
        if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
            uVar4 = DAT_140c3fe68 + uVar5;
        }
        uVar2 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,uVar4,uVar1,0x15,0,0,&local_res20);
        uVar5 = (ulonglong)uVar2;
        if (-1 < (int)uVar2) goto LAB_1403732f2;
    }
    if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 8))(local_res20);
    }
    LAB_14037333f:
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return uVar5;
}



int FUN_140373370(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *)0x0) {
            *param_1 = &PTR_LAB_140b65a80;
            if (*(int *)((longlong)param_1 + 0xc) != 0) {
                FUN_1400b6120(param_1[2] + 2000,(longlong)param_1 + 0xc);
            }
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_1403733c0(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 local_18 [4];

    *param_1 = &PTR_LAB_140b65aa0;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[9] + 8))();
        param_1[9] = 0;
    }
    FUN_14018b900(param_1[8],0);
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],local_18);
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    lVar1 = param_1[0x27];
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x00014037345d. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



undefined8
FUN_140373470(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined8 param_9)

{
    undefined8 uVar1;
    undefined4 in_XMM3_Da;

    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x38) = param_8;
    *(undefined4 *)(param_1 + 0x2c) = param_5;
    *(undefined4 *)(param_1 + 0x28) = in_XMM3_Da;
    *(undefined4 *)(param_1 + 0x34) = param_7;
    *(undefined4 *)(param_1 + 0x30) = param_6;
    uVar1 = FUN_14018e9c0(param_9);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    uVar1 = FUN_1401b6de0();
    if (-1 < (int)uVar1) {
        FUN_1401b6bf0();
        uVar1 = 0;
    }
    return uVar1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140373540(longlong param_1)

{
    float fVar1;
    undefined uVar2;
    byte bVar3;
    ushort uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined **ppuVar10;
    int iVar11;
    undefined **ppuVar12;
    undefined8 uVar13;
    longlong lVar14;
    longlong lVar15;
    float *pfVar16;
    ulonglong uVar17;
    undefined *puVar18;
    float **ppfVar19;
    short *psVar20;
    ushort *puVar21;
    ulonglong uVar22;
    longlong lVar23;
    float *pfVar24;
    longlong lVar25;
    uint uVar26;
    ulonglong uVar27;
    uint extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    uint extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    uint extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    undefined2 uVar28;
    float fVar29;
    float fVar30;
    undefined auVar31 [16];
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    uint uVar40;
    undefined auStack2712 [32];
    undefined8 *local_a78;
    undefined ***local_a70;
    undefined4 local_a68;
    undefined4 local_a64;
    undefined **local_a58;
    longlong local_a50;
    LPVOID local_a48;
    undefined8 local_a38;
    undefined **local_a30;
    wchar_t *pwStack2600;
    float *local_a20;
    int iStack2584;
    undefined4 uStack2580;
    undefined **local_a08;
    wchar_t *local_a00;
    LPVOID local_9f8;
    undefined8 local_9f0;
    undefined8 local_9e8;
    undefined8 uStack2528;
    LPVOID local_9d8;
    undefined8 local_9d0;
    undefined **local_9c8;
    longlong local_9c0;
    LPVOID local_9b8;
    longlong local_9a8;
    float *local_998 [256];
    undefined8 local_198;
    undefined8 uStack400;
    undefined8 local_188;
    undefined8 uStack384;
    undefined8 local_178;
    undefined8 uStack368;
    float local_168;
    float fStack356;
    float fStack352;
    undefined8 local_148;
    undefined8 local_140;
    float *local_138;
    undefined8 local_130;
    undefined (*local_128) [16];
    undefined (*local_120) [16];
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack2712;
    iVar11 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10),0);
    uVar17 = 0;
    if (iVar11 < 0) {
        if (iVar11 != -0x5fdcfffe) {
            local_a50 = 0;
            local_a58 = &PTR_LAB_140b5e648;
            local_a48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a58);
            local_9c8 = local_a58;
            local_9c0 = local_a50;
            local_a30 = &PTR_LAB_140b5e648;
            pwStack2600 = L"Result";
            local_9b8 = local_a48;
            local_a20 = (float *)TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a30);
            local_9f0 = *(undefined8 *)(param_1 + 0x40);
            local_a08 = &PTR_LAB_140b5e648;
            local_188 = local_a20;
            uStack384 = CONCAT44(uStack2580,iVar11);
            local_a30 = &PTR_LAB_140b5e640;
            local_a00 = L"FileName";
            local_198 = &PTR_LAB_140b5e640;
            uStack400 = (float *)pwStack2600;
            iStack2584 = iVar11;
            local_9f8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a08);
            puVar18 = &DAT_140c8a67c;
            local_a38 = 0x141def7e0;
            goto LAB_1403737d5;
        }
    }
    else {
        ppuVar12 = (undefined **)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
        local_a58 = ppuVar12;
        local_a50 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
        local_a50 = local_a50 + (longlong)ppuVar12;
        local_a48 = (LPVOID)0x0;
        iVar11 = FUN_14030cac0(&local_a58,ppuVar12 + 0xc6);
        if (-1 < iVar11) {
            *(undefined ***)(param_1 + 0x50) = ppuVar12;
            FUN_140327210(param_1 + 0x58,ppuVar12[0x4b] + 0x18);
            auVar31 = ZEXT816(0x70) * ZEXT416(*(uint *)(*(longlong *)(param_1 + 0x50) + 0x180));
            uVar13 = SUB168(auVar31,0);
            if (SUB168(auVar31 >> 0x40,0) != 0) {
                uVar13 = 0xffffffffffffffff;
            }
            lVar14 = FUN_14018b280(uVar13,8);
            auVar31 = ZEXT816(0x40) * ZEXT416(*(uint *)(*(longlong *)(param_1 + 0x50) + 0x180));
            uVar13 = SUB168(auVar31,0);
            if (SUB168(auVar31 >> 0x40,0) != 0) {
                uVar13 = 0xffffffffffffffff;
            }
            lVar15 = FUN_14018b280(uVar13);
            local_9a8 = lVar15;
            if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x180) != 0) {
                fVar39 = 1e-05;
                uVar40 = 0x7fffffff;
                uVar22 = uVar17;
                do {
                    lVar25 = uVar22 * 0x160 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x188);
                    pfVar24 = (float *)(uVar22 * 0x70 + lVar14);
                    if (*(int *)(lVar25 + 0x10) == 0) {
                        local_9e8._0_4_ = 1.0;
                        local_9e8._4_4_ = 1.0;
                        uStack2528._0_4_ = 1.0;
                        uStack2528._4_4_ = 1.0;
                    }
                    else {
                        FUN_1401adb90(&local_9e8,*(undefined8 *)(lVar25 + 0x20));
                    }
                    *pfVar24 = (float)local_9e8;
                    pfVar24[1] = local_9e8._4_4_;
                    pfVar24[2] = (float)uStack2528;
                    pfVar24[3] = uStack2528._4_4_;
                    if (*(int *)(lVar25 + 0x40) != 0) {
                        uVar13 = *(undefined8 *)(lVar25 + 0x50);
                        FUN_1401c9770(uVar13);
                        if (fVar39 < (float)(extraout_XMM0_Da & uVar40)) {
                            FUN_1401c9770(uVar13);
                            *pfVar24 = *pfVar24 / extraout_XMM0_Da_00;
                        }
                        lVar23 = *(longlong *)(lVar25 + 0x50);
                        FUN_1401c9770(lVar23 + 2);
                        if (fVar39 < (float)(extraout_XMM0_Da_01 & uVar40)) {
                            FUN_1401c9770(lVar23 + 2);
                            pfVar24[1] = pfVar24[1] / extraout_XMM0_Da_02;
                        }
                        lVar23 = *(longlong *)(lVar25 + 0x50) + 4;
                        FUN_1401c9770(lVar23);
                        if (fVar39 < (float)(extraout_XMM0_Da_03 & uVar40)) {
                            FUN_1401c9770(lVar23);
                            pfVar24[2] = pfVar24[2] / extraout_XMM0_Da_04;
                        }
                    }
                    fVar32 = fRam0000000140c7845c;
                    fVar34 = fRam0000000140c78458;
                    fVar33 = fRam0000000140c78454;
                    local_178 = (undefined (*) [16])(pfVar24 + 4);
                    if (*(int *)(lVar25 + 0x70) == 0) {
                        *(float *)*local_178 = _DAT_140c78450;
                        pfVar24[5] = fVar33;
                        pfVar24[6] = fVar34;
                        pfVar24[7] = fVar32;
                    }
                    else {
                        uVar27 = **(ulonglong **)(lVar25 + 0x80);
                        uVar28 = SUB122(ZEXT812(uVar27) >> 0x20,0);
                        iVar11 = SUB164(CONCAT214(SUB162(ZEXT816(uVar27) >> 0x30,0),
                                                  CONCAT212(SUB142(ZEXT814(uVar27) >> 0x30,0),ZEXT812(uVar27)))
                                                >> 0x60,0);
                        auVar31 = CONCAT610(SUB166(CONCAT412(iVar11,CONCAT210(uVar28,(unkuint10)uVar27)) >> 0x50
                                ,0),CONCAT28(uVar28,uVar27));
                        *local_178 = CONCAT412((float)(iVar11 >> 0x10) * 6.103516e-05,
                                               CONCAT48((float)(SUB164(auVar31 >> 0x40,0) >> 0x10) *
                                                        6.103516e-05,
                                                        CONCAT44((float)(SUB164(CONCAT106(SUB1610(CONCAT88(
                                                                         SUB168(auVar31 >> 0x40,0),(uVar27 >> 0x10) << 0x30
                                                                 ) >> 0x30,0),((uint6)uVar27 >> 0x10) << 0x20) >>
                                                                                                               0x20,0) >> 0x10) * 6.103516e-05,
                                                                 (float)((int)((uint)uVar27 & 0xffff |
                                                                               (uint)uVar27 << 0x10) >> 0x10) *
                                                                 6.103516e-05)));
                    }
                    uStack368 = (undefined (*) [16])(pfVar24 + 8);
                    if (*(int *)(lVar25 + 0xa0) == 0) {
                        *(float *)*uStack368 = 0.0;
                        pfVar24[9] = 0.0;
                        pfVar24[10] = 0.0;
                        pfVar24[0xb] = 0.0;
                    }
                    else {
                        *uStack368 = ZEXT1216(**(undefined (**) [12])(lVar25 + 0xb0));
                    }
                    if (*(ushort *)(lVar25 + 4) != 0xffff) {
                        pfVar16 = (float *)((ulonglong)*(ushort *)(lVar25 + 4) * 0x70 + lVar14);
                        fVar33 = pfVar16[1];
                        fVar34 = pfVar16[2];
                        fVar32 = pfVar16[3];
                        *pfVar24 = *pfVar16 * *pfVar24;
                        pfVar24[1] = fVar33 * pfVar24[1];
                        pfVar24[2] = fVar34 * pfVar24[2];
                        pfVar24[3] = fVar32 * pfVar24[3];
                        fVar33 = pfVar24[7];
                        fVar34 = *(float *)*local_178;
                        fVar32 = pfVar16[4];
                        fVar29 = pfVar16[7];
                        fVar36 = pfVar24[6];
                        fVar37 = pfVar16[5];
                        fVar35 = pfVar24[5];
                        fVar1 = pfVar16[6];
                        fVar38 = (fVar32 * fVar33 + fVar34 * fVar29 + fVar36 * fVar37) - fVar35 * fVar1;
                        fVar30 = ((fVar35 * fVar32 + fVar36 * fVar29) - fVar37 * fVar34) + fVar1 * fVar33;
                        *local_178 = CONCAT88(SUB168(CONCAT412(((fVar33 * fVar29 - fVar32 * fVar34) -
                                                                fVar35 * fVar37) - fVar1 * fVar36,
                                                               CONCAT48(fVar30,CONCAT44(fVar30,fVar38))) >> 0x40
                                                      ,0),
                                              CONCAT44((fVar35 * fVar29 - fVar36 * fVar32) + fVar37 * fVar33 +
                                                       fVar1 * fVar34,fVar38));
                        fVar33 = *(float *)*uStack368;
                        fVar34 = pfVar24[9];
                        fVar32 = pfVar24[10];
                        *uStack368 = CONCAT412(fVar34 * pfVar16[0x13] + fVar33 * pfVar16[0xf] +
                                               fVar32 * pfVar16[0x17] + pfVar16[0x1b],
                                               CONCAT48(fVar34 * pfVar16[0x12] + fVar33 * pfVar16[0xe] +
                                                        fVar32 * pfVar16[0x16] + pfVar16[0x1a],
                                                        CONCAT44(fVar34 * pfVar16[0x11] + fVar33 * pfVar16[0xd]
                                                                 + fVar32 * pfVar16[0x15] + pfVar16[0x19],
                                                                 fVar34 * pfVar16[0x10] + fVar33 * pfVar16[0xc]
                                                                 + fVar32 * pfVar16[0x14] + pfVar16[0x18])));
                    }
                    local_198 = (undefined **)0x0;
                    local_148 = 0;
                    uStack400 = (float *)0x0;
                    uStack384 = 0;
                    pfVar16 = pfVar24 + 0xc;
                    local_140 = 0;
                    local_130 = 0;
                    local_188 = pfVar24;
                    local_138 = pfVar24;
                    local_128 = local_178;
                    local_120 = uStack368;
                    FUN_1401aff00(&local_148);
                    local_a30 = (undefined **)(lVar25 + 0x110);
                    pwStack2600 = (wchar_t *)pfVar16;
                    local_198 = local_a30;
                    uStack400 = pfVar16;
                    FUN_1401afb10(&local_198);
                    uVar26 = (int)uVar22 + 1;
                    uVar22 = (ulonglong)uVar26;
                } while (uVar26 < *(uint *)(*(longlong *)(param_1 + 0x50) + 0x180));
            }
            FUN_14018b900(lVar14);
            lVar14 = *(longlong *)(param_1 + 0x50);
            if (*(uint *)(lVar14 + 0x1b0) != 0) {
                puVar21 = *(ushort **)(lVar14 + 0x1b8);
                uVar22 = (ulonglong)*(uint *)(lVar14 + 0x1b0);
                ppfVar19 = local_998;
                do {
                    uVar4 = *puVar21;
                    puVar21 = puVar21 + 1;
                    *ppfVar19 = (float *)((ulonglong)uVar4 * 0x40 + lVar15);
                    uVar22 = uVar22 - 1;
                    ppfVar19 = ppfVar19 + 1;
                } while (uVar22 != 0);
            }
            ppuVar10 = *(undefined ***)(lVar14 + 600);
            ppuVar12 = (undefined **)(param_1 + 0x138);
            local_a30 = ppuVar12;
            local_9e8 = ppuVar10;
            FUN_140374d60(ppuVar12);
            local_a38 = (ulonglong)local_a38._4_4_ << 0x20;
            if (*(int *)(ppuVar10 + 3) != 0) {
                uVar22 = uVar17;
                uVar27 = uVar17;
                do {
                    pfVar24 = (float *)(*ppuVar12 + uVar17 * 0x4c);
                    lVar14 = *(longlong *)(param_1 + 0xb0) * uVar17;
                    if (*(int *)(param_1 + 0x108) == 1) {
                        lVar15 = *(longlong *)(param_1 + 0x58);
                        local_a64 = *(float *)(lVar14 + 4 + lVar15);
                        fVar39 = *(float *)(lVar14 + lVar15);
                        local_a68 = *(float *)(lVar14 + 8 + lVar15);
                    }
                    else {
                        psVar20 = (short *)(lVar14 + *(longlong *)(param_1 + 0x58));
                        fVar39 = (float)(int)*psVar20 * 0.0009765625;
                        local_a64 = (float)(int)psVar20[1] * 0.0009765625;
                        local_198 = (undefined **)CONCAT44(local_a64,fVar39);
                        local_a68 = (float)(int)psVar20[2] * 0.0009765625;
                    }
                    pfVar16 = (float *)FUN_1407b08c0(*(longlong *)(param_1 + 0xb8) * uVar17 +
                                                     *(longlong *)(param_1 + 0x60),&local_a08);
                    fVar33 = *pfVar16;
                    fVar34 = pfVar16[1];
                    fVar32 = pfVar16[2];
                    pfVar16 = (float *)FUN_1407b08c0(uVar17 * *(longlong *)(param_1 + 0xc0) +
                                                     *(longlong *)(param_1 + 0x68),&local_9c8);
                    fVar29 = *pfVar16;
                    fVar36 = pfVar16[1];
                    fVar37 = pfVar16[2];
                    pfVar16 = (float *)FUN_1407b08c0(*(longlong *)(param_1 + 200) * uVar17 +
                                                     *(longlong *)(param_1 + 0x70));
                    fVar35 = *pfVar16;
                    fVar1 = pfVar16[1];
                    fVar30 = pfVar16[2];
                    fVar38 = *(float *)(uVar17 * *(longlong *)(param_1 + 0xd0) + *(longlong *)(param_1 + 0x78)
                    );
                    fVar5 = *(float *)(*(longlong *)(param_1 + 0xd8) * uVar17 + *(longlong *)(param_1 + 0x80))
                            ;
                    fVar6 = *(float *)(uVar17 * *(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0x88))
                            ;
                    fVar7 = *(float *)(*(longlong *)(param_1 + 0xe8) * uVar17 + *(longlong *)(param_1 + 0x90))
                            ;
                    fVar8 = *(float *)(uVar17 * *(longlong *)(param_1 + 0xf0) + *(longlong *)(param_1 + 0x98))
                            ;
                    fVar9 = *(float *)(*(longlong *)(param_1 + 0xf8) * uVar17 + *(longlong *)(param_1 + 0xa0))
                            ;
                    uVar2 = *(undefined *)
                            (uVar17 * *(longlong *)(param_1 + 0x100) + *(longlong *)(param_1 + 0xa8));
                    *pfVar24 = fVar39;
                    pfVar24[1] = local_a64;
                    pfVar24[3] = fVar33;
                    pfVar24[6] = fVar29;
                    pfVar24[9] = fVar35;
                    pfVar24[0xd] = fVar5;
                    pfVar24[0xc] = fVar38;
                    pfVar24[4] = fVar34;
                    pfVar24[7] = fVar36;
                    pfVar24[10] = fVar1;
                    pfVar24[5] = fVar32;
                    pfVar24[8] = fVar37;
                    pfVar24[0xb] = fVar30;
                    pfVar24[0xe] = fVar6;
                    pfVar24[0xf] = fVar7;
                    pfVar24[2] = local_a68;
                    pfVar24[0x10] = fVar8;
                    pfVar24[0x11] = fVar9;
                    *(undefined *)(pfVar24 + 0x12) = uVar2;
                    fVar39 = pfVar24[0xd];
                    if ((fVar39 != (float)uVar22) || (fVar38 != (float)uVar27)) {
                        uVar27 = (ulonglong)(uint)pfVar24[0xc];
                        uVar22 = (ulonglong)(uint)fVar39;
                        lVar14 = 0;
                        pfVar16 = local_998[uVar27 & 0xff];
                        local_a64 = pfVar24[0xc];
                        uVar40 = 1;
                        fStack352 = (float)((uint)fVar39 & 0xff) * 0.003921569;
                        local_198._0_4_ = *pfVar16 * fStack352;
                        local_198._4_4_ = pfVar16[1] * fStack352;
                        uStack400._0_4_ = pfVar16[2] * fStack352;
                        uStack400._4_4_ = pfVar16[3] * fStack352;
                        local_188._0_4_ = pfVar16[4] * fStack352;
                        local_188._4_4_ = pfVar16[5] * fStack352;
                        uStack384._0_4_ = pfVar16[6] * fStack352;
                        uStack384._4_4_ = pfVar16[7] * fStack352;
                        local_178._0_4_ = pfVar16[8] * fStack352;
                        local_178._4_4_ = pfVar16[9] * fStack352;
                        uStack368._0_4_ = pfVar16[10] * fStack352;
                        uStack368._4_4_ = pfVar16[0xb] * fStack352;
                        local_168 = pfVar16[0xc] * fStack352;
                        fStack356 = pfVar16[0xd] * fStack352;
                        fStack352 = pfVar16[0xe] * fStack352;
                        do {
                            bVar3 = *(byte *)((longlong)&local_a68 + lVar14 + 1);
                            local_a68 = fVar39;
                            if (bVar3 == 0) break;
                            lVar15 = lVar14 + 1;
                            uVar40 = uVar40 + 1;
                            lVar14 = lVar14 + 1;
                            pfVar16 = local_998[*(byte *)((longlong)&local_a64 + lVar15)];
                            fVar29 = (float)(uint)bVar3 * 0.003921569;
                            local_198._0_4_ = *pfVar16 * fVar29 + (float)local_198;
                            local_198._4_4_ = pfVar16[1] * fVar29 + local_198._4_4_;
                            uStack400._0_4_ = pfVar16[2] * fVar29 + (float)uStack400;
                            uStack400._4_4_ = pfVar16[3] * fVar29 + uStack400._4_4_;
                            local_188._0_4_ = pfVar16[4] * fVar29 + (float)local_188;
                            local_188._4_4_ = pfVar16[5] * fVar29 + local_188._4_4_;
                            uStack384._0_4_ = pfVar16[6] * fVar29 + (float)uStack384;
                            uStack384._4_4_ = pfVar16[7] * fVar29 + uStack384._4_4_;
                            local_178._0_4_ = pfVar16[8] * fVar29 + (float)local_178;
                            local_178._4_4_ = pfVar16[9] * fVar29 + local_178._4_4_;
                            uStack368._0_4_ = pfVar16[10] * fVar29 + (float)uStack368;
                            uStack368._4_4_ = pfVar16[0xb] * fVar29 + uStack368._4_4_;
                            local_168 = pfVar16[0xc] * fVar29 + local_168;
                            fStack356 = pfVar16[0xd] * fVar29 + fStack356;
                            fStack352 = pfVar16[0xe] * fVar29 + fStack352;
                        } while (uVar40 < 4);
                    }
                    fVar39 = pfVar24[2];
                    fVar29 = pfVar24[1];
                    fVar35 = *pfVar24;
                    *pfVar24 = fVar35 * (float)local_198 + fVar29 * (float)local_188 +
                               fVar39 * (float)local_178 + local_168;
                    pfVar24[1] = fVar35 * local_198._4_4_ + fVar29 * local_188._4_4_ +
                                 fVar39 * local_178._4_4_ + fStack356;
                    pfVar24[2] = fVar35 * (float)uStack400 + fVar29 * (float)uStack384 +
                                 fVar39 * (float)uStack368 + fStack352;
                    fVar39 = SUB164((ZEXT816(CONCAT44(fVar32,fVar32)) << 0x20) >> 0x40,0);
                    fVar32 = fVar33 * (float)local_198 + fVar34 * (float)local_188 + fVar39 * (float)local_178
                            ;
                    fVar29 = fVar33 * local_198._4_4_ + fVar34 * local_188._4_4_ + fVar39 * local_178._4_4_;
                    fVar35 = fVar33 * (float)uStack400 + fVar34 * (float)uStack384 + fVar39 * (float)uStack368
                            ;
                    fVar39 = fVar33 * uStack400._4_4_ + fVar34 * uStack384._4_4_ + fVar39 * uStack368._4_4_;
                    auVar31 = CONCAT124(SUB1612(CONCAT412(fVar39 * fVar39,
                                                          CONCAT48(fVar35 * fVar35,
                                                                   CONCAT44(fVar29 * fVar29,fVar32 * fVar32)))
                                                        >> 0x20,0),fVar32 * fVar32 + fVar29 * fVar29 + fVar35 * fVar35
                    );
                    auVar31 = rsqrtss(auVar31,auVar31);
                    fVar39 = SUB164(auVar31,0);
                    pfVar24[3] = fVar39 * fVar32;
                    pfVar24[4] = fVar39 * fVar29;
                    pfVar24[5] = fVar39 * fVar35;
                    fVar39 = pfVar24[6];
                    fVar33 = fVar39 * (float)local_198 + fVar36 * (float)local_188 + fVar37 * (float)local_178
                            ;
                    fVar34 = fVar39 * local_198._4_4_ + fVar36 * local_188._4_4_ + fVar37 * local_178._4_4_;
                    fVar32 = fVar39 * (float)uStack400 + fVar36 * (float)uStack384 + fVar37 * (float)uStack368
                            ;
                    fVar39 = fVar39 * uStack400._4_4_ + fVar36 * uStack384._4_4_ + fVar37 * uStack368._4_4_;
                    auVar31 = CONCAT124(SUB1612(CONCAT412(fVar39 * fVar39,
                                                          CONCAT48(fVar32 * fVar32,
                                                                   CONCAT44(fVar34 * fVar34,fVar33 * fVar33)))
                                                        >> 0x20,0),fVar33 * fVar33 + fVar34 * fVar34 + fVar32 * fVar32
                    );
                    uVar40 = (int)local_a38 + 1;
                    uVar17 = (ulonglong)uVar40;
                    local_a38 = local_a38 & 0xffffffff00000000 | (ulonglong)uVar40;
                    auVar31 = rsqrtss(auVar31,auVar31);
                    fVar39 = SUB164(auVar31,0);
                    pfVar24[6] = fVar39 * fVar33;
                    pfVar24[7] = fVar39 * fVar34;
                    pfVar24[8] = fVar39 * fVar32;
                    fVar39 = pfVar24[0xb];
                    fVar33 = pfVar24[10];
                    fVar34 = pfVar24[9];
                    fVar32 = fVar34 * (float)local_198 + fVar33 * (float)local_188 + fVar39 * (float)local_178
                            ;
                    fVar29 = fVar34 * local_198._4_4_ + fVar33 * local_188._4_4_ + fVar39 * local_178._4_4_;
                    fVar36 = fVar34 * (float)uStack400 + fVar33 * (float)uStack384 + fVar39 * (float)uStack368
                            ;
                    fVar39 = fVar34 * uStack400._4_4_ + fVar33 * uStack384._4_4_ + fVar39 * uStack368._4_4_;
                    auVar31 = CONCAT124(SUB1612(CONCAT412(fVar39 * fVar39,
                                                          CONCAT48(fVar36 * fVar36,
                                                                   CONCAT44(fVar29 * fVar29,fVar32 * fVar32)))
                                                        >> 0x20,0),fVar32 * fVar32 + fVar29 * fVar29 + fVar36 * fVar36
                    );
                    auVar31 = rsqrtss(auVar31,auVar31);
                    fVar39 = SUB164(auVar31,0);
                    pfVar24[9] = fVar39 * fVar32;
                    pfVar24[10] = fVar39 * fVar29;
                    pfVar24[0xb] = fVar39 * fVar36;
                    ppuVar12 = local_a30;
                } while (uVar40 < *(uint *)(local_9e8 + 3));
            }
            FUN_14018b900(local_9a8,0);
            goto LAB_140374304;
        }
        local_a50 = 0;
        local_a58 = &PTR_LAB_140b5e648;
        local_a48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_a58);
        local_9c8 = local_a58;
        local_9c0 = local_a50;
        local_a30 = &PTR_LAB_140b5e648;
        pwStack2600 = L"Result";
        local_9b8 = local_a48;
        local_a20 = (float *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_a30);
        local_9f0 = *(undefined8 *)(param_1 + 0x40);
        local_a08 = &PTR_LAB_140b5e648;
        local_a30 = &PTR_LAB_140b5e640;
        local_188 = local_a20;
        uStack384 = CONCAT44(uStack2580,iVar11);
        local_a00 = L"FileName";
        local_198 = &PTR_LAB_140b5e640;
        uStack400 = (float *)pwStack2600;
        iStack2584 = iVar11;
        local_9f8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_a08);
        puVar18 = &DAT_140c8a678;
        local_a38 = 0x141def790;
        LAB_1403737d5:
        local_a08 = &PTR_LAB_140b5e638;
        local_a70 = &local_9c8;
        local_9e8 = &PTR_LAB_140b5e638;
        uStack2528 = local_a00;
        local_a78 = &local_198;
        local_9d8 = local_9f8;
        local_9d0 = local_9f0;
        iVar11 = FUN_1401971e0(puVar18,0x14,&local_a38,&local_9e8);
        local_a08 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_9f8);
        local_a30 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_a20);
        local_a58 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_a48);
        if (iVar11 != 0) {
            DebugBreak();
        }
    }
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    LAB_140374304:
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack2712);
    return;
}



int FUN_140374330(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1403733c0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



ulonglong * FUN_140374370(ulonglong param_1,undefined4 param_2)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    ulonglong *puVar9;

    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = param_2;
    plVar8 = (longlong *)(lVar3 + 0x7f8);
    if (*plVar8 == *(longlong *)(lVar3 + 0x800)) {
        FUN_1400290d0(plVar8);
    }
    uVar5 = (**(code **)(lVar3 + 0x810))(param_1 + 0x18);
    ppuVar1 = (ulonglong **)
            (*(longlong *)(lVar3 + 0x808) + (uVar5 % *(ulonglong *)(lVar3 + 0x800)) * 8);
    puVar6 = (ulonglong *)FUN_14018b280(0x20);
    puVar9 = (ulonglong *)0x0;
    puVar7 = puVar9;
    if (puVar6 != (ulonglong *)0x0) {
        puVar7 = *ppuVar1;
        *puVar6 = uVar5;
        puVar6[1] = (ulonglong)puVar7;
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        puVar6[3] = param_1;
        *(undefined4 *)(puVar6 + 2) = uVar2;
        puVar7 = puVar6;
    }
    *ppuVar1 = puVar7;
    *plVar8 = *plVar8 + 1;
    uVar4 = FUN_140374420(param_1);
    if ((int)uVar4 < 0) {
        puVar9 = (ulonglong *)(ulonglong)uVar4;
    }
    return puVar9;
}



undefined8 FUN_140374420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    float fVar1;
    float fVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong **pplVar7;
    float *pfVar8;
    longlong lVar9;
    short *psVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    longlong lVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;

    lVar5 = FUN_140350f40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0x18));
    if (lVar5 == 0) {
        return 0x80004005;
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar5 + 0x14);
    lVar13 = 6;
    pplVar7 = (longlong **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar5 + 0x10);
    lVar9 = 6;
    do {
        if (*pplVar7 != (longlong *)0x0) {
            (**(code **)(**pplVar7 + 8))();
            *pplVar7 = (longlong *)0x0;
        }
        pplVar7 = pplVar7 + 1;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar12 = (ulonglong *)(lVar5 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    fVar17 = 0.0;
    pfVar8 = (float *)(lVar5 + 0x48);
    do {
        uVar11 = *puVar12;
        fVar1 = pfVar8[6];
        fVar14 = pfVar8[0xc];
        fVar15 = pfVar8[0x12];
        fVar16 = pfVar8[0x18];
        fVar2 = pfVar8[0x1e];
        if (uVar11 == 0) {
            psVar10 = (short *)0x0;
        }
        else if (DAT_140c3fe70 < uVar11) {
            psVar10 = (short *)0x0;
        }
        else {
            psVar10 = (short *)(DAT_140c3fe68 + uVar11);
        }
        if (((*pfVar8 != fVar17) && (psVar10 != (short *)0x0)) && (*psVar10 != 0)) {
            plVar6 = (longlong *)FUN_14018b280(0x148,0);
            if (plVar6 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
            }
            else {
                *plVar6 = (longlong)&PTR_LAB_140b65aa0;
                FUN_140327110(plVar6 + 0xb);
                plVar6[0x28] = 0;
                plVar6[0x27] = 0;
                *(undefined4 *)(plVar6 + 1) = 1;
                plVar6[2] = 0;
                plVar6[3] = 0;
                plVar6[8] = 0;
                plVar6[9] = 0;
                plVar6[10] = 0;
            }
            iVar4 = FUN_140373470(plVar6,param_1,fVar1,param_4,fVar14,fVar15,fVar16,fVar2,psVar10);
            if (iVar4 < 0) {
                if (plVar6 != (longlong *)0x0) {
                    FUN_1403733c0(plVar6);
                    FUN_14018b900(plVar6);
                }
            }
            else {
                uVar11 = (ulonglong)*(uint *)(param_1 + 0x2c);
                *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
                if (*(longlong **)(param_1 + 0x30 + uVar11 * 8) != plVar6) {
                    if (plVar6 != (longlong *)0x0) {
                        (**(code **)*plVar6)(plVar6);
                    }
                    plVar3 = *(longlong **)(param_1 + 0x30 + uVar11 * 8);
                    if (plVar3 != (longlong *)0x0) {
                        (**(code **)(*plVar3 + 8))();
                    }
                    *(longlong **)(param_1 + 0x30 + uVar11 * 8) = plVar6;
                }
                if (plVar6 != (longlong *)0x0) {
                    (**(code **)(*plVar6 + 8))(plVar6);
                }
            }
        }
        pfVar8 = pfVar8 + 1;
        puVar12 = puVar12 + 1;
        lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *(undefined8 *)(param_1 + 0x1c) = 0;
    return 0;
}



void FUN_1403746b0(longlong param_1)

{
    int iVar1;

    iVar1 = FUN_140374420();
    if (-1 < iVar1) {
        FUN_140367440(*(undefined8 *)(param_1 + 0x10),param_1);
        return;
    }
    return;
}



undefined8 FUN_1403746e0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
        do {
            lVar1 = *(longlong *)(param_1 + 0x30 + uVar5 * 8);
            if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x10), plVar2 != (longlong *)0x0)) {
                iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
                if (iVar3 == 0) {
                    return 0;
                }
                FUN_140373540(lVar1);
                if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
                    *(undefined8 *)(lVar1 + 0x10) = 0;
                }
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return 1;
}



undefined4 FUN_140374780(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    if (*(int *)(param_1 + 0x1c) != 0) {
        return *(undefined4 *)(param_1 + 0x2c);
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
        do {
            lVar1 = *(longlong *)(param_1 + 0x30 + uVar4 * 8);
            if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x10), plVar2 != (longlong *)0x0)) {
                iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,local_18);
                if (iVar3 == 0) goto LAB_1403747fd;
                FUN_140373540(lVar1);
                if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
                    *(undefined8 *)(lVar1 + 0x10) = 0;
                }
            }
            uVar5 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
    LAB_1403747fd:
    return *(undefined4 *)(param_1 + 0x2c);
}



undefined8 FUN_140374820(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    undefined4 local_18 [4];
    ulonglong uVar5;

    local_18[0] = 0xffffffff;
    if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = 0;
        if (*(int *)(param_1 + 0x2c) != 0) {
            do {
                lVar1 = *(longlong *)(param_1 + 0x30 + uVar5 * 8);
                if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x10), plVar2 != (longlong *)0x0)) {
                    iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,local_18);
                    if (iVar3 == 0) goto LAB_1403748bc;
                    FUN_140373540(lVar1);
                    if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
                        *(undefined8 *)(lVar1 + 0x10) = 0;
                    }
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(param_1 + 0x2c));
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    LAB_1403748bc:
    if (param_2 < *(uint *)(param_1 + 0x2c)) {
        return *(undefined8 *)(param_1 + 0x30 + (ulonglong)param_2 * 8);
    }
    return 0;
}



ulonglong FUN_1403748e0(longlong param_1,longlong **param_2,longlong **param_3)

{
    longlong lVar1;
    longlong lVar2;
    ushort *puVar3;
    short *psVar4;
    int iVar5;
    undefined8 uVar6;
    uint uVar7;
    ulonglong uVar9;
    longlong *local_res8;
    longlong *local_res20;
    ulonglong uVar8;

    uVar9 = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
        uVar8 = uVar9;
        if (*(int *)(param_1 + 0x2c) != 0) {
            do {
                lVar1 = *(longlong *)(param_1 + 0x30 + uVar8 * 8);
                if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0)) {
                    iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x20))();
                    if (iVar5 == 0) goto LAB_14037496d;
                    FUN_140373540(lVar1);
                    if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
                        *(undefined8 *)(lVar1 + 0x10) = 0;
                    }
                }
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
            } while (uVar7 < *(uint *)(param_1 + 0x2c));
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    LAB_14037496d:
    lVar1 = DAT_140c65800;
    local_res8 = (longlong *)0x0;
    local_res20 = (longlong *)0x0;
    uVar8 = uVar9;
    if (*(uint *)(param_1 + 0x2c) != 0) {
        do {
            lVar2 = *(longlong *)(param_1 + 0x30 + uVar8 * 8);
            if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x50), lVar2 != 0)) &&
                (*(int *)(lVar2 + 0x1f0) != 0)) {
                puVar3 = *(ushort **)(*(longlong *)(lVar2 + 0x1f8) + 0x28);
                uVar7 = (uint)*puVar3;
                if (uVar7 < *(uint *)(lVar2 + 0x1c0)) {
                    psVar4 = *(short **)((ulonglong)uVar7 * 0x20 + 0x18 + *(longlong *)(lVar2 + 0x1c8));
                    if ((psVar4 == (short *)0x0) || (*psVar4 == 0)) {
                        uVar6 = *(undefined8 *)(DAT_140c65800 + 0x860);
                    }
                    else {
                        iVar5 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,psVar4,3,0,0,0,&local_res8);
                        if (-1 < iVar5) goto LAB_140374a90;
                        FUN_1400035b0(0xe,0,0,psVar4);
                        uVar6 = *(undefined8 *)(lVar1 + 0x848);
                    }
                    uVar7 = (**(code **)(*DAT_140c65670 + 0x80))(DAT_140c65670,uVar6,&local_res8);
                    if (-1 < (int)uVar7) goto LAB_140374a90;
                }
                else {
                    LAB_140374a90:
                    lVar1 = DAT_140c65800;
                    uVar7 = (uint)puVar3[1];
                    if (*(uint *)(lVar2 + 0x1c0) <= uVar7) break;
                    psVar4 = *(short **)((ulonglong)uVar7 * 0x20 + 0x18 + *(longlong *)(lVar2 + 0x1c8));
                    if ((psVar4 == (short *)0x0) || (*psVar4 == 0)) {
                        uVar6 = *(undefined8 *)(DAT_140c65800 + 0x868);
                    }
                    else {
                        iVar5 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,psVar4,3,0,0,0,&local_res20);
                        if (-1 < iVar5) break;
                        FUN_1400035b0(0xe,0,0,psVar4);
                        uVar6 = *(undefined8 *)(lVar1 + 0x850);
                    }
                    uVar7 = (**(code **)(*DAT_140c65670 + 0x80))(DAT_140c65670,uVar6,&local_res20);
                    if (-1 < (int)uVar7) break;
                }
                uVar9 = (ulonglong)uVar7;
                goto LAB_140374b99;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(param_1 + 0x2c));
    }
    *param_2 = local_res8;
    if (local_res8 != (longlong *)0x0) {
        (**(code **)*local_res8)();
    }
    *param_3 = local_res20;
    if (local_res20 != (longlong *)0x0) {
        (**(code **)*local_res20)(local_res20);
    }
    LAB_140374b99:
    if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 8))(local_res20);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return uVar9;
}



float FUN_140374bf0(longlong param_1)

{
    float fVar1;
    longlong lVar2;
    ushort *puVar3;
    int iVar4;
    uint uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    float fVar8;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    if (*(int *)(param_1 + 0x1c) == 0) {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x2c) != 0) {
            do {
                lVar2 = *(longlong *)(param_1 + 0x30 + uVar7 * 8);
                if ((lVar2 != 0) && (plVar6 = *(longlong **)(lVar2 + 0x10), plVar6 != (longlong *)0x0)) {
                    iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,local_18);
                    if (iVar4 == 0) goto LAB_140374c7c;
                    FUN_140373540(lVar2);
                    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
                        *(undefined8 *)(lVar2 + 0x10) = 0;
                    }
                }
                uVar5 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(param_1 + 0x2c));
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    LAB_140374c7c:
    fVar8 = DAT_140c442e8;
    if (*(uint *)(param_1 + 0x2c) != 0) {
        plVar6 = (longlong *)(param_1 + 0x30);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x2c);
        do {
            if (((*plVar6 != 0) && (lVar2 = *(longlong *)(*plVar6 + 0x50), lVar2 != 0)) &&
                (*(int *)(lVar2 + 0x1f0) != 0)) {
                puVar3 = *(ushort **)(*(longlong *)(lVar2 + 0x1f8) + 0x28);
                uVar5 = (uint)*puVar3;
                if ((uVar5 < *(uint *)(lVar2 + 0x1c0)) &&
                    (fVar1 = *(float *)((ulonglong)uVar5 * 0x20 + 8 + *(longlong *)(lVar2 + 0x1c8)),
                            fVar1 <= fVar8)) {
                    fVar8 = fVar1;
                }
                uVar5 = (uint)puVar3[1];
                if ((uVar5 < *(uint *)(lVar2 + 0x1c0)) &&
                    (fVar1 = *(float *)((ulonglong)uVar5 * 0x20 + 8 + *(longlong *)(lVar2 + 0x1c8)),
                            fVar1 <= fVar8)) {
                    fVar8 = fVar1;
                }
            }
            plVar6 = plVar6 + 1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    return fVar8;
}



int FUN_140374d30(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1403548b0();
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_140374d60(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    ulonglong uVar5;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1);
        if (*param_1 != lVar2) {
            uVar5 = 0;
            if (param_1[1] != 0) {
                puVar4 = (undefined4 *)(lVar2 + 0x14);
                do {
                    if (puVar4 + -5 != (undefined4 *)0x0) {
                        puVar3 = (undefined4 *)((longlong)puVar4 + *param_1 + (-0x14 - lVar2));
                        puVar4[-5] = *puVar3;
                        puVar4[-4] = puVar3[1];
                        puVar4[-3] = puVar3[2];
                        puVar4[-2] = puVar3[3];
                        puVar4[-1] = puVar3[4];
                        *puVar4 = puVar3[5];
                        puVar4[1] = puVar3[6];
                        puVar4[2] = puVar3[7];
                        puVar4[3] = puVar3[8];
                        puVar4[4] = puVar3[9];
                        puVar4[5] = puVar3[10];
                        puVar4[6] = puVar3[0xb];
                        puVar4[7] = puVar3[0xc];
                        puVar4[8] = puVar3[0xd];
                        puVar4[9] = puVar3[0xe];
                        puVar4[10] = puVar3[0xf];
                        puVar4[0xb] = puVar3[0x10];
                        puVar4[0xc] = puVar3[0x11];
                        *(undefined *)(puVar4 + 0xd) = *(undefined *)(puVar3 + 0x12);
                    }
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + 0x13;
                } while (uVar5 < (ulonglong)param_1[1]);
            }
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



undefined8 FUN_140374e90(ulonglong param_1,undefined4 param_2)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    longlong *plVar8;

    *(undefined4 *)(param_1 + 0x18) = param_2;
    uVar5 = FUN_140374f40();
    if (-1 < (int)uVar5) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        plVar8 = (longlong *)(lVar3 + 0x820);
        if (*plVar8 == *(longlong *)(lVar3 + 0x828)) {
            FUN_1400290d0(plVar8);
        }
        uVar6 = (**(code **)(lVar3 + 0x838))(param_1 + 0x18);
        ppuVar1 = (ulonglong **)
                (*(longlong *)(lVar3 + 0x830) + (uVar6 % *(ulonglong *)(lVar3 + 0x828)) * 8);
        puVar7 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar7 != (ulonglong *)0x0) {
            puVar4 = *ppuVar1;
            *puVar7 = uVar6;
            puVar7[1] = (ulonglong)puVar4;
            uVar2 = *(undefined4 *)(param_1 + 0x18);
            puVar7[3] = param_1;
            *(undefined4 *)(puVar7 + 2) = uVar2;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        uVar5 = 0;
    }
    return uVar5;
}



undefined8 FUN_140374f40(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 uVar8;
    longlong lVar9;
    longlong local_res8;
    longlong *local_res10;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    lVar4 = FUN_140350fe0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0x18));
    if (lVar4 != 0) {
        lVar9 = 0;
        *(undefined8 *)(param_1 + 0x1c) = 0;
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0xae8);
        local_res8 = lVar1;
        if (*(longlong *)(lVar1 + 8) != 0) {
            lVar5 = *(longlong *)(lVar1 + 8);
            do {
                if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar4 + 4)) {
                    lVar6 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar6 = *(longlong *)(lVar5 + 0x10);
                    local_res8 = lVar5;
                }
                lVar5 = lVar6;
            } while (lVar6 != 0);
        }
        if ((local_res8 == lVar1) || (*(uint *)(lVar4 + 4) < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        uVar8 = 0;
        if (local_res8 != lVar1) {
            uVar8 = *(undefined4 *)(local_res8 + 0x24);
        }
        *(undefined4 *)(param_1 + 0x24) = uVar8;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar4 + 8);
        uVar2 = *(ulonglong *)(lVar4 + 0x10);
        if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
            lVar9 = DAT_140c3fe68 + uVar2;
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x28);
        uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar9,&local_res10,0);
        if (-1 < (int)uVar7) {
            if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
                *(undefined8 *)(param_1 + 0x30) = 0;
            }
            local_28 = 0x96;
            local_1c = 0;
            local_14 = 0;
            local_c = 0;
            local_20 = 0x3f800000;
            *(longlong **)(param_1 + 0x30) = local_res10;
            (**(code **)(*local_res10 + 0x248))(local_res10,0,&local_28);
            uVar7 = 0;
        }
        return uVar7;
    }
    return 0x80004005;
}



int FUN_140375080(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140354a40();
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_1403750b0(ulonglong param_1,undefined4 param_2)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    longlong *plVar8;

    *(undefined4 *)(param_1 + 0x18) = param_2;
    uVar5 = FUN_140375160();
    if (-1 < (int)uVar5) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        plVar8 = (longlong *)(lVar3 + 0x848);
        if (*plVar8 == *(longlong *)(lVar3 + 0x850)) {
            FUN_1400290d0(plVar8);
        }
        uVar6 = (**(code **)(lVar3 + 0x860))(param_1 + 0x18);
        ppuVar1 = (ulonglong **)
                (*(longlong *)(lVar3 + 0x858) + (uVar6 % *(ulonglong *)(lVar3 + 0x850)) * 8);
        puVar7 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar7 != (ulonglong *)0x0) {
            puVar4 = *ppuVar1;
            *puVar7 = uVar6;
            puVar7[1] = (ulonglong)puVar4;
            uVar2 = *(undefined4 *)(param_1 + 0x18);
            puVar7[3] = param_1;
            *(undefined4 *)(puVar7 + 2) = uVar2;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        uVar5 = 0;
    }
    return uVar5;
}



ulonglong FUN_140375160(longlong param_1)

{
    ulonglong uVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    float fVar12;
    longlong *local_res8;
    undefined8 local_res10;

    lVar4 = FUN_140351080(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined4 *)(param_1 + 0x18));
    if (lVar4 == 0) {
        return 0x80004005;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    uVar2 = (uint)(longlong)*(float *)(lVar6 + 0xa4);
    uVar3 = *(uint *)(lVar6 + 0xa0);
    if (*(uint *)(lVar6 + 0xa0) < uVar2) {
        uVar3 = uVar2;
    }
    uVar11 = *(undefined4 *)(&DAT_140b65808 + (longlong)*(int *)(lVar6 + 0x9c) * 4);
    lVar7 = 0;
    local_res8 = (longlong *)0x0;
    uVar5 = *(ulonglong *)(lVar4 + 0x10);
    lVar6 = lVar7;
    if (uVar5 != 0) {
        if (DAT_140c3fe70 < uVar5) {
            lVar6 = 0;
        }
        else {
            lVar6 = DAT_140c3fe68 + uVar5;
        }
    }
    uVar2 = (**(code **)(*DAT_140c65670 + 0x50))
            (DAT_140c65670,lVar6,uVar3,1,uVar11,0x15,0,0,&local_res8);
    uVar5 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) {
        uVar1 = *(ulonglong *)(lVar4 + 0x10);
        if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
            lVar7 = DAT_140c3fe68 + uVar1;
        }
        FUN_1400035b0(0x14,0,0,lVar7,uVar2,*(undefined4 *)(param_1 + 0x18));
        uVar5 = uVar5 & 0xffffffff;
    }
    else {
        local_res10 = 0;
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) {
            uVar5 = *(ulonglong *)(lVar4 + 0x18);
            lVar6 = lVar7;
            if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
                lVar6 = DAT_140c3fe68 + uVar5;
            }
            uVar3 = (**(code **)(*DAT_140c65670 + 0x50))
                    (DAT_140c65670,lVar6,uVar3,1,uVar11,0x15,0,0,&local_res10);
            if ((int)uVar3 < 0) {
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)(*local_res8 + 8))();
                    local_res8 = (longlong *)0x0;
                }
                uVar5 = *(ulonglong *)(lVar4 + 0x18);
                if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
                    lVar7 = DAT_140c3fe68 + uVar5;
                }
                FUN_1400035b0(0x14,0,0,lVar7,uVar3,*(undefined4 *)(param_1 + 0x18));
                return (ulonglong)uVar3;
            }
        }
        if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
            *(undefined8 *)(param_1 + 0x50) = 0;
        }
        if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
            *(undefined8 *)(param_1 + 0x58) = 0;
        }
        fVar8 = 1.0;
        fVar12 = 0.0;
        *(longlong **)(param_1 + 0x50) = local_res8;
        *(undefined8 *)(param_1 + 0x58) = local_res10;
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar4 + 0x20);
        if (*(float *)(lVar4 + 0x20) != 0.0) {
            fVar8 = 1.0 / *(float *)(lVar4 + 0x20);
        }
        *(float *)(param_1 + 0x28) = fVar8;
        fVar8 = *(float *)(lVar4 + 0x28) * *(float *)(lVar4 + 0x20);
        *(float *)(param_1 + 0x2c) = fVar8;
        if (fVar8 == 0.0) {
            uVar11 = 1;
        }
        else {
            uVar11 = (undefined4)(longlong)(1000.0 / (float)((uint)fVar8 & 0x7fffffff));
        }
        *(undefined4 *)(param_1 + 0x30) = uVar11;
        fVar8 = *(float *)(lVar4 + 0x2c);
        *(float *)(param_1 + 0x34) = fVar8;
        if (fVar8 == 0.0) {
            uVar11 = 1;
        }
        else {
            uVar11 = (undefined4)(longlong)(6283.186 / (float)((uint)fVar8 & 0x7fffffff));
        }
        *(undefined4 *)(param_1 + 0x38) = uVar11;
        *(float *)(param_1 + 0x3c) = *(float *)(lVar4 + 0x44) + *(float *)(lVar4 + 0x38);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar4 + 0x3c);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar4 + 0x40);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar4 + 0x48);
        uVar11 = *(undefined4 *)(lVar4 + 0x34);
        fVar9 = (float)FUN_1408fe3d0(uVar11);
        fVar10 = (float)FUN_1408fc950(uVar11);
        fVar8 = *(float *)(lVar4 + 0x30);
        *(undefined (*) [16])(param_1 + 0x70) =
                CONCAT412(fVar8 * fVar12,CONCAT48(fVar8 * fVar12,CONCAT44(fVar8 * fVar10,fVar8 * fVar9)));
        uVar11 = *(undefined4 *)(lVar4 + 0x24);
        fVar9 = (float)FUN_1408fe3d0(uVar11);
        fVar10 = (float)FUN_1408fc950(uVar11);
        uVar5 = 0;
        fVar8 = *(float *)(param_1 + 0x24);
        *(undefined (*) [16])(param_1 + 0x80) =
                CONCAT412(fVar12 * fVar8,
                          CONCAT48(fVar12 * fVar8,
                                   CONCAT44((float)((uint)fVar9 ^ 0x80000000) * fVar8,fVar10 * fVar8)));
        fVar8 = *(float *)(param_1 + 0x24);
        *(undefined (*) [16])(param_1 + 0x90) =
                CONCAT412(fVar12 * fVar8,CONCAT48(fVar12 * fVar8,CONCAT44(fVar10 * fVar8,fVar9 * fVar8)));
        fVar8 = *(float *)(param_1 + 0x28);
        *(undefined (*) [16])(param_1 + 0xa0) =
                CONCAT412(fVar12 * fVar8,CONCAT48(fVar12 * fVar8,CONCAT44(fVar9 * fVar8,fVar10 * fVar8)));
        fVar8 = *(float *)(param_1 + 0x28);
        *(undefined (*) [16])(param_1 + 0xb0) =
                CONCAT412(fVar12 * fVar8,
                          CONCAT48(fVar12 * fVar8,
                                   CONCAT44(fVar10 * fVar8,(float)((uint)fVar9 ^ 0x80000000) * fVar8)));
        *(undefined4 *)(param_1 + 0x20) = 0;
    }
    return uVar5;
}



void FUN_140375590(longlong param_1)

{
    uint uVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x370);
    fVar4 = (float)((ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x30)) *
            *(float *)(param_1 + 0x2c) * -0.001;
    fVar3 = ((float)((ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x38)) * 0.001 +
             *(float *)(param_1 + 0x3c)) * *(float *)(param_1 + 0x34);
    fVar2 = (float)FUN_1408fe3d0(fVar3);
    fVar3 = (float)FUN_1408fc950(fVar3);
    *(float *)(param_1 + 0x4c) =
            (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40)) * (fVar3 + 1.0) * 0.5 +
            *(float *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x88) = (uint)(fVar2 * *(float *)(param_1 + 0x70)) ^ 0x80000000;
    *(float *)(param_1 + 0x98) = fVar4 - fVar2 * *(float *)(param_1 + 0x74);
    fVar2 = fVar3 * *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x34);
    fVar3 = fVar3 * *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x34) +
            *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x60) =
            *(float *)(param_1 + 0xa0) * fVar2 + *(float *)(param_1 + 0xa4) * fVar3;
    *(float *)(param_1 + 100) =
            *(float *)(param_1 + 0xb0) * fVar2 + *(float *)(param_1 + 0xb4) * fVar3;
    return;
}



undefined8 FUN_1403756e0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    if (*(int *)(param_1 + 0x20) == 0) {
        if ((*(longlong **)(param_1 + 0x50) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(), iVar2 == 0)) {
            return 0;
        }
        plVar1 = *(longlong **)(param_1 + 0x58);
        if ((plVar1 != (longlong *)0x0) &&
            (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)) {
            return 0;
        }
        *(undefined4 *)(param_1 + 0x20) = 1;
    }
    return 1;
}



int FUN_140375750(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140354bb0();
        }
        iVar2 = 0;
    }
    return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1403757e0(undefined8 *param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong *plVar6;

    *param_1 = &PTR_LAB_140b65ae0;
    param_1[8] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2b) = 9;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x414) = 0;
    param_1[0x8c] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[3] = 0;
    param_1[4] = param_1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
    param_1[0xe] = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
    *(undefined (*) [16])(param_1 + 0x14) = ZEXT816(0);
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x16) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
    *(undefined4 *)(param_1 + 0x17) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x18) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
    *(undefined4 *)(param_1 + 0x19) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x1a) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
    *(undefined4 *)(param_1 + 0x1b) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x1c) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
    *(undefined4 *)(param_1 + 0x1d) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar5;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x1e) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
    *(undefined4 *)(param_1 + 0x1f) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x20) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar3;
    *(undefined4 *)(param_1 + 0x21) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x22) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x114) = uVar3;
    *(undefined4 *)(param_1 + 0x23) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x11c) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x24) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x124) = uVar3;
    *(undefined4 *)(param_1 + 0x25) = uVar4;
    *(undefined4 *)((longlong)param_1 + 300) = uVar5;
    param_1[0x26] = 0x3f800000;
    param_1[0x29] = 0;
    FUN_1407c2990(param_1 + 0x2a,param_1[2] + 0x15c0,5);
    *(undefined4 *)(param_1 + 0x2d) = 0;
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0x45e;
    param_1[0x83] = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x76) = DAT_140c784c0;
    *(undefined4 *)((longlong)param_1 + 0x3b4) = DAT_140c784c4;
    *(undefined4 *)(param_1 + 0x77) = DAT_140c784c8;
    *(undefined4 *)((longlong)param_1 + 0x3bc) = DAT_140c784cc;
    *(undefined4 *)(param_1 + 0x78) = DAT_140c784c0;
    *(undefined4 *)((longlong)param_1 + 0x3c4) = DAT_140c784c4;
    *(undefined4 *)(param_1 + 0x79) = DAT_140c784c8;
    *(undefined4 *)((longlong)param_1 + 0x3cc) = DAT_140c784cc;
    param_1[0x87] = 0;
    *(undefined4 *)((longlong)param_1 + 0x424) = DAT_140c784c0;
    *(undefined4 *)(param_1 + 0x85) = DAT_140c784c4;
    *(undefined4 *)((longlong)param_1 + 0x42c) = DAT_140c784c8;
    *(undefined4 *)(param_1 + 0x86) = DAT_140c784cc;
    param_1[0x8a] = 0;
    *(undefined4 *)(param_1 + 0x88) = DAT_140c784c0;
    *(undefined4 *)((longlong)param_1 + 0x444) = DAT_140c784c4;
    *(undefined4 *)(param_1 + 0x89) = DAT_140c784c8;
    *(undefined4 *)((longlong)param_1 + 0x44c) = DAT_140c784cc;
    *(undefined4 *)(param_1 + 0x8b) = 0;
    iVar2 = *(int *)(param_2 + 0x350);
    plVar6 = (longlong *)(param_1[2] + 0x13a8);
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    *(undefined4 *)(param_1 + 0x91) = 1;
    *(undefined4 *)((longlong)param_1 + 0x48c) = 1;
    *(int *)((longlong)param_1 + 0x46c) = iVar2 + -1;
    if (param_1[0x92] == 0) {
        param_1[0x92] = plVar6;
        plVar1 = param_1 + 0x93;
        *plVar1 = *plVar6;
        *plVar6 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x490) = plVar1;
        }
    }
    *(longlong *)(param_1[2] + 0x13a0) = *(longlong *)(param_1[2] + 0x13a0) + 1;
    return param_1;
}



void FUN_140375b60(undefined8 *param_1)

{
    ulonglong *puVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong **ppuVar9;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    *param_1 = &PTR_LAB_140b65ae0;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    if (*(int *)((longlong)param_1 + 0x134) != 0) {
        (**(code **)(*(longlong *)param_1[6] + 0xb8))();
        *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    }
    lVar5 = param_1[0x8c];
    while (lVar5 != 0) {
        lVar5 = param_1[0x8c];
        if (lVar5 != 0) {
            FUN_14038fbf0(lVar5);
            FUN_14018b900(lVar5);
        }
        lVar5 = param_1[0x8c];
    }
    if (param_1[0x87] != 0) {
        FUN_140376280();
    }
    if (param_1[0x8a] != 0) {
        FUN_1403762e0();
    }
    if (*(int *)((longlong)param_1 + 0x41c) != 0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = 0;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_68);
        local_48 = local_68;
        local_40 = local_60;
        local_38 = local_58;
        plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[2] + 0x10))();
        local_res8 = 0x141def910;
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar6 = FUN_140379cb0();
        iVar3 = FUN_1401971e0(&DAT_140c8a680,0x14,&local_res8,uVar6,lVar5 + 0x208,param_1[0xb],
                              *(undefined4 *)(param_1 + 0xc),&local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_58);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    if (*(int *)(param_1 + 0x84) != 0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = 0;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_68);
        local_48 = local_68;
        local_40 = local_60;
        local_38 = local_58;
        plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[2] + 0x10))();
        local_res8 = 0x141def830;
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar6 = FUN_140379cb0();
        iVar3 = FUN_1401971e0(&DAT_140c8a684,0x14,&local_res8,uVar6,lVar5 + 0x208,param_1[0xb],
                              *(undefined4 *)(param_1 + 0xc),&local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_58);
        if (iVar3 != 0) {
            DebugBreak();
        }
        FUN_140367760(param_1[2]);
    }
    if ((undefined8 *)param_1[0x92] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x92] = param_1[0x93];
    }
    if (param_1[0x93] != 0) {
        *(undefined8 *)(param_1[0x93] + 0x490) = param_1[0x92];
    }
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    *(longlong *)(param_1[2] + 0x13a0) = *(longlong *)(param_1[2] + 0x13a0) + -1;
    if ((longlong *)param_1[0x8e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x8e] + 8))();
        param_1[0x8e] = 0;
    }
    if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x8f] + 8))();
        param_1[0x8f] = 0;
    }
    if (*(int *)(param_1 + 9) != 0) {
        lVar5 = param_1[2];
        local_res8 = param_1[3];
        uVar7 = (**(code **)(lVar5 + 0x1400))(&local_res8);
        uVar8 = uVar7 % *(ulonglong *)(lVar5 + 0x13f0);
        ppuVar9 = (ulonglong **)(*(longlong *)(lVar5 + 0x13f8) + uVar8 * 8);
        puVar1 = *(ulonglong **)(*(longlong *)(lVar5 + 0x13f8) + uVar8 * 8);
        while (puVar1 != (ulonglong *)0x0) {
            if ((uVar7 == **ppuVar9) &&
                (iVar3 = (**(code **)(lVar5 + 0x1408))(&local_res8,*ppuVar9 + 2), iVar3 != 0)) {
                puVar1 = *ppuVar9;
                *ppuVar9 = (ulonglong *)puVar1[1];
                FUN_14018b900(puVar1,0);
                *(longlong *)(lVar5 + 0x13e8) = *(longlong *)(lVar5 + 0x13e8) + -1;
                break;
            }
            ppuVar9 = (ulonglong **)(*ppuVar9 + 1);
            puVar1 = *ppuVar9;
        }
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x38))();
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x288))(plVar4,0,0);
        }
        puVar2 = (undefined8 *)param_1[6];
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
        }
    }
    plVar4 = param_1 + 8;
    lVar5 = param_1[8];
    while (lVar5 != 0) {
        *(undefined8 *)(*plVar4 + 0x28) = 0;
        lVar5 = *plVar4;
        if (*(undefined8 **)(lVar5 + 0x4b0) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar5 + 0x4b0) = *(undefined8 *)(lVar5 + 0x4b8);
        }
        if (*(longlong *)(lVar5 + 0x4b8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0x4b8) + 0x4b0) = *(undefined8 *)(lVar5 + 0x4b0);
        }
        *(undefined8 *)(lVar5 + 0x4b0) = 0;
        *(undefined8 *)(lVar5 + 0x4b8) = 0;
        lVar5 = *plVar4;
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((undefined8 *)param_1[0xa2] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xa2] = param_1[0xa3];
    }
    if (param_1[0xa3] != 0) {
        *(undefined8 *)(param_1[0xa3] + 0x510) = param_1[0xa2];
    }
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    if ((undefined8 *)param_1[0xa0] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xa0] = param_1[0xa1];
    }
    if (param_1[0xa1] != 0) {
        *(undefined8 *)(param_1[0xa1] + 0x500) = param_1[0xa0];
    }
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    if ((undefined8 *)param_1[0x9e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x9e] = param_1[0x9f];
    }
    if (param_1[0x9f] != 0) {
        *(undefined8 *)(param_1[0x9f] + 0x4f0) = param_1[0x9e];
    }
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    if ((undefined8 *)param_1[0x9c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x9c] = param_1[0x9d];
    }
    if (param_1[0x9d] != 0) {
        *(undefined8 *)(param_1[0x9d] + 0x4e0) = param_1[0x9c];
    }
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    if ((undefined8 *)param_1[0x9a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x9a] = param_1[0x9b];
    }
    if (param_1[0x9b] != 0) {
        *(undefined8 *)(param_1[0x9b] + 0x4d0) = param_1[0x9a];
    }
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    if ((undefined8 *)param_1[0x98] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x98] = param_1[0x99];
    }
    if (param_1[0x99] != 0) {
        *(undefined8 *)(param_1[0x99] + 0x4c0) = param_1[0x98];
    }
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    if ((undefined8 *)param_1[0x96] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x96] = param_1[0x97];
    }
    if (param_1[0x97] != 0) {
        *(undefined8 *)(param_1[0x97] + 0x4b0) = param_1[0x96];
    }
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    if ((undefined8 *)param_1[0x94] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x94] = param_1[0x95];
    }
    if (param_1[0x95] != 0) {
        *(undefined8 *)(param_1[0x95] + 0x4a0) = param_1[0x94];
    }
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    if ((undefined8 *)param_1[0x92] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x92] = param_1[0x93];
    }
    if (param_1[0x93] != 0) {
        *(undefined8 *)(param_1[0x93] + 0x490) = param_1[0x92];
    }
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    if (param_1[0x8c] != 0) {
        FUN_1401a4a00(param_1 + 0x8c);
    }
    FUN_140195d70(param_1 + 0x7a);
    *(undefined4 *)(param_1 + 0x7a) = 0;
    if ((undefined8 *)param_1[0x7c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x7c] = param_1[0x7d];
    }
    if ((undefined8 *)param_1[0x7d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x7d] = param_1[0x7c];
    }
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    if (param_1[0x2a] != 0) {
        FUN_1407c2b30(param_1[0x2a],param_1[0x2c],*(undefined4 *)(param_1 + 0x2b),9);
    }
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x28] + 8))();
    }
    if ((longlong *)param_1[0x27] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x27] + 8))();
    }
    if (*plVar4 != 0) {
        FUN_1401a4a00(plVar4);
    }
    return;
}



longlong FUN_140376280(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    iVar1 = *(int *)(param_1 + -8);
    lVar2 = (longlong)iVar1 * 0x20 + param_1;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
        lVar2 = lVar2 + -0x20;
        FUN_14038f540(lVar2);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



longlong FUN_1403762e0(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        pplVar2 = (longlong **)((longlong)*(int *)(param_1 + -8) * 0x20 + 0x10 + param_1);
        do {
            pplVar1 = (longlong **)((longlong *)pplVar2 + -4);
            if (((longlong *)pplVar2)[-6] != 0) {
                if (*pplVar1 != (longlong *)0x0) {
                    **pplVar1 = ((longlong *)pplVar2)[-3];
                }
                if (((longlong *)pplVar2)[-3] != 0) {
                    *(longlong **)(((longlong *)pplVar2)[-3] + 0x10) = *pplVar1;
                }
                *pplVar1 = (longlong *)0x0;
                ((longlong *)pplVar2)[-3] = 0;
                (**(code **)(*(longlong *)((longlong *)pplVar2)[-6] + 8))();
            }
            if (*pplVar1 != (longlong *)0x0) {
                **pplVar1 = ((longlong *)pplVar2)[-3];
            }
            if (((longlong *)pplVar2)[-3] != 0) {
                *(longlong **)(((longlong *)pplVar2)[-3] + 0x10) = *pplVar1;
            }
            iVar3 = iVar3 + -1;
            *pplVar1 = (longlong *)0x0;
            ((longlong *)pplVar2)[-3] = 0;
            pplVar2 = pplVar1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1403763a0(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    int iVar5;
    longlong *plVar6;
    undefined4 *puVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    longlong *plVar10;
    longlong lVar11;
    ulonglong uVar12;
    ulonglong *puVar13;
    ulonglong uVar14;
    undefined8 local_res8;
    undefined4 uVar15;
    undefined4 uStack92;

    param_1[3] = (longlong)param_2;
    (**(code **)*param_2)(param_2);
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[3] + 0x20))();
    puVar13 = (ulonglong *)0x0;
    uVar15 = 0;
    if (plVar6 != (longlong *)0x0) {
        puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x20))(plVar6);
        uVar15 = *puVar7;
    }
    uVar4 = (**(code **)(*(longlong *)param_1[3] + 0xd8))();
    local_res8 = (ulonglong)uVar4;
    param_1[0xb] = local_res8;
    param_1[0xc] = CONCAT44(uStack92,uVar15);
    iVar5 = (**(code **)(*(longlong *)param_1[3] + 0x28))();
    puVar9 = puVar13;
    if (iVar5 == 0) {
        puVar8 = (ulonglong *)FUN_14018b280(0x40);
        if (puVar8 != (ulonglong *)0x0) {
            puVar8[2] = 0;
            *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
            *puVar8 = (ulonglong)&PTR_FUN_140b660c0;
            *(undefined (*) [16])(puVar8 + 4) = ZEXT816(0);
            *(undefined (*) [16])(puVar8 + 6) = ZEXT816(0);
            puVar9 = puVar8;
        }
        uVar4 = FUN_140394620(puVar9);
        LAB_140376548:
        uVar12 = (ulonglong)uVar4;
        if (-1 < (int)uVar4) {
            param_1[6] = (longlong)puVar9;
            goto LAB_140376566;
        }
        if (puVar9 == (ulonglong *)0x0) goto LAB_140376566;
    }
    else {
        if (iVar5 == 1) {
            LAB_1403764b0:
            puVar9 = (ulonglong *)FUN_14018b280(0x50);
            if (puVar9 == (ulonglong *)0x0) {
                uVar4 = FUN_140395080(0);
                puVar9 = puVar13;
            }
            else {
                puVar9[2] = 0;
                puVar9[3] = 0;
                puVar9[4] = 0;
                *puVar9 = (ulonglong)&PTR_LAB_140b66190;
                puVar9[5] = 0;
                puVar9[6] = 0;
                *(undefined8 *)((longlong)puVar9 + 0x3c) = 0;
                *(undefined4 *)(puVar9 + 7) = 0;
                puVar9[9] = 0;
                uVar4 = FUN_140395080(puVar9);
            }
            goto LAB_140376548;
        }
        if (iVar5 != 2) {
            if (iVar5 != 3) {
                return 0x80070057;
            }
            goto LAB_1403764b0;
        }
        puVar8 = (ulonglong *)FUN_14018b280(0x30);
        if (puVar8 != (ulonglong *)0x0) {
            puVar8[3] = 0;
            puVar8[4] = 0;
            *puVar8 = (ulonglong)&PTR_FUN_140b66260;
            puVar8[5] = 0;
            puVar9 = puVar8;
        }
        puVar9[2] = (ulonglong)param_1;
        if ((*(uint *)(param_1[2] + 0xec) & 0x100) == 0) {
            LAB_1403764a4:
            uVar12 = 0;
            param_1[6] = (longlong)puVar9;
            goto LAB_140376566;
        }
        plVar6 = *(longlong **)(param_1[2] + 0x28);
        uVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,L"Art\\Dev\\Sound_Emitter_Sphere.m3",puVar9 + 5,2);
        uVar12 = (ulonglong)uVar4;
        if (-1 < (int)uVar4) goto LAB_1403764a4;
    }
    (**(code **)*puVar9)(puVar9);
    LAB_140376566:
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x38))();
        if (plVar6 != (longlong *)0x0) {
            plVar10 = (longlong *)(**(code **)(*(longlong *)param_1[3] + 0x20))();
            plVar1 = (longlong *)param_1[3];
            local_res8 = local_res8 & 0xffffffff00000000;
            if (plVar10 == (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x188))(plVar1,5,0,&local_res8);
                if (((int)local_res8 == 0) || (lVar11 = FUN_14021a740(), lVar11 == 0)) {
                    local_res8 = local_res8 & 0xffffffff00000000 |
                                 (ulonglong)*(uint *)((longlong)param_1 + 0x16c);
                }
                (**(code **)(*plVar6 + 0x288))(plVar6,&LAB_140379300,param_1);
                uVar15 = 0x20;
                iVar5 = 0;
            }
            else {
                (**(code **)(*plVar1 + 0x188))(plVar1,5,1);
                if (((int)local_res8 == 0) || (lVar11 = FUN_14021a740(), lVar11 == 0)) {
                    local_res8 = CONCAT44(local_res8._4_4_,0x452);
                }
                (**(code **)(*plVar6 + 0x288))(plVar6,&LAB_140379300,param_1);
                lVar11 = (**(code **)(*plVar10 + 0x20))(plVar10);
                uVar15 = 0;
                iVar5 = *(int *)(param_1[2] + 0x370) - *(int *)(lVar11 + 0x1c);
            }
            FUN_1403793c0(param_1,plVar6,local_res8 & 0xffffffff,iVar5,uVar15);
            uVar4 = (**(code **)(*(longlong *)param_1[3] + 200))();
            if ((uVar4 >> 0xb & 1) == 0) {
                (**(code **)(*plVar6 + 0x2e8))(plVar6);
            }
            else {
                (**(code **)(*plVar6 + 0x2e0))();
            }
            (**(code **)(*param_1 + 0x130))(param_1);
        }
        uVar12 = FUN_140376f30(param_1);
        if (-1 < (int)uVar12) {
            local_res8 = param_1[3];
            lVar11 = param_1[2];
            plVar6 = (longlong *)(lVar11 + 0x13e8);
            if (*plVar6 == *(longlong *)(lVar11 + 0x13f0)) {
                FUN_1400290d0(plVar6);
            }
            uVar12 = (**(code **)(lVar11 + 0x1400))(&local_res8);
            lVar2 = *(longlong *)(lVar11 + 0x13f8);
            uVar14 = uVar12 % *(ulonglong *)(lVar11 + 0x13f0);
            puVar9 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar9 != (ulonglong *)0x0) {
                uVar3 = *(ulonglong *)(lVar2 + uVar14 * 8);
                *puVar9 = uVar12;
                puVar9[1] = uVar3;
                puVar9[3] = (ulonglong)param_1;
                puVar9[2] = local_res8;
                puVar13 = puVar9;
            }
            *(ulonglong **)(lVar2 + uVar14 * 8) = puVar13;
            *plVar6 = *plVar6 + 1;
            *(undefined4 *)(param_1 + 9) = 1;
            if (*(int *)((longlong)param_1 + 0x54) == 0) {
                (**(code **)(*param_2 + 0x30))(param_2);
                FUN_1401b6bf0();
            }
            uVar12 = 0;
        }
    }
    return uVar12;
}



undefined8
FUN_140376790(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,int param_6,uint param_7,longlong *param_8)

{
    undefined8 *puVar1;
    uint uVar2;
    longlong *plVar3;
    undefined4 uVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong lVar7;
    int iVar8;
    undefined8 uVar9;
    undefined4 uVar10;
    float fVar11;
    undefined4 uVar12;
    undefined4 uStack60;

    param_1[4] = param_2;
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    param_1[3] = (longlong)puVar1;
    (**(code **)*puVar1)();
    iVar8 = param_6;
    if (param_6 != 0) {
        uVar4 = (**(code **)(*(longlong *)param_1[3] + 0xd8))();
        uVar12 = *(undefined4 *)(param_2 + 0x60);
        param_1[0xb] = CONCAT44(iVar8,uVar4) & 0xffffffffffffff;
        param_1[0xc] = CONCAT44(uStack60,uVar12);
    }
    plVar3 = param_8;
    if ((longlong *)param_1[0x28] != param_8) {
        if (param_8 != (longlong *)0x0) {
            (**(code **)*param_8)(param_8);
        }
        if ((longlong *)param_1[0x28] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x28] + 8))();
        }
        param_1[0x28] = (longlong)plVar3;
    }
    plVar5 = (longlong *)FUN_14018b280(0x40);
    if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
    }
    else {
        plVar5[2] = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
        *plVar5 = (longlong)&PTR_FUN_140b660c0;
        *(undefined (*) [16])(plVar5 + 4) = ZEXT816(0);
        *(undefined (*) [16])(plVar5 + 6) = ZEXT816(0);
    }
    plVar5[1] = (longlong)param_1;
    uVar9 = 2;
    if ((*(uint *)(param_1[2] + 0x80) & 0x8000000) == 0) {
        uVar9 = 0x12;
    }
    uVar9 = (**(code **)(**(longlong **)(param_1[2] + 0x28) + 0x28))
            (*(longlong **)(param_1[2] + 0x28),param_3,plVar5 + 2,uVar9);
    if (-1 < (int)uVar9) {
        *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) & 0xfffffffe;
        param_1[6] = (longlong)plVar5;
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x38))(plVar5);
        uVar2 = param_7;
        if (plVar5 != (longlong *)0x0) {
            plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[3] + 0x20))();
            param_6 = 0;
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x20))(plVar3,5,0,&param_6);
            }
            if (plVar6 == (longlong *)0x0) {
                if ((param_6 == 0) || (lVar7 = FUN_14021a740(), lVar7 == 0)) {
                    (**(code **)(*(longlong *)param_1[3] + 0x188))((longlong *)param_1[3],5,0,&param_6);
                }
                if ((param_6 == 0) || (lVar7 = FUN_14021a740(), lVar7 == 0)) {
                    param_6 = *(int *)((longlong)param_1 + 0x16c);
                }
                (**(code **)(*plVar5 + 0x288))(plVar5,&LAB_140379300,param_1);
                uVar12 = 0x20;
                iVar8 = 0;
            }
            else {
                if ((param_6 == 0) || (lVar7 = FUN_14021a740(), lVar7 == 0)) {
                    (**(code **)(*(longlong *)param_1[3] + 0x188))((longlong *)param_1[3],5,1,&param_6);
                }
                if ((param_6 == 0) || (lVar7 = FUN_14021a740(), lVar7 == 0)) {
                    param_6 = 0x452;
                }
                (**(code **)(*plVar5 + 0x288))(plVar5,&LAB_140379300,param_1);
                lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
                uVar12 = 0;
                iVar8 = *(int *)(param_1[2] + 0x370) - *(int *)(lVar7 + 0x1c);
            }
            FUN_1403793c0(param_1,plVar5,param_6,iVar8,uVar12);
            if ((uVar2 >> 0xb & 1) == 0) {
                (**(code **)(*plVar5 + 0x2e8))(plVar5);
            }
            else {
                (**(code **)(*plVar5 + 0x2e0))();
            }
            (**(code **)(*param_1 + 0x130))(param_1,param_6);
        }
        FUN_1403772e0(param_1,param_4);
        uVar12 = (**(code **)(*param_1 + 200))(param_1,param_5);
        fVar11 = *(float *)(param_2 + 0x80);
        if (fVar11 != *(float *)(param_1 + 0x10)) {
            uVar12 = (**(code **)(*(longlong *)param_1[6] + 0x88))(uVar12,fVar11);
            *(float *)(param_1 + 0x10) = fVar11;
        }
        uVar4 = 0x3f800000;
        if (param_1[5] == 0) {
            uVar10 = 0x3f800000;
        }
        else {
            uVar10 = *(undefined4 *)(param_1[5] + 0x70);
        }
        uVar12 = FUN_140378a60(uVar12,uVar10,param_1);
        if (param_1[5] != 0) {
            uVar4 = *(undefined4 *)(param_1[5] + 0x78);
        }
        FUN_140378ad0(uVar12,uVar4,param_1);
        FUN_140378b40(param_1);
        FUN_140378cc0(param_1);
        FUN_140378e70(param_1);
        iVar8 = *(int *)(param_2 + 0x134);
        if (*(int *)((longlong)param_1 + 0x134) != iVar8) {
            (**(code **)(*(longlong *)param_1[6] + 0xb8))((longlong *)param_1[6],iVar8);
            *(int *)((longlong)param_1 + 0x134) = iVar8;
        }
        FUN_1403773f0(param_1,*(undefined8 *)(param_2 + 0x138));
        (**(code **)(*param_1 + 0x118))(param_1,~(uVar2 >> 5) & 1);
        (**(code **)(*param_1 + 0x128))(param_1,~(uVar2 >> 6) & 1);
        if ((~(uVar2 >> 7) & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x80;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xffffff7f;
        }
        if ((~(uVar2 >> 8) & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x100;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffeff;
        }
        if ((uVar2 >> 9 & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffdff;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x200;
        }
        if ((uVar2 >> 10 & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffbff;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x400;
        }
        if ((uVar2 & 2) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffffd;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 2;
        }
        return 0;
    }
    return uVar9;
}



undefined8
FUN_140376c10(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
              longlong param_5)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    longlong *plVar5;
    undefined4 uStack12;

    if (*param_4 != 0) {
        if (param_5 == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = *(undefined4 *)(param_5 + 0x60);
        }
        *(longlong *)(param_1 + 0x58) = *param_4;
        *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack12,uVar4);
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x40);
    if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        puVar2[2] = 0;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
        *puVar2 = &PTR_FUN_140b660c0;
        *(undefined (*) [16])(puVar2 + 4) = ZEXT816(0);
        *(undefined (*) [16])(puVar2 + 6) = ZEXT816(0);
    }
    if (param_3 == (undefined8 *)0x0) {
        uVar3 = 0x80070057;
    }
    else {
        puVar2[1] = param_1;
        puVar2[2] = param_3;
        (**(code **)*param_3)(param_3);
        *(uint *)(puVar2 + 3) = *(uint *)(puVar2 + 3) & 0xfffffffe;
        *(undefined8 **)(param_1 + 0x30) = puVar2;
        FUN_1403772e0(param_1,param_2);
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x13d8);
        if (*(longlong *)(param_1 + 0x510) == 0) {
            *(longlong **)(param_1 + 0x510) = plVar5;
            plVar1 = (longlong *)(param_1 + 0x518);
            *plVar1 = *plVar5;
            *plVar5 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x510) = plVar1;
            }
        }
        if (param_5 != 0) {
            *(longlong *)(param_1 + 0x28) = param_5;
            plVar5 = (longlong *)(param_5 + 0x40);
            if (*(longlong *)(param_1 + 0x4b0) == 0) {
                *(longlong **)(param_1 + 0x4b0) = plVar5;
                plVar1 = (longlong *)(param_1 + 0x4b8);
                *plVar1 = *plVar5;
                *plVar5 = param_1;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x4b0) = plVar1;
                }
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}



undefined8
FUN_140376d60(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              longlong param_5)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined4 uVar3;
    longlong **pplVar4;
    undefined8 uVar5;
    undefined4 uStack12;

    if (*param_4 != 0) {
        if (param_5 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = *(undefined4 *)(param_5 + 0x60);
        }
        param_1[0xb] = *param_4;
        param_1[0xc] = CONCAT44(uStack12,uVar3);
    }
    plVar2 = (longlong *)FUN_14018b280(0x40);
    if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2[2] = 0;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
        *plVar2 = (longlong)&PTR_FUN_140b660c0;
        *(undefined (*) [16])(plVar2 + 4) = ZEXT816(0);
        *(undefined (*) [16])(plVar2 + 6) = ZEXT816(0);
    }
    plVar2[1] = (longlong)param_1;
    uVar5 = 2;
    if ((*(uint *)(param_1[2] + 0x80) & 0x8000000) == 0) {
        uVar5 = 0x12;
    }
    uVar5 = (**(code **)(**(longlong **)(param_1[2] + 0x28) + 0x28))
            (*(longlong **)(param_1[2] + 0x28),param_3,plVar2 + 2,uVar5);
    if (-1 < (int)uVar5) {
        *(uint *)(plVar2 + 3) = *(uint *)(plVar2 + 3) & 0xfffffffe;
        param_1[6] = (longlong)plVar2;
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x38))(plVar2);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x288))(plVar2,&LAB_140379300,param_1);
            FUN_1403793c0(param_1,plVar2,*(undefined4 *)((longlong)param_1 + 0x16c),0,0x20);
            (**(code **)(*param_1 + 0x130))(param_1,*(undefined4 *)((longlong)param_1 + 0x16c));
        }
        FUN_1403772e0(param_1,param_2);
        pplVar4 = (longlong **)(param_1[2] + 0x13d8);
        if (param_1[0xa2] == 0) {
            param_1[0xa2] = (longlong)pplVar4;
            pplVar1 = (longlong **)(param_1 + 0xa3);
            *pplVar1 = *pplVar4;
            *pplVar4 = param_1;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0xa2] = (longlong)pplVar1;
            }
        }
        if (param_5 != 0) {
            param_1[5] = param_5;
            pplVar4 = (longlong **)(param_5 + 0x40);
            if (param_1[0x96] == 0) {
                param_1[0x96] = (longlong)pplVar4;
                pplVar1 = (longlong **)(param_1 + 0x97);
                *pplVar1 = *pplVar4;
                *pplVar4 = param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[0x96] = (longlong)pplVar1;
                }
            }
        }
        uVar5 = 0;
    }
    return uVar5;
}



ulonglong FUN_140376f30(longlong *param_1)

{
    uint uVar1;
    ulonglong uVar2;
    longlong *plVar3;
    float fVar4;
    longlong *local_res8;
    undefined local_58 [80];

    uVar2 = (**(code **)(*(longlong *)param_1[3] + 0xb0))((longlong *)param_1[3],local_58);
    if ((int)uVar2 < 0) {
        return uVar2;
    }
    FUN_1403772e0(param_1,local_58);
    fVar4 = (float)(**(code **)(*(longlong *)param_1[3] + 0x128))();
    if (fVar4 != *(float *)(param_1 + 0x10)) {
        (**(code **)(*(longlong *)param_1[6] + 0x88))(fVar4,fVar4);
        *(float *)(param_1 + 0x10) = fVar4;
    }
    FUN_140378b40(param_1);
    FUN_140378cc0(param_1);
    uVar2 = 0;
    local_res8 = (longlong *)0x0;
    uVar1 = (**(code **)(*(longlong *)param_1[3] + 400))((longlong *)param_1[3],&local_res8);
    if (-1 < (int)uVar1) {
        FUN_1403773f0(param_1,local_res8);
        uVar1 = (**(code **)(*(longlong *)param_1[3] + 200))();
        (**(code **)(*param_1 + 0x118))(param_1,~(uVar1 >> 5) & 1);
        (**(code **)(*param_1 + 0x128))(param_1,~(uVar1 >> 6) & 1);
        if ((~(uVar1 >> 7) & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x80;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xffffff7f;
        }
        if ((~(uVar1 >> 8) & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x100;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffeff;
        }
        if ((uVar1 >> 9 & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffdff;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x200;
        }
        if ((uVar1 >> 10 & 1) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffbff;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 0x400;
        }
        if ((uVar1 & 2) == 0) {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xfffffffd;
        }
        else {
            *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) | 2;
        }
        plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x38))();
        if (plVar3 != (longlong *)0x0) {
            uVar1 = (**(code **)(*(longlong *)param_1[3] + 200))();
            if ((uVar1 >> 0xb & 1) == 0) {
                (**(code **)(*plVar3 + 0x2e8))(plVar3);
            }
            else {
                (**(code **)(*plVar3 + 0x2e0))();
            }
        }
        uVar1 = (**(code **)(*(longlong *)param_1[6] + 0x20))();
        if (-1 < (int)uVar1) goto LAB_140377113;
    }
    uVar2 = (ulonglong)uVar1;
    LAB_140377113:
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return uVar2;
}



void FUN_140377140(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong *puVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong **ppuVar8;
    undefined8 local_res8;
    int local_18;
    int local_14;
    int local_10;
    int local_c;

    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        local_res8 = *(undefined8 *)(param_1 + 0x18);
        uVar6 = (**(code **)(lVar2 + 0x1400))(&local_res8);
        uVar7 = uVar6 % *(ulonglong *)(lVar2 + 0x13f0);
        ppuVar8 = (ulonglong **)(*(longlong *)(lVar2 + 0x13f8) + uVar7 * 8);
        puVar3 = *(ulonglong **)(*(longlong *)(lVar2 + 0x13f8) + uVar7 * 8);
        while (puVar3 != (ulonglong *)0x0) {
            if ((uVar6 == **ppuVar8) &&
                (iVar5 = (**(code **)(lVar2 + 0x1408))(&local_res8,*ppuVar8 + 2), iVar5 != 0)) {
                puVar3 = *ppuVar8;
                *ppuVar8 = (ulonglong *)puVar3[1];
                FUN_14018b900(puVar3,0);
                *(longlong *)(lVar2 + 0x13e8) = *(longlong *)(lVar2 + 0x13e8) + -1;
                break;
            }
            ppuVar8 = (ulonglong **)(*ppuVar8 + 1);
            puVar3 = *ppuVar8;
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))();
    if (local_14 < local_c) {
        do {
            iVar5 = local_18;
            if (local_18 < local_10) {
                do {
                    lVar2 = *(longlong *)(param_1 + 0x10);
                    if ((((*(int *)(lVar2 + 0x88c) <= iVar5) && (iVar5 < *(int *)(lVar2 + 0x894))) &&
                         (*(int *)(lVar2 + 0x890) <= local_14)) &&
                        ((local_14 < *(int *)(lVar2 + 0x898) &&
                          (iVar1 = *(int *)(lVar2 + 0x89c), iVar4 = local_14 % *(int *)(lVar2 + 0x8a0),
                                  *(longlong *)
                                          (*(longlong *)(lVar2 + 0x8e0) +
                                           (ulonglong)
                                                   ((uint)(iVar5 % iVar1 < 0) * iVar1 +
                                                    ((uint)(iVar4 < 0) * *(int *)(lVar2 + 0x8a0) + iVar4) * iVar1 + iVar5 % iVar1) * 8)
                                  != 0)))) {
                        FUN_140383310();
                    }
                    iVar5 = iVar5 + 1;
                } while (iVar5 < local_10);
            }
            local_14 = local_14 + 1;
        } while (local_14 < local_c);
    }
    return;
}



void FUN_1403772e0(longlong param_1,float *param_2)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    int iVar5;
    undefined auStack136 [32];
    float *local_68 [10];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    pfVar1 = (float *)(param_1 + 0xb0);
    iVar5 = FUN_1407e6af0(pfVar1,param_2,0x40);
    if (iVar5 != 0) {
        fVar2 = param_2[1];
        fVar3 = param_2[2];
        fVar4 = param_2[3];
        *pfVar1 = *param_2;
        *(float *)(param_1 + 0xb4) = fVar2;
        *(float *)(param_1 + 0xb8) = fVar3;
        *(float *)(param_1 + 0xbc) = fVar4;
        fVar2 = param_2[5];
        fVar3 = param_2[6];
        fVar4 = param_2[7];
        *(float *)(param_1 + 0xc0) = param_2[4];
        *(float *)(param_1 + 0xc4) = fVar2;
        *(float *)(param_1 + 200) = fVar3;
        *(float *)(param_1 + 0xcc) = fVar4;
        fVar2 = param_2[9];
        fVar3 = param_2[10];
        fVar4 = param_2[0xb];
        *(float *)(param_1 + 0xd0) = param_2[8];
        *(float *)(param_1 + 0xd4) = fVar2;
        *(float *)(param_1 + 0xd8) = fVar3;
        *(float *)(param_1 + 0xdc) = fVar4;
        fVar2 = param_2[0xd];
        fVar3 = param_2[0xe];
        fVar4 = param_2[0xf];
        *(float *)(param_1 + 0xe0) = param_2[0xc];
        *(float *)(param_1 + 0xe4) = fVar2;
        *(float *)(param_1 + 0xe8) = fVar3;
        *(float *)(param_1 + 0xec) = fVar4;
        local_68[0] = param_2;
        FUN_1401afc20(local_68,param_1 + 0xf0);
        *(float *)(param_1 + 0x130) =
                1.0 / SQRT(*pfVar1 * *pfVar1 + *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0xb4) +
                           0.0);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x80))(*(longlong **)(param_1 + 0x30),param_2);
        if (*(int *)(param_1 + 0x420) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
        }
        if (*(int *)(param_1 + 0x4c) != 0) {
            FUN_140377640(param_1);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack136);
    return;
}



void FUN_1403773f0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong *local_res8;

    uVar7 = 0;
    local_res8 = (longlong *)0x0;
    FUN_1402d9cc0(param_2,*(undefined8 *)(param_1 + 0x140),&local_res8);
    plVar1 = local_res8;
    plVar5 = *(longlong **)(param_1 + 0x138);
    if (plVar5 == (longlong *)0x0) {
        plVar5 = *(longlong **)(DAT_140c657f8 + 0x290);
    }
    plVar6 = local_res8;
    if (local_res8 == (longlong *)0x0) {
        plVar6 = *(longlong **)(DAT_140c657f8 + 0x290);
    }
    if ((plVar5 != plVar6) &&
        ((plVar5[2] != plVar6[2] ||
          (iVar2 = FUN_1407e6af0(plVar5[3],plVar6[3],plVar5[2] * 0xc), iVar2 != 0)))) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0xc0))(*(longlong **)(param_1 + 0x30),plVar1);
        if (*(longlong **)(param_1 + 0x138) != plVar1) {
            if (plVar1 != (longlong *)0x0) {
                (**(code **)*plVar1)(plVar1);
            }
            if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x138) + 8))();
            }
            *(longlong **)(param_1 + 0x138) = plVar1;
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))
                (*(longlong **)(param_1 + 0x138),5,0,param_1 + 0x16c);
        if (((iVar2 == 0) || (*(int *)(param_1 + 0x16c) == 0)) || (lVar3 = FUN_14021a740(), lVar3 == 0))
        {
            *(undefined4 *)(param_1 + 0x16c) = 0x45e;
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
        if (uVar4 != 0) {
            do {
                lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                        (*(longlong **)(param_1 + 0x30),uVar7);
                if (lVar3 != 0) {
                    FUN_1403773f0(lVar3,*(undefined8 *)(param_1 + 0x138));
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar4);
        }
    }
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140377569. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
}



void FUN_140377580(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    uint uVar7;
    undefined local_28 [32];

    uVar7 = 0;
    puVar5 = (undefined4 *)(param_1 + 0x170);
    puVar6 = (undefined4 *)(param_1 + 400);
    do {
        puVar4 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x68))
                (*(longlong **)(param_1 + 0x30),local_28,uVar7);
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        uVar1 = puVar4[5];
        uVar2 = puVar4[6];
        uVar3 = puVar4[7];
        puVar5[4] = puVar4[4];
        puVar5[5] = uVar1;
        puVar5[6] = uVar2;
        puVar5[7] = uVar3;
        puVar4 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))
                (*(longlong **)(param_1 + 0x30),local_28);
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 0x10;
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        *puVar6 = *puVar4;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar6[4] = puVar4[4];
        puVar6 = puVar6 + 0x10;
    } while (uVar7 < 4);
    puVar5 = (undefined4 *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
            (*(longlong **)(param_1 + 0x30),local_28);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)(param_1 + 0x370) = *puVar5;
    *(undefined4 *)(param_1 + 0x374) = uVar1;
    *(undefined4 *)(param_1 + 0x378) = uVar2;
    *(undefined4 *)(param_1 + 0x37c) = uVar3;
    *(undefined4 *)(param_1 + 0x380) = puVar5[4];
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140377640(longlong param_1)

{
    longlong *plVar1;
    float fVar2;
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
    undefined auVar15 [12];
    uint uVar16;
    float *pfVar17;
    undefined4 *puVar18;
    ulonglong uVar19;
    int iVar20;
    int iVar21;
    undefined (*pauVar22) [16];
    longlong *plVar23;
    uint uVar24;
    int iVar25;
    undefined (*pauVar26) [16];
    longlong lVar27;
    float fVar28;
    undefined auVar29 [16];
    float fVar30;
    undefined auVar31 [16];
    undefined auVar32 [16];
    float fVar33;
    float fVar34;
    undefined auVar35 [16];
    undefined auVar36 [16];
    float fVar37;
    float fVar38;
    undefined local_a8 [8];
    float fStack160;
    undefined4 uStack156;
    undefined local_98 [8];
    float fStack144;
    undefined4 uStack140;
    float local_88;
    float fStack128;

    pauVar22 = (undefined (*) [16])(param_1 + 0x270);
    lVar27 = 4;
    pfVar17 = (float *)(param_1 + 0x184);
    pauVar26 = pauVar22;
    do {
        fVar30 = *(float *)(param_1 + 0xb0);
        fVar34 = *(float *)*(undefined (*) [12])(param_1 + 0xe0);
        auVar15 = *(undefined (*) [12])(param_1 + 0xe0);
        fVar2 = pfVar17[-5];
        fVar3 = pfVar17[-1];
        fVar14 = fVar2;
        fVar9 = fVar3;
        if (0.0 < fVar30) {
            fVar14 = fVar3;
            fVar9 = fVar2;
        }
        fVar4 = *(float *)(param_1 + 0xc0);
        fVar5 = *pfVar17;
        fVar28 = pfVar17[-4];
        fVar10 = fVar5;
        fVar37 = fVar28;
        if (0.0 < fVar4) {
            fVar10 = fVar28;
            fVar37 = fVar5;
        }
        fVar6 = pfVar17[-3];
        fVar33 = pfVar17[1];
        fVar38 = *(float *)(param_1 + 0xd0);
        fVar11 = fVar33;
        fVar7 = fVar6;
        if (0.0 < fVar38) {
            fVar11 = fVar6;
            fVar7 = fVar33;
        }
        fVar8 = *(float *)(param_1 + 0xb4);
        _local_98 = CONCAT124(auVar15 >> 0x20,fVar34 + fVar30 * fVar14 + fVar4 * fVar37 + fVar38 * fVar7
        ) & (undefined  [16])0xffffffffffffffff;
        _local_a8 = CONCAT124(auVar15 >> 0x20,fVar34 + fVar30 * fVar9 + fVar4 * fVar10 + fVar38 * fVar11
        ) & (undefined  [16])0xffffffffffffffff;
        fVar30 = fVar3;
        fVar34 = fVar2;
        if (0.0 < fVar8) {
            fVar30 = fVar2;
            fVar34 = fVar3;
        }
        fVar9 = *(float *)(param_1 + 0xc4);
        fVar14 = fVar5;
        fVar4 = fVar28;
        if (0.0 < fVar9) {
            fVar14 = fVar28;
            fVar4 = fVar5;
        }
        fVar10 = *(float *)(param_1 + 0xd4);
        fVar37 = fVar33;
        fVar38 = fVar6;
        if (0.0 < fVar10) {
            fVar37 = fVar6;
            fVar38 = fVar33;
        }
        fVar11 = *(float *)(param_1 + 0xb8);
        fVar7 = fVar3;
        if (0.0 < fVar11) {
            fVar7 = fVar2;
            fVar2 = fVar3;
        }
        fVar3 = *(float *)(param_1 + 200);
        fVar12 = fVar5;
        if (0.0 < fVar3) {
            fVar12 = fVar28;
            fVar28 = fVar5;
        }
        fVar5 = *(float *)(param_1 + 0xd8);
        fVar13 = fVar33;
        if (0.0 < fVar5) {
            fVar13 = fVar6;
            fVar6 = fVar33;
        }
        *(undefined4 *)*pauVar26 = local_a8._0_4_;
        *(float *)(*pauVar26 + 4) = local_a8._4_4_ + fVar8 * fVar30 + fVar9 * fVar14 + fVar10 * fVar37;
        *(float *)(*pauVar26 + 8) = fStack160 + fVar11 * fVar7 + fVar3 * fVar12 + fVar5 * fVar13;
        *(undefined4 *)(*pauVar26 + 0xc) = uStack156;
        *(float *)pauVar26[1] = local_98._0_4_;
        *(float *)(pauVar26[1] + 4) = local_98._4_4_ + fVar8 * fVar34 + fVar9 * fVar4 + fVar10 * fVar38;
        *(float *)(pauVar26[1] + 8) = fStack144 + fVar11 * fVar2 + fVar3 * fVar28 + fVar5 * fVar6;
        *(undefined4 *)(pauVar26[1] + 0xc) = uStack140;
        fVar30 = *(float *)(param_1 + 0xd0);
        fVar34 = *(float *)(param_1 + 0xd4);
        fVar3 = *(float *)(param_1 + 0xc0);
        fVar9 = *(float *)(param_1 + 0xc4);
        fVar2 = *(float *)(param_1 + 0xb0);
        fVar14 = *(float *)(param_1 + 0xb4);
        fVar33 = fVar30 * fVar30 + fVar34 * fVar34 + 0.0;
        fVar28 = fVar3 * fVar3 + fVar9 * fVar9 + 0.0;
        fVar4 = pfVar17[3];
        fVar5 = pfVar17[4];
        fVar10 = pfVar17[5];
        fVar37 = fVar2 * fVar2 + fVar14 * fVar14 + 0.0;
        if (fVar37 <= fVar28) {
            fVar37 = fVar28;
        }
        auVar29 = ZEXT416((uint)fVar37);
        if (fVar37 <= fVar33) {
            auVar29 = ZEXT416((uint)fVar33) & (undefined  [16])0xffffffffffffffff;
        }
        fVar37 = fVar5 * *(float *)(param_1 + 200);
        fVar28 = fVar5 * *(float *)(param_1 + 0xcc);
        auVar29 = sqrtps(CONCAT412(fVar28,CONCAT48(fVar37,CONCAT44(fVar5 * fVar9,fVar5 * fVar3))),
                         auVar29);
        *(undefined (*) [16])(pfVar17 + 0x43) =
                CONCAT412(fVar4 * *(float *)(param_1 + 0xbc) + fVar28 + fVar10 * *(float *)(param_1 + 0xdc)
                          + *(float *)(param_1 + 0xec),
                          CONCAT48(fVar4 * *(float *)(param_1 + 0xb8) + fVar37 +
                                   fVar10 * *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xe8),
                                   CONCAT44(fVar4 * fVar14 + fVar5 * fVar9 + fVar10 * fVar34 +
                                            *(float *)(param_1 + 0xe4),
                                            fVar4 * fVar2 + fVar5 * fVar3 + fVar10 * fVar30 +
                                            *(float *)(param_1 + 0xe0))));
        pfVar17[0x47] = SUB164(auVar29,0) * pfVar17[7];
        lVar27 = lVar27 + -1;
        pfVar17 = pfVar17 + 0x10;
        pauVar26 = pauVar26[4];
    } while (lVar27 != 0);
    fVar30 = *(float *)(param_1 + 0xd0);
    fVar34 = *(float *)(param_1 + 0xd4);
    fVar3 = *(float *)(param_1 + 0xb0);
    fVar9 = *(float *)(param_1 + 0xb4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar14 = *(float *)(param_1 + 0xc4);
    fVar38 = 0.5;
    fVar33 = fVar30 * fVar30 + fVar34 * fVar34 + 0.0;
    fVar28 = fVar2 * fVar2 + fVar14 * fVar14 + 0.0;
    fVar4 = *(float *)(param_1 + 0x370);
    fVar5 = *(float *)(param_1 + 0x374);
    fVar10 = *(float *)(param_1 + 0x378);
    fVar37 = fVar3 * fVar3 + fVar9 * fVar9 + 0.0;
    if (fVar37 <= fVar28) {
        fVar37 = fVar28;
    }
    auVar29 = ZEXT416((uint)fVar37);
    fVar28 = 2048.0;
    if (fVar37 <= fVar33) {
        auVar29 = ZEXT416((uint)fVar33) & (undefined  [16])0xffffffffffffffff;
    }
    fVar37 = fVar5 * *(float *)(param_1 + 200);
    fVar33 = fVar5 * *(float *)(param_1 + 0xcc);
    auVar29 = sqrtps(CONCAT412(fVar33,CONCAT48(fVar37,CONCAT44(fVar5 * fVar14,fVar5 * fVar2))),auVar29
    );
    *(undefined (*) [16])(param_1 + 0x390) =
            CONCAT412(fVar4 * *(float *)(param_1 + 0xbc) + fVar33 + fVar10 * *(float *)(param_1 + 0xdc) +
                      *(float *)(param_1 + 0xec),
                      CONCAT48(fVar4 * *(float *)(param_1 + 0xb8) + fVar37 +
                               fVar10 * *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xe8),
                               CONCAT44(fVar4 * fVar9 + fVar5 * fVar14 + fVar10 * fVar34 +
                                        *(float *)(param_1 + 0xe4),
                                        fVar4 * fVar3 + fVar5 * fVar2 + fVar10 * fVar30 +
                                        *(float *)(param_1 + 0xe0))));
    *(float *)(param_1 + 0x3a0) = SUB164(auVar29,0) * *(float *)(param_1 + 0x380);
    fVar30 = DAT_140c43fb8;
    if ((param_1 == *(longlong *)(param_1 + 0x20)) &&
        (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
        puVar18 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))();
        fVar30 = DAT_140c43fb8;
        *(undefined4 *)(param_1 + 0x3b0) = *puVar18;
        *(undefined4 *)(param_1 + 0x3b4) = puVar18[1];
        *(undefined4 *)(param_1 + 0x3b8) = puVar18[2];
        uVar16 = puVar18[3];
    }
    else {
        uVar19 = 3;
        auVar29 = _DAT_140c798c0;
        auVar31 = _DAT_140c798d0;
        do {
            auVar31 = maxps(auVar31,pauVar22[1]);
            auVar29 = minps(auVar29,*pauVar22);
            pauVar22 = pauVar22[4];
            uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        local_98._0_4_ = SUB164(auVar29,0);
        auVar35 = ZEXT416((uint)(local_98._0_4_ * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
        fVar34 = (SUB164(auVar35,0) + 0.5) * 2048.0;
        auVar32 = CONCAT124(SUB1612(auVar35 >> 0x20,0),fVar34);
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(0,CONCAT88(SUB168(auVar35 >> 0x40,0),
                                         SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                                (undefined  [16])0xffffffffffffffff);
            uVar19 = (ulonglong)(uVar16 & 1);
            auVar32 = ZEXT416((uint)(float)(iVar21 - (uVar16 & 1)));
        }
        uVar16 = (uint)uVar19;
        fStack144 = SUB164(auVar29 >> 0x40,0);
        auVar29 = ZEXT416((uint)(fStack144 * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
        fVar34 = (SUB164(auVar29,0) + 0.5) * 2048.0;
        auVar35 = CONCAT124(SUB1612(auVar29 >> 0x20,0),fVar34);
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(uVar16,CONCAT88(SUB168(auVar29 >> 0x40,0),
                                              SUB168(auVar35,0) | SUB168(auVar35,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
            uVar16 = uVar16 & 1;
            auVar35 = ZEXT416((uint)(float)(iVar21 - uVar16));
        }
        local_88 = SUB164(auVar31,0);
        auVar29 = ZEXT416((uint)(local_88 * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
        fVar34 = (SUB164(auVar29,0) + 0.5) * 2048.0;
        auVar36 = CONCAT124(SUB1612(auVar29 >> 0x20,0),fVar34);
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(uVar16,CONCAT88(SUB168(auVar29 >> 0x40,0),
                                              SUB168(auVar36,0) | SUB168(auVar36,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
            uVar16 = uVar16 & 1;
            auVar36 = ZEXT416((uint)(float)(iVar21 - uVar16));
        }
        fStack128 = SUB164(auVar31 >> 0x40,0);
        auVar29 = ZEXT416((uint)(fStack128 * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
        fVar34 = (SUB164(auVar29,0) + 0.5) * 2048.0;
        auVar31 = CONCAT124(SUB1612(auVar29 >> 0x20,0),fVar34);
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(uVar16,CONCAT88(SUB168(auVar29 >> 0x40,0),
                                              SUB168(auVar31,0) | SUB168(auVar31,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
            auVar31 = ZEXT416((uint)(float)(iVar21 - (uVar16 & 1)));
        }
        *(int *)(param_1 + 0x3b0) = (int)SUB164(auVar32,0);
        *(int *)(param_1 + 0x3b4) = (int)SUB164(auVar35,0);
        *(int *)(param_1 + 0x3b8) = (int)SUB164(auVar36,0) + 1;
        uVar16 = (int)SUB164(auVar31,0) + 1;
    }
    *(uint *)(param_1 + 0x3bc) = uVar16;
    iVar21 = *(int *)(param_1 + 0x3b8);
    if (DAT_140c44548 < *(int *)(param_1 + 0x3b8)) {
        iVar21 = DAT_140c44548;
    }
    uVar24 = uVar16;
    if ((int)DAT_140c4454c < (int)uVar16) {
        uVar24 = DAT_140c4454c;
    }
    iVar25 = *(int *)(param_1 + 0x3b0);
    if (*(int *)(param_1 + 0x3b0) < DAT_140c44540) {
        iVar25 = DAT_140c44540;
    }
    iVar20 = *(int *)(param_1 + 0x3b4);
    if (*(int *)(param_1 + 0x3b4) < DAT_140c44544) {
        iVar20 = DAT_140c44544;
    }
    if ((iVar25 < iVar21) && (iVar20 < (int)uVar24)) {
        *(int *)(param_1 + 0x3b0) = iVar25;
        *(int *)(param_1 + 0x3b4) = iVar20;
        *(int *)(param_1 + 0x3b8) = iVar21;
        *(uint *)(param_1 + 0x3bc) = uVar24;
    }
    else {
        *(undefined4 *)(param_1 + 0x3b0) = DAT_140c784c0;
        *(undefined4 *)(param_1 + 0x3b4) = DAT_140c784c4;
        *(undefined4 *)(param_1 + 0x3b8) = DAT_140c784c8;
        uVar16 = DAT_140c784cc;
        *(uint *)(param_1 + 0x3bc) = DAT_140c784cc;
    }
    if (((*(float *)(param_1 + 0x330) <= *(float *)(param_1 + 0x340) &&
          *(float *)(param_1 + 0x340) != *(float *)(param_1 + 0x330)) &&
         (*(float *)(param_1 + 0x334) <= *(float *)(param_1 + 0x344) &&
          *(float *)(param_1 + 0x344) != *(float *)(param_1 + 0x334))) &&
        (*(float *)(param_1 + 0x338) <= *(float *)(param_1 + 0x348) &&
         *(float *)(param_1 + 0x348) != *(float *)(param_1 + 0x338))) {
        fVar34 = (fVar30 * *(float *)(param_1 + 0x330) + fVar38) * fVar28;
        auVar29 = ZEXT416((uint)fVar34) & (undefined  [16])0xffffffffffffffff;
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(uVar16,ZEXT816(SUB168(auVar29,0) | SUB168(auVar29,0) << 0x20));
            uVar16 = uVar16 & 1;
            auVar29 = ZEXT416((uint)(float)(iVar21 - uVar16));
        }
        auVar31 = ZEXT416((uint)(fVar30 * *(float *)(param_1 + 0x338))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar34 = (SUB164(auVar31,0) + fVar38) * fVar28;
        auVar35 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar34);
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(uVar16,CONCAT88(SUB168(auVar31 >> 0x40,0),
                                              SUB168(auVar35,0) | SUB168(auVar35,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
            uVar16 = uVar16 & 1;
            auVar35 = ZEXT416((uint)(float)(iVar21 - uVar16));
        }
        auVar31 = ZEXT416((uint)(fVar30 * *(float *)(param_1 + 0x340))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar34 = (SUB164(auVar31,0) + fVar38) * fVar28;
        auVar32 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar34);
        iVar21 = (int)fVar34;
        if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
            uVar16 = movmskps(uVar16,CONCAT88(SUB168(auVar31 >> 0x40,0),
                                              SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
            uVar16 = uVar16 & 1;
            auVar32 = ZEXT416((uint)(float)(iVar21 - uVar16));
        }
        auVar31 = ZEXT416((uint)(fVar30 * *(float *)(param_1 + 0x348))) &
                  (undefined  [16])0xffffffffffffffff;
        iVar21 = (int)SUB164(auVar32,0) + 1;
        fVar28 = (SUB164(auVar31,0) + fVar38) * fVar28;
        auVar32 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar28);
        iVar25 = (int)fVar28;
        if ((iVar25 != -0x80000000) && ((float)iVar25 != fVar28)) {
            uVar16 = movmskps(uVar16,CONCAT88(SUB168(auVar31 >> 0x40,0),
                                              SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
            auVar32 = ZEXT416((uint)(float)(iVar25 - (uVar16 & 1)));
        }
        *(int *)(param_1 + 0x3c0) = (int)SUB164(auVar29,0);
        *(int *)(param_1 + 0x3c4) = (int)SUB164(auVar35,0);
        *(int *)(param_1 + 0x3c8) = iVar21;
        uVar16 = (int)SUB164(auVar32,0) + 1;
        *(uint *)(param_1 + 0x3cc) = uVar16;
        if (DAT_140c44548 < iVar21) {
            iVar21 = DAT_140c44548;
        }
        if ((int)DAT_140c4454c < (int)uVar16) {
            uVar16 = DAT_140c4454c;
        }
        iVar25 = *(int *)(param_1 + 0x3c0);
        if (*(int *)(param_1 + 0x3c0) < DAT_140c44540) {
            iVar25 = DAT_140c44540;
        }
        iVar20 = *(int *)(param_1 + 0x3c4);
        if (*(int *)(param_1 + 0x3c4) < DAT_140c44544) {
            iVar20 = DAT_140c44544;
        }
        if ((iVar25 < iVar21) && (iVar20 < (int)uVar16)) {
            *(int *)(param_1 + 0x3c0) = iVar25;
            *(int *)(param_1 + 0x3c4) = iVar20;
            *(int *)(param_1 + 0x3c8) = iVar21;
            *(uint *)(param_1 + 0x3cc) = uVar16;
            goto LAB_140377ebb;
        }
    }
    *(undefined4 *)(param_1 + 0x3c0) = DAT_140c784c0;
    *(undefined4 *)(param_1 + 0x3c4) = DAT_140c784c4;
    *(undefined4 *)(param_1 + 0x3c8) = DAT_140c784c8;
    *(uint *)(param_1 + 0x3cc) = DAT_140c784cc;
    LAB_140377ebb:
    if (*(longlong *)(param_1 + 0x500) == 0) {
        plVar1 = (longlong *)(param_1 + 0x508);
        plVar23 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x13e0);
        *(longlong **)(param_1 + 0x500) = plVar23;
        *plVar1 = *plVar23;
        *plVar23 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x500) = plVar1;
        }
    }
    if (*(longlong *)(param_1 + 0x4a0) == 0) {
        plVar1 = (longlong *)(param_1 + 0x4a8);
        plVar23 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x13b0);
        *(longlong **)(param_1 + 0x4a0) = plVar23;
        *plVar1 = *plVar23;
        *plVar23 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x4a0) = plVar1;
        }
    }
    return;
}



void FUN_140377f70(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
        FUN_140378110();
        FUN_1403786a0(param_1);
        if (*(undefined8 **)(param_1 + 0x4a0) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x4a8);
        }
        if (*(longlong *)(param_1 + 0x4a8) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 0x4a0) = *(undefined8 *)(param_1 + 0x4a0);
        }
        *(undefined8 *)(param_1 + 0x4a0) = 0;
        *(undefined8 *)(param_1 + 0x4a8) = 0;
    }
    return;
}



void FUN_140377fe0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_140378110();
        FUN_1403786a0(param_1);
        if (*(undefined8 **)(param_1 + 0x4a0) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x4a8);
        }
        if (*(longlong *)(param_1 + 0x4a8) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 0x4a0) = *(undefined8 *)(param_1 + 0x4a0);
        }
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x4a0) = 0;
        *(undefined8 *)(param_1 + 0x4a8) = 0;
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
        if (uVar1 != 0) {
            do {
                lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                        (*(longlong **)(param_1 + 0x30),uVar3);
                if (lVar2 != 0) {
                    FUN_140377fe0(lVar2);
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar1);
        }
    }
    return;
}



void FUN_1403780a0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_140377f70();
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
        uVar3 = 0;
        if (uVar1 != 0) {
            do {
                lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                        (*(longlong **)(param_1 + 0x30),uVar3);
                if (lVar2 != 0) {
                    FUN_1403780a0(lVar2);
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar1);
        }
    }
    return;
}



void FUN_140378110(longlong *param_1)

{
    longlong **pplVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint *puVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    uint uVar10;
    int iVar11;
    longlong **pplVar12;
    uint *puVar13;
    longlong **pplVar14;
    longlong *plVar15;
    longlong *plVar16;
    int local_res8;
    int local_resc;

    if ((param_1[3] != 0) && (*(int *)(param_1[4] + 0x41c) == 0)) {
        if (param_1[0x87] != 0) {
            FUN_140376280();
            *(undefined4 *)((longlong)param_1 + 0x424) = DAT_140c784c0;
            *(undefined4 *)(param_1 + 0x85) = DAT_140c784c4;
            *(undefined4 *)((longlong)param_1 + 0x42c) = DAT_140c784c8;
            *(undefined4 *)(param_1 + 0x86) = DAT_140c784cc;
            param_1[0x87] = 0;
        }
        if (param_1[0x8a] == 0) {
            return;
        }
        FUN_1403762e0();
        *(undefined4 *)(param_1 + 0x88) = DAT_140c784c0;
        *(undefined4 *)((longlong)param_1 + 0x444) = DAT_140c784c4;
        *(undefined4 *)(param_1 + 0x89) = DAT_140c784c8;
        *(undefined4 *)((longlong)param_1 + 0x44c) = DAT_140c784cc;
        param_1[0x8a] = 0;
        return;
    }
    plVar15 = (longlong *)0x0;
    if ((*(longlong *)((longlong)param_1 + 0x424) != param_1[0x76]) ||
        (*(longlong *)((longlong)param_1 + 0x42c) != param_1[0x77])) {
        if (param_1[0x87] != 0) {
            FUN_140376280();
        }
        *(undefined4 *)((longlong)param_1 + 0x424) = *(undefined4 *)(param_1 + 0x76);
        *(undefined4 *)(param_1 + 0x85) = *(undefined4 *)((longlong)param_1 + 0x3b4);
        *(undefined4 *)((longlong)param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x77);
        *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)((longlong)param_1 + 0x3bc);
        uVar10 = (*(int *)((longlong)param_1 + 0x3bc) - *(int *)((longlong)param_1 + 0x3b4)) *
                 (*(int *)(param_1 + 0x77) - *(int *)(param_1 + 0x76));
        if (uVar10 == 0) {
            LAB_1403782c9:
            puVar13 = (uint *)0x0;
        }
        else {
            uVar3 = SUB168(ZEXT816(0x20) * ZEXT416(uVar10),0);
            if (SUB168(ZEXT816(0x20) * ZEXT416(uVar10) >> 0x40,0) != 0) {
                uVar3 = 0xffffffffffffffff;
            }
            lVar4 = uVar3 + 8;
            if (0xfffffffffffffff7 < uVar3) {
                lVar4 = -1;
            }
            puVar5 = (uint *)FUN_14018b280(lVar4,0);
            if (puVar5 == (uint *)0x0) goto LAB_1403782c9;
            iVar11 = uVar10 - 1;
            *puVar5 = uVar10;
            puVar13 = puVar5 + 2;
            if (-1 < iVar11) {
                puVar8 = (undefined8 *)(puVar5 + 6);
                do {
                    iVar11 = iVar11 + -1;
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[-2] = 0;
                    puVar8[-1] = 0;
                    puVar8 = puVar8 + 4;
                } while (-1 < iVar11);
            }
        }
        local_resc = *(int *)((longlong)param_1 + 0x3b4);
        param_1[0x87] = (longlong)puVar13;
        plVar16 = plVar15;
        if (local_resc < *(int *)((longlong)param_1 + 0x3bc)) {
            do {
                local_res8 = *(int *)(param_1 + 0x76);
                if (local_res8 < *(int *)(param_1 + 0x77)) {
                    do {
                        lVar4 = param_1[2];
                        plVar7 = plVar15;
                        if ((((DAT_140c44530 <= local_res8) && (local_res8 < DAT_140c44538)) &&
                             (plVar7 = (longlong *)0x0, DAT_140c44534 <= local_resc)) &&
                            (local_resc < DAT_140c4453c)) {
                            uVar3 = (**(code **)(lVar4 + 0x950))();
                            for (puVar2 = *(ulonglong **)
                                    (*(longlong *)(lVar4 + 0x948) +
                                     (uVar3 % *(ulonglong *)(lVar4 + 0x940)) * 8);
                                 puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                                if ((uVar3 == *puVar2) && (iVar11 = (**(code **)(lVar4 + 0x958))(), iVar11 != 0)) {
                                    if ((longlong **)(puVar2 + 3) != (longlong **)0x0) {
                                        plVar7 = (longlong *)puVar2[3];
                                        (**(code **)*plVar7)();
                                        goto LAB_1403783cb;
                                    }
                                    break;
                                }
                            }
                            lVar6 = FUN_14018b280();
                            if (lVar6 == 0) {
                                plVar7 = (longlong *)0x0;
                            }
                            else {
                                plVar7 = (longlong *)FUN_14038f6a0(lVar6,lVar4,&local_res8);
                            }
                        }
                        LAB_1403783cb:
                        lVar4 = (longlong)plVar16 * 0x20;
                        plVar16 = (longlong *)(ulonglong)((int)plVar16 + 1);
                        FUN_14038f600(lVar4 + param_1[0x87],plVar7,param_1);
                        if (plVar7 != (longlong *)0x0) {
                            (**(code **)(*plVar7 + 8))();
                        }
                        local_res8 = local_res8 + 1;
                    } while (local_res8 < *(int *)(param_1 + 0x77));
                }
                local_resc = local_resc + 1;
            } while (local_resc < *(int *)((longlong)param_1 + 0x3bc));
        }
    }
    if ((param_1[0x88] == param_1[0x78]) && (param_1[0x89] == param_1[0x79])) {
        return;
    }
    if (param_1[0x8a] != 0) {
        FUN_1403762e0();
    }
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x76);
    *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)((longlong)param_1 + 0x3b4);
    *(undefined4 *)(param_1 + 0x89) = *(undefined4 *)(param_1 + 0x77);
    *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)((longlong)param_1 + 0x3bc);
    uVar10 = (*(int *)((longlong)param_1 + 0x3cc) - *(int *)((longlong)param_1 + 0x3c4)) *
             (*(int *)(param_1 + 0x79) - *(int *)(param_1 + 0x78));
    if (uVar10 != 0) {
        uVar3 = SUB168(ZEXT816(0x20) * ZEXT416(uVar10),0);
        if (SUB168(ZEXT816(0x20) * ZEXT416(uVar10) >> 0x40,0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        lVar4 = uVar3 + 8;
        if (0xfffffffffffffff7 < uVar3) {
            lVar4 = -1;
        }
        puVar5 = (uint *)FUN_14018b280(lVar4,0);
        if (puVar5 != (uint *)0x0) {
            iVar11 = uVar10 - 1;
            *puVar5 = uVar10;
            puVar13 = puVar5 + 2;
            if (-1 < iVar11) {
                puVar8 = (undefined8 *)(puVar5 + 6);
                do {
                    iVar11 = iVar11 + -1;
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[-2] = 0;
                    puVar8 = puVar8 + 4;
                } while (-1 < iVar11);
            }
            goto LAB_1403784f8;
        }
    }
    puVar13 = (uint *)0x0;
    LAB_1403784f8:
    local_resc = *(int *)((longlong)param_1 + 0x3c4);
    param_1[0x8a] = (longlong)puVar13;
    plVar16 = plVar15;
    if (local_resc < *(int *)((longlong)param_1 + 0x3cc)) {
        do {
            local_res8 = *(int *)(param_1 + 0x78);
            plVar7 = plVar16;
            if (local_res8 < *(int *)(param_1 + 0x79)) {
                do {
                    lVar4 = param_1[2];
                    plVar9 = plVar15;
                    if ((((DAT_140c44530 <= local_res8) && (local_res8 < DAT_140c44538)) &&
                         (plVar9 = (longlong *)0x0, DAT_140c44534 <= local_resc)) &&
                        (local_resc < DAT_140c4453c)) {
                        uVar3 = (**(code **)(lVar4 + 0x950))(&local_res8);
                        for (puVar2 = *(ulonglong **)
                                (*(longlong *)(lVar4 + 0x948) +
                                 (uVar3 % *(ulonglong *)(lVar4 + 0x940)) * 8); puVar2 != (ulonglong *)0x0;
                             puVar2 = (ulonglong *)puVar2[1]) {
                            if ((uVar3 == *puVar2) &&
                                (iVar11 = (**(code **)(lVar4 + 0x958))(&local_res8), iVar11 != 0)) {
                                if ((longlong **)(puVar2 + 3) != (longlong **)0x0) {
                                    plVar9 = (longlong *)puVar2[3];
                                    (**(code **)*plVar9)(plVar9);
                                    goto LAB_1403785fb;
                                }
                                break;
                            }
                        }
                        lVar6 = FUN_14018b280(0x70);
                        if (lVar6 == 0) {
                            plVar9 = (longlong *)0x0;
                        }
                        else {
                            plVar9 = (longlong *)FUN_14038f6a0(lVar6,lVar4,&local_res8);
                        }
                    }
                    LAB_1403785fb:
                    plVar16 = (longlong *)(ulonglong)((int)plVar7 + 1);
                    pplVar14 = (longlong **)((longlong)plVar7 * 0x20 + param_1[0x8a]);
                    *pplVar14 = plVar9;
                    pplVar14[1] = param_1;
                    (**(code **)*plVar9)(plVar9);
                    pplVar12 = (longlong **)(*pplVar14 + 7);
                    if (pplVar14[2] == (longlong *)0x0) {
                        pplVar14[2] = (longlong *)pplVar12;
                        pplVar1 = pplVar14 + 3;
                        *pplVar1 = *pplVar12;
                        *pplVar12 = (longlong *)pplVar14;
                        if (*pplVar1 != (longlong *)0x0) {
                            (*pplVar1)[2] = (longlong)pplVar1;
                        }
                    }
                    (**(code **)(*plVar9 + 8))();
                    local_res8 = local_res8 + 1;
                    plVar7 = plVar16;
                } while (local_res8 < *(int *)(param_1 + 0x79));
            }
            local_resc = local_resc + 1;
        } while (local_resc < *(int *)((longlong)param_1 + 0x3cc));
    }
    return;
}



void FUN_1403786a0(longlong param_1)

{
    float *pfVar1;
    longlong *plVar2;
    bool bVar3;
    int iVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    longlong lVar7;
    float *pfVar8;
    undefined auVar9 [16];
    undefined auVar10 [16];
    float fVar11;
    float fVar12;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    undefined local_28 [16];
    undefined local_18 [16];

    if (*(int *)(param_1 + 0x458) == 0) {
        lVar7 = *(longlong *)(param_1 + 0x460);
        while (lVar7 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x460);
            if (lVar7 != 0) {
                FUN_14038fbf0(lVar7);
                FUN_14018b900(lVar7,0);
            }
            lVar7 = *(longlong *)(param_1 + 0x460);
        }
        if (((*(longlong *)(param_1 + 0x18) != 0) &&
             (*(int *)(*(longlong *)(param_1 + 0x20) + 0x41c) == 0)) ||
            (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(), iVar4 == 1)) {
            *(undefined4 *)(param_1 + 0x418) = 1;
            return;
        }
        pfVar8 = (float *)(param_1 + 0x1f0);
        pfVar1 = (float *)(param_1 + 0x1b0);
        if (((*(float *)(param_1 + 0x200) < *pfVar8 || *(float *)(param_1 + 0x200) == *pfVar8) ||
             (*(float *)(param_1 + 0x204) < *(float *)(param_1 + 500) ||
              *(float *)(param_1 + 0x204) == *(float *)(param_1 + 500))) ||
            (*(float *)(param_1 + 0x208) < *(float *)(param_1 + 0x1f8) ||
             *(float *)(param_1 + 0x208) == *(float *)(param_1 + 0x1f8))) {
            if (((*(float *)(param_1 + 0x1c0) < *pfVar1 || *(float *)(param_1 + 0x1c0) == *pfVar1) ||
                 (*(float *)(param_1 + 0x1c4) < *(float *)(param_1 + 0x1b4) ||
                  *(float *)(param_1 + 0x1c4) == *(float *)(param_1 + 0x1b4))) ||
                (*(float *)(param_1 + 0x1c8) < *(float *)(param_1 + 0x1b8) ||
                 *(float *)(param_1 + 0x1c8) == *(float *)(param_1 + 0x1b8))) {
                bVar3 = true;
            }
            else {
                bVar3 = false;
            }
            pfVar8 = (float *)(param_1 + 0x170);
            if (!bVar3) {
                pfVar8 = pfVar1;
            }
        }
        if (*(longlong *)(param_1 + 0x18) == 0) {
            uVar6 = FUN_140358b00(*(undefined8 *)(param_1 + 0x10),pfVar8,param_1 + 0xb0);
        }
        else {
            fVar11 = (pfVar8[4] + *pfVar8) * 0.5;
            fVar12 = (pfVar8[5] + pfVar8[1]) * 0.5;
            local_38 = fVar12 * *(float *)(param_1 + 0xc0) + fVar11 * *(float *)(param_1 + 0xb0) +
                       *(float *)(param_1 + 0xd0) * 0.0 + *(float *)(param_1 + 0xe0);
            fStack52 = fVar12 * *(float *)(param_1 + 0xc4) + fVar11 * *(float *)(param_1 + 0xb4) +
                       *(float *)(param_1 + 0xd4) * 0.0 + *(float *)(param_1 + 0xe4);
            fStack48 = fVar12 * *(float *)(param_1 + 200) + fVar11 * *(float *)(param_1 + 0xb8) +
                       *(float *)(param_1 + 0xd8) * 0.0 + *(float *)(param_1 + 0xe8);
            fStack44 = fVar12 * *(float *)(param_1 + 0xcc) + fVar11 * *(float *)(param_1 + 0xbc) +
                       *(float *)(param_1 + 0xdc) * 0.0 + *(float *)(param_1 + 0xec);
            uVar6 = FUN_1403589f0(*(undefined8 *)(param_1 + 0x10),&local_38);
        }
        auVar10 = maxps(*(undefined (*) [16])(param_1 + 0x280),*(undefined (*) [16])(param_1 + 0x2c0));
        auVar9 = minps(*(undefined (*) [16])(param_1 + 0x270),*(undefined (*) [16])(param_1 + 0x2b0));
        local_18 = maxps(auVar10,*(undefined (*) [16])(param_1 + 0x300));
        local_28 = minps(auVar9,*(undefined (*) [16])(param_1 + 0x2f0));
        uVar5 = FUN_140359110(SUB168(local_28,0),SUB168(local_18,0),*(undefined8 *)(param_1 + 0x10),
                              uVar6,local_28);
        *(undefined4 *)(param_1 + 0x418) = uVar5;
        for (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x1550); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[0x27]) {
            iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
            if ((iVar4 == 0) && (lVar7 = FUN_14018b280(0x30,0), lVar7 != 0)) {
                FUN_14038fb20(lVar7,plVar2,param_1);
            }
        }
    }
    return;
}



void FUN_1403788a0(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    undefined4 local_48;
    undefined4 local_44;
    float local_40;
    undefined4 local_38 [2];
    longlong local_30;
    undefined *local_28;
    undefined8 local_20;

    if (*(int *)(param_1 + 0x4c) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar1 + 0x648) == 0) {
            if ((*(int *)(lVar1 + 0xa0) != 0) || (16.0 <= *(float *)(lVar1 + 0x3bc))) {
                fVar2 = *(float *)(param_1 + 0x390) - *(float *)(lVar1 + 0x390);
                fVar3 = *(float *)(param_1 + 0x394) - *(float *)(lVar1 + 0x394);
                fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + 0.0);
            }
            else {
                fVar2 = *(float *)(param_1 + 0x390) - *(float *)(lVar1 + 0x360);
                fVar3 = *(float *)(param_1 + 0x394) - *(float *)(lVar1 + 0x364);
                fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + 0.0) - *(float *)(lVar1 + 0x3bc);
            }
            fVar2 = (float)((uint)(fVar2 - *(float *)(param_1 + 0x3a0)) & 0xfff00000);
            if (fVar2 <= *(float *)(lVar1 + 0x64c)) {
                fVar2 = *(float *)(lVar1 + 0x64c);
            }
        }
        else {
            fVar2 = 1.0;
        }
        local_48 = *(undefined4 *)(lVar1 + 0x774);
        local_44 = *(undefined4 *)(lVar1 + 0x778);
        local_40 = fVar2 * *(float *)(param_1 + 0x130) * *(float *)(lVar1 + 0x77c);
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))(*(longlong **)(param_1 + 0x30),&local_48);
        if (*(undefined8 **)(param_1 + 0x500) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x500) = *(undefined8 *)(param_1 + 0x508);
        }
        if (*(longlong *)(param_1 + 0x508) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x500) = *(undefined8 *)(param_1 + 0x500);
        }
        *(undefined8 *)(param_1 + 0x500) = 0;
        *(undefined8 *)(param_1 + 0x508) = 0;
        local_38[0] = 0;
        fVar2 = fVar2 * 250.0 * 0.03125;
        local_20 = 0;
        if (fVar2 <= 250.0) {
            fVar2 = 250.0;
        }
        local_28 = &LAB_140378fb0;
        if (8000.0 <= fVar2) {
            fVar2 = 8000.0;
        }
        local_30 = param_1;
        FUN_140195960(param_1 + 0x3d0,(longlong)fVar2,local_38,4);
    }
    return;
}



void FUN_140378a60(undefined8 param_1,float param_2,longlong param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 extraout_XMM0_Qa;

    *(float *)(param_3 + 0x70) = param_2 * *(float *)(param_3 + 0x6c);
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x48))();
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            lVar2 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x50))
                    (*(longlong **)(param_3 + 0x30),uVar3);
            if (lVar2 != 0) {
                FUN_140378a60(extraout_XMM0_Qa,*(undefined4 *)(param_3 + 0x70),lVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return;
}



void FUN_140378ad0(undefined8 param_1,float param_2,longlong param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 extraout_XMM0_Qa;

    *(float *)(param_3 + 0x78) = param_2 * *(float *)(param_3 + 0x74);
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x48))();
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            lVar2 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x50))
                    (*(longlong **)(param_3 + 0x30),uVar3);
            if (lVar2 != 0) {
                FUN_140378ad0(extraout_XMM0_Qa,*(undefined4 *)(param_3 + 0x78),lVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return;
}



void FUN_140378b40(float param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined4 extraout_XMM0_Da;
    float fVar5;

    fVar5 = 1.0;
    for (plVar1 = *(longlong **)(param_2 + 0x28); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[5]) {
        fVar5 = fVar5 * *(float *)((longlong)plVar1 + 0x7c);
        if (plVar1[3] != 0) {
            param_1 = (float)(**(code **)(*plVar1 + 0xb0))(plVar1);
            fVar5 = fVar5 * param_1;
        }
    }
    fVar5 = fVar5 * *(float *)(param_2 + 0x7c);
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
        param_1 = (float)(**(code **)(**(longlong **)(param_2 + 0x18) + 0x118))();
        fVar5 = fVar5 * param_1;
    }
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x98))(param_1,fVar5);
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x48))();
    uVar4 = 0;
    if (uVar2 != 0) {
        do {
            lVar3 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x50))
                    (*(longlong **)(param_2 + 0x30),uVar4);
            if (lVar3 != 0) {
                FUN_140378c20(extraout_XMM0_Da,fVar5,lVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
    }
    return;
}



void FUN_140378c20(float param_1,float param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 extraout_XMM0_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    param_2 = param_2 * *(float *)(param_3 + 0x7c);
    if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0) {
        param_1 = (float)(**(code **)(**(longlong **)(param_3 + 0x18) + 0x118))();
        param_2 = param_2 * param_1;
    }
    (**(code **)(**(longlong **)(param_3 + 0x30) + 0x98))(param_1,param_2);
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x30) + 0x48))();
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            lVar2 = **(longlong **)(param_3 + 0x30);
            lVar2 = (**(code **)(lVar2 + 0x50))(*(longlong **)(param_3 + 0x30),uVar3,lVar2,param_6,auVar4)
                    ;
            if (lVar2 != 0) {
                FUN_140378c20(extraout_XMM0_Da,param_2,lVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140378cc0(longlong param_1)

{
    longlong *plVar1;
    float *pfVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined local_38 [8];
    float fStack48;
    float fStack44;
    undefined local_28 [32];

    fVar6 = 1.0;
    fVar7 = 1.0;
    fVar8 = 1.0;
    fVar9 = 1.0;
    for (lVar4 = *(longlong *)(param_1 + 0x28); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
        plVar1 = *(longlong **)(lVar4 + 0x18);
        fVar6 = *(float *)(lVar4 + 0x90) * fVar6;
        fVar7 = *(float *)(lVar4 + 0x94) * fVar7;
        fVar8 = *(float *)(lVar4 + 0x98) * fVar8;
        fVar9 = *(float *)(lVar4 + 0x9c) * fVar9;
        if (plVar1 != (longlong *)0x0) {
            pfVar2 = (float *)(**(code **)(*plVar1 + 0x108))(plVar1,local_38);
            fVar6 = *pfVar2 * fVar6;
            fVar7 = pfVar2[1] * fVar7;
            fVar8 = pfVar2[2] * fVar8;
            fVar9 = pfVar2[3] * fVar9;
        }
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
    _local_38 = CONCAT412(*(float *)(param_1 + 0x9c) * fVar9,
                          CONCAT48(*(float *)(param_1 + 0x98) * fVar8,
                                   CONCAT44(*(float *)(param_1 + 0x94) * fVar7,
                                            *(float *)(param_1 + 0x90) * fVar6)));
    if (plVar1 != (longlong *)0x0) {
        pfVar2 = (float *)(**(code **)(*plVar1 + 0x108))(plVar1,local_28);
        _local_38 = CONCAT412(pfVar2[3] * fStack44,
                              CONCAT48(pfVar2[2] * fStack48,
                                       CONCAT44(pfVar2[1] * local_38._4_4_,*pfVar2 * local_38._0_4_)));
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa0))(*(longlong **)(param_1 + 0x30),local_38);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
    uVar5 = 0;
    if (uVar3 != 0) {
        do {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),uVar5);
            if (lVar4 != 0) {
                FUN_140378dc0(lVar4,local_38);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140378dc0(longlong param_1,float *param_2)

{
    longlong *plVar1;
    float *pfVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined local_28 [8];
    float fStack32;
    float fStack28;
    undefined local_18 [16];

    plVar1 = *(longlong **)(param_1 + 0x18);
    _local_28 = CONCAT412(*(float *)(param_1 + 0x9c) * param_2[3],
                          CONCAT48(*(float *)(param_1 + 0x98) * param_2[2],
                                   CONCAT44(*(float *)(param_1 + 0x94) * param_2[1],
                                            *(float *)(param_1 + 0x90) * *param_2)));
    if (plVar1 != (longlong *)0x0) {
        pfVar2 = (float *)(**(code **)(*plVar1 + 0x108))(plVar1,local_18);
        _local_28 = CONCAT412(pfVar2[3] * fStack28,
                              CONCAT48(pfVar2[2] * fStack32,
                                       CONCAT44(pfVar2[1] * local_28._4_4_,*pfVar2 * local_28._0_4_)));
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa0))(*(longlong **)(param_1 + 0x30),local_28);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
    uVar5 = 0;
    if (uVar3 != 0) {
        do {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),uVar5);
            if (lVar4 != 0) {
                FUN_140378dc0(lVar4,local_28);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
    }
    return;
}



void FUN_140378e70(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined local_18 [16];

    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    for (lVar2 = *(longlong *)(param_1 + 0x28); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
        fVar4 = *(float *)(lVar2 + 0xa0) + fVar4;
        fVar5 = *(float *)(lVar2 + 0xa4) + fVar5;
        fVar6 = *(float *)(lVar2 + 0xa8) + fVar6;
        fVar7 = *(float *)(lVar2 + 0xac) + fVar7;
    }
    local_18 = CONCAT412(*(float *)(param_1 + 0xac) + fVar7,
                         CONCAT48(*(float *)(param_1 + 0xa8) + fVar6,
                                  CONCAT44(*(float *)(param_1 + 0xa4) + fVar5,
                                           *(float *)(param_1 + 0xa0) + fVar4)));
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))(*(longlong **)(param_1 + 0x30),local_18);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),uVar3);
            if (lVar2 != 0) {
                FUN_140378f20(lVar2,local_18);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return;
}



void FUN_140378f20(longlong param_1,float *param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined local_18 [16];

    local_18 = CONCAT412(*(float *)(param_1 + 0xac) + param_2[3],
                         CONCAT48(*(float *)(param_1 + 0xa8) + param_2[2],
                                  CONCAT44(*(float *)(param_1 + 0xa4) + param_2[1],
                                           *(float *)(param_1 + 0xa0) + *param_2)));
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))(*(longlong **)(param_1 + 0x30),local_18);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),uVar3);
            if (lVar2 != 0) {
                FUN_140378f20(lVar2,local_18);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return;
}



void FUN_140378ff0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))();
    if (plVar2 == (longlong *)0x0) {
        if (plVar3 != (longlong *)0x0) {
            iVar1 = FUN_140379200(param_1,param_3);
            if (iVar1 != 0) {
                (**(code **)(*plVar3 + 0x1a8))(plVar3,param_2,iVar1,param_4);
            }
        }
    }
    else {
        iVar1 = FUN_140379200(param_1,param_3);
        if (iVar1 != 0) {
            (**(code **)(*plVar2 + 0x528))(plVar2,param_2,iVar1,param_4);
        }
    }
    return;
}



void FUN_1403790a0(longlong *param_1)

{
    longlong *plVar1;
    undefined *puVar2;
    undefined8 extraout_XMM0_Qa;

    plVar1 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x38))();
    if (plVar1 != (longlong *)0x0) {
        puVar2 = (undefined *)(**(code **)(*plVar1 + 0x290))(plVar1,0);
        if (puVar2 != &LAB_140379300) {
            (**(code **)(*plVar1 + 0x60))(extraout_XMM0_Qa,0,plVar1);
            (**(code **)(*plVar1 + 0x398))(plVar1);
            (**(code **)(*plVar1 + 0x3a0))(plVar1);
            (**(code **)(*plVar1 + 0x288))(plVar1,0,0);
            (**(code **)(*plVar1 + 0x2a8))(plVar1,0,0);
            (**(code **)(*plVar1 + 0x2b8))(plVar1,0,0);
            (**(code **)(*plVar1 + 0x2a8))(plVar1,0,0);
            (**(code **)(*plVar1 + 0x408))(plVar1);
            (**(code **)(*plVar1 + 0x278))(plVar1,&DAT_140b63928,1);
            (**(code **)(*plVar1 + 0x280))(plVar1,0,0);
        }
    }
    // WARNING: Could not recover jumptable at 0x000140379195. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x128))(param_1,1);
    return;
}



void FUN_1403791a0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
    if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x290))(plVar1,0);
        if (lVar2 == 0) {
            (**(code **)(*plVar1 + 0x288))(plVar1,&LAB_140379300,param_1);
            FUN_140379330(param_1,0);
        }
    }
    return;
}



byte FUN_140379200(longlong *param_1,uint param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    byte bVar4;

    bVar4 = (param_2 & 8) != 0;
    if ((((param_2 & 0x10) != 0) && (iVar1 = (**(code **)(*param_1 + 0x110))(), iVar1 != 0)) ||
        ((param_2 & 0x20) != 0)) {
        bVar4 = bVar4 | 2;
    }
    if (((param_2 & 0x7c0) != 0) && (iVar1 = (**(code **)(*param_1 + 0x120))(), iVar1 != 0)) {
        if ((param_2 & 0x40) == 0) {
            uVar2 = 0;
            if ((param_2 & 0x80) != 0) {
                uVar2 = 2;
            }
            uVar3 = 0;
            if ((param_2 & 0x180) != 0) {
                uVar3 = 2;
            }
            if ((param_2 >> 9 & 1) != 0) {
                uVar2 = uVar2 | 0x400;
            }
            if ((param_2 & 0x600) != 0) {
                uVar3 = uVar3 | 0x400;
            }
            if ((*(uint *)(param_1 + 0x2d) & uVar3) != uVar2) {
                return bVar4;
            }
        }
        bVar4 = bVar4 | 4;
    }
    return bVar4;
}



void FUN_140379330(longlong *param_1,undefined4 param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined4 uVar3;

    plVar2 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x38))();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x1a0))(plVar2,*(undefined4 *)((longlong)param_1 + 0x16c));
        uVar3 = 0x40;
        if (iVar1 == 0) {
            uVar3 = 0x50;
        }
        FUN_1403793c0(param_1,plVar2,*(undefined4 *)((longlong)param_1 + 0x16c),param_2,uVar3);
        (**(code **)(*param_1 + 0x130))(param_1,*(undefined4 *)((longlong)param_1 + 0x16c));
    }
    return;
}



void FUN_1403793c0(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4,
                   undefined4 param_5)

{
    uint uVar1;
    longlong lVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    ulonglong local_1c;
    undefined4 local_14;
    undefined4 uStack16;
    undefined4 uStack12;

    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x80) & 0x8000000) == 0) {
        lVar2 = *param_2;
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        local_14 = 0x13;
    }
    else {
        uVar1 = (**(code **)(DAT_140c77890 + 0x18))();
        local_1c = (ulonglong)param_4;
        local_20 = 0x3f800000;
        local_24 = (undefined4)
                (longlong)((double)(ulonglong)uVar1 * 2.328306436538696e-10 * 4294967296.0);
        local_14 = param_5;
        lVar2 = *param_2;
    }
    uStack12 = 0;
    uStack16 = 0;
    local_28 = param_3;
    (**(code **)(lVar2 + 0x248))(param_2,0,&local_28);
    return;
}



int FUN_140379490(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140375b60();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_1403794d0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;

    if (*(int *)((longlong)param_1 + 0x4c) != 0) {
        return 1;
    }
    uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x28))();
    if ((int)uVar3 != 0) {
        plVar1 = (longlong *)param_1[8];
        while( true ) {
            if (plVar1 == (longlong *)0x0) {
                FUN_140377580(param_1);
                FUN_140377640(param_1);
                *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
                FUN_1403788a0(param_1);
                if (param_1[0xa2] != 0) {
                    iVar2 = (**(code **)(*param_1 + 0x120))(param_1);
                    if (iVar2 != 0) {
                        FUN_140367870(param_1[2],param_1 + 0x5e);
                    }
                    if ((longlong *)param_1[0xa2] != (longlong *)0x0) {
                        *(longlong *)param_1[0xa2] = param_1[0xa3];
                    }
                    if (param_1[0xa3] != 0) {
                        *(longlong *)(param_1[0xa3] + 0x510) = param_1[0xa2];
                    }
                    param_1[0xa2] = 0;
                    param_1[0xa3] = 0;
                }
                return 1;
            }
            iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
            if (iVar2 == 0) break;
            plVar1 = (longlong *)plVar1[0x97];
        }
        return 0;
    }
    return uVar3;
}



longlong * FUN_1403796d0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    return param_1 + 0x76;
}



longlong * FUN_140379700(longlong *param_1,int param_2)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    return param_1 + (longlong)param_2 * 8 + 0x2e;
}



undefined4 * FUN_1403797e0(longlong *param_1,undefined4 *param_2,int param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    plVar1 = param_1 + (longlong)param_3 * 8 + 0x4e;
    uVar2 = *(undefined4 *)((longlong)plVar1 + 4);
    uVar3 = *(undefined4 *)(plVar1 + 1);
    uVar4 = *(undefined4 *)((longlong)plVar1 + 0xc);
    *param_2 = *(undefined4 *)plVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_1 = param_1 + (longlong)param_3 * 8 + 0x50;
    uVar2 = *(undefined4 *)((longlong)param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
    param_2[4] = *(undefined4 *)param_1;
    param_2[5] = uVar2;
    param_2[6] = uVar3;
    param_2[7] = uVar4;
    return param_2;
}



undefined8
FUN_140379840(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *)0x0) {
        uVar1 = 0x80070057;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 1;
            *puVar2 = &PTR_LAB_140b5fe88;
            *(undefined4 *)(puVar2 + 2) = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
        }
        FUN_140378ff0(param_1,param_2,param_3,puVar2);
        *param_4 = puVar2;
        uVar1 = 0;
    }
    return uVar1;
}



undefined4 FUN_140379b20(longlong *param_1)

{
    undefined4 local_18 [4];

    if (*(int *)(param_1 + 0x8b) == 0) {
        local_18[0] = 0xffffffff;
        (**(code **)(*param_1 + 0x20))(param_1,local_18);
        FUN_140377f70(param_1);
        return *(undefined4 *)(param_1 + 0x83);
    }
    return *(undefined4 *)(param_1 + 0x83);
}



undefined8 FUN_140379b70(longlong *param_1,undefined8 *param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined auVar3 [16];
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 local_18 [4];

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    if (*(int *)(param_1 + 0x8b) == 0) {
        local_18[0] = 0xffffffff;
        (**(code **)(*param_1 + 0x20))(param_1,local_18);
        FUN_140377f70(param_1);
    }
    puVar4 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
    }
    else {
        *puVar4 = &PTR_LAB_140b787c0;
        *(undefined4 *)(puVar4 + 3) = 1;
        puVar4[1] = 0;
        puVar4[2] = 0;
    }
    lVar5 = param_1[0x8c];
    if (lVar5 != 0) {
        lVar7 = puVar4[1];
        do {
            lVar7 = lVar7 + 1;
            puVar4[1] = lVar7;
            lVar5 = *(longlong *)(lVar5 + 0x28);
        } while (lVar5 != 0);
    }
    if (puVar4[1] == 0) {
        uVar6 = 0;
    }
    else {
        auVar3 = ZEXT816(8) * ZEXT816((ulonglong)puVar4[1]);
        uVar6 = SUB168(auVar3,0);
        if (SUB168(auVar3 >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        uVar6 = FUN_14018b280(uVar6,0);
    }
    puVar4[2] = uVar6;
    puVar4[1] = 0;
    for (plVar1 = (longlong *)param_1[0x8c]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[5]
            ) {
        puVar2 = *(undefined8 **)(*plVar1 + 0x10);
        *(undefined8 **)(puVar4[2] + puVar4[1] * 8) = puVar2;
        puVar4[1] = puVar4[1] + 1;
        (**(code **)*puVar2)();
    }
    *param_2 = puVar4;
    return 0;
}



wchar_t * FUN_140379cb0(longlong *param_1)

{
    wchar_t *pwVar1;
    longlong *plVar2;

    if ((longlong *)param_1[4] != param_1) {
        // WARNING: Could not recover jumptable at 0x000140379cca. Too many branches
        // WARNING: Treating indirect jump as call
        pwVar1 = (wchar_t *)(**(code **)(*(longlong *)param_1[4] + 0x88))();
        return pwVar1;
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140379ce2. Too many branches
        // WARNING: Treating indirect jump as call
        pwVar1 = (wchar_t *)(**(code **)(*(longlong *)param_1[3] + 0x30))();
        return pwVar1;
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x38))();
        if (plVar2 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x000140379d05. Too many branches
            // WARNING: Treating indirect jump as call
            pwVar1 = (wchar_t *)(**(code **)(*plVar2 + 0x30))(plVar2);
            return pwVar1;
        }
        plVar2 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x40))();
        if (plVar2 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x000140379d23. Too many branches
            // WARNING: Treating indirect jump as call
            pwVar1 = (wchar_t *)(**(code **)(*plVar2 + 0x10))(plVar2);
            return pwVar1;
        }
    }
    return L"Unknown";
}



void FUN_140379e70(longlong *param_1,undefined4 param_2)

{
    longlong *plVar1;

    *(undefined4 *)((longlong)param_1 + 0x14c) = param_2;
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x150))();
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140379e9e. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined4 *)((longlong)param_1 + 0x14c));
        return;
    }
    return;
}



void FUN_140379eb0(longlong param_1,int param_2)

{
    ulonglong uVar1;
    longlong *plVar2;
    ulonglong uVar3;

    if (*(int *)(param_1 + 0x148) != param_2) {
        FUN_1407c2990(param_1 + 0x150,*(longlong *)(param_1 + 0x10) + 0x15c0,
                      *(undefined4 *)(&DAT_140b65ad0 + (longlong)param_2 * 4));
        *(int *)(param_1 + 0x148) = param_2;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))();
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            plVar2 = (longlong *)
                    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),uVar3);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0xe8))(plVar2,(longlong)param_2 & 0xffffffff);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
    }
    return;
}



ulonglong FUN_140379f70(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong *plVar3;
    int local_res18 [4];

    if ((((param_3 != 0) &&
          (*(float *)(param_1 + 0x2b0) <= *(float *)(param_1 + 0x2c0) &&
           *(float *)(param_1 + 0x2c0) != *(float *)(param_1 + 0x2b0))) &&
         (*(float *)(param_1 + 0x2b4) <= *(float *)(param_1 + 0x2c4) &&
          *(float *)(param_1 + 0x2c4) != *(float *)(param_1 + 0x2b4))) &&
        (*(float *)(param_1 + 0x2b8) <= *(float *)(param_1 + 0x2c8) &&
         *(float *)(param_1 + 0x2c8) != *(float *)(param_1 + 0x2b8))) {
        if (*(longlong *)(param_1 + 0x4f0) == 0) {
            plVar1 = (longlong *)(param_1 + 0x4f8);
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x13d0);
            *(longlong **)(param_1 + 0x4f0) = plVar3;
            *plVar1 = *plVar3;
            *plVar3 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x4f0) = plVar1;
            }
        }
        plVar1 = *(longlong **)(param_1 + 0x478);
        if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x484) != 0)) {
            uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,local_res18,param_2);
            if ((int)uVar2 == 0) {
                *(undefined4 *)(param_1 + 0x484) = 0;
                uVar2 = uVar2 & 0xffffffffffffff00 | (ulonglong)(local_res18[0] == 0);
                *(int *)(param_1 + 0x48c) = (int)uVar2;
                return uVar2;
            }
        }
        return (ulonglong)*(uint *)(param_1 + 0x48c);
    }
    if (*(longlong *)(param_1 + 0x4e0) == 0) {
        plVar1 = (longlong *)(param_1 + 0x4e8);
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x13c8);
        *(longlong **)(param_1 + 0x4e0) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x4e0) = plVar1;
        }
    }
    plVar1 = *(longlong **)(param_1 + 0x470);
    if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x480) != 0)) {
        uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,local_res18,param_2);
        if ((int)uVar2 == 0) {
            *(undefined4 *)(param_1 + 0x480) = 0;
            uVar2 = uVar2 & 0xffffffffffffff00 | (ulonglong)(local_res18[0] == 0);
            *(int *)(param_1 + 0x488) = (int)uVar2;
            return uVar2;
        }
    }
    if (param_4 != 0) {
        return (ulonglong)*(uint *)(param_1 + 0x488);
    }
    return 2;
}



void FUN_14037a300(longlong param_1,undefined4 param_2)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x538))(plVar2,param_2);
        if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x510) == 0)) {
            FUN_140367870(*(undefined8 *)(param_1 + 0x10),param_1 + 0x2f0);
        }
    }
    return;
}



void FUN_14037a3f0(undefined8 *param_1)

{
    longlong lVar1;

    lVar1 = param_1[0x1c];
    *param_1 = &PTR_LAB_140b65c68;
    while (lVar1 != 0) {
        if (param_1[0x1c] != 0) {
            FUN_1403902b0();
            FUN_14018b900();
        }
        lVar1 = param_1[0x1c];
    }
    if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1f] = param_1[0x20];
    }
    if (param_1[0x20] != 0) {
        *(undefined8 *)(param_1[0x20] + 0xf8) = param_1[0x1f];
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    if ((undefined8 *)param_1[0x1d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1d] = param_1[0x1e];
    }
    if (param_1[0x1e] != 0) {
        *(undefined8 *)(param_1[0x1e] + 0xe8) = param_1[0x1d];
    }
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    if (param_1[0x1c] != 0) {
        FUN_1401a4a00(param_1 + 0x1c);
    }
    return;
}



void FUN_14037a4e0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0xe0);
    while (lVar1 != 0) {
        if (*(longlong *)(param_1 + 0xe0) != 0) {
            FUN_1403902b0();
            FUN_14018b900();
        }
        lVar1 = *(longlong *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf0);
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return;
}



int FUN_14037a5a0(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14037a3f0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_14037a5e0(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined local_a8 [160];

    if (*(longlong *)(param_1 + 0xe8) != 0) {
        fVar10 = *(float *)(param_1 + 0x6c);
        fVar11 = 0.0;
        if (0.0 < fVar10) {
            if ((DAT_140dc1650 & 1) == 0) {
                DAT_140dc1650 = DAT_140dc1650 | 1;
                DAT_140dc1654 = DAT_140c3b438 * 0.005555556;
            }
            if ((DAT_140dc1650 & 2) == 0) {
                DAT_140dc1650 = DAT_140dc1650 | 2;
                DAT_140dc1658 = DAT_140c3b438 * 0.005555556 * 1.25;
            }
            if ((DAT_140dc1650 & 4) == 0) {
                DAT_140dc1650 = DAT_140dc1650 | 4;
                DAT_140dc165c = 1.0 / (DAT_140dc1658 - DAT_140dc1654);
            }
            if ((DAT_140dc1650 & 8) == 0) {
                DAT_140dc1650 = DAT_140dc1650 | 8;
                DAT_140dc1660 = (float)((uint)(DAT_140dc165c * DAT_140dc1654) ^ 0x80000000);
            }
            fVar8 = DAT_140dc1660;
            fVar9 = DAT_140dc165c;
            fVar7 = (float)FUN_1408fd190(*(undefined4 *)(param_1 + 0xbc));
            fVar8 = fVar7 * fVar9 + fVar8;
            if (1.0 <= fVar8) {
                fVar8 = 1.0;
            }
            fVar9 = 0.0;
            if (0.0 <= fVar8) {
                fVar9 = fVar8;
            }
            fVar9 = (3.0 - fVar9 * 2.0) * fVar9 * fVar9;
            if (fVar11 < fVar9) {
                *(float *)(param_1 + 0x6c) = fVar10 * fVar9;
                if ((*(int *)(param_1 + 0xc) == 0) ||
                    (fVar10 = *(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0x50),
                            fVar11 = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0x54),
                            DAT_140c3c7a8 <= fVar10 * fVar10 + fVar11 * fVar11 + 0.0)) {
                    lVar3 = *(longlong *)(param_1 + 0xe0);
                    while (lVar3 != 0) {
                        if (*(longlong *)(param_1 + 0xe0) != 0) {
                            FUN_1403902b0();
                            FUN_14018b900();
                        }
                        lVar3 = *(longlong *)(param_1 + 0xe0);
                    }
                    lVar3 = FUN_1403589f0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x50);
                    FUN_140252dd0(param_1 + 0x20,local_a8);
                    lVar4 = FUN_14018b280(0x50);
                    uVar5 = 0;
                    if (lVar4 != 0) {
                        uVar5 = FUN_140390210(lVar4,lVar3,0,param_1,0);
                    }
                    if ((lVar3 == 0) ||
                        ((*(int *)(lVar3 + 0xa8) == 0 &&
                          (iVar2 = FUN_140390d10(lVar3,param_1 + 0x50,local_a8,uVar5), iVar2 != 0)))) {
                        FUN_140359490(*(undefined8 *)(param_1 + 0x10),local_a8);
                        for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1550); lVar3 != 0;
                             lVar3 = *(longlong *)(lVar3 + 0x138)) {
                            if (*(int *)(lVar3 + 0xa8) == 0) {
                                FUN_140390d10(lVar3,param_1 + 0x50,local_a8,uVar5);
                            }
                        }
                    }
                    *(undefined4 *)(param_1 + 0xc) = 1;
                    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x50);
                    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x54);
                    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x58);
                    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x5c);
                }
                if (*(longlong *)(param_1 + 0xf8) == 0) {
                    plVar1 = (longlong *)(param_1 + 0x100);
                    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1520);
                    *(longlong **)(param_1 + 0xf8) = plVar6;
                    *plVar1 = *plVar6;
                    *plVar6 = param_1;
                    if (*plVar1 != 0) {
                        *(longlong **)(*plVar1 + 0xf8) = plVar1;
                    }
                }
            }
        }
    }
    return 0;
}



undefined8 * FUN_14037a960(undefined8 *param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong *plVar2;

    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 3;
    *param_1 = &PTR_LAB_140b65c90;
    *(undefined4 *)(param_1 + 3) = DAT_140c784c0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_140c784c4;
    *(undefined4 *)(param_1 + 4) = DAT_140c784c8;
    *(undefined4 *)((longlong)param_1 + 0x24) = DAT_140c784cc;
    param_1[5] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    plVar2 = (longlong *)(param_1[2] + 0x1560);
    if (param_1[0xb] == 0) {
        param_1[0xb] = plVar2;
        plVar1 = param_1 + 0xc;
        *plVar1 = *plVar2;
        *plVar2 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x58) = plVar1;
        }
    }
    return param_1;
}



void FUN_14037a9f0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b65c90;
    if (param_1[5] != 0) {
        FUN_1403762e0();
    }
    if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xd] = param_1[0xe];
    }
    if (param_1[0xe] != 0) {
        *(undefined8 *)(param_1[0xe] + 0x68) = param_1[0xd];
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xb] = param_1[0xc];
    }
    if (param_1[0xc] != 0) {
        *(undefined8 *)(param_1[0xc] + 0x58) = param_1[0xb];
    }
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14037aa70(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    *(undefined8 *)(param_1 + 0x50) = _DAT_140c79888;
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
        (iVar5 = *(int *)(param_1 + 0x1c), iVar5 < *(int *)(param_1 + 0x24))) {
        do {
            iVar4 = *(int *)(param_1 + 0x18);
            if (iVar4 < *(int *)(param_1 + 0x20)) {
                do {
                    lVar1 = *(longlong *)(param_1 + 0x10);
                    if ((((*(int *)(lVar1 + 0x88c) <= iVar4) && (iVar4 < *(int *)(lVar1 + 0x894))) &&
                         (*(int *)(lVar1 + 0x890) <= iVar5)) && (iVar5 < *(int *)(lVar1 + 0x898))) {
                        iVar3 = *(int *)(lVar1 + 0x89c);
                        iVar2 = iVar5 % *(int *)(lVar1 + 0x8a0);
                        lVar1 = *(longlong *)
                                (*(longlong *)(lVar1 + 0x8e0) +
                                 (ulonglong)
                                         ((uint)(iVar4 % iVar3 < 0) * iVar3 +
                                          ((uint)(iVar2 < 0) * *(int *)(lVar1 + 0x8a0) + iVar2) * iVar3 + iVar4 % iVar3)
                                 * 8);
                        if ((lVar1 != 0) &&
                            ((*(longlong *)(lVar1 + 0x5a8) == 0 || (iVar3 = FUN_14037cc30(), iVar3 != 0)))) {
                            fVar6 = *(float *)(lVar1 + 0x434);
                            fVar8 = DAT_140c7ac84;
                            if ((*(byte *)(lVar1 + 0x460) & 1) != 0) {
                                if (DAT_140c7ac84 <= *(float *)(lVar1 + 0x4a4)) {
                                    fVar8 = *(float *)(lVar1 + 0x4a4);
                                }
                                if (fVar6 <= *(float *)(lVar1 + 0x4b4)) {
                                    fVar6 = *(float *)(lVar1 + 0x4b4);
                                }
                            }
                            fVar7 = *(float *)(param_1 + 0x54);
                            if (*(float *)(param_1 + 0x54) <= fVar6) {
                                fVar7 = fVar6;
                            }
                            fVar6 = *(float *)(param_1 + 0x50);
                            if (fVar8 <= *(float *)(param_1 + 0x50)) {
                                fVar6 = fVar8;
                            }
                            *(ulonglong *)(param_1 + 0x50) = CONCAT44(fVar7,fVar6);
                        }
                    }
                    iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(param_1 + 0x20));
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x24));
    }
    return;
}



int FUN_14037ac00(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14037a9f0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_14037b140(longlong param_1)

{
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 8))();
        *(undefined8 *)(param_1 + 8) = 0;
    }
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    return;
}

