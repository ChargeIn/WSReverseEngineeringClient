//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14040b200(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;

    if (param_2 < (ulonglong)param_1[1]) {
        if (param_2 < (ulonglong)param_1[1]) {
            lVar5 = param_2 * 0x30;
            uVar3 = param_2;
            do {
                lVar1 = *param_1;
                lVar2 = *(longlong *)(lVar1 + 0x28 + lVar5);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar1 = *(longlong *)(lVar1 + 0x20 + lVar5);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                uVar3 = uVar3 + 1;
                lVar5 = lVar5 + 0x30;
            } while (uVar3 < (ulonglong)param_1[1]);
        }
        param_1[1] = param_2;
    }
    lVar5 = FUN_14018dbc0(*param_1,param_2,0x30);
    if (*param_1 != lVar5) {
        uVar4 = 0;
        uVar3 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar3 + lVar5 != 0) {
                    FUN_14040b570(uVar3 + lVar5,*param_1 + uVar3);
                }
                lVar1 = *param_1;
                lVar2 = *(longlong *)(lVar1 + 0x28 + uVar3);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar1 = *(longlong *)(lVar1 + 0x20 + uVar3);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar3 + 0x30;
            } while (uVar4 < (ulonglong)param_1[1]);
        }
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar5;
    }
    return;
}



ulonglong FUN_14040b320(short *param_1,longlong param_2)

{
    short sVar1;
    ushort uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ushort *puVar5;
    longlong lVar6;

    uVar3 = 0;
    sVar1 = *param_1;
    while (sVar1 != 0) {
        uVar3 = uVar3 + 1;
        sVar1 = param_1[uVar3];
    }
    puVar5 = *(ushort **)(param_2 + 8);
    if (uVar3 != *(longlong *)(param_2 + 0x10) - (longlong)puVar5 >> 1) {
        LAB_14040b394:
        return uVar3 & 0xffffffffffffff00;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
        lVar6 = (longlong)param_1 - (longlong)puVar5;
        while( true ) {
            uVar2 = *(ushort *)(lVar6 + (longlong)puVar5);
            if (uVar2 != *puVar5) break;
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 1;
            if (uVar3 <= uVar4) {
                return CONCAT71((int7)(uVar3 >> 8),1);
            }
        }
        uVar3 = 1;
        if (uVar2 < *puVar5) {
            uVar3 = 0xffffffff;
        }
        if ((int)uVar3 != 0) goto LAB_14040b394;
    }
    return CONCAT71((int7)(uVar3 >> 8),1);
}



void FUN_14040b3a0(longlong param_1,undefined8 param_2,longlong **param_3)

{
    longlong *plVar1;
    int iVar2;

    iVar2 = FUN_140415bb0(*(undefined8 *)(param_1 + 0x10),param_3);
    if (iVar2 != 0) {
        FUN_1400fb540(param_1,param_2);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if (*param_3 != (longlong *)0x0) {
        (**(code **)(**param_3 + 8))();
        *param_3 = (longlong *)0x0;
    }
    if (param_3[0x60] != (longlong *)0x0) {
        FUN_14018b900(param_3[0x60],0);
    }
    return;
}



void FUN_14040b420(longlong param_1,undefined8 param_2,uint param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong local_res10;

    lVar2 = *(longlong *)(DAT_140c65998 + 0x10);
    local_res10 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_3) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res10 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res10 == lVar2) || (param_3 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar2;
    }
    if (local_res10 == lVar2) {
        uVar5 = 0;
    }
    else {
        uVar5 = *(undefined8 *)(local_res10 + 0x28);
    }
    iVar4 = FUN_140432f20(*(undefined8 *)(param_1 + 0x10),uVar5);
    if (iVar4 != 0) {
        FUN_1400fb540(param_1,L"uArchiveArticle");
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



void FUN_14040b4c0(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    if (param_1 != (longlong *)0x0) {
        if (*param_2 != 0) {
            lVar1 = *(longlong *)(*param_2 + -8);
            puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
            puVar3 = (undefined8 *)0x0;
            if (puVar2 != (undefined8 *)0x0) {
                puVar2[1] = lVar1;
                *puVar2 = &PTR_LAB_140b55060;
                puVar3 = puVar2;
            }
            puVar3 = puVar3 + 2;
            FUN_1407db590(puVar3,*param_2,lVar1 * 2);
            *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
            *param_1 = (longlong)puVar3;
            return;
        }
        *param_1 = 0;
    }
    return;
}



undefined4 * FUN_14040b570(undefined4 *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    if (*(longlong *)(param_2 + 8) == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = lVar1;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,*(undefined8 *)(param_2 + 8),lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        *(undefined8 **)(param_1 + 8) = puVar3;
    }
    puVar3 = (undefined8 *)0x0;
    if (*(longlong *)(param_2 + 10) == 0) {
        *(undefined8 *)(param_1 + 10) = 0;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 10) + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = lVar1;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,*(undefined8 *)(param_2 + 10),lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        *(undefined8 **)(param_1 + 10) = puVar3;
    }
    return param_1;
}



longlong FUN_14040b680(longlong param_1,longlong param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    short *psVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined local_88 [8];
    longlong local_80;
    undefined2 *local_78;
    longlong local_70;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    undefined local_48 [8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;

    lVar7 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 8) = puVar6;
    *(undefined2 **)(param_1 + 0x10) = puVar6;
    *(undefined2 **)(param_1 + 0x18) = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    lVar1 = param_1 + 0x20;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x28) = puVar6;
    *(undefined2 **)(param_1 + 0x30) = puVar6;
    *(undefined2 **)(param_1 + 0x38) = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x48) = puVar6;
    *(undefined2 **)(param_1 + 0x50) = puVar6;
    *(undefined2 **)(param_1 + 0x58) = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    lVar2 = param_1 + 0x60;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x68) = puVar6;
    *(undefined2 **)(param_1 + 0x70) = puVar6;
    *(undefined2 **)(param_1 + 0x78) = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    if (param_3 == 0) {
        if (param_2 != lVar2) {
            FUN_14001c480(lVar2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
        }
    }
    else {
        local_80 = 0;
        local_70 = 0;
        do {
            psVar4 = &DAT_140b66942 + lVar7;
            lVar7 = lVar7 + 1;
        } while (*psVar4 != 0);
        lVar7 = lVar7 * 2 >> 1;
        uVar3 = lVar7 + 1;
        if (uVar3 < 0x7fffffffffffffff) {
            lVar8 = uVar3 * 2;
            local_80 = FUN_14018b280(lVar8,0);
            local_70 = lVar8 + local_80;
        }
        lVar8 = local_80;
        lVar7 = lVar7 * 2;
        FUN_1407db590(local_80,&DAT_140b66940,lVar7);
        local_78 = (undefined2 *)(lVar7 + lVar8);
        if (local_78 != (undefined2 *)0x0) {
            *local_78 = 0;
        }
        FUN_14018fbd0(param_2,param_1,lVar2,local_88);
        if (lVar8 != 0) {
            FUN_14018b900(lVar8,0);
        }
    }
    lVar7 = 0;
    local_40 = (undefined2 *)FUN_14018b280(0x10);
    local_30 = local_40 + 8;
    if (local_40 != (undefined2 *)0x0) {
        *local_40 = 0;
    }
    local_38 = local_40;
    local_60 = (undefined2 *)FUN_14018b280(0x10);
    local_50 = local_60 + 8;
    if (local_60 != (undefined2 *)0x0) {
        *local_60 = 0;
    }
    local_80 = 0;
    local_70 = 0;
    do {
        psVar4 = &DAT_140b66942 + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar4 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar3 = lVar7 + 1;
    local_58 = local_60;
    if (uVar3 < 0x7fffffffffffffff) {
        lVar8 = uVar3 * 2;
        local_80 = FUN_14018b280(lVar8,0);
        local_70 = lVar8 + local_80;
    }
    lVar8 = local_80;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_80,&DAT_140b66940,lVar7);
    local_78 = (undefined2 *)(lVar7 + lVar8);
    lVar7 = 0;
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    FUN_14018fbd0(lVar2,lVar1,lVar2,local_88);
    if (lVar8 != 0) {
        FUN_14018b900(lVar8,0);
    }
    local_80 = 0;
    local_70 = 0;
    lVar8 = lVar7;
    do {
        psVar4 = &DAT_140b66942 + lVar8;
        lVar8 = lVar8 + 1;
    } while (*psVar4 != 0);
    lVar8 = lVar8 * 2 >> 1;
    uVar3 = lVar8 + 1;
    if (uVar3 < 0x7fffffffffffffff) {
        lVar5 = uVar3 * 2;
        local_80 = FUN_14018b280(lVar5,0);
        local_70 = lVar5 + local_80;
    }
    lVar5 = local_80;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_80,&DAT_140b66940,lVar8);
    local_78 = (undefined2 *)(lVar8 + lVar5);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    FUN_14018fbd0(lVar2,local_48,lVar2,local_88);
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    local_80 = 0;
    local_70 = 0;
    do {
        psVar4 = &DAT_140b66962 + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar4 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar3 = lVar7 + 1;
    if (uVar3 < 0x7fffffffffffffff) {
        lVar2 = uVar3 * 2;
        local_80 = FUN_14018b280(lVar2,0);
        local_70 = lVar2 + local_80;
    }
    lVar2 = local_80;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_80,&DAT_140b66960,lVar7);
    local_78 = (undefined2 *)(lVar7 + lVar2);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    FUN_14018fbd0(local_48,local_68,param_1 + 0x40,local_88);
    if (lVar2 != 0) {
        FUN_14018b900(lVar2,0);
    }
    puVar6 = local_60;
    if (local_60 != local_58) {
        lVar7 = FUN_14018efa0(local_68,L"%s %s",*(undefined8 *)(param_1 + 0x28),local_60);
        if (lVar7 != lVar1) {
            FUN_14001c480(lVar1,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
        }
        if (local_60 != (undefined2 *)0x0) {
            FUN_14018b900(local_60,0);
        }
    }
    if (puVar6 != (undefined2 *)0x0) {
        FUN_14018b900(puVar6,0);
    }
    if (local_40 != (undefined2 *)0x0) {
        FUN_14018b900(local_40,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14040bb10(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                        uint param_5)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    uint uVar6;
    double extraout_XMM0_Qa;
    undefined4 in_XMM6_Da;
    float fVar7;
    float fVar8;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar9;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar10;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined auVar11 [16];
    undefined auVar12 [16];
    undefined auVar13 [16];
    undefined auVar14 [16];

    auVar14 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar13 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    uVar6 = 0;
    auVar12 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    auVar11 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
    fVar10 = *(float *)(param_1 + 4);
    fVar7 = 0.0;
    do {
        fVar9 = fVar7;
        if (fVar7 < fVar10) {
            register0x00000020 = (BADSPACEBASE *)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
            fVar7 = (float)(extraout_XMM0_Qa * (double)fVar10);
        }
        lVar5 = 0;
        fVar10 = fVar9;
        if (0 < *(longlong *)(param_1 + 0x10)) {
            do {
                lVar3 = *(longlong *)(*(int **)(param_1 + 8) + lVar5 * 2);
                iVar1 = *(int *)(lVar3 + 0xc);
                iVar2 = *(int *)(lVar3 + 0x10);
                fVar8 = fVar7;
                if (uVar6 == 0) {
                    fVar8 = fVar7 - *(float *)(lVar3 + 8);
                }
                register0x00000020 = (BADSPACEBASE *)*(int **)(param_1 + 8);
                if (iVar1 != 2) {
                    if (iVar1 == 1) {
                        if (DAT_140c63840 == (int *)0x0) {
                            register0x00000020 = (BADSPACEBASE *)DAT_140c63840;
                            if ((_DAT_140c64070 != 0) ||
                                (register0x00000020 = (BADSPACEBASE *)FUN_140247760(), (int)register0x00000020 < 0)
                                    ) goto LAB_14040bc6c;
                            register0x00000020 =
                                    (BADSPACEBASE *)(**(code **)(*DAT_140c64930 + 0x18))(DAT_140c64930,iVar2);
                        }
                        else {
                            register0x00000020 =
                                    (BADSPACEBASE *)
                                            (*(code *)DAT_140c63840)
                                            (&PTR_u_UnitProperty2_140a6dee0,iVar2,DAT_140c63858,param_4,auVar11,
                                             auVar12,auVar13,auVar14);
                        }
                        if ((((int *)register0x00000020 == (int *)0x0) ||
                             ((*(byte *)((longlong)register0x00000020 + 0x24) & 4) == 0)) ||
                            ((*(uint *)((longlong)register0x00000020 + 0x34) != 0 &&
                              ((param_5 & *(uint *)((longlong)register0x00000020 + 0x34)) == 0))))
                            goto LAB_14040bc6c;
                    }
                    uVar4 = 0;
                    register0x00000020 = (BADSPACEBASE *)param_3;
                    do {
                        if (((iVar1 == 1) && (*(int *)register0x00000020 == 1)) &&
                            (iVar2 == *(int *)((longlong)register0x00000020 + 4))) goto LAB_14040bc6c;
                        uVar4 = uVar4 + 1;
                        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
                    } while (uVar4 < 5);
                    if (uVar6 == 1) {
                        fVar8 = fVar8 - *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar5 * 8) + 8);
                    }
                    if ((fVar8 < fVar9) && (fVar9 <= fVar7)) {
                        return (ulonglong)(((uint)lVar5 & 0xff) + 1);
                    }
                    fVar10 = fVar10 + *(float *)(*(longlong *)(*(int **)(param_1 + 8) + lVar5 * 2) + 8);
                    register0x00000020 = (BADSPACEBASE *)*(int **)(param_1 + 8);
                }
                LAB_14040bc6c:
                lVar5 = lVar5 + 1;
                fVar7 = fVar8;
            } while (lVar5 < *(longlong *)(param_1 + 0x10));
        }
        uVar6 = uVar6 + 1;
        fVar7 = fVar9;
        if (1 < uVar6) {
            return (ulonglong)register0x00000020 & 0xffffffffffffff00;
        }
    } while( true );
}



void FUN_14040bcd0(undefined8 *param_1,uint param_2)

{
    byte bVar1;

    *param_1 = 0;
    param_1[1] = 0;
    *(byte *)((longlong)param_1 + 9) = (byte)param_2 & 7;
    *(byte *)(param_1 + 1) = (byte)(param_2 >> 3) & 7;
    *(uint *)((longlong)param_1 + 0xc) = param_2 >> 6 & 1;
    *(byte *)param_1 = (byte)(param_2 >> 7) & 7;
    *(byte *)((longlong)param_1 + 1) = (byte)(param_2 >> 10) & 7;
    *(byte *)((longlong)param_1 + 2) = (byte)(param_2 >> 0xd) & 7;
    *(byte *)((longlong)param_1 + 3) = (byte)(param_2 >> 0x10) & 7;
    *(byte *)((longlong)param_1 + 4) = (byte)(param_2 >> 0x13) & 7;
    *(byte *)((longlong)param_1 + 5) = (byte)(param_2 >> 0x16) & 7;
    bVar1 = (byte)(param_2 >> 0x18);
    *(byte *)((longlong)param_1 + 7) = bVar1 >> 4 & 7;
    *(byte *)((longlong)param_1 + 6) = bVar1 >> 1 & 7;
    return;
}



void FUN_14040bd50(undefined8 *param_1,longlong param_2,longlong param_3)

{
    if (param_2 == 0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 1;
        if ((param_3 != 0) && (*(int *)(param_3 + 0x140) - 1U < 2)) {
            *(undefined4 *)(param_1 + 1) = 0;
            return;
        }
    }
    else {
        *(char *)param_1 = (char)param_2;
        *(char *)((longlong)param_1 + 1) = (char)((ulonglong)param_2 >> 8);
        *(char *)((longlong)param_1 + 2) = (char)((ulonglong)param_2 >> 0x10);
        *(char *)((longlong)param_1 + 3) = (char)((ulonglong)param_2 >> 0x18);
        *(char *)((longlong)param_1 + 4) = (char)((ulonglong)param_2 >> 0x20);
        *(char *)((longlong)param_1 + 5) = (char)((ulonglong)param_2 >> 0x28);
        *(char *)((longlong)param_1 + 6) = (char)((ulonglong)param_2 >> 0x30);
        *(uint *)(param_1 + 1) = (uint)((ulonglong)param_2 >> 0x38);
    }
    return;
}



ulonglong FUN_14040bdb0(longlong param_1)

{
    byte bVar1;
    ulonglong uVar2;
    int iVar3;
    byte *pbVar4;

    pbVar4 = (byte *)(param_1 + 5);
    uVar2 = (ulonglong)CONCAT11(*(undefined *)(param_1 + 8),*(undefined *)(param_1 + 6));
    iVar3 = 6;
    do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + -1;
        uVar2 = uVar2 << 8 | (ulonglong)bVar1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return uVar2;
}



void FUN_14040bdf0(ulonglong *param_1)

{
    byte bVar1;
    uint uVar2;
    ulonglong uVar3;
    int iVar4;
    byte *pbVar5;
    undefined8 local_28;
    undefined4 local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)&local_28;
    uVar3 = *param_1;
    if (uVar3 == 0) {
        uVar2 = 1;
        local_28 = uVar3;
    }
    else {
        local_28 = uVar3 & 0xffffffffffffff;
        uVar2 = (uint)(uVar3 >> 0x38);
    }
    local_20 = 0;
    if (uVar2 == 0) {
        local_20 = 1;
        uVar3 = 0x100;
        local_28 = local_28 & 0xff00000000000000;
        iVar4 = 6;
        pbVar5 = (byte *)((longlong)&local_28 + 5);
        do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + -1;
            uVar3 = uVar3 << 8 | (ulonglong)bVar1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *param_1 = uVar3;
        FUN_1407db4f0(local_18 ^ (ulonglong)&local_28);
        return;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)&local_28);
    return;
}



ulonglong FUN_14040bee0(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 param_5,int param_6)

{
    ulonglong uVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;

    if ((DAT_140c8ac28 & 1) == 0) {
        DAT_140c8ac28 = DAT_140c8ac28 | 1;
        DAT_140c8ac30 = &PTR_FUN_140b66a98;
        FUN_1407dd89c(&LAB_140950b70);
    }
    if (param_6 == 0) {
        fVar4 = 1.0;
    }
    else {
        fVar4 = (float)param_6;
    }
    fVar3 = (float)(*(code *)DAT_140c8ac30[1])(&DAT_140c8ac30,param_5);
    uVar2 = (ulonglong)(fVar3 * fVar4 * param_2);
    uVar1 = 1;
    if ((int)uVar2 != 0) {
        uVar1 = uVar2 & 0xffffffff;
    }
    return uVar1;
}



undefined8 * FUN_14040bf80(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b567a8;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14040bfb0(undefined4 param_1,undefined4 param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 extraout_XMM0_Da;
    float fVar4;

    if ((DAT_140c8ac18 & 1) == 0) {
        DAT_140c8ac18 = DAT_140c8ac18 | 1;
    }
    else if (_DAT_140c8ac24 != 0) goto LAB_14040c02d;
    _DAT_140c8ac24 = 1;
    lVar2 = FUN_140200220();
    param_1 = extraout_XMM0_Da;
    if (lVar2 == 0) {
        DAT_140c8ac20 = 0.0;
    }
    else {
        DAT_140c8ac20 = *(float *)(lVar2 + 0x18);
    }
    LAB_14040c02d:
    fVar4 = DAT_140c8ac20;
    uVar1 = FUN_14040bee0(param_1,param_2);
    uVar3 = 1;
    if ((int)(longlong)((float)(ulonglong)uVar1 * fVar4) != 0) {
        uVar3 = (longlong)((float)(ulonglong)uVar1 * fVar4) & 0xffffffff;
    }
    return uVar3;
}



undefined8 FUN_14040c070(longlong param_1,longlong param_2)

{
    if (param_2 != 0) {
        if ((*(int *)(param_1 + 0x80) != 0) || (*(int *)(param_1 + 0x84) != 0)) {
            return 0x95;
        }
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x10) != 0) {
            *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 4);
        }
    }
    return 0;
}



ulonglong FUN_14040c0b0(undefined8 param_1,undefined8 param_2,float param_3,int *param_4,
                        int *param_5,undefined8 param_6,uint param_7)

{
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    ulonglong uVar5;
    int *piVar6;
    int *piVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    float fVar10;
    ulonglong uVar4;

    uVar9 = 0;
    piVar7 = param_5;
    uVar8 = uVar9;
    uVar5 = uVar9;
    do {
        iVar1 = *piVar7;
        if (iVar1 == 0xc5) break;
        fVar10 = (float)piVar7[0xf];
        uVar4 = uVar9;
        piVar6 = param_4;
        do {
            if (*piVar6 == iVar1) {
                LAB_14040c125:
                param_4[uVar4 + 0xf] = (int)(param_3 * fVar10 + (float)param_4[uVar4 + 0xf]);
                goto LAB_14040c133;
            }
            if (*piVar6 == 0xc5) {
                param_4[uVar4] = iVar1;
                goto LAB_14040c125;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            piVar6 = piVar6 + 1;
        } while (uVar3 < 0xf);
        uVar8 = 0x95;
        LAB_14040c133:
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        piVar7 = piVar7 + 1;
    } while (uVar3 < 0xf);
    if ((param_5[0x22] != 0) && (param_5[0x23] != 0)) {
        piVar7 = param_4 + 0x24;
        uVar5 = uVar9;
        do {
            iVar1 = *piVar7;
            if (iVar1 == 0) {
                LAB_14040c24a:
                *(undefined8 *)(param_4 + uVar5 * 2 + 0x24) = *(undefined8 *)(param_5 + 0x22);
                param_4[uVar5 * 2 + 0x35] = param_7;
                param_4[uVar5 * 2 + 0x34] = (int)param_3;
                goto LAB_14040c26d;
            }
            if (iVar1 == param_5[0x22]) {
                if (iVar1 == 0) goto LAB_14040c24a;
                iVar1 = param_4[uVar5 * 2 + 0x35];
                param_4[uVar5 * 2 + 0x35] = iVar1 * param_4[uVar5 * 2 + 0x25];
                fVar10 = (float)param_4[uVar5 * 2 + 0x34];
                param_4[uVar5 * 2 + 0x34] =
                        (int)((float)(ulonglong)(uint)param_4[uVar5 * 2 + 0x25] * fVar10);
                fVar10 = (float)(ulonglong)(uint)param_5[0x23] * param_3 +
                                                 (float)(ulonglong)(uint)param_4[uVar5 * 2 + 0x25] * fVar10;
                param_4[uVar5 * 2 + 0x34] = (int)fVar10;
                uVar3 = param_5[0x23] * param_7 + iVar1 * param_4[uVar5 * 2 + 0x25];
                param_4[uVar5 * 2 + 0x35] = uVar3;
                param_4[uVar5 * 2 + 0x25] = param_4[uVar5 * 2 + 0x25] + param_5[0x23];
                param_4[uVar5 * 2 + 0x34] =
                        (int)(fVar10 / (float)(ulonglong)(uint)param_4[uVar5 * 2 + 0x25]);
                param_4[uVar5 * 2 + 0x35] = uVar3 / (uint)param_4[uVar5 * 2 + 0x25];
                goto LAB_14040c26d;
            }
            uVar3 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar3;
            piVar7 = piVar7 + 2;
        } while (uVar3 < 8);
        uVar8 = 0x94;
    }
    LAB_14040c26d:
    if (param_5[0x21] != 0) {
        piVar7 = param_4 + 0x45;
        do {
            if ((*piVar7 == 0) || (*piVar7 == param_5[0x21])) {
                if (param_4[uVar9 * 2 + 0x45] == 0) {
                    uVar2 = *(undefined8 *)(param_5 + 0x20);
                    param_4[uVar9 * 2 + 0x54] = (int)param_3;
                    *(undefined8 *)(param_4 + uVar9 * 2 + 0x44) = uVar2;
                }
                else {
                    if (param_3 <= (float)param_4[uVar9 * 2 + 0x54]) {
                        param_3 = (float)param_4[uVar9 * 2 + 0x54];
                    }
                    if (param_7 < (uint)param_4[uVar9 * 2 + 0x55]) {
                        param_7 = param_4[uVar9 * 2 + 0x55];
                    }
                    param_4[uVar9 * 2 + 0x54] = (int)param_3;
                }
                param_4[uVar9 * 2 + 0x55] = param_7;
                return uVar8;
            }
            uVar3 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar3;
            piVar7 = piVar7 + 2;
        } while (uVar3 < 8);
        uVar8 = 0x94;
    }
    return uVar8;
}



undefined8
FUN_14040c310(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
              undefined8 param_5,undefined8 param_6)

{
    undefined8 *puVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 *puVar6;
    int iVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;

    FUN_1407e4830(param_2,0,0x138);
    puVar1 = (undefined8 *)(param_2 + 0x94);
    FUN_1407e4830(puVar1,0,0x90);
    *puVar1 = 0xc5000000c5;
    *(undefined8 *)(param_2 + 0x9c) = 0xc5000000c5;
    *(undefined8 *)(param_2 + 0xa4) = 0xc5000000c5;
    *(undefined8 *)(param_2 + 0xac) = 0xc5000000c5;
    *(undefined8 *)(param_2 + 0xb4) = 0xc5000000c5;
    *(undefined8 *)(param_2 + 0xbc) = 0xc5000000c5;
    *(undefined8 *)(param_2 + 0xc4) = 0xc5000000c5;
    *(undefined4 *)(param_2 + 0xcc) = 0xc5;
    uVar8 = FUN_14040c610(param_1,param_2,param_3);
    if ((int)uVar8 != 0) {
        return uVar8;
    }
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x168) != 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x10) + 0x16c) != 0)) &&
        (uVar8 = FUN_14040ca70(param_1,param_2,param_3,param_5,param_6), (int)uVar8 != 0)) {
        return uVar8;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x1bc) == 0) {
        LAB_14040c438:
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x174) != 0) {
            FUN_14040ce50(param_1,param_2,param_3);
        }
        if ((*(longlong *)(param_1 + 0x100) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
            if (*(int *)(param_1 + 0xc0) == 0) {
                uVar8 = FUN_14040df10(param_1,param_2);
                if ((int)uVar8 != 0) {
                    return uVar8;
                }
                uVar8 = FUN_14040e340(param_1,param_2);
                if ((int)uVar8 != 0) {
                    return uVar8;
                }
                uVar8 = FUN_14040e3d0(param_1,param_2);
                iVar7 = (int)uVar8;
            }
            else {
                uVar8 = FUN_14040dbf0();
                iVar7 = (int)uVar8;
            }
            if (iVar7 != 0) {
                return uVar8;
            }
        }
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x140) == 0x21) {
            uVar8 = FUN_14040e460(param_1,param_2);
            if ((int)uVar8 != 0) {
                return uVar8;
            }
            uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x14c);
            if (((uVar2 >> 0xb & 1) != 0) && ((uVar2 >> 0xf & 1) != 0)) goto LAB_14040c4e9;
        }
        else if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x14c) & 0x800) != 0) {
            return 0x95;
        }
        if (param_4 != (undefined8 *)0x0) {
            FUN_1407e4830(param_4,0,400);
            FUN_1407e4830(param_4,0,0x90);
            *param_4 = 0xc5000000c5;
            param_4[1] = 0xc5000000c5;
            param_4[2] = 0xc5000000c5;
            param_4[3] = 0xc5000000c5;
            param_4[4] = 0xc5000000c5;
            param_4[5] = 0xc5000000c5;
            param_4[6] = 0xc5000000c5;
            *(undefined4 *)(param_4 + 7) = 0xc5;
            if ((((uint)puVar1 | (uint)param_4) & 0xf) == 0) {
                lVar9 = 1;
                puVar6 = param_4;
                do {
                    puVar11 = puVar1;
                    puVar10 = puVar6;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 4);
                    uVar4 = *(undefined4 *)(puVar11 + 1);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
                    *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
                    *(undefined4 *)((longlong)puVar10 + 4) = uVar3;
                    *(undefined4 *)(puVar10 + 1) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x14);
                    uVar4 = *(undefined4 *)(puVar11 + 3);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x1c);
                    *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar11 + 2);
                    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
                    *(undefined4 *)(puVar10 + 3) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x24);
                    uVar4 = *(undefined4 *)(puVar11 + 5);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x2c);
                    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar11 + 4);
                    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar3;
                    *(undefined4 *)(puVar10 + 5) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x34);
                    uVar4 = *(undefined4 *)(puVar11 + 7);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x3c);
                    *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(puVar11 + 6);
                    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar3;
                    *(undefined4 *)(puVar10 + 7) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x44);
                    uVar4 = *(undefined4 *)(puVar11 + 9);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x4c);
                    *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar11 + 8);
                    *(undefined4 *)((longlong)puVar10 + 0x44) = uVar3;
                    *(undefined4 *)(puVar10 + 9) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x54);
                    uVar4 = *(undefined4 *)(puVar11 + 0xb);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x5c);
                    *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar11 + 10);
                    *(undefined4 *)((longlong)puVar10 + 0x54) = uVar3;
                    *(undefined4 *)(puVar10 + 0xb) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 100);
                    uVar4 = *(undefined4 *)(puVar11 + 0xd);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x6c);
                    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar11 + 0xc);
                    *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
                    *(undefined4 *)(puVar10 + 0xd) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x74);
                    uVar4 = *(undefined4 *)(puVar11 + 0xf);
                    uVar5 = *(undefined4 *)((longlong)puVar11 + 0x7c);
                    *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar11 + 0xe);
                    *(undefined4 *)((longlong)puVar10 + 0x74) = uVar3;
                    *(undefined4 *)(puVar10 + 0xf) = uVar4;
                    *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar5;
                    lVar9 = lVar9 + -1;
                    puVar6 = puVar10 + 0x10;
                    puVar1 = puVar11 + 0x10;
                } while (lVar9 != 0);
                uVar3 = *(undefined4 *)((longlong)puVar11 + 0x84);
                uVar4 = *(undefined4 *)(puVar11 + 0x11);
                uVar5 = *(undefined4 *)((longlong)puVar11 + 0x8c);
                *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
                *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
                *(undefined4 *)(puVar10 + 0x11) = uVar4;
                *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
            }
            else {
                FUN_1407db590(param_4,puVar1,0x90);
            }
        }
        if (((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
            (*(int *)(param_1 + 0x60) != 0)) {
            FUN_14040cba0(param_1,param_2,param_4,param_3);
        }
        uVar8 = 0;
    }
    else {
        lVar9 = FUN_14040fa40(param_3);
        if (lVar9 != 0) {
            if ((*(int *)(param_2 + 0x114) == 0) && (*(int *)(param_2 + 0x118) == 0)) {
                *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(lVar9 + 0xc);
                *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(lVar9 + 0x10);
                if (*(int *)(lVar9 + 0x10) != 0) {
                    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(lVar9 + 4);
                }
                uVar8 = 0;
            }
            else {
                uVar8 = 0x95;
            }
            if ((int)uVar8 != 0) {
                return uVar8;
            }
            goto LAB_14040c438;
        }
        LAB_14040c4e9:
        uVar8 = 0x95;
    }
    return uVar8;
}



undefined8 FUN_14040c610(longlong param_1,int *param_2,undefined8 param_3)

{
    ushort uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    ulonglong uVar10;
    ushort *puVar11;
    float fVar12;
    float fVar13;

    if (*(longlong *)(param_1 + 0x10) == 0) {
        return 1;
    }
    lVar7 = *(longlong *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x70);
    *(longlong *)(param_1 + 0x88) = lVar7;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x38);
    if ((lVar7 == 0) || (0 < *(int *)(lVar7 + 8))) {
        *(undefined4 *)(param_1 + 0x78) = 1;
    }
    else {
        *(int *)(param_1 + 0x78) = *(int *)(lVar7 + 8);
        FUN_14040bdb0();
        iVar2 = FUN_14040bdf0();
        if (iVar2 != 0) {
            FUN_14040bd50();
            *(longlong *)(param_1 + 0x88) = param_1 + 0x7c;
        }
    }
    if ((*(longlong *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0x78) < 1)) {
        FUN_14040bcd0();
        *(longlong *)(param_1 + 0xa0) = param_1 + 0x90;
    }
    uVar10 = 0;
    if ((*(longlong *)(param_1 + 0xb0) != 0) && (*(int *)(param_1 + 0x78) < 1)) {
        iVar2 = 3;
        puVar11 = (ushort *)(*(longlong *)(param_1 + 0xb0) + 6);
        do {
            uVar1 = *puVar11;
            puVar11 = puVar11 + -1;
            uVar10 = (ulonglong)uVar1 & 0x3ff | uVar10 << 10;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar10 = uVar10 << 4;
        *(byte *)(param_1 + 0xa8) = (byte)(uVar10 >> 0x1e) & 0xf;
        *(ushort *)(param_1 + 0xaa) = (ushort)(uVar10 >> 0x22) & 0x3ff;
        *(ushort *)(param_1 + 0xae) = (ushort)(uVar10 >> 0x36);
        *(ushort *)(param_1 + 0xac) = (ushort)(uVar10 >> 0x2c) & 0x3ff;
        *(byte **)(param_1 + 0xb0) = (byte *)(param_1 + 0xa8);
    }
    uVar6 = FUN_1402096e0();
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    uVar6 = FUN_14020a3a0();
    *(undefined8 *)(param_1 + 0xe8) = uVar6;
    uVar6 = FUN_140209f60();
    *(undefined8 *)(param_1 + 0xf0) = uVar6;
    lVar7 = FUN_140209b20();
    *(longlong *)(param_1 + 0xf8) = lVar7;
    if ((((*(longlong *)(param_1 + 0xe0) != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) &&
         (lVar7 != 0)) && (*(longlong *)(param_1 + 0xf0) != 0)) {
        uVar6 = FUN_14020a7e0();
        *(undefined8 *)(param_1 + 0x108) = uVar6;
        uVar6 = FUN_14020ac20();
        *(undefined8 *)(param_1 + 0x110) = uVar6;
        uVar6 = FUN_14020e7a0();
        lVar7 = *(longlong *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x100) = uVar6;
        if ((*(int *)(lVar7 + 0x140) == 0x21) || (*(int *)(lVar7 + 0x148) == 0x8f)) {
            *(undefined8 *)(param_1 + 0x100) = 0;
        }
        *(undefined4 *)(param_1 + 0xcc) = 0;
        if (*(longlong *)(param_1 + 0x108) != 0) {
            *(undefined4 *)(param_1 + 0xcc) = 5;
            do {
                uVar9 = *(int *)(param_1 + 0xcc) - 1;
                uVar3 = *(uint *)(*(longlong *)(param_1 + 0x108) + 4 + (ulonglong)uVar9 * 4);
                if ((int)uVar3 < 0) {
                    uVar3 = 0x80000000 - uVar3;
                }
            } while (((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0x55) &&
                     (*(uint *)(param_1 + 0xcc) = uVar9, uVar9 != 0));
        }
        uVar3 = *(uint *)(param_1 + 0x48);
        if (*(uint *)(param_1 + 0xcc) < *(uint *)(param_1 + 0x48)) {
            uVar3 = *(uint *)(param_1 + 0xcc);
        }
        *(uint *)(param_1 + 0x48) = uVar3;
        if (uVar3 != 0) {
            do {
                uVar3 = *(int *)(param_1 + 0x48) - 1;
                iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4);
                iVar4 = 0;
                if (iVar2 < 0) {
                    iVar4 = -0x80000000;
                }
                uVar9 = iVar4 - iVar2;
                uVar8 = (int)uVar9 >> 0x1f;
            } while (((int)((uVar9 ^ uVar8) - uVar8) < 0x55) &&
                     (*(uint *)(param_1 + 0x48) = uVar3, uVar3 != 0));
        }
        fVar12 = 1.0;
        if (*(longlong *)(param_1 + 0x100) == 0) {
            fVar13 = 1.0;
        }
        else {
            fVar13 = *(float *)(*(longlong *)(param_1 + 0x100) + 0x14);
        }
        *(float *)(param_1 + 200) = fVar13;
        if (*(longlong *)(param_1 + 0xf8) != 0) {
            fVar12 = *(float *)(*(longlong *)(param_1 + 0xf8) + 0x20);
        }
        *(float *)(param_1 + 0xc4) = fVar12 * fVar13;
        *(uint *)(param_1 + 0xb8) = *(uint *)(lVar7 + 0x14c) >> 3 & 1;
        *(uint *)(param_1 + 0xbc) = *(uint *)(lVar7 + 0x14c) >> 0x14 & 1;
        if ((((*(uint *)(lVar7 + 0x154) & 0x400) == 0) || (*(int *)(lVar7 + 0x180) == 0)) ||
            (uVar5 = 1, (*(uint *)(lVar7 + 0x180) & 0x8000) == 0)) {
            uVar5 = 0;
        }
        *(undefined4 *)(param_1 + 0xc0) = uVar5;
        param_2[8] = 0;
        if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x14c) & 0x8000) != 0) {
            param_2[8] = 1;
        }
        if ((*(int *)(param_1 + 0xbc) == 0) || (*(int *)(param_1 + 0x24) == 0)) {
            *param_2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x158);
        }
        else {
            *param_2 = *(int *)(param_1 + 0x24);
            iVar2 = *(int *)(param_1 + 0x28);
            param_2[8] = param_2[8] | 8;
            param_2[4] = iVar2;
        }
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x14c);
        *(undefined2 *)(param_2 + 0x4d) = 0;
        param_2[0x4b] = uVar3 >> 0xc & 1;
        uVar6 = FUN_14040d060(param_1,param_2,param_3,
                              *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x160),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x15c));
        return uVar6;
    }
    return 0x95;
}



undefined8
FUN_14040ca70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
    int iVar1;
    bool bVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    uint uVar5;

    if ((*(longlong *)(param_1 + 0x108) == 0) || (*(longlong *)(param_1 + 0x110) == 0)) {
        return 0x95;
    }
    uVar3 = FUN_14040e6d0(param_3,*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x108),
                          *(longlong *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x88),
                          param_1 + 0x118);
    if (((int)uVar3 == 0) &&
        (uVar3 = FUN_14040d3d0(param_1,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
        bVar2 = false;
        puVar4 = (undefined4 *)(param_1 + 0x11c);
        uVar5 = 0;
        do {
            iVar1 = puVar4[-1];
            if (iVar1 != 0) {
                if (iVar1 == 1) {
                    uVar3 = FUN_14040db30(param_1,param_2,*puVar4);
                    if ((int)uVar3 != 0) {
                        return uVar3;
                    }
                }
                else {
                    if ((iVar1 != 2) && (iVar1 != 4)) {
                        return 0x70;
                    }
                    bVar2 = true;
                }
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 2;
        } while (uVar5 < 5);
        if ((*(int *)(param_1 + 0x44) != 0) && (!bVar2)) {
            *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
        }
        uVar3 = 0;
    }
    return uVar3;
}



void FUN_14040cba0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                   longlong param_5,undefined8 param_6)

{
    byte bVar1;
    int iVar2;
    undefined *puVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined *puVar6;
    uint uVar7;
    ulonglong uVar8;
    undefined4 *puVar9;
    uint uVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    undefined auStack696 [32];
    undefined8 *local_298;
    undefined4 local_290;
    undefined8 local_288;
    undefined4 local_280;
    undefined4 local_27c;
    undefined local_278 [8];
    undefined *local_270;
    undefined8 local_268;
    undefined local_258 [16];
    undefined local_248 [8];
    undefined local_240 [148];
    undefined4 local_1ac [85];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack696;
    local_288 = param_6;
    if (((param_3[0x14] != 0) && (param_3[0xd] != 0)) && (*(int *)(param_3 + 0xc) != 0)) {
        *(undefined2 *)(param_4 + 0x134) = 0;
        local_270 = (undefined *)FUN_14018b280(0x28);
        uVar8 = 0;
        local_268 = 0;
        *local_270 = 0;
        *(undefined8 *)(local_270 + 8) = 0;
        *(undefined **)(local_270 + 0x10) = local_270;
        *(undefined **)(local_270 + 0x18) = local_270;
        uVar10 = *(uint *)(param_3 + 0xc);
        if (*(uint *)(param_4 + 0x130) < *(uint *)(param_3 + 0xc)) {
            uVar10 = *(uint *)(param_4 + 0x130);
        }
        uVar11 = uVar8;
        if (uVar10 != 0) {
            do {
                if (*(int *)(uVar11 + param_3[0xd]) != 0) {
                    FUN_1400b52a0(local_240);
                    FUN_1407e4830(local_248,0,0x1f0);
                    FUN_1407e4830(local_240,0,0x138);
                    FUN_1407e4830(local_1ac,0,0x90);
                    puVar9 = local_1ac;
                    for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
                        *puVar9 = 0xc5;
                        puVar9 = puVar9 + 1;
                    }
                    lVar5 = FUN_1400b5df0(param_6,*(undefined4 *)(uVar11 + param_3[0xd]),local_248);
                    param_6 = local_288;
                    if ((lVar5 != 0) &&
                        (iVar2 = (**(code **)*param_3)(param_3,lVar5,param_4), param_6 = local_288, iVar2 != 0)
                            ) {
                        if (*(undefined **)(local_270 + 8) != (undefined *)0x0) {
                            uVar7 = *(uint *)(uVar11 + param_3[0xd]);
                            puVar3 = *(undefined **)(local_270 + 8);
                            puVar6 = local_270;
                            do {
                                if (*(uint *)(puVar3 + 0x20) < uVar7) {
                                    puVar4 = *(undefined **)(puVar3 + 0x18);
                                }
                                else {
                                    puVar4 = *(undefined **)(puVar3 + 0x10);
                                    puVar6 = puVar3;
                                }
                                puVar3 = puVar4;
                            } while (puVar4 != (undefined *)0x0);
                            if ((puVar6 != local_270) && (*(uint *)(puVar6 + 0x20) <= uVar7)) goto LAB_14040cdec;
                        }
                        if (*(int *)(lVar5 + 0x124) != 0) {
                            FUN_1400293c0(local_278,local_258,param_3[0xd] + uVar8 * 4);
                        }
                        if (param_5 != 0) {
                            local_280 = *(undefined4 *)(lVar5 + 0x14);
                            local_298 = param_3 + 3;
                            local_290 = 1;
                            uVar12 = FUN_14040f710(local_288,&local_27c,&local_280);
                            FUN_14040c0b0(uVar12,param_2,local_27c);
                        }
                        bVar1 = '\x01' << ((byte)uVar8 & 0x1f);
                        *(byte *)(param_4 + 0x135) = *(byte *)(param_4 + 0x135) | bVar1;
                        param_6 = local_288;
                        if ((*(byte *)(lVar5 + 0x150) & 2) != 0) {
                            *(byte *)(param_4 + 0x134) = *(byte *)(param_4 + 0x134) | bVar1;
                        }
                    }
                }
                LAB_14040cdec:
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
                uVar11 = uVar11 + 4;
            } while (uVar7 < uVar10);
        }
        FUN_140008410(local_278);
        FUN_14018b900(local_270,0);
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack696);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14040ce50(longlong param_1,longlong param_2,undefined8 param_3)

{
    int iVar1;
    longlong lVar2;
    undefined4 *puVar3;
    uint uVar4;

    lVar2 = FUN_14020b060(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x174));
    if (lVar2 != 0) {
        uVar4 = 0;
        puVar3 = (undefined4 *)(lVar2 + 0x40);
        do {
            if (*(byte *)(param_2 + 0x124) <= uVar4) {
                return;
            }
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6480c == 0) && (iVar1 = FUN_14020b240(), -1 < iVar1)) {
                    lVar2 = (**(code **)(*DAT_140c644d8 + 0x18))();
                    goto LAB_14040ceea;
                }
            }
            else {
                lVar2 = (*DAT_140c63840)(&PTR_u_ItemImbuementReward_140a6ad38,*puVar3,DAT_140c63858);
                LAB_14040ceea:
                if (lVar2 != 0) {
                    if (*(int *)(lVar2 + 4) == 0) {
                        lVar2 = FUN_1402479c0(*(undefined4 *)(lVar2 + 8));
                        if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) &&
                            ((*(uint *)(lVar2 + 0x34) == 0 ||
                              ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x180) & *(uint *)(lVar2 + 0x34)) != 0))
                            )) {
                            FUN_14040e610();
                        }
                    }
                    else if ((*(int *)(lVar2 + 4) == 1) && (lVar2 = FUN_14040fa40(param_3), lVar2 != 0)) {
                        FUN_14040c070(param_2 + 0x94);
                    }
                }
            }
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 1;
        } while (uVar4 < 0xf);
    }
    return;
}



undefined8 FUN_14040cf90(longlong param_1,longlong param_2)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;

    if (1 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x140) - 1U) {
        *(undefined8 *)(param_2 + 300) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        return 0;
    }
    puVar1 = (uint *)(param_2 + 0x130);
    if (puVar1 != (uint *)0x0) {
        iVar2 = FUN_14040efb0();
        if (-1 < iVar2) {
            if (*(longlong *)(param_1 + 0xa0) != 0) {
                uVar3 = (uint)*(byte *)(*(longlong *)(param_1 + 0xa0) + 8) + *puVar1;
                uVar4 = *(uint *)(param_1 + 0xd0);
                if (uVar3 < *(uint *)(param_1 + 0xd0)) {
                    uVar4 = uVar3;
                }
                *puVar1 = uVar4;
                uVar4 = *(byte *)(*(longlong *)(param_1 + 0xa0) + 9) + uVar4;
                uVar3 = *(uint *)(param_1 + 0xd4);
                if (uVar4 < *(uint *)(param_1 + 0xd4)) {
                    uVar3 = uVar4;
                }
                *puVar1 = uVar3;
            }
            return 0;
        }
    }
    return 0x95;
}



void FUN_14040d060(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 uVar1;
    float fVar2;

    if ((*(int *)(param_1 + 0xbc) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
        *(undefined4 *)(param_2 + 4) = param_4;
    }
    else {
        *(int *)(param_2 + 4) = *(int *)(param_1 + 0x20);
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
        uVar1 = *(undefined4 *)(param_2 + 4);
    }
    else {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    *(undefined4 *)(param_2 + 8) = param_5;
    fVar2 = (float)FUN_14040f660(param_3,uVar1,*(int *)(*(longlong *)(param_1 + 0x10) + 0x140) == 0x21
            ,*(uint *)(param_2 + 0x20) & 8);
    *(float *)(param_2 + 0x14) = fVar2 * *(float *)(param_1 + 200);
    FUN_14040f710(param_3,param_1 + 0xd8,param_2 + 0xc,*(undefined4 *)(param_2 + 0xc),param_1 + 0x18,
                  *(int *)(*(longlong *)(param_1 + 0x10) + 0x140) == 0x21);
    *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x14) * *(float *)(param_1 + 0xd8);
    FUN_14040d160(param_1,param_2);
    FUN_14040cf90(param_1,param_2);
    return;
}



void FUN_14040d160(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;

    uVar3 = 0;
    *(float *)(param_3 + 0x90) =
            *(float *)(*(longlong *)(param_2 + 0xf8) + 0x18) *
            *(float *)(*(longlong *)(param_2 + 0xf0) + 0x10) *
            *(float *)(*(longlong *)(param_2 + 0xe8) + 0x18);
    lVar1 = *(longlong *)(param_2 + 0xe0);
    if ((*(int *)(lVar1 + 0x88) == 0) && (*(int *)(lVar1 + 0x8c) == 0)) {
        uVar2 = FUN_14040bee0(param_2,param_3,*(undefined4 *)(param_3 + 4));
        uVar4 = 1;
        *(ulonglong *)(param_3 + 0x28) = (ulonglong)uVar2;
        *(undefined8 *)(param_3 + 0x30) = 1;
        *(undefined8 *)(param_3 + 0x38) = 0;
        *(undefined8 *)(param_3 + 0x40) = 0;
        *(undefined8 *)(param_3 + 0x48) = 1;
        *(undefined8 *)(param_3 + 0x50) = 0;
        param_1 = extraout_XMM0_Qa;
    }
    else {
        *(ulonglong *)(param_3 + 0x28) = (ulonglong)*(uint *)(lVar1 + 0x90);
        uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0xe0) + 0x88);
        *(undefined4 *)(param_3 + 0x30) = uVar4;
        *(ulonglong *)(param_3 + 0x40) = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xe0) + 0x94);
        uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0xe0) + 0x8c);
        *(undefined4 *)(param_3 + 0x48) = uVar3;
        if ((*(uint *)(*(longlong *)(param_2 + 0xe0) + 0x7c) & 0x200) != 0) {
            *(undefined4 *)(param_3 + 0x34) = uVar4;
            *(undefined4 *)(param_3 + 0x30) = 0xf;
        }
    }
    uVar2 = FUN_14040bee0(param_1,*(undefined4 *)(param_3 + 0x90),uVar3,uVar4,
                          *(undefined4 *)(param_3 + 4));
    *(ulonglong *)(param_3 + 0x88) = (ulonglong)uVar2;
    lVar1 = *(longlong *)(param_2 + 0xe0);
    if ((*(int *)(lVar1 + 0x98) == 0) && (*(int *)(lVar1 + 0x9c) == 0)) {
        uVar2 = FUN_14040bfb0(extraout_XMM0_Qa_00,*(undefined4 *)(param_3 + 0x90));
        *(ulonglong *)(param_3 + 0x58) = (ulonglong)uVar2;
        *(undefined8 *)(param_3 + 0x60) = 1;
        *(undefined8 *)(param_3 + 0x68) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x78) = 1;
        *(undefined8 *)(param_3 + 0x80) = 0;
    }
    else {
        *(ulonglong *)(param_3 + 0x58) = (ulonglong)*(uint *)(lVar1 + 0xa0);
        *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(*(longlong *)(param_2 + 0xe0) + 0x98);
        *(ulonglong *)(param_3 + 0x70) = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xe0) + 0xa4);
        *(undefined4 *)(param_3 + 0x78) = *(undefined4 *)(*(longlong *)(param_2 + 0xe0) + 0x9c);
    }
    if ((((*(byte *)(*(longlong *)(param_2 + 0x10) + 0x154) & 0x20) == 0) ||
         (*(int *)(*(longlong *)(param_2 + 0x10) + 0x140) == 0x18)) &&
        (((*(longlong *)(param_3 + 0x58) != 0 &&
           ((*(int *)(param_3 + 0x60) < 0xf ||
             ((*(int *)(param_3 + 0x60) == 0xf &&
               (((*(int *)(param_3 + 0x68) != 0 || (*(int *)(param_3 + 100) == 1)) ||
                 (*(int *)(param_3 + 0x6c) != 0)))))))) ||
          ((*(longlong *)(param_3 + 0x70) != 0 &&
            ((*(int *)(param_3 + 0x78) < 0xf ||
              ((*(int *)(param_3 + 0x78) == 0xf &&
                (((*(int *)(param_3 + 0x80) != 0 || (*(int *)(param_3 + 0x7c) == 1)) ||
                  (*(int *)(param_3 + 0x84) != 0)))))))))))) {
        *(undefined8 *)(param_3 + 0x58) = 0;
        *(undefined8 *)(param_3 + 0x60) = 0xf;
        *(undefined8 *)(param_3 + 0x68) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0xf;
        *(undefined8 *)(param_3 + 0x80) = 0;
    }
    return;
}



undefined8
FUN_14040d3d0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5
)

{
    uint uVar1;
    uint uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    uint uVar5;
    int *piVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    uVar3 = FUN_14040d5d0();
    if ((int)uVar3 == 0) {
        uVar3 = FUN_14040d6b0(param_1,param_2);
        if ((int)uVar3 == 0) {
            *(undefined8 *)(param_1 + 0x140) = 0;
            *(undefined8 *)(param_1 + 0x148) = 0;
            fVar10 = 0.0;
            fVar9 = 0.0;
            puVar4 = (undefined8 *)(param_1 + 0x154);
            *(undefined4 *)(param_1 + 0x150) = 0;
            *puVar4 = 0;
            *(undefined8 *)(param_1 + 0x15c) = 0;
            uVar5 = 0;
            piVar6 = (int *)(param_1 + 0x118);
            *(undefined4 *)(param_1 + 0x164) = 0;
            do {
                fVar7 = *(float *)((longlong)puVar4 + *(longlong *)(param_1 + 0x108) + -param_1 + -0x150) *
                        *(float *)(param_2 + 0x18);
                *(undefined4 *)puVar4 = 0;
                *(float *)((longlong)puVar4 + -0x14) = fVar7;
                fVar8 = 0.0;
                if ((*piVar6 == 1) &&
                    (*(float *)puVar4 = fVar7, fVar8 = fVar7,
                            uVar5 <= *(uint *)(param_1 + 0x48) && *(uint *)(param_1 + 0x48) != uVar5)) {
                    fVar8 = fVar7 * *(float *)((longlong)puVar4 +
                                               *(longlong *)(param_1 + 0x50) + -param_1 + -0x154);
                    *(float *)puVar4 = fVar8;
                }
                fVar10 = fVar10 + fVar7;
                fVar9 = fVar9 + fVar8;
                if (param_4 != 0) {
                    fVar8 = fVar7;
                    if ((int)fVar7 < 0) {
                        fVar8 = (float)(0x80000000 - (int)fVar7);
                    }
                    if (0x54 < (int)(((uint)fVar8 ^ (int)fVar8 >> 0x1f) - ((int)fVar8 >> 0x1f))) {
                        *(float *)((param_4 - param_1) + -0x154 + (longlong)puVar4) = fVar7;
                    }
                }
                if (param_5 != 0) {
                    uVar1 = *(uint *)puVar4;
                    uVar2 = uVar1;
                    if ((int)uVar1 < 0) {
                        uVar2 = 0x80000000 - uVar1;
                    }
                    if (0x54 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
                        *(uint *)((param_5 - param_1) + -0x154 + (longlong)puVar4) = uVar1;
                    }
                }
                uVar5 = uVar5 + 1;
                piVar6 = piVar6 + 2;
                puVar4 = (undefined8 *)((longlong)puVar4 + 4);
            } while (uVar5 < 5);
            fVar8 = fVar10;
            if ((int)fVar10 < 0) {
                fVar8 = (float)(0x80000000 - (int)fVar10);
            }
            if ((int)(((uint)fVar8 ^ (int)fVar8 >> 0x1f) - ((int)fVar8 >> 0x1f)) < 0x55) {
                *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
                return 0;
            }
            uVar3 = 0;
            *(float *)(param_2 + 0x1c) = fVar9 / fVar10;
        }
    }
    return uVar3;
}



undefined8 FUN_14040d5d0(longlong param_1,longlong param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    int *piVar3;
    uint uVar4;

    lVar1 = FUN_1400b5df0(param_3,*(undefined4 *)(param_1 + 0x40),0);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x148) == 0x8f)) {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 4;
        uVar2 = FUN_14040d060(param_1,param_2,param_3,*(undefined4 *)(lVar1 + 0x160),
                              *(undefined4 *)(lVar1 + 0x15c));
        return uVar2;
    }
    piVar3 = *(int **)(param_1 + 0x110);
    if (piVar3 != (int *)0x0) {
        uVar4 = 0;
        do {
            piVar3 = piVar3 + 1;
            if (*piVar3 == 4) {
                *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 2;
                if (*(int *)(param_1 + 0x44) == 0) {
                    return 0;
                }
                uVar2 = FUN_14040d060(param_1,param_2,param_3,
                                      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x160),
                                      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x15c));
                return uVar2;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 5);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14040d6b0(longlong param_1,int *param_2,undefined8 param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    longlong *plVar5;
    undefined8 uVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    int *piVar10;
    uint uVar11;
    int iVar12;
    int iVar13;
    int local_res20 [2];
    undefined *in_stack_ffffffffffffffa8;
    int local_48;
    undefined local_44 [4];
    int *local_40;

    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x174) == 0) {
        return 0;
    }
    local_40 = (int *)FUN_14020b060();
    if (local_40 == (int *)0x0) {
        return 0x95;
    }
    iVar13 = 0;
    if (*(int *)(param_1 + 8) != 0) {
        local_res20[0] = 0;
        iVar7 = 0;
        uVar9 = 0;
        local_48 = 0;
        piVar10 = local_40;
        do {
            if (piVar10[1] == 0) break;
            lVar2 = FUN_14022aa80();
            if (lVar2 == 0) {
                return 0x95;
            }
            uVar11 = 0;
            piVar4 = (int *)(lVar2 + 0x78);
            do {
                if (*piVar4 != 0) {
                    lVar3 = FUN_14022d0c0();
                    if (lVar3 == 0) {
                        return 0x95;
                    }
                    if (*(int *)(lVar3 + 4) == 0x1f) {
                        return 0x95;
                    }
                }
                uVar11 = uVar11 + 1;
                piVar4 = piVar4 + 1;
            } while (uVar11 < 3);
            uVar11 = 3;
            piVar4 = (int *)(lVar2 + 0x84);
            do {
                if (*piVar4 != 0) {
                    return 0x95;
                }
                uVar11 = uVar11 + 1;
                piVar4 = piVar4 + 1;
            } while (uVar11 < 6);
            iVar12 = piVar10[0x10];
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6480c == 0) && (iVar1 = FUN_14020b240(), -1 < iVar1)) {
                    lVar2 = (**(code **)(*DAT_140c644d8 + 0x18))(DAT_140c644d8,iVar12);
                    goto LAB_14040d811;
                }
                LAB_14040d8ef:
                if (*(int **)(param_1 + 0x100) == (int *)0x0) {
                    return 0x95;
                }
                if (**(int **)(param_1 + 0x100) != 0x3b) {
                    return 0x95;
                }
            }
            else {
                lVar2 = (*DAT_140c63840)(&PTR_u_ItemImbuementReward_140a6ad38,iVar12);
                LAB_14040d811:
                if (lVar2 == 0) goto LAB_14040d8ef;
                iVar12 = *(int *)(lVar2 + 4);
                if (iVar12 == 0) {
                    lVar2 = FUN_1402479c0();
                    if (lVar2 == 0) {
                        return 0x95;
                    }
                    if ((*(byte *)(lVar2 + 0x24) & 4) == 0) {
                        return 0x95;
                    }
                    if (((*(longlong *)(param_1 + 0x100) != 0) && (*(uint *)(lVar2 + 0x34) != 0)) &&
                        ((*(uint *)(*(longlong *)(param_1 + 0x100) + 0x10) & *(uint *)(lVar2 + 0x34)) == 0)) {
                        return 0x95;
                    }
                }
                else if (iVar12 == 1) {
                    lVar2 = FUN_14040fa40();
                    if (lVar2 == 0) {
                        return 0x95;
                    }
                }
                else if (iVar12 == 4) {
                    local_res20[0] = local_res20[0] + *(int *)(lVar2 + 0xc);
                }
                else if (iVar12 == 5) {
                    iVar7 = iVar7 + *(int *)(lVar2 + 0xc);
                }
                else {
                    if (iVar12 != 6) {
                        return 0x95;
                    }
                    local_48 = local_48 + *(int *)(lVar2 + 0xc);
                }
            }
            uVar9 = uVar9 + 1;
            piVar10 = piVar10 + 1;
        } while (uVar9 < 0xf);
        iVar12 = local_48;
        if ((iVar7 != 0) && (param_2[1] + iVar7 < 0)) {
            return 0x95;
        }
        iVar7 = *param_2 + local_res20[0];
        if (local_res20[0] != 0) {
            if (iVar7 < 2) {
                iVar1 = 2;
            }
            else {
                iVar1 = iVar7;
                if (7 < iVar7) {
                    iVar1 = 7;
                }
            }
            if (iVar7 != iVar1) {
                return 0x95;
            }
        }
        if (local_48 != 0) {
            in_stack_ffffffffffffffa8 = local_44;
            local_48 = 0;
            local_res20[0] = 0;
            iVar7 = FUN_14040efb0(*(undefined8 *)(param_1 + 0x10),param_2,&local_48,local_res20,
                                  in_stack_ffffffffffffffa8);
            if (iVar7 < 0) {
                return 0x95;
            }
            if (8 < (uint)(local_res20[0] + iVar12)) {
                return 0x95;
            }
        }
    }
    plVar5 = *(longlong **)(param_1 + 0xb0);
    if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)*plVar5;
    }
    *(longlong **)(param_2 + 0x49) = plVar5;
    iVar12 = 0;
    iVar7 = 0;
    uVar9 = 0;
    piVar10 = local_40 + 0x10;
    do {
        if (*(byte *)(param_2 + 0x49) <= uVar9) break;
        iVar1 = *piVar10;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c6480c == 0) && (iVar8 = FUN_14020b240(), -1 < iVar8)) {
                lVar2 = (**(code **)(*DAT_140c644d8 + 0x18))(DAT_140c644d8,iVar1);
                goto LAB_14040da36;
            }
        }
        else {
            lVar2 = (*DAT_140c63840)(&PTR_u_ItemImbuementReward_140a6ad38,iVar1,DAT_140c63858);
            LAB_14040da36:
            if ((lVar2 != 0) && (uVar11 = *(uint *)(lVar2 + 4), 1 < uVar11)) {
                if (uVar11 == 4) {
                    iVar13 = iVar13 + *(int *)(lVar2 + 0xc);
                }
                else if (uVar11 == 5) {
                    iVar12 = iVar12 + *(int *)(lVar2 + 0xc);
                }
                else {
                    if (uVar11 != 6) {
                        return 0x94;
                    }
                    iVar7 = iVar7 + *(int *)(lVar2 + 0xc);
                }
            }
        }
        uVar9 = uVar9 + 1;
        piVar10 = piVar10 + 1;
    } while (uVar9 < 0xf);
    if (iVar13 != 0) {
        iVar8 = *param_2 + iVar13;
        iVar1 = 2;
        if ((1 < iVar8) && (iVar1 = iVar8, 7 < iVar8)) {
            iVar1 = 7;
        }
        *param_2 = iVar1;
    }
    if (iVar7 != 0) {
        param_2[0x4b] = param_2[0x4b] + iVar7;
    }
    if (iVar12 == 0) {
        if ((iVar13 == 0) && (iVar7 == 0)) {
            return 0;
        }
        uVar6 = FUN_14040cf90(param_1,param_2);
        iVar13 = (int)uVar6;
    }
    else {
        uVar6 = FUN_14040d060(param_1,param_2,param_3,param_2[1] + iVar12,
                              (ulonglong)in_stack_ffffffffffffffa8 & 0xffffffff00000000 |
                              (ulonglong)(uint)param_2[2]);
        iVar13 = (int)uVar6;
    }
    if (iVar13 == 0) {
        return 0;
    }
    return uVar6;
}



undefined8 FUN_14040db30(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    if (((param_3 == 0x29) || (param_3 - 0xafU < 2)) || (param_3 == 0xb2)) {
        uVar2 = 0;
        if (*(int *)(param_1 + 0xc0) == 0) {
            uVar2 = 0x95;
        }
        return uVar2;
    }
    lVar1 = FUN_1402479c0();
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x24) & 4) != 0)) &&
        ((*(longlong *)(param_1 + 0x100) == 0 ||
          ((*(uint *)(lVar1 + 0x34) == 0 ||
            ((*(uint *)(*(longlong *)(param_1 + 0x100) + 0x10) & *(uint *)(lVar1 + 0x34)) != 0)))))) {
        uVar2 = FUN_14040e610();
        return uVar2;
    }
    return 0x95;
}



undefined8 FUN_14040dbf0(undefined4 param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    int *piVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    float fVar10;
    float fVar11;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar12;
    undefined4 uVar13;
    float fVar14;

    if (*(int *)(param_2 + 0xc0) == 0) {
        return 0;
    }
    uVar13 = 0x3f000000;
    uVar9 = FUN_14041d420(param_1,0x3f000000);
    fVar10 = (float)FUN_14041d540(uVar9,uVar13);
    fVar11 = (float)FUN_14041d660(fVar10,uVar13);
    uVar1 = FUN_14041d780(fVar11,uVar13);
    uVar8 = 0;
    piVar5 = (int *)(param_2 + 0x11c);
    lVar6 = 5;
    fVar14 = (float)(ulonglong)uVar1;
    uVar7 = uVar8;
    fVar12 = extraout_XMM0_Da;
    do {
        if (piVar5[-1] == 1) {
            iVar2 = *piVar5;
            if (iVar2 == 0x29) {
                fVar12 = (float)FUN_14041d420(fVar12,*(undefined4 *)
                        (*(longlong *)(param_2 + 0x108) + 4 + uVar7));
            }
            else if (iVar2 == 0xaf) {
                fVar12 = (float)FUN_14041d660();
                fVar11 = fVar12;
            }
            else if (iVar2 == 0xb0) {
                fVar12 = (float)FUN_14041d540();
                fVar10 = fVar12;
            }
            else if (iVar2 == 0xb2) {
                uVar1 = FUN_14041d780();
                fVar14 = (float)(ulonglong)uVar1;
                fVar12 = extraout_XMM0_Da_00;
            }
        }
        uVar7 = uVar7 + 4;
        piVar5 = piVar5 + 2;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if ((DAT_140c8abf0 & 1) == 0) {
        DAT_140c8abf0 = DAT_140c8abf0 | 1;
        DAT_140c8abe8 = &PTR_FUN_140b66a88;
        FUN_1407dd89c(&LAB_140950b80);
    }
    (*(code *)DAT_140c8abe8[1])(&DAT_140c8abe8,*(undefined4 *)(param_3 + 0xc));
    uVar4 = FUN_14040e610();
    if ((int)uVar4 == 0) {
        iVar3 = 0;
        iVar2 = iVar3;
        if ((int)fVar10 < 0) {
            iVar2 = -0x80000000;
        }
        uVar1 = iVar2 - (int)fVar10 >> 0x1f;
        if ((int)((iVar2 - (int)fVar10 ^ uVar1) - uVar1) < 0x55) {
            LAB_14040ddf2:
            if ((int)fVar14 < 0) {
                iVar3 = -0x80000000;
            }
            uVar1 = iVar3 - (int)fVar14 >> 0x1f;
            if ((int)((iVar3 - (int)fVar14 ^ uVar1) - uVar1) < 0x55) {
                LAB_14040de6f:
                iVar2 = 0;
                if ((int)fVar11 < 0) {
                    iVar2 = -0x80000000;
                }
                uVar1 = iVar2 - (int)fVar11 >> 0x1f;
                if ((int)((iVar2 - (int)fVar11 ^ uVar1) - uVar1) < 0x55) {
                    LAB_14040deef:
                    uVar4 = 0;
                }
                else {
                    piVar5 = (int *)(param_3 + 0x94);
                    do {
                        if (*piVar5 == 0xaf) {
                            LAB_14040dee1:
                            *(float *)(param_3 + 0xd0 + uVar8 * 4) =
                                    fVar11 + *(float *)(param_3 + 0xd0 + uVar8 * 4);
                            goto LAB_14040deef;
                        }
                        if (*piVar5 == 0xc5) {
                            ((int *)(param_3 + 0x94))[uVar8] = 0xaf;
                            goto LAB_14040dee1;
                        }
                        uVar1 = (int)uVar8 + 1;
                        uVar8 = (ulonglong)uVar1;
                        piVar5 = piVar5 + 1;
                    } while (uVar1 < 0xf);
                    uVar4 = 0x95;
                }
            }
            else {
                uVar7 = uVar8;
                piVar5 = (int *)(param_3 + 0x94);
                do {
                    if (*piVar5 == 0xb2) {
                        LAB_14040de61:
                        *(float *)(param_3 + 0xd0 + uVar7 * 4) = fVar14 + *(float *)(param_3 + 0xd0 + uVar7 * 4)
                                ;
                        goto LAB_14040de6f;
                    }
                    if (*piVar5 == 0xc5) {
                        ((int *)(param_3 + 0x94))[uVar7] = 0xb2;
                        goto LAB_14040de61;
                    }
                    uVar1 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar1;
                    piVar5 = piVar5 + 1;
                } while (uVar1 < 0xf);
                uVar4 = 0x95;
            }
        }
        else {
            uVar7 = uVar8;
            piVar5 = (int *)(param_3 + 0x94);
            do {
                if (*piVar5 == 0xb0) {
                    LAB_14040dde4:
                    *(float *)(param_3 + 0xd0 + uVar7 * 4) = fVar10 + *(float *)(param_3 + 0xd0 + uVar7 * 4);
                    goto LAB_14040ddf2;
                }
                if (*piVar5 == 0xc5) {
                    ((int *)(param_3 + 0x94))[uVar7] = 0xb0;
                    goto LAB_14040dde4;
                }
                uVar1 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar1;
                piVar5 = piVar5 + 1;
            } while (uVar1 < 0xf);
            uVar4 = 0x95;
        }
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14040df10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    int iVar2;
    undefined **ppuVar3;
    int *piVar4;
    longlong lVar5;
    undefined8 uVar6;
    uint *puVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined4 in_XMM6_Da;
    float fVar11;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar12;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar13;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    float fVar14;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined4 in_XMM10_Da;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined4 in_XMM11_Da;
    float fVar15;
    undefined4 in_XMM11_Db;
    undefined4 in_XMM11_Dc;
    undefined4 in_XMM11_Dd;
    undefined auVar16 [16];
    undefined auVar17 [16];
    undefined auVar18 [16];
    undefined auVar19 [16];
    undefined auVar20 [16];
    undefined auVar21 [16];

    if ((DAT_140c8ac08 & 1) == 0) {
        DAT_140c8ac08 = DAT_140c8ac08 | 1;
        DAT_140c8ac10 = &PTR_FUN_140b66a48;
        FUN_1407dd89c(&LAB_140950ba0);
    }
    if ((DAT_140c8ac08 & 2) == 0) {
        DAT_140c8ac08 = DAT_140c8ac08 | 2;
        DAT_140c8abf8 = &PTR_FUN_140b66a58;
        FUN_1407dd89c(&LAB_140950b90);
    }
    uVar10 = 0;
    iVar2 = 0;
    if ((DAT_140c8ac08 & 4) == 0) {
        DAT_140c8ac08 = DAT_140c8ac08 | 4;
        _DAT_140c8ac04 = 0;
    }
    if ((DAT_140c8ac08 & 8) == 0) {
        DAT_140c8ac08 = DAT_140c8ac08 | 8;
        _DAT_140c8abdc = 0;
    }
    if ((DAT_140c8ac08 & 0x10) == 0) {
        DAT_140c8ac08 = DAT_140c8ac08 | 0x10;
        _DAT_140c8abe4 = 0;
    }
    if ((DAT_140c8ac08 & 0x20) == 0) {
        DAT_140c8ac08 = DAT_140c8ac08 | 0x20;
        _DAT_140c8abd4 = 0;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x140);
    if ((iVar1 == 0x1a) ||
        ((iVar1 != 1 && ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x180) & 0x10580) == 0)))) {
        return 0;
    }
    auVar21 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar20 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    auVar19 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    auVar18 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
    auVar17 = CONCAT412(in_XMM10_Dd,CONCAT48(in_XMM10_Dc,CONCAT44(in_XMM10_Db,in_XMM10_Da)));
    fVar14 = *(float *)(param_1 + 200);
    auVar16 = CONCAT412(in_XMM11_Dd,CONCAT48(in_XMM11_Dc,CONCAT44(in_XMM11_Db,in_XMM11_Da)));
    ppuVar3 = DAT_140c8ac10;
    if (iVar1 == 2) {
        ppuVar3 = DAT_140c8abf8;
    }
    fVar12 = 0.0;
    (*(code *)ppuVar3[1])();
    fVar15 = 1.0;
    fVar14 = fVar14 * fVar12;
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x178);
    if (*(int *)(param_1 + 0x40) == 0) {
        if ((*(int *)(param_1 + 0x44) != 0) &&
            (piVar4 = *(int **)(param_1 + 0x110), uVar9 = uVar10, piVar4 != (int *)0x0)) {
            do {
                piVar4 = piVar4 + 1;
                if (*piVar4 == 4) goto LAB_14040e0a2;
                uVar8 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar8;
            } while (uVar8 < 5);
        }
    }
    else {
        LAB_14040e0a2:
        if (*(longlong *)(param_1 + 0x88) != 0) {
            fVar12 = (float)((uint)fVar12 & 0x7fffffff) *
                     ((float)(uint)*(byte *)(*(longlong *)(param_1 + 0x88) + 6) * 0.003921569 * 2.0 - 1.0)
                    ;
        }
    }
    fVar11 = 0.0;
    fVar13 = 1.0 - (fVar12 + 1.0) * 0.5;
    if (_DAT_140c8ac04 == 0) {
        _DAT_140c8ac04 = 1;
        lVar5 = FUN_140200220();
        DAT_140c8ac00 = fVar11;
        if (lVar5 != 0) {
            DAT_140c8ac00 = *(float *)(lVar5 + 0x18);
        }
    }
    fVar14 = fVar14 * ((fVar15 - (float)((uint)fVar12 & 0x7fffffff)) * DAT_140c8ac00 + fVar15);
    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x14c) & 0x8000) != 0) {
        if (_DAT_140c8abdc == 0) {
            _DAT_140c8abdc = 1;
            lVar5 = FUN_140200220();
            DAT_140c8abd8 = fVar11;
            if (lVar5 != 0) {
                DAT_140c8abd8 = *(float *)(lVar5 + 0x1c);
            }
        }
        fVar14 = fVar14 - DAT_140c8abd8 * fVar14;
        if (_DAT_140c8abe4 == 0) {
            _DAT_140c8abe4 = 1;
            lVar5 = FUN_140200220();
            DAT_140c8abe0 = fVar11;
            if (lVar5 != 0) {
                DAT_140c8abe0 = *(float *)(lVar5 + 0x20);
            }
        }
        uVar6 = FUN_14040e610();
        if ((int)uVar6 != 0) {
            return uVar6;
        }
        if (_DAT_140c8abd4 == 0) {
            _DAT_140c8abd4 = 1;
            lVar5 = FUN_140200220();
            DAT_140c8abd0 = fVar11;
            if (lVar5 != 0) {
                DAT_140c8abd0 = *(float *)(lVar5 + 0x24);
            }
        }
        uVar6 = FUN_14040e610();
        if ((int)uVar6 != 0) {
            return uVar6;
        }
    }
    fVar13 = fVar13 * fVar14;
    if ((int)fVar13 < 0) {
        iVar2 = -0x80000000;
    }
    uVar8 = iVar2 - (int)fVar13;
    if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 0x55) {
        LAB_14040e2f6:
        uVar6 = FUN_14040e610(uVar8,param_2,0x24,param_4,auVar16,auVar17,auVar18,auVar19,auVar20,auVar21
        );
    }
    else {
        puVar7 = (uint *)(param_2 + 0x94);
        do {
            uVar8 = *puVar7;
            if (uVar8 == 0x23) {
                LAB_14040e2e8:
                *(float *)(param_2 + 0xd0 + uVar10 * 4) = fVar13 + *(float *)(param_2 + 0xd0 + uVar10 * 4);
                goto LAB_14040e2f6;
            }
            if (uVar8 == 0xc5) {
                ((uint *)(param_2 + 0x94))[uVar10] = 0x23;
                goto LAB_14040e2e8;
            }
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
            puVar7 = puVar7 + 1;
        } while (uVar8 < 0xf);
        uVar6 = 0x95;
    }
    return uVar6;
}



undefined8 FUN_14040e340(longlong param_1,longlong param_2)

{
    undefined8 uVar1;

    if ((DAT_140c8abb4 & 1) == 0) {
        DAT_140c8abb4 = DAT_140c8abb4 | 1;
        DAT_140c8abb8 = &PTR_FUN_140b66a78;
        FUN_1407dd89c(&LAB_140950bb0);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x140) != 1) {
        return 0;
    }
    (*(code *)DAT_140c8abb8[1])(&DAT_140c8abb8,*(undefined4 *)(param_2 + 0xc));
    uVar1 = FUN_14040e610();
    return uVar1;
}



undefined8 FUN_14040e3d0(longlong param_1,longlong param_2)

{
    undefined8 uVar1;

    if ((DAT_140c8abc8 & 1) == 0) {
        DAT_140c8abc8 = DAT_140c8abc8 | 1;
        DAT_140c8abc0 = &PTR_FUN_140b66a68;
        FUN_1407dd89c(&LAB_140950bc0);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x140) != 1) {
        return 0;
    }
    (*(code *)DAT_140c8abc0[1])(&DAT_140c8abc0,*(undefined4 *)(param_2 + 0xc));
    uVar1 = FUN_14040e610();
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14040e460(longlong param_1,longlong param_2)

{
    bool bVar1;
    float fVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    uint uVar6;
    longlong lVar7;
    int *piVar8;
    longlong lVar9;
    float fVar10;

    piVar8 = *(int **)(param_1 + 0x110);
    fVar10 = 0.0;
    bVar1 = false;
    if (piVar8 != (int *)0x0) {
        lVar7 = 5;
        lVar9 = 0;
        lVar5 = 5;
        do {
            piVar8 = piVar8 + 1;
            if (*piVar8 == 1) {
                fVar2 = *(float *)(*(longlong *)(param_1 + 0x108) + 4 + lVar9);
                if (fVar10 <= fVar2) {
                    fVar10 = fVar2;
                }
                bVar1 = true;
            }
            lVar9 = lVar9 + 4;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if ((bVar1) && (*(longlong *)(param_1 + 0x108) != 0)) {
            *(undefined4 *)(param_2 + 0x10c) = 0;
            lVar5 = 0;
            do {
                if (*(int *)(lVar5 + 4 + *(longlong *)(param_1 + 0x110)) == 1) {
                    uVar4 = *(uint *)(lVar5 + 4 + *(longlong *)(param_1 + 0x108));
                    fVar2 = fVar10;
                    if ((int)(uVar4 ^ (uint)fVar10) < 0) {
                        fVar2 = (float)(-0x80000000 - (int)fVar10);
                    }
                    uVar4 = (int)fVar2 - uVar4;
                    uVar6 = (int)uVar4 >> 0x1f;
                    if ((int)((uVar4 ^ uVar6) - uVar6) < 0x55) {
                        lVar9 = FUN_1402479c0();
                        if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x24) & 4) == 0)) {
                            uVar4 = 0;
                        }
                        else {
                            uVar4 = *(uint *)(lVar9 + 0x30);
                        }
                        *(uint *)(param_2 + 0x10c) = *(uint *)(param_2 + 0x10c) | uVar4;
                    }
                }
                lVar5 = lVar5 + 4;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            goto LAB_14040e574;
        }
    }
    *(undefined4 *)(param_2 + 0x10c) = 0x7f;
    LAB_14040e574:
    if (DAT_140c63840 == (code *)0x0) {
        if (_DAT_140c655a0 != 0) {
            return 0;
        }
        iVar3 = FUN_14020dcc0();
        if (iVar3 < 0) {
            return 0;
        }
        lVar5 = (**(code **)(*DAT_140c63e18 + 0x18))();
    }
    else {
        lVar5 = (*DAT_140c63840)(&PTR_u_ItemRuneInstance_140a6af68,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x170),DAT_140c63858);
    }
    if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x28) != 0)) &&
         (iVar3 = *(int *)(lVar5 + 0x2c), iVar3 != 0)) && (*(int *)(param_2 + 0x11c) == 0)) {
        *(int *)(param_2 + 0x11c) = *(int *)(lVar5 + 0x28);
        *(int *)(param_2 + 0x120) = iVar3;
        return 0;
    }
    return 0;
}



undefined8 FUN_14040e610(undefined8 param_1,longlong param_2,int param_3)

{
    ulonglong uVar1;
    int *piVar2;
    uint uVar3;
    float in_XMM3_Da;
    int local_res8;

    local_res8 = 0;
    if ((int)in_XMM3_Da < 0) {
        local_res8 = -0x80000000;
    }
    uVar3 = local_res8 - (int)in_XMM3_Da >> 0x1f;
    if (0x54 < (int)((local_res8 - (int)in_XMM3_Da ^ uVar3) - uVar3)) {
        uVar3 = 0;
        piVar2 = (int *)(param_2 + 0x94);
        while( true ) {
            uVar1 = (ulonglong)uVar3;
            if (*piVar2 == param_3) break;
            if (*piVar2 == 0xc5) {
                ((int *)(param_2 + 0x94))[uVar1] = param_3;
                break;
            }
            uVar3 = uVar3 + 1;
            piVar2 = piVar2 + 1;
            if (0xe < uVar3) {
                return 0x95;
            }
        }
        *(float *)(param_2 + 0xd0 + uVar1 * 4) = in_XMM3_Da + *(float *)(param_2 + 0xd0 + uVar1 * 4);
        if (param_3 - 0x30U < 2) {
            *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
        }
    }
    return 0;
}



void FUN_14040e6a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    FUN_14040f1b0(param_2,*(undefined8 *)(param_1 + 0x10),param_3,*(undefined8 *)(param_1 + 0xa0),
                  param_4);
    return;
}



undefined8
FUN_14040e6d0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,byte *param_5,
              undefined8 *param_6)

{
    byte bVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    int iVar5;
    undefined8 uVar6;
    byte *pbVar7;
    uint uVar8;
    int *piVar9;
    bool bVar10;

    if ((((param_6 == (undefined8 *)0x0) || (param_2 == 0)) ||
         (FUN_1407e4830(param_6,0,0x28), param_4 == 0)) || (param_3 == 0)) {
        return 1;
    }
    uVar6 = 0;
    if (param_5 == (byte *)0x0) {
        bVar10 = false;
    }
    else {
        uVar3 = FUN_14040bdb0(param_5);
        bVar10 = (uVar3 & 0xfeffffffffffffff) != 0;
    }
    uVar8 = 0;
    piVar9 = (int *)(param_4 + 0x18);
    pbVar7 = param_5;
    do {
        param_6._0_4_ = piVar9[-5];
        param_6._4_4_ = *piVar9;
        if ((int)param_6 < 0) {
            LAB_14040e84e:
            param_6._0_4_ = 0;
            uVar6 = 0x70;
        }
        else if (1 < (int)param_6) {
            if ((int)param_6 == 2) {
                if (param_5 == (byte *)0x0) {
                    bVar1 = 0;
                }
                else if (uVar8 < 6) {
                    bVar1 = *pbVar7;
                }
                else {
                    bVar1 = 0;
                }
                lVar4 = FUN_1400b5f60();
                if (((lVar4 == 0) || (bVar1 == 0)) ||
                    (*(ulonglong *)(lVar4 + 0x10) <= (ulonglong)bVar1 &&
                     (ulonglong)bVar1 != *(ulonglong *)(lVar4 + 0x10))) {
                    param_6._0_4_ = 0;
                    if (bVar10) goto LAB_14040e84e;
                }
                else {
                    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (ulonglong)(bVar1 - 1) * 8);
                    param_6._0_4_ = *(int *)(lVar4 + 0xc);
                    param_6._4_4_ = *(int *)(lVar4 + 0x10);
                }
            }
            else {
                if ((int)param_6 != 4) goto LAB_14040e84e;
                if (param_5 == (byte *)0x0) {
                    LAB_14040e7ba:
                    iVar5 = 0xc5;
                }
                else {
                    if (uVar8 < 6) {
                        bVar1 = *pbVar7;
                    }
                    else {
                        bVar1 = 0;
                    }
                    if (bVar1 == 0) goto LAB_14040e7ba;
                    iVar5 = bVar1 - 1;
                }
                iVar2 = FUN_14040f120(iVar5);
                if (iVar2 == 0) {
                    param_6._0_4_ = 0;
                    if (bVar10) {
                        uVar6 = 0x50;
                    }
                }
                else {
                    param_6._0_4_ = 1;
                    param_6._4_4_ = iVar5;
                }
            }
        }
        uVar8 = uVar8 + 1;
        *param_6 = CONCAT44(param_6._4_4_,(int)param_6);
        piVar9 = piVar9 + 1;
        pbVar7 = pbVar7 + 1;
        param_6 = param_6 + 1;
        if (4 < uVar8) {
            return uVar6;
        }
    } while( true );
}



void FUN_14040e8b0(longlong param_1,longlong *param_2,uint param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 uStack52;

    lVar6 = 0;
    param_2[1] = 0;
    lVar4 = FUN_14018dbc0(*param_2,*(undefined8 *)(param_1 + 0x178),0x10);
    if (*param_2 != lVar4) {
        FUN_1407db590(lVar4,*param_2,param_2[1] << 4);
        if (*param_2 != 0) {
            (**(code **)(*(longlong *)(*param_2 + -0x10) + 8))();
        }
        *param_2 = lVar4;
    }
    for (lVar4 = *(longlong *)(param_1 + 0x178); lVar4 != 0; lVar4 = lVar4 + -1) {
        lVar2 = *(longlong *)(param_1 + 0x170);
        uVar1 = *(uint *)(lVar2 + lVar6);
        if ((param_3 & uVar1) != 0) {
            lVar3 = param_2[1];
            lVar5 = FUN_14018db00(*param_2,lVar3 + 1,0x10);
            *(ulonglong *)(lVar5 + lVar3 * 0x10) = CONCAT44(uStack52,uVar1);
            *(longlong *)(lVar5 + 8 + lVar3 * 0x10) = lVar2 + 8 + lVar6;
            if (*param_2 != lVar5) {
                FUN_1407db590(lVar5,*param_2,param_2[1] << 4);
                if (*param_2 != 0) {
                    (**(code **)(*(longlong *)(*param_2 + -0x10) + 8))();
                }
                *param_2 = lVar5;
            }
            param_2[1] = lVar3 + 1;
        }
        lVar6 = lVar6 + 0x18;
    }
    return;
}



ulonglong FUN_14040e9e0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
    uint uVar1;
    ulonglong uVar2;
    int *piVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong *plVar11;
    uint local_res20;
    int *in_stack_00000038;
    longlong local_48;
    longlong local_40;

    uVar9 = 0;
    *param_2 = 0xc5;
    *param_3 = 0;
    local_40 = 0;
    local_48 = 0;
    FUN_14040e8b0(param_1,&local_48);
    uVar2 = uVar9;
    if (local_40 != 0) {
        uVar1 = FUN_1401ae6f0(0,(int)local_40 + -1);
        plVar11 = *(longlong **)(local_48 + 8 + (ulonglong)uVar1 * 0x10);
        *param_3 = *(undefined4 *)(local_48 + (ulonglong)uVar1 * 0x10);
        local_res20 = 0;
        uVar4 = uVar9;
        do {
            uVar2 = uVar9;
            if ((plVar11 == (longlong *)0x0) || (plVar11[1] == 0)) break;
            uVar2 = FUN_14018dbc0();
            uVar6 = uVar9;
            if (uVar2 != 0) {
                uVar6 = uVar2;
            }
            uVar1 = *(uint *)(plVar11 + 1);
            piVar3 = in_stack_00000038;
            uVar2 = uVar9;
            uVar8 = (uint)uVar4;
            uVar4 = uVar9;
            uVar10 = uVar9;
            uVar7 = uVar9;
            uVar5 = uVar6;
            if (uVar1 != 0) {
                LAB_14040eae0:
                do {
                    uVar6 = uVar5;
                    if ((*piVar3 != 1) || (*(int *)(uVar7 + *plVar11) != piVar3[1])) {
                        uVar8 = (int)uVar2 + 1;
                        piVar3 = piVar3 + 2;
                        uVar2 = (ulonglong)uVar8;
                        if (uVar8 < 5) goto LAB_14040eae0;
                        uVar2 = FUN_14018db00(uVar5,uVar10 + 1,4);
                        *(int *)(uVar10 * 4 + uVar2) = (int)uVar4;
                        if ((uVar5 != uVar2) && (FUN_1407db590(uVar2,uVar5), uVar6 = uVar2, uVar5 != 0)) {
                            (**(code **)(*(longlong *)(uVar5 - 0x10) + 8))(uVar5 - 0x10);
                        }
                        uVar10 = uVar10 + 1;
                    }
                    uVar8 = (int)uVar4 + 1;
                    piVar3 = in_stack_00000038;
                    uVar2 = uVar9;
                    uVar4 = (ulonglong)uVar8;
                    uVar7 = uVar7 + 4;
                    uVar5 = uVar6;
                } while (uVar8 < uVar1);
                uVar8 = local_res20;
                if (uVar10 == 0) goto LAB_14040eb65;
                uVar1 = (**(code **)(DAT_140c77890 + 0x18))();
                uVar9 = 1;
                *param_2 = *(undefined4 *)
                        (*plVar11 +
                         (ulonglong)
                         *(uint *)(uVar6 + ((longlong)
                                                    ((double)(ulonglong)uVar1 * 2.328306436538696e-10 *
                                                     ((double)(ulonglong)((int)uVar10 - 1) + 1.0)) & 0xffffffffU)
                                           * 4) * 4);
                LAB_14040ec0a:
                uVar2 = uVar9;
                if (uVar6 != 0) {
                    (**(code **)(*(longlong *)(uVar6 - 0x10) + 8))(uVar6 - 0x10);
                }
                break;
            }
            LAB_14040eb65:
            FUN_14040e8b0(param_1,&local_48);
            if (local_40 == 0) goto LAB_14040ec0a;
            plVar11 = *(longlong **)(local_48 + 8);
            if (uVar6 != 0) {
                (**(code **)(*(longlong *)(uVar6 - 0x10) + 8))();
            }
            local_res20 = uVar8 + 1;
            uVar4 = (ulonglong)local_res20;
            uVar2 = 0;
        } while (local_res20 < 2);
    }
    if (local_48 != 0) {
        (**(code **)(*(longlong *)(local_48 + -0x10) + 8))(local_48 + -0x10);
    }
    return uVar2;
}



void FUN_14040ec60(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
    undefined4 uVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    ulonglong uVar8;
    uint uVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    undefined auStack232 [32];
    undefined4 local_c8;
    undefined8 *local_b8;
    undefined4 local_a8;
    undefined local_a4 [4];
    undefined8 local_a0;
    undefined8 local_98;
    undefined4 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 1) = 1;
        lVar4 = FUN_14020a7e0(*(undefined4 *)(param_2 + 0x168));
        lVar5 = FUN_14020ac20(*(undefined4 *)(param_2 + 0x16c));
        if ((lVar4 != 0) && (lVar5 != 0)) {
            uVar8 = 0;
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
            puVar7 = (undefined4 *)((longlong)&local_70 + 4);
            puVar6 = (undefined4 *)(lVar5 + 0x18);
            lVar4 = 5;
            do {
                iVar3 = puVar6[-5];
                uVar1 = *puVar6;
                puVar7[-1] = iVar3;
                *puVar7 = uVar1;
                if (iVar3 == 2) {
                    *(undefined4 *)(((longlong)&local_b8 - lVar5) + (longlong)puVar6) = uVar1;
                }
                else if (iVar3 == 4) {
                    *(undefined4 *)(((longlong)&local_a0 - lVar5) + (longlong)puVar6) = uVar1;
                }
                puVar7 = puVar7 + 2;
                puVar6 = puVar6 + 1;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            puVar10 = &local_70;
            uVar11 = uVar8;
            do {
                uVar9 = (uint)uVar8;
                if (*(int *)((longlong)&local_a0 + uVar11) == 0) {
                    if (*(int *)((longlong)&local_88 + uVar11) != 0) {
                        local_b8 = &local_70;
                        iVar3 = FUN_14040e9e0(param_1,&local_a8,local_a4);
                        uVar1 = local_a8;
                        if (((iVar3 == 0) || (lVar4 = FUN_1402479c0(), lVar4 == 0)) ||
                            (((*(uint *)(lVar4 + 0x24) & 4) == 0 ||
                              (((*(uint *)(lVar4 + 0x24) >> 9 & 1) == 0 || ((*(byte *)(lVar4 + 0x30) & 0x7f) == 0)
                              ))))) break;
                        *(undefined4 *)puVar10 = 1;
                        *(undefined4 *)((longlong)puVar10 + 4) = uVar1;
                        if (uVar9 < 6) {
                            *(char *)param_3 = (char)uVar1 + '\x01';
                        }
                    }
                }
                else {
                    lVar4 = FUN_1400b5f60();
                    if (lVar4 == 0) break;
                    local_c8 = *(undefined4 *)(param_2 + 0x180);
                    bVar2 = FUN_14040bb10(lVar4);
                    if (((bVar2 == 0) || (bVar2 == 0)) ||
                        (*(ulonglong *)(lVar4 + 0x10) <= (ulonglong)bVar2 &&
                         (ulonglong)bVar2 != *(ulonglong *)(lVar4 + 0x10))) break;
                    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (ulonglong)(bVar2 - 1) * 8);
                    *(undefined4 *)puVar10 = *(undefined4 *)(lVar4 + 0xc);
                    *(undefined4 *)((longlong)puVar10 + 4) = *(undefined4 *)(lVar4 + 0x10);
                    if (uVar9 < 6) {
                        *(byte *)param_3 = bVar2;
                    }
                }
                uVar8 = (ulonglong)(uVar9 + 1);
                uVar11 = uVar11 + 4;
                puVar10 = puVar10 + 1;
                param_3 = (undefined8 *)((longlong)param_3 + 1);
            } while (uVar9 + 1 < 5);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack232);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14040eed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
    char cVar1;
    undefined8 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    int *piVar5;
    undefined8 local_res8;
    undefined8 local_res18;
    uint local_res20 [2];

    if (param_4 != (char *)0x0) {
        local_res8 = param_1;
        local_res18 = param_3;
        uVar2 = FUN_14040efb0(param_2,0,&local_res18,&local_res8,local_res20);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
        if ((uint)(byte)param_4[8] + (int)local_res18 < (uint)local_res8) {
            local_res8._0_4_ = (uint)(byte)param_4[8] + (int)local_res18;
        }
        if ((uint)local_res8 + (byte)param_4[9] < local_res20[0]) {
            local_res20[0] = (uint)local_res8 + (byte)param_4[9];
        }
        uVar4 = 8;
        if (local_res20[0] < 8) {
            uVar4 = (ulonglong)local_res20[0];
        }
        if (((int)uVar4 != 0) && (lVar3 = FUN_14020df20(), (int)uVar4 != 0)) {
            piVar5 = (int *)(lVar3 + 8);
            do {
                if (*param_4 == '\0') {
                    if ((lVar3 == 0) || (*piVar5 == 0)) {
                        cVar1 = FUN_1401ae6f0();
                    }
                    else {
                        cVar1 = FUN_14040f320();
                    }
                    *param_4 = cVar1;
                }
                piVar5 = piVar5 + 1;
                param_4 = param_4 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_14040efb0(longlong param_1,undefined4 *param_2,uint *param_3,uint *param_4,uint *param_5)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;

    if (param_4 == (uint *)0x0) {
        return 0x80004005;
    }
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    if (1 < *(int *)(param_1 + 0x140) - 1U) {
        return 0;
    }
    if (param_2 == (undefined4 *)0x0) {
        param_2 = (undefined4 *)(param_1 + 8);
    }
    if ((DAT_140c8aba4 & 1) == 0) {
        DAT_140c8aba4 = DAT_140c8aba4 | 1;
    }
    else if (_DAT_140c8abac != 0) goto LAB_14040f05c;
    _DAT_140c8abac = 1;
    lVar3 = FUN_140200220(0x400);
    DAT_140c8aba8 = 0;
    if (lVar3 != 0) {
        DAT_140c8aba8 = *(uint *)(lVar3 + 8);
    }
    LAB_14040f05c:
    if (DAT_140c8aba8 <= (uint)param_2[1]) {
        lVar3 = FUN_14020df20(*(undefined4 *)(param_1 + 0x170));
        lVar4 = FUN_14020ce20(*param_2);
        if (lVar4 == 0) {
            return 0x80004005;
        }
        if (lVar3 == 0) {
            iVar1 = *(int *)(lVar4 + 0x24);
        }
        else {
            iVar1 = *(int *)(lVar3 + 4);
        }
        *param_3 = iVar1 + param_2[0x4b];
        if (((*(uint *)(param_1 + 0x14c) & 0x100000) == 0) || ((*(byte *)(param_2 + 8) & 8) == 0)) {
            if ((lVar3 == 0) || (uVar2 = *(uint *)(lVar3 + 0x30), uVar2 == 0)) {
                uVar2 = *(int *)(lVar4 + 0x28) + param_2[0x4b];
            }
        }
        else {
            lVar3 = FUN_140200220(0x94e);
            if (lVar3 == 0) {
                uVar2 = 3;
            }
            else {
                uVar2 = *(uint *)(lVar3 + 0x10);
            }
        }
        *param_4 = uVar2;
        uVar5 = 8;
        if (uVar2 < 8) {
            uVar5 = uVar2;
        }
        *param_4 = uVar5;
        uVar2 = *param_3;
        if (uVar5 < *param_3) {
            uVar2 = uVar5;
        }
        *param_3 = uVar2;
        *param_5 = *param_4;
    }
    return 0;
}



bool FUN_14040f120(void)

{
    longlong lVar1;

    lVar1 = FUN_1402479c0();
    if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x24) & 4) != 0)) &&
        ((*(uint *)(lVar1 + 0x24) >> 9 & 1) != 0)) {
        return (*(byte *)(lVar1 + 0x30) & 0x7f) != 0;
    }
    return false;
}



bool FUN_14040f160(uint param_1,undefined4 param_2)

{
    longlong lVar1;

    if ((param_1 & 0x40) != 0) {
        param_1 = 0x7f;
    }
    lVar1 = FUN_1402479c0(param_2);
    if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x24) & 4) != 0)) &&
        ((*(uint *)(lVar1 + 0x24) >> 9 & 1) != 0)) {
        return (*(uint *)(lVar1 + 0x30) & param_1) != 0;
    }
    return false;
}



bool FUN_14040f1b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
    uint uVar1;
    uint uVar2;

    if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
        ((((*(uint *)(param_1 + 0x14c) >> 0xe & 1) == 0 && ((*(uint *)(param_2 + 0x14c) & 0x4000) == 0)
          ) && (*(int *)(param_1 + 0x140) == 0x21)))) {
        if (param_3 == 0) {
            param_3 = param_2 + 8;
        }
        if ((((param_5 < *(uint *)(param_3 + 0x130)) &&
              ((*(uint *)(param_1 + 0x180) == 0 ||
                ((*(uint *)(param_2 + 0x180) & *(uint *)(param_1 + 0x180)) != 0)))) &&
             (((*(byte *)(param_1 + 0x28) & 1) == 0 || ((*(byte *)(param_3 + 0x20) & 1) != 0)))) &&
            ((((*(uint *)(param_1 + 0x14c) >> 0xb & 1) == 0 || ((*(byte *)(param_3 + 0x20) & 1) == 0)) &&
              (*(uint *)(param_1 + 0x164) <= *(uint *)(param_3 + 4))))) {
            uVar1 = *(uint *)(param_1 + 0x114);
            uVar2 = FUN_14040f2b0(*(undefined *)((ulonglong)param_5 + param_4));
            if (uVar1 == 0) {
                return false;
            }
            if (uVar2 == 0x40) {
                return true;
            }
            return (uVar1 & uVar2) != 0;
        }
    }
    return false;
}



undefined8 FUN_14040f2b0(undefined param_1)

{
    switch(param_1) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 4;
        case 4:
            return 8;
        case 5:
            return 0x10;
        case 6:
            return 0x20;
        case 7:
            return 0x40;
        default:
            return 0;
    }
}



ulonglong FUN_14040f320(int param_1)

{
    int3 iVar1;
    ulonglong in_RAX;
    int7 iVar2;
    uint uVar3;

    uVar3 = param_1 - 7;
    if (uVar3 < 7) {
        iVar1 = (int3)(uVar3 >> 8);
        iVar2 = (int7)iVar1;
        switch(uVar3) {
            case 0:
                return CONCAT71((int7)iVar1,1);
            case 1:
                return CONCAT71((int7)iVar1,2);
            case 2:
                return CONCAT71((int7)iVar1,3);
            case 3:
                return CONCAT71(iVar2,4);
            case 4:
                return CONCAT71(iVar2,5);
            case 5:
                return CONCAT71(iVar2,6);
            case 6:
                return CONCAT71(iVar2,7);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14040f380(undefined8 param_1,int param_2,int param_3)

{
    longlong lVar1;

    if (param_3 == 0) {
        if (_DAT_140c7cb7c != 0) {
            param_2 = DAT_140c7cb78 + param_2;
            if (param_2 < 1) {
                param_2 = 1;
            }
            return param_2;
        }
        _DAT_140c7cb7c = 1;
        lVar1 = FUN_140200220(0x402);
        if (lVar1 != 0) {
            param_2 = *(int *)(lVar1 + 0xc) + param_2;
            if (param_2 < 1) {
                param_2 = 1;
            }
            DAT_140c7cb78 = *(int *)(lVar1 + 0xc);
            return param_2;
        }
        if (param_2 < 1) {
            param_2 = 1;
        }
        DAT_140c7cb78 = 0;
        return param_2;
    }
    if (_DAT_140c7b30c != 0) {
        param_2 = DAT_140c7b308 + param_2;
        if (param_2 < 1) {
            param_2 = 1;
        }
        return param_2;
    }
    _DAT_140c7b30c = 1;
    lVar1 = FUN_140200220(0x402);
    if (lVar1 != 0) {
        param_2 = *(int *)(lVar1 + 4) + param_2;
        if (param_2 < 1) {
            param_2 = 1;
        }
        DAT_140c7b308 = *(int *)(lVar1 + 4);
        return param_2;
    }
    if (param_2 < 1) {
        param_2 = 1;
    }
    DAT_140c7b308 = 0;
    return param_2;
}



uint FUN_14040f470(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                   int param_5)

{
    uint uVar1;
    float fVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    float fVar8;
    float fVar9;

    uVar4 = 0x32;
    if (0x32 < (uint)(param_5 * 2)) {
        uVar4 = param_5 * 2;
    }
    if (param_5 + 0x32U < uVar4) {
        uVar4 = param_5 + 0x32U;
    }
    uVar1 = uVar4 * 8;
    if (uVar4 + 0x96 < uVar4 * 8) {
        uVar1 = uVar4 + 0x96;
    }
    uVar5 = 0;
    fVar9 = param_2;
    uVar7 = uVar4;
    if (uVar4 != 0) {
        do {
            uVar6 = uVar7 + uVar5 >> 1;
            fVar8 = (float)FUN_14040f570();
            fVar2 = fVar8;
            if ((int)((uint)param_2 ^ (uint)fVar8) < 0) {
                fVar2 = (float)(-0x80000000 - (int)fVar8);
            }
            uVar3 = (int)fVar2 - (int)param_2 >> 0x1f;
            if ((int)(((int)fVar2 - (int)param_2 ^ uVar3) - uVar3) < 0x55) {
                return uVar6;
            }
            if (fVar8 <= fVar9) {
                uVar5 = uVar6 + 1;
                if (uVar4 <= uVar6 + 1) {
                    uVar7 = uVar4 * 2;
                    if (uVar4 + 0x32 < uVar4 * 2) {
                        uVar7 = uVar4 + 0x32;
                    }
                    uVar5 = uVar4;
                    uVar4 = uVar7;
                    if (uVar1 <= uVar7) {
                        return uVar1;
                    }
                }
            }
            else {
                if (uVar7 + uVar5 >> 1 == 0) {
                    return 0;
                }
                uVar7 = uVar6 - 1;
            }
        } while (uVar5 < uVar7);
    }
    return uVar5;
}



undefined4 FUN_14040f570(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    undefined4 uVar5;

    param_2 = param_2 & 0xffffffff;
    if ((DAT_140c8abb0 & 1) == 0) {
        DAT_140c8abb0 = DAT_140c8abb0 | 1;
        DAT_140c8ab90 = &PTR_FUN_140b66a10;
        FUN_1407dd89c(&LAB_140950bd0);
    }
    if (*(ulonglong *)(param_1 + 0x50) < param_2 || *(ulonglong *)(param_1 + 0x50) == param_2) {
        uVar4 = *(uint *)(param_1 + 0x50);
        uVar2 = (uint)param_2;
        FUN_140052360(param_1 + 0x48,uVar2 + 1);
        if (uVar2 < uVar4) {
            uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + param_2 * 4);
        }
        else {
            lVar3 = (ulonglong)uVar4 << 2;
            do {
                lVar1 = *(longlong *)(param_1 + 0x48);
                uVar5 = (*(code *)DAT_140c8ab90[1])(&DAT_140c8ab90,uVar4);
                uVar4 = uVar4 + 1;
                lVar3 = lVar3 + 4;
                *(undefined4 *)(lVar1 + -4 + lVar3) = uVar5;
            } while (uVar4 <= uVar2);
            uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + param_2 * 4);
        }
        return uVar5;
    }
    return *(undefined4 *)(*(longlong *)(param_1 + 0x48) + param_2 * 4);
}



void FUN_14040f660(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
    if (param_4 == 0) {
        if (param_3 == 0) {
            FUN_14040f570();
            return;
        }
    }
    else if (param_3 == 0) {
        if ((DAT_140c8ab80 & 1) == 0) {
            DAT_140c8ab80 = DAT_140c8ab80 | 1;
            DAT_140c8ab88 = &PTR_FUN_140b66a30;
            FUN_1407dd89c(&LAB_140950be0);
        }
        // WARNING: Could not recover jumptable at 0x00014040f6b4. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)DAT_140c8ab88[1])(&DAT_140c8ab88,param_2);
        return;
    }
    if ((DAT_140c8aba0 & 1) == 0) {
        DAT_140c8aba0 = DAT_140c8aba0 | 1;
        DAT_140c8ab98 = &PTR_FUN_140b66a20;
        FUN_1407dd89c(&LAB_140950bf0);
    }
    // WARNING: Could not recover jumptable at 0x00014040f6ff. Too many branches
    // WARNING: Treating indirect jump as call
    (*(code *)DAT_140c8ab98[1])(&DAT_140c8ab98,param_2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_14040f710(longlong param_1,float *param_2,uint *param_3,uint param_4,uint *param_5,int param_6)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    if ((param_2 != (float *)0x0) && (param_3 != (uint *)0x0)) {
        *param_2 = 1.0;
        *param_3 = param_4;
        uVar2 = param_5[1];
        if ((uVar2 != 0) && (uVar7 = *param_5, uVar7 != uVar2)) {
            if (_DAT_140c7b30c == 0) {
                _DAT_140c7b30c = 1;
                lVar5 = FUN_140200220();
                if (lVar5 == 0) {
                    DAT_140c7b308 = 0;
                }
                else {
                    DAT_140c7b308 = *(int *)(lVar5 + 4);
                }
            }
            uVar1 = DAT_140c7b308 + uVar2;
            if ((int)uVar1 < 1) {
                uVar1 = 1;
            }
            uVar6 = (ulonglong)uVar1;
            if (*(ulonglong *)(param_1 + 0x40) < uVar6 || *(ulonglong *)(param_1 + 0x40) == uVar6) {
                fVar10 = 0.0;
            }
            else {
                fVar10 = *(float *)(*(longlong *)(param_1 + 0x38) + uVar6 * 4);
            }
            uVar2 = FUN_14040f380(uVar6,*param_5,uVar2 <= uVar7);
            uVar6 = (ulonglong)uVar2;
            if (*(ulonglong *)(param_1 + 0x40) < uVar6 || *(ulonglong *)(param_1 + 0x40) == uVar6) {
                fVar11 = 0.0;
            }
            else {
                fVar11 = *(float *)(*(longlong *)(param_1 + 0x38) + uVar6 * 4);
            }
            fVar10 = fVar10 / fVar11;
            fVar11 = 0.0;
            if (fVar10 <= 0.0) {
                fVar10 = 0.0;
            }
            *param_2 = fVar10;
            uVar3 = FUN_14040f380(uVar6,param_5[1],1);
            fVar8 = (float)FUN_14040f660(param_1,uVar3,param_6,param_5[2]);
            uVar3 = FUN_14040f380();
            fVar9 = (float)FUN_14040f660(param_1,uVar3,param_6,param_5[2]);
            iVar4 = 0x3f800000;
            fVar10 = fVar8 / fVar9;
            if (fVar8 / fVar9 <= fVar11) {
                fVar10 = fVar11;
            }
            if ((int)((uint)fVar10 ^ 0x3f800000) < 0) {
                iVar4 = 0x40800000;
            }
            uVar7 = iVar4 - (int)fVar10 >> 0x1f;
            uVar2 = param_4;
            if (0x54 < (int)((iVar4 - (int)fVar10 ^ uVar7) - uVar7)) {
                fVar11 = (float)FUN_14040f570(param_1);
                uVar2 = FUN_14040f470(fVar11 * fVar10,fVar11 * fVar10,param_1);
            }
            *param_3 = uVar2;
        }
        uVar2 = param_5[2];
        uVar7 = *param_3;
        if (uVar2 != 0) {
            uVar7 = uVar2;
        }
        if ((param_5[7] != 0) && (uVar2 == 0)) {
            if (_DAT_140c7cb74 == 0) {
                _DAT_140c7cb74 = 1;
                lVar5 = FUN_140200220(0x402);
                DAT_140c7cb70 = 0;
                if (lVar5 != 0) {
                    DAT_140c7cb70 = *(int *)(lVar5 + 8);
                }
            }
            uVar7 = uVar7 + DAT_140c7cb70;
        }
        uVar2 = param_5[5];
        if ((uVar2 != 0) && (uVar7 < uVar2)) {
            uVar7 = uVar2;
        }
        uVar2 = param_5[6];
        if ((uVar2 != 0) && (uVar2 < uVar7)) {
            uVar7 = uVar2;
        }
        if ((uVar7 != *param_3) && (param_6 == 0)) {
            *param_3 = uVar7;
            fVar11 = 0.0;
            fVar10 = (float)FUN_14040f660(param_1,param_4,0,param_5[2]);
            if (fVar10 <= fVar11) {
                fVar10 = fVar11;
            }
            fVar8 = fVar10;
            if ((int)fVar10 < 0) {
                fVar8 = (float)(0x80000000 - (int)fVar10);
            }
            if (0x54 < (int)(((uint)fVar8 ^ (int)fVar8 >> 0x1f) - ((int)fVar8 >> 0x1f))) {
                fVar9 = (float)FUN_14040f660(param_1,*param_3,0,param_5[2]);
                fVar8 = fVar9 / fVar10;
                if (fVar9 / fVar10 <= fVar11) {
                    fVar8 = fVar11;
                }
                *param_2 = fVar8;
            }
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_14040fa40(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    int local_res10 [2];

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x60);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if ((undefined4 *)((longlong)puVar2 + 0x14) == (undefined4 *)0x0) {
        return 0;
    }
    uVar5 = FUN_14020ebe0(*(undefined4 *)((longlong)puVar2 + 0x14));
    return uVar5;
}



undefined8 * FUN_14040fae0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;

    lVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1400b52a0();
    puVar1 = param_1 + 0x2b;
    FUN_1407e4830(puVar1,0,0x90);
    *puVar1 = 0xc5000000c5;
    param_1[0x2c] = 0xc5000000c5;
    param_1[0x2d] = 0xc5000000c5;
    param_1[0x2e] = 0xc5000000c5;
    param_1[0x2f] = 0xc5000000c5;
    param_1[0x30] = 0xc5000000c5;
    param_1[0x31] = 0xc5000000c5;
    *(undefined4 *)(param_1 + 0x32) = 0xc5;
    FUN_1407e4830(puVar1,0,400);
    FUN_1407e4830(puVar1,0,0x90);
    lVar4 = 0xf;
    do {
        *(undefined4 *)(lVar2 + (longlong)puVar1) = 0xc5;
        lVar2 = lVar2 + 4;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x60] = puVar3;
    param_1[0x61] = puVar3;
    param_1[0x62] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    FUN_1403b8ce0(param_1 + 99);
    param_1[0x8e] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    *(undefined4 *)(param_1 + 0x97) = 0;
    *(undefined4 *)(param_1 + 0x83) = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    return param_1;
}



undefined8 * FUN_14040fc60(undefined8 *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;

    lVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1400b52a0();
    puVar1 = param_1 + 0x2b;
    FUN_1407e4830(puVar1,0,0x90);
    *puVar1 = 0xc5000000c5;
    param_1[0x2c] = 0xc5000000c5;
    param_1[0x2d] = 0xc5000000c5;
    param_1[0x2e] = 0xc5000000c5;
    param_1[0x2f] = 0xc5000000c5;
    param_1[0x30] = 0xc5000000c5;
    param_1[0x31] = 0xc5000000c5;
    *(undefined4 *)(param_1 + 0x32) = 0xc5;
    FUN_1407e4830(puVar1,0,400);
    FUN_1407e4830(puVar1,0,0x90);
    lVar4 = 0xf;
    do {
        *(undefined4 *)(lVar2 + (longlong)puVar1) = 0xc5;
        lVar2 = lVar2 + 4;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x60] = puVar3;
    param_1[0x61] = puVar3;
    param_1[0x62] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    FUN_1403b8ce0(param_1 + 99);
    param_1[0x8e] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    *(undefined4 *)(param_1 + 0x97) = 0;
    *(undefined4 *)(param_1 + 0x83) = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    FUN_140410300(param_1,param_2,1);
    return param_1;
}



void FUN_14040fdf0(longlong **param_1)

{
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    if (param_1[0x60] != (longlong *)0x0) {
        FUN_14018b900(param_1[0x60],0);
        return;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140410071)
// WARNING: Removing unreachable block (ram,0x00014040ffff)
// WARNING: Could not reconcile some variable overlaps

longlong FUN_14040fe30(longlong **param_1,longlong param_2)

{
    ulonglong uVar1;
    short *psVar2;
    short sVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    short *psVar8;
    undefined8 uVar9;
    short **ppsVar10;
    longlong *plVar11;
    longlong *plVar12;
    longlong local_res8;
    undefined local_148 [8];
    undefined2 *local_140;
    undefined2 *local_138;
    undefined2 *local_130;
    undefined local_128 [8];
    longlong local_120;
    undefined2 *local_118;
    longlong local_110;
    undefined **local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;

    plVar12 = (longlong *)0x0;
    if ((*(int *)(param_1 + 0x94) != 0) && (param_1[1] != (longlong *)0x0)) {
        if ((DAT_140dc2800 & 1) == 0) {
            DAT_140dc2800 = DAT_140dc2800 | 1;
            DAT_140dc280c = 0;
        }
        plVar11 = plVar12;
        if (*(int *)(param_1 + 0x94) != 0) {
            plVar11 = param_1[1];
        }
        if (DAT_140dc280c == 0) {
            DAT_140dc280c = 1;
            lVar6 = FUN_140200220(0x4be);
            if (lVar6 == 0) {
                DAT_140dc2808 = 0;
            }
            else {
                DAT_140dc2808 = *(int *)(lVar6 + 4);
            }
        }
        if (*(int *)plVar11 == DAT_140dc2808) {
            FUN_1400b6f30(&local_108);
            local_108 = &PTR_FUN_140b69230;
            local_38 = (undefined2 *)0x0;
            local_48 = ZEXT816(0);
            puVar7 = (undefined2 *)FUN_14018b280(0x10);
            local_48 = CONCAT88(puVar7,puVar7);
            local_38 = puVar7 + 8;
            if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = 0;
            }
            plVar11 = plVar12;
            if (*(int *)(param_1 + 0x94) != 0) {
                plVar11 = param_1[1];
            }
            psVar8 = (short *)FUN_14034bdd0(local_38,*(int *)(plVar11 + 0x3c));
            if (psVar8 == (short *)0x0) {
                if (local_f8 != local_f0) {
                    *local_f8 = 0;
                    local_f0 = local_f8;
                }
            }
            else {
                sVar3 = *psVar8;
                plVar11 = plVar12;
                while (sVar3 != 0) {
                    plVar11 = (longlong *)((longlong)plVar11 + 1);
                    sVar3 = psVar8[(longlong)plVar11];
                }
                FUN_14001c480(local_100,psVar8,psVar8 + (longlong)plVar11);
            }
            puVar7 = (undefined2 *)FUN_14018b280(0x10);
            local_130 = puVar7 + 8;
            if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = 0;
            }
            plVar11 = plVar12;
            local_140 = puVar7;
            local_138 = puVar7;
            if (*param_1 == (longlong *)0x0) {
                do {
                    psVar8 = &DAT_1409e8a7e + (longlong)plVar11;
                    plVar11 = (longlong *)((longlong)plVar11 + 1);
                } while (*psVar8 != 0);
                if ((longlong)plVar11 * 2 >> 1 == 0) {
                    FUN_1407db590(puVar7,&DAT_1409e8a7c,0);
                }
                else {
                    FUN_14001c310(local_148);
                    puVar7 = local_140;
                }
            }
            else {
                uVar9 = (**(code **)(**param_1 + 0x30))();
                ppsVar10 = (short **)FUN_14034c700(&local_res8,L"%I64u",uVar9);
                psVar8 = *ppsVar10;
                sVar3 = *psVar8;
                while (sVar3 != 0) {
                    plVar11 = (longlong *)((longlong)plVar11 + 1);
                    sVar3 = psVar8[(longlong)plVar11];
                }
                if ((longlong)plVar11 * 2 >> 1 == 0) {
                    FUN_1407db590(puVar7,psVar8,0);
                }
                else {
                    FUN_14001c310(local_148);
                    puVar7 = local_140;
                }
                if (local_res8 != 0) {
                    (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
                }
            }
            lVar6 = FUN_14018b280(0x60);
            plVar11 = plVar12;
            if (lVar6 != 0) {
                plVar11 = (longlong *)FUN_1404ddb40(lVar6,puVar7);
            }
            FUN_1400b7480(&local_108,plVar11);
            lVar6 = FUN_1400b7660(&local_108);
            psVar8 = *(short **)(lVar6 + 8);
            *(undefined8 *)(param_2 + 8) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            sVar3 = *psVar8;
            while (sVar3 != 0) {
                plVar12 = (longlong *)((longlong)plVar12 + 1);
                sVar3 = psVar8[(longlong)plVar12];
            }
            FUN_14001c1b0(param_2,psVar8,psVar8 + (longlong)plVar12);
            if (puVar7 != (undefined2 *)0x0) {
                FUN_14018b900(puVar7,0);
            }
            if (local_48._0_8_ != 0) {
                FUN_14018b900(local_48._0_8_,0);
            }
            FUN_1400b7390(&local_108);
            return param_2;
        }
        psVar8 = (short *)FUN_14034bdd0();
        if (psVar8 != (short *)0x0) {
            local_140 = (undefined2 *)0x0;
            local_130 = (undefined2 *)0x0;
            plVar11 = plVar12;
            do {
                psVar2 = &DAT_140af8b0a + (longlong)plVar11;
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            } while (*psVar2 != 0);
            lVar6 = (longlong)plVar11 * 2 >> 1;
            uVar1 = lVar6 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar4 = uVar1 * 2;
                local_140 = (undefined2 *)FUN_14018b280(lVar4,0);
                local_130 = (undefined2 *)(lVar4 + (longlong)local_140);
            }
            lVar4 = (longlong)local_140;
            lVar6 = lVar6 * 2;
            FUN_1407db590(local_140,&DAT_140af8b08,lVar6);
            local_138 = (undefined2 *)(lVar6 + lVar4);
            if (local_138 != (undefined2 *)0x0) {
                *local_138 = 0;
            }
            local_120 = 0;
            local_110 = 0;
            sVar3 = *psVar8;
            while (sVar3 != 0) {
                plVar12 = (longlong *)((longlong)plVar12 + 1);
                sVar3 = psVar8[(longlong)plVar12];
            }
            lVar6 = (longlong)plVar12 * 2 >> 1;
            uVar1 = lVar6 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar5 = uVar1 * 2;
                local_120 = FUN_14018b280(lVar5,0);
                local_110 = lVar5 + local_120;
            }
            lVar5 = local_120;
            lVar6 = lVar6 * 2;
            FUN_1407db590(local_120,psVar8,lVar6);
            local_118 = (undefined2 *)(lVar6 + lVar5);
            if (local_118 != (undefined2 *)0x0) {
                *local_118 = 0;
            }
            FUN_1400f9a50(param_2,local_128,local_148);
            if (lVar5 != 0) {
                FUN_14018b900(lVar5,0);
            }
            if (lVar4 == 0) {
                return param_2;
            }
            FUN_14018b900(lVar4,0);
            return param_2;
        }
    }
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar7 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_2 + 8) = puVar7;
    *(undefined2 **)(param_2 + 0x10) = puVar7;
    *(undefined2 **)(param_2 + 0x18) = puVar7 + 8;
    if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
    }
    return param_2;
}



bool FUN_140410300(longlong **param_1,longlong **param_2,int param_3)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    bool bVar8;
    bool bVar9;

    bVar9 = false;
    bVar4 = false;
    if (param_2 == (longlong **)0x0) {
        param_1[2] = (longlong *)0x0;
        *(undefined4 *)(param_1 + 3) = 0;
        iVar5 = *(int *)(param_1 + 0x96);
        if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0x83) = 0;
            *(undefined4 *)(param_1 + 0x96) = 0;
        }
        bVar9 = *(int *)((longlong)param_1 + 0x4b4) != 0;
        if (bVar9) {
            *(undefined4 *)(param_1 + 99) = 0;
            *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x97);
        if (iVar6 != 0) {
            *(undefined4 *)(param_1 + 0x97) = 0;
            param_1[0x8e] = (longlong *)0x0;
        }
        plVar2 = *param_1;
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
            *param_1 = (longlong *)0x0;
        }
        bVar8 = plVar2 != (longlong *)0x0 || (iVar6 != 0 || (bVar9 || iVar5 != 0));
        if ((*(int *)(param_1 + 0x94) < 7) && (*(int *)(param_1 + 0x94) != 0)) {
            param_1[1] = (longlong *)0x0;
            *(undefined4 *)(param_1 + 0x94) = 0;
            bVar8 = true;
        }
        if ((*(int *)(param_1 + 0x93) < 7) && (*(int *)(param_1 + 0x93) != 0)) {
            *(undefined4 *)(param_1 + 0x93) = 0;
            bVar8 = true;
        }
        if ((*(int *)((longlong)param_1 + 0x49c) < 7) && (*(int *)((longlong)param_1 + 0x49c) != 0)) {
            *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
            bVar8 = true;
        }
        if ((*(int *)((longlong)param_1 + 0x4a4) < 7) && (*(int *)((longlong)param_1 + 0x4a4) != 0)) {
            *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
            bVar8 = true;
        }
        iVar5 = *(int *)(param_1 + 0x95);
        if (6 < iVar5) goto LAB_140410654;
        LAB_140410647:
        if (iVar5 == 0) goto LAB_140410654;
        *(undefined4 *)(param_1 + 0x95) = 0;
    }
    else {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
        *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
        iVar5 = FUN_1404111e0(param_1,param_2 + 0x83,0);
        iVar6 = FUN_1404129b0(param_1,param_2 + 99,0);
        pplVar1 = param_2 + 0x8e;
        bVar8 = iVar6 != 0 || iVar5 != 0;
        if (((pplVar1 == (longlong **)0x0) || (*(int *)((longlong)param_2 + 0x474) == 0)) ||
            (*(int *)pplVar1 == 0)) {
            if (*(int *)(param_1 + 0x97) != 0) {
                *(undefined4 *)(param_1 + 0x97) = 0;
                param_1[0x8e] = (longlong *)0x0;
                goto LAB_1404103e7;
            }
        }
        else {
            if ((*(int *)pplVar1 != *(int *)(param_1 + 0x8e)) ||
                (*(int *)((longlong)param_2 + 0x474) != *(int *)((longlong)param_1 + 0x474))) {
                bVar9 = true;
            }
            plVar2 = *pplVar1;
            *(undefined4 *)(param_1 + 0x97) = 6;
            param_1[0x8e] = plVar2;
            if (bVar9) {
                LAB_1404103e7:
                bVar8 = true;
            }
        }
        plVar2 = *param_2;
        plVar3 = *param_1;
        if (plVar2 != plVar3) {
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 8))();
                *param_1 = (longlong *)0x0;
            }
            *param_1 = plVar2;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)*plVar2)();
            }
            bVar8 = true;
        }
        iVar5 = *(int *)(param_2 + 0x94);
        iVar6 = *(int *)(param_1 + 0x94);
        plVar2 = param_2[1];
        if (iVar6 <= iVar5) {
            if (plVar2 == (longlong *)0x0) {
                if ((iVar5 == 6) && (iVar6 != 0)) {
                    param_1[1] = (longlong *)0x0;
                    *(undefined4 *)(param_1 + 0x94) = 0;
                    goto LAB_140410466;
                }
            }
            else {
                if ((plVar2 != param_1[1]) || (iVar5 != iVar6)) {
                    bVar4 = true;
                }
                param_1[1] = plVar2;
                *(int *)(param_1 + 0x94) = iVar5;
                if (bVar4) {
                    LAB_140410466:
                    bVar8 = true;
                }
            }
        }
        iVar5 = FUN_140412570(param_1,param_2 + 4,0,*(undefined4 *)(param_2 + 0x93));
        if (iVar5 != 0) {
            bVar8 = true;
        }
        iVar5 = FUN_140412800(param_1,param_2 + 0x2b,0,*(undefined4 *)((longlong)param_2 + 0x49c));
        if (iVar5 != 0) {
            bVar8 = true;
        }
        iVar7 = FUN_140412900(param_1,param_2 + 0x5d,0,*(undefined4 *)((longlong)param_2 + 0x4a4));
        iVar6 = *(int *)(param_2 + 0x95);
        iVar5 = *(int *)(param_1 + 0x95);
        if (iVar7 != 0) {
            bVar8 = true;
        }
        if (iVar6 < iVar5) goto LAB_140410654;
        if (param_2 + 0x8f == (longlong **)0x0) {
            if (iVar6 != 6) goto LAB_140410654;
            goto LAB_140410647;
        }
        param_1[0x8f] = (longlong *)0x0;
        param_1[0x90] = (longlong *)0x0;
        param_1[0x91] = (longlong *)0x0;
        param_1[0x92] = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0x8f) = *(undefined4 *)(param_2 + 0x8f);
        *(undefined4 *)((longlong)param_1 + 0x47c) = *(undefined4 *)((longlong)param_2 + 0x47c);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
        *(undefined4 *)((longlong)param_1 + 0x484) = *(undefined4 *)((longlong)param_2 + 0x484);
        *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)(param_2 + 0x91);
        *(undefined4 *)((longlong)param_1 + 0x48c) = *(undefined4 *)((longlong)param_2 + 0x48c);
        *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(param_2 + 0x92);
        *(undefined4 *)((longlong)param_1 + 0x494) = *(undefined4 *)((longlong)param_2 + 0x494);
        *(int *)(param_1 + 0x95) = iVar6;
    }
    bVar8 = true;
    LAB_140410654:
    if (param_3 != 0) {
        FUN_140412ad0(param_1);
    }
    return bVar8;
}



int FUN_140410680(longlong param_1,longlong param_2,undefined4 param_3)

{
    int *piVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    iVar2 = 0;
    puVar3 = (undefined8 *)FUN_1400580e0(param_2,param_3);
    puVar6 = &DAT_140a12138;
    if ((puVar3 != &DAT_140a12138) && (*(int *)(puVar3 + 1) == 5)) {
        local_20 = 0xfffffffe;
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_2;
        puVar3 = (undefined8 *)FUN_1400580e0(param_2,param_3);
        if ((puVar3 != puVar6) && (*(int *)(puVar3 + 1) == 5)) {
            FUN_1400579e0(local_18);
            lVar5 = local_18;
            puVar6 = (undefined8 *)FUN_1400580e0(local_18,param_3);
            puVar3 = *(undefined8 **)(lVar5 + 0x10);
            *puVar3 = *puVar6;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(local_18);
        }
        iVar2 = FUN_1404109e0(param_1,param_2,&local_28);
        local_28 = &PTR_FUN_140b56a08;
        if (local_18 == 0) {
            return iVar2;
        }
        FUN_1400579e0();
        return iVar2;
    }
    plVar4 = (longlong *)FUN_140417660(param_2,param_3);
    if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
        iVar2 = FUN_140410300(param_1,*plVar4,1);
        return iVar2;
    }
    plVar4 = (longlong *)FUN_140417660(param_2,param_3);
    if ((((plVar4 == (longlong *)0x0) || (lVar5 = *plVar4, lVar5 == 0)) ||
         (*(int *)(lVar5 + 0x4b8) == 0)) || ((*(int *)(lVar5 + 0x474) == 0 || (lVar5 + 0x470 == 0)))) {
        plVar4 = (longlong *)FUN_140417660(param_2,param_3);
        if ((((plVar4 == (longlong *)0x0) ||
              ((lVar5 = *plVar4, lVar5 == 0 || (*(int *)(lVar5 + 0x4b4) == 0)))) ||
             (piVar1 = (int *)(lVar5 + 0x318), *piVar1 == 0)) || (piVar1 == (int *)0x0)) {
            plVar4 = (longlong *)FUN_140417660(param_2,param_3);
            if ((((plVar4 == (longlong *)0x0) || (lVar5 = *plVar4, lVar5 == 0)) ||
                 (*(int *)(lVar5 + 0x4b0) == 0)) ||
                ((piVar1 = (int *)(lVar5 + 0x418), *piVar1 == 0 || (piVar1 == (int *)0x0)))) {
                plVar4 = (longlong *)FUN_140417660(param_2,param_3);
                if (plVar4 != (longlong *)0x0) {
                    puVar3 = (undefined8 *)*plVar4;
                    if (puVar3 != (undefined8 *)0x0) {
                        puVar3 = (undefined8 *)*puVar3;
                    }
                    if (puVar3 != (undefined8 *)0x0) {
                        iVar2 = FUN_1404123f0(param_1,puVar3,1);
                        goto LAB_1404109b0;
                    }
                }
                lVar5 = FUN_140417bf0(param_2,param_3);
                if (lVar5 == 0) {
                    lVar5 = FUN_140417c90(param_2,param_3);
                    if (lVar5 == 0) {
                        lVar5 = FUN_140417d90(param_2,param_3);
                        if (lVar5 == 0) {
                            lVar5 = FUN_140417d10(param_2,param_3);
                            if (lVar5 == 0) {
                                plVar4 = (longlong *)FUN_140417660(param_2,param_3);
                                if (plVar4 == (longlong *)0x0) {
                                    return 0;
                                }
                                lVar5 = *plVar4;
                                if (lVar5 == 0) {
                                    return 0;
                                }
                                if (*(int *)(lVar5 + 0x4a4) == 0) {
                                    return 0;
                                }
                                if (lVar5 == -0x2e8) {
                                    return 0;
                                }
                                if (*(int *)(lVar5 + 0x4a4) == 0) {
                                    return 0;
                                }
                                if (lVar5 + 0x2e8 == 0) {
                                    return 0;
                                }
                                iVar2 = FUN_140412900(param_1,lVar5 + 0x2e8,1);
                            }
                            else {
                                iVar2 = FUN_140412690(param_1,lVar5,1);
                            }
                        }
                        else {
                            iVar2 = FUN_140412800(param_1,lVar5,1);
                        }
                    }
                    else {
                        iVar2 = FUN_140412570(param_1,lVar5,1);
                    }
                }
                else {
                    if (*(int *)(param_1 + 0x4a0) < 7) {
                        if ((lVar5 != *(longlong *)(param_1 + 8)) || (*(int *)(param_1 + 0x4a0) != 6)) {
                            iVar2 = 1;
                        }
                        *(longlong *)(param_1 + 8) = lVar5;
                        *(undefined4 *)(param_1 + 0x4a0) = 6;
                    }
                    FUN_140412ad0(param_1);
                }
            }
            else {
                iVar2 = FUN_1404111e0(param_1,piVar1,1);
            }
        }
        else {
            iVar2 = FUN_1404129b0(param_1,piVar1,1);
        }
    }
    else {
        iVar2 = FUN_1404124e0(param_1,lVar5 + 0x470,1);
    }
    LAB_1404109b0:
    if (iVar2 != 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return iVar2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404109e0(longlong param_1,longlong param_2,longlong *param_3)

{
    ushort uVar1;
    bool bVar2;
    ushort *puVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    undefined4 uVar10;
    undefined8 *puVar11;
    ulonglong uVar12;
    ushort *puVar13;
    int *piVar14;
    longlong *plVar15;
    double *pdVar16;
    undefined8 *puVar17;
    longlong lVar18;
    ulonglong uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined auStack312 [32];
    int local_118;
    undefined **local_110;
    undefined4 local_108;
    longlong local_100;
    undefined ***local_f8;
    undefined8 local_f0;
    undefined **local_e8;
    undefined4 local_e0;
    longlong local_d8;
    longlong *local_d0;
    undefined **local_c8;
    undefined4 local_c0;
    undefined4 uStack188;
    longlong local_b8;
    undefined local_a8 [8];
    int local_a0;
    longlong local_98;
    double local_90;
    double local_88;
    undefined4 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    local_e0 = 0xfffffffe;
    local_d8 = param_3[2];
    local_118 = 0;
    local_e8 = &PTR_FUN_140b56a08;
    bVar6 = false;
    *(undefined4 *)(*(longlong *)(local_d8 + 0x10) + 8) = 0;
    *(longlong *)(local_d8 + 0x10) = *(longlong *)(local_d8 + 0x10) + 0x10;
    local_d0 = param_3;
    FUN_1400fa090(&local_e8,0xffffffff);
    uVar20 = 0;
    uVar21 = 0;
    *(longlong *)(param_3[2] + 0x10) = *(longlong *)(param_3[2] + 0x10) + -0x10;
    LAB_140410a84:
    bVar2 = true;
    iVar8 = (**(code **)(*local_d0 + 8))();
    if ((iVar8 == 0) || (iVar8 = FUN_1400fcba0(&local_e8), iVar8 == 0)) {
        FUN_140412ad0(param_1);
        if ((bVar6) && (local_118 == 0)) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
        }
        local_e8 = &PTR_FUN_140b56a08;
        if (local_d8 != 0) {
            FUN_1400579e0();
        }
        FUN_1407db4f0(local_58 ^ (ulonglong)auStack312);
        return;
    }
    FUN_1400fbb00(&local_e8,local_a8);
    lVar7 = local_98;
    lVar18 = *(longlong *)(*(longlong *)(local_98 + 0x20) + 0xa0);
    if (local_a0 - 1U < *(uint *)(lVar18 + 0x38)) {
        puVar17 = (undefined8 *)((longlong)(local_a0 + -1) * 0x10 + *(longlong *)(lVar18 + 0x18));
    }
    else {
        local_f0 = (double)local_a0;
        if (local_f0 == (double)CONCAT44(uVar21,uVar20)) {
            puVar17 = *(undefined8 **)(lVar18 + 0x20);
        }
        else {
            local_f0._4_4_ = (int)((ulonglong)local_f0 >> 0x20);
            puVar17 = (undefined8 *)
                    (*(longlong *)(lVar18 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_f0._4_4_ + (int)local_f0) %
                      (longlong)((1 << (*(byte *)(lVar18 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar17 + 3) == 3) && (local_f0 == (double)puVar17[2])) goto LAB_140410b44;
            puVar17 = (undefined8 *)puVar17[4];
        } while (puVar17 != (undefined8 *)0x0);
        puVar17 = &DAT_140a12138;
    }
    LAB_140410b44:
    puVar11 = *(undefined8 **)(local_98 + 0x10);
    *puVar11 = *puVar17;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar17 + 1);
    *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + 0x10;
    lVar18 = *(longlong *)(param_2 + 0x10);
    plVar15 = (longlong *)(lVar18 + -0x10);
    iVar8 = -1;
    if (plVar15 != &DAT_140a12138) {
        iVar8 = *(int *)(lVar18 + -8);
    }
    iVar9 = *(int *)(lVar18 + -8);
    if ((iVar9 == 7) || (iVar9 == 2)) {
        bVar5 = true;
    }
    else {
        bVar5 = false;
    }
    if ((plVar15 == &DAT_140a12138) || (1 < iVar9 - 3U)) {
        bVar2 = false;
    }
    if ((*(int *)(lVar18 + -8) == 3) ||
        ((*(int *)(lVar18 + -8) == 4 && (iVar9 = FUN_14005ac80(*plVar15 + 0x20,&local_f0), iVar9 != 0))
        )) {
        bVar4 = true;
    }
    else {
        bVar4 = false;
    }
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    if (iVar8 == 5) {
        FUN_1400fbf40(&local_e8,&local_c8);
        local_108 = 0xfffffffe;
        local_100 = local_b8;
        local_f8 = &local_c8;
        local_110 = &PTR_FUN_140b56a08;
        *(undefined4 *)(*(longlong *)(local_b8 + 0x10) + 8) = 0;
        *(longlong *)(local_b8 + 0x10) = *(longlong *)(local_b8 + 0x10) + 0x10;
        FUN_1400fa090(&local_110,0xffffffff);
        *(longlong *)(local_b8 + 0x10) = *(longlong *)(local_b8 + 0x10) + -0x10;
        uVar12 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        while ((iVar8 = (*(code *)(*local_f8)[1])(), iVar8 != 0 &&
                                                     (iVar8 = FUN_1400fcba0(&local_110), iVar8 != 0))) {
            uVar10 = FUN_1400fc140(&local_110);
            if ((uint)uVar12 < 8) {
                *(undefined4 *)((longlong)&local_78 + uVar12 * 4) = uVar10;
                uVar12 = (ulonglong)((uint)uVar12 + 1);
            }
        }
        if (*(int *)(param_1 + 0x4a8) < 7) {
            bVar6 = true;
            *(undefined8 *)(param_1 + 0x478) = 0;
            *(undefined8 *)(param_1 + 0x480) = 0;
            *(undefined8 *)(param_1 + 0x488) = 0;
            *(undefined8 *)(param_1 + 0x490) = 0;
            *(undefined4 *)(param_1 + 0x478) = (undefined4)local_78;
            *(undefined4 *)(param_1 + 0x47c) = local_78._4_4_;
            *(undefined4 *)(param_1 + 0x480) = (undefined4)local_70;
            *(undefined4 *)(param_1 + 0x484) = local_70._4_4_;
            *(undefined4 *)(param_1 + 0x488) = (undefined4)local_68;
            *(undefined4 *)(param_1 + 0x48c) = local_68._4_4_;
            *(undefined4 *)(param_1 + 0x490) = (undefined4)local_60;
            *(undefined4 *)(param_1 + 0x494) = local_60._4_4_;
            *(undefined4 *)(param_1 + 0x4a8) = 6;
        }
        local_110 = &PTR_FUN_140b56a08;
        if (local_100 != 0) {
            FUN_1400579e0();
        }
        local_c8 = &PTR_FUN_140b56a08;
        if (local_b8 != 0) {
            FUN_1400579e0();
        }
    }
    else {
        if (bVar2) {
            if (bVar4) goto LAB_140410f24;
            FUN_1400fb8d0(&local_e8,&local_110);
            if (local_100 != 0) {
                FUN_1400579e0();
            }
            puVar11 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),local_a0);
            puVar17 = *(undefined8 **)(lVar7 + 0x10);
            *puVar17 = *puVar11;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            plVar15 = (longlong *)(*(longlong *)(param_2 + 0x10) + -0x10);
            if (*(int *)(*(longlong *)(param_2 + 0x10) + -8) == 4) {
                LAB_140410de1:
                lVar18 = *plVar15 + 0x20;
            }
            else {
                iVar8 = FUN_14005e620(param_2,plVar15);
                if (iVar8 != 0) {
                    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_2);
                    }
                    plVar15 = (longlong *)(*(longlong *)(param_2 + 0x10) + -0x10);
                    goto LAB_140410de1;
                }
                lVar18 = 0;
            }
            FUN_14018f2d0(&local_c8,lVar18);
            puVar3 = (ushort *)CONCAT44(uStack188,local_c0);
            bVar2 = false;
            if (*(int *)(param_1 + 0x4ac) < 7) {
                uVar12 = local_b8 - (longlong)puVar3 >> 1;
                if (uVar12 == 0) {
                    bVar2 = false;
                    if (*(int *)(param_1 + 0x4ac) != 0) {
                        bVar2 = true;
                        FUN_14001c2b0(param_1 + 0x2f8,*(undefined8 *)(param_1 + 0x300));
                        *(undefined4 *)(param_1 + 0x4ac) = 0;
                    }
                }
                else {
                    uVar19 = *(longlong *)(param_1 + 0x308) - *(longlong *)(param_1 + 0x300) >> 1;
                    if (uVar19 == uVar12) {
                        uVar12 = 0;
                        if (uVar19 == 0) {
                            LAB_140410e87:
                            bVar2 = true;
                        }
                        else {
                            puVar13 = puVar3;
                            do {
                                uVar1 = *(ushort *)
                                        ((*(longlong *)(param_1 + 0x300) - (longlong)puVar3) + (longlong)puVar13);
                                if (uVar1 != *puVar13) {
                                    iVar8 = 1;
                                    if (uVar1 < *puVar13) {
                                        iVar8 = -1;
                                    }
                                    if (iVar8 == 0) goto LAB_140410e87;
                                    goto LAB_140410e8e;
                                }
                                uVar12 = uVar12 + 1;
                                puVar13 = puVar13 + 1;
                            } while (uVar12 < uVar19);
                            bVar2 = true;
                        }
                    }
                    else {
                        LAB_140410e8e:
                        bVar2 = false;
                    }
                    if (&local_c8 != (undefined ***)(param_1 + 0x2f8)) {
                        FUN_14001c480((undefined ***)(param_1 + 0x2f8),puVar3);
                    }
                    *(undefined4 *)(param_1 + 0x4ac) = 6;
                    bVar2 = !bVar2;
                }
            }
            if (puVar3 != (ushort *)0x0) {
                FUN_14018b900(puVar3,0);
            }
            if (bVar2) {
                bVar6 = true;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            FUN_1400579e0(lVar7);
            goto LAB_140410a84;
        }
        if (bVar4) {
            LAB_140410f24:
            FUN_1400fb8d0(&local_e8,&local_110);
            if (local_100 != 0) {
                FUN_1400579e0();
            }
            puVar11 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),local_a0);
            puVar17 = *(undefined8 **)(lVar7 + 0x10);
            *puVar17 = *puVar11;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            lVar18 = FUN_1403d90d0();
            if (lVar18 == 0) {
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                FUN_1400579e0(lVar7);
            }
            else {
                iVar8 = *(int *)(*(longlong *)(param_2 + 0x10) + -8);
                pdVar16 = (double *)(*(longlong *)(param_2 + 0x10) + -0x10);
                if (iVar8 == 3) {
                    LAB_140410fdc:
                    iVar8 = (int)*pdVar16;
                }
                else {
                    if ((iVar8 == 4) && (iVar8 = FUN_14005ac80(), iVar8 != 0)) {
                        local_80 = 3;
                        pdVar16 = &local_88;
                        local_88 = local_90;
                        goto LAB_140410fdc;
                    }
                    iVar8 = 0;
                }
                uVar12 = 0;
                if (*(ulonglong *)(lVar18 + 0x36b8) != 0) {
                    piVar14 = *(int **)(lVar18 + 14000);
                    do {
                        if (*piVar14 == iVar8) {
                            piVar14 = *(int **)(lVar18 + 14000) + uVar12 * 0x40;
                            goto LAB_14041100c;
                        }
                        uVar12 = uVar12 + 1;
                        piVar14 = piVar14 + 0x40;
                    } while (uVar12 < *(ulonglong *)(lVar18 + 0x36b8));
                }
                piVar14 = (int *)0x0;
                LAB_14041100c:
                iVar8 = FUN_1404129b0(param_1,piVar14);
                if (iVar8 != 0) {
                    bVar6 = true;
                }
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                FUN_1400579e0(lVar7);
            }
            goto LAB_140410a84;
        }
        FUN_1400fb8d0(&local_e8,&local_110);
        if (local_100 != 0) {
            FUN_1400579e0();
        }
        if (bVar5) {
            puVar11 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),local_a0);
            puVar17 = *(undefined8 **)(lVar7 + 0x10);
            *puVar17 = *puVar11;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            plVar15 = (longlong *)FUN_140417660(param_2,0xffffffff);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if ((plVar15 == (longlong *)0x0) || (*plVar15 == 0)) {
                FUN_1400579e0(lVar7);
            }
            else {
                iVar8 = FUN_140410300(param_1);
                if (iVar8 == 0) goto LAB_14041113c;
                bVar6 = true;
                local_118 = 1;
                FUN_1400579e0(lVar7);
            }
            goto LAB_140410a84;
        }
    }
    LAB_14041113c:
    FUN_1400579e0(lVar7);
    goto LAB_140410a84;
}



bool FUN_1404111e0(longlong param_1,undefined8 *param_2,int param_3)

{
    undefined8 uVar1;
    bool bVar2;

    bVar2 = false;
    if ((((param_2 == (undefined8 *)0x0) || (*(int *)param_2 == 0)) ||
         (*(int *)((longlong)param_2 + 0xc) != 0)) || (param_2[2] == 0)) {
        if (*(int *)(param_1 + 0x4b0) != 0) {
            bVar2 = true;
            *(undefined4 *)(param_1 + 0x418) = 0;
            *(undefined4 *)(param_1 + 0x4b0) = 0;
        }
    }
    else {
        bVar2 = *(int *)(param_1 + 0x418) != *(int *)param_2;
        *(undefined8 *)(param_1 + 0x418) = *param_2;
        *(undefined8 *)(param_1 + 0x420) = param_2[1];
        *(undefined8 *)(param_1 + 0x428) = param_2[2];
        *(undefined8 *)(param_1 + 0x430) = param_2[3];
        *(undefined8 *)(param_1 + 0x438) = param_2[4];
        *(undefined8 *)(param_1 + 0x440) = param_2[5];
        *(undefined8 *)(param_1 + 0x448) = param_2[6];
        *(undefined8 *)(param_1 + 0x450) = param_2[7];
        *(undefined8 *)(param_1 + 0x458) = param_2[8];
        *(undefined8 *)(param_1 + 0x460) = param_2[9];
        uVar1 = param_2[10];
        *(undefined4 *)(param_1 + 0x4b0) = 6;
        *(undefined8 *)(param_1 + 0x468) = uVar1;
    }
    if (param_3 != 0) {
        *(undefined8 *)(param_1 + 0x4b4) = 0;
        FUN_140412ad0();
    }
    return bVar2;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

void FUN_1404112e0(longlong *param_1,longlong param_2)

{
    byte bVar1;
    short sVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    longlong *plVar13;
    undefined4 *puVar14;
    int iVar15;
    longlong lVar16;
    undefined8 *puVar17;
    short *psVar18;
    short *psVar19;
    longlong *plVar20;
    undefined4 *puVar21;
    undefined8 *puVar22;
    short *psVar23;
    short *psVar24;
    undefined auStack1384 [32];
    undefined8 local_548;
    undefined8 *local_540;
    undefined8 local_538;
    longlong local_528;
    longlong local_520;
    undefined8 local_508;
    undefined8 local_500;
    ulonglong local_4f8;
    uint local_4f0;
    undefined8 local_4e8;
    undefined8 local_4e0;
    ulonglong local_4d8 [2];
    undefined **local_4c8;
    undefined4 local_4c0;
    longlong local_4b8;
    undefined8 local_4b0;
    undefined8 local_4a8;
    undefined8 local_4a0;
    undefined8 local_498;
    ulonglong *local_490;
    undefined8 local_488;
    uint local_480;
    undefined local_478 [16];
    uint local_468;
    undefined8 local_460;
    undefined8 *local_458;
    undefined8 local_44c;
    undefined4 local_444;
    undefined8 local_440;
    undefined8 local_438;
    undefined8 local_430;
    undefined local_428 [16];
    undefined8 local_418;
    undefined4 local_3fc;
    undefined8 local_3b0;
    undefined8 local_3a8;
    undefined8 local_3a0;
    undefined8 local_398;
    undefined8 local_390;
    undefined8 local_358;
    undefined8 uStack848;
    undefined8 local_348;
    undefined8 uStack832;
    undefined8 local_338;
    undefined8 uStack816;
    undefined8 local_328;
    undefined4 uStack800;
    undefined4 local_1c8 [80];
    short local_88 [40];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1384;
    psVar23 = (short *)0x0;
    FUN_140410300(param_1,0,0);
    lVar16 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_2 + 8),0);
    if (*(int *)(param_1 + 0x94) < 7) {
        if (lVar16 == 0) {
            if (*(int *)(param_1 + 0x94) != 0) {
                param_1[1] = 0;
                *(undefined4 *)(param_1 + 0x94) = 0;
            }
        }
        else {
            param_1[1] = lVar16;
            *(undefined4 *)(param_1 + 0x94) = 6;
        }
    }
    if (((((*(longlong *)(param_2 + 0x18) != 0) || (*(int *)(param_2 + 0x20) != 0)) ||
          (*(longlong *)(param_2 + 0x28) != 0)) ||
         ((*(char *)(param_2 + 0x40) != '\0' || (*(int *)(param_2 + 0x3c) != 0)))) ||
        ((*(char *)(param_2 + 0x50) != '\0' || (*(int *)(param_2 + 0x34) != 0)))) {
        local_4c8 = &PTR_FUN_140b66a40;
        local_478 = ZEXT816(0);
        local_428 = ZEXT816(0);
        local_4c0 = 0;
        local_4b8 = 0;
        local_444 = 1;
        local_4b0 = 1;
        local_4a8 = 0;
        local_4a0 = 0;
        local_498 = 0;
        local_490 = (ulonglong *)0x0;
        local_488 = 0;
        local_480 = 0;
        local_468 = 0;
        local_460 = 0;
        local_458 = (undefined8 *)0x0;
        local_44c = 0;
        local_440 = 0;
        local_438 = 0;
        local_430 = 0;
        local_418 = 0;
        local_3fc = 0;
        local_3b0 = 0;
        local_3a8 = 0;
        local_3a0 = 0;
        local_398 = 0;
        local_390 = 0;
        puVar17 = (undefined8 *)FUN_140445320(&local_528,*(undefined4 *)(param_2 + 0x34));
        local_4b8 = param_1[1];
        local_4b0 = *puVar17;
        local_4a8 = puVar17[1];
        local_4a0 = puVar17[2];
        uVar4 = *(ulonglong *)(param_2 + 0x28);
        local_498 = puVar17[3];
        local_490 = local_4d8;
        local_4d8[0] = CONCAT26((short)(uVar4 >> 0x18),
                                CONCAT24((short)(uVar4 >> 0xe),
                                         CONCAT22((short)(uVar4 >> 4),(short)uVar4))) &
                       0x3ff03ff03ff000f;
        uVar4 = *(ulonglong *)(param_2 + 0x18);
        if (uVar4 == 0) {
            local_4f0 = 1;
            local_4f8 = uVar4;
            if ((local_4b8 != 0) && (*(int *)(local_4b8 + 0x140) == 1 || *(int *)(local_4b8 + 0x140) == 2)
                    ) {
                local_4f0 = 0;
            }
        }
        else {
            local_4f8 = uVar4 & 0xffffffffffffff;
            local_4f0 = (uint)(byte)(uVar4 >> 0x38);
        }
        uVar3 = *(uint *)(param_2 + 0x20);
        local_488 = CONCAT44(1,*(undefined4 *)(param_2 + 0x3c));
        local_480 = (uint)*(byte *)(param_2 + 0x40);
        local_478 = CONCAT88(&local_4f8,*(undefined8 *)(param_2 + 0x48));
        local_4e0 = CONCAT44(uVar3 >> 6,(uint)CONCAT11((char)uVar3,(char)(uVar3 >> 3))) & 0x1ffff0707;
        bVar1 = (byte)(uVar3 >> 0x18);
        local_4e8 = CONCAT17(bVar1 >> 4,
                             CONCAT16(bVar1 >> 1,
                                      CONCAT15((char)(uVar3 >> 0x16),
                                               CONCAT14((char)(uVar3 >> 0x13),
                                                        CONCAT13((char)(uVar3 >> 0x10),
                                                                 CONCAT12((char)(uVar3 >> 0xd),
                                                                          CONCAT11((char)(uVar3 >> 10),
                                                                                   (char)(uVar3 >> 7))))
                                               )))) & 0x707070707070707;
        local_468 = (uint)*(byte *)(param_2 + 0x50);
        local_460 = *(undefined8 *)(param_2 + 0x58);
        local_458 = &local_4e8;
        FUN_1400b52a0(local_1c8);
        FUN_1407e4830(&local_358,0,400);
        FUN_1407e4830(&local_358,0,0x90);
        local_540 = (undefined8 *)0x0;
        local_358 = 0xc5000000c5;
        uStack848 = 0xc5000000c5;
        local_348 = 0xc5000000c5;
        uStack832 = 0xc5000000c5;
        local_338 = 0xc5000000c5;
        uStack816 = 0xc5000000c5;
        local_328 = 0xc5000000c5;
        uStack800 = 0xc5;
        local_548 = 0;
        FUN_14040c310(&local_4c8,local_1c8,DAT_140c658f0,&local_358);
        if (*(int *)(param_1 + 0x93) < 7) {
            plVar13 = param_1 + 4;
            if ((((uint)local_1c8 | (uint)plVar13) & 0xf) == 0) {
                lVar16 = 2;
                puVar14 = local_1c8;
                do {
                    puVar21 = puVar14;
                    plVar20 = plVar13;
                    uVar5 = puVar21[1];
                    uVar6 = puVar21[2];
                    uVar7 = puVar21[3];
                    uVar8 = puVar21[4];
                    uVar9 = puVar21[5];
                    uVar10 = puVar21[6];
                    uVar11 = puVar21[7];
                    *(undefined4 *)plVar20 = *puVar21;
                    *(undefined4 *)((longlong)plVar20 + 4) = uVar5;
                    *(undefined4 *)(plVar20 + 1) = uVar6;
                    *(undefined4 *)((longlong)plVar20 + 0xc) = uVar7;
                    uVar5 = puVar21[8];
                    uVar6 = puVar21[9];
                    uVar7 = puVar21[10];
                    uVar12 = puVar21[0xb];
                    *(undefined4 *)(plVar20 + 2) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x14) = uVar9;
                    *(undefined4 *)(plVar20 + 3) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar11;
                    uVar8 = puVar21[0xc];
                    uVar9 = puVar21[0xd];
                    uVar10 = puVar21[0xe];
                    uVar11 = puVar21[0xf];
                    *(undefined4 *)(plVar20 + 4) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x24) = uVar6;
                    *(undefined4 *)(plVar20 + 5) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x2c) = uVar12;
                    uVar5 = puVar21[0x10];
                    uVar6 = puVar21[0x11];
                    uVar7 = puVar21[0x12];
                    uVar12 = puVar21[0x13];
                    *(undefined4 *)(plVar20 + 6) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x34) = uVar9;
                    *(undefined4 *)(plVar20 + 7) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar11;
                    uVar8 = puVar21[0x14];
                    uVar9 = puVar21[0x15];
                    uVar10 = puVar21[0x16];
                    uVar11 = puVar21[0x17];
                    *(undefined4 *)(plVar20 + 8) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x44) = uVar6;
                    *(undefined4 *)(plVar20 + 9) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x4c) = uVar12;
                    uVar5 = puVar21[0x18];
                    uVar6 = puVar21[0x19];
                    uVar7 = puVar21[0x1a];
                    uVar12 = puVar21[0x1b];
                    *(undefined4 *)(plVar20 + 10) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x54) = uVar9;
                    *(undefined4 *)(plVar20 + 0xb) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x5c) = uVar11;
                    uVar8 = puVar21[0x1c];
                    uVar9 = puVar21[0x1d];
                    uVar10 = puVar21[0x1e];
                    uVar11 = puVar21[0x1f];
                    *(undefined4 *)(plVar20 + 0xc) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 100) = uVar6;
                    *(undefined4 *)(plVar20 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x6c) = uVar12;
                    *(undefined4 *)(plVar20 + 0xe) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x74) = uVar9;
                    *(undefined4 *)(plVar20 + 0xf) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x7c) = uVar11;
                    lVar16 = lVar16 + -1;
                    plVar13 = plVar20 + 0x10;
                    puVar14 = puVar21 + 0x20;
                } while (lVar16 != 0);
                uVar5 = puVar21[0x21];
                uVar6 = puVar21[0x22];
                uVar7 = puVar21[0x23];
                uVar9 = puVar21[0x24];
                uVar10 = puVar21[0x25];
                uVar11 = puVar21[0x26];
                uVar12 = puVar21[0x27];
                lVar16 = *(longlong *)(puVar21 + 0x2c);
                *(undefined4 *)(plVar20 + 0x10) = puVar21[0x20];
                *(undefined4 *)((longlong)plVar20 + 0x84) = uVar5;
                *(undefined4 *)(plVar20 + 0x11) = uVar6;
                *(undefined4 *)((longlong)plVar20 + 0x8c) = uVar7;
                uVar5 = puVar21[0x28];
                uVar6 = puVar21[0x29];
                uVar7 = puVar21[0x2a];
                uVar8 = puVar21[0x2b];
                *(undefined4 *)(plVar20 + 0x12) = uVar9;
                *(undefined4 *)((longlong)plVar20 + 0x94) = uVar10;
                *(undefined4 *)(plVar20 + 0x13) = uVar11;
                *(undefined4 *)((longlong)plVar20 + 0x9c) = uVar12;
                *(undefined4 *)(plVar20 + 0x14) = uVar5;
                *(undefined4 *)((longlong)plVar20 + 0xa4) = uVar6;
                *(undefined4 *)(plVar20 + 0x15) = uVar7;
                *(undefined4 *)((longlong)plVar20 + 0xac) = uVar8;
                plVar20[0x16] = lVar16;
            }
            else {
                FUN_1407db590(plVar13,local_1c8);
            }
            *(undefined4 *)(param_1 + 0x93) = 6;
        }
        if (*(int *)((longlong)param_1 + 0x49c) < 7) {
            plVar13 = param_1 + 0x2b;
            if ((((uint)&local_358 | (uint)plVar13) & 0xf) == 0) {
                lVar16 = 3;
                puVar17 = &local_358;
                do {
                    puVar22 = puVar17;
                    plVar20 = plVar13;
                    uVar5 = *(undefined4 *)((longlong)puVar22 + 4);
                    uVar6 = *(undefined4 *)(puVar22 + 1);
                    uVar7 = *(undefined4 *)((longlong)puVar22 + 0xc);
                    uVar8 = *(undefined4 *)(puVar22 + 2);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x14);
                    uVar10 = *(undefined4 *)(puVar22 + 3);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x1c);
                    *(undefined4 *)plVar20 = *(undefined4 *)puVar22;
                    *(undefined4 *)((longlong)plVar20 + 4) = uVar5;
                    *(undefined4 *)(plVar20 + 1) = uVar6;
                    *(undefined4 *)((longlong)plVar20 + 0xc) = uVar7;
                    uVar5 = *(undefined4 *)(puVar22 + 4);
                    uVar6 = *(undefined4 *)((longlong)puVar22 + 0x24);
                    uVar7 = *(undefined4 *)(puVar22 + 5);
                    uVar12 = *(undefined4 *)((longlong)puVar22 + 0x2c);
                    *(undefined4 *)(plVar20 + 2) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x14) = uVar9;
                    *(undefined4 *)(plVar20 + 3) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar11;
                    uVar8 = *(undefined4 *)(puVar22 + 6);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x34);
                    uVar10 = *(undefined4 *)(puVar22 + 7);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x3c);
                    *(undefined4 *)(plVar20 + 4) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x24) = uVar6;
                    *(undefined4 *)(plVar20 + 5) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x2c) = uVar12;
                    uVar5 = *(undefined4 *)(puVar22 + 8);
                    uVar6 = *(undefined4 *)((longlong)puVar22 + 0x44);
                    uVar7 = *(undefined4 *)(puVar22 + 9);
                    uVar12 = *(undefined4 *)((longlong)puVar22 + 0x4c);
                    *(undefined4 *)(plVar20 + 6) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x34) = uVar9;
                    *(undefined4 *)(plVar20 + 7) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar11;
                    uVar8 = *(undefined4 *)(puVar22 + 10);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x54);
                    uVar10 = *(undefined4 *)(puVar22 + 0xb);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x5c);
                    *(undefined4 *)(plVar20 + 8) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x44) = uVar6;
                    *(undefined4 *)(plVar20 + 9) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x4c) = uVar12;
                    uVar5 = *(undefined4 *)(puVar22 + 0xc);
                    uVar6 = *(undefined4 *)((longlong)puVar22 + 100);
                    uVar7 = *(undefined4 *)(puVar22 + 0xd);
                    uVar12 = *(undefined4 *)((longlong)puVar22 + 0x6c);
                    *(undefined4 *)(plVar20 + 10) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x54) = uVar9;
                    *(undefined4 *)(plVar20 + 0xb) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x5c) = uVar11;
                    uVar8 = *(undefined4 *)(puVar22 + 0xe);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x74);
                    uVar10 = *(undefined4 *)(puVar22 + 0xf);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x7c);
                    *(undefined4 *)(plVar20 + 0xc) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 100) = uVar6;
                    *(undefined4 *)(plVar20 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x6c) = uVar12;
                    *(undefined4 *)(plVar20 + 0xe) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x74) = uVar9;
                    *(undefined4 *)(plVar20 + 0xf) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x7c) = uVar11;
                    lVar16 = lVar16 + -1;
                    plVar13 = plVar20 + 0x10;
                    puVar17 = puVar22 + 0x10;
                } while (lVar16 != 0);
                uVar5 = *(undefined4 *)((longlong)puVar22 + 0x84);
                uVar6 = *(undefined4 *)(puVar22 + 0x11);
                uVar7 = *(undefined4 *)((longlong)puVar22 + 0x8c);
                *(undefined4 *)(plVar20 + 0x10) = *(undefined4 *)(puVar22 + 0x10);
                *(undefined4 *)((longlong)plVar20 + 0x84) = uVar5;
                *(undefined4 *)(plVar20 + 0x11) = uVar6;
                *(undefined4 *)((longlong)plVar20 + 0x8c) = uVar7;
            }
            else {
                FUN_1407db590(plVar13,&local_358);
            }
            *(undefined4 *)((longlong)param_1 + 0x49c) = 6;
        }
        if (*(int *)((longlong)param_1 + 0x4a4) < 7) {
            *(undefined4 *)((longlong)param_1 + 0x4a4) = 6;
            *(undefined4 *)(param_1 + 0x5d) = (undefined4)local_4e8;
            *(undefined4 *)((longlong)param_1 + 0x2ec) = local_4e8._4_4_;
            *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_4e0;
            *(undefined4 *)((longlong)param_1 + 0x2f4) = local_4e0._4_4_;
            if ((((*param_1 != 0) && (lVar16 = *(longlong *)(*param_1 + 0x58), lVar16 != 0)) &&
                 (*(int *)(lVar16 + 8) < 1)) && ((lVar16 != 0 && (*(int *)(lVar16 + 8) < 1)))) {
                param_1[0x5d] = 0;
                param_1[0x5e] = 0;
                *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
            }
        }
        bVar1 = *(byte *)(param_2 + 0x50);
        lVar16 = *(longlong *)(param_2 + 0x58);
        if (*(int *)(param_1 + 0x95) < 7) {
            if ((lVar16 == 0) || (8 < bVar1)) {
                if (*(int *)(param_1 + 0x95) != 0) {
                    *(undefined4 *)(param_1 + 0x95) = 0;
                }
            }
            else {
                param_1[0x8f] = 0;
                param_1[0x90] = 0;
                param_1[0x91] = 0;
                param_1[0x92] = 0;
                FUN_1407db590(param_1 + 0x8f,lVar16,(ulonglong)bVar1 << 2);
                *(undefined4 *)(param_1 + 0x95) = 6;
            }
        }
    }
    if (*(longlong *)(param_2 + 0x10) == 0) goto LAB_140411b31;
    local_538 = 0;
    local_528._0_4_ = *(undefined4 *)(DAT_140c635f0 + 0x1680);
    local_540 = &local_508;
    local_500 = 0;
    local_508 = 0;
    local_548 = CONCAT44(local_548._4_4_,0x21);
    local_520 = *(longlong *)(param_2 + 0x10);
    iVar15 = FUN_1403f82f0(DAT_140c65898,9,&local_528,local_88);
    psVar19 = psVar23;
    psVar18 = psVar23;
    if (iVar15 == 0) {
        psVar24 = (short *)FUN_14034bdd0();
        sVar2 = *psVar24;
        while (sVar2 != 0) {
            psVar19 = (short *)((longlong)psVar19 + 1);
            sVar2 = psVar24[(longlong)psVar19];
        }
        lVar16 = (longlong)psVar19 * 2 >> 1;
        if (lVar16 + 1U < 0x7fffffffffffffff) {
            psVar18 = (short *)FUN_14018b280((lVar16 + 1U) * 2,0);
        }
        FUN_1407db590(psVar18,psVar24,lVar16 * 2);
        psVar19 = psVar18 + lVar16;
        if (psVar19 != (short *)0x0) {
            *psVar19 = 0;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x4ac);
        if (iVar15 < 7) {
            psVar19 = (short *)((longlong)psVar19 - (longlong)psVar18 >> 1);
            if (psVar19 == (short *)0x0) goto LAB_140411b04;
            psVar24 = (short *)(param_1[0x61] - param_1[0x60] >> 1);
            if ((psVar24 == psVar19) && (psVar24 != (short *)0x0)) {
                psVar19 = psVar18;
                do {
                    if (*(short *)((param_1[0x60] - (longlong)psVar18) + (longlong)psVar19) != *psVar19)
                        break;
                    psVar23 = (short *)((longlong)psVar23 + 1);
                    psVar19 = psVar19 + 1;
                } while (psVar23 < psVar24);
            }
            LAB_140411ae6:
            if (&local_528 != param_1 + 0x5f) {
                FUN_14001c480(param_1 + 0x5f,psVar18);
            }
            *(undefined4 *)((longlong)param_1 + 0x4ac) = 6;
        }
    }
    else {
        while (local_88[0] != 0) {
            local_88[0] = local_88[(longlong)(short *)((longlong)psVar19 + 1)];
            psVar19 = (short *)((longlong)psVar19 + 1);
        }
        lVar16 = (longlong)psVar19 * 2 >> 1;
        if (lVar16 + 1U < 0x7fffffffffffffff) {
            psVar18 = (short *)FUN_14018b280((lVar16 + 1U) * 2,0);
        }
        FUN_1407db590(psVar18,local_88,lVar16 * 2);
        psVar19 = psVar18 + lVar16;
        if (psVar19 != (short *)0x0) {
            *psVar19 = 0;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x4ac);
        if (iVar15 < 7) {
            psVar19 = (short *)((longlong)psVar19 - (longlong)psVar18 >> 1);
            if (psVar19 != (short *)0x0) {
                psVar24 = (short *)(param_1[0x61] - param_1[0x60] >> 1);
                if ((psVar24 == psVar19) && (psVar24 != (short *)0x0)) {
                    psVar19 = psVar18;
                    do {
                        if (*(short *)((param_1[0x60] - (longlong)psVar18) + (longlong)psVar19) != *psVar19)
                            break;
                        psVar23 = (short *)((longlong)psVar23 + 1);
                        psVar19 = psVar19 + 1;
                    } while (psVar23 < psVar24);
                }
                goto LAB_140411ae6;
            }
            LAB_140411b04:
            if (iVar15 != 0) {
                FUN_14001c2b0(param_1 + 0x5f,param_1[0x60],param_1[0x61]);
                *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
            }
        }
    }
    if (psVar18 != (short *)0x0) {
        FUN_14018b900(psVar18,0);
    }
    LAB_140411b31:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1384);
    return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

void FUN_140411b60(longlong *param_1,longlong param_2)

{
    byte bVar1;
    short sVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    longlong *plVar13;
    undefined4 *puVar14;
    int iVar15;
    longlong lVar16;
    undefined8 *puVar17;
    short *psVar18;
    short *psVar19;
    longlong *plVar20;
    undefined4 *puVar21;
    undefined8 *puVar22;
    short *psVar23;
    short *psVar24;
    undefined auStack1384 [32];
    undefined8 local_548;
    undefined8 *local_540;
    undefined8 local_538;
    longlong local_528;
    longlong local_520;
    undefined8 local_508;
    undefined8 local_500;
    ulonglong local_4f8;
    uint local_4f0;
    undefined8 local_4e8;
    undefined8 local_4e0;
    ulonglong local_4d8 [2];
    undefined **local_4c8;
    undefined4 local_4c0;
    longlong local_4b8;
    undefined8 local_4b0;
    undefined8 local_4a8;
    undefined8 local_4a0;
    undefined8 local_498;
    ulonglong *local_490;
    undefined8 local_488;
    uint local_480;
    undefined local_478 [16];
    uint local_468;
    undefined8 local_460;
    undefined8 *local_458;
    undefined8 local_44c;
    undefined4 local_444;
    undefined8 local_440;
    undefined8 local_438;
    undefined8 local_430;
    undefined local_428 [16];
    undefined8 local_418;
    undefined4 local_3fc;
    undefined8 local_3b0;
    undefined8 local_3a8;
    undefined8 local_3a0;
    undefined8 local_398;
    undefined8 local_390;
    undefined8 local_358;
    undefined8 uStack848;
    undefined8 local_348;
    undefined8 uStack832;
    undefined8 local_338;
    undefined8 uStack816;
    undefined8 local_328;
    undefined4 uStack800;
    undefined4 local_1c8 [80];
    short local_88 [40];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1384;
    psVar23 = (short *)0x0;
    FUN_140410300(param_1,0,0);
    lVar16 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_2 + 0x10),0);
    if (*(int *)(param_1 + 0x94) < 7) {
        if (lVar16 == 0) {
            if (*(int *)(param_1 + 0x94) != 0) {
                param_1[1] = 0;
                *(undefined4 *)(param_1 + 0x94) = 0;
            }
        }
        else {
            param_1[1] = lVar16;
            *(undefined4 *)(param_1 + 0x94) = 6;
        }
    }
    if (((((*(longlong *)(param_2 + 0x28) != 0) || (*(int *)(param_2 + 0x30) != 0)) ||
          (*(longlong *)(param_2 + 0x38) != 0)) ||
         ((*(char *)(param_2 + 0x74) != '\0' || (*(char *)(param_2 + 0x80) != '\0')))) ||
        ((*(int *)(param_2 + 0x70) != 0 || (*(int *)(param_2 + 0xa0) != 0)))) {
        local_4c8 = &PTR_FUN_140b66a40;
        local_478 = ZEXT816(0);
        local_428 = ZEXT816(0);
        local_4c0 = 0;
        local_4b8 = 0;
        local_444 = 1;
        local_4b0 = 1;
        local_4a8 = 0;
        local_4a0 = 0;
        local_498 = 0;
        local_490 = (ulonglong *)0x0;
        local_488 = 0;
        local_480 = 0;
        local_468 = 0;
        local_460 = 0;
        local_458 = (undefined8 *)0x0;
        local_44c = 0;
        local_440 = 0;
        local_438 = 0;
        local_430 = 0;
        local_418 = 0;
        local_3fc = 0;
        local_3b0 = 0;
        local_3a8 = 0;
        local_3a0 = 0;
        local_398 = 0;
        local_390 = 0;
        puVar17 = (undefined8 *)FUN_140445320(&local_528,*(undefined4 *)(param_2 + 0xa0));
        local_4b8 = param_1[1];
        local_4b0 = *puVar17;
        local_4a8 = puVar17[1];
        local_4a0 = puVar17[2];
        uVar4 = *(ulonglong *)(param_2 + 0x38);
        local_498 = puVar17[3];
        local_490 = local_4d8;
        local_4d8[0] = CONCAT26((short)(uVar4 >> 0x18),
                                CONCAT24((short)(uVar4 >> 0xe),
                                         CONCAT22((short)(uVar4 >> 4),(short)uVar4))) &
                       0x3ff03ff03ff000f;
        uVar4 = *(ulonglong *)(param_2 + 0x28);
        if (uVar4 == 0) {
            local_4f0 = 1;
            local_4f8 = uVar4;
            if ((local_4b8 != 0) && (*(int *)(local_4b8 + 0x140) == 1 || *(int *)(local_4b8 + 0x140) == 2)
                    ) {
                local_4f0 = 0;
            }
        }
        else {
            local_4f8 = uVar4 & 0xffffffffffffff;
            local_4f0 = (uint)(byte)(uVar4 >> 0x38);
        }
        uVar3 = *(uint *)(param_2 + 0x30);
        local_488 = CONCAT44(1,*(undefined4 *)(param_2 + 0x70));
        local_480 = (uint)*(byte *)(param_2 + 0x74);
        local_478 = CONCAT88(&local_4f8,*(undefined8 *)(param_2 + 0x78));
        local_4e0 = CONCAT44(uVar3 >> 6,(uint)CONCAT11((char)uVar3,(char)(uVar3 >> 3))) & 0x1ffff0707;
        bVar1 = (byte)(uVar3 >> 0x18);
        local_4e8 = CONCAT17(bVar1 >> 4,
                             CONCAT16(bVar1 >> 1,
                                      CONCAT15((char)(uVar3 >> 0x16),
                                               CONCAT14((char)(uVar3 >> 0x13),
                                                        CONCAT13((char)(uVar3 >> 0x10),
                                                                 CONCAT12((char)(uVar3 >> 0xd),
                                                                          CONCAT11((char)(uVar3 >> 10),
                                                                                   (char)(uVar3 >> 7))))
                                               )))) & 0x707070707070707;
        local_468 = (uint)*(byte *)(param_2 + 0x80);
        local_460 = *(undefined8 *)(param_2 + 0x88);
        local_458 = &local_4e8;
        FUN_1400b52a0(local_1c8);
        FUN_1407e4830(&local_358,0,400);
        FUN_1407e4830(&local_358,0,0x90);
        local_540 = (undefined8 *)0x0;
        local_358 = 0xc5000000c5;
        uStack848 = 0xc5000000c5;
        local_348 = 0xc5000000c5;
        uStack832 = 0xc5000000c5;
        local_338 = 0xc5000000c5;
        uStack816 = 0xc5000000c5;
        local_328 = 0xc5000000c5;
        uStack800 = 0xc5;
        local_548 = 0;
        FUN_14040c310(&local_4c8,local_1c8,DAT_140c658f0,&local_358);
        if (*(int *)(param_1 + 0x93) < 7) {
            plVar13 = param_1 + 4;
            if ((((uint)local_1c8 | (uint)plVar13) & 0xf) == 0) {
                lVar16 = 2;
                puVar14 = local_1c8;
                do {
                    puVar21 = puVar14;
                    plVar20 = plVar13;
                    uVar5 = puVar21[1];
                    uVar6 = puVar21[2];
                    uVar7 = puVar21[3];
                    uVar8 = puVar21[4];
                    uVar9 = puVar21[5];
                    uVar10 = puVar21[6];
                    uVar11 = puVar21[7];
                    *(undefined4 *)plVar20 = *puVar21;
                    *(undefined4 *)((longlong)plVar20 + 4) = uVar5;
                    *(undefined4 *)(plVar20 + 1) = uVar6;
                    *(undefined4 *)((longlong)plVar20 + 0xc) = uVar7;
                    uVar5 = puVar21[8];
                    uVar6 = puVar21[9];
                    uVar7 = puVar21[10];
                    uVar12 = puVar21[0xb];
                    *(undefined4 *)(plVar20 + 2) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x14) = uVar9;
                    *(undefined4 *)(plVar20 + 3) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar11;
                    uVar8 = puVar21[0xc];
                    uVar9 = puVar21[0xd];
                    uVar10 = puVar21[0xe];
                    uVar11 = puVar21[0xf];
                    *(undefined4 *)(plVar20 + 4) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x24) = uVar6;
                    *(undefined4 *)(plVar20 + 5) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x2c) = uVar12;
                    uVar5 = puVar21[0x10];
                    uVar6 = puVar21[0x11];
                    uVar7 = puVar21[0x12];
                    uVar12 = puVar21[0x13];
                    *(undefined4 *)(plVar20 + 6) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x34) = uVar9;
                    *(undefined4 *)(plVar20 + 7) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar11;
                    uVar8 = puVar21[0x14];
                    uVar9 = puVar21[0x15];
                    uVar10 = puVar21[0x16];
                    uVar11 = puVar21[0x17];
                    *(undefined4 *)(plVar20 + 8) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x44) = uVar6;
                    *(undefined4 *)(plVar20 + 9) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x4c) = uVar12;
                    uVar5 = puVar21[0x18];
                    uVar6 = puVar21[0x19];
                    uVar7 = puVar21[0x1a];
                    uVar12 = puVar21[0x1b];
                    *(undefined4 *)(plVar20 + 10) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x54) = uVar9;
                    *(undefined4 *)(plVar20 + 0xb) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x5c) = uVar11;
                    uVar8 = puVar21[0x1c];
                    uVar9 = puVar21[0x1d];
                    uVar10 = puVar21[0x1e];
                    uVar11 = puVar21[0x1f];
                    *(undefined4 *)(plVar20 + 0xc) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 100) = uVar6;
                    *(undefined4 *)(plVar20 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x6c) = uVar12;
                    *(undefined4 *)(plVar20 + 0xe) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x74) = uVar9;
                    *(undefined4 *)(plVar20 + 0xf) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x7c) = uVar11;
                    lVar16 = lVar16 + -1;
                    plVar13 = plVar20 + 0x10;
                    puVar14 = puVar21 + 0x20;
                } while (lVar16 != 0);
                uVar5 = puVar21[0x21];
                uVar6 = puVar21[0x22];
                uVar7 = puVar21[0x23];
                uVar9 = puVar21[0x24];
                uVar10 = puVar21[0x25];
                uVar11 = puVar21[0x26];
                uVar12 = puVar21[0x27];
                lVar16 = *(longlong *)(puVar21 + 0x2c);
                *(undefined4 *)(plVar20 + 0x10) = puVar21[0x20];
                *(undefined4 *)((longlong)plVar20 + 0x84) = uVar5;
                *(undefined4 *)(plVar20 + 0x11) = uVar6;
                *(undefined4 *)((longlong)plVar20 + 0x8c) = uVar7;
                uVar5 = puVar21[0x28];
                uVar6 = puVar21[0x29];
                uVar7 = puVar21[0x2a];
                uVar8 = puVar21[0x2b];
                *(undefined4 *)(plVar20 + 0x12) = uVar9;
                *(undefined4 *)((longlong)plVar20 + 0x94) = uVar10;
                *(undefined4 *)(plVar20 + 0x13) = uVar11;
                *(undefined4 *)((longlong)plVar20 + 0x9c) = uVar12;
                *(undefined4 *)(plVar20 + 0x14) = uVar5;
                *(undefined4 *)((longlong)plVar20 + 0xa4) = uVar6;
                *(undefined4 *)(plVar20 + 0x15) = uVar7;
                *(undefined4 *)((longlong)plVar20 + 0xac) = uVar8;
                plVar20[0x16] = lVar16;
            }
            else {
                FUN_1407db590(plVar13,local_1c8);
            }
            *(undefined4 *)(param_1 + 0x93) = 6;
        }
        if (*(int *)((longlong)param_1 + 0x49c) < 7) {
            plVar13 = param_1 + 0x2b;
            if ((((uint)&local_358 | (uint)plVar13) & 0xf) == 0) {
                lVar16 = 3;
                puVar17 = &local_358;
                do {
                    puVar22 = puVar17;
                    plVar20 = plVar13;
                    uVar5 = *(undefined4 *)((longlong)puVar22 + 4);
                    uVar6 = *(undefined4 *)(puVar22 + 1);
                    uVar7 = *(undefined4 *)((longlong)puVar22 + 0xc);
                    uVar8 = *(undefined4 *)(puVar22 + 2);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x14);
                    uVar10 = *(undefined4 *)(puVar22 + 3);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x1c);
                    *(undefined4 *)plVar20 = *(undefined4 *)puVar22;
                    *(undefined4 *)((longlong)plVar20 + 4) = uVar5;
                    *(undefined4 *)(plVar20 + 1) = uVar6;
                    *(undefined4 *)((longlong)plVar20 + 0xc) = uVar7;
                    uVar5 = *(undefined4 *)(puVar22 + 4);
                    uVar6 = *(undefined4 *)((longlong)puVar22 + 0x24);
                    uVar7 = *(undefined4 *)(puVar22 + 5);
                    uVar12 = *(undefined4 *)((longlong)puVar22 + 0x2c);
                    *(undefined4 *)(plVar20 + 2) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x14) = uVar9;
                    *(undefined4 *)(plVar20 + 3) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar11;
                    uVar8 = *(undefined4 *)(puVar22 + 6);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x34);
                    uVar10 = *(undefined4 *)(puVar22 + 7);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x3c);
                    *(undefined4 *)(plVar20 + 4) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x24) = uVar6;
                    *(undefined4 *)(plVar20 + 5) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x2c) = uVar12;
                    uVar5 = *(undefined4 *)(puVar22 + 8);
                    uVar6 = *(undefined4 *)((longlong)puVar22 + 0x44);
                    uVar7 = *(undefined4 *)(puVar22 + 9);
                    uVar12 = *(undefined4 *)((longlong)puVar22 + 0x4c);
                    *(undefined4 *)(plVar20 + 6) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x34) = uVar9;
                    *(undefined4 *)(plVar20 + 7) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar11;
                    uVar8 = *(undefined4 *)(puVar22 + 10);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x54);
                    uVar10 = *(undefined4 *)(puVar22 + 0xb);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x5c);
                    *(undefined4 *)(plVar20 + 8) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 0x44) = uVar6;
                    *(undefined4 *)(plVar20 + 9) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x4c) = uVar12;
                    uVar5 = *(undefined4 *)(puVar22 + 0xc);
                    uVar6 = *(undefined4 *)((longlong)puVar22 + 100);
                    uVar7 = *(undefined4 *)(puVar22 + 0xd);
                    uVar12 = *(undefined4 *)((longlong)puVar22 + 0x6c);
                    *(undefined4 *)(plVar20 + 10) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x54) = uVar9;
                    *(undefined4 *)(plVar20 + 0xb) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x5c) = uVar11;
                    uVar8 = *(undefined4 *)(puVar22 + 0xe);
                    uVar9 = *(undefined4 *)((longlong)puVar22 + 0x74);
                    uVar10 = *(undefined4 *)(puVar22 + 0xf);
                    uVar11 = *(undefined4 *)((longlong)puVar22 + 0x7c);
                    *(undefined4 *)(plVar20 + 0xc) = uVar5;
                    *(undefined4 *)((longlong)plVar20 + 100) = uVar6;
                    *(undefined4 *)(plVar20 + 0xd) = uVar7;
                    *(undefined4 *)((longlong)plVar20 + 0x6c) = uVar12;
                    *(undefined4 *)(plVar20 + 0xe) = uVar8;
                    *(undefined4 *)((longlong)plVar20 + 0x74) = uVar9;
                    *(undefined4 *)(plVar20 + 0xf) = uVar10;
                    *(undefined4 *)((longlong)plVar20 + 0x7c) = uVar11;
                    lVar16 = lVar16 + -1;
                    plVar13 = plVar20 + 0x10;
                    puVar17 = puVar22 + 0x10;
                } while (lVar16 != 0);
                uVar5 = *(undefined4 *)((longlong)puVar22 + 0x84);
                uVar6 = *(undefined4 *)(puVar22 + 0x11);
                uVar7 = *(undefined4 *)((longlong)puVar22 + 0x8c);
                *(undefined4 *)(plVar20 + 0x10) = *(undefined4 *)(puVar22 + 0x10);
                *(undefined4 *)((longlong)plVar20 + 0x84) = uVar5;
                *(undefined4 *)(plVar20 + 0x11) = uVar6;
                *(undefined4 *)((longlong)plVar20 + 0x8c) = uVar7;
            }
            else {
                FUN_1407db590(plVar13,&local_358);
            }
            *(undefined4 *)((longlong)param_1 + 0x49c) = 6;
        }
        if (*(int *)((longlong)param_1 + 0x4a4) < 7) {
            *(undefined4 *)((longlong)param_1 + 0x4a4) = 6;
            *(undefined4 *)(param_1 + 0x5d) = (undefined4)local_4e8;
            *(undefined4 *)((longlong)param_1 + 0x2ec) = local_4e8._4_4_;
            *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_4e0;
            *(undefined4 *)((longlong)param_1 + 0x2f4) = local_4e0._4_4_;
            if ((((*param_1 != 0) && (lVar16 = *(longlong *)(*param_1 + 0x58), lVar16 != 0)) &&
                 (*(int *)(lVar16 + 8) < 1)) && ((lVar16 != 0 && (*(int *)(lVar16 + 8) < 1)))) {
                param_1[0x5d] = 0;
                param_1[0x5e] = 0;
                *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
            }
        }
        bVar1 = *(byte *)(param_2 + 0x80);
        lVar16 = *(longlong *)(param_2 + 0x88);
        if (*(int *)(param_1 + 0x95) < 7) {
            if ((lVar16 == 0) || (8 < bVar1)) {
                if (*(int *)(param_1 + 0x95) != 0) {
                    *(undefined4 *)(param_1 + 0x95) = 0;
                }
            }
            else {
                param_1[0x8f] = 0;
                param_1[0x90] = 0;
                param_1[0x91] = 0;
                param_1[0x92] = 0;
                FUN_1407db590(param_1 + 0x8f,lVar16,(ulonglong)bVar1 << 2);
                *(undefined4 *)(param_1 + 0x95) = 6;
            }
        }
    }
    if (*(longlong *)(param_2 + 8) == 0) goto LAB_1404123c1;
    local_538 = 0;
    local_528._0_4_ = *(undefined4 *)(DAT_140c635f0 + 0x1680);
    local_540 = &local_508;
    local_500 = 0;
    local_508 = 0;
    local_548 = CONCAT44(local_548._4_4_,0x21);
    local_520 = *(longlong *)(param_2 + 8);
    iVar15 = FUN_1403f82f0(DAT_140c65898,9,&local_528,local_88);
    psVar19 = psVar23;
    psVar18 = psVar23;
    if (iVar15 == 0) {
        psVar24 = (short *)FUN_14034bdd0();
        sVar2 = *psVar24;
        while (sVar2 != 0) {
            psVar19 = (short *)((longlong)psVar19 + 1);
            sVar2 = psVar24[(longlong)psVar19];
        }
        lVar16 = (longlong)psVar19 * 2 >> 1;
        if (lVar16 + 1U < 0x7fffffffffffffff) {
            psVar18 = (short *)FUN_14018b280((lVar16 + 1U) * 2,0);
        }
        FUN_1407db590(psVar18,psVar24,lVar16 * 2);
        psVar19 = psVar18 + lVar16;
        if (psVar19 != (short *)0x0) {
            *psVar19 = 0;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x4ac);
        if (iVar15 < 7) {
            psVar19 = (short *)((longlong)psVar19 - (longlong)psVar18 >> 1);
            if (psVar19 == (short *)0x0) goto LAB_140412394;
            psVar24 = (short *)(param_1[0x61] - param_1[0x60] >> 1);
            if ((psVar24 == psVar19) && (psVar24 != (short *)0x0)) {
                psVar19 = psVar18;
                do {
                    if (*(short *)((param_1[0x60] - (longlong)psVar18) + (longlong)psVar19) != *psVar19)
                        break;
                    psVar23 = (short *)((longlong)psVar23 + 1);
                    psVar19 = psVar19 + 1;
                } while (psVar23 < psVar24);
            }
            LAB_140412376:
            if (&local_528 != param_1 + 0x5f) {
                FUN_14001c480(param_1 + 0x5f,psVar18);
            }
            *(undefined4 *)((longlong)param_1 + 0x4ac) = 6;
        }
    }
    else {
        while (local_88[0] != 0) {
            local_88[0] = local_88[(longlong)(short *)((longlong)psVar19 + 1)];
            psVar19 = (short *)((longlong)psVar19 + 1);
        }
        lVar16 = (longlong)psVar19 * 2 >> 1;
        if (lVar16 + 1U < 0x7fffffffffffffff) {
            psVar18 = (short *)FUN_14018b280((lVar16 + 1U) * 2,0);
        }
        FUN_1407db590(psVar18,local_88,lVar16 * 2);
        psVar19 = psVar18 + lVar16;
        if (psVar19 != (short *)0x0) {
            *psVar19 = 0;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x4ac);
        if (iVar15 < 7) {
            psVar19 = (short *)((longlong)psVar19 - (longlong)psVar18 >> 1);
            if (psVar19 != (short *)0x0) {
                psVar24 = (short *)(param_1[0x61] - param_1[0x60] >> 1);
                if ((psVar24 == psVar19) && (psVar24 != (short *)0x0)) {
                    psVar19 = psVar18;
                    do {
                        if (*(short *)((param_1[0x60] - (longlong)psVar18) + (longlong)psVar19) != *psVar19)
                            break;
                        psVar23 = (short *)((longlong)psVar23 + 1);
                        psVar19 = psVar19 + 1;
                    } while (psVar23 < psVar24);
                }
                goto LAB_140412376;
            }
            LAB_140412394:
            if (iVar15 != 0) {
                FUN_14001c2b0(param_1 + 0x5f,param_1[0x60],param_1[0x61]);
                *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
            }
        }
    }
    if (psVar18 != (short *)0x0) {
        FUN_14018b900(psVar18,0);
    }
    LAB_1404123c1:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1384);
    return;
}



undefined8 FUN_1404123f0(longlong **param_1,longlong *param_2,int param_3)

{
    longlong *plVar1;
    undefined8 uVar2;

    plVar1 = *param_1;
    uVar2 = 0;
    if (param_2 != plVar1) {
        uVar2 = 1;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
            *param_1 = (longlong *)0x0;
        }
        *param_1 = param_2;
        if (param_2 != (longlong *)0x0) {
            (**(code **)*param_2)(param_2);
        }
    }
    if (param_3 != 0) {
        *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
        FUN_140412ad0(param_1);
    }
    return uVar2;
}



undefined4 FUN_140412470(longlong param_1,longlong param_2,int param_3,int param_4)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = *(int *)(param_1 + 0x4a0);
    uVar2 = 0;
    if (iVar1 <= param_4) {
        if (param_2 == 0) {
            uVar2 = 0;
            if ((param_4 == 6) && (iVar1 != 0)) {
                uVar2 = 1;
                *(undefined8 *)(param_1 + 8) = 0;
                *(undefined4 *)(param_1 + 0x4a0) = 0;
            }
        }
        else {
            if ((param_2 != *(longlong *)(param_1 + 8)) || (param_4 != iVar1)) {
                uVar2 = 1;
            }
            *(longlong *)(param_1 + 8) = param_2;
            *(int *)(param_1 + 0x4a0) = param_4;
        }
    }
    if (param_3 != 0) {
        FUN_140412ad0();
    }
    return uVar2;
}



undefined8 FUN_1404124e0(longlong param_1,undefined8 *param_2,int param_3)

{
    undefined8 uVar1;
    undefined8 uVar2;

    uVar2 = 0;
    if (((param_2 == (undefined8 *)0x0) || (*(int *)((longlong)param_2 + 4) == 0)) ||
        (*(int *)param_2 == 0)) {
        if (*(int *)(param_1 + 0x4b8) != 0) {
            uVar2 = 1;
            *(undefined8 *)(param_1 + 0x470) = 0;
            *(undefined4 *)(param_1 + 0x4b8) = 0;
        }
    }
    else {
        if ((*(int *)param_2 != *(int *)(param_1 + 0x470)) ||
            (*(int *)((longlong)param_2 + 4) != *(int *)(param_1 + 0x474))) {
            uVar2 = 1;
        }
        uVar1 = *param_2;
        *(undefined4 *)(param_1 + 0x4b8) = 6;
        *(undefined8 *)(param_1 + 0x470) = uVar1;
    }
    if (param_3 != 0) {
        *(undefined8 *)(param_1 + 0x4b0) = 0;
        FUN_140412ad0(param_1);
    }
    return uVar2;
}



undefined4 FUN_140412570(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 uVar9;

    uVar9 = 0;
    if (*(int *)(param_1 + 0x498) <= param_4) {
        if (param_2 == (undefined4 *)0x0) {
            uVar9 = 0;
            if ((param_4 == 6) && (*(int *)(param_1 + 0x498) != 0)) {
                uVar9 = 1;
                *(undefined4 *)(param_1 + 0x498) = 0;
            }
        }
        else {
            puVar6 = (undefined4 *)(param_1 + 0x20);
            uVar9 = 1;
            if ((((uint)param_2 | (uint)puVar6) & 0xf) == 0) {
                lVar5 = 2;
                do {
                    puVar8 = param_2;
                    puVar7 = puVar6;
                    uVar2 = puVar8[1];
                    uVar3 = puVar8[2];
                    uVar4 = puVar8[3];
                    *puVar7 = *puVar8;
                    puVar7[1] = uVar2;
                    puVar7[2] = uVar3;
                    puVar7[3] = uVar4;
                    uVar2 = puVar8[5];
                    uVar3 = puVar8[6];
                    uVar4 = puVar8[7];
                    puVar7[4] = puVar8[4];
                    puVar7[5] = uVar2;
                    puVar7[6] = uVar3;
                    puVar7[7] = uVar4;
                    uVar2 = puVar8[9];
                    uVar3 = puVar8[10];
                    uVar4 = puVar8[0xb];
                    puVar7[8] = puVar8[8];
                    puVar7[9] = uVar2;
                    puVar7[10] = uVar3;
                    puVar7[0xb] = uVar4;
                    uVar2 = puVar8[0xd];
                    uVar3 = puVar8[0xe];
                    uVar4 = puVar8[0xf];
                    puVar7[0xc] = puVar8[0xc];
                    puVar7[0xd] = uVar2;
                    puVar7[0xe] = uVar3;
                    puVar7[0xf] = uVar4;
                    uVar2 = puVar8[0x11];
                    uVar3 = puVar8[0x12];
                    uVar4 = puVar8[0x13];
                    puVar7[0x10] = puVar8[0x10];
                    puVar7[0x11] = uVar2;
                    puVar7[0x12] = uVar3;
                    puVar7[0x13] = uVar4;
                    uVar2 = puVar8[0x15];
                    uVar3 = puVar8[0x16];
                    uVar4 = puVar8[0x17];
                    puVar7[0x14] = puVar8[0x14];
                    puVar7[0x15] = uVar2;
                    puVar7[0x16] = uVar3;
                    puVar7[0x17] = uVar4;
                    uVar2 = puVar8[0x19];
                    uVar3 = puVar8[0x1a];
                    uVar4 = puVar8[0x1b];
                    puVar7[0x18] = puVar8[0x18];
                    puVar7[0x19] = uVar2;
                    puVar7[0x1a] = uVar3;
                    puVar7[0x1b] = uVar4;
                    uVar2 = puVar8[0x1d];
                    uVar3 = puVar8[0x1e];
                    uVar4 = puVar8[0x1f];
                    puVar7[0x1c] = puVar8[0x1c];
                    puVar7[0x1d] = uVar2;
                    puVar7[0x1e] = uVar3;
                    puVar7[0x1f] = uVar4;
                    lVar5 = lVar5 + -1;
                    puVar6 = puVar7 + 0x20;
                    param_2 = puVar8 + 0x20;
                } while (lVar5 != 0);
                uVar2 = puVar8[0x21];
                uVar3 = puVar8[0x22];
                uVar4 = puVar8[0x23];
                puVar7[0x20] = puVar8[0x20];
                puVar7[0x21] = uVar2;
                puVar7[0x22] = uVar3;
                puVar7[0x23] = uVar4;
                uVar2 = puVar8[0x25];
                uVar3 = puVar8[0x26];
                uVar4 = puVar8[0x27];
                puVar7[0x24] = puVar8[0x24];
                puVar7[0x25] = uVar2;
                puVar7[0x26] = uVar3;
                puVar7[0x27] = uVar4;
                uVar2 = puVar8[0x29];
                uVar3 = puVar8[0x2a];
                uVar4 = puVar8[0x2b];
                puVar7[0x28] = puVar8[0x28];
                puVar7[0x29] = uVar2;
                puVar7[0x2a] = uVar3;
                puVar7[0x2b] = uVar4;
                uVar1 = *(undefined8 *)(puVar8 + 0x2c);
                *(int *)(param_1 + 0x498) = param_4;
                *(undefined8 *)(puVar7 + 0x2c) = uVar1;
            }
            else {
                FUN_1407db590(puVar6,param_2,0x138);
                *(int *)(param_1 + 0x498) = param_4;
            }
        }
    }
    if (param_3 != 0) {
        FUN_140412ad0(param_1);
    }
    return uVar9;
}



undefined4 FUN_140412690(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined4 uVar8;
    undefined4 *puVar9;

    uVar8 = 0;
    if (*(int *)(param_1 + 0x49c) <= param_4) {
        if (param_2 == (undefined4 *)0x0) {
            uVar8 = 0;
            if ((param_4 == 6) && (*(int *)(param_1 + 0x49c) != 0)) {
                uVar8 = 1;
                *(undefined4 *)(param_1 + 0x49c) = 0;
            }
        }
        else {
            puVar1 = (undefined8 *)(param_1 + 0x158);
            FUN_1407e4830(puVar1,0,400);
            FUN_1407e4830(puVar1,0,0x90);
            *puVar1 = 0xc5000000c5;
            *(undefined8 *)(param_1 + 0x160) = 0xc5000000c5;
            *(undefined8 *)(param_1 + 0x168) = 0xc5000000c5;
            *(undefined8 *)(param_1 + 0x170) = 0xc5000000c5;
            *(undefined8 *)(param_1 + 0x178) = 0xc5000000c5;
            *(undefined8 *)(param_1 + 0x180) = 0xc5000000c5;
            *(undefined8 *)(param_1 + 0x188) = 0xc5000000c5;
            *(undefined4 *)(param_1 + 400) = 0xc5;
            uVar8 = 1;
            if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
                lVar6 = 1;
                do {
                    puVar9 = param_2;
                    puVar7 = puVar1;
                    uVar2 = puVar9[1];
                    uVar3 = puVar9[2];
                    uVar4 = puVar9[3];
                    *(undefined4 *)puVar7 = *puVar9;
                    *(undefined4 *)((longlong)puVar7 + 4) = uVar2;
                    *(undefined4 *)(puVar7 + 1) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0xc) = uVar4;
                    uVar2 = puVar9[5];
                    uVar3 = puVar9[6];
                    uVar4 = puVar9[7];
                    *(undefined4 *)(puVar7 + 2) = puVar9[4];
                    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
                    *(undefined4 *)(puVar7 + 3) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
                    uVar2 = puVar9[9];
                    uVar3 = puVar9[10];
                    uVar4 = puVar9[0xb];
                    *(undefined4 *)(puVar7 + 4) = puVar9[8];
                    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
                    *(undefined4 *)(puVar7 + 5) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
                    uVar2 = puVar9[0xd];
                    uVar3 = puVar9[0xe];
                    uVar4 = puVar9[0xf];
                    *(undefined4 *)(puVar7 + 6) = puVar9[0xc];
                    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar2;
                    *(undefined4 *)(puVar7 + 7) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar4;
                    uVar2 = puVar9[0x11];
                    uVar3 = puVar9[0x12];
                    uVar4 = puVar9[0x13];
                    *(undefined4 *)(puVar7 + 8) = puVar9[0x10];
                    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar2;
                    *(undefined4 *)(puVar7 + 9) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar4;
                    uVar2 = puVar9[0x15];
                    uVar3 = puVar9[0x16];
                    uVar4 = puVar9[0x17];
                    *(undefined4 *)(puVar7 + 10) = puVar9[0x14];
                    *(undefined4 *)((longlong)puVar7 + 0x54) = uVar2;
                    *(undefined4 *)(puVar7 + 0xb) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar4;
                    uVar2 = puVar9[0x19];
                    uVar3 = puVar9[0x1a];
                    uVar4 = puVar9[0x1b];
                    *(undefined4 *)(puVar7 + 0xc) = puVar9[0x18];
                    *(undefined4 *)((longlong)puVar7 + 100) = uVar2;
                    *(undefined4 *)(puVar7 + 0xd) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar4;
                    uVar2 = puVar9[0x1d];
                    uVar3 = puVar9[0x1e];
                    uVar4 = puVar9[0x1f];
                    *(undefined4 *)(puVar7 + 0xe) = puVar9[0x1c];
                    *(undefined4 *)((longlong)puVar7 + 0x74) = uVar2;
                    *(undefined4 *)(puVar7 + 0xf) = uVar3;
                    *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar4;
                    lVar6 = lVar6 + -1;
                    puVar1 = puVar7 + 0x10;
                    param_2 = puVar9 + 0x20;
                } while (lVar6 != 0);
                uVar2 = puVar9[0x20];
                uVar3 = puVar9[0x21];
                uVar4 = puVar9[0x22];
                uVar5 = puVar9[0x23];
                *(int *)(param_1 + 0x49c) = param_4;
                *(undefined4 *)(puVar7 + 0x10) = uVar2;
                *(undefined4 *)((longlong)puVar7 + 0x84) = uVar3;
                *(undefined4 *)(puVar7 + 0x11) = uVar4;
                *(undefined4 *)((longlong)puVar7 + 0x8c) = uVar5;
            }
            else {
                FUN_1407db590(puVar1,param_2,0x90);
                *(int *)(param_1 + 0x49c) = param_4;
            }
        }
    }
    if (param_3 != 0) {
        FUN_140412ad0(param_1);
    }
    return uVar8;
}



undefined4 FUN_140412800(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 uVar9;

    uVar9 = 0;
    if (*(int *)(param_1 + 0x49c) <= param_4) {
        if (param_2 == (undefined4 *)0x0) {
            uVar9 = 0;
            if ((param_4 == 6) && (*(int *)(param_1 + 0x49c) != 0)) {
                uVar9 = 1;
                *(undefined4 *)(param_1 + 0x49c) = 0;
            }
        }
        else {
            puVar6 = (undefined4 *)(param_1 + 0x158);
            uVar9 = 1;
            if ((((uint)param_2 | (uint)puVar6) & 0xf) == 0) {
                lVar5 = 3;
                do {
                    puVar8 = param_2;
                    puVar7 = puVar6;
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
                    lVar5 = lVar5 + -1;
                    puVar6 = puVar7 + 0x20;
                    param_2 = puVar8 + 0x20;
                } while (lVar5 != 0);
                uVar1 = puVar8[0x20];
                uVar2 = puVar8[0x21];
                uVar3 = puVar8[0x22];
                uVar4 = puVar8[0x23];
                *(int *)(param_1 + 0x49c) = param_4;
                puVar7[0x20] = uVar1;
                puVar7[0x21] = uVar2;
                puVar7[0x22] = uVar3;
                puVar7[0x23] = uVar4;
            }
            else {
                FUN_1407db590(puVar6,param_2,400);
                *(int *)(param_1 + 0x49c) = param_4;
            }
        }
    }
    if (param_3 != 0) {
        FUN_140412ad0(param_1);
    }
    return uVar9;
}



undefined4 FUN_140412900(longlong *param_1,undefined4 *param_2,int param_3,int param_4)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0;
    if (*(int *)((longlong)param_1 + 0x4a4) <= param_4) {
        if (param_2 == (undefined4 *)0x0) {
            if ((param_4 != 6) || (*(int *)((longlong)param_1 + 0x4a4) == 0)) goto LAB_140412991;
        }
        else {
            uVar2 = 1;
            *(undefined4 *)(param_1 + 0x5d) = *param_2;
            *(undefined4 *)((longlong)param_1 + 0x2ec) = param_2[1];
            *(undefined4 *)(param_1 + 0x5e) = param_2[2];
            *(undefined4 *)((longlong)param_1 + 0x2f4) = param_2[3];
            *(int *)((longlong)param_1 + 0x4a4) = param_4;
            if (((*param_1 == 0) ||
                 (((lVar1 = *(longlong *)(*param_1 + 0x58), lVar1 == 0 || (0 < *(int *)(lVar1 + 8))) ||
                   (uVar2 = 1, lVar1 == 0)))) || (0 < *(int *)(lVar1 + 8))) goto LAB_140412991;
            param_1[0x5d] = 0;
            param_1[0x5e] = 0;
        }
        uVar2 = 1;
        *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
    }
    LAB_140412991:
    if (param_3 != 0) {
        FUN_140412ad0();
    }
    return uVar2;
}



bool FUN_1404129b0(longlong param_1,int *param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    int *piVar5;
    bool bVar6;

    bVar6 = false;
    if ((((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_2[1] != 0)) || (param_2[2] == 0)) {
        if (*(int *)(param_1 + 0x4b4) != 0) {
            bVar6 = true;
            *(undefined4 *)(param_1 + 0x318) = 0;
            *(undefined4 *)(param_1 + 0x4b4) = 0;
        }
    }
    else {
        piVar5 = (int *)(param_1 + 0x318);
        bVar6 = *piVar5 != *param_2;
        if ((((uint)param_2 | (uint)piVar5) & 0xf) == 0) {
            lVar4 = 2;
            do {
                iVar1 = param_2[1];
                iVar2 = param_2[2];
                iVar3 = param_2[3];
                *piVar5 = *param_2;
                piVar5[1] = iVar1;
                piVar5[2] = iVar2;
                piVar5[3] = iVar3;
                iVar1 = param_2[5];
                iVar2 = param_2[6];
                iVar3 = param_2[7];
                piVar5[4] = param_2[4];
                piVar5[5] = iVar1;
                piVar5[6] = iVar2;
                piVar5[7] = iVar3;
                iVar1 = param_2[9];
                iVar2 = param_2[10];
                iVar3 = param_2[0xb];
                piVar5[8] = param_2[8];
                piVar5[9] = iVar1;
                piVar5[10] = iVar2;
                piVar5[0xb] = iVar3;
                iVar1 = param_2[0xd];
                iVar2 = param_2[0xe];
                iVar3 = param_2[0xf];
                piVar5[0xc] = param_2[0xc];
                piVar5[0xd] = iVar1;
                piVar5[0xe] = iVar2;
                piVar5[0xf] = iVar3;
                iVar1 = param_2[0x11];
                iVar2 = param_2[0x12];
                iVar3 = param_2[0x13];
                piVar5[0x10] = param_2[0x10];
                piVar5[0x11] = iVar1;
                piVar5[0x12] = iVar2;
                piVar5[0x13] = iVar3;
                iVar1 = param_2[0x15];
                iVar2 = param_2[0x16];
                iVar3 = param_2[0x17];
                piVar5[0x14] = param_2[0x14];
                piVar5[0x15] = iVar1;
                piVar5[0x16] = iVar2;
                piVar5[0x17] = iVar3;
                iVar1 = param_2[0x19];
                iVar2 = param_2[0x1a];
                iVar3 = param_2[0x1b];
                piVar5[0x18] = param_2[0x18];
                piVar5[0x19] = iVar1;
                piVar5[0x1a] = iVar2;
                piVar5[0x1b] = iVar3;
                iVar1 = param_2[0x1d];
                iVar2 = param_2[0x1e];
                iVar3 = param_2[0x1f];
                piVar5[0x1c] = param_2[0x1c];
                piVar5[0x1d] = iVar1;
                piVar5[0x1e] = iVar2;
                piVar5[0x1f] = iVar3;
                lVar4 = lVar4 + -1;
                piVar5 = piVar5 + 0x20;
                param_2 = param_2 + 0x20;
            } while (lVar4 != 0);
            *(undefined4 *)(param_1 + 0x4b4) = 6;
        }
        else {
            FUN_1407db590(piVar5,param_2,0x100);
            *(undefined4 *)(param_1 + 0x4b4) = 6;
        }
    }
    if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0x4b0) = 0;
        *(undefined4 *)(param_1 + 0x4b8) = 0;
        FUN_140412ad0(param_1);
    }
    return bVar6;
}



undefined8 FUN_140412ad0(longlong *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;

    if (*(int *)(param_1 + 0x97) == 6) {
        uVar5 = FUN_140412c50();
    }
    else if (*(int *)((longlong)param_1 + 0x4b4) == 6) {
        uVar5 = FUN_140412cd0();
    }
    else if (*(int *)(param_1 + 0x96) == 6) {
        uVar5 = FUN_140412fd0();
    }
    else if (*param_1 == 0) {
        uVar5 = FUN_140413990();
    }
    else {
        uVar5 = FUN_140413520();
    }
    if (*(int *)((longlong)param_1 + 0x4b4) < 6) {
        *(undefined4 *)(param_1 + 99) = 0;
        *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
    }
    if (*(int *)(param_1 + 0x96) < 6) {
        *(undefined4 *)(param_1 + 0x83) = 0;
        *(undefined4 *)(param_1 + 0x96) = 0;
    }
    if (*(int *)(param_1 + 0x97) < 6) {
        param_1[0x8e] = 0;
        *(undefined4 *)(param_1 + 0x97) = 0;
        uVar5 = 0;
    }
    if (param_1[1] != 0) {
        puVar8 = (undefined4 *)(param_1[1] + 8);
        if ((*(int *)(param_1 + 0x93) < 2) && (puVar8 != (undefined4 *)0x0)) {
            plVar4 = param_1 + 4;
            if ((((uint)puVar8 | (uint)plVar4) & 0xf) == 0) {
                lVar6 = 2;
                do {
                    puVar9 = puVar8;
                    plVar7 = plVar4;
                    uVar1 = puVar9[1];
                    uVar2 = puVar9[2];
                    uVar3 = puVar9[3];
                    *(undefined4 *)plVar7 = *puVar9;
                    *(undefined4 *)((longlong)plVar7 + 4) = uVar1;
                    *(undefined4 *)(plVar7 + 1) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
                    uVar1 = puVar9[5];
                    uVar2 = puVar9[6];
                    uVar3 = puVar9[7];
                    *(undefined4 *)(plVar7 + 2) = puVar9[4];
                    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar1;
                    *(undefined4 *)(plVar7 + 3) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar3;
                    uVar1 = puVar9[9];
                    uVar2 = puVar9[10];
                    uVar3 = puVar9[0xb];
                    *(undefined4 *)(plVar7 + 4) = puVar9[8];
                    *(undefined4 *)((longlong)plVar7 + 0x24) = uVar1;
                    *(undefined4 *)(plVar7 + 5) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar3;
                    uVar1 = puVar9[0xd];
                    uVar2 = puVar9[0xe];
                    uVar3 = puVar9[0xf];
                    *(undefined4 *)(plVar7 + 6) = puVar9[0xc];
                    *(undefined4 *)((longlong)plVar7 + 0x34) = uVar1;
                    *(undefined4 *)(plVar7 + 7) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x3c) = uVar3;
                    uVar1 = puVar9[0x11];
                    uVar2 = puVar9[0x12];
                    uVar3 = puVar9[0x13];
                    *(undefined4 *)(plVar7 + 8) = puVar9[0x10];
                    *(undefined4 *)((longlong)plVar7 + 0x44) = uVar1;
                    *(undefined4 *)(plVar7 + 9) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x4c) = uVar3;
                    uVar1 = puVar9[0x15];
                    uVar2 = puVar9[0x16];
                    uVar3 = puVar9[0x17];
                    *(undefined4 *)(plVar7 + 10) = puVar9[0x14];
                    *(undefined4 *)((longlong)plVar7 + 0x54) = uVar1;
                    *(undefined4 *)(plVar7 + 0xb) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x5c) = uVar3;
                    uVar1 = puVar9[0x19];
                    uVar2 = puVar9[0x1a];
                    uVar3 = puVar9[0x1b];
                    *(undefined4 *)(plVar7 + 0xc) = puVar9[0x18];
                    *(undefined4 *)((longlong)plVar7 + 100) = uVar1;
                    *(undefined4 *)(plVar7 + 0xd) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x6c) = uVar3;
                    uVar1 = puVar9[0x1d];
                    uVar2 = puVar9[0x1e];
                    uVar3 = puVar9[0x1f];
                    *(undefined4 *)(plVar7 + 0xe) = puVar9[0x1c];
                    *(undefined4 *)((longlong)plVar7 + 0x74) = uVar1;
                    *(undefined4 *)(plVar7 + 0xf) = uVar2;
                    *(undefined4 *)((longlong)plVar7 + 0x7c) = uVar3;
                    lVar6 = lVar6 + -1;
                    plVar4 = plVar7 + 0x10;
                    puVar8 = puVar9 + 0x20;
                } while (lVar6 != 0);
                uVar1 = puVar9[0x21];
                uVar2 = puVar9[0x22];
                uVar3 = puVar9[0x23];
                *(undefined4 *)(plVar7 + 0x10) = puVar9[0x20];
                *(undefined4 *)((longlong)plVar7 + 0x84) = uVar1;
                *(undefined4 *)(plVar7 + 0x11) = uVar2;
                *(undefined4 *)((longlong)plVar7 + 0x8c) = uVar3;
                uVar1 = puVar9[0x25];
                uVar2 = puVar9[0x26];
                uVar3 = puVar9[0x27];
                *(undefined4 *)(plVar7 + 0x12) = puVar9[0x24];
                *(undefined4 *)((longlong)plVar7 + 0x94) = uVar1;
                *(undefined4 *)(plVar7 + 0x13) = uVar2;
                *(undefined4 *)((longlong)plVar7 + 0x9c) = uVar3;
                uVar1 = puVar9[0x29];
                uVar2 = puVar9[0x2a];
                uVar3 = puVar9[0x2b];
                *(undefined4 *)(plVar7 + 0x14) = puVar9[0x28];
                *(undefined4 *)((longlong)plVar7 + 0xa4) = uVar1;
                *(undefined4 *)(plVar7 + 0x15) = uVar2;
                *(undefined4 *)((longlong)plVar7 + 0xac) = uVar3;
                plVar7[0x16] = *(longlong *)(puVar9 + 0x2c);
            }
            else {
                FUN_1407db590(plVar4,puVar8,0x138);
            }
            *(undefined4 *)(param_1 + 0x93) = 1;
        }
        uVar5 = FUN_140412690(param_1,(longlong)param_1 + 0xb4,0,1);
        return uVar5;
    }
    return uVar5;
}



void FUN_140412c50(longlong **param_1)

{
    undefined8 uVar1;

    param_1[0x96] = (longlong *)0x0;
    *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
    FUN_14001c2b0(param_1 + 0x5f,param_1[0x60],param_1[0x61]);
    *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    uVar1 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x8e),0);
    FUN_140412470(param_1,uVar1,0,5);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140412cd0(longlong **param_1)

{
    uint uVar1;
    byte bVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    longlong **pplVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong **pplVar10;
    longlong *plVar11;
    longlong *plVar12;
    undefined auStack72 [32];
    undefined8 local_28;
    ulonglong local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    uVar8 = DAT_140c658f0;
    *(undefined4 *)(param_1 + 0x97) = 0;
    *(undefined4 *)(param_1 + 0x96) = 0;
    uVar8 = FUN_1400b5df0(uVar8,*(undefined4 *)(param_1 + 100),0);
    FUN_140412470(param_1,uVar8,0,4);
    if (param_1[1] != (longlong *)0x0) {
        plVar11 = param_1[1] + 1;
        if ((*(int *)(param_1 + 0x93) < 5) && (plVar11 != (longlong *)0x0)) {
            pplVar7 = param_1 + 4;
            if ((((uint)plVar11 | (uint)pplVar7) & 0xf) == 0) {
                lVar9 = 2;
                do {
                    plVar12 = plVar11;
                    pplVar10 = pplVar7;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 4);
                    uVar4 = *(undefined4 *)(plVar12 + 1);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0xc);
                    *(undefined4 *)pplVar10 = *(undefined4 *)plVar12;
                    *(undefined4 *)((longlong)pplVar10 + 4) = uVar3;
                    *(undefined4 *)(pplVar10 + 1) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0xc) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x14);
                    uVar4 = *(undefined4 *)(plVar12 + 3);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x1c);
                    *(undefined4 *)(pplVar10 + 2) = *(undefined4 *)(plVar12 + 2);
                    *(undefined4 *)((longlong)pplVar10 + 0x14) = uVar3;
                    *(undefined4 *)(pplVar10 + 3) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x1c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x24);
                    uVar4 = *(undefined4 *)(plVar12 + 5);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x2c);
                    *(undefined4 *)(pplVar10 + 4) = *(undefined4 *)(plVar12 + 4);
                    *(undefined4 *)((longlong)pplVar10 + 0x24) = uVar3;
                    *(undefined4 *)(pplVar10 + 5) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x2c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x34);
                    uVar4 = *(undefined4 *)(plVar12 + 7);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x3c);
                    *(undefined4 *)(pplVar10 + 6) = *(undefined4 *)(plVar12 + 6);
                    *(undefined4 *)((longlong)pplVar10 + 0x34) = uVar3;
                    *(undefined4 *)(pplVar10 + 7) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x3c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x44);
                    uVar4 = *(undefined4 *)(plVar12 + 9);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x4c);
                    *(undefined4 *)(pplVar10 + 8) = *(undefined4 *)(plVar12 + 8);
                    *(undefined4 *)((longlong)pplVar10 + 0x44) = uVar3;
                    *(undefined4 *)(pplVar10 + 9) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x4c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x54);
                    uVar4 = *(undefined4 *)(plVar12 + 0xb);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x5c);
                    *(undefined4 *)(pplVar10 + 10) = *(undefined4 *)(plVar12 + 10);
                    *(undefined4 *)((longlong)pplVar10 + 0x54) = uVar3;
                    *(undefined4 *)(pplVar10 + 0xb) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x5c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 100);
                    uVar4 = *(undefined4 *)(plVar12 + 0xd);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x6c);
                    *(undefined4 *)(pplVar10 + 0xc) = *(undefined4 *)(plVar12 + 0xc);
                    *(undefined4 *)((longlong)pplVar10 + 100) = uVar3;
                    *(undefined4 *)(pplVar10 + 0xd) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x6c) = uVar5;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x74);
                    uVar4 = *(undefined4 *)(plVar12 + 0xf);
                    uVar5 = *(undefined4 *)((longlong)plVar12 + 0x7c);
                    *(undefined4 *)(pplVar10 + 0xe) = *(undefined4 *)(plVar12 + 0xe);
                    *(undefined4 *)((longlong)pplVar10 + 0x74) = uVar3;
                    *(undefined4 *)(pplVar10 + 0xf) = uVar4;
                    *(undefined4 *)((longlong)pplVar10 + 0x7c) = uVar5;
                    lVar9 = lVar9 + -1;
                    pplVar7 = pplVar10 + 0x10;
                    plVar11 = plVar12 + 0x10;
                } while (lVar9 != 0);
                uVar3 = *(undefined4 *)((longlong)plVar12 + 0x84);
                uVar4 = *(undefined4 *)(plVar12 + 0x11);
                uVar5 = *(undefined4 *)((longlong)plVar12 + 0x8c);
                *(undefined4 *)(pplVar10 + 0x10) = *(undefined4 *)(plVar12 + 0x10);
                *(undefined4 *)((longlong)pplVar10 + 0x84) = uVar3;
                *(undefined4 *)(pplVar10 + 0x11) = uVar4;
                *(undefined4 *)((longlong)pplVar10 + 0x8c) = uVar5;
                uVar3 = *(undefined4 *)((longlong)plVar12 + 0x94);
                uVar4 = *(undefined4 *)(plVar12 + 0x13);
                uVar5 = *(undefined4 *)((longlong)plVar12 + 0x9c);
                *(undefined4 *)(pplVar10 + 0x12) = *(undefined4 *)(plVar12 + 0x12);
                *(undefined4 *)((longlong)pplVar10 + 0x94) = uVar3;
                *(undefined4 *)(pplVar10 + 0x13) = uVar4;
                *(undefined4 *)((longlong)pplVar10 + 0x9c) = uVar5;
                uVar3 = *(undefined4 *)((longlong)plVar12 + 0xa4);
                uVar4 = *(undefined4 *)(plVar12 + 0x15);
                uVar5 = *(undefined4 *)((longlong)plVar12 + 0xac);
                *(undefined4 *)(pplVar10 + 0x14) = *(undefined4 *)(plVar12 + 0x14);
                *(undefined4 *)((longlong)pplVar10 + 0xa4) = uVar3;
                *(undefined4 *)(pplVar10 + 0x15) = uVar4;
                *(undefined4 *)((longlong)pplVar10 + 0xac) = uVar5;
                pplVar10[0x16] = (longlong *)plVar12[0x16];
            }
            else {
                FUN_1407db590(pplVar7,plVar11,0x138);
            }
            *(undefined4 *)(param_1 + 0x93) = 4;
        }
        FUN_140412690(param_1,(longlong)param_1 + 0xb4,0,4);
    }
    uVar1 = *(uint *)(param_1 + 0x6a);
    local_20 = (ulonglong)CONCAT11((char)uVar1,(char)(uVar1 >> 3)) & 0xffffffffffff0707;
    bVar2 = (byte)(uVar1 >> 0x18);
    uVar6 = (ulonglong)
                    (CONCAT16(bVar2 >> 1,
                              CONCAT15((char)(uVar1 >> 0x16),
                                       CONCAT14((char)(uVar1 >> 0x13),
                                                CONCAT13((char)(uVar1 >> 0x10),
                                                         CONCAT12((char)(uVar1 >> 0xd),
                                                                  CONCAT11((char)(uVar1 >> 10),
                                                                           (char)(uVar1 >> 7))))))) &
                     0xff070707070707) & 0xff07ffffffffffff;
    local_28 = ((ulonglong)(bVar2 >> 4) & 7) << 0x38 | uVar6;
    if (*(int *)((longlong)param_1 + 0x4a4) < 5) {
        local_28._0_4_ = (undefined4)uVar6;
        *(undefined4 *)((longlong)param_1 + 0x4a4) = 4;
        *(undefined4 *)(param_1 + 0x5d) = (undefined4)local_28;
        *(undefined4 *)((longlong)param_1 + 0x2ec) = local_28._4_4_;
        *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_20;
        *(uint *)((longlong)param_1 + 0x2f4) = uVar1 >> 6 & 1;
        if ((((*param_1 != (longlong *)0x0) && (lVar9 = (*param_1)[0xb], lVar9 != 0)) &&
             (*(int *)(lVar9 + 8) < 1)) && ((lVar9 != 0 && (*(int *)(lVar9 + 8) < 1)))) {
            param_1[0x5d] = (longlong *)0x0;
            param_1[0x5e] = (longlong *)0x0;
            *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
        }
    }
    if ((*(int *)(param_1 + 0x95) < 5) &&
        ((undefined4 *)((longlong)param_1 + 0x37c) != (undefined4 *)0x0)) {
        param_1[0x8f] = (longlong *)0x0;
        param_1[0x90] = (longlong *)0x0;
        param_1[0x91] = (longlong *)0x0;
        param_1[0x92] = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0x8f) = *(undefined4 *)((longlong)param_1 + 0x37c);
        *(undefined4 *)((longlong)param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_1 + 900);
        *(undefined4 *)((longlong)param_1 + 0x484) = *(undefined4 *)(param_1 + 0x71);
        *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)((longlong)param_1 + 0x38c);
        *(undefined4 *)((longlong)param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x72);
        *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)((longlong)param_1 + 0x394);
        *(undefined4 *)((longlong)param_1 + 0x494) = *(undefined4 *)(param_1 + 0x73);
        *(undefined4 *)(param_1 + 0x95) = 4;
    }
    if (*(int *)((longlong)param_1 + 0x4ac) < 6) {
        FUN_14001c2b0(param_1 + 0x5f,param_1[0x60],param_1[0x61]);
        *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack72);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140412fd0(longlong **param_1)

{
    uint uVar1;
    longlong *plVar2;
    byte bVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    longlong **pplVar12;
    undefined4 *puVar13;
    undefined8 *puVar14;
    longlong lVar15;
    longlong **pplVar16;
    undefined4 *puVar17;
    undefined8 *puVar18;
    undefined auStack1224 [32];
    undefined8 local_4a8;
    undefined8 local_4a0;
    undefined local_498 [32];
    longlong *local_478;
    uint local_470;
    undefined8 local_468;
    undefined8 local_460;
    undefined **local_458;
    undefined4 local_450;
    longlong *local_448;
    undefined8 local_440;
    undefined8 local_438;
    undefined8 local_430;
    undefined8 local_428;
    undefined8 local_420;
    undefined8 local_418;
    undefined4 local_410;
    undefined local_408 [16];
    undefined4 local_3f8;
    undefined8 local_3f0;
    undefined8 *local_3e8;
    undefined8 local_3dc;
    undefined4 local_3d4;
    undefined8 local_3d0;
    undefined8 local_3c8;
    undefined8 local_3c0;
    undefined local_3b8 [16];
    undefined8 local_3a8;
    undefined4 local_38c;
    undefined8 local_340;
    undefined8 local_338;
    undefined8 local_330;
    undefined8 local_328;
    undefined8 local_320;
    undefined8 local_2e8;
    undefined8 uStack736;
    undefined8 local_2d8;
    undefined8 uStack720;
    undefined8 local_2c8;
    undefined8 uStack704;
    undefined8 local_2b8;
    undefined4 uStack688;
    undefined4 local_158 [80];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack1224;
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
    FUN_140412470(param_1,param_1[0x85],0,3);
    if (((param_1[0x86] != (longlong *)0x0) || (*(int *)(param_1 + 0x87) != 0)) ||
        ((*(uint *)((longlong)param_1[0x85] + 0x14c) & 0x100000) != 0)) {
        local_458 = &PTR_FUN_140b66a40;
        local_408 = ZEXT816(0);
        local_3b8 = ZEXT816(0);
        local_450 = 0;
        local_448 = (longlong *)0x0;
        local_3d4 = 1;
        local_440 = 1;
        local_438 = 0;
        local_430 = 0;
        local_428 = 0;
        local_420 = 0;
        local_418 = 0;
        local_410 = 0;
        local_3f8 = 0;
        local_3f0 = 0;
        local_3e8 = (undefined8 *)0x0;
        local_3dc = 0;
        local_3d0 = 0;
        local_3c8 = 0;
        local_3c0 = 0;
        local_3a8 = 0;
        local_38c = 0;
        local_340 = 0;
        local_338 = 0;
        local_330 = 0;
        local_328 = 0;
        local_320 = 0;
        puVar14 = (undefined8 *)FUN_140445320(local_498,*(undefined4 *)((longlong)param_1 + 0x43c));
        local_448 = param_1[0x85];
        local_440 = *puVar14;
        local_438 = puVar14[1];
        local_430 = puVar14[2];
        local_428 = puVar14[3];
        plVar2 = param_1[0x86];
        if (plVar2 == (longlong *)0x0) {
            local_470 = 1;
            local_478 = plVar2;
            if ((local_448 != (longlong *)0x0) && (*(int *)(local_448 + 0x28) - 1U < 2)) {
                local_470 = 0;
            }
        }
        else {
            local_478 = (longlong *)((ulonglong)plVar2 & 0xffffffffffffff);
            local_470 = (uint)(byte)((ulonglong)plVar2 >> 0x38);
        }
        uVar1 = *(uint *)(param_1 + 0x87);
        local_420 = 0;
        local_408 = CONCAT88(&local_478,local_408._0_8_);
        local_3f8 = 0;
        local_3f0 = 0;
        local_460 = CONCAT44(uVar1 >> 6,(uint)CONCAT11((char)uVar1,(char)(uVar1 >> 3))) & 0x1ffff0707;
        bVar3 = (byte)(uVar1 >> 0x18);
        local_468 = CONCAT17(bVar3 >> 4,
                             CONCAT16(bVar3 >> 1,
                                      CONCAT15((char)(uVar1 >> 0x16),
                                               CONCAT14((char)(uVar1 >> 0x13),
                                                        CONCAT13((char)(uVar1 >> 0x10),
                                                                 CONCAT12((char)(uVar1 >> 0xd),
                                                                          CONCAT11((char)(uVar1 >> 10),
                                                                                   (char)(uVar1 >> 7))))
                                               )))) & 0x707070707070707;
        local_3e8 = &local_468;
        FUN_1400b52a0(local_158);
        FUN_1407e4830(&local_2e8,0,400);
        FUN_1407e4830(&local_2e8,0,0x90);
        local_4a0 = 0;
        local_2e8 = 0xc5000000c5;
        uStack736 = 0xc5000000c5;
        local_2d8 = 0xc5000000c5;
        uStack720 = 0xc5000000c5;
        local_2c8 = 0xc5000000c5;
        uStack704 = 0xc5000000c5;
        local_2b8 = 0xc5000000c5;
        uStack688 = 0xc5;
        local_4a8 = 0;
        FUN_14040c310(&local_458,local_158,DAT_140c658f0,&local_2e8);
        if (*(int *)(param_1 + 0x93) < 4) {
            pplVar12 = param_1 + 4;
            if ((((uint)local_158 | (uint)pplVar12) & 0xf) == 0) {
                lVar15 = 2;
                puVar13 = local_158;
                do {
                    puVar17 = puVar13;
                    pplVar16 = pplVar12;
                    uVar4 = puVar17[1];
                    uVar5 = puVar17[2];
                    uVar6 = puVar17[3];
                    uVar7 = puVar17[4];
                    uVar8 = puVar17[5];
                    uVar9 = puVar17[6];
                    uVar10 = puVar17[7];
                    *(undefined4 *)pplVar16 = *puVar17;
                    *(undefined4 *)((longlong)pplVar16 + 4) = uVar4;
                    *(undefined4 *)(pplVar16 + 1) = uVar5;
                    *(undefined4 *)((longlong)pplVar16 + 0xc) = uVar6;
                    uVar4 = puVar17[8];
                    uVar5 = puVar17[9];
                    uVar6 = puVar17[10];
                    uVar11 = puVar17[0xb];
                    *(undefined4 *)(pplVar16 + 2) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x14) = uVar8;
                    *(undefined4 *)(pplVar16 + 3) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x1c) = uVar10;
                    uVar7 = puVar17[0xc];
                    uVar8 = puVar17[0xd];
                    uVar9 = puVar17[0xe];
                    uVar10 = puVar17[0xf];
                    *(undefined4 *)(pplVar16 + 4) = uVar4;
                    *(undefined4 *)((longlong)pplVar16 + 0x24) = uVar5;
                    *(undefined4 *)(pplVar16 + 5) = uVar6;
                    *(undefined4 *)((longlong)pplVar16 + 0x2c) = uVar11;
                    uVar4 = puVar17[0x10];
                    uVar5 = puVar17[0x11];
                    uVar6 = puVar17[0x12];
                    uVar11 = puVar17[0x13];
                    *(undefined4 *)(pplVar16 + 6) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x34) = uVar8;
                    *(undefined4 *)(pplVar16 + 7) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x3c) = uVar10;
                    uVar7 = puVar17[0x14];
                    uVar8 = puVar17[0x15];
                    uVar9 = puVar17[0x16];
                    uVar10 = puVar17[0x17];
                    *(undefined4 *)(pplVar16 + 8) = uVar4;
                    *(undefined4 *)((longlong)pplVar16 + 0x44) = uVar5;
                    *(undefined4 *)(pplVar16 + 9) = uVar6;
                    *(undefined4 *)((longlong)pplVar16 + 0x4c) = uVar11;
                    uVar4 = puVar17[0x18];
                    uVar5 = puVar17[0x19];
                    uVar6 = puVar17[0x1a];
                    uVar11 = puVar17[0x1b];
                    *(undefined4 *)(pplVar16 + 10) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x54) = uVar8;
                    *(undefined4 *)(pplVar16 + 0xb) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x5c) = uVar10;
                    uVar7 = puVar17[0x1c];
                    uVar8 = puVar17[0x1d];
                    uVar9 = puVar17[0x1e];
                    uVar10 = puVar17[0x1f];
                    *(undefined4 *)(pplVar16 + 0xc) = uVar4;
                    *(undefined4 *)((longlong)pplVar16 + 100) = uVar5;
                    *(undefined4 *)(pplVar16 + 0xd) = uVar6;
                    *(undefined4 *)((longlong)pplVar16 + 0x6c) = uVar11;
                    *(undefined4 *)(pplVar16 + 0xe) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x74) = uVar8;
                    *(undefined4 *)(pplVar16 + 0xf) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x7c) = uVar10;
                    lVar15 = lVar15 + -1;
                    pplVar12 = pplVar16 + 0x10;
                    puVar13 = puVar17 + 0x20;
                } while (lVar15 != 0);
                uVar4 = puVar17[0x21];
                uVar5 = puVar17[0x22];
                uVar6 = puVar17[0x23];
                uVar8 = puVar17[0x24];
                uVar9 = puVar17[0x25];
                uVar10 = puVar17[0x26];
                uVar11 = puVar17[0x27];
                plVar2 = *(longlong **)(puVar17 + 0x2c);
                *(undefined4 *)(pplVar16 + 0x10) = puVar17[0x20];
                *(undefined4 *)((longlong)pplVar16 + 0x84) = uVar4;
                *(undefined4 *)(pplVar16 + 0x11) = uVar5;
                *(undefined4 *)((longlong)pplVar16 + 0x8c) = uVar6;
                uVar4 = puVar17[0x28];
                uVar5 = puVar17[0x29];
                uVar6 = puVar17[0x2a];
                uVar7 = puVar17[0x2b];
                *(undefined4 *)(pplVar16 + 0x12) = uVar8;
                *(undefined4 *)((longlong)pplVar16 + 0x94) = uVar9;
                *(undefined4 *)(pplVar16 + 0x13) = uVar10;
                *(undefined4 *)((longlong)pplVar16 + 0x9c) = uVar11;
                *(undefined4 *)(pplVar16 + 0x14) = uVar4;
                *(undefined4 *)((longlong)pplVar16 + 0xa4) = uVar5;
                *(undefined4 *)(pplVar16 + 0x15) = uVar6;
                *(undefined4 *)((longlong)pplVar16 + 0xac) = uVar7;
                pplVar16[0x16] = plVar2;
            }
            else {
                FUN_1407db590(pplVar12,local_158,0x138);
            }
            *(undefined4 *)(param_1 + 0x93) = 3;
        }
        if (*(int *)((longlong)param_1 + 0x49c) < 4) {
            pplVar12 = param_1 + 0x2b;
            if ((((uint)&local_2e8 | (uint)pplVar12) & 0xf) == 0) {
                lVar15 = 3;
                puVar14 = &local_2e8;
                do {
                    puVar18 = puVar14;
                    pplVar16 = pplVar12;
                    uVar4 = *(undefined4 *)((longlong)puVar18 + 4);
                    uVar5 = *(undefined4 *)(puVar18 + 1);
                    uVar6 = *(undefined4 *)((longlong)puVar18 + 0xc);
                    uVar7 = *(undefined4 *)(puVar18 + 2);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x14);
                    uVar9 = *(undefined4 *)(puVar18 + 3);
                    uVar10 = *(undefined4 *)((longlong)puVar18 + 0x1c);
                    *(undefined4 *)pplVar16 = *(undefined4 *)puVar18;
                    *(undefined4 *)((longlong)pplVar16 + 4) = uVar4;
                    *(undefined4 *)(pplVar16 + 1) = uVar5;
                    *(undefined4 *)((longlong)pplVar16 + 0xc) = uVar6;
                    uVar4 = *(undefined4 *)(puVar18 + 4);
                    uVar5 = *(undefined4 *)((longlong)puVar18 + 0x24);
                    uVar6 = *(undefined4 *)(puVar18 + 5);
                    uVar11 = *(undefined4 *)((longlong)puVar18 + 0x2c);
                    *(undefined4 *)(pplVar16 + 2) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x14) = uVar8;
                    *(undefined4 *)(pplVar16 + 3) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x1c) = uVar10;
                    uVar7 = *(undefined4 *)(puVar18 + 6);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x34);
                    uVar9 = *(undefined4 *)(puVar18 + 7);
                    uVar10 = *(undefined4 *)((longlong)puVar18 + 0x3c);
                    *(undefined4 *)(pplVar16 + 4) = uVar4;
                    *(undefined4 *)((longlong)pplVar16 + 0x24) = uVar5;
                    *(undefined4 *)(pplVar16 + 5) = uVar6;
                    *(undefined4 *)((longlong)pplVar16 + 0x2c) = uVar11;
                    uVar4 = *(undefined4 *)(puVar18 + 8);
                    uVar5 = *(undefined4 *)((longlong)puVar18 + 0x44);
                    uVar6 = *(undefined4 *)(puVar18 + 9);
                    uVar11 = *(undefined4 *)((longlong)puVar18 + 0x4c);
                    *(undefined4 *)(pplVar16 + 6) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x34) = uVar8;
                    *(undefined4 *)(pplVar16 + 7) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x3c) = uVar10;
                    uVar7 = *(undefined4 *)(puVar18 + 10);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x54);
                    uVar9 = *(undefined4 *)(puVar18 + 0xb);
                    uVar10 = *(undefined4 *)((longlong)puVar18 + 0x5c);
                    *(undefined4 *)(pplVar16 + 8) = uVar4;
                    *(undefined4 *)((longlong)pplVar16 + 0x44) = uVar5;
                    *(undefined4 *)(pplVar16 + 9) = uVar6;
                    *(undefined4 *)((longlong)pplVar16 + 0x4c) = uVar11;
                    uVar4 = *(undefined4 *)(puVar18 + 0xc);
                    uVar5 = *(undefined4 *)((longlong)puVar18 + 100);
                    uVar6 = *(undefined4 *)(puVar18 + 0xd);
                    uVar11 = *(undefined4 *)((longlong)puVar18 + 0x6c);
                    *(undefined4 *)(pplVar16 + 10) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x54) = uVar8;
                    *(undefined4 *)(pplVar16 + 0xb) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x5c) = uVar10;
                    uVar7 = *(undefined4 *)(puVar18 + 0xe);
                    uVar8 = *(undefined4 *)((longlong)puVar18 + 0x74);
                    uVar9 = *(undefined4 *)(puVar18 + 0xf);
                    uVar10 = *(undefined4 *)((longlong)puVar18 + 0x7c);
                    *(undefined4 *)(pplVar16 + 0xc) = uVar4;
                    *(undefined4 *)((longlong)pplVar16 + 100) = uVar5;
                    *(undefined4 *)(pplVar16 + 0xd) = uVar6;
                    *(undefined4 *)((longlong)pplVar16 + 0x6c) = uVar11;
                    *(undefined4 *)(pplVar16 + 0xe) = uVar7;
                    *(undefined4 *)((longlong)pplVar16 + 0x74) = uVar8;
                    *(undefined4 *)(pplVar16 + 0xf) = uVar9;
                    *(undefined4 *)((longlong)pplVar16 + 0x7c) = uVar10;
                    lVar15 = lVar15 + -1;
                    pplVar12 = pplVar16 + 0x10;
                    puVar14 = puVar18 + 0x10;
                } while (lVar15 != 0);
                uVar4 = *(undefined4 *)((longlong)puVar18 + 0x84);
                uVar5 = *(undefined4 *)(puVar18 + 0x11);
                uVar6 = *(undefined4 *)((longlong)puVar18 + 0x8c);
                *(undefined4 *)(pplVar16 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
                *(undefined4 *)((longlong)pplVar16 + 0x84) = uVar4;
                *(undefined4 *)(pplVar16 + 0x11) = uVar5;
                *(undefined4 *)((longlong)pplVar16 + 0x8c) = uVar6;
            }
            else {
                FUN_1407db590(pplVar12,&local_2e8,400);
            }
            *(undefined4 *)((longlong)param_1 + 0x49c) = 3;
        }
        if (*(int *)((longlong)param_1 + 0x4a4) < 4) {
            *(undefined4 *)((longlong)param_1 + 0x4a4) = 3;
            *(undefined4 *)(param_1 + 0x5d) = (undefined4)local_468;
            *(undefined4 *)((longlong)param_1 + 0x2ec) = local_468._4_4_;
            *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_460;
            *(undefined4 *)((longlong)param_1 + 0x2f4) = local_460._4_4_;
            if (((*param_1 != (longlong *)0x0) && (lVar15 = (*param_1)[0xb], lVar15 != 0)) &&
                ((*(int *)(lVar15 + 8) < 1 && ((lVar15 != 0 && (*(int *)(lVar15 + 8) < 1)))))) {
                param_1[0x5d] = (longlong *)0x0;
                param_1[0x5e] = (longlong *)0x0;
                *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
            }
        }
    }
    if (*(int *)((longlong)param_1 + 0x4ac) < 6) {
        FUN_14001c2b0(param_1 + 0x5f,param_1[0x60],param_1[0x61]);
        *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack1224);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140413520(longlong *param_1)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    longlong *plVar13;
    ulonglong uVar14;
    uint uVar15;
    undefined4 *puVar16;
    undefined4 *puVar17;
    undefined8 *puVar18;
    ulonglong uVar19;
    undefined8 *puVar20;
    short *psVar21;
    ulonglong uVar22;
    undefined auStack504 [32];
    undefined8 local_1d8;
    undefined8 uStack464;
    undefined8 local_1c8;
    undefined8 uStack448;
    undefined8 local_1b8;
    undefined8 uStack432;
    undefined8 local_1a8;
    undefined4 uStack416;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    FUN_140412470(param_1,*(undefined8 *)(*param_1 + 0x40),0);
    lVar11 = *param_1;
    puVar16 = *(undefined4 **)(lVar11 + 0x48);
    if (puVar16 == (undefined4 *)0x0) {
        puVar16 = (undefined4 *)(*(longlong *)(lVar11 + 0x40) + 8);
    }
    if ((*(int *)(param_1 + 0x93) < 3) && (puVar16 != (undefined4 *)0x0)) {
        plVar12 = param_1 + 4;
        if ((((uint)puVar16 | (uint)plVar12) & 0xf) == 0) {
            lVar10 = 2;
            do {
                puVar17 = puVar16;
                plVar13 = plVar12;
                uVar9 = puVar17[1];
                uVar2 = puVar17[2];
                uVar3 = puVar17[3];
                *(undefined4 *)plVar13 = *puVar17;
                *(undefined4 *)((longlong)plVar13 + 4) = uVar9;
                *(undefined4 *)(plVar13 + 1) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0xc) = uVar3;
                uVar9 = puVar17[5];
                uVar2 = puVar17[6];
                uVar3 = puVar17[7];
                *(undefined4 *)(plVar13 + 2) = puVar17[4];
                *(undefined4 *)((longlong)plVar13 + 0x14) = uVar9;
                *(undefined4 *)(plVar13 + 3) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x1c) = uVar3;
                uVar9 = puVar17[9];
                uVar2 = puVar17[10];
                uVar3 = puVar17[0xb];
                *(undefined4 *)(plVar13 + 4) = puVar17[8];
                *(undefined4 *)((longlong)plVar13 + 0x24) = uVar9;
                *(undefined4 *)(plVar13 + 5) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar3;
                uVar9 = puVar17[0xd];
                uVar2 = puVar17[0xe];
                uVar3 = puVar17[0xf];
                *(undefined4 *)(plVar13 + 6) = puVar17[0xc];
                *(undefined4 *)((longlong)plVar13 + 0x34) = uVar9;
                *(undefined4 *)(plVar13 + 7) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar3;
                uVar9 = puVar17[0x11];
                uVar2 = puVar17[0x12];
                uVar3 = puVar17[0x13];
                *(undefined4 *)(plVar13 + 8) = puVar17[0x10];
                *(undefined4 *)((longlong)plVar13 + 0x44) = uVar9;
                *(undefined4 *)(plVar13 + 9) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar3;
                uVar9 = puVar17[0x15];
                uVar2 = puVar17[0x16];
                uVar3 = puVar17[0x17];
                *(undefined4 *)(plVar13 + 10) = puVar17[0x14];
                *(undefined4 *)((longlong)plVar13 + 0x54) = uVar9;
                *(undefined4 *)(plVar13 + 0xb) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x5c) = uVar3;
                uVar9 = puVar17[0x19];
                uVar2 = puVar17[0x1a];
                uVar3 = puVar17[0x1b];
                *(undefined4 *)(plVar13 + 0xc) = puVar17[0x18];
                *(undefined4 *)((longlong)plVar13 + 100) = uVar9;
                *(undefined4 *)(plVar13 + 0xd) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x6c) = uVar3;
                uVar9 = puVar17[0x1d];
                uVar2 = puVar17[0x1e];
                uVar3 = puVar17[0x1f];
                *(undefined4 *)(plVar13 + 0xe) = puVar17[0x1c];
                *(undefined4 *)((longlong)plVar13 + 0x74) = uVar9;
                *(undefined4 *)(plVar13 + 0xf) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0x7c) = uVar3;
                lVar10 = lVar10 + -1;
                plVar12 = plVar13 + 0x10;
                puVar16 = puVar17 + 0x20;
            } while (lVar10 != 0);
            uVar9 = puVar17[0x21];
            uVar2 = puVar17[0x22];
            uVar3 = puVar17[0x23];
            *(undefined4 *)(plVar13 + 0x10) = puVar17[0x20];
            *(undefined4 *)((longlong)plVar13 + 0x84) = uVar9;
            *(undefined4 *)(plVar13 + 0x11) = uVar2;
            *(undefined4 *)((longlong)plVar13 + 0x8c) = uVar3;
            uVar9 = puVar17[0x25];
            uVar2 = puVar17[0x26];
            uVar3 = puVar17[0x27];
            *(undefined4 *)(plVar13 + 0x12) = puVar17[0x24];
            *(undefined4 *)((longlong)plVar13 + 0x94) = uVar9;
            *(undefined4 *)(plVar13 + 0x13) = uVar2;
            *(undefined4 *)((longlong)plVar13 + 0x9c) = uVar3;
            uVar9 = puVar17[0x29];
            uVar2 = puVar17[0x2a];
            uVar3 = puVar17[0x2b];
            *(undefined4 *)(plVar13 + 0x14) = puVar17[0x28];
            *(undefined4 *)((longlong)plVar13 + 0xa4) = uVar9;
            *(undefined4 *)(plVar13 + 0x15) = uVar2;
            *(undefined4 *)((longlong)plVar13 + 0xac) = uVar3;
            plVar13[0x16] = *(longlong *)(puVar17 + 0x2c);
        }
        else {
            FUN_1407db590(plVar12,puVar16,0x138);
        }
        *(undefined4 *)(param_1 + 0x93) = 2;
    }
    FUN_1407e4830(&local_1d8,0,400);
    FUN_1407e4830(&local_1d8,0);
    local_1d8 = 0xc5000000c5;
    uStack464 = 0xc5000000c5;
    local_1c8 = 0xc5000000c5;
    uStack448 = 0xc5000000c5;
    local_1b8 = 0xc5000000c5;
    uStack432 = 0xc5000000c5;
    local_1a8 = 0xc5000000c5;
    uStack416 = 0xc5;
    FUN_14041fba0(lVar11,&local_1d8);
    if (*(int *)((longlong)param_1 + 0x49c) < 3) {
        plVar12 = param_1 + 0x2b;
        if ((((uint)&local_1d8 | (uint)plVar12) & 0xf) == 0) {
            lVar11 = 3;
            puVar20 = &local_1d8;
            do {
                puVar18 = puVar20;
                plVar13 = plVar12;
                uVar9 = *(undefined4 *)((longlong)puVar18 + 4);
                uVar2 = *(undefined4 *)(puVar18 + 1);
                uVar3 = *(undefined4 *)((longlong)puVar18 + 0xc);
                uVar4 = *(undefined4 *)(puVar18 + 2);
                uVar5 = *(undefined4 *)((longlong)puVar18 + 0x14);
                uVar6 = *(undefined4 *)(puVar18 + 3);
                uVar7 = *(undefined4 *)((longlong)puVar18 + 0x1c);
                *(undefined4 *)plVar13 = *(undefined4 *)puVar18;
                *(undefined4 *)((longlong)plVar13 + 4) = uVar9;
                *(undefined4 *)(plVar13 + 1) = uVar2;
                *(undefined4 *)((longlong)plVar13 + 0xc) = uVar3;
                uVar9 = *(undefined4 *)(puVar18 + 4);
                uVar2 = *(undefined4 *)((longlong)puVar18 + 0x24);
                uVar3 = *(undefined4 *)(puVar18 + 5);
                uVar8 = *(undefined4 *)((longlong)puVar18 + 0x2c);
                *(undefined4 *)(plVar13 + 2) = uVar4;
                *(undefined4 *)((longlong)plVar13 + 0x14) = uVar5;
                *(undefined4 *)(plVar13 + 3) = uVar6;
                *(undefined4 *)((longlong)plVar13 + 0x1c) = uVar7;
                uVar4 = *(undefined4 *)(puVar18 + 6);
                uVar5 = *(undefined4 *)((longlong)puVar18 + 0x34);
                uVar6 = *(undefined4 *)(puVar18 + 7);
                uVar7 = *(undefined4 *)((longlong)puVar18 + 0x3c);
                *(undefined4 *)(plVar13 + 4) = uVar9;
                *(undefined4 *)((longlong)plVar13 + 0x24) = uVar2;
                *(undefined4 *)(plVar13 + 5) = uVar3;
                *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar8;
                uVar9 = *(undefined4 *)(puVar18 + 8);
                uVar2 = *(undefined4 *)((longlong)puVar18 + 0x44);
                uVar3 = *(undefined4 *)(puVar18 + 9);
                uVar8 = *(undefined4 *)((longlong)puVar18 + 0x4c);
                *(undefined4 *)(plVar13 + 6) = uVar4;
                *(undefined4 *)((longlong)plVar13 + 0x34) = uVar5;
                *(undefined4 *)(plVar13 + 7) = uVar6;
                *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar7;
                uVar4 = *(undefined4 *)(puVar18 + 10);
                uVar5 = *(undefined4 *)((longlong)puVar18 + 0x54);
                uVar6 = *(undefined4 *)(puVar18 + 0xb);
                uVar7 = *(undefined4 *)((longlong)puVar18 + 0x5c);
                *(undefined4 *)(plVar13 + 8) = uVar9;
                *(undefined4 *)((longlong)plVar13 + 0x44) = uVar2;
                *(undefined4 *)(plVar13 + 9) = uVar3;
                *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar8;
                uVar9 = *(undefined4 *)(puVar18 + 0xc);
                uVar2 = *(undefined4 *)((longlong)puVar18 + 100);
                uVar3 = *(undefined4 *)(puVar18 + 0xd);
                uVar8 = *(undefined4 *)((longlong)puVar18 + 0x6c);
                *(undefined4 *)(plVar13 + 10) = uVar4;
                *(undefined4 *)((longlong)plVar13 + 0x54) = uVar5;
                *(undefined4 *)(plVar13 + 0xb) = uVar6;
                *(undefined4 *)((longlong)plVar13 + 0x5c) = uVar7;
                uVar4 = *(undefined4 *)(puVar18 + 0xe);
                uVar5 = *(undefined4 *)((longlong)puVar18 + 0x74);
                uVar6 = *(undefined4 *)(puVar18 + 0xf);
                uVar7 = *(undefined4 *)((longlong)puVar18 + 0x7c);
                *(undefined4 *)(plVar13 + 0xc) = uVar9;
                *(undefined4 *)((longlong)plVar13 + 100) = uVar2;
                *(undefined4 *)(plVar13 + 0xd) = uVar3;
                *(undefined4 *)((longlong)plVar13 + 0x6c) = uVar8;
                *(undefined4 *)(plVar13 + 0xe) = uVar4;
                *(undefined4 *)((longlong)plVar13 + 0x74) = uVar5;
                *(undefined4 *)(plVar13 + 0xf) = uVar6;
                *(undefined4 *)((longlong)plVar13 + 0x7c) = uVar7;
                lVar11 = lVar11 + -1;
                plVar12 = plVar13 + 0x10;
                puVar20 = puVar18 + 0x10;
            } while (lVar11 != 0);
            uVar9 = *(undefined4 *)((longlong)puVar18 + 0x84);
            uVar2 = *(undefined4 *)(puVar18 + 0x11);
            uVar3 = *(undefined4 *)((longlong)puVar18 + 0x8c);
            *(undefined4 *)(plVar13 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
            *(undefined4 *)((longlong)plVar13 + 0x84) = uVar9;
            *(undefined4 *)(plVar13 + 0x11) = uVar2;
            *(undefined4 *)((longlong)plVar13 + 0x8c) = uVar3;
        }
        else {
            FUN_1407db590(plVar12,&local_1d8);
        }
        *(undefined4 *)((longlong)param_1 + 0x49c) = 2;
    }
    lVar11 = *param_1;
    uVar19 = 0;
    puVar16 = *(undefined4 **)(lVar11 + 0x60);
    if ((*(int *)((longlong)param_1 + 0x4a4) < 3) && (puVar16 != (undefined4 *)0x0)) {
        *(undefined4 *)(param_1 + 0x5d) = *puVar16;
        *(undefined4 *)((longlong)param_1 + 0x2ec) = puVar16[1];
        *(undefined4 *)(param_1 + 0x5e) = puVar16[2];
        uVar9 = puVar16[3];
        *(undefined4 *)((longlong)param_1 + 0x4a4) = 2;
        *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar9;
        if (((lVar11 != 0) &&
             (((lVar11 = *(longlong *)(lVar11 + 0x58), lVar11 != 0 && (*(int *)(lVar11 + 8) < 1)) &&
               (lVar11 != 0)))) && (*(int *)(lVar11 + 8) < 1)) {
            param_1[0x5d] = 0;
            param_1[0x5e] = 0;
            *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
        }
    }
    uVar1 = *(uint *)(param_1 + 0x2a);
    local_40._4_4_ = 0;
    local_48 = 0;
    local_48._0_4_ = 0;
    local_40 = 0;
    local_38._0_4_ = 0;
    local_38 = 0;
    local_30 = 0;
    local_48._4_4_ = (undefined4)local_48;
    local_38._4_4_ = (undefined4)local_38;
    local_30._0_4_ = (undefined4)local_38;
    local_30._4_4_ = (undefined4)local_38;
    local_40._0_4_ = local_40._4_4_;
    if (uVar1 != 0) {
        puVar20 = &local_48;
        uVar14 = uVar19;
        do {
            uVar9 = 0;
            if ((uint)uVar14 < 8) {
                uVar9 = *(undefined4 *)(*param_1 + (0xbc - (longlong)&local_48) + (longlong)puVar20);
            }
            uVar15 = (uint)uVar14 + 1;
            uVar14 = (ulonglong)uVar15;
            *(undefined4 *)puVar20 = uVar9;
            puVar20 = (undefined8 *)((longlong)puVar20 + 4);
        } while (uVar15 < uVar1);
    }
    if (*(int *)(param_1 + 0x95) < 3) {
        param_1[0x8f] = 0;
        param_1[0x90] = 0;
        param_1[0x91] = 0;
        param_1[0x92] = 0;
        *(undefined4 *)(param_1 + 0x8f) = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 0x47c) = local_48._4_4_;
        *(undefined4 *)(param_1 + 0x90) = (undefined4)local_40;
        *(undefined4 *)((longlong)param_1 + 0x484) = local_40._4_4_;
        *(undefined4 *)(param_1 + 0x91) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_1 + 0x48c) = local_38._4_4_;
        *(undefined4 *)(param_1 + 0x92) = (undefined4)local_30;
        *(undefined4 *)((longlong)param_1 + 0x494) = local_30._4_4_;
        *(undefined4 *)(param_1 + 0x95) = 2;
    }
    plVar12 = (longlong *)FUN_14056ad30(*param_1,&local_48);
    if (*(int *)((longlong)param_1 + 0x4ac) < 3) {
        psVar21 = (short *)plVar12[1];
        uVar14 = plVar12[2] - (longlong)psVar21 >> 1;
        if (uVar14 != 0) {
            uVar22 = param_1[0x61] - param_1[0x60] >> 1;
            if ((uVar22 == uVar14) && (uVar22 != 0)) {
                lVar11 = param_1[0x60] - (longlong)psVar21;
                do {
                    if (*(short *)(lVar11 + (longlong)psVar21) != *psVar21) break;
                    uVar19 = uVar19 + 1;
                    psVar21 = psVar21 + 1;
                } while (uVar19 < uVar22);
            }
            if (plVar12 != param_1 + 0x5f) {
                FUN_14001c480(param_1 + 0x5f);
            }
            *(undefined4 *)((longlong)param_1 + 0x4ac) = 2;
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack504);
    return;
}



void FUN_140413990(longlong param_1)

{
    if (*(int *)(param_1 + 0x4a0) < 6) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x4a0) = 0;
    }
    if (*(int *)(param_1 + 0x498) < 6) {
        *(undefined4 *)(param_1 + 0x498) = 0;
    }
    if (*(int *)(param_1 + 0x49c) < 6) {
        *(undefined4 *)(param_1 + 0x49c) = 0;
    }
    if (*(int *)(param_1 + 0x4a4) < 6) {
        *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    if (*(int *)(param_1 + 0x4a8) < 6) {
        *(undefined4 *)(param_1 + 0x4a8) = 0;
    }
    if (*(int *)(param_1 + 0x4ac) < 6) {
        FUN_14001c2b0(param_1 + 0x2f8,*(undefined8 *)(param_1 + 0x300),*(undefined8 *)(param_1 + 0x308))
                ;
        *(undefined4 *)(param_1 + 0x4ac) = 0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140413a20(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined **ppuVar4;
    undefined8 *puVar5;
    undefined4 *puVar6;
    longlong lVar7;
    undefined auStack2760 [32];
    undefined4 local_aa8;
    undefined8 local_a98;
    undefined4 local_a90;
    undefined4 local_a88;
    undefined4 uStack2692;
    undefined4 uStack2688;
    undefined4 uStack2684;
    undefined4 local_a78;
    undefined4 uStack2676;
    undefined4 uStack2672;
    undefined4 uStack2668;
    undefined8 local_a68 [148];
    undefined4 local_5c8;
    undefined4 uStack1476;
    undefined4 uStack1472;
    undefined4 uStack1468;
    undefined4 local_5b8;
    undefined4 uStack1460;
    undefined4 uStack1456;
    undefined4 uStack1452;
    undefined4 local_5a8;
    undefined4 uStack1444;
    undefined4 uStack1440;
    undefined4 uStack1436;
    undefined4 local_598;
    undefined4 uStack1428;
    undefined4 uStack1424;
    undefined4 uStack1420;
    undefined4 local_588;
    undefined4 uStack1412;
    undefined4 uStack1408;
    undefined4 uStack1404;
    undefined4 local_578;
    undefined4 uStack1396;
    undefined4 uStack1392;
    undefined4 uStack1388;
    undefined8 local_568 [148];
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
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
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
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
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack2760;
    lVar7 = 0x25;
    local_a88 = PTR_DAT_140c58bd8._0_4_;
    uStack2692 = PTR_DAT_140c58bd8._4_4_;
    uStack2688 = uRam0000000140c58be0;
    uStack2684 = uRam0000000140c58be4;
    local_a78 = PTR_DAT_140c58be8._0_4_;
    uStack2676 = PTR_DAT_140c58be8._4_4_;
    uStack2672 = uRam0000000140c58bf0;
    uStack2668 = uRam0000000140c58bf4;
    puVar5 = local_568;
    ppuVar4 = &PTR_s_GetSetBonuses_140c58c00;
    do {
        *puVar5 = *ppuVar4;
        puVar5[1] = ppuVar4[1];
        puVar5[2] = ppuVar4[2];
        puVar5[3] = ppuVar4[3];
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 4;
        ppuVar4 = ppuVar4 + 4;
    } while (lVar7 != 0);
    lVar7 = 0x25;
    ppuVar4 = &PTR_s_GetSetBonuses_140c58c00;
    puVar5 = local_a68;
    do {
        *puVar5 = *ppuVar4;
        puVar5[1] = ppuVar4[1];
        puVar5[2] = ppuVar4[2];
        puVar5[3] = ppuVar4[3];
        lVar7 = lVar7 + -1;
        ppuVar4 = ppuVar4 + 4;
        puVar5 = puVar5 + 4;
    } while (lVar7 != 0);
    local_5c8 = PTR_s_isInstance_140c590a0._0_4_;
    uStack1476 = PTR_s_isInstance_140c590a0._4_4_;
    uStack1472 = uRam0000000140c590a8;
    uStack1468 = uRam0000000140c590ac;
    local_5b8 = PTR_s_isData_140c590b0._0_4_;
    uStack1460 = PTR_s_isData_140c590b0._4_4_;
    uStack1456 = uRam0000000140c590b8;
    uStack1452 = uRam0000000140c590bc;
    local_5a8 = PTR_s_isRuneData_140c590c0._0_4_;
    uStack1444 = PTR_s_isRuneData_140c590c0._4_4_;
    uStack1440 = uRam0000000140c590c8;
    uStack1436 = uRam0000000140c590cc;
    local_598 = PTR_s_isModdableData_140c590d0._0_4_;
    uStack1428 = PTR_s_isModdableData_140c590d0._4_4_;
    uStack1424 = uRam0000000140c590d8;
    uStack1420 = uRam0000000140c590dc;
    local_588 = PTR_s_GetRuneSlots_140c590e0._0_4_;
    uStack1412 = PTR_s_GetRuneSlots_140c590e0._4_4_;
    uStack1408 = uRam0000000140c590e8;
    uStack1404 = uRam0000000140c590ec;
    local_578 = _DAT_140c590f0;
    uStack1396 = uRam0000000140c590f4;
    uStack1392 = uRam0000000140c590f8;
    uStack1388 = uRam0000000140c590fc;
    local_c8 = 0x40af8d48;
    uStack196 = 1;
    uStack192 = 0x404175f0;
    uStack188 = 1;
    local_b8 = 0x409e8b44;
    uStack180 = 1;
    uStack176 = 0x40417470;
    uStack172 = 1;
    local_a8 = 0x40af8d38;
    uStack164 = 1;
    uStack160 = 0x40417570;
    uStack156 = 1;
    local_98 = 0x40af8d28;
    uStack148 = 1;
    uStack144 = 0x404174f0;
    uStack140 = 1;
    local_88 = 0x40af8c98;
    uStack132 = 1;
    uStack128 = 0x40416000;
    uStack124 = 1;
    local_78 = 0x40af8c80;
    uStack116 = 1;
    uStack112 = 0x40416080;
    uStack108 = 1;
    local_68 = 0x40af8c70;
    uStack100 = 1;
    uStack96 = 0x404165e0;
    uStack92 = 1;
    local_58 = 0x40af8c60;
    uStack84 = 1;
    uStack80 = 0x404190f0;
    uStack76 = 1;
    local_48 = 0x40af8ce0;
    uStack68 = 1;
    uStack64 = 0x40417300;
    uStack60 = 1;
    local_38 = 0;
    uStack52 = 0;
    uStack48 = 0;
    uStack44 = 0;
    FUN_1400569b0(param_1,"Game.ItemData");
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = puVar5[-2];
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar5 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_a98 = FUN_140062650(param_1,"__index",7);
    local_a90 = 4;
    FUN_14005ea50(param_1,lVar7 + -0x20,&local_a98,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = &local_a88;
    lVar7 = CONCAT44(uStack2692,local_a88);
    while (lVar7 != 0) {
        uVar3 = *(undefined8 *)(puVar6 + 2);
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar2 = FUN_140060ab0(param_1,0);
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        plVar1 = *(longlong **)(param_1 + 0x10);
        *plVar1 = lVar2;
        *(undefined4 *)(plVar1 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400580e0(param_1,0xfffffffe);
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(lVar7 + lVar2) != '\0');
        local_a98 = FUN_140062650(param_1,lVar7);
        local_a90 = 4;
        FUN_14005ea50(param_1,uVar3,&local_a98,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        plVar1 = (longlong *)(puVar6 + 4);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        puVar6 = puVar6 + 4;
        lVar7 = *plVar1;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    FUN_140057020(param_1,&DAT_140af2544,local_568);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"CodeEnumItemType",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneChest",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x3ff0000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneLegs",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4000000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneHead",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4008000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneShoulder",0x13);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4010000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneFeet",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4014000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneHands",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4018000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorArcaneBuckle",0x11);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x401c000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexChest",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4020000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexLegs",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4022000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexHead",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4024000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexShoulder",0x13);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4026000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexFeet",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4028000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexHands",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x402a000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorReflexBuckle",0x11);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x402c000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalChest",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x402e000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalLegs",0xe);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4030000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalHead",0xe);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4031000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalShoulder",0x12);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4032000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalFeet",0xe);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4033000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalHands",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4034000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorFocalBuckle",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4035000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleChest",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4036000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleLegs",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4037000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleHead",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4038000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleShoulder",0x13);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4039000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleFeet",0xf);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x403a000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleHands",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x403b000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorBattleBuckle",0x11);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x403c000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorJewelryRing",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x403d000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorJewelryFace",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x403e000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorJewelryNeck",0x10);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x403f000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_140062650(param_1,"ArmorJewelryTrinket",0x13);
    *(undefined4 *)(puVar5 + 1) = 4;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4040000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumItemQuality",0x13);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumRuneType",0x10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumLootItemType",0x14);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    local_aa8 = 9;
    FUN_1400f0490(param_1);
    local_aa8 = 0x2f;
    FUN_1400f0490(param_1);
    local_aa8 = 0x11;
    FUN_1400f0490(param_1);
    local_aa8 = 0x18;
    FUN_1400f0490(param_1);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack2760);
    return;
}



undefined8 FUN_140415bb0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    plVar1 = (longlong *)FUN_140059170(param_1,8);
    lVar2 = FUN_14018b280(0x4c0,8);
    if (lVar2 != 0) {
        lVar2 = FUN_14040fae0(lVar2);
    }
    *plVar1 = lVar2;
    FUN_140410300(lVar2,param_2,1);
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.ItemData",0xd);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140415c70(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    plVar1 = (longlong *)FUN_140059170(param_1,8);
    lVar2 = FUN_14018b280(0x4c0,8);
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = FUN_14040fae0(lVar2);
    }
    *plVar1 = lVar2;
    if (*(int *)(lVar2 + 0x4a0) < 7) {
        *(longlong *)(lVar2 + 8) = param_2;
        *(undefined4 *)(lVar2 + 0x4a0) = 6;
    }
    FUN_140412ad0();
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.ItemData",0xd);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140415d60(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong **pplVar4;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pplVar2 = (longlong **)FUN_140059170(param_1,8);
    lVar3 = FUN_14018b280(0x4c0,8);
    if (lVar3 == 0) {
        pplVar4 = (longlong **)0x0;
    }
    else {
        pplVar4 = (longlong **)FUN_14040fae0(lVar3);
    }
    *pplVar2 = (longlong *)pplVar4;
    plVar1 = *pplVar4;
    if (param_2 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
            *pplVar4 = (longlong *)0x0;
        }
        *pplVar4 = param_2;
        (**(code **)*param_2)(param_2);
    }
    *(undefined8 *)((longlong)pplVar4 + 0x4b4) = 0;
    FUN_140412ad0(pplVar4);
    lVar3 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.ItemData",0xd);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar3 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_140415e70(longlong param_1,int *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_18;
    undefined4 local_10;

    if ((*param_2 != 0) && (param_2[1] != 0)) {
        puVar1 = (undefined8 *)FUN_140059170(param_1,8);
        lVar2 = FUN_14018b280(0x4c0,0);
        if (lVar2 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = FUN_14040fae0(lVar2);
        }
        *puVar1 = uVar3;
        FUN_1404124e0(uVar3,param_2,1);
        lVar2 = *(longlong *)(param_1 + 0x20);
        local_18 = FUN_140062650(param_1,"Game.ItemData",0xd);
        local_10 = 4;
        FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140415f60(longlong param_1)

{
    undefined8 *puVar1;
    longlong **pplVar2;
    longlong **pplVar3;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
         (*(int *)(puVar1 + 1) != 0)) &&
        (pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.ItemData"), pplVar3 != (longlong **)0x0))
    {
        pplVar2 = (longlong **)*pplVar3;
        if (pplVar2 != (longlong **)0x0) {
            if (*pplVar2 != (longlong *)0x0) {
                (**(code **)(**pplVar2 + 8))();
                *pplVar2 = (longlong *)0x0;
            }
            if (pplVar2[0x60] != (longlong *)0x0) {
                FUN_14018b900(pplVar2[0x60],0);
            }
            FUN_14018b900(pplVar2,0);
        }
        *pplVar3 = (longlong *)0x0;
    }
    return 0;
}



void FUN_140416000(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;
    double *pdVar4;

    pdVar4 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar4 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar4 + 1) == 3) {
        LAB_140416057:
        uVar3 = (ulonglong)pdVar4 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4;
    }
    else {
        if (*(int *)(pdVar4 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
                goto LAB_140416057;
            }
        }
        uVar3 = 0;
    }
    uVar2 = FUN_1400b5df0(DAT_140c658f0,uVar3,0);
    FUN_140415c70(param_1,uVar2);
    return;
}



void FUN_140416080(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    uint local_res10;
    uint uStackX20;
    double local_18;
    undefined4 local_10;

    pdVar3 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar3 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar3 + 1) == 3) {
        LAB_1404160d7:
        uStackX20 = (uint)*pdVar3;
    }
    else {
        if (*(int *)(pdVar3 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar3 + 0x20,&local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                goto LAB_1404160d7;
            }
        }
        uStackX20 = 0;
    }
    local_res10 = (uint)((ulonglong)(longlong)(int)uStackX20 >> 8) & 0xff;
    uStackX20 = uStackX20 & 0xff;
    lVar2 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
    if (lVar2 != 0) {
        FUN_140415d60(param_1,lVar2);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140416130(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
    ulonglong uVar1;
    short sVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong *plVar7;
    short *psVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 uVar11;
    longlong *plVar12;
    longlong *plVar13;
    undefined local_218 [8];
    longlong local_210;
    undefined2 *local_208;
    longlong local_200;
    undefined **local_1f8;
    undefined local_1f0 [8];
    undefined2 *local_1e8;
    undefined2 *local_1e0;
    undefined local_138 [16];
    undefined2 *local_128;
    undefined **local_118;
    undefined local_110 [184];
    undefined local_58 [16];
    undefined2 *local_48;

    lVar4 = FUN_140248ac0(param_2);
    if (lVar4 == 0) {
        return 0x80004005;
    }
    FUN_1400b6f30(&local_118);
    plVar13 = (longlong *)0x0;
    local_48 = (undefined2 *)0x0;
    local_58 = ZEXT816(0);
    local_118 = &PTR_FUN_140b69230;
    puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
    local_48 = puVar5 + 8;
    local_58 = CONCAT88(puVar5,puVar5);
    plVar7 = plVar13;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    do {
        psVar8 = &DAT_140af7de6 + (longlong)plVar7;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
    } while (*psVar8 != 0);
    FUN_14001c480(local_110,&DAT_140af7de4,&DAT_140af7de4 + (longlong)plVar7 * 2);
    lVar6 = FUN_14018b280(0x58);
    plVar7 = plVar13;
    if (lVar6 != 0) {
        plVar7 = (longlong *)FUN_1400b6390(lVar6);
    }
    psVar8 = (short *)FUN_14034bdd0();
    local_210 = 0;
    local_208 = (undefined2 *)0x0;
    local_200 = 0;
    sVar2 = *psVar8;
    plVar12 = plVar13;
    while (sVar2 != 0) {
        plVar12 = (longlong *)((longlong)plVar12 + 1);
        sVar2 = psVar8[(longlong)plVar12];
    }
    lVar6 = (longlong)plVar12 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar9 = uVar1 * 2;
        local_208 = (undefined2 *)FUN_14018b280(lVar9,0);
        local_200 = (longlong)local_208 + lVar9;
    }
    lVar9 = (longlong)local_208;
    lVar6 = lVar6 * 2;
    local_210 = (longlong)local_208;
    FUN_1407db590(local_208,psVar8,lVar6);
    local_208 = (undefined2 *)(lVar9 + lVar6);
    if (local_208 != (undefined2 *)0x0) {
        *local_208 = 0;
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,local_218);
    if (local_210 != 0) {
        FUN_14018b900(local_210,0);
    }
    (**(code **)(*plVar7 + 0x68))(plVar7,1);
    FUN_1400b7480(&local_118,plVar7);
    FUN_1400b6f30(&local_1f8);
    local_1f8 = &PTR_FUN_140b69230;
    local_128 = (undefined2 *)0x0;
    local_138 = ZEXT816(0);
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    local_128 = puVar5 + 8;
    local_138 = CONCAT88(puVar5,puVar5);
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    psVar8 = (short *)FUN_14034bdd0(local_128,*(undefined4 *)(lVar4 + 0x18));
    if (psVar8 == (short *)0x0) {
        if (local_1e8 != local_1e0) {
            *local_1e8 = 0;
            local_1e0 = local_1e8;
        }
    }
    else {
        sVar2 = *psVar8;
        plVar7 = plVar13;
        while (sVar2 != 0) {
            plVar7 = (longlong *)((longlong)plVar7 + 1);
            sVar2 = psVar8[(longlong)plVar7];
        }
        FUN_14001c480(local_1f0,psVar8,psVar8 + (longlong)plVar7);
    }
    lVar9 = FUN_1400b7660(&local_118);
    lVar6 = *(longlong *)(param_4 + 0x10);
    uVar11 = *(undefined8 *)(lVar9 + 8);
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_4 + 8));
    puVar3 = *(undefined8 **)(lVar6 + 0x10);
    *puVar3 = *puVar10;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_4 + 0x10),puVar3,L"strName",uVar11);
    plVar7 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
    *plVar7 = *plVar7 + -0x10;
    lVar9 = FUN_1400b7660(&local_1f8);
    lVar6 = *(longlong *)(param_4 + 0x10);
    uVar11 = *(undefined8 *)(lVar9 + 8);
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_4 + 8));
    puVar3 = *(undefined8 **)(lVar6 + 0x10);
    *puVar3 = *puVar10;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_4 + 0x10),puVar3,L"strFlavor",uVar11);
    plVar7 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
    *plVar7 = *plVar7 + -0x10;
    lVar6 = *(longlong *)(param_4 + 0x10);
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_4 + 8));
    puVar3 = *(undefined8 **)(lVar6 + 0x10);
    *puVar3 = *puVar10;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_4 + 0x10),puVar3,L"nCount",param_3);
    plVar7 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
    *plVar7 = *plVar7 + -0x10;
    uVar1 = *(ulonglong *)(lVar4 + 8);
    if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
        plVar13 = (longlong *)(DAT_140c3fe68 + uVar1);
    }
    lVar6 = *(longlong *)(param_4 + 0x10);
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_4 + 8));
    puVar3 = *(undefined8 **)(lVar6 + 0x10);
    *puVar3 = *puVar10;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_4 + 0x10),puVar3,L"strIcon",plVar13);
    plVar7 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
    *plVar7 = *plVar7 + -0x10;
    lVar4 = FUN_14020a3a0(*(undefined4 *)(lVar4 + 0x10));
    if (lVar4 != 0) {
        uVar11 = FUN_14034bdd0();
        lVar4 = *(longlong *)(param_4 + 0x10);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                              *(undefined4 *)(param_4 + 8));
        puVar3 = *(undefined8 **)(lVar4 + 0x10);
        *puVar3 = *puVar10;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_4 + 0x10),puVar3,L"eType",uVar11);
        plVar7 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        *plVar7 = *plVar7 + -0x10;
    }
    if (local_138._0_8_ != 0) {
        FUN_14018b900(local_138._0_8_,0);
    }
    FUN_1400b7390(&local_1f8);
    if (local_58._0_8_ != 0) {
        FUN_14018b900(local_58._0_8_,0);
    }
    FUN_1400b7390(&local_118);
    return 0;
}



undefined8 FUN_1404174f0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    uint *puVar3;
    longlong *plVar4;
    longlong lVar5;

    plVar4 = (longlong *)FUN_140417660(param_1,1);
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar2 = *plVar4;
    if ((lVar2 == 0) || (lVar5 = lVar2 + 0x20, *(int *)(lVar2 + 0x498) == 0)) {
        lVar5 = 0;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(lVar5 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140417570(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    uint *puVar3;
    longlong *plVar4;
    longlong lVar5;

    plVar4 = (longlong *)FUN_140417660(param_1,1);
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar2 = *plVar4;
    if ((lVar2 == 0) || (lVar5 = lVar2 + 0x2e8, *(int *)(lVar2 + 0x4a4) == 0)) {
        lVar5 = 0;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(lVar5 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404175f0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong **pplVar3;
    longlong lVar4;

    pplVar3 = (longlong **)FUN_140417660(param_1,1);
    lVar4 = 0;
    if (pplVar3 != (longlong **)0x0) {
        if (*pplVar3 != (longlong *)0x0) {
            lVar4 = **pplVar3;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(lVar4 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



longlong FUN_140417660(longlong param_1,undefined4 param_2)

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
            local_18 = FUN_140062650(param_1,"Game.ItemData",0xd);
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



undefined8 FUN_1404177b0(longlong param_1)

{
    undefined4 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    longlong **pplVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong **pplVar9;
    uint *puVar10;
    longlong **pplVar11;

    puVar6 = *(undefined8 **)(param_1 + 0x18);
    pplVar11 = (longlong **)0x0;
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar6) || (puVar6 == &DAT_140a12138)) ||
        (pplVar5 = pplVar11, *(int *)(puVar6 + 1) != 0)) {
        pplVar5 = (longlong **)FUN_140056ab0(param_1,1,"Game.ItemData");
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar6) || (puVar6 == &DAT_140a12138)) ||
        (pplVar7 = pplVar11, *(int *)(*(longlong *)(param_1 + 0x18) + 0x18) != 0)) {
        pplVar7 = (longlong **)FUN_140056ab0(param_1,2,"Game.ItemData");
    }
    if (pplVar5 == (longlong **)0x0) {
        if (pplVar7 == (longlong **)0x0) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 1;
            puVar1[2] = 1;
            goto LAB_140417b2b;
        }
        LAB_140417852:
        puVar10 = *(uint **)(param_1 + 0x10);
        *puVar10 = 0;
    }
    else {
        if (pplVar7 == (longlong **)0x0) goto LAB_140417852;
        pplVar5 = (longlong **)*pplVar5;
        if ((pplVar5 == (longlong **)0x0) ||
            (pplVar9 = (longlong **)*pplVar5, pplVar9 == (longlong **)0x0)) {
            plVar2 = *pplVar7;
            if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
                if ((((pplVar5 == (longlong **)0x0) || (*(int *)(pplVar5 + 0x97) == 0)) ||
                     (*(int *)((longlong)pplVar5 + 0x474) == 0)) ||
                    (pplVar5 == (longlong **)0xfffffffffffffb90)) {
                    if (((plVar2 == (longlong *)0x0) || (*(int *)(plVar2 + 0x97) == 0)) ||
                        ((*(int *)((longlong)plVar2 + 0x474) == 0 || (plVar2 == (longlong *)0xfffffffffffffb90)
                        ))) {
                        if (((pplVar5 != (longlong **)0x0) && (*(int *)(pplVar5 + 0x94) != 0)) &&
                            (pplVar5[1] != (longlong *)0x0)) {
                            if (*(int *)(pplVar5 + 0x94) != 0) {
                                pplVar11 = (longlong **)pplVar5[1];
                            }
                            if ((plVar2 == (longlong *)0x0) || (*(int *)(plVar2 + 0x94) == 0)) goto LAB_14041788a;
                            puVar10 = *(uint **)(param_1 + 0x10);
                            *puVar10 = (uint)(pplVar11 == (longlong **)plVar2[1]);
                            goto LAB_140417b24;
                        }
                        if (((plVar2 == (longlong *)0x0) || (*(int *)(plVar2 + 0x94) == 0)) || (plVar2[1] == 0))
                        {
                            if (((pplVar5 == (longlong **)0x0) || (*(int *)((longlong)pplVar5 + 0x4a4) == 0)) ||
                                (pplVar5 == (longlong **)0xfffffffffffffd18)) {
                                if (((plVar2 == (longlong *)0x0) || (*(int *)((longlong)plVar2 + 0x4a4) == 0)) ||
                                    (plVar2 == (longlong *)0xfffffffffffffd18)) {
                                    if (((pplVar5 != (longlong **)0x0) && (*(int *)(pplVar5 + 0x93) != 0)) &&
                                        (pplVar5 != (longlong **)0xffffffffffffffe0)) {
                                        pplVar7 = pplVar11;
                                        if ((plVar2 != (longlong *)0x0) && (*(int *)(plVar2 + 0x93) != 0)) {
                                            pplVar7 = (longlong **)(plVar2 + 4);
                                        }
                                        pplVar9 = pplVar5 + 4;
                                        if (*(int *)(pplVar5 + 0x93) == 0) {
                                            pplVar9 = pplVar11;
                                        }
                                        puVar10 = *(uint **)(param_1 + 0x10);
                                        iVar4 = FUN_1407e6af0(pplVar9,pplVar7,0x138);
                                        puVar10[2] = 1;
                                        *puVar10 = (uint)(iVar4 == 0);
                                        goto LAB_140417b2b;
                                    }
                                    if (((plVar2 == (longlong *)0x0) || (*(int *)(plVar2 + 0x93) == 0)) ||
                                        (plVar2 == (longlong *)&DAT_ffffffffffffffe0)) {
                                        puVar10 = *(uint **)(param_1 + 0x10);
                                        *puVar10 = 1;
                                        goto LAB_140417b24;
                                    }
                                }
                            }
                            else if (((plVar2 != (longlong *)0x0) && (*(int *)((longlong)plVar2 + 0x4a4) != 0)) &&
                                     (plVar2 != (longlong *)0xfffffffffffffd18)) {
                                pplVar7 = pplVar11;
                                if (*(int *)((longlong)plVar2 + 0x4a4) != 0) {
                                    pplVar7 = (longlong **)(plVar2 + 0x5d);
                                }
                                if (*(int *)((longlong)pplVar5 + 0x4a4) != 0) {
                                    pplVar11 = pplVar5 + 0x5d;
                                }
                                puVar10 = *(uint **)(param_1 + 0x10);
                                lVar8 = (longlong)*pplVar11 - (longlong)*pplVar7;
                                if (lVar8 == 0) {
                                    lVar8 = (longlong)pplVar11[1] - (longlong)pplVar7[1];
                                }
                                puVar10[2] = 1;
                                *puVar10 = (uint)(lVar8 == 0);
                                goto LAB_140417b2b;
                            }
                        }
                    }
                }
                else if (((plVar2 != (longlong *)0x0) && (*(int *)(plVar2 + 0x97) != 0)) &&
                         ((*(int *)((longlong)plVar2 + 0x474) != 0 &&
                           (plVar2 != (longlong *)0xfffffffffffffb90)))) {
                    if ((*(int *)(plVar2 + 0x97) == 0) ||
                        (pplVar7 = (longlong **)(plVar2 + 0x8e), *(int *)((longlong)plVar2 + 0x474) == 0)) {
                        pplVar7 = pplVar11;
                    }
                    if ((*(int *)(pplVar5 + 0x97) == 0) ||
                        (pplVar9 = pplVar5 + 0x8e, *(int *)((longlong)pplVar5 + 0x474) == 0)) {
                        pplVar9 = pplVar11;
                    }
                    plVar2 = *pplVar9;
                    puVar10 = *(uint **)(param_1 + 0x10);
                    plVar3 = *pplVar7;
                    puVar10[2] = 1;
                    *puVar10 = (uint)(plVar2 == plVar3);
                    goto LAB_140417b2b;
                }
            }
            goto LAB_140417852;
        }
        pplVar11 = pplVar9;
        if ((longlong **)*pplVar7 == (longlong **)0x0) {
            LAB_14041788a:
            puVar10 = *(uint **)(param_1 + 0x10);
            *puVar10 = (uint)(pplVar11 == (longlong **)0x0);
        }
        else {
            puVar10 = *(uint **)(param_1 + 0x10);
            *puVar10 = (uint)(pplVar9 == (longlong **)**pplVar7);
        }
    }
    LAB_140417b24:
    puVar10[2] = 1;
    LAB_140417b2b:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140417b50(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;

    plVar2 = (longlong *)FUN_140417660();
    if ((((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) &&
         (*(int *)(lVar1 + 0x4a0) != 0)) && (*(longlong *)(lVar1 + 8) != 0)) {
        if (*(int *)(lVar1 + 0x4a0) != 0) {
            return (ulonglong)**(uint **)(lVar1 + 8);
        }
        return (ulonglong)_DAT_00000000;
    }
    puVar3 = (undefined8 *)FUN_1400580e0(param_1,param_2);
    if ((puVar3 != &DAT_140a12138) && (0 < *(int *)(puVar3 + 1))) {
        uVar4 = FUN_140056d60(param_1,param_2);
        return uVar4;
    }
    return 0;
}



undefined8 FUN_140417bf0(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined8 uVar5;

    plVar3 = (longlong *)FUN_140417660();
    if ((((plVar3 == (longlong *)0x0) || (lVar1 = *plVar3, lVar1 == 0)) ||
         (*(int *)(lVar1 + 0x4a0) == 0)) || (*(longlong *)(lVar1 + 8) == 0)) {
        puVar4 = (undefined8 *)FUN_1400580e0(param_1,param_2);
        if ((puVar4 != &DAT_140a12138) && (0 < *(int *)(puVar4 + 1))) {
            iVar2 = FUN_140056d60(param_1,param_2);
            if (iVar2 != 0) {
                uVar5 = FUN_1400b5df0(DAT_140c658f0,iVar2,0);
                return uVar5;
            }
        }
    }
    else if (*(int *)(lVar1 + 0x4a0) != 0) {
        return *(undefined8 *)(lVar1 + 8);
    }
    return 0;
}



longlong FUN_140417c90(undefined8 param_1,undefined4 param_2)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = (longlong *)FUN_140417660();
    if ((((plVar1 == (longlong *)0x0) || (lVar2 = *plVar1, lVar2 == 0)) ||
         (*(int *)(lVar2 + 0x498) == 0)) || (lVar2 == -0x20)) {
        lVar2 = FUN_140417bf0(param_1,param_2);
        if (lVar2 != 0) {
            return lVar2 + 8;
        }
    }
    else if (*(int *)(lVar2 + 0x498) != 0) {
        return lVar2 + 0x20;
    }
    return 0;
}



longlong FUN_140417d10(undefined8 param_1,undefined4 param_2)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = (longlong *)FUN_140417660();
    if ((((plVar1 == (longlong *)0x0) || (lVar2 = *plVar1, lVar2 == 0)) ||
         (*(int *)(lVar2 + 0x49c) == 0)) || (lVar2 == -0x158)) {
        lVar2 = FUN_140417bf0(param_1,param_2);
        if (lVar2 != 0) {
            return lVar2 + 0x9c;
        }
    }
    else if (*(int *)(lVar2 + 0x49c) != 0) {
        return lVar2 + 0x158;
    }
    return 0;
}



longlong FUN_140417d90(void)

{
    longlong lVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140417660();
    if ((((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) &&
         (*(int *)(lVar1 + 0x49c) != 0)) && ((lVar1 != -0x158 && (*(int *)(lVar1 + 0x49c) != 0)))) {
        return lVar1 + 0x158;
    }
    return 0;
}



undefined8 FUN_140417ed0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 local_res10;
    uint local_res14;

    lVar1 = FUN_140417bf0();
    if (((lVar1 == 0) || ((*(uint *)(lVar1 + 0x154) & 0x400) == 0)) || (*(uint *)(lVar1 + 0x180) == 0)
            ) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_res14 = 0;
    do {
        if ((*(uint *)(lVar1 + 0x180) >> (local_res14 & 0x1f) & 1) != 0) goto LAB_140417f11;
        local_res14 = local_res14 + 1;
    } while (local_res14 < 0x1f);
    local_res14 = 0x1f;
    LAB_140417f11:
    local_res10 = 0;
    uVar2 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
    uVar2 = FUN_140415d60(param_1,uVar2);
    return uVar2;
}



undefined8 FUN_140417fc0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;

    lVar4 = FUN_140417bf0(param_1,1);
    uVar5 = FUN_140417c90(param_1);
    if (lVar4 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        if (((*(uint *)(lVar4 + 0x154) & 0x400) == 0) || (*(int *)(lVar4 + 0x180) == 0)) {
            iVar3 = 0x1f;
        }
        else {
            iVar3 = FUN_1403b4710(DAT_140c65898,lVar4,uVar5);
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)(iVar3 == 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140418060(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;

    puVar3 = (undefined4 *)FUN_140417bf0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1403ac840(DAT_140c65898 + 0xa0,2,*puVar3);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404180e0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;

    puVar3 = (undefined4 *)FUN_140417bf0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1403ac840(DAT_140c65898 + 0xa0,1,*puVar3);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140418160(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 *puVar3;

    puVar3 = (undefined4 *)FUN_140417bf0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1403ac840(DAT_140c65898 + 0xa0,4,*puVar3);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404181e0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *(uint *)(lVar3 + 0x14c);
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar1 >> 0xd & 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140418240(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;

    lVar3 = FUN_140417bf0(param_1,1);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x1d8) != 0)) {
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
        FUN_140452ad0();
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar5;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1,puVar1,uVar2);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140418350(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong local_res10;

    puVar4 = (undefined4 *)FUN_140417bf0(param_1,1);
    lVar5 = FUN_140417c90(param_1,1);
    if ((puVar4 == (undefined4 *)0x0) || (lVar5 == 0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        local_res10 = 0;
        iVar3 = FUN_1404aa7d0(&local_res10,puVar4[0x51],*puVar4,*(undefined4 *)(lVar5 + 4));
        if (((iVar3 == 0) || (local_res10 == 0)) || (bVar2 = 1, (*(byte *)(local_res10 + 8) & 4) == 0))
        {
            bVar2 = 0;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar2;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140418480(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0x144);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404184e0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_14020a3a0(*(undefined4 *)(lVar1 + 0x144));
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_14034bdd0();
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



undefined4 FUN_1404185a0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0x148);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140418600(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_140209b20(*(undefined4 *)(lVar1 + 0x148));
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_14034bdd0();
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



undefined4 FUN_1404186c0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0x140);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140418720(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_140209f60(*(undefined4 *)(lVar1 + 0x140));
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_14034bdd0();
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



undefined8 FUN_140418b40(longlong param_1)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined local_28 [8];
    longlong local_20;

    lVar5 = FUN_140417bf0(param_1,1);
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = 0x1f;
    uVar3 = uVar4;
    if (((*(uint *)(lVar5 + 0x154) & 0x400) != 0) && (*(uint *)(lVar5 + 0x180) != 0)) {
        uVar2 = 0;
        do {
            uVar3 = uVar2;
            if ((*(uint *)(lVar5 + 0x180) >> (uVar2 & 0x1f) & 1) != 0) break;
            uVar2 = uVar2 + 1;
            uVar3 = uVar4;
        } while (uVar2 < 0x1f);
    }
    uVar7 = (ulonglong)(int)uVar3;
    if (uVar7 < 0x1f) {
        uVar6 = FUN_14034bdd0(uVar7,*(undefined4 *)(&DAT_140af8b80 + uVar7 * 4));
        lVar5 = FUN_14018f0e0(local_28,uVar6);
        if (*(longlong *)(lVar5 + 8) != 0) {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar8) != '\0');
            LAB_140418bee:
            FUN_140058710(param_1);
            goto LAB_140418bf6;
        }
    }
    else {
        uVar7 = FUN_14020e7a0(*(undefined4 *)(lVar5 + 0x17c));
        uVar3 = 0x1f;
        if (uVar7 != 0) {
            puVar1 = (uint *)(uVar7 + 0x10);
            uVar7 = (ulonglong)*puVar1;
            uVar4 = 0;
            do {
                uVar3 = uVar4;
                if ((*puVar1 >> (uVar4 & 0x1f) & 1) != 0) break;
                uVar4 = uVar4 + 1;
                uVar3 = 0x1f;
            } while (uVar4 < 0x1f);
        }
        if (0x1e < (ulonglong)(longlong)(int)uVar3) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        uVar6 = FUN_14034bdd0(uVar7,*(undefined4 *)(&DAT_140af8b80 + (longlong)(int)uVar3 * 4));
        lVar5 = FUN_14018f0e0(local_28,uVar6);
        if (*(longlong *)(lVar5 + 8) != 0) {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar8) != '\0');
            goto LAB_140418bee;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    LAB_140418bf6:
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_140418cb0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint *puVar4;
    undefined4 *puVar5;
    uint uVar6;
    longlong **pplVar7;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        pplVar7 = (longlong **)FUN_140056ab0(param_1,1,"Game.ItemData");
        if (((pplVar7 != (longlong **)0x0) && (*pplVar7 != (longlong *)0x0)) &&
            (lVar2 = **pplVar7, lVar2 != 0)) {
            lVar3 = *(longlong *)(lVar2 + 0x40);
            if ((((*(byte *)(lVar3 + 0x150) & 8) == 0) && ((*(byte *)(lVar3 + 0x14c) & 0xc0) == 0)) &&
                ((*(int *)(lVar3 + 0x1a8) == 0 && ((*(uint *)(lVar3 + 0x154) & 0x80) != 0)))) {
                uVar6 = *(uint *)(lVar2 + 0x80) & 1;
            }
            else {
                uVar6 = 1;
            }
            puVar4 = *(uint **)(param_1 + 0x10);
            puVar4[2] = 1;
            *puVar4 = (uint)(uVar6 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    *puVar5 = 0;
    puVar5[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404190f0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
         (*(int *)(puVar1 + 1) < 1)) || (iVar2 = FUN_140056d60(param_1,1), iVar2 < 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = FUN_1402479c0(iVar2);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = FUN_14034bdd0();
    lVar3 = FUN_14018f0e0(local_28,uVar4);
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar5) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_1404191e0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    plVar1 = (longlong *)FUN_140417660(param_1,1);
    if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        FUN_14040fe30(*plVar1,local_48);
        lVar2 = FUN_14018f0e0(local_28,local_40);
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
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_1404192a0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    int *piVar4;
    longlong lVar5;

    piVar4 = (int *)FUN_140417c90(param_1,1);
    if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_140417bf0(param_1,1);
    if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x158);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0x3ff0000000000000;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419350(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140417c90(param_1,1);
    if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 8);
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



undefined4 FUN_1404193c0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140417c90(param_1,1);
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140419420(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140417c90(param_1,1);
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 4);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419900(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_1401ff120(*(undefined4 *)(lVar1 + 0x194));
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_14034bdd0();
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



undefined8 FUN_1404199c0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140417bf0();
    iVar3 = 0;
    if (lVar2 != 0) {
        if (((*(byte *)(lVar2 + 0x150) & 1) != 0) &&
            (iVar3 = 1, (*(uint *)(lVar2 + 0x154) & 0x100) == 0)) {
            iVar3 = *(int *)(lVar2 + 0x1a0);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar3 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140419a40(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140417bf0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0x1cc);
    pdVar2 = *(double **)(param_1 + 0x10);
    if (iVar1 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140419ac0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140417bf0(param_1,1);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_1405a8a40();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_140663030(param_1,lVar1);
    return 1;
}



undefined8 FUN_140419c20(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    undefined8 uVar4;

    iVar3 = FUN_140417b50(param_1,1);
    if (iVar3 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = FUN_1400b5df0(DAT_140c658f0,iVar3);
    iVar3 = FUN_1403d67d0(DAT_140c65898,uVar4);
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 == 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}