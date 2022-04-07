//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1404b1bb0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    char *pcVar3;
    longlong lVar4;
    char *pcVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    wchar_t *pwVar9;
    short *psVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined *puVar13;
    longlong lVar14;
    undefined8 uVar15;
    uint uVar16;
    wchar_t *pwVar18;
    char *pcVar19;
    char *pcVar20;
    undefined8 *puVar21;
    short *psVar22;
    wchar_t *pwVar23;
    bool bVar24;
    undefined auStack1368 [32];
    wchar_t *local_538;
    undefined8 local_530;
    wchar_t *local_528;
    uint local_518;
    undefined4 uStack1300;
    longlong *local_510;
    longlong local_508;
    longlong local_500;
    ulonglong local_4f8;
    longlong local_4f0;
    undefined local_4e8 [16];
    undefined **local_4d8 [2];
    longlong local_4c8;
    uint local_4c0;
    undefined8 local_4b8;
    undefined8 *local_4a8;
    longlong local_498;
    longlong local_490;
    int local_47c;
    longlong local_470;
    undefined8 local_468;
    undefined **local_458;
    undefined *local_450;
    undefined local_448 [84];
    int local_3f4;
    undefined8 local_3f0;
    undefined local_3e8 [16];
    undefined **local_3d8;
    undefined *local_3d0;
    undefined local_3c8 [84];
    int local_374;
    undefined8 local_370;
    undefined local_368 [16];
    undefined **local_358;
    undefined *local_350;
    undefined local_348 [84];
    int local_2f4;
    undefined8 local_2f0;
    undefined local_2e8 [16];
    undefined **local_2d8;
    undefined *local_2d0;
    undefined local_2c8 [84];
    int local_274;
    undefined8 local_270;
    undefined local_268 [16];
    undefined local_258 [16];
    short local_248;
    short local_246 [263];
    ulonglong local_38;
    wchar_t *pwVar17;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1368;
    local_530 = *(undefined8 *)(DAT_140c63788 + 0x1320);
    local_528 = L"LevelUpUnlocks.xml";
    local_538 = L"NCSOFT";
    iVar6 = FUN_14001b370(&local_248,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
    if ((-1 < iVar6) && (local_248 != 0)) {
        psVar10 = &local_248;
        do {
            psVar22 = psVar10 + 1;
            psVar10 = psVar10 + 1;
        } while (*psVar22 != 0);
    }
    FUN_1401a72e0(local_4d8);
    FUN_1401a59a0(local_4d8);
    lVar8 = local_470;
    pwVar23 = (wchar_t *)0x0;
    local_47c = 0;
    local_470 = 0;
    if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_468,0);
    local_468 = 0;
    local_510 = (longlong *)0x0;
    iVar6 = FUN_1401b6d00();
    plVar7 = local_510;
    if (iVar6 < 0) {
        if (-1 < local_47c) {
            local_47c = iVar6;
            plVar7 = (longlong *)FUN_14018d540(&local_518,L"%0.8x %s",iVar6,&local_248);
            lVar8 = *plVar7;
            *plVar7 = local_470;
            lVar11 = CONCAT44(uStack1300,local_518);
            local_470 = lVar8;
            if (lVar11 != 0) {
                (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
            }
        }
        iVar6 = local_47c;
        if (local_510 != (longlong *)0x0) {
            (**(code **)(*local_510 + 8))();
        }
    }
    else {
        iVar6 = FUN_1401a7c70(local_4d8,local_510);
        if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 8))(plVar7);
        }
    }
    if ((-1 < iVar6) && (puVar21 = local_4a8, local_4a8 != (undefined8 *)0x0)) {
        do {
            plVar7 = (longlong *)(**(code **)*puVar21)(puVar21);
            if (plVar7 != (longlong *)0x0) {
                lVar8 = (**(code **)(*plVar7 + 0x30))();
                pwVar9 = pwVar23;
                if (lVar8 == 0) {
                    pwVar9 = (wchar_t *)FUN_1401a4f40();
                }
                pwVar18 = L"ViewedLevelUpUnlocks";
                if (pwVar9 != L"ViewedLevelUpUnlocks") {
                    pwVar17 = pwVar23;
                    if (*pwVar9 != L'\0') {
                        do {
                            uVar16 = (uint)pwVar17;
                            if (((*pwVar18 == L'\0') || (*pwVar9 != *pwVar18)) || (0x7ffffffe < (int)uVar16))
                                break;
                            pwVar9 = pwVar9 + 1;
                            pwVar18 = pwVar18 + 1;
                            uVar16 = uVar16 + 1;
                            pwVar17 = (wchar_t *)(ulonglong)uVar16;
                        } while (*pwVar9 != L'\0');
                        if (uVar16 == 0x7fffffff) goto LAB_1404b1dee;
                    }
                    if ((*pwVar9 != L'\0') || (*pwVar18 != L'\0')) goto LAB_1404b1ddc;
                }
                LAB_1404b1dee:
                if (plVar7 != (longlong *)0x0) {
                    for (lVar8 = FUN_1401a5ae0(plVar7); lVar8 != 0; lVar8 = FUN_1401a5bc0(lVar8)) {
                        lVar11 = *(longlong *)(lVar8 + 0x60);
                        local_518 = 0;
                        for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x38)) {
                            psVar22 = &DAT_140b03a84;
                            psVar10 = (short *)FUN_1401a4f40();
                            if (psVar10 == &DAT_140b03a84) {
                                LAB_1404b1e94:
                                if (lVar11 != 0) {
                                    uVar15 = FUN_1401a4f40(lVar11 + 0x20);
                                    FUN_1407df428(uVar15,&DAT_1409e4114,&local_518);
                                }
                                break;
                            }
                            pwVar9 = pwVar23;
                            if (*psVar10 != 0) {
                                do {
                                    uVar16 = (uint)pwVar9;
                                    if (((*psVar22 == 0) || (*psVar10 != *psVar22)) || (0x7ffffffe < (int)uVar16))
                                        break;
                                    psVar10 = psVar10 + 1;
                                    psVar22 = psVar22 + 1;
                                    uVar16 = uVar16 + 1;
                                    pwVar9 = (wchar_t *)(ulonglong)uVar16;
                                } while (*psVar10 != 0);
                                if (uVar16 == 0x7fffffff) goto LAB_1404b1e94;
                            }
                            if ((*psVar10 == 0) && (*psVar22 == 0)) goto LAB_1404b1e94;
                        }
                        local_510 = (longlong *)
                                ((ulonglong)local_510 & 0xffffffff00000000 | (ulonglong)local_518);
                        FUN_1400293c0(param_1 + 0x60,&local_4f8);
                    }
                }
                break;
            }
            LAB_1404b1ddc:
            puVar1 = puVar21 + 9;
            puVar21 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
        do {
            if (local_4a8 == (undefined8 *)0x0) break;
            plVar7 = (longlong *)(**(code **)*local_4a8)(local_4a8);
            if (plVar7 != (longlong *)0x0) {
                lVar8 = (**(code **)(*plVar7 + 0x30))();
                pwVar9 = pwVar23;
                if (lVar8 == 0) {
                    pwVar9 = (wchar_t *)FUN_1401a4f40();
                }
                pwVar18 = L"PendingLevelUpUnlocks";
                if (pwVar9 != L"PendingLevelUpUnlocks") {
                    pwVar17 = pwVar23;
                    if (*pwVar9 != L'\0') {
                        do {
                            uVar16 = (uint)pwVar17;
                            if (((*pwVar18 == L'\0') || (*pwVar9 != *pwVar18)) || (0x7ffffffe < (int)uVar16))
                                break;
                            pwVar9 = pwVar9 + 1;
                            pwVar18 = pwVar18 + 1;
                            uVar16 = uVar16 + 1;
                            pwVar17 = (wchar_t *)(ulonglong)uVar16;
                        } while (*pwVar9 != L'\0');
                        if (uVar16 == 0x7fffffff) goto LAB_1404b1f8e;
                    }
                    if ((*pwVar9 != L'\0') || (*pwVar18 != L'\0')) goto LAB_1404b1f7c;
                }
                LAB_1404b1f8e:
                if (plVar7 != (longlong *)0x0) {
                    for (lVar8 = FUN_1401a5ae0(plVar7); lVar8 != 0; lVar8 = FUN_1401a5bc0(lVar8)) {
                        for (lVar11 = *(longlong *)(lVar8 + 0x60); lVar11 != 0;
                             lVar11 = *(longlong *)(lVar11 + 0x38)) {
                            psVar22 = &DAT_140b07ab4;
                            psVar10 = (short *)FUN_1401a4f40();
                            if (psVar10 == &DAT_140b07ab4) {
                                LAB_1404b202f:
                                if ((lVar11 != 0) &&
                                    ((lVar11 = FUN_1401a4f40(lVar11 + 0x20), lVar11 != 0 &&
                                                                             (uVar12 = FUN_1407df51c(lVar11), uVar12 != 0)))) {
                                    lVar11 = FUN_14018b280(0x20);
                                    if (lVar11 == 0) {
                                        lVar11 = 0;
                                    }
                                    else {
                                        puVar13 = (undefined *)FUN_14018b280(0x28);
                                        *(undefined8 *)(lVar11 + 0x10) = 0;
                                        *(undefined **)(lVar11 + 8) = puVar13;
                                        *puVar13 = 0;
                                        *(undefined8 *)(*(longlong *)(lVar11 + 8) + 8) = 0;
                                        *(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) = *(longlong *)(lVar11 + 8);
                                        *(longlong *)(*(longlong *)(lVar11 + 8) + 0x18) = *(longlong *)(lVar11 + 8);
                                    }
                                    lVar14 = FUN_1401a5ae0();
                                    while (lVar14 != 0) {
                                        lVar14 = *(longlong *)(lVar14 + 0x60);
                                        local_518 = 0;
                                        for (; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x38)) {
                                            psVar22 = &DAT_140b07404;
                                            psVar10 = (short *)FUN_1401a4f40(lVar14 + 8);
                                            if (psVar10 == &DAT_140b07404) {
                                                LAB_1404b2157:
                                                if (lVar14 != 0) {
                                                    uVar15 = FUN_1401a4f40(lVar14 + 0x20);
                                                    FUN_1407df428(uVar15,&DAT_1409e4114,&local_518);
                                                }
                                                break;
                                            }
                                            iVar6 = 0;
                                            if (*psVar10 != 0) {
                                                do {
                                                    if (((*psVar22 == 0) || (*psVar10 != *psVar22)) || (0x7ffffffe < iVar6))
                                                        break;
                                                    psVar10 = psVar10 + 1;
                                                    psVar22 = psVar22 + 1;
                                                    iVar6 = iVar6 + 1;
                                                } while (*psVar10 != 0);
                                                if (iVar6 == 0x7fffffff) goto LAB_1404b2157;
                                            }
                                            if ((*psVar10 == 0) && (*psVar22 == 0)) goto LAB_1404b2157;
                                        }
                                        lVar14 = *(longlong *)(param_1 + 0x68);
                                        lVar4 = lVar14;
                                        lVar2 = *(longlong *)(lVar14 + 8);
                                        while (lVar2 != 0) {
                                            if (*(uint *)(lVar2 + 0x20) < local_518) {
                                                lVar2 = *(longlong *)(lVar2 + 0x18);
                                            }
                                            else {
                                                lVar4 = lVar2;
                                                lVar2 = *(longlong *)(lVar2 + 0x10);
                                            }
                                        }
                                        if ((lVar4 == lVar14) || (local_518 < *(uint *)(lVar4 + 0x20))) {
                                            local_500 = lVar14;
                                            plVar7 = &local_500;
                                        }
                                        else {
                                            local_508 = lVar4;
                                            plVar7 = &local_508;
                                        }
                                        if (*plVar7 == lVar14) {
                                            local_510 = (longlong *)
                                                    ((ulonglong)local_510 & 0xffffffff00000000 | (ulonglong)local_518)
                                                    ;
                                            FUN_1400293c0(lVar11,local_258,&local_510);
                                        }
                                        lVar14 = FUN_1401a5bc0();
                                    }
                                    pcVar3 = *(char **)(param_1 + 0x88);
                                    bVar24 = true;
                                    pcVar5 = pcVar3;
                                    pcVar20 = *(char **)(pcVar3 + 8);
                                    while (pcVar20 != (char *)0x0) {
                                        bVar24 = uVar12 < *(ulonglong *)(pcVar20 + 0x20);
                                        pcVar5 = pcVar20;
                                        if (bVar24) {
                                            pcVar20 = *(char **)(pcVar20 + 0x10);
                                        }
                                        else {
                                            pcVar20 = *(char **)(pcVar20 + 0x18);
                                        }
                                    }
                                    pcVar20 = pcVar5;
                                    local_4f8 = uVar12;
                                    local_4f0 = lVar11;
                                    if (bVar24) {
                                        if (pcVar5 != *(char **)(pcVar3 + 0x10)) {
                                            if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)
                                                    ) {
                                                pcVar20 = *(char **)(pcVar5 + 0x18);
                                            }
                                            else {
                                                pcVar20 = *(char **)(pcVar5 + 0x10);
                                                if (pcVar20 == (char *)0x0) {
                                                    pcVar20 = *(char **)(pcVar5 + 8);
                                                    pcVar19 = pcVar20;
                                                    if (pcVar5 == *(char **)(pcVar20 + 0x10)) {
                                                        do {
                                                            pcVar20 = *(char **)(pcVar19 + 8);
                                                            bVar24 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                                            pcVar19 = pcVar20;
                                                        } while (bVar24);
                                                    }
                                                }
                                                else {
                                                    for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                                         pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                                        pcVar20 = pcVar19;
                                                    }
                                                }
                                            }
                                            goto LAB_1404b22cd;
                                        }
                                        local_538 = (wchar_t *)&local_4f8;
                                        FUN_1400eecd0(param_1 + 0x80,local_4e8,0,pcVar5);
                                    }
                                    else {
                                        LAB_1404b22cd:
                                        if (*(ulonglong *)(pcVar20 + 0x20) < uVar12) {
                                            if ((pcVar5 == pcVar3) || (uVar12 < *(ulonglong *)(pcVar5 + 0x20))) {
                                                lVar14 = FUN_14018b280(0x30);
                                                if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                                                    *(ulonglong *)(lVar14 + 0x20) = uVar12;
                                                    *(longlong *)(lVar14 + 0x28) = lVar11;
                                                }
                                                *(longlong *)(pcVar5 + 0x10) = lVar14;
                                                pcVar3 = *(char **)(param_1 + 0x88);
                                                if (pcVar5 == pcVar3) {
                                                    *(longlong *)(pcVar3 + 8) = lVar14;
                                                    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = lVar14;
                                                }
                                                else if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                                                    *(longlong *)(pcVar3 + 0x10) = lVar14;
                                                }
                                            }
                                            else {
                                                lVar14 = FUN_14018b280(0x30);
                                                if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                                                    *(ulonglong *)(lVar14 + 0x20) = uVar12;
                                                    *(longlong *)(lVar14 + 0x28) = lVar11;
                                                }
                                                *(longlong *)(pcVar5 + 0x18) = lVar14;
                                                if (pcVar5 == *(char **)(*(longlong *)(param_1 + 0x88) + 0x18)) {
                                                    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = lVar14;
                                                }
                                            }
                                            *(char **)(lVar14 + 8) = pcVar5;
                                            *(undefined8 *)(lVar14 + 0x10) = 0;
                                            *(undefined8 *)(lVar14 + 0x18) = 0;
                                            FUN_1400081c0(lVar14,*(longlong *)(param_1 + 0x88) + 8);
                                            *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 1;
                                        }
                                    }
                                }
                                break;
                            }
                            iVar6 = 0;
                            if (*psVar10 != 0) {
                                do {
                                    if (((*psVar22 == 0) || (*psVar10 != *psVar22)) || (0x7ffffffe < iVar6)) break;
                                    psVar10 = psVar10 + 1;
                                    psVar22 = psVar22 + 1;
                                    iVar6 = iVar6 + 1;
                                } while (*psVar10 != 0);
                                if (iVar6 == 0x7fffffff) goto LAB_1404b202f;
                            }
                            if ((*psVar10 == 0) && (*psVar22 == 0)) goto LAB_1404b202f;
                        }
                    }
                }
                break;
            }
            LAB_1404b1f7c:
            local_4a8 = (undefined8 *)local_4a8[9];
        } while( true );
    }
    local_4d8[0] = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(local_4d8);
    lVar8 = local_470;
    local_47c = 0;
    local_470 = 0;
    if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_468,0);
    local_468 = 0;
    local_2d8 = &PTR_FUN_140b5ea18;
    while (local_274 != 0) {
        local_274 = local_274 + -1;
        FUN_14018b900(*(undefined8 *)(local_2d0 + (longlong)local_274 * 8),0);
    }
    local_270 = 0;
    local_268 = ZEXT816(0);
    if (local_2d0 != local_2c8) {
        FUN_14018b900(local_2d0,0);
    }
    local_358 = &PTR_LAB_140b5ea48;
    local_2d8 = &PTR_FUN_140b5ead8;
    while (local_2f4 != 0) {
        local_2f4 = local_2f4 + -1;
        FUN_14018b900(*(undefined8 *)(local_350 + (longlong)local_2f4 * 8),0);
    }
    local_2f0 = 0;
    local_2e8 = ZEXT816(0);
    if (local_350 != local_348) {
        FUN_14018b900(local_350,0);
    }
    local_358 = &PTR_FUN_140b5ead8;
    local_3d8 = &PTR_LAB_140b5ea78;
    while (local_374 != 0) {
        local_374 = local_374 + -1;
        FUN_14018b900(*(undefined8 *)(local_3d0 + (longlong)local_374 * 8),0);
    }
    local_370 = 0;
    local_368 = ZEXT816(0);
    if (local_3d0 != local_3c8) {
        FUN_14018b900(local_3d0,0);
    }
    local_3d8 = &PTR_FUN_140b5ead8;
    local_458 = &PTR_LAB_140b5eaa8;
    while (local_3f4 != 0) {
        local_3f4 = local_3f4 + -1;
        FUN_14018b900(*(undefined8 *)(local_450 + (longlong)local_3f4 * 8),0);
    }
    local_3f0 = 0;
    local_3e8 = ZEXT816(0);
    if (local_450 != local_448) {
        FUN_14018b900(local_450,0);
    }
    local_458 = &PTR_FUN_140b5ead8;
    if (local_470 != 0) {
        (**(code **)(*(longlong *)(local_470 + -0x10) + 8))(local_470 + -0x10);
    }
    local_4d8[0] = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(local_4d8);
    if (local_4c8 != 0) {
        if (local_4d8 == *(undefined ****)(local_4c8 + 0x30)) {
            *(undefined ***)(local_4c8 + 0x30) = (*(undefined ****)(local_4c8 + 0x30))[9];
        }
        if (local_4d8 == *(undefined ****)(local_4c8 + 0x38)) {
            *(undefined ***)(local_4c8 + 0x38) = (*(undefined ****)(local_4c8 + 0x38))[8];
        }
        if (local_498 != 0) {
            *(longlong *)(local_498 + 0x48) = local_490;
        }
        if (local_490 != 0) {
            *(longlong *)(local_490 + 0x40) = local_498;
        }
        local_4c8 = 0;
    }
    if ((local_4c0 & 0x200) != 0) {
        FUN_14018b900(local_4b8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1368);
    return;
}



void FUN_1404b2680(longlong param_1)

{
    short *psVar1;
    short sVar2;
    undefined4 uVar3;
    undefined auVar4 [16];
    longlong lVar5;
    int iVar6;
    short *psVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    longlong *plVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    longlong *plVar17;
    undefined8 *puVar18;
    undefined auStack1768 [32];
    wchar_t *local_6c8;
    undefined8 local_6c0;
    wchar_t *local_6b8;
    longlong *local_6a8;
    undefined8 *local_6a0;
    longlong local_698;
    longlong local_690;
    undefined **local_688;
    longlong local_680;
    longlong local_678;
    uint local_670;
    undefined8 local_668;
    undefined8 *local_658;
    undefined8 *local_650;
    longlong local_648;
    longlong local_640;
    int local_62c;
    longlong local_620;
    undefined8 local_618;
    undefined **local_608;
    undefined *local_600;
    undefined local_5f8 [84];
    int local_5a4;
    undefined8 local_5a0;
    undefined local_598 [16];
    undefined **local_588;
    undefined *local_580;
    undefined local_578 [84];
    int local_524;
    undefined8 local_520;
    undefined local_518 [16];
    undefined **local_508;
    undefined *local_500;
    undefined local_4f8 [84];
    int local_4a4;
    undefined8 local_4a0;
    undefined local_498 [16];
    undefined **local_488;
    undefined *local_480;
    undefined local_478 [84];
    int local_424;
    undefined8 local_420;
    undefined local_418 [16];
    short local_408 [24];
    short local_3d8 [200];
    short local_248;
    short local_246 [263];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1768;
    local_6c0 = *(undefined8 *)(DAT_140c63788 + 0x1320);
    local_6b8 = L"LevelUpUnlocks.xml";
    local_6c8 = L"NCSOFT";
    local_698 = param_1;
    iVar6 = FUN_14001b370(&local_248,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
    if ((-1 < iVar6) && (local_248 != 0)) {
        psVar7 = &local_248;
        do {
            psVar1 = psVar7 + 1;
            psVar7 = psVar7 + 1;
        } while (*psVar1 != 0);
    }
    FUN_1401a72e0(&local_688);
    puVar8 = (undefined8 *)(*(code *)local_488[2])(&local_488);
    puVar18 = (undefined8 *)0x0;
    puVar15 = puVar18;
    if (puVar8 != (undefined8 *)0x0) {
        puVar8[2] = 0;
        puVar8[1] = &local_688;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        *puVar8 = &PTR_LAB_140b5ed50;
        puVar8[10] = 0;
        puVar15 = puVar8;
    }
    puVar15[10] = &local_488;
    FUN_1401a4c50(puVar15 + 3,L"xml version=\"1.0\" encoding=\"UTF-8\"");
    if (puVar15[1] == local_680) {
        lVar12 = puVar15[2];
        if (lVar12 == 0) {
            (**(code **)(*(longlong *)puVar15[10] + 0x20))();
        }
        else {
            if (puVar15 == *(undefined8 **)(lVar12 + 0x30)) {
                *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
            }
            if (puVar15 == *(undefined8 **)(lVar12 + 0x38)) {
                *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
            }
            if (puVar15[8] != 0) {
                *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
            }
            if (puVar15[9] != 0) {
                *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
            }
            puVar15[2] = 0;
        }
        if (local_650 == (undefined8 *)0x0) {
            puVar15[8] = 0;
            local_658 = puVar15;
        }
        else {
            local_650[9] = puVar15;
            puVar15[8] = local_650;
        }
        puVar15[9] = 0;
        puVar15[2] = &local_688;
        local_650 = puVar15;
    }
    puVar8 = (undefined8 *)(*(code *)local_608[2])(&local_608);
    puVar15 = puVar18;
    if (puVar8 != (undefined8 *)0x0) {
        puVar8[2] = 0;
        puVar8[1] = &local_688;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        *puVar8 = &PTR_FUN_140b5eba0;
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0xc] = 0;
        puVar15 = puVar8;
    }
    puVar15[10] = &local_608;
    FUN_1401a4c50(puVar15 + 3,L"ViewedLevelUpUnlocks");
    if (puVar15[1] == local_680) {
        lVar12 = puVar15[2];
        if (lVar12 == 0) {
            (**(code **)(*(longlong *)puVar15[10] + 0x20))();
        }
        else {
            if (puVar15 == *(undefined8 **)(lVar12 + 0x30)) {
                *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
            }
            if (puVar15 == *(undefined8 **)(lVar12 + 0x38)) {
                *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
            }
            if (puVar15[8] != 0) {
                *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
            }
            if (puVar15[9] != 0) {
                *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
            }
            puVar15[2] = 0;
        }
        if (local_650 == (undefined8 *)0x0) {
            puVar15[8] = 0;
            local_658 = puVar15;
        }
        else {
            local_650[9] = puVar15;
            puVar15[8] = local_650;
        }
        puVar15[9] = 0;
        puVar15[2] = &local_688;
        local_650 = puVar15;
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
    if (lVar12 != *(longlong *)(param_1 + 0x68)) {
        do {
            puVar9 = (undefined8 *)(*(code *)local_608[2])(&local_608);
            puVar8 = puVar18;
            if (puVar9 != (undefined8 *)0x0) {
                puVar9[2] = 0;
                puVar9[1] = &local_688;
                *(undefined4 *)(puVar9 + 3) = 0;
                puVar9[4] = 0;
                puVar9[5] = 0;
                puVar9[6] = 0;
                puVar9[7] = 0;
                puVar9[8] = 0;
                puVar9[9] = 0;
                puVar9[10] = 0;
                *puVar9 = &PTR_FUN_140b5eba0;
                *(undefined4 *)(puVar9 + 0xb) = 0;
                puVar9[0xc] = 0;
                puVar8 = puVar9;
            }
            puVar8[10] = &local_608;
            if ((*(uint *)(puVar8 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar8[4],0);
            }
            *(undefined4 *)(puVar8 + 3) = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            puVar9 = puVar18;
            do {
                puVar16 = puVar9;
                puVar9 = (undefined8 *)((longlong)puVar16 + 1);
            } while (L"LevelUpUnlock"[(longlong)puVar16 + 1] != L'\0');
            auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
            uVar10 = SUB168(auVar4,0);
            if (SUB168(auVar4 >> 0x40,0) != 0) {
                uVar10 = 0xffffffffffffffff;
            }
            uVar10 = FUN_14018b280(uVar10,0);
            puVar8[4] = uVar10;
            FUN_1407db590(uVar10,L"LevelUpUnlock",(longlong)puVar9 * 2 + 2);
            *(undefined4 *)(puVar8 + 3) = 0x200;
            puVar8[5] = puVar8[4] + (longlong)puVar9 * 2;
            uVar3 = *(undefined4 *)(lVar12 + 0x20);
            lVar11 = FUN_1401a6c70(puVar8,&DAT_140b06734);
            FUN_1401a4c20(local_3d8,200,&DAT_1409e41b4,uVar3);
            if ((*(uint *)(lVar11 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 *)(lVar11 + 0x28),0);
            }
            *(undefined4 *)(lVar11 + 0x20) = 0;
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined8 *)(lVar11 + 0x30) = 0;
            puVar9 = puVar18;
            sVar2 = local_3d8[0];
            while (sVar2 != 0) {
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                sVar2 = local_3d8[(longlong)puVar9];
            }
            auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 1);
            uVar10 = SUB168(auVar4,0);
            if (SUB168(auVar4 >> 0x40,0) != 0) {
                uVar10 = 0xffffffffffffffff;
            }
            uVar10 = FUN_14018b280(uVar10,0);
            *(undefined8 *)(lVar11 + 0x28) = uVar10;
            FUN_1407db590(uVar10,local_3d8,(longlong)puVar9 * 2 + 2);
            *(undefined4 *)(lVar11 + 0x20) = 0x200;
            *(longlong *)(lVar11 + 0x30) = *(longlong *)(lVar11 + 0x28) + (longlong)puVar9 * 2;
            if (puVar8[1] == puVar15[1]) {
                lVar11 = puVar8[2];
                if (lVar11 == 0) {
                    (**(code **)(*(longlong *)puVar8[10] + 0x20))();
                }
                else {
                    if (puVar8 == *(undefined8 **)(lVar11 + 0x30)) {
                        *(undefined8 *)(lVar11 + 0x30) = (*(undefined8 **)(lVar11 + 0x30))[9];
                    }
                    if (puVar8 == *(undefined8 **)(lVar11 + 0x38)) {
                        *(undefined8 *)(lVar11 + 0x38) = (*(undefined8 **)(lVar11 + 0x38))[8];
                    }
                    if (puVar8[8] != 0) {
                        *(undefined8 *)(puVar8[8] + 0x48) = puVar8[9];
                    }
                    if (puVar8[9] != 0) {
                        *(undefined8 *)(puVar8[9] + 0x40) = puVar8[8];
                    }
                    puVar8[2] = 0;
                }
                if (puVar15[7] == 0) {
                    puVar15[7] = puVar8;
                    puVar15[6] = puVar8;
                    puVar8[8] = 0;
                }
                else {
                    *(undefined8 **)(puVar15[7] + 0x48) = puVar8;
                    puVar8[8] = puVar15[7];
                    puVar15[7] = puVar8;
                }
                puVar8[9] = 0;
                puVar8[2] = puVar15;
            }
            lVar11 = *(longlong *)(lVar12 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar12 + 8);
                if (lVar12 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar12 = lVar11;
                        lVar11 = *(longlong *)(lVar12 + 8);
                    } while (lVar12 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar12 + 0x18) != lVar11) {
                    lVar12 = lVar11;
                }
            }
            else {
                for (lVar13 = *(longlong *)(lVar11 + 0x10); lVar12 = lVar11, lVar13 != 0;
                     lVar13 = *(longlong *)(lVar13 + 0x10)) {
                    lVar11 = lVar13;
                }
            }
        } while (lVar12 != *(longlong *)(param_1 + 0x68));
    }
    local_6a0 = (undefined8 *)(*(code *)local_608[2])(&local_608);
    if (local_6a0 == (undefined8 *)0x0) {
        local_6a0 = (undefined8 *)0x0;
    }
    else {
        local_6a0[2] = 0;
        local_6a0[1] = &local_688;
        *(undefined4 *)(local_6a0 + 3) = 0;
        local_6a0[4] = 0;
        local_6a0[5] = 0;
        local_6a0[6] = 0;
        local_6a0[7] = 0;
        local_6a0[8] = 0;
        local_6a0[9] = 0;
        local_6a0[10] = 0;
        *local_6a0 = &PTR_FUN_140b5eba0;
        *(undefined4 *)(local_6a0 + 0xb) = 0;
        local_6a0[0xc] = 0;
    }
    puVar15 = local_6a0;
    local_6a0[10] = &local_608;
    if ((*(uint *)(local_6a0 + 3) & 0x200) != 0) {
        FUN_14018b900(local_6a0[4],0);
    }
    *(undefined4 *)(puVar15 + 3) = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar8 = puVar18;
    do {
        puVar9 = puVar8;
        puVar8 = (undefined8 *)((longlong)puVar9 + 1);
    } while (L"PendingLevelUpUnlocks"[(longlong)puVar9 + 1] != L'\0');
    auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 2);
    uVar10 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar10 = FUN_14018b280(uVar10,0);
    puVar15[4] = uVar10;
    FUN_1407db590(uVar10,L"PendingLevelUpUnlocks",(longlong)puVar8 * 2 + 2);
    *(undefined4 *)(puVar15 + 3) = 0x200;
    puVar15[5] = puVar15[4] + (longlong)puVar8 * 2;
    if (puVar15[1] == local_680) {
        lVar12 = puVar15[2];
        if (lVar12 == 0) {
            (**(code **)(*(longlong *)puVar15[10] + 0x20))();
        }
        else {
            if (puVar15 == *(undefined8 **)(lVar12 + 0x30)) {
                *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
            }
            if (puVar15 == *(undefined8 **)(lVar12 + 0x38)) {
                *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
            }
            if (puVar15[8] != 0) {
                *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
            }
            if (puVar15[9] != 0) {
                *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
            }
            puVar15[2] = 0;
        }
        if (local_650 == (undefined8 *)0x0) {
            puVar15[8] = 0;
            local_658 = puVar15;
        }
        else {
            local_650[9] = puVar15;
            puVar15[8] = local_650;
        }
        puVar15[9] = 0;
        puVar15[2] = &local_688;
        local_650 = puVar15;
    }
    local_6a8 = (longlong *)(*(longlong **)(param_1 + 0x88))[2];
    if (local_6a8 != *(longlong **)(param_1 + 0x88)) {
        do {
            plVar17 = local_6a8;
            iVar6 = FUN_14001b370(local_408,0x18,L"%I64d",local_6a8[4]);
            if (-1 < iVar6) {
                puVar9 = (undefined8 *)(*(code *)local_608[2])(&local_608);
                puVar8 = puVar18;
                if (puVar9 != (undefined8 *)0x0) {
                    puVar9[2] = 0;
                    puVar9[1] = &local_688;
                    *(undefined4 *)(puVar9 + 3) = 0;
                    puVar9[4] = 0;
                    puVar9[5] = 0;
                    puVar9[6] = 0;
                    puVar9[7] = 0;
                    puVar9[8] = 0;
                    puVar9[9] = 0;
                    *puVar9 = &PTR_FUN_140b5eba0;
                    puVar9[10] = 0;
                    *(undefined4 *)(puVar9 + 0xb) = 0;
                    puVar9[0xc] = 0;
                    puVar8 = puVar9;
                }
                puVar8[10] = &local_608;
                if ((*(uint *)(puVar8 + 3) & 0x200) != 0) {
                    FUN_14018b900(puVar8[4],0);
                }
                *(undefined4 *)(puVar8 + 3) = 0;
                puVar8[4] = 0;
                puVar8[5] = 0;
                puVar9 = puVar18;
                do {
                    puVar16 = puVar9;
                    puVar9 = (undefined8 *)((longlong)puVar16 + 1);
                } while (L"Character"[(longlong)puVar16 + 1] != L'\0');
                auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
                uVar10 = SUB168(auVar4,0);
                if (SUB168(auVar4 >> 0x40,0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10,0);
                puVar8[4] = uVar10;
                FUN_1407db590(uVar10,L"Character",(longlong)puVar9 * 2 + 2);
                *(undefined4 *)(puVar8 + 3) = 0x200;
                puVar8[5] = puVar8[4] + (longlong)puVar9 * 2;
                lVar12 = FUN_1401a6c70(puVar8,&DAT_140b04814);
                if ((*(uint *)(lVar12 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8 *)(lVar12 + 0x28),0);
                }
                *(undefined4 *)(lVar12 + 0x20) = 0;
                *(undefined8 *)(lVar12 + 0x28) = 0;
                *(undefined8 *)(lVar12 + 0x30) = 0;
                puVar9 = puVar18;
                sVar2 = local_408[0];
                while (sVar2 != 0) {
                    puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                    sVar2 = local_408[(longlong)puVar9];
                }
                auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 1);
                uVar10 = SUB168(auVar4,0);
                if (SUB168(auVar4 >> 0x40,0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10,0);
                *(undefined8 *)(lVar12 + 0x28) = uVar10;
                FUN_1407db590(uVar10,local_408,(longlong)puVar9 * 2 + 2);
                *(undefined4 *)(lVar12 + 0x20) = 0x200;
                *(longlong *)(lVar12 + 0x30) = *(longlong *)(lVar12 + 0x28) + (longlong)puVar9 * 2;
                if (puVar8[1] == puVar15[1]) {
                    lVar12 = puVar8[2];
                    if (lVar12 == 0) {
                        (**(code **)(*(longlong *)puVar8[10] + 0x20))();
                    }
                    else {
                        if (puVar8 == *(undefined8 **)(lVar12 + 0x30)) {
                            *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
                        }
                        if (puVar8 == *(undefined8 **)(lVar12 + 0x38)) {
                            *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
                        }
                        if (puVar8[8] != 0) {
                            *(undefined8 *)(puVar8[8] + 0x48) = puVar8[9];
                        }
                        if (puVar8[9] != 0) {
                            *(undefined8 *)(puVar8[9] + 0x40) = puVar8[8];
                        }
                        puVar8[2] = 0;
                    }
                    if (puVar15[7] == 0) {
                        puVar15[7] = puVar8;
                        puVar15[6] = puVar8;
                        puVar8[8] = 0;
                    }
                    else {
                        *(undefined8 **)(puVar15[7] + 0x48) = puVar8;
                        puVar8[8] = puVar15[7];
                        puVar15[7] = puVar8;
                    }
                    puVar8[9] = 0;
                    puVar8[2] = puVar15;
                }
                lVar12 = plVar17[5];
                lVar11 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x10);
                param_1 = local_698;
                local_690 = lVar12;
                if (lVar11 != *(longlong *)(lVar12 + 8)) {
                    do {
                        puVar9 = (undefined8 *)(*(code *)local_608[2])(&local_608);
                        puVar15 = puVar18;
                        if (puVar9 != (undefined8 *)0x0) {
                            puVar9[2] = 0;
                            puVar9[1] = &local_688;
                            *(undefined4 *)(puVar9 + 3) = 0;
                            puVar9[4] = 0;
                            puVar9[5] = 0;
                            puVar9[6] = 0;
                            puVar9[7] = 0;
                            puVar9[8] = 0;
                            puVar9[9] = 0;
                            *puVar9 = &PTR_FUN_140b5eba0;
                            puVar9[10] = 0;
                            *(undefined4 *)(puVar9 + 0xb) = 0;
                            puVar9[0xc] = 0;
                            puVar15 = puVar9;
                        }
                        puVar15[10] = &local_608;
                        if ((*(uint *)(puVar15 + 3) & 0x200) != 0) {
                            FUN_14018b900(puVar15[4],0);
                        }
                        *(undefined4 *)(puVar15 + 3) = 0;
                        puVar15[4] = 0;
                        puVar15[5] = 0;
                        puVar9 = puVar18;
                        do {
                            puVar16 = puVar9;
                            puVar9 = (undefined8 *)((longlong)puVar16 + 1);
                        } while (L"LevelUpUnlock"[(longlong)puVar16 + 1] != L'\0');
                        auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
                        uVar10 = SUB168(auVar4,0);
                        if (SUB168(auVar4 >> 0x40,0) != 0) {
                            uVar10 = 0xffffffffffffffff;
                        }
                        uVar10 = FUN_14018b280(uVar10,0);
                        puVar15[4] = uVar10;
                        FUN_1407db590(uVar10,L"LevelUpUnlock",(longlong)puVar9 * 2 + 2);
                        *(undefined4 *)(puVar15 + 3) = 0x200;
                        puVar15[5] = puVar15[4] + (longlong)puVar9 * 2;
                        uVar3 = *(undefined4 *)(lVar11 + 0x20);
                        lVar13 = FUN_1401a6c70(puVar15,&DAT_140b06304);
                        FUN_1401a4c20(local_3d8,200,&DAT_1409e41b4,uVar3);
                        if ((*(uint *)(lVar13 + 0x20) & 0x200) != 0) {
                            FUN_14018b900(*(undefined8 *)(lVar13 + 0x28),0);
                        }
                        *(undefined4 *)(lVar13 + 0x20) = 0;
                        *(undefined8 *)(lVar13 + 0x28) = 0;
                        *(undefined8 *)(lVar13 + 0x30) = 0;
                        puVar9 = puVar18;
                        sVar2 = local_3d8[0];
                        while (sVar2 != 0) {
                            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                            sVar2 = local_3d8[(longlong)puVar9];
                        }
                        auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 1);
                        uVar10 = SUB168(auVar4,0);
                        if (SUB168(auVar4 >> 0x40,0) != 0) {
                            uVar10 = 0xffffffffffffffff;
                        }
                        uVar10 = FUN_14018b280(uVar10,0);
                        *(undefined8 *)(lVar13 + 0x28) = uVar10;
                        FUN_1407db590(uVar10,local_3d8,(longlong)puVar9 * 2 + 2);
                        *(undefined4 *)(lVar13 + 0x20) = 0x200;
                        *(longlong *)(lVar13 + 0x30) = *(longlong *)(lVar13 + 0x28) + (longlong)puVar9 * 2;
                        if (puVar15[1] == puVar8[1]) {
                            lVar13 = puVar15[2];
                            if (lVar13 == 0) {
                                (**(code **)(*(longlong *)puVar15[10] + 0x20))();
                            }
                            else {
                                if (puVar15 == *(undefined8 **)(lVar13 + 0x30)) {
                                    *(undefined8 *)(lVar13 + 0x30) = (*(undefined8 **)(lVar13 + 0x30))[9];
                                }
                                if (puVar15 == *(undefined8 **)(lVar13 + 0x38)) {
                                    *(undefined8 *)(lVar13 + 0x38) = (*(undefined8 **)(lVar13 + 0x38))[8];
                                }
                                if (puVar15[8] != 0) {
                                    *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
                                }
                                if (puVar15[9] != 0) {
                                    *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
                                }
                                puVar15[2] = 0;
                            }
                            if (puVar8[7] == 0) {
                                puVar8[7] = puVar15;
                                puVar8[6] = puVar15;
                                puVar15[8] = 0;
                            }
                            else {
                                *(undefined8 **)(puVar8[7] + 0x48) = puVar15;
                                puVar15[8] = puVar8[7];
                                puVar8[7] = puVar15;
                            }
                            puVar15[9] = 0;
                            puVar15[2] = puVar8;
                        }
                        lVar13 = *(longlong *)(lVar11 + 0x18);
                        if (lVar13 == 0) {
                            lVar13 = *(longlong *)(lVar11 + 8);
                            if (lVar11 == *(longlong *)(lVar13 + 0x18)) {
                                do {
                                    lVar11 = lVar13;
                                    lVar13 = *(longlong *)(lVar11 + 8);
                                } while (lVar11 == *(longlong *)(lVar13 + 0x18));
                            }
                            if (*(longlong *)(lVar11 + 0x18) != lVar13) {
                                lVar11 = lVar13;
                            }
                        }
                        else {
                            for (lVar5 = *(longlong *)(lVar13 + 0x10); lVar11 = lVar13, lVar5 != 0;
                                 lVar5 = *(longlong *)(lVar5 + 0x10)) {
                                lVar13 = lVar5;
                            }
                        }
                        plVar17 = local_6a8;
                        param_1 = local_698;
                        puVar15 = local_6a0;
                    } while (lVar11 != *(longlong *)(lVar12 + 8));
                }
            }
            local_6a8 = (longlong *)plVar17[3];
            if (local_6a8 == (longlong *)0x0) {
                plVar14 = (longlong *)plVar17[1];
                if (plVar17 == (longlong *)plVar14[3]) {
                    do {
                        plVar17 = plVar14;
                        plVar14 = (longlong *)plVar17[1];
                    } while (plVar17 == (longlong *)plVar14[3]);
                }
                local_6a8 = plVar17;
                if ((longlong *)plVar17[3] != plVar14) {
                    local_6a8 = plVar14;
                }
            }
            else {
                for (plVar17 = (longlong *)local_6a8[2]; plVar17 != (longlong *)0x0;
                     plVar17 = (longlong *)plVar17[2]) {
                    local_6a8 = plVar17;
                }
            }
        } while (local_6a8 != *(longlong **)(param_1 + 0x88));
    }
    if (local_62c == 0) {
        local_6a8 = (longlong *)0x0;
        iVar6 = FUN_1401a7fc0(&local_688,&local_6a8);
        plVar17 = local_6a8;
        if (iVar6 < 0) {
            if (local_6a8 != (longlong *)0x0) {
                (**(code **)(*local_6a8 + 8))();
            }
        }
        else {
            iVar6 = FUN_1401b6f30();
            if (iVar6 < 0) {
                if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 8))(plVar17);
                }
            }
            else if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 8))(plVar17);
            }
        }
    }
    local_688 = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(&local_688);
    lVar12 = local_620;
    local_62c = 0;
    local_620 = 0;
    if (lVar12 != 0) {
        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
    }
    FUN_14018b900(local_618,0);
    local_618 = 0;
    local_488 = &PTR_FUN_140b5ea18;
    while (local_424 != 0) {
        local_424 = local_424 + -1;
        FUN_14018b900(*(undefined8 *)(local_480 + (longlong)local_424 * 8),0);
    }
    local_420 = 0;
    local_418 = ZEXT816(0);
    if (local_480 != local_478) {
        FUN_14018b900(local_480,0);
    }
    local_508 = &PTR_LAB_140b5ea48;
    local_488 = &PTR_FUN_140b5ead8;
    while (local_4a4 != 0) {
        local_4a4 = local_4a4 + -1;
        FUN_14018b900(*(undefined8 *)(local_500 + (longlong)local_4a4 * 8),0);
    }
    local_4a0 = 0;
    local_498 = ZEXT816(0);
    if (local_500 != local_4f8) {
        FUN_14018b900(local_500,0);
    }
    local_508 = &PTR_FUN_140b5ead8;
    local_588 = &PTR_LAB_140b5ea78;
    while (local_524 != 0) {
        local_524 = local_524 + -1;
        FUN_14018b900(*(undefined8 *)(local_580 + (longlong)local_524 * 8),0);
    }
    local_520 = 0;
    local_518 = ZEXT816(0);
    if (local_580 != local_578) {
        FUN_14018b900(local_580,0);
    }
    local_588 = &PTR_FUN_140b5ead8;
    local_608 = &PTR_LAB_140b5eaa8;
    while (local_5a4 != 0) {
        local_5a4 = local_5a4 + -1;
        FUN_14018b900(*(undefined8 *)(local_600 + (longlong)local_5a4 * 8),0);
    }
    local_5a0 = 0;
    local_598 = ZEXT816(0);
    if (local_600 != local_5f8) {
        FUN_14018b900(local_600,0);
    }
    local_608 = &PTR_FUN_140b5ead8;
    if (local_620 != 0) {
        (**(code **)(*(longlong *)(local_620 + -0x10) + 8))(local_620 + -0x10);
    }
    local_688 = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(&local_688);
    if (local_678 != 0) {
        if (&local_688 == *(undefined ****)(local_678 + 0x30)) {
            *(undefined ***)(local_678 + 0x30) = (*(undefined ****)(local_678 + 0x30))[9];
        }
        if (&local_688 == *(undefined ****)(local_678 + 0x38)) {
            *(undefined ***)(local_678 + 0x38) = (*(undefined ****)(local_678 + 0x38))[8];
        }
        if (local_648 != 0) {
            *(longlong *)(local_648 + 0x48) = local_640;
        }
        if (local_640 != 0) {
            *(longlong *)(local_640 + 0x40) = local_648;
        }
        local_678 = 0;
    }
    if ((local_670 & 0x200) != 0) {
        FUN_14018b900(local_668,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1768);
    return;
}



undefined4 * FUN_1404b36e0(undefined4 *param_1,undefined4 *param_2)

{
    short sVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    puVar5 = (undefined8 *)0x0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    uVar3 = *(ulonglong *)(param_2 + 6);
    puVar7 = puVar5;
    if (uVar3 != 0) {
        if (DAT_140c3fe70 < uVar3) {
            puVar7 = (undefined8 *)0x0;
        }
        else {
            puVar7 = (undefined8 *)(DAT_140c3fe68 + uVar3);
        }
    }
    if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
        sVar1 = *(short *)puVar7;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = *(short *)((longlong)puVar7 + (longlong)puVar6 * 2);
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = puVar6;
            *puVar4 = &PTR_LAB_140b55060;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,puVar7,(longlong)puVar6 * 2);
        *(short *)((longlong)puVar6 * 2 + (longlong)puVar5) = 0;
        *(undefined8 **)(param_1 + 6) = puVar5;
    }
    uVar2 = param_2[8];
    param_1[9] = 4;
    param_1[8] = uVar2;
    param_1[10] = 0x17;
    param_1[0xb] = param_2[9];
    return param_1;
}



uint * FUN_1404b37e0(uint *param_1,uint param_2,char param_3,uint param_4,uint param_5,uint param_6,
                     short *param_7,uint param_8,uint param_9,uint param_10)

{
    short sVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    param_1[3] = param_5;
    puVar3 = (undefined8 *)0x0;
    param_1[1] = 1;
    param_1[2] = param_4;
    param_1[4] = param_6;
    *param_1 = 1 << (0x1eU - param_3 & 0x1f) | param_2;
    if (param_7 == (short *)0x0) {
        *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
        sVar1 = *param_7;
        puVar4 = puVar3;
        while (sVar1 != 0) {
            puVar4 = (undefined8 *)((longlong)puVar4 + 1);
            sVar1 = param_7[(longlong)puVar4];
        }
        puVar2 = (undefined8 *)FUN_14018b280((longlong)puVar4 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = puVar4;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_7,(longlong)puVar4 * 2);
        *(undefined2 *)((longlong)puVar4 * 2 + (longlong)puVar3) = 0;
        *(undefined8 **)(param_1 + 6) = puVar3;
    }
    param_1[10] = 0x17;
    param_1[8] = param_8;
    param_1[9] = param_9;
    param_1[0xb] = param_10;
    return param_1;
}



uint * FUN_1404b38e0(uint *param_1,uint param_2,uint param_3,uint param_4,short *param_5,
                     uint param_6,uint param_7,uint param_8)

{
    short sVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar3 = (undefined8 *)0x0;
    param_1[2] = param_3;
    param_1[3] = 0x16;
    *param_1 = param_2 | 0x80000000;
    param_1[1] = 0;
    param_1[4] = param_4;
    if (param_5 == (short *)0x0) {
        *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
        sVar1 = *param_5;
        puVar4 = puVar3;
        while (sVar1 != 0) {
            puVar4 = (undefined8 *)((longlong)puVar4 + 1);
            sVar1 = param_5[(longlong)puVar4];
        }
        puVar2 = (undefined8 *)FUN_14018b280((longlong)puVar4 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = puVar4;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_5,(longlong)puVar4 * 2);
        *(undefined2 *)((longlong)puVar4 * 2 + (longlong)puVar3) = 0;
        *(undefined8 **)(param_1 + 6) = puVar3;
    }
    param_1[9] = 4;
    param_1[8] = param_6;
    param_1[10] = param_7;
    param_1[0xb] = param_8;
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404b39c0(uint *param_1,longlong param_2)

{
    short sVar1;
    uint uVar2;
    undefined8 *puVar3;
    uint *puVar4;
    byte bVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined *puVar8;
    longlong *plVar9;
    short *psVar10;
    longlong *plVar11;
    undefined2 *puVar12;
    longlong lVar13;
    undefined8 uVar14;
    longlong lVar15;
    ulonglong uVar16;
    longlong local_res8;
    undefined local_128 [8];
    longlong local_120;
    undefined2 *local_118;
    longlong local_110;
    undefined **local_108 [24];
    undefined local_48 [16];
    undefined2 *local_38;

    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar16 = (ulonglong)*param_1;
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,&DAT_140b09400,uVar16 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar16 = (ulonglong)param_1[1];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nSystem",uVar16 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar16 = (ulonglong)param_1[2];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nLevel",uVar16 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar16 = (ulonglong)param_1[3];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nType",uVar16 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = FUN_14020f900(param_1[3]);
    if (lVar7 == 0) {
        puVar8 = &DAT_1409f07ec;
    }
    else {
        puVar8 = (undefined *)FUN_14034bdd0();
    }
    lVar7 = *(longlong *)(param_2 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strHeader",puVar8);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = FUN_14018b280(0x58);
    plVar11 = (longlong *)0x0;
    plVar9 = plVar11;
    if (lVar7 != 0) {
        plVar9 = (longlong *)FUN_1400b6390(lVar7);
    }
    if (param_1[4] == 0) {
        psVar10 = &DAT_140b7b704;
    }
    else {
        psVar10 = (short *)FUN_14034bdd0();
    }
    local_120 = 0;
    local_118 = (undefined2 *)0x0;
    local_110 = 0;
    sVar1 = *psVar10;
    while (sVar1 != 0) {
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        sVar1 = psVar10[(longlong)plVar11];
    }
    lVar7 = (longlong)plVar11 * 2 >> 1;
    uVar16 = lVar7 + 1;
    if (uVar16 < 0x7fffffffffffffff) {
        lVar13 = uVar16 * 2;
        local_118 = (undefined2 *)FUN_14018b280(lVar13,0);
        local_110 = lVar13 + (longlong)local_118;
    }
    lVar13 = (longlong)local_118;
    lVar7 = lVar7 * 2;
    local_120 = (longlong)local_118;
    FUN_1407db590(local_118,psVar10,lVar7);
    local_118 = (undefined2 *)(lVar7 + lVar13);
    if (local_118 != (undefined2 *)0x0) {
        *local_118 = 0;
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,local_128);
    if (local_120 != 0) {
        FUN_14018b900(local_120,0);
    }
    if (param_1[3] == 0x26) {
        (**(code **)(*plVar9 + 0x78))
                (plVar9,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x34));
    }
    FUN_1400b7210(local_108,&DAT_140b093d8);
    local_108[0] = &PTR_FUN_140b69230;
    local_38 = (undefined2 *)0x0;
    local_48 = ZEXT816(0);
    puVar12 = (undefined2 *)FUN_14018b280(0x10);
    local_48 = CONCAT88(puVar12,puVar12);
    local_38 = puVar12 + 8;
    if (puVar12 != (undefined2 *)0x0) {
        *puVar12 = 0;
    }
    FUN_1400b7480(local_108,plVar9);
    lVar13 = FUN_1400b7660(local_108);
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar14 = *(undefined8 *)(lVar13 + 8);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strDescription",uVar14);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar14 = *(undefined8 *)(param_1 + 6);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strIcon",uVar14);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar16 = (ulonglong)param_1[0xb];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nExtraData",uVar16 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    uVar2 = *param_1;
    if (uVar2 != 0) {
        lVar7 = *(longlong *)(DAT_140c659d8 + 0x68);
        local_res8 = lVar7;
        lVar13 = *(longlong *)(lVar7 + 8);
        while (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x20) < uVar2) {
                lVar13 = *(longlong *)(lVar13 + 0x18);
            }
            else {
                local_res8 = lVar13;
                lVar13 = *(longlong *)(lVar13 + 0x10);
            }
        }
        if ((local_res8 == lVar7) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar7;
        }
        bVar5 = 1;
        if (local_res8 != lVar7) goto LAB_1404b3e33;
    }
    bVar5 = 0;
    LAB_1404b3e33:
    lVar7 = *(longlong *)(param_2 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar7 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_2 + 0x10);
    lVar13 = FUN_14018f0e0(local_128,L"bViewed");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    }
    else {
        lVar15 = -1;
        do {
            lVar15 = lVar15 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar15) != '\0');
        FUN_140058710(lVar7);
    }
    if (local_120 != 0) {
        FUN_14018b900(local_120,0);
    }
    puVar4 = *(uint **)(lVar7 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)bVar5;
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    uVar14 = FUN_1400580e0(lVar7,0xfffffffd);
    FUN_14005ea50(lVar7,uVar14,*(longlong *)(lVar7 + 0x10) + -0x20,*(longlong *)(lVar7 + 0x10) + -0x10
    );
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    if (local_48._0_8_ != 0) {
        FUN_14018b900(local_48._0_8_,0);
    }
    FUN_1400b7390(local_108);
    return;
}



void FUN_1404b3f40(longlong *param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar8 = param_1[1];
    uVar7 = 0;
    local_18 = 0;
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    local_20 = param_2;
    local_10 = FUN_14018b280(uVar3,0);
    if (uVar8 != 0) {
        uVar5 = uVar7;
        if (1 < uVar8) {
            uVar4 = uVar7;
            do {
                uVar5 = uVar4 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar5 * 8);
                *puVar1 = uVar4;
                puVar1[1] = uVar4 + 1;
                uVar4 = uVar5;
            } while (uVar5 < uVar8 - ((uint)uVar8 & 1));
        }
        for (; uVar5 < uVar8; uVar5 = uVar5 + 1) {
            *(ulonglong *)(local_10 + uVar5 * 8) = uVar5;
        }
    }
    FUN_14001fec0(&LAB_14004f5f0,local_10,uVar8,&local_28);
    lVar2 = param_1[1];
    if (lVar2 == 0) {
        puVar9 = (undefined8 *)0x0;
    }
    else {
        puVar6 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
        if (puVar6 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar6[1] = lVar2;
            puVar9 = puVar6 + 2;
            *puVar6 = &PTR_LAB_140b55060;
        }
    }
    if (param_1[1] != 0) {
        do {
            uVar8 = uVar7 + 1;
            puVar9[uVar7] = *(undefined8 *)(*param_1 + *(longlong *)(local_10 + -8 + uVar8 * 8) * 8);
            uVar7 = uVar8;
        } while (uVar8 < (ulonglong)param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = (longlong)puVar9;
    FUN_14018b900(local_10,0);
    return;
}



undefined8 FUN_1404b40b0(undefined8 param_1,int *param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 local_res8;

    lVar6 = DAT_140c659e0;
    puVar2 = *(undefined8 **)(DAT_140c659e0 + 8);
    puVar3 = *(undefined8 **)(DAT_140c659e0 + 0x10);
    plVar1 = (longlong *)(DAT_140c659e0 + 0x10);
    local_res8 = param_1;
    if (puVar2 != puVar3) {
        puVar4 = puVar2;
        do {
            if ((*(int *)puVar4 == *param_2) && (*(int *)((longlong)puVar4 + 4) == param_2[1]))
                goto LAB_1404b417c;
            puVar4 = puVar4 + 1;
        } while (puVar4 != puVar3);
    }
    if (0x31 < (ulonglong)((longlong)puVar3 - (longlong)puVar2 >> 3)) {
        if (puVar2 + 1 != puVar3) {
            lVar5 = (longlong)puVar3 - (longlong)(puVar2 + 1) >> 3;
            for (; 0 < lVar5; lVar5 = lVar5 + -1) {
                *puVar2 = puVar2[1];
                puVar2 = puVar2 + 1;
            }
        }
        *plVar1 = *plVar1 + -8;
    }
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == *(undefined8 **)(lVar6 + 0x18)) {
        FUN_140031ef0(lVar6,puVar2,&local_res8);
        lVar6 = DAT_140c659e0;
    }
    else {
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = param_1;
        }
        *plVar1 = *plVar1 + 8;
    }
    lVar5 = *plVar1;
    *(undefined8 *)(lVar5 + -8) = 0;
    *(int *)(lVar5 + -8) = *param_2;
    *(int *)(lVar5 + -4) = param_2[1];
    LAB_1404b417c:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"NewCustomerSurveyRequest",&DAT_1409efa2c,
                  *(longlong *)(lVar6 + 0x10) - *(longlong *)(lVar6 + 8) >> 3);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404b41c0(undefined8 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined auStack104 [32];
    undefined local_48 [8];
    longlong local_40;
    undefined8 local_28;
    ulonglong local_20;
    longlong local_18;
    ulonglong local_10;

    lVar2 = DAT_140c659e0;
    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    puVar3 = *(undefined8 **)(DAT_140c659e0 + 8);
    puVar1 = *(undefined8 **)(DAT_140c659e0 + 0x10);
    if (puVar3 != puVar1) {
        do {
            if ((*(int *)puVar3 == *(int *)param_2) &&
                (*(int *)((longlong)puVar3 + 4) == *(int *)((longlong)param_2 + 4))) {
                if (puVar3 + 1 != puVar1) {
                    lVar4 = (longlong)puVar1 - (longlong)(puVar3 + 1) >> 3;
                    for (; 0 < lVar4; lVar4 = lVar4 + -1) {
                        *puVar3 = puVar3[1];
                        puVar3 = puVar3 + 1;
                    }
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -8;
                break;
            }
            puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
    }
    local_18 = 0;
    local_28 = *param_2;
    local_20 = (ulonglong)
            CONCAT13(*(undefined *)((longlong)param_2 + 0x14),
                     CONCAT12(*(undefined *)(param_2 + 2),
                              CONCAT11(*(undefined *)((longlong)param_2 + 0xc),
                                       *(undefined *)(param_2 + 1))));
    FUN_14018f2d0(local_48,param_2 + 3);
    local_18 = local_40;
    FUN_1403f4900(DAT_140c65898,0x33f,&local_28);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack104);
    return;
}



undefined8 FUN_1404b42d0(void)

{
    longlong lVar1;
    undefined *puVar2;

    if (DAT_140c659e8 == 0) {
        lVar1 = FUN_14018b280(0x20);
        if (lVar1 != 0) {
            puVar2 = (undefined *)FUN_14018b280(0x30);
            *(undefined8 *)(lVar1 + 0x10) = 0;
            DAT_140c659e8 = lVar1;
            *(undefined **)(lVar1 + 8) = puVar2;
            *puVar2 = 0;
            *(undefined8 *)(*(longlong *)(lVar1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x10) = *(longlong *)(lVar1 + 8);
            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x18) = *(longlong *)(lVar1 + 8);
            return 0;
        }
        DAT_140c659e8 = 0;
    }
    return 0;
}



void FUN_1404b4360(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 8)) {
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
        } while (lVar3 != *(longlong *)(param_1 + 8));
    }
    FUN_140008410(param_1);
    FUN_140008410(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



void FUN_1404b4510(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad14,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404b45d6. Too many branches
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



void FUN_1404b4610(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    lVar2 = *(longlong *)(param_1 + 0x340);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    iVar4 = 4;
    lVar2 = param_1 + 0x338;
    iVar3 = 4;
    do {
        lVar1 = *(longlong *)(lVar2 + -0x10);
        lVar2 = lVar2 + -0x10;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    lVar2 = param_1 + 0x2e8;
    do {
        lVar1 = *(longlong *)(lVar2 + -0x10);
        lVar2 = lVar2 + -0x10;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if (*(longlong *)(param_1 + 0x280) != 0) {
        FUN_1401a4a00();
    }
    FUN_140195d70((undefined4 *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x238) = 0;
    if (*(undefined8 **)(param_1 + 0x248) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x250);
    }
    if (*(undefined8 **)(param_1 + 0x250) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
    }
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    if (*(longlong *)(param_1 + 0x220) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x220),0);
    }
    if (*(longlong *)(param_1 + 0x200) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x200),0);
    }
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x1c8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1d8),0);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    FUN_140019490(param_1 + 0x1a0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1b0),0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_140019490(param_1 + 0x178);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x188),0);
    *(undefined8 *)(param_1 + 0x188) = 0;
    lVar2 = *(longlong *)(param_1 + 0x168);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_140019490(param_1 + 0x130);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x140),0);
    *(undefined8 *)(param_1 + 0x140) = 0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x118),0);
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0xf8),0);
    }
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    }
    return;
}



void FUN_1404b4800(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != *(longlong **)(param_1 + 0x10)) {
        do {
            lVar1 = *plVar3;
            FUN_14018b900(*(undefined8 *)(lVar1 + 0x18),0);
            FUN_14018b900(lVar1);
            plVar3 = plVar3 + 1;
        } while (plVar3 != *(longlong **)(param_1 + 0x10));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_1407db590(lVar2,lVar1,0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (lVar1 - lVar2 >> 3) * -8;
    return;
}



void FUN_1404b4890(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;

    puVar3 = *(undefined8 **)(param_1 + 8);
    if (puVar3 != *(undefined8 **)(param_1 + 0x10)) {
        do {
            FUN_14018b900(*puVar3,0);
            puVar3 = puVar3 + 1;
        } while (puVar3 != *(undefined8 **)(param_1 + 0x10));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_1407db590(lVar2,lVar1,0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (lVar1 - lVar2 >> 3) * -8;
    return;
}



void FUN_1404b4910(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != *(longlong **)(param_1 + 0x10)) {
        do {
            FUN_14018b900(*(undefined8 *)(*plVar3 + 0x10),0);
            FUN_14018b900(*(undefined8 *)(*plVar3 + 0x18));
            FUN_14018b900(*plVar3);
            plVar3 = plVar3 + 1;
        } while (plVar3 != *(longlong **)(param_1 + 0x10));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_1407db590(lVar2,lVar1,0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (lVar1 - lVar2 >> 3) * -8;
    return;
}



undefined8 FUN_1404b49a0(undefined8 param_1)

{
    undefined8 uVar1;

    uVar1 = FUN_14034bdd0(param_1,0x59d77);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1404b9db0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1404b9f10,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1404ba070,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1404ba0a0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1404ba0d0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1404ba1a0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1404ba1d0,0);
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001404b4bfd)

void FUN_1404b4ae0(undefined4 *param_1)

{
    longlong lVar1;
    bool bVar2;

    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"HousingPanelControlClose","");
    }
    FUN_1404b4800(DAT_140c659f0 + 0x110);
    FUN_1404b4890(DAT_140c659f0 + 0xf0);
    if (*(longlong **)(param_1 + 0x24) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x24) + 8))();
        *(undefined8 *)(param_1 + 0x24) = 0;
    }
    bVar2 = DAT_140c659f8 != 0;
    param_1[0x28] = 0;
    if (bVar2) {
        FUN_1404c8c20();
    }
    FUN_140019490(DAT_140c659f0 + 0x130);
    FUN_1405b0ec0(*(undefined8 *)(DAT_140c659f0 + 0x338));
    *param_1 = 0;
    lVar1 = *(longlong *)(param_1 + 0xa0);
    while (lVar1 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xa0);
        if (lVar1 != 0) {
            if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
                *(undefined8 *)(lVar1 + 8) = 0;
            }
            if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
            }
            if (*(longlong *)(lVar1 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
            }
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
            }
            FUN_14018b900(lVar1,0);
        }
        lVar1 = *(longlong *)(param_1 + 0xa0);
    }
    return;
}



void FUN_1404b4c40(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x1f0);
    if (lVar1 != 0) {
        if (lVar1 == 0) goto LAB_1404b4ca9;
        do {
            if (*(undefined8 **)(lVar1 + 0xf8) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0xf8) = *(undefined8 *)(lVar1 + 0x100);
            }
            if (*(longlong *)(lVar1 + 0x100) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x100) + 0xf8) = *(undefined8 *)(lVar1 + 0xf8);
            }
            *(undefined8 *)(lVar1 + 0xf8) = 0;
            *(undefined8 *)(lVar1 + 0x100) = 0;
            FUN_14018b900(lVar1,0);
            LAB_1404b4ca9:
            lVar1 = *(longlong *)(param_1 + 0x1f0);
        } while (lVar1 != 0);
    }
    FUN_140019490(param_1 + 0x178);
    FUN_140019490(param_1 + 0x1a0);
    FUN_140019490(param_1 + 0x1c8);
    FUN_1404b4890(param_1 + 0x1f8);
    return;
}



longlong FUN_1404b4cf0(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 *
FUN_1404b4d50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
              undefined4 param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined8 uVar3;

    uVar3 = *param_3;
    *(undefined4 *)(param_2 + 1) = param_5;
    *param_2 = uVar3;
    param_2[0x17] = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_2 + 0x1a) = 0x17;
    param_2[0x18] = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xd4) = 4;
    param_2[0x1b] = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    uVar2 = *(undefined4 *)(param_3 + 4);
    param_2[0x1d] = 0;
    *(undefined4 *)(param_2 + 0x1e) = 0;
    *(undefined4 *)((longlong)param_2 + 0xe4) = uVar2;
    param_2[0x20] = 0;
    param_2[0x1f] = param_4;
    plVar1 = param_2 + 0x20;
    *plVar1 = *param_4;
    *param_4 = (longlong)param_2;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0xf8) = plVar1;
    }
    if (param_2 != (undefined8 *)0xffffffffffffff38) {
        FUN_1401e82f0(param_1,0x80800000);
    }
    *(undefined8 *)((longlong)param_2 + 0xc) = 0;
    *(undefined8 *)((longlong)param_2 + 0x14) = 0;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x24) = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x34) = 0;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined2 *)((longlong)param_2 + 0x4c) = 0;
    FUN_1407e4830((longlong)param_2 + 0x4e,0,0x66);
    return param_2;
}



void FUN_1404b4e40(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    float fVar10;
    float local_res8 [2];
    undefined local_38 [8];
    longlong local_30;

    lVar7 = *(longlong *)(param_2 + 0x10);
    uVar9 = (ulonglong)*(uint *)(param_1 + 8);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar7 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,&DAT_140b09470,uVar9 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (*(int *)(param_1 + 0xf0) != 0) {
        if (*(int *)(param_1 + 0xe8) != 0) {
            lVar7 = *(longlong *)(param_2 + 0x10);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0xd0);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar7 + 0x10);
            *puVar2 = *puVar4;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nClassId",uVar9 & 0xffffffff);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            lVar7 = *(longlong *)(param_2 + 0x10);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0xd4);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar7 + 0x10);
            *puVar2 = *puVar4;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPathId",uVar9 & 0xffffffff);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        fVar10 = 0.0;
        local_res8[0] = 0.0;
        if (*(longlong *)(param_1 + 200) != 0) {
            FUN_1401e83a0(local_res8);
            if (fVar10 <= local_res8[0]) {
                fVar10 = 1e-06;
            }
            else {
                fVar10 = (float)((uint)local_res8[0] ^ 0x80000000);
            }
        }
        lVar7 = *(longlong *)(param_2 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        lVar7 = *(longlong *)(param_2 + 0x10);
        lVar5 = FUN_14018f0e0(local_38,L"fLastOnline");
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar8) != '\0');
            FUN_140058710(lVar7);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
        pdVar3 = *(double **)(lVar7 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)fVar10;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar7,0xfffffffd);
        FUN_14005ea50(lVar7,uVar6,*(longlong *)(lVar7 + 0x10) + -0x20,
                      *(longlong *)(lVar7 + 0x10) + -0x10);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar7 = FUN_14024db80(*(undefined4 *)(param_1 + 0xdc));
        if (lVar7 != 0) {
            lVar7 = FUN_14034bdd0();
            if (lVar7 != 0) {
                lVar5 = *(longlong *)(param_2 + 0x10);
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_2 + 8));
                puVar2 = *(undefined8 **)(lVar5 + 0x10);
                *puVar2 = *puVar4;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
                FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strWorldZone",lVar7);
                plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                *plVar1 = *plVar1 + -0x10;
            }
        }
        if (*(short *)(param_1 + 0xc) != 0) {
            lVar7 = *(longlong *)(param_2 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar7 + 0x10);
            *puVar2 = *puVar4;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strCharacterName",param_1 + 0xc);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        if (*(short *)(param_1 + 0x4e) != 0) {
            lVar7 = *(longlong *)(param_2 + 0x10);
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar2 = *(undefined8 **)(lVar7 + 0x10);
            *puVar2 = *puVar4;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strRealmName",param_1 + 0x4e);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar7 = *(longlong *)(param_2 + 0x10);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0xd8);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nLevel",uVar9 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar7 = *(longlong *)(param_2 + 0x10);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0xe0);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nFactionId",uVar9 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar7 = *(longlong *)(param_2 + 0x10);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0xe4);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar7 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"ePermissionNeighbor",uVar9 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001404b52d0)

void FUN_1404b5280(longlong param_1)

{
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 8))();
        *(undefined8 *)(param_1 + 8) = 0;
    }
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1404b5300(undefined8 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x16) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
    *(undefined4 *)(param_1 + 0x17) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x18) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
    *(undefined4 *)(param_1 + 0x19) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x1a) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
    *(undefined4 *)(param_1 + 0x1b) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x1c) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0x1d) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar3;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    FUN_1400522f0();
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    FUN_1404bc620(param_1 + 0x2f);
    FUN_1404bc6a0(param_1 + 0x34);
    FUN_1404bc760(param_1 + 0x39);
    param_1[0x3e] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x54] = 0;
    param_1[0x53] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x60] = 0;
    param_1[0x5f] = 0;
    param_1[0x62] = 0;
    param_1[0x61] = 0;
    param_1[100] = 0;
    param_1[99] = 0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[0x67] = &DAT_140c7dfb0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    return param_1;
}



void FUN_1404b54e0(void)

{
    undefined4 uVar1;
    longlong lVar2;
    short *psVar3;
    longlong lVar4;

    uVar1 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    lVar2 = FUN_14024acc0(uVar1);
    if (((lVar2 == 0) || (8 < *(uint *)(lVar2 + 0x14))) ||
        ((0x1a4U >> (*(uint *)(lVar2 + 0x14) & 0x1f) & 1) == 0)) {
        return;
    }
    lVar4 = 0;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x28);
    if ((lVar2 != 0) && (lVar2 != -8)) {
        psVar3 = *(short **)(lVar2 + 0x38);
        lVar2 = lVar4;
        if (*psVar3 != 0) {
            do {
                psVar3 = psVar3 + 1;
                lVar2 = lVar2 + 1;
            } while (*psVar3 != 0);
            if (lVar2 != 0) goto LAB_1404b558b;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNamePropertyOpen","");
    }
    LAB_1404b558b:
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x30);
    if ((lVar2 != 0) && (lVar2 != -8)) {
        psVar3 = *(short **)(lVar2 + 0x38);
        if (*psVar3 != 0) {
            do {
                psVar3 = psVar3 + 1;
                lVar4 = lVar4 + 1;
            } while (*psVar3 != 0);
            if (lVar4 != 0) goto LAB_1404b55e3;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNamePropertyOpen","");
    }
    LAB_1404b55e3:
    FUN_14053adc0(DAT_140c65898);
    return;
}



void FUN_1404b5610(undefined8 param_1,int param_2,ulonglong param_3)

{
    ulonglong *puVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    ulonglong uVar10;
    int *piVar11;
    int iVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong local_58;
    undefined local_50 [8];
    longlong local_48;
    longlong local_40;
    undefined8 local_38;

    local_58 = param_3 & 0xffffffff;
    uVar3 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    lVar5 = FUN_14024acc0(uVar3);
    if (lVar5 == 0) {
        return;
    }
    if (8 < *(uint *)(lVar5 + 0x14)) {
        return;
    }
    if ((0x1a4U >> (*(uint *)(lVar5 + 0x14) & 0x1f) & 1) == 0) {
        return;
    }
    lVar5 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar5 == 0) {
        return;
    }
    uVar6 = (*DAT_140c7e000)(&local_58);
    uVar13 = 0;
    iVar12 = 0;
    for (puVar1 = *(ulonglong **)(DAT_140c7dff8 + (uVar6 % DAT_140c7dff0) * 8); uVar10 = uVar13,
            puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
        if ((uVar6 == *puVar1) && (iVar4 = (*DAT_140c7e008)(&local_58,puVar1 + 2), iVar4 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                uVar10 = puVar1[3];
            }
            break;
        }
    }
    lVar7 = FUN_1405b16c0(&DAT_140c7dfb0,param_2,1);
    if (lVar7 == 0) {
        lVar7 = FUN_1405b15c0(&DAT_140c7dfb0,*(undefined4 *)(lVar5 + 0x17ec));
    }
    plVar8 = DAT_140c7dfc0;
    if (uVar10 == 0) {
        for (; plVar8 != DAT_140c7dfc8; plVar8 = plVar8 + 1) {
            lVar5 = *plVar8;
            if (*(int *)(lVar5 + 0x30) == 5) {
                if (lVar5 != 0) {
                    if (lVar7 == 0) {
                        return;
                    }
                    if (lVar7 != lVar5) {
                        lVar9 = FUN_1405ac9b0(lVar5);
                        if (lVar9 != 0) {
                            plVar8 = (longlong *)FUN_1405ac9b0(lVar5);
                            (**(code **)(*plVar8 + 0x18))(plVar8,2,*(undefined4 *)(lVar5 + 0xbc));
                        }
                        lVar9 = FUN_1405acb80(lVar5);
                        if (lVar9 != 0) {
                            plVar8 = (longlong *)FUN_1405acb80(lVar5);
                            (**(code **)(*plVar8 + 0x18))(plVar8,2,*(undefined4 *)(lVar5 + 0xbc));
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ((*(int *)(uVar10 + 0x30) != 5) || (lVar7 != 0)) {
            lVar5 = FUN_1405ac9b0(uVar10);
            if (lVar5 != 0) {
                plVar8 = (longlong *)FUN_1405ac9b0(uVar10);
                (**(code **)(*plVar8 + 0x18))(plVar8,2,*(undefined4 *)(uVar10 + 0xbc));
            }
            lVar5 = FUN_1405acb80(uVar10);
            if (lVar5 != 0) {
                plVar8 = (longlong *)FUN_1405acb80(uVar10);
                (**(code **)(*plVar8 + 0x18))(plVar8,2,*(undefined4 *)(uVar10 + 0xbc));
            }
        }
        FUN_1405aaeb0(uVar10);
    }
    if (lVar7 == 0) {
        return;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_1405acf20(lVar7,local_50,4);
    lVar5 = local_48;
    iVar2 = (int)(local_40 - local_48 >> 0x3f);
    iVar4 = (int)((local_40 - local_48) / 0x68) + iVar2;
    if (iVar4 == iVar2) {
        LAB_1404b58d4:
        lVar9 = FUN_1402070a0(*(undefined4 *)(lVar7 + 0x40));
        if (lVar9 == 0) goto LAB_1404b5944;
        if ((*(int *)(lVar9 + 0x1c) == param_2) && (lVar9 = FUN_1405acb80(lVar7), lVar9 != 0)) {
            lVar9 = FUN_1405acb80(lVar7);
            lVar9 = FUN_140207d60(*(undefined4 *)(lVar9 + 0x60));
            if (lVar9 == 0) goto LAB_1404b5944;
            iVar12 = *(int *)(lVar9 + 0x28);
        }
    }
    else {
        piVar11 = (int *)(local_48 + 0x24);
        uVar6 = uVar13;
        do {
            if ((piVar11[-1] == param_2) && (*piVar11 == 6)) {
                lVar9 = FUN_140207d60(piVar11[10]);
                if (lVar9 == 0) goto LAB_1404b5944;
                uVar13 = (ulonglong)*(uint *)(lVar9 + 0x28);
            }
            iVar12 = (int)uVar13;
            uVar14 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar14;
            piVar11 = piVar11 + 0x1a;
        } while (uVar14 < (uint)(iVar4 - iVar2));
        if (iVar12 == 0) goto LAB_1404b58d4;
    }
    *(int *)(DAT_140c65898 + 0x79e8) = iVar12;
    lVar9 = FUN_1405ac9b0(lVar7);
    if (lVar9 != 0) {
        plVar8 = (longlong *)FUN_1405ac9b0(lVar7);
        (**(code **)(*plVar8 + 0x18))(plVar8,1,*(undefined4 *)(lVar7 + 0xbc));
    }
    LAB_1404b5944:
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    return;
}



undefined4 FUN_1404b5980(void)

{
    longlong lVar1;

    lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar1 == 0) {
        return 1;
    }
    return *(undefined4 *)(lVar1 + 0xc0);
}



void FUN_1404b59b0(uint *param_1,uint param_2)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    *param_1 = param_2;
    lVar3 = FUN_1405b1510();
    if (lVar3 != 0) {
        if ((*(int *)(lVar3 + 0x1f0) < 1) && (plVar1 = DAT_140c7dfc0, lVar3 != DAT_140c7dfe0)) {
            for (; plVar1 != DAT_140c7dfc8; plVar1 = plVar1 + 1) {
                lVar4 = *plVar1;
                if (*(int *)(lVar4 + 0x30) == 5) goto LAB_1404b5a14;
            }
            lVar4 = 0;
            LAB_1404b5a14:
            if (lVar3 != lVar4) goto LAB_1404b5ac8;
        }
        FUN_1404cb310();
        uVar2 = *(uint *)(lVar3 + 0x110);
        uVar6 = 0;
        if (uVar2 != 0) {
            do {
                if ((*(longlong *)(lVar3 + 0xe8) == 0) || (uVar2 <= (uint)uVar6)) {
                    lVar4 = 0;
                }
                else {
                    lVar4 = uVar6 * 0xc0 + *(longlong *)(lVar3 + 0xe8);
                }
                FUN_1404c9a10(lVar4,*(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar3 + 0xbc));
                uVar2 = *(uint *)(lVar3 + 0x110);
                uVar5 = (uint)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
            } while (uVar5 < uVar2);
        }
        FUN_1405ae0b0(lVar3,*param_1);
        local_18 = (ulonglong)*param_1;
        local_28 = *(undefined8 *)(lVar3 + 8);
        local_20 = *(undefined8 *)(lVar3 + 0x10);
        FUN_1403f4900(DAT_140c65898,0x53c,&local_28);
    }
    LAB_1404b5ac8:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingEditModeChanged",&DAT_1409ec214,
                  *param_1);
    return;
}



void FUN_1404b5b00(undefined8 param_1,longlong *param_2)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    ulonglong *puVar3;
    uint uVar4;
    longlong *plVar5;
    longlong *plVar6;
    int *piVar7;
    longlong lVar8;
    undefined4 *puVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    longlong lVar12;

    lVar12 = DAT_140c659f0;
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
    if (plVar5 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
        if (plVar6 != (longlong *)0x0) {
            piVar7 = (int *)(**(code **)(*plVar6 + 0x20))(plVar6);
            if (*piVar7 != 0) {
                uVar4 = (**(code **)(*plVar5 + 200))(plVar5);
                if ((uVar4 >> 0xc & 1) != 0) {
                    (**(code **)(*plVar6 + 0x20))(plVar6);
                    lVar8 = FUN_1405b15c0(&DAT_140c7dfb0);
                    if (lVar8 == 0) {
                        puVar9 = (undefined4 *)(**(code **)(*plVar6 + 0x20))(plVar6);
                        plVar5 = (longlong *)(lVar12 + 0x130);
                        if (*plVar5 == *(longlong *)(lVar12 + 0x138)) {
                            FUN_1400290d0(plVar5);
                        }
                        uVar10 = (**(code **)(lVar12 + 0x148))(puVar9);
                        ppuVar1 = (ulonglong **)
                                (*(longlong *)(lVar12 + 0x140) + (uVar10 % *(ulonglong *)(lVar12 + 0x138)) * 8
                                );
                        puVar11 = (ulonglong *)FUN_14018b280(0x20);
                        if (puVar11 != (ulonglong *)0x0) {
                            puVar3 = *ppuVar1;
                            *puVar11 = uVar10;
                            puVar11[1] = (ulonglong)puVar3;
                            uVar2 = *puVar9;
                            puVar11[3] = (ulonglong)param_2;
                            *(undefined4 *)(puVar11 + 2) = uVar2;
                        }
                        *ppuVar1 = puVar11;
                        *plVar5 = *plVar5 + 1;
                    }
                    else {
                        FUN_1405ad480(lVar8,param_2);
                    }
                }
            }
        }
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x158))(param_2);
        if (plVar5 != (longlong *)0x0) {
            lVar12 = (**(code **)(*plVar5 + 0x18))(plVar5);
            if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc0) != 0)) {
                plVar5 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
                plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
                (**(code **)(*plVar5 + 0x20))(plVar5);
            }
        }
    }
    return;
}



void FUN_1404b5c70(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int *piVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined8 uVar6;

    lVar1 = DAT_140c659f0;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    if (plVar2 != (longlong *)0x0) {
        piVar3 = (int *)(**(code **)(*plVar2 + 0x20))(plVar2);
        if (*piVar3 != 0) {
            puVar4 = (undefined4 *)(**(code **)(*plVar2 + 0x20))(plVar2);
            lVar5 = FUN_1405b15c0(&DAT_140c7dfb0,*puVar4);
            if (lVar5 != 0) {
                FUN_1405ad620(lVar5,param_2);
            }
            uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2);
            FUN_1400b6120(lVar1 + 0x130,uVar6);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404b5d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    float *pfVar9;
    longlong *plVar10;
    int *piVar11;
    uint uVar12;
    undefined auVar13 [16];
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    undefined auStack536 [32];
    undefined *local_1f8;
    longlong *local_1e8;
    longlong local_1e0;
    undefined local_1d8 [8];
    undefined *puStack464;
    float local_1c8;
    float fStack452;
    float fStack448;
    float fStack444;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined local_1a8 [16];
    undefined local_198 [64];
    float local_158 [16];
    undefined local_118 [64];
    float *local_d8;
    undefined *local_d0;
    float *local_88;
    undefined *local_80;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    ulonglong local_38;

    piVar3 = DAT_140c659f0;
    lVar6 = DAT_140c65898;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack536;
    uVar12 = (uint)param_2;
    if (uVar12 < 0x200) goto LAB_1404b657e;
    local_1f8 = local_1a8;
    cVar4 = FUN_1400e6570(*(undefined8 *)(DAT_140c65898 + 0x7340),param_2,param_3,&local_1e8);
    if (cVar4 == '\0') goto LAB_1404b657e;
    if ((int)param_2 == 0x200) {
        lVar6 = FUN_1405b1510(&DAT_140c7dfb0);
        if ((lVar6 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
            iVar5 = (**(code **)(*plVar7 + 0x38))(plVar7);
            lVar6 = DAT_140c65898;
            if (iVar5 != 0) goto LAB_1404b5dc5;
        }
        lVar6 = DAT_140c65898;
        if (piVar3[1] == 0) goto LAB_1404b657e;
    }
    LAB_1404b5dc5:
    if (((int)(*(longlong *)(*(longlong *)(piVar3 + 0xce) + 0x18) -
               *(longlong *)(*(longlong *)(piVar3 + 0xce) + 0x10) >> 3) == 0) ||
        ((((*(longlong *)(lVar6 + 0x78) != 0 && (*(int *)(*(longlong *)(lVar6 + 0x78) + 0x250) != 0))
           || (lVar6 = FUN_1405b1510(&DAT_140c7dfb0), lVar6 == 0)) || (*piVar3 == 0))))
        goto LAB_1404b657e;
    fVar22 = 25.0;
    if (uVar12 == 0x201) {
        iVar5 = FUN_1404b6ae0();
        if (iVar5 == 0) {
            iVar5 = FUN_1404b6a30(piVar3);
            if (iVar5 != 0) {
                if ((*piVar3 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
                    plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
                    (**(code **)(*plVar7 + 0x30))(plVar7,1);
                }
                if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
                    lVar6 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x98))();
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorMoveBegin",
                                  &DAT_1409ebd2c,*(undefined4 *)(lVar6 + 0x1f0));
                }
                goto LAB_1404b657e;
            }
        }
        else {
            LAB_1404b60b9:
            iVar5 = FUN_1404b6ae0();
            if (iVar5 != 0) {
                if ((*piVar3 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
                    plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
                    (**(code **)(*plVar7 + 0x20))(plVar7);
                }
                goto LAB_1404b657e;
            }
            if ((uVar12 == 0x205) &&
                (((iVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xb8))(), iVar5 == 0 ||
                                                                                            ((iVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xb8))(), iVar5 != 0 &&
                                                                                                                                                                       (pfVar9 = (float *)(**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xe8))
                                                                                                                                                                               (*(longlong **)(DAT_140c65898 + 0x7588),&local_1c8),
                                                                                                                                                                               *pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1] <= fVar22)))) &&
                  (*(longlong *)(piVar3 + 0x24) != 0)))) {
                if ((*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) &&
                    (iVar5 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x78))(), iVar5 != 0))
                    goto LAB_1404b657e;
                if ((*(longlong **)(piVar3 + 0x24) == (longlong *)0x0) ||
                    (lVar8 = (**(code **)(**(longlong **)(piVar3 + 0x24) + 0x158))(), lVar8 == 0)) {
                    local_1e8 = (longlong *)0x0;
                    FUN_1404cb140();
                    if (((puStack464 == (undefined *)0x0) &&
                         (lVar8 = (**(code **)(**(longlong **)(piVar3 + 0x24) + 0x148))(), lVar8 != 0)) &&
                        (piVar3[0x27] != 0)) {
                        lVar8 = FUN_1405b15c0(&DAT_140c7dfb0);
                        if (lVar8 == 0) {
                            _local_1d8 = _local_1d8 & (undefined  [16])0xffffffff00000000;
                            iVar5 = 0;
                        }
                        else {
                            puStack464 = *(undefined **)(lVar8 + 0x10);
                            _local_1d8 = *(undefined (*) [16])(lVar8 + 8);
                            iVar5 = (int)*(undefined8 *)*(undefined (*) [16])(lVar8 + 8);
                        }
                    }
                    else {
                        iVar5 = SUB164(_local_1d8,0);
                    }
                    if (((iVar5 != *(int *)(lVar6 + 8)) ||
                         (puStack464 != (undefined *)*(longlong *)(lVar6 + 0x10))) &&
                        ((puStack464 != (undefined *)0x0 ||
                          (lVar8 = FUN_1405b16c0(&DAT_140c7dfb0,piVar3[0x26],0), lVar8 != lVar6))))
                        goto LAB_1404b5f46;
                }
                piVar3[0x2c] = piVar3[0x14];
                piVar3[0x2d] = piVar3[0x15];
                piVar3[0x2e] = piVar3[0x16];
                piVar3[0x2f] = piVar3[0x17];
                piVar3[0x30] = piVar3[0x18];
                piVar3[0x31] = piVar3[0x19];
                piVar3[0x32] = piVar3[0x1a];
                piVar3[0x33] = piVar3[0x1b];
                piVar3[0x34] = piVar3[0x1c];
                piVar3[0x35] = piVar3[0x1d];
                piVar3[0x36] = piVar3[0x1e];
                piVar3[0x37] = piVar3[0x1f];
                piVar3[0x38] = piVar3[0x20];
                piVar3[0x39] = piVar3[0x21];
                piVar3[0x3a] = piVar3[0x22];
                piVar3[0x3b] = piVar3[0x23];
                FUN_1405ad3b0(lVar6,*(undefined8 *)(piVar3 + 0x24));
                goto LAB_1404b657e;
            }
        }
    }
    else {
        if ((uVar12 != 0x202) || (iVar5 = FUN_1404b6ae0(), iVar5 == 0)) goto LAB_1404b60b9;
        FUN_1404b6aa0(piVar3,0);
        plVar7 = *(longlong **)(DAT_140c659f8 + 200);
        if (plVar7 != (longlong *)0x0) {
            lVar8 = (**(code **)(*plVar7 + 0x98))(plVar7);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorMoveEnd",
                          &DAT_1409ebe6c,*(undefined4 *)(lVar8 + 0x1f0));
        }
    }
    LAB_1404b5f46:
    if (*(int *)(lVar6 + 0xc0) == 4) {
        if ((piVar3[1] == 0) || (uVar12 != 0x200)) {
            if (uVar12 == 0x202) {
                if (((piVar3[1] != 0) ||
                     (iVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xb8))(), iVar5 == 0))
                    || (pfVar9 = (float *)(**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xe8))
                        (*(longlong **)(DAT_140c65898 + 0x7588),&local_1b8),
                        fVar22 < *pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1])) {
                    lVar6 = DAT_140c659f8;
                    piVar3[1] = 0;
                    plVar7 = *(longlong **)(lVar6 + 200);
                    if (plVar7 == (longlong *)0x0) goto LAB_1404b657e;
                    local_1e0 = 0;
                    local_1e8 = (longlong *)0x0;
                    (**(code **)(*plVar7 + 0x88))(plVar7,&local_1e8);
                    if (local_1e0 != 0) {
                        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorMoveEnd",
                                      &DAT_1409ebe6c,*(undefined4 *)(*local_1e8 + 0x1f0));
                    }
                    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x70))(plVar7);
                    (**(code **)(*plVar7 + 0x78))(plVar7,0x20);
                }
                else {
                    plVar7 = *(longlong **)(DAT_140c659f8 + 200);
                    if (plVar7 == (longlong *)0x0) goto LAB_1404b657e;
                    local_1e0 = 0;
                    local_1e8 = (longlong *)0x0;
                    (**(code **)(*plVar7 + 0x88))(plVar7,&local_1e8);
                    if ((local_1e0 != 0) && (*(int *)(*local_1e8 + 0x130) == 0)) {
                        iVar5 = (**(code **)(*plVar7 + 0x90))(plVar7);
                        if (iVar5 != 0) {
                            FUN_1404b8110();
                            if (local_1e8 != (longlong *)0x0) {
                                (**(code **)(local_1e8[-2] + 8))(local_1e8 + -2);
                            }
                            goto LAB_1404b657e;
                        }
                        FUN_1403cc530(DAT_140c65898,0x67);
                    }
                }
                if (local_1e8 != (longlong *)0x0) {
                    (**(code **)(local_1e8[-2] + 8))(local_1e8 + -2);
                }
            }
            else if ((uVar12 == 0x201) && (*(int *)(DAT_140c65898 + 0x70b0) == 0)) {
                plVar7 = *(longlong **)(DAT_140c659f8 + 200);
                lVar6 = FUN_1404cb280(DAT_140c659f8,*(undefined8 *)(piVar3 + 0x24));
                if ((plVar7 != (longlong *)0x0) &&
                    (((piVar3[1] == 0 && (lVar6 != 0)) &&
                      (iVar5 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(lVar6 + 0x120)),
                              iVar5 != 0)))) {
                    piVar3[1] = 1;
                    local_1e0 = 0;
                    local_1e8 = (longlong *)0x0;
                    (**(code **)(*plVar7 + 0x88))(plVar7,&local_1e8);
                    if (local_1e0 != 0) {
                        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorMoveBegin",
                                      &DAT_1409ebd2c,*(undefined4 *)(*local_1e8 + 0x1f0));
                    }
                    plVar10 = (longlong *)(**(code **)(*plVar7 + 0x70))(plVar7);
                    (**(code **)(*plVar10 + 0x78))(plVar10,0);
                    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x98))(plVar7);
                    piVar11 = (int *)(**(code **)(*plVar7 + 0x90))(plVar7,local_118,0);
                    iVar5 = piVar11[1];
                    iVar1 = piVar11[2];
                    iVar2 = piVar11[3];
                    piVar3[4] = *piVar11;
                    piVar3[5] = iVar5;
                    piVar3[6] = iVar1;
                    piVar3[7] = iVar2;
                    iVar5 = piVar11[5];
                    iVar1 = piVar11[6];
                    iVar2 = piVar11[7];
                    piVar3[8] = piVar11[4];
                    piVar3[9] = iVar5;
                    piVar3[10] = iVar1;
                    piVar3[0xb] = iVar2;
                    iVar5 = piVar11[9];
                    iVar1 = piVar11[10];
                    iVar2 = piVar11[0xb];
                    piVar3[0xc] = piVar11[8];
                    piVar3[0xd] = iVar5;
                    piVar3[0xe] = iVar1;
                    piVar3[0xf] = iVar2;
                    iVar5 = piVar11[0xd];
                    iVar1 = piVar11[0xe];
                    iVar2 = piVar11[0xf];
                    piVar3[0x10] = piVar11[0xc];
                    piVar3[0x11] = iVar5;
                    piVar3[0x12] = iVar1;
                    piVar3[0x13] = iVar2;
                    piVar3[0x10] = 0;
                    piVar3[0x11] = 0;
                    piVar3[0x12] = 0;
                    if (local_1e8 != (longlong *)0x0) {
                        (**(code **)(local_1e8[-2] + 8))(0,0,local_1e8 + -2);
                    }
                }
            }
        }
        else {
            plVar7 = *(longlong **)(DAT_140c659f8 + 200);
            if ((plVar7 != (longlong *)0x0) &&
                ((DAT_140c7dfe0 == 0 ||
                  (lVar8 = FUN_1404cb280(DAT_140c659f8,*(undefined8 *)(piVar3 + 0x24)), lVar8 == 0)))) {
                fVar22 = (float)piVar3[0x18];
                fVar20 = (float)piVar3[0x19];
                fVar21 = (float)piVar3[0x1a];
                fVar19 = (float)piVar3[0x1b];
                fVar16 = (float)piVar3[4];
                fVar17 = (float)piVar3[5];
                fVar14 = fVar20 * fVar20;
                fVar18 = fVar22 * fVar22 + fVar14 + fVar21 * fVar21;
                auVar13 = rsqrtss(CONCAT412(fVar14,CONCAT48(fVar14,CONCAT44(fVar14,fVar14))),
                                  CONCAT124(SUB1612(CONCAT412(fVar19 * fVar19,
                                                              CONCAT48(fVar21 * fVar21,
                                                                       CONCAT44(fVar14,fVar22 * fVar22))) >>
                                                                                                          0x20,0),fVar18));
                fVar14 = SUB164(auVar13,0);
                fVar14 = (3.0 - fVar18 * fVar14 * fVar14) * 0.5 * fVar14;
                if (fVar14 <= 0.0) {
                    fVar14 = 0.0;
                }
                fVar22 = fVar14 * fVar22;
                fVar20 = fVar14 * fVar20;
                fVar21 = fVar14 * fVar21;
                fVar14 = fVar14 * fVar19;
                fVar19 = (float)piVar3[0xc];
                fVar18 = (float)piVar3[0xd];
                if ((float)((uint)(fVar19 * fVar22 + fVar18 * fVar20 + (float)piVar3[0xe] * fVar21) &
                            0x7fffffff) <=
                    (float)((uint)(fVar22 * fVar16 + fVar20 * fVar17 + fVar21 * (float)piVar3[6]) &
                            0x7fffffff)) {
                    local_1c8 = fVar20 * 0.0 - fVar18 * fVar21;
                    fStack452 = fVar19 * fVar21 - (float)piVar3[0xe] * fVar22;
                    fStack448 = fVar18 * fVar22 - fVar19 * fVar20;
                    fVar19 = (float)piVar3[0xf] * fVar14 - (float)piVar3[0xf] * fVar14;
                    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar19 * fVar19,
                                                          CONCAT48(fStack448 * fStack448,
                                                                   CONCAT44(fStack452 * fStack452,
                                                                            local_1c8 * local_1c8))) >> 0x20,0
                    ),local_1c8 * local_1c8 + fStack452 * fStack452 +
                      fStack448 * fStack448);
                    auVar13 = rsqrtss(auVar13,auVar13);
                    fStack444 = SUB164(auVar13,0);
                    local_1c8 = fStack444 * local_1c8;
                    fStack452 = fStack444 * fStack452;
                    fStack448 = fStack444 * fStack448;
                    fStack444 = fStack444 * fVar19;
                    _local_1d8 = CONCAT412(fVar14 * fStack444 - fVar14 * fStack444,
                                           CONCAT48(fVar20 * local_1c8 - fVar22 * fStack452,
                                                    CONCAT44(fVar22 * fStack448 - fVar21 * local_1c8,
                                                             fStack452 * 0.0 - fVar20 * fStack448)));
                }
                else {
                    fVar18 = fVar21 * fVar17 - fVar20 * (float)piVar3[6];
                    fVar15 = fVar22 * 0.0 - fVar21 * fVar16;
                    fVar16 = fVar20 * fVar16 - fVar22 * fVar17;
                    fVar17 = fVar14 * (float)piVar3[7] - fVar14 * (float)piVar3[7];
                    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar17 * fVar17,
                                                          CONCAT48(fVar16 * fVar16,
                                                                   CONCAT44(fVar15 * fVar15,fVar18 * fVar18)))
                                                        >> 0x20,0),fVar18 * fVar18 + fVar15 * fVar15 + fVar16 * fVar16
                    );
                    auVar13 = rsqrtss(auVar13,auVar13);
                    fVar19 = SUB164(auVar13,0);
                    fVar18 = fVar19 * fVar18;
                    fVar15 = fVar19 * fVar15;
                    fVar16 = fVar19 * fVar16;
                    fVar19 = fVar19 * fVar17;
                    local_1d8 = (float *)CONCAT44(fVar15,fVar18);
                    _local_1d8 = CONCAT412(fVar19,CONCAT48(fVar16,local_1d8));
                    local_1c8 = fVar16 * fVar20 - fVar15 * fVar21;
                    fStack452 = fVar18 * 0.0 - fVar16 * fVar22;
                    fStack448 = fVar15 * fVar22 - fVar18 * fVar20;
                    fStack444 = fVar19 * fVar14 - fVar19 * fVar14;
                }
                pfVar9 = (float *)(piVar3 + 0x14);
                *pfVar9 = local_1c8;
                piVar3[0x15] = (int)fStack452;
                piVar3[0x16] = (int)fStack448;
                piVar3[0x1c] = local_1d8._0_4_;
                piVar3[0x1d] = local_1d8._4_4_;
                piVar3[0x1e] = (int)puStack464;
                FUN_1405b0600(lVar6,local_158);
                local_d8 = local_158;
                FUN_1401afc20(&local_d8,local_198);
                local_80 = local_198;
                local_88 = pfVar9;
                local_1d8 = pfVar9;
                puStack464 = local_80;
                FUN_1401afb10(&local_88,local_118);
                local_d8 = local_158;
                FUN_1401afc20(&local_d8,local_198);
                local_d0 = local_198;
                _local_1d8 = CONCAT88(local_d0,pfVar9);
                local_d8 = pfVar9;
                FUN_1401afb10(&local_d8,&local_88);
                local_1b8 = local_58;
                uStack436 = uStack84;
                uStack432 = uStack80;
                uStack428 = uStack76;
                (**(code **)(*plVar7 + 0x30))(plVar7,&local_1b8);
                FUN_1401b2ed0(&local_1e8,local_118);
                (**(code **)(*plVar7 + 0x38))(plVar7,&local_1e8);
            }
        }
    }
    else {
        if (uVar12 == 0x202) {
            iVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xb8))();
            if ((iVar5 == 0) ||
                (pfVar9 = (float *)(**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xe8))
                        (*(longlong **)(DAT_140c65898 + 0x7588),&local_1b8),
                        fVar22 < *pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1])) goto LAB_1404b657e;
        }
        else if ((uVar12 != 0x201) || (*(int *)(DAT_140c65898 + 0x70b0) == 0)) goto LAB_1404b657e;
        if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
            iVar5 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x90))();
            if (iVar5 == 0) {
                FUN_1403cc530(DAT_140c65898,0x67);
                piVar3[1] = 0;
            }
            else {
                FUN_1404b8110();
            }
        }
    }
    LAB_1404b657e:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack536);
    return;
}



undefined8 FUN_1404b6860(tagPOINT param_1)

{
    int *piVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    tagPOINT local_res8;

    piVar1 = DAT_140c659f0;
    if ((int)(*(longlong *)(*(longlong *)(DAT_140c659f0 + 0xce) + 0x18) -
              *(longlong *)(*(longlong *)(DAT_140c659f0 + 0xce) + 0x10) >> 3) == 0) {
        return 0;
    }
    local_res8 = param_1;
    GetCursorPos(&local_res8);
    ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),&local_res8);
    if ((piVar1[1] != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x98))();
    }
    FUN_1404ca7c0();
    if (*(longlong *)(piVar1 + 0x24) == 0) {
        return 0;
    }
    if (piVar1[0x28] == 0) {
        return 0;
    }
    if (*piVar1 == 0) {
        return 0;
    }
    iVar2 = FUN_1404b6ae0();
    if (iVar2 == 0) {
        iVar2 = FUN_1404b6a30(piVar1);
        if (iVar2 != 0) {
            if (*piVar1 == 0) {
                return 1;
            }
            if (*(longlong **)(DAT_140c659f8 + 200) == (longlong *)0x0) {
                return 1;
            }
            plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
            (**(code **)(*plVar3 + 0x28))(plVar3);
            return 1;
        }
        if ((*piVar1 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
            plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
            (**(code **)(*plVar3 + 0x30))(plVar3,0);
        }
    }
    if (piVar1[1] != 0) {
        return 1;
    }
    lVar4 = FUN_1404cb280(DAT_140c659f8,*(undefined8 *)(piVar1 + 0x24));
    lVar5 = FUN_1405b2f10();
    if ((((lVar4 != 0) && (lVar4 != lVar5)) && (*(uint *)(lVar4 + 0x80) < 0xb)) &&
        ((0x6a0U >> (*(uint *)(lVar4 + 0x80) & 0x1f) & 1) != 0)) {
        lVar4 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0x168),
                              L"DragDropValid");
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x58) != 0)) {
            (**(code **)(*DAT_140c65670 + 0x1d8))
                    (DAT_140c65670,*(longlong *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x60),
                     *(undefined4 *)(lVar4 + 100));
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1404b6a30(int *param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;

    if (*param_1 == 0) {
        return 0;
    }
    plVar3 = *(longlong **)(DAT_140c659f8 + 200);
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3);
    iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
    if (iVar1 == 0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 1;
}



void FUN_1404b6aa0(int *param_1,undefined4 param_2)

{
    longlong *plVar1;

    if ((*param_1 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
        plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
        // WARNING: Could not recover jumptable at 0x0001404b6ad3. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
        return;
    }
    return;
}



undefined8 FUN_1404b6ae0(void)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;

    lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((lVar1 != 0) && (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0)) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
        // WARNING: Could not recover jumptable at 0x0001404b6b18. Too many branches
        // WARNING: Treating indirect jump as call
        uVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
        return uVar3;
    }
    return 0;
}



void FUN_1404b6b30(undefined8 param_1,longlong param_2)

{
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    if ((param_2 != 0) && (*(int *)(param_2 + 0x30) == 2)) {
        local_28 = *(undefined8 *)(param_2 + 8);
        local_18 = 1;
        local_20 = *(undefined8 *)(param_2 + 0x10);
        FUN_1403f4900(DAT_140c65898,0x525,&local_28);
    }
    return;
}



void FUN_1404b6b90(undefined8 param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    if (DAT_140c7dfd8 == 0) {
        uVar3 = DAT_140c7dfd8;
        if (DAT_140c7de20 == 0) {
            return;
        }
        while (plVar1 = *(longlong **)(DAT_140c7de18 + uVar3 * 8), *(int *)(plVar1 + 2) != 7) {
            uVar3 = uVar3 + 1;
            if (DAT_140c7de20 <= uVar3) {
                return;
            }
        }
        if (plVar1 == (longlong *)0x0) {
            return;
        }
        plVar4 = DAT_140c7dfc0;
        if (DAT_140c7dfc0 == DAT_140c7dfc8) {
            return;
        }
        while (lVar2 = *plVar4, *(int *)(lVar2 + 0x30) != 5) {
            plVar4 = plVar4 + 1;
            if (plVar4 == DAT_140c7dfc8) {
                return;
            }
        }
        if (lVar2 == 0) {
            return;
        }
        if (*(longlong *)(lVar2 + 0x28) != *plVar1) {
            return;
        }
        local_28 = *(undefined8 *)(DAT_140c65898 + 0x7500);
        local_20 = *(undefined8 *)(DAT_140c65898 + 0x7508);
    }
    else {
        local_28 = *(undefined8 *)(DAT_140c7dfd8 + 8);
        local_20 = *(undefined8 *)(DAT_140c7dfd8 + 0x10);
    }
    local_18 = (ulonglong)param_2;
    FUN_1403f4900(DAT_140c65898,0x52b,&local_28);
    return;
}



void FUN_1404b6c80(void)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 local_18;
    undefined8 local_10;

    if ((DAT_140c7dfd8 != 0) && (uVar2 = 0, DAT_140c7de20 != 0)) {
        while (lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8), *(int *)(lVar1 + 0x10) != 7) {
            uVar2 = uVar2 + 1;
            if (DAT_140c7de20 <= uVar2) {
                return;
            }
        }
        if (lVar1 != 0) {
            local_18 = *(undefined8 *)(DAT_140c7dfd8 + 8);
            local_10 = *(undefined8 *)(DAT_140c7dfd8 + 0x10);
            FUN_1403f4900(DAT_140c65898,0x4ea,&local_18);
        }
    }
    return;
}



void FUN_1404b6d00(undefined8 param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    if (*(longlong *)(DAT_140c65898 + 0x7508) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
        plVar1 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
        if (plVar4 != plVar1) {
            while ((lVar2 = *plVar4, *(int *)(lVar2 + 8) != *(int *)(DAT_140c65898 + 0x7500) ||
                                     (*(longlong *)(lVar2 + 0x10) != *(longlong *)(DAT_140c65898 + 0x7508)))) {
                plVar4 = plVar4 + 1;
                if (plVar4 == plVar1) {
                    return;
                }
            }
            if ((((lVar2 != 0) && (iVar3 = FUN_1403e1170(param_2,6), iVar3 != 0)) &&
                 (iVar3 = (**(code **)(*DAT_140c65890 + 8))(DAT_140c65890,param_2,1,0,0), iVar3 == 0)) &&
                ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
                  (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x80) == 0x14)))) {
                local_28 = *(undefined8 *)(lVar2 + 8);
                local_20 = *(undefined8 *)(lVar2 + 0x10);
                local_18 = param_2;
                FUN_1403f4900(DAT_140c65898,0x529,&local_28);
            }
        }
    }
    return;
}



longlong FUN_1404b6e10(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1405b1510(*(undefined8 *)(param_1 + 0x338));
    if (lVar1 == 0) {
        return 0;
    }
    lVar1 = FUN_1405b1510(*(undefined8 *)(param_1 + 0x338));
    return lVar1 + 8;
}



void FUN_1404b6e50(void)

{
    longlong lVar1;

    lVar1 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar1 == 0) {
        return;
    }
    FUN_1404c9e20();
    return;
}



ulonglong FUN_1404b6e90(void)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar2 = FUN_1405b1510();
    if (((lVar2 != 0) && (lVar3 = FUN_140205fa0(), lVar3 != 0)) &&
        (*(int *)(lVar2 + 0x40) == *(int *)(lVar3 + 0xc))) {
        uVar6 = 0;
        if ((ulonglong)*(uint *)(lVar2 + 0x110) != 0) {
            uVar4 = uVar6;
            uVar5 = uVar6;
            do {
                if (((uVar5 < (ulonglong)(*(longlong *)(lVar2 + 0x100) - *(longlong *)(lVar2 + 0xf8) >> 3))
                     && (piVar1 = *(int **)(*(longlong *)(lVar2 + 0xf8) + uVar4 * 8), piVar1 != (int *)0x0))
                    && (*piVar1 == *(int *)(lVar3 + 0x10))) {
                    uVar4 = uVar6;
                    if ((*(longlong *)(lVar2 + 0xe8) != 0) && ((uint)uVar5 < *(uint *)(lVar2 + 0x110))) {
                        uVar4 = uVar5 * 0xc0 + *(longlong *)(lVar2 + 0xe8);
                    }
                    if (((*(uint *)(uVar4 + 0xb8) & 0xfffffffa) != 0) || (*(uint *)(uVar4 + 0xb8) == 4)) {
                        uVar6 = 1;
                    }
                    return uVar6;
                }
                uVar4 = uVar4 + 1;
                uVar5 = (ulonglong)((uint)uVar5 + 1);
            } while ((longlong)uVar4 < (longlong)(ulonglong)*(uint *)(lVar2 + 0x110));
        }
    }
    return 0;
}



undefined8 FUN_1404b6f80(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    int *piVar4;

    if (param_2 != 0) {
        lVar2 = FUN_140206c60(param_2);
        if (lVar2 != 0) {
            uVar3 = 0;
            piVar4 = (int *)(lVar2 + 0x6c);
            do {
                if (*piVar4 != 0) {
                    iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                            (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),*piVar4,0,0,0);
                    if (iVar1 == 0) {
                        return 0;
                    }
                }
                uVar3 = uVar3 + 1;
                piVar4 = piVar4 + 1;
            } while (uVar3 < 3);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1404b7020(void)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    float fVar6;

    lVar3 = FUN_1405b1510();
    if (lVar3 == 0) {
        return 0;
    }
    lVar4 = FUN_140205fa0();
    if (lVar4 == 0) {
        return 0;
    }
    if (*(int *)(lVar3 + 0x40) != *(int *)(lVar4 + 0xc)) {
        return 0;
    }
    if (((ulonglong)*(uint *)(lVar4 + 0x10) <
         (ulonglong)(*(longlong *)(lVar3 + 0x100) - *(longlong *)(lVar3 + 0xf8) >> 3)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0xf8) + (ulonglong)*(uint *)(lVar4 + 0x10) * 8),
                lVar2 != 0)) {
        lVar5 = FUN_140206c60(*(undefined4 *)(lVar2 + 4));
        if (lVar5 == 0) {
            return 0;
        }
        iVar1 = *(int *)(lVar5 + 0x80);
        if ((iVar1 - 1U & 0xfffffffd) == 0) {
            if ((*(longlong *)(lVar3 + 0xe8) == 0) ||
                (*(uint *)(lVar3 + 0x110) <= *(uint *)(lVar4 + 0x10))) {
                lVar3 = 0;
            }
            else {
                lVar3 = (ulonglong)*(uint *)(lVar4 + 0x10) * 0xc0 + *(longlong *)(lVar3 + 0xe8);
            }
            fVar6 = (float)FUN_1405a9c70(lVar3);
            if (fVar6 <= 0.0) {
                return 0;
            }
        }
        if ((iVar1 - 2U < 2) && (*(int *)(lVar2 + 0x38) == 0)) {
            return 0;
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1404b7130(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    uint uVar5;

    lVar1 = FUN_1405b1510();
    if (lVar1 != 0) {
        lVar2 = FUN_140205fa0();
        if ((lVar2 != 0) && (*(int *)(lVar1 + 0x40) == *(int *)(lVar2 + 0xc))) {
            if (((ulonglong)*(uint *)(lVar2 + 0x10) <
                 (ulonglong)(*(longlong *)(lVar1 + 0x100) - *(longlong *)(lVar1 + 0xf8) >> 3)) &&
                (lVar1 = *(longlong *)
                        (*(longlong *)(lVar1 + 0xf8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 8),
                        lVar1 != 0)) {
                lVar2 = FUN_140206c60(*(undefined4 *)(lVar1 + 4));
                if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) - 4U < 2)) {
                    uVar5 = 0;
                    piVar4 = (int *)(lVar1 + 0x24);
                    do {
                        if (*(int *)((lVar2 - lVar1) + 0x24 + (longlong)piVar4) != 0) {
                            lVar3 = FUN_140204ea0();
                            if ((lVar3 != 0) && (*piVar4 != *(int *)(lVar3 + 8))) {
                                return 1;
                            }
                        }
                        uVar5 = uVar5 + 1;
                        piVar4 = piVar4 + 1;
                    } while (uVar5 < 5);
                }
            }
            return 0;
        }
    }
    return 0;
}



ulonglong FUN_1404b7220(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c659f0;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c659f0 + 400))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar2 + 0x188) + (uVar4 % *(ulonglong *)(lVar2 + 0x180)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x198))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_1404b72b0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
    int iVar1;
    longlong lVar2;
    bool bVar3;

    lVar2 = FUN_1404bc160();
    bVar3 = false;
    if ((lVar2 == 0) || (bVar3 = *(int *)(lVar2 + 4) == 0, !bVar3)) {
        iVar1 = FUN_1404ba200();
        if (iVar1 == 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingTheseResourcesRequired",
                          0x1409d0f87);
            return 0;
        }
        if ((((param_2 != 0) && (param_3 != 0)) && (lVar2 = FUN_1404bc160(), lVar2 != 0)) &&
            (*(int *)(lVar2 + 4) == param_3)) {
            lVar2 = FUN_1404bc160();
            if (lVar2 == 0) {
                return 0;
            }
            if (*(int *)(lVar2 + 8) == param_4) {
                return 0;
            }
            lVar2 = FUN_140206c60(*(undefined4 *)(lVar2 + 4));
            if (lVar2 == 0) {
                return 0;
            }
            if ((*(byte *)(lVar2 + 0x20) & 0x10) != 0) {
                return 1;
            }
            return 0;
        }
    }
    iVar1 = FUN_1404b6e90();
    if ((iVar1 != 0) || (iVar1 = FUN_1404b6f80(), iVar1 == 0)) {
        return 0;
    }
    if ((!bVar3) && (param_5 == 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingConfirmReplace",&DAT_1409ebfdc,
                      param_2,param_3);
        return 0;
    }
    return 1;
}



void FUN_1404b73e0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined4 *puVar6;
    undefined auStack248 [32];
    undefined4 local_d8;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_a8;
    undefined8 local_a4 [13];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    uVar1 = FUN_1404bc060();
    local_d8 = param_5;
    iVar2 = FUN_1404b72b0(param_5,uVar1,param_3,param_4);
    if ((iVar2 != 0) && (lVar3 = FUN_1405b1510(&DAT_140c7dfb0), lVar3 != 0)) {
        if (DAT_140c7dfe0 != 0) {
            param_4 = 4;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingBuildStarted",&DAT_1409f082c,
                      param_2 + 1);
        FUN_1407e4830(&local_c8,0,0x88);
        local_a8 = 1;
        local_c8 = *(undefined4 *)(lVar3 + 8);
        uStack196 = *(undefined4 *)(lVar3 + 0xc);
        uStack192 = *(undefined4 *)(lVar3 + 0x10);
        uStack188 = *(undefined4 *)(lVar3 + 0x14);
        local_b8 = uVar1;
        local_b4 = param_3;
        local_b0 = param_4;
        lVar3 = FUN_140206c60(param_3);
        if (lVar3 != 0) {
            puVar5 = local_a4;
            puVar6 = (undefined4 *)(lVar3 + 0x48);
            lVar3 = 5;
            do {
                lVar4 = FUN_140204ea0(*puVar6);
                if (lVar4 != 0) {
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    *(undefined4 *)(puVar5 + 2) = 0;
                    *(undefined4 *)puVar5 = *(undefined4 *)(lVar4 + 8);
                }
                puVar6 = puVar6 + 1;
                puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            FUN_1403f4900(DAT_140c65898,0x510,&local_c8);
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack248);
    return;
}



void FUN_1404b7540(void)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined auStack200 [32];
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_88;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    uVar1 = FUN_1404bc060(DAT_140c659f0);
    iVar2 = FUN_1404ba200();
    if (iVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingTheseResourcesRequired",
                      0x1409d0f87);
    }
    else {
        lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
        if (lVar3 != 0) {
            FUN_1407e4830(&local_a8,0,0x88);
            local_88 = 2;
            local_94 = 0;
            local_a8 = *(undefined4 *)(lVar3 + 8);
            uStack164 = *(undefined4 *)(lVar3 + 0xc);
            uStack160 = *(undefined4 *)(lVar3 + 0x10);
            uStack156 = *(undefined4 *)(lVar3 + 0x14);
            local_98 = uVar1;
            FUN_1403f4900(DAT_140c65898,0x510,&local_a8);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack200);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404b7620(undefined8 param_1,ulonglong param_2)

{
    undefined8 uVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined4 *puVar8;
    undefined auStack216 [32];
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 local_98;
    undefined8 local_94 [13];
    ulonglong local_28;

    uVar1 = DAT_140c659f0;
    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    param_2 = param_2 & 0xffffffff;
    lVar4 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar4 != 0) {
        uVar2 = FUN_1404bc060(uVar1,param_2);
        iVar3 = FUN_1404b7020();
        if ((iVar3 == 0) || (iVar3 = FUN_1404b7130(), iVar3 != 0)) {
            lVar5 = 0;
            if ((param_2 < (ulonglong)(*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3))
                && (lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0xf8) + param_2 * 8), lVar7 != 0)) {
                lVar5 = FUN_140206c60(*(undefined4 *)(lVar7 + 4));
            }
            FUN_1407e4830(&local_b8,0,0x88);
            local_98 = 4;
            lVar7 = 5;
            local_b8 = *(undefined4 *)(lVar4 + 8);
            uStack180 = *(undefined4 *)(lVar4 + 0xc);
            uStack176 = *(undefined4 *)(lVar4 + 0x10);
            uStack172 = *(undefined4 *)(lVar4 + 0x14);
            puVar6 = local_94;
            puVar8 = (undefined4 *)(lVar5 + 0x48);
            local_a8 = uVar2;
            do {
                *puVar6 = 0;
                puVar6[1] = 0;
                *(undefined4 *)(puVar6 + 2) = 0;
                if (lVar5 != 0) {
                    uVar2 = *puVar8;
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63e00 != 0) || (iVar3 = FUN_140204c40(), iVar3 < 0)) goto LAB_1404b776d;
                        lVar4 = (**(code **)(*DAT_140c64c88 + 0x18))(DAT_140c64c88,uVar2);
                    }
                    else {
                        lVar4 = (*DAT_140c63840)(&PTR_u_HousingContributionInfo_140a6a7f8,uVar2,DAT_140c63858);
                    }
                    if (lVar4 != 0) {
                        *(undefined4 *)puVar6 = *(undefined4 *)(lVar4 + 8);
                    }
                }
                LAB_1404b776d:
                puVar8 = puVar8 + 1;
                puVar6 = (undefined8 *)((longlong)puVar6 + 0x14);
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            FUN_1403f4900(DAT_140c65898,0x510,&local_b8);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack216);
    return;
}



void FUN_1404b77d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar1 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0xe8);
        if ((lVar2 == 0) || (*(int *)(lVar1 + 0x110) == 0)) {
            lVar2 = 0;
        }
        if (((*(uint *)(lVar2 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar2 + 0xb8) != 4)) {
            local_38 = *(undefined8 *)(lVar1 + 8);
            local_30 = *(undefined8 *)(lVar1 + 0x10);
            local_28 = CONCAT44(param_2,param_3);
            local_20 = CONCAT44(param_5,param_4);
            local_18 = CONCAT44(param_7,param_6);
            local_10 = CONCAT44(1,param_8);
            FUN_1403f4900(DAT_140c65898,0x50a,&local_38);
        }
    }
    return;
}



void FUN_1404b78d0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    lVar1 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if ((lVar1 != 0) && (param_2 < 6)) {
        local_28 = *(undefined8 *)(lVar1 + 8);
        local_20 = *(undefined8 *)(lVar1 + 0x10);
        local_18 = CONCAT44(param_2,*(undefined4 *)(lVar1 + 100));
        local_10 = (ulonglong)*(uint *)(lVar1 + 0x6c);
        FUN_1403f4900(DAT_140c65898,0x50e,&local_28);
    }
    return;
}



void FUN_1404b7950(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    lVar1 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if ((lVar1 != 0) && ((int)param_2 < 6)) {
        local_28 = *(undefined8 *)(lVar1 + 8);
        local_20 = *(undefined8 *)(lVar1 + 0x10);
        local_18 = *(undefined8 *)(lVar1 + 100);
        local_10 = (ulonglong)param_2;
        FUN_1403f4900(DAT_140c65898,0x50e,&local_28);
    }
    return;
}



void FUN_1404b79d0(undefined8 param_1,int *param_2)

{
    undefined4 uVar1;
    int iVar2;
    bool bVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    int iVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined auStack744 [32];
    undefined4 local_2c8 [10];
    undefined8 local_2a0 [77];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack744;
    lVar5 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 0xe8);
        if ((lVar7 == 0) || (*(int *)(lVar5 + 0x110) == 0)) {
            lVar7 = 0;
        }
        if (((*(uint *)(lVar7 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar7 + 0xb8) != 4)) {
            bVar3 = false;
            FUN_1407e4830(local_2c8,0,0x288);
            iVar9 = 1;
            uVar1 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x17e8);
            puVar10 = local_2a0;
            lVar7 = (longlong)local_2c8 - (longlong)param_2;
            lVar11 = 6;
            do {
                if (*param_2 == 0) goto LAB_1404b7b44;
                lVar6 = FUN_1405ac6c0();
                if (lVar6 == 0) {
                    LAB_1404b7af4:
                    bVar3 = true;
                    puVar10[-2] = *(undefined8 *)(lVar5 + 8);
                    puVar10[-1] = *(undefined8 *)(lVar5 + 0x10);
                    if (lVar6 == 0) {
                        uVar8 = 0;
                    }
                    else {
                        uVar8 = *(undefined8 *)(lVar6 + 0x58);
                    }
                    *puVar10 = uVar8;
                    iVar2 = *param_2;
                    *(undefined4 *)(puVar10 + 1) = 3;
                    *(undefined4 *)(puVar10 + 2) = uVar1;
                    *(int *)((longlong)puVar10 + 0x14) = iVar9;
                    *(int *)((longlong)puVar10 + 0x3c) = iVar2;
                    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x58) == 0)) {
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = 1;
                    }
                    *(undefined4 *)(lVar7 + (longlong)param_2) = uVar4;
                }
                else if (*(int *)(lVar6 + 0x130) == 0) {
                    if (*(int *)(lVar6 + 0x6c) != *param_2) goto LAB_1404b7af4;
                }
                else if ((*(int *)(lVar6 + 0x134) == 0) || (*(int *)(lVar6 + 0x15c) != *param_2))
                    goto LAB_1404b7af4;
                LAB_1404b7b44:
                iVar9 = iVar9 + 1;
                puVar10 = puVar10 + 0xd;
                param_2 = param_2 + 1;
                lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            if (bVar3) {
                FUN_1403f4900(DAT_140c65898,0x50d,local_2c8);
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack744);
    return;
}



void FUN_1404b7bc0(undefined8 param_1,int param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined auStack712 [32];
    undefined4 local_2a8 [6];
    undefined8 auStack656 [3];
    int aiStack632 [13];
    undefined4 auStack580 [139];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    lVar3 = FUN_1405b1510();
    if (lVar3 == 0) goto LAB_1404b7d19;
    lVar4 = *(longlong *)(lVar3 + 0xe8);
    if ((lVar4 == 0) || (*(int *)(lVar3 + 0x110) == 0)) {
        lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 0xb8) & 0xfffffffa) != 0) || (*(uint *)(lVar4 + 0xb8) == 4))
        goto LAB_1404b7d19;
    iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x17e8);
    lVar4 = FUN_1405ac6c0(lVar3);
    if (lVar4 == 0) goto LAB_1404b7d19;
    if (*(int *)(lVar4 + 0x130) == 0) {
        iVar2 = *(int *)(lVar4 + 0x6c);
        joined_r0x0001404b7c98:
        if (iVar2 == 5) goto LAB_1404b7d19;
    }
    else if (*(int *)(lVar4 + 0x134) != 0) {
        iVar2 = *(int *)(lVar4 + 0x15c);
        goto joined_r0x0001404b7c98;
    }
    FUN_1407e4830(local_2a8,0,0x288);
    local_2a8[param_2 - 1U] = 1;
    uVar5 = (ulonglong)(param_2 - 1U);
    auStack656[uVar5 * 0xd + 2] = *(undefined8 *)(lVar4 + 0x58);
    auStack580[uVar5 * 0x1a] = 5;
    aiStack632[uVar5 * 0x1a] = 3;
    aiStack632[uVar5 * 0x1a + 2] = iVar1;
    aiStack632[uVar5 * 0x1a + 3] = param_2;
    auStack656[uVar5 * 0xd] = *(undefined8 *)(lVar3 + 8);
    auStack656[uVar5 * 0xd + 1] = *(undefined8 *)(lVar3 + 0x10);
    FUN_1403f4900(DAT_140c65898,0x50d,local_2a8);
    LAB_1404b7d19:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack712);
    return;
}



undefined4 * FUN_1404b7d40(undefined8 param_1,undefined4 *param_2,int param_3,longlong param_4)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40 [2];

    lVar1 = DAT_140c659f0;
    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar3 != 0) {
        FUN_1405aaeb0(lVar3);
    }
    lVar3 = FUN_140203da0(param_3);
    if (lVar3 == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = *(int *)(lVar3 + 8);
    }
    *param_2 = 0;
    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar3 == 0) {
        return param_2;
    }
    if (iVar2 != 0xc) {
        if (iVar2 == 0x16) {
            iVar2 = FUN_1407e6af0(param_4,&DAT_140c78390,0x40);
            if (iVar2 == 0) {
                param_4 = lVar1 + 0xb0;
            }
            local_48 = 0;
            if (param_3 == 0) {
                puVar4 = &local_48;
            }
            else {
                puVar4 = (undefined4 *)FUN_1405aab20(lVar3,&local_48,param_3,param_4);
            }
            goto LAB_1404b7e9d;
        }
        if (iVar2 == 0x35) {
            iVar2 = FUN_1407e6af0(param_4,&DAT_140c78390,0x40);
            if (iVar2 == 0) {
                param_4 = lVar1 + 0xb0;
            }
            local_44 = 0;
            if (param_3 == 0) {
                puVar4 = &local_44;
            }
            else {
                puVar4 = (undefined4 *)FUN_1405ab190(lVar3,&local_44,param_3,param_4);
            }
            goto LAB_1404b7e9d;
        }
        if (iVar2 != 0x36) {
            return param_2;
        }
    }
    iVar2 = FUN_1407e6af0(param_4,&DAT_140c78390,0x40);
    if (iVar2 == 0) {
        param_4 = lVar1 + 0xb0;
    }
    local_40[0] = 0;
    if (param_3 == 0) {
        puVar4 = local_40;
    }
    else {
        puVar4 = (undefined4 *)FUN_1405aafc0(lVar3,local_40,param_3,param_4);
    }
    LAB_1404b7e9d:
    *param_2 = *puVar4;
    return param_2;
}



undefined4 * FUN_1404b7ec0(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 uVar6;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30 [2];

    lVar1 = DAT_140c659f0;
    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar3 != 0) {
        FUN_1405aaeb0(lVar3);
    }
    *param_2 = 0;
    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar3 == 0) {
        return param_2;
    }
    lVar4 = FUN_14077dd00(lVar3 + 0x1b8,param_3);
    if (lVar4 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = *(undefined4 *)(lVar4 + 8);
    }
    lVar4 = FUN_140203da0(uVar6);
    if (lVar4 == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = *(int *)(lVar4 + 8);
    }
    if (iVar2 != 0xc) {
        if (iVar2 == 0x16) {
            iVar2 = FUN_1407e6af0(param_4,&DAT_140c78390,0x40);
            if (iVar2 == 0) {
                param_4 = lVar1 + 0xb0;
            }
            local_38 = 0;
            if (param_3 == 0) {
                puVar5 = &local_38;
            }
            else {
                puVar5 = (undefined4 *)FUN_1405aacd0(lVar3,&local_38,param_3,param_4);
            }
            goto LAB_1404b8037;
        }
        if (iVar2 == 0x35) {
            iVar2 = FUN_1407e6af0(param_4,&DAT_140c78390,0x40);
            if (iVar2 == 0) {
                param_4 = lVar1 + 0xb0;
            }
            local_34 = 0;
            if (param_3 == 0) {
                puVar5 = &local_34;
            }
            else {
                puVar5 = (undefined4 *)FUN_1405ab530(lVar3,&local_34,param_3,param_4);
            }
            goto LAB_1404b8037;
        }
        if (iVar2 != 0x36) {
            return param_2;
        }
    }
    iVar2 = FUN_1407e6af0(param_4,&DAT_140c78390,0x40);
    if (iVar2 == 0) {
        param_4 = lVar1 + 0xb0;
    }
    local_30[0] = 0;
    if (param_3 == 0) {
        puVar5 = local_30;
    }
    else {
        puVar5 = (undefined4 *)FUN_1405ab340(lVar3,local_30,param_3,param_4);
    }
    LAB_1404b8037:
    *param_2 = *puVar5;
    return param_2;
}



void FUN_1404b8050(void)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong *local_18;
    undefined8 local_10;

    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((lVar3 != 0) && (plVar1 = *(longlong **)(DAT_140c659f8 + 200), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x48))(plVar1);
        local_10 = 0;
        local_18 = (longlong *)0x0;
        iVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,&local_18);
        if ((-1 < iVar2) && (*local_18 != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorCancelled",
                          &DAT_1409ebd8c,*(undefined4 *)(*local_18 + 0x1f0));
        }
        FUN_1405aaeb0(lVar3);
        if (local_18 != (longlong *)0x0) {
            (**(code **)(local_18[-2] + 8))(local_18 + -2);
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001404b8177)
// WARNING: Removing unreachable block (ram,0x0001404b8180)
// WARNING: Removing unreachable block (ram,0x0001404b818e)
// WARNING: Removing unreachable block (ram,0x0001404b8192)
// WARNING: Removing unreachable block (ram,0x0001404b81a2)
// WARNING: Removing unreachable block (ram,0x0001404b81a6)
// WARNING: Removing unreachable block (ram,0x0001404b81b0)
// WARNING: Removing unreachable block (ram,0x0001404b81c6)
// WARNING: Removing unreachable block (ram,0x0001404b81ea)
// WARNING: Removing unreachable block (ram,0x0001404b825b)

void FUN_1404b8110(void)

{
    int iVar1;
    longlong lVar2;

    lVar2 = DAT_140c659f0;
    if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x88))();
        if (-1 < iVar1) {
            FUN_1404b95d0(lVar2);
        }
        FUN_1404b8050();
        lVar2 = DAT_140c659f8;
        if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
            *(undefined8 *)(lVar2 + 200) = 0;
        }
        lVar2 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar2 != 0) {
            FUN_1405afe10(lVar2);
        }
    }
    return;
}



void FUN_1404b8280(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 local_res20 [2];
    undefined4 local_a8 [2];
    undefined8 local_a0;
    undefined4 *local_98;
    undefined4 *local_90;
    undefined4 local_88 [2];
    undefined8 local_80;
    undefined local_78 [8];
    undefined4 local_70;
    undefined8 local_30;

    lVar1 = FUN_1405b1510();
    if ((lVar1 != 0) && (lVar2 = FUN_1404c9b90(), lVar2 != 0)) {
        if ((*(int *)(lVar2 + 0x284) == 0) || (*(int *)(lVar2 + 0x288) == 0)) {
            FUN_1403cc530(DAT_140c65898,0x67);
        }
        else {
            if ((*(longlong *)(lVar1 + 0xe8) == 0) ||
                (lVar3 = *(longlong *)(lVar1 + 0xe8), *(int *)(lVar1 + 0x110) == 0)) {
                lVar3 = 0;
            }
            if (((*(uint *)(lVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar3 + 0xb8) != 4)) {
                local_88[0] = 0;
                local_80 = 0;
                local_a0 = 0;
                local_98 = (undefined4 *)0x0;
                local_90 = (undefined4 *)0x0;
                FUN_1407e4830(local_78,0,0x58);
                local_a0 = 0x100000001;
                lVar1 = FUN_140203da0(*(undefined4 *)(lVar2 + 0x60));
                if (lVar1 != 0) {
                    if (*(int *)(lVar1 + 8) == 0xc) {
                        local_70 = 4;
                    }
                    else {
                        if (*(int *)(lVar1 + 8) != 0x16) {
                            return;
                        }
                        local_70 = 6;
                    }
                    FUN_1404b89a0();
                    local_98 = local_88;
                    local_30 = 0;
                    local_90 = local_res20;
                    local_res20[0] = 0;
                    if (param_3 == 0) {
                        FUN_1403f4900(DAT_140c65898,0x50b,&local_a0);
                    }
                    else {
                        FUN_1404bc7e0(param_1 + 0x2a8,local_88,1);
                        local_a8[0] = 0;
                        FUN_140003460(param_1 + 0x2f8,local_a8);
                    }
                }
            }
        }
    }
    return;
}



void FUN_1404b8440(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong local_res20;

    lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    if (((lVar2 != 0) && (plVar3 = (longlong *)FUN_1404c9b90(), plVar3 != (longlong *)0x0)) &&
        (iVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3,&local_res20), -1 < iVar1)) {
        for (; local_res20 != 0; local_res20 = *(longlong *)(local_res20 + 0x28)) {
            FUN_1404b8280(param_1,*(undefined4 *)(local_res20 + 0x1f0),param_3);
        }
    }
    return;
}



void FUN_1404b84d0(ulonglong param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong local_res8;
    undefined8 local_98;
    undefined4 *local_90;
    ulonglong *local_88;
    undefined4 local_78 [2];
    undefined8 local_70;
    undefined local_68 [8];
    undefined4 local_60;
    undefined8 local_20;

    local_res8 = param_1;
    lVar2 = FUN_1405b1510();
    if (((lVar2 != 0) && (param_2 != 0)) && (param_3 != 0)) {
        iVar1 = FUN_1404ca3f0();
        if (((iVar1 == 0) || (*(int *)(param_2 + 0x284) == 0)) ||
            ((*(int *)(param_2 + 0x288) == 0 ||
              ((*(int *)(param_3 + 0x284) == 0 || (*(int *)(param_3 + 0x288) == 0)))))) {
            FUN_1403cc530(DAT_140c65898,0x67);
        }
        else {
            lVar3 = *(longlong *)(lVar2 + 0xe8);
            if ((lVar3 == 0) || (*(int *)(lVar2 + 0x110) == 0)) {
                lVar3 = 0;
            }
            if (((*(uint *)(lVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar3 + 0xb8) != 4)) {
                local_98 = 0;
                local_90 = (undefined4 *)0x0;
                local_88 = (ulonglong *)0x0;
                local_78[0] = 0;
                local_70 = 0;
                FUN_1407e4830(local_68,0,0x58);
                local_98 = 0x100000001;
                lVar2 = FUN_140203da0(*(undefined4 *)(param_3 + 0x60));
                if (lVar2 != 0) {
                    if (*(int *)(lVar2 + 8) == 0xc) {
                        local_60 = 4;
                    }
                    else {
                        if (*(int *)(lVar2 + 8) != 0x16) {
                            return;
                        }
                        local_60 = 6;
                    }
                    FUN_1404b89a0();
                    local_20 = *(undefined8 *)(param_2 + 0x58);
                    local_90 = local_78;
                    local_88 = &local_res8;
                    local_res8 = local_res8 & 0xffffffff00000000;
                    FUN_1403f4900(DAT_140c65898,0x50b,&local_98);
                }
            }
        }
    }
    return;
}



undefined8 FUN_1404b8680(undefined8 param_1,undefined8 param_2,ulonglong *param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;

    param_3[1] = 0xf;
    *param_3 = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0xf;
    param_3[5] = 0;
    lVar2 = FUN_1401f4720();
    if (lVar2 == 0) {
        return 0x80004005;
    }
    if (param_4 == 0) {
        if ((DAT_140dc3148 & 2) == 0) {
            DAT_140dc3148 = DAT_140dc3148 | 2;
            lVar2 = FUN_140200220();
            if (lVar2 == 0) {
                DAT_140dc3150 = 10000;
            }
            else {
                DAT_140dc3150 = *(uint *)(lVar2 + 4);
            }
        }
        uVar1 = DAT_140dc3150;
        *(undefined4 *)(param_3 + 1) = 1;
        *param_3 = (ulonglong)uVar1;
        return 0;
    }
    if ((DAT_140dc3148 & 1) != 0) {
        uVar3 = (ulonglong)DAT_140dc314c;
        *(undefined4 *)((longlong)param_3 + 0x14) = 9;
        *param_3 = uVar3;
        return 0;
    }
    DAT_140dc3148 = DAT_140dc3148 | 1;
    lVar2 = FUN_140200220(0x941);
    if (lVar2 == 0) {
        *(undefined4 *)((longlong)param_3 + 0x14) = 9;
        DAT_140dc314c = 1;
        *param_3 = 1;
        return 0;
    }
    DAT_140dc314c = *(uint *)(lVar2 + 8);
    *(undefined4 *)((longlong)param_3 + 0x14) = 9;
    *param_3 = (ulonglong)DAT_140dc314c;
    return 0;
}



undefined8 FUN_1404b87b0(undefined8 param_1,undefined8 param_2,uint param_3)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined4 uStack52;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            puVar1 = *(undefined8 **)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(puVar1 + 2) == 7) {
                if (puVar1 == (undefined8 *)0x0) {
                    return 0x38;
                }
                if (*(int *)((longlong)puVar1 + 0x304) != 0) {
                    return 0xe;
                }
                local_20 = *puVar1;
                local_28 = CONCAT44(uStack52,*(undefined4 *)(DAT_140c635f0 + 0x1680));
                local_10 = (ulonglong)param_3;
                local_18 = param_2;
                FUN_1403f4900(DAT_140c65898,0x788,&local_28);
                return 0x40;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_140c7de20);
    }
    return 0x38;
}



void FUN_1404b8870(ulonglong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong local_res8;
    undefined8 local_98;
    undefined4 *local_90;
    ulonglong *local_88;
    undefined4 local_78 [2];
    undefined8 local_70;
    undefined local_68 [8];
    undefined4 local_60;

    local_res8 = param_1;
    lVar2 = FUN_1405b1510();
    lVar1 = DAT_140c4df28;
    if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0xe8);
        if ((lVar3 == 0) || (*(int *)(lVar2 + 0x110) == 0)) {
            lVar3 = 0;
        }
        if ((((*(uint *)(lVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar3 + 0xb8) != 4)) &&
            (DAT_140c4df28 != 0)) {
            *(uint *)(DAT_140c4df28 + 100) = *(uint *)(DAT_140c4df28 + 100) & 0xffff;
            *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) | param_2 << 0x10;
            local_98 = 0;
            local_90 = (undefined4 *)0x0;
            local_88 = (ulonglong *)0x0;
            local_78[0] = 0;
            local_70 = 0;
            FUN_1407e4830(local_68,0,0x58);
            local_98 = 0x100000001;
            local_60 = 8;
            FUN_1404b89a0();
            local_90 = local_78;
            local_88 = &local_res8;
            local_res8 = local_res8 & 0xffffffff00000000;
            FUN_1403f4900(DAT_140c65898,0x50b,&local_98);
        }
    }
    return;
}



void FUN_1404b89a0(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;
    undefined8 uVar4;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined local_48 [64];

    param_2[2] = param_3[0xb];
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_3 + 0xf);
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x74);
    *(undefined4 *)(param_2 + 5) = 0x7fffffff;
    *(undefined4 *)(param_2 + 4) = uVar2;
    param_2[0xb] = param_3[0x1e];
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_3 + 100);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0x1f);
    if ((param_4[1] != 0) && (DAT_140c7dfc0 != DAT_140c7dfc8)) {
        plVar3 = DAT_140c7dfc0;
        do {
            lVar1 = *plVar3;
            if ((*(int *)(lVar1 + 8) == *(int *)param_4) && (*(longlong *)(lVar1 + 0x10) == param_4[1])) {
                if (lVar1 != 0) {
                    uVar4 = (**(code **)(*param_3 + 0x90))(param_3,local_48,1);
                    uVar2 = FUN_1405b0840(lVar1,uVar4);
                    *(undefined4 *)(param_2 + 5) = uVar2;
                }
                break;
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c7dfc8);
    }
    if ((*(int *)(param_3 + 0x10) - 5U & 0xfffffffa) == 0) {
        (**(code **)(*param_3 + 0xa8))(param_3,local_48,0);
        FUN_1404bd000(&local_68,local_48);
        if ((*(int *)(param_3 + 0x10) - 5U & 0xfffffffb) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x2c) = local_4c;
        }
        if ((*(int *)(param_3 + 0x10) - 5U & 0xfffffffa) == 0) {
            *(undefined4 *)(param_2 + 6) = local_58;
            *(undefined4 *)((longlong)param_2 + 0x34) = local_54;
            *(undefined4 *)(param_2 + 7) = local_50;
        }
        *(undefined4 *)((longlong)param_2 + 0x3c) = local_68;
        *(undefined4 *)(param_2 + 8) = local_64;
        *(undefined4 *)((longlong)param_2 + 0x44) = local_60;
        *(undefined4 *)(param_2 + 9) = local_5c;
    }
    return;
}



void FUN_1404b8b40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined8 uVar10;
    uint uVar11;
    ulonglong uVar12;
    int iVar13;
    undefined4 local_res18 [4];
    undefined8 local_b8;
    undefined4 *local_b0;
    undefined4 *local_a8;
    undefined4 local_98 [2];
    undefined8 local_90;
    undefined local_88 [8];
    int local_80;
    uint local_7c;

    local_res18[0] = param_3;
    lVar6 = FUN_1405b1510();
    if ((lVar6 != 0) && (plVar7 = (longlong *)FUN_1404c9b90(), plVar7 != (longlong *)0x0)) {
        if ((*(int *)((longlong)plVar7 + 0x284) == 0) || (*(int *)(plVar7 + 0x51) == 0)) {
            FUN_1403cc530(DAT_140c65898,0x67);
            return;
        }
        uVar12 = 0;
        if ((*(ulonglong *)(lVar6 + 0xe8) == 0) ||
            (uVar8 = *(ulonglong *)(lVar6 + 0xe8), *(int *)(lVar6 + 0x110) == 0)) {
            uVar8 = uVar12;
        }
        if (((*(uint *)(uVar8 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(uVar8 + 0xb8) != 4)) {
            (**(code **)(*plVar7 + 0x60))(plVar7);
            if ((*(int *)((longlong)plVar7 + 0x284) == 0) || (*(int *)(plVar7 + 0x51) == 0)) {
                FUN_1403cc530(DAT_140c65898,0x67);
            }
            else {
                local_98[0] = 0;
                local_b8 = 0;
                local_b0 = (undefined4 *)0x0;
                local_a8 = (undefined4 *)0x0;
                local_90 = 0;
                FUN_1407e4830(local_88,0,0x58);
                local_b8 = 0x100000000;
                iVar13 = *(int *)(plVar7 + 0x10);
                if (iVar13 == 5) {
                    local_80 = 4;
                }
                else if (iVar13 == 6) {
                    local_80 = 7;
                }
                else if (iVar13 == 9) {
                    local_80 = 6;
                }
                else if (iVar13 == 10) {
                    local_80 = 8;
                }
                else {
                    local_80 = 2;
                }
                if ((DAT_140dc3154 & 1) == 0) {
                    DAT_140dc3154 = DAT_140dc3154 | 1;
                    DAT_140dc315c = 0;
                    uVar8 = uVar12;
                }
                else {
                    uVar8 = (ulonglong)DAT_140dc315c;
                }
                if ((DAT_140dc3154 & 2) == 0) {
                    DAT_140dc3154 = DAT_140dc3154 | 2;
                    DAT_140dc3164 = 0;
                }
                if ((DAT_140dc3154 & 4) == 0) {
                    DAT_140dc3154 = DAT_140dc3154 | 4;
                    DAT_140dc316c = 0;
                }
                if (DAT_140c7dfe0 == 0) {
                    if (*(int *)(lVar6 + 0x30) == 5) {
                        uVar11 = DAT_140dc3168;
                        if (DAT_140dc316c == 0) {
                            DAT_140dc316c = 1;
                            lVar9 = FUN_140200220(0x40b);
                            if (lVar9 == 0) {
                                DAT_140dc3168 = 0;
                                uVar11 = 0;
                            }
                            else {
                                DAT_140dc3168 = *(uint *)(lVar9 + 0xc);
                                uVar11 = DAT_140dc3168;
                            }
                        }
                    }
                    else {
                        if ((int)uVar8 == 0) {
                            DAT_140dc315c = 1;
                            lVar9 = FUN_140200220(0x40b);
                            if (lVar9 == 0) {
                                DAT_140dc3158 = 0;
                            }
                            else {
                                DAT_140dc3158 = *(int *)(lVar9 + 4);
                            }
                        }
                        iVar13 = DAT_140dc3158;
                        iVar1 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1f);
                        uVar11 = iVar13 + iVar1 * 2;
                    }
                }
                else {
                    uVar11 = DAT_140dc3160;
                    if (DAT_140dc3164 == 0) {
                        DAT_140dc3164 = 1;
                        lVar9 = FUN_140200220(0x40b);
                        if (lVar9 == 0) {
                            DAT_140dc3160 = 0;
                            uVar11 = 0;
                        }
                        else {
                            DAT_140dc3160 = *(uint *)(lVar9 + 8);
                            uVar11 = DAT_140dc3160;
                        }
                    }
                }
                iVar13 = *(int *)(lVar6 + 0x1b8);
                iVar1 = FUN_1405ad1b0(lVar6,5);
                iVar2 = FUN_1405ad1b0(lVar6,10);
                iVar3 = FUN_1405ad1b0(lVar6,9);
                iVar4 = FUN_1405ad1b0(lVar6,7);
                iVar5 = FUN_1405ad1b0(lVar6,6);
                if ((uint)(iVar5 + iVar13 + iVar1 + iVar2 + iVar3 + iVar4) < uVar11) {
                    FUN_1404b89a0();
                    if (local_80 == 8) {
                        plVar7 = DAT_140c4df18;
                        local_7c = 0xffffffff;
                        if ((uint)DAT_140c4df20 != 0) {
                            do {
                                local_7c = (uint)uVar12;
                                if (*plVar7 == 0) break;
                                uVar11 = (uint)uVar12 + 1;
                                uVar12 = (ulonglong)uVar11;
                                plVar7 = plVar7 + 1;
                                local_7c = 0xffffffff;
                            } while (uVar11 < (uint)DAT_140c4df20);
                        }
                        local_7c = local_7c | 0x10000;
                    }
                    local_b0 = local_98;
                    local_a8 = local_res18;
                    FUN_1403f4900(DAT_140c65898,0x50b,&local_b8);
                }
                else {
                    uVar10 = 0xae;
                    if (*(int *)(lVar6 + 0x30) != 5) {
                        uVar10 = 0x7a;
                    }
                    FUN_1403cc530(DAT_140c65898,uVar10);
                }
                FUN_1404c94c0();
            }
        }
    }
    return;
}



void FUN_1404b8f30(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 uVar11;
    uint uVar12;
    undefined4 local_98 [2];
    undefined8 local_90;
    undefined4 *local_88;
    undefined4 *local_80;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined local_68 [8];
    undefined4 local_60;
    undefined4 local_2c;
    undefined4 local_18;

    local_98[0] = 0;
    lVar8 = FUN_1405b1510();
    plVar1 = DAT_140c7dfc0;
    if (lVar8 == 0) {
        return;
    }
    for (; plVar1 != DAT_140c7dfc8; plVar1 = plVar1 + 1) {
        lVar9 = *plVar1;
        if (*(int *)(lVar9 + 0x30) == 5) goto LAB_1404b8fa8;
    }
    lVar9 = 0;
    LAB_1404b8fa8:
    if ((lVar8 == lVar9) && (iVar2 = FUN_1404b9b80(), iVar2 != 0)) {
        return;
    }
    lVar9 = FUN_140203da0();
    if (lVar9 != 0) {
        lVar10 = *(longlong *)(lVar8 + 0xe8);
        if ((lVar10 == 0) || (*(int *)(lVar8 + 0x110) == 0)) {
            lVar10 = 0;
        }
        if ((*(uint *)(lVar10 + 0xb8) & 0xfffffffa) != 0) {
            return;
        }
        if (*(uint *)(lVar10 + 0xb8) == 4) {
            return;
        }
        if ((*(uint *)(lVar9 + 8) < 0x37) &&
            ((0x60000000401008U >> ((ulonglong)*(uint *)(lVar9 + 8) & 0x3f) & 1) != 0)) {
            if ((DAT_140dc3170 & 1) == 0) {
                DAT_140dc3170 = DAT_140dc3170 | 1;
                DAT_140dc317c = 0;
            }
            if ((DAT_140dc3170 & 2) == 0) {
                DAT_140dc3170 = DAT_140dc3170 | 2;
                DAT_140dc3184 = 0;
            }
            if ((DAT_140dc3170 & 4) == 0) {
                DAT_140dc3170 = DAT_140dc3170 | 4;
                DAT_140dc318c = 0;
            }
            if (DAT_140c7dfe0 == 0) {
                if (*(int *)(lVar8 + 0x30) == 5) {
                    uVar12 = DAT_140dc3188;
                    if (DAT_140dc318c == 0) {
                        DAT_140dc318c = 1;
                        lVar9 = FUN_140200220(0x40b);
                        if (lVar9 == 0) {
                            DAT_140dc3188 = 0;
                            uVar12 = 0;
                        }
                        else {
                            DAT_140dc3188 = *(uint *)(lVar9 + 0xc);
                            uVar12 = DAT_140dc3188;
                        }
                    }
                }
                else {
                    if (DAT_140dc317c == 0) {
                        DAT_140dc317c = 1;
                        lVar9 = FUN_140200220(0x40b);
                        if (lVar9 == 0) {
                            DAT_140dc3178 = 0;
                        }
                        else {
                            DAT_140dc3178 = *(int *)(lVar9 + 4);
                        }
                    }
                    iVar2 = DAT_140dc3178;
                    iVar3 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1f);
                    uVar12 = iVar2 + iVar3 * 2;
                }
            }
            else {
                uVar12 = DAT_140dc3180;
                if (DAT_140dc3184 == 0) {
                    DAT_140dc3184 = 1;
                    lVar9 = FUN_140200220(0x40b);
                    if (lVar9 == 0) {
                        DAT_140dc3180 = 0;
                        uVar12 = 0;
                    }
                    else {
                        DAT_140dc3180 = *(uint *)(lVar9 + 8);
                        uVar12 = DAT_140dc3180;
                    }
                }
            }
            iVar2 = *(int *)(lVar8 + 0x1b8);
            iVar3 = FUN_1405ad1b0(lVar8,5);
            iVar4 = FUN_1405ad1b0(lVar8,10);
            iVar5 = FUN_1405ad1b0(lVar8,9);
            iVar6 = FUN_1405ad1b0(lVar8,7);
            iVar7 = FUN_1405ad1b0(lVar8,6);
            if ((uint)(iVar7 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6) < uVar12) {
                local_90 = 0;
                local_88 = (undefined4 *)0x0;
                local_80 = (undefined4 *)0x0;
                FUN_1407e4830(local_68,0,0x58);
                local_78 = *(undefined4 *)(lVar8 + 8);
                uStack116 = *(undefined4 *)(lVar8 + 0xc);
                uStack112 = *(undefined4 *)(lVar8 + 0x10);
                uStack108 = *(undefined4 *)(lVar8 + 0x14);
                local_88 = &local_78;
                local_80 = local_98;
                local_90 = 0x100000000;
                local_60 = 0;
                local_2c = param_2;
                local_18 = param_3;
                FUN_1403f4900(DAT_140c65898,0x50b,&local_90);
                return;
            }
            if (*(int *)(lVar8 + 0x30) == 5) {
                uVar11 = 0xae;
            }
            else {
                uVar11 = 0x7a;
            }
            goto LAB_1404b927e;
        }
    }
    uVar11 = 0x67;
    LAB_1404b927e:
    FUN_1403cc530(DAT_140c65898,uVar11);
    return;
}



undefined8 FUN_1404b92a0(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong *plVar6;
    int iVar7;
    ulonglong uVar8;
    undefined4 local_res20 [2];
    undefined4 local_98 [2];
    undefined8 local_90;
    undefined local_88 [8];
    int local_80;
    uint local_7c;

    local_res20[0] = param_4;
    lVar2 = FUN_1405b1510();
    if (lVar2 == 0) {
        return 0;
    }
    plVar3 = (longlong *)FUN_1404c9b90();
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    uVar8 = 0;
    if (param_3 == 0) {
        if ((*(int *)((longlong)plVar3 + 0x284) != 0) && (*(int *)(plVar3 + 0x51) != 0)) {
            iVar1 = movmskps((int)plVar3,
                             CONCAT412(-(uint)(*(float *)((longlong)plVar3 + 0x9c) !=
                                               *(float *)((longlong)plVar3 + 0x20c)),
                                       CONCAT48(-(uint)(*(float *)(plVar3 + 0x13) !=
                                                        *(float *)(plVar3 + 0x41)),
                                                CONCAT44(-(uint)(*(float *)((longlong)plVar3 + 0x94) !=
                                                                 *(float *)((longlong)plVar3 + 0x204)),
                                                         -(uint)(*(float *)(plVar3 + 0x12) !=
                                                                 *(float *)(plVar3 + 0x40))))));
            if (((iVar1 != 0) ||
                 (((plVar3[0x14] != plVar3[0x42] || (*(int *)(plVar3 + 0x15) != *(int *)(plVar3 + 0x43)))
                   || (*(float *)((longlong)plVar3 + 0x21c) != *(float *)((longlong)plVar3 + 0xac))))) ||
                (iVar1 = 0, *(int *)(plVar3 + 0x26) != 0)) {
                iVar1 = 1;
            }
            (**(code **)(*plVar3 + 0x60))();
            lVar5 = DAT_140c659f8;
            if ((*(int *)((longlong)plVar3 + 0x284) != 0) && (*(int *)(plVar3 + 0x51) != 0)) {
                if ((iVar1 == 0) && (*(int *)(plVar3 + 0x54) == *(int *)((longlong)plVar3 + 0x2a4))) {
                    if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
                        *(undefined8 *)(lVar5 + 200) = 0;
                    }
                    lVar2 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
                    if (lVar2 != 0) {
                        FUN_1405afe10(lVar2);
                    }
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingMyResidenceDecorChanged",
                                  &DAT_1409ebf4c,param_2);
                    return 0;
                }
                goto LAB_1404b9461;
            }
        }
        FUN_1403cc530(DAT_140c65898,0x67);
    }
    else {
        LAB_1404b9461:
        if ((*(ulonglong *)(lVar2 + 0xe8) == 0) ||
            (uVar4 = *(ulonglong *)(lVar2 + 0xe8), *(int *)(lVar2 + 0x110) == 0)) {
            uVar4 = uVar8;
        }
        if (((*(uint *)(uVar4 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(uVar4 + 0xb8) != 4)) {
            local_98[0] = 0;
            local_90 = 0;
            FUN_1407e4830(local_88,0,0x58);
            lVar5 = FUN_140203da0();
            if (lVar5 != 0) {
                iVar1 = *(int *)(lVar5 + 8);
                iVar7 = iVar1 + -0xc;
                if (iVar7 == 0) {
                    local_80 = 4;
                }
                else {
                    iVar7 = iVar1 + -0x16;
                    if (iVar7 == 0) {
                        local_80 = 6;
                    }
                    else {
                        iVar7 = iVar1 + -0x35;
                        if (iVar7 == 0) {
                            local_80 = 7;
                        }
                        else {
                            iVar7 = iVar1 + -0x36;
                            if (iVar7 == 0) {
                                local_80 = 8;
                            }
                            else {
                                local_80 = 2;
                            }
                        }
                    }
                }
                if (param_3 != 0) {
                    local_80 = 0;
                }
                FUN_1404b89a0(iVar7,local_98,plVar3,lVar2 + 8);
                if (local_80 == 8) {
                    if (*(int *)(plVar3 + 0x26) != 0) {
                        local_7c = 0xffffffff;
                        plVar6 = DAT_140c4df18;
                        if ((uint)DAT_140c4df20 == 0) {
                            LAB_1404b954c:
                            local_7c = local_7c | 0x10000;
                        }
                        else {
                            do {
                                local_7c = (uint)uVar8;
                                if (*plVar6 == 0) goto LAB_1404b954c;
                                uVar8 = (ulonglong)(local_7c + 1);
                                plVar6 = plVar6 + 1;
                            } while (local_7c + 1 < (uint)DAT_140c4df20);
                            local_7c = 0xffffffff;
                        }
                    }
                }
                else if (((local_80 == 7) && (DAT_140c65b98 != 0)) && (*(int *)(DAT_140c65b98 + 0x10c) == 4)
                        ) {
                    *(int *)(DAT_140c65b98 + 0x198) = *(int *)(DAT_140c65b98 + 0x198) + 1;
                }
                FUN_1404bc7e0(param_1 + 0x2a8,local_98,1);
                FUN_140003460(param_1 + 0x2f8,local_res20);
                if (param_3 != 0) {
                    FUN_1404b8440(param_1,*(undefined4 *)(plVar3 + 0x3e),1);
                }
                return 1;
            }
        }
    }
    return 0;
}



void FUN_1404b95d0(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    undefined8 local_28;
    longlong local_20;
    longlong local_18;

    uVar2 = 0;
    plVar1 = (longlong *)(param_1 + 0x2a0);
    do {
        if (*plVar1 != 0) {
            local_28 = CONCAT44(*(undefined4 *)plVar1,uVar2);
            local_20 = plVar1[-1];
            local_18 = plVar1[9];
            FUN_1403f4900(DAT_140c65898,0x50b,&local_28);
            *plVar1 = 0;
            plVar1[10] = 0;
        }
        uVar2 = uVar2 + 1;
        plVar1 = plVar1 + 2;
    } while (uVar2 < 5);
    return;
}



void FUN_1404b9660(ulonglong param_1,undefined4 param_2)

{
    undefined8 uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong local_res8;
    undefined4 local_res10;
    undefined8 local_98;
    undefined4 *local_90;
    ulonglong *local_88;
    undefined4 local_78 [2];
    undefined8 local_70;
    undefined local_68 [96];

    uVar1 = DAT_140c659f0;
    local_res8 = param_1;
    local_res10 = param_2;
    lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0xe8);
        if ((lVar3 == 0) || (*(int *)(lVar2 + 0x110) == 0)) {
            lVar3 = 0;
        }
        if (((((*(uint *)(lVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar3 + 0xb8) != 4)) &&
             (lVar2 = FUN_1404c9b90(lVar3,local_res10), lVar2 != 0)) && (2 < *(int *)(lVar2 + 0x80) - 1U)
                ) {
            local_98 = 0;
            local_90 = (undefined4 *)0x0;
            local_88 = (ulonglong *)0x0;
            local_78[0] = 0;
            local_70 = 0;
            FUN_1407e4830(local_68,0,0x58);
            local_98 = 0x100000002;
            FUN_1404b89a0();
            local_90 = local_78;
            local_88 = &local_res8;
            local_res8 = local_res8 & 0xffffffff00000000;
            FUN_1403f4900(DAT_140c65898,0x50b,&local_98);
            FUN_1404b8440(uVar1,*(undefined4 *)(lVar2 + 0x1f0),0);
        }
    }
    return;
}



void FUN_1404b97b0(ulonglong param_1,longlong param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    ulonglong uVar8;
    longlong *plVar9;
    ulonglong *puVar10;
    ulonglong local_res8;
    undefined8 local_b8;
    longlong *local_b0;
    ulonglong *local_a8;
    ulonglong *local_a0;
    undefined4 local_98;
    undefined4 uStack148;
    undefined8 uStack144;
    longlong local_88 [7];
    undefined4 local_4c;

    local_res8 = param_1;
    lVar5 = FUN_1405b1510();
    if (lVar5 != 0) {
        puVar7 = (ulonglong *)0x0;
        if ((*(ulonglong **)(lVar5 + 0xe8) == (ulonglong *)0x0) ||
            (puVar6 = *(ulonglong **)(lVar5 + 0xe8), *(int *)(lVar5 + 0x110) == 0)) {
            puVar6 = puVar7;
        }
        if (((*(uint *)(puVar6 + 0x17) & 0xfffffffa) == 0) && (*(uint *)(puVar6 + 0x17) != 4)) {
            local_b0 = (longlong *)0x0;
            local_a0 = (ulonglong *)0x0;
            if (*(longlong *)(lVar5 + 0x1b8) != 0) {
                local_a8 = (ulonglong *)0x0;
                puVar6 = puVar7;
                puVar10 = puVar7;
                if (*(longlong *)(lVar5 + 0x1c0) != 0) {
                    do {
                        lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x1c8) + (longlong)puVar10 * 8);
                        while (lVar3 != 0) {
                            lVar1 = *(longlong *)(lVar3 + 8);
                            puVar2 = *(ulonglong **)(lVar3 + 0x18);
                            lVar3 = lVar1;
                            if (puVar2 != (ulonglong *)0x0) {
                                if (puVar7 == puVar6) {
                                    FUN_1400b4c50(&local_b8,puVar7);
                                    puVar7 = local_a8;
                                    puVar6 = local_a0;
                                }
                                else {
                                    if (puVar7 != (ulonglong *)0x0) {
                                        *puVar7 = *puVar2;
                                        puVar7[1] = puVar2[1];
                                    }
                                    local_a8 = puVar7 + 2;
                                    puVar7 = local_a8;
                                }
                            }
                        }
                        puVar10 = (ulonglong *)((longlong)puVar10 + 1);
                    } while (puVar10 < *(ulonglong **)(lVar5 + 0x1c0));
                }
                plVar4 = local_b0;
                uVar8 = (longlong)puVar7 - (longlong)local_b0 >> 4;
                if ((int)uVar8 != 0) {
                    uVar8 = uVar8 & 0xffffffff;
                    plVar9 = local_b0;
                    do {
                        if (*plVar9 == param_2) {
                            local_98 = 0;
                            uStack144 = 0;
                            local_b8 = 0;
                            local_b0 = (longlong *)0x0;
                            local_a8 = (ulonglong *)0x0;
                            FUN_1407e4830(local_88,0,0x58);
                            local_98 = *(undefined4 *)(lVar5 + 8);
                            uStack148 = *(undefined4 *)(lVar5 + 0xc);
                            uStack144 = *(undefined8 *)(lVar5 + 0x10);
                            local_b8 = 0x100000002;
                            local_4c = *(undefined4 *)(plVar9 + 1);
                            local_b0 = (longlong *)&local_98;
                            local_a8 = &local_res8;
                            local_res8 = local_res8 & 0xffffffff00000000;
                            local_88[0] = param_2;
                            FUN_1403f4900(DAT_140c65898);
                        }
                        plVar9 = plVar9 + 2;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                if (plVar4 != (longlong *)0x0) {
                    FUN_14018b900(plVar4,0);
                }
            }
        }
    }
    return;
}



undefined8 FUN_1404b99b0(undefined8 param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 local_res8 [4];

    local_res8[0] = param_1;
    lVar1 = FUN_1403acbb0(DAT_140c65898 + 0xa0);
    if (lVar1 != 0) {
        lVar1 = FUN_140203da0(*(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 0x1d0));
        if (lVar1 != 0) {
            local_res8[0] = param_2;
            FUN_1403f4900(DAT_140c65898,0x4e7,local_res8);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1404b9a20(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar2 = FUN_1405b1510();
    if (lVar2 != 0) {
        plVar1 = DAT_140c7dfc0;
        if (lVar2 == DAT_140c7dfd8) {
            LAB_1404b9aa9:
            lVar3 = *(longlong *)(lVar2 + 0xe8);
            if ((lVar3 == 0) || (*(int *)(lVar2 + 0x110) == 0)) {
                lVar3 = 0;
            }
            if (((*(uint *)(lVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar3 + 0xb8) != 4)) {
                return 1;
            }
        }
        else {
            for (; plVar1 != DAT_140c7dfc8; plVar1 = plVar1 + 1) {
                lVar3 = *plVar1;
                if (*(int *)(lVar3 + 0x30) == 5) goto LAB_1404b9a68;
            }
            lVar3 = 0;
            LAB_1404b9a68:
            if ((lVar2 == lVar3) && (uVar4 = 0, DAT_140c7de20 != 0)) {
                do {
                    lVar3 = *(longlong *)(DAT_140c7de18 + uVar4 * 8);
                    if (*(int *)(lVar3 + 0x10) == 7) {
                        if (lVar3 == 0) {
                            return 0;
                        }
                        if (0 < *(int *)(lVar3 + 0x304)) {
                            return 0;
                        }
                        goto LAB_1404b9aa9;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < DAT_140c7de20);
            }
        }
    }
    return 0;
}



uint FUN_1404b9ae0(undefined8 param_1,undefined8 param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar1 == 0) {
        return 0;
    }
    uVar3 = 0;
    if ((*(ulonglong *)(lVar1 + 0xe8) == 0) ||
        (uVar2 = *(ulonglong *)(lVar1 + 0xe8), *(int *)(lVar1 + 0x110) == 0)) {
        uVar2 = uVar3;
    }
    if (((*(uint *)(uVar2 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(uVar2 + 0xb8) != 4)) {
        lVar1 = FUN_14077dd00(lVar1 + 0x1b8,param_2);
        if (lVar1 != 0) {
            uVar3 = (ulonglong)*(uint *)(lVar1 + 8);
        }
        lVar1 = FUN_140203da0(uVar3);
        if (lVar1 != 0) {
            return ~(*(uint *)(lVar1 + 0x10) >> 3) & 1;
        }
    }
    return 0;
}



undefined8 FUN_1404b9b80(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    uint local_res8 [2];

    uVar3 = DAT_140c636a8;
    if (*(ulonglong *)(param_1 + 0x348) < 10) {
        lVar2 = *(longlong *)(param_1 + 0x348);
        lVar1 = lVar2 + 1;
        lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x340),lVar1,4);
        *(uint *)(lVar4 + lVar2 * 4) = uVar3;
        if (*(longlong *)(param_1 + 0x340) != lVar4) {
            FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x340),*(longlong *)(param_1 + 0x348) << 2);
            lVar2 = *(longlong *)(param_1 + 0x340);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong *)(param_1 + 0x340) = lVar4;
        }
        *(longlong *)(param_1 + 0x348) = lVar1;
        return 0;
    }
    if (**(int **)(param_1 + 0x340) + 1000U < DAT_140c636a8) {
        FUN_1401c2f20(param_1 + 0x340,0);
        local_res8[0] = DAT_140c636a8;
        FUN_140003460(param_1 + 0x340,local_res8);
        return 0;
    }
    FUN_1403cc530(DAT_140c65898,0x76);
    return 1;
}



void FUN_1404b9ca0(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 local_88;
    undefined4 *local_80;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined8 local_68 [7];
    undefined4 local_2c;

    iVar1 = FUN_1404b9b80(DAT_140c659f0);
    if ((iVar1 == 0) && (lVar2 = FUN_1405b1510(), lVar2 != 0)) {
        uVar5 = 0;
        if ((*(ulonglong *)(lVar2 + 0xe8) == 0) ||
            (uVar3 = *(ulonglong *)(lVar2 + 0xe8), *(int *)(lVar2 + 0x110) == 0)) {
            uVar3 = uVar5;
        }
        if (((*(uint *)(uVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(uVar3 + 0xb8) != 4)) {
            lVar4 = FUN_14077dd00(lVar2 + 0x1b8,param_2);
            if (lVar4 != 0) {
                uVar5 = (ulonglong)*(uint *)(lVar4 + 8);
            }
            local_2c = (undefined4)uVar5;
            lVar4 = FUN_140203da0(uVar5);
            if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x10) & 8) == 0)) {
                local_88 = 0;
                local_80 = (undefined4 *)0x0;
                FUN_1407e4830(local_68,0,0x58);
                local_80 = &local_78;
                local_78 = *(undefined4 *)(lVar2 + 8);
                uStack116 = *(undefined4 *)(lVar2 + 0xc);
                uStack112 = *(undefined4 *)(lVar2 + 0x10);
                uStack108 = *(undefined4 *)(lVar2 + 0x14);
                local_88 = CONCAT44(local_88._4_4_,1);
                local_68[0] = param_2;
                FUN_1403f4900(DAT_140c65898,0x4f5,&local_88);
            }
        }
    }
    return;
}



void FUN_1404ba070(void)

{
    undefined4 local_res18 [4];

    local_res18[0] = 1;
    FUN_1403f4740(DAT_140c65898,0x513,local_res18);
    return;
}



void FUN_1404ba0a0(void)

{
    undefined4 local_res18 [4];

    local_res18[0] = 0;
    FUN_1403f4740(DAT_140c65898,0x513,local_res18);
    return;
}



void FUN_1404ba0d0(undefined8 param_1)

{
    uint uVar1;
    undefined8 local_a8;
    undefined8 local_a0;
    longlong local_98;
    ulonglong local_90;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;
    longlong local_18;

    FUN_14040b680(local_88,param_1,0);
    if ((local_60 != local_58) && (local_20 != local_18)) {
        uVar1 = FUN_14018e820();
        local_a8 = 0;
        local_a0 = 0;
        local_98 = local_60;
        local_90 = (ulonglong)uVar1;
        FUN_1403f4740(DAT_140c65898,0x518,&local_a8);
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



void FUN_1404ba1a0(void)

{
    undefined4 local_res18 [4];

    local_res18[0] = 3;
    FUN_1403f4900(DAT_140c65898,0xc9,local_res18);
    return;
}



void FUN_1404ba1d0(void)

{
    undefined4 local_res18 [4];

    local_res18[0] = 0;
    FUN_1403f4900(DAT_140c65898,0xc9,local_res18);
    return;
}



void FUN_1404ba200(undefined8 param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    int *piVar11;
    ulonglong uVar12;
    undefined auStack136 [32];
    uint local_68;
    int local_64;
    longlong local_60;
    uint local_58 [4];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    local_64 = param_3;
    if ((((param_2 != 0) && (lVar4 = FUN_1405b1510(), lVar4 != 0)) &&
         (lVar5 = FUN_140205fa0(), lVar5 != 0)) && (*(int *)(lVar4 + 0x40) == *(int *)(lVar5 + 0xc))) {
        uVar6 = 0;
        uVar12 = (ulonglong)*(uint *)(lVar4 + 0x110);
        local_68 = 0;
        local_60 = 0;
        if (uVar12 != 0) {
            do {
                lVar10 = local_60;
                if (((uVar6 < (ulonglong)(*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3))
                     && (piVar2 = *(int **)(*(longlong *)(lVar4 + 0xf8) + local_60 * 8), piVar2 != (int *)0x0
                     )) && ((piVar2[1] != 0 &&
                             ((piVar2[1] != *(int *)(lVar5 + 0x10) &&
                               (lVar7 = FUN_140206c60(), iVar3 = local_64, lVar7 != 0)))))) {
                    local_58[0] = (uint)(*(int *)(lVar7 + 0x38) == 0);
                    local_58[1] = (uint)(*(int *)(lVar7 + 0x3c) == 0);
                    uVar6 = 0;
                    lVar10 = 0;
                    local_58[2] = (uint)(*(int *)(lVar7 + 0x40) == 0);
                    do {
                        if (((uVar6 < (ulonglong)
                                (*(longlong *)(lVar4 + 0x100) - *(longlong *)(lVar4 + 0xf8) >> 3)) &&
                             (piVar11 = *(int **)(*(longlong *)(lVar4 + 0xf8) + lVar10 * 8),
                                     piVar11 != (int *)0x0)) && (*piVar11 != *piVar2)) {
                            iVar1 = iVar3;
                            if (*piVar11 != *(int *)(lVar5 + 0x10)) {
                                iVar1 = piVar11[1];
                            }
                            lVar8 = FUN_140206c60(iVar1);
                            if (lVar8 != 0) {
                                piVar11 = (int *)(lVar8 + 0x24);
                                lVar8 = 5;
                                do {
                                    lVar9 = 0;
                                    do {
                                        if ((local_58[lVar9] == 0) && (*piVar11 == *(int *)(lVar7 + lVar9 * 4 + 0x38)))
                                        {
                                            local_58[lVar9] = 1;
                                            break;
                                        }
                                        lVar9 = lVar9 + 1;
                                    } while (lVar9 < 3);
                                    piVar11 = piVar11 + 1;
                                    lVar8 = lVar8 + -1;
                                } while (lVar8 != 0);
                            }
                        }
                        lVar10 = lVar10 + 1;
                        uVar6 = (ulonglong)((int)uVar6 + 1);
                    } while (lVar10 < (longlong)uVar12);
                    lVar7 = 0;
                    do {
                        if (local_58[lVar7] == 0) goto LAB_1404ba446;
                        lVar7 = lVar7 + 1;
                        lVar10 = local_60;
                    } while (lVar7 < 3);
                }
                local_60 = lVar10 + 1;
                local_68 = local_68 + 1;
                uVar6 = (ulonglong)local_68;
            } while (local_60 < (longlong)uVar12);
        }
    }
    LAB_1404ba446:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack136);
    return;
}



undefined8 FUN_1404ba470(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 local_18 [2];
    undefined8 local_10;

    local_18[0] = 0;
    local_10 = 0;
    lVar1 = FUN_1404bc890(DAT_140c65898 + 0x7550,local_18);
    FUN_14018b900(*(undefined8 *)(lVar1 + 8),0);
    local_18[0] = 0;
    local_10 = 0;
    lVar1 = FUN_1404bc890(DAT_140c65898 + 0x7550,local_18);
    uVar2 = FUN_14018e9c0(*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(lVar1 + 8) = uVar2;
    return 0;
}



undefined8 FUN_1404ba4f0(undefined8 *param_1,longlong param_2)

{
    short sVar1;
    short *psVar2;
    undefined auVar3 [16];
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    undefined8 *local_res8;

    lVar4 = DAT_140c659f0;
    lVar9 = DAT_140c659f0 + 0x110;
    local_res8 = param_1;
    FUN_1404b4800(lVar9);
    uVar11 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            puVar5 = (undefined8 *)FUN_14018b280(0x30);
            puVar8 = (undefined8 *)(*(longlong *)(param_2 + 8) + uVar11 * 0x30);
            *puVar5 = *puVar8;
            puVar5[1] = puVar8[1];
            puVar5[2] = puVar8[2];
            puVar5[3] = puVar8[3];
            puVar5[4] = puVar8[4];
            puVar5[5] = puVar8[5];
            psVar2 = *(short **)(*(longlong *)(param_2 + 8) + 0x18 + uVar11 * 0x30);
            lVar6 = 0;
            sVar1 = *psVar2;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = psVar2[lVar6];
            }
            auVar3 = ZEXT816(2) * ZEXT816(lVar6 + 1U);
            uVar7 = SUB168(auVar3,0);
            if (SUB168(auVar3 >> 0x40,0) != 0) {
                uVar7 = 0xffffffffffffffff;
            }
            local_res8 = puVar5;
            uVar7 = FUN_14018b280(uVar7,0);
            FUN_1407db590(uVar7,psVar2,(lVar6 + 1U) * 2);
            puVar5[3] = uVar7;
            puVar8 = *(undefined8 **)(lVar4 + 0x120);
            if (puVar8 == *(undefined8 **)(lVar4 + 0x128)) {
                FUN_14010a1c0(lVar9,puVar8,&local_res8);
            }
            else {
                if (puVar8 != (undefined8 *)0x0) {
                    *puVar8 = puVar5;
                }
                *(longlong *)(lVar4 + 0x120) = *(longlong *)(lVar4 + 0x120) + 8;
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)(param_2 + 4));
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNeighborhoodRecieved",&DAT_1409d0f86
    );
    return 0;
}



undefined8 FUN_1404ba660(undefined8 param_1,uint *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    undefined4 uVar4;
    ulonglong *puVar5;
    longlong lVar6;
    int iVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong *puVar10;
    ulonglong *puVar11;
    longlong lVar12;
    ulonglong local_res8;

    lVar6 = DAT_140c659f0;
    FUN_1404b4c40(DAT_140c659f0);
    local_res8 = 0;
    if (*param_2 != 0) {
        lVar12 = 0;
        do {
            if (*(longlong *)(*(longlong *)(param_2 + 2) + 0x18 + lVar12) !=
                *(longlong *)(DAT_140c635f0 + 0x16a0)) {
                lVar9 = *(longlong *)(param_2 + 2) + lVar12;
                plVar1 = (longlong *)(lVar6 + 0x1c8);
                uVar8 = (**(code **)(lVar6 + 0x1e0))(lVar9 + 0x10);
                for (puVar10 = *(ulonglong **)
                        (*(longlong *)(lVar6 + 0x1d8) + (uVar8 % *(ulonglong *)(lVar6 + 0x1d0)) * 8)
                        ; puVar10 != (ulonglong *)0x0; puVar10 = (ulonglong *)puVar10[1]) {
                    if ((uVar8 == *puVar10) &&
                        (iVar7 = (**(code **)(lVar6 + 0x1e8))(lVar9 + 0x10), iVar7 != 0)) {
                        if (puVar10 != (ulonglong *)&DAT_ffffffffffffffe0) goto LAB_1404ba8c2;
                        break;
                    }
                }
                lVar9 = FUN_14018b280(0x108);
                if (lVar9 == 0) {
                    puVar10 = (ulonglong *)0x0;
                }
                else {
                    *(int *)(lVar6 + 0x170) = *(int *)(lVar6 + 0x170) + 1;
                    puVar10 = (ulonglong *)
                            FUN_1404b4d50(lVar9,*(longlong *)(param_2 + 2) + lVar12,lVar6 + 0x1f0,
                                          *(undefined4 *)(lVar6 + 0x170));
                }
                plVar2 = (longlong *)(lVar6 + 0x1a0);
                if (*plVar2 == *(longlong *)(lVar6 + 0x1a8)) {
                    FUN_1400290d0(plVar2);
                }
                uVar8 = (**(code **)(lVar6 + 0x1b8))(puVar10);
                ppuVar3 = (ulonglong **)
                        (*(longlong *)(lVar6 + 0x1b0) + (uVar8 % *(ulonglong *)(lVar6 + 0x1a8)) * 8);
                puVar11 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar11 != (ulonglong *)0x0) {
                    puVar5 = *ppuVar3;
                    *puVar11 = uVar8;
                    puVar11[1] = (ulonglong)puVar5;
                    uVar8 = *puVar10;
                    puVar11[3] = (ulonglong)puVar10;
                    puVar11[2] = uVar8;
                }
                *ppuVar3 = puVar11;
                *plVar2 = *plVar2 + 1;
                plVar2 = (longlong *)(lVar6 + 0x178);
                if (*plVar2 == *(longlong *)(lVar6 + 0x180)) {
                    FUN_1400290d0(plVar2);
                }
                uVar8 = (**(code **)(lVar6 + 400))(puVar10 + 1);
                ppuVar3 = (ulonglong **)
                        (*(longlong *)(lVar6 + 0x188) + (uVar8 % *(ulonglong *)(lVar6 + 0x180)) * 8);
                puVar11 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar11 != (ulonglong *)0x0) {
                    puVar5 = *ppuVar3;
                    *puVar11 = uVar8;
                    puVar11[1] = (ulonglong)puVar5;
                    uVar4 = *(undefined4 *)(puVar10 + 1);
                    puVar11[3] = (ulonglong)puVar10;
                    *(undefined4 *)(puVar11 + 2) = uVar4;
                }
                *ppuVar3 = puVar11;
                *plVar2 = *plVar2 + 1;
                if (*plVar1 == *(longlong *)(lVar6 + 0x1d0)) {
                    FUN_1400290d0(plVar1);
                }
                uVar8 = (**(code **)(lVar6 + 0x1e0))(puVar10 + 0x17);
                ppuVar3 = (ulonglong **)
                        (*(longlong *)(lVar6 + 0x1d8) + (uVar8 % *(ulonglong *)(lVar6 + 0x1d0)) * 8);
                puVar11 = (ulonglong *)FUN_14018b280(0x28);
                if (puVar11 != (ulonglong *)0x0) {
                    puVar5 = *ppuVar3;
                    *puVar11 = uVar8;
                    puVar11[1] = (ulonglong)puVar5;
                    puVar11[2] = puVar10[0x17];
                    uVar8 = puVar10[0x18];
                    puVar11[4] = (ulonglong)puVar10;
                    puVar11[3] = uVar8;
                }
                *ppuVar3 = puVar11;
                *plVar1 = *plVar1 + 1;
                FUN_1403f8660();
                *(undefined4 *)(puVar10 + 0x1e) = 1;
            }
            LAB_1404ba8c2:
            local_res8 = local_res8 + 1;
            lVar12 = lVar12 + 0x28;
        } while (local_res8 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNeighborsLoaded",&DAT_1409d0f67);
    return 0;
}



undefined8 FUN_1404ba930(ulonglong param_1,uint *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong *puVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    ulonglong **ppuVar12;
    uint uVar13;
    longlong lVar14;
    ulonglong local_res8;

    lVar5 = DAT_140c659f0;
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    uVar13 = 0;
    local_res8 = param_1;
    if (*param_2 != 0) {
        do {
            lVar8 = *(longlong *)(param_2 + 2);
            lVar14 = (ulonglong)uVar13 * 0xb0;
            if (*(int *)(lVar8 + 0xa8 + lVar14) != 0) {
                lVar1 = *(longlong *)(lVar8 + 8 + lVar14);
                if (lVar1 == 0) {
                    return 0x80004005;
                }
                plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x338) + 0x10);
                plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x338) + 0x18);
                if (plVar7 == plVar2) {
                    return 0x80004005;
                }
                while ((lVar3 = *plVar7, *(int *)(lVar3 + 8) != *(int *)(lVar8 + lVar14) ||
                                         (*(longlong *)(lVar3 + 0x10) != lVar1))) {
                    plVar7 = plVar7 + 1;
                    if (plVar7 == plVar2) {
                        return 0x80004005;
                    }
                }
                if (lVar3 == 0) {
                    return 0x80004005;
                }
                uVar11 = 0;
                lVar8 = FUN_140205fa0(*(undefined4 *)(lVar3 + 0xb8));
                if (lVar8 != 0) {
                    uVar11 = *(uint *)(lVar8 + 4);
                }
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar11;
                uVar9 = (**(code **)(lVar5 + 0x148))(&local_res8);
                uVar10 = uVar9 % *(ulonglong *)(lVar5 + 0x138);
                ppuVar12 = (ulonglong **)(*(longlong *)(lVar5 + 0x140) + uVar10 * 8);
                puVar4 = *(ulonglong **)(*(longlong *)(lVar5 + 0x140) + uVar10 * 8);
                while (puVar4 != (ulonglong *)0x0) {
                    if ((uVar9 == **ppuVar12) &&
                        (iVar6 = (**(code **)(lVar5 + 0x150))(&local_res8,*ppuVar12 + 2), iVar6 != 0)) {
                        puVar4 = *ppuVar12;
                        *ppuVar12 = (ulonglong *)puVar4[1];
                        FUN_14018b900(puVar4,0);
                        *(longlong *)(lVar5 + 0x130) = *(longlong *)(lVar5 + 0x130) + -1;
                        break;
                    }
                    ppuVar12 = (ulonglong **)(*ppuVar12 + 1);
                    puVar4 = *ppuVar12;
                }
            }
            FUN_1405b0f50(*(undefined8 *)(lVar5 + 0x338),*(longlong *)(param_2 + 2) + lVar14);
            uVar13 = uVar13 + 1;
        } while (uVar13 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingPropertiesRecieved",&DAT_1409d0f77);
    return 0;
}



undefined8 FUN_1404baad0(undefined8 param_1,uint *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    bool bVar3;
    int *piVar4;
    bool bVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;
    int iVar10;

    lVar7 = *(longlong *)(*(int **)(param_2 + 2) + 2);
    if (lVar7 != 0) {
        plVar6 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0xce) + 0x10);
        plVar1 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0xce) + 0x18);
        if (plVar6 != plVar1) {
            do {
                lVar2 = *plVar6;
                if ((*(int *)(lVar2 + 8) == **(int **)(param_2 + 2)) &&
                    (*(longlong *)(lVar2 + 0x10) == lVar7)) {
                    if (lVar2 == 0) {
                        return 0;
                    }
                    uVar8 = 0;
                    bVar3 = false;
                    bVar5 = false;
                    if (*param_2 == 0) goto LAB_1404babf4;
                    goto LAB_1404bab60;
                }
                plVar6 = plVar6 + 1;
            } while (plVar6 != plVar1);
        }
    }
    return 0;
    LAB_1404bab60:
    bVar3 = bVar5;
    lVar7 = (ulonglong)uVar8 * 0x68 + *(longlong *)(param_2 + 2);
    if (lVar7 != 0) {
        switch(*(undefined4 *)(lVar7 + 0x18)) {
            case 0:
                iVar10 = 8;
                break;
            default:
                goto switchD_1404bab7f_caseD_1;
            case 2:
                iVar10 = 7;
                break;
            case 3:
                iVar10 = 4;
                break;
            case 4:
                iVar10 = 5;
                break;
            case 6:
                iVar10 = 9;
                break;
            case 7:
                iVar10 = 6;
                break;
            case 8:
                iVar10 = 10;
        }
        if (*(int *)(lVar7 + 0x4c) == 0) {
            FUN_1405abbf0();
        }
        else if (iVar10 == 8) {
            FUN_1405abdc0();
            bVar3 = true;
        }
        else {
            FUN_1405ab8c0();
        }
    }
    switchD_1404bab7f_caseD_1:
    uVar8 = uVar8 + 1;
    bVar5 = bVar3;
    if (*param_2 <= uVar8) {
        LAB_1404babf4:
        piVar4 = DAT_140c659f0;
        *(uint *)(lVar2 + 500) = param_2[1];
        if ((bVar3) && (*piVar4 == 0)) {
            FUN_1405aec80();
        }
        uVar9 = 0;
        if (*(int *)(lVar2 + 0x110) != 0) {
            do {
                if ((*(longlong *)(lVar2 + 0xe8) == 0) || (*(uint *)(lVar2 + 0x110) <= (uint)uVar9)) {
                    lVar7 = 0;
                }
                else {
                    lVar7 = uVar9 * 0xc0 + *(longlong *)(lVar2 + 0xe8);
                }
                FUN_1404c9930(lVar7,*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar2 + 0xbc));
                uVar8 = (uint)uVar9 + 1;
                uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar2 + 0x110));
        }
        return 0;
    }
    goto LAB_1404bab60;
}



undefined8 FUN_1404bada0(undefined8 *param_1,uint *param_2)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    undefined8 *puVar4;
    undefined auVar5 [16];
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint uVar11;
    longlong lVar12;
    longlong lVar13;
    undefined8 *local_res8;

    lVar6 = DAT_140c659f0;
    lVar12 = DAT_140c659f0 + 0x218;
    local_res8 = param_1;
    FUN_1404b4910(lVar12);
    uVar9 = 0;
    if (*param_2 != 0) {
        do {
            lVar10 = 0;
            local_res8 = (undefined8 *)FUN_14018b280(0x20);
            if (local_res8 == (undefined8 *)0x0) {
                local_res8 = (undefined8 *)0x0;
            }
            else {
                *(undefined4 *)local_res8 = 0;
                local_res8[1] = 0;
            }
            puVar7 = local_res8;
            lVar2 = *(longlong *)(param_2 + 2);
            lVar13 = uVar9 * 0x20;
            *local_res8 = *(undefined8 *)(lVar2 + lVar13);
            local_res8[1] = *(undefined8 *)(lVar2 + 8 + lVar13);
            psVar3 = *(short **)(*(longlong *)(param_2 + 2) + 0x10 + lVar13);
            sVar1 = *psVar3;
            while (sVar1 != 0) {
                lVar10 = lVar10 + 1;
                sVar1 = psVar3[lVar10];
            }
            auVar5 = ZEXT816(2) * ZEXT816(lVar10 + 1U);
            uVar8 = SUB168(auVar5,0);
            if (SUB168(auVar5 >> 0x40,0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8,0);
            FUN_1407db590(uVar8,psVar3,(lVar10 + 1U) * 2);
            puVar7[2] = uVar8;
            psVar3 = *(short **)(*(longlong *)(param_2 + 2) + 0x18 + lVar13);
            lVar10 = 0;
            sVar1 = *psVar3;
            while (sVar1 != 0) {
                lVar10 = lVar10 + 1;
                sVar1 = psVar3[lVar10];
            }
            auVar5 = ZEXT816(2) * ZEXT816(lVar10 + 1U);
            uVar8 = SUB168(auVar5,0);
            if (SUB168(auVar5 >> 0x40,0) != 0) {
                uVar8 = 0xffffffffffffffff;
            }
            uVar8 = FUN_14018b280(uVar8,0);
            FUN_1407db590(uVar8,psVar3,(lVar10 + 1U) * 2);
            puVar7[3] = uVar8;
            puVar4 = *(undefined8 **)(lVar6 + 0x228);
            if (puVar4 == *(undefined8 **)(lVar6 + 0x230)) {
                FUN_14010a1c0(lVar12,puVar4,&local_res8);
            }
            else {
                if (puVar4 != (undefined8 *)0x0) {
                    *puVar4 = puVar7;
                }
                *(longlong *)(lVar6 + 0x228) = *(longlong *)(lVar6 + 0x228) + 8;
            }
            uVar11 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar11;
        } while (uVar11 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingRandomCommunityListReceived","");
    return 0;
}



undefined8 FUN_1404bb220(undefined8 *param_1,uint *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined8 *local_res8;

    lVar2 = DAT_140c659f0;
    if (param_2[4] == 0) {
        lVar3 = DAT_140c659f0 + 0xf0;
        local_res8 = param_1;
        FUN_1404b4890(lVar3);
        uVar5 = 0;
        if (*param_2 != 0) {
            do {
                local_res8 = (undefined8 *)FUN_14018b280(0x18);
                puVar1 = (undefined8 *)(*(longlong *)(param_2 + 2) + uVar5 * 0x18);
                *local_res8 = *puVar1;
                local_res8[1] = puVar1[1];
                local_res8[2] = puVar1[2];
                puVar1 = *(undefined8 **)(lVar2 + 0x100);
                if (puVar1 == *(undefined8 **)(lVar2 + 0x108)) {
                    FUN_14010a1c0(lVar3,puVar1,&local_res8);
                }
                else {
                    if (puVar1 != (undefined8 *)0x0) {
                        *puVar1 = local_res8;
                    }
                    *(longlong *)(lVar2 + 0x100) = *(longlong *)(lVar2 + 0x100) + 8;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *param_2);
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingVendorListRecieved","");
    }
    return 0;
}



undefined8 FUN_1404bb380(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    char *pcVar6;
    int iVar7;

    lVar4 = DAT_140c659f0;
    iVar7 = *(int *)(param_2 + 0x18);
    pcVar6 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_1404bb3c5::switchdataD_1404bb71c)
             [(&switchD_1404bb3c5::switchdataD_1404bb754)[iVar7 + -0xc]];
    switch(iVar7) {
        case 0xc:
        case 0xd:
        case 0x2c:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNeighborInviteDeclined",
                          &DAT_1409ec084,*(undefined8 *)(param_2 + 0x10));
            return 0;
        case 0x10:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNeighborInviteAccepted",
                          &DAT_1409ec0a4,*(undefined8 *)(param_2 + 0x10));
            if ((*(undefined **)(param_2 + 0x10) == (undefined *)0x0) ||
                (*(undefined **)(param_2 + 0x10) == &DAT_1409f08a4)) {
                puVar3 = (undefined8 *)0x0;
                *(undefined4 *)(lVar4 + 0x158) = 0;
                *(undefined8 *)(lVar4 + 0x160) = 0;
                lVar1 = *(longlong *)(lVar4 + 0x168);
                puVar2 = (undefined8 *)FUN_14018b280(0x12,0);
                if (puVar2 != (undefined8 *)0x0) {
                    puVar2[1] = 0;
                    *puVar2 = &PTR_LAB_140b55060;
                    puVar3 = puVar2;
                }
                *(undefined2 *)(puVar3 + 2) = 0;
                *(undefined8 **)(lVar4 + 0x168) = puVar3 + 2;
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                    return 0;
                }
            }
            break;
        case 0x14:
            FUN_1403cc530(DAT_140c65898,0x67);
        case 0x15:
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x2a:
        case 0x36:
            lVar4 = FUN_1405b1510(&DAT_140c7dfb0);
            if (lVar4 != 0) {
                FUN_1405aaeb0(lVar4);
            }
            iVar7 = *(int *)(param_2 + 0x18);
        default:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                          *(undefined8 *)(param_2 + 0x10),iVar7);
            break;
        case 0x32:
            uVar5 = FUN_14034bdd0(pcVar6,0xa9e8e);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x35:
            uVar5 = FUN_14034bdd0(pcVar6,0xbbf67);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x37:
            uVar5 = FUN_14034bdd0(pcVar6,0xbc175);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x38:
            uVar5 = FUN_14034bdd0(pcVar6,0xbc174);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x39:
            uVar5 = FUN_14034bdd0(pcVar6,0xbc17a);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x3a:
            uVar5 = FUN_14034bdd0(pcVar6,0xbc17b);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x3b:
            uVar5 = FUN_14034bdd0(pcVar6,0xbc17c);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x3c:
            uVar5 = FUN_14034bdd0(pcVar6,0xbc194);
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
            return 0;
        case 0x3d:
            FUN_1403cc530(DAT_140c65898,0xae);
            return 0;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1404bb790(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_48;
    code *local_40;
    undefined8 local_38;

    lVar2 = DAT_140c659f0;
    iVar3 = *(int *)(param_2 + 0x28);
    local_res8 = param_1;
    if (iVar3 == 0) {
        uVar4 = (**(code **)(DAT_140c659f0 + 0x1e0))(param_2 + 0x10);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x1d8) + (uVar4 % *(ulonglong *)(lVar2 + 0x1d0)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar4 == *puVar1) &&
                (iVar3 = (**(code **)(lVar2 + 0x1e8))(param_2 + 0x10,puVar1 + 2), iVar3 != 0)) {
                if (puVar1 != (ulonglong *)&DAT_ffffffffffffffe0) {
                    return 0;
                }
                break;
            }
        }
        lVar5 = FUN_14018b280(0x108,0);
        if (lVar5 != 0) {
            *(int *)(lVar2 + 0x170) = *(int *)(lVar2 + 0x170) + 1;
            lVar5 = FUN_1404b4d50(lVar5,param_2,lVar2 + 0x1f0,*(undefined4 *)(lVar2 + 0x170));
        }
        local_res8 = lVar5;
        FUN_14040adf0(lVar2 + 0x1a0,lVar5,&local_res8);
        FUN_1400b6080(lVar2 + 0x178,local_res8 + 8,&local_res8);
        FUN_1404bc4d0(lVar2 + 0x1c8,local_res8 + 0xb8,&local_res8);
        lVar5 = local_res8;
        local_40 = FUN_1404bc210;
        local_48 = lVar2;
        FUN_1403f8660();
        lVar2 = DAT_140c65898;
        *(undefined4 *)(lVar5 + 0xf0) = 1;
        FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"HousingNeighborUpdate",&DAT_1409ebf9c,
                      *(undefined4 *)(lVar5 + 8));
    }
    else if (iVar3 == 2) {
        local_res8 = 0;
        iVar3 = FUN_1404bc580(DAT_140c659f0 + 0x1c8,param_2 + 0x10,&local_res8);
        lVar5 = local_res8;
        if (iVar3 != 0) {
            FUN_1400b6120(lVar2 + 0x1a0,local_res8);
            FUN_1400b6120(lVar2 + 0x178,lVar5 + 8);
            FUN_1400b6120(lVar2 + 0x1c8,lVar5 + 0xb8);
            if (lVar5 != 0) {
                FUN_1404b4cf0(lVar5);
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNeighborsLoaded",&DAT_1409d0f67)
                    ;
            lVar5 = FUN_1405b1510(*(undefined8 *)(lVar2 + 0x338));
            if ((lVar5 != 0) &&
                (lVar5 = FUN_1405b1510(*(undefined8 *)(lVar2 + 0x338)),
                        *(longlong *)(lVar5 + 0x20) == *(longlong *)(param_2 + 0x18))) {
                local_48 = 0;
                local_40 = (code *)0x0;
                local_38 = 0;
                lVar5 = FUN_1405b1510(*(undefined8 *)(lVar2 + 0x338));
                local_38 = CONCAT44(local_38._4_4_,3);
                local_48 = *(longlong *)(lVar5 + 8);
                local_40 = *(code **)(lVar5 + 0x10);
                FUN_1405b1800(*(undefined8 *)(lVar2 + 0x338),&local_48);
            }
        }
    }
    else {
        if (iVar3 == 1) {
            local_res8 = 0;
            iVar3 = FUN_1404bc580(DAT_140c659f0 + 0x1c8,param_2 + 0x10,&local_res8);
            if (iVar3 == 0) {
                return 0;
            }
            *(undefined4 *)(local_res8 + 0xe4) = *(undefined4 *)(param_2 + 0x20);
        }
        else if (iVar3 != 3) {
            return 0;
        }
        local_40 = FUN_1404bc210;
        local_48 = lVar2;
        FUN_1403f8660();
    }
    return 0;
}



undefined8 FUN_1404bbb80(undefined8 param_1,uint *param_2)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    int local_res8;
    int iStackX12;
    undefined **local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;
    undefined **local_58;
    int local_50;
    undefined4 uStack76;
    longlong local_48;
    undefined4 local_40;

    lVar9 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_78 = &PTR_FUN_140b569f0;
    local_60 = 1;
    local_68 = lVar9;
    if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar9);
    }
    puVar7 = *(undefined8 **)(lVar9 + 0x10);
    uVar5 = FUN_14005c1b0(lVar9,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar5;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    local_70 = FUN_1400578c0(lVar9);
    uVar11 = 0;
    if (*param_2 != 0) {
        uVar13 = 0;
        uVar14 = 0;
        do {
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            lVar9 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
            local_48 = lVar9;
            if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar9);
            }
            puVar7 = *(undefined8 **)(lVar9 + 0x10);
            uVar5 = FUN_14005c1b0(lVar9,0,0);
            *(undefined4 *)(puVar7 + 1) = 5;
            *puVar7 = uVar5;
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
            iVar3 = FUN_1400578c0(lVar9);
            local_50 = iVar3;
            uVar5 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(*(longlong *)(param_2 + 2) + uVar11 * 4),0
            );
            iVar4 = FUN_140415c70(lVar9,uVar5);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_58,L"item");
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
            }
            iVar4 = *(int *)(*(longlong *)(param_2 + 4) + uVar11 * 4);
            lVar6 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
            if (iVar3 - 1U < *(uint *)(lVar6 + 0x38)) {
                puVar7 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
            }
            else {
                dVar12 = (double)iVar3;
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar7 = *(undefined8 **)(lVar6 + 0x20);
                }
                else {
                    iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
                    local_res8 = SUB84(dVar12,0);
                    puVar7 = (undefined8 *)
                            (*(longlong *)(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                              (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_1404bbd85;
                    puVar7 = (undefined8 *)puVar7[4];
                } while (puVar7 != (undefined8 *)0x0);
                puVar7 = &DAT_140a12138;
            }
            LAB_1404bbd85:
            puVar1 = *(undefined8 **)(lVar9 + 0x10);
            *puVar1 = *puVar7;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_58,L"nCount");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
            }
            else {
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (*(char *)(lVar8 + lVar6) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar9);
                }
                puVar7 = *(undefined8 **)(lVar9 + 0x10);
                uVar5 = FUN_140062650(lVar9,lVar6,lVar8);
                *(undefined4 *)(puVar7 + 1) = 4;
                *puVar7 = uVar5;
            }
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
            if (CONCAT44(uStack76,local_50) != 0) {
                FUN_14018b900(CONCAT44(uStack76,local_50),0);
            }
            pdVar2 = *(double **)(lVar9 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar4;
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(lVar9,0xfffffffd);
            FUN_14005ea50(lVar9,uVar5,*(longlong *)(lVar9 + 0x10) + -0x20,
                          *(longlong *)(lVar9 + 0x10) + -0x10);
            *(longlong *)(lVar9 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar9 + 0x10));
            FUN_1400fb1d0(&local_78);
            FUN_1400579e0(lVar9);
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            lVar9 = local_68;
        } while (uVar10 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HarvestItemsSentToOwner",&DAT_1409ec24c,
                  local_70);
    if (lVar9 != 0) {
        FUN_1400579e0(lVar9);
    }
    return 0;
}



undefined8 FUN_1404bbf00(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong *plVar2;

    if ((*(longlong *)(param_2 + 2) != 0) && (DAT_140c7dfc0 != DAT_140c7dfc8)) {
        plVar2 = DAT_140c7dfc0;
        do {
            lVar1 = *plVar2;
            if ((*(int *)(lVar1 + 8) == *param_2) &&
                (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_2 + 2))) {
                if (lVar1 == 0) {
                    return 0;
                }
                FUN_1405ae900(lVar1,*(undefined8 *)(param_2 + 4),param_2[6]);
                return 0;
            }
            plVar2 = plVar2 + 1;
        } while (plVar2 != DAT_140c7dfc8);
    }
    return 0;
}



undefined8 FUN_1404bbf60(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong *plVar2;

    if ((*(longlong *)(param_2 + 2) != 0) && (DAT_140c7dfc0 != DAT_140c7dfc8)) {
        plVar2 = DAT_140c7dfc0;
        do {
            lVar1 = *plVar2;
            if ((*(int *)(lVar1 + 8) == *param_2) &&
                (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_2 + 2))) {
                if (lVar1 == 0) {
                    return 0;
                }
                FUN_1405add40(lVar1,param_2[4]);
                return 0;
            }
            plVar2 = plVar2 + 1;
        } while (plVar2 != DAT_140c7dfc8);
    }
    return 0;
}



undefined8 FUN_1404bbfc0(undefined8 param_1,longlong param_2)

{
    switch(*(undefined4 *)(param_2 + 0x10)) {
        case 0:
        case 1:
        case 0xe:
        case 0x2f:
        case 0x38:
        case 0x41:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CommunityRenameResult",&DAT_1409ec1fc);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1404bc060(longlong param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    uint uVar6;
    code *pcVar7;

    lVar3 = FUN_1405b1510(*(undefined8 *)(param_1 + 0x338));
    if ((lVar3 == 0) || (lVar3 = FUN_1405b1510(*(undefined8 *)(param_1 + 0x338)), lVar3 == -8)) {
        return 0;
    }
    lVar4 = FUN_1402070a0(*(undefined4 *)(lVar3 + 0x40));
    if (lVar4 != 0) {
        uVar1 = FUN_140205f50();
        uVar6 = 0;
        pcVar7 = DAT_140c63848;
        if (uVar1 != 0) {
            do {
                if (pcVar7 == (code *)0x0) {
                    if ((_DAT_140c65340 == 0) && (iVar2 = FUN_140205d40(), pcVar7 = DAT_140c63848, -1 < iVar2)
                            ) {
                        puVar5 = (undefined4 *)(**(code **)(*DAT_140c63c30 + 0x20))(DAT_140c63c30,uVar6);
                        goto LAB_1404bc103;
                    }
                }
                else {
                    puVar5 = (undefined4 *)(*pcVar7)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar6,DAT_140c63858);
                    LAB_1404bc103:
                    pcVar7 = DAT_140c63848;
                    if (((puVar5 != (undefined4 *)0x0) && (puVar5[3] == *(int *)(lVar3 + 0x40))) &&
                        (puVar5[4] == param_2)) {
                        return *puVar5;
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar1);
        }
    }
    return 0;
}



int * FUN_1404bc160(void)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = FUN_1405b1510();
    if (lVar2 != 0) {
        lVar3 = FUN_140205fa0();
        if ((lVar3 != 0) && (*(int *)(lVar2 + 0x40) == *(int *)(lVar3 + 0xc))) {
            uVar4 = 0;
            if ((ulonglong)*(uint *)(lVar2 + 0x110) != 0) {
                uVar5 = uVar4;
                do {
                    if (((uVar5 < (ulonglong)(*(longlong *)(lVar2 + 0x100) - *(longlong *)(lVar2 + 0xf8) >> 3)
                         ) && (piVar1 = *(int **)(*(longlong *)(lVar2 + 0xf8) + uVar4 * 8),
                            piVar1 != (int *)0x0)) && (*piVar1 == *(int *)(lVar3 + 0x10))) {
                        return piVar1;
                    }
                    uVar4 = uVar4 + 1;
                    uVar5 = (ulonglong)((int)uVar5 + 1);
                } while ((longlong)uVar4 < (longlong)(ulonglong)*(uint *)(lVar2 + 0x110));
            }
        }
    }
    return (int *)0x0;
}



ulonglong FUN_1404bc210(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        longlong param_5)

{
    short sVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    short *psVar8;

    uVar3 = (**(code **)(param_1 + 0x1e0))(param_2);
    uVar4 = uVar3 / *(ulonglong *)(param_1 + 0x1d0);
    puVar2 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1d8) + (uVar3 % *(ulonglong *)(param_1 + 0x1d0)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar2) &&
            (uVar4 = (**(code **)(param_1 + 0x1e8))(param_2,puVar2 + 2), (int)uVar4 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 4 == (ulonglong *)0x0) {
        return uVar4;
    }
    uVar4 = puVar2[4];
    if (param_5 == 0) {
        lVar5 = FUN_14034bdd0();
        psVar7 = (short *)(uVar4 + 0xc);
        lVar6 = 0x21;
        lVar5 = lVar5 - (longlong)psVar7;
        do {
            if ((lVar6 == -0x7fffffdd) || (sVar1 = *(short *)(lVar5 + (longlong)psVar7), sVar1 == 0)) {
                if (lVar6 != 0) goto LAB_1404bc36d;
                break;
            }
            *psVar7 = sVar1;
            psVar7 = psVar7 + 1;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        psVar7 = psVar7 + -1;
        LAB_1404bc36d:
        uVar3 = 0;
        *psVar7 = 0;
        *(undefined8 *)(uVar4 + 0xe8) = 0;
    }
    else {
        psVar8 = *(short **)(param_5 + 0x10);
        psVar7 = (short *)(uVar4 + 0xc);
        lVar5 = 0x21;
        do {
            if ((lVar5 == -0x7fffffdd) || (*psVar8 == 0)) {
                if (lVar5 != 0) goto LAB_1404bc2d0;
                break;
            }
            *psVar7 = *psVar8;
            psVar7 = psVar7 + 1;
            psVar8 = psVar8 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        psVar7 = psVar7 + -1;
        LAB_1404bc2d0:
        *psVar7 = 0;
        *(undefined4 *)(uVar4 + 0xe8) = *(undefined4 *)(param_5 + 0x1c);
        *(undefined4 *)(uVar4 + 0xec) = *(undefined4 *)(param_5 + 0x2c);
        *(undefined4 *)(uVar4 + 0xd4) = *(undefined4 *)(param_5 + 0x20);
        *(undefined8 *)(uVar4 + 200) = *(undefined8 *)(param_5 + 0x30);
        *(undefined4 *)(uVar4 + 0xd0) = *(undefined4 *)(param_5 + 0x24);
        *(undefined4 *)(uVar4 + 0xe0) = *(undefined4 *)(param_5 + 0x18);
        uVar3 = (ulonglong)*(uint *)(param_5 + 0x28);
        *(uint *)(uVar4 + 0xd8) = *(uint *)(param_5 + 0x28);
    }
    if (*(int *)(uVar4 + 0xf0) != 0) {
        uVar3 = FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingNeighborUpdate",
                              &DAT_1409ebf9c,*(undefined4 *)(uVar4 + 8));
    }
    return uVar3;
}



void FUN_1404bc3c0(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    int iVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    puVar1 = *(undefined4 **)(param_1 + 0x280);
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)(puVar2 + 6);
        local_28[0] = 0;
        iVar3 = (**(code **)(**(longlong **)(puVar2 + 2) + 0x20))(*(longlong **)(puVar2 + 2),local_28);
        if (iVar3 != 0) {
            if (*(undefined8 **)(puVar2 + 4) != (undefined8 *)0x0) {
                **(undefined8 **)(puVar2 + 4) = *(undefined8 *)(puVar2 + 6);
            }
            if (*(longlong *)(puVar2 + 6) != 0) {
                *(undefined8 *)(*(longlong *)(puVar2 + 6) + 0x10) = *(undefined8 *)(puVar2 + 4);
            }
            *(undefined8 *)(puVar2 + 4) = 0;
            *(undefined8 *)(puVar2 + 6) = 0;
            if (*(code **)(param_1 + 0x288) != (code *)0x0) {
                (**(code **)(param_1 + 0x288))(*puVar2,puVar2,0);
            }
            if (*(code **)(param_1 + 0x288) != (code *)0x0) {
                (**(code **)(param_1 + 0x288))(*puVar2,puVar2);
            }
        }
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
        local_28[0] = 0;
        local_18 = FUN_1404bc3c0;
        local_10 = 0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x238,100,local_28);
    }
    return;
}



void FUN_1404bc4d0(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

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
    puVar4 = (ulonglong *)FUN_14018b280(0x28);
    if (puVar4 == (ulonglong *)0x0) {
        *ppuVar1 = (ulonglong *)0x0;
    }
    else {
        puVar2 = *ppuVar1;
        *puVar4 = uVar3;
        puVar4[1] = (ulonglong)puVar2;
        puVar4[2] = *param_2;
        puVar4[3] = param_2[1];
        puVar4[4] = *param_3;
        *ppuVar1 = puVar4;
    }
    *param_1 = *param_1 + 1;
    return;
}



undefined8 FUN_1404bc580(longlong param_1,undefined8 param_2,ulonglong *param_3)

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
    }
    return 1;
}



undefined8 * FUN_1404bc620(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(100);
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



undefined8 * FUN_1404bc6a0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(100);
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



undefined8 * FUN_1404bc760(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(100);
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



longlong FUN_1404bc7e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + param_3,0x68);
    FUN_1407db590(lVar1 * 0x68 + lVar3,param_2,param_3 * 0x68);
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,param_1[1] * 0x68);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + param_3;
    return lVar1;
}



undefined8 * FUN_1404bc890(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    FUN_14043f640();
    lVar1 = ((ulonglong)*(uint *)param_2 %
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) * 8;
    puVar2 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10));
    puVar3 = puVar2;
    while( true ) {
        if (puVar3 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)FUN_14018b280(0x18);
            puVar3 = puVar4 + 1;
            *puVar4 = 0;
            if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = *param_2;
                puVar4[2] = param_2[1];
            }
            *puVar4 = puVar2;
            *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10)) = puVar4;
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
            return puVar3;
        }
        if (*(uint *)(puVar3 + 1) == *(uint *)param_2) break;
        puVar3 = (undefined8 *)*puVar3;
    }
    return puVar3 + 1;
}



int FUN_1404bc950(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 1;
    iVar2 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x80))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 * FUN_1404bc9b0(undefined8 *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *local_res8;

    lVar1 = DAT_140c659f8;
    local_res8 = param_1;
    puVar2 = (undefined8 *)FUN_1404cb460(DAT_140c659f8 + 0x78);
    if (puVar2 != (undefined8 *)0x0) {
        return (undefined8 *)*puVar2;
    }
    local_res8 = (undefined8 *)FUN_14018b280(8);
    if (local_res8 == (undefined8 *)0x0) {
        local_res8 = (undefined8 *)0x0;
    }
    else {
        *local_res8 = 0;
    }
    FUN_1404bc4d0(lVar1 + 0x78,param_2,&local_res8);
    return local_res8;
}



undefined8 * FUN_1404bca30(undefined8 *param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *local_res8;

    lVar1 = DAT_140c659f8;
    local_res8 = param_1;
    puVar2 = (undefined8 *)FUN_1404cb460(DAT_140c659f8 + 0xa0);
    if (puVar2 != (undefined8 *)0x0) {
        return (undefined8 *)*puVar2;
    }
    local_res8 = (undefined8 *)FUN_14018b280(8);
    if (local_res8 == (undefined8 *)0x0) {
        local_res8 = (undefined8 *)0x0;
    }
    else {
        *local_res8 = 0;
    }
    FUN_1404bc4d0(lVar1 + 0xa0,param_2,&local_res8);
    return local_res8;
}



undefined8 * FUN_1404bcac0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b68da0;
    FUN_1404c0410();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404bcb00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   int param_9,undefined4 param_10,undefined4 *param_11,undefined8 param_12,
                   undefined4 param_13)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    float *pfVar5;
    longlong lVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined auStack408 [32];
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    float local_168;
    float fStack356;
    ulonglong uStack352;
    undefined8 local_158;
    undefined8 uStack336;
    float local_148;
    uint local_144;
    float local_140;
    undefined4 local_13c;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined local_128 [16];
    float local_118;
    float fStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
    *(undefined4 *)(param_1 + 3) = param_10;
    *(undefined4 *)((longlong)param_1 + 0x24) = param_6;
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 5) = param_7;
    param_1[1] = param_3;
    *(undefined4 *)(param_1 + 2) = param_4;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = param_8;
    *(int *)(param_1 + 6) = param_9;
    FUN_1404bd000(param_1 + 8,&DAT_140c78390);
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0xc) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0xd) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0xe) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0xf) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x10) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x11) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x12) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x13) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
    param_1[0x14] = param_12;
    *(undefined4 *)(param_1 + 0x15) = param_13;
    if (param_9 == 4) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
    }
    else if ((param_9 < 5) || ((6 < param_9 && (1 < param_9 - 9U)))) {
        lVar6 = FUN_140203da0(param_4);
        if (lVar6 != 0) {
            *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar6 + 0x14);
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar6 + 8);
        }
    }
    else {
        uVar4 = FUN_140203da0(param_4);
        if (uVar4 != 0) {
            uVar4 = (ulonglong)*(uint *)(uVar4 + 0x14);
        }
        *(int *)((longlong)param_1 + 0x1c) = (int)uVar4;
        if (param_11 != (undefined4 *)0x0) {
            uVar1 = param_11[1];
            uVar2 = param_11[2];
            uVar3 = param_11[3];
            *(undefined4 *)(param_1 + 8) = *param_11;
            *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
            *(undefined4 *)(param_1 + 9) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
            *(undefined4 *)(param_1 + 10) = param_11[4];
            *(undefined4 *)((longlong)param_1 + 0x54) = param_11[5];
            *(undefined4 *)(param_1 + 0xb) = param_11[6];
            *(undefined4 *)((longlong)param_1 + 0x5c) = param_11[7];
            if (param_9 == 6) {
                fVar7 = (float)FUN_1408fe3d0(0);
                fVar8 = (float)FUN_1408fc950(0);
                pfVar5 = (float *)FUN_1401b2fe0(&local_178,param_11);
                fVar10 = *pfVar5 * 0.5;
                fVar9 = (float)FUN_1408fe3d0(fVar10);
                fVar10 = (float)FUN_1408fc950(fVar10);
                local_178 = fVar10 * fVar7 * fVar8 + fVar9 * fVar8 * fVar7;
                fStack368 = fVar10 * fVar8 * fVar7 - fVar9 * fVar7 * fVar8;
                fStack372 = fVar9 * fVar8 * fVar8 - fVar10 * fVar7 * fVar7;
                fStack364 = fVar9 * fVar7 * fVar7 + fVar10 * fVar8 * fVar8;
                *(float *)(param_1 + 8) = local_178;
                *(float *)((longlong)param_1 + 0x44) = fStack372;
                *(float *)(param_1 + 9) = fStack368;
                *(float *)((longlong)param_1 + 0x4c) = fStack364;
                *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
            }
            else if (param_9 == 10) {
                *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
            }
        }
    }
    lVar6 = FUN_140203520(*(undefined4 *)((longlong)param_1 + 0x1c));
    if (lVar6 != 0) {
        fVar10 = DAT_140c3b438 * 0.005555556;
        local_118 = 1.0 / *(float *)(lVar6 + 0x10);
        fVar7 = *(float *)(lVar6 + 0x24);
        local_128 = ZEXT1216(*(undefined (*) [12])(lVar6 + 0x14));
        fVar8 = fVar10 * *(float *)(lVar6 + 0x20);
        fVar11 = fVar10 * 0.0;
        fVar10 = fVar10 * fVar7;
        fVar7 = (float)FUN_1408fe3d0(fVar8,fVar7,fVar7,0);
        fVar8 = (float)FUN_1408fc950(fVar8);
        fVar9 = (float)FUN_1408fe3d0(fVar10);
        fVar10 = (float)FUN_1408fc950(fVar10);
        fStack356 = (float)FUN_1408fe3d0(fVar11);
        fVar11 = (float)FUN_1408fc950(fVar11);
        local_168 = fVar11 * fVar10;
        uStack352 = (ulonglong)(uint)(fVar11 * fVar9) ^ 0x80000000;
        local_158 = (float *)CONCAT44(fVar11 * fVar8,fVar9 * fVar7 - fStack356 * fVar10 * fVar8);
        local_148 = fStack356 * fVar10 * fVar7 + fVar9 * fVar8;
        uStack336 = (undefined *)(ulonglong)(uint)(fVar10 * fVar7 + fStack356 * fVar9 * fVar8);
        local_13c = 0;
        local_138 = _DAT_140c78440;
        uStack308 = uRam0000000140c78444;
        uStack304 = uRam0000000140c78448;
        uStack300 = uRam0000000140c7844c;
        local_144 = (uint)(fVar11 * fVar7) ^ 0x80000000;
        local_140 = fVar10 * fVar8 - fStack356 * fVar9 * fVar7;
        FUN_1401b1d60(&local_178,&local_168);
        local_158 = &local_178;
        uStack352 = 0;
        uStack336 = local_128;
        fStack276 = fStack356;
        uStack272 = 0;
        uStack268 = 0;
        local_158._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
        uStack336._4_4_ = (undefined4)((ulonglong)uStack336 >> 0x20);
        local_108 = (undefined4)local_158;
        uStack260 = local_158._4_4_;
        uStack256 = (undefined4)uStack336;
        uStack252 = uStack336._4_4_;
        local_168 = local_118;
        FUN_1401b0590(&local_118,param_1 + 0xc);
    }
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack408);
    return;
}



longlong FUN_1404bd000(longlong param_1,float *param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined local_88 [16];
    undefined local_78 [16];
    undefined local_68 [16];
    undefined8 local_58;
    undefined8 uStack80;

    fVar1 = param_2[0xc];
    fVar2 = param_2[0xd];
    fVar7 = fVar2 * fVar2;
    fVar11 = fVar1 * fVar1 + fVar7 + 0.0;
    auVar6 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                     CONCAT412(param_2[0xf] * param_2[0xf],
                               CONCAT48(param_2[0xe] * param_2[0xe],CONCAT44(fVar7,fVar11))));
    fVar7 = SUB164(auVar6,0);
    fVar7 = (3.0 - fVar11 * fVar7 * fVar7) * 0.5 * fVar7;
    if (fVar7 <= 0.0) {
        fVar7 = 0.0;
    }
    fVar11 = param_2[8];
    fVar3 = param_2[9];
    fVar8 = fVar3 * fVar3;
    fVar12 = fVar11 * fVar11 + fVar8 + 0.0;
    auVar6 = rsqrtss(CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))),
                     CONCAT412(param_2[0xb] * param_2[0xb],
                               CONCAT48(param_2[10] * param_2[10],CONCAT44(fVar8,fVar12))));
    fVar8 = SUB164(auVar6,0);
    fVar8 = (3.0 - fVar12 * fVar8 * fVar8) * 0.5 * fVar8;
    if (fVar8 <= 0.0) {
        fVar8 = 0.0;
    }
    fVar12 = param_2[4];
    fVar4 = param_2[5];
    fVar9 = fVar4 * fVar4;
    fVar13 = fVar12 * fVar12 + fVar9 + 0.0;
    auVar6 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                     CONCAT412(param_2[7] * param_2[7],
                               CONCAT48(param_2[6] * param_2[6],CONCAT44(fVar9,fVar13))));
    fVar9 = SUB164(auVar6,0);
    fVar9 = (3.0 - fVar13 * fVar9 * fVar9) * 0.5 * fVar9;
    if (fVar9 <= 0.0) {
        fVar9 = 0.0;
    }
    fVar13 = *param_2;
    fVar5 = param_2[1];
    fVar10 = fVar5 * fVar5;
    fVar14 = fVar13 * fVar13 + fVar10 + 0.0;
    auVar6 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))),
                     CONCAT412(param_2[3] * param_2[3],
                               CONCAT48(param_2[2] * param_2[2],CONCAT44(fVar10,fVar14))));
    fVar10 = SUB164(auVar6,0);
    fVar10 = (3.0 - fVar14 * fVar10 * fVar10) * 0.5 * fVar10;
    if (fVar10 <= 0.0) {
        fVar10 = 0.0;
    }
    local_88 = ZEXT816(CONCAT44(fVar10 * fVar5,fVar10 * fVar13));
    local_78 = ZEXT816(CONCAT44(fVar9 * fVar4,fVar9 * fVar12));
    local_68 = ZEXT816(CONCAT44(fVar8 * fVar3,fVar8 * fVar11));
    uStack80 = SUB168(CONCAT412(0x3f800000,ZEXT812(0)) >> 0x40,0);
    local_58 = CONCAT44(fVar7 * fVar2,fVar7 * fVar1);
    FUN_1401b1d60(param_1,local_88);
    fVar1 = param_2[0xd];
    *(float *)(param_1 + 0x10) = param_2[0xc];
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(float *)(param_1 + 0x1c) = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + 0.0);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404bd280(longlong param_1,undefined8 param_2,int param_3)

{
    undefined auStack200 [32];
    undefined4 local_a8;
    undefined8 uStack160;
    undefined8 local_98;
    undefined8 uStack144;
    undefined local_88 [16];
    undefined4 local_78 [2];
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    if (param_3 == 0) {
        local_a8 = 0x3f800000;
    }
    else {
        local_a8 = *(undefined4 *)(param_1 + 0x1c);
    }
    uStack144 = local_88;
    uStack160 = 0;
    local_98._0_4_ = (undefined4)param_1;
    local_98._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack144._4_4_ = (undefined4)((ulonglong)uStack144 >> 0x20);
    local_88 = ZEXT1216(*(undefined (*) [12])(param_1 + 0x10));
    local_68 = (undefined4)local_98;
    uStack100 = local_98._4_4_;
    uStack96 = (undefined4)uStack144;
    uStack92 = uStack144._4_4_;
    uStack112 = 0;
    uStack108 = 0;
    local_98 = param_1;
    local_78[0] = local_a8;
    FUN_1401b0590(local_78);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack200);
    return;
}



void FUN_1404bdbe0(undefined8 *param_1,int param_2)

{
    longlong lVar1;

    if (*(int *)((longlong)param_1 + 0xf4) != param_2) {
        *(int *)((longlong)param_1 + 0xf4) = param_2;
        if ((longlong *)param_1[0x20] != (longlong *)0x0) {
            lVar1 = (**(code **)(*(longlong *)param_1[0x20] + 0x98))();
            if (lVar1 != 0) {
                lVar1 = (**(code **)(*(longlong *)param_1[0x20] + 0x98))();
                if (*(int *)(lVar1 + 0x80) != 7) {
                    // WARNING: Could not recover jumptable at 0x0001404bdc35. Too many branches
                    // WARNING: Treating indirect jump as call
                    (**(code **)*param_1)(param_1);
                    return;
                }
            }
        }
    }
    return;
}



longlong * FUN_1404bdcc0(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    undefined local_88 [64];
    undefined local_48 [64];

    *param_1 = (longlong)&PTR_LAB_140b687f0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = param_2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0xfe;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x24] = 0;
    param_1[4] = (longlong)&PTR_LAB_140b68a90;
    lVar1 = *(longlong *)(param_1[2] + 0x120);
    param_1[6] = 0;
    param_1[5] = lVar1;
    param_1[0x24] = (longlong)param_1;
    FUN_1404c6650(param_1[2]);
    if (*(int *)(param_1[2] + 0x80) != 7) {
        (**(code **)param_1[4])(param_1 + 4);
        (**(code **)(*param_1 + 0x60))(param_1,local_88,1);
        (**(code **)(*param_1 + 0x60))(param_1,local_48,0);
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,local_48,local_88);
    }
    return param_1;
}



void FUN_1404bde00(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;

    if ((*(longlong *)(param_1 + 0x10) != 0) && (param_2 != (undefined4 *)0x0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x120);
        lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,2);
        uVar2 = *(undefined4 *)(lVar5 + 0x24);
        uVar3 = *(undefined4 *)(lVar5 + 0x28);
        uVar4 = *(undefined4 *)(lVar5 + 0x2c);
        *param_2 = *(undefined4 *)(lVar5 + 0x20);
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
    }
    return;
}



void FUN_1404bdeb0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;

    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2,0);
        // WARNING: Could not recover jumptable at 0x0001404bdf06. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0xa0))(param_1);
        return;
    }
    return;
}



void FUN_1404bdf20(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;

    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,0,param_2);
        // WARNING: Could not recover jumptable at 0x0001404bdf78. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0xa0))(param_1);
        return;
    }
    return;
}



void FUN_1404bdf90(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,0,0);
        // WARNING: Could not recover jumptable at 0x0001404bdfbb. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0xa0))(param_1);
        return;
    }
    return;
}



void FUN_1404bdfd0(longlong *param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = param_1[2];
    if (lVar2 == 0) {
        return;
    }
    if (param_2 != 0) {
        lVar1 = FUN_1404ca4f0();
        if (lVar1 == 0) goto LAB_1404be006;
    }
    *(int *)(lVar2 + 0x2a0) = param_2;
    *(int *)(lVar2 + 0xf8) = param_2;
    FUN_1404c6b10(lVar2);
    LAB_1404be006:
    // WARNING: Could not recover jumptable at 0x0001404be011. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0xa0))(param_1);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404be250(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    longlong *plVar6;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    undefined extraout_var [12];
    undefined auVar7 [16];
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    undefined auStack760 [32];
    undefined local_2d8 [16];
    undefined local_2c8 [4];
    undefined auStack708 [12];
    undefined local_2b8 [8];
    undefined4 uStack688;
    undefined4 uStack684;
    undefined local_2a8 [16];
    undefined local_298 [16];
    undefined4 local_288;
    undefined4 uStack644;
    undefined4 uStack640;
    undefined4 uStack636;
    undefined4 local_278;
    undefined4 local_274;
    undefined4 local_270;
    undefined4 local_26c;
    float local_268;
    float fStack612;
    float fStack608;
    float fStack604;
    float local_258;
    float fStack596;
    float fStack592;
    float fStack588;
    float local_248;
    float fStack580;
    float fStack576;
    float fStack572;
    undefined local_228 [64];
    undefined local_1e8 [64];
    undefined local_1a8 [64];
    longlong local_168;
    undefined *local_160;
    undefined local_158 [64];
    undefined *local_118;
    undefined *puStack272;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack760;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        for (plVar6 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
             plVar6 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18); plVar6 = plVar6 + 1)
        {
            lVar2 = *plVar6;
            if (*(int *)(lVar2 + 0xbc) == *(int *)(*(longlong *)(lVar1 + 0x128) + 0x14)) {
                if (lVar2 != 0) {
                    local_288 = *(undefined4 *)(lVar1 + 0x200);
                    uStack644 = *(undefined4 *)(lVar1 + 0x204);
                    uStack640 = *(undefined4 *)(lVar1 + 0x208);
                    uStack636 = *(undefined4 *)(lVar1 + 0x20c);
                    local_278 = *(undefined4 *)(lVar1 + 0x210);
                    local_274 = *(undefined4 *)(lVar1 + 0x214);
                    local_270 = *(undefined4 *)(lVar1 + 0x218);
                    local_26c = *(undefined4 *)(lVar1 + 0x21c);
                    fVar15 = 0.5;
                    FUN_1408fe3d0();
                    fVar14 = extraout_XMM0_Da;
                    FUN_1408fc950();
                    fVar13 = extraout_XMM0_Da_00;
                    FUN_1408fe3d0();
                    fVar12 = extraout_XMM0_Da_01;
                    FUN_1408fc950();
                    fVar9 = extraout_XMM0_Da_02;
                    FUN_1408fe3d0();
                    fVar10 = extraout_XMM0_Da_03;
                    FUN_1408fc950();
                    fVar8 = extraout_XMM0_Da_04 * fVar12 * fVar13 + fVar10 * fVar9 * fVar14;
                    fVar11 = fVar10 * fVar9 * fVar13 - extraout_XMM0_Da_04 * fVar12 * fVar14;
                    fVar12 = fVar10 * fVar12 * fVar14 + extraout_XMM0_Da_04 * fVar9 * fVar13;
                    fVar9 = fVar11 * 2.0;
                    local_168 = lVar1 + 0x220;
                    local_160 = local_2c8;
                    fVar10 = 1.0 - fVar8 * fVar8 * 2.0;
                    fVar13 = fVar12 * fVar8 * 2.0;
                    _local_2c8 = CONCAT124(_local_2c8 >> 0x20,(1.0 - fVar11 * fVar9) - 0.0) &
                                 (undefined  [16])0xffffffffffffffff;
                    _local_2b8 = CONCAT124(_local_2b8 >> 0x20,fVar8 * fVar9 - fVar12 * 0.0) &
                                 (undefined  [16])0xffffffffffffffff;
                    _local_2c8 = CONCAT48(fVar8 * 0.0 - fVar12 * fVar9,
                                          CONCAT44(fVar8 * fVar9 + fVar12 * 0.0,local_2c8));
                    local_298 = CONCAT412(0x3f800000,ZEXT812(0));
                    _local_2b8 = CONCAT48(fVar11 * 0.0 + fVar13,CONCAT44(fVar10 - 0.0,local_2b8._0_4_));
                    local_2a8 = CONCAT124(local_2a8._0_12_ >> 0x20,fVar8 * 0.0 + fVar12 * fVar9) &
                                (undefined  [16])0xffffffffffffffff;
                    local_2a8._0_12_ =
                            CONCAT48(fVar10 - fVar11 * fVar9,CONCAT44(fVar11 * 0.0 - fVar13,local_2a8._0_4_));
                    local_2d8._0_8_ = local_168;
                    local_2d8._8_8_ = local_160;
                    puStack272 = (undefined *)FUN_1405b0600(lVar2,local_1e8);
                    FUN_1401afb10(&local_168,local_158);
                    local_118 = local_158;
                    local_2d8 = CONCAT88(puStack272,local_118);
                    FUN_1401afb10(&local_118,&local_268);
                    fVar9 = fStack580 * fStack580;
                    uVar3 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40,0),fVar9),0);
                    uVar4 = uVar3 & 0xffffffff;
                    fVar10 = local_248 * local_248 + (float)uVar4 + 0.0;
                    auVar7 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,uVar3 << 0x20 | uVar4)),
                                     CONCAT412(fStack572 * fStack572,
                                               CONCAT48(fStack576 * fStack576,CONCAT44(fVar9,fVar10))));
                    fVar9 = SUB164(auVar7,0);
                    fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * fVar15 * fVar9;
                    if (fVar9 <= 0.0) {
                        fVar9 = 0.0;
                    }
                    fVar10 = fStack596 * fStack596;
                    fVar12 = local_258 * local_258 + fVar10 + 0.0;
                    auVar7 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))),
                                     CONCAT412(fStack588 * fStack588,
                                               CONCAT48(fStack592 * fStack592,CONCAT44(fVar10,fVar12))));
                    fVar10 = SUB164(auVar7,0);
                    fVar10 = (3.0 - fVar12 * fVar10 * fVar10) * fVar15 * fVar10;
                    if (fVar10 <= 0.0) {
                        fVar10 = 0.0;
                    }
                    fVar12 = fStack612 * fStack612;
                    fVar13 = local_268 * local_268 + fVar12 + 0.0;
                    auVar7 = rsqrtss(CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))),
                                     CONCAT412(fStack604 * fStack604,
                                               CONCAT48(fStack608 * fStack608,CONCAT44(fVar12,fVar13))));
                    fVar12 = SUB164(auVar7,0);
                    fVar12 = (3.0 - fVar13 * fVar12 * fVar12) * fVar15 * fVar12;
                    if (fVar12 <= 0.0) {
                        fVar12 = 0.0;
                    }
                    _local_2c8 = ZEXT816(CONCAT44(fVar12 * fStack612,fVar12 * local_268));
                    _local_2b8 = ZEXT816(CONCAT44(fVar10 * fStack596,fVar10 * local_258));
                    local_2a8 = ZEXT816(CONCAT44(fVar9 * fStack580,fVar9 * local_248));
                    local_298 = CONCAT412(0x3f800000,ZEXT812(0)) & (undefined  [16])0xffffffffffffffff;
                    puVar5 = (undefined4 *)FUN_1401b1d60(local_2d8,local_2c8);
                    auStack708 = SUB1612(_local_2c8 >> 0x20,0) &
                                 SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0);
                    local_288 = *puVar5;
                    uStack644 = puVar5[1];
                    uStack640 = puVar5[2];
                    uStack636 = puVar5[3];
                    _local_2c8 = CONCAT124(auStack708,local_26c);
                    _local_2b8 = CONCAT88(local_2d8,&local_288);
                    local_2d8 = ZEXT1216(CONCAT48(local_270,CONCAT44(local_274,local_278)));
                    local_2b8._0_4_ = SUB84(&local_288,0);
                    local_2b8._4_4_ = (undefined4)((ulonglong)&local_288 >> 0x20);
                    uStack688 = SUB84(local_2d8,0);
                    uStack684 = (undefined4)((ulonglong)local_2d8 >> 0x20);
                    local_118 = (undefined *)CONCAT44(auStack708._0_4_,local_26c);
                    puStack272 = SUB128(auStack708 >> 0x20,0);
                    local_108 = local_2b8._0_4_;
                    uStack260 = local_2b8._4_4_;
                    uStack256 = uStack688;
                    uStack252 = uStack684;
                    FUN_1401b0590(&local_118,local_228);
                    local_168 = (**(code **)(*(longlong *)param_1[2] + 0x78))
                            ((longlong *)param_1[2],local_1e8);
                    FUN_1401afc20(&local_168,local_158);
                    local_118 = local_158;
                    puStack272 = local_228;
                    local_2d8 = CONCAT88(puStack272,local_118);
                    FUN_1401afb10(&local_118,local_1a8);
                    (**(code **)(*(longlong *)param_1[2] + 0x28))((longlong *)param_1[2],local_1a8);
                    (**(code **)(*param_1 + 0xa0))(param_1);
                }
                break;
            }
        }
    }
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack760);
    return;
}



void FUN_1404be960(longlong *param_1)

{
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 0x70))();
        // WARNING: Could not recover jumptable at 0x0001404be983. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0xa0))(param_1);
        return;
    }
    return;
}



longlong * FUN_1404bea60(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 local_res8;
    longlong *local_res10;
    undefined local_98 [64];
    undefined local_58 [64];

    *param_1 = (longlong)&PTR_LAB_140b687f0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 1;
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0xfe;
    param_1[0x24] = 0;
    param_1[4] = (longlong)&PTR_LAB_140b68a90;
    *param_1 = (longlong)&PTR_LAB_140b688a0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    local_res10 = param_2;
    FUN_140033260(param_1 + 0x26,&local_res10);
    plVar2 = local_res10;
    lVar1 = local_res10[0x24];
    param_1[6] = 0;
    param_1[5] = lVar1;
    param_1[0x24] = (longlong)param_1;
    FUN_1404c6650(local_res10,0);
    local_res8 = 0;
    iVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2,&local_res8);
    if (-1 < iVar3) {
        FUN_1404bfee0(param_1,local_res8);
    }
    if (*(int *)(plVar2 + 0x10) != 7) {
        (**(code **)param_1[4])(param_1 + 4);
        (**(code **)(*param_1 + 0x60))(param_1,local_98,1);
        (**(code **)(*param_1 + 0x60))(param_1,local_58,0);
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,local_58,local_98);
    }
    return param_1;
}



undefined8 FUN_1404bec00(undefined8 param_1,ulonglong param_2)

{
    FUN_1404bec40();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404bec40(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    *param_1 = &PTR_LAB_140b688a0;
    if (param_1[0x27] != 0) {
        do {
            plVar1 = *(longlong **)(param_1[0x26] + uVar3 * 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x68))();
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[0x27]);
    }
    param_1[0x27] = 0;
    (**(code **)(param_1[4] + 8))(param_1 + 4);
    lVar2 = param_1[0x26];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = &PTR_LAB_140b687f0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 0x68))();
    }
    param_1[4] = &PTR_LAB_140b68a90;
    FUN_140626760(param_1 + 4);
    param_1[4] = &PTR_FUN_140b6fb70;
    FUN_140626760(param_1 + 4);
    return;
}



void FUN_1404bedb0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined auStack424 [32];
    undefined *local_188;
    undefined8 local_180;
    undefined local_178 [64];
    undefined local_138 [64];
    undefined local_f8 [64];
    undefined8 local_b8 [2];
    undefined local_a8 [64];
    undefined *local_68;
    undefined8 local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    plVar1 = *(longlong **)param_1[0x26];
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,0);
    local_b8[0] = (**(code **)(*plVar1 + 0x78))(plVar1,local_138);
    uVar2 = 1;
    local_180 = (**(code **)(*plVar1 + 0x90))(plVar1,local_f8,1);
    FUN_1401afc20(local_b8,local_a8);
    local_188 = local_a8;
    local_68 = local_188;
    local_60 = local_180;
    FUN_1401afb10(&local_68,local_178);
    if (1 < (ulonglong)param_1[0x27]) {
        do {
            plVar1 = *(longlong **)(param_1[0x26] + uVar2 * 8);
            (**(code **)(*plVar1 + 0x28))(plVar1,local_178);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (ulonglong)param_1[0x27]);
    }
    (**(code **)(*param_1 + 0xa0))(param_1);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack424);
    return;
}



void FUN_1404bef20(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined auStack424 [32];
    undefined *local_188;
    undefined8 local_180;
    undefined local_178 [64];
    undefined local_138 [64];
    undefined local_f8 [64];
    undefined8 local_b8 [2];
    undefined local_a8 [64];
    undefined *local_68;
    undefined8 local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    plVar1 = *(longlong **)param_1[0x26];
    (**(code **)(*plVar1 + 0x30))(plVar1,0,param_2);
    local_b8[0] = (**(code **)(*plVar1 + 0x78))(plVar1,local_138);
    uVar2 = 1;
    local_180 = (**(code **)(*plVar1 + 0x90))(plVar1,local_f8,1);
    FUN_1401afc20(local_b8,local_a8);
    local_188 = local_a8;
    local_68 = local_188;
    local_60 = local_180;
    FUN_1401afb10(&local_68,local_178);
    if (1 < (ulonglong)param_1[0x27]) {
        do {
            plVar1 = *(longlong **)(param_1[0x26] + uVar2 * 8);
            (**(code **)(*plVar1 + 0x28))(plVar1,local_178);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (ulonglong)param_1[0x27]);
    }
    (**(code **)(*param_1 + 0xa0))(param_1);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack424);
    return;
}



void FUN_1404bf090(longlong *param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined auStack424 [32];
    undefined *local_188;
    undefined8 local_180;
    undefined local_178 [64];
    undefined local_138 [64];
    undefined local_f8 [64];
    undefined8 local_b8 [2];
    undefined local_a8 [64];
    undefined *local_68;
    undefined8 local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    plVar1 = *(longlong **)param_1[0x26];
    (**(code **)(*plVar1 + 0x30))(plVar1,0,0);
    local_b8[0] = (**(code **)(*plVar1 + 0x78))(plVar1,local_138);
    uVar2 = 1;
    local_180 = (**(code **)(*plVar1 + 0x90))(plVar1,local_f8,1);
    FUN_1401afc20(local_b8,local_a8);
    local_188 = local_a8;
    local_68 = local_188;
    local_60 = local_180;
    FUN_1401afb10(&local_68,local_178);
    if (1 < (ulonglong)param_1[0x27]) {
        do {
            plVar1 = *(longlong **)(param_1[0x26] + uVar2 * 8);
            (**(code **)(*plVar1 + 0x28))(plVar1,local_178);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (ulonglong)param_1[0x27]);
    }
    (**(code **)(*param_1 + 0xa0))(param_1);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack424);
    return;
}



void FUN_1404bf1d0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong local_res8;
    longlong local_res18;

    uVar6 = 1;
    lVar7 = DAT_140c659f8;
    if (1 < (ulonglong)param_1[0x27]) {
        do {
            lVar1 = *(longlong *)(param_1[0x26] + uVar6 * 8);
            if (param_2 == 0) {
                LAB_1404bf268:
                *(uint *)(lVar1 + 0x2a0) = param_2;
                *(uint *)(lVar1 + 0xf8) = param_2;
                FUN_1404c6b10(lVar1);
                lVar7 = DAT_140c659f8;
            }
            else {
                lVar2 = *(longlong *)(lVar7 + 0xe8);
                lVar4 = lVar2;
                lVar3 = *(longlong *)(lVar2 + 8);
                while (lVar3 != 0) {
                    if (*(uint *)(lVar3 + 0x20) < param_2) {
                        lVar3 = *(longlong *)(lVar3 + 0x18);
                    }
                    else {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar3 + 0x10);
                    }
                }
                if ((lVar4 == lVar2) || (param_2 < *(uint *)(lVar4 + 0x20))) {
                    local_res18 = lVar2;
                    plVar5 = &local_res18;
                }
                else {
                    local_res8 = lVar4;
                    plVar5 = &local_res8;
                }
                if ((*plVar5 != lVar2) && (*(longlong *)(*plVar5 + 0x28) != 0)) goto LAB_1404bf268;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)param_1[0x27]);
    }
    // WARNING: Could not recover jumptable at 0x0001404bf2aa. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0xa0))(param_1);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404bf2c0(longlong *param_1,float *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    float fVar9;
    float fVar10;
    undefined auStack632 [32];
    undefined local_258 [16];
    undefined4 local_248;
    undefined4 uStack580;
    undefined4 uStack576;
    undefined4 uStack572;
    longlong local_238;
    float local_230;
    undefined4 local_22c;
    undefined4 local_228;
    undefined4 uStack548;
    undefined8 uStack544;
    undefined8 local_218;
    undefined8 uStack528;
    undefined local_1e8 [64];
    undefined local_1a8 [64];
    undefined local_168 [64];
    undefined *local_128;
    undefined *local_120;
    undefined local_118 [64];
    undefined8 local_d8 [2];
    undefined local_c8 [64];
    undefined *local_88;
    undefined8 uStack128;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack632;
    plVar1 = *(longlong **)param_1[0x26];
    plVar8 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    do {
        if (plVar8 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            LAB_1404bf571:
            FUN_1407db4f0(local_28 ^ (ulonglong)auStack632);
            return;
        }
        lVar2 = *plVar8;
        if (*(int *)(lVar2 + 0xbc) == *(int *)(plVar1[0x25] + 0x14)) {
            if (lVar2 != 0) {
                local_248 = *(undefined4 *)(plVar1 + 0x40);
                uStack580 = *(undefined4 *)((longlong)plVar1 + 0x204);
                uStack576 = *(undefined4 *)(plVar1 + 0x41);
                uStack572 = *(undefined4 *)((longlong)plVar1 + 0x20c);
                local_238 = plVar1[0x42];
                local_230 = *(float *)(plVar1 + 0x43);
                local_22c = *(undefined4 *)((longlong)plVar1 + 0x21c);
                pfVar5 = (float *)FUN_1405b0600(lVar2,&local_228);
                fVar3 = *param_2;
                fVar4 = param_2[1];
                fVar9 = fVar4 * pfVar5[4] + fVar3 * *pfVar5 + pfVar5[8] * 0.0 + pfVar5[0xc];
                fVar10 = fVar4 * pfVar5[5] + fVar3 * pfVar5[1] + pfVar5[9] * 0.0 + pfVar5[0xd];
                local_230 = fVar4 * pfVar5[6] + fVar3 * pfVar5[2] + pfVar5[10] * 0.0 + pfVar5[0xe];
                local_218 = &local_248;
                uStack544 = 0;
                uStack528 = local_258;
                local_238 = CONCAT44(fVar10,fVar9);
                local_258 = ZEXT816(CONCAT44(fVar10,fVar9));
                local_218._4_4_ = (undefined4)((ulonglong)local_218 >> 0x20);
                uStack528._4_4_ = (undefined4)((ulonglong)uStack528 >> 0x20);
                local_78 = (undefined4)local_218;
                uStack116 = local_218._4_4_;
                uStack112 = (undefined4)uStack528;
                uStack108 = uStack528._4_4_;
                local_228 = local_22c;
                local_88 = (undefined *)CONCAT44(uStack548,local_22c);
                uStack128 = 0;
                FUN_1401b0590(&local_88,local_168);
                local_d8[0] = (**(code **)(*plVar1 + 0x78))(plVar1,&local_228);
                FUN_1401afc20(local_d8,local_c8);
                local_128 = local_c8;
                local_120 = local_168;
                local_258._0_8_ = local_128;
                local_258._8_8_ = local_120;
                FUN_1401afb10(&local_128,local_1e8);
                (**(code **)(*plVar1 + 0x28))(plVar1,local_1e8);
                (**(code **)(*param_1 + 0xa0))(param_1);
                local_128 = (undefined *)(**(code **)(*plVar1 + 0x78))(plVar1,&local_228);
                uVar7 = 1;
                uVar6 = (**(code **)(*plVar1 + 0x90))(plVar1,local_d8,1);
                FUN_1401afc20(&local_128,local_118);
                local_88 = local_118;
                local_258 = CONCAT88(uVar6,local_88);
                uStack128 = uVar6;
                FUN_1401afb10(&local_88,local_1a8);
                if (1 < (ulonglong)param_1[0x27]) {
                    do {
                        plVar1 = *(longlong **)(param_1[0x26] + uVar7 * 8);
                        (**(code **)(*plVar1 + 0x28))(plVar1,local_1a8);
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < (ulonglong)param_1[0x27]);
                }
            }
            goto LAB_1404bf571;
        }
        plVar8 = plVar8 + 1;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404bf5a0(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    undefined extraout_var [12];
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined auStack824 [32];
    undefined local_318 [16];
    undefined local_308 [4];
    undefined auStack772 [8];
    undefined4 uStack764;
    undefined local_2f8 [8];
    undefined4 uStack752;
    undefined4 uStack748;
    undefined local_2e8 [16];
    undefined local_2d8 [16];
    undefined4 local_2c8;
    undefined4 uStack708;
    undefined4 uStack704;
    undefined4 uStack700;
    undefined4 local_2b8;
    undefined4 local_2b4;
    undefined4 local_2b0;
    undefined4 local_2ac;
    float local_2a8;
    float fStack676;
    float fStack672;
    float fStack668;
    float local_298;
    float fStack660;
    float fStack656;
    float fStack652;
    float local_288;
    float fStack644;
    float fStack640;
    float fStack636;
    undefined local_268 [64];
    undefined local_228 [64];
    undefined local_1e8 [64];
    undefined local_1a8 [64];
    longlong *local_168;
    undefined *local_160;
    undefined local_158 [64];
    undefined *local_118;
    undefined *puStack272;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack824;
    plVar1 = *(longlong **)param_1[0x26];
    plVar7 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    do {
        if (plVar7 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            LAB_1404bfcfc:
            FUN_1407db4f0(local_b8 ^ (ulonglong)auStack824);
            return;
        }
        lVar2 = *plVar7;
        if (*(int *)(lVar2 + 0xbc) == *(int *)(plVar1[0x25] + 0x14)) {
            if (lVar2 != 0) {
                local_2c8 = *(undefined4 *)(plVar1 + 0x40);
                uStack708 = *(undefined4 *)((longlong)plVar1 + 0x204);
                uStack704 = *(undefined4 *)(plVar1 + 0x41);
                uStack700 = *(undefined4 *)((longlong)plVar1 + 0x20c);
                local_2b8 = *(undefined4 *)(plVar1 + 0x42);
                local_2b4 = *(undefined4 *)((longlong)plVar1 + 0x214);
                local_2b0 = *(undefined4 *)(plVar1 + 0x43);
                local_2ac = *(undefined4 *)((longlong)plVar1 + 0x21c);
                fVar16 = 0.5;
                FUN_1408fe3d0();
                fVar14 = extraout_XMM0_Da;
                FUN_1408fc950();
                fVar15 = extraout_XMM0_Da_00;
                FUN_1408fe3d0();
                fVar11 = extraout_XMM0_Da_01;
                FUN_1408fc950();
                fVar10 = extraout_XMM0_Da_02;
                FUN_1408fe3d0();
                fVar13 = extraout_XMM0_Da_03;
                FUN_1408fc950();
                fVar9 = fVar15 * extraout_XMM0_Da_04 * fVar11 + fVar14 * fVar13 * fVar10;
                fVar12 = fVar15 * fVar13 * fVar10 - fVar14 * extraout_XMM0_Da_04 * fVar11;
                fVar15 = fVar14 * fVar13 * fVar11 + fVar15 * extraout_XMM0_Da_04 * fVar10;
                fVar10 = fVar12 * 2.0;
                local_168 = plVar1 + 0x44;
                local_160 = local_308;
                fVar13 = fVar15 * fVar9 * 2.0;
                fVar11 = 1.0 - fVar9 * fVar9 * 2.0;
                _local_308 = CONCAT124(_local_308 >> 0x20,(1.0 - fVar12 * fVar10) - 0.0) &
                             (undefined  [16])0xffffffffffffffff;
                _local_308 = CONCAT48(fVar9 * 0.0 - fVar15 * fVar10,_local_308);
                _local_308 = _local_308 & 0xffffffff |
                             (ulonglong)(uint)(fVar9 * fVar10 + fVar15 * 0.0) << 0x20;
                _local_2f8 = ZEXT1216(CONCAT84(CONCAT44(fVar12 * 0.0 + fVar13,fVar11 - 0.0),
                                               fVar9 * fVar10 - fVar15 * 0.0)) &
                             (undefined  [16])0xffffffffffffffff;
                local_2d8 = CONCAT412(0x3f800000,ZEXT812(0));
                local_2e8 = CONCAT124(local_2e8._0_12_ >> 0x20,fVar9 * 0.0 + fVar15 * fVar10) &
                            (undefined  [16])0xffffffffffffffff;
                local_2e8._0_12_ =
                        CONCAT48(fVar11 - fVar12 * fVar10,CONCAT44(fVar12 * 0.0 - fVar13,local_2e8._0_4_));
                local_318._0_8_ = local_168;
                local_318._8_8_ = local_160;
                puStack272 = (undefined *)FUN_1405b0600(lVar2,local_268);
                FUN_1401afb10(&local_168,local_158);
                local_118 = local_158;
                local_318 = CONCAT88(puStack272,local_118);
                FUN_1401afb10(&local_118,&local_2a8);
                fVar10 = fStack644 * fStack644;
                uVar6 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40,0),fVar10),0);
                uVar3 = uVar6 & 0xffffffff;
                fVar11 = local_288 * local_288 + (float)uVar3 + 0.0;
                auVar8 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,uVar6 << 0x20 | uVar3)),
                                 CONCAT412(fStack636 * fStack636,
                                           CONCAT48(fStack640 * fStack640,CONCAT44(fVar10,fVar11))));
                fVar10 = SUB164(auVar8,0);
                fVar10 = (3.0 - fVar11 * fVar10 * fVar10) * fVar16 * fVar10;
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
                fVar11 = fStack660 * fStack660;
                fVar13 = local_298 * local_298 + fVar11 + 0.0;
                auVar8 = rsqrtss(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar11))),
                                 CONCAT412(fStack652 * fStack652,
                                           CONCAT48(fStack656 * fStack656,CONCAT44(fVar11,fVar13))));
                fVar11 = SUB164(auVar8,0);
                fVar11 = (3.0 - fVar13 * fVar11 * fVar11) * fVar16 * fVar11;
                if (fVar11 <= 0.0) {
                    fVar11 = 0.0;
                }
                fVar13 = fStack676 * fStack676;
                fVar15 = local_2a8 * local_2a8 + fVar13 + 0.0;
                auVar8 = rsqrtss(CONCAT412(fVar13,CONCAT48(fVar13,CONCAT44(fVar13,fVar13))),
                                 CONCAT412(fStack668 * fStack668,
                                           CONCAT48(fStack672 * fStack672,CONCAT44(fVar13,fVar15))));
                fVar13 = SUB164(auVar8,0);
                fVar13 = (3.0 - fVar15 * fVar13 * fVar13) * fVar16 * fVar13;
                if (fVar13 <= 0.0) {
                    fVar13 = 0.0;
                }
                _local_308 = ZEXT816(CONCAT44(fVar13 * fStack676,fVar13 * local_2a8));
                _local_2f8 = ZEXT816(CONCAT44(fVar11 * fStack660,fVar11 * local_298));
                local_2e8 = ZEXT816(CONCAT44(fVar10 * fStack644,fVar10 * local_288));
                local_2d8 = CONCAT412(0x3f800000,ZEXT812(0)) & (undefined  [16])0xffffffffffffffff;
                puVar4 = (undefined4 *)FUN_1401b1d60(local_318,local_308);
                _auStack772 = SUB1612(_local_308 >> 0x20,0) &
                              SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0);
                local_2c8 = *puVar4;
                uStack708 = puVar4[1];
                uStack704 = puVar4[2];
                uStack700 = puVar4[3];
                _local_308 = CONCAT124(_auStack772,local_2ac);
                _local_2f8 = CONCAT88(local_318,&local_2c8);
                local_318 = ZEXT1216(CONCAT48(local_2b0,CONCAT44(local_2b4,local_2b8)));
                local_2f8._0_4_ = SUB84(&local_2c8,0);
                local_2f8._4_4_ = (undefined4)((ulonglong)&local_2c8 >> 0x20);
                uStack752 = SUB84(local_318,0);
                uStack748 = (undefined4)((ulonglong)local_318 >> 0x20);
                local_118 = (undefined *)CONCAT44(auStack772._0_4_,local_2ac);
                puStack272 = SUB128(_auStack772 >> 0x20,0);
                local_108 = local_2f8._0_4_;
                uStack260 = local_2f8._4_4_;
                uStack256 = uStack752;
                uStack252 = uStack748;
                FUN_1401b0590(&local_118,local_228);
                local_168 = (longlong *)(**(code **)(*plVar1 + 0x78))(plVar1,local_268);
                FUN_1401afc20(&local_168,local_158);
                local_118 = local_158;
                puStack272 = local_228;
                local_318._0_8_ = (longlong *)local_118;
                local_318._8_8_ = puStack272;
                FUN_1401afb10(&local_118,local_1e8);
                (**(code **)(*plVar1 + 0x28))(plVar1,local_1e8);
                (**(code **)(*param_1 + 0xa0))(param_1);
                local_168 = (longlong *)(**(code **)(*plVar1 + 0x78))(plVar1,local_268);
                uVar6 = 1;
                uVar5 = (**(code **)(*plVar1 + 0x90))(plVar1,&local_2a8,1);
                FUN_1401afc20(&local_168,local_158);
                local_118 = local_158;
                local_318 = CONCAT88(uVar5,local_118);
                puStack272 = (undefined *)uVar5;
                FUN_1401afb10(&local_118,local_1a8);
                if (1 < (ulonglong)param_1[0x27]) {
                    do {
                        plVar1 = *(longlong **)(param_1[0x26] + uVar6 * 8);
                        (**(code **)(*plVar1 + 0x28))(plVar1,local_1a8);
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < (ulonglong)param_1[0x27]);
                }
            }
            goto LAB_1404bfcfc;
        }
        plVar7 = plVar7 + 1;
    } while( true );
}



void FUN_1404bfd70(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x138) != 0) {
        do {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + uVar2 * 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x68))();
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x138));
    }
    return;
}



void FUN_1404bfdc0(longlong *param_1)

{
    longlong *plVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (param_1[0x27] != 0) {
        do {
            plVar1 = *(longlong **)(param_1[0x26] + uVar2 * 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x70))();
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < (ulonglong)param_1[0x27]);
    }
    // WARNING: Could not recover jumptable at 0x0001404bfe12. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0xa0))(param_1);
    return;
}



undefined8 FUN_1404bfe20(longlong param_1,longlong param_2)

{
    *(undefined8 *)(param_2 + 8) = 0;
    FUN_1403d86e0(param_2,param_1 + 0x130);
    return 0;
}



void FUN_1404bfee0(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 local_res10;
    undefined4 local_48 [2];
    longlong *local_40;
    code *local_38;
    undefined8 local_30;

    if (param_2 != (longlong *)0x0) {
        do {
            lVar1 = param_1[0x27];
            lVar4 = lVar1 + 1;
            lVar3 = FUN_14018db00(param_1[0x26],lVar4,8);
            *(longlong **)(lVar3 + lVar1 * 8) = param_2;
            if (param_1[0x26] != lVar3) {
                FUN_1407db590(lVar3,param_1[0x26],param_1[0x27] << 3);
                lVar1 = param_1[0x26];
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                param_1[0x26] = lVar3;
            }
            param_1[0x27] = lVar4;
            if (param_2[0x58] == 0) {
                (**(code **)*param_2)(param_2);
                local_48[0] = 0;
                local_38 = FUN_1404c66d0;
                local_30 = 0;
                local_40 = param_2;
                FUN_140195960(param_2 + 0x56,100,local_48);
                *(undefined4 *)(param_2 + 0x5f) = 0;
                *(undefined4 *)((longlong)param_2 + 0x2fc) = 1;
            }
            lVar4 = FUN_1405b1510(&DAT_140c7dfb0);
            if ((lVar4 != 0) && (*(int *)(lVar4 + 0xc0) == 3)) {
                (**(code **)(*param_1 + 0xa0))(param_1);
            }
            local_res10 = 0;
            iVar2 = (**(code **)(*param_2 + 0xd0))(param_2,&local_res10);
            if (-1 < iVar2) {
                (**(code **)(*param_1 + 0xa8))(param_1,local_res10);
            }
            param_2 = (longlong *)param_2[5];
        } while (param_2 != (longlong *)0x0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404c0060(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined auStack168 [32];
    undefined8 *local_88 [10];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    local_88[0] = param_3 + 0xc;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b68950;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = *param_3;
    param_1[0xb] = param_3[1];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_3 + 0x24);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 6);
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x44);
    uVar2 = *(undefined4 *)(param_3 + 9);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x4c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x13) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 10);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0x54);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_3 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_3 + 0x5c);
    uVar1 = *(undefined4 *)((longlong)param_3 + 100);
    uVar2 = *(undefined4 *)(param_3 + 0xd);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x6c);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)local_88[0];
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
    *(undefined4 *)(param_1 + 0x17) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0xf);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x7c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0xe);
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
    *(undefined4 *)(param_1 + 0x19) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x84);
    uVar2 = *(undefined4 *)(param_3 + 0x11);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x8c);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
    *(undefined4 *)(param_1 + 0x1b) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x94);
    uVar2 = *(undefined4 *)(param_3 + 0x13);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x9c);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0x1d) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar3;
    param_1[0x1e] = param_3[0x14];
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_3 + 0x15);
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x44);
    uVar2 = *(undefined4 *)(param_3 + 9);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x4c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
    *(undefined4 *)(param_1 + 0x21) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_3 + 10);
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_3 + 0x54);
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_3 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_3 + 0x5c);
    param_1[0x25] = param_2;
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x26) = param_4;
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    FUN_1404bd000(param_1 + 0x30,&DAT_140c78390);
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x34) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x35) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x36) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar1;
    *(undefined4 *)(param_1 + 0x37) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x38) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar1;
    *(undefined4 *)(param_1 + 0x39) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x3a) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar1;
    *(undefined4 *)(param_1 + 0x3b) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar3;
    uVar4 = *(int *)(param_2 + 0x9c) + 1;
    *(uint *)(param_2 + 0x9c) = uVar4;
    *(uint *)(param_1 + 0x3e) = *(int *)(param_2 + 0x98) << 0x18 | uVar4;
    FUN_1404bd000(param_1 + 0x40,&DAT_140c78390);
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x44) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x224) = uVar1;
    *(undefined4 *)(param_1 + 0x45) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x22c) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x46) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x234) = uVar1;
    *(undefined4 *)(param_1 + 0x47) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x23c) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x48) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x244) = uVar1;
    *(undefined4 *)(param_1 + 0x49) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x24c) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x4a) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x254) = uVar1;
    *(undefined4 *)(param_1 + 0x4b) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x25c) = uVar3;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)((longlong)param_1 + 0x284) = 1;
    param_1[0x51] = 1;
    *(undefined4 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 0;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x15);
    uVar1 = *(undefined4 *)(param_3 + 0x15);
    *(undefined4 *)(param_1 + 0x55) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar1;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x56) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x5f) = 1;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x344) = 0;
    FUN_1407e4830(param_1 + 0x28,0,0xb0);
    FUN_1401afc20(local_88,param_1 + 0x44);
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack168);
    return;
}



undefined8 FUN_1404c03d0(undefined8 param_1,ulonglong param_2)

{
    FUN_1404c0410();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404c0410(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int local_res8 [2];

    *param_1 = &PTR_LAB_140b68950;
    if (*(int *)(param_1 + 0xd) != 0) {
        local_res8[0] = *(int *)(param_1 + 0xd);
        FUN_1404cb7c0(DAT_140c659f8 + 0x100,local_res8);
    }
    lVar2 = FUN_140203da0(*(undefined4 *)(param_1 + 0xc));
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x20) != 0)) {
        for (plVar3 = DAT_140c7dfc0; plVar3 != DAT_140c7dfc8; plVar3 = plVar3 + 1) {
            lVar2 = *plVar3;
            if (*(int *)(lVar2 + 0xbc) == *(int *)(param_1[0x25] + 0x14)) {
                if (lVar2 != 0) {
                    FUN_1405ae1c0(lVar2,param_1,2);
                }
                break;
            }
        }
    }
    lVar2 = param_1[0x53];
    while (lVar2 != 0) {
        lVar1 = *(longlong *)(lVar2 + 0x28);
        if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
            **(longlong **)(lVar2 + 0x20) = lVar1;
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        lVar2 = lVar1;
    }
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(undefined8 *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_140195d70(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((undefined8 *)param_1[0x62] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x62] = param_1[99];
    }
    if ((undefined8 *)param_1[99] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[99] = param_1[0x62];
    }
    param_1[0x62] = 0;
    param_1[99] = 0;
    FUN_140195d70(param_1 + 0x56);
    *(undefined4 *)(param_1 + 0x56) = 0;
    if ((undefined8 *)param_1[0x58] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x58] = param_1[0x59];
    }
    if ((undefined8 *)param_1[0x59] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x59] = param_1[0x58];
    }
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    if (param_1[0x53] != 0) {
        FUN_1401a4a00(param_1 + 0x53);
    }
    if ((longlong *)param_1[0x4f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4f] + 8))();
    }
    if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4e] + 8))();
    }
    if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4d] + 8))();
    }
    if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4c] + 8))();
    }
    if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[8] = param_1[9];
    }
    if (param_1[9] != 0) {
        *(undefined8 *)(param_1[9] + 0x40) = param_1[8];
    }
    param_1[8] = 0;
    param_1[9] = 0;
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 *)(param_1[7] + 0x30) = param_1[6];
    }
    param_1[6] = 0;
    param_1[7] = 0;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(undefined8 *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_LAB_140b55048;
    return;
}



undefined8 FUN_1404c06c0(longlong param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 0x80) - 1U < 3) {
        return 1;
    }
    if ((*(int *)(param_1 + 0x80) == 4) && (iVar1 = FUN_140724910(), iVar1 != 0)) {
        return 1;
    }
    return 0;
}



void FUN_1404c0700(longlong param_1,int param_2)

{
    longlong lVar1;
    int local_res10 [6];
    int local_28 [2];
    longlong local_20;
    undefined local_18 [16];

    if (*(int *)(param_1 + 0x68) != 0) {
        local_res10[0] = *(int *)(param_1 + 0x68);
        FUN_1404cb7c0(DAT_140c659f8 + 0x100,local_res10);
    }
    *(int *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x290) = 1;
    FUN_1404c8200(*(undefined8 *)(param_1 + 0x128),param_2,param_1);
    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x68));
    if (lVar1 != 0) {
        FUN_1404c07b0(param_1,lVar1);
    }
    if (param_2 != 0) {
        local_28[0] = param_2;
        local_20 = param_1;
        FUN_140055f80(DAT_140c659f8 + 0x100,local_18,local_28);
    }
    return;
}



void FUN_1404c07b0(longlong *param_1,longlong param_2)

{
    int *piVar1;
    longlong lVar2;
    float fVar3;
    float local_58;
    float fStack84;
    int local_48;
    int iStack68;
    int iStack64;
    int iStack60;
    int local_38;
    int iStack52;
    int iStack48;
    int iStack44;
    int local_28;
    int iStack36;
    int iStack32;
    int iStack28;
    undefined8 local_18;

    piVar1 = *(int **)(param_2 + 0x1908);
    local_48 = piVar1[4];
    iStack68 = piVar1[5];
    iStack64 = piVar1[6];
    iStack60 = piVar1[7];
    local_38 = piVar1[8];
    iStack52 = piVar1[9];
    iStack48 = piVar1[10];
    iStack44 = piVar1[0xb];
    local_28 = piVar1[0xc];
    iStack36 = piVar1[0xd];
    iStack32 = piVar1[0xe];
    iStack28 = piVar1[0xf];
    local_18 = *(undefined8 *)(piVar1 + 0x10);
    if (*piVar1 == 0x4e) {
        *(undefined4 *)((longlong)param_1 + 0x28c) = 1;
        FUN_1404c3b50();
    }
    lVar2 = FUN_140203da0(*(undefined4 *)(param_1 + 0xc));
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
        (**(code **)(*param_1 + 0x90))(param_1,&local_58,0);
        *(undefined4 *)(param_2 + 0xea0) = 0;
        fVar3 = SQRT(local_58 * local_58 + fStack84 * fStack84 + 0.0);
        *(float *)(param_2 + 0xe94) = fVar3;
        *(float *)(param_2 + 0xe8c) = fVar3;
    }
    FUN_1404c6b10(param_1);
    return;
}



void FUN_1404c0ba0(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong *plVar14;
    longlong lVar15;
    undefined4 *puVar16;

    (**(code **)(*param_1 + 0xf8))(param_1,param_3);
    (**(code **)(*param_1 + 0x100))(param_1,param_3);
    if (*(int *)(param_1 + 0x26) != 0) {
        FUN_1404c0da0(param_1);
    }
    lVar15 = param_1[0x29];
    if ((lVar15 == 0) || (*(int *)(param_1 + 0x2a) == 0)) {
        lVar15 = *(longlong *)(param_2 + 2);
    }
    plVar10 = param_1 + 10;
    plVar14 = param_1 + 0x28;
    if ((((uint)plVar10 | (uint)plVar14) & 0xf) == 0) {
        lVar11 = 1;
        plVar9 = plVar10;
        do {
            plVar13 = plVar9;
            plVar12 = plVar14;
            uVar1 = *(undefined4 *)((longlong)plVar13 + 4);
            uVar2 = *(undefined4 *)(plVar13 + 1);
            uVar3 = *(undefined4 *)((longlong)plVar13 + 0xc);
            uVar4 = *(undefined4 *)(plVar13 + 2);
            uVar5 = *(undefined4 *)((longlong)plVar13 + 0x14);
            uVar6 = *(undefined4 *)(plVar13 + 3);
            uVar7 = *(undefined4 *)((longlong)plVar13 + 0x1c);
            *(undefined4 *)plVar12 = *(undefined4 *)plVar13;
            *(undefined4 *)((longlong)plVar12 + 4) = uVar1;
            *(undefined4 *)(plVar12 + 1) = uVar2;
            *(undefined4 *)((longlong)plVar12 + 0xc) = uVar3;
            uVar1 = *(undefined4 *)(plVar13 + 4);
            uVar2 = *(undefined4 *)((longlong)plVar13 + 0x24);
            uVar3 = *(undefined4 *)(plVar13 + 5);
            uVar8 = *(undefined4 *)((longlong)plVar13 + 0x2c);
            *(undefined4 *)(plVar12 + 2) = uVar4;
            *(undefined4 *)((longlong)plVar12 + 0x14) = uVar5;
            *(undefined4 *)(plVar12 + 3) = uVar6;
            *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar7;
            uVar4 = *(undefined4 *)(plVar13 + 6);
            uVar5 = *(undefined4 *)((longlong)plVar13 + 0x34);
            uVar6 = *(undefined4 *)(plVar13 + 7);
            uVar7 = *(undefined4 *)((longlong)plVar13 + 0x3c);
            *(undefined4 *)(plVar12 + 4) = uVar1;
            *(undefined4 *)((longlong)plVar12 + 0x24) = uVar2;
            *(undefined4 *)(plVar12 + 5) = uVar3;
            *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar8;
            uVar1 = *(undefined4 *)(plVar13 + 8);
            uVar2 = *(undefined4 *)((longlong)plVar13 + 0x44);
            uVar3 = *(undefined4 *)(plVar13 + 9);
            uVar8 = *(undefined4 *)((longlong)plVar13 + 0x4c);
            *(undefined4 *)(plVar12 + 6) = uVar4;
            *(undefined4 *)((longlong)plVar12 + 0x34) = uVar5;
            *(undefined4 *)(plVar12 + 7) = uVar6;
            *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar7;
            uVar4 = *(undefined4 *)(plVar13 + 10);
            uVar5 = *(undefined4 *)((longlong)plVar13 + 0x54);
            uVar6 = *(undefined4 *)(plVar13 + 0xb);
            uVar7 = *(undefined4 *)((longlong)plVar13 + 0x5c);
            *(undefined4 *)(plVar12 + 8) = uVar1;
            *(undefined4 *)((longlong)plVar12 + 0x44) = uVar2;
            *(undefined4 *)(plVar12 + 9) = uVar3;
            *(undefined4 *)((longlong)plVar12 + 0x4c) = uVar8;
            uVar1 = *(undefined4 *)(plVar13 + 0xc);
            uVar2 = *(undefined4 *)((longlong)plVar13 + 100);
            uVar3 = *(undefined4 *)(plVar13 + 0xd);
            uVar8 = *(undefined4 *)((longlong)plVar13 + 0x6c);
            *(undefined4 *)(plVar12 + 10) = uVar4;
            *(undefined4 *)((longlong)plVar12 + 0x54) = uVar5;
            *(undefined4 *)(plVar12 + 0xb) = uVar6;
            *(undefined4 *)((longlong)plVar12 + 0x5c) = uVar7;
            uVar4 = *(undefined4 *)(plVar13 + 0xe);
            uVar5 = *(undefined4 *)((longlong)plVar13 + 0x74);
            uVar6 = *(undefined4 *)(plVar13 + 0xf);
            uVar7 = *(undefined4 *)((longlong)plVar13 + 0x7c);
            *(undefined4 *)(plVar12 + 0xc) = uVar1;
            *(undefined4 *)((longlong)plVar12 + 100) = uVar2;
            *(undefined4 *)(plVar12 + 0xd) = uVar3;
            *(undefined4 *)((longlong)plVar12 + 0x6c) = uVar8;
            *(undefined4 *)(plVar12 + 0xe) = uVar4;
            *(undefined4 *)((longlong)plVar12 + 0x74) = uVar5;
            *(undefined4 *)(plVar12 + 0xf) = uVar6;
            *(undefined4 *)((longlong)plVar12 + 0x7c) = uVar7;
            lVar11 = lVar11 + -1;
            plVar14 = plVar12 + 0x10;
            plVar9 = plVar13 + 0x10;
        } while (lVar11 != 0);
        uVar1 = *(undefined4 *)((longlong)plVar13 + 0x84);
        uVar2 = *(undefined4 *)(plVar13 + 0x11);
        uVar3 = *(undefined4 *)((longlong)plVar13 + 0x8c);
        uVar5 = *(undefined4 *)(plVar13 + 0x12);
        uVar6 = *(undefined4 *)((longlong)plVar13 + 0x94);
        uVar7 = *(undefined4 *)(plVar13 + 0x13);
        uVar8 = *(undefined4 *)((longlong)plVar13 + 0x9c);
        *(undefined4 *)(plVar12 + 0x10) = *(undefined4 *)(plVar13 + 0x10);
        *(undefined4 *)((longlong)plVar12 + 0x84) = uVar1;
        *(undefined4 *)(plVar12 + 0x11) = uVar2;
        *(undefined4 *)((longlong)plVar12 + 0x8c) = uVar3;
        uVar1 = *(undefined4 *)(plVar13 + 0x14);
        uVar2 = *(undefined4 *)((longlong)plVar13 + 0xa4);
        uVar3 = *(undefined4 *)(plVar13 + 0x15);
        uVar4 = *(undefined4 *)((longlong)plVar13 + 0xac);
        *(undefined4 *)(plVar12 + 0x12) = uVar5;
        *(undefined4 *)((longlong)plVar12 + 0x94) = uVar6;
        *(undefined4 *)(plVar12 + 0x13) = uVar7;
        *(undefined4 *)((longlong)plVar12 + 0x9c) = uVar8;
        *(undefined4 *)(plVar12 + 0x14) = uVar1;
        *(undefined4 *)((longlong)plVar12 + 0xa4) = uVar2;
        *(undefined4 *)(plVar12 + 0x15) = uVar3;
        *(undefined4 *)((longlong)plVar12 + 0xac) = uVar4;
    }
    else {
        FUN_1407db590(plVar14,plVar10,0xb0);
    }
    if ((((uint)param_2 | (uint)plVar10) & 0xf) == 0) {
        lVar11 = 1;
        do {
            puVar16 = param_2;
            plVar14 = plVar10;
            uVar1 = puVar16[1];
            uVar2 = puVar16[2];
            uVar3 = puVar16[3];
            *(undefined4 *)plVar14 = *puVar16;
            *(undefined4 *)((longlong)plVar14 + 4) = uVar1;
            *(undefined4 *)(plVar14 + 1) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0xc) = uVar3;
            uVar1 = puVar16[5];
            uVar2 = puVar16[6];
            uVar3 = puVar16[7];
            *(undefined4 *)(plVar14 + 2) = puVar16[4];
            *(undefined4 *)((longlong)plVar14 + 0x14) = uVar1;
            *(undefined4 *)(plVar14 + 3) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar3;
            uVar1 = puVar16[9];
            uVar2 = puVar16[10];
            uVar3 = puVar16[0xb];
            *(undefined4 *)(plVar14 + 4) = puVar16[8];
            *(undefined4 *)((longlong)plVar14 + 0x24) = uVar1;
            *(undefined4 *)(plVar14 + 5) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x2c) = uVar3;
            uVar1 = puVar16[0xd];
            uVar2 = puVar16[0xe];
            uVar3 = puVar16[0xf];
            *(undefined4 *)(plVar14 + 6) = puVar16[0xc];
            *(undefined4 *)((longlong)plVar14 + 0x34) = uVar1;
            *(undefined4 *)(plVar14 + 7) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x3c) = uVar3;
            uVar1 = puVar16[0x11];
            uVar2 = puVar16[0x12];
            uVar3 = puVar16[0x13];
            *(undefined4 *)(plVar14 + 8) = puVar16[0x10];
            *(undefined4 *)((longlong)plVar14 + 0x44) = uVar1;
            *(undefined4 *)(plVar14 + 9) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x4c) = uVar3;
            uVar1 = puVar16[0x15];
            uVar2 = puVar16[0x16];
            uVar3 = puVar16[0x17];
            *(undefined4 *)(plVar14 + 10) = puVar16[0x14];
            *(undefined4 *)((longlong)plVar14 + 0x54) = uVar1;
            *(undefined4 *)(plVar14 + 0xb) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x5c) = uVar3;
            uVar1 = puVar16[0x19];
            uVar2 = puVar16[0x1a];
            uVar3 = puVar16[0x1b];
            *(undefined4 *)(plVar14 + 0xc) = puVar16[0x18];
            *(undefined4 *)((longlong)plVar14 + 100) = uVar1;
            *(undefined4 *)(plVar14 + 0xd) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x6c) = uVar3;
            uVar1 = puVar16[0x1d];
            uVar2 = puVar16[0x1e];
            uVar3 = puVar16[0x1f];
            *(undefined4 *)(plVar14 + 0xe) = puVar16[0x1c];
            *(undefined4 *)((longlong)plVar14 + 0x74) = uVar1;
            *(undefined4 *)(plVar14 + 0xf) = uVar2;
            *(undefined4 *)((longlong)plVar14 + 0x7c) = uVar3;
            lVar11 = lVar11 + -1;
            plVar10 = plVar14 + 0x10;
            param_2 = puVar16 + 0x20;
        } while (lVar11 != 0);
        uVar1 = puVar16[0x21];
        uVar2 = puVar16[0x22];
        uVar3 = puVar16[0x23];
        *(undefined4 *)(plVar14 + 0x10) = puVar16[0x20];
        *(undefined4 *)((longlong)plVar14 + 0x84) = uVar1;
        *(undefined4 *)(plVar14 + 0x11) = uVar2;
        *(undefined4 *)((longlong)plVar14 + 0x8c) = uVar3;
        uVar1 = puVar16[0x25];
        uVar2 = puVar16[0x26];
        uVar3 = puVar16[0x27];
        *(undefined4 *)(plVar14 + 0x12) = puVar16[0x24];
        *(undefined4 *)((longlong)plVar14 + 0x94) = uVar1;
        *(undefined4 *)(plVar14 + 0x13) = uVar2;
        *(undefined4 *)((longlong)plVar14 + 0x9c) = uVar3;
        uVar1 = puVar16[0x29];
        uVar2 = puVar16[0x2a];
        uVar3 = puVar16[0x2b];
        *(undefined4 *)(plVar14 + 0x14) = puVar16[0x28];
        *(undefined4 *)((longlong)plVar14 + 0xa4) = uVar1;
        *(undefined4 *)(plVar14 + 0x15) = uVar2;
        *(undefined4 *)((longlong)plVar14 + 0xac) = uVar3;
    }
    else {
        FUN_1407db590(plVar10,param_2,0xb0);
    }
    if (lVar15 == 0) {
        lVar15 = param_1[0x29];
    }
    param_1[0xb] = lVar15;
    *(undefined4 *)(param_1 + 0x26) = 1;
    *(uint *)((longlong)param_1 + 0x134) = (uint)(*(int *)((longlong)param_1 + 0x15c) != 0);
    (**(code **)(*param_1 + 0xe8))(param_1,param_3);
    // WARNING: Could not recover jumptable at 0x0001404c0d8d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0xf0))(param_1,param_3);
    return;
}



void FUN_1404c0da0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    longlong lVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    undefined4 *puVar13;

    puVar11 = (undefined4 *)(param_1 + 0x50);
    if ((((int)param_1 + 0x140U | (uint)puVar11) & 0xf) == 0) {
        lVar10 = 1;
        puVar9 = (undefined4 *)(param_1 + 0x140);
        do {
            puVar13 = puVar9;
            puVar12 = puVar11;
            uVar1 = puVar13[1];
            uVar2 = puVar13[2];
            uVar3 = puVar13[3];
            uVar4 = puVar13[4];
            uVar5 = puVar13[5];
            uVar6 = puVar13[6];
            uVar7 = puVar13[7];
            *puVar12 = *puVar13;
            puVar12[1] = uVar1;
            puVar12[2] = uVar2;
            puVar12[3] = uVar3;
            uVar1 = puVar13[8];
            uVar2 = puVar13[9];
            uVar3 = puVar13[10];
            uVar8 = puVar13[0xb];
            puVar12[4] = uVar4;
            puVar12[5] = uVar5;
            puVar12[6] = uVar6;
            puVar12[7] = uVar7;
            uVar4 = puVar13[0xc];
            uVar5 = puVar13[0xd];
            uVar6 = puVar13[0xe];
            uVar7 = puVar13[0xf];
            puVar12[8] = uVar1;
            puVar12[9] = uVar2;
            puVar12[10] = uVar3;
            puVar12[0xb] = uVar8;
            uVar1 = puVar13[0x10];
            uVar2 = puVar13[0x11];
            uVar3 = puVar13[0x12];
            uVar8 = puVar13[0x13];
            puVar12[0xc] = uVar4;
            puVar12[0xd] = uVar5;
            puVar12[0xe] = uVar6;
            puVar12[0xf] = uVar7;
            uVar4 = puVar13[0x14];
            uVar5 = puVar13[0x15];
            uVar6 = puVar13[0x16];
            uVar7 = puVar13[0x17];
            puVar12[0x10] = uVar1;
            puVar12[0x11] = uVar2;
            puVar12[0x12] = uVar3;
            puVar12[0x13] = uVar8;
            uVar1 = puVar13[0x18];
            uVar2 = puVar13[0x19];
            uVar3 = puVar13[0x1a];
            uVar8 = puVar13[0x1b];
            puVar12[0x14] = uVar4;
            puVar12[0x15] = uVar5;
            puVar12[0x16] = uVar6;
            puVar12[0x17] = uVar7;
            uVar4 = puVar13[0x1c];
            uVar5 = puVar13[0x1d];
            uVar6 = puVar13[0x1e];
            uVar7 = puVar13[0x1f];
            puVar12[0x18] = uVar1;
            puVar12[0x19] = uVar2;
            puVar12[0x1a] = uVar3;
            puVar12[0x1b] = uVar8;
            puVar12[0x1c] = uVar4;
            puVar12[0x1d] = uVar5;
            puVar12[0x1e] = uVar6;
            puVar12[0x1f] = uVar7;
            lVar10 = lVar10 + -1;
            puVar11 = puVar12 + 0x20;
            puVar9 = puVar13 + 0x20;
        } while (lVar10 != 0);
        uVar1 = puVar13[0x21];
        uVar2 = puVar13[0x22];
        uVar3 = puVar13[0x23];
        uVar5 = puVar13[0x24];
        uVar6 = puVar13[0x25];
        uVar7 = puVar13[0x26];
        uVar8 = puVar13[0x27];
        puVar12[0x20] = puVar13[0x20];
        puVar12[0x21] = uVar1;
        puVar12[0x22] = uVar2;
        puVar12[0x23] = uVar3;
        uVar1 = puVar13[0x28];
        uVar2 = puVar13[0x29];
        uVar3 = puVar13[0x2a];
        uVar4 = puVar13[0x2b];
        puVar12[0x24] = uVar5;
        puVar12[0x25] = uVar6;
        puVar12[0x26] = uVar7;
        puVar12[0x27] = uVar8;
        puVar12[0x28] = uVar1;
        puVar12[0x29] = uVar2;
        puVar12[0x2a] = uVar3;
        puVar12[0x2b] = uVar4;
    }
    else {
        FUN_1407db590(puVar11,param_1 + 0x140,0xb0);
    }
    FUN_1407e4830(param_1 + 0x140,0,0xb0);
    *(undefined8 *)(param_1 + 0x130) = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c0ed0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined4 *puVar5;
    undefined auStack472 [32];
    undefined local_1b8 [16];
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined8 uStack416;
    undefined8 local_198;
    undefined8 uStack400;
    undefined local_188 [64];
    undefined local_148 [64];
    undefined local_108 [64];
    longlong local_c8;
    undefined *local_c0;
    undefined local_b8 [64];
    undefined *local_78;
    undefined8 uStack112;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    local_198 = param_1 + 0x100;
    uStack416 = 0;
    local_1a8 = *(undefined4 *)(param_1 + 0x11c);
    uStack400 = local_1b8;
    local_1b8 = ZEXT1216(*(undefined (*) [12])(param_1 + 0x110));
    local_198._4_4_ = (undefined4)((ulonglong)local_198 >> 0x20);
    uStack400._4_4_ = (undefined4)((ulonglong)uStack400 >> 0x20);
    local_78 = (undefined *)CONCAT44(uStack420,local_1a8);
    uStack112 = 0;
    local_68 = (undefined4)local_198;
    uStack100 = local_198._4_4_;
    uStack96 = (undefined4)uStack400;
    uStack92 = uStack400._4_4_;
    FUN_1401b0590(&local_78,local_148);
    local_c8 = param_1 + 0x220;
    local_c0 = local_148;
    local_1b8 = CONCAT88(local_c0,local_c8);
    uVar4 = FUN_1404c27a0(param_1,local_108);
    FUN_1401afb10(&local_c8,local_b8);
    local_78 = local_b8;
    local_1b8 = CONCAT88(uVar4,local_78);
    uStack112 = uVar4;
    FUN_1401afb10(&local_78,local_188);
    puVar5 = (undefined4 *)FUN_1404bd000(&local_1a8,local_188);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)(param_1 + 0x90) = *puVar5;
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    *(undefined4 *)(param_1 + 0xa0) = puVar5[4];
    *(undefined4 *)(param_1 + 0xa4) = puVar5[5];
    *(undefined4 *)(param_1 + 0xa8) = puVar5[6];
    *(undefined4 *)(param_1 + 0xac) = puVar5[7];
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0xac);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack472);
    return;
}



void FUN_1404c1080(longlong *param_1)

{
    int iVar1;

    (**(code **)(*param_1 + 0x108))();
    if ((*(int *)(param_1 + 0x26) == 0) || (*(int *)(param_1 + 0x10) - 1U < 3)) {
        return;
    }
    if ((*(int *)(param_1 + 0x10) == 4) && (iVar1 = FUN_140724910(param_1), iVar1 != 0)) {
        return;
    }
    FUN_1404c9520();
    FUN_1404c69f0(param_1);
    return;
}



void FUN_1404c10e0(longlong param_1)

{
    longlong *plVar1;

    FUN_1404c2960();
    FUN_1404c96c0();
    plVar1 = *(longlong **)(param_1 + 0x270);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1,0,param_1);
    }
    FUN_140195d70(param_1 + 0x300);
    if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x260) + 8))();
        *(undefined8 *)(param_1 + 0x260) = 0;
    }
    if (*(longlong **)(param_1 + 0x268) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x268) + 8))();
        *(undefined8 *)(param_1 + 0x268) = 0;
    }
    if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x270) + 8))();
        *(undefined8 *)(param_1 + 0x270) = 0;
    }
    if (*(longlong **)(param_1 + 0x278) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 8))();
        *(undefined8 *)(param_1 + 0x278) = 0;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c1230(longlong param_1,undefined8 param_2)

{
    uint uVar1;
    undefined4 uVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;
    undefined auStack360 [32];
    undefined **local_148;
    undefined8 local_140;
    LPVOID local_138;
    undefined8 *local_130;
    undefined8 local_128;
    undefined8 local_118;
    undefined8 uStack272;
    undefined8 local_108;
    undefined8 uStack256;
    undefined8 *local_d8;
    undefined8 uStack208;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined8 *local_78;
    undefined8 local_70;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack360;
    for (plVar8 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
         plVar8 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18); plVar8 = plVar8 + 1) {
        lVar5 = *plVar8;
        if (*(int *)(lVar5 + 0xbc) == *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) {
            if (((lVar5 != 0) && (plVar8 = *(longlong **)(lVar5 + 0x118), plVar8 != (longlong *)0x0)) &&
                (lVar5 = (**(code **)(*plVar8 + 0x158))(plVar8), lVar5 != 0)) {
                plVar6 = (longlong *)(**(code **)(*plVar8 + 0x158))(plVar8);
                lVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
                if (lVar5 != 0) {
                    plVar6 = (longlong *)(**(code **)(*plVar8 + 0x158))(plVar8);
                    lVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
                    if ((*(int *)(lVar5 + 0xd0) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
                        if (1 < *(int *)(param_1 + 0x80) - 1U) goto LAB_1404c1365;
                        plVar6 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
                        plVar3 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
                        if (plVar6 == plVar3) goto LAB_1404c1365;
                        goto LAB_1404c1350;
                    }
                }
            }
            break;
        }
    }
    goto LAB_1404c16df;
    while (plVar6 = plVar6 + 1, plVar6 != plVar3) {
        LAB_1404c1350:
        lVar5 = *plVar6;
        if (*(int *)(lVar5 + 0xbc) == *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) {
            if ((lVar5 != 0) && (lVar5 = FUN_1402074e0(*(undefined4 *)(lVar5 + 0x44)), lVar5 != 0)) {
                if (*(int *)(param_1 + 0x80) == 2) {
                    uVar2 = *(undefined4 *)(lVar5 + 8);
                }
                else {
                    uVar2 = *(undefined4 *)(lVar5 + 4);
                }
                lVar5 = FUN_140203da0(uVar2);
                if ((lVar5 == 0) || (*(int *)(param_1 + 0x70) != *(int *)(lVar5 + 8))) {
                    local_140 = 0;
                    local_148 = &PTR_LAB_140b5e648;
                    local_138 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_148);
                    local_130 = (undefined8 *)0x141e04640;
                    puVar7 = &DAT_140c8ad48;
                    goto LAB_1404c1459;
                }
            }
            break;
        }
    }
    LAB_1404c1365:
    plVar6 = (longlong *)(**(code **)(*plVar8 + 0x158))(plVar8);
    lVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar1 = *(uint *)(param_1 + 0x70);
    if (uVar1 < *(uint *)(lVar5 + 0xd0)) {
        if (*(uint *)(param_1 + 0x74) <
            *(uint *)(*(longlong *)(lVar5 + 0xd8) + 4 + (ulonglong)uVar1 * 8)) {
            lVar9 = (ulonglong)
                    *(ushort *)
                            (*(longlong *)(lVar5 + 0xe8) +
                             (ulonglong)
                                     (*(int *)(*(longlong *)(lVar5 + 0xd8) + (ulonglong)uVar1 * 8) +
                                      *(uint *)(param_1 + 0x74)) * 2) * 0x38 + *(longlong *)(lVar5 + 200);
            lVar5 = FUN_140203520(*(undefined4 *)(param_1 + 0x6c));
            if ((lVar5 == 0) || (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x78))) {
                local_140 = 0;
                local_148 = &PTR_LAB_140b5e648;
                local_138 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_148);
                local_118 = local_148;
                local_130 = (undefined8 *)0x141e04358;
                local_108 = local_138;
                uStack272 = local_140;
                iVar4 = FUN_140196f30(&DAT_140c8ad40,0x2e,&local_130,&local_118);
                local_148 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_138);
                if (iVar4 != 0) {
                    DebugBreak();
                }
            }
            else {
                uStack272 = 0;
                local_118 = (undefined **)CONCAT44(local_118._4_4_,0x3f800000);
                uStack256 = (ulonglong)*(uint *)(param_1 + 0x78) * 0x30 + *(longlong *)(lVar9 + 0x20);
                local_108 = (LPVOID)(uStack256 + 0x20);
                local_d8 = (undefined8 *)CONCAT44(local_118._4_4_,0x3f800000);
                uStack208 = 0;
                local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                uStack256._4_4_ = (undefined4)((ulonglong)uStack256 >> 0x20);
                local_c8 = (undefined4)local_108;
                uStack196 = local_108._4_4_;
                uStack192 = (undefined4)uStack256;
                uStack188 = uStack256._4_4_;
                FUN_1401b0590(&local_d8,&local_118);
                local_130 = &local_118;
                if (*(int *)(param_1 + 0x78) == 0) {
                    local_128 = FUN_1404c27a0(param_1,&local_78);
                    local_d8 = local_130;
                    uStack208 = local_128;
                    FUN_1401afb10(&local_d8,param_2);
                }
                else {
                    local_128 = (**(code **)(*plVar8 + 0x38))(plVar8);
                    local_78 = local_130;
                    local_70 = local_128;
                    FUN_1401afb10(&local_78,param_2);
                }
            }
            goto LAB_1404c16df;
        }
        local_140 = 0;
        local_148 = &PTR_LAB_140b5e648;
        local_138 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_148);
        local_130 = (undefined8 *)0x141e04298;
        puVar7 = &DAT_140c8ad44;
    }
    else {
        local_140 = 0;
        local_148 = &PTR_LAB_140b5e648;
        local_138 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_148);
        local_130 = (undefined8 *)0x141e04338;
        puVar7 = &DAT_140c8ad4c;
    }
    LAB_1404c1459:
    local_118 = local_148;
    uStack272 = local_140;
    local_108 = local_138;
    iVar4 = FUN_140196f30(puVar7,0x2e,&local_130,&local_118);
    local_148 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_138);
    if (iVar4 != 0) {
        DebugBreak();
    }
    LAB_1404c16df:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack360);
    return;
}



void FUN_1404c1700(longlong *param_1)

{
    longlong **pplVar1;
    ulonglong uVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    short *psVar6;
    short *psVar7;
    longlong **pplVar8;
    short *psVar9;

    if (*(int *)(param_1 + 0x50) != 0) {
        FUN_1404c19c0();
        return;
    }
    plVar4 = (longlong *)(**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x20))();
    lVar5 = FUN_140203520(*(undefined4 *)((longlong)param_1 + 0x6c));
    if (lVar5 == 0) {
        return;
    }
    uVar2 = *(ulonglong *)(lVar5 + 8);
    psVar9 = (short *)0x0;
    psVar7 = psVar9;
    if (uVar2 != 0) {
        if (DAT_140c3fe70 < uVar2) {
            psVar7 = (short *)0x0;
        }
        else {
            psVar7 = (short *)(DAT_140c3fe68 + uVar2);
        }
    }
    iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,psVar7,param_1 + 0x4c,0);
    if (-1 < iVar3) {
        if (*(int *)(param_1 + 0x10) == 3) {
            uVar2 = *(ulonglong *)(lVar5 + 8);
            psVar7 = psVar9;
            if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                psVar7 = (short *)(DAT_140c3fe68 + uVar2);
            }
            iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,psVar7,param_1 + 0x4d,0);
            if (iVar3 < 0) goto LAB_1404c1937;
        }
        lVar5 = FUN_140203da0(*(undefined4 *)(param_1 + 0xc));
        if (lVar5 != 0) {
            uVar2 = *(ulonglong *)(lVar5 + 0x38);
            psVar7 = psVar9;
            if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                psVar7 = (short *)(DAT_140c3fe68 + uVar2);
            }
            psVar6 = psVar9;
            if (*psVar7 != 0) {
                do {
                    psVar6 = (short *)((longlong)psVar6 + 1);
                } while (psVar7[(longlong)psVar6] != 0);
                if (psVar6 != (short *)0x0) {
                    psVar7 = psVar9;
                    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                        psVar7 = (short *)(uVar2 + DAT_140c3fe68);
                    }
                    iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,psVar7,param_1 + 0x4f,0);
                    if (iVar3 < 0) goto LAB_1404c1937;
                }
            }
        }
        if ((*(int *)(param_1 + 0x26) == 0) || (iVar3 = FUN_1404c06c0(param_1), iVar3 != 0)) {
            LAB_1404c18e7:
            FUN_1404c6b10(param_1);
            iVar3 = (**(code **)(*param_1 + 0x20))(param_1);
            if (iVar3 != 0) {
                return;
            }
            pplVar8 = (longlong **)(param_1[0x25] + 0x90);
            if (param_1[2] != 0) {
                return;
            }
            param_1[2] = (longlong)pplVar8;
            pplVar1 = (longlong **)(param_1 + 3);
            *pplVar1 = *pplVar8;
            *pplVar8 = param_1;
            if (*pplVar1 == (longlong *)0x0) {
                return;
            }
            (*pplVar1)[2] = (longlong)pplVar1;
            return;
        }
        if ((DAT_140dc3190 & 1) == 0) {
            DAT_140dc3190 = DAT_140dc3190 | 1;
            DAT_140dc3198 = FUN_140203520(0xdd);
        }
        if (DAT_140dc3198 != 0) {
            uVar2 = *(ulonglong *)(DAT_140dc3198 + 8);
            if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                psVar9 = (short *)(DAT_140c3fe68 + uVar2);
            }
            iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,psVar9,param_1 + 0x4e,0);
            if (-1 < iVar3) goto LAB_1404c18e7;
        }
    }
    LAB_1404c1937:
    if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4c] + 8))();
        param_1[0x4c] = 0;
    }
    if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4d] + 8))();
        param_1[0x4d] = 0;
    }
    if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4e] + 8))();
        param_1[0x4e] = 0;
    }
    if ((longlong *)param_1[0x4f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4f] + 8))();
        param_1[0x4f] = 0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404c19c0(longlong *param_1)

{
    longlong **pplVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong **pplVar5;
    longlong *plVar6;
    char *pcVar7;
    undefined *puVar8;
    float fVar9;
    undefined auStack296 [32];
    longlong *local_108;
    undefined4 *local_100;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8 [52];
    float local_84;
    longlong *local_78;
    undefined4 *local_70;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    local_f8 = _DAT_140c78390;
    uStack244 = uRam0000000140c78394;
    uStack240 = uRam0000000140c78398;
    uStack236 = uRam0000000140c7839c;
    local_e8 = _DAT_140c783a0;
    uStack228 = uRam0000000140c783a4;
    uStack224 = uRam0000000140c783a8;
    uStack220 = uRam0000000140c783ac;
    local_d8 = _DAT_140c783b0;
    uStack212 = uRam0000000140c783b4;
    uStack208 = uRam0000000140c783b8;
    uStack204 = uRam0000000140c783bc;
    local_c8 = _DAT_140c783c0;
    uStack196 = uRam0000000140c783c4;
    uStack192 = uRam0000000140c783c8;
    uStack188 = uRam0000000140c783cc;
    iVar2 = (**(code **)(*param_1 + 0x110))(param_1,&local_f8);
    if (iVar2 == 0) goto LAB_1404c1d42;
    if (((*(int *)(param_1 + 0x26) == 0) || (*(int *)(param_1 + 0x10) - 1U < 3)) ||
        ((*(int *)(param_1 + 0x10) == 4 && (iVar2 = FUN_140724910(param_1), iVar2 != 0)))) {
        (**(code **)(*param_1 + 0x130))(param_1,&local_f8);
    }
    else {
        FUN_1404c1ff0(param_1,&local_f8);
    }
    if (*(int *)(param_1 + 0x26) != 0) {
        local_100 = &local_f8;
        plVar6 = param_1 + 0x44;
        local_108 = plVar6;
        local_78 = plVar6;
        local_70 = local_100;
        FUN_1401afb10(&local_78,local_b8);
        iVar2 = (**(code **)(*param_1 + 0x128))(param_1,local_b8);
        *(uint *)(param_1 + 0x51) = (uint)(iVar2 == 0);
        iVar2 = *(int *)(param_1 + 0x10);
        if (((iVar2 - 5U & 0xfffffffa) == 0) || (iVar2 == 6)) {
            local_100 = &local_f8;
            local_108 = plVar6;
            local_78 = plVar6;
            local_70 = local_100;
            FUN_1401afb10(&local_78,local_b8);
            uVar3 = (**(code **)(*param_1 + 0x118))(param_1,local_b8);
            puVar8 = &DAT_1409ebd74;
            pcVar7 = "HousingFreePlaceDecorPlaced";
            *(undefined4 *)((longlong)param_1 + 0x284) = uVar3;
            LAB_1404c1b75:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),pcVar7,puVar8,
                          *(undefined4 *)(param_1 + 0x3e));
        }
        else if (iVar2 == 7) {
            *(undefined4 *)((longlong)param_1 + 0x284) = 1;
            puVar8 = &DAT_1409ebe4c;
            pcVar7 = "HousingHookDecorPlaced";
            goto LAB_1404c1b75;
        }
        if (*(int *)(param_1 + 0x26) != 0) goto LAB_1404c1d42;
    }
    if ((2 < *(int *)(param_1 + 0x10) - 1U) &&
        ((*(int *)(param_1 + 0x10) != 4 || (iVar2 = FUN_140724910(param_1), iVar2 == 0)))) {
        lVar4 = FUN_140200220(1099);
        if (lVar4 == 0) {
            fVar9 = -80.0;
        }
        else {
            fVar9 = *(float *)(lVar4 + 0x18);
        }
        (**(code **)(*param_1 + 0xb0))(param_1,local_b8);
        if ((fVar9 <= local_84) || (*(int *)(param_1 + 0x10) == 6)) {
            plVar6 = (longlong *)param_1[8];
            if (plVar6 != (longlong *)0x0) {
                *plVar6 = param_1[9];
                plVar6 = (longlong *)param_1[9];
                if (plVar6 != (longlong *)0x0) {
                    plVar6[8] = param_1[8];
                }
                param_1[8] = 0;
                param_1[9] = 0;
            }
            if ((param_1[6] == 0) &&
                (pplVar5 = (longlong **)FUN_1404bca30(plVar6,param_1[10]), param_1[6] == 0)) {
                param_1[6] = (longlong)pplVar5;
                pplVar1 = (longlong **)(param_1 + 7);
                *pplVar1 = *pplVar5;
                *pplVar5 = param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[6] = (longlong)pplVar1;
                }
            }
        }
        else {
            plVar6 = (longlong *)param_1[6];
            if (plVar6 != (longlong *)0x0) {
                *plVar6 = param_1[7];
                plVar6 = (longlong *)param_1[7];
                if (plVar6 != (longlong *)0x0) {
                    plVar6[6] = param_1[6];
                }
                param_1[6] = 0;
                param_1[7] = 0;
            }
            if ((param_1[8] == 0) &&
                (pplVar5 = (longlong **)FUN_1404bc9b0(plVar6,param_1[10]), param_1[8] == 0)) {
                param_1[8] = (longlong)pplVar5;
                pplVar1 = (longlong **)(param_1 + 9);
                *pplVar1 = *pplVar5;
                *pplVar5 = param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[8] = (longlong)pplVar1;
                }
            }
        }
        lVar4 = FUN_140203da0(*(undefined4 *)(param_1 + 0xc));
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) != 0)) {
            for (plVar6 = DAT_140c7dfc0; plVar6 != DAT_140c7dfc8; plVar6 = plVar6 + 1) {
                lVar4 = *plVar6;
                if (*(int *)(lVar4 + 0xbc) == *(int *)(param_1[0x25] + 0x14)) {
                    if (lVar4 != 0) {
                        FUN_1405ae1c0(lVar4,param_1,0);
                    }
                    break;
                }
            }
        }
    }
    LAB_1404c1d42:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack296);
    return;
}



void FUN_1404c1d60(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined auStack296 [32];
    longlong *local_108;
    undefined8 local_100;
    undefined **local_f8;
    undefined8 local_f0;
    LPVOID local_e8;
    longlong local_e0;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined local_b8 [64];
    undefined **local_78;
    undefined8 local_70;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    plVar1 = (longlong *)param_1[0x4f];
    plVar2 = *(longlong **)(DAT_140c65898 + 0x7248);
    plVar6 = (longlong *)0x0;
    if ((plVar1 == (longlong *)0x0) || (*DAT_140c659f0 == 0)) {
        if ((undefined8 *)param_1[0x4c] != (undefined8 *)0x0) {
            (***(code ***)(undefined8 *)param_1[0x4c])();
            plVar6 = (longlong *)param_1[0x4c];
        }
    }
    else {
        if (param_1[0x4c] == 0) goto LAB_1404c1fcb;
        (**(code **)(*plVar1 + 0x380))(plVar1,9);
        (**(code **)(*(longlong *)param_1[0x4c] + 0x48))((longlong *)param_1[0x4c],&DAT_140c78390);
        if ((undefined8 *)param_1[0x4f] != (undefined8 *)0x0) {
            (***(code ***)(undefined8 *)param_1[0x4f])();
            plVar6 = (longlong *)param_1[0x4f];
        }
    }
    plVar1 = param_1 + 0x24;
    if (*plVar1 != 0) {
        FUN_1404c2960(param_1);
    }
    local_f8 = (undefined **)(param_1 + 0x44);
    local_f0 = param_2;
    local_78 = local_f8;
    local_70 = param_2;
    FUN_1401afb10(&local_78,local_b8);
    for (plVar5 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0xce) + 0x10);
         plVar5 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0xce) + 0x18); plVar5 = plVar5 + 1) {
        lVar3 = *plVar5;
        if (*(int *)(lVar3 + 0xbc) == *(int *)(param_1[0x25] + 0x14)) {
            if (lVar3 != 0) {
                local_100 = *(undefined8 *)(lVar3 + 0x118);
                goto LAB_1404c1eab;
            }
            break;
        }
    }
    local_100 = 0;
    LAB_1404c1eab:
    local_e0 = param_1[0xb];
    local_108 = plVar1;
    iVar4 = (**(code **)(*plVar2 + 200))(plVar2,local_b8,plVar6,&local_e0);
    if (iVar4 < 0) {
        local_f0 = 0;
        local_f8 = &PTR_LAB_140b5e648;
        local_e8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_f8);
        local_d8 = local_f8;
        local_e0 = 0x141e04198;
        local_c8 = local_e8;
        local_d0 = local_f0;
        iVar4 = FUN_140196f30(&DAT_140c8ad30,0x2e,&local_e0,&local_d8);
        local_f8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_e8);
        if (iVar4 != 0) {
            DebugBreak();
        }
    }
    else {
        FUN_1404c7ff0(param_1[0x25],*plVar1,param_1);
        (**(code **)(*param_1 + 0x68))(param_1);
    }
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
    }
    LAB_1404c1fcb:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack296);
    return;
}



void FUN_1404c1ff0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    plVar1 = *(longlong **)(DAT_140c65898 + 0x7248);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar4 = FUN_140203520(*(undefined4 *)(param_1 + 0x6c));
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(param_1 + 0x260), lVar4 != 0)) &&
        (plVar6 = *(longlong **)(param_1 + 0x270), plVar6 != (longlong *)0x0)) {
        plVar2 = *(longlong **)(param_1 + 0x278);
        if ((plVar2 != (longlong *)0x0) && (*DAT_140c659f0 != 0)) {
            (**(code **)(*plVar2 + 0x380))(plVar2,9);
            plVar6 = *(longlong **)(param_1 + 0x270);
            lVar4 = *(longlong *)(param_1 + 0x278);
        }
        (**(code **)(*plVar6 + 0x380))(plVar6,9,lVar4);
        local_res8 = *(undefined8 *)(param_1 + 0x58);
        lVar4 = *plVar1;
        uVar5 = FUN_1404c2740(param_1);
        iVar3 = (**(code **)(lVar4 + 200))
                (plVar1,param_2,*(undefined8 *)(param_1 + 0x270),&local_res8,
                 (longlong **)(param_1 + 0x120),uVar5);
        if (iVar3 < 0) {
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res8 = 0x141e04268;
            local_18 = local_38;
            local_20 = local_40;
            iVar3 = FUN_140196f30(&DAT_140c8ad34,0x2e,&local_res8,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar3 != 0) {
                DebugBreak();
            }
        }
        else {
            plVar1 = *(longlong **)(param_1 + 0x120);
            (**(code **)(*plVar1 + 0x128))(plVar1,0);
        }
    }
    return;
}



void FUN_1404c21c0(longlong param_1)

{
    longlong **pplVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined *puVar5;
    undefined4 *puVar6;
    undefined8 uVar7;
    longlong *local_res8;
    undefined8 local_res10;
    undefined8 local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
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

    pplVar1 = (longlong **)(param_1 + 0x120);
    if (*pplVar1 != (longlong *)0x0) {
        local_res8 = (longlong *)0x0;
        plVar3 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
        (**(code **)(*plVar3 + 0x3d8))(plVar3,9,&local_res8);
        if (local_res8 == (longlong *)0x0) {
            plVar3 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
            lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
            if (lVar4 == 0) {
                puVar5 = &DAT_1409f095c;
            }
            else {
                plVar3 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
                puVar5 = (undefined *)(**(code **)(*plVar3 + 0x30))(plVar3);
            }
            local_a0 = 0;
            local_a8 = &PTR_LAB_140b5e648;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_88 = local_a8;
            local_res10 = 0x141e04590;
            local_80 = local_a0;
            local_78 = local_98;
            iVar2 = FUN_1401971e0(&DAT_140c8ad38,0x2e,&local_res10,puVar5,&local_88);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_98);
            if (iVar2 != 0) {
                DebugBreak();
            }
        }
        else {
            (**(code **)*local_res8)();
            (**(code **)(*local_res8 + 0x3a8))();
            puVar6 = (undefined4 *)(**(code **)(**pplVar1 + 0x38))();
            local_68 = *puVar6;
            uStack100 = puVar6[1];
            uStack96 = puVar6[2];
            uStack92 = puVar6[3];
            local_58 = puVar6[4];
            uStack84 = puVar6[5];
            uStack80 = puVar6[6];
            uStack76 = puVar6[7];
            local_48 = puVar6[8];
            uStack68 = puVar6[9];
            uStack64 = puVar6[10];
            uStack60 = puVar6[0xb];
            local_38 = puVar6[0xc];
            uStack52 = puVar6[0xd];
            uStack48 = puVar6[0xe];
            uStack44 = puVar6[0xf];
            FUN_1404c2960(param_1);
            plVar3 = *(longlong **)(DAT_140c65898 + 0x7248);
            local_res10 = *(undefined8 *)(param_1 + 0x58);
            lVar4 = *plVar3;
            uVar7 = FUN_1404c2740(param_1);
            iVar2 = (**(code **)(lVar4 + 200))(plVar3,&local_68,local_res8,&local_res10,pplVar1,uVar7);
            if (iVar2 < 0) {
                local_a0 = 0;
                local_a8 = &PTR_LAB_140b5e648;
                local_98 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_a8);
                local_88 = local_a8;
                local_res10 = 0x141e03f98;
                local_78 = local_98;
                local_80 = local_a0;
                iVar2 = FUN_140196f30(&DAT_140c8ad3c,0x2e,&local_res10,&local_88);
                local_a8 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_98);
                if (iVar2 != 0) {
                    DebugBreak();
                }
            }
            else {
                local_a8 = (undefined **)CONCAT44(local_a8._4_4_,0xffffffff);
                (**(code **)(**pplVar1 + 0x28))(*pplVar1,&local_a8);
                FUN_1404c7ff0(*(undefined8 *)(param_1 + 0x128),*pplVar1,param_1);
            }
            (**(code **)(*local_res8 + 8))();
            if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x270) + 8))();
                *(undefined8 *)(param_1 + 0x270) = 0;
            }
            (**(code **)(**pplVar1 + 0x128))(*pplVar1,0);
        }
        if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 8))();
        }
    }
    return;
}



void FUN_1404c24b0(longlong param_1)

{
    longlong **pplVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *local_res8;
    undefined8 local_res10;
    undefined8 local_98;
    longlong *local_90;
    LPVOID local_88;
    undefined **local_78;
    longlong *local_70;
    LPVOID local_68;
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
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    pplVar1 = (longlong **)(param_1 + 0x120);
    if ((*pplVar1 != (longlong *)0x0) && (*DAT_140c659f0 == 0)) {
        local_res8 = (longlong *)0x0;
        plVar3 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
        (**(code **)(*plVar3 + 0x3d8))(plVar3,9,&local_res8);
        if (local_res8 == (longlong *)0x0) {
            local_90 = local_res8;
            local_98 = &PTR_LAB_140b5e648;
            local_88 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_98);
            local_78 = local_98;
            local_res10 = 0x141e04048;
            local_68 = local_88;
            local_70 = local_90;
            iVar2 = FUN_140196f30(&DAT_140c8ad28,0x2e,&local_res10,&local_78);
            local_98 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_88);
            if (iVar2 != 0) {
                DebugBreak();
            }
        }
        else {
            (**(code **)*local_res8)();
            (**(code **)(*local_res8 + 0x3a8))();
            puVar4 = (undefined4 *)(**(code **)(**pplVar1 + 0x38))();
            local_58 = *puVar4;
            uStack84 = puVar4[1];
            uStack80 = puVar4[2];
            uStack76 = puVar4[3];
            local_48 = puVar4[4];
            uStack68 = puVar4[5];
            uStack64 = puVar4[6];
            uStack60 = puVar4[7];
            local_38 = puVar4[8];
            uStack52 = puVar4[9];
            uStack48 = puVar4[10];
            uStack44 = puVar4[0xb];
            local_28 = puVar4[0xc];
            uStack36 = puVar4[0xd];
            uStack32 = puVar4[0xe];
            uStack28 = puVar4[0xf];
            FUN_1404c2960(param_1);
            plVar3 = *(longlong **)(DAT_140c65898 + 0x7248);
            local_res10 = *(undefined8 *)(param_1 + 0x58);
            lVar6 = *plVar3;
            uVar5 = FUN_1404c2740(param_1);
            iVar2 = (**(code **)(lVar6 + 200))(plVar3,&local_58,local_res8,&local_res10,pplVar1,uVar5);
            if (iVar2 < 0) {
                local_90 = (longlong *)0x0;
                local_98 = &PTR_LAB_140b5e648;
                local_88 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_98);
                local_78 = local_98;
                local_res10 = 0x141e04238;
                local_68 = local_88;
                local_70 = local_90;
                iVar2 = FUN_140196f30(&DAT_140c8ad2c,0x2e,&local_res10,&local_78);
                local_98 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_88);
                if (iVar2 != 0) {
                    DebugBreak();
                }
            }
            else {
                local_98 = (undefined **)CONCAT44(local_98._4_4_,0xffffffff);
                (**(code **)(**pplVar1 + 0x28))(*pplVar1,&local_98);
                FUN_1404c7ff0(*(undefined8 *)(param_1 + 0x128),*pplVar1,param_1);
            }
            (**(code **)(*local_res8 + 8))();
            (**(code **)(**pplVar1 + 0x128))(*pplVar1,0);
        }
        if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 8))();
        }
    }
    return;
}



undefined8 FUN_1404c2740(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    while( true ) {
        if (plVar2 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            return 0;
        }
        lVar1 = *plVar2;
        if (*(int *)(lVar1 + 0xbc) == *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) break;
        plVar2 = plVar2 + 1;
    }
    if (lVar1 == 0) {
        return 0;
    }
    return *(undefined8 *)(lVar1 + 0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_1404c27a0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong *plVar5;
    undefined4 *puVar6;

    uVar4 = uRam0000000140c7839c;
    uVar3 = uRam0000000140c78398;
    uVar2 = uRam0000000140c78394;
    plVar5 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    do {
        if (plVar5 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            LAB_1404c27e7:
            *param_2 = _DAT_140c78390;
            param_2[1] = uVar2;
            param_2[2] = uVar3;
            param_2[3] = uVar4;
            uVar4 = uRam0000000140c783ac;
            uVar3 = uRam0000000140c783a8;
            uVar2 = uRam0000000140c783a4;
            param_2[4] = _DAT_140c783a0;
            param_2[5] = uVar2;
            param_2[6] = uVar3;
            param_2[7] = uVar4;
            uVar4 = uRam0000000140c783bc;
            uVar3 = uRam0000000140c783b8;
            uVar2 = uRam0000000140c783b4;
            param_2[8] = _DAT_140c783b0;
            param_2[9] = uVar2;
            param_2[10] = uVar3;
            param_2[0xb] = uVar4;
            uVar4 = uRam0000000140c783cc;
            uVar3 = uRam0000000140c783c8;
            uVar2 = uRam0000000140c783c4;
            param_2[0xc] = _DAT_140c783c0;
            param_2[0xd] = uVar2;
            param_2[0xe] = uVar3;
            param_2[0xf] = uVar4;
            return param_2;
        }
        lVar1 = *plVar5;
        if (*(int *)(lVar1 + 0xbc) == *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) {
            if (lVar1 != 0) {
                if (*(int *)(param_1 + 0x7c) != 0) {
                    FUN_1405b0600(lVar1,param_2);
                    return param_2;
                }
                if (*(longlong **)(lVar1 + 0x118) == (longlong *)0x0) {
                    puVar6 = (undefined4 *)&DAT_140c78390;
                }
                else {
                    puVar6 = (undefined4 *)(**(code **)(**(longlong **)(lVar1 + 0x118) + 0x38))();
                }
                uVar2 = puVar6[1];
                uVar3 = puVar6[2];
                uVar4 = puVar6[3];
                *param_2 = *puVar6;
                param_2[1] = uVar2;
                param_2[2] = uVar3;
                param_2[3] = uVar4;
                uVar2 = puVar6[5];
                uVar3 = puVar6[6];
                uVar4 = puVar6[7];
                param_2[4] = puVar6[4];
                param_2[5] = uVar2;
                param_2[6] = uVar3;
                param_2[7] = uVar4;
                uVar2 = puVar6[9];
                uVar3 = puVar6[10];
                uVar4 = puVar6[0xb];
                param_2[8] = puVar6[8];
                param_2[9] = uVar2;
                param_2[10] = uVar3;
                param_2[0xb] = uVar4;
                uVar2 = puVar6[0xd];
                uVar3 = puVar6[0xe];
                uVar4 = puVar6[0xf];
                param_2[0xc] = puVar6[0xc];
                param_2[0xd] = uVar2;
                param_2[0xe] = uVar3;
                param_2[0xf] = uVar4;
                return param_2;
            }
            goto LAB_1404c27e7;
        }
        plVar5 = plVar5 + 1;
    } while( true );
}



void FUN_1404c2910(void)

{
    longlong in_stack_00000030;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (in_stack_00000030 != 0) {
        local_20 = in_stack_00000030;
        local_28[0] = 0;
        local_18 = FUN_1404c21c0;
        local_10 = 0;
        FUN_140195960(in_stack_00000030 + 0x300,0,local_28,4);
    }
    return;
}



void FUN_1404c2960(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;

    FUN_1404c80a0(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x120));
    lVar1 = DAT_140c659f0;
    if (*(longlong *)(DAT_140c659f0 + 0x90) == *(longlong *)(param_1 + 0x120)) {
        if (*(longlong **)(DAT_140c659f0 + 0x90) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(DAT_140c659f0 + 0x90) + 8))();
            *(undefined8 *)(lVar1 + 0x90) = 0;
        }
        *(undefined4 *)(lVar1 + 0xa0) = 0;
    }
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x120) + 8))();
        *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    lVar1 = FUN_140203da0(*(undefined4 *)(param_1 + 0x60));
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) {
        plVar2 = DAT_140c7dfc0;
        if (DAT_140c7dfc0 != DAT_140c7dfc8) {
            while (lVar1 = *plVar2,
                    *(int *)(lVar1 + 0xbc) != *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) {
                plVar2 = plVar2 + 1;
                if (plVar2 == DAT_140c7dfc8) {
                    return;
                }
            }
            if (lVar1 != 0) {
                FUN_1405ae1c0(lVar1,param_1,1);
            }
        }
    }
    return;
}



undefined4 FUN_1404c2fd0(longlong *param_1,undefined8 param_2)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    if ((longlong *)param_1[0x4c] == (longlong *)0x0) {
        return 0;
    }
    puVar2 = (undefined4 *)(**(code **)(*(longlong *)param_1[0x4c] + 0x50))();
    local_48 = *puVar2;
    uStack68 = puVar2[1];
    uStack64 = puVar2[2];
    uStack60 = puVar2[3];
    local_38 = puVar2[4];
    uStack52 = puVar2[5];
    uStack48 = puVar2[6];
    uStack44 = puVar2[7];
    local_28 = puVar2[8];
    uStack36 = puVar2[9];
    uStack32 = puVar2[10];
    uStack28 = puVar2[0xb];
    local_18 = puVar2[0xc];
    uStack20 = puVar2[0xd];
    uStack16 = puVar2[0xe];
    uStack12 = puVar2[0xf];
    (**(code **)(*(longlong *)param_1[0x4c] + 0x48))((longlong *)param_1[0x4c],param_2);
    uVar1 = (**(code **)(*param_1 + 0x120))(param_1);
    (**(code **)(*(longlong *)param_1[0x4c] + 0x48))((longlong *)param_1[0x4c],&local_48);
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1404c3730(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined (*pauVar4) [16];
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong *plVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    int iVar14;
    int iVar15;
    uint uVar16;
    float fVar17;
    float fVar19;
    undefined auVar18 [16];
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;

    lVar3 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar3 == 0) {
        return 1;
    }
    if (*(longlong **)(param_1 + 0x260) == (longlong *)0x0) {
        return 0;
    }
    pauVar4 = (undefined (*) [16])(**(code **)(**(longlong **)(param_1 + 0x260) + 0x50))();
    fVar26 = 0.5;
    fVar27 = 0.5;
    uVar22 = 0x45000000;
    uVar23 = 0x45000000;
    uVar24 = 0x45000000;
    uVar25 = 0x45000000;
    uVar10 = 0;
    local_a8 = *pauVar4;
    local_98 = pauVar4[1];
    local_88 = *(undefined4 *)pauVar4[2];
    uStack132 = *(undefined4 *)(pauVar4[2] + 4);
    uStack128 = *(undefined4 *)(pauVar4[2] + 8);
    uStack124 = *(undefined4 *)(pauVar4[2] + 0xc);
    iVar15 = (int)((*(float *)pauVar4[3] * DAT_140c43fb8 + 0.5) * 2048.0);
    iVar14 = (int)((*(float *)(pauVar4[3] + 8) * DAT_140c43fb8 + 0.5) * 2048.0);
    if (*(int *)(lVar3 + 0x110) != 0) {
        fVar21 = 30.0;
        fVar28 = 715.0;
        do {
            plVar11 = (longlong *)0x0;
            plVar7 = plVar11;
            if (uVar10 < (ulonglong)(*(longlong *)(lVar3 + 0x100) - *(longlong *)(lVar3 + 0xf8) >> 3)) {
                plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0xf8) + uVar10 * 8);
            }
            uVar1 = *(undefined4 *)((longlong)plVar7 + 0xc);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c65340 == 0) && (iVar2 = FUN_140205d40(), -1 < iVar2)) {
                    lVar5 = (**(code **)(*DAT_140c63c30 + 0x18))(DAT_140c63c30,uVar1);
                    goto LAB_1404c38c8;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar1,DAT_140c63858);
                LAB_1404c38c8:
                if (lVar5 != 0) {
                    plVar7 = plVar11;
                    if (uVar10 < (ulonglong)(*(longlong *)(lVar3 + 0x100) - *(longlong *)(lVar3 + 0xf8) >> 3))
                    {
                        plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0xf8) + uVar10 * 8);
                    }
                    lVar6 = FUN_140206c60(*(undefined4 *)((longlong)plVar7 + 4));
                    if (((lVar6 != 0) && (*(int *)(lVar6 + 0xd0) == 2)) &&
                        (lVar5 = FUN_14024c200(*(undefined4 *)(lVar5 + 4)), lVar5 != 0)) {
                        if (((*(int *)(lVar5 + 8) <= iVar15) && (iVar15 < *(int *)(lVar5 + 0x10))) &&
                            ((*(int *)(lVar5 + 0xc) <= iVar14 && (iVar14 < *(int *)(lVar5 + 0x14))))) {
                            return 1;
                        }
                        lVar6 = FUN_140200220(0x3d0);
                        fVar20 = fVar21;
                        if (lVar6 != 0) {
                            fVar20 = *(float *)(lVar6 + 0x18);
                        }
                        auVar18 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar5 + 0xc),
                                                         (float)(int)*(undefined8 *)(lVar5 + 8))),
                                        CONCAT412(uVar25,CONCAT48(uVar24,CONCAT44(uVar23,uVar22))));
                        fVar17 = (SUB164(auVar18,0) - fVar26) * 65536.0;
                        fVar19 = (SUB164(auVar18 >> 0x20,0) - fVar27) * 65536.0;
                        local_a8 = ZEXT1216((SUB1612(CONCAT88(SUB168(CONCAT412(fVar19,CONCAT48(fVar19,CONCAT44(
                                                                      fVar19,fVar17))) >> 0x40,0),
                                                              (ulonglong)(uint)fVar17),0) |
                        SUB1612((undefined  [16])0xc432c00000000000,0)) &
                                SUB1612((undefined  [16])0xffffffffffffffff,0));
                        auVar18 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar5 + 0x14),
                                                         (float)*(int *)(lVar5 + 0x10))),
                                        CONCAT412(uVar25,CONCAT48(uVar24,CONCAT44(uVar23,uVar22))));
                        local_98 = ZEXT1216(CONCAT48((SUB164(auVar18 >> 0x20,0) - fVar27) * 65536.0,
                                                     CONCAT44(fVar20 - fVar28,
                                                              (SUB164(auVar18,0) - fVar26) * 65536.0)));
                        plVar7 = (longlong *)FUN_14018b280(0x38);
                        if (plVar7 != (longlong *)0x0) {
                            plVar7[1] = 1;
                            *(undefined4 *)(plVar7 + 2) = 0;
                            plVar7[3] = 0;
                            plVar7[4] = 0;
                            plVar7[5] = 0;
                            *plVar7 = (longlong)&PTR_LAB_140b5fe88;
                            plVar7[6] = 0;
                            plVar11 = plVar7;
                        }
                        (**(code **)(**(longlong **)(param_1 + 0x260) + 0x528))
                                (*(longlong **)(param_1 + 0x260),local_a8,4,plVar11);
                        if ((plVar11 != (longlong *)0x0) &&
                            (iVar2 = (**(code **)(*plVar11 + 0x10))(plVar11), iVar2 != 0)) {
                            uVar8 = (**(code **)(*plVar11 + 0x18))(plVar11);
                            iVar2 = (**(code **)(*plVar11 + 0x10))(plVar11);
                            uVar12 = (ulonglong)(uint)(iVar2 * 3) * 0x10 + uVar8;
                            for (uVar9 = uVar8; uVar9 < uVar12; uVar9 = uVar9 + 0x30) {
                                uVar13 = uVar9 + 0x10;
                                if (uVar9 == uVar12) {
                                    uVar13 = uVar8;
                                }
                                iVar2 = FUN_1401c9b90(local_a8,uVar9,uVar13,0);
                                if (iVar2 != 0) {
                                    (**(code **)(*plVar11 + 8))(plVar11);
                                    return 1;
                                }
                            }
                        }
                        (**(code **)(*plVar11 + 8))(plVar11);
                    }
                }
            }
            uVar16 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar16;
        } while (uVar16 < *(uint *)(lVar3 + 0x110));
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c3b50(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    float extraout_XMM0_Da;
    undefined auVar4 [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    longlong *local_res8;
    undefined4 local_res10;
    undefined4 local_res14;
    float local_e8;
    float fStack228;
    undefined4 uStack224;
    undefined local_d8 [4];
    undefined8 uStack212;
    undefined local_c8 [16];
    undefined local_b8 [16];
    undefined local_a8 [16];
    undefined8 local_98;
    undefined8 uStack144;
    float local_88;
    float fStack132;
    float fStack128;
    float fStack124;
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    float local_68;
    float fStack100;
    float fStack96;
    float fStack92;
    undefined8 local_58;
    undefined4 uStack80;
    float fStack76;

    if ((longlong *)param_1[0x24] == (longlong *)0x0) {
        return;
    }
    lVar2 = (**(code **)(*(longlong *)param_1[0x24] + 0x150))();
    if (lVar2 == 0) {
        return;
    }
    if (*(int *)((longlong)param_1 + 0x28c) == 0) {
        return;
    }
    *(undefined4 *)(param_1 + 0x52) = 1;
    (**(code **)(*param_1 + 0x90))(param_1,&local_88,0);
    local_58 = 0;
    uStack80 = 0;
    auVar4 = rsqrtss(ZEXT816(0),CONCAT412(fStack76 * fStack76,ZEXT412(0)));
    fVar9 = SUB164(auVar4,0);
    fVar9 = (3.0 - fVar9 * 0.0 * fVar9) * 0.5 * fVar9;
    if (fVar9 <= 0.0) {
        fVar9 = 0.0;
    }
    fVar5 = fStack100 * fStack100;
    fVar6 = local_68 * local_68 + fVar5 + 0.0;
    auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,CONCAT44(fVar5,fVar5))),
                     CONCAT412(fStack92 * fStack92,CONCAT48(fStack96 * fStack96,CONCAT44(fVar5,fVar6))
                     ));
    fVar5 = SUB164(auVar4,0);
    fVar5 = (3.0 - fVar6 * fVar5 * fVar5) * 0.5 * fVar5;
    if (fVar5 <= 0.0) {
        fVar5 = 0.0;
    }
    fVar6 = fStack116 * fStack116;
    fVar7 = local_78 * local_78 + fVar6 + 0.0;
    auVar4 = rsqrtss(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar6))),
                     CONCAT412(fStack108 * fStack108,
                               CONCAT48(fStack112 * fStack112,CONCAT44(fVar6,fVar7))));
    fVar6 = SUB164(auVar4,0);
    fVar6 = (3.0 - fVar7 * fVar6 * fVar6) * 0.5 * fVar6;
    if (fVar6 <= 0.0) {
        fVar6 = 0.0;
    }
    fVar7 = fStack132 * fStack132;
    fVar8 = local_88 * local_88 + fVar7 + 0.0;
    auVar4 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                     CONCAT412(fStack124 * fStack124,
                               CONCAT48(fStack128 * fStack128,CONCAT44(fVar7,fVar8))));
    fVar7 = SUB164(auVar4,0);
    fVar7 = (3.0 - fVar8 * fVar7 * fVar7) * 0.5 * fVar7;
    if (fVar7 <= 0.0) {
        fVar7 = 0.0;
    }
    local_c8 = ZEXT816(CONCAT44(fVar7 * fStack132,fVar7 * local_88));
    local_b8 = ZEXT816(CONCAT44(fVar6 * fStack116,fVar6 * local_78));
    local_a8 = ZEXT816(CONCAT44(fVar5 * fStack100,fVar5 * local_68));
    uStack144 = SUB168(CONCAT412(0x3f800000,ZEXT812(0)) >> 0x40,0);
    local_98 = CONCAT44(fVar9 * 0.0,fVar9 * 0.0);
    FUN_1401b2ed0(local_d8,local_c8);
    if ((0.1 < (float)((uint)uStack212 & 0x7fffffff)) || (0.1 < (float)(uStack212._4_4_ & 0x7fffffff))
            ) {
        *(undefined4 *)(param_1 + 0x52) = 0;
    }
    plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[0x24] + 0x150))();
    (**(code **)(*plVar3 + 0x368))(plVar3,0xc1,&local_e8,0);
    local_res8 = (longlong *)0x0;
    fVar9 = 2.0;
    _local_d8 = ZEXT1216(CONCAT48(uStack224,CONCAT44(fStack228 - 2.0,local_e8)));
    local_b8 = local_b8 & (undefined  [16])0xffffffffffffffff;
    local_a8 = CONCAT88(param_1[0x24],SUB168(local_a8,0)) & (undefined  [16])0xffffffffffffffff;
    local_res10 = 0;
    local_res14 = 0x3f800000;
    iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1a8))
            (*(longlong **)(DAT_140c65898 + 0x7248),&local_e8,local_d8,&local_res10,
             &local_res8,local_c8);
    if (iVar1 != 0) {
        lVar2 = (**(code **)(*local_res8 + 0x18))();
        if (lVar2 == 0) {
            lVar2 = (**(code **)(*local_res8 + 0x28))();
            fStack228 = fStack228 - *(float *)(lVar2 + 0x20);
        }
        else {
            fVar9 = fStack228 - fVar9;
            fVar5 = local_e8;
            (**(code **)(*local_res8 + 0x10))();
            local_e8 = local_e8 - ((fVar5 - local_e8) * extraout_XMM0_Da + local_e8);
            fStack228 = fStack228 - ((fVar9 - fStack228) * extraout_XMM0_Da + fStack228);
            fStack228 = SQRT(local_e8 * local_e8 + fStack228 * fStack228 + 0.0);
        }
        if ((1.8 < fStack228) || (fStack228 < 0.3)) {
            *(undefined4 *)(param_1 + 0x52) = 0;
        }
        (**(code **)(*local_res8 + 8))();
        return;
    }
    *(undefined4 *)(param_1 + 0x52) = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c3fd0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong **pplVar1;
    undefined (*pauVar2) [16];
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined auStack536 [32];
    longlong **local_1f8;
    undefined8 local_1f0;
    longlong *local_1e8 [2];
    undefined8 local_1d8;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 uStack456;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined **local_1b8;
    undefined8 local_1b0;
    LPVOID local_1a8;
    undefined local_198 [16];
    undefined local_188 [64];
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    ulonglong local_e8;

    local_e8 = DAT_140c0f7b0 ^ (ulonglong)auStack536;
    if (((*(int *)(param_1 + 0x10) - 5U & 0xfffffffa) == 0) &&
        (pplVar1 = (longlong **)(param_1 + 0x24), *pplVar1 != (longlong *)0x0)) {
        for (plVar6 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
             plVar6 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18); plVar6 = plVar6 + 1)
        {
            if (*(int *)(*plVar6 + 0xbc) == *(int *)(param_1[0x25] + 0x14)) {
                if ((*plVar6 != 0) &&
                    (lVar5 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))(), lVar5 != 0)) {
                    pauVar2 = (undefined (*) [16])(param_1 + 0x40);
                    uVar4 = *(undefined4 *)(param_1 + 0x42);
                    uVar16 = *(undefined4 *)*pauVar2;
                    uVar17 = *(undefined4 *)((longlong)param_1 + 0x204);
                    uVar18 = *(undefined4 *)(param_1 + 0x41);
                    uVar19 = *(undefined4 *)((longlong)param_1 + 0x20c);
                    uVar20 = *(undefined4 *)((longlong)param_1 + 0x214);
                    uVar21 = *(undefined4 *)(param_1 + 0x43);
                    uVar22 = *(undefined4 *)((longlong)param_1 + 0x21c);
                    plVar6 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x70))();
                    iVar3 = (**(code **)(*plVar6 + 0x50))(plVar6);
                    if (iVar3 == 1) {
                        (**(code **)(*param_1 + 0x48))();
                        (**(code **)(*param_1 + 0x38))(param_1,param_3);
                    }
                    else {
                        (**(code **)(*param_1 + 0x50))(param_1,param_2);
                        (**(code **)(*param_1 + 0x40))(param_1,param_3);
                    }
                    (**(code **)(*param_1 + 0x58))(param_1);
                    uStack448 = SUB84(local_198,0);
                    uStack444 = (undefined4)((ulonglong)local_198 >> 0x20);
                    uStack464 = 0;
                    uStack460 = 0;
                    uStack456 = SUB84(pauVar2,0);
                    uStack452 = (undefined4)((ulonglong)pauVar2 >> 0x20);
                    local_148 = *(undefined4 *)((longlong)param_1 + 0x21c);
                    local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,local_148);
                    local_198 = ZEXT1216(*(undefined (*) [12])(param_1 + 0x42));
                    uStack324 = local_1d8._4_4_;
                    uStack320 = 0;
                    uStack316 = 0;
                    local_138 = uStack456;
                    uStack308 = uStack452;
                    uStack304 = uStack448;
                    uStack300 = uStack444;
                    FUN_1401b0590(&local_148,local_188);
                    uVar8 = *(undefined4 *)*pauVar2;
                    uVar9 = *(undefined4 *)((longlong)param_1 + 0x204);
                    uVar10 = *(undefined4 *)(param_1 + 0x41);
                    uVar11 = *(undefined4 *)((longlong)param_1 + 0x20c);
                    uVar12 = *(undefined4 *)(param_1 + 0x42);
                    uVar13 = *(undefined4 *)((longlong)param_1 + 0x214);
                    uVar14 = *(undefined4 *)(param_1 + 0x43);
                    uVar15 = *(undefined4 *)((longlong)param_1 + 0x21c);
                    *pauVar2 = CONCAT412(uVar19,CONCAT48(uVar18,CONCAT44(uVar17,uVar16)));
                    *(undefined4 *)(param_1 + 0x42) = uVar4;
                    *(undefined4 *)((longlong)param_1 + 0x214) = uVar20;
                    *(undefined4 *)(param_1 + 0x43) = uVar21;
                    *(undefined4 *)((longlong)param_1 + 0x21c) = uVar22;
                    iVar3 = (**(code **)(*param_1 + 0x118))(param_1,local_188);
                    *(int *)((longlong)param_1 + 0x284) = iVar3;
                    if (iVar3 != 0) {
                        *pauVar2 = CONCAT412(uVar11,CONCAT48(uVar10,CONCAT44(uVar9,uVar8)));
                        *(undefined4 *)(param_1 + 0x42) = uVar12;
                        *(undefined4 *)((longlong)param_1 + 0x214) = uVar13;
                        local_1e8[0] = (longlong *)0x0;
                        *(undefined4 *)(param_1 + 0x43) = uVar14;
                        *(undefined4 *)((longlong)param_1 + 0x21c) = uVar15;
                        if (param_1[0x4e] == 0) {
                            plVar7 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
                            plVar6 = local_1e8[0];
                            if (local_1e8[0] != plVar7) {
                                if (plVar7 != (longlong *)0x0) {
                                    (**(code **)*plVar7)(plVar7);
                                }
                                plVar6 = plVar7;
                                if (local_1e8[0] != (longlong *)0x0) {
                                    (**(code **)(*local_1e8[0] + 8))();
                                }
                            }
                            LAB_1404c43c3:
                            local_1e8[0] = plVar6;
                            (**(code **)*local_1e8[0])();
                            (**(code **)(*local_1e8[0] + 0x3a8))();
                            FUN_1404c2960(param_1);
                            plVar6 = *(longlong **)(DAT_140c65898 + 0x7248);
                            local_198 = CONCAT88(local_198._8_8_,param_1[0xb]);
                            lVar5 = *plVar6;
                            local_1f0 = FUN_1404c2740(param_1);
                            local_1f8 = pplVar1;
                            iVar3 = (**(code **)(lVar5 + 200))(plVar6,local_188,local_1e8[0],local_198);
                            if (-1 < iVar3) {
                                (**(code **)(*local_1e8[0] + 0x288))(local_1e8[0],&LAB_1404c2880,param_1);
                                plVar6 = local_1e8[0];
                                uVar4 = FUN_1401ae6f0(0,0xffffffff);
                                uStack460 = 0;
                                uStack456 = 0;
                                uStack464 = 0x3f800000;
                                uStack452 = 0;
                                uStack448 = 0;
                                uStack444 = 0;
                                local_1d8 = (undefined **)CONCAT44(uVar4,0x1a23);
                                (**(code **)(*plVar6 + 0x248))(plVar6,0,&local_1d8);
                                FUN_1404c7ff0(param_1[0x25],*pplVar1,param_1);
                            }
                            (**(code **)(*local_1e8[0] + 8))();
                            (**(code **)(**pplVar1 + 0x128))(*pplVar1,0);
                            FUN_1404c69f0(param_1);
                            FUN_1404c3b50(param_1);
                            FUN_1404c6650(param_1,*(undefined4 *)((longlong)param_1 + 0x2fc));
                            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorMoving",
                                          &DAT_1409ebf24,*(undefined4 *)(param_1 + 0x3e));
                        }
                        else {
                            FUN_140195d70(param_1 + 0x60);
                            plVar6 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
                            (**(code **)(*plVar6 + 0x3d8))(plVar6,9,local_1e8);
                            if (local_1e8[0] != (longlong *)0x0) {
                                plVar7 = (longlong *)param_1[0x4e];
                                plVar6 = local_1e8[0];
                                if (plVar7 != (longlong *)0x0) {
                                    (**(code **)(*plVar7 + 8))(plVar7);
                                    param_1[0x4e] = 0;
                                    plVar6 = local_1e8[0];
                                }
                                goto LAB_1404c43c3;
                            }
                            local_1b0 = 0;
                            local_1b8 = &PTR_LAB_140b5e648;
                            local_1a8 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_1b8);
                            local_1d8 = local_1b8;
                            local_198 = CONCAT88(local_198._8_8_,0x141e040e8);
                            uStack456 = SUB84(local_1a8,0);
                            uStack452 = (undefined4)((ulonglong)local_1a8 >> 0x20);
                            uStack464 = (undefined4)local_1b0;
                            uStack460 = (undefined4)((ulonglong)local_1b0 >> 0x20);
                            iVar3 = FUN_140196f30(&DAT_140c8ad24,0x2e,local_198,&local_1d8);
                            local_1b8 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_1a8);
                            if (iVar3 != 0) {
                                DebugBreak();
                            }
                        }
                        if (local_1e8[0] != (longlong *)0x0) {
                            (**(code **)(*local_1e8[0] + 8))();
                        }
                    }
                }
                break;
            }
        }
    }
    FUN_1407db4f0(local_e8 ^ (ulonglong)auStack536);
    return;
}



void FUN_1404c4560(longlong *param_1,undefined8 param_2)

{
    longlong **pplVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined auStack376 [32];
    longlong **local_158;
    undefined8 local_150;
    undefined *local_148;
    undefined4 local_140;
    undefined4 uStack316;
    undefined4 uStack312;
    undefined8 local_134;
    undefined4 local_12c;
    float local_128;
    float fStack292;
    undefined local_e8 [64];
    undefined local_a8 [64];
    undefined *local_68;
    undefined8 local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    if (((*(int *)(param_1 + 0x10) - 5U & 0xfffffffa) == 0) &&
        (pplVar1 = (longlong **)(param_1 + 0x24), *pplVar1 != (longlong *)0x0)) {
        (**(code **)(*param_1 + 0x78))(param_1,local_e8);
        local_148 = local_e8;
        local_140 = (undefined4)param_2;
        uStack316 = (undefined4)((ulonglong)param_2 >> 0x20);
        local_68 = local_148;
        local_60 = param_2;
        FUN_1401afb10(&local_68,&local_128);
        iVar4 = (**(code **)(*param_1 + 0x118))(param_1,&local_128);
        if (iVar4 != 0) {
            puVar6 = (undefined4 *)FUN_1404bd000(&local_148,&local_128);
            uVar5 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *(undefined4 *)(param_1 + 0x40) = *puVar6;
            *(undefined4 *)((longlong)param_1 + 0x204) = uVar5;
            *(undefined4 *)(param_1 + 0x41) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0x20c) = uVar3;
            *(undefined4 *)(param_1 + 0x42) = puVar6[4];
            *(undefined4 *)((longlong)param_1 + 0x214) = puVar6[5];
            *(undefined4 *)(param_1 + 0x43) = puVar6[6];
            *(undefined4 *)((longlong)param_1 + 0x21c) = puVar6[7];
            lVar7 = FUN_140203da0(*(undefined4 *)(param_1 + 0xc));
            if (lVar7 != 0) {
                *(float *)((longlong)param_1 + 0x21c) =
                        SQRT(local_128 * local_128 + fStack292 * fStack292 + 0.0);
                (**(code **)(*param_1 + 0x90))(param_1,local_a8,1);
                plVar8 = (longlong *)(**(code **)(**pplVar1 + 0x150))();
                (**(code **)*plVar8)(plVar8);
                (**(code **)(*plVar8 + 0x3a8))(plVar8);
                FUN_1404c2960(param_1);
                plVar9 = *(longlong **)(DAT_140c65898 + 0x7248);
                local_148 = (undefined *)param_1[0xb];
                lVar7 = *plVar9;
                local_150 = FUN_1404c2740(param_1);
                local_158 = pplVar1;
                iVar4 = (**(code **)(lVar7 + 200))(plVar9,local_a8,plVar8,&local_148);
                if (-1 < iVar4) {
                    (**(code **)(*plVar8 + 0x288))(plVar8,&LAB_1404c2880,param_1);
                    uVar5 = FUN_1401ae6f0(0,0xffffffff);
                    local_140 = 0x3f800000;
                    uStack316 = 0;
                    uStack312 = 0;
                    local_134 = 0;
                    local_12c = 0;
                    local_148 = (undefined *)CONCAT44(uVar5,0x1a23);
                    (**(code **)(*plVar8 + 0x248))(plVar8,0,&local_148);
                    FUN_1404c7ff0(param_1[0x25],*pplVar1,param_1);
                }
                (**(code **)(*plVar8 + 8))(plVar8);
                (**(code **)(**pplVar1 + 0x128))(*pplVar1,0);
                FUN_1404c69f0(param_1);
                FUN_1404c3b50(param_1);
                FUN_1404c6650(param_1,*(undefined4 *)((longlong)param_1 + 0x2fc));
            }
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack376);
    return;
}



void FUN_1404c57d0(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;

    lVar1 = FUN_140203da0(*(undefined4 *)(param_3 + 0x60));
    if (lVar1 != 0) {
        *(float *)(param_3 + 0x21c) =
                SQRT(*(float *)(param_3 + 0x220) * *(float *)(param_3 + 0x220) +
                     *(float *)(param_3 + 0x224) * *(float *)(param_3 + 0x224) + 0.0) * param_2;
    }
    return;
}

