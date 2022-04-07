//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140720860(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar2 = *(longlong *)(param_1 + 0xd20);
    puVar4 = (undefined8 *)0x0;
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0xd20) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_2[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar5;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0xd20) = puVar4;
    }
    if (lVar2 != 0) {
        // WARNING: Could not recover jumptable at 0x000140720925. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        return;
    }
    return;
}



undefined8 FUN_140720960(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x80))();
    if (lVar1 != 0) {
        return *(undefined8 *)(lVar1 + 0xcc0);
    }
    return 0;
}



undefined8 FUN_1407209f0(longlong param_1,uint param_2)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((uint)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_20 = local_40;
        local_18 = local_38;
        local_res8 = 0x141e405e8;
        iVar1 = FUN_140196f30(&DAT_140c8b130,0x38,&local_res8,(ulonglong)param_2,
                              **(undefined4 **)(param_1 + 8),&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140720b10(longlong *param_1,float *param_2,float *param_3)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    if (param_3 != (float *)0x0) {
        *param_3 = 0.0;
    }
    lVar1 = FUN_14024b980(*(undefined4 *)(*param_1 + 8));
    if (lVar1 != 0) {
        fVar2 = *(float *)(lVar1 + 4);
        fVar3 = *(float *)(lVar1 + 0xc) - *param_2;
        fVar4 = *(float *)(lVar1 + 0x10) - param_2[1];
        fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + 0.0;
        if (fVar3 < fVar2 * fVar2 * fVar2 * fVar2) {
            if (fVar3 < 1e-05) {
                if (param_3 != (float *)0x0) {
                    *param_3 = 1.0;
                }
                return true;
            }
            fVar2 = 1.0 - SQRT(fVar3) / fVar2;
            if (param_3 != (float *)0x0) {
                *param_3 = fVar2;
            }
            return _DAT_140c4b1e8 <= fVar2;
        }
    }
    return false;
}



void FUN_140720c10(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x10)) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
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
        } while (lVar3 != *(longlong *)(param_1 + 0x10));
    }
    FUN_140008410(param_1 + 8);
    FUN_140008410(param_1 + 8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140720cc0(longlong *param_1)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    uint uVar8;
    int iVar9;
    longlong lVar10;
    longlong *plVar11;
    undefined *puVar12;
    longlong **pplVar13;
    ulonglong uVar14;
    longlong lVar15;
    longlong *plVar16;
    undefined4 *puVar17;
    longlong lVar18;
    longlong lVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    char *pcVar22;
    char *pcVar23;
    ulonglong *puVar24;
    uint uVar25;
    bool bVar26;
    ulonglong local_res8;
    ulonglong local_res10;
    ulonglong local_res18;
    undefined4 uStack116;
    undefined4 uStack100;
    undefined4 uStack84;
    uint local_48;
    undefined4 uStack68;
    undefined8 local_40;

    uVar25 = 0;
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c65148 == 0) {
            iVar9 = FUN_14021cf60();
            if (iVar9 < 0) {
                uVar8 = 0;
            }
            else {
                uVar8 = (**(code **)(*DAT_140c64720 + 0x28))();
            }
        }
    }
    else {
        uVar8 = (*DAT_140c63838)(&PTR_u_PathExplorerArea_140a6bbe0);
    }
    if (uVar8 != 0) {
        do {
            plVar16 = (longlong *)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c65148 == 0) && (iVar9 = FUN_14021cf60(), -1 < iVar9)) {
                    lVar10 = (**(code **)(*DAT_140c64720 + 0x20))();
                    goto LAB_140720d74;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_PathExplorerArea_140a6bbe0);
                LAB_140720d74:
                if (lVar10 != 0) {
                    plVar11 = (longlong *)FUN_14018b280(0x28);
                    if (plVar11 != (longlong *)0x0) {
                        *plVar11 = lVar10;
                        puVar12 = (undefined *)FUN_14018b280(0x30);
                        plVar11[2] = (longlong)puVar12;
                        plVar11[3] = 0;
                        *puVar12 = 0;
                        *(undefined8 *)(plVar11[2] + 8) = 0;
                        *(longlong *)(plVar11[2] + 0x10) = plVar11[2];
                        *(longlong *)(plVar11[2] + 0x18) = plVar11[2];
                        plVar16 = plVar11;
                    }
                    pplVar13 = (longlong **)FUN_140055be0(param_1 + 1);
                    *pplVar13 = plVar16;
                }
            }
            uVar25 = uVar25 + 1;
        } while (uVar25 < uVar8);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar25 = 0;
        if ((_DAT_140c63a20 == 0) && (iVar9 = FUN_14021dc20(), -1 < iVar9)) {
            uVar25 = (**(code **)(*DAT_140c64bf8 + 0x28))();
        }
    }
    else {
        uVar25 = (*DAT_140c63838)(&PTR_u_PathExplorerNode_140a6bc88);
    }
    if (uVar25 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63a20 == 0) && (iVar9 = FUN_14021dc20(), -1 < iVar9)) {
                    lVar10 = (**(code **)(*DAT_140c64bf8 + 0x20))();
                    goto LAB_140720e8b;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_PathExplorerNode_140a6bc88);
                LAB_140720e8b:
                if (lVar10 != 0) {
                    uVar3 = param_1[2];
                    uVar21 = uVar3;
                    if (*(ulonglong *)(uVar3 + 8) != 0) {
                        uVar20 = *(ulonglong *)(uVar3 + 8);
                        do {
                            if (*(uint *)(uVar20 + 0x20) < *(uint *)(lVar10 + 4)) {
                                uVar14 = *(ulonglong *)(uVar20 + 0x18);
                            }
                            else {
                                uVar14 = *(ulonglong *)(uVar20 + 0x10);
                                uVar21 = uVar20;
                            }
                            uVar20 = uVar14;
                        } while (uVar14 != 0);
                    }
                    if ((uVar21 == uVar3) || (*(uint *)(lVar10 + 4) < *(uint *)(uVar21 + 0x20))) {
                        local_res10 = uVar3;
                        puVar24 = &local_res10;
                    }
                    else {
                        local_res8 = uVar21;
                        puVar24 = &local_res8;
                    }
                    uVar21 = *puVar24;
                    if (uVar21 != uVar3) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c63e98 != 0) || (iVar9 = FUN_14024b720(), iVar9 < 0)) goto LAB_140720f80;
                            lVar15 = (**(code **)(*DAT_140c65388 + 0x18))();
                        }
                        else {
                            lVar15 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228);
                        }
                        if ((lVar15 != 0) && (1e-05 < *(float *)(lVar15 + 4))) {
                            lVar15 = *(longlong *)(uVar21 + 0x28);
                            uVar1 = *(undefined4 *)(lVar15 + 0x18);
                            plVar16 = (longlong *)FUN_14018b280(0x10);
                            if (plVar16 == (longlong *)0x0) {
                                plVar16 = (longlong *)0x0;
                            }
                            else {
                                *plVar16 = lVar10;
                                *(undefined4 *)(plVar16 + 1) = uVar1;
                            }
                            pplVar13 = (longlong **)FUN_140055be0(lVar15 + 8);
                            *pplVar13 = plVar16;
                        }
                    }
                }
            }
            LAB_140720f80:
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar25);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar8 = 0;
        if ((_DAT_140c6467c == 0) && (iVar9 = FUN_14021d3a0(), -1 < iVar9)) {
            uVar8 = (**(code **)(*DAT_140c64f68 + 0x28))();
        }
    }
    else {
        uVar8 = (*DAT_140c63838)(&PTR_u_PathExplorerDoor_140a6bc18);
    }
    uVar25 = 0;
    if (uVar8 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c6467c == 0) && (iVar9 = FUN_14021d3a0(), -1 < iVar9)) {
                    puVar17 = (undefined4 *)(**(code **)(*DAT_140c64f68 + 0x20))();
                    goto LAB_14072102c;
                }
            }
            else {
                puVar17 = (undefined4 *)(*DAT_140c63848)();
                LAB_14072102c:
                if ((puVar17 != (undefined4 *)0x0) && (uVar2 = puVar17[1], uVar2 != 0)) {
                    lVar10 = param_1[10];
                    local_res8 = CONCAT44(*puVar17,uVar2);
                    lVar15 = lVar10;
                    lVar4 = *(longlong *)(lVar10 + 8);
                    while (lVar4 != 0) {
                        lVar15 = lVar4;
                        if (uVar2 < *(uint *)(lVar4 + 0x20)) {
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if ((lVar15 == lVar10) || (uVar2 < *(uint *)(lVar15 + 0x20))) {
                        lVar10 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar10 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar10 + 0x20) = local_res8;
                        }
                        *(longlong *)(lVar15 + 0x10) = lVar10;
                        lVar4 = param_1[10];
                        if (lVar15 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar10;
                            *(longlong *)(param_1[10] + 0x18) = lVar10;
                        }
                        else if (lVar15 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar10;
                        }
                    }
                    else {
                        lVar10 = FUN_14018b280(0x28,0);
                        if ((ulonglong *)(lVar10 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar10 + 0x20) = local_res8;
                        }
                        *(longlong *)(lVar15 + 0x18) = lVar10;
                        if (lVar15 == *(longlong *)(param_1[10] + 0x18)) {
                            *(longlong *)(param_1[10] + 0x18) = lVar10;
                        }
                    }
                    *(longlong *)(lVar10 + 8) = lVar15;
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    FUN_1400081c0();
                    param_1[0xb] = param_1[0xb] + 1;
                }
            }
            uVar25 = uVar25 + 1;
        } while (uVar25 < uVar8);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar25 = 0;
        if ((_DAT_140c653e4 == 0) && (iVar9 = FUN_14021d7e0(), -1 < iVar9)) {
            uVar25 = (**(code **)(*DAT_140c63bf8 + 0x28))();
        }
    }
    else {
        uVar25 = (*DAT_140c63838)(&PTR_u_PathExplorerDoorEntrance_140a6bc50);
    }
    if (uVar25 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c653e4 == 0) && (iVar9 = FUN_14021d7e0(), -1 < iVar9)) {
                    lVar10 = (**(code **)(*DAT_140c63bf8 + 0x20))();
                    goto LAB_1407211bc;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_PathExplorerDoorEntrance_140a6bc50);
                LAB_1407211bc:
                if (lVar10 != 0) {
                    lVar18 = (**(code **)(*param_1 + 0x20))(param_1,lVar10,1);
                    lVar19 = (**(code **)(*param_1 + 0x20))(param_1,lVar10,0);
                    lVar15 = param_1[6];
                    uVar2 = *(uint *)(*(longlong *)(lVar18 + 8) + 0x14);
                    lVar4 = lVar15;
                    lVar5 = *(longlong *)(lVar15 + 8);
                    while (lVar5 != 0) {
                        lVar4 = lVar5;
                        if (uVar2 < *(uint *)(lVar5 + 0x20)) {
                            lVar5 = *(longlong *)(lVar5 + 0x10);
                        }
                        else {
                            lVar5 = *(longlong *)(lVar5 + 0x18);
                        }
                    }
                    if ((lVar4 == lVar15) || (uVar2 < *(uint *)(lVar4 + 0x20))) {
                        lVar15 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack84,uVar2);
                            *(longlong *)(lVar15 + 0x28) = lVar18;
                        }
                        *(longlong *)(lVar4 + 0x10) = lVar15;
                        lVar5 = param_1[6];
                        if (lVar4 == lVar5) {
                            *(longlong *)(lVar5 + 8) = lVar15;
                            *(longlong *)(param_1[6] + 0x18) = lVar15;
                        }
                        else if (lVar4 == *(longlong *)(lVar5 + 0x10)) {
                            *(longlong *)(lVar5 + 0x10) = lVar15;
                        }
                    }
                    else {
                        lVar15 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack84,uVar2);
                            *(longlong *)(lVar15 + 0x28) = lVar18;
                        }
                        *(longlong *)(lVar4 + 0x18) = lVar15;
                        if (lVar4 == *(longlong *)(param_1[6] + 0x18)) {
                            *(longlong *)(param_1[6] + 0x18) = lVar15;
                        }
                    }
                    *(longlong *)(lVar15 + 8) = lVar4;
                    *(undefined8 *)(lVar15 + 0x10) = 0;
                    *(undefined8 *)(lVar15 + 0x18) = 0;
                    FUN_1400081c0(lVar15,param_1[6] + 8);
                    param_1[7] = param_1[7] + 1;
                    lVar15 = param_1[6];
                    local_48 = *(uint *)(*(longlong *)(lVar19 + 8) + 0x14);
                    lVar4 = lVar15;
                    lVar5 = *(longlong *)(lVar15 + 8);
                    while (lVar5 != 0) {
                        lVar4 = lVar5;
                        if (local_48 < *(uint *)(lVar5 + 0x20)) {
                            lVar5 = *(longlong *)(lVar5 + 0x10);
                        }
                        else {
                            lVar5 = *(longlong *)(lVar5 + 0x18);
                        }
                    }
                    if ((lVar4 == lVar15) || (local_48 < *(uint *)(lVar4 + 0x20))) {
                        lVar15 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack68,local_48);
                            *(longlong *)(lVar15 + 0x28) = lVar19;
                        }
                        *(longlong *)(lVar4 + 0x10) = lVar15;
                        lVar5 = param_1[6];
                        if (lVar4 == lVar5) {
                            *(longlong *)(lVar5 + 8) = lVar15;
                            *(longlong *)(param_1[6] + 0x18) = lVar15;
                        }
                        else if (lVar4 == *(longlong *)(lVar5 + 0x10)) {
                            *(longlong *)(lVar5 + 0x10) = lVar15;
                        }
                    }
                    else {
                        lVar15 = FUN_14018b280(0x30,0);
                        if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack68,local_48);
                            *(longlong *)(lVar15 + 0x28) = lVar19;
                        }
                        *(longlong *)(lVar4 + 0x18) = lVar15;
                        if (lVar4 == *(longlong *)(param_1[6] + 0x18)) {
                            *(longlong *)(param_1[6] + 0x18) = lVar15;
                        }
                    }
                    *(longlong *)(lVar15 + 8) = lVar4;
                    *(undefined8 *)(lVar15 + 0x10) = 0;
                    *(undefined8 *)(lVar15 + 0x18) = 0;
                    FUN_1400081c0();
                    param_1[7] = param_1[7] + 1;
                    uVar2 = *(uint *)(lVar10 + 0xc);
                    if (uVar2 != 0) {
                        pcVar6 = (char *)param_1[0xe];
                        bVar26 = true;
                        pcVar7 = pcVar6;
                        pcVar23 = *(char **)(pcVar6 + 8);
                        while (pcVar23 != (char *)0x0) {
                            bVar26 = uVar2 < *(uint *)(pcVar23 + 0x20);
                            pcVar7 = pcVar23;
                            if (bVar26) {
                                pcVar23 = *(char **)(pcVar23 + 0x10);
                            }
                            else {
                                pcVar23 = *(char **)(pcVar23 + 0x18);
                            }
                        }
                        pcVar23 = pcVar7;
                        if (bVar26) {
                            if (pcVar7 != *(char **)(pcVar6 + 0x10)) {
                                if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
                                    pcVar23 = *(char **)(pcVar7 + 0x18);
                                }
                                else {
                                    pcVar23 = *(char **)(pcVar7 + 0x10);
                                    if (pcVar23 == (char *)0x0) {
                                        pcVar23 = *(char **)(pcVar7 + 8);
                                        pcVar22 = pcVar23;
                                        if (pcVar7 == *(char **)(pcVar23 + 0x10)) {
                                            do {
                                                pcVar23 = *(char **)(pcVar22 + 8);
                                                bVar26 = pcVar22 == *(char **)(pcVar23 + 0x10);
                                                pcVar22 = pcVar23;
                                            } while (bVar26);
                                        }
                                    }
                                    else {
                                        for (pcVar22 = *(char **)(pcVar23 + 0x18); pcVar22 != (char *)0x0;
                                             pcVar22 = *(char **)(pcVar22 + 0x18)) {
                                            pcVar23 = pcVar22;
                                        }
                                    }
                                }
                                goto LAB_14072151d;
                            }
                            if ((pcVar7 == pcVar6) || (uVar2 < *(uint *)(pcVar7 + 0x20))) goto LAB_140721457;
                            LAB_140721422:
                            lVar15 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack116,uVar2);
                                *(longlong *)(lVar15 + 0x28) = lVar18;
                            }
                            *(longlong *)(pcVar7 + 0x18) = lVar15;
                            if (pcVar7 == *(char **)(param_1[0xe] + 0x18)) {
                                *(longlong *)(param_1[0xe] + 0x18) = lVar15;
                            }
                        }
                        else {
                            LAB_14072151d:
                            if (uVar2 <= *(uint *)(pcVar23 + 0x20)) goto LAB_140721546;
                            if ((pcVar7 != pcVar6) && (*(uint *)(pcVar7 + 0x20) <= uVar2)) goto LAB_140721422;
                            LAB_140721457:
                            lVar15 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack116,uVar2);
                                *(longlong *)(lVar15 + 0x28) = lVar18;
                            }
                            *(longlong *)(pcVar7 + 0x10) = lVar15;
                            pcVar6 = (char *)param_1[0xe];
                            if (pcVar7 == pcVar6) {
                                *(longlong *)(pcVar6 + 8) = lVar15;
                                *(longlong *)(param_1[0xe] + 0x18) = lVar15;
                            }
                            else if (pcVar7 == *(char **)(pcVar6 + 0x10)) {
                                *(longlong *)(pcVar6 + 0x10) = lVar15;
                            }
                        }
                        *(char **)(lVar15 + 8) = pcVar7;
                        *(undefined8 *)(lVar15 + 0x10) = 0;
                        *(undefined8 *)(lVar15 + 0x18) = 0;
                        FUN_1400081c0();
                        param_1[0xf] = param_1[0xf] + 1;
                    }
                    LAB_140721546:
                    uVar2 = *(uint *)(lVar10 + 0x10);
                    if (uVar2 != 0) {
                        pcVar6 = (char *)param_1[0xe];
                        bVar26 = true;
                        pcVar7 = pcVar6;
                        pcVar23 = *(char **)(pcVar6 + 8);
                        while (pcVar23 != (char *)0x0) {
                            bVar26 = uVar2 < *(uint *)(pcVar23 + 0x20);
                            pcVar7 = pcVar23;
                            if (bVar26) {
                                pcVar23 = *(char **)(pcVar23 + 0x10);
                            }
                            else {
                                pcVar23 = *(char **)(pcVar23 + 0x18);
                            }
                        }
                        pcVar23 = pcVar7;
                        if (bVar26) {
                            if (pcVar7 != *(char **)(pcVar6 + 0x10)) {
                                if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
                                    pcVar23 = *(char **)(pcVar7 + 0x18);
                                }
                                else {
                                    pcVar23 = *(char **)(pcVar7 + 0x10);
                                    if (pcVar23 == (char *)0x0) {
                                        pcVar23 = *(char **)(pcVar7 + 8);
                                        pcVar22 = pcVar23;
                                        if (pcVar7 == *(char **)(pcVar23 + 0x10)) {
                                            do {
                                                pcVar23 = *(char **)(pcVar22 + 8);
                                                bVar26 = pcVar22 == *(char **)(pcVar23 + 0x10);
                                                pcVar22 = pcVar23;
                                            } while (bVar26);
                                        }
                                    }
                                    else {
                                        for (pcVar22 = *(char **)(pcVar23 + 0x18); pcVar22 != (char *)0x0;
                                             pcVar22 = *(char **)(pcVar22 + 0x18)) {
                                            pcVar23 = pcVar22;
                                        }
                                    }
                                }
                                goto LAB_1407216ad;
                            }
                            if ((pcVar7 == pcVar6) || (uVar2 < *(uint *)(pcVar7 + 0x20))) goto LAB_1407215e7;
                            LAB_1407215b2:
                            lVar10 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack100,uVar2);
                                *(longlong *)(lVar10 + 0x28) = lVar19;
                            }
                            *(longlong *)(pcVar7 + 0x18) = lVar10;
                            if (pcVar7 == *(char **)(param_1[0xe] + 0x18)) {
                                *(longlong *)(param_1[0xe] + 0x18) = lVar10;
                            }
                        }
                        else {
                            LAB_1407216ad:
                            if (uVar2 <= *(uint *)(pcVar23 + 0x20)) goto LAB_1407216d6;
                            if ((pcVar7 != pcVar6) && (*(uint *)(pcVar7 + 0x20) <= uVar2)) goto LAB_1407215b2;
                            LAB_1407215e7:
                            lVar10 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack100,uVar2);
                                *(longlong *)(lVar10 + 0x28) = lVar19;
                            }
                            *(longlong *)(pcVar7 + 0x10) = lVar10;
                            pcVar6 = (char *)param_1[0xe];
                            if (pcVar7 == pcVar6) {
                                *(longlong *)(pcVar6 + 8) = lVar10;
                                *(longlong *)(param_1[0xe] + 0x18) = lVar10;
                            }
                            else if (pcVar7 == *(char **)(pcVar6 + 0x10)) {
                                *(longlong *)(pcVar6 + 0x10) = lVar10;
                            }
                        }
                        *(char **)(lVar10 + 8) = pcVar7;
                        *(undefined8 *)(lVar10 + 0x10) = 0;
                        *(undefined8 *)(lVar10 + 0x18) = 0;
                        FUN_1400081c0();
                        param_1[0xf] = param_1[0xf] + 1;
                    }
                }
            }
            LAB_1407216d6:
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar25);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar25 = 0;
        if ((_DAT_140c63f78 == 0) && (iVar9 = FUN_14021e8e0(), -1 < iVar9)) {
            uVar25 = (**(code **)(*DAT_140c64418 + 0x28))();
        }
    }
    else {
        uVar25 = (*DAT_140c63838)(&PTR_u_PathExplorerScavengerHunt_140a6bd30);
    }
    if (uVar25 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63f78 == 0) && (iVar9 = FUN_14021e8e0(), -1 < iVar9)) {
                    puVar17 = (undefined4 *)(**(code **)(*DAT_140c64418 + 0x20))();
                    goto LAB_140721789;
                }
            }
            else {
                puVar17 = (undefined4 *)(*DAT_140c63848)(&PTR_u_PathExplorerScavengerHunt_140a6bd30);
                LAB_140721789:
                if (((puVar17 != (undefined4 *)0x0) && (puVar17[1] != 0)) &&
                    (uVar2 = puVar17[10], uVar2 != 0)) {
                    uVar3 = param_1[0x1a];
                    uVar20 = uVar3;
                    uVar21 = *(ulonglong *)(uVar3 + 8);
                    while (uVar21 != 0) {
                        if (*(uint *)(uVar21 + 0x20) < uVar2) {
                            uVar21 = *(ulonglong *)(uVar21 + 0x18);
                        }
                        else {
                            uVar20 = uVar21;
                            uVar21 = *(ulonglong *)(uVar21 + 0x10);
                        }
                    }
                    if ((uVar20 == uVar3) || (uVar2 < *(uint *)(uVar20 + 0x20))) {
                        local_res8 = (ulonglong)uVar2;
                        local_res10 = uVar20;
                        FUN_140032b30();
                        uVar20 = local_res18;
                    }
                    *(undefined4 *)(uVar20 + 0x24) = *puVar17;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar25);
    }
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar25 = 0;
        if ((_DAT_140c65668 == 0) && (iVar9 = FUN_14021e060(), -1 < iVar9)) {
            uVar25 = (**(code **)(*DAT_140c64cd8 + 0x28))();
        }
    }
    else {
        uVar25 = (*DAT_140c63838)(&PTR_u_PathExplorerPowerMap_140a6bcc0,DAT_140c63858);
    }
    if (uVar25 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c65668 == 0) && (iVar9 = FUN_14021e060(), -1 < iVar9)) {
                    lVar10 = (**(code **)(*DAT_140c64cd8 + 0x20))(DAT_140c64cd8,uVar8);
                    goto LAB_1407218aa;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_PathExplorerPowerMap_140a6bcc0,uVar8);
                LAB_1407218aa:
                if (lVar10 != 0) {
                    lVar10 = (**(code **)(*param_1 + 0x38))(param_1);
                    uVar3 = param_1[0x1e];
                    uVar2 = **(uint **)(lVar10 + 8);
                    uVar20 = uVar3;
                    uVar21 = *(ulonglong *)(uVar3 + 8);
                    while (uVar21 != 0) {
                        if (*(uint *)(uVar21 + 0x20) < uVar2) {
                            uVar21 = *(ulonglong *)(uVar21 + 0x18);
                        }
                        else {
                            uVar20 = uVar21;
                            uVar21 = *(ulonglong *)(uVar21 + 0x10);
                        }
                    }
                    if ((uVar20 == uVar3) || (uVar2 < *(uint *)(uVar20 + 0x20))) {
                        local_40 = 0;
                        local_res8 = uVar20;
                        local_48 = uVar2;
                        FUN_140055c60(param_1 + 0x1d,&local_res10,&local_res8,&local_48);
                        uVar20 = local_res10;
                    }
                    *(longlong *)(uVar20 + 0x28) = lVar10;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar25);
    }
    lVar10 = *(longlong *)(param_1[2] + 0x10);
    while (lVar10 != param_1[2]) {
        lVar15 = *(longlong *)(lVar10 + 0x18);
        if (lVar15 == 0) {
            lVar15 = *(longlong *)(lVar10 + 8);
            if (lVar10 == *(longlong *)(lVar15 + 0x18)) {
                do {
                    lVar10 = lVar15;
                    lVar15 = *(longlong *)(lVar10 + 8);
                } while (lVar10 == *(longlong *)(lVar15 + 0x18));
            }
            if (*(longlong *)(lVar10 + 0x18) != lVar15) {
                lVar10 = lVar15;
            }
        }
        else {
            for (lVar4 = *(longlong *)(lVar15 + 0x10); lVar10 = lVar15, lVar4 != 0;
                 lVar4 = *(longlong *)(lVar4 + 0x10)) {
                lVar15 = lVar4;
            }
        }
    }
    return 0;
}



undefined8 FUN_140721ef0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65978 + 0x10);
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



undefined8 FUN_140721f50(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65978 + 0x90);
    local_res8 = lVar1;
    for (lVar2 = *(longlong *)(lVar1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        lVar1 = *(longlong *)(local_res8 + 0x30);
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
    }
    return 0;
}



undefined8 FUN_140722000(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65978 + 0xb0);
    local_res8 = lVar1;
    for (lVar2 = *(longlong *)(lVar1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        lVar1 = *(longlong *)(local_res8 + 0x30);
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
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x000140722373)
// WARNING: Removing unreachable block (ram,0x000140722380)
// WARNING: Removing unreachable block (ram,0x0001407223a2)

void FUN_1407220b0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    *param_1 = &PTR_FUN_140b672b0;
    lVar5 = *(longlong *)(param_1[2] + 0x10);
    if (lVar5 != param_1[2]) {
        do {
            lVar4 = *(longlong *)(lVar5 + 0x28);
            if (lVar4 != 0) {
                FUN_140720c10(lVar4);
                FUN_14018b900(lVar4,0);
            }
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
                for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar4 = lVar3;
                }
            }
        } while (lVar5 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    lVar5 = *(longlong *)(param_1[6] + 0x10);
    if (lVar5 != param_1[6]) {
        do {
            puVar1 = *(undefined8 **)(lVar5 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
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
                for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar4 = lVar3;
                }
            }
        } while (lVar5 != param_1[6]);
    }
    if (param_1[7] != 0) {
        lVar5 = *(longlong *)(param_1[6] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    if (param_1[0xf] != 0) {
        lVar5 = *(longlong *)(param_1[0xe] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    lVar5 = *(longlong *)(param_1[0x1e] + 0x10);
    if (lVar5 != param_1[0x1e]) {
        do {
            puVar1 = *(undefined8 **)(lVar5 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
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
                for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar4 = lVar3;
                }
            }
        } while (lVar5 != param_1[0x1e]);
    }
    if (param_1[0x1f] != 0) {
        lVar5 = *(longlong *)(param_1[0x1e] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0x1d,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
        *(undefined8 *)(param_1[0x1e] + 8) = 0;
        *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
        param_1[0x1f] = 0;
    }
    FUN_14018b900(param_1[0x1e],0);
    if (param_1[0x1b] != 0) {
        lVar5 = *(longlong *)(param_1[0x1a] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0x19,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
        *(undefined8 *)(param_1[0x1a] + 8) = 0;
        *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
        param_1[0x1b] = 0;
    }
    FUN_14018b900(param_1[0x1a],0);
    if (param_1[0x17] != 0) {
        lVar5 = *(longlong *)(param_1[0x16] + 8);
        while (lVar5 != 0) {
            FUN_140032150(param_1 + 0x15,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            if (*(longlong *)(lVar5 + 0x38) != 0) {
                lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 8);
                while (lVar3 != 0) {
                    FUN_1400083b0(lVar5 + 0x28,*(undefined8 *)(lVar3 + 0x18));
                    lVar2 = *(longlong *)(lVar3 + 0x10);
                    FUN_14018b900(lVar3,0);
                    lVar3 = lVar2;
                }
                *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10) = *(longlong *)(lVar5 + 0x30);
                *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x18) = *(longlong *)(lVar5 + 0x30);
                *(undefined8 *)(lVar5 + 0x38) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar5 + 0x30),0);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
        *(undefined8 *)(param_1[0x16] + 8) = 0;
        *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
        param_1[0x17] = 0;
    }
    FUN_14018b900(param_1[0x16],0);
    if (param_1[0x13] != 0) {
        lVar5 = *(longlong *)(param_1[0x12] + 8);
        while (lVar5 != 0) {
            FUN_140032150(param_1 + 0x11,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            if (*(longlong *)(lVar5 + 0x38) != 0) {
                lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 8);
                while (lVar3 != 0) {
                    FUN_1400083b0(lVar5 + 0x28,*(undefined8 *)(lVar3 + 0x18));
                    lVar2 = *(longlong *)(lVar3 + 0x10);
                    FUN_14018b900(lVar3,0);
                    lVar3 = lVar2;
                }
                *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10) = *(longlong *)(lVar5 + 0x30);
                *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x18) = *(longlong *)(lVar5 + 0x30);
                *(undefined8 *)(lVar5 + 0x38) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar5 + 0x30),0);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar5 = *(longlong *)(param_1[0xe] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar5 = *(longlong *)(param_1[10] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar5 = *(longlong *)(param_1[6] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar5 = *(longlong *)(param_1[2] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 * FUN_1407227d0(undefined8 param_1,undefined8 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x30);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b74520;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[1] = param_2;
    }
    FUN_140484530(puVar1[1],*(undefined4 *)(puVar1[1] + 4),puVar1);
    return puVar1;
}



undefined8 FUN_140722830(undefined8 param_1,longlong param_2)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong local_res8;

    if ((param_2 == 0) || (puVar2 = *(uint **)(param_2 + 0x18), puVar2 == (uint *)0x0)) {
        return 0x65;
    }
    lVar3 = *(longlong *)(DAT_140c65978 + 0x70);
    local_res8 = lVar3;
    if (*(longlong *)(lVar3 + 8) != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
        do {
            if (*(uint *)(lVar4 + 0x20) < *puVar2) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 == lVar3) || (*puVar2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if (local_res8 == lVar3) {
        uVar6 = 0x65;
        if (puVar2[1] == 4) {
            uVar6 = 3;
        }
        return uVar6;
    }
    if ((*(int *)(*(longlong *)(local_res8 + 0x28) + 0x10) != 0) &&
        (((DAT_140c65970 == 0 || (*(int *)(DAT_140c65970 + 8) != 3)) ||
          ((iVar1 = *(int *)(*(longlong *)(*(longlong *)(local_res8 + 0x28) + 8) + 4), iVar1 != 1 &&
                                                                                       ((iVar1 != 2 || ((*(int *)(param_2 + 0x1b8) != 3 && (*(int *)(param_2 + 0x1b8) != 0))))))))))
    {
        return 0x65;
    }
    return 2;
}



undefined8 FUN_140722930(undefined8 param_1,longlong param_2)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    int iVar7;
    longlong local_res8;

    if ((param_2 == 0) || (puVar2 = *(uint **)(param_2 + 0x18), puVar2 == (uint *)0x0)) {
        return 0x65;
    }
    lVar3 = *(longlong *)(DAT_140c65978 + 0x70);
    local_res8 = lVar3;
    if (*(longlong *)(lVar3 + 8) != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
        do {
            if (*(uint *)(lVar4 + 0x20) < *puVar2) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 == lVar3) || (*puVar2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if (local_res8 == lVar3) {
        uVar6 = 0x65;
        if (puVar2[1] == 4) {
            uVar6 = 3;
        }
        return uVar6;
    }
    iVar1 = *(int *)(*(longlong *)(local_res8 + 0x28) + 0x10);
    lVar3 = *(longlong *)(*(longlong *)(local_res8 + 0x28) + 8);
    if (iVar1 == 0) {
        iVar7 = *(int *)(lVar3 + 8);
    }
    else {
        iVar7 = *(int *)(lVar3 + 4);
    }
    if ((iVar7 != 0) &&
        ((iVar1 == 0 || ((*(int *)(lVar3 + 4) == 1 && (*(int *)(param_2 + 0x1b8) == 4)))))) {
        return 3;
    }
    return 0x65;
}



void FUN_140722a30(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8b128,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140722b02. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        FUN_140008410(lVar2 + 0x28);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x30),0);
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_140722b60(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8b12c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140722c32. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        FUN_140008410(lVar2 + 0x28);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x30),0);
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_140722c90(undefined8 param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res10;
    uint local_28 [2];
    undefined8 local_20;
    undefined local_18 [16];

    lVar2 = FUN_140723600();
    lVar3 = FUN_140211280();
    if (lVar3 == 0) {
        local_28[0] = 0;
    }
    else {
        local_28[0] = *(uint *)(lVar3 + 0x10);
    }
    lVar3 = *(longlong *)(lVar2 + 8);
    local_res10 = lVar3;
    lVar1 = *(longlong *)(lVar3 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < local_28[0]) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res10 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res10 == lVar3) || (local_28[0] < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar3;
    }
    if (local_res10 == lVar3) {
        local_20 = param_2;
        FUN_140055f80(lVar2,local_18,local_28);
    }
    return;
}



bool FUN_140722d30(longlong param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;

    if ((*(longlong *)(param_1 + 0x60) == 0) && (iVar2 = FUN_1407234a0(), iVar2 != 0)) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
        if (lVar1 != 0) {
            if ((DAT_140dc4ce0 & 1) == 0) {
                DAT_140dc4ce0 = DAT_140dc4ce0 | 1;
                lVar3 = FUN_140200220(499);
                if (lVar3 == 0) {
                    DAT_140dc4ce4 = 0.0;
                }
                else {
                    DAT_140dc4ce4 = *(float *)(lVar3 + 0x18);
                }
            }
            if ((DAT_140dc4ce0 & 2) == 0) {
                DAT_140dc4ce0 = DAT_140dc4ce0 | 2;
                lVar3 = FUN_140200220(500);
                if (lVar3 == 0) {
                    DAT_140dc4ce8 = 0.0;
                }
                else {
                    DAT_140dc4ce8 = *(float *)(lVar3 + 0x18);
                }
            }
            if ((DAT_140dc4ce0 & 4) == 0) {
                DAT_140dc4ce0 = DAT_140dc4ce0 | 4;
                lVar3 = FUN_140200220(0x1f7);
                if (lVar3 == 0) {
                    DAT_140dc4cec = 0.0;
                }
                else {
                    DAT_140dc4cec = *(float *)(lVar3 + 0x18);
                }
            }
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 8);
            fVar5 = DAT_140dc4ce4;
            if ((iVar2 != 1) && (fVar5 = DAT_140dc4cec, iVar2 == 2)) {
                fVar5 = DAT_140dc4ce8;
            }
            fVar4 = *(float *)(lVar1 + 0x11e0) - *(float *)(param_2 + 0x11e0);
            return fVar4 * fVar4 + 0.0 <= fVar5 * fVar5;
        }
        return false;
    }
    return false;
}



int FUN_140722ed0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
        if ((ulonglong)((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x28) <=
            (ulonglong)*(uint *)(param_1 + 0x40)) {
            *(undefined4 *)(param_1 + 0x40) = 0;
            if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 2 !=
                (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x28) {
                FUN_1402d4aa0(param_1 + 0x20);
                lVar3 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8);
                uVar5 = 0;
                lVar2 = lVar3 >> 0x3f;
                if (lVar3 / 0x28 + lVar2 != lVar2) {
                    uVar6 = 0;
                    do {
                        *(uint *)(*(longlong *)(param_1 + 0x28) + uVar6 * 4) = uVar5;
                        uVar5 = uVar5 + 1;
                        uVar6 = (ulonglong)uVar5;
                    } while (uVar6 < (ulonglong)
                            ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x28));
                }
            }
        }
        if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_1 + 0x30)) {
            if ((*(byte *)(*(longlong *)(param_1 + 0x48) + 4) & 1) == 0) {
                iVar1 = FUN_1407232a0(param_1);
            }
            else {
                iVar1 = FUN_140723060();
            }
            if (iVar1 != 0) {
                iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xc);
                if (iVar4 == 0) {
                    lVar2 = FUN_140200220(0x1f5);
                    if (lVar2 == 0) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = *(int *)(lVar2 + 4);
                    }
                }
                local_28[0] = 0;
                local_18 = FUN_140001b70;
                local_10 = 0;
                local_20 = param_1;
                FUN_140195960(param_1 + 0x50,iVar4,local_28,4);
            }
            return iVar1;
        }
    }
    return 0;
}



undefined4 FUN_140723060(longlong param_1,longlong param_2)

{
    uint uVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    longlong *plVar12;
    ulonglong uVar13;
    longlong lVar14;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    longlong local_48 [2];

    if (*(longlong *)(param_2 + 0x18) == 0) {
        return 0;
    }
    lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar3 == 0) {
        return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xe0);
    puVar4 = *(undefined4 **)(param_1 + 0x28);
    puVar5 = *(undefined4 **)(param_1 + 0x30);
    if ((puVar4 != puVar5) && (puVar10 = puVar4 + 1, puVar10 != puVar5)) {
        lVar14 = (longlong)puVar10 - (longlong)puVar4;
        do {
            iVar7 = rand();
            puVar11 = puVar10 + 1;
            lVar8 = lVar14 >> 2;
            lVar14 = lVar14 + 4;
            lVar8 = (longlong)iVar7 % (lVar8 + 1);
            uVar2 = *puVar10;
            *puVar10 = puVar4[lVar8];
            puVar4[lVar8] = uVar2;
            puVar10 = puVar11;
        } while (puVar11 != puVar5);
    }
    lVar14 = *(longlong *)(param_1 + 8);
    uVar13 = 0;
    lVar9 = *(longlong *)(param_1 + 0x10) - lVar14;
    lVar8 = lVar9 >> 0x3f;
    if (lVar9 / 0x28 + lVar8 != lVar8) {
        do {
            lVar14 = *(longlong *)
                    (lVar14 + 8 +
                     (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + uVar13 * 4) * 0x28);
            lVar8 = *(longlong *)(lVar14 + 8);
            lVar6 = lVar14;
            lVar9 = lVar8;
            while (lVar9 != 0) {
                if (*(uint *)(lVar9 + 0x20) < uVar1) {
                    lVar9 = *(longlong *)(lVar9 + 0x18);
                }
                else {
                    lVar6 = lVar9;
                    lVar9 = *(longlong *)(lVar9 + 0x10);
                }
            }
            if ((lVar6 == lVar14) || (uVar1 < *(uint *)(lVar6 + 0x20))) {
                local_res18 = lVar14;
                plVar12 = &local_res18;
            }
            else {
                local_res10 = lVar6;
                plVar12 = &local_res10;
            }
            lVar9 = *plVar12;
            if ((uVar1 == 0) || (lVar6 = lVar14, lVar9 != lVar14)) {
                LAB_14072320a:
                iVar7 = *(int *)(*(longlong *)(lVar9 + 0x28) + 0x10);
                if ((iVar7 == 0) ||
                    (iVar7 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar3,iVar7,param_2,0,0),
                            iVar7 != 0)) {
                    return *(undefined4 *)(*(longlong *)(lVar9 + 0x28) + 0xc);
                }
            }
            else {
                for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar6 = lVar8;
                }
                if ((lVar6 == lVar14) || (*(int *)(lVar6 + 0x20) != 0)) {
                    local_48[0] = lVar14;
                    plVar12 = local_48;
                }
                else {
                    plVar12 = &local_res20;
                    local_res20 = lVar6;
                }
                lVar9 = *plVar12;
                if (lVar9 != lVar14) goto LAB_14072320a;
            }
            lVar14 = *(longlong *)(param_1 + 8);
            uVar13 = (ulonglong)((int)uVar13 + 1);
        } while (uVar13 < (ulonglong)((*(longlong *)(param_1 + 0x10) - lVar14) / 0x28));
    }
    return 0;
}



undefined4 FUN_1407232a0(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    uint uVar9;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    longlong local_48 [2];

    if (*(longlong *)(param_2 + 0x18) == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar2 == 0) {
        return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xe0);
    uVar9 = *(uint *)(param_1 + 0x40);
    do {
        lVar3 = *(longlong *)
                (*(longlong *)(param_1 + 8) + 8 +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar9 * 4) * 0x28);
        lVar4 = *(longlong *)(lVar3 + 8);
        lVar5 = lVar3;
        lVar8 = lVar4;
        while (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x20) < uVar1) {
                lVar8 = *(longlong *)(lVar8 + 0x18);
            }
            else {
                lVar5 = lVar8;
                lVar8 = *(longlong *)(lVar8 + 0x10);
            }
        }
        if ((lVar5 == lVar3) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
            local_res18 = lVar3;
            plVar7 = &local_res18;
        }
        else {
            local_res10 = lVar5;
            plVar7 = &local_res10;
        }
        lVar8 = *plVar7;
        if (uVar1 == 0) {
            LAB_1407233d6:
            if (lVar8 != lVar3) goto LAB_140723404;
            uVar9 = uVar9 + 1;
            if ((ulonglong)((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x28) <=
                (ulonglong)uVar9) {
                uVar9 = 0;
            }
        }
        else {
            lVar5 = lVar3;
            if (lVar8 == lVar3) {
                for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
                if ((lVar5 == lVar3) || (*(int *)(lVar5 + 0x20) != 0)) {
                    local_48[0] = lVar3;
                    plVar7 = local_48;
                }
                else {
                    plVar7 = &local_res20;
                    local_res20 = lVar5;
                }
                lVar8 = *plVar7;
                goto LAB_1407233d6;
            }
            LAB_140723404:
            iVar6 = *(int *)(*(longlong *)(lVar8 + 0x28) + 0x10);
            if ((iVar6 == 0) ||
                (iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar2,iVar6,param_2,0,0),
                        iVar6 != 0)) {
                *(uint *)(param_1 + 0x40) = uVar9 + 1;
                return *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0xc);
            }
            uVar9 = uVar9 + 1;
            if ((ulonglong)((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) / 0x28) <=
                (ulonglong)uVar9) {
                uVar9 = 0;
            }
        }
        if (uVar9 == *(uint *)(param_1 + 0x40)) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_1407234a0(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong local_res8;
    longlong local_res18;
    longlong local_res20;
    longlong local_38 [2];

    lVar9 = *(longlong *)(param_1 + 8);
    if ((lVar9 == *(longlong *)(param_1 + 0x10)) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar2 == 0) {
        return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xe0);
    do {
        lVar3 = *(longlong *)(lVar9 + 8);
        lVar4 = *(longlong *)(lVar3 + 8);
        lVar5 = lVar3;
        lVar8 = lVar4;
        while (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x20) < uVar1) {
                lVar8 = *(longlong *)(lVar8 + 0x18);
            }
            else {
                lVar5 = lVar8;
                lVar8 = *(longlong *)(lVar8 + 0x10);
            }
        }
        if ((lVar5 == lVar3) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
            local_res18 = lVar3;
            plVar7 = &local_res18;
        }
        else {
            local_res8 = lVar5;
            plVar7 = &local_res8;
        }
        lVar8 = *plVar7;
        lVar5 = lVar3;
        if (lVar8 == lVar3) {
            for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
                lVar5 = lVar4;
            }
            if ((lVar5 == lVar3) || (*(int *)(lVar5 + 0x20) != 0)) {
                local_38[0] = lVar3;
                plVar7 = local_38;
            }
            else {
                local_res20 = lVar5;
                plVar7 = &local_res20;
            }
            lVar8 = *plVar7;
            if (lVar8 != lVar3) goto LAB_14072359e;
        }
        else {
            LAB_14072359e:
            iVar6 = *(int *)(*(longlong *)(lVar8 + 0x28) + 0x10);
            if ((iVar6 == 0) ||
                (iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar2,iVar6,param_2,0,0),
                        iVar6 != 0)) {
                return 1;
            }
        }
        lVar9 = lVar9 + 0x28;
        if (lVar9 == *(longlong *)(param_1 + 0x10)) {
            return 0;
        }
    } while( true );
}



longlong FUN_140723600(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined local_38 [8];
    undefined *local_30;
    undefined8 local_28;
    uint local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 0x10) - lVar1;
    uVar3 = 0;
    lVar2 = lVar4 >> 0x3f;
    lVar4 = lVar4 / 0x28 + lVar2;
    if (lVar4 != lVar2) {
        do {
            if (*(int *)(lVar1 + 0x20 + uVar3 * 0x28) == *(int *)(param_2 + 8)) {
                return lVar1 + uVar3 * 0x28;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < (ulonglong)(lVar4 - lVar2));
    }
    local_18 = *(uint *)(param_2 + 8);
    local_30 = (undefined *)FUN_14018b280(0x30);
    local_28 = 0;
    *local_30 = 0;
    *(undefined8 *)(local_30 + 8) = 0;
    *(undefined **)(local_30 + 0x10) = local_30;
    *(undefined **)(local_30 + 0x18) = local_30;
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    for (lVar4 = lVar1;
         (lVar4 != lVar2 &&
          (*(uint *)(lVar4 + 0x20) <= local_18 && local_18 != *(uint *)(lVar4 + 0x20)));
         lVar4 = lVar4 + 0x28) {
    }
    if ((lVar2 == *(longlong *)(param_1 + 0x18)) || (lVar4 != lVar2)) {
        FUN_140723790(param_1,lVar4,local_38);
    }
    else {
        if (lVar2 != 0) {
            FUN_14048b2a0(lVar2,local_38);
            *(uint *)(lVar2 + 0x20) = local_18;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x28;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(int *)(param_1 + 0x40) = (int)((*(longlong *)(param_1 + 0x10) - lVar2) / 0x28);
    FUN_140008410(local_38);
    FUN_14018b900(local_30,0);
    return lVar2 + ((lVar4 - lVar1) / 0x28) * 0x28;
}



void FUN_140723790(longlong param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined local_48 [8];
    undefined8 local_40;
    undefined4 local_28;

    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == *(longlong *)(param_1 + 0x18)) {
        lVar5 = (lVar5 - *(longlong *)(param_1 + 8)) / 0x28;
        if (lVar5 == 0) {
            lVar5 = 1;
        }
        else {
            lVar5 = lVar5 * 2;
        }
        uVar1 = FUN_14018a3e0(lVar5 * 0x28);
        lVar5 = (uVar1 / 0x28) * 0x28;
        lVar2 = FUN_14018b280(lVar5,0);
        lVar3 = FUN_140723940(*(undefined8 *)(param_1 + 8),param_2,lVar2);
        if (lVar3 != 0) {
            FUN_14048b2a0(lVar3,param_3);
            *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_3 + 0x20);
        }
        uVar4 = FUN_140723940(param_2,*(undefined8 *)(param_1 + 0x10),lVar3 + 0x28);
        lVar3 = *(longlong *)(param_1 + 0x10);
        for (lVar6 = *(longlong *)(param_1 + 8); lVar6 != lVar3; lVar6 = lVar6 + 0x28) {
            FUN_140008410(lVar6);
            FUN_14018b900(*(undefined8 *)(lVar6 + 8),0);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar2;
        *(longlong *)(param_1 + 0x18) = lVar5 + lVar2;
        *(undefined8 *)(param_1 + 0x10) = uVar4;
    }
    else {
        if (lVar5 != 0) {
            FUN_14048b2a0(lVar5,lVar5 + -0x28);
            *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar5 + -8);
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x28;
        FUN_14048b2a0(local_48,param_3);
        local_28 = *(undefined4 *)(param_3 + 0x20);
        FUN_1407239c0(param_2,&DAT_ffffffffffffffb0 + *(longlong *)(param_1 + 0x10),
                      *(longlong *)(param_1 + 0x10) + -0x28);
        FUN_1404956e0(param_2,local_48);
        *(undefined4 *)(param_2 + 0x20) = local_28;
        FUN_140008410(local_48);
        FUN_14018b900(local_40,0);
    }
    return;
}



longlong FUN_140723940(longlong param_1,longlong param_2,longlong param_3)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;

    if (param_1 != param_2) {
        lVar3 = param_3 - param_1;
        lVar2 = param_1 - param_3;
        do {
            if (param_3 != 0) {
                FUN_14048b2a0(param_3,param_1);
                puVar1 = (undefined4 *)(lVar3 + 0x20 + param_1);
                *puVar1 = *(undefined4 *)((longlong)puVar1 + lVar2);
            }
            param_1 = param_1 + 0x28;
            param_3 = param_3 + 0x28;
        } while (param_1 != param_2);
    }
    return param_3;
}



longlong FUN_1407239c0(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = (param_2 - param_1) / 0x28;
    if (0 < lVar2) {
        param_2 = param_2 - param_3;
        lVar1 = param_3;
        do {
            param_3 = lVar1 + -0x28;
            FUN_1404956e0(param_3,param_2 + param_3);
            lVar2 = lVar2 + -1;
            *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x20 + param_3);
            lVar1 = param_3;
        } while (0 < lVar2);
    }
    return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140723a50(undefined8 *param_1)

{
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;

    pcVar1 = DAT_140c63838;
    *param_1 = 0;
    if (pcVar1 == (code *)0x0) {
        if (_DAT_140c643f4 == 0) {
            iVar3 = FUN_1401fe640();
            if (-1 < iVar3) {
                uVar2 = (**(code **)(*DAT_140c64f40 + 0x28))();
                goto LAB_140723aa1;
            }
        }
        uVar2 = 0;
    }
    else {
        uVar2 = (*pcVar1)(&PTR_u_Episode_140a6a2b8,DAT_140c63858);
    }
    LAB_140723aa1:
    param_1[1] = 0;
    uVar4 = FUN_1401a40c0(uVar2);
    param_1[2] = uVar4;
    uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar4),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar4) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar5,0);
    param_1[3] = uVar5;
    FUN_1407e4830(uVar5,0,param_1[2] << 3);
    param_1[4] = &LAB_1400522d0;
    param_1[5] = &LAB_1400522e0;
    uVar5 = FUN_14018b280(0x18);
    param_1[7] = uVar5;
    *(undefined8 *)uVar5 = uVar5;
    *(undefined8 *)(param_1[7] + 8) = param_1[7];
    uVar5 = FUN_14018b280(0x18);
    param_1[9] = uVar5;
    *(undefined8 *)uVar5 = uVar5;
    *(undefined8 *)(param_1[9] + 8) = param_1[9];
    uVar5 = FUN_14018b280(0x18);
    param_1[0xb] = uVar5;
    *(undefined8 *)uVar5 = uVar5;
    *(undefined8 *)(param_1[0xb] + 8) = param_1[0xb];
    uVar5 = FUN_14018b280(0x18);
    param_1[0xd] = uVar5;
    *(undefined8 *)uVar5 = uVar5;
    *(undefined8 *)(param_1[0xd] + 8) = param_1[0xd];
    return param_1;
}



void FUN_140723b70(longlong *param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong *plVar3;

    FUN_140019490(param_1 + 1);
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
        if (*(int *)(puVar1 + -1) == 0) {
            FUN_14018b900(puVar1 + -1,0);
        }
        else {
            (**(code **)*puVar1)(puVar1,3);
        }
    }
    *param_1 = 0;
    plVar3 = *(longlong **)(longlong *)param_1[0xd];
    if (plVar3 != (longlong *)param_1[0xd]) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)param_1[0xd]);
    }
    *(longlong *)param_1[0xd] = param_1[0xd];
    *(longlong *)(param_1[0xd] + 8) = param_1[0xd];
    FUN_14018b900(param_1[0xd],0);
    plVar3 = *(longlong **)(longlong *)param_1[0xb];
    if (plVar3 != (longlong *)param_1[0xb]) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)param_1[0xb]);
    }
    *(longlong *)param_1[0xb] = param_1[0xb];
    *(longlong *)(param_1[0xb] + 8) = param_1[0xb];
    FUN_14018b900(param_1[0xb],0);
    plVar3 = *(longlong **)(longlong *)param_1[9];
    if (plVar3 != (longlong *)param_1[9]) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)param_1[9]);
    }
    *(longlong *)param_1[9] = param_1[9];
    *(longlong *)(param_1[9] + 8) = param_1[9];
    FUN_14018b900(param_1[9],0);
    plVar3 = *(longlong **)(longlong *)param_1[7];
    if (plVar3 != (longlong *)param_1[7]) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)param_1[7]);
    }
    *(longlong *)param_1[7] = param_1[7];
    *(longlong *)(param_1[7] + 8) = param_1[7];
    FUN_14018b900(param_1[7],0);
    FUN_140019490(param_1 + 1);
    FUN_14018b900(param_1[3],0);
    param_1[3] = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140723ce0(ulonglong param_1)

{
    ulonglong *puVar1;
    uint **ppuVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    uint *puVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    uint **ppuVar12;
    longlong lVar13;
    longlong lVar14;
    uint uVar15;
    uint *puVar16;
    longlong *plVar17;
    ulonglong local_res8;

    ppuVar2 = DAT_140c665d8;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c643f4 != 0) {
            uVar10 = 0;
            goto LAB_140723d4d;
        }
        iVar5 = FUN_1401fe640();
        if (iVar5 < 0) {
            uVar10 = 0;
            goto LAB_140723d4d;
        }
        uVar3 = (**(code **)(*DAT_140c64f40 + 0x28))();
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_Episode_140a6a2b8,DAT_140c63858);
    }
    uVar10 = (ulonglong)uVar3;
    LAB_140723d4d:
    uVar3 = (uint)uVar10;
    uVar7 = SUB168(ZEXT816(0x68) * ZEXT816(uVar10),0);
    if (SUB168(ZEXT816(0x68) * ZEXT816(uVar10) >> 0x40,0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    lVar8 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
        lVar8 = -1;
    }
    puVar9 = (uint *)FUN_14018b280(lVar8);
    if (puVar9 == (uint *)0x0) {
        puVar16 = (uint *)0x0;
    }
    else {
        puVar16 = puVar9 + 2;
        *puVar9 = uVar3;
        puVar9 = puVar16;
        uVar15 = uVar3;
        while (uVar15 = uVar15 - 1, -1 < (int)uVar15) {
            FUN_140787970(puVar9);
            puVar9 = puVar9 + 0x1a;
        }
    }
    uVar15 = 0;
    *ppuVar2 = puVar16;
    if (uVar3 != 0) {
        lVar8 = 0;
        do {
            plVar17 = (longlong *)((longlong)*ppuVar2 + lVar8);
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c643f4 == 0) && (iVar5 = FUN_1401fe640(), -1 < iVar5)) {
                    (**(code **)(*DAT_140c64f40 + 0x20))(DAT_140c64f40,uVar15);
                }
            }
            else {
                (*DAT_140c63848)(&PTR_u_Episode_140a6a2b8,uVar15,DAT_140c63858);
            }
            FUN_140787b10(plVar17);
            uVar4 = (**(code **)(*plVar17 + 8))(plVar17);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar4;
            if (ppuVar2[1] == ppuVar2[2]) {
                FUN_1400290d0(ppuVar2 + 1);
            }
            uVar10 = (*(code *)ppuVar2[4])(&local_res8);
            puVar9 = ppuVar2[3];
            puVar16 = ppuVar2[2];
            puVar11 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar11 != (ulonglong *)0x0) {
                puVar1 = *(ulonglong **)(puVar9 + (uVar10 % (ulonglong)puVar16) * 2);
                *puVar11 = uVar10;
                puVar11[1] = (ulonglong)puVar1;
                puVar11[3] = (ulonglong)plVar17;
                *(undefined4 *)(puVar11 + 2) = (undefined4)local_res8;
            }
            *(ulonglong **)(puVar9 + (uVar10 % (ulonglong)puVar16) * 2) = puVar11;
            ppuVar2[1] = (uint *)((longlong)ppuVar2[1] + 1);
            puVar9 = ppuVar2[0xd];
            ppuVar12 = (uint **)FUN_14018b280(0x18);
            if ((longlong **)(ppuVar12 + 2) != (longlong **)0x0) {
                ppuVar12[2] = (uint *)plVar17;
            }
            *ppuVar12 = puVar9;
            uVar15 = uVar15 + 1;
            ppuVar12[1] = *(uint **)(puVar9 + 2);
            lVar8 = lVar8 + 0x68;
            **(longlong ***)(puVar9 + 2) = (longlong *)ppuVar12;
            *(uint ***)(puVar9 + 2) = ppuVar12;
        } while (uVar15 < uVar3);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c654cc == 0) {
            iVar5 = FUN_1401fea80();
            if (iVar5 < 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = (**(code **)(*DAT_140c63958 + 0x28))();
            }
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_EpisodeQuest_140a6a2f0);
    }
    uVar15 = 0;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c654cc == 0) {
                    iVar5 = FUN_1401fea80();
                    if (iVar5 < 0) {
                        lVar8 = 0;
                    }
                    else {
                        lVar8 = (**(code **)(*DAT_140c63958 + 0x20))();
                    }
                }
                else {
                    lVar8 = 0;
                }
            }
            else {
                lVar8 = (*DAT_140c63848)(&PTR_u_EpisodeQuest_140a6a2f0,uVar15,DAT_140c63858);
            }
            uVar10 = (*(code *)ppuVar2[4])(lVar8 + 4);
            for (puVar11 = *(ulonglong **)(ppuVar2[3] + (uVar10 % (ulonglong)ppuVar2[2]) * 2);
                 puVar11 != (ulonglong *)0x0; puVar11 = (ulonglong *)puVar11[1]) {
                if ((uVar10 == *puVar11) && (iVar5 = (*(code *)ppuVar2[5])(lVar8 + 4), iVar5 != 0)) {
                    if ((longlong **)(puVar11 + 3) != (longlong **)0x0) {
                        plVar17 = (longlong *)puVar11[3];
                        lVar13 = FUN_1405a8a40();
                        if (lVar13 != 0) {
                            iVar5 = *(int *)(*(longlong *)(lVar13 + 8) + 0x1a4);
                            if (iVar5 == 0) {
                                iVar5 = 1;
                            }
                            lVar14 = FUN_1405a9420(*(longlong *)(lVar13 + 8),iVar5);
                            if (lVar14 != 0) {
                                FUN_14077d790(lVar14,plVar17);
                            }
                            uVar6 = (**(code **)(*plVar17 + 8))(plVar17);
                            FUN_1405532d0(lVar13,uVar6,*(undefined4 *)(lVar8 + 0xc),lVar8);
                            FUN_140787bd0(plVar17);
                        }
                    }
                    break;
                }
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < uVar3);
    }
    return 0;
}



longlong FUN_140724050(longlong param_1,ulonglong param_2)

{
    int iVar1;
    longlong lVar2;

    if ((param_2 & 2) != 0) {
        iVar1 = *(int *)(param_1 + -8);
        lVar2 = (longlong)iVar1 * 0x68 + param_1;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar2 = lVar2 + -0x68;
            FUN_140787a10(lVar2);
        }
        if ((param_2 & 1) != 0) {
            FUN_14018b900(param_1 + -8,0);
        }
        return param_1 + -8;
    }
    FUN_140787a10();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140724100(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;

    lVar4 = DAT_140c665d8;
    plVar5 = (longlong *)**(longlong **)(DAT_140c665d8 + 0x38);
    if (plVar5 != *(longlong **)(DAT_140c665d8 + 0x38)) {
        do {
            plVar1 = (longlong *)*plVar5;
            FUN_14018b900(plVar5,0);
            plVar5 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(lVar4 + 0x38));
    }
    *(undefined8 *)*(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
    *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8) = *(longlong *)(lVar4 + 0x38);
    plVar5 = (longlong *)**(longlong **)(lVar4 + 0x48);
    if (plVar5 != *(longlong **)(lVar4 + 0x48)) {
        do {
            plVar1 = (longlong *)*plVar5;
            FUN_14018b900(plVar5,0);
            plVar5 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(lVar4 + 0x48));
    }
    *(undefined8 *)*(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    *(longlong *)(*(longlong *)(lVar4 + 0x48) + 8) = *(longlong *)(lVar4 + 0x48);
    plVar5 = (longlong *)**(longlong **)(lVar4 + 0x58);
    if (plVar5 != *(longlong **)(lVar4 + 0x58)) {
        do {
            plVar1 = (longlong *)*plVar5;
            FUN_14018b900(plVar5,0);
            plVar5 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(lVar4 + 0x58));
    }
    uVar6 = 0;
    *(undefined8 *)*(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar4 + 0x58);
    *(longlong *)(*(longlong *)(lVar4 + 0x58) + 8) = *(longlong *)(lVar4 + 0x58);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
        do {
            lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + uVar6 * 8);
            while (lVar3 != 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                FUN_140787d10(*(undefined8 *)(lVar3 + 0x18));
                lVar3 = lVar2;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulonglong *)(lVar4 + 0x10));
    }
    return;
}



ulonglong FUN_1407241f0(undefined8 param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 local_res8;

    lVar3 = DAT_140c665d8;
    local_res8 = CONCAT44((int)((ulonglong)param_1 >> 0x20),1);
    uVar5 = (**(code **)(DAT_140c665d8 + 0x20))(&local_res8);
    uVar6 = uVar5 / *(ulonglong *)(lVar3 + 0x10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar3 + 0x18) + (uVar5 % *(ulonglong *)(lVar3 + 0x10)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar6;
        }
        if ((uVar5 == *puVar1) &&
            (uVar6 = (**(code **)(lVar3 + 0x28))(&local_res8,puVar1 + 2), (int)uVar6 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if ((longlong **)(puVar1 + 3) == (longlong **)0x0) {
        return uVar6;
    }
    plVar2 = (longlong *)puVar1[3];
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    FUN_1405532d0(param_2,uVar4,0xffffffff,0);
    uVar6 = FUN_140787bd0(plVar2,0,param_2);
    return uVar6;
}



ulonglong FUN_1407242b0(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c665d8;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c665d8 + 0x20))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x18) + (uVar4 % *(ulonglong *)(lVar2 + 0x10)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x28))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



void FUN_140724340(undefined8 param_1,longlong *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    int iVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;

    lVar8 = DAT_140c665d8;
    iVar5 = (**(code **)(*param_2 + 0xc0))(param_2);
    FUN_140787d10(param_2);
    iVar6 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (iVar5 != iVar6) {
        if (iVar5 == 0) {
            puVar1 = *(undefined8 **)(lVar8 + 0x68);
            puVar2 = (undefined8 *)*puVar1;
            while (puVar4 = puVar2, puVar4 != puVar1) {
                puVar2 = (undefined8 *)*puVar4;
                if ((longlong *)puVar4[2] == param_2) {
                    puVar3 = (undefined8 *)puVar4[1];
                    *puVar3 = puVar2;
                    puVar2[1] = puVar3;
                    FUN_14018b900(puVar4,0);
                }
            }
        }
        else if (iVar5 == 1) {
            puVar1 = *(undefined8 **)(lVar8 + 0x58);
            puVar2 = (undefined8 *)*puVar1;
            while (puVar4 = puVar2, puVar4 != puVar1) {
                puVar2 = (undefined8 *)*puVar4;
                if ((longlong *)puVar4[2] == param_2) {
                    puVar3 = (undefined8 *)puVar4[1];
                    *puVar3 = puVar2;
                    puVar2[1] = puVar3;
                    FUN_14018b900(puVar4,0);
                }
            }
        }
        else if (iVar5 == 2) {
            puVar1 = *(undefined8 **)(lVar8 + 0x38);
            puVar2 = (undefined8 *)*puVar1;
            while (puVar4 = puVar2, puVar4 != puVar1) {
                puVar2 = (undefined8 *)*puVar4;
                if ((longlong *)puVar4[2] == param_2) {
                    puVar3 = (undefined8 *)puVar4[1];
                    *puVar3 = puVar2;
                    puVar2[1] = puVar3;
                    FUN_14018b900(puVar4,0);
                }
            }
        }
        else if (iVar5 == 3) {
            puVar1 = *(undefined8 **)(lVar8 + 0x48);
            puVar2 = (undefined8 *)*puVar1;
            while (puVar4 = puVar2, puVar4 != puVar1) {
                puVar2 = (undefined8 *)*puVar4;
                if ((longlong *)puVar4[2] == param_2) {
                    puVar3 = (undefined8 *)puVar4[1];
                    *puVar3 = puVar2;
                    puVar2[1] = puVar3;
                    FUN_14018b900(puVar4,0);
                }
            }
        }
        if (iVar6 == 0) {
            lVar8 = *(longlong *)(lVar8 + 0x68);
        }
        else if (iVar6 == 1) {
            lVar8 = *(longlong *)(lVar8 + 0x58);
        }
        else if (iVar6 == 2) {
            lVar8 = *(longlong *)(lVar8 + 0x38);
        }
        else {
            if (iVar6 != 3) {
                return;
            }
            lVar8 = *(longlong *)(lVar8 + 0x48);
        }
        plVar7 = (longlong *)FUN_14018b280(0x18);
        if ((longlong **)(plVar7 + 2) != (longlong **)0x0) {
            plVar7[2] = (longlong)param_2;
        }
        *plVar7 = lVar8;
        plVar7[1] = *(longlong *)(lVar8 + 8);
        **(longlong ***)(lVar8 + 8) = plVar7;
        *(longlong **)(lVar8 + 8) = plVar7;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140724500(int param_1)

{
    undefined4 uVar1;
    uint uVar2;
    longlong *plVar3;
    ulonglong *puVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong **pplVar10;
    longlong **pplVar11;
    longlong **pplVar12;
    undefined4 local_res10 [2];
    undefined local_38 [8];
    longlong **local_30;
    longlong **local_28;
    undefined8 local_20;

    plVar6 = DAT_140c7dfc0;
    if (DAT_140c7dfc0 != DAT_140c7dfc8) {
        while (lVar9 = *plVar6, *(int *)(lVar9 + 0xbc) != param_1) {
            plVar6 = plVar6 + 1;
            if (plVar6 == DAT_140c7dfc8) {
                return;
            }
        }
        if ((lVar9 != 0) && (plVar6 = (longlong *)FUN_1405ac7e0(lVar9), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,1,param_1);
            plVar6 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
            plVar3 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
            if (plVar6 != plVar3) {
                while (lVar9 = *plVar6, *(int *)(lVar9 + 0xbc) != param_1) {
                    plVar6 = plVar6 + 1;
                    if (plVar6 == plVar3) {
                        return;
                    }
                }
                if (lVar9 != 0) {
                    pplVar10 = (longlong **)0x0;
                    local_30 = (longlong **)0x0;
                    local_28 = (longlong **)0x0;
                    local_20 = 0;
                    local_res10[0] = 0;
                    lVar7 = FUN_140205fa0(*(undefined4 *)(lVar9 + 0xb8));
                    lVar9 = DAT_140c659f8;
                    if (lVar7 != 0) {
                        local_res10[0] = *(undefined4 *)(lVar7 + 4);
                    }
                    uVar8 = (**(code **)(DAT_140c659f8 + 0x38))(local_res10);
                    for (puVar4 = *(ulonglong **)
                            (*(longlong *)(lVar9 + 0x30) + (uVar8 % *(ulonglong *)(lVar9 + 0x28)) * 8);
                         pplVar12 = (longlong **)0x0, pplVar11 = pplVar10, puVar4 != (ulonglong *)0x0;
                         puVar4 = (ulonglong *)puVar4[1]) {
                        if ((uVar8 == *puVar4) &&
                            (iVar5 = (**(code **)(lVar9 + 0x40))(local_res10,puVar4 + 2), iVar5 != 0)) {
                            pplVar12 = (longlong **)0x0;
                            if ((puVar4 + 3 != (ulonglong *)0x0) &&
                                (uVar8 = puVar4[3], pplVar10 = (longlong **)0x0, pplVar11 = (longlong **)0x0,
                                        *(int *)(uVar8 + 0x14) == param_1)) {
                                FUN_1404c7cf0(uVar8,local_38,4);
                                pplVar10 = local_30;
                                pplVar12 = local_28;
                                pplVar11 = local_30;
                            }
                            break;
                        }
                    }
                    do {
                        if (pplVar10 == pplVar12) {
                            LAB_1407246ee:
                            if (pplVar11 == (longlong **)0x0) {
                                return;
                            }
                            FUN_14018b900(pplVar11,0);
                            return;
                        }
                        plVar6 = *pplVar10;
                        uVar1 = *(undefined4 *)((longlong)plVar6 + 0x6c);
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c63a64 == 0) && (iVar5 = FUN_140207b00(), -1 < iVar5)) {
                                lVar9 = (**(code **)(*DAT_140c63e68 + 0x18))(DAT_140c63e68,uVar1);
                                goto LAB_1407246b7;
                            }
                            LAB_1407246dd:
                            (**(code **)(*plVar6 + 0x18))(plVar6,1,param_1);
                            goto LAB_1407246ee;
                        }
                        lVar9 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar1,DAT_140c63858);
                        LAB_1407246b7:
                        if ((lVar9 == 0) ||
                            (((uVar2 = *(uint *)(lVar9 + 0x18), (uVar2 & 0x340) != 0 &&
                                                                (uVar2 != *(uint *)((longlong)plVar6 + 0x74))) || ((uVar2 & 0x342) == 0))))
                            goto LAB_1407246dd;
                        pplVar10 = pplVar10 + 1;
                    } while( true );
                }
            }
        }
    }
    return;
}



undefined8 FUN_140724720(int param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;

    plVar2 = DAT_140c7dfc0;
    if (DAT_140c7dfc0 != DAT_140c7dfc8) {
        do {
            lVar1 = *plVar2;
            if (*(int *)(lVar1 + 0xbc) == param_1) {
                if (lVar1 == 0) {
                    return 0;
                }
                uVar3 = FUN_1405ac7e0(lVar1);
                return uVar3;
            }
            plVar2 = plVar2 + 1;
        } while (plVar2 != DAT_140c7dfc8);
    }
    return 0;
}



undefined8 FUN_140724760(undefined8 param_1,ulonglong param_2)

{
    FUN_1407247a0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407247a0(undefined8 *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    int *piVar5;

    *param_1 = &PTR_LAB_140b74530;
    uVar1 = *(undefined4 *)(param_1[0x25] + 0x14);
    lVar2 = FUN_140207d60(*(undefined4 *)((longlong)param_1 + 0x6c));
    if (lVar2 != 0) {
        plVar4 = (longlong *)param_1[0x6b];
        if (plVar4 != (longlong *)0x0) {
            if ((longlong *)*plVar4 != (longlong *)0x0) {
                *(longlong *)*plVar4 = plVar4[1];
            }
            if ((longlong *)plVar4[1] != (longlong *)0x0) {
                *(longlong *)plVar4[1] = *plVar4;
            }
            *plVar4 = 0;
            plVar4[1] = 0;
            FUN_14018b900(plVar4,0);
        }
        if ((*(uint *)(lVar2 + 0x18) & 0x180) != 0) {
            *(undefined4 *)(DAT_140c65898 + 0x79e8) = 0;
        }
        if ((*(uint *)(lVar2 + 0x18) & 0x200) == 0) {
            LAB_1407248dd:
            FUN_140724950(param_1,uVar1);
        }
        else {
            lVar2 = FUN_140207d60(*(undefined4 *)((longlong)param_1 + 0x6c));
            if (lVar2 != 0) {
                for (plVar4 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
                     plVar4 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
                     plVar4 = plVar4 + 1) {
                    if (*(int *)(*plVar4 + 0xbc) == *(int *)(param_1[0x25] + 0x14)) {
                        if (*plVar4 != 0) {
                            lVar2 = FUN_1402070a0();
                            if (lVar2 != 0) {
                                piVar5 = (int *)(lVar2 + 0x24);
                                lVar2 = 4;
                                do {
                                    if (((*piVar5 != 0) && (lVar3 = FUN_14024b540(), lVar3 != 0)) &&
                                        (DAT_140c65878 != 0)) {
                                        FUN_140350d70();
                                    }
                                    piVar5 = piVar5 + 1;
                                    lVar2 = lVar2 + -1;
                                } while (lVar2 != 0);
                            }
                            goto LAB_1407248dd;
                        }
                        break;
                    }
                }
            }
        }
    }
    FUN_1404c0410(param_1);
    return;
}



uint FUN_140724910(longlong param_1)

{
    uint uVar1;
    longlong lVar2;

    lVar2 = FUN_140207d60(*(undefined4 *)(param_1 + 0x6c));
    if ((lVar2 != 0) &&
        ((uVar1 = *(uint *)(lVar2 + 0x18), (uVar1 & 0x340) == 0 || (uVar1 == *(uint *)(param_1 + 0x74))
        ))) {
        return uVar1 & 0x342;
    }
    return 0;
}



void FUN_140724950(longlong param_1)

{
    undefined2 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;

    lVar3 = FUN_140207d60(*(undefined4 *)(param_1 + 0x6c));
    if (lVar3 != 0) {
        uVar9 = 0;
        if ((*(byte *)(lVar3 + 0x18) & 0x20) == 0) {
            lVar5 = *(longlong *)(param_1 + 0x350);
            if (lVar5 == 0) {
                return;
            }
            if (*(longlong *)(lVar5 + 0x20) != 0) {
                FUN_1402ee640();
            }
            FUN_14018b900(lVar5,0);
            *(undefined8 *)(param_1 + 0x350) = 0;
        }
        plVar4 = (longlong *)FUN_1404c2740(param_1);
        if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x158))(plVar4), lVar5 != 0))
        {
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0x158))(plVar4);
            lVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
            if ((lVar5 != 0) && (uVar7 = (**(code **)(*plVar4 + 0x170))(plVar4), uVar7 != 0)) {
                do {
                    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x178))(plVar4,uVar9);
                    if (((plVar6 != (longlong *)0x0) &&
                         (iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), iVar2 == 0)) &&
                        (iVar2 = (**(code **)(*plVar6 + 0x28))(), iVar2 == *(int *)(param_1 + 0x74))) {
                        if ((*(byte *)(lVar3 + 0x18) & 0x20) != 0) {
                            (**(code **)(*plVar6 + 0x40))(plVar6,0);
                            return;
                        }
                        uVar8 = *(uint *)(*(longlong *)(lVar5 + 0x48) + 0x28);
                        if (uVar8 == 0) {
                            return;
                        }
                        if (uVar8 <= *(uint *)(param_1 + 0x78)) {
                            return;
                        }
                        uVar1 = *(undefined2 *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x30) +
                                 (ulonglong)*(uint *)(param_1 + 0x78) * 2);
                        lVar3 = FUN_140724720();
                        if (lVar3 == 0) {
                            uVar8 = 0;
                        }
                        else {
                            uVar8 = *(uint *)(lVar3 + 0x6c);
                        }
                        if (*(uint *)(lVar5 + 0x40) <= uVar8) {
                            uVar8 = 0;
                        }
                        plVar4 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
                        (**(code **)(*plVar4 + 0x38))(plVar4,uVar8,uVar1);
                        return;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar7);
            }
        }
    }
    return;
}



void FUN_140724b00(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;

    FUN_140724950();
    lVar2 = FUN_140207d60(*(undefined4 *)(param_1 + 0x6c));
    if ((lVar2 != 0) &&
        (((uVar1 = *(uint *)(lVar2 + 0x18), (uVar1 & 0x340) == 0 ||
                                            (uVar1 == *(uint *)(param_1 + 0x74))) && ((uVar1 & 0x342) != 0)))) {
        plVar3 = (longlong *)FUN_1404c2740(param_1);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x158))(plVar3);
            FUN_140724cd0();
        }
    }
    return;
}



void FUN_140724b70(longlong param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong **pplVar6;
    int *piVar7;
    undefined4 *puVar8;
    longlong lVar9;
    longlong *plVar10;
    undefined4 *puVar11;
    uint uVar12;
    longlong **pplVar13;
    uint uVar14;
    longlong **pplVar15;
    longlong lVar16;
    undefined auStack312 [32];
    int local_118;
    longlong *local_108;
    int local_100;
    longlong local_f8;
    longlong local_f0;
    longlong **local_e8;
    longlong *local_e0;
    longlong **local_d8;
    longlong **local_d0;
    undefined8 local_c8;
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
    undefined8 uStack144;
    undefined8 local_88;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 auStack116 [4];
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined8 local_58;
    ulonglong local_48;

    lVar3 = FUN_140207d60(*(undefined4 *)(param_1 + 0x6c));
    if ((lVar3 != 0) &&
        ((((*(uint *)(lVar3 + 0x18) & 0x40) != 0 || ((*(uint *)(lVar3 + 0x18) >> 8 & 1) != 0)) &&
          (lVar3 = *(longlong *)(DAT_140c65898 + 0x6490), lVar3 != 0)))) {
        lVar4 = FUN_1405b16c0(&DAT_140c7dfb0,*(undefined4 *)(lVar3 + 0x17e8),1);
        plVar10 = DAT_140c7dfc0;
        if (lVar4 == 0) {
            lVar4 = FUN_1405b15c0(&DAT_140c7dfb0,*(undefined4 *)(lVar3 + 0x17ec));
            plVar10 = DAT_140c7dfc0;
        }
        for (; plVar10 != DAT_140c7dfc8; plVar10 = plVar10 + 1) {
            lVar3 = *plVar10;
            if (*(int *)(lVar3 + 0xbc) == param_2) goto LAB_140724c16;
        }
        lVar3 = 0;
        LAB_140724c16:
        if (lVar4 != lVar3) {
            return;
        }
    }
    plVar10 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    plVar5 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
    if (plVar10 != plVar5) {
        while (*(int *)(*plVar10 + 0xbc) != param_2) {
            plVar10 = plVar10 + 1;
            if (plVar10 == plVar5) {
                return;
            }
        }
        if (*plVar10 != 0) {
            lVar3 = FUN_140207d60(*(undefined4 *)(param_1 + 0x6c));
            if (((lVar3 != 0) &&
                 ((uVar14 = *(uint *)(lVar3 + 0x18), (uVar14 & 0x340) == 0 ||
                                                     (uVar14 == *(uint *)(param_1 + 0x74))))) && ((uVar14 & 0x342) != 0)) {
                local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
                for (plVar10 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
                     local_100 = param_2,
                             plVar10 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
                     plVar10 = plVar10 + 1) {
                    lVar3 = *plVar10;
                    if (*(int *)(lVar3 + 0xbc) == *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) {
                        if (((lVar3 != 0) &&
                             (plVar10 = *(longlong **)(lVar3 + 0x118), plVar10 != (longlong *)0x0)) &&
                            (lVar3 = (**(code **)(*plVar10 + 0x158))(plVar10), lVar3 != 0)) {
                            plVar5 = (longlong *)(**(code **)(*plVar10 + 0x158))(plVar10);
                            lVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
                            if ((lVar3 != 0) &&
                                (local_f8 = FUN_140207d60(*(undefined4 *)(param_1 + 0x6c)), local_f8 != 0)) {
                                plVar5 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
                                goto joined_r0x0001407250bb;
                            }
                        }
                        break;
                    }
                }
                goto LAB_1407254ed;
            }
            FUN_140725560(param_1);
        }
    }
    return;
    joined_r0x0001407250bb:
    if (plVar5 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) goto LAB_1407254ed;
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0xbc) == param_2) {
        local_f0 = lVar4;
        if (lVar4 != 0) {
            pplVar13 = (longlong **)0x0;
            local_e8 = (longlong **)0x0;
            local_108 = (longlong *)0x0;
            lVar4 = FUN_1402070a0(*(undefined4 *)(lVar4 + 0x40));
            pplVar6 = pplVar13;
            if (lVar4 != 0) {
                local_108 = (longlong *)FUN_14018db00(0);
                *local_108 = lVar4;
                local_e8 = (longlong **)0x1;
                local_d8 = (longlong **)0x1;
                pplVar6 = (longlong **)0x1;
                local_e0 = local_108;
                if (*(int *)(local_f0 + 0x30) == 5) {
                    FUN_1405b1a30();
                    local_e8 = local_d8;
                    local_108 = local_e0;
                    pplVar6 = local_d8;
                }
            }
            lVar4 = DAT_140c65898;
            uVar14 = *(uint *)(local_f8 + 0x18);
            if ((uVar14 & 0x40) == 0) {
                if ((uVar14 >> 8 & 1) != 0) {
                    if (pplVar6 != (longlong **)0x0) {
                        lVar3 = *(longlong *)(DAT_140c65898 + 0x6490);
                        do {
                            if ((lVar3 != 0) &&
                                (*(int *)(lVar3 + 0x17e8) == *(int *)(local_108[(longlong)pplVar13] + 0x1c))) {
                                *(undefined4 *)(lVar4 + 0x79e8) = *(undefined4 *)(local_f8 + 0x28);
                            }
                            pplVar13 = (longlong **)((longlong)pplVar13 + 1);
                        } while (pplVar13 < pplVar6);
                    }
                    goto LAB_14072540f;
                }
                if ((uVar14 >> 9 & 1) != 0) {
                    pplVar15 = pplVar13;
                    param_2 = local_100;
                    if (pplVar6 != (longlong **)0x0) {
                        do {
                            lVar3 = local_f0;
                            piVar7 = (int *)(local_f8 + 0x2c);
                            lVar16 = local_108[(longlong)pplVar15] - local_f8;
                            lVar4 = 4;
                            do {
                                if ((*(int *)(lVar16 + -8 + (longlong)piVar7) != 0) && (*piVar7 != 0)) {
                                    puVar8 = (undefined4 *)FUN_14024b540();
                                    lVar9 = FUN_14024b540();
                                    if ((puVar8 != (undefined4 *)0x0) && (lVar9 != 0)) {
                                        uStack144 = *(undefined8 *)(lVar9 + 0x28);
                                        uStack180 = puVar8[1];
                                        uStack176 = puVar8[2];
                                        uStack172 = puVar8[3];
                                        uVar14 = *(uint *)(lVar3 + 100);
                                        puVar11 = auStack116;
                                        uStack148 = puVar8[9];
                                        local_88 = *(undefined8 *)(lVar9 + 0x30);
                                        local_b8 = *puVar8;
                                        uStack128 = *(undefined4 *)(lVar9 + 0x38);
                                        auStack116[0] = puVar8[0x11];
                                        auStack116[1] = puVar8[0x12];
                                        auStack116[2] = puVar8[0x13];
                                        auStack116[3] = puVar8[0x14];
                                        uStack100 = puVar8[0x15];
                                        uStack92 = puVar8[0x17];
                                        uStack124 = *(undefined4 *)(lVar9 + 0x3c);
                                        uStack164 = *(undefined4 *)(lVar9 + 0x14);
                                        local_78 = *(undefined4 *)(lVar9 + 0x40);
                                        local_58 = *(undefined8 *)(puVar8 + 0x18);
                                        local_a8 = *(undefined4 *)(lVar9 + 0x10);
                                        uStack156 = *(undefined4 *)(lVar9 + 0x1c);
                                        uStack160 = *(undefined4 *)(lVar9 + 0x18);
                                        uStack96 = *(undefined4 *)(lVar9 + 0x58);
                                        pplVar6 = pplVar13;
                                        do {
                                            uVar1 = 0;
                                            if ((uVar14 & 1) == 0) {
                                                uVar1 = *(undefined4 *)
                                                        ((lVar9 - (longlong)auStack116) + 0x44 + (longlong)puVar11);
                                            }
                                            uVar12 = (int)pplVar6 + 1;
                                            pplVar6 = (longlong **)(ulonglong)uVar12;
                                            *puVar11 = uVar1;
                                            puVar11 = puVar11 + 1;
                                        } while (uVar12 < 4);
                                        local_98 = *(undefined4 *)(lVar9 + 0x20);
                                        if (DAT_140c65878 != 0) {
                                            FUN_140350d70();
                                        }
                                    }
                                }
                                piVar7 = piVar7 + 1;
                                lVar4 = lVar4 + -1;
                            } while (lVar4 != 0);
                            pplVar15 = (longlong **)((longlong)pplVar15 + 1);
                            param_2 = local_100;
                        } while (pplVar15 < local_e8);
                    }
                    goto LAB_14072540f;
                }
                if (*(uint *)(lVar3 + 0x40) == 0) goto LAB_14072540f;
                piVar7 = (int *)(*(longlong *)(lVar3 + 0x48) + 4);
                goto LAB_140725520;
            }
            if (*(longlong *)(param_1 + 0x358) == 0) {
                pplVar6 = (longlong **)FUN_14018b280(0x20);
                if (pplVar6 != (longlong **)0x0) {
                    uVar1 = *(undefined4 *)(local_f8 + 0x14);
                    *pplVar6 = (longlong *)0x0;
                    pplVar6[1] = (longlong *)0x0;
                    *(undefined4 *)(pplVar6 + 2) = uVar1;
                    *(undefined8 *)((longlong)pplVar6 + 0x14) = 0;
                    pplVar13 = pplVar6;
                }
                *(longlong ***)(param_1 + 0x358) = pplVar13;
                FUN_1403eaa20();
            }
            else {
                *(undefined4 *)(*(longlong *)(param_1 + 0x358) + 0x10) = *(undefined4 *)(local_f8 + 0x14);
                *(undefined4 *)(*(longlong *)(param_1 + 0x358) + 0x14) = 0;
                plVar10 = *(longlong **)(param_1 + 0x358);
                if ((longlong *)*plVar10 != (longlong *)0x0) {
                    *(longlong *)*plVar10 = plVar10[1];
                }
                if ((longlong *)plVar10[1] != (longlong *)0x0) {
                    *(longlong *)plVar10[1] = *plVar10;
                }
                *plVar10 = 0;
                plVar10[1] = 0;
                FUN_1403eaa20(plVar10,*(undefined8 *)(param_1 + 0x358));
            }
            goto LAB_14072540f;
        }
        goto LAB_1407254ed;
    }
    plVar5 = plVar5 + 1;
    goto joined_r0x0001407250bb;
    while( true ) {
        uVar14 = (int)pplVar13 + 1;
        pplVar13 = (longlong **)(ulonglong)uVar14;
        piVar7 = piVar7 + 0x16;
        if (*(uint *)(lVar3 + 0x40) <= uVar14) break;
        LAB_140725520:
        if (*piVar7 == *(int *)(param_1 + 0x6c)) {
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x158))(plVar10);
            (**(code **)(*plVar10 + 0xd8))(plVar10,pplVar13,0xffffffff,0xffffffffffffffff);
            break;
        }
    }
    LAB_14072540f:
    local_d8 = (longlong **)0x0;
    local_d0 = (longlong **)0x0;
    local_c8 = 0;
    FUN_140205fa0(*(undefined4 *)(local_f0 + 0xb8));
    local_118 = param_2;
    FUN_1404c9af0();
    pplVar15 = local_d0;
    pplVar6 = local_d8;
    for (pplVar13 = local_d8; pplVar13 != pplVar15; pplVar13 = pplVar13 + 1) {
        if ((2 < *(int *)(*pplVar13 + 0x10) - 1U) &&
            ((*(int *)(*pplVar13 + 0x10) != 4 || (iVar2 = FUN_140724910(), iVar2 == 0)))) {
            (**(code **)(**pplVar13 + 0x18))(*pplVar13,1,param_2);
        }
    }
    if (pplVar6 != (longlong **)0x0) {
        FUN_14018b900(pplVar6,0);
    }
    if (local_108 != (longlong *)0x0) {
        (**(code **)(local_108[-2] + 8))(local_108 + -2);
    }
    LAB_1407254ed:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack312);
    return;
}



void FUN_140724cd0(undefined8 param_1,longlong *param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined4 *puVar7;
    uint uVar8;
    undefined local_28 [8];
    longlong local_20;
    undefined4 *local_18;
    undefined4 *local_10;
    undefined4 *puVar9;

    if ((param_2 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_2 + 0x18))(param_2), lVar5 != 0))
    {
        plVar6 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
        plVar1 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
        if (plVar6 != plVar1) {
            while (lVar2 = *plVar6, *(int *)(lVar2 + 0xbc) != param_3) {
                plVar6 = plVar6 + 1;
                if (plVar6 == plVar1) {
                    return;
                }
            }
            if (lVar2 != 0) {
                puVar7 = (undefined4 *)0x0;
                local_20 = 0;
                local_18 = (undefined4 *)0x0;
                local_10 = (undefined4 *)0x0;
                puVar9 = puVar7;
                if (*(int *)(lVar5 + 0x40) != 0) {
                    do {
                        if (local_18 == puVar7) {
                            FUN_14017b140(local_28,local_18);
                            puVar7 = local_10;
                        }
                        else {
                            if (local_18 != (undefined4 *)0x0) {
                                *local_18 = *(undefined4 *)
                                        (*(longlong *)(lVar5 + 0x48) + 4 + (longlong)puVar9 * 0x58);
                            }
                            local_18 = local_18 + 1;
                        }
                        uVar8 = (int)puVar9 + 1;
                        puVar9 = (undefined4 *)(ulonglong)uVar8;
                    } while (uVar8 < *(uint *)(lVar5 + 0x40));
                }
                lVar4 = local_20;
                lVar5 = *(longlong *)(lVar2 + 0xd8);
                lVar3 = *(longlong *)(lVar2 + 0xd0);
                FUN_1407db590(lVar3,lVar5,0);
                *(longlong *)(lVar2 + 0xd8) = *(longlong *)(lVar2 + 0xd8) + (lVar5 - lVar3 >> 2) * -4;
                FUN_14004edb0(lVar2 + 200,local_28);
                if (lVar4 != 0) {
                    FUN_14018b900(lVar4,0);
                }
            }
        }
    }
    return;
}



void FUN_140725560(longlong param_1)

{
    undefined2 uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined8 uVar10;
    ulonglong uVar11;

    if (((*(int *)(param_1 + 0x6c) != 5) &&
         (plVar5 = (longlong *)FUN_1404c2740(), plVar5 != (longlong *)0x0)) &&
        (lVar6 = (**(code **)(*plVar5 + 0x158))(plVar5), lVar6 != 0)) {
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x158))(plVar5);
        lVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (lVar6 != 0) {
            iVar2 = *(int *)(param_1 + 0x74);
            uVar8 = (**(code **)(*plVar5 + 0x170))(plVar5);
            uVar11 = 0;
            if (uVar8 != 0) {
                do {
                    plVar7 = (longlong *)(**(code **)(*plVar5 + 0x178))(plVar5,uVar11);
                    if (((plVar7 != (longlong *)0x0) &&
                         (iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7), iVar4 == 0)) &&
                        (iVar4 = (**(code **)(*plVar7 + 0x28))(), iVar4 == iVar2)) {
                        lVar9 = FUN_140207d60();
                        if (lVar9 == 0) {
                            return;
                        }
                        if ((*(uint *)(lVar9 + 0x18) & 0x20) != 0) {
                            (**(code **)(*plVar7 + 0x40))(plVar7,*(undefined4 *)(lVar9 + 0x14));
                            return;
                        }
                        if ((char)*(uint *)(lVar9 + 0x18) < '\0') {
                            if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
                                return;
                            }
                            iVar2 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x17e8);
                            iVar4 = (**(code **)(*plVar7 + 0x28))();
                            if (iVar2 != iVar4) {
                                return;
                            }
                            *(undefined4 *)(DAT_140c65898 + 0x79e8) = *(undefined4 *)(lVar9 + 0x28);
                            return;
                        }
                        uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x48) + 0x28);
                        if (uVar3 == 0) {
                            return;
                        }
                        if (uVar3 <= *(uint *)(param_1 + 0x78)) {
                            return;
                        }
                        uVar1 = *(undefined2 *)
                                (*(longlong *)(*(longlong *)(lVar6 + 0x48) + 0x30) +
                                 (ulonglong)*(uint *)(param_1 + 0x78) * 2);
                        uVar10 = (**(code **)(*plVar7 + 0x10))(plVar7);
                        FUN_140725700(param_1,uVar10,uVar1);
                        return;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar8);
            }
        }
    }
    return;
}



undefined8 FUN_140725700(longlong param_1,longlong *param_2,undefined4 param_3)

{
    float *pfVar1;
    ulonglong uVar2;
    short sVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 uVar9;
    wchar_t *pwVar10;
    wchar_t *pwVar11;
    undefined8 *puVar12;
    short *psVar13;
    uint uVar14;
    int iVar15;
    bool bVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;

    if (*(longlong *)(param_1 + 0x350) == 0) {
        if ((((param_2 == (longlong *)0x0) || (*(int *)(param_1 + 0x6c) == 0)) ||
             (lVar4 = FUN_140207d60(), lVar4 == 0)) || (lVar4 = FUN_14022e600(), lVar4 == 0)) {
            return 0x80004005;
        }
        puVar5 = (undefined8 *)FUN_14018b280();
        puVar12 = (undefined8 *)0x0;
        puVar6 = puVar12;
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar6 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x350) = puVar6;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        *(undefined8 *)(param_1 + 0x378) = 0;
        *(undefined8 *)(param_1 + 0x380) = 0;
        *(undefined8 *)(param_1 + 0x388) = 0;
        *(undefined8 *)(param_1 + 0x390) = 0;
        *(undefined8 *)(param_1 + 0x398) = 0;
        **(undefined4 **)(param_1 + 0x350) = *(undefined4 *)(lVar4 + 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 4) = *(undefined4 *)(lVar4 + 8);
        *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 8) = *(undefined4 *)(lVar4 + 0xc);
        *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xc) = *(undefined4 *)(lVar4 + 0x10);
        *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x10) = *(undefined4 *)(lVar4 + 0x14);
        *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x14) = *(undefined4 *)(lVar4 + 0x18);
        FUN_140725cf0(*(longlong *)(param_1 + 0x350) + 0x18,*(undefined4 *)(lVar4 + 0x1c));
        if (*(int *)(lVar4 + 0x1c) != 0) {
            fVar20 = 0.0;
            puVar6 = puVar12;
            do {
                psVar13 = (short *)((longlong)puVar12 * 0x128 +
                                    *(longlong *)(*(longlong *)(param_1 + 0x350) + 0x20));
                FUN_1407e4830(psVar13,0,0x128);
                sVar3 = (short)puVar12 * 2;
                *psVar13 = *(short *)(lVar4 + 0x20 + (longlong)puVar12 * 4) + sVar3;
                psVar13[1] = *(short *)(lVar4 + 0x30 + (longlong)puVar12 * 4) + sVar3;
                *(undefined4 *)(psVar13 + 2) = *(undefined4 *)(lVar4 + 0x40 + (longlong)puVar12 * 4);
                *(undefined4 *)(psVar13 + 4) = *(undefined4 *)(lVar4 + 0x50 + (longlong)puVar12 * 4);
                *(undefined4 *)(psVar13 + 6) = *(undefined4 *)(lVar4 + 0x60 + (longlong)puVar12 * 4);
                *(undefined4 *)(psVar13 + 8) = *(undefined4 *)(lVar4 + 0x70 + (longlong)puVar12 * 4);
                *(undefined4 *)(psVar13 + 10) = *(undefined4 *)(lVar4 + 0x80 + (longlong)puVar12 * 4);
                FUN_140725e90(psVar13 + 0xc,lVar4 + 0x90 + (longlong)puVar12 * 4,&DAT_140b79ed0);
                FUN_140725e90(psVar13 + 0x18,lVar4 + 0xa0 + (longlong)puVar12 * 4,&DAT_140b79ed0);
                FUN_140725e90(psVar13 + 0x24,lVar4 + 0xb0 + (longlong)puVar12 * 4,&DAT_140b79ed0);
                FUN_140725e90(psVar13 + 0x30,lVar4 + 0xc0 + (longlong)puVar12 * 4,&DAT_140b63928);
                FUN_140725e90(psVar13 + 0x3c,lVar4 + 0xd0 + (longlong)puVar12 * 4,&DAT_140b63928);
                FUN_140725e90(psVar13 + 0x54,lVar4 + 0xe0 + (longlong)puVar12 * 4,&DAT_140b79ed0);
                FUN_140725e90(psVar13 + 0x60,lVar4 + 0xf0 + (longlong)puVar12 * 4,&DAT_140b63928);
                FUN_140725e90(psVar13 + 0x6c,lVar4 + 0x100 + (longlong)puVar12 * 4,&DAT_140b79ed0);
                FUN_140725e90(psVar13 + 0x78,lVar4 + 0x110 + (longlong)puVar12 * 4,&DAT_140b63928);
                *(undefined4 *)(psVar13 + 0x90) = *(undefined4 *)(lVar4 + 0x120 + (longlong)puVar12 * 4);
                fVar17 = *(float *)(lVar4 + 0x130 + (longlong)puVar12 * 4);
                fVar18 = *(float *)(lVar4 + 0x140 + (longlong)puVar12 * 4);
                fVar19 = *(float *)(lVar4 + 0x150 + (longlong)puVar12 * 4);
                if (DAT_140c5f470 < fVar20) {
                    lVar8 = CONCAT44(fVar18,fVar17) - CONCAT44(DAT_140c79714,DAT_140c79710);
                    if (lVar8 == 0) {
                        lVar8 = (ulonglong)(uint)fVar19 - (ulonglong)DAT_140c79718;
                    }
                    bVar16 = lVar8 == 0;
                }
                else {
                    bVar16 = (fVar17 - DAT_140c79710) * (fVar17 - DAT_140c79710) +
                             (fVar18 - DAT_140c79714) * (fVar18 - DAT_140c79714) + 0.0 <
                             DAT_140c5f470 * DAT_140c5f470;
                }
                if (bVar16) {
                    if (*(int *)(psVar13 + 0x84) != 0) {
                        FUN_14018b900(*(undefined8 *)(psVar13 + 0x88),0);
                        FUN_14018b900(*(undefined8 *)(psVar13 + 0x8c),0);
                        *(undefined4 *)(psVar13 + 0x84) = 0;
                        *(undefined8 *)(psVar13 + 0x88) = 0;
                        *(undefined8 *)(psVar13 + 0x8c) = 0;
                    }
                }
                else {
                    if (*(int *)(psVar13 + 0x84) != 1) {
                        uVar9 = FUN_14018c320(*(undefined8 *)(psVar13 + 0x88),4,2);
                        uVar7 = FUN_14018c320(*(undefined8 *)(psVar13 + 0x8c),0xc,2);
                        *(undefined8 *)(psVar13 + 0x88) = uVar9;
                        *(undefined4 *)(psVar13 + 0x84) = 1;
                        *(undefined8 *)(psVar13 + 0x8c) = uVar7;
                    }
                    **(undefined4 **)(psVar13 + 0x88) = 0;
                    pfVar1 = *(float **)(psVar13 + 0x8c);
                    *pfVar1 = fVar17;
                    pfVar1[1] = fVar18;
                    pfVar1[2] = fVar19;
                }
                pwVar11 = (wchar_t *)0x0;
                *(undefined4 *)(psVar13 + 0x92) = *(undefined4 *)(lVar4 + 0x160 + (longlong)puVar12 * 4);
                uVar2 = *(ulonglong *)(lVar4 + 0x170 + (longlong)puVar12 * 8);
                pwVar10 = pwVar11;
                if ((uVar2 != 0) && (pwVar10 = (wchar_t *)0x0, uVar2 <= DAT_140c3fe70)) {
                    pwVar10 = (wchar_t *)(uVar2 + DAT_140c3fe68);
                }
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (pwVar10[lVar8] != L'\0');
                if (lVar8 == 0) {
                    pwVar10 = L"Art\\Dev\\BLANK_Color.tex";
                }
                else {
                    pwVar10 = pwVar11;
                    if (uVar2 != 0) {
                        if (DAT_140c3fe70 < uVar2) {
                            pwVar10 = (wchar_t *)0x0;
                        }
                        else {
                            pwVar10 = (wchar_t *)(uVar2 + DAT_140c3fe68);
                        }
                    }
                }
                iVar15 = (int)puVar6;
                *(wchar_t **)(param_1 + 0x360 + (longlong)puVar6 * 8) = pwVar10;
                uVar2 = *(ulonglong *)(lVar4 + 400 + (longlong)puVar12 * 8);
                pwVar10 = pwVar11;
                if ((uVar2 != 0) && (pwVar10 = (wchar_t *)0x0, uVar2 <= DAT_140c3fe70)) {
                    pwVar10 = (wchar_t *)(uVar2 + DAT_140c3fe68);
                }
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (pwVar10[lVar8] != L'\0');
                if (lVar8 == 0) {
                    pwVar11 = L"Art\\Dev\\BLANK_Normal.tex";
                }
                else if (uVar2 != 0) {
                    if (DAT_140c3fe70 < uVar2) {
                        pwVar11 = (wchar_t *)0x0;
                    }
                    else {
                        pwVar11 = (wchar_t *)(uVar2 + DAT_140c3fe68);
                    }
                }
                uVar14 = (int)puVar12 + 1;
                puVar12 = (undefined8 *)(ulonglong)uVar14;
                puVar6 = (undefined8 *)(ulonglong)(iVar15 + 2);
                *(wchar_t **)(param_1 + 0x360 + (ulonglong)(iVar15 + 1) * 8) = pwVar11;
            } while (uVar14 < *(uint *)(lVar4 + 0x1c));
        }
    }
    uVar9 = (**(code **)(*param_2 + 0x40))
            (param_2,0,param_3,*(undefined8 *)(param_1 + 0x350),param_1 + 0x360);
    return uVar9;
}



void FUN_140725cf0(uint *param_1,uint param_2)

{
    uint uVar1;
    uint *puVar2;
    undefined8 *puVar3;
    int iVar4;
    uint *puVar5;

    if (param_2 != *param_1) {
        uVar1 = param_2;
        if (param_2 == 0) {
            puVar5 = (uint *)0x0;
        }
        else {
            puVar2 = (uint *)FUN_14018b280();
            if (puVar2 == (uint *)0x0) {
                puVar5 = (uint *)0x0;
            }
            else {
                iVar4 = param_2 - 1;
                *puVar2 = param_2;
                puVar5 = puVar2 + 2;
                if (-1 < iVar4) {
                    puVar3 = (undefined8 *)(puVar2 + 0xe);
                    do {
                        iVar4 = iVar4 + -1;
                        puVar3[-3] = 0;
                        puVar3[-2] = 0;
                        puVar3[-1] = 0;
                        *puVar3 = 0;
                        puVar3[1] = 0;
                        puVar3[2] = 0;
                        puVar3[3] = 0;
                        puVar3[4] = 0;
                        puVar3[5] = 0;
                        puVar3[6] = 0;
                        puVar3[7] = 0;
                        puVar3[8] = 0;
                        puVar3[9] = 0;
                        puVar3[10] = 0;
                        puVar3[0xb] = 0;
                        puVar3[0xf] = 0;
                        puVar3[0x10] = 0;
                        puVar3[0x11] = 0;
                        puVar3[0x12] = 0;
                        puVar3[0x13] = 0;
                        puVar3[0x14] = 0;
                        puVar3[0x15] = 0;
                        puVar3[0x16] = 0;
                        puVar3[0x17] = 0;
                        puVar3[0x18] = 0;
                        puVar3[0x19] = 0;
                        puVar3[0x1a] = 0;
                        puVar3[0x1b] = 0;
                        puVar3[0x1c] = 0;
                        puVar3[0x1d] = 0;
                        puVar3 = puVar3 + 0x25;
                    } while (-1 < iVar4);
                }
            }
            if (*param_1 < param_2) {
                uVar1 = *param_1;
            }
        }
        FUN_1407db590(puVar5,*(undefined8 *)(param_1 + 2),(ulonglong)uVar1 * 0x128);
        FUN_1407e4830(*(undefined8 *)(param_1 + 2),0,(ulonglong)uVar1 * 0x128);
        if (*(longlong *)(param_1 + 2) != 0) {
            FUN_1402ee640();
        }
        *(uint **)(param_1 + 2) = puVar5;
        *param_1 = param_2;
    }
    return;
}



void FUN_140725e90(int *param_1,float *param_2,float *param_3)

{
    undefined8 uVar1;
    undefined8 uVar2;

    if ((param_3 == (float *)0x0) || (9.536743e-07 <= (*param_2 - *param_3) * (*param_2 - *param_3)))
    {
        if (*param_1 != 1) {
            uVar1 = FUN_14018c320(*(undefined8 *)(param_1 + 2),4,2);
            uVar2 = FUN_14018c320(*(undefined8 *)(param_1 + 4),4,2);
            *(undefined8 *)(param_1 + 2) = uVar1;
            *(undefined8 *)(param_1 + 4) = uVar2;
            *param_1 = 1;
        }
        **(undefined4 **)(param_1 + 2) = 0;
        **(float **)(param_1 + 4) = *param_2;
    }
    else if (*param_1 != 0) {
        FUN_14018b900(*(undefined8 *)(param_1 + 2),0);
        FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
        *param_1 = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        return;
    }
    return;
}



undefined8 FUN_140725f70(longlong param_1,undefined8 param_2)

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
        local_res8 = 0x141e40618;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8b134,0x2e,&local_res8,&local_28);
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



undefined8 FUN_140726080(longlong param_1,undefined8 param_2)

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
        local_res8 = 0x141e40638;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8b138,0x2e,&local_res8,&local_28);
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



void FUN_140726180(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined local_68 [16];
    float local_58;
    float local_54;
    float local_50;
    float local_4c;

    if (param_3 == 0) {
        FUN_1404c3fd0(param_1,param_2,0);
    }
    else {
        fVar2 = (float)FUN_1408fe3d0(0);
        fVar3 = (float)FUN_1408fc950(0);
        pfVar1 = (float *)FUN_1401b2fe0(local_68,param_3);
        fVar5 = *pfVar1 * 0.5;
        fVar4 = (float)FUN_1408fe3d0(fVar5);
        fVar5 = (float)FUN_1408fc950(fVar5);
        local_58 = fVar5 * fVar2 * fVar3 + fVar4 * fVar3 * fVar2;
        local_54 = fVar4 * fVar3 * fVar3 - fVar5 * fVar2 * fVar2;
        local_50 = fVar5 * fVar3 * fVar2 - fVar4 * fVar2 * fVar3;
        local_4c = fVar4 * fVar2 * fVar2 + fVar5 * fVar3 * fVar3;
        FUN_1404c3fd0(param_1,param_2,&local_58);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407262d0(longlong **param_1,float *param_2)

{
    int iVar1;
    float *pfVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auStack344 [32];
    longlong **local_138;
    undefined4 *local_130;
    longlong *local_128;
    undefined4 local_120;
    undefined4 local_11c;
    undefined4 local_118;
    undefined4 local_114;
    undefined4 local_110;
    undefined8 local_108;
    undefined8 local_100;
    undefined4 local_f8;
    longlong *local_f0;
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined local_b8 [32];
    undefined local_98 [64];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
    pfVar2 = (float *)(**(code **)(*param_1[0x4c] + 0x498))(param_1[0x4c],local_b8);
    fVar7 = (pfVar2[4] + *pfVar2) * 0.5;
    fVar8 = (pfVar2[5] + pfVar2[1]) * 0.5;
    fVar10 = fVar8 * param_2[4] + fVar7 * *param_2 + param_2[8] * 0.0 + param_2[0xc];
    fVar11 = fVar8 * param_2[5] + fVar7 * param_2[1] + param_2[9] * 0.0 + param_2[0xd];
    fVar12 = fVar8 * param_2[6] + fVar7 * param_2[2] + param_2[10] * 0.0 + param_2[0xe];
    fVar8 = fVar8 * param_2[7] + fVar7 * param_2[3] + param_2[0xb] * 0.0 + param_2[0xf];
    local_b8._0_16_ = CONCAT412(fVar8,CONCAT48(fVar12,CONCAT44(fVar11,fVar10)));
    lVar3 = (**(code **)(*param_1[0x4c] + 0x498))(param_1[0x4c],local_d8);
    fVar7 = (*(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 4)) * 0.5;
    FUN_1407e4830(local_98,0,0x34);
    lVar3 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if ((lVar3 != 0) && (iVar1 = FUN_1405af080(lVar3), iVar1 != 0)) {
        fVar9 = 2.0;
        uVar6 = extraout_XMM0_Da;
        if ((DAT_140dc4cf0 & 1) == 0) {
            DAT_140dc4cf0 = DAT_140dc4cf0 | 1;
            lVar4 = FUN_140200220(0x385);
            uVar6 = extraout_XMM0_Da_00;
            DAT_140dc4cf4 = fVar9;
            if (lVar4 != 0) {
                DAT_140dc4cf4 = *(float *)(lVar4 + 0x18);
            }
        }
        if (*(int *)(lVar3 + 0x110) != 0) {
            for (lVar4 = *(longlong *)(DAT_140c659f8 + 0x70); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)
                    ) {
                if ((*(int *)(lVar4 + 0x10) == *(int *)(*(longlong *)(lVar3 + 0xe8) + 4)) &&
                    (*(int *)(lVar4 + 0x14) == *(int *)(lVar3 + 0xbc))) {
                    local_138 = param_1;
                    iVar1 = FUN_1404c8320(uVar6,DAT_140dc4cf4,*(undefined4 *)(param_1 + 0x42),
                                          *(undefined4 *)(param_1 + 0x43));
                    if ((iVar1 != 0) &&
                        (lVar3 = (*(code *)(*param_1)[0x10])(param_1,local_98,0),
                                *(float *)(lVar3 + 0x34) != param_2[0xd])) {
                        local_f0 = param_1[0x24];
                        local_128 = (longlong *)0x0;
                        local_118 = 9;
                        local_114 = 3;
                        fVar9 = (DAT_140dc4cf4 + fVar7) * fVar9;
                        local_11c = 0x3f800000;
                        local_108 = 0;
                        local_100 = 0;
                        local_f8 = 0;
                        local_d8 = CONCAT412(fVar8 + 0.0,
                                             CONCAT48(fVar12 + 0.0,CONCAT44(fVar9 + fVar11,fVar10 + 0.0)));
                        local_e8 = CONCAT412(fVar8 - 0.0,
                                             CONCAT48(fVar12 - 0.0,CONCAT44(fVar11 - fVar9,fVar10 - 0.0)));
                        local_130 = &local_118;
                        local_120 = 0;
                        local_110 = 1;
                        local_138 = &local_128;
                        iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1a8))
                                (*(longlong **)(DAT_140c65898 + 0x7248),local_d8,local_e8,&local_120);
                        if (iVar1 != 0) {
                            lVar3 = (**(code **)(*local_128 + 0x28))();
                            if ((((*(float *)(lVar3 + 0x20) - fVar7 <= local_b8._4_4_) &&
                                  (lVar3 = (**(code **)(*local_128 + 0x28))(),
                                          local_b8._4_4_ <= fVar7 + *(float *)(lVar3 + 0x20))) &&
                                 (plVar5 = (longlong *)(**(code **)(*local_128 + 0x18))(),
                                         plVar5 != (longlong *)0x0)) &&
                                (iVar1 = (**(code **)(*plVar5 + 0x18))(plVar5), iVar1 == 1)) {
                                (**(code **)(*local_128 + 0x28))();
                                lVar3 = FUN_1404cb280(DAT_140c659f8,plVar5);
                                if (lVar3 == 0) {
                                    (**(code **)(*plVar5 + 0x38))(plVar5);
                                }
                            }
                        }
                        if (local_128 != (longlong *)0x0) {
                            (**(code **)(*local_128 + 8))();
                        }
                    }
                    break;
                }
            }
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack344);
    return;
}



undefined4 FUN_140726670(longlong param_1)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined auVar9 [12];
    undefined auVar10 [12];
    int iVar11;
    longlong lVar12;
    longlong *plVar13;
    float *pfVar14;
    longlong lVar15;
    undefined4 uVar16;
    float *pfVar17;
    ulonglong uVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    undefined4 in_XMM6_Da;
    float fVar26;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    float fVar27;
    float fVar28;
    uint uVar29;
    float fVar30;
    uint uVar31;
    undefined4 local_res10;
    float local_108;
    float fStack260;
    float fStack256;
    float local_f8;
    float fStack244;
    float fStack240;
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    undefined4 local_48;
    undefined4 uStack68;
    undefined8 uStack64;
    undefined auVar32 [16];

    auVar32 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uStack64 = 0x14072668b;
    lVar15 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x50))();
    fVar20 = *(float *)(lVar15 + 0x30);
    fVar21 = *(float *)(lVar15 + 0x34);
    if ((DAT_140dc4cf8 & 1) == 0) {
        DAT_140dc4cf8 = DAT_140dc4cf8 | 1;
        uStack64 = 0x1407266ac;
        lVar15 = FUN_140200220(0x38a);
        if (lVar15 == 0) {
            DAT_140dc4cfc = 20.0;
        }
        else {
            DAT_140dc4cfc = *(float *)(lVar15 + 0x18);
        }
    }
    if ((DAT_140dc4cf8 & 2) == 0) {
        DAT_140dc4d00 = DAT_140dc4cfc * DAT_140dc4cfc;
        DAT_140dc4cf8 = DAT_140dc4cf8 | 2;
    }
    fVar20 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0) - fVar20;
    fVar21 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4) - fVar21;
    if (DAT_140dc4d00 < fVar20 * fVar20 + fVar21 * fVar21 + 0.0) {
        return 1;
    }
    local_48 = SUB164(auVar32,0);
    uStack68 = SUB164(auVar32 >> 0x20,0);
    if (*(longlong *)(param_1 + 0x260) == 0) {
        return 0;
    }
    uVar16 = 0;
    lVar15 = *(longlong *)(DAT_140c65898 + 0x6f30);
    local_res10 = 0;
    if (lVar15 != 0) {
        uStack64 = SUB168(auVar32 >> 0x40,0);
        fVar21 = 1.0;
        fVar20 = 0.0;
        uVar31 = 0x7fffffff;
        uVar29 = 0x80000000;
        fVar30 = 0.5;
        do {
            if (((*(longlong *)(lVar15 + 0x16e8) != 0) &&
                 (((*(int *)(lVar15 + 0x80) == 0x14 || (*(int *)(lVar15 + 0x80) == 0x17)) &&
                   (plVar13 = *(longlong **)(lVar15 + 0xcc0), plVar13 != (longlong *)0x0)))) &&
                (lVar12 = (**(code **)(*plVar13 + 0x108))(plVar13,0), lVar12 != 0)) {
                plVar13 = (longlong *)
                        (**(code **)(**(longlong **)(lVar15 + 0xcc0) + 0x108))
                        (*(longlong **)(lVar15 + 0xcc0),0);
                pfVar14 = (float *)(**(code **)(*plVar13 + 0x4c0))(plVar13);
                fVar28 = *(float *)(lVar15 + 0x11b0);
                fVar19 = *pfVar14;
                fVar24 = pfVar14[1];
                fVar27 = pfVar14[2];
                fVar22 = pfVar14[4];
                fVar23 = pfVar14[5];
                fVar8 = pfVar14[6];
                auVar10 = *(undefined (*) [12])(lVar15 + 0x11e0);
                auVar9 = *(undefined (*) [12])(lVar15 + 0x11e0);
                local_108 = SUB124(auVar9,0);
                local_f8 = SUB124(auVar10,0);
                fVar25 = fVar22;
                fVar26 = fVar19;
                if (fVar20 < fVar28) {
                    fVar25 = fVar19;
                    fVar26 = fVar22;
                }
                fVar2 = *(float *)(lVar15 + 0x11c0);
                fVar4 = fVar23;
                fVar5 = fVar24;
                if (fVar20 < fVar2) {
                    fVar4 = fVar24;
                    fVar5 = fVar23;
                }
                fVar3 = *(float *)(lVar15 + 0x11d0);
                fVar6 = fVar8;
                fVar7 = fVar27;
                if (fVar20 < fVar3) {
                    fVar6 = fVar27;
                    fVar7 = fVar8;
                }
                local_d8 = local_f8 + fVar28 * fVar26 + fVar2 * fVar5 + fVar3 * fVar7;
                fVar26 = *(float *)(lVar15 + 0x11b4);
                local_e8 = local_108 + fVar28 * fVar25 + fVar2 * fVar4 + fVar3 * fVar6;
                fStack244 = SUB124(auVar10 >> 0x20,0);
                fStack260 = SUB124(auVar9 >> 0x20,0);
                fVar28 = fVar22;
                fVar25 = fVar19;
                if (fVar20 < fVar26) {
                    fVar28 = fVar19;
                    fVar25 = fVar22;
                }
                fVar2 = *(float *)(lVar15 + 0x11c4);
                fVar4 = fVar23;
                fVar5 = fVar24;
                if (fVar20 < fVar2) {
                    fVar4 = fVar24;
                    fVar5 = fVar23;
                }
                fVar3 = *(float *)(lVar15 + 0x11d4);
                fVar6 = fVar8;
                fVar7 = fVar27;
                if (fVar20 < fVar3) {
                    fVar6 = fVar27;
                    fVar7 = fVar8;
                }
                fStack212 = fStack244 + fVar26 * fVar25 + fVar2 * fVar5 + fVar3 * fVar7;
                fVar25 = *(float *)(lVar15 + 0x11b8);
                fStack228 = fStack260 + fVar26 * fVar28 + fVar2 * fVar4 + fVar3 * fVar6;
                fStack240 = SUB124(auVar10 >> 0x40,0);
                fStack256 = SUB124(auVar9 >> 0x40,0);
                fVar28 = fVar22;
                if (fVar20 < fVar25) {
                    fVar28 = fVar19;
                    fVar19 = fVar22;
                }
                fVar26 = *(float *)(lVar15 + 0x11c8);
                fVar22 = fVar23;
                if (fVar20 < fVar26) {
                    fVar22 = fVar24;
                    fVar24 = fVar23;
                }
                fVar23 = *(float *)(lVar15 + 0x11d8);
                fVar2 = fVar8;
                if (fVar20 < fVar23) {
                    fVar2 = fVar27;
                    fVar27 = fVar8;
                }
                fStack224 = fStack256 + fVar25 * fVar28 + fVar26 * fVar22 + fVar23 * fVar2;
                fStack208 = fStack240 + fVar25 * fVar19 + fVar26 * fVar24 + fVar23 * fVar27;
                fStack220 = fVar20;
                fStack204 = fVar20;
                plVar13 = (longlong *)FUN_14018b280(0x38);
                if (plVar13 == (longlong *)0x0) {
                    plVar13 = (longlong *)0x0;
                }
                else {
                    *plVar13 = (longlong)&PTR_LAB_140b5fe88;
                    plVar13[1] = 1;
                    *(undefined4 *)(plVar13 + 2) = 0;
                    plVar13[3] = 0;
                    plVar13[4] = 0;
                    plVar13[5] = 0;
                    plVar13[6] = 0;
                }
                (**(code **)(**(longlong **)(param_1 + 0x260) + 0x528))
                        (*(longlong **)(param_1 + 0x260),&local_e8,4,plVar13);
                if ((plVar13 != (longlong *)0x0) &&
                    (iVar11 = (**(code **)(*plVar13 + 0x10))(plVar13), iVar11 != 0)) {
                    pfVar14 = (float *)(**(code **)(*plVar13 + 0x18))(plVar13);
                    iVar11 = (**(code **)(*plVar13 + 0x10))(plVar13);
                    pfVar17 = pfVar14 + (ulonglong)(uint)(iVar11 * 3) * 4;
                    lVar12 = (**(code **)(*plVar13 + 0x20))(plVar13);
                    uVar18 = 0;
                    uVar16 = local_res10;
                    if (pfVar14 < pfVar17) {
                        fVar28 = 1e-05;
                        do {
                            fVar27 = 0.0;
                            fVar25 = *(float *)(lVar12 + uVar18 * 0x10);
                            pfVar1 = (float *)(lVar12 + uVar18 * 0x10);
                            fVar24 = (fStack212 - fStack228) * fVar30;
                            fVar26 = *(float *)(lVar12 + 4 + uVar18 * 0x10);
                            fVar19 = (float)((uint)(*pfVar1 * *pfVar14 + pfVar1[1] * pfVar14[1] + 0.0) ^ uVar29);
                            iVar11 = FUN_1401c9b90(&local_e8,pfVar14,pfVar14 + 4,0);
                            if ((iVar11 != 0) ||
                                (((((local_e8 <= *pfVar14 && (*pfVar14 < local_d8)) &&
                                    ((fStack228 <= pfVar14[1] &&
                                      (((pfVar14[1] < fStack212 && (fStack224 <= pfVar14[2])) &&
                                        (pfVar14[2] < fStack208)))))) &&
                                   ((local_e8 <= pfVar14[4] && (pfVar14[4] < local_d8)))) &&
                                  ((fStack228 <= pfVar14[5] &&
                                    (((pfVar14[5] < fStack212 && (fStack224 <= pfVar14[6])) &&
                                      (pfVar14[6] < fStack208)))))))) {
                                LAB_1404c371b:
                                local_res10 = 1;
                                uVar16 = local_res10;
                                break;
                            }
                            fVar22 = (local_d8 + local_e8) * 0.5 - fVar27;
                            fVar23 = (fStack212 + fStack228) * 0.5 - fVar24;
                            fVar24 = (fVar22 - ((local_d8 + local_e8) * 0.5 + fVar27)) * fVar25 +
                                     (fVar23 - ((fStack212 + fStack228) * 0.5 + fVar24)) * fVar26 + 0.0;
                            if (((fVar28 <= (float)((uint)fVar24 & uVar31)) &&
                                 (fVar24 = (fVar25 * fVar22 + fVar26 * fVar23 + 0.0 + fVar19) / fVar24,
                                         fVar20 <= fVar24)) && (fVar24 < fVar21)) goto LAB_1404c371b;
                            pfVar14 = pfVar14 + 0xc;
                            uVar18 = (ulonglong)((int)uVar18 + 1);
                        } while (pfVar14 < pfVar17);
                    }
                }
                (**(code **)(*plVar13 + 8))(plVar13);
            }
            lVar15 = *(longlong *)(lVar15 + 0x60);
        } while (lVar15 != 0);
    }
    return uVar16;
}



undefined8 * FUN_140726760(undefined8 *param_1)

{
    int iVar1;
    int *piVar2;
    undefined8 uVar3;

    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    *param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    FUN_1407e4830(param_1 + 0xc,0,0x310);
    piVar2 = DAT_140c63750;
    *(undefined4 *)(param_1 + 0x8e) = DAT_140c79888;
    *(undefined4 *)((longlong)param_1 + 0x474) = DAT_140c7988c;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    iVar1 = DAT_140c54730;
    if (*piVar2 < DAT_140c54730) {
        iVar1 = *piVar2;
    }
    iVar1 = *(int *)(&DAT_140c54740 + (longlong)iVar1 * 4);
    param_1[0x96] = 0;
    *(int *)(param_1 + 0x95) = iVar1 + DAT_140c636a8;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    *(undefined *)(param_1 + 0x9a) = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    *(undefined4 *)(param_1 + 0x9e) = 0;
    param_1[0x9f] = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined (*) [16])(param_1 + 0xa2) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0xa4) = ZEXT816(0);
    param_1[0xa6] = 0;
    *(undefined (*) [16])(param_1 + 0xa8) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0xaa) = 0;
    param_1[0xab] = 0;
    *(undefined (*) [16])(param_1 + 0xac) = ZEXT816(0);
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    uVar3 = FUN_14018b280(0x18,0);
    param_1[0xb8] = uVar3;
    *(undefined8 *)uVar3 = uVar3;
    *(undefined8 *)(param_1[0xb8] + 8) = param_1[0xb8];
    *(undefined4 *)(param_1 + 0xb9) = 0;
    uVar3 = FUN_14018b280(0x18,0);
    param_1[0xbb] = uVar3;
    *(undefined8 *)uVar3 = uVar3;
    *(undefined8 *)(param_1[0xbb] + 8) = param_1[0xbb];
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbf] = 0;
    param_1[0xbe] = 0;
    param_1[0xc0] = 0;
    param_1[0xc1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    return param_1;
}



void FUN_1407269a0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    FUN_140726ac0();
    plVar3 = *(longlong **)(param_1 + 0x590);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
        *(undefined8 *)(param_1 + 0x590) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x5f0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x5e0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x5d8);
    if (plVar3 != *(longlong **)(param_1 + 0x5d8)) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x5d8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(param_1 + 0x5d8);
    *(longlong *)(*(longlong *)(param_1 + 0x5d8) + 8) = *(longlong *)(param_1 + 0x5d8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x5d8),0);
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x5c0);
    if (plVar3 != *(longlong **)(param_1 + 0x5c0)) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x5c0));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x5c0);
    *(longlong *)(*(longlong *)(param_1 + 0x5c0) + 8) = *(longlong *)(param_1 + 0x5c0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x5c0),0);
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
        FUN_1401a4a00();
    }
    return;
}



void FUN_140726ac0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined auStack856 [32];
    undefined local_338 [784];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack856;
    lVar2 = param_1[0xb4];
    param_1[0x99] = 0;
    param_1[0x98] = 0;
    if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
            *(undefined8 *)(lVar2 + 0x10) = 0;
        }
        (**(code **)(*(longlong *)param_1[0xb4] + 8))();
        param_1[0xb4] = 0;
    }
    lVar2 = param_1[0xb5];
    if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
            *(undefined8 *)(lVar2 + 0x10) = 0;
        }
        (**(code **)(*(longlong *)param_1[0xb5] + 8))();
        param_1[0xb5] = 0;
    }
    if (param_1[0xae] != 0) {
        FUN_140726dc0();
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        if (DAT_140c65c48 == lVar2) {
            DAT_140c65c48 = 0;
        }
        FUN_14018b900(lVar2,0);
    }
    *param_1 = 0;
    FUN_1407e4830(local_338,0,0x310);
    FUN_1402c8730(param_1 + 0xc,local_338);
    if ((longlong *)param_1[0x9c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x9c] + 8))();
        param_1[0x9c] = 0;
    }
    if ((longlong *)param_1[0x9b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x9b] + 8))();
        param_1[0x9b] = 0;
    }
    if (param_1[0xaf] != 0) {
        FUN_140726e40();
    }
    if (param_1[0xb0] != 0) {
        FUN_140726e40();
    }
    if (param_1[0xb1] != 0) {
        FUN_140726e40();
    }
    lVar2 = param_1[0xab];
    if (lVar2 != 0) {
        FUN_140789320(lVar2);
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x9f];
    if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + -8);
        lVar4 = (longlong)iVar1 * 0x98 + lVar2;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar4 = lVar4 + -0x98;
            FUN_140789c40(lVar4);
        }
        FUN_14018b900(lVar2 + -8,0);
    }
    lVar2 = param_1[0x94];
    if (lVar2 != 0) {
        FUN_14078a5c0(lVar2);
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x93];
    if (lVar2 != 0) {
        FUN_14078aa20(lVar2);
        FUN_14018b900(lVar2,0);
    }
    lVar2 = param_1[0x92];
    if (lVar2 != 0) {
        FUN_14078adf0(lVar2);
        FUN_14018b900(lVar2,0);
    }
    if ((longlong *)param_1[0xc1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc1] + 8))();
        param_1[0xc1] = 0;
    }
    if ((longlong *)param_1[0xc0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc0] + 8))();
        param_1[0xc0] = 0;
    }
    if ((longlong *)param_1[0x90] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x90] + 8))();
        param_1[0x90] = 0;
    }
    if ((longlong *)param_1[0x91] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x91] + 8))();
        param_1[0x91] = 0;
    }
    if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x8f] + 8))();
        param_1[0x8f] = 0;
    }
    plVar3 = (longlong *)param_1[0xb2];
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
        param_1[0xb2] = 0;
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack856);
    return;
}



undefined8 * FUN_140726dc0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b77fc0;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 * FUN_140726e40(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b78010;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    *param_1 = &PTR_FUN_140b781f0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140726ec0(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    int iVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong lVar12;
    int iVar13;
    ulonglong uVar14;
    uint uVar15;
    float fVar17;
    float fVar18;
    undefined auVar19 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined4 uVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    undefined auStack344 [32];
    undefined *local_138;
    undefined local_128 [8];
    undefined8 uStack288;
    undefined local_118 [16];
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 local_100;
    undefined4 uStack252;
    float *local_f8 [10];
    ulonglong local_a8;
    undefined8 *puVar16;

    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
    puVar16 = (undefined8 *)0x0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    local_f8[0] = (float *)(param_1 + 0x370);
    iVar13 = 2;
    fVar32 = _DAT_140c77870 + _DAT_140c77880 * 3.0;
    fVar33 = fRam0000000140c77874 + fRam0000000140c77884 * 3.0;
    fVar34 = fRam0000000140c77878 + fRam0000000140c77888 * 3.0;
    fVar35 = fRam0000000140c7787c + fRam0000000140c7788c * 3.0;
    fVar20 = fVar32 - 0.0;
    fVar21 = fVar33 - 0.0;
    fVar22 = fVar34 - 0.0;
    fVar23 = (fVar35 - 0.0) * (fVar35 - 0.0);
    _local_128 = CONCAT412(fVar23,CONCAT48(fVar22 * fVar22,CONCAT44(fVar21 * fVar21,fVar20 * fVar20)))
            ;
    uVar14 = (ulonglong)(fVar20 * fVar20 < fVar21 * fVar21);
    lVar11 = 1 - uVar14;
    if (*(float *)(local_128 + uVar14 * 4) <= 0.0 && *(float *)(local_128 + uVar14 * 4) != 0.0) {
        uVar14 = 2;
    }
    auVar19 = ZEXT416((uint)(*(float *)(local_118 + (lVar11 + uVar14) * -4 + -4) +
                             *(float *)(local_128 + lVar11 * 4))) & (undefined  [16])0xffffffffffffffff
            ;
    fVar17 = SUB164(auVar19,0) + *(float *)(local_128 + uVar14 * 4);
    auVar19 = CONCAT124(SUB1612(auVar19 >> 0x20,0),fVar17);
    if (fVar17 <= DAT_140c3d7d8) {
        fVar23 = 0.0;
        uStack288._0_4_ = 0.0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        fVar22 = (float)uStack288;
    }
    else {
        auVar19 = sqrtps(auVar19,auVar19);
        fVar17 = 1.0 / SUB164(auVar19,0);
        fVar20 = fVar20 * fVar17;
        fVar21 = fVar21 * fVar17;
        fVar22 = fVar22 * fVar17;
    }
    fVar17 = fRam0000000140c77874 * 0.0 - fVar21 * fRam0000000140c77878;
    fVar24 = fVar20 * 0.0 - _DAT_140c77870 * 0.0;
    uStack288._0_4_ = fVar21 * _DAT_140c77870 - fVar20 * fRam0000000140c77874;
    fVar27 = fVar23 * fRam0000000140c7787c - fVar23 * fRam0000000140c7787c;
    local_118 = CONCAT412(fVar27,CONCAT48((float)uStack288,CONCAT44(fVar24,fVar17)));
    fVar27 = fVar27 * fVar27;
    _local_128 = CONCAT412(fVar27,CONCAT48((float)uStack288 * (float)uStack288,
                                           CONCAT44(fVar24 * fVar24,fVar17 * fVar17)));
    uVar14 = (ulonglong)(fVar17 * fVar17 < fVar24 * fVar24);
    lVar11 = 1 - uVar14;
    if (*(float *)(local_128 + uVar14 * 4) <= 0.0 && *(float *)(local_128 + uVar14 * 4) != 0.0) {
        uVar14 = 2;
    }
    auVar19 = ZEXT416((uint)(*(float *)(local_118 + (lVar11 + uVar14) * -4 + -4) +
                             *(float *)(local_128 + lVar11 * 4))) & (undefined  [16])0xffffffffffffffff
            ;
    fVar18 = SUB164(auVar19,0) + *(float *)(local_128 + uVar14 * 4);
    auVar19 = CONCAT124(SUB1612(auVar19 >> 0x20,0),fVar18);
    if (fVar18 <= DAT_140c3d7d8) {
        fVar27 = 0.0;
        uStack288._0_4_ = 0.0;
        fVar24 = 0.0;
        fVar17 = 0.0;
    }
    else {
        auVar19 = sqrtps(auVar19,auVar19);
        fVar18 = 1.0 / SUB164(auVar19,0);
        fVar17 = fVar17 * fVar18;
        fVar24 = fVar24 * fVar18;
        uStack288._0_4_ = (float)uStack288 * fVar18;
    }
    *local_f8[0] = fVar17;
    *(float *)(param_1 + 0x378) = fVar20;
    *(float *)(param_1 + 0x380) = fVar24;
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x38c) = 0;
    *(float *)(param_1 + 0x388) = fVar21;
    *(float *)(param_1 + 0x390) = (float)uStack288;
    *(float *)(param_1 + 0x398) = fVar22;
    *(undefined4 *)(param_1 + 0x39c) = 0;
    _local_128 = CONCAT412(fVar27 * fVar35,
                           CONCAT48((float)uStack288 * fVar34,
                                    CONCAT44(fVar24 * fVar33,fVar17 * fVar32)));
    fVar18 = fVar21 * 0.0 - fVar24 * fVar22;
    fVar25 = fVar17 * fVar22 - fVar20 * 0.0;
    fVar26 = fVar24 * fVar20 - fVar17 * fVar21;
    *(float *)(param_1 + 0x374) = fVar18;
    *(float *)(param_1 + 900) = fVar25;
    fVar18 = fVar18 * fVar32;
    fVar25 = fVar25 * fVar33;
    *(float *)(param_1 + 0x394) = fVar26;
    uVar14 = (ulonglong)(fVar17 * fVar32 < fVar24 * fVar33);
    lVar11 = 1 - uVar14;
    if (*(float *)(local_128 + uVar14 * 4) <= 0.0 && *(float *)(local_128 + uVar14 * 4) != 0.0) {
        uVar14 = 2;
    }
    _local_128 = CONCAT412((fVar27 * fVar23 - fVar27 * fVar23) * fVar35,
                           CONCAT48(fVar26 * fVar34,CONCAT44(fVar25,fVar18)));
    *(uint *)(param_1 + 0x3a0) =
            (uint)(*(float *)(local_118 + (lVar11 + uVar14) * -4 + -4) +
                   *(float *)(local_128 + lVar11 * 4) + *(float *)(local_128 + uVar14 * 4)) ^ 0x80000000;
    uVar14 = (ulonglong)(fVar18 < fVar25);
    lVar11 = 1 - uVar14;
    if (*(float *)(local_128 + uVar14 * 4) <= 0.0 && *(float *)(local_128 + uVar14 * 4) != 0.0) {
        uVar14 = 2;
    }
    _local_128 = CONCAT412(fVar23 * fVar35,
                           CONCAT48(fVar22 * fVar34,CONCAT44(fVar21 * fVar33,fVar20 * fVar32)));
    *(uint *)(param_1 + 0x3a4) =
            (uint)(*(float *)(local_118 + (lVar11 + uVar14) * -4 + -4) +
                   *(float *)(local_128 + lVar11 * 4) + *(float *)(local_128 + uVar14 * 4)) ^ 0x80000000;
    uVar14 = (ulonglong)(fVar20 * fVar32 < fVar21 * fVar33);
    lVar11 = 1 - uVar14;
    fVar20 = *(float *)(local_128 + uVar14 * 4);
    fVar21 = *(float *)(local_128 + uVar14 * 4);
    *(undefined4 *)(param_1 + 0x3ac) = 0x3f800000;
    if (fVar21 <= 0.0 && fVar20 != 0.0) {
        uVar14 = 2;
    }
    *(uint *)(param_1 + 0x3a8) =
            (uint)(*(float *)(local_118 + (lVar11 + uVar14) * -4 + -4) +
                   *(float *)(local_128 + lVar11 * 4) + *(float *)(local_128 + uVar14 * 4)) ^ 0x80000000;
    FUN_1401afc20(local_f8,param_1 + 0x3b0);
    pplVar1 = (longlong **)(param_1 + 0x478);
    _local_128 = CONCAT88(uStack288,0x431600003dcccccd);
    *(undefined8 *)(param_1 + 0x470) = 0x431600003dcccccd;
    iVar6 = FUN_1402ec590();
    if (iVar6 < 0) {
        LAB_140727a28:
        *(undefined8 *)(param_1 + 8) = 1;
    }
    else {
        pplVar2 = (longlong **)(param_1 + 0x488);
        iVar6 = (**(code **)(**pplVar1 + 0x28))
                (*pplVar1,L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_AttachmentScene_000.m3",
                 pplVar2,0);
        if (iVar6 < 0) goto LAB_140727a28;
        (**(code **)(**pplVar2 + 0x2d8))(*pplVar2,0x3e,1);
        (**(code **)(**pplVar2 + 0x2d8))(*pplVar2,0x3f,1);
        (**(code **)(**pplVar2 + 0x2d8))(*pplVar2,0xb3,1);
        (**(code **)(**pplVar2 + 0x2d8))(*pplVar2,0xb4,1);
        (**(code **)(**pplVar2 + 0x2d8))(*pplVar2,0xb5,1);
        (**(code **)(**pplVar2 + 0x2d8))(*pplVar2,0xb6,1);
        (**(code **)(**pplVar2 + 0x288))(*pplVar2,FUN_140729540,param_1);
        local_118._0_8_ = 0x45e;
        local_118._8_8_ = 0x3f800000;
        local_108 = 0;
        uStack260 = 0;
        local_100 = 0;
        uStack252 = 0;
        (**(code **)(**pplVar2 + 0x248))(*pplVar2,0,local_118);
        (**(code **)(**pplVar2 + 0x2a8))(*pplVar2,FUN_1407296b0,param_1);
        (**(code **)(**pplVar2 + 0x160))(*pplVar2,1);
        local_118 = CONCAT88(0x1407294f0,0x140729490);
        local_108 = (undefined4)param_1;
        uStack260 = (undefined4)((ulonglong)param_1 >> 0x20);
        puVar7 = (undefined8 *)FUN_14018b280(0x70);
        puVar8 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *(undefined4 *)(puVar7 + 9) = 0;
            *(undefined *)((longlong)puVar7 + 0x4c) = 0;
            puVar7[10] = 0;
            puVar7[0xb] = 0;
            *puVar7 = &PTR_FUN_140b781a0;
            puVar7[0xd] = 0;
            puVar7[0xc] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar8 = puVar7;
        }
        *(undefined8 **)(param_1 + 0x490) = puVar8;
        iVar6 = FUN_14078aea0(puVar8,param_1,*pplVar1,local_118);
        if (iVar6 < 0) goto LAB_140727a28;
        local_118 = CONCAT88(param_1,0x14072a8f0);
        lVar11 = FUN_14018b280(0x70);
        puVar8 = puVar16;
        if (lVar11 != 0) {
            puVar8 = (undefined8 *)FUN_14078a9a0(lVar11);
        }
        *(undefined8 **)(param_1 + 0x498) = puVar8;
        iVar6 = FUN_14078aac0(puVar8,param_1,*pplVar1,local_118);
        if (iVar6 < 0) goto LAB_140727a28;
        lVar11 = FUN_14018b280(0x60);
        puVar8 = puVar16;
        if (lVar11 != 0) {
            puVar8 = (undefined8 *)FUN_14078a550(lVar11);
        }
        *(undefined8 **)(param_1 + 0x4a0) = puVar8;
        iVar6 = FUN_14078a660(puVar8,param_1,*pplVar1);
        if ((iVar6 < 0) ||
            (iVar6 = (**(code **)(**pplVar1 + 0x28))
                    (*pplVar1,L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_Table_000.m3",
                     param_1 + 0x480,0), iVar6 < 0)) goto LAB_140727a28;
        (**(code **)(**pplVar2 + 0x380))(*pplVar2,0x15,*(undefined8 *)(param_1 + 0x480));
        local_118 = CONCAT88(0x3f800000,0x96);
        local_108 = 0;
        uStack260 = 2;
        local_100 = 0;
        uStack252 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x480) + 0x248))
                (*(longlong **)(param_1 + 0x480),0,local_118);
        puVar7 = (undefined8 *)FUN_14018b280(0x38);
        puVar8 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar7 = &PTR_FUN_140b77fc0;
            puVar7[6] = 0;
            puVar8 = puVar7;
        }
        *(undefined8 **)(param_1 + 0x570) = puVar8;
        iVar6 = FUN_140789010(puVar8,param_1,*pplVar1);
        if (iVar6 < 0) goto LAB_140727a28;
        puVar7 = (undefined8 *)FUN_14018b280(0x40);
        puVar8 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            *puVar7 = &PTR_LAB_140b78010;
            puVar7[5] = 0;
            *(undefined4 *)(puVar7 + 6) = 0;
            puVar7[7] = 0;
            puVar8 = puVar7;
        }
        *(undefined8 **)(param_1 + 0x578) = puVar8;
        iVar6 = FUN_140789170(puVar8,param_1,*pplVar1,0x79);
        if (iVar6 < 0) goto LAB_140727a28;
        puVar7 = (undefined8 *)FUN_14018b280(0x40);
        puVar8 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar7 = &PTR_LAB_140b78010;
            *(undefined4 *)(puVar7 + 6) = 0;
            puVar7[7] = 0;
            puVar8 = puVar7;
        }
        *(undefined8 **)(param_1 + 0x580) = puVar8;
        iVar6 = FUN_140789170(puVar8,param_1,*pplVar1,0x78);
        if (iVar6 < 0) goto LAB_140727a28;
        puVar7 = (undefined8 *)FUN_14018b280(0x40);
        puVar8 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar7 = &PTR_LAB_140b78010;
            *(undefined4 *)(puVar7 + 6) = 0;
            puVar7[7] = 0;
            puVar8 = puVar7;
        }
        *(undefined8 **)(param_1 + 0x588) = puVar8;
        iVar6 = FUN_140789170(puVar8,param_1,*pplVar1,0x7a);
        if (iVar6 < 0) goto LAB_140727a28;
        puVar7 = (undefined8 *)FUN_14018b280();
        puVar8 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar7 = &PTR_FUN_140b78060;
            *(undefined (*) [16])(puVar7 + 8) = CONCAT412(uVar31,CONCAT48(uVar30,CONCAT44(uVar29,uVar28)))
                    ;
            *(undefined4 *)(puVar7 + 10) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x54) = 1;
            puVar7[0xb] = 0;
            puVar7[0xc] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar8 = puVar7;
        }
        local_138 = local_128;
        *(undefined8 **)(param_1 + 0x558) = puVar8;
        _local_128 = CONCAT88(param_1,0x14072a8c0);
        iVar6 = FUN_1407893a0(puVar8);
        if (iVar6 < 0) goto LAB_140727a28;
        puVar9 = (undefined4 *)FUN_14018b280(0x1d0);
        puVar8 = puVar16;
        if (puVar9 != (undefined4 *)0x0) {
            puVar8 = (undefined8 *)(puVar9 + 2);
            *puVar9 = 3;
            puVar7 = (undefined8 *)(puVar9 + 4);
            do {
                *puVar7 = 0;
                puVar7[1] = 0;
                iVar13 = iVar13 + -1;
                puVar7[2] = 0;
                puVar7[3] = 0;
                puVar7[-1] = &PTR_FUN_140b780b0;
                puVar7[4] = 0;
                *(undefined4 *)(puVar7 + 5) = 0;
                puVar7[9] = 0;
                puVar7[10] = 0;
                *(undefined4 *)(puVar7 + 0xb) = 3;
                puVar7[0xc] = 0;
                puVar7[0xd] = 0;
                *(undefined4 *)(puVar7 + 0xe) = 0;
                puVar7[0xf] = 0;
                puVar7[0x10] = 0;
                *(undefined4 *)(puVar7 + 0x11) = 0;
                puVar7[6] = 0;
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7 = puVar7 + 0x13;
            } while (-1 < iVar13);
        }
        *(undefined8 **)(param_1 + 0x4f8) = puVar8;
        lVar11 = 0;
        plVar3 = (longlong *)(param_1 + 0x4b8);
        puVar9 = &DAT_140b46730;
        do {
            plVar4 = *pplVar1;
            uVar28 = *puVar9;
            plVar5 = *pplVar2;
            lVar12 = *(longlong *)(param_1 + 0x4f8) + lVar11;
            *(longlong *)(lVar12 + 0x18) = param_1;
            *(longlong **)(lVar12 + 0x20) = plVar4;
            if (*(longlong *)(lVar12 + 8) == 0) {
                *(longlong **)(lVar12 + 8) = plVar3;
                plVar4 = (longlong *)(lVar12 + 0x10);
                *plVar4 = *plVar3;
                *plVar3 = lVar12;
                if (*plVar4 != 0) {
                    *(longlong **)(*plVar4 + 8) = plVar4;
                }
            }
            *(undefined **)(lVar12 + 0x38) = &LAB_14072a790;
            *(int *)(lVar12 + 0x28) = (int)puVar16;
            uVar15 = (int)puVar16 + 1;
            puVar16 = (undefined8 *)(ulonglong)uVar15;
            puVar9 = puVar9 + 1;
            lVar11 = lVar11 + 0x98;
            *(undefined **)(lVar12 + 0x40) = &DAT_14072a7d0;
            *(longlong **)(lVar12 + 0x70) = plVar5;
            *(undefined4 *)(lVar12 + 0x78) = uVar28;
            *(longlong *)(lVar12 + 0x48) = param_1;
        } while (uVar15 < 3);
        (**(code **)(**pplVar1 + 0x30))(*pplVar1,DAT_140c636a8,0);
        local_138 = (undefined *)((ulonglong)local_138 & 0xffffffff00000000);
        (**(code **)(**pplVar1 + 0x50))(*pplVar1,param_1 + 0x370,param_1 + 0x3b0,param_1 + 0x470);
        iVar13 = FUN_1407c2ca0(param_1 + 0x4d8);
        if ((iVar13 < 0) ||
            (iVar13 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x18))
                    (*(longlong **)(param_1 + 0x4d8),L"Sky\\MMFortunes_001.sky",
                     param_1 + 0x4e0), iVar13 < 0)) goto LAB_140727a39;
        iVar13 = FUN_140727a70(param_1);
        if (iVar13 < 0) goto LAB_140727a28;
        FUN_140198d60();
        iVar13 = (**(code **)(*DAT_140c65670 + 0xa0))
                (DAT_140c65670,L"UI\\Cursors\\Point.tex",param_1 + 0x600);
        if (iVar13 < 0) goto LAB_140727a39;
        _local_128 = CONCAT124(stack0xfffffffffffffedc,0x9824);
        uVar10 = FUN_140484600(DAT_140c65918 + 0x50,local_128);
        lVar11 = FUN_1404846c0(uVar10);
        *(longlong *)(param_1 + 0x4b0) = lVar11;
        if (lVar11 == 0) goto LAB_140727a28;
        iVar13 = FUN_1407129a0(param_1 + 0x5a0);
        if ((iVar13 < 0) || (iVar13 = FUN_1407129a0(param_1 + 0x5a8), iVar13 < 0)) goto LAB_140727a39;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xb;
    LAB_140727a39:
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack344);
    return;
}



undefined8 FUN_140727a70(undefined8 *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 extraout_XMM0_Qa;

    lVar3 = FUN_14018b280(0xe30,0);
    puVar8 = (undefined8 *)0x0;
    puVar4 = puVar8;
    if (lVar3 != 0) {
        puVar4 = (undefined8 *)
                FUN_1400e2ef0(lVar3,L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
                              L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",0,0);
    }
    param_1[0xb2] = puVar4;
    iVar2 = *(int *)((longlong)puVar4 + 0x3c);
    if (0x556 < iVar2) {
        iVar2 = 0x556;
    }
    *(int *)(puVar4 + 7) = iVar2;
    iVar2 = FUN_1400e4e80(param_1[0xb2],0);
    if (-1 < iVar2) {
        FUN_1400e7190(param_1[0xb2],L"GachaDialogs",0);
        FUN_1400e7190(param_1[0xb2],L"DefaultStratum",0);
        FUN_1400e7190(param_1[0xb2],L"GachaScene",0);
        FUN_1400e9c20(param_1[0xb2],&PTR_s_OpenLinkToStore_140c5ebf0,5);
        FUN_140508240(param_1[0xb2]);
        lVar3 = param_1[0xb2];
        puVar5 = (undefined8 *)FUN_14018b280(8);
        puVar4 = puVar8;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b66da8;
            puVar4 = puVar5;
        }
        FUN_1400f1b30(lVar3 + 0x180,puVar4);
        lVar6 = FUN_14018b280(1);
        puVar4 = puVar8;
        if (lVar6 != 0) {
            puVar4 = (undefined8 *)FUN_1406f26c0(lVar6,lVar3 + 0x180);
        }
        *param_1 = puVar4;
        lVar3 = *(longlong *)(lVar3 + 400);
        FUN_140413a20(lVar3);
        FUN_1406481d0(lVar3);
        FUN_140057020(lVar3,"AccountItemLib",&PTR_s_GetPendingAccountItemGroups_140b69660);
        FUN_1404e7f60(lVar3);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
        FUN_140766a30(lVar3);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
        FUN_1404f2860(lVar3);
        FUN_140709460(lVar3);
        FUN_14070f700(lVar3);
        FUN_1406f1490(lVar3);
        FUN_140711f80(lVar3);
        lVar3 = param_1[0xb2];
        *(undefined4 *)(lVar3 + 0xa08) = 0;
        *(longlong *)(lVar3 + 0x9c8) = lVar3;
        FUN_1400e9c20(lVar3,&PTR_s_GetLoadingModuleFolder_140c57760,1);
        lVar3 = param_1[0xb2];
        lVar6 = FUN_14018b280(0xa18,0);
        puVar4 = puVar8;
        if (lVar6 != 0) {
            puVar4 = (undefined8 *)
                    FUN_1401352f0(lVar6,*(undefined8 *)(lVar3 + 0x9c8),*(undefined4 *)(lVar3 + 0xa08),
                                  L"ProtectedAddons",L"Gacha",1,2,0,0);
        }
        if (*(char *)(puVar4 + 0x27) == '\0') {
            FUN_1401356f0(puVar4);
            FUN_14018b900(puVar4,0);
        }
        else {
            lVar1 = *(longlong *)(lVar3 + 0x9d8);
            lVar6 = lVar1 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar3 + 0x9d0),lVar6,8);
            *(undefined8 **)(lVar7 + lVar1 * 8) = puVar4;
            if (*(longlong *)(lVar3 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar3 + 0x9d0),*(longlong *)(lVar3 + 0x9d8) << 3);
                lVar1 = *(longlong *)(lVar3 + 0x9d0);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                *(longlong *)(lVar3 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar3 + 0x9d8) = lVar6;
        }
        lVar3 = param_1[0xb2];
        lVar6 = FUN_14018b280(0xa18,0);
        puVar4 = puVar8;
        if (lVar6 != 0) {
            puVar4 = (undefined8 *)
                    FUN_1401352f0(lVar6,*(undefined8 *)(lVar3 + 0x9c8),*(undefined4 *)(lVar3 + 0xa08),
                                  &DAT_1409f8d9c,L"ToolTips",1,2,0,0);
        }
        if (*(char *)(puVar4 + 0x27) == '\0') {
            FUN_1401356f0(puVar4);
            FUN_14018b900(puVar4,0);
        }
        else {
            lVar1 = *(longlong *)(lVar3 + 0x9d8);
            lVar6 = lVar1 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar3 + 0x9d0),lVar6,8);
            *(undefined8 **)(lVar7 + lVar1 * 8) = puVar4;
            if (*(longlong *)(lVar3 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar3 + 0x9d0),*(longlong *)(lVar3 + 0x9d8) << 3);
                lVar1 = *(longlong *)(lVar3 + 0x9d0);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                *(longlong *)(lVar3 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar3 + 0x9d8) = lVar6;
        }
        lVar3 = param_1[0xb2];
        lVar6 = FUN_14018b280(0xa18,0);
        puVar4 = puVar8;
        if (lVar6 != 0) {
            puVar4 = (undefined8 *)
                    FUN_1401352f0(lVar6,*(undefined8 *)(lVar3 + 0x9c8),*(undefined4 *)(lVar3 + 0xa08),
                                  &DAT_1409f8d8c,L"Util",1,2,0,0);
        }
        if (*(char *)(puVar4 + 0x27) == '\0') {
            FUN_1401356f0(puVar4);
            FUN_14018b900(puVar4,0);
        }
        else {
            lVar1 = *(longlong *)(lVar3 + 0x9d8);
            lVar6 = lVar1 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar3 + 0x9d0),lVar6,8);
            *(undefined8 **)(lVar7 + lVar1 * 8) = puVar4;
            if (*(longlong *)(lVar3 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar3 + 0x9d0),*(longlong *)(lVar3 + 0x9d8) << 3);
                lVar1 = *(longlong *)(lVar3 + 0x9d0);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                *(longlong *)(lVar3 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar3 + 0x9d8) = lVar6;
        }
        FUN_140139ae0(param_1[0xb2] + 0x9c0,0);
        lVar3 = param_1[0xb2];
        lVar6 = *(longlong *)(lVar3 + 0x170);
        puVar4 = *(undefined8 **)(lVar6 + 0x18);
        puVar5 = (undefined8 *)FUN_14010e2e0(*(undefined8 *)(lVar6 + 0x10),puVar4,L"CRB_TooltipBasic");
        if (puVar5 != puVar4) {
            puVar8 = (undefined8 *)*puVar5;
        }
        *(undefined8 **)(lVar3 + 0xb78) = puVar8;
        FUN_1400e74a0(extraout_XMM0_Qa,0,param_1[0xb2]);
        return 0;
    }
    return 1;
}



undefined8 FUN_140727f60(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x590);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
        *(undefined8 *)(param_1 + 0x590) = 0;
    }
    FUN_140727a70(param_1);
    if (*(longlong *)(param_1 + 0x590) != 0) {
        FUN_1400ea3e0(*(longlong *)(param_1 + 0x590),"ShowGachaUI","");
        return 0;
    }
    return 1;
}



undefined8 FUN_140727fd0(undefined8 param_1,longlong param_2)

{
    if (param_2 != 0) {
        FUN_140727f60(param_2);
        return 0;
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140728000(undefined8 param_1,float param_2,float param_3,longlong param_4)

{
    float *pfVar1;
    float *pfVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    uint *puVar10;
    longlong lVar11;
    uint uVar12;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar13;
    float extraout_XMM0_Da_03;
    float fVar14;
    undefined4 uVar15;
    float fVar16;
    float fVar18;
    undefined auVar17 [16];
    float fVar19;
    undefined auStack360 [32];
    ulonglong *local_148;
    ulonglong local_140;
    undefined8 *local_138;
    undefined *local_130;
    undefined4 local_128;
    undefined8 local_118;
    float local_110;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    undefined local_f8 [16];
    ulonglong local_e8;
    float fStack224;
    longlong local_d8 [10];
    ulonglong local_88;

    uVar7 = DAT_140c636a8;
    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack360;
    if (*(int *)(param_4 + 0x14) == 1) {
        if (*(int *)(param_4 + 0x18) != -1) {
            iVar8 = DAT_140c54650;
            if (*DAT_140c63750 < DAT_140c54650) {
                iVar8 = *DAT_140c63750;
            }
            if ((uint)(*(int *)(&DAT_140c54660 + (longlong)iVar8 * 4) + *(int *)(param_4 + 0x18)) <=
                DAT_140c636a8) {
                *(undefined4 *)(param_4 + 0x14) = 0xb;
                goto LAB_140728a8a;
            }
        }
        if (((*(int *)(param_4 + 0xc) == 0) &&
             (local_e8 = local_e8 & 0xffffffff00000000, *(longlong *)(param_4 + 0x490) != 0)) &&
            (iVar8 = FUN_14072aa70(param_4), iVar8 != 0)) {
            *(undefined4 *)(param_4 + 0xc) = 1;
        }
        if ((*(int *)(param_4 + 0x10) != 0) && (*(int *)(param_4 + 0xc) != 0)) {
            FUN_14072abc0();
            iVar8 = DAT_140c54730;
            if (*DAT_140c63750 < DAT_140c54730) {
                iVar8 = *DAT_140c63750;
            }
            *(uint *)(param_4 + 0x4a8) = *(int *)(&DAT_140c54740 + (longlong)iVar8 * 4) + DAT_140c636a8;
        }
    }
    if (*(char *)(param_4 + 0x4d0) != '\0') {
        *(undefined *)(param_4 + 0x4d0) = 0;
        FUN_14072c180(param_4);
    }
    if (((*(int *)(param_4 + 0x14) == 4) && (*(uint *)(param_4 + 0x4a8) != 0xffffffff)) &&
        (*(uint *)(param_4 + 0x4a8) <= uVar7)) {
        iVar8 = _DAT_140c4b368;
        if (*(int *)(param_4 + 0x550) != 0) {
            iVar8 = _DAT_140c4b5a8;
        }
        if (iVar8 != 0) {
            FUN_14072afa0(param_4);
        }
        *(undefined4 *)(param_4 + 0x4a8) = 0xffffffff;
    }
    plVar3 = *(longlong **)(param_4 + 0x5c0);
    if (((longlong *)*plVar3 != plVar3) &&
        ((*(int *)(param_4 + 0x5b0) == 0 || (*(int *)(*plVar3 + 0x10) == 0)))) {
        iVar8 = *(int *)(**(longlong **)(param_4 + 0x5c0) + 0x10);
        if (iVar8 == 0) {
            lVar11 = *(longlong *)(param_4 + 0x5a0);
            plVar3 = *(longlong **)(lVar11 + 0x38);
            if ((plVar3 != (longlong *)0x0) && (iVar8 = (**(code **)(*plVar3 + 0x50))(), iVar8 != 0)) {
                plVar3 = *(longlong **)(lVar11 + 0x38);
                (**(code **)(*plVar3 + 0x48))(plVar3,100,2);
            }
            *(undefined4 *)(param_4 + 0x5b4) = 0;
        }
        else if ((*(uint *)(param_4 + 0x5c8) < uVar7 || *(uint *)(param_4 + 0x5c8) == uVar7) ||
                 ((*(byte *)(**(longlong **)(param_4 + 0x5c0) + 0x14) & 1) != 0)) {
            *(int *)(param_4 + 0x5b0) = *(int *)(param_4 + 0x5b0) + 1;
            FUN_140712a40(*(undefined8 *)(param_4 + 0x5a0),iVar8,&LAB_14072af70,param_4);
            *(int *)(param_4 + 0x5b4) = iVar8;
            if ((iVar8 != _DAT_140c4b5a8) && (iVar8 != _DAT_140c4b368)) {
                iVar8 = DAT_140c54730;
                if (*DAT_140c63750 < DAT_140c54730) {
                    iVar8 = *DAT_140c63750;
                }
                uVar9 = *(uint *)(param_4 + 0x4a8);
                uVar12 = *(int *)(&DAT_140c54740 + (longlong)iVar8 * 4) + uVar7;
                if (uVar9 == 0xffffffff) {
                    *(uint *)(param_4 + 0x4a8) = uVar12;
                }
                else {
                    if (uVar9 < uVar12) {
                        uVar9 = uVar12;
                    }
                    *(uint *)(param_4 + 0x4a8) = uVar9;
                }
            }
        }
        plVar3 = **(longlong ***)(param_4 + 0x5c0);
        lVar11 = *plVar3;
        plVar4 = (longlong *)plVar3[1];
        *plVar4 = lVar11;
        *(longlong **)(lVar11 + 8) = plVar4;
        FUN_14018b900(plVar3,0);
    }
    (**(code **)(**(longlong **)(param_4 + 0x478) + 0x30))(*(longlong **)(param_4 + 0x478),uVar7,0);
    (**(code **)(**(longlong **)(param_4 + 0x488) + 0x128))(*(longlong **)(param_4 + 0x488),1);
    (**(code **)(**(longlong **)(param_4 + 0x488) + 0x140))(*(longlong **)(param_4 + 0x488),1);
    if ((longlong *)**(longlong **)(param_4 + 0x5d8) != *(longlong **)(param_4 + 0x5d8)) {
        do {
            puVar10 = (uint *)(**(longlong **)(param_4 + 0x5d8) + 0x10);
            if (uVar7 <= *puVar10 && *puVar10 != uVar7) break;
            FUN_1400ea3e0(*(undefined8 *)(param_4 + 0x590),"TickClaimCount","");
            plVar3 = **(longlong ***)(param_4 + 0x5d8);
            lVar11 = *plVar3;
            plVar4 = (longlong *)plVar3[1];
            *plVar4 = lVar11;
            *(longlong **)(lVar11 + 8) = plVar4;
            FUN_14018b900(plVar3,0);
        } while ((longlong *)**(longlong **)(param_4 + 0x5d8) != *(longlong **)(param_4 + 0x5d8));
    }
    (**(code **)(**(longlong **)(param_4 + 0x488) + 0x368))
            (*(longlong **)(param_4 + 0x488),0x17,&local_108);
    if (*(int *)(param_4 + 0x550) == 0) {
        if ((*(int *)(param_4 + 0x14) - 5U < 2) ||
            (*(int *)(*(longlong *)(param_4 + 0x558) + 0x50) == 10)) {
            (**(code **)(**(longlong **)(param_4 + 0x488) + 0x368))
                    (*(longlong **)(param_4 + 0x488),0x47,param_4 + 0x560);
        }
        else {
            pfVar1 = (float *)(param_4 + 0x560);
            param_2 = param_2 * 3.0;
            fVar13 = local_108 - *pfVar1;
            fVar16 = fStack260 - *(float *)(param_4 + 0x564);
            fVar18 = fStack256 - *(float *)(param_4 + 0x568);
            fVar19 = fStack252 - *(float *)(param_4 + 0x56c);
            fVar14 = fVar13 * fVar13 + fVar16 * fVar16 + 0.0;
            if ((fVar14 <= param_2 * param_2) || (fVar14 <= 1e-05)) {
                *pfVar1 = local_108;
                *(float *)(param_4 + 0x564) = fStack260;
                *(float *)(param_4 + 0x568) = fStack256;
                *(float *)(param_4 + 0x56c) = fStack252;
            }
            else {
                auVar17 = CONCAT124(SUB1612(CONCAT412(fVar19 * fVar19,
                                                      CONCAT48(fVar18 * fVar18,
                                                               CONCAT44(fVar16 * fVar16,fVar13 * fVar13)))
                                                    >> 0x20,0),fVar13 * fVar13 + fVar16 * fVar16 + 0.0);
                auVar17 = rsqrtss(auVar17,auVar17);
                fVar14 = SUB164(auVar17,0);
                *pfVar1 = fVar14 * fVar13 * param_2 + *pfVar1;
                *(float *)(param_4 + 0x564) = fVar14 * fVar16 * param_2 + *(float *)(param_4 + 0x564);
                *(float *)(param_4 + 0x568) = fVar14 * fVar18 * param_2 + *(float *)(param_4 + 0x568);
                *(float *)(param_4 + 0x56c) = fVar14 * fVar19 * param_2 + *(float *)(param_4 + 0x56c);
            }
        }
    }
    else {
        fVar14 = *(float *)(param_4 + 0x528) - *(float *)(param_4 + 0x518);
        if (1e-05 <= (float)((uint)fVar14 & 0x7fffffff)) {
            fVar14 = (fStack256 - *(float *)(param_4 + 0x518)) / fVar14;
        }
        else {
            fVar14 = 0.0;
        }
        local_108 = (*(float *)(param_4 + 0x520) - *(float *)(param_4 + 0x510)) * fVar14 +
                    *(float *)(param_4 + 0x510);
        fStack260 = (*(float *)(param_4 + 0x524) - *(float *)(param_4 + 0x514)) * fVar14 +
                    *(float *)(param_4 + 0x514);
        *(undefined (*) [16])(param_4 + 0x560) =
                CONCAT412(*(float *)(param_4 + 0x54c) + fStack252,
                          CONCAT48(*(float *)(param_4 + 0x548) + fStack256,
                                   CONCAT44(*(float *)(param_4 + 0x544) + fStack260,
                                            *(float *)(param_4 + 0x540) + local_108)));
    }
    uVar15 = *(undefined4 *)(param_4 + 0x564);
    uVar5 = *(undefined4 *)(param_4 + 0x568);
    uVar6 = *(undefined4 *)(param_4 + 0x56c);
    lVar11 = *(longlong *)(param_4 + 0x558);
    *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(param_4 + 0x560);
    *(undefined4 *)(lVar11 + 0x44) = uVar15;
    *(undefined4 *)(lVar11 + 0x48) = uVar5;
    *(undefined4 *)(lVar11 + 0x4c) = uVar6;
    for (plVar3 = *(longlong **)(param_4 + 0x4b8); plVar3 != (longlong *)0x0;
         plVar3 = (longlong *)plVar3[2]) {
        iVar8 = (**(code **)(*plVar3 + 8))(plVar3);
        if (iVar8 < 0) goto LAB_140728a8a;
    }
    iVar8 = (**(code **)(**(longlong **)(param_4 + 0x488) + 0x420))(*(longlong **)(param_4 + 0x488),6)
            ;
    fVar14 = 2.0;
    if (iVar8 == 0) {
        FUN_1408fc950();
        fVar13 = extraout_XMM0_Da_01;
        FUN_1408fe3d0();
        *(undefined4 *)(param_4 + 0x418) = 0xbf800006;
        *(undefined4 *)(param_4 + 0x428) = 0xbc23d711;
        *(float *)(param_4 + 0x404) = fVar13 / extraout_XMM0_Da_02;
        *(float *)(param_4 + 0x3f0) = (fVar13 / extraout_XMM0_Da_02) / param_3;
        uVar15 = 0x466a6000;
    }
    else {
        local_130 = (undefined *)0x0;
        local_138 = (undefined8 *)(param_4 + 0x3b0);
        local_140 = param_4 + 0x370;
        local_148 = (ulonglong *)(param_4 + 0x470);
        (**(code **)(**(longlong **)(param_4 + 0x488) + 0x428))
                (*(longlong **)(param_4 + 0x488),6,local_138,&local_118);
        if (param_3 < 1.777778) {
            FUN_1408fd8a4();
            FUN_140934e10();
        }
        FUN_1408fc950();
        fVar13 = extraout_XMM0_Da;
        FUN_1408fe3d0();
        *(undefined4 *)(param_4 + 0x418) = 0xbf80022f;
        *(undefined4 *)(param_4 + 0x428) = 0xbc23d9d6;
        *(float *)(param_4 + 0x404) = fVar13 / extraout_XMM0_Da_00;
        *(float *)(param_4 + 0x3f0) = (fVar13 / extraout_XMM0_Da_00) / param_3;
        uVar15 = 0x43160000;
    }
    local_d8[0] = param_4 + 0x3f0;
    *(undefined8 *)(param_4 + 0x3f4) = 0;
    *(undefined8 *)(param_4 + 0x3fc) = 0;
    *(undefined8 *)(param_4 + 0x408) = 0;
    *(undefined8 *)(param_4 + 0x410) = 0;
    *(undefined4 *)(param_4 + 0x41c) = 0xbf800000;
    local_118 = CONCAT44(uVar15,0x3c23d70a);
    *(undefined8 *)(param_4 + 0x420) = 0;
    *(undefined4 *)(param_4 + 0x42c) = 0;
    pfVar1 = (float *)(param_4 + 0x430);
    *(undefined8 *)(param_4 + 0x470) = local_118;
    FUN_1401afc20(local_d8,pfVar1);
    pfVar2 = (float *)(param_4 + 0x3b0);
    (**(code **)(*DAT_140c65848 + 0x50))(DAT_140c65848,pfVar2);
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    (**(code **)(**(longlong **)(param_4 + 0x478) + 0x50))
            (*(longlong **)(param_4 + 0x478),param_4 + 0x370,pfVar2,(undefined8 *)(param_4 + 0x470))
            ;
    puVar10 = (uint *)(**(code **)(*DAT_140c65670 + 0x248))();
    fVar16 = (((float)*(int *)(param_4 + 0x530) - (float)(ulonglong)*puVar10) /
              (float)(ulonglong)puVar10[2]) * fVar14 - 1.0;
    fVar13 = 1.0 - (((float)*(int *)(param_4 + 0x534) - (float)(ulonglong)puVar10[1]) /
                    (float)(ulonglong)puVar10[3]) * fVar14;
    fVar18 = fVar13 * *(float *)(param_4 + 0x44c) + fVar16 * *(float *)(param_4 + 0x43c) +
             *(float *)(param_4 + 0x45c) * 0.0 + *(float *)(param_4 + 0x46c);
    auVar17 = divps(CONCAT412(fVar18,CONCAT48(fVar13 * *(float *)(param_4 + 0x448) +
                                              fVar16 * *(float *)(param_4 + 0x438) +
                                              *(float *)(param_4 + 0x458) * 0.0 +
                                              *(float *)(param_4 + 0x468),
                                              CONCAT44(fVar13 * *(float *)(param_4 + 0x444) +
                                                       fVar16 * *(float *)(param_4 + 0x434) +
                                                       *(float *)(param_4 + 0x454) * 0.0 +
                                                       *(float *)(param_4 + 0x464),
                                                       fVar13 * *(float *)(param_4 + 0x440) +
                                                       fVar16 * *pfVar1 +
                                                       *(float *)(param_4 + 0x450) * 0.0 +
                                                       *(float *)(param_4 + 0x460)))),
                    CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))));
    fVar13 = SUB164(auVar17,0);
    fVar18 = SUB164(auVar17 >> 0x40,0);
    fVar16 = SUB164(auVar17 >> 0x20,0);
    *(undefined (*) [16])(param_4 + 0x510) =
            CONCAT412(fVar13 * *(float *)(param_4 + 0x3bc) + fVar16 * *(float *)(param_4 + 0x3cc) +
                      fVar18 * *(float *)(param_4 + 0x3dc) + *(float *)(param_4 + 0x3ec),
                      CONCAT48(fVar13 * *(float *)(param_4 + 0x3b8) +
                               fVar16 * *(float *)(param_4 + 0x3c8) +
                               fVar18 * *(float *)(param_4 + 0x3d8) + *(float *)(param_4 + 1000),
                               CONCAT44(fVar13 * *(float *)(param_4 + 0x3b4) +
                                        fVar16 * *(float *)(param_4 + 0x3c4) +
                                        fVar18 * *(float *)(param_4 + 0x3d4) +
                                        *(float *)(param_4 + 0x3e4),
                                        fVar13 * *pfVar2 + fVar16 * *(float *)(param_4 + 0x3c0) +
                                        fVar18 * *(float *)(param_4 + 0x3d0) +
                                        *(float *)(param_4 + 0x3e0))));
    fVar16 = (((float)*(int *)(param_4 + 0x530) - (float)(ulonglong)*puVar10) /
              (float)(ulonglong)puVar10[2]) * fVar14 - 1.0;
    fVar13 = 1.0 - (((float)*(int *)(param_4 + 0x534) - (float)(ulonglong)puVar10[1]) /
                    (float)(ulonglong)puVar10[3]) * fVar14;
    local_e8 = CONCAT44(fVar13,fVar16);
    fStack224 = (0.0 - (float)puVar10[4]) / ((float)puVar10[5] - (float)puVar10[4]);
    fVar18 = fVar13 * *(float *)(param_4 + 0x44c) + fVar16 * *(float *)(param_4 + 0x43c) +
             *(float *)(param_4 + 0x45c) * 0.0 + *(float *)(param_4 + 0x46c);
    auVar17 = divps(CONCAT412(fVar18,CONCAT48(fVar13 * *(float *)(param_4 + 0x448) +
                                              fVar16 * *(float *)(param_4 + 0x438) +
                                              *(float *)(param_4 + 0x458) * 0.0 +
                                              *(float *)(param_4 + 0x468),
                                              CONCAT44(fVar13 * *(float *)(param_4 + 0x444) +
                                                       fVar16 * *(float *)(param_4 + 0x434) +
                                                       *(float *)(param_4 + 0x454) * 0.0 +
                                                       *(float *)(param_4 + 0x464),
                                                       fVar13 * *(float *)(param_4 + 0x440) +
                                                       fVar16 * *pfVar1 +
                                                       *(float *)(param_4 + 0x450) * 0.0 +
                                                       *(float *)(param_4 + 0x460)))),
                    CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))));
    fVar13 = SUB164(auVar17,0);
    fVar18 = SUB164(auVar17 >> 0x40,0);
    fVar16 = SUB164(auVar17 >> 0x20,0);
    *(undefined (*) [16])(param_4 + 0x520) =
            CONCAT412(fVar13 * *(float *)(param_4 + 0x3bc) + fVar16 * *(float *)(param_4 + 0x3cc) +
                      fVar18 * *(float *)(param_4 + 0x3dc) + *(float *)(param_4 + 0x3ec),
                      CONCAT48(fVar13 * *(float *)(param_4 + 0x3b8) +
                               fVar16 * *(float *)(param_4 + 0x3c8) +
                               fVar18 * *(float *)(param_4 + 0x3d8) + *(float *)(param_4 + 1000),
                               CONCAT44(fVar13 * *(float *)(param_4 + 0x3b4) +
                                        fVar16 * *(float *)(param_4 + 0x3c4) +
                                        fVar18 * *(float *)(param_4 + 0x3d4) +
                                        *(float *)(param_4 + 0x3e4),
                                        fVar13 * *pfVar2 + fVar16 * *(float *)(param_4 + 0x3c0) +
                                        fVar18 * *(float *)(param_4 + 0x3d0) +
                                        *(float *)(param_4 + 0x3e0))));
    plVar3 = *(longlong **)(param_4 + 0x4e0);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x70))(plVar3,0);
    }
    if (*(longlong *)(param_4 + 0x4d8) != 0) {
        local_e8 = 0x3f800000;
        fStack224 = 0.0;
        local_118 = 0;
        local_110 = 0.0;
        lVar11 = (**(code **)(*DAT_140c65670 + 0x248))();
        FUN_1408fe3d0();
        local_128 = 0;
        local_130 = local_f8;
        local_138 = &local_118;
        local_110 = (extraout_XMM0_Da_03 * fVar14) / (float)(ulonglong)*(uint *)(lVar11 + 0xc);
        local_148 = &local_e8;
        local_140 = local_140 & 0xffffffff00000000;
        local_f8 = ZEXT416(0);
        iVar8 = (**(code **)(**(longlong **)(param_4 + 0x4d8) + 0x38))
                (*(longlong **)(param_4 + 0x4d8),DAT_140c636a8,0xa8c0,&local_e8);
        if (iVar8 < 0) goto LAB_140728a8a;
    }
    (**(code **)(**(longlong **)(param_4 + 0x4d8) + 0x98))
            (*(longlong **)(param_4 + 0x4d8),param_4 + 0x60);
    FUN_1400e74a0(*(undefined8 *)(param_4 + 0x590));
    if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x2ac) != 0)) {
        FUN_1407898e0(*(undefined8 *)(param_4 + 0x558));
        *(undefined4 *)(param_4 + 0x14) = 0xd;
        FUN_1400ea3e0(*(undefined8 *)(param_4 + 0x590),"HideGachaUI","");
        FUN_14072b120();
    }
    LAB_140728a8a:
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack360);
    return;
}



undefined8 FUN_140728ac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    uint *puVar2;
    undefined4 uVar3;
    undefined local_48 [16];
    undefined8 local_38 [2];
    float local_28;
    float local_24;

    uVar3 = 0x3f800000;
    local_48 = ZEXT816(0);
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_48,param_4,0);
    local_48 = local_48 & (undefined  [16])0xffffffff00000000;
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x490))
            (*(undefined8 **)(param_1 + 0x490),local_48);
    if (iVar1 != 0) {
        puVar2 = (uint *)(**(code **)(*DAT_140c65670 + 0x10))();
        local_38[0] = 0;
        local_28 = (float)(ulonglong)*puVar2;
        local_24 = (float)(ulonglong)puVar2[1];
        (**(code **)(**(longlong **)(param_1 + 0x478) + 0x80))
                (*(longlong **)(param_1 + 0x478),param_1 + 0x3f0,param_1 + 0x470,param_1 + 0x60,1,3,
                 0xff000000,0,local_38,uVar3,0);
    }
    return 0;
}



undefined8
FUN_140728bd0(longlong param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5)

{
    longlong *plVar1;
    longlong lVar2;
    short sVar3;
    short sVar4;

    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x590) + 0x38))();
    if ((lVar2 == 0) && (*(char *)(*(longlong *)(param_1 + 0x590) + 0xd20) == '\0')) {
        return 0;
    }
    if (param_3 == 0x100) {
        if (param_4 == 0x1b) {
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x590),"EscapeKeyPressed_Gacha","");
            FUN_140729730(param_1);
            return 0;
        }
        LAB_140728cff:
        plVar1 = *(longlong **)(param_1 + 0x4b8);
        while( true ) {
            if (plVar1 == (longlong *)0x0) {
                if ((param_4 != 0x1b) &&
                    (((param_3 - 0xffU < 7 && ((0x67U >> (param_3 - 0xffU & 0x1f) & 1) != 0)) ||
                      (param_3 - 0x200U < 0xe)))) {
                    (**(code **)(*DAT_140c65898 + 0x48))(DAT_140c65898,param_2,param_3,param_4,param_5);
                }
                return 1;
            }
            lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4,param_5);
            if (lVar2 == 0) break;
            plVar1 = (longlong *)plVar1[2];
        }
    }
    else {
        sVar3 = (short)param_5;
        sVar4 = (short)((ulonglong)param_5 >> 0x10);
        if (param_3 == 0x200) {
            *(int *)(param_1 + 0x530) = (int)sVar3;
            *(int *)(param_1 + 0x534) = (int)sVar4;
            FUN_14072c180(param_1,0);
            return 0;
        }
        if (param_3 != 0x201) {
            if (param_3 == 0x202) {
                *(int *)(param_1 + 0x530) = (int)sVar3;
                *(int *)(param_1 + 0x534) = (int)sVar4;
                FUN_14072c180(param_1,0);
                FUN_14072a600(param_1);
                if (*(longlong **)(param_1 + 0x4c8) == (longlong *)0x0) {
                    return 0;
                }
                (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x48))();
                return 0;
            }
            if (param_3 != 0x203) goto LAB_140728cff;
        }
        *(int *)(param_1 + 0x530) = (int)sVar3;
        *(int *)(param_1 + 0x534) = (int)sVar4;
        FUN_14072c180(param_1,0);
        FUN_140729e50(param_1);
        if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x40))();
        }
    }
    return 0;
}



undefined8 FUN_1407290a0(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    int *piVar5;
    longlong lVar6;

    if (*param_2 == 0) {
        return 0;
    }
    if (param_2[1] == 3) {
        piVar5 = (int *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x4e8) = 0;
        uVar3 = 0;
        lVar6 = 0;
        do {
            if ((*piVar5 == 0) !=
                (*(int *)(&DAT_ffffffffffffffd0 + ((longlong)param_2 - param_1) + (longlong)piVar5) == 0))
            {
                FUN_14078a370(uVar3 * 0x98 + *(longlong *)(param_1 + 0x4f8));
                lVar1 = DAT_140c665e0;
                *piVar5 = 1;
                lVar2 = *(longlong *)(param_1 + 0x4f8) + lVar6;
                if ((lVar2 != 0) && (lVar1 != 0)) {
                    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x590),"CardFlipped",&DAT_1409f8dc4,
                                  *(int *)(lVar2 + 0x28) + 1);
                }
            }
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar4;
            piVar5 = piVar5 + 1;
            lVar6 = lVar6 + 0x98;
        } while (uVar4 < 3);
        return 0;
    }
    if (param_2[1] == 0) {
        *(undefined4 *)(param_1 + 0x4e8) = 3;
        uVar3 = 0;
        piVar5 = (int *)(param_1 + 0x38);
        do {
            if (*piVar5 == 0) {
                FUN_14078a370(uVar3 * 0x98 + *(longlong *)(param_1 + 0x4f8));
                *piVar5 = 1;
            }
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar4;
            piVar5 = piVar5 + 1;
        } while (uVar4 < 3);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407291f0(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    uint uVar5;

    if (*(int *)(param_1 + 0x14) == 1) {
        *(undefined4 *)(param_1 + 0x14) = 0xb;
    }
    else if ((*(int *)(param_1 + 0x14) == 5) && (*param_2 == 3)) {
        if (_DAT_140c4b248 != 0) {
            FUN_14072afa0(param_1);
        }
        FUN_140729d70();
        piVar3 = DAT_140c63750;
        iVar2 = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0x14) = 4;
        iVar1 = DAT_140c54730;
        if (*piVar3 < DAT_140c54730) {
            iVar1 = *piVar3;
        }
        uVar4 = *(uint *)(param_1 + 0x4a8);
        uVar5 = iVar2 + *(int *)(&DAT_140c54740 + (longlong)iVar1 * 4);
        if (uVar4 == 0xffffffff) {
            *(uint *)(param_1 + 0x4a8) = uVar5;
            return 0;
        }
        if (uVar4 < uVar5) {
            uVar4 = uVar5;
        }
        *(uint *)(param_1 + 0x4a8) = uVar4;
        return 0;
    }
    return 0;
}



undefined8 FUN_1407292a0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 local_58;
    undefined4 uStack84;

    uVar6 = 0;
    uVar9 = 0xbf800000;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    uVar7 = uVar6;
    if (*param_2 != 0) {
        do {
            uVar8 = uVar9;
            if (uVar7 < param_2[8]) {
                uVar8 = *(undefined4 *)(*(longlong *)(param_2 + 10) + uVar7 * 4);
            }
            lVar5 = *(longlong *)(param_1 + 0x5e8);
            uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar7 * 4);
            lVar1 = lVar5 + 1;
            lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x5e0),lVar1,8);
            *(ulonglong *)(lVar4 + lVar5 * 8) = CONCAT44(uVar8,uVar2);
            if (*(longlong *)(param_1 + 0x5e0) != lVar4) {
                FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x5e0),*(longlong *)(param_1 + 0x5e8) << 3);
                if (*(longlong *)(param_1 + 0x5e0) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x5e0) + -0x10) + 8))();
                }
                *(longlong *)(param_1 + 0x5e0) = lVar4;
            }
            *(longlong *)(param_1 + 0x5e8) = lVar1;
            uVar7 = uVar7 + 1;
        } while (uVar7 < *param_2);
    }
    *(undefined8 *)(param_1 + 0x5f8) = 0;
    if (param_2[4] != 0) {
        do {
            uVar8 = uVar9;
            if (uVar6 < param_2[0xc]) {
                uVar8 = *(undefined4 *)(*(longlong *)(param_2 + 0xe) + uVar6 * 4);
            }
            lVar1 = *(longlong *)(param_1 + 0x5f8);
            uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 6) + uVar6 * 8);
            lVar5 = FUN_14018db00(*(undefined8 *)(param_1 + 0x5f0),lVar1 + 1,0xc);
            local_58 = (undefined4)uVar3;
            uStack84 = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)(lVar5 + lVar1 * 0xc) = local_58;
            *(undefined4 *)(lVar5 + 4 + lVar1 * 0xc) = uStack84;
            *(undefined4 *)(lVar5 + 8 + lVar1 * 0xc) = uVar8;
            if (*(longlong *)(param_1 + 0x5f0) != lVar5) {
                FUN_1407db590(lVar5,*(longlong *)(param_1 + 0x5f0),*(longlong *)(param_1 + 0x5f8) * 0xc);
                lVar4 = *(longlong *)(param_1 + 0x5f0);
                if (lVar4 != 0) {
                    (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                }
                *(longlong *)(param_1 + 0x5f0) = lVar5;
            }
            *(longlong *)(param_1 + 0x5f8) = lVar1 + 1;
            uVar6 = uVar6 + 1;
        } while (uVar6 < param_2[4]);
    }
    return 0;
}



void FUN_140729540(void)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int in_R9D;
    longlong in_stack_00000030;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (in_R9D != 0) {
        return;
    }
    if (in_stack_00000030 == 0) {
        return;
    }
    iVar3 = *(int *)(in_stack_00000030 + 0x14);
    if (iVar3 == 7) {
        *(undefined4 *)(in_stack_00000030 + 0x14) = 8;
        FUN_14072b050(in_stack_00000030);
    }
    else if (iVar3 != 8) {
        if (iVar3 == 9) {
            FUN_14072c110(in_stack_00000030);
            FUN_140729890(in_stack_00000030);
            *(undefined4 *)(in_stack_00000030 + 0x14) = 3;
            FUN_14078ad30();
            piVar1 = DAT_140c63750;
            local_28 = 0x45e;
            iVar3 = DAT_140c54790;
            if (*DAT_140c63750 < DAT_140c54790) {
                iVar3 = *DAT_140c63750;
            }
            iVar5 = *(int *)(&DAT_140c547a0 + (longlong)iVar3 * 4) + DAT_140c636a8;
            *(int *)(in_stack_00000030 + 0x5c8) = iVar5;
            iVar3 = DAT_140c54730;
            if (*piVar1 < DAT_140c54730) {
                iVar3 = *piVar1;
            }
            uVar2 = *(uint *)(in_stack_00000030 + 0x4a8);
            uVar4 = *(int *)(&DAT_140c54740 + (longlong)iVar3 * 4) + iVar5;
            if (uVar2 == 0xffffffff) {
                *(uint *)(in_stack_00000030 + 0x4a8) = uVar4;
            }
            else {
                if (uVar2 < uVar4) {
                    uVar2 = uVar4;
                }
                *(uint *)(in_stack_00000030 + 0x4a8) = uVar2;
            }
            iVar3 = DAT_140c547f0;
            if (*piVar1 < DAT_140c547f0) {
                iVar3 = *piVar1;
            }
            FUN_14001a6c0(&PTR_PTR_LAB_140c547e0,iVar3,1);
            goto LAB_14072965c;
        }
        if ((iVar3 != 10) && (iVar3 != 0xc)) {
            local_28 = 0x45e;
            goto LAB_14072965c;
        }
    }
    local_28 = 0x460;
    LAB_14072965c:
    local_20 = 0x3f800000;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(longlong **)(in_stack_00000030 + 0x488) + 0x248))
            (*(longlong **)(in_stack_00000030 + 0x488),0,&local_28);
    return;
}



void FUN_1407296b0(undefined8 param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong in_stack_00000038;

    uVar2 = DAT_140c636a8;
    if (((in_stack_00000038 != 0) && (param_3 == 0x3f)) && (*(int *)(in_stack_00000038 + 0x4f0) != 0))
    {
        lVar1 = *(longlong *)(in_stack_00000038 + 0x5d8);
        plVar3 = (longlong *)FUN_14018b280(0x18);
        if (plVar3 + 2 != (longlong *)0x0) {
            *(undefined4 *)(plVar3 + 2) = uVar2;
        }
        *plVar3 = lVar1;
        plVar3[1] = *(longlong *)(lVar1 + 8);
        **(longlong ***)(lVar1 + 8) = plVar3;
        *(longlong **)(lVar1 + 8) = plVar3;
        *(int *)(in_stack_00000038 + 0x4f0) = *(int *)(in_stack_00000038 + 0x4f0) + -1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140729730(longlong param_1)

{
    if (_DAT_140c4b488 != 0) {
        FUN_14072afa0(param_1,&DAT_140c4b488);
    }
    *(undefined4 *)(param_1 + 0x14) = 10;
    FUN_14078b4a0(*(undefined8 *)(param_1 + 0x490));
    return;
}



undefined8 FUN_140729770(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x4f0) = 3;
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    local_28 = 0x458;
    local_20 = 0x3f800000;
    local_18 = 0;
    local_10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x488) + 0x248))
            (*(longlong **)(param_1 + 0x488),0,&local_28);
    *(undefined4 *)(param_1 + 0x14) = 9;
    do {
        lVar2 = *(longlong *)(param_1 + 0x4f8);
        plVar3 = *(longlong **)(uVar5 + 0x88 + lVar2);
        if (plVar3 != (longlong *)0x0) {
            uVar4 = 0x45a;
            if (*(int *)(uVar5 + 0x58 + lVar2) != 0) {
                uVar4 = 0x1a13;
            }
            local_20 = 0x3f800000;
            local_18 = 0;
            local_10 = 0;
            local_28 = (ulonglong)uVar4;
            (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_28);
        }
        lVar1 = uVar5 + 0x18;
        *(undefined4 *)(uVar5 + 0x5c + lVar2) = 6;
        uVar5 = uVar5 + 0x98;
        *(undefined *)(*(longlong *)(lVar1 + lVar2) + 0x4d0) = 1;
    } while (uVar5 < 0x1c8);
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x590),"GameEnd",&DAT_1409f8df4,3);
    return 0;
}



void FUN_140729890(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    int *piVar8;
    uint uVar9;
    uint uVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;

    iVar3 = DAT_140c636a8;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x478) + 0x30))(*(longlong **)(param_1 + 0x478),iVar3,0);
    piVar8 = DAT_140c63750;
    iVar7 = DAT_140c636a8;
    lVar11 = 0;
    *(undefined4 *)(param_1 + 0x14) = 4;
    *(undefined4 *)(param_1 + 0x550) = 0;
    iVar3 = DAT_140c54730;
    if (*piVar8 < DAT_140c54730) {
        iVar3 = *piVar8;
    }
    uVar9 = *(uint *)(param_1 + 0x4a8);
    uVar10 = iVar7 + *(int *)(&DAT_140c54740 + (longlong)iVar3 * 4);
    if (uVar9 == 0xffffffff) {
        *(uint *)(param_1 + 0x4a8) = uVar10;
    }
    else {
        if (uVar9 < uVar10) {
            uVar9 = uVar10;
        }
        *(uint *)(param_1 + 0x4a8) = uVar9;
    }
    lVar12 = 3;
    do {
        lVar1 = *(longlong *)(param_1 + 0x4f8);
        plVar2 = *(longlong **)(lVar11 + 0x88 + lVar1);
        *(undefined8 *)(lVar11 + 0x58 + lVar1) = 0;
        *(undefined8 *)(lVar11 + 0x50 + lVar1) = 0;
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x3a8))();
            *(undefined8 *)(lVar11 + 0x88 + lVar1) = 0;
        }
        lVar11 = lVar11 + 0x98;
        lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x488) + 0x368))
            (*(longlong **)(param_1 + 0x488),0x17,param_1 + 0x560,0);
    lVar11 = *(longlong *)(param_1 + 0x558);
    local_38 = 0x4bd;
    uVar4 = *(undefined4 *)(param_1 + 0x564);
    uVar5 = *(undefined4 *)(param_1 + 0x568);
    uVar6 = *(undefined4 *)(param_1 + 0x56c);
    local_30 = 0x3f800000;
    local_28 = 0;
    local_24 = 3;
    *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(param_1 + 0x560);
    *(undefined4 *)(lVar11 + 0x44) = uVar4;
    *(undefined4 *)(lVar11 + 0x48) = uVar5;
    *(undefined4 *)(lVar11 + 0x4c) = uVar6;
    lVar11 = *(longlong *)(param_1 + 0x558);
    local_1c = 0;
    (**(code **)(**(longlong **)(lVar11 + 0x58) + 0x248))(*(longlong **)(lVar11 + 0x58),0,&local_38);
    *(undefined4 *)(lVar11 + 0x50) = 0;
    *(undefined *)(*(longlong *)(lVar11 + 0x18) + 0x4d0) = 1;
    *(undefined4 *)(lVar11 + 0x54) = 1;
    lVar11 = *(longlong *)(param_1 + 0x498);
    *(undefined4 *)(lVar11 + 0x68) = 0;
    plVar2 = *(longlong **)(lVar11 + 0x60);
    local_38 = 0x45e;
    local_30 = 0x3f800000;
    local_28 = 0;
    local_24 = 2;
    local_1c = 0;
    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_38);
    lVar11 = *(longlong *)(param_1 + 0x578);
    local_38 = 0x45e;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    plVar2 = *(longlong **)(lVar11 + 0x38);
    local_30 = 0x3f800000;
    local_28 = 0;
    local_24 = 3;
    local_1c = 0;
    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_38);
    lVar11 = *(longlong *)(param_1 + 0x580);
    local_38 = 0x45e;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    plVar2 = *(longlong **)(lVar11 + 0x38);
    local_30 = 0x3f800000;
    local_28 = 0;
    local_24 = 3;
    local_1c = 0;
    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_38);
    lVar11 = *(longlong *)(param_1 + 0x588);
    local_38 = 0x45e;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    plVar2 = *(longlong **)(lVar11 + 0x38);
    local_30 = 0x3f800000;
    local_28 = 0;
    local_24 = 3;
    local_1c = 0;
    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_38);
    return;
}



void FUN_140729b20(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong *plVar4;

    if (1 < *(int *)(param_1 + 0x14) - 10U) {
        lVar1 = *(longlong *)(param_1 + 0x5a0);
        plVar4 = *(longlong **)(lVar1 + 0x38);
        if ((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x50))(), iVar3 != 0)) {
            plVar4 = *(longlong **)(lVar1 + 0x38);
            (**(code **)(*plVar4 + 0x48))(plVar4,100,2);
        }
        lVar1 = *(longlong *)(param_1 + 0x5a8);
        plVar4 = *(longlong **)(lVar1 + 0x38);
        if ((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x50))(), iVar3 != 0)) {
            plVar4 = *(longlong **)(lVar1 + 0x38);
            (**(code **)(*plVar4 + 0x48))(plVar4,100,2);
        }
        plVar4 = (longlong *)**(longlong **)(param_1 + 0x5c0);
        if (plVar4 != *(longlong **)(param_1 + 0x5c0)) {
            do {
                plVar2 = (longlong *)*plVar4;
                FUN_14018b900(plVar4,0);
                plVar4 = plVar2;
            } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x5c0));
        }
        *(undefined8 *)*(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x5c0);
        *(longlong *)(*(longlong *)(param_1 + 0x5c0) + 8) = *(longlong *)(param_1 + 0x5c0);
        *(undefined4 *)(param_1 + 0x5b4) = 0;
    }
    return;
}



void FUN_140729bf0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 local_10;
    undefined4 uStack12;

    FUN_14078a2e0(*(undefined8 *)(param_1 + 0x4f8));
    FUN_14078a2e0(*(longlong *)(param_1 + 0x4f8) + 0x98);
    FUN_14078a2e0(*(longlong *)(param_1 + 0x4f8) + 0x130);
    lVar2 = *(longlong *)(param_1 + 0x498);
    plVar3 = *(longlong **)(lVar2 + 0x60);
    local_20 = 0x3f800000;
    local_18 = 0;
    uStack20 = 0;
    local_10 = 0;
    uStack12 = 0;
    if (*(longlong *)(param_1 + 0x50) == 0) {
        local_28 = 0x1a13;
        (**(code **)(*plVar3 + 0x248))();
        *(undefined4 *)(lVar2 + 0x68) = 7;
    }
    else {
        local_28 = 0x45d;
        (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_28);
        *(undefined4 *)(lVar2 + 0x68) = 6;
    }
    FUN_140789a90();
    iVar1 = *(int *)(param_1 + 0x50);
    lVar2 = *(longlong *)(param_1 + 0x4a0);
    if (iVar1 == 0) {
        uVar4 = 0xa5;
    }
    else {
        uVar4 = (&DAT_140c39740)[iVar1 - 1];
    }
    plVar3 = *(longlong **)(lVar2 + 0x50);
    local_28 = (ulonglong)uVar4;
    local_20 = 0x3f800000;
    local_18 = 0;
    uStack20 = 0;
    local_10 = 0;
    uStack12 = 0;
    (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_28);
    *(int *)(lVar2 + 0x58) = iVar1;
    local_28 = 0x455;
    local_20 = 0x3f800000;
    local_18 = 0;
    uStack20 = 1;
    local_10 = 0;
    uStack12 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x488) + 0x248))
            (*(longlong **)(param_1 + 0x488),0,&local_28);
    *(undefined4 *)(param_1 + 0x14) = 7;
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x590),"FortuneCoinSpent","");
    return;
}



void FUN_140729d70(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 local_10;
    undefined4 uStack12;

    lVar1 = *(longlong *)(param_1 + 0x498);
    plVar2 = *(longlong **)(lVar1 + 0x60);
    local_28 = 0x45c;
    local_20 = 0x3f800000;
    local_18 = 0;
    uStack20 = 0;
    local_10 = 0;
    uStack12 = 0;
    (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
    *(undefined4 *)(lVar1 + 0x68) = 5;
    FUN_1407899c0();
    iVar3 = DAT_140c547f0;
    if (*DAT_140c63750 < DAT_140c547f0) {
        iVar3 = *DAT_140c63750;
    }
    if (((&DAT_140c54800)[iVar3] == '\0') &&
        (lVar1 = *(longlong *)(param_1 + 0x578), *(int *)(lVar1 + 0x30) == 0)) {
        *(undefined4 *)(lVar1 + 0x30) = 1;
        local_28 = 0x455;
        local_20 = 0x3f800000;
        local_18 = 0;
        uStack20 = 2;
        local_10 = 0;
        uStack12 = 0;
        (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x248))(*(longlong **)(lVar1 + 0x38),0,&local_28);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140729e50(longlong param_1,undefined8 param_2,int param_3)

{
    int iVar1;
    longlong *plVar2;
    int *piVar3;
    uint uVar4;
    uint uVar5;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    ulonglong uVar12;
    float fVar13;
    int local_res18 [2];
    undefined8 local_a8;
    float local_a0;
    undefined8 local_9c;
    undefined8 local_94;
    undefined4 local_8c;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_3c;
    undefined8 local_34;
    undefined4 local_2c;
    ulonglong uVar6;

    local_res18[0] = param_3;
    switch(*(undefined4 *)(param_1 + 0x14)) {
        case 2:
        case 3:
            FUN_14078ad30(*(undefined8 *)(param_1 + 0x498));
            FUN_140789950();
            piVar3 = DAT_140c63750;
            iVar7 = DAT_140c636a8;
            *(undefined4 *)(param_1 + 0x14) = 4;
            iVar1 = DAT_140c54730;
            if (*piVar3 < DAT_140c54730) {
                iVar1 = *piVar3;
            }
            uVar4 = iVar7 + *(int *)(&DAT_140c54740 + (longlong)iVar1 * 4);
            uVar5 = *(uint *)(param_1 + 0x4a8);
            if (uVar5 == 0xffffffff) {
                *(uint *)(param_1 + 0x4a8) = uVar4;
            }
            else {
                if (uVar5 < uVar4) {
                    uVar5 = uVar4;
                }
                *(uint *)(param_1 + 0x4a8) = uVar5;
            }
            iVar1 = DAT_140c547f0;
            if (*piVar3 < DAT_140c547f0) {
                iVar1 = *piVar3;
            }
            if ((&DAT_140c54800)[iVar1] == '\0') {
                if (*(longlong *)(param_1 + 0x48) == 0) {
                    lVar8 = *(longlong *)(param_1 + 0x588);
                }
                else {
                    lVar8 = *(longlong *)(param_1 + 0x578);
                }
                if (*(int *)(lVar8 + 0x30) == 0) {
                    *(undefined4 *)(lVar8 + 0x30) = 1;
                    local_a8 = 0x455;
                    local_94 = 2;
                    local_a0 = 1.0;
                    local_9c = 0;
                    local_8c = 0;
                    (**(code **)(**(longlong **)(lVar8 + 0x38) + 0x248))
                            (*(longlong **)(lVar8 + 0x38),0,&local_a8);
                }
            }
            break;
        case 4:
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x558) + 0x18);
            if ((*(longlong *)(*(longlong *)(lVar8 + 0x590) + 0xb50) == 0) &&
                (*(longlong *)(lVar8 + 0x4c8) == *(longlong *)(param_1 + 0x558))) {
                if ((DAT_140c65898 == 0) || (iVar1 = FUN_1403d2140(DAT_140c65898,0x31), iVar1 == 0)) {
                    if (*(longlong *)(param_1 + 0x48) == 0) {
                        if (_DAT_140c4b248 != 0) {
                            FUN_14072afa0(param_1,&DAT_140c4b248);
                        }
                        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x590),"ShowPurchaseReminder","");
                    }
                    else {
                        lVar8 = *(longlong *)(param_1 + 0x498);
                        local_88 = 0x459;
                        local_80 = 0x3f800000;
                        plVar2 = *(longlong **)(lVar8 + 0x60);
                        local_78 = 0;
                        uStack116 = 0;
                        uStack112 = 0;
                        uStack108 = 0;
                        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_88);
                        *(undefined4 *)(lVar8 + 0x68) = 3;
                        lVar8 = *(longlong *)(param_1 + 0x558);
                        if (1 < *(int *)(lVar8 + 0x50) - 6U) {
                            local_88 = 0x459;
                            local_80 = 0x3f800000;
                            local_78 = 0;
                            uStack116 = 0;
                            uStack112 = 0;
                            uStack108 = 0;
                            (**(code **)(**(longlong **)(lVar8 + 0x58) + 0x248))
                                    (*(longlong **)(lVar8 + 0x58),0,&local_88);
                            *(undefined4 *)(lVar8 + 0x50) = 6;
                        }
                        lVar8 = *(longlong *)(param_1 + 0x5c0);
                        *(undefined4 *)(param_1 + 0x550) = 1;
                        plVar2 = (longlong *)FUN_14018b280(0x18);
                        if (plVar2 + 2 != (longlong *)0x0) {
                            plVar2[2] = 0;
                        }
                        iVar1 = DAT_140c636a8;
                        *plVar2 = lVar8;
                        plVar2[1] = *(longlong *)(lVar8 + 8);
                        **(longlong ***)(lVar8 + 8) = plVar2;
                        *(longlong **)(lVar8 + 8) = plVar2;
                        iVar7 = DAT_140c54730;
                        if (*DAT_140c63750 < DAT_140c54730) {
                            iVar7 = *DAT_140c63750;
                        }
                        uVar4 = iVar1 + *(int *)(&DAT_140c54740 + (longlong)iVar7 * 4);
                        uVar5 = *(uint *)(param_1 + 0x4a8);
                        if (uVar5 == 0xffffffff) {
                            *(uint *)(param_1 + 0x4a8) = uVar4;
                        }
                        else {
                            if (uVar5 < uVar4) {
                                uVar5 = uVar4;
                            }
                            *(uint *)(param_1 + 0x4a8) = uVar5;
                        }
                        FUN_140712a40(*(undefined8 *)(param_1 + 0x5a8),0x10a9f,&LAB_140472eb0,param_1);
                        iVar1 = DAT_140c547f0;
                        if (*DAT_140c63750 < DAT_140c547f0) {
                            iVar1 = *DAT_140c63750;
                        }
                        if ((&DAT_140c54800)[iVar1] == '\0') {
                            lVar8 = *(longlong *)(param_1 + 0x578);
                            if (*(int *)(lVar8 + 0x30) == 1) {
                                *(undefined4 *)(lVar8 + 0x30) = 0;
                                local_88 = 0x458;
                                local_80 = 0x3f800000;
                                local_78 = 0;
                                uStack116 = 2;
                                uStack112 = 0;
                                uStack108 = 0;
                                (**(code **)(**(longlong **)(lVar8 + 0x38) + 0x248))
                                        (*(longlong **)(lVar8 + 0x38),0,&local_88);
                            }
                            lVar8 = *(longlong *)(param_1 + 0x580);
                            if (*(int *)(lVar8 + 0x30) == 0) {
                                *(undefined4 *)(lVar8 + 0x30) = 1;
                                local_88 = 0x455;
                                local_80 = 0x3f800000;
                                local_78 = 0;
                                uStack116 = 2;
                                uStack112 = 0;
                                uStack108 = 0;
                                (**(code **)(**(longlong **)(lVar8 + 0x38) + 0x248))
                                        (*(longlong **)(lVar8 + 0x38),0,&local_88);
                            }
                        }
                        (**(code **)(**(longlong **)(param_1 + 0x488) + 0x368))
                                (*(longlong **)(param_1 + 0x488),0x17,&local_a8);
                        fVar13 = *(float *)(param_1 + 0x528) - *(float *)(param_1 + 0x518);
                        if (1e-05 <= (float)((uint)fVar13 & 0x7fffffff)) {
                            fVar13 = (local_a0 - *(float *)(param_1 + 0x518)) / fVar13;
                        }
                        else {
                            fVar13 = 0.0;
                        }
                        *(float *)(param_1 + 0x540) =
                                (float)local_a8 -
                                ((*(float *)(param_1 + 0x520) - *(float *)(param_1 + 0x510)) * fVar13 +
                                 *(float *)(param_1 + 0x510));
                        *(float *)(param_1 + 0x544) =
                                local_a8._4_4_ -
                                ((*(float *)(param_1 + 0x524) - *(float *)(param_1 + 0x514)) * fVar13 +
                                 *(float *)(param_1 + 0x514));
                    }
                }
                else {
                    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x590),"ShowFraudReminder","");
                }
            }
            else {
                lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x4a0) + 0x18);
                if ((*(longlong *)(*(longlong *)(lVar8 + 0x590) + 0xb50) == 0) &&
                    ((*(longlong *)(lVar8 + 0x4c8) == *(longlong *)(param_1 + 0x4a0) && (_DAT_140c4b2a8 != 0)))
                        ) {
                    FUN_14072afa0(param_1,&DAT_140c4b2a8);
                }
            }
            break;
        case 7:
            *(undefined4 *)(param_1 + 0x14) = 8;
            lVar8 = 0;
            local_68 = 0x460;
            local_60 = 0x3f800000;
            local_58 = 0;
            local_50 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x488) + 0x248))
                    (*(longlong **)(param_1 + 0x488),0,&local_68);
            lVar11 = 3;
            do {
                FUN_14078a080(*(longlong *)(param_1 + 0x4f8) + lVar8);
                lVar8 = lVar8 + 0x98;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            FUN_14072b050(param_1);
            lVar8 = *(longlong *)(param_1 + 0x498);
            local_88 = 0x45e;
            *(undefined4 *)(lVar8 + 0x68) = 0;
            plVar2 = *(longlong **)(lVar8 + 0x60);
            local_80 = 0x3f800000;
            local_78 = 0;
            uStack116 = 2;
            uStack112 = 0;
            uStack108 = 0;
            (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_88);
            FUN_14078a840(*(undefined8 *)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x50));
            break;
        case 8:
            uVar9 = 0;
            if (*(int *)(param_1 + 0x4e8) == 3) {
                piVar3 = (int *)(*(longlong *)(param_1 + 0x4f8) + 0x5c);
                uVar6 = uVar9;
                do {
                    if (*piVar3 == 4) goto LAB_14072a4df;
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    piVar3 = piVar3 + 0x26;
                } while (uVar5 < 3);
                FUN_140729770(param_1);
            }
            else {
                LAB_14072a4df:
                piVar3 = (int *)(param_1 + 0x38);
                uVar6 = uVar9;
                uVar10 = uVar9;
                uVar12 = uVar9;
                do {
                    lVar8 = *(longlong *)(param_1 + 0x4f8);
                    lVar11 = *(longlong *)(uVar12 + 0x18 + lVar8);
                    if ((*(longlong *)(*(longlong *)(lVar11 + 0x590) + 0xb50) == 0) &&
                        (*(longlong *)(lVar11 + 0x4c8) == uVar12 + lVar8)) {
                        if (*piVar3 == 0) {
                            local_res18[0] = (int)uVar6;
                            FUN_1400161d0(DAT_140c635f0,0x3cd,local_res18);
                        }
                        else {
                            FUN_14078a080(uVar6 * 0x98 + lVar8);
                        }
                        uVar10 = (ulonglong)((int)uVar10 + 1);
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    piVar3 = piVar3 + 1;
                    uVar12 = uVar12 + 0x98;
                } while (uVar5 < 3);
                if ((int)uVar10 == 0) {
                    do {
                        FUN_14078a080(*(longlong *)(param_1 + 0x4f8) + uVar9);
                        uVar9 = uVar9 + 0x98;
                    } while (uVar9 < 0x1c8);
                }
            }
            break;
        case 9:
            FUN_14072c110();
            FUN_140729890(param_1);
            *(undefined4 *)(param_1 + 0x14) = 3;
            FUN_14078ad30(*(undefined8 *)(param_1 + 0x498));
            local_40 = 0x3f800000;
            local_48 = 0x45e;
            local_3c = 0;
            local_34 = 0;
            local_2c = 0;
            (**(code **)(**(longlong **)(param_1 + 0x488) + 0x248))
                    (*(longlong **)(param_1 + 0x488),0,&local_48);
            piVar3 = DAT_140c63750;
            iVar1 = DAT_140c54790;
            if (*DAT_140c63750 < DAT_140c54790) {
                iVar1 = *DAT_140c63750;
            }
            iVar7 = *(int *)(&DAT_140c547a0 + (longlong)iVar1 * 4) + DAT_140c636a8;
            *(int *)(param_1 + 0x5c8) = iVar7;
            iVar1 = DAT_140c54730;
            if (*piVar3 < DAT_140c54730) {
                iVar1 = *piVar3;
            }
            uVar5 = *(uint *)(param_1 + 0x4a8);
            uVar4 = *(int *)(&DAT_140c54740 + (longlong)iVar1 * 4) + iVar7;
            if (uVar5 == 0xffffffff) {
                *(uint *)(param_1 + 0x4a8) = uVar4;
            }
            else {
                if (uVar5 < uVar4) {
                    uVar5 = uVar4;
                }
                *(uint *)(param_1 + 0x4a8) = uVar5;
            }
            iVar1 = DAT_140c547f0;
            if (*piVar3 < DAT_140c547f0) {
                iVar1 = *piVar3;
            }
            FUN_14001a6c0(&PTR_PTR_LAB_140c547e0,iVar1,1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14072a600(longlong param_1,undefined8 param_2,uint param_3)

{
    longlong lVar1;
    int *piVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    uint local_res18 [4];
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if ((*(int *)(param_1 + 0x14) == 4) && (*(int *)(param_1 + 0x550) != 0)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x570) + 0x18);
        local_res18[0] = param_3;
        if ((*(longlong *)(*(longlong *)(lVar1 + 0x590) + 0xb50) == 0) &&
            (*(longlong *)(lVar1 + 0x4c8) == *(longlong *)(param_1 + 0x570))) {
            FUN_140712a40(*(undefined8 *)(param_1 + 0x5a8),0x10aa0,&LAB_140472eb0,param_1);
            local_res18[0] = local_res18[0] & 0xffffff00;
            FUN_1400161d0(DAT_140c635f0,0x3d4,local_res18);
            *(undefined4 *)(param_1 + 0x14) = 5;
        }
        else {
            if (_DAT_140c4b4e8 != 0) {
                FUN_14072afa0(param_1);
            }
            FUN_140729d70();
        }
        piVar2 = DAT_140c63750;
        iVar4 = DAT_140c54730;
        if (*DAT_140c63750 < DAT_140c54730) {
            iVar4 = *DAT_140c63750;
        }
        uVar5 = DAT_140c636a8 + *(int *)(&DAT_140c54740 + (longlong)iVar4 * 4);
        uVar3 = *(uint *)(param_1 + 0x4a8);
        if (uVar3 == 0xffffffff) {
            *(uint *)(param_1 + 0x4a8) = uVar5;
        }
        else {
            if (uVar3 < uVar5) {
                uVar3 = uVar5;
            }
            *(uint *)(param_1 + 0x4a8) = uVar3;
        }
        *(undefined4 *)(param_1 + 0x550) = 0;
        *(undefined (*) [16])(param_1 + 0x540) = ZEXT816(0);
        iVar4 = DAT_140c547f0;
        if (*piVar2 < DAT_140c547f0) {
            iVar4 = *piVar2;
        }
        if (((&DAT_140c54800)[iVar4] == '\0') &&
            (lVar1 = *(longlong *)(param_1 + 0x580), *(int *)(lVar1 + 0x30) == 1)) {
            *(undefined4 *)(lVar1 + 0x30) = 0;
            local_28 = 0x458;
            local_1c = 0;
            local_14 = 2;
            local_20 = 0x3f800000;
            local_c = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x248))(*(longlong **)(lVar1 + 0x38),0,&local_28)
                    ;
        }
    }
    return;
}



void FUN_14072a9f0(longlong param_1,undefined4 *param_2)

{
    int iVar1;

    *(undefined4 *)(param_1 + 0x1c) = *param_2;
    *(undefined4 *)(param_1 + 0x20) = param_2[1];
    *(undefined4 *)(param_1 + 0x24) = param_2[2];
    *(undefined4 *)(param_1 + 0x28) = param_2[3];
    *(undefined4 *)(param_1 + 0x2c) = param_2[4];
    *(undefined4 *)(param_1 + 0x30) = param_2[5];
    *(undefined4 *)(param_1 + 0x34) = param_2[6];
    *(undefined4 *)(param_1 + 0x38) = param_2[7];
    *(undefined4 *)(param_1 + 0x3c) = param_2[8];
    *(undefined4 *)(param_1 + 0x40) = param_2[9];
    iVar1 = DAT_140c546f0;
    if (*DAT_140c63750 < DAT_140c546f0) {
        iVar1 = *DAT_140c63750;
    }
    if ((&DAT_140c54700)[iVar1] != '\0') {
        *(undefined8 *)(param_1 + 0x24) = 2;
        *(undefined4 *)(param_1 + 0x20) = 0;
    }
    return;
}



undefined8 FUN_14072aa70(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;

    iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x490))();
    if ((iVar3 != 0) && (plVar1 = *(longlong **)(param_1 + 0x480), plVar1 != (longlong *)0x0)) {
        iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
        if ((iVar3 != 0) && (plVar1 = *(longlong **)(param_1 + 0x488), plVar1 != (longlong *)0x0)) {
            iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
            if ((iVar3 != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x570), puVar2 != (undefined8 *)0x0))
            {
                iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                if ((iVar3 != 0) &&
                    (puVar2 = *(undefined8 **)(param_1 + 0x498), puVar2 != (undefined8 *)0x0)) {
                    iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                    if ((iVar3 != 0) &&
                        (puVar2 = *(undefined8 **)(param_1 + 0x4a0), puVar2 != (undefined8 *)0x0)) {
                        iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                        if ((iVar3 != 0) &&
                            (puVar2 = *(undefined8 **)(param_1 + 0x558), puVar2 != (undefined8 *)0x0)) {
                            iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                            if ((iVar3 != 0) &&
                                (puVar2 = *(undefined8 **)(param_1 + 0x578), puVar2 != (undefined8 *)0x0)) {
                                iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                                if ((iVar3 != 0) &&
                                    (puVar2 = *(undefined8 **)(param_1 + 0x580), puVar2 != (undefined8 *)0x0)) {
                                    iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                                    if ((iVar3 != 0) &&
                                        (puVar2 = *(undefined8 **)(param_1 + 0x588), puVar2 != (undefined8 *)0x0)) {
                                        iVar3 = (**(code **)*puVar2)(puVar2,param_2);
                                        if (iVar3 != 0) {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14072abc0(longlong param_1)

{
    uint uVar1;
    undefined4 uVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined4 *puVar9;
    longlong lVar10;
    longlong lVar11;
    undefined auStack200 [32];
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    int local_88;
    ulonglong local_80 [4];
    longlong local_60 [3];
    undefined4 local_48 [4];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    uVar1 = *(uint *)(param_1 + 0x50);
    lVar8 = *(longlong *)(param_1 + 0x4a0);
    lVar10 = 0;
    local_80[1] = 0x3f800000;
    plVar3 = *(longlong **)(lVar8 + 0x50);
    local_80[0] = (ulonglong)*(uint *)(&DAT_140c39700 + (ulonglong)uVar1 * 4);
    local_80[2] = 0;
    local_80[3] = 0;
    (**(code **)(*plVar3 + 0x248))(plVar3,0,local_80);
    *(uint *)(lVar8 + 0x58) = uVar1;
    if (*(int *)(param_1 + 0x1c) == 0) {
        FUN_140729890(param_1);
        *(undefined4 *)(param_1 + 0x14) = 2;
        FUN_14078b410(*(undefined8 *)(param_1 + 0x490));
    }
    else {
        *(undefined4 *)(param_1 + 0x14) = 0xc;
        local_a8 = 0x460;
        local_a0 = 0x3f800000;
        local_98 = 0;
        local_90 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x488) + 0x248))
                (*(longlong **)(param_1 + 0x488),0,&local_a8);
        puVar9 = (undefined4 *)(param_1 + 0x2c);
        lVar11 = 3;
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_80[0] = 0;
        local_80[1] = 0;
        local_80[2] = 0;
        lVar8 = lVar10;
        do {
            uVar2 = *puVar9;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64170 == 0) && (iVar4 = FUN_1401e89c0(), -1 < iVar4)) {
                    lVar5 = (**(code **)(*DAT_140c652d0 + 0x18))(DAT_140c652d0,uVar2);
                    goto LAB_14072ad04;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8,uVar2,DAT_140c63858);
                LAB_14072ad04:
                if (lVar5 != 0) {
                    local_88 = *(int *)(lVar5 + 0x48);
                    lVar6 = lVar10;
                    if (local_88 != 0) {
                        uVar7 = FUN_140484600(DAT_140c65918 + 0x50);
                        lVar6 = FUN_1404846c0(uVar7);
                    }
                    uVar2 = *(undefined4 *)(lVar5 + 8);
                    *(longlong *)((longlong)local_60 + lVar8) = lVar6;
                    uVar7 = FUN_1400b5df0(DAT_140c658f0,uVar2,0);
                    *(undefined8 *)((longlong)local_80 + lVar8) = uVar7;
                }
            }
            if (*(longlong *)((longlong)local_60 + lVar8) == 0) {
                *(undefined8 *)((longlong)local_60 + lVar8) = *(undefined8 *)(param_1 + 0x4b0);
            }
            puVar9 = puVar9 + 1;
            lVar8 = lVar8 + 8;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *(undefined4 *)(param_1 + 0x4e8) = 0;
        puVar9 = local_48;
        lVar8 = 3;
        do {
            if (*(int *)((param_1 - (longlong)local_48) + 0x38 + (longlong)puVar9) == 0) {
                *puVar9 = 3;
            }
            else {
                lVar11 = *(longlong *)(param_1 + 0x4f8);
                *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
                *puVar9 = 5;
                lVar11 = lVar11 + lVar10;
                if ((lVar11 != 0) && (DAT_140c665e0 != 0)) {
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c665e0 + 0x590),"CardFlipped",&DAT_1409f8dc4,
                                  *(int *)(lVar11 + 0x28) + 1);
                }
            }
            lVar10 = lVar10 + 0x98;
            puVar9 = puVar9 + 1;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        if (*(int *)(param_1 + 0x20) == 2) {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x4f8) + 0x88);
            *(undefined4 *)(*(longlong *)(param_1 + 0x4f8) + 0x58) = 1;
            if (plVar3 != (longlong *)0x0) {
                local_a8 = 0x456;
                local_a0 = 0x3f800000;
                local_98 = 0;
                local_90 = 0;
                (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_a8);
            }
        }
        if (*(int *)(param_1 + 0x24) == 2) {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x4f8) + 0x120);
            *(undefined4 *)(*(longlong *)(param_1 + 0x4f8) + 0xf0) = 1;
            if (plVar3 != (longlong *)0x0) {
                local_a8 = 0x456;
                local_a0 = 0x3f800000;
                local_98 = 0;
                local_90 = 0;
                (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_a8);
            }
        }
        if (*(int *)(param_1 + 0x28) == 2) {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x4f8) + 0x1b8);
            *(undefined4 *)(*(longlong *)(param_1 + 0x4f8) + 0x188) = 1;
            if (plVar3 != (longlong *)0x0) {
                local_a8 = 0x456;
                local_a0 = 0x3f800000;
                local_98 = 0;
                local_90 = 0;
                (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_a8);
            }
        }
        iVar4 = FUN_14078a1a0(*(undefined8 *)(param_1 + 0x4f8),local_60[0],local_80[0],local_48[0]);
        if ((-1 < iVar4) &&
            (iVar4 = FUN_14078a1a0(*(longlong *)(param_1 + 0x4f8) + 0x98,local_60[1],local_80[1],
                                   local_48[1]), -1 < iVar4)) {
            FUN_14078a1a0(*(longlong *)(param_1 + 0x4f8) + 0x130,local_60[2],local_80[2],local_48[2]);
        }
        *(undefined4 *)(param_1 + 0x4ec) = 0;
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack200);
    return;
}



void FUN_14072afa0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;

    if (*(int *)(param_1 + 0x5b4) != *(int *)param_2) {
        lVar1 = *(longlong *)(param_1 + 0x5c0);
        plVar2 = (longlong *)FUN_14018b280(0x18,0);
        if (plVar2 + 2 != (longlong *)0x0) {
            plVar2[2] = 0;
        }
        *plVar2 = lVar1;
        plVar2[1] = *(longlong *)(lVar1 + 8);
        **(longlong ***)(lVar1 + 8) = plVar2;
        *(longlong **)(lVar1 + 8) = plVar2;
        lVar1 = *(longlong *)(param_1 + 0x5c0);
        plVar2 = (longlong *)FUN_14018b280(0x18);
        if (plVar2 + 2 != (longlong *)0x0) {
            plVar2[2] = *param_2;
        }
        *plVar2 = lVar1;
        plVar2[1] = *(longlong *)(lVar1 + 8);
        **(longlong ***)(lVar1 + 8) = plVar2;
        *(longlong **)(lVar1 + 8) = plVar2;
    }
    return;
}



void FUN_14072b050(longlong param_1)

{
    longlong lVar1;
    int *piVar2;
    longlong *plVar3;
    uint uVar4;

    uVar4 = 0;
    piVar2 = (int *)(param_1 + 0x20);
    do {
        if (*piVar2 == 2) {
            if (((int)DAT_140c4b308 != 0) && (*(int *)(param_1 + 0x5b4) != (int)DAT_140c4b308)) {
                lVar1 = *(longlong *)(param_1 + 0x5c0);
                plVar3 = (longlong *)FUN_14018b280(0x18);
                if (plVar3 + 2 != (longlong *)0x0) {
                    plVar3[2] = 0;
                }
                *plVar3 = lVar1;
                plVar3[1] = *(longlong *)(lVar1 + 8);
                **(longlong ***)(lVar1 + 8) = plVar3;
                *(longlong **)(lVar1 + 8) = plVar3;
                lVar1 = *(longlong *)(param_1 + 0x5c0);
                plVar3 = (longlong *)FUN_14018b280(0x18);
                if (plVar3 + 2 != (longlong *)0x0) {
                    plVar3[2] = DAT_140c4b308;
                }
                *plVar3 = lVar1;
                plVar3[1] = *(longlong *)(lVar1 + 8);
                **(longlong ***)(lVar1 + 8) = plVar3;
                *(longlong **)(lVar1 + 8) = plVar3;
            }
            return;
        }
        uVar4 = uVar4 + 1;
        piVar2 = piVar2 + 1;
    } while (uVar4 < 3);
    return;
}



void FUN_14072b120(undefined8 param_1)

{
    undefined8 local_res8;
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_res8 = CONCAT44((int)((ulonglong)param_1 >> 0x20),0xcd);
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_14001a500(local_28,0,&local_res8);
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0x78))
            (*(longlong **)(DAT_140c65898 + 0x7588),local_28);
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xa0))
            (*(longlong **)(DAT_140c65898 + 0x7588),1);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14072b1a0(void)

{
    longlong lVar1;

    lVar1 = DAT_140c665e0;
    if (DAT_140c665e0 != 0) {
        if (_DAT_140c4b488 != 0) {
            FUN_14072afa0(DAT_140c665e0,&DAT_140c4b488);
        }
        *(undefined4 *)(lVar1 + 0x14) = 10;
        FUN_14078b4a0(*(undefined8 *)(lVar1 + 0x490));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14072b1f0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar1 = DAT_140c665e0;
    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar4;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    if (DAT_140c665e0 != 0) {
        if (_DAT_140c4b488 != 0) {
            FUN_14072afa0(DAT_140c665e0,&DAT_140c4b488);
        }
        *(undefined4 *)(lVar1 + 0x14) = 10;
        FUN_14078b4a0(*(undefined8 *)(lVar1 + 0x490));
    }
    lVar1 = DAT_140c65a48;
    if (DAT_140c65a48 != 0) {
        uVar2 = FUN_1400f26a0(uVar4 + 0x180,1);
        *(undefined4 *)(lVar1 + 0x48) = uVar2;
    }
    return 0;
}



void FUN_14072b2b0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    longlong lVar7;
    uint *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar15 [16];
    float fVar19;
    float fVar20;
    float fVar21;
    undefined auStack248 [32];
    float local_d8;
    float fStack212;
    float fStack208;
    undefined4 uStack204;
    float local_c8;
    float fStack196;
    float fStack192;
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
    int local_78;
    int iStack116;
    int iStack112;
    int iStack108;
    undefined4 local_68;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    lVar7 = FUN_1400d66a0();
    uVar11 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar9 = uVar11;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                param_1) {
                uVar11 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                break;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar1 = uVar11 + 0x180;
    iVar4 = FUN_1400f26a0(lVar1,2);
    iVar5 = FUN_1400f26a0(lVar1,3);
    iVar6 = FUN_1400f26a0(lVar1,4);
    lVar1 = DAT_140c665e0;
    if ((((lVar7 != 0) && (iVar4 != 0)) && (iVar5 != 0)) && (DAT_140c665e0 != 0)) {
        puVar8 = (uint *)(**(code **)(*DAT_140c65670 + 0x248))();
        if (iVar6 == 0) {
            plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x4a0) + 0x50);
            (**(code **)(*plVar3 + 0x358))(plVar3,&local_c8,iVar4,0);
            fVar20 = 0.5;
            fVar21 = 1.0;
            fVar18 = local_c8 * *(float *)(lVar1 + 0x3fc) + fStack196 * *(float *)(lVar1 + 0x40c) +
                     *(float *)(lVar1 + 0x41c) * 0.0 + *(float *)(lVar1 + 0x42c);
            auVar15 = divps(CONCAT412(fVar18,CONCAT48(local_c8 * *(float *)(lVar1 + 0x3f8) +
                                                      fStack196 * *(float *)(lVar1 + 0x408) +
                                                      *(float *)(lVar1 + 0x418) * 0.0 +
                                                      *(float *)(lVar1 + 0x428),
                                                      CONCAT44(local_c8 * *(float *)(lVar1 + 0x3f4) +
                                                               fStack196 * *(float *)(lVar1 + 0x404) +
                                                               *(float *)(lVar1 + 0x414) * 0.0 +
                                                               *(float *)(lVar1 + 0x424),
                                                               local_c8 * *(float *)(lVar1 + 0x3f0) +
                                                               fStack196 * *(float *)(lVar1 + 0x400) +
                                                               *(float *)(lVar1 + 0x410) * 0.0 +
                                                               *(float *)(lVar1 + 0x420)))),
                            CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))) &
                            (undefined  [16])0xffffffffffffffff);
            local_d8 = (SUB164(auVar15,0) + 1.0) * 0.5 * (float)(ulonglong)puVar8[2] +
                       (float)(ulonglong)*puVar8;
            fStack212 = (0.5 - SUB164(auVar15 >> 0x20,0) * 0.5) * (float)(ulonglong)puVar8[3] +
                        (float)(ulonglong)puVar8[1];
            fStack208 = ((float)puVar8[5] - (float)puVar8[4]) * SUB164(auVar15 >> 0x40,0) +
                        (float)puVar8[4];
            plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x4a0) + 0x50);
            uStack188 = uStack204;
            local_c8 = local_d8;
            fStack196 = fStack212;
            fStack192 = fStack208;
            (**(code **)(*plVar3 + 0x358))(plVar3,&local_d8,iVar5,0);
            fVar14 = fStack212 * *(float *)(lVar1 + 0x400);
            fVar16 = fStack212 * *(float *)(lVar1 + 0x404);
            fVar17 = fStack212 * *(float *)(lVar1 + 0x408);
            fVar19 = fStack212 * *(float *)(lVar1 + 0x40c);
            fVar18 = local_d8 * *(float *)(lVar1 + 0x3f0);
            fVar12 = local_d8 * *(float *)(lVar1 + 0x3f4);
            fVar13 = local_d8 * *(float *)(lVar1 + 0x3f8);
            fStack212 = local_d8 * *(float *)(lVar1 + 0x3fc);
        }
        else {
            lVar2 = *(longlong *)(lVar1 + 0x4f8);
            if ((*(int *)((longlong)iVar6 * 0x98 + -0x3c + lVar2) != 5) ||
                (*(longlong *)((longlong)iVar6 * 0x98 + -0x10 + lVar2) == 0)) goto LAB_14072b7f9;
            lVar10 = (longlong)(iVar6 + -1) * 0x98;
            plVar3 = *(longlong **)(lVar10 + 0x88 + lVar2);
            (**(code **)(*plVar3 + 0x358))(plVar3,&local_c8,iVar4,0);
            fVar20 = 0.5;
            fVar21 = 1.0;
            fVar18 = local_c8 * *(float *)(lVar1 + 0x3fc) + fStack196 * *(float *)(lVar1 + 0x40c) +
                     *(float *)(lVar1 + 0x41c) * 0.0 + *(float *)(lVar1 + 0x42c);
            auVar15 = divps(CONCAT412(fVar18,CONCAT48(local_c8 * *(float *)(lVar1 + 0x3f8) +
                                                      fStack196 * *(float *)(lVar1 + 0x408) +
                                                      *(float *)(lVar1 + 0x418) * 0.0 +
                                                      *(float *)(lVar1 + 0x428),
                                                      CONCAT44(local_c8 * *(float *)(lVar1 + 0x3f4) +
                                                               fStack196 * *(float *)(lVar1 + 0x404) +
                                                               *(float *)(lVar1 + 0x414) * 0.0 +
                                                               *(float *)(lVar1 + 0x424),
                                                               local_c8 * *(float *)(lVar1 + 0x3f0) +
                                                               fStack196 * *(float *)(lVar1 + 0x400) +
                                                               *(float *)(lVar1 + 0x410) * 0.0 +
                                                               *(float *)(lVar1 + 0x420)))),
                            CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))) &
                            (undefined  [16])0xffffffffffffffff);
            local_d8 = (SUB164(auVar15,0) + 1.0) * 0.5 * (float)(ulonglong)puVar8[2] +
                       (float)(ulonglong)*puVar8;
            fStack212 = (0.5 - SUB164(auVar15 >> 0x20,0) * 0.5) * (float)(ulonglong)puVar8[3] +
                        (float)(ulonglong)puVar8[1];
            fStack208 = ((float)puVar8[5] - (float)puVar8[4]) * SUB164(auVar15 >> 0x40,0) +
                        (float)puVar8[4];
            plVar3 = *(longlong **)(lVar10 + 0x88 + *(longlong *)(lVar1 + 0x4f8));
            uStack188 = uStack204;
            local_c8 = local_d8;
            fStack196 = fStack212;
            fStack192 = fStack208;
            (**(code **)(*plVar3 + 0x358))(plVar3,&local_d8,iVar5,0);
            fVar14 = local_d8 * *(float *)(lVar1 + 0x3f0);
            fVar16 = local_d8 * *(float *)(lVar1 + 0x3f4);
            fVar17 = local_d8 * *(float *)(lVar1 + 0x3f8);
            fVar19 = local_d8 * *(float *)(lVar1 + 0x3fc);
            fVar18 = fStack212 * *(float *)(lVar1 + 0x400);
            fVar12 = fStack212 * *(float *)(lVar1 + 0x404);
            fVar13 = fStack212 * *(float *)(lVar1 + 0x408);
            fStack212 = fStack212 * *(float *)(lVar1 + 0x40c);
        }
        fVar19 = fVar19 + fStack212 + *(float *)(lVar1 + 0x41c) * 0.0 + *(float *)(lVar1 + 0x42c);
        auVar15 = divps(CONCAT412(fVar19,CONCAT48(fVar17 + fVar13 + *(float *)(lVar1 + 0x418) * 0.0 +
                                                  *(float *)(lVar1 + 0x428),
                                                  CONCAT44(fVar16 + fVar12 +
                                                           *(float *)(lVar1 + 0x414) * 0.0 +
                                                           *(float *)(lVar1 + 0x424),
                                                           fVar14 + fVar18 +
                                                           *(float *)(lVar1 + 0x410) * 0.0 +
                                                           *(float *)(lVar1 + 0x420)))),
                        CONCAT412(fVar19,CONCAT48(fVar19,CONCAT44(fVar19,fVar19))) &
                        (undefined  [16])0xffffffffffffffff);
        local_d8 = (SUB164(auVar15,0) + fVar21) * fVar20 * (float)(ulonglong)puVar8[2] +
                   (float)(ulonglong)*puVar8;
        fVar21 = fVar21 / *(float *)(*(longlong *)(lVar1 + 0x590) + 0x58);
        local_68 = *(undefined4 *)(lVar7 + 0x90);
        fStack212 = (fVar20 - SUB164(auVar15 >> 0x20,0) * fVar20) * (float)(ulonglong)puVar8[3] +
                    (float)(ulonglong)puVar8[1];
        local_78 = (int)(local_c8 * fVar21);
        fStack208 = ((float)puVar8[5] - (float)puVar8[4]) * SUB164(auVar15 >> 0x40,0) + (float)puVar8[4]
                ;
        local_98 = *(undefined4 *)(lVar7 + 0x60);
        uStack148 = *(undefined4 *)(lVar7 + 100);
        uStack144 = *(undefined4 *)(lVar7 + 0x68);
        uStack140 = *(undefined4 *)(lVar7 + 0x6c);
        local_b8 = *(undefined4 *)(lVar7 + 0x40);
        uStack180 = *(undefined4 *)(lVar7 + 0x44);
        uStack176 = *(undefined4 *)(lVar7 + 0x48);
        uStack172 = *(undefined4 *)(lVar7 + 0x4c);
        local_a8 = *(undefined4 *)(lVar7 + 0x50);
        uStack164 = *(undefined4 *)(lVar7 + 0x54);
        uStack160 = *(undefined4 *)(lVar7 + 0x58);
        uStack156 = *(undefined4 *)(lVar7 + 0x5c);
        local_88 = *(undefined4 *)(lVar7 + 0x70);
        uStack132 = *(undefined4 *)(lVar7 + 0x74);
        uStack128 = *(undefined4 *)(lVar7 + 0x78);
        uStack124 = *(undefined4 *)(lVar7 + 0x7c);
        iStack116 = (int)(fStack196 * fVar21);
        iStack112 = (int)(local_d8 * fVar21);
        iStack108 = (int)(fStack212 * fVar21);
        FUN_1400cc740(lVar7,&local_b8);
    }
    LAB_14072b7f9:
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack248);
    return;
}



longlong * FUN_14072b8a0(longlong param_1,undefined4 param_2)

{
    short sVar1;
    undefined2 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    undefined8 uVar8;
    short *psVar9;
    ulonglong uVar10;
    undefined2 *puVar11;
    ulonglong uVar12;
    double dVar13;
    undefined local_98 [8];
    undefined2 *local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined local_78 [8];
    undefined2 *local_70;
    undefined2 *local_68;
    undefined2 *local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    lVar4 = FUN_14018b280(0x58);
    plVar5 = (longlong *)0x0;
    if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_1400b6390(lVar4);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        while( true ) {
            puVar6 = (undefined8 *)FUN_1400580e0(param_1,param_2);
            iVar3 = FUN_14005ba70(param_1,*puVar6,*(longlong *)(param_1 + 0x10) + -0x10);
            if (iVar3 == 0) {
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                return plVar5;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_70 = (undefined2 *)0x0;
            local_68 = (undefined2 *)0x0;
            local_60 = (undefined2 *)0x0;
            local_70 = (undefined2 *)FUN_14018b280(0x10);
            local_60 = local_70 + 8;
            if (local_70 != (undefined2 *)0x0) {
                *local_70 = 0;
            }
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
            local_68 = local_70;
            if ((plVar7 == &DAT_140a12138) ||
                (*(int *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) != 4)) break;
            FUN_14018f2d0(local_58,*plVar7 + 0x20);
            puVar2 = local_70;
            local_68 = local_48;
            local_60 = local_40;
            local_70 = local_50;
            if (puVar2 != (undefined2 *)0x0) {
                FUN_14018b900(puVar2,0);
            }
            puVar2 = local_70;
            iVar3 = FUN_14018e2c0(local_70,&DAT_140b466f0);
            if (iVar3 == 0) {
                uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                FUN_14018f2d0(local_58,uVar8);
                puVar2 = local_50;
                iVar3 = FUN_14018e2c0(local_50);
                if ((iVar3 == 0) || (iVar3 = FUN_14018e2c0(puVar2), iVar3 == 0)) {
                    (**(code **)(*plVar5 + 0x78))(plVar5);
                }
                joined_r0x00014072bb88:
                if (puVar2 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar2);
                }
            }
            else {
                iVar3 = FUN_14018e2c0(puVar2,L"name");
                if (iVar3 == 0) {
                    uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                    FUN_14018f2d0(local_58,uVar8);
                    (**(code **)(*plVar5 + 0x58))(plVar5);
                    puVar2 = local_50;
                    goto joined_r0x00014072bb88;
                }
                iVar3 = FUN_14018e2c0(puVar2,&DAT_140b466b8);
                if (iVar3 == 0) {
                    uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                    FUN_14018f2d0(local_58,uVar8);
                    (**(code **)(*plVar5 + 0x48))(plVar5);
                    puVar2 = local_50;
                    goto joined_r0x00014072bb88;
                }
                iVar3 = FUN_14018e2c0(puVar2);
                if (iVar3 != 0) {
                    local_90 = (undefined2 *)0x0;
                    local_88 = (undefined2 *)0x0;
                    local_80 = (undefined2 *)0x0;
                    local_90 = (undefined2 *)FUN_14018b280(0x10);
                    local_80 = local_90 + 8;
                    if (local_90 != (undefined2 *)0x0) {
                        *local_90 = 0;
                    }
                    if (*(undefined **)(param_1 + 0x10) == &DAT_140a12148) {
                        iVar3 = -1;
                    }
                    else {
                        iVar3 = *(int *)(*(undefined **)(param_1 + 0x10) + -8);
                    }
                    local_88 = local_90;
                    if (iVar3 == 3) {
                        FUN_1400584e0(param_1);
                        psVar9 = (short *)FUN_14034bdd0();
                        puVar2 = local_90;
                        if (psVar9 != (short *)0x0) {
                            sVar1 = *psVar9;
                            plVar7 = (longlong *)0x0;
                            while (sVar1 != 0) {
                                plVar7 = (longlong *)((longlong)plVar7 + 1);
                                sVar1 = psVar9[(longlong)plVar7];
                            }
                            uVar12 = (longlong)local_88 - (longlong)local_90 >> 1;
                            uVar10 = (longlong)(psVar9 + (longlong)plVar7) - (longlong)psVar9 >> 1;
                            if (uVar12 < uVar10) {
                                FUN_1407db590(local_90,psVar9,uVar12 * 2);
                                FUN_14001c310(local_98,psVar9 + ((longlong)local_88 - (longlong)local_90 >> 1),
                                              psVar9 + (longlong)plVar7);
                            }
                            else {
                                FUN_1407db590(local_90,psVar9,uVar10 * 2);
                                puVar2 = local_88;
                                puVar11 = local_90 + uVar10;
                                if (puVar11 != local_88) {
                                    FUN_1407db590(puVar11,local_88,2);
                                    local_88 = local_88 + -((longlong)puVar2 - (longlong)puVar11 >> 1);
                                }
                            }
                            goto LAB_14072bca5;
                        }
                    }
                    else {
                        puVar2 = local_90;
                        if (iVar3 == 4) {
                            uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                            FUN_14018f2d0(local_58,uVar8);
                            puVar2 = local_90;
                            local_90 = local_50;
                            local_88 = local_48;
                            local_80 = local_40;
                            if (puVar2 != (undefined2 *)0x0) {
                                FUN_14018b900(puVar2,0);
                            }
                            LAB_14072bca5:
                            (**(code **)(*plVar5 + 0x98))(plVar5,local_78,local_98);
                            puVar2 = local_90;
                        }
                    }
                    goto joined_r0x00014072bb88;
                }
                dVar13 = (double)FUN_140056c40(param_1);
                (**(code **)(*plVar5 + 0x70))(dVar13,(float)dVar13,plVar5);
                (**(code **)(*plVar5 + 0x68))(plVar5);
            }
            if (local_70 == (undefined2 *)0x0) goto LAB_14072bcda;
            FUN_14018b900();
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        if (local_70 != (undefined2 *)0x0) {
            FUN_14018b900(local_70);
        }
        LAB_14072bcda:
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14072bd20(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    undefined2 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    short **ppsVar8;
    longlong lVar9;
    uint uVar10;
    undefined8 *puVar11;
    uint uVar12;
    longlong lVar13;
    short *psVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    float fVar17;
    short *local_res8;
    short *local_168;
    undefined4 local_160;
    undefined **local_158;
    undefined local_150 [8];
    undefined2 *local_148;
    undefined2 *local_140;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_98 [16];
    undefined2 *local_88;
    undefined local_78 [8];
    longlong local_70;
    undefined local_58 [8];
    short *local_50;

    FUN_1400b6f30(&local_158);
    lVar9 = 0;
    local_158 = &PTR_FUN_140b69230;
    local_98 = ZEXT816(0);
    local_88 = (undefined2 *)0x0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    local_88 = puVar4 + 8;
    local_98 = CONCAT88(puVar4,puVar4);
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar7 = *(longlong *)(param_1 + 0x18);
    uVar5 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_58,uVar5);
    psVar14 = local_50;
    if (local_50 == (short *)0x0) {
        if (local_148 != local_140) {
            *local_148 = 0;
            local_140 = local_148;
        }
    }
    else {
        sVar1 = *local_50;
        lVar13 = lVar9;
        while (sVar1 != 0) {
            lVar13 = lVar13 + 1;
            sVar1 = local_50[lVar13];
        }
        FUN_14001c480(local_150,local_50,local_50 + lVar13);
    }
    uVar10 = 2;
    lVar13 = -1;
    uVar12 = (uint)(lVar2 - lVar7 >> 4);
    if (1 < uVar12) {
        puVar11 = &DAT_140a12138;
        do {
            puVar6 = (undefined8 *)FUN_1400580e0(param_1,uVar10);
            iVar3 = -1;
            if (puVar6 != puVar11) {
                iVar3 = *(int *)(puVar6 + 1);
            }
            if (iVar3 == 3) {
                ppsVar8 = (short **)FUN_1400580e0(param_1,uVar10);
                if (*(int *)(ppsVar8 + 1) == 3) {
                    LAB_14072bf22:
                    uVar15 = SUB84(*ppsVar8,0);
                    uVar16 = (undefined4)((ulonglong)*ppsVar8 >> 0x20);
                }
                else {
                    if ((*(int *)(ppsVar8 + 1) == 4) &&
                        (iVar3 = FUN_14005ac80(*ppsVar8 + 0x10,&local_res8), iVar3 != 0)) {
                        local_160 = 3;
                        ppsVar8 = &local_168;
                        local_168 = local_res8;
                        goto LAB_14072bf22;
                    }
                    uVar15 = 0;
                    uVar16 = 0;
                }
                fVar17 = (float)(double)CONCAT44(uVar16,uVar15);
                puVar11 = (undefined8 *)FUN_14018b280(0x58);
                if (puVar11 != (undefined8 *)0x0) {
                    FUN_1400b6390();
                    *puVar11 = &PTR_FUN_140b69300;
                    *(float *)((longlong)puVar11 + 0xc) = fVar17;
                    *(int *)(puVar11 + 1) = (int)fVar17;
                }
                LAB_14072bf60:
                FUN_1400b7480(&local_158);
                LAB_14072bf6a:
                puVar11 = &DAT_140a12138;
            }
            else {
                if (iVar3 == 4) {
                    uVar5 = FUN_140056bb0(param_1,uVar10,0);
                    FUN_14018f2d0(local_78,uVar5);
                    lVar7 = FUN_14018b280(0x60);
                    lVar2 = local_70;
                    if (lVar7 != 0) {
                        FUN_1404ddb40(lVar7,local_70);
                    }
                    FUN_1400b7480(&local_158);
                    if (lVar2 != 0) {
                        FUN_14018b900(lVar2);
                    }
                    goto LAB_14072bf6a;
                }
                if (iVar3 == 5) {
                    FUN_14072b8a0(param_1,uVar10);
                    goto LAB_14072bf60;
                }
            }
            uVar10 = uVar10 + 1;
            psVar14 = local_50;
        } while (uVar10 <= uVar12);
    }
    if ((local_f8 == local_f0) && (DAT_140c63648 != (undefined8 *)0x0)) {
        local_res8 = (short *)0x0;
        (**(code **)*DAT_140c63648)(DAT_140c63648,local_148,&local_158,&local_res8);
        if (local_res8 == (short *)0x0) {
            if (local_f8 == local_f0) goto LAB_14072c033;
            *local_f8 = 0;
            local_f0 = local_f8;
        }
        else {
            sVar1 = *local_res8;
            while (sVar1 != 0) {
                lVar9 = lVar9 + 1;
                sVar1 = local_res8[lVar9];
            }
            FUN_14001c480(local_100,local_res8,local_res8 + lVar9);
        }
        if (local_res8 != (short *)0x0) {
            (**(code **)(*(longlong *)(local_res8 + -8) + 8))(local_res8 + -8,local_f8);
        }
    }
    LAB_14072c033:
    FUN_14018f0e0(local_78,local_f8);
    if (local_70 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(local_70 + lVar13) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_140062650(param_1,local_70,lVar13);
        *(undefined4 *)(puVar11 + 1) = 4;
        *puVar11 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_14018b900(local_70,0);
    }
    if (psVar14 != (short *)0x0) {
        FUN_14018b900(psVar14,0);
    }
    if (local_98._0_8_ != 0) {
        FUN_14018b900(local_98._0_8_,0);
    }
    FUN_1400b7390(&local_158);
    return 1;
}



void FUN_14072c110(longlong param_1)

{
    int *piVar1;
    int iVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong *plVar5;

    uVar4 = DAT_140c636a8;
    iVar2 = *(int *)(param_1 + 0x4f0);
    while (iVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x5d8);
        plVar5 = (longlong *)FUN_14018b280(0x18);
        if (plVar5 + 2 != (longlong *)0x0) {
            *(undefined4 *)(plVar5 + 2) = uVar4;
        }
        *plVar5 = lVar3;
        plVar5[1] = *(longlong *)(lVar3 + 8);
        **(longlong ***)(lVar3 + 8) = plVar5;
        *(longlong **)(lVar3 + 8) = plVar5;
        piVar1 = (int *)(param_1 + 0x4f0);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
    }
    return;
}



void FUN_14072c180(longlong param_1,int param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined4 in_XMM6_Da;
    float fVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    float local_res10 [2];
    undefined auVar4 [16];

    plVar1 = *(longlong **)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x4c8);
    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar3 = 3.402823e+38;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x590) + 0xb50) == 0) {
        for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
            iVar2 = (**(code **)(*plVar1 + 0x20))
                    (plVar1,param_1 + 0x510,param_1 + 0x520,local_res10,auVar4);
            if ((iVar2 != 0) && (local_res10[0] < fVar3)) {
                *(longlong **)(param_1 + 0x4c8) = plVar1;
                fVar3 = local_res10[0];
            }
        }
    }
    if ((param_2 == 0) &&
        (plVar1 = *(longlong **)(param_1 + 0x4c8), plVar1 == *(longlong **)(param_1 + 0x4c0))) {
        if (plVar1 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x00014072c269. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*plVar1 + 0x30))();
            return;
        }
    }
    else {
        if (*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x38))();
        }
        if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x00014072c293. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x28))();
            return;
        }
    }
    return;
}



undefined8 FUN_14072c2a0(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar5 = FUN_140056ab0(param_1,1,"Game.CharacterTitle");
    lVar6 = 0;
    lVar7 = lVar6;
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 8);
    }
    lVar5 = FUN_140056ab0(param_1,2,"Game.CharacterTitle");
    if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 8);
    }
    if ((lVar7 == 0) || (lVar6 == 0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        iVar1 = *(int *)(lVar6 + 8);
        puVar3 = *(uint **)(param_1 + 0x10);
        iVar2 = *(int *)(lVar7 + 8);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar2 == iVar1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072c340(longlong param_1)

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
        LAB_14072c383:
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
                local_18 = FUN_140062650(param_1,"Game.CharacterTitle",0x13);
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
                goto LAB_14072c467;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14072c383;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14072c467:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072c480(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.CharacterTitle");
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



undefined8 FUN_14072c500(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.CharacterTitle");
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
    ppuVar5 = &PTR_DAT_140c5ec40;
    puVar6 = PTR_DAT_140c5ec40;
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
    FUN_140057020(param_1,"CharacterTitle",&PTR_DAT_140b74670);
    return 1;
}



undefined8 FUN_14072c8c0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 local_res10 [6];

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
         (*(int *)(puVar1 + 1) != 0)) &&
        (((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
           (lVar2 = FUN_140056ab0(param_1,1,"Game.CharacterTitle"), lVar2 != 0)) &&
          ((*(longlong *)(lVar2 + 8) != 0 &&
            (lVar2 = FUN_1401f1860(*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8)), lVar2 != 0)))))) {
        FUN_1403ca2f0();
        return 0;
    }
    local_res10[0] = 0;
    FUN_1403f4900(DAT_140c65898,0x78e,local_res10);
    return 0;
}



undefined8 FUN_14072c960(longlong param_1)

{
    longlong lVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    uint *puVar5;
    longlong local_res10;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
          (lVar4 = FUN_140056ab0(param_1,1,"Game.CharacterTitle"), lVar4 == 0)) ||
         (*(longlong *)(lVar4 + 8) == 0)) ||
        (puVar5 = (uint *)FUN_1401f1860(*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8)),
                puVar5 == (uint *)0x0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x6310);
        local_res10 = lVar4;
        lVar1 = *(longlong *)(lVar4 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < *puVar5) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res10 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res10 == lVar4) || (*puVar5 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar4;
        }
        if (local_res10 == lVar4) {
            iVar3 = 0;
        }
        else {
            iVar3 = FUN_1403d6d10(local_res10 + 0x28);
        }
        puVar5 = *(uint **)(param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint)(iVar3 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072ca50(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    int *piVar4;
    uint uVar5;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.CharacterTitle");
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
            piVar4 = (int *)FUN_1401f1860(*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8));
            if (piVar4 != (int *)0x0) {
                uVar5 = 0;
                puVar1 = *(uint **)(param_1 + 0x10);
                if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                    uVar5 = (uint)(*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x168) == *piVar4);
                }
                *puVar1 = uVar5;
                puVar1[2] = 1;
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



undefined8 FUN_14072caf0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong local_res10 [3];
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar1 = FUN_140056ab0(param_1,1), lVar1 == 0)
         ) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = FUN_1401f1860(*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8)), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f8fa4);
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
    puVar2 = (undefined8 *)FUN_1403ca5f0(DAT_140c65898,local_res10);
    lVar1 = FUN_14018f0e0(local_28,*puVar2);
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
    if (local_res10[0] == 0) {
        return 1;
    }
    (**(code **)(*(longlong *)(local_res10[0] + -0x10) + 8))(local_res10[0] + -0x10);
    return 1;
}



undefined8 FUN_14072cc20(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (lVar1 = FUN_140056ab0(param_1,1), lVar1 == 0)
         ) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = FUN_1401f1860(*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8)), lVar1 == 0)) {
        lVar1 = FUN_14018f0e0(local_28,&DAT_1409f8f8c);
        if (*(longlong *)(lVar1 + 8) == 0) goto LAB_14072cce6;
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
    }
    else {
        lVar1 = FUN_1401f1ca0(*(undefined4 *)(lVar1 + 4));
        if (lVar1 == 0) {
            lVar1 = FUN_14018f0e0(local_28,&DAT_1409f8f74);
            if (*(longlong *)(lVar1 + 8) == 0) goto LAB_14072cce6;
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
        }
        else {
            uVar2 = FUN_14034bdd0();
            lVar1 = FUN_14018f0e0(local_28,uVar2);
            if (*(longlong *)(lVar1 + 8) == 0) {
                LAB_14072cce6:
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                goto LAB_14072cd12;
            }
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
        }
    }
    FUN_140058710(param_1);
    LAB_14072cd12:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14072cef0(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.CharacterTitle");
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
            lVar1 = FUN_1401f1860(*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8));
            if (lVar1 != 0) {
                FUN_1403d3470(param_1,lVar1 + 0x10);
                return 1;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072cf70(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.CharacterTitle");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1401f1860();
            if (lVar4 != 0) {
                iVar1 = *(int *)(lVar4 + 0x14);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)(iVar1 * 1000);
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



undefined8 FUN_14072d010(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.CharacterTitle");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
            lVar4 = FUN_1401f1860();
            if (lVar4 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                puVar2 = *(uint **)(param_1 + 0x10);
                puVar2[2] = 1;
                *puVar2 = uVar1 >> 3 & 1;
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



undefined8 FUN_14072d0a0(longlong param_1)

{
    longlong *plVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    int iVar5;
    longlong **pplVar6;
    longlong **pplVar7;
    bool bVar8;

    pplVar6 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    pplVar7 = (longlong **)FUN_140056ab0(param_1);
    if ((pplVar6 == (longlong **)0x0) || (pplVar7 == (longlong **)0x0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
    }
    else {
        plVar1 = *pplVar6;
        if ((plVar1 == (longlong *)0x0) || (*pplVar7 == (longlong *)0x0)) {
            bVar8 = false;
        }
        else {
            iVar4 = (**(code **)(**pplVar7 + 8))();
            iVar5 = (**(code **)(*plVar1 + 8))(plVar1);
            bVar8 = iVar5 == iVar4;
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = (uint)bVar8;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072d160(longlong param_1)

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
        LAB_14072d1a3:
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
                local_18 = FUN_140062650(param_1,"Game.Episode",0xc);
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
                goto LAB_14072d287;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14072d1a3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14072d287:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072d2a0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.Episode");
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
    ppuVar5 = &PTR_s_GetId_140c5ecd0;
    puVar6 = PTR_s_GetId_140c5ecd0;
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
    FUN_140057020(param_1,"Episode",&PTR_DAT_140b746d0);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"EpisodeState_Unknown",0x14);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"EpisodeState_Mentioned",0x16);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"EpisodeState_Active",0x13);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"EpisodeState_Complete",0x15);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



undefined8 FUN_14072d5b0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_140059170(param_1,8);
    *plVar2 = param_2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Episode",0xc);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_14072d640(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        return 0;
    }
    iVar2 = (**(code **)(**pplVar3 + 8))();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072d6a0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        return 0;
    }
    iVar2 = (**(code **)(**pplVar3 + 0xc0))();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072d700(longlong param_1)

{
    longlong **pplVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    pplVar1 = (longlong **)FUN_140056ab0(param_1,1);
    if (pplVar1 == (longlong **)0x0) {
        return 0;
    }
    (**(code **)(**pplVar1 + 0x28))();
    uVar2 = FUN_14034bdd0();
    lVar3 = FUN_14018f0e0(local_28,uVar2);
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_14072d9f0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        return 0;
    }
    iVar2 = (**(code **)(**pplVar3 + 0x18))();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072da50(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    int iVar4;
    longlong **pplVar5;

    pplVar5 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if ((pplVar5 != (longlong **)0x0) && (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 != 0)) {
        iVar4 = *(int *)(lVar1 + 0x3c);
        if (iVar4 == 0) {
            iVar4 = *(int *)(lVar1 + 0x38);
        }
        lVar1 = *DAT_140c65a10;
        uVar3 = (**(code **)(**pplVar5 + 0x18))();
        iVar4 = (**(code **)(lVar1 + 0x10))(DAT_140c65a10,iVar4,uVar3);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072db10(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        iVar2 = 0;
    }
    else {
        iVar2 = (**(code **)(**pplVar3 + 0x60))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072db70(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        return 0;
    }
    iVar2 = (**(code **)(**pplVar3 + 0x10))();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072dbd0(longlong param_1)

{
    undefined4 uVar1;
    longlong **pplVar2;
    longlong lVar3;
    undefined *puVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    pplVar2 = (longlong **)FUN_140056ab0(param_1,1);
    if (pplVar2 == (longlong **)0x0) {
        return 0;
    }
    uVar1 = (**(code **)(**pplVar2 + 0x10))();
    lVar3 = FUN_14024db80(uVar1);
    puVar5 = (undefined *)0x0;
    if (lVar3 != 0) {
        puVar4 = (undefined *)FUN_14034bdd0();
        puVar5 = &DAT_1409f8fbc;
        if (puVar4 != (undefined *)0x0) {
            puVar5 = puVar4;
        }
    }
    lVar3 = FUN_14018f0e0(local_28,puVar5);
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14072dc90(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    uint *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double *pdVar6;
    longlong **pplVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    ulonglong uVar12;
    bool bVar13;
    int iVar14;
    undefined4 uVar15;
    uint uVar16;
    int iVar17;
    longlong **pplVar18;
    undefined8 uVar19;
    undefined8 *puVar20;
    short *psVar21;
    short *psVar22;
    undefined8 *puVar23;
    undefined8 *puVar24;
    ulonglong *puVar25;
    longlong lVar26;
    undefined8 local_res10;
    longlong local_res18;
    ulonglong local_res20;
    undefined local_60 [8];
    longlong **local_58;

    pplVar18 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar18 == (longlong **)0x0) {
        return 0;
    }
    plVar1 = *pplVar18;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar20 = *(undefined8 **)(param_1 + 0x10);
    uVar19 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar20 + 1) = 5;
    *puVar20 = uVar19;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (plVar1 == (longlong *)0x0) {
        return 1;
    }
    iVar14 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (iVar14 == 0) {
        return 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    puVar20 = *(undefined8 **)(param_1 + 0x10);
    puVar23 = &DAT_140a12138;
    if ((undefined8 *)(lVar2 + 0x10) < puVar20) {
        puVar23 = (undefined8 *)(lVar2 + 0x10);
    }
    bVar13 = false;
    local_res10 = (ulonglong)local_res10._4_4_ << 0x20;
    if ((*(int *)(puVar23 + 1) == 0) || ((*(int *)(puVar23 + 1) == 1 && (*(int *)puVar23 == 0)))) {
        bVar11 = false;
    }
    else {
        bVar11 = true;
    }
    puVar23 = &DAT_140a12138;
    if ((undefined8 *)(lVar2 + 0x20) < puVar20) {
        puVar23 = (undefined8 *)(lVar2 + 0x20);
    }
    if ((*(int *)(puVar23 + 1) == 0) || ((*(int *)(puVar23 + 1) == 1 && (*(int *)puVar23 == 0)))) {
        bVar8 = false;
    }
    else {
        bVar8 = true;
    }
    puVar23 = &DAT_140a12138;
    if ((undefined8 *)(lVar2 + 0x30) < puVar20) {
        puVar23 = (undefined8 *)(lVar2 + 0x30);
    }
    if ((*(int *)(puVar23 + 1) == 0) || ((*(int *)(puVar23 + 1) == 1 && (*(int *)puVar23 == 0)))) {
        bVar10 = false;
    }
    else {
        bVar10 = true;
    }
    uVar15 = FUN_1400584e0(param_1,5);
    bVar9 = false;
    local_58 = (longlong **)FUN_14018b280(0x28);
    *local_58 = (longlong *)local_58;
    local_58[1] = (longlong *)local_58;
    (**(code **)(*plVar1 + 0xa0))(plVar1,uVar15,local_60,0);
    pplVar18 = (longlong **)*local_58;
    if (pplVar18 != local_58) {
        do {
            if (pplVar18[3] == (longlong *)0x0) goto LAB_14072e198;
            iVar14 = FUN_1405fbc40(*DAT_140c65b80,*(undefined4 *)pplVar18[3][1]);
            if (0 < iVar14) {
                if (2 < iVar14) {
                    if ((iVar14 == 3) || (iVar14 != 4)) goto LAB_14072de5d;
                    bVar13 = true;
                }
                bVar9 = true;
            }
            LAB_14072de5d:
            pplVar18 = (longlong **)*pplVar18;
        } while (pplVar18 != local_58);
    }
    iVar14 = (**(code **)(*plVar1 + 0x60))(plVar1);
    lVar26 = (longlong)iVar14;
    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar2 != 0) {
        if (bVar8) {
            uVar16 = 0;
        }
        else {
            iVar17 = *(int *)(lVar2 + 0x3c);
            if (iVar17 == 0) {
                iVar17 = *(int *)(lVar2 + 0x38);
            }
            uVar16 = iVar17 - 10;
        }
        local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)uVar16;
    }
    iVar17 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (iVar14 == 0) {
        if (iVar17 < (int)local_res10) goto LAB_14072e198;
    }
    else if (((!bVar11) && (!bVar9)) && (!bVar13)) goto LAB_14072e198;
    puVar20 = (undefined8 *)FUN_14018b280(0x18);
    *puVar20 = puVar20;
    puVar20[1] = puVar20;
    pplVar18 = (longlong **)*local_58;
    local_res18 = lVar26;
    if (pplVar18 != local_58) {
        do {
            plVar1 = pplVar18[3];
            iVar14 = FUN_1405fbc40(*DAT_140c65b80,*(undefined4 *)plVar1[1]);
            if (iVar14 != 0) {
                puVar3 = (uint *)plVar1[1];
                uVar4 = *(ulonglong *)(*DAT_140c65b80 + 0x28);
                uVar12 = uVar4;
                uVar5 = *(ulonglong *)(uVar4 + 8);
                while (uVar5 != 0) {
                    if (*(uint *)(uVar5 + 0x20) < *puVar3) {
                        uVar5 = *(ulonglong *)(uVar5 + 0x18);
                    }
                    else {
                        uVar12 = uVar5;
                        uVar5 = *(ulonglong *)(uVar5 + 0x10);
                    }
                }
                if ((uVar12 == uVar4) || (*puVar3 < *(uint *)(uVar12 + 0x20))) {
                    local_res20 = uVar4;
                    puVar25 = &local_res20;
                }
                else {
                    local_res10 = uVar12;
                    puVar25 = &local_res10;
                }
                if ((*puVar25 == uVar4) || (iVar14 == 4)) {
                    if (lVar26 == 0) {
                        puVar23 = (undefined8 *)FUN_14018b280(0x18);
                        if ((longlong **)(puVar23 + 2) != (longlong **)0x0) {
                            puVar23[2] = plVar1;
                        }
                    }
                    else {
                        if (((!bVar11) && (iVar14 == 3)) || ((!bVar8 && ((int)puVar3[4] < (int)local_res10))))
                            goto LAB_14072e0e5;
                        if (bVar10) {
                            if (((puVar3 == (uint *)0x0) ||
                                 (psVar21 = (short *)FUN_14034bdd0(), psVar21 == (short *)0x0)) || (*psVar21 == 0))
                            {
                                puVar23 = (undefined8 *)*puVar20;
                                LAB_14072e060:
                                puVar24 = (undefined8 *)FUN_14018b280(0x18);
                                if ((longlong **)(puVar24 + 2) != (longlong **)0x0) {
                                    puVar24[2] = plVar1;
                                }
                                *puVar24 = puVar23;
                                puVar24[1] = puVar23[1];
                                *(undefined8 **)puVar23[1] = puVar24;
                                puVar23[1] = puVar24;
                                lVar26 = local_res18;
                                goto LAB_14072e0e5;
                            }
                            for (puVar23 = (undefined8 *)*puVar20; puVar23 != puVar20;
                                 puVar23 = (undefined8 *)*puVar23) {
                                if (((*(longlong *)(puVar23[2] + 8) != 0) &&
                                     (psVar22 = (short *)FUN_14034bdd0(), psVar22 != (short *)0x0)) &&
                                    ((*psVar22 != 0 && (iVar14 = FUN_14018e220(psVar21), iVar14 < 0))))
                                    goto LAB_14072e060;
                            }
                        }
                        else {
                            for (puVar23 = (undefined8 *)*puVar20; puVar23 != puVar20;
                                 puVar23 = (undefined8 *)*puVar23) {
                                if (puVar3[4] < *(uint *)(*(longlong *)(puVar23[2] + 8) + 0x10)) goto LAB_14072e060;
                            }
                        }
                        puVar23 = (undefined8 *)FUN_14018b280(0x18);
                        lVar26 = local_res18;
                        if ((longlong **)(puVar23 + 2) != (longlong **)0x0) {
                            puVar23[2] = plVar1;
                        }
                    }
                    *puVar23 = puVar20;
                    puVar23[1] = puVar20[1];
                    *(undefined8 **)puVar20[1] = puVar23;
                    puVar20[1] = puVar23;
                }
            }
            LAB_14072e0e5:
            pplVar18 = (longlong **)*pplVar18;
        } while (pplVar18 != local_58);
    }
    iVar14 = 1;
    for (puVar23 = (undefined8 *)*puVar20; puVar23 != puVar20; puVar23 = (undefined8 *)*puVar23) {
        pdVar6 = *(double **)(param_1 + 0x10);
        uVar19 = puVar23[2];
        *(undefined4 *)(pdVar6 + 1) = 3;
        *pdVar6 = (double)iVar14;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140663030(param_1,uVar19);
        lVar2 = *(longlong *)(param_1 + 0x10);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        iVar14 = iVar14 + 1;
    }
    puVar23 = (undefined8 *)*puVar20;
    while (puVar23 != puVar20) {
        puVar24 = (undefined8 *)*puVar23;
        FUN_14018b900(puVar23,0);
        puVar23 = puVar24;
    }
    *puVar20 = puVar20;
    puVar20[1] = puVar20;
    FUN_14018b900(puVar20,0);
    LAB_14072e198:
    pplVar18 = (longlong **)*local_58;
    if ((longlong **)*local_58 != local_58) {
        do {
            pplVar7 = (longlong **)*pplVar18;
            FUN_14018b900(pplVar18,0);
            pplVar18 = pplVar7;
        } while (pplVar7 != local_58);
    }
    *local_58 = (longlong *)local_58;
    local_58[1] = (longlong *)local_58;
    FUN_14018b900(local_58,0);
    return 1;
}



undefined8 FUN_14072e480(undefined8 param_1)

{
    undefined4 uVar1;
    longlong **pplVar2;
    longlong lVar3;
    undefined8 uVar4;

    pplVar2 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar2 != (longlong **)0x0) {
        uVar1 = FUN_140056d60(param_1,2);
        lVar3 = (**(code **)(**pplVar2 + 0x88))(*pplVar2,uVar1);
        if (lVar3 != 0) {
            uVar4 = FUN_140663030(param_1,lVar3);
            return uVar4;
        }
        (**(code **)(**pplVar2 + 8))();
    }
    return 0;
}



undefined8 FUN_14072e930(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    longlong **pplVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    int iVar8;

    pplVar4 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar4 == (longlong **)0x0) {
        return 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = (**(code **)(**pplVar4 + 0xd0))();
    plVar7 = (longlong *)**(longlong **)(lVar6 + 8);
    iVar8 = 1;
    if (plVar7 != *(longlong **)(lVar6 + 8)) {
        do {
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1405a9420();
            FUN_14069f380(param_1,uVar5);
            lVar3 = *(longlong *)(param_1 + 0x10);
            FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            plVar7 = (longlong *)*plVar7;
            iVar8 = iVar8 + 1;
        } while (plVar7 != (longlong *)*(longlong *)(lVar6 + 8));
    }
    return 1;
}



undefined8 FUN_14072ec40(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        iVar2 = 0;
    }
    else {
        iVar2 = (**(code **)(**pplVar3 + 0x68))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072eca0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        iVar2 = 0;
    }
    else {
        iVar2 = (**(code **)(**pplVar3 + 0x70))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072ed00(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar3 == (longlong **)0x0) {
        iVar2 = 0;
    }
    else {
        iVar2 = (**(code **)(**pplVar3 + 0x78))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072ed60(longlong param_1)

{
    undefined4 uVar1;
    longlong **pplVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 local_18;
    undefined4 local_10;

    pplVar2 = (longlong **)FUN_140056ab0(param_1,1,"Game.Episode");
    if (pplVar2 != (longlong **)0x0) {
        if (*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) {
            uVar1 = 0;
        }
        else {
            uVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        }
        uVar1 = (**(code **)(**pplVar2 + 0x80))(*pplVar2,uVar1);
        lVar3 = FUN_14022bfc0(uVar1);
        if (lVar3 != 0) {
            puVar4 = (undefined8 *)FUN_140059170(param_1,0x10);
            puVar5 = (undefined8 *)FUN_14018b280(0x10);
            if (puVar5 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar5 + 1) = uVar1;
                *puVar5 = &PTR_FUN_140b6fe30;
            }
            *puVar4 = 0x3950;
            puVar4[1] = puVar5;
            lVar3 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.QuestHub",0xd);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar3 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072ee90(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    FUN_1400569b0(param_1,"Game.DialogResponse");
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
    ppuVar5 = &PTR_s_GetText_140c5ee40;
    puVar6 = PTR_s_GetText_140c5ee40;
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
    FUN_140057020(param_1,"DialogResponse",&PTR_DAT_140b746f0);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewVending",0x1e);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewTraining",0x1f);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewTradeskillTraining",0x29);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewCraftingStation",0x26);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4010000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewGuildRegistrar",0x25);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewWarPartyRegistrar",0x28);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewQuestAccept",0x22);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewQuestComplete",0x24);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_ViewQuestIncomplete",0x26);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_Goodbye",0x1a);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_QuestComplete",0x20);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_QuestAccept",0x1e);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_QuestIncomplete",0x22);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x402a000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"DialogResponseType_QuestMoreInfo",0x20);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



undefined8 FUN_14072f540(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *)0x0) {
        return 0;
    }
    (**(code **)*param_2)(param_2);
    puVar2 = (undefined8 *)FUN_140059170(param_1,8);
    *puVar2 = param_2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.DialogResponse",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_14072f5e0(undefined8 param_1)

{
    longlong **pplVar1;

    pplVar1 = (longlong **)FUN_140056ab0(param_1,1,"Game.DialogResponse");
    if ((pplVar1 != (longlong **)0x0) && (*pplVar1 != (longlong *)0x0)) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    return 0;
}



undefined8 FUN_14072f620(longlong param_1)

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
        LAB_14072f663:
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
                local_18 = FUN_140062650(param_1,"Game.DialogResponse",0x13);
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
                goto LAB_14072f747;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14072f663;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14072f747:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072f760(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.DialogResponse");
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    iVar1 = *(int *)(*plVar3 + 0x38);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14072f9c0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.DialogResponse");
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    iVar1 = *(int *)(*plVar3 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14072fae0(longlong param_1)

{
    ulonglong uVar1;
    short *psVar2;
    short sVar3;
    double *pdVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    int iVar9;
    int *piVar10;
    int *piVar11;
    short *psVar12;
    short *psVar13;
    longlong lVar14;
    uint uVar15;
    longlong lVar16;
    undefined8 local_78;
    undefined4 local_70;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;
    undefined local_48 [8];
    longlong local_40;

    FUN_140057020(param_1,"ChatSystemLib",&PTR_s_GetChannels_140b74710);
    uVar15 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c6528c != 0) || (iVar9 = FUN_1401f1e80(), iVar9 < 0)) goto LAB_14072fd8d;
        uVar8 = (**(code **)(*DAT_140c64728 + 0x28))();
    }
    else {
        uVar8 = (*DAT_140c63838)(&PTR_u_ChatChannel_140a69870,DAT_140c63858);
    }
    if (uVar8 != 0) {
        do {
            piVar11 = (int *)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                piVar10 = piVar11;
                if ((_DAT_140c6528c == 0) && (iVar9 = FUN_1401f1e80(), -1 < iVar9)) {
                    piVar10 = (int *)(**(code **)(*DAT_140c64728 + 0x20))(DAT_140c64728,uVar15);
                }
            }
            else {
                piVar10 = (int *)(*DAT_140c63848)(&PTR_u_ChatChannel_140a69870,uVar15,DAT_140c63858);
            }
            local_60 = 0;
            local_50 = 0;
            do {
                piVar11 = (int *)((longlong)piVar11 + 1);
            } while (L"ChatChannel"[(longlong)piVar11] != L'\0');
            lVar16 = (longlong)piVar11 * 2 >> 1;
            uVar1 = lVar16 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar6 = uVar1 * 2;
                local_60 = FUN_14018b280(lVar6,0);
                local_50 = lVar6 + local_60;
            }
            lVar6 = local_60;
            lVar16 = lVar16 * 2;
            FUN_1407db590(local_60,L"ChatChannel",lVar16);
            local_58 = (undefined2 *)(lVar16 + lVar6);
            psVar13 = (short *)0x0;
            psVar12 = psVar13;
            if (local_58 != (undefined2 *)0x0) {
                *local_58 = 0;
            }
            do {
                psVar2 = &DAT_1409f909e + (longlong)psVar12;
                psVar12 = (short *)((longlong)psVar12 + 1);
            } while (*psVar2 != 0);
            FUN_14001c310(local_68,&DAT_1409f909c,&DAT_1409f909c + (longlong)psVar12 * 2);
            uVar1 = *(ulonglong *)(piVar10 + 2);
            psVar12 = psVar13;
            if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
                psVar12 = (short *)(DAT_140c3fe68 + uVar1);
            }
            sVar3 = *psVar12;
            while (sVar3 != 0) {
                psVar13 = (short *)((longlong)psVar13 + 1);
                sVar3 = psVar12[(longlong)psVar13];
            }
            FUN_14001c310(local_68);
            lVar6 = local_60;
            pdVar4 = *(double **)(param_1 + 0x10);
            iVar9 = *piVar10;
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar9;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_14018f0e0(local_48,local_60);
            lVar7 = local_40;
            lVar16 = *(longlong *)(param_1 + 0x10);
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(local_40 + lVar14) != '\0');
            local_78 = FUN_140062650(param_1,local_40);
            local_70 = 4;
            FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            if (lVar7 != 0) {
                FUN_14018b900(lVar7,0);
            }
            if (lVar6 != 0) {
                FUN_14018b900(lVar6,0);
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < uVar8);
    }
    LAB_14072fd8d:
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x3ff0000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_PassOwner",0x1b);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4000000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_AddModerator",0x1e);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4008000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_RemoveModerator",0x21);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4010000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_Muted",0x17);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4014000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_Unmuted",0x19);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4018000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_Kicked",0x18);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4020000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_AddPassword",0x1d);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4022000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelAction_RemovePassword",0x20);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x3ff0000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_DoesntExist",0x1d);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4000000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_BadPassword",0x1d);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4008000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NoPermissions",0x1f);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4010000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NoSpeaking",0x1c);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4014000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_Muted",0x17);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4018000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_Throttled",0x1b);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4020000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotInGroup",0x1c);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4022000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotInGuild",0x1c);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4024000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotInSociety",0x1e);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4026000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotGuildOfficer",0x21);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4028000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_AlreadyMember",0x1f);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x402a000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_BadName",0x19);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x402c000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotMember",0x1b);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x402e000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotInWarParty",0x1f);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar5 + 1) = 3;
    *puVar5 = 0x4030000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_NotWarPartyOfficer",0x24);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4031000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_InvalidMessageText",0x24);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4032000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_InvalidPasswordText",0x25);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4033000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_TruncatedText",0x1f);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar5 + 1) = 3;
    *puVar5 = 0x4034000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_InvalidCharacterName",0x26);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4035000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_GMMuted",0x19);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4037000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_TooManyCustomChannels",0x27);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = 0x4038000000000000;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_78 = FUN_140062650(param_1,"ChatChannelResult_MissingEntitlement",0x24);
    local_70 = 4;
    FUN_14005ea50(param_1,lVar16 + -0x20,&local_78,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



undefined8 FUN_140730890(longlong param_1)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    double *pdVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;

    uVar1 = DAT_140c658a0[1];
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    uVar6 = 0;
    *puVar2 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar8 = uVar6;
    if (uVar1 != 0) {
        do {
            lVar3 = *(longlong *)(*DAT_140c658a0 + uVar6 * 8);
            if ((lVar3 != 0) && ((*(uint *)(*(longlong *)(lVar3 + 8) + 0x34) & 0x100) == 0)) {
                pdVar4 = *(double **)(param_1 + 0x10);
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)uVar7;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_140433380(param_1);
                lVar3 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
    }
    return 1;
}



undefined8 FUN_140730980(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined2 *puVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined4 *puVar9;
    longlong lVar10;
    undefined uVar11;
    undefined8 *puVar12;
    longlong local_88;
    ulonglong local_80;
    undefined2 *local_68;
    ulonglong local_60;
    longlong local_58;
    undefined8 local_50;
    undefined local_48 [8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;

    uVar5 = FUN_140056d60(param_1,1);
    uVar7 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(&local_68,uVar7);
    lVar8 = FUN_14018f0e0(local_48,&DAT_1409f9124);
    uVar7 = *(undefined8 *)(lVar8 + 8);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar12 < *(undefined8 **)(param_1 + 0x10)) && (puVar12 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        uVar7 = FUN_140056bb0(param_1,3);
    }
    FUN_14018f2d0(&local_88,uVar7);
    if (local_40 != (undefined2 *)0x0) {
        FUN_14018b900(local_40,0);
    }
    puVar9 = (undefined4 *)FUN_1406622c0(param_1,4);
    lVar8 = 0;
    uVar6 = 0;
    if ((puVar9 != (undefined4 *)0x0) && (lVar8 = FUN_1403d90d0(DAT_140c65898,*puVar9), lVar8 != 0)) {
        puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
        if ((puVar12 < *(undefined8 **)(param_1 + 0x10)) &&
            ((puVar12 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x48))))) {
            uVar6 = FUN_140056d60(param_1,5);
        }
    }
    uVar3 = local_60;
    uVar2 = local_80;
    lVar1 = DAT_140c658a0;
    if (DAT_140c658a0 != 0) {
        lVar10 = FUN_140401220(DAT_140c658a0,uVar5,0);
        if (lVar10 == 0) {
            lVar10 = FUN_140401220(lVar1,4,0);
        }
        local_80 = 0;
        local_88 = 0;
        local_40 = (undefined2 *)FUN_14018b280(0x10);
        local_30 = local_40 + 8;
        if (local_40 != (undefined2 *)0x0) {
            *local_40 = 0;
        }
        local_38 = local_40;
        FUN_140402720(lVar10,local_48,&local_88,local_60);
        puVar4 = local_40;
        lVar1 = local_88;
        uVar5 = 0;
        local_50 = 0;
        local_58 = local_88;
        local_68 = local_40;
        local_60 = local_80 & 0xffffffff;
        if (lVar8 == 0) {
            uVar11 = 0;
        }
        else {
            uVar11 = *(undefined *)(lVar8 + 0x1b2);
            uVar5 = *(undefined4 *)(lVar8 + 8);
        }
        FUN_1404045c0(DAT_140c658a0,**(undefined4 **)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),uVar5,
                      uVar2,0,0,&local_68,0,0,0,uVar6,0,uVar11);
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
    }
    if (uVar2 != 0) {
        FUN_14018b900(uVar2,0);
    }
    if (uVar3 != 0) {
        FUN_14018b900(uVar3,0);
    }
    return 0;
}



undefined8 FUN_140730c30(longlong param_1)

{
    uint uVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    ulonglong local_88;
    longlong local_80;
    longlong local_78;
    ulonglong local_70;
    undefined local_68 [8];
    longlong local_60;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (*(int *)(puVar4 + 1) == 3)) {
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uVar1 = FUN_140056d60(param_1,1);
        local_88 = local_88 & 0xffffffff00000000 | (ulonglong)uVar1;
        local_80 = 0;
        local_78 = 0;
        local_70 = local_70 & 0xffffffff00000000;
        FUN_1403f4740(DAT_140c65898,0x1ba,&local_88);
    }
    else {
        uVar2 = FUN_140056bb0(param_1,1);
        FUN_14018f2d0(local_48,uVar2);
        lVar3 = FUN_14018f0e0(local_68,&DAT_1409f90fc);
        uVar2 = *(undefined8 *)(lVar3 + 8);
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar2 = FUN_140056bb0(param_1,2);
        }
        FUN_14018f2d0(local_28,uVar2);
        if (local_60 != 0) {
            FUN_14018b900(local_60,0);
        }
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
            uVar1 = FUN_140056d60(param_1,3);
        }
        else {
            uVar1 = 0;
        }
        local_88 = 0x12;
        local_80 = local_40;
        local_78 = local_20;
        local_70 = (ulonglong)uVar1;
        FUN_1403f4740(DAT_140c65898,0x1ba,&local_88);
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
    }
    return 0;
}



undefined8 FUN_140730dc0(longlong param_1)

{
    short *psVar1;
    short sVar2;
    undefined8 *puVar3;
    ulonglong *puVar4;
    undefined4 *puVar5;
    longlong lVar6;
    bool bVar7;
    short *psVar8;
    short *psVar9;
    undefined2 *puVar10;
    char cVar11;
    int iVar12;
    undefined8 uVar13;
    undefined2 *puVar14;
    longlong lVar15;
    ulonglong uVar16;
    char *pcVar17;
    longlong lVar18;
    undefined2 *local_res8;
    undefined local_a8 [8];
    longlong local_a0;
    undefined2 *local_98;
    longlong local_90;
    undefined local_88 [8];
    short *local_80;
    short *local_78;
    short *local_70;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    undefined local_48 [8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;

    uVar13 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_88,uVar13);
    puVar14 = (undefined2 *)FUN_14018b280(2);
    local_30 = puVar14 + 1;
    local_40 = puVar14;
    FUN_1407db590(puVar14,&DAT_1409f90dc,0);
    lVar15 = 0;
    if (puVar14 != (undefined2 *)0x0) {
        *puVar14 = 0;
    }
    local_38 = puVar14;
    local_58 = (undefined2 *)FUN_14018b280(2);
    local_50 = local_58 + 1;
    local_60 = local_58;
    FUN_1407db590(local_58,&DAT_1409f90bc,0);
    psVar1 = local_78;
    psVar8 = local_80;
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    if (((longlong)local_78 - (longlong)local_80 >> 1 == 0) || (bVar7 = true, *local_80 != 0x2f)) {
        bVar7 = false;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar13 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar13;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (bVar7) {
        local_a0 = 0;
        local_90 = 0;
        lVar18 = lVar15;
        do {
            psVar1 = &DAT_140b4714a + lVar18;
            lVar18 = lVar18 + 1;
        } while (*psVar1 != 0);
        lVar18 = lVar18 * 2 >> 1;
        uVar16 = lVar18 + 1;
        if (uVar16 < 0x7fffffffffffffff) {
            lVar6 = uVar16 * 2;
            local_a0 = FUN_14018b280(lVar6,0);
            local_90 = local_a0 + lVar6;
        }
        lVar6 = local_a0;
        lVar18 = lVar18 * 2;
        FUN_1407db590(local_a0,&DAT_140b47148,lVar18);
        local_98 = (undefined2 *)(lVar18 + lVar6);
        if (local_98 != (undefined2 *)0x0) {
            *local_98 = 0;
        }
        psVar1 = psVar8 + 1;
        local_80 = (short *)0x0;
        local_70 = (short *)0x0;
        sVar2 = *psVar1;
        while (sVar2 != 0) {
            lVar15 = lVar15 + 1;
            sVar2 = psVar1[lVar15];
        }
        lVar15 = lVar15 * 2 >> 1;
        uVar16 = lVar15 + 1;
        if (uVar16 < 0x7fffffffffffffff) {
            local_80 = (short *)FUN_14018b280(uVar16 * 2,0);
            local_70 = local_80 + uVar16;
        }
        psVar9 = local_80;
        FUN_1407db590(local_80,psVar1,lVar15 * 2);
        local_78 = psVar9 + lVar15;
        if (local_78 != (short *)0x0) {
            *local_78 = 0;
        }
        FUN_14018fbd0(local_88,local_48,local_68,local_a8);
        if (psVar9 != (short *)0x0) {
            FUN_14018b900(psVar9);
        }
        if (lVar6 != 0) {
            FUN_14018b900(lVar6);
        }
        puVar14 = local_40;
        lVar15 = DAT_140c658a0;
        local_res8 = local_40;
        uVar16 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res8);
        for (puVar4 = *(ulonglong **)
                (*(longlong *)(lVar15 + 0x20) + (uVar16 % *(ulonglong *)(lVar15 + 0x18)) * 8);
             puVar4 != (ulonglong *)0x0; puVar4 = (ulonglong *)puVar4[1]) {
            if ((uVar16 == *puVar4) &&
                (iVar12 = (**(code **)(lVar15 + 0x30))(&local_res8,puVar4 + 2), iVar12 != 0)) {
                if ((puVar4 + 3 != (ulonglong *)0x0) && (uVar16 = puVar4[3], uVar16 != 0)) {
                    FUN_140058710(param_1,"channelCommand",0xe);
                    FUN_140433380(param_1,uVar16);
                    lVar15 = *(longlong *)(param_1 + 0x10);
                    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar15,lVar15 + -0x20,lVar15 + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                    pcVar17 = "bValidCommand";
                    goto LAB_140731100;
                }
                break;
            }
        }
        FUN_140058710(param_1,"channelCommand",0xe);
        uVar13 = FUN_140401220(DAT_140c658a0,1);
        FUN_140433380(param_1,uVar13);
        lVar15 = *(longlong *)(param_1 + 0x10);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar15,lVar15 + -0x20,lVar15 + -0x10);
        lVar15 = DAT_140c65898;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        uVar13 = *(undefined8 *)(lVar15 + 0x7340);
        cVar11 = FUN_1400ec6c0(uVar13,puVar14);
        if (cVar11 == '\0') {
            lVar15 = FUN_14018f0e0(local_48,puVar14);
            cVar11 = FUN_1400ec7d0(uVar13,*(undefined8 *)(lVar15 + 8));
            if (local_40 != (undefined2 *)0x0) {
                FUN_14018b900(local_40,0);
            }
            if (cVar11 == '\0') goto LAB_1407311bd;
        }
        pcVar17 = "bValidCommand";
        LAB_140731100:
        FUN_140058710(param_1,pcVar17,0xd);
        puVar5 = *(undefined4 **)(param_1 + 0x10);
        *puVar5 = 1;
        puVar5[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar13 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar13,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    }
    else {
        FUN_14001c480(local_68,psVar8,psVar1);
    }
    LAB_1407311bd:
    FUN_1400f0090(param_1);
    puVar10 = local_60;
    FUN_1400f0090(param_1);
    if (puVar10 != (undefined2 *)0x0) {
        FUN_14018b900(puVar10,0);
    }
    if (puVar14 != (undefined2 *)0x0) {
        FUN_14018b900(puVar14,0);
    }
    if (psVar8 != (short *)0x0) {
        FUN_14018b900(psVar8,0);
    }
    return 1;
}



undefined8 FUN_140731240(undefined8 param_1)

{
    undefined8 uVar1;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_48,uVar1);
    FUN_14011b780(local_28,*(undefined8 *)(DAT_140c65898 + 0x7340),local_40);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return 0;
}



undefined8 FUN_1407312b0(longlong param_1)

{
    undefined4 uVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    double dVar8;
    int local_res8;
    int iStackX12;
    undefined **local_28;
    int local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0();
    uVar7 = 0;
    uVar2 = *(ulonglong *)(DAT_140c658a0 + 0x40);
    if (uVar2 != 0) {
        do {
            FUN_1400fad30(&local_28,*(undefined8 *)(*(longlong *)(DAT_140c658a0 + 0x38) + uVar7 * 8));
            uVar7 = uVar7 + 1;
            param_1 = local_18;
        } while (uVar7 < uVar2);
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (local_20 - 1U < *(uint *)(lVar3 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_20 + -1) * 0x10 + *(longlong *)(lVar3 + 0x18));
    }
    else {
        dVar8 = (double)local_20;
        if (dVar8 == 0.0) {
            puVar6 = *(undefined8 **)(lVar3 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar8 >> 0x20);
            local_res8 = SUB84(dVar8,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar3 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar8 == (double)puVar6[2])) goto LAB_1407313ee;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_1407313ee:
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar4 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,local_20);
    return 1;
}

