//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1403f9d30(undefined8 param_1,float param_2,longlong param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    float fVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;

    fVar12 = (float)FUN_1408fc7f0(param_2 * -0.6931472 * 2.0);
    iVar6 = *DAT_140c63750;
    uVar8 = 0;
    iVar4 = DAT_140c44db0;
    if (iVar6 < DAT_140c44db0) {
        iVar4 = iVar6;
    }
    uVar5 = *(uint *)(&DAT_140c44dc0 + (longlong)iVar4 * 4);
    if ((int)uVar5 < 0) {
        uVar5 = 0x80000000 - uVar5;
    }
    if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0x55) {
        uVar10 = 0xffffffffffffffff;
    }
    else {
        iVar4 = DAT_140c44db0;
        if (iVar6 < DAT_140c44db0) {
            iVar4 = iVar6;
        }
        fVar15 = (float)FUN_1408fe170(*(undefined4 *)(&DAT_140c44dc0 + (longlong)iVar4 * 4));
        lVar7 = 0;
        fVar15 = fVar15 * -37.5;
        if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
            lVar7 = -0x8000000000000000;
        }
        uVar10 = (longlong)fVar15 + lVar7;
    }
    *(undefined4 *)(param_3 + 0x15f0) = 0x7f7fffff;
    uVar9 = uVar8;
    if (uVar10 != 0xffffffffffffffff) {
        lVar7 = *(longlong *)(param_3 + 0x15e0);
        for (; (lVar7 != 0 && (uVar8 < uVar10)); uVar8 = uVar8 + 1) {
            lVar7 = *(longlong *)(lVar7 + 0x30);
        }
        uVar9 = uVar8;
        if (*(longlong *)(param_3 + 0x15e8) != 0) {
            for (; uVar9 < uVar10; uVar9 = uVar9 + 1) {
            }
        }
    }
    fVar15 = 1.0;
    if (uVar9 == uVar10) {
        lVar7 = *(longlong *)(param_3 + 0x15e8);
        while (lVar11 = lVar7, lVar11 != 0) {
            lVar7 = *(longlong *)(lVar11 + 0x30);
            plVar1 = (longlong *)(lVar11 + 0x30);
            iVar6 = FUN_140543030(lVar11);
            if (iVar6 != 0) {
                if (*(longlong **)(lVar11 + 0x28) != (longlong *)0x0) {
                    **(longlong **)(lVar11 + 0x28) = *plVar1;
                }
                if (*plVar1 != 0) {
                    *(undefined8 *)(*plVar1 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
                }
                *plVar1 = 0;
                plVar2 = (longlong *)(param_3 + 0x15e0);
                *(longlong **)(lVar11 + 0x28) = plVar2;
                *plVar1 = *plVar2;
                *plVar2 = lVar11;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x28) = plVar1;
                }
                uVar8 = uVar8 + 1;
            }
        }
        FUN_140400cc0();
        lVar11 = uVar10 - uVar8;
        for (lVar7 = *(longlong *)(param_3 + 0x15e8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar11 == 0) {
                if (lVar7 != 0) {
                    *(undefined4 *)(param_3 + 0x15f0) = *(undefined4 *)(lVar7 + 0x1a8);
                    goto LAB_1403fa030;
                }
                break;
            }
            fVar3 = *(float *)(lVar7 + 0x1a4);
            if (*(int *)(lVar7 + 0x1ac) == 0) {
                *(undefined4 *)(lVar7 + 0x1ac) = 1;
                LAB_1403f9fdc:
                *(undefined4 *)(lVar7 + 0x1a4) = 0x3f800000;
            }
            else {
                fVar14 = (fVar3 - fVar15) * fVar12 + fVar15;
                *(float *)(lVar7 + 0x1a4) = fVar14;
                if ((int)((uint)fVar14 ^ 0x3f800000) < 0) {
                    fVar14 = (float)(-0x80000000 - (int)fVar14);
                }
                uVar5 = (int)((int)fVar14 + 0xc0800000U) >> 0x1f;
                if ((int)(((int)fVar14 + 0xc0800000U ^ uVar5) - uVar5) < 0x55) goto LAB_1403f9fdc;
            }
            if (fVar3 != *(float *)(lVar7 + 0x1a4)) {
                FUN_1405432c0();
            }
            lVar11 = lVar11 + -1;
        }
    }
    else {
        for (lVar7 = *(longlong *)(param_3 + 0x15e8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            fVar3 = *(float *)(lVar7 + 0x1a4);
            if (*(int *)(lVar7 + 0x1ac) == 0) {
                *(undefined4 *)(lVar7 + 0x1ac) = 1;
                LAB_1403fa173:
                *(undefined4 *)(lVar7 + 0x1a4) = 0x3f800000;
            }
            else {
                fVar14 = (fVar3 - fVar15) * fVar12 + fVar15;
                *(float *)(lVar7 + 0x1a4) = fVar14;
                if ((int)((uint)fVar14 ^ 0x3f800000) < 0) {
                    fVar14 = (float)(-0x80000000 - (int)fVar14);
                }
                uVar5 = (int)((int)fVar14 + 0xc0800000U) >> 0x1f;
                if ((int)(((int)fVar14 + 0xc0800000U ^ uVar5) - uVar5) < 0x55) goto LAB_1403fa173;
            }
            if (fVar3 != *(float *)(lVar7 + 0x1a4)) {
                FUN_1405432c0();
            }
        }
    }
    goto LAB_1403fa19b;
    while( true ) {
        if (fVar3 != *(float *)(lVar7 + 0x1a4)) {
            FUN_1405432c0();
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) break;
        LAB_1403fa030:
        fVar3 = *(float *)(lVar7 + 0x1a4);
        iVar6 = DAT_140c44e40;
        if (*DAT_140c63750 < DAT_140c44e40) {
            iVar6 = *DAT_140c63750;
        }
        fVar14 = *(float *)(&DAT_140c44e50 + (longlong)iVar6 * 4);
        if (*(int *)(lVar7 + 0x1ac) == 0) {
            *(undefined4 *)(lVar7 + 0x1ac) = 1;
            LAB_1403fa0c0:
            *(float *)(lVar7 + 0x1a4) = fVar14;
        }
        else {
            fVar13 = (fVar3 - fVar14) * fVar12 + fVar14;
            *(float *)(lVar7 + 0x1a4) = fVar13;
            if ((int)((uint)fVar14 ^ (uint)fVar13) < 0) {
                fVar13 = (float)(-0x80000000 - (int)fVar13);
            }
            uVar5 = (int)fVar13 - (int)fVar14 >> 0x1f;
            if ((int)(((int)fVar13 - (int)fVar14 ^ uVar5) - uVar5) < 0x55) goto LAB_1403fa0c0;
        }
    }
    LAB_1403fa19b:
    lVar7 = *(longlong *)(param_3 + 0x15e0);
    do {
        if (lVar7 == 0) {
            return;
        }
        fVar3 = *(float *)(lVar7 + 0x1a4);
        if (*(int *)(lVar7 + 0x1ac) == 0) {
            *(undefined4 *)(lVar7 + 0x1ac) = 1;
            LAB_1403fa243:
            *(undefined4 *)(lVar7 + 0x1a4) = 0x3f800000;
        }
        else {
            fVar14 = (fVar3 - fVar15) * fVar12 + fVar15;
            *(float *)(lVar7 + 0x1a4) = fVar14;
            if ((int)((uint)fVar14 ^ 0x3f800000) < 0) {
                fVar14 = (float)(-0x80000000 - (int)fVar14);
            }
            uVar5 = (int)((int)fVar14 + 0xc0800000U) >> 0x1f;
            if ((int)(((int)fVar14 + 0xc0800000U ^ uVar5) - uVar5) < 0x55) goto LAB_1403fa243;
        }
        if (fVar3 != *(float *)(lVar7 + 0x1a4)) {
            FUN_1405432c0();
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
    } while( true );
}



void FUN_1403fa280(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 local_res8;
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = DAT_140c65898;
    local_res8 = param_1;
    if (*(int *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x28) != 4) {
        for (lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x20); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if (*(int *)(lVar1 + 0x28) != 4) goto LAB_1403fa2bb;
        }
        FUN_1404351e0();
    }
    LAB_1403fa2bb:
    lVar1 = DAT_140c65a48;
    if ((((*(longlong *)(lVar2 + 0x6490) == 0) ||
          (*(int *)(*(longlong *)(lVar2 + 0x6490) + 0x2ac) == 0)) && (DAT_140c65a48 != 0)) &&
        ((*(longlong *)(DAT_140c65a48 + 0x18) == 0 &&
          (iVar3 = FUN_1404d6210(DAT_140c65a48,lVar2,*(undefined8 *)(lVar2 + 0x7928)), -1 < iVar3)))) {
        (**(code **)(**(longlong **)(lVar2 + 0x7588) + 0xa0))(*(longlong **)(lVar2 + 0x7588),0);
        (**(code **)(**(longlong **)(lVar2 + 0x7588) + 0xa8))(*(longlong **)(lVar2 + 0x7588),0xcd,1);
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        local_res8 = CONCAT44(local_res8._4_4_,0xcd);
        FUN_14001a500(local_28,0,&local_res8);
        (**(code **)(**(longlong **)(lVar2 + 0x7588) + 0x78))(*(longlong **)(lVar2 + 0x7588),local_28);
        FUN_140048100(lVar2,lVar1,1);
        FUN_1404d6290(lVar1);
        FUN_140400be0(lVar2 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0));
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return;
}



void FUN_1403fa3d0(longlong param_1)

{
    undefined4 local_res10 [6];
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    if ((DAT_140c65a48 != 0) && (*(longlong *)(DAT_140c65a48 + 0x18) != 0)) {
        FUN_1404d5ae0();
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        local_res10[0] = 0xcd;
        FUN_14001a500(local_28,0,local_res10);
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0x78))
                (*(longlong **)(DAT_140c65898 + 0x7588),local_28);
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xa0))
                (*(longlong **)(DAT_140c65898 + 0x7588),1);
        FUN_140400b00(param_1 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0));
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return;
}



void FUN_1403fa490(longlong param_1,undefined4 param_2)

{
    undefined4 local_res8 [2];
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xa0))(*(longlong **)(param_1 + 0x7588),0);
    (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xa8))(*(longlong **)(param_1 + 0x7588),0xcd,1);
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_res8[0] = 0xcd;
    FUN_14001a500(local_28,0,local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x7588) + 0x78))(*(longlong **)(param_1 + 0x7588),local_28)
            ;
    FUN_140048100(param_1,*(undefined8 *)(param_1 + 0x7fe0),3);
    FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(param_1 + 0x7fe0) + 0x60),"OpenStore","");
    FUN_140400a20(param_1 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0),param_2);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return;
}



void FUN_1403fa580(longlong param_1,undefined4 *param_2)

{
    undefined8 uVar1;

    FUN_1403fa490(param_1,0);
    if (param_2 != (undefined4 *)0x0) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x7fe0) + 0x60);
        if (param_2[1] == 0) {
            FUN_1400ea3e0(uVar1,"OpenStoreLinkSingle",&DAT_1409efc4c,param_2[3],
                          *(longlong *)(param_2 + 4) + 1);
        }
        else {
            FUN_1400ea3e0(uVar1,"OpenStoreLinkCategory",&DAT_1409efc74);
        }
        FUN_140400940(param_1 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0),*param_2);
    }
    return;
}



void FUN_1403fa610(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = DAT_140c65898;
    if (param_2 == -1) {
        FUN_1403fa490(DAT_140c65898,0);
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(lVar1 + 0x7fe0) + 0x60),"OpenSignature",
                      &DAT_1409d13ae);
        return;
    }
    lVar2 = FUN_14044fac0(DAT_140c65908);
    if (lVar2 != 0) {
        FUN_1403fa580(lVar1,lVar2);
        return;
    }
    return;
}



void FUN_1403fa680(undefined8 param_1,int param_2)

{
    int *piVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;

    lVar2 = DAT_140c65898;
    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c65908 + 0x180) != 0) {
        uVar4 = 0;
        while (piVar1 = *(int **)(*(longlong *)(DAT_140c65908 + 0x178) + uVar4 * 8), *piVar1 != param_2)
        {
            uVar3 = uVar3 + 1;
            uVar4 = (ulonglong)uVar3;
            if (*(ulonglong *)(DAT_140c65908 + 0x180) <= uVar4) {
                return;
            }
        }
        FUN_1403fa490(DAT_140c65898,0);
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(lVar2 + 0x7fe0) + 0x60),"OpenStoreFromBanner",
                      &DAT_1409efca4,*piVar1);
        FUN_140400840(lVar2 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0),1,piVar1[1],piVar1[2]);
    }
    return;
}



void FUN_1403fa730(longlong param_1)

{
    longlong lVar1;
    undefined4 local_res8 [2];
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar1 = *(longlong *)(param_1 + 0x7fe0);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
        *(undefined4 *)(lVar1 + 0x28) = 4;
        FUN_1404351e0(*(undefined8 *)(param_1 + 0x7fe0));
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        local_res8[0] = 0xcd;
        FUN_14001a500(local_28,0,local_res8);
        (**(code **)(**(longlong **)(param_1 + 0x7588) + 0x78))
                (*(longlong **)(param_1 + 0x7588),local_28);
        (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xa0))(*(longlong **)(param_1 + 0x7588),1);
        lVar1 = *(longlong *)(param_1 + 0x7fe0);
        if (*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
        }
        if (*(longlong *)(lVar1 + 0x20) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return;
}



void FUN_1403fa810(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    undefined8 in_stack_00000080;
    undefined8 in_stack_00000088;
    undefined8 in_stack_00000090;
    undefined8 in_stack_00000098;
    undefined8 in_stack_000000a0;
    longlong in_stack_000000a8;
    short *in_stack_000000b0;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    longlong local_28;
    short *local_20;

    psVar4 = (short *)0x0;
    local_20 = psVar4;
    if (in_stack_000000a8 == 0) {
        local_20 = in_stack_000000b0;
    }
    if ((DAT_140dc27ec & 1) == 0) {
        DAT_140dc27ec = DAT_140dc27ec | 1;
        DAT_140dc27f8 = 0;
    }
    if (local_20 != (short *)0x0) {
        sVar1 = *local_20;
        psVar3 = psVar4;
        while (sVar1 != 0) {
            psVar3 = (short *)((longlong)psVar3 + 1);
            sVar1 = local_20[(longlong)psVar3];
        }
        if (DAT_140dc27f8 == 0) {
            DAT_140dc27f8 = 1;
            lVar2 = FUN_140200220(0x947);
            DAT_140dc27f0 = psVar4;
            if (lVar2 != 0) {
                DAT_140dc27f0 = (short *)(ulonglong)*(uint *)(lVar2 + 0xc);
            }
        }
        if (DAT_140dc27f0 < psVar3) {
            return;
        }
    }
    local_50 = in_stack_00000080;
    local_48 = in_stack_00000088;
    local_40 = in_stack_00000090;
    local_58 = CONCAT44(param_3,param_2);
    local_38 = in_stack_00000098;
    local_28 = in_stack_000000a8;
    local_30 = in_stack_000000a0;
    FUN_1403f4900(param_1 + -0x48,0x23d,&local_58);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1403fa980(undefined8 param_1,int param_2)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    int *piVar5;
    uint uVar6;
    uint uVar7;

    uVar2 = 0;
    uVar6 = 0;
    uVar7 = 1;
    if (*(ulonglong *)(DAT_140c65898 + 0x8018) != 0) {
        piVar5 = *(int **)(DAT_140c65898 + 0x8010);
        do {
            if (*piVar5 == param_2) {
                uVar7 = (uint)*(ushort *)(*(int **)(DAT_140c65898 + 0x8010) + uVar2 * 2 + 1);
                break;
            }
            uVar2 = uVar2 + 1;
            piVar5 = piVar5 + 2;
        } while (uVar2 < *(ulonglong *)(DAT_140c65898 + 0x8018));
    }
    if (_DAT_140c7e6a0 == 0) {
        FUN_1406454b0();
    }
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c64698 != 0) || (iVar1 = FUN_14024aa60(), iVar1 < 0)) goto LAB_1403faa3d;
        lVar3 = (**(code **)(*DAT_140c63c08 + 0x18))(DAT_140c63c08,param_2);
    }
    else {
        lVar3 = (*DAT_140c63840)(&PTR_u_World_140a6e180,param_2,DAT_140c63858);
    }
    if (lVar3 != 0) {
        uVar4 = *(int *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar3 + 0x50) * 4) - *(int *)(lVar3 + 0x48)
                ;
        uVar6 = *(uint *)(lVar3 + 0x4c);
        if (uVar4 < *(uint *)(lVar3 + 0x4c)) {
            uVar6 = uVar4;
        }
    }
    LAB_1403faa3d:
    if (uVar7 < uVar6) {
        uVar6 = uVar7;
    }
    return uVar6;
}



undefined4 * FUN_1403faa60(undefined4 *param_1)

{
    undefined8 uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0x1f;
    param_1[2] = 0x1f;
    param_1[3] = 0x1f;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 4) = uVar1;
    uVar3 = uVar4;
    if (param_1[1] != 0) {
        do {
            uVar2 = (int)uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 4) + uVar3 * 8) = 0;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[1]);
    }
    param_1[6] = 1;
    param_1[8] = 0x10;
    param_1[9] = 0x10;
    param_1[7] = 0x60;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar3 = uVar4;
    if (param_1[7] != 0) {
        do {
            uVar2 = (int)uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 10) + uVar3 * 8) = 0;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[7]);
    }
    param_1[0xc] = 2;
    param_1[0xd] = 0xe8;
    param_1[0xe] = 0x20;
    param_1[0xf] = 0x20;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar3 = uVar4;
    if (param_1[0xd] != 0) {
        do {
            uVar2 = (int)uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) = 0;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[0xd]);
    }
    param_1[0x12] = 10;
    param_1[0x13] = 0xfa;
    param_1[0x14] = 0x14;
    param_1[0x15] = 0x14;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 0x16) = uVar1;
    uVar3 = uVar4;
    if (param_1[0x13] != 0) {
        do {
            uVar2 = (int)uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x16) + uVar3 * 8) = 0;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[0x13]);
    }
    param_1[0x18] = 5;
    param_1[0x19] = 0x60;
    param_1[0x1a] = 0x60;
    param_1[0x1b] = 0x60;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
    uVar3 = uVar4;
    if (param_1[0x19] != 0) {
        do {
            uVar2 = (int)uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x1c) + uVar3 * 8) = 0;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[0x19]);
    }
    param_1[0x1e] = 8;
    param_1[0x1f] = 0x55;
    param_1[0x20] = 0x55;
    param_1[0x21] = 0x55;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 0x22) = uVar1;
    uVar3 = uVar4;
    if (param_1[0x1f] != 0) {
        do {
            uVar2 = (int)uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x22) + uVar3 * 8) = 0;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[0x1f]);
    }
    param_1[0x24] = 9;
    param_1[0x25] = 0xcc;
    param_1[0x26] = 0xcc;
    param_1[0x27] = 0xcc;
    uVar1 = FUN_14018b280();
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    if (param_1[0x25] != 0) {
        do {
            uVar2 = (int)uVar4 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8) = 0;
            uVar4 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[0x25]);
    }
    *(undefined8 *)(param_1 + 300) = 0;
    *(undefined8 *)(param_1 + 0x12a) = 0;
    FUN_1407e4830(param_1 + 0x2a,0,0x400);
    return param_1;
}



longlong FUN_1403fad00(undefined8 param_1,undefined8 *param_2)

{
    undefined2 *puVar1;
    longlong lVar2;
    undefined8 local_38;
    undefined8 local_30;
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_38 = *param_2;
    local_20 = 0;
    local_18 = 0;
    local_30 = param_2[1];
    local_10 = 0;
    FUN_14001c1b0(local_28,puVar1,puVar1);
    lVar2 = FUN_1403fbed0(param_1,&local_38);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (puVar1 != (undefined2 *)0x0) {
        FUN_14018b900(puVar1,0);
    }
    return lVar2 + 0x10;
}



longlong FUN_1403fada0(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong local_res8 [2];
    longlong local_res18 [2];
    int local_28;
    int local_24;
    int local_20;
    undefined8 local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8[0] = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            iVar4 = *(int *)(lVar2 + 0x20) - *param_2;
            if ((iVar4 == 0) && (iVar4 = *(int *)(lVar2 + 0x24) - param_2[1], iVar4 == 0)) {
                iVar4 = *(int *)(lVar2 + 0x28) - param_2[2];
            }
            if (iVar4 < 0) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8[0] = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if (local_res8[0] != lVar1) {
        iVar4 = *param_2 - *(int *)(local_res8[0] + 0x20);
        if ((iVar4 == 0) && (iVar4 = param_2[1] - *(int *)(local_res8[0] + 0x24), iVar4 == 0)) {
            iVar4 = param_2[2] - *(int *)(local_res8[0] + 0x28);
        }
        if (-1 < iVar4) goto LAB_1403fae4e;
    }
    local_28 = *param_2;
    local_24 = param_2[1];
    local_18 = 0;
    local_20 = param_2[2];
    FUN_1403fc0b0(param_1,local_res18,local_res8,&local_28);
    local_res8[0] = local_res18[0];
    LAB_1403fae4e:
    return local_res8[0] + 0x30;
}



void FUN_1403fae60(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    pplVar1 = *(longlong ***)(param_1 + 0x10);
    for (pplVar2 = *(longlong ***)(param_1 + 8); pplVar2 != pplVar1; pplVar2 = pplVar2 + 6) {
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 8))();
            *pplVar2 = (longlong *)0x0;
        }
        if (pplVar2[3] != (longlong *)0x0) {
            FUN_14018b900(pplVar2[3],0);
        }
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
        return;
    }
    return;
}



void FUN_1403faef0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



longlong FUN_1403faf50(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined local_58 [8];
    undefined *local_50;
    undefined8 local_48;
    undefined8 local_38;
    undefined8 local_30;
    undefined local_28 [8];
    undefined8 local_20;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if ((*(uint *)(lVar2 + 0x20) < *(uint *)param_2) ||
                ((*(uint *)(lVar2 + 0x20) <= *(uint *)param_2 &&
                  (*(ulonglong *)(lVar2 + 0x28) < (ulonglong)param_2[1])))) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if (local_res8 != lVar1) {
        if ((*(uint *)(local_res8 + 0x20) <= *(uint *)param_2) &&
            ((*(uint *)(local_res8 + 0x20) < *(uint *)param_2 ||
              (*(ulonglong *)(local_res8 + 0x28) <= (ulonglong)param_2[1])))) goto LAB_1403fb07f;
    }
    local_50 = (undefined *)FUN_14018b280();
    local_48 = 0;
    *local_50 = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    *(undefined **)(local_50 + 0x10) = local_50;
    *(undefined **)(local_50 + 0x18) = local_50;
    local_38 = *param_2;
    local_30 = param_2[1];
    FUN_1403d2aa0(local_28,local_58);
    FUN_1403fd570(param_1,&local_res18,&local_res8,&local_38);
    FUN_140008410(local_28);
    FUN_14018b900(local_20,0);
    FUN_140008410(local_58);
    FUN_14018b900(local_50,0);
    local_res8 = local_res18;
    LAB_1403fb07f:
    return local_res8 + 0x30;
}



longlong FUN_1403fb0a0(longlong param_1,float *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined local_68 [8];
    undefined *local_60;
    longlong local_58;
    float local_48;
    float local_44;
    float local_40;
    float local_3c;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(float *)(lVar2 + 0x20) < *param_2) {
                LAB_1403fb11b:
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                if (*(float *)(lVar2 + 0x20) == *param_2) {
                    if (*(float *)(lVar2 + 0x24) < param_2[1]) goto LAB_1403fb11b;
                    if (*(float *)(lVar2 + 0x24) == param_2[1]) {
                        if ((*(float *)(lVar2 + 0x28) < param_2[2]) ||
                            ((*(float *)(lVar2 + 0x28) == param_2[2] &&
                              (*(float *)(lVar2 + 0x2c) <= param_2[3] && param_2[3] != *(float *)(lVar2 + 0x2c))))
                                ) goto LAB_1403fb11b;
                    }
                }
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if (local_res8 != lVar1) {
        if (*(float *)(local_res8 + 0x20) <= *param_2) {
            if (*param_2 != *(float *)(local_res8 + 0x20)) goto LAB_1403fb28d;
            if (*(float *)(local_res8 + 0x24) <= param_2[1]) {
                if (param_2[1] != *(float *)(local_res8 + 0x24)) goto LAB_1403fb28d;
                if ((*(float *)(local_res8 + 0x28) <= param_2[2]) &&
                    ((param_2[2] != *(float *)(local_res8 + 0x28) ||
                      (*(float *)(local_res8 + 0x2c) < param_2[3] ||
                       *(float *)(local_res8 + 0x2c) == param_2[3])))) goto LAB_1403fb28d;
            }
        }
    }
    local_60 = (undefined *)FUN_14018b280(0xb0,0);
    local_58 = 0;
    *local_60 = 0;
    local_44 = param_2[1];
    *(undefined8 *)(local_60 + 8) = 0;
    *(undefined **)(local_60 + 0x10) = local_60;
    *(undefined **)(local_60 + 0x18) = local_60;
    local_48 = *param_2;
    local_3c = param_2[3];
    local_40 = param_2[2];
    FUN_1403fb870(local_38,local_68);
    FUN_1403fd8c0(param_1,&local_res18,&local_res8,&local_48);
    if (local_28 != 0) {
        FUN_1403fdc00(local_38,*(undefined8 *)(local_30 + 8));
        *(longlong *)(local_30 + 0x10) = local_30;
        *(undefined8 *)(local_30 + 8) = 0;
        *(longlong *)(local_30 + 0x18) = local_30;
        local_28 = 0;
    }
    FUN_14018b900(local_30,0);
    if (local_58 != 0) {
        FUN_1403fdc00(local_68,*(undefined8 *)(local_60 + 8));
        *(undefined **)(local_60 + 0x10) = local_60;
        *(undefined8 *)(local_60 + 8) = 0;
        *(undefined **)(local_60 + 0x18) = local_60;
        local_58 = 0;
    }
    FUN_14018b900(local_60,0);
    local_res8 = local_res18;
    LAB_1403fb28d:
    return local_res8 + 0x30;
}



void FUN_1403fb2b0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1403fd820(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_1403fb300(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lStackX8;
    longlong alStackX24 [2];
    undefined4 local_138 [4];
    undefined local_128 [16];
    undefined2 *local_118;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 uStack264;
    longlong *plStack256;
    longlong *plStack248;
    undefined4 uStack240;
    undefined8 uStack236;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack216;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined local_c8 [8];
    longlong lStack192;
    undefined auStack184 [16];
    undefined auStack168 [112];

    lVar5 = *(longlong *)(param_1 + 8);
    lStackX8 = lVar5;
    if (*(longlong *)(lVar5 + 8) != 0) {
        uVar1 = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined8 *)(param_2 + 8);
        lVar6 = *(longlong *)(lVar5 + 8);
        do {
            iVar3 = FUN_1400454d0(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),uVar2,uVar1)
                    ;
            if (iVar3 < 0) {
                lVar7 = *(longlong *)(lVar6 + 0x18);
            }
            else {
                lVar7 = *(longlong *)(lVar6 + 0x10);
                lStackX8 = lVar6;
            }
            lVar6 = lVar7;
        } while (lVar7 != 0);
    }
    if ((lStackX8 == lVar5) ||
        (iVar3 = FUN_1400454d0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(lStackX8 + 0x28),*(undefined8 *)(lStackX8 + 0x30)),
                lVar5 = lStackX8, iVar3 < 0)) {
        local_138[0] = 0;
        local_118 = (undefined2 *)0x0;
        local_128 = ZEXT816(0);
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_128 = CONCAT88(puVar4,puVar4);
        local_118 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        plStack256 = (longlong *)0x0;
        plStack248 = (longlong *)0x0;
        uStack272 = 0;
        uStack264 = 0;
        auStack184 = ZEXT816(0);
        uStack268 = 0;
        uStack240 = 0xffffffff;
        uStack236 = 0;
        uStack228 = 0xffffffff;
        uStack216 = 0x3f800000;
        uStack212 = 0x3f800000;
        uStack208 = 0x3f800000;
        uStack204 = 0x3f800000;
        uStack224 = 0;
        lStack192 = 0;
        FUN_14001c1b0(local_c8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
        FUN_140474e10(auStack168,local_138);
        FUN_1403fdcf0(param_1,alStackX24,&lStackX8,local_c8);
        FUN_140474fa0(auStack168);
        if (lStack192 != 0) {
            FUN_14018b900(lStack192,0);
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_138
            );
        }
        if (plStack256 != (longlong *)0x0) {
            (**(code **)(*plStack256 + 8))();
            plStack256 = (longlong *)0x0;
        }
        if (plStack248 != (longlong *)0x0) {
            (**(code **)(*plStack248 + 8))();
            plStack248 = (longlong *)0x0;
        }
        lVar5 = alStackX24[0];
        if (local_128._0_8_ != 0) {
            FUN_14018b900(local_128._0_8_,0);
        }
    }
    return lVar5 + 0x40;
}



longlong FUN_1403fb3eb(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    undefined8 unaff_RBX;
    longlong unaff_RBP;
    longlong *unaff_RDI;
    undefined local_res20 [8];
    longlong in_stack_00000030;
    undefined4 uStack0000000000000048;
    undefined4 uStack0000000000000050;
    longlong *plVar2;
    undefined4 uStack0000000000000068;
    undefined4 uStack0000000000000074;
    undefined4 uStack0000000000000078;

    *(undefined (*) [16])(&DAT_ffffffffffffffa0 + unaff_RBP) = ZEXT816(0);
    uStack0000000000000068 = 0xffffffff;
    uStack0000000000000074 = 0xffffffff;
    *(undefined4 *)(unaff_RBP + -0x80) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x7c) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x78) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x74) = 0x3f800000;
    uStack0000000000000078 = SUB84(unaff_RDI,0);
    *(longlong **)(unaff_RBP + -0x68) = unaff_RDI;
    uStack0000000000000048 = param_2;
    uStack0000000000000050 = param_2;
    plVar2 = unaff_RDI;
    FUN_14001c1b0();
    FUN_140474e10(&DAT_ffffffffffffffb0 + unaff_RBP,local_res20);
    *(undefined8 *)(unaff_RBP + 0x60) = unaff_RBX;
    FUN_1403fdcf0();
    lVar1 = *(longlong *)(unaff_RBP + 0x70);
    FUN_140474fa0(&DAT_ffffffffffffffb0 + unaff_RBP);
    if (*(longlong *)(unaff_RBP + -0x68) != 0) {
        FUN_14018b900(*(longlong *)(unaff_RBP + -0x68),0);
    }
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_res20
        );
    }
    if (unaff_RDI != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
    }
    if (in_stack_00000030 != 0) {
        FUN_14018b900(in_stack_00000030,0);
    }
    return lVar1 + 0x40;
}



void FUN_1403fb510(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    lVar6 = lVar2 - lVar4;
    lVar3 = FUN_14018b280(param_2 * 0x70,0);
    if (lVar4 != lVar2) {
        lVar5 = lVar3 - lVar4;
        do {
            lVar1 = lVar5 + lVar4;
            if (lVar1 != 0) {
                FUN_140474e10(lVar1,lVar4);
            }
            lVar4 = lVar4 + 0x70;
        } while (lVar4 != lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    for (lVar4 = *(longlong *)(param_1 + 8); lVar4 != lVar2; lVar4 = lVar4 + 0x70) {
        FUN_140474fa0(lVar4);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    *(longlong *)(param_1 + 8) = lVar3;
    *(longlong *)(param_1 + 0x10) = (lVar6 / 0x70) * 0x70 + lVar3;
    *(longlong *)(param_1 + 0x18) = param_2 * 0x70 + lVar3;
    return;
}



undefined8 * FUN_1403fb600(undefined8 *param_1)

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
    param_1[3] = &LAB_1400edc70;
    param_1[4] = &LAB_1400edcb0;
    return param_1;
}



undefined8 * FUN_1403fb670(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xffd);
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



undefined8 * FUN_1403fb6f0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x96);
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



undefined FUN_1403fb770(undefined8 param_1,float *param_2,float *param_3)

{
    if (*param_2 < *param_3) {
        return 1;
    }
    if (*param_2 == *param_3) {
        if (param_2[1] < param_3[1]) {
            return 1;
        }
        if (param_2[1] == param_3[1]) {
            if (param_2[2] < param_3[2]) {
                return 1;
            }
            if ((param_2[2] == param_3[2]) && (param_2[3] <= param_3[3] && param_3[3] != param_2[3])) {
                return 1;
            }
        }
    }
    return 0;
}



void FUN_1403fb7c0(longlong param_1,undefined8 param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined **ppuVar4;
    undefined8 local_res10;

    ppuVar4 = (undefined **)&DAT_140af6cd0;
    lVar3 = 0x1c;
    do {
        lVar2 = lVar3 >> 1;
        if (*(int *)((longlong)ppuVar4 + lVar2 * 4) == 0) {
            ppuVar4 = (undefined **)((longlong)ppuVar4 + (lVar2 + 1) * 4);
            lVar2 = lVar3 + (-1 - lVar2);
        }
        lVar3 = lVar2;
    } while (0 < lVar2);
    uVar1 = 0xfffffffb;
    if (ppuVar4 != &PTR_u_Art_FX_UI_Selection_Selection_Ho_140af6d40) {
        uVar1 = *(undefined4 *)ppuVar4;
    }
    local_res10 = param_2;
    FUN_140334160(param_1 + 8,uVar1);
    local_res10 = 0;
    FUN_1402d16b0(param_1 + 8,*(undefined8 *)(param_1 + 0x18),uVar1,&local_res10);
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



longlong FUN_1403fb870(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;

    puVar3 = (undefined *)FUN_14018b280(0xb0,0);
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
        uVar4 = FUN_1403fdae0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



void FUN_1403fb940(longlong param_1,int param_2)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int *piVar8;
    uint uVar9;
    undefined4 *puVar10;
    longlong lVar11;
    float *pfVar12;
    undefined4 *puVar13;
    ulonglong uVar14;
    float in_xmmTmp2_Dd;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    piVar8 = DAT_140c63750;
    if (param_2 == 0) {
        puVar13 = (undefined4 *)(param_1 + 0x90);
    }
    else {
        puVar13 = (undefined4 *)(((longlong)(param_2 + -1) + 2) * 0x10 + param_1);
    }
    uVar14 = (ulonglong)param_2;
    pfVar12 = (float *)(param_1 + ((longlong)*DAT_140c63750 + 2) * 0x10);
    local_18 = *pfVar12;
    fStack20 = pfVar12[1];
    fStack16 = pfVar12[2];
    fStack12 = pfVar12[3];
    if (uVar14 < 5) {
        lVar11 = 5 - uVar14;
        puVar10 = (undefined4 *)((uVar14 + 2) * 0x10 + param_1);
        do {
            uVar5 = puVar13[1];
            uVar6 = puVar13[2];
            uVar7 = puVar13[3];
            *puVar10 = *puVar13;
            puVar10[1] = uVar5;
            puVar10[2] = uVar6;
            puVar10[3] = uVar7;
            lVar11 = lVar11 + -1;
            puVar10 = puVar10 + 4;
        } while (lVar11 != 0);
    }
    uVar9 = (1 << ((byte)param_2 & 0x1f)) - 1;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & uVar9;
    pfVar12 = (float *)(((longlong)*piVar8 + 2) * 0x10 + param_1);
    fVar2 = pfVar12[1];
    fVar3 = pfVar12[2];
    fVar4 = pfVar12[3];
    uVar9 = movmskps(uVar9,CONCAT412(-(uint)(fStack12 != in_xmmTmp2_Dd),
                                     CONCAT48(-(uint)(fStack16 != fVar4),
                                              CONCAT44(-(uint)(fStack20 != fVar2),
                                                       -(uint)(local_18 != *pfVar12)))));
    if ((uVar9 & 3) != 0) {
        pfVar1 = *(float **)(param_1 + 0xa0);
        if (pfVar1 != (float *)0x0) {
            *pfVar1 = *pfVar12;
            pfVar1[1] = fVar2;
            pfVar1[2] = fVar3;
            pfVar1[3] = fVar4;
        }
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
            (**(code **)(param_1 + 0xb0))(&local_18);
        }
    }
    return;
}



void FUN_1403fba10(longlong param_1,int param_2,int param_3)

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
            if ((uVar4 & 3) != 0) {
                (**(code **)(param_1 + 0xb0))(&local_18);
            }
        }
    }
    return;
}



void FUN_1403fbac0(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            lVar1 = *(longlong *)(uVar3 + *param_1);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x10;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001403fbb27. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



void FUN_1403fbb30(longlong param_1,longlong **param_2,longlong **param_3)

{
    longlong *plVar1;
    undefined2 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 uVar8;

    lVar4 = *(longlong *)(param_1 + 0x10);
    if (lVar4 == *(longlong *)(param_1 + 0x18)) {
        lVar4 = (lVar4 - *(longlong *)(param_1 + 8)) / 0x30;
        if (lVar4 == 0) {
            lVar4 = 1;
        }
        else {
            lVar4 = lVar4 * 2;
        }
        uVar3 = FUN_14018a3e0(lVar4 * 0x30);
        lVar7 = (uVar3 / 0x30) * 0x30;
        lVar4 = FUN_14018b280(lVar7,0);
        lVar5 = FUN_1403ffc00(*(undefined8 *)(param_1 + 8),param_2,lVar4);
        if (lVar5 != 0) {
            FUN_140109690(lVar5,param_3);
        }
        uVar6 = FUN_1403ffc00(param_2,*(undefined8 *)(param_1 + 0x10),lVar5 + 0x30);
        FUN_1403fe150(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar4;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        *(longlong *)(param_1 + 0x18) = lVar7 + lVar4;
    }
    else {
        if (lVar4 != 0) {
            FUN_140109690(lVar4,&DAT_ffffffffffffffd0 + lVar4);
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x30;
        puVar2 = (undefined2 *)FUN_14018b280(0x10);
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        if (*param_3 != (longlong *)0x0) {
            (**(code **)**param_3)();
        }
        plVar1 = *param_3;
        uVar8 = *(undefined4 *)(param_3 + 1);
        FUN_1403ff890(param_2,&DAT_ffffffffffffffa0 + *(longlong *)(param_1 + 0x10),
                      &DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        if (plVar1 != (longlong *)0x0) {
            (**(code **)*plVar1)(plVar1);
        }
        if (*param_2 != (longlong *)0x0) {
            (**(code **)(**param_2 + 8))();
            *param_2 = (longlong *)0x0;
        }
        *param_2 = plVar1;
        *(undefined4 *)(param_2 + 1) = uVar8;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1);
        }
        if (puVar2 != (undefined2 *)0x0) {
            FUN_14018b900(puVar2,0);
        }
    }
    return;
}



void FUN_1403fbcf0(longlong param_1,undefined *param_2,undefined8 param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined local_88 [112];

    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 == *(longlong *)(param_1 + 0x18)) {
        lVar3 = (lVar3 - *(longlong *)(param_1 + 8)) / 0x70;
        lVar2 = lVar3 * 2;
        if (lVar3 == 0) {
            lVar2 = 1;
        }
        uVar1 = FUN_14018a3e0(lVar2 * 0x70);
        lVar8 = ((uVar1 - uVar1 / 7 >> 1) + uVar1 / 7 >> 6) * 0x70;
        lVar2 = FUN_14018b280(lVar8,0);
        lVar3 = lVar2;
        for (puVar6 = *(undefined **)(param_1 + 8); puVar6 != param_2; puVar6 = puVar6 + 0x70) {
            if (lVar3 != 0) {
                FUN_1403f6ce0(lVar3,puVar6);
            }
            lVar3 = lVar3 + 0x70;
        }
        if (lVar3 != 0) {
            FUN_1403f6ce0(lVar3,param_3);
        }
        puVar6 = *(undefined **)(param_1 + 0x10);
        lVar7 = lVar3 + 0x70;
        if (param_2 != puVar6) {
            puVar4 = &DAT_ffffffffffffff90 + (longlong)(param_2 + (lVar7 - lVar3));
            do {
                if (lVar7 != 0) {
                    FUN_1403f6ce0(lVar7,puVar4);
                }
                puVar4 = puVar4 + 0x70;
                lVar7 = lVar7 + 0x70;
            } while (puVar4 != puVar6);
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        for (lVar5 = *(longlong *)(param_1 + 8); lVar5 != lVar3; lVar5 = lVar5 + 0x70) {
            FUN_1403f6ee0(lVar5);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar2;
        *(longlong *)(param_1 + 0x10) = lVar7;
        *(longlong *)(param_1 + 0x18) = lVar8 + lVar2;
        return;
    }
    if (lVar3 != 0) {
        FUN_1403f6ce0(lVar3,&DAT_ffffffffffffff90 + lVar3);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x70;
    FUN_1403f6ce0(local_88,param_3);
    FUN_1403ff940(param_2,*(longlong *)(param_1 + 0x10) + -0xe0,
                  &DAT_ffffffffffffff90 + *(longlong *)(param_1 + 0x10));
    FUN_1403f6e00(param_2,local_88);
    FUN_1403f6ee0(local_88);
    return;
}



undefined8 * FUN_1403fbed0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    FUN_1403fe3a0();
    lVar1 = (((ulonglong)*(uint *)param_2 << 0x30 | (ulonglong)((uint)param_2[1] & 0xffffff)) %
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) * 8;
    puVar2 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10));
    puVar3 = puVar2;
    while( true ) {
        if (puVar3 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)FUN_14018b280(0x38);
            puVar3 = puVar4 + 1;
            *puVar4 = 0;
            if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = *param_2;
                puVar4[2] = param_2[1];
                puVar4[4] = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
                FUN_14001c1b0(puVar4 + 3,param_2[3],param_2[4]);
            }
            *puVar4 = puVar2;
            *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10)) = puVar4;
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
            return puVar3;
        }
        if ((*(uint *)(puVar3 + 1) == *(uint *)param_2) && (puVar3[2] == param_2[1])) break;
        puVar3 = (undefined8 *)*puVar3;
    }
    return puVar3 + 1;
}



void FUN_1403fbfe0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3 != 0) {
        do {
            puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (puVar2 != (undefined8 *)0x0) {
                puVar1 = (undefined8 *)*puVar2;
                if (puVar2[4] != 0) {
                    FUN_14018b900(puVar2[4],0);
                }
                FUN_14018b900(puVar2,0);
                puVar2 = puVar1;
            }
            uVar3 = uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + uVar3 * 8) = 0;
        } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)
                );
        *(undefined8 *)(param_1 + 0x28) = 0;
        return;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



undefined8 * FUN_1403fc0b0(longlong param_1,undefined8 *param_2,char **param_3,int *param_4)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar1 = *param_3;
    pcVar2 = *(char **)(param_1 + 8);
    if (pcVar1 == *(char **)(pcVar2 + 0x10)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            iVar3 = *param_4 - *(int *)(pcVar1 + 0x20);
            if ((iVar3 == 0) && (iVar3 = param_4[1] - *(int *)(pcVar1 + 0x24), iVar3 == 0)) {
                iVar3 = param_4[2] - *(int *)(pcVar1 + 0x28);
            }
            if (iVar3 < 0) {
                LAB_1403fc0ff:
                FUN_1403fe500(param_1,param_2,pcVar1,pcVar1,param_4);
                return param_2;
            }
        }
    }
    else if (pcVar1 == pcVar2) {
        lVar6 = *(longlong *)(pcVar2 + 0x18);
        iVar3 = *(int *)(lVar6 + 0x20) - *param_4;
        if ((iVar3 == 0) && (iVar3 = *(int *)(lVar6 + 0x24) - param_4[1], iVar3 == 0)) {
            iVar3 = *(int *)(lVar6 + 0x28) - param_4[2];
        }
        if (iVar3 < 0) {
            FUN_1403fe500(param_1,param_2,0,lVar6,param_4);
            return param_2;
        }
    }
    else {
        if ((*pcVar1 == '\0') && (*(char **)(*(longlong *)(pcVar1 + 8) + 8) == pcVar1)) {
            lVar6 = *(longlong *)(pcVar1 + 0x18);
        }
        else {
            lVar6 = *(longlong *)(pcVar1 + 0x10);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(pcVar1 + 8);
                lVar5 = lVar6;
                if (pcVar1 == *(char **)(lVar6 + 0x10)) {
                    do {
                        lVar6 = *(longlong *)(lVar5 + 8);
                        bVar7 = lVar5 == *(longlong *)(lVar6 + 0x10);
                        lVar5 = lVar6;
                    } while (bVar7);
                }
            }
            else {
                for (lVar5 = *(longlong *)(lVar6 + 0x18); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
                    lVar6 = lVar5;
                }
            }
        }
        iVar3 = *(int *)(lVar6 + 0x20) - *param_4;
        if ((iVar3 == 0) && (iVar3 = *(int *)(lVar6 + 0x24) - param_4[1], iVar3 == 0)) {
            iVar3 = *(int *)(lVar6 + 0x28) - param_4[2];
        }
        if (iVar3 < 0) {
            iVar3 = *param_4 - *(int *)(pcVar1 + 0x20);
            if ((iVar3 == 0) && (iVar3 = param_4[1] - *(int *)(pcVar1 + 0x24), iVar3 == 0)) {
                iVar3 = param_4[2] - *(int *)(pcVar1 + 0x28);
            }
            if (iVar3 < 0) {
                if (*(longlong *)(lVar6 + 0x18) == 0) {
                    FUN_1403fe500(param_1,param_2,0,lVar6,param_4);
                    return param_2;
                }
                goto LAB_1403fc0ff;
            }
        }
    }
    puVar4 = (undefined8 *)FUN_1403fe620(param_1,local_18,param_4);
    *param_2 = *puVar4;
    return param_2;
}



void FUN_1403fc230(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3 != 0) {
        do {
            puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (puVar2 != (undefined8 *)0x0) {
                puVar1 = (undefined8 *)*puVar2;
                FUN_14018b900(puVar2,0);
                puVar2 = puVar1;
            }
            uVar3 = uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + uVar3 * 8) = 0;
        } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)
                );
        *(undefined8 *)(param_1 + 0x28) = 0;
        return;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



void FUN_1403fc2d0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a768,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403fc396. Too many branches
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



undefined * FUN_1403fc3f0(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *param_1;
    if (lVar2 != *param_2) {
        do {
            if (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
            }
            lVar2 = *(longlong *)(*param_1 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_1 + 8);
                if (*param_1 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_1 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_1 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_1 + 0x18) != lVar2) {
                    *param_1 = lVar2;
                }
            }
            else {
                *param_1 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_1 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            lVar2 = *param_1;
        } while (lVar2 != *param_2);
    }
    return &LAB_1403fc3d0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403fc4a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined *puVar8;
    longlong *plVar9;
    longlong lVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;
    undefined4 local_48 [2];
    undefined8 *local_40;
    undefined local_38 [16];

    puVar13 = (undefined8 *)0x0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64634 != 0) || (iVar5 = FUN_14024d920(), iVar5 < 0)) {
                LAB_1403fc5e1:
                lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
                if (lVar12 != *(longlong *)(param_1 + 8)) {
                    do {
                        lVar10 = *(longlong *)(lVar12 + 0x28);
                        uVar4 = *(uint *)(*(longlong *)(lVar10 + 8) + 8);
                        if (uVar4 != 0) {
                            lVar1 = *(longlong *)(param_1 + 8);
                            lVar3 = lVar1;
                            lVar2 = *(longlong *)(lVar1 + 8);
                            while (lVar2 != 0) {
                                if (*(uint *)(lVar2 + 0x20) < uVar4) {
                                    lVar2 = *(longlong *)(lVar2 + 0x18);
                                }
                                else {
                                    lVar3 = lVar2;
                                    lVar2 = *(longlong *)(lVar2 + 0x10);
                                }
                            }
                            if ((lVar3 == lVar1) || (uVar4 < *(uint *)(lVar3 + 0x20))) {
                                local_res10 = lVar1;
                                plVar9 = &local_res10;
                            }
                            else {
                                local_res8 = lVar3;
                                plVar9 = &local_res8;
                            }
                            if (*plVar9 != lVar1) {
                                lVar1 = *(longlong *)(*plVar9 + 0x28);
                                local_res18 = lVar10;
                                FUN_140007810(lVar1 + 0x18,local_38,&local_res18);
                                *(longlong *)(lVar10 + 0x10) = lVar1;
                            }
                        }
                        lVar10 = *(longlong *)(lVar12 + 0x18);
                        if (lVar10 == 0) {
                            lVar10 = *(longlong *)(lVar12 + 8);
                            if (lVar12 == *(longlong *)(lVar10 + 0x18)) {
                                do {
                                    lVar12 = lVar10;
                                    lVar10 = *(longlong *)(lVar12 + 8);
                                } while (lVar12 == *(longlong *)(lVar10 + 0x18));
                            }
                            if (*(longlong *)(lVar12 + 0x18) != lVar10) {
                                lVar12 = lVar10;
                            }
                        }
                        else {
                            for (lVar1 = *(longlong *)(lVar10 + 0x10); lVar12 = lVar10, lVar1 != 0;
                                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                                lVar10 = lVar1;
                            }
                        }
                    } while (lVar12 != *(longlong *)(param_1 + 8));
                }
                return;
            }
            uVar4 = (**(code **)(*DAT_140c64270 + 0x28))();
        }
        else {
            uVar4 = (*DAT_140c63838)(&PTR_u_WorldZone_140a6e3e8);
        }
        if (uVar4 <= (uint)puVar13) goto LAB_1403fc5e1;
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c64634 == 0) && (iVar5 = FUN_14024d920(), -1 < iVar5)) {
                puVar6 = (undefined4 *)(**(code **)(*DAT_140c64270 + 0x20))();
                goto LAB_1403fc566;
            }
        }
        else {
            puVar6 = (undefined4 *)(*DAT_140c63848)(&PTR_u_WorldZone_140a6e3e8,puVar13,DAT_140c63858);
            LAB_1403fc566:
            if (puVar6 != (undefined4 *)0x0) {
                puVar7 = (undefined8 *)FUN_14018b280(0x38);
                puVar11 = (undefined8 *)0x0;
                if (puVar7 != (undefined8 *)0x0) {
                    *puVar7 = &PTR_FUN_140b66938;
                    puVar8 = (undefined *)FUN_14018b280(0x28);
                    puVar7[5] = 0;
                    puVar7[4] = puVar8;
                    *puVar8 = 0;
                    *(undefined8 *)(puVar7[4] + 8) = 0;
                    *(undefined8 *)(puVar7[4] + 0x10) = puVar7[4];
                    *(undefined8 *)(puVar7[4] + 0x18) = puVar7[4];
                    puVar7[1] = puVar6;
                    puVar7[2] = 0;
                    puVar11 = puVar7;
                }
                local_48[0] = *puVar6;
                local_40 = puVar11;
                FUN_140055f80(param_1,local_38,local_48);
            }
        }
        puVar13 = (undefined8 *)(ulonglong)((uint)puVar13 + 1);
    } while( true );
}



void FUN_1403fc6f0(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;

    if ((ulonglong)param_1[1] <= param_2) {
        puVar2 = (undefined8 *)FUN_14018db00(*param_1,param_2,0x10);
        uVar5 = param_1[1];
        uVar6 = 0;
        if (uVar5 < param_2) {
            puVar4 = puVar2 + uVar5 * 2;
            lVar7 = param_2 - uVar5;
            do {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar4[1] = 0;
                    *puVar4 = 0;
                }
                puVar4 = puVar4 + 2;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
        }
        if ((undefined8 *)*param_1 != puVar2) {
            if (param_1[1] != 0) {
                puVar4 = puVar2;
                do {
                    if (puVar4 != (undefined8 *)0x0) {
                        puVar3 = (undefined8 *)((longlong)puVar4 + *param_1 + -(longlong)puVar2);
                        puVar4[1] = puVar3[1];
                        *puVar4 = *puVar3;
                        puVar3[1] = 0;
                        *puVar3 = 0;
                    }
                    lVar7 = *(longlong *)((longlong)puVar4 + *param_1 + -(longlong)puVar2);
                    if (lVar7 != 0) {
                        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                    }
                    uVar6 = uVar6 + 1;
                    puVar4 = puVar4 + 2;
                } while (uVar6 < (ulonglong)param_1[1]);
            }
            lVar7 = *param_1;
            if (lVar7 != 0) {
                (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
            }
            *param_1 = (longlong)puVar2;
        }
        param_1[1] = param_2;
        return;
    }
    if ((ulonglong)param_1[1] <= param_2) {
        param_1[1] = param_2;
        return;
    }
    lVar7 = param_2 << 4;
    uVar5 = param_2;
    do {
        lVar1 = *(longlong *)(lVar7 + *param_1);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x10;
    } while (uVar5 < (ulonglong)param_1[1]);
    param_1[1] = param_2;
    return;
}



void FUN_1403fc850(longlong param_1,undefined param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong **pplVar3;
    undefined8 uVar4;
    longlong **pplVar5;
    longlong *plVar6;
    longlong **pplVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    ulonglong *puVar10;
    int iVar11;
    int iVar12;
    ulonglong uVar13;
    longlong lVar14;
    undefined *puVar15;
    longlong **pplVar16;
    int iVar17;
    undefined auStack1144 [32];
    undefined local_458 [8];
    longlong **local_450;
    longlong *local_440;
    undefined local_438 [1000];
    ulonglong local_50 [3];

    local_50[1] = DAT_140c0f7b0 ^ (ulonglong)auStack1144;
    plVar6 = *(longlong **)(param_1 + 8);
    if (((longlong **)*plVar6 != (longlong **)plVar6) && (*(longlong **)*plVar6 != plVar6)) {
        pplVar5 = (longlong **)FUN_14018b280(0xb0,0);
        iVar17 = 0x3f;
        *pplVar5 = (longlong *)pplVar5;
        iVar11 = 0x3f;
        pplVar5[1] = (longlong *)pplVar5;
        pplVar7 = &local_440;
        local_450 = pplVar5;
        do {
            plVar6 = (longlong *)FUN_14018b280(0xb0,0);
            iVar11 = iVar11 + -1;
            *plVar6 = (longlong)plVar6;
            *pplVar7 = plVar6;
            plVar6[1] = (longlong)plVar6;
            pplVar7 = pplVar7 + 2;
        } while (-1 < iVar11);
        pplVar7 = *(longlong ***)(param_1 + 8);
        iVar11 = 0;
        if ((longlong **)*pplVar7 != pplVar7) {
            do {
                plVar6 = *pplVar7;
                plVar1 = *pplVar5;
                plVar2 = (longlong *)*plVar6;
                if ((plVar1 != plVar6) && (plVar1 != plVar2)) {
                    *(longlong **)plVar2[1] = plVar1;
                    *(longlong **)plVar6[1] = plVar2;
                    *(longlong **)plVar1[1] = plVar6;
                    lVar14 = plVar1[1];
                    plVar1[1] = plVar2[1];
                    plVar2[1] = plVar6[1];
                    plVar6[1] = lVar14;
                }
                iVar12 = 0;
                lVar14 = 0;
                pplVar7 = pplVar5;
                if (0 < iVar11) {
                    pplVar16 = &local_440;
                    do {
                        pplVar3 = (longlong **)*pplVar16;
                        pplVar8 = (longlong **)*pplVar3;
                        pplVar7 = pplVar5;
                        if (pplVar8 == pplVar3) break;
                        pplVar7 = (longlong **)*pplVar5;
                        do {
                            if (pplVar7 == pplVar5) goto LAB_1403fca0f;
                            if (*(float *)(pplVar7 + 9) <= *(float *)(pplVar8 + 9)) {
                                pplVar8 = (longlong **)*pplVar8;
                                pplVar9 = pplVar7;
                            }
                            else {
                                pplVar9 = (longlong **)*pplVar7;
                                if (pplVar8 != pplVar9) {
                                    *pplVar9[1] = (longlong)pplVar8;
                                    *pplVar7[1] = (longlong)pplVar9;
                                    *pplVar8[1] = (longlong)pplVar7;
                                    plVar6 = pplVar8[1];
                                    pplVar8[1] = pplVar9[1];
                                    pplVar9[1] = pplVar7[1];
                                    pplVar7[1] = plVar6;
                                }
                            }
                            pplVar7 = pplVar9;
                        } while (pplVar8 != pplVar3);
                        if ((pplVar9 != pplVar5) && (pplVar3 != pplVar5)) {
                            *pplVar5[1] = (longlong)pplVar3;
                            *pplVar9[1] = (longlong)pplVar5;
                            *pplVar3[1] = (longlong)pplVar9;
                            plVar6 = pplVar3[1];
                            pplVar3[1] = pplVar5[1];
                            pplVar5[1] = pplVar9[1];
                            pplVar9[1] = plVar6;
                        }
                        LAB_1403fca0f:
                        lVar14 = lVar14 + 1;
                        *pplVar16 = (longlong *)pplVar5;
                        iVar12 = iVar12 + 1;
                        pplVar7 = pplVar3;
                        pplVar5 = pplVar3;
                        pplVar16 = pplVar16 + 2;
                    } while (lVar14 < iVar11);
                }
                pplVar5 = *(longlong ***)(local_438 + lVar14 * 0x10 + -8);
                *(longlong ***)(local_438 + lVar14 * 0x10 + -8) = pplVar7;
                if (iVar12 == iVar11) {
                    iVar11 = iVar11 + 1;
                }
                pplVar7 = *(longlong ***)(param_1 + 8);
                local_450 = pplVar5;
            } while ((longlong **)*pplVar7 != pplVar7);
        }
        if (1 < iVar11) {
            puVar15 = local_438;
            uVar13 = (ulonglong)(iVar11 - 1);
            do {
                FUN_1403fe860(puVar15,puVar15 + -0x10,param_2);
                puVar15 = puVar15 + 0x10;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
        uVar4 = *(undefined8 *)(local_438 + (longlong)(iVar11 + -1) * 0x10 + -8);
        *(undefined8 *)(local_438 + (longlong)(iVar11 + -1) * 0x10 + -8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar4;
        puVar10 = local_50 + 1;
        do {
            FUN_1403fe1b0(puVar10 + -2);
            FUN_14018b900(puVar10[-1],0);
            iVar17 = iVar17 + -1;
            puVar10 = puVar10 + -2;
        } while (-1 < iVar17);
        FUN_1403fe1b0(local_458);
        FUN_14018b900(pplVar5,0);
    }
    FUN_1407db4f0(local_50[1] ^ (ulonglong)auStack1144);
    return;
}



void FUN_1403fcb30(uint param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong local_res10 [2];
    longlong local_res20;
    longlong local_48 [2];
    uint local_38;
    undefined8 local_30;
    undefined8 local_28;

    if (param_2 == 0) {
        return;
    }
    lVar1 = *(longlong *)(param_3 + 8);
    local_res20 = lVar1;
    lVar5 = *(longlong *)(lVar1 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_1) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res20 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res20 == lVar1) || (param_1 < *(uint *)(local_res20 + 0x20))) {
        local_res20 = lVar1;
    }
    uVar7 = 0;
    lVar5 = local_res20;
    local_res10[0] = param_2;
    if (local_res20 == lVar1) {
        local_28 = 0;
        local_30 = 0;
        local_38 = param_1;
        FUN_1403fe760(param_3,local_48);
        lVar5 = local_48[0];
        if (local_48[0] == *(longlong *)(param_3 + 8)) {
            return;
        }
    }
    uVar2 = *(ulonglong *)(lVar5 + 0x30);
    uVar8 = uVar7;
    if (uVar2 != 0) {
        lVar1 = *(longlong *)(lVar5 + 0x28);
        uVar10 = uVar2;
        do {
            uVar6 = (uVar10 - uVar7 >> 1) + uVar7;
            lVar11 = *(longlong *)(lVar1 + uVar6 * 8);
            if (lVar11 != 0) {
                iVar4 = *(int *)(param_2 + 8) - *(int *)(lVar11 + 8);
                if ((iVar4 == 0) && (iVar4 = *(int *)(param_2 + 0xc) - *(int *)(lVar11 + 0xc), iVar4 == 0))
                {
                    if (*(int *)(param_2 + 0x10) != *(int *)(lVar11 + 0x10)) {
                        if (*(int *)(lVar11 + 0x10) == 2) goto LAB_1403fcc9b;
                        if (*(int *)(param_2 + 0x10) == 2) goto LAB_1403fcc92;
                    }
                    LAB_1403fcc30:
                    uVar8 = uVar6;
                    if (uVar6 == 0) goto LAB_1403fccd2;
                    lVar11 = lVar1 + uVar6 * 8;
                    goto LAB_1403fcc50;
                }
                if (-1 < iVar4) {
                    if (iVar4 < 1) goto LAB_1403fcc30;
                    LAB_1403fcc92:
                    uVar7 = uVar6 + 1;
                    uVar6 = uVar10;
                }
            }
            LAB_1403fcc9b:
            uVar8 = uVar7;
            uVar10 = uVar6;
        } while (uVar7 < uVar6);
    }
    goto LAB_1403fcca7;
    LAB_1403fcc50:
    lVar3 = *(longlong *)(lVar11 + -8);
    lVar11 = lVar11 + -8;
    uVar7 = uVar8 - 1;
    if (((lVar3 == 0) || (*(int *)(param_2 + 8) != *(int *)(lVar3 + 8))) ||
        (*(int *)(param_2 + 0xc) != *(int *)(lVar3 + 0xc))) goto LAB_1403fccd2;
    if (((*(int *)(param_2 + 0x10) != *(int *)(lVar3 + 0x10)) &&
         ((*(int *)(lVar3 + 0x10) == 2 || (*(int *)(param_2 + 0x10) == 2)))) ||
        (uVar8 = uVar7, uVar7 == 0)) goto LAB_1403fccd2;
    goto LAB_1403fcc50;
    LAB_1403fccd2:
    uVar7 = uVar6 + 1;
    if (uVar7 < uVar2) {
        plVar9 = (longlong *)(lVar1 + uVar7 * 8);
        do {
            lVar1 = *plVar9;
            if (((lVar1 == 0) || (*(int *)(param_2 + 8) != *(int *)(lVar1 + 8))) ||
                (*(int *)(param_2 + 0xc) != *(int *)(lVar1 + 0xc))) break;
            if ((*(int *)(param_2 + 0x10) != *(int *)(lVar1 + 0x10)) &&
                ((*(int *)(lVar1 + 0x10) == 2 || (*(int *)(param_2 + 0x10) == 2)))) break;
            uVar7 = uVar7 + 1;
            plVar9 = plVar9 + 1;
        } while (uVar7 < uVar2);
    }
    LAB_1403fcca7:
    if (*(int *)(param_2 + 0x10) != 2) {
        uVar7 = uVar8;
    }
    FUN_1400b4de0((longlong *)(lVar5 + 0x28),uVar7,local_res10);
    return;
}



void FUN_1403fcd20(uint param_1,int *param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    int **ppiVar8;
    longlong *plVar9;
    longlong local_res18;

    lVar1 = *(longlong *)(param_3 + 8);
    local_res18 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_1) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res18 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res18 == lVar1) || (param_1 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar1;
    }
    if (local_res18 == lVar1) {
        return;
    }
    uVar2 = *(ulonglong *)(local_res18 + 0x30);
    uVar7 = 0;
    if (uVar2 == 0) {
        return;
    }
    lVar1 = *(longlong *)(local_res18 + 0x28);
    uVar6 = uVar2;
    do {
        uVar5 = (uVar6 - uVar7 >> 1) + uVar7;
        if (param_2 == (int *)0x0) {
            if (*(longlong *)(lVar1 + uVar5 * 8) == 0) goto LAB_1403fcdbb;
            LAB_1403fce62:
            uVar7 = uVar5 + 1;
            uVar5 = uVar6;
        }
        else {
            lVar3 = *(longlong *)(lVar1 + uVar5 * 8);
            if (lVar3 != 0) {
                iVar4 = param_2[2] - *(int *)(lVar3 + 8);
                if ((iVar4 == 0) && (iVar4 = param_2[3] - *(int *)(lVar3 + 0xc), iVar4 == 0)) {
                    if (param_2[4] == *(int *)(lVar3 + 0x10)) {
                        LAB_1403fcdbb:
                        uVar7 = uVar5;
                        if (uVar5 == 0) goto LAB_1403fcdec;
                        plVar9 = (longlong *)(lVar1 + uVar5 * 8);
                        break;
                    }
                    if (*(int *)(lVar3 + 0x10) != 2) {
                        if (param_2[4] != 2) goto LAB_1403fcdbb;
                        uVar7 = uVar5 + 1;
                        uVar5 = uVar6;
                    }
                }
                else if (-1 < iVar4) {
                    if (0 < iVar4) goto LAB_1403fce62;
                    goto LAB_1403fcdbb;
                }
            }
        }
        uVar6 = uVar5;
        if (uVar5 <= uVar7) {
            return;
        }
    } while( true );
    do {
        uVar6 = uVar7 - 1;
        plVar9 = plVar9 + -1;
        if (param_2 == (int *)0x0) {
            if (*plVar9 != 0) break;
        }
        else {
            lVar3 = *plVar9;
            if (((lVar3 == 0) || (param_2[2] != *(int *)(lVar3 + 8))) ||
                (param_2[3] != *(int *)(lVar3 + 0xc))) break;
            if ((param_2[4] != *(int *)(lVar3 + 0x10)) &&
                ((*(int *)(lVar3 + 0x10) == 2 || (param_2[4] == 2)))) break;
        }
        uVar7 = uVar6;
    } while (uVar6 != 0);
    LAB_1403fcdec:
    uVar5 = uVar5 + 1;
    if (uVar5 < uVar2) {
        plVar9 = (longlong *)(lVar1 + uVar5 * 8);
        do {
            if (param_2 == (int *)0x0) {
                if (*plVar9 != 0) break;
            }
            else {
                lVar3 = *plVar9;
                if (((lVar3 == 0) || (param_2[2] != *(int *)(lVar3 + 8))) ||
                    (param_2[3] != *(int *)(lVar3 + 0xc))) break;
                if ((param_2[4] != *(int *)(lVar3 + 0x10)) &&
                    ((*(int *)(lVar3 + 0x10) == 2 || (param_2[4] == 2)))) break;
            }
            uVar5 = uVar5 + 1;
            plVar9 = plVar9 + 1;
        } while (uVar5 < uVar2);
    }
    if (uVar7 < uVar5) {
        ppiVar8 = (int **)(lVar1 + uVar7 * 8);
        while (**ppiVar8 != *param_2) {
            uVar7 = uVar7 + 1;
            ppiVar8 = ppiVar8 + 1;
            if (uVar5 <= uVar7) {
                return;
            }
        }
        FUN_140007270((longlong *)(local_res18 + 0x28));
    }
    return;
}



void FUN_1403fcf80(uint param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong local_res10 [2];
    longlong local_res20;
    longlong local_48 [2];
    uint local_38;
    undefined8 local_30;
    undefined8 local_28;

    if (param_2 == 0) {
        return;
    }
    lVar1 = *(longlong *)(param_3 + 8);
    local_res20 = lVar1;
    lVar5 = *(longlong *)(lVar1 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_1) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res20 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res20 == lVar1) || (param_1 < *(uint *)(local_res20 + 0x20))) {
        local_res20 = lVar1;
    }
    uVar7 = 0;
    lVar5 = local_res20;
    local_res10[0] = param_2;
    if (local_res20 == lVar1) {
        local_28 = 0;
        local_30 = 0;
        local_38 = param_1;
        FUN_1403fe760(param_3,local_48);
        lVar5 = local_48[0];
        if (local_48[0] == *(longlong *)(param_3 + 8)) {
            return;
        }
    }
    uVar2 = *(ulonglong *)(lVar5 + 0x30);
    uVar8 = uVar7;
    if (uVar2 != 0) {
        lVar1 = *(longlong *)(lVar5 + 0x28);
        uVar10 = uVar2;
        do {
            uVar6 = (uVar10 - uVar7 >> 1) + uVar7;
            lVar11 = *(longlong *)(lVar1 + uVar6 * 8);
            if (lVar11 != 0) {
                iVar4 = *(int *)(param_2 + 0xc) - *(int *)(lVar11 + 0xc);
                if ((iVar4 == 0) && (iVar4 = *(int *)(param_2 + 0x10) - *(int *)(lVar11 + 0x10), iVar4 == 0)
                        ) {
                    if (*(int *)(param_2 + 0x14) != *(int *)(lVar11 + 0x14)) {
                        if (*(int *)(lVar11 + 0x14) == 2) goto LAB_1403fd0eb;
                        if (*(int *)(param_2 + 0x14) == 2) goto LAB_1403fd0e2;
                    }
                    LAB_1403fd080:
                    uVar8 = uVar6;
                    if (uVar6 == 0) goto LAB_1403fd122;
                    lVar11 = lVar1 + uVar6 * 8;
                    goto LAB_1403fd0a0;
                }
                if (-1 < iVar4) {
                    if (iVar4 < 1) goto LAB_1403fd080;
                    LAB_1403fd0e2:
                    uVar7 = uVar6 + 1;
                    uVar6 = uVar10;
                }
            }
            LAB_1403fd0eb:
            uVar8 = uVar7;
            uVar10 = uVar6;
        } while (uVar7 < uVar6);
    }
    goto LAB_1403fd0f7;
    LAB_1403fd0a0:
    lVar3 = *(longlong *)(lVar11 + -8);
    lVar11 = lVar11 + -8;
    uVar7 = uVar8 - 1;
    if (((lVar3 == 0) || (*(int *)(param_2 + 0xc) != *(int *)(lVar3 + 0xc))) ||
        (*(int *)(param_2 + 0x10) != *(int *)(lVar3 + 0x10))) goto LAB_1403fd122;
    if (((*(int *)(param_2 + 0x14) != *(int *)(lVar3 + 0x14)) &&
         ((*(int *)(lVar3 + 0x14) == 2 || (*(int *)(param_2 + 0x14) == 2)))) ||
        (uVar8 = uVar7, uVar7 == 0)) goto LAB_1403fd122;
    goto LAB_1403fd0a0;
    LAB_1403fd122:
    uVar7 = uVar6 + 1;
    if (uVar7 < uVar2) {
        plVar9 = (longlong *)(lVar1 + uVar7 * 8);
        do {
            lVar1 = *plVar9;
            if (((lVar1 == 0) || (*(int *)(param_2 + 0xc) != *(int *)(lVar1 + 0xc))) ||
                (*(int *)(param_2 + 0x10) != *(int *)(lVar1 + 0x10))) break;
            if ((*(int *)(param_2 + 0x14) != *(int *)(lVar1 + 0x14)) &&
                ((*(int *)(lVar1 + 0x14) == 2 || (*(int *)(param_2 + 0x14) == 2)))) break;
            uVar7 = uVar7 + 1;
            plVar9 = plVar9 + 1;
        } while (uVar7 < uVar2);
    }
    LAB_1403fd0f7:
    if (*(int *)(param_2 + 0x14) != 2) {
        uVar7 = uVar8;
    }
    FUN_1400b4de0((longlong *)(lVar5 + 0x28),uVar7,local_res10);
    return;
}



void FUN_1403fd170(uint param_1,int *param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    int **ppiVar8;
    longlong *plVar9;
    longlong local_res18;

    lVar1 = *(longlong *)(param_3 + 8);
    local_res18 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_1) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res18 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res18 == lVar1) || (param_1 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar1;
    }
    if (local_res18 == lVar1) {
        return;
    }
    uVar2 = *(ulonglong *)(local_res18 + 0x30);
    uVar7 = 0;
    if (uVar2 == 0) {
        return;
    }
    lVar1 = *(longlong *)(local_res18 + 0x28);
    uVar6 = uVar2;
    do {
        uVar5 = (uVar6 - uVar7 >> 1) + uVar7;
        if (param_2 == (int *)0x0) {
            if (*(longlong *)(lVar1 + uVar5 * 8) == 0) goto LAB_1403fd20b;
            LAB_1403fd2b2:
            uVar7 = uVar5 + 1;
            uVar5 = uVar6;
        }
        else {
            lVar3 = *(longlong *)(lVar1 + uVar5 * 8);
            if (lVar3 != 0) {
                iVar4 = param_2[3] - *(int *)(lVar3 + 0xc);
                if ((iVar4 == 0) && (iVar4 = param_2[4] - *(int *)(lVar3 + 0x10), iVar4 == 0)) {
                    if (param_2[5] == *(int *)(lVar3 + 0x14)) {
                        LAB_1403fd20b:
                        uVar7 = uVar5;
                        if (uVar5 == 0) goto LAB_1403fd23c;
                        plVar9 = (longlong *)(lVar1 + uVar5 * 8);
                        break;
                    }
                    if (*(int *)(lVar3 + 0x14) != 2) {
                        if (param_2[5] != 2) goto LAB_1403fd20b;
                        uVar7 = uVar5 + 1;
                        uVar5 = uVar6;
                    }
                }
                else if (-1 < iVar4) {
                    if (0 < iVar4) goto LAB_1403fd2b2;
                    goto LAB_1403fd20b;
                }
            }
        }
        uVar6 = uVar5;
        if (uVar5 <= uVar7) {
            return;
        }
    } while( true );
    do {
        uVar6 = uVar7 - 1;
        plVar9 = plVar9 + -1;
        if (param_2 == (int *)0x0) {
            if (*plVar9 != 0) break;
        }
        else {
            lVar3 = *plVar9;
            if (((lVar3 == 0) || (param_2[3] != *(int *)(lVar3 + 0xc))) ||
                (param_2[4] != *(int *)(lVar3 + 0x10))) break;
            if ((param_2[5] != *(int *)(lVar3 + 0x14)) &&
                ((*(int *)(lVar3 + 0x14) == 2 || (param_2[5] == 2)))) break;
        }
        uVar7 = uVar6;
    } while (uVar6 != 0);
    LAB_1403fd23c:
    uVar5 = uVar5 + 1;
    if (uVar5 < uVar2) {
        plVar9 = (longlong *)(lVar1 + uVar5 * 8);
        do {
            if (param_2 == (int *)0x0) {
                if (*plVar9 != 0) break;
            }
            else {
                lVar3 = *plVar9;
                if (((lVar3 == 0) || (param_2[3] != *(int *)(lVar3 + 0xc))) ||
                    (param_2[4] != *(int *)(lVar3 + 0x10))) break;
                if ((param_2[5] != *(int *)(lVar3 + 0x14)) &&
                    ((*(int *)(lVar3 + 0x14) == 2 || (param_2[5] == 2)))) break;
            }
            uVar5 = uVar5 + 1;
            plVar9 = plVar9 + 1;
        } while (uVar5 < uVar2);
    }
    if (uVar7 < uVar5) {
        ppiVar8 = (int **)(lVar1 + uVar7 * 8);
        while (**ppiVar8 != *param_2) {
            uVar7 = uVar7 + 1;
            ppiVar8 = ppiVar8 + 1;
            if (uVar5 <= uVar7) {
                return;
            }
        }
        FUN_140007270((longlong *)(local_res18 + 0x28));
    }
    return;
}



char ** FUN_1403fd3d0(longlong param_1,char **param_2,uint *param_3)

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
            if (*param_3 < *(uint *)(pcVar5 + 0x20)) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
                bVar6 = true;
            }
            else {
                if (*(uint *)(pcVar5 + 0x20) < *param_3) {
                    bVar6 = false;
                }
                else {
                    bVar6 = *(ulonglong *)(param_3 + 2) < *(ulonglong *)(pcVar5 + 0x28);
                    if (bVar6) {
                        pcVar4 = *(char **)(pcVar5 + 0x10);
                        goto LAB_1403fd41c;
                    }
                }
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
            LAB_1403fd41c:
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403fd4cd;
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
    if ((*param_3 <= *(uint *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(uint *)(pcVar3 + 0x20) ||
          (*(ulonglong *)(param_3 + 2) <= *(ulonglong *)(pcVar3 + 0x28))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403fd4cd:
    ppcVar1 = (char **)FUN_1403fe990(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1403fd500(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_1403fd500(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            FUN_140008410(param_2 + 0x30);
            FUN_14018b900(*(undefined8 *)(param_2 + 0x38),0);
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1403fd570(longlong param_1,longlong *param_2,char **param_3,undefined8 *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *param_3;
    pcVar3 = *(char **)(param_1 + 8);
    if (pcVar2 == *(char **)(pcVar3 + 0x10)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            if ((*(uint *)param_4 < *(uint *)(pcVar2 + 0x20)) ||
                ((*(uint *)param_4 <= *(uint *)(pcVar2 + 0x20) &&
                  ((ulonglong)param_4[1] < *(ulonglong *)(pcVar2 + 0x28))))) {
                FUN_1403feaa0(param_1,param_2,pcVar2,pcVar2,param_4);
                return param_2;
            }
        }
    }
    else {
        if (pcVar2 == pcVar3) {
            uVar1 = *(uint *)param_4;
            pcVar2 = *(char **)(pcVar3 + 0x18);
            if ((*(uint *)(pcVar2 + 0x20) < uVar1) ||
                ((*(uint *)(pcVar2 + 0x20) <= uVar1 &&
                  (*(ulonglong *)(pcVar2 + 0x28) < (ulonglong)param_4[1])))) {
                if ((pcVar2 == pcVar3) ||
                    ((uVar1 < *(uint *)(pcVar2 + 0x20) ||
                      ((uVar1 <= *(uint *)(pcVar2 + 0x20) &&
                        ((ulonglong)param_4[1] < *(ulonglong *)(pcVar2 + 0x28))))))) {
                    lVar5 = FUN_14018b280(0x50);
                    if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar5 + 0x20) = *param_4;
                        *(undefined8 *)(lVar5 + 0x28) = param_4[1];
                        FUN_1403d2aa0(lVar5 + 0x30,param_4 + 2);
                    }
                    *(longlong *)(pcVar2 + 0x10) = lVar5;
                    pcVar3 = *(char **)(param_1 + 8);
                    if (pcVar2 == pcVar3) {
                        *(longlong *)(pcVar3 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar2 == *(char **)(pcVar3 + 0x10)) {
                        *(longlong *)(pcVar3 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_1403ff530(uVar1,param_4);
                    *(longlong *)(pcVar2 + 0x18) = lVar5;
                    if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar2;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_1403febb0(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar5 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar2 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar5;
                if (pcVar2 == *(char **)(lVar5 + 0x10)) {
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
        uVar1 = *(uint *)param_4;
        if (((*(uint *)(lVar5 + 0x20) < uVar1) ||
             ((*(uint *)(lVar5 + 0x20) <= uVar1 && (*(ulonglong *)(lVar5 + 0x28) < (ulonglong)param_4[1])
             ))) && ((uVar1 < *(uint *)(pcVar2 + 0x20) ||
                      ((uVar1 <= *(uint *)(pcVar2 + 0x20) &&
                        ((ulonglong)param_4[1] < *(ulonglong *)(pcVar2 + 0x28))))))) {
            if (*(longlong *)(lVar5 + 0x18) == 0) {
                FUN_1403feaa0(param_1,param_2,0,lVar5,param_4);
                return param_2;
            }
            FUN_1403feaa0(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    plVar4 = (longlong *)FUN_1403febb0(param_1,local_18,param_4);
    *param_2 = *plVar4;
    return param_2;
}



void FUN_1403fd820(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_1403fd820(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            if (*(longlong *)(param_2 + 0x40) != 0) {
                FUN_1403fdc00(param_2 + 0x30,*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
                *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10) = *(longlong *)(param_2 + 0x38);
                *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8) = 0;
                *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x18) = *(longlong *)(param_2 + 0x38);
                *(undefined8 *)(param_2 + 0x40) = 0;
            }
            FUN_14018b900(*(undefined8 *)(param_2 + 0x38),0);
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1403fd8c0(longlong param_1,longlong *param_2,char **param_3,undefined4 *param_4)

{
    char *pcVar1;
    char *pcVar2;
    char cVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
            (cVar3 = FUN_1403fb770(param_1,param_4,pcVar2 + 0x20), cVar3 != '\0')) {
            FUN_1403fece0(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **)(pcVar1 + 0x18);
        cVar3 = FUN_1403fb770(param_1,pcVar2 + 0x20,param_4);
        if (cVar3 != '\0') {
            if ((pcVar2 == pcVar1) || (cVar3 = FUN_1403fb770(), cVar3 != '\0')) {
                lVar4 = FUN_14018b280(0x50);
                if ((undefined4 *)(lVar4 + 0x20) != (undefined4 *)0x0) {
                    *(undefined4 *)(lVar4 + 0x20) = *param_4;
                    *(undefined4 *)(lVar4 + 0x24) = param_4[1];
                    *(undefined4 *)(lVar4 + 0x28) = param_4[2];
                    *(undefined4 *)(lVar4 + 0x2c) = param_4[3];
                    FUN_1403fb870(lVar4 + 0x30,param_4 + 4);
                }
                *(longlong *)(pcVar2 + 0x10) = lVar4;
                pcVar1 = *(char **)(param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong *)(pcVar1 + 8) = lVar4;
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                }
                else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                    *(longlong *)(pcVar1 + 0x10) = lVar4;
                }
            }
            else {
                lVar4 = FUN_1403ff580();
                *(longlong *)(pcVar2 + 0x18) = lVar4;
                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                }
            }
            *(char **)(lVar4 + 8) = pcVar2;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            *(undefined8 *)(lVar4 + 0x18) = 0;
            FUN_1400081c0(lVar4,*(longlong *)(param_1 + 8) + 8);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
            *param_2 = lVar4;
            return param_2;
        }
    }
    else {
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar4 = *(longlong *)(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar4;
                if (pcVar2 == *(char **)(lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar4 + 0x10);
                        lVar6 = lVar4;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar4 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar4 = lVar6;
                }
            }
        }
        cVar3 = FUN_1403fb770(param_1,lVar4 + 0x20,param_4);
        if ((cVar3 != '\0') && (cVar3 = FUN_1403fb770(), cVar3 != '\0')) {
            if (*(longlong *)(lVar4 + 0x18) == 0) {
                FUN_1403fece0(param_1,param_2,0,lVar4,param_4);
                return param_2;
            }
            FUN_1403fece0(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    plVar5 = (longlong *)FUN_1403fedf0(param_1,local_18,param_4);
    *param_2 = *plVar5;
    return param_2;
}



undefined * FUN_1403fdae0(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined *puVar1;
    undefined8 uVar2;
    undefined *puVar3;
    undefined *puVar4;
    undefined *puVar5;

    puVar1 = (undefined *)FUN_1403fe330(param_1,param_2 + 0x20);
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 8) = param_3;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar2 = FUN_1403fdae0(param_1,*(longlong *)(param_2 + 0x18),puVar1);
        *(undefined8 *)(puVar1 + 0x18) = uVar2;
    }
    puVar5 = *(undefined **)(param_2 + 0x10);
    puVar4 = puVar1;
    if (puVar5 == (undefined *)0x0) {
        return puVar1;
    }
    do {
        puVar3 = (undefined *)FUN_14018b280(0xb0,0);
        if (puVar3 + 0x20 != (undefined *)0x0) {
            *(undefined8 *)(puVar3 + 0x28) = 0;
            *(undefined8 *)(puVar3 + 0x30) = 0;
            *(undefined8 *)(puVar3 + 0x38) = 0;
            FUN_14001c1b0(puVar3 + 0x20,*(undefined8 *)(puVar5 + 0x28),*(undefined8 *)(puVar5 + 0x30));
            FUN_140474e10(puVar3 + 0x40,puVar5 + 0x40);
        }
        *puVar3 = *puVar5;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar3 + 8) = puVar4;
        if (*(longlong *)(puVar5 + 0x18) != 0) {
            uVar2 = FUN_1403fdae0(param_1,*(longlong *)(puVar5 + 0x18),puVar3);
            *(undefined8 *)(puVar3 + 0x18) = uVar2;
        }
        puVar5 = *(undefined **)(puVar5 + 0x10);
        puVar4 = puVar3;
    } while (puVar5 != (undefined *)0x0);
    return puVar1;
}



void FUN_1403fdc00(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_1403fdc00(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,
                              param_2 + 0x40);
            }
            if (*(longlong **)(param_2 + 0x78) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_2 + 0x78) + 8))();
                *(undefined8 *)(param_2 + 0x78) = 0;
            }
            if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_2 + 0x80) + 8))();
                *(undefined8 *)(param_2 + 0x80) = 0;
            }
            if (*(longlong *)(param_2 + 0x50) != 0) {
                FUN_14018b900(*(longlong *)(param_2 + 0x50),0);
            }
            if (*(longlong *)(param_2 + 0x28) != 0) {
                FUN_14018b900(*(longlong *)(param_2 + 0x28),0);
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1403fdcf0(longlong param_1,longlong *param_2,char **param_3,longlong param_4)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
            (iVar3 = FUN_1400454d0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                                   *(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30)),
                    iVar3 < 0)) {
            FUN_1403fef80(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **)(pcVar1 + 0x18);
        iVar3 = FUN_1400454d0(*(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30),
                              *(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
        if (iVar3 < 0) {
            if ((pcVar2 == pcVar1) ||
                (iVar3 = FUN_1400454d0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                                       *(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30)),
                        iVar3 < 0)) {
                lVar4 = FUN_1403fe330();
                *(longlong *)(pcVar2 + 0x10) = lVar4;
                pcVar1 = *(char **)(param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong *)(pcVar1 + 8) = lVar4;
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                }
                else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                    *(longlong *)(pcVar1 + 0x10) = lVar4;
                }
            }
            else {
                lVar4 = FUN_1403fe330();
                *(longlong *)(pcVar2 + 0x18) = lVar4;
                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                }
            }
            *(char **)(lVar4 + 8) = pcVar2;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            *(undefined8 *)(lVar4 + 0x18) = 0;
            FUN_1400081c0(lVar4,*(longlong *)(param_1 + 8) + 8);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
            *param_2 = lVar4;
            return param_2;
        }
    }
    else {
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar4 = *(longlong *)(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar4;
                if (pcVar2 == *(char **)(lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar4 + 0x10);
                        lVar6 = lVar4;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar4 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar4 = lVar6;
                }
            }
        }
        iVar3 = FUN_1400454d0(*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                              *(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
        if ((iVar3 < 0) &&
            (iVar3 = FUN_1400454d0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                                   *(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30)),
                    iVar3 < 0)) {
            if (*(longlong *)(lVar4 + 0x18) == 0) {
                FUN_1403fef80(param_1,param_2,0,lVar4,param_4);
                return param_2;
            }
            FUN_1403fef80(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    plVar5 = (longlong *)FUN_1403ff060(param_1,local_18,param_4);
    *param_2 = *plVar5;
    return param_2;
}



void FUN_1403fdf10(longlong param_1,undefined *param_2,undefined8 param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined local_88 [16];
    longlong local_78;
    longlong *local_50;
    longlong *local_48;

    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 == *(longlong *)(param_1 + 0x18)) {
        lVar3 = (lVar3 - *(longlong *)(param_1 + 8)) / 0x70;
        lVar2 = lVar3 * 2;
        if (lVar3 == 0) {
            lVar2 = 1;
        }
        uVar1 = FUN_14018a3e0(lVar2 * 0x70);
        lVar8 = ((uVar1 - uVar1 / 7 >> 1) + uVar1 / 7 >> 6) * 0x70;
        lVar2 = FUN_14018b280(lVar8,0);
        lVar3 = lVar2;
        for (puVar6 = *(undefined **)(param_1 + 8); puVar6 != param_2; puVar6 = puVar6 + 0x70) {
            if (lVar3 != 0) {
                FUN_140474e10(lVar3,puVar6);
            }
            lVar3 = lVar3 + 0x70;
        }
        if (lVar3 != 0) {
            FUN_140474e10(lVar3,param_3);
        }
        puVar6 = *(undefined **)(param_1 + 0x10);
        lVar7 = lVar3 + 0x70;
        if (param_2 != puVar6) {
            puVar4 = &DAT_ffffffffffffff90 + (longlong)(param_2 + (lVar7 - lVar3));
            do {
                if (lVar7 != 0) {
                    FUN_140474e10(lVar7,puVar4);
                }
                puVar4 = puVar4 + 0x70;
                lVar7 = lVar7 + 0x70;
            } while (puVar4 != puVar6);
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        for (lVar5 = *(longlong *)(param_1 + 8); lVar5 != lVar3; lVar5 = lVar5 + 0x70) {
            FUN_140474fa0(lVar5);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar2;
        *(longlong *)(param_1 + 0x10) = lVar7;
        *(longlong *)(param_1 + 0x18) = lVar8 + lVar2;
    }
    else {
        if (lVar3 != 0) {
            FUN_140474e10(lVar3,&DAT_ffffffffffffff90 + lVar3);
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x70;
        FUN_140474e10(local_88,param_3);
        FUN_1403ffa80(param_2,*(longlong *)(param_1 + 0x10) + -0xe0,
                      &DAT_ffffffffffffff90 + *(longlong *)(param_1 + 0x10));
        FUN_140474ec0(param_2,local_88);
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_88)
                    ;
        }
        if (local_50 != (longlong *)0x0) {
            (**(code **)(*local_50 + 8))();
            local_50 = (longlong *)0x0;
        }
        if (local_48 != (longlong *)0x0) {
            (**(code **)(*local_48 + 8))();
            local_48 = (longlong *)0x0;
        }
        if (local_78 != 0) {
            FUN_14018b900(local_78,0);
        }
    }
    return;
}



void FUN_1403fe150(longlong **param_1,longlong **param_2)

{
    if (param_1 != param_2) {
        do {
            if (*param_1 != (longlong *)0x0) {
                (**(code **)(**param_1 + 8))();
                *param_1 = (longlong *)0x0;
            }
            if (param_1[3] != (longlong *)0x0) {
                FUN_14018b900(param_1[3],0);
            }
            param_1 = param_1 + 6;
        } while (param_1 != param_2);
    }
    return;
}



void FUN_1403fe1b0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            if ((longlong *)plVar2[3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[3] + 8))();
                plVar2[3] = 0;
            }
            if ((longlong *)plVar2[2] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[2] + 8))();
                plVar2[2] = 0;
            }
            if (plVar2[5] != 0) {
                FUN_14018b900(plVar2[5],0);
            }
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    return;
}



void FUN_1403fe250(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,
                              plVar2 + 2);
            }
            if ((longlong *)plVar2[9] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[9] + 8))();
                plVar2[9] = 0;
            }
            if ((longlong *)plVar2[10] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[10] + 8))();
                plVar2[10] = 0;
            }
            if (plVar2[4] != 0) {
                FUN_14018b900(plVar2[4],0);
            }
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    return;
}



longlong FUN_1403fe330(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0xb0,0);
    if (lVar1 + 0x20 != 0) {
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        FUN_14001c1b0(lVar1 + 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
        FUN_140474e10(lVar1 + 0x40,param_2 + 0x20);
    }
    return lVar1;
}



void FUN_1403fe3a0(longlong param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined **ppuVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;

    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3);
    if (puVar12 < param_2) {
        ppuVar9 = (undefined **)&DAT_140af6cd0;
        lVar6 = 0x1c;
        do {
            lVar4 = lVar6 >> 1;
            if (*(uint *)((longlong)ppuVar9 + lVar4 * 4) < (uint)param_2) {
                ppuVar9 = (undefined **)((longlong)ppuVar9 + (lVar4 + 1) * 4);
                lVar4 = lVar6 + (-1 - lVar4);
            }
            lVar6 = lVar4;
        } while (0 < lVar4);
        puVar2 = (undefined8 *)0xfffffffb;
        if (ppuVar9 != &PTR_u_Art_FX_UI_Selection_Selection_Ho_140af6d40) {
            puVar2 = (undefined8 *)(ulonglong)*(uint *)ppuVar9;
        }
        if (puVar12 < puVar2) {
            puVar8 = (undefined8 *)0x0;
            puVar3 = puVar8;
            puVar11 = puVar8;
            if ((int)puVar2 != 0) {
                puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar2 * 8);
                puVar11 = puVar3 + (longlong)puVar2;
            }
            puVar5 = puVar2;
            puVar10 = puVar3;
            if (puVar2 != (undefined8 *)0x0) {
                for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)((longlong)puVar5 + -1)) {
                    *puVar10 = 0;
                    puVar10 = puVar10 + 1;
                }
                puVar10 = puVar3 + (longlong)puVar2;
            }
            if (puVar12 != (undefined8 *)0x0) {
                do {
                    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                    while (puVar1 != (undefined8 *)0x0) {
                        uVar7 = ((ulonglong)(*(uint *)(puVar1 + 2) & 0xffffff) |
                                 (ulonglong)*(uint *)(puVar1 + 1) << 0x30) % (ulonglong)puVar2;
                        *puVar5 = *puVar1;
                        *puVar1 = puVar3[uVar7];
                        puVar3[uVar7] = puVar1;
                        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                    }
                    puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                } while (puVar8 < puVar12);
            }
            lVar6 = *(longlong *)(param_1 + 0x10);
            *(undefined8 **)(param_1 + 0x10) = puVar3;
            *(undefined8 **)(param_1 + 0x18) = puVar10;
            *(undefined8 **)(param_1 + 0x20) = puVar11;
            if (lVar6 != 0) {
                FUN_14018b900(lVar6,0);
            }
        }
    }
    return;
}



longlong *
FUN_1403fe500(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = *(int *)param_5 - *(int *)(param_4 + 0x20);
        if ((iVar2 == 0) &&
            (iVar2 = *(int *)((longlong)param_5 + 4) - *(int *)(param_4 + 0x24), iVar2 == 0)) {
            iVar2 = *(int *)(param_5 + 1) - *(int *)(param_4 + 0x28);
        }
        if (-1 < iVar2) {
            lVar3 = FUN_14018b280(0x38);
            if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar3 + 0x20) = *param_5;
                *(undefined8 *)(lVar3 + 0x28) = param_5[1];
                *(undefined8 *)(lVar3 + 0x30) = param_5[2];
            }
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1403fe5dd;
        }
    }
    lVar3 = FUN_14018b280(0x38);
    if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = *param_5;
        *(undefined8 *)(lVar3 + 0x28) = param_5[1];
        *(undefined8 *)(lVar3 + 0x30) = param_5[2];
    }
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar3;
    }
    LAB_1403fe5dd:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



char ** FUN_1403fe620(longlong param_1,char **param_2,int *param_3)

{
    int iVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar3 = *(char **)(param_1 + 8);
    pcVar5 = *(char **)(pcVar3 + 8);
    bVar7 = true;
    pcVar6 = pcVar3;
    if (pcVar5 != (char *)0x0) {
        do {
            pcVar6 = pcVar5;
            iVar1 = *param_3 - *(int *)(pcVar6 + 0x20);
            if ((iVar1 == 0) && (iVar1 = param_3[1] - *(int *)(pcVar6 + 0x24), iVar1 == 0)) {
                iVar1 = param_3[2] - *(int *)(pcVar6 + 0x28);
            }
            bVar7 = iVar1 < 0;
            if (bVar7) {
                pcVar5 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar5 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar5 != (char *)0x0);
    }
    pcVar4 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar3 + 0x10)) goto LAB_1403fe696;
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar4 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar4 = *(char **)(pcVar6 + 0x10);
            if (pcVar4 == (char *)0x0) {
                pcVar4 = *(char **)(pcVar6 + 8);
                pcVar3 = pcVar4;
                if (pcVar6 == *(char **)(pcVar4 + 0x10)) {
                    do {
                        pcVar4 = *(char **)(pcVar3 + 8);
                        bVar7 = pcVar3 == *(char **)(pcVar4 + 0x10);
                        pcVar3 = pcVar4;
                    } while (bVar7);
                }
            }
            else {
                for (pcVar3 = *(char **)(pcVar4 + 0x18); pcVar3 != (char *)0x0;
                     pcVar3 = *(char **)(pcVar3 + 0x18)) {
                    pcVar4 = pcVar3;
                }
            }
        }
    }
    iVar1 = *(int *)(pcVar4 + 0x20) - *param_3;
    if ((iVar1 == 0) && (iVar1 = *(int *)(pcVar4 + 0x24) - param_3[1], iVar1 == 0)) {
        iVar1 = *(int *)(pcVar4 + 0x28) - param_3[2];
    }
    if (-1 < iVar1) {
        *param_2 = pcVar4;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403fe696:
    ppcVar2 = (char **)FUN_1403fe500(param_1,local_res8,pcVar5,pcVar6,param_3);
    *param_2 = *ppcVar2;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



char ** FUN_1403fe760(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403fe7be;
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
    LAB_1403fe7be:
    ppcVar1 = (char **)FUN_1403ff5e0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1403fe860(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;

    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = *(undefined8 **)(param_2 + 8);
    puVar3 = (undefined8 *)*puVar1;
    puVar4 = (undefined8 *)*puVar2;
    while( true ) {
        puVar6 = puVar4;
        if (puVar3 == puVar1) {
            if ((puVar6 != puVar2) && (puVar1 != puVar2)) {
                *(undefined8 **)puVar2[1] = puVar1;
                *(undefined8 **)puVar6[1] = puVar2;
                *(undefined8 **)puVar1[1] = puVar6;
                uVar5 = puVar1[1];
                puVar1[1] = puVar2[1];
                puVar2[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
            return;
        }
        if (puVar6 == puVar2) break;
        if (*(float *)(puVar6 + 9) <= *(float *)(puVar3 + 9)) {
            puVar3 = (undefined8 *)*puVar3;
            puVar4 = puVar6;
        }
        else {
            puVar4 = (undefined8 *)*puVar6;
            if (puVar3 != puVar4) {
                *(undefined8 **)puVar4[1] = puVar3;
                *(undefined8 **)puVar6[1] = puVar4;
                *(undefined8 **)puVar3[1] = puVar6;
                uVar5 = puVar3[1];
                puVar3[1] = puVar4[1];
                puVar4[1] = puVar6[1];
                puVar6[1] = uVar5;
            }
        }
    }
    return;
}



undefined8 * FUN_1403fe910(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 == 0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 8 + 0x10,0);
        if (puVar2 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar2[1] = lVar1;
            puVar3 = puVar2 + 2;
            *puVar2 = &PTR_LAB_140b55060;
        }
    }
    *param_1 = puVar3;
    FUN_1407db590(puVar3,*param_2,param_1[1] << 3);
    return param_1;
}



longlong *
FUN_1403fe990(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(uint *)(param_4 + 0x20) <= *(uint *)param_5) &&
            ((*(uint *)(param_4 + 0x20) < *(uint *)param_5 ||
              (*(ulonglong *)(param_4 + 0x28) <= (ulonglong)param_5[1])))) {
            lVar2 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1403fea5d;
        }
    }
    lVar2 = FUN_14018b280(0x30);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
        *(undefined8 *)(lVar2 + 0x28) = param_5[1];
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
    LAB_1403fea5d:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



longlong *
FUN_1403feaa0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        uVar1 = *(uint *)(param_4 + 0x20);
        if ((uVar1 <= *(uint *)param_5) &&
            ((uVar1 < *(uint *)param_5 || (*(ulonglong *)(param_4 + 0x28) <= (ulonglong)param_5[1])))) {
            lVar3 = FUN_1403ff530(uVar1,param_5);
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1403feb65;
        }
    }
    lVar3 = FUN_14018b280(0x50);
    if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = *param_5;
        *(undefined8 *)(lVar3 + 0x28) = param_5[1];
        FUN_1403d2aa0(lVar3 + 0x30,param_5 + 2);
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
    LAB_1403feb65:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



char ** FUN_1403febb0(longlong param_1,char **param_2,uint *param_3)

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
            if (*param_3 < *(uint *)(pcVar5 + 0x20)) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
                bVar6 = true;
            }
            else {
                if (*(uint *)(pcVar5 + 0x20) < *param_3) {
                    bVar6 = false;
                }
                else {
                    bVar6 = *(ulonglong *)(param_3 + 2) < *(ulonglong *)(pcVar5 + 0x28);
                    if (bVar6) {
                        pcVar4 = *(char **)(pcVar5 + 0x10);
                        goto LAB_1403febfc;
                    }
                }
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
            LAB_1403febfc:
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403fecad;
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
    if ((*param_3 <= *(uint *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(uint *)(pcVar3 + 0x20) ||
          (*(ulonglong *)(param_3 + 2) <= *(ulonglong *)(pcVar3 + 0x28))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403fecad:
    ppcVar1 = (char **)FUN_1403feaa0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_1403fece0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined4 *param_5)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        cVar2 = FUN_1403fb770(param_1,param_5,param_4 + 0x20);
        if (cVar2 == '\0') {
            lVar3 = FUN_1403ff580();
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1403feda5;
        }
    }
    lVar3 = FUN_14018b280(0x50);
    if ((undefined4 *)(lVar3 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar3 + 0x20) = *param_5;
        *(undefined4 *)(lVar3 + 0x24) = param_5[1];
        *(undefined4 *)(lVar3 + 0x28) = param_5[2];
        *(undefined4 *)(lVar3 + 0x2c) = param_5[3];
        FUN_1403fb870(lVar3 + 0x30,param_5 + 4);
    }
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar3;
    }
    LAB_1403feda5:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



char ** FUN_1403fedf0(longlong param_1,char **param_2,float *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [32];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            if (*(float *)(pcVar5 + 0x20) <= *param_3) {
                if (*param_3 == *(float *)(pcVar5 + 0x20)) {
                    if (*(float *)(pcVar5 + 0x24) <= param_3[1]) {
                        if (param_3[1] != *(float *)(pcVar5 + 0x24)) goto LAB_1403fee7c;
                        if (*(float *)(pcVar5 + 0x28) <= param_3[2]) {
                            if ((param_3[2] != *(float *)(pcVar5 + 0x28)) ||
                                (*(float *)(pcVar5 + 0x2c) < param_3[3] || *(float *)(pcVar5 + 0x2c) == param_3[3])
                                    ) goto LAB_1403fee7c;
                            bVar6 = true;
                        }
                        else {
                            bVar6 = true;
                        }
                    }
                    else {
                        bVar6 = true;
                    }
                }
                else {
                    LAB_1403fee7c:
                    bVar6 = false;
                }
            }
            else {
                bVar6 = true;
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403fef57;
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
    if (*param_3 <= *(float *)(pcVar3 + 0x20)) {
        if (*(float *)(pcVar3 + 0x20) == *param_3) {
            if (*(float *)(pcVar3 + 0x24) < param_3[1]) goto LAB_1403fef57;
            if (*(float *)(pcVar3 + 0x24) == param_3[1]) {
                if ((*(float *)(pcVar3 + 0x28) < param_3[2]) ||
                    ((*(float *)(pcVar3 + 0x28) == param_3[2] &&
                      (*(float *)(pcVar3 + 0x2c) <= param_3[3] && param_3[3] != *(float *)(pcVar3 + 0x2c)))))
                    goto LAB_1403fef57;
            }
        }
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403fef57:
    ppcVar1 = (char **)FUN_1403fece0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_1403fef80(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_1400454d0(*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10),
                              *(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
        if (-1 < iVar2) {
            lVar3 = FUN_1403fe330();
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1403ff016;
        }
    }
    lVar3 = FUN_1403fe330();
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar3;
    }
    LAB_1403ff016:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



char ** FUN_1403ff060(longlong param_1,char **param_2,longlong param_3)

{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    char **ppcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    undefined local_res8 [8];

    pcVar6 = *(char **)(param_1 + 8);
    pcVar5 = *(char **)(pcVar6 + 8);
    bVar9 = true;
    pcVar8 = pcVar6;
    if (pcVar5 != (char *)0x0) {
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        uVar2 = *(undefined8 *)(param_3 + 8);
        do {
            pcVar8 = pcVar5;
            iVar3 = FUN_1400454d0(uVar2,uVar1,*(undefined8 *)(pcVar8 + 0x28),
                                  *(undefined8 *)(pcVar8 + 0x30));
            bVar9 = iVar3 < 0;
            if (bVar9) {
                pcVar5 = *(char **)(pcVar8 + 0x10);
            }
            else {
                pcVar5 = *(char **)(pcVar8 + 0x18);
            }
        } while (pcVar5 != (char *)0x0);
        pcVar6 = *(char **)(param_1 + 8);
    }
    pcVar7 = pcVar8;
    if (bVar9) {
        if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
            ppcVar4 = (char **)FUN_1403fef80(param_1,local_res8,pcVar5,pcVar8,param_3);
            *param_2 = *ppcVar4;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
            pcVar7 = *(char **)(pcVar8 + 0x18);
        }
        else {
            pcVar7 = *(char **)(pcVar8 + 0x10);
            if (pcVar7 == (char *)0x0) {
                pcVar7 = *(char **)(pcVar8 + 8);
                pcVar6 = pcVar7;
                if (pcVar8 == *(char **)(pcVar7 + 0x10)) {
                    do {
                        pcVar7 = *(char **)(pcVar6 + 8);
                        bVar9 = pcVar6 == *(char **)(pcVar7 + 0x10);
                        pcVar6 = pcVar7;
                    } while (bVar9);
                }
            }
            else {
                for (pcVar6 = *(char **)(pcVar7 + 0x18); pcVar6 != (char *)0x0;
                     pcVar6 = *(char **)(pcVar6 + 0x18)) {
                    pcVar7 = pcVar6;
                }
            }
        }
    }
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 8);
    iVar3 = FUN_1400454d0(*(undefined8 *)(pcVar7 + 0x28),*(undefined8 *)(pcVar7 + 0x30),uVar2,uVar1);
    if (iVar3 < 0) {
        if (((pcVar8 == *(char **)(param_1 + 8)) || (pcVar5 != (char *)0x0)) ||
            (iVar3 = FUN_1400454d0(uVar2,uVar1,*(undefined8 *)(pcVar8 + 0x28),
                                   *(undefined8 *)(pcVar8 + 0x30)), iVar3 < 0)) {
            pcVar5 = (char *)FUN_1403fe330();
            *(char **)(pcVar8 + 0x10) = pcVar5;
            pcVar6 = *(char **)(param_1 + 8);
            if (pcVar8 == pcVar6) {
                *(char **)(pcVar6 + 8) = pcVar5;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar5;
            }
            else if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
                *(char **)(pcVar6 + 0x10) = pcVar5;
            }
        }
        else {
            pcVar5 = (char *)FUN_1403fe330();
            *(char **)(pcVar8 + 0x18) = pcVar5;
            if (pcVar8 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar5;
            }
        }
        *(char **)(pcVar5 + 8) = pcVar8;
        *(undefined8 *)(pcVar5 + 0x10) = 0;
        *(undefined8 *)(pcVar5 + 0x18) = 0;
        FUN_1400081c0(pcVar5,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar5;
        *(undefined *)(param_2 + 1) = 1;
    }
    else {
        *param_2 = pcVar7;
        *(undefined *)(param_2 + 1) = 0;
    }
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403ff250(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
                   code *param_5)

{
    undefined4 *puVar1;
    char cVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined4 local_88 [2];
    undefined local_80 [8];
    undefined local_78 [16];
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    longlong *local_50;
    longlong *local_48;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    lVar5 = (longlong)param_2 - (longlong)param_1;
    while( true ) {
        if (lVar5 / 0x70 < 0x11) {
            return;
        }
        if (param_4 == 0) break;
        param_4 = param_4 + -1;
        puVar4 = param_2 + -0x1c;
        puVar3 = param_1 + ((((longlong)param_2 - (longlong)param_1) / 0x70) / 2) * 0x1c;
        cVar2 = (*param_5)(param_1,puVar3);
        if (cVar2 == '\0') {
            cVar2 = (*param_5)(param_1,puVar4);
            puVar1 = puVar3;
            puVar3 = param_1;
        }
        else {
            cVar2 = (*param_5)(puVar3);
            puVar1 = param_1;
        }
        if ((cVar2 == '\0') && (cVar2 = (*param_5)(puVar1,puVar4), puVar3 = puVar1, cVar2 != '\0')) {
            puVar3 = puVar4;
        }
        local_88[0] = *puVar3;
        local_78 = ZEXT816(0);
        local_68 = 0;
        FUN_14001c1b0(local_80,*(undefined8 *)(puVar3 + 4),*(undefined8 *)(puVar3 + 6));
        local_40 = puVar3[0x12];
        local_50 = *(longlong **)(puVar3 + 0xe);
        local_60 = puVar3[10];
        local_5c = puVar3[0xb];
        local_58 = puVar3[0xc];
        local_48 = *(longlong **)(puVar3 + 0x10);
        local_3c = puVar3[0x13];
        local_28 = puVar3[0x18];
        uStack36 = puVar3[0x19];
        uStack32 = puVar3[0x1a];
        uStack28 = puVar3[0x1b];
        local_38 = puVar3[0x14];
        local_34 = puVar3[0x15];
        local_30 = puVar3[0x16];
        if (local_50 != (longlong *)0x0) {
            (**(code **)*local_50)(local_50);
        }
        puVar4 = param_1;
        puVar3 = param_2;
        if (local_48 != (longlong *)0x0) {
            (**(code **)*local_48)();
        }
        while( true ) {
            cVar2 = (*param_5)(puVar4,local_88);
            while (cVar2 != '\0') {
                puVar4 = puVar4 + 0x1c;
                cVar2 = (*param_5)(puVar4,local_88);
            }
            puVar3 = puVar3 + -0x1c;
            cVar2 = (*param_5)(local_88,puVar3);
            while (cVar2 != '\0') {
                puVar3 = puVar3 + -0x1c;
                cVar2 = (*param_5)(local_88,puVar3);
            }
            if (puVar3 <= puVar4) break;
            FUN_1404000c0(puVar4,puVar3);
            puVar4 = puVar4 + 0x1c;
        }
        FUN_1403ff250(puVar4,param_2,0,param_4,param_5);
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_88)
                    ;
        }
        if (local_50 != (longlong *)0x0) {
            (**(code **)(*local_50 + 8))();
            local_50 = (longlong *)0x0;
        }
        if (local_48 != (longlong *)0x0) {
            (**(code **)(*local_48 + 8))();
            local_48 = (longlong *)0x0;
        }
        if (local_78._0_8_ != 0) {
            FUN_14018b900(local_78._0_8_,0);
        }
        lVar5 = (longlong)puVar4 - (longlong)param_1;
        param_2 = puVar4;
    }
    FUN_1403ffcb0(param_1,param_2,param_2,param_1,param_5);
    return;
}



longlong FUN_1403ff530(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x50);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined8 *)(lVar1 + 0x28) = param_2[1];
        FUN_1403d2aa0(lVar1 + 0x30,param_2 + 2);
    }
    return lVar1;
}



longlong FUN_1403ff580(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        *(undefined4 *)(lVar1 + 0x24) = param_2[1];
        *(undefined4 *)(lVar1 + 0x28) = param_2[2];
        *(undefined4 *)(lVar1 + 0x2c) = param_2[3];
        FUN_1403fb870(lVar1 + 0x30,param_2 + 4);
    }
    return lVar1;
}



longlong *
FUN_1403ff5e0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_1403fe910(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1403ffbc0(param_1,param_5);
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



// WARNING: Could not reconcile some variable overlaps

void FUN_1403ff6d0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
    char cVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    undefined4 local_88 [2];
    undefined local_80 [8];
    undefined local_78 [16];
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    longlong *local_50;
    longlong *local_48;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    if ((param_1 != param_2) && (puVar2 = param_1 + 0x1c, puVar2 != param_2)) {
        puVar3 = (undefined8 *)(param_1 + 0x20);
        do {
            local_88[0] = *puVar2;
            local_78 = ZEXT816(0);
            local_68 = 0;
            FUN_14001c1b0(local_80,*puVar3,puVar3[1]);
            local_40 = *(undefined4 *)(puVar3 + 7);
            local_50 = (longlong *)puVar3[5];
            local_60 = *(undefined4 *)(puVar3 + 3);
            local_5c = *(undefined4 *)((longlong)puVar3 + 0x1c);
            local_58 = *(undefined4 *)(puVar3 + 4);
            local_48 = (longlong *)puVar3[6];
            local_3c = *(undefined4 *)((longlong)puVar3 + 0x3c);
            local_28 = *(undefined4 *)(puVar3 + 10);
            uStack36 = *(undefined4 *)((longlong)puVar3 + 0x54);
            uStack32 = *(undefined4 *)(puVar3 + 0xb);
            uStack28 = *(undefined4 *)((longlong)puVar3 + 0x5c);
            local_38 = *(undefined4 *)(puVar3 + 8);
            local_34 = *(undefined4 *)((longlong)puVar3 + 0x44);
            local_30 = *(undefined4 *)(puVar3 + 9);
            if (local_50 != (longlong *)0x0) {
                (**(code **)*local_50)(local_50);
            }
            if (local_48 != (longlong *)0x0) {
                (**(code **)*local_48)();
            }
            cVar1 = (*param_3)(local_88,param_1);
            if (cVar1 == '\0') {
                FUN_140400180(puVar2,local_88,param_3);
            }
            else {
                FUN_1403ffa80(param_1,puVar2,puVar3 + 0xc);
                FUN_140474ec0(param_1,local_88);
            }
            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,
                              local_88);
            }
            if (local_50 != (longlong *)0x0) {
                (**(code **)(*local_50 + 8))();
                local_50 = (longlong *)0x0;
            }
            if (local_48 != (longlong *)0x0) {
                (**(code **)(*local_48 + 8))();
                local_48 = (longlong *)0x0;
            }
            if (local_78._0_8_ != 0) {
                FUN_14018b900(local_78._0_8_,0);
            }
            puVar2 = puVar2 + 0x1c;
            puVar3 = puVar3 + 0xe;
        } while (puVar2 != param_2);
    }
    return;
}



longlong ** FUN_1403ff890(longlong param_1,longlong param_2,longlong **param_3)

{
    longlong lVar1;
    longlong **pplVar2;

    lVar1 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
    lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
    if (0 < lVar1) {
        param_2 = param_2 - (longlong)param_3;
        pplVar2 = param_3;
        do {
            param_3 = pplVar2 + -6;
            if (*(undefined8 **)(&DAT_ffffffffffffffd0 + param_2 + (longlong)pplVar2) != (undefined8 *)0x0
                    ) {
                (**(code **)**(undefined8 **)(&DAT_ffffffffffffffd0 + param_2 + (longlong)pplVar2))();
            }
            if (*param_3 != (longlong *)0x0) {
                (**(code **)(**param_3 + 8))();
                *param_3 = (longlong *)0x0;
            }
            lVar1 = lVar1 + -1;
            *param_3 = *(longlong **)(param_2 + (longlong)param_3);
            *(undefined4 *)(pplVar2 + -5) = *(undefined4 *)(param_2 + 8 + (longlong)param_3);
            pplVar2 = param_3;
        } while (0 < lVar1);
    }
    return param_3;
}



undefined * FUN_1403ff940(longlong param_1,undefined *param_2,undefined *param_3)

{
    longlong *plVar1;
    undefined2 *puVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong **pplVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined *puVar8;

    lVar6 = ((longlong)param_2 - param_1) / 0x70;
    for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        puVar8 = &DAT_ffffffffffffff90 + (longlong)param_2;
        puVar7 = &DAT_ffffffffffffff90 + (longlong)param_3;
        if (puVar8 != puVar7) {
            FUN_14001c480(puVar7,*(undefined8 *)(param_2 + -0x68),
                          *(undefined8 *)(&DAT_ffffffffffffffa0 + (longlong)param_2));
        }
        pplVar5 = (longlong **)(&DAT_ffffffffffffffb0 + (longlong)param_3);
        lVar4 = 10;
        do {
            plVar1 = (longlong *)FUN_14018b280(0x30);
            plVar3 = (longlong *)0x0;
            if (plVar1 != (longlong *)0x0) {
                plVar3 = *(longlong **)(((longlong)puVar8 - (longlong)puVar7) + (longlong)pplVar5);
                plVar1[3] = 0;
                plVar1[4] = 0;
                plVar1[5] = 0;
                puVar2 = (undefined2 *)FUN_14018b280(0x10);
                plVar1[3] = (longlong)puVar2;
                plVar1[4] = (longlong)puVar2;
                plVar1[5] = (longlong)(puVar2 + 8);
                if (puVar2 != (undefined2 *)0x0) {
                    *puVar2 = 0;
                }
                if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)*plVar3)();
                }
                *plVar1 = *plVar3;
                *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(plVar3 + 1);
                plVar3 = plVar1;
            }
            *pplVar5 = plVar3;
            pplVar5 = pplVar5 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        param_2 = puVar8;
        param_3 = puVar7;
    }
    return param_3;
}



undefined8 * FUN_1403ffa80(longlong param_1,longlong param_2,undefined8 *param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;

    lVar5 = (param_2 - param_1) / 0x70;
    if (0 < lVar5) {
        puVar4 = param_3;
        puVar6 = (undefined8 *)(param_2 + 0x10);
        do {
            param_3 = puVar4 + -0xe;
            if (param_3 != puVar6 + -0x10) {
                if ((undefined8 *)puVar6[-9] != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)puVar6[-9])();
                }
                if ((undefined8 *)puVar6[-8] != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)puVar6[-8])();
                }
                if ((longlong *)puVar4[-7] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)puVar4[-7] + 8))();
                    puVar4[-7] = 0;
                }
                if ((longlong *)puVar4[-6] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)puVar4[-6] + 8))();
                    puVar4[-6] = 0;
                }
                *(undefined4 *)param_3 = *(undefined4 *)(puVar6 + -0x10);
                if (puVar6 + -0xf != puVar4 + -0xd) {
                    FUN_14001c480(puVar4 + -0xd,puVar6[-0xe],puVar6[-0xd]);
                }
                *(undefined4 *)(puVar4 + -9) = *(undefined4 *)(puVar6 + -0xb);
                *(undefined4 *)((longlong)puVar4 + -0x44) = *(undefined4 *)((longlong)puVar6 + -0x54);
                *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(puVar6 + -10);
                puVar4[-7] = puVar6[-9];
                puVar4[-6] = puVar6[-8];
                *(undefined4 *)(puVar4 + -5) = *(undefined4 *)(puVar6 + -7);
                *(undefined4 *)((longlong)puVar4 + -0x24) = *(undefined4 *)((longlong)puVar6 + -0x34);
                *(undefined4 *)((longlong)puVar4 + -0x1c) = *(undefined4 *)((longlong)puVar6 + -0x2c);
                uVar1 = *(undefined4 *)((longlong)puVar6 + -0x1c);
                uVar2 = *(undefined4 *)(puVar6 + -3);
                uVar3 = *(undefined4 *)((longlong)puVar6 + -0x14);
                *(undefined4 *)(puVar4 + -2) = *(undefined4 *)(puVar6 + -4);
                *(undefined4 *)((longlong)puVar4 + -0xc) = uVar1;
                *(undefined4 *)(puVar4 + -1) = uVar2;
                *(undefined4 *)((longlong)puVar4 + -4) = uVar3;
                *(undefined4 *)(puVar4 + -3) = *(undefined4 *)(puVar6 + -5);
                *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar6 + -6);
            }
            lVar5 = lVar5 + -1;
            puVar4 = param_3;
            puVar6 = puVar6 + -0xe;
        } while (0 < lVar5);
    }
    return param_3;
}



longlong FUN_1403ffbc0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1403fe910(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



longlong * FUN_1403ffc00(longlong *param_1,longlong *param_2,longlong *param_3)

{
    undefined2 *puVar1;
    longlong *plVar2;

    if (param_1 != param_2) {
        plVar2 = param_3 + 4;
        do {
            if (param_3 != (longlong *)0x0) {
                plVar2[-1] = 0;
                *plVar2 = 0;
                plVar2[1] = 0;
                puVar1 = (undefined2 *)FUN_14018b280(0x10);
                plVar2[-1] = (longlong)puVar1;
                *plVar2 = (longlong)puVar1;
                plVar2[1] = (longlong)(puVar1 + 8);
                if (puVar1 != (undefined2 *)0x0) {
                    *puVar1 = 0;
                }
                if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)*param_1)();
                }
                *param_3 = *param_1;
                *(undefined4 *)(plVar2 + -3) = *(undefined4 *)(param_1 + 1);
            }
            param_1 = param_1 + 6;
            param_3 = param_3 + 6;
            plVar2 = plVar2 + 6;
        } while (param_1 != param_2);
    }
    return param_3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403ffcb0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                   code *param_5)

{
    undefined8 *puVar1;
    char cVar2;
    undefined8 *puVar3;
    undefined4 local_98 [2];
    undefined local_90 [8];
    undefined local_88 [16];
    undefined8 local_78;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    longlong *local_60;
    longlong *local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    FUN_1404002b0(param_1,param_2,param_5);
    if (param_2 < param_3) {
        puVar3 = param_2 + 2;
        do {
            cVar2 = (*param_5)(puVar3 + -2,param_1);
            if (cVar2 != '\0') {
                local_98[0] = *(undefined4 *)(puVar3 + -2);
                local_88 = ZEXT816(0);
                local_78 = 0;
                FUN_14001c1b0(local_90,*puVar3,puVar3[1]);
                local_50 = *(undefined4 *)(puVar3 + 7);
                local_60 = (longlong *)puVar3[5];
                local_70 = *(undefined4 *)(puVar3 + 3);
                local_6c = *(undefined4 *)((longlong)puVar3 + 0x1c);
                local_68 = *(undefined4 *)(puVar3 + 4);
                local_58 = (longlong *)puVar3[6];
                local_4c = *(undefined4 *)((longlong)puVar3 + 0x3c);
                local_38 = *(undefined4 *)(puVar3 + 10);
                uStack52 = *(undefined4 *)((longlong)puVar3 + 0x54);
                uStack48 = *(undefined4 *)(puVar3 + 0xb);
                uStack44 = *(undefined4 *)((longlong)puVar3 + 0x5c);
                local_48 = *(undefined4 *)(puVar3 + 8);
                local_44 = *(undefined4 *)((longlong)puVar3 + 0x44);
                local_40 = *(undefined4 *)(puVar3 + 9);
                if (local_60 != (longlong *)0x0) {
                    (**(code **)*local_60)(local_60);
                }
                if (local_58 != (longlong *)0x0) {
                    (**(code **)*local_58)();
                }
                FUN_140474ec0(puVar3 + -2,param_1);
                FUN_1404004e0(param_1,0,((longlong)param_2 - param_1) / 0x70,local_98,param_5);
                if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                    FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,
                                  local_98);
                }
                if (local_60 != (longlong *)0x0) {
                    (**(code **)(*local_60 + 8))();
                    local_60 = (longlong *)0x0;
                }
                if (local_58 != (longlong *)0x0) {
                    (**(code **)(*local_58 + 8))();
                    local_58 = (longlong *)0x0;
                }
                if (local_88._0_8_ != 0) {
                    FUN_14018b900(local_88._0_8_,0);
                }
            }
            puVar1 = puVar3 + 0xc;
            puVar3 = puVar3 + 0xe;
        } while (puVar1 < param_3);
    }
    FUN_140400010(param_1,param_2,param_5);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403ffe90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined4 local_88 [2];
    undefined local_80 [8];
    undefined local_78 [16];
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    longlong *local_50;
    longlong *local_48;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    if (param_1 != param_2) {
        puVar2 = param_1 + 2;
        do {
            local_88[0] = *(undefined4 *)(puVar2 + -2);
            local_78 = ZEXT816(0);
            local_68 = 0;
            FUN_14001c1b0(local_80,*puVar2,puVar2[1]);
            local_40 = *(undefined4 *)(puVar2 + 7);
            local_50 = (longlong *)puVar2[5];
            local_60 = *(undefined4 *)(puVar2 + 3);
            local_5c = *(undefined4 *)((longlong)puVar2 + 0x1c);
            local_58 = *(undefined4 *)(puVar2 + 4);
            local_48 = (longlong *)puVar2[6];
            local_3c = *(undefined4 *)((longlong)puVar2 + 0x3c);
            local_28 = *(undefined4 *)(puVar2 + 10);
            uStack36 = *(undefined4 *)((longlong)puVar2 + 0x54);
            uStack32 = *(undefined4 *)(puVar2 + 0xb);
            uStack28 = *(undefined4 *)((longlong)puVar2 + 0x5c);
            local_38 = *(undefined4 *)(puVar2 + 8);
            local_34 = *(undefined4 *)((longlong)puVar2 + 0x44);
            local_30 = *(undefined4 *)(puVar2 + 9);
            if (local_50 != (longlong *)0x0) {
                (**(code **)*local_50)(local_50);
            }
            if (local_48 != (longlong *)0x0) {
                (**(code **)*local_48)();
            }
            FUN_140400180(puVar2 + -2,local_88,param_4);
            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,
                              local_88);
            }
            if (local_50 != (longlong *)0x0) {
                (**(code **)(*local_50 + 8))();
                local_50 = (longlong *)0x0;
            }
            if (local_48 != (longlong *)0x0) {
                (**(code **)(*local_48 + 8))();
                local_48 = (longlong *)0x0;
            }
            if (local_78._0_8_ != 0) {
                FUN_14018b900(local_78._0_8_,0);
            }
            puVar1 = puVar2 + 0xc;
            puVar2 = puVar2 + 0xe;
        } while (puVar1 != param_2);
    }
    return;
}

