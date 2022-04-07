//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14043c700(undefined8 param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    uint uVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;

    plVar5 = (longlong *)0x0;
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        return;
    }
    if (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) != 0) {
        return;
    }
    if (param_2 == 0) {
        if (((longlong **)*DAT_140c7cc78 == DAT_140c7cc78) || (DAT_140c7cd6c <= 0.0)) {
            lVar4 = *DAT_140c65b80;
            iVar2 = *(int *)(lVar4 + 0x10);
            plVar7 = plVar5;
            if (0 < iVar2) {
                do {
                    param_2 = FUN_1405fc730(lVar4,plVar7);
                    if (((param_2 != 0) && (iVar1 = FUN_1405fbc40(), iVar1 == 2)) &&
                        ((uVar6 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc), (uVar6 & 8) != 0 ||
                                                                               ((uVar6 >> 0x10 & 1) != 0)))) goto LAB_14043c7f2;
                    uVar6 = (int)plVar7 + 1;
                    plVar7 = (longlong *)(ulonglong)uVar6;
                } while ((int)uVar6 < iVar2);
            }
            if ((longlong **)*DAT_140c7cc78 == DAT_140c7cc78) {
                return;
            }
            iVar2 = *(int *)(*DAT_140c7cc78 + 3);
            iVar1 = *(int *)(*DAT_140c7cc78 + 8);
        }
        else {
            iVar2 = *(int *)(*DAT_140c7cc78 + 3);
            iVar1 = *(int *)(*DAT_140c7cc78 + 8);
        }
    }
    else {
        LAB_14043c7f2:
        iVar2 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(param_2 + 8));
        if (iVar2 == 2) {
            uVar6 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
            if (((uVar6 & 8) == 0) && ((uVar6 >> 0x10 & 1) == 0)) {
                return;
            }
            plVar7 = *(longlong **)(param_2 + 0x90);
            plVar9 = plVar5;
            if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                plVar9 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x118);
            }
            if (plVar9 == (longlong *)0x0) {
                return;
            }
            plVar8 = plVar5;
            if (plVar7 != (longlong *)0x0) {
                do {
                    lVar4 = FUN_1404835c0(DAT_140c65918,
                                          *(undefined4 *)
                                                  (*(longlong *)(param_2 + 0x88) + (longlong)plVar8 * 4));
                    if ((lVar4 != 0) && (iVar2 = (**(code **)(*plVar9 + 0x30))(plVar9), iVar2 != 0)) {
                        plVar5 = (longlong *)
                                         (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x88) + (longlong)plVar8 * 4);
                        break;
                    }
                    plVar8 = (longlong *)((longlong)plVar8 + 1);
                } while (plVar8 < plVar7);
            }
            iVar2 = (int)plVar5;
            iVar1 = **(int **)(param_2 + 8);
            if ((((*(int **)(param_2 + 8))[3] & 0x10000U) != 0) && (iVar3 = FUN_14043d1f0(), iVar3 == 0))
            {
                return;
            }
        }
        else {
            iVar2 = FUN_140552fd0(param_2);
            if (iVar2 == 0) {
                return;
            }
            plVar7 = *(longlong **)(param_2 + 0x80);
            iVar1 = **(int **)(param_2 + 8);
            plVar9 = plVar5;
            if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                plVar9 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x118);
            }
            if (plVar9 == (longlong *)0x0) {
                return;
            }
            plVar8 = plVar5;
            if (plVar7 != (longlong *)0x0) {
                do {
                    lVar4 = FUN_1404835c0(DAT_140c65918,
                                          *(undefined4 *)
                                                  (*(longlong *)(param_2 + 0x78) + (longlong)plVar8 * 4));
                    if ((lVar4 != 0) && (iVar2 = (**(code **)(*plVar9 + 0x30))(plVar9), iVar2 != 0)) {
                        plVar5 = (longlong *)
                                         (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x78) + (longlong)plVar8 * 4);
                        break;
                    }
                    plVar8 = (longlong *)((longlong)plVar8 + 1);
                } while (plVar8 < plVar7);
            }
            iVar2 = (int)plVar5;
            iVar3 = FUN_14043d650(&DAT_140c7cc70,iVar1,plVar5,1);
            if (iVar3 != 0) {
                return;
            }
        }
    }
    if ((((iVar2 != 0) || (iVar1 != 0)) &&
         ((DAT_140c7dc60 == 0 || ((DAT_140c7dc68 != iVar2 || (DAT_140c7dc74 != iVar1)))))) &&
        (FUN_140554580(), DAT_140c7dc68 != 0)) {
        DAT_140c7cd6c = 0.0;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Communicator_EndIncoming",&DAT_1409d0b07)
                ;
    }
    return;
}



undefined8 FUN_14043ca00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    longlong **pplVar2;
    longlong *plVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong **pplVar6;
    longlong lVar7;
    undefined8 extraout_XMM0_Qa;

    lVar7 = 0;
    pplVar2 = (longlong **)*DAT_140c7cc88;
    pplVar6 = pplVar2;
    if (pplVar2 != DAT_140c7cc88) {
        do {
            pplVar6 = (longlong **)*pplVar6;
            lVar7 = lVar7 + 1;
        } while (pplVar6 != DAT_140c7cc88);
        if (lVar7 != 0) {
            while( true ) {
                if (pplVar2 == DAT_140c7cc88) {
                    return 0x80004005;
                }
                if (*(int *)(pplVar2 + 2) == param_4) break;
                pplVar2 = (longlong **)*pplVar2;
            }
            iVar1 = *(int *)(pplVar2 + 9);
            if (iVar1 == 0) {
                return 0x80004005;
            }
            if (DAT_140c7cd78 == (longlong *)0x0) {
                uVar5 = FUN_1407129a0(&DAT_140c7cd78);
                if ((int)uVar5 < 0) {
                    return uVar5;
                }
                plVar3 = (longlong *)DAT_140c7cd78[2];
                if (plVar3 != (longlong *)0x0) {
                    uVar4 = FUN_1400518a0(DAT_140c63628,0x68,2);
                    (**(code **)(*plVar3 + 0x50))(extraout_XMM0_Qa,param_2,0x3f800000,plVar3,uVar4);
                }
                FUN_140712ce0(DAT_140c7cd78);
                (**(code **)*DAT_140c7cd78)();
                if (DAT_140c7cd78 != (longlong *)0x0) {
                    (**(code **)(*DAT_140c7cd78 + 8))();
                }
            }
            uVar5 = FUN_140712c00(DAT_140c7cd78,iVar1,FUN_14043cbd0,&DAT_140c7cc70);
            return uVar5;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14043cb30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 extraout_XMM0_Qa;

    if (DAT_140c7cd78 == (undefined8 *)0x0) {
        uVar3 = FUN_1407129a0(&DAT_140c7cd78);
        if ((int)uVar3 < 0) {
            return uVar3;
        }
        plVar1 = (longlong *)DAT_140c7cd78[2];
        if (plVar1 != (longlong *)0x0) {
            uVar2 = FUN_1400518a0(DAT_140c63628,0x68,2);
            (**(code **)(*plVar1 + 0x50))(extraout_XMM0_Qa,param_2,0x3f800000,plVar1,uVar2);
        }
        FUN_140712ce0(DAT_140c7cd78);
    }
    (**(code **)*DAT_140c7cd78)();
    *param_3 = DAT_140c7cd78;
    return 0;
}



void FUN_14043cbd0(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Communicator_SpamVOEnded",L"");
    if (DAT_140c65a28 != 0) {
        FUN_1404cf930();
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14043cc10(undefined4 *param_1,undefined4 *param_2)

{
    ulonglong uVar1;
    short sVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong *plVar7;
    longlong *plVar8;
    short *psVar9;
    undefined4 *puVar10;
    int iVar11;
    longlong *plVar12;
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
    iVar11 = 0;
    *param_2 = 0;
    param_2[1] = *param_1;
    param_2[2] = param_1[4];
    uVar3 = param_1[0x15];
    param_2[0xd] = 0;
    param_2[0xc] = uVar3;
    param_2[0xf] = 0;
    lVar5 = FUN_140211280();
    if ((lVar5 != 0) &&
        ((((*(uint *)(lVar5 + 0x18) & *(uint *)(DAT_140c63628 + 0x5f4)) == 0 ||
           (*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (iVar11 = *(int *)(lVar5 + 8), iVar11 == 0)))) {
        iVar11 = *(int *)(lVar5 + 4);
    }
    param_2[0xe] = iVar11;
    param_2[0x11] = 0;
    param_2[0x10] = param_1[0x17];
    param_2[0x12] = param_1[0x1b];
    param_2[0x13] = param_1[0x19];
    param_2[0x14] = param_1[0x1a];
    FUN_1400b6f30(&local_108);
    local_38 = (undefined2 *)0x0;
    local_48 = ZEXT816(0);
    local_108 = &PTR_FUN_140b69230;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    local_38 = puVar6 + 8;
    local_48 = CONCAT88(puVar6,puVar6);
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    lVar5 = FUN_14018b280(0x58);
    plVar7 = plVar12;
    if (lVar5 != 0) {
        plVar7 = (longlong *)FUN_1404dc400(lVar5,param_1[4]);
    }
    local_120 = 0;
    local_118 = (undefined2 *)0x0;
    local_110 = 0;
    plVar8 = plVar12;
    do {
        plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar8 * 2) != 0);
    lVar5 = (longlong)plVar8 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_118 = (undefined2 *)FUN_14018b280(lVar4,0);
        local_110 = lVar4 + (longlong)local_118;
    }
    lVar4 = (longlong)local_118;
    lVar5 = lVar5 * 2;
    local_120 = (longlong)local_118;
    FUN_1407db590(local_118,&DAT_140b0a7c8,lVar5);
    local_118 = (undefined2 *)(lVar5 + lVar4);
    if (local_118 != (undefined2 *)0x0) {
        *local_118 = 0;
    }
    FUN_1400b7480(&local_108,plVar7);
    (**(code **)(*plVar7 + 0x48))(plVar7,local_128);
    if (local_120 != 0) {
        FUN_14018b900(local_120,0);
    }
    lVar5 = FUN_14018b280(0x60);
    plVar7 = plVar12;
    if (lVar5 != 0) {
        plVar7 = (longlong *)FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
    }
    local_120 = 0;
    local_118 = (undefined2 *)0x0;
    local_110 = 0;
    plVar8 = plVar12;
    do {
        plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (L"target"[(longlong)plVar8] != L'\0');
    lVar5 = (longlong)plVar8 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_118 = (undefined2 *)FUN_14018b280(lVar4,0);
        local_110 = (longlong)local_118 + lVar4;
    }
    lVar4 = (longlong)local_118;
    lVar5 = lVar5 * 2;
    local_120 = (longlong)local_118;
    FUN_1407db590(local_118,L"target",lVar5);
    local_118 = (undefined2 *)(lVar4 + lVar5);
    if (local_118 != (undefined2 *)0x0) {
        *local_118 = 0;
    }
    FUN_1400b7480(&local_108,plVar7);
    (**(code **)(*plVar7 + 0x48))(plVar7,local_128);
    if (local_120 != 0) {
        FUN_14018b900(local_120,0);
    }
    psVar9 = (short *)FUN_14034bdd0();
    if (psVar9 == (short *)0x0) {
        if (local_f8 != local_f0) {
            *local_f8 = 0;
            local_f0 = local_f8;
        }
    }
    else {
        sVar2 = *psVar9;
        while (sVar2 != 0) {
            plVar12 = (longlong *)((longlong)plVar12 + 1);
            sVar2 = psVar9[(longlong)plVar12];
        }
        FUN_14001c480(local_100,psVar9,psVar9 + (longlong)plVar12);
    }
    puVar10 = (undefined4 *)FUN_1400b7660(&local_108);
    if (puVar10 != param_2 + 4) {
        FUN_14001c480(param_2 + 4,*(undefined8 *)(puVar10 + 2),*(undefined8 *)(puVar10 + 4));
    }
    if (local_48._0_8_ != 0) {
        FUN_14018b900(local_48._0_8_,0);
    }
    FUN_1400b7390(&local_108);
    return;
}



longlong FUN_14043cf90(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong **pplVar2;
    longlong **pplVar3;

    if (param_2 == 0) {
        return 0;
    }
    pplVar3 = (longlong **)*DAT_140c7cc88;
    pplVar2 = DAT_140c7cc88;
    if (pplVar3 != DAT_140c7cc88) {
        do {
            if (param_2 == *(int *)(pplVar3 + 2)) {
                if (*(int *)((longlong)pplVar3 + 0x14) == 0) {
                    return 0;
                }
                lVar1 = FUN_1401f4fa0();
                pplVar2 = DAT_140c7cc88;
                if (lVar1 != 0) {
                    return lVar1;
                }
            }
            pplVar3 = (longlong **)*pplVar3;
        } while (pplVar3 != pplVar2);
    }
    return 0;
}



longlong FUN_14043cff0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong **pplVar2;
    longlong **pplVar3;

    if (param_2 == 0) {
        return 0;
    }
    pplVar3 = (longlong **)*DAT_140c7cc78;
    pplVar2 = DAT_140c7cc78;
    if (pplVar3 != DAT_140c7cc78) {
        do {
            if (((param_2 == *(int *)(pplVar3 + 8)) && (*(int *)((longlong)pplVar3 + 0x14) != 0)) &&
                (lVar1 = FUN_1401f4fa0(), pplVar2 = DAT_140c7cc78, lVar1 != 0)) {
                return lVar1;
            }
            pplVar3 = (longlong **)*pplVar3;
        } while (pplVar3 != pplVar2);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14043d050(undefined8 param_1,uint param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    int *piVar9;
    code *pcVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong local_res8;

    lVar4 = *(longlong *)(DAT_140c7cd18 + 8);
    local_res8 = DAT_140c7cd18;
    if (*(longlong *)(DAT_140c7cd18 + 8) != 0) {
        do {
            if (*(uint *)(lVar4 + 0x20) < param_2) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
        if ((local_res8 != DAT_140c7cd18) && (*(uint *)(local_res8 + 0x20) <= param_2))
            goto LAB_14043d09f;
    }
    local_res8 = DAT_140c7cd18;
    LAB_14043d09f:
    if ((local_res8 == DAT_140c7cd18) || (*(longlong *)(local_res8 + 0x28) == 0)) {
        return 0;
    }
    plVar2 = *(longlong **)(*(longlong *)(local_res8 + 0x28) + 8);
    plVar8 = (longlong *)*plVar2;
    uVar11 = 0;
    uVar7 = uVar11;
    pcVar10 = DAT_140c63840;
    if (plVar8 != plVar2) {
        do {
            uVar1 = *(undefined4 *)(plVar8 + 2);
            if (pcVar10 == (code *)0x0) {
                if ((_DAT_140c64e70 == 0) && (iVar3 = FUN_1401f4d40(), pcVar10 = DAT_140c63840, -1 < iVar3))
                {
                    uVar6 = (**(code **)(*DAT_140c64b78 + 0x18))(DAT_140c64b78,uVar1);
                    goto LAB_14043d142;
                }
            }
            else {
                uVar6 = (*pcVar10)(&PTR_u_CommunicatorMessages_140a69ad8);
                LAB_14043d142:
                pcVar10 = DAT_140c63840;
                if (uVar6 != 0) {
                    piVar9 = (int *)(uVar6 + 0x30);
                    uVar12 = uVar11;
                    do {
                        if (((piVar9[-3] == param_2) && (*piVar9 == 2)) &&
                            ((*(int *)(uVar6 + 0x58) == 0 ||
                              (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar3 != 0)))) {
                            if (*(uint *)(uVar6 + 0x54) == param_2) {
                                return uVar6;
                            }
                            if (uVar7 == 0) {
                                uVar7 = uVar6;
                            }
                        }
                        uVar12 = uVar12 + 1;
                        piVar9 = piVar9 + 1;
                        pcVar10 = DAT_140c63840;
                    } while (uVar12 < 3);
                }
            }
            plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)*(longlong *)(*(longlong *)(local_res8 + 0x28) + 8));
    }
    return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_14043d1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    longlong **pplVar5;
    int iVar6;
    longlong lVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    longlong lVar10;
    code *pcVar11;
    bool bVar12;
    longlong local_res8;

    lVar10 = *(longlong *)(DAT_140c7cd38 + 8);
    local_res8 = DAT_140c7cd38;
    if (*(longlong *)(DAT_140c7cd38 + 8) != 0) {
        do {
            if (*(uint *)(lVar10 + 0x20) < (uint)param_2) {
                lVar7 = *(longlong *)(lVar10 + 0x18);
            }
            else {
                lVar7 = *(longlong *)(lVar10 + 0x10);
                local_res8 = lVar10;
            }
            lVar10 = lVar7;
        } while (lVar7 != 0);
        if ((local_res8 != DAT_140c7cd38) && (*(uint *)(local_res8 + 0x20) <= (uint)param_2))
            goto LAB_14043d23b;
    }
    local_res8 = DAT_140c7cd38;
    LAB_14043d23b:
    if (local_res8 == DAT_140c7cd38) {
        return false;
    }
    if (param_4 == 0) {
        iVar6 = FUN_14043d650(&DAT_140c7cc70,param_2,param_3,1);
        return iVar6 == 0;
    }
    lVar10 = *(longlong *)(local_res8 + 0x28);
    pplVar8 = (longlong **)FUN_14018b280();
    *pplVar8 = (longlong *)pplVar8;
    pplVar8[1] = (longlong *)pplVar8;
    puVar2 = *(undefined8 **)(lVar10 + 8);
    plVar4 = *pplVar8;
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
        pplVar9 = (longlong **)FUN_14018b280();
        if (pplVar9 + 2 != (longlong **)0x0) {
            *(undefined4 *)(pplVar9 + 2) = *(undefined4 *)(puVar3 + 2);
        }
        *pplVar9 = plVar4;
        pplVar9[1] = (longlong *)plVar4[1];
        *(longlong ***)plVar4[1] = pplVar9;
        plVar4[1] = (longlong)pplVar9;
    }
    pplVar9 = (longlong **)*pplVar8;
    pcVar11 = DAT_140c63840;
    do {
        if (pplVar9 == pplVar8) {
            bVar12 = false;
            LAB_14043d34c:
            pplVar9 = (longlong **)*pplVar8;
            while (pplVar9 != pplVar8) {
                pplVar5 = (longlong **)*pplVar9;
                FUN_14018b900(pplVar9,0);
                pplVar9 = pplVar5;
            }
            *pplVar8 = (longlong *)pplVar8;
            pplVar8[1] = (longlong *)pplVar8;
            FUN_14018b900(pplVar8,0);
            return bVar12;
        }
        uVar1 = *(undefined4 *)(pplVar9 + 2);
        if (pcVar11 == (code *)0x0) {
            if ((_DAT_140c64e70 == 0) && (iVar6 = FUN_1401f4d40(), pcVar11 = DAT_140c63840, -1 < iVar6)) {
                lVar10 = (**(code **)(*DAT_140c64b78 + 0x18))(DAT_140c64b78,uVar1);
                goto LAB_14043d31d;
            }
        }
        else {
            lVar10 = (*pcVar11)(&PTR_u_CommunicatorMessages_140a69ad8,uVar1,DAT_140c63858);
            LAB_14043d31d:
            pcVar11 = DAT_140c63840;
            if (((lVar10 != 0) && ((*(byte *)(lVar10 + 0xc) & 1) == 0)) &&
                (iVar6 = FUN_14043d3d0(&DAT_140c7cc70), pcVar11 = DAT_140c63840, iVar6 == 0)) {
                bVar12 = true;
                goto LAB_14043d34c;
            }
        }
        pplVar9 = (longlong **)*pplVar9;
    } while( true );
}



undefined8 FUN_14043d3d0(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    float fVar7;

    if (param_2 == 0) {
        return 1;
    }
    if ((*(int *)(param_2 + 0x14) != 0) &&
        (iVar3 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(),
                *(int *)(param_2 + 0x14) != iVar3)) {
        return 2;
    }
    if ((*(int *)(param_2 + 0x18) != 0) && (iVar3 = FUN_14043d7e0(), iVar3 == 0)) {
        return 3;
    }
    lVar5 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar5 == 0) {
        return 4;
    }
    if ((*(int *)(param_2 + 0x40) != 0) && (*(int *)(lVar5 + 0xdc) != *(int *)(param_2 + 0x40))) {
        return 5;
    }
    if ((*(int *)(param_2 + 0x44) != 0) && (*(int *)(lVar5 + 0xd8) != *(int *)(param_2 + 0x44))) {
        return 6;
    }
    if ((*(int *)(param_2 + 0x3c) != 0) &&
        ((*(longlong **)(lVar5 + 0x110) == (longlong *)0x0 ||
          (iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x110) + 0x18))(),
                  iVar3 != *(int *)(param_2 + 0x3c))))) {
        return 7;
    }
    if (*(int *)(param_2 + 0x48) != 0) {
        if (*(longlong **)(lVar5 + 0x110) != (longlong *)0x0) {
            fVar7 = (float)(**(code **)(**(longlong **)(lVar5 + 0x110) + 0x20))();
            if (((*(uint *)(param_2 + 0x4c) == 0) ||
                 ((float)(ulonglong)*(uint *)(param_2 + 0x4c) <= fVar7)) &&
                ((*(uint *)(param_2 + 0x50) == 0 || (fVar7 <= (float)(ulonglong)*(uint *)(param_2 + 0x50)))
                )) goto LAB_14043d53b;
        }
        return 8;
    }
    LAB_14043d53b:
    uVar1 = *(uint *)(param_2 + 0x20);
    if ((uVar1 != 0) && (uVar1 <= *(uint *)(lVar5 + 0x38) && *(uint *)(lVar5 + 0x38) != uVar1)) {
        return 10;
    }
    if ((*(uint *)(param_2 + 0x1c) != 0) && (*(uint *)(lVar5 + 0x38) < *(uint *)(param_2 + 0x1c))) {
        return 9;
    }
    puVar6 = (undefined4 *)(param_2 + 0x24);
    lVar5 = 0;
    do {
        iVar3 = FUN_14043d870(*puVar6,puVar6[3]);
        if (iVar3 == 0) {
            return 0xb;
        }
        lVar5 = lVar5 + 1;
        puVar6 = puVar6 + 1;
    } while (lVar5 < 3);
    if ((*(int *)(param_2 + 0x58) == 0) ||
        (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,0,*(int *)(param_2 + 0x58),0,0,0),
                iVar3 != 0)) {
        if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x54) != 0)) {
            for (puVar2 = (undefined8 *)*DAT_140c7cd58; puVar2 != DAT_140c7cd58;
                 puVar2 = (undefined8 *)*puVar2) {
                if ((*(longlong *)(puVar2[2] + 0x10) != 0) && (*(longlong *)(puVar2[2] + 0x38) == param_2))
                {
                    return 0xd;
                }
            }
        }
        uVar4 = FUN_14043d650(param_1,*(undefined4 *)(param_2 + 0x54),*(undefined4 *)(param_2 + 0x10),0)
                ;
    }
    else {
        uVar4 = 0xc;
    }
    return uVar4;
}



undefined8 FUN_14043d650(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    int *piVar4;

    lVar2 = FUN_1405a8a40();
    if (lVar2 == 0) {
        return 0;
    }
    if (param_4 == 0) {
        iVar1 = FUN_140552fd0(lVar2);
        if (iVar1 == 0) {
            if (*(int *)(param_1 + 0xf4) != 0) goto LAB_14043d6bf;
        }
        else if (*(int *)(param_1 + 0xf4) != 0) {
            return 0xe;
        }
        if ((iVar1 != 0) && (iVar1 = FUN_14054f3a0(lVar2), iVar1 == 0)) {
            return 0xe;
        }
    }
    LAB_14043d6bf:
    iVar1 = FUN_140552f50(lVar2);
    if (iVar1 != 0) {
        if (((*(undefined4 **)(lVar2 + 8))[3] & 0x10000) == 0) {
            return 0xf;
        }
        uVar3 = 0;
        if (*(ulonglong *)(lVar2 + 0x90) != 0) {
            piVar4 = *(int **)(lVar2 + 0x88);
            do {
                if (*piVar4 == param_3) {
                    iVar1 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar2 + 8));
                    if (iVar1 != 1) {
                        return 0;
                    }
                    return 0x11;
                }
                uVar3 = uVar3 + 1;
                piVar4 = piVar4 + 1;
            } while (uVar3 < *(ulonglong *)(lVar2 + 0x90));
        }
        return 0x10;
    }
    uVar3 = 0;
    if (*(ulonglong *)(lVar2 + 0x80) != 0) {
        piVar4 = *(int **)(lVar2 + 0x78);
        do {
            if (*piVar4 == param_3) {
                if (((*(byte *)(*(longlong *)(lVar2 + 8) + 0xc) & 4) != 0) &&
                    (iVar1 = FUN_140552550(lVar2,0xfffffdff), iVar1 == 0)) {
                    return 0;
                }
                return 0x12;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 1;
        } while (uVar3 < *(ulonglong *)(lVar2 + 0x80));
    }
    return 0x13;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14043d7e0(int param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;

    iVar3 = *(int *)(DAT_140c65898 + 0x74ec);
    if (iVar3 == 0) {
        return 0;
    }
    do {
        if (param_1 == iVar3) {
            return 1;
        }
        if (DAT_140c63840 == (code *)0x0) {
            if (_DAT_140c64634 != 0) {
                return 0;
            }
            iVar1 = FUN_14024d920();
            if (iVar1 < 0) {
                return 0;
            }
            lVar2 = (**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,iVar3);
        }
        else {
            lVar2 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar3,DAT_140c63858);
        }
        if (lVar2 == 0) {
            return 0;
        }
        iVar3 = *(int *)(lVar2 + 8);
    } while (iVar3 != 0);
    return 0;
}



ulonglong FUN_14043d870(ulonglong param_1,uint param_2)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    bool bVar8;
    longlong local_res18;

    if ((int)param_1 == 0) {
        return 1;
    }
    lVar6 = FUN_1405a8a40(param_1,param_1 & 0xffffffff);
    if (lVar6 == 0) {
        return 0;
    }
    uVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar6 + 8));
    puVar1 = *(uint **)(lVar6 + 8);
    if (uVar4 - 5 < 3) {
        uVar4 = 0;
    }
    lVar2 = *(longlong *)(*DAT_140c65b80 + 8);
    local_res18 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < *puVar1) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res18 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res18 == lVar2) || (*puVar1 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar2;
    }
    if ((local_res18 != lVar2) && (local_res18 != -0x28)) {
        if (param_2 - 5 < 6) {
            uVar7 = FUN_1405510d0(lVar6);
            return uVar7;
        }
        if (param_2 - 0xe < 6) {
            iVar5 = FUN_1405510d0(lVar6);
            bVar8 = iVar5 == 0;
            goto LAB_14043d9eb;
        }
    }
    if (param_2 == 0xb) {
        if ((uVar4 & 0xfffffffb) != 0) {
            if (uVar4 != 3) {
                return 0;
            }
            if (((*(byte *)(puVar1 + 3) & 0x20) == 0) && (puVar1[0x6d] == 0)) {
                return 0;
            }
        }
        return 1;
    }
    if (param_2 == 0xc) {
        return (ulonglong)(uVar4 - 1 < 2);
    }
    if (param_2 == 0xd) {
        return (ulonglong)(uVar4 - 2 < 2);
    }
    bVar8 = uVar4 == param_2;
    LAB_14043d9eb:
    return (ulonglong)bVar8;
}



void FUN_14043da00(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
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



undefined4 * FUN_14043da70(undefined4 *param_1,undefined4 *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    FUN_14001c1b0(param_1 + 4,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    return param_1;
}



void FUN_14043db20(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    undefined8 local_res8;

    iVar1 = *DAT_140c63750;
    local_res8 = 0x141dfcca0;
    iVar2 = DAT_140c4dea0;
    if (iVar1 < DAT_140c4dea0) {
        iVar2 = iVar1;
    }
    iVar3 = DAT_140c404b0;
    if (iVar1 < DAT_140c404b0) {
        iVar3 = iVar1;
    }
    iVar4 = DAT_140c40510;
    if (iVar1 < DAT_140c40510) {
        iVar4 = iVar1;
    }
    iVar5 = DAT_140c405d0;
    if (iVar1 < DAT_140c405d0) {
        iVar5 = iVar1;
    }
    iVar6 = DAT_140c464e0;
    if (iVar1 < DAT_140c464e0) {
        iVar6 = iVar1;
    }
    iVar7 = DAT_140c467b0;
    if (iVar1 < DAT_140c467b0) {
        iVar7 = iVar1;
    }
    iVar8 = DAT_140c466c0;
    if (iVar1 < DAT_140c466c0) {
        iVar8 = iVar1;
    }
    iVar9 = DAT_140c463c0;
    if (iVar1 < DAT_140c463c0) {
        iVar9 = iVar1;
    }
    iVar10 = DAT_140c46480;
    if (iVar1 < DAT_140c46480) {
        iVar10 = iVar1;
    }
    iVar11 = DAT_140c46660;
    if (iVar1 < DAT_140c46660) {
        iVar11 = iVar1;
    }
    iVar12 = DAT_140c468b0;
    if (iVar1 < DAT_140c468b0) {
        iVar12 = iVar1;
    }
    iVar13 = DAT_140c46540;
    if (iVar1 < DAT_140c46540) {
        iVar13 = iVar1;
    }
    iVar14 = DAT_140c465d0;
    if (iVar1 < DAT_140c465d0) {
        iVar14 = iVar1;
    }
    iVar15 = DAT_140c46850;
    if (iVar1 < DAT_140c46850) {
        iVar15 = iVar1;
    }
    iVar16 = DAT_140c46750;
    if (iVar1 < DAT_140c46750) {
        iVar16 = iVar1;
    }
    iVar17 = DAT_140c46420;
    if (iVar1 < DAT_140c46420) {
        iVar17 = iVar1;
    }
    iVar18 = DAT_140c46810;
    if (iVar1 < DAT_140c46810) {
        iVar18 = iVar1;
    }
    FUN_1401a3130(0x16,2,&local_res8,(&DAT_140c46820)[iVar18],
                  (double)*(float *)(&DAT_140c46430 + (longlong)iVar17 * 4),
                  (double)*(float *)(&DAT_140c46760 + (longlong)iVar16 * 4),
                  *(undefined4 *)(&DAT_140c46860 + (longlong)iVar15 * 4),
                  (double)*(float *)(&DAT_140c465e0 + (longlong)iVar14 * 4),
                  *(undefined4 *)(&DAT_140c46550 + (longlong)iVar13 * 4),
                  *(undefined4 *)(&DAT_140c468c0 + (longlong)iVar12 * 4),
                  *(undefined4 *)(&DAT_140c46670 + (longlong)iVar11 * 4),
                  (double)*(float *)(&DAT_140c46490 + (longlong)iVar10 * 4),
                  (double)*(float *)(&DAT_140c463d0 + (longlong)iVar9 * 4),
                  *(undefined4 *)(&DAT_140c466d0 + (longlong)iVar8 * 4),
                  *(undefined4 *)(&DAT_140c467c0 + (longlong)iVar7 * 4),
                  *(undefined4 *)(&DAT_140c464f0 + (longlong)iVar6 * 4),
                  *(undefined4 *)(&DAT_140c405e0 + (longlong)iVar5 * 4),(&DAT_140c40520)[iVar4],
                  *(undefined4 *)(&DAT_140c404c0 + (longlong)iVar3 * 4),
                  (double)*(float *)(&DAT_140c4deb0 + (longlong)iVar2 * 4));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043ddb0(longlong param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    uint uVar7;
    int iVar8;
    ulonglong uVar9;
    int *piVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined auStack248 [32];
    undefined4 local_d8;
    undefined4 local_c8;
    _MEMORYSTATUSEX local_b8;
    ulonglong local_78;

    piVar10 = DAT_140c63750;
    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    *(undefined4 *)param_2 = DAT_140c44ce8;
    *(undefined4 *)((longlong)param_2 + 4) = DAT_140c44cec;
    *(undefined4 *)(param_2 + 1) = DAT_140c44cf0;
    *(undefined4 *)((longlong)param_2 + 0xc) = DAT_140c44cf4;
    local_b8.dwLength = 0x40;
    *(undefined4 *)(param_2 + 2) = DAT_140c44cf8;
    *(float *)((longlong)param_2 + 0x14) = DAT_140c44cfc;
    *(int *)(param_2 + 3) = DAT_140c44d00;
    *(undefined4 *)((longlong)param_2 + 0x1c) = DAT_140c44d04;
    *(undefined4 *)(param_2 + 4) = DAT_140c44d08;
    *(undefined4 *)((longlong)param_2 + 0x24) = DAT_140c44d0c;
    *(undefined4 *)(param_2 + 5) = DAT_140c44d10;
    *(undefined4 *)((longlong)param_2 + 0x2c) = DAT_140c44d14;
    *(undefined4 *)(param_2 + 6) = DAT_140c44d18;
    iVar8 = *piVar10;
    iVar3 = DAT_140c46000;
    if (iVar8 < DAT_140c46000) {
        iVar3 = iVar8;
    }
    uVar9 = (ulonglong)(uint)(*(int *)(&DAT_140c46010 + (longlong)iVar3 * 4) * 1000000);
    iVar3 = DAT_140c46060;
    if (iVar8 < DAT_140c46060) {
        iVar3 = iVar8;
    }
    iVar3 = *(int *)(&DAT_140c46070 + (longlong)iVar3 * 4);
    iVar4 = DAT_140c46540;
    if (iVar8 < DAT_140c46540) {
        iVar4 = iVar8;
    }
    iVar8 = *(int *)(&DAT_140c46550 + (longlong)iVar4 * 4);
    GlobalMemoryStatusEx(&local_b8);
    if ((*(longlong *)(param_1 + 0x6490) == 0) ||
        (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) == 0)) {
        lVar6 = 0;
    }
    else {
        lVar6 = FUN_1403d90d0();
    }
    if (*(int *)(param_1 + 0x7b48) == 0x7f) {
        if ((*(longlong *)(param_1 + 0x6490) == 0) ||
            (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6490) + 0x16f0), plVar2 == (longlong *)0x0
            )) {
            LAB_14043df78:
            if ((lVar6 != 0) && (*(longlong **)(lVar6 + 0x16f0) != (longlong *)0x0)) {
                local_d8 = 0;
                iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x16f0) + 0x28))();
                if (iVar4 == 0) goto LAB_14043e2a8;
            }
            piVar10 = DAT_140c63750;
            fVar13 = *(float *)(param_1 + 0x72f0);
            iVar4 = *DAT_140c63750;
            iVar5 = DAT_140c46420;
            if (iVar4 < DAT_140c46420) {
                iVar5 = iVar4;
            }
            if (fVar13 == *(float *)(&DAT_140c46430 + (longlong)iVar5 * 4)) {
                iVar5 = DAT_140c46480;
                if (iVar4 < DAT_140c46480) {
                    iVar5 = iVar4;
                }
                if (*(float *)(&DAT_140c46490 + (longlong)iVar5 * 4) != *(float *)(param_1 + 0x72f4))
                    goto LAB_14043e004;
                if (local_b8.ullAvailVirtual < uVar9) goto LAB_14043e012;
            }
            else {
                LAB_14043e004:
                if (local_b8.ullAvailVirtual < uVar9) {
                    LAB_14043e012:
                    iVar3 = DAT_140c46360;
                    if (iVar4 < DAT_140c46360) {
                        iVar3 = iVar4;
                    }
                    lVar6 = ((uVar9 - local_b8.ullAvailVirtual) * 0x19) / uVar9 + 1;
                    fVar12 = (float)lVar6;
                    if (lVar6 < 0) {
                        fVar12 = fVar12 + 1.844674e+19;
                    }
                    *(float *)(param_1 + 0x72f0) =
                            fVar13 - fVar12 * *(float *)(&DAT_140c46370 + (longlong)iVar3 * 4);
                    iVar3 = DAT_140c46240;
                    if (*piVar10 < DAT_140c46240) {
                        iVar3 = *piVar10;
                    }
                    *(float *)(param_1 + 0x72f4) =
                            *(float *)(&DAT_140c46250 + (longlong)iVar3 * 4) * 0.01 +
                            *(float *)(param_1 + 0x72f4);
                    iVar3 = DAT_140c464e0;
                    if (*piVar10 < DAT_140c464e0) {
                        iVar3 = *piVar10;
                    }
                    uVar7 = *(uint *)(&DAT_140c464f0 + (longlong)iVar3 * 4);
                    if (DAT_140c44c88 < *(uint *)(&DAT_140c464f0 + (longlong)iVar3 * 4)) {
                        uVar7 = DAT_140c44c88;
                    }
                    *(uint *)(param_1 + 0x72f8) = uVar7;
                    iVar3 = iVar8;
                    if (DAT_140c44d00 < iVar8) {
                        iVar3 = DAT_140c44d00;
                    }
                    *(int *)(param_1 + 0x72fc) = iVar3;
                    iVar3 = DAT_140c465d0;
                    if (*piVar10 < DAT_140c465d0) {
                        iVar3 = *piVar10;
                    }
                    fVar13 = *(float *)(&DAT_140c465e0 + (longlong)iVar3 * 4);
                    if (DAT_140c44cfc <= *(float *)(&DAT_140c465e0 + (longlong)iVar3 * 4)) {
                        fVar13 = DAT_140c44cfc;
                    }
                    *(float *)(param_1 + 0x7300) = fVar13;
                }
                else {
                    iVar5 = DAT_140c460c0;
                    if (iVar4 < DAT_140c460c0) {
                        iVar5 = iVar4;
                    }
                    if ((uint)(*(int *)(&DAT_140c460d0 + (longlong)iVar5 * 4) * 1000000) <
                        local_b8.ullAvailVirtual) {
                        iVar3 = DAT_140c46420;
                        if (iVar4 < DAT_140c46420) {
                            iVar3 = iVar4;
                        }
                        *(undefined4 *)(param_1 + 0x72f0) =
                                *(undefined4 *)(&DAT_140c46430 + (longlong)iVar3 * 4);
                        iVar3 = DAT_140c46480;
                        if (*piVar10 < DAT_140c46480) {
                            iVar3 = *piVar10;
                        }
                        *(undefined4 *)(param_1 + 0x72f4) =
                                *(undefined4 *)(&DAT_140c46490 + (longlong)iVar3 * 4);
                    }
                    else if ((uint)(iVar3 * 1000000) < local_b8.ullAvailVirtual) {
                        iVar3 = DAT_140c46420;
                        if (iVar4 < DAT_140c46420) {
                            iVar3 = iVar4;
                        }
                        iVar5 = DAT_140c46300;
                        if (iVar4 < DAT_140c46300) {
                            iVar5 = iVar4;
                        }
                        fVar11 = (*(float *)(&DAT_140c46430 + (longlong)iVar3 * 4) - fVar13) * 0.01;
                        fVar12 = 1.0;
                        if (1.0 <= fVar11) {
                            fVar12 = fVar11;
                        }
                        *(float *)(param_1 + 0x72f0) =
                                fVar12 * *(float *)(&DAT_140c46310 + (longlong)iVar5 * 4) + fVar13;
                        iVar3 = DAT_140c462a0;
                        if (*piVar10 < DAT_140c462a0) {
                            iVar3 = *piVar10;
                        }
                        *(float *)(param_1 + 0x72f4) =
                                *(float *)(param_1 + 0x72f4) -
                                *(float *)(&DAT_140c462b0 + (longlong)iVar3 * 4) * 0.004;
                    }
                }
            }
            iVar3 = *piVar10;
            iVar4 = DAT_140c46180;
            if (iVar3 < DAT_140c46180) {
                iVar4 = iVar3;
            }
            if ((uint)(*(int *)(&DAT_140c46190 + (longlong)iVar4 * 4) * 1000000) <
                local_b8.ullAvailVirtual) {
                iVar4 = DAT_140c465d0;
                if (iVar3 < DAT_140c465d0) {
                    iVar4 = iVar3;
                }
                *(undefined4 *)(param_1 + 0x7300) = *(undefined4 *)(&DAT_140c465e0 + (longlong)iVar4 * 4);
            }
            iVar3 = DAT_140c46120;
            if (*piVar10 < DAT_140c46120) {
                iVar3 = *piVar10;
            }
            if ((uint)(*(int *)(&DAT_140c46130 + (longlong)iVar3 * 4) * 1000000) <
                local_b8.ullAvailVirtual) {
                *(int *)(param_1 + 0x72fc) = iVar8;
            }
            iVar8 = *piVar10;
            iVar3 = DAT_140c461e0;
            if (iVar8 < DAT_140c461e0) {
                iVar3 = iVar8;
            }
            if ((uint)(*(int *)(&DAT_140c461f0 + (longlong)iVar3 * 4) * 1000000) <
                local_b8.ullAvailVirtual) {
                iVar3 = DAT_140c464e0;
                if (iVar8 < DAT_140c464e0) {
                    iVar3 = iVar8;
                }
                *(undefined4 *)(param_1 + 0x72f8) = *(undefined4 *)(&DAT_140c464f0 + (longlong)iVar3 * 4);
            }
            goto LAB_14043e326;
        }
        local_c8 = 0;
        iVar4 = (**(code **)(*plVar2 + 0x28))();
        if (iVar4 != 0) goto LAB_14043df78;
        LAB_14043e2a8:
        piVar10 = DAT_140c63750;
        if (*(int *)(param_1 + 0x7b48) == 0x7f) goto LAB_14043e326;
    }
    piVar10 = DAT_140c63750;
    iVar8 = *DAT_140c63750;
    iVar3 = DAT_140c460c0;
    if (iVar8 < DAT_140c460c0) {
        iVar3 = iVar8;
    }
    if ((uint)(*(int *)(&DAT_140c460d0 + (longlong)iVar3 * 4) * 1000000) < local_b8.ullAvailVirtual) {
        iVar3 = DAT_140c46420;
        if (iVar8 < DAT_140c46420) {
            iVar3 = iVar8;
        }
        *(undefined4 *)(param_1 + 0x72f0) = *(undefined4 *)(&DAT_140c46430 + (longlong)iVar3 * 4);
        iVar8 = DAT_140c46480;
        if (*piVar10 < DAT_140c46480) {
            iVar8 = *piVar10;
        }
        *(undefined4 *)(param_1 + 0x72f4) = *(undefined4 *)(&DAT_140c46490 + (longlong)iVar8 * 4);
    }
    LAB_14043e326:
    iVar8 = DAT_140c46420;
    if (*piVar10 < DAT_140c46420) {
        iVar8 = *piVar10;
    }
    fVar13 = *(float *)(param_1 + 0x72f0);
    if (*(float *)(&DAT_140c46430 + (longlong)iVar8 * 4) <= *(float *)(param_1 + 0x72f0)) {
        fVar13 = *(float *)(&DAT_140c46430 + (longlong)iVar8 * 4);
    }
    fVar12 = DAT_140c44c60;
    if (*(float *)(&DAT_140c46430 + (longlong)iVar8 * 4) <= DAT_140c44c60) {
        fVar12 = *(float *)(&DAT_140c46430 + (longlong)iVar8 * 4);
    }
    if (fVar12 <= fVar13) {
        fVar12 = fVar13;
    }
    *(float *)(param_1 + 0x72f0) = fVar12;
    iVar8 = *piVar10;
    iVar3 = DAT_140c46660;
    if (iVar8 < DAT_140c46660) {
        iVar3 = iVar8;
    }
    iVar4 = DAT_140c46480;
    if (iVar8 < DAT_140c46480) {
        iVar4 = iVar8;
    }
    iVar5 = 0;
    if (0 < DAT_140c44c78 - *(int *)(&DAT_140c46670 + (longlong)iVar3 * 4)) {
        iVar5 = DAT_140c44c78 - *(int *)(&DAT_140c46670 + (longlong)iVar3 * 4);
    }
    iVar3 = DAT_140c46480;
    if (iVar8 < DAT_140c46480) {
        iVar3 = iVar8;
    }
    fVar13 = *(float *)(&DAT_140c46490 + (longlong)iVar4 * 4);
    if (*(float *)(&DAT_140c46490 + (longlong)iVar4 * 4) <= (float)iVar5 + _DAT_140c44c7c) {
        fVar13 = (float)iVar5 + _DAT_140c44c7c;
    }
    fVar12 = *(float *)(param_1 + 0x72f4);
    if (fVar13 <= *(float *)(param_1 + 0x72f4)) {
        fVar12 = fVar13;
    }
    fVar13 = *(float *)(&DAT_140c46490 + (longlong)iVar3 * 4);
    if (*(float *)(&DAT_140c46490 + (longlong)iVar3 * 4) <= fVar12) {
        fVar13 = fVar12;
    }
    *(float *)(param_1 + 0x72f4) = fVar13;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x72f0);
    iVar8 = DAT_140c46750;
    if (*piVar10 < DAT_140c46750) {
        iVar8 = *piVar10;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(&DAT_140c46760 + (longlong)iVar8 * 4);
    iVar8 = DAT_140c46850;
    if (*piVar10 < DAT_140c46850) {
        iVar8 = *piVar10;
    }
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(&DAT_140c46860 + (longlong)iVar8 * 4);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x7300);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x72fc);
    iVar8 = DAT_140c468b0;
    if (*piVar10 < DAT_140c468b0) {
        iVar8 = *piVar10;
    }
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(&DAT_140c468c0 + (longlong)iVar8 * 4);
    iVar8 = DAT_140c46660;
    if (*piVar10 < DAT_140c46660) {
        iVar8 = *piVar10;
    }
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(&DAT_140c46670 + (longlong)iVar8 * 4);
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x72f4);
    iVar8 = DAT_140c466c0;
    if (*piVar10 < DAT_140c466c0) {
        iVar8 = *piVar10;
    }
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(&DAT_140c466d0 + (longlong)iVar8 * 4);
    iVar8 = DAT_140c467b0;
    if (*piVar10 < DAT_140c467b0) {
        iVar8 = *piVar10;
    }
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(&DAT_140c467c0 + (longlong)iVar8 * 4);
    uVar1 = *(undefined4 *)(param_1 + 0x72f8);
    *param_2 = 0xb79fffd;
    *(undefined4 *)(param_2 + 6) = uVar1;
    iVar8 = DAT_140c46810;
    if (*piVar10 < DAT_140c46810) {
        iVar8 = *piVar10;
    }
    if ((&DAT_140c46820)[iVar8] != '\0') {
        *(undefined4 *)param_2 = 0xb7bfffd;
    }
    if (((*(longlong *)(param_1 + 0x71a8) != 0) &&
         (*(int *)(*(longlong *)(param_1 + 0x71a8) + 0x2b8) != 0)) &&
        (*(longlong *)(param_1 + 0x7198) != 0)) {
        *(int *)param_2 = *(int *)param_2 - *(int *)(*(longlong *)(param_1 + 0x7198) + 0x58);
    }
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack248);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14043e580(undefined8 *param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong local_res10;

    if (*(int *)(param_1 + 5) == 4) {
        LAB_14043e68b:
        iVar3 = 0;
    }
    else {
        local_res10 = param_2;
        FUN_14039f920();
        if (param_1[0xe34] != 0) {
            *(undefined4 *)(param_1[0xe34] + 0x2ec) = 1;
        }
        if (*(longlong *)(DAT_140c65a48 + 0x18) != 0) {
            FUN_1404d5ae0();
        }
        lVar4 = FUN_14018b280(0x500,0);
        if (lVar4 == 0) {
            plVar5 = (longlong *)0x0;
        }
        else {
            plVar5 = (longlong *)FUN_140033e00(lVar4);
        }
        uVar2 = (**(code **)(param_1[9] + 8))(param_1 + 9);
        puVar1 = (undefined8 *)param_1[0xf25];
        *(undefined4 *)(plVar5 + 0xd) = 1000;
        QueryPerformanceCounter(&local_res10);
        plVar5[0xe] = local_res10 - _DAT_140c87988;
        iVar3 = FUN_1400360f0(plVar5,uVar2);
        if (-1 < iVar3) {
            plVar5[0xb] = (longlong)puVar1;
            (**(code **)*puVar1)(puVar1);
            plVar5[0xc] = (longlong)param_1;
            (**(code **)*param_1)(param_1);
            iVar3 = FUN_140048100(param_1,plVar5,1);
            if (-1 < iVar3) {
                iVar3 = FUN_140048100(plVar5,plVar5[0xc],4);
                if (-1 < iVar3) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    goto LAB_14043e68b;
                }
            }
        }
        (**(code **)(*plVar5 + 8))(plVar5);
        uVar6 = FUN_14034bdd0();
        FUN_1400481b0(param_1,uVar6,param_1);
    }
    return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14043e6d0(longlong param_1,uint param_2,undefined4 param_3,float *param_4)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    int *piVar5;
    longlong lVar6;
    longlong lVar7;
    float fVar8;
    undefined auVar9 [16];
    undefined auVar10 [16];
    longlong local_28;

    lVar3 = FUN_14024b980(param_3);
    if (lVar3 == 0) {
        return 0;
    }
    plVar1 = (longlong *)(param_1 + 0x48);
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(plVar1);
    if (*(int *)(lVar3 + 0x28) == iVar2) {
        *param_4 = *(float *)(lVar3 + 0xc);
        param_4[1] = *(float *)(lVar3 + 0x10);
        param_4[2] = *(float *)(lVar3 + 0x14);
    }
    else {
        lVar6 = *(longlong *)(param_1 + 0x7278);
        local_28 = lVar6;
        lVar7 = *(longlong *)(lVar6 + 8);
        while (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x20) < param_2) {
                lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                local_28 = lVar7;
                lVar7 = *(longlong *)(lVar7 + 0x10);
            }
        }
        if ((local_28 == lVar6) || (param_2 < *(uint *)(local_28 + 0x20))) {
            local_28 = lVar6;
        }
        if (((((local_28 != lVar6) && (*(longlong **)(local_28 + 0x28) != (longlong *)0x0)) &&
              (plVar4 = (longlong *)(**(code **)(**(longlong **)(local_28 + 0x28) + 0x18))(),
                      plVar4 != (longlong *)0x0)) &&
             (piVar5 = (int *)(**(code **)(*plVar4 + 0x18))(), *piVar5 != *(int *)(lVar3 + 0x28))) ||
            (((lVar6 = FUN_14024acc0(*(undefined4 *)(lVar3 + 0x28)), lVar6 == 0 ||
                                                                     (lVar7 = FUN_14024c200(param_2), lVar7 == 0)) ||
              (iVar2 = (**(code **)(*plVar1 + 8))(plVar1), *(int *)(lVar7 + 4) != iVar2)))) {
            return 0;
        }
        if (param_4 != (float *)0x0) {
            auVar9 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar6 + 0x2c),
                                            (float)(int)*(undefined8 *)(lVar6 + 0x28))),_DAT_140b7b490);
            auVar10 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar7 + 0xc),(float)*(int *)(lVar7 + 8))),
                            _DAT_140b7b490);
            *param_4 = ((SUB164(auVar10,0) - 0.5) * 65536.0 - (SUB164(auVar9,0) - 0.5) * 65536.0) +
                       *(float *)(lVar3 + 0xc);
            fVar8 = *(float *)(lVar3 + 0x10) + 0.0;
            param_4[1] = fVar8;
            param_4[2] = ((SUB164(auVar10 >> 0x20,0) - 0.5) * 65536.0 -
                          (SUB164(auVar9 >> 0x20,0) - 0.5) * 65536.0) + *(float *)(lVar3 + 0x14);
            param_4[1] = (float)(*(int *)(lVar7 + 0x18) - *(int *)(lVar6 + 0x38)) * _DAT_140c44f78 + fVar8
                    ;
            return 1;
        }
    }
    // WARNING: Read-only address (ram,0x000140b7b490) is written
    return 1;
}



void FUN_14043e900(undefined4 param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1403d90d0(DAT_140c65898,param_1);
    if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x16f8) != param_2)) {
        *(longlong **)(lVar1 + 0x16f8) = param_2;
        if (param_2 == (longlong *)0x0) {
            uVar2 = 0;
        }
        else {
            uVar2 = (**(code **)(*param_2 + 0x150))(param_2);
        }
        FUN_140467f50(lVar1,uVar2);
    }
    return;
}



void FUN_14043ecb0(undefined8 param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(DAT_140c65898 + 0x6fc0);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x6fd0);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x6fc8);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x6fd8);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x6fe0);
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014043ed47. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
        return;
    }
    return;
}



undefined8 FUN_14043ed60(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x7160);
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
    return *(undefined8 *)(local_res8 + 0x28);
}



// WARNING: Could not reconcile some variable overlaps

uint FUN_14043edc0(undefined8 param_1,int param_2,int param_3)

{
    longlong **pplVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    uint uVar9;
    uint uVar10;
    undefined local_88 [8];
    longlong local_80;
    longlong local_78;
    longlong *local_70;
    undefined local_68 [16];
    undefined local_58 [16];
    undefined local_48 [16];
    longlong **local_38;

    if (param_2 == param_3) {
        return 1;
    }
    lVar5 = FUN_14043ed60(param_1,param_3);
    uVar10 = 1;
    if ((lVar5 == 0) || (uVar9 = uVar10, (*(byte *)(*(longlong *)(lVar5 + 8) + 0x1c) & 8) == 0)) {
        uVar9 = 0;
    }
    if (lVar5 != 0) {
        do {
            lVar7 = lVar5;
            lVar5 = *(longlong *)(lVar7 + 0x10);
            if (lVar5 == 0) break;
        } while (uVar9 == (*(uint *)(*(longlong *)(lVar5 + 8) + 0x1c) >> 3 & 1));
        iVar4 = FUN_1403c9450();
        if (iVar4 != 0) {
            if (**(int **)(lVar7 + 8) == param_2) {
                return 1;
            }
            local_80 = 0;
            local_78 = 0;
            local_68 = ZEXT816(0);
            local_58 = ZEXT816(0);
            local_48 = ZEXT816(0);
            local_70 = (longlong *)0x0;
            local_38 = (longlong **)0x0;
            FUN_140172f70(local_88);
            if (local_58._8_8_ == local_48._8_8_ + -1) {
                if ((ulonglong)(local_78 - ((longlong)local_38 - local_80 >> 3)) < 2) {
                    FUN_140173030(local_88);
                }
                pplVar1 = local_38 + 1;
                plVar6 = (longlong *)FUN_14018b280(0x1f0,0);
                *pplVar1 = plVar6;
                if (local_58._8_8_ != (longlong *)0x0) {
                    *local_58._8_8_ = lVar7;
                }
                plVar6 = *pplVar1;
                local_48._8_8_ = plVar6 + 0x3e;
                local_48 = CONCAT88(local_48._8_8_,plVar6);
                local_38 = pplVar1;
            }
            else {
                if (local_58._8_8_ != (longlong *)0x0) {
                    *local_58._8_8_ = lVar7;
                }
                plVar6 = local_58._8_8_ + 1;
            }
            local_58._8_8_ = plVar6;
            if (plVar6 != local_70) {
                do {
                    lVar5 = *local_70;
                    if (local_70 == (longlong *)(local_68._8_8_ + -8)) {
                        FUN_14018b900(local_68._0_8_,0);
                        local_70 = *(longlong **)(local_58._0_8_ + 8);
                        local_58._0_8_ = local_58._0_8_ + 8;
                        local_68 = CONCAT88(local_70 + 0x3e,local_70);
                        local_68._0_8_ = local_70;
                    }
                    else {
                        local_70 = local_70 + 1;
                    }
                    lVar7 = *(longlong *)(lVar5 + 0x20);
                    lVar8 = *(longlong *)(lVar7 + 0x10);
                    if (lVar8 != lVar7) {
                        do {
                            piVar2 = *(int **)(*(longlong *)(lVar8 + 0x20) + 8);
                            if (((uint)piVar2[7] >> 3 & 1) == uVar9) {
                                if (*piVar2 == param_2) goto LAB_14043f063;
                                if (plVar6 == local_48._8_8_ + -1) {
                                    FUN_14043f3f0(local_88);
                                    plVar6 = local_58._8_8_;
                                }
                                else {
                                    if (plVar6 != (longlong *)0x0) {
                                        *plVar6 = *(longlong *)(lVar8 + 0x20);
                                    }
                                    local_58._8_8_ = plVar6 + 1;
                                    plVar6 = local_58._8_8_;
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
                        } while (lVar8 != *(longlong *)(lVar5 + 0x20));
                    }
                } while (plVar6 != local_70);
            }
            uVar10 = 0;
            LAB_14043f063:
            FUN_14033e040(local_88);
            return uVar10;
        }
    }
    return 0;
}



void FUN_14043f0b0(undefined8 param_1,uint param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x7310);
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
        *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 8) = param_3;
        FUN_14043f130();
        return;
    }
    return;
}



void FUN_14043f130(longlong **param_1)

{
    int iVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    iVar3 = *(int *)(param_1 + 1);
    iVar4 = 0;
    if (iVar3 == 3) {
        iVar3 = *(int *)((longlong)param_1 + 0xc);
        iVar4 = 0x45e;
        if (iVar3 == 4) {
            iVar3 = 0x458;
            goto LAB_14043f229;
        }
        if (iVar3 == 5) {
            iVar3 = 0x45b;
            goto LAB_14043f229;
        }
        if (iVar3 == 0xb) {
            iVar3 = 0x1a10;
            goto LAB_14043f229;
        }
    }
    else {
        if (iVar3 == 4) {
            iVar3 = *(int *)((longlong)param_1 + 0xc);
            iVar4 = 0x460;
            if (iVar3 == 3) {
                iVar3 = 0x455;
            }
            else if (iVar3 == 5) {
                iVar3 = 0x45c;
            }
            else {
                if (iVar3 != 0xb) goto LAB_14043f299;
                iVar3 = 0x1a11;
            }
        }
        else if (iVar3 == 5) {
            iVar3 = *(int *)((longlong)param_1 + 0xc);
            iVar4 = 0x462;
            if (iVar3 == 3) {
                iVar3 = 0x456;
            }
            else if (iVar3 == 4) {
                iVar3 = 0x459;
            }
            else {
                if (iVar3 != 0xb) goto LAB_14043f299;
                iVar3 = 0x1a12;
            }
        }
        else {
            if (iVar3 != 0xb) goto LAB_14043f2e6;
            iVar3 = *(int *)((longlong)param_1 + 0xc);
            iVar4 = 0x1a0e;
            if (iVar3 == 3) {
                iVar3 = 0x1a0b;
            }
            else if (iVar3 == 4) {
                iVar3 = 0x1a0c;
            }
            else {
                if (iVar3 != 5) goto LAB_14043f299;
                iVar3 = 0x1a0d;
            }
        }
        LAB_14043f229:
        plVar2 = (longlong *)(**(code **)(**param_1 + 0x150))();
        iVar1 = (**(code **)(*plVar2 + 0x198))(plVar2,iVar3);
        if (iVar1 != 0) {
            plVar2 = (longlong *)(**(code **)(**param_1 + 0x150))();
            local_24 = 0;
            local_1c = 0;
            local_14 = 0;
            local_20 = 0x3f800000;
            local_c = 0;
            local_28 = iVar3;
            (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
            *(undefined4 *)(param_1 + 2) = 1;
            goto LAB_14043f2e6;
        }
        if (iVar4 == 0) goto LAB_14043f2e6;
    }
    LAB_14043f299:
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    plVar2 = (longlong *)(**(code **)(**param_1 + 0x150))();
    local_24 = 0;
    local_20 = 0x3f800000;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    local_28 = iVar4;
    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    *(undefined4 *)(param_1 + 2) = 0;
    LAB_14043f2e6:
    // WARNING: Could not recover jumptable at 0x00014043f302. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**param_1 + 0x130))(*param_1,iVar4);
    return;
}



longlong FUN_14043f330(longlong param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    uVar2 = *param_2;
    FUN_14043f640();
    lVar1 = ((ulonglong)uVar2 %
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) * 8;
    puVar3 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10));
    for (puVar4 = puVar3; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
        if (*(uint *)(puVar4 + 1) == uVar2) goto LAB_14043f3d2;
    }
    puVar4 = (undefined8 *)FUN_14018b280(0x10);
    *puVar4 = 0;
    if (puVar4 + 1 != (ulonglong *)0x0) {
        puVar4[1] = (ulonglong)uVar2;
    }
    *puVar4 = puVar3;
    *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10)) = puVar4;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    LAB_14043f3d2:
    return (longlong)puVar4 + 0xc;
}



void FUN_14043f3f0(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;

    uVar1 = *param_2;
    if ((ulonglong)
                (*(longlong *)(param_1 + 0x10) -
                 (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 8) >> 3)) < 2) {
        FUN_140173030();
    }
    uVar3 = FUN_14018b280(0x1f0,0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = uVar3;
    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x38) = uVar1;
    }
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    *(longlong **)(param_1 + 0x50) = plVar4;
    lVar2 = *plVar4;
    *(longlong *)(param_1 + 0x40) = lVar2;
    *(longlong *)(param_1 + 0x48) = lVar2 + 0x1f0;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    return;
}



longlong FUN_14043f470(longlong param_1,uint *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = 0;
    lVar1 = ((ulonglong)*param_2 %
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) * 8;
    puVar2 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10));
    if (puVar2 != (undefined8 *)0x0) {
        puVar4 = puVar2;
        puVar3 = (undefined8 *)*puVar2;
        while (puVar3 != (undefined8 *)0x0) {
            if (*(uint *)(puVar3 + 1) == *param_2) {
                *puVar4 = *puVar3;
                FUN_14018b900();
                puVar3 = (undefined8 *)*puVar4;
                lVar5 = lVar5 + 1;
                *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
            }
            else {
                puVar4 = puVar3;
                puVar3 = (undefined8 *)*puVar3;
            }
        }
        if (*(uint *)(puVar2 + 1) == *param_2) {
            *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x10)) = *puVar2;
            FUN_14018b900(puVar2,0);
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
            lVar5 = lVar5 + 1;
        }
    }
    return lVar5;
}



void FUN_14043f540(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ac54,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014043f606. Too many branches
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



void FUN_14043f640(longlong param_1,undefined8 *param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined **ppuVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;

    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3);
    if (puVar12 < param_2) {
        ppuVar9 = (undefined **)&DAT_140af6cd0;
        lVar7 = 0x1c;
        do {
            lVar5 = lVar7 >> 1;
            if (*(uint *)((longlong)ppuVar9 + lVar5 * 4) < (uint)param_2) {
                ppuVar9 = (undefined **)((longlong)ppuVar9 + (lVar5 + 1) * 4);
                lVar5 = lVar7 + (-1 - lVar5);
            }
            lVar7 = lVar5;
        } while (0 < lVar5);
        puVar3 = (undefined8 *)0xfffffffb;
        if (ppuVar9 != &PTR_u_Art_FX_UI_Selection_Selection_Ho_140af6d40) {
            puVar3 = (undefined8 *)(ulonglong)*(uint *)ppuVar9;
        }
        if (puVar12 < puVar3) {
            puVar8 = (undefined8 *)0x0;
            puVar4 = puVar8;
            puVar11 = puVar8;
            if ((int)puVar3 != 0) {
                puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar3 * 8);
                puVar11 = puVar4 + (longlong)puVar3;
            }
            puVar6 = puVar3;
            puVar10 = puVar4;
            if (puVar3 != (undefined8 *)0x0) {
                for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)((longlong)puVar6 + -1)) {
                    *puVar10 = 0;
                    puVar10 = puVar10 + 1;
                }
                puVar10 = puVar4 + (longlong)puVar3;
            }
            if (puVar12 != (undefined8 *)0x0) {
                do {
                    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                    while (puVar2 != (undefined8 *)0x0) {
                        uVar1 = *(uint *)(puVar2 + 1);
                        *puVar6 = *puVar2;
                        *puVar2 = puVar4[(ulonglong)uVar1 % (ulonglong)puVar3];
                        puVar4[(ulonglong)uVar1 % (ulonglong)puVar3] = puVar2;
                        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                        puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)puVar8 * 8);
                    }
                    puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                } while (puVar8 < puVar12);
            }
            lVar7 = *(longlong *)(param_1 + 0x10);
            *(undefined8 **)(param_1 + 0x10) = puVar4;
            *(undefined8 **)(param_1 + 0x18) = puVar10;
            *(undefined8 **)(param_1 + 0x20) = puVar11;
            if (lVar7 != 0) {
                FUN_14018b900(lVar7,0);
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14043f790(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c658e8 != 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x70);
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        FUN_140440040(lVar2);
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        *(undefined8 *)(lVar2 + 0x68) = 0;
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64f1c == 0) && (iVar1 = FUN_1401faac0(), -1 < iVar1)) {
            (**(code **)(*DAT_140c65438 + 0x28))();
        }
    }
    else {
        (*DAT_140c63838)(&PTR_u_CustomizationParameterMap_140a69fa8,DAT_140c63858);
    }
    iVar1 = FUN_14043f8c0(lVar2);
    if (-1 < iVar1) {
        DAT_140c658e8 = lVar2;
        return 0;
    }
    if (lVar2 != 0) {
        FUN_14043f870(lVar2);
    }
    return iVar1;
}



longlong FUN_14043f870(longlong param_1)

{
    FUN_1404409d0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x58),0);
    }
    FUN_1404400d0(param_1);
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 FUN_14043f8c0(longlong param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    uint uVar3;
    uint *puVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    longlong **pplVar11;
    ulonglong local_res20;
    uint uStack0000000000000028;
    undefined local_58 [24];

    if (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_1 + 0x60)) {
        local_res20 = param_4;
        FUN_140440180();
        lVar10 = 0x11;
        do {
            FUN_140440230();
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        uStack0000000000000028 = 0;
        if (param_3 != 0) {
            do {
                lVar10 = FUN_1401fad80();
                if (lVar10 != 0) {
                    puVar4 = (uint *)FUN_1401fa8e0();
                    lVar9 = (ulonglong)*(uint *)(lVar10 + 8) * 0x50 +
                            *(longlong *)
                                    ((ulonglong)*(uint *)(lVar10 + 4) * 0x20 + 8 + *(longlong *)(param_1 + 0x58));
                    FUN_1400293c0(lVar9 + 0x30,local_58);
                    pplVar6 = *(longlong ***)(lVar9 + 8);
                    pplVar5 = (longlong **)*pplVar6;
                    pplVar11 = pplVar6;
                    if (pplVar5 != pplVar6) {
                        do {
                            pplVar11 = pplVar5;
                            if (*(uint *)(lVar10 + 0x14) < *(uint *)((longlong)pplVar5 + 0x14)) break;
                            pplVar5 = (longlong **)*pplVar5;
                            pplVar11 = pplVar6;
                        } while (pplVar5 != pplVar6);
                    }
                    uVar3 = puVar4[2];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 0;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 0;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[3];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 1;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 1;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[4];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 2;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 2;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[5];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 3;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 3;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[6];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 4;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 4;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[7];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 5;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 5;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[8];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 6;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 6;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[9];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 7;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar7 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar7 = *(longlong *)(lVar7 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 7;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar7;
                        plVar8[1] = *(longlong *)(lVar7 + 8);
                        **(longlong ***)(lVar7 + 8) = plVar8;
                        *(longlong **)(lVar7 + 8) = plVar8;
                    }
                    uVar3 = puVar4[10];
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)*puVar4;
                    if (uVar3 != 0) {
                        uVar1 = *(undefined4 *)(lVar10 + 0xc);
                        uVar2 = *(undefined4 *)(lVar10 + 0x14);
                        if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
                            uVar3 = 2;
                        }
                        pplVar6 = (longlong **)FUN_14018b280(0x20,0);
                        if (pplVar6 + 2 != (longlong **)0x0) {
                            *(undefined4 *)(pplVar6 + 2) = uVar1;
                            *(undefined4 *)((longlong)pplVar6 + 0x14) = uVar2;
                            *(undefined4 *)(pplVar6 + 3) = 8;
                            *(uint *)((longlong)pplVar6 + 0x1c) = uVar3;
                        }
                        *pplVar6 = (longlong *)pplVar11;
                        pplVar6[1] = pplVar11[1];
                        *pplVar11[1] = (longlong)pplVar6;
                        pplVar11[1] = (longlong *)pplVar6;
                        lVar10 = FUN_140440a50(lVar9 + 0x10,&local_res20);
                        lVar10 = *(longlong *)(lVar10 + 8);
                        plVar8 = (longlong *)FUN_14018b280(0x20);
                        if (plVar8 + 2 != (longlong *)0x0) {
                            *(undefined4 *)(plVar8 + 2) = uVar1;
                            *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
                            *(undefined4 *)(plVar8 + 3) = 8;
                            *(uint *)((longlong)plVar8 + 0x1c) = uVar3;
                        }
                        *plVar8 = lVar10;
                        plVar8[1] = *(longlong *)(lVar10 + 8);
                        **(longlong ***)(lVar10 + 8) = plVar8;
                        *(longlong **)(lVar10 + 8) = plVar8;
                    }
                }
                uStack0000000000000028 = uStack0000000000000028 + 1;
            } while (uStack0000000000000028 < param_3);
        }
    }
    return 0;
}



longlong FUN_140440040(longlong param_1)

{
    undefined8 uVar1;
    undefined *puVar2;

    uVar1 = FUN_14018b280(0x20);
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
    puVar2 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined **)(param_1 + 0x38) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) = *(longlong *)(param_1 + 0x38);
    return param_1;
}



void FUN_1404400d0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    FUN_140008410(param_1 + 0x30);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x38),0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14001ea50(param_1 + 0x10,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x18),0);
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



void FUN_140440180(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    uVar2 = lVar1 - *(longlong *)(param_1 + 8) >> 5;
    if (0x11 < uVar2) {
        lVar4 = *(longlong *)(param_1 + 8) + 0x220;
        uVar3 = FUN_140441ca0(lVar1,lVar1,lVar4);
        FUN_1404409d0(uVar3,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (lVar1 - lVar4 >> 5) * -0x20;
        return;
    }
    FUN_1404403d0(param_1,lVar1,0x11 - uVar2,local_28);
    return;
}



void FUN_140440230(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined local_58 [8];
    longlong local_50;
    undefined *local_40;
    undefined8 local_38;
    undefined *local_20;
    undefined8 local_18;

    local_50 = FUN_14018b280(0x20);
    *(longlong *)local_50 = local_50;
    *(longlong *)(local_50 + 8) = local_50;
    local_40 = (undefined *)FUN_14018b280(0x38);
    local_38 = 0;
    *local_40 = 0;
    *(undefined8 *)(local_40 + 8) = 0;
    *(undefined **)(local_40 + 0x10) = local_40;
    *(undefined **)(local_40 + 0x18) = local_40;
    local_20 = (undefined *)FUN_14018b280(0x28,0);
    local_18 = 0;
    *local_20 = 0;
    *(undefined8 *)(local_20 + 8) = 0;
    *(undefined **)(local_20 + 0x10) = local_20;
    *(undefined **)(local_20 + 0x18) = local_20;
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = (lVar1 - *(longlong *)(param_1 + 8)) / 0x50;
    if (uVar2 < 4) {
        FUN_140440670(param_1,lVar1,3 - uVar2,local_58);
    }
    else {
        FUN_140440330(param_1,*(longlong *)(param_1 + 8) + 0xf0,lVar1);
    }
    FUN_1404400d0(local_58);
    return;
}



longlong FUN_140440330(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_140441e90(param_3,*(undefined8 *)(param_1 + 0x10),param_2);
    lVar2 = *(longlong *)(param_1 + 0x10);
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
        FUN_1404400d0(lVar1);
    }
    lVar2 = SUB168(SEXT816(-0x6666666666666667) * SEXT816(param_3 - param_2) >> 0x40,0);
    *(longlong *)(param_1 + 0x10) =
            *(longlong *)(param_1 + 0x10) + ((lVar2 >> 5) - (lVar2 >> 0x3f)) * 0x50;
    return param_2;
}



void FUN_1404403d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong *puVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong local_res18 [2];
    ulonglong local_68;
    undefined local_60 [8];
    longlong local_58;
    longlong local_50;

    if (param_3 != 0) {
        local_res18[0] = param_3;
        if ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 5) < param_3) {
            local_68 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 5;
            puVar4 = local_res18;
            if (param_3 <= local_68) {
                puVar4 = &local_68;
            }
            uVar7 = FUN_14018a3e0((*puVar4 + local_68) * 0x20);
            lVar6 = FUN_14018b280(uVar7 & 0xffffffffffffffe0,0);
            lVar8 = FUN_140440d10(*(undefined8 *)(param_1 + 8),param_2,lVar6);
            if (param_3 != 0) {
                do {
                    if (lVar8 != 0) {
                        FUN_140440ba0(lVar8,param_4);
                    }
                    lVar8 = lVar8 + 0x20;
                    param_3 = param_3 - 1;
                } while (param_3 != 0);
            }
            uVar3 = FUN_140440d10(param_2,*(undefined8 *)(param_1 + 0x10),lVar8);
            FUN_1404409d0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
            if (*(longlong *)(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong *)(param_1 + 8),0);
            }
            *(longlong *)(param_1 + 8) = lVar6;
            *(undefined8 *)(param_1 + 0x10) = uVar3;
            *(ulonglong *)(param_1 + 0x18) = (uVar7 & 0xffffffffffffffe0) + lVar6;
        }
        else {
            FUN_140440ba0(local_60,param_4);
            uVar7 = *(ulonglong *)(param_1 + 0x10);
            local_res18[0] = *(longlong *)(param_1 + 0x10) - param_2 >> 5;
            if (param_3 < local_res18[0]) {
                lVar6 = uVar7 + param_3 * -0x20;
                local_68 = uVar7;
                FUN_140440d10(lVar6,uVar7,uVar7);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3 * 0x20;
                FUN_1404418d0(param_2,lVar6,uVar7);
                uVar5 = param_3 * 0x20 + param_2;
            }
            else {
                lVar8 = param_3 - local_res18[0];
                uVar5 = uVar7;
                uVar1 = local_res18[0];
                for (lVar6 = lVar8; local_res18[0] = uVar1, local_68 = uVar5, lVar6 != 0; lVar6 = lVar6 + -1
                        ) {
                    if (uVar7 != 0) {
                        lVar9 = (local_50 - local_58) / 0x50;
                        if (lVar9 == 0) {
                            *(undefined8 *)(uVar7 + 8) = 0;
                            *(undefined8 *)(uVar7 + 0x10) = 0;
                            *(undefined8 *)(uVar7 + 0x18) = 0;
                        }
                        else {
                            lVar9 = lVar9 * 0x50;
                            lVar2 = FUN_14018b280(lVar9,0);
                            *(longlong *)(uVar7 + 8) = lVar2;
                            *(longlong *)(uVar7 + 0x10) = lVar2;
                            *(longlong *)(uVar7 + 0x18) = lVar2 + lVar9;
                        }
                        uVar3 = FUN_140441b60(local_58,local_50);
                        *(undefined8 *)(uVar7 + 0x10) = uVar3;
                    }
                    uVar7 = uVar7 + 0x20;
                    uVar5 = local_68;
                    uVar1 = local_res18[0];
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + lVar8 * 0x20;
                FUN_140440d10(param_2,uVar5,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar1 * 0x20;
            }
            FUN_140440d70(param_2,uVar5,local_60);
            for (lVar6 = local_58; lVar6 != local_50; lVar6 = lVar6 + 0x50) {
                FUN_1404400d0(lVar6);
            }
            if (local_58 != 0) {
                FUN_14018b900(local_58,0);
            }
        }
    }
    return;
}



void FUN_140440670(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
    undefined8 uVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong local_res18 [2];
    ulonglong local_88 [2];
    undefined local_78 [8];
    ulonglong *local_70;
    undefined local_68 [32];
    undefined local_48 [32];

    if (param_3 != 0) {
        local_res18[0] = param_3;
        if ((ulonglong)((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) / 0x50) <
            param_3) {
            local_88[0] = (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x50;
            puVar2 = local_res18;
            if (param_3 <= local_88[0]) {
                puVar2 = local_88;
            }
            uVar3 = FUN_14018a3e0((*puVar2 + local_88[0]) * 0x50);
            lVar7 = (uVar3 / 0x50) * 0x50;
            lVar5 = FUN_14018b280(lVar7,0);
            uVar1 = FUN_140441b60(*(undefined8 *)(param_1 + 8),param_2,lVar5);
            uVar1 = FUN_140441c00(uVar1,param_3,param_4);
            uVar1 = FUN_140441b60(param_2,*(undefined8 *)(param_1 + 0x10),uVar1);
            lVar4 = *(longlong *)(param_1 + 0x10);
            for (lVar6 = *(longlong *)(param_1 + 8); lVar6 != lVar4; lVar6 = lVar6 + 0x50) {
                FUN_1404400d0(lVar6);
            }
            if (*(longlong *)(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong *)(param_1 + 8),0);
            }
            *(longlong *)(param_1 + 8) = lVar5;
            *(undefined8 *)(param_1 + 0x10) = uVar1;
            *(longlong *)(param_1 + 0x18) = lVar7 + lVar5;
        }
        else {
            local_70 = (ulonglong *)FUN_14018b280(0x20);
            *local_70 = (ulonglong)local_70;
            local_70[1] = (ulonglong)local_70;
            local_res18[0] = *local_70;
            FUN_140441830(local_res18[0],local_res18,**(undefined8 **)(param_4 + 8),
                          *(undefined8 **)(param_4 + 8));
            FUN_140440c40(local_68,param_4 + 0x10);
            FUN_1403d2aa0(local_48,param_4 + 0x30);
            lVar4 = *(longlong *)(param_1 + 0x10);
            uVar3 = (*(longlong *)(param_1 + 0x10) - param_2) / 0x50;
            if (param_3 < uVar3) {
                lVar6 = lVar4 + param_3 * -0x50;
                FUN_140441b60(lVar6,lVar4,lVar4);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3 * 0x50;
                FUN_140441ac0(param_2,lVar6,lVar4);
                lVar4 = param_3 * 0x50 + param_2;
                if (param_2 != lVar4) {
                    do {
                        FUN_140441760(param_2,local_78);
                        FUN_1404413b0(param_2 + 0x10,local_68);
                        FUN_140441680(param_2 + 0x30,local_48);
                        param_2 = param_2 + 0x50;
                    } while (param_2 != lVar4);
                }
            }
            else {
                lVar6 = lVar4;
                for (lVar5 = param_3 - uVar3; lVar5 != 0; lVar5 = lVar5 + -1) {
                    if (lVar6 != 0) {
                        uVar1 = FUN_14018b280(0x20);
                        *(undefined8 *)(lVar6 + 8) = uVar1;
                        *(undefined8 *)uVar1 = uVar1;
                        *(longlong *)(*(longlong *)(lVar6 + 8) + 8) = *(longlong *)(lVar6 + 8);
                        local_res18[0] = **(ulonglong **)(lVar6 + 8);
                        FUN_140441830();
                        FUN_140440c40(lVar6 + 0x10,local_68);
                        FUN_1403d2aa0();
                    }
                    lVar6 = lVar6 + 0x50;
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (param_3 - uVar3) * 0x50;
                FUN_140441b60(param_2,lVar4,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar3 * 0x50;
                if (param_2 != lVar4) {
                    do {
                        FUN_140441760(param_2,local_78);
                        FUN_1404413b0(param_2 + 0x10,local_68);
                        FUN_140441680(param_2 + 0x30,local_48);
                        param_2 = param_2 + 0x50;
                    } while (param_2 != lVar4);
                }
            }
            FUN_1404400d0(local_78);
        }
    }
    return;
}



void FUN_1404409d0(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;

    if (param_1 != param_2) {
        plVar4 = param_1 + 1;
        do {
            lVar2 = plVar4[1];
            for (lVar3 = *plVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x50) {
                FUN_1404400d0(lVar3);
            }
            if (*plVar4 != 0) {
                FUN_14018b900(*plVar4,0);
            }
            plVar1 = plVar4 + 3;
            plVar4 = plVar4 + 4;
        } while (plVar1 != param_2);
    }
    return;
}



longlong FUN_140440a50(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong **pplVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong local_res8;
    longlong local_res18;
    uint local_38 [4];
    longlong **local_28;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar10 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar7 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar7 + 0x20) < *param_2) {
                lVar8 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                lVar8 = *(longlong *)(lVar7 + 0x10);
                lVar10 = lVar7;
            }
            lVar7 = lVar8;
        } while (lVar8 != 0);
    }
    if ((lVar10 == lVar1) || (*param_2 < *(uint *)(lVar10 + 0x20))) {
        puVar9 = (undefined8 *)FUN_14018b280(0x20);
        *puVar9 = puVar9;
        puVar9[1] = puVar9;
        local_38[0] = *param_2;
        local_28 = (longlong **)FUN_14018b280(0x20);
        *local_28 = (longlong *)local_28;
        local_28[1] = (longlong *)local_28;
        local_res8 = (longlong)*local_28;
        FUN_140441830(local_res8,&local_res8,*puVar9,puVar9);
        local_res8 = lVar10;
        FUN_140441080(param_1,&local_res18,&local_res8,local_38);
        pplVar6 = local_28;
        pplVar4 = (longlong **)*local_28;
        while (pplVar4 != pplVar6) {
            plVar2 = *pplVar4;
            FUN_14018b900(pplVar4,0);
            pplVar4 = (longlong **)plVar2;
        }
        *pplVar6 = (longlong *)pplVar6;
        pplVar6[1] = (longlong *)pplVar6;
        FUN_14018b900(pplVar6,0);
        puVar5 = (undefined8 *)*puVar9;
        while (puVar5 != puVar9) {
            puVar3 = (undefined8 *)*puVar5;
            FUN_14018b900(puVar5,0);
            puVar5 = puVar3;
        }
        *puVar9 = puVar9;
        puVar9[1] = puVar9;
        FUN_14018b900(puVar9,0);
        lVar10 = local_res18;
    }
    return lVar10 + 0x28;
}



longlong FUN_140440ba0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;

    lVar3 = (*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8)) / 0x50;
    if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
        lVar3 = lVar3 * 0x50;
        lVar1 = FUN_14018b280(lVar3,0);
        *(longlong *)(param_1 + 8) = lVar1;
        *(longlong *)(param_1 + 0x10) = lVar1;
        *(longlong *)(param_1 + 0x18) = lVar1 + lVar3;
    }
    uVar2 = FUN_140441b60(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    return param_1;
}



longlong FUN_140440c40(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;

    puVar3 = (undefined *)FUN_14018b280();
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
        uVar4 = FUN_140440f50(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



longlong FUN_140440d10(longlong param_1,longlong param_2,longlong param_3)

{
    if (param_1 != param_2) {
        param_1 = param_1 - param_3;
        do {
            if (param_3 != 0) {
                FUN_140440ba0(param_3,param_1 + param_3);
            }
            param_3 = param_3 + 0x20;
        } while (param_1 + param_3 != param_2);
    }
    return param_3;
}



void FUN_140440d70(longlong *param_1,longlong *param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;

    if (param_1 != param_2) {
        plVar7 = param_1 + 1;
        do {
            if (param_3 != plVar7 + -1) {
                lVar2 = param_3[2];
                lVar6 = param_3[1];
                uVar4 = (lVar2 - lVar6) / 0x50;
                if ((ulonglong)((plVar7[2] - *plVar7) / 0x50) < uVar4) {
                    lVar5 = FUN_14018b280(uVar4 * 0x50,0);
                    FUN_140441b60(lVar6,lVar2,lVar5);
                    lVar2 = plVar7[1];
                    for (lVar6 = *plVar7; lVar6 != lVar2; lVar6 = lVar6 + 0x50) {
                        FUN_1404400d0(lVar6);
                    }
                    if (*plVar7 != 0) {
                        FUN_14018b900(*plVar7,0);
                    }
                    *plVar7 = lVar5;
                    plVar7[2] = uVar4 * 0x50 + lVar5;
                }
                else {
                    uVar3 = (plVar7[1] - *plVar7) / 0x50;
                    if (uVar3 < uVar4) {
                        FUN_140441e90(lVar6,uVar3 * 0x50 + lVar6);
                        FUN_140441b60(((plVar7[1] - *plVar7) / 0x50) * 0x50 + param_3[1],param_3[2]);
                    }
                    else {
                        lVar6 = FUN_140441e90(lVar6,lVar2);
                        lVar2 = plVar7[1];
                        for (; lVar6 != lVar2; lVar6 = lVar6 + 0x50) {
                            FUN_1404400d0(lVar6);
                        }
                    }
                }
                plVar7[1] = uVar4 * 0x50 + *plVar7;
            }
            plVar1 = plVar7 + 3;
            plVar7 = plVar7 + 4;
        } while (plVar1 != param_2);
    }
    return;
}



undefined * FUN_140440f50(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined *puVar1;
    undefined8 uVar2;
    undefined *puVar3;
    undefined *puVar4;
    undefined *puVar5;

    puVar1 = (undefined *)FUN_140441270(param_1,param_2 + 0x20);
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 8) = param_3;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar2 = FUN_140440f50(param_1,*(longlong *)(param_2 + 0x18),puVar1);
        *(undefined8 *)(puVar1 + 0x18) = uVar2;
    }
    puVar5 = *(undefined **)(param_2 + 0x10);
    puVar4 = puVar1;
    if (puVar5 == (undefined *)0x0) {
        return puVar1;
    }
    do {
        puVar3 = (undefined *)FUN_14018b280(0x38);
        if ((undefined4 *)(puVar3 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar5 + 0x20);
            uVar2 = FUN_14018b280(0x20);
            *(undefined8 *)(puVar3 + 0x30) = uVar2;
            *(undefined8 *)uVar2 = uVar2;
            *(longlong *)(*(longlong *)(puVar3 + 0x30) + 8) = *(longlong *)(puVar3 + 0x30);
            FUN_140441830();
        }
        *puVar3 = *puVar5;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar3 + 8) = puVar4;
        if (*(longlong *)(puVar5 + 0x18) != 0) {
            uVar2 = FUN_140440f50(param_1,*(longlong *)(puVar5 + 0x18),puVar3);
            *(undefined8 *)(puVar3 + 0x18) = uVar2;
        }
        puVar5 = *(undefined **)(puVar5 + 0x10);
        puVar4 = puVar3;
    } while (puVar5 != (undefined *)0x0);
    return puVar1;
}



longlong * FUN_140441080(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_1404410ce:
            plVar4 = (longlong *)FUN_1404414c0(param_1,local_18,param_4);
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
                    lVar5 = FUN_140441270(uVar1,param_4);
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
                    lVar5 = FUN_140441270(uVar1,param_4);
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
            plVar4 = (longlong *)FUN_1404414c0(param_1,local_18,param_4);
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
            goto LAB_1404410ce;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1404412f0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1404412f0();
    return param_2;
}



longlong FUN_140441270(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        uVar2 = FUN_14018b280(0x20);
        *(undefined8 *)(lVar1 + 0x30) = uVar2;
        *(undefined8 *)uVar2 = uVar2;
        *(longlong *)(*(longlong *)(lVar1 + 0x30) + 8) = *(longlong *)(lVar1 + 0x30);
        FUN_140441830();
    }
    return lVar1;
}



longlong *
FUN_1404412f0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_140441270();
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
        lVar2 = FUN_140441270();
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



longlong FUN_1404413b0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (param_1 == param_2) {
        return param_1;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_14001ea50(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        uVar3 = FUN_140440f50(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar3;
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
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        return param_1;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    return param_1;
}



char ** FUN_1404414c0(longlong param_1,char **param_2,uint *param_3)

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
            ppcVar2 = (char **)FUN_1404412f0(param_1,local_res8,pcVar3,pcVar6,param_3);
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
            pcVar3 = (char *)FUN_140441270(pcVar5,param_3);
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
            pcVar3 = (char *)FUN_140441270(pcVar5,param_3);
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



longlong FUN_140441680(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (param_1 != param_2) {
        FUN_140008410();
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
            return param_1;
        }
        lVar1 = *(longlong *)(param_1 + 8);
        uVar3 = FUN_1403d59a0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar3;
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
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    return param_1;
}



undefined8 * FUN_140441760(undefined8 *param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    undefined8 *puVar8;
    longlong **local_res8;

    if (param_1 == param_2) {
        return param_1;
    }
    puVar1 = (undefined8 *)param_2[1];
    local_res8 = (longlong **)param_1[1];
    puVar2 = (undefined8 *)*puVar1;
    pplVar7 = (longlong **)*local_res8;
    puVar8 = param_1;
    while (puVar6 = puVar2, pplVar7 != local_res8) {
        if (puVar6 == puVar1) goto joined_r0x0001404417c6;
        puVar2 = (undefined8 *)*puVar6;
        *(undefined4 *)(pplVar7 + 2) = *(undefined4 *)(puVar6 + 2);
        *(undefined4 *)((longlong)pplVar7 + 0x14) = *(undefined4 *)((longlong)puVar6 + 0x14);
        *(undefined4 *)(pplVar7 + 3) = *(undefined4 *)(puVar6 + 3);
        *(undefined4 *)((longlong)pplVar7 + 0x1c) = *(undefined4 *)((longlong)puVar6 + 0x1c);
        pplVar7 = (longlong **)*pplVar7;
        puVar8 = puVar6;
    }
    if (puVar6 != puVar1) {
        FUN_140441830(puVar8,&local_res8);
        return param_1;
    }
    joined_r0x0001404417c6:
    while (pplVar7 != local_res8) {
        pplVar3 = (longlong **)*pplVar7;
        plVar4 = *pplVar7;
        plVar5 = pplVar7[1];
        *plVar5 = (longlong)plVar4;
        plVar4[1] = (longlong)plVar5;
        FUN_14018b900(pplVar7,0);
        pplVar7 = pplVar3;
    }
    return param_1;
}



void FUN_140441830(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *local_res18;

    local_res18 = param_3;
    if (param_3 != param_4) {
        do {
            lVar1 = *param_2;
            plVar2 = (longlong *)FUN_14018b280();
            if (plVar2 + 2 != (longlong *)0x0) {
                *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(local_res18 + 2);
                *(undefined4 *)((longlong)plVar2 + 0x14) = *(undefined4 *)((longlong)local_res18 + 0x14);
                *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(local_res18 + 3);
                *(undefined4 *)((longlong)plVar2 + 0x1c) = *(undefined4 *)((longlong)local_res18 + 0x1c);
            }
            *plVar2 = lVar1;
            plVar2[1] = *(longlong *)(lVar1 + 8);
            **(longlong ***)(lVar1 + 8) = plVar2;
            *(longlong **)(lVar1 + 8) = plVar2;
            local_res18 = (longlong *)*local_res18;
        } while (local_res18 != param_4);
    }
    return;
}



longlong * FUN_1404418d0(longlong param_1,longlong param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong *plVar9;

    lVar7 = param_2 - param_1 >> 5;
    if (0 < lVar7) {
        plVar8 = param_3;
        plVar9 = (longlong *)(param_2 + 8);
        do {
            plVar1 = plVar9 + -4;
            param_3 = plVar8 + -4;
            if (plVar9 + -5 != param_3) {
                lVar2 = plVar9[-3];
                lVar6 = *plVar1;
                uVar4 = (lVar2 - lVar6) / 0x50;
                if ((ulonglong)((plVar8[-1] - plVar8[-3]) / 0x50) < uVar4) {
                    lVar5 = FUN_14018b280(uVar4 * 0x50,0);
                    FUN_140441b60(lVar6,lVar2,lVar5);
                    lVar2 = plVar8[-2];
                    for (lVar6 = plVar8[-3]; lVar6 != lVar2; lVar6 = lVar6 + 0x50) {
                        FUN_1404400d0(lVar6);
                    }
                    if (plVar8[-3] != 0) {
                        FUN_14018b900(plVar8[-3],0);
                    }
                    plVar8[-3] = lVar5;
                    plVar8[-1] = lVar5 + uVar4 * 0x50;
                }
                else {
                    uVar3 = (plVar8[-2] - plVar8[-3]) / 0x50;
                    if (uVar3 < uVar4) {
                        FUN_140441e90(lVar6,uVar3 * 0x50 + lVar6);
                        FUN_140441b60(((plVar8[-2] - plVar8[-3]) / 0x50) * 0x50 + *plVar1,plVar9[-3]);
                    }
                    else {
                        lVar6 = FUN_140441e90(lVar6,lVar2);
                        lVar2 = plVar8[-2];
                        for (; lVar6 != lVar2; lVar6 = lVar6 + 0x50) {
                            FUN_1404400d0(lVar6);
                        }
                    }
                }
                plVar8[-2] = uVar4 * 0x50 + plVar8[-3];
            }
            lVar7 = lVar7 + -1;
            plVar8 = param_3;
            plVar9 = plVar1;
        } while (0 < lVar7);
    }
    return param_3;
}



undefined * FUN_140441ac0(longlong param_1,longlong param_2,undefined *param_3)

{
    undefined *puVar1;
    longlong lVar2;
    undefined *puVar3;

    lVar2 = (param_2 - param_1) / 0x50;
    if (0 < lVar2) {
        puVar1 = param_3;
        puVar3 = (undefined *)(param_2 + 0x30);
        do {
            param_3 = &DAT_ffffffffffffffb0 + (longlong)puVar1;
            FUN_140441760(param_3,puVar3 + -0x80);
            FUN_1404413b0(puVar1 + -0x40,&DAT_ffffffffffffff90 + (longlong)puVar3);
            FUN_140441680(puVar1 + -0x20,&DAT_ffffffffffffffb0 + (longlong)puVar3);
            lVar2 = lVar2 + -1;
            puVar1 = param_3;
            puVar3 = &DAT_ffffffffffffffb0 + (longlong)puVar3;
        } while (0 < lVar2);
    }
    return param_3;
}



longlong FUN_140441b60(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;

    if (param_1 != param_2) {
        lVar3 = param_1 + 8;
        do {
            if (param_3 != 0) {
                uVar2 = FUN_14018b280(0x20);
                *(undefined8 *)(param_3 + 8) = uVar2;
                *(undefined8 *)uVar2 = uVar2;
                *(longlong *)(*(longlong *)(param_3 + 8) + 8) = *(longlong *)(param_3 + 8);
                FUN_140441830();
                FUN_140440c40(param_3 + 0x10,lVar3 + 8);
                FUN_1403d2aa0(param_3 + 0x30);
            }
            param_3 = param_3 + 0x50;
            lVar1 = lVar3 + 0x48;
            lVar3 = lVar3 + 0x50;
        } while (lVar1 != param_2);
    }
    return param_3;
}



longlong FUN_140441c00(longlong param_1,longlong param_2,longlong param_3)

{
    undefined8 uVar1;

    if (param_2 != 0) {
        do {
            if (param_1 != 0) {
                uVar1 = FUN_14018b280(0x20);
                *(undefined8 *)(param_1 + 8) = uVar1;
                *(undefined8 *)uVar1 = uVar1;
                *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
                FUN_140441830();
                FUN_140440c40(param_1 + 0x10,param_3 + 0x10);
                FUN_1403d2aa0();
            }
            param_1 = param_1 + 0x50;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    return param_1;
}



longlong * FUN_140441ca0(longlong param_1,longlong param_2,longlong *param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;

    lVar6 = param_2 - param_1 >> 5;
    if (0 < lVar6) {
        plVar7 = (longlong *)(param_1 + 8);
        do {
            if (plVar7 + -1 != param_3) {
                lVar1 = plVar7[1];
                lVar5 = *plVar7;
                uVar3 = (lVar1 - lVar5) / 0x50;
                if ((ulonglong)((param_3[3] - param_3[1]) / 0x50) < uVar3) {
                    lVar4 = FUN_14018b280(uVar3 * 0x50,0);
                    FUN_140441b60(lVar5,lVar1,lVar4);
                    lVar1 = param_3[2];
                    for (lVar5 = param_3[1]; lVar5 != lVar1; lVar5 = lVar5 + 0x50) {
                        FUN_1404400d0(lVar5);
                    }
                    if (param_3[1] != 0) {
                        FUN_14018b900(param_3[1],0);
                    }
                    param_3[1] = lVar4;
                    param_3[3] = lVar4 + uVar3 * 0x50;
                }
                else {
                    uVar2 = (param_3[2] - param_3[1]) / 0x50;
                    if (uVar2 < uVar3) {
                        FUN_140441e90(lVar5,uVar2 * 0x50 + lVar5);
                        FUN_140441b60(((param_3[2] - param_3[1]) / 0x50) * 0x50 + *plVar7,plVar7[1]);
                    }
                    else {
                        lVar5 = FUN_140441e90(lVar5,lVar1);
                        lVar1 = param_3[2];
                        for (; lVar5 != lVar1; lVar5 = lVar5 + 0x50) {
                            FUN_1404400d0(lVar5);
                        }
                    }
                }
                param_3[2] = uVar3 * 0x50 + param_3[1];
            }
            lVar6 = lVar6 + -1;
            param_3 = param_3 + 4;
            plVar7 = plVar7 + 4;
        } while (0 < lVar6);
    }
    return param_3;
}



longlong FUN_140441e90(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;

    lVar1 = (param_2 - param_1) / 0x50;
    if (0 < lVar1) {
        param_1 = param_1 + 0x30;
        do {
            FUN_140441760(param_3,&DAT_ffffffffffffffd0 + param_1);
            FUN_1404413b0(param_3 + 0x10,param_1 + -0x20);
            FUN_140441680(param_3 + 0x30,param_1);
            lVar1 = lVar1 + -1;
            param_3 = param_3 + 0x50;
            param_1 = param_1 + 0x50;
        } while (0 < lVar1);
    }
    return param_3;
}



undefined4 * FUN_140441f20(undefined4 *param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;

    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = param_2;
    param_1[1] = 0;
    if (0x20 < *(ulonglong *)(param_1 + 4)) {
        *(undefined8 *)(param_1 + 4) = 0x20;
    }
    puVar3 = *(undefined8 **)(param_1 + 2);
    if (puVar3 != (undefined8 *)0x0) {
        iVar2 = (**(code **)puVar3[-2])(puVar3 + -2,0x110);
        if (iVar2 != 0) {
            puVar3[-1] = 0x20;
            goto LAB_140441fa7;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(0x110,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0x20;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_140441fa7:
    if (*(undefined8 **)(param_1 + 2) != puVar3) {
        FUN_1407db590(puVar3,*(undefined8 **)(param_1 + 2),*(longlong *)(param_1 + 4) << 3);
        lVar1 = *(longlong *)(param_1 + 2);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *(undefined8 **)(param_1 + 2) = puVar3;
    }
    return param_1;
}



void FUN_140441ff0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    if ((param_2 != 0) && (*(ulonglong *)(param_1 + 0x10) < 0xff)) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar1 = lVar2 + 1;
        lVar3 = FUN_14018db00(*(undefined8 *)(param_1 + 8),lVar1,8);
        *(longlong *)(lVar3 + lVar2 * 8) = param_2;
        if (*(longlong *)(param_1 + 8) != lVar3) {
            FUN_1407db590(lVar3,*(longlong *)(param_1 + 8),*(longlong *)(param_1 + 0x10) << 3);
            lVar2 = *(longlong *)(param_1 + 8);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong *)(param_1 + 8) = lVar3;
        }
        *(longlong *)(param_1 + 0x10) = lVar1;
        *(float *)(param_1 + 4) = *(float *)(param_2 + 8) + *(float *)(param_1 + 4);
    }
    return;
}



ulonglong FUN_1404420b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    float fVar7;
    float fVar8;

    uVar1 = *param_1;
    iVar2 = FUN_140444550(param_3);
    lVar4 = 0;
    lVar3 = lVar4;
    if (iVar2 != 0) {
        lVar3 = FUN_1402096e0(uVar1);
    }
    iVar2 = FUN_140444550();
    if (iVar2 != 0) {
        lVar4 = FUN_1402096e0();
    }
    if ((lVar3 != 0) && (lVar4 != 0)) {
        lVar5 = FUN_140243a00();
        lVar6 = FUN_140243a00();
        if ((lVar5 != 0) && (lVar6 != 0)) {
            if (*(uint *)(lVar6 + 8) < *(uint *)(lVar5 + 8)) {
                return 0xffffffff;
            }
            if (*(uint *)(lVar6 + 8) <= *(uint *)(lVar5 + 8)) {
                if (*(uint *)(lVar4 + 0x3c) < *(uint *)(lVar3 + 0x3c)) {
                    return 0xffffffff;
                }
                if (*(uint *)(lVar4 + 0x3c) <= *(uint *)(lVar3 + 0x3c)) {
                    fVar7 = *(float *)(lVar5 + 0xc);
                    fVar8 = fVar7 * fVar7 + *(float *)(lVar5 + 0x10) * *(float *)(lVar5 + 0x10);
                    fVar7 = fVar7 * fVar7 + *(float *)(lVar6 + 0x10) * *(float *)(lVar6 + 0x10);
                    if (fVar8 <= fVar7) {
                        if (fVar8 < fVar7) {
                            return 1;
                        }
                        if (*(float *)(lVar5 + 0x14) <= *(float *)(lVar6 + 0x14)) {
                            return (ulonglong)(*(float *)(lVar5 + 0x14) < *(float *)(lVar6 + 0x14));
                        }
                    }
                    return 0xffffffff;
                }
            }
            return 1;
        }
    }
    return 0;
}



ulonglong FUN_140442220(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    uVar1 = *param_1;
    iVar2 = FUN_140444550(param_3,uVar1);
    lVar4 = 0;
    lVar3 = lVar4;
    if (iVar2 != 0) {
        lVar3 = FUN_1402096e0(uVar1);
    }
    iVar2 = FUN_140444550(param_3,*param_2);
    if (iVar2 != 0) {
        lVar4 = FUN_1402096e0();
    }
    if ((lVar3 != 0) && (lVar4 != 0)) {
        lVar5 = FUN_140244280();
        lVar6 = FUN_140244280();
        if ((lVar5 != 0) && (lVar6 != 0)) {
            if (*(uint *)(lVar5 + 8) <= *(uint *)(lVar6 + 8)) {
                if (*(uint *)(lVar5 + 8) < *(uint *)(lVar6 + 8)) {
                    return 1;
                }
                if (*(uint *)(lVar3 + 0x3c) <= *(uint *)(lVar4 + 0x3c)) {
                    return (ulonglong)(*(uint *)(lVar3 + 0x3c) < *(uint *)(lVar4 + 0x3c));
                }
            }
            return 0xffffffff;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404422f0(undefined **param_1,uint param_2)

{
    uint *puVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong *plVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    undefined *puVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong *puVar15;
    undefined4 *puVar16;
    ulonglong uVar17;
    undefined8 *puVar18;
    int *piVar19;
    int *piVar20;
    longlong lVar21;
    code *pcVar22;
    longlong lVar23;
    undefined8 *puVar24;
    undefined *puVar25;
    uint *puVar26;
    undefined *puVar27;
    byte bVar28;
    ulonglong uVar29;
    undefined **ppuVar30;
    undefined *puVar31;
    undefined **ppuVar32;
    undefined **ppuVar33;
    uint uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    undefined **local_res8;
    uint local_res10 [2];
    undefined8 local_res18;
    undefined **local_res20;
    longlong local_188;
    undefined *local_180;
    undefined **local_178;
    ulonglong local_170;
    LPVOID local_168;
    uint local_160;
    undefined4 uStack348;
    uint local_158;
    undefined4 uStack340;
    longlong local_150;
    undefined4 local_148;
    undefined4 local_144;
    undefined local_140 [4];
    undefined4 local_13c;
    undefined4 local_138;
    undefined4 uStack308;
    ulonglong local_130;
    undefined4 local_124;
    undefined local_120 [8];
    undefined *local_118;
    longlong local_110;
    undefined4 local_100;
    undefined4 local_fc;
    undefined local_f8 [4];
    undefined4 local_f4;
    undefined4 local_f0;
    undefined4 uStack236;
    ulonglong local_e8;
    undefined4 local_dc;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined4 local_b8 [2];
    undefined8 local_b0;
    undefined8 local_a8;
    undefined4 local_a0 [2];
    longlong local_98 [2];
    undefined *local_88;
    undefined *local_80 [8];

    local_res8 = param_1;
    local_res10[0] = param_2;
    if (*(int *)(param_1 + 2) != 0) {
        local_170 = 0;
        local_178 = &PTR_LAB_140b5e648;
        local_168 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_178);
        local_d8 = local_178;
        local_res8 = (undefined **)0x141e615c0;
        local_c8 = local_168;
        local_d0 = local_170;
        iVar6 = FUN_140196f30(&DAT_140c8ac58,0x2b,&local_res8,&local_d8);
        local_178 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_168);
        if (iVar6 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    *(undefined4 *)(param_1 + 1) = 1;
    FUN_140444cc0();
    ppuVar32 = param_1 + 3;
    uVar34 = 0;
    local_res20 = ppuVar32;
    if (param_1[5] != (undefined *)0x0) {
        FUN_1400b61b0(ppuVar32);
        *(undefined **)(param_1[4] + 0x10) = param_1[4];
        *(undefined8 *)(param_1[4] + 8) = 0;
        *(undefined **)(param_1[4] + 0x18) = param_1[4];
        param_1[5] = (undefined *)0x0;
    }
    ppuVar33 = (undefined **)param_1[4];
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63aac == 0) && (iVar6 = FUN_14020d880(), -1 < iVar6)) {
            iVar6 = (**(code **)(*DAT_140c63a68 + 0x28))();
            goto LAB_1404424a1;
        }
    }
    else {
        iVar6 = (*DAT_140c63838)(&PTR_u_ItemDisplaySourceEntry_140a6af30);
        LAB_1404424a1:
        local_res18 = CONCAT44(local_res18._4_4_,iVar6);
        ppuVar30 = local_res8;
        if (iVar6 != 0) {
            do {
                lVar8 = 0;
                if (DAT_140c63848 == (code *)0x0) {
                    if (_DAT_140c63aac == 0) {
                        iVar6 = FUN_14020d880();
                        if (iVar6 < 0) {
                            lVar8 = 0;
                        }
                        else {
                            lVar8 = (**(code **)(*DAT_140c63a68 + 0x20))(DAT_140c63a68,uVar34);
                        }
                    }
                }
                else {
                    lVar8 = (*DAT_140c63848)(&PTR_u_ItemDisplaySourceEntry_140a6af30,uVar34,DAT_140c63858);
                }
                if ((ppuVar33 == (undefined **)param_1[4]) ||
                    (*(int *)(ppuVar33 + 4) != *(int *)(lVar8 + 4))) {
                    local_118 = (undefined *)FUN_14018b280(0x38);
                    local_110 = 0;
                    *local_118 = 0;
                    *(undefined8 *)(local_118 + 8) = 0;
                    *(undefined **)(local_118 + 0x10) = local_118;
                    *(undefined **)(local_118 + 0x18) = local_118;
                    local_148 = *(undefined4 *)(lVar8 + 4);
                    FUN_140445910(local_140,local_120);
                    local_100 = local_148;
                    FUN_140445910(local_f8,local_140);
                    FUN_140445810(ppuVar32,&local_178,&local_100);
                    ppuVar33 = local_178;
                    if (local_e8 != 0) {
                        FUN_14001a270(local_f8,*(undefined8 *)(CONCAT44(uStack236,local_f0) + 8));
                        *(longlong *)(CONCAT44(uStack236,local_f0) + 0x10) = CONCAT44(uStack236,local_f0);
                        *(undefined8 *)(CONCAT44(uStack236,local_f0) + 8) = 0;
                        *(longlong *)(CONCAT44(uStack236,local_f0) + 0x18) = CONCAT44(uStack236,local_f0);
                        local_e8 = 0;
                    }
                    FUN_14018b900(CONCAT44(uStack236,local_f0),0);
                    if (local_130 != 0) {
                        FUN_14001a270(local_140,*(undefined8 *)(CONCAT44(uStack308,local_138) + 8));
                        *(longlong *)(CONCAT44(uStack308,local_138) + 0x10) = CONCAT44(uStack308,local_138);
                        *(undefined8 *)(CONCAT44(uStack308,local_138) + 8) = 0;
                        *(longlong *)(CONCAT44(uStack308,local_138) + 0x18) = CONCAT44(uStack308,local_138);
                        local_130 = 0;
                    }
                    FUN_14018b900(CONCAT44(uStack308,local_138),0);
                    if (local_110 != 0) {
                        FUN_14001a270(local_120,*(undefined8 *)(local_118 + 8));
                        *(undefined **)(local_118 + 0x10) = local_118;
                        *(undefined8 *)(local_118 + 8) = 0;
                        *(undefined **)(local_118 + 0x18) = local_118;
                        local_110 = 0;
                    }
                    FUN_14018b900(local_118,0);
                    ppuVar30 = (undefined **)ppuVar33[6];
                }
                if ((ppuVar30 == (undefined **)ppuVar33[6]) ||
                    (*(int *)(ppuVar30 + 4) != *(int *)(lVar8 + 8))) {
                    local_b8[0] = *(undefined4 *)(lVar8 + 8);
                    local_a8 = 0;
                    local_b0 = 0;
                    local_a0[0] = local_b8[0];
                    FUN_1403fe910(local_98,&local_b0);
                    FUN_1403fe760(ppuVar33 + 5,&local_d8,local_a0);
                    ppuVar30 = local_d8;
                    if (local_98[0] != 0) {
                        (**(code **)(*(longlong *)(local_98[0] + -0x10) + 8))(local_98[0] + -0x10);
                    }
                }
                puVar25 = ppuVar30[6];
                puVar31 = puVar25 + 1;
                puVar9 = (undefined *)FUN_14018db00(ppuVar30[5],puVar31,8);
                *(longlong *)(puVar9 + (longlong)puVar25 * 8) = lVar8;
                if (ppuVar30[5] != puVar9) {
                    FUN_1407db590(puVar9,ppuVar30[5],(longlong)ppuVar30[6] << 3);
                    if (ppuVar30[5] != (undefined *)0x0) {
                        (**(code **)(*(longlong *)(ppuVar30[5] + -0x10) + 8))();
                    }
                    ppuVar30[5] = puVar9;
                }
                uVar34 = uVar34 + 1;
                ppuVar30[6] = puVar31;
                ppuVar32 = local_res20;
                param_1 = local_res8;
            } while (uVar34 < (uint)local_res18);
        }
    }
    puVar24 = (undefined8 *)0x0;
    uVar34 = 0;
    local_res10[0] = 0;
    uVar7 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63f8c == 0) && (iVar6 = FUN_14020c340(), uVar34 = uVar7, -1 < iVar6)) {
            uVar34 = (**(code **)(*DAT_140c653b8 + 0x28))();
        }
    }
    else {
        uVar34 = (*DAT_140c63838)(&PTR_u_ItemRandomStat_140a6ae18);
    }
    local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)uVar34;
    puVar10 = (undefined8 *)FUN_14018b280(0x28);
    puVar18 = puVar24;
    if (puVar10 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64868 == 0) && (iVar6 = FUN_14020c780(), -1 < iVar6)) {
                uVar7 = (**(code **)(*DAT_140c63f00 + 0x28))();
            }
        }
        else {
            uVar7 = (*DAT_140c63838)(&PTR_u_ItemRandomStatGroup_140a6ae50,DAT_140c63858);
        }
        *puVar10 = 0;
        uVar11 = FUN_1401a40c0(uVar7);
        puVar10[1] = uVar11;
        uVar12 = SUB168(ZEXT816(8) * ZEXT816(uVar11),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar11) >> 0x40,0) != 0) {
            uVar12 = 0xffffffffffffffff;
        }
        uVar12 = FUN_14018b280(uVar12);
        puVar10[2] = uVar12;
        FUN_1407e4830(uVar12,0,puVar10[1] << 3);
        puVar10[3] = &LAB_1400522d0;
        puVar10[4] = &LAB_1400522e0;
        puVar18 = puVar10;
    }
    param_1[0xd] = (undefined *)puVar18;
    if (uVar34 != 0) {
        do {
            uVar11 = 0;
            if (DAT_140c63848 == (code *)0x0) {
                uVar13 = uVar11;
                if ((_DAT_140c63f8c == 0) && (iVar6 = FUN_14020c340(), -1 < iVar6)) {
                    uVar13 = (**(code **)(*DAT_140c653b8 + 0x20))();
                }
            }
            else {
                uVar13 = (*DAT_140c63848)(&PTR_u_ItemRandomStat_140a6ae18,puVar24,DAT_140c63858);
            }
            if (*(uint *)(uVar13 + 4) != local_res10[0]) {
                local_res10[0] = *(uint *)(uVar13 + 4);
                lVar8 = FUN_14018b280(0x18);
                if (lVar8 != 0) {
                    uVar11 = FUN_140441f20(lVar8);
                }
                plVar4 = (longlong *)param_1[0xd];
                if (*plVar4 == plVar4[1]) {
                    FUN_1400290d0(plVar4);
                }
                uVar14 = (*(code *)plVar4[3])(local_res10);
                lVar8 = plVar4[2];
                uVar13 = plVar4[1];
                puVar15 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar15 != (ulonglong *)0x0) {
                    uVar29 = *(ulonglong *)(lVar8 + (uVar14 % uVar13) * 8);
                    *puVar15 = uVar14;
                    puVar15[1] = uVar29;
                    puVar15[3] = uVar11;
                    *(uint *)(puVar15 + 2) = local_res10[0];
                }
                *(ulonglong **)(lVar8 + (uVar14 % uVar13) * 8) = puVar15;
                *plVar4 = *plVar4 + 1;
                param_1 = local_res8;
            }
            FUN_140441ff0();
            uVar34 = (int)puVar24 + 1;
            puVar24 = (undefined8 *)(ulonglong)uVar34;
        } while (uVar34 < (uint)local_res18);
    }
    uVar34 = 1;
    local_res20 = (undefined **)0x7;
    do {
        uVar11 = 0;
        local_168 = (LPVOID)0x0;
        local_178 = (undefined **)((ulonglong)local_178 & 0xffffffff00000000 | (ulonglong)uVar34);
        local_170 = 0;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64070 == 0) && (iVar6 = FUN_140247760(), -1 < iVar6)) {
                uVar7 = (**(code **)(*DAT_140c64930 + 0x28))();
                goto LAB_1404429cd;
            }
        }
        else {
            uVar7 = (*DAT_140c63838)(&PTR_u_UnitProperty2_140a6dee0);
            LAB_1404429cd:
            local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)uVar7;
            uVar13 = uVar11;
            uVar14 = uVar11;
            if (uVar7 != 0) {
                do {
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c64070 == 0) && (iVar6 = FUN_140247760(), -1 < iVar6)) {
                            puVar16 = (undefined4 *)(**(code **)(*DAT_140c64930 + 0x20))();
                            goto LAB_140442a29;
                        }
                    }
                    else {
                        puVar16 = (undefined4 *)
                                (*DAT_140c63848)(&PTR_u_UnitProperty2_140a6dee0,uVar13,DAT_140c63858);
                        LAB_140442a29:
                        if (puVar16 != (undefined4 *)0x0) {
                            uVar2 = *puVar16;
                            uVar7 = uVar34;
                            if (((ulonglong)local_178 & 0x40) != 0) {
                                uVar7 = 0x7f;
                            }
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c64070 != 0) || (iVar6 = FUN_140247760(), iVar6 < 0))
                                    goto LAB_140442af7;
                                lVar8 = (**(code **)(*DAT_140c64930 + 0x18))();
                            }
                            else {
                                lVar8 = (*DAT_140c63840)(&PTR_u_UnitProperty2_140a6dee0,uVar2,DAT_140c63858);
                            }
                            if ((((lVar8 != 0) && ((*(uint *)(lVar8 + 0x24) & 4) != 0)) &&
                                 ((*(uint *)(lVar8 + 0x24) >> 9 & 1) != 0)) &&
                                ((*(uint *)(lVar8 + 0x30) & uVar7) != 0)) {
                                uVar17 = FUN_14018db00(uVar11,uVar14 + 1,4);
                                *(undefined4 *)(uVar17 + uVar14 * 4) = uVar2;
                                uVar29 = uVar11;
                                if ((uVar11 != uVar17) && (FUN_1407db590(uVar17), uVar29 = uVar17, uVar11 != 0)) {
                                    (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
                                }
                                uVar14 = uVar14 + 1;
                                uVar11 = uVar29;
                            }
                        }
                    }
                    LAB_140442af7:
                    uVar7 = (int)uVar13 + 1;
                    uVar13 = (ulonglong)uVar7;
                } while (uVar7 < (uint)local_res18);
                local_170 = uVar11;
                local_168 = (LPVOID)uVar14;
                if (uVar14 != 0) {
                    FUN_140445700(local_res8 + 0x2e);
                }
                if (uVar11 != 0) {
                    (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
                }
            }
        }
        uVar34 = uVar34 << 1 | (uint)((int)uVar34 < 0);
        local_res20 = (undefined **)((longlong)local_res20 + -1);
    } while (local_res20 != (undefined **)0x0);
    fVar37 = 1.0;
    fVar36 = 0.0;
    local_fc = 0;
    fVar35 = 1.0;
    local_f4 = 0;
    uStack236 = 0;
    local_e8 = local_e8 & 0xffffffff;
    local_dc = 0;
    local_144 = 0;
    local_13c = 0;
    uStack308 = 0;
    local_130 = local_130 & 0xffffffff;
    local_124 = 0;
    ppuVar32 = local_res8;
    if (local_res8[0x2d] < (undefined *)0x9) {
        puVar24 = (undefined8 *)local_res8[0x2c];
        if (puVar24 == (undefined8 *)0x0) {
            uVar11 = 8;
            lVar8 = 0x30;
            LAB_140442bfd:
            ppuVar32 = local_res8;
            puVar18 = (undefined8 *)FUN_14018b280(lVar8,0);
            puVar24 = (undefined8 *)0x0;
            if (puVar18 != (undefined8 *)0x0) {
                puVar18[1] = uVar11;
                *puVar18 = &PTR_LAB_140b55060;
                puVar24 = puVar18;
            }
            puVar24 = puVar24 + 2;
        }
        else if ((ulonglong)puVar24[-1] < 8) {
            lVar8 = FUN_14018a3e0(0x30);
            uVar11 = lVar8 - 0x10U >> 2;
            lVar8 = (lVar8 - 0x10U & 0xfffffffffffffffc) + 0x10;
            iVar6 = (**(code **)puVar24[-2])(puVar24 + -2,lVar8);
            if (iVar6 == 0) goto LAB_140442bfd;
            puVar24[-1] = uVar11;
            ppuVar32 = local_res8;
        }
        if ((undefined8 *)ppuVar32[0x2c] != puVar24) {
            FUN_1407db590(puVar24,ppuVar32[0x2c],(longlong)ppuVar32[0x2d] << 2);
            puVar31 = ppuVar32[0x2c];
            if (puVar31 != (undefined *)0x0) {
                (**(code **)(*(longlong *)(puVar31 + -0x10) + 8))(puVar31 + -0x10);
            }
            ppuVar32[0x2c] = (undefined *)puVar24;
        }
    }
    uVar14 = 0;
    ppuVar32[0x2d] = (undefined *)0x8;
    uVar11 = uVar14;
    uVar13 = uVar14;
    do {
        iVar6 = FUN_140445440();
        if ((int)uVar11 == iVar6) {
            fVar36 = (float)FUN_140445590();
        }
        fVar35 = fVar35 + fVar36;
        uVar34 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar34;
        *(float *)(ppuVar32[0x2c] + uVar13) = fVar35;
        uVar13 = uVar13 + 4;
    } while (uVar34 < 8);
    if (DAT_140c63838 == (code *)0x0) {
        uVar34 = 0;
        if ((_DAT_140c642e8 == 0) && (iVar6 = FUN_140211460(), -1 < iVar6)) {
            uVar34 = (**(code **)(*DAT_140c64508 + 0x28))();
        }
    }
    else {
        uVar34 = (*DAT_140c63838)();
    }
    if (uVar34 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c642e8 == 0) && (iVar6 = FUN_140211460(), -1 < iVar6)) {
                    lVar8 = (**(code **)(*DAT_140c64508 + 0x20))();
                    goto LAB_140442d5c;
                }
            }
            else {
                lVar8 = (*DAT_140c63848)(&PTR_u_LootPinataInfo_140a6b240,uVar14,DAT_140c63858);
                LAB_140442d5c:
                if (lVar8 != 0) {
                    if (*(int *)(lVar8 + 4) == 0) {
                        if (*(int *)(lVar8 + 0x14) == 0) {
                            if (*(int *)(lVar8 + 8) == 0) {
                                if (*(int *)(lVar8 + 0xc) == 0) {
                                    if (*(int *)(lVar8 + 0x10) == 0) {
                                        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_140442fce;
                                        ppuVar33 = ppuVar32 + 0x27;
                                        uVar11 = (*(code *)ppuVar32[0x2a])(lVar8 + 0x18);
                                        for (puVar15 = *(ulonglong **)
                                                (ppuVar32[0x29] + (uVar11 % (ulonglong)ppuVar32[0x28]) * 8);
                                             puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                                            if ((uVar11 == *puVar15) && (iVar6 = (*(code *)ppuVar32[0x2b])(), iVar6 != 0))
                                            {
                                                ppuVar32 = local_res8;
                                                if (puVar15 != (ulonglong *)0xffffffffffffffec) goto LAB_140442fce;
                                                break;
                                            }
                                        }
                                        lVar23 = lVar8 + 0x18;
                                    }
                                    else {
                                        ppuVar33 = ppuVar32 + 0x22;
                                        uVar11 = (*(code *)ppuVar32[0x25])(lVar8 + 0x10);
                                        puVar15 = *(ulonglong **)
                                                (ppuVar32[0x24] + (uVar11 % (ulonglong)ppuVar32[0x23]) * 8);
                                        if (puVar15 == (ulonglong *)0x0) {
                                            LAB_140442f5c:
                                            lVar23 = lVar8 + 0x10;
                                        }
                                        else {
                                            do {
                                                if ((uVar11 == *puVar15) &&
                                                    (iVar6 = (*(code *)ppuVar32[0x26])(), iVar6 != 0)) {
                                                    ppuVar32 = local_res8;
                                                    if (puVar15 == (ulonglong *)0xffffffffffffffec) goto LAB_140442f5c;
                                                    goto LAB_140442fce;
                                                }
                                                puVar15 = (ulonglong *)puVar15[1];
                                            } while (puVar15 != (ulonglong *)0x0);
                                            lVar23 = lVar8 + 0x10;
                                        }
                                    }
                                }
                                else {
                                    ppuVar33 = ppuVar32 + 0x1d;
                                    uVar11 = (*(code *)ppuVar32[0x20])(lVar8 + 0xc);
                                    puVar15 = *(ulonglong **)
                                            (ppuVar32[0x1f] + (uVar11 % (ulonglong)ppuVar32[0x1e]) * 8);
                                    if (puVar15 == (ulonglong *)0x0) {
                                        LAB_140442efa:
                                        lVar23 = lVar8 + 0xc;
                                    }
                                    else {
                                        do {
                                            if ((uVar11 == *puVar15) && (iVar6 = (*(code *)ppuVar32[0x21])(), iVar6 != 0))
                                            {
                                                ppuVar32 = local_res8;
                                                if (puVar15 == (ulonglong *)0xffffffffffffffec) goto LAB_140442efa;
                                                goto LAB_140442fce;
                                            }
                                            puVar15 = (ulonglong *)puVar15[1];
                                        } while (puVar15 != (ulonglong *)0x0);
                                        lVar23 = lVar8 + 0xc;
                                    }
                                }
                            }
                            else {
                                ppuVar33 = ppuVar32 + 0x18;
                                uVar11 = (*(code *)ppuVar32[0x1b])(lVar8 + 8);
                                puVar15 = *(ulonglong **)(ppuVar32[0x1a] + (uVar11 % (ulonglong)ppuVar32[0x19]) * 8)
                                        ;
                                if (puVar15 == (ulonglong *)0x0) {
                                    LAB_140442e93:
                                    lVar23 = lVar8 + 8;
                                }
                                else {
                                    do {
                                        if ((uVar11 == *puVar15) && (iVar6 = (*(code *)ppuVar32[0x1c])(), iVar6 != 0)) {
                                            ppuVar32 = local_res8;
                                            if (puVar15 == (ulonglong *)0xffffffffffffffec) goto LAB_140442e93;
                                            goto LAB_140442fce;
                                        }
                                        puVar15 = (ulonglong *)puVar15[1];
                                    } while (puVar15 != (ulonglong *)0x0);
                                    lVar23 = lVar8 + 8;
                                }
                            }
                        }
                        else {
                            ppuVar33 = ppuVar32 + 0x13;
                            uVar11 = (*(code *)ppuVar32[0x16])(lVar8 + 0x14);
                            puVar15 = *(ulonglong **)(ppuVar32[0x15] + (uVar11 % (ulonglong)ppuVar32[0x14]) * 8);
                            if (puVar15 == (ulonglong *)0x0) {
                                LAB_140442e2a:
                                lVar23 = lVar8 + 0x14;
                            }
                            else {
                                do {
                                    if ((uVar11 == *puVar15) && (iVar6 = (*(code *)ppuVar32[0x17])(), iVar6 != 0)) {
                                        ppuVar32 = local_res8;
                                        if (puVar15 == (ulonglong *)0xffffffffffffffec) goto LAB_140442e2a;
                                        goto LAB_140442fce;
                                    }
                                    puVar15 = (ulonglong *)puVar15[1];
                                } while (puVar15 != (ulonglong *)0x0);
                                lVar23 = lVar8 + 0x14;
                            }
                        }
                    }
                    else {
                        ppuVar33 = ppuVar32 + 0xe;
                        uVar11 = (*(code *)ppuVar32[0x11])(lVar8 + 4);
                        puVar15 = *(ulonglong **)(ppuVar32[0x10] + (uVar11 % (ulonglong)ppuVar32[0xf]) * 8);
                        if (puVar15 == (ulonglong *)0x0) {
                            LAB_140442dc3:
                            lVar23 = lVar8 + 4;
                        }
                        else {
                            do {
                                if ((uVar11 == *puVar15) && (iVar6 = (*(code *)ppuVar32[0x12])(), iVar6 != 0)) {
                                    ppuVar32 = local_res8;
                                    if (puVar15 == (ulonglong *)0xffffffffffffffec) goto LAB_140442dc3;
                                    goto LAB_140442fce;
                                }
                                puVar15 = (ulonglong *)puVar15[1];
                            } while (puVar15 != (ulonglong *)0x0);
                            lVar23 = lVar8 + 4;
                        }
                    }
                    FUN_1400bd4a0(ppuVar33,lVar23,lVar8);
                    ppuVar32 = local_res8;
                }
            }
            LAB_140442fce:
            uVar7 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar7;
        } while (uVar7 < uVar34);
    }
    uVar11 = 0;
    local_res18 = 0;
    local_188 = 0;
    local_150 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar34 = 0;
        if ((DAT_140c649fc == 0) && (iVar6 = FUN_140209480(), -1 < iVar6)) {
            uVar34 = (**(code **)(*DAT_140c640e8 + 0x28))();
        }
    }
    else {
        uVar34 = (*DAT_140c63838)();
    }
    uVar13 = uVar11;
    if (uVar34 != 0) {
        fVar36 = -1.0;
        pcVar22 = DAT_140c63840;
        uVar14 = uVar11;
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (DAT_140c649fc == 0) {
                    iVar6 = FUN_140209480();
                    if (iVar6 < 0) {
                        lVar8 = 0;
                        pcVar22 = DAT_140c63840;
                    }
                    else {
                        lVar8 = (**(code **)(*DAT_140c640e8 + 0x20))();
                        pcVar22 = DAT_140c63840;
                    }
                }
                else {
                    lVar8 = 0;
                }
            }
            else {
                lVar8 = (*DAT_140c63848)(&PTR_u_Item2_140a6abb0,uVar14,DAT_140c63858);
                pcVar22 = DAT_140c63840;
            }
            lVar23 = local_188;
            if (pcVar22 == (code *)0x0) {
                uVar13 = local_res18;
                if ((_DAT_140c63a54 == 0) &&
                    (iVar6 = FUN_140209d00(), pcVar22 = DAT_140c63840, uVar13 = local_res18, -1 < iVar6)) {
                    piVar19 = (int *)(**(code **)(*DAT_140c65060 + 0x18))();
                    goto LAB_1404430fb;
                }
            }
            else {
                piVar19 = (int *)(*pcVar22)(&PTR_u_Item2Family_140a6ac20,*(undefined4 *)(lVar8 + 0x1c),
                                            DAT_140c63858);
                LAB_1404430fb:
                pcVar22 = DAT_140c63840;
                uVar13 = local_res18;
                if (piVar19 != (int *)0x0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63eb4 != 0) ||
                            (iVar6 = FUN_1402098c0(), pcVar22 = DAT_140c63840, uVar13 = local_res18, iVar6 < 0))
                            goto LAB_140443219;
                        piVar20 = (int *)(**(code **)(*DAT_140c64e00 + 0x18))();
                    }
                    else {
                        piVar20 = (int *)(*DAT_140c63840)(&PTR_u_Item2Category_140a6abe8,
                                                          *(undefined4 *)(lVar8 + 0x20),DAT_140c63858);
                    }
                    pcVar22 = DAT_140c63840;
                    uVar13 = local_res18;
                    if (piVar20 != (int *)0x0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c650d4 != 0) ||
                                (iVar6 = FUN_14020a140(), pcVar22 = DAT_140c63840, uVar13 = local_res18, iVar6 < 0)
                                    ) goto LAB_140443219;
                            lVar21 = (**(code **)(*DAT_140c64ac8 + 0x18))();
                        }
                        else {
                            lVar21 = (*DAT_140c63840)(&PTR_u_Item2Type_140a6ac58,*(undefined4 *)(lVar8 + 0x24),
                                                      DAT_140c63858);
                        }
                        lVar5 = local_150;
                        pcVar22 = DAT_140c63840;
                        uVar13 = local_res18;
                        if (lVar21 != 0) {
                            if ((*(uint *)(lVar8 + 0x7c) & 0x4000) == 0) {
                                if ((*(int *)(lVar21 + 0x20) == *piVar20) && (piVar20[0xc] == *piVar19)) {
                                    if (piVar20[2] != 0) {
                                        if (DAT_140c63840 == (code *)0x0) {
                                            if ((_DAT_140c64590 != 0) ||
                                                (iVar6 = FUN_14020bf00(), pcVar22 = DAT_140c63840, uVar13 = local_res18,
                                                        iVar6 < 0)) goto LAB_140443219;
                                            lVar21 = (**(code **)(*DAT_140c65498 + 0x18))();
                                        }
                                        else {
                                            lVar21 = (*DAT_140c63840)(&PTR_u_ItemProficiency_140a6ade0,piVar20[2],
                                                                      DAT_140c63858);
                                        }
                                        pcVar22 = DAT_140c63840;
                                        uVar13 = local_res18;
                                        if (lVar21 == 0) goto LAB_140443219;
                                    }
                                    if (*(int *)(lVar8 + 0x10) != 0) {
                                        if (DAT_140c63840 == (code *)0x0) {
                                            pcVar22 = DAT_140c63840;
                                            uVar13 = local_res18;
                                            if ((_DAT_140c64f20 != 0) ||
                                                (iVar6 = FUN_14020cbc0(), pcVar22 = DAT_140c63840, uVar13 = local_res18,
                                                        iVar6 < 0)) goto LAB_140443219;
                                            lVar21 = (**(code **)(*DAT_140c63d38 + 0x18))();
                                        }
                                        else {
                                            lVar21 = (*DAT_140c63840)(&PTR_u_ItemQuality_140a6ae88,*(int *)(lVar8 + 0x10),
                                                                      DAT_140c63858);
                                        }
                                        pcVar22 = DAT_140c63840;
                                        uVar13 = local_res18;
                                        if (lVar21 == 0) goto LAB_140443219;
                                    }
                                    if ((*(int *)(lVar8 + 0x14) == 0) ||
                                        (lVar21 = FUN_14040fa40(), pcVar22 = DAT_140c63840, uVar13 = local_res18,
                                                lVar21 != 0)) {
                                        if (*(int *)(lVar8 + 0x5c) != 0) {
                                            if (DAT_140c63840 == (code *)0x0) {
                                                pcVar22 = DAT_140c63840;
                                                uVar13 = local_res18;
                                                if ((_DAT_140c64d18 != 0) ||
                                                    (iVar6 = FUN_14022a820(), pcVar22 = DAT_140c63840, uVar13 = local_res18,
                                                            iVar6 < 0)) goto LAB_140443219;
                                                lVar21 = (**(code **)(*DAT_140c642a8 + 0x18))();
                                            }
                                            else {
                                                lVar21 = (*DAT_140c63840)(&PTR_u_Quest2_140a6c708,*(int *)(lVar8 + 0x5c),
                                                                          DAT_140c63858);
                                            }
                                            pcVar22 = DAT_140c63840;
                                            uVar13 = local_res18;
                                            if (lVar21 == 0) goto LAB_140443219;
                                        }
                                        if (*(int *)(lVar8 + 0x60) != 0) {
                                            if (DAT_140c63840 == (code *)0x0) {
                                                pcVar22 = DAT_140c63840;
                                                uVar13 = local_res18;
                                                if ((_DAT_140c64d18 != 0) ||
                                                    (iVar6 = FUN_14022a820(), pcVar22 = DAT_140c63840, uVar13 = local_res18,
                                                            iVar6 < 0)) goto LAB_140443219;
                                                lVar21 = (**(code **)(*DAT_140c642a8 + 0x18))();
                                            }
                                            else {
                                                lVar21 = (*DAT_140c63840)(&PTR_u_Quest2_140a6c708,*(int *)(lVar8 + 0x60),
                                                                          DAT_140c63858);
                                            }
                                            pcVar22 = DAT_140c63840;
                                            uVar13 = local_res18;
                                            if (lVar21 == 0) goto LAB_140443219;
                                        }
                                        uVar29 = local_res18;
                                        pcVar22 = DAT_140c63840;
                                        uVar13 = local_res18;
                                        if (((*(int *)(lVar8 + 0x50) - 1U < 1000) &&
                                             (fVar36 <= *(float *)(lVar8 + 0xac))) &&
                                            (*(float *)(lVar8 + 0xac) <= fVar37)) {
                                            uVar13 = local_res18 + 1;
                                            lVar21 = FUN_14018db00(local_188,uVar13,8);
                                            *(longlong *)(uVar29 * 8 + lVar21) = lVar8;
                                            pcVar22 = DAT_140c63840;
                                            if ((local_188 != lVar21) &&
                                                (FUN_1407db590(), pcVar22 = DAT_140c63840, lVar23 = lVar21, local_188 != 0)
                                                    ) {
                                                (**(code **)(*(longlong *)(local_188 + -0x10) + 8))();
                                                pcVar22 = DAT_140c63840;
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                lVar21 = FUN_14018db00(local_150,uVar11 + 1,8);
                                *(longlong *)(uVar11 * 8 + lVar21) = lVar8;
                                lVar8 = local_150;
                                if ((lVar5 != lVar21) && (FUN_1407db590(), lVar8 = lVar21, lVar5 != 0)) {
                                    (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))();
                                }
                                local_150 = lVar8;
                                uVar11 = uVar11 + 1;
                                pcVar22 = DAT_140c63840;
                                uVar13 = local_res18;
                            }
                        }
                    }
                }
            }
            LAB_140443219:
            local_188 = lVar23;
            local_res18 = uVar13;
            uVar7 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar7;
            uVar13 = local_res18;
        } while (uVar7 < uVar34);
    }
    uVar14 = uVar13;
    uVar29 = local_res18;
    local_res20 = (undefined **)uVar13;
    lVar8 = local_188;
    if (uVar11 != 0) {
        uVar14 = uVar11 + uVar13;
        lVar23 = FUN_14018db00(local_188,uVar14,8);
        FUN_1407db590(uVar13 * 8 + lVar23,local_150,uVar11 * 8);
        uVar29 = uVar14;
        if ((local_188 != lVar23) &&
            (FUN_1407db590(lVar23,local_188,uVar13 * 8), lVar8 = lVar23, local_188 != 0)) {
            (**(code **)(*(longlong *)(local_188 + -0x10) + 8))();
        }
    }
    local_188 = lVar8;
    local_res18 = uVar29;
    puVar24 = (undefined8 *)FUN_14018b280();
    if (puVar24 == (undefined8 *)0x0) {
        puVar24 = (undefined8 *)0x0;
        goto LAB_1404435e0;
    }
    *puVar24 = 0;
    if (uVar14 < 2) {
        LAB_140443575:
        bVar28 = 0;
    }
    else {
        uVar11 = uVar14 - 1;
        bVar28 = 1;
        if ((uVar11 & 0xffffffff00000000) != 0) {
            bVar28 = 0x21;
            uVar11 = uVar11 >> 0x20;
        }
        if ((uVar11 & 0xffff0000) != 0) {
            bVar28 = bVar28 + 0x10;
            uVar11 = uVar11 >> 0x10;
        }
        if ((uVar11 & 0xff00) != 0) {
            bVar28 = bVar28 + 8;
            uVar11 = uVar11 >> 8;
        }
        if ((uVar11 & 0xf0) != 0) {
            bVar28 = bVar28 + 4;
            uVar11 = uVar11 >> 4;
        }
        if ((uVar11 & 0xc) != 0) {
            bVar28 = bVar28 + 2;
            uVar11 = uVar11 >> 2;
        }
        if ((uVar11 & 2) != 0) {
            bVar28 = bVar28 + 1;
        }
        if (bVar28 < 4) goto LAB_140443575;
        bVar28 = bVar28 - 4;
    }
    uVar11 = (&DAT_140b5e820)[bVar28];
    if (uVar11 < uVar14) {
        uVar11 = *(ulonglong *)(&UNK_140b5e828 + (ulonglong)bVar28 * 8);
    }
    puVar24[1] = uVar11;
    uVar12 = SUB168(ZEXT816(8) * ZEXT816(uVar11),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar11) >> 0x40,0) != 0) {
        uVar12 = 0xffffffffffffffff;
    }
    uVar12 = FUN_14018b280(uVar12);
    puVar24[2] = uVar12;
    FUN_1407e4830(uVar12,0,puVar24[1] << 3);
    puVar24[3] = &LAB_1400522d0;
    puVar24[4] = &LAB_1400522e0;
    LAB_1404435e0:
    uVar11 = 0;
    local_res8[0xb] = (undefined *)puVar24;
    ppuVar32 = local_res8;
    if (uVar14 != 0) {
        do {
            puVar16 = *(undefined4 **)(local_188 + uVar11 * 8);
            if ((*(int *)(ppuVar32 + 1) == 0) && (uVar13 = FUN_14018b280(0x1f0,0), uVar13 != 0)) {
                FUN_1400b52a0(uVar13 + 8);
                FUN_1407e4830(uVar13,0,0x1f0);
                FUN_1407e4830(uVar13 + 8,0,0x138);
                FUN_1407e4830((undefined8 *)(uVar13 + 0x9c),0,0x90);
                *(undefined8 *)(uVar13 + 0x9c) = 0xc5000000c5;
                *(undefined8 *)(uVar13 + 0xa4) = 0xc5000000c5;
                *(undefined8 *)(uVar13 + 0xac) = 0xc5000000c5;
                *(undefined8 *)(uVar13 + 0xb4) = 0xc5000000c5;
                *(undefined8 *)(uVar13 + 0xbc) = 0xc5000000c5;
                *(undefined8 *)(uVar13 + 0xc4) = 0xc5000000c5;
                *(undefined8 *)(uVar13 + 0xcc) = 0xc5000000c5;
                *(undefined4 *)(uVar13 + 0xd4) = 0xc5;
            }
            else {
                uVar13 = 0;
            }
            iVar6 = FUN_1404445d0(ppuVar32,uVar13,*puVar16);
            if (iVar6 < 0) {
                if (uVar13 != 0) {
                    FUN_14018b900();
                }
            }
            else {
                plVar4 = (longlong *)ppuVar32[0xb];
                if (uVar13 == 0) {
                    if (*plVar4 == plVar4[1]) {
                        FUN_1400290d0(plVar4);
                    }
                    uVar14 = (*(code *)plVar4[3])();
                    lVar8 = plVar4[2];
                    uVar13 = plVar4[1];
                    puVar15 = (ulonglong *)FUN_14018b280();
                    if (puVar15 != (ulonglong *)0x0) {
                        uVar29 = *(ulonglong *)(lVar8 + (uVar14 % uVar13) * 8);
                        *puVar15 = uVar14;
                        puVar15[1] = uVar29;
                        uVar2 = *puVar16;
                        puVar15[3] = 1;
                        *(undefined4 *)(puVar15 + 2) = uVar2;
                    }
                    *(ulonglong **)(lVar8 + (uVar14 % uVar13) * 8) = puVar15;
                }
                else {
                    if (*plVar4 == plVar4[1]) {
                        FUN_1400290d0(plVar4);
                    }
                    uVar14 = (*(code *)plVar4[3])();
                    lVar8 = plVar4[2];
                    uVar29 = uVar14 % (ulonglong)plVar4[1];
                    puVar15 = (ulonglong *)FUN_14018b280();
                    ppuVar32 = local_res8;
                    if (puVar15 == (ulonglong *)0x0) {
                        *(undefined8 *)(lVar8 + uVar29 * 8) = 0;
                    }
                    else {
                        uVar17 = *(ulonglong *)(lVar8 + uVar29 * 8);
                        *puVar15 = uVar14;
                        puVar15[1] = uVar17;
                        uVar2 = *puVar16;
                        puVar15[3] = uVar13;
                        *(undefined4 *)(puVar15 + 2) = uVar2;
                        *(ulonglong **)(lVar8 + uVar29 * 8) = puVar15;
                    }
                }
                *plVar4 = *plVar4 + 1;
                if (uVar11 < local_res20) {
                    if (puVar16[0x1a] != 0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64e9c != 0) || (iVar6 = FUN_1402437a0(), iVar6 < 0)) goto LAB_140443901;
                            lVar8 = (**(code **)(*DAT_140c64cb0 + 0x18))();
                        }
                        else {
                            lVar8 = (*DAT_140c63840)();
                        }
                        if (lVar8 != 0) {
                            puVar31 = ppuVar32[0x31];
                            puVar25 = puVar31;
                            if (*(undefined **)(puVar31 + 8) != (undefined *)0x0) {
                                puVar9 = *(undefined **)(puVar31 + 8);
                                do {
                                    if (*(uint *)(puVar9 + 0x20) < *(uint *)(lVar8 + 4)) {
                                        puVar27 = *(undefined **)(puVar9 + 0x18);
                                    }
                                    else {
                                        puVar27 = *(undefined **)(puVar9 + 0x10);
                                        puVar25 = puVar9;
                                    }
                                    puVar9 = puVar27;
                                } while (puVar27 != (undefined *)0x0);
                            }
                            if ((puVar25 == puVar31) || (*(uint *)(lVar8 + 4) < *(uint *)(puVar25 + 0x20))) {
                                local_a0[0] = *(undefined4 *)(lVar8 + 4);
                                local_98[0] = 0;
                                local_180 = puVar25;
                                FUN_140055c60(ppuVar32 + 0x30,&local_158,&local_180,local_a0);
                                puVar25 = (undefined *)CONCAT44(uStack340,local_158);
                            }
                            if (*(longlong *)(puVar25 + 0x28) == 0) {
                                puVar24 = (undefined8 *)FUN_14018b280(0x10);
                                if (puVar24 == (undefined8 *)0x0) {
                                    puVar24 = (undefined8 *)0x0;
                                }
                                else {
                                    puVar24[1] = 0;
                                    *puVar24 = 0;
                                }
                                puVar31 = ppuVar32[0x31];
                                puVar25 = puVar31;
                                if (*(undefined **)(puVar31 + 8) != (undefined *)0x0) {
                                    puVar9 = *(undefined **)(puVar31 + 8);
                                    do {
                                        if (*(uint *)(puVar9 + 0x20) < *(uint *)(lVar8 + 4)) {
                                            puVar27 = *(undefined **)(puVar9 + 0x18);
                                        }
                                        else {
                                            puVar27 = *(undefined **)(puVar9 + 0x10);
                                            puVar25 = puVar9;
                                        }
                                        puVar9 = puVar27;
                                    } while (puVar27 != (undefined *)0x0);
                                }
                                if ((puVar25 == puVar31) || (*(uint *)(lVar8 + 4) < *(uint *)(puVar25 + 0x20))) {
                                    local_b8[0] = *(undefined4 *)(lVar8 + 4);
                                    local_b0 = 0;
                                    local_180 = puVar25;
                                    FUN_140055c60(ppuVar32 + 0x30,&local_160,&local_180,local_b8);
                                    puVar25 = (undefined *)CONCAT44(uStack348,local_160);
                                }
                                *(undefined8 **)(puVar25 + 0x28) = puVar24;
                            }
                            FUN_140003460();
                        }
                    }
                    LAB_140443901:
                    if (puVar16[0x1b] != 0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64338 != 0) || (iVar6 = FUN_140244020(), iVar6 < 0)) goto LAB_140443a87;
                            lVar8 = (**(code **)(*DAT_140c63968 + 0x18))();
                        }
                        else {
                            lVar8 = (*DAT_140c63840)();
                        }
                        if (lVar8 != 0) {
                            puVar31 = ppuVar32[0x35];
                            puVar25 = puVar31;
                            if (*(undefined **)(puVar31 + 8) != (undefined *)0x0) {
                                puVar9 = *(undefined **)(puVar31 + 8);
                                do {
                                    if (*(uint *)(puVar9 + 0x20) < *(uint *)(lVar8 + 4)) {
                                        puVar27 = *(undefined **)(puVar9 + 0x18);
                                    }
                                    else {
                                        puVar27 = *(undefined **)(puVar9 + 0x10);
                                        puVar25 = puVar9;
                                    }
                                    puVar9 = puVar27;
                                } while (puVar27 != (undefined *)0x0);
                            }
                            if ((puVar25 == puVar31) || (*(uint *)(lVar8 + 4) < *(uint *)(puVar25 + 0x20))) {
                                local_d8 = (undefined **)
                                        ((ulonglong)local_d8 & 0xffffffff00000000 |
                                         (ulonglong)*(uint *)(lVar8 + 4));
                                local_d0 = 0;
                                local_180 = puVar25;
                                FUN_140055c60(ppuVar32 + 0x34,local_80,&local_180,&local_d8);
                                puVar25 = local_80[0];
                            }
                            if (*(longlong *)(puVar25 + 0x28) == 0) {
                                puVar24 = (undefined8 *)FUN_14018b280(0x10);
                                if (puVar24 == (undefined8 *)0x0) {
                                    puVar24 = (undefined8 *)0x0;
                                }
                                else {
                                    puVar24[1] = 0;
                                    *puVar24 = 0;
                                }
                                puVar31 = ppuVar32[0x35];
                                puVar25 = puVar31;
                                if (*(undefined **)(puVar31 + 8) != (undefined *)0x0) {
                                    puVar9 = *(undefined **)(puVar31 + 8);
                                    do {
                                        if (*(uint *)(puVar9 + 0x20) < *(uint *)(lVar8 + 4)) {
                                            puVar27 = *(undefined **)(puVar9 + 0x18);
                                        }
                                        else {
                                            puVar27 = *(undefined **)(puVar9 + 0x10);
                                            puVar25 = puVar9;
                                        }
                                        puVar9 = puVar27;
                                    } while (puVar27 != (undefined *)0x0);
                                }
                                if ((puVar25 == puVar31) || (*(uint *)(lVar8 + 4) < *(uint *)(puVar25 + 0x20))) {
                                    local_178 = (undefined **)
                                            ((ulonglong)local_178 & 0xffffffff00000000 |
                                             (ulonglong)*(uint *)(lVar8 + 4));
                                    local_170 = 0;
                                    local_180 = puVar25;
                                    FUN_140055c60(ppuVar32 + 0x34,&local_88,&local_180,&local_178);
                                    puVar25 = local_88;
                                }
                                *(undefined8 **)(puVar25 + 0x28) = puVar24;
                            }
                            FUN_140003460();
                        }
                    }
                }
            }
            LAB_140443a87:
            uVar11 = uVar11 + 1;
        } while (uVar11 < local_res18);
    }
    puVar31 = *(undefined **)(ppuVar32[0x31] + 0x10);
    if (puVar31 != ppuVar32[0x31]) {
        do {
            FUN_140029250(*(undefined8 *)(puVar31 + 0x28),FUN_1404420b0,ppuVar32);
            puVar25 = *(undefined **)(puVar31 + 0x18);
            if (puVar25 == (undefined *)0x0) {
                puVar25 = *(undefined **)(puVar31 + 8);
                if (puVar31 == *(undefined **)(puVar25 + 0x18)) {
                    do {
                        puVar31 = puVar25;
                        puVar25 = *(undefined **)(puVar31 + 8);
                    } while (puVar31 == *(undefined **)(puVar25 + 0x18));
                }
                if (*(undefined **)(puVar31 + 0x18) != puVar25) {
                    puVar31 = puVar25;
                }
            }
            else {
                for (puVar9 = *(undefined **)(puVar25 + 0x10); puVar31 = puVar25, puVar9 != (undefined *)0x0
                        ; puVar9 = *(undefined **)(puVar9 + 0x10)) {
                    puVar25 = puVar9;
                }
            }
        } while (puVar31 != ppuVar32[0x31]);
    }
    puVar31 = *(undefined **)(ppuVar32[0x35] + 0x10);
    if (puVar31 != ppuVar32[0x35]) {
        do {
            FUN_140029250(*(undefined8 *)(puVar31 + 0x28),FUN_140442220,ppuVar32);
            puVar25 = *(undefined **)(puVar31 + 0x18);
            if (puVar25 == (undefined *)0x0) {
                puVar25 = *(undefined **)(puVar31 + 8);
                if (puVar31 == *(undefined **)(puVar25 + 0x18)) {
                    do {
                        puVar31 = puVar25;
                        puVar25 = *(undefined **)(puVar31 + 8);
                    } while (puVar31 == *(undefined **)(puVar25 + 0x18));
                }
                if (*(undefined **)(puVar31 + 0x18) != puVar25) {
                    puVar31 = puVar25;
                }
            }
            else {
                for (puVar9 = *(undefined **)(puVar25 + 0x10); puVar31 = puVar25, puVar9 != (undefined *)0x0
                        ; puVar9 = *(undefined **)(puVar9 + 0x10)) {
                    puVar25 = puVar9;
                }
            }
        } while (puVar31 != ppuVar32[0x35]);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c63f58 == 0) {
            iVar6 = FUN_140244ce0();
            if (iVar6 < 0) {
                uVar34 = 0;
            }
            else {
                uVar34 = (**(code **)(*DAT_140c63978 + 0x28))();
            }
        }
        else {
            uVar34 = 0;
        }
    }
    else {
        uVar34 = (*DAT_140c63838)();
    }
    local_res20._0_4_ = 0;
    uVar7 = 0;
    local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)uVar34;
    if (uVar34 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c63f58 == 0) {
                    iVar6 = FUN_140244ce0();
                    if (iVar6 < 0) {
                        puVar26 = (uint *)0x0;
                    }
                    else {
                        puVar26 = (uint *)(**(code **)(*DAT_140c63978 + 0x20))();
                    }
                }
                else {
                    puVar26 = (uint *)0x0;
                }
            }
            else {
                puVar26 = (uint *)(*DAT_140c63848)(&PTR_u_TradeskillMaterial_140a6dcb0,uVar7,DAT_140c63858);
            }
            if (*puVar26 < 0x200) {
                puVar31 = ppuVar32[0xb];
                uVar11 = (**(code **)(puVar31 + 0x18))(puVar26 + 1);
                for (puVar15 = *(ulonglong **)
                        (*(longlong *)(puVar31 + 0x10) + (uVar11 % *(ulonglong *)(puVar31 + 8)) * 8)
                        ; ppuVar32 = local_res8, puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1])
                {
                    if ((uVar11 == *puVar15) &&
                        (iVar6 = (**(code **)(puVar31 + 0x20))(), ppuVar32 = local_res8, iVar6 != 0)) {
                        if (puVar15 + 3 != (ulonglong *)0x0) {
                            if (*(int *)(local_res8 + 1) == 0) {
                                *(uint *)(puVar15[3] + 0x1c8) = *puVar26;
                            }
                            else {
                                if ((uint)local_res20 <= *puVar26 && *puVar26 != (uint)local_res20) {
                                    local_res20._0_4_ = *puVar26;
                                }
                                local_res20 = (undefined **)
                                        ((ulonglong)local_res20 & 0xffffffff00000000 |
                                         (ulonglong)(uint)local_res20);
                                FUN_1400b6120(local_res8[0xb]);
                                uVar34 = *puVar26;
                                plVar4 = (longlong *)ppuVar32[0xb];
                                if (*plVar4 == plVar4[1]) {
                                    FUN_1400290d0(plVar4);
                                }
                                uVar13 = (*(code *)plVar4[3])();
                                lVar8 = plVar4[2];
                                uVar11 = plVar4[1];
                                puVar15 = (ulonglong *)FUN_14018b280();
                                if (puVar15 != (ulonglong *)0x0) {
                                    uVar14 = *(ulonglong *)(lVar8 + (uVar13 % uVar11) * 8);
                                    *puVar15 = uVar13;
                                    puVar15[1] = uVar14;
                                    uVar3 = puVar26[1];
                                    puVar15[3] = (ulonglong)(uVar34 * 2 + 1);
                                    *(uint *)(puVar15 + 2) = uVar3;
                                }
                                *(ulonglong **)(lVar8 + (uVar13 % uVar11) * 8) = puVar15;
                                *plVar4 = *plVar4 + 1;
                                ppuVar32 = local_res8;
                            }
                        }
                        break;
                    }
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)local_res18);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c654f8 == 0) {
            iVar6 = FUN_1402459a0();
            if (iVar6 < 0) {
                uVar34 = 0;
            }
            else {
                uVar34 = (**(code **)(*DAT_140c63868 + 0x28))();
            }
        }
        else {
            uVar34 = 0;
        }
    }
    else {
        uVar34 = (*DAT_140c63838)();
    }
    local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)uVar34;
    if (*(int *)(ppuVar32 + 1) == 0) {
        local_160 = local_res10[0];
        local_158 = local_res10[0];
    }
    else {
        if ((uint)local_res20 < 2) {
            bVar28 = 0;
        }
        else {
            local_res20._0_4_ = (uint)local_res20 - 1;
            bVar28 = 1;
            if (((uint)local_res20 & 0xffff0000) != 0) {
                bVar28 = 0x11;
                local_res20._0_4_ = (uint)local_res20 >> 0x10;
            }
            if (((uint)local_res20 & 0xff00) != 0) {
                bVar28 = bVar28 + 8;
                local_res20._0_4_ = (uint)local_res20 >> 8;
            }
            if (((uint)local_res20 & 0xf0) != 0) {
                bVar28 = bVar28 + 4;
                local_res20._0_4_ = (uint)local_res20 >> 4;
            }
            if (((uint)local_res20 & 0xc) != 0) {
                bVar28 = bVar28 + 2;
                local_res20._0_4_ = (uint)local_res20 >> 2;
            }
            if (((uint)local_res20 & 2) != 0) {
                bVar28 = bVar28 + 1;
            }
        }
        *(uint *)((longlong)ppuVar32 + 0xc) = (uint)bVar28;
        local_160 = bVar28 + 1;
        local_158 = (1 << ((byte)local_160 & 0x1f)) - 1;
    }
    local_res20._0_4_ = 0;
    local_180._0_4_ = 0;
    local_res20 = (undefined **)((ulonglong)local_res20 & 0xffffffff00000000);
    local_180 = (undefined *)((ulonglong)local_180 & 0xffffffff00000000);
    if (uVar34 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c654f8 == 0) {
                    iVar6 = FUN_1402459a0();
                    if (iVar6 < 0) {
                        puVar26 = (uint *)0x0;
                    }
                    else {
                        puVar26 = (uint *)(**(code **)(*DAT_140c63868 + 0x20))();
                    }
                }
                else {
                    puVar26 = (uint *)0x0;
                }
            }
            else {
                puVar26 = (uint *)(*DAT_140c63848)(&PTR_u_TradeskillSchematic2_140a6dd58,(uint)local_180,
                                                   DAT_140c63858);
            }
            puVar31 = ppuVar32[0xb];
            uVar11 = (**(code **)(puVar31 + 0x18))(puVar26 + 3);
            for (puVar15 = *(ulonglong **)
                    (*(longlong *)(puVar31 + 0x10) + (uVar11 % *(ulonglong *)(puVar31 + 8)) * 8);
                 puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                if ((uVar11 == *puVar15) &&
                    (iVar6 = (**(code **)(puVar31 + 0x20))(puVar26 + 3), ppuVar32 = local_res8, iVar6 != 0))
                {
                    if (puVar15 + 3 != (ulonglong *)0x0) {
                        uVar11 = puVar15[3];
                        if (*(int *)(local_res8 + 1) == 0) {
                            *(uint *)(uVar11 + 0x1cc) = *puVar26;
                        }
                        else {
                            if ((uint)local_res20 <= *puVar26 && *puVar26 != (uint)local_res20) {
                                local_res20._0_4_ = *puVar26;
                            }
                            local_res20 = (undefined **)
                                    ((ulonglong)local_res20 & 0xffffffff00000000 |
                                     (ulonglong)(uint)local_res20);
                            FUN_1400b6120();
                            uVar7 = (uint)uVar11 & local_158;
                            uVar34 = *puVar26;
                            bVar28 = (byte)local_160;
                            plVar4 = (longlong *)ppuVar32[0xb];
                            if (*plVar4 == plVar4[1]) {
                                FUN_1400290d0(plVar4);
                            }
                            uVar13 = (*(code *)plVar4[3])(puVar26 + 3);
                            lVar8 = plVar4[2];
                            uVar11 = plVar4[1];
                            puVar15 = (ulonglong *)FUN_14018b280(0x20);
                            if (puVar15 != (ulonglong *)0x0) {
                                uVar14 = *(ulonglong *)(lVar8 + (uVar13 % uVar11) * 8);
                                *puVar15 = uVar13;
                                puVar15[1] = uVar14;
                                uVar3 = puVar26[3];
                                puVar15[3] = (ulonglong)((uVar34 << (bVar28 & 0x1f)) + uVar7);
                                *(uint *)(puVar15 + 2) = uVar3;
                            }
                            *(ulonglong **)(lVar8 + (uVar13 % uVar11) * 8) = puVar15;
                            *plVar4 = *plVar4 + 1;
                        }
                    }
                    break;
                }
            }
            puVar1 = puVar26 + 0x18;
            puVar31 = local_res8[0xb];
            uVar11 = (**(code **)(puVar31 + 0x18))(puVar1);
            for (puVar15 = *(ulonglong **)
                    (*(longlong *)(puVar31 + 0x10) + (uVar11 % *(ulonglong *)(puVar31 + 8)) * 8);
                 puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                if ((uVar11 == *puVar15) &&
                    (iVar6 = (**(code **)(puVar31 + 0x20))(puVar1), ppuVar32 = local_res8, iVar6 != 0)) {
                    if (puVar15 + 3 != (ulonglong *)0x0) {
                        uVar11 = puVar15[3];
                        if (*(int *)(local_res8 + 1) == 0) {
                            *(uint *)(uVar11 + 0x1cc) = *puVar26;
                        }
                        else {
                            if ((uint)local_res20 <= *puVar26 && *puVar26 != (uint)local_res20) {
                                local_res20._0_4_ = *puVar26;
                            }
                            local_res20 = (undefined **)
                                    ((ulonglong)local_res20 & 0xffffffff00000000 |
                                     (ulonglong)(uint)local_res20);
                            FUN_1400b6120();
                            uVar7 = (uint)uVar11 & local_158;
                            uVar34 = *puVar26;
                            bVar28 = (byte)local_160;
                            plVar4 = (longlong *)ppuVar32[0xb];
                            if (*plVar4 == plVar4[1]) {
                                FUN_1400290d0(plVar4);
                            }
                            uVar13 = (*(code *)plVar4[3])(puVar1);
                            lVar8 = plVar4[2];
                            uVar11 = plVar4[1];
                            puVar15 = (ulonglong *)FUN_14018b280(0x20);
                            if (puVar15 != (ulonglong *)0x0) {
                                uVar14 = *(ulonglong *)(lVar8 + (uVar13 % uVar11) * 8);
                                *puVar15 = uVar13;
                                puVar15[1] = uVar14;
                                uVar3 = *puVar1;
                                puVar15[3] = (ulonglong)((uVar34 << (bVar28 & 0x1f)) + uVar7);
                                *(uint *)(puVar15 + 2) = uVar3;
                            }
                            *(ulonglong **)(lVar8 + (uVar13 % uVar11) * 8) = puVar15;
                            *plVar4 = *plVar4 + 1;
                        }
                    }
                    break;
                }
            }
            local_180._0_4_ = (uint)local_180 + 1;
            local_180 = (undefined *)
                    ((ulonglong)local_180 & 0xffffffff00000000 | (ulonglong)(uint)local_180);
            ppuVar32 = local_res8;
        } while ((uint)local_180 < (uint)local_res18);
    }
    *(undefined4 *)(ppuVar32 + 2) = 1;
    if (local_150 != 0) {
        (**(code **)(*(longlong *)(local_150 + -0x10) + 8))(local_150 + -0x10);
    }
    if (local_188 != 0) {
        (**(code **)(*(longlong *)(local_188 + -0x10) + 8))(local_188 + -0x10);
    }
    return 0;
}



longlong FUN_140444130(longlong param_1,longlong param_2)

{
    uint *puVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong local_res10;

    uVar2 = *(uint *)(param_2 + 0x2c);
    if ((uVar2 != 0) && ((*(uint *)(param_2 + 0x7c) & 0x4000) == 0)) {
        lVar3 = *(longlong *)(param_1 + 0x20);
        local_res10 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar2) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res10 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar3) || (uVar2 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar3;
        }
        if (local_res10 != lVar3) {
            lVar3 = *(longlong *)(local_res10 + 0x30);
            local_res10 = lVar3;
            if (*(longlong *)(lVar3 + 8) != 0) {
                lVar4 = *(longlong *)(lVar3 + 8);
                do {
                    if (*(uint *)(lVar4 + 0x20) < *(uint *)(param_2 + 0x24)) {
                        lVar5 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        lVar5 = *(longlong *)(lVar4 + 0x10);
                        local_res10 = lVar4;
                    }
                    lVar4 = lVar5;
                } while (lVar5 != 0);
            }
            if ((local_res10 == lVar3) || (*(uint *)(param_2 + 0x24) < *(uint *)(local_res10 + 0x20))) {
                local_res10 = lVar3;
            }
            if (local_res10 != lVar3) {
                uVar7 = 0;
                if (*(ulonglong *)(local_res10 + 0x30) != 0) {
                    uVar2 = *(uint *)(param_2 + 0x3c);
                    plVar6 = *(longlong **)(local_res10 + 0x28);
                    do {
                        puVar1 = (uint *)(*plVar6 + 0xc);
                        if ((*puVar1 < uVar2 || *puVar1 == uVar2) &&
                            (puVar1 = (uint *)(*plVar6 + 0x10), uVar2 < *puVar1 || uVar2 == *puVar1)) {
                            return (*(longlong **)(local_res10 + 0x28))[uVar7];
                        }
                        uVar7 = uVar7 + 1;
                        plVar6 = plVar6 + 1;
                    } while (uVar7 < *(ulonglong *)(local_res10 + 0x30));
                }
            }
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140444240(longlong param_1)

{
    uint uVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    uint uVar12;

    puVar10 = (undefined8 *)0x0;
    FUN_140236320();
    FUN_140236ba0();
    if (DAT_140c63838 == (code *)0x0) {
        uVar1 = 0;
        if ((_DAT_140c64b2c == 0) && (iVar2 = FUN_14020e980(), -1 < iVar2)) {
            uVar1 = (**(code **)(*DAT_140c64298 + 0x28))();
        }
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_ItemSpecial_140a6b010,DAT_140c63858);
    }
    puVar9 = puVar10;
    puVar11 = puVar10;
    puVar8 = puVar10;
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar3 = puVar10;
                if (_DAT_140c64b2c == 0) {
                    iVar2 = FUN_14020e980();
                    if (iVar2 < 0) {
                        puVar3 = (undefined8 *)0x0;
                    }
                    else {
                        puVar3 = (undefined8 *)(**(code **)(*DAT_140c64298 + 0x20))(DAT_140c64298,puVar8);
                    }
                }
            }
            else {
                puVar3 = (undefined8 *)(*DAT_140c63848)(&PTR_u_ItemSpecial_140a6b010,puVar8,DAT_140c63858);
            }
            if (*(int *)((longlong)puVar3 + 0xc) == 0) {
                LAB_140444379:
                if (*(int *)(puVar3 + 2) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64d94 != 0) || (iVar2 = FUN_140236320(), iVar2 < 0)) goto LAB_140444469;
                        lVar4 = (**(code **)(*DAT_140c653f0 + 0x18))();
                    }
                    else {
                        lVar4 = (*DAT_140c63840)(&PTR_u_Spell4_140a6d0a8,*(int *)(puVar3 + 2),DAT_140c63858);
                    }
                    if (lVar4 == 0) goto LAB_140444469;
                }
                if (*(int *)((longlong)puVar3 + 4) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c647d0 != 0) || (iVar2 = FUN_140225760(), iVar2 < 0)) goto LAB_140444469;
                        lVar4 = (**(code **)(*DAT_140c64208 + 0x18))();
                    }
                    else {
                        lVar4 = (*DAT_140c63840)(&PTR_u_Prerequisite_140a6c2e0,*(int *)((longlong)puVar3 + 4),
                                                 DAT_140c63858);
                    }
                    if ((lVar4 == 0) || (*(int *)((longlong)puVar3 + 0xc) != 0)) goto LAB_140444469;
                }
                puVar5 = (undefined8 *)FUN_14018db00(puVar9,(longlong)puVar11 + 1,8);
                puVar5[(longlong)puVar11] = puVar3;
                puVar3 = puVar9;
                if ((puVar9 != puVar5) &&
                    (FUN_1407db590(puVar5), puVar3 = puVar5, puVar9 != (undefined8 *)0x0)) {
                    (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
                }
                puVar11 = (undefined8 *)((longlong)puVar11 + 1);
                puVar9 = puVar3;
            }
            else if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64d94 == 0) && (iVar2 = FUN_140236320(), -1 < iVar2)) {
                    lVar4 = (**(code **)(*DAT_140c653f0 + 0x18))();
                    goto LAB_140444370;
                }
            }
            else {
                lVar4 = (*DAT_140c63840)(&PTR_u_Spell4_140a6d0a8,*(int *)((longlong)puVar3 + 0xc),
                                         DAT_140c63858);
                LAB_140444370:
                if (lVar4 != 0) goto LAB_140444379;
            }
            LAB_140444469:
            uVar12 = (int)puVar8 + 1;
            puVar8 = (undefined8 *)(ulonglong)uVar12;
        } while (uVar12 < uVar1);
    }
    puVar3 = (undefined8 *)FUN_14018b280(0x28);
    puVar8 = puVar10;
    if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        uVar6 = FUN_1401a40c0(puVar11);
        puVar3[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar3[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar3[1] << 3);
        puVar3[3] = &LAB_1400522d0;
        puVar3[4] = &LAB_1400522e0;
        puVar8 = puVar3;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar8;
    if (puVar11 != (undefined8 *)0x0) {
        do {
            FUN_1400bd4a0(*(undefined8 *)(param_1 + 0x60),puVar9[(longlong)puVar10],
                          puVar9[(longlong)puVar10]);
            puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        } while (puVar10 < puVar11);
    }
    if (puVar9 != (undefined8 *)0x0) {
        (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
    }
    return 0;
}



undefined8 FUN_140444550(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar1 = *(longlong *)(param_1 + 0x58);
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
    if (puVar2 == (ulonglong *)&DAT_ffffffffffffffe8) {
        return 0;
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404445d0(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong lVar9;
    undefined4 *puVar10;
    undefined4 uVar11;
    undefined auStack1032 [32];
    undefined *local_3e8;
    undefined8 local_3e0;
    undefined local_3d8 [8];
    undefined4 *local_3d0;
    undefined local_3c8 [8];
    uint *local_3c0;
    undefined8 local_3b8;
    undefined **local_3a8;
    undefined4 local_3a0;
    undefined4 *local_398;
    undefined8 local_390;
    undefined8 local_388;
    undefined8 local_380;
    undefined8 local_378;
    undefined8 local_370;
    undefined8 local_368;
    undefined4 local_360;
    undefined local_358 [16];
    undefined4 local_348;
    undefined8 local_340;
    undefined8 local_338;
    undefined8 local_32c;
    undefined4 local_324;
    undefined8 local_320;
    undefined8 local_318;
    undefined8 local_310;
    undefined local_308 [16];
    undefined8 local_2f8;
    undefined4 local_2dc;
    undefined8 local_290;
    undefined8 local_288;
    undefined8 local_280;
    undefined8 local_278;
    undefined8 local_270;
    undefined4 local_238 [2];
    undefined local_230 [148];
    undefined4 local_19c [85];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack1032;
    local_3d0 = param_2;
    FUN_1400b52a0(local_230);
    FUN_1407e4830(local_238,0,0x1f0);
    FUN_1407e4830(local_230,0,0x138);
    FUN_1407e4830(local_19c,0,0x90);
    puVar10 = local_19c;
    for (lVar9 = 0xf; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = 0xc5;
        puVar10 = puVar10 + 1;
    }
    puVar10 = local_238;
    if (param_2 != (undefined4 *)0x0) {
        puVar10 = param_2;
    }
    puVar3 = (undefined4 *)FUN_1402096e0(param_3);
    local_3c0 = puVar3 + 0x1f;
    puVar4 = puVar3;
    if ((*local_3c0 & 0x4000) != 0) {
        if (_DAT_140c7cdf4 == 0) {
            _DAT_140c7cdf4 = 1;
            lVar9 = FUN_140200220(0x4be);
            if (lVar9 == 0) {
                DAT_140c7cdf0 = 0;
            }
            else {
                DAT_140c7cdf0 = *(undefined4 *)(lVar9 + 4);
            }
        }
        iVar1 = FUN_140444550(param_1);
        if (iVar1 == 0) {
            if (_DAT_140c7cdf4 == 0) {
                _DAT_140c7cdf4 = 1;
                lVar9 = FUN_140200220(0x4be);
                if (lVar9 == 0) {
                    DAT_140c7cdf0 = 0;
                }
                else {
                    DAT_140c7cdf0 = *(undefined4 *)(lVar9 + 4);
                }
            }
            goto LAB_140444c9e;
        }
        if (_DAT_140c7cdf4 == 0) {
            _DAT_140c7cdf4 = 1;
            lVar9 = FUN_140200220();
            if (lVar9 == 0) {
                DAT_140c7cdf0 = 0;
            }
            else {
                DAT_140c7cdf0 = *(undefined4 *)(lVar9 + 4);
            }
        }
        puVar4 = (undefined4 *)FUN_1402096e0(DAT_140c7cdf0);
    }
    puVar5 = (undefined4 *)FUN_140209f60(puVar3[7]);
    puVar6 = (undefined4 *)FUN_140209b20(puVar3[8]);
    puVar7 = (undefined4 *)FUN_14020a3a0(puVar3[9]);
    FUN_1407e4830(puVar10,0,0x1f0);
    *puVar10 = *puVar3;
    puVar10[0x50] = *puVar5;
    puVar10[0x52] = *puVar6;
    puVar10[0x51] = *puVar7;
    puVar10[0x56] = puVar4[4];
    if (((*(byte *)(puVar4 + 0x1f) & 1) == 0) && (puVar4[0x10] != 0)) {
        puVar10[0x57] = puVar4[0x10];
    }
    else {
        puVar10[0x57] = 1;
    }
    puVar10[0x58] = puVar3[0xf];
    puVar10[0x59] = puVar4[0x11];
    puVar10[0x5a] = puVar4[1];
    puVar10[0x5b] = puVar4[2];
    puVar10[0x5c] = puVar4[3];
    puVar10[0x5d] = puVar4[6];
    puVar10[0x5e] = puVar4[0x2b];
    if ((-1.0 <= (float)puVar4[0x2b]) && ((float)puVar4[0x2b] <= 1.0)) {
        puVar10[99] = puVar4[0xc];
        puVar10[100] = puVar4[0xd];
        puVar10[0x65] = puVar4[0xe];
        puVar10[0x66] = puVar4[0x12];
        puVar10[0x68] = puVar3[0x14];
        puVar10[0x69] = puVar4[0x15];
        puVar10[0x6a] = puVar4[0x16];
        puVar10[0x6c] = puVar4[0x17];
        puVar10[0x6d] = puVar4[0x18];
        puVar10[0x6e] = puVar4[0x19];
        uVar2 = puVar4[0x1f];
        puVar10[0x53] = uVar2;
        if ((*local_3c0 & 0x4000) != 0) {
            puVar10[0x53] = uVar2 | 0x4000;
        }
        puVar10[0x54] = puVar4[0x20];
        if ((*local_3c0 & 0x4000) == 0) {
            uVar2 = puVar7[5] | puVar6[3] | puVar5[2];
        }
        else {
            uVar2 = 0x10004;
        }
        puVar10[0x55] = uVar2;
        puVar10[0x67] = puVar6[2];
        puVar10[0x70] = puVar4[0x1a];
        puVar10[0x71] = puVar4[0x1b];
        puVar10[0x74] = puVar4[0x1c];
        puVar10[0x75] = puVar4[0x1d];
        puVar10[0x76] = puVar4[0x1e];
        if (puVar4[5] != 0) {
            lVar9 = FUN_14040fa40();
            if (lVar9 == 0) goto LAB_140444c9e;
            puVar10[0x6f] = puVar4[5];
        }
        iVar1 = puVar3[10];
        puVar10[0x61] = iVar1;
        puVar10[0x62] = puVar3[0x2a];
        if ((iVar1 == 0) && (puVar4[10] != 0)) {
            puVar10[0x61] = puVar4[10];
            puVar10[0x62] = puVar4[0x2a];
        }
        if ((puVar10[0x61] == 0) && (lVar9 = FUN_140444130(), lVar9 != 0)) {
            puVar10[0x61] = *(undefined4 *)(lVar9 + 0x14);
        }
        lVar9 = 0;
        *(undefined8 *)(puVar10 + 0x5f) = 0;
        if ((*local_3c0 & 0x4000) == 0) {
            puVar5 = (undefined4 *)FUN_14020e7a0();
            if (puVar5 != (undefined4 *)0x0) {
                if ((puVar10[0x55] & 0x400) == 0) {
                    uVar11 = 0;
                }
                else {
                    uVar11 = *puVar5;
                }
                puVar10[0x5f] = uVar11;
                puVar10[0x60] = puVar5[4];
            }
            puVar10[0x60] = puVar10[0x60] | puVar4[0x13];
        }
        else {
            lVar8 = FUN_14020bd20(puVar10[0x61]);
            if ((lVar8 == 0) || (lVar8 = FUN_14020a3a0(*(undefined4 *)(lVar8 + 0x10)), lVar8 == 0)) {
                uVar11 = puVar7[2];
            }
            else {
                lVar9 = FUN_140209b20(*(undefined4 *)(lVar8 + 0x20));
                uVar11 = *(undefined4 *)(lVar8 + 8);
            }
            puVar5 = (undefined4 *)FUN_14020e7a0(uVar11);
            if (puVar5 != (undefined4 *)0x0) {
                puVar10[0x5f] = *puVar5;
            }
            if (lVar9 != 0) {
                puVar10[0x67] = *(undefined4 *)(lVar9 + 8);
            }
        }
        puVar10[0x6b] = puVar4[0x21];
        if ((1 < (uint)puVar10[0x68]) && (1 < (uint)puVar10[0x69])) {
            puVar10[0x68] = 1;
        }
        uVar2 = puVar10[0x55];
        if (((((uVar2 & 4) == 0) && ((uVar2 >> 8 & 1) == 0)) && (1 < (uint)puVar10[0x68])) &&
            ((puVar10[0x53] & 0x4000) == 0)) {
            puVar10[0x68] = 1;
        }
        if (((uVar2 >> 9 & 1) == 0) && (puVar10[0x6c] != 0)) {
            puVar10[0x6c] = 0;
        }
        if ((((puVar10[0x60] == 0) || (puVar10[0x50] == 0x21)) || ((uVar2 >> 10 & 1) != 0)) &&
            ((((puVar4[0x17] == 0 || (*(int *)(param_1 + 2) != 0)) || (puVar4[5] == 0)) ||
              ((lVar9 = FUN_14040fa40(param_1), lVar9 == 0 || (*(int *)(lVar9 + 0x10) == 0)))))) {
            local_3a8 = &PTR_FUN_140b66a40;
            local_358 = ZEXT816(0);
            local_308 = ZEXT816(0);
            local_3e0 = 0;
            local_3a0 = 1;
            local_370 = 0;
            local_324 = 1;
            local_368 = 0;
            local_360 = 0;
            local_348 = 0;
            local_340 = 0;
            local_338 = 0;
            local_32c = 0;
            local_320 = 0;
            local_318 = 0;
            local_310 = 0;
            local_2f8 = 0;
            local_2dc = 0;
            local_290 = 0;
            local_288 = 0;
            local_280 = 0;
            local_278 = 0;
            local_270 = 0;
            local_390 = 1;
            local_388 = 0;
            local_380 = 0;
            local_378 = 0;
            local_3e8 = (undefined *)0x0;
            local_398 = puVar10;
            iVar1 = FUN_14040c310(&local_3a8,puVar10 + 2,param_1,0);
            if (iVar1 == 0) {
                if (((puVar4[1] != 0) && (puVar4[2] != 0)) && (*(int *)(param_1 + 2) == 0)) {
                    local_3b8 = CONCAT44((int)((ulonglong)local_3b8 >> 0x20),1);
                    local_3c0 = (uint *)0x0;
                    iVar1 = FUN_14040ec60(param_1,puVar10,&local_3c0);
                    if (iVar1 < 0) goto LAB_140444c9e;
                }
                if (((puVar10[0x50] - 1 < 2) && (*(int *)(param_1 + 2) == 0)) &&
                    ((puVar10[0x53] & 0x4000) == 0)) {
                    local_3e8 = local_3c8;
                    iVar1 = FUN_14040efb0(puVar10,0,&local_3c0,local_3d8);
                    if (iVar1 < 0) goto LAB_140444c9e;
                    local_3b8 = 0;
                    local_3c0 = (uint *)0x0;
                    iVar1 = FUN_14040eed0();
                    if (iVar1 < 0) goto LAB_140444c9e;
                }
                (**(code **)(*param_1 + 0x20))(param_1,local_3d0,puVar3);
            }
        }
    }
    LAB_140444c9e:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack1032);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140444cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    ulonglong uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    uint uVar8;
    uint uVar10;
    ulonglong uVar11;
    float fVar12;
    undefined4 in_XMM6_Da;
    float fVar13;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar14 [16];
    ulonglong uVar9;

    uVar11 = 0;
    if (_DAT_140c7cd8c == 0) {
        _DAT_140c7cd8c = 1;
        lVar5 = FUN_140200220();
        if (lVar5 == 0) {
            DAT_140c7cd88 = 0;
        }
        else {
            DAT_140c7cd88 = *(int *)(lVar5 + 0xc);
        }
    }
    iVar4 = DAT_140c7cd88;
    if (_DAT_140c7cc6c == 0) {
        _DAT_140c7cc6c = 1;
        lVar5 = FUN_140200220();
        if (lVar5 == 0) {
            DAT_140c7cc68 = 0;
        }
        else {
            DAT_140c7cc68 = *(int *)(lVar5 + 4);
        }
    }
    iVar3 = DAT_140c7cc68;
    if (DAT_140c7cc68 < iVar4) {
        iVar3 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar3) {
        iVar4 = iVar3;
    }
    uVar8 = iVar4 + 0x65;
    uVar9 = (ulonglong)uVar8;
    if (*(ulonglong *)(param_1 + 0x40) < uVar9 || *(ulonglong *)(param_1 + 0x40) == uVar9) {
        lVar5 = FUN_14018db00(*(undefined8 *)(param_1 + 0x38),uVar9,4);
        uVar2 = *(ulonglong *)(param_1 + 0x40);
        if (uVar2 < uVar9) {
            puVar7 = (undefined4 *)(lVar5 + uVar2 * 4);
            for (lVar6 = uVar8 - uVar2; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
            }
        }
        if (*(longlong *)(param_1 + 0x38) != lVar5) {
            FUN_1407db590(lVar5,*(longlong *)(param_1 + 0x38),*(longlong *)(param_1 + 0x40) << 2);
            lVar6 = *(longlong *)(param_1 + 0x38);
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            *(longlong *)(param_1 + 0x38) = lVar5;
        }
    }
    *(ulonglong *)(param_1 + 0x40) = uVar9;
    if (uVar8 != 0) {
        auVar14 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar9 = uVar11;
        do {
            fVar13 = 0.0;
            puVar7 = &DAT_140b02738;
            lVar5 = 0xc;
            do {
                uVar1 = *puVar7;
                uVar10 = (uint)uVar11;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c6559c == 0) && (iVar4 = FUN_14020e540(), -1 < iVar4)) {
                        lVar6 = (**(code **)(*DAT_140c648e8 + 0x18))(DAT_140c648e8,uVar1);
                        goto LAB_140444e43;
                    }
                }
                else {
                    lVar6 = (*DAT_140c63840)(&PTR_u_ItemSlot_140a6afd8,uVar1,DAT_140c63858,param_4,auVar14);
                    LAB_140444e43:
                    if ((lVar6 != 0) &&
                        (*(uint *)(lVar6 + 0x24) < uVar10 || *(uint *)(lVar6 + 0x24) == uVar10)) {
                        fVar12 = (float)FUN_14040f570(param_1);
                        fVar13 = fVar13 + fVar12 * *(float *)(lVar6 + 0x14);
                    }
                }
                puVar7 = puVar7 + 1;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            uVar11 = (ulonglong)(uVar10 + 1);
            *(float *)(uVar9 + *(longlong *)(param_1 + 0x38)) = fVar13;
            uVar9 = uVar9 + 4;
        } while (uVar10 + 1 < uVar8);
    }
    return;
}



int FUN_140444eb0(void)

{
    int iVar1;
    undefined8 *puVar2;

    if (DAT_140c658f0 != (undefined8 *)0x0) {
        return 0;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x1c0,0);
    if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        FUN_1400b5470(puVar2);
        *puVar2 = &PTR_FUN_140b66fa0;
    }
    iVar1 = FUN_140444240(puVar2);
    if (-1 < iVar1) {
        iVar1 = FUN_1404422f0(puVar2);
    }
    if (iVar1 < 0) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
        }
        return iVar1;
    }
    DAT_140c658f0 = puVar2;
    return 0;
}



undefined8 FUN_140444f60(longlong param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    short *psVar4;
    int iVar5;
    short *psVar6;

    iVar5 = *(int *)(param_3 + 0x28);
    if (param_2 == 0) {
        if (iVar5 != 0) goto LAB_14044509e;
        lVar3 = FUN_140444130(param_1,param_3);
        if (lVar3 == 0) {
            return 0;
        }
        iVar5 = *(int *)(lVar3 + 0x14);
    }
    else {
        iVar5 = *(int *)(param_2 + 0x184);
        *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(param_3 + 0xb0);
        *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_3 + 0xb4);
        iVar1 = *(int *)(param_3 + 200);
        *(int *)(param_2 + 0x1e4) = iVar1;
        if ((iVar1 == 0) && (lVar3 = FUN_14020a3a0(*(undefined4 *)(param_3 + 0x24)), lVar3 != 0)) {
            *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(lVar3 + 0x10);
        }
        if (*(int *)(param_2 + 0x1e4) == 0) {
            lVar3 = FUN_140209b20(*(undefined4 *)(param_3 + 0x20));
            if (lVar3 != 0) {
                *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(lVar3 + 0x14);
            }
            if ((*(int *)(param_2 + 0x1e4) == 0) &&
                (lVar3 = FUN_140209f60(*(undefined4 *)(param_3 + 0x1c)), lVar3 != 0)) {
                *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(lVar3 + 0xc);
            }
        }
        uVar2 = *(ulonglong *)(param_3 + 0xc0);
        psVar6 = (short *)0x0;
        psVar4 = psVar6;
        if (uVar2 != 0) {
            if (DAT_140c3fe70 < uVar2) {
                psVar4 = (short *)0x0;
            }
            else {
                psVar4 = (short *)(DAT_140c3fe68 + uVar2);
            }
        }
        *(short **)(param_2 + 0x1e8) = psVar4;
        if (((psVar4 == (short *)0x0) || (*psVar4 == 0)) &&
            (lVar3 = FUN_140444130(param_1,param_3), lVar3 != 0)) {
            uVar2 = *(ulonglong *)(lVar3 + 0x18);
            if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                psVar6 = (short *)(DAT_140c3fe68 + uVar2);
            }
            *(short **)(param_2 + 0x1e8) = psVar6;
        }
    }
    if (iVar5 == 0) {
        return 0;
    }
    LAB_14044509e:
    if ((*(int *)(param_1 + 0x10) == 0) && ((*(uint *)(param_3 + 0x7c) & 0x4000) == 0)) {
        FUN_14020bd20(iVar5);
    }
    return 0;
}



undefined4 FUN_1404450e0(void)

{
    longlong lVar1;

    lVar1 = FUN_1403d8d00();
    if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 0x24);
    }
    return 0;
}



undefined4 FUN_140445100(void)

{
    longlong lVar1;

    lVar1 = FUN_1403d8eb0();
    if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 0x24);
    }
    return 0;
}



undefined4 FUN_140445120(void)

{
    longlong lVar1;

    lVar1 = FUN_1403d8f70();
    if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 0x24);
    }
    return 0;
}



ulonglong FUN_140445140(int param_1,uint param_2,uint param_3)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar3 = (ulonglong)param_2;
    if ((int)param_3 < 0) {
        if ((param_2 == param_3) || (-1 < (int)param_2)) {
            return (ulonglong)param_3;
        }
        if ((param_3 & 0x3ff) != 0) {
            uVar3 = (ulonglong)(param_2 & 0xfffffc00 | param_3 & 0x3ff);
        }
        if ((param_3 & 0xffc00) != 0) {
            uVar3 = (ulonglong)((uint)uVar3 & 0xfff003ff | param_3 & 0xffc00);
        }
        uVar2 = uVar3;
        if ((param_3 & 0x3ff00000) != 0) {
            return (ulonglong)((uint)uVar3 & 0xc00fffff | param_3 & 0x3ff00000);
        }
    }
    else {
        FUN_14020b8e0();
        uVar2 = FUN_1401dc0d0();
        uVar1 = (uint)uVar2;
        if (((int)param_2 < 0) && (uVar2 = uVar3, param_1 != 0)) {
            if ((param_2 & 0x3ff) == 0) {
                uVar2 = (ulonglong)(param_2 ^ (uVar1 ^ param_2) & 0x3ff);
            }
            if ((uVar2 & 0xffc00) == 0) {
                uVar2 = (ulonglong)((uint)uVar2 ^ (uVar1 ^ (uint)uVar2) & 0xffc00);
            }
            if ((uVar2 & 0x3ff00000) == 0) {
                uVar2 = (ulonglong)((uint)uVar2 ^ (uVar1 ^ (uint)uVar2) & 0x3ff00000);
            }
        }
    }
    return uVar2;
}



undefined8 * FUN_140445210(undefined8 *param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        uVar6 = 0;
        uVar3 = uVar6;
        if (((*(longlong *)(DAT_140c65898 + 0x7258) == 0) ||
             (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 0)) &&
            (iVar2 = FUN_1403b48b0(), iVar2 != 0)) {
            lVar4 = FUN_140200220();
            if (lVar4 == 0) {
                uVar3 = 0x5a;
            }
            else {
                uVar3 = *(undefined4 *)(lVar4 + 4);
            }
        }
        iVar2 = FUN_1403c86d0();
        if (iVar2 != 0) {
            uVar3 = FUN_1403c86d0();
        }
        lVar4 = *(longlong *)(DAT_140c65898 + 0x7258);
        uVar5 = uVar6;
        if ((lVar4 != 0) && ((*(int *)(lVar4 + 0x14) == 3 || (uVar5 = 0, *(int *)(lVar4 + 0x14) == 8))))
        {
            uVar5 = 1;
        }
        if (lVar4 != 0) {
            uVar6 = *(undefined4 *)(lVar4 + 0x40);
        }
        lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
        iVar2 = *(int *)(lVar4 + 0x3c);
        if (iVar2 == 0) {
            iVar2 = *(int *)(lVar4 + 0x38);
        }
        uVar1 = *(undefined4 *)(lVar4 + 0x38);
        *(undefined4 *)(param_1 + 3) = uVar3;
        *(undefined4 *)param_1 = uVar1;
        *(int *)((longlong)param_1 + 4) = iVar2;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
        param_1[1] = 0;
        return param_1;
    }
    *param_1 = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    return param_1;
}



undefined8 * FUN_140445320(undefined8 *param_1,ulonglong param_2)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar6 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        uVar3 = uVar6;
        if (((*(longlong *)(DAT_140c65898 + 0x7258) == 0) ||
             (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 0)) &&
            (iVar2 = FUN_1403b48b0(), iVar2 != 0)) {
            lVar4 = FUN_140200220();
            if (lVar4 == 0) {
                uVar3 = 0x5a;
            }
            else {
                uVar3 = *(undefined4 *)(lVar4 + 4);
            }
        }
        iVar2 = FUN_1403c86d0();
        if (iVar2 != 0) {
            uVar3 = FUN_1403c86d0();
        }
        lVar4 = *(longlong *)(DAT_140c65898 + 0x7258);
        uVar5 = 0;
        if ((lVar4 != 0) && ((*(int *)(lVar4 + 0x14) == 3 || (*(int *)(lVar4 + 0x14) == 8)))) {
            uVar5 = 1;
        }
        if (lVar4 != 0) {
            uVar6 = *(undefined4 *)(lVar4 + 0x40);
        }
        lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
        iVar2 = *(int *)(lVar4 + 0x3c);
        if (iVar2 == 0) {
            iVar2 = *(int *)(lVar4 + 0x38);
        }
        uVar1 = *(undefined4 *)(lVar4 + 0x38);
        *(undefined4 *)(param_1 + 3) = uVar3;
        *(undefined4 *)param_1 = uVar1;
        *(int *)((longlong)param_1 + 4) = iVar2;
        *(uint *)(param_1 + 1) = (uint)param_2 & 0xffff;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
        *(uint *)(param_1 + 2) = (uint)(param_2 & 0xffffffff) >> 0x18;
        *(uint *)((longlong)param_1 + 0xc) = (uint)((param_2 & 0xffffffff) >> 0x10) & 0xff;
        return param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 1;
    return param_1;
}



undefined4 FUN_140445440(undefined4 *param_1,int param_2)

{
    undefined4 uVar1;
    longlong lVar2;

    if (param_2 == 0) {
        if (param_1[1] == 0) {
            param_1[1] = 1;
            lVar2 = FUN_140200220(0x44d);
            if (lVar2 != 0) {
                uVar1 = *(undefined4 *)(lVar2 + 4);
                *param_1 = uVar1;
                return uVar1;
            }
            *param_1 = 0;
        }
        return *param_1;
    }
    if (param_2 == 1) {
        if (param_1[3] == 0) {
            param_1[3] = 1;
            lVar2 = FUN_140200220(0x44d);
            if (lVar2 != 0) {
                uVar1 = *(undefined4 *)(lVar2 + 8);
                param_1[2] = uVar1;
                return uVar1;
            }
            param_1[2] = 0;
        }
        return param_1[2];
    }
    if (param_2 == 2) {
        if (param_1[5] == 0) {
            param_1[5] = 1;
            lVar2 = FUN_140200220(0x44d);
            if (lVar2 != 0) {
                uVar1 = *(undefined4 *)(lVar2 + 0xc);
                param_1[4] = uVar1;
                return uVar1;
            }
            param_1[4] = 0;
        }
        return param_1[4];
    }
    if (param_2 != 3) {
        if (param_2 != 4) {
            return 0;
        }
        if (param_1[9] == 0) {
            param_1[9] = 1;
            lVar2 = FUN_140200220(0x44d);
            if (lVar2 != 0) {
                uVar1 = *(undefined4 *)(lVar2 + 0x14);
                param_1[8] = uVar1;
                return uVar1;
            }
            param_1[8] = 0;
        }
        return param_1[8];
    }
    if (param_1[7] == 0) {
        param_1[7] = 1;
        lVar2 = FUN_140200220(0x44d);
        if (lVar2 != 0) {
            uVar1 = *(undefined4 *)(lVar2 + 0x10);
            param_1[6] = uVar1;
            return uVar1;
        }
        param_1[6] = 0;
    }
    return param_1[6];
}



undefined4 FUN_140445590(undefined4 *param_1,int param_2)

{
    longlong lVar1;

    if (param_2 == 0) {
        if (param_1[1] == 0) {
            param_1[1] = 1;
            lVar1 = FUN_140200220(0x44d);
            if (lVar1 != 0) {
                *param_1 = *(undefined4 *)(lVar1 + 0x18);
                return *param_1;
            }
            *param_1 = 0;
        }
        return *param_1;
    }
    if (param_2 == 1) {
        if (param_1[3] == 0) {
            param_1[3] = 1;
            lVar1 = FUN_140200220(0x44d);
            if (lVar1 != 0) {
                param_1[2] = *(undefined4 *)(lVar1 + 0x1c);
                return param_1[2];
            }
            param_1[2] = 0;
        }
        return param_1[2];
    }
    if (param_2 == 2) {
        if (param_1[5] == 0) {
            param_1[5] = 1;
            lVar1 = FUN_140200220(0x44d);
            if (lVar1 != 0) {
                param_1[4] = *(undefined4 *)(lVar1 + 0x20);
                return param_1[4];
            }
            param_1[4] = 0;
        }
        return param_1[4];
    }
    if (param_2 != 3) {
        if (param_2 != 4) {
            return 0;
        }
        if (param_1[9] == 0) {
            param_1[9] = 1;
            lVar1 = FUN_140200220(0x44d);
            if (lVar1 != 0) {
                param_1[8] = *(undefined4 *)(lVar1 + 0x28);
                return param_1[8];
            }
            param_1[8] = 0;
        }
        return param_1[8];
    }
    if (param_1[7] == 0) {
        param_1[7] = 1;
        lVar1 = FUN_140200220(0x44d);
        if (lVar1 != 0) {
            param_1[6] = *(undefined4 *)(lVar1 + 0x24);
            return param_1[6];
        }
        param_1[6] = 0;
    }
    return param_1[6];
}



longlong FUN_140445700(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    puVar3 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1,0x18);
    puVar4 = puVar3 + lVar1 * 6;
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_2;
        FUN_1403b4f00(puVar4 + 2,param_2 + 2);
    }
    if ((undefined4 *)*param_1 != puVar3) {
        uVar5 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = *(undefined4 *)((longlong)puVar4 + *param_1 + -(longlong)puVar3);
                    FUN_1403b4f00(puVar4 + 2);
                }
                lVar2 = *(longlong *)((longlong)puVar4 + *param_1 + -(longlong)puVar3 + 8);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                uVar5 = uVar5 + 1;
                puVar4 = puVar4 + 6;
            } while (uVar5 < (ulonglong)param_1[1]);
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



char ** FUN_140445810(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14044586e;
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
    LAB_14044586e:
    ppcVar1 = (char **)FUN_140445b50(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140445910(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;

    puVar3 = (undefined *)FUN_14018b280();
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
        uVar4 = FUN_1404459e0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



undefined * FUN_1404459e0(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;
    undefined *puVar5;
    undefined8 *puVar6;
    undefined *puVar7;
    undefined *puVar8;

    puVar3 = (undefined *)FUN_14018b280(0x38);
    if ((undefined4 *)(puVar3 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        FUN_1403fe910(puVar3 + 0x28,param_2 + 0x28);
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar3 + 8) = param_3;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *puVar3 = uVar1;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar4 = FUN_1404459e0(param_1,*(longlong *)(param_2 + 0x18),puVar3);
        *(undefined8 *)(puVar3 + 0x18) = uVar4;
    }
    puVar8 = *(undefined **)(param_2 + 0x10);
    puVar7 = puVar3;
    if (puVar8 == (undefined *)0x0) {
        return puVar3;
    }
    do {
        puVar5 = (undefined *)FUN_14018b280();
        if ((undefined4 *)(puVar5 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)(puVar8 + 0x20);
            lVar2 = *(longlong *)(puVar8 + 0x30);
            *(longlong *)(puVar5 + 0x30) = lVar2;
            if (lVar2 == 0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                puVar6 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
                if (puVar6 == (undefined8 *)0x0) {
                    puVar6 = (undefined8 *)&DAT_00000010;
                }
                else {
                    puVar6[1] = lVar2;
                    *puVar6 = &PTR_LAB_140b55060;
                    puVar6 = puVar6 + 2;
                }
            }
            *(undefined8 **)(puVar5 + 0x28) = puVar6;
            FUN_1407db590(puVar6,*(undefined8 *)(puVar8 + 0x28),*(longlong *)(puVar5 + 0x30) << 3);
        }
        *puVar5 = *puVar8;
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        *(undefined **)(puVar7 + 0x10) = puVar5;
        *(undefined **)(puVar5 + 8) = puVar7;
        if (*(longlong *)(puVar8 + 0x18) != 0) {
            uVar4 = FUN_1404459e0(param_1,*(longlong *)(puVar8 + 0x18),puVar5);
            *(undefined8 *)(puVar5 + 0x18) = uVar4;
        }
        puVar8 = *(undefined **)(puVar8 + 0x10);
        puVar7 = puVar5;
    } while (puVar8 != (undefined *)0x0);
    return puVar3;
}



longlong *
FUN_140445b50(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_140445910(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_140445c40(param_1,param_5);
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



longlong FUN_140445c40(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_140445910(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



longlong FUN_140445c80(longlong param_1)

{
    undefined *puVar1;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined **)(param_1 + 0x20) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = *(longlong *)(param_1 + 0x20);
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    return param_1;
}



void FUN_140445d00(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;

    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_140445e50();
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != 0) {
        iVar2 = *(int *)(lVar3 + -8);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
            puVar1 = puVar1 + -3;
            *puVar1 = &PTR_LAB_140b73a90;
        }
        FUN_14018b900(lVar3 + -8,0);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_140032150(param_1 + 0x18,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = *(longlong *)(param_1 + 0x20);
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) = *(longlong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
    }
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
    }
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    }
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    }
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
    }
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_140032150(param_1 + 0x18,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = *(longlong *)(param_1 + 0x20);
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) = *(longlong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    return;
}



longlong FUN_140445e50(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;

    iVar2 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar2) {
        puVar1 = (undefined8 *)((longlong)*(int *)(param_1 + -8) * 0x50 + 0x40 + param_1);
        do {
            puVar1[-0x12] = &PTR_LAB_140b739d0;
            FUN_14018b900(puVar1[-9],0);
            FUN_14018b900(puVar1[-10]);
            iVar2 = iVar2 + -1;
            puVar1 = puVar1 + -10;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140445ee0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    int *piVar10;
    ulonglong uVar11;
    uint *puVar12;
    ulonglong uVar13;
    longlong lVar14;
    int iVar15;
    char *pcVar16;
    char *pcVar17;
    undefined8 *puVar18;
    int *piVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    ulonglong uVar23;
    bool bVar24;
    longlong local_res10;

    uVar6 = FUN_140446360();
    if (-1 < (int)uVar6) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
        uVar7 = uVar7 / 0xc;
        uVar8 = SUB168(ZEXT816(0x18) * ZEXT816(uVar7),0);
        if (SUB168(ZEXT816(0x18) * ZEXT816(uVar7) >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar9 = uVar8 + 8;
        if (0xfffffffffffffff7 < uVar8) {
            lVar9 = -1;
        }
        piVar10 = (int *)FUN_14018b280(lVar9,0);
        uVar8 = 0;
        if (piVar10 == (int *)0x0) {
            puVar18 = (undefined8 *)0x0;
        }
        else {
            iVar15 = (int)uVar7;
            puVar18 = (undefined8 *)(piVar10 + 2);
            *piVar10 = iVar15;
            puVar1 = puVar18;
            while (iVar15 = iVar15 + -1, -1 < iVar15) {
                *puVar1 = &PTR_LAB_140b73a90;
                puVar1[2] = 0;
                puVar1 = puVar1 + 3;
            }
        }
        *(undefined8 **)(param_1 + 0x10) = puVar18;
        uVar20 = uVar8;
        uVar21 = uVar8;
        uVar13 = uVar8;
        if (uVar7 != 0) {
            do {
                lVar9 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))();
                uVar2 = *(undefined4 *)(lVar9 + uVar21);
                if (DAT_140c63840 == (code *)0x0) {
                    uVar11 = uVar8;
                    if (_DAT_140c642bc == 0) {
                        iVar15 = FUN_140212120();
                        if (iVar15 < 0) {
                            uVar11 = 0;
                        }
                        else {
                            uVar11 = (**(code **)(*DAT_140c652a8 + 0x18))(DAT_140c652a8,uVar2);
                        }
                    }
                }
                else {
                    uVar11 = (*DAT_140c63840)(&PTR_u_MapContinent_140a6b2e8);
                }
                lVar9 = *(longlong *)(param_1 + 0x10);
                *(ulonglong *)(uVar13 + 8 + lVar9) = uVar20;
                uVar20 = uVar20 + 1;
                *(ulonglong *)(uVar13 + 0x10 + lVar9) = uVar11;
                uVar21 = uVar21 + 0xc;
                uVar13 = uVar13 + 0x18;
            } while (uVar20 < uVar7);
        }
        puVar12 = (uint *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
        uVar21 = (ulonglong)*puVar12 / 0x30;
        uVar20 = SUB168(ZEXT816(0x50) * ZEXT816(uVar21),0);
        if (SUB168(ZEXT816(0x50) * ZEXT816(uVar21) >> 0x40,0) != 0) {
            uVar20 = 0xffffffffffffffff;
        }
        lVar9 = uVar20 + 8;
        if (0xfffffffffffffff7 < uVar20) {
            lVar9 = -1;
        }
        piVar10 = (int *)FUN_14018b280(lVar9,0);
        if (piVar10 == (int *)0x0) {
            piVar19 = (int *)0x0;
        }
        else {
            iVar15 = (int)uVar21 + -1;
            *piVar10 = (int)uVar21;
            piVar19 = piVar10 + 2;
            if (-1 < iVar15) {
                puVar18 = (undefined8 *)(piVar10 + 6);
                do {
                    iVar15 = iVar15 + -1;
                    puVar18[-2] = &PTR_LAB_140b739d0;
                    puVar18[-1] = 0;
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    puVar18[4] = 0;
                    puVar18[5] = 0;
                    puVar18[6] = 0;
                    puVar18[7] = 0;
                    puVar18 = puVar18 + 10;
                } while (-1 < iVar15);
            }
        }
        *(int **)(param_1 + 8) = piVar19;
        if (uVar21 != 0) {
            local_res10 = 0;
            uVar20 = uVar8;
            do {
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))();
                if (DAT_140c63848 == (code *)0x0) {
                    uVar13 = uVar8;
                    if (_DAT_140c65370 == 0) {
                        iVar15 = FUN_140212560();
                        if (iVar15 < 0) {
                            uVar13 = 0;
                        }
                        else {
                            uVar13 = (**(code **)(*DAT_140c63bd0 + 0x20))();
                        }
                    }
                }
                else {
                    uVar13 = (*DAT_140c63848)(&PTR_u_MapZone_140a6b320);
                }
                uVar11 = uVar8;
                uVar22 = uVar8;
                uVar23 = uVar8;
                if (uVar7 != 0) {
                    do {
                        iVar15 = (***(code ***)(*(longlong *)(param_1 + 0x10) + uVar22))();
                        if (iVar15 == *(int *)(uVar13 + 8)) {
                            uVar23 = *(longlong *)(param_1 + 0x10) + uVar11 * 0x18;
                            break;
                        }
                        uVar11 = uVar11 + 1;
                        uVar22 = uVar22 + 0x18;
                    } while (uVar11 < uVar7);
                }
                lVar9 = local_res10 + *(longlong *)(param_1 + 8);
                *(ulonglong *)(lVar9 + 0x10) = uVar13;
                *(ulonglong *)(lVar9 + 8) = uVar20;
                *(ulonglong *)(lVar9 + 0x18) = uVar23;
                iVar15 = *(int *)(uVar13 + 0x20);
                iVar3 = *(int *)(uVar13 + 0x24);
                uVar2 = *(undefined4 *)(uVar13 + 0x1c);
                *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(uVar13 + 0x18);
                *(undefined4 *)(lVar9 + 0x24) = uVar2;
                *(int *)(lVar9 + 0x28) = iVar15 + 1;
                *(int *)(lVar9 + 0x2c) = iVar3 + 1;
                FUN_140712d90();
                if (*(int *)(uVar13 + 0x2c) != 0) {
                    uVar13 = *(longlong *)(param_1 + 8) + local_res10;
                    lVar9 = FUN_1400326c0(param_1 + 0x18);
                    bVar24 = true;
                    pcVar4 = *(char **)(lVar9 + 8);
                    pcVar5 = pcVar4;
                    pcVar17 = *(char **)(pcVar4 + 8);
                    while (pcVar17 != (char *)0x0) {
                        bVar24 = uVar13 < *(ulonglong *)(pcVar17 + 0x20);
                        pcVar5 = pcVar17;
                        if (bVar24) {
                            pcVar17 = *(char **)(pcVar17 + 0x10);
                        }
                        else {
                            pcVar17 = *(char **)(pcVar17 + 0x18);
                        }
                    }
                    pcVar17 = pcVar5;
                    if (bVar24) {
                        if (pcVar5 != *(char **)(pcVar4 + 0x10)) {
                            if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
                                pcVar17 = *(char **)(pcVar5 + 0x18);
                            }
                            else {
                                pcVar17 = *(char **)(pcVar5 + 0x10);
                                if (pcVar17 == (char *)0x0) {
                                    pcVar17 = *(char **)(pcVar5 + 8);
                                    pcVar16 = pcVar17;
                                    if (pcVar5 == *(char **)(pcVar17 + 0x10)) {
                                        do {
                                            pcVar17 = *(char **)(pcVar16 + 8);
                                            bVar24 = pcVar16 == *(char **)(pcVar17 + 0x10);
                                            pcVar16 = pcVar17;
                                        } while (bVar24);
                                    }
                                }
                                else {
                                    for (pcVar16 = *(char **)(pcVar17 + 0x18); pcVar16 != (char *)0x0;
                                         pcVar16 = *(char **)(pcVar16 + 0x18)) {
                                        pcVar17 = pcVar16;
                                    }
                                }
                            }
                            goto LAB_14044626d;
                        }
                    }
                    else {
                        LAB_14044626d:
                        if (uVar13 <= *(ulonglong *)(pcVar17 + 0x20)) goto LAB_140446307;
                    }
                    if ((pcVar5 == pcVar4) || (uVar13 < *(ulonglong *)(pcVar5 + 0x20))) {
                        lVar14 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar14 + 0x20) = uVar13;
                        }
                        *(longlong *)(pcVar5 + 0x10) = lVar14;
                        pcVar4 = *(char **)(lVar9 + 8);
                        if (pcVar5 == pcVar4) {
                            *(longlong *)(pcVar4 + 8) = lVar14;
                            *(longlong *)(*(longlong *)(lVar9 + 8) + 0x18) = lVar14;
                        }
                        else if (pcVar5 == *(char **)(pcVar4 + 0x10)) {
                            *(longlong *)(pcVar4 + 0x10) = lVar14;
                        }
                    }
                    else {
                        lVar14 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar14 + 0x20) = uVar13;
                        }
                        *(longlong *)(pcVar5 + 0x18) = lVar14;
                        if (pcVar5 == *(char **)(*(longlong *)(lVar9 + 8) + 0x18)) {
                            *(longlong *)(*(longlong *)(lVar9 + 8) + 0x18) = lVar14;
                        }
                    }
                    *(char **)(lVar14 + 8) = pcVar5;
                    *(undefined8 *)(lVar14 + 0x10) = 0;
                    *(undefined8 *)(lVar14 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 1;
                }
                LAB_140446307:
                local_res10 = local_res10 + 0x50;
                uVar20 = uVar20 + 1;
            } while (uVar20 < uVar21);
        }
        uVar6 = 0;
    }
    return uVar6;
}



void FUN_140446360(longlong param_1)

{
    longlong **pplVar1;
    int iVar2;
    DWORD DVar3;
    longlong *plVar4;
    HANDLE pvVar5;
    longlong *plVar6;
    undefined auStack1272 [32];
    undefined4 local_4d8;
    WCHAR local_4c8 [64];
    undefined local_448 [528];
    undefined local_238 [528];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack1272;
    iVar2 = FUN_14001b370(local_448,0x104,L"ZoneMapClient_%d",0x3eaa);
    if ((iVar2 < 0) || (pplVar1 = (longlong **)(param_1 + 0x38), pplVar1 == (longlong **)0x0))
        goto LAB_140446508;
    plVar4 = (longlong *)FUN_14018b280(0x18);
    plVar6 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_LAB_140b5e770;
        *(undefined4 *)(plVar4 + 1) = 1;
        plVar4[2] = 0;
        plVar6 = plVar4;
    }
    local_4d8 = 0;
    FUN_14019fd40(local_4c8,0x40,L"Mutex",local_448);
    pvVar5 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,local_4c8);
    plVar6[2] = (longlong)pvVar5;
    if (pvVar5 == (HANDLE)0x0) {
        DVar3 = GetLastError();
        if (0 < (int)DVar3) {
            DVar3 = DVar3 & 0xffff | 0x80070000;
        }
        if (-1 < (int)DVar3) goto LAB_140446477;
        (**(code **)(*plVar6 + 8))(plVar6);
    }
    else {
        DVar3 = GetLastError();
        DVar3 = (DWORD)(DVar3 == 0xb7);
        LAB_140446477:
        *pplVar1 = plVar6;
    }
    if ((-1 < (int)DVar3) &&
        (iVar2 = (**(code **)(**pplVar1 + 0x10))(*pplVar1,0xffffffff), iVar2 != 0)) {
        iVar2 = FUN_14001b370(local_238,0x104,L"%s.ZoneToIndices",local_448);
        if (-1 < iVar2) {
            FUN_140446530(param_1,local_448,local_238);
        }
        (**(code **)(**pplVar1 + 0x18))();
    }
    LAB_140446508:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack1272);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140446530(longlong param_1,undefined8 param_2,undefined *param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined *puVar4;
    longlong **pplVar5;
    undefined *puVar6;
    int iVar7;
    uint uVar8;
    uint *puVar9;
    longlong lVar10;
    undefined *puVar11;
    longlong **pplVar12;
    int *piVar13;
    undefined *puVar14;
    longlong **pplVar15;
    undefined4 *puVar16;
    undefined *puVar17;
    longlong **pplVar18;
    undefined *puVar19;
    longlong ***ppplVar20;
    ulonglong uVar21;
    uint uVar22;
    uint uVar23;
    undefined4 *puVar24;
    int *piVar25;
    int *piVar26;
    int *piVar27;
    undefined *puVar28;
    undefined *puVar29;
    undefined4 *puVar30;
    undefined auStack3384 [32];
    uint **local_d18;
    uint local_d08;
    uint uStack3332;
    longlong **local_d00;
    int *local_cf8;
    uint *local_cf0;
    longlong **local_ce8;
    undefined local_ce0 [8];
    undefined *local_cd8;
    longlong local_cd0;
    undefined local_cc0 [8];
    undefined *local_cb8;
    longlong local_cb0;
    undefined local_ca0 [8];
    undefined *local_c98;
    longlong local_c90;
    undefined local_c80 [8];
    undefined *local_c78;
    longlong local_c70;
    undefined local_c60 [8];
    undefined *local_c58;
    longlong local_c50;
    undefined local_c40 [8];
    undefined *local_c38;
    longlong local_c30;
    undefined local_c20 [8];
    longlong **local_c18;
    undefined8 local_c10;
    longlong **local_c00;
    undefined *local_bf8;
    longlong **local_bf0 [2];
    longlong **local_be0 [2];
    undefined local_bd0 [8];
    longlong **local_bc8;
    undefined8 local_bc0;
    undefined local_bb0 [8];
    undefined *local_ba8;
    longlong local_ba0;
    undefined local_b90 [8];
    undefined *local_b88;
    longlong local_b80;
    longlong **local_b70 [2];
    undefined local_b60 [8];
    longlong **local_b58;
    undefined8 local_b50;
    undefined local_b40 [8];
    longlong **local_b38;
    undefined8 local_b30;
    undefined local_b20 [8];
    undefined *local_b18;
    undefined8 local_b10;
    undefined local_b00 [8];
    undefined *local_af8;
    undefined8 local_af0;
    undefined local_ae0 [8];
    undefined *local_ad8;
    undefined8 local_ad0;
    int *local_ac0;
    undefined *local_ab8;
    undefined local_ab0 [24];
    undefined local_a98 [528];
    undefined local_888 [528];
    undefined local_678 [528];
    undefined local_468 [528];
    undefined local_258 [528];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack3384;
    local_bf8 = param_3;
    iVar7 = FUN_14001b370(local_a98,0x104,L"%s.HexGroupToIndices",param_2);
    if (((((-1 < iVar7) &&
           (iVar7 = FUN_14001b370(local_468,0x104,L"%s.HexGroupEntryToIndices",param_2), -1 < iVar7))
          && (iVar7 = FUN_14001b370(local_888,0x104,L"%s.WorldToIndices",param_2), -1 < iVar7)) &&
         ((iVar7 = FUN_14001b370(local_678,0x104,L"%s.ContinentToIndices",param_2), -1 < iVar7 &&
                                                                                    (iVar7 = FUN_14001b370(local_258,0x104,L"%s.Indices",param_2), -1 < iVar7)))) &&
        (iVar7 = FUN_1401c5bb0(param_2), -1 < iVar7)) {
        local_ac0 = (int *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
        if (iVar7 == 0) {
            local_c18 = (longlong **)FUN_14018b280(0x28);
            uVar22 = 0;
            local_c10 = 0;
            *(undefined *)local_c18 = 0;
            local_c18[1] = (longlong *)0x0;
            local_c18[2] = (longlong *)local_c18;
            local_c18[3] = (longlong *)local_c18;
            local_b18 = (undefined *)FUN_14018b280(0x28);
            local_b10 = 0;
            *local_b18 = 0;
            *(undefined8 *)(local_b18 + 8) = 0;
            *(undefined **)(local_b18 + 0x10) = local_b18;
            *(undefined **)(local_b18 + 0x18) = local_b18;
            local_af8 = (undefined *)FUN_14018b280(0x28);
            local_af0 = 0;
            *local_af8 = 0;
            *(undefined8 *)(local_af8 + 8) = 0;
            *(undefined **)(local_af8 + 0x10) = local_af8;
            *(undefined **)(local_af8 + 0x18) = local_af8;
            local_bc8 = (longlong **)FUN_14018b280(0x28);
            local_bc0 = 0;
            *(undefined *)local_bc8 = 0;
            local_bc8[1] = (longlong *)0x0;
            local_bc8[2] = (longlong *)local_bc8;
            local_bc8[3] = (longlong *)local_bc8;
            local_c58 = (undefined *)FUN_14018b280(0x28);
            local_c50 = 0;
            *local_c58 = 0;
            *(undefined8 *)(local_c58 + 8) = 0;
            *(undefined **)(local_c58 + 0x10) = local_c58;
            *(undefined **)(local_c58 + 0x18) = local_c58;
            local_c38 = (undefined *)FUN_14018b280(0x30);
            local_c30 = 0;
            *local_c38 = 0;
            *(undefined8 *)(local_c38 + 8) = 0;
            *(undefined **)(local_c38 + 0x10) = local_c38;
            *(undefined **)(local_c38 + 0x18) = local_c38;
            local_cb8 = (undefined *)FUN_14018b280(0x28);
            local_cb0 = 0;
            *local_cb8 = 0;
            *(undefined8 *)(local_cb8 + 8) = 0;
            *(undefined **)(local_cb8 + 0x10) = local_cb8;
            *(undefined **)(local_cb8 + 0x18) = local_cb8;
            local_b38 = (longlong **)FUN_14018b280(0x28);
            local_b30 = 0;
            *(undefined *)local_b38 = 0;
            local_b38[1] = (longlong *)0x0;
            local_b38[2] = (longlong *)local_b38;
            local_b38[3] = (longlong *)local_b38;
            local_cd8 = (undefined *)FUN_14018b280(0x30);
            local_cd0 = 0;
            *local_cd8 = 0;
            *(undefined8 *)(local_cd8 + 8) = 0;
            *(undefined **)(local_cd8 + 0x10) = local_cd8;
            *(undefined **)(local_cd8 + 0x18) = local_cd8;
            local_b88 = (undefined *)FUN_14018b280(0x28);
            local_b80 = 0;
            *local_b88 = 0;
            *(undefined8 *)(local_b88 + 8) = 0;
            *(undefined **)(local_b88 + 0x10) = local_b88;
            *(undefined **)(local_b88 + 0x18) = local_b88;
            local_ba8 = (undefined *)FUN_14018b280(0x28);
            local_ba0 = 0;
            *local_ba8 = 0;
            *(undefined8 *)(local_ba8 + 8) = 0;
            *(undefined **)(local_ba8 + 0x10) = local_ba8;
            *(undefined **)(local_ba8 + 0x18) = local_ba8;
            local_c78 = (undefined *)FUN_14018b280(0x28);
            local_c70 = 0;
            *local_c78 = 0;
            *(undefined8 *)(local_c78 + 8) = 0;
            *(undefined **)(local_c78 + 0x10) = local_c78;
            *(undefined **)(local_c78 + 0x18) = local_c78;
            local_b58 = (longlong **)FUN_14018b280(0x28);
            local_b50 = 0;
            *(undefined *)local_b58 = 0;
            local_b58[1] = (longlong *)0x0;
            local_b58[2] = (longlong *)local_b58;
            local_b58[3] = (longlong *)local_b58;
            local_ad8 = (undefined *)FUN_14018b280(0x28);
            local_ad0 = 0;
            *local_ad8 = 0;
            *(undefined8 *)(local_ad8 + 8) = 0;
            *(undefined **)(local_ad8 + 0x10) = local_ad8;
            *(undefined **)(local_ad8 + 0x18) = local_ad8;
            local_c98 = (undefined *)FUN_14018b280(0x28);
            local_c90 = 0;
            *local_c98 = 0;
            *(undefined8 *)(local_c98 + 8) = 0;
            *(undefined **)(local_c98 + 0x10) = local_c98;
            *(undefined **)(local_c98 + 0x18) = local_c98;
            uVar8 = FUN_140212770();
            if (uVar8 != 0) {
                do {
                    puVar9 = (uint *)FUN_140212820(uVar22);
                    if (puVar9 != (uint *)0x0) {
                        FUN_1400293c0(local_c20,local_bf0,puVar9);
                        uStack3332 = *puVar9;
                        local_d08 = puVar9[2];
                        puVar11 = *(undefined **)(local_c78 + 8);
                        puVar17 = local_c78;
                        if (*(undefined **)(local_c78 + 8) == (undefined *)0x0) {
                            LAB_140446a13:
                            lVar10 = FUN_14018b280(0x28);
                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                            }
                            *(longlong *)(puVar17 + 0x10) = lVar10;
                            if (puVar17 == local_c78) {
                                *(longlong *)(local_c78 + 8) = lVar10;
                                *(longlong *)(local_c78 + 0x18) = lVar10;
                            }
                            else if (puVar17 == *(undefined **)(local_c78 + 0x10)) {
                                *(longlong *)(local_c78 + 0x10) = lVar10;
                            }
                        }
                        else {
                            do {
                                puVar17 = puVar11;
                                if (local_d08 < *(uint *)(puVar17 + 0x20)) {
                                    puVar11 = *(undefined **)(puVar17 + 0x10);
                                }
                                else {
                                    puVar11 = *(undefined **)(puVar17 + 0x18);
                                }
                            } while (puVar11 != (undefined *)0x0);
                            if ((puVar17 == local_c78) || (local_d08 < *(uint *)(puVar17 + 0x20)))
                                goto LAB_140446a13;
                            lVar10 = FUN_14018b280(0x28);
                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                            }
                            *(longlong *)(puVar17 + 0x18) = lVar10;
                            if (puVar17 == *(undefined **)(local_c78 + 0x18)) {
                                *(longlong *)(local_c78 + 0x18) = lVar10;
                            }
                        }
                        *(undefined **)(lVar10 + 8) = puVar17;
                        *(undefined8 *)(lVar10 + 0x10) = 0;
                        *(undefined8 *)(lVar10 + 0x18) = 0;
                        FUN_1400081c0(lVar10,local_c78 + 8);
                        local_c70 = local_c70 + 1;
                        local_cf8 = (int *)CONCAT44(uVar22,*puVar9);
                        FUN_140032f50();
                    }
                    uVar22 = uVar22 + 1;
                } while (uVar22 < uVar8);
            }
            uVar22 = 0;
            uVar8 = FUN_1402140f0();
            if (uVar8 != 0) {
                do {
                    lVar10 = FUN_1402141a0(uVar22);
                    if ((lVar10 != 0) && ((longlong **)local_c18[1] != (longlong **)0x0)) {
                        uVar23 = *(uint *)(lVar10 + 4);
                        pplVar18 = (longlong **)local_c18[1];
                        pplVar15 = local_c18;
                        do {
                            if (*(uint *)(pplVar18 + 4) < uVar23) {
                                pplVar12 = (longlong **)pplVar18[3];
                            }
                            else {
                                pplVar12 = (longlong **)pplVar18[2];
                                pplVar15 = pplVar18;
                            }
                            pplVar18 = pplVar12;
                        } while (pplVar12 != (longlong **)0x0);
                        if ((pplVar15 != local_c18) && (*(uint *)(pplVar15 + 4) <= uVar23)) {
                            puVar11 = *(undefined **)(local_c58 + 8);
                            puVar17 = local_c58;
                            local_d08 = uVar23;
                            uStack3332 = uVar22;
                            if (*(undefined **)(local_c58 + 8) == (undefined *)0x0) {
                                LAB_140446b73:
                                lVar10 = FUN_14018b280(0x28);
                                if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                                }
                                *(longlong *)(puVar17 + 0x10) = lVar10;
                                if (puVar17 == local_c58) {
                                    *(longlong *)(local_c58 + 8) = lVar10;
                                    *(longlong *)(local_c58 + 0x18) = lVar10;
                                }
                                else if (puVar17 == *(undefined **)(local_c58 + 0x10)) {
                                    *(longlong *)(local_c58 + 0x10) = lVar10;
                                }
                            }
                            else {
                                do {
                                    puVar17 = puVar11;
                                    if (uVar23 < *(uint *)(puVar17 + 0x20)) {
                                        puVar11 = *(undefined **)(puVar17 + 0x10);
                                    }
                                    else {
                                        puVar11 = *(undefined **)(puVar17 + 0x18);
                                    }
                                } while (puVar11 != (undefined *)0x0);
                                if ((puVar17 == local_c58) || (uVar23 < *(uint *)(puVar17 + 0x20)))
                                    goto LAB_140446b73;
                                lVar10 = FUN_14018b280(0x28,0);
                                if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                                }
                                *(longlong *)(puVar17 + 0x18) = lVar10;
                                if (puVar17 == *(undefined **)(local_c58 + 0x18)) {
                                    *(longlong *)(local_c58 + 0x18) = lVar10;
                                }
                            }
                            *(undefined **)(lVar10 + 8) = puVar17;
                            *(undefined8 *)(lVar10 + 0x10) = 0;
                            *(undefined8 *)(lVar10 + 0x18) = 0;
                            FUN_1400081c0();
                            local_c50 = local_c50 + 1;
                        }
                    }
                    uVar22 = uVar22 + 1;
                } while (uVar22 < uVar8);
            }
            uVar22 = 0;
            uVar8 = FUN_140212bb0();
            if (uVar8 != 0) {
                do {
                    lVar10 = FUN_140212c60(uVar22);
                    if ((lVar10 != 0) && ((longlong **)local_c18[1] != (longlong **)0x0)) {
                        uVar23 = *(uint *)(lVar10 + 4);
                        pplVar18 = (longlong **)local_c18[1];
                        pplVar15 = local_c18;
                        do {
                            if (*(uint *)(pplVar18 + 4) < uVar23) {
                                pplVar12 = (longlong **)pplVar18[3];
                            }
                            else {
                                pplVar12 = (longlong **)pplVar18[2];
                                pplVar15 = pplVar18;
                            }
                            pplVar18 = pplVar12;
                        } while (pplVar12 != (longlong **)0x0);
                        if ((pplVar15 != local_c18) && (*(uint *)(pplVar15 + 4) <= uVar23)) {
                            iVar7 = *(int *)(lVar10 + 8);
                            iVar1 = *(int *)(lVar10 + 0xc);
                            puVar11 = *(undefined **)(local_c38 + 8);
                            puVar17 = local_c38;
                            if (*(undefined **)(local_c38 + 8) == (undefined *)0x0) {
                                LAB_140446ca4:
                                lVar10 = FUN_14018b280(0x30);
                                if ((uint *)(lVar10 + 0x20) != (uint *)0x0) {
                                    *(uint *)(lVar10 + 0x20) = uVar23;
                                    *(int *)(lVar10 + 0x24) = iVar7;
                                    *(int *)(lVar10 + 0x28) = iVar1;
                                    *(uint *)(lVar10 + 0x2c) = uVar22;
                                }
                                *(longlong *)(puVar17 + 0x10) = lVar10;
                                if (puVar17 == local_c38) {
                                    *(longlong *)(local_c38 + 8) = lVar10;
                                    *(longlong *)(local_c38 + 0x18) = lVar10;
                                }
                                else if (puVar17 == *(undefined **)(local_c38 + 0x10)) {
                                    *(longlong *)(local_c38 + 0x10) = lVar10;
                                }
                            }
                            else {
                                do {
                                    puVar17 = puVar11;
                                    if (uVar23 == *(uint *)(puVar17 + 0x20)) {
                                        if ((*(int *)(puVar17 + 0x28) <= iVar1) &&
                                            ((iVar1 != *(int *)(puVar17 + 0x28) || (*(int *)(puVar17 + 0x24) <= iVar7))))
                                            goto LAB_140446c7f;
                                        LAB_140446ce6:
                                        puVar11 = *(undefined **)(puVar17 + 0x10);
                                    }
                                    else {
                                        if (uVar23 < *(uint *)(puVar17 + 0x20)) goto LAB_140446ce6;
                                        LAB_140446c7f:
                                        puVar11 = *(undefined **)(puVar17 + 0x18);
                                    }
                                } while (puVar11 != (undefined *)0x0);
                                if (puVar17 == local_c38) goto LAB_140446ca4;
                                if (uVar23 == *(uint *)(puVar17 + 0x20)) {
                                    if ((iVar1 < *(int *)(puVar17 + 0x28)) ||
                                        ((iVar1 == *(int *)(puVar17 + 0x28) && (iVar7 < *(int *)(puVar17 + 0x24)))))
                                        goto LAB_140446ca4;
                                }
                                else if (uVar23 < *(uint *)(puVar17 + 0x20)) goto LAB_140446ca4;
                                lVar10 = FUN_14018b280(0x30);
                                if ((uint *)(lVar10 + 0x20) != (uint *)0x0) {
                                    *(uint *)(lVar10 + 0x20) = uVar23;
                                    *(int *)(lVar10 + 0x24) = iVar7;
                                    *(int *)(lVar10 + 0x28) = iVar1;
                                    *(uint *)(lVar10 + 0x2c) = uVar22;
                                }
                                *(longlong *)(puVar17 + 0x18) = lVar10;
                                if (puVar17 == *(undefined **)(local_c38 + 0x18)) {
                                    *(longlong *)(local_c38 + 0x18) = lVar10;
                                }
                            }
                            *(undefined **)(lVar10 + 8) = puVar17;
                            *(undefined8 *)(lVar10 + 0x10) = 0;
                            *(undefined8 *)(lVar10 + 0x18) = 0;
                            FUN_1400081c0();
                            local_c30 = local_c30 + 1;
                        }
                    }
                    uVar22 = uVar22 + 1;
                } while (uVar22 < uVar8);
            }
            uVar8 = 0;
            if (DAT_140c63838 == (code *)0x0) {
                uVar22 = 0;
                if ((_DAT_140c63a98 == 0) && (iVar7 = FUN_140212de0(), -1 < iVar7)) {
                    uVar22 = (**(code **)(*DAT_140c64888 + 0x28))();
                }
            }
            else {
                uVar22 = (*DAT_140c63838)(&PTR_u_MapZoneHexGroup_140a6b390);
            }
            uVar23 = uVar8;
            if (uVar22 != 0) {
                do {
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c63a98 == 0) && (iVar7 = FUN_140212de0(), -1 < iVar7)) {
                            puVar9 = (uint *)(**(code **)(*DAT_140c64888 + 0x20))();
                            goto LAB_140446dfc;
                        }
                    }
                    else {
                        puVar9 = (uint *)(*DAT_140c63848)(&PTR_u_MapZoneHexGroup_140a6b390);
                        LAB_140446dfc:
                        if ((puVar9 != (uint *)0x0) && ((longlong **)local_c18[1] != (longlong **)0x0)) {
                            pplVar18 = (longlong **)local_c18[1];
                            pplVar15 = local_c18;
                            do {
                                if (*(uint *)(pplVar18 + 4) < puVar9[1]) {
                                    pplVar12 = (longlong **)pplVar18[3];
                                }
                                else {
                                    pplVar12 = (longlong **)pplVar18[2];
                                    pplVar15 = pplVar18;
                                }
                                pplVar18 = pplVar12;
                            } while (pplVar12 != (longlong **)0x0);
                            if ((pplVar15 != local_c18) && (*(uint *)(pplVar15 + 4) <= puVar9[1])) {
                                FUN_1400293c0(local_bd0,local_bf0,puVar9);
                                pplVar18 = local_b38;
                                if ((longlong **)local_b38[1] != (longlong **)0x0) {
                                    pplVar15 = (longlong **)local_b38[1];
                                    do {
                                        if (*(uint *)(pplVar15 + 4) < *puVar9) {
                                            pplVar12 = (longlong **)pplVar15[3];
                                        }
                                        else {
                                            pplVar12 = (longlong **)pplVar15[2];
                                            pplVar18 = pplVar15;
                                        }
                                        pplVar15 = pplVar12;
                                    } while (pplVar12 != (longlong **)0x0);
                                }
                                if ((pplVar18 == local_b38) || (*puVar9 < *(uint *)(pplVar18 + 4))) {
                                    local_cf8 = (int *)(ulonglong)*puVar9;
                                    local_d00 = pplVar18;
                                    FUN_140032b30(local_b40,&local_ce8,&local_d00,&local_cf8);
                                    pplVar18 = local_ce8;
                                }
                                *(uint *)((longlong)pplVar18 + 0x24) = puVar9[1];
                                local_d08 = puVar9[1];
                                puVar11 = *(undefined **)(local_cb8 + 8);
                                puVar17 = local_cb8;
                                uStack3332 = uVar23;
                                if (*(undefined **)(local_cb8 + 8) == (undefined *)0x0) {
                                    LAB_140446f43:
                                    lVar10 = FUN_14018b280(0x28);
                                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                                    }
                                    *(longlong *)(puVar17 + 0x10) = lVar10;
                                    if (puVar17 == local_cb8) {
                                        *(longlong *)(local_cb8 + 8) = lVar10;
                                        *(longlong *)(local_cb8 + 0x18) = lVar10;
                                    }
                                    else if (puVar17 == *(undefined **)(local_cb8 + 0x10)) {
                                        *(longlong *)(local_cb8 + 0x10) = lVar10;
                                    }
                                }
                                else {
                                    do {
                                        puVar17 = puVar11;
                                        if (local_d08 < *(uint *)(puVar17 + 0x20)) {
                                            puVar11 = *(undefined **)(puVar17 + 0x10);
                                        }
                                        else {
                                            puVar11 = *(undefined **)(puVar17 + 0x18);
                                        }
                                    } while (puVar11 != (undefined *)0x0);
                                    if ((puVar17 == local_cb8) || (local_d08 < *(uint *)(puVar17 + 0x20)))
                                        goto LAB_140446f43;
                                    lVar10 = FUN_14018b280(0x28,0);
                                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                                    }
                                    *(longlong *)(puVar17 + 0x18) = lVar10;
                                    if (puVar17 == *(undefined **)(local_cb8 + 0x18)) {
                                        *(longlong *)(local_cb8 + 0x18) = lVar10;
                                    }
                                }
                                *(undefined **)(lVar10 + 8) = puVar17;
                                *(undefined8 *)(lVar10 + 0x10) = 0;
                                *(undefined8 *)(lVar10 + 0x18) = 0;
                                FUN_1400081c0();
                                local_cb0 = local_cb0 + 1;
                                uVar23 = uVar23 + 1;
                            }
                        }
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar22);
            }
            uVar8 = 0;
            if (DAT_140c63838 == (code *)0x0) {
                uVar22 = 0;
                if ((_DAT_140c64b1c == 0) && (iVar7 = FUN_140213220(), -1 < iVar7)) {
                    uVar22 = (**(code **)(*DAT_140c644a0 + 0x28))();
                }
            }
            else {
                uVar22 = (*DAT_140c63838)(&PTR_u_MapZoneHexGroupEntry_140a6b3c8);
            }
            if (uVar22 != 0) {
                do {
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c64b1c == 0) && (iVar7 = FUN_140213220(), -1 < iVar7)) {
                            lVar10 = (**(code **)(*DAT_140c644a0 + 0x20))(DAT_140c644a0,uVar8);
                            goto LAB_140447059;
                        }
                    }
                    else {
                        lVar10 = (*DAT_140c63848)(&PTR_u_MapZoneHexGroupEntry_140a6b3c8,uVar8);
                        LAB_140447059:
                        if ((lVar10 != 0) && ((longlong **)local_bc8[1] != (longlong **)0x0)) {
                            uVar23 = *(uint *)(lVar10 + 4);
                            pplVar18 = (longlong **)local_bc8[1];
                            pplVar15 = local_bc8;
                            do {
                                if (*(uint *)(pplVar18 + 4) < uVar23) {
                                    pplVar12 = (longlong **)pplVar18[3];
                                }
                                else {
                                    pplVar12 = (longlong **)pplVar18[2];
                                    pplVar15 = pplVar18;
                                }
                                pplVar18 = pplVar12;
                            } while (pplVar12 != (longlong **)0x0);
                            if ((pplVar15 != local_bc8) && (*(uint *)(pplVar15 + 4) <= uVar23)) {
                                uVar2 = *(undefined4 *)(lVar10 + 8);
                                uVar3 = *(undefined4 *)(lVar10 + 0xc);
                                puVar11 = *(undefined **)(local_cd8 + 8);
                                puVar17 = local_cd8;
                                if (*(undefined **)(local_cd8 + 8) == (undefined *)0x0) {
                                    LAB_14044711c:
                                    lVar10 = FUN_14018b280(0x30);
                                    if ((uint *)(lVar10 + 0x20) != (uint *)0x0) {
                                        *(uint *)(lVar10 + 0x20) = uVar23;
                                        *(undefined4 *)(lVar10 + 0x24) = uVar2;
                                        *(undefined4 *)(lVar10 + 0x28) = uVar3;
                                    }
                                    *(longlong *)(puVar17 + 0x10) = lVar10;
                                    if (puVar17 == local_cd8) {
                                        *(longlong *)(local_cd8 + 8) = lVar10;
                                        *(longlong *)(local_cd8 + 0x18) = lVar10;
                                    }
                                    else if (puVar17 == *(undefined **)(local_cd8 + 0x10)) {
                                        *(longlong *)(local_cd8 + 0x10) = lVar10;
                                    }
                                }
                                else {
                                    do {
                                        puVar17 = puVar11;
                                        if (uVar23 < *(uint *)(puVar17 + 0x20)) {
                                            puVar11 = *(undefined **)(puVar17 + 0x10);
                                        }
                                        else {
                                            puVar11 = *(undefined **)(puVar17 + 0x18);
                                        }
                                    } while (puVar11 != (undefined *)0x0);
                                    if ((puVar17 == local_cd8) || (uVar23 < *(uint *)(puVar17 + 0x20)))
                                        goto LAB_14044711c;
                                    lVar10 = FUN_14018b280(0x30,0);
                                    if ((uint *)(lVar10 + 0x20) != (uint *)0x0) {
                                        *(uint *)(lVar10 + 0x20) = uVar23;
                                        *(undefined4 *)(lVar10 + 0x24) = uVar2;
                                        *(undefined4 *)(lVar10 + 0x28) = uVar3;
                                    }
                                    *(longlong *)(puVar17 + 0x18) = lVar10;
                                    if (puVar17 == *(undefined **)(local_cd8 + 0x18)) {
                                        *(longlong *)(local_cd8 + 0x18) = lVar10;
                                    }
                                }
                                *(undefined **)(lVar10 + 8) = puVar17;
                                *(undefined8 *)(lVar10 + 0x10) = 0;
                                *(undefined8 *)(lVar10 + 0x18) = 0;
                                FUN_1400081c0();
                                local_cd0 = local_cd0 + 1;
                            }
                        }
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar22);
            }
            uVar8 = 0;
            if (DAT_140c63838 == (code *)0x0) {
                uVar22 = 0;
                if ((_DAT_140c63900 == 0) && (iVar7 = FUN_140213aa0(), -1 < iVar7)) {
                    uVar22 = (**(code **)(*DAT_140c645e8 + 0x28))();
                }
            }
            else {
                uVar22 = (*DAT_140c63838)(&PTR_u_MapZoneNemesisRegion_140a6b438);
            }
            if (uVar22 != 0) {
                do {
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c63900 == 0) && (iVar7 = FUN_140213aa0(), -1 < iVar7)) {
                            lVar10 = (**(code **)(*DAT_140c645e8 + 0x20))();
                            goto LAB_140447229;
                        }
                    }
                    else {
                        lVar10 = (*DAT_140c63848)(&PTR_u_MapZoneNemesisRegion_140a6b438);
                        LAB_140447229:
                        if (lVar10 != 0) {
                            if ((longlong **)local_bc8[1] == (longlong **)0x0) {
                                LAB_14044727d:
                                local_ce8 = local_bc8;
                                ppplVar20 = &local_ce8;
                            }
                            else {
                                pplVar18 = (longlong **)local_bc8[1];
                                pplVar15 = local_bc8;
                                do {
                                    if (*(uint *)(pplVar18 + 4) < *(uint *)(lVar10 + 4)) {
                                        pplVar12 = (longlong **)pplVar18[3];
                                    }
                                    else {
                                        pplVar12 = (longlong **)pplVar18[2];
                                        pplVar15 = pplVar18;
                                    }
                                    pplVar18 = pplVar12;
                                } while (pplVar12 != (longlong **)0x0);
                                if ((pplVar15 == local_bc8) || (*(uint *)(lVar10 + 4) < *(uint *)(pplVar15 + 4)))
                                    goto LAB_14044727d;
                                local_d00 = pplVar15;
                                ppplVar20 = &local_d00;
                            }
                            if (*ppplVar20 != local_c18) {
                                if (DAT_140c63840 == (code *)0x0) {
                                    if ((_DAT_140c63a98 != 0) || (iVar7 = FUN_140212de0(), iVar7 < 0))
                                        goto LAB_1404473be;
                                    lVar10 = (**(code **)(*DAT_140c64888 + 0x18))();
                                }
                                else {
                                    lVar10 = (*DAT_140c63840)();
                                }
                                if (lVar10 != 0) {
                                    local_d08 = *(uint *)(lVar10 + 4);
                                    puVar11 = *(undefined **)(local_c98 + 8);
                                    puVar17 = local_c98;
                                    uStack3332 = uVar8;
                                    if (*(undefined **)(local_c98 + 8) == (undefined *)0x0) {
                                        LAB_140447358:
                                        lVar10 = FUN_14018b280(0x28);
                                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                                        }
                                        *(longlong *)(puVar17 + 0x10) = lVar10;
                                        if (puVar17 == local_c98) {
                                            *(longlong *)(local_c98 + 8) = lVar10;
                                            *(longlong *)(local_c98 + 0x18) = lVar10;
                                        }
                                        else if (puVar17 == *(undefined **)(local_c98 + 0x10)) {
                                            *(longlong *)(local_c98 + 0x10) = lVar10;
                                        }
                                    }
                                    else {
                                        do {
                                            puVar17 = puVar11;
                                            if (local_d08 < *(uint *)(puVar17 + 0x20)) {
                                                puVar11 = *(undefined **)(puVar17 + 0x10);
                                            }
                                            else {
                                                puVar11 = *(undefined **)(puVar17 + 0x18);
                                            }
                                        } while (puVar11 != (undefined *)0x0);
                                        if ((puVar17 == local_c98) || (local_d08 < *(uint *)(puVar17 + 0x20)))
                                            goto LAB_140447358;
                                        lVar10 = FUN_14018b280(0x28,0);
                                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack3332,local_d08);
                                        }
                                        *(longlong *)(puVar17 + 0x18) = lVar10;
                                        if (puVar17 == *(undefined **)(local_c98 + 0x18)) {
                                            *(longlong *)(local_c98 + 0x18) = lVar10;
                                        }
                                    }
                                    *(undefined **)(lVar10 + 8) = puVar17;
                                    *(undefined8 *)(lVar10 + 0x10) = 0;
                                    *(undefined8 *)(lVar10 + 0x18) = 0;
                                    FUN_1400081c0();
                                    local_c90 = local_c90 + 1;
                                }
                            }
                        }
                    }
                    LAB_1404473be:
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar22);
            }
            uVar8 = 0;
            if (DAT_140c63838 == (code *)0x0) {
                uVar22 = 0;
                if ((_DAT_140c652cc == 0) && (iVar7 = FUN_140214760(), -1 < iVar7)) {
                    uVar22 = (**(code **)(*DAT_140c65580 + 0x28))();
                }
            }
            else {
                uVar22 = (*DAT_140c63838)(&PTR_u_MapZoneWorldJoin_140a6b4e0,DAT_140c63858);
            }
            if (uVar22 != 0) {
                do {
                    lVar10 = FUN_140214a20(uVar8);
                    if ((lVar10 != 0) && ((longlong **)local_c18[1] != (longlong **)0x0)) {
                        uVar23 = *(uint *)(lVar10 + 4);
                        pplVar18 = (longlong **)local_c18[1];
                        pplVar15 = local_c18;
                        do {
                            if (*(uint *)(pplVar18 + 4) < uVar23) {
                                pplVar12 = (longlong **)pplVar18[3];
                            }
                            else {
                                pplVar12 = (longlong **)pplVar18[2];
                                pplVar15 = pplVar18;
                            }
                            pplVar18 = pplVar12;
                        } while (pplVar12 != (longlong **)0x0);
                        if ((pplVar15 != local_c18) && (*(uint *)(pplVar15 + 4) <= uVar23)) {
                            local_cf8 = (int *)CONCAT44(uVar8,uVar23);
                            puVar11 = *(undefined **)(local_b88 + 8);
                            puVar17 = local_b88;
                            while (puVar11 != (undefined *)0x0) {
                                puVar17 = puVar11;
                                if (uVar23 < *(uint *)(puVar11 + 0x20)) {
                                    puVar11 = *(undefined **)(puVar11 + 0x10);
                                }
                                else {
                                    puVar11 = *(undefined **)(puVar11 + 0x18);
                                }
                            }
                            local_d18 = (uint **)&local_cf8;
                            FUN_1400334f0(local_b90,local_bf0,0,puVar17);
                            FUN_1400293c0(local_b20,local_b70,lVar10 + 8);
                            local_cf0 = (uint *)CONCAT44(*(undefined4 *)(lVar10 + 4),*(uint *)(lVar10 + 8));
                            puVar11 = *(undefined **)(local_ba8 + 8);
                            puVar17 = local_ba8;
                            while (puVar11 != (undefined *)0x0) {
                                puVar17 = puVar11;
                                if (*(uint *)(lVar10 + 8) < *(uint *)(puVar11 + 0x20)) {
                                    puVar11 = *(undefined **)(puVar11 + 0x10);
                                }
                                else {
                                    puVar11 = *(undefined **)(puVar11 + 0x18);
                                }
                            }
                            local_d18 = &local_cf0;
                            FUN_1400334f0(local_bb0,local_be0,0,puVar17);
                        }
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar22);
            }
            uVar8 = 0;
            if (DAT_140c63838 == (code *)0x0) {
                uVar22 = 0;
                if ((_DAT_140c642bc == 0) && (iVar7 = FUN_140212120(), -1 < iVar7)) {
                    uVar22 = (**(code **)(*DAT_140c652a8 + 0x28))();
                }
            }
            else {
                uVar22 = (*DAT_140c63838)(&PTR_u_MapContinent_140a6b2e8,DAT_140c63858);
            }
            if (uVar22 != 0) {
                do {
                    lVar10 = FUN_1402123e0(uVar8);
                    if (lVar10 != 0) {
                        FUN_1400293c0(local_b00,local_bf0);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar22);
            }
            piVar13 = local_ac0;
            uVar21 = local_c90 + local_c70 + local_ba0 + local_cd0 + local_cb0 + local_b80 + local_c30 +
                     local_c50;
            if (uVar21 < 0xffffffff) {
                *local_ac0 = (int)local_c10 * 0x30;
                iVar7 = FUN_1401c5bb0(local_bf8);
                if (-1 < iVar7) {
                    local_c00 = (longlong **)(param_1 + 0x50);
                    piVar13[1] = (int)local_bc0 << 4;
                    iVar7 = FUN_1401c5bb0(local_a98);
                    if (-1 < iVar7) {
                        local_b70[0] = (longlong **)(param_1 + 0x58);
                        piVar13[2] = (int)local_cd0 * 8;
                        iVar7 = FUN_1401c5bb0(local_468);
                        if (-1 < iVar7) {
                            local_be0[0] = (longlong **)(param_1 + 0x60);
                            piVar13[3] = (int)local_b10 * 0xc;
                            iVar7 = FUN_1401c5bb0(local_888);
                            if (-1 < iVar7) {
                                local_bf0[0] = (longlong **)(param_1 + 0x68);
                                piVar13[4] = (int)local_af0 * 0xc;
                                iVar7 = FUN_1401c5bb0(local_678);
                                if (-1 < iVar7) {
                                    piVar13[5] = (int)uVar21 * 4;
                                    iVar7 = FUN_1401c5bb0(local_258);
                                    if (-1 < iVar7) {
                                        piVar13 = (int *)(**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))();
                                        local_cf8 = piVar13;
                                        puVar9 = (uint *)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))();
                                        pplVar18 = (longlong **)local_c18[2];
                                        puVar11 = *(undefined **)(local_c58 + 0x10);
                                        puVar17 = *(undefined **)(local_c38 + 0x10);
                                        puVar19 = *(undefined **)(local_b88 + 0x10);
                                        puVar28 = *(undefined **)(local_cb8 + 0x10);
                                        puVar29 = *(undefined **)(local_c98 + 0x10);
                                        uVar8 = 0;
                                        local_d08 = 0;
                                        local_cf0 = puVar9;
                                        if (pplVar18 != local_c18) {
                                            do {
                                                uVar22 = *(uint *)(pplVar18 + 4);
                                                *puVar9 = uVar22;
                                                puVar6 = *(undefined **)(local_ad8 + 8);
                                                puVar14 = local_ad8;
                                                while (puVar4 = puVar6, puVar4 != (undefined *)0x0) {
                                                    if (*(uint *)(puVar4 + 0x20) < uVar22) {
                                                        puVar6 = *(undefined **)(puVar4 + 0x18);
                                                    }
                                                    else {
                                                        puVar6 = *(undefined **)(puVar4 + 0x10);
                                                        puVar14 = puVar4;
                                                    }
                                                }
                                                if ((puVar14 == local_ad8) || (uVar22 < *(uint *)(puVar14 + 0x20))) {
                                                    local_ce8 = (longlong **)(ulonglong)uVar22;
                                                    local_bf8 = puVar14;
                                                    FUN_140032b30(local_ae0,&local_ab8,&local_bf8,&local_ce8);
                                                    puVar14 = local_ab8;
                                                    puVar9 = local_cf0;
                                                    uVar8 = local_d08;
                                                }
                                                puVar9[1] = *(uint *)(puVar14 + 0x24);
                                                uVar22 = (uint)((longlong)piVar13 - (longlong)local_cf8 >> 2);
                                                puVar9[3] = uVar22;
                                                puVar9[2] = uVar22;
                                                while ((puVar11 != local_c58 && (*(uint *)(puVar11 + 0x20) == *puVar9))) {
                                                    piVar26 = piVar13 + 1;
                                                    *piVar13 = *(int *)(puVar11 + 0x24);
                                                    puVar9[3] = puVar9[3] + 1;
                                                    puVar14 = *(undefined **)(puVar11 + 0x18);
                                                    piVar13 = piVar26;
                                                    if (puVar14 == (undefined *)0x0) {
                                                        puVar14 = *(undefined **)(puVar11 + 8);
                                                        if (puVar11 == *(undefined **)(puVar14 + 0x18)) {
                                                            do {
                                                                puVar11 = puVar14;
                                                                puVar14 = *(undefined **)(puVar11 + 8);
                                                            } while (puVar11 == *(undefined **)(puVar14 + 0x18));
                                                        }
                                                        if (*(undefined **)(puVar11 + 0x18) != puVar14) {
                                                            puVar11 = puVar14;
                                                        }
                                                    }
                                                    else {
                                                        for (puVar6 = *(undefined **)(puVar14 + 0x10); puVar11 = puVar14,
                                                                puVar6 != (undefined *)0x0; puVar6 = *(undefined **)(puVar6 + 0x10))
                                                        {
                                                            puVar14 = puVar6;
                                                        }
                                                    }
                                                }
                                                uVar22 = (uint)((longlong)piVar13 - (longlong)local_cf8 >> 2);
                                                puVar9[5] = uVar22;
                                                puVar9[4] = uVar22;
                                                while ((puVar17 != local_c38 && (*(uint *)(puVar17 + 0x20) == *puVar9))) {
                                                    piVar26 = piVar13 + 1;
                                                    *piVar13 = *(int *)(puVar17 + 0x2c);
                                                    puVar9[5] = puVar9[5] + 1;
                                                    puVar14 = *(undefined **)(puVar17 + 0x18);
                                                    piVar13 = piVar26;
                                                    if (puVar14 == (undefined *)0x0) {
                                                        puVar14 = *(undefined **)(puVar17 + 8);
                                                        if (puVar17 == *(undefined **)(puVar14 + 0x18)) {
                                                            do {
                                                                puVar17 = puVar14;
                                                                puVar14 = *(undefined **)(puVar17 + 8);
                                                            } while (puVar17 == *(undefined **)(puVar14 + 0x18));
                                                        }
                                                        if (*(undefined **)(puVar17 + 0x18) != puVar14) {
                                                            puVar17 = puVar14;
                                                        }
                                                    }
                                                    else {
                                                        for (puVar6 = *(undefined **)(puVar14 + 0x10); puVar17 = puVar14,
                                                                puVar6 != (undefined *)0x0; puVar6 = *(undefined **)(puVar6 + 0x10))
                                                        {
                                                            puVar14 = puVar6;
                                                        }
                                                    }
                                                }
                                                uVar22 = (uint)((longlong)piVar13 - (longlong)local_cf8 >> 2);
                                                puVar9[7] = uVar22;
                                                puVar9[6] = uVar22;
                                                while ((puVar19 != local_b88 && (*(uint *)(puVar19 + 0x20) == *puVar9))) {
                                                    piVar26 = piVar13 + 1;
                                                    *piVar13 = *(int *)(puVar19 + 0x24);
                                                    puVar9[7] = puVar9[7] + 1;
                                                    puVar14 = *(undefined **)(puVar19 + 0x18);
                                                    piVar13 = piVar26;
                                                    if (puVar14 == (undefined *)0x0) {
                                                        puVar14 = *(undefined **)(puVar19 + 8);
                                                        if (puVar19 == *(undefined **)(puVar14 + 0x18)) {
                                                            do {
                                                                puVar19 = puVar14;
                                                                puVar14 = *(undefined **)(puVar19 + 8);
                                                            } while (puVar19 == *(undefined **)(puVar14 + 0x18));
                                                        }
                                                        if (*(undefined **)(puVar19 + 0x18) != puVar14) {
                                                            puVar19 = puVar14;
                                                        }
                                                    }
                                                    else {
                                                        for (puVar6 = *(undefined **)(puVar14 + 0x10); puVar19 = puVar14,
                                                                puVar6 != (undefined *)0x0; puVar6 = *(undefined **)(puVar6 + 0x10))
                                                        {
                                                            puVar14 = puVar6;
                                                        }
                                                    }
                                                }
                                                uVar22 = (uint)((longlong)piVar13 - (longlong)local_cf8 >> 2);
                                                puVar9[9] = uVar22;
                                                puVar9[8] = uVar22;
                                                while ((puVar28 != local_cb8 && (*(uint *)(puVar28 + 0x20) == *puVar9))) {
                                                    piVar26 = piVar13 + 1;
                                                    *piVar13 = *(int *)(puVar28 + 0x24);
                                                    puVar9[9] = puVar9[9] + 1;
                                                    puVar14 = *(undefined **)(puVar28 + 0x18);
                                                    piVar13 = piVar26;
                                                    if (puVar14 == (undefined *)0x0) {
                                                        puVar14 = *(undefined **)(puVar28 + 8);
                                                        if (puVar28 == *(undefined **)(puVar14 + 0x18)) {
                                                            do {
                                                                puVar28 = puVar14;
                                                                puVar14 = *(undefined **)(puVar28 + 8);
                                                            } while (puVar28 == *(undefined **)(puVar14 + 0x18));
                                                        }
                                                        if (*(undefined **)(puVar28 + 0x18) != puVar14) {
                                                            puVar28 = puVar14;
                                                        }
                                                    }
                                                    else {
                                                        for (puVar6 = *(undefined **)(puVar14 + 0x10); puVar28 = puVar14,
                                                                puVar6 != (undefined *)0x0; puVar6 = *(undefined **)(puVar6 + 0x10))
                                                        {
                                                            puVar14 = puVar6;
                                                        }
                                                    }
                                                }
                                                uVar22 = (uint)((longlong)piVar13 - (longlong)local_cf8 >> 2);
                                                puVar9[0xb] = uVar22;
                                                puVar9[10] = uVar22;
                                                while ((puVar29 != local_c98 && (*(uint *)(puVar29 + 0x20) == *puVar9))) {
                                                    piVar26 = piVar13 + 1;
                                                    *piVar13 = *(int *)(puVar29 + 0x24);
                                                    puVar9[0xb] = puVar9[0xb] + 1;
                                                    puVar14 = *(undefined **)(puVar29 + 0x18);
                                                    piVar13 = piVar26;
                                                    if (puVar14 == (undefined *)0x0) {
                                                        puVar14 = *(undefined **)(puVar29 + 8);
                                                        if (puVar29 == *(undefined **)(puVar14 + 0x18)) {
                                                            do {
                                                                puVar29 = puVar14;
                                                                puVar14 = *(undefined **)(puVar29 + 8);
                                                            } while (puVar29 == *(undefined **)(puVar14 + 0x18));
                                                        }
                                                        if (*(undefined **)(puVar29 + 0x18) != puVar14) {
                                                            puVar29 = puVar14;
                                                        }
                                                    }
                                                    else {
                                                        for (puVar6 = *(undefined **)(puVar14 + 0x10); puVar29 = puVar14,
                                                                puVar6 != (undefined *)0x0; puVar6 = *(undefined **)(puVar6 + 0x10))
                                                        {
                                                            puVar14 = puVar6;
                                                        }
                                                    }
                                                }
                                                if ((((int)puVar9[2] < (int)puVar9[3]) || ((int)puVar9[4] < (int)puVar9[5]))
                                                    || ((int)puVar9[6] < (int)puVar9[7])) {
                                                    local_d00 = (longlong **)CONCAT44(uVar8,*puVar9);
                                                    FUN_140032f50(local_b60,local_ab0);
                                                    puVar9 = local_cf0 + 0xc;
                                                    uVar8 = local_d08 + 1;
                                                    local_d08 = uVar8;
                                                    local_cf0 = puVar9;
                                                }
                                                else {
                                                    *local_ac0 = *local_ac0 + -0x30;
                                                }
                                                pplVar15 = (longlong **)pplVar18[3];
                                                if (pplVar15 == (longlong **)0x0) {
                                                    pplVar15 = (longlong **)pplVar18[1];
                                                    if (pplVar18 == (longlong **)pplVar15[3]) {
                                                        do {
                                                            pplVar18 = pplVar15;
                                                            pplVar15 = (longlong **)pplVar18[1];
                                                        } while (pplVar18 == (longlong **)pplVar15[3]);
                                                    }
                                                    if ((longlong **)pplVar18[3] != pplVar15) {
                                                        pplVar18 = pplVar15;
                                                    }
                                                }
                                                else {
                                                    for (pplVar12 = (longlong **)pplVar15[2]; pplVar18 = pplVar15,
                                                            pplVar12 != (longlong **)0x0; pplVar12 = (longlong **)pplVar12[2]) {
                                                        pplVar15 = pplVar12;
                                                    }
                                                }
                                            } while (pplVar18 != local_c18);
                                        }
                                        lVar10 = (**(code **)(**local_c00 + 0x20))();
                                        puVar16 = (undefined4 *)(**(code **)(**local_b70[0] + 0x20))();
                                        piVar26 = local_cf8;
                                        pplVar18 = (longlong **)local_bc8[2];
                                        puVar11 = *(undefined **)(local_cd8 + 0x10);
                                        iVar7 = 0;
                                        if (pplVar18 != local_bc8) {
                                            puVar30 = (undefined4 *)(lVar10 + 8);
                                            do {
                                                uVar8 = *(uint *)(pplVar18 + 4);
                                                puVar30[-2] = uVar8;
                                                pplVar12 = (longlong **)local_b38[1];
                                                pplVar15 = local_b38;
                                                while (pplVar5 = pplVar12, pplVar5 != (longlong **)0x0) {
                                                    if (*(uint *)(pplVar5 + 4) < uVar8) {
                                                        pplVar12 = (longlong **)pplVar5[3];
                                                    }
                                                    else {
                                                        pplVar12 = (longlong **)pplVar5[2];
                                                        pplVar15 = pplVar5;
                                                    }
                                                }
                                                if ((pplVar15 == local_b38) || (uVar8 < *(uint *)(pplVar15 + 4))) {
                                                    local_d00 = (longlong **)(ulonglong)uVar8;
                                                    local_b70[0] = pplVar15;
                                                    FUN_140032b30(local_b40,&local_c00,local_b70,&local_d00);
                                                    pplVar15 = local_c00;
                                                }
                                                puVar30[-1] = *(undefined4 *)((longlong)pplVar15 + 0x24);
                                                *puVar30 = (int)((longlong)piVar13 - (longlong)piVar26 >> 2);
                                                while ((puVar11 != local_cd8 && (*(int *)(puVar11 + 0x20) == puVar30[-2])))
                                                {
                                                    puVar24 = puVar16 + 2;
                                                    piVar25 = piVar13 + 1;
                                                    *puVar16 = *(undefined4 *)(puVar11 + 0x24);
                                                    puVar16[1] = *(undefined4 *)(puVar11 + 0x28);
                                                    *piVar13 = iVar7;
                                                    puVar17 = *(undefined **)(puVar11 + 0x18);
                                                    iVar7 = iVar7 + 1;
                                                    piVar13 = piVar25;
                                                    puVar16 = puVar24;
                                                    if (puVar17 == (undefined *)0x0) {
                                                        puVar17 = *(undefined **)(puVar11 + 8);
                                                        if (puVar11 == *(undefined **)(puVar17 + 0x18)) {
                                                            do {
                                                                puVar11 = puVar17;
                                                                puVar17 = *(undefined **)(puVar11 + 8);
                                                            } while (puVar11 == *(undefined **)(puVar17 + 0x18));
                                                        }
                                                        if (*(undefined **)(puVar11 + 0x18) != puVar17) {
                                                            puVar11 = puVar17;
                                                        }
                                                    }
                                                    else {
                                                        for (puVar19 = *(undefined **)(puVar17 + 0x10); puVar11 = puVar17,
                                                                puVar19 != (undefined *)0x0;
                                                             puVar19 = *(undefined **)(puVar19 + 0x10)) {
                                                            puVar17 = puVar19;
                                                        }
                                                    }
                                                }
                                                puVar30[1] = (int)((longlong)piVar13 - (longlong)piVar26 >> 2);
                                                pplVar15 = (longlong **)pplVar18[3];
                                                if (pplVar15 == (longlong **)0x0) {
                                                    pplVar15 = (longlong **)pplVar18[1];
                                                    if (pplVar18 == (longlong **)pplVar15[3]) {
                                                        do {
                                                            pplVar18 = pplVar15;
                                                            pplVar15 = (longlong **)pplVar18[1];
                                                        } while (pplVar18 == (longlong **)pplVar15[3]);
                                                    }
                                                    if ((longlong **)pplVar18[3] != pplVar15) {
                                                        pplVar18 = pplVar15;
                                                    }
                                                }
                                                else {
                                                    for (pplVar12 = (longlong **)pplVar15[2]; pplVar18 = pplVar15,
                                                            pplVar12 != (longlong **)0x0; pplVar12 = (longlong **)pplVar12[2]) {
                                                        pplVar15 = pplVar12;
                                                    }
                                                }
                                                puVar30 = puVar30 + 4;
                                            } while (pplVar18 != local_bc8);
                                        }
                                        lVar10 = (**(code **)(**local_be0[0] + 0x20))();
                                        puVar11 = *(undefined **)(local_b18 + 0x10);
                                        puVar17 = *(undefined **)(local_ba8 + 0x10);
                                        if (puVar11 != local_b18) {
                                            piVar25 = (int *)(lVar10 + 8);
                                            do {
                                                piVar25[-2] = *(int *)(puVar11 + 0x20);
                                                iVar7 = (int)((longlong)piVar13 - (longlong)piVar26 >> 2);
                                                *piVar25 = iVar7;
                                                piVar25[-1] = iVar7;
                                                piVar27 = piVar13;
                                                if (puVar17 != local_ba8) {
                                                    do {
                                                        piVar13 = piVar27;
                                                        if (*(int *)(puVar17 + 0x20) != piVar25[-2]) break;
                                                        pplVar18 = local_b58;
                                                        if ((longlong **)local_b58[1] != (longlong **)0x0) {
                                                            pplVar15 = (longlong **)local_b58[1];
                                                            do {
                                                                if (*(uint *)(pplVar15 + 4) < *(uint *)(puVar17 + 0x24)) {
                                                                    pplVar12 = (longlong **)pplVar15[3];
                                                                }
                                                                else {
                                                                    pplVar12 = (longlong **)pplVar15[2];
                                                                    pplVar18 = pplVar15;
                                                                }
                                                                pplVar15 = pplVar12;
                                                            } while (pplVar12 != (longlong **)0x0);
                                                        }
                                                        if ((pplVar18 == local_b58) ||
                                                            (*(uint *)(puVar17 + 0x24) < *(uint *)(pplVar18 + 4))) {
                                                            local_d00 = (longlong **)(ulonglong)*(uint *)(puVar17 + 0x24);
                                                            local_be0[0] = pplVar18;
                                                            FUN_140032b30(local_b60,local_b70,local_be0,&local_d00);
                                                            pplVar18 = local_b70[0];
                                                        }
                                                        piVar13 = piVar27 + 1;
                                                        *piVar27 = *(int *)((longlong)pplVar18 + 0x24);
                                                        *piVar25 = *piVar25 + 1;
                                                        puVar19 = *(undefined **)(puVar17 + 0x18);
                                                        if (puVar19 == (undefined *)0x0) {
                                                            puVar19 = *(undefined **)(puVar17 + 8);
                                                            if (puVar17 == *(undefined **)(puVar19 + 0x18)) {
                                                                do {
                                                                    puVar17 = puVar19;
                                                                    puVar19 = *(undefined **)(puVar17 + 8);
                                                                } while (puVar17 == *(undefined **)(puVar19 + 0x18));
                                                            }
                                                            if (*(undefined **)(puVar17 + 0x18) != puVar19) {
                                                                puVar17 = puVar19;
                                                            }
                                                        }
                                                        else {
                                                            for (puVar28 = *(undefined **)(puVar19 + 0x10); puVar17 = puVar19,
                                                                    puVar28 != (undefined *)0x0;
                                                                 puVar28 = *(undefined **)(puVar28 + 0x10)) {
                                                                puVar19 = puVar28;
                                                            }
                                                        }
                                                        piVar27 = piVar13;
                                                    } while (puVar17 != local_ba8);
                                                }
                                                puVar19 = *(undefined **)(puVar11 + 0x18);
                                                piVar25 = piVar25 + 3;
                                                if (puVar19 == (undefined *)0x0) {
                                                    puVar19 = *(undefined **)(puVar11 + 8);
                                                    if (puVar11 == *(undefined **)(puVar19 + 0x18)) {
                                                        do {
                                                            puVar11 = puVar19;
                                                            puVar19 = *(undefined **)(puVar11 + 8);
                                                        } while (puVar11 == *(undefined **)(puVar19 + 0x18));
                                                    }
                                                    if (*(undefined **)(puVar11 + 0x18) != puVar19) {
                                                        puVar11 = puVar19;
                                                    }
                                                }
                                                else {
                                                    for (puVar28 = *(undefined **)(puVar19 + 0x10); puVar11 = puVar19,
                                                            puVar28 != (undefined *)0x0; puVar28 = *(undefined **)(puVar28 + 0x10)
                                                            ) {
                                                        puVar19 = puVar28;
                                                    }
                                                }
                                            } while (puVar11 != local_b18);
                                        }
                                        lVar10 = (**(code **)(**local_bf0[0] + 0x20))();
                                        puVar11 = *(undefined **)(local_af8 + 0x10);
                                        puVar17 = *(undefined **)(local_c78 + 0x10);
                                        if (puVar11 != local_af8) {
                                            piVar25 = (int *)(lVar10 + 8);
                                            do {
                                                piVar25[-2] = *(int *)(puVar11 + 0x20);
                                                iVar7 = (int)((longlong)piVar13 - (longlong)piVar26 >> 2);
                                                *piVar25 = iVar7;
                                                piVar25[-1] = iVar7;
                                                piVar27 = piVar13;
                                                if (puVar17 != local_c78) {
                                                    do {
                                                        piVar13 = piVar27;
                                                        if (*(int *)(puVar17 + 0x20) != piVar25[-2]) break;
                                                        pplVar18 = local_b58;
                                                        if ((longlong **)local_b58[1] != (longlong **)0x0) {
                                                            pplVar15 = (longlong **)local_b58[1];
                                                            do {
                                                                if (*(uint *)(pplVar15 + 4) < *(uint *)(puVar17 + 0x24)) {
                                                                    pplVar12 = (longlong **)pplVar15[3];
                                                                }
                                                                else {
                                                                    pplVar12 = (longlong **)pplVar15[2];
                                                                    pplVar18 = pplVar15;
                                                                }
                                                                pplVar15 = pplVar12;
                                                            } while (pplVar12 != (longlong **)0x0);
                                                        }
                                                        if ((pplVar18 == local_b58) ||
                                                            (*(uint *)(puVar17 + 0x24) < *(uint *)(pplVar18 + 4))) {
                                                            local_d00 = (longlong **)(ulonglong)*(uint *)(puVar17 + 0x24);
                                                            local_bf0[0] = pplVar18;
                                                            FUN_140032b30(local_b60,local_be0,local_bf0,&local_d00);
                                                            pplVar18 = local_be0[0];
                                                        }
                                                        piVar13 = piVar27 + 1;
                                                        *piVar27 = *(int *)((longlong)pplVar18 + 0x24);
                                                        *piVar25 = *piVar25 + 1;
                                                        puVar19 = *(undefined **)(puVar17 + 0x18);
                                                        if (puVar19 == (undefined *)0x0) {
                                                            puVar19 = *(undefined **)(puVar17 + 8);
                                                            if (puVar17 == *(undefined **)(puVar19 + 0x18)) {
                                                                do {
                                                                    puVar17 = puVar19;
                                                                    puVar19 = *(undefined **)(puVar17 + 8);
                                                                } while (puVar17 == *(undefined **)(puVar19 + 0x18));
                                                            }
                                                            if (*(undefined **)(puVar17 + 0x18) != puVar19) {
                                                                puVar17 = puVar19;
                                                            }
                                                        }
                                                        else {
                                                            for (puVar28 = *(undefined **)(puVar19 + 0x10); puVar17 = puVar19,
                                                                    puVar28 != (undefined *)0x0;
                                                                 puVar28 = *(undefined **)(puVar28 + 0x10)) {
                                                                puVar19 = puVar28;
                                                            }
                                                        }
                                                        piVar27 = piVar13;
                                                    } while (puVar17 != local_c78);
                                                }
                                                puVar19 = *(undefined **)(puVar11 + 0x18);
                                                piVar25 = piVar25 + 3;
                                                if (puVar19 == (undefined *)0x0) {
                                                    puVar19 = *(undefined **)(puVar11 + 8);
                                                    if (puVar11 == *(undefined **)(puVar19 + 0x18)) {
                                                        do {
                                                            puVar11 = puVar19;
                                                            puVar19 = *(undefined **)(puVar11 + 8);
                                                        } while (puVar11 == *(undefined **)(puVar19 + 0x18));
                                                    }
                                                    if (*(undefined **)(puVar11 + 0x18) != puVar19) {
                                                        puVar11 = puVar19;
                                                    }
                                                }
                                                else {
                                                    for (puVar28 = *(undefined **)(puVar19 + 0x10); puVar11 = puVar19,
                                                            puVar28 != (undefined *)0x0; puVar28 = *(undefined **)(puVar28 + 0x10)
                                                            ) {
                                                        puVar19 = puVar28;
                                                    }
                                                }
                                            } while (puVar11 != local_af8);
                                        }
                                        FUN_140008410(local_ca0);
                                        FUN_14018b900(local_c98,0);
                                        FUN_140008410(local_ae0);
                                        FUN_14018b900(local_ad8,0);
                                        FUN_140008410(local_b60);
                                        FUN_14018b900(local_b58,0);
                                        FUN_140008410(local_c80);
                                        FUN_14018b900(local_c78,0);
                                        FUN_140008410(local_bb0);
                                        FUN_14018b900(local_ba8,0);
                                        FUN_140008410(local_b90);
                                        FUN_14018b900(local_b88,0);
                                        FUN_140008410(local_ce0);
                                        FUN_14018b900(local_cd8,0);
                                        FUN_140008410(local_b40);
                                        FUN_14018b900(local_b38,0);
                                        FUN_140008410(local_cc0);
                                        FUN_14018b900(local_cb8,0);
                                        FUN_140008410(local_c40);
                                        FUN_14018b900(local_c38,0);
                                        FUN_140008410(local_c60);
                                        FUN_14018b900(local_c58,0);
                                        FUN_140008410(local_bd0);
                                        FUN_14018b900(local_bc8,0);
                                        FUN_140008410(local_b00);
                                        FUN_14018b900(local_af8,0);
                                        FUN_140008410(local_b20);
                                        FUN_14018b900(local_b18,0);
                                        FUN_140008410(local_c20);
                                        FUN_14018b900(local_c18,0);
                                        goto LAB_14044838d;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            FUN_140008410(local_ca0);
            FUN_14018b900(local_c98,0);
            FUN_140008410(local_ae0);
            FUN_14018b900(local_ad8,0);
            FUN_140008410(local_b60);
            FUN_14018b900(local_b58,0);
            FUN_140008410(local_c80);
            FUN_14018b900(local_c78,0);
            FUN_140008410(local_bb0);
            FUN_14018b900(local_ba8,0);
            FUN_140008410(local_b90);
            FUN_14018b900(local_b88,0);
            FUN_140008410(local_ce0);
            FUN_14018b900(local_cd8,0);
            FUN_140008410(local_b40);
            FUN_14018b900(local_b38,0);
            FUN_140008410(local_cc0);
            FUN_14018b900(local_cb8,0);
            FUN_140008410(local_c40);
            FUN_14018b900(local_c38,0);
            FUN_140008410(local_c60);
            FUN_14018b900(local_c58,0);
            FUN_140008410(local_bd0);
            FUN_14018b900(local_bc8,0);
            FUN_140008410(local_b00);
            FUN_14018b900(local_af8,0);
            FUN_140008410(local_b20);
            FUN_14018b900(local_b18,0);
            FUN_140008410(local_c20);
            FUN_14018b900(local_c18,0);
        }
        else {
            iVar7 = FUN_1401c5bb0(param_3);
            if (((-1 < iVar7) && (iVar7 = FUN_1401c5bb0(local_a98), -1 < iVar7)) &&
                ((iVar7 = FUN_1401c5bb0(local_468), -1 < iVar7 &&
                                                    ((iVar7 = FUN_1401c5bb0(local_888), -1 < iVar7 &&
                                                                                        (iVar7 = FUN_1401c5bb0(local_678), -1 < iVar7)))))) {
                FUN_1401c5bb0(local_258);
            }
        }
    }
    LAB_14044838d:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack3384);
    return;
}



longlong FUN_1404483b0(undefined8 param_1,ulonglong param_2)

{
    longlong lVar1;
    uint *puVar2;

    lVar1 = DAT_140c658f8;
    if (*(longlong *)(DAT_140c658f8 + 8) != 0) {
        puVar2 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
        if (param_2 < (ulonglong)*puVar2 / 0x30) {
            return param_2 * 0x50 + *(longlong *)(lVar1 + 8);
        }
    }
    return 0;
}



longlong FUN_140448420(undefined8 param_1,uint param_2)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;

    lVar4 = DAT_140c658f8;
    iVar6 = 0;
    iVar1 = 0;
    puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
    iVar5 = *puVar3 / 0x30 - 1;
    if (-1 < iVar5) {
        do {
            iVar1 = (iVar5 + iVar6) / 2;
            uVar2 = (***(code ***)(*(longlong *)(lVar4 + 8) + (longlong)iVar1 * 0x50))();
            if (param_2 < uVar2) {
                iVar5 = iVar1 + -1;
            }
            else {
                iVar6 = iVar1 + 1;
                if (param_2 <= uVar2) {
                    iVar6 = iVar5 + 1;
                }
            }
        } while (iVar6 <= iVar5);
    }
    uVar2 = (***(code ***)(*(longlong *)(lVar4 + 8) + (longlong)iVar1 * 0x50))();
    if (uVar2 == param_2) {
        lVar4 = *(longlong *)(lVar4 + 8) + (longlong)iVar1 * 0x50;
    }
    else {
        lVar4 = 0;
    }
    return lVar4;
}



undefined8 * FUN_1404484f0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar1 = DAT_140c658f8;
    uVar5 = 0;
    uVar3 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x68) + 0x10))();
    uVar6 = uVar5;
    if (uVar3 / 0xc != 0) {
        do {
            if ((((*(longlong *)(lVar1 + 0x10) != 0) &&
                  (uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x10))(), uVar5 < uVar3 / 0xc)) &&
                 (puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x10) + uVar6), puVar4 != (undefined8 *)0x0
                 )) && (iVar2 = (**(code **)*puVar4)(puVar4), iVar2 == param_2)) {
                return puVar4;
            }
            uVar5 = uVar5 + 1;
            uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x10))();
            uVar6 = uVar6 + 0x18;
        } while (uVar5 < uVar3 / 0xc);
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1404485c0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    uint *puVar6;
    longlong *plVar7;
    ulonglong uVar8;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    lVar2 = DAT_140c658f8;
    local_res8 = param_1;
    lVar4 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x68) + 0x20))();
    lVar4 = lVar4 + param_2 * 0xc;
    lVar5 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))();
    uVar8 = (ulonglong)*(int *)(lVar4 + 4);
    if (uVar8 < (ulonglong)(longlong)*(int *)(lVar4 + 8)) {
        do {
            uVar1 = *(uint *)(lVar5 + uVar8 * 4);
            puVar6 = (uint *)(**(code **)(**(longlong **)(lVar2 + 0x40) + 0x20))();
            if ((ulonglong)*puVar6 / 0x30 < (ulonglong)uVar1) {
                local_68 = &PTR_LAB_140b5e648;
                local_60 = 0;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_68);
                local_48 = local_68;
                local_res8 = 0x141dfcff0;
                local_40 = local_60;
                local_38 = local_58;
                iVar3 = FUN_1401971e0(&DAT_140c8ac5c,0x16,&local_res8,uVar1,&local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_58);
                if (iVar3 != 0) {
                    DebugBreak();
                }
            }
            else {
                plVar7 = (longlong *)((ulonglong)uVar1 * 0x50 + *(longlong *)(lVar2 + 8));
                if ((plVar7 != (longlong *)0x0) &&
                    (iVar3 = (**(code **)(*plVar7 + 0x38))(plVar7,param_3), iVar3 != 0)) {
                    return 1;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)(longlong)*(int *)(lVar4 + 8));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140448760(undefined8 param_1,longlong param_2,int param_3)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    lVar4 = DAT_140c658f8;
    lVar3 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
    lVar3 = param_2 * 0x30 + lVar3;
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x20))();
    uVar6 = (ulonglong)*(int *)(lVar3 + 0x18);
    if (uVar6 < (ulonglong)(longlong)*(int *)(lVar3 + 0x1c)) {
        do {
            uVar1 = *(undefined4 *)(lVar4 + uVar6 * 4);
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c652cc == 0) {
                    iVar2 = FUN_140214760();
                    if (iVar2 < 0) {
                        lVar5 = 0;
                    }
                    else {
                        lVar5 = (**(code **)(*DAT_140c65580 + 0x20))(DAT_140c65580,uVar1);
                    }
                }
                else {
                    lVar5 = 0;
                }
            }
            else {
                lVar5 = (*DAT_140c63848)(&PTR_u_MapZoneWorldJoin_140a6b4e0,uVar1,DAT_140c63858);
            }
            if (*(int *)(lVar5 + 8) == param_3) {
                return 1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)(longlong)*(int *)(lVar3 + 0x1c));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140448850(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    uint uVar7;
    ulonglong uVar8;

    lVar4 = DAT_140c658f8;
    lVar3 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
    lVar3 = param_2 * 0x30 + lVar3;
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x20))();
    uVar8 = (ulonglong)*(int *)(lVar3 + 0x18);
    if (*(int *)(lVar3 + 0x18) < *(int *)(lVar3 + 0x1c)) {
        puVar6 = (undefined4 *)(lVar4 + uVar8 * 4);
        do {
            uVar1 = *puVar6;
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c652cc == 0) {
                    iVar2 = FUN_140214760();
                    if (iVar2 < 0) {
                        lVar4 = 0;
                    }
                    else {
                        lVar4 = (**(code **)(*DAT_140c65580 + 0x20))(DAT_140c65580,uVar1);
                    }
                }
                else {
                    lVar4 = 0;
                }
            }
            else {
                lVar4 = (*DAT_140c63848)(&PTR_u_MapZoneWorldJoin_140a6b4e0,uVar1,DAT_140c63858);
            }
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c64698 == 0) {
                    iVar2 = FUN_14024aa60();
                    if (iVar2 < 0) {
                        puVar5 = (undefined4 *)0x0;
                    }
                    else {
                        puVar5 = (undefined4 *)(**(code **)(*DAT_140c63c08 + 0x18))();
                    }
                }
                else {
                    puVar5 = (undefined4 *)0x0;
                }
            }
            else {
                puVar5 = (undefined4 *)
                        (*DAT_140c63840)(&PTR_u_World_140a6e180,*(undefined4 *)(lVar4 + 8),DAT_140c63858);
            }
            if (puVar5[5] == 0) {
                return *puVar5;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            puVar6 = puVar6 + 1;
        } while ((int)uVar7 < *(int *)(lVar3 + 0x1c));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140448970(undefined8 param_1,longlong param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;

    lVar5 = DAT_140c658f8;
    lVar4 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
    lVar4 = param_2 * 0x30 + lVar4;
    lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x20))();
    iVar6 = *(int *)(lVar4 + 0x10);
    iVar7 = *(int *)(lVar4 + 0x14) + -1;
    if (iVar6 <= iVar7) {
        do {
            iVar2 = (iVar7 + iVar6) / 2;
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c63e08 == 0) {
                    iVar3 = FUN_1402129a0();
                    if (iVar3 < 0) {
                        lVar4 = 0;
                    }
                    else {
                        lVar4 = (**(code **)(*DAT_140c63ab8 + 0x20))();
                    }
                }
                else {
                    lVar4 = 0;
                }
            }
            else {
                lVar4 = (*DAT_140c63848)(&PTR_u_MapZoneHex_140a6b358,
                                         *(undefined4 *)(lVar5 + (longlong)iVar2 * 4),DAT_140c63858);
            }
            iVar3 = *(int *)(lVar4 + 0xc);
            iVar1 = param_3[1];
            if (iVar3 == iVar1) {
                if (*param_3 < *(int *)(lVar4 + 8)) {
                    iVar7 = iVar2 + -1;
                }
                else {
                    if (*param_3 <= *(int *)(lVar4 + 8)) {
                        return lVar4;
                    }
                    LAB_140448a51:
                    iVar6 = iVar2 + 1;
                }
            }
            else if (iVar1 < iVar3) {
                iVar7 = iVar2 + -1;
            }
            else if (iVar3 < iVar1) goto LAB_140448a51;
        } while (iVar6 <= iVar7);
    }
    return 0;
}



longlong FUN_140448a80(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
    uint uVar1;
    longlong lVar2;
    uint *puVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    int *piVar9;
    undefined8 local_res8;
    undefined local_38 [16];

    lVar2 = DAT_140c658f8;
    uVar8 = 0;
    local_res8 = param_1;
    puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
    uVar6 = uVar8;
    if ((ulonglong)*puVar3 / 0x30 == 0) {
        return (ulonglong)*puVar3 * -0x5555555555555555;
    }
    do {
        lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x20))();
        lVar5 = uVar6 + lVar4;
        if (*(int *)(uVar6 + lVar4) == param_2) {
            uVar7 = *(uint *)(lVar5 + 0x20);
            if (*(uint *)(lVar5 + 0x24) <= uVar7) {
                return lVar4;
            }
            do {
                lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))();
                uVar1 = *(uint *)(lVar4 + (ulonglong)uVar7 * 4);
                lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x20))();
                piVar9 = (int *)((ulonglong)uVar1 * 0x10 + lVar4);
                if (*piVar9 == param_3) {
                    uVar7 = piVar9[2];
                    if ((uint)piVar9[3] <= uVar7) {
                        return lVar4;
                    }
                    do {
                        lVar5 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))();
                        uVar6 = (ulonglong)*(uint *)(lVar5 + (ulonglong)uVar7 * 4);
                        lVar5 = (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x20))();
                        local_res8 = CONCAT44(*(undefined4 *)(lVar5 + uVar6 * 8 + 4),
                                              *(undefined4 *)(lVar5 + uVar6 * 8));
                        lVar5 = FUN_14044a5f0(param_4,local_38,&local_res8);
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < (uint)piVar9[3]);
                    return lVar5;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(lVar5 + 0x24));
            return lVar4;
        }
        uVar8 = uVar8 + 1;
        puVar3 = (uint *)(**(code **)(**(longlong **)(lVar2 + 0x40) + 0x20))();
        uVar6 = uVar6 + 0x30;
    } while (uVar8 < (ulonglong)*puVar3 / 0x30);
    return (ulonglong)*puVar3 * -0x5555555555555555;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_140448be0(undefined4 param_1,undefined8 param_2,int param_3,int param_4,float *param_5_00,
              longlong *param_5,int param_6,ulonglong *param_7)

{
    undefined auVar1 [12];
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    int *piVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong *plVar10;
    undefined (*pauVar11) [16];
    longlong lVar12;
    ulonglong uVar13;
    longlong lVar14;
    int iVar15;
    uint uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    longlong *plVar19;
    undefined auVar20 [16];
    undefined auVar21 [16];
    float fVar22;
    undefined4 uVar24;
    undefined auVar23 [16];
    float fVar25;
    float fVar26;
    float fVar27;
    undefined8 local_res8;
    int local_res10;
    int local_res18;
    int local_98;
    int local_94;
    longlong *local_90;
    longlong local_88;
    ulonglong local_80;
    longlong local_78;
    ulonglong local_70;
    int *local_68;
    undefined local_58 [8];
    int iStack80;
    int iStack76;

    lVar14 = DAT_140c658f8;
    uVar8 = *param_7;
    local_88 = DAT_140c658f8;
    local_98 = (int)uVar8;
    if (uVar8 == _DAT_140c77760) {
        fVar22 = (DAT_140c3b738 + param_5_00[2]) / _DAT_140c66f48 + 1.0;
        _local_58 = ZEXT1216(CONCAT48(param_1,CONCAT44(fVar22,(DAT_140c3b738 + *param_5_00) /
                                                              DAT_140c66f1c + 0.5))) &
                    (undefined  [16])0xffffffffffffffff;
        lVar5 = CONCAT44(fVar22,fVar22);
        auVar23 = CONCAT412(fVar22,CONCAT48(fVar22,lVar5));
        iVar15 = (int)fVar22;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar22)) {
            uVar3 = movmskps(local_98,CONCAT88(SUB168(CONCAT412(fVar22,CONCAT48(fVar22,lVar5)) >> 0x40,0),
                                               (ulonglong)(uint)fVar22 | lVar5 << 0x20));
            uVar8 = (ulonglong)(uVar3 & 1);
            auVar23 = ZEXT416((uint)(float)(iVar15 - (uVar3 & 1)));
        }
        uVar3 = (uint)uVar8;
        auVar1 = ZEXT412(SUB164(_local_58 >> 0x40,0)) << 0x40;
        fVar26 = local_58._0_4_ + fVar22 * 0.5;
        auVar20 = CONCAT124(auVar1 >> 0x20,fVar26) & (undefined  [16])0xffffffffffffffff;
        iVar15 = (int)fVar26;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar26)) {
            uVar3 = movmskps(uVar3,CONCAT88(SUB128(auVar1 >> 0x40,0),
                                            SUB168(auVar20,0) | SUB168(auVar20,0) << 0x20) &
                                   (undefined  [16])0xffffffffffffffff);
            uVar3 = uVar3 & 1;
            auVar20 = ZEXT416((uint)(float)(iVar15 - uVar3));
        }
        fVar26 = SUB164(auVar23,0);
        fVar27 = SUB164(auVar20,0) - fVar26 * 2.0;
        fVar25 = fVar27 * 0.3333333 + 1e-05;
        iVar15 = (int)fVar25;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar25)) {
            uVar8 = SUB168(CONCAT124(SUB1612(auVar20 >> 0x20,0) &
                                     SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0),fVar25),0);
            uVar3 = movmskps(uVar3,CONCAT88(SUB168(auVar20 >> 0x40,0),uVar8 | uVar8 << 0x20) &
                                   (undefined  [16])0xffffffffffffffff);
            uVar3 = uVar3 & 1;
            fVar25 = (float)(iVar15 - uVar3);
        }
        auVar20 = ZEXT416((uint)(local_58._0_4_ - fVar22 * 0.5)) & (undefined  [16])0xffffffffffffffff;
        iVar15 = (int)SUB164(auVar20,0);
        if ((iVar15 != -0x80000000) && ((float)iVar15 != SUB164(auVar20,0))) {
            uVar3 = movmskps(uVar3,ZEXT816(SUB168(auVar20,0) | SUB168(auVar20,0) << 0x20));
            uVar3 = uVar3 & 1;
            auVar20 = ZEXT416((uint)(float)(iVar15 - uVar3));
        }
        fVar22 = (((SUB164(auVar20,0) - fVar26) - fVar25 * 3.0) + 1.0 + (fVar27 - fVar25 * 3.0)) *
                 0.3333333 + 1e-05;
        auVar21 = CONCAT124(SUB1612(auVar20 >> 0x20,0),fVar22);
        iVar15 = (int)fVar22;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar22)) {
            uVar3 = movmskps(uVar3,CONCAT88(SUB168(auVar20 >> 0x40,0),
                                            SUB168(auVar21,0) | SUB168(auVar21,0) << 0x20) &
                                   (undefined  [16])0xffffffffffffffff);
            auVar21 = ZEXT416((uint)(float)(iVar15 - (uVar3 & 1)));
        }
        fVar22 = (fVar26 - SUB164(auVar21,0)) * 0.5;
        auVar20 = CONCAT124(SUB1612(auVar23 >> 0x20,0),fVar22);
        iVar15 = (int)fVar22;
        local_98 = (int)(fVar25 * 2.0 + fVar26 + SUB164(auVar21,0));
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar22)) {
            uVar24 = SUB164(auVar23 >> 0x20,0);
            uVar8 = SUB168(auVar20,0);
            uVar3 = movmskps(local_98,CONCAT88(SUB168(CONCAT412(uVar24,CONCAT48(uVar24,uVar8)) >> 0x40,0),
                                               uVar8 & 0xffffffff | uVar8 << 0x20));
            auVar20 = ZEXT416((uint)(float)(iVar15 - (uVar3 & 1)));
        }
        local_94 = (int)SUB164(auVar20,0);
    }
    else {
        local_94 = *(int *)((longlong)param_7 + 4);
    }
    local_res10 = param_3;
    local_res18 = param_4;
    local_res8._4_4_ = local_94;
    if ((param_5 == (longlong *)0x0) ||
        (local_res8._0_4_ = local_98, iVar15 = (**(code **)(*param_5 + 0x70))(param_5), iVar15 == 0)) {
        LAB_140448fc6:
        plVar10 = (longlong *)0x0;
        uVar8 = 0xffffffff;
        lVar5 = 0;
        local_90 = (longlong *)0x0;
        local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
        uVar18 = 0;
        local_70 = (**(code **)(**(longlong **)(lVar14 + 0x60) + 0x10))();
        local_70 = local_70 / 0xc;
        if (local_70 != 0) {
            local_78 = 0;
            do {
                lVar6 = local_78;
                lVar9 = (**(code **)(**(longlong **)(lVar14 + 0x60) + 0x20))();
                local_68 = (int *)(lVar9 + lVar6);
                if ((*local_68 == local_res10) &&
                    (uVar17 = (ulonglong)local_68[1], lVar6 = local_78, lVar9 = lVar5, local_80 = uVar17,
                            uVar17 < (ulonglong)(longlong)local_68[2])) {
                    do {
                        local_80 = uVar17;
                        lVar5 = (**(code **)(**(longlong **)(lVar14 + 0x70) + 0x20))();
                        plVar10 = (longlong *)FUN_140449680(lVar14,*(undefined4 *)(lVar5 + uVar17 * 4));
                        lVar5 = lVar9;
                        if (plVar10 != (longlong *)0x0) {
                            pauVar11 = (undefined (*) [16])(**(code **)(*plVar10 + 0x58))();
                            _local_58 = *pauVar11;
                            plVar19 = plVar10;
                            if ((((*(int *)*pauVar11 <= local_98) && (local_98 < *(int *)(*pauVar11 + 8))) &&
                                 (*(int *)(*pauVar11 + 4) <= local_94)) && (local_94 < *(int *)(*pauVar11 + 0xc)))
                            {
                                iVar15 = (**(code **)(*plVar10 + 0x20))(plVar10);
                                if (iVar15 == 0) {
                                    param_5._0_4_ = (**(code **)*plVar10)(plVar10);
                                    lVar14 = lVar14 + 0x18;
                                    lVar6 = FUN_1400326c0(lVar14,&param_5);
                                    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10);
                                    param_5._0_4_ = (**(code **)*plVar10)(plVar10);
                                    lVar12 = FUN_1400326c0(lVar14);
                                    if (lVar6 != *(longlong *)(lVar12 + 8)) {
                                        do {
                                            plVar19 = *(longlong **)(lVar6 + 0x20);
                                            iVar15 = (**(code **)(*plVar19 + 0x20))(plVar19);
                                            iVar4 = (**(code **)*plVar10)(plVar10);
                                            if (iVar15 == iVar4) {
                                                (**(code **)(*plVar19 + 0x28))(plVar19);
                                                iVar15 = FUN_1403c9450();
                                                if (iVar15 != 0) {
                                                    pauVar11 = (undefined (*) [16])(**(code **)(*plVar19 + 0x58))();
                                                    _local_58 = *pauVar11;
                                                    if (((*(int *)*pauVar11 <= local_98) &&
                                                         (local_98 < *(int *)(*pauVar11 + 8))) &&
                                                        ((*(int *)(*pauVar11 + 4) <= local_94 &&
                                                          ((local_94 < *(int *)(*pauVar11 + 0xc) &&
                                                            (uVar8 = (**(code **)(*plVar19 + 0x68))(plVar19), uVar17 = local_80,
                                                                    (uVar8 & 1) == 0)))))) break;
                                                }
                                            }
                                            lVar12 = *(longlong *)(lVar6 + 0x18);
                                            if (lVar12 == 0) {
                                                lVar12 = *(longlong *)(lVar6 + 8);
                                                if (lVar6 == *(longlong *)(lVar12 + 0x18)) {
                                                    do {
                                                        lVar6 = lVar12;
                                                        lVar12 = *(longlong *)(lVar6 + 8);
                                                    } while (lVar6 == *(longlong *)(lVar12 + 0x18));
                                                }
                                                if (*(longlong *)(lVar6 + 0x18) != lVar12) {
                                                    lVar6 = lVar12;
                                                }
                                            }
                                            else {
                                                for (lVar2 = *(longlong *)(lVar12 + 0x10); lVar6 = lVar12, lVar2 != 0;
                                                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                                                    lVar12 = lVar2;
                                                }
                                            }
                                            param_5._0_4_ = (**(code **)*plVar10)(plVar10);
                                            lVar12 = FUN_1400326c0(lVar14);
                                            uVar17 = local_80;
                                            plVar19 = plVar10;
                                        } while (lVar6 != *(longlong *)(lVar12 + 8));
                                    }
                                    uVar8 = local_res8 & 0xffffffff;
                                }
                                if ((param_6 != 0) && ((int)uVar8 != 0)) {
                                    uVar8 = 0;
                                    local_res8 = local_res8 & 0xffffffff00000000;
                                    local_90 = plVar19;
                                }
                                uVar13 = 0;
                                if (uVar18 != 0) {
                                    do {
                                        if (*(longlong **)(lVar9 + uVar13 * 8) == plVar19) goto LAB_140449288;
                                        uVar13 = uVar13 + 1;
                                    } while (uVar13 < uVar18);
                                }
                                lVar14 = FUN_14018db00(lVar9,uVar18 + 1,8);
                                *(longlong **)(uVar18 * 8 + lVar14) = plVar19;
                                if ((lVar9 != lVar14) && (FUN_1407db590(lVar14), lVar5 = lVar14, lVar9 != 0)) {
                                    (**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
                                }
                                uVar8 = local_res8 & 0xffffffff;
                                uVar18 = uVar18 + 1;
                            }
                            LAB_140449288:
                            lVar14 = local_88;
                            if ((param_6 != 0) &&
                                (iVar15 = (**(code **)(*plVar19 + 0x20))(plVar19), lVar14 = local_88, iVar15 == 0))
                            {
                                (**(code **)(*plVar19 + 0x28))();
                                iVar15 = FUN_1403c9450();
                                lVar14 = local_88;
                                if (iVar15 == 0) {
                                    if ((uint)uVar8 != 0) {
                                        local_58._4_4_ = local_58._4_4_ - local_94;
                                        iVar15 = (int)local_58._0_4_ - local_98;
                                        iStack80 = iStack80 - local_98;
                                        uVar3 = local_58._4_4_ * local_58._4_4_ + iVar15 * iVar15;
                                        uVar16 = local_58._4_4_ * local_58._4_4_ + iStack80 * iStack80;
                                        if (uVar16 < uVar3) {
                                            uVar3 = uVar16;
                                        }
                                        iStack76 = iStack76 - local_94;
                                        uVar16 = iStack76 * iStack76 + iVar15 * iVar15;
                                        if (uVar16 < uVar3) {
                                            uVar3 = uVar16;
                                        }
                                        uVar16 = iStack76 * iStack76 + iStack80 * iStack80;
                                        if (uVar16 < uVar3) {
                                            uVar3 = uVar16;
                                        }
                                        if (uVar3 < (uint)uVar8) {
                                            uVar8 = (ulonglong)uVar3;
                                            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar3;
                                            local_90 = plVar19;
                                        }
                                    }
                                }
                                else {
                                    uVar8 = 0;
                                    local_res8 = local_res8 & 0xffffffff00000000;
                                    local_90 = plVar19;
                                }
                            }
                        }
                        uVar17 = uVar17 + 1;
                        lVar6 = local_78;
                        plVar10 = local_90;
                        lVar9 = lVar5;
                        local_80 = uVar17;
                    } while (uVar17 < (ulonglong)(longlong)local_68[2]);
                }
                local_78 = lVar6 + 0xc;
                local_70 = local_70 - 1;
            } while (local_70 != 0);
            if ((uVar18 != 0) && (uVar8 = 0, uVar18 != 0)) {
                do {
                    param_5 = *(longlong **)(lVar5 + uVar8 * 8);
                    (**(code **)(*param_5 + 0x28))(param_5);
                    iVar15 = FUN_1403c9450();
                    if (iVar15 != 0) goto LAB_1404493d4;
                    (**(code **)(*param_5 + 0x28))(param_5);
                    iVar15 = FUN_1403c9450();
                    if (iVar15 != 0) goto LAB_1404493d4;
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar18);
            }
        }
        param_5 = (longlong *)0x0;
        if (param_6 != 0) {
            param_5 = plVar10;
        }
        LAB_1404493d4:
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
    }
    else {
        if (param_4 != 0) {
            (**(code **)(*param_5 + 0x28))(param_5);
            iVar15 = FUN_1403c9450();
            if (iVar15 == 0) goto LAB_140448fc6;
        }
        iVar15 = (**(code **)(*param_5 + 0x20))(param_5);
        if (iVar15 == 0) {
            local_res8._0_4_ = (**(code **)*param_5)(param_5);
            lVar14 = lVar14 + 0x18;
            lVar5 = FUN_1400326c0(lVar14,&local_res8);
            lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
            local_res8._0_4_ = (**(code **)*param_5)(param_5);
            lVar6 = FUN_1400326c0(lVar14);
            if (lVar5 != *(longlong *)(lVar6 + 8)) {
                do {
                    plVar10 = *(longlong **)(lVar5 + 0x20);
                    iVar15 = (**(code **)*param_5)(param_5);
                    iVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
                    if (iVar4 == iVar15) {
                        (**(code **)(*plVar10 + 0x28))(plVar10);
                        iVar15 = FUN_1403c9450();
                        if (iVar15 != 0) {
                            piVar7 = (int *)(**(code **)(*plVar10 + 0x58))();
                            if ((((*piVar7 <= local_98) && (local_98 < piVar7[2])) && (piVar7[1] <= local_94)) &&
                                ((local_94 < piVar7[3] &&
                                  (uVar8 = (**(code **)(*plVar10 + 0x68))(plVar10,&local_98), (uVar8 & 1) == 0)))) {
                                return plVar10;
                            }
                        }
                    }
                    lVar6 = *(longlong *)(lVar5 + 0x18);
                    if (lVar6 == 0) {
                        lVar6 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar6 + 0x18)) {
                            do {
                                lVar5 = lVar6;
                                lVar6 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar6 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar6) {
                            lVar5 = lVar6;
                        }
                    }
                    else {
                        for (lVar9 = *(longlong *)(lVar6 + 0x10); lVar5 = lVar6, lVar9 != 0;
                             lVar9 = *(longlong *)(lVar9 + 0x10)) {
                            lVar6 = lVar9;
                        }
                    }
                    local_res8._0_4_ = (**(code **)*param_5)(param_5);
                    lVar6 = FUN_1400326c0(lVar14);
                } while (lVar5 != *(longlong *)(lVar6 + 8));
            }
        }
    }
    return param_5;
}



longlong * FUN_140449420(undefined8 param_1,undefined8 *param_2,int *param_3)

{
    int *piVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    int *piVar6;
    ulonglong uVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;

    lVar2 = DAT_140c658f8;
    if (param_2 == (undefined8 *)0x0) {
        return (longlong *)0x0;
    }
    plVar10 = (longlong *)0x0;
    uVar4 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x68) + 0x10))();
    plVar8 = plVar10;
    plVar9 = plVar10;
    if ((longlong *)(uVar4 / 0xc) == (longlong *)0x0) {
        return (longlong *)0x0;
    }
    while( true ) {
        lVar5 = (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x20))();
        piVar1 = (int *)((longlong)plVar9 + lVar5);
        iVar3 = (**(code **)*param_2)(param_2);
        if (*piVar1 == iVar3) break;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
        plVar9 = (longlong *)((longlong)plVar9 + 0xc);
        if ((longlong *)(uVar4 / 0xc) <= plVar8) {
            return (longlong *)0x0;
        }
    }
    uVar4 = (ulonglong)piVar1[1];
    if ((ulonglong)(longlong)piVar1[2] <= uVar4) {
        return (longlong *)0x0;
    }
    do {
        (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))();
        plVar8 = (longlong *)FUN_140449680(lVar2);
        if ((plVar8 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar8 + 0x20))(plVar8), iVar3 == 0))
        {
            piVar6 = (int *)(**(code **)(*plVar8 + 0x58))();
            if (((*piVar6 <= *param_3) &&
                 (((*param_3 < piVar6[2] && (piVar6[1] <= param_3[1])) && (param_3[1] < piVar6[3])))) &&
                (uVar7 = (**(code **)(*plVar8 + 0x68))(plVar8), plVar10 = plVar8, (uVar7 & 1) == 0)) {
                return plVar8;
            }
        }
        uVar4 = uVar4 + 1;
        if ((ulonglong)(longlong)piVar1[2] <= uVar4) {
            return plVar10;
        }
    } while( true );
}



int FUN_140449570(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    uint *puVar6;
    int iVar7;
    int iVar8;

    if (param_2 != (longlong *)0x0) {
        do {
            iVar2 = (**(code **)(*param_2 + 0x50))(param_2);
            uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
            lVar1 = DAT_140c658f8;
            iVar8 = 0;
            iVar4 = 0;
            puVar6 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
            iVar7 = *puVar6 / 0x30 - 1;
            if (-1 < iVar7) {
                do {
                    iVar4 = (iVar7 + iVar8) / 2;
                    uVar5 = (***(code ***)(*(longlong *)(lVar1 + 8) + (longlong)iVar4 * 0x50))();
                    if (uVar3 < uVar5) {
                        iVar7 = iVar4 + -1;
                    }
                    else {
                        iVar8 = iVar4 + 1;
                        if (uVar3 <= uVar5) {
                            iVar8 = iVar7 + 1;
                        }
                    }
                } while (iVar8 <= iVar7);
            }
            uVar5 = (***(code ***)(*(longlong *)(lVar1 + 8) + (longlong)iVar4 * 0x50))();
            if (uVar5 == uVar3) {
                param_2 = (longlong *)((longlong)iVar4 * 0x50 + *(longlong *)(lVar1 + 8));
            }
            else {
                param_2 = (longlong *)0x0;
            }
        } while ((iVar2 == 0) && (param_2 != (longlong *)0x0));
        return iVar2;
    }
    return 0;
}



longlong FUN_140449680(longlong param_1,ulonglong param_2)

{
    int iVar1;
    uint *puVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    param_2 = param_2 & 0xffffffff;
    puVar2 = (uint *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
    if ((ulonglong)*puVar2 / 0x30 < param_2) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141dfcff0;
        local_20 = local_40;
        local_18 = local_38;
        iVar1 = FUN_1401971e0(&DAT_140c8ac5c,0x16,&local_res8,param_2,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    return param_2 * 0x50 + *(longlong *)(param_1 + 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1404497b0(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c658f8 != 0) {
        _DAT_140c65900 = _DAT_140c65900 + 1;
        return 0;
    }
    lVar2 = FUN_14018b280(0x78);
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = FUN_140445c80(lVar2);
    }
    iVar1 = FUN_140445ee0(lVar2);
    if (iVar1 < 0) {
        if (lVar2 != 0) {
            FUN_140445d00(lVar2);
            FUN_14018b900(lVar2,0);
        }
        return iVar1;
    }
    _DAT_140c65900 = _DAT_140c65900 + 1;
    DAT_140c658f8 = lVar2;
    return 0;
}



ulonglong FUN_140449850(void)

{
    uint *puVar1;

    if (DAT_140c658f8 != 0) {
        puVar1 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
        return (ulonglong)*puVar1 / 0x30;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140449890(int param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    uint *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;

    if (DAT_140c658f8 != 0) {
        puVar8 = (undefined8 *)0x0;
        puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
        puVar9 = puVar8;
        puVar10 = puVar8;
        if ((ulonglong)*puVar3 / 0x30 != 0) {
            do {
                lVar5 = DAT_140c658f8;
                puVar7 = puVar8;
                if ((*(longlong *)(DAT_140c658f8 + 8) != 0) &&
                    (puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))(),
                            puVar10 < (undefined8 *)((ulonglong)*puVar3 / 0x30))) {
                    puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)puVar9);
                }
                iVar2 = (**(code **)*puVar7)();
                lVar5 = DAT_140c658f8;
                if (iVar2 == param_1) {
                    lVar4 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
                    iVar2 = *(int *)(lVar4 + 0x28 + (longlong)puVar10 * 0x30);
                    lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x20))();
                    uVar1 = *(undefined4 *)(lVar5 + (iVar2 + param_2) * 4);
                    if (DAT_140c63848 != (code *)0x0) {
                        uVar6 = (*DAT_140c63848)(&PTR_u_MapZoneNemesisRegion_140a6b438,uVar1,DAT_140c63858);
                        return uVar6;
                    }
                    if (_DAT_140c63900 != 0) {
                        return 0;
                    }
                    iVar2 = FUN_140213aa0();
                    if (iVar2 < 0) {
                        return 0;
                    }
                    uVar6 = (**(code **)(*DAT_140c645e8 + 0x20))(DAT_140c645e8,uVar1);
                    return uVar6;
                }
                puVar10 = (undefined8 *)((longlong)puVar10 + 1);
                puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
                puVar9 = puVar9 + 10;
            } while (puVar10 < (undefined8 *)((ulonglong)*puVar3 / 0x30));
        }
    }
    return 0;
}



longlong FUN_140449a00(int param_1)

{
    longlong lVar1;
    int iVar2;
    uint *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    longlong lVar6;

    if (DAT_140c658f8 != 0) {
        uVar5 = 0;
        puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
        if ((ulonglong)*puVar3 / 0x30 != 0) {
            lVar6 = 0;
            do {
                lVar1 = DAT_140c658f8;
                if ((*(longlong *)(DAT_140c658f8 + 8) == 0) ||
                    (puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))(),
                            (ulonglong)*puVar3 / 0x30 <= uVar5)) {
                    puVar4 = (undefined8 *)0x0;
                }
                else {
                    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 8) + lVar6);
                }
                iVar2 = (**(code **)*puVar4)();
                if (iVar2 == param_1) {
                    lVar6 = (**(code **)(**(longlong **)(DAT_140c658f8 + 0x48) + 0x20))();
                    return (longlong)
                            (*(int *)(lVar6 + 0x2c + uVar5 * 0x30) - *(int *)(lVar6 + 0x28 + uVar5 * 0x30));
                }
                uVar5 = uVar5 + 1;
                lVar6 = lVar6 + 0x50;
                puVar3 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
            } while (uVar5 < (ulonglong)*puVar3 / 0x30);
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140449b10(undefined8 param_1,float param_2,float *param_3,undefined8 param_4,
                   undefined8 param_5)

{
    uint uVar1;
    undefined auVar2 [12];
    uint uVar3;
    int iVar4;
    uint uVar5;
    undefined *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    float extraout_XMM0_Da;
    undefined auVar10 [16];
    undefined auVar11 [16];
    undefined auVar12 [16];
    longlong lVar13;
    ulonglong uVar14;
    ulonglong uVar15;
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
    uint local_res8;
    int local_resc;
    undefined local_f8 [16];
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    undefined auVar16 [16];
    undefined4 uVar17;

    fVar24 = 0.5;
    fVar27 = 1.0;
    local_e8 = *param_3 - param_2;
    fStack228 = param_3[1] - 0.0;
    fStack224 = param_3[2] - param_2;
    fStack220 = param_3[3] - 0.0;
    fVar18 = (param_2 + *param_3 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    fVar20 = (param_2 + param_3[2] + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    lVar13 = CONCAT44(fVar20,fVar20);
    auVar16 = CONCAT412(fVar20,CONCAT48(fVar20,lVar13));
    iVar7 = (int)fVar20;
    puVar6 = (undefined *)register0x00000020;
    if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar20)) {
        uVar3 = movmskps((int)register0x00000020,
                         CONCAT88(SUB168(CONCAT412(fVar20,CONCAT48(fVar20,lVar13)) >> 0x40,0),
                                  (ulonglong)(uint)fVar20 | lVar13 << 0x20));
        puVar6 = (undefined *)(ulonglong)(uVar3 & 1);
        auVar16 = ZEXT416((uint)(float)(iVar7 - (uVar3 & 1)));
    }
    uVar3 = (uint)puVar6;
    fVar23 = fVar20 * 0.5;
    fVar21 = fVar23 + fVar18;
    auVar12 = CONCAT124(SUB1612(CONCAT412(fVar20,CONCAT48(fVar20,CONCAT44(fVar20,fVar23))) >> 0x20,0),
                        fVar21);
    iVar7 = (int)fVar21;
    if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar21)) {
        uVar15 = SUB168(auVar12,0);
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(fVar20,CONCAT48(fVar20,uVar15)) >> 0x40,0),
                                        uVar15 & 0xffffffff | uVar15 << 0x20));
        uVar3 = uVar3 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar7 - uVar3));
    }
    fVar25 = 2.0;
    fVar26 = 0.3333333;
    fVar21 = SUB164(auVar16,0);
    fVar20 = fVar21 * 2.0;
    fVar22 = SUB164(auVar12,0) - fVar20;
    uVar17 = SUB164(auVar12 >> 0x20,0);
    fVar19 = fVar22 * 0.3333333 + 1e-05;
    auVar12 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar12 >> 0x60,0),
                                          CONCAT48(SUB164(auVar12 >> 0x40,0),CONCAT44(uVar17,fVar22)))
                                        >> 0x20,0),fVar19);
    iVar7 = (int)fVar19;
    if ((iVar7 != -0x80000000) && (fVar20 = (float)iVar7, fVar20 != fVar19)) {
        uVar15 = SUB168(auVar12,0);
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(uVar17,CONCAT48(uVar17,uVar15)) >> 0x40,0),
                                        uVar15 & 0xffffffff | uVar15 << 0x20));
        uVar3 = uVar3 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar7 - uVar3));
    }
    auVar10 = ZEXT416((uint)(fVar18 - fVar23)) & (undefined  [16])0xffffffffffffffff;
    iVar7 = (int)SUB164(auVar10,0);
    fVar18 = SUB164(auVar12,0) * 3.0;
    if ((iVar7 != -0x80000000) && (fVar20 = (float)iVar7, fVar20 != SUB164(auVar10,0))) {
        uVar3 = movmskps(uVar3,ZEXT816(SUB168(auVar10,0) | SUB168(auVar10,0) << 0x20));
        uVar3 = uVar3 & 1;
        auVar10 = ZEXT416((uint)(float)(iVar7 - uVar3));
    }
    fVar18 = (((SUB164(auVar10,0) - fVar21) - fVar18) + 1.0 + (fVar22 - fVar18)) * 0.3333333 + 1e-05;
    uVar15 = SUB168(CONCAT124(SUB1612(auVar10 >> 0x20,0),fVar18),0);
    iVar7 = (int)fVar18;
    if ((iVar7 != -0x80000000) && (fVar20 = (float)iVar7, fVar20 != fVar18)) {
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(auVar10 >> 0x40,0),uVar15 | uVar15 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar3 = uVar3 & 1;
        uVar15 = (ulonglong)(uint)(float)(iVar7 - uVar3);
    }
    fVar18 = (fVar21 - (float)uVar15) * 0.5;
    auVar10 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar18);
    iVar7 = (int)fVar18;
    if ((iVar7 != -0x80000000) && (fVar20 = (float)iVar7, fVar20 != fVar18)) {
        uVar17 = SUB164(auVar16 >> 0x20,0);
        uVar14 = SUB168(auVar10,0);
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(uVar17,CONCAT48(uVar17,uVar14)) >> 0x40,0),
                                        uVar14 & 0xffffffff | uVar14 << 0x20));
        uVar3 = uVar3 & 1;
        auVar10 = ZEXT416((uint)(float)(iVar7 - uVar3));
    }
    iVar7 = (int)(SUB164(auVar12,0) * 2.0 + fVar21 + (float)uVar15) + 2;
    iVar9 = (int)SUB164(auVar10,0) + 2;
    fVar18 = (fStack224 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    local_f8 = ZEXT1216(CONCAT48(fVar20,CONCAT44(fVar18,(local_e8 + DAT_140c3b738) *
                                                        (1.0 / DAT_140c66f1c) + 0.5))) &
               (undefined  [16])0xffffffffffffffff;
    lVar13 = CONCAT44(fVar18,fVar18);
    auVar16 = CONCAT412(fVar18,CONCAT48(fVar18,lVar13));
    iVar8 = (int)fVar18;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar18)) {
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(fVar18,CONCAT48(fVar18,lVar13)) >> 0x40,0),
                                        (ulonglong)(uint)fVar18 | lVar13 << 0x20));
        uVar3 = uVar3 & 1;
        auVar16 = ZEXT416((uint)(float)(iVar8 - uVar3));
    }
    fVar21 = fVar18 * 0.5;
    fVar20 = fVar21 + local_f8._0_4_;
    auVar12 = CONCAT124(SUB1612(CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar21))) >> 0x20,0),
                        fVar20);
    iVar8 = (int)fVar20;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar20)) {
        uVar15 = SUB168(auVar12,0);
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(fVar18,CONCAT48(fVar18,uVar15)) >> 0x40,0),
                                        uVar15 & 0xffffffff | uVar15 << 0x20));
        uVar3 = uVar3 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar8 - uVar3));
    }
    fVar18 = SUB164(auVar16,0);
    fVar23 = SUB164(auVar12,0) - fVar18 * 2.0;
    uVar17 = SUB164(auVar12 >> 0x20,0);
    fVar20 = fVar23 * 0.3333333 + 1e-05;
    auVar12 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar12 >> 0x60,0),
                                          CONCAT48(SUB164(auVar12 >> 0x40,0),CONCAT44(uVar17,fVar23)))
                                        >> 0x20,0),fVar20);
    iVar8 = (int)fVar20;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar20)) {
        uVar15 = SUB168(auVar12,0);
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(uVar17,CONCAT48(uVar17,uVar15)) >> 0x40,0),
                                        uVar15 & 0xffffffff | uVar15 << 0x20));
        uVar3 = uVar3 & 1;
        auVar12 = ZEXT416((uint)(float)(iVar8 - uVar3));
    }
    fVar19 = 3.0;
    auVar10 = ZEXT416((uint)(local_f8._0_4_ - fVar21)) & (undefined  [16])0xffffffffffffffff;
    fVar20 = SUB164(auVar12,0) * 3.0;
    iVar8 = (int)SUB164(auVar10,0);
    if ((iVar8 != -0x80000000) && ((float)iVar8 != SUB164(auVar10,0))) {
        uVar3 = movmskps(uVar3,ZEXT816(SUB168(auVar10,0) | SUB168(auVar10,0) << 0x20));
        uVar3 = uVar3 & 1;
        auVar10 = ZEXT416((uint)(float)(iVar8 - uVar3));
    }
    fVar20 = (((SUB164(auVar10,0) - fVar18) - fVar20) + 1.0 + (fVar23 - fVar20)) * 0.3333333 + 1e-05;
    auVar11 = CONCAT124(SUB1612(auVar10 >> 0x20,0),fVar20);
    iVar8 = (int)fVar20;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar20)) {
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(auVar10 >> 0x40,0),
                                        SUB168(auVar11,0) | SUB168(auVar11,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar3 = uVar3 & 1;
        auVar11 = ZEXT416((uint)(float)(iVar8 - uVar3));
    }
    fVar20 = (fVar18 - SUB164(auVar11,0)) * 0.5;
    auVar10 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar20);
    iVar8 = (int)fVar20;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar20)) {
        uVar17 = SUB164(auVar16 >> 0x20,0);
        uVar15 = SUB168(auVar10,0);
        uVar3 = movmskps(uVar3,CONCAT88(SUB168(CONCAT412(uVar17,CONCAT48(uVar17,uVar15)) >> 0x40,0),
                                        uVar15 & 0xffffffff | uVar15 << 0x20));
        auVar10 = ZEXT416((uint)(float)(iVar8 - (uVar3 & 1)));
    }
    iVar4 = (int)SUB164(auVar10,0) + -1;
    iVar8 = DAT_140c7ce18;
    if (iVar7 < DAT_140c7ce18) {
        iVar8 = iVar7;
    }
    uVar3 = (int)(SUB164(auVar12,0) * 2.0 + fVar18 + SUB164(auVar11,0)) - 1;
    iVar7 = DAT_140c7ce1c;
    if (iVar9 < DAT_140c7ce1c) {
        iVar7 = iVar9;
    }
    uVar1 = DAT_140c7ce10;
    if ((int)DAT_140c7ce10 < (int)uVar3) {
        uVar1 = uVar3;
    }
    iVar9 = DAT_140c7ce14;
    if (DAT_140c7ce14 < iVar4) {
        iVar9 = iVar4;
    }
    if (((int)uVar1 < iVar8) && (iVar9 < iVar7)) {
        fVar20 = 1.5;
        param_2 = param_2 * param_2;
        fVar18 = DAT_140c45098;
        do {
            uVar3 = uVar1;
            local_resc = iVar9;
            do {
                uVar5 = (uVar3 & 1) + iVar9 * 2;
                fVar23 = ((float)uVar3 * fVar20 * DAT_140c7ac4c - fVar18) - *param_3;
                fVar21 = ((float)uVar5 * _DAT_140c7cdf8 - fVar18) - param_3[2];
                fVar21 = fVar21 * fVar21;
                if (fVar23 * fVar23 + fVar21 < param_2) {
                    local_res8 = uVar3;
                    uVar5 = FUN_14044a5f0(param_5,local_f8,&local_res8);
                    fVar18 = DAT_140c45098;
                    fVar21 = extraout_XMM0_Da;
                }
                uVar3 = uVar3 + 1;
            } while ((int)uVar3 < iVar8);
            iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
        fVar18 = (DAT_140c3b738 + param_3[2]) / _DAT_140c66f48 + fVar27;
        local_f8 = ZEXT1216(CONCAT48(fVar21,CONCAT44(fVar18,(DAT_140c3b738 + *param_3) / DAT_140c66f1c +
                                                            fVar24))) &
                   (undefined  [16])0xffffffffffffffff;
        lVar13 = CONCAT44(fVar18,fVar18);
        auVar16 = CONCAT412(fVar18,CONCAT48(fVar18,lVar13));
        iVar7 = (int)fVar18;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar18)) {
            uVar5 = movmskps(uVar5,CONCAT88(SUB168(CONCAT412(fVar18,CONCAT48(fVar18,lVar13)) >> 0x40,0),
                                            (ulonglong)(uint)fVar18 | lVar13 << 0x20));
            uVar5 = uVar5 & 1;
            auVar16 = ZEXT416((uint)(float)(iVar7 - uVar5));
        }
        auVar2 = ZEXT412(SUB164(local_f8 >> 0x40,0)) << 0x40;
        fVar20 = local_f8._0_4_ + fVar18 * fVar24;
        auVar12 = CONCAT124(auVar2 >> 0x20,fVar20) & (undefined  [16])0xffffffffffffffff;
        iVar7 = (int)fVar20;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar20)) {
            uVar5 = movmskps(uVar5,CONCAT88(SUB128(auVar2 >> 0x40,0),
                                            SUB168(auVar12,0) | SUB168(auVar12,0) << 0x20) &
                                   (undefined  [16])0xffffffffffffffff);
            uVar5 = uVar5 & 1;
            auVar12 = ZEXT416((uint)(float)(iVar7 - uVar5));
        }
        fVar20 = SUB164(auVar16,0);
        fVar23 = SUB164(auVar12,0) - fVar20 * fVar25;
        fVar21 = fVar23 * fVar26 + 1e-05;
        iVar7 = (int)fVar21;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar21)) {
            uVar15 = SUB168(CONCAT124(SUB1612(auVar12 >> 0x20,0) &
                                      SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0),fVar21),0);
            uVar5 = movmskps(uVar5,CONCAT88(SUB168(auVar12 >> 0x40,0),uVar15 | uVar15 << 0x20) &
                                   (undefined  [16])0xffffffffffffffff);
            uVar5 = uVar5 & 1;
            fVar21 = (float)(iVar7 - uVar5);
        }
        auVar12 = ZEXT416((uint)(local_f8._0_4_ - fVar18 * fVar24)) &
                  (undefined  [16])0xffffffffffffffff;
        iVar7 = (int)SUB164(auVar12,0);
        if ((iVar7 != -0x80000000) && ((float)iVar7 != SUB164(auVar12,0))) {
            uVar5 = movmskps(uVar5,ZEXT816(SUB168(auVar12,0) | SUB168(auVar12,0) << 0x20));
            uVar5 = uVar5 & 1;
            auVar12 = ZEXT416((uint)(float)(iVar7 - uVar5));
        }
        fVar18 = (((SUB164(auVar12,0) - fVar20) - fVar21 * fVar19) + fVar27 + (fVar23 - fVar21 * fVar19)
                 ) * fVar26 + 1e-05;
        auVar10 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar18);
        iVar7 = (int)fVar18;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar18)) {
            uVar3 = movmskps(uVar5,CONCAT88(SUB168(auVar12 >> 0x40,0),
                                            SUB168(auVar10,0) | SUB168(auVar10,0) << 0x20) &
                                   (undefined  [16])0xffffffffffffffff);
            auVar10 = ZEXT416((uint)(float)(iVar7 - (uVar3 & 1)));
        }
        fVar24 = (fVar20 - SUB164(auVar10,0)) * fVar24;
        auVar12 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar24);
        iVar7 = (int)fVar24;
        local_res8 = (uint)(fVar21 * fVar25 + fVar20 + SUB164(auVar10,0));
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar24)) {
            uVar17 = SUB164(auVar16 >> 0x20,0);
            uVar15 = SUB168(auVar12,0);
            uVar3 = movmskps(local_res8,
                             CONCAT88(SUB168(CONCAT412(uVar17,CONCAT48(uVar17,uVar15)) >> 0x40,0),
                                      uVar15 & 0xffffffff | uVar15 << 0x20));
            auVar12 = ZEXT416((uint)(float)(iVar7 - (uVar3 & 1)));
        }
        local_resc = (int)SUB164(auVar12,0);
        FUN_14044a5f0(param_5,local_f8,&local_res8);
    }
    return;
}



void FUN_14044a2d0(uint *param_1,float *param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    uint uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    fVar4 = fRam0000000140c7ce3c;
    fVar3 = fRam0000000140c7ce34;
    fVar2 = fRam0000000140c7ce2c;
    fVar1 = fRam0000000140c7ce24;
    fVar9 = (DAT_140c7ce20 - DAT_140c7ce00 * 0.5) + DAT_140c7ce00 * 3.0 * 0.25 * (float)*param_1;
    fVar6 = (DAT_140c7ce28 - DAT_140c7ce04 * 0.5) + (float)param_1[1] * DAT_140c7ce04;
    uVar5 = *param_1 & 0x80000001;
    if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    if (uVar5 == 1) {
        fVar6 = fVar6 + DAT_140c7ce04 * 0.5;
    }
    fVar7 = DAT_140c7ce00 + fVar9;
    fVar8 = DAT_140c7ce04 + fVar6;
    *param_2 = fVar9;
    param_2[1] = fVar1;
    param_2[2] = fVar6;
    param_2[3] = fVar2;
    param_2[4] = fVar7;
    param_2[5] = fVar3;
    param_2[6] = fVar8;
    param_2[7] = fVar4;
    return;
}



undefined4 * FUN_14044a3b0(undefined4 *param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    float fVar5;
    float fVar6;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;

    FUN_14044a2d0(param_2);
    uVar2 = uRam0000000140c7ce3c;
    uVar1 = uRam0000000140c7ce34;
    uVar3 = *(int *)(param_2 + 8) - (int)DAT_140c77768;
    fVar5 = (DAT_140c7ce28 - DAT_140c7ce04 * 0.5) +
            (float)(*(int *)(param_2 + 0xc) - DAT_140c77768._4_4_) * DAT_140c7ce04;
    uVar4 = uVar3 & 0x80000001;
    if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    if (uVar4 == 1) {
        fVar5 = fVar5 + DAT_140c7ce04 * 0.5;
    }
    fVar6 = DAT_140c7ce00 +
            (DAT_140c7ce20 - DAT_140c7ce00 * 0.5) + DAT_140c7ce00 * 3.0 * 0.25 * (float)uVar3;
    fVar5 = DAT_140c7ce04 + fVar5;
    *param_1 = local_58;
    param_1[1] = uStack84;
    param_1[2] = uStack80;
    param_1[3] = uStack76;
    param_1[4] = fVar6;
    param_1[5] = uVar1;
    param_1[6] = fVar5;
    param_1[7] = uVar2;
    return param_1;
}



longlong *
FUN_14044a4e0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
         (param_5[1] < *(int *)(param_4 + 0x24))) ||
        ((param_5[1] == *(int *)(param_4 + 0x24) && (*param_5 < *(int *)(param_4 + 0x20))))) {
        lVar2 = FUN_14018b280(0x28);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            *(int *)(lVar2 + 0x24) = param_5[1];
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
        lVar2 = FUN_14018b280();
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            *(int *)(lVar2 + 0x24) = param_5[1];
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



char ** FUN_14044a5f0(longlong param_1,char **param_2,int *param_3)

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
            if ((param_3[1] < *(int *)(pcVar5 + 0x24)) ||
                ((param_3[1] == *(int *)(pcVar5 + 0x24) && (*param_3 < *(int *)(pcVar5 + 0x20))))) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
                bVar6 = true;
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
                bVar6 = false;
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14044a6d7;
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
    if ((param_3[1] <= *(int *)(pcVar3 + 0x24)) &&
        ((*(int *)(pcVar3 + 0x24) != param_3[1] || (*param_3 <= *(int *)(pcVar3 + 0x20))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14044a6d7:
    ppcVar1 = (char **)FUN_14044a4e0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



undefined8 * FUN_14044a710(undefined8 *param_1)

{
    int iVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    int iVar6;

    puVar5 = (undefined8 *)0x0;
    *param_1 = 1;
    iVar6 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 6) = 4;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    puVar2 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    puVar2 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar2 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    *(undefined4 *)(param_1 + 0x1d) = 0;
    puVar2 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0x1f] = puVar2;
    param_1[0x20] = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x1f] + 8) = 0;
    *(undefined8 *)(param_1[0x1f] + 0x10) = param_1[0x1f];
    *(undefined8 *)(param_1[0x1f] + 0x18) = param_1[0x1f];
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
    puVar2 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x2d] = 0;
    param_1[0x2c] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x2c] + 8) = 0;
    *(undefined8 *)(param_1[0x2c] + 0x10) = param_1[0x2c];
    *(undefined8 *)(param_1[0x2c] + 0x18) = param_1[0x2c];
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x32] = 0;
    param_1[0x31] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    lVar3 = FUN_140200220();
    iVar1 = DAT_140c636a8;
    if (lVar3 != 0) {
        iVar6 = *(int *)(lVar3 + 4);
    }
    *(int *)(param_1 + 0x37) = iVar6;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
    iVar1 = iVar1 - iVar6;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 1;
    if (iVar6 == 0) {
        iVar6 = 1;
    }
    *(int *)(param_1 + 0x36) = iVar1;
    *(int *)(param_1 + 0x38) = iVar6;
    puVar4 = (undefined8 *)FUN_14018b280(0x12);
    if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_LAB_140b55060;
        puVar5 = puVar4;
    }
    *(undefined2 *)(puVar5 + 2) = 0;
    param_1[0x39] = puVar5 + 2;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    return param_1;
}



void FUN_14044a9b0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    FUN_14044dcc0();
    lVar1 = *(longlong *)(param_1 + 0x1f0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x1e8);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x1d0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x1a8) + 8))();
    }
    if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x1a0) + 8))();
    }
    if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x198) + 8))();
    }
    lVar1 = *(longlong *)(param_1 + 0x188);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x178);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 0x158);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x160),0);
    FUN_140195d70((undefined4 *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
    if (*(undefined8 **)(param_1 + 0x120) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x128);
    }
    if (*(undefined8 **)(param_1 + 0x128) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x120);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_14001a270(param_1 + 0xf0,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x10) = *(longlong *)(param_1 + 0xf8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x18) = *(longlong *)(param_1 + 0xf8);
        *(undefined8 *)(param_1 + 0x100) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xf8),0);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_14001a270(param_1 + 200,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x10) = *(longlong *)(param_1 + 0xd0);
        *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x18) = *(longlong *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xd0),0);
    if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_14001a270(param_1 + 0xa8,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10) = *(longlong *)(param_1 + 0xb0);
        *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18) = *(longlong *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xb0),0);
    if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_14001a270(param_1 + 0x88,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10) = *(longlong *)(param_1 + 0x90);
        *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) = *(longlong *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x98) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x90),0);
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
    FUN_140451620(param_1 + 0x38);
    FUN_140451450(param_1 + 0x20);
    uVar2 = 0;
    uVar3 = uVar2;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        do {
            lVar1 = *(longlong *)(uVar3 + 8 + *(longlong *)(param_1 + 0x10));
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x38;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x18));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140451368. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14044aca0(void)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    uint *puVar12;
    uint *puVar13;
    longlong lVar14;
    uint *puVar15;
    uint *puVar16;
    uint *puVar17;
    ulonglong uVar18;
    longlong lVar19;
    undefined auStack184 [32];
    uint local_98;
    longlong local_90;
    longlong local_88;
    longlong local_80;
    longlong local_78;
    uint local_70 [2];
    undefined8 local_68;
    undefined8 local_60;
    uint local_58;
    uint uStack84;
    uint local_50;
    undefined4 uStack76;
    undefined4 local_40;
    undefined4 uStack60;
    ulonglong local_38;

    lVar1 = DAT_140c65908;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    uVar9 = 0;
    uVar7 = uVar9;
    do {
        uVar6 = uVar9;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c65298 != 0) || (iVar3 = FUN_14023f3a0(), iVar3 < 0)) break;
            uVar2 = (**(code **)(*DAT_140c650f8 + 0x28))();
        }
        else {
            uVar2 = (*DAT_140c63838)(&PTR_u_StoreDisplayInfo_140a6d818);
        }
        if (uVar2 <= (uint)uVar7) break;
        FUN_1404514f0(lVar1 + 0x20);
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c65298 == 0) {
                iVar3 = FUN_14023f3a0();
                if (iVar3 < 0) {
                    uVar6 = 0;
                }
                else {
                    uVar6 = (**(code **)(*DAT_140c650f8 + 0x20))(DAT_140c650f8,uVar7);
                }
            }
        }
        else {
            uVar6 = (*DAT_140c63848)(&PTR_u_StoreDisplayInfo_140a6d818,uVar7);
        }
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + uVar7 * 0x28) = uVar6;
        uVar7 = (ulonglong)((uint)uVar7 + 1);
    } while( true );
    LAB_14044ad90:
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64170 != 0) || (iVar3 = FUN_1401e89c0(), iVar3 < 0)) goto LAB_14044ae68;
        uVar2 = (**(code **)(*DAT_140c652d0 + 0x28))();
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_AccountItem_140a690c8);
    }
    if (uVar2 <= (uint)uVar6) goto LAB_14044ae68;
    if (DAT_140c63848 == (code *)0x0) {
        uVar7 = uVar9;
        if (_DAT_140c64170 == 0) {
            iVar3 = FUN_1401e89c0();
            if (iVar3 < 0) {
                uVar7 = 0;
            }
            else {
                uVar7 = (**(code **)(*DAT_140c652d0 + 0x20))();
            }
        }
    }
    else {
        uVar7 = (*DAT_140c63848)(&PTR_u_AccountItem_140a690c8);
    }
    if ((*(int *)(uVar7 + 0x38) != 0) && (lVar8 = FUN_14044f9a0(lVar1), lVar8 != 0)) {
        FUN_140003460(lVar8 + 8);
    }
    uVar6 = (ulonglong)((uint)uVar6 + 1);
    goto LAB_14044ad90;
    LAB_14044ae68:
    uVar7 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c649f8 != 0) || (iVar3 = FUN_14023fc20(), iVar3 < 0)) goto LAB_14044b000;
        uVar2 = (**(code **)(*DAT_140c64f38 + 0x28))();
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_StoreKeyword_140a6d888,DAT_140c63858);
    }
    uVar4 = (uint)uVar9;
    if (uVar2 <= uVar4) goto LAB_14044b000;
    if (DAT_140c63848 == (code *)0x0) {
        uVar9 = uVar7;
        if (_DAT_140c649f8 == 0) {
            iVar3 = FUN_14023fc20();
            if (iVar3 < 0) {
                uVar9 = 0;
            }
            else {
                uVar9 = (**(code **)(*DAT_140c64f38 + 0x20))();
            }
        }
    }
    else {
        uVar9 = (*DAT_140c63848)(&PTR_u_StoreKeyword_140a6d888,uVar9,DAT_140c63858);
    }
    local_70[0] = *(uint *)(uVar9 + 4);
    if (*(ulonglong *)(lVar1 + 0x28) == 0) {
        LAB_14044afe6:
        uVar9 = (ulonglong)(uVar4 + 1);
    }
    else {
        uVar6 = uVar7;
        uVar18 = *(ulonglong *)(lVar1 + 0x28);
        do {
            uVar10 = (uVar18 - uVar6 >> 1) + uVar6;
            uVar2 = **(uint **)(*(longlong *)(lVar1 + 0x20) + uVar10 * 0x28);
            if (uVar2 <= local_70[0]) {
                if (local_70[0] <= uVar2) {
                    lVar8 = *(longlong *)(lVar1 + 0x20) + uVar10 * 0x28;
                    if (lVar8 != 0) {
                        uVar9 = *(ulonglong *)(uVar9 + 8);
                        if ((uVar9 != 0) && (uVar9 <= DAT_140c3fe70)) {
                            uVar7 = DAT_140c3fe68 + uVar9;
                        }
                        lVar14 = *(longlong *)(lVar8 + 0x20);
                        lVar19 = lVar14 + 1;
                        lVar11 = FUN_14018db00(*(undefined8 *)(lVar8 + 0x18),lVar19);
                        *(ulonglong *)(lVar11 + lVar14 * 8) = uVar7;
                        if (*(longlong *)(lVar8 + 0x18) != lVar11) {
                            FUN_1407db590(lVar11);
                            lVar14 = *(longlong *)(lVar8 + 0x18);
                            if (lVar14 != 0) {
                                (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                            }
                            *(longlong *)(lVar8 + 0x18) = lVar11;
                        }
                        *(longlong *)(lVar8 + 0x20) = lVar19;
                    }
                    goto LAB_14044afe6;
                }
                uVar6 = uVar10 + 1;
                uVar10 = uVar18;
            }
            uVar18 = uVar10;
        } while (uVar6 < uVar10);
        uVar9 = (ulonglong)(uVar4 + 1);
    }
    goto LAB_14044ae68;
    LAB_14044b000:
    puVar17 = (uint *)0x0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63f5c != 0) || (iVar3 = FUN_14023f7e0(), iVar3 < 0)) goto LAB_14044b1bf;
        uVar2 = (**(code **)(*DAT_140c650e0 + 0x28))();
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_StoreLink_140a6d850,DAT_140c63858);
    }
    if (uVar2 <= (uint)uVar7) goto LAB_14044b1bf;
    if (DAT_140c63848 == (code *)0x0) {
        puVar12 = puVar17;
        if (_DAT_140c63f5c == 0) {
            iVar3 = FUN_14023f7e0();
            if (iVar3 < 0) {
                puVar12 = (uint *)0x0;
            }
            else {
                puVar12 = (uint *)(**(code **)(*DAT_140c650e0 + 0x20))(DAT_140c650e0,uVar7);
            }
        }
    }
    else {
        puVar12 = (uint *)(*DAT_140c63848)(&PTR_u_StoreLink_140a6d850,uVar7);
    }
    local_58 = *puVar12;
    if ((*(byte *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) == 0) {
        uStack84 = puVar12[4];
    }
    else {
        uStack84 = puVar12[5];
    }
    puVar13 = *(uint **)(lVar1 + 0x80);
    local_50 = puVar12[6];
    uStack76 = 0;
    local_40 = 0;
    if (puVar13 != (uint *)0x0) {
        puVar12 = puVar13;
        do {
            puVar15 = (uint *)(((ulonglong)((longlong)puVar12 - (longlong)puVar17) >> 1) +
                               (longlong)puVar17);
            uVar2 = *(uint *)((longlong)puVar15 * 0x20 + *(longlong *)(lVar1 + 0x78));
            if (uVar2 <= local_58) {
                if (local_58 <= uVar2) goto LAB_14044b1a7;
                puVar17 = (uint *)((longlong)puVar15 + 1);
                puVar15 = puVar12;
            }
            puVar12 = puVar15;
        } while (puVar17 < puVar15);
    }
    lVar8 = FUN_14018db00(*(undefined8 *)(lVar1 + 0x78),(longlong)puVar13 + 1,0x20);
    lVar19 = (longlong)puVar17 * 0x20;
    FUN_1407db590(lVar8 + 0x20 + lVar19,*(longlong *)(lVar1 + 0x78) + lVar19);
    *(ulonglong *)(lVar19 + lVar8) = CONCAT44(uStack84,local_58);
    *(ulonglong *)(lVar19 + 8 + lVar8) = CONCAT44(uStack76,local_50);
    *(undefined8 *)(lVar19 + 0x10 + lVar8) = 0;
    *(ulonglong *)(lVar19 + 0x18 + lVar8) = CONCAT44(uStack60,local_40);
    if (*(longlong *)(lVar1 + 0x78) != lVar8) {
        FUN_1407db590(lVar8);
        lVar19 = *(longlong *)(lVar1 + 0x78);
        if (lVar19 != 0) {
            (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
        }
        *(longlong *)(lVar1 + 0x78) = lVar8;
    }
    *(longlong *)(lVar1 + 0x80) = (longlong)puVar13 + 1;
    LAB_14044b1a7:
    uVar7 = (ulonglong)((uint)uVar7 + 1);
    goto LAB_14044b000;
    LAB_14044b1bf:
    puVar12 = (uint *)0x0;
    uVar2 = (uint)puVar17;
    local_98 = uVar2;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64170 != 0) || (iVar3 = FUN_1401e89c0(), iVar3 < 0)) {
            LAB_14044b5f8:
            FUN_1407db4f0(local_38 ^ (ulonglong)auStack184);
            return;
        }
        uVar4 = (**(code **)(*DAT_140c652d0 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_AccountItem_140a690c8,DAT_140c63858);
    }
    if (uVar4 <= uVar2) goto LAB_14044b5f8;
    if (DAT_140c63848 == (code *)0x0) {
        puVar13 = puVar12;
        if ((_DAT_140c64170 == 0) && (iVar3 = FUN_1401e89c0(), -1 < iVar3)) {
            puVar13 = (uint *)(**(code **)(*DAT_140c652d0 + 0x20))(DAT_140c652d0,puVar17);
        }
    }
    else {
        puVar13 = (uint *)(*DAT_140c63848)(&PTR_u_AccountItem_140a690c8,puVar17);
    }
    iVar3 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63f5c == 0) && (iVar5 = FUN_14023f7e0(), -1 < iVar5)) {
            iVar3 = (**(code **)(*DAT_140c650e0 + 0x28))();
        }
    }
    else {
        iVar3 = (*DAT_140c63838)(&PTR_u_StoreLink_140a6d850,DAT_140c63858);
    }
    puVar17 = *(uint **)(lVar1 + 0x80);
    uVar2 = iVar3 + uVar2;
    local_50 = *puVar13;
    uStack84 = 0;
    uStack76 = 0;
    local_40 = 0;
    local_58 = uVar2;
    if (puVar17 != (uint *)0x0) {
        puVar15 = puVar17;
        do {
            puVar16 = (uint *)(((ulonglong)((longlong)puVar15 - (longlong)puVar12) >> 1) +
                               (longlong)puVar12);
            uVar4 = *(uint *)((longlong)puVar16 * 0x20 + *(longlong *)(lVar1 + 0x78));
            if (uVar4 <= uVar2) {
                if (uVar2 <= uVar4) goto LAB_14044b397;
                puVar12 = (uint *)((longlong)puVar16 + 1);
                puVar16 = puVar15;
            }
            puVar15 = puVar16;
        } while (puVar12 < puVar16);
    }
    lVar8 = FUN_14018db00(*(undefined8 *)(lVar1 + 0x78),(longlong)puVar17 + 1,0x20);
    lVar19 = (longlong)puVar12 * 0x20;
    FUN_1407db590(lVar8 + 0x20 + lVar19,*(longlong *)(lVar1 + 0x78) + lVar19,
                  (*(longlong *)(lVar1 + 0x80) - (longlong)puVar12) * 0x20);
    *(ulonglong *)(lVar19 + lVar8) = CONCAT44(uStack84,local_58);
    *(ulonglong *)(lVar19 + 8 + lVar8) = CONCAT44(uStack76,local_50);
    *(undefined8 *)(lVar19 + 0x10 + lVar8) = 0;
    *(ulonglong *)(lVar19 + 0x18 + lVar8) = CONCAT44(uStack60,local_40);
    if (*(longlong *)(lVar1 + 0x78) != lVar8) {
        FUN_1407db590(lVar8,*(longlong *)(lVar1 + 0x78),lVar19);
        if (*(longlong *)(lVar1 + 0x78) != 0) {
            (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 0x78) + -0x10) + 8))();
        }
        *(longlong *)(lVar1 + 0x78) = lVar8;
    }
    *(longlong *)(lVar1 + 0x80) = (longlong)puVar17 + 1;
    LAB_14044b397:
    lVar8 = *(longlong *)(lVar1 + 0x90);
    lVar19 = lVar8;
    if (*(longlong *)(lVar8 + 8) != 0) {
        lVar14 = *(longlong *)(lVar8 + 8);
        do {
            if (*(uint *)(lVar14 + 0x20) < *puVar13) {
                lVar11 = *(longlong *)(lVar14 + 0x18);
            }
            else {
                lVar11 = *(longlong *)(lVar14 + 0x10);
                lVar19 = lVar14;
            }
            lVar14 = lVar11;
        } while (lVar11 != 0);
    }
    if ((lVar19 == lVar8) || (*puVar13 < *(uint *)(lVar19 + 0x20))) {
        local_70[0] = *puVar13;
        local_60 = 0;
        local_68 = 0;
        local_90 = lVar19;
        FUN_140451770(lVar1 + 0x88,&local_78,&local_90,local_70);
        lVar19 = local_78;
    }
    lVar14 = *(longlong *)(lVar19 + 0x30);
    lVar8 = lVar14 + 1;
    lVar11 = FUN_14018db00(*(undefined8 *)(lVar19 + 0x28),lVar8);
    *(uint *)(lVar11 + lVar14 * 4) = uVar2;
    if (*(longlong *)(lVar19 + 0x28) != lVar11) {
        FUN_1407db590(lVar11);
        if (*(longlong *)(lVar19 + 0x28) != 0) {
            (**(code **)(*(longlong *)(*(longlong *)(lVar19 + 0x28) + -0x10) + 8))();
        }
        *(longlong *)(lVar19 + 0x28) = lVar11;
    }
    *(longlong *)(lVar19 + 0x30) = lVar8;
    uVar4 = puVar13[2];
    if (uVar4 != 0) {
        lVar8 = *(longlong *)(lVar1 + 0xb0);
        lVar14 = lVar8;
        lVar19 = *(longlong *)(lVar8 + 8);
        while (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x20) < uVar4) {
                lVar19 = *(longlong *)(lVar19 + 0x18);
            }
            else {
                lVar14 = lVar19;
                lVar19 = *(longlong *)(lVar19 + 0x10);
            }
        }
        if ((lVar14 == lVar8) || (uVar4 < *(uint *)(lVar14 + 0x20))) {
            local_60 = 0;
            local_68 = 0;
            local_90 = lVar14;
            local_70[0] = uVar4;
            FUN_140451770(lVar1 + 0xa8,&local_88,&local_90,local_70);
            lVar14 = local_88;
        }
        lVar19 = *(longlong *)(lVar14 + 0x30);
        lVar8 = lVar19 + 1;
        lVar11 = FUN_14018db00(*(undefined8 *)(lVar14 + 0x28),lVar8);
        *(uint *)(lVar11 + lVar19 * 4) = uVar2;
        if (*(longlong *)(lVar14 + 0x28) != lVar11) {
            FUN_1407db590(lVar11);
            if (*(longlong *)(lVar14 + 0x28) != 0) {
                (**(code **)(*(longlong *)(*(longlong *)(lVar14 + 0x28) + -0x10) + 8))();
            }
            *(longlong *)(lVar14 + 0x28) = lVar11;
        }
        *(longlong *)(lVar14 + 0x30) = lVar8;
    }
    uVar4 = puVar13[3];
    if (uVar4 != 0) {
        lVar8 = *(longlong *)(lVar1 + 0xd0);
        lVar14 = lVar8;
        lVar19 = *(longlong *)(lVar8 + 8);
        while (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x20) < uVar4) {
                lVar19 = *(longlong *)(lVar19 + 0x18);
            }
            else {
                lVar14 = lVar19;
                lVar19 = *(longlong *)(lVar19 + 0x10);
            }
        }
        if ((lVar14 == lVar8) || (uVar4 < *(uint *)(lVar14 + 0x20))) {
            local_60 = 0;
            local_68 = 0;
            local_90 = lVar14;
            local_70[0] = uVar4;
            FUN_140451770(lVar1 + 200,&local_80,&local_90,local_70);
            lVar14 = local_80;
        }
        lVar19 = *(longlong *)(lVar14 + 0x30);
        lVar8 = lVar19 + 1;
        lVar11 = FUN_14018db00(*(undefined8 *)(lVar14 + 0x28),lVar8);
        *(uint *)(lVar11 + lVar19 * 4) = uVar2;
        if (*(longlong *)(lVar14 + 0x28) != lVar11) {
            FUN_1407db590(lVar11);
            lVar19 = *(longlong *)(lVar14 + 0x28);
            if (lVar19 != 0) {
                (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
            }
            *(longlong *)(lVar14 + 0x28) = lVar11;
        }
        *(longlong *)(lVar14 + 0x30) = lVar8;
    }
    puVar17 = (uint *)(ulonglong)(local_98 + 1);
    goto LAB_14044b1bf;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14044b630(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4)

{
    undefined4 *puVar1;
    uint *puVar2;
    short sVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    short *psVar7;
    char *pcVar8;
    undefined4 *puVar9;
    undefined8 uVar10;
    undefined *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    longlong lVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    undefined8 *puVar17;
    char *pcVar18;
    char *pcVar19;
    char *pcVar20;
    longlong lVar21;
    longlong lVar22;
    ulonglong uVar23;
    longlong lVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    undefined8 *puVar27;
    undefined4 *puVar28;
    ulonglong uVar29;
    longlong lVar30;
    undefined4 *puVar31;
    bool bVar32;
    ulonglong local_c0;
    uint *local_a0;
    ulonglong local_98;
    longlong local_90;
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
    uint uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    uint local_48;
    uint uStack68;
    uint uStack64;
    uint uStack60;
    undefined local_38 [8];
    undefined8 uStack48;

    puVar9 = DAT_140c65908;
    if (param_3 - 0x986U < 0xc) {
        pcVar18 = IMAGE_DOS_HEADER_140000000.e_magic +
                  (&switchD_14044b665::switchdataD_14044b724)[param_3 - 0x987];
        switch(param_3) {
            case 0x987:
                DAT_140c65908[2] = 0;
                uStack48 = 0x14044b69a;
                FUN_14044cff0(puVar9);
                uStack48 = 0x14044b6a2;
                FUN_14044d450(puVar9);
                uStack48 = 0x14044b6aa;
                FUN_14044da90(puVar9);
                puVar9[1] = 1;
                *puVar9 = 0;
                uStack48 = 0x14044b6bc;
                FUN_14044dbd0();
                uStack48 = 0x14044b6c4;
                FUN_14044e4b0(puVar9);
                return 0;
            case 0x988:
                uVar10 = FUN_14044c170(pcVar18,param_4);
                return uVar10;
            case 0x989:
                uVar10 = FUN_14044cf40();
                return uVar10;
            case 0x98a:
                uVar10 = FUN_14044cea0(pcVar18,param_4);
                return uVar10;
            case 0x98b:
                if (DAT_140c65908[2] == 0) {
                    return 1;
                }
                local_98 = 0;
                if (*param_4 != 0) {
                    do {
                        uVar29 = 0;
                        local_a0 = (uint *)FUN_14018b280(0x60);
                        if (local_a0 == (uint *)0x0) {
                            local_a0 = (uint *)0x0;
                        }
                        else {
                            puVar11 = (undefined *)FUN_14018b280(0x28);
                            *(undefined8 *)(local_a0 + 8) = 0;
                            *(undefined **)(local_a0 + 6) = puVar11;
                            *puVar11 = 0;
                            *(undefined8 *)(*(longlong *)(local_a0 + 6) + 8) = 0;
                            *(longlong *)(*(longlong *)(local_a0 + 6) + 0x10) = *(longlong *)(local_a0 + 6);
                            *(longlong *)(*(longlong *)(local_a0 + 6) + 0x18) = *(longlong *)(local_a0 + 6);
                            *(undefined8 *)(local_a0 + 0xc) = 0;
                            *(undefined8 *)(local_a0 + 0xe) = 0;
                            *(undefined8 *)(local_a0 + 0x12) = 0;
                            *(undefined8 *)(local_a0 + 0x10) = 0;
                            *(undefined8 *)(local_a0 + 0x16) = 0;
                            *(undefined8 *)(local_a0 + 0x14) = 0;
                        }
                        lVar30 = local_98 * 0x40;
                        uVar4 = *(uint *)(lVar30 + *(longlong *)(param_4 + 2));
                        *local_a0 = uVar4;
                        uVar25 = *(ulonglong *)(puVar9 + 0x18);
                        if (uVar25 != 0) {
                            uVar23 = uVar25;
                            do {
                                uVar26 = (uVar23 - uVar29 >> 1) + uVar29;
                                uVar5 = **(uint **)(*(longlong *)(puVar9 + 0x16) + uVar26 * 8);
                                if (uVar5 <= uVar4) {
                                    uVar29 = uVar26;
                                    if (uVar4 <= uVar5) break;
                                    uVar29 = uVar26 + 1;
                                    uVar26 = uVar23;
                                }
                                uVar23 = uVar26;
                            } while (uVar29 < uVar26);
                        }
                        lVar12 = FUN_14018db00(*(undefined8 *)(puVar9 + 0x16),uVar25 + 1,8);
                        lVar24 = uVar29 * 8;
                        FUN_1407db590(lVar12 + 8 + lVar24,*(longlong *)(puVar9 + 0x16) + lVar24);
                        *(uint **)(lVar24 + lVar12) = local_a0;
                        if (*(longlong *)(puVar9 + 0x16) != lVar12) {
                            FUN_1407db590(lVar12);
                            if (*(longlong *)(puVar9 + 0x16) != 0) {
                                (**(code **)(*(longlong *)(*(longlong *)(puVar9 + 0x16) + -0x10) + 8))();
                            }
                            *(longlong *)(puVar9 + 0x16) = lVar12;
                        }
                        *(ulonglong *)(puVar9 + 0x18) = uVar25 + 1;
                        puVar17 = (undefined8 *)0x0;
                        local_a0[2] = *(uint *)(*(longlong *)(param_4 + 2) + 4 + lVar30);
                        lVar24 = *(longlong *)(local_a0 + 0xc);
                        psVar7 = *(short **)(*(longlong *)(param_4 + 2) + 8 + lVar30);
                        if (psVar7 == (short *)0x0) {
                            *(undefined8 *)(local_a0 + 0xc) = 0;
                        }
                        else {
                            sVar3 = *psVar7;
                            puVar27 = puVar17;
                            while (sVar3 != 0) {
                                puVar27 = (undefined8 *)((longlong)puVar27 + 1);
                                sVar3 = psVar7[(longlong)puVar27];
                            }
                            puVar13 = (undefined8 *)FUN_14018b280((longlong)puVar27 * 2 + 0x12,0);
                            if (puVar13 != (undefined8 *)0x0) {
                                puVar13[1] = puVar27;
                                *puVar13 = &PTR_LAB_140b55060;
                                puVar17 = puVar13;
                            }
                            puVar17 = puVar17 + 2;
                            FUN_1407db590(puVar17,psVar7);
                            *(undefined2 *)((longlong)puVar27 * 2 + (longlong)puVar17) = 0;
                            *(undefined8 **)(local_a0 + 0xc) = puVar17;
                        }
                        puVar17 = (undefined8 *)0x0;
                        if (lVar24 != 0) {
                            (**(code **)(*(longlong *)(lVar24 + -0x10) + 8))();
                        }
                        lVar24 = *(longlong *)(local_a0 + 0xe);
                        psVar7 = *(short **)(*(longlong *)(param_4 + 2) + 0x10 + lVar30);
                        if (psVar7 == (short *)0x0) {
                            *(undefined8 *)(local_a0 + 0xe) = 0;
                        }
                        else {
                            sVar3 = *psVar7;
                            puVar27 = puVar17;
                            while (sVar3 != 0) {
                                puVar27 = (undefined8 *)((longlong)puVar27 + 1);
                                sVar3 = psVar7[(longlong)puVar27];
                            }
                            puVar13 = (undefined8 *)FUN_14018b280((longlong)puVar27 * 2 + 0x12,0);
                            if (puVar13 != (undefined8 *)0x0) {
                                puVar13[1] = puVar27;
                                *puVar13 = &PTR_LAB_140b55060;
                                puVar17 = puVar13;
                            }
                            puVar17 = puVar17 + 2;
                            FUN_1407db590(puVar17,psVar7);
                            *(undefined2 *)((longlong)puVar27 * 2 + (longlong)puVar17) = 0;
                            *(undefined8 **)(local_a0 + 0xe) = puVar17;
                        }
                        if (lVar24 != 0) {
                            (**(code **)(*(longlong *)(lVar24 + -0x10) + 8))();
                        }
                        local_a0[1] = *(uint *)(*(longlong *)(param_4 + 2) + 0x18 + lVar30);
                        lVar24 = *(longlong *)(param_4 + 2) + lVar30;
                        local_c0 = 0;
                        if (*(int *)(lVar24 + 0x1c) != 0) {
                            do {
                                lVar24 = *(longlong *)(lVar24 + 0x20);
                                puVar31 = (undefined4 *)(lVar24 + local_c0 * 0x50);
                                local_88 = *puVar31;
                                uStack132 = puVar31[1];
                                uStack128 = puVar31[2];
                                uStack124 = puVar31[3];
                                puVar31 = (undefined4 *)(lVar24 + 0x10 + local_c0 * 0x50);
                                local_78 = *puVar31;
                                uStack116 = puVar31[1];
                                uStack112 = puVar31[2];
                                uStack108 = puVar31[3];
                                puVar31 = (undefined4 *)(lVar24 + 0x20 + local_c0 * 0x50);
                                local_68 = *puVar31;
                                uStack100 = puVar31[1];
                                uStack96 = puVar31[2];
                                uStack92 = puVar31[3];
                                puVar31 = (undefined4 *)(lVar24 + 0x30 + local_c0 * 0x50);
                                local_58 = *puVar31;
                                uStack84 = puVar31[1];
                                uStack80 = puVar31[2];
                                uStack76 = puVar31[3];
                                puVar2 = (uint *)(lVar24 + 0x40 + local_c0 * 0x50);
                                local_48 = *puVar2;
                                uStack68 = puVar2[1];
                                uStack64 = puVar2[2];
                                uStack60 = puVar2[3];
                                puVar13 = (undefined8 *)FUN_14018b280(0x68);
                                puVar17 = (undefined8 *)0x0;
                                puVar27 = puVar17;
                                if (puVar13 != (undefined8 *)0x0) {
                                    puVar13[2] = 0;
                                    puVar13[1] = 0;
                                    puVar13[5] = 0;
                                    puVar13[4] = 0;
                                    puVar13[9] = 0;
                                    puVar13[10] = 0;
                                    puVar13[0xc] = 0;
                                    puVar13[0xb] = 0;
                                    puVar27 = puVar13;
                                }
                                lVar12 = *(longlong *)(puVar9 + 0x1c);
                                lVar24 = lVar12 + 1;
                                lVar14 = FUN_14018db00(*(undefined8 *)(puVar9 + 0x1a),lVar24,8);
                                *(undefined8 **)(lVar14 + lVar12 * 8) = puVar27;
                                if (*(longlong *)(puVar9 + 0x1a) != lVar14) {
                                    FUN_1407db590(lVar14,*(longlong *)(puVar9 + 0x1a),*(longlong *)(puVar9 + 0x1c) << 3)
                                            ;
                                    lVar12 = *(longlong *)(puVar9 + 0x1a);
                                    if (lVar12 != 0) {
                                        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                    }
                                    *(longlong *)(puVar9 + 0x1a) = lVar14;
                                }
                                *(longlong *)(puVar9 + 0x1c) = lVar24;
                                psVar7 = (short *)CONCAT44(uStack124,uStack128);
                                *(undefined4 *)puVar27 = local_88;
                                lVar24 = puVar27[9];
                                if (psVar7 == (short *)0x0) {
                                    puVar27[9] = 0;
                                }
                                else {
                                    sVar3 = *psVar7;
                                    puVar13 = puVar17;
                                    while (sVar3 != 0) {
                                        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                                        sVar3 = psVar7[(longlong)puVar13];
                                    }
                                    puVar15 = (undefined8 *)FUN_14018b280((longlong)puVar13 * 2 + 0x12,0);
                                    puVar16 = puVar17;
                                    if (puVar15 != (undefined8 *)0x0) {
                                        puVar15[1] = puVar13;
                                        *puVar15 = &PTR_LAB_140b55060;
                                        puVar16 = puVar15;
                                    }
                                    puVar16 = puVar16 + 2;
                                    FUN_1407db590(puVar16,psVar7,(longlong)puVar13 * 2);
                                    *(undefined2 *)((longlong)puVar13 * 2 + (longlong)puVar16) = 0;
                                    puVar27[9] = puVar16;
                                }
                                if (lVar24 != 0) {
                                    (**(code **)(*(longlong *)(lVar24 + -0x10) + 8))(lVar24 + -0x10);
                                }
                                psVar7 = (short *)CONCAT44(uStack116,local_78);
                                lVar24 = puVar27[10];
                                if (psVar7 == (short *)0x0) {
                                    puVar27[10] = 0;
                                }
                                else {
                                    sVar3 = *psVar7;
                                    puVar13 = puVar17;
                                    while (sVar3 != 0) {
                                        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                                        sVar3 = psVar7[(longlong)puVar13];
                                    }
                                    puVar16 = (undefined8 *)FUN_14018b280((longlong)puVar13 * 2 + 0x12,0);
                                    if (puVar16 != (undefined8 *)0x0) {
                                        puVar16[1] = puVar13;
                                        *puVar16 = &PTR_LAB_140b55060;
                                        puVar17 = puVar16;
                                    }
                                    puVar17 = puVar17 + 2;
                                    FUN_1407db590(puVar17,psVar7,(longlong)puVar13 * 2);
                                    *(undefined2 *)((longlong)puVar13 * 2 + (longlong)puVar17) = 0;
                                    puVar27[10] = puVar17;
                                }
                                if (lVar24 != 0) {
                                    (**(code **)(*(longlong *)(lVar24 + -0x10) + 8))(lVar24 + -0x10);
                                }
                                uVar29 = CONCAT44(uStack92,uStack96);
                                *(undefined4 *)(puVar27 + 6) = local_68;
                                puVar27[7] = uVar29;
                                *(undefined *)(puVar27 + 8) = (undefined)local_58;
                                puVar27[3] = CONCAT44(uStack108,uStack112);
                                pcVar18 = *(char **)(puVar9 + 0x58);
                                bVar32 = true;
                                pcVar8 = pcVar18;
                                pcVar20 = *(char **)(pcVar18 + 8);
                                while (pcVar20 != (char *)0x0) {
                                    bVar32 = uVar29 < *(ulonglong *)(pcVar20 + 0x20);
                                    pcVar8 = pcVar20;
                                    if (bVar32) {
                                        pcVar20 = *(char **)(pcVar20 + 0x10);
                                    }
                                    else {
                                        pcVar20 = *(char **)(pcVar20 + 0x18);
                                    }
                                }
                                pcVar20 = pcVar8;
                                if (bVar32) {
                                    if (pcVar8 != *(char **)(pcVar18 + 0x10)) {
                                        if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
                                            pcVar20 = *(char **)(pcVar8 + 0x18);
                                        }
                                        else {
                                            pcVar20 = *(char **)(pcVar8 + 0x10);
                                            if (pcVar20 == (char *)0x0) {
                                                pcVar20 = *(char **)(pcVar8 + 8);
                                                pcVar19 = pcVar20;
                                                if (pcVar8 == *(char **)(pcVar20 + 0x10)) {
                                                    do {
                                                        pcVar20 = *(char **)(pcVar19 + 8);
                                                        bVar32 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                                        pcVar19 = pcVar20;
                                                    } while (bVar32);
                                                }
                                            }
                                            else {
                                                for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                                     pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                                    pcVar20 = pcVar19;
                                                }
                                            }
                                        }
                                        goto LAB_14044bcdd;
                                    }
                                    LAB_14044bce7:
                                    if ((pcVar8 == pcVar18) || (uVar29 < *(ulonglong *)(pcVar8 + 0x20))) {
                                        lVar24 = FUN_14018b280(0x28);
                                        if ((ulonglong *)(lVar24 + 0x20) != (ulonglong *)0x0) {
                                            *(ulonglong *)(lVar24 + 0x20) = uVar29;
                                        }
                                        *(longlong *)(pcVar8 + 0x10) = lVar24;
                                        pcVar18 = *(char **)(puVar9 + 0x58);
                                        if (pcVar8 == pcVar18) {
                                            *(longlong *)(pcVar18 + 8) = lVar24;
                                            *(longlong *)(*(longlong *)(puVar9 + 0x58) + 0x18) = lVar24;
                                        }
                                        else if (pcVar8 == *(char **)(pcVar18 + 0x10)) {
                                            *(longlong *)(pcVar18 + 0x10) = lVar24;
                                        }
                                    }
                                    else {
                                        lVar24 = FUN_14018b280(0x28);
                                        if ((ulonglong *)(lVar24 + 0x20) != (ulonglong *)0x0) {
                                            *(ulonglong *)(lVar24 + 0x20) = uVar29;
                                        }
                                        *(longlong *)(pcVar8 + 0x18) = lVar24;
                                        if (pcVar8 == *(char **)(*(longlong *)(puVar9 + 0x58) + 0x18)) {
                                            *(longlong *)(*(longlong *)(puVar9 + 0x58) + 0x18) = lVar24;
                                        }
                                    }
                                    *(char **)(lVar24 + 8) = pcVar8;
                                    *(undefined8 *)(lVar24 + 0x10) = 0;
                                    *(undefined8 *)(lVar24 + 0x18) = 0;
                                    FUN_1400081c0(lVar24,*(longlong *)(puVar9 + 0x58) + 8);
                                    *(longlong *)(puVar9 + 0x5a) = *(longlong *)(puVar9 + 0x5a) + 1;
                                }
                                else {
                                    LAB_14044bcdd:
                                    if (*(ulonglong *)(pcVar20 + 0x20) < uVar29) goto LAB_14044bce7;
                                }
                                uVar29 = (ulonglong)uStack84;
                                if (uVar29 != 0) {
                                    puVar31 = (undefined4 *)(CONCAT44(uStack76,uStack80) + 0xc);
                                    do {
                                        lVar12 = puVar27[5];
                                        lVar24 = lVar12 + 1;
                                        lVar14 = FUN_14018db00(puVar27[4],lVar24,0x20);
                                        if (puVar27[4] != lVar14) {
                                            FUN_1407db590(lVar14,puVar27[4],puVar27[5] << 5);
                                            lVar21 = puVar27[4];
                                            if (lVar21 != 0) {
                                                (**(code **)(*(longlong *)(lVar21 + -0x10) + 8))(lVar21 + -0x10);
                                            }
                                            puVar27[4] = lVar14;
                                        }
                                        puVar27[5] = lVar24;
                                        puVar28 = (undefined4 *)(lVar12 * 0x20 + puVar27[4]);
                                        *puVar28 = puVar31[-3];
                                        puVar28[2] = puVar31[-1];
                                        puVar28[3] = *puVar31;
                                        *(undefined8 *)(puVar28 + 4) = *(undefined8 *)(puVar31 + 1);
                                        *(undefined8 *)(puVar28 + 6) = *(undefined8 *)(puVar31 + 3);
                                        puVar28[1] = puVar31[-2];
                                        FUN_140007810(puVar9 + 0x56,local_38);
                                        puVar31 = puVar31 + 8;
                                        uVar29 = uVar29 - 1;
                                    } while (uVar29 != 0);
                                }
                                uVar29 = (ulonglong)local_48;
                                if (uVar29 != 0) {
                                    puVar31 = (undefined4 *)(CONCAT44(uStack60,uStack64) + 4);
                                    do {
                                        lVar12 = puVar27[2];
                                        lVar24 = lVar12 + 1;
                                        lVar14 = FUN_14018db00(puVar27[1],lVar24,0x10);
                                        if (puVar27[1] != lVar14) {
                                            FUN_1407db590(lVar14,puVar27[1],puVar27[2] << 4);
                                            if (puVar27[1] != 0) {
                                                (**(code **)(*(longlong *)(puVar27[1] + -0x10) + 8))();
                                            }
                                            puVar27[1] = lVar14;
                                        }
                                        puVar27[2] = lVar24;
                                        puVar28 = (undefined4 *)(lVar12 * 0x10 + puVar27[1]);
                                        *puVar28 = puVar31[-1];
                                        iVar6 = puVar31[-1];
                                        if (iVar6 == 0) {
                                            LAB_14044bec2:
                                            puVar28[1] = *puVar31;
                                        }
                                        else if (iVar6 == 1) {
                                            puVar28[1] = *puVar31;
                                            puVar28[2] = puVar31[1];
                                        }
                                        else if (iVar6 == 2) goto LAB_14044bec2;
                                        puVar1 = puVar31 + 2;
                                        puVar31 = puVar31 + 4;
                                        puVar28[3] = *puVar1;
                                        uVar29 = uVar29 - 1;
                                    } while (uVar29 != 0);
                                }
                                FUN_14044d0a0(puVar9,puVar27 + 0xb,puVar27);
                                lVar12 = *(longlong *)(local_a0 + 0x12);
                                lVar24 = lVar12 + 1;
                                lVar14 = FUN_14018db00(*(undefined8 *)(local_a0 + 0x10),lVar24);
                                *(undefined8 **)(lVar14 + lVar12 * 8) = puVar27;
                                if (*(longlong *)(local_a0 + 0x10) != lVar14) {
                                    FUN_1407db590(lVar14);
                                    lVar12 = *(longlong *)(local_a0 + 0x10);
                                    if (lVar12 != 0) {
                                        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                    }
                                    *(longlong *)(local_a0 + 0x10) = lVar14;
                                }
                                *(longlong *)(local_a0 + 0x12) = lVar24;
                                lVar24 = lVar30 + *(longlong *)(param_4 + 2);
                                local_c0 = local_c0 + 1;
                            } while (local_c0 < *(uint *)(lVar24 + 0x1c));
                        }
                        uVar29 = 0;
                        lVar24 = *(longlong *)(param_4 + 2) + lVar30;
                        if (*(int *)(lVar24 + 0x28) != 0) {
                            do {
                                uVar25 = 0;
                                uVar4 = *(uint *)(*(longlong *)(lVar24 + 0x30) + uVar29 * 4);
                                if (*(ulonglong *)(puVar9 + 0x14) != 0) {
                                    uVar23 = *(ulonglong *)(puVar9 + 0x14);
                                    do {
                                        uVar26 = (uVar23 - uVar25 >> 1) + uVar25;
                                        puVar2 = *(uint **)(*(longlong *)(puVar9 + 0x12) + uVar26 * 8);
                                        if (*puVar2 <= uVar4) {
                                            if (uVar4 <= *puVar2) {
                                                if (puVar2 != (uint *)0x0) {
                                                    lVar12 = *(longlong *)(puVar2 + 10);
                                                    lVar24 = lVar12 + 1;
                                                    lVar14 = FUN_14018db00(*(undefined8 *)(puVar2 + 8),lVar24);
                                                    *(uint **)(lVar14 + lVar12 * 8) = local_a0;
                                                    if (*(longlong *)(puVar2 + 8) != lVar14) {
                                                        FUN_1407db590(lVar14);
                                                        lVar12 = *(longlong *)(puVar2 + 8);
                                                        if (lVar12 != 0) {
                                                            (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                                        }
                                                        *(longlong *)(puVar2 + 8) = lVar14;
                                                    }
                                                    *(longlong *)(puVar2 + 10) = lVar24;
                                                }
                                                break;
                                            }
                                            uVar25 = uVar26 + 1;
                                            uVar26 = uVar23;
                                        }
                                        uVar23 = uVar26;
                                    } while (uVar25 < uVar26);
                                }
                                uVar29 = uVar29 + 1;
                                lVar24 = lVar30 + *(longlong *)(param_4 + 2);
                            } while (uVar29 < *(uint *)(lVar24 + 0x28));
                        }
                        uVar29 = 0;
                        lVar24 = *(longlong *)(param_4 + 2) + lVar30;
                        if (*(int *)(lVar24 + 0x28) != 0) {
                            do {
                                lVar12 = *(longlong *)(local_a0 + 6);
                                lVar14 = lVar12;
                                if (*(longlong *)(lVar12 + 8) != 0) {
                                    lVar21 = *(longlong *)(lVar12 + 8);
                                    do {
                                        if (*(uint *)(lVar21 + 0x20) <
                                            *(uint *)(*(longlong *)(lVar24 + 0x30) + uVar29 * 4)) {
                                            lVar22 = *(longlong *)(lVar21 + 0x18);
                                        }
                                        else {
                                            lVar22 = *(longlong *)(lVar21 + 0x10);
                                            lVar14 = lVar21;
                                        }
                                        lVar21 = lVar22;
                                    } while (lVar22 != 0);
                                }
                                if ((lVar14 == lVar12) ||
                                    (*(uint *)(*(longlong *)(lVar24 + 0x30) + uVar29 * 4) < *(uint *)(lVar14 + 0x20)))
                                {
                                    FUN_140032b30(local_a0 + 4,&local_90);
                                    lVar14 = local_90;
                                }
                                uVar29 = uVar29 + 1;
                                *(undefined4 *)(lVar14 + 0x24) =
                                        *(undefined4 *)
                                                (*(longlong *)(*(longlong *)(param_4 + 2) + 0x38 + lVar30) + -4 + uVar29 * 4);
                                lVar24 = *(longlong *)(param_4 + 2) + lVar30;
                            } while (uVar29 < *(uint *)(lVar24 + 0x28));
                        }
                        local_98 = local_98 + 1;
                    } while (local_98 < *param_4);
                }
                return 0;
            case 0x98c:
            case 0x98d:
                uVar10 = FUN_14044c780(pcVar18,*param_4,param_4[1]);
                return uVar10;
            case 0x98e:
                uVar10 = FUN_14044c540(pcVar18,param_4);
                return uVar10;
            case 0x990:
                uVar10 = FUN_14044cdf0(pcVar18,param_4);
                return uVar10;
            case 0x991:
                uVar10 = FUN_14044c840(pcVar18,param_4);
                return uVar10;
        }
    }
    return 1;
}

