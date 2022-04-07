//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1406cebc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
    short sVar1;
    undefined *puVar2;
    undefined4 uVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    short *psVar7;
    longlong *plVar8;
    short *psVar9;
    undefined8 *puVar10;
    wchar_t *pwVar11;
    undefined8 uVar12;
    uint uVar13;
    short *psVar15;
    longlong **pplVar16;
    wchar_t *pwVar17;
    longlong lVar18;
    short *psVar19;
    short *psVar20;
    undefined auStack248 [32];
    undefined8 local_d8;
    undefined4 local_c8;
    undefined4 local_c4;
    longlong local_c0;
    longlong local_b8;
    undefined8 local_a8;
    undefined local_a0;
    undefined local_98 [16];
    undefined local_88 [16];
    undefined local_78 [16];
    undefined8 local_68;
    ulonglong local_48;
    short *psVar14;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    psVar20 = (short *)0x0;
    local_b8 = param_5;
    local_d8 = 0;
    FUN_1400d45e0(&local_a8,param_1,param_2,param_5);
    lVar6 = FUN_14018b280(0x8e0,0);
    psVar7 = psVar20;
    if (lVar6 != 0) {
        local_d8 = param_4;
        psVar7 = (short *)FUN_1406cdbc0(lVar6,param_1,param_2,&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_98 = ZEXT816(0);
    local_88 = ZEXT816(0);
    local_78 = ZEXT816(0);
    local_68 = 0;
    lVar6 = FUN_1401a6b80(param_5);
    if (lVar6 == 0) {
        local_c0 = 0;
    }
    else {
        lVar6 = FUN_1401a4f40(lVar6 + 0x20);
        local_c0 = lVar6;
        if (lVar6 != 0) {
            FUN_14010b330(&local_a8,param_1,lVar6,0);
            pplVar16 = (longlong **)(psVar7 + 0x310);
            psVar19 = psVar20;
            do {
                plVar8 = *(longlong **)(local_98 + (longlong)psVar19 * 8);
                if (plVar8 != *pplVar16) {
                    if (plVar8 != (longlong *)0x0) {
                        (**(code **)*plVar8)(plVar8);
                    }
                    if (*pplVar16 != (longlong *)0x0) {
                        (**(code **)(**pplVar16 + 8))();
                        *pplVar16 = (longlong *)0x0;
                    }
                    *pplVar16 = plVar8;
                }
                psVar19 = (short *)((longlong)psVar19 + 1);
                pplVar16 = pplVar16 + 6;
            } while ((longlong)psVar19 < 6);
            goto LAB_1406ced23;
        }
    }
    pplVar16 = (longlong **)(psVar7 + 0x310);
    lVar18 = 6;
    do {
        if ((param_1 != 0) &&
            ((*pplVar16 == (longlong *)0x0 || (cVar4 = FUN_14002c740(pplVar16 + 2), cVar4 == '\0')))) {
            plVar8 = (longlong *)FUN_140108e80(param_1 + 0xf0);
            psVar19 = psVar20;
            if (plVar8 != (longlong *)0x0) {
                do {
                    puVar2 = (undefined *)((longlong)psVar19 + 1);
                    psVar19 = (short *)((longlong)psVar19 + 1);
                } while (L"IconicButtonBase"[(longlong)puVar2] != L'\0');
                FUN_14001c480(pplVar16 + 2,L"IconicButtonBase",L"IconicButtonBase" + (longlong)psVar19);
            }
            if (plVar8 != *pplVar16) {
                if (plVar8 != (longlong *)0x0) {
                    (**(code **)*plVar8)(plVar8);
                }
                if (*pplVar16 != (longlong *)0x0) {
                    (**(code **)(**pplVar16 + 8))();
                    *pplVar16 = (longlong *)0x0;
                }
                *pplVar16 = plVar8;
            }
        }
        pplVar16 = pplVar16 + 6;
        lVar18 = lVar18 + -1;
        lVar6 = local_c0;
    } while (lVar18 != 0);
    LAB_1406ced23:
    for (lVar18 = *(longlong *)(local_b8 + 0x60); psVar19 = psVar20, lVar18 != 0;
         lVar18 = *(longlong *)(lVar18 + 0x38)) {
        psVar15 = &DAT_140b3b1a0;
        psVar9 = (short *)FUN_1401a4f40();
        if (psVar9 == &DAT_140b3b1a0) {
            LAB_1406cee82:
            if (lVar18 != 0) {
                psVar19 = (short *)FUN_1401a4f40(lVar18 + 0x20);
            }
            break;
        }
        psVar14 = psVar20;
        if (*psVar9 != 0) {
            do {
                uVar13 = (uint)psVar14;
                if (((*psVar15 == 0) || (*psVar9 != *psVar15)) || (0x7ffffffe < (int)uVar13)) break;
                psVar9 = psVar9 + 1;
                psVar15 = psVar15 + 1;
                uVar13 = uVar13 + 1;
                psVar14 = (short *)(ulonglong)uVar13;
            } while (*psVar9 != 0);
            if (uVar13 == 0x7fffffff) goto LAB_1406cee82;
        }
        if ((*psVar9 == 0) && (*psVar15 == 0)) goto LAB_1406cee82;
    }
    if (lVar6 == 0) {
        if (param_1 != 0) {
            plVar8 = *(longlong **)(psVar7 + 0x3a0);
            if ((plVar8 != (longlong *)0x0) && (cVar4 = FUN_14002c740(psVar7 + 0x3a8), cVar4 == '\0')) {
                (**(code **)(*plVar8 + 8))(plVar8);
                *(undefined8 *)(psVar7 + 0x3a0) = 0;
            }
            if (param_1 != 0) {
                if ((*(longlong *)(psVar7 + 0x3d0) == 0) ||
                    (cVar4 = FUN_14002c740(psVar7 + 0x3d8), cVar4 == '\0')) {
                    puVar10 = (undefined8 *)FUN_140108e80(param_1 + 0xf0);
                    psVar19 = psVar20;
                    if (puVar10 != (undefined8 *)0x0) {
                        do {
                            puVar2 = (undefined *)((longlong)psVar19 + 1);
                            psVar19 = (short *)((longlong)psVar19 + 1);
                        } while (L"IconicButtonEdgeGlow"[(longlong)puVar2] != L'\0');
                        FUN_14001c480(psVar7 + 0x3d8,L"IconicButtonEdgeGlow",
                                      L"IconicButtonEdgeGlow" + (longlong)psVar19);
                    }
                    if (puVar10 != *(undefined8 **)(psVar7 + 0x3d0)) {
                        if (puVar10 != (undefined8 *)0x0) {
                            (**(code **)*puVar10)(puVar10);
                        }
                        if (*(longlong **)(psVar7 + 0x3d0) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(psVar7 + 0x3d0) + 8))();
                            *(undefined8 *)(psVar7 + 0x3d0) = 0;
                        }
                        *(undefined8 **)(psVar7 + 0x3d0) = puVar10;
                    }
                }
                if (param_1 != 0) {
                    if ((*(longlong *)(psVar7 + 0x3b8) == 0) ||
                        (cVar4 = FUN_14002c740(psVar7 + 0x3c0), cVar4 == '\0')) {
                        puVar10 = (undefined8 *)FUN_140108e80(param_1 + 0xf0);
                        psVar19 = psVar20;
                        if (puVar10 != (undefined8 *)0x0) {
                            do {
                                puVar2 = (undefined *)((longlong)psVar19 + 1);
                                psVar19 = (short *)((longlong)psVar19 + 1);
                            } while (L"IconicButtonInnerGlow1"[(longlong)puVar2] != L'\0');
                            FUN_14001c480(psVar7 + 0x3c0,L"IconicButtonInnerGlow1",
                                          L"IconicButtonInnerGlow1" + (longlong)psVar19);
                        }
                        if (puVar10 != *(undefined8 **)(psVar7 + 0x3b8)) {
                            if (puVar10 != (undefined8 *)0x0) {
                                (**(code **)*puVar10)(puVar10);
                            }
                            if (*(longlong **)(psVar7 + 0x3b8) != (longlong *)0x0) {
                                (**(code **)(**(longlong **)(psVar7 + 0x3b8) + 8))();
                                *(undefined8 *)(psVar7 + 0x3b8) = 0;
                            }
                            *(undefined8 **)(psVar7 + 0x3b8) = puVar10;
                        }
                    }
                    if (param_1 != 0) {
                        if ((*(longlong *)(psVar7 + 1000) == 0) ||
                            (cVar4 = FUN_14002c740(psVar7 + 0x3f0), cVar4 == '\0')) {
                            puVar10 = (undefined8 *)FUN_140108e80(param_1 + 0xf0);
                            psVar19 = psVar20;
                            if (puVar10 != (undefined8 *)0x0) {
                                do {
                                    puVar2 = (undefined *)((longlong)psVar19 + 1);
                                    psVar19 = (short *)((longlong)psVar19 + 1);
                                } while (L"IconicButtonInnerGlow2"[(longlong)puVar2] != L'\0');
                                FUN_14001c480(psVar7 + 0x3f0,L"IconicButtonInnerGlow2",
                                              L"IconicButtonInnerGlow2" + (longlong)psVar19);
                            }
                            if (puVar10 != *(undefined8 **)(psVar7 + 1000)) {
                                if (puVar10 != (undefined8 *)0x0) {
                                    (**(code **)*puVar10)(puVar10);
                                }
                                if (*(longlong **)(psVar7 + 1000) != (longlong *)0x0) {
                                    (**(code **)(**(longlong **)(psVar7 + 1000) + 8))();
                                    *(undefined8 *)(psVar7 + 1000) = 0;
                                }
                                *(undefined8 **)(psVar7 + 1000) = puVar10;
                            }
                        }
                        if (param_1 != 0) {
                            if ((*(longlong *)(psVar7 + 0x400) == 0) ||
                                (cVar4 = FUN_14002c740(psVar7 + 0x408), cVar4 == '\0')) {
                                puVar10 = (undefined8 *)FUN_140108e80(param_1 + 0xf0);
                                psVar19 = psVar20;
                                if (puVar10 != (undefined8 *)0x0) {
                                    do {
                                        puVar2 = (undefined *)((longlong)psVar19 + 1);
                                        psVar19 = (short *)((longlong)psVar19 + 1);
                                    } while (L"IconicButtonInnerGlow3"[(longlong)puVar2] != L'\0');
                                    FUN_14001c480(psVar7 + 0x408,L"IconicButtonInnerGlow3",
                                                  L"IconicButtonInnerGlow3" + (longlong)psVar19);
                                }
                                if (puVar10 != *(undefined8 **)(psVar7 + 0x400)) {
                                    if (puVar10 != (undefined8 *)0x0) {
                                        (**(code **)*puVar10)(puVar10);
                                    }
                                    if (*(longlong **)(psVar7 + 0x400) != (longlong *)0x0) {
                                        (**(code **)(**(longlong **)(psVar7 + 0x400) + 8))();
                                        *(undefined8 *)(psVar7 + 0x400) = 0;
                                    }
                                    *(undefined8 **)(psVar7 + 0x400) = puVar10;
                                }
                            }
                            if ((param_1 != 0) &&
                                ((*(longlong *)(psVar7 + 0x418) == 0 ||
                                  (cVar4 = FUN_14002c740(psVar7 + 0x420), cVar4 == '\0')))) {
                                puVar10 = (undefined8 *)FUN_140108e80(param_1 + 0xf0);
                                psVar19 = psVar20;
                                if (puVar10 != (undefined8 *)0x0) {
                                    do {
                                        puVar2 = (undefined *)((longlong)psVar19 + 1);
                                        psVar19 = (short *)((longlong)psVar19 + 1);
                                    } while (L"IconicButtonEdgeGlow"[(longlong)puVar2] != L'\0');
                                    FUN_14001c480(psVar7 + 0x420,L"IconicButtonEdgeGlow",
                                                  L"IconicButtonEdgeGlow" + (longlong)psVar19);
                                }
                                if (puVar10 != *(undefined8 **)(psVar7 + 0x418)) {
                                    if (puVar10 != (undefined8 *)0x0) {
                                        (**(code **)*puVar10)(puVar10);
                                    }
                                    if (*(longlong **)(psVar7 + 0x418) != (longlong *)0x0) {
                                        (**(code **)(**(longlong **)(psVar7 + 0x418) + 8))();
                                        *(undefined8 *)(psVar7 + 0x418) = 0;
                                    }
                                    *(undefined8 **)(psVar7 + 0x418) = puVar10;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        FUN_14010b330(&local_a8,*(undefined8 *)(psVar7 + 0x10),psVar19,0);
        pplVar16 = (longlong **)(psVar7 + 0x3a0);
        psVar19 = psVar20;
        do {
            plVar8 = *(longlong **)(local_98 + (longlong)psVar19 * 8);
            if (plVar8 != *pplVar16) {
                if (plVar8 != (longlong *)0x0) {
                    (**(code **)*plVar8)(plVar8);
                }
                if (*pplVar16 != (longlong *)0x0) {
                    (**(code **)(**pplVar16 + 8))();
                    *pplVar16 = (longlong *)0x0;
                }
                *pplVar16 = plVar8;
            }
            psVar19 = (short *)((longlong)psVar19 + 1);
            pplVar16 = pplVar16 + 6;
        } while ((longlong)psVar19 < 6);
    }
    lVar18 = local_b8;
    *(undefined4 *)(psVar7 + 0x448) = DAT_140c4aee8;
    *(undefined4 *)(psVar7 + 0x44a) = DAT_140c4aeec;
    *(undefined4 *)(psVar7 + 0x44c) = DAT_140c4af48;
    *(undefined4 *)(psVar7 + 0x44e) = DAT_140c4af4c;
    lVar6 = *(longlong *)(local_b8 + 0x60);
    local_c8 = 0;
    for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x38)) {
        pwVar17 = L"LeftMargin";
        pwVar11 = (wchar_t *)FUN_1401a4f40();
        if (pwVar11 == L"LeftMargin") {
            LAB_1406cf2b4:
            if (lVar6 != 0) {
                uVar12 = FUN_1401a4f40(lVar6 + 0x20);
                iVar5 = FUN_1407df428(uVar12,&DAT_1409e4114,&local_c8);
                if (iVar5 == 1) {
                    *(undefined4 *)(psVar7 + 0x448) = local_c8;
                }
            }
            break;
        }
        psVar19 = psVar20;
        if (*pwVar11 != L'\0') {
            do {
                uVar13 = (uint)psVar19;
                if (((*pwVar17 == L'\0') || (*pwVar11 != *pwVar17)) || (0x7ffffffe < (int)uVar13)) break;
                pwVar11 = pwVar11 + 1;
                pwVar17 = pwVar17 + 1;
                uVar13 = uVar13 + 1;
                psVar19 = (short *)(ulonglong)uVar13;
            } while (*pwVar11 != L'\0');
            if (uVar13 == 0x7fffffff) goto LAB_1406cf2b4;
        }
        if ((*pwVar11 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cf2b4;
    }
    for (lVar6 = *(longlong *)(lVar18 + 0x60); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x38)) {
        pwVar17 = L"TopMargin";
        pwVar11 = (wchar_t *)FUN_1401a4f40();
        if (pwVar11 == L"TopMargin") {
            LAB_1406cf364:
            if (lVar6 != 0) {
                uVar12 = FUN_1401a4f40(lVar6 + 0x20);
                iVar5 = FUN_1407df428(uVar12,&DAT_1409e4114,&local_c8);
                if (iVar5 == 1) {
                    *(undefined4 *)(psVar7 + 0x44a) = local_c8;
                }
            }
            break;
        }
        psVar19 = psVar20;
        if (*pwVar11 != L'\0') {
            do {
                uVar13 = (uint)psVar19;
                if (((*pwVar17 == L'\0') || (*pwVar11 != *pwVar17)) || (0x7ffffffe < (int)uVar13)) break;
                pwVar11 = pwVar11 + 1;
                pwVar17 = pwVar17 + 1;
                uVar13 = uVar13 + 1;
                psVar19 = (short *)(ulonglong)uVar13;
            } while (*pwVar11 != L'\0');
            if (uVar13 == 0x7fffffff) goto LAB_1406cf364;
        }
        if ((*pwVar11 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cf364;
    }
    for (lVar6 = *(longlong *)(lVar18 + 0x60); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x38)) {
        pwVar17 = L"RightMargin";
        pwVar11 = (wchar_t *)FUN_1401a4f40();
        if (pwVar11 == L"RightMargin") {
            LAB_1406cf414:
            if (lVar6 != 0) {
                uVar12 = FUN_1401a4f40(lVar6 + 0x20);
                iVar5 = FUN_1407df428(uVar12,&DAT_1409e4114,&local_c8);
                if (iVar5 == 1) {
                    *(undefined4 *)(psVar7 + 0x44c) = local_c8;
                }
            }
            break;
        }
        psVar19 = psVar20;
        if (*pwVar11 != L'\0') {
            do {
                uVar13 = (uint)psVar19;
                if (((*pwVar17 == L'\0') || (*pwVar11 != *pwVar17)) || (0x7ffffffe < (int)uVar13)) break;
                pwVar11 = pwVar11 + 1;
                pwVar17 = pwVar17 + 1;
                uVar13 = uVar13 + 1;
                psVar19 = (short *)(ulonglong)uVar13;
            } while (*pwVar11 != L'\0');
            if (uVar13 == 0x7fffffff) goto LAB_1406cf414;
        }
        if ((*pwVar11 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cf414;
    }
    for (lVar6 = *(longlong *)(lVar18 + 0x60); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x38)) {
        pwVar17 = L"BottomMargin";
        pwVar11 = (wchar_t *)FUN_1401a4f40();
        if (pwVar11 == L"BottomMargin") {
            LAB_1406cf4c4:
            if (lVar6 != 0) {
                uVar12 = FUN_1401a4f40(lVar6 + 0x20);
                iVar5 = FUN_1407df428(uVar12,&DAT_1409e4114,&local_c8);
                if (iVar5 == 1) {
                    *(undefined4 *)(psVar7 + 0x44e) = local_c8;
                }
            }
            break;
        }
        psVar19 = psVar20;
        if (*pwVar11 != L'\0') {
            do {
                uVar13 = (uint)psVar19;
                if (((*pwVar17 == L'\0') || (*pwVar11 != *pwVar17)) || (0x7ffffffe < (int)uVar13)) break;
                pwVar11 = pwVar11 + 1;
                pwVar17 = pwVar17 + 1;
                uVar13 = uVar13 + 1;
                psVar19 = (short *)(ulonglong)uVar13;
            } while (*pwVar11 != L'\0');
            if (uVar13 == 0x7fffffff) goto LAB_1406cf4c4;
        }
        if ((*pwVar11 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cf4c4;
    }
    for (lVar6 = *(longlong *)(lVar18 + 0x60); psVar19 = psVar20, lVar6 != 0;
         lVar6 = *(longlong *)(lVar6 + 0x38)) {
        pwVar17 = L"ContentType";
        pwVar11 = (wchar_t *)FUN_1401a4f40();
        if (pwVar11 == L"ContentType") {
            LAB_1406cf654:
            if (lVar6 != 0) {
                psVar19 = (short *)FUN_1401a4f40(lVar6 + 0x20);
            }
            break;
        }
        psVar9 = psVar20;
        if (*pwVar11 != L'\0') {
            do {
                uVar13 = (uint)psVar9;
                if (((*pwVar17 == L'\0') || (*pwVar11 != *pwVar17)) || (0x7ffffffe < (int)uVar13)) break;
                pwVar11 = pwVar11 + 1;
                pwVar17 = pwVar17 + 1;
                uVar13 = uVar13 + 1;
                psVar9 = (short *)(ulonglong)uVar13;
            } while (*pwVar11 != L'\0');
            if (uVar13 == 0x7fffffff) goto LAB_1406cf654;
        }
        if ((*pwVar11 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cf654;
    }
    psVar9 = (short *)&DAT_1409f7964;
    if (psVar19 != (short *)0x0) {
        psVar9 = psVar19;
    }
    sVar1 = *psVar9;
    psVar19 = psVar20;
    while (sVar1 != 0) {
        psVar19 = (short *)((longlong)psVar19 + 1);
        sVar1 = psVar9[(longlong)psVar19];
    }
    lVar6 = (longlong)psVar19 * 2 >> 1;
    psVar19 = psVar20;
    if (lVar6 + 1U < 0x7fffffffffffffff) {
        psVar19 = (short *)FUN_14018b280((lVar6 + 1U) * 2,0);
    }
    FUN_1407db590(psVar19,psVar9,lVar6 * 2);
    if (psVar19 + lVar6 != (short *)0x0) {
        psVar19[lVar6] = 0;
    }
    lVar6 = *(longlong *)(lVar18 + 0x60);
    local_c4 = 0;
    do {
        if (lVar6 == 0) {
            LAB_1406cf6c5:
            if (psVar19 != (short *)0x0) {
                FUN_14018b900(psVar19,0);
            }
            FUN_1407db4f0(local_48 ^ (ulonglong)auStack248);
            return;
        }
        pwVar17 = L"ContentId";
        pwVar11 = (wchar_t *)FUN_1401a4f40();
        if (pwVar11 == L"ContentId") {
            LAB_1406cf66b:
            if (lVar6 != 0) {
                uVar12 = FUN_1401a4f40(lVar6 + 0x20);
                iVar5 = FUN_1407df428(uVar12,&DAT_1409e4114,&local_c4);
                uVar3 = local_c4;
                if (iVar5 == 1) {
                    sVar1 = *psVar19;
                    while (sVar1 != 0) {
                        psVar20 = (short *)((longlong)psVar20 + 1);
                        sVar1 = psVar19[(longlong)psVar20];
                    }
                    FUN_14001c480(psVar7 + 0x2dc,psVar19,psVar19 + (longlong)psVar20);
                    *(undefined4 *)(psVar7 + 0x2ec) = uVar3;
                }
            }
            goto LAB_1406cf6c5;
        }
        psVar9 = psVar20;
        if (*pwVar11 != L'\0') {
            do {
                uVar13 = (uint)psVar9;
                if (((*pwVar17 == L'\0') || (*pwVar11 != *pwVar17)) || (0x7ffffffe < (int)uVar13)) break;
                pwVar11 = pwVar11 + 1;
                pwVar17 = pwVar17 + 1;
                uVar13 = uVar13 + 1;
                psVar9 = (short *)(ulonglong)uVar13;
            } while (*pwVar11 != L'\0');
            if (uVar13 == 0x7fffffff) goto LAB_1406cf66b;
        }
        if ((*pwVar11 == L'\0') && (*pwVar17 == L'\0')) goto LAB_1406cf66b;
        lVar6 = *(longlong *)(lVar6 + 0x38);
    } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001406cfb01)

void FUN_1406cf770(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    uint uVar9;
    ulonglong *puVar11;
    undefined8 unaff_RBX;
    longlong lVar12;
    undefined8 unaff_RBP;
    ulonglong uVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar10;
    ulonglong uVar16;

    uStack40 = 0x1406cf781;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf7c2;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar14 = 0;
    uVar10 = uVar14;
    uVar13 = uVar14;
    uVar16 = uVar14;
    do {
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        *(undefined8 *)((longlong)alStackX16 + uVar13 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar13);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar13);
        uVar13 = uVar13 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar13 + lVar4 + -8) = *puVar8;
    } while (uVar15 < 0x97);
    lVar17 = (longlong)&PTR_s_ChangeArt_140c57680 +
                        ((longlong)(int)uVar9 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar9 * 0x10 + lVar4);
    uVar13 = uVar14;
    do {
        uVar15 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar15;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        *puVar8 = *(undefined8 *)(lVar17 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar17 + 8 + (longlong)puVar8);
        puVar8 = puVar8 + 2;
    } while (uVar15 < 0xe);
    lVar17 = (longlong)&PTR_s_ClearInfo_140c5e540 +
                        ((longlong)(int)uVar9 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar9 * 0x10 + lVar4);
    uVar13 = uVar14;
    do {
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar9;
        *puVar8 = *(undefined8 *)(lVar17 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar17 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar9 < 0xe);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf8b0;
    FUN_1400569b0(lVar2,"Apollo.IconButton");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406cf8d2:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406cf8ee:
            uVar13 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar13 = puVar8[-2] + 0x30;
        }
        else {
            uVar13 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406cf8ee;
        if (iVar1 == 7) goto LAB_1406cf8d2;
        uVar13 = uVar14;
        if (iVar1 == 8) goto LAB_1406cf8ee;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf91d;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar12 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf943;
    FUN_14005ea50(lVar2,lVar17 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar12 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar12 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar17 = (longlong)alStackX16 + lVar4;
    if (lVar12 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar17 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf98a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf9af;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf9d3;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar12 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cf9f4;
            uVar7 = FUN_140062650(lVar2,lVar12);
            lVar12 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cfa19;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar12 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar12 = *(longlong *)(lVar17 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar12 != 0);
    }
    lVar17 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cfa5c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Button",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cfa81;
    FUN_14005e8e0(lVar2,lVar17 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar17 + -8);
    puVar11 = (ulonglong *)(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_1406cfabc:
        if (*(int *)(lVar17 + -8) != 2) {
            if (*(int *)(lVar17 + -8) == 7) {
                uVar14 = *puVar11 + 0x30;
            }
            goto LAB_1406cfad5;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406cfabc;
        if (iVar1 != 8) goto LAB_1406cfad5;
    }
    uVar14 = *puVar11;
    LAB_1406cfad5:
    *(ulonglong **)(lVar2 + 0x10) = puVar11;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cfae4;
    FUN_1400ed720(param_1,uVar13,uVar14);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406cebc0;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cfb1b;
    FUN_1400f85d0(param_1 + 0xa80,L"IconButton",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406cfb2b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



longlong FUN_1406cfb40(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_140131630();
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x1b0) >> 0x13 & 1) == 0)) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"IconButton",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1406cfbe0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_1406cfb40();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            iVar1 = FUN_140056d60(param_1,2);
        }
        else {
            iVar1 = 1;
        }
        *(undefined8 *)(lVar2 + 0x8a8) = 0xf;
        *(undefined4 *)(lVar2 + 0x8cc) = 1;
        *(undefined8 *)(lVar2 + 0x8a0) = 0;
        *(undefined8 *)(lVar2 + 0x8b8) = 0;
        *(undefined8 *)(lVar2 + 0x8c0) = 0;
        *(undefined4 *)(lVar2 + 0x8c8) = 0;
        *(undefined4 *)(lVar2 + 0x8d4) = 0;
        if (iVar1 != 0) {
            FUN_1400d42f0(lVar2,0,0);
        }
    }
    return 0;
}



undefined8 FUN_1406cfe50(undefined8 param_1)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;

    lVar3 = FUN_1406cfb40();
    if (lVar3 != 0) {
        uVar1 = FUN_140056d60(param_1,2);
        uVar2 = FUN_140056d60(param_1,3);
        *(undefined8 *)(lVar3 + 0x8a8) = 0xf;
        *(undefined4 *)(lVar3 + 0x8cc) = 1;
        *(undefined8 *)(lVar3 + 0x8b8) = 0;
        *(undefined4 *)(lVar3 + 0x8c8) = 0;
        *(undefined4 *)(lVar3 + 0x8d4) = 0;
        if (uVar2 == 0) {
            *(undefined8 *)(lVar3 + 0x8a0) = 0;
            *(undefined8 *)(lVar3 + 0x8c0) = 0;
        }
        else {
            *(undefined4 *)(lVar3 + 0x8a0) = 0;
            *(undefined4 *)(lVar3 + 0x8a4) = uVar1;
            *(ulonglong *)(lVar3 + 0x8c0) = (ulonglong)uVar2;
        }
        FUN_1400d42f0(lVar3,uVar2 != 0,0);
    }
    return 0;
}



undefined8 FUN_1406cff10(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;

    lVar4 = FUN_1406cfb40();
    if (lVar4 != 0) {
        iVar1 = FUN_140056d60(param_1,2);
        iVar2 = FUN_140056d60(param_1,3);
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
        iVar3 = 0;
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x38))) {
            iVar3 = FUN_140056d60(param_1,4);
        }
        if (((iVar1 < 0xf) || ((iVar1 == 0xf && (iVar3 != 0)))) && ((longlong)iVar2 != 0)) {
            *(int *)(lVar4 + 0x8a8) = iVar1;
            *(int *)(lVar4 + 0x8ac) = iVar3;
            *(longlong *)(lVar4 + 0x8c0) = (longlong)iVar2;
            uVar6 = 1;
        }
        else {
            *(undefined8 *)(lVar4 + 0x8a8) = 0xf;
            *(undefined8 *)(lVar4 + 0x8c0) = 0;
            uVar6 = 0;
        }
        *(undefined8 *)(lVar4 + 0x8a0) = 0;
        *(undefined8 *)(lVar4 + 0x8b8) = 0;
        *(undefined4 *)(lVar4 + 0x8c8) = 0;
        *(undefined4 *)(lVar4 + 0x8d4) = 0;
        *(undefined4 *)(lVar4 + 0x8cc) = 1;
        FUN_1400d42f0(lVar4,uVar6,0);
    }
    return 0;
}



undefined8 FUN_1406d00b0(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_1406cfb40();
    if (lVar2 != 0) {
        iVar1 = FUN_140056d60(param_1,2);
        *(undefined8 *)(lVar2 + 0x8a8) = 0xf;
        *(undefined4 *)(lVar2 + 0x8cc) = 1;
        *(undefined8 *)(lVar2 + 0x8a0) = 0;
        *(undefined8 *)(lVar2 + 0x8c0) = 0;
        *(undefined4 *)(lVar2 + 0x8c8) = 0;
        *(undefined4 *)(lVar2 + 0x8d4) = 0;
        if (iVar1 == 0) {
            *(undefined8 *)(lVar2 + 0x8b8) = 0;
        }
        else {
            *(undefined4 *)(lVar2 + 0x8b8) = 0;
            *(int *)(lVar2 + 0x8bc) = iVar1;
        }
        FUN_1400d42f0(lVar2,iVar1 != 0,0);
    }
    return 0;
}



undefined8 FUN_1406d0150(undefined8 param_1)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;

    lVar3 = FUN_1406cfb40();
    if (lVar3 != 0) {
        uVar1 = FUN_140056d60(param_1,2);
        uVar2 = FUN_140056d60(param_1,3);
        *(undefined8 *)(lVar3 + 0x8a8) = 0xf;
        *(undefined4 *)(lVar3 + 0x8cc) = 1;
        *(undefined8 *)(lVar3 + 0x8a0) = 0;
        *(undefined4 *)(lVar3 + 0x8c8) = 0;
        *(undefined4 *)(lVar3 + 0x8d4) = 0;
        if (uVar2 == 0) {
            *(undefined8 *)(lVar3 + 0x8b8) = 0;
            *(undefined8 *)(lVar3 + 0x8c0) = 0;
        }
        else {
            *(undefined4 *)(lVar3 + 0x8bc) = 0;
            *(undefined4 *)(lVar3 + 0x8b8) = uVar1;
            *(ulonglong *)(lVar3 + 0x8c0) = (ulonglong)uVar2;
        }
        FUN_1400d42f0(lVar3,uVar2 != 0,0);
    }
    return 0;
}



undefined8 FUN_1406d0210(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_1406cfb40();
    if (lVar2 != 0) {
        uVar1 = FUN_140056d60(param_1,2);
        *(undefined8 *)(lVar2 + 0x8a0) = 0;
        *(undefined4 *)(lVar2 + 0x8bc) = 0;
        *(undefined4 *)(lVar2 + 0x8c8) = 0;
        *(undefined4 *)(lVar2 + 0x8d4) = 0;
        *(undefined8 *)(lVar2 + 0x8c0) = 0;
        *(undefined8 *)(lVar2 + 0x8a8) = 0xf;
        *(undefined4 *)(lVar2 + 0x8cc) = 1;
        *(undefined4 *)(lVar2 + 0x8b8) = uVar1;
        FUN_1400d42f0(lVar2,1,0);
    }
    return 0;
}



undefined8 FUN_1406d02a0(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_1406cfb40();
    if (lVar2 == 0) {
        return 0;
    }
    uVar1 = FUN_140056d60(param_1,2);
    *(undefined4 *)(lVar2 + 0x8c8) = uVar1;
    return 1;
}



undefined8 FUN_1406d02f0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_1406cfb40();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(uint *)(lVar1 + 0x8d4) = *(uint *)(lVar1 + 0x8d4) | 1;
            return 0;
        }
        *(uint *)(lVar1 + 0x8d4) = *(uint *)(lVar1 + 0x8d4) & 0xfffffffe;
    }
    return 0;
}



undefined8 FUN_1406d0350(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_1406cfb40();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(uint *)(lVar1 + 0x8d4) = *(uint *)(lVar1 + 0x8d4) | 2;
            return 0;
        }
        *(uint *)(lVar1 + 0x8d4) = *(uint *)(lVar1 + 0x8d4) & 0xfffffffd;
    }
    return 0;
}



undefined8 FUN_1406d03b0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_1406cfb40();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(uint *)(lVar1 + 0x8d4) = *(uint *)(lVar1 + 0x8d4) | 4;
            return 0;
        }
        *(uint *)(lVar1 + 0x8d4) = *(uint *)(lVar1 + 0x8d4) & 0xfffffffb;
    }
    return 0;
}



longlong * FUN_1406d0410(longlong *param_1,undefined8 param_2,longlong param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    char cVar5;
    uint uVar6;
    int iVar7;
    undefined2 *puVar8;
    undefined *puVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    ulonglong uVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int in_stack_00000038;
    undefined local_48 [8];
    longlong local_40;

    FUN_1400c5920();
    *param_1 = (longlong)&PTR_LAB_140b71080;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    puVar8 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x82] = (longlong)puVar8;
    param_1[0x83] = (longlong)puVar8;
    param_1[0x84] = (longlong)(puVar8 + 8);
    if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
    }
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    puVar9 = (undefined *)FUN_14018b280(8);
    param_1[0x86] = (longlong)puVar9;
    param_1[0x87] = (longlong)puVar9;
    param_1[0x88] = (longlong)(puVar9 + 8);
    if (puVar9 != (undefined *)0x0) {
        *puVar9 = 0;
    }
    *(undefined4 *)(param_1 + 0x89) = 0xff000000;
    param_1[0x8a] = 0;
    param_1[0x8c] = 0;
    param_1[0x8b] = 0;
    FUN_14013feb0(param_1 + 0x8e,param_1[4]);
    param_1[0xff] = 0;
    param_1[0x100] = 0;
    param_1[0x103] = 0;
    *(undefined4 *)(param_1 + 0x102) = 0xfffffffe;
    param_1[0x101] = (longlong)&PTR_FUN_140b56a08;
    param_1[0x104] = 0;
    param_1[0x108] = 0;
    FUN_1401095e0(param_1 + 0x109);
    FUN_1401095e0(param_1 + 0x10f);
    FUN_1401095e0(param_1 + 0x115);
    FUN_1401095e0(param_1 + 0x11b);
    FUN_1401095e0(param_1 + 0x121);
    FUN_1401095e0(param_1 + 0x127);
    FUN_1401095e0(param_1 + 0x12d);
    FUN_1401095e0(param_1 + 0x133);
    *(undefined4 *)(param_1 + 0x139) = 0;
    FUN_1401095e0(param_1 + 0x13a);
    iVar17 = 7;
    plVar10 = param_1 + 0x144;
    iVar15 = 7;
    do {
        plVar10[-1] = 0;
        *plVar10 = 0;
        plVar10[1] = 0;
        puVar8 = (undefined2 *)FUN_14018b280(0x10);
        plVar10[-1] = (longlong)puVar8;
        *plVar10 = (longlong)puVar8;
        plVar10[1] = (longlong)(puVar8 + 8);
        if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = 0;
        }
        uVar4 = DAT_140c63664;
        plVar10[-4] = 0;
        *(undefined4 *)((longlong)plVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(plVar10 + -3) = uVar4;
        plVar10 = plVar10 + 6;
        iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    plVar10 = param_1 + 0x174;
    do {
        plVar10[-1] = 0;
        *plVar10 = 0;
        plVar10[1] = 0;
        puVar8 = (undefined2 *)FUN_14018b280(0x10);
        plVar10[-1] = (longlong)puVar8;
        *plVar10 = (longlong)puVar8;
        plVar10[1] = (longlong)(puVar8 + 8);
        if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = 0;
        }
        uVar4 = DAT_140c63664;
        plVar10[-4] = 0;
        *(undefined4 *)((longlong)plVar10 + -0x14) = 0x3f800000;
        *(undefined4 *)(plVar10 + -3) = uVar4;
        plVar10 = plVar10 + 6;
        iVar17 = iVar17 + -1;
    } while (-1 < iVar17);
    param_1[0x36] = param_1[0x36] | 0x20000000;
    FUN_1406d0ff0(param_1);
    if (param_3 == 0) {
        FUN_1400e7280(param_1[4],param_1,L"DefaultStratum");
    }
    *(int *)((longlong)param_1 + 0x44c) = in_stack_00000038;
    plVar10 = (longlong *)FUN_14018efa0(local_48,L"Bag %d",in_stack_00000038);
    if (plVar10 != param_1 + 0x81) {
        FUN_14001c480(param_1 + 0x81,plVar10[1],plVar10[2]);
    }
    if (local_40 != 0) {
        FUN_14018b900();
    }
    *(undefined *)(param_1 + 0x80) = 1;
    *(undefined2 *)(param_1 + 0x105) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 3;
    param_1[0x106] = 0;
    param_1[0x107] = 0;
    puVar1 = (undefined8 *)param_1[0x86];
    if ((ulonglong)(param_1[0x87] - (longlong)puVar1) < 9) {
        FUN_1407db590(puVar1,"DDBagItem");
        FUN_14001b050();
    }
    else {
        *puVar1 = 0x6574496761424444;
        *(undefined *)(puVar1 + 1) = 0x6d;
        lVar11 = param_1[0x86];
        lVar2 = param_1[0x87];
        if (lVar11 + 9 != lVar2) {
            FUN_1407db590();
            param_1[0x87] = param_1[0x87] + ((lVar11 + 9) - lVar2);
        }
    }
    *(undefined4 *)(param_1 + 0xfa) = 4;
    *(undefined8 *)((longlong)param_1 + 0x7d4) = 1;
    iVar17 = (DAT_140c4afa8 ^ (int)DAT_140c4afa8 >> 0x1f) - ((int)DAT_140c4afa8 >> 0x1f);
    uVar13 = (int)DAT_140c4afac >> 0x1f;
    iVar15 = 1;
    if (1 < iVar17) {
        iVar15 = iVar17;
    }
    uVar6 = DAT_140c4afac ^ uVar13;
    *(int *)((longlong)param_1 + 0x7dc) = iVar15;
    *(int *)(param_1 + 0xfc) = (int)((uVar6 - uVar13) * iVar15) / iVar17;
    iVar17 = *(int *)((longlong)param_1 + 0x2d4) - *(int *)((longlong)param_1 + 0x2cc);
    if (0 < iVar17) {
        iVar17 = iVar17 - iVar15;
        iVar7 = iVar17 / (iVar15 + 1) + 1;
        iVar16 = 1;
        if (1 < iVar7) {
            iVar16 = iVar7;
        }
        *(int *)(param_1 + 0xfa) = iVar16;
        FUN_1406d0ec0(param_1,(longlong)iVar17 % (longlong)(iVar15 + 1) & 0xffffffff);
    }
    lVar11 = FUN_1400e58c0(param_1[4]);
    param_1[0x57] = lVar11;
    (**(code **)(*param_1 + 0x270))();
    (**(code **)(*param_1 + 0x270))();
    FUN_1400cad80(param_1);
    lVar11 = param_1[4];
    if ((lVar11 != 0) &&
        ((param_1[0x13a] == 0 || (cVar5 = FUN_14002c740(param_1 + 0x13c), cVar5 == '\0')))) {
        lVar11 = FUN_140108e80(lVar11 + 0xf0,L"sprAS_GCD_Fill");
        if (lVar11 != 0) {
            lVar11 = 0;
            do {
                lVar2 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"sprAS_GCD_Fill"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x13c,L"sprAS_GCD_Fill",L"sprAS_GCD_Fill" + lVar11);
        }
        FUN_1401097f0(param_1 + 0x13a);
    }
    if (param_1[2] == 0) {
        FUN_1400d42f0(param_1,0,0);
    }
    uVar13 = 0xe8;
    if (in_stack_00000038 == 10) {
        uVar13 = 0xfa;
    }
    uVar14 = (ulonglong)uVar13;
    if (uVar14 <= (ulonglong)param_1[0x8c] && param_1[0x8c] != uVar14) {
        param_1[0x8c] = uVar14;
    }
    lVar11 = FUN_14018dbc0(param_1[0x8b],uVar14,8);
    if (param_1[0x8b] != lVar11) {
        FUN_1407db590(lVar11,param_1[0x8b],param_1[0x8c] << 3);
        lVar2 = param_1[0x8b];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        param_1[0x8b] = lVar11;
    }
    uVar6 = 0;
    if (uVar13 != 0) {
        do {
            lVar11 = FUN_14018b280(0x270,0);
            if (lVar11 == 0) {
                lVar11 = 0;
            }
            else {
                lVar11 = FUN_1406d7b10(lVar11);
            }
            *(ulonglong *)(lVar11 + 0xc) = CONCAT44(uVar6,*(undefined4 *)((longlong)param_1 + 0x44c));
            lVar3 = param_1[0x8c];
            lVar2 = lVar3 + 1;
            lVar12 = FUN_14018db00(param_1[0x8b],lVar2,8);
            *(longlong *)(lVar12 + lVar3 * 8) = lVar11;
            if (param_1[0x8b] != lVar12) {
                FUN_1407db590(lVar12,param_1[0x8b],param_1[0x8c] << 3);
                lVar11 = param_1[0x8b];
                if (lVar11 != 0) {
                    (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
                }
                param_1[0x8b] = lVar12;
            }
            uVar6 = uVar6 + 1;
            param_1[0x8c] = lVar2;
        } while (uVar6 < uVar13);
    }
    return param_1;
}



undefined8 FUN_1406d0ab0(undefined8 param_1,ulonglong param_2)

{
    FUN_1406d0af0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406d0af0(undefined8 *param_1)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 *puVar5;

    uVar4 = 0;
    *param_1 = &PTR_LAB_140b71080;
    if (param_1[0x8c] != 0) {
        do {
            lVar1 = *(longlong *)(param_1[0x8b] + uVar4 * 8);
            if (lVar1 != 0) {
                FUN_1405c72a0(lVar1 + 0x60);
                if (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar1 + 0x28) + 8))();
                    *(undefined8 *)(lVar1 + 0x28) = 0;
                }
                if (*(longlong *)(lVar1 + 0x40) != 0) {
                    FUN_14018b900(*(longlong *)(lVar1 + 0x40),0);
                }
                FUN_14018b900(lVar1,0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)param_1[0x8c]);
    }
    iVar3 = 7;
    iVar2 = 7;
    puVar5 = param_1 + 0x1a0;
    do {
        if ((longlong *)puVar5[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar5[-6] + 8))();
            puVar5[-6] = 0;
        }
        if (puVar5[-3] != 0) {
            FUN_14018b900(puVar5[-3],0);
        }
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + -6;
    } while (-1 < iVar2);
    puVar5 = param_1 + 0x170;
    do {
        if ((longlong *)puVar5[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar5[-6] + 8))();
            puVar5[-6] = 0;
        }
        if (puVar5[-3] != 0) {
            FUN_14018b900(puVar5[-3],0);
        }
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + -6;
    } while (-1 < iVar3);
    if ((longlong *)param_1[0x13a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13a] + 8))();
        param_1[0x13a] = 0;
    }
    if (param_1[0x13d] != 0) {
        FUN_14018b900(param_1[0x13d],0);
    }
    FUN_1401429a0(DAT_140c63678,*(undefined4 *)(param_1 + 0x139));
    if ((longlong *)param_1[0x133] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x133] + 8))();
        param_1[0x133] = 0;
    }
    if (param_1[0x136] != 0) {
        FUN_14018b900(param_1[0x136],0);
    }
    if ((longlong *)param_1[0x12d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x12d] + 8))();
        param_1[0x12d] = 0;
    }
    if (param_1[0x130] != 0) {
        FUN_14018b900(param_1[0x130],0);
    }
    if ((longlong *)param_1[0x127] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x127] + 8))();
        param_1[0x127] = 0;
    }
    if (param_1[0x12a] != 0) {
        FUN_14018b900(param_1[0x12a],0);
    }
    if ((longlong *)param_1[0x121] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x121] + 8))();
        param_1[0x121] = 0;
    }
    if (param_1[0x124] != 0) {
        FUN_14018b900(param_1[0x124],0);
    }
    if ((longlong *)param_1[0x11b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x11b] + 8))();
        param_1[0x11b] = 0;
    }
    if (param_1[0x11e] != 0) {
        FUN_14018b900(param_1[0x11e],0);
    }
    if ((longlong *)param_1[0x115] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x115] + 8))();
        param_1[0x115] = 0;
    }
    if (param_1[0x118] != 0) {
        FUN_14018b900(param_1[0x118],0);
    }
    if ((longlong *)param_1[0x10f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10f] + 8))();
        param_1[0x10f] = 0;
    }
    if (param_1[0x112] != 0) {
        FUN_14018b900(param_1[0x112],0);
    }
    if ((longlong *)param_1[0x109] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x109] + 8))();
        param_1[0x109] = 0;
    }
    if (param_1[0x10c] != 0) {
        FUN_14018b900(param_1[0x10c],0);
    }
    param_1[0x101] = &PTR_FUN_140b56a08;
    if (param_1[0x103] != 0) {
        FUN_1400579e0();
    }
    FUN_140140120(param_1 + 0x8e);
    lVar1 = param_1[0x8b];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[0x86] != 0) {
        FUN_14018b900(param_1[0x86],0);
    }
    if (param_1[0x82] != 0) {
        FUN_14018b900(param_1[0x82],0);
    }
    FUN_1400c6030(param_1);
    return;
}



ulonglong FUN_1406d0e20(longlong *param_1,int param_2)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    iVar1 = (**(code **)(*param_1 + 0x270))();
    uVar2 = (longlong)param_2 / (longlong)iVar1 & 0xffffffff;
    iVar1 = (**(code **)(*param_1 + 0x270))();
    uVar3 = (ulonglong)((int)uVar2 + 1);
    if (param_2 % iVar1 < 1) {
        uVar3 = uVar2;
    }
    return uVar3;
}



void FUN_1406d0ec0(longlong *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;
    undefined4 uVar7;
    int iVar8;
    uint uVar9;
    ulonglong uVar10;

    iVar8 = *(int *)((longlong)param_1 + 0x2cc);
    iVar1 = *(int *)(param_1 + 0x5a);
    iVar2 = *(int *)((longlong)param_1 + 0x2d4);
    iVar3 = *(int *)(param_1 + 0x5b);
    iVar6 = (**(code **)(*param_1 + 0x270))();
    if (iVar6 != 0) {
        iVar4 = *(int *)((longlong)param_1 + 0x7dc);
        uVar9 = (iVar6 + -1) * *(int *)((longlong)param_1 + 0x7d4);
        uVar10 = (ulonglong)uVar9;
        if (iVar2 - iVar8 < (int)(iVar4 * iVar6 + uVar9)) {
            iVar6 = (int)((iVar2 - uVar9) - iVar8) / iVar6;
            *(int *)((longlong)param_1 + 0x7e4) = iVar6;
            iVar6 = *(int *)(param_1 + 0xfc) * iVar6;
            iVar8 = iVar6 / iVar4;
            uVar10 = (longlong)iVar6 % (longlong)iVar4 & 0xffffffff;
        }
        else {
            *(int *)((longlong)param_1 + 0x7e4) = iVar4;
            iVar8 = *(int *)(param_1 + 0xfc);
        }
        *(int *)(param_1 + 0xfd) = iVar8;
        *(undefined4 *)((longlong)param_1 + 0x7ec) = *(undefined4 *)((longlong)param_1 + 0x7e4);
        *(undefined4 *)(param_1 + 0xfe) = *(undefined4 *)(param_1 + 0xfd);
        lVar5 = *param_1;
        *(int *)((longlong)param_1 + 0x7ec) =
                *(int *)((longlong)param_1 + 0x7ec) + *(int *)((longlong)param_1 + 0x7d4);
        *(int *)(param_1 + 0xfe) = *(int *)(param_1 + 0xfe) + *(int *)((longlong)param_1 + 0x7d4);
        uVar7 = (**(code **)(lVar5 + 0x268))(param_1,uVar10);
        iVar8 = (**(code **)(lVar5 + 0x2a0))(param_1,uVar7);
        FUN_1400cad80(param_1,(((iVar8 + -1) * *(int *)((longlong)param_1 + 0x7d4) +
                                *(int *)(param_1 + 0xfd) * iVar8) - iVar3) + iVar1,iVar3 - iVar1);
    }
    return;
}



void FUN_1406d0ff0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    char cVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint local_res8 [2];

    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar7 = 0;
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x848) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x858,L"UI_BK3_ItemIconBackplate"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemIconBackplate");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemIconBackplate"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x858,L"UI_BK3_ItemIconBackplate",L"UI_BK3_ItemIconBackplate" + lVar6)
                    ;
        }
        FUN_1401097f0(param_1 + 0x848,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x878) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x888,L"UI_BK3_Holo_InsetSimple"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_Holo_InsetSimple");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_Holo_InsetSimple"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x888,L"UI_BK3_Holo_InsetSimple",L"UI_BK3_Holo_InsetSimple" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x878,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x8a8) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x8b8,L"QuestNew"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"QuestNew");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"QuestNew"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x8b8,L"QuestNew",L"QuestNew" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x8a8,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x8d8) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x8e8,L"sprItem_New"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"sprItem_New");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"sprItem_New"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x8e8,L"sprItem_New",L"sprItem_New" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x8d8,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x908) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x918,L"WhiteCircle"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"WhiteCircle");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"WhiteCircle"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x918,L"WhiteCircle",L"WhiteCircle" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x908,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x938) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x948,L"UI_BK3_ItemDrag_DestinationNoGlow"), cVar3 == '\0')))
            ) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_DestinationNoGlow");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_DestinationNoGlow"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x948,L"UI_BK3_ItemDrag_DestinationNoGlow",
                          L"UI_BK3_ItemDrag_DestinationNoGlow" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x938,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x968) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x978,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow"),
                  cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_DestinationDeniedNoGlow"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x978,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow",
                          L"UI_BK3_ItemDrag_DestinationDeniedNoGlow" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x968,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0x998) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x9a8,L"UI_BK3_ItemDrag_OriginalNoGlow"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_OriginalNoGlow");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_OriginalNoGlow"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0x9a8,L"UI_BK3_ItemDrag_OriginalNoGlow",
                          L"UI_BK3_ItemDrag_OriginalNoGlow" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x998,lVar5);
    }
    uVar4 = FUN_140142170(DAT_140c63678);
    lVar6 = DAT_140c63678;
    if ((uint *)(param_1 + 0x9c8) != local_res8) {
        FUN_1401429a0(DAT_140c63678);
        lVar6 = DAT_140c63678;
        *(uint *)(param_1 + 0x9c8) = uVar4;
        if ((ulonglong)uVar4 < *(ulonglong *)(lVar6 + 0x30)) {
            iVar1 = *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar6 + 0x28));
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(lVar6 + 0x28)) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar6,(ulonglong)uVar4);
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xb80) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xb90,L"UI_BK3_ItemDrag_Quality_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Grey"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xb90,L"UI_BK3_ItemDrag_Quality_Grey",
                          L"UI_BK3_ItemDrag_Quality_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xb80,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xbb0) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xbc0,L"UI_BK3_ItemDrag_Quality_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Grey"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xbc0,L"UI_BK3_ItemDrag_Quality_Grey",
                          L"UI_BK3_ItemDrag_Quality_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xbb0,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xbe0) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xbf0,L"UI_BK3_ItemDrag_Quality_White"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_White");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_White"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xbf0,L"UI_BK3_ItemDrag_Quality_White",
                          L"UI_BK3_ItemDrag_Quality_White" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xbe0,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xc10) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xc20,L"UI_BK3_ItemDrag_Quality_Green"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Green");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Green"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xc20,L"UI_BK3_ItemDrag_Quality_Green",
                          L"UI_BK3_ItemDrag_Quality_Green" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xc10,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xc40) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xc50,L"UI_BK3_ItemDrag_Quality_Blue"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Blue");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Blue"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xc50,L"UI_BK3_ItemDrag_Quality_Blue",
                          L"UI_BK3_ItemDrag_Quality_Blue" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xc40,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xc70) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xc80,L"UI_BK3_ItemDrag_Quality_Purple"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Purple");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Purple"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xc80,L"UI_BK3_ItemDrag_Quality_Purple",
                          L"UI_BK3_ItemDrag_Quality_Purple" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xc70,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xca0) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xcb0,L"UI_BK3_ItemDrag_Quality_Orange"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Orange");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Orange"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xcb0,L"UI_BK3_ItemDrag_Quality_Orange",
                          L"UI_BK3_ItemDrag_Quality_Orange" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xca0,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xcd0) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xce0,L"UI_BK3_ItemDrag_Quality_Pink"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Pink");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Pink"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xce0,L"UI_BK3_ItemDrag_Quality_Pink",
                          L"UI_BK3_ItemDrag_Quality_Pink" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xcd0,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xa00) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xa10,L"UI_RarityBorder_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Grey"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xa10,L"UI_RarityBorder_Grey",L"UI_RarityBorder_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xa00,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xa30) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xa40,L"UI_RarityBorder_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Grey"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xa40,L"UI_RarityBorder_Grey",L"UI_RarityBorder_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xa30,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xa60) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xa70,L"UI_RarityBorder_White"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_White");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_White"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xa70,L"UI_RarityBorder_White",L"UI_RarityBorder_White" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xa60,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xa90) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xaa0,L"UI_RarityBorder_Green"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Green");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Green"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xaa0,L"UI_RarityBorder_Green",L"UI_RarityBorder_Green" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xa90,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xac0) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xad0,L"UI_RarityBorder_Blue"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Blue");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Blue"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xad0,L"UI_RarityBorder_Blue",L"UI_RarityBorder_Blue" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xac0,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xaf0) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xb00,L"UI_RarityBorder_Purple"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Purple");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Purple"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xb00,L"UI_RarityBorder_Purple",L"UI_RarityBorder_Purple" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xaf0,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xb20) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xb30,L"UI_RarityBorder_Orange"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Orange");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar2 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Orange"[lVar2] != L'\0');
            FUN_14001c480(param_1 + 0xb30,L"UI_RarityBorder_Orange",L"UI_RarityBorder_Orange" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xb20,lVar5);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 != 0) &&
        ((*(longlong *)(param_1 + 0xb50) == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xb60,L"UI_RarityBorder_Pink"), cVar3 == '\0')))) {
        lVar6 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Pink");
        if (lVar6 != 0) {
            do {
                lVar5 = lVar7 + 1;
                lVar7 = lVar7 + 1;
            } while (L"UI_RarityBorder_Pink"[lVar5] != L'\0');
            FUN_14001c480(param_1 + 0xb60,L"UI_RarityBorder_Pink",L"UI_RarityBorder_Pink" + lVar7);
        }
        FUN_1401097f0(param_1 + 0xb50,lVar6);
    }
    return;
}



undefined8 FUN_1406d1c10(longlong param_1,undefined8 param_2)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        param_1 = *(longlong *)(param_1 + 0x10);
    }
    FUN_1400cb3d0(param_1);
    return param_2;
}



undefined4 FUN_1406d1c40(longlong **param_1,longlong **param_2,longlong param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 local_res8 [2];

    lVar3 = **param_1;
    lVar1 = **param_2;
    if (lVar3 == lVar1) {
        return 0;
    }
    if (lVar3 != 0) {
        if (lVar1 == 0) {
            return 0xffffffff;
        }
        if (lVar3 != 0) goto LAB_1406d1cb7;
    }
    if (lVar1 != 0) {
        return 1;
    }
    LAB_1406d1cb7:
    if (((param_3 == 0) || (*(longlong *)(param_3 + 0x7f8) == 0)) ||
        (*(longlong *)(param_3 + 0x800) == 0)) {
        uVar2 = 1;
        if (*(uint *)(*param_1 + 2) < *(uint *)(*param_2 + 2)) {
            uVar2 = 0xffffffff;
        }
    }
    else {
        lVar3 = *(longlong *)(param_3 + 0x20);
        uVar2 = FUN_1400d45b0(param_3,param_2,lVar3);
        lVar3 = FUN_14013a390(lVar3 + 0x9c0,uVar2);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x9e0);
        }
        uVar2 = 0;
        local_res8[0] = 0;
        if (lVar3 != 0) {
            FUN_1400f2ad0(*(undefined8 *)(param_3 + 0x7f8),"BagWindowItemCompare",lVar3,param_3 + 0x808,
                          &DAT_140b3b918,**param_1,**param_2,local_res8);
            return local_res8[0];
        }
    }
    return uVar2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406d1da0(longlong *param_1,undefined8 *param_2,undefined (*param_3) [16])

{
    longlong **pplVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    longlong lVar9;
    int *piVar10;
    ulonglong uVar11;
    int *piVar12;
    bool bVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    int local_res8;
    uint local_resc;
    undefined8 *local_res10;
    undefined (*local_res18) [16];
    uint local_res20 [2];
    longlong **in_stack_fffffffffffffef8;
    longlong **pplVar19;
    undefined8 in_stack_ffffffffffffff00;
    undefined *puVar20;
    longlong *plVar21;
    undefined4 uVar22;
    ulonglong in_stack_ffffffffffffff08;
    longlong *local_e8;
    int *piStack224;
    float local_d8;
    ulonglong uStack212;
    float fStack204;
    undefined local_c8 [16];
    undefined local_b8 [32];
    int local_98;
    undefined local_88 [8];
    float fStack128;
    float fStack124;
    undefined local_78 [8];
    float fStack112;
    float fStack108;

    uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
    local_resc = *(uint *)((longlong)param_2 + 4);
    uVar11 = (ulonglong)local_resc;
    if ((ulonglong)param_1[0x8c] < uVar11 || param_1[0x8c] == uVar11) {
        return;
    }
    pplVar1 = *(longlong ***)(param_1[0x8b] + uVar11 * 8);
    if (*(int *)((longlong)param_1 + 0x824) == 0) {
        local_res8 = *(int *)param_2;
    }
    else {
        local_res8 = *(int *)((longlong)pplVar1 + 0xc);
        local_resc = *(uint *)(pplVar1 + 2);
    }
    local_res10 = param_2;
    local_res18 = param_3;
    plVar7 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0);
    if (plVar7 == (longlong *)0x0) {
        if (*pplVar1 != (longlong *)0x0) {
            *(undefined4 *)(param_1 + 0x104) = 1;
        }
        *(undefined4 *)(pplVar1 + 1) = 1;
        *pplVar1 = (longlong *)0x0;
        *(undefined4 *)((longlong)pplVar1 + 0x14) = *(undefined4 *)*param_3;
        *(undefined4 *)(pplVar1 + 3) = *(undefined4 *)(*param_3 + 4);
        *(undefined4 *)((longlong)pplVar1 + 0x1c) = *(undefined4 *)(*param_3 + 8);
        *(undefined4 *)(pplVar1 + 4) = *(undefined4 *)(*param_3 + 0xc);
        *(undefined4 *)(pplVar1 + 0xb) = 0;
        pplVar19 = in_stack_fffffffffffffef8;
        if (pplVar1[5] != (longlong *)0x0) {
            (**(code **)(*pplVar1[5] + 8))();
            pplVar1[5] = (longlong *)0x0;
            pplVar19 = in_stack_fffffffffffffef8;
        }
        if (*(int *)((longlong)param_1 + 0x824) == 0) {
            *(undefined8 *)((longlong)pplVar1 + 0xc) = *param_2;
        }
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        uVar15 = 0x3f800000;
        uVar16 = 0x3f800000;
        uVar17 = 0x3f800000;
        uVar18 = 0x3f800000;
        local_c8._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
        local_c8 = CONCAT412(0x3f800000,local_c8._0_12_);
        if (param_1[0x10f] != 0) {
            pplVar19 = (longlong **)
                    ((ulonglong)pplVar19 & 0xffffffff00000000 |
                     (ulonglong)
                             (uint)((DAT_140c63664 - *(float *)(param_1 + 0x110)) *
                                    *(float *)((longlong)param_1 + 0x884)));
            FUN_140103cf0(param_1[0x10f],param_3,local_c8,0,pplVar19);
        }
        goto LAB_1406d296b;
    }
    if ((*pplVar1 != plVar7) || (*(int *)(*pplVar1)[8] != *(int *)plVar7[8])) {
        *pplVar1 = plVar7;
        if (param_1[4] != 0) {
            FUN_140109710(pplVar1 + 5,param_1[4] + 0xf0,*(undefined8 *)(plVar7[8] + 0x1e8),0);
        }
        FUN_1405c7ad0(pplVar1 + 0xc,*(undefined4 *)plVar7[8],0);
        *(undefined4 *)(param_1 + 0x104) = 1;
    }
    *(undefined4 *)(pplVar1 + 1) = 2;
    *(undefined4 *)((longlong)pplVar1 + 0x14) = *(undefined4 *)*param_3;
    *(undefined4 *)(pplVar1 + 3) = *(undefined4 *)(*param_3 + 4);
    *(undefined4 *)((longlong)pplVar1 + 0x1c) = *(undefined4 *)(*param_3 + 8);
    *(undefined4 *)(pplVar1 + 4) = *(undefined4 *)(*param_3 + 0xc);
    iVar5 = 1;
    if (*(int *)(plVar7 + 0xf) != 0) {
        iVar5 = *(int *)(plVar7 + 0xf);
    }
    *(int *)(pplVar1 + 0xb) = iVar5;
    if (*(int *)((longlong)param_1 + 0x824) == 0) {
        *(undefined8 *)((longlong)pplVar1 + 0xc) = *param_2;
    }
    uVar15 = 0x3f800000;
    uVar16 = 0x3f800000;
    uVar17 = 0x3f800000;
    uVar18 = 0x3f800000;
    local_b8._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
    local_b8._0_16_ = CONCAT412(0x3f800000,local_b8._0_12_);
    if (param_1[0x109] != 0) {
        in_stack_fffffffffffffef8 =
                (longlong **)
                        ((ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(param_1 + 0x10a)) *
                                        *(float *)((longlong)param_1 + 0x854)));
        FUN_140103cf0(param_1[0x109],param_3,local_b8,0,in_stack_fffffffffffffef8);
    }
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    local_b8._0_16_ = *param_3;
    puVar8 = (undefined8 *)FUN_140109900(param_1 + 0x109,&local_e8,local_b8,2);
    iVar5 = *(int *)(pplVar1 + 0xb);
    _local_78 = ZEXT816(CONCAT44((float)*(int *)((longlong)puVar8 + 0xc),(float)(int)puVar8[1]));
    local_c8 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
    _local_88 = ZEXT816(CONCAT44((float)*(int *)((longlong)puVar8 + 4),(float)(int)*puVar8));
    local_res8 = iVar5;
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
    cVar3 = FUN_14053bc30();
    if (cVar3 == '\0') {
        local_res8 = iVar5;
        if (iVar5 == 1) {
            local_res8 = 0;
        }
    }
    else {
        lVar9 = param_1[4];
        local_c8._0_12_ = CONCAT48(uRam0000000140c777f8,CONCAT44(uRam0000000140c777f4,_DAT_140c777f0));
        local_c8 = CONCAT412(uRam0000000140c777fc,local_c8._0_12_);
        if ((*(longlong **)(lVar9 + 0xd38) == param_1) && ((longlong **)param_1[0x106] == pplVar1)) {
            plVar21 = *(longlong **)(lVar9 + 0xd70);
            if (((*(longlong *)(lVar9 + 0xd78) - (longlong)plVar21 == 0x10) &&
                 ((*plVar21 == 0x70536d6574494444 && (plVar21[1] == 0x6b6361745374696c)))) ||
                ((*(longlong *)(lVar9 + 0xd78) - (longlong)plVar21 == 0x13 &&
                  (iVar4 = FUN_1407e6af0(plVar21,"DDSupplySatchelItem"), iVar4 == 0)))) {
                local_res8 = iVar5 - (uint)*(ushort *)(lVar9 + 0xda2);
            }
            else {
                local_res8 = 0;
            }
        }
    }
    (*(code *)pplVar1[0xc][6])(pplVar1 + 0xc);
    lVar9 = (*(code *)pplVar1[0xc][0xf])(pplVar1 + 0xc);
    fVar14 = *(float *)(lVar9 + 0x84);
    lVar9 = (*(code *)pplVar1[0xc][0xf])(pplVar1 + 0xc);
    if (((((*(int *)(lVar9 + 0x90) != 0) || (*(int *)(lVar9 + 0x94) != 0)) ||
          (*(int *)(lVar9 + 0xa0) != 0)) ||
         ((*(int *)(lVar9 + 0x9c) != 0 || (*(int *)(lVar9 + 0x98) != 0)))) ||
        (*(longlong *)(lVar9 + 0xe8) != 0)) {
        local_c8._0_12_ = CONCAT48(0x3f000000,0x3f0000003f000000);
        local_c8 = CONCAT412(0x3f800000,local_c8._0_12_);
    }
    if (pplVar1[5] != (longlong *)0x0) {
        in_stack_fffffffffffffef8 =
                (longlong **)
                        ((ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(pplVar1 + 6)) * *(float *)((longlong)pplVar1 + 0x34)));
        FUN_140103e60(pplVar1[5],local_88,local_c8,0,in_stack_fffffffffffffef8);
    }
    lVar2 = plVar7[8];
    iVar5 = 1;
    if (1 < *(int *)(lVar2 + 0x158)) {
        iVar5 = *(int *)(lVar2 + 0x158);
    }
    piVar10 = (int *)plVar7[9];
    iVar4 = 7;
    if (iVar5 < 7) {
        iVar4 = iVar5;
    }
    piVar12 = piVar10;
    if (piVar10 == (int *)0x0) {
        piVar12 = (int *)(lVar2 + 8);
    }
    if (piVar12 != (int *)0x0) {
        if (piVar10 == (int *)0x0) {
            piVar10 = (int *)(lVar2 + 8);
        }
        iVar5 = 1;
        if (1 < *piVar10) {
            iVar5 = *piVar10;
        }
        iVar4 = 7;
        if (iVar5 < 7) {
            iVar4 = iVar5;
        }
    }
    (**(code **)(*DAT_140c65680 + 0x90))();
    if (iVar4 - 1U < 7) {
        local_d8 = local_78._0_4_ + 2.0;
        fStack204 = fStack108 + 2.0;
        local_e8 = (longlong *)CONCAT44(local_88._4_4_ - 2.0,local_88._0_4_ - 2.0);
        piStack224 = (int *)CONCAT44(fStack124 - 2.0,fStack128 - 2.0);
        uStack212 = CONCAT44(fStack112 + 2.0,local_78._4_4_ + 2.0);
        local_b8._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
        local_b8._0_16_ = CONCAT412(0x3f800000,local_b8._0_12_);
        if (param_1[(longlong)iVar4 * 6 + 0x140] != 0) {
            in_stack_fffffffffffffef8 =
                    (longlong **)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000);
            FUN_140103e60();
        }
    }
    if (((0.0 < fVar14) && (*(int *)(lVar9 + 0x90) == 0)) && (*(int *)(lVar9 + 0x94) == 0)) {
        puVar20 = local_88;
        in_stack_fffffffffffffef8 = pplVar1 + 0xc;
        FUN_1406c5a40(param_1,param_1[0x57],pplVar1 + 5,param_1 + 0x13a,in_stack_fffffffffffffef8,
                      puVar20,in_stack_ffffffffffffff08 & 0xffffffff00000000 | (ulonglong)(uint)fVar14);
        uVar22 = (undefined4)((ulonglong)puVar20 >> 0x20);
    }
    if (((*(uint *)(plVar7[8] + 0x154) & 0x200) == 0) || (*(int *)(plVar7[8] + 0x1b0) == 0)) {
        LAB_1406d22e3:
        if (*(int *)((longlong)plVar7 + 0x8c) != 0) {
            (**(code **)(*DAT_140c65680 + 0x90))();
            lVar9 = param_1[0x11b];
            local_b8._0_16_ = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
            goto joined_r0x0001406d230e;
        }
    }
    else {
        FUN_1405a8a40();
        iVar5 = FUN_140552550();
        if (iVar5 != 0) goto LAB_1406d22e3;
        (**(code **)(*DAT_140c65680 + 0x90))();
        lVar9 = param_1[0x115];
        local_b8._0_16_ = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
        joined_r0x0001406d230e:
        if (lVar9 != 0) {
            in_stack_fffffffffffffef8 =
                    (longlong **)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000);
            FUN_140103e60();
        }
    }
    iVar5 = 0;
    iVar4 = FUN_1406d7ab0(plVar7);
    pplVar19 = in_stack_fffffffffffffef8;
    if (iVar4 != 0) {
        iVar4 = FUN_14056a070(plVar7,0,0,0);
        pplVar19 = in_stack_fffffffffffffef8;
        if ((iVar4 != 0) && (iVar4 != 0x13d)) {
            local_98 = 0;
            lVar9 = FUN_14056a030(plVar7);
            pplVar19 = in_stack_fffffffffffffef8;
            if (*(int *)(*(longlong *)(lVar9 + 0x70) + 0x7c) != 6) {
                if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
                    (local_res20[0] = *(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108),
                            local_res20[0] == 0)) {
                    lVar9 = FUN_14056a030(plVar7);
                    pplVar19 = in_stack_fffffffffffffef8;
                    if (*(int *)(*(longlong *)(lVar9 + 0x70) + 0x7c) == 1) {
                        lVar9 = plVar7[10];
                        if (lVar9 == 0) {
                            lVar9 = plVar7[8] + 0x9c;
                        }
                        if ((*(int *)(lVar9 + 0x80) != 0) &&
                            (lVar9 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar9 + 0x80),
                                                   *(undefined8 *)(DAT_140c65898 + 0x78)),
                                    pplVar19 = in_stack_fffffffffffffef8, lVar9 != 0)) {
                            lVar2 = plVar7[8];
                            if (((*(uint *)(lVar2 + 0x154) & 0x400) == 0) || (*(int *)(lVar2 + 0x180) == 0)) {
                                bVar13 = true;
                            }
                            else {
                                bVar13 = *(int *)(plVar7 + 4) == 0;
                            }
                            if (((*(uint *)(lVar2 + 0x154) & 0x200) != 0) || (bVar13)) {
                                local_e8 = (longlong *)0x0;
                                uStack212 = 0;
                                local_d8 = 0.0;
                                piStack224 = (int *)0x0;
                                fStack204 = 1.345247e-43;
                                pplVar19 = (longlong **)(DAT_140c65898 + 0x6d10);
                                FUN_14055bdc0(DAT_140c65898,*(undefined8 *)(DAT_140c65898 + 0x78),lVar9,1,
                                              (ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000);
                                plVar21 = plVar7;
                                iVar4 = FUN_1403986f0();
                                uVar22 = (undefined4)((ulonglong)plVar21 >> 0x20);
                                if (local_e8 != (longlong *)0x0) {
                                    (**(code **)(local_e8[-2] + 8))(local_e8 + -2);
                                }
                                iVar5 = local_98;
                                if (iVar4 == 0x5b) {
                                    iVar5 = 1;
                                }
                            }
                        }
                    }
                }
                else {
                    lVar9 = plVar7[10];
                    if (lVar9 == 0) {
                        lVar9 = plVar7[8] + 0x9c;
                    }
                    if ((*(int *)(lVar9 + 0x80) != 0) &&
                        (lVar9 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar9 + 0x80),
                                               *(undefined8 *)(DAT_140c65898 + 0x78)),
                                pplVar19 = in_stack_fffffffffffffef8, lVar9 != 0)) {
                        lVar2 = plVar7[8];
                        if (((*(uint *)(lVar2 + 0x154) & 0x400) == 0) || (*(int *)(lVar2 + 0x180) == 0)) {
                            bVar13 = true;
                        }
                        else {
                            bVar13 = *(int *)(plVar7 + 4) == 0;
                        }
                        if (((*(uint *)(lVar2 + 0x154) & 0x200) != 0) || (bVar13)) {
                            local_e8 = (longlong *)0x0;
                            uStack212 = 0;
                            local_d8 = 0.0;
                            piStack224 = (int *)0x0;
                            fStack204 = 1.345247e-43;
                            pplVar19 = (longlong **)(DAT_140c65898 + 0x6d10);
                            FUN_14055bdc0(DAT_140c65898,*(undefined8 *)(DAT_140c65898 + 0x78),lVar9,1,
                                          (ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000 |
                                          (ulonglong)local_res20[0]);
                            plVar21 = plVar7;
                            iVar5 = FUN_1403986f0();
                            uVar22 = (undefined4)((ulonglong)plVar21 >> 0x20);
                            if (local_e8 != (longlong *)0x0) {
                                (**(code **)(local_e8[-2] + 8))(local_e8 + -2);
                            }
                            if ((iVar5 == 0) || (iVar5 == 0x13d)) goto LAB_1406d2605;
                        }
                    }
                    iVar5 = 0;
                }
                goto LAB_1406d2608;
            }
        }
        LAB_1406d2605:
        iVar5 = 1;
    }
    LAB_1406d2608:
    lVar9 = plVar7[8];
    if (((*(uint *)(lVar9 + 0x154) & 0x400) == 0) || (*(int *)(lVar9 + 0x180) == 0)) {
        if ((((*(uint *)(lVar9 + 0x154) & 0x4000) != 0) &&
             (iVar4 = FUN_1403b4710(DAT_140c65898), iVar4 != 0)) ||
            ((iVar4 = FUN_1406d7ab0(plVar7), iVar4 != 0 && (iVar5 == 0)))) goto LAB_1406d269f;
    }
    else if ((lVar9 == 0) ||
             ((((*(uint *)(lVar9 + 0x154) & 0x400) == 0 || (*(int *)(lVar9 + 0x180) == 0)) ||
               (iVar5 = FUN_1403b4710(DAT_140c65898), iVar5 != 0)))) {
        LAB_1406d269f:
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        local_e8 = (longlong *)CONCAT44(local_88._4_4_ + 2.0,local_88._0_4_ + 2.0);
        piStack224 = (int *)CONCAT44(fStack124 + 0.0,fStack128 + 0.0);
        local_d8 = (local_78._0_4_ - local_88._0_4_) * 0.5 + local_88._0_4_ + 2.0;
        fStack204 = fStack108 + 0.0;
        uStack212 = CONCAT44(fStack112 + 0.0,
                             (local_78._4_4_ - local_88._4_4_) * 0.5 + local_88._4_4_ + 2.0);
        if ((ulonglong)*(uint *)(param_1 + 0x139) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            lVar9 = (ulonglong)*(uint *)(param_1 + 0x139) * 0x20 + *(longlong *)(DAT_140c63678 + 0x28);
        }
        else {
            lVar9 = *(longlong *)(DAT_140c63678 + 0x28);
        }
        if (param_1[0x121] != 0) {
            pplVar19 = (longlong **)
                    ((ulonglong)pplVar19 & 0xffffffff00000000 |
                     (ulonglong)
                             (uint)((DAT_140c63664 - *(float *)(param_1 + 0x122)) *
                                    *(float *)((longlong)param_1 + 0x914)));
            FUN_140103e60(param_1[0x121],&local_e8,lVar9,0,pplVar19);
        }
    }
    if (local_res8 != 0) {
        local_d8 = local_78._0_4_ + -2.0;
        fStack204 = fStack108 + 0.0;
        local_e8 = (longlong *)CONCAT44(local_88._4_4_ - 0.0,local_88._0_4_ - -2.0);
        piStack224 = (int *)CONCAT44(fStack124 - 0.0,fStack128 - 0.0);
        uStack212 = CONCAT44(fStack112 + 0.0,local_78._4_4_ + 0.0);
        FUN_14018efa0(local_b8,&DAT_140b3b8f4,local_res8);
        pplVar19 = &local_e8;
        (**(code **)(*DAT_140c65680 + 0x108))
                (DAT_140c65680,*(undefined8 *)(param_1[0x57] + 0x60),local_b8._8_8_,0xffffffffffffffff
                        ,pplVar19,CONCAT44(uVar22,10),&DAT_140c67350,1);
        if (local_b8._8_8_ != 0) {
            FUN_14018b900(local_b8._8_8_,0);
        }
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
    cVar3 = FUN_14053bc30();
    param_2 = local_res10;
    param_3 = local_res18;
    if (((cVar3 != '\0') && (*(longlong **)(param_1[4] + 0xd38) == param_1)) &&
        ((longlong **)param_1[0x106] == pplVar1)) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        param_3 = local_res18;
        local_b8._0_16_ = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
        param_2 = local_res10;
        if (param_1[0x133] != 0) {
            pplVar19 = (longlong **)
                    ((ulonglong)pplVar19 & 0xffffffff00000000 |
                     (ulonglong)
                             (uint)((DAT_140c63664 - *(float *)(param_1 + 0x134)) *
                                    *(float *)((longlong)param_1 + 0x9a4)));
            FUN_140103cf0(param_1[0x133],local_res18,local_b8,0,pplVar19);
            param_2 = local_res10;
        }
    }
    LAB_1406d296b:
    if ((*(longlong **)(param_1[4] + 0xd40) == param_1) &&
        (param_1[0x8a] ==
         *(longlong *)(param_1[0x8b] + (ulonglong)*(uint *)((longlong)param_2 + 4) * 8))) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        lVar9 = param_1[0x8a];
        local_e8 = (longlong *)(lVar9 + 0x14);
        piStack224 = (int *)(lVar9 + 0x1c);
        local_d8 = (float)(*(int *)local_e8 + *piStack224);
        uVar6 = *(int *)(lVar9 + 0x18) + *(int *)(lVar9 + 0x20);
        uStack212 = uStack212 & 0xffffffff00000000 | (ulonglong)uVar6;
        local_res10 = (undefined8 *)CONCAT44((int)uVar6 >> 1,(int)local_d8 >> 1);
        iVar5 = (**(code **)(*param_1 + 0x160))(param_1,&local_res10);
        local_c8 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar15)));
        if (iVar5 == 2) {
            lVar9 = param_1[0x127];
            if (lVar9 == 0) {
                return;
            }
            fVar14 = (DAT_140c63664 - *(float *)(param_1 + 0x128)) * *(float *)((longlong)param_1 + 0x944)
                    ;
        }
        else {
            lVar9 = param_1[0x12d];
            if (lVar9 == 0) {
                return;
            }
            fVar14 = (DAT_140c63664 - *(float *)(param_1 + 0x12e)) * *(float *)((longlong)param_1 + 0x974)
                    ;
        }
        FUN_140103cf0(lVar9,param_3,local_c8,0,
                      (ulonglong)pplVar19 & 0xffffffff00000000 | (ulonglong)(uint)fVar14);
    }
    return;
}



void FUN_1406d2aa0(longlong *param_1)

{
    longlong lVar1;

    FUN_1406d0ec0();
    if (((*(byte *)((longlong)param_1 + 0x1c) & 0x80) != 0) &&
        ((ulonglong)param_1[0x108] < DAT_140c65c40)) {
        FUN_1406d31c0(param_1,param_1 + 0x6a,1);
        param_1[0x108] = DAT_140c65c40;
    }
    lVar1 = param_1[0x8a];
    if (lVar1 != 0) {
        if ((*(int *)(lVar1 + 8) == 2) || (*(int *)(lVar1 + 8) == 5)) {
            lVar1 = FUN_1403ac780(DAT_140c65898 + 0xa0,lVar1 + 0xc);
            if (lVar1 == 0) goto LAB_1406d2b19;
        }
        return;
    }
    LAB_1406d2b19:
    (**(code **)(*param_1 + 0x1e8))(param_1,0);
    // WARNING: Could not recover jumptable at 0x0001406d2b34. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x1f0))(param_1,0);
    return;
}



void FUN_1406d2b60(longlong param_1)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong local_18;
    ulonglong local_10;

    iVar1 = *(int *)(param_1 + 0x44c);
    uVar2 = 0;
    lVar3 = DAT_140c65898 + 0xa0;
    local_10 = 0;
    local_18 = 0;
    if (iVar1 == 0) goto LAB_1406d2ba7;
    if (iVar1 != 1) {
        if (iVar1 == 2) {
            lVar3 = DAT_140c65898 + 0xd0;
            goto LAB_1406d2ba7;
        }
        if (iVar1 == 10) {
            lVar3 = DAT_140c65898 + 0xe8;
            goto LAB_1406d2ba7;
        }
    }
    lVar3 = DAT_140c65898 + 0xb8;
    LAB_1406d2ba7:
    FUN_1403d6710(lVar3,&local_18);
    if (local_10 != 0) {
        do {
            lVar3 = *(longlong *)(local_18 + uVar2 * 8);
            if (*(int *)(lVar3 + 0x8c) != 0) {
                *(undefined4 *)(lVar3 + 0x8c) = 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < local_10);
    }
    if (local_18 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001406d2bfc. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(local_18 + -0x10) + 8))(local_18 + -0x10);
    return;
}



undefined8 FUN_1406d2c10(int param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong local_18;
    ulonglong local_10;

    uVar2 = 0;
    lVar1 = DAT_140c65898 + 0xa0;
    local_10 = 0;
    local_18 = 0;
    if (param_1 == 0) goto LAB_1406d2c53;
    if (param_1 != 1) {
        if (param_1 == 2) {
            lVar1 = DAT_140c65898 + 0xd0;
            goto LAB_1406d2c53;
        }
        if (param_1 == 10) {
            lVar1 = DAT_140c65898 + 0xe8;
            goto LAB_1406d2c53;
        }
    }
    lVar1 = DAT_140c65898 + 0xb8;
    LAB_1406d2c53:
    FUN_1403d6710(lVar1,&local_18);
    if (local_10 != 0) {
        do {
            if (*(int *)(*(longlong *)(local_18 + uVar2 * 8) + 0x8c) != 0) {
                uVar3 = 1;
                goto LAB_1406d2c87;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < local_10);
    }
    uVar3 = 0;
    LAB_1406d2c87:
    if (local_18 != 0) {
        (**(code **)(*(longlong *)(local_18 + -0x10) + 8))(local_18 + -0x10);
    }
    return uVar3;
}



ulonglong FUN_1406d2cb0(int param_1)

{
    ulonglong uVar1;
    int iVar2;
    ulonglong in_RAX;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong local_18;
    ulonglong local_10;

    if (DAT_140c65898 == 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    uVar5 = 0;
    lVar4 = DAT_140c65898 + 0xa0;
    local_10 = 0;
    local_18 = 0;
    if (param_1 == 0) goto LAB_1406d2d0c;
    if (param_1 != 1) {
        if (param_1 == 2) {
            lVar4 = DAT_140c65898 + 0xd0;
            goto LAB_1406d2d0c;
        }
        if (param_1 == 10) {
            lVar4 = DAT_140c65898 + 0xe8;
            goto LAB_1406d2d0c;
        }
    }
    lVar4 = DAT_140c65898 + 0xb8;
    LAB_1406d2d0c:
    FUN_1403d6710(lVar4,&local_18);
    uVar1 = local_10;
    lVar4 = local_18;
    if (local_10 != 0) {
        do {
            lVar3 = *(longlong *)(lVar4 + uVar5 * 8);
            if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x40), lVar3 != 0)) &&
                ((*(uint *)(lVar3 + 0x154) & 0x200) != 0)) {
                lVar3 = FUN_1405a8a40();
                if (lVar3 != 0) {
                    iVar2 = FUN_140552f50(lVar3);
                    if (iVar2 == 0) {
                        uVar5 = 1;
                        goto LAB_1406d2d69;
                    }
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
    }
    uVar5 = 0;
    LAB_1406d2d69:
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    return uVar5;
}



void FUN_1406d31c0(longlong *param_1,undefined8 param_2,char param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined4 local_res8;
    undefined4 local_resc;

    lVar3 = (**(code **)(*param_1 + 0x298))();
    if ((lVar3 == 0) || (iVar1 = *(int *)(lVar3 + 8), iVar1 == 1)) {
        (**(code **)(*param_1 + 0x1f8))(param_1,0);
        (**(code **)(*param_1 + 0x200))(param_1,0);
    }
    else if (((param_3 != '\0') || (lVar3 != param_1[0x8a])) && ((iVar1 == 2 || (iVar1 == 5)))) {
        local_res8 = *(undefined4 *)(lVar3 + 0xc);
        lVar2 = *param_1;
        local_resc = *(undefined4 *)(lVar3 + 0x10);
        uVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res8);
        // WARNING: Could not recover jumptable at 0x0001406d324b. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(lVar2 + 0x78))(param_1,&DAT_1409f79a4,3,uVar4);
        return;
    }
    return;
}



void FUN_1406d3280(longlong *param_1,int *param_2)

{
    undefined2 *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined2 *puVar5;
    undefined local_28 [8];
    longlong local_20;

    FUN_1406d31c0(param_1,param_2,0);
    lVar3 = (**(code **)(*param_1 + 0x298))(param_1,param_2);
    param_1[0x8a] = lVar3;
    if ((((*(char *)((longlong)param_1 + 0x829) != '\0') && (param_1[0x106] != 0)) &&
         ((iVar2 = *(int *)(param_1[0x106] + 8), iVar2 == 2 || (iVar2 - 5U < 2)))) &&
        ((iVar2 = param_2[1] - *(int *)((longlong)param_1 + 0x38c),
                0x30 < iVar2 * iVar2 +
                       (*param_2 - *(int *)(param_1 + 0x71)) * (*param_2 - *(int *)(param_1 + 0x71)) &&
                (*(longlong *)(param_1[4] + 0xd38) == 0)))) {
        iVar2 = FUN_14018cdf0();
        if (0x7d < (uint)(iVar2 - *(int *)((longlong)param_1 + 0x3a4))) {
            lVar3 = param_1[0x106];
            if (*(int *)(lVar3 + 0xc) < 300) {
                uVar4 = (ulonglong)(CONCAT41(*(int *)(lVar3 + 0xc),*(undefined *)(lVar3 + 0x10)) & 0xffff);
            }
            else {
                uVar4 = 0xffffffffffffffff;
            }
            lVar3 = FUN_14018efa0(local_28,&DAT_140b3b8ec,*(undefined4 *)(lVar3 + 0x58));
            if (*(longlong *)(param_1[0x106] + 0x28) == 0) {
                puVar5 = (undefined2 *)0x0;
            }
            else {
                puVar1 = *(undefined2 **)(*(longlong *)(param_1[0x106] + 0x28) + 0x20);
                puVar5 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *)0x0) {
                    puVar5 = puVar1;
                }
            }
            FUN_1406d4d50(param_1,0,param_1[0x86],puVar5,uVar4,*(undefined8 *)(lVar3 + 8));
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
        }
    }
    FUN_1400d23b0(param_1,param_2);
    return;
}



undefined8 FUN_1406d33e0(longlong *param_1,int param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    undefined8 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    float fVar5;

    uVar4 = (ulonglong)param_2;
    uVar2 = FUN_1400d2120(param_1,uVar4 & 0xffffffff);
    if ((*(byte *)((longlong)param_1 + 0x1c) & 0x40) != 0) {
        fVar5 = (float)(**(code **)(*param_1 + 0x48))();
        if (((fVar5 <= 0.0) || (fVar5 = (float)(**(code **)(*param_1 + 0x48))(), 1.0 <= fVar5)) &&
            (*(longlong *)(param_1[4] + 0xd38) == 0)) {
            if (param_2 == 0) {
                *(undefined *)((longlong)param_1 + 0x829) = 1;
            }
            else if (param_2 == 1) {
                *(undefined *)(param_1 + 0x105) = 1;
            }
            uVar1 = *param_3;
            *(undefined4 *)(param_1 + 0x71) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0x38c) = param_3[1];
            *(undefined4 *)(param_1 + uVar4 + 0x6c) = uVar1;
            *(undefined4 *)((longlong)param_1 + uVar4 * 8 + 0x364) =
                    *(undefined4 *)((longlong)param_1 + 0x38c);
            uVar1 = FUN_14018cdf0();
            *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar1;
            *(undefined4 *)((longlong)param_1 + uVar4 * 4 + 0x390) = uVar1;
            lVar3 = (**(code **)(*param_1 + 0x298))(param_1,param_3);
            if (lVar3 != 0) {
                param_1[0x106] = lVar3;
            }
        }
        return 0;
    }
    return uVar2;
}



void FUN_1406d4d50(longlong param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_28 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x168),L"DragDropInvalid"
    );
    local_20 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x168),L"DragDropIgnore")
            ;
    local_18 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x168),L"DragDropValid");
    local_10 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x168),L"DragDropInvalid"
    );
    FUN_1406d4e40(param_1,param_2,param_3,&local_28,param_4,param_5,param_6);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406d4e40(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,longlong param_6,undefined8 param_7)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined2 *puVar5;
    longlong *plVar6;
    undefined8 uVar7;
    uint uVar8;
    longlong lVar9;
    int *piVar10;
    int iVar11;
    uint uVar12;
    ulonglong uVar13;
    undefined2 *puVar14;
    int *piVar15;
    undefined auVar16 [16];
    undefined auVar17 [16];
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;

    uVar7 = param_6;
    lVar3 = DAT_140c65898;
    uVar8 = (uint)param_6;
    uVar12 = (uint)((ulonglong)param_6 >> 8) & 0xff;
    lVar9 = FUN_1403ac780(DAT_140c65898 + 0xa0);
    if (lVar9 != 0) {
        if (uVar12 < 300) {
            uVar8 = uVar12 << 8 | uVar8 & 0xff;
        }
        else {
            uVar8 = 0xffffffff;
        }
        lVar3 = *(longlong *)(lVar3 + 0x73d8);
        param_6 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar8) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                param_6 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((param_6 == lVar3) || (uVar8 < *(uint *)(param_6 + 0x20))) {
            param_6 = lVar3;
        }
        if ((param_6 == lVar3) || (*(int *)(param_6 + 0x24) == 0)) {
            lVar3 = *(longlong *)(lVar9 + 0x40);
            piVar10 = *(int **)(lVar9 + 0x48);
            iVar11 = *(int *)(lVar3 + 0x158);
            piVar15 = piVar10;
            if (piVar10 == (int *)0x0) {
                piVar15 = (int *)(lVar3 + 8);
            }
            if (piVar15 != (int *)0x0) {
                if (piVar10 == (int *)0x0) {
                    piVar10 = (int *)(lVar3 + 8);
                }
                iVar11 = *piVar10;
            }
            puVar14 = (undefined2 *)0x0;
            if ((iVar11 - 1U < 7) &&
                (lVar3 = *(longlong *)(param_1 + 0xb80 + (longlong)iVar11 * 0x30), lVar3 != 0)) {
                puVar5 = *(undefined2 **)(lVar3 + 0x20);
                puVar14 = &DAT_140b7b704;
                if (puVar5 != (undefined2 *)0x0) {
                    puVar14 = puVar5;
                }
            }
            if (param_2 == '\0') {
                FUN_1400e9680(*(undefined8 *)(param_1 + 0x20),param_1,param_3,param_4,param_5,uVar7,puVar14)
                        ;
            }
            else {
                FUN_1400e9900();
            }
            auVar16 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(
                                                                                              SUB1610(CONCAT97((unkuint9)
                                                                                                                       SUB158(CONCAT78(SUB157(CONCAT69(
                                                                                                                                               SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312
                                                                                                                                                                                                (SUB153(CONCAT213(SUB152(CONCAT114(SUB161(
                                                                                                                                                                                                                                           _DAT_140b7b6f0 >> 0x38,0),
                                                                                                                                                                                                                                   SUB1614(_DAT_140b7b6f0,0)) >> 0x68,0),
                                                                                                                                                                                                                  CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30,0),
                                                                                                                                                                                                                            SUB1612(_DAT_140b7b6f0,0))) >> 0x60,0),
                                                                                                                                                                                                 SUB1612(_DAT_140b7b6f0,0)) >> 0x58,0),
                                                                                                                                                                                 CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28,0),
                                                                                                                                                                                           SUB1610(_DAT_140b7b6f0,0))) >> 0x50,0),
                                                                                                                                                                SUB1610(_DAT_140b7b6f0,0)) >> 0x48,0),
                                                                                                                                               CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20,0),
                                                                                                                                                        SUB168(_DAT_140b7b6f0,0))) >> 0x40,0),
                                                                                                                                       SUB168(_DAT_140b7b6f0,0)) >> 0x38,0) &
                                                                                                               SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                       ,0) &
                                                                                                               SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                       ,0) &
                                                                                                               SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                       ,0) &
                                                                                                               SUB169((undefined  [16])0xffffffffffffffff >> 0x38
                                                                                                                       ,0),
                                                                                                               (SUB167(_DAT_140b7b6f0,0) >> 0x18) << 0x30) >>
                                                                                                                                                           0x30,0),SUB166(_DAT_140b7b6f0,0)) >> 0x28,0) &
                                                                                      SUB1611((undefined  [16])0xffff00ffffffffff >>
                                                                                                                                  0x28,0),
                                                                                      (SUB165(_DAT_140b7b6f0,0) >> 0x10) << 0x20) >>
                                                                                                                                  0x20,0),SUB164(_DAT_140b7b6f0,0)) >> 0x18,0) &
                                                  SUB1613((undefined  [16])0xffffffff00ffffff >> 0x18,0),
                                                  (SUB163(_DAT_140b7b6f0,0) >> 8) << 0x10) >> 0x10,0),
                                SUB162(_DAT_140b7b6f0,0)) & (undefined  [16])0xffffffffffff00ff;
            auVar17 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                          SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162
                                                                                                                    (auVar16 >> 0x30,0),SUB1612(auVar16,0)) >> 0x50,0)
                                                                                  ,CONCAT28(SUB162(auVar16 >> 0x20,0),
                                                                                            SUB168(auVar16,0))) >> 0x40,0),
                                                                          SUB168(auVar16,0)) >> 0x30,0) &
                                                  SUB1610((undefined  [16])0xffffffffffffffff >> 0x30,0) &
                                                  SUB1610((undefined  [16])0xffffffffffffffff >> 0x30,0),
                                                  (SUB166(auVar16,0) >> 0x10) << 0x20) >> 0x20,0),
                                SUB164(auVar16,0)) & (undefined  [16])0xffffffff0000ffff;
            local_38 = (float)SUB164(auVar17 >> 0x40,0) * 0.003921569;
            fStack52 = (float)SUB164(auVar17 >> 0x20,0) * 0.003921569;
            fStack48 = (float)(SUB164(auVar16,0) & 0xffff) * 0.003921569;
            fStack44 = (float)SUB164(auVar17 >> 0x60,0) * 0.003921569;
            uVar8 = FUN_140141f10(DAT_140c63678,&local_38);
            lVar3 = *(longlong *)(param_1 + 0x20);
            lVar9 = *(longlong *)(param_1 + 0x2b8);
            pplVar1 = (longlong **)(lVar3 + 0xd90);
            uVar13 = (ulonglong)uVar8;
            plVar6 = *pplVar1;
            if (plVar6 == (longlong *)0x0) {
                (**(code **)(*DAT_140c65680 + 0x28))
                        (DAT_140c65680,*(undefined8 *)(lVar9 + 0x60),param_7,0xffffffffffffffff,pplVar1);
            }
            else {
                (**(code **)(*plVar6 + 0x38))(plVar6,param_7,0xffffffffffffffff);
                (**(code **)(**pplVar1 + 0x28))(*pplVar1,*(undefined8 *)(lVar9 + 0x60));
            }
            puVar2 = (undefined8 *)(lVar3 + 0xd88);
            lVar9 = DAT_140c63678;
            if (puVar2 != &param_6) {
                FUN_1401429a0(DAT_140c63678,*(uint *)puVar2);
                lVar9 = DAT_140c63678;
                *(uint *)puVar2 = uVar8;
                if (uVar13 < *(ulonglong *)(lVar9 + 0x30)) {
                    iVar11 = *(int *)(uVar13 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28));
                    if (iVar11 - 1U < 0xfffffffe) {
                        *(int *)(uVar13 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x28)) = iVar11 + 1;
                    }
                }
            }
            *(undefined4 *)(lVar3 + 0xd98) = 10;
            FUN_1401429a0(lVar9,uVar13);
            FUN_14053bab0();
        }
    }
    return;
}



ulonglong FUN_1406d50f0(longlong *param_1)

{
    longlong **pplVar1;
    ulonglong uVar2;
    uint uVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    int *piVar8;
    uint uVar9;
    longlong lVar10;
    longlong lVar11;
    uint local_res8;
    uint local_resc;
    ulonglong local_38;
    undefined8 local_30;
    ulonglong local_28;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x298))();
    lVar6 = param_1[4];
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x160))();
    if ((int)plVar5 != 3) {
        pplVar1 = *(longlong ***)(lVar6 + 0xd70);
        lVar10 = *(longlong *)(lVar6 + 0xd78) - (longlong)pplVar1;
        if ((lVar10 == 0x16) &&
            (plVar5 = (longlong *)FUN_1407e6af0(pplVar1,"DDUseItemWithInventory",0x16),
                    lVar11 = DAT_140c65898, (int)plVar5 == 0)) {
            local_res8 = (uint)((ulonglong)*(undefined8 *)(lVar6 + 0xda0) >> 8) & 0xff;
            local_resc = (uint)*(undefined8 *)(lVar6 + 0xda0) & 0xff;
            if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
                 (lVar6 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res8), lVar6 == 0)) ||
                (plVar5 = (longlong *)FUN_14056a070(lVar6,0,1,(longlong)plVar4 + 0xc),
                        lVar11 = DAT_140c65898, (int)plVar5 != 0)) {
                plVar5 = (longlong *)FUN_1403998e0(lVar11,&local_res8,1,(longlong)plVar4 + 0xc);
            }
        }
        else {
            lVar11 = DAT_140c65898;
            if ((lVar10 == 0x10) &&
                ((plVar5 = *pplVar1, plVar5 == (longlong *)0x70536d6574494444 &&
                                     (plVar5 = pplVar1[1], plVar5 == (longlong *)0x6b6361745374696c)))) {
                uVar2 = *(ulonglong *)(lVar6 + 0xda0);
                local_res8 = (uint)(uVar2 >> 8) & 0xff;
                plVar5 = (longlong *)(uVar2 & 0xff);
                local_resc = (uint)plVar5;
                if (plVar4 != (longlong *)0x0) {
                    uVar9 = *(uint *)(plVar4 + 1);
                    plVar5 = (longlong *)(ulonglong)uVar9;
                    if (uVar9 == 1) {
                        plVar5 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0);
                        if (plVar5 == (longlong *)0x0) goto LAB_1406d55a7;
                        uVar9 = 1;
                        if (*(uint *)(plVar5 + 0xf) != 0) {
                            uVar9 = *(uint *)(plVar5 + 0xf);
                        }
                        if (((uint)(uVar2 >> 0x10) & 0xffff) == uVar9) {
                            plVar5 = (longlong *)FUN_1403c17d0(lVar11,&local_res8,(longlong)plVar4 + 0xc,0);
                            goto LAB_1406d55a7;
                        }
                        lVar10 = *plVar5;
                        plVar7 = plVar5;
                    }
                    else {
                        if (uVar9 != 2) goto LAB_1406d55a7;
                        plVar7 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0);
                        local_res8 = *(uint *)((longlong)plVar4 + 0xc);
                        local_resc = *(uint *)(plVar4 + 2);
                        plVar5 = (longlong *)FUN_1403ac780(lVar11 + 0xa0,&local_res8);
                        if (*(int *)(plVar7[8] + 0x144) != *(int *)(plVar5[8] + 0x144)) goto LAB_1406d55a7;
                        lVar10 = *plVar7;
                    }
                    local_28 = 0;
                    local_30 = 0;
                    local_38 = 0;
                    local_38 = (**(code **)(lVar10 + 0x30))(plVar7);
                    local_28 = local_28 & 0xffffffff00000000 | (ulonglong)*(ushort *)(lVar6 + 0xda2);
                    local_30 = *(undefined8 *)((longlong)plVar4 + 0xc);
                    plVar5 = (longlong *)FUN_1403f4900(DAT_140c65898,0x17d,&local_38);
                }
            }
            else if ((lVar10 == 0x13) &&
                     (plVar5 = (longlong *)FUN_1407e6af0(pplVar1,"DDSupplySatchelItem",0x13),
                             (int)plVar5 == 0)) {
                uVar2 = *(ulonglong *)(lVar6 + 0xda0);
                local_resc = (uint)uVar2 & 0xff;
                local_res8 = (uint)(uVar2 >> 8) & 0xff;
                plVar5 = (longlong *)FUN_1403acab0(DAT_140c65898 + 0xa0,&local_res8);
                if (plVar5 != (longlong *)0x0) {
                    local_30 = 0;
                    local_38 = uVar2 & 0xff | (ulonglong)*(ushort *)(lVar6 + 0xda2) << 0x20;
                    if ((plVar4 == (longlong *)0x0) || (*(int *)(plVar4 + 1) != 2)) {
                        local_30 = 0xffffffff0000012c;
                    }
                    else {
                        piVar8 = (int *)FUN_1403acab0(DAT_140c65898 + 0xa0,(longlong)plVar4 + 0xc);
                        if ((piVar8 != (int *)0x0) && (*piVar8 == *(int *)plVar5)) {
                            local_30 = *(undefined8 *)((longlong)plVar4 + 0xc);
                        }
                    }
                    plVar5 = (longlong *)FUN_1403f4900(DAT_140c65898,0x184,&local_38);
                }
            }
            else {
                lVar11 = DAT_140c65898;
                if (((lVar10 == 9) && (plVar5 = *pplVar1, plVar5 == (longlong *)0x6574496761424444)) &&
                    (plVar5 = (longlong *)0x0, *(char *)(pplVar1 + 1) == 'm')) {
                    local_res8 = (uint)(*(ulonglong *)(lVar6 + 0xda0) >> 8) & 0xff;
                    plVar5 = (longlong *)(*(ulonglong *)(lVar6 + 0xda0) & 0xff);
                    local_resc = (uint)plVar5;
                    if ((plVar4 != (longlong *)0x0) &&
                        (((*(uint *)((longlong)plVar4 + 0xc) != local_res8 ||
                           (*(int *)(plVar4 + 2) != local_resc)) && (local_res8 != 8)))) {
                        uVar9 = local_res8;
                        if (local_res8 == 5) {
                            uVar9 = 1;
                        }
                        uVar3 = *(uint *)((longlong)param_1 + 0x44c);
                        if (*(uint *)((longlong)param_1 + 0x44c) == 5) {
                            uVar3 = 1;
                        }
                        if ((*(int *)((longlong)param_1 + 0x824) == 0) || (uVar3 != uVar9)) {
                            plVar5 = (longlong *)FUN_1403c17d0(DAT_140c65898,&local_res8,(longlong)plVar4 + 0xc,0)
                                    ;
                        }
                        else {
                            plVar5 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res8);
                            if (((plVar5 != (longlong *)0x0) && (*plVar4 != 0)) &&
                                ((piVar8 = *(int **)(*plVar4 + 0x40), (*(byte *)(piVar8 + 0x55) & 4) != 0 &&
                                                                      (plVar5 = (longlong *)plVar5[8], *piVar8 == *(int *)plVar5)))) {
                                plVar5 = (longlong *)FUN_1403c17d0(lVar11,&local_res8,(longlong)plVar4 + 0xc,0);
                            }
                        }
                    }
                }
                else {
                    if ((lVar10 == 0xf) &&
                        (plVar5 = (longlong *)FUN_1407e6af0(pplVar1,"DDGuildBankItem",0xf), (int)plVar5 == 0))
                    {
                        if ((plVar4 == (longlong *)0x0) ||
                            (plVar5 = (longlong *)(ulonglong)(*(int *)(plVar4 + 1) - 1U),
                                    1 < *(int *)(plVar4 + 1) - 1U)) goto LAB_1406d55a7;
                        plVar5 = (longlong *)FUN_140584660();
                    }
                    else {
                        if ((((lVar10 != 0x12) ||
                              ((plVar5 = *pplVar1, plVar5 != (longlong *)0x7261507261574444 ||
                                                   (plVar5 = pplVar1[1], plVar5 != (longlong *)0x74496b6e61427974)))) ||
                             (plVar5 = (longlong *)(ulonglong)*(ushort *)(pplVar1 + 2),
                                     *(ushort *)(pplVar1 + 2) != 0x6d65)) ||
                            ((plVar4 == (longlong *)0x0 ||
                              (plVar5 = (longlong *)(ulonglong)(*(int *)(plVar4 + 1) - 1U),
                                      1 < *(int *)(plVar4 + 1) - 1U)))) goto LAB_1406d55a7;
                        plVar5 = (longlong *)FUN_140584690();
                    }
                    if (plVar5 != (longlong *)0x0) {
                        local_res8 = *(uint *)((longlong)plVar4 + 0xc);
                        local_resc = *(uint *)(plVar4 + 2);
                        plVar5 = (longlong *)FUN_14057f730(plVar5,&local_res8);
                    }
                }
            }
        }
    }
    LAB_1406d55a7:
    return (ulonglong)plVar5 & 0xffffffffffffff00;
}



void FUN_1406d55c0(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    uint uVar6;
    longlong local_res8;

    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xda0);
    uVar6 = (uint)((ulonglong)uVar1 >> 8) & 0xff;
    if (uVar6 < 300) {
        uVar6 = uVar6 << 8 | (uint)uVar1 & 0xff;
    }
    else {
        uVar6 = 0xffffffff;
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x73d8);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < uVar6) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (uVar6 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 != lVar2) && (*(int *)(local_res8 + 0x24) != 0)) {
        *(int *)(local_res8 + 0x24) = *(int *)(local_res8 + 0x24) + -1;
    }
    puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 0x20) + 0xd70);
    puVar5 = &DAT_140b7b700;
    if (puVar4 != (undefined1 *)0x0) {
        puVar5 = puVar4;
    }
    FUN_1400d4070(param_1,0x17,param_1,&DAT_1409d2ffc,puVar5,
                  (int)*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xda0));
    return;
}



void FUN_1406d56d0(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;

    *(undefined2 *)(param_1 + 0x828) = 0;
    *(undefined8 *)(param_1 + 0x830) = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd70);
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd78) - lVar1 == 0x13) {
        iVar2 = FUN_1407e6af0(lVar1,"DDUseItemWithTarget",0x13);
        if ((iVar2 == 0) && (param_2 != 3)) {
            return;
        }
    }
    FUN_1400d2970(param_1,param_2);
    return;
}



void FUN_1406d5750(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   longlong *param_5)

{
    char *pcVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined *puVar9;
    longlong lVar10;
    bool bVar11;
    uint local_res10 [2];
    ulonglong in_stack_ffffffffffffff88;
    uint local_58;
    uint local_54;
    longlong local_50;
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_3c;
    undefined4 local_34;

    if (param_2 != 0x19) {
        return;
    }
    lVar6 = *param_5;
    lVar5 = 0;
    lVar4 = -1;
    do {
        pcVar1 = (char *)(lVar6 + 1 + lVar4);
        lVar4 = lVar4 + 1;
    } while (*pcVar1 != '\0');
    lVar10 = (lVar4 + lVar6) - lVar6;
    lVar8 = lVar10 + 1;
    if (lVar8 != -1) {
        lVar5 = FUN_14018b280(lVar8,0);
    }
    FUN_1407db590(lVar5,lVar6,lVar10);
    puVar9 = (undefined *)(((lVar4 + lVar6) - lVar6) + lVar5);
    if (puVar9 != (undefined *)0x0) {
        *puVar9 = 0;
    }
    if (((longlong)puVar9 - lVar5 != 0x13) ||
        (iVar3 = FUN_1407e6af0(lVar5,"DDUseItemWithTarget",0x13), iVar3 != 0)) goto LAB_1406d5897;
    local_58 = (uint)((ulonglong)(longlong)(int)*(uint *)(param_5 + 1) >> 8) & 0xff;
    local_54 = *(uint *)(param_5 + 1) & 0xff;
    uVar2 = *(uint *)(DAT_140c65898 + 0x64c4);
    local_res10[0] = uVar2;
    lVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_58);
    if ((lVar4 == 0) ||
        ((lVar6 = FUN_14056a030(lVar4), lVar4 = DAT_140c65898, lVar6 == 0 ||
                                                               (*(int *)(*(longlong *)(lVar6 + 0x70) + 0x7c) != 1)))) goto LAB_1406d5897;
    lVar8 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar8 == 0) {
        iVar3 = 0x1e;
    }
    else {
        lVar10 = FUN_1403ac780(DAT_140c65898 + 0xa0);
        if (lVar10 == 0) {
            iVar3 = 0x16;
        }
        else {
            lVar7 = *(longlong *)(lVar10 + 0x50);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar10 + 0x40) + 0x9c;
            }
            if ((*(int *)(lVar7 + 0x80) == 0) ||
                (lVar8 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar7 + 0x80),lVar8), lVar4 = DAT_140c65898,
                        lVar8 == 0)) {
                LAB_1406d5a0a:
                iVar3 = 4;
            }
            else {
                lVar7 = *(longlong *)(lVar10 + 0x40);
                if (((*(uint *)(lVar7 + 0x154) & 0x400) == 0) || (*(int *)(lVar7 + 0x180) == 0)) {
                    bVar11 = true;
                }
                else {
                    bVar11 = *(int *)(lVar10 + 0x20) == 0;
                }
                if (((*(uint *)(lVar7 + 0x154) & 0x200) == 0) && (!bVar11)) goto LAB_1406d5a0a;
                local_50 = 0;
                local_3c = 0;
                local_40 = 0;
                local_34 = 0x60;
                local_48 = 0;
                FUN_14055bdc0(DAT_140c65898,*(undefined8 *)(DAT_140c65898 + 0x78),lVar8,1,
                              in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong)uVar2);
                iVar3 = FUN_1403986f0();
                lVar4 = DAT_140c65898;
                if (local_50 != 0) {
                    (**(code **)(*(longlong *)(local_50 + -0x10) + 8))(local_50 + -0x10);
                    lVar4 = DAT_140c65898;
                }
            }
            if (iVar3 == 0) {
                FUN_1403998e0(lVar4,&local_58,2,local_res10);
                goto LAB_1406d5897;
            }
        }
    }
    FUN_1403a12a0(lVar4,iVar3,lVar6,0);
    LAB_1406d5897:
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    return;
}



longlong FUN_1406d5fa0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d6530();
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x1b0) >> 0x1d & 1) == 0)) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"BagWindow",pcVar4);
        FUN_140056570(param_1,1,uVar3);
        lVar1 = 0;
    }
    return lVar1;
}



undefined8 FUN_1406d6030(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406d5fa0();
    pdVar2 = *(double **)(param_1 + 0x10);
    if (lVar3 == 0) {
        *(undefined4 *)(pdVar2 + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0x44c);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6090(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined4 uVar5;
    int iVar6;
    longlong *plVar7;
    undefined8 *puVar8;

    plVar7 = (longlong *)FUN_1406d5fa0();
    if (plVar7 != (longlong *)0x0) {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar8 < *(undefined8 **)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            FUN_140056d60(param_1,2);
        }
        FUN_1406d0ec0(plVar7);
        lVar4 = *plVar7;
        iVar1 = *(int *)(plVar7 + 0x5a);
        iVar2 = *(int *)(plVar7 + 0x5b);
        iVar3 = *(int *)(plVar7 + 0xfd);
        uVar5 = (**(code **)(lVar4 + 0x268))(plVar7);
        iVar6 = (**(code **)(lVar4 + 0x2a0))(plVar7,uVar5);
        FUN_1400cad80(plVar7,iVar6 * iVar3 + (iVar1 - iVar2),iVar2 - iVar1,iVar3);
    }
    return 0;
}



undefined8 FUN_1406d6160(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    uint local_res10;
    uint local_res14;

    lVar1 = FUN_1406d5fa0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            local_res14 = FUN_140056d60(param_1,2);
            if (-1 < (int)local_res14) {
                local_res10 = (uint)((ulonglong)(longlong)(int)local_res14 >> 8) & 0xff;
                local_res14 = local_res14 & 0xff;
                uVar3 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
                uVar3 = FUN_140415d60(param_1,uVar3);
                return uVar3;
            }
        }
    }
    return 0;
}



undefined8 FUN_1406d61f0(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    byte bVar3;
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;
    uint uVar7;

    lVar5 = FUN_1406d5fa0();
    if (lVar5 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar4 = FUN_140056d60(param_1,2);
        if (-1 < iVar4) {
            lVar5 = FUN_1403ac780();
            if ((lVar5 == 0) || (bVar3 = 1, (*(uint *)(*(longlong *)(lVar5 + 0x40) + 0x154) & 0x100) == 0)
                    ) {
                bVar3 = 0;
            }
            uVar7 = (uint)bVar3;
            goto LAB_1406d62a6;
        }
    }
    uVar7 = 0;
    LAB_1406d62a6:
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d62d0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined4 local_res10;
    int local_res14;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            iVar1 = FUN_140056d60(param_1,2);
            if (0 < iVar1) {
                local_res14 = iVar1 + 0x10;
                local_res10 = 0;
                if (iVar1 - 1U < 4) {
                    lVar2 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
                    if (lVar2 != 0) {
                        uVar4 = FUN_140415d60(param_1,lVar2);
                        return uVar4;
                    }
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1406d6370(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 == 0) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar1 = FUN_140056d60(param_1,2);
        if (-1 < iVar1) {
            puVar4 = *(undefined4 **)(param_1 + 0x10);
            puVar4[2] = 1;
            if (iVar1 == 0) {
                *puVar4 = 1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
            goto LAB_1406d63ff;
        }
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    puVar4[2] = 1;
    LAB_1406d63ff:
    *puVar4 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6420(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 local_res10;
    int local_res14;
    uint local_res18;
    uint local_res1c;

    lVar1 = FUN_1406d5fa0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if ((((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
             (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) &&
            (local_res1c = FUN_140056d60(param_1,2), -1 < (int)local_res1c)) {
            local_res18 = (uint)((ulonglong)(longlong)(int)local_res1c >> 8) & 0xff;
            local_res1c = local_res1c & 0xff;
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
                ((0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28) &&
                  (local_res14 = FUN_140056d60(param_1,3), 0 < local_res14)))) {
                local_res14 = local_res14 + 0x10;
                local_res10 = 0;
                FUN_1403c17d0(DAT_140c65898,&local_res18,&local_res10,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406d64f0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    double *pdVar4;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            iVar1 = FUN_140056d60(param_1,2);
            if (0 < iVar1) {
                pdVar4 = *(double **)(param_1 + 0x10);
                *pdVar4 = (double)(iVar1 + 0x10U & 0xff);
                goto LAB_1406d655e;
            }
        }
    }
    pdVar4 = *(double **)(param_1 + 0x10);
    *pdVar4 = -1.0;
    LAB_1406d655e:
    *(undefined4 *)(pdVar4 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6580(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        FUN_140056d60(param_1,2);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d67b0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1406d5fa0();
    if (plVar3 == (longlong *)0x0) {
        return 0;
    }
    iVar2 = (**(code **)(*plVar3 + 0x268))(plVar3);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6800(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar3 = FUN_1406d5fa0();
    if (lVar3 != 0) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            iVar1 = FUN_140056d60(param_1,2);
        }
        else {
            iVar1 = 4;
        }
        iVar2 = 1;
        if (1 < iVar1) {
            iVar2 = iVar1;
        }
        *(int *)(lVar3 + 2000) = iVar2;
        FUN_1406d0ec0(lVar3);
    }
    return 0;
}



undefined8 FUN_1406d6880(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    lVar4 = FUN_1406d5fa0();
    if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x7dc);
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar1 = FUN_140056d60();
        }
        uVar2 = *(uint *)(lVar4 + 0x7e0);
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
            uVar2 = FUN_140056d60();
        }
        iVar6 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
        iVar7 = 1;
        if (1 < iVar6) {
            iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x7dc) = iVar7;
        *(int *)(lVar4 + 0x7e0) =
                (int)(((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) * iVar7) / iVar6;
        iVar6 = *(int *)(lVar4 + 0x2d4) - *(int *)(lVar4 + 0x2cc);
        if (0 < iVar6) {
            iVar6 = iVar6 - iVar7;
            iVar7 = *(int *)(lVar4 + 0x7d4) + iVar7;
            iVar3 = iVar6 / iVar7 + 1;
            iVar8 = 1;
            if (1 < iVar3) {
                iVar8 = iVar3;
            }
            *(int *)(lVar4 + 2000) = iVar8;
            FUN_1406d0ec0(lVar4,(longlong)iVar6 % (longlong)iVar7 & 0xffffffff);
        }
    }
    return 0;
}



undefined8 FUN_1406d69a0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_1400d6530(param_1,1);
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x1b0) >> 0x1d & 1) == 0)) {
        lVar2 = 0;
    }
    iVar3 = 1;
    if (lVar2 != 0) {
        iVar3 = *(int *)(lVar2 + 0x44c);
    }
    lVar2 = DAT_140c65898 + 0xa0;
    if (iVar3 == 0) goto LAB_1406d6a0a;
    if (iVar3 != 1) {
        if (iVar3 == 2) {
            lVar2 = DAT_140c65898 + 0xd0;
            goto LAB_1406d6a0a;
        }
        if (iVar3 == 10) {
            lVar2 = DAT_140c65898 + 0xe8;
            goto LAB_1406d6a0a;
        }
    }
    lVar2 = DAT_140c65898 + 0xb8;
    LAB_1406d6a0a:
    iVar3 = *(int *)(lVar2 + 0xc);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6a40(longlong param_1)

{
    double *pdVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;

    uVar2 = FUN_1400d6530(param_1,1);
    uVar7 = 0;
    iVar6 = 0;
    if ((uVar2 == 0) || ((*(uint *)(uVar2 + 0x1b0) >> 0x1d & 1) == 0)) {
        uVar2 = uVar7;
    }
    iVar5 = 1;
    if (uVar2 != 0) {
        iVar5 = *(int *)(uVar2 + 0x44c);
    }
    lVar3 = DAT_140c65898 + 0xa0;
    if (iVar5 == 0) goto LAB_1406d6aaf;
    if (iVar5 != 1) {
        if (iVar5 == 2) {
            lVar3 = DAT_140c65898 + 0xd0;
            goto LAB_1406d6aaf;
        }
        if (iVar5 == 10) {
            lVar3 = DAT_140c65898 + 0xe8;
            goto LAB_1406d6aaf;
        }
    }
    lVar3 = DAT_140c65898 + 0xb8;
    LAB_1406d6aaf:
    if (*(uint *)(lVar3 + 0xc) != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x10);
        uVar2 = (ulonglong)*(uint *)(lVar3 + 0xc);
        do {
            if (*plVar4 == 0) {
                uVar7 = (ulonglong)((int)uVar7 + 1);
            }
            iVar6 = (int)uVar7;
            plVar4 = plVar4 + 1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6b00(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            FUN_140056d60(param_1,2);
        }
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
            FUN_140056d60(param_1,3);
        }
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6bf0(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        FUN_140056d60(param_1,2);
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        FUN_140056d60(param_1,3);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d6e80(void)

{
    longlong lVar1;

    lVar1 = FUN_1406d5fa0();
    if (lVar1 != 0) {
        FUN_1406d2b60(lVar1);
    }
    return 0;
}



undefined8 FUN_1406d6ea0(longlong param_1)

{
    uint *puVar1;
    char cVar2;
    longlong lVar3;
    undefined4 uVar4;

    lVar3 = FUN_1400d6530(param_1,1);
    if ((lVar3 == 0) || ((*(uint *)(lVar3 + 0x1b0) >> 0x1d & 1) == 0)) {
        lVar3 = 0;
    }
    uVar4 = 1;
    if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 0x44c);
    }
    cVar2 = FUN_1406d2c10(uVar4);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(cVar2 != '\0');
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406d7000(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_1406d5fa0();
    if (lVar1 != 0) {
        uVar2 = FUN_140056bb0(param_1,2);
        FUN_14018f2d0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 0x20) != 0) {
            FUN_140109710(lVar1 + 0x8d8,*(longlong *)(lVar1 + 0x20) + 0xf0,local_20,0);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return 0;
}



undefined8 FUN_1406d7080(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined4 local_res10 [6];
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_1406d5fa0();
    if (lVar1 != 0) {
        uVar2 = FUN_140056bb0(param_1,2);
        FUN_14018f2d0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 0x20) != 0) {
            FUN_140109710(lVar1 + 0x908,*(longlong *)(lVar1 + 0x20) + 0xf0,local_20);
        }
        if ((ulonglong)*(uint *)(lVar1 + 0x9c8) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            lVar3 = (ulonglong)*(uint *)(lVar1 + 0x9c8) * 0x20 + *(longlong *)(DAT_140c63678 + 0x28);
        }
        else {
            lVar3 = *(longlong *)(DAT_140c63678 + 0x28);
        }
        uVar2 = FUN_140143880(local_res10,param_1,3,lVar3);
        FUN_14004f630(lVar1 + 0x9c8,uVar2);
        FUN_1401429a0(DAT_140c63678,local_res10[0]);
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406d7160(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 local_res10 [6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar1 = FUN_1406d5fa0();
    if (lVar1 != 0) {
        local_18 = _DAT_140c777d0;
        uStack20 = uRam0000000140c777d4;
        uStack16 = uRam0000000140c777d8;
        uStack12 = uRam0000000140c777dc;
        uVar2 = FUN_140143880(local_res10,param_1,2,&local_18);
        FUN_14004f630(lVar1 + 0x9c8,uVar2);
        FUN_1401429a0(DAT_140c63678,local_res10[0]);
    }
    return 0;
}



undefined8 FUN_1406d74a0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar2 = FUN_1406d5fa0();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
            puVar4 = puVar3;
        }
        if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
            uVar1 = 0;
        }
        else {
            uVar1 = 1;
        }
        *(undefined4 *)(lVar2 + 0x824) = uVar1;
        *(undefined4 *)(lVar2 + 0x820) = 1;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001406d78b1)

void FUN_1406d7570(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406d7581;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d75c2;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_AreAnyItemsNew_140c5e620 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 0x1c);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d765f;
    FUN_1400569b0(lVar2,"Apollo.BagWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406d7681:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406d769d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406d769d;
        if (iVar1 == 7) goto LAB_1406d7681;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406d769d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d76cc;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d76f2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d773a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d775f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d7783;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d77a4;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d77c9;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d780c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d7831;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406d786c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406d7885;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406d786c;
        if (iVar1 != 8) goto LAB_1406d7885;
    }
    uVar15 = *puVar10;
    LAB_1406d7885:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d7894;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar4 + -0x10) = &LAB_1406d5a40;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d78cb;
    FUN_1400f85d0(param_1 + 0xa80,L"BagWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d78db;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1406d78f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
    code *local_20;
    undefined8 local_18;
    longlong local_10;

    uVar8 = param_1[1];
    if (1 < uVar8) {
        local_28 = *param_1;
        local_20 = FUN_1406d1c40;
        uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        local_18 = param_3;
        local_10 = FUN_14018b280(uVar3,0);
        uVar7 = 0;
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
    }
    return;
}



bool FUN_1406d7ab0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 0x50);
    lVar2 = 0;
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x40) + 0x9c;
    }
    if (*(int *)(lVar1 + 0x80) != 0) {
        lVar2 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar1 + 0x80),*(undefined8 *)(DAT_140c65898 + 0x78)
        );
    }
    return lVar2 != 0;
}



undefined8 * FUN_1406d7b10(undefined8 *param_1)

{
    *(undefined4 *)((longlong)param_1 + 0xc) = 300;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    FUN_1401095e0(param_1 + 5);
    FUN_1405c7150(param_1 + 0xc,1);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = DAT_140c784d0;
    *(undefined4 *)(param_1 + 3) = DAT_140c784d4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_140c784d8;
    *(undefined4 *)(param_1 + 4) = DAT_140c784dc;
    FUN_1405c7ad0(param_1 + 0xc,0,0);
    *(undefined4 *)((longlong)param_1 + 0xc) = 300;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    return param_1;
}



undefined8 * FUN_1406d7ba0(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    char cVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    undefined8 *puVar9;
    int iVar10;
    undefined4 *in_stack_00000040;

    lVar7 = 0;
    FUN_1400c5920();
    *(undefined2 *)(param_1 + 0x80) = 0;
    *param_1 = &PTR_LAB_140b71330;
    *(undefined4 *)((longlong)param_1 + 0x404) = *in_stack_00000040;
    *(undefined4 *)(param_1 + 0x81) = in_stack_00000040[1];
    FUN_1406d7b10(param_1 + 0x82);
    FUN_1401095e0(param_1 + 0xd0);
    FUN_1401095e0(param_1 + 0xd6);
    FUN_1401095e0(param_1 + 0xdc);
    iVar10 = 7;
    puVar9 = param_1 + 0xe6;
    iVar8 = 7;
    do {
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        puVar9[-1] = puVar4;
        *puVar9 = puVar4;
        puVar9[1] = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        uVar2 = DAT_140c63664;
        puVar9[-4] = 0;
        *(undefined4 *)((longlong)puVar9 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar9 + -3) = uVar2;
        puVar9 = puVar9 + 6;
        iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    puVar9 = param_1 + 0x116;
    do {
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        puVar9[-1] = puVar4;
        *puVar9 = puVar4;
        puVar9[1] = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        uVar2 = DAT_140c63664;
        puVar9[-4] = 0;
        *(undefined4 *)((longlong)puVar9 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar9 + -3) = uVar2;
        puVar9 = puVar9 + 6;
        iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    param_1[0x142] = 0;
    FUN_1401095e0(param_1 + 0x143);
    FUN_1401095e0(param_1 + 0x149);
    FUN_1401095e0(param_1 + 0x14f);
    lVar6 = param_1[4];
    param_1[0x36] = param_1[0x36] | 0x100000000;
    if ((lVar6 != 0) &&
        ((param_1[0x143] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x145,L"HuddieNameplateFrame"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"HuddieNameplateFrame");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"HuddieNameplateFrame"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x145,L"HuddieNameplateFrame",L"HuddieNameplateFrame" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x143,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xd0] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xd2,L"UI_BK3_ItemDrag_DestinationNoGlow"), cVar3 == '\0'))))
    {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_DestinationNoGlow");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_DestinationNoGlow"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xd2,L"UI_BK3_ItemDrag_DestinationNoGlow",
                          L"UI_BK3_ItemDrag_DestinationNoGlow" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xd0,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xd6] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xd8,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow"),
                  cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_DestinationDeniedNoGlow"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xd8,L"UI_BK3_ItemDrag_DestinationDeniedNoGlow",
                          L"UI_BK3_ItemDrag_DestinationDeniedNoGlow" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xd6,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xdc] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xde,L"UI_BK3_ItemDrag_OriginalNoGlow"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_OriginalNoGlow");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_OriginalNoGlow"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xde,L"UI_BK3_ItemDrag_OriginalNoGlow",
                          L"UI_BK3_ItemDrag_OriginalNoGlow" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xdc,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x112] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x114,L"UI_BK3_ItemDrag_Quality_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Grey"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x114,L"UI_BK3_ItemDrag_Quality_Grey",
                          L"UI_BK3_ItemDrag_Quality_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x112,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x118] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x11a,L"UI_BK3_ItemDrag_Quality_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Grey"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x11a,L"UI_BK3_ItemDrag_Quality_Grey",
                          L"UI_BK3_ItemDrag_Quality_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x118,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x11e] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x120,L"UI_BK3_ItemDrag_Quality_White"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_White");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_White"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x120,L"UI_BK3_ItemDrag_Quality_White",
                          L"UI_BK3_ItemDrag_Quality_White" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x11e,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x124] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x126,L"UI_BK3_ItemDrag_Quality_Green"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Green");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Green"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x126,L"UI_BK3_ItemDrag_Quality_Green",
                          L"UI_BK3_ItemDrag_Quality_Green" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x124,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x12a] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 300,L"UI_BK3_ItemDrag_Quality_Blue"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Blue");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Blue"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 300,L"UI_BK3_ItemDrag_Quality_Blue",
                          L"UI_BK3_ItemDrag_Quality_Blue" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x12a,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x130] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x132,L"UI_BK3_ItemDrag_Quality_Purple"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Purple");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Purple"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x132,L"UI_BK3_ItemDrag_Quality_Purple",
                          L"UI_BK3_ItemDrag_Quality_Purple" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x130,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x136] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x138,L"UI_BK3_ItemDrag_Quality_Orange"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Orange");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Orange"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x138,L"UI_BK3_ItemDrag_Quality_Orange",
                          L"UI_BK3_ItemDrag_Quality_Orange" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x136,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x13c] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x13e,L"UI_BK3_ItemDrag_Quality_Pink"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_BK3_ItemDrag_Quality_Pink");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_BK3_ItemDrag_Quality_Pink"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x13e,L"UI_BK3_ItemDrag_Quality_Pink",
                          L"UI_BK3_ItemDrag_Quality_Pink" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x13c,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xe2] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xe4,L"UI_RarityBorder_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Grey"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xe4,L"UI_RarityBorder_Grey",L"UI_RarityBorder_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xe2,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xe8] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xea,L"UI_RarityBorder_Grey"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Grey");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Grey"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xea,L"UI_RarityBorder_Grey",L"UI_RarityBorder_Grey" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xe8,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xee] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xf0,L"UI_RarityBorder_White"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_White");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_White"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xf0,L"UI_RarityBorder_White",L"UI_RarityBorder_White" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xee,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xf4] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xf6,L"UI_RarityBorder_Green"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Green");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Green"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xf6,L"UI_RarityBorder_Green",L"UI_RarityBorder_Green" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xf4,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0xfa] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0xfc,L"UI_RarityBorder_Blue"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Blue");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Blue"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xfc,L"UI_RarityBorder_Blue",L"UI_RarityBorder_Blue" + lVar6);
        }
        FUN_1401097f0(param_1 + 0xfa,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x100] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x102,L"UI_RarityBorder_Purple"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Purple");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Purple"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x102,L"UI_RarityBorder_Purple",L"UI_RarityBorder_Purple" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x100,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x106] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x108,L"UI_RarityBorder_Orange"), cVar3 == '\0')))) {
        lVar5 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Orange");
        lVar6 = lVar7;
        if (lVar5 != 0) {
            do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
            } while (L"UI_RarityBorder_Orange"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x108,L"UI_RarityBorder_Orange",L"UI_RarityBorder_Orange" + lVar6);
        }
        FUN_1401097f0(param_1 + 0x106,lVar5);
    }
    lVar6 = param_1[4];
    if ((lVar6 != 0) &&
        ((param_1[0x10c] == 0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x10e,L"UI_RarityBorder_Pink"), cVar3 == '\0')))) {
        lVar6 = FUN_140108e80(lVar6 + 0xf0,L"UI_RarityBorder_Pink");
        if (lVar6 != 0) {
            do {
                lVar5 = lVar7 + 1;
                lVar7 = lVar7 + 1;
            } while (L"UI_RarityBorder_Pink"[lVar5] != L'\0');
            FUN_14001c480(param_1 + 0x10e,L"UI_RarityBorder_Pink",L"UI_RarityBorder_Pink" + lVar7);
        }
        FUN_1401097f0(param_1 + 0x10c,lVar6);
    }
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 3;
    return param_1;
}



undefined8 FUN_1406d86c0(undefined8 param_1,ulonglong param_2)

{
    FUN_1406d8700();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406d8700(undefined8 *param_1)

{
    int iVar1;
    int iVar2;
    undefined8 *puVar3;

    *param_1 = &PTR_LAB_140b71330;
    if ((longlong *)param_1[0x142] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x142] + 8))();
        param_1[0x142] = 0;
    }
    if ((longlong *)param_1[0x14f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14f] + 8))();
        param_1[0x14f] = 0;
    }
    if (param_1[0x152] != 0) {
        FUN_14018b900(param_1[0x152],0);
    }
    if ((longlong *)param_1[0x149] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x149] + 8))();
        param_1[0x149] = 0;
    }
    if (param_1[0x14c] != 0) {
        FUN_14018b900(param_1[0x14c],0);
    }
    if ((longlong *)param_1[0x143] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x143] + 8))();
        param_1[0x143] = 0;
    }
    if (param_1[0x146] != 0) {
        FUN_14018b900(param_1[0x146],0);
    }
    iVar2 = 7;
    iVar1 = 7;
    puVar3 = param_1 + 0x142;
    do {
        if ((longlong *)puVar3[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar3[-6] + 8))();
            puVar3[-6] = 0;
        }
        if (puVar3[-3] != 0) {
            FUN_14018b900(puVar3[-3],0);
        }
        iVar1 = iVar1 + -1;
        puVar3 = puVar3 + -6;
    } while (-1 < iVar1);
    puVar3 = param_1 + 0x112;
    do {
        if ((longlong *)puVar3[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar3[-6] + 8))();
            puVar3[-6] = 0;
        }
        if (puVar3[-3] != 0) {
            FUN_14018b900(puVar3[-3],0);
        }
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + -6;
    } while (-1 < iVar2);
    if ((longlong *)param_1[0xdc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdc] + 8))();
        param_1[0xdc] = 0;
    }
    if (param_1[0xdf] != 0) {
        FUN_14018b900(param_1[0xdf],0);
    }
    if ((longlong *)param_1[0xd6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd6] + 8))();
        param_1[0xd6] = 0;
    }
    if (param_1[0xd9] != 0) {
        FUN_14018b900(param_1[0xd9],0);
    }
    if ((longlong *)param_1[0xd0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd0] + 8))();
        param_1[0xd0] = 0;
    }
    if (param_1[0xd3] != 0) {
        FUN_14018b900(param_1[0xd3],0);
    }
    FUN_1405c72a0(param_1 + 0x8e);
    if ((longlong *)param_1[0x87] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x87] + 8))();
        param_1[0x87] = 0;
    }
    if (param_1[0x8a] != 0) {
        FUN_14018b900(param_1[0x8a],0);
    }
    FUN_1400c6030(param_1);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406d8920(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined4 *puVar6;
    int *piVar7;
    float fVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined local_38 [16];
    undefined local_28 [32];

    local_48 = *(undefined4 *)((longlong)param_1 + 0x2cc);
    uVar9 = 0x3f800000;
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    local_44 = *(undefined4 *)(param_1 + 0x5a);
    local_38._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
    local_38 = CONCAT412(0x3f800000,local_38._0_12_);
    local_40 = *(undefined4 *)((longlong)param_1 + 0x2d4);
    local_3c = *(undefined4 *)(param_1 + 0x5b);
    if (param_1[0x143] != 0) {
        FUN_140103cf0(param_1[0x143],&local_48,local_38,0,
                      (DAT_140c63664 - *(float *)(param_1 + 0x144)) *
                      *(float *)((longlong)param_1 + 0xa24));
    }
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    lVar3 = FUN_1403ac780(DAT_140c65898 + 0xa0,(longlong)param_1 + 0x404);
    iVar2 = 8;
    if (lVar3 == 0) {
        uVar4 = FUN_1403976a0();
    }
    else {
        lVar1 = *(longlong *)(lVar3 + 0x40);
        piVar5 = *(int **)(lVar3 + 0x48);
        uVar4 = *(undefined8 *)(lVar1 + 0x1e8);
        iVar2 = *(int *)(lVar1 + 0x158);
        piVar7 = piVar5;
        if (piVar5 == (int *)0x0) {
            piVar7 = (int *)(lVar1 + 8);
        }
        if (piVar7 != (int *)0x0) {
            if (piVar5 == (int *)0x0) {
                piVar5 = (int *)(lVar1 + 8);
            }
            iVar2 = *piVar5;
        }
    }
    if (param_1[4] != 0) {
        FUN_140109710(param_1 + 0x87,param_1[4] + 0xf0,uVar4,0);
    }
    local_38._0_12_ = CONCAT48(local_40,CONCAT44(local_44,local_48));
    local_38 = CONCAT412(local_3c,local_38._0_12_);
    puVar6 = (undefined4 *)FUN_140109900(param_1 + 0x143,local_28,local_38,0xffffffff);
    local_48 = *puVar6;
    local_38 = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
    local_44 = puVar6[1];
    local_40 = puVar6[2];
    local_3c = puVar6[3];
    if (param_1[0x87] == 0) {
        lVar3 = param_1[0x149];
        if (lVar3 == 0) goto LAB_1406d8bc8;
        fVar8 = (DAT_140c63664 - *(float *)(param_1 + 0x14a)) * *(float *)((longlong)param_1 + 0xa54);
    }
    else {
        FUN_140103cf0(param_1[0x87],&local_48,local_38,0,
                      (DAT_140c63664 - *(float *)(param_1 + 0x88)) *
                      *(float *)((longlong)param_1 + 0x444));
        if (iVar2 - 1U < 7) {
            (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
            lVar3 = (longlong)iVar2;
            local_38._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
            local_38 = CONCAT412(0x3f800000,local_38._0_12_);
            if (param_1[lVar3 * 6 + 0xe2] != 0) {
                FUN_140103cf0(param_1[lVar3 * 6 + 0xe2],&local_48,local_38,0,
                              (DAT_140c63664 - *(float *)(param_1 + lVar3 * 6 + 0xe3)) *
                              *(float *)((longlong)param_1 + lVar3 * 0x30 + 0x71c));
            }
        }
        if (*(longlong **)(param_1[4] + 0xd38) != param_1) goto LAB_1406d8bc8;
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        lVar3 = param_1[0xdc];
        local_38 = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
        if (lVar3 == 0) goto LAB_1406d8bc8;
        fVar8 = (DAT_140c63664 - *(float *)(param_1 + 0xdd)) * *(float *)((longlong)param_1 + 0x6ec);
    }
    FUN_140103cf0(lVar3,&local_48,local_38,0,fVar8);
    LAB_1406d8bc8:
    if (*(longlong **)(param_1[4] + 0xd40) == param_1) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        iVar2 = (**(code **)(*param_1 + 0x160))(param_1,&DAT_140c77760);
        local_38 = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
        if (iVar2 == 2) {
            lVar3 = param_1[0xd0];
            if (lVar3 == 0) {
                return;
            }
            fVar8 = (DAT_140c63664 - *(float *)(param_1 + 0xd1)) * *(float *)((longlong)param_1 + 0x68c);
        }
        else {
            lVar3 = param_1[0xd6];
            if (lVar3 == 0) {
                return;
            }
            fVar8 = (DAT_140c63664 - *(float *)(param_1 + 0xd7)) * *(float *)((longlong)param_1 + 0x6bc);
        }
        FUN_140103cf0(lVar3,&local_48,local_38,0,fVar8);
    }
    return;
}



void FUN_1406d8e10(longlong param_1,int param_2,int *param_3)

{
    longlong lVar1;
    undefined2 *puVar2;
    uint uVar3;
    longlong lVar4;
    int *piVar5;
    int iVar6;
    longlong *plVar7;
    int *piVar8;
    undefined2 *puVar9;
    ulonglong uVar10;
    int local_res8;
    uint local_resc;

    lVar1 = DAT_140c65898;
    if (param_2 == 0) {
        if (((((*(int *)(param_1 + 0x2cc) <= *param_3) && (*param_3 < *(int *)(param_1 + 0x2d4))) &&
              (*(int *)(param_1 + 0x2d0) <= param_3[1])) &&
             ((param_3[1] < *(int *)(param_1 + 0x2d8) && (*(char *)(param_1 + 0x400) != '\0')))) &&
            (lVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0,param_1 + 0x404), lVar4 != 0)) {
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0xb3c) == 4) {
                if (*(int *)(*(longlong *)(lVar4 + 0x40) + 0x168) != 0) {
                    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"CraftingModItem",&DAT_1409ef6c4,lVar4);
                    *(undefined *)(param_1 + 0x400) = 0;
                    goto LAB_1406d9101;
                }
            }
            else {
                if (*(int *)(lVar4 + 0x20) < 300) {
                    uVar10 = (ulonglong)
                            (CONCAT41(*(int *)(lVar4 + 0x20),*(undefined *)(lVar4 + 0x24)) & 0xffff);
                }
                else {
                    uVar10 = 0xffffffffffffffff;
                }
                piVar5 = *(int **)(lVar4 + 0x48);
                lVar1 = *(longlong *)(lVar4 + 0x40);
                iVar6 = *(int *)(lVar1 + 0x158);
                piVar8 = piVar5;
                if (piVar5 == (int *)0x0) {
                    piVar8 = (int *)(lVar1 + 8);
                }
                if (piVar8 != (int *)0x0) {
                    if (piVar5 == (int *)0x0) {
                        piVar5 = (int *)(lVar1 + 8);
                    }
                    iVar6 = *piVar5;
                }
                puVar9 = (undefined2 *)0x0;
                if ((iVar6 - 1U < 7) &&
                    (lVar4 = *(longlong *)(param_1 + 0x890 + (longlong)iVar6 * 0x30), lVar4 != 0)) {
                    puVar2 = *(undefined2 **)(lVar4 + 0x20);
                    puVar9 = &DAT_140b7b704;
                    if (puVar2 != (undefined2 *)0x0) {
                        puVar9 = puVar2;
                    }
                }
                FUN_1400e9500(*(longlong *)(param_1 + 0x20),param_1,"DDBagItem",
                              *(undefined8 *)(lVar1 + 0x1e8),uVar10,puVar9);
            }
        }
        *(undefined *)(param_1 + 0x400) = 0;
    }
    else if (param_2 == 1) {
        if (((((*(int *)(param_1 + 0x2cc) <= *param_3) && (*param_3 < *(int *)(param_1 + 0x2d4))) &&
              (*(int *)(param_1 + 0x2d0) <= param_3[1])) &&
             ((param_3[1] < *(int *)(param_1 + 0x2d8) && (*(char *)(param_1 + 0x401) != '\0')))) &&
            (lVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0,param_1 + 0x404), lVar4 != 0)) {
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xb3c);
            if (iVar6 == 2) {
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"ShowItemInDressingRoom",&DAT_1409ef25c,lVar4)
                        ;
            }
            else if (iVar6 == 1) {
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"ItemLink",&DAT_1409e9d4c,lVar4);
            }
            else if (iVar6 == 4) {
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"ToggleItemContextMenu",&DAT_1409eae84,lVar4);
            }
            else {
                uVar3 = 0;
                local_res8 = 300;
                local_resc = 0xffffffff;
                if (*(uint *)(lVar1 + 0xc4) != 0) {
                    plVar7 = *(longlong **)(lVar1 + 200);
                    do {
                        if (*plVar7 == 0) {
                            local_res8 = *(int *)(lVar1 + 0xb8);
                            local_resc = uVar3;
                            if (((local_res8 < 300) && (uVar3 != 0xffffffff)) &&
                                ((local_res8 != 0 || (uVar3 < 0x1f)))) {
                                FUN_1403c17d0(lVar1,param_1 + 0x404,&local_res8,0);
                            }
                            break;
                        }
                        uVar3 = uVar3 + 1;
                        plVar7 = plVar7 + 1;
                    } while (uVar3 < *(uint *)(lVar1 + 0xc4));
                }
            }
        }
        *(undefined *)(param_1 + 0x401) = 0;
    }
    LAB_1406d9101:
    FUN_1400d2550(param_1,param_2,param_3);
    return;
}



void FUN_1406d9120(longlong *param_1,int *param_2)

{
    undefined2 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    int *piVar4;
    int iVar5;
    ulonglong uVar6;
    int *piVar7;
    undefined2 *puVar8;

    if ((((*(int *)((longlong)param_1 + 0x2cc) <= *param_2) &&
          (*param_2 < *(int *)((longlong)param_1 + 0x2d4))) && (*(int *)(param_1 + 0x5a) <= param_2[1])
        ) && (param_2[1] < *(int *)(param_1 + 0x5b))) {
        lVar3 = *param_1;
        uVar2 = FUN_1403ac780(DAT_140c65898 + 0xa0,(longlong)param_1 + 0x404);
        (**(code **)(lVar3 + 0x78))
                (param_1,&DAT_1409f7a5c,3,uVar2,*(undefined8 *)((longlong)param_1 + 0x404));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
        lVar3 = FUN_1403ac780();
        if (lVar3 != 0) {
            iVar5 = param_2[1] - *(int *)((longlong)param_1 + 0x38c);
            if ((0x30 < iVar5 * iVar5 +
                        (*param_2 - *(int *)(param_1 + 0x71)) * (*param_2 - *(int *)(param_1 + 0x71))) &&
                (*(longlong *)(param_1[4] + 0xd38) == 0)) {
                iVar5 = FUN_14018cdf0();
                if (0x7d < (uint)(iVar5 - *(int *)((longlong)param_1 + 0x3a4))) {
                    if (*(int *)(lVar3 + 0x20) < 300) {
                        uVar6 = (ulonglong)
                                (CONCAT41(*(int *)(lVar3 + 0x20),*(undefined *)(lVar3 + 0x24)) & 0xffff);
                    }
                    else {
                        uVar6 = 0xffffffffffffffff;
                    }
                    piVar4 = *(int **)(lVar3 + 0x48);
                    lVar3 = *(longlong *)(lVar3 + 0x40);
                    iVar5 = *(int *)(lVar3 + 0x158);
                    piVar7 = piVar4;
                    if (piVar4 == (int *)0x0) {
                        piVar7 = (int *)(lVar3 + 8);
                    }
                    if (piVar7 != (int *)0x0) {
                        if (piVar4 == (int *)0x0) {
                            piVar4 = (int *)(lVar3 + 8);
                        }
                        iVar5 = *piVar4;
                    }
                    puVar8 = (undefined2 *)0x0;
                    if ((iVar5 - 1U < 7) && (param_1[(longlong)iVar5 * 6 + 0x112] != 0)) {
                        puVar1 = *(undefined2 **)(param_1[(longlong)iVar5 * 6 + 0x112] + 0x20);
                        puVar8 = &DAT_140b7b704;
                        if (puVar1 != (undefined2 *)0x0) {
                            puVar8 = puVar1;
                        }
                    }
                    FUN_1400e9500(param_1[4],param_1,"DDBagItem",*(undefined8 *)(lVar3 + 0x1e8),uVar6,puVar8);
                }
            }
        }
    }
    FUN_1400d23b0(param_1,param_2);
    return;
}



bool FUN_1406d9410(undefined8 param_1)

{
    longlong lVar1;
    undefined4 local_res10;
    undefined4 local_res14;

    lVar1 = FUN_1406d9630();
    local_res10 = *(undefined4 *)(lVar1 + 0x404);
    local_res14 = *(undefined4 *)(lVar1 + 0x408);
    lVar1 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
    FUN_140415d60(param_1,lVar1);
    return lVar1 != 0;
}



longlong FUN_1406d9630(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x20 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"ItemSlotWindow",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1406d96e0(longlong param_1)

{
    undefined2 *puVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_1406d9630();
    if (lVar2 == 0) {
        return 0;
    }
    if (*(longlong *)(lVar2 + 0xa48) == 0) {
        puVar3 = (undefined2 *)0x0;
    }
    else {
        puVar1 = *(undefined2 **)(*(longlong *)(lVar2 + 0xa48) + 0x20);
        puVar3 = &DAT_140b7b704;
        if (puVar1 != (undefined2 *)0x0) {
            puVar3 = puVar1;
        }
    }
    lVar2 = FUN_14018f0e0(local_28,puVar3);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



// WARNING: Removing unreachable block (ram,0x0001406d9b21)

void FUN_1406d97e0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406d97f1;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9832;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_GetItem_140c5e7e0 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 4);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d98cf;
    FUN_1400569b0(lVar2,"Apollo.ItemSlotWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406d98f1:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406d990d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406d990d;
        if (iVar1 == 7) goto LAB_1406d98f1;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406d990d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d993c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9962;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d99aa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d99cf;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d99f3;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9a14;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9a39;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9a7c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9aa1;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406d9adc:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406d9af5;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406d9adc;
        if (iVar1 != 8) goto LAB_1406d9af5;
    }
    uVar15 = *puVar10;
    LAB_1406d9af5:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9b04;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar4 + -0x10) = &LAB_1406d9470;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9b3b;
    FUN_1400f85d0(param_1 + 0xa80,L"ItemSlotWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9b4b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



undefined8 * FUN_1406d9b60(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b71570;
    FUN_1400c6030();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



ulonglong FUN_1406d9bf0(longlong param_1)

{
    longlong lVar1;
    ulonglong *puVar2;
    ulonglong in_RAX;
    uint local_res8;
    uint local_resc;

    lVar1 = *(longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x400) == 0) {
        puVar2 = *(ulonglong **)(lVar1 + 0xd70);
        in_RAX = *(longlong *)(lVar1 + 0xd78) - (longlong)puVar2;
        if (((in_RAX == 9) && (in_RAX = *puVar2, in_RAX == 0x6574496761424444)) &&
            (in_RAX = 0, *(char *)(puVar2 + 1) == 'm')) {
            local_res8 = (uint)((ulonglong)*(undefined8 *)(lVar1 + 0xda0) >> 8) & 0xff;
            local_resc = (uint)*(undefined8 *)(lVar1 + 0xda0) & 0xff;
            in_RAX = FUN_1403998e0(DAT_140c65898,&local_res8,0,0);
        }
    }
    return in_RAX & 0xffffffffffffff00;
}



void FUN_1406d9c70(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.DragDropFrame",0x14);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406da021)

void FUN_1406d9ce0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406d9cf1;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9d32;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_GetFrameType_140c5e820 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 == 0);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9dcf;
    FUN_1400569b0(lVar2,"Apollo.DragDropFrame");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406d9df1:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406d9e0d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406d9e0d;
        if (iVar1 == 7) goto LAB_1406d9df1;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406d9e0d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9e3c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9e62;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9eaa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9ecf;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9ef3;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9f14;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9f39;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9f7c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406d9fa1;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406d9fdc:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406d9ff5;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406d9fdc;
        if (iVar1 != 8) goto LAB_1406d9ff5;
    }
    uVar15 = *puVar10;
    LAB_1406d9ff5:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406da004;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406da060;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406da03b;
    FUN_1400f85d0(param_1 + 0xa80,L"CharacterFrame",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406da04b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1406da060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    undefined8 *puVar1;
    undefined auStack200 [32];
    undefined *local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined local_88 [96];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    local_a8 = (undefined *)0x0;
    FUN_1400d45e0(local_88,param_1,param_2,param_5);
    puVar1 = (undefined8 *)FUN_14018b280(0x410,0);
    if (puVar1 != (undefined8 *)0x0) {
        local_a8 = local_88;
        local_98 = 0;
        local_a0 = param_4;
        FUN_1400c5920(puVar1,param_1,param_2,0);
        *(undefined4 *)(puVar1 + 0x80) = 0;
        *puVar1 = &PTR_LAB_140b71570;
        puVar1[0x36] = puVar1[0x36] | 0x200000000;
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack200);
    return;
}



undefined8 FUN_1406da140(undefined8 param_1,ulonglong param_2)

{
    FUN_1406da180();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406da180(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b717b0;
    if ((longlong *)param_1[0x88] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x88] + 8))();
        param_1[0x88] = 0;
    }
    if (param_1[0x8b] != 0) {
        FUN_14018b900(param_1[0x8b],0);
    }
    if ((longlong *)param_1[0x82] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x82] + 8))();
        param_1[0x82] = 0;
    }
    if (param_1[0x85] != 0) {
        FUN_14018b900(param_1[0x85],0);
    }
    FUN_1400c6030(param_1);
    return;
}



void FUN_1406da200(longlong *param_1,undefined8 param_2)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    char cVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong *plVar8;
    undefined8 uVar9;
    ulonglong uVar10;
    undefined local_28 [8];
    longlong local_20;

    uVar10 = 0;
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    if ((int)param_2 == 0) {
        if (((param_1[4] != 0) && (plVar8 = (longlong *)param_1[0x82], plVar8 != (longlong *)0x0)) &&
            (cVar5 = FUN_14002c740(param_1 + 0x84,&DAT_1409f7a9c), cVar5 == '\0')) {
            (**(code **)(*plVar8 + 8))(plVar8);
            param_1[0x82] = 0;
        }
        *(undefined4 *)((longlong)param_1 + 0x404) = 300;
        *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
        return;
    }
    lVar7 = DAT_140c65898;
    uVar6 = FUN_1403bad30(DAT_140c65898,param_2,*(undefined *)(DAT_140c65898 + 0x6dec));
    lVar7 = FUN_1403acd90(DAT_140c65b70,uVar6,*(undefined8 *)(lVar7 + 0x78));
    if (lVar7 != 0) {
        iVar1 = *(int *)(*(longlong *)(lVar7 + 0x70) + 4);
        *(int *)((longlong)param_1 + 0x40c) = iVar1;
        if ((iVar1 != 0) && (uVar2 = *(ulonglong *)(DAT_140c65898 + 0xa98), uVar2 != 0)) {
            plVar8 = *(longlong **)(DAT_140c65898 + 0xa90);
            do {
                lVar3 = *plVar8;
                if ((lVar3 != 0) && (*(int *)(lVar3 + 0x40) == iVar1)) {
                    lVar4 = param_1[4];
                    uVar9 = FUN_1405645b0(uVar2,uVar6,0);
                    if (lVar4 != 0) {
                        FUN_140109710(param_1 + 0x82,lVar4 + 0xf0,uVar9,0);
                    }
                    if ((*(byte *)(param_1 + 0x53) & 1) == 0) {
                        lVar7 = FUN_14018efa0(local_28,&DAT_140b3cd54,
                                              *(undefined *)(*(longlong *)(lVar7 + 0x70) + 8));
                        (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(lVar7 + 8));
                        if (local_20 != 0) {
                            FUN_14018b900(local_20,0);
                        }
                    }
                    *(undefined4 *)((longlong)param_1 + 0x404) = 4;
                    *(undefined4 *)(param_1 + 0x81) = *(undefined4 *)(lVar3 + 0x24);
                    return;
                }
                uVar10 = uVar10 + 1;
                plVar8 = plVar8 + 1;
            } while (uVar10 < uVar2);
        }
    }
    return;
}



void FUN_1406da3b0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [16];

    local_48 = *(undefined4 *)(param_1 + 0x2cc);
    uVar1 = 0x3f800000;
    uVar2 = 0x3f800000;
    uVar3 = 0x3f800000;
    uVar4 = 0x3f800000;
    local_44 = *(undefined4 *)(param_1 + 0x2d0);
    local_38 = 0x3f800000;
    uStack52 = 0x3f800000;
    uStack48 = 0x3f800000;
    local_40 = *(undefined4 *)(param_1 + 0x2d4);
    local_3c = *(undefined4 *)(param_1 + 0x2d8);
    if ((*(int *)(param_1 + 0x408) == -1) && ((*(byte *)(param_1 + 0x298) & 1) == 0)) {
        local_38 = 0x3f000000;
        uStack52 = 0x3f000000;
        uStack48 = 0x3f000000;
    }
    uStack44 = 0x3f800000;
    if (*(longlong *)(param_1 + 0x410) != 0) {
        FUN_140103cf0(*(longlong *)(param_1 + 0x410),&local_48,&local_38,0,
                      (DAT_140c63664 - *(float *)(param_1 + 0x418)) * *(float *)(param_1 + 0x41c));
    }
    if (*(char *)(param_1 + 0x400) != '\0') {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        local_28 = CONCAT412(uVar4,CONCAT48(uVar3,CONCAT44(uVar2,uVar1)));
        if (*(longlong *)(param_1 + 0x440) != 0) {
            FUN_140103cf0(*(longlong *)(param_1 + 0x440),&local_48,local_28,0,
                          (DAT_140c63664 - *(float *)(param_1 + 0x448)) * *(float *)(param_1 + 0x44c));
        }
    }
    FUN_1400ceb90(param_1);
    return;
}



undefined8 FUN_1406da570(longlong param_1,int param_2,undefined4 *param_3)

{
    undefined2 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined2 *puVar4;

    if (param_2 == 0) {
        if (*(char *)(param_1 + 0x401) != '\0') {
            *(undefined4 *)(param_1 + 0x360) = *param_3;
            *(undefined4 *)(param_1 + 0x364) = param_3[1];
            *(undefined4 *)(param_1 + 0x388) = *param_3;
            *(undefined4 *)(param_1 + 0x38c) = param_3[1];
            uVar2 = DAT_140c636a8;
            *(undefined4 *)(param_1 + 0x3a4) = DAT_140c636a8;
            *(undefined4 *)(param_1 + 0x390) = uVar2;
            *(undefined *)(param_1 + 0x401) = 0;
            if ((((*(byte *)(param_1 + 0x1c) & 0x80) != 0) && ((*(byte *)(param_1 + 0x298) & 1) == 0)) &&
                (*(int *)(param_1 + 0x408) != -1)) {
                if (*(longlong *)(param_1 + 0x410) == 0) {
                    puVar4 = (undefined2 *)0x0;
                }
                else {
                    puVar1 = *(undefined2 **)(*(longlong *)(param_1 + 0x410) + 0x20);
                    puVar4 = &DAT_140b7b704;
                    if (puVar1 != (undefined2 *)0x0) {
                        puVar4 = puVar1;
                    }
                }
                FUN_1400e9780(*(undefined8 *)(param_1 + 0x20),param_1,"DDSpellbookItem",puVar4,
                              *(int *)(param_1 + 0x408),0);
            }
            return 0;
        }
    }
    else if (param_2 == 1) {
        if (*(char *)(param_1 + 0x402) == '\0') {
            uVar3 = FUN_1400d2550();
            return uVar3;
        }
        *(undefined4 *)(param_1 + 0x368) = *param_3;
        *(undefined4 *)(param_1 + 0x36c) = param_3[1];
        *(undefined4 *)(param_1 + 0x388) = *param_3;
        *(undefined4 *)(param_1 + 0x38c) = param_3[1];
        uVar2 = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0x3a4) = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0x394) = uVar2;
        *(undefined *)(param_1 + 0x402) = 0;
        return 0;
    }
    uVar3 = FUN_1400d2550();
    return uVar3;
}



void FUN_1406da6a0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    if ((*(byte *)((longlong)param_1 + 0x1c) & 0x80) != 0) {
        iVar1 = *(int *)((longlong)param_1 + 0x40c);
        uVar6 = 0;
        if (iVar1 != 0) {
            if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
                plVar3 = *(longlong **)(DAT_140c65898 + 0xa90);
                uVar7 = uVar6;
                do {
                    lVar5 = *plVar3;
                    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x40) == iVar1)) {
                        lVar2 = *param_1;
                        uVar4 = FUN_1405a4b80(lVar5,1);
                        // WARNING: Could not recover jumptable at 0x0001406da773. Too many branches
                        // WARNING: Treating indirect jump as call
                        (**(code **)(lVar2 + 0x78))(param_1,&DAT_1409f7a8c,4,uVar4);
                        return;
                    }
                    uVar7 = uVar7 + 1;
                    plVar3 = plVar3 + 1;
                } while (uVar7 < *(ulonglong *)(DAT_140c65898 + 0xa98));
            }
            if ((iVar1 != 0) && (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0)) {
                plVar3 = *(longlong **)(DAT_140c65898 + 0xa90);
                while ((lVar5 = *plVar3, lVar5 == 0 || (*(int *)(lVar5 + 0x40) != iVar1))) {
                    uVar6 = uVar6 + 1;
                    plVar3 = plVar3 + 1;
                    if (*(ulonglong *)(DAT_140c65898 + 0xa98) <= uVar6) {
                        return;
                    }
                }
                lVar5 = FUN_1405a4b80(lVar5,1);
                if (lVar5 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001406da7a0. Too many branches
                    // WARNING: Treating indirect jump as call
                    (**(code **)(*param_1 + 0x78))(param_1,&DAT_1409f7b9c,4,lVar5);
                    return;
                }
            }
        }
    }
    return;
}



undefined8 FUN_1406da7b0(longlong param_1,int *param_2)

{
    undefined2 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int iVar5;
    ulonglong uVar6;
    longlong *plVar7;
    undefined2 *puVar8;

    if ((*(byte *)(param_1 + 0x1c) & 0x80) != 0) {
        if (*(int *)(param_1 + 0x40c) != 0) {
            uVar6 = 0;
            if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
                plVar7 = *(longlong **)(DAT_140c65898 + 0xa90);
                do {
                    lVar3 = *plVar7;
                    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x40) == *(int *)(param_1 + 0x40c)))
                        goto LAB_1406da80c;
                    uVar6 = uVar6 + 1;
                    plVar7 = plVar7 + 1;
                } while (uVar6 < *(ulonglong *)(DAT_140c65898 + 0xa98));
            }
        }
        lVar3 = 0;
        LAB_1406da80c:
        if ((((*(char *)(param_1 + 0x401) != '\0') && (lVar3 != 0)) &&
             ((iVar2 = param_2[1] - *(int *)(param_1 + 0x38c),
                     iVar5 = *param_2 - *(int *)(param_1 + 0x388), 0x30 < iVar2 * iVar2 + iVar5 * iVar5 ||
                                                                   (0x7d < (uint)(DAT_140c636a8 - *(int *)(param_1 + 0x3a4)))))) &&
            (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xd38) == 0)) {
            *(undefined *)(param_1 + 0x401) = 0;
            if (*(longlong *)(param_1 + 0x410) == 0) {
                puVar8 = (undefined2 *)0x0;
            }
            else {
                puVar1 = *(undefined2 **)(*(longlong *)(param_1 + 0x410) + 0x20);
                puVar8 = &DAT_140b7b704;
                if (puVar1 != (undefined2 *)0x0) {
                    puVar8 = puVar1;
                }
            }
            FUN_1400e9500(*(longlong *)(param_1 + 0x20),param_1,"DDSpellbookItem",puVar8,
                          *(undefined4 *)(param_1 + 0x408),0);
            return 0;
        }
    }
    uVar4 = FUN_1400d23b0(param_1,param_2);
    return uVar4;
}



void FUN_1406da8d0(longlong *param_1)

{
    char cVar1;
    ulonglong uVar2;
    longlong *plVar3;

    if (*(int *)((longlong)param_1 + 0x40c) != 0) {
        uVar2 = 0;
        if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
            plVar3 = *(longlong **)(DAT_140c65898 + 0xa90);
            do {
                if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0x40) == *(int *)((longlong)param_1 + 0x40c))) {
                    return;
                }
                uVar2 = uVar2 + 1;
                plVar3 = plVar3 + 1;
            } while (uVar2 < *(ulonglong *)(DAT_140c65898 + 0xa98));
        }
    }
    *(undefined4 *)((longlong)param_1 + 0x404) = 300;
    *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
    if (((param_1[4] != 0) && (plVar3 = (longlong *)param_1[0x82], plVar3 != (longlong *)0x0)) &&
        (cVar1 = FUN_14002c740(param_1 + 0x84,&DAT_1409f7b54), cVar1 == '\0')) {
        (**(code **)(*plVar3 + 8))(plVar3);
        param_1[0x82] = 0;
    }
    (**(code **)(*param_1 + 0x50))(param_1,&DAT_1409f7afc);
    *(undefined *)(param_1 + 0x80) = 0;
    return;
}



void FUN_1406da9a0(longlong param_1)

{
    ulonglong uVar1;
    longlong *plVar2;

    if (*(int *)(param_1 + 0x40c) != 0) {
        uVar1 = 0;
        if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
            plVar2 = *(longlong **)(DAT_140c65898 + 0xa90);
            do {
                if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x40) == *(int *)(param_1 + 0x40c))) {
                    *(undefined *)(param_1 + 0x400) = 1;
                    FUN_1400d4040(param_1,"AbilitySelected",param_1,"");
                    return;
                }
                uVar1 = uVar1 + 1;
                plVar2 = plVar2 + 1;
            } while (uVar1 < *(ulonglong *)(DAT_140c65898 + 0xa98));
        }
    }
    *(undefined *)(param_1 + 0x400) = 0;
    return;
}



undefined8 FUN_1406daa20(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_1406daee0();
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar1 = FUN_140056d60(param_1,2);
        }
        else {
            uVar1 = 0xffffffff;
        }
        FUN_1406da200(lVar2,uVar1);
    }
    return 0;
}



undefined8 FUN_1406daa90(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406daee0();
    if (lVar3 == 0) {
        return 0;
    }
    iVar1 = *(int *)(lVar3 + 0x40c);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406daae0(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1406daee0();
    if (lVar3 == 0) {
        return 0;
    }
    if (*(int *)(lVar3 + 0x40c) == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = FUN_1403bad30(DAT_140c65898,*(int *)(lVar3 + 0x40c),
                              *(undefined *)(DAT_140c65898 + 0x6dec));
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406dab50(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    longlong **pplVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_1406daee0();
    if (lVar2 == 0) {
        return 0;
    }
    if (*(int *)(lVar2 + 0x40c) != 0) {
        uVar3 = 0;
        if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
            pplVar5 = *(longlong ***)(DAT_140c65898 + 0xa90);
            LAB_1406dab91:
            plVar1 = *pplVar5;
            if ((plVar1 == (longlong *)0x0) || (*(int *)(plVar1 + 8) != *(int *)(lVar2 + 0x40c)))
                goto LAB_1406dab9f;
            (**(code **)(*plVar1 + 0x80))(plVar1);
            uVar4 = FUN_14034bdd0();
            lVar2 = FUN_14018f0e0(local_28,uVar4);
            if (*(longlong *)(lVar2 + 8) != 0) {
                lVar6 = -1;
                do {
                    lVar6 = lVar6 + 1;
                } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
                goto LAB_1406dac1e;
            }
            goto LAB_1406dabc5;
        }
    }
    LAB_1406dabab:
    lVar2 = FUN_14018f0e0(local_28,&DAT_1409f7ad4);
    if (*(longlong *)(lVar2 + 8) == 0) {
        LAB_1406dabc5:
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
        LAB_1406dac1e:
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
    LAB_1406dab9f:
    uVar3 = uVar3 + 1;
    pplVar5 = pplVar5 + 1;
    if (*(ulonglong *)(DAT_140c65898 + 0xa98) <= uVar3) goto LAB_1406dabab;
    goto LAB_1406dab91;
}



undefined8 FUN_1406dae70(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = FUN_1406daee0();
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar3 = &DAT_140a12138;
        if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
            puVar3 = puVar2;
        }
        if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
            *(undefined *)(lVar1 + 0x400) = 1;
            return 0;
        }
        *(undefined *)(lVar1 + 0x400) = 0;
    }
    return 0;
}



longlong FUN_1406daee0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x22 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



void FUN_1406daf90(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.AbilityItemWindow",0x18);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406db341)

void FUN_1406db000(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406db011;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db052;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_GetAbilityId_140c5e830 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 6);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db0ef;
    FUN_1400569b0(lVar2,"Apollo.AbilityItemWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406db111:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406db12d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406db12d;
        if (iVar1 == 7) goto LAB_1406db111;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406db12d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db15c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db182;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db1ca;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db1ef;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db213;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db234;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db259;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db29c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db2c1;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406db2fc:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406db315;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406db2fc;
        if (iVar1 != 8) goto LAB_1406db315;
    }
    uVar15 = *puVar10;
    LAB_1406db315:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db324;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406db380;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db35b;
    FUN_1400f85d0(param_1 + 0xa80,L"AbilityItemWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406db36b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1406db380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined auStack232 [32];
    undefined *local_c8;
    undefined8 local_c0;
    undefined8 *local_b8;
    char local_a8 [16];
    undefined local_98 [96];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    puVar4 = (undefined8 *)0x0;
    local_c8 = (undefined *)0x0;
    FUN_1400d45e0(local_98,param_1,param_2,param_5);
    local_a8[0] = '\0';
    lVar1 = FUN_1401a6b80(param_5,L"ListItem");
    puVar6 = puVar4;
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
        FUN_1401a52e0(uVar2,local_a8);
        puVar6 = (undefined8 *)0x0;
        if (local_a8[0] != '\0') {
            puVar6 = (undefined8 *)0x1;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(0x470,0);
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
        local_c8 = local_98;
        local_c0 = param_4;
        local_b8 = puVar6;
        FUN_1400c5920(puVar3,param_1,param_2,0);
        *(undefined2 *)(puVar3 + 0x80) = 0;
        *(undefined *)((longlong)puVar3 + 0x402) = 0;
        *puVar3 = &PTR_LAB_140b717b0;
        *(undefined4 *)((longlong)puVar3 + 0x404) = 300;
        *(undefined4 *)(puVar3 + 0x81) = 0xffffffff;
        *(undefined4 *)((longlong)puVar3 + 0x40c) = 0;
        FUN_1401095e0(puVar3 + 0x82);
        FUN_1401095e0(puVar3 + 0x88);
        puVar3[0x36] = puVar3[0x36] | 0x400000000;
        puVar5 = puVar3;
    }
    lVar1 = FUN_1401a6b80(param_5,L"SelectOverlay");
    if (lVar1 != 0) {
        puVar4 = (undefined8 *)FUN_1401a4f40(lVar1 + 0x20);
    }
    if (param_1 != 0) {
        FUN_140109710(puVar5 + 0x88,param_1 + 0xf0,puVar4,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



undefined8 * FUN_1406db520(undefined8 *param_1,longlong param_2)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = 0;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b719f0;
    FUN_1401095e0(param_1 + 0x80);
    FUN_1401095e0(param_1 + 0x86);
    *(undefined (*) [16])(param_1 + 0x92) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x94) = 0x40000000;
    param_1[0x96] = 0;
    param_1[0x95] = 0;
    FUN_140771790(param_1 + 0x98,param_2);
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    if ((param_2 != 0) &&
        ((param_1[0x80] == 0 || (cVar2 = FUN_14002c740(param_1 + 0x82,L"WhiteFill"), cVar2 == '\0'))))
    {
        lVar3 = FUN_140108e80(param_2 + 0xf0,L"WhiteFill");
        if (lVar3 != 0) {
            do {
                lVar1 = lVar4 + 1;
                lVar4 = lVar4 + 1;
            } while (L"WhiteFill"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x82,L"WhiteFill",L"WhiteFill" + lVar4);
        }
        FUN_1401097f0(param_1 + 0x80,lVar3);
    }
    *(undefined2 *)((longlong)param_1 + 0x811) = 0x100;
    *(undefined *)(param_1 + 0x102) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x40000000;
    return param_1;
}



undefined8 FUN_1406db670(undefined8 param_1,ulonglong param_2)

{
    FUN_1406db6b0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406db6b0(undefined8 *param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    *param_1 = &PTR_LAB_140b719f0;
    uVar2 = 0;
    if ((longlong *)param_1[0x103] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x103] + 8))();
        param_1[0x103] = 0;
    }
    if ((longlong *)param_1[0x104] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x104] + 8))();
        param_1[0x104] = 0;
    }
    if (param_1[0x96] != 0) {
        do {
            lVar1 = *(longlong *)(param_1[0x95] + uVar2 * 8);
            if (lVar1 != 0) {
                if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar1 + 0x20) + 8))();
                    *(undefined8 *)(lVar1 + 0x20) = 0;
                }
                if (*(longlong *)(lVar1 + 8) != 0) {
                    FUN_14018b900(*(longlong *)(lVar1 + 8),0);
                }
                FUN_14018b900(lVar1,0);
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < (ulonglong)param_1[0x96]);
    }
    FUN_140771ad0(param_1 + 0x98);
    lVar1 = param_1[0x95];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *)param_1[0x86] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    if (param_1[0x89] != 0) {
        FUN_14018b900(param_1[0x89],0);
    }
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if (param_1[0x83] != 0) {
        FUN_14018b900(param_1[0x83],0);
    }
    FUN_1400c6030(param_1);
    return;
}



longlong FUN_1406db810(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406db9d0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                   float *param_5,undefined8 param_6,float *param_7)

{
    short sVar1;
    uint uVar2;
    short *psVar3;
    short *psVar4;
    short *psVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined8 uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    short *psVar12;
    ulonglong uVar13;
    short *psVar14;
    short *psVar15;
    short *psVar16;
    longlong lVar17;
    ulonglong uVar18;
    undefined auVar19 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float in_xmmTmp2_Dd;
    undefined auStack1560 [32];
    undefined local_5f8;
    int local_5e8;
    undefined local_5e4;
    int local_5e0;
    int local_5dc;
    int local_5d8;
    int local_5d0;
    int local_5cc;
    short *local_5c8;
    longlong *local_5c0;
    int local_5b8;
    int local_5b4;
    float local_5a8;
    float fStack1444;
    undefined4 uStack1440;
    undefined4 uStack1436;
    float local_598;
    float fStack1428;
    undefined4 uStack1424;
    undefined4 uStack1420;
    undefined local_588 [16];
    undefined local_578 [8];
    undefined8 uStack1392;
    longlong local_568;
    float *local_560;
    float *local_558;
    short *local_548;
    short *local_540;
    short *local_538;
    undefined local_528 [32];
    float local_508;
    float local_500;
    float local_4f8;
    float local_4f0;
    short local_2e0 [260];
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack1560;
    uVar2 = movmskps((int)local_d8,
                     CONCAT412(-(uint)(*(float *)(param_4 + 0x49c) != in_xmmTmp2_Dd),
                               CONCAT48(-(uint)(*(float *)(param_4 + 0x498) != param_5[3]),
                                        CONCAT44(-(uint)(*(float *)(param_4 + 0x494) != param_5[1]),
                                                 -(uint)(*(float *)(param_4 + 0x490) != *param_5)))));
    local_568 = param_4;
    local_560 = param_7;
    local_558 = param_5;
    if (((uVar2 & 7) != 0) || (param_3 != *(float *)(param_4 + 0x4a0))) {
        plVar6 = *(longlong **)(DAT_140c65898 + 0x7240);
        fVar21 = 128.0;
        fVar23 = 128.0;
        fVar26 = 0.5;
        fVar27 = 0.5;
        fVar25 = param_3 * 512.0;
        local_5b8 = (int)((*param_5 * DAT_140c456d8 + 0.5) * 128.0);
        local_5b4 = (int)((DAT_140c456d8 * 0.0 + 0.5) * 128.0);
        local_5c0 = plVar6;
        uVar2 = (**(code **)(*plVar6 + 0x78))(plVar6,&local_5b8,local_528);
        if (-1 < (int)uVar2) {
            auVar19 = ZEXT416((uint)(local_4f8 - local_508)) & (undefined  [16])0xffffffffffffffff;
            fVar24 = 1.0 / param_3;
            fVar20 = SUB164(auVar19,0) * fVar24 + 0.5;
            uVar13 = SUB168(CONCAT124(SUB1612(auVar19 >> 0x20,0),fVar20),0);
            iVar9 = (int)fVar20;
            if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar20)) {
                uVar2 = movmskps(uVar2,CONCAT88(SUB168(auVar19 >> 0x40,0),uVar13 | uVar13 << 0x20) &
                                       (undefined  [16])0xffffffffffffffff);
                uVar2 = uVar2 & 1;
                uVar13 = (ulonglong)(uint)(float)(iVar9 - uVar2);
            }
            auVar19 = ZEXT416((uint)(local_4f0 - local_500)) & (undefined  [16])0xffffffffffffffff;
            fVar20 = SUB164(auVar19,0) * fVar24 + 0.5;
            uVar18 = SUB168(CONCAT124(SUB1612(auVar19 >> 0x20,0),fVar20),0);
            iVar9 = (int)fVar20;
            if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar20)) {
                uVar2 = movmskps(uVar2,CONCAT88(SUB168(auVar19 >> 0x40,0),uVar18 | uVar18 << 0x20) &
                                       (undefined  [16])0xffffffffffffffff);
                uVar18 = (ulonglong)(uint)(float)(iVar9 - (uVar2 & 1));
            }
            _local_578 = ZEXT816(uVar13 | uVar18 << 0x20);
            fVar22 = *param_5 - fVar25 * 0.5;
            *(float *)(param_4 + 0x460) = fVar22;
            fVar20 = param_5[2] - fVar25 * 0.5;
            *(float *)(param_4 + 0x470) = fVar22 + fVar25;
            *(float *)(param_4 + 0x478) = fVar20 + fVar25;
            *(float *)(param_4 + 0x468) = fVar20;
            local_588 = ZEXT816(CONCAT44(fVar20 + ((fVar20 + fVar25) - fVar20) * 0.5,
                                         fVar22 + ((fVar22 + fVar25) - fVar22) * 0.5));
            local_5d0 = (int)((fVar26 + *(float *)(param_4 + 0x460) * DAT_140c456d8) * fVar21);
            local_5cc = (int)((fVar27 + DAT_140c456d8 * 0.0) * fVar23);
            local_5e8 = (int)((*(float *)(param_4 + 0x470) * DAT_140c456d8 + fVar26) * fVar21);
            iVar11 = (int)((*(float *)(param_4 + 0x478) * DAT_140c456d8 + fVar27) * fVar23);
            local_5d8 = iVar11;
            iVar9 = (**(code **)(*plVar6 + 0x78))();
            if (-1 < iVar9) {
                psVar16 = (short *)0x0;
                local_5dc = local_5cc;
                fVar21 = (*(float *)(param_4 + 0x468) - local_500) * fVar24;
                fVar24 = (*(float *)(param_4 + 0x460) - local_508) * fVar24;
                local_5c8 = (short *)0x0;
                fVar23 = (float)((uint)fVar24 ^ 0x80000000);
                fVar26 = (float)((uint)fVar21 ^ 0x80000000);
                local_598 = local_578._0_4_ - fVar24;
                fVar27 = local_578._4_4_ - fVar21;
                local_588 = ZEXT816(CONCAT44(fVar21,fVar24) ^ 0x8000000080000000);
                psVar15 = psVar16;
                psVar3 = psVar16;
                local_5a8 = fVar23;
                fStack1444 = fVar26;
                fStack1428 = fVar27;
                if (local_5cc <= iVar11) {
                    fVar21 = fVar23 + local_578._0_4_;
                    iVar9 = local_5d0;
                    iVar11 = local_5d8;
                    iVar10 = local_5e8;
                    do {
                        psVar14 = psVar15;
                        local_5e0 = iVar9;
                        local_5a8 = fVar23;
                        fStack1444 = fVar26;
                        fStack1428 = fVar27;
                        if (iVar9 <= iVar10) {
                            do {
                                fVar25 = local_5a8;
                                fVar20 = local_598;
                                iVar9 = (**(code **)(*plVar6 + 0x78))();
                                psVar15 = psVar14;
                                if (-1 < iVar9) {
                                    local_538 = (short *)0x0;
                                    psVar3 = psVar16;
                                    sVar1 = local_2e0[0];
                                    while (sVar1 != 0) {
                                        psVar3 = (short *)((longlong)psVar3 + 1);
                                        sVar1 = local_2e0[(longlong)psVar3];
                                    }
                                    lVar17 = (longlong)psVar3 * 2 >> 1;
                                    uVar13 = lVar17 + 1;
                                    psVar4 = psVar16;
                                    if (uVar13 < 0x7fffffffffffffff) {
                                        psVar4 = (short *)FUN_14018b280(uVar13 * 2,0);
                                        local_538 = psVar4 + uVar13;
                                    }
                                    FUN_1407db590(psVar4);
                                    psVar3 = psVar4 + lVar17;
                                    psVar5 = psVar16;
                                    if (psVar3 != (short *)0x0) {
                                        *psVar3 = 0;
                                    }
                                    do {
                                        psVar5 = (short *)((longlong)psVar5 + 1);
                                    } while (L".area"[(longlong)psVar5] != L'\0');
                                    psVar12 = (short *)((longlong)psVar3 - (longlong)psVar4 >> 1);
                                    if (psVar5 <= psVar12) {
                                        local_5f8 = local_5e4;
                                        psVar5 = (short *)FUN_14010a450();
                                        if ((psVar5 != psVar3) &&
                                            (iVar9 = (int)((longlong)psVar5 - (longlong)psVar4 >> 1), -1 < iVar9)) {
                                            local_588 = CONCAT88(local_588._8_8_,psVar12);
                                            _local_578 = CONCAT88(uStack1392,(short *)(longlong)iVar9);
                                            plVar6 = (longlong *)local_588;
                                            if ((short *)(longlong)iVar9 <= psVar12) {
                                                plVar6 = (longlong *)local_578;
                                            }
                                            psVar3 = psVar4 + *plVar6;
                                            uVar13 = ((longlong)psVar3 - (longlong)psVar4 >> 1) + 1;
                                            psVar12 = psVar16;
                                            psVar5 = psVar16;
                                            if (uVar13 < 0x7fffffffffffffff) {
                                                psVar12 = (short *)FUN_14018b280(uVar13 * 2,0);
                                                psVar5 = psVar12 + uVar13;
                                            }
                                            local_540 = psVar12;
                                            if (psVar4 != psVar3) {
                                                do {
                                                    if (local_540 != (short *)0x0) {
                                                        *local_540 = *(short *)((longlong)local_540 +
                                                                                ((longlong)psVar4 - (longlong)psVar12));
                                                    }
                                                    local_540 = local_540 + 1;
                                                } while ((short *)((longlong)local_540 +
                                                                   ((longlong)psVar4 - (longlong)psVar12)) != psVar3);
                                            }
                                            if (local_540 != (short *)0x0) {
                                                *local_540 = 0;
                                            }
                                            psVar3 = psVar16;
                                            local_538 = psVar5;
                                            local_548 = psVar12;
                                            if (psVar4 != (short *)0x0) {
                                                FUN_14018b900(psVar4,0);
                                            }
                                            do {
                                                psVar4 = &DAT_140b3d582 + (longlong)psVar3;
                                                psVar3 = (short *)((longlong)psVar3 + 1);
                                            } while (*psVar4 != 0);
                                            FUN_14001c310();
                                            psVar4 = local_548;
                                        }
                                    }
                                    if (((((fVar25 < *param_7) || (param_7[4] <= fVar25)) || (fVar26 < param_7[1])) ||
                                         ((param_7[5] <= fVar26 || (fVar20 < *param_7)))) ||
                                        ((param_7[4] <= fVar20 ||
                                          ((fVar27 < param_7[1] || (psVar3 = local_5c8, param_7[5] <= fVar27)))))) {
                                        lVar17 = FUN_14018b280(0x50);
                                        if (lVar17 == 0) {
                                            lVar17 = 0;
                                        }
                                        else {
                                            *(undefined8 *)(lVar17 + 8) = 0;
                                            *(undefined8 *)(lVar17 + 0x10) = 0;
                                            *(undefined8 *)(lVar17 + 0x18) = 0;
                                            sVar1 = *psVar4;
                                            psVar3 = psVar16;
                                            while (sVar1 != 0) {
                                                psVar3 = (short *)((longlong)psVar3 + 1);
                                                sVar1 = psVar4[(longlong)psVar3];
                                            }
                                            FUN_14001c1b0(lVar17,psVar4,psVar4 + (longlong)psVar3);
                                            *(undefined8 *)(lVar17 + 0x20) = 0;
                                            *(float *)(lVar17 + 0x30) = local_5a8;
                                            *(float *)(lVar17 + 0x34) = fStack1444;
                                            *(undefined4 *)(lVar17 + 0x38) = uStack1440;
                                            *(undefined4 *)(lVar17 + 0x3c) = uStack1436;
                                            *(float *)(lVar17 + 0x40) = local_598;
                                            *(float *)(lVar17 + 0x44) = fStack1428;
                                            *(undefined4 *)(lVar17 + 0x48) = uStack1424;
                                            *(undefined4 *)(lVar17 + 0x4c) = uStack1420;
                                            lVar7 = FUN_14018b280(0x48);
                                            if (lVar7 == 0) {
                                                *(undefined8 *)(lVar17 + 0x20) = 0;
                                            }
                                            else {
                                                uVar8 = FUN_1400fe080(lVar7,psVar4);
                                                *(undefined8 *)(lVar17 + 0x20) = uVar8;
                                            }
                                        }
                                        psVar3 = (short *)((longlong)local_5c8 + 1);
                                        psVar5 = (short *)FUN_14018db00(psVar14,psVar3,8);
                                        *(longlong *)(psVar5 + (longlong)local_5c8 * 4) = lVar17;
                                        param_7 = local_560;
                                        if ((psVar14 != psVar5) &&
                                            (FUN_1407db590(), psVar15 = psVar5, param_7 = local_560,
                                                    psVar14 != (short *)0x0)) {
                                            (**(code **)(*(longlong *)(psVar14 + -8) + 8))();
                                            param_7 = local_560;
                                        }
                                    }
                                    local_5c8 = psVar3;
                                    psVar3 = local_5c8;
                                    plVar6 = local_5c0;
                                    if (psVar4 != (short *)0x0) {
                                        FUN_14018b900();
                                        plVar6 = local_5c0;
                                    }
                                }
                                local_5a8 = fVar25 + local_578._0_4_;
                                local_598 = fVar20 + local_578._0_4_;
                                local_5e0 = local_5e0 + 1;
                                psVar14 = psVar15;
                                iVar9 = local_5d0;
                                iVar11 = local_5d8;
                                iVar10 = local_5e8;
                            } while (local_5e0 <= local_5e8);
                        }
                        local_598 = fVar21;
                        local_5dc = local_5dc + 1;
                        fVar26 = fVar26 + local_578._4_4_;
                        fVar27 = fVar27 + local_578._4_4_;
                        param_4 = local_568;
                        fVar21 = local_598;
                        local_5a8 = fVar23;
                        fStack1444 = fVar26;
                        fStack1428 = fVar27;
                    } while (local_5dc <= iVar11);
                }
                psVar14 = psVar16;
                if (*(longlong *)(param_4 + 0x4b0) != 0) {
                    do {
                        lVar17 = *(longlong *)(*(longlong *)(param_4 + 0x4a8) + (longlong)psVar14 * 8);
                        if (lVar17 != 0) {
                            if (*(longlong **)(lVar17 + 0x20) != (longlong *)0x0) {
                                (**(code **)(**(longlong **)(lVar17 + 0x20) + 8))();
                                *(undefined8 *)(lVar17 + 0x20) = 0;
                            }
                            if (*(longlong *)(lVar17 + 8) != 0) {
                                FUN_14018b900(*(longlong *)(lVar17 + 8),0);
                            }
                            FUN_14018b900(lVar17,0);
                        }
                        psVar14 = (short *)(ulonglong)((int)psVar14 + 1);
                    } while (psVar14 < *(short **)(param_4 + 0x4b0));
                }
                *(undefined8 *)(param_4 + 0x4b0) = 0;
                if (psVar3 != (short *)0x0) {
                    do {
                        FUN_140033260(param_4 + 0x4a8,psVar15 + (longlong)psVar16 * 4);
                        psVar16 = (short *)(ulonglong)((int)psVar16 + 1);
                    } while (psVar16 < psVar3);
                }
                *(undefined *)(param_4 + 0x812) = 1;
                fVar21 = local_558[1];
                fVar23 = local_558[2];
                fVar26 = local_558[3];
                *(float *)(param_4 + 0x490) = *local_558;
                *(float *)(param_4 + 0x494) = fVar21;
                *(float *)(param_4 + 0x498) = fVar23;
                *(float *)(param_4 + 0x49c) = fVar26;
                *(float *)(param_4 + 0x4a0) = param_3;
                if (psVar15 != (short *)0x0) {
                    (**(code **)(*(longlong *)(psVar15 + -8) + 8))(psVar15 + -8);
                }
            }
        }
    }
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack1560);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406dc270(undefined8 param_1,float param_2,longlong param_3)

{
    undefined8 uVar1;
    float fVar2;
    float fVar3;
    undefined local_78 [16];
    ulonglong local_68;
    undefined8 local_58;
    float fStack80;
    float fStack76;
    float local_48;
    float fStack68;
    float fStack64;
    float fStack60;
    float local_38;
    float fStack52;
    float local_28;
    float fStack36;

    fVar2 = *(float *)(param_3 + 0x4a0);
    local_48 = 512.0;
    fStack68 = 512.0;
    local_58 = 0;
    local_28 = 512.0;
    fStack36 = 512.0;
    local_38 = 0.0;
    fStack52 = 0.0;
    local_78 = CONCAT412((fStack60 + fStack76) * 0.5,
                         CONCAT48((fStack64 + fStack80) * 0.5,0x4380000043800000));
    if (param_2 <= fVar2) {
        fVar3 = (param_2 / fVar2) * 512.0;
        fVar2 = 256.0 - fVar3 * 0.5;
        local_48 = fVar2 + fVar3;
        fStack68 = 256.0 - fVar3 * 0.5;
        local_58 = CONCAT44(fStack68,fVar2);
        fStack68 = fStack68 + fVar3;
    }
    else {
        fStack36 = (fVar2 / param_2) * 512.0;
        local_38 = 256.0 - fStack36 * 0.5;
        local_28 = local_38 + fStack36;
        fStack52 = 256.0 - fStack36 * 0.5;
        fStack36 = fStack52 + fStack36;
    }
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    local_78 = CONCAT88(*(undefined8 *)(param_3 + 0x820),local_78._0_8_);
    local_78 = CONCAT124(local_78._4_12_,1);
    local_68 = (ulonglong)(uint)local_68;
    (**(code **)(*DAT_140c65670 + 0x208))
            (DAT_140c65670,local_78,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    local_78 = ZEXT816(0);
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_78);
    (**(code **)(*DAT_140c65680 + 0x38))();
    local_78 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
    (**(code **)(*DAT_140c65680 + 0xf0))
            (DAT_140c65680,*(undefined8 *)(param_3 + 0x818),&local_58,&local_38,local_78,1);
    (**(code **)(*DAT_140c65680 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x228))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    uVar1 = *(undefined8 *)(param_3 + 0x820);
    *(undefined8 *)(param_3 + 0x820) = *(undefined8 *)(param_3 + 0x818);
    *(undefined8 *)(param_3 + 0x818) = uVar1;
    local_78 = local_78 & (undefined  [16])0xffffffffffffffff;
    local_68 = 0;
    FUN_1406db9d0(param_3,param_3 + 0x490);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406dc510(longlong param_1,float *param_2)

{
    undefined8 uVar1;
    undefined local_78 [16];
    ulonglong local_68;
    undefined local_58 [16];
    undefined8 local_48;
    float fStack64;
    float fStack60;
    undefined4 local_38;
    undefined4 uStack52;
    float fStack48;
    float fStack44;
    undefined local_28 [16];
    undefined local_18 [16];

    local_48 = 0;
    local_38 = 0x44000000;
    uStack52 = 0x44000000;
    local_58 = CONCAT412(*(float *)(param_1 + 0x49c) + 0.0,
                         CONCAT48(*(float *)(param_1 + 0x498) +
                                  *(float *)(param_1 + 0x4a0) * param_2[1],
                                  CONCAT44(*(float *)(param_1 + 0x494) + 0.0,
                                           *(float *)(param_1 + 0x490) +
                                           *(float *)(param_1 + 0x4a0) * *param_2)));
    local_18 = CONCAT412(fStack44 - param_2[3],
                         CONCAT48(fStack48 - param_2[2],CONCAT44(512.0 - param_2[1],512.0 - *param_2))
    );
    local_28 = CONCAT412(fStack60 - param_2[3],
                         CONCAT48(fStack64 - param_2[2],CONCAT44(0.0 - param_2[1],0.0 - *param_2)));
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    local_78 = CONCAT88(*(undefined8 *)(param_1 + 0x820),local_78._0_8_);
    local_78 = CONCAT124(local_78._4_12_,1);
    local_68 = (ulonglong)(uint)local_68;
    (**(code **)(*DAT_140c65670 + 0x208))
            (DAT_140c65670,local_78,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    local_78 = ZEXT816(0);
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_78);
    (**(code **)(*DAT_140c65680 + 0x38))();
    local_78 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
    (**(code **)(*DAT_140c65680 + 0xf0))
            (DAT_140c65680,*(undefined8 *)(param_1 + 0x818),&local_48,local_28,local_78,1);
    (**(code **)(*DAT_140c65680 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x228))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    uVar1 = *(undefined8 *)(param_1 + 0x820);
    *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x818);
    *(undefined8 *)(param_1 + 0x818) = uVar1;
    local_78 = local_78 & (undefined  [16])0xffffffffffffffff;
    local_68 = 0;
    FUN_1406db9d0(param_1,local_58);
    return;
}



void FUN_1406dcd70(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    undefined local_18 [16];

    if (*(char *)(param_1 + 0x810) != '\0') {
        local_18 = ZEXT816(CONCAT44((float)(*(int *)(param_1 + 0x38c) - param_2[1]),
                                    (float)(*(int *)(param_1 + 0x388) - *param_2)));
        FUN_1406dc510(param_1,local_18);
        *(int *)(param_1 + 0x388) = *param_2;
        *(int *)(param_1 + 0x38c) = param_2[1];
        uVar1 = FUN_14018cdf0();
        *(undefined4 *)(param_1 + 0x3a4) = uVar1;
    }
    FUN_1400d23b0(param_1,param_2);
    return;
}



undefined8 FUN_1406dce30(longlong param_1,int param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    undefined8 uVar2;
    longlong lVar3;

    if ((*(byte *)(param_1 + 0x1c) & 0x80) == 0) {
        uVar2 = FUN_1400d2120();
        return uVar2;
    }
    uVar1 = *param_3;
    lVar3 = (longlong)param_2;
    *(undefined4 *)(param_1 + 0x388) = uVar1;
    *(undefined4 *)(param_1 + 0x38c) = param_3[1];
    *(undefined4 *)(param_1 + 0x360 + lVar3 * 8) = uVar1;
    *(undefined4 *)(param_1 + 0x364 + lVar3 * 8) = *(undefined4 *)(param_1 + 0x38c);
    uVar1 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 0x3a4) = uVar1;
    *(undefined4 *)(param_1 + 0x390 + lVar3 * 4) = uVar1;
    *(undefined *)(param_1 + 0x810) = 1;
    return 0;
}



void FUN_1406dcef0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.ProtostarMapWindow",0x19);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406dd2a1)

void FUN_1406dcf60(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406dcf71;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dcfb2;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_IsShowLabelsOn_140c5e890 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 6);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd04f;
    FUN_1400569b0(lVar2,"Apollo.ProtostarMapWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406dd071:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406dd08d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406dd08d;
        if (iVar1 == 7) goto LAB_1406dd071;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406dd08d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd0bc;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd0e2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd12a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd14f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd173;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd194;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd1b9;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd1fc;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd221;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406dd25c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406dd275;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406dd25c;
        if (iVar1 != 8) goto LAB_1406dd275;
    }
    uVar15 = *puVar10;
    LAB_1406dd275:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd284;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar4 + -0x10) = &LAB_1406dd2e0;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd2bb;
    FUN_1400f85d0(param_1 + 0xa80,L"ProtostarMapWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dd2cb;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



undefined8 *
FUN_1406dd390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = 0;
    FUN_1406d7ba0();
    *param_1 = &PTR_LAB_140b71c30;
    *(undefined4 *)(param_1 + 0x156) = 300;
    *(undefined4 *)((longlong)param_1 + 0xab4) = 0xffffffff;
    lVar3 = param_1[4];
    param_1[0x36] = param_1[0x36] | 0x20000000000;
    *(undefined8 *)((longlong)param_1 + 0x404) = *param_8;
    param_1[0x156] = *param_8;
    if (lVar3 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x2a4) = 3;
        return param_1;
    }
    if (param_1[0x143] != 0) {
        cVar2 = FUN_14002c740(param_1 + 0x145,L"HuddieNameplateFrame");
        if (cVar2 != '\0') goto LAB_1406dd49f;
    }
    lVar3 = FUN_140108e80(lVar3 + 0xf0,L"HuddieNameplateFrame");
    if (lVar3 != 0) {
        do {
            lVar1 = lVar4 + 1;
            lVar4 = lVar4 + 1;
        } while (L"HuddieNameplateFrame"[lVar1] != L'\0');
        FUN_14001c480(param_1 + 0x145,L"HuddieNameplateFrame",L"HuddieNameplateFrame" + lVar4,param_4,
                      param_5,param_6);
    }
    FUN_1401097f0(param_1 + 0x143,lVar3);
    LAB_1406dd49f:
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 3;
    return param_1;
}



undefined8 * FUN_1406dd4e0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b71c30;
    if ((longlong *)param_1[0x142] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x142] + 8))();
        param_1[0x142] = 0;
    }
    FUN_1406d8700(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



bool FUN_1406dd540(undefined8 param_1)

{
    longlong lVar1;
    undefined4 local_res10;
    undefined4 local_res14;

    lVar1 = FUN_1406dda20();
    local_res10 = *(undefined4 *)(lVar1 + 0x404);
    local_res14 = *(undefined4 *)(lVar1 + 0x408);
    lVar1 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
    FUN_140415d60(param_1,lVar1);
    return lVar1 != 0;
}



void FUN_1406dd780(longlong param_1,int param_2,int *param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    uint uVar5;

    lVar2 = DAT_140c65898;
    if (param_2 == 0) {
        FUN_1406d8e10();
        return;
    }
    if (param_2 == 1) {
        if ((((*(int *)(param_1 + 0x2cc) <= *param_3) && (*param_3 < *(int *)(param_1 + 0x2d4))) &&
             (*(int *)(param_1 + 0x2d0) <= param_3[1])) &&
            (((param_3[1] < *(int *)(param_1 + 0x2d8) && (*(char *)(param_1 + 0x401) != '\0')) &&
              (lVar3 = FUN_1403ac780(), lVar3 != 0)))) {
            uVar1 = *(uint *)(lVar2 + 0xc4);
            uVar5 = 0;
            if (uVar1 != 0) {
                plVar4 = *(longlong **)(lVar2 + 200);
                do {
                    if (*plVar4 == 0) break;
                    uVar5 = uVar5 + 1;
                    plVar4 = plVar4 + 1;
                } while (uVar5 < uVar1);
            }
        }
        *(undefined *)(param_1 + 0x401) = 0;
    }
    FUN_1400d2550(param_1,param_2,param_3);
    return;
}



longlong FUN_1406dda20(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x29 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"MannequinSlotWindow",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



void FUN_1406ddad0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.MannequinSlotWindow",0x1a);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406dde81)

void FUN_1406ddb40(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406ddb51;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddb92;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_GetItem_140c5e8f0 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 3);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddc2f;
    FUN_1400569b0(lVar2,"Apollo.MannequinSlotWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406ddc51:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406ddc6d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406ddc6d;
        if (iVar1 == 7) goto LAB_1406ddc51;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406ddc6d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddc9c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddcc2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddd0a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddd2f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddd53;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddd74;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddd99;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddddc;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dde01;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406dde3c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406dde55;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406dde3c;
        if (iVar1 != 8) goto LAB_1406dde55;
    }
    uVar15 = *puVar10;
    LAB_1406dde55:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dde64;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar4 + -0x10) = &LAB_1406dd860;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dde9b;
    FUN_1400f85d0(param_1 + 0xa80,L"MannequinSlotWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406ddeab;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



undefined8 * FUN_1406ddec0(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong in_stack_00000028;
    undefined8 in_stack_00000030;
    undefined8 uVar3;

    uVar2 = 0;
    uVar3 = 0;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b71e70;
    param_1[0x81] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x92) = 0;
    lVar1 = FUN_14018b280(0x188,0);
    if (lVar1 != 0) {
        uVar2 = FUN_140503450(lVar1);
    }
    param_1[0x93] = uVar2;
    param_1[0x95] = 0;
    param_1[0x94] = 0;
    param_1[0x36] = param_1[0x36] | 0x800000;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
    FUN_1407e4830(param_1 + 0x82,0,0x80);
    FUN_1406de010(param_1,1,0,0,in_stack_00000028 & 0xffffffff00000000,in_stack_00000030,uVar3);
    FUN_1406de650(param_1,0);
    return param_1;
}



void FUN_1406de010(ulonglong param_1)

{
    longlong *plVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    int iVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong *plVar12;
    ulonglong uVar13;
    longlong *plVar14;
    uint uVar15;
    ulonglong uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    uint in_stack_00000028;
    undefined auStack424 [32];
    ulonglong local_188;
    undefined4 local_180;
    longlong *local_178;
    uint local_170;
    int local_16c;
    uint local_168;
    undefined local_160 [8];
    longlong *local_158;
    longlong *local_150;
    undefined8 local_148;
    longlong *local_140;
    undefined4 local_138 [4];
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108 [4];
    uint local_f8 [4];
    uint local_e8;
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
    uint local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
        local_188 = local_188 & 0xffffffff00000000 | (ulonglong)in_stack_00000028;
        FUN_140503600(*(undefined8 *)(param_1 + 0x498));
        local_158 = (longlong *)0x0;
        local_150 = (longlong *)0x0;
        local_148 = 0;
        FUN_140505590(*(undefined8 *)(param_1 + 0x498),local_160,*(undefined8 *)(param_1 + 0x400));
        FUN_1400c6d00(param_1);
        local_140 = (longlong *)(param_1 + 0x410);
        FUN_1407e4830(local_140,0,0x80);
        *(undefined8 *)(param_1 + 0x4a8) = 0;
        uVar3 = ((longlong)local_150 - (longlong)local_158) / 0x58;
        uVar10 = 0;
        if (uVar3 != 0) {
            do {
                local_180 = 0xfffffffe;
                local_188 = param_1;
                lVar5 = FUN_1400f52e0(*(longlong *)(param_1 + 0x20) + 0xa80,L"UI\\Controls\\CashInput.xml",
                                      L"Denomination",0);
                if (lVar5 == 0) {
                    local_178 = (longlong *)0x141e385a0;
                    FUN_1401a3130(0xd,1,&local_178);
                    goto LAB_1406de54d;
                }
                FUN_1400c7140(lVar5,*(undefined8 *)(param_1 + 0x30),1);
                lVar6 = FUN_1400d3830(lVar5 + 0x228);
                if (lVar6 == 0) {
                    local_178 = (longlong *)0x141e384f0;
                    LAB_1406de5e8:
                    FUN_1401a3130(0xd,1,&local_178);
                    FUN_1400c6b20(lVar5);
                    goto LAB_1406de54d;
                }
                FUN_1400d2d60(lVar6,local_158[uVar10 * 0xb + 3]);
                lVar7 = FUN_1400d3830(lVar5 + 0x228,L"Input");
                if (lVar7 == 0) {
                    local_178 = (longlong *)0x141e38470;
                    goto LAB_1406de5e8;
                }
                lVar8 = FUN_1400d3830(lVar5 + 0x228);
                if (lVar8 == 0) {
                    local_178 = (longlong *)0x141e386a0;
                    goto LAB_1406de5e8;
                }
                uVar13 = (ulonglong)((int)uVar10 + 1);
                lVar11 = uVar10 * 0x20;
                *(longlong *)(lVar11 + 0x428 + param_1) = lVar8;
                *(longlong *)(lVar11 + 0x410 + param_1) = lVar5;
                *(longlong *)(lVar11 + 0x418 + param_1) = lVar6;
                *(longlong *)((uVar10 + 0x21) * 0x20 + param_1) = lVar7;
                uVar10 = uVar13;
            } while (uVar13 < uVar3);
        }
        uVar10 = 0;
        lVar5 = 0x40;
        lVar6 = 4;
        if (uVar3 != 0) {
            local_178 = (longlong *)(uVar3 * 0x20 + 0x3f0 + param_1);
            uVar13 = uVar10;
            uVar16 = uVar10;
            do {
                lVar7 = *local_178;
                uVar18 = *(undefined4 *)(lVar7 + 0x60);
                uVar20 = *(undefined4 *)(lVar7 + 100);
                uVar22 = *(undefined4 *)(lVar7 + 0x68);
                uVar24 = *(undefined4 *)(lVar7 + 0x6c);
                uVar17 = *(undefined4 *)(lVar7 + 0x40);
                uVar19 = *(undefined4 *)(lVar7 + 0x44);
                uVar21 = *(undefined4 *)(lVar7 + 0x48);
                uVar23 = *(undefined4 *)(lVar7 + 0x4c);
                local_168 = (int)uVar10 + (*(int *)(lVar7 + 0x2d4) - *(int *)(lVar7 + 0x2cc));
                local_c8 = *(undefined4 *)(lVar7 + 0x50);
                uStack196 = *(undefined4 *)(lVar7 + 0x54);
                uStack192 = *(undefined4 *)(lVar7 + 0x58);
                uStack188 = *(undefined4 *)(lVar7 + 0x5c);
                uVar15 = *(uint *)(lVar7 + 0x90) | 0x300;
                local_b8 = uVar18;
                uStack180 = uVar20;
                uStack176 = uVar22;
                uStack172 = uVar24;
                uVar25 = *(undefined4 *)(lVar7 + 0x50);
                uVar26 = *(undefined4 *)(lVar7 + 0x54);
                uVar27 = *(undefined4 *)(lVar7 + 0x58);
                uVar28 = *(undefined4 *)(lVar7 + 0x5c);
                local_170 = -local_168;
                local_e8 = uVar15;
                local_a8 = *(undefined4 *)(lVar7 + 0x70);
                uStack164 = *(undefined4 *)(lVar7 + 0x74);
                uStack160 = *(undefined4 *)(lVar7 + 0x78);
                uStack156 = *(undefined4 *)(lVar7 + 0x7c);
                uStack148 = *(undefined4 *)(lVar7 + 0x84);
                uStack140 = *(undefined4 *)(lVar7 + 0x8c);
                uStack144 = (int)uVar13;
                local_98 = local_170;
                local_108[0] = *(undefined4 *)(lVar7 + 0x70);
                local_108[1] = *(undefined4 *)(lVar7 + 0x74);
                local_108[2] = *(undefined4 *)(lVar7 + 0x78);
                local_108[3] = *(undefined4 *)(lVar7 + 0x7c);
                local_f8[0] = local_170;
                local_f8[1] = *(undefined4 *)(lVar7 + 0x84);
                local_f8[2] = (int)uVar13;
                local_f8[3] = *(undefined4 *)(lVar7 + 0x8c);
                local_138[0] = uVar17;
                local_138[1] = uVar19;
                local_138[2] = uVar21;
                local_138[3] = uVar23;
                local_128 = uVar25;
                uStack292 = uVar26;
                uStack288 = uVar27;
                uStack284 = uVar28;
                local_118 = uVar18;
                uStack276 = uVar20;
                uStack272 = uVar22;
                uStack268 = uVar24;
                if (*(longlong *)(lVar7 + 0x1b8) != 0) {
                    FUN_14018b900(*(longlong *)(lVar7 + 0x1b8),0);
                    *(undefined8 *)(lVar7 + 0x1b8) = 0;
                }
                *(undefined (*) [16])(lVar7 + 0x40) =
                        CONCAT412(uVar23,CONCAT48(uVar21,CONCAT44(uVar19,uVar17)));
                *(undefined (*) [16])(lVar7 + 0x50) =
                        CONCAT412(uVar28,CONCAT48(uVar27,CONCAT44(uVar26,uVar25)));
                lVar8 = 0x30;
                *(undefined (*) [16])(lVar7 + 0x60) =
                        CONCAT412(uVar24,CONCAT48(uVar22,CONCAT44(uVar20,uVar18)));
                lVar11 = lVar6;
                do {
                    puVar2 = (undefined4 *)((longlong)local_138 + lVar8);
                    lVar8 = lVar8 + 4;
                    *(undefined4 *)(lVar7 + 0x3c + lVar8) = *puVar2;
                    lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
                lVar8 = 0x40;
                lVar11 = lVar6;
                do {
                    puVar2 = (undefined4 *)((longlong)local_138 + lVar8);
                    lVar8 = lVar8 + 4;
                    *(undefined4 *)(lVar7 + 0x3c + lVar8) = *puVar2;
                    lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
                *(uint *)(lVar7 + 0x90) = uVar15;
                if ((*(byte *)(lVar7 + 0x188) & 1) == 0) {
                    *(byte *)(lVar7 + 0x1d) = *(byte *)(lVar7 + 0x1d) & 0x7f;
                    *(byte *)(lVar7 + 0x1e) = *(byte *)(lVar7 + 0x1e) & 0xfe;
                    if ((*(longlong *)(lVar7 + 0x10) != 0) &&
                        ((*(byte *)(*(longlong *)(lVar7 + 0x10) + 0x1e) & 1) != 0)) {
                        FUN_1400cb660();
                    }
                    *(uint *)(lVar7 + 0x188) = *(uint *)(lVar7 + 0x188) | 3;
                    *(undefined8 *)(lVar7 + 0x180) = 0xffffffffffffffff;
                    plVar12 = (longlong *)**(longlong **)(lVar7 + 0x230);
                    if (plVar12 != *(longlong **)(lVar7 + 0x230)) {
                        do {
                            FUN_1400cb690(plVar12[2]);
                            plVar12 = (longlong *)*plVar12;
                        } while (plVar12 != (longlong *)*(longlong *)(lVar7 + 0x230));
                    }
                }
                FUN_1400cb960(lVar7);
                iVar9 = 0x7fffffff;
                if ((int)uVar16 < 0x7fffffff) {
                    iVar9 = (int)uVar16;
                }
                local_16c = -0x80000000;
                if (-0x80000000 < iVar9) {
                    local_16c = iVar9;
                }
                FUN_1400c82c0(param_1,param_1 + 0x4a0,lVar7,&local_16c);
                uVar10 = (ulonglong)local_168;
                uVar13 = (ulonglong)local_170;
                local_178 = local_178 + -4;
                uVar16 = uVar16 + 1;
            } while (uVar16 < uVar3);
        }
        lVar7 = *local_140;
        uVar18 = *(undefined4 *)(lVar7 + 0x40);
        uVar20 = *(undefined4 *)(lVar7 + 0x44);
        uVar22 = *(undefined4 *)(lVar7 + 0x48);
        uVar24 = *(undefined4 *)(lVar7 + 0x4c);
        uVar15 = *(uint *)(lVar7 + 0x90) | 0x300;
        local_e8 = uVar15;
        local_c8 = *(undefined4 *)(lVar7 + 0x50);
        uStack196 = *(undefined4 *)(lVar7 + 0x54);
        uStack192 = *(undefined4 *)(lVar7 + 0x58);
        uStack188 = *(undefined4 *)(lVar7 + 0x5c);
        local_b8 = *(undefined4 *)(lVar7 + 0x60);
        uStack180 = *(undefined4 *)(lVar7 + 100);
        uStack176 = *(undefined4 *)(lVar7 + 0x68);
        uStack172 = *(undefined4 *)(lVar7 + 0x6c);
        uStack164 = *(undefined4 *)(lVar7 + 0x74);
        uStack160 = *(undefined4 *)(lVar7 + 0x78);
        uStack156 = *(undefined4 *)(lVar7 + 0x7c);
        local_a8 = 0;
        local_118 = *(undefined4 *)(lVar7 + 0x60);
        uStack276 = *(undefined4 *)(lVar7 + 100);
        uStack272 = *(undefined4 *)(lVar7 + 0x68);
        uStack268 = *(undefined4 *)(lVar7 + 0x6c);
        uStack148 = *(undefined4 *)(lVar7 + 0x84);
        uStack144 = *(undefined4 *)(lVar7 + 0x88);
        uStack140 = *(undefined4 *)(lVar7 + 0x8c);
        local_98 = 0;
        local_128 = *(undefined4 *)(lVar7 + 0x50);
        uStack292 = *(undefined4 *)(lVar7 + 0x54);
        uStack288 = *(undefined4 *)(lVar7 + 0x58);
        uStack284 = *(undefined4 *)(lVar7 + 0x5c);
        local_f8[0] = 0;
        local_f8[1] = *(undefined4 *)(lVar7 + 0x84);
        local_f8[2] = *(undefined4 *)(lVar7 + 0x88);
        local_f8[3] = *(undefined4 *)(lVar7 + 0x8c);
        local_108[0] = 0;
        local_108[1] = *(undefined4 *)(lVar7 + 0x74);
        local_108[2] = *(undefined4 *)(lVar7 + 0x78);
        local_108[3] = *(undefined4 *)(lVar7 + 0x7c);
        local_138[0] = uVar18;
        local_138[1] = uVar20;
        local_138[2] = uVar22;
        local_138[3] = uVar24;
        if (*(longlong *)(lVar7 + 0x1b8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 0x1b8),0);
            *(undefined8 *)(lVar7 + 0x1b8) = 0;
        }
        *(undefined (*) [16])(lVar7 + 0x40) = CONCAT412(uVar24,CONCAT48(uVar22,CONCAT44(uVar20,uVar18)))
                ;
        *(ulonglong *)(lVar7 + 0x50) = CONCAT44(uStack292,local_128);
        *(ulonglong *)(lVar7 + 0x58) = CONCAT44(uStack284,uStack288);
        *(ulonglong *)(lVar7 + 0x60) = CONCAT44(uStack276,local_118);
        *(ulonglong *)(lVar7 + 0x68) = CONCAT44(uStack268,uStack272);
        *(ulonglong *)(lVar7 + 0x70) = CONCAT44(local_108[1],local_108[0]);
        *(ulonglong *)(lVar7 + 0x78) = CONCAT44(local_108[3],local_108[2]);
        do {
            puVar2 = (undefined4 *)((longlong)local_138 + lVar5);
            lVar5 = lVar5 + 4;
            *(undefined4 *)(lVar7 + 0x3c + lVar5) = *puVar2;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        *(uint *)(lVar7 + 0x90) = uVar15;
        if ((*(byte *)(lVar7 + 0x188) & 1) == 0) {
            *(byte *)(lVar7 + 0x1d) = *(byte *)(lVar7 + 0x1d) & 0x7f;
            *(byte *)(lVar7 + 0x1e) = *(byte *)(lVar7 + 0x1e) & 0xfe;
            if ((*(longlong *)(lVar7 + 0x10) != 0) &&
                ((*(byte *)(*(longlong *)(lVar7 + 0x10) + 0x1e) & 1) != 0)) {
                FUN_1400cb660();
            }
            *(uint *)(lVar7 + 0x188) = *(uint *)(lVar7 + 0x188) | 3;
            *(undefined8 *)(lVar7 + 0x180) = 0xffffffffffffffff;
            plVar12 = (longlong *)**(longlong **)(lVar7 + 0x230);
            if (plVar12 != *(longlong **)(lVar7 + 0x230)) {
                do {
                    FUN_1400cb690(plVar12[2]);
                    plVar12 = (longlong *)*plVar12;
                } while (plVar12 != (longlong *)*(longlong *)(lVar7 + 0x230));
            }
        }
        FUN_1400cb960(lVar7);
        LAB_1406de54d:
        plVar4 = local_150;
        plVar12 = local_158;
        if (local_158 != local_150) {
            plVar14 = local_158 + 3;
            do {
                if (plVar14[5] != 0) {
                    FUN_14018b900(plVar14[5],0);
                }
                if (*plVar14 != 0) {
                    FUN_14018b900(*plVar14,0);
                }
                plVar1 = plVar14 + 8;
                plVar14 = plVar14 + 0xb;
            } while (plVar1 != plVar4);
        }
        if (plVar12 != (longlong *)0x0) {
            FUN_14018b900(plVar12,0);
        }
    }
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack424);
    return;
}



void FUN_1406de650(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong local_res8;
    undefined local_38 [8];
    longlong *local_30;
    longlong *local_28;
    undefined8 local_20;

    if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
        *(undefined8 *)(param_1 + 0x400) = param_2;
        uVar6 = 0;
        local_30 = (longlong *)0x0;
        local_28 = (longlong *)0x0;
        local_20 = 0;
        FUN_140505590(*(undefined8 *)(param_1 + 0x498),local_38,param_2);
        plVar4 = local_28;
        plVar3 = local_30;
        lVar2 = (longlong)local_28 - (longlong)local_30 >> 0x3f;
        lVar8 = ((longlong)local_28 - (longlong)local_30) / 0x58 + lVar2;
        if (lVar8 != lVar2) {
            do {
                puVar5 = (undefined8 *)FUN_14018d540(&local_res8,&DAT_140b3e058,plVar3[uVar6 * 0xb]);
                plVar7 = *(longlong **)((uVar6 + 0x21) * 0x20 + param_1);
                (**(code **)(*plVar7 + 0x50))(plVar7,*puVar5);
                if (local_res8 != 0) {
                    (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
                }
                uVar6 = (ulonglong)((int)uVar6 + 1);
            } while (uVar6 < (ulonglong)(lVar8 - lVar2));
        }
        if (plVar3 != plVar4) {
            plVar7 = plVar3 + 3;
            do {
                if (plVar7[5] != 0) {
                    FUN_14018b900(plVar7[5],0);
                }
                if (*plVar7 != 0) {
                    FUN_14018b900(*plVar7,0);
                }
                plVar1 = plVar7 + 8;
                plVar7 = plVar7 + 0xb;
            } while (plVar1 != plVar4);
        }
        if (plVar3 != (longlong *)0x0) {
            FUN_14018b900(plVar3,0);
        }
    }
    return;
}



void FUN_1406decf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined auStack200 [32];
    undefined *local_a8;
    undefined8 local_a0;
    undefined local_88 [96];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    local_a8 = (undefined *)0x0;
    FUN_1400d45e0(local_88,param_1,param_2,param_5);
    lVar1 = FUN_14018b280(0x4b0,0);
    if (lVar1 != 0) {
        local_a8 = local_88;
        local_a0 = param_4;
        FUN_1406ddec0(lVar1,param_1,param_2,param_3);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack200);
    return;
}



void FUN_1406deda0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.CashInput",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406df151)

void FUN_1406dee10(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1406dee21;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406dee62;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_SetAmount_140c5e920 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 5);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406deeff;
    FUN_1400569b0(lVar2,"Apollo.CashInput");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1406def21:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1406def3d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1406def3d;
        if (iVar1 == 7) goto LAB_1406def21;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1406def3d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406def6c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406def92;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406defda;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406defff;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df023;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df044;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df069;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df0ac;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df0d1;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1406df10c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1406df125;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1406df10c;
        if (iVar1 != 8) goto LAB_1406df125;
    }
    uVar15 = *puVar10;
    LAB_1406df125:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df134;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1406decf0;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df16b;
    FUN_1400f85d0(param_1 + 0xa80,L"CashInput",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1406df17b;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



longlong FUN_1406df190(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if ((*(uint *)(lVar1 + 0x1b0) >> 0x17 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1406df230(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    double dVar6;
    undefined local_res10 [24];

    lVar2 = FUN_1406df190();
    if ((*(byte *)(lVar2 + 0x1c) & 1) != 0) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        plVar4 = &DAT_140a12138;
        if (plVar3 < *(longlong **)(param_1 + 0x10)) {
            plVar4 = plVar3;
        }
        if ((*(int *)(plVar4 + 1) == 3) ||
            ((*(int *)(plVar4 + 1) == 4 &&
              (iVar1 = FUN_14005ac80(*plVar4 + 0x20,local_res10), iVar1 != 0)))) {
            dVar6 = (double)FUN_140056c40(param_1,2);
            lVar5 = 0;
            if ((9.223372036854776e+18 <= dVar6) &&
                (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
                lVar5 = -0x8000000000000000;
            }
            lVar5 = (longlong)dVar6 + lVar5;
        }
        else {
            plVar4 = (longlong *)FUN_140056ab0(param_1,2,"Game.Money");
            lVar5 = *plVar4;
            FUN_1406de010(lVar2,*(undefined4 *)(plVar4 + 1),*(undefined4 *)((longlong)plVar4 + 0xc),
                          *(undefined4 *)(plVar4 + 2),*(undefined4 *)((longlong)plVar4 + 0x14));
        }
        FUN_1406de650(lVar2,lVar5);
        return 0;
    }
    return 0;
}



undefined8 FUN_1406df4a0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;

    lVar3 = FUN_1406df190();
    lVar1 = *(longlong *)(lVar3 + 0x498);
    uVar2 = *(undefined8 *)(lVar3 + 0x408);
    local_20 = *(undefined4 *)(lVar1 + 0x10);
    uStack28 = *(undefined4 *)(lVar1 + 0x14);
    local_18 = *(undefined4 *)(lVar1 + 0x18);
    uStack20 = *(undefined4 *)(lVar1 + 0x1c);
    puVar4 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar4 = uVar2;
    puVar4[1] = CONCAT44(uStack28,local_20);
    puVar4[2] = CONCAT44(uStack20,local_18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



longlong ** FUN_1406df690(longlong **param_1,longlong *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;
    undefined4 uVar7;

    *param_1 = param_2;
    *(undefined (*) [16])(param_1 + 2) = ZEXT816(0);
    param_1[4] = (longlong *)0x0;
    param_1[6] = (longlong *)0x0;
    *(undefined *)((longlong)param_1 + 0x44) = *(undefined *)(param_2 + 8);
    FUN_1400c35f0();
    FUN_1401095e0();
    param_1[0x4a] = (longlong *)0x0;
    param_1[0x44] = (longlong *)0x0;
    param_1[0x45] = (longlong *)0x0;
    param_1[0x46] = (longlong *)0x0;
    param_1[0x47] = (longlong *)0x0;
    param_1[0x48] = (longlong *)0x0;
    param_1[0x49] = (longlong *)0x0;
    lVar5 = *param_2;
    iVar1 = *(int *)(lVar5 + 0x1c);
    iVar2 = *(int *)(lVar5 + 0x18);
    iVar3 = *(int *)(lVar5 + 0x24);
    iVar4 = *(int *)(lVar5 + 0x20);
    iVar6 = iVar2 + iVar1 + iVar4 + iVar3;
    if ((((iVar6 == iVar1) || (iVar6 == iVar4)) || (iVar6 == iVar3)) || (iVar6 == iVar2)) {
        if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x3d) = 2;
            goto LAB_1406df789;
        }
        if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x3d) = 1;
            goto LAB_1406df789;
        }
        if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0x3d) = 3;
            goto LAB_1406df789;
        }
        uVar7 = 4;
        if (iVar2 != 0) {
            uVar7 = 0;
        }
    }
    else {
        uVar7 = 4;
    }
    *(undefined4 *)(param_1 + 0x3d) = uVar7;
    LAB_1406df789:
    if (*(byte *)(param_2 + 8) == 0) {
        *(uint *)(param_1 + 8) = *(byte *)(*param_2 + 0x10) & 1;
        return param_1;
    }
    *(uint *)(param_1 + 8) = 3 - (uint)((uint)*(byte *)(param_2 + 8) < *(uint *)(*param_2 + 0x14));
    return param_1;
}



undefined8 * FUN_1406df7e0(undefined8 *param_1,longlong **param_2,longlong **param_3)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;

    *param_1 = param_2;
    param_1[1] = param_3;
    uVar4 = FUN_1408fd190(*(float *)((longlong)param_3 + 0x14) - *(float *)((longlong)param_2 + 0x14),
                          *(float *)(param_3 + 2) - *(float *)(param_2 + 2));
    *(undefined4 *)(param_1 + 2) = uVar4;
    if ((*(uint *)(param_2 + 8) < 2) || (uVar4 = 1, *(uint *)(param_3 + 8) < 2)) {
        uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    iVar2 = *(int *)(**param_3 + 4);
    iVar3 = *(int *)(**param_2 + 4);
    if ((iVar2 < iVar3) ||
        ((iVar3 == iVar2 &&
          (iVar2 = *(int *)(**param_3 + 8), piVar1 = (int *)(**param_2 + 8),
                  *piVar1 != iVar2 && iVar2 <= *piVar1)))) {
        *param_1 = param_3;
        param_1[1] = param_2;
        uVar4 = FUN_1408fd190(*(float *)((longlong)param_2 + 0x14) -
                              *(float *)((longlong)param_3 + 0x14),
                              *(float *)(param_2 + 2) - *(float *)(param_3 + 2));
        *(undefined4 *)(param_1 + 2) = uVar4;
    }
    return param_1;
}



int * FUN_1406df8a0(undefined8 param_1,undefined8 param_2,float param_3,int *param_4,float *param_5)

{
    uint in_EAX;
    uint uVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar11;
    undefined auVar10 [16];
    ulonglong uVar5;

    auVar10 = sqrtps(ZEXT1216(ZEXT812(0x40400000)),ZEXT1216(ZEXT812(0x40400000)));
    fVar3 = 1.0 / (param_3 * 64.0);
    fVar9 = *param_5 * 2.0 * 0.3333333 * fVar3;
    fVar3 = (SUB164(auVar10,0) * 0.3333333 * param_5[1] - *param_5 * 0.3333333) * fVar3;
    fVar6 = fVar9 + 0.5;
    iVar2 = (int)fVar6;
    fVar8 = (float)((uint)fVar9 ^ 0x80000000) - fVar3;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(in_EAX,ZEXT816(CONCAT44(fVar6,fVar6)));
        in_EAX = uVar1 & 1;
        fVar6 = (float)(iVar2 - in_EAX);
    }
    fVar7 = fVar8 + 0.5;
    iVar2 = (int)fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
        uVar1 = movmskps(in_EAX,ZEXT816(CONCAT44(fVar7,fVar7)));
        in_EAX = uVar1 & 1;
        fVar7 = (float)(iVar2 - in_EAX);
    }
    uVar11 = SUB164(auVar10 >> 0x20,0);
    fVar4 = fVar3 + 0.5;
    uVar5 = SUB168(CONCAT124(SUB1612(CONCAT412(SUB164(auVar10 >> 0x60,0),
                                               CONCAT48(SUB164(auVar10 >> 0x40,0),
                                                        CONCAT44(uVar11,fVar3))) >> 0x20,0),fVar4),0);
    iVar2 = (int)fVar4;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar4)) {
        uVar1 = movmskps(in_EAX,CONCAT88(SUB168(CONCAT412(uVar11,CONCAT48(uVar11,uVar5)) >> 0x40,0),
                                         uVar5 & 0xffffffff | uVar5 << 0x20));
        uVar5 = (ulonglong)(uint)(float)(iVar2 - (uVar1 & 1));
    }
    fVar4 = (float)uVar5;
    fVar9 = (float)((uint)(fVar6 - fVar9) & 0x7fffffff);
    fVar8 = (float)((uint)(fVar7 - fVar8) & 0x7fffffff);
    fVar3 = (float)((uint)(fVar4 - fVar3) & 0x7fffffff);
    if ((fVar9 <= fVar8) || (fVar9 <= fVar3)) {
        if (fVar8 <= fVar3) {
            fVar4 = (float)((uint)fVar6 ^ 0x80000000) - fVar7;
        }
    }
    else {
        fVar6 = (float)((uint)fVar7 ^ 0x80000000) - fVar4;
    }
    *param_4 = (int)(float)((uint)fVar6 ^ 0x80000000);
    param_4[1] = (int)(float)((uint)fVar4 ^ 0x80000000);
    return param_4;
}



undefined4 FUN_1406dfa40(longlong **param_1,longlong param_2)

{
    if ((param_1 != (longlong **)0x0) && (param_2 != 0)) {
        switch(*(undefined4 *)(param_2 + 0xdc)) {
            case 1:
                return *(undefined4 *)(**param_1 + 0x28);
            case 2:
                return *(undefined4 *)(**param_1 + 0x2c);
            case 3:
                return *(undefined4 *)(**param_1 + 0x30);
            case 4:
                return *(undefined4 *)(**param_1 + 0x34);
            case 5:
                return *(undefined4 *)(**param_1 + 0x38);
            case 7:
                return *(undefined4 *)(**param_1 + 0x3c);
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406dfad0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5,undefined8 param_6)

{
    int iVar1;
    ulonglong uVar2;
    longlong *plVar3;
    undefined4 uVar4;
    bool bVar5;
    bool bVar6;
    longlong lVar7;
    char cVar8;
    undefined2 *puVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 uVar12;
    ulonglong uVar13;
    ulonglong *puVar14;
    longlong **pplVar15;
    longlong **pplVar16;
    int *piVar17;
    LPVOID pvVar18;
    undefined4 *puVar19;
    int iVar20;
    longlong lVar21;
    longlong **pplVar22;
    undefined8 *puVar23;
    int iVar24;
    ulonglong uVar25;
    undefined8 *puVar26;
    undefined8 *puVar27;
    longlong *plVar28;
    int iVar29;
    float fVar30;
    undefined4 uVar31;
    longlong extraout_XMM0_Qa;
    undefined extraout_XMM0 [16];
    undefined4 uVar32;
    float fVar33;
    float fVar34;
    undefined in_XMM7 [16];
    undefined auVar35 [16];
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    undefined auStack760 [32];
    ulonglong local_2d8;
    undefined8 local_2d0;
    undefined8 local_2c8;
    undefined4 local_2c0;
    undefined4 local_2b8;
    longlong **local_2b0;
    undefined8 local_2a8;
    undefined8 local_2a0;
    longlong **local_298;
    longlong **local_290;
    undefined8 local_288;
    undefined4 uStack640;
    undefined4 uStack636;
    float fStack632;
    float fStack628;
    int iStack624;
    undefined4 uStack620;
    undefined **local_268;
    undefined *local_260;
    undefined *local_258;
    int local_250;
    int local_24c;
    int local_248;
    int local_244;
    int local_240;
    int local_23c;
    int local_238;
    int local_234;
    undefined **local_228;
    undefined *local_220;
    undefined *local_218;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    float local_1f8;
    float fStack500;
    int iStack496;
    undefined4 uStack492;
    undefined8 local_1e8;
    uint uStack480;
    undefined4 uStack476;
    undefined local_1d8 [8];
    undefined4 uStack464;
    undefined4 uStack460;
    undefined8 local_1c8;
    undefined8 local_1c0;
    undefined8 local_1b8;
    undefined8 uStack432;
    undefined8 local_1a8;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198;
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined **local_158;
    undefined *local_150;
    undefined *local_148;
    ulonglong local_a8;

    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack760;
    local_2c8 = (undefined ***)0x0;
    local_2d0 = (undefined4 *)param_6;
    local_2d8 = param_5;
    FUN_1400c5920(param_1);
    piVar17 = DAT_140c63750;
    *param_1 = &PTR_LAB_140b720d0;
    *(undefined4 *)(param_1 + 0x80) = DAT_140c784c0;
    *(undefined4 *)((longlong)param_1 + 0x404) = DAT_140c784c4;
    *(undefined4 *)(param_1 + 0x81) = DAT_140c784c8;
    *(undefined4 *)((longlong)param_1 + 0x40c) = DAT_140c784cc;
    uVar4 = uRam0000000140c7839c;
    uVar32 = uRam0000000140c78398;
    uVar31 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x82) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x414) = uVar31;
    *(undefined4 *)(param_1 + 0x83) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0x41c) = uVar4;
    uVar4 = uRam0000000140c783ac;
    uVar32 = uRam0000000140c783a8;
    uVar31 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x84) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x424) = uVar31;
    *(undefined4 *)(param_1 + 0x85) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0x42c) = uVar4;
    uVar4 = uRam0000000140c783bc;
    uVar32 = uRam0000000140c783b8;
    uVar31 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x86) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x434) = uVar31;
    *(undefined4 *)(param_1 + 0x87) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0x43c) = uVar4;
    uVar4 = uRam0000000140c783cc;
    uVar32 = uRam0000000140c783c8;
    uVar31 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x88) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x444) = uVar31;
    *(undefined4 *)(param_1 + 0x89) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0x44c) = uVar4;
    *(undefined (*) [16])(param_1 + 0x8a) =
            ZEXT816(CONCAT44((float)(*(int *)(param_1 + 0x5b) + *(int *)(param_1 + 0x5a) >> 1),
                             (float)(*(int *)((longlong)param_1 + 0x2d4) +
                                     *(int *)((longlong)param_1 + 0x2cc) >> 1)));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    param_1[0x8d] = 0;
    iVar24 = DAT_140c53ac0;
    if (*piVar17 < DAT_140c53ac0) {
        iVar24 = *piVar17;
    }
    *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(&DAT_140c53ad0 + (longlong)iVar24 * 4);
    iVar24 = DAT_140c53ac0;
    if (*piVar17 < DAT_140c53ac0) {
        iVar24 = *piVar17;
    }
    *(undefined4 *)((longlong)param_1 + 0x474) =
            *(undefined4 *)(&DAT_140c53ad0 + (longlong)iVar24 * 4);
    FUN_1401095e0(param_1 + 0x8f);
    FUN_1401095e0(param_1 + 0x95);
    FUN_1401095e0(param_1 + 0x9b);
    FUN_1401095e0(param_1 + 0xa1);
    FUN_1401095e0(param_1 + 0xa7);
    FUN_1401095e0(param_1 + 0xad);
    puVar26 = param_1 + 0xb3;
    iVar24 = 5;
    puVar23 = param_1 + 0xb7;
    do {
        puVar23[-1] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar9 = (undefined2 *)FUN_14018b280(0x10);
        puVar23[-1] = puVar9;
        *puVar23 = puVar9;
        puVar23[1] = puVar9 + 8;
        if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
        }
        uVar31 = DAT_140c63664;
        *puVar26 = 0;
        *(undefined4 *)((longlong)puVar23 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar23 + -3) = uVar31;
        puVar23 = puVar23 + 6;
        puVar26 = puVar26 + 6;
        iVar24 = iVar24 + -1;
    } while (-1 < iVar24);
    FUN_1401095e0(param_1 + 0xd7);
    FUN_1401095e0(param_1 + 0xdd);
    FUN_1401095e0(param_1 + 0xe3);
    FUN_1401095e0(param_1 + 0xe9);
    FUN_1401095e0(param_1 + 0xef);
    lVar21 = 2;
    puVar23 = param_1 + 0xf6;
    do {
        puVar26 = puVar23;
        *puVar26 = 0;
        puVar26[1] = 0;
        puVar26[2] = 0;
        puVar26[3] = 0;
        puVar26[4] = 0;
        puVar26[5] = 0;
        puVar26[6] = 0;
        puVar26[7] = 0;
        lVar21 = lVar21 + -1;
        puVar23 = puVar26 + 8;
    } while (lVar21 != 0);
    puVar26[8] = 0;
    puVar26[9] = 0;
    puVar27 = param_1 + 0x10a;
    puVar26[10] = 0;
    iVar24 = 4;
    puVar23 = param_1 + 0x10e;
    puVar26[0xb] = 0;
    do {
        puVar23[-1] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar9 = (undefined2 *)FUN_14018b280(0x10);
        puVar23[-1] = puVar9;
        *puVar23 = puVar9;
        puVar23[1] = puVar9 + 8;
        if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
        }
        uVar31 = DAT_140c63664;
        *puVar27 = 0;
        *(undefined4 *)((longlong)puVar23 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar23 + -3) = uVar31;
        puVar23 = puVar23 + 6;
        puVar27 = puVar27 + 6;
        iVar24 = iVar24 + -1;
    } while (-1 < iVar24);
    param_1[0x128] = 0;
    FUN_1402e2870(param_1 + 0x129);
    FUN_1400522f0(param_1 + 0x12e);
    param_1[0x134] = 0;
    param_1[0x133] = 0;
    FUN_1402e2870(param_1 + 0x135);
    FUN_1400522f0(param_1 + 0x13a);
    param_1[0x140] = 0;
    param_1[0x13f] = 0;
    param_1[0x142] = 0;
    param_1[0x141] = 0;
    param_1[0x143] = 0;
    FUN_1401095e0(param_1 + 0x144);
    param_1[0x14a] = 0;
    param_1[0x14c] = 0;
    param_1[0x14b] = 0;
    param_1[0x14e] = 0;
    param_1[0x14d] = 0;
    param_1[0x150] = 0;
    param_1[0x14f] = 0;
    uVar12 = param_1[4];
    param_1[0x151] = 0;
    param_1[0x152] = 0;
    param_1[0x153] = 0;
    param_1[0x156] = 0;
    param_1[0x157] = 0;
    param_1[0x158] = 0;
    puVar9 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x156] = puVar9;
    param_1[0x157] = puVar9;
    param_1[0x158] = puVar9 + 8;
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    FUN_14010aeb0(param_1 + 0x154,uVar12);
    uVar12 = param_1[4];
    param_1[0x15b] = 0;
    param_1[0x15c] = 0;
    param_1[0x15d] = 0;
    puVar9 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x15b] = puVar9;
    param_1[0x15c] = puVar9;
    param_1[0x15d] = puVar9 + 8;
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    FUN_14010aeb0(param_1 + 0x159,uVar12,L"PlayUIPrimalMatrixSFXVectorComplete");
    uVar4 = uRam0000000140c7839c;
    uVar32 = uRam0000000140c78398;
    uVar31 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x15e) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xaf4) = uVar31;
    *(undefined4 *)(param_1 + 0x15f) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xafc) = uVar4;
    uVar4 = uRam0000000140c783ac;
    uVar32 = uRam0000000140c783a8;
    uVar31 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x160) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xb04) = uVar31;
    *(undefined4 *)(param_1 + 0x161) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb0c) = uVar4;
    uVar4 = uRam0000000140c783bc;
    uVar32 = uRam0000000140c783b8;
    uVar31 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x162) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xb14) = uVar31;
    *(undefined4 *)(param_1 + 0x163) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb1c) = uVar4;
    uVar4 = uRam0000000140c783cc;
    uVar32 = uRam0000000140c783c8;
    uVar31 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x164) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xb24) = uVar31;
    *(undefined4 *)(param_1 + 0x165) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb2c) = uVar4;
    uVar4 = uRam0000000140c7839c;
    uVar32 = uRam0000000140c78398;
    uVar31 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x166) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xb34) = uVar31;
    *(undefined4 *)(param_1 + 0x167) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb3c) = uVar4;
    uVar4 = uRam0000000140c783ac;
    uVar32 = uRam0000000140c783a8;
    uVar31 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x168) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xb44) = uVar31;
    *(undefined4 *)(param_1 + 0x169) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb4c) = uVar4;
    uVar4 = uRam0000000140c783bc;
    uVar32 = uRam0000000140c783b8;
    uVar31 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x16a) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xb54) = uVar31;
    *(undefined4 *)(param_1 + 0x16b) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb5c) = uVar4;
    uVar4 = uRam0000000140c783cc;
    uVar32 = uRam0000000140c783c8;
    uVar31 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x16c) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xb64) = uVar31;
    *(undefined4 *)(param_1 + 0x16d) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb6c) = uVar4;
    uVar4 = uRam0000000140c7839c;
    uVar32 = uRam0000000140c78398;
    uVar31 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x16e) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xb74) = uVar31;
    *(undefined4 *)(param_1 + 0x16f) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb7c) = uVar4;
    uVar4 = uRam0000000140c783ac;
    uVar32 = uRam0000000140c783a8;
    uVar31 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x170) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xb84) = uVar31;
    *(undefined4 *)(param_1 + 0x171) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb8c) = uVar4;
    uVar4 = uRam0000000140c783bc;
    uVar32 = uRam0000000140c783b8;
    uVar31 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x172) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xb94) = uVar31;
    *(undefined4 *)(param_1 + 0x173) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xb9c) = uVar4;
    uVar4 = uRam0000000140c783cc;
    uVar32 = uRam0000000140c783c8;
    uVar31 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x174) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xba4) = uVar31;
    *(undefined4 *)(param_1 + 0x175) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xbac) = uVar4;
    *(undefined4 *)(param_1 + 0x176) = DAT_140c79888;
    *(undefined4 *)((longlong)param_1 + 0xbb4) = DAT_140c7988c;
    FUN_1407e4830(param_1 + 0x178,0);
    lVar21 = 0;
    plVar28 = param_1 + 0x1df;
    param_1[0x1da] = 0;
    param_1[0x1db] = 0;
    param_1[0x1dc] = 0;
    param_1[0x1dd] = 0;
    *(undefined4 *)(param_1 + 0x1de) = 0;
    *plVar28 = 0;
    param_1[0x36] = param_1[0x36] | 0x100000000000;
    if (plVar28 != (longlong *)0x0) {
        lVar10 = FUN_14018b280(0x18,0);
        lVar11 = lVar21;
        if (lVar10 != 0) {
            lVar11 = FUN_1401ae310(lVar10);
        }
        *plVar28 = lVar11;
    }
    local_288._0_4_ = *(float *)(param_1 + 0x8e);
    uStack640 = 0;
    uStack636 = 0;
    iStack624 = (int)(param_1 + 0x8a);
    uStack620 = (undefined4)((ulonglong)(param_1 + 0x8a) >> 0x20);
    fStack632 = 0.0;
    _local_1d8 = ZEXT1216(CONCAT48(uStack620,CONCAT44(iStack624,fStack628))) << 0x20;
    local_1e8 = CONCAT44(local_288._4_4_,(float)local_288);
    uStack480 = 0;
    uStack476 = 0;
    FUN_1401b0840(&local_1e8,param_1 + 0x82);
    if ((param_1[0xd7] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xd9,L"BasicSprites:WhiteFill"), cVar8 == '\0')) {
        lVar10 = FUN_140108e80(param_2 + 0xf0,L"BasicSprites:WhiteFill");
        lVar11 = lVar21;
        if (lVar10 != 0) {
            do {
                lVar7 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"BasicSprites:WhiteFill"[lVar7] != L'\0');
            FUN_14001c480(param_1 + 0xd9);
        }
        FUN_1401097f0(param_1 + 0xd7,lVar10);
    }
    if ((param_1[0xdd] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xdf,L"PrimalMatrix:Background_1"), cVar8 == '\0')) {
        lVar11 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Background_1");
        if (lVar11 != 0) {
            do {
                lVar10 = lVar21 + 1;
                lVar21 = lVar21 + 1;
            } while (L"PrimalMatrix:Background_1"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xdf,L"PrimalMatrix:Background_1");
        }
        FUN_1401097f0(param_1 + 0xdd,lVar11);
    }
    if ((param_1[0xe3] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xe5,L"PrimalMatrix:Background_2"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Background_2");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Background_2"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xe5,L"PrimalMatrix:Background_2");
        }
        FUN_1401097f0(param_1 + 0xe3,lVar21);
    }
    if ((param_1[0xe9] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xeb,L"PrimalMatrix:Background_3"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Background_3");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Background_3"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xeb,L"PrimalMatrix:Background_3");
        }
        FUN_1401097f0(param_1 + 0xe9,lVar21);
    }
    if ((param_1[0x8f] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0x91,L"PrimalMatrix:Sector_Base_Locked"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Sector_Base_Locked");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Sector_Base_Locked"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x91,L"PrimalMatrix:Sector_Base_Locked");
        }
        FUN_1401097f0(param_1 + 0x8f,lVar21);
    }
    if ((param_1[0x95] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0x97,L"PrimalMatrix:Sector_Base_Unlocked"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Sector_Base_Unlocked");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Sector_Base_Unlocked"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x97,L"PrimalMatrix:Sector_Base_Unlocked");
        }
        FUN_1401097f0(param_1 + 0x95,lVar21);
    }
    if ((param_1[0x9b] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0x9d,L"PrimalMatrix:Sector_Base_Completed"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Sector_Base_Completed");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Sector_Base_Completed"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x9d,L"PrimalMatrix:Sector_Base_Completed");
        }
        FUN_1401097f0(param_1 + 0x9b,lVar21);
    }
    if ((param_1[0x144] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0x146,L"PrimalMatrix:Node_Pathfinding"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Node_Pathfinding");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Pathfinding"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x146,L"PrimalMatrix:Node_Pathfinding");
        }
        FUN_1401097f0(param_1 + 0x144,lVar21);
    }
    if ((param_1[0xa1] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xa3,L"PrimalMatrix:Node_Blue_Unlocked"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Node_Blue_Unlocked");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Blue_Unlocked"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xa3,L"PrimalMatrix:Node_Blue_Unlocked");
        }
        FUN_1401097f0(param_1 + 0xa1,lVar21);
    }
    if ((param_1[0xa7] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xa9,L"PrimalMatrix:Connector_Bridge_Inactive"), cVar8 == '\0'
        )) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_Bridge_Inactive");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_Bridge_Inactive"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xa9,L"PrimalMatrix:Connector_Bridge_Inactive");
        }
        FUN_1401097f0(param_1 + 0xa7,lVar21);
    }
    if ((param_1[0xad] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xaf,L"PrimalMatrix:Connector_Bridge_Active"), cVar8 == '\0'))
    {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_Bridge_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_Bridge_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xaf,L"PrimalMatrix:Connector_Bridge_Active");
        }
        FUN_1401097f0(param_1 + 0xad,lVar21);
    }
    if ((param_1[0xb3] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xb5,L"PrimalMatrix:Connector_SectorTopRight_Active"),
                cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_SectorTopRight_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_SectorTopRight_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xb5,L"PrimalMatrix:Connector_SectorTopRight_Active");
        }
        FUN_1401097f0(param_1 + 0xb3,lVar21);
    }
    if ((param_1[0xb9] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xbb,L"PrimalMatrix:Connector_SectorWideRight_Active"),
                cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_SectorWideRight_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_SectorWideRight_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xbb,L"PrimalMatrix:Connector_SectorWideRight_Active");
        }
        FUN_1401097f0(param_1 + 0xb9,lVar21);
    }
    if ((param_1[0xbf] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xc1,L"PrimalMatrix:Connector_SectorBottomRight_Active"),
                cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_SectorBottomRight_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_SectorBottomRight_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xc1,L"PrimalMatrix:Connector_SectorBottomRight_Active");
        }
        FUN_1401097f0(param_1 + 0xbf,lVar21);
    }
    if ((param_1[0xc5] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 199,L"PrimalMatrix:Connector_SectorBottomLeft_Active"),
                cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_SectorBottomLeft_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_SectorBottomLeft_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 199,L"PrimalMatrix:Connector_SectorBottomLeft_Active");
        }
        FUN_1401097f0(param_1 + 0xc5,lVar21);
    }
    if ((param_1[0xcb] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xcd,L"PrimalMatrix:Connector_SectorWideLeft_Active"),
                cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_SectorWideLeft_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_SectorWideLeft_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xcd,L"PrimalMatrix:Connector_SectorWideLeft_Active");
        }
        FUN_1401097f0(param_1 + 0xcb,lVar21);
    }
    if ((param_1[0xd1] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xd3,L"PrimalMatrix:Connector_SectorTopLeft_Active"),
                cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:Connector_SectorTopLeft_Active");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Connector_SectorTopLeft_Active"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xd3,L"PrimalMatrix:Connector_SectorTopLeft_Active");
        }
        FUN_1401097f0(param_1 + 0xd1,lVar21);
    }
    lVar21 = param_1[4];
    if ((lVar21 != 0) &&
        ((param_1[0x10a] == 0 ||
          (cVar8 = FUN_14002c740(param_1 + 0x10c,L"PrimalMatrix:Node_Red_Pending"), cVar8 == '\0')))) {
        lVar21 = FUN_140108e80(lVar21 + 0xf0,L"PrimalMatrix:Node_Red_Pending");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Red_Pending"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x10c,L"PrimalMatrix:Node_Red_Pending");
        }
        FUN_1401097f0(param_1 + 0x10a,lVar21);
    }
    lVar21 = param_1[4];
    if ((lVar21 != 0) &&
        ((param_1[0x110] == 0 ||
          (cVar8 = FUN_14002c740(param_1 + 0x112,L"PrimalMatrix:Node_Green_Pending"), cVar8 == '\0'))))
    {
        lVar21 = FUN_140108e80(lVar21 + 0xf0,L"PrimalMatrix:Node_Green_Pending");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Green_Pending"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x112,L"PrimalMatrix:Node_Green_Pending");
        }
        FUN_1401097f0(param_1 + 0x110,lVar21);
    }
    lVar21 = param_1[4];
    if ((lVar21 != 0) &&
        ((param_1[0x116] == 0 ||
          (cVar8 = FUN_14002c740(param_1 + 0x118,L"PrimalMatrix:Node_Blue_Pending"), cVar8 == '\0')))) {
        lVar21 = FUN_140108e80(lVar21 + 0xf0,L"PrimalMatrix:Node_Blue_Pending");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Blue_Pending"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x118,L"PrimalMatrix:Node_Blue_Pending");
        }
        FUN_1401097f0(param_1 + 0x116,lVar21);
    }
    lVar21 = param_1[4];
    if ((lVar21 != 0) &&
        ((param_1[0x11c] == 0 ||
          (cVar8 = FUN_14002c740(param_1 + 0x11e,L"PrimalMatrix:Node_Purple_Pending"), cVar8 == '\0'))))
    {
        lVar21 = FUN_140108e80(lVar21 + 0xf0,L"PrimalMatrix:Node_Purple_Pending");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Purple_Pending"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x11e,L"PrimalMatrix:Node_Purple_Pending");
        }
        FUN_1401097f0(param_1 + 0x11c,lVar21);
    }
    lVar21 = param_1[4];
    if ((lVar21 != 0) &&
        ((param_1[0x122] == 0 ||
          (cVar8 = FUN_14002c740(param_1 + 0x124,L"PrimalMatrix:Node_Green_Pending"), cVar8 == '\0'))))
    {
        lVar21 = FUN_140108e80(lVar21 + 0xf0,L"PrimalMatrix:Node_Green_Pending");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:Node_Green_Pending"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x124,L"PrimalMatrix:Node_Green_Pending");
        }
        FUN_1401097f0(param_1 + 0x122,lVar21);
    }
    if ((param_1[0xef] == 0) ||
        (cVar8 = FUN_14002c740(param_1 + 0xf1,L"PrimalMatrix:NodeRank_Base"), cVar8 == '\0')) {
        lVar21 = FUN_140108e80(param_2 + 0xf0,L"PrimalMatrix:NodeRank_Base");
        if (lVar21 != 0) {
            lVar11 = 0;
            do {
                lVar10 = lVar11 + 1;
                lVar11 = lVar11 + 1;
            } while (L"PrimalMatrix:NodeRank_Base"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0xf1,L"PrimalMatrix:NodeRank_Base");
        }
        FUN_1401097f0(param_1 + 0xef,lVar21);
    }
    uVar12 = FUN_1400e58c0();
    pplVar16 = DAT_140c65a50;
    fVar36 = 3.0;
    fVar38 = 96.0;
    fVar39 = 0.5;
    param_1[0xf5] = uVar12;
    local_298 = pplVar16;
    local_290 = (longlong **)0x0;
    pplVar22 = pplVar16;
    if (pplVar16[1] != (longlong *)0x0) {
        auVar35 = sqrtps(in_XMM7,ZEXT816(0x40400000));
        fVar34 = -2.0;
        fVar37 = -2.0;
        auVar35 = CONCAT124(SUB1612(auVar35 >> 0x20,0),SUB164(auVar35,0) * 64.0);
        do {
            pplVar22 = local_290;
            plVar28 = (longlong *)(*pplVar16)[(longlong)local_290];
            fVar30 = (float)*(int *)(*plVar28 + 4);
            fVar33 = fVar30 * fVar38;
            uVar31 = 0;
            fVar30 = ((float)*(int *)(*plVar28 + 8) + fVar30 * fVar39) * SUB164(auVar35,0);
            uVar32 = 0;
            local_288._0_4_ = fVar33 - DAT_140c4b068;
            fStack632 = DAT_140c4b068 + fVar33;
            fStack628 = fVar30 + 55.42562;
            local_288._4_4_ = fVar30 - 55.42562;
            local_248 = (int)fStack632;
            local_244 = (int)fStack628;
            local_24c = (int)local_288._4_4_;
            local_250 = (int)(float)local_288;
            iVar24 = *(int *)(param_1 + 0x81);
            if (*(int *)(param_1 + 0x81) < local_248) {
                iVar24 = local_248;
            }
            iVar29 = *(int *)((longlong)param_1 + 0x40c);
            if (*(int *)((longlong)param_1 + 0x40c) < local_244) {
                iVar29 = local_244;
            }
            iVar20 = *(int *)(param_1 + 0x80);
            if (local_250 < *(int *)(param_1 + 0x80)) {
                iVar20 = local_250;
            }
            *(int *)(param_1 + 0x80) = iVar20;
            iVar20 = *(int *)((longlong)param_1 + 0x404);
            if (local_24c < *(int *)((longlong)param_1 + 0x404)) {
                iVar20 = local_24c;
            }
            *(int *)((longlong)param_1 + 0x404) = iVar20;
            *(int *)((longlong)param_1 + 0x40c) = iVar29;
            *(int *)(param_1 + 0x81) = iVar24;
            lVar21 = FUN_14018b280(0x260,0);
            if (lVar21 == 0) {
                local_2a8 = (longlong **)0x0;
            }
            else {
                local_2a8 = (longlong **)FUN_1406df690(lVar21,plVar28);
            }
            pplVar15 = local_2a8;
            *(undefined (*) [16])(local_2a8 + 2) =
                    CONCAT412(uVar32,CONCAT48(uVar31,CONCAT44(fVar30,fVar33)));
            local_1e8 = 0;
            *(float *)(local_2a8 + 4) = (float)local_288;
            *(float *)((longlong)local_2a8 + 0x24) = local_288._4_4_;
            *(undefined4 *)(local_2a8 + 5) = uStack640;
            *(undefined4 *)((longlong)local_2a8 + 0x2c) = uStack636;
            uStack480 = uStack480 & 0xffffff00;
            _local_1d8 = ZEXT816(0);
            *(float *)(local_2a8 + 6) = fStack632;
            *(float *)((longlong)local_2a8 + 0x34) = fStack628;
            *(int *)(local_2a8 + 7) = iStack624;
            *(undefined4 *)((longlong)local_2a8 + 0x3c) = uStack620;
            local_1c8 = 0;
            local_1c0 = 0;
            local_1b8 = 0;
            uStack432 = 0;
            local_1a8 = (longlong *)0x0;
            FUN_14010b330(&local_1e8,param_1[4]);
            *(undefined4 *)(pplVar15 + 0x2e) = 0;
            FUN_1400c3730();
            *(byte *)((longlong)pplVar15 + 0x1e6) = *(byte *)((longlong)pplVar15 + 0x1e6) & 0xfe;
            *(undefined2 *)((longlong)pplVar15 + 0x1e4) = 0x10;
            *(undefined4 *)((longlong)pplVar15 + 0x1d4) = 0x3e800000;
            pplVar15[0x3b] = (longlong *)0x3e800000;
            *(undefined8 *)((longlong)pplVar15 + 0x1cc) = 5;
            *(undefined4 *)(pplVar15 + 0x3c) = 0x3f000000;
            *(undefined4 *)(pplVar15 + 0x39) = 5;
            pplVar15[0x2d] = local_1a8;
            local_240 = (int)(*(float *)(pplVar15 + 4) - fVar34);
            local_238 = (int)(*(float *)(pplVar15 + 6) + fVar34);
            local_234 = (int)(*(float *)((longlong)pplVar15 + 0x34) + fVar37);
            local_23c = (int)(*(float *)((longlong)pplVar15 + 0x24) - fVar37);
            FUN_1400c3ad0(pplVar15 + 9,&local_240);
            *(byte *)((longlong)pplVar15 + 0x1e4) = *(byte *)((longlong)pplVar15 + 0x1e4) | 1;
            *(undefined4 *)(pplVar15 + 0x3c) = 0x3e800000;
            FUN_140033260();
            local_2a0 = *(longlong **)(*plVar28 + 4);
            if (param_1[0x129] == param_1[0x12a]) {
                FUN_1400290d0(param_1 + 0x129);
            }
            uVar13 = (*(code *)param_1[300])(&local_2a0);
            uVar25 = param_1[0x12a];
            lVar21 = param_1[299];
            puVar14 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar14 == (ulonglong *)0x0) {
                puVar14 = (ulonglong *)0x0;
            }
            else {
                uVar2 = *(ulonglong *)(lVar21 + (uVar13 % uVar25) * 8);
                *puVar14 = uVar13;
                puVar14[1] = uVar2;
                *(undefined4 *)(puVar14 + 2) = (undefined4)local_2a0;
                *(undefined4 *)((longlong)puVar14 + 0x14) = local_2a0._4_4_;
                puVar14[3] = (ulonglong)local_2a8;
            }
            *(ulonglong **)(lVar21 + (uVar13 % uVar25) * 8) = puVar14;
            param_1[0x129] = param_1[0x129] + 1;
            FUN_1400b6080(param_1 + 0x12e);
            pplVar15 = local_2a8;
            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
                FUN_1406dfa40();
                lVar21 = FUN_140226240();
                if (lVar21 != 0) {
                    bVar5 = false;
                    bVar6 = false;
                    lVar11 = 4;
                    lVar21 = lVar21 + 0x14;
                    do {
                        iVar24 = *(int *)(lVar21 + -0x10);
                        if (iVar24 == 2) {
                            bVar5 = true;
                        }
                        else if (iVar24 == 3) {
                            bVar6 = true;
                        }
                        else if ((((iVar24 == 4) && (lVar10 = FUN_1403acd90(), lVar10 != 0)) &&
                                  ((*(longlong *)(lVar10 + 8) != 0 ||
                                    ((CONCAT62(uRam0000000000000002,_DAT_00000000) != 0 || (_DAT_00000000 != 0))))
                                  )) && (param_1[4] != 0)) {
                            FUN_140109710();
                        }
                        lVar21 = lVar21 + 4;
                        lVar11 = lVar11 + -1;
                    } while (lVar11 != 0);
                    pplVar22 = local_290;
                    pplVar16 = local_298;
                    if (pplVar15[0x3e] == (longlong *)0x0) {
                        if (bVar5) {
                            lVar21 = param_1[4];
                        }
                        else {
                            if (!bVar6) goto LAB_1406e0fe0;
                            lVar21 = param_1[4];
                        }
                        if (lVar21 != 0) {
                            FUN_140109710();
                            pplVar22 = local_290;
                            pplVar16 = local_298;
                        }
                    }
                }
            }
            LAB_1406e0fe0:
            if ((*(byte *)(**pplVar15 + 0x10) & 1) != 0) {
                param_1[0x128] = pplVar15;
            }
            local_290 = (longlong **)((longlong)pplVar22 + 1);
            pplVar22 = DAT_140c65a50;
        } while (local_290 < pplVar16[1]);
    }
    plVar28 = (longlong *)0x0;
    if (pplVar22[0xd] != (longlong *)0x0) {
        auVar35 = CONCAT124(SUB1612((ZEXT416((uint)SQRT(fVar36)) & (undefined  [16])0xffffffffffffffff)
                                            >> 0x20,0),
                            SUB164(ZEXT416((uint)SQRT(fVar36)) & (undefined  [16])0xffffffffffffffff,0)
                            * 64.0);
        do {
            pplVar16 = (longlong **)0x0;
            plVar3 = (longlong *)pplVar22[0xc][(longlong)plVar28];
            fVar36 = (float)*(int *)(*plVar3 + 4);
            fVar34 = fVar36 * fVar38;
            uVar31 = 0;
            fVar36 = ((float)*(int *)(*plVar3 + 8) + fVar36 * fVar39) * SUB164(auVar35,0);
            uVar32 = 0;
            local_288._0_4_ = fVar34 - DAT_140c4b068;
            fStack632 = fVar34 + DAT_140c4b068;
            local_288._4_4_ = fVar36 - 55.42562;
            fStack628 = fVar36 + 55.42562;
            local_248 = (int)fStack632;
            local_244 = (int)fStack628;
            local_24c = (int)local_288._4_4_;
            local_250 = (int)(float)local_288;
            iVar24 = *(int *)(param_1 + 0x81);
            if (*(int *)(param_1 + 0x81) < local_248) {
                iVar24 = local_248;
            }
            iVar29 = *(int *)((longlong)param_1 + 0x40c);
            if (*(int *)((longlong)param_1 + 0x40c) < local_244) {
                iVar29 = local_244;
            }
            iVar20 = *(int *)(param_1 + 0x80);
            if (local_250 < *(int *)(param_1 + 0x80)) {
                iVar20 = local_250;
            }
            *(int *)(param_1 + 0x80) = iVar20;
            iVar20 = *(int *)((longlong)param_1 + 0x404);
            if (local_24c < *(int *)((longlong)param_1 + 0x404)) {
                iVar20 = local_24c;
            }
            *(int *)((longlong)param_1 + 0x404) = iVar20;
            *(int *)((longlong)param_1 + 0x40c) = iVar29;
            *(int *)(param_1 + 0x81) = iVar24;
            pplVar15 = (longlong **)FUN_14018b280(0x60);
            if (pplVar15 != (longlong **)0x0) {
                *pplVar15 = plVar3;
                *(undefined (*) [16])(pplVar15 + 2) = extraout_XMM0 & (undefined  [16])0x0;
                pplVar15[4] = (longlong *)0x0;
                pplVar15[6] = (longlong *)0x0;
                *(undefined4 *)(pplVar15 + 8) = 0;
                pplVar15[10] = (longlong *)0x0;
                pplVar15[9] = (longlong *)0x0;
                pplVar16 = pplVar15;
            }
            *(undefined (*) [16])(pplVar16 + 2) =
                    CONCAT412(uVar32,CONCAT48(uVar31,CONCAT44(fVar36,fVar34)));
            *(float *)(pplVar16 + 4) = (float)local_288;
            *(float *)((longlong)pplVar16 + 0x24) = local_288._4_4_;
            *(undefined4 *)(pplVar16 + 5) = uStack640;
            *(undefined4 *)((longlong)pplVar16 + 0x2c) = uStack636;
            *(float *)(pplVar16 + 6) = fStack632;
            *(float *)((longlong)pplVar16 + 0x34) = fStack628;
            *(int *)(pplVar16 + 7) = iStack624;
            *(undefined4 *)((longlong)pplVar16 + 0x3c) = uStack620;
            local_298 = pplVar16;
            FUN_140033260();
            local_2a8 = *(longlong ***)(*plVar3 + 4);
            if (param_1[0x135] == param_1[0x136]) {
                FUN_1400290d0(param_1 + 0x135);
            }
            uVar13 = (*(code *)param_1[0x138])(&local_2a8);
            uVar25 = param_1[0x136];
            lVar21 = param_1[0x137];
            puVar14 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar14 != (ulonglong *)0x0) {
                uVar2 = *(ulonglong *)(lVar21 + (uVar13 % uVar25) * 8);
                *puVar14 = uVar13;
                puVar14[1] = uVar2;
                *(undefined4 *)(puVar14 + 2) = (undefined4)local_2a8;
                *(undefined4 *)((longlong)puVar14 + 0x14) = local_2a8._4_4_;
                puVar14[3] = (ulonglong)local_298;
            }
            *(ulonglong **)(lVar21 + (uVar13 % uVar25) * 8) = puVar14;
            param_1[0x135] = param_1[0x135] + 1;
            FUN_1400b6080();
            plVar28 = (longlong *)((longlong)plVar28 + 1);
        } while (plVar28 < pplVar22[0xd]);
    }
    iVar29 = *(int *)((longlong)param_1 + 0x2d4) + *(int *)((longlong)param_1 + 0x2cc) >> 1;
    iVar24 = *(int *)(param_1 + 0x5b) + *(int *)(param_1 + 0x5a) >> 1;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + iVar29;
    *(int *)((longlong)param_1 + 0x404) = *(int *)((longlong)param_1 + 0x404) + iVar24;
    *(int *)(param_1 + 0x81) = *(int *)(param_1 + 0x81) + iVar29;
    *(int *)((longlong)param_1 + 0x40c) = *(int *)((longlong)param_1 + 0x40c) + iVar24;
    local_2a8 = (longlong **)0x0;
    if (param_1[0x134] != 0) {
        do {
            uVar25 = 0;
            pplVar16 = *(longlong ***)(param_1[0x133] + (longlong)local_2a8 * 8);
            do {
                if (((undefined8 *)(*pplVar16)[uVar25 + 1] != (undefined8 *)0x0) &&
                    (iVar24 = FUN_1402dd480(param_1 + 0x12e,*(undefined8 *)(*pplVar16)[uVar25 + 1],&local_298
                    ), pplVar22 = local_298, iVar24 != 0)) {
                    if ((*(int *)(pplVar16 + 8) == 0) && (*(int *)(local_298 + 8) - 2U < 2)) {
                        FUN_1406e4720(param_1,pplVar16,1);
                    }
                    if (pplVar16[uVar25 + 0x44] == (longlong *)0x0) {
                        plVar28 = (longlong *)FUN_14018b280(0x28);
                        if (plVar28 != (longlong *)0x0) {
                            plVar28 = (longlong *)FUN_1406df7e0(plVar28,pplVar16,pplVar22);
                        }
                        pplVar16[uVar25 + 0x44] = plVar28;
                        pplVar22[(uVar25 + 3) % 6 + 0x44] = plVar28;
                        local_2a0 = plVar28;
                        if (((*pplVar16)[7] == 0) || ((*pplVar16)[7] != (*pplVar22)[7])) {
                            pplVar22 = (longlong **)(param_1 + 0x141);
                        }
                        else {
                            iVar24 = FUN_1402dd480();
                            if (iVar24 == 0) goto LAB_1406e14a6;
                            lVar21 = **pplVar16;
                            lVar11 = **pplVar22;
                            iVar24 = *(int *)(lVar21 + 4);
                            iVar29 = *(int *)(lVar11 + 4);
                            if (iVar24 == iVar29) {
                                if ((*(int *)(lVar21 + 8) < *(int *)(**local_290 + 8)) ||
                                    (*(int *)(lVar11 + 8) < *(int *)(**local_290 + 8))) {
                                    *(undefined4 *)((longlong)plVar28 + 0x14) = 1;
                                    pplVar22 = local_290 + 9;
                                }
                                else {
                                    *(undefined4 *)((longlong)plVar28 + 0x14) = 4;
                                    pplVar22 = local_290 + 9;
                                }
                            }
                            else {
                                iVar20 = *(int *)(lVar21 + 8);
                                iVar1 = *(int *)(lVar11 + 8);
                                if (iVar20 == iVar1) {
                                    if ((iVar24 < *(int *)(**local_290 + 4)) || (iVar29 < *(int *)(**local_290 + 4)))
                                    {
                                        *(undefined4 *)((longlong)plVar28 + 0x14) = 3;
                                        pplVar22 = local_290 + 9;
                                    }
                                    else {
                                        pplVar22 = local_290 + 9;
                                        *(undefined4 *)((longlong)plVar28 + 0x14) = 0;
                                    }
                                }
                                else {
                                    if (((iVar24 < iVar29) && (iVar1 < iVar20)) ||
                                        ((iVar29 < iVar24 && (iVar20 < iVar1)))) {
                                        if ((*(int *)(**local_290 + 4) <= iVar24) &&
                                            (*(int *)(**local_290 + 4) <= iVar29)) {
                                            *(undefined4 *)((longlong)plVar28 + 0x14) = 2;
                                            pplVar22 = local_290 + 9;
                                            goto LAB_1406e149c;
                                        }
                                        *(undefined4 *)((longlong)plVar28 + 0x14) = 5;
                                    }
                                    pplVar22 = local_290 + 9;
                                }
                            }
                        }
                        LAB_1406e149c:
                        FUN_140033260(pplVar22,&local_2a0);
                    }
                }
                LAB_1406e14a6:
                uVar25 = uVar25 + 1;
            } while (uVar25 < 6);
            local_2a8 = (longlong **)((longlong)local_2a8 + 1);
        } while (local_2a8 < (longlong *)param_1[0x134]);
    }
    uVar25 = 0;
    if (param_1[0x140] != 0) {
        do {
            FUN_1406e51a0(param_1,*(undefined8 *)(param_1[0x13f] + uVar25 * 8));
            uVar25 = uVar25 + 1;
        } while (uVar25 < (ulonglong)param_1[0x140]);
    }
    lVar21 = FUN_1400cb3d0(param_1,&local_250);
    iVar24 = *(int *)(lVar21 + 0xc);
    iVar29 = *(int *)(lVar21 + 4);
    piVar17 = (int *)FUN_1400cb3d0(param_1,&local_240);
    local_2b0 = (longlong **)(param_1 + 0x1dd);
    local_2b8 = 0;
    local_2c0 = 0x100;
    local_2c8 = (undefined ***)CONCAT44(local_2c8._4_4_,1);
    local_2d0 = (undefined4 *)CONCAT44(local_2d0._4_4_,5);
    local_2d8 = local_2d8 & 0xffffffff00000000;
    iVar24 = (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,piVar17[2] - *piVar17,iVar24 - iVar29,1);
    if (iVar24 < 0) {
        local_268 = &PTR_LAB_140b5e648;
        local_260 = (undefined *)0x0;
        local_258 = (undefined *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_268);
        local_228 = local_268;
        local_220 = local_260;
        local_288 = &PTR_LAB_140b5e648;
        uStack640 = 0x40a42c90;
        uStack636 = 1;
        local_218 = local_258;
        pvVar18 = TlsGetValue(DAT_140c63720);
        fStack632 = SUB84(pvVar18,0);
        fStack628 = (float)((ulonglong)pvVar18 >> 0x20);
        TlsSetValue(DAT_140c63720,&local_288);
        local_288 = &PTR_LAB_140b5e640;
        local_208 = 0x40b5e640;
        uStack516 = 1;
        uStack512 = uStack640;
        uStack508 = uStack636;
        local_1f8 = fStack632;
        fStack500 = fStack628;
        uStack492 = uStack620;
        iStack624 = iVar24;
        iStack496 = iVar24;
        lVar21 = FUN_1400cb3d0(param_1,&local_250);
        iVar24 = *(int *)(lVar21 + 0xc);
        iVar29 = *(int *)(lVar21 + 4);
        piVar17 = (int *)FUN_1400cb3d0(param_1,&local_240);
        local_2a0 = (longlong *)0x141e39500;
        local_2c8 = &local_228;
        local_2d0 = &local_208;
        local_2d8 = local_2d8 & 0xffffffff00000000 | (ulonglong)(uint)(iVar24 - iVar29);
        iVar24 = FUN_1401971e0(&DAT_140c8b05c,0xd,&local_2a0,piVar17[2] - *piVar17);
        local_288._0_4_ = 5.684361;
        local_288._4_4_ = 1.401298e-45;
        TlsSetValue(DAT_140c63720,(LPVOID)CONCAT44(fStack628,fStack632));
        local_268 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_258);
        if (iVar24 != 0) {
            DebugBreak();
        }
    }
    pplVar16 = (longlong **)(param_1 + 0x1dc);
    local_2b8 = 0;
    local_2c0 = 0x100;
    local_2c8 = (undefined ***)((ulonglong)local_2c8 & 0xffffffff00000000);
    local_2d0 = (undefined4 *)CONCAT44(local_2d0._4_4_,1);
    local_2d8 = local_2d8 & 0xffffffff00000000;
    local_2b0 = pplVar16;
    iVar24 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,1,1,1);
    if (iVar24 < 0) {
        local_268 = &PTR_LAB_140b5e648;
        local_260 = (undefined *)0x0;
        local_258 = (undefined *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_268);
        local_228 = local_268;
        local_2a0 = (longlong *)0x141e39470;
        local_218 = local_258;
        local_220 = local_260;
        iVar24 = FUN_140197770(0xd,&local_2a0,&local_228);
        local_268 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_258);
        if (iVar24 != 0) {
            DebugBreak();
        }
    }
    iVar24 = (**(code **)(**pplVar16 + 0x30))();
    if ((iVar24 == 0) &&
        (puVar19 = (undefined4 *)(**(code **)(**pplVar16 + 0x48))(*pplVar16,0,&local_290,2),
                puVar19 != (undefined4 *)0x0)) {
        *puVar19 = 0;
        (**(code **)(**pplVar16 + 0x50))(*pplVar16,0);
    }
    local_2a0 = (longlong *)0x0;
    iVar24 = FUN_1402ec590();
    plVar28 = local_2a0;
    if (-1 < iVar24) {
        local_2a8 = (longlong **)0x0;
        iVar24 = (**(code **)(*local_2a0 + 0x28))
                (local_2a0,
                 L"Art\\Prop\\BackgroundUI\\Parallax\\PRP_Parallax_UI_Fractal_000.m3",
                 &local_2a8,0);
        if (-1 < iVar24) {
            if ((longlong *)param_1[0x1da] != plVar28) {
                (**(code **)*plVar28)(plVar28);
                if ((longlong *)param_1[0x1da] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)param_1[0x1da] + 8))();
                }
                param_1[0x1da] = plVar28;
            }
            if ((longlong **)param_1[0x1db] != local_2a8) {
                if (local_2a8 != (longlong **)0x0) {
                    (*(code *)**local_2a8)(local_2a8);
                }
                if ((longlong *)param_1[0x1db] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)param_1[0x1db] + 8))();
                }
                param_1[0x1db] = local_2a8;
            }
            local_288._0_4_ = 2.101948e-43;
            local_288._4_4_ = 0.0;
            uStack636 = 0;
            fStack632 = 0.0;
            fStack628 = 0.0;
            iStack624 = 0;
            uStack620 = 0;
            uStack640 = 0x3f800000;
            (**(code **)(*(longlong *)param_1[0x1db] + 0x248))((longlong *)param_1[0x1db],0,&local_288);
            (**(code **)(*(longlong *)param_1[0x1db] + 0x288))
                    ((longlong *)param_1[0x1db],&LAB_1406e3430,param_1);
            iVar24 = *DAT_140c63750;
            iVar29 = DAT_140c54160;
            if (iVar24 < DAT_140c54160) {
                iVar29 = iVar24;
            }
            local_268 = (undefined **)(&DAT_140c54170 + (longlong)iVar29 * 0x10);
            iVar29 = DAT_140c54220;
            if (iVar24 < DAT_140c54220) {
                iVar29 = iVar24;
            }
            local_260 = &DAT_140c54230 + (longlong)iVar29 * 0x10;
            iVar29 = DAT_140c540a0;
            if (iVar24 < DAT_140c540a0) {
                iVar29 = iVar24;
            }
            local_258 = &DAT_140c540b0 + (longlong)iVar29 * 0x10;
            piVar17 = DAT_140c63750;
            local_158 = local_268;
            local_150 = local_260;
            local_148 = local_258;
            FUN_1401aefa0(&local_158,&local_1e8);
            *(undefined4 *)(param_1 + 0x178) = (undefined4)local_1e8;
            *(undefined4 *)((longlong)param_1 + 0xbc4) = local_1e8._4_4_;
            *(uint *)(param_1 + 0x179) = uStack480;
            *(undefined4 *)((longlong)param_1 + 0xbcc) = uStack476;
            *(undefined4 *)(param_1 + 0x17a) = local_1d8._0_4_;
            *(undefined4 *)((longlong)param_1 + 0xbd4) = local_1d8._4_4_;
            *(undefined4 *)(param_1 + 0x17b) = uStack464;
            *(undefined4 *)((longlong)param_1 + 0xbdc) = uStack460;
            *(undefined4 *)(param_1 + 0x17c) = (undefined4)local_1c8;
            *(undefined4 *)(param_1 + 0x17e) = (undefined4)local_1b8;
            *(undefined4 *)((longlong)param_1 + 0xbf4) = local_1b8._4_4_;
            *(undefined4 *)(param_1 + 0x17f) = (undefined4)uStack432;
            *(undefined4 *)((longlong)param_1 + 0xbfc) = uStack432._4_4_;
            *(undefined4 *)(param_1 + 0x180) = (undefined4)local_1a8;
            *(undefined4 *)((longlong)param_1 + 0xc04) = local_1a8._4_4_;
            *(undefined4 *)(param_1 + 0x181) = uStack416;
            *(undefined4 *)((longlong)param_1 + 0xc0c) = uStack412;
            *(undefined4 *)(param_1 + 0x182) = local_198;
            *(undefined4 *)(param_1 + 0x184) = local_188;
            *(undefined4 *)((longlong)param_1 + 0xc24) = uStack388;
            *(undefined4 *)(param_1 + 0x185) = uStack384;
            *(undefined4 *)((longlong)param_1 + 0xc2c) = uStack380;
            *(undefined4 *)(param_1 + 0x186) = local_178;
            *(undefined4 *)((longlong)param_1 + 0xc34) = uStack372;
            *(undefined4 *)(param_1 + 0x187) = uStack368;
            *(undefined4 *)((longlong)param_1 + 0xc3c) = uStack364;
            *(undefined4 *)(param_1 + 0x188) = local_168;
            iVar24 = DAT_140c542e0;
            if (*piVar17 < DAT_140c542e0) {
                iVar24 = *piVar17;
            }
            lVar21 = (longlong)iVar24 * 0x10;
            uVar31 = *(undefined4 *)(lVar21 + 0x140c542f4);
            uVar32 = *(undefined4 *)(lVar21 + 0x140c542f8);
            uVar4 = *(undefined4 *)(lVar21 + 0x140c542fc);
            *(undefined4 *)(param_1 + 0x18a) = *(undefined4 *)(&DAT_140c542f0 + lVar21);
            *(undefined4 *)((longlong)param_1 + 0xc54) = uVar31;
            *(undefined4 *)(param_1 + 0x18b) = uVar32;
            *(undefined4 *)((longlong)param_1 + 0xc5c) = uVar4;
            iVar24 = DAT_140c543a0;
            if (*piVar17 < DAT_140c543a0) {
                iVar24 = *piVar17;
            }
            lVar21 = (longlong)iVar24 * 0x10;
            uVar31 = *(undefined4 *)(lVar21 + 0x140c543b4);
            uVar32 = *(undefined4 *)(lVar21 + 0x140c543b8);
            uVar4 = *(undefined4 *)(lVar21 + 0x140c543bc);
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(&DAT_140c543b0 + lVar21);
            *(undefined4 *)((longlong)param_1 + 0xc64) = uVar31;
            *(undefined4 *)(param_1 + 0x18d) = uVar32;
            *(undefined4 *)((longlong)param_1 + 0xc6c) = uVar4;
            iVar24 = DAT_140c54460;
            if (*piVar17 < DAT_140c54460) {
                iVar24 = *piVar17;
            }
            *(undefined4 *)(param_1 + 0x1ce) = *(undefined4 *)(&DAT_140c54470 + (longlong)iVar24 * 4);
            FUN_1408fe3d0();
            *(undefined (*) [16])(param_1 + 0x18e) =
                    ZEXT1216(CONCAT48(SUB164(_DAT_140b7a490 >> 0x20,0),
                                      SUB168(_DAT_140b7a490,0) & 0xffffffff | extraout_XMM0_Qa << 0x20));
        }
        if (local_2a8 != (longlong **)0x0) {
            (**(code **)((longlong)*local_2a8 + 8))();
        }
    }
    if (plVar28 != (longlong *)0x0) {
        (**(code **)(*plVar28 + 8))(plVar28);
    }
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack760);
    return;
}



undefined8 FUN_1406e1ab0(undefined8 param_1,ulonglong param_2)

{
    FUN_1406e1af0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1406e1af0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    int iVar9;

    uVar5 = 0;
    *param_1 = &PTR_LAB_140b720d0;
    iVar9 = 5;
    uVar8 = uVar5;
    if (param_1[0x134] != 0) {
        do {
            lVar2 = *(longlong *)(param_1[0x133] + uVar8 * 8);
            if (lVar2 != 0) {
                if (*(longlong **)(lVar2 + 0x250) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar2 + 0x250) + 8))();
                }
                if (*(longlong **)(lVar2 + 0x1f0) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar2 + 0x1f0) + 8))();
                    *(undefined8 *)(lVar2 + 0x1f0) = 0;
                }
                if (*(longlong *)(lVar2 + 0x208) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 0x208),0);
                }
                if (*(longlong *)(lVar2 + 0x180) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 0x180),0);
                }
                puVar7 = (undefined8 *)(lVar2 + 0x168);
                iVar4 = iVar9;
                do {
                    if ((longlong *)puVar7[-6] != (longlong *)0x0) {
                        (**(code **)(*(longlong *)puVar7[-6] + 8))();
                        puVar7[-6] = 0;
                    }
                    if (puVar7[-3] != 0) {
                        FUN_14018b900(puVar7[-3],0);
                    }
                    iVar4 = iVar4 + -1;
                    puVar7 = puVar7 + -6;
                } while (-1 < iVar4);
                FUN_14018b900(lVar2,0);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x134]);
    }
    uVar8 = uVar5;
    if (param_1[0x140] != 0) {
        do {
            lVar2 = *(longlong *)(param_1[0x13f] + uVar8 * 8);
            if (lVar2 != 0) {
                uVar6 = uVar5;
                if (*(longlong *)(lVar2 + 0x50) != 0) {
                    do {
                        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar6 * 8);
                        if (lVar3 != 0) {
                            FUN_14018b900(lVar3,0);
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(ulonglong *)(lVar2 + 0x50));
                }
                lVar3 = *(longlong *)(lVar2 + 0x48);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(lVar2,0);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x140]);
    }
    uVar8 = uVar5;
    if (param_1[0x142] != 0) {
        do {
            lVar2 = *(longlong *)(param_1[0x141] + uVar8 * 8);
            if (lVar2 != 0) {
                FUN_14018b900(lVar2,0);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x142]);
    }
    if ((longlong *)param_1[0x1df] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1df] + 8))();
    }
    if ((longlong *)param_1[0x1dd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1dd] + 8))();
    }
    if ((longlong *)param_1[0x1dc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1dc] + 8))();
    }
    if ((longlong *)param_1[0x1db] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1db] + 8))();
    }
    if ((longlong *)param_1[0x1da] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1da] + 8))();
    }
    if (param_1[0x15b] != 0) {
        FUN_14018b900(param_1[0x15b],0);
    }
    if (param_1[0x156] != 0) {
        FUN_14018b900(param_1[0x156],0);
    }
    lVar2 = param_1[0x14f];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0x14d];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0x14b];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    if ((longlong *)param_1[0x144] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x144] + 8))();
        param_1[0x144] = 0;
    }
    if (param_1[0x147] != 0) {
        FUN_14018b900(param_1[0x147],0);
    }
    lVar2 = param_1[0x141];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0x13f];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    uVar8 = uVar5;
    if (param_1[0x13b] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0x13c] + uVar8 * 8);
            lVar2 = *(longlong *)(param_1[0x13c] + uVar8 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *)(lVar2 + 8);
                FUN_14018b900(lVar2,0);
                lVar2 = *plVar1;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x13b]);
    }
    param_1[0x13a] = 0;
    FUN_14018b900(param_1[0x13c],0);
    param_1[0x13c] = 0;
    uVar8 = uVar5;
    if (param_1[0x136] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0x137] + uVar8 * 8);
            lVar2 = *(longlong *)(param_1[0x137] + uVar8 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *)(lVar2 + 8);
                FUN_14018b900(lVar2,0);
                lVar2 = *plVar1;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x136]);
    }
    param_1[0x135] = 0;
    FUN_14018b900(param_1[0x137],0);
    param_1[0x137] = 0;
    lVar2 = param_1[0x133];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    uVar8 = uVar5;
    if (param_1[0x12f] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0x130] + uVar8 * 8);
            lVar2 = *(longlong *)(param_1[0x130] + uVar8 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *)(lVar2 + 8);
                FUN_14018b900(lVar2,0);
                lVar2 = *plVar1;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0x12f]);
    }
    param_1[0x12e] = 0;
    FUN_14018b900(param_1[0x130],0);
    param_1[0x130] = 0;
    if (param_1[0x12a] != 0) {
        do {
            plVar1 = (longlong *)(param_1[299] + uVar5 * 8);
            lVar2 = *(longlong *)(param_1[299] + uVar5 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *)(lVar2 + 8);
                FUN_14018b900(lVar2,0);
                lVar2 = *plVar1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)param_1[0x12a]);
    }
    param_1[0x129] = 0;
    FUN_14018b900(param_1[299],0);
    param_1[299] = 0;
    iVar4 = 4;
    puVar7 = param_1 + 0x128;
    do {
        if ((longlong *)puVar7[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar7[-6] + 8))();
            puVar7[-6] = 0;
        }
        if (puVar7[-3] != 0) {
            FUN_14018b900(puVar7[-3],0);
        }
        iVar4 = iVar4 + -1;
        puVar7 = puVar7 + -6;
    } while (-1 < iVar4);
    puVar7 = param_1 + 0x10a;
    iVar4 = 0x13;
    do {
        lVar2 = puVar7[-1];
        puVar7 = puVar7 + -1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if ((longlong *)param_1[0xef] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xef] + 8))();
        param_1[0xef] = 0;
    }
    if (param_1[0xf2] != 0) {
        FUN_14018b900(param_1[0xf2],0);
    }
    if ((longlong *)param_1[0xe9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe9] + 8))();
        param_1[0xe9] = 0;
    }
    if (param_1[0xec] != 0) {
        FUN_14018b900(param_1[0xec],0);
    }
    if ((longlong *)param_1[0xe3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe3] + 8))();
        param_1[0xe3] = 0;
    }
    if (param_1[0xe6] != 0) {
        FUN_14018b900(param_1[0xe6],0);
    }
    if ((longlong *)param_1[0xdd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdd] + 8))();
        param_1[0xdd] = 0;
    }
    if (param_1[0xe0] != 0) {
        FUN_14018b900(param_1[0xe0],0);
    }
    if ((longlong *)param_1[0xd7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd7] + 8))();
        param_1[0xd7] = 0;
    }
    if (param_1[0xda] != 0) {
        FUN_14018b900(param_1[0xda],0);
    }
    puVar7 = param_1 + 0xd7;
    do {
        if ((longlong *)puVar7[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar7[-6] + 8))();
            puVar7[-6] = 0;
        }
        if (puVar7[-3] != 0) {
            FUN_14018b900(puVar7[-3],0);
        }
        iVar9 = iVar9 + -1;
        puVar7 = puVar7 + -6;
    } while (-1 < iVar9);
    if ((longlong *)param_1[0xad] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xad] + 8))();
        param_1[0xad] = 0;
    }
    if (param_1[0xb0] != 0) {
        FUN_14018b900(param_1[0xb0],0);
    }
    if ((longlong *)param_1[0xa7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xa7] + 8))();
        param_1[0xa7] = 0;
    }
    if (param_1[0xaa] != 0) {
        FUN_14018b900(param_1[0xaa],0);
    }
    if ((longlong *)param_1[0xa1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xa1] + 8))();
        param_1[0xa1] = 0;
    }
    if (param_1[0xa4] != 0) {
        FUN_14018b900(param_1[0xa4],0);
    }
    if ((longlong *)param_1[0x9b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x9b] + 8))();
        param_1[0x9b] = 0;
    }
    if (param_1[0x9e] != 0) {
        FUN_14018b900(param_1[0x9e],0);
    }
    if ((longlong *)param_1[0x95] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x95] + 8))();
        param_1[0x95] = 0;
    }
    if (param_1[0x98] != 0) {
        FUN_14018b900(param_1[0x98],0);
    }
    if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x8f] + 8))();
        param_1[0x8f] = 0;
    }
    if (param_1[0x92] != 0) {
        FUN_14018b900(param_1[0x92],0);
    }
    FUN_1400c6030(param_1);
    return;
}



void FUN_1406e2210(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    undefined local_res8 [32];

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x48))
                (*(longlong **)(param_1 + 0xee0),0,local_res8,2);
        if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x50))(*(longlong **)(param_1 + 0xee0),0);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406e2270(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    longlong *local_res8;
    undefined8 local_res10;
    undefined8 in_stack_ffffffffffffff30;
    undefined4 uVar7;
    undefined8 in_stack_ffffffffffffff38;
    undefined4 uVar8;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 uStack96;
    undefined8 local_58;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if ((*(byte *)(param_1 + 0x1d) & 0x80) == 0) {
        puVar3 = (undefined4 *)FUN_1400cb0e0(param_1,&local_a8,param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x18c) = *puVar3;
        *(undefined4 *)(param_1 + 400) = puVar3[1];
        *(undefined4 *)(param_1 + 0x194) = puVar3[2];
        *(undefined4 *)(param_1 + 0x198) = puVar3[3];
        *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 0x80;
        lVar4 = param_1;
        do {
            if (*(int *)(lVar4 + 0x188) == 0) break;
            *(undefined4 *)(lVar4 + 0x188) = 0;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        } while (lVar4 != 0);
    }
    iVar2 = *(int *)(param_1 + 400);
    iVar6 = *(int *)(param_1 + 0x198);
    if (*(longlong **)(param_1 + 0xee8) != (longlong *)0x0) {
        iVar5 = *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x18c);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0xee8) + 0x18))();
        if ((*(int *)(lVar4 + 4) == iVar5) &&
            (lVar4 = (**(code **)(**(longlong **)(param_1 + 0xee8) + 0x18))(),
                    *(int *)(lVar4 + 8) == iVar6 - iVar2)) {
            return 0;
        }
        local_res8 = (longlong *)0x0;
        iVar6 = iVar6 - iVar2;
        iVar2 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,iVar5,iVar6,1,0,CONCAT44(uVar7,5),CONCAT44(uVar8,1),0x100,0,
                 &local_res8);
        if (iVar2 < 0) {
            local_a8 = &PTR_LAB_140b5e648;
            local_a0 = 0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_88 = local_a8;
            local_80 = local_a0;
            local_68 = &PTR_LAB_140b5e648;
            uStack96 = L"Result";
            local_78 = local_98;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_68 = &PTR_LAB_140b5e640;
            local_38 = (undefined4)local_58;
            uStack52 = local_58._4_4_;
            uStack44 = uStack76;
            local_res10 = 0x141e39370;
            local_48 = 0x40b5e640;
            uStack68 = 1;
            uStack64 = (undefined4)uStack96;
            uStack60 = uStack96._4_4_;
            iStack80 = iVar2;
            iStack48 = iVar2;
            iVar2 = FUN_1401971e0(&DAT_140c8b058,0xd,&local_res10,iVar5,iVar6,&local_48,&local_88);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_98);
            if (iVar2 != 0) {
                DebugBreak();
            }
        }
        if (*(longlong **)(param_1 + 0xee8) != local_res8) {
            if (local_res8 != (longlong *)0x0) {
                (**(code **)*local_res8)();
            }
            plVar1 = *(longlong **)(param_1 + 0xee8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            *(longlong **)(param_1 + 0xee8) = local_res8;
        }
        if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 8))();
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406e2eb0(longlong param_1)

{
    float *pfVar1;
    undefined4 uVar2;
    longlong *plVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    undefined extraout_XMM0 [16];
    undefined auVar9 [16];
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    undefined auStack248 [32];
    undefined8 local_d8;
    undefined8 local_d0;
    undefined8 local_c8;
    longlong local_c0;
    undefined8 local_b8;
    undefined4 local_b0;
    undefined4 local_a8;
    undefined local_98 [20];
    undefined4 local_84;
    float *local_78 [10];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    plVar3 = *(longlong **)(param_1 + 0xee8);
    if (plVar3 != (longlong *)0x0) {
        local_98._0_16_ = local_98._0_16_ & (undefined  [16])0xffffffff00000000;
        iVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,local_98);
        if ((iVar5 != 0) && (plVar3 = *(longlong **)(param_1 + 0xed8), plVar3 != (longlong *)0x0)) {
            local_98._0_16_ = local_98._0_16_ & (undefined  [16])0xffffffff00000000;
            iVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,local_98,1);
            if (iVar5 != 0) {
                iVar5 = (**(code **)(**(longlong **)(param_1 + 0xed8) + 0x420))();
                if (iVar5 != 0) {
                    plVar3 = *(longlong **)(param_1 + 0xee8);
                    (**(code **)(*plVar3 + 0x18))(plVar3);
                    (**(code **)(*plVar3 + 0x18))();
                    local_d8 = (undefined *)(param_1 + 0xbb0);
                    local_c0 = param_1 + 0xb70;
                    pfVar1 = (float *)(param_1 + 0xaf0);
                    local_d0 = pfVar1;
                    local_c8 = param_1 + 0xb30;
                    iVar5 = (**(code **)(**(longlong **)(param_1 + 0xed8) + 0x428))
                            (*(longlong **)(param_1 + 0xed8),5);
                    piVar4 = DAT_140c63750;
                    if (-1 < iVar5) {
                        iVar5 = *DAT_140c63750;
                        iVar6 = DAT_140c545b0;
                        if (iVar5 < DAT_140c545b0) {
                            iVar6 = iVar5;
                        }
                        fVar12 = fRam0000000140c77884 * *(float *)(param_1 + 0xb00) + _DAT_140c77880 * *pfVar1 +
                                 fRam0000000140c77888 * *(float *)(param_1 + 0xb10) +
                                 *(float *)(param_1 + 0xb20);
                        fVar13 = fRam0000000140c77884 * *(float *)(param_1 + 0xb04) +
                                 _DAT_140c77880 * *(float *)(param_1 + 0xaf4) +
                                 fRam0000000140c77888 * *(float *)(param_1 + 0xb14) +
                                 *(float *)(param_1 + 0xb24);
                        fVar14 = fRam0000000140c77884 * *(float *)(param_1 + 0xb08) +
                                 _DAT_140c77880 * *(float *)(param_1 + 0xaf8) +
                                 fRam0000000140c77888 * *(float *)(param_1 + 0xb18) +
                                 *(float *)(param_1 + 0xb28);
                        fVar15 = fRam0000000140c77884 * *(float *)(param_1 + 0xb0c) +
                                 _DAT_140c77880 * *(float *)(param_1 + 0xafc) +
                                 fRam0000000140c77888 * *(float *)(param_1 + 0xb1c) +
                                 *(float *)(param_1 + 0xb2c);
                        fVar10 = fVar13 * fVar13;
                        fVar11 = fVar12 * fVar12 + fVar10 + fVar14 * fVar14;
                        auVar9 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))),
                                         CONCAT412(fVar15 * fVar15,
                                                   CONCAT48(fVar14 * fVar14,CONCAT44(fVar10,fVar11))));
                        fVar10 = SUB164(auVar9,0);
                        iVar7 = DAT_140c53be0;
                        if (iVar5 < DAT_140c53be0) {
                            iVar7 = iVar5;
                        }
                        fVar10 = (3.0 - fVar11 * fVar10 * fVar10) * 0.5 * fVar10;
                        if (fVar10 <= 0.0) {
                            fVar10 = 0.0;
                        }
                        iVar8 = DAT_140c54520;
                        if (iVar5 < DAT_140c54520) {
                            iVar8 = iVar5;
                        }
                        fVar11 = SQRT(*(float *)(param_1 + 0xb20) * *(float *)(param_1 + 0xb20) +
                                      *(float *)(param_1 + 0xb24) * *(float *)(param_1 + 0xb24) +
                                      *(float *)(param_1 + 0xb28) * *(float *)(param_1 + 0xb28)) *
                                 ((*(float *)(param_1 + 0x470) /
                                   *(float *)(&DAT_140c53bf0 + (longlong)iVar7 * 4)) *
                                  (*(float *)(&DAT_140c54530 + (longlong)iVar8 * 4) -
                                   *(float *)(&DAT_140c545c0 + (longlong)iVar6 * 4)) +
                                  *(float *)(&DAT_140c545c0 + (longlong)iVar6 * 4));
                        *(float *)(param_1 + 0xb20) = fVar11 * fVar10 * fVar12;
                        *(float *)(param_1 + 0xb24) = fVar11 * fVar10 * fVar13;
                        *(float *)(param_1 + 0xb28) = fVar11 * fVar10 * fVar14;
                        fVar10 = *(float *)(param_1 + 0x450) -
                                 (float)(*(int *)(param_1 + 0x2d4) + *(int *)(param_1 + 0x2cc) >> 1);
                        iVar5 = DAT_140c544c0;
                        if (*piVar4 < DAT_140c544c0) {
                            iVar5 = *piVar4;
                        }
                        uVar2 = *(undefined4 *)(&DAT_140c544d0 + (longlong)iVar5 * 4);
                        auVar9 = divps(CONCAT412(fVar10 * fRam0000000140c7786c,
                                                 CONCAT48(fVar10 * fRam0000000140c77868,
                                                          CONCAT44(fVar10 * fRam0000000140c77864,
                                                                   fVar10 * _DAT_140c77860))),
                                       CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))));
                        fVar12 = *(float *)(param_1 + 0xb20) - SUB164(auVar9,0);
                        *(float *)(param_1 + 0xb20) = fVar12;
                        fVar11 = *(float *)(param_1 + 0xb24) - SUB164(auVar9 >> 0x20,0);
                        fVar10 = *(float *)(param_1 + 0xb28) - SUB164(auVar9 >> 0x40,0);
                        *(float *)(param_1 + 0xb24) = fVar11;
                        *(float *)(param_1 + 0xb28) = fVar10;
                        iVar5 = DAT_140c544c0;
                        if (*piVar4 < DAT_140c544c0) {
                            iVar5 = *piVar4;
                        }
                        fVar13 = *(float *)(param_1 + 0x454) -
                                 (float)(*(int *)(param_1 + 0x2d8) + *(int *)(param_1 + 0x2d0) >> 1);
                        uVar2 = *(undefined4 *)(&DAT_140c544d0 + (longlong)iVar5 * 4);
                        auVar9 = divps(CONCAT412(fVar13 * fRam0000000140c7787c,
                                                 CONCAT48(fVar13 * fRam0000000140c77878,
                                                          CONCAT44(fVar13 * fRam0000000140c77874,
                                                                   fVar13 * _DAT_140c77870))),
                                       CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))));
                        *(float *)(param_1 + 0xb20) = fVar12 + SUB164(auVar9,0);
                        *(float *)(param_1 + 0xb28) = fVar10 + SUB164(auVar9 >> 0x40,0);
                        *(float *)(param_1 + 0xb24) = fVar11 + SUB164(auVar9 >> 0x20,0);
                        local_78[0] = pfVar1;
                        FUN_1401afc20(local_78,param_1 + 0xb30);
                    }
                }
                (**(code **)(**(longlong **)(param_1 + 0xed0) + 0x30))
                        (*(longlong **)(param_1 + 0xed0),DAT_140c636a8,0);
                (**(code **)(**(longlong **)(param_1 + 0xed8) + 0x128))(*(longlong **)(param_1 + 0xed8),1);
                (**(code **)(**(longlong **)(param_1 + 0xed8) + 0x140))(*(longlong **)(param_1 + 0xed8),1);
                local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffff00000000);
                (**(code **)(**(longlong **)(param_1 + 0xed0) + 0x50))
                        (*(longlong **)(param_1 + 0xed0),param_1 + 0xaf0,param_1 + 0xb30,param_1 + 0xbb0);
                (**(code **)(*DAT_140c65670 + 0x1f8))();
                (**(code **)(*DAT_140c65670 + 0x200))();
                (**(code **)(*DAT_140c65670 + 0x120))();
                local_98._0_16_ = CONCAT88(*(undefined8 *)(param_1 + 0xee8),local_98._0_8_);
                local_98._0_16_ = CONCAT124(local_98._4_12_,1);
                local_84 = 0;
                local_d8 = &DAT_140c3fe88;
                (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_98,&DAT_140c3fe88,&DAT_140c3fe88);
                (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
                local_b0 = 0x3f800000;
                local_98._0_16_ = extraout_XMM0 & (undefined  [16])0x0;
                local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffff00000000);
                (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_98);
                local_c0 = *(longlong *)(param_1 + 0xee0);
                local_a8 = 0;
                local_b8 = 0;
                local_c8 = CONCAT44(local_c8._4_4_,0xffffffff);
                local_d0 = (float *)CONCAT44(local_d0._4_4_,3);
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,2);
                (**(code **)(**(longlong **)(param_1 + 0xed0) + 0x80))
                        (*(longlong **)(param_1 + 0xed0),param_1 + 0xb70,param_1 + 0xbb0,param_1 + 0xbc0);
                (**(code **)(*DAT_140c65670 + 0x2a0))();
                (**(code **)(*DAT_140c65670 + 0x228))();
                (**(code **)(*DAT_140c65670 + 0x220))();
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack248);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406e3490(longlong param_1)

{
    byte bVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong **pplVar4;
    int iVar5;
    undefined auVar6 [16];
    int iVar7;
    int iVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    undefined *puVar13;
    longlong lVar14;
    ulonglong uVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    float fVar23;
    uint uVar24;
    float fVar25;
    float fVar26;
    undefined auStack520 [32];
    undefined *local_1e8;
    undefined4 local_1e0;
    undefined *local_1d8;
    undefined4 local_1d0;
    undefined local_1c8 [4];
    undefined auStack452 [12];
    undefined local_1b8 [4];
    undefined auStack436 [4];
    undefined8 uStack432;
    undefined local_1a8 [4];
    undefined auStack420 [4];
    undefined8 uStack416;
    undefined local_198 [4];
    undefined auStack404 [4];
    undefined8 uStack400;
    undefined local_188 [16];
    undefined local_178 [16];
    float local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined local_158 [16];
    undefined local_148 [16];
    undefined local_138 [16];
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined local_c8 [8];
    undefined8 uStack192;
    undefined local_b8 [8];
    undefined8 uStack176;
    undefined local_a8 [8];
    undefined8 uStack160;
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack520;
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0xee8) + 0x30))();
    uVar15 = 0;
    if (iVar7 != 0) {
        plVar2 = *(longlong **)(param_1 + 0xee8);
        _local_198 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x2d8),
                                      (float)(int)*(undefined8 *)(param_1 + 0x2d4)));
        _local_1a8 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x2d0),
                                      (float)(int)*(undefined8 *)(param_1 + 0x2cc)));
        lVar9 = (**(code **)(*plVar2 + 0x18))(plVar2);
        iVar7 = *(int *)(lVar9 + 8);
        lVar9 = (**(code **)(*plVar2 + 0x18))(plVar2);
        local_1e8 = local_188;
        local_1e0 = 1;
        _local_1c8 = ZEXT416(0);
        _local_1b8 = ZEXT816(CONCAT44((float)iVar7,(float)*(int *)(lVar9 + 4)));
        local_188._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
        local_188 = CONCAT412(0x3f800000,local_188._0_12_);
        (**(code **)(*DAT_140c65680 + 0xf0))(DAT_140c65680,*(undefined8 *)(param_1 + 0xee8));
    }
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
    (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,param_1 + 0x410);
    uVar12 = *(ulonglong *)(param_1 + 0xa10);
    fVar26 = 0.5;
    if (uVar12 != 0) {
        uVar19 = 0x3f800000;
        uVar20 = 0x3f800000;
        uVar21 = 0x3f800000;
        uVar22 = 0x3f800000;
        uVar24 = 0x7fffffff;
        fVar23 = 1.0;
        fVar25 = -0.5;
        uVar11 = uVar15;
        do {
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
            auVar6 = _local_198;
            _local_1a8 = CONCAT124(_auStack420,0x3f800000);
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa08) + uVar11 * 8);
            _local_1a8 = _local_1a8 & (undefined  [16])0xffffffffffffffff;
            local_118 = *(undefined4 *)(plVar2 + 2);
            _local_198 = CONCAT124(_auStack404,local_118);
            lVar9 = *plVar2 + 0x10;
            _local_198 = CONCAT88(lVar9,_local_198);
            local_128 = local_1a8;
            uStack292 = auStack420;
            uStack288 = (undefined4)uStack416;
            uStack284 = uStack416._4_4_;
            auStack404 = SUB164(auVar6,4);
            uStack400._0_4_ = (undefined4)lVar9;
            uStack400._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
            uStack276 = auStack404;
            uStack272 = (undefined4)uStack400;
            uStack268 = uStack400._4_4_;
            FUN_1401b0840(&local_128,local_c8);
            (**(code **)(*DAT_140c65680 + 0x58))();
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa08) + uVar11 * 8);
            lVar9 = plVar2[1];
            lVar14 = *plVar2;
            fVar16 = *(float *)(lVar14 + 0x10) - *(float *)(lVar9 + 0x10);
            fVar17 = *(float *)(lVar14 + 0x14) - *(float *)(lVar9 + 0x14);
            iVar7 = DAT_140c53ca0;
            if (*DAT_140c63750 < DAT_140c53ca0) {
                iVar7 = *DAT_140c63750;
            }
            _local_1c8 = ZEXT1216(ZEXT412((uint)(*(float *)(&DAT_140c53cb0 + (longlong)iVar7 * 4) * fVar25
            )) & (undefined  [12])0xffffffff) << 0x20;
            _local_1b8 = CONCAT44(*(float *)(&DAT_140c53cb0 + (longlong)iVar7 * 4) * fVar26,
                                  (uint)SQRT(fVar16 * fVar16 + fVar17 * fVar17) & uVar24);
            if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa08) + uVar11 * 8) + 0x18) == 0) {
                local_158 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                if (*(longlong *)(param_1 + 0x538) != 0) {
                    local_1e8 = (undefined *)
                            ((ulonglong)local_1e8 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_1 + 0x540)) *
                                            *(float *)(param_1 + 0x544)));
                    FUN_140103e60(*(longlong *)(param_1 + 0x538),local_1c8);
                }
                if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa08) + uVar11 * 8) + 0x24) != 0) {
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
                    (**(code **)(*DAT_140c65680 + 0x40))();
                    iVar7 = *DAT_140c63750;
                    local_178 = _local_1c8;
                    local_168 = local_1b8;
                    uStack356 = auStack436;
                    uStack352 = (undefined4)uStack432;
                    uStack348 = uStack432._4_4_;
                    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa08) + uVar11 * 8);
                    iVar8 = DAT_140c53d00;
                    if (iVar7 < DAT_140c53d00) {
                        iVar8 = iVar7;
                    }
                    iVar5 = DAT_140c53d00;
                    if (iVar7 < DAT_140c53d00) {
                        iVar5 = iVar7;
                    }
                    iVar7 = *(int *)(lVar9 + 0x1c);
                    fVar16 = ((float)(ulonglong)*(uint *)(&DAT_140c53d10 + (longlong)iVar8 * 4) -
                              (float)(ulonglong)(uint)(*(int *)(lVar9 + 0x24) - DAT_140c636a8)) /
                             (float)(ulonglong)*(uint *)(&DAT_140c53d10 + (longlong)iVar5 * 4);
                    if (iVar7 == 0) {
                        local_168 = local_1b8 * fVar16;
                    }
                    else if (iVar7 == 1) {
                        local_178 = CONCAT124(SUB1612(_local_1c8 >> 0x20,0),(fVar23 - fVar16) * local_1b8);
                    }
                    (**(code **)(*DAT_140c65680 + 0x68))(DAT_140c65680,local_178);
                    local_148 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                    if (*(longlong *)(param_1 + 0x568) != 0) {
                        local_1e8 = (undefined *)
                                ((ulonglong)local_1e8 & 0xffffffff00000000 |
                                 (ulonglong)
                                         (uint)((DAT_140c63664 - *(float *)(param_1 + 0x570)) *
                                                *(float *)(param_1 + 0x574)));
                        FUN_140103e60(*(longlong *)(param_1 + 0x568),local_1c8);
                    }
                    (**(code **)(*DAT_140c65680 + 0x48))();
                }
            }
            else {
                local_188 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                if (*(longlong *)(param_1 + 0x568) != 0) {
                    local_1e8 = (undefined *)
                            ((ulonglong)local_1e8 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_1 + 0x570)) *
                                            *(float *)(param_1 + 0x574)));
                    FUN_140103e60(*(longlong *)(param_1 + 0x568),local_1c8);
                }
            }
            (**(code **)(*DAT_140c65680 + 0x48))();
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
    }
    (**(code **)(*DAT_140c65680 + 0x90))();
    uVar12 = *(ulonglong *)(param_1 + 0xa00);
    if (uVar12 != 0) {
        fVar23 = 166.2769;
        fVar25 = 3.0;
        do {
            uVar11 = 0;
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x9f8) + uVar15 * 8);
            fVar16 = *(float *)(lVar9 + 0x14);
            fVar17 = *(float *)(lVar9 + 0x10);
            _local_198 = CONCAT124(CONCAT84(uStack400,fVar16 + fVar23),DAT_140c4b068 * fVar25 + fVar17);
            _local_1a8 = CONCAT124(CONCAT84(uStack416,fVar16 - fVar23),fVar17 - DAT_140c4b068 * fVar25) &
                         (undefined  [16])0xffffffffffffffff;
            iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x9f8) + uVar15 * 8) + 0x40);
            if (iVar7 == 0) {
                local_188._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
                local_188 = CONCAT412(0x3f800000,local_188._0_12_);
                if (*(longlong *)(param_1 + 0x478) != 0) {
                    fVar16 = (DAT_140c63664 - *(float *)(param_1 + 0x480)) * *(float *)(param_1 + 0x484);
                    LAB_1406e3a97:
                    local_1e8 = (undefined *)
                            ((ulonglong)local_1e8 & 0xffffffff00000000 | (ulonglong)(uint)fVar16);
                    FUN_140103e60();
                }
            }
            else if (iVar7 == 1) {
                local_158 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
                if (*(longlong *)(param_1 + 0x4a8) != 0) {
                    fVar16 = (DAT_140c63664 - *(float *)(param_1 + 0x4b0)) * *(float *)(param_1 + 0x4b4);
                    goto LAB_1406e3a97;
                }
            }
            else if (iVar7 == 2) {
                local_148 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
                if (*(longlong *)(param_1 + 0x4d8) != 0) {
                    fVar16 = (DAT_140c63664 - *(float *)(param_1 + 0x4e0)) * *(float *)(param_1 + 0x4e4);
                    goto LAB_1406e3a97;
                }
            }
            if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x9f8) + uVar15 * 8) + 0x40) != 2) {
                (**(code **)(*DAT_140c65680 + 0x90))();
                uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x9f8) + uVar15 * 8) + 0x50);
                if (uVar3 != 0) {
                    do {
                        plVar2 = *(longlong **)
                                (*(longlong *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x9f8) + uVar15 * 8) + 0x48) +
                                 uVar11 * 8);
                        (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                        uVar24 = *(uint *)((longlong)plVar2 + 0x14);
                        lVar9 = (longlong)(int)uVar24;
                        if (5 < uVar24) goto LAB_1406e3c31;
                        switch(uVar24) {
                            case 0:
                                uVar19 = *(undefined4 *)(*plVar2 + 0x10);
                                uVar20 = *(undefined4 *)(*plVar2 + 0x24);
                                goto LAB_1406e3c11;
                            case 1:
                                uVar19 = *(undefined4 *)(*plVar2 + 0x10);
                                uVar20 = *(undefined4 *)(*plVar2 + 0x14);
                            LAB_1406e3c11:
                                lVar14 = plVar2[1];
                                _local_1c8 = CONCAT44(uVar20,uVar19);
                                uVar19 = *(undefined4 *)(lVar14 + 0x30);
                            LAB_1406e3c20:
                                _local_1b8 = CONCAT124(_auStack436,uVar19);
                                uVar19 = *(undefined4 *)(lVar14 + 0x14);
                                break;
                            case 2:
                                _local_1c8 = CONCAT44(*(undefined4 *)(plVar2[1] + 0x14),
                                                      *(undefined4 *)(*plVar2 + 0x10));
                                _local_1b8 = CONCAT124(_auStack436,*(undefined4 *)(plVar2[1] + 0x30));
                                uVar19 = *(undefined4 *)(*plVar2 + 0x34);
                                break;
                            case 3:
                                _local_1c8 = CONCAT44(*(undefined4 *)(*plVar2 + 0x14),*(undefined4 *)(*plVar2 + 0x20))
                                        ;
                                _local_1b8 = CONCAT124(_auStack436,*(undefined4 *)(plVar2[1] + 0x10));
                                uVar19 = *(undefined4 *)(plVar2[1] + 0x34);
                                break;
                            case 4:
                                lVar14 = plVar2[1];
                                _local_1c8 = CONCAT44(*(undefined4 *)(*plVar2 + 0x14),*(undefined4 *)(*plVar2 + 0x20))
                                        ;
                                uVar19 = *(undefined4 *)(lVar14 + 0x10);
                                goto LAB_1406e3c20;
                            case 5:
                                _local_1c8 = CONCAT44(*(undefined4 *)(plVar2[1] + 0x24),
                                                      *(undefined4 *)(*plVar2 + 0x20));
                                _local_1b8 = CONCAT124(_auStack436,*(undefined4 *)(plVar2[1] + 0x10));
                                uVar19 = *(undefined4 *)(*plVar2 + 0x14);
                        }
                        _local_1b8 = CONCAT44(uVar19,local_1b8);
                        LAB_1406e3c31:
                        if (*(int *)(plVar2 + 3) != 0) {
                            local_138 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
                            if (*(longlong *)(param_1 + 0x598 + lVar9 * 0x30) != 0) {
                                local_1e8 = (undefined *)
                                        ((ulonglong)local_1e8 & 0xffffffff00000000 |
                                         (ulonglong)
                                                 (uint)((DAT_140c63664 - *(float *)(param_1 + 0x5a0 + lVar9 * 0x30)) *
                                                        *(float *)(param_1 + 0x5a4 + lVar9 * 0x30)));
                                FUN_140103e60();
                            }
                            goto LAB_1406e4066;
                        }
                        if (*(int *)((longlong)plVar2 + 0x24) == 0) goto LAB_1406e4066;
                        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
                        (**(code **)(*DAT_140c65680 + 0x40))();
                        auVar6 = _local_a8;
                        iVar7 = *DAT_140c63750;
                        iVar8 = DAT_140c53d00;
                        if (iVar7 < DAT_140c53d00) {
                            iVar8 = iVar7;
                        }
                        iVar5 = DAT_140c53d00;
                        if (iVar7 < DAT_140c53d00) {
                            iVar5 = iVar7;
                        }
                        fVar16 = ((float)(ulonglong)*(uint *)(&DAT_140c53d10 + (longlong)iVar8 * 4) -
                                  (float)(ulonglong)(uint)(*(int *)((longlong)plVar2 + 0x24) - DAT_140c636a8)) /
                                 (float)(ulonglong)*(uint *)(&DAT_140c53d10 + (longlong)iVar5 * 4);
                        if (5 < *(uint *)((longlong)plVar2 + 0x14)) goto LAB_1406e3fee;
                        local_c8 = SUB168(_local_1c8,0);
                        local_a8 = SUB168(_local_1b8,0);
                        local_b8 = local_a8;
                        switch(*(uint *)((longlong)plVar2 + 0x14)) {
                            case 0:
                                _local_c8 = CONCAT124(CONCAT84(uStack192,auStack452._0_4_),local_1c8);
                                local_b8 = CONCAT44(auStack436,local_1c8);
                                goto LAB_1406e3fac;
                            case 1:
                                _local_a8 = CONCAT88(uStack160,CONCAT44(auStack452._0_4_ - 55.42562,local_1b8));
                                local_c8 = CONCAT44((auStack436 + auStack452._0_4_) * 0.5,local_1c8);
                                local_b8 = CONCAT44(auStack436 + 55.42562,local_1b8);
                                if (*(int *)((longlong)plVar2 + 0x1c) == 0) {
                                    LAB_1406e3efd:
                                    _local_b8 = CONCAT412((uStack176._4_4_ - uStack160._4_4_) * fVar16 + uStack160._4_4_
                                            ,CONCAT48(((float)uStack176 - (float)uStack160) * fVar16 +
                                                      (float)uStack160,
                                                      CONCAT44((local_b8._4_4_ - local_a8._4_4_) * fVar16
                                                               + local_a8._4_4_,
                                                               (local_b8._0_4_ - local_a8._0_4_) * fVar16
                                                               + local_a8._0_4_)));
                                }
                                else if (*(int *)((longlong)plVar2 + 0x1c) == 1) goto LAB_1406e3db0;
                                break;
                            case 2:
                                local_b8 = CONCAT44(auStack436,local_1c8);
                                local_a8 = CONCAT44(auStack452._0_4_,local_1b8);
                                if (*(int *)((longlong)plVar2 + 0x1c) == 0) {
                                    LAB_1406e3db0:
                                    _local_a8 = CONCAT412((uStack160._4_4_ - uStack176._4_4_) * fVar16 + uStack176._4_4_
                                            ,CONCAT48(((float)uStack160 - (float)uStack176) * fVar16 +
                                                      (float)uStack176,
                                                      CONCAT44((local_a8._4_4_ - local_b8._4_4_) * fVar16
                                                               + local_b8._4_4_,
                                                               (local_a8._0_4_ - local_b8._0_4_) * fVar16
                                                               + local_b8._0_4_)));
                                }
                                else if (*(int *)((longlong)plVar2 + 0x1c) == 1) goto LAB_1406e3efd;
                                break;
                            case 3:
                                iVar7 = *(int *)((longlong)plVar2 + 0x1c);
                                _local_b8 = CONCAT124(CONCAT84(uStack176,auStack436),local_1b8);
                                local_a8 = CONCAT44(auStack452._0_4_,local_1b8);
                                if (iVar7 == 0) {
                                    _local_b8 = CONCAT412((uStack176._4_4_ - uStack192._4_4_) * fVar16 + uStack192._4_4_
                                            ,CONCAT48(((float)uStack176 - (float)uStack192) * fVar16 +
                                                      (float)uStack192,
                                                      CONCAT44((auStack436 - auStack452._0_4_) * fVar16 +
                                                               auStack452._0_4_,
                                                               (local_1b8 - local_1c8) * fVar16 +
                                                               local_1c8)));
                                }
                                else {
                                    LAB_1406e3e4d:
                                    if (iVar7 == 1) {
                                        _local_c8 = CONCAT412((uStack192._4_4_ - uStack176._4_4_) * fVar16 +
                                                              uStack176._4_4_,
                                                              CONCAT48(((float)uStack192 - (float)uStack176) * fVar16 +
                                                                       (float)uStack176,
                                                                       CONCAT44((local_c8._4_4_ - local_b8._4_4_) * fVar16
                                                                                + local_b8._4_4_,
                                                                                (local_c8._0_4_ - local_b8._0_4_) * fVar16
                                                                                + local_b8._0_4_)));
                                    }
                                }
                                break;
                            case 4:
                                iVar7 = *(int *)((longlong)plVar2 + 0x1c);
                                fVar17 = auStack452._0_4_ - 55.42562;
                                local_c8 = CONCAT44(fVar17,local_1c8);
                                local_b8 = CONCAT44(auStack436 + 55.42562,local_1c8);
                                _local_a8 = CONCAT124(CONCAT84(uStack160,(auStack436 + auStack452._0_4_) * 0.5),
                                                      local_1b8);
                                if (iVar7 != 0) goto LAB_1406e3e4d;
                                _local_b8 = CONCAT412((uStack176._4_4_ - uStack192._4_4_) * fVar16 + uStack192._4_4_,
                                                      CONCAT48(((float)uStack176 - (float)uStack192) * fVar16 +
                                                               (float)uStack192,
                                                               CONCAT44(((auStack436 + 55.42562) - fVar17) * fVar16 +
                                                                        fVar17,(local_1c8 - local_1c8) * fVar16 +
                                                                               local_1c8)));
                                break;
                            case 5:
                                local_c8 = CONCAT44(auStack436,local_1c8);
                                local_a8 = CONCAT44(auStack452._0_4_,local_1b8);
                            LAB_1406e3fac:
                                local_a8._4_4_ = (float)((ulonglong)local_a8 >> 0x20);
                                uStack160._0_4_ = SUB164(auVar6,8);
                                uStack160._4_4_ = SUB164(auVar6,0xc);
                                if (*(int *)((longlong)plVar2 + 0x1c) == 0) {
                                    _local_a8 = CONCAT412((uStack160._4_4_ - uStack192._4_4_) * fVar16 + uStack192._4_4_
                                            ,CONCAT48(((float)uStack160 - (float)uStack192) * fVar16 +
                                                      (float)uStack192,
                                                      CONCAT44((local_a8._4_4_ - local_c8._4_4_) * fVar16
                                                               + local_c8._4_4_,
                                                               (local_a8._0_4_ - local_c8._0_4_) * fVar16
                                                               + local_c8._0_4_)));
                                }
                                else if (*(int *)((longlong)plVar2 + 0x1c) == 1) {
                                    _local_c8 = CONCAT412((uStack192._4_4_ - uStack160._4_4_) * fVar16 + uStack160._4_4_
                                            ,CONCAT48(((float)uStack192 - (float)uStack160) * fVar16 +
                                                      (float)uStack160,
                                                      CONCAT44((local_c8._4_4_ - local_a8._4_4_) * fVar16
                                                               + local_a8._4_4_,
                                                               (local_c8._0_4_ - local_a8._0_4_) * fVar16
                                                               + local_a8._0_4_)));
                                }
                        }
                        LAB_1406e3fee:
                        (**(code **)(*DAT_140c65680 + 0x78))(DAT_140c65680,local_c8);
                        lVar9 = (longlong)*(int *)((longlong)plVar2 + 0x14);
                        local_178 = CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000));
                        if (*(longlong *)(param_1 + 0x598 + lVar9 * 0x30) != 0) {
                            local_1e8 = (undefined *)
                                    ((ulonglong)local_1e8 & 0xffffffff00000000 |
                                     (ulonglong)
                                             (uint)((DAT_140c63664 - *(float *)(param_1 + 0x5a0 + lVar9 * 0x30)) *
                                                    *(float *)(param_1 + 0x5a4 + lVar9 * 0x30)));
                            FUN_140103e60();
                        }
                        (**(code **)(*DAT_140c65680 + 0x48))();
                        LAB_1406e4066:
                        (**(code **)(*DAT_140c65680 + 0x48))();
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < uVar3);
                }
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
    }
    uVar15 = 0;
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    if (*(longlong *)(param_1 + 0xa70) == 0) {
        if ((*(longlong *)(param_1 + 0xa50) != 0) && (*(longlong *)(param_1 + 0xa60) != 0)) {
            uVar19 = 0x3f800000;
            uVar20 = 0x3f800000;
            uVar21 = 0x3f800000;
            uVar22 = 0x3f800000;
            uVar12 = uVar15;
            do {
                local_178 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                if (*(longlong *)(param_1 + 0xa20) != 0) {
                    local_1e8 = (undefined *)
                            ((ulonglong)local_1e8 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_1 + 0xa28)) *
                                            *(float *)(param_1 + 0xa2c)));
                    FUN_140103e60(*(longlong *)(param_1 + 0xa20),
                                  *(longlong *)(*(longlong *)(param_1 + 0xa58) + uVar12 * 8) + 0x20);
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 < *(ulonglong *)(param_1 + 0xa60));
        }
    }
    else {
        uVar19 = 0x3f800000;
        uVar20 = 0x3f800000;
        uVar21 = 0x3f800000;
        uVar22 = 0x3f800000;
        uVar12 = uVar15;
        do {
            local_178 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
            if (*(longlong *)(param_1 + 0xa20) != 0) {
                local_1e8 = (undefined *)
                        ((ulonglong)local_1e8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(param_1 + 0xa28)) *
                                        *(float *)(param_1 + 0xa2c)));
                FUN_140103e60(*(longlong *)(param_1 + 0xa20),
                              *(longlong *)(*(longlong *)(param_1 + 0xa68) + uVar12 * 8) + 0x20);
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 < *(ulonglong *)(param_1 + 0xa70));
    }
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    uVar12 = *(ulonglong *)(param_1 + 0x9a0);
    if (uVar12 != 0) {
        uVar19 = 0x3f800000;
        uVar20 = 0x3f800000;
        uVar21 = 0x3f800000;
        uVar22 = 0x3f800000;
        fVar23 = 28.0;
        fVar25 = 10.0;
        fVar16 = 20.0;
        do {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar15 * 8);
            if (*(longlong *)(lVar9 + 0x1f0) != 0) {
                local_178 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                _local_1a8 = CONCAT412(*(float *)(lVar9 + 0x1c) - 20.0,
                                       CONCAT48(*(float *)(lVar9 + 0x18) - 20.0,
                                                CONCAT44(*(float *)(lVar9 + 0x14) - 20.0,
                                                         *(float *)(lVar9 + 0x10) - 20.0)));
                _local_198 = CONCAT44(*(float *)(lVar9 + 0x14) + 20.0,*(float *)(lVar9 + 0x10) + 20.0);
                _local_198 = CONCAT412(*(float *)(lVar9 + 0x1c) + 20.0,
                                       CONCAT48(*(float *)(lVar9 + 0x18) + 20.0,_local_198));
                if (*(longlong *)(lVar9 + 0x1f0) != 0) {
                    local_1e8 = (undefined *)
                            ((ulonglong)local_1e8 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(lVar9 + 0x1f8)) * *(float *)(lVar9 + 0x1fc)
                             ));
                    FUN_140103e60(*(longlong *)(lVar9 + 0x1f0),local_1a8);
                }
                (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
            }
            local_138 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar15 * 8);
            bVar1 = *(byte *)(lVar9 + 0x1e4);
            if ((bVar1 & 0x10) == 0) {
                uVar11 = 4;
            }
            else if ((char)bVar1 < '\0') {
                if ((bVar1 & 0x40) == 0) {
                    LAB_1406e42c9:
                    if ((char)bVar1 < '\0') {
                        uVar11 = 2;
                    }
                    else {
                        uVar11 = (ulonglong)(-(uint)((*(byte *)(lVar9 + 0x1e6) & 1) != 0) & 5);
                    }
                }
                else {
                    uVar11 = 3;
                }
            }
            else {
                if ((bVar1 & 0x40) == 0) goto LAB_1406e42c9;
                uVar11 = 1;
            }
            if ((*(byte *)(param_1 + 0x1c) >> 3 & 1) == 0) {
                uVar11 = 4;
            }
            lVar14 = uVar11 * 0x30;
            if (*(longlong *)(lVar14 + 0x48 + lVar9) != 0) {
                local_1e8 = (undefined *)
                        ((ulonglong)local_1e8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(lVar14 + -0x158 + lVar9 + 0x1a8)) *
                                        *(float *)(lVar14 + -0x154 + lVar9 + 0x1a8)));
                FUN_140103cf0();
            }
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x998) + uVar15 * 8);
            if (*(char *)((longlong)plVar2 + 0x44) != *(char *)(*plVar2 + 0x40)) {
                (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
                local_148 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar15 * 8);
                lVar10 = (longlong)*(int *)(lVar9 + 0x1e8);
                lVar14 = *(longlong *)(param_1 + 0x850 + lVar10 * 0x30);
                if (lVar14 != 0) {
                    local_1e8 = (undefined *)
                            ((ulonglong)local_1e8 & 0xffffffff00000000 |
                             (ulonglong)
                                     (uint)((DAT_140c63664 - *(float *)(param_1 + 0x858 + lVar10 * 0x30)) *
                                            *(float *)(param_1 + 0x85c + lVar10 * 0x30)));
                    FUN_140103e60(lVar14,lVar9 + 0x20);
                }
            }
            iVar7 = DAT_140c53c40;
            if (*DAT_140c63750 < DAT_140c53c40) {
                iVar7 = *DAT_140c63750;
            }
            if (*(float *)(&DAT_140c53c50 + (longlong)iVar7 * 4) <= *(float *)(param_1 + 0x470)) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar15 * 8);
                if (*(int *)(lVar9 + 0x40) != 0) {
                    fVar18 = (float)(int)*(undefined8 *)(lVar9 + 0x1c0) + -2.5;
                    fVar17 = (float)*(int *)(lVar9 + 0x1c4) - fVar23;
                    _local_1c8 = ZEXT416((uint)fVar17) << 0x20;
                    _local_1c8 = SUB128(CONCAT84(auStack452._4_8_,fVar17 - -2.5),0) << 0x20;
                    _local_1c8 = CONCAT412(0x40200000,CONCAT48(0x40200000,_local_1c8));
                    fVar17 = (fVar18 + ((float)(int)*(undefined8 *)(lVar9 + 0x1b8) - -2.5)) * fVar26 - fVar25;
                    _local_1c8 = CONCAT124(auStack452,fVar17);
                    _auStack436 = SUB1612(CONCAT412(0xc0200000,
                                                    CONCAT48(0xc0200000,
                                                             CONCAT44((float)*(int *)(lVar9 + 0x1c4) + -2.5,
                                                                      fVar18))) >> 0x20,0);
                    _local_1b8 = CONCAT124(_auStack436,fVar17 + fVar16);
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
                    local_158 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                    if (*(longlong *)(param_1 + 0x778) != 0) {
                        local_1e8 = (undefined *)
                                ((ulonglong)local_1e8 & 0xffffffff00000000 |
                                 (ulonglong)
                                         (uint)((DAT_140c63664 - *(float *)(param_1 + 0x780)) *
                                                *(float *)(param_1 + 0x784)));
                        FUN_140103e60(*(longlong *)(param_1 + 0x778),local_1c8);
                    }
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
                    pplVar4 = *(longlong ***)(*(longlong *)(param_1 + 0x998) + uVar15 * 8);
                    plVar2 = *pplVar4;
                    uVar24 = (uint)*(byte *)((longlong)pplVar4 + 0x44);
                    if (uVar24 == *(uint *)(*plVar2 + 0x14)) {
                        iVar7 = DAT_140c53fe0;
                        if (*DAT_140c63750 < DAT_140c53fe0) {
                            iVar7 = *DAT_140c63750;
                        }
                        puVar13 = &DAT_140c53ff0 + (longlong)iVar7 * 0x10;
                    }
                    else {
                        if (DAT_140c65898 == 0) {
                            LAB_1406e45e6:
                            iVar7 = DAT_140c53f20;
                            if (*DAT_140c63750 < DAT_140c53f20) {
                                iVar7 = *DAT_140c63750;
                            }
                            puVar13 = &DAT_140c53f30;
                        }
                        else {
                            lVar9 = *plVar2;
                            if (((((*(int *)(lVar9 + 0x18) != 0) &&
                                   (uVar11 = (ulonglong)(uint)(*(int *)(param_1 + 0xa90) + *(int *)(lVar9 + 0x18)),
                                           *(ulonglong *)(DAT_140c65898 + 0x1648) <= uVar11 &&
                                           uVar11 != *(ulonglong *)(DAT_140c65898 + 0x1648))) ||
                                  ((*(int *)(lVar9 + 0x20) != 0 &&
                                    (uVar11 = (ulonglong)(uint)(*(int *)(param_1 + 0xa94) + *(int *)(lVar9 + 0x20)),
                                            *(ulonglong *)(DAT_140c65898 + 0x1658) <= uVar11 &&
                                            uVar11 != *(ulonglong *)(DAT_140c65898 + 0x1658))))) ||
                                 ((*(int *)(lVar9 + 0x1c) != 0 &&
                                   (uVar11 = (ulonglong)(uint)(*(int *)(param_1 + 0xa98) + *(int *)(lVar9 + 0x1c)),
                                           *(ulonglong *)(DAT_140c65898 + 0x1650) <= uVar11 &&
                                           uVar11 != *(ulonglong *)(DAT_140c65898 + 0x1650))))) ||
                                ((*(int *)(lVar9 + 0x24) != 0 &&
                                  (uVar11 = (ulonglong)(uint)(*(int *)(param_1 + 0xa9c) + *(int *)(lVar9 + 0x24)),
                                          *(ulonglong *)(DAT_140c65898 + 0x1660) <= uVar11 &&
                                          uVar11 != *(ulonglong *)(DAT_140c65898 + 0x1660))))) goto LAB_1406e45e6;
                            iVar7 = DAT_140c53e60;
                            if (*DAT_140c63750 < DAT_140c53e60) {
                                iVar7 = *DAT_140c63750;
                            }
                            puVar13 = &DAT_140c53e70;
                        }
                        puVar13 = puVar13 + (longlong)iVar7 * 0x10;
                    }
                    FUN_14018d540(local_188,&DAT_140b3e2b4,uVar24);
                    local_1d0 = 1;
                    local_1e8 = local_1c8;
                    local_1e0 = 5;
                    local_1d8 = puVar13;
                    (**(code **)(*DAT_140c65680 + 0x108))
                            (DAT_140c65680,*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x60));
                    if (local_188._0_8_ != 0) {
                        (**(code **)(*(longlong *)(local_188._0_8_ + -0x10) + 8))();
                    }
                }
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
    }
    (**(code **)(*DAT_140c65680 + 0x48))();
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack520);
    return;
}



void FUN_1406e4720(longlong param_1,longlong param_2,int param_3)

{
    undefined8 local_58;
    undefined local_50;
    undefined local_48 [16];
    undefined local_38 [16];
    undefined local_28 [16];
    undefined8 local_18;

    *(int *)(param_2 + 0x40) = param_3;
    local_48 = ZEXT816(0);
    local_28 = ZEXT816(0);
    local_58 = 0;
    local_50 = 0;
    local_38 = ZEXT816(0);
    local_18 = 0;
    FUN_14010b330(&local_58,*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)
                          (param_1 + 0x7b0 +
                           ((longlong)param_3 + (longlong)*(int *)(param_2 + 0x1e8) * 4) * 8),
                  L"PrimalMatrixNode");
    FUN_1400c3730(param_2 + 0x48,&local_58);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406e47a0(undefined8 param_1,float param_2,longlong param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    undefined auStack184 [32];
    float local_98;
    undefined8 uStack144;
    undefined4 local_88;
    undefined8 uStack128;
    float local_78 [2];
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack96;
    undefined4 uStack92;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    iVar1 = *DAT_140c63750;
    local_88 = 0;
    uStack144 = 0;
    iVar2 = DAT_140c53b80;
    if (iVar1 < DAT_140c53b80) {
        iVar2 = iVar1;
    }
    iVar3 = DAT_140c53be0;
    if (iVar1 < DAT_140c53be0) {
        iVar3 = iVar1;
    }
    fVar4 = *(float *)(&DAT_140c53b90 + (longlong)iVar2 * 4);
    if (*(float *)(&DAT_140c53b90 + (longlong)iVar2 * 4) <= param_2) {
        fVar4 = param_2;
    }
    uStack128 = param_3 + 0x450;
    local_98 = *(float *)(&DAT_140c53bf0 + (longlong)iVar3 * 4);
    if (fVar4 <= *(float *)(&DAT_140c53bf0 + (longlong)iVar3 * 4)) {
        local_98 = fVar4;
    }
    uStack128._4_4_ = (undefined4)((ulonglong)uStack128 >> 0x20);
    uStack112 = 0;
    uStack108 = 0;
    local_68 = 0;
    uStack96 = (undefined4)uStack128;
    uStack92 = uStack128._4_4_;
    *(float *)(param_3 + 0x470) = local_98;
    *(float *)(param_3 + 0x474) = local_98;
    local_78[0] = local_98;
    FUN_1401b0840(local_78,param_3 + 0x410);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack184);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406e4880(longlong param_1,undefined (*param_2) [16])

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    ulonglong uVar5;
    int iVar6;
    int iVar7;
    undefined auVar8 [16];
    undefined auStack216 [32];
    int local_b8;
    int local_b4;
    int local_b0;
    int local_ac;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined8 uStack160;
    undefined4 local_98;
    undefined4 uStack148;
    undefined8 uStack144;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    iVar2 = DAT_140c53e20;
    if (*DAT_140c63750 < DAT_140c53e20) {
        iVar2 = *DAT_140c63750;
    }
    uVar5 = 0;
    if ((&DAT_140c53e30)[iVar2] == '\0') {
        auVar8 = *param_2;
    }
    else {
        local_b8 = (int)*(float *)*param_2;
        local_b4 = (int)*(float *)(*param_2 + 4);
        local_b0 = (int)((float)(*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x400)) *
                         *(float *)(param_1 + 0x470) * 0.5);
        local_ac = (int)((float)(*(int *)(param_1 + 0x40c) - *(int *)(param_1 + 0x404)) *
                         *(float *)(param_1 + 0x470) * 0.5);
        iVar4 = *(int *)(param_1 + 0x400) - local_b0;
        iVar6 = (*(int *)(param_1 + 0x408) + local_b0) - (int)DAT_140c77768;
        iVar3 = *(int *)(param_1 + 0x404) - local_ac;
        iVar7 = (*(int *)(param_1 + 0x40c) + local_ac) - DAT_140c77768._4_4_;
        iVar2 = local_b8;
        if (iVar6 < local_b8) {
            iVar2 = iVar6;
        }
        iVar6 = local_b4;
        if (iVar7 < local_b4) {
            iVar6 = iVar7;
        }
        if (iVar4 < iVar2) {
            iVar4 = iVar2;
        }
        if (iVar3 < iVar6) {
            iVar3 = iVar6;
        }
        auVar8 = ZEXT816(CONCAT44((float)iVar3,(float)iVar4));
    }
    uStack144 = (undefined (*) [16])(param_1 + 0x450);
    *uStack144 = auVar8;
    if (*(longlong *)(param_1 + 0x9a0) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar5 * 8);
            if (*(longlong *)(lVar1 + 0x250) != 0) {
                local_b8 = (int)(*(float *)(lVar1 + 0x10) + *(float *)*uStack144);
                local_b4 = (int)(*(float *)(lVar1 + 0x14) + *(float *)(param_1 + 0x454));
                FUN_1400cc900(*(longlong *)(lVar1 + 0x250),&local_b8);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0x9a0));
    }
    local_a8 = *(undefined4 *)(param_1 + 0x470);
    uStack160 = 0;
    local_98 = 0;
    uStack144._4_4_ = (undefined4)((ulonglong)uStack144 >> 0x20);
    uStack132 = uStack164;
    uStack128 = 0;
    uStack124 = 0;
    local_78 = 0;
    uStack116 = uStack148;
    uStack112 = (undefined4)uStack144;
    uStack108 = uStack144._4_4_;
    local_88 = local_a8;
    FUN_1401b0840(&local_88,param_1 + 0x410);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack216);
    return;
}



undefined8 FUN_1406e4e00(longlong param_1,longlong **param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    if (DAT_140c65898 != 0) {
        lVar1 = **param_2;
        if (((((*(int *)(lVar1 + 0x18) == 0) ||
               (uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0xa90) + *(int *)(lVar1 + 0x18)),
                       uVar2 < *(ulonglong *)(DAT_140c65898 + 0x1648) ||
                       uVar2 == *(ulonglong *)(DAT_140c65898 + 0x1648))) &&
              ((*(int *)(lVar1 + 0x20) == 0 ||
                (uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0xa94) + *(int *)(lVar1 + 0x20)),
                        uVar2 < *(ulonglong *)(DAT_140c65898 + 0x1658) ||
                        uVar2 == *(ulonglong *)(DAT_140c65898 + 0x1658))))) &&
             ((*(int *)(lVar1 + 0x1c) == 0 ||
               (uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0xa98) + *(int *)(lVar1 + 0x1c)),
                       uVar2 < *(ulonglong *)(DAT_140c65898 + 0x1650) ||
                       uVar2 == *(ulonglong *)(DAT_140c65898 + 0x1650))))) &&
            ((*(int *)(lVar1 + 0x24) == 0 ||
              (uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0xa9c) + *(int *)(lVar1 + 0x24)),
                      uVar2 < *(ulonglong *)(DAT_140c65898 + 0x1660) ||
                      uVar2 == *(ulonglong *)(DAT_140c65898 + 0x1660))))) {
            return 1;
        }
    }
    return 0;
}



void FUN_1406e4e90(longlong param_1,longlong **param_2,int param_3)

{
    byte bVar1;
    longlong *plVar2;
    byte bVar3;
    int iVar4;

    plVar2 = *param_2;
    bVar1 = *(byte *)((longlong)param_2 + 0x44);
    param_3 = (uint)bVar1 + param_3;
    if (*(int *)(*plVar2 + 0x14) < param_3) {
        param_3 = *(int *)(*plVar2 + 0x14);
    }
    bVar3 = (byte)param_3;
    if (param_3 < (int)(uint)*(byte *)(plVar2 + 8)) {
        bVar3 = *(byte *)(plVar2 + 8);
    }
    *(byte *)((longlong)param_2 + 0x44) = bVar3;
    iVar4 = (uint)bVar3 - (uint)bVar1;
    *(int *)(param_1 + 0xa90) = *(int *)(param_1 + 0xa90) + *(int *)(*plVar2 + 0x18) * iVar4;
    *(int *)(param_1 + 0xa94) = *(int *)(param_1 + 0xa94) + *(int *)(**param_2 + 0x20) * iVar4;
    *(int *)(param_1 + 0xa98) = *(int *)(param_1 + 0xa98) + *(int *)(**param_2 + 0x1c) * iVar4;
    *(int *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa9c) + *(int *)(**param_2 + 0x24) * iVar4;
    return;
}



ulonglong FUN_1406e4f30(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar1 = *param_2;
    uVar3 = (**(code **)(param_1 + 0x988))(uVar1);
    uVar4 = uVar3 / *(ulonglong *)(param_1 + 0x978);
    puVar2 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x980) + (uVar3 % *(ulonglong *)(param_1 + 0x978)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar2) &&
            (uVar4 = (**(code **)(param_1 + 0x990))(uVar1,puVar2 + 2), (int)uVar4 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return uVar4;
    }
    uVar4 = FUN_1406e4fc0(param_1,puVar2[3]);
    return uVar4;
}



void FUN_1406e4fc0(longlong param_1,longlong **param_2)

{
    undefined8 *puVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    undefined8 uVar6;
    longlong lVar7;

    if (*(byte *)((longlong)param_2 + 0x44) != 0) {
        if (*(uint *)(**param_2 + 0x14) <= (uint)*(byte *)((longlong)param_2 + 0x44)) {
            FUN_1406e4720(param_1,param_2,3);
            return;
        }
        FUN_1406e4720(param_1,param_2,2);
        return;
    }
    if ((*(byte *)(**param_2 + 0x10) & 1) != 0) {
        FUN_1406e4720(param_1,param_2,1);
        return;
    }
    uVar5 = 0;
    lVar7 = 0;
    do {
        puVar1 = *(undefined8 **)(lVar7 + 8 + (longlong)*param_2);
        if (puVar1 != (undefined8 *)0x0) {
            uVar4 = (**(code **)(param_1 + 0x988))(*puVar1);
            for (puVar2 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x980) + (uVar4 % *(ulonglong *)(param_1 + 0x978)) * 8
                    ); puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                if ((uVar4 == *puVar2) && (iVar3 = (**(code **)(param_1 + 0x990))(), iVar3 != 0)) {
                    if ((puVar2 + 3 != (ulonglong *)0x0) && (*(int *)(puVar2[3] + 0x40) - 2U < 2)) {
                        uVar6 = 1;
                        goto LAB_1406e509c;
                    }
                    break;
                }
            }
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 8;
        if (5 < uVar5) {
            uVar6 = 0;
            LAB_1406e509c:
            FUN_1406e4720(param_1,param_2,uVar6);
            return;
        }
    } while( true );
}


