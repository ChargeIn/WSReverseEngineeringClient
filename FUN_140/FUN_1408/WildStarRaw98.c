//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Removing unreachable block (ram,0x000140860c6e)

void FUN_140844690(longlong *param_1,ulonglong *param_2,int param_3)

{
    ulonglong uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 local_34;
    ulonglong local_30;
    undefined2 local_28;

    param_1[3] = 0;
    plVar2 = param_1;
    if (DAT_140c61f98 != (longlong *)0x0) {
        *(longlong **)((longlong)DAT_140c61f98 + 0x18) = param_1;
        plVar2 = DAT_140c61f90;
    }
    DAT_140c61f90 = plVar2;
    DAT_140c61f88 = DAT_140c61f88 + 1;
    local_30 = 0x1408446db;
    DAT_140c61f98 = param_1;
    FUN_140860810();
    if (*(int *)param_2 != 0) {
        *(undefined4 *)(param_1 + 0x25) = 0;
        uVar1 = *param_2;
        if (param_1[0x10] == 0) {
            local_40 = 0x1000000;
            plVar2 = param_1 + 2;
            local_38 = 0;
            local_34 = 0x3f800000;
            local_28 = 0x100;
            local_48 = plVar2;
            local_30 = uVar1;
            lVar3 = FUN_14083a960(DAT_140c61b70,&local_48,1,0);
            *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
            *(byte *)((longlong)param_1 + 0x17f) = *(byte *)((longlong)param_1 + 0x17f) | 0x80;
            param_1[0x10] = lVar3;
            (**(code **)(*param_1 + 0x80))(param_1,0xe,uVar1 & 0xffffffff);
            if (lVar3 == 0) {
                (**(code **)*plVar2)(plVar2,local_40);
            }
        }
        else {
            FUN_14083ab80(DAT_140c61b70,param_1[0x10],0x1000000,0,(int)uVar1,(int)(uVar1 >> 0x20),0);
        }
    }
    if ((param_3 == 1) || ((*(byte *)((longlong)param_1 + 0x17a) & 7) == 1)) {
        *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) | 0x40;
        FUN_140858700(1,param_1);
        if (param_1[0x10] != 0) {
            FUN_14083aed0(DAT_140c61b70);
        }
        if (param_1[0x3f] != 0) {
            FUN_14083a5a0(DAT_140c61b98);
        }
    }
    else {
        FUN_140858700(0,param_1);
    }
    if ((*(byte *)((longlong)param_1 + 0x17a) & 7) == 2) {
        (**(code **)*param_1)(param_1,0,0,0);
    }
    return;
}



void FUN_140844710(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = DAT_140c61f90;
    if (DAT_140c61f90 != 0) {
        do {
            *(byte *)(lVar3 + 0x17f) =
                    (*(byte *)(lVar3 + 0x17f) & 0x10) * '\x02' | *(byte *)(lVar3 + 0x17f) & 0xcf;
            plVar1 = (longlong *)(lVar3 + 0x18);
            lVar3 = *plVar1;
        } while (*plVar1 != 0);
    }
    FUN_1408554c0(&DAT_140c10f30);
    for (lVar3 = DAT_140c61fd0; lVar2 = DAT_140c61fd8, lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)
            ) {
        FUN_1408554c0(lVar3);
    }
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
        FUN_1408554c0(lVar2);
    }
    return;
}



void FUN_1408447a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = DAT_140c61fd8;
    lVar3 = 0;
    if (DAT_140c61fd8 != 0) {
        while (lVar2 = lVar1, lVar2 != param_1) {
            lVar1 = *(longlong *)(lVar2 + 0x20);
            lVar3 = lVar2;
            if (*(longlong *)(lVar2 + 0x20) == 0) {
                return;
            }
        }
        if (lVar2 != 0) {
            if (lVar2 == DAT_140c61fd8) {
                DAT_140c61fd8 = *(undefined8 *)(lVar2 + 0x20);
                return;
            }
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
    }
    return;
}



undefined4 FUN_140844840(undefined8 *param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    int *piVar4;
    uint uVar5;
    int iVar6;
    undefined4 local_28;
    int iStack36;
    longlong lStack32;
    uint local_18;

    lVar1 = *(longlong *)(param_2 + 0x30);
    if (lVar1 == 0) {
        return 2;
    }
    puVar3 = (undefined4 *)FUN_140856330();
    *param_1 = puVar3;
    uVar2 = DAT_140c10f20;
    if (puVar3 == (undefined4 *)0x0) {
        return 0x34;
    }
    uVar5 = 0;
    piVar4 = (int *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 4) != 0) {
        do {
            if (puVar3[1] == *piVar4) {
                iVar6 = piVar4[1] * 0x10000 + 1;
                if (*(longlong *)(piVar4 + 2) != 0) {
                    FUN_140856540(puVar3,*puVar3,iVar6,*(undefined8 *)(piVar4 + 2),0xffffffff,
                                  (byte)((uint)puVar3[4] >> 9) & 1,1);
                    return 1;
                }
                if ((piVar4[6] != 0) && (*(longlong *)(piVar4 + 4) != 0)) {
                    local_28 = *puVar3;
                    local_18 = local_18 & 0xfffff88c | 0x18c;
                    iStack36 = 0xffffffff;
                    lStack32 = (ulonglong)(uint)piVar4[6] << 0x20;
                    FUN_140856640(puVar3,iVar6,*(undefined8 *)(piVar4 + 4),&local_28);
                    return 1;
                }
                if (piVar4[7] != 0) {
                    local_28 = *puVar3;
                    iStack36 = piVar4[7];
                    local_18 = local_18 & 0xfffff804 | 0x104;
                    lStack32 = 0;
                    FUN_1408566f0(puVar3,iVar6,&local_28);
                    return 1;
                }
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 8;
        } while (uVar5 < *(uint *)(lVar1 + 4));
    }
    FUN_1408562d0(puVar3);
    FUN_140881720(uVar2,puVar3);
    return 2;
}



undefined8
FUN_140844a10(longlong param_1,longlong param_2,undefined8 param_3,undefined param_4,int param_5)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = DAT_140c61f90;
    if (DAT_140c61f90 != 0) {
        do {
            if (((*(longlong *)(lVar2 + 0xa0) == param_1) &&
                 ((param_2 == 0 || (*(longlong *)(lVar2 + 0xb0) == param_2)))) &&
                ((param_5 == 0 || (*(int *)(lVar2 + 0x78) == param_5)))) {
                FUN_140860c80(lVar2,param_3,param_4);
            }
            plVar1 = (longlong *)(lVar2 + 0x18);
            lVar2 = *plVar1;
        } while (*plVar1 != 0);
    }
    return 1;
}



undefined8 FUN_140844aa0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
    longlong lVar1;

    lVar1 = DAT_140c61f90;
    if (DAT_140c61f90 != 0) {
        do {
            if (((*(longlong *)(lVar1 + 0xa0) == param_1) &&
                 ((param_2 == 0 || (*(longlong *)(lVar1 + 0xb0) == param_2)))) &&
                ((param_4 == 0 || (*(int *)(lVar1 + 0x78) == param_4)))) {
                FUN_140860ea0(lVar1,param_3,1);
            }
            lVar1 = *(longlong *)(lVar1 + 0x18);
        } while (lVar1 != 0);
    }
    return 1;
}



void FUN_140844b30(undefined8 param_1)

{
    longlong lVar1;
    char cVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    uint uVar5;
    uint uVar6;
    longlong *plVar7;

    puVar4 = DAT_140c61f90;
    if (DAT_140c61f90 != (undefined8 *)0x0) {
        do {
            cVar2 = FUN_14085f280(puVar4,param_1);
            if (cVar2 != '\0') {
                (**(code **)*puVar4)(puVar4,0,0,0);
                FUN_14082f330(DAT_140c61b68,puVar4[0x14]);
            }
            puVar4 = (undefined8 *)puVar4[3];
        } while (puVar4 != (undefined8 *)0x0);
    }
    uVar5 = 0;
    plVar3 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar1 = *plVar3;
            uVar6 = 0;
            plVar7 = (longlong *)(lVar1 + 0x3b0);
            do {
                if ((*plVar7 != 0) && (cVar2 = FUN_1408628e0(*plVar7,param_1,plVar7[-1]), cVar2 != '\0')) {
                    FUN_140862e30(lVar1 + 0x20);
                    break;
                }
                uVar6 = uVar6 + 1;
                plVar7 = plVar7 + 5;
            } while (uVar6 < 4);
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    if (DAT_140c61cc0 != 0) {
        plVar3 = (longlong *)(DAT_140c61cc0 + 0x390);
        while ((*plVar3 == 0 || (cVar2 = FUN_1408628e0(*plVar3,param_1,plVar3[-1]), cVar2 == '\0'))) {
            uVar5 = uVar5 + 1;
            plVar3 = plVar3 + 5;
            if (3 < uVar5) {
                return;
            }
        }
        FUN_140862e30(DAT_140c61cc0);
        *(undefined4 *)(DAT_140c61cc0 + 0x420) = 2;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140844bb0(void)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    FUN_140834610();
    FUN_140843b30();
    DAT_140c61f90 = 0;
    DAT_140c61f98 = 0;
    DAT_140c61f88 = 0;
    if (DAT_140c61fbc != 0) {
        while (puVar3 = DAT_140c61fa0, puVar2 = DAT_140c61fb0, puVar1 = DAT_140c61fc8,
                DAT_140c61fa0 != (undefined8 *)0x0) {
            if (DAT_140c61fa0 == DAT_140c61fa8) {
                DAT_140c61fa8 = (undefined8 *)0x0;
            }
            if ((DAT_140c61fa0 < DAT_140c61fc8) ||
                (DAT_140c61fc8 + (_DAT_140c61fb8 & 0xffffffff) * 4 <= DAT_140c61fa0)) {
                DAT_140c61fa0 = (undefined8 *)*DAT_140c61fa0;
                FUN_140881720(DAT_140c10f20,puVar3);
                DAT_140c61fc0 = DAT_140c61fc0 + -1;
            }
            else {
                puVar2 = (undefined8 *)*DAT_140c61fa0;
                *DAT_140c61fa0 = DAT_140c61fb0;
                DAT_140c61fa0 = puVar2;
                DAT_140c61fc0 = DAT_140c61fc0 + -1;
                DAT_140c61fb0 = puVar3;
            }
        }
        while (puVar2 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*puVar2;
            if ((puVar2 < puVar1) ||
                (bVar4 = puVar1 + (_DAT_140c61fb8 & 0xffffffff) * 4 <= puVar2, puVar2 = puVar3, bVar4)) {
                FUN_140881720(DAT_140c10f20);
                puVar2 = puVar3;
                puVar1 = DAT_140c61fc8;
            }
        }
        if (puVar1 != (undefined8 *)0x0) {
            FUN_140881720(DAT_140c10f20,puVar1);
        }
        _DAT_140c61fb8 = 0;
        DAT_140c61fa0 = (undefined8 *)0x0;
        DAT_140c61fa8 = (undefined8 *)0x0;
    }
    FUN_14088c760(&DAT_140c10f30);
    DAT_140c61fd0 = 0;
    DAT_140c61fd8 = 0;
    return;
}



undefined8 FUN_140844d10(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
    char cVar1;
    undefined8 uVar2;

    cVar1 = FUN_140844e80();
    if (cVar1 == '\0') {
        *param_3 = 0x22;
        return 2;
    }
    *param_3 = 0x21;
    uVar2 = FUN_140844d60(param_1);
    return uVar2;
}



undefined8
FUN_140844d60(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
    char cVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    int iVar6;
    undefined4 in_XMM6_Da;
    float fVar7;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar8;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined auVar9 [16];
    undefined auVar10 [16];
    undefined auVar11 [16];

    auVar9 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    if ((DAT_140c61f88 - DAT_140c61f80) + 1U <= (uint)DAT_140c10f48) {
        return 1;
    }
    lVar5 = 0;
    iVar6 = 2;
    auVar10 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    fVar8 = 101.0;
    if (DAT_140c61f90 != 0) {
        auVar11 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        lVar3 = DAT_140c61f90;
        do {
            fVar7 = *(float *)(lVar3 + 0x184);
            if (((((fVar7 < fVar8) || (fVar7 == fVar8)) && ((*(byte *)(lVar3 + 0x17e) & 1) == 0)) &&
                 (((*(byte *)(lVar3 + 0x17f) & 0x10) == 0 && ((*(byte *)(lVar3 + 0x17f) & 0x40) == 0)))) &&
                ((cVar1 = FUN_14085f1f0(lVar3,0,param_4,param_5,auVar9,auVar10,auVar11), cVar1 != '\0' &&
                                                                                         (iVar2 = FUN_14085eac0(lVar3), iVar2 != 0)))) {
                lVar5 = lVar3;
                fVar8 = fVar7;
                iVar6 = iVar2;
            }
            lVar3 = *(longlong *)(lVar3 + 0x18);
        } while (lVar3 != 0);
    }
    if (((param_1 < fVar8) || (param_1 == fVar8)) || (lVar5 == 0)) {
        uVar4 = 0x50;
    }
    else {
        uVar4 = 1;
        if (iVar6 == 1) {
            FUN_14085f2e0(lVar5,1);
        }
    }
    return uVar4;
}



bool FUN_140844e80(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    bool bVar5;
    undefined4 in_XMM6_Da;
    float fVar6;
    float fVar7;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    uint local_res10;
    uint uStackX20;
    undefined auVar8 [16];
    undefined auVar9 [16];
    undefined auVar10 [16];

    auVar10 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar6 = 1.0;
    auVar9 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    auVar8 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    if ((((DAT_140c61b10._4_4_ < 1.0) &&
          (fVar7 = DAT_140c61b10._4_4_,
                  FUN_140881810(DAT_140c10f20,&local_res10,param_4,param_5,auVar8,auVar9,auVar10),
                  local_res10 != 0)) && (fVar7 < (float)(ulonglong)uStackX20 / (float)(ulonglong)local_res10))
        || (((DAT_140c61c94 < fVar6 &&
              (fVar6 = DAT_140c61c94,
                      FUN_140881810(DAT_140c10f28,&local_res10,param_4,param_5,auVar8,auVar9,auVar10),
                      local_res10 != 0)) &&
             (fVar6 < (float)(ulonglong)uStackX20 / (float)(ulonglong)local_res10)))) {
        fVar6 = 101.0;
        lVar4 = 0;
        for (lVar1 = DAT_140c61f90; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
            fVar7 = *(float *)(lVar1 + 0x184);
            if (((fVar7 < fVar6) || (fVar7 == fVar6)) &&
                (((*(byte *)(lVar1 + 0x17e) & 1) == 0 &&
                  ((((*(byte *)(lVar1 + 0x17f) & 0x10) == 0 && ((*(byte *)(lVar1 + 0x17f) & 0x40) == 0)) &&
                    (cVar2 = FUN_14085f1f0(lVar1,0), cVar2 != '\0')))))) {
                lVar4 = lVar1;
                fVar6 = fVar7;
            }
        }
        if (((param_1 < fVar6) || (param_1 == fVar6)) || (lVar4 == 0)) {
            iVar3 = 2;
        }
        else {
            FUN_14085f2e0(lVar4,2);
            iVar3 = 1;
        }
        bVar5 = iVar3 == 1;
    }
    else {
        bVar5 = true;
    }
    return bVar5;
}



// WARNING: Could not reconcile some variable overlaps

float * FUN_140845010(float *param_1,longlong *param_2,longlong param_3,float *param_4)

{
    longlong lVar1;
    char cVar2;
    undefined8 *puVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined8 local_res8;

    *param_4 = 0.0;
    puVar3 = (undefined8 *)FUN_140852d50(param_2,&local_res8);
    local_res8 = *puVar3;
    *(undefined8 *)(param_1 + 2) = local_res8;
    lVar1 = *param_2;
    *param_1 = (float)local_res8;
    cVar2 = (**(code **)(lVar1 + 0xf0))(param_2,param_4);
    if (cVar2 != '\0') {
        fVar6 = 0.0;
        fVar4 = param_1[3];
        *param_4 = *(float *)(param_3 + 100) * *param_4;
        if (fVar4 != 0.0) {
            fVar4 = (float)FUN_140843db0(param_3 + 8);
            if (*param_4 <= fVar4) {
                fVar4 = param_1[2] + param_1[3];
            }
            else {
                fVar4 = (fVar4 / *param_4) * param_1[3] + param_1[2];
            }
            fVar5 = fVar6;
            if (((fVar6 <= fVar4) && (fVar5 = 100.0, fVar4 <= 100.0)) && (fVar5 = fVar6, fVar6 <= fVar4))
            {
                fVar5 = fVar4;
            }
            *param_1 = fVar5;
        }
        return param_1;
    }
    return param_1;
}



undefined8 FUN_140845110(undefined4 *param_1)

{
    *param_1 = 0;
    return 1;
}



void FUN_140845120(longlong *param_1)

{
    uint uVar1;
    ulonglong uVar2;

    if (*(int *)((longlong)param_1 + 0xc) != 0) {
        if (*(int *)((longlong)param_1 + 0xc) == 2) {
            uVar2 = 0;
            if (*(int *)(param_1 + 1) != 0) {
                do {
                    uVar1 = (int)uVar2 + 1;
                    *(float *)(*param_1 + 4 + uVar2 * 0xc) = *(float *)(*param_1 + 4 + uVar2 * 0xc) + 1.0;
                    uVar2 = (ulonglong)uVar1;
                } while (uVar1 < *(uint *)(param_1 + 1));
            }
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        return;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 4;
    return;
}



ulonglong FUN_140845180(longlong param_1,int param_2,int param_3,undefined4 param_4,
                        undefined8 param_5,undefined4 param_6)

{
    ulonglong uVar1;

    uVar1 = FUN_140837e30(param_1 + 8 + ((longlong)param_2 * 2 + (longlong)param_3) * 0x10,param_5,
                          param_4,param_6);
    if (((int)uVar1 == 1) && (param_3 == 0)) {
        FUN_140845120(param_1 + 8 + (longlong)param_2 * 0x20);
        uVar1 = uVar1 & 0xffffffff;
    }
    return uVar1;
}



undefined4 FUN_140845200(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    plVar1 = (longlong *)(param_1 + 8);
    lVar2 = 2;
    do {
        lVar3 = 2;
        do {
            if (*plVar1 != 0) {
                FUN_140881720(DAT_140c10f20);
                *plVar1 = 0;
            }
            plVar1[1] = 0;
            plVar1 = plVar1 + 2;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return 1;
}



void FUN_140845270(int **param_1,int param_2,undefined8 param_3)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 10;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && (piVar2 != (int *)&DAT_fffffffffffffff8)) {
            return;
        }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    piVar2 = (int *)FUN_14088c520(param_1);
    if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
        *(undefined8 *)(piVar2 + 8) = param_3;
        piVar2[2] = -1;
        piVar2[3] = 0x3f800000;
        piVar2[4] = -1;
        piVar2[5] = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140845310(int **param_1,int param_2,uint *param_3,char param_4)

{
    int *piVar1;
    int *piVar2;
    uint uVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;
    longlong local_res8;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 10;
        } while (piVar2 != piVar1);
        if (((piVar2 != piVar1) && ((uint *)(piVar2 + 2) != (uint *)0x0)) && (piVar2[5] != 1)) {
            uVar3 = piVar2[4];
            fVar5 = 1.0 / (float)(ulonglong)(uint)piVar2[5];
            fVar6 = (float)(ulonglong)(uint)piVar2[2] * 1000.0 * fVar5;
            if (param_4 != '\0') {
                QueryPerformanceCounter(&local_res8);
                fVar6 = fVar6 + ((float)(local_res8 - *(longlong *)(piVar2 + 6)) / _DAT_140c61fe8) *
                                (float)piVar2[3];
            }
            uVar4 = 1;
            uVar3 = (uint)(longlong)((float)(ulonglong)uVar3 * 1000.0 * fVar5);
            if ((uint)(longlong)fVar6 < uVar3) {
                uVar3 = (uint)(longlong)fVar6;
            }
            *param_3 = uVar3;
            goto LAB_140845421;
        }
    }
    *param_3 = 0;
    uVar4 = 2;
    LAB_140845421:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return uVar4;
}



undefined8 FUN_140845440(longlong *param_1)

{
    longlong lVar1;

    lVar1 = FUN_1408819f0(DAT_140c10f20,0x140);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    *(undefined4 *)(param_1 + 2) = 8;
    return 1;
}



void FUN_140845490(undefined8 *param_1,int param_2)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    puVar3 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar3 != puVar2) {
        do {
            if (*(int *)puVar3 == param_2) break;
            puVar3 = puVar3 + 5;
        } while (puVar3 != puVar2);
        if (puVar3 != puVar2) {
            if (puVar3 < puVar2 + -5) {
                uVar1 = ((ulonglong)((longlong)(puVar2 + -5) + (-1 - (longlong)puVar3)) / 0x28 + 1) * 5 &
                        0x1fffffffffffffff;
                puVar2 = puVar3 + 5;
                for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                    *puVar3 = *puVar2;
                    puVar2 = puVar2 + 1;
                    puVar3 = puVar3 + 1;
                }
            }
            param_1[1] = param_1[1] + -0x28;
        }
    }
    // WARNING: Could not recover jumptable at 0x000140845526. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



void FUN_140845530(undefined8 *param_1,int param_2,longlong param_3)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar3 != puVar2) {
        do {
            if (*(int *)puVar3 == param_2) break;
            puVar3 = puVar3 + 5;
        } while (puVar3 != puVar2);
        if ((puVar3 != puVar2) && (puVar3[4] == param_3)) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            if (puVar3 < (undefined8 *)(param_1[1] + -0x28)) {
                uVar1 = ((ulonglong)((longlong)(undefined8 *)(param_1[1] + -0x28) + (-1 - (longlong)puVar3))
                         / 0x28 + 1) * 5 & 0x1fffffffffffffff;
                puVar2 = puVar3 + 5;
                for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                    *puVar3 = *puVar2;
                    puVar2 = puVar2 + 1;
                    puVar3 = puVar3 + 1;
                }
            }
            param_1[1] = param_1[1] + -0x28;
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        }
    }
    return;
}



void FUN_1408455e0(undefined8 param_1,undefined8 param_2,int param_3,int **param_4,int param_5)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *param_4;
    piVar1 = param_4[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_5) break;
            piVar2 = piVar2 + 10;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && (piVar2 != (int *)&DAT_fffffffffffffff8)) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 3));
            piVar1 = param_4[8];
            piVar2[3] = param_3;
            *(int **)(piVar2 + 6) = piVar1;
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 3));
        }
    }
    return;
}



void FUN_140845660(int **param_1,int param_2,int *param_3,longlong param_4)

{
    int *piVar1;
    int *piVar2;

    piVar1 = *param_1;
    piVar2 = param_1[1];
    if (piVar1 == piVar2) {
        LAB_1408456a8:
        piVar1 = (int *)0x0;
    }
    else {
        do {
            if (*piVar1 == param_2) break;
            piVar1 = piVar1 + 10;
        } while (piVar1 != piVar2);
        if (piVar1 == piVar2) goto LAB_1408456a8;
        piVar1 = piVar1 + 2;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (piVar1 == (int *)0x0) {
        piVar1 = *param_1;
        piVar2 = param_1[1];
        if (piVar1 == piVar2) {
            LAB_1408456e2:
            piVar1 = (int *)0x0;
            LAB_1408456e4:
            piVar2 = (int *)FUN_14088c520(param_1);
            if (piVar2 != (int *)0x0) {
                *piVar2 = param_2;
                piVar1 = piVar2 + 2;
            }
            if (piVar1 == (int *)0x0) goto LAB_14084573d;
        }
        else {
            do {
                if (*piVar1 == param_2) break;
                piVar1 = piVar1 + 10;
            } while (piVar1 != piVar2);
            if (piVar1 == piVar2) goto LAB_1408456e2;
            piVar1 = piVar1 + 2;
            if (piVar1 == (int *)0x0) goto LAB_1408456e4;
        }
        if (param_1[1] != *param_1) {
            QueryPerformanceCounter(param_1 + 8);
        }
        *(longlong *)(piVar1 + 6) = param_4;
    }
    else if (param_4 != *(longlong *)(piVar1 + 6)) goto LAB_14084573d;
    *piVar1 = *param_3;
    piVar1[1] = param_3[1];
    piVar1[2] = param_3[2];
    piVar1[3] = param_3[3];
    *(int **)(piVar1 + 4) = param_1[8];
    LAB_14084573d:
    // WARNING: Could not recover jumptable at 0x000140845759. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



void FUN_140845760(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong *plVar5;
    longlong lVar6;
    ulonglong uVar4;

    uVar4 = 0;
    if ((int)(param_1[1] - *param_1 >> 4) != 0) {
        do {
            uVar2 = DAT_140c10f28;
            lVar6 = *(longlong *)(*param_1 + 8 + uVar4 * 0x10);
            if (lVar6 != 0) {
                thunk_FUN_140871690();
                FUN_140881720(uVar2,lVar6);
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < (uint)(param_1[1] - *param_1 >> 4));
    }
    plVar5 = param_1 + 3;
    lVar6 = 4;
    do {
        uVar4 = 0;
        if ((int)(plVar5[1] - *plVar5 >> 4) != 0) {
            do {
                plVar1 = *(longlong **)(*plVar5 + 8 + uVar4 * 0x10);
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_FUN_140c10f70);
                    *(undefined8 *)(*plVar5 + 8 + uVar4 * 0x10) = 0;
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < (uint)(plVar5[1] - *plVar5 >> 4));
        }
        if (*plVar5 != 0) {
            plVar5[1] = *plVar5;
            FUN_140881720(DAT_140c10f20);
            *plVar5 = 0;
            plVar5[1] = 0;
            *(undefined4 *)(plVar5 + 2) = 0;
        }
        plVar5 = plVar5 + 3;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*param_1 != 0) {
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



longlong FUN_1408458b0(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_1408297a0(param_1,4), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x10;
    return lVar1;
}



longlong FUN_140845910(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_140846070(param_1,1), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    if (param_1[1] != 0) {
        *(undefined8 *)(param_1[1] + 8) = 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x10;
    return lVar1;
}



int FUN_140845980(longlong *param_1,ulonglong param_2,uint param_3,int param_4,undefined8 param_5)

{
    uint **ppuVar1;
    int iVar2;
    undefined4 uVar3;
    uint *puVar4;
    byte bVar5;
    ulonglong uVar6;
    longlong *plVar7;
    uint uVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    longlong **pplVar12;

    param_2 = param_2 & 0xff;
    FUN_140832470();
    ppuVar1 = (uint **)(param_1 + (param_2 + 1) * 3);
    uVar8 = param_4 << 0x10 | param_3;
    for (puVar4 = *ppuVar1; (puVar4 != (uint *)param_1[(param_2 + 1) * 3 + 1] && (*puVar4 != uVar8));
         puVar4 = puVar4 + 4) {
    }
    if (puVar4 == (uint *)param_1[(param_2 + 1) * 3 + 1]) {
        pplVar12 = (longlong **)0x0;
    }
    else {
        pplVar12 = (longlong **)(puVar4 + 2);
        if (pplVar12 != (longlong **)0x0) goto LAB_140845a11;
    }
    puVar4 = (uint *)FUN_140845910();
    if (puVar4 != (uint *)0x0) {
        *puVar4 = uVar8;
        pplVar12 = (longlong **)(puVar4 + 2);
    }
    if (pplVar12 == (longlong **)0x0) {
        return 2;
    }
    LAB_140845a11:
    if (*pplVar12 != (longlong *)0x0) {
        return 1;
    }
    iVar2 = FUN_14082fb90(param_3,param_4,&DAT_140c61c70,param_2,pplVar12,param_5);
    if (iVar2 == 1) {
        lVar11 = *param_1;
        iVar2 = 1;
        if (lVar11 != param_1[1]) {
            do {
                uVar3 = (**(code **)(**pplVar12 + 0x78))();
                iVar2 = FUN_140870ab0(*(undefined8 *)(lVar11 + 8),param_2,uVar8,uVar3);
                if (iVar2 != 1) {
                    FUN_140846440(param_1,param_2,param_3,param_4);
                    break;
                }
                lVar11 = lVar11 + 0x10;
            } while (lVar11 != param_1[1]);
        }
        *(undefined2 *)(param_1 + 0x11) = 0;
        bVar5 = 0;
        plVar7 = param_1 + 3;
        do {
            if ((int)(plVar7[1] - *plVar7 >> 4) != 0) {
                *(byte *)((longlong)param_1 + 0x89) = bVar5 + 1;
                *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | '\x01' << (bVar5 & 0x1f);
            }
            bVar5 = bVar5 + 1;
            plVar7 = plVar7 + 3;
        } while (bVar5 < 4);
        FUN_140843f60();
        return iVar2;
    }
    puVar10 = (undefined8 *)*ppuVar1;
    puVar9 = (undefined8 *)ppuVar1[1];
    if (puVar10 != puVar9) {
        do {
            if (*(uint *)puVar10 == uVar8) break;
            puVar10 = puVar10 + 2;
        } while (puVar10 != puVar9);
        if (puVar10 != puVar9) {
            if (puVar10 < puVar9 + -2) {
                uVar6 = ((ulonglong)((longlong)(puVar9 + -2) + (-1 - (longlong)puVar10)) >> 3 &
                         0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                puVar9 = puVar10 + 2;
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar10 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar10 = puVar10 + 1;
                }
            }
            ppuVar1[1] = ppuVar1[1] + -4;
        }
    }
    return 2;
}



void FUN_140845b80(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    char cVar3;
    longlong lVar4;
    float fVar5;

    lVar4 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    if (lVar1 != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x18);
    }
    if ((*(byte *)(lVar4 + 0x17e) & 0x40) == 0) {
        FUN_1408605d0(lVar4);
    }
    lVar1 = *(longlong *)(lVar4 + 0x1f0);
    if (((0.1 < *(float *)(lVar1 + 0x10)) && (**(longlong **)(param_1 + 0x50) != 0)) &&
        ((*(longlong *)(lVar1 + 0x18) != 0 || (cVar3 = FUN_140870740(lVar1), cVar3 != '\0')))) {
        fVar5 = *(float *)(lVar1 + 0x10);
        lVar4 = *(longlong *)(lVar1 + 0x18);
        fVar2 = 0.0;
        if ((fVar5 < 0.0) || (fVar2 = 100.0, 100.0 < fVar5)) {
            fVar5 = fVar2;
        }
        *(byte *)(lVar4 + 0xce) = *(byte *)(lVar4 + 0xce) | fVar5 != *(float *)(lVar4 + 0xc4);
        *(float *)(lVar4 + 0xc4) = fVar5;
        FUN_1408718e0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(param_1 + 0x50));
    }
    return;
}



void FUN_140845c50(longlong param_1)

{
    if (**(longlong **)(param_1 + 0x50) != 0) {
        FUN_140868480();
    }
    FUN_140881720(DAT_140c10f28,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
}



void FUN_140845c90(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(char *)(param_1 + 0x89) != '\0') {
        do {
            uVar6 = 0;
            lVar3 = uVar7 + 1;
            lVar4 = *(longlong *)(param_1 + lVar3 * 0x18);
            plVar1 = (longlong *)(param_1 + lVar3 * 0x18);
            if ((int)(*(longlong *)(param_1 + 8 + lVar3 * 0x18) - lVar4 >> 4) != 0) {
                do {
                    plVar2 = *(longlong **)(lVar4 + 8 + uVar6 * 0x10);
                    if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x50))();
                    }
                    lVar4 = *plVar1;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < (uint)(plVar1[1] - lVar4 >> 4));
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(byte *)(param_1 + 0x89));
    }
    return;
}



void FUN_140845d40(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10);
    if (lVar3 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x18);
    }
    if ((*(byte *)(lVar3 + 0x17e) & 0x40) == 0) {
        FUN_1408605d0(lVar3);
    }
    if ((*(longlong **)(lVar3 + 0x1f0) != (longlong *)0x0) &&
        (lVar2 = FUN_140845f30(param_1,*(undefined4 *)(**(longlong **)(lVar3 + 0x1f0) + 0x18)),
                lVar2 != 0)) {
        uVar1 = FUN_140845ed0(param_1,lVar3);
        if (*(char *)(param_2 + 0x58) == '\0') {
            if (*(longlong *)(param_2 + 0x50) != 0) {
                FUN_140870ef0(lVar2,param_2,uVar1);
            }
        }
        else {
            FUN_140871250(lVar2,param_2,uVar1);
        }
    }
    return;
}



undefined8 * FUN_140845df0(void)

{
    undefined8 *puVar1;

    if (DAT_140c61fe0 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f28,0x90);
        DAT_140c61fe0 = puVar1;
        if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined4 *)(puVar1 + 2) = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            *(undefined4 *)(puVar1 + 5) = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            *(undefined4 *)(puVar1 + 8) = 0;
            puVar1[9] = 0;
            puVar1[10] = 0;
            *(undefined4 *)(puVar1 + 0xb) = 0;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            *(undefined4 *)(puVar1 + 0xe) = 0;
            *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
            *(undefined2 *)(puVar1 + 0x11) = 0;
            *(undefined4 *)(puVar1 + 0xf) = 0;
            *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
            *(undefined *)((longlong)puVar1 + 0x7c) = 0xf;
        }
    }
    return DAT_140c61fe0;
}



void FUN_140845e80(void)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = DAT_140c61fe0;
    uVar1 = DAT_140c10f28;
    if (DAT_140c61fe0 != 0) {
        FUN_140845760(DAT_140c61fe0);
        FUN_140881720(uVar1,lVar2);
    }
    DAT_140c61fe0 = 0;
    return;
}



uint FUN_140845ed0(longlong param_1,longlong param_2)

{
    byte bVar1;
    uint uVar2;

    uVar2 = 0;
    bVar1 = 0;
    if (*(byte *)(param_1 + 0x89) != 0) {
        do {
            if (((*(byte *)(*(longlong *)(param_2 + 0xb0) + 0x12) & DAT_140c61ff0) >>
                                                                                   (*(byte *)((ulonglong)bVar1 + 0x78 + param_1) & 0x1f) & 1) != 0) {
                uVar2 = uVar2 | 1 << (bVar1 & 0x1f);
            }
            bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)(param_1 + 0x89));
    }
    return uVar2;
}



longlong FUN_140845f30(int **param_1,int param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    byte bVar5;

    for (piVar4 = *param_1; (piVar4 != param_1[1] && (*piVar4 != param_2)); piVar4 = piVar4 + 4) {
    }
    if ((piVar4 != param_1[1]) && ((longlong *)(piVar4 + 2) != (longlong *)0x0)) {
        lVar3 = *(longlong *)(piVar4 + 2);
        LAB_140845f78:
        bVar5 = 0;
        if (*(char *)((longlong)param_1 + 0x89) != '\0') {
            do {
                lVar2 = (ulonglong)bVar5 + 1;
                piVar4 = param_1[lVar2 * 3];
                if (piVar4 != param_1[lVar2 * 3 + 1]) {
                    do {
                        uVar1 = (**(code **)(**(longlong **)(piVar4 + 2) + 0x78))();
                        FUN_140870ab0(lVar3,bVar5,*piVar4,uVar1);
                        piVar4 = piVar4 + 4;
                    } while (piVar4 != param_1[lVar2 * 3 + 1]);
                }
                bVar5 = bVar5 + 1;
            } while (bVar5 < *(byte *)((longlong)param_1 + 0x89));
        }
        return lVar3;
    }
    lVar3 = FUN_1408819f0(DAT_140c10f28,0x20);
    if (lVar3 != 0) {
        FUN_140870a80(lVar3);
        lVar2 = FUN_140846770(param_1,param_2,lVar3);
        uVar1 = DAT_140c10f28;
        if (lVar2 != 0) goto LAB_140845f78;
        thunk_FUN_140871690(lVar3);
        FUN_140881720(uVar1,lVar3);
    }
    return 0;
}



undefined8 FUN_140846070(longlong *param_1,int param_2)

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
                    puVar4[1] = 0;
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



undefined8 FUN_140846220(longlong param_1,uint param_2,int param_3)

{
    uint *puVar1;
    char cVar2;
    uint *puVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(char *)(param_1 + 0x89) != '\0') {
        do {
            puVar3 = *(uint **)(param_1 + (uVar5 + 1) * 0x18);
            puVar1 = *(uint **)(param_1 + (uVar5 + 1) * 0x18 + 8);
            if (puVar3 != puVar1) {
                do {
                    if (*puVar3 == (param_3 << 0x10 | param_2)) break;
                    puVar3 = puVar3 + 4;
                } while (puVar3 != puVar1);
                if (((puVar3 != puVar1) && ((longlong **)(puVar3 + 2) != (longlong **)0x0)) &&
                    (cVar2 = (**(code **)(**(longlong **)(puVar3 + 2) + 0x70))(), cVar2 != '\0')) {
                    return 1;
                }
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(byte *)(param_1 + 0x89));
    }
    return 0;
}



undefined FUN_1408462d0(longlong param_1)

{
    byte bVar1;

    bVar1 = 0;
    if (*(byte *)(param_1 + 0x89) != 0) {
        do {
            if ((int)(*(longlong *)(param_1 + 8 + ((ulonglong)bVar1 + 1) * 0x18) -
                      *(longlong *)(param_1 + ((ulonglong)bVar1 + 1) * 0x18) >> 4) != 0) {
                return 1;
            }
            bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)(param_1 + 0x89));
    }
    return 0;
}



undefined8 * FUN_140846320(longlong param_1,undefined8 *param_2)

{
    ushort uVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    undefined8 *puVar5;
    longlong lVar6;

    if (*(char *)(param_2 + 0xb) == '\0') {
        lVar6 = *(longlong *)(param_2[8] + 0x10);
        if (lVar6 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x18);
        }
        if ((*(byte *)(lVar6 + 0x17e) & 0x40) == 0) {
            FUN_1408605d0(lVar6);
        }
        lVar2 = *(longlong *)(lVar6 + 0x1f0);
        if (((lVar2 == 0) || (*(char *)(param_1 + 0x89) == '\0')) ||
            (iVar4 = FUN_140845ed0(param_1,lVar6), iVar4 == 0)) {
            puVar5 = (undefined8 *)0x0;
        }
        else {
            uVar1 = *(ushort *)(param_2 + 2);
            uVar3 = *param_2;
            puVar5 = (undefined8 *)FUN_1408819f0(DAT_140c10f28,0x18);
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = 0;
                if ((0.1 < *(float *)(lVar2 + 0x10)) &&
                    (iVar4 = FUN_140868400(puVar5,uVar1,*(undefined2 *)(lVar2 + 0x34)), iVar4 == 1)) {
                    FUN_1407db590(*puVar5,uVar3,(*(ushort *)(lVar2 + 0x36) & 7) * (uint)uVar1 * 4);
                    *(undefined2 *)((longlong)puVar5 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
                }
                param_2[10] = puVar5;
                puVar5 = (undefined8 *)0x1;
            }
        }
        return puVar5;
    }
    return (undefined8 *)0x0;
}



void FUN_140846440(longlong *param_1,byte param_2,uint param_3,int param_4)

{
    longlong **pplVar1;
    uint *puVar2;
    uint *puVar3;
    byte bVar4;
    ulonglong uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 *puVar9;

    lVar8 = (ulonglong)param_2 + 1;
    param_3 = param_4 << 0x10 | param_3;
    puVar2 = (uint *)param_1[lVar8 * 3 + 1];
    plVar6 = param_1 + lVar8 * 3;
    puVar3 = (uint *)param_1[lVar8 * 3];
    if (puVar3 != puVar2) {
        do {
            if (*puVar3 == param_3) break;
            puVar3 = puVar3 + 4;
        } while (puVar3 != puVar2);
        if ((puVar3 != puVar2) && (pplVar1 = (longlong **)(puVar3 + 2), pplVar1 != (longlong **)0x0)) {
            lVar8 = *param_1;
            if (lVar8 != param_1[1]) {
                do {
                    FUN_140871540(*(undefined8 *)(lVar8 + 8),(ulonglong)param_2,param_3);
                    lVar8 = lVar8 + 0x10;
                } while (lVar8 != param_1[1]);
            }
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 0x58))();
                (**(code **)(**pplVar1 + 8))(*pplVar1,&PTR_PTR_FUN_140c10f70);
                *pplVar1 = (longlong *)0x0;
            }
            puVar9 = (undefined8 *)*plVar6;
            puVar7 = (undefined8 *)plVar6[1];
            if (puVar9 != puVar7) {
                do {
                    if (*(uint *)puVar9 == param_3) break;
                    puVar9 = puVar9 + 2;
                } while (puVar9 != puVar7);
                if (puVar9 != puVar7) {
                    if (puVar9 < puVar7 + -2) {
                        uVar5 = ((ulonglong)((longlong)(puVar7 + -2) + (-1 - (longlong)puVar9)) >> 3 &
                                 0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                        puVar7 = puVar9 + 2;
                        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                            *puVar9 = *puVar7;
                            puVar7 = puVar7 + 1;
                            puVar9 = puVar9 + 1;
                        }
                    }
                    plVar6[1] = plVar6[1] + -0x10;
                }
            }
            *(undefined2 *)(param_1 + 0x11) = 0;
            bVar4 = 0;
            plVar6 = param_1 + 3;
            do {
                if ((int)(plVar6[1] - *plVar6 >> 4) != 0) {
                    *(byte *)((longlong)param_1 + 0x89) = bVar4 + 1;
                    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | '\x01' << (bVar4 & 0x1f);
                }
                bVar4 = bVar4 + 1;
                plVar6 = plVar6 + 3;
            } while (bVar4 < 4);
            FUN_140843f60();
        }
    }
    return;
}



void FUN_1408465c0(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;
    byte bVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong local_res8;
    longlong local_res10;

    bVar6 = 0;
    uVar7 = 0;
    if (*(char *)((longlong)param_1 + 0x89) != '\0') {
        do {
            lVar2 = (ulonglong)bVar6 + 1;
            lVar5 = param_1[lVar2 * 3];
            plVar1 = param_1 + lVar2 * 3;
            uVar8 = uVar7;
            if ((int)(param_1[lVar2 * 3 + 1] - lVar5 >> 4) != 0) {
                do {
                    if (*(longlong *)(lVar5 + 8 + uVar8 * 0x10) != 0) {
                        lVar2 = *param_1;
                        uVar4 = uVar7;
                        if ((int)(param_1[1] - lVar2 >> 4) != 0) {
                            do {
                                FUN_140870d60(*(undefined8 *)(lVar2 + 8 + uVar4 * 0x10),bVar6,
                                              *(undefined4 *)(*plVar1 + uVar8 * 0x10),&local_res8,&local_res10);
                                if ((local_res8 != 0) && (*(short *)(local_res8 + 0x12) != 0)) {
                                    (**(code **)(**(longlong **)(lVar5 + 8 + uVar8 * 0x10) + 0x38))();
                                }
                                if ((local_res10 != 0) && (*(short *)(local_res10 + 0x12) != 0)) {
                                    (**(code **)(**(longlong **)(lVar5 + 8 + uVar8 * 0x10) + 0x40))();
                                }
                                lVar2 = *param_1;
                                uVar3 = (int)uVar4 + 1;
                                uVar4 = (ulonglong)uVar3;
                            } while (uVar3 < (uint)(param_1[1] - lVar2 >> 4));
                        }
                        (**(code **)(**(longlong **)(lVar5 + 8 + uVar8 * 0x10) + 0x48))();
                    }
                    lVar5 = *plVar1;
                    uVar3 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar3;
                } while (uVar3 < (uint)(plVar1[1] - lVar5 >> 4));
            }
            bVar6 = bVar6 + 1;
        } while (bVar6 < *(byte *)((longlong)param_1 + 0x89));
    }
    if ((int)(param_1[1] - *param_1 >> 4) != 0) {
        do {
            FUN_140871490();
            uVar3 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar3;
        } while (uVar3 < (uint)(param_1[1] - *param_1 >> 4));
    }
    return;
}



undefined8 * FUN_140846770(int **param_1,int param_2,undefined8 param_3)

{
    int *piVar1;
    undefined8 *puVar2;

    for (piVar1 = *param_1; (piVar1 != param_1[1] && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
    }
    if (piVar1 == param_1[1]) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        puVar2 = (undefined8 *)(piVar1 + 2);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = param_3;
            return puVar2;
        }
    }
    piVar1 = (int *)FUN_1408458b0();
    if (piVar1 == (int *)0x0) {
        return puVar2;
    }
    *piVar1 = param_2;
    *(undefined8 *)(piVar1 + 2) = param_3;
    return (undefined8 *)(piVar1 + 2);
}



void FUN_1408467f0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    byte bVar7;

    bVar7 = 0;
    if (*(char *)(param_1 + 0x89) != '\0') {
        do {
            uVar6 = 0;
            lVar3 = (ulonglong)bVar7 + 1;
            lVar4 = *(longlong *)(param_1 + lVar3 * 0x18);
            plVar1 = (longlong *)(param_1 + lVar3 * 0x18);
            if ((int)(*(longlong *)(param_1 + 8 + lVar3 * 0x18) - lVar4 >> 4) != 0) {
                do {
                    plVar2 = *(longlong **)(lVar4 + 8 + uVar6 * 0x10);
                    if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
                    }
                    lVar4 = *plVar1;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < (uint)(plVar1[1] - lVar4 >> 4));
            }
            bVar7 = bVar7 + 1;
        } while (bVar7 < *(byte *)(param_1 + 0x89));
    }
    return;
}



void FUN_1408468b0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(char *)(param_1 + 0x89) != '\0') {
        do {
            uVar6 = 0;
            lVar3 = uVar7 + 1;
            lVar4 = *(longlong *)(param_1 + lVar3 * 0x18);
            plVar1 = (longlong *)(param_1 + lVar3 * 0x18);
            if ((int)(*(longlong *)(param_1 + 8 + lVar3 * 0x18) - lVar4 >> 4) != 0) {
                do {
                    plVar2 = *(longlong **)(lVar4 + 8 + uVar6 * 0x10);
                    if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x58))();
                    }
                    lVar4 = *plVar1;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < (uint)(plVar1[1] - lVar4 >> 4));
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(byte *)(param_1 + 0x89));
    }
    return;
}



void FUN_140846960(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    byte bVar7;

    bVar7 = 0;
    if (*(char *)(param_1 + 0x89) != '\0') {
        do {
            uVar6 = 0;
            lVar3 = (ulonglong)bVar7 + 1;
            lVar4 = *(longlong *)(param_1 + lVar3 * 0x18);
            plVar1 = (longlong *)(param_1 + lVar3 * 0x18);
            if ((int)(*(longlong *)(param_1 + 8 + lVar3 * 0x18) - lVar4 >> 4) != 0) {
                do {
                    plVar2 = *(longlong **)(lVar4 + 8 + uVar6 * 0x10);
                    if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x90))();
                    }
                    lVar4 = *plVar1;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                } while (uVar5 < (uint)(plVar1[1] - lVar4 >> 4));
            }
            bVar7 = bVar7 + 1;
        } while (bVar7 < *(byte *)(param_1 + 0x89));
    }
    return;
}



undefined8 * FUN_140846a10(undefined8 *param_1,undefined8 param_2)

{
    *param_1 = &PTR_FUN_1409a3000;
    param_1[1] = 0;
    FUN_14001c280(param_1 + 2);
    param_1[0x19] = param_2;
    param_1[0x1a] = 0;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    param_1[0xf] = 0;
    *(undefined8 *)((longlong)param_1 + 100) = 0x2b;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
    param_1[0x12] = 0;
    *(undefined2 *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0x2b;
    *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
    return param_1;
}



undefined8 * FUN_140846af0(undefined8 *param_1)

{
    FUN_140846bb0();
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 4;
    *param_1 = &PTR_FUN_1409a30c0;
    FUN_140846a10(param_1 + 0x3c,param_1);
    param_1[0x58] = &PTR_FUN_1409a2fc0;
    param_1[0x59] = 0;
    FUN_1408717e0(param_1 + 0x5a);
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = &PTR_FUN_1409a2fc0;
    FUN_1408717e0(param_1 + 0x7a);
    return param_1;
}



undefined8 * FUN_140846bb0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a3040;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 9) = 0xc5800000;
    *(undefined4 *)(param_1 + 0xb) = 0x101;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
    *(undefined4 *)(param_1 + 0x27) = 0;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2d) = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
    *(undefined4 *)(param_1 + 0x33) = 0;
    param_1[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
    param_1[0x38] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
    *(undefined *)(param_1 + 0x3a) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xe] = 0;
    *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
    param_1[0x11] = 0;
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    param_1[0x14] = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    param_1[0x17] = 0;
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
    return param_1;
}



void FUN_140846cd0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_1409a3040;
    if (param_1[5] != 0) {
        param_1[6] = param_1[5];
        FUN_140881720(DAT_140c10f20);
        param_1[5] = 0;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 7) = 0;
    }
    lVar1 = param_1[0xc];
    while (lVar1 != 0) {
        if (param_1[0xc] != 0) {
            param_1[0xc] = *(undefined8 *)(param_1[0xc] + 0x1b8);
        }
        FUN_140881720(DAT_140c10f20);
        lVar1 = param_1[0xc];
    }
    param_1[0xc] = 0;
    return;
}



undefined8 * FUN_140846d50(undefined8 *param_1,uint param_2)

{
    FUN_140871840(param_1 + 2);
    *param_1 = &PTR_FUN_1409a2f80;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140846d90(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a2f80;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 * FUN_140846dc0(undefined8 *param_1,uint param_2)

{
    FUN_140001b70(param_1 + 2);
    *param_1 = &PTR_FUN_1409a2f80;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_140846e00(longlong param_1,uint param_2)

{
    FUN_140871840(param_1 + 0x3d0);
    *(undefined ***)(param_1 + 0x3c0) = &PTR_FUN_1409a2f80;
    FUN_140871840(param_1 + 0x2d0);
    *(undefined ***)(param_1 + 0x2c0) = &PTR_FUN_1409a2f80;
    FUN_140001b70(param_1 + 0x1f0);
    *(undefined ***)(param_1 + 0x1e0) = &PTR_FUN_1409a2f80;
    FUN_140846cd0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_140846e80(undefined8 param_1,uint param_2)

{
    FUN_140846cd0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_140846eb0(longlong *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    uint uVar3;
    char cVar4;

    uVar3 = (uint)((param_1[1] - *param_1) / 0x24);
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar4 = FUN_1408486c0(param_1,1), cVar4 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
        *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) & 0xfc;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
        puVar1[1] = 0;
        *puVar1 = 0;
        *(undefined *)((longlong)puVar1 + 0x11) = 0;
        *(undefined4 *)(puVar1 + 3) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
        *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    }
    lVar2 = param_1[1];
    param_1[1] = lVar2 + 0x24;
    return lVar2;
}



ulonglong FUN_140846f60(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    ulonglong uVar5;
    byte bVar6;
    ulonglong uVar7;
    longlong *plVar8;
    uint uVar9;
    longlong **pplVar10;
    longlong *local_res8;
    undefined8 local_res10;
    undefined local_res18 [4];
    char local_res1c;
    char local_res1d;
    longlong *local_res20;
    longlong *local_98 [2];
    longlong *local_88 [9];

    local_88[0] = (longlong *)param_1[2];
    local_88[1] = param_1 + 0x3c;
    lVar2 = local_88[0][3];
    local_res10 = *(ulonglong *)(lVar2 + 0xc0);
    plVar8 = *(longlong **)(lVar2 + 0xa0);
    local_res20 = plVar8;
    FUN_140861990(local_88[1],&local_res10,lVar2,*(undefined4 *)(param_1 + 0x3b));
    uVar9 = 0;
    local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x3b);
    uVar7 = 2;
    pplVar10 = (longlong **)(param_1 + 0x74);
    do {
        local_98[0] = (longlong *)0x0;
        (**(code **)(*plVar8 + 0x1c0))(plVar8,uVar9,local_98,*(undefined8 *)(lVar2 + 0xb0));
        if (local_98[0] != (longlong *)0x0) {
            local_res8 = (longlong *)0x0;
            iVar3 = FUN_14082faf0(&PTR_PTR_FUN_140c10f70,*(undefined4 *)(local_98[0] + 4),&local_res8);
            if (iVar3 == 1) {
                (**(code **)(*local_res8 + 0x18))(local_res8,local_res18);
                if (local_res1d == '\0') {
                    if (local_res1c == '\0') {
                        plVar4 = (longlong *)FUN_1408819f0(DAT_140c10f28,0xd8);
                        if (plVar4 == (longlong *)0x0) goto LAB_14084722b;
                        *plVar4 = (longlong)&PTR_FUN_1409a31c0;
                        plVar4[1] = 0;
                        plVar4[9] = 0;
                        *(undefined2 *)(plVar4 + 0xc) = 0;
                        plVar4[0xd] = 0;
                        plVar4[0x10] = 0;
                        *(undefined2 *)(plVar4 + 0x13) = 0;
                        plVar4[0x14] = 0;
                    }
                    else {
                        plVar4 = (longlong *)FUN_1408819f0(DAT_140c10f28,0x48);
                        if (plVar4 == (longlong *)0x0) goto LAB_14084722b;
                        plVar4[1] = 0;
                        *plVar4 = (longlong)&PTR_FUN_1409a3140;
                    }
                    if (plVar4 == (longlong *)0x0) {
                        LAB_14084722b:
                        (**(code **)(*local_res8 + 8))(local_res8,&PTR_PTR_FUN_140c10f70);
                        if (local_98[0] != (longlong *)0x0) {
                            (**(code **)(*local_98[0] + 0x10))();
                        }
                        return 2;
                    }
                    iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,local_res8,local_98,uVar9,lVar2,&local_res10)
                            ;
                    if (iVar3 == 1) {
                        uVar5 = (ulonglong)(byte)((char)uVar7 + 1);
                        *pplVar10 = plVar4;
                        local_88[uVar7] = plVar4;
                        uVar7 = uVar5;
                        if (local_98[0] != (longlong *)0x0) {
                            (**(code **)(*local_98[0] + 0x10))();
                            local_98[0] = (longlong *)0x0;
                        }
                    }
                    else {
                        (**(code **)(*plVar4 + 0x48))(plVar4);
                        uVar1 = DAT_140c10f28;
                        (**(code **)*plVar4)(plVar4,0);
                        FUN_140881720(uVar1);
                        plVar8 = local_res20;
                        if (local_98[0] != (longlong *)0x0) {
                            (**(code **)(*local_98[0] + 0x10))();
                            local_98[0] = (longlong *)0x0;
                            plVar8 = local_res20;
                        }
                    }
                    goto LAB_140847181;
                }
                (**(code **)(*local_res8 + 8))();
            }
            if (local_98[0] != (longlong *)0x0) {
                (**(code **)(*local_98[0] + 0x10))();
                local_98[0] = (longlong *)0x0;
            }
        }
        LAB_140847181:
        uVar9 = uVar9 + 1;
        pplVar10 = pplVar10 + 1;
        if (3 < uVar9) {
            *(uint *)((longlong)param_1 + 0x1dc) = local_res10._4_4_ & 0x3ffff;
            uVar5 = FUN_140871cb0(param_1 + 0x5a,local_res10._4_4_ & 0x3ffff,0);
            if ((int)uVar5 == 1) {
                uVar1 = *(undefined4 *)((longlong)param_1 + 0x1dc);
                bVar6 = (byte)uVar7;
                local_88[uVar7] = param_1 + 0x58;
                uVar5 = FUN_140871cb0(param_1 + 0x7a,uVar1,0);
                if ((int)uVar5 == 1) {
                    while (bVar6 != 0) {
                        (**(code **)(*local_88[uVar7] + 0x38))();
                        bVar6 = (char)uVar7 - 1;
                        uVar7 = (ulonglong)bVar6;
                    }
                    (**(code **)(*param_1 + 0x60))(param_1);
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            return uVar5;
        }
    } while( true );
}



undefined8 FUN_140847260(undefined8 param_1,undefined8 param_2,undefined param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1408611d0(param_2);
    if (lVar1 != 0) {
        uVar2 = FUN_1408472b0(param_1,lVar1,param_3);
        return uVar2;
    }
    return 2;
}



int FUN_1408472b0(longlong param_1,undefined8 *param_2,char param_3)

{
    longlong lVar1;
    char cVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;

    lVar1 = param_2[3];
    *(longlong *)(lVar1 + 0xb8) = param_1;
    if (param_3 == '\0') {
        LAB_14084731d:
        if (*(int *)(param_1 + 0x54) == 0) {
            LAB_140847381:
            iVar4 = FUN_140861310(param_2);
            if ((iVar4 != 1) && (iVar4 != 0x3f)) goto LAB_140847395;
        }
        else {
            cVar2 = FUN_14085efb0(lVar1,param_1 + 0x28);
            if (cVar2 == '\0') goto LAB_140847381;
            if (*(int *)(param_1 + 0x54) == 1) {
                iVar4 = 3;
                goto LAB_140847395;
            }
            if ((*(int *)(param_1 + 0x50) != 0) || (param_3 == '\0')) goto LAB_140847381;
            iVar4 = 1;
            if (*(char *)(param_1 + 0x58) != '\0') {
                FUN_1408607a0(lVar1);
            }
            *(undefined *)(param_1 + 0x58) = 0;
        }
        if (param_3 == '\0') {
            *(undefined8 **)(param_1 + 0x18) = param_2;
        }
        else {
            *(byte *)(param_1 + 0x59) = *(byte *)(lVar1 + 0x17f) >> 7;
            *(undefined8 **)(param_1 + 0x10) = param_2;
        }
    }
    else {
        uVar3 = FUN_14085eac0(lVar1,param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        if (*(int *)(param_1 + 0x38) != 0) goto LAB_14084731d;
        lVar5 = FUN_1408819f0(DAT_140c10f20,0x24);
        *(longlong *)(param_1 + 0x28) = lVar5;
        *(longlong *)(param_1 + 0x30) = lVar5;
        if (lVar5 != 0) {
            *(undefined4 *)(param_1 + 0x38) = 1;
            goto LAB_14084731d;
        }
        iVar4 = 2;
        LAB_140847395:
        FUN_1408614b0(param_2,1);
        uVar3 = DAT_140c10f28;
        (**(code **)*param_2)(param_2,0);
        FUN_140881720(uVar3,param_2);
    }
    return iVar4;
}



void FUN_1408473e0(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong **pplVar3;
    longlong lVar4;

    pplVar3 = (longlong **)(param_1 + 0x1c0);
    lVar4 = 4;
    do {
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 0x48))();
            uVar2 = DAT_140c10f28;
            plVar1 = *pplVar3;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)*plVar1)(plVar1,0);
                FUN_140881720(uVar2);
            }
            *pplVar3 = (longlong *)0x0;
        }
        pplVar3 = pplVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    FUN_140861c80(param_1);
    FUN_140872290(param_1 + 0xf0);
    return;
}



void FUN_140847480(undefined8 param_1,float param_2,longlong *param_3)

{
    float *pfVar1;
    byte bVar2;
    longlong lVar3;
    float fVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    lVar5 = param_3[5];
    if (param_3[6] == lVar5) {
        *(undefined4 *)((longlong)param_3 + 0x44) = 0;
        return;
    }
    fVar4 = *(float *)(param_3 + 8);
    fVar10 = 0.0;
    if (*(char *)((longlong)param_3 + 0x5c) == '\0') {
        do {
            fVar8 = fVar4 * *(float *)(lVar5 + 0x14) * param_2;
            if (fVar10 <= fVar8) {
                fVar10 = fVar8;
            }
            lVar5 = lVar5 + 0x24;
        } while (lVar5 != param_3[6]);
    }
    else {
        fVar8 = 0.0;
        fVar11 = 0.0;
        do {
            fVar9 = fVar4 * *(float *)(lVar5 + 0x14) * param_2;
            if (fVar10 <= fVar9) {
                fVar10 = fVar9;
            }
            if (fVar8 <= *(float *)(lVar5 + 0x18)) {
                fVar8 = *(float *)(lVar5 + 0x18);
            }
            if (fVar11 <= *(float *)(lVar5 + 0x1c)) {
                fVar11 = *(float *)(lVar5 + 0x1c);
            }
            lVar5 = lVar5 + 0x24;
        } while (lVar5 != param_3[6]);
        if (*(byte *)(param_3 + 0x3a) != 0) {
            plVar6 = param_3 + 0x1c;
            uVar7 = (ulonglong)*(byte *)(param_3 + 0x3a);
            do {
                fVar9 = fVar11;
                if (*(int *)(plVar6 + 1) == 0) {
                    fVar9 = fVar8;
                }
                fVar9 = fVar9 * fVar4 * *(float *)(plVar6 + -2) * *(float *)(*plVar6 + 0x460);
                if (fVar10 <= fVar9) {
                    fVar10 = fVar9;
                }
                plVar6 = plVar6 + 4;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
    }
    lVar5 = param_3[4];
    *(float *)((longlong)param_3 + 0x44) = fVar10;
    if (lVar5 != 0) {
        lVar3 = *(longlong *)(param_3[2] + 0x18);
        fVar4 = (float)(((uint)fVar10 & 0x7fffff) + 0x3f800000);
        bVar2 = *(byte *)(lVar3 + 0xe8);
        fVar4 = (fVar4 - 1.0) / (fVar4 + 1.0);
        fVar4 = ((fVar4 * fVar4 * 0.3333333 + 1.0) * fVar4 * 2.0 +
                 ((float)(ulonglong)((uint)fVar10 >> 0x17 & 0xff) - 127.0) * 0.6931472) * 0.4342945 *
                20.0;
        *(float *)(param_3 + 9) = fVar4;
        if ((bVar2 & 2) == 0) {
            if (*(float *)(lVar5 + 0x470) <= fVar4 && fVar4 != *(float *)(lVar5 + 0x470)) {
                *(float *)(lVar5 + 0x470) = fVar4;
            }
        }
        else {
            fVar10 = (float)(**(code **)(*param_3 + 0x70))(param_3);
            if ((float)((uint)fVar10 ^ 0x80000000) < *(float *)(lVar3 + 0xe4)) {
                fVar10 = fVar10 + fVar4;
                pfVar1 = (float *)(param_3[4] + 0x470);
                if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
                    *(float *)(param_3[4] + 0x470) = fVar10;
                    return;
                }
            }
        }
    }
    return;
}



void FUN_1408476a0(longlong param_1,char param_2,longlong param_3,longlong *param_4,uint param_5,
                   float param_6)

{
    float *pfVar1;
    undefined (*pauVar2) [16];
    undefined4 *puVar3;
    byte bVar4;
    char cVar5;
    undefined4 uVar6;
    float fVar7;
    float *pfVar8;
    float *pfVar9;
    float fVar10;
    float fVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined (*pauVar19) [16];
    longlong lVar20;
    undefined (*pauVar21) [16];
    longlong lVar22;
    longlong lVar23;
    uint uVar24;
    float *pfVar25;
    uint uVar26;
    ulonglong uVar27;
    uint uVar28;
    uint uVar29;
    byte bVar30;
    bool bVar31;
    float fVar32;
    float fVar33;
    float local_108 [52];

    lVar22 = *param_4;
    bVar4 = *(byte *)(lVar22 + 0x11);
    uVar27 = (ulonglong)bVar4;
    uVar28 = (uint)bVar4;
    if (bVar4 == 0) {
        return;
    }
    bVar30 = 0;
    if ((bVar4 & 1) == 0) {
        do {
            uVar27 = uVar27 >> 1;
            uVar28 = (uint)uVar27;
            bVar30 = bVar30 + 1;
        } while ((uVar27 & 1) == 0);
    }
    cVar5 = (&DAT_140c62074)[(ulonglong)bVar30 * 0x80];
    for (pauVar19 = *(undefined (**) [16])(param_1 + 0x60); pauVar19 != (undefined (*) [16])0x0;
         pauVar19 = *(undefined (**) [16])(pauVar19[0x1b] + 8)) {
        if (pauVar19[0x1c][0] == cVar5) goto LAB_1408477c5;
    }
    pauVar19 = (undefined (*) [16])FUN_140881960();
    if (pauVar19 != (undefined (*) [16])0x0) {
        *(undefined8 *)pauVar19[0x1b] = 0;
        pauVar19[0x1c][0] = cVar5;
        FUN_1407e4830();
        *(undefined8 *)pauVar19[0x18] = 0;
        *(undefined8 *)(pauVar19[0x18] + 8) = 0;
        *(undefined8 *)pauVar19[0x19] = 0;
        *(undefined8 *)(pauVar19[0x19] + 8) = 0;
        *(undefined8 *)pauVar19[0x1a] = 0;
        *(undefined8 *)(pauVar19[0x1a] + 8) = 0;
        if (*(longlong *)(param_1 + 0x60) == 0) {
            *(undefined (**) [16])(param_1 + 0x60) = pauVar19;
            *(undefined8 *)(pauVar19[0x1b] + 8) = 0;
        }
        else {
            *(longlong *)(pauVar19[0x1b] + 8) = *(longlong *)(param_1 + 0x60);
            *(undefined (**) [16])(param_1 + 0x60) = pauVar19;
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
    LAB_1408477c5:
    if (pauVar19 == (undefined (*) [16])0x0) {
        return;
    }
    bVar4 = *(byte *)(param_3 + 0x17e);
    *(undefined4 *)pauVar19[0x1b] = *(undefined4 *)(param_3 + 0xd4);
    if ((bVar4 & 0x40) == 0) {
        FUN_1408605d0();
    }
    lVar23 = *(longlong *)(param_3 + 0x1f0);
    if ((((((*(float *)(param_3 + 0x1c0) == *(float *)(param_3 + 0x1d0)) &&
            (*(float *)(param_3 + 0x1c4) == *(float *)(param_3 + 0x1d4))) &&
           (*(float *)(param_3 + 0x1c8) == *(float *)(param_3 + 0x1d8))) &&
          ((*(char *)(param_3 + 0x1dc) == *(char *)(param_3 + 0x1cc) &&
            ((*(byte *)(param_3 + 0x17b) & 0x10) == 0)))) &&
         (((param_6 == *(float *)(param_3 + 0x1e0) &&
            (*(float *)(lVar22 + 0x14) == *(float *)(param_3 + 0x1e4))) &&
           (((lVar23 == 0 || (*(float *)(lVar23 + 8) == *(float *)(param_3 + 0x1e8))) &&
             (*(char *)(param_1 + 0x59) == '\0')))))) && ((*(byte *)(param_3 + 8) & 0x10) == 0)) {
        return;
    }
    *(undefined4 *)(param_3 + 0x1d0) = *(undefined4 *)(param_3 + 0x1c0);
    *(undefined4 *)(param_3 + 0x1d4) = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_3 + 0x1d8) = *(undefined4 *)(param_3 + 0x1c8);
    *(undefined4 *)(param_3 + 0x1dc) = *(undefined4 *)(param_3 + 0x1cc);
    uVar6 = *(undefined4 *)(lVar22 + 0x14);
    *(float *)(param_3 + 0x1e0) = param_6;
    *(undefined4 *)(param_3 + 0x1e4) = uVar6;
    fVar32 = (*(float *)(param_3 + 0x1c0) + 100.0) * 0.005;
    if (0.0 <= fVar32) {
        if (1.0 < fVar32) {
            fVar32 = 1.0;
        }
    }
    else {
        fVar32 = 0.0;
    }
    fVar33 = (*(float *)(param_3 + 0x1c4) + 100.0) * 0.005;
    if (0.0 <= fVar33) {
        if (1.0 < fVar33) {
            fVar33 = 1.0;
        }
    }
    else {
        fVar33 = 0.0;
    }
    FUN_1408642d0(fVar32,fVar33,*(float *)(param_3 + 0x1c8) * 0.01);
    uVar29 = 0;
    uVar24 = param_5;
    if (param_5 != 0) {
        do {
            uVar29 = uVar29 + 1;
            uVar24 = uVar24 & uVar24 - 1;
        } while (uVar24 != 0);
    }
    bVar31 = (param_5 & 8) != 0;
    uVar24 = uVar29;
    if (bVar31) {
        uVar24 = uVar29 - 1;
    }
    if (lVar23 != 0) {
        uVar26 = 0;
        *(undefined4 *)(param_3 + 0x1e8) = *(undefined4 *)(lVar23 + 8);
        if (uVar24 == 0) goto LAB_140847a12;
        pfVar25 = local_108;
        do {
            fVar32 = pfVar25[1];
            fVar33 = pfVar25[2];
            fVar7 = pfVar25[3];
            uVar27 = (ulonglong)uVar26;
            uVar26 = uVar26 + 1;
            lVar20 = (uVar27 + 1) * 0x40;
            pfVar1 = (float *)(lVar20 + lVar23);
            *pfVar1 = *pfVar25;
            pfVar1[1] = fVar32;
            pfVar1[2] = fVar33;
            pfVar1[3] = fVar7;
            fVar32 = pfVar25[5];
            fVar33 = pfVar25[6];
            fVar7 = pfVar25[7];
            pfVar1 = (float *)(lVar20 + 0x10 + lVar23);
            *pfVar1 = pfVar25[4];
            pfVar1[1] = fVar32;
            pfVar1[2] = fVar33;
            pfVar1[3] = fVar7;
            pfVar25 = pfVar25 + 8;
        } while (uVar26 < uVar24);
    }
    if (uVar24 != 0) {
        pfVar25 = local_108;
        uVar27 = (ulonglong)uVar24;
        pauVar21 = pauVar19;
        do {
            fVar32 = *pfVar25;
            pfVar1 = pfVar25 + 1;
            pfVar8 = pfVar25 + 2;
            pfVar9 = pfVar25 + 3;
            fVar33 = pfVar25[4];
            fVar7 = pfVar25[5];
            fVar10 = pfVar25[6];
            fVar11 = pfVar25[7];
            pfVar25 = pfVar25 + 8;
            *pauVar21 = CONCAT412(*pfVar9 * param_6,
                                  CONCAT48(*pfVar8 * param_6,CONCAT44(*pfVar1 * param_6,fVar32 * param_6))
            );
            pauVar21[1] = CONCAT412(fVar11 * param_6,
                                    CONCAT48(fVar10 * param_6,CONCAT44(fVar7 * param_6,fVar33 * param_6)))
                    ;
            uVar27 = uVar27 - 1;
            pauVar21 = pauVar21[4];
        } while (uVar27 != 0);
    }
    LAB_140847a12:
    if (bVar31) {
        uVar27 = (ulonglong)(uVar29 - 1);
        *(undefined8 *)pauVar19[uVar27 * 4] = 0;
        *(undefined8 *)(pauVar19[uVar27 * 4] + 8) = 0;
        *(undefined8 *)pauVar19[uVar27 * 4 + 1] = 0;
        *(undefined8 *)(pauVar19[uVar27 * 4 + 1] + 8) = 0;
        *(float *)(pauVar19[uVar27 * 4 + 1] + 4) = param_6;
    }
    *(undefined4 *)pauVar19[0x18] = *(undefined4 *)(lVar22 + 0x14);
    if (param_2 != '\0') {
        *(undefined4 *)pauVar19[0x1a] = 0x3f800000;
        *(undefined4 *)pauVar19[0x19] = 0x3f800000;
    }
    do {
        do {
            uVar28 = uVar28 >> 1;
            if (uVar28 == 0) {
                return;
            }
            bVar30 = bVar30 + 1;
        } while (((uVar28 & 1) == 0) || ((&DAT_140c62074)[(ulonglong)bVar30 * 0x80] == cVar5));
        for (lVar22 = *(longlong *)(param_1 + 0x60); lVar22 != 0; lVar22 = *(longlong *)(lVar22 + 0x1b8)
                ) {
            if (*(char *)(lVar22 + 0x1c0) == cVar5) goto LAB_140847b48;
        }
        lVar22 = FUN_140881960(DAT_140c10f20,0x1d0,0x10);
        if (lVar22 != 0) {
            *(char *)(lVar22 + 0x1c0) = cVar5;
            *(undefined8 *)(lVar22 + 0x1b0) = 0;
            FUN_1407e4830(lVar22,0,0x180);
            *(undefined8 *)(lVar22 + 0x180) = 0;
            *(undefined8 *)(lVar22 + 0x188) = 0;
            *(undefined8 *)(lVar22 + 400) = 0;
            *(undefined8 *)(lVar22 + 0x198) = 0;
            *(undefined8 *)(lVar22 + 0x1a0) = 0;
            *(undefined8 *)(lVar22 + 0x1a8) = 0;
            if (*(longlong *)(param_1 + 0x60) == 0) {
                *(longlong *)(param_1 + 0x60) = lVar22;
                *(undefined8 *)(lVar22 + 0x1b8) = 0;
            }
            else {
                *(longlong *)(lVar22 + 0x1b8) = *(longlong *)(param_1 + 0x60);
                *(longlong *)(param_1 + 0x60) = lVar22;
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        }
        LAB_140847b48:
        if (lVar22 == 0) {
            return;
        }
        uVar27 = 0;
        do {
            uVar24 = (int)uVar27 + 1;
            lVar23 = uVar27 * 0x40;
            pauVar21 = pauVar19[uVar27 * 4 + 2];
            uVar6 = *(undefined4 *)(*pauVar21 + 4);
            uVar12 = *(undefined4 *)(*pauVar21 + 8);
            uVar13 = *(undefined4 *)(*pauVar21 + 0xc);
            pauVar2 = pauVar19[uVar27 * 4 + 3];
            uVar14 = *(undefined4 *)*pauVar2;
            uVar15 = *(undefined4 *)(*pauVar2 + 4);
            uVar16 = *(undefined4 *)(*pauVar2 + 8);
            uVar17 = *(undefined4 *)(*pauVar2 + 0xc);
            puVar3 = (undefined4 *)(lVar23 + 0x20 + lVar22);
            *puVar3 = *(undefined4 *)*pauVar21;
            puVar3[1] = uVar6;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            puVar3 = (undefined4 *)(lVar23 + 0x30 + lVar22);
            *puVar3 = uVar14;
            puVar3[1] = uVar15;
            puVar3[2] = uVar16;
            puVar3[3] = uVar17;
            pauVar21 = pauVar19[uVar27 * 4];
            uVar6 = *(undefined4 *)(*pauVar21 + 4);
            uVar12 = *(undefined4 *)(*pauVar21 + 8);
            uVar13 = *(undefined4 *)(*pauVar21 + 0xc);
            pauVar2 = pauVar19[uVar27 * 4 + 1];
            uVar14 = *(undefined4 *)*pauVar2;
            uVar15 = *(undefined4 *)(*pauVar2 + 4);
            uVar16 = *(undefined4 *)(*pauVar2 + 8);
            uVar17 = *(undefined4 *)(*pauVar2 + 0xc);
            puVar3 = (undefined4 *)(lVar23 + lVar22);
            *puVar3 = *(undefined4 *)*pauVar21;
            puVar3[1] = uVar6;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            puVar3 = (undefined4 *)(lVar23 + 0x10 + lVar22);
            *puVar3 = uVar14;
            puVar3[1] = uVar15;
            puVar3[2] = uVar16;
            puVar3[3] = uVar17;
            uVar27 = (ulonglong)uVar24;
        } while (uVar24 < uVar29);
        uVar6 = *(undefined4 *)(lVar22 + 0x184);
        uVar12 = *(undefined4 *)(lVar22 + 0x188);
        uVar13 = *(undefined4 *)(lVar22 + 0x18c);
        uVar15 = *(undefined4 *)(lVar22 + 400);
        uVar16 = *(undefined4 *)(lVar22 + 0x194);
        uVar17 = *(undefined4 *)(lVar22 + 0x198);
        uVar18 = *(undefined4 *)(lVar22 + 0x19c);
        *(undefined4 *)(lVar22 + 0x1b0) = *(undefined4 *)pauVar19[0x1b];
        *(undefined4 *)(lVar22 + 0x1b4) = *(undefined4 *)(pauVar19[0x1b] + 4);
        *(undefined4 *)pauVar19[0x18] = *(undefined4 *)(lVar22 + 0x180);
        *(undefined4 *)(pauVar19[0x18] + 4) = uVar6;
        *(undefined4 *)(pauVar19[0x18] + 8) = uVar12;
        *(undefined4 *)(pauVar19[0x18] + 0xc) = uVar13;
        uVar6 = *(undefined4 *)(lVar22 + 0x1a0);
        uVar12 = *(undefined4 *)(lVar22 + 0x1a4);
        uVar13 = *(undefined4 *)(lVar22 + 0x1a8);
        uVar14 = *(undefined4 *)(lVar22 + 0x1ac);
        *(undefined4 *)pauVar19[0x19] = uVar15;
        *(undefined4 *)(pauVar19[0x19] + 4) = uVar16;
        *(undefined4 *)(pauVar19[0x19] + 8) = uVar17;
        *(undefined4 *)(pauVar19[0x19] + 0xc) = uVar18;
        *(undefined4 *)pauVar19[0x1a] = uVar6;
        *(undefined4 *)(pauVar19[0x1a] + 4) = uVar12;
        *(undefined4 *)(pauVar19[0x1a] + 8) = uVar13;
        *(undefined4 *)(pauVar19[0x1a] + 0xc) = uVar14;
    } while( true );
}



undefined8 FUN_140847c10(longlong param_1)

{
    longlong *plVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    byte bVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
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

    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
    if ((*(byte *)((longlong)plVar1 + 0x17c) & 0x20) == 0) {
        (**(code **)(*plVar1 + 0x78))(plVar1);
    }
    if ((*(byte *)((longlong)plVar1 + 0x17f) & 0x10) == 0) {
        cVar2 = FUN_14085ef50();
        *(char *)(param_1 + 0x5c) = cVar2;
        fVar7 = (float)FUN_14085eb50(plVar1);
        fVar10 = 2.786635e+07;
        fVar9 = 0.0;
        fVar7 = (fVar7 + *(float *)(plVar1 + 0x19)) * 0.05;
        if (-37.0 <= fVar7) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar5 = (uint)(longlong)(DAT_140c61bf8 * fVar7 + 1.065353e+09);
            fVar7 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
            fVar7 = ((fVar7 * 0.3251898 + 0.02080577) * fVar7 + 0.6530434) * (float)(uVar5 & 0xff800000);
        }
        else {
            fVar7 = 0.0;
        }
        bVar6 = *(byte *)((longlong)plVar1 + 0x17b);
        *(float *)(param_1 + 0x40) = fVar7 * *(float *)((longlong)plVar1 + 0xcc);
        if ((bVar6 & 3) == 0) {
            if ((*(longlong *)(param_1 + 0x30) == *(longlong *)(param_1 + 0x28)) &&
                (lVar4 = FUN_140846eb0(param_1 + 0x28), lVar4 == 0)) {
                return 0;
            }
            lVar4 = plVar1[0x16];
            *(undefined *)(*(longlong *)(param_1 + 0x28) + 0x11) = *(undefined *)(lVar4 + 0x12);
            if (cVar2 == '\0') {
                fVar7 = 1.0;
            }
            else {
                fVar7 = *(float *)(lVar4 + 0x60);
            }
            fVar8 = (float)FUN_14085ea60(plVar1);
            if (-37.0 <= fVar8 * 0.05) {
                if ((DAT_140c61bfc & 1) == 0) {
                    DAT_140c61bfc = DAT_140c61bfc | 1;
                    DAT_140c61bf8 = fVar10;
                }
                uVar5 = (uint)(longlong)(fVar8 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
                fVar9 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
                fVar9 = ((fVar9 * 0.3251898 + 0.02080577) * fVar9 + 0.6530434) * (float)(uVar5 & 0xff800000)
                        ;
            }
            *(float *)(*(longlong *)(param_1 + 0x28) + 0x14) = fVar9 * fVar7;
        }
        else {
            bVar6 = bVar6 >> 2 & 3;
            iVar3 = FUN_14085d800(plVar1,bVar6,param_1 + 0x28);
            if (iVar3 != 0) {
                FUN_14084ab10(bVar6,cVar2,plVar1,param_1 + 0x28);
            }
        }
        if (cVar2 != '\0') {
            FUN_14085e450(plVar1,&local_a8);
            FUN_140831430(param_1 + 0x70,&local_a8,param_1 + 0xd0,*(undefined *)(param_1 + 0x5b),
                          param_1 + 0x1d0);
            *(undefined8 *)(param_1 + 0x70) = local_a8;
            *(undefined8 *)(param_1 + 0x78) = local_a0;
            *(undefined8 *)(param_1 + 0x80) = local_98;
            *(undefined8 *)(param_1 + 0x88) = local_90;
            *(undefined8 *)(param_1 + 0x90) = local_88;
            *(undefined8 *)(param_1 + 0x98) = local_80;
            *(undefined8 *)(param_1 + 0xa0) = local_78;
            *(undefined8 *)(param_1 + 0xa8) = local_70;
            *(undefined8 *)(param_1 + 0xb0) = local_68;
            *(undefined8 *)(param_1 + 0xb8) = local_60;
            *(undefined8 *)(param_1 + 0xc0) = local_58;
            *(undefined8 *)(param_1 + 200) = local_50;
            *(undefined *)(param_1 + 0x5b) = 1;
            return 1;
        }
    }
    else {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
        FUN_1408606a0(plVar1);
    }
    return 0;
}



void FUN_140847fb0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;

    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
    if ((*(uint *)(plVar1 + 1) & 0x10000) != 0) {
        FUN_140845660(DAT_140c61b60,*(undefined4 *)(plVar1 + 0xf),param_2 + 0x28);
    }
    uVar2 = (**(code **)(*plVar1 + 0x68))();
    if (uVar2 != 0xffffffff) {
        if (uVar2 < *(ushort *)(param_2 + 0x12)) {
            *(short *)(param_2 + 0x12) = (short)uVar2;
        }
        *(undefined *)(param_2 + 0x3d) = 1;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar3 = FUN_140861310();
        if (iVar3 == 2) {
            *(undefined4 *)(param_2 + 0x38) = 2;
        }
    }
    return;
}



undefined8 FUN_140848030(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;

    iVar1 = FUN_140861310();
    if (iVar1 == 0x3f) {
        if ((*(int *)(param_2 + 0x198) < 0) &&
            ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x20) & 2) == 0)) {
            *(undefined *)(param_1 + 0x5d) = 1;
        }
    }
    else {
        if (iVar1 != 1) {
            return 2;
        }
        if ((*(byte *)(param_2 + 0x17e) & 0x80) == 0) {
            uVar2 = 0x400;
        }
        else {
            uVar2 = (uint)(0x5dc00 / (ulonglong)DAT_140c110b4) & 0xffff;
        }
        if (*(int *)(param_2 + 0x198) < (int)((DAT_140c61b20._4_4_ + 1) * uVar2)) {
            if ((*(int *)(param_2 + 0x198) < 0) &&
                ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x20) & 2) == 0)) {
                *(undefined *)(param_1 + 0x5d) = 1;
            }
            return 1;
        }
    }
    return 0x3f;
}



// WARNING: Removing unreachable block (ram,0x000140848505)
// WARNING: Removing unreachable block (ram,0x00014084850d)
// WARNING: Removing unreachable block (ram,0x000140848520)
// WARNING: Removing unreachable block (ram,0x000140848523)
// WARNING: Removing unreachable block (ram,0x000140848538)
// WARNING: Removing unreachable block (ram,0x000140848559)
// WARNING: Removing unreachable block (ram,0x00014084855f)
// WARNING: Removing unreachable block (ram,0x000140848565)

void FUN_140848120(longlong param_1,undefined param_2,longlong param_3,uint param_4,char *param_5,
                   undefined *param_6)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;
    float *pfVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    uint uVar9;
    uint uVar10;
    longlong lVar11;
    ulonglong uVar12;
    uint uVar13;
    char cVar14;
    uint uVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    ulonglong in_stack_ffffffffffffffb0;

    lVar4 = *(longlong *)(param_1 + 0x20);
    fVar20 = *(float *)(param_1 + 0x40);
    fVar19 = *(float *)(param_1 + 0x44);
    fVar17 = 0.0;
    if (lVar4 != 0) {
        fVar18 = *(float *)(lVar4 + 0x484) + *(float *)(lVar4 + 0x480);
        fVar16 = *(float *)(param_1 + 0x48) - fVar18;
        if (0.0 < fVar16) {
            fVar18 = fVar16 * *(float *)(lVar4 + 0x488) + fVar18;
        }
        fVar16 = *(float *)(lVar4 + 0x478);
        if (*(float *)(lVar4 + 0x478) < fVar18) {
            fVar16 = fVar18;
        }
        if (-37.0 <= fVar16 * -0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar9 = (uint)(longlong)(fVar16 * -0.05 * DAT_140c61bf8 + 1.065353e+09);
            fVar16 = (float)((uVar9 & 0x7fffff) + 0x3f800000);
            fVar16 = ((fVar16 * 0.3251898 + 0.02080577) * fVar16 + 0.6530434) *
                     (float)(uVar9 & 0xff800000);
        }
        else {
            fVar16 = 0.0;
        }
        fVar16 = fVar16 * *(float *)(*(longlong *)(param_1 + 0x20) + 0x460);
        fVar20 = fVar20 * fVar16;
        fVar19 = fVar19 * fVar16;
        *(float *)(param_1 + 0x40) = fVar20;
        *(float *)(param_1 + 0x44) = fVar19;
    }
    if ((fVar19 <= DAT_140c10f58) ||
        ((int)((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x24) == 0)) {
        cVar14 = '\x01';
    }
    else {
        cVar14 = '\0';
    }
    fVar19 = *(float *)(param_3 + 0xdc) * 0.05;
    if (-37.0 <= fVar19) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar9 = (uint)(longlong)(fVar19 * DAT_140c61bf8 + 1.065353e+09);
        fVar19 = (float)((uVar9 & 0x7fffff) + 0x3f800000);
        fVar17 = ((fVar19 * 0.3251898 + 0.02080577) * fVar19 + 0.6530434) * (float)(uVar9 & 0xff800000);
    }
    if ((*(byte *)(param_3 + 0xe0) & 1) != 0) {
        pfVar5 = *(float **)(*(longlong *)(param_1 + 0x10) + 0x10);
        if (pfVar5 == (float *)0x0) {
            fVar19 = 1.0;
        }
        else {
            fVar19 = *pfVar5;
        }
        fVar17 = fVar19 * fVar17;
    }
    if ((cVar14 == '\0') ||
        ((*(char *)(param_1 + 0x59) == '\0' && (*(char *)(param_1 + 0x5a) != '\0')))) {
        uVar13 = 0;
        *param_6 = 1;
        uVar9 = param_4;
        if (param_4 != 0) {
            do {
                uVar13 = uVar13 + 1;
                uVar9 = uVar9 & uVar9 - 1;
            } while (uVar9 != 0);
        }
        for (lVar4 = *(longlong *)(param_1 + 0x60); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x1b8)) {
            uVar12 = 0;
            do {
                uVar9 = (int)uVar12 + 1;
                lVar11 = uVar12 * 0x40;
                puVar1 = (undefined4 *)(lVar11 + lVar4);
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar8 = puVar1[3];
                puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
                puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar4);
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar8 = puVar1[3];
                puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
                uVar12 = (ulonglong)uVar9;
            } while (uVar9 < uVar13);
            *(undefined4 *)(lVar4 + 0x184) = *(undefined4 *)(lVar4 + 0x180);
            *(undefined4 *)(lVar4 + 0x194) = *(undefined4 *)(lVar4 + 400);
            *(undefined4 *)(lVar4 + 0x1a4) = *(undefined4 *)(lVar4 + 0x1a0);
        }
        if (cVar14 == '\0') {
            if ((*(byte *)(param_3 + 0x17b) & 3) == 0) {
                FUN_1408476a0(param_1,param_2,param_3,param_1 + 0x28,param_4,
                              in_stack_ffffffffffffffb0 & 0xffffffff00000000 |
                              (ulonglong)(uint)(fVar20 * fVar17));
            }
            else {
                FUN_140849810(param_2);
            }
            uVar9 = *(uint *)(param_1 + 0x68);
            *(byte *)(param_3 + 0x17b) = *(byte *)(param_3 + 0x17b) & 0xef;
            if (uVar9 == 0) {
                *param_6 = 0;
                cVar14 = '\x01';
            }
            else {
                uVar15 = 0;
                lVar4 = *(longlong *)(param_1 + 0x60);
                if ((*(byte *)(param_3 + 0x17e) & 0x40) == 0) {
                    FUN_1408605d0(param_3);
                }
                if (*(longlong *)(param_3 + 0x1f0) != 0) {
                    FUN_140870330();
                    cVar14 = '\0';
                }
                do {
                    if ((*(byte *)(param_3 + 8) & 0x10) != 0) {
                        FUN_14084aa80();
                    }
                    if (*(char *)(param_1 + 0x59) == '\0') {
                        if (*(char *)(param_1 + 0x5a) == '\0') {
                            uVar12 = 0;
                            do {
                                uVar10 = (int)uVar12 + 1;
                                lVar11 = uVar12 * 0x40;
                                puVar1 = (undefined4 *)(lVar11 + lVar4);
                                uVar6 = puVar1[1];
                                uVar7 = puVar1[2];
                                uVar8 = puVar1[3];
                                puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar4);
                                *puVar2 = *puVar1;
                                puVar2[1] = uVar6;
                                puVar2[2] = uVar7;
                                puVar2[3] = uVar8;
                                puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar4);
                                uVar6 = puVar1[1];
                                uVar7 = puVar1[2];
                                uVar8 = puVar1[3];
                                puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar4);
                                *puVar2 = *puVar1;
                                puVar2[1] = uVar6;
                                puVar2[2] = uVar7;
                                puVar2[3] = uVar8;
                                uVar12 = (ulonglong)uVar10;
                            } while (uVar10 < uVar13);
                            *(undefined4 *)(lVar4 + 0x184) = *(undefined4 *)(lVar4 + 0x180);
                            *(undefined4 *)(lVar4 + 0x194) = *(undefined4 *)(lVar4 + 400);
                            *(undefined4 *)(lVar4 + 0x1a4) = *(undefined4 *)(lVar4 + 0x1a0);
                        }
                    }
                    else {
                        uVar12 = 0;
                        do {
                            uVar10 = (int)uVar12 + 1;
                            *(undefined (*) [16])(uVar12 * 0x40 + 0x20 + lVar4) = ZEXT816(0);
                            *(undefined (*) [16])(uVar12 * 0x40 + 0x30 + lVar4) = ZEXT816(0);
                            uVar12 = (ulonglong)uVar10;
                        } while (uVar10 < uVar13);
                        *(undefined4 *)(lVar4 + 0x184) = 0;
                        *(undefined4 *)(lVar4 + 0x1a4) = 0;
                        *(undefined4 *)(lVar4 + 0x194) = 0;
                    }
                    uVar15 = uVar15 + 1;
                } while (uVar15 < uVar9);
            }
        }
        else {
            for (lVar4 = *(longlong *)(param_1 + 0x60); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x1b8))
            {
                uVar12 = 0;
                do {
                    uVar9 = (int)uVar12 + 1;
                    *(undefined (*) [16])(uVar12 * 0x40 + lVar4) = ZEXT816(0);
                    *(undefined (*) [16])(uVar12 * 0x40 + 0x10 + lVar4) = ZEXT816(0);
                    uVar12 = (ulonglong)uVar9;
                } while (uVar9 < uVar13);
                *(undefined4 *)(lVar4 + 0x180) = 0;
                *(undefined4 *)(lVar4 + 400) = 0;
                *(undefined4 *)(lVar4 + 0x1a0) = 0;
            }
        }
        *param_5 = cVar14;
    }
    else {
        bVar3 = *(byte *)(param_3 + 0x17e);
        *(undefined *)(param_1 + 0x59) = 1;
        *param_6 = 0;
        *param_5 = cVar14;
        if ((bVar3 & 0x40) == 0) {
            FUN_1408605d0(param_3);
        }
        if (*(longlong *)(param_3 + 0x1f0) != 0) {
            FUN_1408708c0();
            return;
        }
    }
    return;
}



undefined8 FUN_1408486c0(longlong *param_1,int param_2)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    ulonglong uVar8;

    iVar2 = *(int *)(param_1 + 2);
    lVar5 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar2 + param_2) * 0x24);
    if (lVar5 != 0) {
        uVar8 = (param_1[1] - *param_1) / 0x24;
        uVar6 = uVar8 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar8 != 0) {
                lVar4 = -lVar5;
                puVar7 = (undefined4 *)(lVar5 + 4);
                uVar8 = uVar6;
                do {
                    puVar1 = puVar7 + -1;
                    if (puVar1 != (undefined4 *)0x0) {
                        *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) & 0xfc;
                        *(undefined8 *)(puVar7 + 1) = 0;
                        *puVar1 = 0;
                        *puVar7 = 0;
                        *(undefined *)((longlong)puVar7 + 0xd) = 0;
                        puVar7[4] = 0x3f800000;
                        puVar7[5] = 0x3f800000;
                        puVar7[6] = 0x3f800000;
                        puVar7[7] = 0x3f800000;
                    }
                    lVar3 = *param_1;
                    *puVar1 = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + -4);
                    *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4);
                    puVar7[1] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 4);
                    puVar7[2] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 8);
                    puVar7[3] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 0xc);
                    puVar7[4] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 0x10);
                    puVar7[5] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 0x14);
                    puVar7[6] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 0x18);
                    puVar7[7] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 0x1c);
                    uVar8 = uVar8 - 1;
                    puVar7 = puVar7 + 9;
                } while (uVar8 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *(int *)(param_1 + 2) = iVar2 + param_2;
        *param_1 = lVar5;
        param_1[1] = lVar5 + uVar6 * 0x24;
        return CONCAT71((int7)(uVar6 * 9 >> 8),1);
    }
    return 0;
}



void FUN_140848840(longlong param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0x1d8) = param_2;
    return;
}



undefined8 FUN_140848850(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    char cVar2;
    uint uVar3;
    longlong *plVar4;

    uVar3 = 0;
    plVar4 = (longlong *)(param_1 + 0x3a0);
    do {
        if ((*plVar4 != 0) && (lVar1 = *(longlong *)(*plVar4 + 0x18), lVar1 != 0)) {
            cVar2 = FUN_1408628b0(lVar1,param_2);
            if (cVar2 != '\0') {
                return 1;
            }
        }
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 1;
    } while (uVar3 < 4);
    return 0;
}



undefined8 FUN_1408488c0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    char cVar2;
    undefined8 uVar3;
    longlong **pplVar4;
    uint uVar5;

    uVar5 = 0;
    pplVar4 = (longlong **)(param_1 + 0x3a0);
    do {
        plVar1 = *pplVar4;
        if ((plVar1 != (longlong *)0x0) && (plVar1[3] != 0)) {
            uVar3 = (**(code **)(*plVar1 + 0x70))(plVar1);
            cVar2 = FUN_1408628e0(plVar1[3],param_2,uVar3);
            if (cVar2 != '\0') {
                return 1;
            }
        }
        uVar5 = uVar5 + 1;
        pplVar4 = pplVar4 + 1;
    } while (uVar5 < 4);
    return 0;
}



void FUN_140848940(longlong *param_1)

{
    if (*(int *)((longlong)param_1 + 0x4c) != 1) {
        // WARNING: Could not recover jumptable at 0x000140848957. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x10))();
        return;
    }
    FUN_140861340(param_1[2]);
    *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
    return;
}



void FUN_140848980(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *local_18;
    undefined local_10;

    if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
        lVar2 = *(longlong *)(param_1 + 0x3a0 + (ulonglong)param_2 * 8);
        plVar3 = *(longlong **)(lVar1 + 0xa0);
        if (lVar2 != 0) {
            local_18 = (longlong *)0x0;
            (**(code **)(*plVar3 + 0x1c0))(plVar3,param_2,&local_18,*(undefined8 *)(lVar1 + 0xb0));
            *(undefined *)(lVar2 + 0x2d) = local_10;
            if (local_18 != (longlong *)0x0) {
                (**(code **)(*local_18 + 0x10))();
            }
        }
    }
    return;
}



void FUN_140848a20(longlong param_1)

{
    // WARNING: Could not recover jumptable at 0x000140848a2a. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0x10))();
    return;
}



void FUN_140848a40(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1408614b0();
        uVar2 = DAT_140c10f28;
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
            FUN_140881720(uVar2,puVar1);
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_1408473e0(param_1 + 0x1e0);
    FUN_140872290(param_1 + 0x3d0);
    *(undefined *)(param_1 + 0x58) = 1;
    return;
}



void FUN_140848ac0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x1d0) = 0x42ca0000;
        return;
    }
    uRam00000000000001d0 = 0x42ca0000;
    return;
}



void FUN_140848af0(longlong *param_1)

{
    undefined4 uVar1;

    if (*(int *)((longlong)param_1 + 0x4c) != 1) {
        if (*(int *)((longlong)param_1 + 0x4c) != 3) {
            // WARNING: Could not recover jumptable at 0x000140848b10. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x10))(param_1);
            return;
        }
        uVar1 = FUN_140872580(param_1 + 0x3e);
        FUN_140861370(uVar1,uVar1,param_1[2]);
        *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    }
    return;
}



void FUN_140848b60(longlong *param_1)

{
    longlong lVar1;
    int iVar2;

    if ((*(int *)(param_1 + 10) == 0) && (*(int *)((longlong)param_1 + 0x54) == 2)) {
        if ((param_1[2] != 0) && (lVar1 = *(longlong *)(param_1[2] + 0x18), lVar1 != 0)) {
            *(undefined4 *)(lVar1 + 0x174) = 0;
            *(byte *)(lVar1 + 0x17f) = *(byte *)(lVar1 + 0x17f) & 0xf1;
            return;
        }
    }
    else if ((param_1[2] != 0) && ((*(byte *)(param_1[2] + 0x20) & 1) != 0)) {
        (**(code **)(param_1[0x58] + 0x10))(param_1 + 0x58);
        iVar2 = (**(code **)(param_1[0x58] + 0x30))(param_1 + 0x58);
        if (iVar2 != 1) {
            // WARNING: Could not recover jumptable at 0x000140848be9. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0x10))(param_1);
            return;
        }
    }
    return;
}



void FUN_140848c80(longlong *param_1)

{
    if (*(int *)((longlong)param_1 + 0x4c) == 0) {
        FUN_1408613d0(param_1[2]);
        *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    }
    else if (*(int *)((longlong)param_1 + 0x4c) != 2) {
        // WARNING: Could not recover jumptable at 0x000140848c9d. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x10))();
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_140848cc0(longlong *param_1,longlong param_2)

{
    longlong *plVar1;
    undefined uVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    byte bVar9;
    undefined8 uVar10;
    float fVar11;
    uint local_res8 [2];
    char local_res18 [8];

    uVar6 = *(undefined4 *)((longlong)param_1 + 0x1dc);
    plVar3 = *(longlong **)(param_1[2] + 0x18);
    iVar5 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if ((iVar5 != -1) && (*(undefined *)(param_2 + 0x3d) = 1, iVar5 == 0)) {
        uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
        return uVar7 & 0xffffffffffffff00;
    }
    *(undefined4 *)(param_2 + 8) = uVar6;
    uVar2 = *(undefined *)((longlong)param_1 + 0x5c);
    *(undefined *)(param_2 + 0x3e) = uVar2;
    FUN_140848120(param_1,uVar2,plVar3,uVar6,local_res18,local_res8);
    if ((local_res18[0] != '\0') || ((*(byte *)((longlong)plVar3 + 0x17e) & 0x80) != 0)) {
        if ((*(byte *)((longlong)plVar3 + 0x17d) & 0x10) == 0) {
            if ((*(byte *)((longlong)plVar3 + 0x17d) & 0x40) != 0) {
                *(undefined *)(param_2 + 0x3c) = 1;
            }
        }
        else {
            *(undefined *)(param_2 + 0x3d) = 1;
        }
    }
    bVar4 = true;
    *(char *)(param_2 + 0x3f) = (char)local_res8[0];
    if ((char)local_res8[0] == '\0') {
        if (*(int *)((longlong)param_1 + 0x54) == 2) {
            bVar4 = false;
            if (*(char *)(param_1 + 0xb) != '\0') {
                plVar1 = param_1 + 0x58;
                (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 10));
                if (*(int *)(param_1 + 10) != 2) {
                    (**(code **)(*plVar1 + 0x10))();
                }
            }
            if (*(int *)(param_1 + 10) == 1) {
                if (*(int *)(plVar3 + 0x33) < (int)(uint)*(ushort *)(param_2 + 0x10)) {
                    local_res8[0] = (uint)*(ushort *)(param_2 + 0x10);
                    uVar6 = (**(code **)(param_1[0x58] + 0x18))(param_1 + 0x58,local_res8);
                    *(undefined4 *)(param_2 + 0x38) = uVar6;
                }
                if (-1 < *(int *)(plVar3 + 0x33)) {
                    *(uint *)(plVar3 + 0x33) = *(int *)(plVar3 + 0x33) - (uint)*(ushort *)(param_2 + 0x10);
                }
            }
        }
        else if (*(int *)((longlong)param_1 + 0x54) == 1) {
            (**(code **)(*param_1 + 0x10))();
            bVar4 = false;
        }
        else {
            local_res8[0]._0_1_ = '\x01';
        }
    }
    else {
        for (lVar8 = param_1[0xc]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x1b8)) {
            if (*(char *)(lVar8 + 0x1c0) == '\0') goto LAB_140848e39;
        }
        lVar8 = FUN_140881960(DAT_140c10f20,0x1d0,0x10);
        if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x1b0) = 0;
            *(undefined *)(lVar8 + 0x1c0) = 0;
            FUN_1407e4830(lVar8,0,0x180);
            *(undefined8 *)(lVar8 + 0x180) = 0;
            *(undefined8 *)(lVar8 + 0x188) = 0;
            *(undefined8 *)(lVar8 + 400) = 0;
            *(undefined8 *)(lVar8 + 0x198) = 0;
            *(undefined8 *)(lVar8 + 0x1a0) = 0;
            *(undefined8 *)(lVar8 + 0x1a8) = 0;
            if (param_1[0xc] == 0) {
                param_1[0xc] = lVar8;
                *(undefined8 *)(lVar8 + 0x1b8) = 0;
            }
            else {
                *(longlong *)(lVar8 + 0x1b8) = param_1[0xc];
                param_1[0xc] = lVar8;
            }
            *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
        }
        LAB_140848e39:
        if (lVar8 != 0) {
            fVar11 = *(float *)(lVar8 + 0x1b0);
            if (0.0 <= fVar11) {
                if (100.0 < fVar11) {
                    fVar11 = 100.0;
                }
            }
            else {
                fVar11 = 0.0;
            }
            *(byte *)((longlong)param_1 + 0x39e) =
                    *(byte *)((longlong)param_1 + 0x39e) | fVar11 != *(float *)((longlong)param_1 + 0x394);
            *(float *)((longlong)param_1 + 0x394) = fVar11;
            fVar11 = *(float *)(lVar8 + 0x1b4);
            if (*(float *)(lVar8 + 0x1b4) <= *(float *)(plVar3 + 0x1e)) {
                fVar11 = *(float *)(plVar3 + 0x1e);
            }
            if (0.0 <= fVar11) {
                if (100.0 < fVar11) {
                    fVar11 = 100.0;
                }
            }
            else {
                fVar11 = 0.0;
            }
            *(byte *)((longlong)param_1 + 0x49e) =
                    *(byte *)((longlong)param_1 + 0x49e) | fVar11 != *(float *)((longlong)param_1 + 0x494);
            *(float *)((longlong)param_1 + 0x494) = fVar11;
        }
        if (((*(char *)(param_1 + 0xb) == '\0') || ((*(byte *)(param_1[2] + 0x20) & 1) == 0)) &&
            (*(int *)((longlong)param_1 + 0x54) == 2)) {
            if ((*(byte *)(param_1[2] + 0x20) & 1) == 0) {
                iVar5 = FUN_140861310();
                if (iVar5 == 0x3f) {
                    local_res8[0]._0_1_ = '\0';
                    bVar4 = false;
                }
                else if (iVar5 != 1) {
                    (**(code **)(*param_1 + 0x10))();
                    local_res8[0]._0_1_ = '\0';
                    bVar4 = false;
                }
            }
            else {
                uVar10 = 0;
                iVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(param_1 + 10));
                if (iVar5 == 1) {
                    uVar10 = 1;
                }
                else if (iVar5 == 2) {
                    uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
                    return uVar7 & 0xffffffffffffff00;
                }
                iVar5 = (**(code **)(param_1[0x58] + 0x28))
                        (param_1 + 0x58,*(undefined4 *)(param_1 + 10),uVar10);
                if (iVar5 != 1) {
                    uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
                    return uVar7 & 0xffffffffffffff00;
                }
            }
        }
    }
    if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
        iVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(param_1 + 10));
        if (iVar5 == 1) {
            (**(code **)(*param_1 + 0x30))();
            *(undefined *)((longlong)param_1 + 0x59) = 1;
        }
        else if (iVar5 == 2) {
            (**(code **)(*param_1 + 0x10))();
            bVar4 = false;
        }
        *(undefined *)((longlong)param_1 + 0x5d) = 0;
    }
    if ((bVar4) && (*(int *)(plVar3 + 0x33) < (int)(uint)*(ushort *)(param_2 + 0x10))) {
        bVar9 = 1;
    }
    else {
        bVar9 = 0;
    }
    if (-1 < *(int *)(plVar3 + 0x33)) {
        *(uint *)(plVar3 + 0x33) = *(int *)(plVar3 + 0x33) - (uint)*(ushort *)(param_2 + 0x10);
    }
    if (*(char *)(param_1 + 0xb) == '\0') {
        if ((char)local_res8[0] != '\0') {
            FUN_14085e190(plVar3,1);
        }
    }
    else if ((char)local_res8[0] == '\0') {
        FUN_1408607a0(plVar3);
    }
    *(char *)(param_1 + 0xb) = (char)local_res8[0];
    if ((bVar9 != 0) && (*(char *)((longlong)param_1 + 0x59) = local_res18[0], param_1[0x56] == 0)) {
        iVar5 = FUN_140846f60(param_1);
        if (iVar5 == 1) {
            if ((*(byte *)((longlong)plVar3 + 0x17c) & 0x20) == 0) {
                (**(code **)(*plVar3 + 0x78))(plVar3);
            }
            *(undefined4 *)(plVar3 + 0x3a) = 0x42ca0000;
            *(undefined4 *)(param_2 + 8) = *(undefined4 *)((longlong)param_1 + 0x1dc);
            FUN_140848120(param_1,*(undefined *)(param_2 + 0x3e),plVar3,
                          *(undefined4 *)((longlong)param_1 + 0x1dc),local_res18,local_res8);
        }
        else {
            (**(code **)(*param_1 + 0x10))(param_1);
            bVar9 = 0;
        }
    }
    *(undefined *)((longlong)param_1 + 0x5a) = 1;
    return (ulonglong)bVar9;
}



void FUN_140849140(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1408614a0();
    }
    *(undefined4 *)(param_1 + 0x4c) = 2;
    return;
}



void FUN_140849170(longlong *param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    int iVar5;

    plVar1 = (longlong *)param_1[2];
    if ((plVar1 == (longlong *)0x0) || (param_2 != plVar1[3])) {
        lVar2 = param_1[3];
        if ((lVar2 != 0) && (param_2 == *(longlong *)(lVar2 + 0x18))) {
            FUN_1408614b0(lVar2,0);
            uVar4 = DAT_140c10f28;
            puVar3 = (undefined8 *)param_1[3];
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,0);
                FUN_140881720(uVar4,puVar3);
            }
            param_1[3] = 0;
        }
        return;
    }
    if (((*(byte *)(plVar1 + 4) & 1) != 0) && (iVar5 = (**(code **)(*plVar1 + 0x60))(), iVar5 == 1)) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001408491a4. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
}



void FUN_140849210(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined4 uVar3;

    FUN_1408614b0(*(undefined8 *)(param_1 + 0x10),0);
    uVar3 = DAT_140c10f28;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_140881720(uVar3,puVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_1408613d0();
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x10) =
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    }
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3a8) + 0x10) =
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    }
    if (*(longlong *)(param_1 + 0x3b0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3b0) + 0x10) =
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    }
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3b8) + 0x10) =
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    }
    return;
}



void FUN_1408492e0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    FUN_140848a40(param_1,0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1408614b0(*(longlong *)(param_1 + 0x18),0);
        uVar2 = DAT_140c10f28;
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
            FUN_140881720(uVar2,puVar1);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    return;
}



void FUN_140849350(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    longlong **pplVar6;
    longlong *plVar7;
    uint uVar8;
    int iVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    longlong **local_res18;
    ulonglong local_res20;
    undefined local_58 [4];
    char local_54;
    char local_53;
    longlong *local_50 [3];

    if (param_2 == 0xffffffff) {
        return;
    }
    lVar11 = (longlong)(int)(param_2 + 1);
    if (lVar11 < 4) {
        pplVar6 = (longlong **)(param_1 + 0x3a0 + lVar11 * 8);
        do {
            plVar10 = *pplVar6;
            if (plVar10 != (longlong *)0x0) goto LAB_1408493af;
            lVar11 = lVar11 + 1;
            pplVar6 = pplVar6 + 1;
        } while (lVar11 < 4);
    }
    plVar10 = (longlong *)(param_1 + 0x2c0);
    LAB_1408493af:
    lVar11 = (longlong)(int)(param_2 - 1);
    if (-1 < (int)(param_2 - 1)) {
        plVar7 = (longlong *)(param_1 + 0x3a0 + lVar11 * 8);
        do {
            lVar12 = *plVar7;
            if (lVar12 != 0) goto LAB_1408493e8;
            plVar7 = plVar7 + -1;
            lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
    }
    lVar12 = param_1 + 0x1e0;
    LAB_1408493e8:
    iVar5 = 0;
    iVar9 = 0;
    local_res18 = (longlong **)((ulonglong)param_2 * 8 + 0x3a0 + param_1);
    plVar7 = *local_res18;
    if (plVar7 != (longlong *)0x0) {
        FUN_140001b70(plVar10);
        if ((int)param_2 < 4) {
            pplVar6 = (longlong **)(param_1 + 0x3a0 + (longlong)(int)param_2 * 8);
            uVar8 = param_2;
            do {
                if (((*pplVar6 != (longlong *)0x0) &&
                     (cVar2 = (**(code **)(**pplVar6 + 0x58))(), cVar2 != '\0')) && (uVar8 != param_2))
                    break;
                uVar8 = uVar8 + 1;
                pplVar6 = pplVar6 + 1;
            } while ((int)uVar8 < 4);
        }
        (**(code **)(*plVar7 + 0x48))(plVar7);
        uVar1 = DAT_140c10f28;
        (**(code **)*plVar7)(plVar7,0);
        FUN_140881720(uVar1,plVar7);
        *local_res18 = (longlong *)0x0;
    }
    pplVar6 = local_res18;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    local_50[0] = (longlong *)0x0;
    (**(code **)(**(longlong **)(lVar11 + 0xa0) + 0x1c0))
            (*(longlong **)(lVar11 + 0xa0),param_2,local_50,*(undefined8 *)(lVar11 + 0xb0));
    if (local_50[0] != (longlong *)0x0) {
        local_res18 = (longlong **)0x0;
        iVar3 = FUN_14082faf0(&PTR_PTR_FUN_140c10f70,*(undefined4 *)(local_50[0] + 4),&local_res18);
        if (iVar3 == 1) {
            (*(code *)(*local_res18)[3])(local_res18,local_58);
            if (local_53 == '\0') {
                if (local_54 == '\0') {
                    plVar7 = (longlong *)FUN_1408819f0();
                    if (plVar7 != (longlong *)0x0) {
                        plVar7[1] = 0;
                        *plVar7 = (longlong)&PTR_FUN_1409a31c0;
                        plVar7[9] = 0;
                        *(undefined2 *)(plVar7 + 0xc) = 0;
                        plVar7[0xd] = 0;
                        plVar7[0x10] = 0;
                        *(undefined2 *)(plVar7 + 0x13) = 0;
                        plVar7[0x14] = 0;
                        goto LAB_1408495cb;
                    }
                }
                else {
                    plVar7 = (longlong *)FUN_1408819f0();
                    if (plVar7 != (longlong *)0x0) {
                        plVar7[1] = 0;
                        *plVar7 = (longlong)&PTR_FUN_1409a3140;
                        LAB_1408495cb:
                        if (plVar7 != (longlong *)0x0) {
                            uVar4 = (uint)(*(ulonglong *)(lVar11 + 0xc0) >> 0x20);
                            uVar8 = uVar4 & 0x3ffff;
                            if ((*(ulonglong *)(lVar11 + 0xc0) & 0x3ffff00000000) != 0) {
                                do {
                                    iVar9 = iVar5 + 1;
                                    uVar8 = uVar8 & uVar8 - 1;
                                    iVar5 = iVar9;
                                } while (uVar8 != 0);
                            }
                            local_res20 = CONCAT44((iVar9 * 0x20 & 0xf8U | 0xfffffc00) << 0x15 |
                                                   uVar4 & 0xa083ffff | 0x800000,*(undefined4 *)(param_1 + 0x1d8))
                                          | 0x2000000000000000;
                            iVar5 = (**(code **)(*plVar7 + 0x40))
                                    (plVar7,local_res18,local_50,param_2,lVar11,&local_res20);
                            if (iVar5 == 1) {
                                *pplVar6 = plVar7;
                                (**(code **)(*plVar10 + 0x38))(plVar10,plVar7);
                                lVar11 = *plVar7;
                                goto LAB_140849517;
                            }
                            (**(code **)(*plVar7 + 0x48))(plVar7);
                            uVar1 = DAT_140c10f28;
                            (**(code **)*plVar7)(plVar7,0);
                            FUN_140881720(uVar1,plVar7);
                        }
                    }
                }
            }
            else {
                (*(code *)(*local_res18)[1])(local_res18,&PTR_PTR_FUN_140c10f70);
            }
        }
    }
    lVar11 = *plVar10;
    plVar7 = plVar10;
    LAB_140849517:
    (**(code **)(lVar11 + 0x38))(plVar7,lVar12);
    if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
    }
    return;
}



float FUN_140849720(undefined4 param_1,undefined4 param_2,float param_3)

{
    uint uVar1;
    float fVar2;
    float *in_stack_00000028;

    fVar2 = (float)FUN_1408295c0(param_1,0,param_2,0x3f800000);
    *in_stack_00000028 = fVar2;
    fVar2 = fVar2 * param_3 * 0.05;
    if (-37.0 <= fVar2) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar1 = (uint)(longlong)(fVar2 * DAT_140c61bf8 + 1.065353e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        return ((fVar2 * 0.3251898 + 0.02080577) * fVar2 + 0.6530434) * (float)(uVar1 & 0xff800000);
    }
    return 0.0;
}



void FUN_140849810(char param_1,longlong param_2,longlong *param_3,uint param_4,float param_5,
                   undefined (**param_6) [16])

{
    float *pfVar1;
    float *pfVar2;
    undefined4 uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    byte bVar13;
    char cVar14;
    uint uVar15;
    longlong lVar16;
    longlong lVar17;
    longlong lVar18;
    longlong lVar19;
    undefined8 uVar20;
    undefined (*pauVar21) [16];
    ulonglong uVar22;
    undefined (*pauVar23) [16];
    byte bVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    byte bVar27;
    byte bVar28;
    undefined4 *puVar29;
    float *pfVar30;
    longlong lVar31;
    longlong lVar32;
    longlong lVar33;
    undefined4 *puVar34;
    int iVar35;
    uint uVar36;
    uint uVar37;
    uint uVar38;
    float *pfVar39;
    float fVar40;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    undefined4 extraout_XMM0_Da_04;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined extraout_XMM0_01 [16];
    undefined extraout_XMM0_02 [16];
    undefined extraout_XMM0_03 [16];
    undefined extraout_XMM0_04 [16];
    undefined extraout_XMM0_05 [16];
    undefined auVar41 [16];
    undefined extraout_XMM0_06 [16];
    undefined extraout_XMM0_07 [16];
    undefined extraout_XMM0_08 [16];
    undefined extraout_XMM0_09 [16];
    float fVar42;
    undefined auVar43 [16];
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    undefined8 auStack640 [5];
    uint auStack600 [2];
    undefined (*pauStack592) [16];
    float local_248;
    uint local_244;
    uint local_240;
    undefined4 *local_238;
    uint local_230;
    uint local_22c;
    float *local_228;
    longlong local_218;
    longlong local_210;
    longlong local_208;
    uint local_200;
    undefined4 *local_1f8;
    undefined8 local_1f0;
    longlong local_1e8;
    undefined8 local_1e0;
    undefined4 *local_1d8;
    longlong local_1d0;
    undefined8 local_1c8;
    undefined (*local_1c0) [16];
    undefined8 local_1b8;
    float local_1a8 [90];

    puVar34 = (undefined4 *)0x0;
    local_240 = 0;
    puVar29 = puVar34;
    uVar36 = param_4;
    if (param_4 != 0) {
        do {
            local_240 = (int)puVar29 + 1;
            puVar29 = (undefined4 *)(ulonglong)local_240;
            uVar36 = uVar36 & uVar36 - 1;
        } while (uVar36 != 0);
    }
    local_248._0_1_ = (param_4 & 8) != 0;
    local_244 = local_240;
    if ((bool)local_248._0_1_) {
        local_244 = local_240 - 1;
    }
    auStack640[0] = 0x140849927;
    lVar16 = FUN_1407f0f60();
    lVar16 = -lVar16;
    puVar29 = (undefined4 *)((longlong)&local_248 + lVar16);
    local_238 = puVar29;
    *(undefined8 *)((longlong)auStack640 + lVar16) = 0x14084993d;
    FUN_1407e4830(puVar29,0);
    *(undefined8 *)((longlong)auStack640 + lVar16) = 0x140849958;
    lVar17 = FUN_1407f0f60();
    lVar17 = -lVar17;
    local_218 = (longlong)&local_248 + lVar17 + lVar16;
    *(undefined8 *)((longlong)auStack640 + lVar17 + lVar16) = 0x140849979;
    lVar18 = FUN_1407f0f60();
    lVar18 = -lVar18;
    local_210 = (longlong)&local_248 + lVar18 + lVar17 + lVar16;
    *(undefined8 *)((longlong)auStack640 + lVar18 + lVar17 + lVar16) = 0x14084999a;
    lVar19 = FUN_1407f0f60();
    lVar19 = -lVar19;
    lVar33 = *(longlong *)(param_2 + 0x58);
    pfVar39 = (float *)((longlong)&local_248 + lVar19 + lVar18 + lVar17 + lVar16);
    local_228 = pfVar39;
    local_1e8 = lVar33 + 8;
    auVar41 = extraout_XMM0;
    if (*(longlong *)(lVar33 + 0x50) == 0) {
        uVar3 = *(undefined4 *)(lVar33 + 0xc);
        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x1408499d5;
        uVar20 = FUN_14083ede0(DAT_140c61ba8 + 0x2550,uVar3);
        *(undefined8 *)(lVar33 + 0x50) = uVar20;
        auVar41 = extraout_XMM0_00;
    }
    local_1d0 = *(longlong *)(lVar33 + 0x50);
    local_208 = 0;
    local_1d8 = (undefined4 *)0x0;
    if (local_1d0 != 0) {
        if (*(byte *)(local_1d0 + 0x84) == 0xff) {
            local_208 = 0;
        }
        else {
            local_208 = ((ulonglong)*(byte *)(local_1d0 + 0x84) + 3) * 0x10 + local_1d0;
        }
        local_1d8 = puVar34;
        if (*(byte *)(local_1d0 + 0x83) != 0xff) {
            local_1d8 = (undefined4 *)(((ulonglong)*(byte *)(local_1d0 + 0x83) + 3) * 0x10 + local_1d0);
        }
    }
    local_22c = 0;
    uVar36 = *(byte *)(param_2 + 0x17b) >> 2 & 3;
    local_200 = uVar36;
    if ((*(byte *)(param_2 + 0x17e) & 0x40) == 0) {
        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849a66;
        FUN_1408605d0();
        auVar41 = extraout_XMM0_01;
    }
    lVar33 = *(longlong *)(param_2 + 0x1f0);
    if (lVar33 != 0) {
        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849a81;
        FUN_1408708c0(lVar33);
        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849a89;
        FUN_1408708b0();
        auVar41 = extraout_XMM0_02;
    }
    fVar48 = 1.0;
    uVar22 = 0;
    lVar31 = *param_3;
    fVar47 = 0.0;
    if (uVar36 == 1) {
        fVar46 = 0.003921569;
        local_230 = 0;
        do {
            pfVar39[(longlong)puVar34] = 0.0;
            bVar24 = 0;
            for (bVar13 = *(byte *)(lVar31 + 0x11); (bVar13 & 1) == 0; bVar13 = bVar13 >> 1) {
                bVar24 = bVar24 + 1;
            }
            uVar26 = (ulonglong)bVar24;
            lVar32 = *(longlong *)(param_2 + 0xb0);
            pauVar23 = (undefined (*) [16])(local_238 + uVar22 * 8);
            puVar29 = &DAT_140c62000 + (ulonglong)bVar24 * 0x20;
            local_1c0 = pauVar23;
            local_1f8 = puVar29;
            fVar40 = (float)(uint)*(byte *)(lVar32 + 0x58 + uVar26) * fVar46;
            auVar41 = ZEXT416((uint)fVar40) & (undefined  [16])0xffffffffffffffff;
            *(float *)(local_218 + (longlong)puVar34 * 4) = fVar40;
            uVar25 = (ulonglong)local_244;
            fVar40 = (float)(uint)*(byte *)(lVar32 + 0x50 + uVar26) * fVar46;
            *(float *)(local_210 + (longlong)puVar34 * 4) = fVar40;
            if (local_244 != 0) {
                if ((&DAT_140c62028)[(ulonglong)bVar24 * 0x80] == '\0') {
                    auVar41 = ZEXT416((uint)(float)uVar25) & (undefined  [16])0xffffffffffffffff;
                    auVar43 = sqrtps(ZEXT416((uint)fVar40) & (undefined  [16])0xffffffffffffffff,auVar41);
                    fVar40 = fVar48 / SUB164(auVar43,0);
                    if (local_244 != 0) {
                        auVar41 = CONCAT412(fVar40,CONCAT48(fVar40,CONCAT44(fVar40,fVar40)));
                        pauVar21 = pauVar23;
                        do {
                            *pauVar21 = auVar41;
                            pauVar21[1] = auVar41;
                            pauVar21 = pauVar21[2];
                            uVar25 = uVar25 - 1;
                        } while (uVar25 != 0);
                    }
                }
                else if ((*(byte *)(local_1e8 + 0x44) & 1) == 0) {
                    *(undefined (**) [16])((longlong)&pauStack592 + lVar19 + lVar18 + lVar17 + lVar16) =
                            pauVar23;
                    *(uint *)((longlong)auStack600 + lVar19 + lVar18 + lVar17 + lVar16) = param_4;
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849bd8;
                    FUN_1408642d0();
                    auVar41 = extraout_XMM0_04;
                }
                else {
                    if (local_208 != 0) {
                        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849b83;
                        FUN_1408fc950();
                        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849b9a;
                        FUN_140835ca0();
                    }
                    *(uint *)((longlong)auStack600 + lVar19 + lVar18 + lVar17 + lVar16) = local_244;
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849bb5;
                    FUN_140864810();
                    auVar41 = extraout_XMM0_03;
                }
            }
            if (local_1d8 != (undefined4 *)0x0) {
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849c2c;
                FUN_140835ca0();
                local_228[(longlong)puVar34] = SUB164(extraout_XMM0_05,0);
                auVar41 = extraout_XMM0_05;
            }
            lVar32 = DAT_140c61fe0;
            pauVar21 = pauVar23;
            uVar36 = (uint)uVar22;
            if (((lVar33 != 0) &&
                 (uVar38 = 1 << (bVar24 & 0x1f), uVar36 = local_230, (DAT_140c61ff0 & uVar38) != 0)) &&
                (uVar37 = 0, local_244 != 0)) {
                do {
                    bVar13 = *(byte *)(uVar26 + 0x7c + lVar32) & *(byte *)(lVar32 + 0x88);
                    if (bVar13 != 0) {
                        bVar24 = 1;
                        uVar22 = 0;
                        do {
                            if ((bVar13 & bVar24) != 0) {
                                fVar40 = *(float *)(lVar33 + 0x20 + uVar22 * 4);
                                fVar49 = *(float *)(lVar31 + 0x14);
                                if (*(float *)(lVar31 + 0x14) <= fVar40) {
                                    fVar49 = fVar40;
                                }
                                *(float *)(lVar33 + 0x20 + uVar22 * 4) = fVar49;
                                pauVar21 = (undefined (*) [16])
                                        (((ulonglong)((*(ushort *)(lVar33 + 0x36) & 7) * (int)uVar22 + uVar37) +
                                          1) * 0x40 + lVar33);
                                auVar41 = maxps(*pauVar21,*pauVar23);
                                *pauVar21 = auVar41;
                                auVar43 = maxps(pauVar21[1],pauVar23[1]);
                                pauVar21[1] = auVar43;
                            }
                            bVar27 = (char)uVar22 + 1;
                            uVar22 = (ulonglong)bVar27;
                            bVar24 = bVar24 * '\x02';
                        } while (bVar27 < 4);
                    }
                    if (((DAT_140c10f80 & uVar38) == 0) || ((*(byte *)(param_2 + 0x17e) & 0x80) != 0)) {
                        auVar41 = auVar41 & (undefined  [16])0x0;
                        *(undefined (*) [16])(local_238 + (ulonglong)(uVar37 + local_230) * 8) = auVar41;
                        *(undefined (*) [16])(local_238 + (ulonglong)(uVar37 + local_230) * 8 + 4) = auVar41;
                    }
                    uVar37 = uVar37 + 1;
                    pauVar23 = pauVar23[2];
                    puVar29 = local_1f8;
                    pauVar21 = local_1c0;
                } while (uVar37 < local_244);
            }
            if (local_248._0_1_ != '\0') {
                auVar41 = auVar41 & (undefined  [16])0x0;
                uVar22 = (ulonglong)((local_240 - 1) + uVar36);
                *(undefined (*) [16])(local_238 + uVar22 * 8) = auVar41;
                *(undefined (*) [16])(local_238 + uVar22 * 8 + 4) = auVar41;
                local_238[uVar22 * 8 + 5] = 0x3f800000;
            }
            uVar22 = (ulonglong)local_240;
            if (local_240 != 0) {
                do {
                    auVar41 = CONCAT412((float)puVar29[0xf] * *(float *)(*pauVar21 + 0xc),
                                        CONCAT48((float)puVar29[0xe] * *(float *)(*pauVar21 + 8),
                                                 CONCAT44((float)puVar29[0xd] * *(float *)(*pauVar21 + 4),
                                                          (float)puVar29[0xc] * *(float *)*pauVar21)));
                    *pauVar21 = auVar41;
                    pauVar21[1] = CONCAT412((float)puVar29[0x13] * *(float *)(pauVar21[1] + 0xc),
                                            CONCAT48((float)puVar29[0x12] * *(float *)(pauVar21[1] + 8),
                                                     CONCAT44((float)puVar29[0x11] *
                                                              *(float *)(pauVar21[1] + 4),
                                                              (float)puVar29[0x10] * *(float *)pauVar21[1])));
                    uVar22 = uVar22 - 1;
                    pauVar21 = pauVar21[2];
                } while (uVar22 != 0);
            }
            uVar22 = (ulonglong)(uVar36 + 6);
            puVar34 = (undefined4 *)(ulonglong)(local_22c + 1);
            lVar31 = lVar31 + 0x24;
            local_230 = uVar36 + 6;
            local_22c = local_22c + 1;
            pfVar39 = local_228;
        } while (lVar31 != param_3[1]);
    }
    else {
        do {
            bVar24 = 0;
            local_228[(longlong)puVar34] = 0.0;
            bVar13 = *(byte *)(lVar31 + 0x11);
            local_1f8 = puVar34;
            for (; (bVar13 & 1) == 0; bVar13 = bVar13 >> 1) {
                bVar24 = bVar24 + 1;
            }
            iVar35 = (int)uVar22;
            pauVar23 = (undefined (*) [16])(puVar29 + uVar22 * 8);
            if ((*(byte *)(local_1e8 + 0x44) & 1) == 0) {
                *(undefined (**) [16])((longlong)&pauStack592 + lVar19 + lVar18 + lVar17 + lVar16) =
                        pauVar23;
                *(uint *)((longlong)auStack600 + lVar19 + lVar18 + lVar17 + lVar16) = param_4;
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849eb9;
                FUN_1408642d0();
                auVar41 = extraout_XMM0_09;
            }
            else {
                if (local_208 != 0) {
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849e38;
                    FUN_1408fc950();
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849e4e;
                    FUN_140835ca0();
                    auVar41 = extraout_XMM0_06;
                }
                if (local_1d8 != (undefined4 *)0x0) {
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849e6d;
                    FUN_140835ca0();
                    local_228[(longlong)puVar34] = SUB164(extraout_XMM0_07,0);
                    auVar41 = extraout_XMM0_07;
                }
                if (local_244 != 0) {
                    *(uint *)((longlong)auStack600 + lVar19 + lVar18 + lVar17 + lVar16) = local_244;
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x140849e96;
                    FUN_140864810();
                    auVar41 = extraout_XMM0_08;
                }
            }
            lVar32 = DAT_140c61fe0;
            puVar29 = puVar34;
            if (((lVar33 != 0) && (uVar36 = 1 << (bVar24 & 0x1f), (DAT_140c61ff0 & uVar36) != 0)) &&
                (uVar38 = 0, local_244 != 0)) {
                do {
                    bVar13 = *(byte *)(lVar32 + 0x88) & *(byte *)((ulonglong)bVar24 + 0x7c + lVar32);
                    if (bVar13 != 0) {
                        bVar27 = 1;
                        uVar22 = 0;
                        do {
                            if ((bVar13 & bVar27) != 0) {
                                fVar46 = *(float *)(lVar33 + 0x20 + uVar22 * 4);
                                fVar40 = *(float *)(lVar31 + 0x14);
                                if (*(float *)(lVar31 + 0x14) <= fVar46) {
                                    fVar40 = fVar46;
                                }
                                *(float *)(lVar33 + 0x20 + uVar22 * 4) = fVar40;
                                pauVar21 = (undefined (*) [16])
                                        (((ulonglong)((*(ushort *)(lVar33 + 0x36) & 7) * (int)uVar22 + uVar38) +
                                          1) * 0x40 + lVar33);
                                auVar41 = maxps(*pauVar21,*pauVar23);
                                *pauVar21 = auVar41;
                                auVar43 = maxps(pauVar21[1],pauVar23[1]);
                                pauVar21[1] = auVar43;
                            }
                            bVar28 = (char)uVar22 + 1;
                            uVar22 = (ulonglong)bVar28;
                            bVar27 = bVar27 * '\x02';
                        } while (bVar28 < 4);
                    }
                    if (((DAT_140c10f80 & uVar36) == 0) || ((*(byte *)(param_2 + 0x17e) & 0x80) != 0)) {
                        auVar41 = auVar41 & (undefined  [16])0x0;
                        *(undefined (*) [16])(local_238 + (ulonglong)(iVar35 + uVar38) * 8) = auVar41;
                        *(undefined (*) [16])(local_238 + (ulonglong)(iVar35 + uVar38) * 8 + 4) = auVar41;
                    }
                    uVar38 = uVar38 + 1;
                    pauVar23 = pauVar23[2];
                    puVar29 = local_1f8;
                } while (uVar38 < local_244);
            }
            if (local_248._0_1_ != '\0') {
                auVar41 = auVar41 & (undefined  [16])0x0;
                uVar22 = (ulonglong)((local_240 - 1) + iVar35);
                *(undefined (*) [16])(local_238 + uVar22 * 8) = auVar41;
                *(undefined (*) [16])(local_238 + uVar22 * 8 + 4) = auVar41;
                local_238[uVar22 * 8 + 5] = 0x3f800000;
            }
            *(undefined4 *)(local_218 + (longlong)puVar29 * 4) = 0;
            puVar34 = (undefined4 *)(ulonglong)(local_22c + 1);
            lVar31 = lVar31 + 0x24;
            uVar22 = (ulonglong)(iVar35 + 6);
            *(undefined4 *)(local_210 + (longlong)puVar29 * 4) = 0;
            local_22c = local_22c + 1;
            puVar29 = local_238;
        } while (lVar31 != param_3[1]);
    }
    puVar29 = local_238;
    uVar36 = local_240;
    fVar46 = fVar47;
    if ((local_1d0 != 0) && ((*(byte *)(local_1d0 + 0x85) & 1) != 0)) {
        fVar46 = *(float *)(local_1e8 + 0xc);
    }
    lVar33 = *param_3;
    lVar31 = (param_3[1] - lVar33) / 0x24;
    if ((int)lVar31 == 1) {
        bVar13 = *(byte *)(lVar33 + 0x11);
        bVar27 = 0;
        bVar24 = (byte)lVar31 & bVar13;
        while (bVar24 == 0) {
            bVar13 = bVar13 >> 1;
            bVar27 = bVar27 + 1;
            bVar24 = bVar13 & 1;
        }
        cVar14 = (&DAT_140c62074)[(ulonglong)bVar27 * 0x80];
        for (pauVar23 = *param_6; pauVar23 != (undefined (*) [16])0x0;
             pauVar23 = *(undefined (**) [16])(pauVar23[0x1b] + 8)) {
            if (pauVar23[0x1c][0] == cVar14) goto LAB_14084a145;
        }
        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a0cf;
        pauVar23 = (undefined (*) [16])FUN_140881960(DAT_140c10f20,0x1d0,0x10);
        if (pauVar23 != (undefined (*) [16])0x0) {
            pauVar23[0x1c][0] = cVar14;
            *(undefined8 *)pauVar23[0x1b] = 0;
            *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a0f8;
            FUN_1407e4830(pauVar23,0,0x180);
            *(undefined8 *)pauVar23[0x18] = 0;
            *(undefined8 *)(pauVar23[0x18] + 8) = 0;
            *(undefined8 *)pauVar23[0x19] = 0;
            *(undefined8 *)(pauVar23[0x19] + 8) = 0;
            *(undefined8 *)pauVar23[0x1a] = 0;
            *(undefined8 *)(pauVar23[0x1a] + 8) = 0;
            if (*param_6 == (undefined (*) [16])0x0) {
                *param_6 = pauVar23;
                *(undefined8 *)(pauVar23[0x1b] + 8) = 0;
            }
            else {
                *(undefined (**) [16])(pauVar23[0x1b] + 8) = *param_6;
                *param_6 = pauVar23;
            }
            *(int *)(param_6 + 1) = *(int *)(param_6 + 1) + 1;
        }
        LAB_14084a145:
        if (pauVar23 != (undefined (*) [16])0x0) {
            uVar22 = (ulonglong)local_240;
            pauVar21 = pauVar23;
            puVar29 = local_238;
            if (local_240 != 0) {
                do {
                    uVar3 = puVar29[1];
                    uVar11 = puVar29[2];
                    uVar12 = puVar29[3];
                    *(undefined4 *)*pauVar21 = *puVar29;
                    *(undefined4 *)(*pauVar21 + 4) = uVar3;
                    *(undefined4 *)(*pauVar21 + 8) = uVar11;
                    *(undefined4 *)(*pauVar21 + 0xc) = uVar12;
                    uVar3 = puVar29[5];
                    uVar11 = puVar29[6];
                    uVar12 = puVar29[7];
                    *(undefined4 *)pauVar21[1] = puVar29[4];
                    *(undefined4 *)(pauVar21[1] + 4) = uVar3;
                    *(undefined4 *)(pauVar21[1] + 8) = uVar11;
                    *(undefined4 *)(pauVar21[1] + 0xc) = uVar12;
                    uVar22 = uVar22 - 1;
                    pauVar21 = pauVar21[4];
                    puVar29 = puVar29 + 8;
                } while (uVar22 != 0);
            }
            *(float *)pauVar23[0x18] = param_5 * *(float *)(lVar33 + 0x14);
            if (param_1 == '\0') {
                *(undefined4 *)pauVar23[0x1a] = 0;
                *(undefined4 *)pauVar23[0x19] = 0;
            }
            else {
                *(float *)pauVar23[0x1a] = param_5 * *(float *)(lVar33 + 0x18);
                *(float *)pauVar23[0x19] = param_5 * *(float *)(lVar33 + 0x1c);
            }
            fVar48 = *(float *)(param_2 + 0xd4);
            if (*(float *)(param_2 + 0xd4) <= *local_228) {
                fVar48 = *local_228;
            }
            if (fVar47 < fVar46) {
                *(undefined4 *)((longlong)auStack600 + lVar19 + lVar18 + lVar17 + lVar16) =
                        *(undefined4 *)(lVar33 + 0x20);
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a219;
                FUN_1408295c0();
                if (fVar48 <= extraout_XMM0_Da) {
                    fVar48 = extraout_XMM0_Da;
                }
            }
            lVar33 = DAT_140c61b90;
            if (local_200 == 1) {
                if (*(char *)(DAT_140c61b90 + 3) != '\0') {
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a25b;
                    FUN_140835ca0(DAT_140c61b90 + 0x38);
                    if (fVar48 <= extraout_XMM0_Da_00) {
                        fVar48 = extraout_XMM0_Da_00;
                    }
                }
                if (*(char *)(lVar33 + 1) != '\0') {
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a288;
                    FUN_140835ca0(lVar33 + 0x18);
                    *(undefined4 *)(pauVar23[0x1b] + 4) = extraout_XMM0_Da_01;
                }
            }
            *(float *)pauVar23[0x1b] = fVar48;
        }
    }
    else {
        pauVar23 = *param_6;
        if (pauVar23 != (undefined (*) [16])0x0) {
            do {
                uVar22 = 0;
                do {
                    uVar38 = (int)uVar22 + 1;
                    pauVar23[uVar22 * 4] = auVar41 & (undefined  [16])0x0;
                    pauVar23[uVar22 * 4 + 1] = auVar41 & (undefined  [16])0x0;
                    uVar22 = (ulonglong)uVar38;
                } while (uVar38 < local_240);
                *(undefined4 *)pauVar23[0x18] = 0;
                *(undefined4 *)pauVar23[0x19] = 0;
                *(undefined4 *)pauVar23[0x1a] = 0;
                pauVar23 = *(undefined (**) [16])(pauVar23[0x1b] + 8);
            } while (pauVar23 != (undefined (*) [16])0x0);
        }
        local_1f8 = (undefined4 *)0x3f8000003f800000;
        local_1f0 = 0x3f8000003f800000;
        local_1e8 = 0x3f8000003f800000;
        local_1e0 = 0x3f8000003f800000;
        local_1c0 = (undefined (*) [16])0x3f8000003f800000;
        local_1b8 = 0x3f8000003f800000;
        local_1d0 = 0x42c8000042c80000;
        local_1c8 = 0x42c8000042c80000;
        *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a357;
        fVar40 = fVar47;
        fVar49 = fVar47;
        fVar50 = fVar47;
        cVar14 = FUN_14085f220();
        pfVar39 = local_228;
        if (cVar14 == '\0') {
            uVar22 = 0;
            lVar33 = *param_3;
            iVar35 = 0;
            do {
                bVar24 = 0;
                for (bVar13 = *(byte *)(lVar33 + 0x11); (bVar13 & 1) == 0; bVar13 = bVar13 >> 1) {
                    bVar24 = bVar24 + 1;
                }
                bVar13 = (&DAT_140c62074)[(ulonglong)bVar24 * 0x80];
                uVar25 = (ulonglong)bVar13;
                for (pauVar23 = *param_6; pauVar23 != (undefined (*) [16])0x0;
                     pauVar23 = *(undefined (**) [16])(pauVar23[0x1b] + 8)) {
                    if (pauVar23[0x1c][0] == bVar13) goto LAB_14084a76f;
                }
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a6ef;
                pauVar23 = (undefined (*) [16])FUN_140881960(DAT_140c10f20,0x1d0,0x10);
                if (pauVar23 != (undefined (*) [16])0x0) {
                    pauVar23[0x1c][0] = bVar13;
                    *(undefined8 *)pauVar23[0x1b] = 0;
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a717;
                    FUN_1407e4830(pauVar23,0,0x180);
                    *(undefined8 *)pauVar23[0x18] = 0;
                    *(undefined8 *)(pauVar23[0x18] + 8) = 0;
                    *(undefined8 *)pauVar23[0x19] = 0;
                    *(undefined8 *)(pauVar23[0x19] + 8) = 0;
                    *(undefined8 *)pauVar23[0x1a] = 0;
                    *(undefined8 *)(pauVar23[0x1a] + 8) = 0;
                    if (*param_6 == (undefined (*) [16])0x0) {
                        *param_6 = pauVar23;
                        *(undefined8 *)(pauVar23[0x1b] + 8) = 0;
                    }
                    else {
                        *(undefined (**) [16])(pauVar23[0x1b] + 8) = *param_6;
                        *param_6 = pauVar23;
                    }
                    *(int *)(param_6 + 1) = *(int *)(param_6 + 1) + 1;
                }
                LAB_14084a76f:
                if (pauVar23 == (undefined (*) [16])0x0) {
                    return;
                }
                uVar38 = 0;
                if (uVar36 != 0) {
                    do {
                        uVar37 = iVar35 + uVar38;
                        uVar38 = uVar38 + 1;
                        fVar42 = param_5 * *(float *)(lVar33 + 0x14);
                        pfVar39 = (float *)(local_238 + (ulonglong)uVar37 * 8);
                        pfVar30 = (float *)(local_238 + (ulonglong)uVar37 * 8 + 4);
                        auVar41 = maxps(*pauVar23,
                                        CONCAT412(pfVar39[3] * fVar42,
                                                  CONCAT48(pfVar39[2] * fVar42,
                                                           CONCAT44(pfVar39[1] * fVar42,*pfVar39 * fVar42))));
                        auVar43 = maxps(pauVar23[1],
                                        CONCAT412(pfVar30[3] * fVar42,
                                                  CONCAT48(pfVar30[2] * fVar42,
                                                           CONCAT44(pfVar30[1] * fVar42,*pfVar30 * fVar42))));
                        *pauVar23 = auVar41;
                        pauVar23[1] = auVar43;
                        pauVar23 = pauVar23[4];
                    } while (uVar38 < uVar36);
                }
                if (fVar40 < *(float *)(lVar33 + 0x14)) {
                    fVar40 = *(float *)(lVar33 + 0x14);
                }
                if (param_1 != '\0') {
                    if (fVar49 < *(float *)(lVar33 + 0x1c)) {
                        fVar49 = *(float *)(lVar33 + 0x1c);
                    }
                    if (fVar50 < *(float *)(lVar33 + 0x18)) {
                        fVar50 = *(float *)(lVar33 + 0x18);
                    }
                }
                fVar42 = *(float *)((longlong)&local_1d0 + uVar25 * 4);
                if (local_228[uVar22] <= fVar42) {
                    fVar42 = local_228[uVar22];
                }
                *(float *)((longlong)&local_1d0 + uVar25 * 4) = fVar42;
                fVar42 = *(float *)((longlong)&local_1c0 + uVar25 * 4);
                fVar45 = *(float *)(local_218 + uVar22 * 4);
                if (fVar45 <= fVar42) {
                    fVar42 = fVar45;
                }
                *(float *)((longlong)&local_1c0 + uVar25 * 4) = fVar42;
                fVar42 = *(float *)((longlong)&local_1e8 + uVar25 * 4);
                fVar45 = *(float *)(local_210 + uVar22 * 4);
                if (fVar45 <= fVar42) {
                    fVar42 = fVar45;
                }
                fVar45 = *(float *)(lVar33 + 0x20);
                *(float *)((longlong)&local_1e8 + uVar25 * 4) = fVar42;
                fVar42 = *(float *)((longlong)&local_1f8 + uVar25 * 4);
                if (fVar45 <= fVar42) {
                    fVar42 = fVar45;
                }
                lVar33 = lVar33 + 0x24;
                uVar22 = (ulonglong)((int)uVar22 + 1);
                iVar35 = iVar35 + 6;
                *(float *)((longlong)&local_1f8 + uVar25 * 4) = fVar42;
            } while (lVar33 != param_3[1]);
        }
        else {
            lVar33 = *param_3;
            uVar22 = 0;
            fVar47 = 100.0;
            do {
                bVar24 = 0;
                for (bVar13 = *(byte *)(lVar33 + 0x11); (bVar13 & 1) == 0; bVar13 = bVar13 >> 1) {
                    bVar24 = bVar24 + 1;
                }
                fVar48 = 1.0;
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a3c4;
                fVar42 = fVar48;
                fVar45 = fVar48;
                fVar51 = fVar47;
                FUN_1407e4830(local_1a8,0);
                lVar31 = param_3[1];
                iVar35 = (int)uVar22 * 6;
                lVar32 = lVar33;
                do {
                    uVar38 = 0;
                    if (uVar36 != 0) {
                        fVar44 = param_5 * *(float *)(lVar32 + 0x14);
                        pfVar30 = local_1a8;
                        do {
                            uVar37 = iVar35 + uVar38;
                            uVar38 = uVar38 + 1;
                            pfVar1 = (float *)(puVar29 + (ulonglong)uVar37 * 8);
                            fVar4 = pfVar1[1];
                            fVar5 = pfVar1[2];
                            fVar6 = pfVar1[3];
                            pfVar2 = (float *)(puVar29 + (ulonglong)uVar37 * 8 + 4);
                            fVar7 = *pfVar2;
                            fVar8 = pfVar2[1];
                            fVar9 = pfVar2[2];
                            fVar10 = pfVar2[3];
                            *pfVar30 = *pfVar1 * fVar44 + *pfVar30;
                            pfVar30[1] = fVar4 * fVar44 + pfVar30[1];
                            pfVar30[2] = fVar5 * fVar44 + pfVar30[2];
                            pfVar30[3] = fVar6 * fVar44 + pfVar30[3];
                            *(undefined (*) [16])(pfVar30 + 4) =
                                    CONCAT412(fVar10 * fVar44 + pfVar30[7],
                                              CONCAT48(fVar9 * fVar44 + pfVar30[6],
                                                       CONCAT44(fVar8 * fVar44 + pfVar30[5],
                                                                fVar7 * fVar44 + pfVar30[4])));
                            pfVar30 = pfVar30 + 8;
                        } while (uVar38 < uVar36);
                    }
                    if (fVar40 < *(float *)(lVar32 + 0x14)) {
                        fVar40 = *(float *)(lVar32 + 0x14);
                    }
                    if (param_1 != '\0') {
                        if (fVar49 < *(float *)(lVar32 + 0x1c)) {
                            fVar49 = *(float *)(lVar32 + 0x1c);
                        }
                        if (fVar50 < *(float *)(lVar32 + 0x18)) {
                            fVar50 = *(float *)(lVar32 + 0x18);
                        }
                    }
                    if (pfVar39[uVar22] <= fVar47) {
                        fVar47 = pfVar39[uVar22];
                    }
                    fVar44 = *(float *)(local_218 + uVar22 * 4);
                    if (fVar44 <= fVar48) {
                        fVar48 = fVar44;
                    }
                    fVar44 = *(float *)(local_210 + uVar22 * 4);
                    if (fVar44 <= fVar42) {
                        fVar42 = fVar44;
                    }
                    if (*(float *)(lVar32 + 0x20) <= fVar45) {
                        fVar45 = *(float *)(lVar32 + 0x20);
                    }
                    lVar33 = lVar32 + 0x24;
                    uVar22 = (ulonglong)((int)uVar22 + 1);
                    iVar35 = iVar35 + 6;
                    if (lVar33 == lVar31) break;
                    bVar27 = 0;
                    for (bVar13 = *(byte *)(lVar32 + 0x35); (bVar13 & 1) == 0; bVar13 = bVar13 >> 1) {
                        bVar27 = bVar27 + 1;
                    }
                    lVar32 = lVar33;
                } while (bVar27 == bVar24);
                bVar13 = (&DAT_140c62074)[(ulonglong)bVar24 * 0x80];
                uVar25 = (ulonglong)bVar13;
                for (pauVar23 = *param_6; pauVar23 != (undefined (*) [16])0x0;
                     pauVar23 = *(undefined (**) [16])(pauVar23[0x1b] + 8)) {
                    if (pauVar23[0x1c][0] == bVar13) goto LAB_14084a5af;
                }
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a52f;
                pauVar23 = (undefined (*) [16])FUN_140881960(DAT_140c10f20,0x1d0,0x10);
                if (pauVar23 != (undefined (*) [16])0x0) {
                    pauVar23[0x1c][0] = bVar13;
                    *(undefined8 *)pauVar23[0x1b] = 0;
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a557;
                    FUN_1407e4830(pauVar23,0,0x180);
                    *(undefined8 *)pauVar23[0x18] = 0;
                    *(undefined8 *)(pauVar23[0x18] + 8) = 0;
                    *(undefined8 *)pauVar23[0x19] = 0;
                    *(undefined8 *)(pauVar23[0x19] + 8) = 0;
                    *(undefined8 *)pauVar23[0x1a] = 0;
                    *(undefined8 *)(pauVar23[0x1a] + 8) = 0;
                    if (*param_6 == (undefined (*) [16])0x0) {
                        *param_6 = pauVar23;
                        *(undefined8 *)(pauVar23[0x1b] + 8) = 0;
                    }
                    else {
                        *(undefined (**) [16])(pauVar23[0x1b] + 8) = *param_6;
                        *param_6 = pauVar23;
                    }
                    *(int *)(param_6 + 1) = *(int *)(param_6 + 1) + 1;
                }
                LAB_14084a5af:
                if (pauVar23 == (undefined (*) [16])0x0) {
                    return;
                }
                if (uVar36 != 0) {
                    uVar26 = (ulonglong)uVar36;
                    pauVar21 = (undefined (*) [16])local_1a8;
                    do {
                        auVar41 = maxps(*pauVar23,*pauVar21);
                        auVar43 = maxps(pauVar23[1],pauVar21[1]);
                        *pauVar23 = auVar41;
                        pauVar23[1] = auVar43;
                        uVar26 = uVar26 - 1;
                        pauVar21 = pauVar21[2];
                        pauVar23 = pauVar23[4];
                    } while (uVar26 != 0);
                }
                fVar44 = *(float *)((longlong)&local_1d0 + uVar25 * 4);
                if (fVar47 <= fVar44) {
                    fVar44 = fVar47;
                }
                *(float *)((longlong)&local_1d0 + uVar25 * 4) = fVar44;
                fVar47 = *(float *)((longlong)&local_1c0 + uVar25 * 4);
                if (fVar48 <= fVar47) {
                    fVar47 = fVar48;
                }
                *(float *)((longlong)&local_1c0 + uVar25 * 4) = fVar47;
                fVar47 = *(float *)((longlong)&local_1e8 + uVar25 * 4);
                if (fVar42 <= fVar47) {
                    fVar47 = fVar42;
                }
                *(float *)((longlong)&local_1e8 + uVar25 * 4) = fVar47;
                fVar47 = *(float *)((longlong)&local_1f8 + uVar25 * 4);
                if (fVar45 <= fVar47) {
                    fVar47 = fVar45;
                }
                *(float *)((longlong)&local_1f8 + uVar25 * 4) = fVar47;
                puVar29 = local_238;
                fVar47 = fVar51;
            } while (lVar33 != param_3[1]);
            fVar48 = 1.0;
            fVar47 = 0.0;
        }
        uVar38 = local_200;
        uVar36 = *(uint *)(param_6 + 1);
        uVar37 = 0;
        do {
            pauVar23 = *param_6;
            for (uVar15 = uVar37; uVar15 != 0; uVar15 = uVar15 - 1) {
                pauVar23 = *(undefined (**) [16])(pauVar23[0x1b] + 8);
            }
            *(undefined4 *)pauVar23[0x18] = 0x3f800000;
            if ((param_1 == '\0') || (fVar40 <= fVar47)) {
                *(undefined4 *)pauVar23[0x1a] = 0;
                *(undefined4 *)pauVar23[0x19] = 0;
            }
            else {
                *(float *)pauVar23[0x19] = (fVar48 / fVar40) * fVar49;
                *(float *)pauVar23[0x1a] = (fVar48 / fVar40) * fVar50;
            }
            fVar42 = *(float *)((longlong)&local_1d0 + (ulonglong)(byte)pauVar23[0x1c][0] * 4);
            fVar45 = *(float *)(param_2 + 0xd4);
            if (*(float *)(param_2 + 0xd4) <= fVar42) {
                fVar45 = fVar42;
            }
            if (fVar47 < fVar46) {
                *(undefined4 *)((longlong)auStack600 + lVar19 + lVar18 + lVar17 + lVar16) =
                        *(undefined4 *)((longlong)&local_1f8 + (ulonglong)(byte)pauVar23[0x1c][0] * 4);
                *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a98a;
                FUN_1408295c0();
                if (fVar45 <= extraout_XMM0_Da_02) {
                    fVar45 = extraout_XMM0_Da_02;
                }
            }
            lVar33 = DAT_140c61b90;
            if (uVar38 == 1) {
                if (*(char *)(DAT_140c61b90 + 3) != '\0') {
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a9c7;
                    FUN_140835ca0(DAT_140c61b90 + 0x38);
                    if (fVar45 <= extraout_XMM0_Da_03) {
                        fVar45 = extraout_XMM0_Da_03;
                    }
                }
                if (*(char *)(lVar33 + 1) != '\0') {
                    *(undefined8 *)((longlong)auStack640 + lVar19 + lVar18 + lVar17 + lVar16) = 0x14084a9f4;
                    FUN_140835ca0(lVar33 + 0x18);
                    *(undefined4 *)(pauVar23[0x1b] + 4) = extraout_XMM0_Da_04;
                }
            }
            uVar37 = uVar37 + 1;
            *(float *)pauVar23[0x1b] = fVar45;
        } while (uVar37 < uVar36);
    }
    return;
}



void FUN_14084aa80(undefined4 param_1,uint param_2,undefined4 param_3,longlong param_4)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined local_78 [24];
    longlong local_60 [6];
    undefined4 local_30;
    longlong local_28;
    longlong local_20;
    longlong local_18;

    uVar4 = 0;
    if (param_2 != 0) {
        uVar4 = (ulonglong)param_2;
        plVar1 = local_60;
        uVar2 = (ulonglong)param_2;
        lVar3 = param_4;
        do {
            *plVar1 = lVar3;
            lVar3 = lVar3 + 0x40;
            plVar1 = plVar1 + 1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    if ((uint)uVar4 < 6) {
        plVar1 = local_60 + uVar4;
        for (uVar2 = (ulonglong)(6 - (uint)uVar4); uVar2 != 0; uVar2 = uVar2 - 1) {
            *plVar1 = 0;
            plVar1 = plVar1 + 1;
        }
    }
    local_28 = param_4 + 0x180;
    local_20 = param_4 + 0x1a0;
    local_30 = param_3;
    local_18 = local_20;
    FUN_14083c0e0(DAT_140c61b80,param_1,local_78);
    return;
}



void FUN_14084ab10(int param_1,char param_2,longlong param_3,longlong *param_4)

{
    char *pcVar1;
    byte bVar2;
    undefined8 uVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float local_res8;
    float local_res10;
    float local_res18;

    fVar10 = 1.0;
    if (param_2 == '\0') {
        fVar9 = 1.0;
    }
    else {
        fVar9 = *(float *)(*(longlong *)(param_3 + 0xb0) + 0x60);
    }
    fVar7 = (float)FUN_14085ea60();
    if (-37.0 <= fVar7 * 0.05) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar4 = (uint)(longlong)(fVar7 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
        local_res8 = (float)(uVar4 & 0xff800000);
        local_res10 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar7 = ((local_res10 * 0.3251898 + 0.02080577) * local_res10 + 0.6530434) * local_res8;
    }
    else {
        fVar7 = 0.0;
    }
    lVar5 = *(longlong *)(param_3 + 0x58);
    if (*(longlong *)(lVar5 + 0x50) == 0) {
        uVar3 = FUN_14083ede0(DAT_140c61ba8 + 0x2550,*(undefined4 *)(lVar5 + 0xc));
        *(undefined8 *)(lVar5 + 0x50) = uVar3;
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
    lVar5 = *param_4;
    if (param_1 == 1) {
        do {
            for (bVar2 = *(byte *)(lVar5 + 0x11); (bVar2 & 1) == 0; bVar2 = bVar2 >> 1) {
            }
            FUN_14084ae70(uVar3,lVar5);
            pcVar1 = DAT_140c61b90;
            fVar11 = fVar10;
            if (DAT_140c61b90[2] != '\0') {
                fVar10 = (float)FUN_140835ca0();
            }
            fVar8 = fVar10;
            if (*pcVar1 != '\0') {
                fVar10 = (float)FUN_140835ca0();
                fVar10 = fVar10 * fVar8;
            }
            lVar6 = lVar5 + 0x24;
            *(float *)(lVar5 + 0x14) = fVar10 * local_res10 * fVar9 * fVar7;
            *(float *)(lVar5 + 0x1c) = fVar8 * local_res18;
            *(float *)(lVar5 + 0x18) = fVar8 * local_res8;
            lVar5 = lVar6;
            fVar10 = fVar11;
        } while (lVar6 != param_4[1]);
    }
    else {
        do {
            FUN_14084ae70(uVar3,lVar5);
            lVar6 = lVar5 + 0x24;
            *(float *)(lVar5 + 0x1c) = local_res18;
            *(float *)(lVar5 + 0x14) = local_res10 * fVar9 * fVar7;
            *(float *)(lVar5 + 0x18) = local_res8;
            lVar5 = lVar6;
        } while (lVar6 != param_4[1]);
    }
    return;
}



void FUN_14084ae70(float param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   undefined4 *param_5_00,undefined8 param_6_00,undefined4 *param_7_00,float *param_5
        ,float *param_6,float *param_7)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    float fVar4;
    undefined4 uVar5;
    undefined local_res8 [8];

    if (param_4 != 0) {
        lVar3 = 0;
        uVar5 = *param_5_00;
        lVar2 = lVar3;
        if ((*(byte *)(param_4 + 0x80) == 0xff) ||
            (lVar2 = ((ulonglong)*(byte *)(param_4 + 0x80) + 3) * 0x10 + param_4, lVar2 == 0)) {
            fVar4 = 1.0;
        }
        else {
            param_1 = (float)FUN_140835ca0(param_1,uVar5,lVar2,param_5_00,0,local_res8);
            fVar4 = param_1;
        }
        *param_5 = fVar4;
        lVar1 = lVar3;
        if (*(byte *)(param_4 + 0x81) != 0xff) {
            lVar1 = ((ulonglong)*(byte *)(param_4 + 0x81) + 3) * 0x10 + param_4;
        }
        if (lVar1 == lVar2) {
            *param_6 = fVar4;
        }
        else if (lVar1 == 0) {
            *param_6 = 1.0;
        }
        else {
            param_1 = (float)FUN_140835ca0(param_1,uVar5);
            *param_6 = param_1;
        }
        if (*(byte *)(param_4 + 0x82) != 0xff) {
            lVar3 = ((ulonglong)*(byte *)(param_4 + 0x82) + 3) * 0x10 + param_4;
        }
        if (lVar3 == lVar2) {
            *param_7 = fVar4;
        }
        else if (lVar3 == 0) {
            *param_7 = 1.0;
        }
        else {
            fVar4 = (float)FUN_140835ca0(param_1,uVar5,lVar3);
            *param_7 = fVar4;
        }
        if ((*(byte *)(param_4 + 0x85) & 1) == 0) {
            *param_7_00 = 0x3f800000;
        }
        else {
            fVar4 = (float)FUN_140849720(*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                                         param_3,param_5_00[3]);
            *param_5 = fVar4 * *param_5;
        }
        return;
    }
    *param_7_00 = 0x3f800000;
    *param_5 = 1.0;
    *param_6 = 1.0;
    *param_7 = 1.0;
    return;
}



void FUN_14084b080(void)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined4 *puVar3;
    uint uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 local_38;
    undefined4 uStack52;
    undefined local_28 [32];

    uVar4 = 0;
    puVar3 = &DAT_140c6206c;
    uVar5 = 0x3f800000;
    uVar6 = 0x3f800000;
    uVar7 = 0x3f800000;
    uVar8 = 0x3f800000;
    do {
        *(undefined (*) [16])(puVar3 + -0xf) = CONCAT412(uVar8,CONCAT48(uVar7,CONCAT44(uVar6,uVar5)));
        *(undefined (*) [16])(puVar3 + -0xb) = CONCAT412(uVar8,CONCAT48(uVar7,CONCAT44(uVar6,uVar5)));
        *(undefined *)(puVar3 + -0x11) = 1;
        puVar3[-0x12] = 0x3f800000;
        *(undefined2 *)(puVar3 + 2) = 0x100;
        if (uVar4 < 8) {
            puVar3[-0x1b] = DAT_140c10fd8;
            puVar3[-0x1a] = DAT_140c10fdc;
            puVar3[-0x19] = DAT_140c10fe0;
            puVar3[-0x18] = DAT_140c10fe4;
            puVar3[-0x17] = DAT_140c10fe8;
            puVar3[-0x16] = DAT_140c10fec;
            puVar3[-0x15] = DAT_140c10ff0;
            puVar3[-0x14] = DAT_140c10ff4;
            puVar3[-0x13] = DAT_140c10ff8;
            puVar2 = (undefined8 *)FUN_1408294f0(local_28,&DAT_140c10fe4,&DAT_140c10fd8);
            uVar1 = *(undefined4 *)(puVar2 + 1);
            local_38 = (undefined4)*puVar2;
            uStack52 = (undefined4)((ulonglong)*puVar2 >> 0x20);
            puVar3[-7] = local_38;
            puVar3[-6] = uStack52;
            puVar3[-5] = uVar1;
            puVar3[-4] = puVar3[-0x18];
            puVar3[-3] = puVar3[-0x17];
            puVar3[-2] = puVar3[-0x16];
            puVar3[-1] = puVar3[-0x1b];
            *puVar3 = puVar3[-0x1a];
            puVar3[1] = puVar3[-0x19];
            *(undefined *)((longlong)puVar3 + 9) = 1;
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 0x20;
    } while (uVar4 < 8);
    DAT_140c10f80 = 0xffffffff;
    DAT_140c61ff0 = 0;
    return;
}



void FUN_14084b1c0(void)

{
    byte bVar1;

    bVar1 = DAT_140c62075 != '\0';
    if (DAT_140c620f5 != '\0') {
        bVar1 = bVar1 | 2;
    }
    if (DAT_140c62175 != '\0') {
        bVar1 = bVar1 | 4;
    }
    if (DAT_140c621f5 != '\0') {
        bVar1 = bVar1 | 8;
    }
    if (DAT_140c62275 != '\0') {
        bVar1 = bVar1 | 0x10;
    }
    if (DAT_140c622f5 != '\0') {
        bVar1 = bVar1 | 0x20;
    }
    if (DAT_140c62375 != '\0') {
        bVar1 = bVar1 | 0x40;
    }
    if (DAT_140c623f5 != '\0') {
        bVar1 = bVar1 | 0x80;
    }
    if (bVar1 != 0) {
        FUN_1408304e0(DAT_140c61ba0);
    }
    DAT_140c62075 = 0;
    DAT_140c620f5 = 0;
    DAT_140c62175 = 0;
    DAT_140c621f5 = 0;
    DAT_140c62275 = 0;
    DAT_140c622f5 = 0;
    DAT_140c62375 = 0;
    DAT_140c623f5 = 0;
    return;
}



void FUN_14084b280(void)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    uint uVar3;
    undefined4 *puVar4;
    undefined4 local_28;
    undefined4 uStack36;
    undefined local_18 [16];

    uVar3 = 0;
    puVar4 = &DAT_140c6206c;
    do {
        puVar4[-0x1b] = puVar4[-0x1b];
        puVar4[-0x1a] = puVar4[-0x1a];
        puVar4[-0x19] = puVar4[-0x19];
        puVar4[-0x18] = puVar4[-0x18];
        puVar4[-0x17] = puVar4[-0x17];
        puVar4[-0x16] = puVar4[-0x16];
        puVar4[-0x15] = puVar4[-0x15];
        puVar4[-0x14] = puVar4[-0x14];
        puVar4[-0x13] = puVar4[-0x13];
        puVar2 = (undefined8 *)FUN_1408294f0(local_18,puVar4 + -0x18,puVar4 + -0x1b);
        uVar1 = *(undefined4 *)(puVar2 + 1);
        local_28 = (undefined4)*puVar2;
        uStack36 = (undefined4)((ulonglong)*puVar2 >> 0x20);
        puVar4[-7] = local_28;
        puVar4[-6] = uStack36;
        puVar4[-5] = uVar1;
        puVar4[-4] = puVar4[-0x18];
        puVar4[-3] = puVar4[-0x17];
        puVar4[-2] = puVar4[-0x16];
        puVar4[-1] = puVar4[-0x1b];
        *puVar4 = puVar4[-0x1a];
        puVar4[1] = puVar4[-0x19];
        *(undefined *)((longlong)puVar4 + 9) = 1;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x20;
    } while (uVar3 < 8);
    if (DAT_140c61c54 != 0) {
        DAT_140c62870 = 0x3fc90fdb;
        return;
    }
    DAT_140c62870 = 0x3f490fdb;
    return;
}



void FUN_14084b3a0(byte param_1,undefined param_2)

{
    ulonglong uVar1;

    uVar1 = 0;
    if (param_1 != 0) {
        do {
            if ((param_1 & 1) != 0) {
                (&DAT_140c62074)[uVar1 * 0x80] = param_2;
            }
            uVar1 = (ulonglong)((int)uVar1 + 1);
            param_1 = param_1 * '\x02';
        } while (param_1 != 0);
    }
    return;
}



void FUN_14084b3d0(byte param_1,char param_2,char param_3)

{
    uint uVar1;

    uVar1 = 1 << (param_1 & 0x1f);
    DAT_140c10f80 = DAT_140c10f80 & ~uVar1;
    if (param_2 != '\0') {
        DAT_140c10f80 = DAT_140c10f80 | uVar1;
    }
    DAT_140c61ff0 = DAT_140c61ff0 & ~uVar1;
    if (param_3 != '\0') {
        DAT_140c61ff0 = DAT_140c61ff0 | uVar1;
    }
    return;
}



undefined8 FUN_14084b420(uint param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined4 local_28;
    undefined4 uStack36;
    undefined local_18 [16];

    if (7 < param_1) {
        return 0x1f;
    }
    uVar3 = (ulonglong)param_1;
    (&DAT_140c62000)[uVar3 * 0x20] = *param_2;
    (&DAT_140c62004)[uVar3 * 0x20] = param_2[1];
    (&DAT_140c62008)[uVar3 * 0x20] = param_2[2];
    (&DAT_140c6200c)[uVar3 * 0x20] = param_2[3];
    (&DAT_140c62010)[uVar3 * 0x20] = param_2[4];
    (&DAT_140c62014)[uVar3 * 0x20] = param_2[5];
    (&DAT_140c62018)[uVar3 * 0x20] = param_2[6];
    (&DAT_140c6201c)[uVar3 * 0x20] = param_2[7];
    (&DAT_140c62020)[uVar3 * 0x20] = param_2[8];
    puVar2 = (undefined8 *)FUN_1408294f0(local_18,param_2 + 3,param_2);
    uVar1 = *(undefined4 *)(puVar2 + 1);
    local_28 = (undefined4)*puVar2;
    uStack36 = (undefined4)((ulonglong)*puVar2 >> 0x20);
    (&DAT_140c62050)[uVar3 * 0x20] = local_28;
    (&DAT_140c62054)[uVar3 * 0x20] = uStack36;
    (&DAT_140c62058)[uVar3 * 0x20] = uVar1;
    (&DAT_140c6205c)[uVar3 * 0x20] = (&DAT_140c6200c)[uVar3 * 0x20];
    (&DAT_140c62060)[uVar3 * 0x20] = (&DAT_140c62010)[uVar3 * 0x20];
    (&DAT_140c62064)[uVar3 * 0x20] = (&DAT_140c62014)[uVar3 * 0x20];
    (&DAT_140c62068)[uVar3 * 0x20] = (&DAT_140c62000)[uVar3 * 0x20];
    (&DAT_140c6206c)[uVar3 * 0x20] = (&DAT_140c62004)[uVar3 * 0x20];
    (&DAT_140c62070)[uVar3 * 0x20] = (&DAT_140c62008)[uVar3 * 0x20];
    (&DAT_140c62075)[uVar3 * 0x80] = 1;
    return 1;
}



undefined8 FUN_14084b500(uint param_1,undefined param_2,undefined4 *param_3)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    if (7 < param_1) {
        return 0x1f;
    }
    lVar3 = (ulonglong)param_1 * 0x80;
    (&DAT_140c62028)[lVar3] = param_2;
    uVar2 = DAT_140c61bfc;
    if (param_3 == (undefined4 *)0x0) {
        *(undefined (*) [16])(&DAT_140c62030 + lVar3) =
                CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
        *(undefined (*) [16])(&DAT_140c62040 + lVar3) =
                CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
        return 1;
    }
    *(undefined4 *)(&DAT_140c62030 + lVar3) = *param_3;
    fVar5 = 0.0;
    *(undefined4 *)(&DAT_140c62034 + lVar3) = param_3[1];
    *(undefined4 *)(&DAT_140c62038 + lVar3) = param_3[2];
    *(undefined4 *)(&DAT_140c6203c + lVar3) = param_3[3];
    *(undefined4 *)(&DAT_140c62040 + lVar3) = param_3[4];
    *(undefined4 *)(&DAT_140c62044 + lVar3) = param_3[5];
    *(undefined8 *)(&DAT_140c62048 + lVar3) = 0;
    if (-37.0 <= *(float *)(&DAT_140c62030 + lVar3) * 0.05) {
        if ((uVar2 & 1) == 0) {
            uVar2 = uVar2 | 1;
            DAT_140c61bf8 = 2.786635e+07;
            DAT_140c61bfc = uVar2;
        }
        uVar1 = (uint)(longlong)
                (DAT_140c61bf8 * *(float *)(&DAT_140c62030 + lVar3) * 0.05 + 1.065353e+09);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) * (float)(uVar1 & 0xff800000);
    }
    else {
        fVar6 = 0.0;
    }
    fVar4 = DAT_140c61bf8;
    *(float *)(&DAT_140c62030 + lVar3) = fVar6;
    if (-37.0 <= *(float *)(&DAT_140c62034 + lVar3) * 0.05) {
        if ((uVar2 & 1) == 0) {
            fVar4 = 2.786635e+07;
            uVar2 = uVar2 | 1;
            DAT_140c61bf8 = 2.786635e+07;
            DAT_140c61bfc = uVar2;
        }
        uVar1 = (uint)(longlong)(fVar4 * *(float *)(&DAT_140c62034 + lVar3) * 0.05 + 1.065353e+09);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) * (float)(uVar1 & 0xff800000);
    }
    else {
        fVar6 = 0.0;
    }
    *(float *)(&DAT_140c62034 + lVar3) = fVar6;
    if (-37.0 <= *(float *)(&DAT_140c62038 + lVar3) * 0.05) {
        if ((uVar2 & 1) == 0) {
            fVar4 = 2.786635e+07;
            uVar2 = uVar2 | 1;
            DAT_140c61bf8 = 2.786635e+07;
            DAT_140c61bfc = uVar2;
        }
        uVar1 = (uint)(longlong)(fVar4 * *(float *)(&DAT_140c62038 + lVar3) * 0.05 + 1.065353e+09);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) * (float)(uVar1 & 0xff800000);
    }
    else {
        fVar6 = 0.0;
    }
    *(float *)(&DAT_140c62038 + lVar3) = fVar6;
    if (-37.0 <= *(float *)(&DAT_140c62044 + lVar3) * 0.05) {
        if ((uVar2 & 1) == 0) {
            fVar4 = 2.786635e+07;
            uVar2 = uVar2 | 1;
            DAT_140c61bf8 = 2.786635e+07;
            DAT_140c61bfc = uVar2;
        }
        uVar1 = (uint)(longlong)(*(float *)(&DAT_140c62044 + lVar3) * 0.05 * fVar4 + 1.065353e+09);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) * (float)(uVar1 & 0xff800000);
    }
    else {
        fVar6 = 0.0;
    }
    *(float *)(&DAT_140c62044 + lVar3) = fVar6;
    if (-37.0 <= *(float *)(&DAT_140c6203c + lVar3) * 0.05) {
        if ((uVar2 & 1) == 0) {
            fVar4 = 2.786635e+07;
            uVar2 = uVar2 | 1;
            DAT_140c61bf8 = 2.786635e+07;
            DAT_140c61bfc = uVar2;
        }
        uVar1 = (uint)(longlong)(*(float *)(&DAT_140c6203c + lVar3) * 0.05 * fVar4 + 1.065353e+09);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.3251898 + 0.02080577) * fVar6 + 0.6530434) * (float)(uVar1 & 0xff800000);
    }
    else {
        fVar6 = 0.0;
    }
    *(float *)(&DAT_140c6203c + lVar3) = fVar6;
    if (-37.0 <= *(float *)(&DAT_140c62040 + lVar3) * 0.05) {
        if ((uVar2 & 1) == 0) {
            fVar4 = 2.786635e+07;
            DAT_140c61bfc = uVar2 | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar2 = (uint)(longlong)(*(float *)(&DAT_140c62040 + lVar3) * 0.05 * fVar4 + 1.065353e+09);
        fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar5 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * (float)(uVar2 & 0xff800000);
    }
    *(float *)(&DAT_140c62040 + lVar3) = fVar5;
    return 1;
}



void FUN_14084b960(undefined8 param_1,undefined4 param_2,ulonglong param_3)

{
    (&DAT_140c62024)[(param_3 & 0xffffffff) * 0x20] = param_2;
    (&DAT_140c62075)[(param_3 & 0xffffffff) * 0x80] = 1;
    return;
}



undefined8 * FUN_14084b980(undefined8 *param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = param_1[4];
    *param_1 = &PTR_FUN_1409a3258;
    while (lVar2 != 0) {
        plVar1 = (longlong *)param_1[4];
        if (plVar1 != (longlong *)0x0) {
            param_1[4] = plVar1[4];
        }
        (**(code **)(*plVar1 + 0x10))();
        lVar2 = param_1[4];
    }
    param_1[4] = 0;
    FUN_140865e30(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_14084b9f0(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x12a8));
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x12a8));
    return iVar2;
}



void FUN_14084ba40(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    longlong lVar1;
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar2;

    lVar1 = DAT_140c61ba8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x12a8);
    EnterCriticalSection(lpCriticalSection);
    uVar2 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
    (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar2];
    (&lpCriticalSection[1].DebugInfo)[uVar2] = param_1;
    *(int *)(lVar1 + 0x18d8) = *(int *)(lVar1 + 0x18d8) + 1;
    // WARNING: Could not recover jumptable at 0x00014084ba9f. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(lpCriticalSection);
    return;
}



undefined8 * FUN_14084bab0(undefined4 param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x30);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140865e10(puVar1,param_1);
        *puVar1 = &PTR_FUN_1409a3258;
        puVar1[4] = 0;
        *(undefined4 *)(puVar1 + 5) = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_14084bba0(longlong param_1,longlong param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    uint *puVar5;
    uint uVar6;
    LPCRITICAL_SECTION lpCriticalSection;

    uVar1 = *(uint *)(param_2 + 4);
    lVar4 = 0;
    uVar6 = 0;
    puVar5 = (uint *)(param_2 + 8);
    if (uVar1 == 0) {
        return 1;
    }
    while( true ) {
        lVar3 = DAT_140c61ba8;
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        if (uVar2 == 0) {
            return 0xe;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x18e0);
        EnterCriticalSection(lpCriticalSection);
        lVar3 = *(longlong *)(lVar3 + 0x1908 + (ulonglong)(uVar2 % 0xc1) * 8);
        while( true ) {
            if (lVar3 == 0) goto LAB_14084bc31;
            if (*(uint *)(lVar3 + 0x18) == uVar2) break;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
        if (lVar3 == 0) break;
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        LeaveCriticalSection(lpCriticalSection);
        *(undefined8 *)(lVar3 + 0x20) = 0;
        if (lVar4 == 0) {
            *(longlong *)(param_1 + 0x20) = lVar3;
        }
        else {
            *(longlong *)(lVar4 + 0x20) = lVar3;
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar3;
        if (uVar1 <= uVar6) {
            return 1;
        }
    }
    LAB_14084bc31:
    LeaveCriticalSection(lpCriticalSection);
    return 2;
}



undefined8 * FUN_14084bcc0(undefined8 *param_1,undefined8 param_2)

{
    *param_1 = 0;
    *(byte *)((longlong)param_1 + 0x13) = *(byte *)((longlong)param_1 + 0x13) & 0xf8;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined *)((longlong)param_1 + 0x12) = 1;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x10] = param_2;
    *(undefined4 *)(param_1 + 0x11) = 0xc0000001;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    return param_1;
}



void FUN_14084bd30(longlong *param_1)

{
    FUN_14084c050();
    if (*param_1 != 0) {
        FUN_140830b20();
        if (*param_1 != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        *param_1 = 0;
    }
    if (param_1[7] != 0) {
        param_1[8] = param_1[7];
        FUN_140881720(DAT_140c10f20);
        param_1[7] = 0;
        param_1[8] = 0;
        *(undefined4 *)(param_1 + 9) = 0;
    }
    if (param_1[0xd] != 0) {
        param_1[0xe] = param_1[0xd];
        FUN_140881720(DAT_140c10f20);
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        *(undefined4 *)(param_1 + 0xf) = 0;
    }
    if (param_1[1] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0;
    }
    return;
}



longlong FUN_14084bde0(longlong *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    uint uVar3;
    char cVar4;

    uVar3 = (uint)((param_1[1] - *param_1) / 0x14);
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar4 = FUN_14084c110(param_1,1), cVar4 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
        *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) & 0xfc;
        puVar1[1] = 0;
        *puVar1 = 0;
        *(undefined *)((longlong)puVar1 + 0x11) = 0;
    }
    lVar2 = param_1[1];
    param_1[1] = lVar2 + 0x14;
    return lVar2;
}



void FUN_14084be70(longlong param_1,undefined4 *param_2)

{
    ushort uVar1;
    undefined4 *puVar2;
    byte bVar3;
    int iVar4;

    uVar1 = 1;
    if ((*(byte *)(param_1 + 0x13) & 7) != 0) {
        uVar1 = *(ushort *)(param_1 + 0x10);
    }
    iVar4 = 0;
    for (bVar3 = *(byte *)(param_1 + 0x12); bVar3 != 0; bVar3 = bVar3 & bVar3 - 1) {
        iVar4 = iVar4 + 1;
    }
    if ((iVar4 * (uint)uVar1 == 1) && (*(int *)(param_1 + 0x88) < 0)) {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
        puVar2 = (undefined4 *)FUN_14084bde0();
        if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *param_2;
            puVar2[1] = param_2[1];
            puVar2[2] = param_2[2];
            puVar2[3] = param_2[3];
            *(byte *)(puVar2 + 4) =
                    *(byte *)(puVar2 + 4) ^ (*(byte *)(puVar2 + 4) ^ *(byte *)(param_2 + 4)) & 1;
            *(byte *)(puVar2 + 4) =
                    *(byte *)(puVar2 + 4) ^ (*(byte *)(puVar2 + 4) ^ *(byte *)(param_2 + 4)) & 2;
            *(undefined *)((longlong)puVar2 + 0x11) = *(undefined *)((longlong)param_2 + 0x11);
            *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xbfffffff;
            return;
        }
    }
    else {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40000000;
    }
    return;
}



void FUN_14084bf40(longlong param_1,longlong *param_2)

{
    int iVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;

    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    if (-1 < (int)*(uint *)(param_1 + 0x88)) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40000000;
        return;
    }
    puVar3 = (undefined4 *)*param_2;
    if ((undefined4 *)*param_2 != (undefined4 *)param_2[1]) {
        do {
            puVar2 = (undefined4 *)FUN_14084bde0();
            if (puVar2 == (undefined4 *)0x0) {
                return;
            }
            puVar4 = puVar3 + 9;
            *puVar2 = *puVar3;
            puVar2[1] = puVar3[1];
            puVar2[2] = puVar3[2];
            puVar2[3] = puVar3[3];
            *(byte *)(puVar2 + 4) =
                    *(byte *)(puVar2 + 4) ^ (*(byte *)(puVar3 + 4) ^ *(byte *)(puVar2 + 4)) & 1;
            *(byte *)(puVar2 + 4) =
                    *(byte *)(puVar2 + 4) ^ (*(byte *)(puVar3 + 4) ^ *(byte *)(puVar2 + 4)) & 2;
            *(undefined *)((longlong)puVar2 + 0x11) = *(undefined *)((longlong)puVar3 + 0x11);
            puVar3 = puVar4;
        } while (puVar4 != (undefined4 *)param_2[1]);
    }
    iVar1 = (int)(param_2[1] - *param_2 >> 0x3f);
    *(uint *)(param_1 + 0x88) =
            *(uint *)(param_1 + 0x88) ^
            ((uint)((int)((param_2[1] - *param_2) / 0x24) + iVar1 == iVar1) << 0x1e ^
             *(uint *)(param_1 + 0x88)) & 0x40000000;
    return;
}



void FUN_14084c050(longlong *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    uint uVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    longlong *plVar14;
    uint local_60;

    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        for (puVar7 = *(undefined8 **)(undefined8 *)*param_1; puVar7 != (undefined8 *)0x0;
             puVar7 = (undefined8 *)*puVar7) {
            plVar4 = (longlong *)FUN_140830ee0(DAT_140c61ba8,puVar7 + 1);
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x40))(plVar4,param_1);
                (**(code **)(*plVar4 + 0x10))(plVar4);
            }
        }
    }
    plVar4 = DAT_140c61bb0;
    if (param_1 == (longlong *)0x0) {
        return;
    }
    puVar8 = (undefined8 *)0x0;
    plVar1 = DAT_140c61bb0 + 0x185;
    puVar7 = (undefined8 *)*plVar1;
    puVar6 = puVar8;
    while (puVar13 = puVar8, plVar14 = param_1, puVar7 == (undefined8 *)0x0) {
        uVar11 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar11;
        if (0xc0 < uVar11) goto LAB_140839350;
        puVar7 = (undefined8 *)plVar1[(longlong)puVar6];
    }
    do {
        while ((longlong *)puVar7[3] != param_1) {
            puVar13 = (undefined8 *)puVar7[2];
            puVar9 = puVar7;
            while (puVar7 = puVar13, puVar13 = puVar9, puVar7 == (undefined8 *)0x0) {
                uVar11 = (int)puVar6 + 1;
                puVar6 = (undefined8 *)(ulonglong)uVar11;
                if (0xc0 < uVar11) goto LAB_140839342;
                puVar9 = (undefined8 *)0x0;
                puVar13 = (undefined8 *)plVar1[(longlong)puVar6];
            }
        }
        local_60 = (uint)puVar6;
        puVar12 = (undefined8 *)puVar7[2];
        puVar2 = puVar12;
        puVar9 = puVar13;
        puVar5 = puVar6;
        while (puVar2 == (undefined8 *)0x0) {
            local_60 = (int)puVar5 + 1;
            puVar5 = (undefined8 *)(ulonglong)local_60;
            if (0xc0 < local_60) break;
            puVar9 = puVar8;
            puVar2 = (undefined8 *)plVar1[(longlong)puVar5];
        }
        if (puVar13 == (undefined8 *)0x0) {
            plVar1[(longlong)puVar6] = (longlong)puVar12;
        }
        else {
            puVar13[2] = puVar12;
        }
        *(int *)(plVar4 + 0x246) = *(int *)(plVar4 + 0x246) + -1;
        FUN_140837930(plVar4,puVar7);
        uVar3 = DAT_140c10f20;
        param_1 = plVar14;
        if (puVar7[5] != 0) {
            puVar7[6] = puVar7[5];
            FUN_140881720();
            puVar7[5] = 0;
            puVar7[6] = 0;
            *(undefined4 *)(puVar7 + 7) = 0;
            param_1 = plVar14;
        }
        FUN_140881720(uVar3,puVar7);
        puVar6 = (undefined8 *)(ulonglong)local_60;
        puVar7 = puVar2;
        plVar14 = param_1;
        LAB_140839342:
        puVar13 = puVar9;
    } while (puVar7 != (undefined8 *)0x0);
    LAB_140839350:
    puVar7 = (undefined8 *)plVar4[0xc3];
    puVar6 = puVar8;
    while (puVar13 = puVar8, puVar7 == (undefined8 *)0x0) {
        uVar11 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar11;
        if (0xc0 < uVar11) goto LAB_14083945b;
        puVar7 = (undefined8 *)plVar4[(longlong)puVar6 + 0xc3];
    }
    do {
        while ((longlong *)puVar7[2] != param_1) {
            puVar9 = (undefined8 *)*puVar7;
            puVar13 = puVar7;
            while (puVar7 = puVar9, puVar7 == (undefined8 *)0x0) {
                uVar11 = (int)puVar6 + 1;
                puVar6 = (undefined8 *)(ulonglong)uVar11;
                if (0xc0 < uVar11) goto LAB_140839452;
                puVar13 = (undefined8 *)0x0;
                puVar9 = (undefined8 *)plVar4[(longlong)puVar6 + 0xc3];
            }
        }
        local_60 = (uint)puVar6;
        puVar9 = (undefined8 *)*puVar7;
        puVar7 = puVar9;
        puVar12 = puVar6;
        puVar2 = puVar13;
        while (puVar7 == (undefined8 *)0x0) {
            local_60 = (int)puVar12 + 1;
            puVar12 = (undefined8 *)(ulonglong)local_60;
            if (0xc0 < local_60) break;
            puVar2 = puVar8;
            puVar7 = (undefined8 *)plVar4[(longlong)puVar12 + 0xc3];
        }
        if (puVar13 == (undefined8 *)0x0) {
            plVar4[(longlong)puVar6 + 0xc3] = (longlong)puVar9;
        }
        else {
            *puVar13 = puVar9;
        }
        param_1 = plVar14;
        FUN_140881720();
        *(int *)(plVar4 + 0x184) = *(int *)(plVar4 + 0x184) + -1;
        puVar6 = (undefined8 *)(ulonglong)local_60;
        puVar13 = puVar2;
        plVar14 = param_1;
        LAB_140839452:
    } while (puVar7 != (undefined8 *)0x0);
    LAB_14083945b:
    lVar10 = *plVar4;
    while (lVar10 == 0) {
        uVar11 = (int)puVar8 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar11;
        if (0xc0 < uVar11) goto joined_r0x0001408394c2;
        lVar10 = plVar4[(longlong)puVar8];
    }
    LAB_1408394c4:
    do {
        FUN_1408377f0(lVar10,param_1);
        param_1 = plVar14;
        lVar10 = *(longlong *)(lVar10 + 8);
        while (plVar14 = param_1, lVar10 == 0) {
            uVar11 = (int)puVar8 + 1;
            puVar8 = (undefined8 *)(ulonglong)uVar11;
            if (0xc0 < uVar11) goto joined_r0x0001408394c2;
            lVar10 = plVar4[(longlong)puVar8];
        }
    } while( true );
    joined_r0x0001408394c2:
    if (lVar10 == 0) {
        return;
    }
    goto LAB_1408394c4;
}



undefined8 FUN_14084c110(longlong *param_1,int param_2)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    ulonglong uVar8;

    iVar2 = *(int *)(param_1 + 2);
    lVar5 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar2 + param_2) * 0x14);
    if (lVar5 != 0) {
        uVar8 = (param_1[1] - *param_1) / 0x14;
        uVar6 = uVar8 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar8 != 0) {
                lVar4 = -lVar5;
                puVar7 = (undefined4 *)(lVar5 + 4);
                uVar8 = uVar6;
                do {
                    puVar1 = puVar7 + -1;
                    if (puVar1 != (undefined4 *)0x0) {
                        *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) & 0xfc;
                        *(undefined8 *)(puVar7 + 1) = 0;
                        *puVar1 = 0;
                        *puVar7 = 0;
                        *(undefined *)((longlong)puVar7 + 0xd) = 0;
                    }
                    lVar3 = *param_1;
                    *puVar1 = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + -4);
                    *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4);
                    puVar7[1] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 4);
                    puVar7[2] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 8);
                    puVar7[3] = *(undefined4 *)((longlong)puVar7 + lVar3 + lVar4 + 0xc);
                    uVar8 = uVar8 - 1;
                    puVar7 = puVar7 + 5;
                } while (uVar8 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *(int *)(param_1 + 2) = iVar2 + param_2;
        *param_1 = lVar5;
        param_1[1] = lVar5 + uVar6 * 0x14;
        return CONCAT71((int7)(uVar6 * 5 >> 8),1);
    }
    return 0;
}



void FUN_14084c240(longlong param_1,undefined param_2)

{
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40000000;
    *(undefined *)(param_1 + 0x12) = param_2;
    return;
}



undefined8 FUN_14084c3a0(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    byte bVar6;
    uint uStackX12;

    puVar5 = (undefined8 *)*param_1;
    iVar1 = *(int *)(param_2 + 0x18);
    bVar6 = *(byte *)(param_2 + 0x5b) >> 1;
    if (puVar5 == (undefined8 *)0x0) {
        lVar2 = FUN_1408819f0(DAT_140c10f20,0x30);
        *param_1 = lVar2;
        if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x18) = 0;
            *(undefined4 *)(lVar2 + 0x20) = 0;
            puVar5 = (undefined8 *)*param_1;
            if (puVar5 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar5 + 4) = 0;
                *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
                puVar5[2] = 0;
                puVar5[5] = 0;
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar5 = (undefined8 *)*param_1;
                if (puVar5 != (undefined8 *)0x0) goto LAB_14084c429;
            }
        }
        LAB_14084c41f:
        uVar3 = 2;
    }
    else {
        LAB_14084c429:
        for (puVar4 = (undefined8 *)*puVar5; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4
                ) {
            if ((iVar1 == *(int *)(puVar4 + 1)) && ((bVar6 & 1) == *(byte *)((longlong)puVar4 + 0xc))) {
                if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) goto LAB_14084c4b1;
                break;
            }
        }
        if (puVar5[2] == 0) {
            if ((*(uint *)((longlong)puVar5 + 0x1c) <= *(uint *)(puVar5 + 4)) ||
                (puVar4 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x10), puVar4 == (undefined8 *)0x0))
                goto LAB_14084c41f;
            *puVar4 = puVar5[2];
            puVar5[2] = puVar4;
        }
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
            *puVar5 = puVar5[2];
        }
        else {
            *(undefined8 *)puVar5[1] = puVar5[2];
        }
        puVar4 = (undefined8 *)puVar5[2];
        puVar5[1] = puVar4;
        puVar5[2] = *puVar4;
        *puVar4 = 0;
        *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
        *(ulonglong *)(puVar5[1] + 8) =
                CONCAT44(uStackX12 & 0xffffff00 | (uint)bVar6,iVar1) & 0xffffff01ffffffff;
        LAB_14084c4b1:
        uVar3 = 1;
    }
    return uVar3;
}



undefined8 FUN_14084c510(longlong *param_1,undefined8 param_2,ushort param_3)

{
    longlong lVar1;

    if (param_3 != *(ushort *)(param_1 + 1)) {
        if (*param_1 != 0) {
            FUN_140881720(DAT_140c10f20);
            *param_1 = 0;
            *(undefined2 *)(param_1 + 1) = 0;
        }
        if (param_3 != 0) {
            lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)param_3 * 0x18);
            *param_1 = lVar1;
            if (lVar1 == 0) {
                return 0x34;
            }
            *(ushort *)(param_1 + 1) = param_3;
        }
    }
    FUN_1407db590(*param_1,param_2,(ulonglong)*(ushort *)(param_1 + 1) * 0x18);
    return 1;
}



void FUN_14084c5c0(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
    FUN_14084c510(param_1 + 8);
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xf8;
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | param_4 & 7;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40000000;
    return;
}



undefined8 * FUN_14084c610(undefined8 *param_1)

{
    FUN_140851300();
    *param_1 = &PTR_LAB_1409a3290;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_1 + 0xa1) & 0xf8;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined *)(param_1 + 0x14) = 4;
    return param_1;
}



void FUN_14084c670(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    longlong lVar5;

    *param_1 = &PTR_LAB_1409a3290;
    plVar1 = (longlong *)param_1[0xe];
    if (plVar1 != (longlong *)0x0) {
        lVar5 = *plVar1;
        if (lVar5 != plVar1[1]) {
            do {
                uVar4 = DAT_140c10f20;
                lVar2 = *(longlong *)(lVar5 + 8);
                if (lVar2 != 0) {
                    FUN_140873940(lVar2);
                    FUN_140881720(uVar4,lVar2);
                }
                lVar5 = lVar5 + 0x10;
            } while (lVar5 != *(longlong *)(param_1[0xe] + 8));
        }
        plVar1 = (longlong *)param_1[0xe];
        if (*plVar1 != 0) {
            plVar1[1] = *plVar1;
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
            plVar1[1] = 0;
            *(undefined4 *)(plVar1 + 2) = 0;
        }
        if (param_1[0xe] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[0xe] = 0;
    }
    if (param_1[0xf] != 0) {
        FUN_140873c30();
        FUN_140873eb0(param_1[0xf]);
        uVar4 = DAT_140c10f20;
        puVar3 = (undefined8 *)param_1[0xf];
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_140881720(uVar4,puVar3);
        }
        param_1[0xf] = 0;
    }
    if (param_1[0xf] != 0) {
        FUN_140873c30();
    }
    plVar1 = (longlong *)param_1[0x12];
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            plVar1[1] = *plVar1;
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
            plVar1[1] = 0;
            *(undefined4 *)(plVar1 + 2) = 0;
        }
        if (param_1[0x12] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
    }
    if (param_1[0x13] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    if (param_1[0x10] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[0x10] = 0;
    FUN_140851350(param_1);
    return;
}



undefined8 FUN_14084c810(undefined8 param_1,uint param_2)

{
    FUN_140873b80();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



byte * FUN_14084c870(byte **param_1,byte param_2)

{
    int iVar1;
    byte *pbVar2;
    uint uVar3;
    ulonglong uVar4;

    if (*param_1 == (byte *)0x0) {
        uVar4 = 0;
    }
    else {
        uVar4 = (ulonglong)**param_1;
    }
    iVar1 = (int)uVar4;
    uVar3 = iVar1 + 5;
    pbVar2 = (byte *)FUN_1408819f0(DAT_140c10f20,(uVar3 & 0xfffffffc) + 8 + iVar1 * 8);
    if (pbVar2 != (byte *)0x0) {
        if (*param_1 != (byte *)0x0) {
            FUN_1407db590(pbVar2 + 1,*param_1 + 1,uVar4);
            FUN_1407db590(pbVar2 + ((ulonglong)uVar3 & 0xfffffffc),
                          *param_1 + ((ulonglong)(iVar1 + 4) & 0xfffffffc),uVar4 * 8);
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        pbVar2[iVar1 + 1] = param_2;
        *pbVar2 = (char)uVar4 + 1;
        *param_1 = pbVar2;
        pbVar2 = pbVar2 + uVar4 * 8 + ((ulonglong)uVar3 & 0xfffffffc);
    }
    return pbVar2;
}



byte * FUN_14084c950(byte **param_1,byte param_2)

{
    int iVar1;
    byte *pbVar2;
    uint uVar3;
    ulonglong uVar4;

    if (*param_1 == (byte *)0x0) {
        uVar4 = 0;
    }
    else {
        uVar4 = (ulonglong)**param_1;
    }
    iVar1 = (int)uVar4;
    uVar3 = iVar1 + 5;
    pbVar2 = (byte *)FUN_1408819f0(DAT_140c10f20,(uVar3 & 0xfffffffc) + 4 + iVar1 * 4);
    if (pbVar2 != (byte *)0x0) {
        if (*param_1 != (byte *)0x0) {
            FUN_1407db590(pbVar2 + 1,*param_1 + 1,uVar4);
            FUN_1407db590(pbVar2 + ((ulonglong)uVar3 & 0xfffffffc),
                          *param_1 + ((ulonglong)(iVar1 + 4) & 0xfffffffc),uVar4 * 4);
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        pbVar2[iVar1 + 1] = param_2;
        *pbVar2 = (char)uVar4 + 1;
        *param_1 = pbVar2;
        pbVar2 = pbVar2 + uVar4 * 4 + ((ulonglong)uVar3 & 0xfffffffc);
    }
    return pbVar2;
}



undefined8 FUN_14084ca30(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    if ((int)param_2 == 0) {
        return 0xe;
    }
    lVar1 = FUN_140830f00(DAT_140c61ba8,param_2,0);
    if (lVar1 == 0) {
        return 0xf;
    }
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    return uVar2;
}



undefined8 * FUN_14084ca80(longlong *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 2)) || (cVar2 = FUN_140892ef0(param_1,4), cVar2 != '\0')) &&
        (uVar3 < *(uint *)(param_1 + 2))) {
        puVar1 = (undefined8 *)param_1[1];
        param_1[1] = (longlong)(puVar1 + 1);
        if (puVar1 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
        }
        *puVar1 = param_2;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



longlong FUN_14084cb00(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14082fcd0(param_1,2), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x18;
    return lVar1;
}



void FUN_14084cb80(longlong param_1,undefined2 param_2,longlong param_3,longlong **param_4,
                   char param_5)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;

    if (param_5 == '\0') {
        plVar2 = *(longlong **)(param_1 + 0x38);
        if (plVar2 != (longlong *)0x0) {
            if ((*(byte *)(plVar2 + 10) & 1) != 0) {
                *(undefined2 *)(plVar2 + 7) = param_2;
                *(undefined2 *)(param_1 + 0x58) = param_2;
                return;
            }
            lVar4 = *plVar2;
            if (lVar4 != plVar2[1]) {
                do {
                    if (*(longlong *)(lVar4 + 8) != 0) {
                        *(undefined2 *)(*(longlong *)(lVar4 + 8) + 0x18) = param_2;
                    }
                    lVar4 = lVar4 + 0x18;
                } while (lVar4 != *(longlong *)(*(longlong *)(param_1 + 0x38) + 8));
            }
        }
        *(undefined2 *)(param_1 + 0x58) = param_2;
    }
    else {
        pplVar1 = *(longlong ***)(param_1 + 0x38);
        if (pplVar1 != (longlong **)0x0) {
            if (param_3 == 0) {
                if ((*(byte *)(pplVar1 + 10) & 1) != 0) {
                    *(undefined2 *)(pplVar1 + 7) = param_2;
                    return;
                }
                if (param_4 == (longlong **)0x0) {
                    plVar2 = *pplVar1;
                    if (plVar2 != pplVar1[1]) {
                        do {
                            if (plVar2[1] != 0) {
                                *(undefined2 *)(plVar2[1] + 0x18) = param_2;
                            }
                            plVar2 = plVar2 + 3;
                        } while (plVar2 != *(longlong **)(*(longlong *)(param_1 + 0x38) + 8));
                        return;
                    }
                }
                else {
                    plVar2 = *pplVar1;
                    if (plVar2 != pplVar1[1]) {
                        do {
                            plVar3 = *param_4;
                            if (plVar3 != param_4[1]) {
                                do {
                                    if (*plVar3 == *plVar2) goto LAB_14084cc8b;
                                    plVar3 = plVar3 + 1;
                                } while (plVar3 != param_4[1]);
                            }
                            if (plVar2[1] != 0) {
                                *(undefined2 *)(plVar2[1] + 0x18) = param_2;
                            }
                            LAB_14084cc8b:
                            plVar2 = plVar2 + 3;
                            if (plVar2 == *(longlong **)(*(longlong *)(param_1 + 0x38) + 8)) {
                                return;
                            }
                        } while( true );
                    }
                }
            }
            else if (((*(byte *)(pplVar1 + 10) & 1) == 0) &&
                     (((*(byte *)(param_1 + 0x5a) & 8) != 0 || (*(longlong *)(param_1 + 0x40) == 0)))) {
                plVar2 = *pplVar1;
                plVar3 = pplVar1[1];
                if (plVar2 != plVar3) {
                    do {
                        if (*plVar2 == param_3) break;
                        plVar2 = plVar2 + 3;
                    } while (plVar2 != plVar3);
                    if (((plVar2 != plVar3) && (plVar2 + 1 != (longlong *)0x0)) &&
                        (lVar4 = plVar2[1], lVar4 != 0)) {
                        *(undefined2 *)(lVar4 + 0x18) = param_2;
                        return;
                    }
                }
            }
        }
    }
    return;
}



undefined8 FUN_14084cd00(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;

    if (param_1[0x12] == 0) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18);
        param_1[0x12] = (longlong)puVar2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
        }
    }
    if (param_1[0x12] != 0) {
        lVar3 = FUN_14084ca80(param_1[0x12],param_2);
        if (lVar3 != 0) {
            (**(code **)(*param_1 + 0x198))(param_1);
            return 1;
        }
    }
    plVar1 = (longlong *)param_1[0x12];
    if ((plVar1 != (longlong *)0x0) && (plVar1[1] == *plVar1)) {
        FUN_140881720(DAT_140c10f20);
        param_1[0x12] = 0;
    }
    return 0x34;
}



longlong * FUN_14084cdc0(longlong param_1,longlong param_2,undefined4 param_3)

{
    longlong *plVar1;
    undefined4 uStackX12;

    plVar1 = (longlong *)FUN_140856d40(0x503,0,param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
        *(undefined4 *)(plVar1 + 0x1e) = *(undefined4 *)(param_1 + 0x28);
        FUN_140857160(plVar1,param_2 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,CONCAT44(uStackX12,param_3) & 0xffffff00ffffffff);
        FUN_140857210(plVar1,*(undefined8 *)(param_2 + 8));
        FUN_140857400(plVar1,*(undefined4 *)(param_2 + 0x98));
        FUN_140857230(plVar1,*(undefined *)(param_2 + 0x9d));
        FUN_140857200(plVar1,*(undefined4 *)(param_2 + 0x88));
    }
    return plVar1;
}



int FUN_14084ce80(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    lVar3 = FUN_1408819f0(DAT_140c10f20,0x50);
    if ((lVar3 != 0) &&
        (plVar4 = (longlong *)FUN_14082b2c0(lVar3,*(undefined8 *)(param_2 + 0x10)),
                plVar4 != (longlong *)0x0)) {
        iVar2 = FUN_140857370(param_4,*param_1,*(undefined *)(param_1 + 3),plVar4);
        if ((iVar2 == 1) &&
            (iVar2 = FUN_1408572d0(param_4,param_1[1],*(undefined *)((longlong)param_1 + 0x19),plVar4),
                    iVar2 == 1)) {
            FUN_140857240(param_4,param_1[2]);
            iVar2 = (**(code **)(*param_4 + 0x30))(param_4,0xe,param_3,0,0);
            uVar1 = DAT_140c10f20;
            if (iVar2 != 1) {
                (**(code **)(*plVar4 + 8))(plVar4,0);
                FUN_140881720(uVar1,plVar4);
                return iVar2;
            }
            plVar4[1] = (longlong)param_4;
            FUN_14082b460(plVar4 + 4,param_2 + 0x20);
            FUN_14082bb80(DAT_140c61b68,plVar4);
            return 1;
        }
        uVar1 = DAT_140c10f20;
        (**(code **)(*plVar4 + 8))(plVar4,0);
        FUN_140881720(uVar1,plVar4);
    }
    return 0x34;
}



void FUN_14084cfd0(longlong param_1,longlong param_2)

{
    undefined uVar1;

    FUN_140851dc0();
    if (((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x40) == 0)) {
        if ((*(char *)(param_2 + 0x24) == '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
            if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x50) & 1) == 0) {
                FUN_140851cc0(param_1,*(undefined8 *)(param_2 + 8));
            }
            else {
                FUN_140851d70();
            }
        }
        *(undefined *)(param_2 + 0x24) = 1;
    }
    uVar1 = *(undefined *)(param_2 + 0x24);
    if (((*(ushort *)(param_2 + 0x20) & 1) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
        *(undefined *)(param_2 + 0x24) = 0;
        *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xfffe;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x118))(*(longlong **)(param_1 + 0x48),param_2);
    }
    if ((((*(ushort *)(param_2 + 0x20) & 2) != 0) &&
         (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) && (**(longlong **)(param_1 + 0x68) != 0)
            ) {
        *(undefined *)(param_2 + 0x24) = 0;
        *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xfffd;
        (**(code **)(***(longlong ***)(param_1 + 0x68) + 0x118))
                (**(longlong ***)(param_1 + 0x68),param_2);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined *)(param_2 + 0x24) = uVar1;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x118))(*(longlong **)(param_1 + 0x40),param_2);
    }
    return;
}



void FUN_14084d0c0(longlong param_1,longlong param_2)

{
    undefined uVar1;

    if (((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x40) == 0)) {
        if ((*(char *)(param_2 + 0x24) == '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
            if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x50) & 1) == 0) {
                FUN_140851e10(param_1,param_2 + 0x22,*(undefined *)(param_2 + 0x25),
                              *(undefined8 *)(param_2 + 8));
            }
            else {
                FUN_140851f80();
            }
        }
        *(undefined *)(param_2 + 0x24) = 1;
    }
    uVar1 = *(undefined *)(param_2 + 0x24);
    if (((*(ushort *)(param_2 + 0x20) & 1) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
        *(undefined *)(param_2 + 0x24) = 0;
        *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xfffe;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x128))(*(longlong **)(param_1 + 0x48),param_2);
    }
    if ((((*(ushort *)(param_2 + 0x20) & 2) != 0) &&
         (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) && (**(longlong **)(param_1 + 0x68) != 0)
            ) {
        *(undefined *)(param_2 + 0x24) = 0;
        *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xfffd;
        (**(code **)(***(longlong ***)(param_1 + 0x68) + 0x128))
                (**(longlong ***)(param_1 + 0x68),param_2);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined *)(param_2 + 0x24) = uVar1;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x128))(*(longlong **)(param_1 + 0x40),param_2);
    }
    return;
}



undefined4
FUN_14084d1b0(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4,
              undefined4 *param_5)

{
    float fVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    bool bVar7;
    undefined8 local_58;
    undefined4 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 *local_38;
    undefined2 local_30;
    longlong local_28;
    undefined4 local_20;

    local_48 = 0;
    local_40 = 0;
    local_58 = 0;
    local_50 = 0;
    local_38 = &local_58;
    uVar2 = 0x34;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    lVar3 = FUN_140865fc0();
    bVar7 = local_28 != 0;
    local_28 = lVar3;
    if (bVar7) {
        FUN_140866000();
    }
    if (local_28 == 0) {
        LAB_14084d2f2:
        uVar2 = 2;
    }
    else {
        puVar5 = *(undefined8 **)(param_5 + 0x24);
        if (puVar5 == (undefined8 *)0x0) {
            lVar3 = FUN_140865fc0();
            bVar7 = local_28 != 0;
            local_28 = lVar3;
            if (bVar7) {
                FUN_140866000();
            }
            if (local_28 == 0) goto LAB_14084d2f2;
            puVar5 = &local_48;
        }
        uVar6 = (ulonglong)*(uint *)(param_3 + 0x18);
        plVar4 = (longlong *)FUN_14084cdc0(puVar5,param_5,uVar6);
        if (plVar4 != (longlong *)0x0) {
            *(undefined *)((longlong)plVar4 + 0xd6) = 1;
            *(undefined4 *)(plVar4 + 0x1b) = *param_5;
            if ((float)(ulonglong)DAT_140c110b4 * param_2 <= 0.0) {
                fVar1 = -0.5;
            }
            else {
                fVar1 = 0.5;
            }
            uVar2 = FUN_14084ce80(puVar5,param_5,
                                  uVar6 & 0xffffffff00000000 |
                                  (ulonglong)
                                          (uint)(int)(fVar1 + (float)(ulonglong)DAT_140c110b4 * param_2),plVar4);
            (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        if (local_28 != 0) {
            FUN_140866000();
        }
    }
    return uVar2;
}



void FUN_14084d320(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_140873c30();
        FUN_140873eb0(*(undefined8 *)(param_1 + 0x78));
        uVar2 = DAT_140c10f20;
        puVar1 = *(undefined8 **)(param_1 + 0x78);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
            FUN_140881720(uVar2,puVar1);
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
    }
    return;
}



undefined8 FUN_14084d390(longlong *param_1,longlong param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;

    pplVar1 = (longlong **)param_1[0x12];
    if (pplVar1 == (longlong **)0x0) {
        return 2;
    }
    plVar4 = pplVar1[1];
    plVar3 = *pplVar1;
    if (plVar3 != plVar4) {
        do {
            if (*plVar3 == param_2) break;
            plVar3 = plVar3 + 1;
        } while (plVar3 != plVar4);
        if (plVar3 != plVar4) {
            if (plVar3 < plVar4 + -1) {
                lVar2 = ((ulonglong)((longlong)(plVar4 + -1) + (-1 - (longlong)plVar3)) >> 3) + 1;
                plVar4 = plVar3;
                for (; plVar3 = plVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
                    *plVar4 = *plVar3;
                    plVar4 = plVar4 + 1;
                }
            }
            pplVar1[1] = pplVar1[1] + -1;
            (**(code **)(*param_1 + 0x198))(param_1);
            return 1;
        }
    }
    return 2;
}



undefined8 FUN_14084d430(longlong param_1)

{
    undefined8 *puVar1;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        return 1;
    }
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 0x10;
    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x68);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140873b10(puVar1);
        *puVar1 = &PTR_FUN_1409a3280;
        *(undefined4 *)(puVar1 + 0xb) = 0;
        puVar1[0xc] = 0;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x78) = puVar1;
        return 1;
    }
    return 0x34;
}



undefined8 FUN_14084d4c0(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    char cVar2;
    undefined8 uVar3;

    lVar1 = param_1[8];
    while( true ) {
        if (lVar1 == 0) {
            // WARNING: Could not recover jumptable at 0x00014084d511. Too many branches
            // WARNING: Treating indirect jump as call
            uVar3 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
            return uVar3;
        }
        cVar2 = FUN_140853640(lVar1,*(undefined8 *)(param_2 + 8));
        if (cVar2 != '\0') break;
        lVar1 = *(longlong *)(lVar1 + 0x40);
    }
    return 1;
}



void FUN_14084d530(longlong param_1,longlong *param_2,uint *param_3)

{
    longlong lVar1;
    longlong lVar2;

    *param_3 = *(byte *)(param_1 + 0xa0) >> 2 & 3;
    if (*(longlong *)(param_1 + 0x78) != 0) {
        if (*param_2 == 0) {
            lVar2 = FUN_1408819f0(DAT_140c10f20,0x58);
            if (lVar2 != 0) {
                lVar2 = FUN_140873b10(lVar2);
            }
            *param_2 = lVar2;
            if (lVar2 == 0) {
                return;
            }
        }
        lVar2 = *(longlong *)(param_1 + 0x78);
        lVar1 = *param_2;
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 8);
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar2 + 0x50);
    }
    return;
}



void FUN_14084d5f0(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                   undefined8 param_5,undefined8 param_6)

{
    byte bVar1;
    longlong lVar2;
    longlong lVar3;
    float fVar4;

    bVar1 = *(byte *)(param_1 + 0x5b);
    lVar3 = *(longlong *)(param_1 + 0x40);
    while ((lVar2 = lVar3, (bVar1 & 0x10) == 0 && (lVar2 != 0))) {
        bVar1 = *(byte *)(lVar2 + 0x5b);
        param_1 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 0x40);
    }
    FUN_14084d530(param_1,param_2,param_5);
    *param_4 = *(byte *)(param_1 + 0xa0) & 3;
    if ((*(uint *)(param_1 + 0x60) >> 10 & 1) != 0) {
        fVar4 = (float)FUN_140836340(DAT_140c61bb0,param_1,10,param_3);
        *param_4 = (uint)(longlong)fVar4;
    }
    FUN_1408524d0(param_1,param_3,param_6);
    return;
}



undefined8
FUN_14084d690(longlong param_1,float *param_2,uint param_3,undefined8 param_4,longlong param_5,
              float param_6,float *param_7,char param_8)

{
    byte *pbVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int iVar6;
    longlong *plVar7;
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    uint uVar11;
    undefined8 *puVar12;
    float *pfVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float local_res8 [2];
    ulonglong in_stack_ffffffffffffff80;
    char cVar17;

    FUN_1408527d0();
    pfVar13 = (float *)0x0;
    fVar16 = 0.0;
    if ((param_3 & 1) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = 0.0;
        pfVar10 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0) {
                    pfVar10 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar9 = local_res8;
        if (pfVar10 != (float *)0x0) {
            pfVar9 = pfVar10;
        }
        local_res8[0] = *pfVar9;
        *param_2 = local_res8[0] + *param_2;
        if ((*(ulonglong *)(param_1 + 0x60) & 1) != 0) {
            fVar14 = (float)FUN_140836340();
            *param_2 = fVar14 + *param_2;
        }
        if (((*(byte *)(param_2 + 6) & 2) == 0) &&
            (((*(byte *)(param_1 + 0xa1) & 1) != 0 || (*(longlong *)(param_1 + 0x40) == 0)))) {
            *(byte *)(param_2 + 6) =
                    (*(byte *)(param_1 + 0xa1) & 2 | 4) >> 1 | *(byte *)(param_2 + 6) & 0xfe;
        }
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = 0.0;
        pfVar10 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x21) {
                    pfVar10 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar9 = local_res8;
        if (pfVar10 != (float *)0x0) {
            pfVar9 = pfVar10;
        }
        local_res8[0] = *pfVar9;
        param_2[5] = *pfVar9 + param_2[5];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x24 & 1) != 0) {
            fVar14 = (float)FUN_140836340();
            param_2[5] = fVar14 + param_2[5];
        }
    }
    if ((param_3 & 2) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = 0.0;
        pfVar10 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 2) {
                    pfVar10 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar9 = local_res8;
        if (pfVar10 != (float *)0x0) {
            pfVar9 = pfVar10;
        }
        local_res8[0] = *pfVar9;
        param_2[2] = *pfVar9 + param_2[2];
        if ((*(ulonglong *)(param_1 + 0x60) >> 2 & 1) != 0) {
            fVar14 = (float)FUN_140836340();
            param_2[2] = fVar14 + param_2[2];
        }
    }
    if ((param_3 & 4) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = 0.0;
        pfVar10 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 3) {
                    pfVar10 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar9 = local_res8;
        if (pfVar10 != (float *)0x0) {
            pfVar9 = pfVar10;
        }
        local_res8[0] = *pfVar9;
        param_2[3] = *pfVar9 + param_2[3];
        if ((*(ulonglong *)(param_1 + 0x60) >> 3 & 1) != 0) {
            fVar14 = (float)FUN_140836340();
            param_2[3] = fVar14 + param_2[3];
        }
    }
    if ((((param_3 & 0x10) != 0) && ((*(byte *)(param_2 + 8) & 1) == 0)) &&
        (((*(byte *)(param_1 + 0xa0) & 0x80) != 0 || (*(longlong *)(param_1 + 0x40) == 0)))) {
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x23 & 1) == 0) {
            pbVar1 = *(byte **)(param_1 + 0x50);
            local_res8[0] = DAT_140c11080;
            pfVar10 = pfVar13;
            if (pbVar1 != (byte *)0x0) {
                pfVar9 = pfVar13;
                do {
                    uVar11 = (int)pfVar9 + 1;
                    if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x20) {
                        pfVar10 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                            ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                        break;
                    }
                    pfVar9 = (float *)(ulonglong)uVar11;
                } while (uVar11 < *pbVar1);
            }
            pfVar9 = local_res8;
            if (pfVar10 != (float *)0x0) {
                pfVar9 = pfVar10;
            }
            param_2[7] = *pfVar9;
        }
        else {
            fVar14 = (float)FUN_140836340();
            param_2[7] = fVar14;
        }
        *(byte *)(param_2 + 8) =
                (*(byte *)(param_1 + 0xa1) >> 1 ^ *(byte *)(param_2 + 8)) & 2 ^ *(byte *)(param_2 + 8) | 1;
    }
    fVar14 = 1.0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            pfVar10 = pfVar13;
            do {
                uVar11 = (int)pfVar10 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0) {
                    if ((float *)(pbVar1 + (longlong)pfVar10 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                        != (float *)0x0) {
                        *param_2 = *(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                              ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) + *param_2;
                    }
                    break;
                }
                pfVar10 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            pfVar10 = pfVar13;
            do {
                uVar11 = (int)pfVar10 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 2) {
                    if ((float *)(pbVar1 + (longlong)pfVar10 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                        != (float *)0x0) {
                        param_2[2] = param_2[2] +
                                     *(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                                ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    }
                    break;
                }
                pfVar10 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            pfVar10 = pfVar13;
            do {
                uVar11 = (int)pfVar10 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 3) {
                    if ((float *)(pbVar1 + (longlong)pfVar10 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                        != (float *)0x0) {
                        param_2[3] = param_2[3] +
                                     *(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                                ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    }
                    break;
                }
                pfVar10 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            pfVar10 = pfVar13;
            do {
                uVar11 = (int)pfVar10 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 10) {
                    if (((float *)(pbVar1 + (longlong)pfVar10 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    ) != (float *)0x0) &&
                        (*(float *)(pbVar1 + (longlong)pfVar10 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                        ) != 1.0)) {
                        FUN_14084f8a0(param_4);
                    }
                    break;
                }
                pfVar10 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
    }
    pplVar2 = *(longlong ***)(param_1 + 0x70);
    if (pplVar2 != (longlong **)0x0) {
        plVar7 = *pplVar2;
        plVar3 = pplVar2[1];
        if (plVar7 != plVar3) {
            do {
                if (*plVar7 == param_5) break;
                plVar7 = plVar7 + 2;
            } while (plVar7 != plVar3);
            if ((plVar7 != plVar3) && (plVar7 + 1 != (longlong *)0x0)) {
                lVar4 = plVar7[1];
                pbVar1 = *(byte **)(lVar4 + 0x18);
                if (pbVar1 != (byte *)0x0) {
                    pfVar10 = pfVar13;
                    do {
                        uVar11 = (int)pfVar10 + 1;
                        if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0) {
                            if ((float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) != (float *)0x0) {
                                *param_2 = *(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                                      ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) + *param_2;
                            }
                            break;
                        }
                        pfVar10 = (float *)(ulonglong)uVar11;
                    } while (uVar11 < *pbVar1);
                }
                pbVar1 = *(byte **)(lVar4 + 0x18);
                if (pbVar1 != (byte *)0x0) {
                    pfVar10 = pfVar13;
                    do {
                        uVar11 = (int)pfVar10 + 1;
                        if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 2) {
                            if ((float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) != (float *)0x0) {
                                param_2[2] = *(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) +
                                             param_2[2];
                            }
                            break;
                        }
                        pfVar10 = (float *)(ulonglong)uVar11;
                    } while (uVar11 < *pbVar1);
                }
                pbVar1 = *(byte **)(lVar4 + 0x18);
                if (pbVar1 != (byte *)0x0) {
                    pfVar10 = pfVar13;
                    do {
                        uVar11 = (int)pfVar10 + 1;
                        if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 3) {
                            if ((float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                          ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) != (float *)0x0) {
                                param_2[3] = param_2[3] +
                                             *(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                            }
                            break;
                        }
                        pfVar10 = (float *)(ulonglong)uVar11;
                    } while (uVar11 < *pbVar1);
                }
                pbVar1 = *(byte **)(lVar4 + 0x18);
                if (pbVar1 != (byte *)0x0) {
                    pfVar10 = pfVar13;
                    do {
                        uVar11 = (int)pfVar10 + 1;
                        if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 10) {
                            if (((float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                           ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) != (float *)0x0) &&
                                (*(float *)(pbVar1 + (longlong)pfVar10 * 0x10 +
                                            ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) != fVar14)) {
                                FUN_14084f8a0();
                            }
                            break;
                        }
                        pfVar10 = (float *)(ulonglong)uVar11;
                    } while (uVar11 < *pbVar1);
                }
            }
        }
    }
    pfVar10 = param_7;
    if ((param_6._0_1_ != 0) && (pbVar1 = *(byte **)(param_1 + 0x80), pbVar1 != (byte *)0x0)) {
        pfVar9 = pfVar13;
        do {
            uVar11 = (int)pfVar9 + 1;
            if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0) {
                pfVar9 = (float *)(pbVar1 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                if (pfVar9 != (float *)0x0) {
                    fVar15 = pfVar9[1] - *pfVar9;
                    fVar14 = fVar16;
                    if (fVar15 != fVar16) {
                        iVar6 = rand();
                        fVar16 = (float)iVar6 * 3.051851e-05 * fVar15;
                    }
                    *pfVar10 = fVar16 + *pfVar9 + *pfVar10;
                    fVar16 = fVar14;
                }
                break;
            }
            pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
        pbVar1 = *(byte **)(param_1 + 0x80);
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 2) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    if (pfVar9 != (float *)0x0) {
                        fVar15 = pfVar9[1] - *pfVar9;
                        fVar14 = fVar16;
                        if (fVar15 != fVar16) {
                            iVar6 = rand();
                            fVar16 = (float)iVar6 * 3.051851e-05 * fVar15;
                        }
                        pfVar10[1] = fVar16 + *pfVar9 + pfVar10[1];
                        fVar16 = fVar14;
                    }
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pbVar1 = *(byte **)(param_1 + 0x80);
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 3) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    if (pfVar9 != (float *)0x0) {
                        fVar14 = pfVar9[1] - *pfVar9;
                        if (fVar14 != fVar16) {
                            iVar6 = rand();
                            fVar16 = (float)iVar6 * 3.051851e-05 * fVar14;
                        }
                        pfVar10[2] = fVar16 + *pfVar9 + pfVar10[2];
                    }
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
    }
    if ((*(char *)((longlong)param_2 + 0x52) == '\0') &&
        ((((*(byte *)(param_1 + 0xa0) & 0x40) != 0 || (*(longlong *)(param_1 + 0x40) == 0)) &&
          (*(undefined *)((longlong)param_2 + 0x52) = 1, *(longlong *)(param_1 + 0x98) != 0)))) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        pfVar9 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar8 = pfVar13;
            do {
                uVar11 = (int)pfVar8 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x12) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar8 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar8 = &param_6;
        if (pfVar9 != (float *)0x0) {
            pfVar8 = pfVar9;
        }
        param_6 = *pfVar8;
        param_2[0xb] = param_6 + param_2[0xb];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0xf & 1) != 0) {
            fVar16 = (float)FUN_140836340();
            param_2[0xb] = fVar16 + param_2[0xb];
        }
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        pfVar9 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar8 = pfVar13;
            do {
                uVar11 = (int)pfVar8 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x13) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar8 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar8 = &param_6;
        if (pfVar9 != (float *)0x0) {
            pfVar8 = pfVar9;
        }
        param_6 = *pfVar8;
        param_2[0xc] = param_6 + param_2[0xc];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x10 & 1) != 0) {
            fVar16 = (float)FUN_140836340();
            param_2[0xc] = fVar16 + param_2[0xc];
        }
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        pfVar9 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar8 = pfVar13;
            do {
                uVar11 = (int)pfVar8 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x14) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar8 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar8 = &param_6;
        if (pfVar9 != (float *)0x0) {
            pfVar8 = pfVar9;
        }
        param_6 = *pfVar8;
        param_2[0xd] = param_6 + param_2[0xd];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x11 & 1) != 0) {
            fVar16 = (float)FUN_140836340();
            param_2[0xd] = fVar16 + param_2[0xd];
        }
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        pfVar9 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar8 = pfVar13;
            do {
                uVar11 = (int)pfVar8 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x15) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar8 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar8 = &param_6;
        if (pfVar9 != (float *)0x0) {
            pfVar8 = pfVar9;
        }
        param_6 = *pfVar8;
        param_2[0xe] = param_6 + param_2[0xe];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x12 & 1) != 0) {
            fVar16 = (float)FUN_140836340();
            param_2[0xe] = fVar16 + param_2[0xe];
        }
        param_2[0xf] = **(float **)(param_1 + 0x98);
        param_2[0x10] = *(float *)(*(longlong *)(param_1 + 0x98) + 4);
        param_2[0x11] = *(float *)(*(longlong *)(param_1 + 0x98) + 8);
        param_2[0x12] = *(float *)(*(longlong *)(param_1 + 0x98) + 0xc);
    }
    if ((*(char *)((longlong)param_2 + 0x51) == '\0') &&
        (((*(byte *)(param_1 + 0xa0) & 0x10) != 0 || (*(longlong *)(param_1 + 0x40) == 0)))) {
        *(undefined *)((longlong)param_2 + 0x51) = 1;
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        pfVar9 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar8 = pfVar13;
            do {
                uVar11 = (int)pfVar8 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x16) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar8 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar8 = &param_6;
        if (pfVar9 != (float *)0x0) {
            pfVar8 = pfVar9;
        }
        param_6 = *pfVar8;
        param_2[0x13] = param_6 + param_2[0x13];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x13 & 1) != 0) {
            fVar16 = (float)FUN_140836340();
            param_2[0x13] = fVar16 + param_2[0x13];
        }
        *(byte *)(param_2 + 0x14) = *(byte *)(param_1 + 0xa0) >> 5 & 1;
    }
    if ((param_8 == '\0') || (*(longlong *)(param_1 + 0x48) == 0)) {
        plVar7 = *(longlong **)(param_1 + 0x40);
        cVar17 = param_8;
        if (plVar7 == (longlong *)0x0) goto LAB_14084e3ef;
    }
    else {
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        pfVar9 = pfVar13;
        if (pbVar1 != (byte *)0x0) {
            pfVar8 = pfVar13;
            do {
                uVar11 = (int)pfVar8 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x17) {
                    pfVar9 = (float *)(pbVar1 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar8 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar8 = &param_6;
        if (pfVar9 != (float *)0x0) {
            pfVar8 = pfVar9;
        }
        param_6 = *pfVar8;
        param_2[9] = param_6 + param_2[9];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x16 & 1) != 0) {
            fVar16 = (float)FUN_140836340();
            param_2[9] = fVar16 + param_2[9];
        }
        pbVar1 = *(byte **)(param_1 + 0x50);
        param_6 = 0.0;
        if (pbVar1 != (byte *)0x0) {
            pfVar9 = pfVar13;
            do {
                uVar11 = (int)pfVar9 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar11 + (longlong)pbVar1) == 0x18) {
                    pfVar13 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                pfVar9 = (float *)(ulonglong)uVar11;
            } while (uVar11 < *pbVar1);
        }
        pfVar9 = &param_6;
        if (pfVar13 != (float *)0x0) {
            pfVar9 = pfVar13;
        }
        param_6 = *pfVar9;
        param_2[10] = param_6 + param_2[10];
        if ((*(ulonglong *)(param_1 + 0x60) >> 0x17 & 1) != 0) {
            fVar16 = (float)FUN_140836340(DAT_140c61bb0,param_1,0x17,param_5);
            param_2[10] = fVar16 + param_2[10];
        }
        plVar7 = *(longlong **)(param_1 + 0x40);
        if (plVar7 != (longlong *)0x0) {
            in_stack_ffffffffffffff80 =
                    in_stack_ffffffffffffff80 & 0xffffffffffffff00 | (ulonglong)param_6._0_1_;
            (**(code **)(*plVar7 + 0x150))
                    (plVar7,param_2,param_3,param_4,param_5,in_stack_ffffffffffffff80,pfVar10,0);
        }
        plVar7 = *(longlong **)(param_1 + 0x48);
        cVar17 = '\0';
    }
    (**(code **)(*plVar7 + 0x150))
            (plVar7,param_2,param_3,param_4,param_5,
             in_stack_ffffffffffffff80 & 0xffffffffffffff00 | (ulonglong)param_6._0_1_,pfVar10,
             cVar17);
    LAB_14084e3ef:
    puVar12 = *(undefined8 **)(param_1 + 0x90);
    if (puVar12 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puVar12[1];
        for (puVar12 = (undefined8 *)*puVar12; puVar12 != puVar5; puVar12 = puVar12 + 1) {
            FUN_140865100(*puVar12,param_1,param_2,param_3,param_4,param_5);
        }
    }
    return 1;
}



ulonglong FUN_14084e460(longlong param_1,longlong param_2)

{
    byte bVar1;
    longlong **pplVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong *plVar5;
    float fVar6;

    if (((*(byte *)(param_1 + 0x5b) & 0x40) == 0) &&
        (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
        // WARNING: Could not recover jumptable at 0x00014084e480. Too many branches
        // WARNING: Treating indirect jump as call
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1d0))();
        return uVar4;
    }
    uVar4 = *(ulonglong *)(param_1 + 0x30);
    if (uVar4 == 0) {
        return uVar4;
    }
    bVar1 = *(byte *)(uVar4 + 0x20);
    if ((*(uint *)(param_1 + 0x60) >> 0x1c & 1) != 0) {
        fVar6 = (float)FUN_140836340(DAT_140c61bb0,param_1,0x1c,param_2);
        if (fVar6 != 0.0) {
            return 1;
        }
        return 0;
    }
    pplVar2 = *(longlong ***)(param_1 + 0x70);
    if (pplVar2 != (longlong **)0x0) {
        plVar5 = *pplVar2;
        plVar3 = pplVar2[1];
        if (plVar5 != plVar3) {
            do {
                if (*plVar5 == param_2) break;
                plVar5 = plVar5 + 2;
            } while (plVar5 != plVar3);
            if ((plVar5 != plVar3) && (plVar5 + 1 != (longlong *)0x0)) {
                return (ulonglong)(*(byte *)(plVar5[1] + 0x20) >> 4 & 1);
            }
        }
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x20);
    }
    return (ulonglong)(bVar1 >> 4 & 1);
}



byte FUN_14084e540(longlong param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    float extraout_XMM0_Da;

    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(int *)(lVar1 + 4 + (ulonglong)param_2 * 8) != 0) &&
        ((*(ulonglong *)(param_1 + 0x60) >> ((ulonglong)(param_2 + 0x18 & 0xff) & 0x3f) & 1) != 0)) {
        FUN_140836340(DAT_140c61bb0,param_1,param_2 + 0x18,param_3);
        if (extraout_XMM0_Da == 0.0) {
            return 0;
        }
        return 1;
    }
    pplVar2 = *(longlong ***)(param_1 + 0x70);
    if (pplVar2 != (longlong **)0x0) {
        plVar4 = *pplVar2;
        plVar3 = pplVar2[1];
        if (plVar4 != plVar3) {
            do {
                if (*plVar4 == param_3) break;
                plVar4 = plVar4 + 2;
            } while (plVar4 != plVar3);
            if ((plVar4 != plVar3) && (plVar4 + 1 != (longlong *)0x0)) {
                lVar5 = plVar4[1];
                goto LAB_14084e5cc;
            }
        }
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (lVar5 == 0) {
        return *(byte *)(lVar1 + 0x20) >> ((byte)param_2 & 0x1f) & 1;
    }
    LAB_14084e5cc:
    return *(byte *)(lVar5 + 0x20) >> ((byte)param_2 & 0x1f) & 1;
}



undefined8 FUN_14084e600(longlong param_1)

{
    float *pfVar1;
    byte *pbVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    float fVar6;
    undefined8 uVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;

    uVar7 = FUN_1408529a0();
    pbVar2 = *(byte **)(param_1 + 0x80);
    fVar9 = (float)uVar7;
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pbVar2 != (byte *)0x0) {
        uVar4 = 0;
        while( true ) {
            uVar5 = (int)uVar4 + 1;
            if (pbVar2[uVar5] == 9) break;
            uVar4 = (ulonglong)uVar5;
            if (*pbVar2 <= uVar5) {
                return uVar7;
            }
        }
        pfVar1 = (float *)(pbVar2 + uVar4 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
        if (pfVar1 != (float *)0x0) {
            fVar6 = 0.0;
            fVar10 = pfVar1[1] - *pfVar1;
            if (fVar10 != 0.0) {
                iVar3 = rand();
                fVar6 = (float)iVar3 * 3.051851e-05 * fVar10;
            }
            fVar9 = fVar9 + fVar6 + *pfVar1;
        }
    }
    return CONCAT44(uVar8,fVar9);
}



undefined8 FUN_14084e6c0(longlong param_1)

{
    float *pfVar1;
    byte *pbVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    float fVar6;
    undefined8 uVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;

    uVar7 = FUN_140852a50();
    pbVar2 = *(byte **)(param_1 + 0x80);
    fVar9 = (float)uVar7;
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pbVar2 != (byte *)0x0) {
        uVar4 = 0;
        while( true ) {
            uVar5 = (int)uVar4 + 1;
            if (pbVar2[uVar5] == 8) break;
            uVar4 = (ulonglong)uVar5;
            if (*pbVar2 <= uVar5) {
                return uVar7;
            }
        }
        pfVar1 = (float *)(pbVar2 + uVar4 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
        if (pfVar1 != (float *)0x0) {
            fVar6 = 0.0;
            fVar10 = pfVar1[1] - *pfVar1;
            if (fVar10 != 0.0) {
                iVar3 = rand();
                fVar6 = (float)iVar3 * 3.051851e-05 * fVar10;
            }
            fVar9 = fVar9 + fVar6 + *pfVar1;
        }
    }
    return CONCAT44(uVar8,fVar9);
}



void FUN_14084e780(longlong param_1,ulonglong param_2,longlong **param_3,undefined8 param_4)

{
    longlong lVar1;
    undefined uVar2;
    longlong *plVar3;
    longlong *plVar4;

    param_2 = param_2 & 0xffffffff;
    if (((*(byte *)(param_1 + 0x5b) & 0x40) == 0) &&
        (plVar4 = *(longlong **)(param_1 + 0x40), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x1c0))(plVar4,param_2);
    }
    else {
        lVar1 = *(longlong *)(param_1 + 0x30);
        if (lVar1 == 0) {
            plVar4 = *param_3;
            *param_3 = (longlong *)0x0;
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x10))();
            }
            *(undefined *)(param_3 + 1) = 0;
        }
        else {
            if (*(int *)(lVar1 + 4 + param_2 * 8) == 0) {
                plVar4 = *param_3;
                *param_3 = (longlong *)0x0;
            }
            else if (*(char *)(lVar1 + 1 + param_2 * 8) == '\0') {
                plVar3 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x3e30);
                plVar4 = *param_3;
                *param_3 = plVar3;
            }
            else {
                plVar3 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x37f8);
                plVar4 = *param_3;
                *param_3 = plVar3;
            }
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x10))();
            }
            uVar2 = FUN_14084e540(param_1,param_2,param_4);
            *(undefined *)(param_3 + 1) = uVar2;
        }
    }
    return;
}



void FUN_14084e860(longlong param_1,uint param_2,int param_3,int *param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    int *piVar3;
    longlong *plVar4;
    int *piVar5;
    int iVar6;
    ulonglong uVar7;

    uVar7 = (ulonglong)param_2;
    if (((*(byte *)(param_1 + 0x5b) & 0x40) == 0) &&
        (plVar4 = *(longlong **)(param_1 + 0x40), plVar4 != (longlong *)0x0)) {
        // WARNING: Could not recover jumptable at 0x00014084e895. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar4 + 0x1c8))(plVar4,uVar7);
        return;
    }
    *param_4 = -1;
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (lVar2 == 0) {
        return;
    }
    uVar1 = *(undefined4 *)(lVar2 + uVar7 * 8 + 4);
    if (*(char *)(lVar2 + 1 + uVar7 * 8) == '\0') {
        plVar4 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x3e30,uVar1);
    }
    else {
        plVar4 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x37f8,uVar1);
    }
    if (plVar4 == (longlong *)0x0) {
        return;
    }
    piVar5 = (int *)plVar4[6];
    piVar3 = (int *)plVar4[7];
    if (piVar5 != piVar3) {
        do {
            if (*piVar5 == param_3) break;
            piVar5 = piVar5 + 2;
        } while (piVar5 != piVar3);
        if ((piVar5 != piVar3) && (piVar5 + 1 != (int *)0x0)) {
            iVar6 = piVar5[1];
            goto LAB_14084e90f;
        }
    }
    iVar6 = 0;
    LAB_14084e90f:
    *param_4 = iVar6;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
}



undefined4 FUN_14084e930(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
    uint uVar1;
    byte *pbVar2;
    longlong **pplVar3;
    longlong *plVar4;
    undefined4 uVar5;
    longlong *plVar6;
    uint uVar7;

    uVar5 = FUN_140852ae0();
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
        (pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18), pbVar2 != (byte *)0x0)) {
        uVar7 = 0;
        do {
            uVar1 = uVar7 + 1;
            if (pbVar2[uVar1] == 8) {
                if ((float *)(pbVar2 + (ulonglong)uVar7 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)) !=
                    (float *)0x0) {
                    *(float *)(param_2 + 8) =
                            *(float *)(pbVar2 + (ulonglong)uVar7 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)
                            ) + *(float *)(param_2 + 8);
                }
                break;
            }
            uVar7 = uVar1;
        } while (uVar1 < *pbVar2);
    }
    pplVar3 = *(longlong ***)(param_1 + 0x70);
    if (pplVar3 != (longlong **)0x0) {
        plVar6 = *pplVar3;
        plVar4 = pplVar3[1];
        if (plVar6 != plVar4) {
            do {
                if (*plVar6 == param_4) break;
                plVar6 = plVar6 + 2;
            } while (plVar6 != plVar4);
            if (((plVar6 != plVar4) && (plVar6 + 1 != (longlong *)0x0)) &&
                (pbVar2 = *(byte **)(plVar6[1] + 0x18), pbVar2 != (byte *)0x0)) {
                uVar7 = 0;
                do {
                    uVar1 = uVar7 + 1;
                    if (pbVar2[uVar1] == 8) {
                        if ((float *)(pbVar2 + (ulonglong)uVar7 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)
                        ) == (float *)0x0) {
                            return uVar5;
                        }
                        *(float *)(param_2 + 8) =
                                *(float *)(pbVar2 + (ulonglong)uVar7 * 0x10 +
                                           ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)) +
                                *(float *)(param_2 + 8);
                        return uVar5;
                    }
                    uVar7 = uVar1;
                } while (uVar1 < *pbVar2);
            }
        }
    }
    return uVar5;
}



undefined8 FUN_14084ea60(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;

    *param_2 = 0;
    do {
        lVar2 = param_1;
        if ((*(byte *)(lVar2 + 0x5b) & 0x10) != 0) break;
        param_1 = *(longlong *)(lVar2 + 0x40);
    } while (*(longlong *)(lVar2 + 0x40) != 0);
    uVar4 = 0;
    if (*(longlong *)(lVar2 + 0x78) != 0) {
        plVar1 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x2550);
        if (plVar1 != (longlong *)0x0) {
            if ((*(byte *)(plVar1 + 0x10) != 0xff) &&
                (plVar3 = plVar1 + ((ulonglong)*(byte *)(plVar1 + 0x10) + 3) * 2, plVar3 != (longlong *)0x0
                )) {
                uVar4 = 1;
                *param_2 = *(undefined4 *)(*plVar3 + (ulonglong)(*(int *)(plVar3 + 1) - 1) * 0xc);
            }
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
    }
    return uVar4;
}



longlong FUN_14084eb00(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x78);
    while( true ) {
        if (lVar1 != 0) {
            return *(longlong *)(param_1 + 0x78) + 0x58;
        }
        param_1 = *(longlong *)(param_1 + 0x40);
        if (param_1 == 0) break;
        lVar1 = *(longlong *)(param_1 + 0x78);
    }
    return 0;
}



undefined8 * FUN_14084eb30(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong **pplVar8;
    undefined uVar9;

    if (param_2 == 0) {
        FUN_140830940(DAT_140c61ba0,param_1);
        if (*(longlong *)(param_1 + 0x28) == 0) {
            if (*(longlong *)(param_1 + 0x30) == 0) {
                uVar9 = 0;
            }
            else {
                uVar9 = *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x20);
            }
            puVar7 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28);
            puVar4 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[1] = param_1;
                puVar7[2] = 0;
                *puVar7 = &PTR_FUN_1409a3278;
                puVar7[3] = 0;
                *(undefined *)(puVar7 + 4) = uVar9;
                puVar4 = puVar7;
            }
            *(undefined8 **)(param_1 + 0x28) = puVar4;
        }
        puVar4 = *(undefined8 **)(param_1 + 0x28);
    }
    else {
        pplVar8 = *(longlong ***)(param_1 + 0x70);
        if (pplVar8 == (longlong **)0x0) {
            puVar4 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18);
            *(undefined8 **)(param_1 + 0x70) = puVar4;
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = 0;
                puVar4[1] = 0;
                *(undefined4 *)(puVar4 + 2) = 0;
            }
            pplVar8 = *(longlong ***)(param_1 + 0x70);
            if (pplVar8 == (longlong **)0x0) {
                return (undefined8 *)0x0;
            }
        }
        plVar5 = *pplVar8;
        plVar1 = pplVar8[1];
        if (plVar5 != plVar1) {
            do {
                if (*plVar5 == param_2) break;
                plVar5 = plVar5 + 2;
            } while (plVar5 != plVar1);
            if ((plVar5 != plVar1) && (plVar5 + 1 != (longlong *)0x0)) {
                return (undefined8 *)plVar5[1];
            }
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
            uVar9 = 0;
        }
        else {
            uVar9 = *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x20);
        }
        puVar4 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = param_1;
            puVar4[2] = param_2;
            *puVar4 = &PTR_FUN_1409a3278;
            puVar4[3] = 0;
            *(undefined *)(puVar4 + 4) = uVar9;
            lVar6 = FUN_140897cd0(*(undefined8 *)(param_1 + 0x70),param_2,puVar4);
            if (lVar6 != 0) {
                iVar3 = FUN_14084c3a0(param_2,param_1);
                if (iVar3 == 1) {
                    return puVar4;
                }
                FUN_140850ac0(*(undefined8 *)(param_1 + 0x70),param_2);
            }
            uVar2 = DAT_140c10f20;
            FUN_140873940(puVar4);
            FUN_140881720(uVar2,puVar4);
        }
        puVar4 = (undefined8 *)0x0;
    }
    return puVar4;
}



undefined2 FUN_14084ece0(longlong param_1,uint *param_2)

{
    byte bVar1;
    longlong lVar2;

    bVar1 = *(byte *)(param_1 + 0x5a);
    while (((bVar1 & 4) == 0 && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))) {
        bVar1 = *(byte *)(lVar2 + 0x5a);
        param_1 = lVar2;
    }
    *param_2 = (uint)*(ushort *)(param_1 + 0x88);
    return *(undefined2 *)(param_1 + 0x8a);
}



int FUN_14084ed10(longlong param_1,longlong param_2)

{
    byte *pbVar1;
    int iVar2;
    int iVar3;
    float *pfVar4;
    uint uVar5;
    float *pfVar6;
    float *pfVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 in_XMM8_Da;
    float fVar11;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    float local_res10 [2];

    iVar3 = 1;
    if (*(char *)(param_2 + 0x9e) != '\0') {
        *(undefined *)(param_2 + 0x9e) = 0;
        return 1;
    }
    pbVar1 = *(byte **)(param_1 + 0x50);
    fVar11 = 0.0;
    pfVar7 = (float *)0x0;
    local_res10[0] = 0.0;
    pfVar6 = pfVar7;
    if (pbVar1 != (byte *)0x0) {
        pfVar4 = pfVar7;
        do {
            uVar5 = (int)pfVar4 + 1;
            if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == 0x19) {
                pfVar6 = (float *)(pbVar1 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            pfVar4 = (float *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
    }
    pfVar4 = local_res10;
    if (pfVar6 != (float *)0x0) {
        pfVar4 = pfVar6;
    }
    fVar9 = *pfVar4;
    local_res10[0] = fVar9;
    if ((*(ulonglong *)(param_1 + 0x60) >> 6 & 1) != 0) {
        fVar8 = (float)FUN_140836340(DAT_140c61bb0,param_1,6,*(undefined8 *)(param_2 + 0x10),
                                     CONCAT412(in_XMM8_Dd,
                                               CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da))));
        fVar9 = fVar9 + fVar8;
    }
    pbVar1 = *(byte **)(param_1 + 0x80);
    if (pbVar1 != (byte *)0x0) {
        do {
            uVar5 = (int)pfVar7 + 1;
            if (pbVar1[uVar5] == 0x19) {
                pfVar6 = (float *)(pbVar1 + (longlong)pfVar7 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                if (pfVar6 != (float *)0x0) {
                    fVar10 = pfVar6[1] - *pfVar6;
                    fVar8 = fVar11;
                    if (fVar10 != fVar11) {
                        iVar2 = rand();
                        fVar8 = (float)iVar2 * 3.051851e-05 * fVar10;
                    }
                    fVar9 = fVar9 + fVar8 + *pfVar6;
                }
                break;
            }
            pfVar7 = (float *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
    }
    if (fVar11 < fVar9) {
        if (*(int *)(param_2 + 0x98) != 0) {
            iVar3 = FUN_14084f860((double)fVar9);
            *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + iVar3;
            return 1;
        }
        iVar3 = FUN_14084d1b0(param_1);
        if (iVar3 == 1) {
            return 3;
        }
    }
    return iVar3;
}



int FUN_14084eef0(longlong param_1,undefined4 *param_2)

{
    undefined uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined8 extraout_XMM0_Qa;

    iVar2 = FUN_140853540();
    if (((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x40) == 0)) {
        if ((*(char *)(param_2 + 9) == '\0') && (iVar2 == 1)) {
            if ((*(longlong *)(param_1 + 0x38) == 0) ||
                ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x50) & 1) != 0)) {
                iVar2 = FUN_140853430(extraout_XMM0_Qa,*param_2);
            }
            else {
                iVar2 = FUN_140853180(extraout_XMM0_Qa,*param_2);
            }
        }
        *(undefined *)(param_2 + 9) = 1;
    }
    uVar1 = *(undefined *)(param_2 + 9);
    iVar4 = iVar2;
    if (((*(ushort *)(param_2 + 8) & 1) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
        *(undefined *)(param_2 + 9) = 0;
        *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfffe;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x110))();
        if ((iVar3 != 1) && ((iVar4 = iVar3, iVar3 == 0x50 && (iVar4 = iVar2, iVar2 == 1)))) {
            iVar4 = 0x50;
        }
    }
    iVar2 = iVar4;
    if ((((*(ushort *)(param_2 + 8) & 2) != 0) && (*(longlong **)(param_1 + 0x68) != (longlong *)0x0))
        && (**(longlong **)(param_1 + 0x68) != 0)) {
        *(undefined *)(param_2 + 9) = 0;
        *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfffd;
        iVar3 = (**(code **)(***(longlong ***)(param_1 + 0x68) + 0x110))();
        if (((iVar3 != 1) && (iVar2 = iVar3, iVar3 == 0x50)) && (iVar2 = iVar4, iVar4 == 1)) {
            iVar2 = 0x50;
        }
    }
    iVar4 = iVar2;
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined *)(param_2 + 9) = uVar1;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x110))();
        if (((iVar3 != 1) && (iVar4 = iVar3, iVar3 == 0x50)) && (iVar4 = iVar2, iVar2 == 1)) {
            iVar4 = 0x50;
        }
    }
    return iVar4;
}



void FUN_14084f070(longlong param_1,longlong param_2)

{
    undefined uVar1;
    longlong lVar2;

    if ((((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x40) == 0)) &&
        (*(char *)(param_2 + 0x24) == '\0')) {
        lVar2 = *(longlong *)(param_1 + 0x38);
        if (lVar2 != 0) {
            if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
                FUN_140853570(param_1,*(undefined8 *)(param_2 + 8));
            }
            else if (lVar2 != 0) {
                *(short *)(lVar2 + 0x4e) = *(short *)(lVar2 + 0x4e) + 1;
            }
        }
        *(undefined *)(param_2 + 0x24) = 1;
    }
    uVar1 = *(undefined *)(param_2 + 0x24);
    if (((*(ushort *)(param_2 + 0x20) & 1) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
        *(undefined *)(param_2 + 0x24) = 0;
        *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xfffe;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x120))(*(longlong **)(param_1 + 0x48),param_2);
    }
    if ((((*(ushort *)(param_2 + 0x20) & 2) != 0) &&
         (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) && (**(longlong **)(param_1 + 0x68) != 0)
            ) {
        *(undefined *)(param_2 + 0x24) = 0;
        *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xfffd;
        (**(code **)(***(longlong ***)(param_1 + 0x68) + 0x120))
                (**(longlong ***)(param_1 + 0x68),param_2);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined *)(param_2 + 0x24) = uVar1;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x120))(*(longlong **)(param_1 + 0x40),param_2);
    }
    return;
}



char FUN_14084f160(longlong param_1,int param_2,char param_3,char param_4)

{
    char cVar1;

    cVar1 = false;
    if ((param_4 != '\0') || (cVar1 = param_2 == *(int *)(param_1 + 0x18), !(bool)cVar1)) {
        if ((param_3 == '\0') && (*(longlong *)(param_1 + 0x48) != 0)) {
            cVar1 = FUN_14085aed0();
            param_3 = '\x01';
            if (cVar1 != '\0') {
                return cVar1;
            }
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
            if ((*(byte *)(param_1 + 0x5a) & 8) != 0) {
                param_4 = '\x01';
            }
            cVar1 = FUN_14084f160(*(longlong *)(param_1 + 0x40),param_2,param_3,param_4);
        }
    }
    return cVar1;
}



char FUN_14084f1e0(longlong param_1,longlong param_2)

{
    bool bVar1;
    char cVar2;

    cVar2 = '\0';
    bVar1 = false;
    do {
        if (param_1 == 0) {
            return cVar2;
        }
        cVar2 = param_2 == param_1;
        if (((!(bool)cVar2) && (!bVar1)) && (*(longlong *)(param_1 + 0x48) != 0)) {
            cVar2 = FUN_14085af80();
            bVar1 = true;
        }
        param_1 = *(longlong *)(param_1 + 0x40);
    } while (cVar2 == '\0');
    return cVar2;
}



void FUN_14084f230(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    undefined8 extraout_XMM0_Qa;

    lVar1 = (**(code **)(*param_3 + 0x260))();
    if (lVar1 != 0) {
        FUN_140855080(extraout_XMM0_Qa,param_2,0,param_3,lVar1);
    }
    return;
}



void FUN_14084f690(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    uint uVar1;
    longlong *plVar2;
    byte *pbVar3;
    uint uVar4;
    longlong lVar5;
    float fVar6;

    plVar2 = (longlong *)param_1[0xe];
    fVar6 = 0.0;
    if ((plVar2 != (longlong *)0x0) && (lVar5 = *plVar2, lVar5 != plVar2[1])) {
        do {
            pbVar3 = *(byte **)(*(longlong *)(lVar5 + 8) + 0x18);
            if (pbVar3 != (byte *)0x0) {
                uVar4 = 0;
                do {
                    uVar1 = uVar4 + 1;
                    if (pbVar3[uVar1] == (byte)param_2) {
                        if (((float *)(pbVar3 + (ulonglong)uVar4 * 0x10 +
                                       ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)) != (float *)0x0) &&
                            (fVar6 != *(float *)(pbVar3 + (ulonglong)uVar4 * 0x10 +
                                                 ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)))) {
                            (**(code **)(*param_1 + 0x170))();
                        }
                        break;
                    }
                    uVar4 = uVar1;
                } while (uVar1 < *pbVar3);
            }
            lVar5 = lVar5 + 0x10;
        } while (lVar5 != *(longlong *)(param_1[0xe] + 8));
    }
    if ((param_1[5] != 0) && (pbVar3 = *(byte **)(param_1[5] + 0x18), pbVar3 != (byte *)0x0)) {
        uVar4 = 0;
        do {
            uVar1 = uVar4 + 1;
            if (pbVar3[uVar1] == (byte)param_2) {
                if ((float *)(pbVar3 + (ulonglong)uVar4 * 0x10 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)) ==
                    (float *)0x0) {
                    return;
                }
                if (fVar6 == *(float *)(pbVar3 + (ulonglong)uVar4 * 0x10 +
                                        ((ulonglong)(*pbVar3 + 4) & 0xfffffffc))) {
                    return;
                }
                (**(code **)(*param_1 + 0x170))(param_1,param_2,0,0,fVar6,param_3,param_4);
                return;
            }
            uVar4 = uVar1;
        } while (uVar1 < *pbVar3);
    }
    return;
}



int FUN_14084f860(double param_1)

{
    param_1 = (double)(ulonglong)DAT_140c110b4 * param_1;
    if (0.0 < param_1) {
        return (int)(param_1 + 0.5);
    }
    return (int)(param_1 + -0.5);
}



longlong *
FUN_14084f8a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong **param_4,
              longlong *param_5)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = *param_4;
    while ((plVar2 != param_4[1] &&
            ((*plVar2 != *param_5 || (((*(uint *)(plVar2 + 1) ^ *(uint *)(param_5 + 1)) & 1) != 0)))))
    {
        plVar2 = plVar2 + 3;
    }
    if (plVar2 == param_4[1]) {
        plVar2 = (longlong *)0x0;
    }
    else {
        plVar2 = plVar2 + 2;
        if (plVar2 != (longlong *)0x0) {
            *(undefined4 *)plVar2 = param_3;
            return plVar2;
        }
    }
    plVar1 = (longlong *)FUN_14084cb00(param_4);
    if (plVar1 == (longlong *)0x0) {
        return plVar2;
    }
    *plVar1 = *param_5;
    plVar1[1] = param_5[1];
    *(undefined4 *)(plVar1 + 2) = param_3;
    return plVar1 + 2;
}



undefined8 FUN_14084f950(longlong param_1,byte **param_2)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    byte bVar6;
    byte bVar7;
    undefined2 uVar8;
    byte *pbVar9;

    pbVar9 = *param_2;
    bVar1 = *pbVar9;
    *param_2 = pbVar9 + 1;
    bVar2 = pbVar9[1];
    *param_2 = pbVar9 + 2;
    bVar3 = pbVar9[2];
    *param_2 = pbVar9 + 3;
    uVar8 = *(undefined2 *)(pbVar9 + 3);
    *param_2 = pbVar9 + 5;
    *(undefined2 *)(param_1 + 0x58) = uVar8;
    bVar4 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xef;
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | (bVar4 != 0) << 4;
    pbVar9 = *param_2;
    bVar4 = *pbVar9;
    *param_2 = pbVar9 + 1;
    bVar5 = pbVar9[1];
    *param_2 = pbVar9 + 2;
    bVar6 = pbVar9[2];
    *param_2 = pbVar9 + 3;
    bVar7 = pbVar9[3];
    *param_2 = pbVar9 + 4;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0x7f;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | bVar7 << 7;
    bVar7 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) & 0xfe;
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | bVar7 & 1;
    bVar7 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) & 0xfd;
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | (bVar7 & 1) * '\x02';
    bVar7 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) & 0xfb;
    *(ushort *)(param_1 + 0x88) = (ushort)bVar1;
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | (bVar7 & 1) << 2;
    FUN_140854640(param_1,bVar2 != 0);
    FUN_140854910(param_1,bVar3 != 0);
    *(ushort *)(param_1 + 0x8a) = (ushort)bVar4;
    FUN_140854630(param_1,bVar5 != 0);
    FUN_140854de0(param_1,bVar6 != 0);
    return 1;
}



undefined8 FUN_14084fac0(byte **param_1,byte param_2,undefined8 param_3)

{
    byte *pbVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    uint uVar4;

    pbVar1 = *param_1;
    if (pbVar1 != (byte *)0x0) {
        uVar3 = 0;
        do {
            uVar4 = (int)uVar3 + 1;
            if (pbVar1[uVar4] == param_2) {
                puVar2 = (undefined8 *)(pbVar1 + uVar3 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                if (puVar2 != (undefined8 *)0x0) goto LAB_14084fb21;
                break;
            }
            uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    puVar2 = (undefined8 *)FUN_14084c870(param_1);
    if (puVar2 == (undefined8 *)0x0) {
        return 2;
    }
    LAB_14084fb21:
    *puVar2 = param_3;
    return 1;
}



undefined8 FUN_14084fb50(byte **param_1,byte param_2,undefined4 param_3)

{
    byte *pbVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    uint uVar4;

    pbVar1 = *param_1;
    if (pbVar1 != (byte *)0x0) {
        uVar3 = 0;
        do {
            uVar4 = (int)uVar3 + 1;
            if (pbVar1[uVar4] == param_2) {
                puVar2 = (undefined4 *)(pbVar1 + uVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                if (puVar2 != (undefined4 *)0x0) goto LAB_14084fbb1;
                break;
            }
            uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    puVar2 = (undefined4 *)FUN_14084c950(param_1);
    if (puVar2 == (undefined4 *)0x0) {
        return 2;
    }
    LAB_14084fbb1:
    *puVar2 = param_3;
    return 1;
}



void FUN_14084fbe0(longlong param_1,byte param_2,undefined8 param_3,int param_4,int param_5)

{
    byte *pbVar1;
    ulonglong uVar2;
    uint uVar3;

    FUN_1408542c0();
    if ((param_4 == 0) && (param_5 == 0)) {
        pbVar1 = *(byte **)(param_1 + 0x80);
        if (pbVar1 != (byte *)0x0) {
            uVar2 = 0;
            do {
                uVar3 = (int)uVar2 + 1;
                if (pbVar1[uVar3] == param_2) {
                    if (pbVar1 + uVar2 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0) {
                        return;
                    }
                    goto LAB_14084fc4d;
                }
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < *pbVar1);
        }
    }
    else {
        LAB_14084fc4d:
        FUN_14084fac0(param_1 + 0x80,param_2,CONCAT44(param_5,param_4));
    }
    return;
}



void FUN_14084fc80(undefined4 param_1,undefined4 param_2,float param_3,float param_4,
                   longlong *param_5_00,uint param_6,undefined8 param_7,undefined8 param_8,
                   float param_5)

{
    byte *pbVar1;
    float *pfVar2;
    uint uVar3;
    float *pfVar4;
    float *pfVar5;
    byte bVar6;
    ulonglong uVar7;
    float fVar8;
    float local_res10 [2];
    ulonglong in_stack_ffffffffffffff88;

    uVar7 = (ulonglong)(int)param_6;
    pfVar5 = (float *)0x0;
    fVar8 = 0.0;
    bVar6 = (byte)param_6;
    if (((param_6 < 5) || (param_6 - 8 < 2)) || (param_6 - 0x12 < 7)) {
        pbVar1 = (byte *)param_5_00[10];
        local_res10[0] = 0.0;
        pfVar4 = pfVar5;
        if (pbVar1 != (byte *)0x0) {
            pfVar2 = pfVar5;
            do {
                uVar3 = (int)pfVar2 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar3 + (longlong)pbVar1) == bVar6) {
                    pfVar4 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar2 = (float *)(ulonglong)uVar3;
            } while (uVar3 < *pbVar1);
        }
        pfVar2 = local_res10;
        if (pfVar4 != (float *)0x0) {
            pfVar2 = pfVar4;
        }
        local_res10[0] = *pfVar2;
        if (param_3 - local_res10[0] == 0.0) goto LAB_14084fe3e;
        (**(code **)(*param_5_00 + 0xb0))(param_5_00,(&DAT_1409a3530)[uVar7],*param_5_00,0,0);
    }
    else {
        if (2 < param_6 - 0xb) {
            FUN_140854370(param_1,param_2,param_3,param_4,param_5_00,uVar7 & 0xffffffff,param_7,param_8,
                          in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong)(uint)param_5);
            goto LAB_14084fe3e;
        }
        pbVar1 = (byte *)param_5_00[10];
        local_res10[0] = 0.0;
        pfVar4 = pfVar5;
        if (pbVar1 != (byte *)0x0) {
            pfVar2 = pfVar5;
            do {
                uVar3 = (int)pfVar2 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar3 + (longlong)pbVar1) == bVar6) {
                    pfVar4 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar2 = (float *)(ulonglong)uVar3;
            } while (uVar3 < *pbVar1);
        }
        pfVar2 = local_res10;
        if (pfVar4 != (float *)0x0) {
            pfVar2 = pfVar4;
        }
        local_res10[0] = *pfVar2;
        if (param_3 - local_res10[0] == 0.0) goto LAB_14084fe3e;
        (**(code **)(*param_5_00 + 0x230))
                (param_3 - local_res10[0],param_3,param_5_00,*param_5_00,(&DAT_1409a3530)[uVar7],0,0);
    }
    local_res10[0] = param_3;
    FUN_14084fb50(param_5_00 + 10,param_6 & 0xff);
    LAB_14084fe3e:
    if ((param_4 == fVar8) && (param_5 == fVar8)) {
        pbVar1 = (byte *)param_5_00[0x10];
        if (pbVar1 != (byte *)0x0) {
            do {
                uVar3 = (int)pfVar5 + 1;
                if (pbVar1[uVar3] == bVar6) {
                    if (pbVar1 + (longlong)pfVar5 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
                            ) {
                        return;
                    }
                    goto LAB_14084fea1;
                }
                pfVar5 = (float *)(ulonglong)uVar3;
            } while (uVar3 < *pbVar1);
        }
    }
    else {
        LAB_14084fea1:
        FUN_14084fac0(param_5_00 + 0x10,param_6 & 0xff,CONCAT44(param_5,param_4));
    }
    return;
}



void FUN_14084fef0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x260))(param_1,param_3);
    if (lVar1 != 0) {
        FUN_140854df0(param_1,lVar1,param_2);
    }
    return;
}



undefined4 FUN_14084ff60(longlong *param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = param_1[0x13];
    if (lVar1 == 0) {
        if (param_2 == 0) {
            return 1;
        }
        lVar1 = FUN_1408819f0();
        param_1[0x13] = lVar1;
        if (lVar1 != 0) {
            lVar2 = 0;
            do {
                *(undefined4 *)(lVar2 + lVar1) = 0;
                lVar2 = lVar2 + 4;
            } while (lVar2 < 0x10);
        }
        lVar1 = param_1[0x13];
        if (lVar1 == 0) {
            return 0x34;
        }
    }
    *(int *)(lVar1 + (ulonglong)param_3 * 4) = param_2;
    (**(code **)(*param_1 + 0x198))(param_1);
    return 1;
}



void FUN_140850010(longlong param_1,char **param_2)

{
    char cVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;

    cVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xef;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | (cVar1 != '\0') << 4;
    cVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xdf;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | (cVar1 != '\0') << 5;
    cVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xbf;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | (cVar1 != '\0') << 6;
    cVar1 = **param_2;
    *param_2 = *param_2 + 1;
    iVar4 = 0;
    do {
        uVar3 = 0;
        if (cVar1 != '\0') {
            uVar3 = *(undefined4 *)*param_2;
            *param_2 = (char *)((longlong)*param_2 + 4);
        }
        iVar2 = FUN_14084ff60(param_1,uVar3,iVar4);
    } while ((iVar2 == 1) && (iVar4 = iVar4 + 1, iVar4 < 4));
    return;
}



undefined4 FUN_140850240(byte **param_1,byte **param_2)

{
    longlong lVar1;
    byte bVar2;
    byte *pbVar3;
    uint uVar4;

    bVar2 = **param_2;
    *param_2 = *param_2 + 1;
    if (bVar2 != 0) {
        uVar4 = bVar2 + 4 & 0xfffffffc;
        pbVar3 = (byte *)FUN_1408819f0(DAT_140c10f20,uVar4 + (uint)bVar2 * 8);
        if (pbVar3 == (byte *)0x0) {
            return 0x34;
        }
        *pbVar3 = bVar2;
        FUN_1407db590(pbVar3 + 1,*param_2,bVar2);
        *param_2 = *param_2 + bVar2;
        lVar1 = (ulonglong)bVar2 * 8;
        FUN_1407db590(pbVar3 + uVar4,*param_2,lVar1);
        *param_2 = *param_2 + lVar1;
        *param_1 = pbVar3;
    }
    return 1;
}



undefined4 FUN_1408502f0(byte **param_1,byte **param_2)

{
    longlong lVar1;
    byte bVar2;
    byte *pbVar3;
    uint uVar4;

    bVar2 = **param_2;
    *param_2 = *param_2 + 1;
    if (bVar2 != 0) {
        uVar4 = bVar2 + 4 & 0xfffffffc;
        pbVar3 = (byte *)FUN_1408819f0(DAT_140c10f20,uVar4 + (uint)bVar2 * 4);
        if (pbVar3 == (byte *)0x0) {
            return 0x34;
        }
        *pbVar3 = bVar2;
        FUN_1407db590(pbVar3 + 1,*param_2,bVar2);
        *param_2 = *param_2 + bVar2;
        lVar1 = (ulonglong)bVar2 * 4;
        FUN_1407db590(pbVar3 + uVar4,*param_2,lVar1);
        *param_2 = *param_2 + lVar1;
        *param_1 = pbVar3;
    }
    return 1;
}



undefined8 FUN_1408503a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_1408502f0(param_1 + 0x50);
    if (iVar1 == 1) {
        uVar2 = FUN_140850240(param_1 + 0x80,param_2,param_3);
        if ((int)uVar2 == 1) {
            *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x80;
            return uVar2;
        }
    }
    return 2;
}



ulonglong FUN_140850410(longlong param_1,uint **param_2)

{
    char cVar1;
    char cVar2;
    uint uVar3;
    uint *puVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    uint *puVar8;
    longlong lVar9;
    uint uVar10;
    uint *puVar11;
    ulonglong uVar12;
    uint *puVar13;

    cVar1 = *(char *)*param_2;
    *param_2 = (uint *)((longlong)*param_2 + 1);
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xef;
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | (cVar1 != '\0') << 4;
    if ((*(byte *)(param_1 + 0x5b) & 0x10) != 0) {
        puVar11 = *param_2;
        cVar1 = *(char *)puVar11;
        *param_2 = (uint *)((longlong)puVar11 + 1);
        cVar2 = *(char *)((longlong)puVar11 + 1);
        *param_2 = (uint *)((longlong)puVar11 + 2);
        if (cVar1 != '\0') {
            cVar1 = *(char *)(uint *)((longlong)puVar11 + 2);
            *param_2 = (uint *)((longlong)puVar11 + 3);
            *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xdf;
            *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | (cVar1 != '\0') << 5;
            *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfc;
        }
        if (cVar2 != '\0') {
            uVar7 = FUN_14084d430();
            *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfd;
            *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 1;
            uVar12 = uVar7 & 0xffffffff;
            if ((int)uVar7 == 1) {
                lVar9 = *(longlong *)(param_1 + 0x78);
                uVar6 = **param_2;
                *param_2 = *param_2 + 1;
                *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xf3;
                *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | ((byte)uVar6 & 3) << 2;
                uVar6 = **param_2;
                *param_2 = *param_2 + 1;
                *(uint *)(lVar9 + 0xc) = uVar6;
                cVar1 = *(char *)*param_2;
                *param_2 = (uint *)((longlong)*param_2 + 1);
                *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) & 0xfe;
                *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) | cVar1 != '\0' & (byte)uVar12;
                puVar11 = *param_2;
                if ((*(byte *)(param_1 + 0xa0) & 0xc) == 4) {
                    cVar1 = *(char *)puVar11;
                    *param_2 = (uint *)((longlong)puVar11 + 1);
                    *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) & 0xf7;
                    *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) | (cVar1 != '\0' & (byte)uVar12) << 3;
                    return uVar12;
                }
                uVar6 = *puVar11;
                *param_2 = puVar11 + 1;
                *(uint *)(lVar9 + 0x24) = uVar6;
                cVar1 = *(char *)*param_2;
                *param_2 = (uint *)((longlong)*param_2 + 1);
                *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) & 0xdf;
                *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) | (cVar1 != '\0') << 5;
                uVar6 = **param_2;
                *param_2 = *param_2 + 1;
                *(uint *)(lVar9 + 0x28) = uVar6;
                cVar1 = *(char *)*param_2;
                *param_2 = (uint *)((longlong)*param_2 + 1);
                *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) & 0xef;
                puVar8 = (uint *)0x0;
                *(byte *)(lVar9 + 0x4c) = *(byte *)(lVar9 + 0x4c) | (cVar1 != '\0') << 4;
                uVar6 = **param_2;
                puVar11 = *param_2 + 1;
                *param_2 = puVar11;
                puVar13 = puVar8;
                if (uVar6 != 0) {
                    *param_2 = puVar11 + (ulonglong)uVar6 * 4;
                    puVar13 = puVar11;
                }
                uVar10 = 2;
                uVar3 = **param_2;
                puVar11 = *param_2 + 1;
                *param_2 = puVar11;
                uVar7 = uVar12;
                if ((uVar3 != 0) && (*param_2 = puVar11 + (ulonglong)uVar3 * 2, uVar6 != 0)) {
                    if (*(longlong *)(param_1 + 0x78) == 0) {
                        uVar7 = 2;
                    }
                    else {
                        uVar6 = FUN_140873c60(*(longlong *)(param_1 + 0x78),puVar13,uVar6,puVar11,uVar3);
                        uVar7 = (ulonglong)uVar6;
                    }
                }
                puVar11 = puVar8;
                puVar13 = puVar8;
                if (3 < (int)uVar3) {
                    puVar13 = (uint *)((ulonglong)((uVar3 - 4 >> 2) + 1) << 2);
                    do {
                        puVar4 = *param_2;
                        *param_2 = puVar4 + 2;
                        uVar6 = puVar4[1];
                        lVar9 = *(longlong *)(param_1 + 0x78);
                        if ((lVar9 != 0) && ((uint)puVar11 < *(uint *)(lVar9 + 0x48))) {
                            *(uint *)(*(longlong *)(lVar9 + 0x40) + 0xc + (longlong)puVar8) = *puVar4;
                            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 0x10 +
                                      (longlong)puVar8) = uVar6;
                        }
                        puVar4 = *param_2;
                        *param_2 = puVar4 + 2;
                        lVar9 = *(longlong *)(param_1 + 0x78);
                        uVar6 = puVar4[1];
                        if ((lVar9 != 0) && (uVar10 - 1 < *(uint *)(lVar9 + 0x48))) {
                            *(uint *)(*(longlong *)(lVar9 + 0x40) + 0x24 + (longlong)puVar8) = *puVar4;
                            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 0x28 +
                                      (longlong)puVar8) = uVar6;
                        }
                        puVar4 = *param_2;
                        *param_2 = puVar4 + 2;
                        uVar6 = puVar4[1];
                        lVar9 = *(longlong *)(param_1 + 0x78);
                        if ((lVar9 != 0) && (uVar10 < *(uint *)(lVar9 + 0x48))) {
                            *(uint *)(*(longlong *)(lVar9 + 0x40) + 0x3c + (longlong)puVar8) = *puVar4;
                            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 0x40 +
                                      (longlong)puVar8) = uVar6;
                        }
                        puVar4 = *param_2;
                        *param_2 = puVar4 + 2;
                        lVar9 = *(longlong *)(param_1 + 0x78);
                        uVar6 = puVar4[1];
                        if ((lVar9 != 0) && (uVar10 + 1 < *(uint *)(lVar9 + 0x48))) {
                            *(uint *)(*(longlong *)(lVar9 + 0x40) + 0x54 + (longlong)puVar8) = *puVar4;
                            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 0x58 +
                                      (longlong)puVar8) = uVar6;
                        }
                        uVar6 = (uint)puVar11 + 4;
                        puVar11 = (uint *)(ulonglong)uVar6;
                        puVar8 = puVar8 + 0x18;
                        uVar10 = uVar10 + 4;
                    } while (uVar6 < uVar3 - 3);
                }
                if ((uint)puVar11 < uVar3) {
                    lVar9 = (longlong)puVar13 * 0x18;
                    do {
                        puVar13 = *param_2;
                        *param_2 = puVar13 + 2;
                        uVar6 = puVar13[1];
                        lVar5 = *(longlong *)(param_1 + 0x78);
                        if ((lVar5 != 0) && ((uint)puVar11 < *(uint *)(lVar5 + 0x48))) {
                            *(uint *)(*(longlong *)(lVar5 + 0x40) + 0xc + lVar9) = *puVar13;
                            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) + 0x10 + lVar9) = uVar6;
                        }
                        uVar6 = (uint)puVar11 + 1;
                        puVar11 = (uint *)(ulonglong)uVar6;
                        lVar9 = lVar9 + 0x18;
                    } while (uVar6 < uVar3);
                }
            }
            return uVar7;
        }
    }
    return 1;
}



void FUN_1408508c0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
    (**(code **)(*param_1 + 0x188))(param_1,0,param_2,param_3);
    // WARNING: Could not recover jumptable at 0x000140850902. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x280))(param_1,param_2,param_3);
    return;
}



void FUN_140850910(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
    longlong *plVar1;
    byte *pbVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong lVar5;
    undefined4 in_XMM6_Da;
    float fVar6;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar7 [16];

    plVar1 = (longlong *)param_1[0xe];
    if ((plVar1 != (longlong *)0x0) && (lVar5 = *plVar1, lVar5 != plVar1[1])) {
        auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar6 = 1.0;
        do {
            pbVar2 = *(byte **)(*(longlong *)(lVar5 + 8) + 0x18);
            if (pbVar2 != (byte *)0x0) {
                uVar3 = 0;
                do {
                    uVar4 = (int)uVar3 + 1;
                    if (pbVar2[uVar4] == 10) {
                        if (((float *)(pbVar2 + uVar3 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)) !=
                             (float *)0x0) &&
                            (fVar6 != *(float *)(pbVar2 + uVar3 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc))
                            )) {
                            (**(code **)(*param_1 + 0x188))
                                    (param_1,*(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x10),param_2,param_3,
                                     auVar7);
                        }
                        break;
                    }
                    uVar3 = (ulonglong)uVar4;
                } while (uVar4 < *pbVar2);
            }
            lVar5 = lVar5 + 0x10;
        } while (lVar5 != *(longlong *)(param_1[0xe] + 8));
    }
    return;
}



void FUN_1408509f0(longlong param_1,longlong param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong *plVar7;

    pplVar1 = *(longlong ***)(param_1 + 0x70);
    if ((pplVar1 != (longlong **)0x0) && (plVar6 = *pplVar1, plVar6 != pplVar1[1])) {
        do {
            uVar3 = DAT_140c10f20;
            if (*plVar6 == param_2) {
                lVar2 = plVar6[1];
                if (lVar2 != 0) {
                    FUN_140873940(lVar2);
                    FUN_140881720(uVar3,lVar2);
                }
                lVar2 = *(longlong *)(param_1 + 0x70);
                plVar4 = (longlong *)(*(longlong *)(lVar2 + 8) + -0x10);
                if (plVar6 < plVar4) {
                    uVar5 = ((ulonglong)((longlong)plVar4 + (-1 - (longlong)plVar6)) >> 3 & 0xfffffffffffffffe
                            ) + 2 & 0x1ffffffffffffffe;
                    plVar4 = plVar6 + 2;
                    plVar7 = plVar6;
                    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *plVar7 = *plVar4;
                        plVar4 = plVar4 + 1;
                        plVar7 = plVar7 + 1;
                    }
                }
                plVar4 = (longlong *)(lVar2 + 8);
                *plVar4 = *plVar4 + -0x10;
            }
            else {
                plVar6 = plVar6 + 2;
            }
        } while (plVar6 != *(longlong **)(*(longlong *)(param_1 + 0x70) + 8));
    }
    return;
}



void FUN_140850ac0(longlong **param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar3 = *param_1;
    plVar2 = param_1[1];
    if (plVar3 != plVar2) {
        do {
            if (*plVar3 == param_2) break;
            plVar3 = plVar3 + 2;
        } while (plVar3 != plVar2);
        if (plVar3 != plVar2) {
            if (plVar3 < plVar2 + -2) {
                uVar1 = ((ulonglong)((longlong)(plVar2 + -2) + (-1 - (longlong)plVar3)) >> 3 &
                         0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                plVar2 = plVar3 + 2;
                for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                    *plVar3 = *plVar2;
                    plVar2 = plVar2 + 1;
                    plVar3 = plVar3 + 1;
                }
            }
            param_1[1] = param_1[1] + -2;
        }
    }
    return;
}



void FUN_140850b30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    byte bVar1;
    longlong lVar2;

    do {
        lVar2 = param_1;
        if ((*(byte *)(lVar2 + 0x5b) & 0x10) != 0) break;
        param_1 = *(longlong *)(lVar2 + 0x40);
    } while (*(longlong *)(lVar2 + 0x40) != 0);
    FUN_1408524d0(lVar2);
    if (param_4 != 0) {
        bVar1 = FUN_1408526a0(lVar2,param_2,param_4 + 0x18);
        *(byte *)(param_4 + 0x4c) = *(byte *)(param_4 + 0x4c) & 0xfb;
        *(byte *)(param_4 + 0x4c) = *(byte *)(param_4 + 0x4c) | (bVar1 & 1) << 2;
    }
    return;
}



ulonglong FUN_140850ba0(longlong *param_1,undefined8 param_2,undefined *param_3)

{
    float fVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    bool bVar7;
    bool bVar8;
    float local_res10;
    uint uStackX20;

    uVar3 = 0;
    iVar4 = 0;
    iVar5 = (int)(param_1[1] - *param_1 >> 3) + -1;
    if (-1 < iVar5) {
        uStackX20 = (uint)((ulonglong)param_2 >> 0x20);
        local_res10 = (float)param_2;
        uVar6 = uVar3;
        do {
            iVar4 = (int)uVar6 + (iVar5 - (int)uVar6) / 2;
            lVar2 = *(longlong *)(*param_1 + (longlong)iVar4 * 8);
            fVar1 = *(float *)(lVar2 + 0x184);
            if (local_res10 == fVar1) {
                bVar7 = uStackX20 < *(uint *)(lVar2 + 0x188);
                bVar8 = uStackX20 == *(uint *)(lVar2 + 0x188);
            }
            else {
                bVar8 = local_res10 == fVar1;
                bVar7 = local_res10 < fVar1;
            }
            if (bVar7 || bVar8) {
                if (local_res10 == fVar1) {
                    bVar8 = uStackX20 < *(uint *)(lVar2 + 0x188);
                }
                else {
                    bVar8 = local_res10 < fVar1;
                }
                if (!bVar8) {
                    *param_3 = 1;
                    return *param_1 + (longlong)iVar4 * 8;
                }
                uVar6 = (ulonglong)(iVar4 + 1);
            }
            else {
                iVar5 = iVar4 + -1;
            }
            iVar4 = (int)uVar6;
        } while (iVar4 <= iVar5);
    }
    *param_3 = 0;
    if (*param_1 != 0) {
        uVar3 = *param_1 + (longlong)iVar4 * 8;
    }
    return uVar3;
}



ulonglong FUN_140850c90(longlong *param_1,undefined8 param_2,undefined *param_3)

{
    float fVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    bool bVar7;
    bool bVar8;
    float local_res10;
    uint uStackX20;

    uVar3 = 0;
    iVar4 = 0;
    iVar5 = (int)(param_1[1] - *param_1 >> 3) + -1;
    if (-1 < iVar5) {
        uStackX20 = (uint)((ulonglong)param_2 >> 0x20);
        local_res10 = (float)param_2;
        uVar6 = uVar3;
        do {
            iVar4 = (int)uVar6 + (iVar5 - (int)uVar6) / 2;
            lVar2 = *(longlong *)(*param_1 + (longlong)iVar4 * 8);
            fVar1 = *(float *)(lVar2 + 0x184);
            if (local_res10 == fVar1) {
                bVar7 = uStackX20 < *(uint *)(lVar2 + 0x188);
            }
            else {
                bVar7 = fVar1 < local_res10;
            }
            if (bVar7) {
                iVar5 = iVar4 + -1;
            }
            else {
                if (local_res10 == fVar1) {
                    bVar8 = uStackX20 < *(uint *)(lVar2 + 0x188);
                    bVar7 = uStackX20 == *(uint *)(lVar2 + 0x188);
                }
                else {
                    bVar7 = fVar1 == local_res10;
                    bVar8 = fVar1 < local_res10;
                }
                if (bVar8 || bVar7) {
                    *param_3 = 1;
                    return *param_1 + (longlong)iVar4 * 8;
                }
                uVar6 = (ulonglong)(iVar4 + 1);
            }
            iVar4 = (int)uVar6;
        } while (iVar4 <= iVar5);
    }
    *param_3 = 0;
    if (*param_1 != 0) {
        uVar3 = *param_1 + (longlong)iVar4 * 8;
    }
    return uVar3;
}



void FUN_140850d80(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined local_res8 [8];

    lVar1 = *param_1;
    iVar4 = (int)(param_1[1] - lVar1 >> 3);
    if (iVar4 != 0) {
        lVar8 = 0;
        param_1[1] = lVar1;
        if (0 < iVar4) {
            do {
                lVar2 = *(longlong *)(lVar1 + lVar8 * 8);
                lVar5 = FUN_140850ba0(param_1,*(undefined8 *)(lVar2 + 0x184),local_res8);
                if (lVar5 == 0) {
                    uVar7 = param_1[1] - *param_1 >> 3 & 0xffffffff;
                    if (((uVar7 < *(uint *)(param_1 + 2)) || (cVar3 = FUN_140892ef0(param_1,8), cVar3 != '\0')
                        ) && (uVar7 < *(uint *)(param_1 + 2))) {
                        plVar6 = (longlong *)param_1[1];
                        param_1[1] = (longlong)(plVar6 + 1);
                    }
                    else {
                        plVar6 = (longlong *)0x0;
                    }
                }
                else {
                    plVar6 = (longlong *)FUN_1408535a0(param_1,lVar5 - *param_1 >> 3 & 0xffffffff);
                }
                lVar8 = lVar8 + 1;
                *plVar6 = lVar2;
            } while (lVar8 < iVar4);
        }
    }
    return;
}



void FUN_140850e70(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined local_res8 [8];

    lVar1 = *param_1;
    iVar4 = (int)(param_1[1] - lVar1 >> 3);
    if (iVar4 != 0) {
        lVar8 = 0;
        param_1[1] = lVar1;
        if (0 < iVar4) {
            do {
                lVar2 = *(longlong *)(lVar1 + lVar8 * 8);
                lVar5 = FUN_140850c90(param_1,*(undefined8 *)(lVar2 + 0x184),local_res8);
                if (lVar5 == 0) {
                    uVar7 = param_1[1] - *param_1 >> 3 & 0xffffffff;
                    if (((uVar7 < *(uint *)(param_1 + 2)) || (cVar3 = FUN_140892ef0(param_1,8), cVar3 != '\0')
                        ) && (uVar7 < *(uint *)(param_1 + 2))) {
                        plVar6 = (longlong *)param_1[1];
                        param_1[1] = (longlong)(plVar6 + 1);
                    }
                    else {
                        plVar6 = (longlong *)0x0;
                    }
                }
                else {
                    plVar6 = (longlong *)FUN_1408535a0(param_1,lVar5 - *param_1 >> 3 & 0xffffffff);
                }
                lVar8 = lVar8 + 1;
                *plVar6 = lVar2;
            } while (lVar8 < iVar4);
        }
    }
    return;
}



undefined8 * FUN_140851300(undefined8 *param_1)

{
    FUN_140865e10();
    *param_1 = &PTR_FUN_1409a3620;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x900000;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    return param_1;
}



void FUN_140851350(undefined8 *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined4 uVar3;
    int iVar4;
    ulonglong uVar5;

    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | 1;
    *param_1 = &PTR_FUN_1409a3620;
    if (param_1[6] != 0) {
        FUN_140881720();
    }
    iVar4 = 0;
    lVar1 = param_1[0xc];
    uVar3 = DAT_140c10f20;
    while (DAT_140c10f20 = uVar3, lVar1 != 0) {
        uVar5 = 1 << ((byte)iVar4 & 0x3f);
        if ((param_1[0xc] & uVar5) != 0) {
            FUN_140838e30(DAT_140c61bb0,param_1,iVar4);
            param_1[0xc] = param_1[0xc] & ~uVar5;
        }
        iVar4 = iVar4 + 1;
        uVar3 = DAT_140c10f20;
        lVar1 = param_1[0xc];
    }
    lVar1 = param_1[5];
    if (lVar1 != 0) {
        FUN_140873940(lVar1);
        FUN_140881720(uVar3,lVar1);
    }
    if (param_1[4] != 0) {
        FUN_140852400(param_1);
        FUN_140854040(param_1,1);
    }
    param_1[4] = 0;
    if ((longlong **)param_1[0xd] != (longlong **)0x0) {
        plVar2 = *(longlong **)param_1[0xd];
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
        }
        if (param_1[0xd] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
    }
    if (param_1[7] != 0) {
        FUN_1408520b0(param_1);
    }
    if (param_1[10] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[10] = 0;
    FUN_140866140(param_1);
    return;
}



undefined8 FUN_140851480(undefined8 param_1,uint param_2)

{
    FUN_140851350();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_1408514b0(longlong *param_1,longlong param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined local_res8 [8];

    lVar1 = *param_1;
    lVar2 = param_1[1];
    if (*(char *)((longlong)param_1 + 0x1a) == '\0') {
        lVar4 = FUN_140850ba0(param_1,*(undefined8 *)(param_2 + 0x184),local_res8);
    }
    else {
        lVar4 = FUN_140850c90();
    }
    if (lVar4 == 0) {
        plVar5 = (longlong *)FUN_140851590(param_1);
    }
    else {
        plVar5 = (longlong *)FUN_1408535a0(param_1,lVar4 - lVar1 >> 3 & 0xffffffff);
    }
    if (plVar5 == (longlong *)0x0) {
        iVar3 = 2;
    }
    else {
        if (lVar2 == lVar1) {
            if (param_3 + -1 == 0) {
                FUN_140843940(param_1);
            }
            else if (param_3 == 2) {
                FUN_140843970(param_1);
                *plVar5 = param_2;
                return param_3 + -1;
            }
        }
        *plVar5 = param_2;
        iVar3 = 1;
    }
    return iVar3;
}



void FUN_140851560(longlong *param_1,longlong *param_2)

{
    (**(code **)(*param_2 + 8))(param_2);
    // WARNING: Could not recover jumptable at 0x00014085158c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
    return;
}



longlong FUN_140851590(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_140892ef0(param_1,8), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 8;
    return lVar1;
}



longlong FUN_1408515f0(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_140852f90(param_1,2), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar1 + 0x10) = 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x18;
    return lVar1;
}



int FUN_140851680(longlong param_1)

{
    LPCRITICAL_SECTION lpCriticalSection;
    int iVar1;

    lpCriticalSection =
            (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,(*(byte *)(param_1 + 0x5b) >> 1 & 1) != 0);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar1;
    LeaveCriticalSection(lpCriticalSection);
    return iVar1;
}



undefined4 FUN_1408516e0(longlong param_1,undefined4 param_2,int param_3,char param_4)

{
    undefined4 uVar1;
    longlong *plVar2;
    int *piVar3;
    int *piVar4;
    ulonglong uVar5;
    longlong **pplVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined4 uStack44;

    plVar2 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0xc70);
    piVar4 = *(int **)(param_1 + 0x30);
    piVar3 = *(int **)(param_1 + 0x28);
    if (piVar3 == piVar4) {
        LAB_1408517e7:
        if (plVar2 == (longlong *)0x0) {
            return 0x10;
        }
        piVar4 = *(int **)(param_1 + 0x28);
        piVar3 = *(int **)(param_1 + 0x30);
        if (piVar4 == piVar3) {
            LAB_140851822:
            piVar4 = (int *)FUN_14084cb00(param_1 + 0x28);
            if (piVar4 != (int *)0x0) {
                *piVar4 = param_3;
                pplVar6 = (longlong **)(piVar4 + 2);
                goto LAB_140851836;
            }
        }
        else {
            do {
                if (*piVar4 == param_3) break;
                piVar4 = piVar4 + 6;
            } while (piVar4 != piVar3);
            if ((piVar4 == piVar3) || (pplVar6 = (longlong **)(piVar4 + 2), pplVar6 == (longlong **)0x0))
                goto LAB_140851822;
            LAB_140851836:
            *pplVar6 = plVar2;
            pplVar6[1] = (longlong *)CONCAT44(uStack44,param_2);
            if (pplVar6 != (longlong **)0x0) {
                FUN_140869120(plVar2,*(undefined8 *)(param_1 + 0x18));
                if (param_4 != '\0') {
                    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1a0))();
                    return 1;
                }
                goto LAB_140851769;
            }
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar1 = 0x34;
    }
    else {
        do {
            if (*piVar3 == param_3) break;
            piVar3 = piVar3 + 6;
        } while (piVar3 != piVar4);
        if ((piVar3 == piVar4) || (pplVar6 = (longlong **)(piVar3 + 2), pplVar6 == (longlong **)0x0))
            goto LAB_1408517e7;
        if (plVar2 != *pplVar6) {
            FUN_140869260();
            (**(code **)(**pplVar6 + 0x10))();
            puVar8 = *(undefined8 **)(param_1 + 0x28);
            puVar7 = *(undefined8 **)(param_1 + 0x30);
            if (puVar8 != puVar7) {
                do {
                    if (*(int *)puVar8 == param_3) break;
                    puVar8 = puVar8 + 3;
                } while (puVar8 != puVar7);
                if (puVar8 != puVar7) {
                    if (puVar8 < puVar7 + -3) {
                        uVar5 = ((ulonglong)((longlong)(puVar7 + -3) + (-1 - (longlong)puVar8)) / 0x18 + 1) * 3
                                & 0x1fffffffffffffff;
                        puVar7 = puVar8 + 3;
                        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                            *puVar8 = *puVar7;
                            puVar7 = puVar7 + 1;
                            puVar8 = puVar8 + 1;
                        }
                    }
                    *(longlong *)(param_1 + 0x30) =
                            (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x30));
                }
            }
            goto LAB_1408517e7;
        }
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        LAB_140851769:
        uVar1 = 1;
    }
    return uVar1;
}



undefined8 * FUN_1408518a0(longlong *param_1,int param_2,char param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 *puVar3;

    for (puVar3 = (undefined8 *)param_1[4]; puVar3 != (undefined8 *)0x0;
         puVar3 = (undefined8 *)puVar3[2]) {
        if (*(int *)(puVar3 + 8) == param_2) {
            return puVar3;
        }
    }
    puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x50);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = param_1;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_FUN_1409a3618;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *(undefined4 *)(puVar3 + 7) = 0;
        *(int *)(puVar3 + 8) = param_2;
        *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
        *(undefined *)(puVar3 + 9) = 0;
        iVar1 = FUN_140829e90(DAT_140c61b78,param_2,puVar3);
        uVar2 = DAT_140c10f20;
        if (iVar1 == 1) {
            if (param_1[4] == 0) {
                param_1[4] = (longlong)puVar3;
                puVar3[2] = 0;
            }
            else {
                puVar3[2] = param_1[4];
                param_1[4] = (longlong)puVar3;
            }
            uVar2 = FUN_14082a0a0(DAT_140c61b78,param_2);
            *(undefined4 *)((longlong)puVar3 + 0x44) = uVar2;
            if (param_3 != '\0') {
                (**(code **)(*param_1 + 0x1a0))(param_1);
            }
        }
        else {
            *puVar3 = &PTR_FUN_1409a3618;
            if (puVar3[5] != 0) {
                puVar3[6] = puVar3[5];
                FUN_140881720(DAT_140c10f20);
                puVar3[5] = 0;
                puVar3[6] = 0;
                *(undefined4 *)(puVar3 + 7) = 0;
            }
            if (puVar3[4] != 0) {
                FUN_140881720(DAT_140c10f20);
            }
            puVar3[4] = 0;
            FUN_140881720(uVar2,puVar3);
            puVar3 = (undefined8 *)0x0;
        }
        return puVar3;
    }
    return (undefined8 *)0x0;
}



void FUN_140851a00(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar1;

    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8);
    EnterCriticalSection(lpCriticalSection);
    uVar1 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
    (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar1];
    (&lpCriticalSection[1].DebugInfo)[uVar1] = param_1;
    *(int *)&lpCriticalSection[0x27].LockSemaphore =
            *(int *)&lpCriticalSection[0x27].LockSemaphore + 1;
    // WARNING: Could not recover jumptable at 0x000140851a6b. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(lpCriticalSection);
    return;
}



void FUN_140851a80(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
    int iVar1;
    longlong lVar2;

    lVar2 = (**(code **)(*param_1 + 0x260))(param_1,param_4);
    if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x20) =
                ~(byte)param_3 & *(byte *)(lVar2 + 0x20) | (byte)param_2 & (byte)param_3;
    }
    iVar1 = (**(code **)(*param_1 + 0x70))(param_1);
    if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x70))(param_1);
    }
    if (param_4 == 0) {
        (**(code **)(*param_1 + 0x1b8))(param_1,param_2,param_3);
    }
    // WARNING: Could not recover jumptable at 0x000140851b20. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3,param_4);
    return;
}



longlong FUN_140851b30(longlong param_1,int param_2,uint **param_3)

{
    longlong lVar1;
    uint *puVar2;

    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
        while (*(int *)(lVar1 + 0x40) != param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x10);
            if (lVar1 == 0) {
                return lVar1;
            }
        }
        puVar2 = *param_3;
        if (*(byte *)(lVar1 + 0x48) == 0) {
            param_3[1] = puVar2;
            FUN_14087c4c0(param_3);
            return 1;
        }
        for (; puVar2 != param_3[1]; puVar2 = puVar2 + 1) {
            if (*puVar2 == (uint)*(byte *)(lVar1 + 0x48)) {
                return 0;
            }
        }
        FUN_14087c4c0(param_3);
    }
    return 0;
}



void FUN_140851ba0(longlong param_1,ushort param_2)

{
    short *psVar1;
    longlong *plVar2;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4a);
        *psVar1 = *psVar1 + -1;
        plVar2 = *(longlong **)(param_1 + 0x38);
        if ((((*(short *)(plVar2 + 9) == 0) && (*(short *)((longlong)plVar2 + 0x4a) == 0)) &&
             (*(short *)((longlong)plVar2 + 0x4c) == 0)) &&
            (((*(short *)((longlong)plVar2 + 0x4e) == 0 && (plVar2[3] == 0)) && (plVar2[1] == *plVar2))))
        {
            FUN_1408520b0(param_1);
        }
    }
    if (((param_2 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x48), plVar2 != (longlong *)0x0))
    {
        param_2 = param_2 & 0xfffe;
        (**(code **)(*plVar2 + 0x138))(plVar2,3);
    }
    if ((((param_2 & 2) != 0) && (*(longlong ***)(param_1 + 0x68) != (longlong **)0x0)) &&
        (plVar2 = **(longlong ***)(param_1 + 0x68), plVar2 != (longlong *)0x0)) {
        param_2 = param_2 & 0xfffd;
        (**(code **)(*plVar2 + 0x138))(plVar2,3);
    }
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x138))(plVar2,param_2);
    }
    return;
}



void FUN_140851c70(longlong param_1)

{
    short *psVar1;
    longlong *plVar2;
    undefined4 uVar3;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4a);
        *psVar1 = *psVar1 + -1;
        uVar3 = DAT_140c10f20;
        plVar2 = *(longlong **)(param_1 + 0x38);
        if ((((*(short *)(plVar2 + 9) == 0) && (*(short *)((longlong)plVar2 + 0x4a) == 0)) &&
             (*(short *)((longlong)plVar2 + 0x4c) == 0)) &&
            (((*(short *)((longlong)plVar2 + 0x4e) == 0 && (plVar2[3] == 0)) && (plVar2[1] == *plVar2))))
        {
            plVar2 = *(longlong **)(param_1 + 0x38);
            if (plVar2 == (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else {
                if (plVar2[4] != 0) {
                    plVar2[5] = plVar2[4];
                    FUN_140881720(DAT_140c10f20);
                    plVar2[4] = 0;
                    plVar2[5] = 0;
                    *(undefined4 *)(plVar2 + 6) = 0;
                }
                plVar2[3] = 0;
                if (*plVar2 != 0) {
                    plVar2[1] = *plVar2;
                    FUN_140881720(DAT_140c10f20);
                    *plVar2 = 0;
                    plVar2[1] = 0;
                    *(undefined4 *)(plVar2 + 2) = 0;
                }
                FUN_140881720(uVar3,plVar2);
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            return;
        }
    }
    return;
}



void FUN_140851cc0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = **(longlong ***)(param_1 + 0x38);
    plVar1 = (*(longlong ***)(param_1 + 0x38))[1];
    if (plVar2 != plVar1) {
        do {
            if (*plVar2 == param_2) break;
            plVar2 = plVar2 + 3;
        } while (plVar2 != plVar1);
        if ((plVar2 != plVar1) && (plVar2 != (longlong *)&DAT_fffffffffffffff8)) {
            plVar1 = plVar2 + 2;
            *(short *)plVar1 = *(short *)plVar1 + -1;
            if ((*(short *)plVar1 == 0) && (*(short *)((longlong)plVar2 + 0x12) == 0)) {
                FUN_140852150();
                FUN_140855300(*(undefined8 *)(param_1 + 0x38),param_2);
            }
            plVar2 = *(longlong **)(param_1 + 0x38);
            if ((((*(short *)(plVar2 + 9) == 0) && (*(short *)((longlong)plVar2 + 0x4a) == 0)) &&
                 (*(short *)((longlong)plVar2 + 0x4c) == 0)) &&
                (((*(short *)((longlong)plVar2 + 0x4e) == 0 && (plVar2[3] == 0)) && (plVar2[1] == *plVar2))
                )) {
                FUN_1408520b0(param_1);
            }
        }
    }
    return;
}



void FUN_140851d70(longlong param_1)

{
    short *psVar1;
    longlong *plVar2;
    undefined4 uVar3;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4c);
        *psVar1 = *psVar1 + -1;
        uVar3 = DAT_140c10f20;
        plVar2 = *(longlong **)(param_1 + 0x38);
        if ((((*(short *)(plVar2 + 9) == 0) && (*(short *)((longlong)plVar2 + 0x4a) == 0)) &&
             (*(short *)((longlong)plVar2 + 0x4c) == 0)) &&
            (((*(short *)((longlong)plVar2 + 0x4e) == 0 && (plVar2[3] == 0)) && (plVar2[1] == *plVar2))))
        {
            plVar2 = *(longlong **)(param_1 + 0x38);
            if (plVar2 == (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else {
                if (plVar2[4] != 0) {
                    plVar2[5] = plVar2[4];
                    FUN_140881720(DAT_140c10f20);
                    plVar2[4] = 0;
                    plVar2[5] = 0;
                    *(undefined4 *)(plVar2 + 6) = 0;
                }
                plVar2[3] = 0;
                if (*plVar2 != 0) {
                    plVar2[1] = *plVar2;
                    FUN_140881720(DAT_140c10f20);
                    *plVar2 = 0;
                    plVar2[1] = 0;
                    *(undefined4 *)(plVar2 + 2) = 0;
                }
                FUN_140881720(uVar3,plVar2);
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            return;
        }
    }
    return;
}



void FUN_140851dc0(longlong param_1)

{
    short *psVar1;
    longlong *plVar2;
    undefined4 uVar3;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x48);
        *psVar1 = *psVar1 + -1;
        uVar3 = DAT_140c10f20;
        plVar2 = *(longlong **)(param_1 + 0x38);
        if ((((*(short *)(plVar2 + 9) == 0) && (*(short *)((longlong)plVar2 + 0x4a) == 0)) &&
             (*(short *)((longlong)plVar2 + 0x4c) == 0)) &&
            (((*(short *)((longlong)plVar2 + 0x4e) == 0 && (plVar2[3] == 0)) && (plVar2[1] == *plVar2))))
        {
            plVar2 = *(longlong **)(param_1 + 0x38);
            if (plVar2 == (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            else {
                if (plVar2[4] != 0) {
                    plVar2[5] = plVar2[4];
                    FUN_140881720(DAT_140c10f20);
                    plVar2[4] = 0;
                    plVar2[5] = 0;
                    *(undefined4 *)(plVar2 + 6) = 0;
                }
                plVar2[3] = 0;
                if (*plVar2 != 0) {
                    plVar2[1] = *plVar2;
                    FUN_140881720(DAT_140c10f20);
                    *plVar2 = 0;
                    plVar2[1] = 0;
                    *(undefined4 *)(plVar2 + 2) = 0;
                }
                FUN_140881720(uVar3,plVar2);
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            return;
        }
    }
    return;
}



void FUN_140851e10(longlong *param_1,ushort *param_2,char param_3,longlong param_4)

{
    ushort uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *local_res8;

    plVar3 = *(longlong **)param_1[7];
    plVar2 = ((longlong **)param_1[7])[1];
    if (plVar3 == plVar2) {
        return;
    }
    do {
        if (*plVar3 == param_4) break;
        plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 == plVar2) {
        return;
    }
    plVar2 = plVar3 + 1;
    if (plVar2 == (longlong *)0x0) {
        return;
    }
    *(short *)((longlong)plVar3 + 0x12) = *(short *)((longlong)plVar3 + 0x12) + -1;
    if ((((param_3 != '\0') && (*plVar2 != 0)) && (uVar1 = *(ushort *)(*plVar2 + 0x18), uVar1 != 0))
        && ((int)(uint)uVar1 <
            (int)(((uint)*(ushort *)(plVar3 + 2) - (uint)*param_2) -
                  (uint)*(ushort *)((longlong)plVar3 + 0x12)))) {
        local_res8 = (longlong *)0x0;
        FUN_140843fb0(0x42ca0000,&local_res8,param_4,*(undefined4 *)(param_1 + 3),
                      *(byte *)((longlong)param_1 + 0x5a) & 1,
                      *(byte *)((longlong)param_1 + 0x5a) >> 1 & 1,&local_res8,0);
        if (local_res8 != (longlong *)0x0) {
            lVar4 = (**(code **)(*local_res8 + 0x100))();
            lVar5 = (**(code **)(*param_1 + 0x100))(param_1);
            if (lVar4 != lVar5) goto LAB_140851f14;
        }
        *param_2 = *param_2 + 1;
    }
    LAB_140851f14:
    if ((*(short *)(plVar3 + 2) == 0) && (*(short *)((longlong)plVar3 + 0x12) == 0)) {
        FUN_140852150(plVar2);
        FUN_140855300(param_1[7],param_4);
        plVar3 = (longlong *)param_1[7];
        if ((((*(short *)(plVar3 + 9) == 0) &&
              ((*(short *)((longlong)plVar3 + 0x4a) == 0 && (*(short *)((longlong)plVar3 + 0x4c) == 0))))
             && (*(short *)((longlong)plVar3 + 0x4e) == 0)) &&
            ((plVar3[3] == 0 && (plVar3[1] == *plVar3)))) {
            FUN_1408520b0(param_1);
        }
    }
    return;
}



void FUN_140851f80(longlong param_1,ushort *param_2,char param_3)

{
    short *psVar1;
    longlong lVar2;
    longlong *plVar3;
    ushort uVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;
    undefined8 local_res8;

    if (*(longlong *)(param_1 + 0x38) == 0) {
        return;
    }
    psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4e);
    *psVar1 = *psVar1 + -1;
    if (param_3 != '\0') {
        uVar5 = (uint)*(ushort *)(param_1 + 0x58);
        if ((*(uint *)(param_1 + 0x60) >> 9 & 1) != 0) {
            if (*(ushort *)(param_1 + 0x58) == 0) goto LAB_14085205f;
            fVar7 = (float)FUN_140836340(DAT_140c61bb0,param_1);
            uVar5 = (uint)(longlong)fVar7;
        }
        if ((short)uVar5 != 0) {
            lVar2 = *(longlong *)(param_1 + 0x38);
            uVar6 = 0;
            if (lVar2 == 0) {
                uVar4 = 0;
            }
            else {
                uVar4 = *(ushort *)(lVar2 + 0x4c);
                uVar6 = (uint)*(ushort *)(lVar2 + 0x4e);
            }
            if ((int)(uVar5 & 0xffff) < (int)(((uint)uVar4 - (uint)*param_2) - uVar6)) {
                local_res8 = 0;
                FUN_140843fb0(0x42ca0000,&local_res8,0,*(undefined4 *)(param_1 + 0x18),
                              *(byte *)(param_1 + 0x5a) & 1,*(byte *)(param_1 + 0x5a) >> 1 & 1,&local_res8,0
                );
                *param_2 = *param_2 + 1;
            }
        }
    }
    LAB_14085205f:
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((((*(short *)(plVar3 + 9) == 0) && (*(short *)((longlong)plVar3 + 0x4a) == 0)) &&
         (*(short *)((longlong)plVar3 + 0x4c) == 0)) &&
        (((*(short *)((longlong)plVar3 + 0x4e) == 0 && (plVar3[3] == 0)) && (plVar3[1] == *plVar3)))) {
        FUN_1408520b0(param_1);
    }
    return;
}



void FUN_1408520b0(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    uVar2 = DAT_140c10f20;
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
        if (plVar1[4] != 0) {
            plVar1[5] = plVar1[4];
            FUN_140881720(DAT_140c10f20);
            plVar1[4] = 0;
            plVar1[5] = 0;
            *(undefined4 *)(plVar1 + 6) = 0;
        }
        plVar1[3] = 0;
        if (*plVar1 != 0) {
            plVar1[1] = *plVar1;
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
            plVar1[1] = 0;
            *(undefined4 *)(plVar1 + 2) = 0;
        }
        FUN_140881720(uVar2,plVar1);
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return;
}



void FUN_140852150(longlong **param_1)

{
    longlong *plVar1;

    plVar1 = *param_1;
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            plVar1[1] = *plVar1;
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
            plVar1[1] = 0;
            *(undefined4 *)(plVar1 + 2) = 0;
        }
        FUN_140881720(DAT_140c10f20,*param_1);
        *param_1 = (longlong *)0x0;
    }
    return;
}



ulonglong FUN_1408521b0(longlong *param_1)

{
    byte bVar1;
    byte bVar2;
    ulonglong in_RAX;
    undefined8 *puVar3;
    short sVar4;
    undefined8 *puVar5;
    float fVar6;

    puVar5 = (undefined8 *)0x0;
    if (param_1[7] == 0) {
        puVar3 = (undefined8 *)FUN_1408819f0();
        if (puVar3 != (undefined8 *)0x0) {
            sVar4 = *(short *)(param_1 + 0xb);
            bVar1 = *(byte *)((longlong)param_1 + 0x5a);
            if (((*(uint *)(param_1 + 0xc) >> 9 & 1) != 0) && (sVar4 != 0)) {
                fVar6 = (float)FUN_140836340(DAT_140c61bb0,param_1,9,0);
                sVar4 = (short)(longlong)fVar6;
            }
            bVar2 = *(byte *)((longlong)param_1 + 0x5a);
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined4 *)(puVar3 + 2) = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            *(undefined4 *)(puVar3 + 6) = 0;
            *(byte *)((longlong)puVar3 + 0x3a) = bVar1 & 1;
            *(short *)(puVar3 + 7) = sVar4;
            *(byte *)((longlong)puVar3 + 0x3b) = bVar2 >> 1 & 1;
            *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xfe;
            *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | bVar2 >> 4 & 1;
            puVar3[9] = 0;
            puVar5 = puVar3;
        }
        param_1[7] = (longlong)puVar5;
        in_RAX = (**(code **)(*param_1 + 0x270))(param_1);
    }
    return in_RAX & 0xffffffffffffff00 | (ulonglong)(param_1[7] != 0);
}



void FUN_140852350(longlong param_1)

{
    byte *pbVar1;
    byte *pbVar2;
    byte *pbVar3;
    longlong *plVar4;
    byte *pbVar5;
    longlong lVar6;

    pbVar1 = *(byte **)(param_1 + 0x20);
    pbVar5 = (byte *)0x0;
    pbVar2 = pbVar5;
    pbVar3 = pbVar5;
    if (pbVar1 != (byte *)0x0) {
        pbVar5 = pbVar1 + (ulonglong)*pbVar1 + 1;
        pbVar2 = pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        pbVar3 = pbVar1 + 1;
    }
    if (pbVar3 != pbVar5) {
        plVar4 = (longlong *)(pbVar2 + 8);
        lVar6 = (longlong)pbVar5 - (longlong)pbVar3;
        do {
            if (*plVar4 != 0) {
                FUN_14083b060(DAT_140c61b70,*plVar4,param_1);
                *plVar4 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x138))(*(longlong **)(param_1 + 0x18),3);
            }
            plVar4 = plVar4 + 2;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
    }
    return;
}



void FUN_140852400(longlong param_1)

{
    byte *pbVar1;
    byte *pbVar2;
    byte *pbVar3;
    longlong lVar4;
    byte *pbVar5;
    byte *pbVar6;
    longlong lVar7;
    longlong *plVar8;

    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
        pbVar5 = (byte *)0x0;
        do {
            pbVar1 = *(byte **)(lVar4 + 0x20);
            pbVar6 = pbVar5;
            pbVar2 = pbVar5;
            pbVar3 = pbVar5;
            if (pbVar1 != (byte *)0x0) {
                pbVar6 = pbVar1 + (ulonglong)*pbVar1 + 1;
                pbVar2 = pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
                pbVar3 = pbVar1 + 1;
            }
            if (pbVar3 != pbVar6) {
                plVar8 = (longlong *)(pbVar2 + 8);
                lVar7 = (longlong)pbVar6 - (longlong)pbVar3;
                do {
                    if (*plVar8 != 0) {
                        FUN_14083b060(DAT_140c61b70,*plVar8,lVar4);
                        *plVar8 = 0;
                        (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x138))(*(longlong **)(lVar4 + 0x18),3);
                    }
                    plVar8 = plVar8 + 2;
                    lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
            }
            lVar4 = *(longlong *)(lVar4 + 0x10);
        } while (lVar4 != 0);
    }
    return;
}



byte FUN_1408524d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
    byte *pbVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    uint uVar4;
    undefined4 *puVar5;
    byte bVar6;
    ulonglong uVar7;
    byte bVar8;
    ulonglong uVar9;
    undefined4 uVar10;
    undefined4 local_res8 [2];

    puVar5 = (undefined4 *)0x0;
    uVar7 = *(ulonglong *)(param_1 + 0x60) >> 0x15;
    bVar6 = (byte)uVar7 & 1;
    uVar9 = *(ulonglong *)(param_1 + 0x60) >> 0x14;
    bVar8 = (byte)uVar9 & 1;
    if ((bVar6 | bVar8) == 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = 0;
        puVar3 = puVar5;
        if (pbVar1 != (byte *)0x0) {
            puVar2 = puVar5;
            do {
                uVar4 = (int)puVar2 + 1;
                if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar4 + (longlong)pbVar1) == 0xb) {
                    puVar3 = (undefined4 *)
                            (pbVar1 + (longlong)puVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                puVar2 = (undefined4 *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
        puVar2 = local_res8;
        if (puVar3 != (undefined4 *)0x0) {
            puVar2 = puVar3;
        }
        local_res8[0] = 0;
        *param_3 = *puVar2;
        pbVar1 = *(byte **)(param_1 + 0x50);
        puVar3 = puVar5;
        if (pbVar1 != (byte *)0x0) {
            puVar2 = puVar5;
            do {
                uVar4 = (int)puVar2 + 1;
                if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar4 + (longlong)pbVar1) == 0xc) {
                    puVar3 = (undefined4 *)
                            (pbVar1 + (longlong)puVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                puVar2 = (undefined4 *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
        puVar2 = local_res8;
        if (puVar3 != (undefined4 *)0x0) {
            puVar2 = puVar3;
        }
        uVar10 = *puVar2;
    }
    else {
        if ((uVar9 & 1) == 0) {
            *param_3 = 0;
        }
        else {
            uVar10 = FUN_140836340(DAT_140c61bb0,param_1,0x14);
            *param_3 = uVar10;
        }
        if ((uVar7 & 1) == 0) {
            param_3[1] = 0;
            goto LAB_1408525f1;
        }
        uVar10 = FUN_140836340(DAT_140c61bb0,param_1,0x15);
    }
    param_3[1] = uVar10;
    LAB_1408525f1:
    pbVar1 = *(byte **)(param_1 + 0x50);
    local_res8[0] = 0;
    if (pbVar1 != (byte *)0x0) {
        puVar3 = puVar5;
        do {
            uVar4 = (int)puVar3 + 1;
            if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar4 + (longlong)pbVar1) == 0xd) {
                puVar5 = (undefined4 *)
                        (pbVar1 + (longlong)puVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            puVar3 = (undefined4 *)(ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    puVar3 = local_res8;
    if (puVar5 != (undefined4 *)0x0) {
        puVar3 = puVar5;
    }
    param_3[2] = *puVar3;
    *(byte *)(param_3 + 3) = *(byte *)(param_1 + 0x5b) >> 5 & 1;
    return bVar6 | bVar8;
}



byte FUN_1408526a0(longlong *param_1,undefined8 param_2,float *param_3)

{
    char cVar1;
    byte bVar2;
    ulonglong uVar3;
    byte bVar4;
    ulonglong uVar5;
    float fVar6;
    undefined4 in_XMM7_Da;
    float fVar7;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    float local_res8 [2];
    undefined auVar8 [16];

    auVar8 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    uVar5 = (ulonglong)param_1[0xc] >> 0x26;
    fVar7 = 0.0;
    bVar4 = (byte)uVar5 & 1;
    uVar3 = (ulonglong)param_1[0xc] >> 0x25;
    bVar2 = (byte)uVar3 & 1;
    local_res8[0] = 0.0;
    if ((bVar4 | bVar2) != 0) {
        if ((uVar3 & 1) == 0) {
            *param_3 = 0.0;
        }
        else {
            fVar6 = (float)FUN_140836340(DAT_140c61bb0,param_1,0x25,param_2,auVar8);
            *param_3 = fVar6;
            cVar1 = (**(code **)(*param_1 + 0xf0))(param_1,local_res8);
            if (cVar1 != '\0') {
                *param_3 = local_res8[0] * 0.01 * *param_3;
            }
        }
        param_3[1] = 0.0;
        if ((uVar5 & 1) == 0) {
            param_3[2] = 1.0;
        }
        else {
            fVar6 = (float)FUN_140836340(DAT_140c61bb0,param_1,0x26,param_2,auVar8);
            param_3[2] = fVar6;
            if ((local_res8[0] != fVar7) ||
                (cVar1 = (**(code **)(*param_1 + 0xf0))(param_1,local_res8), cVar1 != '\0')) {
                param_3[2] = local_res8[0] * 0.01 * param_3[2];
            }
        }
    }
    return bVar4 | bVar2;
}



void FUN_1408527d0(longlong param_1,float *param_2,uint param_3)

{
    byte *pbVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;

    if (((*(byte *)(param_1 + 0x5a) & 0x80) != 0) &&
        (lVar2 = *(longlong *)(param_1 + 0x20), lVar2 != 0)) {
        do {
            if (((param_3 & 1) != 0) && (pbVar1 = *(byte **)(lVar2 + 0x20), pbVar1 != (byte *)0x0)) {
                uVar3 = 0;
                do {
                    uVar4 = (int)uVar3 + 1;
                    if (pbVar1[uVar4] == 0) {
                        if ((float *)(pbVar1 + uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
                            (float *)0x0) {
                            *param_2 = *(float *)(pbVar1 + uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                                       + *param_2;
                        }
                        break;
                    }
                    uVar3 = (ulonglong)uVar4;
                } while (uVar4 < *pbVar1);
            }
            if (((param_3 & 2) != 0) && (pbVar1 = *(byte **)(lVar2 + 0x20), pbVar1 != (byte *)0x0)) {
                uVar3 = 0;
                do {
                    uVar4 = (int)uVar3 + 1;
                    if (pbVar1[uVar4] == 2) {
                        if ((float *)(pbVar1 + uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
                            (float *)0x0) {
                            param_2[2] = param_2[2] +
                                         *(float *)(pbVar1 + uVar3 * 0x10 +
                                                    ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                        }
                        break;
                    }
                    uVar3 = (ulonglong)uVar4;
                } while (uVar4 < *pbVar1);
            }
            if (((param_3 & 4) != 0) && (pbVar1 = *(byte **)(lVar2 + 0x20), pbVar1 != (byte *)0x0)) {
                uVar3 = 0;
                do {
                    uVar4 = (int)uVar3 + 1;
                    if (pbVar1[uVar4] == 3) {
                        if ((float *)(pbVar1 + uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
                            (float *)0x0) {
                            param_2[3] = param_2[3] +
                                         *(float *)(pbVar1 + uVar3 * 0x10 +
                                                    ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                        }
                        break;
                    }
                    uVar3 = (ulonglong)uVar4;
                } while (uVar4 < *pbVar1);
            }
            if (((param_3 & 8) != 0) && (pbVar1 = *(byte **)(lVar2 + 0x20), pbVar1 != (byte *)0x0)) {
                uVar3 = 0;
                do {
                    uVar4 = (int)uVar3 + 1;
                    if (pbVar1[uVar4] == 4) {
                        if ((float *)(pbVar1 + uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
                            (float *)0x0) {
                            param_2[4] = param_2[4] +
                                         *(float *)(pbVar1 + uVar3 * 0x10 +
                                                    ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                        }
                        break;
                    }
                    uVar3 = (ulonglong)uVar4;
                } while (uVar4 < *pbVar1);
            }
            lVar2 = *(longlong *)(lVar2 + 0x10);
        } while (lVar2 != 0);
    }
    return;
}



undefined8 FUN_140852980(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x48);
    while( true ) {
        if (lVar1 != 0) {
            return *(undefined8 *)(param_1 + 0x48);
        }
        param_1 = *(longlong *)(param_1 + 0x40);
        if (param_1 == 0) break;
        lVar1 = *(longlong *)(param_1 + 0x48);
    }
    return 0;
}



undefined8 FUN_1408529a0(longlong param_1,undefined8 param_2)

{
    byte *pbVar1;
    float *pfVar2;
    uint uVar3;
    float *pfVar4;
    float fVar5;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 uVar6;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    float local_res8 [8];

    pbVar1 = *(byte **)(param_1 + 0x50);
    pfVar4 = (float *)0x0;
    local_res8[0] = 0.0;
    if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar4;
        do {
            uVar3 = (int)pfVar2 + 1;
            if (pbVar1[uVar3] == 9) {
                pfVar4 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            pfVar2 = (float *)(ulonglong)uVar3;
        } while (uVar3 < *pbVar1);
    }
    pfVar2 = local_res8;
    if (pfVar4 != (float *)0x0) {
        pfVar2 = pfVar4;
    }
    local_res8[0] = *pfVar2;
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x60) >> 0x1e & 1) != 0) {
        fVar5 = (float)FUN_140836340(DAT_140c61bb0,param_1,0x1e,param_2,
                                     CONCAT412(in_XMM6_Dd,
                                               CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
        local_res8[0] = local_res8[0] + fVar5;
    }
    return CONCAT44(uVar6,local_res8[0]);
}



ulonglong FUN_140852a50(longlong param_1,undefined8 param_2)

{
    byte *pbVar1;
    uint *puVar2;
    uint uVar3;
    uint *puVar4;
    ulonglong uVar5;
    uint local_res8 [8];

    if ((*(uint *)(param_1 + 0x60) >> 0x1d & 1) != 0) {
        uVar5 = FUN_140836340(DAT_140c61bb0,param_1,0x1d,param_2);
        return uVar5;
    }
    pbVar1 = *(byte **)(param_1 + 0x50);
    puVar4 = (uint *)0x0;
    local_res8[0] = DAT_140c11020;
    if (pbVar1 != (byte *)0x0) {
        puVar2 = puVar4;
        do {
            uVar3 = (int)puVar2 + 1;
            if (*(byte *)((longlong)(uint *)(ulonglong)uVar3 + (longlong)pbVar1) == 8) {
                puVar4 = (uint *)(pbVar1 + (longlong)puVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            puVar2 = (uint *)(ulonglong)uVar3;
        } while (uVar3 < *pbVar1);
    }
    puVar2 = local_res8;
    if (puVar4 != (uint *)0x0) {
        puVar2 = puVar4;
    }
    return (ulonglong)*puVar2;
}



undefined8
FUN_140852ae0(longlong *param_1,longlong **param_2,undefined8 param_3,undefined8 param_4,
              char param_5)

{
    short sVar1;
    longlong lVar2;
    byte *pbVar3;
    longlong *plVar4;
    float *pfVar5;
    ulonglong uVar6;
    uint uVar7;
    float *pfVar8;
    longlong lVar9;
    float fVar10;
    float fVar11;
    float local_res8 [2];

    sVar1 = *(short *)((longlong)param_2 + 0x32);
    if (param_1[0xd] != 0) {
        fVar10 = (float)(**(code **)(*param_1 + 0x220))(param_1,param_4);
        fVar11 = (float)(**(code **)(*param_1 + 0x228))(param_1,param_4);
        if (param_5 == '\0') {
            *(float *)(param_2 + 1) = fVar10 + *(float *)(param_2 + 1);
            *(float *)(param_2 + 2) = fVar11 + *(float *)(param_2 + 2);
        }
        else {
            plVar4 = *(longlong **)param_1[0xd];
            *(float *)(param_2 + 1) = fVar10;
            *(float *)(param_2 + 2) = fVar11;
            if (sVar1 == 0) {
                *param_2 = plVar4;
                *(undefined2 *)((longlong)param_2 + 0x32) = 0xffff;
            }
            (**(code **)(*plVar4 + 0x200))(plVar4,param_2,param_3,param_4,0);
            plVar4 = param_1;
            do {
                lVar9 = plVar4[9];
                plVar4 = (longlong *)plVar4[8];
                if (lVar9 != 0) goto LAB_140852ba0;
            } while (plVar4 != (longlong *)0x0);
        }
    }
    goto LAB_140852c51;
    LAB_140852ba0:
    do {
        lVar2 = *(longlong *)(lVar9 + 0x30);
        if ((lVar2 != 0) &&
            (((*(int *)(lVar2 + 0x1c) != 0 || *(int *)(lVar2 + 0x14) != 0) || *(int *)(lVar2 + 0xc) != 0)
             || *(int *)(lVar2 + 4) != 0)) break;
        pbVar3 = *(byte **)(lVar9 + 0x50);
        local_res8[0] = 0.0;
        if (pbVar3 != (byte *)0x0) {
            uVar6 = 0;
            do {
                uVar7 = (int)uVar6 + 1;
                if (pbVar3[uVar7] == 0) {
                    pfVar8 = (float *)(pbVar3 + uVar6 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
                    goto LAB_140852bf7;
                }
                uVar6 = (ulonglong)uVar7;
            } while (uVar7 < *pbVar3);
        }
        pfVar8 = (float *)0x0;
        LAB_140852bf7:
        pfVar5 = local_res8;
        if (pfVar8 != (float *)0x0) {
            pfVar5 = pfVar8;
        }
        local_res8[0] = *pfVar5;
        *(float *)((longlong)param_2 + 0xc) = local_res8[0] + *(float *)((longlong)param_2 + 0xc);
        lVar9 = *(longlong *)(lVar9 + 0x48);
    } while (lVar9 != 0);
    LAB_140852c51:
    plVar4 = (longlong *)param_1[8];
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x200))(plVar4,param_2,param_3,param_4,0);
    }
    return 1;
}



longlong * FUN_140852c90(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
    if ((plVar1 == (longlong *)0x0) &&
        (plVar1 = (longlong *)FUN_14086f180(), plVar1 != (longlong *)0x0)) {
        (**(code **)(*param_1 + 8))(param_1);
        (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    return plVar1;
}



undefined8 * FUN_140852d50(longlong param_1,undefined8 *param_2)

{
    byte *pbVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    uint uVar4;
    undefined4 *puVar5;
    undefined4 local_res8 [2];
    undefined4 local_res20;
    undefined4 uStackX36;

    if ((*(longlong *)(param_1 + 0x40) != 0) && ((*(byte *)(param_1 + 0x5a) & 0x40) == 0)) {
        FUN_140852d50();
        return param_2;
    }
    puVar5 = (undefined4 *)0x0;
    if ((*(uint *)(param_1 + 0x60) >> 8 & 1) == 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = DAT_140c11014;
        puVar3 = puVar5;
        if (pbVar1 != (byte *)0x0) {
            puVar2 = puVar5;
            do {
                uVar4 = (int)puVar2 + 1;
                if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar4 + (longlong)pbVar1) == 5) {
                    puVar3 = (undefined4 *)
                            (pbVar1 + (longlong)puVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                puVar2 = (undefined4 *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
        puVar2 = local_res8;
        if (puVar3 != (undefined4 *)0x0) {
            puVar2 = puVar3;
        }
        local_res20 = *puVar2;
    }
    else {
        local_res20 = FUN_140836340(DAT_140c61bb0,param_1,8);
    }
    if ((*(byte *)(param_1 + 0x5a) & 0x20) == 0) {
        uStackX36 = 0;
    }
    else {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res8[0] = DAT_140c11018;
        if (pbVar1 != (byte *)0x0) {
            puVar3 = puVar5;
            do {
                uVar4 = (int)puVar3 + 1;
                if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar4 + (longlong)pbVar1) == 6) {
                    puVar5 = (undefined4 *)
                            (pbVar1 + (longlong)puVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    break;
                }
                puVar3 = (undefined4 *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
        puVar3 = local_res8;
        if (puVar5 != (undefined4 *)0x0) {
            puVar3 = puVar5;
        }
        uStackX36 = *puVar3;
    }
    *param_2 = CONCAT44(uStackX36,local_res20);
    return param_2;
}



undefined8 FUN_140852ea0(longlong param_1,int param_2)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *(int **)(param_1 + 0x28);
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 6;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && ((undefined8 *)(piVar2 + 2) != (undefined8 *)0x0)) {
            return *(undefined8 *)(piVar2 + 2);
        }
    }
    return 0;
}



undefined8 FUN_140852ed0(longlong param_1,int param_2,uint **param_3,char param_4)

{
    longlong lVar1;
    char cVar2;
    uint *puVar3;

    LAB_140852ef0:
    for (lVar1 = *(longlong *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
        if (*(int *)(lVar1 + 0x40) == param_2) {
            puVar3 = *param_3;
            if (*(byte *)(lVar1 + 0x48) == 0) {
                param_3[1] = puVar3;
                FUN_14087c4c0(param_3,0);
                return 1;
            }
            goto joined_r0x000140852f22;
        }
    }
    goto LAB_140852f39;
    joined_r0x000140852f22:
    if (puVar3 == param_3[1]) goto LAB_140852f31;
    if (*puVar3 == (uint)*(byte *)(lVar1 + 0x48)) goto LAB_140852f39;
    puVar3 = puVar3 + 1;
    goto joined_r0x000140852f22;
    LAB_140852f31:
    FUN_14087c4c0(param_3);
    LAB_140852f39:
    if ((param_4 == '\0') && (*(longlong *)(param_1 + 0x48) != 0)) {
        param_4 = '\x01';
        cVar2 = FUN_14085ab30(*(longlong *)(param_1 + 0x48),param_2,param_3);
        if (cVar2 != '\0') {
            return 1;
        }
    }
    param_1 = *(longlong *)(param_1 + 0x40);
    if (param_1 == 0) {
        return 0;
    }
    goto LAB_140852ef0;
}



undefined8 FUN_140852f90(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x18);
    if (lVar2 != 0) {
        uVar6 = (param_1[1] - *param_1) / 0x18;
        uVar4 = uVar6 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar6 != 0) {
                lVar3 = lVar2 + 0x12;
                uVar6 = uVar4;
                do {
                    if ((undefined8 *)(lVar3 + -0x12) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar3 + -10) = 0;
                        *(undefined4 *)(lVar3 + -2) = 0;
                    }
                    puVar5 = (undefined8 *)((-0x12 - lVar2) + lVar3 + *param_1);
                    *(undefined8 *)(lVar3 + -0x12) = *puVar5;
                    *(undefined8 *)(lVar3 + -10) = puVar5[1];
                    *(undefined8 *)(lVar3 + -2) = puVar5[2];
                    uVar6 = uVar6 - 1;
                    lVar3 = lVar3 + 0x18;
                } while (uVar6 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *(int *)(param_1 + 2) = iVar1 + param_2;
        *param_1 = lVar2;
        param_1[1] = lVar2 + uVar4 * 0x18;
        return CONCAT71((int7)(uVar4 * 3 >> 8),1);
    }
    return 0;
}



ulonglong FUN_1408530a0(longlong param_1,ushort param_2)

{
    short *psVar1;
    longlong *plVar2;
    byte bVar3;
    byte bVar4;
    ulonglong uVar5;

    bVar3 = FUN_1408521b0();
    if (bVar3 != 0) {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4a);
        *psVar1 = *psVar1 + 1;
    }
    if (((param_2 & 1) != 0) && (plVar2 = *(longlong **)(param_1 + 0x48), plVar2 != (longlong *)0x0))
    {
        param_2 = param_2 & 0xfffe;
        bVar4 = (**(code **)(*plVar2 + 0x130))(plVar2,3);
        bVar3 = bVar4 & bVar3;
    }
    if ((((param_2 & 2) != 0) && (*(longlong ***)(param_1 + 0x68) != (longlong **)0x0)) &&
        (plVar2 = **(longlong ***)(param_1 + 0x68), plVar2 != (longlong *)0x0)) {
        param_2 = param_2 & 0xfffd;
        bVar4 = (**(code **)(*plVar2 + 0x130))(plVar2,3);
        bVar3 = bVar3 & bVar4;
    }
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x130))(plVar2,param_2);
        return uVar5 & 0xffffffffffffff00 | (ulonglong)((byte)uVar5 & bVar3);
    }
    return (ulonglong)bVar3;
}



void FUN_140853160(longlong param_1)

{
    short *psVar1;
    char cVar2;

    cVar2 = FUN_1408521b0();
    if (cVar2 != '\0') {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4a);
        *psVar1 = *psVar1 + 1;
    }
    return;
}



undefined4
FUN_140853180(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
              ushort *param_5_00,longlong param_6,longlong **param_5)

{
    byte bVar1;
    longlong *plVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong **pplVar6;
    longlong *plVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    float fVar10;
    ushort local_res8;
    longlong *local_38;
    undefined4 local_30;
    undefined4 uStack44;

    plVar2 = ((longlong **)param_3[7])[1];
    uVar3 = 1;
    for (plVar7 = *(longlong **)param_3[7]; (plVar7 != plVar2 && (*plVar7 != param_6));
         plVar7 = plVar7 + 3) {
    }
    if ((plVar7 != plVar2) && (pplVar9 = (longlong **)(plVar7 + 1), pplVar9 != (longlong **)0x0)) {
        plVar2 = *pplVar9;
        *(short *)(plVar7 + 2) = *(short *)(plVar7 + 2) + 1;
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
            local_res8 = *(ushort *)(plVar2 + 3);
            if ((*(short *)(plVar2 + 3) != 0) &&
                ((int)(uint)local_res8 <
                 (int)(((uint)*(ushort *)(plVar7 + 2) - (uint)*(ushort *)((longlong)plVar7 + 0x12)) -
                       (uint)*param_5_00))) {
                local_38 = (longlong *)0x0;
                uVar3 = FUN_140843fb0(param_2,&local_38,param_6,*(undefined4 *)(param_3 + 3),
                                      *(byte *)((longlong)param_3 + 0x5a) & 1,
                                      *(byte *)((longlong)param_3 + 0x5a) >> 1 & 1,&local_38,0);
                if (local_38 != (longlong *)0x0) {
                    lVar4 = (**(code **)(*local_38 + 0x100))();
                    lVar5 = (**(code **)(*param_3 + 0x100))(param_3);
                    if (lVar4 != lVar5) goto LAB_1408533d7;
                }
                *param_5_00 = *param_5_00 + 1;
            }
        }
        goto LAB_1408533d7;
    }
    local_res8 = *(ushort *)(param_3 + 0xb);
    if (((*(uint *)(param_3 + 0xc) >> 9 & 1) != 0) && (local_res8 != 0)) {
        fVar10 = (float)FUN_140836340(DAT_140c61bb0,param_3,9);
        local_res8 = (ushort)(longlong)fVar10;
    }
    bVar1 = *(byte *)((longlong)param_3 + 0x5a);
    pplVar9 = (longlong **)0x0;
    local_30 = 1;
    pplVar6 = (longlong **)FUN_1408819f0(DAT_140c10f20,0x28);
    pplVar8 = pplVar9;
    if (pplVar6 != (longlong **)0x0) {
        *pplVar6 = (longlong *)0x0;
        pplVar6[1] = (longlong *)0x0;
        *(undefined4 *)(pplVar6 + 2) = 0;
        *(ushort *)(pplVar6 + 3) = local_res8;
        *(byte *)((longlong)pplVar6 + 0x1a) = bVar1 & 1;
        *(byte *)((longlong)pplVar6 + 0x1b) = bVar1 >> 1 & 1;
        pplVar8 = pplVar6;
    }
    pplVar6 = (longlong **)param_3[7];
    plVar7 = *pplVar6;
    plVar2 = pplVar6[1];
    if (plVar7 == plVar2) {
        LAB_140853371:
        plVar7 = (longlong *)FUN_1408515f0(pplVar6);
        if (plVar7 != (longlong *)0x0) {
            *plVar7 = param_6;
            pplVar9 = (longlong **)(plVar7 + 1);
            goto LAB_140853385;
        }
    }
    else {
        do {
            if (*plVar7 == param_6) break;
            plVar7 = plVar7 + 3;
        } while (plVar7 != plVar2);
        if ((plVar7 == plVar2) || (pplVar9 = (longlong **)(plVar7 + 1), pplVar9 == (longlong **)0x0))
            goto LAB_140853371;
        LAB_140853385:
        *pplVar9 = (longlong *)pplVar8;
        pplVar9[1] = (longlong *)CONCAT44(uStack44,local_30);
    }
    if (pplVar9 == (longlong **)0x0) {
        if (pplVar8 != (longlong **)0x0) {
            if (*pplVar8 != (longlong *)0x0) {
                pplVar8[1] = *pplVar8;
                FUN_140881720(DAT_140c10f20);
                *pplVar8 = (longlong *)0x0;
                pplVar8[1] = (longlong *)0x0;
                *(undefined4 *)(pplVar8 + 2) = 0;
            }
            FUN_140881720(DAT_140c10f20,pplVar8);
        }
    }
    else if (pplVar8 != (longlong **)0x0) goto LAB_1408533d7;
    uVar3 = 2;
    LAB_1408533d7:
    if ((pplVar9 != (longlong **)0x0) && (local_res8 != 0)) {
        *param_5 = *pplVar9;
    }
    return uVar3;
}



undefined8
FUN_140853430(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
              short *param_5,longlong *param_6)

{
    short *psVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 uVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;
    undefined8 local_res8;

    if (*(longlong *)(param_3 + 0x38) != 0) {
        psVar1 = (short *)(*(longlong *)(param_3 + 0x38) + 0x4c);
        *psVar1 = *psVar1 + 1;
    }
    uVar5 = (uint)*(ushort *)(param_3 + 0x58);
    if ((*(uint *)(param_3 + 0x60) >> 9 & 1) != 0) {
        if (*(ushort *)(param_3 + 0x58) == 0) {
            return 1;
        }
        fVar7 = (float)FUN_140836340(DAT_140c61bb0,param_3);
        uVar5 = (uint)(longlong)fVar7;
    }
    if (((short)uVar5 != 0) && (*param_6 = *(longlong *)(param_3 + 0x38) + 0x20, *param_5 == 0)) {
        lVar2 = *(longlong *)(param_3 + 0x38);
        uVar6 = 0;
        uVar3 = uVar6;
        if (lVar2 != 0) {
            uVar6 = (uint)*(ushort *)(lVar2 + 0x4e);
            uVar3 = (uint)*(ushort *)(lVar2 + 0x4c);
        }
        if ((int)(uVar5 & 0xffff) < (int)(uVar3 - uVar6)) {
            local_res8 = 0;
            uVar4 = FUN_140843fb0(param_2,&local_res8,0,*(undefined4 *)(param_3 + 0x18),
                                  *(byte *)(param_3 + 0x5a) & 1,*(byte *)(param_3 + 0x5a) >> 1 & 1,
                                  &local_res8,0);
            *param_5 = *param_5 + 1;
            return uVar4;
        }
    }
    return 1;
}



undefined8 FUN_140853540(longlong param_1)

{
    short *psVar1;
    char cVar2;

    cVar2 = FUN_1408521b0();
    if (cVar2 != '\0') {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x48);
        *psVar1 = *psVar1 + 1;
        return 1;
    }
    return 2;
}



void FUN_140853570(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = **(longlong ***)(param_1 + 0x38);
    plVar1 = (*(longlong ***)(param_1 + 0x38))[1];
    if (plVar2 != plVar1) {
        do {
            if (*plVar2 == param_2) break;
            plVar2 = plVar2 + 3;
        } while (plVar2 != plVar1);
        if ((plVar2 != plVar1) && (plVar2 != (longlong *)&DAT_fffffffffffffff8)) {
            *(short *)((longlong)plVar2 + 0x12) = *(short *)((longlong)plVar2 + 0x12) + 1;
        }
    }
    return;
}



longlong FUN_1408535a0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    char cVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    uVar5 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar5) && (cVar2 = FUN_140892ef0(param_1,8), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar5) {
        return 0;
    }
    puVar3 = (undefined8 *)param_1[1];
    lVar1 = (ulonglong)param_2 * 8;
    param_1[1] = (longlong)(puVar3 + 1);
    if ((undefined8 *)(*param_1 + lVar1) < puVar3) {
        do {
            puVar4 = puVar3 + -1;
            *puVar3 = puVar3[-1];
            puVar3 = puVar4;
        } while ((undefined8 *)(*param_1 + lVar1) < puVar4);
    }
    return *param_1 + lVar1;
}



bool FUN_140853640(longlong param_1,int **param_2)

{
    int *piVar1;
    int *piVar2;

    for (piVar1 = *param_2;
         (piVar1 != param_2[1] &&
          ((*(int *)(param_1 + 0x18) != *piVar1 ||
            ((*(byte *)(param_1 + 0x5b) >> 1 & 1) != *(byte *)(piVar1 + 1))))); piVar1 = piVar1 + 2) {
    }
    piVar2 = (int *)0x0;
    if (piVar1 != param_2[1]) {
        piVar2 = piVar1;
    }
    return piVar2 != (int *)0x0;
}



undefined4 FUN_140853680(longlong *param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    undefined2 *puVar2;
    longlong lVar3;

    iVar1 = (**(code **)(*param_1 + 0x70))();
    if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x70))();
    }
    lVar3 = param_1[6];
    if (lVar3 == 0) {
        if (param_2 == 0) {
            return 1;
        }
        puVar2 = (undefined2 *)FUN_1408819f0(DAT_140c10f20,0x24);
        param_1[6] = (longlong)puVar2;
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            puVar2[4] = 0;
            *(undefined4 *)(puVar2 + 6) = 0;
            puVar2[8] = 0;
            *(undefined4 *)(puVar2 + 10) = 0;
            puVar2[0xc] = 0;
            *(undefined4 *)(puVar2 + 0xe) = 0;
            *(undefined *)(puVar2 + 0x10) = 0;
        }
        lVar3 = param_1[6];
        if (lVar3 == 0) {
            return 0x34;
        }
    }
    *(byte *)(lVar3 + 0x20) = ~(byte)param_3 & *(byte *)(lVar3 + 0x20) | (byte)param_2 & (byte)param_3
            ;
    (**(code **)(*param_1 + 0x1b8))(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3,0,0);
    return 1;
}



void FUN_1408537e0(longlong *param_1)

{
    int *piVar1;
    byte *pbVar2;
    undefined4 *puVar3;
    int *piVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    uint uVar7;
    undefined4 *puVar8;
    longlong lVar9;
    longlong lVar10;
    undefined4 *puVar11;
    undefined4 uVar12;

    lVar10 = param_1[4];
    if (lVar10 != 0) {
        puVar11 = (undefined4 *)0x0;
        do {
            piVar4 = *(int **)(lVar10 + 0x28);
            piVar1 = *(int **)(lVar10 + 0x30);
            if (piVar4 == piVar1) {
                LAB_140853947:
                FUN_140852350();
                pbVar2 = *(byte **)(lVar10 + 0x20);
                puVar8 = puVar11;
                puVar3 = puVar11;
                puVar6 = puVar11;
                if (pbVar2 != (byte *)0x0) {
                    puVar8 = (undefined4 *)(pbVar2 + (ulonglong)*pbVar2 + 1);
                    puVar3 = (undefined4 *)(pbVar2 + 1);
                    puVar6 = (undefined4 *)(pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                }
                if (puVar3 != puVar8) {
                    lVar9 = (longlong)puVar8 - (longlong)puVar3;
                    do {
                        *puVar6 = 0;
                        puVar6 = puVar6 + 4;
                        lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                }
            }
            else {
                do {
                    if (*piVar4 == *(int *)(lVar10 + 0x44)) break;
                    piVar4 = piVar4 + 6;
                } while (piVar4 != piVar1);
                if (((piVar4 == piVar1) || ((longlong *)(piVar4 + 2) == (longlong *)0x0)) ||
                    (lVar9 = *(longlong *)(piVar4 + 2), lVar9 == 0)) goto LAB_140853947;
                pbVar2 = *(byte **)(lVar9 + 0x20);
                puVar6 = puVar11;
                puVar3 = puVar11;
                puVar8 = puVar11;
                if (pbVar2 != (byte *)0x0) {
                    puVar6 = (undefined4 *)(pbVar2 + 1);
                    puVar3 = (undefined4 *)(pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                    puVar8 = (undefined4 *)(pbVar2 + (ulonglong)*pbVar2 + 1);
                }
                for (; puVar6 != puVar8; puVar6 = (undefined4 *)((longlong)puVar6 + 1)) {
                    pbVar2 = *(byte **)(lVar10 + 0x20);
                    uVar12 = *puVar3;
                    if (pbVar2 != (byte *)0x0) {
                        puVar5 = puVar11;
                        do {
                            uVar7 = (int)puVar5 + 1;
                            if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar7 + (longlong)pbVar2) ==
                            *(byte *)puVar6) {
                                puVar5 = (undefined4 *)
                                        (pbVar2 + (longlong)puVar5 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)
                                        );
                                if (puVar5 != (undefined4 *)0x0) {
                                    if (*(longlong *)(puVar5 + 2) == 0) {
                                        *puVar5 = uVar12;
                                    }
                                    else {
                                        FUN_14083ab80(DAT_140c61b70,*(longlong *)(puVar5 + 2),*(byte *)puVar6,puVar5,0,4
                                                ,0);
                                    }
                                    goto LAB_1408538e9;
                                }
                                break;
                            }
                            puVar5 = (undefined4 *)(ulonglong)uVar7;
                        } while (uVar7 < *pbVar2);
                    }
                    puVar5 = (undefined4 *)FUN_140829be0();
                    if (puVar5 != (undefined4 *)0x0) {
                        *puVar5 = uVar12;
                        *(undefined8 *)(puVar5 + 2) = 0;
                    }
                    LAB_1408538e9:
                    puVar3 = puVar3 + 1;
                }
            }
            lVar10 = *(longlong *)(lVar10 + 0x10);
        } while (lVar10 != 0);
    }
    // WARNING: Could not recover jumptable at 0x0001408539e2. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x198))(param_1);
    return;
}



void FUN_1408539f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined local_1a;

    local_20 = param_5;
    local_1c = 0;
    local_1a = 0;
    local_38[0] = 1;
    local_30 = param_2;
    local_28 = param_3;
    local_24 = param_4;
    (**(code **)(*param_1 + 0x80))(param_1,local_38);
    return;
}



void FUN_140853a40(longlong param_1,char param_2)

{
    longlong lVar1;
    byte *pbVar2;
    byte *pbVar3;
    longlong lVar4;
    byte *pbVar5;
    longlong *plVar6;

    for (lVar1 = *(longlong *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
        pbVar3 = *(byte **)(lVar1 + 0x20);
        if (pbVar3 == (byte *)0x0) {
            pbVar2 = (byte *)0x0;
            pbVar5 = (byte *)0x0;
            pbVar3 = (byte *)0x0;
        }
        else {
            pbVar2 = pbVar3 + 1;
            pbVar5 = pbVar3 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
            pbVar3 = pbVar3 + (ulonglong)*pbVar3 + 1;
        }
        if (pbVar2 != pbVar3) {
            plVar6 = (longlong *)(pbVar5 + 8);
            lVar4 = (longlong)pbVar3 - (longlong)pbVar2;
            do {
                if (*plVar6 != 0) {
                    if (param_2 == '\0') {
                        FUN_14083b0c0(DAT_140c61b70);
                    }
                    else {
                        FUN_14083aed0();
                    }
                }
                plVar6 = plVar6 + 2;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
    }
    return;
}

