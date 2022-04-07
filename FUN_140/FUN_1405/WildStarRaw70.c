//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong * FUN_1405f4420(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float local_res8 [2];
    int local_res10 [2];
    undefined4 local_res18 [2];
    undefined4 *in_stack_ffffffffffffff70;
    longlong local_78;
    undefined4 local_70;

    plVar9 = (longlong *)0x0;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
    fVar12 = 3.402823e+38;
    fVar11 = 3.402823e+38;
    if (lVar8 != *(longlong *)(param_1 + 0x60)) {
        do {
            plVar1 = *(longlong **)(lVar8 + 0x28);
            iVar4 = (**(code **)(*plVar1 + 0x38))(plVar1);
            if (iVar4 == 1) {
                local_res10[0] = 0;
                local_res18[0] = 0;
                fVar13 = fVar12;
                local_res8[0] = fVar12;
                (**(code **)(*plVar1 + 0x1d0))(plVar1,&local_78,1);
                fVar10 = fVar12;
                fVar12 = fVar13;
                if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                    in_stack_ffffffffffffff70 =
                            (undefined4 *)
                                    ((ulonglong)in_stack_ffffffffffffff70 & 0xffffffff00000000 |
                                     (ulonglong)*(uint *)(param_1 + 0x1f0));
                    FUN_1403f7e50(DAT_140c65898,local_78,local_70,local_res10,local_res8,
                                  in_stack_ffffffffffffff70,local_res18);
                    fVar10 = local_res8[0];
                    fVar12 = fVar13;
                }
                puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x138))(plVar1);
                uVar2 = puVar5[1];
                if (uVar2 == 0) {
                    puVar6 = (undefined8 *)0x0;
                }
                else {
                    puVar6 = (undefined8 *)FUN_14018b280(uVar2 * 8 + 0x10,0);
                    if (puVar6 == (undefined8 *)0x0) {
                        puVar6 = (undefined8 *)&DAT_00000010;
                    }
                    else {
                        *puVar6 = &PTR_LAB_140b55060;
                        puVar6[1] = uVar2;
                        puVar6 = puVar6 + 2;
                    }
                }
                FUN_1407db590(puVar6,*puVar5);
                if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                    in_stack_ffffffffffffff70 = local_res18;
                    FUN_1403f8070(DAT_140c65898,puVar6,uVar2 & 0xffffffff,local_res10,local_res8);
                    fVar10 = local_res8[0];
                }
                if ((local_res10[0] != 0) && (fVar10 < fVar11)) {
                    plVar9 = plVar1;
                    fVar11 = fVar10;
                }
                if (puVar6 != (undefined8 *)0x0) {
                    (**(code **)(puVar6[-2] + 8))(puVar6 + -2);
                }
                if (local_78 != 0) {
                    (**(code **)(*(longlong *)(local_78 + -0x10) + 8))(local_78 + -0x10);
                }
            }
            lVar7 = *(longlong *)(lVar8 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar8 = lVar7;
                        lVar7 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar7) {
                    lVar8 = lVar7;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar7 + 0x10); lVar8 = lVar7, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar7 = lVar3;
                }
            }
        } while (lVar8 != *(longlong *)(param_1 + 0x60));
    }
    return plVar9;
}



undefined8 * FUN_1405f46a0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    uint local_res8 [2];
    undefined4 local_res20 [2];
    ulonglong in_stack_ffffffffffffff80;
    undefined4 local_68 [2];
    longlong local_60;
    longlong local_58;
    longlong local_50 [3];

    (**(code **)(*param_1 + 0x158))();
    puVar8 = (undefined8 *)0x0;
    puVar9 = puVar8;
    puVar7 = puVar8;
    if (local_58 == 0) {
        plVar3 = (longlong *)FUN_1405f4420(param_1);
        if (plVar3 == (longlong *)0x0) goto LAB_1405f4853;
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x1d0))(plVar3,local_50,1,0);
        lVar1 = plVar4[1];
        lVar2 = *plVar4;
        plVar4[1] = local_58;
        *plVar4 = local_60;
        local_60 = lVar2;
        local_58 = lVar1;
        if (local_50[0] != 0) {
            (**(code **)(*(longlong *)(local_50[0] + -0x10) + 8))(local_50[0] + -0x10);
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x138))(plVar3);
        puVar9 = (undefined8 *)puVar5[1];
        if (puVar9 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 8 + 0x10,0);
            if (puVar6 != (undefined8 *)0x0) {
                puVar6[1] = puVar9;
                *puVar6 = &PTR_LAB_140b55060;
                puVar7 = puVar6;
            }
            puVar7 = puVar7 + 2;
        }
        FUN_1407db590(puVar7,*puVar5,(longlong)puVar9 * 8);
    }
    local_res8[0] = 0;
    local_68[0] = 0;
    local_res20[0] = 0x7f7fffff;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        FUN_1403f7e50(DAT_140c65898,local_60,local_58,local_res8,local_res20,
                      in_stack_ffffffffffffff80 & 0xffffffff00000000 |
                      (ulonglong)*(uint *)(param_1 + 0x3e),local_68);
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        FUN_1403f8070(DAT_140c65898,puVar7,(ulonglong)puVar9 & 0xffffffff,local_res8,local_res20,
                      local_68);
    }
    if (local_res8[0] != 0) {
        if (param_2 != (undefined4 *)0x0) {
            *param_2 = local_res20[0];
        }
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = local_68[0];
        }
        puVar8 = (undefined8 *)(ulonglong)local_res8[0];
    }
    LAB_1405f4853:
    if (puVar7 != (undefined8 *)0x0) {
        (**(code **)(puVar7[-2] + 8))(puVar7 + -2);
    }
    if (local_60 != 0) {
        (**(code **)(*(longlong *)(local_60 + -0x10) + 8))(local_60 + -0x10);
    }
    return puVar8;
}



longlong FUN_1405f48b0(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    float fVar8;
    float fVar9;
    undefined4 in_XMM6_Da;
    float fVar10;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar11 [16];

    auVar11 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar10 = 3.402823e+38;
    lVar6 = 0;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
    if (lVar7 != *(longlong *)(param_1 + 0x60)) {
        do {
            plVar1 = *(longlong **)(lVar7 + 0x28);
            iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
            if (((iVar3 == 1) &&
                 (lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1), (*(uint *)(lVar4 + 8) & 0x2000) != 0)) &&
                (lVar4 = *(longlong *)(plVar1[0x14] + 0x10), lVar4 != plVar1[0x14])) {
                do {
                    lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar4 + 0x20),DAT_140c65898,param_4,
                                          auVar11);
                    if ((lVar5 != 0) &&
                        (fVar8 = *(float *)(lVar5 + 0x11e0) -
                                 *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0),
                         fVar9 = *(float *)(lVar5 + 0x11e4) -
                                 *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4),
                         fVar8 = fVar8 * fVar8 + fVar9 * fVar9 + 0.0, fVar8 < fVar10)) {
                        lVar6 = lVar5;
                        fVar10 = fVar8;
                    }
                    lVar5 = *(longlong *)(lVar4 + 0x18);
                    if (lVar5 == 0) {
                        lVar5 = *(longlong *)(lVar4 + 8);
                        if (lVar4 == *(longlong *)(lVar5 + 0x18)) {
                            do {
                                lVar4 = lVar5;
                                lVar5 = *(longlong *)(lVar4 + 8);
                            } while (lVar4 == *(longlong *)(lVar5 + 0x18));
                        }
                        if (*(longlong *)(lVar4 + 0x18) != lVar5) {
                            lVar4 = lVar5;
                        }
                    }
                    else {
                        for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar4 = lVar5, lVar2 != 0;
                             lVar2 = *(longlong *)(lVar2 + 0x10)) {
                            lVar5 = lVar2;
                        }
                    }
                } while (lVar4 != plVar1[0x14]);
            }
            lVar4 = *(longlong *)(lVar7 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar7 = lVar4;
                        lVar4 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar4) {
                    lVar7 = lVar4;
                }
            }
            else {
                for (lVar5 = *(longlong *)(lVar4 + 0x10); lVar7 = lVar4, lVar5 != 0;
                     lVar5 = *(longlong *)(lVar5 + 0x10)) {
                    lVar4 = lVar5;
                }
            }
        } while (lVar7 != *(longlong *)(param_1 + 0x60));
    }
    if (param_2 != (float *)0x0) {
        *param_2 = fVar10;
    }
    return lVar6;
}



undefined8 * FUN_1405f4b60(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    char *pcVar2;
    char *pcVar3;
    undefined *puVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    ulonglong uVar8;
    uint uVar9;
    bool bVar10;

    *param_1 = param_2;
    puVar4 = (undefined *)FUN_14018b280();
    uVar8 = 0;
    param_1[4] = puVar4;
    param_1[5] = 0;
    *puVar4 = 0;
    *(undefined8 *)(param_1[4] + 8) = 0;
    *(undefined8 *)(param_1[4] + 0x10) = param_1[4];
    *(undefined8 *)(param_1[4] + 0x18) = param_1[4];
    *(undefined4 *)(param_1 + 1) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0xc) = param_3[2];
    *(undefined4 *)(param_1 + 2) = param_3[6];
    *(int *)((longlong)param_1 + 0x14) = DAT_140c636a8 - param_3[7];
    if (param_3[3] != 0) {
        do {
            pcVar2 = (char *)param_1[4];
            uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 4) + 4 + uVar8 * 8);
            uVar9 = *(uint *)(*(longlong *)(param_3 + 4) + uVar8 * 8);
            bVar10 = true;
            pcVar3 = pcVar2;
            pcVar7 = *(char **)(pcVar2 + 8);
            while (pcVar7 != (char *)0x0) {
                bVar10 = uVar9 < *(uint *)(pcVar7 + 0x20);
                pcVar3 = pcVar7;
                if (bVar10) {
                    pcVar7 = *(char **)(pcVar7 + 0x10);
                }
                else {
                    pcVar7 = *(char **)(pcVar7 + 0x18);
                }
            }
            pcVar7 = pcVar3;
            if (bVar10) {
                if (pcVar3 != *(char **)(pcVar2 + 0x10)) {
                    if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                        pcVar7 = *(char **)(pcVar3 + 0x18);
                    }
                    else {
                        pcVar7 = *(char **)(pcVar3 + 0x10);
                        if (pcVar7 == (char *)0x0) {
                            pcVar7 = *(char **)(pcVar3 + 8);
                            pcVar6 = pcVar7;
                            if (pcVar3 == *(char **)(pcVar7 + 0x10)) {
                                do {
                                    pcVar7 = *(char **)(pcVar6 + 8);
                                    bVar10 = pcVar6 == *(char **)(pcVar7 + 0x10);
                                    pcVar6 = pcVar7;
                                } while (bVar10);
                            }
                        }
                        else {
                            for (pcVar6 = *(char **)(pcVar7 + 0x18); pcVar6 != (char *)0x0;
                                 pcVar6 = *(char **)(pcVar6 + 0x18)) {
                                pcVar7 = pcVar6;
                            }
                        }
                    }
                    goto LAB_1405f4c8d;
                }
                LAB_1405f4c97:
                if ((pcVar3 == pcVar2) || (uVar9 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar5 + 0x20) = CONCAT44(uVar1,uVar9);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = (char *)param_1[4];
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(param_1[4] + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar5 + 0x20) = CONCAT44(uVar1,uVar9);
                    }
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(param_1[4] + 0x18)) {
                        *(longlong *)(param_1[4] + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0();
                param_1[5] = param_1[5] + 1;
            }
            else {
                LAB_1405f4c8d:
                if (*(uint *)(pcVar7 + 0x20) < uVar9) goto LAB_1405f4c97;
            }
            uVar9 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar9;
        } while (uVar9 < (uint)param_3[3]);
    }
    return param_1;
}



void FUN_1405f4d60(longlong *param_1,uint param_2)

{
    short *psVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined8 local_10;

    psVar1 = (short *)FUN_14034bdd0(param_1,*(undefined4 *)(*param_1 + 0xc + (ulonglong)param_2 * 4));
    if ((psVar1 != (short *)0x0) && (lVar2 = 0, *psVar1 != 0)) {
        do {
            lVar2 = lVar2 + 1;
        } while (psVar1[lVar2] != 0);
        if (lVar2 != 0) {
            *(undefined4 *)(param_1 + 2) = 0;
            local_10 = CONCAT44(param_2,*(undefined4 *)((longlong)param_1 + 0xc));
            local_18 = CONCAT44(*(undefined4 *)*param_1,*(undefined4 *)(param_1 + 1));
            FUN_1403f4900(DAT_140c65898,0x6ee,&local_18);
        }
    }
    return;
}



void FUN_1405f4df0(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;

    lVar3 = DAT_140c65980;
    plVar6 = (longlong *)**(longlong **)(DAT_140c65980 + 0x30);
    if (plVar6 != *(longlong **)(DAT_140c65980 + 0x30)) {
        do {
            lVar8 = plVar6[2];
            if (lVar8 != 0) {
                FUN_140008410(lVar8 + 0x18);
                FUN_14018b900(*(undefined8 *)(lVar8 + 0x20),0);
                FUN_14018b900(lVar8);
            }
            plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)*(longlong *)(lVar3 + 0x30));
    }
    plVar6 = (longlong *)**(longlong **)(lVar3 + 0x30);
    if (plVar6 != *(longlong **)(lVar3 + 0x30)) {
        do {
            plVar1 = (longlong *)*plVar6;
            FUN_14018b900(plVar6,0);
            plVar6 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(lVar3 + 0x30));
    }
    *(undefined8 *)*(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
    *(longlong *)(*(longlong *)(lVar3 + 0x30) + 8) = *(longlong *)(lVar3 + 0x30);
    lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x10);
    if (lVar8 != *(longlong *)(lVar3 + 0x10)) {
        do {
            lVar5 = *(longlong *)(lVar8 + 0x28);
            lVar4 = *(longlong *)(lVar5 + 8);
            lVar7 = *(longlong *)(lVar4 + 0x10);
            if (lVar7 != lVar4) {
                do {
                    (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xb8))();
                    lVar4 = *(longlong *)(lVar7 + 0x18);
                    if (lVar4 == 0) {
                        lVar4 = *(longlong *)(lVar7 + 8);
                        if (lVar7 == *(longlong *)(lVar4 + 0x18)) {
                            do {
                                lVar7 = lVar4;
                                lVar4 = *(longlong *)(lVar7 + 8);
                            } while (lVar7 == *(longlong *)(lVar4 + 0x18));
                        }
                        if (*(longlong *)(lVar7 + 0x18) != lVar4) {
                            lVar7 = lVar4;
                        }
                    }
                    else {
                        for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar7 = lVar4, lVar2 != 0;
                             lVar2 = *(longlong *)(lVar2 + 0x10)) {
                            lVar4 = lVar2;
                        }
                    }
                } while (lVar7 != *(longlong *)(lVar5 + 8));
            }
            lVar5 = *(longlong *)(lVar8 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar8 = lVar5;
                        lVar5 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar5) {
                    lVar8 = lVar5;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar8 = lVar5, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
            }
        } while (lVar8 != *(longlong *)(lVar3 + 0x10));
    }
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    return;
}



undefined8 FUN_1405f5010(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    longlong *plVar2;

    iVar1 = param_2[1];
    if (iVar1 == 0) {
        plVar2 = (longlong *)FUN_140498a40(DAT_140c65980,*param_2,0);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x138))(plVar2,param_2[2]);
        }
    }
    else if (iVar1 == 1) {
        plVar2 = (longlong *)FUN_140498a40(DAT_140c65980,*param_2,0);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x140))(plVar2,param_2[2]);
            return 0;
        }
    }
    else if (iVar1 == 2) {
        plVar2 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,*param_2,0);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x148))(plVar2,*param_2,param_2[2]);
            return 0;
        }
    }
    else if (iVar1 == 3) {
        plVar2 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,*param_2,0);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x150))(plVar2,*param_2,param_2[2]);
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_1405f50f0(undefined8 param_1,undefined4 *param_2)

{
    longlong *plVar1;

    if (param_2[1] == 2) {
        plVar1 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,*param_2,0);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x160))(plVar1,*param_2,param_2[2],param_2[3]);
        }
    }
    else if (param_2[1] == 3) {
        plVar1 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,*param_2,0);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x168))(plVar1,*param_2,param_2[2],param_2[3]);
            return 0;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405f5170(undefined8 param_1,int *param_2)

{
    int iVar1;
    int **ppiVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined4 uVar5;
    longlong lVar6;
    int iVar7;
    longlong **pplVar8;
    longlong lVar9;
    longlong *plVar10;
    undefined *puVar11;
    longlong **pplVar12;

    lVar6 = DAT_140c65980;
    pplVar12 = *(longlong ***)(DAT_140c65980 + 0x30);
    pplVar8 = (longlong **)*pplVar12;
    if (pplVar8 != pplVar12) {
        do {
            ppiVar2 = (int **)pplVar8[2];
            if (((**ppiVar2 == param_2[1]) && (*(int *)((longlong)ppiVar2 + 0xc) == param_2[2])) &&
                (*(int *)(ppiVar2 + 1) == *param_2)) {
                return 0;
            }
            pplVar8 = (longlong **)*pplVar8;
        } while (pplVar8 != pplVar12);
    }
    if (DAT_140c63840 == (code *)0x0) {
        if (_DAT_140c65308 != 0) {
            return 0;
        }
        iVar7 = FUN_140229fa0();
        if (iVar7 < 0) {
            return 0;
        }
        lVar9 = (**(code **)(*DAT_140c655b0 + 0x18))();
    }
    else {
        lVar9 = (*DAT_140c63840)(&PTR_u_PublicEventVote_140a6c698,param_2[1],DAT_140c63858);
    }
    if (lVar9 != 0) {
        plVar10 = (longlong *)FUN_14018b280();
        if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
        }
        else {
            iVar7 = param_2[2];
            iVar1 = *param_2;
            *plVar10 = lVar9;
            *(int *)(plVar10 + 1) = iVar1;
            uVar5 = DAT_140c636a8;
            *(int *)((longlong)plVar10 + 0xc) = iVar7;
            *(undefined4 *)((longlong)plVar10 + 0x14) = uVar5;
            *(undefined4 *)(plVar10 + 2) = 1;
            puVar11 = (undefined *)FUN_14018b280(0x28);
            plVar10[4] = (longlong)puVar11;
            plVar10[5] = 0;
            *puVar11 = 0;
            *(undefined8 *)(plVar10[4] + 8) = 0;
            *(longlong *)(plVar10[4] + 0x10) = plVar10[4];
            *(longlong *)(plVar10[4] + 0x18) = plVar10[4];
        }
        plVar3 = *(longlong **)(lVar6 + 0x30);
        plVar4 = (longlong *)*plVar3;
        pplVar12 = (longlong **)FUN_14018b280(0x18);
        if (pplVar12 + 2 != (longlong **)0x0) {
            pplVar12[2] = plVar10;
        }
        *pplVar12 = plVar3;
        pplVar12[1] = (longlong *)plVar3[1];
        *(longlong ***)plVar3[1] = pplVar12;
        plVar3[1] = (longlong)pplVar12;
        if (plVar4 == plVar3) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PublicEventInitiateVote","");
        }
    }
    return 0;
}



undefined8 FUN_1405f5300(ulonglong param_1,int *param_2)

{
    uint uVar1;
    longlong **pplVar2;
    int **ppiVar3;
    int *piVar4;
    int *piVar5;
    longlong **pplVar6;
    int *piVar7;
    int iVar8;
    ulonglong local_res8;
    int *local_res18;
    int *local_res20;

    iVar8 = 0;
    pplVar2 = *(longlong ***)(DAT_140c65980 + 0x30);
    pplVar6 = (longlong **)*pplVar2;
    local_res8 = param_1;
    if (pplVar6 == pplVar2) {
        LAB_1405f53bc:
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PublicEventVoteTallied",&DAT_1409ed274,
                      param_2[2]);
        return 0;
    }
    while ((ppiVar3 = (int **)pplVar6[2], *(int *)(ppiVar3 + 1) != *param_2 ||
                                          (**ppiVar3 != param_2[1]))) {
        pplVar6 = (longlong **)*pplVar6;
        iVar8 = iVar8 + 1;
        if (pplVar6 == pplVar2) goto LAB_1405f53b8;
    }
    uVar1 = param_2[2];
    piVar4 = ppiVar3[4];
    piVar7 = piVar4;
    piVar5 = *(int **)(piVar4 + 2);
    while (piVar5 != (int *)0x0) {
        if ((uint)piVar5[8] < uVar1) {
            piVar5 = *(int **)(piVar5 + 6);
        }
        else {
            piVar7 = piVar5;
            piVar5 = *(int **)(piVar5 + 4);
        }
    }
    if ((piVar7 == piVar4) || (uVar1 < (uint)piVar7[8])) {
        local_res8 = (ulonglong)uVar1;
        local_res18 = piVar7;
        FUN_140032b30(ppiVar3 + 3,&local_res20,&local_res18,&local_res8);
        piVar7 = local_res20;
    }
    piVar7[9] = piVar7[9] + 1;
    LAB_1405f53b8:
    if (iVar8 != 0) {
        return 0;
    }
    goto LAB_1405f53bc;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405f54c0(undefined8 param_1,int *param_2)

{
    int iVar1;
    int **ppiVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    int iVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong **pplVar11;

    lVar5 = DAT_140c65980;
    pplVar11 = *(longlong ***)(DAT_140c65980 + 0x30);
    pplVar7 = (longlong **)*pplVar11;
    if (pplVar7 != pplVar11) {
        do {
            ppiVar2 = (int **)pplVar7[2];
            if (((**ppiVar2 == param_2[1]) && (*(int *)((longlong)ppiVar2 + 0xc) == param_2[2])) &&
                (*(int *)(ppiVar2 + 1) == *param_2)) {
                return 0;
            }
            pplVar7 = (longlong **)*pplVar7;
        } while (pplVar7 != pplVar11);
    }
    iVar1 = param_2[1];
    if (DAT_140c63840 == (code *)0x0) {
        if (_DAT_140c65308 != 0) {
            return 0;
        }
        iVar6 = FUN_140229fa0();
        if (iVar6 < 0) {
            return 0;
        }
        lVar8 = (**(code **)(*DAT_140c655b0 + 0x18))(DAT_140c655b0,iVar1);
    }
    else {
        lVar8 = (*DAT_140c63840)(&PTR_u_PublicEventVote_140a6c698,iVar1,DAT_140c63858);
    }
    if (lVar8 != 0) {
        lVar9 = FUN_14018b280(0x38);
        plVar10 = (longlong *)0x0;
        if (lVar9 != 0) {
            plVar10 = (longlong *)FUN_1405f4b60(lVar9,lVar8,param_2);
        }
        plVar3 = *(longlong **)(lVar5 + 0x30);
        plVar4 = (longlong *)*plVar3;
        pplVar11 = (longlong **)FUN_14018b280(0x18);
        if (pplVar11 + 2 != (longlong **)0x0) {
            pplVar11[2] = plVar10;
        }
        *pplVar11 = plVar3;
        pplVar11[1] = (longlong *)plVar3[1];
        *(longlong ***)plVar3[1] = pplVar11;
        plVar3[1] = (longlong)pplVar11;
        if (plVar4 == plVar3) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PublicEventInitiateVote","");
        }
    }
    return 0;
}



undefined8 FUN_1405f5610(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = (**(code **)(*DAT_140c65980 + 0x30))(DAT_140c65980,*param_2,0);
    if ((lVar1 != 0) && (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x30) + 8) + 0x54) != 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PublicEventObjectiveStartMessage",
                      &DAT_1409ed3c4);
    }
    return 0;
}



void FUN_1405f5670(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    undefined4 uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong local_res8;

    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    for (lVar11 = *(longlong *)(lVar1 + 8); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x10)) {
        local_res8 = lVar11;
    }
    if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar1;
    }
    if (((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) &&
        (lVar11 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10), lVar11 != *(longlong *)(lVar1 + 8)))
    {
        do {
            if (*(longlong **)(lVar11 + 0x28) != (longlong *)0x0) {
                lVar8 = (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x50))();
                lVar10 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0x10);
                if (lVar10 != *(longlong *)(lVar8 + 8)) {
                    do {
                        uVar4 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x40))();
                        if (uVar4 < 3) {
                            plVar2 = *(longlong **)(lVar11 + 0x28);
                            iVar5 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x170))();
                            iVar6 = (**(code **)(*plVar2 + 0x170))(plVar2);
                            if (iVar6 == iVar5) {
                                uVar7 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x158))();
                                *(undefined4 *)(param_1 + 0x38 + (longlong)(int)uVar4 * 4) = uVar7;
                            }
                        }
                        lVar9 = *(longlong *)(lVar10 + 0x18);
                        if (lVar9 == 0) {
                            lVar9 = *(longlong *)(lVar10 + 8);
                            if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                                do {
                                    lVar10 = lVar9;
                                    lVar9 = *(longlong *)(lVar10 + 8);
                                } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                            }
                            if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                                lVar10 = lVar9;
                            }
                        }
                        else {
                            for (lVar3 = *(longlong *)(lVar9 + 0x10); lVar10 = lVar9, lVar3 != 0;
                                 lVar3 = *(longlong *)(lVar3 + 0x10)) {
                                lVar9 = lVar3;
                            }
                        }
                    } while (lVar10 != *(longlong *)(lVar8 + 8));
                }
            }
            lVar10 = *(longlong *)(lVar11 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        lVar11 = lVar10;
                        lVar10 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar10) {
                    lVar11 = lVar10;
                }
            }
            else {
                for (lVar8 = *(longlong *)(lVar10 + 0x10); lVar11 = lVar10, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar10 = lVar8;
                }
            }
        } while (lVar11 != *(longlong *)(lVar1 + 8));
    }
    return;
}



undefined4 FUN_1405f5860(undefined8 param_1,longlong *param_2,int param_3,longlong **param_4)

{
    longlong *plVar1;
    longlong lVar2;
    bool bVar3;
    int iVar4;
    uint uVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong *plVar13;
    undefined4 uVar14;
    longlong local_res8;
    undefined **local_88;
    longlong *local_80;
    longlong *local_78;
    int local_70;
    longlong local_68;
    longlong local_60;
    longlong local_58;
    longlong local_50;
    longlong local_48;
    longlong local_40;

    if (param_2[3] == 0) {
        return 0;
    }
    lVar9 = *(longlong *)(DAT_140c65980 + 0x10);
    local_res8 = lVar9;
    for (lVar10 = *(longlong *)(lVar9 + 8); lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x10)) {
        local_res8 = lVar10;
    }
    if ((local_res8 == lVar9) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar9;
    }
    if ((local_res8 == lVar9) || (*(longlong *)(local_res8 + 0x28) == 0)) {
        plVar13 = (longlong *)0x0;
    }
    else {
        plVar13 = *(longlong **)(*(longlong *)(local_res8 + 0x28) + 0x20);
    }
    uVar14 = 0;
    do {
        if (plVar13 == (longlong *)0x0) {
            return uVar14;
        }
        local_78 = plVar13;
        iVar4 = (**(code **)(*plVar13 + 0x68))(plVar13);
        if ((iVar4 != 0) && (iVar4 = (**(code **)(*plVar13 + 0x70))(plVar13), iVar4 == 0)) {
            lVar9 = *(longlong *)(DAT_140c65898 + 0x78);
            if (lVar9 == 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = *(uint *)(lVar9 + 0x3c);
                if (uVar5 == 0) {
                    uVar5 = *(uint *)(lVar9 + 0x38);
                }
            }
            lVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
            if (*(uint *)(lVar9 + 0x20) <= uVar5) {
                lVar9 = (**(code **)(*plVar13 + 0x48))(plVar13);
                lVar9 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x10);
                lVar10 = (**(code **)(*plVar13 + 0x48))(plVar13);
                if (lVar9 != *(longlong *)(lVar10 + 8)) {
                    do {
                        plVar1 = *(longlong **)(lVar9 + 0x28);
                        iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1);
                        if ((iVar4 != 0) && (iVar4 = (**(code **)(*plVar1 + 0xa0))(plVar1), iVar4 == 0)) {
                            local_70 = iVar4;
                            uVar5 = (**(code **)(*plVar1 + 0x158))(plVar1);
                            lVar10 = param_2[0x6f0];
                            lVar2 = lVar10;
                            lVar11 = *(longlong *)(lVar10 + 8);
                            while (lVar11 != 0) {
                                if (*(uint *)(lVar11 + 0x20) < uVar5) {
                                    lVar11 = *(longlong *)(lVar11 + 0x18);
                                }
                                else {
                                    lVar2 = lVar11;
                                    lVar11 = *(longlong *)(lVar11 + 0x10);
                                }
                            }
                            if ((lVar2 == lVar10) || (uVar5 < *(uint *)(lVar2 + 0x20))) {
                                local_40 = lVar10;
                                plVar13 = &local_40;
                            }
                            else {
                                local_58 = lVar2;
                                plVar13 = &local_58;
                            }
                            if (*plVar13 != lVar10) {
                                local_70 = 1;
                                lVar10 = (**(code **)(*plVar1 + 0x148))(plVar1);
                                if (((*(uint *)(lVar10 + 8) & 0x1000) != 0) && (param_3 != 0)) {
                                    *(undefined *)((longlong)param_2 + 0x34a4) = 1;
                                }
                                if (param_4 != (longlong **)0x0) {
                                    *param_4 = plVar1;
                                }
                            }
                            if (param_3 == 0) {
                                LAB_1405f5a73:
                                bVar3 = false;
                            }
                            else {
                                iVar4 = (**(code **)(*plVar1 + 0x200))(plVar1);
                                bVar3 = true;
                                if (iVar4 == 0) goto LAB_1405f5a73;
                            }
                            lVar10 = *plVar1;
                            uVar6 = (**(code **)(*local_78 + 0x170))();
                            iVar4 = (**(code **)(lVar10 + 0xe0))(plVar1,uVar6);
                            local_88 = &PTR_FUN_140b66440;
                            local_80 = param_2;
                            uVar6 = (**(code **)(*plVar1 + 0x150))(plVar1);
                            switch(uVar6) {
                                case 0:
                                case 0xe:
                                    if (iVar4 != 0) {
                                        iVar8 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 != 0) {
                                            (*(code *)local_88[1])(&local_88,iVar8);
                                            iVar8 = FUN_1403b4a20(&local_88);
                                            if (iVar8 != 0) break;
                                        }
                                        if (bVar3) {
                                            *(undefined *)((longlong)param_2 + 0x345c) = 1;
                                        }
                                        if (param_4 != (longlong **)0x0) {
                                            *param_4 = plVar1;
                                        }
                                        LAB_1405f5c1c:
                                        uVar14 = 1;
                                    }
                                    break;
                                case 1:
                                case 0xf:
                                    if (iVar4 != 0) {
                                        uVar5 = (**(code **)(*local_78 + 0x10))();
                                        lVar10 = param_2[0x6ec];
                                        lVar2 = lVar10;
                                        lVar11 = *(longlong *)(lVar10 + 8);
                                        while (lVar11 != 0) {
                                            if (*(uint *)(lVar11 + 0x20) < uVar5) {
                                                lVar11 = *(longlong *)(lVar11 + 0x18);
                                            }
                                            else {
                                                lVar2 = lVar11;
                                                lVar11 = *(longlong *)(lVar11 + 0x10);
                                            }
                                        }
                                        if ((lVar2 == lVar10) || (uVar5 < *(uint *)(lVar2 + 0x20))) {
                                            local_48 = lVar10;
                                            plVar13 = &local_48;
                                        }
                                        else {
                                            local_68 = lVar2;
                                            plVar13 = &local_68;
                                        }
                                        if (*plVar13 != lVar10) {
                                            if (bVar3) {
                                                *(undefined *)((longlong)param_2 + 0x345c) = 1;
                                            }
                                            if (param_4 == (longlong **)0x0) goto LAB_1405f5c1c;
                                            *param_4 = plVar1;
                                            uVar14 = 1;
                                        }
                                    }
                                    break;
                                case 3:
                                    if (iVar4 != 0) goto LAB_1405f5ae7;
                                    break;
                                case 4:
                                    if ((iVar4 != 0) && (*(int *)(param_2 + 0x6bf) != -1)) {
                                        iVar8 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 != 0) {
                                            (*(code *)local_88[1])(&local_88,iVar8);
                                            iVar8 = FUN_1403b4a20(&local_88);
                                            if (iVar8 != 0) break;
                                        }
                                        iVar8 = (**(code **)(*plVar1 + 0x90))(plVar1);
                                        if (iVar8 == 0) {
                                            if (param_3 != 0) {
                                                *(undefined *)((longlong)param_2 + 0x201c) = 1;
                                            }
                                            if (param_4 == (longlong **)0x0) goto LAB_1405f5b2f;
                                            *param_4 = plVar1;
                                            uVar14 = 1;
                                        }
                                    }
                                    break;
                                case 7:
                                    if (iVar4 != 0) {
                                        iVar8 = (**(code **)(*param_2 + 8))(param_2);
                                        iVar7 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 == iVar7) {
                                            uVar6 = (**(code **)(*plVar1 + 0x168))(plVar1);
                                            lVar10 = FUN_140227bc0(uVar6);
                                            if ((lVar10 != 0) && (iVar8 = FUN_1403ac840(DAT_140c65898 + 0xa0), iVar8 != 0))
                                            {
                                                if (param_3 != 0) {
                                                    *(undefined *)((longlong)param_2 + 0x201c) = 1;
                                                }
                                                if (param_4 == (longlong **)0x0) goto LAB_1405f5b2f;
                                                *param_4 = plVar1;
                                                uVar14 = 1;
                                            }
                                        }
                                    }
                                    break;
                                case 8:
                                case 0x10:
                                case 0x14:
                                    if (iVar4 != 0) {
                                        uVar5 = (**(code **)(*plVar1 + 0x158))(plVar1);
                                        lVar10 = param_2[0x6f0];
                                        lVar2 = lVar10;
                                        lVar11 = *(longlong *)(lVar10 + 8);
                                        while (lVar11 != 0) {
                                            if (*(uint *)(lVar11 + 0x20) < uVar5) {
                                                lVar11 = *(longlong *)(lVar11 + 0x18);
                                            }
                                            else {
                                                lVar2 = lVar11;
                                                lVar11 = *(longlong *)(lVar11 + 0x10);
                                            }
                                        }
                                        if ((lVar2 == lVar10) || (uVar5 < *(uint *)(lVar2 + 0x20))) {
                                            local_50 = lVar10;
                                            plVar13 = &local_50;
                                        }
                                        else {
                                            local_60 = lVar2;
                                            plVar13 = &local_60;
                                        }
                                        if (*plVar13 != lVar10) {
                                            if (bVar3) {
                                                *(undefined *)((longlong)param_2 + 0x345c) = 1;
                                            }
                                            if (param_4 == (longlong **)0x0) goto LAB_1405f5c1c;
                                            *param_4 = plVar1;
                                            uVar14 = 1;
                                        }
                                    }
                                    break;
                                case 0x11:
                                    if (iVar4 != 0) {
                                        iVar8 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 != 0) {
                                            (*(code *)local_88[1])(&local_88,iVar8);
                                            iVar8 = FUN_1403b4a20(&local_88);
                                            goto LAB_1405f5eed;
                                        }
                                        LAB_1405f5ef5:
                                        if (param_3 != 0) {
                                            *(undefined *)((longlong)param_2 + 0x237c) = 1;
                                        }
                                        LAB_1405f5b27:
                                        if (param_4 != (longlong **)0x0) {
                                            *param_4 = plVar1;
                                        }
                                        LAB_1405f5b2f:
                                        uVar14 = 1;
                                    }
                                    break;
                                case 0x12:
                                    if ((iVar4 != 0) && (*(int *)(param_2 + 0x6bf) != -1)) {
                                        iVar8 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 != 0) {
                                            (*(code *)local_88[1])(&local_88,iVar8);
                                            iVar8 = FUN_1403b4a20(&local_88);
                                            if (iVar8 != 0) break;
                                        }
                                        iVar8 = (**(code **)(*plVar1 + 0x90))(plVar1);
                                        LAB_1405f5eed:
                                        if (iVar8 == 0) goto LAB_1405f5ef5;
                                    }
                                    break;
                                case 0x1a:
                                    uVar6 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                    lVar10 = FUN_140228cc0(uVar6);
                                    if (((lVar10 != 0) &&
                                         (lVar11 = FUN_140228cc0(*(undefined4 *)(lVar10 + 0x1c)),
                                                 *(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
                                        ((iVar8 = FUN_140469990(), iVar8 == 0 &&
                                                                   ((lVar11 == 0 ||
                                                                     (iVar8 = FUN_140469990(*(undefined8 *)(DAT_140c65898 + 0x78)), iVar8 == 0))))))
                                    {
                                        iVar8 = iVar4;
                                        if ((*(int *)(lVar10 + 0xc) != 0) &&
                                            (iVar7 = (**(code **)(*param_2 + 8))(param_2), iVar7 == *(int *)(lVar10 + 0xc))
                                                ) goto joined_r0x0001405f5ffc;
                                        if ((*(int *)(lVar10 + 8) == 0) ||
                                            (iVar7 = (**(code **)(*param_2 + 8))(param_2), iVar7 != *(int *)(lVar10 + 8)))
                                        {
                                            if ((lVar11 != 0) &&
                                                ((*(int *)(lVar11 + 0x14) != 0 &&
                                                  (iVar7 = (**(code **)(*param_2 + 8))(param_2),
                                                          iVar7 == *(int *)(lVar11 + 0x14))))) goto joined_r0x0001405f5ffc;
                                        }
                                        else if ((iVar4 == 0) && ((*(byte *)(lVar10 + 4) & 1) != 0)) {
                                            iVar8 = (**(code **)(*plVar1 + 0x98))(plVar1);
                                            goto joined_r0x0001405f5ffc;
                                        }
                                    }
                                    break;
                                case 0x1b:
                                    iVar8 = (**(code **)(*local_78 + 0x170))();
                                    iVar7 = (**(code **)(*plVar1 + 0x208))(plVar1);
                                    if (iVar7 != iVar8) {
                                        if (iVar4 == 0) {
                                            iVar8 = (**(code **)(*plVar1 + 0x208))(plVar1);
                                            iVar7 = (**(code **)(*plVar1 + 0x170))(plVar1);
                                            if (iVar8 != iVar7) break;
                                        }
                                        LAB_1405f5ae7:
                                        iVar8 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 != 0) {
                                            (*(code *)local_88[1])(&local_88,iVar8);
                                            iVar8 = FUN_1403b4a20(&local_88);
                                            joined_r0x0001405f5ffc:
                                            if (iVar8 == 0) break;
                                        }
                                        if (param_3 != 0) {
                                            *(undefined *)((longlong)param_2 + 0x201c) = 1;
                                        }
                                        goto LAB_1405f5b27;
                                    }
                                    break;
                                case 0x1c:
                                    if (iVar4 != 0) {
                                        uVar6 = (**(code **)(*plVar1 + 0x168))(plVar1);
                                        lVar10 = FUN_140228000(uVar6);
                                        if (((lVar10 != 0) &&
                                             (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 == *(int *)(lVar10 + 4)))
                                            && (lVar10 = *(longlong *)(plVar1[0x1d] + 0x10), lVar10 != plVar1[0x1d])) {
                                            do {
                                                if (*(int *)(lVar10 + 0x24) != 0) {
                                                    if (param_3 != 0) {
                                                        *(undefined *)((longlong)param_2 + 0x201c) = 1;
                                                    }
                                                    if (param_4 != (longlong **)0x0) {
                                                        *param_4 = plVar1;
                                                    }
                                                    uVar14 = 1;
                                                }
                                                lVar11 = *(longlong *)(lVar10 + 0x18);
                                                if (lVar11 == 0) {
                                                    lVar11 = *(longlong *)(lVar10 + 8);
                                                    if (lVar10 == *(longlong *)(lVar11 + 0x18)) {
                                                        do {
                                                            lVar10 = lVar11;
                                                            lVar11 = *(longlong *)(lVar10 + 8);
                                                        } while (lVar10 == *(longlong *)(lVar11 + 0x18));
                                                    }
                                                    if (*(longlong *)(lVar10 + 0x18) != lVar11) {
                                                        lVar10 = lVar11;
                                                    }
                                                }
                                                else {
                                                    for (lVar2 = *(longlong *)(lVar11 + 0x10); lVar10 = lVar11, lVar2 != 0;
                                                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                                                        lVar11 = lVar2;
                                                    }
                                                }
                                            } while (lVar10 != plVar1[0x1d]);
                                        }
                                    }
                                    break;
                                case 0x1e:
                                    iVar8 = *(int *)(plVar1 + 0x1c);
                                    iVar7 = (**(code **)(*local_78 + 0x170))();
                                    if (iVar8 == 0) {
                                        iVar8 = (**(code **)(*plVar1 + 0x208))(plVar1);
                                    }
                                    if (iVar8 != iVar7) {
                                        iVar8 = (**(code **)(*plVar1 + 0x160))(plVar1);
                                        if (iVar8 != 0) {
                                            (*(code *)local_88[1])(&local_88,iVar8);
                                            iVar8 = FUN_1403b4a20(&local_88);
                                            if (iVar8 != 0) break;
                                        }
                                        if (param_3 != 0) {
                                            *(undefined *)((longlong)param_2 + 0x201c) = 1;
                                        }
                                        if (param_4 != (longlong **)0x0) {
                                            *param_4 = plVar1;
                                        }
                                        uVar14 = 1;
                                    }
                            }
                            lVar10 = (**(code **)(*plVar1 + 0x148))(plVar1);
                            if (iVar4 != 0) {
                                if (*(int *)(lVar10 + 0x38) != 0) {
                                    uVar12 = (*(code *)local_88[1])(&local_88);
                                    iVar4 = FUN_1403b4a20(&local_88,uVar12);
                                    if (iVar4 == 0) {
                                        if (bVar3) {
                                            *(undefined *)((longlong)param_2 + 0x34a4) = 1;
                                        }
                                        if (param_4 != (longlong **)0x0) {
                                            *param_4 = plVar1;
                                        }
                                        uVar14 = 1;
                                    }
                                }
                                if ((local_70 != 0) &&
                                    (uVar5 = (**(code **)(*plVar1 + 0x178))(plVar1), (uVar5 >> 0x15 & 1) != 0)) {
                                    uVar14 = 1;
                                }
                            }
                            local_88 = &PTR_FUN_140b66400;
                            plVar13 = local_78;
                        }
                        lVar10 = *(longlong *)(lVar9 + 0x18);
                        if (lVar10 == 0) {
                            lVar10 = *(longlong *)(lVar9 + 8);
                            if (lVar9 == *(longlong *)(lVar10 + 0x18)) {
                                do {
                                    lVar9 = lVar10;
                                    lVar10 = *(longlong *)(lVar9 + 8);
                                } while (lVar9 == *(longlong *)(lVar10 + 0x18));
                            }
                            if (*(longlong *)(lVar9 + 0x18) != lVar10) {
                                lVar9 = lVar10;
                            }
                        }
                        else {
                            for (lVar11 = *(longlong *)(lVar10 + 0x10); lVar9 = lVar10, lVar11 != 0;
                                 lVar11 = *(longlong *)(lVar11 + 0x10)) {
                                lVar10 = lVar11;
                            }
                        }
                        lVar10 = (**(code **)(*plVar13 + 0x48))(plVar13);
                    } while (lVar9 != *(longlong *)(lVar10 + 8));
                }
            }
        }
        plVar13 = (longlong *)plVar13[2];
    } while( true );
}



void FUN_1405f62c0(undefined8 param_1,int param_2)

{
    longlong *plVar1;
    longlong **pplVar2;
    bool bVar3;
    longlong lVar4;
    longlong **pplVar5;
    longlong **pplVar6;

    lVar4 = DAT_140c65980;
    pplVar6 = *(longlong ***)(DAT_140c65980 + 0x30);
    if ((longlong **)*pplVar6 != pplVar6) {
        pplVar5 = (longlong **)*pplVar6;
        bVar3 = false;
        if (pplVar5 != pplVar6) {
            do {
                plVar1 = pplVar5[2];
                if (param_2 == *(int *)(plVar1 + 1)) {
                    pplVar2 = (longlong **)pplVar5[1];
                    pplVar6 = (longlong **)*pplVar5;
                    *pplVar2 = (longlong *)pplVar6;
                    pplVar6[1] = (longlong *)pplVar2;
                    FUN_14018b900(pplVar5,0);
                    FUN_140008410(plVar1 + 3);
                    FUN_14018b900(plVar1[4]);
                    FUN_14018b900(plVar1);
                    bVar3 = true;
                }
                else {
                    pplVar6 = (longlong **)*pplVar5;
                }
                pplVar5 = pplVar6;
            } while (pplVar6 != *(longlong ***)(lVar4 + 0x30));
            if (bVar3) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PublicEventVoteEnded",&DAT_1409ed494,
                              0xffffffff);
            }
        }
    }
    return;
}



undefined8 * FUN_1405f63a0(void)

{
    int iVar1;
    undefined *puVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)FUN_14018b280(0x1f8,0);
    if (puVar3 != (undefined8 *)0x0) {
        FUN_1405f8030();
        *puVar3 = &PTR_FUN_140b6f140;
        puVar2 = (undefined *)FUN_14018b280(0x28);
        puVar3[0x14] = puVar2;
        puVar3[0x15] = 0;
        *puVar2 = 0;
        *(undefined8 *)(puVar3[0x14] + 8) = 0;
        *(undefined8 *)(puVar3[0x14] + 0x10) = puVar3[0x14];
        *(undefined8 *)(puVar3[0x14] + 0x18) = puVar3[0x14];
        puVar2 = (undefined *)FUN_14018b280(0x28,0);
        puVar3[0x1b] = 0;
        puVar3[0x1a] = puVar2;
        *puVar2 = 0;
        *(undefined8 *)(puVar3[0x1a] + 8) = 0;
        *(undefined8 *)(puVar3[0x1a] + 0x10) = puVar3[0x1a];
        *(undefined8 *)(puVar3[0x1a] + 0x18) = puVar3[0x1a];
        FUN_1405f8dc0((longlong)puVar3 + 0xec);
        iVar1 = DAT_140c636a8;
        puVar3[0x37] = 0;
        puVar3[0x36] = 0;
        puVar3[0x39] = 0;
        puVar3[0x38] = 0;
        *(undefined4 *)(puVar3 + 0x3c) = 0;
        *(int *)((longlong)puVar3 + 0x1dc) = iVar1 + -1;
        *(undefined4 *)((longlong)puVar3 + 0x1e4) = 1;
        *(undefined4 *)(puVar3 + 0x3d) = 1;
        *(undefined4 *)((longlong)puVar3 + 0x1ec) = 1;
        return puVar3;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1405f63d0(undefined8 param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined **ppuVar4;
    undefined *puVar5;

    iVar1 = *(int *)(*(longlong *)(param_2 + 8) + 0x28);
    if (iVar1 == 0x1b) {
        puVar3 = (undefined8 *)FUN_14018b280(0xe8,0);
        if (puVar3 != (undefined8 *)0x0) {
            FUN_1405f0010(puVar3);
            ppuVar4 = &PTR_FUN_140b6eb10;
            LAB_1405f64d7:
            *puVar3 = ppuVar4;
            *(undefined4 *)(puVar3 + 0x1c) = 0;
            return puVar3;
        }
    }
    else if (iVar1 == 0x1c) {
        puVar3 = (undefined8 *)FUN_14018b280(0x100,0);
        if (puVar3 != (undefined8 *)0x0) {
            FUN_1405f0010(puVar3);
            *puVar3 = &PTR_FUN_140b6e670;
            puVar5 = (undefined *)FUN_14018b280(0x28);
            puVar3[0x1e] = 0;
            puVar3[0x1d] = puVar5;
            *puVar5 = 0;
            *(undefined8 *)(puVar3[0x1d] + 8) = 0;
            *(undefined8 *)(puVar3[0x1d] + 0x10) = puVar3[0x1d];
            *(undefined8 *)(puVar3[0x1d] + 0x18) = puVar3[0x1d];
            return puVar3;
        }
    }
    else if (iVar1 == 0x1e) {
        puVar3 = (undefined8 *)FUN_14018b280(0xe8,0);
        if (puVar3 != (undefined8 *)0x0) {
            FUN_1405f0010(puVar3);
            ppuVar4 = &PTR_FUN_140b6ef30;
            goto LAB_1405f64d7;
        }
    }
    else {
        lVar2 = FUN_14018b280(0xe0,0);
        if (lVar2 != 0) {
            puVar3 = (undefined8 *)FUN_1405f0010(lVar2);
            return puVar3;
        }
    }
    return (undefined8 *)0x0;
}



longlong FUN_1405f6500(longlong param_1,ulonglong param_2)

{
    FUN_140008410(param_1 + 0xe0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xe8),0);
    FUN_1405f0080(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong * FUN_1405f6560(undefined8 param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong local_res10;

    lVar3 = DAT_140c65980;
    param_2[1] = 0;
    *param_2 = 0;
    lVar8 = *(longlong *)(lVar3 + 0x10);
    local_res10 = *(longlong *)(lVar8 + 0x10);
    if (local_res10 != lVar8) {
        do {
            if (*(longlong *)(local_res10 + 0x28) != 0) {
                for (plVar1 = *(longlong **)(*(longlong *)(local_res10 + 0x28) + 0x20);
                     plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
                    lVar8 = (**(code **)(*plVar1 + 0x48))(plVar1);
                    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0x10);
                    lVar9 = (**(code **)(*plVar1 + 0x48))(plVar1);
                    if (lVar8 != *(longlong *)(lVar9 + 8)) {
                        do {
                            plVar2 = *(longlong **)(lVar8 + 0x28);
                            iVar4 = (**(code **)(*plVar2 + 0x68))(plVar2);
                            if (iVar4 != 0) {
                                iVar4 = (**(code **)(*plVar2 + 0x150))(plVar2);
                                if (iVar4 == 0x16) {
                                    uVar5 = (**(code **)(*plVar2 + 0x98))();
                                    uVar6 = (**(code **)(*plVar2 + 0x160))(plVar2);
                                    uVar7 = (**(code **)(*plVar2 + 0x158))(plVar2);
                                    lVar9 = param_2[1];
                                    lVar10 = FUN_14018db00(*param_2,lVar9 + 1,0xc);
                                    lVar12 = *param_2;
                                    *(undefined4 *)(lVar10 + lVar9 * 0xc) = uVar6;
                                    *(undefined4 *)(lVar10 + 4 + lVar9 * 0xc) = uVar5;
                                    *(undefined4 *)(lVar10 + 8 + lVar9 * 0xc) = uVar7;
                                    if (lVar12 != lVar10) {
                                        FUN_1407db590(lVar10,lVar12,param_2[1] * 0xc);
                                        if (lVar12 != 0) {
                                            (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                        }
                                        *param_2 = lVar10;
                                    }
                                    param_2[1] = lVar9 + 1;
                                }
                                else {
                                    iVar4 = (**(code **)(*plVar2 + 0x150))(plVar2);
                                    if ((iVar4 == 0x1c) &&
                                        (lVar9 = *(longlong *)(plVar2[0x1d] + 0x10), lVar9 != plVar2[0x1d])) {
                                        do {
                                            uVar5 = *(undefined4 *)(lVar9 + 0x24);
                                            uVar6 = *(undefined4 *)(lVar9 + 0x20);
                                            uVar7 = (**(code **)(*plVar2 + 0x158))(plVar2);
                                            lVar12 = param_2[1];
                                            lVar11 = FUN_14018db00(*param_2,lVar12 + 1,0xc);
                                            *(undefined4 *)(lVar11 + lVar12 * 0xc) = uVar6;
                                            lVar10 = *param_2;
                                            *(undefined4 *)(lVar11 + 4 + lVar12 * 0xc) = uVar5;
                                            *(undefined4 *)(lVar11 + 8 + lVar12 * 0xc) = uVar7;
                                            if (lVar10 != lVar11) {
                                                FUN_1407db590(lVar11,lVar10,param_2[1] * 0xc);
                                                if (lVar10 != 0) {
                                                    (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
                                                }
                                                *param_2 = lVar11;
                                            }
                                            param_2[1] = lVar12 + 1;
                                            lVar12 = *(longlong *)(lVar9 + 0x18);
                                            if (lVar12 == 0) {
                                                lVar12 = *(longlong *)(lVar9 + 8);
                                                if (lVar9 == *(longlong *)(lVar12 + 0x18)) {
                                                    do {
                                                        lVar9 = lVar12;
                                                        lVar12 = *(longlong *)(lVar9 + 8);
                                                    } while (lVar9 == *(longlong *)(lVar12 + 0x18));
                                                }
                                                if (*(longlong *)(lVar9 + 0x18) != lVar12) {
                                                    lVar9 = lVar12;
                                                }
                                            }
                                            else {
                                                for (lVar10 = *(longlong *)(lVar12 + 0x10); lVar9 = lVar12, lVar10 != 0;
                                                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                                                    lVar12 = lVar10;
                                                }
                                            }
                                        } while (lVar9 != plVar2[0x1d]);
                                    }
                                }
                            }
                            lVar9 = *(longlong *)(lVar8 + 0x18);
                            if (lVar9 == 0) {
                                lVar9 = *(longlong *)(lVar8 + 8);
                                if (lVar8 == *(longlong *)(lVar9 + 0x18)) {
                                    do {
                                        lVar8 = lVar9;
                                        lVar9 = *(longlong *)(lVar8 + 8);
                                    } while (lVar8 == *(longlong *)(lVar9 + 0x18));
                                }
                                if (*(longlong *)(lVar8 + 0x18) != lVar9) {
                                    lVar8 = lVar9;
                                }
                            }
                            else {
                                for (lVar12 = *(longlong *)(lVar9 + 0x10); lVar8 = lVar9, lVar12 != 0;
                                     lVar12 = *(longlong *)(lVar12 + 0x10)) {
                                    lVar9 = lVar12;
                                }
                            }
                            lVar9 = (**(code **)(*plVar1 + 0x48))(plVar1);
                        } while (lVar8 != *(longlong *)(lVar9 + 8));
                    }
                }
            }
            lVar8 = *(longlong *)(local_res10 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(local_res10 + 8);
                if (local_res10 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        local_res10 = lVar8;
                        lVar8 = *(longlong *)(local_res10 + 8);
                    } while (local_res10 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(local_res10 + 0x18) != lVar8) {
                    local_res10 = lVar8;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar8 + 0x10); local_res10 = lVar8, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar8 = lVar9;
                }
            }
        } while (local_res10 != *(longlong *)(lVar3 + 0x10));
    }
    return param_2;
}



int FUN_1405f68f0(longlong param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    int iVar10;
    longlong local_res8;
    longlong local_res18;

    lVar4 = DAT_140c65980;
    iVar10 = 0;
    lVar9 = *(longlong *)(*(longlong *)(DAT_140c65980 + 0x10) + 0x10);
    local_res8 = param_1;
    if (lVar9 != *(longlong *)(DAT_140c65980 + 0x10)) {
        do {
            if (*(longlong *)(lVar9 + 0x28) != 0) {
                for (plVar1 = *(longlong **)(*(longlong *)(lVar9 + 0x28) + 0x20); plVar1 != (longlong *)0x0;
                     plVar1 = (longlong *)plVar1[2]) {
                    lVar6 = (**(code **)(*plVar1 + 0x48))(plVar1);
                    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10);
                    lVar7 = (**(code **)(*plVar1 + 0x48))(plVar1);
                    if (lVar6 != *(longlong *)(lVar7 + 8)) {
                        do {
                            plVar8 = *(longlong **)(lVar6 + 0x28);
                            iVar5 = (**(code **)(*plVar8 + 0x68))(plVar8);
                            if ((iVar5 != 0) && (iVar5 = (**(code **)(*plVar8 + 0x150))(plVar8), iVar5 == 0x1c)) {
                                lVar7 = plVar8[0x1d];
                                lVar3 = lVar7;
                                lVar2 = *(longlong *)(lVar7 + 8);
                                while (lVar2 != 0) {
                                    if (*(uint *)(lVar2 + 0x20) < param_2) {
                                        lVar2 = *(longlong *)(lVar2 + 0x18);
                                    }
                                    else {
                                        lVar3 = lVar2;
                                        lVar2 = *(longlong *)(lVar2 + 0x10);
                                    }
                                }
                                if ((lVar3 == lVar7) || (param_2 < *(uint *)(lVar3 + 0x20))) {
                                    local_res18 = lVar7;
                                    plVar8 = &local_res18;
                                }
                                else {
                                    local_res8 = lVar3;
                                    plVar8 = &local_res8;
                                }
                                if (*plVar8 != lVar7) {
                                    iVar10 = iVar10 + *(int *)(*plVar8 + 0x24);
                                }
                            }
                            lVar7 = *(longlong *)(lVar6 + 0x18);
                            if (lVar7 == 0) {
                                lVar7 = *(longlong *)(lVar6 + 8);
                                if (lVar6 == *(longlong *)(lVar7 + 0x18)) {
                                    do {
                                        lVar6 = lVar7;
                                        lVar7 = *(longlong *)(lVar6 + 8);
                                    } while (lVar6 == *(longlong *)(lVar7 + 0x18));
                                }
                                if (*(longlong *)(lVar6 + 0x18) != lVar7) {
                                    lVar6 = lVar7;
                                }
                            }
                            else {
                                for (lVar2 = *(longlong *)(lVar7 + 0x10); lVar6 = lVar7, lVar2 != 0;
                                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                                    lVar7 = lVar2;
                                }
                            }
                            lVar7 = (**(code **)(*plVar1 + 0x48))(plVar1);
                        } while (lVar6 != *(longlong *)(lVar7 + 8));
                    }
                }
            }
            lVar6 = *(longlong *)(lVar9 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar9 = lVar6;
                        lVar6 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar6) {
                    lVar9 = lVar6;
                }
            }
            else {
                for (lVar7 = *(longlong *)(lVar6 + 0x10); lVar9 = lVar6, lVar7 != 0;
                     lVar7 = *(longlong *)(lVar7 + 0x10)) {
                    lVar6 = lVar7;
                }
            }
        } while (lVar9 != *(longlong *)(lVar4 + 0x10));
    }
    return iVar10;
}



undefined8 FUN_1405f6b00(longlong *param_1)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = (**(code **)(*param_1 + 0x50))();
    if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
        if ((int)uVar2 == 0) {
            return uVar2;
        }
    }
    return 1;
}



undefined4 FUN_1405f6bc0(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    return *(undefined4 *)(lVar1 + 0x28);
}



undefined4 FUN_1405f6be0(longlong *param_1)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x148))();
    return *puVar1;
}



ulonglong FUN_1405f6c00(longlong *param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = (**(code **)(*param_1 + 0x140))();
    puVar2 = *(uint **)(lVar3 + 8);
    uVar1 = puVar2[10];
    if (uVar1 != 5) {
        if (((uVar1 == 1) || (uVar1 == 0xf)) || (uVar1 == 10)) {
            // WARNING: Could not recover jumptable at 0x0001405f6f84. Too many branches
            // WARNING: Treating indirect jump as call
            uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x20))();
            return uVar4;
        }
        if ((uVar1 - 8 & 0xfffffff7) != 0) {
            if (uVar1 == 7) {
                lVar3 = FUN_140227bc0(puVar2[0xc]);
            }
            else {
                if (uVar1 != 0x1c) {
                    return (ulonglong)puVar2[0xc];
                }
                lVar3 = FUN_140228000(puVar2[0xc]);
            }
            if (lVar3 == 0) {
                return 0;
            }
            return (ulonglong)*(uint *)(lVar3 + 4);
        }
    }
    return (ulonglong)*puVar2;
}



undefined4 FUN_1405f6c20(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    return *(undefined4 *)(lVar1 + 0x30);
}



undefined4 FUN_1405f6c40(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    return *(undefined4 *)(lVar1 + 0x14);
}



undefined4 FUN_1405f6c60(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    return *(undefined4 *)(lVar1 + 8);
}



undefined4 FUN_1405f6c80(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    return *(undefined4 *)(lVar1 + 0x34);
}



undefined8 FUN_1405f6ca0(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x70))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x68) + (uVar3 % *(ulonglong *)(param_1 + 0x60)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x78))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 == (ulonglong *)0xffffffffffffffec) {
        return 0;
    }
    return 1;
}



bool FUN_1405f6e00(longlong param_1)

{
    int iVar1;

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
    return iVar1 == 0x10;
}



undefined4 FUN_1405f6e20(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x20))();
    return *(undefined4 *)(lVar1 + 0x10);
}



ulonglong FUN_1405f6e80(longlong *param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_1[1] != 0) {
        do {
            plVar2 = (longlong *)(param_1[2] + uVar3 * 8);
            lVar1 = *(longlong *)(param_1[2] + uVar3 * 8);
            while (lVar1 != 0) {
                lVar1 = *plVar2;
                if (*(int *)(lVar1 + 0x14) == param_3) {
                    *plVar2 = *(longlong *)(lVar1 + 8);
                    FUN_14018b900(lVar1,0);
                    *param_1 = *param_1 + -1;
                    uVar4 = uVar4 + 1;
                }
                else {
                    plVar2 = (longlong *)(lVar1 + 8);
                }
                lVar1 = *plVar2;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    return uVar4;
}



void FUN_1405f6f90(undefined8 param_1,uint param_2,int param_3,undefined8 *param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar2 = DAT_140c65988;
    lVar1 = *(longlong *)(DAT_140c65988 + 0x90);
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    lVar4 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            lVar4 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar4 != lVar1) && (*(uint *)(lVar4 + 0x20) <= param_2)) &&
        ((*(uint *)(lVar4 + 0x20) < param_2 || (*(int *)(lVar4 + 0x24) == 0)))) {
        local_res8 = lVar4;
    }
    if (local_res8 == lVar1) {
        lVar1 = *(longlong *)(lVar2 + 0x70);
        lVar4 = lVar1;
        lVar3 = *(longlong *)(lVar1 + 8);
        while (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x20) < param_3) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        lVar3 = lVar1;
        if (((lVar4 != lVar1) && (*(int *)(lVar4 + 0x20) <= param_3)) &&
            ((*(int *)(lVar4 + 0x20) < param_3 || (*(int *)(lVar4 + 0x24) == 0)))) {
            lVar3 = lVar4;
        }
        while (((lVar3 != lVar1 && (*(int *)(lVar3 + 0x20) == param_3)) && (*(uint *)(lVar3 + 0x24) < 6)
        )) {
            param_4[*(uint *)(lVar3 + 0x24)] = *(undefined8 *)(lVar3 + 0x28);
            lVar4 = *(longlong *)(lVar3 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar3 = lVar4;
                        lVar4 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar4) {
                    lVar3 = lVar4;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar3 = lVar4, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar4 = lVar2;
                }
            }
        }
    }
    else {
        while ((*(uint *)(local_res8 + 0x20) == param_2 && (*(uint *)(local_res8 + 0x24) < 6))) {
            param_4[*(uint *)(local_res8 + 0x24)] = *(undefined8 *)(local_res8 + 0x28);
            lVar3 = *(longlong *)(local_res8 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(local_res8 + 8);
                if (local_res8 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        local_res8 = lVar3;
                        lVar3 = *(longlong *)(local_res8 + 8);
                    } while (local_res8 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(local_res8 + 0x18) != lVar3) {
                    local_res8 = lVar3;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar3 + 0x10); local_res8 = lVar3, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar3 = lVar4;
                }
            }
            if (local_res8 == lVar1) {
                return;
            }
        }
    }
    return;
}



longlong FUN_1405f7170(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    ulonglong uVar12;

    lVar1 = param_1[1];
    puVar5 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1,0xc4);
    puVar11 = puVar5 + lVar1 * 0x31;
    if (puVar11 != (undefined4 *)0x0) {
        if ((((uint)param_2 | (uint)puVar11) & 0xf) == 0) {
            lVar6 = 1;
            do {
                puVar10 = param_2;
                puVar8 = puVar11;
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar8 = *puVar10;
                puVar8[1] = uVar2;
                puVar8[2] = uVar3;
                puVar8[3] = uVar4;
                uVar2 = puVar10[5];
                uVar3 = puVar10[6];
                uVar4 = puVar10[7];
                puVar8[4] = puVar10[4];
                puVar8[5] = uVar2;
                puVar8[6] = uVar3;
                puVar8[7] = uVar4;
                uVar2 = puVar10[9];
                uVar3 = puVar10[10];
                uVar4 = puVar10[0xb];
                puVar8[8] = puVar10[8];
                puVar8[9] = uVar2;
                puVar8[10] = uVar3;
                puVar8[0xb] = uVar4;
                uVar2 = puVar10[0xd];
                uVar3 = puVar10[0xe];
                uVar4 = puVar10[0xf];
                puVar8[0xc] = puVar10[0xc];
                puVar8[0xd] = uVar2;
                puVar8[0xe] = uVar3;
                puVar8[0xf] = uVar4;
                uVar2 = puVar10[0x11];
                uVar3 = puVar10[0x12];
                uVar4 = puVar10[0x13];
                puVar8[0x10] = puVar10[0x10];
                puVar8[0x11] = uVar2;
                puVar8[0x12] = uVar3;
                puVar8[0x13] = uVar4;
                uVar2 = puVar10[0x15];
                uVar3 = puVar10[0x16];
                uVar4 = puVar10[0x17];
                puVar8[0x14] = puVar10[0x14];
                puVar8[0x15] = uVar2;
                puVar8[0x16] = uVar3;
                puVar8[0x17] = uVar4;
                uVar2 = puVar10[0x19];
                uVar3 = puVar10[0x1a];
                uVar4 = puVar10[0x1b];
                puVar8[0x18] = puVar10[0x18];
                puVar8[0x19] = uVar2;
                puVar8[0x1a] = uVar3;
                puVar8[0x1b] = uVar4;
                uVar2 = puVar10[0x1d];
                uVar3 = puVar10[0x1e];
                uVar4 = puVar10[0x1f];
                puVar8[0x1c] = puVar10[0x1c];
                puVar8[0x1d] = uVar2;
                puVar8[0x1e] = uVar3;
                puVar8[0x1f] = uVar4;
                lVar6 = lVar6 + -1;
                puVar11 = puVar8 + 0x20;
                param_2 = puVar10 + 0x20;
            } while (lVar6 != 0);
            uVar2 = puVar10[0x21];
            uVar3 = puVar10[0x22];
            uVar4 = puVar10[0x23];
            puVar8[0x20] = puVar10[0x20];
            puVar8[0x21] = uVar2;
            puVar8[0x22] = uVar3;
            puVar8[0x23] = uVar4;
            uVar2 = puVar10[0x25];
            uVar3 = puVar10[0x26];
            uVar4 = puVar10[0x27];
            puVar8[0x24] = puVar10[0x24];
            puVar8[0x25] = uVar2;
            puVar8[0x26] = uVar3;
            puVar8[0x27] = uVar4;
            uVar2 = puVar10[0x29];
            uVar3 = puVar10[0x2a];
            uVar4 = puVar10[0x2b];
            puVar8[0x28] = puVar10[0x28];
            puVar8[0x29] = uVar2;
            puVar8[0x2a] = uVar3;
            puVar8[0x2b] = uVar4;
            uVar2 = puVar10[0x2d];
            uVar3 = puVar10[0x2e];
            uVar4 = puVar10[0x2f];
            puVar8[0x2c] = puVar10[0x2c];
            puVar8[0x2d] = uVar2;
            puVar8[0x2e] = uVar3;
            puVar8[0x2f] = uVar4;
            puVar8[0x30] = puVar10[0x30];
        }
        else {
            FUN_1407db590(puVar11,param_2,0xc4);
        }
    }
    if ((undefined4 *)*param_1 != puVar5) {
        uVar12 = 0;
        if (param_1[1] != 0) {
            puVar11 = puVar5;
            do {
                if (puVar11 != (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)((longlong)puVar11 + (*param_1 - (longlong)puVar5));
                    if ((((uint)puVar8 | (uint)puVar11) & 0xf) == 0) {
                        lVar6 = 1;
                        puVar10 = puVar11;
                        do {
                            puVar9 = puVar8;
                            puVar7 = puVar10;
                            uVar2 = puVar9[1];
                            uVar3 = puVar9[2];
                            uVar4 = puVar9[3];
                            *puVar7 = *puVar9;
                            puVar7[1] = uVar2;
                            puVar7[2] = uVar3;
                            puVar7[3] = uVar4;
                            uVar2 = puVar9[5];
                            uVar3 = puVar9[6];
                            uVar4 = puVar9[7];
                            puVar7[4] = puVar9[4];
                            puVar7[5] = uVar2;
                            puVar7[6] = uVar3;
                            puVar7[7] = uVar4;
                            uVar2 = puVar9[9];
                            uVar3 = puVar9[10];
                            uVar4 = puVar9[0xb];
                            puVar7[8] = puVar9[8];
                            puVar7[9] = uVar2;
                            puVar7[10] = uVar3;
                            puVar7[0xb] = uVar4;
                            uVar2 = puVar9[0xd];
                            uVar3 = puVar9[0xe];
                            uVar4 = puVar9[0xf];
                            puVar7[0xc] = puVar9[0xc];
                            puVar7[0xd] = uVar2;
                            puVar7[0xe] = uVar3;
                            puVar7[0xf] = uVar4;
                            uVar2 = puVar9[0x11];
                            uVar3 = puVar9[0x12];
                            uVar4 = puVar9[0x13];
                            puVar7[0x10] = puVar9[0x10];
                            puVar7[0x11] = uVar2;
                            puVar7[0x12] = uVar3;
                            puVar7[0x13] = uVar4;
                            uVar2 = puVar9[0x15];
                            uVar3 = puVar9[0x16];
                            uVar4 = puVar9[0x17];
                            puVar7[0x14] = puVar9[0x14];
                            puVar7[0x15] = uVar2;
                            puVar7[0x16] = uVar3;
                            puVar7[0x17] = uVar4;
                            uVar2 = puVar9[0x19];
                            uVar3 = puVar9[0x1a];
                            uVar4 = puVar9[0x1b];
                            puVar7[0x18] = puVar9[0x18];
                            puVar7[0x19] = uVar2;
                            puVar7[0x1a] = uVar3;
                            puVar7[0x1b] = uVar4;
                            uVar2 = puVar9[0x1d];
                            uVar3 = puVar9[0x1e];
                            uVar4 = puVar9[0x1f];
                            puVar7[0x1c] = puVar9[0x1c];
                            puVar7[0x1d] = uVar2;
                            puVar7[0x1e] = uVar3;
                            puVar7[0x1f] = uVar4;
                            lVar6 = lVar6 + -1;
                            puVar10 = puVar7 + 0x20;
                            puVar8 = puVar9 + 0x20;
                        } while (lVar6 != 0);
                        uVar2 = puVar9[0x21];
                        uVar3 = puVar9[0x22];
                        uVar4 = puVar9[0x23];
                        puVar7[0x20] = puVar9[0x20];
                        puVar7[0x21] = uVar2;
                        puVar7[0x22] = uVar3;
                        puVar7[0x23] = uVar4;
                        uVar2 = puVar9[0x25];
                        uVar3 = puVar9[0x26];
                        uVar4 = puVar9[0x27];
                        puVar7[0x24] = puVar9[0x24];
                        puVar7[0x25] = uVar2;
                        puVar7[0x26] = uVar3;
                        puVar7[0x27] = uVar4;
                        uVar2 = puVar9[0x29];
                        uVar3 = puVar9[0x2a];
                        uVar4 = puVar9[0x2b];
                        puVar7[0x28] = puVar9[0x28];
                        puVar7[0x29] = uVar2;
                        puVar7[0x2a] = uVar3;
                        puVar7[0x2b] = uVar4;
                        uVar2 = puVar9[0x2d];
                        uVar3 = puVar9[0x2e];
                        uVar4 = puVar9[0x2f];
                        puVar7[0x2c] = puVar9[0x2c];
                        puVar7[0x2d] = uVar2;
                        puVar7[0x2e] = uVar3;
                        puVar7[0x2f] = uVar4;
                        puVar7[0x30] = puVar9[0x30];
                    }
                    else {
                        FUN_1407db590(puVar11,puVar8,0xc4);
                    }
                }
                uVar12 = uVar12 + 1;
                puVar11 = puVar11 + 0x31;
            } while (uVar12 < (ulonglong)param_1[1]);
        }
        lVar6 = *param_1;
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        *param_1 = (longlong)puVar5;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong FUN_1405f7380(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    ulonglong uVar12;

    lVar1 = param_1[1];
    puVar5 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1,0xe0);
    puVar11 = puVar5 + lVar1 * 0x38;
    if (puVar11 != (undefined4 *)0x0) {
        if ((((uint)param_2 | (uint)puVar11) & 0xf) == 0) {
            lVar6 = 1;
            do {
                puVar10 = param_2;
                puVar8 = puVar11;
                uVar2 = puVar10[1];
                uVar3 = puVar10[2];
                uVar4 = puVar10[3];
                *puVar8 = *puVar10;
                puVar8[1] = uVar2;
                puVar8[2] = uVar3;
                puVar8[3] = uVar4;
                uVar2 = puVar10[5];
                uVar3 = puVar10[6];
                uVar4 = puVar10[7];
                puVar8[4] = puVar10[4];
                puVar8[5] = uVar2;
                puVar8[6] = uVar3;
                puVar8[7] = uVar4;
                uVar2 = puVar10[9];
                uVar3 = puVar10[10];
                uVar4 = puVar10[0xb];
                puVar8[8] = puVar10[8];
                puVar8[9] = uVar2;
                puVar8[10] = uVar3;
                puVar8[0xb] = uVar4;
                uVar2 = puVar10[0xd];
                uVar3 = puVar10[0xe];
                uVar4 = puVar10[0xf];
                puVar8[0xc] = puVar10[0xc];
                puVar8[0xd] = uVar2;
                puVar8[0xe] = uVar3;
                puVar8[0xf] = uVar4;
                uVar2 = puVar10[0x11];
                uVar3 = puVar10[0x12];
                uVar4 = puVar10[0x13];
                puVar8[0x10] = puVar10[0x10];
                puVar8[0x11] = uVar2;
                puVar8[0x12] = uVar3;
                puVar8[0x13] = uVar4;
                uVar2 = puVar10[0x15];
                uVar3 = puVar10[0x16];
                uVar4 = puVar10[0x17];
                puVar8[0x14] = puVar10[0x14];
                puVar8[0x15] = uVar2;
                puVar8[0x16] = uVar3;
                puVar8[0x17] = uVar4;
                uVar2 = puVar10[0x19];
                uVar3 = puVar10[0x1a];
                uVar4 = puVar10[0x1b];
                puVar8[0x18] = puVar10[0x18];
                puVar8[0x19] = uVar2;
                puVar8[0x1a] = uVar3;
                puVar8[0x1b] = uVar4;
                uVar2 = puVar10[0x1d];
                uVar3 = puVar10[0x1e];
                uVar4 = puVar10[0x1f];
                puVar8[0x1c] = puVar10[0x1c];
                puVar8[0x1d] = uVar2;
                puVar8[0x1e] = uVar3;
                puVar8[0x1f] = uVar4;
                lVar6 = lVar6 + -1;
                puVar11 = puVar8 + 0x20;
                param_2 = puVar10 + 0x20;
            } while (lVar6 != 0);
            uVar2 = puVar10[0x21];
            uVar3 = puVar10[0x22];
            uVar4 = puVar10[0x23];
            puVar8[0x20] = puVar10[0x20];
            puVar8[0x21] = uVar2;
            puVar8[0x22] = uVar3;
            puVar8[0x23] = uVar4;
            uVar2 = puVar10[0x25];
            uVar3 = puVar10[0x26];
            uVar4 = puVar10[0x27];
            puVar8[0x24] = puVar10[0x24];
            puVar8[0x25] = uVar2;
            puVar8[0x26] = uVar3;
            puVar8[0x27] = uVar4;
            uVar2 = puVar10[0x29];
            uVar3 = puVar10[0x2a];
            uVar4 = puVar10[0x2b];
            puVar8[0x28] = puVar10[0x28];
            puVar8[0x29] = uVar2;
            puVar8[0x2a] = uVar3;
            puVar8[0x2b] = uVar4;
            uVar2 = puVar10[0x2d];
            uVar3 = puVar10[0x2e];
            uVar4 = puVar10[0x2f];
            puVar8[0x2c] = puVar10[0x2c];
            puVar8[0x2d] = uVar2;
            puVar8[0x2e] = uVar3;
            puVar8[0x2f] = uVar4;
            uVar2 = puVar10[0x31];
            uVar3 = puVar10[0x32];
            uVar4 = puVar10[0x33];
            puVar8[0x30] = puVar10[0x30];
            puVar8[0x31] = uVar2;
            puVar8[0x32] = uVar3;
            puVar8[0x33] = uVar4;
            uVar2 = puVar10[0x35];
            uVar3 = puVar10[0x36];
            uVar4 = puVar10[0x37];
            puVar8[0x34] = puVar10[0x34];
            puVar8[0x35] = uVar2;
            puVar8[0x36] = uVar3;
            puVar8[0x37] = uVar4;
        }
        else {
            FUN_1407db590(puVar11,param_2,0xe0);
        }
    }
    if ((undefined4 *)*param_1 != puVar5) {
        uVar12 = 0;
        if (param_1[1] != 0) {
            puVar11 = puVar5;
            do {
                if (puVar11 != (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)((longlong)puVar11 + (*param_1 - (longlong)puVar5));
                    if ((((uint)puVar8 | (uint)puVar11) & 0xf) == 0) {
                        lVar6 = 1;
                        puVar10 = puVar11;
                        do {
                            puVar9 = puVar8;
                            puVar7 = puVar10;
                            uVar2 = puVar9[1];
                            uVar3 = puVar9[2];
                            uVar4 = puVar9[3];
                            *puVar7 = *puVar9;
                            puVar7[1] = uVar2;
                            puVar7[2] = uVar3;
                            puVar7[3] = uVar4;
                            uVar2 = puVar9[5];
                            uVar3 = puVar9[6];
                            uVar4 = puVar9[7];
                            puVar7[4] = puVar9[4];
                            puVar7[5] = uVar2;
                            puVar7[6] = uVar3;
                            puVar7[7] = uVar4;
                            uVar2 = puVar9[9];
                            uVar3 = puVar9[10];
                            uVar4 = puVar9[0xb];
                            puVar7[8] = puVar9[8];
                            puVar7[9] = uVar2;
                            puVar7[10] = uVar3;
                            puVar7[0xb] = uVar4;
                            uVar2 = puVar9[0xd];
                            uVar3 = puVar9[0xe];
                            uVar4 = puVar9[0xf];
                            puVar7[0xc] = puVar9[0xc];
                            puVar7[0xd] = uVar2;
                            puVar7[0xe] = uVar3;
                            puVar7[0xf] = uVar4;
                            uVar2 = puVar9[0x11];
                            uVar3 = puVar9[0x12];
                            uVar4 = puVar9[0x13];
                            puVar7[0x10] = puVar9[0x10];
                            puVar7[0x11] = uVar2;
                            puVar7[0x12] = uVar3;
                            puVar7[0x13] = uVar4;
                            uVar2 = puVar9[0x15];
                            uVar3 = puVar9[0x16];
                            uVar4 = puVar9[0x17];
                            puVar7[0x14] = puVar9[0x14];
                            puVar7[0x15] = uVar2;
                            puVar7[0x16] = uVar3;
                            puVar7[0x17] = uVar4;
                            uVar2 = puVar9[0x19];
                            uVar3 = puVar9[0x1a];
                            uVar4 = puVar9[0x1b];
                            puVar7[0x18] = puVar9[0x18];
                            puVar7[0x19] = uVar2;
                            puVar7[0x1a] = uVar3;
                            puVar7[0x1b] = uVar4;
                            uVar2 = puVar9[0x1d];
                            uVar3 = puVar9[0x1e];
                            uVar4 = puVar9[0x1f];
                            puVar7[0x1c] = puVar9[0x1c];
                            puVar7[0x1d] = uVar2;
                            puVar7[0x1e] = uVar3;
                            puVar7[0x1f] = uVar4;
                            lVar6 = lVar6 + -1;
                            puVar10 = puVar7 + 0x20;
                            puVar8 = puVar9 + 0x20;
                        } while (lVar6 != 0);
                        uVar2 = puVar9[0x21];
                        uVar3 = puVar9[0x22];
                        uVar4 = puVar9[0x23];
                        puVar7[0x20] = puVar9[0x20];
                        puVar7[0x21] = uVar2;
                        puVar7[0x22] = uVar3;
                        puVar7[0x23] = uVar4;
                        uVar2 = puVar9[0x25];
                        uVar3 = puVar9[0x26];
                        uVar4 = puVar9[0x27];
                        puVar7[0x24] = puVar9[0x24];
                        puVar7[0x25] = uVar2;
                        puVar7[0x26] = uVar3;
                        puVar7[0x27] = uVar4;
                        uVar2 = puVar9[0x29];
                        uVar3 = puVar9[0x2a];
                        uVar4 = puVar9[0x2b];
                        puVar7[0x28] = puVar9[0x28];
                        puVar7[0x29] = uVar2;
                        puVar7[0x2a] = uVar3;
                        puVar7[0x2b] = uVar4;
                        uVar2 = puVar9[0x2d];
                        uVar3 = puVar9[0x2e];
                        uVar4 = puVar9[0x2f];
                        puVar7[0x2c] = puVar9[0x2c];
                        puVar7[0x2d] = uVar2;
                        puVar7[0x2e] = uVar3;
                        puVar7[0x2f] = uVar4;
                        uVar2 = puVar9[0x31];
                        uVar3 = puVar9[0x32];
                        uVar4 = puVar9[0x33];
                        puVar7[0x30] = puVar9[0x30];
                        puVar7[0x31] = uVar2;
                        puVar7[0x32] = uVar3;
                        puVar7[0x33] = uVar4;
                        uVar2 = puVar9[0x35];
                        uVar3 = puVar9[0x36];
                        uVar4 = puVar9[0x37];
                        puVar7[0x34] = puVar9[0x34];
                        puVar7[0x35] = uVar2;
                        puVar7[0x36] = uVar3;
                        puVar7[0x37] = uVar4;
                    }
                    else {
                        FUN_1407db590(puVar11,puVar8,0xe0);
                    }
                }
                uVar12 = uVar12 + 1;
                puVar11 = puVar11 + 0x38;
            } while (uVar12 < (ulonglong)param_1[1]);
        }
        lVar6 = *param_1;
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        *param_1 = (longlong)puVar5;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



undefined8 * FUN_1405f75b0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b6e880;
    param_1[10] = 0;
    param_1[9] = 0;
    FUN_1400b6000(param_1 + 0xb,0);
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[3] = 0;
    param_1[4] = 3;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
    return param_1;
}



void FUN_1405f7620(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6e880;
    lVar1 = param_1[0x10];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140019490(param_1 + 0xb);
    FUN_14018b900(param_1[0xd],0);
    param_1[0xd] = 0;
    lVar1 = param_1[9];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return;
}



undefined8 FUN_1405f7760(longlong param_1)

{
    undefined8 uVar1;

    if (*(int *)(param_1 + 0x28) == 0) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
        if ((int)uVar1 == 0) {
            return uVar1;
        }
    }
    return 1;
}



int FUN_1405f7790(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x70))();
    if (iVar1 != 0) {
        return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 7);
        if (iVar1 < 0) {
            iVar1 = 0;
        }
        return iVar1;
    }
    iVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (iVar1 != 0) {
        return *(int *)((longlong)param_1 + 0x3c) - *(int *)(param_1 + 7);
    }
    return DAT_140c636a8 - *(int *)(param_1 + 7);
}



int FUN_1405f7800(longlong *param_1)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;

    iVar1 = (**(code **)(*param_1 + 0x70))();
    if (iVar1 == 0) {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(int *)(lVar3 + 0x34) != 0) {
            uVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
            lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(uint *)(lVar3 + 0x34) <= uVar2 && uVar2 != *(uint *)(lVar3 + 0x34)) {
                return 0;
            }
            lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
            return *(int *)(lVar3 + 0x34) - uVar2;
        }
    }
    return 0;
}



uint FUN_1405f7880(longlong *param_1)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;

    uVar1 = (**(code **)(*param_1 + 0x150))();
    switch(uVar1) {
        case 1:
        case 8:
        case 0xf:
        case 0x10:
            lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
            if ((*(byte *)(lVar3 + 0xc) & 2) != 0) {
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 0xb:
        case 0xc:
        case 0x12:
        case 0x14:
        case 0x15:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1e:
        case 0x1f:
        case 0x20:
            return 0;
    }
    uVar2 = (**(code **)(*param_1 + 0x178))(param_1);
    return uVar2 & 0x80;
}



uint FUN_1405f7920(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    uVar1 = (**(code **)(*param_1 + 0x150))();
    switch(uVar1) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 10:
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x16:
            return 1;
        case 1:
        case 8:
        case 0xf:
        case 0x10:
            lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
            return (*(byte *)(lVar2 + 0xc) ^ 0xffffffff) >> 1 & 1;
        default:
            return 0;
    }
}



int FUN_1405f7a10(longlong *param_1)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;

    lVar3 = (**(code **)(*param_1 + 0x148))();
    if (*(int *)(lVar3 + 0x40) == 0) {
        iVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
        if (iVar1 != 0) {
            return *(int *)((longlong)param_1 + 0x1c);
        }
        iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
        if (iVar1 == 0x13) {
            iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
            if (iVar1 != 0) {
                lVar3 = *(longlong *)param_1[1];
                uVar2 = (**(code **)(*param_1 + 0x170))(param_1);
                iVar1 = (**(code **)(lVar3 + 0x180))(param_1[1],uVar2);
                if (iVar1 != 0) {
                    lVar3 = *(longlong *)param_1[1];
                    uVar2 = (**(code **)(*param_1 + 0x170))(param_1);
                    iVar1 = (**(code **)(lVar3 + 0x180))(param_1[1],uVar2);
                    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
                    return iVar1 * *(int *)(lVar3 + 0x2c);
                }
            }
        }
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        return *(int *)(lVar3 + 0x2c);
    }
    lVar3 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_14020fd40(*(undefined4 *)(lVar3 + 0x40));
    if (lVar3 == 0) {
        return 0;
    }
    return *(int *)(lVar3 + 8);
}



bool FUN_1405f7b10(longlong *param_1)

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
            if ((*(byte *)(lVar2 + 0xc) & 2) != 0) {
                return true;
            }
            break;
        case 9:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1f:
            return false;
    }
    return *(int *)((longlong)param_1 + 0x1c) != 0;
}



bool FUN_1405f7bb0(longlong *param_1,int param_2)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x170))();
    if ((iVar1 != 0) && (param_2 != 0)) {
        iVar1 = (**(code **)(*param_1 + 0x170))(param_1);
        return iVar1 == param_2;
    }
    return true;
}



undefined8 FUN_1405f7c40(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0xc0))();
    if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
        if (iVar1 != 0xb) {
            return 0;
        }
    }
    return 1;
}



undefined8 FUN_1405f7c80(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (*(int *)(lVar1 + 0x40) != 0) {
        lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar1 = FUN_14020fd40(*(undefined4 *)(lVar1 + 0x40));
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc) & 8) != 0)) {
            return 0;
        }
    }
    return 1;
}



undefined8 FUN_1405f7d30(longlong *param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (param_1[10] != 0) {
        piVar1 = (int *)param_1[9];
        do {
            if (*piVar1 == param_2) {
                FUN_1401c2f20();
                (**(code **)(*param_1 + 0x158))(param_1);
                return 0;
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 1;
        } while (uVar2 < (ulonglong)param_1[10]);
    }
    return 0x80004005;
}



undefined8 FUN_1405f7d90(longlong *param_1)

{
    param_1[10] = 0;
    (**(code **)(*param_1 + 0x158))();
    return 0;
}



undefined8 FUN_1405f7db0(longlong *param_1,int param_2,int param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    int *piVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar1 = param_1[0x11];
    uVar5 = 0;
    if (uVar1 != 0) {
        piVar3 = (int *)param_1[0x10];
        do {
            if ((piVar3[1] == param_3) && (*piVar3 == param_2)) {
                return 0x80004005;
            }
            uVar5 = uVar5 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar5 < uVar1);
    }
    lVar4 = FUN_14018db00(param_1[0x10],uVar1 + 1,8);
    *(ulonglong *)(lVar4 + uVar1 * 8) = CONCAT44(param_3,param_2);
    if (param_1[0x10] != lVar4) {
        FUN_1407db590(lVar4,param_1[0x10],param_1[0x11] << 3);
        lVar2 = param_1[0x10];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        param_1[0x10] = lVar4;
    }
    param_1[0x11] = uVar1 + 1;
    (**(code **)(*param_1 + 0x158))(param_1);
    return 0;
}



undefined8 FUN_1405f7ea0(longlong *param_1,int param_2,int param_3)

{
    ulonglong uVar1;
    int iVar2;
    int *piVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    uVar1 = param_1[0x11];
    uVar6 = 0;
    if (uVar1 != 0) {
        piVar3 = (int *)param_1[0x10];
        do {
            if ((piVar3[1] == param_3) && (*piVar3 == param_2)) {
                uVar1 = uVar1 - 1;
                piVar3 = (int *)param_1[0x10] + uVar6 * 2;
                FUN_1407db590(piVar3,piVar3 + 2,(uVar1 - uVar6) * 8);
                puVar5 = (undefined8 *)param_1[0x10];
                if (uVar1 == 0) goto LAB_1405f7fa2;
                if (puVar5 == (undefined8 *)0x0) {
                    lVar4 = uVar1 * 8 + 0x10;
                    uVar6 = uVar1;
                }
                else {
                    if (uVar1 < (ulonglong)puVar5[-1] || uVar1 == puVar5[-1]) goto LAB_1405f7fa2;
                    lVar4 = FUN_14018a3e0(uVar1 * 8 + 0x10);
                    uVar6 = lVar4 - 0x10U >> 3;
                    lVar4 = (lVar4 - 0x10U & 0xfffffffffffffff8) + 0x10;
                    iVar2 = (**(code **)puVar5[-2])(puVar5 + -2,lVar4);
                    if (iVar2 != 0) {
                        puVar5[-1] = uVar6;
                        goto LAB_1405f7fa2;
                    }
                }
                puVar5 = (undefined8 *)FUN_14018b280(lVar4,0);
                if (puVar5 != (undefined8 *)0x0) {
                    puVar5[1] = uVar6;
                    *puVar5 = &PTR_LAB_140b55060;
                }
                puVar5 = puVar5 + 2;
                LAB_1405f7fa2:
                if ((undefined8 *)param_1[0x10] != puVar5) {
                    FUN_1407db590(puVar5,(undefined8 *)param_1[0x10],uVar1 * 8);
                    lVar4 = param_1[0x10];
                    if (lVar4 != 0) {
                        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                    }
                    param_1[0x10] = (longlong)puVar5;
                }
                param_1[0x11] = uVar1;
                (**(code **)(*param_1 + 0x158))(param_1);
                return 0;
            }
            uVar6 = uVar6 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar6 < uVar1);
    }
    return 0x80004005;
}



undefined8 FUN_1405f8010(longlong *param_1)

{
    param_1[0x11] = 0;
    (**(code **)(*param_1 + 0x158))();
    return 0;
}



undefined8 * FUN_1405f8030(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b6ea30;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[9] = 0;
    param_1[8] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[8] + 8) = 0;
    *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
    *(undefined8 *)(param_1[8] + 0x18) = param_1[8];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xd] = 0;
    param_1[0xc] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xc] + 8) = 0;
    *(undefined8 *)(param_1[0xc] + 0x10) = param_1[0xc];
    *(undefined8 *)(param_1[0xc] + 0x18) = param_1[0xc];
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_1405f8340(param_1);
    return param_1;
}



void FUN_1405f80e0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6ea30;
    lVar1 = param_1[0xf];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 0xb);
    FUN_14018b900(param_1[0xc],0);
    FUN_140008410(param_1 + 7);
    FUN_14018b900(param_1[8],0);
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



ulonglong FUN_1405f8180(longlong *param_1)

{
    int iVar1;
    ulonglong uVar2;

    uVar2 = (**(code **)(*param_1 + 0x68))();
    if ((int)uVar2 == 0) {
        return uVar2;
    }
    iVar1 = (**(code **)(*param_1 + 0x70))(param_1);
    if (iVar1 != 0) {
        return (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x24) - *(int *)(param_1 + 4));
    }
    return (ulonglong)(uint)(DAT_140c636a8 - *(int *)(param_1 + 4));
}



int FUN_1405f81d0(longlong *param_1)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;

    iVar1 = (**(code **)(*param_1 + 0x68))();
    if (iVar1 != 0) {
        lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
        if (*(int *)(lVar3 + 0x10) != 0) {
            uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
            lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
            if (*(uint *)(lVar3 + 0x10) <= uVar2 && uVar2 != *(uint *)(lVar3 + 0x10)) {
                return 0;
            }
            lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
            return *(int *)(lVar3 + 0x10) - uVar2;
        }
    }
    return 0;
}



undefined8 FUN_1405f82a0(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x28))();
    if ((4 < iVar1 - 2U) && (iVar1 != 10)) {
        return 0;
    }
    return 1;
}



undefined8 FUN_1405f82f0(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x20))();
    if (*(int *)(lVar1 + 0x24) != 0) {
        lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
        lVar1 = FUN_14020fd40(*(undefined4 *)(lVar1 + 0x24));
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc) & 8) != 0)) {
            return 0;
        }
    }
    return 1;
}



undefined8 FUN_1405f8340(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    param_1[4] = 0;
    param_1[3] = 0;
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(longlong *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar3 = *(longlong *)(param_1[0xc] + 0x10);
    if (lVar3 != param_1[0xc]) {
        do {
            (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x18))();
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
        } while (lVar3 != param_1[0xc]);
    }
    param_1[0x10] = 0;
    if (param_1[6] != 0) {
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return 0;
}



void FUN_1405f8420(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    bool bVar6;
    undefined4 local_38 [2];
    longlong *local_30;
    undefined local_28 [16];

    local_38[0] = (**(code **)(*param_2 + 0x158))(param_2);
    local_30 = param_2;
    FUN_140055f80(param_1 + 0xb,local_28,local_38);
    uVar3 = (**(code **)(*param_2 + 0x160))(param_2);
    iVar4 = (**(code **)(*param_2 + 0x150))(param_2);
    lVar5 = param_1[8];
    lVar2 = lVar5;
    lVar1 = *(longlong *)(lVar5 + 8);
    while (lVar1 != 0) {
        if (iVar4 == *(int *)(lVar1 + 0x20)) {
            bVar6 = uVar3 < *(uint *)(lVar1 + 0x24);
        }
        else {
            bVar6 = iVar4 < *(int *)(lVar1 + 0x20);
        }
        lVar2 = lVar1;
        if (bVar6) {
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
        else {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
    }
    if (lVar2 != lVar5) {
        if (iVar4 == *(int *)(lVar2 + 0x20)) {
            bVar6 = uVar3 < *(uint *)(lVar2 + 0x24);
        }
        else {
            bVar6 = iVar4 < *(int *)(lVar2 + 0x20);
        }
        if (!bVar6) {
            lVar5 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar5 + 0x20) = CONCAT44(uVar3,iVar4);
                *(longlong **)(lVar5 + 0x28) = param_2;
            }
            *(longlong *)(lVar2 + 0x18) = lVar5;
            if (lVar2 == *(longlong *)(param_1[8] + 0x18)) {
                *(longlong *)(param_1[8] + 0x18) = lVar5;
            }
            goto LAB_1405f8555;
        }
    }
    lVar5 = FUN_14018b280(0x30);
    if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar5 + 0x20) = CONCAT44(uVar3,iVar4);
        *(longlong **)(lVar5 + 0x28) = param_2;
    }
    *(longlong *)(lVar2 + 0x10) = lVar5;
    lVar1 = param_1[8];
    if (lVar2 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar5;
        *(longlong *)(param_1[8] + 0x18) = lVar5;
    }
    else if (lVar2 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar5;
    }
    LAB_1405f8555:
    *(longlong *)(lVar5 + 8) = lVar2;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    FUN_1400081c0(lVar5,param_1[8] + 8);
    param_1[9] = param_1[9] + 1;
    // WARNING: Could not recover jumptable at 0x0001405f858f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0xd0))(param_1,param_2);
    return;
}



void FUN_1405f85a0(undefined8 param_1,uint param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong local_res8;

    lVar2 = *(longlong *)(DAT_140c65980 + 0x10);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((((local_res8 != lVar2) && (*(longlong *)(local_res8 + 0x28) != 0)) && (param_3 != 0)) &&
        (plVar4 = (longlong *)(*(longlong *)(local_res8 + 0x28) + 0x20),
                *(longlong *)(param_3 + 8) == 0)) {
        *(longlong **)(param_3 + 8) = plVar4;
        plVar1 = (longlong *)(param_3 + 0x10);
        *plVar1 = *plVar4;
        *plVar4 = param_3;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 8) = plVar1;
        }
    }
    return;
}



void FUN_1405f8630(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                   undefined4 param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,param_4,0);
    if ((plVar4 != (longlong *)0x0) && (param_3 != 0)) {
        do {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_48 = &PTR_FUN_140b569f0;
            local_30 = 1;
            local_38 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(lVar1);
            uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
            iVar3 = FUN_1405f1250(&local_48,param_2,uVar5,param_5);
            if (iVar3 != 0) {
                FUN_1400fb1d0(param_1);
            }
            FUN_1400579e0(lVar1);
            param_2 = param_2 + 0xc4;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return;
}



void FUN_1405f8760(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,param_4,0);
    if ((plVar4 != (longlong *)0x0) && (param_3 != 0)) {
        do {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_38 = &PTR_FUN_140b569f0;
            local_20 = 1;
            local_28 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            local_30 = FUN_1400578c0(lVar1);
            uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
            iVar3 = FUN_1405f0f90(&local_38,param_2,uVar5,0);
            if (iVar3 != 0) {
                FUN_1400fb1d0(param_1);
            }
            FUN_1400579e0(lVar1);
            param_2 = param_2 + 0xe0;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return;
}



undefined8 FUN_1405f8880(undefined8 param_1,ulonglong param_2)

{
    FUN_1405f7620();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1405f88c0(undefined8 param_1,ulonglong param_2)

{
    FUN_1405f80e0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined4 FUN_1405f8900(int param_1)

{
    if (param_1 < 0x201) {
        if (param_1 == 0x200) {
            return 9;
        }
        if (param_1 < 0x11) {
            if (param_1 == 0x10) {
                return 4;
            }
            if (param_1 == 1) {
                return 0;
            }
            if (param_1 == 2) {
                return 1;
            }
            if (param_1 == 4) {
                return 2;
            }
            if (param_1 == 8) {
                return 3;
            }
        }
        else {
            if (param_1 == 0x20) {
                return 5;
            }
            if (param_1 == 0x40) {
                return 6;
            }
            if (param_1 == 0x80) {
                return 7;
            }
            if (param_1 == 0x100) {
                return 8;
            }
        }
    }
    else if (param_1 < 0x4001) {
        if (param_1 == 0x4000) {
            return 100;
        }
        if (param_1 == 0x400) {
            return 10;
        }
        if (param_1 == 0x800) {
            return 0xb;
        }
        if (param_1 == 0x1000) {
            return 0xc;
        }
        if (param_1 == 0x2000) {
            return 0xd;
        }
    }
    else {
        if (param_1 == 0x8000) {
            return 0x65;
        }
        if (param_1 == 0x10000) {
            return 0x66;
        }
        if (param_1 == 0x20000) {
            return 0x67;
        }
    }
    return 0xce;
}



uint FUN_1405f89f0(uint param_1,uint param_2)

{
    byte bVar1;
    uint uVar2;

    bVar1 = (byte)param_2;
    if (param_2 < 0xe) {
        uVar2 = 1 << (bVar1 & 0x1f);
    }
    else if (param_2 < 0x68) {
        uVar2 = 1 << (bVar1 + 0xaa & 0x1f);
    }
    else if (param_2 < 0xce) {
        uVar2 = 1 << (bVar1 + 0x4a & 0x1f);
    }
    else {
        uVar2 = 0;
    }
    if ((param_1 & uVar2) != 0) {
        param_1 = uVar2 - 1 & param_1;
        uVar2 = (param_1 - (param_1 >> 1 & 0x5b6db6db)) - (param_1 >> 2 & 0x9249249);
        return ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f;
    }
    return 0xffffffff;
}



longlong FUN_1405f8a80(longlong param_1,int param_2)

{
    switch(param_2) {
        case 0:
            return param_1;
        case 1:
            return param_1 + 0x10;
        case 2:
            return param_1 + 0x18;
        case 3:
            return param_1 + 0x20;
        case 4:
            return param_1 + 0x30;
        case 5:
            return param_1 + 0x38;
        default:
            return param_1 + 0x48;
        case 7:
            return param_1 + 8;
        case 8:
            return param_1 + 0x40;
        case 9:
            return param_1 + 0x58;
        case 10:
            return param_1 + 0x60;
        case 0xb:
            return param_1 + 0x68;
        case 0xc:
            return param_1 + 0x70;
        case 0xd:
            return param_1 + 0x78;
        case 100:
            return param_1 + 0x28;
        case 0x65:
            return param_1 + 0x80;
        case 0x66:
            return param_1 + 0x50;
        case 0x67:
            return param_1 + 0x88;
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
            return param_1 + ((ulonglong)(param_2 - 200) + 0x12) * 8;
    }
}



void FUN_1405f8c40(undefined8 param_1,uint *param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;

    iVar2 = DAT_140c636a8;
    uVar6 = 0;
    do {
        uVar3 = FUN_1405f89f0();
        if (uVar3 < *(byte *)(param_2 + 1)) {
            iVar1 = *(int *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar3 * 4);
            piVar4 = (int *)FUN_1405f8a80();
            if (*piVar4 != iVar1) {
                *piVar4 = iVar1;
                piVar4[1] = iVar2;
            }
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 0xe);
    uVar6 = 100;
    do {
        uVar3 = FUN_1405f89f0();
        if (uVar3 < *(byte *)(param_2 + 1)) {
            iVar1 = *(int *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar3 * 4);
            piVar4 = (int *)FUN_1405f8a80();
            if (*piVar4 != iVar1) {
                *piVar4 = iVar1;
                piVar4[1] = iVar2;
            }
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 0x68);
    uVar3 = 200;
    uVar6 = 0x100;
    do {
        uVar5 = uVar6;
        if (0xd < uVar3) {
            if (uVar3 < 0x68) {
                uVar5 = 1 << ((char)uVar3 + 0xaaU & 0x1f);
            }
            else if (uVar3 < 0xce) {
                uVar5 = 1 << ((char)uVar3 + 0x4aU & 0x1f);
            }
            else {
                uVar5 = 0;
            }
        }
        if ((*param_2 & uVar5) == 0) {
            uVar7 = 0xffffffff;
        }
        else {
            uVar5 = uVar5 - 1 & *param_2;
            uVar5 = (uVar5 - (uVar5 >> 2 & 0x9249249)) - (uVar5 >> 1 & 0x5b6db6db);
            uVar7 = (ulonglong)(((uVar5 >> 3) + uVar5 & 0xc71c71c7) % 0x3f);
        }
        if ((uint)uVar7 < (uint)*(byte *)(param_2 + 1)) {
            iVar1 = *(int *)(*(longlong *)(param_2 + 2) + uVar7 * 4);
            piVar4 = (int *)FUN_1405f8a80();
            if (*piVar4 != iVar1) {
                *piVar4 = iVar1;
                piVar4[1] = iVar2;
            }
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0xce);
    return;
}



undefined4 * FUN_1405f8dc0(undefined4 *param_1)

{
    undefined4 uVar1;

    uVar1 = DAT_140c636a8;
    param_1[1] = DAT_140c636a8;
    *param_1 = 0;
    param_1[3] = uVar1;
    param_1[2] = 0;
    param_1[5] = uVar1;
    param_1[4] = 0;
    param_1[7] = uVar1;
    param_1[6] = 0;
    param_1[9] = uVar1;
    param_1[8] = 0;
    param_1[0xb] = uVar1;
    param_1[10] = 0;
    param_1[0xd] = uVar1;
    param_1[0xc] = 0;
    param_1[0xf] = uVar1;
    param_1[0xe] = 0;
    param_1[0x11] = uVar1;
    param_1[0x10] = 0;
    param_1[0x13] = uVar1;
    param_1[0x12] = 0;
    param_1[0x15] = uVar1;
    param_1[0x14] = 0;
    param_1[0x17] = uVar1;
    param_1[0x16] = 0;
    param_1[0x19] = uVar1;
    param_1[0x18] = 0;
    param_1[0x1b] = uVar1;
    param_1[0x1a] = 0;
    param_1[0x1d] = uVar1;
    param_1[0x1c] = 0;
    param_1[0x1f] = uVar1;
    param_1[0x1e] = 0;
    param_1[0x21] = uVar1;
    param_1[0x20] = 0;
    param_1[0x23] = uVar1;
    param_1[0x22] = 0;
    param_1[0x25] = uVar1;
    param_1[0x27] = uVar1;
    param_1[0x29] = uVar1;
    param_1[0x2b] = uVar1;
    param_1[0x2d] = uVar1;
    param_1[0x2f] = uVar1;
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
    param_1[0x2a] = 0;
    param_1[0x2c] = 0;
    param_1[0x2e] = 0;
    return param_1;
}



longlong FUN_1405f8e90(longlong param_1)

{
    undefined8 uVar1;
    undefined *puVar2;

    uVar1 = FUN_14018b280(0x18);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)uVar1 = uVar1;
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    puVar2 = (undefined *)FUN_14018b280(0x38);
    *(undefined **)(param_1 + 0x18) = puVar2;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(longlong *)(param_1 + 0x18);
    *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) = *(longlong *)(param_1 + 0x18);
    puVar2 = (undefined *)FUN_14018b280(0x38,0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined **)(param_1 + 0x38) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) = *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined **)(param_1 + 0x68) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined **)(param_1 + 0x88) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = *(longlong *)(param_1 + 0x88);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined **)(param_1 + 0xa8) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10) = *(longlong *)(param_1 + 0xa8);
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18) = *(longlong *)(param_1 + 0xa8);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined **)(param_1 + 200) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x10) = *(longlong *)(param_1 + 200);
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x18) = *(longlong *)(param_1 + 200);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined **)(param_1 + 0xe8) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) = *(longlong *)(param_1 + 0xe8);
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = *(longlong *)(param_1 + 0xe8);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined **)(param_1 + 0x108) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10) = *(longlong *)(param_1 + 0x108);
    *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x18) = *(longlong *)(param_1 + 0x108);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined **)(param_1 + 0x128) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x10) = *(longlong *)(param_1 + 0x128);
    *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x18) = *(longlong *)(param_1 + 0x128);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined **)(param_1 + 0x148) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) = *(longlong *)(param_1 + 0x148);
    *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x18) = *(longlong *)(param_1 + 0x148);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined **)(param_1 + 0x168) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x10) = *(longlong *)(param_1 + 0x168);
    *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x18) = *(longlong *)(param_1 + 0x168);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined **)(param_1 + 0x188) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x10) = *(longlong *)(param_1 + 0x188);
    *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x18) = *(longlong *)(param_1 + 0x188);
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined **)(param_1 + 0x1a8) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x10) = *(longlong *)(param_1 + 0x1a8);
    *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x18) = *(longlong *)(param_1 + 0x1a8);
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001405f95d6)
// WARNING: Removing unreachable block (ram,0x0001405f95e3)
// WARNING: Removing unreachable block (ram,0x0001405f9605)

void FUN_1405f91b0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;

    FUN_14043b6b0(param_1,param_1 + 0x60);
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x18)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                plVar5 = (longlong *)**(longlong **)(lVar3 + 8);
                if (plVar5 != *(longlong **)(lVar3 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar5;
                        FUN_14018b900(plVar5);
                        plVar5 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar3 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 8);
                *(longlong *)(*(longlong *)(lVar3 + 8) + 8) = *(longlong *)(lVar3 + 8);
                FUN_14018b900(*(undefined8 *)(lVar3 + 8));
                FUN_14018b900(lVar3);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x18));
    }
    FUN_140008410(param_1 + 0x10);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x38)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                plVar5 = (longlong *)**(longlong **)(lVar3 + 8);
                if (plVar5 != *(longlong **)(lVar3 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar5;
                        FUN_14018b900(plVar5);
                        plVar5 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar3 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 8);
                *(longlong *)(*(longlong *)(lVar3 + 8) + 8) = *(longlong *)(lVar3 + 8);
                FUN_14018b900(*(undefined8 *)(lVar3 + 8));
                FUN_14018b900(lVar3);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x30);
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) = *(longlong *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    plVar5 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar5 != *(longlong **)(param_1 + 8)) {
        do {
            lVar4 = plVar5[2];
            if (lVar4 != 0) {
                FUN_140195d70(lVar4 + 8);
                *(undefined4 *)(lVar4 + 8) = 0;
                if (*(undefined8 **)(lVar4 + 0x18) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar4 + 0x18) = *(undefined8 *)(lVar4 + 0x20);
                }
                if (*(undefined8 **)(lVar4 + 0x20) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x18);
                }
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined8 *)(lVar4 + 0x20) = 0;
                FUN_14018b900(lVar4);
            }
            plVar5 = (longlong *)*plVar5;
        } while (plVar5 != (longlong *)*(longlong *)(param_1 + 8));
    }
    plVar5 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar5 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar5;
            FUN_14018b900(plVar5,0);
            plVar5 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x1a8)) {
        do {
            plVar5 = *(longlong **)(lVar4 + 0x28);
            if (plVar5 != (longlong *)0x0) {
                if ((longlong *)*plVar5 != (longlong *)0x0) {
                    *(longlong *)*plVar5 = plVar5[1];
                }
                if ((longlong *)plVar5[1] != (longlong *)0x0) {
                    *(longlong *)plVar5[1] = *plVar5;
                }
                *plVar5 = 0;
                plVar5[1] = 0;
                FUN_14018b900(plVar5,0);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x1a8));
    }
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x1a0,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x10) = *(longlong *)(param_1 + 0x1a8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x18) = *(longlong *)(param_1 + 0x1a8);
        *(undefined8 *)(param_1 + 0x1b0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1a8),0);
    if (*(longlong *)(param_1 + 400) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x180,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x10) = *(longlong *)(param_1 + 0x188);
        *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x18) = *(longlong *)(param_1 + 0x188);
        *(undefined8 *)(param_1 + 400) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x188),0);
    if (*(longlong *)(param_1 + 0x170) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x160,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x10) = *(longlong *)(param_1 + 0x168);
        *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x18) = *(longlong *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x170) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x168),0);
    if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x140,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) = *(longlong *)(param_1 + 0x148);
        *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x18) = *(longlong *)(param_1 + 0x148);
        *(undefined8 *)(param_1 + 0x150) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x148),0);
    if (*(longlong *)(param_1 + 0x130) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x120,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x10) = *(longlong *)(param_1 + 0x128);
        *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x18) = *(longlong *)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x130) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x128),0);
    if (*(longlong *)(param_1 + 0x110) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x100,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10) = *(longlong *)(param_1 + 0x108);
        *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x18) = *(longlong *)(param_1 + 0x108);
        *(undefined8 *)(param_1 + 0x110) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x108),0);
    if (*(longlong *)(param_1 + 0xf0) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xe0,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xe8),0);
    if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 200) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xc0,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 200) + 0x10) = *(longlong *)(param_1 + 200);
        *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 200) + 0x18) = *(longlong *)(param_1 + 200);
        *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 200),0);
    if (*(longlong *)(param_1 + 0xb0) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xa0,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10) = *(longlong *)(param_1 + 0xa8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18) = *(longlong *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa8),0);
    if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x80,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = *(longlong *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x90) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x60,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
    lVar4 = *(longlong *)(param_1 + 0x50);
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x30,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) = *(longlong *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x38),0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x10,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x18),0);
    plVar5 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar5 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar5;
            FUN_14018b900(plVar5,0);
            plVar5 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



longlong * FUN_1405f9b60(longlong *param_1)

{
    if ((longlong *)*param_1 != (longlong *)0x0) {
        *(longlong *)*param_1 = param_1[1];
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405f9bb0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    longlong local_res10;
    longlong local_res18;
    undefined4 local_48 [2];
    longlong local_40;
    undefined local_38 [16];

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64030 == 0) {
            iVar2 = FUN_1401f3800();
            if (iVar2 < 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c64cf0 + 0x28))();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = (*DAT_140c63838)();
    }
    uVar11 = 0;
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64030 == 0) {
                    iVar2 = FUN_1401f3800();
                    if (iVar2 < 0) {
                        lVar3 = 0;
                    }
                    else {
                        lVar3 = (**(code **)(*DAT_140c64cf0 + 0x20))();
                    }
                }
                else {
                    lVar3 = 0;
                }
            }
            else {
                lVar3 = (*DAT_140c63848)(&PTR_u_ClientEvent_140a699c0,uVar11,DAT_140c63858);
            }
            switch(*(undefined4 *)(lVar3 + 0x14)) {
                case 0:
                    lVar10 = param_1 + 0x60;
                    break;
                case 1:
                    lVar10 = param_1 + 0xa0;
                    break;
                case 2:
                    lVar10 = param_1 + 0xc0;
                    break;
                case 3:
                    lVar10 = param_1 + 0xe0;
                    break;
                case 4:
                    lVar10 = param_1 + 0x100;
                    break;
                case 5:
                    lVar10 = param_1 + 0x80;
                    break;
                case 6:
                    lVar10 = param_1 + 0x120;
                    break;
                case 7:
                    lVar10 = param_1 + 0x140;
                    break;
                case 8:
                    lVar10 = param_1 + 0x160;
                    break;
                case 9:
                    lVar10 = param_1 + 0x180;
                    break;
                default:
                    goto switchD_1405f9c93_caseD_a;
            }
            if (lVar10 != 0) {
                lVar6 = *(longlong *)(lVar10 + 8);
                lVar9 = lVar6;
                if (*(longlong *)(lVar6 + 8) != 0) {
                    lVar4 = *(longlong *)(lVar6 + 8);
                    do {
                        if (*(uint *)(lVar4 + 0x20) < *(uint *)(lVar3 + 0x18)) {
                            lVar5 = *(longlong *)(lVar4 + 0x18);
                        }
                        else {
                            lVar5 = *(longlong *)(lVar4 + 0x10);
                            lVar9 = lVar4;
                        }
                        lVar4 = lVar5;
                    } while (lVar5 != 0);
                }
                if ((lVar9 == lVar6) || (*(uint *)(lVar3 + 0x18) < *(uint *)(lVar9 + 0x20))) {
                    local_res18 = lVar6;
                    plVar8 = &local_res18;
                }
                else {
                    local_res10 = lVar9;
                    plVar8 = &local_res10;
                }
                if (*plVar8 == lVar6) {
                    lVar6 = FUN_14018b280(0x10);
                    if (lVar6 == 0) {
                        lVar6 = 0;
                    }
                    else {
                        uVar7 = FUN_14018b280(0x18);
                        *(undefined8 *)(lVar6 + 8) = uVar7;
                        *(undefined8 *)uVar7 = uVar7;
                        *(longlong *)(*(longlong *)(lVar6 + 8) + 8) = *(longlong *)(lVar6 + 8);
                    }
                    local_48[0] = *(undefined4 *)(lVar3 + 0x18);
                    local_40 = lVar6;
                    FUN_140055f80(lVar10,local_38,local_48);
                }
                else {
                    lVar6 = *(longlong *)(*plVar8 + 0x28);
                }
                lVar10 = *(longlong *)(lVar6 + 8);
                plVar8 = (longlong *)FUN_14018b280(0x18);
                if (plVar8 + 2 != (longlong *)0x0) {
                    plVar8[2] = lVar3;
                }
                *plVar8 = lVar10;
                plVar8[1] = *(longlong *)(lVar10 + 8);
                **(longlong ***)(lVar10 + 8) = plVar8;
                *(longlong **)(lVar10 + 8) = plVar8;
            }
            switchD_1405f9c93_caseD_a:
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar1);
    }
    return 0;
}



void FUN_1405f9e30(longlong param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong local_res10;
    undefined4 local_48 [2];
    longlong local_40;
    code *local_38;
    longlong *local_30;

    lVar2 = *(longlong *)(param_2 + 8);
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
    if (local_res10 != lVar2) {
        lVar2 = *(longlong *)(local_res10 + 0x28);
        plVar9 = *(longlong **)(lVar2 + 8);
        plVar8 = (longlong *)*plVar9;
        if (plVar8 != plVar9) {
            do {
                lVar3 = plVar8[2];
                if ((lVar3 != 0) &&
                    ((*(int *)(lVar3 + 0x10) == 0 ||
                      (iVar5 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48),
                              *(int *)(lVar3 + 0x10) == iVar5)))) {
                    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
                        lVar4 = *(longlong *)(param_1 + 0x58);
                        lVar1 = lVar4 + 1;
                        lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0x50),lVar1,8);
                        *(longlong *)(lVar6 + lVar4 * 8) = lVar3;
                        if (*(longlong *)(param_1 + 0x50) != lVar6) {
                            FUN_1407db590(lVar6,*(longlong *)(param_1 + 0x50),*(longlong *)(param_1 + 0x58) << 3);
                            if (*(longlong *)(param_1 + 0x50) != 0) {
                                (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + -0x10) + 8))();
                            }
                            *(longlong *)(param_1 + 0x50) = lVar6;
                        }
                        *(longlong *)(param_1 + 0x58) = lVar1;
                    }
                    else if (*(int *)(lVar3 + 0x24) == 0) {
                        FUN_1405fa070();
                    }
                    else {
                        plVar7 = (longlong *)FUN_14018b280(0x50);
                        plVar9 = (longlong *)0x0;
                        if (plVar7 != (longlong *)0x0) {
                            *plVar7 = lVar3;
                            plVar7[3] = 0;
                            plVar7[4] = 0;
                            plVar7[6] = 0;
                            plVar7[7] = 0;
                            *(undefined4 *)(plVar7 + 1) = 0x544e5645;
                            *(undefined4 *)((longlong)plVar7 + 0x4c) = 0;
                            plVar9 = plVar7;
                        }
                        lVar1 = *(longlong *)(param_1 + 8);
                        plVar7 = (longlong *)FUN_14018b280(0x18);
                        if ((longlong **)(plVar7 + 2) != (longlong **)0x0) {
                            plVar7[2] = (longlong)plVar9;
                        }
                        *plVar7 = lVar1;
                        plVar7[1] = *(longlong *)(lVar1 + 8);
                        **(longlong ***)(lVar1 + 8) = plVar7;
                        *(longlong **)(lVar1 + 8) = plVar7;
                        local_48[0] = 1;
                        local_38 = FUN_1405fa6c0;
                        local_40 = param_1;
                        local_30 = plVar9;
                        FUN_140195960(plVar9 + 1,*(undefined4 *)(lVar3 + 0x24),local_48,4);
                    }
                }
                plVar8 = (longlong *)*plVar8;
            } while (plVar8 != (longlong *)*(longlong *)(lVar2 + 8));
        }
    }
    FUN_1405fa3b0(param_1);
    return;
}



void FUN_1405fa070(longlong param_1,longlong *param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    longlong lVar10;
    longlong lVar11;
    longlong **pplVar12;
    longlong local_res10;
    undefined local_48 [16];
    uint local_38 [2];
    longlong local_30;
    undefined8 local_28;

    lVar11 = 0;
    iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
            (DAT_140c659a0,0,*(undefined4 *)((longlong)param_2 + 0x1c),0,0,0);
    if (iVar2 == 0) {
        return;
    }
    lVar3 = FUN_1401f3ea0();
    if (lVar3 == 0) {
        return;
    }
    uVar1 = *(uint *)(lVar3 + 4);
    if ((uVar1 - 1 < 3) || (uVar1 == 7)) {
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar10 = param_1 + 0x30;
        local_res10 = lVar7;
        if (*(longlong *)(lVar7 + 8) != 0) {
            lVar5 = *(longlong *)(lVar7 + 8);
            do {
                if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar3 + 8)) {
                    lVar6 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar6 = *(longlong *)(lVar5 + 0x10);
                    local_res10 = lVar5;
                }
                lVar5 = lVar6;
            } while (lVar6 != 0);
        }
        if ((local_res10 == lVar7) || (*(uint *)(lVar3 + 8) < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar7;
        }
        if (local_res10 == *(longlong *)(param_1 + 0x38)) {
            lVar7 = FUN_14018b280(0x10);
            if (lVar7 != 0) {
                uVar4 = FUN_14018b280(0x18);
                *(undefined8 *)(lVar7 + 8) = uVar4;
                *(undefined8 *)uVar4 = uVar4;
                *(longlong *)(*(longlong *)(lVar7 + 8) + 8) = *(longlong *)(lVar7 + 8);
                lVar11 = lVar7;
            }
            local_38[0] = *(uint *)(lVar3 + 8);
            goto LAB_1405fa222;
        }
    }
    else {
        lVar3 = *(longlong *)(param_1 + 0x18);
        lVar10 = param_1 + 0x10;
        local_res10 = lVar3;
        lVar7 = *(longlong *)(lVar3 + 8);
        while (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x20) < uVar1) {
                lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                local_res10 = lVar7;
                lVar7 = *(longlong *)(lVar7 + 0x10);
            }
        }
        if ((local_res10 == lVar3) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar3;
        }
        if (local_res10 == *(longlong *)(param_1 + 0x18)) {
            lVar3 = FUN_14018b280(0x10);
            local_38[0] = uVar1;
            if (lVar3 != 0) {
                uVar4 = FUN_14018b280(0x18);
                *(undefined8 *)(lVar3 + 8) = uVar4;
                *(undefined8 *)uVar4 = uVar4;
                *(longlong *)(*(longlong *)(lVar3 + 8) + 8) = *(longlong *)(lVar3 + 8);
                lVar11 = lVar3;
            }
            LAB_1405fa222:
            local_28 = 0;
            local_30 = lVar11;
            FUN_1405fb040(lVar10,local_48,local_38);
            goto LAB_1405fa241;
        }
    }
    lVar11 = *(longlong *)(local_res10 + 0x28);
    LAB_1405fa241:
    pplVar9 = *(longlong ***)(lVar11 + 8);
    pplVar8 = (longlong **)*pplVar9;
    for (pplVar12 = pplVar8; (pplVar12 != pplVar9 && (pplVar12[2] != param_2));
         pplVar12 = (longlong **)*pplVar12) {
    }
    if (pplVar12 == pplVar9) {
        pplVar12 = pplVar9;
        if (pplVar8 != pplVar9) {
            do {
                pplVar12 = pplVar8;
                if (*(uint *)(pplVar8[2] + 4) <= *(uint *)(param_2 + 4)) break;
                pplVar8 = (longlong **)*pplVar8;
                pplVar12 = pplVar9;
            } while (pplVar8 != pplVar9);
        }
        pplVar9 = (longlong **)FUN_14018b280(0x18);
        if (pplVar9 + 2 != (longlong **)0x0) {
            pplVar9[2] = param_2;
        }
        *pplVar9 = (longlong *)pplVar12;
        pplVar9[1] = pplVar12[1];
        *pplVar12[1] = (longlong)pplVar9;
        pplVar12[1] = (longlong *)pplVar9;
    }
    return;
}



void FUN_1405fa2d0(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;

    lVar1 = FUN_1401f3ea0(param_2);
    if (lVar1 != 0) {
        switch(*(undefined4 *)(lVar1 + 4)) {
            case 0:
            case 5:
                FUN_1405fa840(param_1,lVar1);
                return;
            case 1:
                FUN_14043f0b0(&IMAGE_DOS_HEADER_140000000,*(undefined4 *)(lVar1 + 8),3);
                return;
            case 2:
                FUN_14043f0b0(&IMAGE_DOS_HEADER_140000000,*(undefined4 *)(lVar1 + 8),4);
                return;
            case 3:
                FUN_14043f0b0(&IMAGE_DOS_HEADER_140000000,*(undefined4 *)(lVar1 + 8),5);
                return;
            case 4:
                *(undefined4 *)(DAT_140c65898 + 0x79ec) = *(undefined4 *)(lVar1 + 8);
                return;
            case 6:
                FUN_1405faa20(&IMAGE_DOS_HEADER_140000000,lVar1);
                return;
            case 7:
                FUN_14043f0b0(&IMAGE_DOS_HEADER_140000000,*(undefined4 *)(lVar1 + 8),0xb);
                return;
        }
    }
    return;
}



void FUN_1405fa3b0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x18)) {
        do {
            FUN_1405fa4d0(param_1,lVar3 + 0x28,*(undefined8 *)(lVar3 + 0x28));
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
        } while (lVar3 != *(longlong *)(param_1 + 0x18));
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x38)) {
        do {
            FUN_1405fa4d0(param_1,lVar3 + 0x28,*(undefined8 *)(lVar3 + 0x28));
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
        } while (lVar3 != *(longlong *)(param_1 + 0x38));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405fa4d0(undefined8 param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;

    plVar7 = (longlong *)**(longlong **)(param_3 + 8);
    if (plVar7 != *(longlong **)(param_3 + 8)) {
        do {
            lVar6 = plVar7[2];
            plVar2 = (longlong *)*plVar7;
            iVar5 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,0,*(undefined4 *)(lVar6 + 0x1c),0,0,0);
            if (iVar5 == 0) {
                lVar3 = *plVar7;
                plVar4 = (longlong *)plVar7[1];
                *plVar4 = lVar3;
                *(longlong **)(lVar3 + 8) = plVar4;
                FUN_14018b900(plVar7);
                if (*(longlong *)(param_2 + 8) == lVar6) {
                    *(undefined8 *)(param_2 + 8) = 0;
                }
                uVar1 = *(undefined4 *)(lVar6 + 0x28);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64fdc != 0) || (iVar5 = FUN_1401f3c40(), iVar5 < 0)) goto LAB_1405fa611;
                    lVar6 = (**(code **)(*DAT_140c64bb0 + 0x18))(DAT_140c64bb0,uVar1);
                }
                else {
                    lVar6 = (*DAT_140c63840)(&PTR_u_ClientEventAction_140a699f8,uVar1);
                }
                if (lVar6 != 0) {
                    iVar5 = *(int *)(lVar6 + 4);
                    if (iVar5 == 0) {
                        LAB_1405fa5e7:
                        FUN_1405fa960(param_1);
                    }
                    else if (iVar5 == 4) {
                        if (*(int *)(DAT_140c65898 + 0x79ec) == *(int *)(lVar6 + 8)) {
                            *(undefined4 *)(DAT_140c65898 + 0x79ec) = 0;
                        }
                    }
                    else {
                        if (iVar5 == 5) goto LAB_1405fa5e7;
                        if (iVar5 == 6) {
                            FUN_1405fab30();
                        }
                    }
                }
            }
            else if ((*(longlong *)(param_2 + 8) == 0) ||
                     (*(uint *)(*(longlong *)(param_2 + 8) + 0x20) < *(uint *)(lVar6 + 0x20))) {
                FUN_1405fa2d0(param_1);
                *(longlong *)(param_2 + 8) = lVar6;
            }
            LAB_1405fa611:
            plVar7 = plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_3 + 8));
    }
    return;
}



void FUN_1405fa640(undefined8 param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_1401f3ea0(*(undefined4 *)(param_2 + 0x28));
    if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 4);
        if (iVar1 == 0) {
            LAB_1405fa69e:
            FUN_1405fa960(param_1,lVar2);
            return;
        }
        if (iVar1 == 4) {
            if (*(int *)(DAT_140c65898 + 0x79ec) == *(int *)(lVar2 + 8)) {
                *(undefined4 *)(DAT_140c65898 + 0x79ec) = 0;
                return;
            }
        }
        else {
            if (iVar1 == 5) goto LAB_1405fa69e;
            if (iVar1 == 6) {
                FUN_1405fab30();
                return;
            }
        }
    }
    return;
}



void FUN_1405fa6c0(longlong param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    FUN_1405fa070(param_1,*param_2);
    FUN_1405fa3b0(param_1);
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar1;
    while (puVar4 = puVar2, puVar4 != puVar1) {
        puVar2 = (undefined8 *)*puVar4;
        if ((undefined8 *)puVar4[2] == param_2) {
            puVar3 = (undefined8 *)puVar4[1];
            *puVar3 = puVar2;
            puVar2[1] = puVar3;
            FUN_14018b900(puVar4,0);
        }
    }
    FUN_1403a1940(param_2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405fa730(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong local_res8;
    longlong local_res18;

    lVar3 = DAT_140c65ba8;
    local_res8 = param_1;
    FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0x60,param_2);
    if (param_2 == 0) {
        return;
    }
    do {
        lVar5 = *(longlong *)(lVar3 + 0x88);
        lVar2 = lVar5;
        lVar1 = *(longlong *)(lVar5 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar2 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((lVar2 == lVar5) || (param_2 < *(uint *)(lVar2 + 0x20))) {
            local_res18 = lVar5;
            plVar6 = &local_res18;
        }
        else {
            local_res8 = lVar2;
            plVar6 = &local_res8;
        }
        if (*plVar6 != *(longlong *)(lVar3 + 0x88)) {
            FUN_1405f9e30(lVar3,lVar3 + 0x80,param_2);
        }
        if (DAT_140c63840 == (code *)0x0) {
            if (_DAT_140c64634 != 0) {
                return;
            }
            iVar4 = FUN_14024d920();
            if (iVar4 < 0) {
                return;
            }
            lVar5 = (**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,param_2);
        }
        else {
            lVar5 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,param_2);
        }
        if (lVar5 == 0) {
            return;
        }
        param_2 = *(uint *)(lVar5 + 8);
    } while (param_2 != 0);
    return;
}



undefined8 FUN_1405fa840(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong local_res8;
    uint local_28 [2];
    undefined8 *local_20;
    undefined local_18 [16];

    lVar4 = *(longlong *)(param_1 + 0x1a8);
    local_res8 = lVar4;
    if (*(longlong *)(lVar4 + 8) != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
        do {
            if (*(uint *)(lVar6 + 0x20) < *param_2) {
                lVar7 = *(longlong *)(lVar6 + 0x18);
            }
            else {
                lVar7 = *(longlong *)(lVar6 + 0x10);
                local_res8 = lVar6;
            }
            lVar6 = lVar7;
        } while (lVar7 != 0);
    }
    if ((local_res8 == lVar4) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if (local_res8 == *(longlong *)(param_1 + 0x1a8)) {
        puVar8 = (undefined8 *)FUN_14018b280();
        local_20 = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
            uVar1 = param_2[3];
            uVar2 = param_2[2];
            uVar3 = param_2[1];
            *puVar8 = 0;
            puVar8[1] = 0;
            *(uint *)(puVar8 + 2) = uVar2;
            *(uint *)(puVar8 + 3) = uVar1;
            *(uint *)((longlong)puVar8 + 0x14) = (uint)(uVar3 != 0);
            local_20 = puVar8;
        }
        local_28[0] = *param_2;
        FUN_140055f80(param_1 + 0x1a0,local_18,local_28);
    }
    else {
        plVar5 = *(longlong **)(local_res8 + 0x28);
        if ((longlong *)*plVar5 != (longlong *)0x0) {
            *(longlong *)*plVar5 = plVar5[1];
        }
        if ((longlong *)plVar5[1] != (longlong *)0x0) {
            *(longlong *)plVar5[1] = *plVar5;
        }
        *plVar5 = 0;
        plVar5[1] = 0;
    }
    FUN_1403eaa20();
    return 1;
}



void FUN_1405fa960(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1a8);
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
    lVar1 = local_res8;
    if (local_res8 != *(longlong *)(param_1 + 0x1a8)) {
        plVar2 = *(longlong **)(local_res8 + 0x28);
        if (plVar2 != (longlong *)0x0) {
            if ((longlong *)*plVar2 != (longlong *)0x0) {
                *(longlong *)*plVar2 = plVar2[1];
            }
            if ((longlong *)plVar2[1] != (longlong *)0x0) {
                *(longlong *)plVar2[1] = *plVar2;
            }
            *plVar2 = 0;
            plVar2[1] = 0;
            FUN_14018b900(plVar2,0);
        }
        local_res8 = lVar1;
        FUN_1405fb140(param_1 + 0x1a0,&local_res8);
    }
    return;
}



undefined8 FUN_1405faa20(undefined8 param_1,longlong param_2)

{
    undefined auVar1 [16];
    short *psVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined4 local_18 [2];
    undefined8 local_10;

    psVar2 = (short *)FUN_14034bdd0(param_1,*(undefined4 *)(param_2 + 0x10));
    if ((psVar2 != (short *)0x0) && (lVar4 = 0, *psVar2 != 0)) {
        do {
            lVar4 = lVar4 + 1;
        } while (psVar2[lVar4] != 0);
        if (lVar4 != 0) {
            lVar4 = 0;
            do {
                lVar5 = lVar4;
                lVar4 = lVar5 + 1;
            } while (psVar2[lVar4] != 0);
            uVar6 = lVar5 + 2;
            auVar1 = ZEXT816(2) * ZEXT816(uVar6);
            uVar3 = SUB168(auVar1,0);
            if (SUB168(auVar1 >> 0x40,0) != 0) {
                uVar3 = 0xffffffffffffffff;
            }
            uVar3 = FUN_14018b280(uVar3,0);
            FUN_1407db590(uVar3,psVar2,uVar6 * 2);
            local_18[0] = *(undefined4 *)(param_2 + 8);
            local_10 = 0;
            lVar4 = FUN_1404bc890(DAT_140c65898 + 0x7550,local_18);
            *(undefined8 *)(lVar4 + 8) = uVar3;
            if (*(int *)(param_2 + 0x10) != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SubZoneChanged",&DAT_1409ecb14,
                              *(int *)(param_2 + 0x10),psVar2);
            }
        }
    }
    return 1;
}



void FUN_1405fab30(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong **pplVar5;
    ulonglong uVar6;
    longlong **pplVar7;

    uVar1 = *(uint *)(param_2 + 8);
    pplVar7 = *(longlong ***)
            (*(longlong *)(DAT_140c65898 + 0x7560) +
             ((ulonglong)uVar1 %
              (ulonglong)
                      (*(longlong *)(DAT_140c65898 + 0x7568) - *(longlong *)(DAT_140c65898 + 0x7560) >> 3)) *
             8);
    if (pplVar7 != (longlong **)0x0) {
        do {
            if (*(uint *)(pplVar7 + 1) == uVar1) break;
            pplVar7 = (longlong **)*pplVar7;
        } while (pplVar7 != (longlong **)0x0);
        if ((pplVar7 != (longlong **)0x0) &&
            (plVar3 = (longlong *)FUN_14034bdd0(), plVar3 == pplVar7[2])) {
            FUN_14018b900();
            lVar4 = DAT_140c65898;
            uVar6 = (ulonglong)*(uint *)(pplVar7 + 1) %
                    (ulonglong)
                            (*(longlong *)(DAT_140c65898 + 0x7568) - *(longlong *)(DAT_140c65898 + 0x7560) >> 3);
            pplVar5 = *(longlong ***)(*(longlong *)(DAT_140c65898 + 0x7560) + uVar6 * 8);
            if (pplVar5 == pplVar7) {
                *(longlong **)(*(longlong *)(DAT_140c65898 + 0x7560) + uVar6 * 8) = *pplVar5;
                LAB_1405fac0d:
                FUN_14018b900(pplVar5,0);
                *(longlong *)(lVar4 + 0x7578) = *(longlong *)(lVar4 + 0x7578) + -1;
            }
            else {
                pplVar2 = pplVar5;
                for (pplVar5 = (longlong **)*pplVar5; pplVar5 != (longlong **)0x0;
                     pplVar5 = (longlong **)*pplVar5) {
                    if (pplVar5 == pplVar7) {
                        *pplVar2 = *pplVar5;
                        goto LAB_1405fac0d;
                    }
                    pplVar2 = pplVar5;
                }
            }
        }
    }
    lVar4 = FUN_14024db80(uVar1);
    if (((lVar4 != 0) && (lVar4 = FUN_14034bdd0(), uVar1 != 0)) && (lVar4 != 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SubZoneChanged",&DAT_1409ecb14,uVar1,
                      lVar4);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405fac80(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    int iVar7;
    longlong lVar8;
    longlong **pplVar9;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x38);
    local_res8 = lVar2;
    lVar8 = *(longlong *)(lVar2 + 8);
    while (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x20) < param_2) {
            lVar8 = *(longlong *)(lVar8 + 0x18);
        }
        else {
            local_res8 = lVar8;
            lVar8 = *(longlong *)(lVar8 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 != lVar2) {
        lVar2 = *(longlong *)(local_res8 + 0x28);
        pplVar3 = *(longlong ***)(lVar2 + 8);
        pplVar9 = (longlong **)*pplVar3;
        if (pplVar9 != pplVar3) {
            do {
                plVar4 = pplVar9[2];
                pplVar3 = (longlong **)*pplVar9;
                if (plVar4 != (longlong *)0x0) {
                    uVar1 = *(undefined4 *)(plVar4 + 5);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64fdc != 0) || (iVar7 = FUN_1401f3c40(), iVar7 < 0)) goto LAB_1405fadac;
                        lVar8 = (**(code **)(*DAT_140c64bb0 + 0x18))(DAT_140c64bb0,uVar1);
                    }
                    else {
                        lVar8 = (*DAT_140c63840)(&PTR_u_ClientEventAction_140a699f8,uVar1,DAT_140c63858);
                    }
                    if (lVar8 != 0) {
                        plVar5 = *pplVar9;
                        plVar6 = pplVar9[1];
                        *plVar6 = (longlong)plVar5;
                        plVar5[1] = (longlong)plVar6;
                        FUN_14018b900(pplVar9);
                        pplVar9 = pplVar3;
                        if (*(longlong **)(local_res8 + 0x30) == plVar4) {
                            *(undefined8 *)(local_res8 + 0x30) = 0;
                            FUN_1405fa640(param_1);
                        }
                    }
                }
                LAB_1405fadac:
            } while (pplVar9 != *(longlong ***)(lVar2 + 8));
        }
    }
    return;
}



void FUN_1405fade0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x18)) {
        do {
            FUN_1405faf00(param_1,param_2,lVar3 + 0x28,*(undefined8 *)(lVar3 + 0x28));
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
        } while (lVar3 != *(longlong *)(param_1 + 0x18));
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x38)) {
        do {
            FUN_1405faf00(param_1,param_2,lVar3 + 0x28,*(undefined8 *)(lVar3 + 0x28));
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
        } while (lVar3 != *(longlong *)(param_1 + 0x38));
    }
    return;
}



void FUN_1405faf00(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *)**(longlong **)(param_4 + 8);
    if (plVar4 != *(longlong **)(param_4 + 8)) {
        do {
            lVar1 = plVar4[2];
            plVar2 = (longlong *)*plVar4;
            plVar5 = plVar4;
            if (((lVar1 != 0) && (plVar5 = plVar2, *(int *)(lVar1 + 0x14) == 4)) &&
                (*(int *)(lVar1 + 0x18) == param_2)) {
                plVar3 = (longlong *)plVar4[1];
                *plVar3 = (longlong)plVar2;
                plVar2[1] = (longlong)plVar3;
                FUN_14018b900(plVar4,0);
                if (*(longlong *)(param_3 + 8) == lVar1) {
                    *(undefined8 *)(param_3 + 8) = 0;
                    FUN_1405fa640(param_1);
                }
            }
            plVar4 = plVar5;
        } while (plVar5 != *(longlong **)(param_4 + 8));
    }
    return;
}



int FUN_1405fafb0(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c65ba8 != 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x1c0,0);
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = FUN_1405f8e90(lVar2);
    }
    iVar1 = FUN_1405f9bb0(lVar2);
    if (iVar1 < 0) {
        if (lVar2 != 0) {
            FUN_1405f91b0(lVar2);
            FUN_14018b900(lVar2,0);
        }
        return iVar1;
    }
    DAT_140c65ba8 = lVar2;
    return 0;
}



char ** FUN_1405fb040(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1405fb09e;
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
    LAB_1405fb09e:
    ppcVar1 = (char **)FUN_1405fb240(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1405fb140(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8afc4,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405fb206. Too many branches
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



longlong *
FUN_1405fb240(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*(uint *)param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            *(undefined8 *)(lVar2 + 0x30) = param_5[2];
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
        lVar2 = FUN_14018b280(0x38);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            *(undefined8 *)(lVar2 + 0x30) = param_5[2];
        }
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



undefined8 FUN_1405fb670(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_1405a8a40(param_1,*param_2);
    if (lVar2 == 0) {
        return 0xa00b0001;
    }
    iVar1 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar2 + 8));
    if (*(longlong *)(lVar2 + 0x68) == 0) {
        FUN_1407241f0();
    }
    FUN_1405fbdc0(param_1,lVar2,param_2[1],param_2[2]);
    FUN_140551170(lVar2,*param_2,iVar1);
    if ((iVar1 != 5) || (param_2[1] != 5)) {
        FUN_14043c490();
        FUN_1405fccb0(*DAT_140c65b80);
        FUN_14043b4e0();
        if (DAT_140c7dc60 != 0) {
            FUN_140554970(lVar2,param_2[1]);
        }
    }
    FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0xa0,*param_2);
    if (DAT_140c65b78 != 0) {
        FUN_140575dd0();
    }
    if (param_2[1] == 1) {
        iVar1 = DAT_140c4df40;
        if (*DAT_140c63750 < DAT_140c4df40) {
            iVar1 = *DAT_140c63750;
        }
        if ((&DAT_140c4df50)[iVar1] != '\0') {
            FUN_140553890(lVar2,0xffffffff);
        }
    }
    if ((*(uint *)(*(longlong *)(lVar2 + 8) + 0xc) & 0x80000) == 0) {
        FUN_1404261e0(*(undefined8 *)(DAT_140c65898 + 0x7340),*param_2,param_2[1]);
        return 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ContractStateChanged",&DAT_1409e91d4,
                  *param_2,param_2[1]);
    return 0;
}



undefined8 FUN_1405fbba0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 8)) {
        do {
            FUN_1406117f0(lVar3 + 0x28);
            FUN_140611710(lVar3 + 0x28);
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
        } while (lVar3 != *(longlong *)(param_1 + 8));
    }
    return 0;
}



int FUN_1405fbc40(longlong param_1,uint param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    uint uVar7;
    longlong *plVar8;
    longlong local_res8;

    lVar5 = *(longlong *)(param_1 + 8);
    local_res8 = lVar5;
    lVar3 = *(longlong *)(lVar5 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar5) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar5;
    }
    if (local_res8 == lVar5) {
        for (puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 0x70) +
                 ((ulonglong)param_2 %
                  (ulonglong)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 3))
                 * 8); puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
            if (*(uint *)(puVar2 + 1) == param_2) {
                return 3;
            }
        }
        lVar5 = *(longlong *)(param_1 + 0x28);
        local_res8 = lVar5;
        lVar3 = *(longlong *)(lVar5 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar5) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar5;
        }
        if (local_res8 != lVar5) {
            return *(int *)(local_res8 + 0x24);
        }
        return 0;
    }
    iVar4 = *(int *)(local_res8 + 0x30);
    if (iVar4 == 1) {
        lVar5 = FUN_1405a8a40();
        if (lVar5 == 0) {
            return 1;
        }
        uVar1 = *(uint *)(lVar5 + 0x10);
        uVar6 = 0;
        if (uVar1 != 0) {
            plVar8 = (longlong *)(lVar5 + 0x18);
            if (uVar1 == 0) goto LAB_1405fbd9f;
            do {
                if ((*plVar8 != 0) && ((~(*(uint *)(*plVar8 + 8) >> 5) & 1) != 0)) {
                    if (5 < uVar6) {
                        return 1;
                    }
                    uVar7 = 1 << ((char)uVar6 + 2U & 0x1f);
                    if (uVar7 == 0) {
                        return 1;
                    }
                    if ((*(uint *)(local_res8 + 0x6c) & uVar7) == 0) {
                        return 1;
                    }
                }
                LAB_1405fbd9f:
                uVar6 = uVar6 + 1;
                plVar8 = plVar8 + 1;
            } while (uVar6 < uVar1);
        }
        iVar4 = 2;
    }
    return iVar4;
}



// WARNING: Removing unreachable block (ram,0x0001405fc0f5)
// WARNING: Removing unreachable block (ram,0x0001405fc100)
// WARNING: Removing unreachable block (ram,0x0001405fc10c)
// WARNING: Removing unreachable block (ram,0x0001405fc116)
// WARNING: Could not reconcile some variable overlaps

void FUN_1405fbdc0(longlong param_1,longlong param_2,uint param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong *plVar6;
    int iVar7;
    undefined8 uVar8;
    undefined4 *puVar9;
    undefined8 *puVar10;
    undefined auStack280 [32];
    undefined4 local_f8;
    undefined4 local_f0;
    undefined4 local_e8;
    longlong local_d8;
    uint local_d0 [2];
    undefined local_c8 [16];
    undefined8 local_b8;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined8 local_a8;
    undefined8 uStack160;
    undefined8 local_98;
    undefined8 uStack144;
    undefined8 local_88;
    undefined8 uStack128;
    undefined4 local_78;
    undefined8 uStack116;
    undefined8 uStack108;
    undefined8 uStack100;
    undefined4 uStack92;
    undefined4 uStack88;
    undefined4 local_54;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    uVar1 = **(uint **)(param_2 + 8);
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    local_d0[0] = uVar1;
    if ((*(uint *)(param_2 + 0x98) < 0x80000000) && (param_4 != 0)) {
        uVar8 = FUN_14022d0c0(param_4);
        *(undefined8 *)(param_2 + 0x18 + (longlong)*(int *)(param_2 + 0x98) * 8) = uVar8;
    }
    if (7 < param_3) goto LAB_1405fc5d5;
    switch(param_3) {
        case 0:
            lVar2 = *(longlong *)(param_1 + 8);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fd8c0(param_1,&local_d8);
            }
            lVar2 = *(longlong *)(param_1 + 0x28);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fda00(param_1 + 0x20,&local_d8);
            }
            lVar2 = *(longlong *)(param_1 + 0x48);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fda00(param_1 + 0x40,&local_d8);
            }
            break;
        case 1:
        case 2:
            if (*(int *)(*(longlong *)(param_2 + 8) + 0x1b4) != 0) {
                FUN_14048a0f0(IMAGE_DOS_HEADER_140000000.e_magic +
                              (&switchD_1405fbe5c::switchdataD_1405fc660)[(int)param_3],uVar1);
            }
            local_e8 = 1;
            local_f0 = 0;
            local_f8 = 0;
            if (param_3 == 2) {
                FUN_140437a10(DAT_140c658d8,0x40,0,0);
                if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xc) & 8) != 0) {
                    uVar8 = 0x42;
                    LAB_1405fbfe9:
                    local_e8 = 1;
                    local_f0 = 0;
                    local_f8 = 0;
                    FUN_140437a10(DAT_140c658d8,uVar8,0,0);
                }
            }
            else {
                FUN_140437a10(DAT_140c658d8,0x3f,0,0);
                if (*(longlong *)(param_1 + 0x10) != 0) {
                    uVar8 = 0x176;
                    goto LAB_1405fbfe9;
                }
            }
            lVar2 = *(longlong *)(param_1 + 8);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 == lVar2) {
                local_b8 = 0;
                local_78 = 0;
                uStack116 = 2;
                uStack108 = 0;
                local_a8 = 0;
                uStack160 = 0;
                local_98 = 0;
                uStack144 = 0;
                local_88 = 0;
                uStack128 = 0;
                uStack100 = 0;
                uStack92 = 0;
                uStack88 = 0;
                local_54 = 0;
                puVar9 = (undefined4 *)FUN_1405fd500(param_1,local_d0);
                *puVar9 = (undefined4)local_b8;
                puVar9[1] = local_b8._4_4_;
                puVar9[2] = uStack176;
                puVar9[3] = uStack172;
                puVar9[4] = (undefined4)local_a8;
                puVar9[5] = local_a8._4_4_;
                puVar9[6] = (undefined4)uStack160;
                puVar9[7] = uStack160._4_4_;
                puVar9[8] = (undefined4)local_98;
                puVar9[9] = local_98._4_4_;
                puVar9[10] = (undefined4)uStack144;
                puVar9[0xb] = uStack144._4_4_;
                puVar9[0xc] = (undefined4)local_88;
                puVar9[0xd] = local_88._4_4_;
                puVar9[0xe] = (undefined4)uStack128;
                puVar9[0xf] = uStack128._4_4_;
                puVar9[0x10] = local_78;
                puVar9[0x11] = (undefined4)uStack116;
                puVar9[0x12] = uStack116._4_4_;
                puVar9[0x13] = (undefined4)uStack108;
                puVar9[0x14] = uStack108._4_4_;
                puVar9[0x15] = (undefined4)uStack100;
                puVar9[0x16] = uStack100._4_4_;
                puVar9[0x17] = uStack92;
                *(ulonglong *)(puVar9 + 0x18) = CONCAT44(local_54,uStack88);
                uVar8 = FUN_1405fd500(param_1,local_d0);
                FUN_1406111a0(uVar8,param_2,param_3);
            }
            else {
                FUN_140611310(local_d8 + 0x28,param_3);
            }
            lVar2 = *(longlong *)(param_1 + 0x28);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fda00(param_1 + 0x20,&local_d8);
            }
            lVar2 = *(longlong *)(param_1 + 0x48);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fda00(param_1 + 0x40,&local_d8);
            }
            FUN_14043f470(param_1 + 0x60,local_d0);
            goto LAB_1405fc5d5;
        case 3:
            lVar2 = *(longlong *)(param_1 + 8);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fd8c0(param_1,&local_d8);
            }
            lVar2 = *(longlong *)(param_1 + 0x28);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fda00(param_1 + 0x20,&local_d8);
            }
            lVar2 = *(longlong *)(param_1 + 0x48);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fda00(param_1 + 0x40);
            }
            for (puVar4 = *(undefined8 **)
                    (*(longlong *)(param_1 + 0x70) +
                     ((ulonglong)uVar1 %
                      (ulonglong)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 3))
                     * 8); puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
                if (*(uint *)(puVar4 + 1) == uVar1) goto LAB_1405fc5b1;
            }
            FUN_14043f640(param_1 + 0x60);
            lVar2 = ((ulonglong)uVar1 %
                     (ulonglong)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 3)) * 8;
            puVar4 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0x70));
            for (puVar10 = puVar4; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
                if (*(uint *)(puVar10 + 1) == uVar1) goto LAB_1405fc561;
            }
            puVar10 = (undefined8 *)FUN_14018b280(0x10);
            *puVar10 = 0;
            if (puVar10 + 1 != (undefined8 *)0x0) {
                *(uint *)(puVar10 + 1) = uVar1;
            }
            *puVar10 = puVar4;
            *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0x70)) = puVar10;
            *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
        LAB_1405fc561:
            if (((*(int *)(*(longlong *)(param_2 + 8) + 0x1b4) == 0) &&
                 ((*(byte *)(*(longlong *)(param_2 + 8) + 0xc) & 0x20) == 0)) &&
                (iVar7 = FUN_1405534b0(param_2), 0 < iVar7)) {
                FUN_1405533c0(param_2);
                FUN_1404cf010();
            }
        LAB_1405fc5b1:
            if (*(int *)(*(longlong *)(param_2 + 8) + 0x1b4) != 0) {
                FUN_14048a1f0();
            }
            goto LAB_1405fc5d5;
        case 4:
            local_e8 = 1;
            local_f0 = 0;
            local_f8 = 0;
            FUN_140437a10(DAT_140c658d8,0x41,0,0);
        default:
            lVar2 = *(longlong *)(param_1 + 8);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 != lVar2) {
                FUN_1405fd8c0(param_1,&local_d8);
            }
            lVar2 = *(longlong *)(param_1 + 0x28);
            local_d8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_d8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                local_d8 = lVar2;
            }
            if (local_d8 == lVar2) {
                local_d8 = CONCAT44(param_3,uVar1);
                FUN_140032f50(param_1 + 0x20,local_c8,&local_d8);
            }
            else {
                *(uint *)(local_d8 + 0x24) = param_3;
            }
            if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xc) & 4) != 0) {
                lVar2 = *(longlong *)(param_1 + 0x48);
                local_d8 = lVar2;
                lVar3 = *(longlong *)(lVar2 + 8);
                while (lVar3 != 0) {
                    if (*(uint *)(lVar3 + 0x20) < uVar1) {
                        lVar3 = *(longlong *)(lVar3 + 0x18);
                    }
                    else {
                        local_d8 = lVar3;
                        lVar3 = *(longlong *)(lVar3 + 0x10);
                    }
                }
                if ((local_d8 == lVar2) || (uVar1 < *(uint *)(local_d8 + 0x20))) {
                    local_d8 = lVar2;
                }
                if (local_d8 == lVar2) {
                    local_d8 = CONCAT44(param_3,uVar1);
                    FUN_140032f50(param_1 + 0x40,local_c8,&local_d8);
                }
                else {
                    *(uint *)(local_d8 + 0x24) = param_3;
                }
            }
    }
    FUN_14043f470(param_1 + 0x60,local_d0);
    if (*(int *)(*(longlong *)(param_2 + 8) + 0x1b4) != 0) {
        FUN_14048a170();
    }
    LAB_1405fc5d5:
    FUN_140553410(param_2);
    FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0xa0,**(undefined4 **)(param_2 + 8));
    if (DAT_140c65b78 != 0) {
        FUN_140575dd0();
    }
    plVar5 = *(longlong **)(DAT_140c65920 + 8);
    while (plVar6 = plVar5, plVar6 != (longlong *)0x0) {
        plVar5 = (longlong *)plVar6[4];
        if (*(int *)(plVar6 + 7) == 1) {
            (**(code **)(*plVar6 + 8))();
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack280);
    return;
}



int FUN_1405fc680(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    iVar4 = 0;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 8)) {
        do {
            lVar2 = FUN_1405a8a40();
            if ((lVar2 != 0) && ((*(uint *)(*(longlong *)(lVar2 + 8) + 0xc) & 0x80000) == 0)) {
                iVar4 = iVar4 + 1;
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
        } while (lVar3 != *(longlong *)(param_1 + 8));
    }
    return iVar4;
}



undefined8 FUN_1405fc730(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;

    iVar5 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(param_1 + 8)) {
            return 0;
        }
        if (iVar5 == param_2) break;
        lVar4 = *(longlong *)(lVar2 + 0x18);
        iVar5 = iVar5 + 1;
        if (lVar4 == 0) {
            lVar4 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar4 + 0x18)) {
                do {
                    lVar2 = lVar4;
                    lVar4 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar4 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar4) {
                lVar2 = lVar4;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar2 = lVar4, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar4 = lVar1;
            }
        }
    }
    uVar3 = FUN_1405a8a40(*(longlong *)(lVar2 + 0x28),
                          **(undefined4 **)(*(longlong *)(lVar2 + 0x28) + 8));
    return uVar3;
}



longlong FUN_1405fc7b0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return local_res8 + 0x28;
}



undefined8 FUN_1405fc800(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = FUN_1405a8a40();
            if (lVar3 == 0) {
                return 0;
            }
            if ((((*(longlong *)(DAT_140c65898 + 0x6c50) == 0) ||
                  ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 1 & 1) == 0)) ||
                 ((*(uint *)(*(longlong *)(lVar3 + 8) + 0xc) & 0x40000) != 0)) &&
                (iVar2 = FUN_140553110(lVar3), iVar2 != 0)) {
                return 1;
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    return 0;
}



undefined8 FUN_1405fc900(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = FUN_1405a8a40();
            if (lVar3 == 0) {
                return 0;
            }
            if ((((*(longlong *)(DAT_140c65898 + 0x6c50) == 0) ||
                  ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 1 & 1) == 0)) ||
                 ((*(uint *)(*(longlong *)(lVar3 + 8) + 0xc) & 0x40000) != 0)) &&
                (iVar2 = FUN_140553230(lVar3), iVar2 != 0)) {
                return 1;
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    return 0;
}



void FUN_1405fca00(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x28);
    local_res8 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    uVar3 = 0;
    if (local_res8 != lVar2) {
        uVar3 = (uint)(*(int *)(local_res8 + 0x24) != 7);
    }
    if ((param_3 != uVar3) && (lVar2 = FUN_1405a8a40(uVar3,param_2), lVar2 != 0)) {
        FUN_1405fbdc0(param_1,lVar2,5);
        local_res8 = CONCAT44(param_3,param_2);
        FUN_1403f4900(DAT_140c65898,0x360,&local_res8);
    }
    return;
}



void FUN_1405fcad0(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x28);
    local_res8 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    uVar3 = 0;
    if (local_res8 != lVar2) {
        uVar3 = (uint)(*(int *)(local_res8 + 0x24) == 7);
    }
    if ((param_3 != uVar3) && (lVar2 = FUN_1405a8a40(uVar3,param_2), lVar2 != 0)) {
        local_res8 = CONCAT44(param_3,param_2);
        FUN_1403f4900(DAT_140c65898,0x35e,&local_res8);
    }
    return;
}



void FUN_1405fcb80(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    uint uVar3;
    longlong lVar4;
    uint uVar5;
    longlong local_res8;

    lVar4 = *(longlong *)(param_1 + 8);
    local_res8 = lVar4;
    lVar1 = *(longlong *)(lVar4 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if (local_res8 == lVar4) {
        return;
    }
    if (local_res8 == -0x28) {
        return;
    }
    uVar3 = *(uint *)(local_res8 + 0x6c);
    uVar5 = uVar3 & 2;
    if (uVar5 == param_3) {
        return;
    }
    if (param_3 == 0) {
        if (uVar5 == 0) goto LAB_1405fcc21;
        uVar3 = uVar3 & 0xfffffffd;
    }
    else {
        if (uVar5 != 0) goto LAB_1405fcc21;
        uVar3 = uVar3 | 2;
    }
    *(uint *)(local_res8 + 0x6c) = uVar3;
    *(undefined4 *)(local_res8 + 0x70) = 0;
    LAB_1405fcc21:
    local_res8 = CONCAT44(param_3,param_2);
    FUN_1403f4900(DAT_140c65898,0x364,&local_res8);
    uVar2 = *(undefined8 *)(DAT_140c65898 + 0x7340);
    lVar4 = FUN_1405a8a40();
    if (lVar4 != 0) {
        FUN_1400ea3e0(uVar2,"QuestTrackedChanged",&DAT_1409e9364,lVar4,param_3,
                      *(uint *)(*(longlong *)(lVar4 + 8) + 300) < 4);
    }
    return;
}



void FUN_1405fccb0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x48)) {
        do {
            lVar3 = FUN_1405a8a40();
            if (((*(byte *)(*(longlong *)(lVar3 + 8) + 0xc) & 4) == 0) ||
                (iVar2 = FUN_140552550(lVar3), iVar2 != 0)) {
                FUN_1405fca00(param_1,*(undefined4 *)(lVar4 + 0x20),0);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 0x48));
    }
    return;
}



longlong * FUN_1405fcd70(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    uint uVar11;
    ulonglong uVar12;
    uint uVar13;
    longlong lVar14;
    undefined4 uVar15;
    longlong local_res18;
    longlong local_res20;
    longlong local_58;
    longlong local_50 [2];

    lVar7 = *(longlong *)(param_1 + 8);
    local_res20 = *(longlong *)(lVar7 + 0x10);
    param_2[1] = 0;
    *param_2 = 0;
    if (local_res20 != lVar7) {
        do {
            plVar1 = (longlong *)(local_res20 + 0x28);
            lVar7 = FUN_1405a8a40();
            if (lVar7 != 0) {
                lVar14 = 0x170;
                local_res18 = 4;
                do {
                    if ((*(int *)(*(longlong *)(lVar7 + 8) + -0x10 + lVar14) != 0) &&
                        (*(int *)(*(longlong *)(lVar7 + 8) + lVar14) != 0)) {
                        iVar5 = FUN_1405fbc40();
                        if (iVar5 == 2) {
                            if ((*(byte *)(*(longlong *)(lVar7 + 8) + 0x10 + lVar14) & 0x40) != 0) {
                                LAB_1405fce45:
                                uVar6 = *(undefined4 *)(*(longlong *)(lVar7 + 8) + lVar14);
                                uVar15 = *(undefined4 *)(*(longlong *)(lVar7 + 8) + -0x10 + lVar14);
                                uVar2 = **(undefined4 **)(*plVar1 + 8);
                                lVar3 = param_2[1];
                                lVar8 = FUN_14018db00(*param_2,lVar3 + 1,0xc);
                                *(undefined4 *)(lVar8 + lVar3 * 0xc) = uVar15;
                                *(undefined4 *)(lVar8 + 4 + lVar3 * 0xc) = uVar6;
                                lVar10 = *param_2;
                                *(undefined4 *)(lVar8 + 8 + lVar3 * 0xc) = uVar2;
                                if (lVar10 != lVar8) {
                                    FUN_1407db590(lVar8,lVar10,param_2[1] * 0xc);
                                    if (lVar10 != 0) {
                                        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))();
                                    }
                                    *param_2 = lVar8;
                                }
                                param_2[1] = lVar3 + 1;
                            }
                        }
                        else {
                            uVar13 = 0;
                            if (*(int *)(lVar7 + 0x10) != 0) {
                                do {
                                    if ((((*(uint *)(lVar14 + 0x10 + *(longlong *)(lVar7 + 8)) >> (uVar13 & 0x1f) & 1)
                                          != 0) && (iVar5 = FUN_1405510d0(), iVar5 == 0)) &&
                                        (iVar5 = FUN_140553790(), iVar5 != 0)) goto LAB_1405fce45;
                                    uVar13 = uVar13 + 1;
                                } while (uVar13 < *(uint *)(lVar7 + 0x10));
                            }
                        }
                    }
                    lVar14 = lVar14 + 4;
                    local_res18 = local_res18 + -1;
                } while (local_res18 != 0);
                uVar12 = (ulonglong)*(uint *)(lVar7 + 0x10);
                while (uVar12 = uVar12 - 1, -1 < (longlong)uVar12) {
                    uVar13 = (uint)uVar12;
                    if (uVar13 <= *(uint *)(lVar7 + 0x10)) {
                        lVar14 = lVar7 + (uVar12 & 0xffffffff) * 8;
                        lVar3 = *(longlong *)(lVar14 + 0x18);
                        if (lVar3 != 0) {
                            if (uVar13 != *(uint *)(lVar7 + 0x10)) {
                                iVar5 = FUN_1405fbc40();
                                if (iVar5 != 3) {
                                    lVar10 = *(longlong *)(*DAT_140c65b80 + 8);
                                    lVar4 = lVar10;
                                    lVar8 = *(longlong *)(lVar10 + 8);
                                    while (lVar8 != 0) {
                                        if (*(uint *)(lVar8 + 0x20) < **(uint **)(lVar7 + 8)) {
                                            lVar8 = *(longlong *)(lVar8 + 0x18);
                                        }
                                        else {
                                            lVar4 = lVar8;
                                            lVar8 = *(longlong *)(lVar8 + 0x10);
                                        }
                                    }
                                    if ((lVar4 == lVar10) || (**(uint **)(lVar7 + 8) < *(uint *)(lVar4 + 0x20))) {
                                        local_50[0] = lVar10;
                                        plVar9 = local_50;
                                    }
                                    else {
                                        local_58 = lVar4;
                                        plVar9 = &local_58;
                                    }
                                    lVar8 = *plVar9;
                                    if (((lVar8 == lVar10) || (lVar8 == -0x28)) ||
                                        ((5 < uVar13 ||
                                          ((uVar11 = 1 << ((char)uVar12 + 2U & 0x1f), uVar11 == 0 ||
                                                                                      ((*(uint *)(lVar8 + 0x6c) & uVar11) == 0)))))) goto LAB_1405fd029;
                                }
                                if ((*(uint *)(lVar3 + 8) & 0x800) != 0) break;
                            }
                            LAB_1405fd029:
                            if ((((uVar13 < *(uint *)(lVar7 + 0x10)) && (*(longlong *)(lVar14 + 0x18) != 0)) &&
                                 (*(int *)(*(longlong *)(lVar14 + 0x18) + 4) == 0x20)) &&
                                (iVar5 = FUN_140550f70(lVar7,uVar12 & 0xffffffff,~(*(uint *)(lVar3 + 8) >> 8) & 1),
                                        iVar5 != 0)) {
                                uVar6 = FUN_1406113b0(plVar1,uVar12 & 0xffffffff);
                                if (uVar13 == *(uint *)(lVar7 + 0x10)) {
                                    uVar15 = 0;
                                }
                                else if (*(uint *)(lVar7 + 0x10) < uVar13) {
                                    uVar15 = 0;
                                }
                                else if (*(longlong *)(lVar14 + 0x18) == 0) {
                                    uVar15 = 0;
                                }
                                else {
                                    uVar15 = *(undefined4 *)(*(longlong *)(lVar14 + 0x18) + 0xc);
                                }
                                uVar2 = **(undefined4 **)(*plVar1 + 8);
                                lVar14 = param_2[1];
                                lVar10 = FUN_14018db00(*param_2);
                                *(undefined4 *)(lVar10 + lVar14 * 0xc) = uVar15;
                                lVar3 = *param_2;
                                *(undefined4 *)(lVar10 + 4 + lVar14 * 0xc) = uVar6;
                                *(undefined4 *)(lVar10 + 8 + lVar14 * 0xc) = uVar2;
                                if (lVar3 != lVar10) {
                                    FUN_1407db590();
                                    if (lVar3 != 0) {
                                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))();
                                    }
                                    *param_2 = lVar10;
                                }
                                param_2[1] = lVar14 + 1;
                            }
                        }
                    }
                }
            }
            lVar7 = *(longlong *)(local_res20 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(local_res20 + 8);
                if (local_res20 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        local_res20 = lVar7;
                        lVar7 = *(longlong *)(local_res20 + 8);
                    } while (local_res20 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(local_res20 + 0x18) != lVar7) {
                    local_res20 = lVar7;
                }
            }
            else {
                for (lVar14 = *(longlong *)(lVar7 + 0x10); local_res20 = lVar7, lVar14 != 0;
                     lVar14 = *(longlong *)(lVar14 + 0x10)) {
                    lVar7 = lVar14;
                }
            }
        } while (local_res20 != *(longlong *)(param_1 + 8));
    }
    return param_2;
}



undefined8 * FUN_1405fd1d0(longlong param_1,undefined8 *param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong local_res10;
    longlong local_res20;

    param_2[1] = 0;
    *param_2 = 0;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 8)) {
        do {
            lVar4 = FUN_1405a8a40();
            if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) &&
                ((*(uint *)(lVar4 + 0xc) & 0x80000) != 0)) {
                lVar1 = *(longlong *)(DAT_140c65930 + 0x10);
                lVar3 = lVar1;
                lVar2 = *(longlong *)(lVar1 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < *(uint *)(lVar4 + 0x1ac)) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar3 == lVar1) || (*(uint *)(lVar4 + 0x1ac) < *(uint *)(lVar3 + 0x20))) {
                    local_res20 = lVar1;
                    plVar5 = &local_res20;
                }
                else {
                    local_res10 = lVar3;
                    plVar5 = &local_res10;
                }
                if (((*plVar5 != lVar1) &&
                     (plVar5 = *(longlong **)(*plVar5 + 0x28), plVar5 != (longlong *)0x0)) &&
                    (*(int *)(*plVar5 + 0x14) == param_3)) {
                    FUN_140003460(param_2);
                }
            }
            lVar4 = *(longlong *)(lVar6 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar6 = lVar4;
                        lVar4 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar4) {
                    lVar6 = lVar4;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar6 = lVar4, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar4 = lVar1;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 8));
    }
    return param_2;
}



void FUN_1405fd320(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 local_res8 [2];

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = FUN_1405a8a40();
            if ((((lVar3 != 0) && ((*(undefined4 **)(lVar3 + 8))[5] == 3)) &&
                 (iVar2 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar3 + 8)), iVar2 != 2)) &&
                (iVar2 = FUN_140552930(), iVar2 != 0)) {
                local_res8[0] = **(undefined4 **)(lVar3 + 8);
                FUN_1403f4900(DAT_140c65898,0x35a,local_res8);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    return;
}



int FUN_1405fd420(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;

    iVar5 = 0;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = FUN_1405a8a40();
            if (((lVar3 != 0) && ((*(undefined4 **)(lVar3 + 8))[5] == 3)) &&
                (iVar2 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar3 + 8)), iVar2 != 2)) {
                iVar5 = iVar5 + 1;
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    return iVar5;
}



// WARNING: Removing unreachable block (ram,0x0001405fd620)
// WARNING: Removing unreachable block (ram,0x0001405fd63b)
// WARNING: Removing unreachable block (ram,0x0001405fd640)
// WARNING: Removing unreachable block (ram,0x0001405fd64c)
// WARNING: Removing unreachable block (ram,0x0001405fd656)
// WARNING: Removing unreachable block (ram,0x0001405fd65d)
// WARNING: Removing unreachable block (ram,0x0001405fd66a)
// WARNING: Removing unreachable block (ram,0x0001405fd670)
// WARNING: Removing unreachable block (ram,0x0001405fd67c)
// WARNING: Removing unreachable block (ram,0x0001405fd686)
// WARNING: Removing unreachable block (ram,0x0001405fd68d)

void FUN_1405fd500(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined auStack312 [32];
    undefined local_118 [8];
    longlong local_110;
    undefined8 local_108;
    undefined8 local_f8;
    undefined8 uStack240;
    undefined8 local_e8;
    undefined8 uStack224;
    undefined8 local_d8;
    undefined8 uStack208;
    undefined4 local_c8;
    undefined8 uStack196;
    undefined8 uStack188;
    undefined8 uStack180;
    undefined4 uStack172;
    undefined4 uStack168;
    undefined4 local_a4;
    uint local_98 [2];
    undefined4 local_90;
    undefined4 uStack140;
    undefined4 local_80;
    undefined4 uStack124;
    undefined4 uStack120;
    undefined4 uStack116;
    undefined4 local_70;
    undefined4 uStack108;
    undefined4 uStack104;
    undefined4 uStack100;
    undefined4 local_60;
    undefined4 uStack92;
    undefined4 uStack88;
    undefined4 uStack84;
    undefined4 local_50;
    undefined4 uStack76;
    undefined4 uStack72;
    undefined4 uStack68;
    undefined4 local_40;
    undefined4 uStack60;
    undefined4 uStack56;
    undefined4 uStack52;
    undefined8 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar3 + 0x20) < *param_2) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                lVar2 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
    }
    if ((lVar2 == lVar1) || (*param_2 < *(uint *)(lVar2 + 0x20))) {
        uStack172 = 0;
        uStack168 = 0;
        local_f8 = 0;
        uStack240 = 0;
        local_e8 = 0;
        uStack224 = 0;
        local_d8 = 0;
        local_80 = 0;
        uStack124 = 0;
        uStack120 = 0;
        uStack116 = 0;
        uStack208 = 0;
        uStack180 = 0;
        local_a4 = 0;
        local_98[0] = *param_2;
        uStack196 = 2;
        local_60 = 0;
        uStack92 = 0;
        uStack88 = 0;
        uStack84 = 0;
        uStack188 = 0;
        local_108 = 0;
        local_c8 = 0;
        local_90 = 0;
        uStack140 = 0;
        local_40 = 0;
        uStack60 = 0;
        uStack56 = 0;
        uStack52 = 0;
        local_70 = 0;
        uStack108 = 0;
        uStack104 = 0;
        uStack100 = 0;
        local_50 = 0;
        uStack76 = 2;
        uStack72 = 0;
        uStack68 = 0;
        local_30 = 0;
        local_110 = lVar2;
        FUN_1405fd6d0(param_1,local_118,&local_110,local_98);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack312);
    return;
}



longlong * FUN_1405fd6d0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_1405fd71e:
            plVar4 = (longlong *)FUN_1405fdbc0(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_1405fdd80(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_1405fdd80(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
                return param_2;
            }
            plVar4 = (longlong *)FUN_1405fdbc0(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
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
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_1405fd71e;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1405fdb00(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1405fdb00();
    return param_2;
}



void FUN_1405fd8c0(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar3 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar3) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8afc8,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405fd984. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar3 = FUN_140007db0(*param_2,lVar3 + 8,lVar3 + 0x10,lVar3 + 0x18);
        if ((*(longlong *)(lVar3 + 0x28) != 0) &&
            (uVar4 = 0, *(int *)(*(longlong *)(lVar3 + 0x28) + 0x10) != 0)) {
            do {
                puVar1 = *(undefined8 **)(lVar3 + 0x38 + (ulonglong)uVar4 * 8);
                if (puVar1 != (undefined8 *)0x0) {
                    (**(code **)*puVar1)(puVar1,1);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(*(longlong *)(lVar3 + 0x28) + 0x10));
        }
        FUN_14018b900(lVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_1405fda00(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8afcc,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405fdac6. Too many branches
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



longlong *
FUN_1405fdb00(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_1405fdd80();
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
        lVar2 = FUN_1405fdd80();
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



char ** FUN_1405fdbc0(longlong param_1,char **param_2,uint *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(uint *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_1405fdb00(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
                }
            }
            else {
                for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                     pcVar4 = *(char **)(pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    if (*(uint *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(uint *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1405fdd80(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1405fdd80(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



longlong FUN_1405fdd80(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x90,0);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined8 *)(lVar1 + 0x28) = param_2[1];
        *(undefined8 *)(lVar1 + 0x30) = param_2[2];
        *(undefined8 *)(lVar1 + 0x38) = param_2[3];
        *(undefined8 *)(lVar1 + 0x40) = param_2[4];
        *(undefined8 *)(lVar1 + 0x48) = param_2[5];
        *(undefined8 *)(lVar1 + 0x50) = param_2[6];
        *(undefined8 *)(lVar1 + 0x58) = param_2[7];
        *(undefined8 *)(lVar1 + 0x60) = param_2[8];
        *(undefined8 *)(lVar1 + 0x68) = param_2[9];
        *(undefined8 *)(lVar1 + 0x70) = param_2[10];
        *(undefined8 *)(lVar1 + 0x78) = param_2[0xb];
        *(undefined8 *)(lVar1 + 0x80) = param_2[0xc];
        *(undefined8 *)(lVar1 + 0x88) = param_2[0xd];
    }
    return lVar1;
}



longlong FUN_1405fde20(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x38);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar1 = (undefined *)FUN_14018b280(0x80,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x48) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    puVar1 = (undefined *)FUN_14018b280(0x38,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined **)(param_1 + 0x68) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    return param_1;
}



void FUN_1405fdf00(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14001a270(param_1 + 0x60,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
    FUN_140008410(param_1 + 0x40);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    FUN_140008410(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_14001a270(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405fdfd0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;

    if ((DAT_140dc3580 & 1) == 0) {
        DAT_140dc3580 = DAT_140dc3580 | 1;
        _DAT_140dc358c = 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x28)) {
        do {
            if ((*(longlong *)(DAT_140c65898 + 0x7258) == 0) ||
                (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 0)) {
                plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar6 + 0x2c));
                if (plVar4 != (longlong *)0x0) {
                    if (_DAT_140dc358c == 0) {
                        _DAT_140dc358c = 1;
                        lVar5 = FUN_140200220(0x453);
                        if (lVar5 == 0) {
                            DAT_140dc3588 = 0;
                        }
                        else {
                            DAT_140dc3588 = *(int *)(lVar5 + 4);
                        }
                    }
                    iVar2 = DAT_140dc3588;
                    iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
                    if (iVar2 <= iVar3) goto LAB_1405fe09a;
                }
            }
            else {
                LAB_1405fe09a:
                if ((*(longlong *)(lVar6 + 0x58) == 0) ||
                    ((*(byte *)(*(longlong *)(lVar6 + 0x58) + 8) & 1) == 0)) {
                    return 1;
                }
            }
            lVar5 = *(longlong *)(lVar6 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar6 = lVar5;
                        lVar5 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                    lVar6 = lVar5;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x28));
    }
    return 0;
}



void FUN_1405fe120(longlong param_1)

{
    FUN_140008410(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14001a270(param_1 + 0x60,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    FUN_140008410(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_14001a270(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    return;
}



void FUN_1405fe1c0(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x68)) {
        do {
            if (*(ulonglong *)(lVar5 + 0x30) != 0) {
                piVar3 = *(int **)(lVar5 + 0x28);
                uVar4 = 0;
                do {
                    if ((*piVar3 == *param_2) && (*(longlong *)(piVar3 + 2) == *(longlong *)(param_2 + 2))) {
                        lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
                        local_20 = lVar2 + 0x14e8;
                        if (*(longlong *)(lVar2 + 0x1538) == 0) {
                            local_28[0] = 0;
                            local_18 = FUN_1400a8020;
                            local_10 = 0;
                            FUN_140195960(lVar2 + 0x1528,0,local_28);
                        }
                        break;
                    }
                    uVar4 = uVar4 + 1;
                    piVar3 = piVar3 + 4;
                } while (uVar4 < *(ulonglong *)(lVar5 + 0x30));
            }
            lVar2 = *(longlong *)(lVar5 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar5 = lVar2;
                        lVar2 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar2) {
                    lVar5 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar5 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(param_1 + 0x68));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405fe2f0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    bool bVar3;
    bool bVar4;
    ulonglong uVar5;
    bool bVar6;
    bool bVar7;
    int iVar8;
    uint uVar9;
    ulonglong uVar10;
    uint *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    longlong *plVar14;
    ulonglong *puVar15;
    undefined8 *puVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    longlong lVar19;
    longlong lVar20;
    longlong lVar21;
    uint uVar22;
    ulonglong uVar23;
    ulonglong local_128;
    ulonglong local_120;
    ulonglong local_118;
    ulonglong local_110;
    ulonglong local_108;
    ulonglong local_100;
    uint local_f8 [2];
    longlong local_f0;
    code *local_e8;
    undefined8 local_e0;
    uint local_d8;
    uint uStack212;
    uint uStack208;
    uint uStack204;
    undefined8 local_c8;
    undefined8 uStack192;
    uint local_b8;
    uint uStack180;
    undefined8 uStack176;
    undefined8 local_a8;
    undefined8 uStack160;
    uint local_98;
    uint uStack148;
    uint uStack144;
    uint uStack140;
    undefined4 local_88;
    int iStack132;
    ulonglong local_78;
    ulonglong local_70;
    ulonglong local_68;
    ulonglong local_60;
    undefined local_58 [24];

    local_110 = 0;
    local_100 = 0;
    local_118 = 0;
    local_108 = 0;
    FUN_1407e4830(&local_d8,0);
    uVar10 = *(ulonglong *)(param_1 + 8);
    uStack212 = *param_2;
    bVar3 = false;
    bVar4 = false;
    local_120 = uVar10;
    uVar18 = *(ulonglong *)(uVar10 + 8);
    while (uVar18 != 0) {
        if (*(uint *)(uVar18 + 0x20) < uStack212) {
            uVar18 = *(ulonglong *)(uVar18 + 0x18);
        }
        else {
            local_120 = uVar18;
            uVar18 = *(ulonglong *)(uVar18 + 0x10);
        }
    }
    if ((local_120 == uVar10) || (uStack212 < *(uint *)(local_120 + 0x20))) {
        local_120 = uVar10;
    }
    uVar18 = 0;
    uVar23 = 0;
    if (local_120 != uVar10) {
        FUN_140003500(&local_108);
        local_110 = local_100;
        local_118 = local_108;
        uVar18 = local_108;
        uVar23 = local_100;
    }
    uVar10 = 0;
    local_120 = local_120 & 0xffffffff00000000;
    bVar6 = false;
    bVar7 = false;
    if (param_2[3] != 0) {
        do {
            bVar4 = bVar7;
            bVar3 = bVar6;
            uVar9 = *(uint *)(*(longlong *)(param_2 + 4) + uVar10 * 0x48);
            lVar1 = *(longlong *)(param_2 + 4) + uVar10 * 0x48;
            if (uVar9 != 0) {
                uStack192 = *(undefined8 *)(lVar1 + 0x28);
                uStack204 = *(uint *)(lVar1 + 4);
                iStack132 = *(int *)(lVar1 + 0x20) + DAT_140c636a8;
                uVar22 = *(uint *)(lVar1 + 8);
                local_b8 = *(uint *)(lVar1 + 0x30);
                local_128 = local_128 & 0xffffffff00000000 | (ulonglong)uVar9;
                uStack180 = *(uint *)(lVar1 + 0x34);
                uStack144 = *(uint *)(lVar1 + 0x1c);
                uStack140 = *(uint *)(lVar1 + 0x10);
                uStack148 = *(uint *)(lVar1 + 0xc);
                local_88 = *(undefined4 *)(lVar1 + 0x18);
                local_d8 = uVar9;
                uStack208 = uVar22;
                if (uStack204 == 0) {
                    local_c8 = FUN_1400b5df0(DAT_140c658f0,uVar22,0);
                }
                else {
                    local_c8 = 0;
                }
                local_98 = 0xf;
                if (*(int *)(lVar1 + 4) == 2) {
                    local_98 = uVar22;
                }
                if (*(int *)(lVar1 + 4) == 6) {
                    uVar2 = *(undefined4 *)(lVar1 + 8);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63b58 != 0) || (iVar8 = FUN_140248860(), iVar8 < 0)) goto LAB_1405fe4ea;
                        uStack176 = (**(code **)(*DAT_140c64810 + 0x18))(DAT_140c64810,uVar2);
                    }
                    else {
                        uStack176 = (*DAT_140c63840)(&PTR_u_VirtualItem_140a6dfc0,uVar2);
                    }
                }
                else {
                    LAB_1405fe4ea:
                    uStack176 = 0;
                }
                if (*(int *)(lVar1 + 4) == 7) {
                    uVar2 = *(undefined4 *)(lVar1 + 8);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63be8 != 0) || (iVar8 = FUN_1402118a0(), iVar8 < 0)) goto LAB_1405fe540;
                        local_a8 = (**(code **)(*DAT_140c64f00 + 0x18))(DAT_140c64f00,uVar2);
                    }
                    else {
                        local_a8 = (*DAT_140c63840)(&PTR_u_LootSpell_140a6b278,uVar2);
                    }
                }
                else {
                    LAB_1405fe540:
                    local_a8 = 0;
                }
                if (*(int *)(lVar1 + 4) == 8) {
                    uVar2 = *(undefined4 *)(lVar1 + 8);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64170 != 0) || (iVar8 = FUN_1401e89c0(), iVar8 < 0)) goto LAB_1405fe596;
                        uStack160 = (**(code **)(*DAT_140c652d0 + 0x18))(DAT_140c652d0,uVar2);
                    }
                    else {
                        uStack160 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8,uVar2);
                    }
                }
                else {
                    LAB_1405fe596:
                    uStack160 = 0;
                }
                if (uStack160 != 0) {
                    local_c8 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(uStack160 + 8),0);
                }
                uVar10 = 0;
                if (uVar23 != 0) {
                    do {
                        uVar5 = local_118;
                        uVar17 = local_110;
                        if (*(uint *)(uVar18 + uVar10 * 4) == uVar9) goto LAB_1405fe620;
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar23);
                }
                uVar17 = uVar23 + 1;
                uVar10 = FUN_14018db00(uVar18,uVar17,4);
                *(uint *)(uVar23 * 4 + uVar10) = uVar9;
                uVar5 = local_118;
                if ((uVar18 != uVar10) && (FUN_1407db590(uVar10,uVar18), uVar5 = uVar10, uVar18 != 0)) {
                    (**(code **)(*(longlong *)(uVar18 - 0x10) + 8))(uVar18 - 0x10);
                }
                LAB_1405fe620:
                local_110 = uVar17;
                local_118 = uVar5;
                puVar11 = (uint *)FUN_1405ff6a0(param_1 + 0x20,&local_128);
                *puVar11 = local_d8;
                puVar11[1] = uStack212;
                puVar11[2] = uStack208;
                puVar11[3] = uStack204;
                puVar11[4] = (uint)local_c8;
                puVar11[5] = local_c8._4_4_;
                puVar11[6] = (uint)uStack192;
                puVar11[7] = uStack192._4_4_;
                puVar11[8] = local_b8;
                puVar11[9] = uStack180;
                puVar11[10] = (uint)uStack176;
                puVar11[0xb] = uStack176._4_4_;
                puVar11[0xc] = (uint)local_a8;
                puVar11[0xd] = local_a8._4_4_;
                puVar11[0xe] = (uint)uStack160;
                puVar11[0xf] = uStack160._4_4_;
                puVar11[0x10] = local_98;
                puVar11[0x11] = uStack148;
                puVar11[0x12] = uStack144;
                puVar11[0x13] = uStack140;
                *(ulonglong *)(puVar11 + 0x14) = CONCAT44(iStack132,local_88);
                if (*(int *)(lVar1 + 0x14) == 0) {
                    uVar10 = *(ulonglong *)(param_1 + 0x48);
                    uVar23 = uVar10;
                    uVar18 = *(ulonglong *)(uVar10 + 8);
                    while (uVar18 != 0) {
                        if (*(uint *)(uVar18 + 0x20) < uVar9) {
                            uVar18 = *(ulonglong *)(uVar18 + 0x18);
                        }
                        else {
                            uVar23 = uVar18;
                            uVar18 = *(ulonglong *)(uVar18 + 0x10);
                        }
                    }
                    if ((uVar23 == uVar10) || (uVar9 < *(uint *)(uVar23 + 0x20))) {
                        local_78 = uVar10;
                        puVar15 = &local_78;
                    }
                    else {
                        local_70 = uVar23;
                        puVar15 = &local_70;
                    }
                    if (*puVar15 != uVar10) {
                        bVar3 = true;
                        local_128 = *puVar15;
                        FUN_1400efcd0(param_1 + 0x40,&local_128);
                    }
                }
                else {
                    FUN_1400293c0(param_1 + 0x40,local_58);
                    bVar3 = true;
                }
                if (*(int *)(lVar1 + 0x38) == 0) {
                    uVar10 = *(ulonglong *)(param_1 + 0x68);
                    uVar23 = uVar10;
                    uVar18 = *(ulonglong *)(uVar10 + 8);
                    while (uVar18 != 0) {
                        if (*(uint *)(uVar18 + 0x20) < uVar9) {
                            uVar18 = *(ulonglong *)(uVar18 + 0x18);
                        }
                        else {
                            uVar23 = uVar18;
                            uVar18 = *(ulonglong *)(uVar18 + 0x10);
                        }
                    }
                    if ((uVar23 == uVar10) || (uVar9 < *(uint *)(uVar23 + 0x20))) {
                        local_108 = uVar10;
                        puVar15 = &local_108;
                    }
                    else {
                        local_68 = uVar23;
                        puVar15 = &local_68;
                    }
                    if (*puVar15 != uVar10) {
                        bVar4 = true;
                        local_128 = *puVar15;
                        FUN_1405ffd90(param_1 + 0x60);
                    }
                }
                else {
                    lVar20 = 0;
                    uVar18 = 0;
                    bVar4 = true;
                    uVar10 = 0;
                    lVar21 = lVar20;
                    if (*(int *)(lVar1 + 0x38) != 0) {
                        do {
                            local_128 = uVar10 + 1;
                            puVar16 = (undefined8 *)(uVar18 * 0x10 + *(longlong *)(lVar1 + 0x40));
                            lVar12 = FUN_14018db00(lVar21,local_128,0x10);
                            lVar19 = uVar10 * 0x10;
                            *(undefined8 *)(lVar19 + lVar12) = *puVar16;
                            *(undefined8 *)(lVar19 + 8 + lVar12) = puVar16[1];
                            lVar20 = lVar21;
                            if ((lVar21 != lVar12) &&
                                (FUN_1407db590(lVar12,lVar21,lVar19), lVar20 = lVar12, lVar21 != 0)) {
                                (**(code **)(*(longlong *)(lVar21 + -0x10) + 8))(lVar21 + -0x10);
                            }
                            uVar22 = (int)uVar18 + 1;
                            uVar18 = (ulonglong)uVar22;
                            uVar10 = local_128;
                            lVar21 = lVar20;
                        } while (uVar22 < *(uint *)(lVar1 + 0x38));
                    }
                    uVar18 = *(ulonglong *)(param_1 + 0x68);
                    uVar17 = uVar18;
                    uVar23 = *(ulonglong *)(uVar18 + 8);
                    while (uVar23 != 0) {
                        if (*(uint *)(uVar23 + 0x20) < uVar9) {
                            uVar23 = *(ulonglong *)(uVar23 + 0x18);
                        }
                        else {
                            uVar17 = uVar23;
                            uVar23 = *(ulonglong *)(uVar23 + 0x10);
                        }
                    }
                    if ((uVar17 == uVar18) || (uVar9 < *(uint *)(uVar17 + 0x20))) {
                        local_e8 = (code *)0x0;
                        local_f0 = 0;
                        local_128 = uVar17;
                        local_f8[0] = uVar9;
                        FUN_1405ffb80(param_1 + 0x60,&local_60,&local_128,local_f8);
                        uVar17 = local_60;
                    }
                    if (uVar10 == 0) {
                        puVar16 = (undefined8 *)0x0;
                    }
                    else {
                        puVar13 = (undefined8 *)FUN_14018b280((uVar10 + 1) * 0x10,0);
                        if (puVar13 == (undefined8 *)0x0) {
                            puVar16 = (undefined8 *)&DAT_00000010;
                        }
                        else {
                            puVar13[1] = uVar10;
                            puVar16 = puVar13 + 2;
                            *puVar13 = &PTR_LAB_140b55060;
                        }
                    }
                    FUN_1407db590(puVar16);
                    lVar1 = *(longlong *)(uVar17 + 0x28);
                    if (lVar1 != 0) {
                        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                    }
                    *(ulonglong *)(uVar17 + 0x30) = uVar10;
                    *(undefined8 **)(uVar17 + 0x28) = puVar16;
                    if (lVar20 != 0) {
                        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                    }
                }
            }
            uVar9 = (int)local_120 + 1;
            uVar10 = (ulonglong)uVar9;
            local_120 = local_120 & 0xffffffff00000000 | (ulonglong)uVar9;
            uVar18 = local_118;
            uVar23 = local_110;
            bVar6 = bVar3;
            bVar7 = bVar4;
        } while (uVar9 < param_2[3]);
    }
    uVar18 = local_110;
    uVar10 = local_118;
    if (local_110 != 0) {
        plVar14 = (longlong *)FUN_140451280(param_1,param_2);
        puVar16 = (undefined8 *)FUN_14018b280(uVar18 * 4 + 0x10,0);
        uVar10 = local_118;
        if (puVar16 != (undefined8 *)0x0) {
            puVar16[1] = uVar18;
            *puVar16 = &PTR_LAB_140b55060;
        }
        FUN_1407db590(puVar16 + 2,local_118,uVar18 * 4);
        lVar1 = *plVar14;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        plVar14[1] = uVar18;
        *plVar14 = (longlong)(puVar16 + 2);
    }
    if (bVar3) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x7340);
        if (*(longlong *)(lVar1 + 0x14b0) == 0) {
            local_f8[0] = 0;
            local_e8 = FUN_1400a8020;
            local_e0 = 0;
            local_f0 = lVar1 + 0x1460;
            FUN_140195960(lVar1 + 0x14a0,0,local_f8,*(undefined4 *)(lVar1 + 0x1498));
        }
    }
    if (bVar4) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x7340);
        if (*(longlong *)(lVar1 + 0x1538) == 0) {
            local_f8[0] = 0;
            local_e8 = FUN_1400a8020;
            local_e0 = 0;
            local_f0 = lVar1 + 0x14e8;
            FUN_140195960(lVar1 + 0x1528,0,local_f8,*(undefined4 *)(lVar1 + 0x1520));
        }
    }
    if (uVar10 != 0) {
        (**(code **)(*(longlong *)(uVar10 - 0x10) + 8))(uVar10 - 0x10);
    }
    return 0;
}



ulonglong FUN_1405fefc0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    uint *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong local_res8;

    uVar3 = FUN_1405ff370();
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    lVar2 = local_res8;
    if (local_res8 != lVar1) {
        lVar1 = *(longlong *)(param_1 + 8);
        lVar7 = lVar1;
        if (*(longlong *)(lVar1 + 8) != 0) {
            lVar4 = *(longlong *)(lVar1 + 8);
            do {
                if (*(uint *)(lVar4 + 0x20) < *(uint *)(local_res8 + 0x2c)) {
                    lVar5 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar5 = *(longlong *)(lVar4 + 0x10);
                    lVar7 = lVar4;
                }
                lVar4 = lVar5;
            } while (lVar5 != 0);
        }
        if ((lVar7 == lVar1) ||
            (puVar6 = (uint *)(local_res8 + 0x2c), local_res8 = lVar7, *puVar6 < *(uint *)(lVar7 + 0x20))
                ) {
            local_res8 = lVar1;
        }
        lVar7 = local_res8;
        if (local_res8 != lVar1) {
            uVar8 = 0;
            if (*(ulonglong *)(local_res8 + 0x30) != 0) {
                puVar6 = *(uint **)(local_res8 + 0x28);
                do {
                    if (*puVar6 == param_2) {
                        FUN_1401c2f20(local_res8 + 0x28);
                        break;
                    }
                    uVar8 = uVar8 + 1;
                    puVar6 = puVar6 + 1;
                } while (uVar8 < *(ulonglong *)(local_res8 + 0x30));
            }
            if (*(longlong *)(lVar7 + 0x30) == 0) {
                local_res8 = lVar7;
                FUN_1405ffea0(param_1,&local_res8);
            }
        }
        local_res8 = lVar2;
        FUN_1405ffa80(param_1 + 0x20,&local_res8);
        uVar3 = uVar3 & 0xffffffff;
    }
    return uVar3;
}



undefined8 FUN_1405ff370(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong local_res8;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    uVar3 = 0;
    lVar1 = *(longlong *)(param_1 + 0x68);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != *(longlong *)(param_1 + 0x68)) {
        FUN_1405ffd90(param_1 + 0x60,&local_res8);
        lVar1 = *(longlong *)(DAT_140c65898 + 0x7340);
        if (*(longlong *)(lVar1 + 0x1538) == 0) {
            local_28[0] = 0;
            local_18 = FUN_1400a8020;
            local_10 = 0;
            local_20 = lVar1 + 0x14e8;
            FUN_140195960(lVar1 + 0x1528,0,local_28,*(undefined4 *)(lVar1 + 0x1520));
        }
        uVar3 = 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        FUN_1400efcd0(param_1 + 0x40,&local_res8);
        lVar1 = *(longlong *)(DAT_140c65898 + 0x7340);
        local_20 = lVar1 + 0x1460;
        if (*(longlong *)(lVar1 + 0x14b0) == 0) {
            local_28[0] = 0;
            local_18 = FUN_1400a8020;
            local_10 = 0;
            FUN_140195960(lVar1 + 0x14a0,0,local_28,*(undefined4 *)(lVar1 + 0x1498));
        }
        uVar3 = 1;
    }
    return uVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405ff500(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    uint *puVar6;
    longlong local_res8;
    uint local_78;
    uint uStack116;
    uint uStack112;
    uint uStack108;
    undefined8 local_68;
    undefined8 uStack96;
    uint local_58;
    uint uStack84;
    undefined8 uStack80;
    undefined8 local_48;
    undefined8 uStack64;
    uint local_38;
    uint uStack52;
    uint uStack48;
    uint uStack44;
    undefined8 local_28;

    lVar3 = *(longlong *)(param_1 + 0x28);
    local_res8 = lVar3;
    if (*(longlong *)(lVar3 + 8) != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
        do {
            if (*(uint *)(lVar4 + 0x20) < *param_2) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 == lVar3) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if (local_res8 != *(longlong *)(param_1 + 0x28)) {
        return;
    }
    FUN_1407e4830(&local_78,0,0x58);
    local_78 = *param_2;
    uVar1 = param_2[4];
    uVar2 = param_2[1];
    uStack96 = *(undefined8 *)(param_2 + 6);
    local_58 = param_2[8];
    uStack84 = param_2[9];
    uStack112 = uVar2;
    uStack108 = uVar1;
    if (uVar1 == 0) {
        local_68 = FUN_1400b5df0(DAT_140c658f0,uVar2,0);
    }
    else {
        local_68 = 0;
    }
    local_38 = 0xf;
    if (uVar1 == 2) {
        local_38 = uVar2;
    }
    if (uVar1 == 6) {
        uStack80 = FUN_140248ac0(uVar2);
        LAB_1405ff5f1:
        local_48 = 0;
        if (uVar1 == 8) {
            uStack64 = FUN_1401e8c20(uVar2);
            if (uStack64 != 0) {
                local_68 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(uStack64 + 8),0);
            }
            goto LAB_1405ff63a;
        }
    }
    else {
        uStack80 = 0;
        if (uVar1 != 7) goto LAB_1405ff5f1;
        local_48 = FUN_140211b00(uVar2);
    }
    uStack64 = 0;
    LAB_1405ff63a:
    puVar6 = (uint *)FUN_1405ff6a0(param_1 + 0x20,&local_78);
    *puVar6 = local_78;
    puVar6[1] = uStack116;
    puVar6[2] = uStack112;
    puVar6[3] = uStack108;
    puVar6[4] = (uint)local_68;
    puVar6[5] = local_68._4_4_;
    puVar6[6] = (uint)uStack96;
    puVar6[7] = uStack96._4_4_;
    puVar6[8] = local_58;
    puVar6[9] = uStack84;
    puVar6[10] = (uint)uStack80;
    puVar6[0xb] = uStack80._4_4_;
    puVar6[0xc] = (uint)local_48;
    puVar6[0xd] = local_48._4_4_;
    puVar6[0xe] = (uint)uStack64;
    puVar6[0xf] = uStack64._4_4_;
    puVar6[0x10] = local_38;
    puVar6[0x11] = uStack52;
    puVar6[0x12] = uStack48;
    puVar6[0x13] = uStack44;
    *(undefined8 *)(puVar6 + 0x14) = local_28;
    return;
}



longlong FUN_1405ff6a0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18 [2];
    undefined8 local_d8;
    undefined8 local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    uint local_80 [2];
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        FUN_1407e4830(&local_d8,0,0x58);
        local_80[0] = *param_2;
        local_78 = local_d8;
        local_70 = local_d0;
        local_68 = local_c8;
        local_60 = local_c0;
        local_58 = local_b8;
        local_50 = local_b0;
        local_48 = local_a8;
        local_40 = local_a0;
        local_38 = local_98;
        local_30 = local_90;
        local_28 = local_88;
        FUN_1405ff7a0(param_1,local_res18,&local_res8,local_80);
        local_res8 = local_res18[0];
    }
    return local_res8 + 0x28;
}



longlong * FUN_1405ff7a0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_1405ff7ee:
            plVar4 = (longlong *)FUN_140600070(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_140600500(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_140600500(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
                return param_2;
            }
            plVar4 = (longlong *)FUN_140600070(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
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
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_1405ff7ee;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1405fffb0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1405fffb0();
    return param_2;
}



longlong FUN_1405ff990(longlong param_1,uint *param_2)

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
            if (*param_2 < *(uint *)(lVar2 + 0x20)) {
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
                if (*(uint *)(lVar4 + 0x20) < *param_2) {
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
    FUN_140600230(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_1405ffa80(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8afd8,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405ffb46. Too many branches
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



longlong * FUN_1405ffb80(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_1405ffbda:
            plVar4 = (longlong *)FUN_140600400(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x38);
                    if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar5 + 0x20) = *param_4;
                        FUN_1403af180(lVar5 + 0x28,param_4 + 2);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_140600590(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_140600400(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
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
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_1405ffbda;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140600310(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140600310();
    return param_2;
}



void FUN_1405ffd90(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8afd0,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405ffe55. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        lVar1 = *(longlong *)(lVar3 + 0x28);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(lVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_1405ffea0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8afd4,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001405fff65. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        lVar1 = *(longlong *)(lVar3 + 0x28);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(lVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong *
FUN_1405fffb0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_140600500();
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
        lVar2 = FUN_140600500();
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

