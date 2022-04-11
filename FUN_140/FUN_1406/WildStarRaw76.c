//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140671b70(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    uint *puVar3;
    int iVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined local_38 [8];
    longlong local_30;

    if ((*(int *)(param_1 + 0x540) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
        lVar9 = 0;
        lVar8 = param_1 + 0xc0;
        if (*(int *)(param_1 + 0x538) == 0) {
            lVar8 = lVar9;
        }
        iVar4 = FUN_1403d67d0(DAT_140c65898,*(longlong *)(param_1 + 0xa8),lVar8);
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar5;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar6 = FUN_14018f0e0(local_38,L"bSalvagable");
        lVar10 = -1;
        if (*(longlong *)(lVar6 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar11) != '\0');
            FUN_140058710(lVar8);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar3 = *(uint **)(lVar8 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar4 == 0);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar7 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar7,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar8 = param_1 + 0xc0;
        if (*(int *)(param_1 + 0x538) == 0) {
            lVar8 = lVar9;
        }
        if (*(int *)(param_1 + 0x540) != 0) {
            lVar9 = *(longlong *)(param_1 + 0xa8);
        }
        iVar4 = FUN_1403ad020(DAT_140c65898,lVar9,lVar8);
        lVar9 = *(longlong *)(param_2 + 0x10);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar9 + 0x10);
        *puVar2 = *puVar5;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        lVar9 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_38,L"bAutoSalvage");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        }
        else {
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar8 + lVar10) != '\0');
            FUN_140058710(lVar9,lVar8,lVar10);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        puVar3 = *(uint **)(lVar9 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar4 == 0);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        uVar7 = FUN_1400580e0(lVar9,0xfffffffd);
        FUN_14005ea50(lVar9,uVar7,*(longlong *)(lVar9 + 0x10) + -0x20,
                      *(longlong *)(lVar9 + 0x10) + -0x10);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



void FUN_140671dc0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    int iVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(int *)(param_1 + 0x540) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
         (lVar10 = *(longlong *)(param_1 + 0xa0), lVar10 != 0)) &&
        ((*(longlong *)(lVar10 + 0x130) != 0 &&
          (iVar4 = FUN_14018cdf0(), 0 < *(int *)(lVar10 + 0x138) - iVar4)))) {
        iVar4 = FUN_14018cdf0();
        uVar8 = *(int *)(lVar10 + 0x138) - iVar4;
        if (uVar8 != 0) {
            lVar10 = *(longlong *)(param_2 + 0x10);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar10 + 0x10);
            *puVar2 = *puVar5;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar10 = *(longlong *)(param_2 + 0x10);
            lVar6 = FUN_14018f0e0(local_28,L"nSoulboundTradeAllowedTimeSeconds");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar9) != '\0');
                FUN_140058710(lVar10);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            pdVar3 = *(double **)(lVar10 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)((float)(ulonglong)uVar8 * 0.001);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            uVar7 = FUN_1400580e0(lVar10,0xfffffffd);
            FUN_14005ea50(lVar10,uVar7,*(longlong *)(lVar10 + 0x10) + -0x20,
                          *(longlong *)(lVar10 + 0x10) + -0x10);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
    }
    return;
}



void FUN_140671f20(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    uint *puVar3;
    int iVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    int iVar9;
    longlong lVar10;
    longlong lVar11;
    undefined local_38 [8];
    longlong local_30;

    if (*(int *)(param_1 + 0x540) == 0) {
        return;
    }
    if (*(longlong *)(param_1 + 0xa8) == 0) {
        return;
    }
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x17c);
    iVar9 = 0;
    if (iVar4 - 1U < 6) {
        if (iVar4 - 1U < 7) goto LAB_140671f7b;
    }
    else if (iVar4 == 0x14) goto LAB_140671f7b;
    iVar9 = 0x1f;
    LAB_140671f7b:
    lVar11 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar6 = FUN_14018f0e0(local_38,L"bCanCostumeUnlock");
    lVar8 = -1;
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar9 == 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar7,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    iVar4 = FUN_1403b91d0();
    lVar11 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar6 = FUN_14018f0e0(local_38,L"bCostumeUnlocked");
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(lVar6 + lVar8) != '\0');
        FUN_140058710(lVar11,lVar6,lVar8);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar3 = *(uint **)(lVar11 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar4 != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar7,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



void FUN_140672150(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 uVar8;
    bool bVar9;
    bool bVar10;

    if ((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) {
        lVar1 = *param_1;
        lVar7 = 0;
        uVar8 = 0;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        uVar4 = FUN_14005c1b0(lVar1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar4;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(lVar1);
        lVar6 = lVar7;
        if (*(int *)(param_1 + 0xa8) != 0) {
            lVar6 = param_1[0x15];
        }
        bVar9 = (*(byte *)(lVar6 + 0x150) & 1) != 0;
        if (bVar9) {
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            *puVar2 = *puVar5;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_1400f06f0(lVar1,puVar2,L"bUnique",1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        lVar6 = lVar7;
        if (*(int *)(param_1 + 0xa8) != 0) {
            lVar6 = param_1[0x15];
        }
        bVar10 = (*(byte *)(lVar6 + 0x150) & 2) != 0;
        if (bVar10) {
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            *puVar2 = *puVar5;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_1400f06f0(lVar1,puVar2,L"bEquipped",1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        lVar6 = lVar7;
        if (*(int *)(param_1 + 0xa8) != 0) {
            lVar6 = param_1[0x15];
        }
        if (((*(byte *)(lVar6 + 0x150) & 1) != 0) &&
            (((*(uint *)(lVar6 + 0x154) & 0x100) != 0 || (*(int *)(lVar6 + 0x1a0) != 0)))) {
            if (*(int *)(param_1 + 0xa8) != 0) {
                lVar7 = param_1[0x15];
            }
            if (((*(byte *)(lVar7 + 0x150) & 1) != 0) &&
                (uVar8 = 1, (*(uint *)(lVar7 + 0x154) & 0x100) == 0)) {
                uVar8 = *(undefined4 *)(lVar7 + 0x1a0);
            }
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            *puVar2 = *puVar5;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_1400f06f0(lVar1,puVar2,L"nCount",uVar8);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        if (bVar10 || bVar9) {
            FUN_1400fb2a0(param_2,L"tUnique",uVar3);
        }
        FUN_1400579e0(lVar1);
    }
    return;
}



void FUN_140672380(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    uint uVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined *puVar5;
    undefined8 uVar6;
    undefined *puVar7;
    undefined *puVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    uint local_res8;
    undefined4 local_resc;
    undefined *local_res18;
    undefined *local_res20;
    undefined *local_a8;
    undefined *local_a0;
    undefined local_98 [8];
    undefined *local_90;
    undefined8 local_88;
    undefined local_78 [8];
    undefined *local_70;
    undefined8 local_68;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    local_70 = (undefined *)FUN_14018b280(0x28);
    lVar11 = 0;
    local_68 = 0;
    *local_70 = 0;
    *(undefined8 *)(local_70 + 8) = 0;
    *(undefined **)(local_70 + 0x10) = local_70;
    *(undefined **)(local_70 + 0x18) = local_70;
    local_90 = (undefined *)FUN_14018b280(0x28);
    local_88 = 0;
    *local_90 = 0;
    *(undefined8 *)(local_90 + 8) = 0;
    *(undefined **)(local_90 + 0x10) = local_90;
    *(undefined **)(local_90 + 0x18) = local_90;
    if ((*(int *)((longlong)param_1 + 0x53c) != 0) &&
        (plVar1 = param_1 + 0x3f, plVar1 != (longlong *)0x0)) {
        uVar2 = *(uint *)(param_1 + 0x4f);
        if (uVar2 != 0) {
            puVar7 = *(undefined **)(local_70 + 8);
            puVar5 = local_70;
            while (puVar8 = puVar7, puVar8 != (undefined *)0x0) {
                if (*(uint *)(puVar8 + 0x20) < uVar2) {
                    puVar7 = *(undefined **)(puVar8 + 0x18);
                }
                else {
                    puVar7 = *(undefined **)(puVar8 + 0x10);
                    puVar5 = puVar8;
                }
            }
            if ((puVar5 == local_70) || (uVar2 < *(uint *)(puVar5 + 0x20))) {
                local_resc = 0;
                local_res8 = uVar2;
                local_res18 = puVar5;
                FUN_140032b30(local_78,&local_res20,&local_res18,&local_res8);
                puVar5 = local_res20;
            }
            *(undefined4 *)(puVar5 + 0x24) = 2;
            if ((*(int *)(param_1 + 0xa7) != 0) && (param_1 != (longlong *)0xffffffffffffff40)) {
                puVar5 = local_90;
                if (*(undefined **)(local_90 + 8) != (undefined *)0x0) {
                    puVar7 = *(undefined **)(local_90 + 8);
                    do {
                        if (*(uint *)(puVar7 + 0x20) < *(uint *)(param_1 + 0x4f)) {
                            puVar8 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = *(undefined **)(puVar7 + 0x10);
                            puVar5 = puVar7;
                        }
                        puVar7 = puVar8;
                    } while (puVar8 != (undefined *)0x0);
                }
                if ((puVar5 == local_90) || (*(uint *)(param_1 + 0x4f) < *(uint *)(puVar5 + 0x20))) {
                    local_res8 = *(uint *)(param_1 + 0x4f);
                    local_resc = 0;
                    local_res18 = puVar5;
                    FUN_140032b30(local_98,&local_res20,&local_res18,&local_res8);
                    puVar5 = local_res20;
                }
                *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)((longlong)param_1 + 0xcc);
            }
        }
        uVar2 = *(uint *)((longlong)param_1 + 0x27c);
        if (uVar2 != 0) {
            puVar7 = *(undefined **)(local_70 + 8);
            puVar5 = local_70;
            while (puVar8 = puVar7, puVar8 != (undefined *)0x0) {
                if (*(uint *)(puVar8 + 0x20) < uVar2) {
                    puVar7 = *(undefined **)(puVar8 + 0x18);
                }
                else {
                    puVar7 = *(undefined **)(puVar8 + 0x10);
                    puVar5 = puVar8;
                }
            }
            if ((puVar5 == local_70) || (uVar2 < *(uint *)(puVar5 + 0x20))) {
                local_resc = 0;
                local_res8 = uVar2;
                local_res18 = puVar5;
                FUN_140032b30(local_78,&local_res20,&local_res18,&local_res8);
                puVar5 = local_res20;
            }
            *(undefined4 *)(puVar5 + 0x24) = 1;
            if ((*(int *)(param_1 + 0xa7) != 0) && (param_1 != (longlong *)0xffffffffffffff40)) {
                puVar5 = local_90;
                if (*(undefined **)(local_90 + 8) != (undefined *)0x0) {
                    puVar7 = *(undefined **)(local_90 + 8);
                    do {
                        if (*(uint *)(puVar7 + 0x20) < *(uint *)((longlong)param_1 + 0x27c)) {
                            puVar8 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = *(undefined **)(puVar7 + 0x10);
                            puVar5 = puVar7;
                        }
                        puVar7 = puVar8;
                    } while (puVar8 != (undefined *)0x0);
                }
                if ((puVar5 == local_90) ||
                    (*(uint *)((longlong)param_1 + 0x27c) < *(uint *)(puVar5 + 0x20))) {
                    local_res8 = *(uint *)((longlong)param_1 + 0x27c);
                    local_resc = 0;
                    local_res18 = puVar5;
                    FUN_140032b30(local_98,&local_res20,&local_res18,&local_res8);
                    puVar5 = local_res20;
                }
                *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)((longlong)param_1 + 0xcc);
            }
        }
        lVar12 = 8;
        do {
            plVar10 = (longlong *)0x0;
            if (*(int *)((longlong)param_1 + 0x53c) != 0) {
                plVar10 = plVar1;
            }
            uVar2 = *(uint *)((longlong)plVar10 + lVar11 + 0x114);
            if (uVar2 != 0) {
                puVar7 = *(undefined **)(local_70 + 8);
                puVar5 = local_70;
                while (puVar8 = puVar7, puVar8 != (undefined *)0x0) {
                    if (*(uint *)(puVar8 + 0x20) < uVar2) {
                        puVar7 = *(undefined **)(puVar8 + 0x18);
                    }
                    else {
                        puVar7 = *(undefined **)(puVar8 + 0x10);
                        puVar5 = puVar8;
                    }
                }
                if ((puVar5 == local_70) || (uVar2 < *(uint *)(puVar5 + 0x20))) {
                    local_resc = 0;
                    local_res8 = uVar2;
                    local_res20 = puVar5;
                    FUN_140032b30(local_78,&local_a8,&local_res20,&local_res8);
                    puVar5 = local_a8;
                }
                *(undefined4 *)(puVar5 + 0x24) = 1;
                plVar9 = (longlong *)0x0;
                if (*(int *)((longlong)param_1 + 0x53c) != 0) {
                    plVar9 = plVar1;
                }
                puVar5 = local_90;
                if (*(undefined **)(local_90 + 8) != (undefined *)0x0) {
                    puVar7 = *(undefined **)(local_90 + 8);
                    do {
                        if (*(uint *)(puVar7 + 0x20) < *(uint *)((longlong)plVar10 + lVar11 + 0x114)) {
                            puVar8 = *(undefined **)(puVar7 + 0x18);
                        }
                        else {
                            puVar8 = *(undefined **)(puVar7 + 0x10);
                            puVar5 = puVar7;
                        }
                        puVar7 = puVar8;
                    } while (puVar8 != (undefined *)0x0);
                }
                if ((puVar5 == local_90) ||
                    (*(uint *)((longlong)plVar10 + lVar11 + 0x114) < *(uint *)(puVar5 + 0x20))) {
                    local_res18 = (undefined *)(ulonglong)*(uint *)((longlong)plVar10 + lVar11 + 0x114);
                    local_res20 = puVar5;
                    FUN_140032b30(local_98,&local_a0,&local_res20,&local_res18);
                    puVar5 = local_a0;
                }
                *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)(lVar11 + 0x154 + (longlong)plVar9);
            }
            lVar11 = lVar11 + 8;
            lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
    }
    lVar11 = *param_1;
    local_58 = &PTR_FUN_140b569f0;
    local_40 = 1;
    local_48 = lVar11;
    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar11);
    }
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    uVar6 = FUN_14005c1b0(lVar11,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar6;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    local_50 = FUN_1400578c0(lVar11);
    iVar4 = FUN_140675bb0(param_1,&local_58,local_78,local_98);
    if (iVar4 != 0) {
        FUN_1400fb2a0(param_2,L"arSpells",local_50);
    }
    if (local_48 != 0) {
        FUN_1400579e0();
    }
    FUN_140008410(local_98);
    FUN_14018b900(local_90,0);
    FUN_140008410(local_78);
    FUN_14018b900(local_70,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140672840(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    uint *puVar2;
    double *pdVar3;
    byte bVar4;
    bool bVar5;
    bool bVar6;
    undefined4 uVar7;
    int iVar8;
    int *piVar9;
    undefined8 uVar10;
    longlong lVar11;
    undefined2 *puVar12;
    undefined8 *puVar13;
    longlong lVar14;
    longlong *plVar15;
    undefined8 *puVar16;
    uint uVar17;
    wchar_t *pwVar18;
    ulonglong uVar19;
    undefined2 *puVar20;
    longlong *plVar21;
    bool bVar22;
    float fVar23;
    uint local_res18;
    uint local_res20;
    undefined local_b8 [8];
    undefined2 *local_b0;
    undefined2 *local_a8;
    undefined2 *local_a0;
    undefined **local_98;
    undefined4 local_90;
    longlong local_88;
    undefined4 local_80;
    undefined **local_78;
    undefined4 local_70;
    undefined4 uStack108;
    longlong local_68;
    undefined4 local_60;

    if ((((*(int *)(param_1 + 0xa7) == 0) || (param_1 == (longlong *)0xffffffffffffff40)) ||
         (*(int *)(param_1 + 0xa8) == 0)) || (param_1[0x15] == 0)) {
        return false;
    }
    piVar9 = (int *)FUN_14020b060();
    if (piVar9 == (int *)0x0) {
        return false;
    }
    plVar21 = (longlong *)0x0;
    plVar15 = plVar21;
    if (*(int *)(param_1 + 0xa8) != 0) {
        plVar15 = (longlong *)param_1[0x15];
    }
    local_res18 = *(uint *)(plVar15 + 0x2b);
    lVar11 = *param_1;
    bVar6 = false;
    local_98 = &PTR_FUN_140b569f0;
    local_80 = 1;
    local_88 = lVar11;
    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar11);
    }
    puVar16 = *(undefined8 **)(lVar11 + 0x10);
    uVar10 = FUN_14005c1b0(lVar11,0,0);
    *(undefined4 *)(puVar16 + 1) = 5;
    *puVar16 = uVar10;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    local_90 = FUN_1400578c0();
    local_res20 = 0;
    bVar5 = true;
    do {
        piVar9 = piVar9 + 1;
        if (*piVar9 == 0) break;
        lVar11 = FUN_1405a8a40();
        bVar22 = bVar5;
        if (lVar11 != 0) {
            lVar1 = *param_1;
            bVar6 = true;
            local_78 = &PTR_FUN_140b569f0;
            local_60 = 1;
            local_68 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar16 = *(undefined8 **)(lVar1 + 0x10);
            uVar10 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar16 + 1) = 5;
            *puVar16 = uVar10;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            uVar7 = FUN_1400578c0(lVar1);
            local_70 = uVar7;
            puVar12 = (undefined2 *)FUN_14018b280(0x10);
            local_a0 = puVar12 + 8;
            if (puVar12 != (undefined2 *)0x0) {
                *puVar12 = 0;
            }
            plVar15 = plVar21;
            local_b0 = puVar12;
            local_a8 = puVar12;
            if (*(int *)(lVar11 + 0x10) != 0) {
                do {
                    iVar8 = FUN_1405510d0(lVar11,plVar15);
                    if (iVar8 == 0) {
                        FUN_140551d40(lVar11,plVar15,local_b8,1);
                        puVar13 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                        puVar12 = local_b0;
                        puVar16 = *(undefined8 **)(lVar1 + 0x10);
                        *puVar16 = *puVar13;
                        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                        FUN_1400f0870(lVar1,puVar16,L"strObjective",local_b0);
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
                        break;
                    }
                    uVar17 = (int)plVar15 + 1;
                    plVar15 = (longlong *)(ulonglong)uVar17;
                } while (uVar17 < *(uint *)(lVar11 + 0x10));
            }
            if (*(longlong *)(lVar11 + 8) == 0) {
                puVar20 = &DAT_1409f28b4;
            }
            else {
                puVar20 = (undefined2 *)FUN_14034bdd0();
            }
            puVar13 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
            puVar16 = *(undefined8 **)(lVar1 + 0x10);
            *puVar16 = *puVar13;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_1400f0870(lVar1,puVar16,L"strName",puVar20);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            puVar16 = *(undefined8 **)(lVar1 + 0x10);
            plVar15 = plVar21;
            if (*(int *)(param_1 + 0xa7) != 0) {
                plVar15 = param_1 + 0x18;
            }
            bVar22 = local_res20 < *(byte *)((longlong)plVar15 + 0x124);
            puVar13 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
            *puVar16 = *puVar13;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            lVar11 = FUN_14018f0e0(local_b8,L"bComplete");
            if (*(longlong *)(lVar11 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            }
            else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar14) != '\0');
                FUN_140058710(lVar1);
            }
            if (local_b0 != (undefined2 *)0x0) {
                FUN_14018b900(local_b0,0);
            }
            puVar2 = *(uint **)(lVar1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)bVar22;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            uVar10 = FUN_1400580e0(lVar1,0xfffffffd);
            FUN_14005ea50(lVar1,uVar10,*(longlong *)(lVar1 + 0x10) + -0x20,
                          *(longlong *)(lVar1 + 0x10) + -0x10);
            *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
            puVar16 = *(undefined8 **)(lVar1 + 0x10);
            if ((!bVar5) || (bVar4 = 1, bVar22)) {
                bVar4 = 0;
            }
            puVar13 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
            *puVar16 = *puVar13;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            lVar11 = FUN_14018f0e0(local_b8,L"bActive");
            if (*(longlong *)(lVar11 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            }
            else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar14) != '\0');
                FUN_140058710(lVar1);
            }
            if (local_b0 != (undefined2 *)0x0) {
                FUN_14018b900(local_b0,0);
            }
            puVar2 = *(uint **)(lVar1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)bVar4;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            uVar10 = FUN_1400580e0(lVar1,0xfffffffd);
            FUN_14005ea50(lVar1,uVar10,*(longlong *)(lVar1 + 0x10) + -0x20,
                          *(longlong *)(lVar1 + 0x10) + -0x10);
            *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
            iVar8 = FUN_140663030(lVar1);
            if (iVar8 != 0) {
                FUN_1400fb540(&local_78);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6480c == 0) && (iVar8 = FUN_14020b240(), -1 < iVar8)) {
                    lVar11 = (**(code **)(*DAT_140c644d8 + 0x18))();
                    goto LAB_140672d1e;
                }
            }
            else {
                lVar11 = (*DAT_140c63840)();
                LAB_140672d1e:
                if (lVar11 != 0) {
                    iVar8 = *(int *)(lVar11 + 4);
                    if (iVar8 == 0) {
                        lVar14 = FUN_1402479c0(*(undefined4 *)(lVar11 + 8));
                        if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x24) & 4) != 0)) {
                            if (*(uint *)(lVar14 + 0x34) != 0) {
                                plVar15 = plVar21;
                                if (*(int *)(param_1 + 0xa8) != 0) {
                                    plVar15 = (longlong *)param_1[0x15];
                                }
                                if ((*(uint *)(plVar15 + 0x30) & *(uint *)(lVar14 + 0x34)) == 0) goto LAB_140672d95;
                            }
                            uVar19 = (ulonglong)*(uint *)(lVar11 + 8);
                            plVar15 = plVar21;
                            if (*(int *)(param_1 + 0xa7) != 0) {
                                plVar15 = param_1 + 0x18;
                            }
                            fVar23 = *(float *)(plVar15 + 3) * *(float *)(lVar14 + 0x20) *
                                     *(float *)(lVar11 + 0x10);
                            puVar13 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                            puVar16 = *(undefined8 **)(lVar1 + 0x10);
                            *puVar16 = *puVar13;
                            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            FUN_1400f06f0(lVar1,puVar16,L"eProperty",uVar19 & 0xffffffff);
                            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
                            puVar16 = *(undefined8 **)(lVar1 + 0x10);
                            puVar13 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                            *puVar16 = *puVar13;
                            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            lVar11 = FUN_14018f0e0(&local_78,L"nValue");
                            if (*(longlong *)(lVar11 + 8) == 0) {
                                *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            }
                            else {
                                lVar14 = -1;
                                do {
                                    lVar14 = lVar14 + 1;
                                } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar14) != '\0');
                                FUN_140058710(lVar1);
                            }
                            if (CONCAT44(uStack108,local_70) != 0) {
                                FUN_14018b900(CONCAT44(uStack108,local_70),0);
                            }
                            pdVar3 = *(double **)(lVar1 + 0x10);
                            *(undefined4 *)(pdVar3 + 1) = 3;
                            *pdVar3 = (double)fVar23;
                            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            uVar10 = FUN_1400580e0(lVar1,0xfffffffd);
                            FUN_14005ea50(lVar1,uVar10,*(longlong *)(lVar1 + 0x10) + -0x20,
                                          *(longlong *)(lVar1 + 0x10) + -0x10);
                            *(longlong *)(lVar1 + 0x10) =
                                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
                        }
                    }
                    else {
                        if (iVar8 == 1) {
                            lVar11 = FUN_14020ebe0(*(undefined4 *)(lVar11 + 8));
                            if (lVar11 == 0) goto LAB_140672d95;
                            if (*(int *)(lVar11 + 8) == 0) {
                                if ((((*(int *)(lVar11 + 0xc) == 0) && (*(int *)(lVar11 + 0x10) == 0)) ||
                                     (lVar11 = FUN_1403acd90(DAT_140c65b70), lVar11 == 0)) ||
                                    ((*(longlong *)(lVar11 + 8) == 0 ||
                                      (*(int *)(*(longlong *)(lVar11 + 8) + 0x10) == 0)))) goto LAB_140672d95;
                                uVar10 = FUN_14034bdd0();
                                puVar13 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                                puVar16 = *(undefined8 **)(lVar1 + 0x10);
                                *puVar16 = *puVar13;
                                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                                FUN_1400f0870(lVar1,puVar16,L"strSpecial",uVar10);
                            }
                            else {
                                uVar10 = FUN_14034bdd0();
                                puVar13 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                                puVar16 = *(undefined8 **)(lVar1 + 0x10);
                                *puVar16 = *puVar13;
                                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                                FUN_1400f0870(lVar1,puVar16,L"strSpecial",uVar10);
                            }
                        }
                        else {
                            if (iVar8 == 4) {
                                local_res18 = local_res18 + *(int *)(lVar11 + 0xc);
                                if ((int)local_res18 < 2) {
                                    local_res18 = 2;
                                }
                                else if (7 < (int)local_res18) {
                                    local_res18 = 7;
                                }
                                puVar13 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                                puVar16 = *(undefined8 **)(lVar1 + 0x10);
                                uVar19 = (ulonglong)local_res18;
                                pwVar18 = L"eNewQuality";
                                *puVar16 = *puVar13;
                                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            }
                            else if (iVar8 == 5) {
                                uVar19 = (ulonglong)*(uint *)(lVar11 + 0xc);
                                puVar13 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                                puVar16 = *(undefined8 **)(lVar1 + 0x10);
                                uVar19 = uVar19 & 0xffffffff;
                                pwVar18 = L"nAddedLevels";
                                *puVar16 = *puVar13;
                                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            }
                            else {
                                if (iVar8 != 6) goto LAB_140672d95;
                                uVar19 = (ulonglong)*(uint *)(lVar11 + 0xc);
                                puVar13 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar7);
                                puVar16 = *(undefined8 **)(lVar1 + 0x10);
                                uVar19 = uVar19 & 0xffffffff;
                                pwVar18 = L"nAddedRuneSlots";
                                *puVar16 = *puVar13;
                                *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
                                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                            }
                            FUN_1400f06f0(lVar1,puVar16,pwVar18,uVar19);
                        }
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
                    }
                }
            }
            LAB_140672d95:
            FUN_1400fb1d0(&local_98);
            if (puVar12 != (undefined2 *)0x0) {
                FUN_14018b900(puVar12);
            }
            FUN_1400579e0();
        }
        local_res20 = local_res20 + 1;
        bVar5 = bVar22;
    } while (local_res20 < 0xf);
    if (bVar6) {
        FUN_1400fb2a0(param_2,L"arImbuements",local_90);
    }
    if (local_88 != 0) {
        FUN_1400579e0();
    }
    return bVar6;
}



void FUN_140673160(longlong *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    longlong *plVar2;
    bool bVar3;
    bool bVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 uVar8;
    undefined *puVar9;
    longlong lVar10;
    undefined *puVar11;
    undefined *puVar12;
    undefined **ppuVar13;
    longlong lVar14;
    undefined ***pppuVar15;
    longlong lVar16;
    undefined *puVar17;
    longlong *local_res20;
    undefined *local_118;
    undefined *local_110;
    undefined local_108 [8];
    undefined *local_100;
    longlong local_f8;
    undefined **local_e8;
    undefined4 local_e0;
    longlong local_d8;
    undefined4 local_d0;
    longlong *local_c8;
    undefined **local_c0;
    undefined4 local_b8;
    longlong local_b0;
    undefined4 local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined local_80 [64];

    plVar2 = param_1 + 3;
    if (*(int *)(param_1 + 0x13) == 0) {
        plVar2 = param_1 + 7;
        local_res20 = param_1 + 3;
    }
    else {
        local_res20 = param_1 + 7;
    }
    local_c8 = plVar2;
    local_100 = (undefined *)FUN_14018b280();
    local_f8 = 0;
    *local_100 = 0;
    bVar3 = false;
    bVar4 = false;
    *(undefined8 *)(local_100 + 8) = 0;
    local_c0 = &PTR_FUN_140b569f0;
    *(undefined **)(local_100 + 0x10) = local_100;
    local_a8 = 1;
    *(undefined **)(local_100 + 0x18) = local_100;
    lVar14 = *param_1;
    local_b0 = lVar14;
    if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar14);
    }
    puVar1 = *(undefined8 **)(lVar14 + 0x10);
    uVar8 = FUN_14005c1b0(lVar14,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar8;
    *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
    uVar6 = FUN_1400578c0(lVar14);
    lVar10 = *param_1;
    local_a0 = &PTR_FUN_140b569f0;
    local_88 = 1;
    local_b8 = uVar6;
    local_90 = lVar10;
    if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar10);
    }
    puVar1 = *(undefined8 **)(lVar10 + 0x10);
    uVar8 = FUN_14005c1b0(lVar10,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar8;
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    local_98 = FUN_1400578c0(lVar10);
    lVar16 = *(longlong *)(plVar2[1] + 0x10);
    if (lVar16 != plVar2[1]) {
        do {
            if (*(int *)(param_1 + 2) != 0) {
                FUN_1403addd0(local_108,local_80,lVar16 + 0x20);
                puVar17 = (undefined *)local_res20[1];
                puVar11 = puVar17;
                if (*(undefined **)(puVar17 + 8) != (undefined *)0x0) {
                    puVar9 = *(undefined **)(puVar17 + 8);
                    do {
                        if (*(int *)(puVar9 + 0x20) < *(int *)(lVar16 + 0x20)) {
                            puVar12 = *(undefined **)(puVar9 + 0x18);
                        }
                        else {
                            puVar12 = *(undefined **)(puVar9 + 0x10);
                            puVar11 = puVar9;
                        }
                        puVar9 = puVar12;
                    } while (puVar12 != (undefined *)0x0);
                }
                if ((puVar11 == puVar17) || (*(int *)(lVar16 + 0x20) < *(int *)(puVar11 + 0x20))) {
                    local_110 = puVar17;
                }
                else {
                    local_118 = puVar11;
                }
            }
            lVar14 = *param_1;
            local_e8 = &PTR_FUN_140b569f0;
            local_d0 = 1;
            local_d8 = lVar14;
            if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar14);
            }
            puVar1 = *(undefined8 **)(lVar14 + 0x10);
            uVar8 = FUN_14005c1b0(lVar14,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar8;
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
            local_e0 = FUN_1400578c0();
            FUN_1406769c0();
            if (*(int *)(param_1 + 0xa8) == 0) {
                lVar10 = 0;
            }
            else {
                lVar10 = param_1[0x15];
            }
            if (((*(int *)(lVar10 + 0x140) == 0x21) || (0x2a < *(uint *)(lVar16 + 0x20))) ||
                ((0x61800000080U >> ((longlong)(int)*(uint *)(lVar16 + 0x20) & 0x3fU) & 1) == 0)) {
                bVar4 = true;
                pppuVar15 = &local_a0;
            }
            else {
                bVar3 = true;
                pppuVar15 = &local_c0;
            }
            FUN_1400fb1d0(pppuVar15);
            FUN_1400579e0(lVar14);
            lVar14 = *(longlong *)(lVar16 + 0x18);
            if (lVar14 == 0) {
                lVar14 = *(longlong *)(lVar16 + 8);
                if (lVar16 == *(longlong *)(lVar14 + 0x18)) {
                    do {
                        lVar16 = lVar14;
                        lVar14 = *(longlong *)(lVar16 + 8);
                    } while (lVar16 == *(longlong *)(lVar14 + 0x18));
                }
                if (*(longlong *)(lVar16 + 0x18) != lVar14) {
                    lVar16 = lVar14;
                }
            }
            else {
                for (lVar10 = *(longlong *)(lVar14 + 0x10); lVar16 = lVar14, lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    lVar14 = lVar10;
                }
            }
            lVar14 = local_b0;
            lVar10 = local_90;
            uVar6 = local_b8;
        } while (lVar16 != local_c8[1]);
    }
    if ((*(int *)(param_1 + 2) != 0) &&
        (lVar16 = *(longlong *)(local_res20[1] + 0x10), puVar17 = local_100, lVar16 != local_res20[1]))
    {
        do {
            if (*(undefined **)(puVar17 + 8) == (undefined *)0x0) {
                LAB_1406734fd:
                local_118 = puVar17;
                ppuVar13 = &local_118;
            }
            else {
                puVar11 = *(undefined **)(puVar17 + 8);
                puVar9 = puVar17;
                do {
                    if (*(int *)(puVar11 + 0x20) < *(int *)(lVar16 + 0x20)) {
                        puVar12 = *(undefined **)(puVar11 + 0x18);
                    }
                    else {
                        puVar12 = *(undefined **)(puVar11 + 0x10);
                        puVar9 = puVar11;
                    }
                    puVar11 = puVar12;
                } while (puVar12 != (undefined *)0x0);
                if ((puVar9 == puVar17) || (*(int *)(lVar16 + 0x20) < *(int *)(puVar9 + 0x20)))
                    goto LAB_1406734fd;
                local_110 = puVar9;
                ppuVar13 = &local_110;
            }
            if (puVar17 == *ppuVar13) {
                lVar14 = *param_1;
                local_d0 = 1;
                local_e8 = &PTR_FUN_140b569f0;
                local_d8 = lVar14;
                if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar14);
                }
                puVar1 = *(undefined8 **)(lVar14 + 0x10);
                uVar8 = FUN_14005c1b0(lVar14,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar8;
                *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
                local_e0 = FUN_1400578c0();
                FUN_1406769c0(*(undefined4 *)(param_1 + 2),&local_e8,*(undefined4 *)(lVar16 + 0x20));
                if (*(int *)(param_1 + 0xa8) == 0) {
                    lVar10 = 0;
                }
                else {
                    lVar10 = param_1[0x15];
                }
                if (((*(int *)(lVar10 + 0x140) == 0x21) || (0x2a < *(uint *)(lVar16 + 0x20))) ||
                    ((0x61800000080U >> ((longlong)(int)*(uint *)(lVar16 + 0x20) & 0x3fU) & 1) == 0)) {
                    bVar4 = true;
                    pppuVar15 = &local_a0;
                }
                else {
                    bVar3 = true;
                    pppuVar15 = &local_c0;
                }
                FUN_1400fb1d0(pppuVar15);
                FUN_1400579e0(lVar14);
                puVar17 = local_100;
            }
            lVar14 = *(longlong *)(lVar16 + 0x18);
            if (lVar14 == 0) {
                lVar14 = *(longlong *)(lVar16 + 8);
                if (lVar16 == *(longlong *)(lVar14 + 0x18)) {
                    do {
                        lVar16 = lVar14;
                        lVar14 = *(longlong *)(lVar16 + 8);
                    } while (lVar16 == *(longlong *)(lVar14 + 0x18));
                }
                if (*(longlong *)(lVar16 + 0x18) != lVar14) {
                    lVar16 = lVar14;
                }
            }
            else {
                for (lVar10 = *(longlong *)(lVar14 + 0x10); lVar16 = lVar14, lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    lVar14 = lVar10;
                }
            }
            lVar14 = local_b0;
            lVar10 = local_90;
            uVar6 = local_b8;
        } while (lVar16 != local_res20[1]);
    }
    uVar5 = local_98;
    if (bVar3) {
        FUN_1400fb2a0(param_2,L"arInnateProperties",uVar6);
    }
    if (bVar4) {
        FUN_1400fb2a0(param_2,L"arBudgetBasedProperties",uVar5);
    }
    lVar16 = *param_1;
    local_d0 = 1;
    local_e8 = &PTR_FUN_140b569f0;
    local_d8 = lVar16;
    if (*(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar16);
    }
    puVar1 = *(undefined8 **)(lVar16 + 0x10);
    uVar8 = FUN_14005c1b0(lVar16,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar8;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    uVar6 = FUN_1400578c0(lVar16);
    local_e0 = uVar6;
    iVar7 = FUN_140673800(param_1,&local_e8);
    if (iVar7 != 0) {
        FUN_1400fb2a0(param_2,L"tUndefinedProperties",uVar6);
    }
    FUN_1400579e0();
    if (lVar10 != 0) {
        FUN_1400579e0();
    }
    if (lVar14 != 0) {
        FUN_1400579e0();
    }
    if (local_f8 != 0) {
        lVar14 = *(longlong *)(local_100 + 8);
        while (lVar14 != 0) {
            FUN_1400083b0(local_108,*(undefined8 *)(lVar14 + 0x18));
            lVar10 = *(longlong *)(lVar14 + 0x10);
            FUN_14018b900(lVar14,0);
            lVar14 = lVar10;
        }
        *(undefined **)(local_100 + 0x10) = local_100;
        *(undefined8 *)(local_100 + 8) = 0;
        *(undefined **)(local_100 + 0x18) = local_100;
        local_f8 = 0;
    }
    FUN_14018b900(local_100,0);
    return;
}



ulonglong FUN_140673800(longlong *param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    int *piVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    longlong lVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;

    if (param_1[0x14] != 0) {
        return 0;
    }
    if (((*(int *)(param_1 + 0xa8) != 0) && (lVar5 = param_1[0x15], lVar5 != 0)) &&
        ((*(int *)(param_1 + 0xa7) == 0 ||
          ((param_1 + 0x18 == (longlong *)0x0 ||
            (iVar3 = FUN_1407e6af0(lVar5 + 8,param_1 + 0x18,0x138), iVar3 == 0)))))) {
        lVar5 = FUN_14020a7e0(*(undefined4 *)(lVar5 + 0x168));
        uVar14 = 0;
        uVar10 = uVar14;
        if (*(int *)(param_1 + 0xa8) != 0) {
            uVar10 = param_1[0x15];
        }
        piVar6 = (int *)FUN_14020ac20(*(undefined4 *)(uVar10 + 0x16c));
        if ((lVar5 == 0) || (piVar6 == (int *)0x0)) {
            uVar14 = 0;
        }
        else {
            lVar5 = *param_1;
            if (*(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar5);
            }
            puVar2 = *(undefined8 **)(lVar5 + 0x10);
            uVar7 = FUN_14005c1b0(lVar5,0,0);
            lVar11 = 5;
            *puVar2 = uVar7;
            *(undefined4 *)(puVar2 + 1) = 5;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(lVar5);
            uVar10 = uVar14;
            uVar12 = uVar14;
            uVar13 = uVar14;
            do {
                iVar3 = piVar6[1];
                if (iVar3 == 2) {
                    uVar10 = (ulonglong)((int)uVar10 + 1);
                }
                if (iVar3 == 4) {
                    uVar12 = (ulonglong)((int)uVar12 + 1);
                }
                if (((iVar3 == 2) && (lVar8 = FUN_14020c9e0(piVar6[6]), lVar8 != 0)) &&
                    (*(int *)(lVar8 + 4) != 0)) {
                    uVar13 = 1;
                    FUN_14034bdd0();
                    FUN_1400fad30();
                }
                lVar11 = lVar11 + -1;
                piVar6 = piVar6 + 1;
            } while (lVar11 != 0);
            if ((int)uVar13 != 0) {
                FUN_1400fb2a0(param_2,L"arStrNamedRandomProperties",uVar4);
            }
            if ((int)uVar10 != 0) {
                lVar11 = *(longlong *)(param_2 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar11 + 0x10);
                *puVar2 = *puVar9;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRandomProperties",uVar10);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
            if ((int)uVar12 != 0) {
                lVar11 = *(longlong *)(param_2 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar11 + 0x10);
                *puVar2 = *puVar9;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nCraftableProperties",uVar12);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
            if (((int)uVar10 != 0) || ((int)uVar12 != 0)) {
                uVar14 = 1;
            }
            if (lVar5 != 0) {
                FUN_1400579e0();
            }
        }
        return uVar14;
    }
    return 0;
}



bool FUN_140673ab0(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *param_1;
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140673b80(param_1,&local_28);
    if (iVar4 != 0) {
        FUN_1400fb2a0(param_2,L"tRunes",uVar3);
    }
    FUN_1400579e0(lVar1);
    return iVar4 != 0;
}



undefined8 FUN_140673b80(longlong *param_1,longlong param_2)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *plVar8;
    uint uVar9;
    longlong *plVar10;
    longlong lVar11;
    ulonglong uVar12;
    uint local_res8 [2];
    uint local_res18 [2];
    undefined4 local_res20 [2];
    uint *in_stack_ffffffffffffff98;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    iVar1 = *(int *)(param_1 + 0xa8);
    if (iVar1 != 0) {
        if ((param_1[0x15] != 0) && (1 < *(int *)(param_1[0x15] + 0x140) - 1U)) {
            return 0;
        }
        if ((iVar1 != 0) && (param_1[0x15] != 0)) goto LAB_140673be1;
    }
    if ((*(int *)((longlong)param_1 + 0x544) == 0) || (param_1 == (longlong *)0xfffffffffffffc78)) {
        return 0;
    }
    LAB_140673be1:
    plVar10 = (longlong *)0x0;
    uVar9 = 0;
    local_res20[0] = 0;
    local_res18[0] = 0;
    local_res8[0] = 0;
    if ((iVar1 != 0) && (param_1[0x15] != 0)) {
        plVar8 = param_1 + 0x18;
        if (*(int *)(param_1 + 0xa7) == 0) {
            plVar8 = plVar10;
        }
        in_stack_ffffffffffffff98 = local_res18;
        FUN_14040efb0(param_1[0x15],plVar8,local_res20,local_res8,in_stack_ffffffffffffff98);
        uVar9 = local_res8[0];
        if (local_res8[0] != 0) {
            lVar7 = *(longlong *)(param_2 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar7 + 0x10);
            *puVar2 = *puVar4;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nMaximum",uVar9);
            uVar12 = (ulonglong)local_res18[0];
            plVar8 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar8 = *plVar8 + -0x10;
            if (uVar9 < local_res18[0]) {
                lVar7 = *(longlong *)(param_2 + 0x10);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar7 + 0x10);
                *puVar2 = *puVar4;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
                FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nAbsoluteMax",uVar12 & 0xffffffff);
                plVar8 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar8 = *plVar8 + -0x10;
            }
        }
    }
    if ((((*(int *)((longlong)param_1 + 0x544) == 0) || (param_1 + 0x71 == (longlong *)0x0)) ||
         (*(int *)(param_1 + 0xa7) == 0)) ||
        ((param_1 + 0x18 == (longlong *)0x0 || (*(int *)(param_1 + 0x3e) == 0)))) {
        if (*(int *)(param_1 + 0xa8) == 0) {
            return 0;
        }
        if (param_1[0x15] == 0) {
            return 0;
        }
        lVar7 = FUN_14020df20(*(undefined4 *)(param_1[0x15] + 0x170));
        if (uVar9 == 0) {
            return 0;
        }
        lVar11 = *(longlong *)(param_2 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar11 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nMinimum",local_res20[0]);
        plVar8 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar8 = *plVar8 + -0x10;
        if (lVar7 == 0) {
            return 1;
        }
        lVar11 = *param_1;
        local_40 = 1;
        local_58 = &PTR_FUN_140b569f0;
        local_48 = lVar11;
        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar11);
        }
        puVar2 = *(undefined8 **)(lVar11 + 0x10);
        uVar5 = FUN_14005c1b0(lVar11,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        local_50 = FUN_1400578c0(lVar11);
        if (*(int *)(lVar7 + 4) != 0) {
            do {
                in_stack_ffffffffffffff98 =
                        (uint *)((ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)plVar10
                        );
                FUN_140677950(param_1,&local_58,*(undefined4 *)(lVar7 + 8 + (longlong)plVar10 * 4),0,
                              in_stack_ffffffffffffff98);
                lVar11 = local_48;
                uVar9 = (int)plVar10 + 1;
                plVar10 = (longlong *)(ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar7 + 4));
            FUN_1400fb2a0(param_2,L"arRuneSlots",local_50);
        }
    }
    else {
        FUN_14066e4c0(param_1);
        lVar7 = *param_1;
        local_58 = &PTR_FUN_140b569f0;
        local_40 = 1;
        local_48 = lVar7;
        if (*(ulonglong *)(*(longlong *)(lVar7 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar7 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar7);
        }
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        uVar5 = FUN_14005c1b0(lVar7,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        local_50 = FUN_1400578c0(lVar7);
        plVar8 = plVar10;
        while( true ) {
            plVar6 = plVar10;
            if (*(int *)(param_1 + 0xa7) != 0) {
                plVar6 = param_1 + 0x18;
            }
            uVar9 = (uint)plVar8;
            if (*(uint *)(plVar6 + 0x26) <= uVar9) break;
            plVar6 = plVar10;
            if (*(int *)((longlong)param_1 + 0x544) != 0) {
                plVar6 = param_1 + 0x71;
            }
            uVar3 = FUN_140514660(*(undefined *)((longlong)plVar6 + (longlong)plVar8));
            plVar6 = plVar10;
            if ((*(int *)(param_1 + 0xa9) != 0) && (uVar9 < 8)) {
                plVar6 = (longlong *)(ulonglong)*(uint *)((longlong)param_1 + (longlong)plVar8 * 4 + 0x518);
            }
            in_stack_ffffffffffffff98 =
                    (uint *)((ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)plVar8);
            FUN_140677950(param_1,&local_58,uVar3,plVar6,in_stack_ffffffffffffff98);
            plVar8 = (longlong *)(ulonglong)(uVar9 + 1);
        }
        FUN_1400fb2a0(param_2,L"arRuneSlots",local_50);
        lVar11 = local_48;
    }
    if (lVar11 != 0) {
        FUN_1400579e0(lVar11);
    }
    return 1;
}



bool FUN_140673fe0(longlong *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    bool bVar11;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    if ((*(int *)((longlong)param_1 + 0x53c) != 0) && (param_1 != (longlong *)0xfffffffffffffe08)) {
        lVar9 = *param_1;
        plVar7 = (longlong *)0x0;
        local_68 = &PTR_FUN_140b569f0;
        local_50 = 1;
        local_58 = lVar9;
        if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar9);
        }
        puVar1 = *(undefined8 **)(lVar9 + 0x10);
        uVar4 = FUN_14005c1b0(lVar9,0,0);
        *(undefined4 *)(puVar1 + 1) = 5;
        *puVar1 = uVar4;
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        local_60 = FUN_1400578c0(lVar9);
        lVar9 = 0xd0;
        lVar10 = 8;
        plVar6 = plVar7;
        plVar8 = plVar7;
        do {
            lVar2 = *param_1;
            local_30 = 1;
            local_48 = &PTR_FUN_140b569f0;
            local_38 = lVar2;
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar1 = *(undefined8 **)(lVar2 + 0x10);
            uVar4 = FUN_14005c1b0(lVar2,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar4;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(lVar2);
            plVar5 = plVar7;
            if (*(int *)((longlong)param_1 + 0x53c) != 0) {
                plVar5 = param_1 + 0x3f;
            }
            iVar3 = FUN_140677330(param_1,&local_48,
                                  *(undefined4 *)((longlong)(plVar5 + 0x12) + (longlong)plVar6),
                                  *(undefined4 *)((longlong)plVar5 + 0x94 + (longlong)plVar6),1,
                                  lVar9 + (longlong)plVar5);
            if (iVar3 != 0) {
                plVar8 = (longlong *)0x1;
                FUN_1400fb1d0(&local_68);
            }
            FUN_1400579e0(lVar2);
            lVar9 = lVar9 + 8;
            plVar6 = plVar6 + 1;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        bVar11 = (int)plVar8 != 0;
        if (bVar11) {
            FUN_1400fb2a0(param_2,L"arSets",local_60);
        }
        if (local_58 != 0) {
            FUN_1400579e0();
        }
        return bVar11;
    }
    return false;
}



void FUN_140674210(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    bool bVar3;
    uint uVar4;
    undefined4 uVar5;
    int iVar6;
    undefined8 uVar7;
    uint uVar8;
    longlong *plVar9;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 0xa7) == 0) {
        plVar9 = (longlong *)0x0;
    }
    else {
        plVar9 = param_1 + 0x18;
    }
    if ((((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) && (plVar9 != (longlong *)0x0)) &&
        (*(int *)(param_1[0x15] + 0x140) == 0x21)) {
        lVar1 = *param_1;
        local_58 = &PTR_FUN_140b569f0;
        bVar3 = false;
        local_40 = 1;
        local_48 = lVar1;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        uVar7 = FUN_14005c1b0(lVar1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar7;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        local_50 = FUN_1400578c0(lVar1);
        uVar8 = 1;
        do {
            uVar4 = FUN_14040f2b0(uVar8 & 0xff);
            if ((*(uint *)((longlong)plVar9 + 0x10c) & uVar4) != 0) {
                bVar3 = true;
                uVar5 = FUN_140514660(uVar8 & 0xff);
                FUN_1400fa9e0(&local_58,uVar5);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 7);
        if (bVar3) {
            FUN_1400fb2a0(param_2,L"arRuneTypes",local_50);
        }
        if ((*(int *)((longlong)plVar9 + 0x11c) != 0) && (*(int *)(plVar9 + 0x24) != 0)) {
            lVar1 = *param_1;
            local_20 = 1;
            local_38 = &PTR_FUN_140b569f0;
            local_28 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar7 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar7;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(lVar1);
            local_30 = uVar5;
            iVar6 = FUN_140677330(param_1,&local_38,*(undefined4 *)((longlong)plVar9 + 0x11c),
                                  *(undefined4 *)(plVar9 + 0x24),0,0);
            if (iVar6 != 0) {
                FUN_1400fb2a0(param_2,L"tRuneSet",uVar5);
            }
            FUN_1400579e0(lVar1);
        }
        if (local_48 != 0) {
            FUN_1400579e0();
        }
    }
    return;
}



void FUN_140674430(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;

    if ((*(int *)(param_1 + 0x540) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
        lVar3 = FUN_140244f40(*(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x1c8));
        if (lVar3 != 0) {
            lVar3 = FUN_140245380(*(undefined4 *)(lVar3 + 0x10));
            if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) {
                uVar4 = FUN_14034bdd0();
                lVar3 = *(longlong *)(param_2 + 0x10);
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar3 + 0x10);
                *puVar2 = *puVar5;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strMaterialCategory",uVar4);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406744d0(longlong *param_1,undefined8 param_2)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined local_a8 [16];
    undefined local_98 [8];
    longlong local_90;

    if ((((*(int *)(param_1 + 0x13) != 0) && (*(int *)(param_1 + 0xa8) != 0)) && (param_1[0x15] != 0))
        && (lVar3 = FUN_140243a00(*(undefined4 *)(param_1[0x15] + 0x1c0)), lVar4 = DAT_140c65898,
            lVar3 != 0)) {
        fVar14 = *(float *)(lVar3 + 0x10);
        fVar13 = *(float *)(ulonglong *)(lVar3 + 0xc);
        fVar17 = 0.0;
        fVar18 = *(float *)(lVar3 + 0x14);
        fVar15 = 0.0;
        fVar16 = 0.0;
        local_a8 = ZEXT816(*(ulonglong *)(lVar3 + 0xc));
        fVar11 = (float)FUN_1405e6230(0,0,DAT_140c65898 + 0x1698,0x10,local_a8,
                                      *(undefined4 *)(lVar3 + 4));
        fVar18 = fVar18 * fVar11;
        fVar12 = (float)FUN_1405e6230(lVar4 + 0x1698,0xf,local_a8,*(undefined4 *)(lVar3 + 4));
        fVar11 = DAT_140c4ab88;
        local_a8 = CONCAT412(fVar16 * fVar12,
                             CONCAT48(fVar15 * fVar12,CONCAT44(fVar14 * fVar12,fVar13 * fVar12)));
        fVar14 = fVar17;
        fVar13 = fVar17;
        fVar12 = fVar18;
        fVar15 = fVar18;
        fVar16 = fVar11;
        if (((*(int *)(param_1 + 0x13) != 0) &&
             (fVar16 = DAT_140c4ab88, lVar4 = FUN_140417bf0(*param_1), lVar4 != 0)) &&
            (*(int *)(lVar4 + 0x1c4) != 0)) {
            FUN_1405be320();
            fVar14 = fVar17;
            fVar13 = fVar17;
            fVar15 = fVar18;
            fVar16 = fVar11;
        }
        lVar4 = *param_1;
        if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar4);
        }
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        uVar5 = FUN_14005c1b0(lVar4,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(lVar4);
        uVar9 = (ulonglong)*(uint *)(lVar3 + 4);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        FUN_1400f06f0(lVar4,puVar10,L"eTradeskill",uVar9 & 0xffffffff);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        FUN_1400f06f0(lVar4);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nVectorX");
        lVar7 = -1;
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar8) != '\0');
            FUN_140058710(lVar4);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)local_a8._0_4_;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nVectorY");
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar8) != '\0');
            FUN_140058710(lVar4);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)local_a8._4_4_;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nRadius");
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar8) != '\0');
            FUN_140058710(lVar4);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)fVar12;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nRadiusMin");
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar8) != '\0');
            FUN_140058710(lVar4);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)fVar14;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nRadiusMax");
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar8) != '\0');
            FUN_140058710(lVar4);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)fVar15;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nStartAngle");
        if (*(longlong *)(lVar3 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar8) != '\0');
            FUN_140058710(lVar4);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)fVar13;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        puVar10 = *(undefined8 **)(lVar4 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),uVar2);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        lVar3 = FUN_14018f0e0(local_98,L"nMaxRotation");
        lVar3 = *(longlong *)(lVar3 + 8);
        if (lVar3 == 0) {
            *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 8) = 0;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        }
        else {
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *)(lVar3 + lVar7) != '\0');
            FUN_140058710(lVar4,lVar3,lVar7);
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar1 = *(double **)(lVar4 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)fVar16;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar4,0xfffffffd);
        FUN_14005ea50(lVar4,uVar5,*(longlong *)(lVar4 + 0x10) + -0x20,
                      *(longlong *)(lVar4 + 0x10) + -0x10);
        *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
        FUN_1400fb2a0(param_2,L"tAdditive",uVar2);
        FUN_1400579e0(lVar4);
    }
    return;
}



void FUN_140674cd0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;

    if (((*(int *)(param_1 + 0x540) != 0) && (lVar2 = *(longlong *)(param_1 + 0xa8), lVar2 != 0)) &&
        ((*(uint *)(lVar2 + 0x154) & 0x100) != 0)) {
        lVar5 = *(longlong *)(param_2 + 0x10);
        uVar6 = (ulonglong)*(uint *)(lVar2 + 0x1a0);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nBagSlots",uVar6 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



void FUN_140674d50(longlong *param_1,undefined8 param_2)

{
    uint uVar1;
    float fVar2;
    double *pdVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    uint *puVar9;
    float *pfVar10;
    uint uVar11;
    longlong lVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined local_58 [8];
    longlong local_50;

    if (((*(int *)(param_1 + 0xa8) != 0) && (param_1[0x15] != 0)) &&
        (lVar5 = FUN_140244280(), lVar5 != 0)) {
        if (*(int *)(param_1 + 0xa8) == 0) {
            lVar6 = 0;
        }
        else {
            lVar6 = param_1[0x15];
        }
        lVar6 = FUN_140244280(*(undefined4 *)(lVar6 + 0x1c4));
        if (lVar6 != 0) {
            uVar11 = 0;
            puVar9 = (uint *)(lVar6 + 0xc);
            do {
                uVar1 = *puVar9;
                if (((10 < uVar1) && (uVar1 != 0xe)) && (uVar1 < 0x11)) {
                    fVar16 = 1.0;
                    fVar17 = 1.0;
                    fVar18 = 1.0;
                    if (*(int *)(param_1 + 0xa8) == 0) {
                        lVar6 = 0;
                    }
                    else {
                        lVar6 = param_1[0x15];
                    }
                    lVar6 = FUN_140244280(*(undefined4 *)(lVar6 + 0x1c4));
                    if (lVar6 != 0) {
                        pfVar10 = (float *)(lVar6 + 0x20);
                        lVar6 = 5;
                        do {
                            fVar2 = pfVar10[-5];
                            if (fVar2 == 1.541428e-44) {
                                fVar17 = fVar17 * *pfVar10;
                            }
                            else if (fVar2 == 1.681558e-44) {
                                fVar16 = fVar16 * *pfVar10;
                            }
                            else if (fVar2 == 1.821688e-44) {
                                fVar18 = fVar18 * *pfVar10;
                            }
                            pfVar10 = pfVar10 + 1;
                            lVar6 = lVar6 + -1;
                        } while (lVar6 != 0);
                    }
                    lVar6 = *param_1;
                    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar6);
                    }
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    uVar7 = FUN_14005c1b0(lVar6,0,0);
                    *(undefined4 *)(puVar15 + 1) = 5;
                    *puVar15 = uVar7;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar4 = FUN_1400578c0(lVar6);
                    uVar14 = (ulonglong)*(uint *)(lVar5 + 4);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    *puVar15 = *puVar8;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar6,puVar15,L"eTradeskill",uVar14 & 0xffffffff);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
                    *puVar15 = *puVar8;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar6);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
                    *puVar15 = *puVar8;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_58,L"nCraftMultiplier");
                    lVar12 = -1;
                    if (*(longlong *)(lVar5 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    }
                    else {
                        lVar13 = -1;
                        do {
                            lVar13 = lVar13 + 1;
                        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar13) != '\0');
                        FUN_140058710(lVar6);
                    }
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                    pdVar3 = *(double **)(lVar6 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar16;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar6,0xfffffffd);
                    FUN_14005ea50(lVar6,uVar7,*(longlong *)(lVar6 + 0x10) + -0x20,
                                  *(longlong *)(lVar6 + 0x10) + -0x10);
                    *(longlong *)(lVar6 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
                    *puVar15 = *puVar8;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_58,L"nCritMultiplier");
                    if (*(longlong *)(lVar5 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    }
                    else {
                        lVar13 = -1;
                        do {
                            lVar13 = lVar13 + 1;
                        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar13) != '\0');
                        FUN_140058710(lVar6);
                    }
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                    pdVar3 = *(double **)(lVar6 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar17;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar6,0xfffffffd);
                    FUN_14005ea50(lVar6,uVar7,*(longlong *)(lVar6 + 0x10) + -0x20,
                                  *(longlong *)(lVar6 + 0x10) + -0x10);
                    *(longlong *)(lVar6 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
                    *puVar15 = *puVar8;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_58,L"nDiscoveryMultiplier");
                    lVar5 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == 0) {
                        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    }
                    else {
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *)(lVar5 + lVar12) != '\0');
                        FUN_140058710(lVar6,lVar5,lVar12);
                    }
                    if (local_50 != 0) {
                        FUN_14018b900(local_50,0);
                    }
                    pdVar3 = *(double **)(lVar6 + 0x10);
                    *(undefined4 *)(pdVar3 + 1) = 3;
                    *pdVar3 = (double)fVar18;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar6,0xfffffffd);
                    FUN_14005ea50(lVar6,uVar7,*(longlong *)(lVar6 + 0x10) + -0x20,
                                  *(longlong *)(lVar6 + 0x10) + -0x10);
                    *(longlong *)(lVar6 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                    FUN_1400fb2a0(param_2,L"tCatalyst",uVar4);
                    FUN_1400579e0(lVar6);
                    return;
                }
                uVar11 = uVar11 + 1;
                puVar9 = puVar9 + 1;
            } while (uVar11 < 5);
        }
    }
    return;
}



void FUN_1406751e0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    bool bVar9;
    undefined local_28 [8];
    longlong local_20;

    if ((*(int *)(param_1 + 0x540) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
        bVar9 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x1d8) != 0;
        if (bVar9) {
            FUN_140452ad0();
        }
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar5 = FUN_14018f0e0(local_28,L"bGrantsGenericUnlock");
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar7 = -1;
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar7) != '\0');
            FUN_140058710(lVar8);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        puVar3 = *(uint **)(lVar8 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)bVar9;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140675320(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    float fVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    uint uVar8;
    undefined8 uVar9;
    undefined8 uVar10;
    longlong lVar11;
    float fVar12;
    longlong local_res20;
    undefined local_88 [16];
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;

    lVar11 = 0;
    lVar4 = FUN_1403d90d0();
    fVar12 = 1.0;
    lVar5 = FUN_140243a00();
    if (lVar5 == 0) {
        if (((((lVar4 != 0) && (fVar12 = *(float *)(lVar4 + 0x36dc), *(int *)(param_1 + 0x554) != 0)) &&
              (*(int *)(param_1 + 0x3b8) != 0)) && ((int *)(param_1 + 0x3b8) != (int *)0x0)) &&
            (((*(int *)(param_1 + 0x4a4) == 0 ||
               (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar3 != 0)) ||
              ((*(byte *)(param_1 + 0x4ac) & 1) == 0)))) {
            local_78 = *(undefined8 *)(param_1 + 0x440);
            local_70 = *(undefined8 *)(param_1 + 0x448);
            local_68 = *(undefined8 *)(param_1 + 0x450);
            local_60 = *(undefined8 *)(param_1 + 0x458);
            local_58 = *(undefined8 *)(param_1 + 0x460);
            local_50 = *(undefined8 *)(param_1 + 0x468);
            iVar3 = FUN_140501210(*(undefined8 *)(param_2 + 0x10),&local_78);
            if (iVar3 != 0) {
                FUN_1400fb470(param_2);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
            iVar3 = FUN_140501210(*(undefined8 *)(param_2 + 0x10),&local_60);
            if (iVar3 != 0) {
                FUN_1400fb470(param_2);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
            return 1;
        }
    }
    else {
        local_88 = ZEXT816(*(ulonglong *)(lVar5 + 0xc));
        fVar12 = (float)FUN_1405e6230();
    }
    local_res20 = 2;
    lVar4 = lVar11;
    do {
        lVar5 = param_1 + 0xc0;
        if (*(int *)(param_1 + 0x538) == 0) {
            lVar5 = 0;
        }
        if ((*(longlong *)(lVar5 + 0x28 + lVar4) != 0) &&
            ((iVar3 = *(int *)(lVar5 + 0x30 + lVar4), iVar3 < 0xf ||
                                                      ((iVar3 == 0xf &&
                                                        (((*(int *)(lVar5 + 0x38 + lVar4) != 0 || (*(int *)(lVar5 + 0x34 + lVar4) == 1)) ||
                                                          (*(int *)(lVar5 + 0x3c + lVar4) != 0)))))))) {
            lVar5 = param_1 + 0xc0;
            if (*(int *)(param_1 + 0x538) == 0) {
                lVar5 = 0;
            }
            lVar11 = *(longlong *)(lVar5 + 0x28 + lVar4);
            uVar7 = *(undefined8 *)(lVar5 + 0x30 + lVar4);
            uVar10 = *(undefined8 *)(lVar5 + 0x38 + lVar4);
            fVar2 = fVar12;
            if ((int)((uint)fVar12 ^ 0x3f800000) < 0) {
                fVar2 = (float)(-0x80000000 - (int)fVar12);
            }
            uVar8 = (int)((int)fVar2 + 0xc0800000U) >> 0x1f;
            if ((0x54 < (int)(((int)fVar2 + 0xc0800000U ^ uVar8) - uVar8)) && ((int)uVar7 == 1)) {
                local_70 = 1;
                uVar7 = 1;
                local_68 = 0;
                uVar10 = 0;
                lVar11 = (longlong)((float)lVar11 * fVar12);
            }
            lVar5 = *(longlong *)(param_2 + 0x10);
            if (*(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar5);
            }
            if (*(longlong *)(lVar5 + 0x28) == *(longlong *)(lVar5 + 0x50)) {
                uVar9 = *(undefined8 *)(lVar5 + 0x78);
            }
            else {
                uVar9 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar5 + 0x28) + 8) + 0x18);
            }
            lVar6 = FUN_1400627d0(lVar5,0x18,uVar9);
            plVar1 = *(longlong **)(lVar5 + 0x10);
            *plVar1 = lVar6;
            *(undefined4 *)(plVar1 + 1) = 7;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
            *(longlong *)(lVar6 + 0x30) = lVar11;
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            *(undefined8 *)(lVar6 + 0x40) = uVar10;
            lVar11 = *(longlong *)(lVar5 + 0x20);
            uVar7 = FUN_140062650(lVar5,"Game.Money",10);
            FUN_14005e8e0(lVar5,lVar11 + 0xa0,local_88,*(undefined8 *)(lVar5 + 0x10));
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
            FUN_140058bf0(lVar5);
            FUN_1400fb470();
            lVar11 = 1;
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar4 = lVar4 + 0x18;
        local_res20 = local_res20 + -1;
    } while (local_res20 != 0);
    return lVar11;
}



undefined4 FUN_1406756d0(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 *puVar11;
    undefined8 uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    undefined4 local_res8;
    undefined8 local_68;
    undefined4 local_60;

    local_res8 = 0;
    uVar8 = 0;
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x31) {
        uVar8 = (ulonglong)*(uint *)(DAT_140c65898 + 0x6640);
    }
    lVar5 = FUN_1403d90d0(DAT_140c65898,uVar8);
    fVar15 = 1.0;
    if ((*(longlong *)(param_1 + 0xa0) == 0) ||
        (iVar4 = FUN_1403d6a10(*(longlong *)(param_1 + 0xa0),1), iVar4 == 0)) {
        if (lVar5 != 0) {
            fVar15 = *(float *)(lVar5 + 0x36e0);
        }
        uVar8 = param_1 + 0xc0;
        if (*(int *)(param_1 + 0x538) == 0) {
            uVar8 = 0;
        }
        lVar5 = *(longlong *)(param_1 + 0xa0);
        lVar10 = uVar8 + 0x58;
        if ((lVar5 != 0) && ((~(*(uint *)(lVar5 + 0x80) >> 3) & 1) != 0)) {
            iVar4 = FUN_1403d8cb0(lVar5 + 0xf0);
            if (iVar4 != 0) {
                lVar10 = lVar5 + 0xf0;
            }
        }
        fVar14 = 9.223372e+18;
        puVar11 = (undefined8 *)(lVar10 + 8);
        lVar5 = 2;
        do {
            lVar10 = 0;
            if ((puVar11[-1] != 0) &&
                ((*(int *)puVar11 < 0xf ||
                  ((*(int *)puVar11 == 0xf &&
                    (((*(int *)(puVar11 + 1) != 0 || (*(int *)((longlong)puVar11 + 4) == 1)) ||
                      (*(int *)((longlong)puVar11 + 0xc) != 0)))))))) {
                uVar1 = *puVar11;
                uVar2 = puVar11[1];
                local_res8 = 1;
                lVar7 = puVar11[-1];
                if ((int)uVar1 == 1) {
                    lVar6 = 0;
                    fVar13 = (float)puVar11[-1] * fVar15;
                    if ((fVar14 <= fVar13) && (fVar13 = fVar13 - fVar14, fVar13 < fVar14)) {
                        lVar6 = -0x8000000000000000;
                    }
                    lVar7 = param_1 + 0xc0;
                    if (*(int *)(param_1 + 0x538) == 0) {
                        lVar7 = lVar10;
                    }
                    lVar9 = lVar10;
                    if (*(int *)(param_1 + 0x540) != 0) {
                        lVar9 = *(longlong *)(param_1 + 0xa8);
                    }
                    lVar7 = FUN_1403b54a0(0x8000000000000000,lVar9,lVar7);
                    lVar7 = ((longlong)fVar13 + lVar6) - lVar7;
                    if (lVar7 < 0) {
                        lVar7 = lVar10;
                    }
                }
                lVar10 = *(longlong *)(param_2 + 0x10);
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                if (*(longlong *)(lVar10 + 0x28) == *(longlong *)(lVar10 + 0x50)) {
                    uVar12 = *(undefined8 *)(lVar10 + 0x78);
                }
                else {
                    uVar12 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar10 + 0x28) + 8) + 0x18);
                }
                lVar6 = FUN_1400627d0(lVar10,0x18,uVar12);
                plVar3 = *(longlong **)(lVar10 + 0x10);
                *plVar3 = lVar6;
                *(undefined4 *)(plVar3 + 1) = 7;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                *(longlong *)(lVar6 + 0x30) = lVar7;
                *(undefined8 *)(lVar6 + 0x38) = uVar1;
                *(undefined8 *)(lVar6 + 0x40) = uVar2;
                lVar7 = *(longlong *)(lVar10 + 0x20);
                local_68 = FUN_140062650(lVar10,"Game.Money",10);
                local_60 = 4;
                FUN_14005e8e0(lVar10,lVar7 + 0xa0,&local_68,*(undefined8 *)(lVar10 + 0x10));
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_140058bf0(lVar10,0xfffffffe);
                FUN_1400fb470(param_2);
                plVar3 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar3 = *plVar3 + -0x10;
            }
            puVar11 = puVar11 + 3;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    else {
        local_res8 = 0;
    }
    return local_res8;
}



undefined8 FUN_1406759b0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    undefined8 uVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong local_res18;
    undefined4 local_res20;
    longlong local_68;
    undefined **local_60;
    undefined4 local_58;
    longlong local_50;
    undefined4 local_48;

    uVar12 = 0;
    lVar11 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
    local_res20 = param_4;
    if (lVar11 != *(longlong *)(param_3 + 8)) {
        do {
            lVar10 = *param_1;
            local_60 = &PTR_FUN_140b569f0;
            local_48 = 1;
            local_50 = lVar10;
            if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar10);
            }
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            uVar7 = FUN_14005c1b0(lVar10,0,0);
            *(undefined4 *)(puVar3 + 1) = 5;
            *puVar3 = uVar7;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            local_58 = FUN_1400578c0();
            uVar1 = *(uint *)(lVar11 + 0x20);
            uVar2 = *(undefined4 *)(lVar11 + 0x24);
            if (uVar1 == 0) {
                lVar9 = 0;
            }
            else {
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (DAT_140c65898 != 0)) {
                    lVar9 = *(longlong *)(DAT_140c65898 + 0x7d18);
                    lVar5 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        if (*(uint *)(lVar4 + 0x20) < uVar1) {
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                        else {
                            lVar5 = lVar4;
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                    }
                    if ((lVar5 == lVar9) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
                        local_68 = lVar9;
                        plVar8 = &local_68;
                    }
                    else {
                        plVar8 = &local_res18;
                        local_res18 = lVar5;
                    }
                    if ((*plVar8 != lVar9) && (lVar9 = *(longlong *)(*plVar8 + 0x28), lVar9 != 0))
                        goto LAB_140675aea;
                }
                lVar9 = FUN_1407a0fd0();
            }
            LAB_140675aea:
            iVar6 = FUN_140675e20(param_1,&local_60,lVar9,uVar2,local_res20);
            if (iVar6 != 0) {
                FUN_1400fb1d0(param_2);
                uVar12 = 1;
            }
            FUN_1400579e0(lVar10);
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
                for (lVar9 = *(longlong *)(lVar10 + 0x10); lVar11 = lVar10, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar10 = lVar9;
                }
            }
        } while (lVar11 != *(longlong *)(param_3 + 8));
    }
    return uVar12;
}



undefined8 FUN_140675bb0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined8 uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    undefined4 uVar13;
    undefined8 uVar14;
    longlong local_res18;
    longlong local_res20;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    undefined **local_60;
    undefined4 local_58;
    longlong local_50;
    undefined4 local_48;

    uVar14 = 0;
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
    local_res20 = param_4;
    if (lVar12 != *(longlong *)(param_3 + 8)) {
        do {
            lVar7 = local_res20;
            lVar10 = *param_1;
            local_60 = &PTR_FUN_140b569f0;
            local_48 = 1;
            local_50 = lVar10;
            if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar10);
            }
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            uVar5 = FUN_14005c1b0(lVar10,0);
            *(undefined4 *)(puVar3 + 1) = 5;
            *puVar3 = uVar5;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            local_58 = FUN_1400578c0(lVar10);
            lVar7 = *(longlong *)(lVar7 + 8);
            lVar11 = lVar7;
            if (*(longlong *)(lVar7 + 8) != 0) {
                lVar8 = *(longlong *)(lVar7 + 8);
                do {
                    if (*(uint *)(lVar8 + 0x20) < *(uint *)(lVar12 + 0x20)) {
                        lVar9 = *(longlong *)(lVar8 + 0x18);
                    }
                    else {
                        lVar9 = *(longlong *)(lVar8 + 0x10);
                        lVar11 = lVar8;
                    }
                    lVar8 = lVar9;
                } while (lVar9 != 0);
            }
            if ((lVar11 == lVar7) || (*(uint *)(lVar12 + 0x20) < *(uint *)(lVar11 + 0x20))) {
                local_78 = lVar7;
                plVar6 = &local_78;
            }
            else {
                plVar6 = &local_res18;
                local_res18 = lVar11;
            }
            if (*plVar6 == lVar7) {
                uVar13 = 0;
            }
            else {
                uVar13 = *(undefined4 *)(*plVar6 + 0x24);
            }
            uVar1 = *(uint *)(lVar12 + 0x20);
            uVar2 = *(undefined4 *)(lVar12 + 0x24);
            if (uVar1 == 0) {
                lVar7 = 0;
            }
            else {
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (DAT_140c65898 != 0)) {
                    lVar7 = *(longlong *)(DAT_140c65898 + 0x7d18);
                    lVar8 = lVar7;
                    lVar11 = *(longlong *)(lVar7 + 8);
                    while (lVar11 != 0) {
                        if (*(uint *)(lVar11 + 0x20) < uVar1) {
                            lVar11 = *(longlong *)(lVar11 + 0x18);
                        }
                        else {
                            lVar8 = lVar11;
                            lVar11 = *(longlong *)(lVar11 + 0x10);
                        }
                    }
                    if ((lVar8 == lVar7) || (uVar1 < *(uint *)(lVar8 + 0x20))) {
                        local_68 = lVar7;
                        plVar6 = &local_68;
                    }
                    else {
                        local_70 = lVar8;
                        plVar6 = &local_70;
                    }
                    if ((*plVar6 != lVar7) && (lVar7 = *(longlong *)(*plVar6 + 0x28), lVar7 != 0))
                        goto LAB_140675d48;
                }
                lVar7 = FUN_1407a0fd0(DAT_140c65b70);
            }
            LAB_140675d48:
            iVar4 = FUN_140675e20(param_1,&local_60,lVar7,uVar2,uVar13);
            if (iVar4 != 0) {
                FUN_1400fb1d0(param_2);
                uVar14 = 1;
            }
            FUN_1400579e0(lVar10);
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
                for (lVar7 = *(longlong *)(lVar10 + 0x10); lVar12 = lVar10, lVar7 != 0;
                     lVar7 = *(longlong *)(lVar7 + 0x10)) {
                    lVar10 = lVar7;
                }
            }
        } while (lVar12 != *(longlong *)(param_3 + 8));
    }
    return uVar14;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140675e20(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
    short sVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined2 *puVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong *plVar10;
    short *psVar11;
    longlong lVar12;
    undefined4 *puVar13;
    undefined2 *puVar14;
    wchar_t *pwVar15;
    longlong lVar16;
    longlong lVar17;
    undefined4 local_res18 [2];
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

    if (param_3 == 0) {
        return 0;
    }
    uVar5 = FUN_14034bdd0(param_1,*(undefined4 *)(*(longlong *)(param_3 + 8) + 0x10));
    lVar8 = *(longlong *)(param_2 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strName",uVar5);
    plVar10 = (longlong *)0x0;
    plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar9 = *plVar9 + -0x10;
    if (*(int *)(*(longlong *)(param_3 + 8) + 0x20) == 0) goto LAB_140676574;
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
    plVar9 = plVar10;
    if (param_5 == 0) {
        if ((*(int *)(param_1 + 0x538) != 0) && ((longlong *)(param_1 + 0xc0) != (longlong *)0x0)) {
            lVar8 = FUN_14018b280(0x58);
            if (lVar8 != 0) {
                if (*(int *)(param_1 + 0x538) != 0) {
                    plVar9 = (longlong *)(param_1 + 0xc0);
                }
                plVar9 = (longlong *)FUN_1404dda70(lVar8,*(undefined4 *)((longlong)plVar9 + 0xc));
            }
            local_120 = 0;
            local_118 = (undefined2 *)0x0;
            local_110 = 0;
            pwVar15 = L"CasterItemLevel";
            do {
                lVar8 = (longlong)plVar10 + 1;
                plVar10 = (longlong *)((longlong)plVar10 + 1);
            } while (L"CasterItemLevel"[lVar8] != L'\0');
            lVar8 = (longlong)plVar10 * 2 >> 1;
            if (lVar8 + 1U < 0x7fffffffffffffff) {
                lVar12 = (lVar8 + 1U) * 2;
                local_118 = (undefined2 *)FUN_14018b280(lVar12,0);
                local_110 = lVar12 + (longlong)local_118;
                pwVar15 = L"CasterItemLevel";
            }
            goto LAB_140676152;
        }
        if ((*(int *)(param_1 + 0x540) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
            lVar8 = FUN_14018b280(0x58);
            if (lVar8 == 0) {
                plVar9 = (longlong *)0x0;
            }
            else if (*(int *)(param_1 + 0x540) == 0) {
                plVar9 = (longlong *)FUN_1404dda70(lVar8,_DAT_00000014);
            }
            else {
                plVar9 = (longlong *)
                        FUN_1404dda70(lVar8,*(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x14));
            }
            local_120 = 0;
            local_118 = (undefined2 *)0x0;
            local_110 = 0;
            pwVar15 = L"CasterItemLevel";
            do {
                lVar8 = (longlong)plVar10 + 1;
                plVar10 = (longlong *)((longlong)plVar10 + 1);
            } while (L"CasterItemLevel"[lVar8] != L'\0');
            lVar8 = (longlong)plVar10 * 2 >> 1;
            if (lVar8 + 1U < 0x7fffffffffffffff) {
                lVar12 = (lVar8 + 1U) * 2;
                local_118 = (undefined2 *)FUN_14018b280(lVar12,0);
                local_110 = lVar12 + (longlong)local_118;
                pwVar15 = L"CasterItemLevel";
            }
            goto LAB_140676152;
        }
    }
    else {
        lVar8 = FUN_14018b280(0x58);
        if (lVar8 != 0) {
            plVar9 = (longlong *)FUN_1404dda70(lVar8,param_5);
        }
        local_120 = 0;
        local_118 = (undefined2 *)0x0;
        local_110 = 0;
        pwVar15 = L"CasterItemLevel";
        do {
            lVar8 = (longlong)plVar10 + 1;
            plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (L"CasterItemLevel"[lVar8] != L'\0');
        lVar8 = (longlong)plVar10 * 2 >> 1;
        if (lVar8 + 1U < 0x7fffffffffffffff) {
            lVar12 = (lVar8 + 1U) * 2;
            local_118 = (undefined2 *)FUN_14018b280(lVar12,0);
            local_110 = (longlong)local_118 + lVar12;
            pwVar15 = L"CasterItemLevel";
        }
        LAB_140676152:
        lVar12 = (longlong)local_118;
        local_120 = (longlong)local_118;
        FUN_1407db590(local_118,pwVar15,lVar8 * 2);
        local_118 = (undefined2 *)(lVar8 * 2 + lVar12);
        if (local_118 != (undefined2 *)0x0) {
            *local_118 = 0;
        }
        FUN_1400b7480(&local_108,plVar9);
        (**(code **)(*plVar9 + 0x48))(plVar9,local_128);
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
    }
    lVar8 = 0;
    psVar11 = (short *)FUN_14034bdd0();
    if (psVar11 == (short *)0x0) {
        if (local_f8 != local_f0) {
            *local_f8 = 0;
            local_f0 = local_f8;
        }
    }
    else {
        sVar1 = *psVar11;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar11[lVar8];
        }
        FUN_14001c480(local_100,psVar11,psVar11 + lVar8);
    }
    lVar12 = FUN_1400b7660(&local_108);
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(lVar12 + 8);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strFlavor",uVar5);
    plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar9 = *plVar9 + -0x10;
    if (param_4 == 1) {
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar12 = FUN_14018f0e0(local_128,L"bActivate");
        lVar16 = -1;
        if (*(longlong *)(lVar12 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *)(*(longlong *)(lVar12 + 8) + lVar17) != '\0');
            FUN_140058710(lVar8);
        }
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        puVar13 = *(undefined4 **)(lVar8 + 0x10);
        *puVar13 = 0;
        puVar13[2] = 1;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar5,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar9 = *plVar9 + -0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar12 = FUN_14018f0e0(local_128,L"bOnEquip");
        lVar12 = *(longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar12 + lVar16) != '\0');
            FUN_140058710(lVar8,lVar12,lVar16);
        }
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        puVar13 = *(undefined4 **)(lVar8 + 0x10);
        *puVar13 = 1;
        LAB_140676515:
        puVar13[2] = 1;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar5,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar9 = *plVar9 + -0x10;
    }
    else if (param_4 == 2) {
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar12 = FUN_14018f0e0(local_128,L"bActivate");
        lVar16 = -1;
        if (*(longlong *)(lVar12 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar17 = -1;
            do {
                lVar17 = lVar17 + 1;
            } while (*(char *)(*(longlong *)(lVar12 + 8) + lVar17) != '\0');
            FUN_140058710(lVar8);
        }
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        puVar13 = *(undefined4 **)(lVar8 + 0x10);
        *puVar13 = 1;
        puVar13[2] = 1;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar5,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar9 = *plVar9 + -0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar12 = FUN_14018f0e0(local_128,L"bOnEquip");
        lVar12 = *(longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            do {
                lVar16 = lVar16 + 1;
            } while (*(char *)(lVar12 + lVar16) != '\0');
            FUN_140058710(lVar8,lVar12,lVar16);
        }
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        puVar13 = *(undefined4 **)(lVar8 + 0x10);
        *puVar13 = 0;
        goto LAB_140676515;
    }
    if (local_48._0_8_ != 0) {
        FUN_14018b900();
    }
    FUN_1400b7390();
    LAB_140676574:
    puVar7 = (undefined2 *)0x0;
    if ((((*(int *)(*(longlong *)(param_3 + 0x70) + 0x168) != 0) &&
          (lVar8 = FUN_1402259c0(), lVar8 != 0)) && (iVar4 = *(int *)(lVar8 + 0x38), iVar4 != 0)) &&
        (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),
                 *(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x168),0,0,0), iVar3 == 0))
    {
        FUN_1400b6f30(&local_108);
        local_108 = &PTR_FUN_140b69230;
        local_38 = (undefined2 *)0x0;
        local_48 = ZEXT816(0);
        puVar14 = (undefined2 *)FUN_14018b280(0x10);
        local_48 = CONCAT88(puVar14,puVar14);
        local_38 = puVar14 + 8;
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        psVar11 = (short *)FUN_14034bdd0(local_38,iVar4);
        if (psVar11 == (short *)0x0) {
            if (local_f8 != local_f0) {
                *local_f8 = 0;
                local_f0 = local_f8;
            }
        }
        else {
            sVar1 = *psVar11;
            puVar14 = puVar7;
            while (sVar1 != 0) {
                puVar14 = (undefined2 *)((longlong)puVar14 + 1);
                sVar1 = psVar11[(longlong)puVar14];
            }
            FUN_14001c480(local_100,psVar11,psVar11 + (longlong)puVar14);
        }
        lVar12 = FUN_1400b7660(&local_108);
        lVar8 = *(longlong *)(lVar12 + 8);
        lVar12 = *(longlong *)(lVar12 + 0x10) - lVar8 >> 1;
        if (lVar12 + 1U < 0x7fffffffffffffff) {
            puVar7 = (undefined2 *)FUN_14018b280((lVar12 + 1U) * 2,0);
        }
        FUN_1407db590(puVar7,lVar8,lVar12 * 2);
        puVar14 = puVar7 + lVar12;
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        if (puVar7 != puVar14) {
            lVar8 = *(longlong *)(param_2 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar8 + 0x10);
            *puVar2 = *puVar6;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strFailure",puVar7);
            plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar9 = *plVar9 + -0x10;
        }
        if (puVar7 != (undefined2 *)0x0) {
            FUN_14018b900(puVar7);
        }
        if (local_48._0_8_ != 0) {
            FUN_14018b900();
        }
        FUN_1400b7390(&local_108);
    }
    local_res18[0] = **(undefined4 **)(param_3 + 0x70);
    iVar4 = FUN_1403d3470(*(undefined8 *)(param_2 + 0x10),local_res18);
    if (iVar4 != 0) {
        FUN_1400fb540(param_2,L"splData");
        plVar9 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar9 = *plVar9 + -0x10;
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140676790(undefined8 param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    short sVar2;
    int iVar3;
    undefined8 *puVar4;
    int iVar5;
    longlong lVar6;
    undefined2 *puVar7;
    short *psVar8;
    longlong lVar9;
    undefined2 *puVar10;
    undefined8 *puVar11;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    if (((param_3 != 0) && (lVar6 = FUN_1402259c0(param_3), lVar6 != 0)) &&
        (iVar3 = *(int *)(lVar6 + 0x38), iVar3 != 0)) {
        puVar10 = (undefined2 *)0x0;
        iVar5 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),param_3,0,0,0);
        if (iVar5 == 0) {
            FUN_1400b6f30(&local_e8);
            local_e8 = &PTR_FUN_140b69230;
            local_18 = (undefined2 *)0x0;
            local_28 = ZEXT816(0);
            puVar7 = (undefined2 *)FUN_14018b280(0x10);
            local_28 = CONCAT88(puVar7,puVar7);
            local_18 = puVar7 + 8;
            if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = 0;
            }
            psVar8 = (short *)FUN_14034bdd0(local_18,iVar3);
            if (psVar8 == (short *)0x0) {
                if (local_d8 != local_d0) {
                    *local_d8 = 0;
                    local_d0 = local_d8;
                }
            }
            else {
                sVar2 = *psVar8;
                puVar7 = puVar10;
                while (sVar2 != 0) {
                    puVar7 = (undefined2 *)((longlong)puVar7 + 1);
                    sVar2 = psVar8[(longlong)puVar7];
                }
                FUN_14001c480(local_e0,psVar8,psVar8 + (longlong)puVar7);
            }
            lVar9 = FUN_1400b7660(&local_e8);
            lVar6 = *(longlong *)(lVar9 + 8);
            lVar9 = *(longlong *)(lVar9 + 0x10) - lVar6 >> 1;
            if (lVar9 + 1U < 0x7fffffffffffffff) {
                puVar10 = (undefined2 *)FUN_14018b280((lVar9 + 1U) * 2,0);
            }
            FUN_1407db590(puVar10,lVar6,lVar9 * 2);
            puVar7 = puVar10 + lVar9;
            if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = 0;
            }
            if (puVar10 != puVar7) {
                lVar6 = *(longlong *)(param_2 + 0x10);
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar4 = *(undefined8 **)(lVar6 + 0x10);
                *puVar4 = *puVar11;
                *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar4,L"strSpecialFailures",puVar10);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
            if (puVar10 != (undefined2 *)0x0) {
                FUN_14018b900(puVar10,0);
            }
            if (local_28._0_8_ != 0) {
                FUN_14018b900(local_28._0_8_,0);
            }
            FUN_1400b7390(&local_e8);
        }
    }
    return;
}



undefined8
FUN_1406769c0(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,float param_5,
              int param_6,float param_7)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 *puVar3;
    double *pdVar4;
    int iVar5;
    float fVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    uint uVar12;
    longlong lVar13;
    ulonglong uVar14;
    float in_XMM3_Da;
    undefined local_70 [8];
    longlong local_68;

    lVar7 = FUN_1402479c0(param_3);
    if (lVar7 == 0) {
        return 0;
    }
    uVar8 = FUN_14034bdd0();
    lVar11 = *(longlong *)(param_2 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar9;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strName",uVar8);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (param_3 < 0xaf) {
        LAB_140676d1d:
        lVar11 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar11 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(local_70,L"bDefault");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
            FUN_140058710(lVar11);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar3 = *(undefined4 **)(lVar11 + 0x10);
        *puVar3 = 1;
        puVar3[2] = 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
        FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                      *(longlong *)(lVar11 + 0x10) + -0x10);
    }
    else if (param_3 < 0xb1) {
        lVar11 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar11 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(local_70,L"bPercentage");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
            FUN_140058710(lVar11);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar3 = *(undefined4 **)(lVar11 + 0x10);
        *puVar3 = 1;
        puVar3[2] = 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
        FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                      *(longlong *)(lVar11 + 0x10) + -0x10);
        in_XMM3_Da = in_XMM3_Da * 100.0;
        param_7 = param_7 * 100.0;
    }
    else {
        if (param_3 != 0xb2) goto LAB_140676d1d;
        lVar11 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar11 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(local_70,L"bSeconds");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
            FUN_140058710(lVar11);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar3 = *(undefined4 **)(lVar11 + 0x10);
        *puVar3 = 1;
        puVar3[2] = 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
        FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                      *(longlong *)(lVar11 + 0x10) + -0x10);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar11 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(local_70,L"bInverseCompare");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
            FUN_140058710(lVar11);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar3 = *(undefined4 **)(lVar11 + 0x10);
        *puVar3 = 1;
        puVar3[2] = 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
        FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                      *(longlong *)(lVar11 + 0x10) + -0x10);
        in_XMM3_Da = in_XMM3_Da * 0.001;
        param_7 = param_7 * 0.001;
    }
    lVar10 = -1;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)*(uint *)(lVar7 + 0x28);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar11 + 0x10);
    *puVar2 = *puVar9;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nSortOrder",uVar14 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar7 + 0x10);
    *puVar2 = *puVar9;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eProperty",param_3);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    iVar5 = 0;
    if ((int)in_XMM3_Da < 0) {
        iVar5 = -0x80000000;
    }
    uVar12 = iVar5 - (int)in_XMM3_Da >> 0x1f;
    if ((0x54 < (int)((iVar5 - (int)in_XMM3_Da ^ uVar12) - uVar12)) || (param_6 != 0)) {
        lVar7 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        lVar7 = *(longlong *)(param_2 + 0x10);
        lVar11 = FUN_14018f0e0(local_70,L"nValue");
        if (*(longlong *)(lVar11 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar13) != '\0');
            FUN_140058710(lVar7);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        pdVar4 = *(double **)(lVar7 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)in_XMM3_Da;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar7,0xfffffffd);
        FUN_14005ea50(lVar7,uVar8,*(longlong *)(lVar7 + 0x10) + -0x20,
                      *(longlong *)(lVar7 + 0x10) + -0x10);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    fVar6 = param_5;
    if ((int)param_5 < 0) {
        fVar6 = (float)(0x80000000 - (int)param_5);
    }
    if ((int)(((uint)fVar6 ^ (int)fVar6 >> 0x1f) - ((int)fVar6 >> 0x1f)) < 0x55) {
        fVar6 = param_5;
        if ((int)((uint)param_5 ^ 0x3f800000) < 0) {
            fVar6 = (float)(-0x80000000 - (int)param_5);
        }
        uVar12 = (int)((int)fVar6 + 0xc0800000U) >> 0x1f;
        if ((int)(((int)fVar6 + 0xc0800000U ^ uVar12) - uVar12) < 0x55) goto LAB_1406770f0;
    }
    lVar7 = *(longlong *)(param_2 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar7 + 0x10);
    *puVar2 = *puVar9;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    lVar11 = FUN_14018f0e0(local_70,L"nScalar");
    if (*(longlong *)(lVar11 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    }
    else {
        lVar13 = -1;
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar13) != '\0');
        FUN_140058710(lVar7);
    }
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    pdVar4 = *(double **)(lVar7 + 0x10);
    *(undefined4 *)(pdVar4 + 1) = 3;
    *pdVar4 = (double)param_5;
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar7,0xfffffffd);
    FUN_14005ea50(lVar7,uVar8,*(longlong *)(lVar7 + 0x10) + -0x20,*(longlong *)(lVar7 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    LAB_1406770f0:
    if (param_6 != 0) {
        lVar7 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        lVar7 = *(longlong *)(param_2 + 0x10);
        lVar11 = FUN_14018f0e0(local_70,L"nDiff");
        lVar11 = *(longlong *)(lVar11 + 8);
        if (lVar11 == 0) {
            *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        }
        else {
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar11 + lVar10) != '\0');
            FUN_140058710(lVar7,lVar11,lVar10);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        pdVar4 = *(double **)(lVar7 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)(in_XMM3_Da - param_7);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar7,0xfffffffd);
        FUN_14005ea50(lVar7,uVar8,*(longlong *)(lVar7 + 0x10) + -0x20,
                      *(longlong *)(lVar7 + 0x10) + -0x10);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return 1;
}



void FUN_140677210(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined8 param_6)

{
    undefined auStack1464 [32];
    undefined4 local_598;
    undefined8 local_590;
    undefined local_588 [24];
    undefined local_570 [8];
    undefined8 local_568;
    undefined local_550 [8];
    undefined8 local_548;
    undefined local_530 [8];
    undefined8 local_528;
    undefined local_510 [8];
    undefined8 local_508;
    longlong *local_4e8;
    longlong local_1e8;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack1464;
    FUN_14066dc40(local_588,param_1);
    local_590 = param_6;
    local_598 = param_5;
    FUN_140677330(local_588,param_2,param_3,param_4);
    if (local_4e8 != (longlong *)0x0) {
        (**(code **)(*local_4e8 + 8))();
        local_4e8 = (longlong *)0x0;
    }
    if (local_1e8 != 0) {
        FUN_14018b900(local_1e8,0);
    }
    FUN_140008410(local_510);
    FUN_14018b900(local_508,0);
    FUN_140008410(local_530);
    FUN_14018b900(local_528,0);
    FUN_140008410(local_550);
    FUN_14018b900(local_548,0);
    FUN_140008410(local_570);
    FUN_14018b900(local_568,0);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack1464);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_140677330(longlong *param_1,longlong param_2,undefined4 param_3,uint param_4,int param_5)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    undefined8 *puVar4;
    uint *puVar5;
    double *pdVar6;
    int iVar7;
    undefined4 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined8 uVar11;
    longlong lVar12;
    longlong lVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong uVar16;
    uint uVar17;
    int *piVar18;
    longlong local_c8;
    undefined **local_c0;
    undefined4 local_b8;
    longlong local_b0;
    undefined4 local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined local_80 [8];
    longlong local_78;

    lVar9 = FUN_14020d260(param_3);
    if (lVar9 == 0) {
        return 0;
    }
    lVar12 = *(longlong *)(param_2 + 0x10);
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar4 = *(undefined8 **)(lVar12 + 0x10);
    *puVar4 = *puVar10;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar4,L"nSetId",param_3);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar11 = FUN_14034bdd0();
    lVar12 = *(longlong *)(param_2 + 0x10);
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar4 = *(undefined8 **)(lVar12 + 0x10);
    *puVar4 = *puVar10;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar4,L"strName",uVar11);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (param_4 != 0) {
        lVar12 = *(longlong *)(param_2 + 0x10);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar4 = *(undefined8 **)(lVar12 + 0x10);
        *puVar4 = *puVar10;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar4,L"nPower",param_4);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    lVar12 = *param_1;
    local_a8 = 1;
    local_c0 = &PTR_FUN_140b569f0;
    local_b0 = lVar12;
    if (*(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar12);
    }
    puVar4 = *(undefined8 **)(lVar12 + 0x10);
    uVar11 = FUN_14005c1b0(lVar12,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    *puVar4 = uVar11;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    local_b8 = FUN_1400578c0(lVar12);
    uVar17 = 0;
    piVar18 = (int *)(lVar9 + 8);
    lVar9 = -1;
    local_c8 = 0xc;
    do {
        iVar3 = *piVar18;
        if (iVar3 != 0) {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c655c0 != 0) || (iVar7 = FUN_14020d440(), iVar7 < 0)) goto LAB_1406777d3;
                lVar12 = (**(code **)(*DAT_140c65560 + 0x18))(DAT_140c65560,iVar3);
            }
            else {
                lVar12 = (*DAT_140c63840)(&PTR_u_ItemSetBonus_140a6aef8,iVar3,DAT_140c63858);
            }
            if ((lVar12 != 0) && ((*(int *)(lVar12 + 0x14) != 0 || (*(int *)(lVar12 + 8) != 0)))) {
                lVar14 = *param_1;
                local_88 = 1;
                local_a0 = &PTR_FUN_140b569f0;
                local_90 = lVar14;
                if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar14);
                }
                puVar4 = *(undefined8 **)(lVar14 + 0x10);
                uVar11 = FUN_14005c1b0(lVar14,0,0);
                *(undefined4 *)(puVar4 + 1) = 5;
                *puVar4 = uVar11;
                *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
                uVar8 = FUN_1400578c0(lVar14);
                local_98 = uVar8;
                if (param_5 != 0) {
                    uVar2 = *(uint *)(lVar12 + 4);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar8);
                    puVar4 = *(undefined8 **)(lVar14 + 0x10);
                    *puVar4 = *puVar10;
                    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
                    lVar13 = FUN_14018f0e0(local_80,L"bIsActive");
                    if (*(longlong *)(lVar13 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8) = 0;
                        *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
                    }
                    else {
                        lVar15 = -1;
                        do {
                            lVar15 = lVar15 + 1;
                        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar15) != '\0');
                        FUN_140058710(lVar14);
                    }
                    if (local_78 != 0) {
                        FUN_14018b900(local_78,0);
                    }
                    puVar5 = *(uint **)(lVar14 + 0x10);
                    puVar5[2] = 1;
                    *puVar5 = (uint)(uVar2 <= param_4);
                    *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
                    uVar11 = FUN_1400580e0(lVar14,0xfffffffd);
                    FUN_14005ea50(lVar14,uVar11,*(longlong *)(lVar14 + 0x10) + -0x20,
                                  *(longlong *)(lVar14 + 0x10) + -0x10);
                    *(longlong *)(lVar14 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar14 + 0x10));
                }
                uVar16 = (ulonglong)*(uint *)(lVar12 + 4);
                puVar10 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar8);
                puVar4 = *(undefined8 **)(lVar14 + 0x10);
                *puVar4 = *puVar10;
                *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
                FUN_1400f06f0(lVar14,puVar4,L"nPower",uVar16 & 0xffffffff);
                *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
                if (*(int *)(lVar12 + 0x14) != 0) {
                    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) ||
                        (lVar13 = FUN_1405a5b90(), lVar13 == 0)) {
                        FUN_1407a0fd0(DAT_140c65b70);
                    }
                    FUN_140675e20(param_1);
                }
                if (*(int *)(lVar12 + 8) != 0) {
                    FUN_1406769c0();
                }
                FUN_1400fb1d0(&local_c0);
                if (uVar17 < *(uint *)(lVar12 + 4)) {
                    uVar17 = *(uint *)(lVar12 + 4);
                }
                FUN_1400579e0(lVar14);
            }
        }
        LAB_1406777d3:
        piVar18 = piVar18 + 1;
        local_c8 = local_c8 + -1;
        if (local_c8 == 0) {
            FUN_1400fb2a0(param_2,L"arBonuses",local_b8);
            lVar12 = *(longlong *)(param_2 + 0x10);
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar4 = *(undefined8 **)(lVar12 + 0x10);
            *puVar4 = *puVar10;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
            lVar12 = *(longlong *)(param_2 + 0x10);
            lVar14 = FUN_14018f0e0(local_80,L"nMaxPower");
            lVar14 = *(longlong *)(lVar14 + 8);
            if (lVar14 == 0) {
                *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
            }
            else {
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar14 + lVar9) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar12);
                }
                puVar4 = *(undefined8 **)(lVar12 + 0x10);
                uVar11 = FUN_140062650(lVar12,lVar14,lVar9);
                *(undefined4 *)(puVar4 + 1) = 4;
                *puVar4 = uVar11;
            }
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
            if (local_78 != 0) {
                FUN_14018b900(local_78,0);
            }
            pdVar6 = *(double **)(lVar12 + 0x10);
            *(undefined4 *)(pdVar6 + 1) = 3;
            *pdVar6 = (double)uVar17;
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
            FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                          *(longlong *)(lVar12 + 0x10) + -0x10);
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            if (local_b0 != 0) {
                FUN_1400579e0();
            }
            return 1;
        }
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140677950(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   byte param_5)

{
    longlong lVar1;
    undefined4 *puVar2;
    double *pdVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined *puVar10;
    longlong lVar11;
    undefined *puVar12;
    uint *puVar13;
    longlong lVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    undefined8 *puVar19;
    uint uVar20;
    longlong lVar21;
    undefined8 local_res8;
    undefined8 local_res10;
    undefined8 local_148;
    undefined4 local_140;
    undefined *local_138;
    undefined **local_130;
    undefined4 local_128;
    undefined4 uStack292;
    longlong local_120;
    undefined4 local_118;
    undefined **local_110;
    undefined4 local_108;
    longlong local_100;
    undefined4 local_f8;
    undefined local_f0 [8];
    undefined *local_e8;
    undefined8 local_e0;
    undefined **local_d0;
    undefined4 local_c8;
    longlong local_c0;
    undefined4 local_b8;
    undefined **local_b0;
    undefined4 local_a8;
    longlong local_a0;
    undefined4 local_98;
    undefined local_90 [8];
    longlong local_88;

    lVar1 = *param_1;
    local_110 = &PTR_FUN_140b569f0;
    local_f8 = 1;
    local_res10 = param_2;
    local_100 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar19 = *(undefined8 **)(lVar1 + 0x10);
    uVar8 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar19 + 1) = 5;
    *puVar19 = uVar8;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar6 = FUN_1400578c0(lVar1);
    local_108 = uVar6;
    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar6);
    puVar19 = *(undefined8 **)(lVar1 + 0x10);
    *puVar19 = *puVar9;
    *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar19,L"eElement",param_3);
    uVar8 = DAT_140c658f0;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar10 = (undefined *)FUN_1400b5df0(uVar8,param_4,0);
    local_138 = puVar10;
    if (puVar10 == (undefined *)0x0) goto LAB_1406782d4;
    lVar21 = -1;
    if (((*(int *)(param_1 + 0xa7) != 0) && (param_1 != (longlong *)0xffffffffffffff40)) &&
        ((*(byte *)((longlong)param_1 + 0x1f5) & (byte)(1 << (param_5 & 0x1f))) == 0)) {
        puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar6);
        puVar19 = *(undefined8 **)(lVar1 + 0x10);
        *puVar19 = *puVar9;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        lVar11 = FUN_14018f0e0(&local_130,L"bDisabled");
        if (*(longlong *)(lVar11 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar14) != '\0');
            FUN_140058710(lVar1);
        }
        if (CONCAT44(uStack292,local_128) != 0) {
            FUN_14018b900(CONCAT44(uStack292,local_128),0);
        }
        puVar2 = *(undefined4 **)(lVar1 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar1,0xfffffffd);
        FUN_14005ea50(lVar1,uVar8,*(longlong *)(lVar1 + 0x10) + -0x20,
                      *(longlong *)(lVar1 + 0x10) + -0x10);
        *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    }
    uVar18 = (ulonglong)*(uint *)(puVar10 + 0xc);
    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar6);
    puVar19 = *(undefined8 **)(lVar1 + 0x10);
    *puVar19 = *puVar9;
    *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar19,L"nItemLevel",uVar18 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    local_140 = *(undefined4 *)(puVar10 + 0x14);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x3f800000);
    local_res8 = CONCAT44(local_res8._4_4_,local_140);
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        FUN_140445210(&local_130);
        FUN_14040f710(DAT_140c658f0,&local_148,&local_res8,*(undefined4 *)(puVar10 + 0x14),&local_130,1)
                ;
        puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar6);
        puVar19 = *(undefined8 **)(lVar1 + 0x10);
        *puVar19 = *puVar9;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        local_140 = (int)local_res8;
        FUN_1400f06f0(lVar1,puVar19,L"nEffectiveLevel",local_res8 & 0xffffffff);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    iVar7 = FUN_140415c70(lVar1);
    if (iVar7 != 0) {
        FUN_1400fb540(&local_110);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar11 = *param_1;
    local_b8 = 1;
    local_res8 = local_res8 & 0xffffffff00000000;
    local_d0 = &PTR_FUN_140b569f0;
    local_c0 = lVar11;
    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar11);
    }
    puVar19 = *(undefined8 **)(lVar11 + 0x10);
    uVar8 = FUN_14005c1b0(lVar11,0,0);
    *(undefined4 *)(puVar19 + 1) = 5;
    *puVar19 = uVar8;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    local_c8 = FUN_1400578c0(lVar11);
    local_148 = puVar10 + 0x9c;
    uVar20 = 0;
    do {
        if (local_148 == (undefined *)0x0) {
            if ((int)local_res8 == 0) goto LAB_140677dcd;
            break;
        }
        lVar11 = *param_1;
        local_res8 = CONCAT44(local_res8._4_4_,1);
        local_130 = &PTR_FUN_140b569f0;
        local_118 = 1;
        local_120 = lVar11;
        if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar11);
        }
        puVar19 = *(undefined8 **)(lVar11 + 0x10);
        uVar8 = FUN_14005c1b0(lVar11,0,0);
        *(undefined4 *)(puVar19 + 1) = 5;
        *puVar19 = uVar8;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        local_128 = FUN_1400578c0(lVar11);
        FUN_1406769c0();
        FUN_1400fb1d0(&local_d0);
        FUN_1400579e0(lVar11);
        uVar20 = uVar20 + 1;
    } while (uVar20 < 0xf);
    FUN_1400fb2a0(&local_110,L"arProperties",local_c8);
    LAB_140677dcd:
    local_e8 = (undefined *)FUN_14018b280(0x28);
    puVar10 = local_138;
    local_e0 = 0;
    *local_e8 = 0;
    *(undefined8 *)(local_e8 + 8) = 0;
    *(undefined **)(local_e8 + 0x10) = local_e8;
    *(undefined **)(local_e8 + 0x18) = local_e8;
    uVar20 = *(uint *)(local_138 + 0x120);
    if (uVar20 != 0) {
        puVar5 = *(undefined **)(local_e8 + 8);
        puVar12 = local_e8;
        while (puVar4 = puVar5, puVar4 != (undefined *)0x0) {
            if (*(uint *)(puVar4 + 0x20) < uVar20) {
                puVar5 = *(undefined **)(puVar4 + 0x18);
            }
            else {
                puVar5 = *(undefined **)(puVar4 + 0x10);
                puVar12 = puVar4;
            }
        }
        if ((puVar12 == local_e8) || (uVar20 < *(uint *)(puVar12 + 0x20))) {
            local_res8 = (ulonglong)uVar20;
            local_138 = puVar12;
            FUN_140032b30(local_f0,&local_148,&local_138,&local_res8);
            puVar12 = local_148;
        }
        *(undefined4 *)(puVar12 + 0x24) = 1;
    }
    lVar11 = *param_1;
    local_98 = 1;
    local_b0 = &PTR_FUN_140b569f0;
    local_a0 = lVar11;
    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar11);
    }
    puVar19 = *(undefined8 **)(lVar11 + 0x10);
    uVar8 = FUN_14005c1b0(lVar11,0,0);
    *(undefined4 *)(puVar19 + 1) = 5;
    *puVar19 = uVar8;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    local_a8 = FUN_1400578c0(lVar11);
    iVar7 = FUN_1406759b0(param_1,&local_b0,local_f0,local_140);
    if (iVar7 != 0) {
        FUN_1400fb2a0(&local_110,L"arSpells",local_a8);
    }
    lVar11 = *param_1;
    local_130 = &PTR_FUN_140b569f0;
    local_118 = 1;
    local_120 = lVar11;
    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar11);
    }
    puVar19 = *(undefined8 **)(lVar11 + 0x10);
    uVar8 = FUN_14005c1b0(lVar11,0,0);
    *(undefined4 *)(puVar19 + 1) = 5;
    *puVar19 = uVar8;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    local_128 = FUN_1400578c0(lVar11);
    uVar6 = *(undefined4 *)(puVar10 + 0x124);
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c63f84 == 0) && (iVar7 = FUN_14020d000(), -1 < iVar7)) {
            puVar13 = (uint *)(**(code **)(*DAT_140c64608 + 0x18))(DAT_140c64608,uVar6);
            goto LAB_140677fbf;
        }
    }
    else {
        puVar13 = (uint *)(*DAT_140c63840)(&PTR_u_ItemSet_140a6aec0,uVar6,DAT_140c63858);
        LAB_140677fbf:
        if (puVar13 != (uint *)0x0) {
            lVar11 = *param_1;
            if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar11);
            }
            puVar19 = *(undefined8 **)(lVar11 + 0x10);
            uVar8 = FUN_14005c1b0(lVar11,0,0);
            *(undefined4 *)(puVar19 + 1) = 5;
            *puVar19 = uVar8;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            uVar6 = FUN_1400578c0(lVar11);
            uVar8 = FUN_14034bdd0();
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar6);
            puVar19 = *(undefined8 **)(lVar11 + 0x10);
            *puVar19 = *puVar9;
            *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f0870(lVar11,puVar19,L"strName",uVar8);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            puVar19 = *(undefined8 **)(lVar11 + 0x10);
            iVar7 = *(int *)(puVar10 + 0x128);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar6);
            *puVar19 = *puVar9;
            *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            lVar14 = FUN_14018f0e0(local_90,L"nRunePower");
            lVar14 = *(longlong *)(lVar14 + 8);
            if (lVar14 == 0) {
                *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            }
            else {
                do {
                    lVar21 = lVar21 + 1;
                } while (*(char *)(lVar14 + lVar21) != '\0');
                FUN_140058710(lVar11,lVar14,lVar21);
            }
            if (local_88 != 0) {
                FUN_14018b900(local_88,0);
            }
            pdVar3 = *(double **)(lVar11 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar7;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
            FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                          *(longlong *)(lVar11 + 0x10) + -0x10);
            puVar19 = (undefined8 *)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
            *(undefined8 **)(lVar11 + 0x10) = puVar19;
            lVar21 = param_1[0xc];
            local_res8 = lVar21;
            if (*(longlong *)(lVar21 + 8) != 0) {
                lVar14 = *(longlong *)(lVar21 + 8);
                do {
                    if (*(uint *)(lVar14 + 0x20) < *puVar13) {
                        lVar15 = *(longlong *)(lVar14 + 0x18);
                    }
                    else {
                        lVar15 = *(longlong *)(lVar14 + 0x10);
                        local_res8 = lVar14;
                    }
                    lVar14 = lVar15;
                } while (lVar15 != 0);
            }
            if ((local_res8 == lVar21) || (*puVar13 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar21;
            }
            if (local_res8 != lVar21) {
                puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0));
                *puVar19 = *puVar9;
                *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            }
            uVar18 = param_1[0x10];
            local_res8 = uVar18;
            if (*(ulonglong *)(uVar18 + 8) != 0) {
                uVar16 = *(ulonglong *)(uVar18 + 8);
                do {
                    if (*(uint *)(uVar16 + 0x20) < *puVar13) {
                        uVar17 = *(ulonglong *)(uVar16 + 0x18);
                    }
                    else {
                        uVar17 = *(ulonglong *)(uVar16 + 0x10);
                        local_res8 = uVar16;
                    }
                    uVar16 = uVar17;
                } while (uVar17 != 0);
            }
            if ((local_res8 == uVar18) || (*puVar13 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = uVar18;
            }
            if (local_res8 != uVar18) {
                uVar18 = (ulonglong)*(uint *)(local_res8 + 0x24);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar6);
                puVar19 = *(undefined8 **)(lVar11 + 0x10);
                *puVar19 = *puVar9;
                *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11,puVar19,L"nMaxPower",uVar18 & 0xffffffff);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            }
            FUN_1400fb1d0(&local_130,uVar6);
            FUN_1400579e0(lVar11);
            FUN_1400fb2a0(&local_110,L"arSets",local_128);
            lVar11 = local_120;
        }
    }
    if (lVar11 != 0) {
        FUN_1400579e0(lVar11);
    }
    if (local_a0 != 0) {
        FUN_1400579e0();
    }
    FUN_140008410(local_f0);
    FUN_14018b900(local_e8,0);
    uVar6 = local_108;
    if (local_c0 != 0) {
        FUN_1400579e0();
        uVar6 = local_108;
    }
    LAB_1406782d4:
    FUN_1400fb1d0(local_res10,uVar6);
    FUN_1400579e0(lVar1);
    return;
}



undefined8 FUN_140678310(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.PathEpisode");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.PathEpisode");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int ***)(lVar5 + 8) == (int **)0x0) || (*(int ***)(lVar4 + 8) == (int **)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = ***(int ***)(lVar5 + 8) == ***(int ***)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406783d0(longlong param_1)

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
        LAB_140678413:
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
                local_18 = FUN_140062650(param_1,"Game.PathEpisode",0x10);
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
                goto LAB_1406784f7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140678413;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406784f7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678510(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PathEpisode");
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



undefined8 FUN_140678590(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.PathMission");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.PathMission");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int ***)(lVar5 + 8) == (int **)0x0) || (*(int ***)(lVar4 + 8) == (int **)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = ***(int ***)(lVar5 + 8) == ***(int ***)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678650(longlong param_1)

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
        LAB_140678693:
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
                local_18 = FUN_140062650(param_1,"Game.PathMission",0x10);
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
                goto LAB_140678777;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140678693;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140678777:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678790(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PathMission");
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



undefined8 FUN_140678810(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.SettlerImprovement");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.SettlerImprovement");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar5 + 8) == 0) || (*(longlong *)(lVar4 + 8) == 0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(*(longlong *)(lVar5 + 8) + 0x18) ==
                    **(int **)(*(longlong *)(lVar4 + 8) + 0x18);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678a10(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.SettlerImprovement");
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



undefined8 FUN_140678a90(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.SoldierImprovement");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678b50(longlong param_1)

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
        LAB_140678b93:
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
                local_18 = FUN_140062650(param_1,"Game.SoldierImprovement",0x17);
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
                goto LAB_140678c77;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140678b93;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140678c77:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678c90(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
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



undefined8 FUN_140678d10(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.SoldierEvent");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678dd0(longlong param_1)

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
        LAB_140678e13:
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
                local_18 = FUN_140062650(param_1,"Game.SoldierEvent",0x11);
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
                goto LAB_140678ef7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140678e13;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140678ef7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140678f10(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
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



undefined8 FUN_140678f90(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.ScientistScanBotProfile");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140679050(longlong param_1)

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
        LAB_140679093:
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
                local_18 = FUN_140062650(param_1,"Game.ScientistScanBotProfile",0x1c);
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
                goto LAB_140679177;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140679093;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140679177:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140679190(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
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


// undefined8 FUN_140679210(longlong param_1)
undefined8 LoadPathEpisode(longlong param_1)
{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.PathEpisode");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5c3e0;
    puVar6 = PTR_DAT_140c5c3e0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"PathEpisode",&PTR_DAT_140b6fdf0);
    return 1;
}



undefined8 FUN_140679790(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    if ((((DAT_140c65970 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) ||
         (lVar2 = FUN_140056ab0(param_1,1), lVar2 == 0)) ||
        ((*(longlong *)(lVar2 + 8) == 0 ||
          (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8), plVar1 == (longlong *)0x0)))) {
        lVar2 = FUN_14018f0e0(local_28,&DAT_1409f4bcc);
        if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140679867;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
    }
    else {
        lVar2 = FUN_14024db80(*(undefined4 *)(*plVar1 + 0x10));
        if (lVar2 == 0) {
            lVar2 = FUN_14018f0e0(local_28,&DAT_1409f4b64);
            if (*(longlong *)(lVar2 + 8) == 0) goto LAB_140679867;
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
        else {
            uVar3 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar3);
            if (*(longlong *)(lVar2 + 8) == 0) {
                LAB_140679867:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_140679892;
            }
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_140679892:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406798b0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PathEpisode");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1406849e0(DAT_140c65970);
            if (lVar4 != 0) {
                iVar3 = FUN_140573130(lVar4);
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)(iVar3 != 0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140679960(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    double *pdVar3;
    int iVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PathEpisode");
        if ((lVar5 != 0) &&
            (((*(longlong *)(lVar5 + 8) != 0 &&
               (puVar1 = *(undefined8 **)(*(longlong *)(lVar5 + 8) + 8), puVar1 != (undefined8 *)0x0)) &&
              (DAT_140c65970 != 0)))) {
            puVar2 = (undefined4 *)*puVar1;
            iVar4 = FUN_1404a1aa0(puVar2,*puVar2,1);
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140679a10(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
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
    local_20 = uVar2;
    if ((((DAT_140c65970 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) ||
         (lVar5 = FUN_140056ab0(param_1,1,"Game.PathEpisode"), lVar5 == 0)) ||
        ((*(longlong *)(lVar5 + 8) == 0 ||
          (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar5 == 0)))) {
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        *puVar7 = *puVar8;
        puVar9 = (undefined8 *)(ulonglong)*(uint *)(puVar8 + 1);
        *(uint *)(puVar7 + 1) = *(uint *)(puVar8 + 1);
    }
    else {
        lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x10);
        if (lVar10 != *(longlong *)(lVar5 + 0x10)) {
            do {
                uVar4 = *(undefined8 *)(lVar10 + 0x28);
                iVar3 = FUN_1403d7c30(uVar4,*(undefined8 *)(DAT_140c65898 + 0x78),1);
                if ((iVar3 != 0) && (iVar3 = FUN_140432ac0(param_1,uVar4), iVar3 != 0)) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
                lVar6 = *(longlong *)(lVar10 + 0x18);
                if (lVar6 == 0) {
                    lVar6 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == *(longlong *)(lVar6 + 0x18)) {
                        do {
                            lVar10 = lVar6;
                            lVar6 = *(longlong *)(lVar10 + 8);
                        } while (lVar10 == *(longlong *)(lVar6 + 0x18));
                    }
                    if (*(longlong *)(lVar10 + 0x18) != lVar6) {
                        lVar10 = lVar6;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar6 + 0x10); lVar10 = lVar6, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar6 = lVar1;
                    }
                }
                uVar2 = local_20;
            } while (lVar10 != *(longlong *)(lVar5 + 0x10));
        }
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar7;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar9,uVar2);
    return 1;
}



undefined8 FUN_140679c10(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined **local_48 [2];
    longlong local_38;
    longlong local_28 [4];

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PathEpisode");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            plVar5 = (longlong *)FUN_1406ee640(local_48,param_1,lVar4 + 0x28);
            if (local_28 != plVar5) {
                param_1 = plVar5[2];
                iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
                if (iVar2 != 0) {
                    FUN_1400579e0(param_1);
                    lVar4 = plVar5[2];
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                                          *(undefined4 *)(plVar5 + 1));
                    puVar8 = *(undefined8 **)(lVar4 + 0x10);
                    *puVar8 = *puVar6;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
                    uVar1 = FUN_1400578c0(param_1);
                }
            }
            local_48[0] = &PTR_FUN_140b56a08;
            if (local_38 != 0) {
                FUN_1400579e0();
            }
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            *puVar8 = *puVar6;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
            goto LAB_140679d90;
        }
    }
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *puVar7;
    puVar8 = (undefined8 *)(ulonglong)*(uint *)(puVar7 + 1);
    *(uint *)(puVar6 + 1) = *(uint *)(puVar7 + 1);
    LAB_140679d90:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar8,uVar1);
    return 1;
}



undefined8 FUN_140679dc0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    double *pdVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PathEpisode");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), plVar2 != (longlong *)0x0)))) {
            pdVar3 = *(double **)(param_1 + 0x10);
            iVar1 = *(int *)(*plVar2 + 0x14);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067b760(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.PathMission");
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
            uVar2 = FUN_1403d7bc0(DAT_140c65970,
                                  *(undefined4 *)**(undefined8 **)(*(longlong *)(lVar1 + 8) + 8));
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_14067b7c0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.PathMission");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = ***(int ***)(*(longlong *)(lVar4 + 8) + 8);
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



undefined8 FUN_14067b840(longlong param_1)

{
    short sVar1;
    int iVar2;
    longlong *plVar3;
    short *psVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined local_28 [8];
    longlong local_20;

    plVar3 = (longlong *)FUN_14067b760();
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3), iVar2 < 2)) {
        lVar7 = FUN_14018f0e0(local_28,&DAT_1409f510c);
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    else {
        psVar4 = (short *)FUN_14034bdd0(*(longlong *)plVar3[6],
                                        *(undefined4 *)(*(longlong *)plVar3[6] + 0x18));
        puVar6 = (undefined8 *)0x0;
        if (psVar4 != (short *)0x0) {
            sVar1 = *psVar4;
            puVar8 = puVar6;
            while (sVar1 != 0) {
                puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                sVar1 = psVar4[(longlong)puVar8];
            }
            puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = puVar8;
                *puVar5 = &PTR_LAB_140b55060;
                puVar6 = puVar5;
            }
            puVar6 = puVar6 + 2;
            FUN_1407db590(puVar6,psVar4);
            *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar6) = 0;
        }
        lVar7 = FUN_14018f0e0(local_28,puVar6);
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        if (puVar6 != (undefined8 *)0x0) {
            (**(code **)(puVar6[-2] + 8))(puVar6 + -2);
        }
    }
    return 1;
}



undefined8 FUN_14067bcb0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (1 < iVar3) {
            pdVar1 = *(double **)(param_1 + 0x10);
            iVar3 = *(int *)(*(longlong *)plVar4[6] + 0xc);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            goto LAB_14067bd14;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x403c000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14067bd14:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067bd30(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    double *pdVar4;
    int iVar5;
    int iVar6;

    plVar2 = (longlong *)FUN_14067b760();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
        if (1 < iVar1) {
            iVar5 = -1;
            lVar3 = *(longlong *)plVar2[6];
            iVar1 = *(int *)(lVar3 + 0xc);
            if (iVar1 == 0) {
                lVar3 = FUN_140617410(lVar3,*(undefined4 *)(lVar3 + 0x14));
                iVar6 = iVar5;
                if (lVar3 != 0) {
                    iVar6 = *(int *)(*(longlong *)(lVar3 + 0x98) + 4);
                }
            }
            else if (iVar1 == 2) {
                LAB_14067bd89:
                lVar3 = FUN_14021fc40(*(undefined4 *)(lVar3 + 0x14));
                iVar6 = iVar5;
                if (lVar3 != 0) {
                    iVar6 = *(int *)(lVar3 + 0x34);
                }
            }
            else {
                iVar6 = -1;
                if (4 < iVar1) {
                    if (iVar1 < 7) {
                        lVar3 = FUN_140223380(*(undefined4 *)(lVar3 + 0x14));
                        iVar6 = iVar5;
                        if (lVar3 != 0) {
                            iVar6 = *(int *)(lVar3 + 0x10);
                        }
                    }
                    else {
                        iVar6 = iVar5;
                        if (iVar1 == 0xe) goto LAB_14067bd89;
                    }
                }
            }
            pdVar4 = *(double **)(param_1 + 0x10);
            *pdVar4 = (double)iVar6;
            goto LAB_14067bdec;
        }
    }
    pdVar4 = *(double **)(param_1 + 0x10);
    *pdVar4 = -1.0;
    LAB_14067bdec:
    *(undefined4 *)(pdVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067be10(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (1 < iVar3) {
            pdVar1 = *(double **)(param_1 + 0x10);
            iVar3 = *(int *)(*(longlong *)plVar4[6] + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            goto LAB_14067be74;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0xbff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14067be74:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067be90(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined **local_48 [2];
    longlong local_38;
    longlong local_28 [4];

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    plVar4 = (longlong *)FUN_14067b760(param_1);
    if (plVar4 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (1 < iVar2) {
            plVar4 = (longlong *)FUN_1406ee640(local_48,param_1,plVar4[6] + 8);
            if (local_28 != plVar4) {
                param_1 = plVar4[2];
                iVar2 = (**(code **)(*plVar4 + 8))(plVar4);
                if (iVar2 != 0) {
                    FUN_1400579e0(param_1);
                    lVar8 = plVar4[2];
                    puVar5 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                          *(undefined4 *)(plVar4 + 1));
                    puVar7 = *(undefined8 **)(lVar8 + 0x10);
                    *puVar7 = *puVar5;
                    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                    uVar1 = FUN_1400578c0(param_1);
                }
            }
            local_48[0] = &PTR_FUN_140b56a08;
            if (local_38 != 0) {
                FUN_1400579e0();
            }
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            *puVar7 = *puVar5;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
            goto LAB_14067bfe6;
        }
    }
    plVar6 = (longlong *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    plVar4 = *(longlong **)(param_1 + 0x10);
    puVar7 = (undefined8 *)*plVar6;
    *plVar4 = (longlong)puVar7;
    *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(plVar6 + 1);
    LAB_14067bfe6:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar7,uVar1);
    return 1;
}



undefined8 FUN_14067c010(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    double *pdVar4;

    plVar2 = (longlong *)FUN_14067b760();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
        if (1 < iVar1) {
            lVar3 = FUN_140200220();
            if (lVar3 == 0) {
                iVar1 = 0x32;
            }
            else {
                iVar1 = *(int *)(lVar3 + 4);
            }
            pdVar4 = *(double **)(param_1 + 0x10);
            *pdVar4 = (double)iVar1;
            goto LAB_14067c06a;
        }
    }
    pdVar4 = *(double **)(param_1 + 0x10);
    *pdVar4 = 0.0;
    LAB_14067c06a:
    *(undefined4 *)(pdVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067c090(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    double *pdVar4;
    float fVar5;
    float fVar6;

    plVar2 = (longlong *)FUN_14067b760();
    if ((plVar2 != (longlong *)0x0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
        if (1 < iVar1) {
            fVar6 = 3.402823e+38;
            iVar1 = FUN_14056c2b0(plVar2);
            if (iVar1 != 0) {
                lVar3 = FUN_14024b980(iVar1);
                if (lVar3 != 0) {
                    fVar6 = *(float *)(lVar3 + 0xc) - *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0)
                            ;
                    fVar5 = *(float *)(lVar3 + 0x10) -
                            *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4);
                    fVar6 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + 0.0) - *(float *)(lVar3 + 4);
                }
            }
            pdVar4 = *(double **)(param_1 + 0x10);
            *pdVar4 = (double)fVar6;
            goto LAB_14067c173;
        }
    }
    pdVar4 = *(double **)(param_1 + 0x10);
    *pdVar4 = 3.402823466385289e+38;
    LAB_14067c173:
    *(undefined4 *)(pdVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14067c220(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = (**(code **)(*plVar4 + 0x38))();
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067c290(longlong param_1)

{
    byte bVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_14067b760();
    if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x30) != (longlong *)0x0)) {
        puVar2 = *(uint **)(param_1 + 0x10);
        bVar1 = *(byte *)(**(longlong **)(lVar4 + 0x30) + 0x34);
        puVar2[2] = 1;
        *puVar2 = (uint)((bVar1 & 0x40) != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067c300(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.PathMission");
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        uVar2 = FUN_140491bd0(DAT_140c65968,
                              *(undefined4 *)(**(longlong **)(*(longlong *)(lVar1 + 8) + 8) + 0x20));
        FUN_140432ba0(param_1,uVar2);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067c3f0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (1 < iVar3) {
            iVar3 = FUN_14056d330(plVar4);
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar3;
            goto LAB_14067c44e;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14067c44e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14067c470(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = (**(code **)(*plVar4 + 0xd0))();
    if (iVar3 == 1) {
        iVar3 = 0;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_14067c4e0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = (**(code **)(*plVar4 + 0xd0))();
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar3 == 3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14067c550(longlong param_1)

{
    short sVar1;
    int iVar2;
    longlong *plVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    longlong lVar8;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    plVar3 = (longlong *)FUN_14067b760();
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3), iVar2 < 2)) {
        lVar8 = FUN_14018f0e0(local_108,&DAT_1409f50ec);
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar8 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar4 + 8;
        local_28 = CONCAT88(puVar4,puVar4);
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        lVar5 = FUN_14018b280(0x60);
        lVar6 = lVar8;
        if (lVar5 != 0) {
            lVar6 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(&local_e8,lVar6);
        psVar7 = (short *)FUN_14034bdd0(*(longlong *)plVar3[6],
                                        *(undefined4 *)(*(longlong *)plVar3[6] + 0x44));
        if (psVar7 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar7;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            FUN_14001c480(local_e0);
        }
        lVar8 = FUN_1400b7660(&local_e8);
        lVar8 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar8 + 8));
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14067c750(longlong param_1)

{
    short sVar1;
    int iVar2;
    longlong *plVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    longlong lVar8;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    plVar3 = (longlong *)FUN_14067b760();
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3), iVar2 < 2)) {
        lVar8 = FUN_14018f0e0(local_108,&DAT_1409f4f54);
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
    }
    else {
        FUN_1400b6f30(&local_e8);
        lVar8 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar4 + 8;
        local_28 = CONCAT88(puVar4,puVar4);
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        lVar5 = FUN_14018b280(0x60);
        lVar6 = lVar8;
        if (lVar5 != 0) {
            lVar6 = FUN_1404db7e0(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(&local_e8,lVar6);
        psVar7 = (short *)FUN_14034bdd0(*(longlong *)plVar3[6],
                                        *(undefined4 *)(*(longlong *)plVar3[6] + 0x40));
        if (psVar7 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar7;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            FUN_14001c480(local_e0);
        }
        lVar8 = FUN_1400b7660(&local_e8);
        lVar8 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar8 + 8));
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar6) != '\0');
            FUN_140058710(param_1);
        }
        if (local_100 != 0) {
            FUN_14018b900(local_100,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return 1;
}



undefined8 FUN_14067c950(longlong param_1)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    wchar_t wVar3;
    int iVar4;
    longlong *plVar5;
    wchar_t *pwVar6;
    longlong lVar7;
    longlong lVar8;
    wchar_t *pwVar9;
    longlong lVar10;
    undefined local_28 [8];
    longlong local_20;

    plVar5 = (longlong *)FUN_14067b760();
    if ((plVar5 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar5 + 0xd0))(plVar5), 1 < iVar4)) {
        iVar4 = *(int *)(DAT_140c65970 + 8);
        if (iVar4 == 0) {
            pwVar6 = L"sprMM_SmallIconSoldier";
        }
        else if (iVar4 == 1) {
            pwVar6 = L"sprMM_SmallIconSettler";
        }
        else if (iVar4 == 2) {
            pwVar6 = L"sprMM_SmallIconScientist";
        }
        else if (iVar4 == 3) {
            pwVar6 = L"sprMM_SmallIconExplorer";
        }
        else {
            pwVar6 = L"WhiteCircle";
        }
        pwVar9 = L"";
        if (pwVar6 != (wchar_t *)0x0) {
            pwVar9 = pwVar6;
        }
        lVar8 = 0;
        wVar3 = *pwVar9;
        lVar7 = lVar8;
        while (wVar3 != L'\0') {
            lVar7 = lVar7 + 1;
            wVar3 = pwVar9[lVar7];
        }
        lVar7 = lVar7 * 2 >> 1;
        uVar1 = lVar7 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar8 = FUN_14018b280(uVar1 * 2,0);
        }
        FUN_1407db590(lVar8,pwVar9);
        puVar2 = (undefined2 *)(lVar7 * 2 + lVar8);
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        lVar7 = FUN_14018f0e0(local_28,lVar8);
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        if (lVar8 != 0) {
            FUN_14018b900(lVar8,0);
        }
        return 1;
    }
    lVar7 = FUN_14018f0e0(local_28,&DAT_1409f5024);
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14067d4e0(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    plVar3 = (longlong *)FUN_14067b760();
    if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3), iVar2 < 2)) {
        lVar4 = FUN_14018f0e0(local_28,&DAT_1409f4d2c);
        if (*(longlong *)(lVar4 + 8) == 0) goto LAB_14067d606;
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
    }
    else {
        iVar2 = *(int *)(*(longlong *)plVar3[6] + 0xc);
        if ((iVar2 == 2) || (iVar2 == 0xe)) {
            lVar4 = FUN_14021fc40(*(undefined4 *)(*(longlong *)plVar3[6] + 0x14));
            if (lVar4 == 0) {
                lVar4 = FUN_14018f0e0(local_28,&DAT_1409f4cf4);
                if (*(longlong *)(lVar4 + 8) == 0) {
                    LAB_14067d606:
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    goto LAB_14067d632;
                }
                lVar5 = -1;
                do {
                    lVar5 = lVar5 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
            }
            else {
                uVar1 = *(ulonglong *)(lVar4 + 8);
                if (uVar1 == 0) {
                    lVar4 = 0;
                }
                else if (DAT_140c3fe70 < uVar1) {
                    lVar4 = 0;
                }
                else {
                    lVar4 = DAT_140c3fe68 + uVar1;
                }
                lVar4 = FUN_14018f0e0(local_28,lVar4);
                if (*(longlong *)(lVar4 + 8) == 0) goto LAB_14067d606;
                lVar5 = -1;
                do {
                    lVar5 = lVar5 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
            }
        }
        else {
            lVar4 = FUN_14018f0e0(local_28,&DAT_1409f4db4);
            if (*(longlong *)(lVar4 + 8) == 0) goto LAB_14067d606;
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_14067d632:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14067dca0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_14067b760();
    if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        if (1 < iVar2) {
            iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
            if (iVar2 != 0) {
                FUN_1400584e0(param_1);
                (**(code **)(*plVar3 + 8))(plVar3);
                iVar2 = FUN_140571400();
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)(-1 < iVar2);
                goto LAB_14067dd24;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14067dd24:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067dd40(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    plVar2 = (longlong *)FUN_14067b760();
    if ((((plVar2 == (longlong *)0x0) || (iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2), iVar1 < 2))
         || (*(int *)(*(longlong *)plVar2[6] + 0xc) != 0x18)) ||
        ((lVar3 = FUN_140220080(*(undefined4 *)(*(longlong *)plVar2[6] + 0x14)), lVar3 == 0 ||
                                                                                 (lVar3 = FUN_14024db80(*(undefined4 *)(lVar3 + 4)), lVar3 == 0)))) {
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



undefined8 FUN_14067ed30(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    double *pdVar5;

    plVar3 = (longlong *)FUN_14067b760();
    if (plVar3 == (longlong *)0x0) {
        LAB_14067ed9a:
        pdVar5 = *(double **)(param_1 + 0x10);
    }
    else {
        iVar2 = (**(code **)(*plVar3 + 0xd0))();
        if (iVar2 < 2) goto LAB_14067ed9a;
        uVar1 = *(uint *)(*(longlong *)plVar3[6] + 0xc);
        if ((0x1b < uVar1) || ((0x8008008U >> (uVar1 & 0x1f) & 1) == 0)) goto LAB_14067ed9a;
        lVar4 = FUN_140721ef0(uVar1,*(undefined4 *)(*(longlong *)plVar3[6] + 0x14));
        pdVar5 = *(double **)(param_1 + 0x10);
        if (lVar4 != 0) {
            *pdVar5 = (double)*(int *)(lVar4 + 0x18);
            goto LAB_14067eda5;
        }
    }
    *pdVar5 = 0.0;
    LAB_14067eda5:
    *(undefined4 *)(pdVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067edd0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;

    plVar4 = (longlong *)FUN_14067b760();
    if ((plVar4 != (longlong *)0x0) && (*(int *)(*(longlong *)plVar4[6] + 0xc) == 0xd)) {
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (1 < iVar3) {
            lVar5 = FUN_140721f50(*(longlong *)plVar4[6],*(undefined4 *)(*(longlong *)plVar4[6] + 0x14));
            if (lVar5 != 0) {
                pdVar1 = *(double **)(param_1 + 0x10);
                iVar3 = *(int *)(*(longlong *)(lVar5 + 8) + 4);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar3;
                goto LAB_14067ee4d;
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14067ee4d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067ee70(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    plVar2 = (longlong *)FUN_14067b760();
    if (((plVar2 == (longlong *)0x0) || (*(int *)(*(longlong *)plVar2[6] + 0xc) != 0xd)) ||
        (iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2), iVar1 < 2)) {
        lVar3 = FUN_14018f0e0(local_28,&DAT_1409f5274);
        if (*(longlong *)(lVar3 + 8) == 0) goto LAB_14067ef3b;
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar5) != '\0');
    }
    else {
        lVar3 = FUN_140721f50(*(longlong *)plVar2[6],*(undefined4 *)(*(longlong *)plVar2[6] + 0x14));
        if (lVar3 == 0) {
            lVar3 = FUN_14018f0e0(local_28,&DAT_1409f522c);
            if (*(longlong *)(lVar3 + 8) == 0) goto LAB_14067ef3b;
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar5) != '\0');
        }
        else {
            uVar4 = FUN_14034bdd0();
            lVar3 = FUN_14018f0e0(local_28,uVar4);
            if (*(longlong *)(lVar3 + 8) == 0) {
                LAB_14067ef3b:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_14067ef63;
            }
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar5) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_14067ef63:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14067ef90(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    plVar3 = (longlong *)FUN_14067b760();
    if (((plVar3 == (longlong *)0x0) || (*(int *)(*(longlong *)plVar3[6] + 0xc) != 0xd)) ||
        (iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3), iVar2 < 2)) {
        lVar4 = FUN_14018f0e0(local_28,&DAT_1409f5244);
        if (*(longlong *)(lVar4 + 8) == 0) goto LAB_14067f086;
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
    }
    else {
        lVar4 = FUN_140721f50(*(longlong *)plVar3[6],*(undefined4 *)(*(longlong *)plVar3[6] + 0x14));
        if (lVar4 == 0) {
            lVar4 = FUN_14018f0e0(local_28,&DAT_1409f51e4);
            if (*(longlong *)(lVar4 + 8) == 0) goto LAB_14067f086;
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
        }
        else {
            uVar1 = *(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x30);
            if (uVar1 == 0) {
                lVar4 = 0;
            }
            else if (DAT_140c3fe70 < uVar1) {
                lVar4 = 0;
            }
            else {
                lVar4 = DAT_140c3fe68 + uVar1;
            }
            lVar4 = FUN_14018f0e0(local_28,lVar4);
            if (*(longlong *)(lVar4 + 8) == 0) {
                LAB_14067f086:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_14067f0b2;
            }
            lVar5 = -1;
            do {
                lVar5 = lVar5 + 1;
            } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar5) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_14067f0b2:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14067f0e0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    uint uVar4;
    longlong *plVar5;
    longlong lVar6;

    plVar5 = (longlong *)FUN_14067b760();
    if (((plVar5 == (longlong *)0x0) || (*(int *)(*(longlong *)plVar5[6] + 0xc) != 0xd)) ||
        (iVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5), iVar3 < 3)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        lVar6 = FUN_140721f50();
        if (lVar6 == 0) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
        }
        else {
            uVar4 = FUN_1400584e0(param_1);
            if ((uVar4 < (uint)(*(longlong *)(lVar6 + 0x20) - *(longlong *)(lVar6 + 0x18) >> 3)) &&
                (lVar6 = FUN_1407209f0(lVar6), lVar6 != 0)) {
                iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
                puVar2 = *(uint **)(param_1 + 0x10);
                *puVar2 = (uint)(iVar3 != 0);
                puVar2[2] = 1;
            }
            else {
                puVar1 = *(undefined4 **)(param_1 + 0x10);
                *puVar1 = 0;
                puVar1[2] = 1;
            }
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067f1e0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;
    longlong lVar5;
    double *pdVar6;
    float fVar7;

    plVar4 = (longlong *)FUN_14067b760();
    if ((plVar4 == (longlong *)0x0) || (*(int *)(*(longlong *)plVar4[6] + 0xc) != 0xd)) {
        LAB_14067f2c8:
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
    if (iVar2 < 3) goto LAB_14067f2c8;
    lVar5 = FUN_140721f50(*(longlong *)plVar4[6],*(undefined4 *)(*(longlong *)plVar4[6] + 0x14));
    if (lVar5 != 0) {
        uVar3 = FUN_1400584e0(param_1,2);
        if (uVar3 < (uint)(*(longlong *)(lVar5 + 0x20) - *(longlong *)(lVar5 + 0x18) >> 3)) {
            lVar5 = FUN_1407209f0(lVar5,uVar3);
            if (lVar5 != 0) {
                iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(lVar5 + 8));
                if (iVar2 == 0) {
                    fVar7 = (float)FUN_140571c60();
                    pdVar6 = *(double **)(param_1 + 0x10);
                    *pdVar6 = (double)fVar7;
                    goto LAB_14067f2a7;
                }
            }
        }
    }
    pdVar6 = *(double **)(param_1 + 0x10);
    *pdVar6 = 0.0;
    LAB_14067f2a7:
    *(undefined4 *)(pdVar6 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067f4b0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    plVar4 = (longlong *)FUN_14067b760();
    if (((plVar4 == (longlong *)0x0) || (*(int *)(*(longlong *)plVar4[6] + 0xc) != 0xd)) ||
        (iVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4), iVar2 < 3)) {
        lVar5 = FUN_14018f0e0(local_28,&DAT_1409f518c);
        if (*(longlong *)(lVar5 + 8) == 0) goto LAB_14067f617;
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar6) != '\0');
    }
    else {
        lVar5 = FUN_140721f50(*(longlong *)plVar4[6],*(undefined4 *)(*(longlong *)plVar4[6] + 0x14));
        if (lVar5 == 0) {
            lVar5 = FUN_14018f0e0(local_28,&DAT_1409f5144);
            if (*(longlong *)(lVar5 + 8) == 0) goto LAB_14067f617;
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar6) != '\0');
        }
        else {
            uVar3 = FUN_1400584e0(param_1,2);
            if (uVar3 < (uint)(*(longlong *)(lVar5 + 0x20) - *(longlong *)(lVar5 + 0x18) >> 3)) {
                lVar5 = FUN_1407209f0(lVar5,uVar3);
                if (lVar5 != 0) {
                    pdVar1 = *(double **)(param_1 + 0x10);
                    iVar2 = *(int *)(*(longlong *)(lVar5 + 0x10) + 8);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar2;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    return 1;
                }
                lVar5 = FUN_14018f0e0(local_28,&DAT_1409f5124);
                if (*(longlong *)(lVar5 + 8) == 0) goto LAB_14067f617;
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar6) != '\0');
            }
            else {
                lVar5 = FUN_14018f0e0(local_28,&DAT_1409f5154);
                if (*(longlong *)(lVar5 + 8) == 0) {
                    LAB_14067f617:
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    goto LAB_14067f642;
                }
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar6) != '\0');
            }
        }
    }
    FUN_140058710(param_1);
    LAB_14067f642:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14067f670(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined local_28 [8];
    longlong local_20;

    plVar2 = (longlong *)FUN_14067b760();
    if ((((plVar2 == (longlong *)0x0) || (iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2), iVar1 < 2))
         || (DAT_140c65970 == 0)) ||
        (((*(int *)(DAT_140c65970 + 8) != 3 || (*(int *)(*(longlong *)plVar2[6] + 0xc) != 0x12)) ||
          ((iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2), iVar1 == 0 ||
                                                           (lVar3 = FUN_14021e2c0(*(undefined4 *)(*(longlong *)plVar2[6] + 0x14)), lVar3 == 0)))))) {
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



undefined8 FUN_14067fbf0(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    uint *puVar5;
    uint uVar6;

    plVar3 = (longlong *)FUN_14067b760();
    if (plVar3 == (longlong *)0x0) {
        LAB_14067fc7f:
        puVar5 = *(uint **)(param_1 + 0x10);
        uVar6 = 0;
    }
    else {
        iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        if (((iVar2 < 2) || (DAT_140c65970 == 0)) || (*(int *)(DAT_140c65970 + 8) != 3))
            goto LAB_14067fc7f;
        if (*(int *)(*(longlong *)plVar3[6] + 0xc) != 0x12) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_14067fc8e;
        }
        iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (iVar2 == 0) goto LAB_14067fc7f;
        lVar4 = (**(code **)(*plVar3 + 0x80))(plVar3);
        uVar6 = 0;
        puVar5 = *(uint **)(param_1 + 0x10);
        if (lVar4 != 0) {
            uVar6 = (uint)(*(int *)(lVar4 + 0x18) != 0);
        }
    }
    puVar5[2] = 1;
    *puVar5 = uVar6;
    LAB_14067fc8e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067fcb0(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    uint *puVar5;
    uint uVar6;

    plVar3 = (longlong *)FUN_14067b760();
    if (plVar3 == (longlong *)0x0) {
        LAB_14067fd3f:
        puVar5 = *(uint **)(param_1 + 0x10);
        uVar6 = 0;
    }
    else {
        iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        if (((iVar2 < 2) || (DAT_140c65970 == 0)) || (*(int *)(DAT_140c65970 + 8) != 3))
            goto LAB_14067fd3f;
        if (*(int *)(*(longlong *)plVar3[6] + 0xc) != 0x12) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_14067fd4e;
        }
        iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (iVar2 == 0) goto LAB_14067fd3f;
        lVar4 = (**(code **)(*plVar3 + 0x80))(plVar3);
        uVar6 = 0;
        puVar5 = *(uint **)(param_1 + 0x10);
        if (lVar4 != 0) {
            uVar6 = (uint)(*(int *)(lVar4 + 0x24) != 0);
        }
    }
    puVar5[2] = 1;
    *puVar5 = uVar6;
    LAB_14067fd4e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14067fd70(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if ((plVar4 != (longlong *)0x0) && (*(int *)(*(longlong *)plVar4[6] + 0xc) == 0xd)) {
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (iVar3 == 3) {
            FUN_1400584e0(param_1,2);
            (**(code **)(*plVar4 + 8))(plVar4);
            iVar3 = FUN_14077d240();
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(-1 < iVar3);
            goto LAB_14067fdf8;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_14067fdf8:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140680ad0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined *puVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    undefined *puVar12;
    uint uVar13;
    undefined4 *puVar14;
    undefined *puVar15;
    undefined local_98 [16];
    longlong local_88;
    undefined local_78 [8];
    undefined *local_70;
    undefined8 local_68;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38 [2];
    longlong local_28;

    local_58 = &PTR_FUN_140b569f0;
    local_40 = 1;
    local_48 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    local_50 = uVar4;
    plVar7 = (longlong *)FUN_14067b760(param_1);
    lVar11 = param_1;
    if (((plVar7 == (longlong *)0x0) || (*(int *)(*(longlong *)plVar7[6] + 0xc) != 0x13)) ||
        (iVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7), iVar5 < 2)) {
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    }
    else {
        lVar8 = FUN_140432960(DAT_140c65960,*(undefined4 *)(*(longlong *)plVar7[6] + 0x14));
        if (lVar8 != 0) {
            iVar5 = FUN_1400584e0(param_1,2);
            uVar13 = iVar5 - 1;
            if ((-1 < (int)uVar13) && (uVar13 < 3)) {
                local_88 = *(longlong *)(lVar8 + 8);
                local_98 = CONCAT88(local_88 + 0x50,local_88 + 0x40);
                local_88 = local_88 + 0x60;
                local_70 = (undefined *)FUN_14018b280(0x28);
                local_68 = 0;
                *local_70 = 0;
                lVar8 = 4;
                *(undefined8 *)(local_70 + 8) = 0;
                *(undefined **)(local_70 + 0x10) = local_70;
                *(undefined **)(local_70 + 0x18) = local_70;
                puVar14 = *(undefined4 **)(local_98 + (longlong)(int)uVar13 * 8);
                do {
                    uVar1 = *puVar14;
                    iVar5 = FUN_1403f8270(DAT_140c65898,uVar1,0);
                    if ((iVar5 != 0) && (lVar10 = FUN_14024b980(uVar1), lVar10 != 0)) {
                        local_98 = ZEXT1216(*(undefined (*) [12])(lVar10 + 0xc));
                        FUN_140449b10(local_98);
                    }
                    puVar14 = puVar14 + 1;
                    lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
                puVar15 = *(undefined **)(local_70 + 0x10);
                if (puVar15 != local_70) {
                    do {
                        local_98 = ZEXT816(CONCAT44((float)*(int *)(puVar15 + 0x24),
                                                    (float)(int)*(undefined8 *)(puVar15 + 0x20)));
                        lVar11 = FUN_1400fa180(local_38,param_1,local_98);
                        FUN_1400fb1d0(&local_58,*(undefined4 *)(lVar11 + 8));
                        local_38[0] = &PTR_FUN_140b56a08;
                        if (local_28 != 0) {
                            FUN_1400579e0();
                        }
                        puVar12 = *(undefined **)(puVar15 + 0x18);
                        if (puVar12 == (undefined *)0x0) {
                            puVar12 = *(undefined **)(puVar15 + 8);
                            if (puVar15 == *(undefined **)(puVar12 + 0x18)) {
                                do {
                                    puVar15 = puVar12;
                                    puVar12 = *(undefined **)(puVar15 + 8);
                                } while (puVar15 == *(undefined **)(puVar12 + 0x18));
                            }
                            if (*(undefined **)(puVar15 + 0x18) != puVar12) {
                                puVar15 = puVar12;
                            }
                        }
                        else {
                            for (puVar3 = *(undefined **)(puVar12 + 0x10); puVar15 = puVar12,
                                    puVar3 != (undefined *)0x0; puVar3 = *(undefined **)(puVar3 + 0x10)) {
                                puVar12 = puVar3;
                            }
                        }
                        lVar11 = local_48;
                        uVar4 = local_50;
                    } while (puVar15 != local_70);
                }
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar4);
                puVar2 = *(undefined8 **)(lVar11 + 0x10);
                *puVar2 = *puVar9;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_140008410(local_78);
                FUN_14018b900(local_70,0);
                goto LAB_140680df6;
            }
        }
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar9;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    LAB_140680df6:
    FUN_1400579e0(lVar11);
    return 1;
}



undefined8 FUN_140680e30(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar2 = (longlong *)FUN_14067b760();
    if ((plVar2 != (longlong *)0x0) && (*(int *)(*(longlong *)plVar2[6] + 0xc) == 0)) {
        iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
        if (1 < iVar1) {
            lVar3 = FUN_140617410(*(longlong *)plVar2[6],*(undefined4 *)(*(longlong *)plVar2[6] + 0x14));
            if (lVar3 != 0) {
                FUN_1404331c0(param_1,*(undefined8 *)(lVar3 + 0x98));
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140680ec0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    int *piVar3;
    undefined4 uVar4;
    int local_res10 [6];

    plVar2 = (longlong *)FUN_14067b760();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2);
        if (1 < iVar1) {
            (**(code **)(*plVar2 + 8))(plVar2);
            uVar4 = 0;
            piVar3 = (int *)FUN_1403ba420();
            if ((piVar3 != (int *)0x0) && (local_res10[0] = *piVar3, local_res10[0] != 0)) {
                FUN_1403d3470(param_1,local_res10);
                return 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar4;
            goto LAB_140680f3e;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140680f3e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140680f60(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_14067b760();
    if (plVar4 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (1 < iVar3) {
            (**(code **)(*plVar4 + 8))(plVar4);
            iVar3 = FUN_14056f370();
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(-1 < iVar3);
            goto LAB_140680fc0;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_140680fc0:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined8 FUN_140680fe0(longlong param_1)
undefined8 LoadSettlerImprovement(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.SettlerImprovement");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5c280;
    puVar6 = PTR_DAT_140c5c280;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"SettlerImprovement",&PTR_DAT_140b6fdb0);
    return 1;
}



undefined8 FUN_140681390(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    double *pdVar5;
    double *pdVar6;
    uint uVar7;
    double local_18;
    undefined4 local_10;

    lVar4 = FUN_140056ab0();
    if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 8), lVar4 == 0)) {
        pdVar6 = *(double **)(param_1 + 0x10);
        *pdVar6 = 0.0;
    }
    else {
        pdVar5 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
        pdVar6 = (double *)&DAT_140a12138;
        if (pdVar5 < *(double **)(param_1 + 0x10)) {
            pdVar6 = pdVar5;
        }
        if (*(int *)(pdVar6 + 1) == 3) {
            LAB_14068141d:
            iVar3 = (int)*pdVar6;
        }
        else {
            if (*(int *)(pdVar6 + 1) == 4) {
                iVar3 = FUN_14005ac80();
                if (iVar3 != 0) {
                    local_10 = 3;
                    pdVar6 = &local_18;
                    goto LAB_14068141d;
                }
            }
            iVar3 = 0;
        }
        uVar7 = iVar3 - 1;
        if ((int)uVar7 < 0) {
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 3;
            goto LAB_140681497;
        }
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar1 = *(uint *)(lVar4 + 0x6c);
        iVar3 = 0;
        if (uVar7 < *(uint *)(lVar4 + 0x10)) {
            if (uVar1 == 0xffffffff) {
                iVar3 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0x1c) * uVar7 +
                        *(int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
            }
            else if ((uVar1 <= uVar7) && (iVar3 = 0, uVar1 < *(uint *)(lVar4 + 0x10))) {
                iVar3 = (uVar7 - uVar1) * *(int *)(*(longlong *)(lVar4 + 0x18) + 0x1c) +
                        *(int *)(*(longlong *)(lVar4 + 0x18) + 0x18);
            }
        }
        pdVar6 = *(double **)(param_1 + 0x10);
        *pdVar6 = (double)iVar3;
    }
    *(undefined4 *)(pdVar6 + 1) = 3;
    LAB_140681497:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406814c0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.SettlerImprovement");
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8),
                *(int *)(*(longlong *)(lVar4 + 0x18) + 0x20) != -1)) {
        iVar1 = *(int *)(lVar4 + 0x68);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar3 + 1) = 3;
    *puVar3 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406815d0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.SettlerImprovement");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 8) + 0x6c);
        if (iVar4 == -1) {
            iVar4 = -1;
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140681660(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SettlerImprovement");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            pdVar2 = *(double **)(param_1 + 0x10);
            iVar1 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0x14);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682320(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    undefined8 local_res10;
    double local_res18;
    double local_18;
    undefined4 local_10;

    if (DAT_140c65970 == 0) {
        return 0;
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        return 0;
    }
    lVar2 = FUN_140056ab0(param_1,1,"Game.SettlerImprovement");
    if (lVar2 == 0) {
        return 0;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8);
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) != 3) {
        if ((*(int *)(pdVar4 + 1) != 4) || (iVar1 = FUN_14005ac80(), iVar1 == 0)) {
            iVar1 = 0;
            goto LAB_1406823d7;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res18;
    }
    iVar1 = (int)*pdVar4;
    LAB_1406823d7:
    iVar1 = iVar1 + -1;
    if ((-1 < iVar1) && ((ulonglong)(longlong)iVar1 < *(ulonglong *)(lVar2 + 0x10))) {
        local_res10 = CONCAT44(iVar1,**(undefined4 **)(lVar2 + 0x18));
        FUN_1403f4900(DAT_140c65898,0x670,&local_res10);
    }
    return 0;
}



undefined8 FUN_1406826c0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    int *piVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined local_38 [16];
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            piVar5 = (int *)FUN_140617410();
            if ((piVar5 != (int *)0x0) &&
                ((*(int *)(*(longlong *)(piVar5 + 0x26) + 4) == 4 && (*piVar5 == 1)))) {
                puVar6 = (undefined4 *)FUN_14024b980(*(undefined4 *)(lVar4 + 0x10));
                if (puVar6 != (undefined4 *)0x0) {
                    iVar3 = FUN_1403f8270(DAT_140c65898,*puVar6,0);
                    if (iVar3 != 0) {
                        local_38 = ZEXT1216(*(undefined (*) [12])(puVar6 + 3));
                        FUN_1400fa3c0(local_28,param_1,local_38);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
                        puVar2 = *(undefined8 **)(local_18 + 0x10);
                        *puVar2 = *puVar7;
                        uVar1 = *(undefined4 *)(puVar7 + 1);
                        *(undefined4 *)(puVar2 + 1) = uVar1;
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
                        FUN_1400579e0(local_18,uVar1,local_20);
                        return 1;
                    }
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682840(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    int *piVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            piVar5 = (int *)FUN_140617410();
            if ((piVar5 != (int *)0x0) &&
                ((*(int *)(*(longlong *)(piVar5 + 0x26) + 4) == 4 && (*piVar5 == 1)))) {
                iVar1 = *(int *)(lVar4 + 8);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar3 + 1) = 3;
    *puVar3 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682900(longlong param_1)

{
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;
    int *piVar4;
    uint *puVar5;
    longlong local_res10;

    if (((((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
          (lVar3 = FUN_140056ab0(), lVar3 != 0)) &&
         ((*(longlong *)(lVar3 + 8) != 0 &&
           (puVar5 = *(uint **)(*(longlong *)(lVar3 + 8) + 8), puVar5 != (uint *)0x0)))) &&
        ((piVar4 = (int *)FUN_140617410(), piVar4 != (int *)0x0 &&
                                           ((*(int *)(*(longlong *)(piVar4 + 0x26) + 4) == 4 && (*piVar4 == 1)))))) {
        lVar3 = *(longlong *)(piVar4 + 0x14);
        local_res10 = lVar3;
        lVar1 = *(longlong *)(lVar3 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < *puVar5) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res10 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res10 == lVar3) || (*puVar5 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar3;
        }
        puVar5 = *(uint **)(param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint)(local_res10 != lVar3);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682a10(undefined8 param_1)

{
    longlong lVar1;
    int *piVar2;
    undefined4 *puVar3;
    undefined4 local_res10 [6];

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
        if ((lVar1 != 0) &&
            ((*(longlong *)(lVar1 + 8) != 0 &&
              (puVar3 = *(undefined4 **)(*(longlong *)(lVar1 + 8) + 8), puVar3 != (undefined4 *)0x0)))) {
            piVar2 = (int *)FUN_140617410();
            if ((piVar2 != (int *)0x0) &&
                ((*(int *)(*(longlong *)(piVar2 + 0x26) + 4) == 4 && (*piVar2 == 1)))) {
                local_res10[0] = *puVar3;
                FUN_1403f4900(DAT_140c65898,0x67d,local_res10);
            }
        }
    }
    return 0;
}



undefined8 FUN_140682aa0(longlong param_1)

{
    longlong lVar1;
    int *piVar2;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
        if ((lVar1 != 0) &&
            ((*(longlong *)(lVar1 + 8) != 0 &&
              (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 != 0)))) {
            piVar2 = (int *)FUN_140617410(lVar1,*(undefined4 *)(lVar1 + 4));
            if ((piVar2 != (int *)0x0) &&
                ((*(int *)(*(longlong *)(piVar2 + 0x26) + 4) == 4 && (*piVar2 == 1)))) {
                FUN_1404331c0(param_1);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682b40(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.SoldierImprovement");
        if ((lVar3 != 0) &&
            ((*(longlong *)(lVar3 + 8) != 0 &&
              (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)))) {
            iVar1 = *(int *)(lVar3 + 0x20);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined8 FUN_140682bd0(longlong param_1)
undefined8 LoadSoldierEvent(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.SoldierEvent");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5c130;
    puVar6 = PTR_DAT_140c5c130;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"SoldierEvent",&PTR_DAT_140b6fd90);
    return 1;
}



undefined8 FUN_140682e00(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    double *pdVar3;
    longlong lVar4;
    int *piVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (puVar2 = *(undefined4 **)(*(longlong *)(lVar4 + 8) + 8), puVar2 != (undefined4 *)0x0)))) {
            piVar5 = (int *)FUN_140617410(puVar2,*puVar2);
            if (piVar5 != (int *)0x0) {
                iVar1 = *piVar5;
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682ea0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 && (*(longlong *)(*(longlong *)(lVar4 + 8) + 8) != 0)))) {
            lVar4 = FUN_140617410();
            if (lVar4 != 0) {
                puVar2 = *(uint **)(param_1 + 0x10);
                iVar1 = *(int *)(lVar4 + 0x14);
                puVar2[2] = 1;
                *puVar2 = (uint)(iVar1 != 0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140682f40(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    undefined8 *puVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    uint uVar7;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar6 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar6 != 0) &&
            ((*(longlong *)(lVar6 + 8) != 0 &&
              (puVar1 = *(undefined4 **)(*(longlong *)(lVar6 + 8) + 8), puVar1 != (undefined4 *)0x0)))) {
            lVar6 = FUN_140617410(puVar1,*puVar1);
            if (lVar6 != 0) {
                iVar4 = FUN_140616cf0();
                if (((iVar4 == *(int *)(lVar6 + 0x90)) &&
                     (uVar7 = *(uint *)(*(longlong *)(lVar6 + 0x98) + 4), (uVar7 & 0xfffffffa) == 0)) &&
                    (uVar7 != 4)) {
                    iVar4 = -*(int *)(lVar6 + 0xc);
                }
                else {
                    iVar4 = *(int *)(lVar6 + 4) - *(int *)(lVar6 + 8);
                }
                uVar7 = DAT_140c636a8 + iVar4;
                uVar5 = FUN_140616b80(lVar6);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                if (uVar5 < uVar7) {
                    uVar7 = uVar5;
                }
                *pdVar2 = (double)uVar7;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140683060(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    undefined8 *puVar3;
    int iVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 &&
              (puVar1 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + 8), puVar1 != (undefined4 *)0x0)))) {
            lVar5 = FUN_140617410(puVar1,*puVar1);
            if (lVar5 != 0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar4 = FUN_140616b80(lVar5);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406831d0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    byte bVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(*(longlong *)(lVar5 + 8) + 8) != 0)))) {
            lVar5 = FUN_140617410();
            if (lVar5 != 0) {
                uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x98) + 4);
                if ((8 < uVar1) || (bVar4 = 1, (0x14cU >> (uVar1 & 0x1f) & 1) == 0)) {
                    bVar4 = 0;
                }
                puVar2 = *(uint **)(param_1 + 0x10);
                puVar2[2] = 1;
                *puVar2 = (uint)bVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140683290(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    float fVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (puVar1 = *(undefined4 **)(*(longlong *)(lVar4 + 8) + 8), puVar1 != (undefined4 *)0x0)))) {
            lVar4 = FUN_140617410(puVar1,*puVar1);
            if (lVar4 != 0) {
                fVar5 = (float)FUN_140616c10(lVar4,0);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140683340(longlong param_1)

{
    undefined4 *puVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;

    if (((((DAT_140c65970 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) ||
          (lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent"), lVar5 == 0)) ||
         ((*(longlong *)(lVar5 + 8) == 0 ||
           (puVar1 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + 8), puVar1 == (undefined4 *)0x0)))) ||
        (lVar5 = FUN_140617410(puVar1,*puVar1), lVar5 == 0)) {
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 3;
    }
    else {
        uVar8 = 0;
        lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10);
        if (lVar7 != *(longlong *)(lVar5 + 0x30)) {
            do {
                if ((*(int *)(lVar7 + 0x24) == 1) &&
                    (lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar7 + 0x20)), lVar6 != 0)) {
                    uVar8 = uVar8 + 1;
                }
                lVar6 = *(longlong *)(lVar7 + 0x18);
                if (lVar6 == 0) {
                    lVar6 = *(longlong *)(lVar7 + 8);
                    if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                        do {
                            lVar7 = lVar6;
                            lVar6 = *(longlong *)(lVar7 + 8);
                        } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                    }
                    if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                        lVar7 = lVar6;
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar4 != 0;
                         lVar4 = *(longlong *)(lVar4 + 0x10)) {
                        lVar6 = lVar4;
                    }
                }
            } while (lVar7 != *(longlong *)(lVar5 + 0x30));
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)(ulonglong)uVar8;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140683490(longlong param_1)

{
    float fVar1;
    undefined4 *puVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 &&
              (puVar2 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + 8), puVar2 != (undefined4 *)0x0)))) {
            lVar5 = FUN_140617410(puVar2,*puVar2);
            if (lVar5 != 0) {
                fVar1 = *(float *)(lVar5 + 0x1c);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)fVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140683530(longlong param_1)

{
    float fVar1;
    undefined4 *puVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 &&
              (puVar2 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + 8), puVar2 != (undefined4 *)0x0)))) {
            lVar5 = FUN_140617410(puVar2,*puVar2);
            if (lVar5 != 0) {
                fVar1 = *(float *)(lVar5 + 0x20);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)fVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406837d0(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 &&
              (puVar2 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + 8), puVar2 != (undefined4 *)0x0)))) {
            lVar5 = FUN_140617410(puVar2,*puVar2);
            if (lVar5 != 0) {
                iVar1 = *(int *)(lVar5 + 0x90);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140683880(longlong param_1)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    double *pdVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (puVar1 = *(undefined4 **)(*(longlong *)(lVar4 + 8) + 8), puVar1 != (undefined4 *)0x0)))) {
            lVar4 = FUN_140617410(puVar1,*puVar1);
            if (lVar4 != 0) {
                pdVar5 = *(double **)(param_1 + 0x10);
                iVar3 = FUN_140616cf0(lVar4);
                *(undefined4 *)(pdVar5 + 1) = 3;
                *pdVar5 = (double)iVar3;
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



undefined8 FUN_140683930(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    local_20 = uVar3;
    if (((((DAT_140c65970 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) ||
          (lVar6 = FUN_140056ab0(param_1,1,"Game.SoldierEvent"), lVar6 == 0)) ||
         ((*(longlong *)(lVar6 + 8) == 0 ||
           (puVar1 = *(undefined4 **)(*(longlong *)(lVar6 + 8) + 8), puVar1 == (undefined4 *)0x0)))) ||
        (lVar6 = FUN_140617410(puVar1,*puVar1), lVar6 == 0)) {
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar9;
        puVar10 = (undefined8 *)(ulonglong)*(uint *)(puVar9 + 1);
        *(uint *)(puVar8 + 1) = *(uint *)(puVar9 + 1);
    }
    else {
        lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x10);
        if (lVar11 != *(longlong *)(lVar6 + 0x30)) {
            do {
                if (((*(int *)(lVar11 + 0x24) == 0) &&
                     (lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar11 + 0x20)), lVar7 != 0)) &&
                    (iVar4 = FUN_140649930(param_1), iVar4 != 0)) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
                lVar7 = *(longlong *)(lVar11 + 0x18);
                if (lVar7 == 0) {
                    lVar7 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == *(longlong *)(lVar7 + 0x18)) {
                        do {
                            lVar11 = lVar7;
                            lVar7 = *(longlong *)(lVar11 + 8);
                        } while (lVar11 == *(longlong *)(lVar7 + 0x18));
                    }
                    if (*(longlong *)(lVar11 + 0x18) != lVar7) {
                        lVar11 = lVar7;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar7 + 0x10); lVar11 = lVar7, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar7 = lVar2;
                    }
                }
                uVar3 = local_20;
            } while (lVar11 != *(longlong *)(lVar6 + 0x30));
        }
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar8;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar10,uVar3);
    return 1;
}



undefined8 FUN_140683b30(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    local_20 = uVar3;
    if (((((DAT_140c65970 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) ||
          (lVar6 = FUN_140056ab0(param_1,1,"Game.SoldierEvent"), lVar6 == 0)) ||
         ((*(longlong *)(lVar6 + 8) == 0 ||
           (puVar1 = *(undefined4 **)(*(longlong *)(lVar6 + 8) + 8), puVar1 == (undefined4 *)0x0)))) ||
        (lVar6 = FUN_140617410(puVar1,*puVar1), lVar6 == 0)) {
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar9;
        puVar10 = (undefined8 *)(ulonglong)*(uint *)(puVar9 + 1);
        *(uint *)(puVar8 + 1) = *(uint *)(puVar9 + 1);
    }
    else {
        lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x10);
        if (lVar11 != *(longlong *)(lVar6 + 0x30)) {
            do {
                if (((*(int *)(lVar11 + 0x24) == 1) &&
                     (lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar11 + 0x20)), lVar7 != 0)) &&
                    (iVar4 = FUN_140649930(param_1), iVar4 != 0)) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
                lVar7 = *(longlong *)(lVar11 + 0x18);
                if (lVar7 == 0) {
                    lVar7 = *(longlong *)(lVar11 + 8);
                    if (lVar11 == *(longlong *)(lVar7 + 0x18)) {
                        do {
                            lVar11 = lVar7;
                            lVar7 = *(longlong *)(lVar11 + 8);
                        } while (lVar11 == *(longlong *)(lVar7 + 0x18));
                    }
                    if (*(longlong *)(lVar11 + 0x18) != lVar7) {
                        lVar11 = lVar7;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar7 + 0x10); lVar11 = lVar7, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar7 = lVar2;
                    }
                }
                uVar3 = local_20;
            } while (lVar11 != *(longlong *)(lVar6 + 0x30));
        }
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar8;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar10,uVar3);
    return 1;
}



undefined8 FUN_140683d30(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.SoldierEvent");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 &&
              (puVar2 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + 8), puVar2 != (undefined4 *)0x0)))) {
            lVar5 = FUN_140617410(puVar2,*puVar2);
            if (lVar5 != 0) {
                iVar1 = *(int *)(lVar5 + 0x68);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined8 FUN_140684050(longlong param_1)
undefined8 LoadScientistScanBotProfile(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.ScientistScanBotProfile");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5c050;
    puVar6 = PTR_DAT_140c5c050;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"ScientistScanBotProfile",&PTR_DAT_140b6fd70);
    return 1;
}



undefined8 FUN_1406842b0(longlong param_1)

{
    int iVar1;
    int iVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar5 != 0) &&
            ((*(longlong *)(lVar5 + 8) != 0 &&
              (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar5 != 0)))) {
            iVar1 = *(int *)(lVar5 + 0x10);
            pdVar3 = *(double **)(param_1 + 0x10);
            iVar2 = *(int *)(lVar5 + 0xc);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)(iVar1 + iVar2);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684350(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            iVar1 = *(int *)(lVar4 + 0x30);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406843f0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            iVar1 = *(int *)(lVar4 + 0x34);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684490(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            iVar1 = *(int *)(lVar4 + 0x40);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684530(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            fVar1 = *(float *)(lVar4 + 0x18);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)fVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406845d0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            fVar1 = *(float *)(lVar4 + 0x1c);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)fVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684670(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            fVar1 = *(float *)(lVar4 + 0x20);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)fVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684710(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            fVar1 = *(float *)(lVar4 + 0x24);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)fVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406847b0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar4 != 0) &&
            ((*(longlong *)(lVar4 + 8) != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)))) {
            fVar1 = *(float *)(lVar4 + 0x28);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)fVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684850(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined **local_18;
    undefined4 local_10;
    undefined4 local_c;

    if ((DAT_140c65970 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if ((lVar2 != 0) &&
            ((*(longlong *)(lVar2 + 8) != 0 &&
              (puVar1 = *(undefined4 **)(*(longlong *)(lVar2 + 8) + 8), puVar1 != (undefined4 *)0x0)))) {
            local_10 = 0;
            local_18 = &PTR_FUN_140b6fe30;
            local_c = *puVar1;
            FUN_1406b7660(param_1,&local_18);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406848f0(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    longlong *plVar3;
    ulonglong uVar4;

    if ((((param_2 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) == param_2))
        && (DAT_140c65970 != 0)) {
        uVar4 = 0;
        if (*(longlong *)(param_1 + 0x78) != 0) {
            do {
                iVar1 = FUN_1403d7c30(*(undefined8 *)(uVar4 * 8 + *(longlong *)(param_1 + 0x70)),param_2,1);
                if (iVar1 != 0) {
                    uVar2 = FUN_14047c430(param_2,*(undefined4 *)
                                                  **(undefined8 **)
                            (uVar4 * 8 + *(longlong *)(param_1 + 0x70)));
                    plVar3 = (longlong *)FUN_1403d7bc0(uVar2);
                    if ((plVar3 == (longlong *)0x0) ||
                        (iVar1 = (**(code **)(*plVar3 + 0x38))(plVar3), iVar1 == 0)) {
                        return 0;
                    }
                }
                uVar4 = (ulonglong)((int)uVar4 + 1);
            } while (uVar4 < *(ulonglong *)(param_1 + 0x78));
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1406849e0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x40);
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
        return *(undefined8 *)(local_res8 + 0x28);
    }
    return 0;
}



undefined8
FUN_140684a40(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5,
              int param_6)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    int iVar5;
    uint uVar6;
    ulonglong uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x18);
    *param_2 = 0;
    lVar3 = *(longlong *)(lVar2 + 8);
    *(undefined4 *)(param_2 + 1) = 0;
    local_res8 = lVar2;
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_3) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar2) || (lVar2 = *(longlong *)(local_res8 + 0x28), lVar2 == 0)) {
        return 0x80004005;
    }
    uVar1 = *(uint *)(lVar2 + 0x10);
    if ((uVar1 <= param_4) && (param_4 != 0xffffffff)) {
        return 0x80004005;
    }
    if ((param_5 < uVar1) && (*(longlong *)(lVar2 + 8) + (ulonglong)param_5 * 0x18 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        piVar4 = (int *)(lVar2 + (ulonglong)param_5 * 0x18);
        if (piVar4 == (int *)0x0) {
            return 0x80004005;
        }
        if (param_6 == 0) {
            iVar9 = *piVar4;
        }
        else {
            iVar9 = piVar4[3];
        }
        *(int *)param_2 = *(int *)param_2 + iVar9;
        if (param_6 == 0) {
            iVar9 = piVar4[1];
        }
        else {
            iVar9 = piVar4[4];
        }
        *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 4) + iVar9;
        if (param_6 == 0) {
            iVar9 = piVar4[2];
        }
        else {
            iVar9 = piVar4[5];
        }
        *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + iVar9;
        iVar9 = *(int *)(param_2 + 1);
        if (param_4 == 0xffffffff) {
            uVar7 = 0;
        }
        else {
            uVar7 = (ulonglong)(param_4 + 1);
        }
        if ((uint)uVar7 < param_5) {
            iVar8 = *(int *)param_2;
            iVar10 = *(int *)((longlong)param_2 + 4);
            do {
                if ((uint)uVar7 < uVar1) {
                    piVar4 = (int *)(lVar2 + uVar7 * 0x18);
                }
                else {
                    piVar4 = (int *)0x0;
                }
                if (param_6 == 0) {
                    iVar5 = *piVar4;
                }
                else {
                    iVar5 = piVar4[3];
                }
                iVar8 = iVar8 + iVar5;
                if (param_6 == 0) {
                    iVar5 = piVar4[1];
                }
                else {
                    iVar5 = piVar4[4];
                }
                iVar10 = iVar10 + iVar5;
                if (param_6 == 0) {
                    iVar5 = piVar4[2];
                }
                else {
                    iVar5 = piVar4[5];
                }
                uVar6 = (uint)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
                iVar9 = iVar9 + iVar5;
            } while (uVar6 < param_5);
            *(int *)param_2 = iVar8;
            *(int *)((longlong)param_2 + 4) = iVar10;
            *(int *)(param_2 + 1) = iVar9;
        }
        return 0;
    }
    return 0x80004005;
}



undefined4 FUN_140684bf0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.SoldierImprovement",0x17);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_140684cd0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Challenges");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.Challenges");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(int **)(lVar5 + 8) == (int *)0x0) || (*(int **)(lVar4 + 8) == (int *)0x0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(lVar5 + 8) == **(int **)(lVar4 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684d90(longlong param_1)

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
        LAB_140684dd3:
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
                local_18 = FUN_140062650(param_1,"Game.Challenges",0xf);
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
                goto LAB_140684eb7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140684dd3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140684eb7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140684ed0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Challenges");
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


// undefined8 FUN_140684f50(longlong param_1)
undefined8 LoadChallenges(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.Challenges");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5c800;
    puVar6 = PTR_DAT_140c5c800;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"Challenges",&PTR_DAT_140b6fe40);
    return 1;
}



undefined8 FUN_140685170(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
            iVar4 = *(int *)(lVar3 + 4);
            if (iVar4 == 5) {
                iVar4 = 4;
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685210(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    double *pdVar3;
    undefined8 *puVar4;
    int iVar5;
    int iVar6;
    longlong lVar7;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 8) != 0)) &&
        (puVar1 = *(uint **)(*(longlong *)(lVar7 + 8) + 8), puVar1 != (uint *)0x0)) {
        lVar7 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar7;
        lVar2 = *(longlong *)(lVar7 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < *puVar1) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar7) || (*puVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar7;
        }
        if ((local_res10 != lVar7) && (lVar7 = *(longlong *)(local_res10 + 0x28), lVar7 != 0)) {
            iVar6 = *(int *)(lVar7 + 0x14);
            iVar5 = FUN_14048f880();
            if (iVar5 != 0) {
                if ((*(byte *)(puVar1 + 3) & 8) == 0) {
                    iVar6 = FUN_14048f9f0();
                }
                else {
                    iVar6 = *(int *)(lVar7 + 0x1c);
                }
            }
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar6;
            goto LAB_140685316;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar4 + 1) = 3;
    *puVar4 = 0;
    LAB_140685316:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685330(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    double *pdVar4;
    undefined8 *puVar5;
    int iVar6;
    longlong lVar7;
    int iVar8;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 8) != 0)) &&
        (puVar2 = *(uint **)(*(longlong *)(lVar7 + 8) + 8), puVar2 != (uint *)0x0)) {
        uVar1 = *puVar2;
        lVar7 = *(longlong *)(DAT_140c65948 + 0x30);
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
        if ((local_res10 != lVar7) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            iVar8 = *(int *)(*(longlong *)(local_res10 + 0x28) + 0x18);
            iVar6 = FUN_14048f880();
            if (iVar6 != 0) {
                iVar8 = 100;
            }
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar5 + 1) = 3;
    *puVar5 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685440(longlong param_1)

{
    uint uVar1;
    int iVar2;
    uint *puVar3;
    longlong lVar4;
    double *pdVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 8) != 0)) &&
        (puVar3 = *(uint **)(*(longlong *)(lVar7 + 8) + 8), puVar3 != (uint *)0x0)) {
        uVar1 = *puVar3;
        lVar7 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar7;
        lVar4 = *(longlong *)(lVar7 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar1) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res10 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar7) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar7;
        }
        if ((local_res10 != lVar7) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            iVar2 = *(int *)(*(longlong *)(local_res10 + 0x28) + 0x20);
            pdVar5 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar6 + 1) = 3;
    *puVar6 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685540(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    double *pdVar4;
    undefined8 *puVar5;
    longlong lVar6;
    int iVar7;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar6 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar6 != 0)) &&
         (*(longlong *)(lVar6 + 8) != 0)) &&
        (puVar2 = *(uint **)(*(longlong *)(lVar6 + 8) + 8), puVar2 != (uint *)0x0)) {
        uVar1 = *puVar2;
        lVar6 = *(longlong *)(DAT_140c65948 + 0xd0);
        local_res10 = lVar6;
        lVar3 = *(longlong *)(lVar6 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar6) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar6;
        }
        if (local_res10 == lVar6) {
            iVar7 = 0;
        }
        else {
            iVar7 = *(int *)(local_res10 + 0x24);
        }
        pdVar4 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685640(longlong param_1)

{
    uint uVar1;
    int iVar2;
    uint *puVar3;
    longlong lVar4;
    double *pdVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 8) != 0)) &&
        (puVar3 = *(uint **)(*(longlong *)(lVar7 + 8) + 8), puVar3 != (uint *)0x0)) {
        uVar1 = *puVar3;
        lVar7 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar7;
        lVar4 = *(longlong *)(lVar7 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar1) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res10 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar7) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar7;
        }
        if ((local_res10 != lVar7) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            iVar2 = *(int *)(*(longlong *)(local_res10 + 0x28) + 0x28);
            pdVar5 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar6 + 1) = 3;
    *puVar6 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685740(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
            (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
            iVar1 = *(int *)(lVar4 + 0x18);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406857d0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    uint *puVar3;
    longlong lVar4;
    double *pdVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 != 0)) &&
         (*(longlong *)(lVar7 + 8) != 0)) &&
        (puVar3 = *(uint **)(*(longlong *)(lVar7 + 8) + 8), puVar3 != (uint *)0x0)) {
        uVar1 = *puVar3;
        lVar7 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar7;
        lVar4 = *(longlong *)(lVar7 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar1) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res10 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar7) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar7;
        }
        if ((local_res10 != lVar7) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            iVar2 = *(int *)(*(longlong *)(local_res10 + 0x28) + 0x24);
            pdVar5 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar2;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar6 + 1) = 3;
    *puVar6 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406858d0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8), lVar2 != 0)) {
            FUN_1406b9790(param_1,*(undefined4 *)(lVar2 + 0x14));
            return 1;
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685950(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
            (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
            uVar1 = *(uint *)(lVar4 + 0xc);
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = uVar1 >> 3 & 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406859e0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    uint *puVar3;
    longlong lVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar6 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar6 != 0)) &&
         (*(longlong *)(lVar6 + 8) != 0)) &&
        (puVar3 = *(uint **)(*(longlong *)(lVar6 + 8) + 8), puVar3 != (uint *)0x0)) {
        uVar1 = *puVar3;
        lVar6 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar6;
        lVar4 = *(longlong *)(lVar6 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar1) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res10 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar6) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar6;
        }
        if ((local_res10 != lVar6) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            puVar3 = *(uint **)(param_1 + 0x10);
            iVar2 = *(int *)(*(longlong *)(local_res10 + 0x28) + 0x30);
            puVar3[2] = 1;
            *puVar3 = (uint)(iVar2 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    puVar5[2] = 1;
    *puVar5 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685ad0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong lVar4;
    uint uVar5;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar4 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar4 != 0)) &&
         (*(longlong *)(lVar4 + 8) != 0)) &&
        (puVar1 = *(uint **)(*(longlong *)(lVar4 + 8) + 8), puVar1 != (uint *)0x0)) {
        lVar4 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar4;
        lVar2 = *(longlong *)(lVar4 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < *puVar1) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar4) || (*puVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar4;
        }
        if ((local_res10 != lVar4) && (lVar4 = *(longlong *)(local_res10 + 0x28), lVar4 != 0)) {
            if (((*(byte *)(puVar1 + 3) & 0x10) != 0) && (*(int *)(lVar4 + 0x48) == 0)) {
                puVar3 = *(undefined4 **)(param_1 + 0x10);
                *puVar3 = 1;
                puVar3[2] = 1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            uVar5 = (uint)(*(int *)(lVar4 + 0x34) != 0);
            goto LAB_140685bbb;
        }
    }
    uVar5 = 0;
    LAB_140685bbb:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685be0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    undefined4 *puVar3;
    byte bVar4;
    longlong lVar5;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar5 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar5 != 0)) &&
         (*(longlong *)(lVar5 + 8) != 0)) &&
        (puVar1 = *(uint **)(*(longlong *)(lVar5 + 8) + 8), puVar1 != (uint *)0x0)) {
        lVar5 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar5;
        lVar2 = *(longlong *)(lVar5 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < *puVar1) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar5) || (*puVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar5;
        }
        if ((local_res10 != lVar5) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            if ((puVar1[6] == 0xffffffff) ||
                (bVar4 = 1, *(uint *)(*(longlong *)(local_res10 + 0x28) + 0x28) < puVar1[6])) {
                bVar4 = 0;
            }
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)bVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140685cf0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar1 = FUN_140056ab0(param_1,1), lVar1 == 0)
         ) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + 8), lVar1 == 0)) {
        FUN_140058710(param_1,"",0);
        return 1;
    }
    uVar2 = FUN_14034bdd0(lVar1,*(undefined4 *)(lVar1 + 0x44));
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
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_140685f70(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;
    undefined8 uVar5;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar4 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar4 != 0)) &&
         (*(longlong *)(lVar4 + 8) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8), lVar4 != 0)) {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar1 = *(int *)(lVar4 + 0x38);
        FUN_140058710(param_1,"idZone",6);
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        lVar4 = FUN_14024db80(*(undefined4 *)(lVar4 + 0x38));
        if (lVar4 != 0) {
            FUN_14034bdd0();
        }
        FUN_1400f0090(param_1);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140686240(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8), lVar3 != 0)) {
            iVar1 = *(int *)(lVar3 + 0x24);
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406862d0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    undefined8 uVar6;
    float fVar7;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar5 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar5 == 0)) ||
         (*(longlong *)(lVar5 + 8) == 0)) ||
        (puVar2 = *(uint **)(*(longlong *)(lVar5 + 8) + 8), puVar2 == (uint *)0x0)) {
        LAB_1406863be:
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *puVar2;
    lVar5 = *(longlong *)(DAT_140c65948 + 0x30);
    local_res10 = lVar5;
    lVar3 = *(longlong *)(lVar5 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < uVar1) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res10 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res10 == lVar5) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar5;
    }
    if ((local_res10 == lVar5) || (lVar5 = *(longlong *)(local_res10 + 0x28), lVar5 == 0))
        goto LAB_1406863be;
    fVar7 = 0.0;
    if (*(int *)(lVar5 + 0x30) == 0) {
        if (*(int *)(lVar5 + 0x34) == 0) goto LAB_14068639b;
        uVar6 = 4;
    }
    else {
        uVar6 = 2;
    }
    fVar7 = (float)FUN_14048dd20(lVar5,uVar1,uVar6);
    LAB_14068639b:
    pdVar4 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar4 + 1) = 3;
    *pdVar4 = (double)fVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406863e0(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (lVar5 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar5 != 0)) &&
         (*(longlong *)(lVar5 + 8) != 0)) &&
        (puVar2 = *(uint **)(*(longlong *)(lVar5 + 8) + 8), puVar2 != (uint *)0x0)) {
        uVar1 = *puVar2;
        lVar5 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res10 = lVar5;
        lVar3 = *(longlong *)(lVar5 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar5) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar5;
        }
        if ((local_res10 != lVar5) && (*(longlong *)(local_res10 + 0x28) != 0)) {
            uVar1 = *(uint *)(*(longlong *)(local_res10 + 0x28) + 0x40);
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)((float)(ulonglong)uVar1 * 0.001);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140686730(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0();
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
            (*(longlong *)(*(longlong *)(lVar3 + 8) + 8) != 0)) {
            iVar2 = FUN_14048d940(DAT_140c65948);
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)(iVar2 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406867d0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
            (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar5 != 0)) {
            iVar3 = FUN_14048d5a0();
            if (iVar3 != 0) {
                lVar5 = FUN_14024b980(*(undefined4 *)(lVar5 + 0x24));
                if (lVar5 == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                }
                else {
                    fVar11 = *(float *)(lVar5 + 0xc);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar7 = FUN_14018f0e0(local_38,&DAT_1409f56ec);
                    lVar8 = -1;
                    if (*(longlong *)(lVar7 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar9 = -1;
                        do {
                            lVar9 = lVar9 + 1;
                        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar11;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    fVar11 = *(float *)(lVar5 + 0x10);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar7 = FUN_14018f0e0(local_38,&DAT_1409f568c);
                    if (*(longlong *)(lVar7 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar9 = -1;
                        do {
                            lVar9 = lVar9 + 1;
                        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar11;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    fVar11 = *(float *)(lVar5 + 0x14);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_38,&DAT_1409f56c4);
                    lVar5 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar5 + lVar8) != '\0');
                        FUN_140058710(param_1,lVar5,lVar8);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar11;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                }
                goto LAB_140686b1e;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140686b1e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_140686b50(longlong param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined *puVar8;
    undefined8 *puVar9;
    undefined *puVar10;
    undefined local_78 [16];
    undefined local_68 [8];
    undefined *local_60;
    undefined8 local_58;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28 [2];
    longlong local_18;

    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    local_40 = uVar4;
    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 == 0)) ||
         (*(longlong *)(lVar7 + 8) == 0)) ||
        ((lVar7 = *(longlong *)(*(longlong *)(lVar7 + 8) + 8), lVar7 == 0 ||
                                                               (iVar5 = FUN_14048d5a0(), iVar5 == 0)))) {
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar9;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        local_60 = (undefined *)FUN_14018b280(0x28);
        lVar3 = DAT_140c65898;
        local_58 = 0;
        *local_60 = 0;
        *(undefined8 *)(local_60 + 8) = 0;
        *(undefined **)(local_60 + 0x10) = local_60;
        *(undefined **)(local_60 + 0x18) = local_60;
        iVar5 = FUN_1403f8270(lVar3,*(undefined4 *)(lVar7 + 0x24),0);
        if ((iVar5 != 0) && (lVar7 = FUN_14024b980(*(undefined4 *)(lVar7 + 0x24)), lVar7 != 0)) {
            local_78 = ZEXT1216(*(undefined (*) [12])(lVar7 + 0xc));
            FUN_140449b10(local_78);
        }
        puVar10 = *(undefined **)(local_60 + 0x10);
        lVar7 = param_1;
        if (puVar10 != local_60) {
            do {
                local_78 = ZEXT816(CONCAT44((float)*(int *)(puVar10 + 0x24),
                                            (float)(int)*(undefined8 *)(puVar10 + 0x20)));
                lVar7 = FUN_1400fa180(local_28,param_1,local_78);
                FUN_1400fb1d0(&local_48,*(undefined4 *)(lVar7 + 8));
                local_28[0] = &PTR_FUN_140b56a08;
                if (local_18 != 0) {
                    FUN_1400579e0();
                }
                puVar8 = *(undefined **)(puVar10 + 0x18);
                if (puVar8 == (undefined *)0x0) {
                    puVar8 = *(undefined **)(puVar10 + 8);
                    if (puVar10 == *(undefined **)(puVar8 + 0x18)) {
                        do {
                            puVar10 = puVar8;
                            puVar8 = *(undefined **)(puVar10 + 8);
                        } while (puVar10 == *(undefined **)(puVar8 + 0x18));
                    }
                    if (*(undefined **)(puVar10 + 0x18) != puVar8) {
                        puVar10 = puVar8;
                    }
                }
                else {
                    for (puVar2 = *(undefined **)(puVar8 + 0x10); puVar10 = puVar8, puVar2 != (undefined *)0x0
                            ; puVar2 = *(undefined **)(puVar2 + 0x10)) {
                        puVar8 = puVar2;
                    }
                }
                lVar7 = local_38;
                uVar4 = local_40;
            } while (puVar10 != local_60);
        }
        puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(lVar7 + 0x10);
        *puVar1 = *puVar9;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        FUN_140008410(local_68);
        FUN_14018b900(local_60,0);
        param_1 = lVar7;
    }
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_140686e20(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    float fVar11;
    undefined local_38 [8];
    longlong local_30;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
            (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar5 != 0)) {
            iVar3 = FUN_14048d5a0();
            if (iVar3 != 0) {
                lVar5 = FUN_14024b980(*(undefined4 *)(lVar5 + 0x3c));
                if (lVar5 == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                }
                else {
                    fVar11 = *(float *)(lVar5 + 0xc);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar7 = FUN_14018f0e0(local_38,&DAT_1409f544c);
                    lVar8 = -1;
                    if (*(longlong *)(lVar7 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar9 = -1;
                        do {
                            lVar9 = lVar9 + 1;
                        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar11;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    fVar11 = *(float *)(lVar5 + 0x10);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar7 = FUN_14018f0e0(local_38,&DAT_1409f567c);
                    if (*(longlong *)(lVar7 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar9 = -1;
                        do {
                            lVar9 = lVar9 + 1;
                        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar11;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    fVar11 = *(float *)(lVar5 + 0x14);
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar5 = FUN_14018f0e0(local_38,&DAT_1409f541c);
                    lVar5 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        do {
                            lVar8 = lVar8 + 1;
                        } while (*(char *)(lVar5 + lVar8) != '\0');
                        FUN_140058710(param_1,lVar5,lVar8);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar11;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
                    *puVar10 = *puVar6;
                    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
                }
                goto LAB_14068716e;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_14068716e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1406871a0(longlong param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined *puVar8;
    undefined8 *puVar9;
    undefined *puVar10;
    undefined local_f8 [8];
    undefined *local_f0;
    longlong local_e8;
    undefined **local_d8;
    undefined4 local_d0;
    longlong local_c8;
    undefined4 local_c0;
    undefined **local_b8;
    undefined4 local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined local_98 [8];
    undefined *local_90;
    undefined8 local_88;
    undefined **local_78;
    undefined4 local_70;
    longlong local_68;
    undefined local_58 [16];
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28 [16];

    local_a0 = 1;
    local_b8 = &PTR_FUN_140b569f0;
    local_a8 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    local_b0 = uVar4;
    if (((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
           (lVar7 = FUN_140056ab0(param_1,1,"Game.Challenges"), lVar7 == 0)) ||
          (*(longlong *)(lVar7 + 8) == 0)) ||
         ((lVar7 = *(longlong *)(*(longlong *)(lVar7 + 8) + 8), lVar7 == 0 ||
                                                                (iVar5 = FUN_14048d5a0(), iVar5 == 0)))) || (iVar5 = FUN_14048d530(), iVar5 == 0)) {
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar9;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        local_90 = (undefined *)FUN_14018b280(0x28);
        lVar3 = DAT_140c65898;
        local_88 = 0;
        *local_90 = 0;
        *(undefined8 *)(local_90 + 8) = 0;
        *(undefined **)(local_90 + 0x10) = local_90;
        *(undefined **)(local_90 + 0x18) = local_90;
        iVar5 = FUN_1403f8270(lVar3,*(undefined4 *)(lVar7 + 0x3c),0);
        if ((iVar5 != 0) && (lVar7 = FUN_14024b980(*(undefined4 *)(lVar7 + 0x3c)), lVar7 != 0)) {
            local_58 = ZEXT1216(*(undefined (*) [12])(lVar7 + 0xc));
            local_f0 = (undefined *)FUN_14018b280(0x28);
            local_e8 = 0;
            *local_f0 = 0;
            *(undefined8 *)(local_f0 + 8) = 0;
            *(undefined **)(local_f0 + 0x10) = local_f0;
            *(undefined **)(local_f0 + 0x18) = local_f0;
            FUN_140449b10(local_58);
            if (local_e8 != 0) {
                local_48 = &PTR_FUN_140b569f0;
                local_30 = 1;
                local_38 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                local_d8 = &PTR_FUN_140b569f0;
                local_c0 = 1;
                local_c8 = param_1;
                local_40 = uVar4;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                local_d0 = FUN_1400578c0(param_1);
                puVar10 = *(undefined **)(local_f0 + 0x10);
                lVar7 = param_1;
                if (puVar10 != local_f0) {
                    do {
                        local_28 = ZEXT816(CONCAT44((float)*(int *)(puVar10 + 0x24),
                                                    (float)(int)*(undefined8 *)(puVar10 + 0x20)));
                        lVar7 = FUN_1400fa180(&local_78,param_1,local_28);
                        FUN_1400fb1d0(&local_d8,*(undefined4 *)(lVar7 + 8));
                        local_78 = &PTR_FUN_140b56a08;
                        if (local_68 != 0) {
                            FUN_1400579e0();
                        }
                        puVar8 = *(undefined **)(puVar10 + 0x18);
                        if (puVar8 == (undefined *)0x0) {
                            puVar8 = *(undefined **)(puVar10 + 8);
                            if (puVar10 == *(undefined **)(puVar8 + 0x18)) {
                                do {
                                    puVar10 = puVar8;
                                    puVar8 = *(undefined **)(puVar10 + 8);
                                } while (puVar10 == *(undefined **)(puVar8 + 0x18));
                            }
                            if (*(undefined **)(puVar10 + 0x18) != puVar8) {
                                puVar10 = puVar8;
                            }
                        }
                        else {
                            for (puVar2 = *(undefined **)(puVar8 + 0x10); puVar10 = puVar8,
                                    puVar2 != (undefined *)0x0; puVar2 = *(undefined **)(puVar2 + 0x10)) {
                                puVar8 = puVar2;
                            }
                        }
                        lVar7 = local_c8;
                    } while (puVar10 != local_f0);
                }
                FUN_1400fb2a0(&local_48,L"tHexes",local_d0);
                FUN_1400fa3c0(&local_78,param_1,local_58);
                FUN_1400fb2a0(&local_48,L"tIndicator",local_70);
                FUN_1400fb1d0(&local_b8,uVar4);
                if (local_68 != 0) {
                    FUN_1400579e0();
                }
                if (lVar7 != 0) {
                    FUN_1400579e0(lVar7);
                }
                FUN_1400579e0(param_1);
                param_1 = local_a8;
                uVar4 = local_b0;
            }
            FUN_140008410(local_f8);
            FUN_14018b900(local_f0,0);
        }
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar9;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140008410(local_98);
        FUN_14018b900(local_90,0);
    }
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_140687610(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    uint *puVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.Challenges");
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
            (puVar1 = *(undefined4 **)(*(longlong *)(lVar3 + 8) + 8), puVar1 != (undefined4 *)0x0)) {
            iVar2 = FUN_14048d5a0(puVar1,*puVar1);
            if (iVar2 != 0) {
                puVar4 = *(uint **)(param_1 + 0x10);
                iVar2 = FUN_14048f880();
                puVar4[2] = 1;
                *puVar4 = (uint)(iVar2 != 0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406876b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    float fVar1;
    float fVar2;
    undefined4 *puVar3;
    double *pdVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined4 uVar7;
    longlong lVar8;
    undefined4 in_XMM6_Da;
    float fVar9;
    undefined4 in_XMM6_Db;
    float fVar10;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar11 [16];

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        LAB_1406877ef:
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = 0x47efffffe0000000;
        *(undefined4 *)(puVar5 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar8 = FUN_140056ab0(param_1,1,"Game.Challenges");
    if (((lVar8 == 0) || (*(longlong *)(lVar8 + 8) == 0)) ||
        (puVar3 = *(undefined4 **)(*(longlong *)(lVar8 + 8) + 8), puVar3 == (undefined4 *)0x0))
        goto LAB_1406877ef;
    iVar6 = FUN_14048d5a0(puVar3,*puVar3);
    if (iVar6 == 0) goto LAB_1406877ef;
    auVar11 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar9 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
    fVar10 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4);
    uVar7 = FUN_14048d940(DAT_140c65948);
    lVar8 = FUN_14024b980(uVar7);
    if (lVar8 != 0) {
        iVar6 = FUN_1403f8270(DAT_140c65898,uVar7,0,param_4,auVar11);
        if (iVar6 != 0) {
            fVar1 = *(float *)(lVar8 + 0x10);
            fVar2 = *(float *)(lVar8 + 0xc);
            pdVar4 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            fVar9 = fVar9 - fVar2;
            fVar10 = fVar10 - fVar1;
            *pdVar4 = (double)SQRT(fVar9 * fVar9 + fVar10 * fVar10 + 0.0);
            goto LAB_1406877b6;
        }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x47efffffe0000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    LAB_1406877b6:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140687820(longlong param_1)

{
    longlong *plVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    bool bVar9;

    lVar6 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
    lVar7 = 0;
    lVar8 = lVar7;
    if (lVar6 != 0) {
        lVar8 = *(longlong *)(lVar6 + 8);
    }
    lVar6 = FUN_140056ab0(param_1,2,"Game.PublicEvent");
    if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar6 + 8);
    }
    if ((lVar8 == 0) || (lVar7 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar8 + 8) == 0) ||
            (plVar1 = *(longlong **)(lVar7 + 8), plVar1 == (longlong *)0x0)) {
            bVar9 = false;
        }
        else {
            iVar4 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))();
            iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
            bVar9 = iVar4 == iVar5;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)bVar9;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140687900(longlong param_1)

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
        LAB_140687943:
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
                local_18 = FUN_140062650(param_1,"Game.PublicEvent",0x10);
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
                goto LAB_140687a27;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140687943;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140687a27:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140687a40(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
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



undefined8 FUN_140687ac0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;

    lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 8);
    }
    lVar3 = FUN_140056ab0(param_1,2,"Game.PublicEventObjective");
    if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
    }
    if ((lVar5 == 0) || (lVar4 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar5 + 8) == 0) || (*(longlong *)(lVar4 + 8) == 0)) {
            bVar6 = false;
        }
        else {
            bVar6 = **(int **)(*(longlong *)(lVar5 + 8) + 8) == **(int **)(*(longlong *)(lVar4 + 8) + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140687cc0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.PublicEventObjective");
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


// undefined4 FUN_140687d40(longlong param_1)
undefined4 LoadPublicEvent(longlong param_1)
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

    LuaElementLoaderOrSo(param_1,"Game.PublicEvent");
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
    ppuVar5 = &PTR_DAT_140c5ca00;
    puVar7 = PTR_DAT_140c5ca00;
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
    FUN_140057020(param_1,"PublicEvent",&PTR_DAT_140b6fe60);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventParticipantRemoveReason_Logout",0x29);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventParticipantRemoveReason_CompleteSuccess",0x32);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventParticipantRemoveReason_CompleteFailure",0x32);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventParticipantRemoveReason_LeftArea",0x2b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardTier_None",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardTier_Bronze",0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardTier_Silver",0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardTier_Gold",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardType_None",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardType_Individual",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardType_Speed",0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardType_Completion",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardType_Nightmare",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventRewardType_Script",0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_WorldEvent",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Dungeon",0x17);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_PVP_Warplot",0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_PVP_Battleground_Vortex",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_PVP_Battleground_HoldTheLine",0x2c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_PVP_Battleground_Cannon",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_PVP_Battleground_Sabotage",0x29);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Malgrave",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4020000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Hycrest",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Skywatch",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Whitevale",0x23);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Galeras",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x402e000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Astrovoid",0x23);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_Farside",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_PVP_Arena",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0x18;
    local_38 = FUN_140062650(param_1,"PublicEventType_SubEvent",0x18);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_NorthernWilds",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_LiveEvent",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Adventure_LevianBay",0x23);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Shiphand",0x18);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_NonCombatEvent",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PublicEventType_Raid",0x14);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"PublicEventStatType",0x13);
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



void FUN_140688bf0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    lVar1 = *(longlong *)(DAT_140c65988 + 0x10);
    local_res18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar1;
    }
    if (local_res18 == lVar1) {
        FUN_140432c80(param_1,0);
        return;
    }
    FUN_140432c80(param_1,*(undefined8 *)(local_res18 + 0x28));
    return;
}



undefined8 FUN_140689480(longlong param_1)

{
    double **ppdVar1;
    double dVar2;
    int iVar3;
    double *pdVar4;
    double *pdVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    ppdVar1 = *(double ***)(DAT_140c65980 + 0x30);
    if ((double **)*ppdVar1 != ppdVar1) {
        pdVar5 = *ppdVar1;
        dVar2 = pdVar5[2];
        if (dVar2 != 0.0) {
            pdVar4 = (double *)&DAT_140a12138;
            if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
                pdVar4 = *(double **)(param_1 + 0x18);
            }
            if (*(int *)(pdVar4 + 1) != 3) {
                if (*(int *)(pdVar4 + 1) != 4) {
                    LAB_140689507:
                    FUN_1405f4d60(dVar2,0);
                    return 0;
                }
                pdVar5 = local_res10;
                iVar3 = FUN_14005ac80((longlong)*pdVar4 + 0x20,pdVar5);
                if (iVar3 == 0) goto LAB_140689507;
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res10[0];
            }
            FUN_1405f4d60(dVar2,(ulonglong)pdVar5 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar4);
        }
    }
    return 0;
}



undefined8 FUN_140689580(longlong param_1)

{
    byte bVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong local_res10 [3];

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x20))();
            plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,uVar2,0);
            if (plVar4 != (longlong *)0x0) {
                uVar5 = 0;
                if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
                    do {
                        if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400)
                            == param_1) {
                            lVar3 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                            goto LAB_140689628;
                        }
                        uVar5 = (ulonglong)((int)uVar5 + 1);
                    } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
                }
                lVar3 = 0;
                LAB_140689628:
                puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 400) + 0x18) + 0x10);
                puVar7 = &DAT_140a12138;
                if (puVar6 < *(undefined8 **)(*(longlong *)(lVar3 + 400) + 0x10)) {
                    puVar7 = puVar6;
                }
                if ((*(int *)(puVar7 + 1) == 0) || ((*(int *)(puVar7 + 1) == 1 && (*(int *)puVar7 == 0)))) {
                    bVar1 = 0;
                }
                else {
                    bVar1 = 1;
                }
                if (*(uint *)(plVar4 + 0x3b) != (uint)bVar1) {
                    *(uint *)(plVar4 + 0x3b) = (uint)bVar1;
                    local_res10[0] = 0;
                    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
                    local_res10[0] = (ulonglong)CONCAT14(bVar1,uVar2);
                    FUN_1403f4900(DAT_140c65898,0x6fa,local_res10);
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406896f0(longlong param_1)

{
    short *psVar1;
    longlong *plVar2;
    char *pcVar3;
    longlong lVar4;
    undefined2 *puVar5;
    undefined2 *puVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined local_108 [8];
    longlong local_100;
    undefined **local_e8;
    undefined local_e0 [184];
    undefined local_28 [16];
    undefined2 *local_18;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent"), lVar4 == 0)) ||
         (*(longlong *)(lVar4 + 8) == 0)) ||
        (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), plVar2 == (longlong *)0x0)) {
        pcVar3 = "GCinematicsNotify";
    }
    else {
        lVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (*(int *)(lVar4 + 0xc) != 0) {
            puVar5 = (undefined2 *)FUN_14018b280(0x10);
            puVar9 = (undefined8 *)0x0;
            if (puVar5 != (undefined2 *)0x0) {
                *puVar5 = 0;
            }
            FUN_1400b6f30(&local_e8);
            local_e8 = &PTR_FUN_140b69230;
            local_18 = (undefined2 *)0x0;
            local_28 = ZEXT816(0);
            puVar6 = (undefined2 *)FUN_14018b280(0x10);
            local_28 = CONCAT88(puVar6,puVar6);
            local_18 = puVar6 + 8;
            puVar7 = puVar9;
            if (puVar6 != (undefined2 *)0x0) {
                *puVar6 = 0;
            }
            do {
                psVar1 = &DAT_140b32c1a + (longlong)puVar7;
                puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            } while (*psVar1 != 0);
            FUN_14001c480(local_e0);
            puVar7 = (undefined8 *)FUN_14018b280(0x58);
            if (puVar7 != (undefined8 *)0x0) {
                uVar8 = (**(code **)(*plVar2 + 0x18))(plVar2);
                FUN_1400b6390(puVar7);
                *puVar7 = &PTR_FUN_140b69300;
                FUN_1404ddd60(puVar7,uVar8);
                puVar9 = puVar7;
            }
            FUN_1400b7480(&local_e8,puVar9);
            lVar4 = FUN_1400b7660(&local_e8);
            lVar4 = FUN_14018f0e0(local_108,*(undefined8 *)(lVar4 + 8));
            if (*(longlong *)(lVar4 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar10) != '\0');
                FUN_140058710(param_1);
            }
            if (local_100 != 0) {
                FUN_14018b900(local_100,0);
            }
            if (local_28._0_8_ != 0) {
                FUN_14018b900(local_28._0_8_,0);
            }
            FUN_1400b7390(&local_e8);
            if (puVar5 == (undefined2 *)0x0) {
                return 1;
            }
            FUN_14018b900(puVar5,0);
            return 1;
        }
        pcVar3 = "?CityDirectionClear";
    }
    FUN_140058710(param_1,pcVar3 + 0x14,0);
    return 1;
}



undefined8 FUN_140689920(longlong param_1)

{
    longlong *plVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
            (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), plVar1 != (longlong *)0x0)) {
            iVar3 = (**(code **)(*plVar1 + 0x20))();
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406899b0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
                puVar1 = *(uint **)(param_1 + 0x10);
                puVar1[2] = 1;
                *puVar1 = (uint)(iVar4 != 0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140689c70(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    double *pdVar5;
    undefined8 uVar6;
    double *pdVar7;
    ulonglong uVar8;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            uVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 8) + 0x20))();
            plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,uVar1,0);
            if (plVar4 != (longlong *)0x0) {
                pdVar5 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
                pdVar7 = (double *)&DAT_140a12138;
                if (pdVar5 < *(double **)(param_1 + 0x10)) {
                    pdVar7 = pdVar5;
                }
                pdVar5 = (double *)0x0;
                if (*(int *)(pdVar7 + 1) == 3) {
                    LAB_140689d2f:
                    uVar8 = (ulonglong)pdVar5 & 0xffffffff00000000 | (ulonglong)(uint)(int)*pdVar7;
                }
                else {
                    if (*(int *)(pdVar7 + 1) == 4) {
                        pdVar5 = local_res10;
                        iVar2 = FUN_14005ac80((longlong)*pdVar7 + 0x20,pdVar5);
                        if (iVar2 != 0) {
                            local_10 = 3;
                            pdVar7 = &local_18;
                            local_18 = local_res10[0];
                            goto LAB_140689d2f;
                        }
                    }
                    uVar8 = 0;
                }
                plVar4 = (longlong *)(**(code **)(*plVar4 + 0x90))(plVar4,uVar8);
                if (plVar4 != (longlong *)0x0) {
                    uVar6 = (**(code **)(*plVar4 + 0x140))(plVar4);
                    uVar6 = FUN_140432d60(param_1,uVar6);
                    return uVar6;
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                goto LAB_140689d7e;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_140689d7e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140689da0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
                if (iVar4 != 0) {
                    iVar4 = (**(code **)(*plVar6 + 0x78))(plVar6);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar4;
                    goto LAB_140689e3e;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_140689e3e:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140689e60(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
                if (iVar4 != 0) {
                    iVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar4;
                    goto LAB_140689efe;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_140689efe:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140689f20(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x170))(plVar6);
                pdVar1 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar4;
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



undefined8 FUN_140689fd0(longlong param_1)

{
    double *pdVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar5 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + 8) + 0x20))();
            plVar6 = (longlong *)FUN_140498a40(DAT_140c65980,uVar3,0);
            if (plVar6 != (longlong *)0x0) {
                iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
                if (iVar4 != 0) {
                    iVar4 = (**(code **)(*plVar6 + 0x178))(plVar6);
                    pdVar1 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)iVar4;
                    goto LAB_14068a071;
                }
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_14068a071:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14068a090(longlong param_1)

{
    longlong *plVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int iVar6;

    iVar3 = 0;
    iVar6 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.PublicEvent");
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
            (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8), iVar3 = iVar6,
                    plVar1 != (longlong *)0x0)) {
            lVar4 = (**(code **)(*plVar1 + 0x18))();
            lVar4 = FUN_14024b980(*(undefined4 *)(lVar4 + 0x14));
            if (lVar4 != 0) {
                if (DAT_140c658f8 != 0) {
                    puVar5 = (undefined8 *)FUN_140448be0();
                    if (puVar5 != (undefined8 *)0x0) {
                        iVar3 = (**(code **)*puVar5)(puVar5);
                    }
                }
            }
        }
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}

