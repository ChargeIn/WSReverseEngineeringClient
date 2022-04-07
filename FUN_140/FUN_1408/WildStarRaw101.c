//
// Created by flop on 04.04.22.
//
#include "../../include.h"
#include "../../include.h"

void FUN_140872d40(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140838cc0(DAT_140c61bb0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                (*(longlong **)(param_1 + 0x20),&PTR_PTR_FUN_140c10f70);
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar2 = DAT_140c10f28;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_140881720(uVar2,puVar1);
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    return;
}



void FUN_140872e00(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    if ((*(char *)(param_1 + 0x2d) != '\0') ||
        ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x17f) & 1) != 0)) {
        if (*(char *)(param_1 + 0x2e) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
        }
        *(undefined *)(param_1 + 0x2e) = 1;
        return;
    }
    *(undefined *)(param_1 + 0x2e) = 0;
    if (*(int *)(param_2 + 7) == 0x11) {
        *(undefined *)(param_1 + 0x2c) = 1;
    }
    if (*param_2 == 0) {
        uVar3 = 0;
        for (uVar2 = *(uint *)(param_2 + 1); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
            uVar3 = (ulonglong)((int)uVar3 + 1);
        }
        lVar1 = FUN_140881960(DAT_140c10f28,uVar3 * *(ushort *)(param_2 + 2) * 4,0x10);
        *(longlong *)(param_1 + 0x40) = lVar1;
        if (lVar1 == 0) {
            *(undefined4 *)(param_2 + 7) = 2;
            return;
        }
        *param_2 = lVar1;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_2 + 7);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))(*(longlong **)(param_1 + 0x38),param_2);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)param_2 + 0xc);
    return;
}



void FUN_140872f10(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 in_stack_00000030;
    undefined8 uVar2;

    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x40) = 0;
    uVar2 = in_stack_00000030;
    iVar1 = FUN_140872c70();
    if (iVar1 == 1) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                (*(longlong **)(param_1 + 0x38),&PTR_PTR_FUN_140c10f70,
                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 in_stack_00000030,uVar2);
        if (iVar1 == 1) {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
        }
    }
    return;
}



void FUN_140872f80(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x40) = 0;
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140872fb7. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
}



void FUN_140872fc0(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_FUN_140c10f70);
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    return;
}



void FUN_140873010(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    *(undefined *)(param_1 + 0x2c) = 0;
    // WARNING: Could not recover jumptable at 0x000140873033. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    return;
}



void FUN_140873040(longlong *param_1)

{
    (**(code **)(*param_1 + 0x50))();
    FUN_140872d40(param_1);
    return;
}



undefined8 FUN_140873060(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    undefined8 uVar2;

    if (*(char *)(param_1 + 0x2c) != '\0') {
        return 0x11;
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x40))(plVar1,*param_2);
    }
    // WARNING: Could not recover jumptable at 0x0001408730ab. Too many branches
    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    return uVar2;
}



void FUN_1408730f0(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    ushort uVar4;
    uint uVar5;
    undefined4 uVar6;
    ushort uVar7;
    uint uVar8;
    ushort uVar9;

    if (*(int *)(param_2 + 7) == 0x11) {
        *(undefined *)((longlong)param_1 + 0x2c) = 1;
    }
    uVar9 = 0;
    if (*(short *)((longlong)param_1 + 0x5a) == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0;
        param_1[9] = *param_2;
        param_1[10] = param_2[1];
        param_1[0xb] = param_2[2];
        param_1[0xc] = param_2[3];
        param_1[0xd] = param_2[4];
        param_1[0xe] = param_2[5];
        param_1[0xf] = param_2[6];
        FUN_140872b20();
    }
    plVar1 = param_1 + 0x10;
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 7);
    if (*plVar1 == 0) {
        for (uVar5 = *(uint *)(param_1 + 0x11); uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
        }
        lVar3 = FUN_1408819f0();
        if (lVar3 == 0) {
            *(undefined4 *)(param_2 + 7) = 2;
            return;
        }
        *plVar1 = lVar3;
        *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_1 + 0x11);
        *(undefined2 *)((longlong)param_1 + 0x92) = 0;
    }
    *(uint *)((longlong)param_1 + 0xbc) = (uint)*(ushort *)((longlong)param_1 + 0x5a);
    if ((*(char *)((longlong)param_1 + 0x2d) == '\0') && ((*(byte *)(param_1[2] + 0x17f) & 1) == 0)) {
        *(undefined *)((longlong)param_1 + 0x2e) = 0;
        (**(code **)(*(longlong *)param_1[7] + 0x38))
                ((longlong *)param_1[7],param_1 + 9,*(undefined4 *)(param_1 + 0x17),plVar1);
    }
    else {
        if (*(char *)((longlong)param_1 + 0x2e) == '\0') {
            (**(code **)(*(longlong *)param_1[7] + 0x10))();
        }
        uVar4 = *(ushort *)(param_1 + 0x12);
        uVar5 = *(uint *)(param_1 + 0x11);
        uVar2 = *(uint *)(param_1 + 10);
        if (*(ushort *)((longlong)param_1 + 0x5a) < uVar4) {
            uVar4 = *(ushort *)((longlong)param_1 + 0x5a);
        }
        *(undefined *)((longlong)param_1 + 0x2e) = 1;
        uVar8 = 1;
        uVar7 = uVar9;
        do {
            if ((uVar8 & uVar5) != 0) {
                lVar3 = *plVar1 + (ulonglong)*(ushort *)(param_1 + 0x12) * (ulonglong)uVar7 * 4;
                if ((uVar2 & uVar8) == 0) {
                    FUN_1407e4830(lVar3,0,(ulonglong)uVar4 << 2);
                }
                else {
                    FUN_1407db590(lVar3,param_1[9] +
                                        (ulonglong)*(ushort *)(param_1 + 0xb) * (ulonglong)uVar9 * 4,
                                  (uint)uVar4 * 4);
                }
            }
            if ((uVar2 & uVar8) != 0) {
                uVar9 = uVar9 + 1;
            }
            if ((uVar8 & uVar5) != 0) {
                uVar7 = uVar7 + 1;
            }
            uVar8 = uVar8 * 2;
        } while (uVar8 < 0x21);
        *(undefined2 *)((longlong)param_1 + 0x92) = *(undefined2 *)((longlong)param_1 + 0x5a);
        *(undefined2 *)((longlong)param_1 + 0x5a) = 0;
        if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
            uVar6 = 0x2b;
            if (*(short *)((longlong)param_1 + 0x92) == *(short *)(param_1 + 0x12)) {
                uVar6 = 0x2d;
            }
            *(undefined4 *)((longlong)param_1 + 0x8c) = uVar6;
        }
        else {
            *(undefined4 *)((longlong)param_1 + 0x8c) = 0x11;
        }
    }
    // WARNING: Could not recover jumptable at 0x000140873359. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 8))(param_1,param_2);
    return;
}



void FUN_140873390(longlong param_1,undefined8 param_2)

{
    int iVar1;
    longlong in_stack_00000030;
    longlong lVar2;

    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x54) = 0x2b;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined2 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 200) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xcc) = 0x3f800000;
    lVar2 = in_stack_00000030;
    iVar1 = FUN_140872c70();
    if (iVar1 == 1) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                (*(longlong **)(param_1 + 0x38),&PTR_PTR_FUN_140c10f70,
                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 in_stack_00000030,lVar2);
        if (iVar1 == 1) {
            *(uint *)(param_1 + 0x88) = *(uint *)(in_stack_00000030 + 4) & 0x3ffff;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
        }
    }
    return;
}



void FUN_1408734a0(longlong param_1,undefined8 *param_2)

{
    uint uVar1;
    int iVar2;

    iVar2 = *(int *)(param_1 + 0xbc) - (uint)*(ushort *)(param_1 + 0x5a);
    FUN_140872b20(param_1 + 0x48,(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xb8),iVar2)
            ;
    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 8) & 0x10000) != 0) {
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + iVar2;
        if ((*(int *)(param_1 + 0x8c) == 0x2d) || (*(int *)(param_1 + 0x8c) == 0x11)) {
            uVar1 = *(uint *)(param_1 + 0xd0);
            *(undefined4 *)(param_1 + 0xd0) = 0;
            *(float *)(param_1 + 200) =
                    (*(float *)(param_1 + 200) * 7.0 + (float)(ulonglong)uVar1) * 0.125;
            *(float *)(param_1 + 0xcc) =
                    ((float)(uint)*(ushort *)(param_1 + 0x92) + *(float *)(param_1 + 0xcc) * 7.0) * 0.125;
            *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x7c);
            *(int *)(param_2 + 5) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0xb8);
            *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x78);
            *(float *)((longlong)param_2 + 0x2c) = *(float *)(param_1 + 200) / *(float *)(param_1 + 0xcc);
        }
    }
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar2;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar2;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc4);
    if (*(short *)(param_1 + 0x5a) == 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
        FUN_1408683d0(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x54) = 0x2b;
        *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x7c) = 1;
        *param_2 = 0;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x8c);
    if ((iVar2 == 0x2d) || (iVar2 == 0x11)) {
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x2c);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0x34);
        *param_2 = *(undefined8 *)(param_1 + 0x80);
        param_2[1] = *(undefined8 *)(param_1 + 0x88);
        param_2[2] = *(undefined8 *)(param_1 + 0x90);
        param_2[3] = *(undefined8 *)(param_1 + 0x98);
        param_2[4] = *(undefined8 *)(param_1 + 0xa0);
        param_2[5] = *(undefined8 *)(param_1 + 0xa8);
        param_2[6] = *(undefined8 *)(param_1 + 0xb0);
        iVar2 = *(int *)(param_1 + 0x8c);
    }
    *(int *)(param_2 + 7) = iVar2;
    return;
}



void FUN_1408736a0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x8c) = 0x2b;
        *(undefined2 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xb4) = 1;
    }
    return;
}



void FUN_140873760(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_FUN_140c10f70);
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return;
}



void FUN_140873790(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    FUN_1408683d0(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x54) = 0x2b;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined *)(param_1 + 0x2c) = 0;
    // WARNING: Could not recover jumptable at 0x0001408737f8. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    return;
}



void FUN_140873800(longlong *param_1)

{
    longlong *plVar1;

    (**(code **)(*param_1 + 0x50))();
    FUN_140872d40(param_1);
    plVar1 = param_1 + 0x10;
    if (*plVar1 != 0) {
        FUN_1408683d0(plVar1);
        FUN_140881720(DAT_140c10f28,*plVar1);
        *plVar1 = 0;
        *(undefined4 *)(param_1 + 0x12) = 0;
    }
    FUN_1408683d0(param_1 + 9);
    return;
}



int FUN_140873860(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;

    if (*(char *)(param_1 + 0x2c) == '\0') {
        iVar1 = *param_2;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))();
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar1;
        uVar3 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0);
        while ((0x3ff < uVar3 && (iVar2 == 0x2d))) {
            iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
            *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 0x400;
            uVar3 = uVar3 - 0x400;
            *(bool *)(param_1 + 0x2c) = iVar2 == 0x11;
        }
        return iVar2;
    }
    return 0x11;
}



void FUN_140873940(undefined8 *param_1)

{
    byte *pbVar1;
    byte *pbVar2;
    longlong *plVar3;
    byte *pbVar4;
    longlong lVar5;

    *param_1 = &PTR_FUN_1409a3278;
    pbVar4 = (byte *)param_1[3];
    if (pbVar4 == (byte *)0x0) {
        pbVar1 = (byte *)0x0;
        pbVar2 = (byte *)0x0;
        pbVar4 = (byte *)0x0;
    }
    else {
        pbVar1 = pbVar4 + 1;
        pbVar2 = pbVar4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc);
        pbVar4 = pbVar4 + (ulonglong)*pbVar4 + 1;
    }
    if (pbVar1 != pbVar4) {
        plVar3 = (longlong *)(pbVar2 + 8);
        lVar5 = (longlong)pbVar4 - (longlong)pbVar1;
        do {
            if (*plVar3 != 0) {
                FUN_14083b060(DAT_140c61b70,*plVar3,param_1);
            }
            plVar3 = plVar3 + 2;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    if (param_1[3] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[3] = 0;
    return;
}



void FUN_1408739f0(undefined8 param_1,undefined4 param_2,float param_3,longlong param_4,
                   ulonglong param_5,undefined8 param_6,char param_7)

{
    byte *pbVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar5;
    uint uVar6;
    longlong *local_28;
    uint local_20;
    ulonglong uVar4;

    pbVar1 = *(byte **)(param_4 + 0x18);
    uVar4 = param_5;
    if (pbVar1 != (byte *)0x0) {
        uVar6 = 0;
        do {
            uVar3 = uVar6 + 1;
            uVar4 = (ulonglong)uVar3;
            if (pbVar1[uVar4] == (byte)param_5) {
                pfVar5 = (float *)(pbVar1 + (ulonglong)uVar6 * 0x10 +
                                   ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                goto LAB_140873a43;
            }
            uVar6 = uVar3;
        } while (uVar3 < *pbVar1);
    }
    pfVar5 = (float *)0x0;
    LAB_140873a43:
    if ((int)param_5 == 10) {
        local_20 = (uint)(*(longlong *)(param_4 + 0x10) == 0) | local_20 & 0xfffffffc;
        local_28 = *(longlong **)(param_4 + 8);
        if (*(longlong *)(param_4 + 0x10) == 0) {
            (**(code **)(*local_28 + 0xc0))(param_1,param_3,local_28,uVar4,&local_28,0);
        }
        else {
            (**(code **)(*local_28 + 0xb8))();
        }
    }
    else {
        lVar2 = **(longlong **)(param_4 + 8);
        (**(code **)(lVar2 + 0xb0))
                (param_1,param_2,param_3 - *pfVar5,*(longlong **)(param_4 + 8),
                 (&DAT_1409a3530)[(int)param_5],lVar2,*(undefined8 *)(param_4 + 0x10),0);
    }
    *pfVar5 = param_3;
    if (param_7 != '\0') {
        *(undefined8 *)(pfVar5 + 2) = 0;
    }
    return;
}



undefined8 * FUN_140873b10(undefined8 *param_1)

{
    byte bVar1;
    undefined4 uVar2;

    *param_1 = &PTR_FUN_1409a6098;
    param_1[10] = 0;
    bVar1 = *(byte *)((longlong)param_1 + 0x4c);
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(byte *)((longlong)param_1 + 0x4c) = bVar1 & 0xde | 8;
    *(undefined4 *)(param_1 + 3) = DAT_140c10fb0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_140c10fb4;
    uVar2 = DAT_140c10fb8;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(byte *)((longlong)param_1 + 0x4c) = bVar1 & 0xd8 | 0x18;
    param_1[2] = 0;
    return param_1;
}



void FUN_140873b80(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a3280;
    if (param_1[0xc] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[0xc] = 0;
    }
    *param_1 = &PTR_FUN_1409a6098;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140873bca. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)param_1[10] + 0x10))();
        return;
    }
    return;
}



undefined8 * FUN_140873be0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6098;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 0x10))();
    }
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_140873c30(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    return;
}



undefined8 FUN_140873c60(longlong param_1,longlong param_2,uint param_3,uint *param_4,uint param_5)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;
    uint *puVar7;
    uint uVar8;
    ulonglong uVar9;

    uVar6 = 0;
    uVar4 = 1;
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if ((((param_3 == 0) || (param_5 == 0)) || (param_2 == 0)) || (param_4 == (uint *)0x0)) {
        uVar4 = 0x1f;
    }
    else {
        lVar2 = FUN_1408819f0(DAT_140c10f20,param_3 << 4);
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 != 0) {
            FUN_1407db590(lVar2,param_2,param_3 << 4);
            *(uint *)(param_1 + 0x38) = param_3;
            lVar2 = FUN_1408819f0(DAT_140c10f20,param_5 * 0x18);
            *(longlong *)(param_1 + 0x40) = lVar2;
            if (lVar2 != 0) {
                *(uint *)(param_1 + 0x48) = param_5;
                uVar3 = uVar6;
                puVar7 = param_4;
                uVar9 = uVar6;
                if (param_5 != 0) {
                    do {
                        uVar5 = *param_4;
                        *(uint *)(uVar3 + 8 + *(longlong *)(param_1 + 0x40)) = param_4[1];
                        param_4 = param_4 + 2;
                        if (param_3 <= *puVar7) {
                            uVar4 = 2;
                            break;
                        }
                        uVar8 = (int)uVar9 + 1;
                        *(ulonglong *)(uVar3 + *(longlong *)(param_1 + 0x40)) =
                                (ulonglong)uVar5 * 0x10 + *(longlong *)(param_1 + 0x30);
                        *(undefined4 *)(uVar3 + 0xc + *(longlong *)(param_1 + 0x40)) = 0;
                        *(undefined4 *)(uVar3 + 0x10 + *(longlong *)(param_1 + 0x40)) = 0;
                        uVar3 = uVar3 + 0x18;
                        puVar7 = puVar7 + 2;
                        uVar9 = (ulonglong)uVar8;
                    } while (uVar8 < param_5);
                }
                goto LAB_140873dc0;
            }
        }
        uVar4 = 0x34;
    }
    LAB_140873dc0:
    if (*(int *)(param_1 + 0x48) != 0) {
        do {
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 8 + uVar6 * 0x18);
            if (0 < iVar1) {
                *(undefined4 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 0x18) + -4 + (longlong)iVar1 * 0x10)
                        = *(undefined4 *)(param_1 + 0x28);
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x48));
    }
    return uVar4;
}



void FUN_140873e20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    FUN_14083a7b0(DAT_140c61b98,param_2,*(undefined8 *)(param_1 + 0x40),
                  *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x24),
                  *(byte *)(param_1 + 0x4c) >> 5 & 1,param_3);
    return;
}



void FUN_140873eb0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
}



ulonglong * FUN_140873f00(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    ulonglong *puVar5;
    int iVar6;
    int iVar7;

    lVar1 = *param_1;
    iVar7 = 0;
    iVar6 = (int)(param_1[1] - lVar1 >> 4) + -1;
    if (-1 < iVar6) {
        do {
            iVar3 = (iVar6 - iVar7) / 2 + iVar7;
            uVar2 = *(ulonglong *)(lVar1 + (longlong)iVar3 * 0x10);
            if (param_2 < uVar2) {
                iVar6 = iVar3 + -1;
            }
            else {
                if (param_2 <= uVar2) {
                    return (ulonglong *)((longlong)iVar3 * 0x10 + lVar1);
                }
                iVar7 = iVar3 + 1;
            }
        } while (iVar7 <= iVar6);
    }
    if ((lVar1 == 0) || (lVar4 = (longlong)iVar7 * 0x10 + lVar1, lVar4 == 0)) {
        puVar5 = (ulonglong *)FUN_1408741b0(param_1);
    }
    else {
        puVar5 = (ulonglong *)FUN_140874610(param_1,lVar4 - lVar1 >> 4 & 0xffffffff);
    }
    if (puVar5 != (ulonglong *)0x0) {
        *puVar5 = param_2;
    }
    return puVar5;
}



undefined8 * FUN_140873fa0(undefined8 *param_1,undefined8 *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined *)(param_1 + 3) = *(undefined *)(param_2 + 3);
    *(undefined *)((longlong)param_1 + 0x19) = *(undefined *)((longlong)param_2 + 0x19);
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    if ((DAT_140c61b98 != 0) && (*(longlong *)param_1[2] != 0)) {
        FUN_14083a530();
    }
    return param_1;
}



undefined8 * FUN_140874010(undefined8 *param_1)

{
    FUN_14087bc10();
    *param_1 = &PTR_LAB_1409a60a0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    return param_1;
}



longlong * FUN_140874050(longlong *param_1,int *param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    *param_1 = 0;
    if (*param_2 == 0) {
        return param_1;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x24) + 0x20);
    if (lVar1 != 0) {
        FUN_140865fb0(lVar1);
        lVar2 = *param_1;
        *param_1 = lVar1;
        if (lVar2 != 0) {
            FUN_140866000();
        }
        lVar1 = *param_1;
        lVar2 = FUN_140873f00(param_3 + 0xc0,lVar1);
        if (lVar2 != 0) {
            if (*(int *)(lVar2 + 8) == 0) {
                FUN_140865fb0(lVar1);
            }
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        }
        return param_1;
    }
    return param_1;
}



void FUN_140874110(longlong param_1)

{
    if ((DAT_140c61b98 != 0) && (**(longlong **)(param_1 + 0x10) != 0)) {
        FUN_14083a740();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140866000();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    return;
}



longlong FUN_1408741b0(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_1408744f0(param_1,1), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    if (param_1[1] != 0) {
        *(undefined4 *)(param_1[1] + 8) = 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x10;
    return lVar1;
}



undefined8 FUN_140874220(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = FUN_14086c4d0(*(undefined8 *)(param_2 + 0x20));
    if (lVar3 != 0) {
        if (*(longlong *)(*(longlong *)(param_3 + 0x90) + 0x20) == 0) {
            FUN_1403b5350(L"Playback failed, known issue WG-15729. Multiple simultaneous playback in multiple continuous mode currently unsupported."
                    ,1);
        }
        if (*(longlong *)(*(longlong *)(param_3 + 0x90) + 0x20) != 0) {
            *(undefined8 *)(lVar3 + 0x20) = *param_4;
            if (param_1 != (longlong *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
            }
            plVar1 = *(longlong **)(lVar3 + 0x18);
            *(longlong **)(lVar3 + 0x18) = param_1;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x10))();
            }
            plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x90) + 0x20);
            lVar2 = *plVar1;
            if (plVar1[1] == lVar2) {
                *(byte *)(lVar3 + 0x12) = *(byte *)(lVar3 + 0x12) & 0xfc;
                *(undefined2 *)(lVar3 + 0x10) = 1;
            }
            else {
                *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
            }
            if (*(longlong *)(lVar3 + 0x20) != 0) {
                FUN_140874400(param_1);
            }
            return 1;
        }
    }
    lVar3 = *(longlong *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (lVar3 != 0) {
        FUN_140866000();
    }
    return 0x34;
}



void FUN_140874330(longlong *param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong *plVar6;

    plVar4 = (longlong *)FUN_140834f40(param_1 + 0x18);
    if (plVar4 != (longlong *)0x0) {
        if (*(uint *)(plVar4 + 1) < 2) {
            cVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
            if (cVar3 == '\0') {
                lVar1 = *plVar4;
                if (lVar1 != 0) {
                    FUN_140865fb0(lVar1);
                }
                lVar2 = *param_3;
                *param_3 = lVar1;
                if (lVar2 != 0) {
                    FUN_140866000();
                }
            }
            FUN_140866000(*plVar4);
            if (plVar4 < (longlong *)(param_1[0x19] + -0x10)) {
                uVar5 = ((ulonglong)
                                 ((longlong)(longlong *)(param_1[0x19] + -0x10) + (-1 - (longlong)plVar4)) >> 3 &
                         0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                plVar6 = plVar4 + 2;
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *plVar4 = *plVar6;
                    plVar6 = plVar6 + 1;
                    plVar4 = plVar4 + 1;
                }
            }
            param_1[0x19] = param_1[0x19] + -0x10;
        }
        else {
            *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) - 1;
        }
    }
    return;
}



undefined4 FUN_140874400(longlong param_1,undefined8 param_2)

{
    longlong lVar1;

    lVar1 = FUN_140873f00(param_1 + 0xc0);
    if (lVar1 == 0) {
        return 2;
    }
    if (*(int *)(lVar1 + 8) == 0) {
        FUN_140865fb0(param_2);
    }
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    return 1;
}



undefined8 FUN_140874450(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    puVar1 = (undefined8 *)FUN_140834f40(param_1 + 0xc0);
    if (puVar1 != (undefined8 *)0x0) {
        if (*(uint *)(puVar1 + 1) < 2) {
            FUN_140866000(*puVar1);
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 200) + -0x10);
            if (puVar1 < puVar2) {
                uVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar1)) >> 3 & 0xfffffffffffffffe)
                        + 2 & 0x1ffffffffffffffe;
                puVar2 = puVar1 + 2;
                for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar1 = *puVar2;
                    puVar2 = puVar2 + 1;
                    puVar1 = puVar1 + 1;
                }
            }
            *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + -0x10;
            return 1;
        }
        *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) - 1;
    }
    return 1;
}



undefined8 FUN_1408744f0(longlong *param_1,int param_2)

{
    int iVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    iVar1 = *(int *)(param_1 + 2);
    puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) << 4);
    if (puVar2 == (undefined8 *)0x0) {
        return 0;
    }
    uVar3 = param_1[1] - *param_1 >> 4;
    uVar5 = uVar3 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar3 != 0) {
            puVar4 = puVar2;
            uVar3 = uVar5;
            do {
                if (puVar4 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar4 + 1) = 0;
                }
                puVar6 = (undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)puVar2));
                *puVar4 = *puVar6;
                puVar4[1] = puVar6[1];
                uVar3 = uVar3 - 1;
                puVar4 = puVar4 + 2;
            } while (uVar3 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar1 + param_2;
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar2 + uVar5 * 2);
    return 1;
}



undefined8 FUN_1408745c0(longlong *param_1)

{
    char cVar1;
    uint uVar2;

    uVar2 = (**(code **)(*param_1 + 0x70))();
    if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
        cVar1 = '\x01';
    }
    else {
        cVar1 = '\0';
    }
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0xfd;
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | cVar1 * '\x02';
    FUN_140851a00(param_1);
    return 1;
}



longlong FUN_140874610(longlong *param_1,uint param_2)

{
    char cVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    longlong lVar5;

    uVar4 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar4) && (cVar1 = FUN_1408744f0(param_1,1), cVar1 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar4) {
        return 0;
    }
    if (param_1[1] != 0) {
        *(undefined4 *)(param_1[1] + 8) = 0;
    }
    puVar2 = (undefined8 *)param_1[1];
    lVar5 = (ulonglong)param_2 * 0x10;
    param_1[1] = (longlong)(puVar2 + 2);
    if ((undefined8 *)(*param_1 + lVar5) < puVar2) {
        do {
            puVar3 = puVar2 + -2;
            *puVar2 = puVar2[-2];
            puVar2[1] = puVar2[-1];
            puVar2 = puVar3;
        } while ((undefined8 *)(*param_1 + lVar5) < puVar3);
    }
    if (*param_1 + lVar5 != 0) {
        *(undefined4 *)(*param_1 + lVar5 + 8) = 0;
    }
    return *param_1 + lVar5;
}



int FUN_1408746e0(longlong *param_1,longlong param_2)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 local_38;
    undefined8 local_30;
    longlong *local_28;
    undefined local_20;
    undefined local_1f;
    longlong local_18;
    undefined4 local_10;

    puVar1 = *(undefined8 **)(param_2 + 0x90);
    local_38 = *puVar1;
    iVar2 = 2;
    local_30 = puVar1[1];
    local_28 = (longlong *)puVar1[2];
    local_20 = *(undefined *)(puVar1 + 3);
    local_1f = *(undefined *)((longlong)puVar1 + 0x19);
    local_18 = 0;
    local_10 = *(undefined4 *)(puVar1 + 5);
    if ((DAT_140c61b98 != 0) && (*local_28 != 0)) {
        FUN_14083a530();
    }
    FUN_140874330(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x20),&local_18);
    if (local_18 != 0) {
        *(undefined8 **)(param_2 + 0x90) = &local_38;
        iVar2 = (**(code **)(*param_1 + 0x288))(param_1,param_2);
        if (iVar2 == 3) {
            iVar2 = 1;
        }
    }
    if ((DAT_140c61b98 != 0) && (*local_28 != 0)) {
        FUN_14083a740(DAT_140c61b98);
    }
    if (local_18 != 0) {
        FUN_140866000();
    }
    return iVar2;
}



void FUN_1408747f0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0xc0) != 0) {
        *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 0xc0);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    return;
}



undefined8 * FUN_140874840(undefined8 *param_1)

{
    FUN_1408555e0();
    *param_1 = &PTR_LAB_1409a6450;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return param_1;
}



undefined8 * FUN_1408748c0(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x48);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408555e0(puVar1,param_1,param_2);
        *puVar1 = &PTR_LAB_1409a6450;
        *(undefined4 *)(puVar1 + 8) = 0xffffffff;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



int FUN_140874940(longlong param_1,longlong param_2)

{
    float *pfVar1;
    byte *pbVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined4 local_res8;
    uint local_resc;
    undefined4 local_b8 [2];
    longlong *local_b0;
    undefined8 local_a8;
    undefined4 *local_a0;
    undefined8 local_98;
    undefined4 local_90;
    int *local_88;
    undefined4 local_80;
    undefined4 local_78;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined8 local_28;
    undefined4 local_20;
    undefined local_1c;
    undefined local_1b;
    undefined local_1a;

    pbVar2 = *(byte **)(param_1 + 0x28);
    uVar7 = 0;
    if (pbVar2 != (byte *)0x0) {
        do {
            uVar6 = (int)uVar7 + 1;
            if (pbVar2[uVar6] == 0x10) {
                pfVar1 = (float *)(pbVar2 + uVar7 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                if (pfVar1 == (float *)0x0) break;
                if (*pfVar1 != 0.0) {
                    iVar3 = rand();
                    iVar4 = rand();
                    if ((float)(iVar3 * 0x8000 + iVar4) * 9.313226e-10 * 100.0 <= *pfVar1) break;
                }
                return 1;
            }
            uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *pbVar2);
    }
    plVar5 = (longlong *)FUN_140855940(param_1);
    if (plVar5 == (longlong *)0x0) {
        iVar3 = 0xf;
    }
    else {
        local_res8 = FUN_140855a70();
        local_80 = *(undefined4 *)(param_2 + 0x38);
        local_resc = *(byte *)(param_1 + 0x3e) & 0x1f;
        local_98 = *(undefined8 *)(param_2 + 0x20);
        local_90 = *(undefined4 *)(param_2 + 0x28);
        local_34 = 0;
        local_88 = *(int **)(param_2 + 0x30);
        local_1a = 0;
        local_1c = 0;
        local_78 = 0;
        local_b8[0] = 0;
        if (local_88 != (int *)0x0) {
            *local_88 = *local_88 + 1;
        }
        local_2c = *(undefined4 *)(param_2 + 0x14);
        local_a8 = *(undefined8 *)(param_2 + 0x48);
        local_a0 = &local_res8;
        local_30 = 0;
        local_1b = 1;
        local_28 = 0;
        local_20 = 0;
        local_b0 = plVar5;
        iVar3 = FUN_14084ed10(plVar5,local_b8);
        if (iVar3 == 3) {
            iVar3 = 1;
        }
        else if (iVar3 == 1) {
            iVar3 = (**(code **)(*plVar5 + 0x278))(plVar5,local_b8);
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        if (local_88 != (int *)0x0) {
            FUN_140828460();
        }
    }
    return iVar3;
}



undefined8 * FUN_140874b50(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a64c0;
    FUN_140876ce0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140874b90(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x68);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140876cb0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a64c0;
        *(undefined *)(puVar1 + 0xc) = 1;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined4 FUN_140874c10(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined4 uVar2;
    longlong *plVar3;

    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = 1;
    switch(*(undefined2 *)(param_1 + 0x3c)) {
        case 0x202:
        case 0x203:
            plVar3 = (longlong *)FUN_140855940(param_1);
            if (plVar3 != (longlong *)0x0) {
                uVar2 = FUN_140876f80(param_1,1,uVar1,*(undefined4 *)(param_2 + 0x44));
                FUN_14082c3b0(DAT_140c61b68,plVar3,uVar1,*(undefined *)(param_1 + 0x60),
                              *(undefined4 *)(param_2 + 0x44));
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
            break;
        case 0x204:
        case 0x205:
            FUN_140876d30(param_1,1,uVar1,*(undefined4 *)(param_2 + 0x44));
            FUN_14082c3b0(DAT_140c61b68,0,uVar1,*(undefined *)(param_1 + 0x60),
                          *(undefined4 *)(param_2 + 0x44));
            break;
        case 0x208:
        case 0x209:
            FUN_140876ea0(param_1,1,uVar1,*(undefined4 *)(param_2 + 0x44));
            FUN_14082c610(DAT_140c61b68,uVar1,param_1 + 0x40,*(undefined *)(param_1 + 0x60),
                          *(undefined4 *)(param_2 + 0x44));
    }
    return uVar2;
}



undefined8 * FUN_140874d70(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6530;
    FUN_140876ce0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140874dc0(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x60);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140876cb0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a6530;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined4 FUN_140874e30(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined4 uVar2;
    longlong *plVar3;

    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = 1;
    switch(*(undefined2 *)(param_1 + 0x3c)) {
        case 0x302:
        case 0x303:
            plVar3 = (longlong *)FUN_140855940(param_1);
            if (plVar3 != (longlong *)0x0) {
                uVar2 = FUN_140876f80(param_1,2,uVar1,*(undefined4 *)(param_2 + 0x44));
                FUN_14082eab0(DAT_140c61b68,plVar3,uVar1,*(undefined *)(param_1 + 0x58),
                              *(undefined4 *)(param_2 + 0x44));
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
            break;
        case 0x304:
        case 0x305:
            FUN_140876d30(param_1,2,uVar1,*(undefined4 *)(param_2 + 0x44));
            FUN_14082eab0(DAT_140c61b68,0,uVar1,*(undefined *)(param_1 + 0x58),
                          *(undefined4 *)(param_2 + 0x44));
            break;
        case 0x308:
        case 0x309:
            FUN_140876ea0(param_1,2,uVar1,*(undefined4 *)(param_2 + 0x44));
            FUN_14082ec70(DAT_140c61b68,uVar1,param_1 + 0x40,*(undefined *)(param_1 + 0x58),
                          *(undefined4 *)(param_2 + 0x44));
    }
    return uVar2;
}



undefined8 * FUN_140874fa0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a65a0;
    FUN_140855630();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140874fe0(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x40);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408555e0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a65a0;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



int FUN_140875050(undefined8 param_1,longlong param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined2 local_1c;
    undefined local_1a;
    longlong *local_18;

    plVar2 = (longlong *)FUN_140855940();
    if (plVar2 == (longlong *)0x0) {
        return 0xf;
    }
    local_30 = *(undefined8 *)(param_2 + 0x48);
    local_38[0] = 3;
    local_1c = 0;
    local_28 = *(undefined4 *)(param_2 + 0x44);
    local_1a = 0;
    local_18 = plVar2;
    iVar1 = (**(code **)(*plVar2 + 0x80))(plVar2,local_38);
    if (iVar1 == 1) {
        iVar1 = FUN_14082b4e0(DAT_140c61b68,plVar2,*(undefined8 *)(param_2 + 0x48),
                              *(undefined4 *)(param_2 + 0x44));
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return iVar1;
}



undefined8 * FUN_140875100(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6600;
    FUN_14087f330();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140875140(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x58);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_14087f300(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a6600;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_1408751b0(longlong param_1,longlong *param_2)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    // WARNING: Could not recover jumptable at 0x0001408751f2. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 0x188))(param_2,0,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_140875200(longlong param_1,longlong *param_2,undefined8 param_3)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    // WARNING: Could not recover jumptable at 0x000140875252. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 0x188))(param_2,param_3,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_140875260(longlong param_1,longlong *param_2)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    // WARNING: Could not recover jumptable at 0x00014087529f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 400))(param_2,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_1408752b0(longlong param_1,longlong *param_2)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;
    int *piVar4;

    piVar4 = *(int **)(param_1 + 0x40);
    if (piVar4 != *(int **)(param_1 + 0x48)) {
        do {
            if ((*(int *)(param_2 + 3) == *piVar4) &&
                ((*(byte *)((longlong)param_2 + 0x5b) >> 1 & 1) == *(byte *)(piVar4 + 1))) {
                return;
            }
            piVar4 = piVar4 + 2;
        } while (piVar4 != *(int **)(param_1 + 0x48));
    }
    lVar2 = *param_2;
    bVar1 = *(byte *)(param_1 + 0x3e);
    uVar3 = FUN_140855a70();
    (**(code **)(lVar2 + 400))(param_2,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_140875330(longlong param_1,longlong *param_2,undefined8 param_3)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;
    int *piVar4;

    piVar4 = *(int **)(param_1 + 0x40);
    if (piVar4 != *(int **)(param_1 + 0x48)) {
        do {
            if ((*(int *)(param_2 + 3) == *piVar4) &&
                ((*(byte *)((longlong)param_2 + 0x5b) >> 1 & 1) == *(byte *)(piVar4 + 1))) {
                return;
            }
            piVar4 = piVar4 + 2;
        } while (piVar4 != *(int **)(param_1 + 0x48));
    }
    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    (**(code **)(lVar2 + 0x188))(param_2,param_3,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_1408753c0(longlong param_1,longlong *param_2)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    // WARNING: Could not recover jumptable at 0x000140875402. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 0x180))(param_2,0,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_140875410(longlong param_1,longlong *param_2,undefined8 param_3)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    // WARNING: Could not recover jumptable at 0x000140875462. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 0x180))(param_2,param_3,bVar1 & 0x1f,uVar3);
    return;
}



undefined8 * FUN_140875470(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a66b0;
    FUN_14087f330();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408754b0(undefined4 param_1,undefined4 param_2,undefined param_3)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x68);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_14087f300(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a66b0;
        puVar1[0xb] = 0;
        *(undefined4 *)(puVar1 + 0xc) = 0;
        *(undefined *)((longlong)puVar1 + 100) = 2;
        *(undefined *)((longlong)puVar1 + 0x65) = param_3;
        FUN_140855760(puVar1);
    }
    return puVar1;
}



void FUN_140875530(longlong param_1,longlong *param_2)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    // WARNING: Could not recover jumptable at 0x000140875583. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 0x178))(param_2,*(undefined *)(param_1 + 0x65),bVar1 & 0x1f,uVar3);
    return;
}



void FUN_140875590(longlong param_1,longlong *param_2,undefined8 param_3)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    (**(code **)(lVar2 + 0x170))
            (param_2,*(undefined *)(param_1 + 0x65),param_3,0,0,bVar1 & 0x1f,uVar3);
    return;
}



void FUN_140875770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    float fVar2;
    float fVar3;

    fVar2 = 0.0;
    fVar3 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x5c);
    if (fVar3 != 0.0) {
        iVar1 = rand();
        fVar2 = (float)iVar1 * 3.051851e-05 * fVar3;
    }
    FUN_140875800(param_1,param_2,param_3,*(undefined *)(param_1 + 100),
                  fVar2 + *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x58));
    return;
}



void FUN_140875800(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;

    bVar1 = *(byte *)(param_1 + 0x3e);
    lVar2 = *param_2;
    uVar3 = FUN_140855a70();
    (**(code **)(lVar2 + 0x170))
            (param_2,*(undefined *)(param_1 + 0x65),param_3,param_4,param_5,bVar1 & 0x1f,uVar3);
    return;
}



undefined8 * FUN_1408758c0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6760;
    FUN_140855630();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140875900(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x48);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408555e0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a6760;
        puVar1[8] = 0;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140875980(longlong param_1)

{
    FUN_14082a960(DAT_140c61b78,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0,0);
    return 1;
}



undefined8 * FUN_1408759e0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a67c0;
    FUN_140855630();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140875a20(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x48);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408555e0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a67c0;
        puVar1[8] = 0;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140875aa0(longlong param_1,longlong param_2)

{
    FUN_1408381e0(DAT_140c61bb0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                  *(undefined8 *)(param_2 + 0x48));
    return 1;
}



undefined8 * FUN_140875ad0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6820;
    FUN_14087f330();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140875b10(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x68);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_14087f300(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a6820;
        puVar1[0xb] = 0;
        *(undefined4 *)(puVar1 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar1 + 100) = 2;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_140875b90(longlong param_1)

{
    undefined4 local_res8;
    uint local_resc;

    local_res8 = FUN_140855a70();
    local_resc = *(byte *)(param_1 + 0x3e) & 0x1f;
    FUN_140837c80(DAT_140c61bb0,*(undefined4 *)(param_1 + 0x38),0,&local_res8);
    return;
}



void FUN_140875bd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined4 local_res8;
    uint local_resc;

    local_res8 = FUN_140855a70();
    local_resc = *(byte *)(param_1 + 0x3e) & 0x1f;
    FUN_140837c80(DAT_140c61bb0,*(undefined4 *)(param_1 + 0x38),param_3,&local_res8);
    return;
}



void FUN_140875c20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 local_res8;
    uint local_resc;
    undefined auVar1 [16];

    auVar1 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    local_res8 = FUN_140855a70();
    local_resc = *(byte *)(param_1 + 0x3e) & 0x1f;
    if (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x5c) != 0.0) {
        rand();
    }
    FUN_1408380a0(DAT_140c61bb0,*(undefined4 *)(param_1 + 0x38),param_3,0,&local_res8,
                  *(undefined4 *)(param_1 + 100),auVar1);
    return;
}



void FUN_140875cb0(longlong param_1)

{
    FUN_140855a70();
    if (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x5c) != 0.0) {
        rand();
    }
    FUN_1408380a0(DAT_140c61bb0,*(undefined4 *)(param_1 + 0x38));
    return;
}



undefined8 * FUN_140875d90(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a68d0;
    FUN_140855630();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140875dd0(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x40);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408555e0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a68d0;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140875e40(longlong param_1,ulonglong param_2)

{
    longlong *plVar1;

    plVar1 = (longlong *)FUN_140855940();
    if (plVar1 != (longlong *)0x0) {
        FUN_1408555c0(plVar1,param_2 & 0xffffffffffffff00 |
                             (ulonglong)(*(short *)(param_1 + 0x3c) == 0x1002));
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    return 1;
}



undefined8 * FUN_140875e90(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6930;
    FUN_140876920();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140875ed0(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x60);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408768f0(puVar1,param_1,param_2);
        *(undefined *)(puVar1 + 0xb) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x5c) = 0xffffffff;
        *puVar1 = &PTR_FUN_1409a6930;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140875f50(longlong param_1,longlong param_2)

{
    ushort uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    int *piVar6;
    uint uVar7;
    undefined4 uVar8;
    ulonglong uVar9;
    bool bVar10;

    plVar5 = *(longlong **)(param_2 + 0x48);
    uVar1 = *(ushort *)(param_1 + 0x3c);
    if (uVar1 < 0x1b06) {
        if (uVar1 == 0x1b05) {
            if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
                for (puVar2 = *(undefined8 **)(undefined8 *)*plVar5; puVar2 != (undefined8 *)0x0;
                     puVar2 = (undefined8 *)*puVar2) {
                    plVar4 = (longlong *)FUN_140830ee0(DAT_140c61ba8,puVar2 + 1);
                    if (plVar4 != (longlong *)0x0) {
                        FUN_140854240(plVar4,*(undefined4 *)(param_1 + 0x5c),plVar5);
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                }
            }
        }
        else if (0x1a01 < uVar1) {
            if (uVar1 < 0x1a04) {
                plVar4 = (longlong *)FUN_140855940();
                if (plVar4 != (longlong *)0x0) {
                    if (*(char *)(param_1 + 0x58) == '\0') {
                        uVar8 = 0;
                    }
                    else {
                        uVar8 = *(undefined4 *)(param_1 + 0x5c);
                    }
                    FUN_140851a80(plVar4,uVar8,*(undefined4 *)(param_1 + 0x5c),plVar5,0);
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                }
            }
            else if (0x1b01 < uVar1) {
                if (uVar1 < 0x1b04) {
                    plVar4 = (longlong *)FUN_140855940();
                    if (plVar4 != (longlong *)0x0) {
                        FUN_140854240(plVar4,*(undefined4 *)(param_1 + 0x5c),plVar5);
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                }
                else if (uVar1 == 0x1b04) {
                    FUN_1408762f0(param_1,DAT_140c61ba0);
                    lVar3 = DAT_140c61ba0;
                    uVar9 = 0;
                    plVar5 = *(longlong **)(DAT_140c61ba0 + 0x38);
                    while( true ) {
                        if (plVar5 != (longlong *)0x0) goto LAB_140876000;
                        uVar7 = (int)uVar9 + 1;
                        uVar9 = (ulonglong)uVar7;
                        if (0xc0 < uVar7) break;
                        plVar5 = *(longlong **)(DAT_140c61ba0 + 0x38 + uVar9 * 8);
                    }
                    bVar10 = true;
                    joined_r0x000140875ffa:
                    if (!bVar10) {
                        LAB_140876000:
                        do {
                            do {
                                FUN_1408762f0(param_1,*(undefined8 *)plVar5[2]);
                                plVar5 = (longlong *)*plVar5;
                            } while (plVar5 != (longlong *)0x0);
                            do {
                                uVar7 = (int)uVar9 + 1;
                                uVar9 = (ulonglong)uVar7;
                                if (0xc0 < uVar7) {
                                    bVar10 = plVar5 == (longlong *)0x0;
                                    goto joined_r0x000140875ffa;
                                }
                                plVar5 = *(longlong **)(lVar3 + 0x38 + uVar9 * 8);
                            } while (plVar5 == (longlong *)0x0);
                        } while( true );
                    }
                }
            }
        }
    }
    else if (uVar1 == 0x1b08) {
        FUN_140876240(param_1,DAT_140c61ba0);
        lVar3 = DAT_140c61ba0;
        uVar9 = 0;
        plVar5 = *(longlong **)(DAT_140c61ba0 + 0x38);
        while( true ) {
            if (plVar5 != (longlong *)0x0) goto LAB_1408761e0;
            uVar7 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar7;
            if (0xc0 < uVar7) break;
            plVar5 = *(longlong **)(DAT_140c61ba0 + 0x38 + uVar9 * 8);
        }
        bVar10 = true;
        joined_r0x0001408761dd:
        if (!bVar10) {
            LAB_1408761e0:
            do {
                do {
                    FUN_140876240(param_1,*(undefined8 *)plVar5[2]);
                    plVar5 = (longlong *)*plVar5;
                } while (plVar5 != (longlong *)0x0);
                do {
                    uVar7 = (int)uVar9 + 1;
                    uVar9 = (ulonglong)uVar7;
                    if (0xc0 < uVar7) {
                        bVar10 = plVar5 == (longlong *)0x0;
                        goto joined_r0x0001408761dd;
                    }
                    plVar5 = *(longlong **)(lVar3 + 0x38 + uVar9 * 8);
                } while (plVar5 == (longlong *)0x0);
            } while( true );
        }
    }
    else if ((uVar1 == 0x1b09) && ((undefined8 *)*plVar5 != (undefined8 *)0x0)) {
        for (puVar2 = *(undefined8 **)(undefined8 *)*plVar5; puVar2 != (undefined8 *)0x0;
             puVar2 = (undefined8 *)*puVar2) {
            plVar5 = (longlong *)FUN_140830ee0(DAT_140c61ba8);
            if (plVar5 != (longlong *)0x0) {
                piVar6 = *(int **)(param_1 + 0x40);
                if (piVar6 != *(int **)(param_1 + 0x48)) {
                    do {
                        if ((*(int *)(plVar5 + 3) == *piVar6) &&
                            ((*(byte *)((longlong)plVar5 + 0x5b) >> 1 & 1) == *(byte *)(piVar6 + 1)))
                            goto LAB_140876193;
                        piVar6 = piVar6 + 2;
                    } while (piVar6 != *(int **)(param_1 + 0x48));
                }
                FUN_140854240(plVar5,*(undefined4 *)(param_1 + 0x5c));
                LAB_140876193:
                (**(code **)(*plVar5 + 0x10))(plVar5);
            }
        }
    }
    return 1;
}



void FUN_140876240(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;
    int *piVar2;

    if (param_2 != (undefined8 *)0x0) {
        for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
             param_2 = (undefined8 *)*param_2) {
            plVar1 = (longlong *)FUN_140830ee0(DAT_140c61ba8);
            if (plVar1 != (longlong *)0x0) {
                piVar2 = *(int **)(param_1 + 0x40);
                if (piVar2 != *(int **)(param_1 + 0x48)) {
                    do {
                        if ((*(int *)(plVar1 + 3) == *piVar2) &&
                            ((*(byte *)((longlong)plVar1 + 0x5b) >> 1 & 1) == *(byte *)(piVar2 + 1)))
                            goto LAB_1408762c3;
                        piVar2 = piVar2 + 2;
                    } while (piVar2 != *(int **)(param_1 + 0x48));
                }
                FUN_140854240(plVar1,*(undefined4 *)(param_1 + 0x5c));
                LAB_1408762c3:
                (**(code **)(*plVar1 + 0x10))(plVar1);
            }
        }
    }
    return;
}



void FUN_1408762f0(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;

    if (param_2 != (undefined8 *)0x0) {
        for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
             param_2 = (undefined8 *)*param_2) {
            plVar1 = (longlong *)FUN_140830ee0(DAT_140c61ba8,param_2 + 1);
            if (plVar1 != (longlong *)0x0) {
                FUN_140854240(plVar1,*(undefined4 *)(param_1 + 0x5c),0);
                (**(code **)(*plVar1 + 0x10))(plVar1);
            }
        }
    }
    return;
}



undefined8 * FUN_140876390(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a69a0;
    FUN_140855630();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408763d0(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x40);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408555e0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a69a0;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_140876440(longlong param_1,longlong param_2)

{
    FUN_14082b070(DAT_140c61b78,*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x48));
    return 1;
}



undefined8 * FUN_140876470(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6a00;
    FUN_140876920();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_1408764b0(longlong param_1,longlong param_2,undefined4 param_3)

{
    longlong *plVar1;
    float fVar2;
    undefined4 local_38 [2];
    longlong local_30;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;
    undefined local_1c;
    undefined local_1b;
    undefined local_1a;
    int local_10;
    byte local_c;

    plVar1 = (longlong *)FUN_14085a9a0();
    if (plVar1 != (longlong *)0x0) {
        local_20 = *(byte *)(param_1 + 0x3e) & 0x1f;
        local_1c = 0;
        local_1a = 0;
        local_c = local_c ^ (*(byte *)(param_1 + 100) ^ local_c) & 1;
        local_24 = 0;
        local_30 = param_2;
        local_28 = param_3;
        if ((local_c & 1) == 0) {
            fVar2 = (float)FUN_14086c2e0();
            local_10 = (int)fVar2;
        }
        else {
            local_10 = FUN_14086c2e0();
        }
        local_38[0] = 4;
        local_c = local_c ^ (*(char *)(param_1 + 0x65) * '\x02' ^ local_c) & 2;
        local_1b = local_30 == 0;
        (**(code **)(*plVar1 + 0x80))(plVar1,local_38);
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    return;
}



void FUN_1408765a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    longlong *plVar1;
    float fVar2;
    undefined4 local_38 [2];
    longlong local_30;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    uint local_18;
    undefined2 local_14;
    int local_10;
    byte local_c;

    plVar1 = (longlong *)FUN_14085a9a0();
    if (plVar1 != (longlong *)0x0) {
        local_18 = *(byte *)(param_1 + 0x3e) & 0x1f;
        local_14 = 0;
        local_c = local_c ^ (*(byte *)(param_1 + 100) ^ local_c) & 1;
        local_1c = 0;
        local_28 = param_2;
        local_20 = param_3;
        if ((local_c & 1) == 0) {
            fVar2 = (float)FUN_14086c2e0();
            local_10 = (int)fVar2;
        }
        else {
            local_10 = FUN_14086c2e0();
        }
        local_38[0] = 4;
        local_c = local_c ^ (*(char *)(param_1 + 0x65) * '\x02' ^ local_c) & 2;
        local_30 = param_1 + 0x40;
        (**(code **)(*plVar1 + 0x88))(plVar1,local_38);
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    return;
}



undefined8 * FUN_140876690(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x68);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1408768f0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a6a00;
        puVar1[0xb] = 0;
        *(undefined4 *)(puVar1 + 0xc) = 0;
        *(undefined2 *)((longlong)puVar1 + 100) = 0;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined4 FUN_140876710(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    float fVar3;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined local_1a;
    int local_10;
    byte local_c;

    plVar2 = (longlong *)FUN_140855940();
    if (plVar2 == (longlong *)0x0) {
        uVar1 = 0xf;
    }
    else {
        local_1c = 0;
        local_1a = 0;
        local_20 = 4;
        local_c = local_c ^ (*(byte *)(param_1 + 100) ^ local_c) & 1;
        local_24 = 0;
        local_30 = param_2;
        local_28 = param_3;
        if ((local_c & 1) == 0) {
            fVar3 = (float)FUN_14086c2e0();
            local_10 = (int)fVar3;
        }
        else {
            local_10 = FUN_14086c2e0();
        }
        local_38[0] = 4;
        local_c = local_c ^ (*(char *)(param_1 + 0x65) * '\x02' ^ local_c) & 2;
        uVar1 = (**(code **)(*plVar2 + 0x80))(plVar2,local_38);
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return uVar1;
}



undefined8 FUN_140876800(longlong param_1,longlong param_2)

{
    undefined8 uVar1;

    uVar1 = *(undefined8 *)(param_2 + 0x48);
    switch(*(undefined2 *)(param_1 + 0x3c)) {
        case 0x1e02:
        case 0x1e03:
            uVar1 = FUN_140876710(param_1,uVar1,*(undefined4 *)(param_2 + 0x44));
            return uVar1;
        case 0x1e04:
        case 0x1e05:
            FUN_1408764b0(param_1,uVar1,*(undefined4 *)(param_2 + 0x44));
            return 1;
        case 0x1e08:
        case 0x1e09:
            FUN_1408765a0(param_1,uVar1,*(undefined4 *)(param_2 + 0x44));
    }
    return 1;
}



undefined8 * FUN_1408768f0(undefined8 *param_1)

{
    FUN_1408555e0();
    *param_1 = &PTR_FUN_1409a6a70;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    return param_1;
}



void FUN_140876920(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a6a70;
    if (param_1[8] != 0) {
        param_1[9] = param_1[8];
        FUN_140881720(DAT_140c10f20);
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 10) = 0;
    }
    FUN_140855630(param_1);
    return;
}



undefined8 * FUN_140876970(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6a70;
    if (param_1[8] != 0) {
        param_1[9] = param_1[8];
        FUN_140881720(DAT_140c10f20);
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 10) = 0;
    }
    FUN_140855630(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_1408769e0(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    char cVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    char cStackX20;

    puVar1 = *(undefined8 **)(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar4 = puVar1;
    if (puVar1 != puVar2) {
        cStackX20 = (char)((ulonglong)param_2 >> 0x20);
        do {
            if (((int)param_2 == *(int *)puVar4) && (cStackX20 == *(char *)((longlong)puVar4 + 4))) break;
            puVar4 = puVar4 + 1;
        } while (puVar4 != puVar2);
    }
    puVar5 = (undefined8 *)0x0;
    puVar7 = puVar5;
    if (puVar4 != puVar2) {
        puVar7 = puVar4;
    }
    if (puVar7 == (undefined8 *)0x0) {
        uVar6 = (longlong)puVar2 - (longlong)puVar1 >> 3 & 0xffffffff;
        if (((uVar6 < *(uint *)(param_1 + 0x50)) ||
             (cVar3 = FUN_140892ef0(param_1 + 0x40,4), cVar3 != '\0')) &&
            (uVar6 < *(uint *)(param_1 + 0x50))) {
            puVar5 = *(undefined8 **)(param_1 + 0x48);
            *(undefined8 **)(param_1 + 0x48) = puVar5 + 1;
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = param_2;
            }
        }
        return 2 - (uint)(puVar5 != (undefined8 *)0x0);
    }
    return 1;
}



void FUN_140876ac0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar2 = *(undefined8 **)(param_1 + 0x40);
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != puVar3) {
        do {
            if (((int)param_2 == *(int *)puVar2) &&
                ((char)((ulonglong)param_2 >> 0x20) == *(char *)((longlong)puVar2 + 4))) break;
            puVar2 = puVar2 + 1;
        } while (puVar2 != puVar3);
        if (puVar2 != puVar3) {
            if (puVar2 < puVar3 + -1) {
                lVar1 = ((ulonglong)((longlong)(puVar3 + -1) + (-1 - (longlong)puVar2)) >> 3) + 1;
                puVar3 = puVar2;
                for (; puVar2 = puVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
                    *puVar3 = *puVar2;
                    puVar3 = puVar3 + 1;
                }
            }
            *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -8;
        }
    }
    return;
}



undefined8 FUN_140876b30(longlong param_1,uint **param_2)

{
    char cVar1;
    uint uVar2;
    uint *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uStackX12;

    uVar2 = **param_2;
    *param_2 = *param_2 + 1;
    if (uVar2 != 0) {
        lVar5 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 << 3);
        *(longlong *)(param_1 + 0x40) = lVar5;
        *(longlong *)(param_1 + 0x48) = lVar5;
        if (lVar5 == 0) {
            return 2;
        }
        *(uint *)(param_1 + 0x50) = uVar2;
        if (uVar2 != 0) {
            uVar8 = (ulonglong)uVar2;
            do {
                puVar3 = *param_2;
                uVar2 = *puVar3;
                *param_2 = puVar3 + 1;
                cVar1 = *(char *)(puVar3 + 1);
                *param_2 = (uint *)((longlong)puVar3 + 5);
                uStackX12 = uStackX12 & 0xffffff00 | (uint)(cVar1 != '\0');
                uVar11 = *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3 & 0xffffffff;
                if (uVar11 < *(uint *)(param_1 + 0x50)) {
                    LAB_140876c55:
                    if (uVar11 < *(uint *)(param_1 + 0x50)) {
                        puVar4 = *(undefined8 **)(param_1 + 0x48);
                        *(undefined8 **)(param_1 + 0x48) = puVar4 + 1;
                        if (puVar4 != (undefined8 *)0x0) {
                            *puVar4 = CONCAT44(uStackX12,uVar2);
                        }
                    }
                }
                else {
                    uVar10 = *(uint *)(param_1 + 0x50) + 4;
                    lVar5 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar10 << 3);
                    if (lVar5 != 0) {
                        uVar6 = *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3;
                        uVar9 = uVar6 & 0xffffffff;
                        if (*(longlong *)(param_1 + 0x40) != 0) {
                            uVar7 = 0;
                            if ((int)uVar6 != 0) {
                                do {
                                    uVar7 = uVar7 + 1;
                                    *(undefined8 *)(lVar5 + -8 + uVar7 * 8) =
                                            *(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8 + uVar7 * 8);
                                } while (uVar7 < uVar9);
                            }
                            FUN_140881720();
                        }
                        *(longlong *)(param_1 + 0x40) = lVar5;
                        *(uint *)(param_1 + 0x50) = uVar10;
                        *(ulonglong *)(param_1 + 0x48) = lVar5 + uVar9 * 8;
                        goto LAB_140876c55;
                    }
                }
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
    }
    return 1;
}



undefined8 * FUN_140876cb0(undefined8 *param_1)

{
    FUN_1408768f0();
    *param_1 = &PTR_LAB_1409a6ae0;
    *(undefined *)(param_1 + 0xb) = 0;
    return param_1;
}



void FUN_140876ce0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a6ae0;
    FUN_140876920();
    return;
}



void FUN_140876d30(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined4 local_48 [2];
    longlong local_40;
    undefined4 local_38;
    undefined4 local_34;
    uint local_30;
    undefined local_2c;
    undefined local_2b;
    undefined local_2a;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x2b88));
    uVar5 = 0;
    lVar6 = *(longlong *)(lVar1 + 0x2bb0);
    while (lVar6 == 0) {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (0xc0 < uVar4) goto joined_r0x000140876d9c;
        lVar6 = *(longlong *)(lVar1 + 0x2bb0 + uVar5 * 8);
    }
    LAB_140876da0:
    do {
        do {
            FUN_140839850(lVar6,param_2,param_3);
            lVar6 = *(longlong *)(lVar6 + 0x10);
        } while (lVar6 != 0);
        do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            if (0xc0 < uVar4) goto joined_r0x000140876d9c;
            lVar6 = *(longlong *)(lVar1 + 0x2bb0 + uVar5 * 8);
        } while (lVar6 == 0);
    } while( true );
    joined_r0x000140876d9c:
    if (lVar6 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x2b88));
        plVar2 = (longlong *)FUN_14085a9a0();
        if (plVar2 != (longlong *)0x0) {
            local_2a = *(undefined *)(param_1 + 0x58);
            local_2c = 0;
            local_30 = *(byte *)(param_1 + 0x3e) & 0x1f;
            local_48[0] = param_2;
            local_40 = param_3;
            local_38 = param_4;
            local_34 = FUN_140855a70(param_1);
            local_2b = local_40 == 0;
            (**(code **)(*plVar2 + 0x80))(plVar2,local_48);
            plVar3 = (longlong *)FUN_14086f180();
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x80))(plVar3,local_48);
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        return;
    }
    goto LAB_140876da0;
}



void FUN_140876ea0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 local_38 [2];
    longlong local_30;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    uint local_18;
    undefined local_14;
    undefined local_13;

    plVar1 = (longlong *)FUN_14085a9a0();
    if (plVar1 != (longlong *)0x0) {
        local_13 = *(undefined *)(param_1 + 0x58);
        local_30 = param_1 + 0x40;
        local_14 = 0;
        local_18 = *(byte *)(param_1 + 0x3e) & 0x1f;
        local_38[0] = param_2;
        local_28 = param_3;
        local_20 = param_4;
        local_1c = FUN_140855a70(param_1);
        (**(code **)(*plVar1 + 0x88))(plVar1,local_38);
        plVar2 = (longlong *)FUN_14086f180();
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x88))(plVar2,local_38);
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    return;
}



undefined4 FUN_140876f80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
    undefined4 uVar1;
    longlong *plVar2;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    uint local_20;
    undefined2 local_1c;
    undefined local_1a;

    plVar2 = (longlong *)FUN_140855940();
    if (plVar2 == (longlong *)0x0) {
        uVar1 = 0xf;
    }
    else {
        local_1a = *(undefined *)(param_1 + 0x58);
        local_20 = *(byte *)(param_1 + 0x3e) & 0x1f;
        local_1c = 0;
        local_38[0] = param_2;
        local_30 = param_3;
        local_28 = param_4;
        local_24 = FUN_140855a70(param_1);
        uVar1 = (**(code **)(*plVar2 + 0x80))(plVar2,local_38);
        (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return uVar1;
}



undefined8 FUN_140877030(longlong param_1,undefined8 param_2)

{
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 1;
}



undefined8 FUN_140877050(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x10),param_1);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    return 1;
}



void FUN_140877090(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   ulonglong param_5,undefined8 param_6,char param_7)

{
    float fVar1;
    float fVar2;

    fVar1 = (float)FUN_14085a7d0(*(undefined8 *)(param_4 + 8));
    *(undefined4 *)(param_4 + 0x18) = param_3;
    fVar2 = (float)FUN_14085a7d0(*(undefined8 *)(param_4 + 8),param_5 & 0xffffffff);
    fVar2 = fVar2 - fVar1;
    if (param_7 != '\0') {
        FUN_140859ac0(*(undefined8 *)(param_4 + 8));
        *(undefined8 *)(param_4 + 0x10) = 0;
    }
    if (fVar2 != 0.0) {
        (**(code **)(**(longlong **)(param_4 + 8) + 0xb0))
                (0,param_2,fVar2,*(longlong **)(param_4 + 8),(&DAT_1409a3530)[param_5],param_6,0,0);
    }
    return;
}



undefined8 * FUN_140877140(undefined8 *param_1)

{
    FUN_1408555e0();
    *param_1 = &PTR_FUN_1409a6b50;
    return param_1;
}



undefined8 * FUN_140877170(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6b50;
    FUN_140855630();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_1408771b0(void)

{
    longlong *plVar1;

    plVar1 = (longlong *)FUN_140855940();
    if (plVar1 != (longlong *)0x0) {
        FUN_140859e10(plVar1);
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_1408771e0(void)

{
    if ((DAT_140c628b0 & 1) == 0) {
        DAT_140c628b0 = DAT_140c628b0 | 1;
        _DAT_140c628a8 = 0;
        FUN_1407dd89c(&DAT_140957b20);
    }
    return &DAT_140c628a8;
}



undefined8 FUN_140877220(longlong param_1,undefined8 param_2,int param_3)

{
    undefined8 uVar1;

    if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
        return 2;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    if ((int)uVar1 == 1) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    }
    return uVar1;
}



void FUN_140877260(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                   undefined2 param_6)

{
    uint uVar1;

    *(short *)((longlong)param_1 + 0x16) = (short)param_3;
    *(undefined2 *)(param_1 + 5) = param_6;
    *param_1 = 0x46464952;
    param_1[1] = 0xffffffff;
    param_1[2] = 0x45564157;
    uVar1 = (uint)(param_3 * param_5) >> 3;
    param_1[3] = 0x20746d66;
    param_1[4] = 0x12;
    param_1[6] = param_4;
    *(short *)((longlong)param_1 + 0x22) = (short)param_5;
    *(short *)(param_1 + 8) = (short)uVar1;
    *(undefined4 *)((longlong)param_1 + 0x26) = 0x61746164;
    *(undefined4 *)((longlong)param_1 + 0x2a) = 0xffffffff;
    param_1[7] = uVar1 * param_4;
    *(undefined2 *)(param_1 + 9) = 0;
    // WARNING: Could not recover jumptable at 0x0001408772e4. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)**(undefined8 **)(param_1 + 0xe))(*(undefined8 **)(param_1 + 0xe),param_2,param_1);
    return;
}



undefined8 *
FUN_1408772f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;

    if (*param_1 == 0) {
        lVar2 = FUN_14087fa40();
        *param_1 = lVar2;
    }
    plVar3 = (longlong *)(***(code ***)*param_1)();
    if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x40);
        if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar4 + 6) = 0;
            puVar4[7] = plVar3;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            *(undefined4 *)(puVar4 + 5) = 0;
            *(undefined2 *)((longlong)puVar4 + 0x2c) = 0;
            iVar1 = FUN_140877260(puVar4,param_2,param_3,param_4,param_5,param_6);
            if (iVar1 == 1) {
                return puVar4;
            }
            FUN_140881720(DAT_140c10f20,puVar4);
            (**(code **)(*plVar3 + 0x18))(plVar3);
            return (undefined8 *)0x0;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    return (undefined8 *)0x0;
}



undefined4 FUN_1408773f0(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 == (longlong *)0x0) {
        return 1;
    }
    *(int *)(param_1 + 0x2a) = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 0x30) + 0x26;
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_140881720(DAT_140c10f20,param_1);
    return uVar2;
}



undefined8 * FUN_140877460(undefined8 *param_1)

{
    FUN_14085c9d0();
    *param_1 = &PTR_FUN_1409a6bc0;
    DAT_140c628b8 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    *(undefined *)((longlong)param_1 + 0x42) = 0;
    return param_1;
}



undefined8 FUN_1408774a0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    undefined8 uVar3;
    uint uVar4;
    ushort uVar5;
    short sVar6;
    uint uVar7;
    undefined4 local_res8 [2];
    uint local_res10 [2];
    longlong *local_res18;
    undefined8 local_res20;
    undefined4 *puVar8;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    ulonglong local_50;
    undefined8 *local_48;
    undefined8 local_40;
    undefined8 local_38;

    local_40 = 0;
    local_38 = 0;
    local_58 = 0x1000000000028;
    if (DAT_140c61ca8 != '\0') {
        local_58 = 0x1800000000028;
    }
    uVar5 = 0;
    local_48 = &local_80;
    uVar1 = *(uint *)(param_1 + 0x10);
    for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar5 = uVar5 + 1;
    }
    uVar4 = (uint)DAT_140c61c98;
    *(ushort *)(param_1 + 0x40) = uVar5 * 2;
    sVar6 = 0;
    uVar7 = uVar4 * uVar5 * 0x800;
    local_50 = (ulonglong)uVar7;
    local_68 = 0;
    local_60 = 0;
    for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        sVar6 = sVar6 + 1;
    }
    local_78 = CONCAT44(CONCAT22(0x10,sVar6 * 2),(uint)(ushort)(sVar6 * 2) * DAT_140c110b4);
    if (uVar1 == 3) {
        local_70 = 0;
        local_80 = CONCAT62(CONCAT42(DAT_140c110b4,sVar6),1);
    }
    else {
        local_70 = CONCAT44(uVar1,0x100016);
        local_80 = CONCAT62(CONCAT42(DAT_140c110b4,sVar6),0xfffe);
        local_68 = 0x10000000000001;
        local_60 = 0x719b3800aa000080;
    }
    *(uint *)(param_1 + 0x28) = uVar7;
    *(uint *)(param_1 + 0x30) = uVar7;
    local_res18 = (longlong *)0x0;
    local_res20 = 0;
    local_88 = 0;
    uVar3 = (**(code **)(*DAT_140c628b8 + 0x18))(DAT_140c628b8,&local_58,&local_res18,0);
    if (-1 < (int)uVar3) {
        iVar2 = (**(code **)*local_res18)(local_res18,&DAT_140964760,param_1 + 0x20);
        if (-1 < iVar2) {
            puVar8 = local_res8;
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),0,*(undefined4 *)(param_1 + 0x28),
                     &local_res20,puVar8,&local_88,local_res10,1);
            if (-1 < iVar2) {
                FUN_1407e4830(local_res20,0,local_res8[0]);
                iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x98))
                        (*(longlong **)(param_1 + 0x20),local_res20,local_res8[0],local_88,
                         (ulonglong)puVar8 & 0xffffffff00000000 | (ulonglong)local_res10[0]);
                if (-1 < iVar2) {
                    (**(code **)(*local_res18 + 0x10))();
                    return 0;
                }
            }
        }
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
            *(undefined8 *)(param_1 + 0x20) = 0;
        }
        if (local_res18 != (longlong *)0x0) {
            (**(code **)(*local_res18 + 0x10))();
        }
        uVar3 = 0x80004005;
    }
    return uVar3;
}



void FUN_1408776d0(longlong param_1,float **param_2,longlong param_3)

{
    float fVar1;
    undefined (*pauVar2) [16];
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float *pfVar9;
    undefined (*pauVar10) [16];
    float *pfVar11;
    int iVar12;
    undefined (*pauVar13) [16];
    undefined2 *puVar14;
    float *pfVar15;
    uint uVar16;
    uint uVar18;
    ulonglong uVar19;
    int iVar20;
    uint uVar21;
    int iVar22;
    float fVar23;
    undefined auVar24 [16];
    ulonglong uVar17;

    uVar19 = 0;
    uVar16 = 0;
    uVar17 = uVar19;
    for (uVar21 = *(uint *)(param_1 + 0x10); uVar21 != 0; uVar21 = uVar21 & uVar21 - 1) {
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
    }
    uVar21 = *(uint *)(param_2 + 1);
    pfVar15 = *param_2;
    pauVar2 = *(undefined (**) [16])(param_3 + 8);
    if (uVar21 == *(uint *)(param_1 + 0x10)) {
        if (pfVar15 < pfVar15 + (int)(uVar16 * 0x400)) {
            pauVar10 = pauVar2;
            pfVar11 = pfVar15 + 0xc;
            do {
                fVar1 = pfVar11[-4];
                fVar23 = pfVar11[-3];
                fVar3 = pfVar11[-2];
                fVar4 = pfVar11[-1];
                pfVar9 = pfVar11 + 4;
                fVar5 = *pfVar11;
                fVar6 = pfVar11[1];
                fVar7 = pfVar11[2];
                fVar8 = pfVar11[3];
                auVar24 = packssdw(CONCAT412((int)(pfVar11[-9] * 32767.0),
                                             CONCAT48((int)(pfVar11[-10] * 32767.0),
                                                      CONCAT44((int)(pfVar11[-0xb] * 32767.0),
                                                               (int)(pfVar11[-0xc] * 32767.0)))),
                                   CONCAT412((int)(pfVar11[-5] * 32767.0),
                                             CONCAT48((int)(pfVar11[-6] * 32767.0),
                                                      CONCAT44((int)(pfVar11[-7] * 32767.0),
                                                               (int)(pfVar11[-8] * 32767.0)))));
                *pauVar10 = auVar24;
                auVar24 = packssdw(CONCAT412((int)(fVar4 * 32767.0),
                                             CONCAT48((int)(fVar3 * 32767.0),
                                                      CONCAT44((int)(fVar23 * 32767.0),
                                                               (int)(fVar1 * 32767.0)))),
                                   CONCAT412((int)(fVar8 * 32767.0),
                                             CONCAT48((int)(fVar7 * 32767.0),
                                                      CONCAT44((int)(fVar6 * 32767.0),(int)(fVar5 * 32767.0)
                                                      ))));
                pauVar10[1] = auVar24;
                pauVar10 = pauVar10[2];
                pfVar11 = pfVar11 + 0x10;
            } while (pfVar9 < pfVar15 + (int)(uVar16 * 0x400));
        }
    }
    else {
        for (; uVar18 = (uint)uVar19, uVar21 != 0; uVar21 = uVar21 & uVar21 - 1) {
            uVar19 = (ulonglong)(uVar18 + 1);
        }
        if (uVar18 < uVar16) {
            FUN_1407e4830(pauVar2,0);
            if (uVar18 != 0) {
                pauVar10 = pauVar2;
                do {
                    iVar20 = 0x400;
                    pfVar11 = pfVar15;
                    pauVar13 = pauVar10;
                    do {
                        fVar1 = *pfVar11;
                        fVar23 = 1.0;
                        if ((fVar1 <= 1.0) && (fVar23 = fVar1, fVar1 < -1.0)) {
                            fVar23 = -1.0;
                        }
                        pfVar11 = pfVar11 + (int)uVar18;
                        *(short *)*pauVar13 = (short)(longlong)(fVar23 * 32767.0);
                        pauVar13 = (undefined (*) [16])(*pauVar13 + (longlong)(int)uVar16 * 2);
                        iVar20 = iVar20 + -1;
                    } while (iVar20 != 0);
                    pfVar15 = pfVar15 + 1;
                    pauVar10 = (undefined (*) [16])(*pauVar10 + 2);
                    uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
            }
        }
        else {
            iVar22 = 0x400;
            pfVar11 = pfVar15 + 1;
            iVar12 = 0x400;
            iVar20 = 0x400;
            pfVar9 = pfVar15;
            do {
                *pfVar9 = pfVar9[2] * 0.707 + *pfVar9;
                pfVar9 = pfVar9 + (int)uVar18;
                iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
            pfVar9 = pfVar11;
            do {
                *pfVar9 = *(float *)((longlong)pfVar15 + (8 - (longlong)pfVar11) + (longlong)pfVar9) * 0.707
                          + *pfVar9;
                pfVar9 = pfVar9 + (int)uVar18;
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            iVar12 = 0x400;
            iVar20 = 0x400;
            pfVar9 = pfVar15;
            do {
                *pfVar9 = pfVar9[4] * 0.707 + *pfVar9;
                pfVar9 = pfVar9 + (int)uVar18;
                iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
            pfVar9 = pfVar11;
            iVar20 = iVar12;
            do {
                *pfVar9 = *(float *)((longlong)pfVar9 + (longlong)pfVar15 + (0x14 - (longlong)pfVar11)) *
                          0.707 + *pfVar9;
                pfVar9 = pfVar9 + (int)uVar18;
                iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
            pauVar10 = pauVar2;
            do {
                fVar1 = *pfVar15;
                fVar23 = 1.0;
                if ((fVar1 <= 1.0) && (fVar23 = fVar1, fVar1 < -1.0)) {
                    fVar23 = -1.0;
                }
                pfVar15 = pfVar15 + (int)uVar18;
                *(short *)*pauVar10 = (short)(longlong)(fVar23 * 32767.0);
                pauVar10 = (undefined (*) [16])(*pauVar10 + (longlong)(int)uVar16 * 2);
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            puVar14 = (undefined2 *)(*pauVar2 + 2);
            do {
                fVar1 = *pfVar11;
                fVar23 = 1.0;
                if ((fVar1 <= 1.0) && (fVar23 = fVar1, fVar1 < -1.0)) {
                    fVar23 = -1.0;
                }
                pfVar11 = pfVar11 + (int)uVar18;
                *puVar14 = (short)(longlong)(fVar23 * 32767.0);
                puVar14 = puVar14 + (int)uVar16;
                iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
        }
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_140877220(*(longlong *)(param_1 + 8),pauVar2,uVar16 * 0x800);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar16 * 0x800;
    uVar21 = *(uint *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c)) {
        uVar21 = 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar21;
    return;
}



undefined8 FUN_1408779f0(void)

{
    int iVar1;
    char cVar2;
    undefined4 local_res10 [6];

    local_res10[0] = 0;
    iVar1 = (**(code **)(*DAT_140c628b8 + 0x40))(DAT_140c628b8,local_res10);
    if (-1 < iVar1) {
        cVar2 = (char)local_res10[0];
        if (cVar2 == '\0') {
            return 0x63f;
        }
        if ((cVar2 == '\x03') || ((byte)(cVar2 - 5U) < 5)) {
            return 0x3f;
        }
    }
    return 3;
}



undefined8 FUN_140877a60(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    undefined uVar5;
    int iVar6;
    undefined8 uVar7;
    uint uVar8;

    uVar1 = *(uint *)(param_1 + 0x38);
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
    if (iVar6 == 0) {
        uVar8 = *(uint *)(param_1 + 0x28);
        uVar2 = *(uint *)(param_1 + 0x2c);
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar4 = *(uint *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x30) = uVar8 - uVar2;
        if (uVar3 + uVar4 != 0) {
            if ((((uVar1 < uVar2) && (uVar2 < uVar3)) || ((uVar3 < uVar1 && (uVar1 < uVar2)))) ||
                ((uVar2 < uVar3 && (uVar3 < uVar1)))) {
                uVar5 = 1;
            }
            else {
                uVar5 = 0;
            }
            *(undefined *)(param_1 + 0x42) = uVar5;
            if (uVar4 < uVar2) {
                uVar8 = (uVar8 - uVar2) + uVar4;
            }
            else {
                uVar8 = uVar4 - uVar2;
            }
        }
        *param_2 = uVar8 / *(ushort *)(param_1 + 0x40);
        uVar7 = 1;
    }
    else {
        uVar7 = 2;
    }
    return uVar7;
}



int FUN_140877b40(longlong param_1,undefined8 *param_2)

{
    HRESULT HVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    HVar1 = CoCreateInstance((IID *)&DAT_140964730,(LPUNKNOWN)0x0,1,(IID *)&DAT_140964740,
                             &DAT_140c628b8);
    if (-1 < HVar1) {
        iVar2 = (**(code **)(*DAT_140c628b8 + 0x50))(DAT_140c628b8,0);
        if (-1 < iVar2) {
            iVar2 = (**(code **)(*DAT_140c628b8 + 0x30))(DAT_140c628b8,*param_2,2);
            if (-1 < iVar2) {
                local_30 = 0;
                local_28 = 0;
                local_20 = 0;
                local_18 = 0;
                local_38 = 0x100000028;
                iVar2 = (**(code **)(*DAT_140c628b8 + 0x18))(DAT_140c628b8,&local_38,param_1 + 0x18,0);
                if (-1 < iVar2) {
                    iVar2 = *(int *)((longlong)param_2 + 0x34);
                    *(int *)(param_1 + 0x10) = iVar2;
                    if (iVar2 == 0) {
                        uVar3 = FUN_1408779f0();
                        *(undefined4 *)(param_1 + 0x10) = uVar3;
                    }
                    iVar2 = *(int *)(param_1 + 0x10);
                    if (((iVar2 != 0x63f) && (iVar2 != 0x3f)) && (iVar2 != 3)) {
                        *(undefined4 *)(param_1 + 0x10) = 3;
                    }
                    iVar4 = FUN_140877f70(param_1);
                    iVar2 = 1;
                    if (iVar4 != 1) {
                        iVar2 = iVar4;
                    }
                    return iVar2;
                }
            }
        }
    }
    return 2;
}



undefined8 FUN_140877c60(longlong param_1,uint *param_2)

{
    undefined8 uVar1;

    uVar1 = FUN_140877a60(param_1,(uint *)(param_1 + 0x34));
    if ((int)uVar1 == 1) {
        *param_2 = *(uint *)(param_1 + 0x34) >> 10;
        uVar1 = 1;
    }
    return uVar1;
}



int FUN_140877cb0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    ulonglong *puVar5;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    ulonglong local_18 [2];

    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 == (longlong *)0x0) {
        return 2;
    }
    iVar4 = 1;
    if (*(short *)(param_2 + 0x12) != 0) {
        iVar4 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18[0] = 0;
        for (uVar2 = *(uint *)(param_1 + 0x10); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
            iVar4 = iVar4 + 1;
        }
        local_38 = CONCAT44(iVar4 << 0xb,*(undefined4 *)(param_1 + 0x2c));
        puVar5 = &local_28;
        iVar3 = (**(code **)(*plVar1 + 0x58))
                (plVar1,*(undefined4 *)(param_1 + 0x2c),iVar4 << 0xb,&local_30,puVar5,
                 &local_20,local_18,0);
        iVar4 = 1;
        if (iVar3 < 0) {
            iVar4 = 2;
        }
        if (iVar4 == 1) {
            FUN_1408776d0(param_1,param_2,&local_38);
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x98))
                    (*(longlong **)(param_1 + 0x20),local_30,local_28 & 0xffffffff,local_20,
                     (ulonglong)puVar5 & 0xffffffff00000000 | local_18[0] & 0xffffffff);
            if (iVar3 < 0) {
                iVar4 = 2;
            }
        }
    }
    return iVar4;
}



int FUN_140877de0(longlong param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    ulonglong *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;

    if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
        return 2;
    }
    iVar3 = 1;
    if (param_2 != 0) {
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_18._4_4_ = 0;
        puVar6 = &local_18;
        puVar5 = &local_20;
        uVar7 = CONCAT44((uint)*(ushort *)(param_1 + 0x40) * param_2,*(undefined4 *)(param_1 + 0x2c));
        puVar4 = &local_28;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))();
        iVar3 = 1;
        if (iVar2 < 0) {
            iVar3 = 2;
        }
        if (iVar3 == 1) {
            param_2 = (uint)*(ushort *)(param_1 + 0x40) * param_2;
            FUN_1407e4830(0,0,param_2);
            if (*(longlong *)(param_1 + 8) != 0) {
                FUN_140877220(*(longlong *)(param_1 + 8),0,param_2);
            }
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_2;
            iVar3 = 1;
            uVar1 = *(uint *)(param_1 + 0x2c);
            if (*(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c)) {
                uVar1 = 0;
            }
            *(uint *)(param_1 + 0x2c) = uVar1;
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x98))
                    (*(longlong **)(param_1 + 0x20),0,local_28 & 0xffffffff,local_20,
                     (ulonglong)puVar4 & 0xffffffff00000000 | local_18 & 0xffffffff,puVar5,
                     puVar6,local_18._4_4_,uVar7);
            if (iVar2 < 0) {
                iVar3 = 2;
            }
        }
    }
    return iVar3;
}



char FUN_140877f30(longlong param_1)

{
    int iVar1;

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
            (*(longlong **)(param_1 + 0x20),0,0,1);
    return (iVar1 != 0) + '\x01';
}



undefined8 FUN_140877f70(longlong param_1)

{
    uint uVar1;
    int iVar2;

    do {
        for (uVar1 = *(uint *)(param_1 + 0x10); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))();
        for (uVar1 = *(uint *)(param_1 + 0x10); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))();
        if (((-1 < iVar2) &&
             (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))(), -1 < iVar2)) &&
            (iVar2 = FUN_1408774a0(), -1 < iVar2)) {
            return 1;
        }
        if (*(int *)(param_1 + 0x10) == 0x3f) {
            *(undefined4 *)(param_1 + 0x10) = 3;
        }
        else {
            if (*(int *)(param_1 + 0x10) != 0x63f) {
                return 2;
            }
            *(undefined4 *)(param_1 + 0x10) = 0x3f;
        }
    } while (iVar2 < 0);
    return 1;
}



void FUN_1408780e0(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))();
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (DAT_140c628b8 != (longlong *)0x0) {
        (**(code **)(*DAT_140c628b8 + 0x10))();
        DAT_140c628b8 = (longlong *)0x0;
    }
    FUN_14085ce40(param_1);
    return;
}



undefined8 * FUN_140878140(undefined8 *param_1)

{
    FUN_14085c9d0();
    *param_1 = &PTR_FUN_1409a6c50;
    param_1[3] = &PTR_FUN_1409a6cc0;
    param_1[8] = 0;
    *(undefined2 *)((longlong)param_1 + 0x94) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined *)((longlong)param_1 + 0x96) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    return param_1;
}



undefined8 * FUN_1408781c0(undefined8 *param_1,byte param_2)

{
    param_1[3] = &PTR_FUN_1409a6cc0;
    *param_1 = &PTR_FUN_1409a4260;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 FUN_140878210(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    uint uVar5;
    undefined local_438 [1030];
    ushort local_32;

    iVar1 = FUN_140878910(param_1 + 0x28,0,0xffffffff);
    if (iVar1 != 0) {
        return 2;
    }
    iVar1 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
            (*(longlong **)(param_1 + 0x28),param_1 + 0x30,0,DAT_140c110b4,0,0,0);
    if (iVar2 < 0) {
        LAB_140878297:
        uVar4 = 2;
    }
    else {
        iVar2 = *(int *)(param_2 + 0x34);
        *(int *)(param_1 + 0x10) = iVar2;
        if (iVar2 == 0) {
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                    (*(longlong **)(param_1 + 0x28),0,local_438);
            if (iVar2 < 0) goto LAB_140878297;
            uVar3 = 3;
            if (3 < local_32) {
                uVar3 = 0x3f;
            }
            *(undefined4 *)(param_1 + 0x10) = uVar3;
        }
        for (uVar5 = *(uint *)(param_1 + 0x10); uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
            iVar1 = iVar1 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar1;
        uVar4 = 1;
    }
    return uVar4;
}



void FUN_140878340(longlong param_1)

{
    short sVar1;
    undefined local_58 [8];
    uint local_50;
    longlong local_4c;
    undefined4 local_40;
    int local_3c;
    undefined8 local_38;

    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_58);
    if (local_50 < DAT_140c61c98) {
        if ((local_50 == 0) && (local_4c != 0)) {
            *(undefined *)(param_1 + 0x7e) = 1;
        }
        if (*(uint *)(param_1 + 0x78) != local_50) {
            do {
                local_40 = 0;
                FUN_1407e4830(&local_3c,0,0x28);
                local_3c = (uint)*(ushort *)(param_1 + 0x7c) << 10;
                local_38 = *(undefined8 *)(param_1 + 0x38 + (ulonglong)*(ushort *)(param_1 + 0x32) * 8);
                sVar1 = *(ushort *)(param_1 + 0x32) + 1;
                *(short *)(param_1 + 0x32) = sVar1;
                if (sVar1 == 8) {
                    *(undefined2 *)(param_1 + 0x32) = 0;
                }
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa8))();
                local_50 = local_50 + 1;
            } while (*(uint *)(param_1 + 0x78) != local_50);
        }
        if (local_50 < DAT_140c61c98) {
            FUN_140856280(DAT_140c61b68 + 0xd0);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140878430(longlong param_1,undefined (**param_2) [16])

{
    float *pfVar1;
    ushort uVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined auVar12 [16];
    short sVar13;
    undefined (*pauVar14) [16];
    undefined (*pauVar15) [16];
    ulonglong uVar16;
    float *pfVar17;
    longlong lVar18;
    float *pfVar19;
    int iVar20;
    undefined (*pauVar21) [16];
    undefined auVar22 [16];
    undefined auVar23 [16];
    undefined8 auStack48 [5];

    uVar2 = *(ushort *)((longlong)param_2 + 0x12);
    pfVar19 = *(float **)(param_1 + 0x50 + (ulonglong)*(ushort *)(param_1 + 0x48) * 8);
    sVar13 = *(ushort *)(param_1 + 0x48) + 1;
    *(short *)(param_1 + 0x48) = sVar13;
    if (sVar13 == 8) {
        *(undefined2 *)(param_1 + 0x48) = 0;
    }
    auVar12 = _DAT_1409a6c30;
    auVar23 = _DAT_1409a6c20;
    pauVar21 = *param_2;
    iVar20 = *(int *)(param_1 + 0x20) * (uint)uVar2;
    lVar18 = (longlong)iVar20;
    if (pauVar21 < (undefined (*) [16])(*pauVar21 + lVar18 * 4)) {
        pauVar14 = pauVar21;
        do {
            pauVar15 = pauVar14[1];
            auVar22 = minps(auVar12,*pauVar14);
            auVar22 = maxps(auVar23,auVar22);
            *(undefined (*) [16])((longlong)pfVar19 + (-0x10 - (longlong)pauVar21) + (longlong)pauVar15) =
                    auVar22;
            pauVar14 = pauVar15;
        } while (pauVar15 < (undefined (*) [16])(*pauVar21 + lVar18 * 4));
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        uVar16 = lVar18 * 2 + 0xf;
        if (uVar16 <= (ulonglong)(lVar18 * 2)) {
            uVar16 = 0xffffffffffffff0;
        }
        uVar16 = uVar16 & 0xfffffffffffffff0;
        auStack48[0] = 0x1408784da;
        FUN_1407f0f60();
        if (pfVar19 < pfVar19 + lVar18) {
            pfVar17 = pfVar19 + 0xc;
            pauVar21 = (undefined (*) [16])(&stack0xfffffffffffffff8 + -uVar16);
            do {
                fVar4 = pfVar17[-4];
                fVar5 = pfVar17[-3];
                fVar6 = pfVar17[-2];
                fVar7 = pfVar17[-1];
                fVar8 = *pfVar17;
                fVar9 = pfVar17[1];
                fVar10 = pfVar17[2];
                fVar11 = pfVar17[3];
                auVar23 = packssdw(CONCAT412((int)(pfVar17[-9] * 32767.0),
                                             CONCAT48((int)(pfVar17[-10] * 32767.0),
                                                      CONCAT44((int)(pfVar17[-0xb] * 32767.0),
                                                               (int)(pfVar17[-0xc] * 32767.0)))),
                                   CONCAT412((int)(pfVar17[-5] * 32767.0),
                                             CONCAT48((int)(pfVar17[-6] * 32767.0),
                                                      CONCAT44((int)(pfVar17[-7] * 32767.0),
                                                               (int)(pfVar17[-8] * 32767.0)))));
                pfVar1 = pfVar17 + 4;
                *pauVar21 = auVar23;
                auVar23 = packssdw(CONCAT412((int)(fVar7 * 32767.0),
                                             CONCAT48((int)(fVar6 * 32767.0),
                                                      CONCAT44((int)(fVar5 * 32767.0),(int)(fVar4 * 32767.0)
                                                      ))),
                                   CONCAT412((int)(fVar11 * 32767.0),
                                             CONCAT48((int)(fVar10 * 32767.0),
                                                      CONCAT44((int)(fVar9 * 32767.0),(int)(fVar8 * 32767.0)
                                                      ))));
                pauVar21[1] = auVar23;
                pfVar17 = pfVar17 + 0x10;
                pauVar21 = pauVar21[2];
            } while (pfVar1 < pfVar19 + lVar18);
        }
        uVar3 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)((longlong)auStack48 + -uVar16) = 0x14087855d;
        FUN_140877220(uVar3,(undefined (*) [16])(&stack0xfffffffffffffff8 + -uVar16),iVar20 * 2);
    }
    LOCK();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return 1;
}



undefined8 FUN_140878580(longlong param_1,int param_2)

{
    int iVar1;
    undefined (*pauVar2) [16];
    short sVar3;
    ulonglong uVar4;
    undefined (*pauVar5) [16];
    undefined (*pauVar6) [16];

    pauVar2 = *(undefined (**) [16])(param_1 + 0x50 + (ulonglong)*(ushort *)(param_1 + 0x48) * 8);
    sVar3 = *(ushort *)(param_1 + 0x48) + 1;
    *(short *)(param_1 + 0x48) = sVar3;
    if (sVar3 == 8) {
        *(undefined2 *)(param_1 + 0x48) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (pauVar2 < (undefined (*) [16])(*pauVar2 + (longlong)(iVar1 * param_2) * 4)) {
        *pauVar2 = ZEXT816(0);
        pauVar5 = pauVar2;
        pauVar6 = pauVar2[1];
        for (uVar4 = (ulonglong)
                             ((longlong)(undefined (*) [16])(*pauVar2 + (longlong)(iVar1 * param_2) * 4) +
                              (-1 - (longlong)pauVar2)) >> 3 & 0x1ffffffffffffffe; uVar4 != 0; uVar4 = uVar4 - 1)
        {
            *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar5;
            pauVar5 = (undefined (*) [16])(*pauVar5 + 8);
            pauVar6 = (undefined (*) [16])(*pauVar6 + 8);
        }
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_140877220(*(longlong *)(param_1 + 8),pauVar2,
                      (int)((uint)*(ushort *)(param_1 + 0x94) * param_2) / 2);
    }
    LOCK();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return 1;
}



char FUN_140878630(longlong param_1)

{
    int iVar1;

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x98))(*(longlong **)(param_1 + 0x38),0,0);
    return (iVar1 < 0) + '\x01';
}



void FUN_140878840(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))();
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    return;
}



void FUN_1408788a0(longlong *param_1)

{
    (**(code **)(*param_1 + 0x68))();
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 0x90))();
        param_1[6] = 0;
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 0x10))();
        param_1[5] = 0;
    }
    if (param_1[8] != 0) {
        FUN_140881720(DAT_140c10f28);
        param_1[8] = 0;
    }
    FUN_14085ce40(param_1);
    return;
}



int FUN_140878910(longlong **param_1,uint param_2,undefined4 param_3)

{
    int iVar1;
    IID *rclsid;
    longlong *local_res20;

    rclsid = (IID *)&DAT_1409a4238;
    if ((param_2 & 1) != 0) {
        rclsid = (IID *)&DAT_1409a4228;
    }
    iVar1 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_1409a4248,&local_res20);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res20 + 0x28))(local_res20,param_2,param_3);
        if (-1 < iVar1) {
            *param_1 = local_res20;
            return iVar1;
        }
        (**(code **)(*local_res20 + 0x10))();
    }
    return iVar1;
}



undefined8 * FUN_1408789b0(undefined8 *param_1)

{
    FUN_14087ff30();
    *param_1 = &PTR_FUN_1409a6d00;
    return param_1;
}



undefined8 * FUN_1408789e0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6d00;
    FUN_14087ff90();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_140878a20(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    ushort uVar3;

    uVar3 = *(ushort *)(param_2 + 0x10);
    if (*(short *)(param_1 + 0x54) == 1) {
        uVar2 = *(uint *)(param_1 + 0x28);
    }
    else {
        uVar2 = *(int *)(param_1 + 0x3c) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (uVar2 < (uint)uVar3 + iVar1) {
        uVar3 = (short)uVar2 - (short)iVar1;
    }
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0xc4);
    FUN_1408803e0(param_1,(ulonglong)(iVar1 * (uVar2 >> 0x18 & 0x1f)) + *(longlong *)(param_1 + 0x58),
                  uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xc0),uVar2 & 0x3ffff,param_2)
            ;
    return;
}



int FUN_140878af0(longlong param_1)

{
    byte *pbVar1;
    longlong lVar2;
    undefined4 uVar3;

    uVar3 = FUN_1408801c0();
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x18);
    pbVar1 = (byte *)(lVar2 + 0x17f);
    *pbVar1 = *pbVar1 & 0xf1;
    *(undefined4 *)(lVar2 + 0x174) = 0;
    return 2 - (uint)(*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + 0x28));
}



int FUN_140878d00(longlong param_1,int param_2,char param_3)

{
    byte *pbVar1;
    longlong lVar2;
    undefined4 uVar3;

    if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x178);
    }
    else if ((param_3 != '\0') && (param_2 == 1)) {
        uVar3 = FUN_1408801c0();
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        lVar2 = *(longlong *)(param_1 + 0x18);
        pbVar1 = (byte *)(lVar2 + 0x17f);
        *pbVar1 = *pbVar1 & 0xf1;
        *(undefined4 *)(lVar2 + 0x174) = 0;
        return 2 - (uint)(*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + 0x28));
    }
    return 1;
}



undefined8 * FUN_140878d70(undefined8 *param_1)

{
    FUN_1408805b0();
    *param_1 = &PTR_FUN_1409a6db0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    return param_1;
}



undefined8 * FUN_140878db0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6db0;
    FUN_1408805f0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_140878df0(longlong param_1)

{
    *(undefined4 *)(param_1 + 0x8c) = 0;
    if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
    }
    FUN_1408806d0(param_1);
    return;
}



undefined8 FUN_140878e40(longlong *param_1,int param_2,int *param_3,int *param_4)

{
    ushort uVar1;

    *param_3 = param_2;
    uVar1 = (**(code **)(*param_1 + 0xc0))();
    *param_4 = (uint)uVar1 * param_2 + *(int *)((longlong)param_1 + 0x34);
    return 1;
}



float FUN_140879080(longlong *param_1,int *param_2)

{
    ushort uVar1;

    uVar1 = (**(code **)(*param_1 + 0xc0))();
    return (float)(ulonglong)((uint)uVar1 * *param_2) * 0.001;
}



int FUN_1408790b0(longlong *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    int local_res8 [2];

    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,local_res8);
    if (1 < iVar1 - 0x2dU) {
        if (iVar1 == 0x11) {
            iVar1 = 0x2d;
        }
        return iVar1;
    }
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    return ((uint)(local_res8[0] + param_2) < uVar2) + 0x2d;
}



undefined8 FUN_140879150(longlong param_1)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint *puVar9;
    uint *puVar10;
    uint *puVar11;
    int *piVar12;
    int *piVar13;
    undefined8 uVar14;
    float local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined local_3b;
    int local_38 [2];
    undefined8 local_30;
    short *local_20;

    uVar14 = 0;
    local_38[0] = 0;
    local_30 = 0;
    piVar13 = local_38;
    puVar1 = (uint *)(param_1 + 0x3c);
    puVar2 = (uint *)(param_1 + 0x38);
    puVar9 = puVar2;
    puVar10 = puVar1;
    puVar11 = (uint *)(param_1 + 0x30);
    piVar12 = (int *)(param_1 + 0x34);
    uVar5 = FUN_14087fc20();
    if ((int)uVar5 != 1) {
        return uVar5;
    }
    if (*local_20 == -2) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0xc0) =
                CONCAT44((((ushort)local_20[6] & 0x1f) << 6 | (ushort)local_20[7] & 0x3f) << 0x12 |
                         *(uint *)(local_20 + 10) & 0x3ffff,*(undefined4 *)(local_20 + 2));
        FUN_14085ef10();
        if (local_38[0] != 0) {
            FUN_140880fb0();
        }
        uVar7 = *(uint *)(param_1 + 0x30);
        iVar3 = *(int *)(param_1 + 0x34);
        uVar4 = *puVar1;
        uVar8 = iVar3 + uVar7;
        *(uint *)(param_1 + 0x28) = uVar7 / (ushort)local_20[6];
        if ((uVar4 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
            *(uint *)(param_1 + 0x78) = uVar8;
            uVar8 = uVar8 - iVar3;
            *(int *)(param_1 + 0x74) = iVar3;
            *puVar1 = uVar8 / (ushort)local_20[6] - 1;
        }
        else {
            uVar6 = (uint)(ushort)local_20[6] * (uVar4 + 1) + iVar3;
            uVar7 = *puVar2 * (uint)(ushort)local_20[6] + iVar3;
            *(uint *)(param_1 + 0x78) = uVar6;
            *(uint *)(param_1 + 0x74) = uVar7;
            if (((uVar4 < *puVar2) || (uVar8 < uVar7)) || (uVar8 < uVar6)) goto LAB_14087928e;
        }
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                (*(longlong **)(param_1 + 0x58),&local_48,uVar7,uVar8,puVar9,puVar10,puVar11,piVar12,
                 piVar13,uVar14);
        local_48 = (float)(ulonglong)((uint)(ushort)local_20[6] * *(int *)(local_20 + 2)) * 0.001;
        if (*(short *)(param_1 + 0x54) != 1) {
            local_44 = *(undefined4 *)(param_1 + 0x74);
            local_40 = *(undefined4 *)(param_1 + 0x78);
        }
        local_3b = (undefined)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x184);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),&local_48);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                (*(longlong **)(param_1 + 0x58),local_20[6]);
    }
    else {
        LAB_14087928e:
        uVar5 = 7;
    }
    return uVar5;
}



void FUN_140879390(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
    }
    FUN_140880f80(param_1);
    return;
}



void FUN_1408793d0(longlong param_1,uint param_2)

{
    if ((*(longlong *)(param_1 + 0x80) != 0) && (param_2 < 2)) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
    }
    FUN_1408810f0(param_1,param_2);
    return;
}



undefined8 * FUN_140879420(undefined8 *param_1)

{
    FUN_1408611a0();
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    *param_1 = &PTR_FUN_1409a6e80;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0xf] = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    *(undefined8 *)((longlong)param_1 + 0x4c) = 0x2b;
    *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x74) = 1;
    return param_1;
}



undefined8 * FUN_140879490(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6e80;
    FUN_140879a50();
    *param_1 = &PTR_FUN_1409a2f80;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_1408794e0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    float fVar3;

    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar2 + 0x17f) & 4) == 0) {
        uVar1 = (ulonglong)DAT_140c110b4;
        if ((*(byte *)(lVar2 + 0x17e) & 0x80) != 0) {
            uVar1 = 0x177;
        }
        uVar1 = ((ulonglong)*(uint *)(lVar2 + 0x174) * (ulonglong)*(uint *)(lVar2 + 0xc0)) / uVar1 &
                0xffffffff;
    }
    else {
        fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
        lVar2 = *(longlong *)(param_1 + 0x18);
        uVar1 = (ulonglong)
                (fVar3 * *(float *)(lVar2 + 0x174) * (float)(ulonglong)*(uint *)(lVar2 + 0xc0) * 0.001);
    }
    *(byte *)(lVar2 + 0x17f) = *(byte *)(lVar2 + 0x17f) & 0xf1;
    *(undefined4 *)(lVar2 + 0x174) = 0;
    // WARNING: Could not recover jumptable at 0x000140879580. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))(*(longlong **)(param_1 + 0x38),uVar1);
    return;
}



float FUN_140879590(longlong param_1)

{
    float fVar1;
    float fVar2;

    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))();
        fVar1 = (float)(((uint)(fVar2 + 9.999999e-39) & 0x7fffff) + 0x3f800000);
        fVar1 = (fVar1 - 1.0) / (fVar1 + 1.0);
        return ((fVar1 * fVar1 * 0.3333333 + 1.0) * fVar1 * 2.0 +
                ((float)(ulonglong)((uint)(fVar2 + 9.999999e-39) >> 0x17 & 0xff) - 127.0) * 0.6931472) *
               0.4342945 * 20.0;
    }
    return 0.0;
}



void FUN_140879650(longlong param_1,longlong *param_2)

{
    ushort uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;

    if (*(longlong *)(param_1 + 0x38) == 0) {
        *(undefined8 *)((longlong)param_2 + 0xc) = 0x2b;
        *param_2 = 0;
        *(undefined2 *)(param_2 + 3) = 0;
        param_2[4] = 0;
        *(undefined4 *)(param_2 + 5) = 0xffffffff;
        *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3f800000;
        *(undefined4 *)(param_2 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)param_2 + 0x34) = 1;
        *(undefined4 *)(param_2 + 7) = 2;
        return;
    }
    uVar1 = *(ushort *)(param_2 + 2);
    if (uVar1 == 0) {
        *(undefined4 *)(param_2 + 7) = 0x11;
        return;
    }
    uVar2 = *(uint *)(param_1 + 0x84);
    if (*(longlong *)(param_1 + 0x40) == 0) {
        if ((int)uVar2 < 0) {
            iVar3 = FUN_140868400(param_2,uVar1,uVar2 & 0x3ffff);
            if (iVar3 != 1) {
                LAB_1408796b9:
                *(undefined4 *)(param_2 + 7) = 2;
                return;
            }
            goto LAB_1408796f7;
        }
        lVar4 = FUN_140832b30((uint)uVar1 * (uVar2 >> 0x18 & 0x1f));
        if (lVar4 == 0) goto LAB_1408796b9;
        *param_2 = lVar4;
    }
    else {
        *param_2 = *(longlong *)(param_1 + 0x40);
    }
    *(uint *)(param_2 + 1) = uVar2 & 0x3ffff;
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    LAB_1408796f7:
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2b;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))(*(longlong **)(param_1 + 0x38),param_2);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(longlong *)(param_1 + 0x40) = *param_2;
    *(longlong *)(param_1 + 0x48) = param_2[1];
    *(longlong *)(param_1 + 0x50) = param_2[2];
    *(longlong *)(param_1 + 0x58) = param_2[3];
    *(longlong *)(param_1 + 0x60) = param_2[4];
    *(longlong *)(param_1 + 0x68) = param_2[5];
    *(longlong *)(param_1 + 0x70) = param_2[6];
    return;
}



void FUN_1408797c0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x40) != 0) {
        if ((int)*(uint *)(param_1 + 0x84) < 0) {
            FUN_140868480((undefined8 *)(param_1 + 0x40));
            return;
        }
        FUN_140833130((*(uint *)(param_1 + 0x84) >> 0x18 & 0x1f) << 10);
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    return;
}



undefined8 FUN_140879810(longlong *param_1)

{
    byte bVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    undefined local_res10 [8];

    lVar7 = 0;
    local_res8 = 0;
    plVar5 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x3e30);
    if (plVar5 != (longlong *)0x0) {
        uVar4 = *(undefined4 *)(plVar5 + 4);
        *(undefined4 *)(param_1 + 5) = uVar4;
        iVar3 = FUN_14082faf0(&PTR_PTR_FUN_140c10f70,uVar4,&local_res8);
        if (iVar3 == 1) {
            param_1[7] = local_res8;
            plVar2 = (longlong *)plVar5[5];
            if (plVar2 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,&PTR_PTR_FUN_140c10f70);
                param_1[6] = lVar6;
                if (lVar6 == 0) goto switchD_14087996d_caseD_5;
                FUN_140857d10(plVar5,lVar6,*(undefined8 *)(param_1[3] + 0xb0));
            }
            lVar6 = FUN_1408819f0(DAT_140c10f28,0x28);
            if (lVar6 != 0) {
                lVar7 = FUN_140862040(lVar6,param_1[3]);
            }
            param_1[0xf] = lVar7;
            uVar4 = DAT_140c110b4;
            if (lVar7 != 0) {
                plVar2 = param_1 + 0x10;
                bVar1 = *(byte *)(param_1[3] + 0x17e);
                *(undefined4 *)((longlong)param_1 + 0x84) = 0xa4800004;
                if ((bVar1 & 0x80) != 0) {
                    uVar4 = 0x177;
                }
                *(undefined4 *)plVar2 = uVar4;
                (**(code **)(*(longlong *)param_1[7] + 0x18))((longlong *)param_1[7],local_res10);
                iVar3 = (**(code **)(*(longlong *)param_1[7] + 0x30))
                        ((longlong *)param_1[7],&PTR_PTR_FUN_140c10f70,param_1[0xf],param_1[6],
                         plVar2);
                switch(*(uint *)((longlong)param_1 + 0x84) & 0x3ffff) {
                    case 3:
                    case 4:
                    case 7:
                    case 8:
                    case 0xb:
                    case 0xc:
                    case 0xf:
                    case 0x33:
                    case 0x37:
                    case 0x3b:
                    case 0x3f:
                        if ((iVar3 == 1) && (iVar3 = (**(code **)(*(longlong *)param_1[7] + 0x10))(), iVar3 == 1))
                        {
                            *(longlong *)(param_1[3] + 0xc0) = *plVar2;
                            FUN_14085ef10();
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                            return 1;
                        }
                }
            }
        }
    }
    switchD_14087996d_caseD_5:
    (**(code **)(*param_1 + 0x48))(param_1);
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    return 2;
}



void FUN_140879a50(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 uVar3;

    (**(code **)(*param_1 + 0x10))();
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_FUN_140c10f70);
        param_1[7] = 0;
    }
    uVar3 = DAT_140c10f28;
    puVar2 = (undefined8 *)param_1[0xf];
    if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_140881720(uVar3,puVar2);
        param_1[0xf] = 0;
    }
    if (param_1[6] != 0) {
        FUN_140838cc0(DAT_140c61bb0);
        (**(code **)(*(longlong *)param_1[6] + 0x20))((longlong *)param_1[6],&PTR_PTR_FUN_140c10f70);
        param_1[6] = 0;
    }
    return;
}



undefined8 * FUN_140879b50(undefined8 *param_1)

{
    FUN_1408805b0();
    *param_1 = &PTR_FUN_1409a6f30;
    param_1[0x11] = 0;
    *(undefined2 *)(param_1 + 0x2d) = 0;
    return param_1;
}



undefined8 * FUN_140879b90(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a6f30;
    if (param_1[0x11] != 0) {
        FUN_140833130((*(byte *)(param_1[3] + 199) & 0x1f) << 10);
        param_1[0x11] = 0;
    }
    FUN_1408805f0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_140879f50(longlong param_1)

{
    uint *puVar1;
    uint *puVar2;
    ushort uVar3;
    int iVar4;
    uint uVar5;
    undefined8 uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    float local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined local_3b;
    int local_38;
    undefined8 local_30;
    short *local_20;

    local_38 = 0;
    local_30 = 0;
    puVar1 = (uint *)(param_1 + 0x3c);
    puVar2 = (uint *)(param_1 + 0x38);
    uVar6 = FUN_14087fc20();
    if ((int)uVar6 != 1) {
        return uVar6;
    }
    if (*local_20 == 2) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0xc0) =
                CONCAT44(((ushort)local_20[1] & 0xf) << 0x19 | *(uint *)(local_20 + 10) & 0x3ffff,
                         *(undefined4 *)(local_20 + 2)) | 0x40000000000000;
        FUN_14085ef10();
        if (local_38 != 0) {
            FUN_140880fb0();
        }
        uVar3 = local_20[6];
        uVar8 = *(uint *)(param_1 + 0x30);
        iVar4 = *(int *)(param_1 + 0x34);
        uVar5 = *puVar1;
        *(uint *)(param_1 + 0x80) = (uint)uVar3;
        uVar7 = iVar4 + uVar8;
        *(uint *)(param_1 + 0x28) = (uVar8 << 6) / (uint)(ushort)local_20[6];
        if ((uVar5 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
            *(uint *)(param_1 + 0x78) = uVar7;
            *(int *)(param_1 + 0x74) = iVar4;
            *puVar1 = (uVar8 / uVar3) * 0x40 - 1;
        }
        else {
            uVar9 = (uint)uVar3 * (uVar5 + 1 >> 6) + iVar4;
            uVar8 = (*puVar2 >> 6) * (uint)uVar3 + iVar4;
            *(uint *)(param_1 + 0x78) = uVar9;
            *(uint *)(param_1 + 0x74) = uVar8;
            if (((uVar5 < *puVar2) || (uVar7 < uVar8)) || (uVar7 < uVar9)) goto LAB_14087a098;
        }
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
        if (((*puVar2 < *puVar1) && (*puVar2 <= *(uint *)(param_1 + 0x28))) &&
            (*puVar1 < *(uint *)(param_1 + 0x28))) {
            local_48 = (float)(uint)(ushort)local_20[6] * (float)(ulonglong)*(uint *)(local_20 + 2) *
                                            1.5625e-05;
            if (*(short *)(param_1 + 0x54) != 1) {
                local_44 = *(undefined4 *)(param_1 + 0x74);
                local_40 = *(undefined4 *)(param_1 + 0x78);
            }
            local_3b = (undefined)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x184);
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
                    (*(longlong **)(param_1 + 0x58),&local_48);
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                    (*(longlong **)(param_1 + 0x58),
                     ((uint)(ushort)local_20[1] + (uint)(ushort)local_20[1] * 8) * 4);
        }
        else {
            uVar6 = 2;
        }
    }
    else {
        LAB_14087a098:
        uVar6 = 7;
    }
    return uVar6;
}



void FUN_14087a180(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_140833130((*(byte *)(*(longlong *)(param_1 + 0x18) + 199) & 0x1f) << 10);
        *(undefined8 *)(param_1 + 0x88) = 0;
    }
    return;
}



void FUN_14087a1c0(longlong *param_1)

{
    (**(code **)(*param_1 + 0x10))();
    FUN_140880f80(param_1);
    return;
}



void FUN_14087a1e0(longlong param_1,uint param_2)

{
    FUN_1408810f0();
    if (param_2 < 2) {
        *(undefined2 *)(param_1 + 0x168) = 0;
    }
    return;
}



undefined8 * FUN_14087a210(undefined8 *param_1)

{
    FUN_14087ff30();
    *param_1 = &PTR_FUN_1409a7000;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    return param_1;
}



undefined8 * FUN_14087a240(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7000;
    FUN_14087ff90();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_14087a420(longlong param_1)

{
    uint uVar1;
    int iVar2;

    if (*(longlong *)(param_1 + 0x68) != 0) {
        iVar2 = 0;
        for (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0xc4) & 0x3ffff; uVar1 != 0;
             uVar1 = uVar1 & uVar1 - 1) {
            iVar2 = iVar2 + 1;
        }
        FUN_140833130(iVar2 << 0xb);
        *(undefined8 *)(param_1 + 0x68) = 0;
    }
    return;
}



undefined8 FUN_14087a490(longlong param_1)

{
    byte *pbVar1;
    longlong lVar2;
    uint uVar3;

    if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x17f) & 2) != 0) {
        uVar3 = FUN_1408801c0();
        lVar2 = *(longlong *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x2c) = uVar3 & 0xffffffc0;
        pbVar1 = (byte *)(lVar2 + 0x17f);
        *pbVar1 = *pbVar1 & 0xf1;
        *(uint *)(lVar2 + 0x174) = uVar3 - (uVar3 & 0xffffffc0);
        if (*(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c)) {
            return 2;
        }
        *(ulonglong *)(param_1 + 0x58) =
                (ulonglong)((*(uint *)(param_1 + 0x2c) >> 6) * (uint)*(ushort *)(param_1 + 0x60)) +
                (ulonglong)*(uint *)(param_1 + 0x34) + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1a0)
                ;
    }
    return 1;
}



void FUN_14087a6d0(longlong *param_1)

{
    (**(code **)(*param_1 + 0x10))();
    FUN_1408803d0(param_1);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014087a7c1)
// WARNING: Removing unreachable block (ram,0x00014087a7a5)
// WARNING: Removing unreachable block (ram,0x00014087a78f)
// WARNING: Removing unreachable block (ram,0x00014087a775)

undefined8 * FUN_14087a750(undefined8 *param_1)

{
    int *piVar1;
    longlong lVar2;
    uint *puVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    uVar6 = 0;
    *param_1 = &PTR_FUN_1409a70a8;
    param_1[1] = 0;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    piVar1 = (int *)cpuid_basic_info(0);
    if (0 < *piVar1) {
        lVar2 = cpuid_Version_info(1);
        uVar5 = *(uint *)(lVar2 + 8);
        uVar6 = *(uint *)(lVar2 + 0xc);
    }
    puVar3 = (uint *)cpuid(0x80000000);
    if (*puVar3 < 0x80000006) {
        *(undefined4 *)(param_1 + 2) = 0x40;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x400;
    }
    else {
        lVar2 = cpuid(0x80000006);
        uVar4 = *(uint *)(lVar2 + 0xc);
        *(uint *)(param_1 + 2) = uVar4 & 0xff;
        *(uint *)((longlong)param_1 + 0xc) = (int)uVar4 >> 0x10 & 0xffff;
    }
    if ((uVar5 >> 0x19 & 1) != 0) {
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
    }
    if ((uVar5 >> 0x1a & 1) != 0) {
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
    }
    if ((uVar6 & 1) != 0) {
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 4;
    }
    if ((uVar6 >> 9 & 1) != 0) {
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8;
    }
    return param_1;
}



undefined * FUN_14087a840(void)

{
    if ((DAT_140c628d8 & 1) == 0) {
        DAT_140c628d8 = DAT_140c628d8 | 1;
        FUN_14087a750(&DAT_140c628c0);
        FUN_1407dd89c(&LAB_140957b30);
        return &DAT_140c628c0;
    }
    return &DAT_140c628c0;
}



float * FUN_14087a890(undefined8 param_1,undefined8 param_2,float param_3,float *param_4,
                      float *param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;

    param_4[4] = param_5[0xb];
    param_4[5] = (param_5[3] - param_5[0xb]) * param_3;
    param_4[6] = param_5[0xc];
    param_4[7] = (param_5[4] - param_5[0xc]) * param_3;
    if (DAT_140c61c54 == 0) {
        fVar2 = SQRT(param_5[8] * param_5[8] + 0.0);
        *param_4 = fVar2;
        fVar3 = SQRT(param_5[10] * param_5[10] * 0.5 + param_5[9] * param_5[9]);
        param_4[2] = fVar3;
        fVar2 = SQRT(*param_5 * *param_5 + 0.0) - fVar2;
        param_4[1] = fVar2;
        fVar1 = param_5[1];
        param_4[1] = fVar2 * param_3;
        fVar3 = SQRT(fVar1 * fVar1 + 0.0) - fVar3;
    }
    else {
        *param_4 = param_5[8];
        param_4[1] = (*param_5 - param_5[8]) * param_3;
        param_4[2] = param_5[9];
        fVar3 = param_5[1] - param_5[9];
    }
    param_4[3] = fVar3 * param_3;
    return param_4;
}



float * FUN_14087aa00(undefined8 param_1,undefined8 param_2,float param_3,float *param_4,
                      float *param_5)

{
    float fVar1;
    float local_28;

    if (DAT_140c61c54 == 0) {
        local_28 = (float)*(undefined8 *)(param_5 + 0xc);
        fVar1 = SQRT(param_5[8] * param_5[8] + param_5[9] * param_5[9] + 0.0 +
                     (local_28 * local_28 + param_5[0xb] * param_5[0xb]) * 0.5);
        *param_4 = fVar1;
        local_28 = (float)*(undefined8 *)(param_5 + 4);
        fVar1 = SQRT(param_5[1] * param_5[1] + *param_5 * *param_5 + 0.0 +
                     (param_5[3] * param_5[3] + local_28 * local_28) * 0.5) - fVar1;
    }
    else {
        fVar1 = SQRT(param_5[8] * param_5[8] + param_5[9] * param_5[9]);
        *param_4 = fVar1;
        fVar1 = SQRT(param_5[1] * param_5[1] + *param_5 * *param_5) - fVar1;
    }
    param_4[1] = fVar1 * param_3;
    return param_4;
}



float * FUN_14087ab50(undefined8 param_1,undefined8 param_2,float param_3,float *param_4,
                      float *param_5)

{
    float fVar1;
    float fVar2;
    undefined auVar3 [16];
    float fVar4;
    float fVar5;
    float local_38;

    if (DAT_140c61c54 == 0) {
        fVar4 = SQRT((param_5[0xb] * param_5[0xb] + 0.0) * 0.5 + param_5[8] * param_5[8]);
        *param_4 = fVar4;
        local_38 = (float)*(undefined8 *)(param_5 + 0xc);
        fVar5 = SQRT((param_5[10] * param_5[10] + local_38 * local_38) * 0.5 + param_5[9] * param_5[9]);
        param_4[2] = fVar5;
        fVar4 = SQRT((param_5[3] * param_5[3] + param_5[2] * param_5[2]) * 0.5 + *param_5 * *param_5) -
                fVar4;
        param_4[1] = fVar4;
        fVar1 = param_5[1];
        fVar2 = param_5[2];
        local_38 = (float)*(undefined8 *)(param_5 + 4);
        param_4[1] = fVar4 * param_3;
        auVar3 = sqrtps(ZEXT816(CONCAT44(fVar2,fVar2 * fVar2)) & (undefined  [16])0xffffffffffffffff,
                        ZEXT416((uint)((local_38 * local_38 + fVar2 * fVar2) * 0.5 + fVar1 * fVar1)));
        fVar5 = SUB164(auVar3,0) - fVar5;
    }
    else {
        *param_4 = param_5[8];
        param_4[1] = (*param_5 - param_5[8]) * param_3;
        param_4[2] = param_5[9];
        fVar5 = param_5[1] - param_5[9];
    }
    param_4[3] = fVar5 * param_3;
    return param_4;
}



undefined2 * FUN_14087acc0(undefined2 *param_1)

{
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
}



void FUN_14087acd0(ushort *param_1,ushort param_2)

{
    *param_1 = param_2;
    *(float *)(param_1 + 2) = 1.0 / (float)(uint)param_2;
    return;
}



void FUN_14087acf0(undefined2 *param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;

    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == 3) {
        FUN_14087b5d0();
    }
    else {
        if (iVar1 == 4) {
            FUN_14087b520();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
        if (iVar1 == 0x33) {
            FUN_14087b3e0();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
        if (iVar1 == 0x3f) {
            FUN_14087b190();
            *(undefined2 *)(param_3 + 0x12) = *param_1;
            return;
        }
    }
    *(undefined2 *)(param_3 + 0x12) = *param_1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_14087aeb0(ushort *param_1,float **param_2,undefined (**param_3) [16])

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    uint uVar7;
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    ulonglong uVar11;
    float *pfVar12;
    float *pfVar13;
    undefined (*pauVar14) [16];
    float *pfVar15;
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
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;

    fVar34 = *(float *)((longlong)param_2 + 0x1c);
    pauVar14 = *param_3;
    fVar17 = (*(float *)(param_2 + 3) - fVar34) * *(float *)(param_1 + 2);
    fVar16 = fVar17 + fVar34;
    fVar18 = fVar17 * 2.0;
    fVar17 = fVar17 * 3.0 + fVar34;
    _DAT_140c628e8 = fVar18 + fVar34;
    uVar11 = (ulonglong)*(ushort *)(param_2 + 2);
    pfVar13 = *param_2;
    pfVar8 = pfVar13 + uVar11;
    pfVar15 = pfVar13 + uVar11 * 2;
    pfVar9 = pfVar13 + uVar11 * 5;
    pfVar10 = pfVar13 + uVar11 * 3;
    pfVar12 = pfVar13 + uVar11 * 4;
    uVar7 = (uint)(*param_1 >> 2);
    _DAT_140c628e0 = fVar34;
    _DAT_140c628e4 = fVar16;
    _DAT_140c628ec = fVar17;
    if (*param_1 >> 2 != 0) {
        do {
            fVar31 = *pfVar13;
            pfVar1 = pfVar13 + 1;
            pfVar2 = pfVar13 + 3;
            fVar25 = *pfVar10;
            pfVar3 = pfVar10 + 1;
            pfVar4 = pfVar10 + 3;
            pfVar5 = pfVar8 + 1;
            pfVar6 = pfVar8 + 3;
            pfVar13 = pfVar13 + 4;
            pfVar8 = pfVar8 + 4;
            pfVar10 = pfVar10 + 4;
            fVar31 = fVar31 * fVar34;
            fVar32 = *pfVar1 * fVar16;
            fVar33 = *pfVar2 * fVar17;
            fVar25 = fVar25 * fVar34;
            fVar26 = *pfVar3 * fVar16;
            fVar27 = *pfVar4 * fVar17;
            fVar23 = *pfVar5 * fVar16;
            fVar24 = *pfVar6 * fVar17;
            fVar28 = *pfVar15;
            pfVar1 = pfVar15 + 1;
            pfVar2 = pfVar15 + 3;
            pfVar3 = pfVar12 + 1;
            pfVar4 = pfVar12 + 3;
            pfVar5 = pfVar9 + 1;
            pfVar6 = pfVar9 + 3;
            pfVar15 = pfVar15 + 4;
            pfVar9 = pfVar9 + 4;
            pfVar12 = pfVar12 + 4;
            fVar28 = fVar28 * fVar34;
            fVar29 = *pfVar1 * fVar16;
            fVar30 = *pfVar2 * fVar17;
            fVar19 = *pfVar3 * fVar16;
            fVar20 = *pfVar4 * fVar17;
            fVar21 = *pfVar5 * fVar16;
            fVar22 = *pfVar6 * fVar17;
            fVar34 = fVar34 + fVar18;
            fVar16 = fVar16 + fVar18;
            fVar17 = fVar17 + fVar18;
            *pauVar14 = ZEXT1216(CONCAT48(fVar28,(ulonglong)(uint)fVar31));
            pauVar14[1] = CONCAT412(fVar23,CONCAT48(fVar32,(ulonglong)(uint)fVar25));
            pauVar14[2] = CONCAT412(fVar19,CONCAT48(fVar26,CONCAT44(fVar21,fVar29)));
            pauVar14[3] = ZEXT416(0);
            pauVar14[4] = ZEXT816(CONCAT44(fVar24,fVar33)) << 0x40;
            pauVar14[5] = CONCAT412(fVar20,CONCAT48(fVar27,CONCAT44(fVar22,fVar30)));
            uVar7 = uVar7 - 1;
            pauVar14 = pauVar14[6];
        } while (uVar7 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_14087b0b0(ushort *param_1,float **param_2,undefined (**param_3) [16])

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    uint uVar7;
    float *pfVar8;
    float *pfVar9;
    undefined (*pauVar10) [16];
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

    fVar23 = *(float *)((longlong)param_2 + 0x1c);
    fVar12 = (*(float *)(param_2 + 3) - fVar23) * *(float *)(param_1 + 2);
    fVar11 = fVar12 + fVar23;
    fVar18 = fVar12 * 2.0;
    fVar13 = fVar12 * 3.0 + fVar23;
    fVar12 = fVar18 + fVar23;
    pfVar9 = *param_2;
    pfVar8 = pfVar9 + *(ushort *)(param_2 + 2);
    uVar7 = (uint)(*param_1 >> 2);
    pauVar10 = *param_3;
    _DAT_140c628e0 = fVar23;
    _DAT_140c628e4 = fVar11;
    _DAT_140c628e8 = fVar12;
    _DAT_140c628ec = fVar13;
    if (*param_1 >> 2 != 0) {
        do {
            fVar19 = *pfVar9;
            pfVar1 = pfVar9 + 1;
            pfVar2 = pfVar9 + 2;
            pfVar3 = pfVar9 + 3;
            fVar14 = *pfVar8;
            pfVar4 = pfVar8 + 1;
            pfVar5 = pfVar8 + 2;
            pfVar6 = pfVar8 + 3;
            pfVar9 = pfVar9 + 4;
            pfVar8 = pfVar8 + 4;
            fVar19 = fVar19 * fVar23;
            fVar20 = *pfVar1 * fVar11;
            fVar21 = *pfVar2 * fVar12;
            fVar22 = *pfVar3 * fVar13;
            fVar14 = fVar14 * fVar23;
            fVar15 = *pfVar4 * fVar11;
            fVar16 = *pfVar5 * fVar12;
            fVar17 = *pfVar6 * fVar13;
            fVar23 = fVar23 + fVar18;
            fVar11 = fVar11 + fVar18;
            fVar12 = fVar12 + fVar18;
            fVar13 = fVar13 + fVar18;
            *pauVar10 = CONCAT412(fVar15,CONCAT48(fVar20,CONCAT44(fVar14,fVar19)));
            pauVar10[1] = CONCAT412(fVar17,CONCAT48(fVar22,CONCAT44(fVar16,fVar21)));
            uVar7 = uVar7 - 1;
            pauVar10 = pauVar10[2];
        } while (uVar7 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14087ada0(ushort *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   float param_5)

{
    ulonglong uVar1;
    float *pfVar2;
    float *pfVar3;
    undefined (*pauVar4) [16];
    undefined (*pauVar5) [16];
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
    float fVar16;
    float in_XMM3_Da;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;

    uVar1 = param_2 + (ulonglong)*param_1 * 4;
    if (param_5 == 0.0) {
        if (in_XMM3_Da != 0.0) {
            param_2 = param_2 - param_3;
            pauVar4 = (undefined (*) [16])(param_3 + 0x10);
            _DAT_140c628e0 = in_XMM3_Da;
            _DAT_140c628e4 = in_XMM3_Da;
            _DAT_140c628e8 = in_XMM3_Da;
            _DAT_140c628ec = in_XMM3_Da;
            do {
                pfVar3 = (float *)(param_2 + -0x10 + (longlong)pauVar4);
                pfVar2 = (float *)((longlong)pauVar4 + param_2);
                fVar6 = *pfVar2;
                fVar7 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar17 = pfVar2[3];
                pauVar5 = pauVar4[2];
                pauVar4[-1] = CONCAT412(pfVar3[3] * in_XMM3_Da + *(float *)(pauVar4[-1] + 0xc),
                                        CONCAT48(pfVar3[2] * in_XMM3_Da + *(float *)(pauVar4[-1] + 8),
                                                 CONCAT44(pfVar3[1] * in_XMM3_Da +
                                                          *(float *)(pauVar4[-1] + 4),
                                                          *pfVar3 * in_XMM3_Da + *(float *)pauVar4[-1])));
                *pauVar4 = CONCAT412(fVar17 * in_XMM3_Da + *(float *)(*pauVar4 + 0xc),
                                     CONCAT48(fVar12 * in_XMM3_Da + *(float *)(*pauVar4 + 8),
                                              CONCAT44(fVar7 * in_XMM3_Da + *(float *)(*pauVar4 + 4),
                                                       fVar6 * in_XMM3_Da + *(float *)*pauVar4)));
                pauVar4 = pauVar5;
            } while ((ulonglong)(param_2 + -0x10 + (longlong)pauVar5) < uVar1);
            return;
        }
    }
    else {
        param_2 = param_2 - param_3;
        fVar6 = in_XMM3_Da + param_5;
        fVar21 = param_5 * 4.0;
        fVar7 = param_5 * 2.0 + in_XMM3_Da;
        fVar12 = param_5 * 3.0 + in_XMM3_Da;
        fVar17 = in_XMM3_Da + fVar21;
        fVar18 = fVar6 + fVar21;
        fVar19 = fVar7 + fVar21;
        fVar20 = fVar12 + fVar21;
        pauVar4 = (undefined (*) [16])(param_3 + 0x10);
        _DAT_140c628e0 = in_XMM3_Da;
        _DAT_140c628e4 = fVar6;
        _DAT_140c628e8 = fVar7;
        _DAT_140c628ec = fVar12;
        do {
            pfVar3 = (float *)((longlong)pauVar4 + param_2 + -0x10);
            pfVar2 = (float *)((longlong)pauVar4 + param_2);
            pauVar5 = pauVar4[2];
            fVar8 = *pfVar3 * in_XMM3_Da;
            fVar9 = pfVar3[1] * fVar6;
            fVar10 = pfVar3[2] * fVar7;
            fVar11 = pfVar3[3] * fVar12;
            fVar13 = *pfVar2 * fVar17;
            fVar14 = pfVar2[1] * fVar18;
            fVar15 = pfVar2[2] * fVar19;
            fVar16 = pfVar2[3] * fVar20;
            in_XMM3_Da = in_XMM3_Da + fVar21 + fVar21;
            fVar6 = fVar6 + fVar21 + fVar21;
            fVar7 = fVar7 + fVar21 + fVar21;
            fVar12 = fVar12 + fVar21 + fVar21;
            fVar17 = fVar17 + fVar21 + fVar21;
            fVar18 = fVar18 + fVar21 + fVar21;
            fVar19 = fVar19 + fVar21 + fVar21;
            fVar20 = fVar20 + fVar21 + fVar21;
            pauVar4[-1] = CONCAT412(fVar11 + *(float *)(pauVar4[-1] + 0xc),
                                    CONCAT48(fVar10 + *(float *)(pauVar4[-1] + 8),
                                             CONCAT44(fVar9 + *(float *)(pauVar4[-1] + 4),
                                                      fVar8 + *(float *)pauVar4[-1])));
            *pauVar4 = CONCAT412(fVar16 + *(float *)(*pauVar4 + 0xc),
                                 CONCAT48(fVar15 + *(float *)(*pauVar4 + 8),
                                          CONCAT44(fVar14 + *(float *)(*pauVar4 + 4),
                                                   fVar13 + *(float *)*pauVar4)));
            pauVar4 = pauVar5;
        } while ((ulonglong)(param_2 + -0x10 + (longlong)pauVar5) < uVar1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14087aeb0(ushort *param_1,float **param_2,undefined (**param_3) [16])

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    uint uVar7;
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    ulonglong uVar11;
    float *pfVar12;
    float *pfVar13;
    undefined (*pauVar14) [16];
    float *pfVar15;
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
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;

    fVar34 = *(float *)((longlong)param_2 + 0x1c);
    pauVar14 = *param_3;
    fVar17 = (*(float *)(param_2 + 3) - fVar34) * *(float *)(param_1 + 2);
    fVar16 = fVar17 + fVar34;
    fVar18 = fVar17 * 2.0;
    fVar17 = fVar17 * 3.0 + fVar34;
    _DAT_140c628e8 = fVar18 + fVar34;
    uVar11 = (ulonglong)*(ushort *)(param_2 + 2);
    pfVar13 = *param_2;
    pfVar8 = pfVar13 + uVar11;
    pfVar15 = pfVar13 + uVar11 * 2;
    pfVar9 = pfVar13 + uVar11 * 5;
    pfVar10 = pfVar13 + uVar11 * 3;
    pfVar12 = pfVar13 + uVar11 * 4;
    uVar7 = (uint)(*param_1 >> 2);
    _DAT_140c628e0 = fVar34;
    _DAT_140c628e4 = fVar16;
    _DAT_140c628ec = fVar17;
    if (*param_1 >> 2 != 0) {
        do {
            fVar31 = *pfVar13;
            pfVar1 = pfVar13 + 1;
            pfVar2 = pfVar13 + 3;
            fVar25 = *pfVar10;
            pfVar3 = pfVar10 + 1;
            pfVar4 = pfVar10 + 3;
            pfVar5 = pfVar8 + 1;
            pfVar6 = pfVar8 + 3;
            pfVar13 = pfVar13 + 4;
            pfVar8 = pfVar8 + 4;
            pfVar10 = pfVar10 + 4;
            fVar31 = fVar31 * fVar34;
            fVar32 = *pfVar1 * fVar16;
            fVar33 = *pfVar2 * fVar17;
            fVar25 = fVar25 * fVar34;
            fVar26 = *pfVar3 * fVar16;
            fVar27 = *pfVar4 * fVar17;
            fVar23 = *pfVar5 * fVar16;
            fVar24 = *pfVar6 * fVar17;
            fVar28 = *pfVar15;
            pfVar1 = pfVar15 + 1;
            pfVar2 = pfVar15 + 3;
            pfVar3 = pfVar12 + 1;
            pfVar4 = pfVar12 + 3;
            pfVar5 = pfVar9 + 1;
            pfVar6 = pfVar9 + 3;
            pfVar15 = pfVar15 + 4;
            pfVar9 = pfVar9 + 4;
            pfVar12 = pfVar12 + 4;
            fVar28 = fVar28 * fVar34;
            fVar29 = *pfVar1 * fVar16;
            fVar30 = *pfVar2 * fVar17;
            fVar19 = *pfVar3 * fVar16;
            fVar20 = *pfVar4 * fVar17;
            fVar21 = *pfVar5 * fVar16;
            fVar22 = *pfVar6 * fVar17;
            fVar34 = fVar34 + fVar18;
            fVar16 = fVar16 + fVar18;
            fVar17 = fVar17 + fVar18;
            *pauVar14 = ZEXT1216(CONCAT48(fVar28,(ulonglong)(uint)fVar31));
            pauVar14[1] = CONCAT412(fVar23,CONCAT48(fVar32,(ulonglong)(uint)fVar25));
            pauVar14[2] = CONCAT412(fVar19,CONCAT48(fVar26,CONCAT44(fVar21,fVar29)));
            pauVar14[3] = ZEXT416(0);
            pauVar14[4] = ZEXT816(CONCAT44(fVar24,fVar33)) << 0x40;
            pauVar14[5] = CONCAT412(fVar20,CONCAT48(fVar27,CONCAT44(fVar22,fVar30)));
            uVar7 = uVar7 - 1;
            pauVar14 = pauVar14[6];
        } while (uVar7 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14087b0b0(ushort *param_1,float **param_2,undefined (**param_3) [16])

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    uint uVar7;
    float *pfVar8;
    float *pfVar9;
    undefined (*pauVar10) [16];
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

    fVar23 = *(float *)((longlong)param_2 + 0x1c);
    fVar12 = (*(float *)(param_2 + 3) - fVar23) * *(float *)(param_1 + 2);
    fVar11 = fVar12 + fVar23;
    fVar18 = fVar12 * 2.0;
    fVar13 = fVar12 * 3.0 + fVar23;
    fVar12 = fVar18 + fVar23;
    pfVar9 = *param_2;
    pfVar8 = pfVar9 + *(ushort *)(param_2 + 2);
    uVar7 = (uint)(*param_1 >> 2);
    pauVar10 = *param_3;
    _DAT_140c628e0 = fVar23;
    _DAT_140c628e4 = fVar11;
    _DAT_140c628e8 = fVar12;
    _DAT_140c628ec = fVar13;
    if (*param_1 >> 2 != 0) {
        do {
            fVar19 = *pfVar9;
            pfVar1 = pfVar9 + 1;
            pfVar2 = pfVar9 + 2;
            pfVar3 = pfVar9 + 3;
            fVar14 = *pfVar8;
            pfVar4 = pfVar8 + 1;
            pfVar5 = pfVar8 + 2;
            pfVar6 = pfVar8 + 3;
            pfVar9 = pfVar9 + 4;
            pfVar8 = pfVar8 + 4;
            fVar19 = fVar19 * fVar23;
            fVar20 = *pfVar1 * fVar11;
            fVar21 = *pfVar2 * fVar12;
            fVar22 = *pfVar3 * fVar13;
            fVar14 = fVar14 * fVar23;
            fVar15 = *pfVar4 * fVar11;
            fVar16 = *pfVar5 * fVar12;
            fVar17 = *pfVar6 * fVar13;
            fVar23 = fVar23 + fVar18;
            fVar11 = fVar11 + fVar18;
            fVar12 = fVar12 + fVar18;
            fVar13 = fVar13 + fVar18;
            *pauVar10 = CONCAT412(fVar15,CONCAT48(fVar20,CONCAT44(fVar14,fVar19)));
            pauVar10[1] = CONCAT412(fVar17,CONCAT48(fVar22,CONCAT44(fVar16,fVar21)));
            uVar7 = uVar7 - 1;
            pauVar10 = pauVar10[2];
        } while (uVar7 != 0);
    }
    return;
}



void FUN_14087b190(undefined8 param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;

    uVar3 = 0;
    for (uVar4 = *(uint *)(param_2 + 1); uVar2 = 0, uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar3 = uVar3 + 1;
    }
    do {
        lVar1 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar2 * 4;
        FUN_14087ada0(param_1,lVar1,*param_3);
        FUN_14087ada0(param_1,lVar1,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4);
        FUN_14087ada0(param_1,lVar1,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 8);
        FUN_14087ada0(param_1,lVar1,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 0x14);
        FUN_14087ada0(param_1,lVar1,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 0xc);
        FUN_14087ada0(param_1,lVar1,(ulonglong)*(ushort *)(param_3 + 2) * 0x10 + *param_3);
        uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
    return;
}



void FUN_14087b3e0(undefined4 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                   longlong *param_5,longlong param_6)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    undefined local_38 [32];

    uVar3 = 0;
    for (uVar4 = *(uint *)(param_4 + 1); uVar2 = 0, uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar3 = uVar3 + 1;
    }
    do {
        lVar1 = *param_4 + (ulonglong)*(ushort *)(param_4 + 2) * (ulonglong)uVar2 * 4;
        FUN_14087a890(param_1,param_2,*(undefined4 *)(param_3 + 4),local_38,
                      (ulonglong)uVar2 * 0x40 + param_6);
        FUN_14087ada0(param_3,lVar1,*param_5);
        FUN_14087ada0(param_3,lVar1,*param_5 + (ulonglong)*(ushort *)(param_5 + 2) * 4);
        FUN_14087ada0(param_3,lVar1,*param_5 + (ulonglong)*(ushort *)(param_5 + 2) * 8);
        param_1 = FUN_14087ada0(param_3,lVar1,*param_5 + (ulonglong)*(ushort *)(param_5 + 2) * 0xc);
        uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
    return;
}



void FUN_14087b520(undefined4 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                   undefined8 *param_5,longlong param_6)

{
    ushort uVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    undefined local_res8 [8];

    uVar4 = 0;
    for (uVar5 = *(uint *)(param_4 + 1); uVar3 = 0, uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
        uVar4 = uVar4 + 1;
    }
    do {
        uVar1 = *(ushort *)(param_4 + 2);
        lVar2 = *param_4;
        FUN_14087aa00(param_1,param_2,*(undefined4 *)(param_3 + 4),local_res8,
                      (ulonglong)uVar3 * 0x40 + param_6);
        param_1 = FUN_14087ada0(param_3,lVar2 + (ulonglong)uVar1 * (ulonglong)uVar3 * 4,*param_5);
        uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    return;
}



void FUN_14087b5d0(undefined4 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                   longlong *param_5,longlong param_6)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    undefined local_28 [16];

    uVar3 = 0;
    for (uVar4 = *(uint *)(param_4 + 1); uVar2 = 0, uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar3 = uVar3 + 1;
    }
    do {
        lVar1 = *param_4 + (ulonglong)*(ushort *)(param_4 + 2) * (ulonglong)uVar2 * 4;
        FUN_14087ab50(param_1,param_2,*(undefined4 *)(param_3 + 4),local_28,
                      (ulonglong)uVar2 * 0x40 + param_6);
        FUN_14087ada0(param_3,lVar1,*param_5);
        param_1 = FUN_14087ada0(param_3,lVar1,*param_5 + (ulonglong)*(ushort *)(param_5 + 2) * 4);
        uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
    return;
}



void FUN_14087b6c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
    float fVar1;

    fVar1 = (*(float *)(param_2 + 3) - *(float *)((longlong)param_2 + 0x1c)) * *(float *)(param_1 + 4)
            ;
    FUN_14087ada0(param_1,*param_2,*param_3,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 8,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0x14,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 0x14,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 0xc,param_4,fVar1);
    FUN_14087ada0(param_1,(ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2,
                  (ulonglong)*(ushort *)(param_3 + 2) * 0x10 + *param_3,param_4,fVar1);
    return;
}



void FUN_14087b800(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
    float fVar1;

    fVar1 = (*(float *)(param_2 + 3) - *(float *)((longlong)param_2 + 0x1c)) * *(float *)(param_1 + 4)
            ;
    FUN_14087ada0(param_1,*param_2,*param_3,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 8,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 0xc,param_4,fVar1);
    return;
}



void FUN_14087b8e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
    FUN_14087ada0(param_1,*param_2,*param_3,param_4,
                  (*(float *)(param_2 + 3) - *(float *)((longlong)param_2 + 0x1c)) *
                  *(float *)(param_1 + 4));
    return;
}



void FUN_14087b910(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
    float fVar1;

    fVar1 = (*(float *)(param_2 + 3) - *(float *)((longlong)param_2 + 0x1c)) * *(float *)(param_1 + 4)
            ;
    FUN_14087ada0(param_1,*param_2,*param_3,param_4,fVar1);
    FUN_14087ada0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4,fVar1);
    return;
}



undefined8 * FUN_14087b9a0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a70c8;
    return param_1;
}



void FUN_14087b9b0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a70c8;
    return;
}



undefined8 * FUN_14087b9c0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a70c8;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



ulonglong FUN_14087b9f0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                        int param_5)

{
    undefined8 *puVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    uint uVar7;

    lVar3 = DAT_140c61bb0;
    if (param_5 != 0) {
        if (param_5 != 1) {
            return 0;
        }
        uVar6 = FUN_14082a0a0(DAT_140c61b78,param_4);
        return uVar6;
    }
    for (puVar1 = *(undefined8 **)(DAT_140c61bb0 + 0x1268); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if (*(uint *)(puVar1 + 1) == param_4) {
            uVar7 = *(uint *)((longlong)puVar1 + 0xc);
            puVar2 = *(uint **)(DAT_140c61bb0 + (ulonglong)(uVar7 % 0xc1) * 8);
            goto joined_r0x000140836b13;
        }
    }
    puVar1 = *(undefined8 **)(DAT_140c61bb0 + 0x618 + (((ulonglong)param_4 + param_3) % 0xc1) * 8);
    plVar5 = (longlong *)0x0;
    do {
        if (puVar1 == (undefined8 *)0x0) {
            LAB_140836a91:
            if (plVar5 == (longlong *)0x0) {
                if (param_3 == 0) {
                    return 0;
                }
                plVar5 = *(longlong **)(DAT_140c61bb0 + 0x618 + ((ulonglong)param_4 % 0xc1) * 8);
                if (plVar5 == (longlong *)0x0) {
                    return 0;
                }
                while ((*(uint *)(plVar5 + 1) != param_4 || (plVar5[2] != 0))) {
                    plVar5 = (longlong *)*plVar5;
                    if (plVar5 == (longlong *)0x0) {
                        return 0;
                    }
                }
                plVar5 = plVar5 + 3;
                if (plVar5 == (longlong *)0x0) {
                    return 0;
                }
            }
            return (ulonglong)*(uint *)plVar5;
        }
        if ((*(uint *)(puVar1 + 1) == param_4) && (puVar1[2] == param_3)) {
            plVar5 = puVar1 + 3;
            goto LAB_140836a91;
        }
        puVar1 = (undefined8 *)*puVar1;
    } while( true );
    joined_r0x000140836b13:
    if (puVar2 == (uint *)0x0) goto LAB_140836b58;
    if (*puVar2 == uVar7) {
        if (puVar2 != (uint *)0x0) {
            lVar4 = FUN_140834f40(puVar2 + 6);
            param_1 = extraout_XMM0_Qa;
            if ((lVar4 != 0) ||
                ((param_3 != 0 &&
                  (lVar4 = FUN_140834f40(puVar2 + 6), param_1 = extraout_XMM0_Qa_00, lVar4 != 0)))) {
                uVar7 = *(uint *)(lVar4 + 8);
                goto LAB_140836b85;
            }
        }
        goto LAB_140836b58;
    }
    puVar2 = *(uint **)(puVar2 + 2);
    goto joined_r0x000140836b13;
    LAB_140836b58:
    puVar2 = *(uint **)(lVar3 + (ulonglong)(uVar7 % 0xc1) * 8);
    do {
        if (puVar2 == (uint *)0x0) {
            LAB_140836b82:
            uVar7 = 0;
            LAB_140836b85:
            uVar6 = FUN_1408358d0(param_1,uVar7,puVar1 + 2);
            return uVar6;
        }
        if (*puVar2 == uVar7) {
            if (puVar2 != (uint *)0x0) {
                uVar7 = puVar2[4];
                goto LAB_140836b85;
            }
            goto LAB_140836b82;
        }
        puVar2 = *(uint **)(puVar2 + 2);
    } while( true );
}



undefined8 FUN_14087ba30(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined4 uStack12;

    FUN_140839150(DAT_140c61bb0,param_1);
    FUN_14082b0d0(DAT_140c61b78,param_1);
    lVar2 = DAT_140c61b78;
    if (param_2 == 0) {
        return 1;
    }
    if (param_3 == 0) {
        uVar4 = FUN_1408386a0(DAT_140c61bb0,param_1,param_2,0);
        return uVar4;
    }
    if (param_3 != 1) {
        return 0x1f;
    }
    if (param_1 == 0) {
        return 0x1f;
    }
    if (*(longlong *)(DAT_140c61b78 + 0x28) == 0) {
        if (*(uint *)(DAT_140c61b78 + 0x38) < *(uint *)(DAT_140c61b78 + 0x34)) {
            puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18);
            if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = *(undefined8 *)(lVar2 + 0x28);
                *(undefined8 **)(lVar2 + 0x28) = puVar3;
                goto LAB_14082a580;
            }
        }
        return 2;
    }
    LAB_14082a580:
    if (*(undefined8 **)(lVar2 + 0x20) == (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
    }
    else {
        **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x28);
    *(undefined8 **)(lVar2 + 0x20) = puVar3;
    *(undefined8 *)(lVar2 + 0x28) = *puVar3;
    *puVar3 = 0;
    lVar1 = *(longlong *)(lVar2 + 0x20);
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    *(longlong *)(lVar1 + 8) = param_1;
    *(ulonglong *)(lVar1 + 0x10) = CONCAT44(uStack12,param_2);
    return 1;
}



void FUN_14087bae0(undefined8 param_1)

{
    FUN_140839150(DAT_140c61bb0,param_1);
    FUN_14082b0d0(DAT_140c61b78,param_1);
    return;
}



longlong FUN_14087bb10(void)

{
    longlong lVar1;

    lVar1 = FUN_140829fd0(DAT_140c61b78);
    if (lVar1 != 0) {
        return lVar1 + 8;
    }
    return 0;
}



undefined4 FUN_14087bb40(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140829fd0(DAT_140c61b78);
    if (lVar1 == 0) {
        return 2;
    }
    if (*(longlong *)(lVar1 + 0x28) == 0) {
        *(longlong *)(lVar1 + 0x30) = param_1;
        *(longlong *)(lVar1 + 0x28) = param_1;
        *(undefined8 *)(param_1 + 8) = 0;
        return 1;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(lVar1 + 0x28);
    *(longlong *)(lVar1 + 0x28) = param_1;
    return 1;
}



void FUN_14087bba0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = FUN_140829fd0(DAT_140c61b78);
    if (lVar3 != 0) {
        lVar1 = *(longlong *)(lVar3 + 0x28);
        lVar2 = lVar1;
        lVar5 = 0;
        if (lVar1 != 0) {
            while (lVar4 = lVar2, lVar4 != param_1) {
                lVar2 = *(longlong *)(lVar4 + 8);
                lVar5 = lVar4;
                if (*(longlong *)(lVar4 + 8) == 0) {
                    return;
                }
            }
            if (lVar4 != 0) {
                if (lVar4 == lVar1) {
                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 8);
                }
                else {
                    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
                }
                if (lVar4 == *(longlong *)(lVar3 + 0x30)) {
                    *(longlong *)(lVar3 + 0x30) = lVar5;
                }
            }
        }
    }
    return;
}



undefined8 * FUN_14087bc10(undefined8 *param_1)

{
    FUN_14084c610();
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    *param_1 = &PTR_FUN_1409a70e0;
    return param_1;
}



void FUN_14087bc50(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a48f0;
    if (param_1[0x15] != 0) {
        param_1[0x16] = param_1[0x15];
        FUN_140881720(DAT_140c10f20);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0;
    }
    FUN_14084c670(param_1);
    return;
}



undefined8 * FUN_14087bcb0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a48f0;
    if (param_1[0x15] != 0) {
        param_1[0x16] = param_1[0x15];
        FUN_140881720(DAT_140c10f20);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0;
    }
    FUN_14084c670(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined4 FUN_14087bd30(longlong *param_1,longlong *param_2)

{
    short sVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;

    iVar2 = (**(code **)(*param_2 + 0x70))(param_2);
    sVar1 = (**(code **)(*param_1 + 0x290))(param_1);
    if (sVar1 == -1) {
        uVar3 = 9;
    }
    else if ((iVar2 - 2U < 4) || (iVar2 == 0xb)) {
        if (param_2[8] == 0) {
            iVar2 = *(int *)(param_2 + 3);
            lVar4 = FUN_1408591d0(param_1 + 0x15,iVar2);
            if (lVar4 == 0) {
                uVar3 = 1;
                if (*(int *)(param_1 + 3) == iVar2) {
                    uVar3 = 0x17;
                }
            }
            else {
                uVar3 = 5;
            }
        }
        else {
            uVar3 = 0x15;
        }
    }
    else {
        uVar3 = 4;
    }
    return uVar3;
}



undefined8 * FUN_14087bde0(undefined8 *param_1,ushort param_2)

{
    *(ushort *)(param_1 + 4) = param_2;
    *(ushort *)((longlong)param_1 + 0x22) = param_2;
    *param_1 = &PTR_FUN_1409a73a0;
    *(uint *)(param_1 + 3) = (uint)param_2 * 50000;
    *(uint *)((longlong)param_1 + 0x1c) = (uint)param_2 * 50000;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    return param_1;
}



undefined8 * FUN_14087be20(undefined8 *param_1)

{
    *(undefined *)(param_1 + 3) = 1;
    *param_1 = &PTR_FUN_1409a73c0;
    *(undefined2 *)((longlong)param_1 + 0x1a) = 0xffff;
    return param_1;
}



undefined8 * FUN_14087be40(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a73a0;
    if (param_1[8] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    if (param_1[5] != 0) {
        param_1[6] = param_1[5];
        FUN_140881720(DAT_140c10f20);
        param_1[5] = 0;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 7) = 0;
    }
    *param_1 = &PTR_FUN_1409a7380;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_14087bec0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a7380;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



void FUN_14087c090(longlong param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *(undefined *)(puVar1 + 3) = 1;
        *puVar1 = &PTR_FUN_1409a73c0;
        *(undefined2 *)((longlong)puVar1 + 0x1a) = 0xffff;
        *(undefined *)(puVar1 + 3) = *(undefined *)(param_1 + 0x18);
        *(undefined2 *)((longlong)puVar1 + 0x1a) = *(undefined2 *)(param_1 + 0x1a);
        return;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014087c137)

void FUN_14087c120(longlong param_1,ushort param_2)

{
    byte *pbVar1;

    pbVar1 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x48));
    *pbVar1 = *pbVar1 | '\x01' << ((byte)param_2 & 7);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014087c167)

void FUN_14087c150(longlong param_1,ushort param_2)

{
    byte *pbVar1;

    pbVar1 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x48));
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)param_2 & 7));
    return;
}



// WARNING: Removing unreachable block (ram,0x00014087c197)

void FUN_14087c180(longlong param_1,ushort param_2)

{
    byte *pbVar1;

    pbVar1 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x40));
    *pbVar1 = *pbVar1 | '\x01' << ((byte)param_2 & 7);
    return;
}



ulonglong FUN_14087c1b0(longlong param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = rand();
    iVar2 = rand();
    return (ulonglong)(uint)(iVar2 + iVar1 * 0x8000) % (ulonglong)*(uint *)(param_1 + 0x1c);
}



undefined4 FUN_14087c1e0(longlong param_1,ushort param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    uint uVar5;

    iVar2 = (int)(*(ushort *)(param_1 + 0x22) + 7) >> 3;
    iVar1 = iVar2 * 2;
    lVar4 = FUN_1408819f0(DAT_140c10f20,iVar1);
    *(longlong *)(param_1 + 0x40) = lVar4;
    if (lVar4 == 0) {
        uVar3 = 2;
    }
    else {
        *(longlong *)(param_1 + 0x48) = lVar4 + iVar2;
        FUN_1407e4830(lVar4,0,iVar1);
        uVar5 = (uint)param_2;
        if (3 < param_2) {
            uVar5 = 4;
        }
        if (uVar5 != 0) {
            lVar4 = FUN_1408819f0(DAT_140c10f20,uVar5 * 2);
            *(longlong *)(param_1 + 0x28) = lVar4;
            *(longlong *)(param_1 + 0x30) = lVar4;
            if (lVar4 == 0) {
                return 0x34;
            }
            *(uint *)(param_1 + 0x38) = uVar5;
        }
        uVar3 = 1;
    }
    return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00014087c2bb)

bool FUN_14087c2a0(longlong param_1,ushort param_2)

{
    return ((uint)(int)*(char *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x48)) >>
                                                                                            (param_2 & 0x80000007) & 1) != 0;
}



// WARNING: Removing unreachable block (ram,0x00014087c2eb)

bool FUN_14087c2d0(longlong param_1,ushort param_2)

{
    return ((uint)(int)*(char *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x40)) >>
                                                                                            (param_2 & 0x80000007) & 1) != 0;
}



undefined8 FUN_14087c300(longlong *param_1,uint param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)param_2 * 2);
        *param_1 = lVar1;
        param_1[1] = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        *(uint *)(param_1 + 2) = param_2;
    }
    return 1;
}



void FUN_14087c360(longlong param_1,longlong param_2)

{
    FUN_1407e4830(*(undefined8 *)(param_1 + 0x40),0,param_2 + 7U >> 3 & 0xffffffff);
    *(short *)(param_1 + 0x20) = (short)param_2;
    return;
}



undefined8 * FUN_14087c3a0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a7440;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    return param_1;
}



undefined8 * FUN_14087c3c0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a74b0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    return param_1;
}



undefined8 * FUN_14087c3e0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a73e0;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 FUN_14087c410(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    undefined4 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 0x18)) ||
         (cVar2 = FUN_140892ef0((longlong *)(param_1 + 8),8), cVar2 != '\0')) &&
        (uVar3 < *(uint *)(param_1 + 0x18))) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0x10) = puVar1 + 2;
        if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = param_3;
            *puVar1 = param_2;
            return 1;
        }
    }
    return 2;
}



int FUN_14087c4a0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_14087c4c0(param_1 + 8);
    return 2 - (uint)(lVar1 != 0);
}



undefined4 * FUN_14087c4c0(longlong *param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 2 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 2)) || (cVar2 = FUN_14082a0e0(param_1,0x10), cVar2 != '\0')) &&
        (uVar3 < *(uint *)(param_1 + 2))) {
        puVar1 = (undefined4 *)param_1[1];
        param_1[1] = (longlong)(puVar1 + 1);
        if (puVar1 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
        }
        *puVar1 = param_2;
        return puVar1;
    }
    return (undefined4 *)0x0;
}



void FUN_14087c6f0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;

    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
        do {
            if (*(int *)puVar1 == param_2) {
                puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
                if (puVar1 < puVar2) {
                    lVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar1)) >> 3) + 1;
                    puVar4 = puVar1;
                    puVar2 = puVar1;
                    for (; puVar2 = puVar2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
                        *puVar4 = *puVar2;
                        puVar4 = puVar4 + 1;
                    }
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
            }
            else {
                puVar1 = puVar1 + 1;
            }
        } while (puVar1 != *(undefined8 **)(param_1 + 0x10));
    }
    return;
}



float FUN_14087c7e0(float param_1,undefined8 param_2,char param_3)

{
    uint uVar1;
    float fVar2;

    if (param_3 != '\0') {
        return 187.5 - param_1 * 1.865;
    }
    if (30.0 <= param_1) {
        if ((DAT_140c628f4 & 1) == 0) {
            DAT_140c628f4 = DAT_140c628f4 | 1;
            DAT_140c628f0 = 1042940.0;
        }
        uVar1 = (uint)(longlong)((100.0 - param_1) * DAT_140c628f0 + 1.065353e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        return ((fVar2 * 0.3251898 + 0.02080577) * fVar2 + 0.6530434) * (float)(uVar1 & 0xff800000) *
               16.79744;
    }
    return (30.0 - param_1) * 433.3333 + 7000.0;
}



undefined8 FUN_14087c8c0(longlong *param_1,longlong *param_2,int param_3,short *param_4)

{
    int *piVar1;
    float *pfVar2;
    ushort uVar3;
    ushort uVar4;
    short sVar5;
    uint uVar6;
    ushort uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    uint uVar17;
    int *piVar18;
    int *piVar19;
    float *pfVar20;
    float *pfVar21;

    uVar3 = *(ushort *)((longlong)param_1 + 0x12);
    uVar17 = param_3 - *(uint *)(param_4 + 0xe);
    piVar1 = (int *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0xc) * 2) * 2);
    uVar6 = (uint)uVar3;
    if (uVar17 < uVar3) {
        uVar6 = uVar17;
    }
    pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0xe) * 4);
    *param_4 = *(short *)(piVar1 + (int)(uVar6 - 1));
    param_4[1] = *(short *)((longlong)piVar1 + (longlong)(int)(uVar6 - 1) * 4 + 2);
    uVar4 = *(ushort *)(param_2 + 2);
    uVar7 = uVar4 >> 2;
    iVar16 = uVar6 - (uVar6 & 0xfffffff0);
    piVar19 = piVar1;
    pfVar21 = pfVar2;
    if (piVar1 < piVar1 + (ulonglong)((uVar6 >> 4) * 4) * 4) {
        piVar18 = piVar1;
        pfVar20 = pfVar2;
        do {
            iVar8 = *piVar18;
            iVar9 = piVar18[1];
            iVar10 = piVar18[2];
            iVar11 = piVar18[3];
            piVar19 = piVar18 + 0x10;
            pfVar21 = pfVar20 + 0x10;
            *pfVar20 = (float)(int)(short)iVar8 * 3.051758e-05;
            pfVar20[1] = (float)(int)(short)iVar9 * 3.051758e-05;
            pfVar20[2] = (float)(int)(short)iVar10 * 3.051758e-05;
            pfVar20[3] = (float)(int)(short)iVar11 * 3.051758e-05;
            iVar12 = piVar18[4];
            iVar13 = piVar18[5];
            iVar14 = piVar18[6];
            iVar15 = piVar18[7];
            pfVar20 = (float *)((longlong)pfVar2 + ((ulonglong)uVar7 * 0x10 - (longlong)piVar1) + -0x40 +
                                (longlong)piVar19);
            *pfVar20 = (float)(iVar8 >> 0x10) * 3.051758e-05;
            pfVar20[1] = (float)(iVar9 >> 0x10) * 3.051758e-05;
            pfVar20[2] = (float)(iVar10 >> 0x10) * 3.051758e-05;
            pfVar20[3] = (float)(iVar11 >> 0x10) * 3.051758e-05;
            pfVar20 = (float *)((longlong)piVar18 + (longlong)pfVar2 + (0x10 - (longlong)piVar1));
            *pfVar20 = (float)(int)(short)iVar12 * 3.051758e-05;
            pfVar20[1] = (float)(int)(short)iVar13 * 3.051758e-05;
            pfVar20[2] = (float)(int)(short)iVar14 * 3.051758e-05;
            pfVar20[3] = (float)(int)(short)iVar15 * 3.051758e-05;
            iVar8 = piVar18[8];
            iVar9 = piVar18[9];
            iVar10 = piVar18[10];
            iVar11 = piVar18[0xb];
            pfVar20 = (float *)((longlong)pfVar2 +
                                ((ulonglong)(uVar7 + 1) * 0x10 - (longlong)piVar1) + -0x40 +
                                (longlong)piVar19);
            *pfVar20 = (float)(iVar12 >> 0x10) * 3.051758e-05;
            pfVar20[1] = (float)(iVar13 >> 0x10) * 3.051758e-05;
            pfVar20[2] = (float)(iVar14 >> 0x10) * 3.051758e-05;
            pfVar20[3] = (float)(iVar15 >> 0x10) * 3.051758e-05;
            pfVar20 = (float *)((longlong)piVar18 + (longlong)pfVar2 + (0x20 - (longlong)piVar1));
            *pfVar20 = (float)(int)(short)iVar8 * 3.051758e-05;
            pfVar20[1] = (float)(int)(short)iVar9 * 3.051758e-05;
            pfVar20[2] = (float)(int)(short)iVar10 * 3.051758e-05;
            pfVar20[3] = (float)(int)(short)iVar11 * 3.051758e-05;
            iVar12 = piVar18[0xc];
            iVar13 = piVar18[0xd];
            iVar14 = piVar18[0xe];
            iVar15 = piVar18[0xf];
            pfVar20 = (float *)((longlong)pfVar2 +
                                ((ulonglong)(uVar7 + 2) * 0x10 - (longlong)piVar1) + -0x40 +
                                (longlong)piVar19);
            *pfVar20 = (float)(iVar8 >> 0x10) * 3.051758e-05;
            pfVar20[1] = (float)(iVar9 >> 0x10) * 3.051758e-05;
            pfVar20[2] = (float)(iVar10 >> 0x10) * 3.051758e-05;
            pfVar20[3] = (float)(iVar11 >> 0x10) * 3.051758e-05;
            pfVar20 = (float *)((longlong)piVar18 + (longlong)pfVar2 + (0x30 - (longlong)piVar1));
            *pfVar20 = (float)(int)(short)iVar12 * 3.051758e-05;
            pfVar20[1] = (float)(int)(short)iVar13 * 3.051758e-05;
            pfVar20[2] = (float)(int)(short)iVar14 * 3.051758e-05;
            pfVar20[3] = (float)(int)(short)iVar15 * 3.051758e-05;
            pfVar20 = (float *)((longlong)pfVar2 +
                                ((ulonglong)(uVar7 + 3) * 0x10 - (longlong)piVar1) + -0x40 +
                                (longlong)piVar19);
            *pfVar20 = (float)(iVar12 >> 0x10) * 3.051758e-05;
            pfVar20[1] = (float)(iVar13 >> 0x10) * 3.051758e-05;
            pfVar20[2] = (float)(iVar14 >> 0x10) * 3.051758e-05;
            pfVar20[3] = (float)(iVar15 >> 0x10) * 3.051758e-05;
            piVar18 = piVar19;
            pfVar20 = pfVar21;
        } while (piVar19 < piVar1 + (ulonglong)((uVar6 >> 4) * 4) * 4);
        uVar4 = *(ushort *)(param_2 + 2);
    }
    for (; iVar16 != 0; iVar16 = iVar16 + -1) {
        sVar5 = *(short *)((longlong)piVar19 + 2);
        *pfVar21 = (float)(int)*(short *)piVar19 * 3.051758e-05;
        pfVar21[uVar4] = (float)(int)sVar5 * 3.051758e-05;
        piVar19 = piVar19 + 1;
        pfVar21 = pfVar21 + 1;
    }
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar6;
    *(short *)((longlong)param_2 + 0x12) = (short)uVar6 + param_4[0xe];
    *(undefined4 *)(param_4 + 0x10) = 0x10000;
    if (uVar6 == uVar3) {
        *(undefined4 *)(param_4 + 0xc) = 0;
    }
    else {
        *(uint *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + uVar6;
    }
    if (uVar6 == uVar17) {
        return 0x2d;
    }
    *(uint *)(param_4 + 0xe) = *(int *)(param_4 + 0xe) + uVar6;
    return 0x2b;
}



undefined8 FUN_14087cb80(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
    undefined auVar1 [16];
    ushort uVar2;
    uint uVar3;
    undefined (*pauVar4) [16];
    undefined *puVar5;
    undefined8 uVar6;
    undefined (*pauVar7) [16];
    uint uVar8;
    undefined (*pauVar9) [16];
    uint uVar10;
    int iVar11;
    uint uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    ushort uVar16;
    short sVar17;
    int iVar18;
    short sVar20;
    short sVar21;
    short sVar22;
    short sVar23;
    ushort uVar24;
    short sVar25;
    short sVar26;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    int iVar15;
    undefined auVar19 [12];

    uVar2 = *(ushort *)((longlong)param_1 + 0x12);
    uVar10 = param_3 - *(int *)(param_4 + 0x1c);
    uVar8 = *(uint *)(param_1 + 1);
    uVar3 = (uint)uVar2;
    if (uVar10 < uVar2) {
        uVar3 = uVar10;
    }
    uVar12 = 0;
    for (; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        uVar12 = uVar12 + 1;
    }
    pauVar9 = (undefined (*) [16])(*param_1 + (ulonglong)(*(int *)(param_4 + 0x18) * uVar12) * 2);
    uVar8 = uVar12 * uVar3;
    pauVar7 = pauVar9[(uVar8 >> 4) * 2];
    iVar11 = uVar8 - (uVar8 & 0xfffffff0);
    pauVar4 = (undefined (*) [16])(*param_2 + (ulonglong)(*(int *)(param_4 + 0x1c) * uVar12) * 4);
    for (; pauVar9 < pauVar7; pauVar9 = pauVar9[2]) {
        auVar14 = *pauVar9;
        auVar1 = pauVar9[1];
        uVar16 = -(ushort)(SUB162(auVar14,0) < 0);
        sVar25 = SUB162(auVar14 >> 0x20,0);
        sVar17 = -(ushort)(sVar25 < 0);
        sVar20 = SUB162(auVar14 >> 0x30,0);
        sVar21 = SUB162(auVar14 >> 0x40,0);
        sVar22 = SUB162(auVar14 >> 0x50,0);
        sVar23 = SUB162(auVar14 >> 0x60,0);
        iVar18 = CONCAT22(-(ushort)(sVar21 < 0),sVar21);
        uVar6 = CONCAT26(-(ushort)(sVar22 < 0),CONCAT24(sVar22,iVar18));
        auVar19 = CONCAT210(-(ushort)(sVar23 < 0),CONCAT28(sVar23,uVar6));
        iVar15 = SUB164(CONCAT214(-(ushort)(sVar20 < 0),CONCAT212(sVar20,SUB1612(auVar14,0))) >> 0x60,0)
                ;
        auVar13 = CONCAT610(SUB166(CONCAT412(iVar15,CONCAT210(sVar17,SUB1610(auVar14,0))) >> 0x50,0),
                            CONCAT28(sVar25,SUB168(auVar14,0)));
        uVar24 = -(ushort)(SUB162(auVar1,0) < 0);
        sVar20 = SUB162(auVar1 >> 0x20,0);
        sVar25 = -(ushort)(sVar20 < 0);
        sVar21 = SUB162(auVar1 >> 0x30,0);
        sVar22 = SUB162(auVar1 >> 0x40,0);
        sVar23 = SUB162(auVar1 >> 0x50,0);
        sVar26 = SUB162(auVar1 >> 0x60,0);
        *pauVar4 = CONCAT412((float)iVar15 * 3.051758e-05,
                             CONCAT48((float)SUB164(auVar13 >> 0x40,0) * 3.051758e-05,
                                      CONCAT44((float)SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar13
                                                                                                       >> 0x40,0),
                                                                                        (((ulonglong)
                                                                                                  CONCAT24(sVar17,CONCAT22(-(ushort)(SUB162(
                                                                                                          auVar14 >> 0x10,0) < 0),uVar16)) & 0xffff0000) >>
                                                                                                                                                         0x10) << 0x30) >> 0x30,0),
                                                                       (SUB166(auVar14,0) >> 0x10) << 0x20) >> 0x20,0) *
                                               3.051758e-05,
                                               (float)(SUB164(auVar14,0) & 0xffff | (uint)uVar16 << 0x10
                                               ) * 3.051758e-05)));
        *(float *)pauVar4[1] = (float)iVar18 * 3.051758e-05;
        *(float *)(pauVar4[1] + 4) = (float)(int)((ulonglong)uVar6 >> 0x20) * 3.051758e-05;
        *(float *)(pauVar4[1] + 8) = (float)SUB124(auVar19 >> 0x40,0) * 3.051758e-05;
        *(float *)(pauVar4[1] + 0xc) =
                (float)SUB164(CONCAT214(-(ushort)(auVar14 < (undefined  [16])0x0),
                                        CONCAT212(SUB162(auVar14 >> 0x70,0),auVar19)) >> 0x60,0) *
                3.051758e-05;
        iVar15 = SUB164(CONCAT214(-(ushort)(sVar21 < 0),CONCAT212(sVar21,SUB1612(auVar1,0))) >> 0x60,0);
        auVar14 = CONCAT610(SUB166(CONCAT412(iVar15,CONCAT210(sVar25,SUB1610(auVar1,0))) >> 0x50,0),
                            CONCAT28(sVar20,SUB168(auVar1,0)));
        iVar18 = CONCAT22(-(ushort)(sVar22 < 0),sVar22);
        uVar6 = CONCAT26(-(ushort)(sVar23 < 0),CONCAT24(sVar23,iVar18));
        auVar19 = CONCAT210(-(ushort)(sVar26 < 0),CONCAT28(sVar26,uVar6));
        *(float *)pauVar4[2] = (float)(SUB164(auVar1,0) & 0xffff | (uint)uVar24 << 0x10) * 3.051758e-05;
        *(float *)(pauVar4[2] + 4) =
                (float)SUB164(CONCAT106(SUB1610(CONCAT88(SUB168(auVar14 >> 0x40,0),
                                                         (((ulonglong)
                                                                   CONCAT24(sVar25,CONCAT22(-(ushort)(SUB162(auVar1
                                                                                                                     >>
                                                                                                                     0x10,0) < 0),uVar24)) & 0xffff0000) >> 0x10) <<
                                                                                                                                                                  0x30) >> 0x30,0),
                                        (SUB166(auVar1,0) >> 0x10) << 0x20) >> 0x20,0) * 3.051758e-05;
        *(float *)(pauVar4[2] + 8) = (float)SUB164(auVar14 >> 0x40,0) * 3.051758e-05;
        *(float *)(pauVar4[2] + 0xc) = (float)iVar15 * 3.051758e-05;
        *(float *)pauVar4[3] = (float)iVar18 * 3.051758e-05;
        *(float *)(pauVar4[3] + 4) = (float)(int)((ulonglong)uVar6 >> 0x20) * 3.051758e-05;
        *(float *)(pauVar4[3] + 8) = (float)SUB124(auVar19 >> 0x40,0) * 3.051758e-05;
        *(float *)(pauVar4[3] + 0xc) =
                (float)SUB164(CONCAT214(-(ushort)(auVar1 < (undefined  [16])0x0),
                                        CONCAT212(SUB162(auVar1 >> 0x70,0),auVar19)) >> 0x60,0) *
                3.051758e-05;
        pauVar4 = pauVar4[4];
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        puVar5 = *pauVar9;
        pauVar9 = (undefined (*) [16])(*pauVar9 + 2);
        *(float *)*pauVar4 = (float)(int)*(short *)puVar5 * 3.051758e-05;
        pauVar4 = (undefined (*) [16])(*pauVar4 + 4);
    }
    if (uVar12 != 0) {
        FUN_1407db590(param_4,(longlong)pauVar9 + (ulonglong)uVar12 * -2,(ulonglong)uVar12 * 2,pauVar4,
                      CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                      CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    }
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar3;
    *(short *)((longlong)param_2 + 0x12) = (short)uVar3 + *(short *)(param_4 + 0x1c);
    *(undefined4 *)(param_4 + 0x20) = 0x10000;
    if (uVar3 == uVar2) {
        *(undefined4 *)(param_4 + 0x18) = 0;
    }
    else {
        *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + uVar3;
    }
    if (uVar3 == uVar10) {
        uVar6 = 0x2d;
    }
    else {
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + uVar3;
        uVar6 = 0x2b;
    }
    return uVar6;
}



undefined8 FUN_14087cd40(longlong *param_1,longlong *param_2,int param_3,short *param_4)

{
    short *psVar1;
    ushort uVar2;
    short sVar3;
    short sVar4;
    int iVar5;
    undefined8 uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    float *pfVar13;
    float *pfVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    int iVar18;
    ulonglong uVar9;

    uVar10 = *(uint *)(param_4 + 0x12);
    uVar16 = *(uint *)(param_4 + 0x10);
    uVar2 = *(ushort *)((longlong)param_1 + 0x12);
    uVar11 = (uint)uVar2;
    uVar17 = param_3 - *(uint *)(param_4 + 0xe);
    uVar12 = uVar16 & 0xffff;
    uVar9 = (ulonglong)((uVar10 - uVar16) + 0xffff) / (ulonglong)uVar10;
    psVar1 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0xc) * 2);
    pfVar14 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0xe) * 4);
    if (uVar17 < (uint)uVar9) {
        uVar9 = (ulonglong)uVar17;
    }
    iVar18 = (int)uVar9;
    if (iVar18 != 0) {
        sVar3 = *param_4;
        sVar4 = *psVar1;
        pfVar13 = pfVar14;
        do {
            uVar16 = uVar16 + uVar10;
            pfVar14 = pfVar13 + 1;
            iVar5 = ((int)sVar4 - (int)sVar3) * uVar12;
            uVar12 = uVar16 & 0xffff;
            *pfVar13 = (float)(iVar5 + sVar3 * 0x10000) * 4.656613e-10;
            uVar7 = (int)uVar9 - 1;
            uVar9 = (ulonglong)uVar7;
            pfVar13 = pfVar14;
        } while (uVar7 != 0);
    }
    uVar9 = (ulonglong)((uVar11 * 0x10000 - uVar16) + -1 + uVar10) / (ulonglong)uVar10;
    if (uVar17 - iVar18 < (uint)uVar9) {
        uVar9 = (ulonglong)(uVar17 - iVar18);
    }
    uVar8 = (uint)uVar9;
    uVar7 = uVar8;
    while( true ) {
        uVar15 = uVar16 >> 0x10;
        if (uVar7 == 0) break;
        uVar16 = uVar16 + uVar10;
        iVar5 = ((int)psVar1[(ulonglong)(uVar15 + 1) - 1] - (int)psVar1[(ulonglong)uVar15 - 1]) * uVar12
                ;
        uVar12 = uVar16 & 0xffff;
        *pfVar14 = (float)(iVar5 + psVar1[(ulonglong)uVar15 - 1] * 0x10000) * 4.656613e-10;
        uVar7 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar7;
        pfVar14 = pfVar14 + 1;
    }
    uVar9 = (ulonglong)uVar11;
    if (uVar15 < uVar2) {
        uVar9 = (ulonglong)uVar15;
    }
    uVar10 = (uint)uVar9;
    if (uVar10 != 0) {
        *param_4 = psVar1[uVar9 - 1];
    }
    uVar8 = uVar8 + iVar18;
    *(uint *)(param_4 + 0x10) = uVar16 + uVar10 * -0x10000;
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar9;
    *(short *)((longlong)param_2 + 0x12) = (short)uVar8 + param_4[0xe];
    if (uVar10 == uVar11) {
        *(undefined4 *)(param_4 + 0xc) = 0;
    }
    else {
        *(uint *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + uVar10;
    }
    if (uVar8 == uVar17) {
        uVar6 = 0x2d;
    }
    else {
        *(uint *)(param_4 + 0xe) = *(int *)(param_4 + 0xe) + uVar8;
        uVar6 = 0x2b;
    }
    return uVar6;
}



undefined8 FUN_14087d150(longlong *param_1,longlong *param_2,int param_3,float *param_4)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    ushort uVar4;
    float fVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar12;
    uint uVar13;
    float *pfVar14;
    float *pfVar15;
    uint uVar16;
    float fVar17;
    int iVar18;
    uint uVar19;
    ulonglong uVar11;

    fVar5 = param_4[9];
    fVar17 = param_4[8];
    uVar4 = *(ushort *)((longlong)param_1 + 0x12);
    uVar12 = (uint)uVar4;
    uVar19 = param_3 - (int)param_4[7];
    fVar2 = *param_4;
    uVar13 = (uint)fVar17 & 0xffff;
    uVar11 = (ulonglong)(((int)fVar5 - (int)fVar17) + 0xffff) / (ulonglong)(uint)fVar5;
    pfVar1 = (float *)(*param_1 + (ulonglong)(uint)param_4[6] * 4);
    pfVar15 = (float *)(*param_2 + (ulonglong)(uint)param_4[7] * 4);
    if (uVar19 < (uint)uVar11) {
        uVar11 = (ulonglong)uVar19;
    }
    iVar18 = (int)uVar11;
    if (iVar18 != 0) {
        fVar3 = *pfVar1;
        pfVar14 = pfVar15;
        do {
            uVar6 = (ulonglong)uVar13;
            fVar17 = (float)((int)fVar17 + (int)fVar5);
            pfVar15 = pfVar14 + 1;
            uVar13 = (uint)fVar17 & 0xffff;
            *pfVar14 = (float)uVar6 * 1.525879e-05 * (fVar3 - fVar2) + fVar2;
            uVar9 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar9;
            pfVar14 = pfVar15;
        } while (uVar9 != 0);
    }
    uVar11 = (ulonglong)((uVar12 * 0x10000 - (int)fVar17) + -1 + (int)fVar5) / (ulonglong)(uint)fVar5;
    if (uVar19 - iVar18 < (uint)uVar11) {
        uVar11 = (ulonglong)(uVar19 - iVar18);
    }
    uVar10 = (uint)uVar11;
    uVar9 = uVar10;
    while( true ) {
        uVar16 = (uint)fVar17 >> 0x10;
        uVar6 = (ulonglong)uVar16;
        if (uVar9 == 0) break;
        fVar17 = (float)((int)fVar17 + (int)fVar5);
        uVar7 = (ulonglong)uVar13;
        uVar13 = (uint)fVar17 & 0xffff;
        *pfVar15 = (pfVar1[(ulonglong)(uVar16 + 1) - 1] - pfVar1[uVar6 - 1]) *
                   (float)uVar7 * 1.525879e-05 + pfVar1[uVar6 - 1];
        uVar9 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar9;
        pfVar15 = pfVar15 + 1;
    }
    uVar11 = (ulonglong)uVar12;
    if (uVar16 < uVar4) {
        uVar11 = uVar6;
    }
    uVar13 = (uint)uVar11;
    if (uVar13 != 0) {
        *param_4 = pfVar1[uVar11 - 1];
    }
    uVar10 = uVar10 + iVar18;
    param_4[8] = (float)((int)fVar17 + uVar13 * -0x10000);
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar11;
    *(short *)((longlong)param_2 + 0x12) = (short)uVar10 + *(short *)(param_4 + 7);
    if (uVar13 == uVar12) {
        param_4[6] = 0.0;
    }
    else {
        param_4[6] = (float)((int)param_4[6] + uVar13);
    }
    if (uVar10 == uVar19) {
        uVar8 = 0x2d;
    }
    else {
        param_4[7] = (float)((int)param_4[7] + uVar10);
        uVar8 = 0x2b;
    }
    return uVar8;
}



undefined8 FUN_14087d520(longlong *param_1,longlong *param_2,int param_3,short *param_4)

{
    short *psVar1;
    float *pfVar2;
    uint uVar3;
    undefined8 uVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    uint uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    int iVar13;
    float *pfVar14;
    float *pfVar15;
    longlong lVar16;
    uint uVar17;
    int iVar18;
    ulonglong uVar19;
    uint uVar20;
    ulonglong uVar9;

    uVar8 = *(uint *)(param_4 + 0x18);
    uVar10 = *(uint *)(param_4 + 0x10);
    uVar3 = (uint)*(ushort *)((longlong)param_1 + 0x12);
    uVar17 = param_3 - *(uint *)(param_4 + 0xe);
    psVar1 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0xc) * 2);
    pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0xe) * 4);
    iVar18 = *(int *)(param_4 + 0x16);
    iVar13 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x12);
    iVar5 = *(int *)(param_4 + 0x12) * 0x400;
    uVar9 = (ulonglong)(0x400 - iVar18) / (ulonglong)uVar8;
    uVar19 = (ulonglong)(uVar10 >> 0x10);
    uVar20 = uVar10 & 0xffff;
    uVar11 = (longlong)((ulonglong)uVar17 * 4) >> 2;
    uVar12 = uVar11 & 0xffffffff;
    if ((uint)uVar9 <= (uint)uVar11) {
        uVar12 = uVar9;
    }
    pfVar15 = pfVar2;
    if (uVar10 >> 0x10 == 0) {
        uVar7 = iVar13 * iVar18 + iVar5;
        pfVar14 = pfVar2;
        do {
            iVar6 = (int)uVar12;
            uVar12 = (ulonglong)(iVar6 - 1);
            pfVar15 = pfVar14;
            if (iVar6 == 0) break;
            uVar7 = uVar7 + iVar13 * uVar8;
            pfVar15 = pfVar14 + 1;
            iVar18 = iVar18 + uVar8;
            iVar6 = ((int)*psVar1 - (int)*param_4) * uVar20;
            uVar10 = uVar10 + (uVar7 >> 10);
            uVar20 = uVar10 & 0xffff;
            uVar19 = (ulonglong)(uVar10 >> 0x10);
            *pfVar14 = (float)(iVar6 + *param_4 * 0x10000) * 4.656613e-10;
            pfVar14 = pfVar15;
        } while (uVar10 >> 0x10 == 0);
    }
    uVar11 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar17 * 4 - (longlong)pfVar15)) >> 2;
    uVar9 = (ulonglong)(0x400 - iVar18) / (ulonglong)uVar8;
    uVar12 = uVar11 & 0xffffffff;
    if ((uint)uVar9 <= (uint)uVar11) {
        uVar12 = uVar9;
    }
    if ((uint)uVar19 <= uVar3 - 1) {
        uVar7 = iVar13 * iVar18 + iVar5;
        pfVar14 = pfVar15;
        do {
            iVar5 = (int)uVar12;
            uVar12 = (ulonglong)(iVar5 - 1);
            pfVar15 = pfVar14;
            if (iVar5 == 0) break;
            lVar16 = uVar19 - 1;
            uVar7 = uVar7 + iVar13 * uVar8;
            pfVar15 = pfVar14 + 1;
            iVar18 = iVar18 + uVar8;
            iVar5 = ((int)psVar1[(ulonglong)((int)uVar19 + 1) - 1] - (int)psVar1[lVar16]) * uVar20;
            uVar10 = uVar10 + (uVar7 >> 10);
            uVar20 = uVar10 & 0xffff;
            uVar19 = (ulonglong)(uVar10 >> 0x10);
            *pfVar14 = (float)(iVar5 + psVar1[lVar16] * 0x10000) * 4.656613e-10;
            pfVar14 = pfVar15;
        } while (uVar10 >> 0x10 <= uVar3 - 1);
    }
    *(int *)(param_4 + 0x16) = iVar18;
    uVar9 = (ulonglong)uVar3;
    if ((uint)uVar19 < uVar3) {
        uVar9 = uVar19;
    }
    uVar8 = (uint)uVar9;
    if (uVar8 != 0) {
        *param_4 = psVar1[uVar9 - 1];
    }
    lVar16 = (longlong)pfVar15 - (longlong)pfVar2 >> 2;
    *(uint *)(param_4 + 0x10) = uVar10 + uVar8 * -0x10000;
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar9;
    *(short *)((longlong)param_2 + 0x12) = (short)lVar16 + param_4[0xe];
    if (uVar8 == uVar3) {
        *(undefined4 *)(param_4 + 0xc) = 0;
    }
    else {
        *(uint *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + uVar8;
    }
    uVar8 = (uint)lVar16;
    if (uVar8 == uVar17) {
        uVar4 = 0x2d;
    }
    else {
        *(uint *)(param_4 + 0xe) = *(int *)(param_4 + 0xe) + uVar8;
        uVar4 = 0x2b;
    }
    return uVar4;
}



undefined8 FUN_14087da40(longlong *param_1,longlong *param_2,int param_3,float *param_4)

{
    float *pfVar1;
    float *pfVar2;
    float fVar3;
    ushort uVar4;
    float fVar5;
    longlong lVar6;
    int iVar7;
    ulonglong uVar8;
    undefined8 uVar9;
    uint uVar10;
    float fVar11;
    int iVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    int iVar15;
    float *pfVar16;
    float *pfVar17;
    longlong lVar18;
    uint uVar19;
    float fVar20;
    ulonglong uVar21;
    uint uVar22;

    uVar4 = *(ushort *)((longlong)param_1 + 0x12);
    fVar3 = *param_4;
    fVar5 = param_4[0xc];
    fVar11 = param_4[8];
    pfVar1 = (float *)(*param_1 + (ulonglong)(uint)param_4[6] * 4);
    uVar19 = param_3 - (int)param_4[7];
    pfVar2 = (float *)(*param_2 + (ulonglong)(uint)param_4[7] * 4);
    fVar20 = param_4[0xb];
    iVar15 = (int)param_4[10] - (int)param_4[9];
    iVar7 = (int)param_4[9] * 0x400;
    uVar8 = (ulonglong)(0x400 - (int)fVar20) / (ulonglong)(uint)fVar5;
    uVar21 = (ulonglong)((uint)fVar11 >> 0x10);
    uVar22 = (uint)fVar11 & 0xffff;
    uVar13 = (longlong)((ulonglong)uVar19 * 4) >> 2;
    uVar14 = uVar13 & 0xffffffff;
    if ((uint)uVar8 <= (uint)uVar13) {
        uVar14 = uVar8;
    }
    pfVar17 = pfVar2;
    if ((uint)fVar11 >> 0x10 == 0) {
        uVar10 = iVar15 * (int)fVar20 + iVar7;
        pfVar16 = pfVar2;
        do {
            iVar12 = (int)uVar14;
            uVar14 = (ulonglong)(iVar12 - 1);
            pfVar17 = pfVar16;
            if (iVar12 == 0) break;
            uVar8 = (ulonglong)uVar22;
            uVar10 = uVar10 + iVar15 * (int)fVar5;
            pfVar17 = pfVar16 + 1;
            fVar20 = (float)((int)fVar20 + (int)fVar5);
            fVar11 = (float)((int)fVar11 + (uVar10 >> 10));
            uVar22 = (uint)fVar11 & 0xffff;
            uVar21 = (ulonglong)((uint)fVar11 >> 0x10);
            *pfVar16 = (*pfVar1 - fVar3) * (float)uVar8 * 1.525879e-05 + fVar3;
            pfVar16 = pfVar17;
        } while ((uint)fVar11 >> 0x10 == 0);
    }
    uVar13 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar19 * 4 - (longlong)pfVar17)) >> 2;
    uVar8 = (ulonglong)(0x400 - (int)fVar20) / (ulonglong)(uint)fVar5;
    uVar14 = uVar13 & 0xffffffff;
    if ((uint)uVar8 <= (uint)uVar13) {
        uVar14 = uVar8;
    }
    if ((uint)uVar21 <= uVar4 - 1) {
        uVar10 = iVar15 * (int)fVar20 + iVar7;
        pfVar16 = pfVar17;
        do {
            iVar7 = (int)uVar14;
            uVar14 = (ulonglong)(iVar7 - 1);
            pfVar17 = pfVar16;
            if (iVar7 == 0) break;
            iVar7 = (int)uVar21;
            uVar10 = uVar10 + iVar15 * (int)fVar5;
            pfVar17 = pfVar16 + 1;
            fVar20 = (float)((int)fVar20 + (int)fVar5);
            uVar8 = (ulonglong)uVar22;
            lVar18 = uVar21 - 1;
            fVar11 = (float)((int)fVar11 + (uVar10 >> 10));
            uVar22 = (uint)fVar11 & 0xffff;
            lVar6 = uVar21 - 1;
            uVar21 = (ulonglong)((uint)fVar11 >> 0x10);
            *pfVar16 = (pfVar1[(ulonglong)(iVar7 + 1) - 1] - pfVar1[lVar18]) * (float)uVar8 * 1.525879e-05
                       + pfVar1[lVar6];
            pfVar16 = pfVar17;
        } while ((uint)fVar11 >> 0x10 <= uVar4 - 1);
    }
    param_4[0xb] = fVar20;
    uVar8 = (ulonglong)(uint)uVar4;
    if ((uint)uVar21 < (uint)uVar4) {
        uVar8 = uVar21;
    }
    uVar22 = (uint)uVar8;
    if (uVar22 != 0) {
        *param_4 = pfVar1[uVar8 - 1];
    }
    lVar18 = (longlong)pfVar17 - (longlong)pfVar2 >> 2;
    param_4[8] = (float)((int)fVar11 + uVar22 * -0x10000);
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar8;
    *(short *)((longlong)param_2 + 0x12) = (short)lVar18 + *(short *)(param_4 + 7);
    if (uVar22 == uVar4) {
        param_4[6] = 0.0;
    }
    else {
        param_4[6] = (float)((int)param_4[6] + uVar22);
    }
    uVar22 = (uint)lVar18;
    if (uVar22 == uVar19) {
        uVar9 = 0x2d;
    }
    else {
        param_4[7] = (float)((int)param_4[7] + uVar22);
        uVar9 = 0x2b;
    }
    return uVar9;
}



void FUN_14087e070(undefined8 *param_1,longlong *param_2)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    uint uVar9;
    uint uVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    uint uVar13;
    undefined4 *puVar14;
    uint uVar15;
    uint uVar16;
    int iVar17;
    ulonglong uVar18;

    uVar1 = *(ushort *)((longlong)param_2 + 0x12);
    uVar13 = 0;
    uVar3 = *(uint *)(param_1 + 1);
    for (uVar15 = uVar3; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
        uVar13 = uVar13 + 1;
    }
    uVar15 = 0;
    if (uVar13 != 0) {
        puVar14 = (undefined4 *)*param_1;
        lVar5 = *param_2;
        uVar2 = *(ushort *)(param_2 + 2);
        do {
            uVar10 = uVar15;
            if ((uVar3 & 8) != 0) {
                uVar16 = 0;
                for (uVar9 = uVar3 & 7; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
                    uVar16 = uVar16 + 1;
                }
                if (uVar15 == uVar16) {
                    iVar17 = 0;
                    for (uVar10 = uVar3; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
                        iVar17 = iVar17 + 1;
                    }
                    uVar10 = iVar17 - 1;
                }
                else if (uVar16 < uVar15) {
                    uVar10 = uVar15 - 1;
                }
            }
            uVar9 = 0;
            puVar12 = (undefined4 *)(lVar5 + (ulonglong)uVar10 * (ulonglong)uVar2 * 4);
            puVar8 = puVar14;
            if (3 < uVar1) {
                uVar9 = (uVar1 - 4 >> 2) + 1;
                uVar18 = (ulonglong)uVar9;
                uVar9 = uVar9 * 4;
                puVar11 = puVar12;
                do {
                    puVar6 = puVar8 + uVar13;
                    puVar12 = puVar11 + 4;
                    *puVar11 = *puVar8;
                    puVar7 = puVar6 + uVar13;
                    puVar11[1] = *puVar6;
                    puVar11[2] = *puVar7;
                    puVar8 = puVar7 + uVar13 + uVar13;
                    puVar11[3] = puVar7[uVar13];
                    uVar18 = uVar18 - 1;
                    puVar11 = puVar12;
                } while (uVar18 != 0);
            }
            if (uVar9 < uVar1) {
                uVar18 = (ulonglong)(uVar1 - uVar9);
                do {
                    uVar4 = *puVar8;
                    puVar8 = puVar8 + uVar13;
                    *puVar12 = uVar4;
                    uVar18 = uVar18 - 1;
                    puVar12 = puVar12 + 1;
                } while (uVar18 != 0);
            }
            uVar15 = uVar15 + 1;
            puVar14 = puVar14 + 1;
        } while (uVar15 < uVar13);
    }
    return;
}



undefined8 FUN_14087e510(longlong *param_1,longlong *param_2,int param_3,float *param_4)

{
    float fVar1;
    float fVar2;
    ushort uVar3;
    ushort uVar4;
    ushort uVar5;
    float fVar6;
    float fVar7;
    longlong lVar8;
    uint uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    float *pfVar13;
    uint uVar14;
    longlong lVar15;
    longlong lVar16;
    uint uVar17;
    uint uVar18;
    float *pfVar19;
    float *pfVar20;
    float fVar21;
    float *pfVar22;
    ulonglong uVar23;
    ulonglong local_68;

    uVar3 = *(ushort *)((longlong)param_1 + 0x12);
    fVar6 = param_4[9];
    fVar7 = param_4[8];
    uVar17 = param_3 - (int)param_4[7];
    uVar9 = *(uint *)(param_1 + 1);
    uVar10 = (((int)fVar6 - (int)fVar7) + 0xffffU) / (uint)fVar6;
    if (uVar17 < uVar10) {
        uVar10 = uVar17;
    }
    uVar14 = 0;
    for (; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
        uVar14 = uVar14 + 1;
    }
    fVar21 = fVar7;
    uVar9 = uVar10;
    if (uVar14 != 0) {
        uVar4 = *(ushort *)(param_1 + 2);
        uVar5 = *(ushort *)(param_2 + 2);
        pfVar13 = (float *)(*param_2 + (ulonglong)(uint)param_4[7] * 4);
        lVar15 = *param_1 + -4 + (ulonglong)(uint)param_4[6] * 4;
        local_68 = (ulonglong)uVar14;
        pfVar22 = param_4;
        do {
            fVar1 = *pfVar22;
            pfVar20 = pfVar13;
            fVar21 = fVar7;
            uVar12 = (uint)fVar7 & 0xffff;
            if (uVar10 != 0) {
                fVar2 = *(float *)(lVar15 + 4);
                pfVar19 = pfVar13;
                uVar9 = uVar10;
                do {
                    uVar11 = (ulonglong)uVar12;
                    fVar21 = (float)((int)fVar21 + (int)fVar6);
                    pfVar20 = pfVar19 + 1;
                    uVar12 = (uint)fVar21 & 0xffff;
                    *pfVar19 = (float)uVar11 * 1.525879e-05 * (fVar2 - fVar1) + fVar1;
                    uVar9 = uVar9 - 1;
                    pfVar19 = pfVar20;
                } while (uVar9 != 0);
            }
            uVar11 = (ulonglong)(((uint)uVar3 * 0x10000 - (int)fVar21) + -1 + (int)fVar6) /
                     (ulonglong)(uint)fVar6;
            if (uVar17 - uVar10 < (uint)uVar11) {
                uVar11 = (ulonglong)(uVar17 - uVar10);
            }
            uVar9 = (uint)uVar11;
            uVar18 = uVar9;
            while (uVar18 != 0) {
                uVar18 = (uint)fVar21 >> 0x10;
                fVar21 = (float)((int)fVar21 + (int)fVar6);
                uVar23 = (ulonglong)uVar12;
                uVar12 = (uint)fVar21 & 0xffff;
                *pfVar20 = (*(float *)(lVar15 + (ulonglong)(uVar18 + 1) * 4) -
                            *(float *)(lVar15 + (ulonglong)uVar18 * 4)) * (float)uVar23 * 1.525879e-05 +
                           *(float *)(lVar15 + (ulonglong)uVar18 * 4);
                uVar18 = (int)uVar11 - 1;
                uVar11 = (ulonglong)uVar18;
                pfVar20 = pfVar20 + 1;
            }
            pfVar13 = pfVar13 + uVar5;
            lVar15 = lVar15 + (ulonglong)uVar4 * 4;
            pfVar22 = pfVar22 + 1;
            local_68 = local_68 - 1;
        } while (local_68 != 0);
    }
    uVar12 = (uint)uVar3;
    if ((uint)fVar21 >> 0x10 < (uint)uVar3) {
        uVar12 = (uint)fVar21 >> 0x10;
    }
    if (uVar12 != 0) {
        uVar18 = 0;
        lVar15 = 0;
        if (3 < (int)uVar14) {
            lVar16 = 2;
            uVar11 = (ulonglong)uVar12;
            uVar18 = (uVar14 - 4 >> 2) + 1;
            uVar23 = (ulonglong)uVar18;
            uVar18 = uVar18 * 4;
            pfVar13 = param_4 + 2;
            do {
                lVar8 = (ulonglong)*(ushort *)(param_1 + 2) * lVar15;
                lVar15 = lVar15 + 4;
                pfVar13[-2] = *(float *)(*param_1 + -4 + ((ulonglong)(uint)param_4[6] + lVar8 + uVar11) * 4)
                ;
                pfVar13[-1] = *(float *)(*param_1 + -4 +
                                         ((ulonglong)(uint)param_4[6] +
                                                           (ulonglong)*(ushort *)(param_1 + 2) * (lVar16 + -1) + uVar11) * 4);
                *pfVar13 = *(float *)(*param_1 + -4 +
                                      ((ulonglong)(uint)param_4[6] +
                                                        (ulonglong)*(ushort *)(param_1 + 2) * lVar16 + uVar11) * 4);
                lVar8 = lVar16 + 1;
                lVar16 = lVar16 + 4;
                pfVar13[1] = *(float *)(*param_1 + -4 +
                                        ((ulonglong)(uint)param_4[6] +
                                                          (ulonglong)*(ushort *)(param_1 + 2) * lVar8 + uVar11) * 4);
                uVar23 = uVar23 - 1;
                pfVar13 = pfVar13 + 4;
            } while (uVar23 != 0);
        }
        if (uVar18 < uVar14) {
            uVar11 = (ulonglong)(uVar14 - uVar18);
            do {
                param_4[lVar15] =
                        *(float *)(*param_1 + -4 +
                                   ((ulonglong)(uint)param_4[6] +
                                                     (ulonglong)*(ushort *)(param_1 + 2) * lVar15 + (ulonglong)uVar12) * 4);
                uVar11 = uVar11 - 1;
                lVar15 = lVar15 + 1;
            } while (uVar11 != 0);
        }
    }
    uVar10 = uVar10 + uVar9;
    param_4[8] = (float)((int)fVar21 + uVar12 * -0x10000);
    *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar12;
    *(short *)((longlong)param_2 + 0x12) = (short)uVar10 + *(short *)(param_4 + 7);
    if (uVar12 == uVar3) {
        param_4[6] = 0.0;
    }
    else {
        param_4[6] = (float)((int)param_4[6] + uVar12);
    }
    if (uVar10 != uVar17) {
        param_4[7] = (float)((int)param_4[7] + uVar10);
        return 0x2b;
    }
    return 0x2d;
}



void FUN_14087e8f0(longlong *param_1,undefined8 *param_2)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    undefined4 uVar4;
    longlong lVar5;
    uint uVar6;
    uint uVar7;
    undefined4 *puVar8;
    uint uVar9;
    int iVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    uint uVar13;
    undefined4 *puVar14;
    uint uVar15;
    ulonglong uVar16;

    uVar1 = *(ushort *)((longlong)param_2 + 0x12);
    uVar13 = 0;
    uVar3 = *(uint *)(param_1 + 1);
    for (uVar15 = uVar3; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
        uVar13 = uVar13 + 1;
    }
    uVar15 = 0;
    if (uVar13 != 0) {
        puVar14 = (undefined4 *)*param_2;
        lVar5 = *param_1;
        uVar2 = *(ushort *)(param_1 + 2);
        do {
            uVar7 = uVar15;
            if ((uVar3 & 8) != 0) {
                uVar9 = 0;
                for (uVar6 = uVar3 & 7; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
                    uVar9 = uVar9 + 1;
                }
                if (uVar15 == uVar9) {
                    iVar10 = 0;
                    for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
                        iVar10 = iVar10 + 1;
                    }
                    uVar7 = iVar10 - 1;
                }
                else if (uVar9 < uVar15) {
                    uVar7 = uVar15 - 1;
                }
            }
            uVar6 = 0;
            puVar12 = (undefined4 *)(lVar5 + (ulonglong)uVar7 * (ulonglong)uVar2 * 4);
            puVar8 = puVar14;
            if (3 < uVar1) {
                uVar6 = (uVar1 - 4 >> 2) + 1;
                uVar16 = (ulonglong)uVar6;
                uVar6 = uVar6 * 4;
                puVar11 = puVar12;
                do {
                    puVar12 = puVar11 + 4;
                    *puVar8 = *puVar11;
                    puVar8 = puVar8 + uVar13;
                    *puVar8 = puVar11[1];
                    puVar8 = puVar8 + uVar13;
                    *puVar8 = puVar11[2];
                    puVar8[uVar13] = puVar11[3];
                    puVar8 = puVar8 + uVar13 + uVar13;
                    uVar16 = uVar16 - 1;
                    puVar11 = puVar12;
                } while (uVar16 != 0);
            }
            if (uVar6 < uVar1) {
                uVar16 = (ulonglong)(uVar1 - uVar6);
                do {
                    uVar4 = *puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar8 = uVar4;
                    puVar8 = puVar8 + uVar13;
                    uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
            }
            uVar15 = uVar15 + 1;
            puVar14 = puVar14 + 1;
        } while (uVar15 < uVar13);
    }
    return;
}



undefined8 * FUN_14087f300(undefined8 *param_1)

{
    FUN_1408768f0();
    *param_1 = &PTR_LAB_1409a7530;
    return param_1;
}



void FUN_14087f330(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a7530;
    FUN_140876920();
    return;
}



undefined8 FUN_14087f380(longlong *param_1,longlong param_2)

{
    ushort uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    uint uVar5;
    ulonglong uVar6;
    bool bVar7;

    uVar1 = *(ushort *)((longlong)param_1 + 0x3c);
    if (uVar1 < 0xb03) {
        if (uVar1 != 0xb02) {
            if (uVar1 < 0x803) {
                if (uVar1 != 0x802) {
                    if (0x702 < uVar1) {
                        if (uVar1 != 0x703) {
                            if (uVar1 == 0x704) goto LAB_14087f702;
                            if (uVar1 == 0x705) goto LAB_14087f699;
                            if (uVar1 == 0x708) goto LAB_14087f558;
                            if (uVar1 != 0x709) {
                                return 1;
                            }
                            goto LAB_14087f41d;
                        }
                        goto LAB_14087f780;
                    }
                    if (uVar1 == 0x702) goto LAB_14087f63c;
                    if (uVar1 != 0x602) {
                        if (uVar1 != 0x603) {
                            return 1;
                        }
                        goto LAB_14087f60c;
                    }
                }
                goto LAB_14087f5c8;
            }
            if (uVar1 < 0x903) {
                if (uVar1 == 0x902) goto LAB_14087f63c;
                if (uVar1 != 0x803) {
                    return 1;
                }
            }
            else {
                if (uVar1 < 0x909) {
                    if (uVar1 == 0x908) goto LAB_14087f558;
                    if (uVar1 != 0x903) {
                        if (uVar1 != 0x904) {
                            if (uVar1 != 0x905) {
                                return 1;
                            }
                            LAB_14087f699:
                            if ((undefined8 *)**(longlong **)(param_2 + 0x48) == (undefined8 *)0x0) {
                                return 1;
                            }
                            for (puVar2 = *(undefined8 **)(undefined8 *)**(longlong **)(param_2 + 0x48);
                                 puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
                                plVar4 = (longlong *)FUN_140830ee0(DAT_140c61ba8,puVar2 + 1);
                                if (plVar4 != (longlong *)0x0) {
                                    (**(code **)(*param_1 + 0x80))(param_1,plVar4,*(undefined8 *)(param_2 + 0x48));
                                    (**(code **)(*plVar4 + 0x10))(plVar4);
                                }
                            }
                            return 1;
                        }
                        goto LAB_14087f702;
                    }
                    LAB_14087f780:
                    plVar4 = (longlong *)FUN_140855940();
                    if (plVar4 == (longlong *)0x0) {
                        return 1;
                    }
                    (**(code **)(*param_1 + 0x80))(param_1,plVar4,*(undefined8 *)(param_2 + 0x48));
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                    return 1;
                }
                if (uVar1 == 0x909) goto LAB_14087f41d;
                if (uVar1 == 0xa02) goto LAB_14087f5c8;
                if (uVar1 != 0xa03) {
                    return 1;
                }
            }
            LAB_14087f60c:
            plVar4 = (longlong *)FUN_140855940();
            if (plVar4 == (longlong *)0x0) {
                return 1;
            }
            (**(code **)(*param_1 + 0x70))(param_1,plVar4,*(undefined8 *)(param_2 + 0x48));
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return 1;
        }
    }
    else {
        if (uVar1 < 0xe03) {
            if (uVar1 == 0xe02) {
                LAB_14087f5c8:
                plVar4 = (longlong *)FUN_140855940();
                if (plVar4 == (longlong *)0x0) {
                    return 1;
                }
                (**(code **)(*param_1 + 0x78))(param_1,plVar4);
                (**(code **)(*plVar4 + 0x10))(plVar4);
                return 1;
            }
            if (uVar1 < 0xb0a) {
                if (uVar1 == 0xb09) goto LAB_14087f41d;
                if (uVar1 == 0xb03) goto LAB_14087f780;
                if (uVar1 != 0xb04) {
                    if (uVar1 == 0xb05) goto LAB_14087f699;
                    if (uVar1 != 0xb08) {
                        return 1;
                    }
                    goto LAB_14087f558;
                }
            }
            else {
                if (uVar1 == 0xc02) goto LAB_14087f5c8;
                if (uVar1 == 0xd02) goto LAB_14087f63c;
                if (uVar1 != 0xd04) {
                    if (uVar1 != 0xd08) {
                        return 1;
                    }
                    LAB_14087f558:
                    FUN_14087f860(param_1,DAT_140c61ba0);
                    lVar3 = DAT_140c61ba0;
                    uVar6 = 0;
                    plVar4 = *(longlong **)(DAT_140c61ba0 + 0x38);
                    while( true ) {
                        if (plVar4 != (longlong *)0x0) goto LAB_14087f7c0;
                        uVar5 = (int)uVar6 + 1;
                        uVar6 = (ulonglong)uVar5;
                        if (0xc0 < uVar5) break;
                        plVar4 = *(longlong **)(DAT_140c61ba0 + 0x38 + uVar6 * 8);
                    }
                    bVar7 = true;
                    joined_r0x00014087f7b6:
                    if (bVar7) {
                        return 1;
                    }
                    LAB_14087f7c0:
                    do {
                        do {
                            FUN_14087f860(param_1,*(undefined8 *)plVar4[2]);
                            plVar4 = (longlong *)*plVar4;
                        } while (plVar4 != (longlong *)0x0);
                        do {
                            uVar5 = (int)uVar6 + 1;
                            uVar6 = (ulonglong)uVar5;
                            if (0xc0 < uVar5) {
                                bVar7 = plVar4 == (longlong *)0x0;
                                goto joined_r0x00014087f7b6;
                            }
                            plVar4 = *(longlong **)(lVar3 + 0x38 + uVar6 * 8);
                        } while (plVar4 == (longlong *)0x0);
                    } while( true );
                }
            }
            LAB_14087f702:
            FUN_14087f8d0(param_1,DAT_140c61ba0);
            lVar3 = DAT_140c61ba0;
            uVar6 = 0;
            plVar4 = *(longlong **)(DAT_140c61ba0 + 0x38);
            while( true ) {
                if (plVar4 != (longlong *)0x0) goto LAB_14087f740;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
                if (0xc0 < uVar5) break;
                plVar4 = *(longlong **)(DAT_140c61ba0 + 0x38 + uVar6 * 8);
            }
            bVar7 = true;
            joined_r0x00014087f739:
            if (bVar7) {
                return 1;
            }
            LAB_14087f740:
            do {
                do {
                    FUN_14087f8d0(param_1,*(undefined8 *)plVar4[2]);
                    plVar4 = (longlong *)*plVar4;
                } while (plVar4 != (longlong *)0x0);
                do {
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    if (0xc0 < uVar5) {
                        bVar7 = plVar4 == (longlong *)0x0;
                        goto joined_r0x00014087f739;
                    }
                    plVar4 = *(longlong **)(lVar3 + 0x38 + uVar6 * 8);
                } while (plVar4 == (longlong *)0x0);
            } while( true );
        }
        if (0xf02 < uVar1) {
            if (uVar1 < 0xf09) {
                if (uVar1 == 0xf08) goto LAB_14087f558;
                if (uVar1 != 0xf03) {
                    if (uVar1 != 0xf04) {
                        if (uVar1 != 0xf05) {
                            return 1;
                        }
                        goto LAB_14087f699;
                    }
                    goto LAB_14087f702;
                }
                goto LAB_14087f780;
            }
            if (uVar1 != 0xf09) {
                if (uVar1 < 0x1302) {
                    return 1;
                }
                if (0x1303 < uVar1) {
                    if (1 < uVar1 - 0x1402) {
                        return 1;
                    }
                    (**(code **)(*param_1 + 0x80))(param_1,0,*(undefined8 *)(param_2 + 0x48));
                    return 1;
                }
                (**(code **)(*param_1 + 0x70))(param_1,0,*(undefined8 *)(param_2 + 0x48));
                return 1;
            }
            LAB_14087f41d:
            if ((undefined8 *)**(longlong **)(param_2 + 0x48) == (undefined8 *)0x0) {
                return 1;
            }
            for (puVar2 = *(undefined8 **)(undefined8 *)**(longlong **)(param_2 + 0x48);
                 puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
                plVar4 = (longlong *)FUN_140830ee0(DAT_140c61ba8,puVar2 + 1);
                if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*param_1 + 0x98))(param_1,plVar4,*(undefined8 *)(param_2 + 0x48));
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                }
            }
            return 1;
        }
        if (uVar1 != 0xf02) {
            if (uVar1 != 0xe03) {
                return 1;
            }
            goto LAB_14087f60c;
        }
    }
    LAB_14087f63c:
    plVar4 = (longlong *)FUN_140855940();
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*param_1 + 0x88))(param_1,plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    return 1;
}



void FUN_14087f860(longlong *param_1,undefined8 *param_2)

{
    longlong *plVar1;

    if (param_2 != (undefined8 *)0x0) {
        for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
             param_2 = (undefined8 *)*param_2) {
            plVar1 = (longlong *)FUN_140830ee0(DAT_140c61ba8,param_2 + 1);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*param_1 + 0xa0))(param_1,plVar1);
                (**(code **)(*plVar1 + 0x10))(plVar1);
            }
        }
    }
    return;
}



void FUN_14087f8d0(longlong *param_1,undefined8 *param_2)

{
    longlong *plVar1;

    if (param_2 != (undefined8 *)0x0) {
        for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
             param_2 = (undefined8 *)*param_2) {
            plVar1 = (longlong *)FUN_140830ee0(DAT_140c61ba8,param_2 + 1);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*param_1 + 0x90))(param_1,plVar1);
                (**(code **)(*plVar1 + 0x10))(plVar1);
            }
        }
    }
    return;
}



void FUN_14087f940(longlong *param_1,byte **param_2,undefined8 param_3)

{
    byte bVar1;
    int iVar2;

    bVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) & 0xe0;
    *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | bVar1 & 0x1f;
    iVar2 = (**(code **)(*param_1 + 0x50))();
    if (iVar2 == 1) {
        FUN_140876b30(param_1,param_2,param_3);
    }
    return;
}



void FUN_14087f9a0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x218);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[0x42] = 0;
        *puVar1 = &PTR_FUN_1409a75e0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_14087fa40(void)

{
    if ((DAT_140c62900 & 1) == 0) {
        DAT_140c62900 = DAT_140c62900 | 1;
        _DAT_140c628f8 = &PTR_FUN_1409a75d8;
    }
    return &DAT_140c628f8;
}



void FUN_14087fa70(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))();
    return;
}



ulonglong FUN_14087fab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    longlong **pplVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined local_res8 [8];
    undefined4 local_28;
    undefined8 local_24;
    undefined8 local_18;
    undefined2 local_10;
    undefined4 local_c;

    pplVar1 = (longlong **)(param_1 + 0x210);
    if (*pplVar1 == (longlong *)0x0) {
        local_c = 0xffffffff;
        local_24 = 1;
        local_28 = 0;
        local_10 = 0;
        local_18 = 0;
        uVar3 = (**(code **)(*DAT_140c62930 + 0x20))(DAT_140c62930,param_2,&local_28,2,pplVar1,1);
        if ((int)uVar3 == 1) {
            uVar2 = (**(code **)(**pplVar1 + 0x38))(*pplVar1,param_3,0x2e,1,100,0,local_res8);
            uVar3 = (ulonglong)uVar2;
            if (uVar2 != 1) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
        }
        return uVar3;
    }
    return 1;
}



int FUN_14087fb80(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined local_res8 [8];

    plVar1 = *(longlong **)(param_1 + 0x210);
    if (plVar1 == (longlong *)0x0) {
        return 2;
    }
    iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,0,0,0);
    if (iVar2 == 1) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                (*(longlong **)(param_1 + 0x210),param_2,0x2e,1,0,0,local_res8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x210) + 8))();
    *(undefined8 *)(param_1 + 0x210) = 0;
    return iVar2;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_14087fc20(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
              undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10)

{
    bool bVar1;
    bool bVar2;
    uint uVar3;
    int *piVar4;
    undefined8 uVar5;
    uint uVar6;
    int iVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    uint uVar11;
    ulonglong uVar12;
    ulonglong local_res8;

    bVar2 = false;
    bVar1 = false;
    if ((param_1 == (int *)0x0) || (param_2 == 0)) {
        return 0x1f;
    }
    puVar10 = (ulonglong *)((ulonglong)param_2 + (longlong)param_1);
    *param_5 = 0;
    *param_6 = 0;
    if (((puVar10 < param_1 + 3) || (*param_1 != 0x46464952)) ||
        ((param_1[2] != 0x45564157 && (param_1[2] != 0x414d5758)))) {
        uVar5 = 7;
    }
    else {
        puVar9 = (ulonglong *)(param_1 + 3);
        iVar7 = (int)puVar9;
        while (uVar11 = (int)puVar10 - iVar7, 7 < uVar11) {
            uVar6 = 0;
            local_res8 = *puVar9;
            puVar8 = puVar9 + 1;
            uVar3 = (uint)(local_res8 >> 0x20);
            if ((uVar11 - 8 < uVar3) && ((uint)local_res8 != 0x61746164)) break;
            if ((uint)local_res8 < 0x61746165) {
                if ((uint)local_res8 == 0x61746164) {
                    if (!bVar1) {
                        return 7;
                    }
                    *param_7 = uVar3;
                    *param_8 = (int)puVar8 - (int)param_1;
                    return 1;
                }
                if ((uint)local_res8 == 0x20646b61) {
                    if (param_9 != (uint *)0x0) {
                        *(ulonglong **)(param_9 + 2) = puVar8;
                        *param_9 = uVar3;
                    }
                }
                else if ((uint)local_res8 == 0x20657563) {
                    if (!bVar1) {
                        return 7;
                    }
                    if ((!bVar2) && (param_4 != (uint *)0x0)) {
                        if (*(int *)puVar8 != 0) {
                            uVar5 = FUN_140881370();
                            if ((int)uVar5 != 1) {
                                return uVar5;
                            }
                            uVar12 = 0;
                            piVar4 = (int *)((longlong)puVar9 + 0xc);
                            if (*param_4 != 0) {
                                do {
                                    uVar11 = (int)uVar12 + 1;
                                    *(int *)(*(longlong *)(param_4 + 2) + uVar12 * 0x10) = *piVar4;
                                    *(int *)(*(longlong *)(param_4 + 2) + 4 + uVar12 * 0x10) = piVar4[1];
                                    *(undefined8 *)(*(longlong *)(param_4 + 2) + 8 + uVar12 * 0x10) = 0;
                                    piVar4 = piVar4 + 6;
                                    uVar12 = (ulonglong)uVar11;
                                } while (uVar11 < *param_4);
                            }
                        }
                        bVar2 = true;
                    }
                }
                else if ((uint)local_res8 == 0x20746d66) {
                    if (!bVar1) {
                        *(ulonglong **)(param_3 + 2) = puVar8;
                        bVar2 = false;
                        bVar1 = true;
                        *param_3 = uVar3;
                    }
                }
                else if ((uint)local_res8 == 0x5453494c) {
                    local_res8 = 0x400000000;
                }
            }
            else if ((uint)local_res8 == 0x6b656573) {
                if (param_10 != (uint *)0x0) {
                    *(ulonglong **)(param_10 + 2) = puVar8;
                    *param_10 = uVar3;
                }
            }
            else if ((uint)local_res8 == 0x6c62616c) {
                if ((bVar2) && (param_4 != (uint *)0x0)) {
                    if (*param_4 != 0) {
                        piVar4 = *(int **)(param_4 + 2);
                        do {
                            if (*piVar4 == *(int *)puVar8) {
                                FUN_140881660(param_4,uVar6,(int *)((longlong)puVar9 + 0xc),uVar3 - 4);
                                break;
                            }
                            uVar6 = uVar6 + 1;
                            piVar4 = piVar4 + 4;
                        } while (uVar6 < *param_4);
                    }
                }
            }
            else if (((uint)local_res8 == 0x6c706d73) && (*(int *)((longlong)puVar9 + 0x24) != 0)) {
                uVar11 = *(uint *)(puVar9 + 5);
                *param_5 = *(undefined4 *)((ulonglong)uVar11 + 0x2c + (longlong)puVar8);
                *param_6 = *(undefined4 *)((ulonglong)uVar11 + 0x30 + (longlong)puVar8);
            }
            puVar9 = (ulonglong *)((longlong)puVar8 + (local_res8 >> 0x20));
            if ((((local_res8 & 0x100000000) != 0) && (*(char *)puVar9 == '\0')) &&
                (puVar9 = (ulonglong *)((longlong)puVar9 + 1), puVar10 < puVar9)) {
                return 7;
            }
            iVar7 = (int)puVar9;
        }
        uVar5 = 8;
    }
    return uVar5;
}



undefined8 * FUN_14087ff30(undefined8 *param_1)

{
    FUN_1408611a0();
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = &PTR_FUN_1409a7600;
    FUN_140881360();
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined2 *)((longlong)param_1 + 0x54) = *(undefined2 *)(param_1[3] + 0x178);
    return param_1;
}



void FUN_14087ff90(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a7600;
    FUN_140001b70();
    *param_1 = &PTR_FUN_1409a2f80;
    return;
}



undefined8 * FUN_14087ffc0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7600;
    FUN_140001b70();
    *param_1 = &PTR_FUN_1409a2f80;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



ulonglong FUN_140880010(longlong param_1,uint param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    uint *puVar4;
    ulonglong in_RAX;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    uint *puVar9;

    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((lVar3 == 0) || (uVar1 = *(uint *)(lVar3 + 4), uVar1 == 0)) {
        return in_RAX;
    }
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x50);
    uVar5 = *(uint *)(param_1 + 0x50) + 1;
    uVar6 = *(uint *)(lVar3 + (uVar8 + 2) * 6);
    puVar9 = (uint *)(lVar3 + (uVar8 + 2) * 6);
    if (*(uint *)(param_1 + 0x2c) < param_2) {
        param_2 = 0;
    }
    else {
        param_2 = *(uint *)(param_1 + 0x2c) - param_2;
    }
    do {
        uVar7 = (uint)uVar8;
        if (uVar5 < uVar1) {
            puVar4 = (uint *)(lVar3 + ((ulonglong)uVar5 * 3 + 6) * 2);
            do {
                puVar9 = puVar4;
                uVar2 = *puVar9;
                if ((uVar6 <= param_2) && (param_2 < uVar2)) {
                    *(int *)(param_1 + 0x50) = (int)uVar8;
                    return (ulonglong)(uVar2 - uVar6);
                }
                uVar5 = uVar5 + 1;
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
                puVar4 = (uint *)((longlong)puVar9 + 6);
                uVar6 = uVar2;
            } while (uVar5 < uVar1);
        }
        if (*puVar9 <= param_2) {
            *(uint *)(param_1 + 0x50) = uVar7;
            return (ulonglong)*(ushort *)(puVar9 + 1);
        }
        uVar6 = *(uint *)(lVar3 + 0xc);
        puVar9 = (uint *)(lVar3 + 0xc);
        uVar8 = 0;
        uVar5 = 1;
    } while( true );
}



ulonglong FUN_1408801c0(longlong *param_1)

{
    byte bVar1;
    ushort uVar2;
    uint uVar3;
    longlong lVar4;
    short sVar5;
    short sVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    uint uVar10;
    float fVar11;

    lVar4 = param_1[3];
    if ((*(byte *)(lVar4 + 0x17f) & 4) == 0) {
        bVar1 = *(byte *)(lVar4 + 0x17f);
        uVar9 = DAT_140c110b4;
        if ((*(byte *)(lVar4 + 0x17e) & 0x80) != 0) {
            uVar9 = 0x177;
        }
        uVar8 = (ulonglong)
                SUB164(ZEXT816((ulonglong)*(uint *)(lVar4 + 0x174) * (ulonglong)*(uint *)(lVar4 + 0xc0))
                       / ZEXT416(uVar9),0);
    }
    else {
        if (*(short *)(lVar4 + 0x178) == 0) {
            fVar11 = ((float)(ulonglong)*(uint *)(param_1 + 5) * 1000.0) /
                     (float)(ulonglong)*(uint *)(lVar4 + 0xc0);
        }
        else {
            fVar11 = (float)(**(code **)(*param_1 + 0x58))();
        }
        lVar4 = param_1[3];
        bVar1 = *(byte *)(lVar4 + 0x17f);
        uVar8 = (ulonglong)
                (fVar11 * *(float *)(lVar4 + 0x174) * (float)(ulonglong)*(uint *)(lVar4 + 0xc0) * 0.001)
                ;
    }
    uVar2 = *(ushort *)(lVar4 + 0x178);
    uVar9 = *(uint *)((longlong)param_1 + 0x3c);
    uVar3 = *(uint *)(param_1 + 7);
    sVar6 = 0;
    *(ushort *)((longlong)param_1 + 0x54) = uVar2;
    if (((uVar2 != 1) && (uVar7 = (uint)uVar8, uVar9 < uVar7)) && (uVar3 < uVar9)) {
        uVar9 = (uVar9 - uVar3) + 1;
        uVar8 = (ulonglong)(uVar7 - uVar3) / (ulonglong)uVar9;
        if ((uint)uVar8 < (uint)uVar2) {
            if (uVar2 == 0) goto LAB_140880306;
            sVar5 = uVar2 - (short)uVar8;
        }
        else {
            if (uVar2 != 0) {
                *(undefined2 *)((longlong)param_1 + 0x54) = 1;
                uVar8 = (ulonglong)(uVar7 - (uVar2 - 1) * uVar9);
                goto LAB_140880317;
            }
            LAB_140880306:
            sVar5 = 0;
        }
        *(short *)((longlong)param_1 + 0x54) = sVar5;
        uVar8 = (ulonglong)((uVar7 - uVar3) % uVar9 + uVar3);
    }
    LAB_140880317:
    if (((bVar1 >> 3 & 1) == 0) || (lVar4 = FUN_140881570(), lVar4 == 0)) {
        return uVar8 & 0xffffffff;
    }
    uVar2 = *(ushort *)((longlong)param_1 + 0x54);
    uVar3 = *(uint *)((longlong)param_1 + 0x3c);
    uVar7 = *(uint *)(param_1 + 7);
    uVar9 = *(uint *)(lVar4 + 4);
    *(ushort *)((longlong)param_1 + 0x54) = uVar2;
    if (((uVar2 != 1) && (uVar3 < uVar9)) && (uVar7 < uVar3)) {
        uVar10 = (uVar3 - uVar7) + 1;
        uVar3 = (uVar9 - uVar7) / uVar10;
        if (uVar3 < uVar2) {
            if (uVar2 != 0) {
                sVar6 = uVar2 - (short)uVar3;
            }
        }
        else {
            sVar6 = 0;
            if (uVar2 != 0) {
                *(undefined2 *)((longlong)param_1 + 0x54) = 1;
                uVar9 = uVar9 - (uVar2 - 1) * uVar10;
                goto LAB_1408803a5;
            }
        }
        *(short *)((longlong)param_1 + 0x54) = sVar6;
        uVar9 = (uVar9 - uVar7) % uVar10 + uVar7;
    }
    LAB_1408803a5:
    return (ulonglong)uVar9;
}



void FUN_1408803d0(longlong param_1)

{
    FUN_1408814d0(param_1 + 0x40);
    return;
}



void FUN_1408803e0(longlong *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                   undefined4 param_5,undefined8 *param_6)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;

    if (param_3 == 0) {
        *(undefined2 *)((longlong)param_6 + 0x12) = 0;
        *(undefined4 *)(param_6 + 7) = 0x2e;
        return;
    }
    *param_6 = param_2;
    *(ushort *)(param_6 + 2) = param_3;
    *(ushort *)((longlong)param_6 + 0x12) = param_3;
    *(undefined4 *)(param_6 + 1) = param_5;
    FUN_1408813b0(param_1 + 8,param_1[3],param_6,*(undefined4 *)((longlong)param_1 + 0x2c));
    *(undefined4 *)((longlong)param_6 + 0x34) = param_4;
    *(undefined4 *)(param_6 + 5) = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(undefined4 *)(param_6 + 6) = *(undefined4 *)(param_1 + 5);
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + (uint)param_3;
    uVar1 = *(uint *)((longlong)param_1 + 0x2c);
    uVar2 = 0x2d;
    if (*(short *)((longlong)param_1 + 0x54) == 1) {
        if (uVar1 < *(uint *)(param_1 + 5)) goto LAB_140880497;
        uVar3 = 1;
    }
    else {
        if (uVar1 < *(uint *)((longlong)param_1 + 0x3c) || uVar1 == *(uint *)((longlong)param_1 + 0x3c))
            goto LAB_140880497;
        uVar3 = 0;
        *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1 + 7);
    }
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1,uVar3);
    LAB_140880497:
    *(undefined4 *)(param_6 + 7) = uVar2;
    return;
}



undefined8 FUN_1408804b0(longlong param_1,int *param_2)

{
    uint uVar1;
    short sVar2;
    int iVar3;
    undefined8 uVar4;

    iVar3 = *(int *)(param_1 + 0x2c);
    uVar1 = *param_2 + iVar3;
    sVar2 = *(short *)(param_1 + 0x54);
    uVar4 = 0x2d;
    *(uint *)(param_1 + 0x2c) = uVar1;
    if (sVar2 == 1) {
        if (*(uint *)(param_1 + 0x28) <= uVar1) {
            uVar4 = 0x11;
            *param_2 = *(uint *)(param_1 + 0x28) - iVar3;
        }
    }
    else if (*(uint *)(param_1 + 0x3c) < uVar1) {
        if (sVar2 != 0) {
            *(short *)(param_1 + 0x54) = sVar2 + -1;
        }
        *param_2 = (*(uint *)(param_1 + 0x3c) - iVar3) + 1;
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x38);
    }
    FUN_140880530(param_1,iVar3,*param_2,*(undefined4 *)(param_1 + 0x28));
    return uVar4;
}



void FUN_140880530(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
    longlong lVar1;
    int local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    FUN_1408815d0(param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),param_2,param_2 + param_3);
    lVar1 = *(longlong *)(param_1 + 0x18);
    if ((*(uint *)(lVar1 + 8) & 0x10000) != 0) {
        local_c = *(undefined4 *)(lVar1 + 0xc0);
        local_14 = 0x3f800000;
        local_18 = param_2;
        local_10 = param_4;
        FUN_140845660(DAT_140c61b60,*(undefined4 *)(lVar1 + 0x78),&local_18,param_1);
    }
    return;
}



undefined8 * FUN_1408805b0(undefined8 *param_1)

{
    FUN_14087ff30();
    *param_1 = &PTR_FUN_1409a76b0;
    *(byte *)((longlong)param_1 + 0x7e) = *(byte *)((longlong)param_1 + 0x7e) & 0xe0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
    return param_1;
}



void FUN_1408805f0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a76b0;
    if (((*(byte *)((longlong)param_1 + 0x7e) & 0x10) != 0) && (param_1[2] != 0)) {
        FUN_140881720(DAT_140c10f28);
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
        FUN_1408803d0(param_1);
    }
    FUN_14087ff90(param_1);
    return;
}



undefined8 * FUN_140880650(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a76b0;
    if (((*(byte *)((longlong)param_1 + 0x7e) & 0x10) != 0) && (param_1[2] != 0)) {
        FUN_140881720(DAT_140c10f28);
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
        FUN_1408803d0(param_1);
    }
    FUN_14087ff90(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_1408806d0(longlong param_1)

{
    int iVar1;

    iVar1 = FUN_140880da0();
    if (iVar1 != 1) {
        return 2;
    }
    if ((*(byte *)(param_1 + 0x7e) & 2) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))();
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        return 1;
    }
    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xfd;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    return 1;
}



int FUN_140880730(longlong param_1,undefined8 param_2,undefined param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined4 local_38;
    undefined8 local_34;
    undefined local_2c;
    undefined local_2b;
    uint local_28;
    uint local_24;
    undefined4 local_20;
    undefined8 local_18;
    byte local_10;
    byte local_f;
    undefined4 local_c;

    local_c = 0xffffffff;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa8);
    if ((*(longlong *)(lVar1 + 0x18) == 0) && (*(int *)(lVar1 + 4) == -1)) {
        return 2;
    }
    local_38 = 0x3f800000;
    local_34 = 0;
    local_2b = (undefined)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x184);
    if ((*(uint *)(lVar1 + 0x10) >> 8 & 1) == 0) {
        local_c = *(undefined4 *)(lVar1 + 4);
    }
    local_10 = *(byte *)(lVar1 + 0x10) & 1;
    local_24 = (uint)*(ushort *)(lVar1 + 0x22);
    local_f = (byte)(*(uint *)(lVar1 + 0x10) >> 9) & 1;
    local_20 = 0;
    local_18 = 0;
    local_28 = (uint)((*(uint *)(lVar1 + 0x10) & 0x100) != 0);
    local_2c = param_3;
    if ((*(uint *)(lVar1 + 0x10) >> 10 & 1) == 0) {
        iVar3 = (**(code **)(*DAT_140c62930 + 0x28))
                (DAT_140c62930,*(undefined4 *)(lVar1 + 4),&local_28,&local_38,param_2,
                 param_1 + 0x58);
    }
    else {
        iVar3 = (**(code **)(*DAT_140c62930 + 0x30))
                (DAT_140c62930,*(undefined8 *)(lVar1 + 0x18),&local_28,&local_38,param_2,
                 param_1 + 0x58,0);
    }
    iVar2 = 1;
    if (iVar3 != 1) {
        iVar2 = iVar3;
    }
    return iVar2;
}



undefined8 FUN_140880860(longlong param_1)

{
    undefined8 uVar1;
    undefined8 local_res8;
    undefined local_18 [13];
    undefined local_b;

    *(undefined8 *)(param_1 + 0x60) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
    local_b = (undefined)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x184);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
            (*(longlong **)(param_1 + 0x58),&local_res8,param_1 + 0x68,0);
    if (((int)uVar1 == 0x2d) || ((int)uVar1 == 0x11)) {
        if (*(int *)(param_1 + 0x68) == 0) {
            uVar1 = 2;
        }
        else {
            uVar1 = FUN_140880b20(param_1,local_res8,0);
            if ((int)uVar1 == 1) {
                return 0x2d;
            }
        }
    }
    return uVar1;
}



void FUN_140880900(longlong param_1,char param_2,longlong param_3)

{
    if (param_2 != '\0') {
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x78);
        return;
    }
    *(undefined8 *)(param_3 + 4) = 0;
    return;
}



ulonglong FUN_140880920(longlong *param_1,char *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    char cVar4;
    ulonglong uVar5;

    *param_2 = '\0';
    lVar2 = param_1[3];
    if (((*(uint *)(*(longlong *)(lVar2 + 0xa8) + 0x10) >> 1 & 1) != 0) &&
        ((*(byte *)(lVar2 + 0x17f) & 2) == 0)) {
        lVar3 = *(longlong *)(lVar2 + 0x1a0);
        iVar1 = *(int *)(lVar2 + 0x1a8);
        *(int *)(param_1 + 0xd) = iVar1;
        if ((lVar3 == 0) || (iVar1 == 0)) {
            cVar4 = '\0';
        }
        else {
            cVar4 = '\x01';
        }
        *param_2 = cVar4;
        *(byte *)((longlong)param_1 + 0x7e) = *(byte *)((longlong)param_1 + 0x7e) & 0xfd;
        *(byte *)((longlong)param_1 + 0x7e) = *(byte *)((longlong)param_1 + 0x7e) | cVar4 * '\x02';
        if (*param_2 != '\0') {
            uVar5 = (**(code **)(*param_1 + 0xa8))(param_1,lVar3);
            if ((int)uVar5 != 1) {
                return uVar5;
            }
            uVar5 = FUN_140880b20(param_1,lVar3,uVar5 & 0xff);
            if ((int)uVar5 != 1) {
                return uVar5;
            }
            if ((*(short *)((longlong)param_1 + 0x7c) == 0) &&
                (uVar5 = FUN_140880e10(param_1), (int)uVar5 != 1)) {
                return uVar5;
            }
            param_1[0xc] = param_1[0xc] + (ulonglong)*(uint *)((longlong)param_1 + 0x34);
            *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - *(uint *)((longlong)param_1 + 0x34);
        }
    }
    return 1;
}



ulonglong FUN_1408809f0(longlong *param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    undefined8 local_res8;

    *(byte *)(param_1 + 4) =
            *(byte *)(param_1 + 4) ^ (*(byte *)(param_1[3] + 0x17e) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
    iVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x78))
            ((longlong *)param_1[0xb],&local_res8,param_1 + 0xd,0);
    if (iVar1 == 0x2e) {
        return 0x3f;
    }
    if ((iVar1 != 0x2d) && (iVar1 != 0x11)) {
        return 2;
    }
    uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,local_res8);
    if ((int)uVar4 == 1) {
        if ((*(byte *)(param_1[3] + 0x17f) & 2) == 0) {
            iVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x68))((longlong *)param_1[0xb],0);
            iVar1 = *(int *)(param_1 + 0xe);
            uVar2 = FUN_140880b20(param_1,local_res8,0);
            uVar5 = *(int *)((longlong)param_1 + 0x34) - (iVar3 + iVar1);
            uVar4 = (ulonglong)uVar2;
            param_1[0xc] = param_1[0xc] + (ulonglong)uVar5;
            *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - uVar5;
        }
        else {
            uVar2 = FUN_140880da0();
            uVar4 = (ulonglong)uVar2;
            if (*(int *)(param_1 + 0xd) != 0) {
                if ((*(byte *)((longlong)param_1 + 0x7e) & 2) == 0) {
                    (**(code **)(*(longlong *)param_1[0xb] + 0x80))();
                    *(undefined4 *)(param_1 + 0xd) = 0;
                }
                else {
                    *(undefined4 *)(param_1 + 0xd) = 0;
                    *(byte *)((longlong)param_1 + 0x7e) = *(byte *)((longlong)param_1 + 0x7e) & 0xfd;
                }
            }
        }
        *(byte *)((longlong)param_1 + 0x7e) = *(byte *)((longlong)param_1 + 0x7e) | 4;
    }
    return uVar4;
}



undefined8 FUN_140880b20(longlong param_1,longlong param_2,byte param_3)

{
    ushort uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int local_res8 [2];
    undefined local_18 [8];
    undefined4 local_10;

    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xf7;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x68) - *(uint *)(param_1 + 0x70);
    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | (param_3 & 1) << 3;
    uVar1 = *(ushort *)(param_1 + 0x54);
    *(ulonglong *)(param_1 + 0x60) = param_2 + (ulonglong)*(uint *)(param_1 + 0x70);
    *(int *)(param_1 + 0x68) = iVar4;
    if ((uVar1 == 0) || ((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x7c) != 1)) {
        uVar2 = *(uint *)(param_1 + 0x78);
    }
    else {
        uVar2 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30);
    }
    if (*(uint *)(param_1 + 0x6c) < uVar2) {
        *(undefined4 *)(param_1 + 0x70) = 0;
    }
    else {
        *(uint *)(param_1 + 0x68) = (iVar4 - *(uint *)(param_1 + 0x6c)) + uVar2;
        if ((uVar1 != 0) && ((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x7c) == 1)) {
            *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | 1;
            return 1;
        }
        iVar4 = *(int *)(param_1 + 0x74);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x70))
                (*(longlong **)(param_1 + 0x58),iVar4,0,local_res8);
        if (iVar3 != 1) {
            return 2;
        }
        *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + 1;
        *(int *)(param_1 + 0x6c) = local_res8[0];
        *(int *)(param_1 + 0x70) = iVar4 - local_res8[0];
        if ((*(ushort *)(param_1 + 0x54) != 0) &&
            ((uint)*(ushort *)(param_1 + 0x54) - (uint)*(ushort *)(param_1 + 0x7c) == 1)) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),local_18)
                    ;
            local_10 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18)
                    ;
            return 1;
        }
    }
    return 1;
}



void FUN_140880ca0(longlong param_1)

{
    undefined local_18 [4];
    undefined8 local_14;

    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),local_18);
    if (*(short *)(param_1 + 0x54) == 1) {
        local_14 = 0;
    }
    else {
        local_14 = *(undefined8 *)(param_1 + 0x74);
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18);
    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xfe;
    *(byte *)(param_1 + 0x20) =
            *(byte *)(param_1 + 0x20) ^
            (*(byte *)(*(longlong *)(param_1 + 0x18) + 0x17e) >> 4 ^ *(byte *)(param_1 + 0x20)) & 2;
    return;
}



undefined8 FUN_140880d10(longlong *param_1,uint param_2)

{
    int iVar1;
    int local_res8 [2];
    int local_res10;

    if (param_2 < *(uint *)(param_1 + 5)) {
        iVar1 = (**(code **)(*param_1 + 0xb8))();
        if (iVar1 == 1) {
            *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
            iVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x70))
                    ((longlong *)param_1[0xb],local_res10,0,local_res8);
            if (iVar1 == 1) {
                *(int *)((longlong)param_1 + 0x6c) = local_res8[0];
                *(int *)(param_1 + 0xe) = local_res10 - local_res8[0];
                FUN_140880ca0(param_1);
                return 1;
            }
            return 2;
        }
    }
    return 2;
}



undefined8 FUN_140880da0(longlong param_1)

{
    byte *pbVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    iVar3 = FUN_1408801c0();
    iVar4 = FUN_140880d10(param_1,iVar3,param_1 + 0x2c);
    if (iVar4 != 1) {
        return 2;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x2c);
    pbVar1 = (byte *)(lVar2 + 0x17f);
    *pbVar1 = *pbVar1 & 0xf1;
    *(int *)(lVar2 + 0x174) = iVar3 - iVar4;
    return 1;
}



undefined8 FUN_140880e10(longlong param_1,int param_2)

{
    int iVar1;
    int local_res8 [2];

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x70))
            (*(longlong **)(param_1 + 0x58),param_2,0,local_res8);
    if (iVar1 != 1) {
        return 2;
    }
    *(int *)(param_1 + 0x6c) = local_res8[0];
    *(int *)(param_1 + 0x70) = param_2 - local_res8[0];
    return 1;
}



ulonglong FUN_140880e70(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    char local_res8 [32];
    undefined4 local_18;
    undefined8 local_14;

    if ((*(byte *)(param_1 + 0x7e) & 4) == 0) {
        if (*(longlong *)(param_1 + 0x58) == 0) {
            local_18 = 0;
            local_14 = 0x800;
            uVar3 = FUN_140880730(param_1,&local_18,0);
            if ((int)uVar3 != 1) {
                return uVar3;
            }
            uVar3 = FUN_140880920(param_1,local_res8);
            if ((int)uVar3 != 1) {
                return uVar3;
            }
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x58))();
            if ((int)uVar3 != 1) {
                return uVar3;
            }
            if (local_res8[0] != '\0') {
                return uVar3;
            }
        }
        uVar3 = FUN_1408809f0(param_1);
        if ((int)uVar3 != 1) {
            return uVar3;
        }
        if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x58);
            uVar1 = *(undefined4 *)(param_1 + 0x68);
            goto LAB_140880efc;
        }
    }
    else if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x68);
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        LAB_140880efc:
        uVar2 = FUN_1408790b0(uVar4,uVar1);
        if (uVar2 == 0x2e) {
            return 0x3f;
        }
        uVar3 = (ulonglong)uVar2;
        if (uVar2 == 0x2d) {
            uVar3 = 1;
        }
        return uVar3;
    }
    return 1;
}



undefined8 FUN_140880f30(longlong param_1)

{
    longlong *plVar1;
    undefined local_18 [8];
    undefined4 local_10;

    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x7c) + 1;
    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
        local_10 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18);
    }
    return 1;
}



void FUN_140880f80(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
        *(undefined8 *)(param_1 + 0x58) = 0;
    }
    FUN_1408803d0(param_1);
    return;
}



undefined8 FUN_140880fb0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;

    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa8) + 0x10) >> 1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
        return 1;
    }
    lVar1 = FUN_1408819f0(DAT_140c10f28,*param_2);
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    FUN_1407db590(lVar1,*(undefined8 *)(param_2 + 2),*param_2);
    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | 0x10;
    return 1;
}



void FUN_140881040(longlong param_1,int param_2,char param_3)

{
    int iVar1;

    if (param_2 == 1) {
        if (param_3 == '\0') {
            iVar1 = FUN_140880d10(param_1,*(undefined4 *)(param_1 + 0x2c),param_1 + 0x2c);
            if (iVar1 == 1) goto LAB_1408810da;
            iVar1 = FUN_140880d10(param_1,0,param_1 + 0x2c);
        }
        else {
            iVar1 = FUN_140880da0();
        }
        if (iVar1 != 1) {
            return;
        }
    }
    else if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x178);
        iVar1 = FUN_140880d10(param_1);
        if (iVar1 != 1) {
            return;
        }
    }
    else if (param_2 == 2) {
        *(byte *)(param_1 + 0x20) =
                *(byte *)(param_1 + 0x20) ^
                (*(byte *)(*(longlong *)(param_1 + 0x18) + 0x17e) >> 4 ^ *(byte *)(param_1 + 0x20)) & 2;
    }
    LAB_1408810da:
    // WARNING: Could not recover jumptable at 0x0001408810eb. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x58))();
    return;
}



void FUN_1408810f0(longlong param_1,uint param_2)

{
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))();
    if ((param_2 < 2) && (*(int *)(param_1 + 0x68) != 0)) {
        if ((*(byte *)(param_1 + 0x7e) & 2) == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))();
        }
        else {
            *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xfd;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
    }
    return;
}



undefined8 FUN_140881150(short *param_1,short *param_2,int param_3,uint param_4,uint param_5)

{
    byte bVar1;
    bool bVar2;
    int iVar3;
    ulonglong uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    short *psVar8;

    if (param_3 != 0) {
        uVar4 = (ulonglong)param_5;
        do {
            uVar6 = (uint)*(byte *)(param_1 + 1);
            iVar7 = (int)*param_1;
            param_3 = param_3 + -1;
            iVar5 = 0x1f;
            *param_2 = *param_1;
            psVar8 = param_1 + 2;
            param_2 = param_2 + uVar4;
            do {
                bVar1 = *(byte *)psVar8;
                psVar8 = (short *)((longlong)psVar8 + 1);
                iVar3 = (int)(short)(&DAT_1409a7790)[(int)uVar6] * ((bVar1 & 7) * 2 + 1);
                iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
                if ((bVar1 & 8) != 0) {
                    iVar3 = -iVar3;
                }
                iVar3 = iVar3 + iVar7;
                if (((short)iVar3 != iVar3) && (bVar2 = iVar3 < -0x8000, iVar3 = 0x7fff, bVar2)) {
                    iVar3 = -0x8000;
                }
                uVar6 = (int)*(short *)(&DAT_1409a7770 + (longlong)(int)(bVar1 & 0xf) * 2) + uVar6;
                if ((int)uVar6 < 0) {
                    uVar6 = 0;
                }
                else if (0x58 < (int)uVar6) {
                    uVar6 = 0x58;
                }
                bVar1 = bVar1 >> 4;
                *param_2 = (short)iVar3;
                iVar7 = (int)(short)(&DAT_1409a7790)[(int)uVar6] * ((bVar1 & 7) * 2 + 1);
                iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
                if ((bVar1 & 8) != 0) {
                    iVar7 = -iVar7;
                }
                iVar7 = iVar7 + iVar3;
                if (((short)iVar7 != iVar7) && (bVar2 = iVar7 < -0x8000, iVar7 = 0x7fff, bVar2)) {
                    iVar7 = -0x8000;
                }
                uVar6 = (int)*(short *)(&DAT_1409a7770 + (ulonglong)(uint)bVar1 * 2) + uVar6;
                if ((int)uVar6 < 0) {
                    uVar6 = 0;
                }
                else if (0x58 < (int)uVar6) {
                    uVar6 = 0x58;
                }
                param_2[uVar4] = (short)iVar7;
                param_2 = param_2 + uVar4 + uVar4;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar5 = (int)(short)(&DAT_1409a7790)[(int)uVar6] * ((*(byte *)psVar8 & 7) * 2 + 1);
            iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
            if ((*(byte *)psVar8 & 8) != 0) {
                iVar5 = -iVar5;
            }
            iVar5 = iVar5 + iVar7;
            if (((short)iVar5 != iVar5) && (bVar2 = iVar5 < -0x8000, iVar5 = 0x7fff, bVar2)) {
                iVar5 = -0x8000;
            }
            *param_2 = (short)iVar5;
            param_1 = (short *)((longlong)param_1 + (ulonglong)param_4);
            param_2 = param_2 + uVar4;
        } while (param_3 != 0);
    }
    return 1;
}



undefined4 * FUN_140881360(undefined4 *param_1)

{
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return param_1;
}



undefined8 FUN_140881370(uint *param_1,uint param_2)

{
    longlong lVar1;

    *param_1 = param_2;
    lVar1 = FUN_1408819f0(DAT_140c10f28,(ulonglong)param_2 << 4);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
        *param_1 = 0;
        return 0x34;
    }
    return 1;
}



void FUN_1408813b0(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
    ushort uVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar6;
    longlong *plVar7;
    longlong *plVar8;
    ulonglong uVar5;

    if ((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) & 4) != 0)) {
        uVar6 = 0;
        uVar1 = *(ushort *)(param_3 + 0x12);
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined2 *)(param_3 + 0x18) = 0;
        uVar5 = uVar6;
        if (*param_1 != 0) {
            do {
                uVar4 = *(uint *)(*(longlong *)(param_1 + 2) + 4 + uVar5 * 0x10);
                if ((param_4 <= uVar4) && (uVar4 < uVar1 + param_4)) {
                    *(short *)(param_3 + 0x18) = *(short *)(param_3 + 0x18) + 1;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_1);
        }
        if (*(short *)(param_3 + 0x18) != 0) {
            plVar3 = (longlong *)FUN_1408819f0();
            *(longlong **)(param_3 + 0x20) = plVar3;
            if (plVar3 == (longlong *)0x0) {
                *(undefined2 *)(param_3 + 0x18) = 0;
            }
            else if (*param_1 != 0) {
                plVar7 = plVar3 + 2;
                do {
                    uVar4 = *(uint *)(*(longlong *)(param_1 + 2) + 4 + uVar6 * 0x10);
                    plVar8 = plVar7;
                    if ((param_4 <= uVar4) && (uVar4 < uVar1 + param_4)) {
                        *plVar3 = param_2;
                        plVar3 = plVar3 + 4;
                        plVar8 = plVar7 + 4;
                        *(uint *)(plVar7 + -1) =
                                *(int *)(*(longlong *)(param_1 + 2) + 4 + uVar6 * 0x10) - param_4;
                        lVar2 = *(longlong *)(param_1 + 2);
                        *plVar7 = *(longlong *)(lVar2 + uVar6 * 0x10);
                        plVar7[1] = *(longlong *)(lVar2 + 8 + uVar6 * 0x10);
                    }
                    uVar4 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar4;
                    plVar7 = plVar8;
                } while (uVar4 < *param_1);
            }
        }
    }
    return;
}



void FUN_1408814d0(uint *param_1)

{
    ulonglong uVar1;
    uint uVar2;

    uVar1 = 0;
    if (*(longlong *)(param_1 + 2) == 0) {
        *param_1 = 0;
        return;
    }
    if (*param_1 != 0) {
        do {
            if (*(longlong *)(*(longlong *)(param_1 + 2) + 8 + uVar1 * 0x10) != 0) {
                FUN_140881720(DAT_140c10f28);
                *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar1 * 0x10) = 0;
            }
            uVar2 = (int)uVar1 + 1;
            uVar1 = (ulonglong)uVar2;
        } while (uVar2 < *param_1);
    }
    FUN_140881720(DAT_140c10f28,*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
}



ulonglong FUN_140881570(uint *param_1,int param_2)

{
    int *piVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar3 = 0;
    if (*param_1 != 0) {
        piVar1 = (int *)(*(longlong *)(param_1 + 2) + 4);
        uVar4 = uVar3;
        uVar5 = uVar3;
        do {
            uVar2 = *piVar1 - param_2 >> 0x1f;
            uVar2 = (*piVar1 - param_2 ^ uVar2) - uVar2;
            if ((uVar3 == 0) || (uVar2 < (uint)uVar5)) {
                uVar5 = (ulonglong)uVar2;
                uVar3 = uVar4 * 0x10 + *(longlong *)(param_1 + 2);
            }
            uVar2 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar2;
            piVar1 = piVar1 + 4;
        } while (uVar2 < *param_1);
    }
    return uVar3;
}



void FUN_1408815d0(uint *param_1,longlong param_2,uint param_3,uint param_4)

{
    uint uVar1;
    uint uVar2;

    if (((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) & 4) != 0)) &&
        (uVar2 = 0, *param_1 != 0)) {
        do {
            uVar1 = *(uint *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 2) + 4);
            if ((param_3 <= uVar1) && (uVar1 < param_4)) {
                FUN_14083ba60(DAT_140c61b80,param_2);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
    }
    return;
}



undefined8 FUN_140881660(longlong param_1,uint param_2,undefined8 param_3,uint param_4)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1408819f0(DAT_140c10f28,param_4 + 1);
    if (lVar1 == 0) {
        uVar2 = 0x34;
    }
    else {
        FUN_1407db590(lVar1,param_3,param_4);
        *(undefined *)((ulonglong)param_4 + lVar1) = 0;
        uVar2 = 1;
        *(longlong *)(*(longlong *)(param_1 + 8) + 8 + (ulonglong)param_2 * 0x10) = lVar1;
    }
    return uVar2;
}



undefined8 FUN_1408816f0(int param_1)

{
    undefined8 uVar1;

    if ((DAT_140c6290c <= param_1) ||
        (uVar1 = 1, *(int *)((longlong)param_1 * 0x70 + DAT_140c62918) == 0)) {
        uVar1 = 0xe;
    }
    return uVar1;
}



undefined8 FUN_140881720(int param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;

    if (param_2 != 0) {
        lVar2 = (longlong)param_1 * 0x70 + DAT_140c62918;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
        iVar1 = FUN_1408822f0(param_2);
        *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) - (iVar1 + 8);
        FUN_140882510(*(undefined8 *)(lVar2 + 0x58),param_2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
    }
    return 1;
}



longlong * FUN_140881790(int param_1)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = (longlong)param_1 * 0x70 + DAT_140c62918;
    plVar1 = *(longlong **)(lVar2 + 0x18);
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 == 0) {
            *(undefined8 *)(lVar2 + 0x18) = 0;
            *(undefined8 *)(lVar2 + 0x20) = 0;
            *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + *(int *)(lVar2 + 4);
            return plVar1;
        }
        *(longlong *)(lVar2 + 0x18) = *plVar1;
        *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + *(int *)(lVar2 + 4);
    }
    return plVar1;
}



undefined4 FUN_1408817d0(int param_1)

{
    return *(undefined4 *)((longlong)param_1 * 0x70 + 4 + DAT_140c62918);
}



undefined4 FUN_1408817f0(int param_1)

{
    return *(undefined4 *)((longlong)param_1 * 0x70 + 0x28 + DAT_140c62918);
}



void FUN_140881810(int param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = (longlong)param_1 * 0x70 + DAT_140c62918;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30));
    param_2[1] = *(undefined4 *)(lVar1 + 100);
    *param_2 = *(undefined4 *)(lVar1 + 0x68);
    // WARNING: Could not recover jumptable at 0x000140881858. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30));
    return;
}



void FUN_140881860(undefined8 *param_1)

{
    *(undefined4 *)(param_1 + 5) = 1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    return;
}



undefined FUN_140881950(void)

{
    return DAT_140c62908;
}



longlong FUN_140881960(int param_1,longlong param_2,undefined4 param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    if (param_2 == 0) {
        return 0;
    }
    lVar3 = (longlong)param_1 * 0x70 + DAT_140c62918;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    lVar2 = FUN_140882630(*(undefined8 *)(lVar3 + 0x58),param_3,param_2);
    if (lVar2 != 0) {
        iVar1 = FUN_1408822f0();
        *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + iVar1 + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    return lVar2;
}



longlong FUN_1408819f0(int param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    if (param_2 == 0) {
        return 0;
    }
    lVar3 = (longlong)param_1 * 0x70 + DAT_140c62918;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    if (*(uint *)(lVar3 + 0x60) < 5) {
        lVar2 = FUN_1408825d0(*(undefined8 *)(lVar3 + 0x58),param_2);
    }
    else {
        lVar2 = FUN_140882630(*(undefined8 *)(lVar3 + 0x58),*(uint *)(lVar3 + 0x60),param_2);
    }
    if (lVar2 != 0) {
        iVar1 = FUN_1408822f0();
        *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + iVar1 + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    return lVar2;
}



undefined8 FUN_140881a80(int param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = (longlong)param_1 * 0x70 + DAT_140c62918;
    *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) - *(int *)(lVar1 + 4);
    *param_2 = 0;
    if (*(undefined8 **)(lVar1 + 0x20) == (undefined8 *)0x0) {
        *(undefined8 **)(lVar1 + 0x18) = param_2;
        *(undefined8 **)(lVar1 + 0x20) = param_2;
        return 1;
    }
    **(undefined8 **)(lVar1 + 0x20) = param_2;
    *(undefined8 **)(lVar1 + 0x20) = param_2;
    return 1;
}



undefined8 FUN_140881ad0(undefined8 param_1,LPCSTR param_2)

{
    WCHAR local_218 [268];

    MultiByteToWideChar(0,0,param_2,-1,local_218,0x104);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140881b10(void)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if (DAT_140c62908 != '\0') {
        iVar2 = 0;
        if (0 < DAT_140c6290c) {
            lVar3 = 0;
            do {
                lVar1 = DAT_140c62918;
                if (*(int *)(DAT_140c62918 + lVar3) != 0) {
                    FUN_140881dd0(iVar2);
                }
                DeleteCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30 + lVar3));
                iVar2 = iVar2 + 1;
                lVar3 = lVar3 + 0x70;
            } while (iVar2 < DAT_140c6290c);
        }
        FUN_140001e60(DAT_140c62918);
        DAT_140c6290c = 0;
        _DAT_140c62910 = 0;
        DAT_140c62918 = 0;
        DAT_140c62908 = '\0';
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140881bc0(longlong param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5)

{
    ulonglong uVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    int *piVar9;
    int iVar10;
    uint uVar11;
    LPCRITICAL_SECTION lpCriticalSection;

    if ((param_4 & 3) == 0) {
        if (param_1 == 0) {
            return -1;
        }
    }
    else if (1 < (param_4 & 3) - 1) {
        return -1;
    }
    if (DAT_140c6290c <= _DAT_140c62910) {
        return -1;
    }
    iVar10 = 0;
    if (0 < DAT_140c6290c) {
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c62918 + 0xc);
        piVar9 = DAT_140c62918;
        do {
            EnterCriticalSection(lpCriticalSection);
            if (*piVar9 == 0) {
                if (DAT_140c6290c <= iVar10) {
                    return -1;
                }
                iVar2 = (int)((param_2 & 0xffffffff) / (ulonglong)param_3);
                uVar11 = iVar2 * param_3;
                if (param_1 == 0) {
                    if ((param_4 & 3) == 2) {
                        if (uVar11 + param_5 != 0) {
                            uVar4 = FUN_140344c70(0,uVar11 + param_5,0x1000);
                            LAB_140881cce:
                            *(undefined8 *)(piVar9 + 2) = uVar4;
                        }
                    }
                    else if (uVar11 + param_5 != 0) {
                        uVar4 = FUN_140344c60(uVar11 + param_5);
                        goto LAB_140881cce;
                    }
                    uVar1 = *(ulonglong *)(piVar9 + 2);
                    *(ulonglong *)(piVar9 + 4) = uVar1;
                    if (uVar1 == 0) goto LAB_140881d91;
                    if ((param_5 != 0) && (uVar7 = uVar1 % (ulonglong)param_5, uVar7 != 0)) {
                        *(ulonglong *)(piVar9 + 4) = (param_5 - uVar7) + uVar1;
                    }
                    piVar9[0xb] = piVar9[0xb] | 1;
                }
                else {
                    piVar9[0xb] = piVar9[0xb] & 0xfffffffe;
                    *(longlong *)(piVar9 + 4) = param_1;
                }
                piVar9[10] = param_4;
                piVar9[0x1a] = uVar11;
                if ((param_4 & 8) == 0) {
                    lVar6 = FUN_140882310(*(undefined8 *)(piVar9 + 4));
                    *(longlong *)(piVar9 + 0x16) = lVar6;
                    if (lVar6 == 0) {
                        if (((byte)piVar9[10] & 3) == 2) {
                            FUN_140344ca0(*(undefined8 *)(piVar9 + 2),0,0x8000);
                        }
                        else {
                            FUN_140001e60(*(undefined8 *)(piVar9 + 2));
                        }
                        *(undefined8 *)(piVar9 + 2) = 0;
                        *(undefined8 *)(piVar9 + 4) = 0;
                        LAB_140881d91:
                        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar9 + 0xc));
                        return -1;
                    }
                    iVar3 = FUN_140882720();
                    piVar9[0x1a] = piVar9[0x1a] - iVar3;
                }
                else {
                    puVar5 = *(undefined8 **)(piVar9 + 4);
                    puVar8 = (undefined8 *)((ulonglong)uVar11 + (longlong)puVar5);
                    for (; puVar5 != puVar8; puVar5 = (undefined8 *)((longlong)puVar5 + (ulonglong)param_3)) {
                        *puVar5 = 0;
                        if (*(undefined8 **)(piVar9 + 8) == (undefined8 *)0x0) {
                            *(undefined8 **)(piVar9 + 6) = puVar5;
                        }
                        else {
                            **(undefined8 **)(piVar9 + 8) = puVar5;
                        }
                        *(undefined8 **)(piVar9 + 8) = puVar5;
                    }
                }
                piVar9[1] = param_3;
                piVar9[0x18] = param_5;
                *piVar9 = iVar2;
                _DAT_140c62910 = _DAT_140c62910 + 1;
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar9 + 0xc));
                return iVar10;
            }
            LeaveCriticalSection(lpCriticalSection);
            iVar10 = iVar10 + 1;
            piVar9 = piVar9 + 0x1c;
            lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].SpinCount;
        } while (iVar10 < DAT_140c6290c);
    }
    return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140881dd0(int param_1)

{
    ulonglong uVar1;
    longlong lVar2;

    uVar1 = FUN_1408816f0((longlong)param_1 & 0xffffffff);
    if ((int)uVar1 == 1) {
        lVar2 = (longlong)param_1 * 0x70 + DAT_140c62918;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
        if ((*(byte *)(lVar2 + 0x28) & 8) == 0) {
            FUN_140001b70(*(undefined8 *)(lVar2 + 0x58));
        }
        else {
            *(undefined8 *)(lVar2 + 0x18) = 0;
            *(undefined8 *)(lVar2 + 0x20) = 0;
        }
        if ((*(byte *)(lVar2 + 0x2c) & 1) != 0) {
            if (((byte)*(undefined4 *)(lVar2 + 0x28) & 3) == 2) {
                FUN_140344ca0(*(undefined8 *)(lVar2 + 8),0,0x8000);
            }
            else {
                FUN_140001e60(*(undefined8 *)(lVar2 + 8));
            }
            *(undefined8 *)(lVar2 + 8) = 0;
            *(undefined8 *)(lVar2 + 0x10) = 0;
        }
        FUN_140881860(lVar2);
        _DAT_140c62910 = _DAT_140c62910 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
        uVar1 = uVar1 & 0xffffffff;
    }
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140881e90(int *param_1)

{
    undefined8 *puVar1;
    int iVar2;
    char cVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    cVar3 = FUN_140881950();
    if ((cVar3 == '\0') && (param_1 != (int *)0x0)) {
        iVar2 = *param_1;
        lVar5 = (longlong)iVar2;
        lVar4 = FUN_140344c60(lVar5 * 0x70);
        if (lVar4 != 0) {
            lVar6 = 0;
            DAT_140c62918 = lVar4;
            if (0 < iVar2) {
                do {
                    puVar1 = (undefined8 *)(lVar6 + lVar4);
                    if (puVar1 != (undefined8 *)0x0) {
                        puVar1[3] = 0;
                        puVar1[4] = 0;
                        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 6));
                        *puVar1 = 0;
                        puVar1[1] = 0;
                        puVar1[2] = 0;
                        *(undefined4 *)(puVar1 + 5) = 1;
                        puVar1[0xb] = 0;
                        puVar1[0xc] = 0;
                        *(undefined4 *)(puVar1 + 0xd) = 0;
                        lVar4 = DAT_140c62918;
                    }
                    lVar6 = lVar6 + 0x70;
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
            }
            DAT_140c62908 = 1;
            DAT_140c6290c = iVar2;
            _DAT_140c62910 = 0;
            return 1;
        }
        DAT_140c62918 = lVar4;
        return 2;
    }
    return 2;
}



void FUN_140881ec0(longlong param_1,longlong param_2)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    int iVar7;

    uVar6 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc;
    if (uVar6 < 0x100) {
        uVar5 = (uint)*(ulonglong *)(param_2 + 8);
        iVar7 = 0;
        uVar5 = (int)(((int)uVar5 >> 0x1f & 7U) + (uVar5 & 0xfffffffc)) >> 3;
    }
    else {
        iVar3 = FUN_140882470();
        iVar7 = iVar3 + -7;
        uVar5 = (uint)(uVar6 >> ((char)iVar3 - 5U & 0x3f)) ^ 0x20;
    }
    lVar4 = (longlong)iVar7 * 0x20 + (longlong)(int)uVar5;
    lVar2 = *(longlong *)(param_1 + 0x88 + lVar4 * 8);
    *(longlong *)(param_2 + 0x18) = param_1;
    *(longlong *)(param_2 + 0x10) = lVar2;
    *(longlong *)(lVar2 + 0x18) = param_2;
    *(longlong *)(param_1 + 0x88 + lVar4 * 8) = param_2;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1 << ((byte)iVar7 & 0x1f);
    puVar1 = (uint *)(param_1 + 0x24 + (longlong)iVar7 * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
    return;
}



longlong FUN_140881f60(longlong param_1,ulonglong param_2)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    uint uVar7;
    byte bVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    if (param_2 == 0) {
        return 0;
    }
    if (0x1f < param_2) {
        cVar4 = FUN_140882470();
        param_2 = param_2 + (longlong)((1 << (cVar4 - 5U & 0x1f)) + -1);
    }
    if (param_2 < 0x100) {
        uVar9 = 0;
        bVar8 = (byte)((int)(((int)param_2 >> 0x1f & 7U) + (int)param_2) >> 3);
    }
    else {
        iVar5 = FUN_140882470();
        uVar9 = (ulonglong)(iVar5 - 7);
        bVar8 = (byte)(param_2 >> ((char)iVar5 - 5U & 0x3f));
    }
    uVar7 = *(uint *)(param_1 + 0x24 + (longlong)(int)uVar9 * 4) & -1 << (bVar8 & 0x1f);
    uVar10 = (longlong)(int)uVar9;
    if (uVar7 == 0) {
        if ((-1 << ((char)uVar9 + 1U & 0x1f) & *(uint *)(param_1 + 0x20)) == 0) {
            return 0;
        }
        iVar5 = FUN_140882410();
        uVar9 = (ulonglong)iVar5;
        uVar7 = *(uint *)(param_1 + 0x24 + uVar9 * 4);
        uVar10 = uVar9;
    }
    uVar7 = ~uVar7 + 1 & uVar7;
    iVar5 = 0x20;
    if (uVar7 == 0) {
        iVar5 = 0x1f;
    }
    if ((uVar7 & 0xffff0000) == 0) {
        uVar7 = uVar7 << 0x10;
        iVar5 = iVar5 + -0x10;
    }
    if ((uVar7 & 0xff000000) == 0) {
        uVar7 = uVar7 << 8;
        iVar5 = iVar5 + -8;
    }
    if ((uVar7 & 0xf0000000) == 0) {
        uVar7 = uVar7 << 4;
        iVar5 = iVar5 + -4;
    }
    if ((uVar7 & 0xc0000000) == 0) {
        uVar7 = uVar7 << 2;
        iVar5 = iVar5 + -2;
    }
    if (-1 < (int)uVar7) {
        iVar5 = iVar5 + -1;
    }
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)(param_1 + 0x88 + (uVar10 * 0x20 + (longlong)iVar5) * 8);
    if (lVar2 != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x18);
        lVar3 = *(longlong *)(lVar2 + 0x10);
        *(longlong *)(lVar3 + 0x18) = lVar6;
        *(longlong *)(lVar6 + 0x10) = lVar3;
        lVar6 = uVar10 * 0x20 + (longlong)iVar5;
        if ((*(longlong *)(param_1 + 0x88 + lVar6 * 8) == lVar2) &&
            (*(longlong *)(param_1 + 0x88 + lVar6 * 8) = lVar3, lVar3 == param_1)) {
            puVar1 = (uint *)(param_1 + 0x24 + uVar10 * 4);
            *puVar1 = *puVar1 & ~(1 << ((byte)iVar5 & 0x1f));
            if (*puVar1 != 0) {
                return lVar2;
            }
            *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << ((byte)uVar9 & 0x1f));
            return lVar2;
        }
    }
    return lVar2;
}



longlong FUN_140882110(undefined8 param_1,longlong param_2,ulonglong param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (param_2 != 0) {
        uVar3 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc;
        if (param_3 + 0x20 <= uVar3) {
            lVar2 = param_3 + 8 + param_2;
            *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & 3;
            *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) | (uVar3 - param_3) - 8;
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 3;
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | param_3;
            uVar3 = *(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffc;
            puVar1 = (ulonglong *)(uVar3 + 0x10 + lVar2);
            *puVar1 = *puVar1 | 2;
            *(longlong *)(uVar3 + 8 + lVar2) = lVar2;
            *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) | 1;
            *(longlong *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc) + 8 + param_2) = param_2;
            *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) | 2;
            FUN_140881ec0();
        }
        puVar1 = (ulonglong *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc) + 0x10 + param_2);
        *puVar1 = *puVar1 & 0xfffffffffffffffd;
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe;
        return param_2 + 0x10;
    }
    return 0;
}



void FUN_1408821b0(longlong param_1,longlong param_2)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    int iVar7;

    uVar6 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc;
    if (uVar6 < 0x100) {
        uVar5 = (uint)*(ulonglong *)(param_2 + 8);
        iVar7 = 0;
        uVar5 = (int)(((int)uVar5 >> 0x1f & 7U) + (uVar5 & 0xfffffffc)) >> 3;
    }
    else {
        iVar3 = FUN_140882470();
        iVar7 = iVar3 + -7;
        uVar5 = (uint)(uVar6 >> ((char)iVar3 - 5U & 0x3f)) ^ 0x20;
    }
    lVar4 = *(longlong *)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x10);
    *(longlong *)(lVar2 + 0x18) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar2;
    lVar4 = (longlong)iVar7 * 0x20 + (longlong)(int)uVar5;
    if ((*(longlong *)(param_1 + 0x88 + lVar4 * 8) == param_2) &&
        (*(longlong *)(param_1 + 0x88 + lVar4 * 8) = lVar2, lVar2 == param_1)) {
        puVar1 = (uint *)(param_1 + 0x24 + (longlong)iVar7 * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)uVar5 & 0x1f));
        if (*puVar1 == 0) {
            *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << ((byte)iVar7 & 0x1f));
        }
    }
    return;
}



longlong FUN_140882270(undefined8 param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc;
    if (param_3 + 0x20U <= uVar4) {
        uVar1 = param_3 - 8;
        lVar3 = param_2 + 8 + uVar1;
        *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) & 3;
        *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | (uVar4 - uVar1) - 8;
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 3;
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | uVar1;
        uVar4 = *(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffc;
        puVar2 = (ulonglong *)(uVar4 + 0x10 + lVar3);
        *puVar2 = *puVar2 | 2;
        *(longlong *)(uVar4 + 8 + lVar3) = lVar3;
        *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | 3;
        *(longlong *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc) + 8 + param_2) = param_2;
        FUN_140881ec0();
        return lVar3;
    }
    return param_2;
}



ulonglong FUN_1408822f0(longlong param_1)

{
    if (param_1 != 0) {
        return *(ulonglong *)(param_1 + -8) & 0xfffffffffffffffc;
    }
    return 0;
}



longlong FUN_140882310(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;

    lVar7 = (param_2 + -0x1998) - (ulonglong)((uint)(param_2 + -0x1998) & 7);
    if (&DAT_ffffffffffffffe8 + lVar7 < (undefined *)0xffffffe9) {
        *(longlong *)(param_1 + 0x10) = param_1;
        *(longlong *)(param_1 + 0x18) = param_1;
        plVar4 = (longlong *)(param_1 + 0x88);
        puVar5 = (undefined4 *)(param_1 + 0x24);
        lVar6 = 0x19;
        *(undefined4 *)(param_1 + 0x20) = 0;
        do {
            *puVar5 = 0;
            lVar3 = 4;
            plVar1 = plVar4;
            do {
                *plVar1 = param_1;
                plVar1[1] = param_1;
                plVar1[2] = param_1;
                plVar1[3] = param_1;
                plVar1[4] = param_1;
                plVar1[5] = param_1;
                plVar1[6] = param_1;
                plVar1[7] = param_1;
                lVar3 = lVar3 + -1;
                plVar1 = plVar1 + 8;
            } while (lVar3 != 0);
            puVar5 = puVar5 + 1;
            plVar4 = plVar4 + 0x20;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar6 = param_1 + 0x1980;
        *(ulonglong *)(param_1 + 0x1988) = lVar7 - (ulonglong)((uint)lVar7 & 7) & 0xfffffffffffffffd | 1
                ;
        FUN_140881ec0(param_1,lVar6);
        uVar2 = *(ulonglong *)(param_1 + 0x1988) & 0xfffffffffffffffc;
        *(longlong *)(uVar2 + 8 + lVar6) = lVar6;
        *(undefined8 *)(uVar2 + 0x10 + lVar6) = 2;
        return param_1;
    }
    FUN_1407f1194("tlsf_create: Pool size must be at least %d bytes.\n",0x19b0);
    return 0;
}



int FUN_140882410(uint param_1)

{
    int iVar1;
    int iVar2;

    param_1 = ~param_1 + 1 & param_1;
    iVar2 = 0x20;
    if (param_1 == 0) {
        iVar2 = 0x1f;
    }
    if ((param_1 & 0xffff0000) == 0) {
        param_1 = param_1 << 0x10;
        iVar2 = iVar2 + -0x10;
    }
    if ((param_1 & 0xff000000) == 0) {
        param_1 = param_1 << 8;
        iVar2 = iVar2 + -8;
    }
    if ((param_1 & 0xf0000000) == 0) {
        param_1 = param_1 << 4;
        iVar2 = iVar2 + -4;
    }
    if ((param_1 & 0xc0000000) == 0) {
        param_1 = param_1 << 2;
        iVar2 = iVar2 + -2;
    }
    iVar1 = iVar2 + -2;
    if ((int)param_1 < 0) {
        iVar1 = iVar2 + -1;
    }
    return iVar1;
}



int FUN_140882470(ulonglong param_1)

{
    int iVar1;
    int iVar2;
    ulonglong uVar3;

    iVar1 = 0x20;
    uVar3 = param_1 >> 0x20;
    iVar2 = (int)(param_1 >> 0x20);
    if (iVar2 != 0) {
        if ((uVar3 & 0xffff0000) == 0) {
            uVar3 = (ulonglong)(uint)(iVar2 << 0x10);
            iVar1 = 0x10;
        }
        if ((uVar3 & 0xff000000) == 0) {
            uVar3 = (ulonglong)(uint)((int)uVar3 << 8);
            iVar1 = iVar1 + -8;
        }
        if ((uVar3 & 0xf0000000) == 0) {
            uVar3 = (ulonglong)(uint)((int)uVar3 << 4);
            iVar1 = iVar1 + -4;
        }
        iVar2 = (int)uVar3;
        if ((uVar3 & 0xc0000000) == 0) {
            iVar2 = iVar2 << 2;
            iVar1 = iVar1 + -2;
        }
        if (-1 < iVar2) {
            iVar1 = iVar1 + -1;
        }
        return iVar1 + 0x1f;
    }
    iVar1 = 0x20;
    if ((int)param_1 == 0) {
        iVar1 = 0x1f;
    }
    if ((param_1 & 0xffff0000) == 0) {
        param_1 = (ulonglong)(uint)((int)param_1 << 0x10);
        iVar1 = iVar1 + -0x10;
    }
    if ((param_1 & 0xff000000) == 0) {
        param_1 = (ulonglong)(uint)((int)param_1 << 8);
        iVar1 = iVar1 + -8;
    }
    if ((param_1 & 0xf0000000) == 0) {
        param_1 = (ulonglong)(uint)((int)param_1 << 4);
        iVar1 = iVar1 + -4;
    }
    iVar2 = (int)param_1;
    if ((param_1 & 0xc0000000) == 0) {
        iVar2 = iVar2 << 2;
        iVar1 = iVar1 + -2;
    }
    if (-1 < iVar2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1 + -1;
}



void FUN_140882510(undefined8 param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    longlong *plVar4;

    if (param_2 != 0) {
        plVar4 = (longlong *)(param_2 + -0x10);
        puVar1 = (ulonglong *)(param_2 + -8);
        uVar3 = *(ulonglong *)(param_2 + -8) & 0xfffffffffffffffc;
        puVar2 = (ulonglong *)(uVar3 + 0x10 + (longlong)plVar4);
        *puVar2 = *puVar2 | 2;
        *(longlong **)(uVar3 + 8 + (longlong)plVar4) = plVar4;
        *puVar1 = *puVar1 | 1;
        if ((*(byte *)puVar1 & 2) != 0) {
            plVar4 = (longlong *)*plVar4;
            FUN_1408821b0(param_1,plVar4);
            plVar4[1] = plVar4[1] + (*puVar1 & 0xfffffffffffffffc) + 8;
            *(longlong **)((plVar4[1] & 0xfffffffffffffffcU) + 8 + (longlong)plVar4) = plVar4;
        }
        uVar3 = plVar4[1] & 0xfffffffffffffffc;
        if ((*(byte *)(uVar3 + 0x10 + (longlong)plVar4) & 1) != 0) {
            FUN_1408821b0(param_1,(longlong)plVar4 + uVar3 + 8);
            plVar4[1] = plVar4[1] +
                        (*(ulonglong *)(uVar3 + 0x10 + (longlong)plVar4) & 0xfffffffffffffffc) + 8;
            *(longlong **)((plVar4[1] & 0xfffffffffffffffcU) + 8 + (longlong)plVar4) = plVar4;
        }
        FUN_140881ec0(param_1,plVar4);
    }
    return;
}



void FUN_1408825d0(undefined8 param_1,longlong param_2)

{
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_2 - 1U < 0xffffffff) {
        uVar1 = param_2 + 7U & 0xfffffffffffffff8;
        uVar3 = 0x18;
        if (0x18 < uVar1) {
            uVar3 = uVar1;
        }
    }
    uVar2 = FUN_140881f60(param_1,uVar3);
    FUN_140882110(param_1,uVar2,uVar3);
    return;
}



void FUN_140882630(undefined8 param_1,ulonglong param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (param_3 - 1U < 0xffffffff) {
        uVar2 = param_3 + 7U & 0xfffffffffffffff8;
        uVar6 = 0x18;
        if (0x18 < uVar2) {
            uVar6 = uVar2;
        }
    }
    uVar2 = 0;
    if (uVar6 + param_2 + 0x1f < 0xffffffff) {
        uVar4 = uVar6 + param_2 + 0x1f + param_2 & ~(param_2 - 1);
        uVar2 = 0x18;
        if (0x18 < uVar4) {
            uVar2 = uVar4;
        }
    }
    if (param_2 < 9) {
        uVar2 = uVar6;
    }
    lVar3 = FUN_140881f60(param_1,uVar2);
    if (lVar3 != 0) {
        lVar1 = lVar3 + 0x10;
        uVar4 = (param_2 - 1) + lVar1 & ~(param_2 - 1);
        uVar2 = uVar4 - lVar1;
        if (uVar2 != 0) {
            if (uVar2 < 0x20) {
                uVar5 = param_2;
                if (param_2 < 0x20 - uVar2) {
                    uVar5 = 0x20 - uVar2;
                }
                uVar2 = ((param_2 - 1) + uVar5 + uVar4 & ~(param_2 - 1)) - lVar1;
            }
            if (uVar2 != 0) {
                lVar3 = FUN_140882270(param_1,lVar3);
            }
        }
    }
    FUN_140882110(param_1,lVar3,uVar6);
    return;
}



undefined8 FUN_140882720(void)

{
    return 0x1998;
}



undefined8 * FUN_140882730(undefined8 *param_1,byte param_2)

{
    DAT_140c62930 = 0;
    *param_1 = &PTR_FUN_1409a7880;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 * FUN_140882770(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a7880;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined4 * FUN_1408827a0(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)FUN_1408819f0(DAT_140c111c0,0x30);
    if (puVar1 != (undefined4 *)0x0) {
        puVar1[0xb] = puVar1[0xb] & 0xfffffffe;
        if (param_2 == (undefined8 *)0x0) {
            puVar1[0xb] = puVar1[0xb] & 0xfffffffd;
        }
        else {
            puVar1[0xb] = puVar1[0xb] | 2;
            *(undefined8 *)(puVar1 + 2) = *param_2;
            *(undefined8 *)(puVar1 + 4) = param_2[1];
            *(undefined8 *)(puVar1 + 6) = param_2[2];
            *(undefined8 *)(puVar1 + 8) = param_2[3];
        }
        *puVar1 = param_1;
        puVar1[10] = param_3;
    }
    return puVar1;
}



longlong * FUN_140882830(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1408819f0(DAT_140c111c0,0x30);
    if ((plVar2 != (longlong *)0x0) &&
        (iVar1 = FUN_140883420(plVar2,param_1,param_2,param_3), iVar1 != 1)) {
        if (((*(byte *)((longlong)plVar2 + 0x2c) & 1) != 0) && (*plVar2 != 0)) {
            FUN_140881720(DAT_140c111c0);
        }
        FUN_140881720(DAT_140c111c0,plVar2);
        plVar2 = (longlong *)0x0;
    }
    return plVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1408828c0(undefined4 *param_1)

{
    char cVar1;
    undefined8 *puVar2;

    cVar1 = FUN_140881950();
    if (cVar1 == '\0') {
        return (undefined8 *)0x0;
    }
    if (DAT_140c62930 == (undefined8 *)0x0) {
        _DAT_140c62970 = 0;
        if ((DAT_140c111c0 == -1) &&
            (DAT_140c111c0 = FUN_140881bc0(0,*param_1,0x20,1,0), DAT_140c111c0 == -1)) {
            return (undefined8 *)0x0;
        }
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,8);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_1409a78b8;
            DAT_140c62930 = puVar2;
            return puVar2;
        }
        FUN_140881dd0(DAT_140c111c0);
    }
    return DAT_140c62930;
}



ulonglong FUN_140882d00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong *plVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;

    uVar8 = 0;
    uVar5 = (longlong)DAT_140c62948 - (longlong)DAT_140c62940 >> 3;
    uVar10 = (uint)uVar5;
    plVar2 = DAT_140c62940;
    if (uVar10 != 0) {
        do {
            if (*plVar2 == 0) {
                if ((int)uVar8 != -1) goto LAB_140882e33;
                break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            plVar2 = plVar2 + 1;
        } while (uVar7 < uVar10);
    }
    uVar8 = (ulonglong)DAT_140c62950;
    uVar5 = uVar5 & 0xffffffff;
    if (uVar8 <= uVar5) {
        uVar10 = DAT_140c62950 + 1;
        uVar8 = (ulonglong)uVar10;
        plVar2 = (longlong *)FUN_1408819f0(DAT_140c111c0,uVar8 << 3);
        if (plVar2 == (longlong *)0x0) {
            return 0xffffffff;
        }
        uVar3 = (longlong)DAT_140c62948 - (longlong)DAT_140c62940 >> 3;
        uVar11 = uVar3 & 0xffffffff;
        if (DAT_140c62940 != (longlong *)0x0) {
            uVar6 = 0;
            if ((int)uVar3 != 0) {
                do {
                    uVar3 = uVar6 + 1;
                    plVar2[uVar6] = DAT_140c62940[uVar6];
                    uVar6 = uVar3;
                } while (uVar3 < uVar11);
            }
            FUN_140881720(DAT_140c111c0);
        }
        DAT_140c62948 = plVar2 + uVar11;
        DAT_140c62940 = plVar2;
        DAT_140c62950 = uVar10;
    }
    plVar2 = DAT_140c62948;
    if ((uVar5 < uVar8) && (plVar2 = DAT_140c62948 + 1, DAT_140c62948 != (longlong *)0x0)) {
        *DAT_140c62948 = 0;
        DAT_140c62948 = plVar2;
        lVar9 = (longlong)DAT_140c62948 - (longlong)DAT_140c62940;
        DAT_140c62948[-1] = 0;
        uVar8 = (ulonglong)((int)(lVar9 >> 3) - 1);
        LAB_140882e33:
        if ((*(uint *)(param_2 + 0x18) & 1) == 0) {
            if ((*(uint *)(param_2 + 0x18) & 2) == 0) {
                return 0xffffffff;
            }
            lVar9 = FUN_1408819f0(DAT_140c111c0,0x138);
            if (lVar9 == 0) {
                return 0xffffffff;
            }
            plVar4 = (longlong *)FUN_140887290(lVar9,param_3);
        }
        else {
            lVar9 = FUN_1408819f0(DAT_140c111c0,0x140);
            if (lVar9 == 0) {
                return 0xffffffff;
            }
            plVar4 = (longlong *)FUN_140886150(lVar9,param_3);
        }
        plVar2 = DAT_140c62948;
        if (plVar4 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2,uVar8);
            if (iVar1 == 1) {
                DAT_140c62940[uVar8] = (longlong)plVar4;
                return uVar8;
            }
            (**(code **)(*plVar4 + 0x28))(plVar4);
            plVar2 = DAT_140c62948;
        }
    }
    DAT_140c62948 = plVar2;
    return 0xffffffff;
}



void FUN_140882ee0(undefined8 param_1,undefined8 param_2)

{
    FUN_140882d00(DAT_140c62930,param_1,param_2);
    return;
}
