//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Could not reconcile some variable overlaps

void FUN_1401a0b30(longlong param_1) {
    DWORD DVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 uStack64;
    undefined8 local_38;
    DWORD DStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    DWORD DStack16;
    undefined4 uStack12;

    DVar1 = WaitForSingleObject(*(HANDLE * )(param_1 + 0x18), 0xffffffff);
    if (DVar1 == 0xffffffff) {
        local_88 = &PTR_LAB_140b5e648;
        local_80 = 0;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_68 = local_88;
        local_60 = local_80;
        local_58 = local_78;
        DStack48 = GetLastError();
        local_48 = &PTR_LAB_140b5e648;
        uStack64 = L"Result";
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_48 = &PTR_LAB_140b5e640;
        local_18 = (undefined4) local_38;
        uStack20 = local_38._4_4_;
        uStack12 = uStack44;
        local_28 = 0x40b5e640;
        uStack36 = 1;
        uStack32 = (undefined4) uStack64;
        uStack28 = uStack64._4_4_;
        local_res8 = 0x141d3ef68;
        DStack16 = DStack48;
        iVar2 = FUN_140197770(0x27, &local_res8, &local_28, &local_68);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return;
    }
    iVar2 = **(int **) (param_1 + 0x20);
    if (iVar2 == 0) {
        SetEvent(*(HANDLE * )(param_1 + 0x28));
    } else {
        iVar2 = iVar2 + -1;
        **(int **) (param_1 + 0x20) = iVar2;
        if (iVar2 != 0) goto LAB_1401a0b7d;
    }
    SetEvent(*(HANDLE * )(param_1 + 0x30));
    LAB_1401a0b7d:
    // WARNING: Could not recover jumptable at 0x0001401a0b91. Too many branches
    // WARNING: Treating indirect jump as call
    ReleaseMutex(*(HANDLE * )(param_1 + 0x18));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a0cc0(void) {
    ulonglong uVar1;
    int iVar2;
    DWORD DVar3;
    BOOL BVar4;
    HANDLE hObject;
    longlong lVar5;
    ulonglong uVar6;
    bool bVar7;
    longlong local_res8;
    longlong local_res10;

    if (_DAT_140c884a4 != 0) {
        iVar2 = FUN_14018cdf0();
        if (_DAT_140c884a4 != 0) {
            do {
                if (_DAT_140c7f94c == 0) {
                    FUN_14018cc40();
                }
                DVar3 = GetCurrentThreadId();
                if (DAT_140c67440 == DVar3) {
                    DAT_140c67448 = DAT_140c67448 + 1;
                    DVar3 = DAT_140c67440;
                    LAB_1401a0d3f:
                    DAT_140c67440 = DVar3;
                    if ((DAT_140c8e0d0 & 1) == 0) {
                        DAT_140c8e0d0 = DAT_140c8e0d0 | 1;
                        QueryPerformanceCounter(&local_res8);
                        _DAT_140c8e0d8 = local_res8 - _DAT_140c87988;
                    }
                    QueryPerformanceCounter(&local_res10);
                    lVar5 = local_res10 - _DAT_140c87988;
                    uVar6 = DAT_140c8a198 + (lVar5 - _DAT_140c8e0d8);
                    uVar1 = uVar6 / DAT_140c88498;
                    DAT_140c884a0 = DAT_140c884a0 + (int) uVar1;
                    DAT_140c8a198 = uVar6 - (uVar1 & 0xffffffff) * DAT_140c88498;
                    _DAT_140c8e0d8 = lVar5;
                    if (DAT_140c67448 < 2) {
                        DAT_140c67440 = 0;
                        DAT_140c67448 = 0;
                        if (DAT_140c67450 != 0) {
                            if (DAT_140c67458 == (HANDLE) 0x0) {
                                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                                LOCK();
                                bVar7 = DAT_140c67458 == (HANDLE) 0x0;
                                DAT_140c67458 =
                                        (HANDLE)((ulonglong) DAT_140c67458 ^
                                                 (ulonglong) bVar7 * ((ulonglong) DAT_140c67458 ^ (ulonglong) hObject));
                                if (!bVar7) {
                                    CloseHandle(hObject);
                                }
                            }
                            SetEvent(DAT_140c67458);
                        }
                    } else {
                        DAT_140c67448 = DAT_140c67448 - 1;
                    }
                } else {
                    LOCK();
                    bVar7 = DAT_140c67448 == 0;
                    DAT_140c67448 = DAT_140c67448 ^ (ulonglong) bVar7 * (DAT_140c67448 ^ 1);
                    if (bVar7) goto LAB_1401a0d3f;
                }
                if (-1 < DAT_140c884a0 - (iVar2 + 30000)) {
                    if (_DAT_140c884a4 == 0) {
                        return;
                    }
                    OutputDebugStringA("ThreadShutdown: Threads remaining after 30 seconds");
                    BVar4 = IsDebuggerPresent();
                    if (BVar4 == 0) {
                        return;
                    }
                    DebugBreak();
                    return;
                }
                Sleep(1);
                if (_DAT_140c884a4 == 0) {
                    return;
                }
            } while (true);
        }
    }
    return;
}


int FUN_1401a0eb0(longlong *param_1, undefined8 param_2, longlong **param_3) {
    int iVar1;
    longlong *plVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((*(int *) (param_1 + 5) != 0) &&
        ((*(int *) ((longlong) param_1 + 0xc) == 0 || ((param_1[2] == 0 && (param_1[3] == 0)))))) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141d3f070;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8a204, 0x27, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return -0x7ff8ffa9;
    }
    plVar2 = (longlong *) FUN_14018b280(0x60);
    if (plVar2 != (longlong *) 0x0) {
        *plVar2 = (longlong) & PTR_LAB_140b5e7d0;
        plVar2[2] = *param_1;
        *(undefined4 * )(plVar2 + 3) = *(undefined4 * )(param_1 + 1);
        *(undefined4 * )((longlong) plVar2 + 0x1c) = *(undefined4 * )((longlong) param_1 + 0xc);
        plVar2[4] = param_1[2];
        plVar2[5] = param_1[3];
        plVar2[6] = param_1[4];
        *(undefined4 * )(plVar2 + 7) = *(undefined4 * )(param_1 + 5);
        plVar2[10] = 0;
        plVar2[0xb] = 0;
        *(undefined4 * )(plVar2 + 1) = 1;
        plVar2[9] = 0;
    }
    iVar1 = FUN_14019f5e0(plVar2);
    if (-1 < iVar1) {
        if (param_3 != (longlong **) 0x0) {
            *param_3 = plVar2;
        }
        (**(code * *)(*plVar2 + 0x20))(plVar2);
        if (param_3 == (longlong **) 0x0) {
            (**(code * *)(*plVar2 + 8))(plVar2);
        }
        return 0;
    }
    (**(code * *)(*plVar2 + 8))(plVar2);
    return iVar1;
}


ulonglong FUN_1401a1070(longlong **param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4,
                        undefined4 param_5) {
    longlong *plVar1;
    ulonglong uVar2;

    if (param_1 == (longlong **) 0x0) {
        uVar2 = 0x80070057;
    } else {
        plVar1 = (longlong *) FUN_14018b280(0x18);
        if (plVar1 == (longlong *) 0x0) {
            plVar1 = (longlong *) 0x0;
        } else {
            *plVar1 = (longlong) & PTR_LAB_140b5e790;
            *(undefined4 * )(plVar1 + 1) = 1;
            plVar1[2] = 0;
        }
        uVar2 = FUN_14019ff60(plVar1, param_2, param_3, param_4, param_5);
        if ((int) uVar2 < 0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
            uVar2 = uVar2 & 0xffffffff;
        } else {
            *param_1 = plVar1;
        }
    }
    return uVar2;
}


longlong *FUN_1401a1120(longlong **param_1, LONG param_2) {
    uint uVar1;
    longlong *plVar2;
    HANDLE pvVar3;
    longlong *plVar4;
    longlong *plVar5;

    if (param_1 == (longlong **) 0x0) {
        return (longlong *) 0x80070057;
    }
    plVar2 = (longlong *) FUN_14018b280(0x18);
    plVar4 = (longlong *) 0x0;
    plVar5 = plVar4;
    if (plVar2 != (longlong *) 0x0) {
        *plVar2 = (longlong) & PTR_LAB_140b5e750;
        *(undefined4 * )(plVar2 + 1) = 1;
        plVar2[2] = 0;
        plVar5 = plVar2;
    }
    pvVar3 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES) 0x0, param_2, 0x7fffffff, (LPCWSTR) 0x0);
    plVar5[2] = (longlong) pvVar3;
    if (pvVar3 == (HANDLE) 0x0) {
        uVar1 = GetLastError();
        if (0 < (int) uVar1) {
            uVar1 = uVar1 & 0xffff | 0x80070000;
        }
        plVar4 = (longlong * )(ulonglong)
        uVar1;
        if ((int) uVar1 < 0) {
            (**(code * *)(*plVar5 + 8))(plVar5);
            return plVar4;
        }
    }
    *param_1 = plVar5;
    return plVar4;
}


ulonglong FUN_1401a11d0(longlong **param_1, undefined8 param_2) {
    longlong *plVar1;
    ulonglong uVar2;

    if (param_1 == (longlong **) 0x0) {
        return 0x80070057;
    }
    plVar1 = (longlong *) FUN_14018b280(0x38);
    if (plVar1 != (longlong *) 0x0) {
        *plVar1 = (longlong) & PTR_LAB_140b5e728;
        *(undefined4 * )(plVar1 + 1) = 1;
        plVar1[2] = 0;
        plVar1[3] = 0;
        plVar1[5] = 0;
        plVar1[6] = 0;
    }
    uVar2 = FUN_1401a05d0(plVar1, param_2);
    if (-1 < (int) uVar2) {
        *param_1 = plVar1;
        return uVar2;
    }
    (**(code * *)(*plVar1 + 8))(plVar1);
    return uVar2 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined *FUN_1401a1280(void) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    DAT_140c77708 = 5;
    _DAT_140c676c0 = 0;
    DAT_140c676b8 = 0;
    DAT_140c77748 = 0;
    _DAT_140c77750 = ZEXT816(0);
    DAT_140c674a4 = 0;
    DAT_140c676c8 = 0;
    DAT_140c776d0 = 0;
    DAT_140c776d8 = 0;
    DAT_140c776e0 = 0;
    DAT_140c776e8 = 0;
    DAT_140c776f0 = 0;
    _DAT_140c77700 = 0;
    DAT_140c776f8 = 0;
    DAT_140c77710 = 0xffffffffffffffff;
    DAT_140c77728 = 0xffffffffffffffff;
    lVar3 = 8;
    puVar1 = &DAT_140c674a8;
    do {
        puVar2 = puVar1;
        *puVar2 = 0x200000002;
        puVar2[1] = 0x200000002;
        puVar2[2] = 0x200000002;
        puVar2[3] = 0x200000002;
        puVar2[4] = 0x200000002;
        puVar2[5] = 0x200000002;
        puVar2[6] = 0x200000002;
        puVar2[7] = 0x200000002;
        lVar3 = lVar3 + -1;
        puVar1 = puVar2 + 8;
    } while (lVar3 != 0);
    puVar2[8] = 0x200000002;
    *(undefined4 * )(puVar2 + 9) = 2;
    _DAT_140c674a0 = 1;
    return &DAT_140c674a0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a1360(void) {
    undefined8 *puVar1;
    DWORD DVar2;
    undefined8 *puVar3;
    HANDLE hObject;
    ulonglong uVar4;
    longlong lVar5;
    bool bVar6;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar6 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar6 * (DAT_140c67408 ^ 1);
            if (bVar6) goto LAB_1401a13bf;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c67400);
        DVar2 = DAT_140c67400;
    }
    LAB_1401a13bf:
    DAT_140c67400 = DVar2;
    lVar5 = 8;
    puVar1 = &DAT_140c674a8;
    do {
        puVar3 = puVar1;
        *puVar3 = 0xffffffffffffffff;
        puVar3[1] = 0xffffffffffffffff;
        puVar3[2] = 0xffffffffffffffff;
        puVar3[3] = 0xffffffffffffffff;
        puVar3[4] = 0xffffffffffffffff;
        puVar3[5] = 0xffffffffffffffff;
        puVar3[6] = 0xffffffffffffffff;
        puVar3[7] = 0xffffffffffffffff;
        lVar5 = lVar5 + -1;
        puVar1 = puVar3 + 8;
    } while (lVar5 != 0);
    puVar3[8] = 0xffffffffffffffff;
    *(undefined4 * )(puVar3 + 9) = 0xffffffff;
    DAT_140c674a4 = DAT_140c674a4 & 0xfffffffc;
    if (DAT_140c676c8 != (FILE *) 0x0) {
        fclose(DAT_140c676c8);
        DAT_140c676c8 = (FILE *) 0x0;
    }
    if (DAT_140c776e8 != 0) {
        FUN_14018b900(DAT_140c776e8, 0);
        DAT_140c776e8 = 0;
        DAT_140c776f0 = 0;
        _DAT_140c77700 = 0;
        DAT_140c776f8 = 0;
        DAT_140c77708 = 5;
    }
    DAT_140c77750 = DAT_140c77750 + (DAT_140c77750 - DAT_140c77748 >> 4) * -0x10;
    if (DAT_140c67408 < 2) {
        DAT_140c67400 = 0;
        DAT_140c67408 = 0;
        if (DAT_140c67410 == 0) {
            DAT_140c67400 = 0;
            DAT_140c67408 = 0;
            return;
        }
        if (DAT_140c67418 == (HANDLE) 0x0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            bVar6 = DAT_140c67418 == (HANDLE) 0x0;
            DAT_140c67418 =
                    (HANDLE)((ulonglong) DAT_140c67418 ^
                             (ulonglong) bVar6 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
            if (!bVar6) {
                CloseHandle(hObject);
            }
        }
        // WARNING: Could not recover jumptable at 0x0001401a151b. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(DAT_140c67418);
        return;
    }
    DAT_140c67408 = DAT_140c67408 - 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a1530(longlong *param_1) {
    ushort uVar1;
    WCHAR WVar2;
    undefined2 uVar3;
    short sVar4;
    code *pcVar5;
    ushort *puVar6;
    longlong *plVar7;
    DWORD DVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    BOOL BVar12;
    undefined4 uVar13;
    longlong lVar14;
    undefined2 *puVar15;
    short *psVar16;
    undefined8 uVar17;
    HANDLE hObject;
    LPWSTR pWVar18;
    longlong lVar19;
    short *psVar20;
    uint uVar21;
    ulonglong uVar22;
    ushort **ppuVar23;
    ushort **ppuVar24;
    uint uVar25;
    ulonglong uVar26;
    undefined8 *puVar27;
    longlong lVar28;
    longlong lVar29;
    wchar_t *pwVar30;
    longlong lVar31;
    bool bVar32;
    LPWSTR pWStackX8;
    longlong *local_1748;
    ulonglong local_1740;
    LPWSTR local_1738;
    uint local_1730;
    DWORD local_172c;
    undefined4 local_1728[2];
    longlong *local_1720;
    longlong local_1718;
    longlong local_1710;
    _SYSTEMTIME local_1708;
    _CONSOLE_SCREEN_BUFFER_INFO local_16f8;
    _CONSOLE_SCREEN_BUFFER_INFO local_16e0;
    WCHAR local_16c8[16];
    short local_16a8[264];
    short local_1498[264];
    WCHAR local_1288[264];
    undefined2 local_1078[264];
    undefined2 local_e68[264];
    WCHAR local_c58[264];
    undefined local_a48[528];
    undefined local_838[2048];
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x1401a155a;
    lVar14 = FUN_1407f0f60();
    lVar14 = -lVar14;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar14);
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a157b;
    DVar8 = GetCurrentThreadId();
    uVar22 = 0;
    uVar26 = uVar22;
    if (DAT_140c67400 == DVar8) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar8 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar32 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar32 * (DAT_140c67408 ^ 1);
            if (bVar32) goto LAB_1401a15d1;
            uVar26 = uVar26 + 1;
        } while (uVar26 < 0x400);
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a15c9;
        FUN_14019fb60(&DAT_140c67400, DVar8);
        DVar8 = DAT_140c67400;
    }
    LAB_1401a15d1:
    DAT_140c67400 = DVar8;
    local_1720 = (longlong *) 0x0;
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a15de;
    FUN_1401c94c0();
    plVar7 = local_1720;
    DAT_140c674a4 = 0;
    if (local_1720 != (longlong *) 0x0) {
        pcVar5 = *(code * *)(*local_1720 + 0x28);
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1608;
        iVar9 = (*pcVar5)(local_1720, &local_1730, L"Flags", 0);
        if (-1 < iVar9) {
            DAT_140c674a4 = DAT_140c674a4 | local_1730;
        }
    }
    uVar25 = DAT_140c674a4;
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a165b;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logFile");
                if (iVar10 == 0) {
                    uVar25 = uVar25 | 1;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a16bb;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logNoFile");
                if (iVar10 == 0) {
                    uVar25 = uVar25 & 0xfffffffe;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a171b;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logFlush");
                if (iVar10 == 0) {
                    uVar25 = uVar25 | 0x10;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a177b;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logNoFlush");
                if (iVar10 == 0) {
                    uVar25 = uVar25 & 0xffffffef;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a17db;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logTimestamp");
                if (iVar10 == 0) {
                    uVar25 = uVar25 | 0x20;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a183b;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logNoTimestamp");
                if (iVar10 == 0) {
                    uVar25 = uVar25 & 0xffffffdf;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    uVar26 = uVar22;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a189b;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logFacility");
                if (iVar10 == 0) {
                    uVar25 = uVar25 & 0xffffffbf;
                    DAT_140c674a4 = uVar25;
                    break;
                }
            }
            uVar21 = (int) uVar26 + 1;
            ppuVar24 = ppuVar24 + 1;
            uVar26 = (ulonglong) uVar21;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a18fb;
                iVar10 = FUN_14018e2c0(puVar6 + 1, L"logNoFacility");
                if (iVar10 == 0) {
                    DAT_140c674a4 = uVar25 | 0x40;
                    break;
                }
            }
            uVar21 = (int) uVar22 + 1;
            uVar22 = (ulonglong) uVar21;
            ppuVar24 = ppuVar24 + 1;
        } while ((int) uVar21 < iVar9);
    }
    iVar9 = *(int *) (param_1 + 1);
    uVar26 = 0;
    if (0 < iVar9) {
        ppuVar24 = (ushort * *) * param_1;
        ppuVar23 = ppuVar24;
        uVar22 = uVar26;
        do {
            puVar6 = *ppuVar23;
            uVar1 = *puVar6;
            iVar10 = (int) uVar22;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a195b;
                iVar11 = FUN_14018e2c0(puVar6 + 1, L"logDefaultLevel");
                if (iVar11 == 0) {
                    if ((iVar10 + 1 < iVar9) && (ppuVar24[(longlong) iVar10 + 1] != (ushort *) 0x0)) {
                        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a198b;
                        uVar13 = FUN_14018e820();
                        puVar27 = &DAT_140c674a8;
                        for (lVar31 = 0x83; lVar31 != 0; lVar31 = lVar31 + -1) {
                            *(undefined4 *) puVar27 = uVar13;
                            puVar27 = (undefined8 * )((longlong) puVar27 + 4);
                        }
                    }
                    break;
                }
            }
            uVar26 = uVar26 + 1;
            uVar22 = (ulonglong)(iVar10 + 1);
            ppuVar23 = ppuVar23 + 1;
        } while ((longlong) uVar26 < (longlong) iVar9);
    }
    local_1718 = 0;
    local_1740 = 8;
    LAB_1401a19b5:
    iVar9 = 0;
    if (0x82 < (int) local_1718) {
        pwVar30 = L"Unknown";
        LAB_1401a1ad5:
        if (plVar7 != (longlong *) 0x0) {
            pcVar5 = *(code * *)(*plVar7 + 0x28);
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1af0;
            iVar10 = (*pcVar5)(plVar7, local_1728, pwVar30, 1);
            if (-1 < iVar10) {
                *(undefined4 * )(&DAT_140c674a0 + local_1740) = local_1728[0];
            }
        }
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1b1a;
        FUN_14001b370(local_838, 0x400, L"log%s", pwVar30);
        iVar10 = *(int *) (param_1 + 1);
        ppuVar24 = (ushort * *) * param_1;
        if (0 < iVar10) {
            do {
                puVar6 = *ppuVar24;
                uVar1 = *puVar6;
                if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1b5b;
                    iVar11 = FUN_14018e2c0(puVar6 + 1, local_838);
                    if (iVar11 == 0) {
                        iVar9 = 0;
                        lVar31 = 0;
                        if (iVar10 < 1) goto LAB_1401a1c4e;
                        ppuVar24 = (ushort * *) * param_1;
                        goto LAB_1401a1c10;
                    }
                }
                iVar9 = iVar9 + 1;
                ppuVar24 = ppuVar24 + 1;
            } while (iVar9 < iVar10);
        }
        goto LAB_1401a1b75;
    }
    pwVar30 = (wchar_t *) (&PTR_u_None_140c2ce70)[(int) local_1718];
    if (pwVar30 != (wchar_t *) 0x0) goto LAB_1401a1ad5;
    goto LAB_1401a19d7;
    LAB_1401a1c10:
    do {
        puVar6 = *ppuVar24;
        uVar1 = *puVar6;
        if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1c3b;
            iVar11 = FUN_14018e2c0(puVar6 + 1, local_838);
            if (iVar11 == 0) {
                if ((iVar9 + 1 < iVar10) &&
                    (puVar15 = *(undefined2 * *)(*param_1 + 8 + lVar31 * 8), puVar15 != (undefined2 *) 0x0)) {
                    uVar3 = *puVar15;
                    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1c8c;
                    iVar9 = FUN_1407dff2c(uVar3);
                    if (iVar9 != 0) {
                        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1c98;
                        uVar13 = FUN_14018e820(puVar15);
                        *(undefined4 * )(&DAT_140c674a0 + local_1740) = uVar13;
                        goto LAB_1401a1b75;
                    }
                }
                break;
            }
        }
        lVar31 = lVar31 + 1;
        iVar9 = iVar9 + 1;
        ppuVar24 = ppuVar24 + 1;
    } while (lVar31 < iVar10);
    LAB_1401a1c4e:
    *(undefined4 * )(&DAT_140c674a0 + local_1740) = 2;
    LAB_1401a1b75:
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1b90;
    FUN_14001b370(local_838, 0x400, L"logNo%s", pwVar30);
    iVar10 = 0;
    iVar9 = *(int *) (param_1 + 1);
    ppuVar24 = (ushort * *) * param_1;
    if (0 < iVar9) {
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1bdb;
                iVar11 = FUN_14018e2c0(puVar6 + 1, local_838);
                if (iVar11 == 0) {
                    *(undefined4 * )(&DAT_140c674a0 + local_1740) = 0xffffffff;
                    break;
                }
            }
            iVar10 = iVar10 + 1;
            ppuVar24 = ppuVar24 + 1;
        } while (iVar10 < iVar9);
    }
    LAB_1401a19d7:
    uVar26 = 0;
    local_1740 = local_1740 + 4;
    local_1718 = local_1718 + 1;
    if (0x213 < local_1740) goto code_r0x0001401a19f3;
    goto LAB_1401a19b5;
    code_r0x0001401a19f3:
    lVar31 = 0x104;
    local_1748 = param_1;
    if ((DAT_140c674a4 & 1) != 0) {
        iVar9 = *(int *) (param_1 + 1);
        if (0 < iVar9) {
            ppuVar24 = (ushort * *) * param_1;
            uVar22 = uVar26;
            do {
                puVar6 = *ppuVar24;
                uVar1 = *puVar6;
                iVar10 = (int) uVar22;
                if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1a4b;
                    iVar11 = FUN_14018e2c0(puVar6 + 1, L"logFileName");
                    if (iVar11 == 0) {
                        if ((iVar10 + 1 < iVar9) &&
                            (lVar28 = *(longlong * )(*param_1 + 8 + (longlong) iVar10 * 8), lVar28 != 0)) {
                            lVar19 = 0x104;
                            psVar16 = local_1498;
                            goto LAB_1401a1d00;
                        }
                        break;
                    }
                }
                uVar26 = uVar26 + 1;
                uVar22 = (ulonglong)(iVar10 + 1);
                ppuVar24 = ppuVar24 + 1;
            } while ((longlong) uVar26 < (longlong) iVar9);
        }
        uVar26 = 0;
        lVar28 = 0x10;
        local_172c = 0x10;
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1a7a;
        BVar12 = GetComputerNameW(local_16c8, &local_172c);
        if (BVar12 == 0) {
            pWVar18 = local_16c8;
            do {
                if ((lVar28 == -0x7fffffee) ||
                    (WVar2 = *(WCHAR * )(((longlong) L"UNKNOWN" - (longlong) local_16c8) + (longlong) pWVar18),
                            WVar2 == L'\0')) {
                    if (lVar28 != 0) goto LAB_1401a1d4b;
                    break;
                }
                *pWVar18 = WVar2;
                pWVar18 = pWVar18 + 1;
                lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            pWVar18 = pWVar18 + -1;
            LAB_1401a1d4b:
            *pWVar18 = L'\0';
        }
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1d60;
        GetModuleFileNameW((HMODULE) 0x0, local_c58, 0x104);
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1d7b;
        GetFullPathNameW(local_c58, 0x104, local_1288, &local_1738);
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1d8c;
        puVar15 = (undefined2 *) FUN_1407dd8d8(local_1288, 0x2e);
        if (puVar15 != (undefined2 *) 0x0) {
            *puVar15 = 0;
        }
        iVar9 = *(int *) (param_1 + 1);
        if (0 < iVar9) {
            ppuVar24 = (ushort * *) * param_1;
            uVar22 = uVar26;
            do {
                puVar6 = *ppuVar24;
                uVar1 = *puVar6;
                iVar10 = (int) uVar22;
                if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1ddb;
                    iVar11 = FUN_14018e2c0(puVar6 + 1, L"logDir");
                    if (iVar11 == 0) {
                        if ((iVar10 + 1 < iVar9) &&
                            (lVar28 = *(longlong * )(*param_1 + 8 + (longlong) iVar10 * 8), lVar28 != 0)) {
                            lVar19 = 0x104;
                            psVar16 = local_16a8;
                            goto LAB_1401a1e62;
                        }
                        break;
                    }
                }
                uVar26 = uVar26 + 1;
                uVar22 = (ulonglong)(iVar10 + 1);
                ppuVar24 = ppuVar24 + 1;
            } while ((longlong) uVar26 < (longlong) iVar9);
        }
        lVar28 = 0x104;
        psVar16 = local_16a8;
        do {
            if ((lVar28 == -0x7ffffefa) || (psVar16[0x210] == 0)) {
                if (lVar28 != 0) goto LAB_1401a1ea7;
                break;
            }
            *psVar16 = psVar16[0x210];
            psVar16 = psVar16 + 1;
            lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        psVar16 = psVar16 + -1;
        LAB_1401a1ea7:
        *psVar16 = 0;
        lVar28 = (longlong) local_1738 - (longlong) local_1288 >> 1;
        if (0x207 < (ulonglong)(lVar28 * 2)) {
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2454;
            __report_rangecheckfailure();
            pcVar5 = (code *) swi(3);
            (*pcVar5)();
            return;
        }
        local_16a8[lVar28] = 0;
        lVar28 = 0x104;
        psVar16 = local_16a8;
        do {
            if (*psVar16 == 0) {
                if (lVar28 != 0) {
                    local_1710 = -lVar28 + 0x104;
                    psVar16 = local_16a8 + local_1710;
                    lVar19 = 0x104 - local_1710;
                    if (lVar19 == 0) goto LAB_1401a2021;
                    lVar28 = -lVar28 + 0x7ffffffe + lVar19;
                    lVar29 = (longlong) L"..\\Logs" - (longlong) psVar16;
                    psVar20 = psVar16;
                    goto LAB_1401a1ff2;
                }
                break;
            }
            psVar16 = psVar16 + 1;
            lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        local_1710 = 0;
        goto LAB_1401a1eed;
    }
    goto LAB_1401a21a6;
    while (true) {
        *psVar20 = sVar4;
        lVar19 = lVar19 + -1;
        psVar16 = psVar20 + 1;
        if (lVar19 == 0) break;
        LAB_1401a1d00:
        psVar20 = psVar16;
        if ((lVar19 == -0x7ffffefa) ||
            (sVar4 = *(short *) ((lVar28 - (longlong) local_1498) + (longlong) psVar20), sVar4 == 0)) {
            if (lVar19 == 0) {
                psVar20 = psVar20 + -1;
            }
            *psVar20 = 0;
            goto LAB_1401a2111;
        }
    }
    *psVar20 = 0;
    goto LAB_1401a2111;
    LAB_1401a1ff2:
    psVar16 = psVar20;
    if ((lVar28 != 0) && (sVar4 = *(short *) (lVar29 + (longlong) psVar16), sVar4 != 0))
        goto code_r0x0001401a2001;
    if (lVar19 == 0) {
        LAB_1401a2021:
        psVar16 = psVar16 + -1;
    }
    *psVar16 = 0;
    goto LAB_1401a1eed;
    code_r0x0001401a2001:
    *psVar16 = sVar4;
    lVar28 = lVar28 + -1;
    lVar19 = lVar19 + -1;
    psVar20 = psVar16 + 1;
    if (lVar19 == 0) goto code_r0x0001401a2010;
    goto LAB_1401a1ff2;
    code_r0x0001401a2010:
    *psVar16 = 0;
    goto LAB_1401a1eed;
    while (true) {
        *psVar20 = sVar4;
        lVar31 = lVar31 + -1;
        psVar16 = psVar20 + 1;
        if (lVar31 == 0) break;
        LAB_1401a2382:
        psVar20 = psVar16;
        if ((lVar31 == -0x7ffffefa) ||
            (sVar4 = *(short *) (lVar28 + -0x140c884b0 + (longlong) psVar20), sVar4 == 0)) {
            if (lVar31 == 0) {
                psVar20 = psVar20 + -1;
            }
            *psVar20 = 0;
            goto LAB_1401a2330;
        }
    }
    *psVar20 = 0;
    goto LAB_1401a2330;
    while (true) {
        *psVar20 = sVar4;
        lVar19 = lVar19 + -1;
        psVar16 = psVar20 + 1;
        if (lVar19 == 0) break;
        LAB_1401a1e62:
        psVar20 = psVar16;
        if ((lVar19 == -0x7ffffefa) ||
            (sVar4 = *(short *) ((lVar28 - (longlong) local_16a8) + (longlong) psVar20), sVar4 == 0)) {
            if (lVar19 == 0) {
                psVar20 = psVar20 + -1;
            }
            *psVar20 = 0;
            goto LAB_1401a1eed;
        }
    }
    *psVar20 = 0;
    LAB_1401a1eed:
    local_1078[0] = 0;
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1efe;
    GetLocalTime(&local_1708);
    if ((DAT_140c674a4 & 0x100) == 0) {
        *(uint * )(&stack0x00000040 + lVar14) = (uint) local_1708.wSecond;
        *(uint * )(&stack0x00000038 + lVar14) = (uint) local_1708.wMinute;
        *(uint * )(&stack0x00000030 + lVar14) = (uint) local_1708.wHour;
        *(uint * )(&stack0x00000028 + lVar14) = (uint) local_1708.wDay;
        *(uint * )(&stack0x00000020 + lVar14) = (uint) local_1708.wMonth;
        *(uint * )(&stack0x00000018 + lVar14) = (uint) local_1708.wYear % 100;
        *(undefined2 * *)(&stack0x00000010 + lVar14) = local_1078;
        *(WCHAR * *)((longlong) & pWStackX8 + lVar14) = local_16c8;
        *(undefined4 * )(&stack0x00000000 + lVar14) = 0x3eaa;
        *(LPWSTR * )(&stack0xfffffffffffffff8 + lVar14) = local_1738;
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2111;
        FUN_14001b370(local_1498, 0x104, L"%s\\%s_%d_%s_%s%0.2u%0.2u%0.2u_%0.2u%0.2u%0.2u.txt", local_16a8);
    } else {
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1f13;
        DVar8 = GetCurrentProcessId();
        *(DWORD * )(&stack0x00000048 + lVar14) = DVar8;
        *(uint * )(&stack0x00000040 + lVar14) = (uint) local_1708.wSecond;
        *(uint * )(&stack0x00000038 + lVar14) = (uint) local_1708.wMinute;
        *(uint * )(&stack0x00000030 + lVar14) = (uint) local_1708.wHour;
        *(uint * )(&stack0x00000028 + lVar14) = (uint) local_1708.wDay;
        *(uint * )(&stack0x00000020 + lVar14) = (uint) local_1708.wMonth;
        if ((DVar8 & 0xffff0000) == 0) {
            *(uint * )(&stack0x00000018 + lVar14) = (uint) local_1708.wYear % 100;
            *(undefined2 * *)(&stack0x00000010 + lVar14) = local_1078;
            *(WCHAR * *)((longlong) & pWStackX8 + lVar14) = local_16c8;
            *(undefined4 * )(&stack0x00000000 + lVar14) = 0x3eaa;
            *(LPWSTR * )(&stack0xfffffffffffffff8 + lVar14) = local_1738;
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a207a;
            FUN_14001b370(local_1498, 0x104, L"%s\\%s_%d_%s_%s%0.2u%0.2u%0.2u_%0.2u%0.2u%0.2u.%04x.txt",
                          local_16a8);
        } else {
            *(uint * )(&stack0x00000018 + lVar14) = (uint) local_1708.wYear % 100;
            *(undefined2 * *)(&stack0x00000010 + lVar14) = local_1078;
            *(WCHAR * *)((longlong) & pWStackX8 + lVar14) = local_16c8;
            *(undefined4 * )(&stack0x00000000 + lVar14) = 0x3eaa;
            *(LPWSTR * )(&stack0xfffffffffffffff8 + lVar14) = local_1738;
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a1fb4;
            FUN_14001b370(local_1498, 0x104, L"%s\\%s_%d_%s_%s%0.2u%0.2u%0.2u_%0.2u%0.2u%0.2u.%08x.txt",
                          local_16a8);
        }
    }
    LAB_1401a2111:
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2122;
    lVar28 = FUN_1407dd8d8(local_1498, 0x5c);
    if (lVar28 != 0) {
        lVar28 = lVar28 - (longlong) local_1498 >> 1;
        uVar26 = lVar28 * 2;
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a214e;
        FUN_1407db590(local_e68, local_1498, uVar26);
        if (0x207 < uVar26) {
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a244e;
            __report_rangecheckfailure();
            pcVar5 = (code *) swi(3);
            (*pcVar5)();
            return;
        }
        local_e68[lVar28] = 0;
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a217d;
        FUN_1401b5020(DAT_140c63788, local_a48);
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a218c;
        Ordinal_165(0, local_a48);
    }
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a219f;
    DAT_140c676c8 = FUN_1407e0734(local_1498, &DAT_1409e2144);
    LAB_1401a21a6:
    uVar26 = 0;
    if ((DAT_140c674a4 & 2) != 0) {
        DAT_140c776f0 = 0x7fff8;
        uVar17 = SUB168(ZEXT816(2) * ZEXT816(0x7fff8), 0);
        if (SUB168(ZEXT816(2) * ZEXT816(0x7fff8) >> 0x40, 0) != 0) {
            uVar17 = 0xffffffffffffffff;
        }
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a21d8;
        DAT_140c776e8 = FUN_14018b280(uVar17, 0);
    }
    if ((DAT_140c674a4 & 4) != 0) {
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a21f8;
        DAT_140c77710 = GetStdHandle(0xfffffff5);
        if (DAT_140c77710 != (HANDLE) 0xffffffffffffffff) {
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2212;
            GetConsoleScreenBufferInfo(DAT_140c77710, &local_16f8);
            _DAT_140c7771c = local_16f8.wAttributes;
            DAT_140c77722 = local_16f8.wAttributes;
            _DAT_140c77720 = (local_16f8.wAttributes ^ 8) & 0xfff8;
            _DAT_140c77718 = _DAT_140c77720 | 4;
            _DAT_140c7771a = _DAT_140c77720 | 6;
            _DAT_140c7771e = _DAT_140c77720 | 3;
        }
    }
    if ((DAT_140c674a4 & 8) != 0) {
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2273;
        DAT_140c77728 = GetStdHandle(0xfffffff4);
        if (DAT_140c77728 != (HANDLE) 0xffffffffffffffff) {
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a228d;
            GetConsoleScreenBufferInfo(DAT_140c77728, &local_16e0);
            _DAT_140c77734 = local_16e0.wAttributes;
            DAT_140c7773a = local_16e0.wAttributes;
            _DAT_140c77738 = (local_16e0.wAttributes ^ 8) & 0xfff8;
            _DAT_140c77730 = _DAT_140c77738 | 4;
            _DAT_140c77732 = _DAT_140c77738 | 6;
            _DAT_140c77736 = _DAT_140c77738 | 3;
        }
    }
    iVar9 = *(int *) (local_1748 + 1);
    if (0 < iVar9) {
        ppuVar24 = (ushort * *) * local_1748;
        uVar22 = uVar26;
        do {
            puVar6 = *ppuVar24;
            uVar1 = *puVar6;
            iVar10 = (int) uVar22;
            if (((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a231b;
                iVar11 = FUN_14018e2c0(puVar6 + 1, L"errDir");
                if (iVar11 == 0) {
                    if ((iVar10 + 1 < iVar9) &&
                        (lVar28 = *(longlong * )(*local_1748 + 8 + (longlong) iVar10 * 8), lVar28 != 0)) {
                        psVar16 = &DAT_140c884b0;
                        goto LAB_1401a2382;
                    }
                    break;
                }
            }
            uVar26 = uVar26 + 1;
            uVar22 = (ulonglong)(iVar10 + 1);
            ppuVar24 = ppuVar24 + 1;
        } while ((longlong) uVar26 < (longlong) iVar9);
    }
    LAB_1401a2330:
    if (plVar7 != (longlong *) 0x0) {
        pcVar5 = *(code * *)(*plVar7 + 8);
        *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a233e;
        (*pcVar5)(plVar7);
    }
    if (DAT_140c67408 < 2) {
        DAT_140c67400 = 0;
        DAT_140c67408 = 0;
        if (DAT_140c67410 != 0) {
            if (DAT_140c67418 == (HANDLE) 0x0) {
                *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a23f6;
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar32 = DAT_140c67418 == (HANDLE) 0x0;
                DAT_140c67418 =
                        (HANDLE)((ulonglong) DAT_140c67418 ^
                                 (ulonglong) bVar32 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                if (!bVar32) {
                    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a240c;
                    CloseHandle(hObject);
                }
            }
            *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2419;
            SetEvent(DAT_140c67418);
        }
    } else {
        DAT_140c67408 = DAT_140c67408 - 1;
    }
    *(undefined8 * )((longlong) & uStack48 + lVar14) = 0x1401a2428;
    FUN_1407db4f0(local_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar14));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a2460(undefined8 param_1, int param_2, ulonglong param_3, undefined8 param_4) {
    undefined2 *puVar1;
    ulonglong *puVar2;
    ushort uVar3;
    WORD WVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    code *pcVar7;
    code *pcVar8;
    BOOL BVar9;
    longlong lVar10;
    wchar_t *pwVar11;
    ulonglong uVar12;
    HANDLE pvVar13;
    ushort *puVar14;
    undefined8 unaff_RBX;
    longlong lVar15;
    byte *lpOutputString;
    code **ppcVar16;
    undefined8 unaff_RSI;
    ulonglong uVar17;
    longlong lVar18;
    int iVar19;
    longlong lVar20;
    undefined8 unaff_R12;
    ushort *puVar21;
    ulonglong uVar22;
    undefined8 unaff_R14;
    longlong lVar23;
    longlong lVar24;
    wchar_t *pwStackX8;
    wchar_t *pwStackX16;
    uint auStackX24[4];
    _SYSTEMTIME local_4060;
    byte local_4048[8192];
    ushort local_2048[18];
    ushort local_2024[4078];
    ulonglong local_48;
    undefined8 uStack40;

    uStack40 = 0x1401a2479;
    lVar10 = FUN_1407f0f60();
    lVar10 = -lVar10;
    local_48 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar10);
    iVar19 = (int) param_3;
    lVar24 = (longlong) iVar19;
    uVar22 = (ulonglong) param_2;
    if (_DAT_140c674a0 == 0) {
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a24ac;
        OutputDebugStringA("WARNING! Log called before CRT startup");
        goto LAB_1401a2b3f;
    }
    *(undefined8 * )(&stack0x000040d0 + lVar10) = unaff_RBX;
    if (0x82 < uVar22) goto LAB_1401a2b3f;
    *(undefined8 * )(&stack0x000040a0 + lVar10) = unaff_RSI;
    *(undefined8 * )(&stack0x00004098 + lVar10) = unaff_R12;
    *(undefined8 * )(&stack0x00000048 + lVar10) = 0xfff;
    *(ushort * *)(&stack0x00000040 + lVar10) = local_2048;
    *(undefined8 * )(&stack0x00004090 + lVar10) = unaff_R14;
    *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a24fd;
    GetLocalTime(&local_4060);
    *(uint * )(&stack0x00000038 + lVar10) = (uint) local_4060.wSecond;
    *(uint * )(&stack0x00000030 + lVar10) = (uint) local_4060.wMinute;
    *(uint * )(&stack0x00000028 + lVar10) = (uint) local_4060.wHour;
    *(uint * )((longlong) auStackX24 + lVar10 + 8) = (uint) local_4060.wYear % 100;
    *(uint * )((longlong) auStackX24 + lVar10) = (uint) local_4060.wDay;
    *(uint * )((longlong) & pwStackX16 + lVar10) = (uint) local_4060.wMonth;
    *(wchar_t **) ((longlong) & pwStackX8 + lVar10) = L"%0.2u/%0.2u/%0.2u %0.2u:%0.2u:%0.2u ";
    *(undefined8 * )((longlong) auStackX24 + (longlong) & DAT_ffffffffffffffe8 + lVar10) = 0;
    *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a257b;
    FUN_1401a3210(local_2048, 0xfff, &stack0x00000040 + lVar10, &stack0x00000048 + lVar10);
    if (-1 < (char) DAT_140c674a4) {
        if (iVar19 + 1U < 6) {
            pwVar11 = (wchar_t *) (&PTR_u_Error_140a44ec8)[lVar24];
        } else {
            pwVar11 = L"Unknown";
        }
        uVar5 = *(undefined8 * )(&stack0x00000048 + lVar10);
        *(wchar_t **) ((longlong) & pwStackX16 + lVar10) = pwVar11;
        uVar6 = *(undefined8 * )(&stack0x00000040 + lVar10);
        *(wchar_t **) ((longlong) & pwStackX8 + lVar10) = L"(%s) ";
        *(undefined8 * )((longlong) auStackX24 + (longlong) & DAT_ffffffffffffffe8 + lVar10) = 0;
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a25d5;
        FUN_1401a3210(uVar6, uVar5, &stack0x00000040 + lVar10, &stack0x00000048 + lVar10);
    }
    if ((DAT_140c674a4 & 0x40) == 0) {
        if (param_2 < 0x83) {
            pwVar11 = (wchar_t *) (&PTR_u_None_140c2ce70)[uVar22];
        } else {
            pwVar11 = L"Unknown";
        }
        uVar5 = *(undefined8 * )(&stack0x00000048 + lVar10);
        uVar6 = *(undefined8 * )(&stack0x00000040 + lVar10);
        *(wchar_t **) ((longlong) & pwStackX16 + lVar10) = pwVar11;
        *(wchar_t **) ((longlong) & pwStackX8 + lVar10) = L"(%s) ";
        *(undefined8 * )((longlong) auStackX24 + (longlong) & DAT_ffffffffffffffe8 + lVar10) = 0;
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a262f;
        FUN_1401a3210(uVar6, uVar5, &stack0x00000040 + lVar10, &stack0x00000048 + lVar10);
    }
    uVar5 = *(undefined8 * )(&stack0x00000048 + lVar10);
    uVar6 = *(undefined8 * )(&stack0x00000040 + lVar10);
    *(undefined8 * )((longlong) & pwStackX16 + lVar10) = param_4;
    *(undefined * *)((longlong) & pwStackX8 + lVar10) = &DAT_1409e3fbc;
    *(undefined8 * )((longlong) auStackX24 + (longlong) & DAT_ffffffffffffffe8 + lVar10) = 0;
    *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a265e;
    FUN_1401a3210(uVar6, uVar5, &stack0x00000040 + lVar10, &stack0x00000048 + lVar10);
    puVar1 = *(undefined2 * *)(&stack0x00000040 + lVar10) + 1;
    **(undefined2 * *)(&stack0x00000040 + lVar10) = 10;
    *puVar1 = 0;
    *(undefined2 * *)(&stack0x00000040 + lVar10) = puVar1;
    puVar21 = local_2048;
    *(byte * *)(&stack0x00000058 + lVar10) = local_4048;
    puVar14 = local_2048;
    lVar23 = (longlong) puVar1 - (longlong) local_2048 >> 1;
    uVar12 = 0;
    for (lVar20 = lVar23; uVar17 = uVar12, lVar20 != 0; lVar20 = lVar20 + -1) {
        uVar3 = *puVar14;
        if (uVar3 < 0x80) {
            if (0x1ffe < uVar12) goto LAB_1401a2b3f;
            local_4048[uVar12] = (byte) uVar3;
            uVar17 = uVar12 + 1;
        } else if (uVar3 < 0x1000) {
            if (0x1ffd < uVar12) goto LAB_1401a2b3f;
            local_4048[uVar12] = (byte)(uVar3 >> 6) | 0xc0;
            uVar17 = uVar12 + 2;
            local_4048[uVar12 + 1] = *(byte *) puVar14 & 0x3f | 0x80;
        } else {
            if (0x1ffc < uVar12) goto LAB_1401a2b3f;
            local_4048[uVar12] = (byte)(uVar3 >> 0xc) | 0xe0;
            local_4048[uVar12 + 1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            uVar17 = uVar12 + 3;
            local_4048[uVar12 + 2] = *(byte *) puVar14 & 0x3f | 0x80;
        }
        if (uVar3 == 0) break;
        puVar14 = puVar14 + 1;
        uVar12 = uVar17;
    }
    if (0x1fff < uVar17) {
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2bb2;
        __report_rangecheckfailure();
        pcVar7 = (code *) swi(3);
        (*pcVar7)();
        return;
    }
    local_4048[uVar17] = 0;
    *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2775;
    FUN_14003d8f0(&stack0x00000050 + lVar10, &DAT_140c67400);
    if (((DAT_140c674a4 & 1) != 0) && (DAT_140c676c8 != (FILE *) 0x0)) {
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a279c;
        FUN_1407e1088(local_4048, uVar17, 1);
        if ((DAT_140c674a4 & 0x10) != 0) {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a27b1;
            fflush(DAT_140c676c8);
        }
    }
    if (DAT_140c776d0 < 0x8000) {
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a27df;
        FUN_1407db590(&DAT_140c676d0 + DAT_140c776d8, local_4048, uVar17);
        DAT_140c776d0 = DAT_140c776d8 + uVar17;
        DAT_140c776d8 = DAT_140c776d0;
        DAT_140c776e0 = DAT_140c776d0;
    } else if (uVar17 + DAT_140c776d8 < 0x10001) {
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2828;
        FUN_1407db590(&DAT_140c676d0 + DAT_140c776d8, local_4048, uVar17);
        DAT_140c776d8 = DAT_140c776d8 + uVar17;
        if (DAT_140c776e0 < DAT_140c776d8) {
            DAT_140c776e0 = DAT_140c776d8;
        }
    } else {
        lVar20 = -DAT_140c776d8;
        lVar15 = lVar20 + 0x10000;
        lVar18 = uVar17 - lVar15;
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2872;
        FUN_1407db590(&DAT_140c676d0 + DAT_140c776d8, local_4048, lVar15);
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2896;
        FUN_1407db590(&DAT_140c676d0 + DAT_140c776d0, &stack0x0000bfb8 + lVar20, lVar18);
        DAT_140c776e0 = 0x10000;
        DAT_140c776d8 = DAT_140c776d0 + lVar18;
    }
    lpOutputString = local_4048;
    if ((DAT_140c674a4 & 0x20) == 0) {
        lpOutputString = local_4048 + 0x12;
        lVar23 = lVar23 + -0x12;
        uVar17 = uVar17 - 0x12;
        *(byte * *)(&stack0x00000058 + lVar10) = lpOutputString;
        puVar21 = local_2024;
    }
    if (((DAT_140c674a4 & 2) != 0) && (DAT_140c776e8 != 0)) {
        if (DAT_140c776f0 < DAT_140c776f8 + lVar23) {
            lVar20 = DAT_140c776f0 - DAT_140c776f8;
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2956;
            FUN_1407db590(DAT_140c776e8 + DAT_140c776f8 * 2, puVar21, lVar20 * 2);
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a296a;
            FUN_1407db590(DAT_140c776e8, puVar21 + lVar20, (lVar23 - lVar20) * 2);
            uVar12 = DAT_140c776f0;
            DAT_140c776f8 = lVar23 - lVar20;
            LAB_1401a2978:
            _DAT_140c77700 = uVar12;
        } else {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2922;
            FUN_1407db590(DAT_140c776e8 + DAT_140c776f8 * 2, puVar21, lVar23 * 2);
            uVar12 = DAT_140c776f8 + lVar23;
            DAT_140c776f8 = uVar12;
            if (_DAT_140c77700 < uVar12) goto LAB_1401a2978;
        }
        lpOutputString = *(byte * *)(&stack0x00000058 + lVar10);
        if (iVar19 < DAT_140c77708) {
            DAT_140c77708 = iVar19;
        }
    }
    if ((DAT_140c674a4 & 4) != 0) {
        if ((DAT_140c77710 == (HANDLE) 0xffffffffffffffff) ||
            (WVar4 = *(WORD * )(&DAT_140c77718 + lVar24 * 2), WVar4 == DAT_140c77722)) {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a29ff;
            lVar20 = FUN_1407ddfa0();
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a14;
            FUN_1407e1088(lpOutputString, uVar17, 1, lVar20 + 0x30);
        } else {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a29ca;
            SetConsoleTextAttribute(DAT_140c77710, WVar4);
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a29cf;
            lVar20 = FUN_1407ddfa0();
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a29e4;
            FUN_1407e1088(lpOutputString, uVar17, 1, lVar20 + 0x30);
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a29f8;
            SetConsoleTextAttribute(DAT_140c77710, DAT_140c77722);
        }
        if ((DAT_140c674a4 & 0x10) != 0) {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a23;
            lVar20 = FUN_1407ddfa0();
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a2c;
            fflush((FILE * )(lVar20 + 0x30));
        }
    }
    if ((DAT_140c674a4 & 8) != 0) {
        if ((DAT_140c77728 == (HANDLE) 0xffffffffffffffff) ||
            (WVar4 = *(WORD * )(&DAT_140c77730 + lVar24 * 2), WVar4 == DAT_140c7773a)) {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a94;
            lVar24 = FUN_1407ddfa0();
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2aa9;
            FUN_1407e1088(lpOutputString, uVar17, 1, lVar24 + 0x60);
        } else {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a5f;
            SetConsoleTextAttribute(DAT_140c77728, WVar4);
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a64;
            lVar24 = FUN_1407ddfa0();
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a79;
            FUN_1407e1088(lpOutputString, uVar17, 1, lVar24 + 0x60);
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2a8d;
            SetConsoleTextAttribute(DAT_140c77728, DAT_140c7773a);
        }
        if ((DAT_140c674a4 & 0x10) != 0) {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2ab7;
            lVar24 = FUN_1407ddfa0();
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2ac0;
            fflush((FILE * )(lVar24 + 0x60));
        }
    }
    if (_DAT_140c63734 == 0) {
        *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2acf;
        BVar9 = IsDebuggerPresent();
        if (BVar9 != 0) {
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2adc;
            OutputDebugStringA((LPCSTR) lpOutputString);
        }
    }
    ppcVar16 = DAT_140c77748;
    if (DAT_140c77748 != DAT_140c77750) {
        do {
            pcVar7 = ppcVar16[1];
            pcVar8 = *ppcVar16;
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2aff;
            (*pcVar8)(uVar22 & 0xffffffff, param_3 & 0xffffffff, puVar21, pcVar7);
            ppcVar16 = ppcVar16 + 2;
        } while (ppcVar16 != DAT_140c77750);
    }
    lVar24 = *(longlong * )(&stack0x00000050 + lVar10);
    if (*(ulonglong * )(lVar24 + 8) < 2) {
        **(undefined4 * *)(&stack0x00000050 + lVar10) = 0;
        *(undefined8 * )(lVar24 + 8) = 0;
        if (*(longlong * )(lVar24 + 0x10) != 0) {
            if (*(longlong * )(lVar24 + 0x18) == 0) {
                *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2b8b;
                pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar24 + 0x18);
                uVar22 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar22 == 0) * (*puVar2 ^ (ulonglong) pvVar13);
                if (uVar22 != 0) {
                    *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2b9e;
                    CloseHandle(pvVar13);
                }
            }
            pvVar13 = *(HANDLE * )(lVar24 + 0x18);
            *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2ba8;
            SetEvent(pvVar13);
        }
    } else {
        *(longlong * )(lVar24 + 8) = *(longlong * )(lVar24 + 8) + -1;
    }
    LAB_1401a2b3f:
    *(undefined8 * )((longlong) & uStack40 + lVar10) = 0x1401a2b4e;
    FUN_1407db4f0(local_48 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar10));
    return;
}


void FUN_1401a2bc0(ushort *param_1) {
    ulonglong *puVar1;
    ushort uVar2;
    ulonglong uVar3;
    FILE *_File;
    ulonglong uVar4;
    HANDLE hObject;
    longlong lVar5;
    undefined auStack344[32];
    undefined4 *local_138;
    byte local_128[272];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack344;
    FUN_14003d8f0();
    lVar5 = -1;
    uVar4 = 0;
    if (param_1 == (ushort *) 0x0) goto LAB_1401a2dc7;
    do {
        uVar2 = *param_1;
        if (uVar2 < 0x80) {
            if (0x103 < uVar4) goto LAB_1401a2dc7;
            local_128[uVar4] = (byte) uVar2;
            uVar3 = uVar4 + 1;
        } else if (uVar2 < 0x1000) {
            if (0x102 < uVar4) goto LAB_1401a2dc7;
            local_128[uVar4] = (byte)(uVar2 >> 6) | 0xc0;
            uVar3 = uVar4 + 2;
            local_128[uVar4 + 1] = *(byte *) param_1 & 0x3f | 0x80;
        } else {
            if (0x101 < uVar4) goto LAB_1401a2dc7;
            local_128[uVar4] = (byte)(uVar2 >> 0xc) | 0xe0;
            local_128[uVar4 + 1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
            uVar3 = uVar4 + 3;
            local_128[uVar4 + 2] = *(byte *) param_1 & 0x3f | 0x80;
        }
        if (uVar2 == 0) break;
        param_1 = param_1 + 1;
        lVar5 = lVar5 + -1;
        uVar4 = uVar3;
    } while (lVar5 != 0);
    _File = (FILE *) FUN_1407e13f0(local_128, &DAT_1409e215c);
    if (_File == (FILE *) 0x0) goto LAB_1401a2dc7;
    FUN_1407e1088(&DAT_140c676d0, DAT_140c776d0, 1, _File);
    if (DAT_140c776d0 < DAT_140c776e0) {
        FUN_1407e1088("\n...\n\n", 6, 1, _File);
        for (uVar4 = DAT_140c776d8; uVar4 < DAT_140c776e0; uVar4 = uVar4 + 1) {
            if ((&DAT_140c676d0)[uVar4] == '\n') goto joined_r0x0001401a2d57;
        }
        goto LAB_1401a2d72;
    }
    goto LAB_1401a2dbf;
    joined_r0x0001401a2d57:
    for (; (uVar4 < DAT_140c776e0 && ((&DAT_140c676d0)[uVar4] == '\n')); uVar4 = uVar4 + 1) {
    }
    LAB_1401a2d72:
    FUN_1407e1088(&DAT_140c676d0 + uVar4, DAT_140c776e0 - uVar4, 1, _File);
    FUN_1407e1088(&DAT_140c676d0 + DAT_140c776d0, DAT_140c776d8 - DAT_140c776d0, 1, _File);
    LAB_1401a2dbf:
    fclose(_File);
    LAB_1401a2dc7:
    if (*(ulonglong * )(local_138 + 2) < 2) {
        *local_138 = 0;
        *(undefined8 * )(local_138 + 2) = 0;
        if (*(longlong * )(local_138 + 4) != 0) {
            if (*(longlong * )(local_138 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(local_138 + 6);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(local_138 + 6));
        }
    } else {
        *(longlong * )(local_138 + 2) = *(longlong * )(local_138 + 2) + -1;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack344);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a2e50(uint param_1, ulonglong param_2) {
    byte *pbVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte bVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    byte *pbVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined *puVar12;
    longlong lVar13;
    longlong lVar14;
    ushort uVar15;
    undefined8 uStack56;

    uStack56 = 0x1401a2e67;
    lVar8 = FUN_1407f0f60();
    lVar8 = -lVar8;
    pbVar3 = &stack0xfffffffffffffff0 + lVar8;
    *(ulonglong * )(&stack0x00000ff0 + lVar8) = DAT_140c0f7b0 ^ (ulonglong) pbVar3;
    puVar12 = &stack0xffffffffffffffd0 + lVar8;
    if ((int) param_2 < 0) goto LAB_1401a310b;
    uVar11 = 0xffffffffffffffff;
    if (_DAT_140c674a0 == 0) {
        *(undefined8 * )((longlong) & uStack56 + lVar8) = 0x1401a2eab;
        OutputDebugStringA("WARNING! Log called before CRT startup");
        LAB_1401a2eab:
        iVar6 = -1;
    } else {
        if (0x82 < param_1) goto LAB_1401a2eab;
        iVar6 = *(int *) ((longlong) & DAT_140c674a8 + (longlong)(int)
        param_1 * 4);
    }
    puVar12 = &stack0xffffffffffffffd0 + lVar8;
    if ((int) (param_2 & 0xffffffff) <= iVar6) {
        *(undefined8 * )((longlong) & uStack56 + lVar8) = 0x1401a2ed5;
        uVar7 = FUN_1407df5fc(pbVar3, 0xfff);
        if ((((int) uVar7 < 0) || (0xfff < uVar7)) || (uVar7 == 0xfff)) {
            (&stack0x00000fef)[lVar8] = 0;
        }
        lVar13 = 0;
        uVar10 = 0xffffffffffffffff;
        pbVar9 = pbVar3;
        lVar14 = lVar13;
        do {
            bVar4 = *pbVar9;
            if ((char) bVar4 < '\0') {
                if (((1 < uVar10) && ((bVar4 & 0xe0) == 0xc0)) &&
                    (pbVar1 = pbVar9 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                    pbVar9 = pbVar9 + 2;
                    uVar15 = (short) (char) (bVar4 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar10 = uVar10 - 2;
                    goto LAB_1401a2fc2;
                }
                if (((2 < uVar10) && ((bVar4 & 0xf0) == 0xe0)) &&
                    ((pbVar1 = pbVar9 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                           (pbVar2 = pbVar9 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                    pbVar9 = pbVar9 + 3;
                    uVar15 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar4 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar10 = uVar10 - 3;
                    goto LAB_1401a2fc2;
                }
                pbVar9 = pbVar9 + 1;
                uVar10 = uVar10 - 1;
            } else {
                pbVar9 = pbVar9 + 1;
                uVar15 = (ushort)(char)
                bVar4;
                uVar10 = uVar10 - 1;
                LAB_1401a2fc2:
                lVar14 = lVar14 + 1;
                if (uVar15 == 0) break;
            }
        } while (uVar10 != 0);
        uVar10 = lVar14 * 2 + 0xf;
        if (uVar10 <= (ulonglong)(lVar14 * 2)) {
            uVar10 = 0xffffffffffffff0;
        }
        uVar10 = uVar10 & 0xfffffffffffffff0;
        *(undefined8 * )((longlong) & uStack56 + lVar8) = 0x1401a2fff;
        FUN_1407f0f60();
        lVar5 = -uVar10;
        puVar12 = &stack0xfffffffffffffff0 + lVar5 + lVar8;
        pbVar9 = pbVar3;
        if ((puVar12 != (undefined *) 0x0) || (lVar14 == 0)) {
            do {
                bVar4 = *pbVar9;
                if ((char) bVar4 < '\0') {
                    if (((1 < uVar11) && ((bVar4 & 0xe0) == 0xc0)) &&
                        (pbVar1 = pbVar9 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                        pbVar9 = pbVar9 + 2;
                        uVar15 = (short) (char) (bVar4 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                        uVar11 = uVar11 - 2;
                        goto LAB_1401a30cc;
                    }
                    if (((2 < uVar11) && ((bVar4 & 0xf0) == 0xe0)) &&
                        ((pbVar1 = pbVar9 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                               (pbVar2 = pbVar9 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                        pbVar9 = pbVar9 + 3;
                        uVar15 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar4 << 6) << 6 |
                                 (short) (char) (*pbVar2 & 0x3f);
                        uVar11 = uVar11 - 3;
                        goto LAB_1401a30cc;
                    }
                    pbVar9 = pbVar9 + 1;
                    uVar11 = uVar11 - 1;
                } else {
                    pbVar9 = pbVar9 + 1;
                    uVar15 = (ushort)(char)
                    bVar4;
                    uVar11 = uVar11 - 1;
                    LAB_1401a30cc:
                    if (lVar14 != 0) {
                        if (lVar13 == lVar14) break;
                        *(ushort * )(puVar12 + lVar13 * 2) = uVar15;
                    }
                    lVar13 = lVar13 + 1;
                    if (uVar15 == 0) break;
                }
            } while (uVar11 != 0);
        }
        *(undefined8 * )((longlong) & uStack56 + lVar5 + lVar8) = 0x1401a3102;
        FUN_1401a2460(pbVar9, (longlong)(int)
        param_1 & 0xffffffff, param_2 & 0xffffffff, puVar12);
        puVar12 = &stack0xffffffffffffffd0 + lVar5 + lVar8;
    }
    LAB_1401a310b:
    uVar11 = *(ulonglong * )(&stack0x00000ff0 + lVar8);
    *(undefined8 * )(puVar12 + -8) = 0x1401a311a;
    FUN_1407db4f0(uVar11 ^ (ulonglong) pbVar3);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a3130(uint param_1, int param_2, longlong *param_3, undefined8 param_4) {
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    undefined auStackX8[24];
    undefined8 local_res20;
    undefined8 uStack32;

    uStack32 = 0x1401a3142;
    local_res20 = param_4;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00002008 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe8 + lVar4);
    if (param_2 < 0) goto LAB_1401a31eb;
    if (_DAT_140c674a0 == 0) {
        *(undefined8 * )((longlong) & uStack32 + lVar4) = 0x1401a317d;
        OutputDebugStringA("WARNING! Log called before CRT startup");
        LAB_1401a317d:
        iVar2 = -1;
    } else {
        if (0x82 < param_1) goto LAB_1401a317d;
        iVar2 = *(int *) ((longlong) & DAT_140c674a8 + (longlong)(int)
        param_1 * 4);
    }
    if (param_2 <= iVar2) {
        lVar1 = *param_3;
        *(undefined8 * )((longlong) & uStack32 + lVar4) = 0x1401a31a5;
        uVar3 = FUN_1407dda14(auStackX8 + lVar4, 0xfff, lVar1 + -0x12fa640, &stack0x00002050 + lVar4);
        if ((((int) uVar3 < 0) || (0xfff < uVar3)) || (uVar3 == 0xfff)) {
            *(undefined2 * )(&stack0x00002006 + lVar4) = 0;
        }
        *(undefined8 * )((longlong) & uStack32 + lVar4) = 0x1401a31ce;
        FUN_1401a2460();
    }
    LAB_1401a31eb:
    *(undefined8 * )((longlong) & uStack32 + lVar4) = 0x1401a31fb;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00002008 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe8 + lVar4));
    return;
}


int FUN_1401a3210(undefined2 *param_1, ulonglong param_2, undefined8 *param_3, ulonglong *param_4,
                  uint param_5, short *param_6) {
    int iVar1;
    ulonglong uVar2;
    int iVar3;
    short *psVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined2 *puVar7;
    undefined2 *puVar8;

    iVar3 = 0;
    iVar1 = 0;
    if ((param_5 & 0x100) == 0) {
        if (0x7ffffffe < param_2 - 1) {
            iVar1 = -0x7ff8ffa9;
        }
    } else if (((param_1 == (undefined2 *) 0x0) && (param_2 != 0)) || (0x7fffffff < param_2)) {
        iVar1 = -0x7ff8ffa9;
    }
    if (iVar1 < 0) {
        if (param_2 == 0) {
            return iVar1;
        }
        *param_1 = 0;
        return iVar1;
    }
    psVar4 = param_6;
    if (((param_5 & 0x100) != 0) && (psVar4 = (short *) &DAT_1409e218c, param_6 != (short *) 0x0)) {
        psVar4 = param_6;
    }
    uVar6 = param_2;
    puVar8 = param_1;
    if ((param_5 & 0xffffe000) == 0) {
        if (param_2 == 0) {
            if (*psVar4 == 0) goto LAB_1401a3408;
            iVar3 = -0x7ff8ff86;
            if (param_1 == (undefined2 *) 0x0) {
                iVar3 = -0x7ff8ffa9;
            }
        } else {
            uVar6 = param_2 - 1;
            iVar1 = FUN_1407dda14(param_1, uVar6, psVar4, &stack0x00000038);
            if (iVar1 < 0) {
                LAB_1401a33c4:
                iVar3 = -0x7ff8ff86;
                LAB_1401a33c9:
                param_1[uVar6] = 0;
                uVar2 = uVar6;
            } else {
                uVar2 = (ulonglong) iVar1;
                if (uVar6 < uVar2) goto LAB_1401a33c4;
                if (uVar2 == uVar6) goto LAB_1401a33c9;
            }
            uVar6 = param_2 - uVar2;
            puVar8 = param_1 + uVar2;
            if (-1 < iVar3) {
                if ((((param_5 >> 9 & 1) != 0) && (1 < uVar6)) && (2 < uVar6 * 2)) {
                    FUN_1407e4830(puVar8 + 1, param_5 & 0xff, uVar6 * 2 - 2);
                }
                goto LAB_1401a3408;
            }
        }
    } else {
        iVar3 = -0x7ff8ffa9;
        if (param_2 != 0) {
            *param_1 = 0;
            iVar3 = -0x7ff8ffa9;
        }
    }
    if (((param_5 & 0x1c00) != 0) && (param_2 != 0)) {
        uVar2 = param_2 & 0x7fffffffffffffff;
        if ((uVar2 != 0) && ((param_5 >> 0xc & 1) != 0)) {
            *param_1 = 0;
            uVar6 = uVar2;
            puVar8 = param_1;
        }
        uVar5 = uVar6;
        puVar7 = puVar8;
        if (((param_5 >> 10 & 1) != 0) &&
            (FUN_1407e4830(param_1, param_5 & 0xff), uVar5 = uVar2, puVar7 = param_1,
                    (char) param_5 != '\0')) {
            if (uVar2 == 0) goto LAB_1401a333b;
            param_1[param_2 - 1] = 0;
            uVar5 = 1;
            puVar7 = param_1 + (param_2 - 1);
        }
        uVar6 = uVar5;
        puVar8 = puVar7;
        if ((uVar2 != 0) && ((param_5 >> 0xb & 1) != 0)) {
            *param_1 = 0;
            uVar6 = uVar2;
            puVar8 = param_1;
        }
    }
    LAB_1401a333b:
    if (((iVar3 + 0x80000000U & 0x80000000) == 0) && (iVar3 != -0x7ff8ff86)) {
        return iVar3;
    }
    LAB_1401a3408:
    if (param_3 != (undefined8 *) 0x0) {
        *param_3 = puVar8;
    }
    if (param_4 != (ulonglong *) 0x0) {
        *param_4 = uVar6;
    }
    return iVar3;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a3470(void) {
    undefined2 uVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    undefined2 *puVar5;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    undefined4 extraout_XMM0_Da_03;
    undefined4 extraout_XMM0_Da_04;
    undefined4 extraout_XMM0_Da_05;
    undefined4 extraout_XMM0_Da_06;
    undefined4 extraout_XMM0_Da_07;
    undefined4 extraout_XMM0_Da_08;
    undefined4 extraout_XMM0_Da_09;
    undefined4 extraout_XMM0_Da_10;
    undefined4 extraout_XMM0_Da_11;
    undefined4 extraout_XMM0_Da_12;
    undefined4 extraout_XMM0_Da_13;
    undefined4 extraout_XMM0_Da_14;
    undefined4 extraout_XMM0_Da_15;
    undefined4 extraout_XMM0_Da_16;
    undefined4 extraout_XMM0_Da_17;
    undefined4 extraout_XMM0_Da_18;
    undefined4 extraout_XMM0_Da_19;
    undefined4 extraout_XMM0_Da_20;
    undefined4 extraout_XMM0_Da_21;
    undefined4 extraout_XMM0_Da_22;
    undefined4 uVar6;
    undefined4 uVar7;
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
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    uint uVar26;
    ulonglong local_res8;
    undefined local_res10[8];
    undefined4 local_res18[2];
    undefined4 local_res20;

    if ((DAT_140c8e120 & 1) == 0) {
        DAT_140c8e120 = DAT_140c8e120 | 1;
        DAT_140c8e124 = 0x7f800000;
    }
    uVar18 = 0x3f800000;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar14 = 0;
    uVar15 = 0x3f800000;
    uVar16 = 0;
    uVar17 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    _DAT_140c78520 = 0x3f800000;
    uRam0000000140c78524 = 0;
    uRam0000000140c78528 = 0;
    uRam0000000140c7852c = 0;
    _DAT_140c78530 = 0;
    uRam0000000140c78534 = 0x3f800000;
    uRam0000000140c78538 = 0;
    uRam0000000140c7853c = 0;
    _DAT_140c77760 = 0;
    DAT_140c77768._0_4_ = 1;
    DAT_140c67480 = 0;
    _DAT_140c67488 = 0x3f8000003f800000;
    local_res8 = 0x3f80000000000000;
    _DAT_140c67490 = 0x3f800000;
    DAT_140c77768._4_4_ = 1;
    _DAT_140c77770 = 1;
    _DAT_140c77778 = 0;
    DAT_140c67498 = 0x3f80000000000000;
    _DAT_140c7777c = 1;
    uVar26 = DAT_140c8e124;
    puVar2 = (undefined2 *) FUN_1401c96d0(0x3f800000, 0);
    local_res8._0_4_ = CONCAT22(*puVar2, *puVar2);
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
    local_res8;
    _DAT_140c7779c = (uint) local_res8;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da, extraout_XMM0_Da);
    local_res8._0_4_ = CONCAT22(*puVar2, *puVar2);
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
    local_res8;
    _DAT_140c777ac = (uint) local_res8;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_00, uVar22, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_01, extraout_XMM0_Da_01);
    local_res18[0] = CONCAT22(*puVar2, *puVar3);
    _DAT_140c777bc = local_res18[0];
    puVar2 = (undefined2 *) FUN_1401c96d0(&local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_02, uVar22);
    local_res18[0] = CONCAT22(*puVar2, *puVar3);
    _DAT_140c777cc = local_res18[0];
    _DAT_140c796f0 = 0x8080;
    _DAT_140c796f4 = 0xffff;
    local_res8 = local_res8 & 0xffffffffffff0000 | 0xff80;
    _DAT_140c796f8 = 0x80ff;
    _DAT_140c796fc = 0xff80;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0x3f800000;
    uVar9 = 0;
    _DAT_140c77780 = 0;
    DAT_140c77788 = 0;
    _DAT_140c77790 = 1;
    _DAT_140c77794 = 1;
    _DAT_140c77798 = 1;
    _DAT_140c77880 = 0;
    uRam0000000140c77884 = 0;
    uRam0000000140c77888 = 0x3f800000;
    uRam0000000140c7788c = 0;
    _DAT_140c777a0 = 1;
    _DAT_140c777a8 = 0;
    _DAT_140c777b0 = 0;
    _DAT_140c777b4 = 1;
    _DAT_140c777c0 = 0;
    _DAT_140c777c8 = 1;
    _DAT_140c77860 = uVar18;
    uRam0000000140c77864 = uVar19;
    uRam0000000140c77868 = uVar20;
    uRam0000000140c7786c = uVar21;
    _DAT_140c77870 = uVar14;
    uRam0000000140c77874 = uVar15;
    uRam0000000140c77878 = uVar16;
    uRam0000000140c7787c = uVar17;
    DAT_140c79700 = uVar22;
    DAT_140c79704 = uVar22;
    DAT_140c79708 = uVar22;
    DAT_140c79710 = extraout_XMM0_Da_03;
    DAT_140c79714 = extraout_XMM0_Da_03;
    DAT_140c79718 = extraout_XMM0_Da_03;
    _DAT_140c79720 = extraout_XMM0_Da_03;
    _DAT_140c79724 = uVar22;
    _DAT_140c79728 = uVar22;
    _DAT_140c79730 = uVar22;
    _DAT_140c79734 = extraout_XMM0_Da_03;
    _DAT_140c79738 = uVar22;
    _DAT_140c79740 = uVar22;
    _DAT_140c79744 = uVar22;
    _DAT_140c79748 = extraout_XMM0_Da_03;
    puVar2 = (undefined2 *) FUN_1401c96d0();
    DAT_140c79750 = *puVar2;
    local_res8._0_4_ = CONCAT22(DAT_140c79750, DAT_140c79750);
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
    local_res8;
    DAT_140c7974c = (uint) local_res8;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_04, extraout_XMM0_Da_04);
    _DAT_140c79758 = *puVar2;
    local_res8._0_4_ = CONCAT22(_DAT_140c79758, _DAT_140c79758);
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
    local_res8;
    _DAT_140c79754 = (uint) local_res8;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_05, uVar22, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_06, extraout_XMM0_Da_06);
    local_res20 = CONCAT22(*puVar3, *puVar4);
    _DAT_140c79760 = *puVar2;
    _DAT_140c7975c = local_res20;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_07, uVar22, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_08, extraout_XMM0_Da_08, local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_09, uVar22);
    local_res20 = CONCAT22(*puVar3, *puVar4);
    _DAT_140c79768 = *puVar2;
    _DAT_140c79764 = local_res20;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_10, extraout_XMM0_Da_10, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_11, uVar22, local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0();
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0x3f800000;
    local_res20 = CONCAT22(*puVar3, *puVar4);
    _DAT_140c79770 = *puVar2;
    _DAT_140c7976c = local_res20;
    _DAT_140c78440 = 0;
    uRam0000000140c78444 = 0;
    uRam0000000140c78448 = 0;
    uRam0000000140c7844c = 0x3f800000;
    _DAT_140c7970c = 0x8080;
    _DAT_140c7971c = 0xffff;
    _DAT_140c7972c = 0x80ff;
    local_res8 = CONCAT62((int6)(local_res8 >> 0x10), 0x8080);
    _DAT_140c7973c = 0xff80;
    DAT_140c7970e = 0x80;
    DAT_140c7971e = 0xff;
    _DAT_140c79774 = 0x8080;
    DAT_140c7972e = 0x80;
    DAT_140c7973e = 0x80;
    DAT_140c79776 = 0xff;
    _DAT_140c79778 = 0;
    _DAT_140c79780 = 0;
    _DAT_140c79788 = 1;
    _DAT_140c7978c = 1;
    _DAT_140c79790 = 1;
    _DAT_140c79794 = 1;
    _DAT_140c79798 = 1;
    _DAT_140c797a0 = 0;
    _DAT_140c797a8 = 0;
    _DAT_140c797ac = 1;
    _DAT_140c797b4 = 0;
    _DAT_140c797b8 = 0;
    _DAT_140c797c0 = 1;
    _DAT_140c797c8 = 0;
    _DAT_140c797d0 = 0;
    _DAT_140c797d4 = 1;
    _DAT_140c78410 = uVar18;
    uRam0000000140c78414 = uVar19;
    uRam0000000140c78418 = uVar20;
    uRam0000000140c7841c = uVar21;
    _DAT_140c78420 = uVar14;
    uRam0000000140c78424 = uVar15;
    uRam0000000140c78428 = uVar16;
    uRam0000000140c7842c = uVar17;
    _DAT_140c78430 = uVar6;
    uRam0000000140c78434 = uVar7;
    uRam0000000140c78438 = uVar8;
    uRam0000000140c7843c = uVar9;
    _DAT_140c797d8 = uVar22;
    _DAT_140c797dc = uVar22;
    _DAT_140c797e0 = uVar22;
    _DAT_140c797e4 = uVar22;
    _DAT_140c797e8 = extraout_XMM0_Da_12;
    _DAT_140c797ec = extraout_XMM0_Da_12;
    _DAT_140c797f0 = extraout_XMM0_Da_12;
    _DAT_140c797f4 = extraout_XMM0_Da_12;
    _DAT_140c797f8 = extraout_XMM0_Da_12;
    _DAT_140c797fc = uVar22;
    _DAT_140c79800 = uVar22;
    _DAT_140c79804 = uVar22;
    _DAT_140c79808 = uVar22;
    _DAT_140c7980c = extraout_XMM0_Da_12;
    _DAT_140c79810 = uVar22;
    _DAT_140c79814 = uVar22;
    _DAT_140c79818 = uVar22;
    _DAT_140c7981c = uVar22;
    _DAT_140c79820 = extraout_XMM0_Da_12;
    _DAT_140c79824 = uVar22;
    _DAT_140c79828 = uVar22;
    _DAT_140c7982c = uVar22;
    _DAT_140c79830 = uVar22;
    _DAT_140c79834 = extraout_XMM0_Da_12;
    puVar2 = (undefined2 *) FUN_1401c96d0();
    uVar1 = *puVar2;
    local_res8._0_4_ = CONCAT22(uVar1, uVar1);
    local_res8._0_6_ = CONCAT24(uVar1, (uint) local_res8);
    local_res8 = CONCAT26(uVar1, (undefined6) local_res8);
    _DAT_140c79838 = local_res8;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_13, extraout_XMM0_Da_13);
    uVar1 = *puVar2;
    local_res8._0_4_ = CONCAT22(uVar1, uVar1);
    local_res8._0_6_ = CONCAT24(uVar1, (uint) local_res8);
    local_res8 = CONCAT26(uVar1, (undefined6) local_res8);
    _DAT_140c79840 = local_res8;
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_14, uVar22, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0(local_res18);
    puVar5 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_15, extraout_XMM0_Da_15);
    _DAT_140c79848 = CONCAT26(*puVar2, CONCAT24(*puVar3, CONCAT22(*puVar4, *puVar5)));
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_16, uVar22, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_17, extraout_XMM0_Da_17, local_res18);
    puVar5 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_18, uVar22);
    _DAT_140c79850 = CONCAT26(*puVar2, CONCAT24(*puVar3, CONCAT22(*puVar4, *puVar5)));
    puVar2 = (undefined2 *) FUN_1401c96d0(&local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_19, extraout_XMM0_Da_19, local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_20, uVar22, local_res18);
    puVar5 = (undefined2 *) FUN_1401c96d0();
    _DAT_140c79858 = CONCAT26(*puVar2, CONCAT24(*puVar3, CONCAT22(*puVar4, *puVar5)));
    puVar2 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_21, extraout_XMM0_Da_21, &local_res8);
    puVar3 = (undefined2 *) FUN_1401c96d0(extraout_XMM0_Da_22, uVar22, local_res10);
    puVar4 = (undefined2 *) FUN_1401c96d0(local_res18);
    puVar5 = (undefined2 *) FUN_1401c96d0();
    _DAT_140c78510 = uVar26 ^ 0x80000000;
    local_res8 = CONCAT44(uVar26, uVar26) ^ 0x8000000000000000;
    _DAT_140c777d0 = uVar10;
    uRam0000000140c777d4 = uVar11;
    uRam0000000140c777d8 = uVar12;
    uRam0000000140c777dc = uVar13;
    _DAT_140c777e0 = 0x3e800000;
    uRam0000000140c777e4 = 0x3e800000;
    uRam0000000140c777e8 = 0x3e800000;
    uRam0000000140c777ec = 0x3f800000;
    _DAT_140c777f0 = 0x3f000000;
    uRam0000000140c777f4 = 0x3f000000;
    uRam0000000140c777f8 = 0x3f000000;
    uRam0000000140c777fc = 0x3f800000;
    _DAT_140c77800 = 0x3f400000;
    uRam0000000140c77804 = 0x3f400000;
    uRam0000000140c77808 = 0x3f400000;
    uRam0000000140c7780c = 0x3f800000;
    _DAT_140c77810 = 0x3f800000;
    uRam0000000140c77814 = 0;
    uRam0000000140c77818 = 0;
    uRam0000000140c7781c = 0x3f800000;
    _DAT_140c77820 = 0;
    uRam0000000140c77824 = 0x3f800000;
    uRam0000000140c77828 = 0;
    uRam0000000140c7782c = 0x3f800000;
    _DAT_140c77830 = 0;
    uRam0000000140c77834 = 0;
    uRam0000000140c77838 = 0x3f800000;
    uRam0000000140c7783c = 0x3f800000;
    _DAT_140c78270 = 0;
    uRam0000000140c78274 = 0;
    uRam0000000140c78278 = 0;
    uRam0000000140c7827c = 0;
    _DAT_140c78280 = 0;
    uRam0000000140c78284 = 0;
    uRam0000000140c78288 = 0;
    uRam0000000140c7828c = 0;
    DAT_140c78290 = 0;
    _DAT_140c782a0 = 0;
    uRam0000000140c782a4 = 0;
    uRam0000000140c782a8 = 0;
    uRam0000000140c782ac = 0;
    _DAT_140c782b0 = 0;
    uRam0000000140c782b4 = 0;
    uRam0000000140c782b8 = 0;
    uRam0000000140c782bc = 0;
    DAT_140c782c0 = 0;
    _DAT_140c782d0 = 0;
    uRam0000000140c782d4 = 0;
    uRam0000000140c782d8 = 0;
    uRam0000000140c782dc = 0;
    _DAT_140c782e0 = 0;
    uRam0000000140c782e4 = 0;
    uRam0000000140c782e8 = 0;
    uRam0000000140c782ec = 0;
    DAT_140c782f0 = 0;
    _DAT_140c78300 = 0x4062dfc5;
    uRam0000000140c78304 = 0;
    uRam0000000140c78308 = 0;
    uRam0000000140c7830c = 0;
    _DAT_140c78310 = 0;
    uRam0000000140c78314 = 0;
    uRam0000000140c78318 = 0;
    uRam0000000140c7831c = 0;
    _DAT_140c78320 = 0;
    _DAT_140c78330 = 0x4062dfc5;
    uRam0000000140c78334 = 0;
    uRam0000000140c78338 = 0;
    uRam0000000140c7833c = 0;
    _DAT_140c78340 = 0;
    uRam0000000140c78344 = 0;
    uRam0000000140c78348 = 0;
    uRam0000000140c7834c = 0;
    _DAT_140c78350 = 0;
    _DAT_140c78360 = 0x4062dfc5;
    uRam0000000140c78364 = 0;
    uRam0000000140c78368 = 0;
    uRam0000000140c7836c = 0;
    _DAT_140c78370 = 0;
    uRam0000000140c78374 = 0;
    uRam0000000140c78378 = 0;
    uRam0000000140c7837c = 0;
    _DAT_140c78380 = 0;
    _DAT_140c78390 = uVar18;
    uRam0000000140c78394 = uVar19;
    uRam0000000140c78398 = uVar20;
    uRam0000000140c7839c = uVar21;
    _DAT_140c783a0 = uVar14;
    uRam0000000140c783a4 = uVar15;
    uRam0000000140c783a8 = uVar16;
    uRam0000000140c783ac = uVar17;
    _DAT_140c783b0 = uVar6;
    uRam0000000140c783b4 = uVar7;
    uRam0000000140c783b8 = uVar8;
    uRam0000000140c783bc = uVar9;
    _DAT_140c783c0 = uVar10;
    uRam0000000140c783c4 = uVar11;
    uRam0000000140c783c8 = uVar12;
    uRam0000000140c783cc = uVar13;
    _DAT_140c783d0 = ZEXT816(0);
    DAT_140c783e0 = 0;
    _DAT_140c783f0 = ZEXT816(0);
    _DAT_140c78400 = 0x3f800000;
    _DAT_140c78450 = uVar10;
    uRam0000000140c78454 = uVar11;
    uRam0000000140c78458 = uVar12;
    uRam0000000140c7845c = uVar13;
    _DAT_140c784c0 = 0;
    _DAT_140c784c8 = 0;
    DAT_140c784d0 = 0x7fffffff;
    DAT_140c784d4 = 0x7fffffff;
    DAT_140c784d8 = 0x80000000;
    DAT_140c784dc = 0x80000000;
    _DAT_140c784e0 = ZEXT816(0);
    _DAT_140c784f0 = ZEXT816(0);
    _DAT_140c78500 = uVar26;
    uRam0000000140c78504 = uVar26;
    uRam0000000140c78508 = uVar22;
    uRam0000000140c7850c = uVar22;
    uRam0000000140c78514 = _DAT_140c78510;
    uRam0000000140c78518 = uVar22;
    uRam0000000140c7851c = uVar22;
    _DAT_140c79860 = CONCAT26(*puVar2, CONCAT24(*puVar3, CONCAT22(*puVar4, *puVar5)));
    _DAT_140c79868 = 0x80808080;
    _DAT_140c7986c = 0xffffffff;
    _DAT_140c79870 = 0x808080ff;
    _DAT_140c79874 = 0x8080ff80;
    _DAT_140c79878 = 0x80ff8080;
    _DAT_140c7987c = 0xff808080;
    _DAT_140c79880 = 0;
    _DAT_140c79888 = local_res8;
    DAT_140c79890 = 0;
    DAT_140c79898 = 0x800000007fffffff;
    _DAT_140c798a0 = ZEXT816(0);
    _DAT_140c798b0 = ZEXT816(0);
    _DAT_140c798c0 = uVar26;
    uRam0000000140c798c4 = uVar26;
    uRam0000000140c798c8 = uVar26;
    uRam0000000140c798cc = uVar22;
    _DAT_140c798d0 = _DAT_140c78510;
    uRam0000000140c798d4 = _DAT_140c78510;
    uRam0000000140c798d8 = _DAT_140c78510;
    uRam0000000140c798dc = uVar22;
    _DAT_140c798e0 = 0;
    _DAT_140c798e8 = 0;
    _DAT_140c798f0 = 0;
    _DAT_140c798f8 = 0x7fffffff;
    _DAT_140c798fc = 0x7fffffff;
    _DAT_140c79900 = 0x7fffffff;
    _DAT_140c79904 = 0x80000000;
    _DAT_140c79908 = 0x80000000;
    _DAT_140c7990c = 0x80000000;
    _DAT_140c79910 = ZEXT816(0);
    _DAT_140c79920 = 0;
    _DAT_140c79930 = ZEXT816(0);
    DAT_140c79940 = 0x3f800000;
    _DAT_140c79950 = ZEXT816(0);
    _DAT_140c79960 = uVar22;
    uRam0000000140c79964 = uVar23;
    uRam0000000140c79968 = uVar24;
    uRam0000000140c7996c = uVar25;
    _DAT_140c79970 = ZEXT816(0);
    _DAT_140c79980 = 0x3f800000;
    uRam0000000140c79984 = 0x3f800000;
    uRam0000000140c79988 = 0x3f800000;
    uRam0000000140c7998c = 0x3f800000;
    _DAT_140c79990 = ZEXT816(0);
    _DAT_140c799a0 = uVar22;
    uRam0000000140c799a4 = uVar23;
    uRam0000000140c799a8 = uVar24;
    uRam0000000140c799ac = uVar25;
    _DAT_140c799b0 = ZEXT816(0);
    _DAT_140c799c0 = 0x3f800000;
    uRam0000000140c799c4 = 0x3f800000;
    uRam0000000140c799c8 = 0x3f800000;
    uRam0000000140c799cc = 0x3f800000;
    return;
}


ulonglong FUN_1401a40c0(ulonglong param_1) {
    byte bVar1;
    ulonglong uVar2;

    if (1 < param_1) {
        uVar2 = param_1 - 1;
        bVar1 = 1;
        if ((uVar2 & 0xffffffff00000000) != 0) {
            bVar1 = 0x21;
            uVar2 = uVar2 >> 0x20;
        }
        if ((uVar2 & 0xffff0000) != 0) {
            bVar1 = bVar1 + 0x10;
            uVar2 = uVar2 >> 0x10;
        }
        if ((uVar2 & 0xff00) != 0) {
            bVar1 = bVar1 + 8;
            uVar2 = uVar2 >> 8;
        }
        if ((uVar2 & 0xf0) != 0) {
            bVar1 = bVar1 + 4;
            uVar2 = uVar2 >> 4;
        }
        if ((uVar2 & 0xc) != 0) {
            bVar1 = bVar1 + 2;
            uVar2 = uVar2 >> 2;
        }
        if ((uVar2 & 2) != 0) {
            bVar1 = bVar1 + 1;
        }
        if (3 < bVar1) {
            bVar1 = bVar1 - 4;
            goto LAB_1401a4128;
        }
    }
    bVar1 = 0;
    LAB_1401a4128:
    uVar2 = (&DAT_140b5e820)[bVar1];
    if (uVar2 < param_1) {
        uVar2 = *(ulonglong * )(&UNK_140b5e828 + (ulonglong) bVar1 * 8);
    }
    return uVar2;
}


ulonglong FUN_1401a4150(undefined8 *param_1) {
    uint uVar1;
    ulonglong uVar2;
    char *local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined8 *local_28;
    undefined *local_20;
    undefined8 local_18;
    undefined4 local_10;

    *(undefined4 * )(param_1 + 0x21) = 300;
    *param_1 = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    uVar2 = FUN_1401a1070(param_1 + 0x23, 1, 0, 0, 0);
    if (-1 < (int) uVar2) {
        local_38 = "Watchdog";
        local_30 = 4;
        local_2c = 1;
        local_18 = 0;
        local_20 = &DAT_1401a4370;
        local_10 = 1;
        local_28 = param_1;
        uVar1 = FUN_1401a0eb0(&local_38);
        uVar2 = 0;
        if ((int) uVar1 < 0) {
            uVar2 = (ulonglong) uVar1;
        }
    }
    return uVar2;
}


void FUN_1401a4200(undefined8 param_1, longlong *param_2) {
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    longlong lVar4;
    bool bVar5;

    lVar1 = DAT_140c886b8;
    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar5 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar5 * (DAT_140c67408 ^ 1);
            if (bVar5) goto LAB_1401a4273;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c67400, DVar2);
        DVar2 = DAT_140c67400;
    }
    LAB_1401a4273:
    DAT_140c67400 = DVar2;
    FUN_140052360(param_2, *(undefined8 * )(lVar1 + 0x100));
    uVar3 = *(ulonglong * )(lVar1 + 0x100);
    lVar4 = *param_2;
    if (0x3b < uVar3) {
        FUN_1407db590(lVar4, lVar1 + (*(longlong * )(lVar1 + 0xf8) + 2) * 4,
                      (uVar3 - *(longlong * )(lVar1 + 0xf8)) * 4);
        uVar3 = *(ulonglong * )(lVar1 + 0xf8);
        lVar4 = *param_2 + (*(longlong * )(lVar1 + 0x100) - uVar3) * 4;
    }
    FUN_1407db590(lVar4, lVar1 + 8, uVar3 * 4);
    if (DAT_140c67408 < 2) {
        DAT_140c67400 = 0;
        DAT_140c67408 = 0;
        if (DAT_140c67410 != 0) {
            if (DAT_140c67418 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar5 = DAT_140c67418 == (HANDLE) 0x0;
                DAT_140c67418 =
                        (HANDLE)((ulonglong) DAT_140c67418 ^
                                 (ulonglong) bVar5 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c67418);
        }
        return;
    }
    DAT_140c67408 = DAT_140c67408 - 1;
    return;
}


int FUN_1401a4610(void) {
    int iVar1;
    longlong lVar2;

    if (DAT_140c886b8 != 0) {
        return 1;
    }
    lVar2 = FUN_14018b280(0x120, 0);
    if (lVar2 == 0) {
        lVar2 = 0;
    } else {
        *(undefined8 * )(lVar2 + 0x110) = 0;
        *(undefined8 * )(lVar2 + 0x118) = 0;
    }
    iVar1 = FUN_1401a4150(lVar2);
    if (iVar1 < 0) {
        if (lVar2 != 0) {
            FUN_1401a46b0(lVar2);
        }
        return iVar1;
    }
    DAT_140c886b8 = lVar2;
    return 0;
}


longlong FUN_1401a46b0(longlong param_1) {
    longlong *plVar1;

    if (*(longlong * *)(param_1 + 0x118) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x118) + 0x10))();
    }
    plVar1 = *(longlong * *)(param_1 + 0x110);
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 0x30))(plVar1, 0xffffffff);
    }
    if (*(longlong * *)(param_1 + 0x118) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x118) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x110) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x110) + 8))();
    }
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined4 FUN_1401a4720(undefined8 *param_1, undefined8 param_2, undefined4 param_3) {
    ushort uVar1;
    int iVar2;
    ushort **ppuVar3;
    int iVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    int iVar7;
    ulonglong uVar8;
    ushort **ppuVar9;

    iVar2 = *(int *) (param_1 + 1);
    uVar6 = 0;
    if (0 < iVar2) {
        ppuVar3 = (ushort * *) * param_1;
        uVar8 = uVar6;
        ppuVar9 = ppuVar3;
        do {
            uVar1 = **ppuVar9;
            iVar7 = (int) uVar8;
            if ((((uVar1 - 0x2d & 0xfffffffd) == 0) || (uVar1 - 0x96 < 2)) &&
                (iVar4 = FUN_14018e2c0(*ppuVar9 + 1, param_2), iVar4 == 0)) {
                if (iVar2 <= iVar7 + 1) {
                    return param_3;
                }
                uVar5 = FUN_14018e820(ppuVar3[(longlong) iVar7 + 1]);
                return uVar5;
            }
            uVar6 = uVar6 + 1;
            uVar8 = (ulonglong)(iVar7 + 1);
            ppuVar9 = ppuVar9 + 1;
        } while ((longlong) uVar6 < (longlong) iVar2);
    }
    return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *FUN_1401a47e0(undefined8 *param_1) {
    float fVar1;
    longlong lVar2;
    undefined4 local_28[2];
    undefined8 *local_20;
    undefined *local_18;
    undefined8 local_10;

    fVar1 = _DAT_140c1e45c;
    *param_1 = &PTR_LAB_140b5ea08;
    lVar2 = DAT_140c63728;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 3) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0;
    param_1[1] = lVar2 + 0x12f0;
    param_1[2] = 0;
    if (0.0 <= fVar1) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_1401a4870;
        local_20 = param_1;
        FUN_140195960(param_1 + 3, 60000, local_28, 4);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a48d0(longlong param_1) {
    float fVar1;
    undefined4 local_28[2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    fVar1 = _DAT_140c1e45c;
    *(undefined8 * )(*(longlong * )(param_1 + 8) + -0x12f0) = *(undefined8 * )(param_1 + 0x10);
    *(undefined8 * )(param_1 + 0x10) = 0;
    if (0.0 <= fVar1) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_1401a4870;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x18, 60000, local_28, 4);
    }
    return;
}


undefined8 *FUN_1401a4970(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5ea08;
    if (param_1[2] != 0) {
        *(undefined8 * )(param_1[1] + -0x12f0) = param_1[2];
        param_1[2] = 0;
    }
    FUN_140195d70(param_1 + 3);
    *(undefined4 * )(param_1 + 3) = 0;
    if ((undefined8 *) param_1[5] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[5] = param_1[6];
    }
    if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[6] = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_14018b900(param_1, 0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401a4a00(undefined8 *param_1) {
    undefined8 *puVar1;
    LPCVOID *ppvVar2;
    undefined ***lpAddress;
    int iVar3;
    longlong lVar4;
    SIZE_T SVar5;
    undefined8 *puVar6;
    undefined auStack328[32];
    undefined ***local_128;
    ulonglong local_118;
    undefined **local_110;
    undefined8 local_108;
    LPVOID local_100;
    undefined **local_f8;
    undefined8 local_f0;
    LPVOID local_e8;
    _MEMORY_BASIC_INFORMATION local_d8;
    undefined local_a8[128];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    lVar4 = FUN_14018cae0(param_1, 0);
    ppvVar2 = (LPCVOID * ) * param_1;
    lpAddress = (undefined * **) * ppvVar2;
    SVar5 = VirtualQuery(lpAddress, &local_d8, 0x30);
    if ((((SVar5 == 0) || (local_d8.Type != 0x1000000)) || (local_d8.Protect != 2)) ||
        (local_d8.State != 0x1000)) {
        if (lVar4 == 0) {
            FUN_14001b370(local_a8, 0x40, &DAT_1409e23b4);
        } else {
            FUN_14001b370(local_a8, 0x40, L" (Offset=0x%Ix)", (longlong) param_1 - lVar4);
        }
    } else if (lVar4 == 0) {
        FUN_14001b370(local_a8, 0x40, L" (Type=0x%Ix)", lpAddress);
    } else {
        local_128 = lpAddress;
        FUN_14001b370(local_a8, 0x40, L" (Offset=0x%Ix, Type=0x%Ix)", (longlong) param_1 - lVar4);
    }
    if (_DAT_140c63734 == 0) {
        local_108 = 0;
        local_110 = &PTR_LAB_140b5e648;
        local_100 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_110);
        local_f8 = local_110;
        local_118 = 0x141d3f7a0;
        local_128 = &local_f8;
        local_f0 = local_108;
        local_e8 = local_100;
        iVar3 = FUN_1401971e0(&DAT_140c8a220, 1, &local_118, local_a8);
        local_110 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_100);
        if (iVar3 != 0) {
            DebugBreak();
        }
    } else {
        local_118 = 0x141d3f830;
        FUN_1401a3130(1, 0, &local_118, local_a8);
    }
    puVar6 = (undefined8 *) FUN_14018cae0(ppvVar2, &local_118);
    if (puVar6 != (undefined8 *) 0x0) {
        puVar1 = (undefined8 * )((longlong) puVar6 + (local_118 & 0xfffffffffffffff8));
        for (; puVar6 < puVar1; puVar6 = puVar6 + 1) {
            if ((undefined8 * ) * puVar6 == param_1) {
                *puVar6 = &DAT_140c8e128;
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack328);
    return;
}


void FUN_1401a4c20(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    undefined8 local_res20;

    local_res20 = param_4;
    FUN_1407e0010(param_1, param_2, 0xffffffffffffffff, param_3, &local_res20);
    return;
}


void FUN_1401a4c50(uint *param_1, short *param_2) {
    short sVar1;
    undefined auVar2[16];
    undefined8 uVar3;
    longlong lVar4;

    if ((*param_1 & 0x200) != 0) {
        FUN_14018b900(*(undefined8 * )(param_1 + 2), 0);
    }
    lVar4 = 0;
    *param_1 = 0;
    *(undefined8 * )(param_1 + 2) = 0;
    *(undefined8 * )(param_1 + 4) = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_2[lVar4];
    }
    auVar2 = ZEXT816(2) * ZEXT816(lVar4 + 1);
    uVar3 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    uVar3 = FUN_14018b280(uVar3, 0);
    *(undefined8 * )(param_1 + 2) = uVar3;
    FUN_1407db590(uVar3, param_2, lVar4 * 2 + 2);
    *param_1 = 0x200;
    *(longlong * )(param_1 + 4) = *(longlong * )(param_1 + 2) + lVar4 * 2;
    return;
}


short *FUN_1401a4d00(uint *param_1, short *param_2, short *param_3, uint param_4) {
    short sVar1;
    short *psVar2;
    ulonglong uVar3;
    short *psVar4;
    ulonglong uVar5;

    uVar3 = 0;
    sVar1 = *param_3;
    while (sVar1 != 0) {
        uVar3 = uVar3 + 1;
        sVar1 = param_3[uVar3];
    }
    sVar1 = *param_2;
    if (sVar1 != 0) {
        psVar4 = param_2;
        do {
            if (sVar1 == *param_3) {
                uVar5 = 0;
                psVar2 = param_3;
                if (uVar3 == 0) {
                    LAB_1401a4d83:
                    if ((*param_1 & 0x200) != 0) {
                        FUN_14018b900(*(undefined8 * )(param_1 + 2), 0);
                    }
                    *(short **) (param_1 + 2) = param_2;
                    *(short **) (param_1 + 4) = psVar4;
                    *param_1 = param_4 | 0x100;
                    return psVar4 + uVar3;
                }
                while (sVar1 = *(short *) (((longlong) psVar2 - (longlong) param_3) + (longlong) psVar4),
                        sVar1 == *psVar2) {
                    if (sVar1 == 0) goto LAB_1401a4d83;
                    uVar5 = uVar5 + 1;
                    psVar2 = psVar2 + 1;
                    if (uVar3 <= uVar5) goto LAB_1401a4d83;
                }
            }
            sVar1 = psVar4[1];
            psVar4 = psVar4 + 1;
        } while (sVar1 != 0);
    }
    return (short *) 0x0;
}


ushort *FUN_1401a4de0(undefined8 param_1, ushort *param_2) {
    ushort *puVar1;
    ushort uVar2;
    ushort *puVar3;

    if (((param_2 != (ushort *) 0x0) && (uVar2 = *param_2, uVar2 != 0)) &&
        ((0x7f < uVar2 ||
          (((((ushort)(uVar2 - 0x41) < 0x1a || ((ushort)(uVar2 - 0x61) < 0x1a)) || (uVar2 == 0x3a)) ||
            (uVar2 == 0x5f)))))) {
        puVar3 = param_2 + 1;
        uVar2 = param_2[1];
        while ((uVar2 != 0 &&
                ((((0x7f < uVar2 || ((ushort)(uVar2 - 0x41) < 0x1a)) ||
                   ((((ushort)(uVar2 - 0x61) < 0x1a || ((uVar2 == 0x3a || (uVar2 == 0x5f)))) ||
                     ((ushort)(uVar2 - 0x30) < 10)))) || ((ushort)(uVar2 - 0x2d) < 2))))) {
            puVar1 = puVar3 + 1;
            puVar3 = puVar3 + 1;
            uVar2 = *puVar1;
        }
        FUN_1401a9590(param_1, param_2, puVar3, 0);
        return puVar3;
    }
    return (ushort *) 0x0;
}


void FUN_1401a4eb0(longlong param_1) {
    short sVar1;
    short *psVar2;
    short *psVar3;
    short *psVar4;

    for (psVar2 = *(short **) (param_1 + 8); (*psVar2 == 0x20 || ((ushort)(*psVar2 - 9U) < 5));
         psVar2 = psVar2 + 1) {
    }
    *(short **) (param_1 + 8) = psVar2;
    psVar3 = psVar2;
    if (*psVar2 != 0) {
        do {
            if ((*psVar2 == 0x20) || ((ushort)(*psVar2 - 9U) < 5)) {
                for (; (*psVar2 == 0x20 || ((ushort)(*psVar2 - 9U) < 5)); psVar2 = psVar2 + 1) {
                }
                psVar4 = psVar3;
                if (*psVar2 == 0) break;
                *psVar3 = 0x20;
                psVar3 = psVar3 + 1;
            }
            sVar1 = *psVar2;
            psVar2 = psVar2 + 1;
            psVar4 = psVar3 + 1;
            *psVar3 = sVar1;
            psVar3 = psVar4;
        } while (*psVar2 != 0);
        *psVar4 = 0;
    }
    return;
}


undefined8 FUN_1401a4f40(uint *param_1) {
    short sVar1;
    uint uVar2;
    short *psVar3;
    short *psVar4;
    longlong lVar5;
    short *psVar6;
    short *psVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined **ppuVar10;
    int local_res8[2];
    undefined2 local_48;
    undefined8 local_46;
    undefined8 local_3e;
    undefined2 local_36;

    if ((*param_1 & 0x100) == 0) {
        return *(undefined8 * )(param_1 + 2);
    }
    **(undefined2 * *)(param_1 + 4) = 0;
    *param_1 = *param_1 ^ 0x100;
    if (*param_1 != 0) {
        psVar6 = *(short **) (param_1 + 2);
        psVar4 = psVar6;
        psVar7 = psVar6;
        if (psVar6 < *(short **) (param_1 + 4)) {
            do {
                uVar2 = *param_1 & 2;
                if ((uVar2 == 0) || (*psVar7 != 0xd)) {
                    if ((uVar2 != 0) && (*psVar7 == 10)) {
                        if (psVar7[1] != 0xd) goto LAB_1401a4fd4;
                        psVar3 = psVar7 + 2;
                        *psVar6 = 10;
                        goto LAB_1401a50fc;
                    }
                    if (((*param_1 & 1) == 0) || (*psVar7 != 0x26)) {
                        sVar1 = *psVar7;
                        LAB_1401a50f9:
                        psVar3 = psVar7 + 1;
                        *psVar6 = sVar1;
                        goto LAB_1401a50fc;
                    }
                    psVar3 = psVar7 + 1;
                    if (psVar7[1] != 0x23) {
                        ppuVar10 = &PTR_u_quot_140a45450;
                        do {
                            uVar9 = (ulonglong) * (int *) (ppuVar10 + 1);
                            if (uVar9 != 0) {
                                psVar4 = psVar3;
                                uVar8 = 0;
                                do {
                                    if (*psVar4 !=
                                        *(short *) (((longlong) * ppuVar10 - (longlong) psVar3) + (longlong) psVar4))
                                        goto LAB_1401a50c8;
                                    if (*psVar4 == 0) break;
                                    uVar8 = uVar8 + 1;
                                    psVar4 = psVar4 + 1;
                                } while (uVar8 < uVar9);
                            }
                            if (psVar7[uVar9 + 1] == 0x3b) {
                                psVar4 = psVar6 + 1;
                                *psVar6 = *(short *) ((longlong) ppuVar10 + 0xc);
                                psVar3 = psVar7 + (*(int *) (ppuVar10 + 1) + 2);
                                goto LAB_1401a5100;
                            }
                            LAB_1401a50c8:
                            ppuVar10 = ppuVar10 + 2;
                        } while ((longlong) ppuVar10 < 0x140a454a0);
                        goto LAB_1401a50fc;
                    }
                    local_48 = 0;
                    local_res8[0] = 0;
                    local_46 = 0;
                    local_3e = 0;
                    local_36 = 0;
                    psVar3 = (short *) FUN_1401a5170(psVar7, &local_48, local_res8);
                    if (psVar3 == (short *) 0x0) {
                        sVar1 = *psVar7;
                        goto LAB_1401a50f9;
                    }
                    lVar5 = (longlong) local_res8[0];
                    FUN_1407db590(psVar6, &local_48, lVar5);
                    psVar4 = psVar6 + lVar5;
                } else {
                    if (psVar7[1] == 10) {
                        psVar3 = psVar7 + 2;
                        *psVar6 = 10;
                    } else {
                        LAB_1401a4fd4:
                        psVar3 = psVar7 + 1;
                        *psVar6 = 10;
                    }
                    LAB_1401a50fc:
                    psVar4 = psVar6 + 1;
                }
                LAB_1401a5100:
                psVar6 = psVar4;
                psVar7 = psVar3;
            } while (psVar3 < *(short **) (param_1 + 4));
        }
        *psVar4 = 0;
    }
    if ((*(byte *) param_1 & 4) != 0) {
        FUN_1401a4eb0(param_1);
    }
    *param_1 = *param_1 & 0x200;
    return *(undefined8 * )(param_1 + 2);
}


longlong FUN_1401a5170(longlong param_1, undefined2 *param_2, undefined4 *param_3) {
    ushort uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    undefined2 uVar6;
    int iVar7;
    longlong lVar8;

    if (*(short *) (param_1 + 4) == 0) {
        return param_1 + 2;
    }
    iVar7 = 0;
    uVar6 = 0;
    iVar5 = 1;
    if (*(short *) (param_1 + 4) == 0x78) {
        if ((*(short *) (param_1 + 6) != 0) && (lVar3 = FUN_1407dd988(param_1 + 6, 0x3b), lVar3 != 0)) {
            lVar8 = lVar3 - param_1;
            uVar1 = *(ushort * )(lVar3 + -2);
            while (uVar1 != 0x78) {
                uVar4 = (uint) uVar1;
                if ((ushort)(uVar1 - 0x30) < 10) {
                    iVar2 = uVar4 - 0x30;
                } else if ((ushort)(uVar1 - 0x61) < 6) {
                    iVar2 = uVar4 - 0x57;
                } else {
                    if (5 < (ushort)(uVar1 - 0x41)) {
                        return 0;
                    }
                    iVar2 = uVar4 - 0x37;
                }
                iVar7 = iVar7 + iVar2 * iVar5;
                uVar6 = (undefined2) iVar7;
                iVar5 = iVar5 << 4;
                uVar1 = *(ushort * )(lVar3 + -4);
                lVar3 = lVar3 + -2;
            }
            LAB_1401a523b:
            *param_2 = uVar6;
            *param_3 = 1;
            return param_1 + 2 + (lVar8 >> 1) * 2;
        }
    } else if ((*(short *) (param_1 + 4) != 0) &&
               (lVar3 = FUN_1407dd988((short *) (param_1 + 4), 0x3b), lVar3 != 0)) {
        lVar8 = lVar3 - param_1;
        uVar1 = *(ushort * )(lVar3 + -2);
        uVar6 = 0;
        while (uVar1 != 0x23) {
            if (9 < (ushort)(uVar1 - 0x30)) {
                return 0;
            }
            iVar2 = (uVar1 - 0x30) * iVar5;
            iVar5 = iVar5 * 10;
            iVar7 = iVar7 + iVar2;
            uVar6 = (undefined2) iVar7;
            uVar1 = *(ushort * )(lVar3 + -4);
            lVar3 = lVar3 + -2;
        }
        goto LAB_1401a523b;
    }
    return 0;
}


undefined8 FUN_1401a52e0(wchar_t *param_1, undefined *param_2) {
    int iVar1;
    wchar_t *pwVar2;
    wchar_t *pwVar3;
    int iVar4;

    iVar4 = 0;
    iVar1 = FUN_1407df428();
    if (iVar1 == 1) {
        *param_2 = 0;
        return 1;
    }
    pwVar3 = L"true";
    if (param_1 != L"true") {
        iVar1 = 0;
        pwVar2 = param_1;
        if (*param_1 != L'\0') {
            do {
                if (((*pwVar3 == L'\0') || (*pwVar2 != *pwVar3)) || (0x7ffffffe < iVar1)) break;
                pwVar2 = pwVar2 + 1;
                pwVar3 = pwVar3 + 1;
                iVar1 = iVar1 + 1;
            } while (*pwVar2 != L'\0');
            if (iVar1 == 0x7fffffff) goto LAB_1401a5400;
        }
        if ((*pwVar2 != L'\0') || (*pwVar3 != L'\0')) {
            pwVar3 = L"false";
            if (param_1 != L"false") {
                if (*param_1 != L'\0') {
                    do {
                        if (((*pwVar3 == L'\0') || (*param_1 != *pwVar3)) || (0x7ffffffe < iVar4)) break;
                        param_1 = param_1 + 1;
                        pwVar3 = pwVar3 + 1;
                        iVar4 = iVar4 + 1;
                    } while (*param_1 != L'\0');
                    if (iVar4 == 0x7fffffff) goto LAB_1401a53eb;
                }
                if ((*param_1 != L'\0') || (*pwVar3 != L'\0')) {
                    return 0;
                }
            }
            LAB_1401a53eb:
            *param_2 = 0;
            return 1;
        }
    }
    LAB_1401a5400:
    *param_2 = 1;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short *FUN_1401a5420(longlong param_1, short *param_2, undefined8 *param_3) {
    longlong *plVar1;
    short *psVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    uint uVar5;
    short *psVar6;
    short *psVar7;

    for (psVar7 = param_2; (*psVar7 == 0x20 || ((ushort)(*psVar7 - 9U) < 5)); psVar7 = psVar7 + 1) {
    }
    puVar4 = (undefined8 *) 0x0;
    if (*psVar7 == 0) {
        *param_3 = 0;
        return psVar7;
    }
    psVar6 = &DAT_1409e444c;
    psVar2 = psVar7;
    puVar3 = puVar4;
    if (psVar7 == &DAT_1409e444c) {
        LAB_1401a57d8:
        puVar3 = (undefined8 * )
                (**(code * *)(*(longlong * )(param_1 + 0x200) + 0x10))((longlong * )(param_1 + 0x200));
        if (puVar3 != (undefined8 *) 0x0) {
            puVar3[1] = param_1;
            puVar3[2] = 0;
            *(undefined4 * )(puVar3 + 3) = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            *puVar3 = &PTR_LAB_140b5ed50;
            puVar3[9] = 0;
            puVar3[10] = 0;
            puVar4 = puVar3;
        }
    } else {
        do {
            uVar5 = (uint) puVar3;
            if (((*psVar6 == 0) || (*psVar2 != *psVar6)) || (1 < (int) uVar5)) break;
            psVar2 = psVar2 + 1;
            psVar6 = psVar6 + 1;
            uVar5 = uVar5 + 1;
            puVar3 = (undefined8 * )(ulonglong)
            uVar5;
        } while (*psVar2 != 0);
        if ((uVar5 == 2) || ((*psVar2 == 0 && (*psVar6 == 0)))) goto LAB_1401a57d8;
        psVar6 = &DAT_140a452a8;
        psVar2 = psVar7;
        puVar3 = puVar4;
        if (psVar7 == &DAT_140a452a8) {
            LAB_1401a577b:
            plVar1 = (longlong * )(param_1 + 0x200);
            puVar4 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
            if (puVar4 == (undefined8 *) 0x0) {
                puVar4 = (undefined8 *) 0x0;
                param_2 = psVar7 + 4;
            } else {
                puVar4[1] = param_1;
                puVar4[2] = 0;
                *(undefined4 * )(puVar4 + 3) = 0;
                puVar4[4] = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
                puVar4[7] = 0;
                puVar4[8] = 0;
                *puVar4 = &PTR_LAB_140b5ec30;
                puVar4[9] = 0;
                puVar4[10] = 0;
                puVar4[10] = plVar1;
                param_2 = psVar7 + 4;
                plVar1 = _DAT_00000050;
            }
            goto LAB_1401a582b;
        }
        do {
            uVar5 = (uint) puVar3;
            if (((*psVar6 == 0) || (*psVar2 != *psVar6)) || (3 < (int) uVar5)) break;
            psVar2 = psVar2 + 1;
            psVar6 = psVar6 + 1;
            uVar5 = uVar5 + 1;
            puVar3 = (undefined8 * )(ulonglong)
            uVar5;
        } while (*psVar2 != 0);
        if ((uVar5 == 4) || ((*psVar2 == 0 && (*psVar6 == 0)))) goto LAB_1401a577b;
        psVar6 = &DAT_140a45290;
        psVar2 = psVar7;
        puVar3 = puVar4;
        if (psVar7 == &DAT_140a45290) {
            LAB_1401a570d:
            plVar1 = (longlong * )(param_1 + 0x180);
            puVar4 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
            if (puVar4 == (undefined8 *) 0x0) {
                puVar4 = (undefined8 *) 0x0;
                DAT_00000058 = 1;
                param_2 = psVar7 + 9;
            } else {
                puVar4[1] = param_1;
                puVar4[2] = 0;
                *(undefined4 * )(puVar4 + 3) = 0;
                puVar4[4] = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
                puVar4[7] = 0;
                puVar4[8] = 0;
                puVar4[9] = 0;
                puVar4[10] = 0;
                *(undefined * )(puVar4 + 0xb) = 0;
                *puVar4 = &PTR_LAB_140b5ee70;
                puVar4[10] = plVar1;
                param_2 = psVar7 + 9;
                *(undefined * )(puVar4 + 0xb) = 1;
                plVar1 = _DAT_00000050;
            }
            goto LAB_1401a582b;
        }
        do {
            uVar5 = (uint) puVar3;
            if (((*psVar6 == 0) || (*psVar2 != *psVar6)) || (8 < (int) uVar5)) break;
            psVar2 = psVar2 + 1;
            psVar6 = psVar6 + 1;
            uVar5 = uVar5 + 1;
            puVar3 = (undefined8 * )(ulonglong)
            uVar5;
        } while (*psVar2 != 0);
        if ((uVar5 == 9) || ((*psVar2 == 0 && (*psVar6 == 0)))) goto LAB_1401a570d;
        psVar6 = &DAT_1409e43ac;
        psVar2 = psVar7;
        puVar3 = puVar4;
        if (psVar7 != &DAT_1409e43ac) {
            do {
                uVar5 = (uint) puVar3;
                if (((*psVar6 == 0) || (*psVar2 != *psVar6)) || (1 < (int) uVar5)) break;
                psVar2 = psVar2 + 1;
                psVar6 = psVar6 + 1;
                uVar5 = uVar5 + 1;
                puVar3 = (undefined8 * )(ulonglong)
                uVar5;
            } while (*psVar2 != 0);
            if ((uVar5 != 2) && ((*psVar2 != 0 || (*psVar6 != 0)))) {
                psVar6 = &DAT_1409e23fc;
                psVar2 = psVar7;
                puVar3 = puVar4;
                if (psVar7 != &DAT_1409e23fc) {
                    do {
                        uVar5 = (uint) puVar3;
                        if (((*psVar6 == 0) || (*psVar2 != *psVar6)) || (0 < (int) uVar5)) break;
                        psVar2 = psVar2 + 1;
                        psVar6 = psVar6 + 1;
                        uVar5 = uVar5 + 1;
                        puVar3 = (undefined8 * )(ulonglong)
                        uVar5;
                    } while (*psVar2 != 0);
                    if ((uVar5 != 1) && ((*psVar2 != 0 || (*psVar6 != 0)))) {
                        plVar1 = (longlong * )(param_1 + 0x180);
                        puVar3 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
                        if (puVar3 != (undefined8 *) 0x0) {
                            puVar3[1] = param_1;
                            puVar3[2] = 0;
                            *(undefined4 * )(puVar3 + 3) = 0;
                            puVar3[4] = 0;
                            puVar3[5] = 0;
                            puVar3[6] = 0;
                            puVar3[7] = 0;
                            puVar3[8] = 0;
                            *puVar3 = &PTR_LAB_140b5ee70;
                            puVar3[9] = 0;
                            puVar3[10] = 0;
                            *(undefined * )(puVar3 + 0xb) = 0;
                            puVar3[10] = plVar1;
                            puVar4 = puVar3;
                            plVar1 = _DAT_00000050;
                        }
                        goto LAB_1401a582b;
                    }
                }
                plVar1 = (longlong * )(param_1 + 0x80);
                puVar3 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
                if (puVar3 == (undefined8 *) 0x0) {
                    param_2 = psVar7 + 1;
                } else {
                    puVar3[1] = param_1;
                    puVar3[2] = 0;
                    *(undefined4 * )(puVar3 + 3) = 0;
                    puVar3[4] = 0;
                    puVar3[5] = 0;
                    puVar3[6] = 0;
                    puVar3[7] = 0;
                    puVar3[8] = 0;
                    *puVar3 = &PTR_FUN_140b5eba0;
                    puVar3[9] = 0;
                    puVar3[10] = 0;
                    *(undefined4 * )(puVar3 + 0xb) = 0;
                    puVar3[0xc] = 0;
                    puVar3[10] = plVar1;
                    param_2 = psVar7 + 1;
                    puVar4 = puVar3;
                    plVar1 = _DAT_00000050;
                }
                goto LAB_1401a582b;
            }
        }
        puVar3 = (undefined8 * )
                (**(code * *)(*(longlong * )(param_1 + 0x200) + 0x10))((longlong * )(param_1 + 0x200));
        if (puVar3 != (undefined8 *) 0x0) {
            puVar3[1] = param_1;
            puVar3[2] = 0;
            *(undefined4 * )(puVar3 + 3) = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            *puVar3 = &PTR_LAB_140b5ecc0;
            puVar3[9] = 0;
            puVar3[10] = 0;
            puVar4 = puVar3;
        }
    }
    puVar4[10] = param_1 + 0x200;
    param_2 = psVar7 + 2;
    plVar1 = _DAT_00000050;
    LAB_1401a582b:
    _DAT_00000050 = plVar1;
    *param_3 = puVar4;
    return param_2;
}


void FUN_1401a5850(longlong param_1, longlong *param_2) {
    longlong *plVar1;
    char cVar2;

    cVar2 = (**(code * *)(*param_2 + 0x10))(param_2, param_1);
    if (cVar2 != '\0') {
        plVar1 = *(longlong * *)(param_1 + 0x30);
        while ((plVar1 != (longlong *) 0x0 &&
                (cVar2 = (**(code * *)(*plVar1 + 0x70))(plVar1, param_2), cVar2 != '\0'))) {
            plVar1 = (longlong *) plVar1[9];
        }
    }
    // WARNING: Could not recover jumptable at 0x0001401a58b1. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_2 + 0x20))(param_2, param_1);
    return;
}


undefined8 FUN_1401a58c0(undefined8 param_1, ulonglong param_2) {
    FUN_1401a5900();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401a5900(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5ede0;
    FUN_1401a59a0();
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        if (param_1 == *(undefined8 * *)(lVar1 + 0x30)) {
            *(undefined8 * )(lVar1 + 0x30) = (*(undefined8 * *)(lVar1 + 0x30))[9];
        }
        if (param_1 == *(undefined8 * *)(lVar1 + 0x38)) {
            *(undefined8 * )(lVar1 + 0x38) = (*(undefined8 * *)(lVar1 + 0x38))[8];
        }
        if (param_1[8] != 0) {
            *(undefined8 * )(param_1[8] + 0x48) = param_1[9];
        }
        if (param_1[9] != 0) {
            *(undefined8 * )(param_1[9] + 0x40) = param_1[8];
        }
        param_1[2] = 0;
    }
    if ((*(uint * )(param_1 + 3) & 0x200) != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    *(undefined4 * )(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
}


void FUN_1401a59a0(longlong param_1) {
    longlong *plVar1;
    longlong *plVar2;

    if (*(longlong * )(param_1 + 0x30) == 0) {
        *(undefined8 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x30) = 0;
        return;
    }
    do {
        plVar1 = *(longlong * *)(param_1 + 0x30);
        *(longlong * )(param_1 + 0x30) = plVar1[9];
        if (plVar1 == *(longlong * *)(param_1 + 0x38)) {
            *(longlong * )(param_1 + 0x38) = (*(longlong * *)(param_1 + 0x38))[8];
        }
        if (plVar1[8] != 0) {
            *(longlong * )(plVar1[8] + 0x48) = plVar1[9];
        }
        if (plVar1[9] != 0) {
            *(longlong * )(plVar1[9] + 0x40) = plVar1[8];
        }
        plVar2 = (longlong *) plVar1[10];
        plVar1[2] = 0;
        (**(code * *)(*plVar1 + 0x78))(plVar1, 0);
        (**(code * *)(*plVar2 + 0x18))(plVar2);
    } while (*(longlong * )(param_1 + 0x30) != 0);
    *(undefined8 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    return;
}


longlong FUN_1401a5a70(longlong param_1, longlong param_2) {
    if (*(longlong * )(param_2 + 8) != *(longlong * )(param_1 + 8)) {
        return 0;
    }
    FUN_1401a6150();
    if (*(longlong * )(param_1 + 0x38) == 0) {
        *(longlong * )(param_1 + 0x38) = param_2;
        *(longlong * )(param_1 + 0x30) = param_2;
        *(undefined8 * )(param_2 + 0x40) = 0;
    } else {
        *(longlong * )(*(longlong * )(param_1 + 0x38) + 0x48) = param_2;
        *(undefined8 * )(param_2 + 0x40) = *(undefined8 * )(param_1 + 0x38);
        *(longlong * )(param_1 + 0x38) = param_2;
    }
    *(undefined8 * )(param_2 + 0x48) = 0;
    *(longlong * )(param_2 + 0x10) = param_1;
    return param_2;
}


longlong *FUN_1401a5ae0(longlong param_1, short *param_2) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    short *psVar4;
    int iVar5;
    short *psVar6;

    puVar1 = *(undefined8 * *)(param_1 + 0x30);
    do {
        if (puVar1 == (undefined8 *) 0x0) {
            return (longlong *) 0x0;
        }
        plVar2 = (longlong * )(**(code * *) * puVar1)(puVar1);
        if (plVar2 != (longlong *) 0x0) {
            if (param_2 == (short *) 0x0) {
                return plVar2;
            }
            lVar3 = (**(code * *)(*plVar2 + 0x30))();
            if (lVar3 == 0) {
                psVar4 = (short *) FUN_1401a4f40();
            } else {
                psVar4 = (short *) 0x0;
            }
            if (psVar4 == param_2) {
                return plVar2;
            }
            iVar5 = 0;
            psVar6 = param_2;
            if (*psVar4 != 0) {
                do {
                    if (((*psVar6 == 0) || (*psVar4 != *psVar6)) || (0x7ffffffe < iVar5)) break;
                    psVar4 = psVar4 + 1;
                    psVar6 = psVar6 + 1;
                    iVar5 = iVar5 + 1;
                } while (*psVar4 != 0);
                if (iVar5 == 0x7fffffff) {
                    return plVar2;
                }
            }
            if ((*psVar4 == 0) && (*psVar6 == 0)) {
                return plVar2;
            }
        }
        puVar1 = (undefined8 *) puVar1[9];
    } while (true);
}


longlong FUN_1401a5bc0(longlong param_1, short *param_2) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    short *psVar4;
    short *psVar5;
    int iVar6;

    plVar1 = *(longlong * *)(param_1 + 0x48);
    do {
        if (plVar1 == (longlong *) 0x0) {
            return 0;
        }
        lVar2 = (**(code * *) * plVar1)(plVar1);
        if (lVar2 != 0) {
            if (param_2 == (short *) 0x0) {
                return lVar2;
            }
            lVar3 = (**(code * *)(*plVar1 + 0x30))(plVar1);
            if (lVar3 == 0) {
                psVar4 = (short *) FUN_1401a4f40(plVar1 + 3);
            } else {
                psVar4 = (short *) 0x0;
            }
            if (param_2 == psVar4) {
                return lVar2;
            }
            iVar6 = 0;
            psVar5 = param_2;
            if (*param_2 != 0) {
                do {
                    if (((*psVar4 == 0) || (*psVar5 != *psVar4)) || (0x7ffffffe < iVar6)) break;
                    psVar5 = psVar5 + 1;
                    psVar4 = psVar4 + 1;
                    iVar6 = iVar6 + 1;
                } while (*psVar5 != 0);
                if (iVar6 == 0x7fffffff) {
                    return lVar2;
                }
            }
            if ((*psVar5 == 0) && (*psVar4 == 0)) {
                return lVar2;
            }
        }
        plVar1 = (longlong *) plVar1[9];
    } while (true);
}


longlong FUN_1401a5ca0(longlong *param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = (**(code * *)(*param_1 + 0x60))();
    if (lVar3 != 0) {
        for (lVar1 = param_1[6]; lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x48)) {
            lVar4 = FUN_1401a5ca0(lVar1, param_2);
            if (*(longlong * )(lVar4 + 8) == *(longlong * )(lVar3 + 8)) {
                lVar2 = *(longlong * )(lVar4 + 0x10);
                if (lVar2 == 0) {
                    (**(code * *)(**(longlong * *)(lVar4 + 0x50) + 0x20))();
                } else {
                    if (lVar4 == *(longlong * )(lVar2 + 0x30)) {
                        *(undefined8 * )(lVar2 + 0x30) = *(undefined8 * )(*(longlong * )(lVar2 + 0x30) + 0x48);
                    }
                    if (lVar4 == *(longlong * )(lVar2 + 0x38)) {
                        *(undefined8 * )(lVar2 + 0x38) = *(undefined8 * )(*(longlong * )(lVar2 + 0x38) + 0x40);
                    }
                    if (*(longlong * )(lVar4 + 0x40) != 0) {
                        *(undefined8 * )(*(longlong * )(lVar4 + 0x40) + 0x48) = *(undefined8 * )(lVar4 + 0x48);
                    }
                    if (*(longlong * )(lVar4 + 0x48) != 0) {
                        *(undefined8 * )(*(longlong * )(lVar4 + 0x48) + 0x40) = *(undefined8 * )(lVar4 + 0x40);
                    }
                    *(undefined8 * )(lVar4 + 0x10) = 0;
                }
                if (*(longlong * )(lVar3 + 0x38) == 0) {
                    *(longlong * )(lVar3 + 0x38) = lVar4;
                    *(longlong * )(lVar3 + 0x30) = lVar4;
                    *(undefined8 * )(lVar4 + 0x40) = 0;
                } else {
                    *(longlong * )(*(longlong * )(lVar3 + 0x38) + 0x48) = lVar4;
                    *(undefined8 * )(lVar4 + 0x40) = *(undefined8 * )(lVar3 + 0x38);
                    *(longlong * )(lVar3 + 0x38) = lVar4;
                }
                *(undefined8 * )(lVar4 + 0x48) = 0;
                *(longlong * )(lVar4 + 0x10) = lVar3;
            }
        }
    }
    return lVar3;
}


short *FUN_1401a5dc0(longlong param_1, short *param_2, uint *param_3) {
    uint *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    short *psVar8;
    short *psVar9;
    uint uVar10;
    longlong *local_res10;
    uint local_48[2];
    longlong local_40;
    longlong local_38;
    short *psVar11;

    if (param_2 != (short *) 0x0) {
        while (*param_2 != 0) {
            local_res10 = (longlong *) 0x0;
            uVar5 = FUN_1401a5420(*(undefined8 * )(param_1 + 8), param_2, &local_res10);
            plVar4 = local_res10;
            if (local_res10 == (longlong *) 0x0) {
                return (short *) 0x0;
            }
            local_48[0] = 0;
            local_40 = 0;
            local_38 = 0;
            param_2 = (short *) (**(code * *)(*local_res10 + 0x80))(local_res10, uVar5, local_48);
            if (param_2 == (short *) 0x0) {
                (**(code * *)(*(longlong *) plVar4[10] + 0x20))();
                plVar3 = (longlong *) plVar4[10];
                (**(code * *)(*plVar4 + 0x78))(plVar4, 0);
                (**(code * *)(*plVar3 + 0x18))(plVar3, plVar4);
                lVar6 = *(longlong * )(param_1 + 8);
                if (*(int *) (lVar6 + 0x5c) == 0) {
                    *(undefined4 * )(lVar6 + 0x5c) = 0xa0670011;
                    puVar7 = (undefined8 *) FUN_14018d540(&local_res10, L"%0.8x", 0xa0670011);
                    uVar5 = *(undefined8 * )(lVar6 + 0x68);
                    *(undefined8 * )(lVar6 + 0x68) = *puVar7;
                    *puVar7 = uVar5;
                    if (local_res10 != (longlong *) 0x0) {
                        (**(code * *)(local_res10[-2] + 8))(local_res10 + -2);
                    }
                }
                goto LAB_1401a611f;
            }
            lVar6 = (**(code * *)(*plVar4 + 8))();
            if (lVar6 != 0) {
                iVar2 = *(int *) (lVar6 + 0x58);
                if (iVar2 == 2) {
                    if ((param_3 != (uint *) 0x0) && (puVar1 = (uint * )(lVar6 + 0x18), puVar1 != param_3)) {
                        if ((*param_3 & 0x200) != 0) {
                            FUN_14018b900(*(undefined8 * )(param_3 + 2), 0);
                        }
                        *param_3 = 0;
                        *(undefined8 * )(param_3 + 2) = 0;
                        *(undefined8 * )(param_3 + 4) = 0;
                        *param_3 = *puVar1;
                        *(undefined8 * )(param_3 + 2) = *(undefined8 * )(lVar6 + 0x20);
                        *(undefined8 * )(param_3 + 4) = *(undefined8 * )(lVar6 + 0x28);
                        *puVar1 = 0;
                        *(undefined8 * )(lVar6 + 0x20) = 0;
                        *(undefined8 * )(lVar6 + 0x28) = 0;
                    }
                    (**(code * *)(*(longlong *) plVar4[10] + 0x20))();
                    plVar3 = (longlong *) plVar4[10];
                    (**(code * *)(*plVar4 + 0x78))(plVar4, 0);
                    (**(code * *)(*plVar3 + 0x18))(plVar3, plVar4);
                    if ((local_48[0] & 0x200) != 0) {
                        FUN_14018b900(local_40, 0);
                        return param_2;
                    }
                    return param_2;
                }
                if (local_40 == local_38) {
                    if (iVar2 == 0) goto LAB_1401a5e77;
                } else {
                    if (iVar2 != 0) {
                        LAB_1401a5e77:
                        lVar6 = *(longlong * )(param_1 + 8);
                        if (-1 < *(int *) (lVar6 + 0x5c)) {
                            *(undefined4 * )(lVar6 + 0x5c) = 0xa0670010;
                            puVar7 = (undefined8 *) FUN_14018d540(&local_res10, L"%0.8x", 0xa0670010);
                            uVar5 = *(undefined8 * )(lVar6 + 0x68);
                            *(undefined8 * )(lVar6 + 0x68) = *puVar7;
                            *puVar7 = uVar5;
                            if (local_res10 != (longlong *) 0x0) {
                                (**(code * *)(local_res10[-2] + 8))(local_res10 + -2);
                            }
                        }
                        (**(code * *)(*(longlong *) plVar4[10] + 0x20))();
                        plVar3 = (longlong *) plVar4[10];
                        (**(code * *)(*plVar4 + 0x78))(plVar4, 0);
                        (**(code * *)(*plVar3 + 0x18))(plVar3, plVar4);
                        LAB_1401a611f:
                        if ((local_48[0] & 0x200) == 0) {
                            return (short *) 0x0;
                        }
                        FUN_14018b900(local_40, 0);
                        return (short *) 0x0;
                    }
                    lVar6 = (**(code * *)(*plVar4 + 0x30))(plVar4);
                    psVar8 = (short *) 0x0;
                    if (lVar6 == 0) {
                        psVar8 = (short *) FUN_1401a4f40(plVar4 + 3);
                    }
                    psVar9 = (short *) FUN_1401a4f40();
                    if (psVar9 != psVar8) {
                        psVar11 = (short *) 0x0;
                        if (*psVar9 != 0) {
                            do {
                                uVar10 = (uint) psVar11;
                                if (((*psVar8 == 0) || (*psVar9 != *psVar8)) || (0x7ffffffe < (int) uVar10)) break;
                                psVar9 = psVar9 + 1;
                                psVar8 = psVar8 + 1;
                                uVar10 = uVar10 + 1;
                                psVar11 = (short *) (ulonglong) uVar10;
                            } while (*psVar9 != 0);
                            if (uVar10 == 0x7fffffff) goto LAB_1401a5f64;
                        }
                        if ((*psVar9 != 0) || (*psVar8 != 0)) goto LAB_1401a5e77;
                    }
                }
            }
            LAB_1401a5f64:
            if (plVar4[1] == *(longlong * )(param_1 + 8)) {
                lVar6 = plVar4[2];
                if (lVar6 == 0) {
                    (**(code * *)(*(longlong *) plVar4[10] + 0x20))();
                } else {
                    if (plVar4 == *(longlong * *)(lVar6 + 0x30)) {
                        *(longlong * )(lVar6 + 0x30) = (*(longlong * *)(lVar6 + 0x30))[9];
                    }
                    if (plVar4 == *(longlong * *)(lVar6 + 0x38)) {
                        *(longlong * )(lVar6 + 0x38) = (*(longlong * *)(lVar6 + 0x38))[8];
                    }
                    if (plVar4[8] != 0) {
                        *(longlong * )(plVar4[8] + 0x48) = plVar4[9];
                    }
                    if (plVar4[9] != 0) {
                        *(longlong * )(plVar4[9] + 0x40) = plVar4[8];
                    }
                    plVar4[2] = 0;
                }
                if (*(longlong * )(param_1 + 0x38) == 0) {
                    *(longlong * *)(param_1 + 0x38) = plVar4;
                    *(longlong * *)(param_1 + 0x30) = plVar4;
                    plVar4[8] = 0;
                } else {
                    *(longlong * *)(*(longlong * )(param_1 + 0x38) + 0x48) = plVar4;
                    plVar4[8] = *(longlong * )(param_1 + 0x38);
                    *(longlong * *)(param_1 + 0x38) = plVar4;
                }
                plVar4[9] = 0;
                plVar4[2] = param_1;
            }
            if ((local_48[0] & 0x200) != 0) {
                FUN_14018b900(local_40, 0);
            }
            local_48[0] = 0;
            local_40 = 0;
            local_38 = 0;
        }
    }
    return (short *) 0x0;
}


void FUN_1401a6150(undefined8 param_1, longlong param_2) {
    longlong lVar1;

    lVar1 = *(longlong * )(param_2 + 0x10);
    if (lVar1 != 0) {
        if (param_2 == *(longlong * )(lVar1 + 0x30)) {
            *(undefined8 * )(lVar1 + 0x30) = *(undefined8 * )(*(longlong * )(lVar1 + 0x30) + 0x48);
        }
        if (param_2 == *(longlong * )(lVar1 + 0x38)) {
            *(undefined8 * )(lVar1 + 0x38) = *(undefined8 * )(*(longlong * )(lVar1 + 0x38) + 0x40);
        }
        if (*(longlong * )(param_2 + 0x40) != 0) {
            *(undefined8 * )(*(longlong * )(param_2 + 0x40) + 0x48) = *(undefined8 * )(param_2 + 0x48);
        }
        if (*(longlong * )(param_2 + 0x48) != 0) {
            *(undefined8 * )(*(longlong * )(param_2 + 0x48) + 0x40) = *(undefined8 * )(param_2 + 0x40);
        }
        *(undefined8 * )(param_2 + 0x10) = 0;
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001401a61ad. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**(longlong * *)(param_2 + 0x50) + 0x20))();
    return;
}


short *FUN_1401a61c0(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    undefined8 uVar2;
    short *psVar3;
    undefined8 *puVar4;
    byte bVar5;
    longlong local_res8;

    if (*(char *) (param_1 + 0x58) != '\0') {
        psVar3 = (short *) FUN_1401a4d00(param_1 + 0x18, param_2, &DAT_140a45340, 2);
        if ((psVar3 == (short *) 0x0) &&
            (lVar1 = *(longlong * )(param_1 + 8), -1 < *(int *) (lVar1 + 0x5c))) {
            *(undefined4 * )(lVar1 + 0x5c) = 0xa067000b;
            puVar4 = (undefined8 *) FUN_14018d540(&local_res8, L"%0.8x", 0xa067000b);
            uVar2 = *(undefined8 * )(lVar1 + 0x68);
            *(undefined8 * )(lVar1 + 0x68) = *puVar4;
            *puVar4 = uVar2;
            if (local_res8 != 0) {
                (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
            }
        }
        return psVar3;
    }
    bVar5 = (*(char *) (*(longlong * )(param_1 + 8) + 0x59) != '\0') + 2;
    if (*(int *) (*(longlong * )(param_1 + 8) + 0x60) == 1) {
        bVar5 = bVar5 | 4;
    }
    psVar3 = (short *) FUN_1401a4d00(param_1 + 0x18, param_2, &DAT_1409e2494, bVar5);
    if (psVar3 == (short *) 0x0) {
        FUN_1401a81b0(*(undefined8 * )(param_1 + 8), 0xa067000a, param_2);
    } else if (*psVar3 != 0) {
        return psVar3 + -1;
    }
    return (short *) 0x0;
}


void FUN_1401a62c0(longlong *param_1, longlong param_2) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == 0) {
        param_2 = param_1[1];
    }
    lVar1 = (**(code * *)(*param_1 + 0x30))();
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_1 + 3);
    } else {
        uVar2 = 0;
    }
    lVar1 = FUN_1401a7880(param_2, uVar2);
    *(undefined * )(lVar1 + 0x58) = *(undefined * )(param_1 + 0xb);
    return;
}


longlong FUN_1401a6420(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong local_res8;

    lVar3 = FUN_1401a4d00(param_1 + 0x18, param_2, &DAT_140a45348, 2);
    if ((lVar3 == 0) && (lVar1 = *(longlong * )(param_1 + 8), -1 < *(int *) (lVar1 + 0x5c))) {
        *(undefined4 * )(lVar1 + 0x5c) = 0xa067000c;
        puVar4 = (undefined8 *) FUN_14018d540(&local_res8, L"%0.8x", 0xa067000c);
        uVar2 = *(undefined8 * )(lVar1 + 0x68);
        *(undefined8 * )(lVar1 + 0x68) = *puVar4;
        *puVar4 = uVar2;
        if (local_res8 != 0) {
            (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
        }
    }
    return lVar3;
}


void FUN_1401a64b0(longlong *param_1, longlong param_2) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == 0) {
        param_2 = param_1[1];
    }
    lVar1 = (**(code * *)(*param_1 + 0x30))();
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_1 + 3);
    } else {
        uVar2 = 0;
    }
    FUN_1401a77e0(param_2, uVar2);
    return;
}


undefined8 FUN_1401a6500(longlong *param_1, longlong *param_2) {
    longlong *plVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    int iVar5;

    plVar1 = (longlong * )(**(code * *)(*param_2 + 0x20))(param_2);
    if (plVar1 == (longlong *) 0x0) {
        return 0;
    }
    lVar2 = (**(code * *)(*param_1 + 0x30))(param_1);
    if (lVar2 == 0) {
        psVar3 = (short *) FUN_1401a4f40(param_1 + 3);
    } else {
        psVar3 = (short *) 0x0;
    }
    lVar2 = (**(code * *)(*plVar1 + 0x30))();
    if (lVar2 == 0) {
        psVar4 = (short *) FUN_1401a4f40();
    } else {
        psVar4 = (short *) 0x0;
    }
    if (psVar4 != psVar3) {
        iVar5 = 0;
        if (*psVar4 != 0) {
            do {
                if (((*psVar3 == 0) || (*psVar4 != *psVar3)) || (0x7ffffffe < iVar5)) break;
                psVar4 = psVar4 + 1;
                psVar3 = psVar3 + 1;
                iVar5 = iVar5 + 1;
            } while (*psVar4 != 0);
            if (iVar5 == 0x7fffffff) {
                return 1;
            }
        }
        if (*psVar4 != 0) {
            return 0;
        }
        if (*psVar3 != 0) {
            return 0;
        }
    }
    return 1;
}


longlong FUN_1401a6610(longlong param_1, longlong param_2) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong local_res8;

    lVar3 = FUN_1401a4d00(param_1 + 0x18, param_2, &DAT_1409e454c, 2);
    if ((lVar3 == 0) && (lVar1 = *(longlong * )(param_1 + 8), -1 < *(int *) (lVar1 + 0x5c))) {
        *(undefined4 * )(lVar1 + 0x5c) = 0xa067000d;
        if (param_2 == 0) {
            puVar4 = (undefined8 *) FUN_14018d540(&local_res8, L"%0.8x", 0xa067000d);
            uVar2 = *(undefined8 * )(lVar1 + 0x68);
            *(undefined8 * )(lVar1 + 0x68) = *puVar4;
            *puVar4 = uVar2;
        } else {
            puVar4 = (undefined8 *) FUN_14018d540(&local_res8, L"%0.8x %s", 0xa067000d, param_2);
            uVar2 = *(undefined8 * )(lVar1 + 0x68);
            *(undefined8 * )(lVar1 + 0x68) = *puVar4;
            *puVar4 = uVar2;
        }
        if (local_res8 != 0) {
            (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
            return 0;
        }
    }
    return lVar3;
}


void FUN_1401a66f0(longlong *param_1, longlong param_2) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == 0) {
        param_2 = param_1[1];
    }
    lVar1 = (**(code * *)(*param_1 + 0x30))();
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_1 + 3);
    } else {
        uVar2 = 0;
    }
    FUN_1401a7920(param_2, uVar2);
    return;
}


undefined8 FUN_1401a6740(longlong *param_1, longlong *param_2) {
    longlong *plVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    int iVar5;

    plVar1 = (longlong * )(**(code * *)(*param_2 + 0x40))(param_2);
    if (plVar1 == (longlong *) 0x0) {
        return 0;
    }
    lVar2 = (**(code * *)(*param_1 + 0x30))(param_1);
    if (lVar2 == 0) {
        psVar3 = (short *) FUN_1401a4f40(param_1 + 3);
    } else {
        psVar3 = (short *) 0x0;
    }
    lVar2 = (**(code * *)(*plVar1 + 0x30))();
    if (lVar2 == 0) {
        psVar4 = (short *) FUN_1401a4f40();
    } else {
        psVar4 = (short *) 0x0;
    }
    if (psVar4 != psVar3) {
        iVar5 = 0;
        if (*psVar4 != 0) {
            do {
                if (((*psVar3 == 0) || (*psVar4 != *psVar3)) || (0x7ffffffe < iVar5)) break;
                psVar4 = psVar4 + 1;
                psVar3 = psVar3 + 1;
                iVar5 = iVar5 + 1;
            } while (*psVar4 != 0);
            if (iVar5 == 0x7fffffff) {
                return 1;
            }
        }
        if (*psVar4 != 0) {
            return 0;
        }
        if (*psVar3 != 0) {
            return 0;
        }
    }
    return 1;
}


longlong FUN_1401a6850(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong local_res8;

    lVar3 = FUN_1401a4d00(param_1 + 0x18, param_2, &DAT_1409e246c, 2);
    if ((lVar3 == 0) && (lVar1 = *(longlong * )(param_1 + 8), -1 < *(int *) (lVar1 + 0x5c))) {
        *(undefined4 * )(lVar1 + 0x5c) = 0xa067000e;
        puVar4 = (undefined8 *) FUN_14018d540(&local_res8, L"%0.8x", 0xa067000e);
        uVar2 = *(undefined8 * )(lVar1 + 0x68);
        *(undefined8 * )(lVar1 + 0x68) = *puVar4;
        *puVar4 = uVar2;
        if (local_res8 != 0) {
            (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
        }
    }
    return lVar3;
}


void FUN_1401a68e0(longlong *param_1, longlong param_2) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == 0) {
        param_2 = param_1[1];
    }
    lVar1 = (**(code * *)(*param_1 + 0x30))();
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_1 + 3);
    } else {
        uVar2 = 0;
    }
    FUN_1401a79c0(param_2, uVar2);
    return;
}


undefined8 FUN_1401a6930(longlong *param_1, longlong *param_2) {
    longlong *plVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    int iVar5;

    plVar1 = (longlong * )(**(code * *)(*param_2 + 0x50))(param_2);
    if (plVar1 == (longlong *) 0x0) {
        return 0;
    }
    lVar2 = (**(code * *)(*param_1 + 0x30))(param_1);
    if (lVar2 == 0) {
        psVar3 = (short *) FUN_1401a4f40(param_1 + 3);
    } else {
        psVar3 = (short *) 0x0;
    }
    lVar2 = (**(code * *)(*plVar1 + 0x30))();
    if (lVar2 == 0) {
        psVar4 = (short *) FUN_1401a4f40();
    } else {
        psVar4 = (short *) 0x0;
    }
    if (psVar4 != psVar3) {
        iVar5 = 0;
        if (*psVar4 != 0) {
            do {
                if (((*psVar3 == 0) || (*psVar4 != *psVar3)) || (0x7ffffffe < iVar5)) break;
                psVar4 = psVar4 + 1;
                psVar3 = psVar3 + 1;
                iVar5 = iVar5 + 1;
            } while (*psVar4 != 0);
            if (iVar5 == 0x7fffffff) {
                return 1;
            }
        }
        if (*psVar4 != 0) {
            return 0;
        }
        if (*psVar3 != 0) {
            return 0;
        }
    }
    return 1;
}


undefined8 FUN_1401a6a00(longlong param_1, undefined8 param_2, char param_3) {
    short *psVar1;
    short *psVar2;
    undefined8 uVar3;
    short local_res8;
    undefined2 local_resa;

    psVar2 = (short *) FUN_1401a4de0();
    if ((psVar2 != (short *) 0x0) && (*psVar2 != 0)) {
        for (; (*psVar2 == 0x20 || ((ushort)(*psVar2 - 9U) < 5)); psVar2 = psVar2 + 1) {
        }
        if (*psVar2 == 0x3d) {
            do {
                do {
                    psVar1 = psVar2;
                    psVar2 = psVar1 + 1;
                } while (*psVar2 == 0x20);
            } while ((ushort)(*psVar2 - 9U) < 5);
            local_res8 = *psVar2;
            if ((local_res8 == 0x22) || (local_res8 == 0x27)) {
                local_resa = 0;
                uVar3 = FUN_1401a4d00(param_1 + 0x20, psVar1 + 2, &local_res8, (param_3 != '\0') + '\x02');
                return uVar3;
            }
        }
    }
    return 0;
}


void FUN_1401a6b00(undefined8 *param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;

    lVar3 = param_1[0xc];
    *param_1 = &PTR_FUN_140b5eba0;
    while (lVar3 != 0) {
        puVar1 = (undefined8 *) param_1[0xc];
        lVar3 = puVar1[7];
        if (puVar1 != (undefined8 *) 0x0) {
            plVar2 = (longlong *) puVar1[8];
            (**(code * *) * puVar1)(puVar1, 0);
            (**(code * *)(*plVar2 + 0x18))(plVar2);
        }
        param_1[0xc] = lVar3;
    }
    FUN_1401a5900(param_1);
    return;
}


longlong FUN_1401a6b80(longlong param_1, short *param_2) {
    longlong lVar1;
    short *psVar2;
    int iVar3;
    short *psVar4;

    lVar1 = *(longlong * )(param_1 + 0x60);
    do {
        if (lVar1 == 0) {
            return 0;
        }
        psVar2 = (short *) FUN_1401a4f40();
        if (psVar2 == param_2) {
            return lVar1;
        }
        iVar3 = 0;
        psVar4 = param_2;
        if (*psVar2 != 0) {
            do {
                if (((*psVar4 == 0) || (*psVar2 != *psVar4)) || (0x7ffffffe < iVar3)) break;
                psVar2 = psVar2 + 1;
                psVar4 = psVar4 + 1;
                iVar3 = iVar3 + 1;
            } while (*psVar2 != 0);
            if (iVar3 == 0x7fffffff) {
                return lVar1;
            }
        }
        if ((*psVar2 == 0) && (*psVar4 == 0)) {
            return lVar1;
        }
        lVar1 = *(longlong * )(lVar1 + 0x38);
    } while (true);
}


undefined8 FUN_1401a6c20(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (*(longlong * *)(param_1 + 0x30) != (longlong *) 0x0) {
        lVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x30) + 0x10))();
        if (lVar2 != 0) {
            plVar1 = *(longlong * *)(param_1 + 0x30);
            lVar2 = (**(code * *)(*plVar1 + 0x30))(plVar1);
            if (lVar2 == 0) {
                uVar3 = FUN_1401a4f40(plVar1 + 3);
                return uVar3;
            }
        }
    }
    return 0;
}


undefined8 *FUN_1401a6c70(longlong param_1, short *param_2) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    short *psVar3;
    undefined8 *puVar4;
    uint uVar5;
    short *psVar6;
    undefined8 *puVar7;

    puVar7 = (undefined8 *) 0x0;
    puVar4 = *(undefined8 * *)(param_1 + 0x60);
    puVar2 = puVar7;
    do {
        puVar1 = puVar4;
        if (puVar1 == (undefined8 *) 0x0) {
            LAB_1401a6d05:
            puVar4 = (undefined8 * )
                    (**(code * *)(*(longlong * )(*(longlong * )(param_1 + 8) + 0x100) + 0x10))();
            if (puVar4 != (undefined8 *) 0x0) {
                *puVar4 = &PTR_FUN_140b5eb98;
                *(undefined4 * )(puVar4 + 1) = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                *(undefined4 * )(puVar4 + 4) = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
                puVar4[7] = 0;
                puVar4[8] = 0;
                puVar7 = puVar4;
            }
            puVar7[8] = *(longlong * )(param_1 + 8) + 0x100;
            if (puVar2 == (undefined8 *) 0x0) {
                *(undefined8 * *)(param_1 + 0x60) = puVar7;
            } else {
                puVar2[7] = puVar7;
            }
            FUN_1401a4c50(puVar7 + 1, param_2);
            (**(code * *)(*(longlong *) puVar7[8] + 0x20))();
            return puVar7;
        }
        psVar3 = (short *) FUN_1401a4f40();
        if (psVar3 == param_2) {
            LAB_1401a6d4a:
            if (puVar1 != (undefined8 *) 0x0) {
                return puVar1;
            }
            goto LAB_1401a6d05;
        }
        puVar4 = puVar7;
        psVar6 = param_2;
        if (*psVar3 != 0) {
            do {
                uVar5 = (uint) puVar4;
                if (((*psVar6 == 0) || (*psVar3 != *psVar6)) || (0x7ffffffe < (int) uVar5)) break;
                psVar3 = psVar3 + 1;
                psVar6 = psVar6 + 1;
                uVar5 = uVar5 + 1;
                puVar4 = (undefined8 * )(ulonglong)
                uVar5;
            } while (*psVar3 != 0);
            if (uVar5 == 0x7fffffff) goto LAB_1401a6d4a;
        }
        if ((*psVar3 == 0) && (*psVar6 == 0)) goto LAB_1401a6d4a;
        puVar4 = (undefined8 *) puVar1[7];
        puVar2 = puVar1;
    } while (true);
}


undefined8 *FUN_1401a6db0(longlong *param_1, undefined8 *param_2) {
    ushort uVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;

    puVar6 = (undefined8 *) 0x0;
    puVar7 = puVar6;
    if (param_2 != (undefined8 *) 0x0) {
        LAB_1401a6df0:
        for (; (*(ushort *) param_2 == 0x20 || ((ushort)(*(ushort *) param_2 - 9) < 5));
               param_2 = (undefined8 * )((longlong) param_2 + 2)) {
        }
        uVar1 = *(ushort *) param_2;
        if (uVar1 == 0) {
            lVar5 = (**(code * *)(*param_1 + 0x30))(param_1);
            param_2 = puVar6;
            if (lVar5 == 0) {
                param_2 = (undefined8 *) FUN_1401a4f40(param_1 + 3);
            }
            LAB_1401a6fad:
            FUN_1401a81b0(param_1[1], 0xa0670007, param_2);
            return (undefined8 *) 0x0;
        }
        if ((((uVar1 < 0x80) && (0x19 < (ushort)(uVar1 - 0x41))) && (0x19 < (ushort)(uVar1 - 0x61))) &&
            ((uVar1 != 0x3a && (uVar1 != 0x5f)))) {
            if (*(ushort *) param_2 == 0x3e) {
                return (undefined8 * )((longlong) param_2 + 2);
            }
            if ((*(ushort *) param_2 == 0x2f) && (*(ushort * )((longlong) param_2 + 2) == 0x3e)) {
                *(undefined4 * )(param_1 + 0xb) = 1;
                return (undefined8 * )((longlong) param_2 + 4);
            }
            goto LAB_1401a6fad;
        }
        puVar3 = (undefined8 * )(**(code * *)(*(longlong * )(param_1[1] + 0x100) + 0x10))();
        puVar8 = puVar6;
        if (puVar3 != (undefined8 *) 0x0) {
            *puVar3 = &PTR_FUN_140b5eb98;
            *(undefined4 * )(puVar3 + 1) = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            *(undefined4 * )(puVar3 + 4) = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar8 = puVar3;
        }
        lVar5 = param_1[1];
        puVar8[8] = (longlong * )(lVar5 + 0x100);
        (**(code * *)(*(longlong * )(lVar5 + 0x100) + 0x20))();
        param_2 = (undefined8 *) FUN_1401a6a00(puVar8, param_2, *(undefined * )(param_1[1] + 0x59));
        if (param_2 != (undefined8 *) 0x0) {
            uVar4 = FUN_1401a4f40(puVar8 + 1);
            lVar5 = FUN_1401a6b80(param_1, uVar4);
            if ((lVar5 != 0) && (lVar5 = FUN_1401a4f40(), lVar5 != 0)) goto LAB_1401a6f44;
            if (puVar7 == (undefined8 *) 0x0) {
                param_1[0xc] = (longlong) puVar8;
                puVar7 = puVar8;
            } else {
                puVar7[7] = puVar8;
                puVar7 = puVar8;
            }
            goto LAB_1401a6df0;
        }
        LAB_1401a6f44:
        plVar2 = (longlong *) puVar8[8];
        (**(code * *) * puVar8)(puVar8, 0);
        (**(code * *)(*plVar2 + 0x18))(plVar2, puVar8);
        lVar5 = (**(code * *)(*param_1 + 0x30))(param_1);
        if (lVar5 == 0) {
            puVar6 = (undefined8 *) FUN_1401a4f40(param_1 + 3);
        }
        FUN_1401a81b0(param_1[1], 0xa0670007, puVar6);
        param_2 = (undefined8 *) 0x0;
    }
    return param_2;
}


short *FUN_1401a6fd0(longlong param_1, short *param_2, undefined8 param_3) {
    undefined8 uVar1;
    short *psVar2;

    for (; (*param_2 == 0x20 || ((ushort)(*param_2 - 9U) < 5)); param_2 = param_2 + 1) {
    }
    if (*param_2 == 0x2f) {
        *(undefined4 * )(param_1 + 0x58) = 2;
        param_2 = param_2 + 1;
    }
    uVar1 = FUN_1401a4de0(param_1 + 0x18, param_2);
    if (*(longlong * )(param_1 + 0x20) == *(longlong * )(param_1 + 0x28)) {
        return (short *) 0x0;
    }
    psVar2 = (short *) FUN_1401a6db0(param_1, uVar1);
    if (((psVar2 != (short *) 0x0) && (*psVar2 != 0)) && (*(int *) (param_1 + 0x58) == 0)) {
        psVar2 = (short *) FUN_1401a5dc0(param_1, psVar2, param_3);
    }
    return psVar2;
}


undefined8 FUN_1401a7110(longlong *param_1, undefined8 *param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    short *psVar5;
    short *psVar6;
    int iVar7;

    plVar3 = (longlong * )(**(code * *) * param_2)(param_2);
    if (plVar3 == (longlong *) 0x0) {
        return 0;
    }
    lVar4 = (**(code * *)(*param_1 + 0x30))(param_1);
    if (lVar4 == 0) {
        psVar5 = (short *) FUN_1401a4f40(param_1 + 3);
    } else {
        psVar5 = (short *) 0x0;
    }
    lVar4 = (**(code * *)(*plVar3 + 0x30))();
    if (lVar4 == 0) {
        psVar6 = (short *) FUN_1401a4f40();
    } else {
        psVar6 = (short *) 0x0;
    }
    if (psVar6 != psVar5) {
        iVar7 = 0;
        if (*psVar6 != 0) {
            do {
                if (((*psVar5 == 0) || (*psVar6 != *psVar5)) || (0x7ffffffe < iVar7)) break;
                psVar6 = psVar6 + 1;
                psVar5 = psVar5 + 1;
                iVar7 = iVar7 + 1;
            } while (*psVar6 != 0);
            if (iVar7 == 0x7fffffff) goto LAB_1401a71c1;
        }
        if (*psVar6 != 0) {
            return 0;
        }
        if (*psVar5 != 0) {
            return 0;
        }
    }
    LAB_1401a71c1:
    lVar4 = param_1[0xc];
    lVar1 = plVar3[0xc];
    do {
        lVar2 = lVar1;
        if ((lVar4 == 0) || (lVar2 = lVar4, lVar1 == 0)) {
            if (lVar2 != 0) {
                return 0;
            }
            return 1;
        }
        psVar5 = (short *) FUN_1401a4f40(lVar1 + 0x20);
        psVar6 = (short *) FUN_1401a4f40();
        if (psVar6 != psVar5) {
            iVar7 = 0;
            if (*psVar6 != 0) {
                do {
                    if (((*psVar5 == 0) || (*psVar6 != *psVar5)) || (0x7ffffffe < iVar7)) break;
                    psVar6 = psVar6 + 1;
                    psVar5 = psVar5 + 1;
                    iVar7 = iVar7 + 1;
                } while (*psVar6 != 0);
                if (iVar7 == 0x7fffffff) goto LAB_1401a722f;
            }
            if (*psVar6 != 0) {
                return 0;
            }
            if (*psVar5 != 0) {
                return 0;
            }
        }
        LAB_1401a722f:
        lVar4 = *(longlong * )(lVar4 + 0x38);
        lVar1 = *(longlong * )(lVar1 + 0x38);
    } while (true);
}


void FUN_1401a7270(longlong param_1, longlong *param_2) {
    longlong *plVar1;
    char cVar2;

    cVar2 = (**(code * *)(*param_2 + 8))(param_2, param_1, *(undefined8 * )(param_1 + 0x60));
    if (cVar2 != '\0') {
        plVar1 = *(longlong * *)(param_1 + 0x30);
        while ((plVar1 != (longlong *) 0x0 &&
                (cVar2 = (**(code * *)(*plVar1 + 0x70))(plVar1, param_2), cVar2 != '\0'))) {
            plVar1 = (longlong *) plVar1[9];
        }
    }
    // WARNING: Could not recover jumptable at 0x0001401a72d3. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_2 + 0x18))(param_2, param_1);
    return;
}


undefined8 *FUN_1401a72e0(undefined8 *param_1) {
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = &PTR_LAB_140b5eb10;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined2 * )(param_1 + 0xb) = 0x100;
    *(undefined8 * )((longlong) param_1 + 0x5c) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = &PTR_LAB_140b5eaa8;
    param_1[0x1c] = 10;
    param_1[0x11] = param_1 + 0x12;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = &PTR_LAB_140b5ea78;
    param_1[0x2c] = 10;
    param_1[0x21] = param_1 + 0x22;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = &PTR_LAB_140b5ea48;
    param_1[0x3c] = 10;
    param_1[0x31] = param_1 + 0x32;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = &PTR_FUN_140b5ea18;
    param_1[0x4c] = 10;
    param_1[0x41] = param_1 + 0x42;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[1] = param_1;
    return param_1;
}


undefined8 FUN_1401a7420(undefined8 param_1, ulonglong param_2) {
    FUN_1401a76a0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1401a7460(undefined8 *param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = &PTR_LAB_140b5eb10;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined * )(param_1 + 0xb) = *(undefined * )(param_2 + 0x58);
    *(undefined * )((longlong) param_1 + 0x59) = *(undefined * )(param_2 + 0x59);
    *(undefined4 * )((longlong) param_1 + 0x5c) = *(undefined4 * )(param_2 + 0x5c);
    *(undefined4 * )(param_1 + 0xc) = *(undefined4 * )(param_2 + 0x60);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = &PTR_LAB_140b5eaa8;
    param_1[0x1c] = 10;
    param_1[0x11] = param_1 + 0x12;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = &PTR_LAB_140b5ea78;
    param_1[0x2c] = 10;
    param_1[0x21] = param_1 + 0x22;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = &PTR_LAB_140b5ea48;
    param_1[0x3c] = 10;
    param_1[0x31] = param_1 + 0x32;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = &PTR_FUN_140b5ea18;
    param_1[0x4c] = 10;
    param_1[0x41] = param_1 + 0x42;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[1] = param_1;
    for (lVar1 = *(longlong * )(param_2 + 0x30); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x48)) {
        lVar3 = FUN_1401a5ca0(lVar1, param_1);
        if (*(longlong * )(lVar3 + 8) == param_1[1]) {
            lVar2 = *(longlong * )(lVar3 + 0x10);
            if (lVar2 == 0) {
                (**(code * *)(**(longlong * *)(lVar3 + 0x50) + 0x20))();
            } else {
                if (lVar3 == *(longlong * )(lVar2 + 0x30)) {
                    *(undefined8 * )(lVar2 + 0x30) = *(undefined8 * )(*(longlong * )(lVar2 + 0x30) + 0x48);
                }
                if (lVar3 == *(longlong * )(lVar2 + 0x38)) {
                    *(undefined8 * )(lVar2 + 0x38) = *(undefined8 * )(*(longlong * )(lVar2 + 0x38) + 0x40);
                }
                if (*(longlong * )(lVar3 + 0x40) != 0) {
                    *(undefined8 * )(*(longlong * )(lVar3 + 0x40) + 0x48) = *(undefined8 * )(lVar3 + 0x48);
                }
                if (*(longlong * )(lVar3 + 0x48) != 0) {
                    *(undefined8 * )(*(longlong * )(lVar3 + 0x48) + 0x40) = *(undefined8 * )(lVar3 + 0x40);
                }
                *(undefined8 * )(lVar3 + 0x10) = 0;
            }
            if (param_1[7] == 0) {
                param_1[7] = lVar3;
                param_1[6] = lVar3;
                *(undefined8 * )(lVar3 + 0x40) = 0;
            } else {
                *(longlong * )(param_1[7] + 0x48) = lVar3;
                *(undefined8 * )(lVar3 + 0x40) = param_1[7];
                param_1[7] = lVar3;
            }
            *(undefined8 * )(lVar3 + 0x48) = 0;
            *(undefined8 * *)(lVar3 + 0x10) = param_1;
        }
    }
    return param_1;
}


void FUN_1401a76a0(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_LAB_140b5eb10;
    FUN_1401a59a0();
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0;
    lVar1 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1[0xe], 0);
    param_1[0xe] = 0;
    FUN_1401a8ec0(param_1 + 0x40);
    FUN_1401a8f80(param_1 + 0x30);
    FUN_1401a9040(param_1 + 0x20);
    FUN_1401a9130(param_1 + 0x10);
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1401a5900(param_1);
    return;
}


undefined8 *FUN_1401a7740(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong * )(param_1 + 0x80);
    puVar2 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = param_1;
        puVar2[2] = 0;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *puVar2 = &PTR_FUN_140b5eba0;
        *(undefined4 * )(puVar2 + 0xb) = 0;
        puVar2[0xc] = 0;
    }
    puVar2[10] = plVar1;
    FUN_1401a4c50(puVar2 + 3, param_2);
    return puVar2;
}


undefined8 *FUN_1401a77e0(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong * )(param_1 + 0x200);
    puVar2 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = param_1;
        puVar2[2] = 0;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *puVar2 = &PTR_LAB_140b5ec30;
    }
    puVar2[10] = plVar1;
    FUN_1401a4c50(puVar2 + 3, param_2);
    return puVar2;
}


undefined8 *FUN_1401a7880(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong * )(param_1 + 0x180);
    puVar2 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = param_1;
        puVar2[2] = 0;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *(undefined * )(puVar2 + 0xb) = 0;
        *puVar2 = &PTR_LAB_140b5ee70;
    }
    puVar2[10] = plVar1;
    FUN_1401a4c50(puVar2 + 3, param_2);
    return puVar2;
}


undefined8 *FUN_1401a7920(longlong param_1, wchar_t *param_2) {
    longlong *plVar1;
    undefined8 *puVar2;
    wchar_t *pwVar3;

    plVar1 = (longlong * )(param_1 + 0x200);
    puVar2 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = param_1;
        puVar2[2] = 0;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *puVar2 = &PTR_LAB_140b5ed50;
    }
    pwVar3 = L"xml version=\"1.0\" encoding=\"UTF-8\"";
    if (param_2 != (wchar_t *) 0x0) {
        pwVar3 = param_2;
    }
    puVar2[10] = plVar1;
    FUN_1401a4c50(puVar2 + 3, pwVar3);
    return puVar2;
}


undefined8 *FUN_1401a79c0(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong * )(param_1 + 0x200);
    puVar2 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
    if (puVar2 != (undefined8 *) 0x0) {
        puVar2[1] = param_1;
        puVar2[2] = 0;
        *(undefined4 * )(puVar2 + 3) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *puVar2 = &PTR_LAB_140b5ecc0;
    }
    puVar2[10] = plVar1;
    FUN_1401a4c50(puVar2 + 3, param_2);
    return puVar2;
}


undefined4 FUN_1401a7a60(longlong param_1, short *param_2, longlong param_3) {
    longlong lVar1;
    undefined auVar2[16];
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong local_res8;

    FUN_1401a59a0();
    lVar5 = 0;
    *(undefined4 * )(param_1 + 0x5c) = 0;
    lVar1 = *(longlong * )(param_1 + 0x68);
    *(undefined8 * )(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    *(undefined8 * )(param_1 + 0x70) = 0;
    if (((param_3 == 0) || (param_2 == (short *) 0x0)) || (*param_2 == 0)) {
        if (-1 < *(int *) (param_1 + 0x5c)) {
            *(undefined4 * )(param_1 + 0x5c) = 0xa067000f;
            puVar4 = (undefined8 *) FUN_14018d540(&local_res8, L"%0.8x", 0xa067000f);
            uVar3 = *(undefined8 * )(param_1 + 0x68);
            *(undefined8 * )(param_1 + 0x68) = *puVar4;
            *puVar4 = uVar3;
            if (local_res8 != 0) {
                (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
            }
        }
    } else {
        if (param_3 == -1) {
            do {
                param_3 = lVar5 + 1;
                lVar5 = param_3;
            } while (param_2[param_3] != 0);
        }
        auVar2 = ZEXT816(2) * ZEXT816(param_3 + 1);
        uVar3 = SUB168(auVar2, 0);
        if (SUB168(auVar2 >> 0x40, 0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        uVar3 = FUN_14018b280(uVar3, 0);
        *(undefined8 * )(param_1 + 0x70) = uVar3;
        FUN_1407db590(uVar3, param_2, param_3 * 2);
        *(undefined2 * )(param_3 * 2 + *(longlong * )(param_1 + 0x70)) = 0;
        FUN_1401a8260(param_1);
        if (*(int *) (param_1 + 0x5c) < 0) {
            FUN_1401a59a0(param_1);
            (**(code * *)(*(longlong * )(param_1 + 0x80) + 0x28))();
            (**(code * *)(*(longlong * )(param_1 + 0x100) + 0x28))();
            (**(code * *)(*(longlong * )(param_1 + 0x180) + 0x28))();
            (**(code * *)(*(longlong * )(param_1 + 0x200) + 0x28))();
        }
    }
    return *(undefined4 * )(param_1 + 0x5c);
}



// WARNING: Removing unreachable block (ram,0x0001401a7c4f)

undefined4 FUN_1401a7bd0(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;

    FUN_1401a59a0();
    *(undefined4 * )(param_1 + 0x5c) = 0;
    lVar1 = *(longlong * )(param_1 + 0x68);
    *(undefined8 * )(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    *(undefined8 * )(param_1 + 0x70) = 0;
    iVar2 = FUN_1401b6d00();
    if (iVar2 < 0) {
        uVar3 = FUN_1401a81b0(param_1, iVar2, param_2);
    } else {
        uVar3 = FUN_1401a7c70(param_1, 0);
    }
    return uVar3;
}


ulonglong FUN_1401a7c70(longlong *param_1, longlong *param_2) {
    byte *pbVar1;
    byte *pbVar2;
    byte bVar3;
    undefined auVar4[16];
    longlong *plVar5;
    byte *pbVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    longlong lVar9;
    byte *pbVar10;
    ulonglong uVar11;
    short *psVar12;
    longlong lVar13;
    ushort uVar14;
    longlong local_res8;

    FUN_1401a59a0();
    lVar13 = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0;
    lVar9 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar9 != 0) {
        (**(code * *)(*(longlong * )(lVar9 + -0x10) + 8))(lVar9 + -0x10);
    }
    FUN_14018b900(param_1[0xe], 0);
    param_1[0xe] = 0;
    if (param_2 == (longlong *) 0x0) {
        if (-1 < *(int *) ((longlong) param_1 + 0x5c)) {
            *(undefined4 * )((longlong) param_1 + 0x5c) = 0xa0670003;
            plVar5 = (longlong *) FUN_14018d540(&local_res8, L"%0.8x", 0xa0670003);
            lVar9 = param_1[0xd];
            param_1[0xd] = *plVar5;
            *plVar5 = lVar9;
            if (local_res8 != 0) {
                (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
            }
        }
        return (ulonglong) * (uint * )((longlong) param_1 + 0x5c);
    }
    pbVar6 = (byte * )(**(code * *)(*param_2 + 0x18))(param_2);
    uVar7 = (**(code * *)(*param_2 + 0x10))(param_2);
    if (uVar7 != 0) {
        if ((((uVar7 < 3) || ((char) *pbVar6 != 0xef)) || ((char) pbVar6[1] != 0xbb)) ||
            ((char) pbVar6[2] != 0xbf)) {
            *(undefined * )(param_1 + 0xb) = 0;
        } else {
            pbVar6 = pbVar6 + 3;
            *(undefined * )(param_1 + 0xb) = 1;
            uVar7 = uVar7 - 3;
        }
        uVar11 = uVar7;
        pbVar10 = pbVar6;
        if ((pbVar6 == (byte *) 0x0) && (uVar7 != 0)) {
            uVar7 = FUN_1401a81b0(param_1, 0x80070057, 0);
            return uVar7;
        }
        joined_r0x0001401a7d98:
        do {
            if (uVar11 == 0) break;
            bVar3 = *pbVar10;
            if ((char) bVar3 < '\0') {
                if (((uVar11 < 2) || ((bVar3 & 0xe0) != 0xc0)) ||
                    (pbVar1 = pbVar10 + 1, (*pbVar1 & 0xc0) != 0x80)) {
                    if ((((uVar11 < 3) || ((bVar3 & 0xf0) != 0xe0)) ||
                         (pbVar1 = pbVar10 + 1, (*pbVar1 & 0xc0) != 0x80)) ||
                        (pbVar2 = pbVar10 + 2, (*pbVar2 & 0xc0) != 0x80)) {
                        pbVar10 = pbVar10 + 1;
                        uVar11 = uVar11 - 1;
                        goto joined_r0x0001401a7d98;
                    }
                    pbVar10 = pbVar10 + 3;
                    uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar11 = uVar11 - 3;
                } else {
                    pbVar10 = pbVar10 + 2;
                    uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar11 = uVar11 - 2;
                }
            } else {
                pbVar10 = pbVar10 + 1;
                uVar14 = (ushort)(char)
                bVar3;
                uVar11 = uVar11 - 1;
            }
            lVar13 = lVar13 + 1;
        } while (uVar14 != 0);
        auVar4 = ZEXT816(2) * ZEXT816(lVar13 + 1);
        uVar8 = SUB168(auVar4, 0);
        if (SUB168(auVar4 >> 0x40, 0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar9 = FUN_14018b280(uVar8, 0);
        param_1[0xe] = lVar9;
        FUN_14018ea30(pbVar6, uVar7, lVar9, lVar13, 0);
        *(undefined2 * )(param_1[0xe] + lVar13 * 2) = 0;
        for (psVar12 = (short *) param_1[0xe]; (*psVar12 == 0x20 || ((ushort)(*psVar12 - 9U) < 5));
             psVar12 = psVar12 + 1) {
        }
        if (*psVar12 != 0) {
            (**(code * *)(*param_1 + 0x80))(param_1, psVar12, 0);
            goto LAB_1401a7f2e;
        }
    }
    if (-1 < *(int *) ((longlong) param_1 + 0x5c)) {
        *(undefined4 * )((longlong) param_1 + 0x5c) = 0xa067000f;
        plVar5 = (longlong *) FUN_14018d540(&local_res8, L"%0.8x", 0xa067000f);
        lVar9 = param_1[0xd];
        param_1[0xd] = *plVar5;
        *plVar5 = lVar9;
        if (local_res8 != 0) {
            (**(code * *)(*(longlong * )(local_res8 + -0x10) + 8))(local_res8 + -0x10);
        }
    }
    LAB_1401a7f2e:
    return (ulonglong) * (uint * )((longlong) param_1 + 0x5c);
}


int FUN_1401a7f50(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *local_res10;

    if (param_2 == 0) {
        return -0x5f98fffc;
    }
    local_res10 = (longlong *) 0x0;
    iVar2 = FUN_1401a7fc0(param_1, &local_res10);
    plVar1 = local_res10;
    if (-1 < iVar2) {
        iVar2 = FUN_1401b6f30();
        iVar3 = 0;
        if (-1 < iVar2) goto LAB_1401a7f9e;
    }
    iVar3 = iVar2;
    LAB_1401a7f9e:
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 8))(plVar1);
    }
    return iVar3;
}


void FUN_1401a7fc0(longlong *param_1, longlong **param_2) {
    ushort uVar1;
    ushort *puVar2;
    int iVar3;
    undefined2 *puVar4;
    ushort *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined auStack456[32];
    undefined8 local_1a8;
    longlong *local_198[2];
    undefined **local_188[2];
    undefined *local_178;
    undefined local_170[248];
    ushort *local_78;
    ushort local_70[22];
    int local_44;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack456;
    if ((*(int *) ((longlong) param_1 + 0x5c) == 0) && (param_2 != (longlong **) 0x0)) {
        FUN_1401a8320(local_188);
        (**(code * *)(*param_1 + 0x70))(param_1, local_188);
        puVar2 = local_78;
        local_44 = local_44 + -1;
        if ((local_78 != (ushort *) 0x0) || (local_44 == 0)) {
            lVar7 = 0;
            puVar5 = local_78;
            lVar6 = (longlong) local_44;
            if (local_44 != 0) {
                do {
                    uVar1 = *puVar5;
                    if (uVar1 < 0x80) {
                        lVar7 = lVar7 + 1;
                    } else if (uVar1 < 0x1000) {
                        lVar7 = lVar7 + 2;
                    } else {
                        lVar7 = lVar7 + 3;
                    }
                    if (uVar1 == 0) break;
                    lVar6 = lVar6 + -1;
                    puVar5 = puVar5 + 1;
                } while (lVar6 != 0);
            }
            lVar6 = lVar7;
            if (*(char *) (param_1 + 0xb) != '\0') {
                lVar6 = lVar7 + 3;
            }
            iVar3 = FUN_1401c5690(lVar6, local_198, 0);
            if (-1 < iVar3) {
                puVar4 = (undefined2 * )(**(code * *)(*local_198[0] + 0x20))(local_198[0]);
                if (*(char *) (param_1 + 0xb) != '\0') {
                    *puVar4 = 0xbbef;
                    *(undefined * )(puVar4 + 1) = 0xbf;
                    puVar4 = (undefined2 * )((longlong) puVar4 + 3);
                }
                local_1a8 = 0;
                iVar3 = FUN_14018eb80(puVar2, (longlong) local_44, puVar4, lVar7);
                if (iVar3 < 0) {
                    (**(code * *)(*local_198[0] + 8))(local_198[0]);
                } else {
                    *param_2 = local_198[0];
                }
            }
        }
        local_188[0] = &PTR_FUN_140b57b40;
        if (local_78 != local_70) {
            FUN_14018b900(local_78, 0);
        }
        if (local_178 != local_170) {
            FUN_14018b900(local_178, 0);
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack456);
    return;
}


int FUN_1401a81b0(longlong param_1, int param_2, longlong param_3) {
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong local_res8[4];

    if (*(int *) (param_1 + 0x5c) < 0) {
        return *(int *) (param_1 + 0x5c);
    }
    *(int *) (param_1 + 0x5c) = param_2;
    if (param_3 == 0) {
        if (-1 < param_2) {
            lVar2 = *(longlong * )(param_1 + 0x68);
            *(undefined8 * )(param_1 + 0x68) = 0;
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                return *(int *) (param_1 + 0x5c);
            }
            return param_2;
        }
        puVar3 = (undefined8 *) FUN_14018d540(local_res8, L"%0.8x", param_2);
    } else {
        puVar3 = (undefined8 *) FUN_14018d540(local_res8, L"%0.8x %s", param_2, param_3);
    }
    uVar1 = *(undefined8 * )(param_1 + 0x68);
    *(undefined8 * )(param_1 + 0x68) = *puVar3;
    *puVar3 = uVar1;
    if (local_res8[0] != 0) {
        (**(code * *)(*(longlong * )(local_res8[0] + -0x10) + 8))(local_res8[0] + -0x10);
    }
    return *(int *) (param_1 + 0x5c);
}


void FUN_1401a8260(longlong *param_1) {
    longlong lVar1;
    longlong *plVar2;
    short *psVar3;
    longlong local_res8[4];

    for (psVar3 = (short *) param_1[0xe]; (*psVar3 == 0x20 || ((ushort)(*psVar3 - 9U) < 5));
         psVar3 = psVar3 + 1) {
    }
    *(undefined * )(param_1 + 0xb) = 0;
    if ((*(char *) psVar3 == -0x11) &&
        ((*(char *) ((longlong) psVar3 + 1) == -0x45 && (*(char *) (psVar3 + 1) == -0x41)))) {
        *(undefined * )(param_1 + 0xb) = 1;
        psVar3 = psVar3 + 3;
    }
    if (*psVar3 == 0) {
        if (-1 < *(int *) ((longlong) param_1 + 0x5c)) {
            *(undefined4 * )((longlong) param_1 + 0x5c) = 0xa067000f;
            plVar2 = (longlong *) FUN_14018d540(local_res8, L"%0.8x", 0xa067000f);
            lVar1 = param_1[0xd];
            param_1[0xd] = *plVar2;
            *plVar2 = lVar1;
            if (local_res8[0] != 0) {
                (**(code * *)(*(longlong * )(local_res8[0] + -0x10) + 8))(local_res8[0] + -0x10);
                return;
            }
        }
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001401a8304. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x80))(param_1, psVar3, 0);
    return;
}


undefined8 *FUN_1401a8320(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;
    undefined *puVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong lVar6;

    *(undefined * )(param_1 + 1) = 0;
    puVar1 = param_1 + 0x23;
    *param_1 = &PTR_FUN_140b57b40;
    param_1[0xd] = 10;
    param_1[2] = param_1 + 3;
    *(undefined * )(param_1 + 0xe) = 1;
    *(undefined4 * )((longlong) param_1 + 0x84) = 0xffffffff;
    *(undefined2 * )(param_1 + 0x11) = 1;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 0x10) = 0;
    param_1[0x22] = puVar1;
    param_1[0x28] = 0x14;
    puVar3 = (undefined * )((longlong) param_1 + 0xca);
    lVar6 = 0x40;
    do {
        puVar3[-0x40] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined * )((longlong) param_1 + 0xac) = 1;
    *(undefined2 * )(param_1 + 0x16) = 0x101;
    *(undefined * )((longlong) param_1 + 0xc6) = 1;
    *(undefined * )(param_1 + 0x19) = 1;
    *(undefined * )(param_1 + 0x1e) = 1;
    *(undefined * )((longlong) param_1 + 0x106) = 1;
    *(undefined * )(param_1 + 0x21) = 1;
    iVar2 = *(int *) ((longlong) param_1 + 0x144) + 1;
    if (*(int *) (param_1 + 0x28) < iVar2) {
        uVar4 = FUN_14018a3e0((longlong) iVar2 * 2);
        iVar2 = (int) (uVar4 >> 1);
        *(int *) (param_1 + 0x28) = iVar2;
        if ((undefined8 *) param_1[0x22] == puVar1) {
            uVar5 = FUN_14018b280((longlong) iVar2 * 2, 0);
            param_1[0x22] = uVar5;
            FUN_1407db590(uVar5, puVar1, (longlong) * (int *) ((longlong) param_1 + 0x144) * 2);
        } else {
            uVar5 = FUN_14018c320((undefined8 *) param_1[0x22], (longlong) iVar2 * 2, 0);
            param_1[0x22] = uVar5;
        }
    }
    *(undefined2 * )(param_1[0x22] + (longlong) * (int *) ((longlong) param_1 + 0x144) * 2) = 0;
    *(int *) ((longlong) param_1 + 0x144) = *(int *) ((longlong) param_1 + 0x144) + 1;
    return param_1;
}


void FUN_1401a8480(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    int iVar1;
    int iVar2;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    if (*(longlong * )(param_1 + 0x78) != 0) {
        FUN_1407e13fc(*(longlong * )(param_1 + 0x78), param_2, &local_res18);
        return;
    }
    iVar2 = FUN_1407dff50(param_2);
    if (iVar2 != -1) {
        FUN_1401a8d80(param_1 + 0x110, *(int *) (param_1 + 0x144) + iVar2);
        iVar1 = *(int *) (param_1 + 0x144);
        *(int *) (param_1 + 0x144) = iVar1 + iVar2;
        FUN_1407e0010(*(longlong * )(param_1 + 0x110) + (longlong) iVar1 * 2 + -2, (longlong)(iVar2 + 1),
                      0xffffffffffffffff, param_2, &local_res18);
    }
    return;
}


void FUN_1401a8580(longlong param_1, ushort *param_2, char param_3) {
    ushort uVar1;
    ushort *puVar2;
    ulonglong uVar3;
    ushort *puVar4;
    longlong lVar5;

    puVar4 = param_2;
    if (*(char *) (param_1 + 0x88) != '\0') {
        lVar5 = param_1 + 0xca;
        if (param_3 == '\0') {
            lVar5 = param_1 + 0x8a;
        }
        uVar1 = *param_2;
        while (uVar1 != 0) {
            if (((ushort)(*param_2 - 1) < 0x3f) && (*(char *) ((ulonglong) * param_2 + lVar5) != '\0')) {
                for (; puVar4 < param_2; puVar4 = puVar4 + uVar3) {
                    uVar3 = (longlong) param_2 - (longlong) puVar4 >> 1;
                    if (0x7fffffff < uVar3) {
                        uVar3 = 0x7fffffff;
                    }
                    FUN_1401a8480(param_1, L"%.*s", uVar3, puVar4);
                }
                puVar2 = &DAT_140a4545c;
                do {
                    if (*puVar2 == *param_2) {
                        FUN_1401a8480(param_1, L"&%s;");
                        break;
                    }
                    puVar2 = puVar2 + 8;
                } while ((longlong) puVar2 < 0x140a454ac);
                puVar4 = puVar4 + 1;
            }
            param_2 = param_2 + 1;
            uVar1 = *param_2;
        }
    }
    if ((*(char *) (param_1 + 0x88) == '\0') || (puVar4 < param_2)) {
        FUN_1401a8480(param_1, &DAT_1409e45bc, puVar4);
    }
    return;
}


void FUN_1401a86e0(longlong *param_1, undefined8 param_2, char param_3) {
    if (*(char *) (param_1 + 1) != '\0') {
        *(undefined * )(param_1 + 1) = 0;
        FUN_1401a8480(param_1, &DAT_1409e2504);
    }
    FUN_1401a8d00(param_1 + 2, *(int *) ((longlong) param_1 + 0x6c) + 1);
    *(undefined8 * )(param_1[2] + (longlong) * (int *) ((longlong) param_1 + 0x6c) * 8) = param_2;
    *(int *) ((longlong) param_1 + 0x6c) = *(int *) ((longlong) param_1 + 0x6c) + 1;
    if ((*(int *) ((longlong) param_1 + 0x84) < 0) && (*(char *) (param_1 + 0xe) == '\0')) {
        if (param_3 != '\0') goto LAB_1401a876a;
        FUN_1401a8480(param_1, &DAT_1409e24b4);
    } else if (param_3 != '\0') goto LAB_1401a876a;
    (**(code * *)(*param_1 + 0x58))(param_1, *(undefined4 * )(param_1 + 0x10));
    LAB_1401a876a:
    FUN_1401a8480(param_1, &DAT_140a45378, param_2);
    *(int *) (param_1 + 0x10) = *(int *) (param_1 + 0x10) + 1;
    *(undefined * )(param_1 + 1) = 1;
    *(undefined * )(param_1 + 0xe) = 0;
    return;
}


void FUN_1401a8860(longlong param_1, undefined8 param_2, char param_3) {
    *(int *) (param_1 + 0x84) = *(int *) (param_1 + 0x80) + -1;
    if (*(char *) (param_1 + 8) != '\0') {
        *(undefined * )(param_1 + 8) = 0;
        FUN_1401a8480(param_1, &DAT_1409e2504);
    }
    if (param_3 != '\0') {
        FUN_1401a8480(param_1, L"<![CDATA[%s]]>", param_2);
        return;
    }
    FUN_1401a8580(param_1, param_2, 1);
    return;
}


void FUN_1401a88e0(longlong *param_1, undefined8 param_2) {
    if (*(char *) (param_1 + 1) != '\0') {
        *(undefined * )(param_1 + 1) = 0;
        FUN_1401a8480(param_1, &DAT_1409e2504);
    }
    if (((*(int *) ((longlong) param_1 + 0x84) < 0) && (*(char *) (param_1 + 0xe) == '\0')) &&
        (*(char *) ((longlong) param_1 + 0x89) == '\0')) {
        FUN_1401a8480(param_1, &DAT_1409e25ec);
        (**(code * *)(*param_1 + 0x58))(param_1, *(undefined4 * )(param_1 + 0x10));
    }
    *(undefined * )(param_1 + 0xe) = 0;
    FUN_1401a8480(param_1, L"<!--%s-->", param_2);
    return;
}


void FUN_1401a8960(longlong *param_1, undefined8 param_2) {
    if (*(char *) (param_1 + 1) != '\0') {
        *(undefined * )(param_1 + 1) = 0;
        FUN_1401a8480(param_1, &DAT_1409e2504);
    }
    if (((*(int *) ((longlong) param_1 + 0x84) < 0) && (*(char *) (param_1 + 0xe) == '\0')) &&
        (*(char *) ((longlong) param_1 + 0x89) == '\0')) {
        FUN_1401a8480(param_1, &DAT_1409e2604);
        (**(code * *)(*param_1 + 0x58))(param_1, *(undefined4 * )(param_1 + 0x10));
    }
    *(undefined * )(param_1 + 0xe) = 0;
    FUN_1401a8480(param_1, L"<?%s?>", param_2);
    return;
}


void FUN_1401a89e0(longlong *param_1, undefined8 param_2) {
    if (*(char *) (param_1 + 1) != '\0') {
        *(undefined * )(param_1 + 1) = 0;
        FUN_1401a8480(param_1, &DAT_1409e2504);
    }
    if (((*(int *) ((longlong) param_1 + 0x84) < 0) && (*(char *) (param_1 + 0xe) == '\0')) &&
        (*(char *) ((longlong) param_1 + 0x89) == '\0')) {
        FUN_1401a8480(param_1, &DAT_1409e25d4);
        (**(code * *)(*param_1 + 0x58))(param_1, *(undefined4 * )(param_1 + 0x10));
    }
    *(undefined * )(param_1 + 0xe) = 0;
    FUN_1401a8480(param_1, L"<!%s>", param_2);
    return;
}


undefined8 FUN_1401a8a60(longlong param_1, longlong param_2) {
    *(undefined * )(param_1 + 0x88) = *(undefined * )(param_2 + 0x59);
    if (*(char *) (param_2 + 0x58) != '\0') {
        FUN_1401a8480(param_1, &DAT_1409e457c, &DAT_140b5ea10);
    }
    return 1;
}


undefined FUN_1401a8b80(longlong *param_1) {
    longlong lVar1;
    undefined uVar2;

    lVar1 = *param_1;
    uVar2 = (**(code * *)(lVar1 + 0x50))();
    (**(code * *)(lVar1 + 0x48))(param_1, uVar2);
    return 1;
}


undefined8 FUN_1401a8bb0(undefined8 param_1, longlong *param_2) {
    undefined uVar1;
    longlong lVar2;
    undefined8 uVar3;

    uVar1 = *(undefined * )(param_2 + 0xb);
    lVar2 = (**(code * *)(*param_2 + 0x30))(param_2);
    if (lVar2 == 0) {
        uVar3 = FUN_1401a4f40(param_2 + 3);
    } else {
        uVar3 = 0;
    }
    FUN_1401a8860(param_1, uVar3, uVar1);
    return 1;
}


undefined8 FUN_1401a8c10(undefined8 param_1, longlong *param_2) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = (**(code * *)(*param_2 + 0x30))(param_2);
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_2 + 3);
    } else {
        uVar2 = 0;
    }
    FUN_1401a88e0(param_1, uVar2);
    return 1;
}


undefined8 FUN_1401a8c60(undefined8 param_1, longlong *param_2) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = (**(code * *)(*param_2 + 0x30))(param_2);
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_2 + 3);
    } else {
        uVar2 = 0;
    }
    FUN_1401a8960(param_1, uVar2);
    return 1;
}


undefined8 FUN_1401a8cb0(undefined8 param_1, longlong *param_2) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = (**(code * *)(*param_2 + 0x30))(param_2);
    if (lVar1 == 0) {
        uVar2 = FUN_1401a4f40(param_2 + 3);
    } else {
        uVar2 = 0;
    }
    FUN_1401a89e0(param_1, uVar2);
    return 1;
}


void FUN_1401a8d00(longlong *param_1, int param_2) {
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;

    if (*(int *) (param_1 + 0xb) < param_2) {
        uVar2 = FUN_14018a3e0((longlong) param_2 << 3);
        iVar1 = (int) (uVar2 >> 3);
        *(int *) (param_1 + 0xb) = iVar1;
        if ((longlong * ) * param_1 == param_1 + 1) {
            lVar3 = FUN_14018b280((longlong) iVar1 << 3, 0);
            *param_1 = lVar3;
            FUN_1407db590(lVar3, param_1 + 1, (longlong) * (int *) ((longlong) param_1 + 0x5c) << 3);
            return;
        }
        lVar3 = FUN_14018c320((longlong * ) * param_1, (longlong) iVar1 << 3, 0);
        *param_1 = lVar3;
    }
    return;
}


void FUN_1401a8d80(longlong *param_1, int param_2) {
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;

    if (*(int *) (param_1 + 6) < param_2) {
        uVar2 = FUN_14018a3e0((longlong) param_2 * 2);
        iVar1 = (int) (uVar2 >> 1);
        *(int *) (param_1 + 6) = iVar1;
        if ((longlong * ) * param_1 == param_1 + 1) {
            lVar3 = FUN_14018b280((longlong) iVar1 * 2, 0);
            *param_1 = lVar3;
            FUN_1407db590(lVar3, param_1 + 1, (longlong) * (int *) ((longlong) param_1 + 0x34) * 2);
            return;
        }
        lVar3 = FUN_14018c320((longlong * ) * param_1, (longlong) iVar1 * 2, 0);
        *param_1 = lVar3;
    }
    return;
}


undefined8 FUN_1401a8e00(undefined8 param_1, ulonglong param_2) {
    FUN_1401a8ec0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401a8e80(longlong param_1) {
    int iVar1;

    iVar1 = *(int *) (param_1 + 100);
    while (iVar1 != 0) {
        *(int *) (param_1 + 100) = *(int *) (param_1 + 100) + -1;
        FUN_14018b900(*(undefined8 * )
                (*(longlong * )(param_1 + 8) + (longlong) * (int *) (param_1 + 100) * 8), 0);
        iVar1 = *(int *) (param_1 + 100);
    }
    *(undefined8 * )(param_1 + 0x68) = 0;
    *(undefined8 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    return;
}


void FUN_1401a8ec0(undefined8 *param_1) {
    int iVar1;

    iVar1 = *(int *) ((longlong) param_1 + 100);
    *param_1 = &PTR_FUN_140b5ea18;
    while (iVar1 != 0) {
        *(int *) ((longlong) param_1 + 100) = *(int *) ((longlong) param_1 + 100) + -1;
        FUN_14018b900(*(undefined8 * )(param_1[1] + (longlong) * (int *) ((longlong) param_1 + 100) * 8), 0);
        iVar1 = *(int *) ((longlong) param_1 + 100);
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *) param_1[1] != param_1 + 2) {
        FUN_14018b900((undefined8 *) param_1[1], 0);
    }
    *param_1 = &PTR_FUN_140b5ead8;
    return;
}


void FUN_1401a8f80(undefined8 *param_1) {
    int iVar1;

    iVar1 = *(int *) ((longlong) param_1 + 100);
    *param_1 = &PTR_LAB_140b5ea48;
    while (iVar1 != 0) {
        *(int *) ((longlong) param_1 + 100) = *(int *) ((longlong) param_1 + 100) + -1;
        FUN_14018b900(*(undefined8 * )(param_1[1] + (longlong) * (int *) ((longlong) param_1 + 100) * 8), 0);
        iVar1 = *(int *) ((longlong) param_1 + 100);
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *) param_1[1] != param_1 + 2) {
        FUN_14018b900((undefined8 *) param_1[1], 0);
    }
    *param_1 = &PTR_FUN_140b5ead8;
    return;
}


void FUN_1401a9040(undefined8 *param_1) {
    int iVar1;

    iVar1 = *(int *) ((longlong) param_1 + 100);
    *param_1 = &PTR_LAB_140b5ea78;
    while (iVar1 != 0) {
        *(int *) ((longlong) param_1 + 100) = *(int *) ((longlong) param_1 + 100) + -1;
        FUN_14018b900(*(undefined8 * )(param_1[1] + (longlong) * (int *) ((longlong) param_1 + 100) * 8), 0);
        iVar1 = *(int *) ((longlong) param_1 + 100);
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *) param_1[1] != param_1 + 2) {
        FUN_14018b900((undefined8 *) param_1[1], 0);
    }
    *param_1 = &PTR_FUN_140b5ead8;
    return;
}


undefined8 *FUN_1401a9100(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b5ead8;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401a9130(undefined8 *param_1) {
    int iVar1;

    iVar1 = *(int *) ((longlong) param_1 + 100);
    *param_1 = &PTR_LAB_140b5eaa8;
    while (iVar1 != 0) {
        *(int *) ((longlong) param_1 + 100) = *(int *) ((longlong) param_1 + 100) + -1;
        FUN_14018b900(*(undefined8 * )(param_1[1] + (longlong) * (int *) ((longlong) param_1 + 100) * 8), 0);
        iVar1 = *(int *) ((longlong) param_1 + 100);
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *) param_1[1] != param_1 + 2) {
        FUN_14018b900((undefined8 *) param_1[1], 0);
    }
    *param_1 = &PTR_FUN_140b5ead8;
    return;
}


void FUN_1401a91a0(undefined8 *param_1) {
    *param_1 = &PTR_FUN_140b5eb98;
    if ((*(uint * )(param_1 + 4) & 0x200) != 0) {
        FUN_14018b900(param_1[5], 0);
    }
    *(undefined4 * )(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    if ((*(uint * )(param_1 + 1) & 0x200) != 0) {
        FUN_14018b900(param_1[2], 0);
    }
    *(undefined4 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
}


undefined8 FUN_1401a9210(undefined8 param_1, ulonglong param_2) {
    FUN_1401a91a0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1401a9250(longlong param_1) {
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;

    if (*(longlong * )(param_1 + 0x68) == 0) {
        plVar3 = (longlong *) FUN_14018b280(0xfc0, 0);
        FUN_1401a8d00(param_1 + 8, *(int *) (param_1 + 100) + 1);
        *(longlong * *)(*(longlong * )(param_1 + 8) + (longlong) * (int *) (param_1 + 100) * 8) = plVar3;
        *(int *) (param_1 + 100) = *(int *) (param_1 + 100) + 1;
        iVar5 = 1;
        lVar7 = 0x37;
        plVar6 = plVar3;
        do {
            lVar4 = (longlong) iVar5;
            iVar5 = iVar5 + 1;
            *plVar6 = (longlong)(plVar3 + lVar4 * 9);
            lVar7 = lVar7 + -1;
            plVar6 = plVar6 + 9;
        } while (lVar7 != 0);
        plVar3[0x1ef] = 0;
        *(longlong * *)(param_1 + 0x68) = plVar3;
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x68);
    uVar2 = *puVar1;
    *(int *) (param_1 + 0x70) = *(int *) (param_1 + 0x70) + 1;
    *(undefined8 * )(param_1 + 0x68) = uVar2;
    if (*(int *) (param_1 + 0x78) < *(int *) (param_1 + 0x70)) {
        *(int *) (param_1 + 0x78) = *(int *) (param_1 + 0x70);
    }
    *(int *) (param_1 + 0x74) = *(int *) (param_1 + 0x74) + 1;
    *(int *) (param_1 + 0x7c) = *(int *) (param_1 + 0x7c) + 1;
    return puVar1;
}


undefined8 *FUN_1401a9310(longlong param_1) {
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;

    if (*(longlong * )(param_1 + 0x68) == 0) {
        plVar3 = (longlong *) FUN_14018b280(0xfd8, 0);
        FUN_1401a8d00(param_1 + 8, *(int *) (param_1 + 100) + 1);
        *(longlong * *)(*(longlong * )(param_1 + 8) + (longlong) * (int *) (param_1 + 100) * 8) = plVar3;
        *(int *) (param_1 + 100) = *(int *) (param_1 + 100) + 1;
        iVar5 = 1;
        lVar7 = 0x26;
        plVar6 = plVar3;
        do {
            lVar4 = (longlong) iVar5;
            iVar5 = iVar5 + 1;
            *plVar6 = (longlong)(plVar3 + lVar4 * 0xd);
            lVar7 = lVar7 + -1;
            plVar6 = plVar6 + 0xd;
        } while (lVar7 != 0);
        plVar3[0x1ee] = 0;
        *(longlong * *)(param_1 + 0x68) = plVar3;
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x68);
    uVar2 = *puVar1;
    *(int *) (param_1 + 0x70) = *(int *) (param_1 + 0x70) + 1;
    *(undefined8 * )(param_1 + 0x68) = uVar2;
    if (*(int *) (param_1 + 0x78) < *(int *) (param_1 + 0x70)) {
        *(int *) (param_1 + 0x78) = *(int *) (param_1 + 0x70);
    }
    *(int *) (param_1 + 0x74) = *(int *) (param_1 + 0x74) + 1;
    *(int *) (param_1 + 0x7c) = *(int *) (param_1 + 0x7c) + 1;
    return puVar1;
}


undefined8 *FUN_1401a93d0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5ee70;
    FUN_1401a5900();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1401a9410(longlong param_1) {
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;

    if (*(longlong * )(param_1 + 0x68) == 0) {
        plVar3 = (longlong *) FUN_14018b280(0xfc0, 0);
        FUN_1401a8d00(param_1 + 8, *(int *) (param_1 + 100) + 1);
        *(longlong * *)(*(longlong * )(param_1 + 8) + (longlong) * (int *) (param_1 + 100) * 8) = plVar3;
        *(int *) (param_1 + 100) = *(int *) (param_1 + 100) + 1;
        iVar5 = 1;
        lVar7 = 0x29;
        plVar6 = plVar3;
        do {
            lVar4 = (longlong) iVar5;
            iVar5 = iVar5 + 1;
            *plVar6 = (longlong)(plVar3 + lVar4 * 0xc);
            lVar7 = lVar7 + -1;
            plVar6 = plVar6 + 0xc;
        } while (lVar7 != 0);
        plVar3[0x1ec] = 0;
        *(longlong * *)(param_1 + 0x68) = plVar3;
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x68);
    uVar2 = *puVar1;
    *(int *) (param_1 + 0x70) = *(int *) (param_1 + 0x70) + 1;
    *(undefined8 * )(param_1 + 0x68) = uVar2;
    if (*(int *) (param_1 + 0x78) < *(int *) (param_1 + 0x70)) {
        *(int *) (param_1 + 0x78) = *(int *) (param_1 + 0x70);
    }
    *(int *) (param_1 + 0x74) = *(int *) (param_1 + 0x74) + 1;
    *(int *) (param_1 + 0x7c) = *(int *) (param_1 + 0x7c) + 1;
    return puVar1;
}


undefined8 *FUN_1401a94d0(longlong param_1) {
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;

    if (*(longlong * )(param_1 + 0x68) == 0) {
        plVar3 = (longlong *) FUN_14018b280(0xfd0, 0);
        FUN_1401a8d00(param_1 + 8, *(int *) (param_1 + 100) + 1);
        *(longlong * *)(*(longlong * )(param_1 + 8) + (longlong) * (int *) (param_1 + 100) * 8) = plVar3;
        *(int *) (param_1 + 100) = *(int *) (param_1 + 100) + 1;
        iVar5 = 1;
        lVar7 = 0x2d;
        plVar6 = plVar3;
        do {
            lVar4 = (longlong) iVar5;
            iVar5 = iVar5 + 1;
            *plVar6 = (longlong)(plVar3 + lVar4 * 0xb);
            lVar7 = lVar7 + -1;
            plVar6 = plVar6 + 0xb;
        } while (lVar7 != 0);
        plVar3[0x1ef] = 0;
        *(longlong * *)(param_1 + 0x68) = plVar3;
    }
    puVar1 = *(undefined8 * *)(param_1 + 0x68);
    uVar2 = *puVar1;
    *(int *) (param_1 + 0x70) = *(int *) (param_1 + 0x70) + 1;
    *(undefined8 * )(param_1 + 0x68) = uVar2;
    if (*(int *) (param_1 + 0x78) < *(int *) (param_1 + 0x70)) {
        *(int *) (param_1 + 0x78) = *(int *) (param_1 + 0x70);
    }
    *(int *) (param_1 + 0x74) = *(int *) (param_1 + 0x74) + 1;
    *(int *) (param_1 + 0x7c) = *(int *) (param_1 + 0x7c) + 1;
    return puVar1;
}


void FUN_1401a9590(uint *param_1, undefined8 param_2, undefined8 param_3, uint param_4) {
    if ((*param_1 & 0x200) != 0) {
        FUN_14018b900(*(undefined8 * )(param_1 + 2), 0);
    }
    *(undefined8 * )(param_1 + 2) = param_2;
    *(undefined8 * )(param_1 + 4) = param_3;
    *param_1 = param_4 | 0x100;
    return;
}


int FUN_1401a95f0(longlong param_1, uint param_2) {
    uint uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    char *in_stack_00000038;

    if ((in_stack_00000038 == (char *) 0x0) || (*in_stack_00000038 != '1')) {
        return -6;
    }
    if (param_1 == 0) {
        return -2;
    }
    *(undefined8 * )(param_1 + 0x20) = 0;
    if (*(longlong * )(param_1 + 0x30) == 0) {
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(code * *)(param_1 + 0x30) = FUN_1401cd9d0;
    }
    if (*(longlong * )(param_1 + 0x38) == 0) {
        *(code * *)(param_1 + 0x38) = FUN_1401cd9e0;
    }
    if (param_2 == 0xffffffff) {
        param_2 = 6;
    } else if (9 < param_2) {
        return -2;
    }
    plVar3 = (longlong * )(**(code * *)(param_1 + 0x30))(*(undefined8 * )(param_1 + 0x40), 1, 0x1720);
    if (plVar3 != (longlong *) 0x0) {
        *(longlong * *)(param_1 + 0x28) = plVar3;
        *plVar3 = param_1;
        *(undefined4 * )((longlong) plVar3 + 0x2c) = 1;
        plVar3[6] = 0;
        *(undefined4 * )(plVar3 + 9) = 0xf;
        *(undefined4 * )((longlong) plVar3 + 0x44) = 0x8000;
        *(undefined4 * )((longlong) plVar3 + 0x4c) = 0x7fff;
        *(undefined4 * )(plVar3 + 0xf) = 0xf;
        *(undefined4 * )((longlong) plVar3 + 0x74) = 0x8000;
        *(undefined4 * )((longlong) plVar3 + 0x7c) = 0x7fff;
        *(undefined4 * )(plVar3 + 0x10) = 5;
        lVar4 = (**(code * *)(param_1 + 0x30))(*(undefined8 * )(param_1 + 0x40), 0x8000, 2);
        plVar3[10] = lVar4;
        lVar4 = (**(code * *)(param_1 + 0x30))
                (*(undefined8 * )(param_1 + 0x40), *(undefined4 * )((longlong) plVar3 + 0x44), 2);
        plVar3[0xc] = lVar4;
        lVar4 = (**(code * *)(param_1 + 0x30))
                (*(undefined8 * )(param_1 + 0x40), *(undefined4 * )((longlong) plVar3 + 0x74), 2);
        *(undefined4 * )(plVar3 + 0x2e3) = 0;
        *(undefined4 * )(plVar3 + 0x2de) = 0x4000;
        plVar3[0xd] = lVar4;
        lVar4 = (**(code * *)(param_1 + 0x30))(*(undefined8 * )(param_1 + 0x40), 0x4000, 4);
        plVar3[2] = lVar4;
        uVar1 = *(uint * )(plVar3 + 0x2de);
        *(uint * )(plVar3 + 3) = uVar1 * 4;
        if ((((plVar3[10] != 0) && (plVar3[0xc] != 0)) && (plVar3[0xd] != 0)) && (lVar4 != 0)) {
            *(uint * )((longlong) plVar3 + 0xac) = param_2;
            *(undefined4 * )(plVar3 + 0x16) = 0;
            *(undefined * )((longlong) plVar3 + 0x3c) = 8;
            plVar3[0x2df] = lVar4 + (ulonglong)(uVar1 >> 1) * 2;
            plVar3[0x2dd] = lVar4 + (ulonglong) uVar1 * 3;
            iVar2 = FUN_1401a9810(param_1);
            if (iVar2 != 0) {
                return iVar2;
            }
            FUN_1401aa4d0(*(undefined8 * )(param_1 + 0x28));
            return 0;
        }
        *(undefined4 * )(plVar3 + 1) = 0x29a;
        *(char **) (param_1 + 0x20) = s_insufficient_memory_140c2d348;
        FUN_1401aa350(param_1);
    }
    return -4;
}


undefined8 FUN_1401a9810(longlong param_1) {
    longlong lVar1;
    undefined4 uVar2;

    if ((((param_1 != 0) && (lVar1 = *(longlong * )(param_1 + 0x28), lVar1 != 0)) &&
         (*(longlong * )(param_1 + 0x30) != 0)) && (*(longlong * )(param_1 + 0x38) != 0)) {
        *(undefined4 * )(param_1 + 0x48) = 2;
        *(undefined4 * )(param_1 + 0x1c) = 0;
        *(undefined4 * )(param_1 + 0xc) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        *(undefined4 * )(lVar1 + 0x28) = 0;
        *(undefined8 * )(lVar1 + 0x20) = *(undefined8 * )(lVar1 + 0x10);
        if (*(int *) (lVar1 + 0x2c) < 0) {
            *(int *) (lVar1 + 0x2c) = -*(int *) (lVar1 + 0x2c);
        }
        uVar2 = 0x71;
        if (*(int *) (lVar1 + 0x2c) != 0) {
            uVar2 = 0x2a;
        }
        *(undefined4 * )(lVar1 + 8) = uVar2;
        *(uint * )(param_1 + 0x4c) = (uint)(*(int *) (lVar1 + 0x2c) != 2);
        *(undefined4 * )(lVar1 + 0x40) = 0;
        *(longlong * )(lVar1 + 0xb40) = lVar1 + 0xbc;
        *(undefined2 * )(lVar1 + 0x1710) = 0;
        *(undefined * **)(lVar1 + 0xb50) = &PTR_DAT_140c2d288;
        *(undefined4 * )(lVar1 + 0x1714) = 0;
        *(longlong * )(lVar1 + 0xb58) = lVar1 + 0x9b0;
        *(undefined * **)(lVar1 + 0xb68) = &PTR_DAT_140c2d2c8;
        *(longlong * )(lVar1 + 0xb70) = lVar1 + 0xaa4;
        *(undefined * *)(lVar1 + 0xb80) = &DAT_140c2d2a8;
        FUN_1401cba70(lVar1);
        return 0;
    }
    return 0xfffffffe;
}


int FUN_1401a9920(longlong param_1, uint param_2, int param_3) {
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    char *pcVar4;
    int iVar5;
    int iVar6;

    lVar2 = *(longlong * )(param_1 + 0x28);
    if (lVar2 == 0) {
        return param_3 + 6;
    }
    iVar6 = *(int *) (lVar2 + 0x2c);
    if (iVar6 == 0) {
        iVar6 = 0;
    } else if (iVar6 == 1) {
        iVar6 = (-(uint)(*(int *) (lVar2 + 0x94) != 0) & 4) + 6;
    } else if (iVar6 == 2) {
        lVar3 = *(longlong * )(lVar2 + 0x30);
        iVar5 = 0x12;
        iVar6 = 0x12;
        if (lVar3 != 0) {
            if (*(longlong * )(lVar3 + 0x10) != 0) {
                iVar5 = *(int *) (lVar3 + 0x18) + 0x14;
            }
            pcVar4 = *(char **) (lVar3 + 0x20);
            if (pcVar4 != (char *) 0x0) {
                do {
                    cVar1 = *pcVar4;
                    iVar5 = iVar5 + 1;
                    pcVar4 = pcVar4 + 1;
                } while (cVar1 != '\0');
            }
            pcVar4 = *(char **) (lVar3 + 0x30);
            iVar6 = iVar5;
            if (pcVar4 != (char *) 0x0) {
                do {
                    cVar1 = *pcVar4;
                    iVar6 = iVar5 + 1;
                    pcVar4 = pcVar4 + 1;
                    iVar5 = iVar6;
                } while (cVar1 != '\0');
            }
            if (*(int *) (lVar3 + 0x3c) != 0) {
                iVar6 = iVar6 + 2;
            }
        }
    } else {
        iVar6 = 6;
    }
    if ((*(int *) (lVar2 + 0x48) == 0xf) && (*(int *) (lVar2 + 0x78) == 0xf)) {
        return (param_2 >> 0xc) + 7 + (param_2 >> 0xe) + iVar6 + (param_2 >> 0x19) + param_2;
    }
    return iVar6 + param_3;
}


void FUN_1401a9a10(longlong param_1) {
    int *piVar1;
    longlong lVar2;
    uint uVar3;

    lVar2 = *(longlong * )(param_1 + 0x28);
    FUN_1401cd200(lVar2);
    uVar3 = *(uint * )(lVar2 + 0x28);
    if (*(uint * )(param_1 + 0x18) <= uVar3 && uVar3 != *(uint * )(param_1 + 0x18)) {
        uVar3 = *(uint * )(param_1 + 0x18);
    }
    if (uVar3 != 0) {
        FUN_1407db590(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(lVar2 + 0x20), uVar3);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (ulonglong) uVar3;
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + (ulonglong) uVar3;
        *(int *) (param_1 + 0x1c) = *(int *) (param_1 + 0x1c) + uVar3;
        *(int *) (param_1 + 0x18) = *(int *) (param_1 + 0x18) - uVar3;
        piVar1 = (int *) (lVar2 + 0x28);
        *piVar1 = *piVar1 - uVar3;
        if (*piVar1 == 0) {
            *(undefined8 * )(lVar2 + 0x20) = *(undefined8 * )(lVar2 + 0x10);
        }
    }
    return;
}


ulonglong FUN_1401a9a90(longlong *param_1) {
    undefined2 uVar1;
    ushort uVar2;
    int iVar3;
    longlong **pplVar4;
    longlong *plVar5;
    int iVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    uint uVar9;
    uint uVar10;
    undefined uVar11;
    undefined uVar12;
    char cVar13;
    int iVar14;
    ulonglong uVar15;

    pplVar4 = (longlong **) param_1[5];
    if (pplVar4 == (longlong **) 0x0) {
        return 0xfffffffe;
    }
    if ((param_1[2] == 0) || ((*param_1 == 0 && (*(int *) (param_1 + 1) != 0)))) {
        param_1[4] = (longlong) s_stream_error_140c2d308;
        return 0xfffffffe;
    }
    if (*(int *) (param_1 + 3) == 0) {
        param_1[4] = (longlong) s_buffer_error_140c2d338;
        return 0xfffffffb;
    }
    uVar11 = 0;
    *pplVar4 = param_1;
    *(undefined4 * )(pplVar4 + 8) = 4;
    iVar14 = 0;
    if (*(int *) (pplVar4 + 1) == 0x2a) {
        if (*(int *) ((longlong) pplVar4 + 0x2c) == 2) {
            *(undefined4 * )((longlong) param_1 + 0x4c) = 0;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0x1f;
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0x8b;
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 8;
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            plVar5 = pplVar4[6];
            uVar12 = 0;
            if (plVar5 == (longlong *) 0x0) {
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                if (*(int *) ((longlong) pplVar4 + 0xac) == 9) {
                    uVar11 = 2;
                } else if ((1 < *(int *) (pplVar4 + 0x16)) || (*(int *) ((longlong) pplVar4 + 0xac) < 2)) {
                    uVar11 = 4;
                }
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = uVar11;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = 0xb;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined4 * )(pplVar4 + 1) = 0x71;
            } else {
                *(byte * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        (-(plVar5[6] != 0) & 0x10U) + (-(*(int *) ((longlong) plVar5 + 0x3c) != 0) & 2U) +
                        (-(plVar5[4] != 0) & 8U) + (-(plVar5[2] != 0) & 4U) + (*(int *) plVar5 != 0);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        *(undefined * )((longlong) pplVar4[6] + 4);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        *(undefined * )((longlong) pplVar4[6] + 5);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        *(undefined * )((longlong) pplVar4[6] + 6);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        *(undefined * )((longlong) pplVar4[6] + 7);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                if (*(int *) ((longlong) pplVar4 + 0xac) == 9) {
                    uVar12 = 2;
                } else if ((1 < *(int *) (pplVar4 + 0x16)) || (*(int *) ((longlong) pplVar4 + 0xac) < 2)) {
                    uVar12 = 4;
                }
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = uVar12;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        *(undefined * )((longlong) pplVar4[6] + 0xc);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                if (pplVar4[6][2] != 0) {
                    *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                            *(undefined * )(pplVar4[6] + 3);
                    *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                    *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                            *(undefined * )((longlong) pplVar4[6] + 0x19);
                    *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                }
                if (*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) {
                    if (pplVar4[2] == (longlong *) 0x0) {
                        *(undefined4 * )((longlong) param_1 + 0x4c) = 0;
                        *(undefined4 * )(pplVar4 + 7) = 0;
                        *(undefined4 * )(pplVar4 + 1) = 0x45;
                        goto LAB_1401a9e24;
                    }
                    uVar8 = FUN_1401cd6d0();
                    *(undefined4 * )((longlong) param_1 + 0x4c) = uVar8;
                }
                *(undefined4 * )(pplVar4 + 7) = 0;
                *(undefined4 * )(pplVar4 + 1) = 0x45;
            }
        } else {
            iVar6 = iVar14;
            if ((*(int *) (pplVar4 + 0x16) < 2) && (iVar3 = *(int *) ((longlong) pplVar4 + 0xac), 1 < iVar3)) {
                if (iVar3 < 6) {
                    iVar6 = 1;
                } else {
                    iVar6 = (iVar3 != 6) + 2;
                }
            }
            uVar9 = (*(int *) (pplVar4 + 9) + -8) * 0x1000 + 0x800U | iVar6 << 6;
            if (*(int *) ((longlong) pplVar4 + 0x94) != 0) {
                uVar9 = uVar9 | 0x20;
            }
            *(undefined4 * )(pplVar4 + 1) = 0x71;
            iVar6 = (uVar9 / 0x1f + 1) * 0x1f;
            *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) ((uint) iVar6 >> 8);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) iVar6;
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            if (*(int *) ((longlong) pplVar4 + 0x94) != 0) {
                uVar2 = *(ushort * )((longlong) param_1 + 0x4e);
                *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        (char) ((uint) uVar2 >> 8);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) uVar2;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                uVar1 = *(undefined2 * )((longlong) param_1 + 0x4c);
                *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                        (char) ((ushort) uVar1 >> 8);
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) uVar1;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            }
            *(undefined4 * )((longlong) param_1 + 0x4c) = 1;
        }
    }
    LAB_1401a9e24:
    uVar8 = 0;
    if (*(int *) (pplVar4 + 1) == 0x45) {
        if (pplVar4[6][2] != 0) {
            uVar9 = *(uint * )(pplVar4 + 5);
            if (*(uint * )(pplVar4 + 7) < (uint) * (ushort * )(pplVar4[6] + 3)) {
                do {
                    uVar10 = *(uint * )(pplVar4 + 5);
                    if (uVar10 == *(uint * )(pplVar4 + 3)) {
                        if ((*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) && (uVar9 < uVar10)) {
                            iVar6 = iVar14;
                            if ((ulonglong) uVar9 + (longlong) pplVar4[2] != 0) {
                                iVar6 = FUN_1401cd6d0(*(undefined4 * )((longlong) param_1 + 0x4c));
                            }
                            *(int *) ((longlong) param_1 + 0x4c) = iVar6;
                        }
                        FUN_1401a9a10();
                        uVar9 = *(uint * )(pplVar4 + 5);
                        uVar10 = uVar9;
                        if (uVar9 == *(uint * )(pplVar4 + 3)) break;
                    }
                    *(undefined * )((ulonglong) uVar10 + (longlong) pplVar4[2]) =
                            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 7) + pplVar4[6][2]);
                    *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
                    *(int *) (pplVar4 + 7) = *(int *) (pplVar4 + 7) + 1;
                } while (*(uint * )(pplVar4 + 7) < (uint) * (ushort * )(pplVar4[6] + 3));
            }
            if ((*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) && (uVar9 < *(uint * )(pplVar4 + 5))) {
                uVar7 = uVar8;
                if ((ulonglong) uVar9 + (longlong) pplVar4[2] != 0) {
                    uVar7 = FUN_1401cd6d0();
                }
                *(undefined4 * )((longlong) param_1 + 0x4c) = uVar7;
            }
            if (*(int *) (pplVar4 + 7) != *(int *) (pplVar4[6] + 3)) goto LAB_1401a9f09;
            *(undefined4 * )(pplVar4 + 7) = 0;
        }
        *(undefined4 * )(pplVar4 + 1) = 0x49;
    }
    LAB_1401a9f09:
    if (*(int *) (pplVar4 + 1) == 0x49) {
        if (pplVar4[6][4] != 0) {
            uVar15 = (ulonglong) * (uint * )(pplVar4 + 5);
            do {
                uVar9 = *(uint * )(pplVar4 + 5);
                if (uVar9 == *(uint * )(pplVar4 + 3)) {
                    if ((*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) && ((uint) uVar15 < uVar9)) {
                        uVar7 = uVar8;
                        if (uVar15 + (longlong) pplVar4[2] != 0) {
                            uVar7 = FUN_1401cd6d0(*(undefined4 * )((longlong) param_1 + 0x4c));
                        }
                        *(undefined4 * )((longlong) param_1 + 0x4c) = uVar7;
                    }
                    FUN_1401a9a10();
                    uVar9 = *(uint * )(pplVar4 + 5);
                    uVar15 = (ulonglong) uVar9;
                    if (uVar9 == *(uint * )(pplVar4 + 3)) {
                        cVar13 = '\x01';
                        break;
                    }
                }
                cVar13 = *(char *) (pplVar4[6][4] + (ulonglong) * (uint * )(pplVar4 + 7));
                *(uint * )(pplVar4 + 7) = *(uint * )(pplVar4 + 7) + 1;
                *(char *) ((ulonglong) uVar9 + (longlong) pplVar4[2]) = cVar13;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            } while (cVar13 != '\0');
            if ((*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) && ((uint) uVar15 < *(uint * )(pplVar4 + 5))) {
                uVar7 = uVar8;
                if (uVar15 + (longlong) pplVar4[2] != 0) {
                    uVar7 = FUN_1401cd6d0();
                }
                *(undefined4 * )((longlong) param_1 + 0x4c) = uVar7;
            }
            if (cVar13 != '\0') goto LAB_1401a9fe4;
            *(undefined4 * )(pplVar4 + 7) = 0;
        }
        *(undefined4 * )(pplVar4 + 1) = 0x5b;
    }
    LAB_1401a9fe4:
    if (*(int *) (pplVar4 + 1) == 0x5b) {
        if (pplVar4[6][6] != 0) {
            uVar15 = (ulonglong) * (uint * )(pplVar4 + 5);
            do {
                uVar9 = *(uint * )(pplVar4 + 5);
                if (uVar9 == *(uint * )(pplVar4 + 3)) {
                    if ((*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) && ((uint) uVar15 < uVar9)) {
                        uVar7 = uVar8;
                        if (uVar15 + (longlong) pplVar4[2] != 0) {
                            uVar7 = FUN_1401cd6d0(*(undefined4 * )((longlong) param_1 + 0x4c));
                        }
                        *(undefined4 * )((longlong) param_1 + 0x4c) = uVar7;
                    }
                    FUN_1401a9a10();
                    uVar9 = *(uint * )(pplVar4 + 5);
                    uVar15 = (ulonglong) uVar9;
                    if (uVar9 == *(uint * )(pplVar4 + 3)) {
                        cVar13 = '\x01';
                        break;
                    }
                }
                cVar13 = *(char *) (pplVar4[6][6] + (ulonglong) * (uint * )(pplVar4 + 7));
                *(uint * )(pplVar4 + 7) = *(uint * )(pplVar4 + 7) + 1;
                *(char *) ((ulonglong) uVar9 + (longlong) pplVar4[2]) = cVar13;
                *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            } while (cVar13 != '\0');
            if ((*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) && ((uint) uVar15 < *(uint * )(pplVar4 + 5))) {
                if (uVar15 + (longlong) pplVar4[2] != 0) {
                    uVar8 = FUN_1401cd6d0();
                }
                *(undefined4 * )((longlong) param_1 + 0x4c) = uVar8;
            }
            if (cVar13 != '\0') goto LAB_1401aa0b1;
        }
        *(undefined4 * )(pplVar4 + 1) = 0x67;
    }
    LAB_1401aa0b1:
    if (*(int *) (pplVar4 + 1) == 0x67) {
        if (*(int *) ((longlong) pplVar4[6] + 0x3c) != 0) {
            if (*(uint * )(pplVar4 + 3) <= *(int *) (pplVar4 + 5) + 2U &&
                *(int *) (pplVar4 + 5) + 2U != *(uint * )(pplVar4 + 3)) {
                FUN_1401a9a10();
            }
            uVar9 = *(uint * )(pplVar4 + 5) + 2;
            if (*(uint * )(pplVar4 + 3) <= uVar9 && uVar9 != *(uint * )(pplVar4 + 3)) goto LAB_1401aa10e;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0x4c);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0x4d);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined4 * )((longlong) param_1 + 0x4c) = 0;
        }
        *(undefined4 * )(pplVar4 + 1) = 0x71;
    }
    LAB_1401aa10e:
    if ((*(int *) (pplVar4 + 5) != 0) && (FUN_1401a9a10(), *(int *) (param_1 + 3) == 0))
        goto LAB_1401aa30f;
    if (*(int *) (pplVar4 + 1) == 0x29a) {
        if (*(int *) (param_1 + 1) != 0) {
            param_1[4] = (longlong) s_buffer_error_140c2d338;
            return 0xfffffffb;
        }
        LAB_1401aa158:
        if ((*(int *) ((longlong) pplVar4 + 0x9c) == 0) && (*(int *) (pplVar4 + 1) == 0x29a))
            goto LAB_1401aa1e5;
    } else if (*(int *) (param_1 + 1) == 0) goto LAB_1401aa158;
    if (*(int *) (pplVar4 + 0x16) == 2) {
        uVar9 = FUN_1401ab8e0();
    } else if (*(int *) (pplVar4 + 0x16) == 3) {
        uVar9 = FUN_1401ab5b0();
    } else {
        uVar9 = (**(code * *)(&DAT_140a454a8 + (longlong) * (int *) ((longlong) pplVar4 + 0xac) * 0x10))();
    }
    if (uVar9 - 2 < 2) {
        *(undefined4 * )(pplVar4 + 1) = 0x29a;
    }
    if ((uVar9 & 0xfffffffd) != 0) {
        if (uVar9 == 1) {
            FUN_1401ccaa0(pplVar4, 0, 0, 0);
            FUN_1401a9a10();
            if (*(int *) (param_1 + 3) == 0) goto LAB_1401aa30f;
        }
        LAB_1401aa1e5:
        if (*(int *) ((longlong) pplVar4 + 0x2c) < 1) {
            return 1;
        }
        if (*(int *) ((longlong) pplVar4 + 0x2c) == 2) {
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0x4c);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0x4d);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0x4e);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0x4f);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0xc);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0xd);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0xe);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(undefined * )((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) =
                    *(undefined * )((longlong) param_1 + 0xf);
        } else {
            uVar2 = *(ushort * )((longlong) param_1 + 0x4e);
            *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) ((uint) uVar2 >> 8);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) uVar2;
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            uVar2 = *(ushort * )((longlong) param_1 + 0x4c);
            *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) ((uint) uVar2 >> 8);
            *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
            *(char *) ((ulonglong) * (uint * )(pplVar4 + 5) + (longlong) pplVar4[2]) = (char) uVar2;
        }
        *(int *) (pplVar4 + 5) = *(int *) (pplVar4 + 5) + 1;
        FUN_1401a9a10(param_1);
        if (0 < *(int *) ((longlong) pplVar4 + 0x2c)) {
            *(int *) ((longlong) pplVar4 + 0x2c) = -*(int *) ((longlong) pplVar4 + 0x2c);
        }
        return (ulonglong)(*(int *) (pplVar4 + 5) == 0);
    }
    if (*(int *) (param_1 + 3) != 0) {
        return 0;
    }
    LAB_1401aa30f:
    *(undefined4 * )(pplVar4 + 8) = 0xffffffff;
    return 0;
}


undefined4 FUN_1401aa350(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;

    lVar2 = *(longlong * )(param_1 + 0x28);
    if (lVar2 == 0) {
        return 0xfffffffe;
    }
    iVar1 = *(int *) (lVar2 + 8);
    if ((((0x3d < iVar1 - 0x2aU) ||
          ((0x2002000088000001U >> ((ulonglong)(iVar1 - 0x2aU) & 0x3f) & 1) == 0)) && (iVar1 != 0x71))
        && (iVar1 != 0x29a)) {
        return 0xfffffffe;
    }
    if (*(longlong * )(lVar2 + 0x10) != 0) {
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40));
    }
    if (*(longlong * )(*(longlong * )(param_1 + 0x28) + 0x68) != 0) {
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40));
    }
    if (*(longlong * )(*(longlong * )(param_1 + 0x28) + 0x60) != 0) {
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40));
    }
    if (*(longlong * )(*(longlong * )(param_1 + 0x28) + 0x50) != 0) {
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40));
    }
    (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40), *(undefined8 * )(param_1 + 0x28));
    uVar3 = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    if (iVar1 == 0x71) {
        uVar3 = 0xfffffffd;
    }
    return uVar3;
}


uint FUN_1401aa420(longlong *param_1, longlong param_2, uint param_3) {
    uint uVar1;
    undefined4 uVar2;
    uint uVar3;

    uVar1 = *(uint * )(param_1 + 1);
    uVar3 = uVar1;
    if (param_3 < uVar1) {
        uVar3 = param_3;
    }
    if (uVar3 == 0) {
        return 0;
    }
    *(uint * )(param_1 + 1) = uVar1 - uVar3;
    FUN_1407db590(param_2, *param_1, uVar3);
    if (*(int *) (param_1[5] + 0x2c) == 1) {
        uVar2 = FUN_1401cd3e0(*(undefined4 * )((longlong) param_1 + 0x4c), param_2, uVar3);
    } else {
        if (*(int *) (param_1[5] + 0x2c) != 2) goto LAB_1401aa4ac;
        if (param_2 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = FUN_1401cd6d0(*(undefined4 * )((longlong) param_1 + 0x4c), param_2, uVar3);
        }
    }
    *(undefined4 * )((longlong) param_1 + 0x4c) = uVar2;
    LAB_1401aa4ac:
    *param_1 = *param_1 + (ulonglong) uVar3;
    *(int *) ((longlong) param_1 + 0xc) = *(int *) ((longlong) param_1 + 0xc) + uVar3;
    return uVar3;
}


void FUN_1401aa4d0(longlong param_1) {
    ushort uVar1;
    longlong lVar2;

    *(int *) (param_1 + 0x58) = *(int *) (param_1 + 0x44) * 2;
    *(undefined2 * )(*(longlong * )(param_1 + 0x68) + (ulonglong)(*(int *) (param_1 + 0x74) - 1) * 2) = 0;
    FUN_1407e4830(*(undefined8 * )(param_1 + 0x68), 0, (ulonglong)(*(int *) (param_1 + 0x74) - 1) * 2);
    lVar2 = (longlong) * (int *) (param_1 + 0xac);
    *(uint * )(param_1 + 0xa8) = (uint) * (ushort * )(&DAT_140a454a2 + lVar2 * 0x10);
    *(uint * )(param_1 + 0xb4) = (uint) * (ushort * )(&DAT_140a454a0 + lVar2 * 0x10);
    *(uint * )(param_1 + 0xb8) = (uint) * (ushort * )(&DAT_140a454a4 + lVar2 * 0x10);
    uVar1 = *(ushort * )(&DAT_140a454a6 + lVar2 * 0x10);
    *(undefined8 * )(param_1 + 0x90) = 0;
    *(undefined4 * )(param_1 + 0x84) = 0;
    *(undefined4 * )(param_1 + 0x9c) = 0;
    *(undefined4 * )(param_1 + 0x170c) = 0;
    *(uint * )(param_1 + 0xa4) = (uint) uVar1;
    *(undefined4 * )(param_1 + 0xa0) = 2;
    *(undefined4 * )(param_1 + 0x88) = 2;
    *(undefined4 * )(param_1 + 0x70) = 0;
    return;
}


uint FUN_1401aa580(longlong param_1, uint param_2) {
    char *pcVar1;
    char *pcVar2;
    ushort uVar3;
    uint uVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar7;
    longlong lVar8;
    char *pcVar9;
    char cVar10;
    uint uVar11;
    uint uVar12;
    int iVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    uint uVar16;
    char cVar17;

    uVar12 = *(uint * )(param_1 + 0x94);
    uVar11 = *(uint * )(param_1 + 0xa4);
    uVar14 = (ulonglong)(int) * (uint * )(param_1 + 0xa0);
    uVar15 = (ulonglong) param_2;
    lVar8 = *(longlong * )(param_1 + 0x50);
    pcVar2 = (char *) ((ulonglong) uVar12 + lVar8);
    if (*(int *) (param_1 + 0x44) - 0x106U < uVar12) {
        uVar12 = (uVar12 - *(int *) (param_1 + 0x44)) + 0x106;
    } else {
        uVar12 = 0;
    }
    cVar10 = pcVar2[uVar14 - 1];
    cVar17 = pcVar2[uVar14];
    if (*(uint * )(param_1 + 0xb4) <= *(uint * )(param_1 + 0xa0)) {
        uVar11 = uVar11 >> 2;
    }
    uVar4 = *(uint * )(param_1 + 0x9c);
    uVar16 = *(uint * )(param_1 + 0xb8);
    if (uVar4 < *(uint * )(param_1 + 0xb8)) {
        uVar16 = uVar4;
    }
    do {
        iVar13 = (int) uVar14;
        pcVar9 = (char *) (lVar8 + uVar15);
        if ((((pcVar9[iVar13] == cVar17) && (pcVar9[(longlong) iVar13 + -1] == cVar10)) &&
             (*pcVar9 == *pcVar2)) && (pcVar9[1] == pcVar2[1])) {
            pcVar9 = pcVar9 + 2;
            pcVar6 = pcVar2 + 2;
            while (((((pcVar7 = pcVar6 + 1, *pcVar7 == pcVar9[1] &&
                                            (pcVar7 = pcVar6 + 2, *pcVar7 == pcVar9[2])) &&
                      ((pcVar7 = pcVar6 + 3, *pcVar7 == pcVar9[3] &&
                                             ((pcVar7 = pcVar6 + 4, *pcVar7 == pcVar9[4] &&
                                                                    (pcVar7 = pcVar6 + 5, *pcVar7 == pcVar9[5])))))) &&
                     (pcVar7 = pcVar6 + 6, *pcVar7 == pcVar9[6])) &&
                    (pcVar7 = pcVar6 + 7, *pcVar7 == pcVar9[7]))) {
                pcVar1 = pcVar9 + 8;
                pcVar9 = pcVar9 + 8;
                pcVar7 = pcVar6 + 8;
                if ((*pcVar7 != *pcVar1) || (pcVar6 = pcVar7, pcVar2 + 0x102 <= pcVar7)) break;
            }
            uVar5 = ((int) pcVar7 - (int) (pcVar2 + 0x102)) + 0x102;
            if (iVar13 < (int) uVar5) {
                *(int *) (param_1 + 0x98) = (int) uVar15;
                uVar14 = (ulonglong) uVar5;
                if ((int) uVar16 <= (int) uVar5) break;
                cVar10 = pcVar2[(longlong)(int)
                uVar5 + -1];
                cVar17 = pcVar2[(int) uVar5];
            }
        }
        uVar5 = (uint) uVar14;
        uVar3 = *(ushort * )(*(longlong * )(param_1 + 0x60) + (*(uint * )(param_1 + 0x4c) & uVar15) * 2);
        uVar15 = (ulonglong) uVar3;
        if (uVar3 <= uVar12) break;
        lVar8 = *(longlong * )(param_1 + 0x50);
        uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (uVar5 <= uVar4) {
        uVar4 = uVar5;
    }
    return uVar4;
}


void FUN_1401aa730(longlong *param_1) {
    ushort *puVar1;
    uint uVar2;
    int iVar3;
    short sVar4;
    int iVar5;
    short *psVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    uint uVar10;
    ulonglong uVar11;

    uVar2 = *(uint * )((longlong) param_1 + 0x44);
    uVar8 = (ulonglong) uVar2;
    while (true) {
        if (*(int *) ((longlong) param_1 + 0x44) + -0x106 + uVar2 <= *(uint * )((longlong) param_1 + 0x94)) {
            FUN_1407db590(param_1[10], param_1[10] + uVar8);
            uVar7 = (ulonglong) * (uint * )((longlong) param_1 + 0x74);
            *(uint * )(param_1 + 0x13) = *(int *) (param_1 + 0x13) - uVar2;
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) - uVar2;
            *(int *) ((longlong) param_1 + 0x84) = *(int *) ((longlong) param_1 + 0x84) - uVar2;
            psVar6 = (short *) (param_1[0xd] + uVar7 * 2);
            do {
                puVar1 = (ushort * )(psVar6 + -1);
                psVar6 = psVar6 + -1;
                if (*puVar1 < uVar2) {
                    sVar4 = 0;
                } else {
                    sVar4 = *puVar1 - (short) uVar2;
                }
                *psVar6 = sVar4;
                uVar9 = (int) uVar7 - 1;
                uVar7 = (ulonglong) uVar9;
            } while (uVar9 != 0);
            psVar6 = (short *) (param_1[0xc] + uVar8 * 2);
            uVar7 = uVar8;
            do {
                puVar1 = (ushort * )(psVar6 + -1);
                psVar6 = psVar6 + -1;
                if (*puVar1 < uVar2) {
                    sVar4 = 0;
                } else {
                    sVar4 = *puVar1 - (short) uVar2;
                }
                *psVar6 = sVar4;
                uVar9 = (int) uVar7 - 1;
                uVar7 = (ulonglong) uVar9;
            } while (uVar9 != 0);
        }
        if (*(int *) (*param_1 + 8) == 0) break;
        iVar5 = FUN_1401aa420();
        iVar3 = *(int *) ((longlong) param_1 + 0x170c);
        *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) + iVar5;
        if (2 < (uint)(*(int *) ((longlong) param_1 + 0x9c) + iVar3)) {
            uVar10 = *(int *) ((longlong) param_1 + 0x94) - iVar3;
            uVar7 = (ulonglong) uVar10;
            uVar9 = (uint) * (byte * )(uVar7 + param_1[10]);
            *(uint * )(param_1 + 0xe) = uVar9;
            *(uint * )(param_1 + 0xe) =
                    ((uint) * (byte * )((ulonglong)(uVar10 + 1) + param_1[10]) ^
                     uVar9 << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f)) &
                    *(uint * )((longlong) param_1 + 0x7c);
            if (iVar3 != 0) {
                uVar10 = uVar10 + 2;
                do {
                    uVar11 = (ulonglong) uVar10;
                    uVar10 = uVar10 + 1;
                    uVar9 = ((uint) * (byte * )(uVar11 + param_1[10]) ^
                             *(int *) (param_1 + 0xe) << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f)) &
                            *(uint * )((longlong) param_1 + 0x7c);
                    *(uint * )(param_1 + 0xe) = uVar9;
                    *(undefined2 * )(param_1[0xc] + (uVar7 & *(uint * )((longlong) param_1 + 0x4c)) * 2) =
                            *(undefined2 * )(param_1[0xd] + (ulonglong) uVar9 * 2);
                    *(short *) (param_1[0xd] + (ulonglong) * (uint * )(param_1 + 0xe) * 2) = (short) uVar7;
                    *(int *) ((longlong) param_1 + 0x170c) = *(int *) ((longlong) param_1 + 0x170c) + -1;
                    uVar7 = (ulonglong)((int) uVar7 + 1);
                    if ((uint)(*(int *) ((longlong) param_1 + 0x9c) + *(int *) ((longlong) param_1 + 0x170c)) < 3)
                        break;
                } while (*(int *) ((longlong) param_1 + 0x170c) != 0);
            }
        }
        if ((0x105 < *(uint * )((longlong) param_1 + 0x9c)) || (*(int *) (*param_1 + 8) == 0)) break;
    }
    uVar2 = *(uint * )(param_1 + 0x2e3);
    uVar9 = *(uint * )(param_1 + 0xb);
    if (uVar2 < uVar9) {
        uVar10 = *(int *) ((longlong) param_1 + 0x9c) + *(int *) ((longlong) param_1 + 0x94);
        if (uVar2 < uVar10) {
            uVar9 = uVar9 - uVar10;
            if (0x102 < uVar9) {
                uVar9 = 0x102;
            }
            FUN_1407e4830((ulonglong) uVar10 + param_1[10], 0, uVar9);
            *(uint * )(param_1 + 0x2e3) = uVar9 + uVar10;
            return;
        }
        if (uVar2 < uVar10 + 0x102) {
            uVar10 = (uVar10 - uVar2) + 0x102;
            if (uVar9 - uVar2 < uVar10) {
                uVar10 = uVar9 - uVar2;
            }
            FUN_1407e4830((ulonglong) uVar2 + param_1[10], 0, uVar10);
            *(uint * )(param_1 + 0x2e3) = *(int *) (param_1 + 0x2e3) + uVar10;
        }
    }
    return;
}


char FUN_1401aac30(longlong *param_1, int param_2) {
    int *piVar1;
    longlong *plVar2;
    short *psVar3;
    char cVar4;
    byte bVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 uVar8;
    uint uVar9;
    longlong lVar10;
    short sVar11;
    ushort uVar12;
    uint uVar13;
    bool bVar14;

    lVar10 = 0;
    do {
        uVar13 = *(uint * )((longlong) param_1 + 0x9c);
        if (uVar13 < 0x106) {
            FUN_1401aa730();
            uVar13 = *(uint * )((longlong) param_1 + 0x9c);
            if ((uVar13 < 0x106) && (param_2 == 0)) {
                return '\0';
            }
            if (uVar13 == 0) {
                uVar13 = *(uint * )((longlong) param_1 + 0x94);
                uVar9 = 2;
                if (uVar13 < 2) {
                    uVar9 = uVar13;
                }
                *(uint * )((longlong) param_1 + 0x170c) = uVar9;
                if (param_2 == 4) {
                    uVar9 = *(uint * )((longlong) param_1 + 0x84);
                    if (-1 < (int) uVar9) {
                        lVar10 = (ulonglong) uVar9 + param_1[10];
                    }
                    FUN_1401ccb30(param_1, lVar10, uVar13 - uVar9, 1);
                    *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                    FUN_1401a9a10(*param_1);
                    return (*(int *) (*param_1 + 0x18) != 0) + '\x02';
                }
                if (*(int *) ((longlong) param_1 + 0x16f4) != 0) {
                    uVar9 = *(uint * )((longlong) param_1 + 0x84);
                    if (-1 < (int) uVar9) {
                        lVar10 = (ulonglong) uVar9 + param_1[10];
                    }
                    FUN_1401ccb30(param_1, lVar10, uVar13 - uVar9, 0);
                    *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                    FUN_1401a9a10(*param_1);
                    if (*(int *) (*param_1 + 0x18) == 0) {
                        return '\0';
                    }
                }
                return '\x01';
            }
        }
        if (2 < uVar13) {
            uVar13 = ((uint) * (byte * )((ulonglong)(*(uint * )((longlong) param_1 + 0x94) + 2) + param_1[10])
                      ^ *(int *) (param_1 + 0xe) << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f)) &
                     *(uint * )((longlong) param_1 + 0x7c);
            *(uint * )(param_1 + 0xe) = uVar13;
            *(undefined2 * )
                    (param_1[0xc] +
                     (ulonglong)(*(uint * )((longlong) param_1 + 0x94) & *(uint * )((longlong) param_1 + 0x4c)) * 2) =
                    *(undefined2 * )(param_1[0xd] + (ulonglong) uVar13 * 2);
            uVar12 = *(ushort * )
                    (param_1[0xc] +
                     (ulonglong)
                             (*(uint * )((longlong) param_1 + 0x94) & *(uint * )((longlong) param_1 + 0x4c)) * 2);
            *(undefined2 * )(param_1[0xd] + (ulonglong) * (uint * )(param_1 + 0xe) * 2) =
                    *(undefined2 * )((longlong) param_1 + 0x94);
            if ((uVar12 != 0) &&
                (*(int *) ((longlong) param_1 + 0x94) - (uint) uVar12 <=
                 *(int *) ((longlong) param_1 + 0x44) - 0x106U)) {
                uVar8 = FUN_1401aa580();
                *(undefined4 * )(param_1 + 0x11) = uVar8;
            }
        }
        if (*(uint * )(param_1 + 0x11) < 3) {
            bVar5 = *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x94) + param_1[10]);
            *(undefined2 * )(param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = 0;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = bVar5;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            psVar3 = (short *) ((longlong) param_1 + (ulonglong) bVar5 * 4 + 0xbc);
            *psVar3 = *psVar3 + 1;
            bVar14 = *(int *) ((longlong) param_1 + 0x16f4) == *(int *) (param_1 + 0x2de) + -1;
            *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) + -1;
            LAB_1401aaf0c:
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
        } else {
            sVar11 = *(short *) ((longlong) param_1 + 0x94) - *(short *) (param_1 + 0x13);
            cVar4 = *(char *) (param_1 + 0x11);
            *(short *) (param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = sVar11;
            uVar12 = sVar11 - 1;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = cVar4 - 3U;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            psVar3 = (short *) ((longlong) param_1 +
                                (ulonglong)(byte)(&DAT_140a47f70)[(byte)(cVar4 - 3U)] * 4 + 0x4c0);
            *psVar3 = *psVar3 + 1;
            if (uVar12 < 0x100) {
                bVar5 = (&DAT_140a47d70)[uVar12];
            } else {
                bVar5 = (&DAT_140a47e70)[uVar12 >> 7];
            }
            psVar3 = (short *) ((longlong) param_1 + (longlong)(int)(uint)
            bVar5 * 4 + 0x9b0);
            *psVar3 = *psVar3 + 1;
            bVar14 = *(int *) ((longlong) param_1 + 0x16f4) == *(int *) (param_1 + 0x2de) + -1;
            uVar13 = *(uint * )(param_1 + 0x11);
            *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) - uVar13;
            if ((uVar13 < *(uint * )(param_1 + 0x15) || uVar13 == *(uint * )(param_1 + 0x15)) &&
                (2 < *(uint * )((longlong) param_1 + 0x9c))) {
                *(uint * )(param_1 + 0x11) = uVar13 - 1;
                do {
                    *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
                    uVar13 = ((uint) * (byte * )((ulonglong)(*(uint * )((longlong) param_1 + 0x94) + 2) +
                                                 param_1[10]) ^
                              *(int *) (param_1 + 0xe) << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f)) &
                             *(uint * )((longlong) param_1 + 0x7c);
                    *(uint * )(param_1 + 0xe) = uVar13;
                    *(undefined2 * )
                            (param_1[0xc] +
                             (ulonglong)(
                                     *(uint * )((longlong) param_1 + 0x94) & *(uint * )((longlong) param_1 + 0x4c)) *
                             2) = *(undefined2 * )(param_1[0xd] + (ulonglong) uVar13 * 2);
                    *(undefined2 * )(param_1[0xd] + (ulonglong) * (uint * )(param_1 + 0xe) * 2) =
                            *(undefined2 * )((longlong) param_1 + 0x94);
                    plVar2 = param_1 + 0x11;
                    *(int *) plVar2 = *(int *) plVar2 + -1;
                } while (*(int *) plVar2 != 0);
                goto LAB_1401aaf0c;
            }
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + uVar13;
            *(undefined4 * )(param_1 + 0x11) = 0;
            uVar13 = (uint) * (byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x94) + param_1[10]);
            *(uint * )(param_1 + 0xe) = uVar13;
            *(uint * )(param_1 + 0xe) =
                    (uVar13 << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f) ^
                     (uint) * (byte * )((ulonglong)(*(uint * )((longlong) param_1 + 0x94) + 1) + param_1[10])) &
                    *(uint * )((longlong) param_1 + 0x7c);
        }
        if (bVar14) {
            FUN_1401ccb30(param_1);
            lVar6 = *param_1;
            *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
            lVar7 = *(longlong * )(lVar6 + 0x28);
            FUN_1401cd200();
            uVar13 = *(uint * )(lVar7 + 0x28);
            if (*(uint * )(lVar6 + 0x18) <= uVar13 && uVar13 != *(uint * )(lVar6 + 0x18)) {
                uVar13 = *(uint * )(lVar6 + 0x18);
            }
            if (uVar13 != 0) {
                FUN_1407db590();
                *(longlong * )(lVar6 + 0x10) = *(longlong * )(lVar6 + 0x10) + (ulonglong) uVar13;
                *(longlong * )(lVar7 + 0x20) = *(longlong * )(lVar7 + 0x20) + (ulonglong) uVar13;
                *(int *) (lVar6 + 0x1c) = *(int *) (lVar6 + 0x1c) + uVar13;
                *(int *) (lVar6 + 0x18) = *(int *) (lVar6 + 0x18) - uVar13;
                piVar1 = (int *) (lVar7 + 0x28);
                *piVar1 = *piVar1 - uVar13;
                if (*piVar1 == 0) {
                    *(undefined8 * )(lVar7 + 0x20) = *(undefined8 * )(lVar7 + 0x10);
                }
            }
            if (*(int *) (*param_1 + 0x18) == 0) {
                return '\0';
            }
        }
    } while (true);
}


char FUN_1401ab0a0(longlong *param_1, int param_2) {
    longlong *plVar1;
    short *psVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    byte bVar7;
    ulonglong uVar8;
    short sVar9;
    ushort uVar10;
    uint uVar11;
    ulonglong uVar12;
    uint uVar13;

    uVar8 = 0;
    LAB_1401ab0e0:
    do {
        uVar11 = *(uint * )((longlong) param_1 + 0x9c);
        if (uVar11 < 0x106) {
            FUN_1401aa730();
            uVar11 = *(uint * )((longlong) param_1 + 0x9c);
            if ((uVar11 < 0x106) && (param_2 == 0)) {
                return '\0';
            }
            if (uVar11 == 0) {
                if (*(int *) (param_1 + 0x12) != 0) {
                    bVar7 = *(byte * )((ulonglong)(*(int *) ((longlong) param_1 + 0x94) - 1) + param_1[10]);
                    *(undefined2 * )(param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = 0;
                    *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = bVar7;
                    *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
                    psVar2 = (short *) ((longlong) param_1 + (ulonglong) bVar7 * 4 + 0xbc);
                    *psVar2 = *psVar2 + 1;
                    *(undefined4 * )(param_1 + 0x12) = 0;
                }
                uVar11 = *(uint * )((longlong) param_1 + 0x94);
                uVar13 = 2;
                if (uVar11 < 2) {
                    uVar13 = uVar11;
                }
                *(uint * )((longlong) param_1 + 0x170c) = uVar13;
                if (param_2 != 4) {
                    if (*(int *) ((longlong) param_1 + 0x16f4) != 0) {
                        uVar13 = *(uint * )((longlong) param_1 + 0x84);
                        if (-1 < (int) uVar13) {
                            uVar8 = (ulonglong) uVar13 + param_1[10];
                        }
                        FUN_1401ccb30(param_1, uVar8, uVar11 - uVar13, 0);
                        *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                        FUN_1401a9a10(*param_1);
                        if (*(int *) (*param_1 + 0x18) == 0) {
                            return '\0';
                        }
                    }
                    return '\x01';
                }
                uVar13 = *(uint * )((longlong) param_1 + 0x84);
                if (-1 < (int) uVar13) {
                    uVar8 = (ulonglong) uVar13 + param_1[10];
                }
                FUN_1401ccb30(param_1, uVar8, uVar11 - uVar13, 1);
                *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                FUN_1401a9a10(*param_1);
                return (*(int *) (*param_1 + 0x18) != 0) + '\x02';
            }
        }
        uVar12 = uVar8;
        if (2 < uVar11) {
            uVar11 = ((uint) * (byte * )((ulonglong)(*(uint * )((longlong) param_1 + 0x94) + 2) + param_1[10])
                      ^ *(int *) (param_1 + 0xe) << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f)) &
                     *(uint * )((longlong) param_1 + 0x7c);
            *(uint * )(param_1 + 0xe) = uVar11;
            *(undefined2 * )
                    (param_1[0xc] +
                     (ulonglong)(*(uint * )((longlong) param_1 + 0x94) & *(uint * )((longlong) param_1 + 0x4c)) * 2) =
                    *(undefined2 * )(param_1[0xd] + (ulonglong) uVar11 * 2);
            uVar12 = (ulonglong)
                     * (ushort * )
                             (param_1[0xc] +
                              (ulonglong)
                                      (*(uint * )((longlong) param_1 + 0x94) & *(uint * )((longlong) param_1 + 0x4c)) *
                              2);
            *(undefined2 * )(param_1[0xd] + (ulonglong) * (uint * )(param_1 + 0xe) * 2) =
                    *(undefined2 * )((longlong) param_1 + 0x94);
        }
        uVar11 = *(uint * )(param_1 + 0x11);
        *(undefined4 * )(param_1 + 0x11) = 2;
        *(uint * )(param_1 + 0x14) = uVar11;
        *(undefined4 * )((longlong) param_1 + 0x8c) = *(undefined4 * )(param_1 + 0x13);
        if ((((int) uVar12 != 0) && (uVar11 < *(uint * )(param_1 + 0x15))) &&
            ((uint)(*(int *) ((longlong) param_1 + 0x94) - (int) uVar12) <=
             *(int *) ((longlong) param_1 + 0x44) - 0x106U)) {
            uVar11 = FUN_1401aa580();
            *(uint * )(param_1 + 0x11) = uVar11;
            if ((uVar11 < 6) &&
                ((*(int *) (param_1 + 0x16) == 1 ||
                  ((uVar11 == 3 &&
                    (0x1000 < (uint)(*(int *) ((longlong) param_1 + 0x94) - *(int *) (param_1 + 0x13)))))))) {
                *(undefined4 * )(param_1 + 0x11) = 2;
            }
        }
        uVar11 = *(uint * )(param_1 + 0x14);
        if ((uVar11 < 3) || (uVar11 <= *(uint * )(param_1 + 0x11) && *(uint * )(param_1 + 0x11) != uVar11)
                ) {
            if (*(int *) (param_1 + 0x12) == 0) {
                *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
                *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) + -1;
                *(undefined4 * )(param_1 + 0x12) = 1;
                goto LAB_1401ab0e0;
            }
            bVar7 = *(byte * )((ulonglong)(*(int *) ((longlong) param_1 + 0x94) - 1) + param_1[10]);
            *(undefined2 * )(param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = 0;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = bVar7;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            psVar2 = (short *) ((longlong) param_1 + (ulonglong) bVar7 * 4 + 0xbc);
            *psVar2 = *psVar2 + 1;
            if (*(int *) ((longlong) param_1 + 0x16f4) == *(int *) (param_1 + 0x2de) + -1) {
                FUN_1401ccb30(param_1);
                *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                FUN_1401a9a10();
            }
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
            *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) + -1;
        } else {
            iVar3 = *(int *) ((longlong) param_1 + 0x94);
            iVar4 = *(int *) ((longlong) param_1 + 0x9c);
            sVar9 = *(short *) ((longlong) param_1 + 0x94) - *(short *) ((longlong) param_1 + 0x8c);
            bVar7 = (char) uVar11 - 3;
            *(short *) (param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = sVar9 + -1;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = bVar7;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            uVar10 = sVar9 - 2;
            psVar2 = (short *) ((longlong) param_1 + (ulonglong)(byte)(&DAT_140a47f70)[bVar7] * 4 + 0x4c0);
            *psVar2 = *psVar2 + 1;
            if (uVar10 < 0x100) {
                bVar7 = (&DAT_140a47d70)[uVar10];
            } else {
                bVar7 = (&DAT_140a47e70)[uVar10 >> 7];
            }
            psVar2 = (short *) ((longlong) param_1 + (longlong)(int)(uint)
            bVar7 * 4 + 0x9b0);
            *psVar2 = *psVar2 + 1;
            iVar5 = *(int *) (param_1 + 0x2de);
            iVar6 = *(int *) ((longlong) param_1 + 0x16f4);
            *(int *) ((longlong) param_1 + 0x9c) =
                    *(int *) ((longlong) param_1 + 0x9c) + (1 - *(int *) (param_1 + 0x14));
            *(int *) (param_1 + 0x14) = *(int *) (param_1 + 0x14) + -2;
            do {
                *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
                uVar11 = *(uint * )((longlong) param_1 + 0x94);
                if (uVar11 <= (uint)(iVar4 + iVar3 + -3)) {
                    uVar13 = ((uint) * (byte * )((ulonglong)(uVar11 + 2) + param_1[10]) ^
                              *(int *) (param_1 + 0xe) << ((byte) * (undefined4 * )(param_1 + 0x10) & 0x1f)) &
                             *(uint * )((longlong) param_1 + 0x7c);
                    *(uint * )(param_1 + 0xe) = uVar13;
                    *(undefined2 * )
                            (param_1[0xc] + (ulonglong)(*(uint * )((longlong) param_1 + 0x4c) & uVar11) * 2) =
                            *(undefined2 * )(param_1[0xd] + (ulonglong) uVar13 * 2);
                    *(undefined2 * )(param_1[0xd] + (ulonglong) * (uint * )(param_1 + 0xe) * 2) =
                            *(undefined2 * )((longlong) param_1 + 0x94);
                }
                plVar1 = param_1 + 0x14;
                *(int *) plVar1 = *(int *) plVar1 + -1;
            } while (*(int *) plVar1 != 0);
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
            *(undefined4 * )(param_1 + 0x12) = 0;
            *(undefined4 * )(param_1 + 0x11) = 2;
            if (iVar6 != iVar5 + -1) goto LAB_1401ab0e0;
            FUN_1401ccb30(param_1);
            *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
            FUN_1401a9a10();
        }
        if (*(int *) (*param_1 + 0x18) == 0) {
            return '\0';
        }
    } while (true);
}


char FUN_1401ab5b0(longlong *param_1) {
    int *piVar1;
    uint uVar2;
    short *psVar3;
    char cVar4;
    byte bVar5;
    int iVar6;
    longlong lVar7;
    char *pcVar8;
    char *pcVar9;
    longlong lVar10;
    longlong lVar11;
    uint uVar12;
    char *pcVar13;
    bool bVar14;

    lVar11 = 0;
    do {
        uVar12 = *(uint * )((longlong) param_1 + 0x9c);
        if (uVar12 < 0x103) {
            FUN_1401aa730();
            uVar12 = *(uint * )((longlong) param_1 + 0x9c);
            if (uVar12 == 0) {
                uVar12 = *(uint * )((longlong) param_1 + 0x84);
                *(undefined4 * )((longlong) param_1 + 0x170c) = 0;
                if (-1 < (int) uVar12) {
                    lVar11 = (ulonglong) uVar12 + param_1[10];
                }
                FUN_1401ccb30(param_1, lVar11, *(int *) ((longlong) param_1 + 0x94) - uVar12, 1);
                *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                FUN_1401a9a10(*param_1);
                return (*(int *) (*param_1 + 0x18) != 0) + '\x02';
            }
        }
        *(undefined4 * )(param_1 + 0x11) = 0;
        if ((2 < uVar12) && (*(uint * )((longlong) param_1 + 0x94) != 0)) {
            pcVar13 = (char *) (param_1[10] + (ulonglong) * (uint * )((longlong) param_1 + 0x94));
            cVar4 = pcVar13[-1];
            if ((cVar4 == *pcVar13) && ((cVar4 == pcVar13[1] && (cVar4 == pcVar13[2])))) {
                pcVar8 = pcVar13 + 2;
                do {
                    pcVar9 = pcVar8 + 1;
                    if (((((cVar4 != pcVar8[1]) || (pcVar9 = pcVar8 + 2, cVar4 != pcVar8[2])) ||
                          (pcVar9 = pcVar8 + 3, cVar4 != pcVar8[3])) ||
                         ((pcVar9 = pcVar8 + 4, cVar4 != pcVar8[4] || (pcVar9 = pcVar8 + 5, cVar4 != pcVar8[5])
                         ))) || ((pcVar9 = pcVar8 + 6, cVar4 != pcVar8[6] ||
                                                       ((pcVar9 = pcVar8 + 7, cVar4 != pcVar8[7] ||
                                                                              (pcVar9 = pcVar8 + 8, cVar4 !=
                                                                                                    pcVar8[8]))))))
                        break;
                    pcVar8 = pcVar9;
                } while (pcVar9 < pcVar13 + 0x102);
                uVar2 = ((int) pcVar9 - (int) (pcVar13 + 0x102)) + 0x102;
                *(uint * )(param_1 + 0x11) = uVar2;
                if (uVar12 < uVar2) {
                    *(uint * )(param_1 + 0x11) = uVar12;
                }
            }
        }
        if (*(uint * )(param_1 + 0x11) < 3) {
            bVar5 = *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x94) + param_1[10]);
            *(undefined2 * )(param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = 0;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = bVar5;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            psVar3 = (short *) ((longlong) param_1 + (ulonglong) bVar5 * 4 + 0xbc);
            *psVar3 = *psVar3 + 1;
            bVar14 = *(int *) ((longlong) param_1 + 0x16f4) == *(int *) (param_1 + 0x2de) + -1;
            *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) + -1;
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
        } else {
            cVar4 = *(char *) (param_1 + 0x11);
            *(undefined2 * )(param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = 1;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = cVar4 - 3U;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            psVar3 = (short *) ((longlong) param_1 +
                                (ulonglong)(byte)(&DAT_140a47f70)[(byte)(cVar4 - 3U)] * 4 + 0x4c0);
            *psVar3 = *psVar3 + 1;
            *(short *) (param_1 + 0x136) = *(short *) (param_1 + 0x136) + 1;
            bVar14 = *(int *) ((longlong) param_1 + 0x16f4) == *(int *) (param_1 + 0x2de) + -1;
            iVar6 = *(int *) (param_1 + 0x11);
            *(undefined4 * )(param_1 + 0x11) = 0;
            *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) - iVar6;
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + iVar6;
        }
        if (bVar14) {
            uVar12 = *(uint * )((longlong) param_1 + 0x84);
            lVar10 = lVar11;
            if (-1 < (int) uVar12) {
                lVar10 = (ulonglong) uVar12 + param_1[10];
            }
            FUN_1401ccb30(param_1, lVar10, *(int *) ((longlong) param_1 + 0x94) - uVar12, 0);
            lVar10 = *param_1;
            *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
            lVar7 = *(longlong * )(lVar10 + 0x28);
            FUN_1401cd200();
            uVar12 = *(uint * )(lVar7 + 0x28);
            if (*(uint * )(lVar10 + 0x18) <= uVar12 && uVar12 != *(uint * )(lVar10 + 0x18)) {
                uVar12 = *(uint * )(lVar10 + 0x18);
            }
            if (uVar12 != 0) {
                FUN_1407db590();
                *(longlong * )(lVar10 + 0x10) = *(longlong * )(lVar10 + 0x10) + (ulonglong) uVar12;
                *(longlong * )(lVar7 + 0x20) = *(longlong * )(lVar7 + 0x20) + (ulonglong) uVar12;
                *(int *) (lVar10 + 0x1c) = *(int *) (lVar10 + 0x1c) + uVar12;
                *(int *) (lVar10 + 0x18) = *(int *) (lVar10 + 0x18) - uVar12;
                piVar1 = (int *) (lVar7 + 0x28);
                *piVar1 = *piVar1 - uVar12;
                if (*piVar1 == 0) {
                    *(undefined8 * )(lVar7 + 0x20) = *(undefined8 * )(lVar7 + 0x10);
                }
            }
            if (*(int *) (*param_1 + 0x18) == 0) {
                return '\0';
            }
        }
    } while (true);
}


char FUN_1401ab8e0(longlong *param_1) {
    int *piVar1;
    short *psVar2;
    byte bVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;

    lVar6 = 0;
    do {
        do {
            if ((*(int *) ((longlong) param_1 + 0x9c) == 0) &&
                (FUN_1401aa730(), *(int *) ((longlong) param_1 + 0x9c) == 0)) {
                uVar7 = *(uint * )((longlong) param_1 + 0x84);
                *(undefined4 * )((longlong) param_1 + 0x170c) = 0;
                if (-1 < (int) uVar7) {
                    lVar6 = (ulonglong) uVar7 + param_1[10];
                }
                FUN_1401ccb30(param_1, lVar6, *(int *) ((longlong) param_1 + 0x94) - uVar7, 1);
                *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
                FUN_1401a9a10(*param_1);
                return (*(int *) (*param_1 + 0x18) != 0) + '\x02';
            }
            *(undefined4 * )(param_1 + 0x11) = 0;
            bVar3 = *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x94) + param_1[10]);
            *(undefined2 * )(param_1[0x2df] + (ulonglong) * (uint * )((longlong) param_1 + 0x16f4) * 2) = 0;
            *(byte * )((ulonglong) * (uint * )((longlong) param_1 + 0x16f4) + param_1[0x2dd]) = bVar3;
            *(int *) ((longlong) param_1 + 0x16f4) = *(int *) ((longlong) param_1 + 0x16f4) + 1;
            psVar2 = (short *) ((longlong) param_1 + (ulonglong) bVar3 * 4 + 0xbc);
            *psVar2 = *psVar2 + 1;
            *(int *) ((longlong) param_1 + 0x94) = *(int *) ((longlong) param_1 + 0x94) + 1;
            *(int *) ((longlong) param_1 + 0x9c) = *(int *) ((longlong) param_1 + 0x9c) + -1;
        } while (*(int *) ((longlong) param_1 + 0x16f4) != *(int *) (param_1 + 0x2de) + -1);
        uVar7 = *(uint * )((longlong) param_1 + 0x84);
        lVar5 = lVar6;
        if (-1 < (int) uVar7) {
            lVar5 = (ulonglong) uVar7 + param_1[10];
        }
        FUN_1401ccb30(param_1, lVar5, *(int *) ((longlong) param_1 + 0x94) - uVar7, 0);
        lVar5 = *param_1;
        *(undefined4 * )((longlong) param_1 + 0x84) = *(undefined4 * )((longlong) param_1 + 0x94);
        lVar4 = *(longlong * )(lVar5 + 0x28);
        FUN_1401cd200();
        uVar7 = *(uint * )(lVar4 + 0x28);
        if (*(uint * )(lVar5 + 0x18) <= uVar7 && uVar7 != *(uint * )(lVar5 + 0x18)) {
            uVar7 = *(uint * )(lVar5 + 0x18);
        }
        if (uVar7 != 0) {
            FUN_1407db590();
            *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + (ulonglong) uVar7;
            *(longlong * )(lVar4 + 0x20) = *(longlong * )(lVar4 + 0x20) + (ulonglong) uVar7;
            *(int *) (lVar5 + 0x1c) = *(int *) (lVar5 + 0x1c) + uVar7;
            *(int *) (lVar5 + 0x18) = *(int *) (lVar5 + 0x18) - uVar7;
            piVar1 = (int *) (lVar4 + 0x28);
            *piVar1 = *piVar1 - uVar7;
            if (*piVar1 == 0) {
                *(undefined8 * )(lVar4 + 0x20) = *(undefined8 * )(lVar4 + 0x10);
            }
        }
    } while (*(int *) (*param_1 + 0x18) != 0);
    return '\0';
}


undefined8 FUN_1401abaa0(longlong param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;

    if ((param_1 != 0) && (puVar2 = *(undefined8 * *)(param_1 + 0x28), puVar2 != (undefined8 *) 0x0)) {
        *(undefined4 * )((longlong) puVar2 + 0x1c) = 0;
        *(undefined4 * )(param_1 + 0x1c) = 0;
        *(undefined4 * )(param_1 + 0xc) = 0;
        *(undefined8 * )(param_1 + 0x20) = 0;
        if (*(uint * )(puVar2 + 1) != 0) {
            *(uint * )(param_1 + 0x4c) = *(uint * )(puVar2 + 1) & 1;
        }
        puVar1 = puVar2 + 0xa9;
        *puVar2 = 0;
        *(undefined4 * )((longlong) puVar2 + 0xc) = 0;
        puVar2[0x10] = puVar1;
        puVar2[0xc] = puVar1;
        puVar2[0xb] = puVar1;
        *(undefined4 * )((longlong) puVar2 + 0x14) = 0x8000;
        puVar2[4] = 0;
        puVar2[8] = 0;
        *(undefined4 * )(puVar2 + 0x37b) = 1;
        *(undefined4 * )((longlong) puVar2 + 0x1bdc) = 0xffffffff;
        return 0;
    }
    return 0xfffffffe;
}


undefined8 FUN_1401abb20(longlong param_1) {
    longlong lVar1;
    undefined8 uVar2;

    if ((param_1 == 0) || (lVar1 = *(longlong * )(param_1 + 0x28), lVar1 == 0)) {
        return 0xfffffffe;
    }
    if ((*(longlong * )(lVar1 + 0x38) != 0) && (*(int *) (lVar1 + 0x28) != 0xf)) {
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40));
        *(undefined8 * )(lVar1 + 0x38) = 0;
    }
    *(undefined4 * )(lVar1 + 8) = 1;
    *(undefined4 * )(lVar1 + 0x28) = 0xf;
    lVar1 = *(longlong * )(param_1 + 0x28);
    if (lVar1 != 0) {
        *(undefined8 * )(lVar1 + 0x2c) = 0;
        *(undefined4 * )(lVar1 + 0x34) = 0;
        uVar2 = FUN_1401abaa0(param_1);
        return uVar2;
    }
    return 0xfffffffe;
}


int FUN_1401abbc0(longlong param_1, undefined8 param_2, char *param_3) {
    int iVar1;
    longlong lVar2;

    if ((param_3 == (char *) 0x0) || (*param_3 != s_1_2_8_140c1e4ac[0])) {
        return -6;
    }
    if (param_1 == 0) {
        return -2;
    }
    *(undefined8 * )(param_1 + 0x20) = 0;
    if (*(longlong * )(param_1 + 0x30) == 0) {
        *(undefined8 * )(param_1 + 0x40) = 0;
        *(code * *)(param_1 + 0x30) = FUN_1401cd9d0;
    }
    if (*(longlong * )(param_1 + 0x38) == 0) {
        *(code * *)(param_1 + 0x38) = FUN_1401cd9e0;
    }
    lVar2 = (**(code * *)(param_1 + 0x30))(*(undefined8 * )(param_1 + 0x40), 1, 0x1be8);
    if (lVar2 == 0) {
        return -4;
    }
    *(longlong * )(param_1 + 0x28) = lVar2;
    *(undefined8 * )(lVar2 + 0x38) = 0;
    iVar1 = FUN_1401abb20(param_1);
    if (iVar1 != 0) {
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40), lVar2);
        *(undefined8 * )(param_1 + 0x28) = 0;
    }
    return iVar1;
}


undefined8 FUN_1401abca0(longlong param_1, longlong param_2, ulonglong param_3) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;

    lVar1 = *(longlong * )(param_1 + 0x28);
    uVar4 = (uint)(param_3 & 0xffffffff);
    if (*(longlong * )(lVar1 + 0x38) == 0) {
        lVar3 = (**(code * *)(param_1 + 0x30))
                (*(undefined8 * )(param_1 + 0x40),
                 1 << ((byte) * (undefined4 * )(lVar1 + 0x28) & 0x1f), 1);
        *(longlong * )(lVar1 + 0x38) = lVar3;
        if (lVar3 == 0) {
            return 1;
        }
    }
    if (*(int *) (lVar1 + 0x2c) == 0) {
        *(undefined8 * )(lVar1 + 0x30) = 0;
        *(int *) (lVar1 + 0x2c) = 1 << ((byte) * (undefined4 * )(lVar1 + 0x28) & 0x1f);
    }
    uVar5 = *(uint * )(lVar1 + 0x2c);
    if (uVar4 < uVar5) {
        uVar5 = uVar5 - *(int *) (lVar1 + 0x34);
        if (uVar4 < uVar5) {
            uVar5 = uVar4;
        }
        FUN_1407db590((ulonglong) * (uint * )(lVar1 + 0x34) + *(longlong * )(lVar1 + 0x38),
                      param_2 - (param_3 & 0xffffffff), uVar5);
        uVar4 = uVar4 - uVar5;
        if (uVar4 == 0) {
            *(int *) (lVar1 + 0x34) = *(int *) (lVar1 + 0x34) + uVar5;
            iVar2 = *(int *) (lVar1 + 0x34);
            if (*(int *) (lVar1 + 0x34) == *(int *) (lVar1 + 0x2c)) {
                iVar2 = 0;
            }
            *(int *) (lVar1 + 0x34) = iVar2;
            if (*(uint * )(lVar1 + 0x2c) <= *(uint * )(lVar1 + 0x30)) {
                return 0;
            }
            iVar2 = *(uint * )(lVar1 + 0x30) + uVar5;
        } else {
            FUN_1407db590(*(undefined8 * )(lVar1 + 0x38), param_2 - (ulonglong) uVar4);
            iVar2 = *(int *) (lVar1 + 0x2c);
            *(uint * )(lVar1 + 0x34) = uVar4;
        }
    } else {
        FUN_1407db590(*(undefined8 * )(lVar1 + 0x38), param_2 - (ulonglong) uVar5, uVar5);
        iVar2 = *(int *) (lVar1 + 0x2c);
        *(undefined4 * )(lVar1 + 0x34) = 0;
    }
    *(int *) (lVar1 + 0x30) = iVar2;
    return 0;
}


int FUN_1401abda0(byte **param_1, int param_2) {
    byte bVar1;
    uint uVar2;
    uint *puVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    ushort uVar13;
    uint uVar14;
    longlong lVar15;
    uint uVar16;
    uint uVar17;
    ulonglong uVar18;
    undefined2 uVar19;
    byte *pbVar20;
    byte *pbVar21;
    byte *pbVar22;
    int local_res18;
    uint local_res20;
    uint local_64;
    byte bStack95;
    byte *local_58;

    puVar3 = (uint *) param_1[5];
    if (((puVar3 == (uint *) 0x0) || (param_1[2] == (byte *) 0x0)) ||
        ((*param_1 == (byte *) 0x0 && (*(int *) (param_1 + 1) != 0)))) {
        return -2;
    }
    if (*puVar3 == 0xb) {
        *puVar3 = 0xc;
    }
    uVar9 = *(uint * )(param_1 + 3);
    uVar11 = *puVar3;
    pbVar20 = param_1[2];
    uVar2 = *(uint * )(param_1 + 1);
    pbVar22 = *param_1;
    uVar8 = puVar3[0x10];
    uVar16 = puVar3[0x11];
    local_res18 = 0;
    local_res20 = uVar9;
    local_64 = uVar9;
    local_58 = pbVar20;
    uVar17 = uVar2;
    do {
        if (0x1e < uVar11) {
            return -2;
        }
        uVar7 = 0;
        switch (IMAGE_DOS_HEADER_140000000.e_magic +
                (&switchD_1401abe59::switchdataD_1401ad42c)[(int) uVar11]) {
            case (char *) 0x1401abe5b:
                if (puVar3[2] == 0) {
                    *puVar3 = 0xc;
                } else {
                    for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                    }
                    if (((puVar3[2] & 2) == 0) || (uVar8 != 0x8b1f)) {
                        puVar3[4] = 0;
                        if (*(longlong * )(puVar3 + 8) != 0) {
                            *(undefined4 * )(*(longlong * )(puVar3 + 8) + 0x40) = 0xffffffff;
                        }
                        if (((*(byte * )(puVar3 + 2) & 1) == 0) ||
                            (uVar11 = (uVar8 & 0xff) * 0x100 + (uVar8 >> 8),
                                    uVar11 != ((uVar11 - uVar11 / 0x1f >> 1) + uVar11 / 0x1f >> 4) * 0x1f)) {
                            param_1[4] = (byte *) s_incorrect_header_check_140c2cbf0;
                            *puVar3 = 0x1d;
                        } else if (((byte) uVar8 & 0xf) == 8) {
                            uVar16 = uVar16 - 4;
                            uVar11 = (uVar8 >> 4 & 0xf) + 8;
                            if (puVar3[10] == 0) {
                                puVar3[10] = uVar11;
                            } else if (puVar3[10] < uVar11) {
                                param_1[4] = (byte *) s_invalid_window_size_140c2cc80;
                                *puVar3 = 0x1d;
                                uVar8 = uVar8 >> 4;
                                break;
                            }
                            puVar3[5] = 1 << (sbyte) uVar11;
                            uVar9 = FUN_1401cd3e0();
                            puVar3[6] = uVar9;
                            *(uint * )((longlong) param_1 + 0x4c) = uVar9;
                            uVar16 = 0;
                            *puVar3 = ~(uVar8 >> 0xc) & 2 | 9;
                            uVar8 = 0;
                            pbVar20 = local_58;
                            uVar9 = local_res20;
                        } else {
                            param_1[4] = (byte *) s_unknown_compression_method_140c2cc98;
                            *puVar3 = 0x1d;
                        }
                    } else {
                        uVar9 = FUN_1401cd6c0(0, 0, 0);
                        puVar3[6] = uVar9;
                        uVar9 = FUN_1401cd6d0();
                        uVar8 = 0;
                        uVar16 = 0;
                        puVar3[6] = uVar9;
                        *puVar3 = 1;
                        pbVar20 = local_58;
                        uVar9 = local_res20;
                    }
                }
                break;
            case (char *) 0x1401abfdb:
                for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                    if (uVar17 == 0) goto LAB_1401ac644;
                    bVar1 = *pbVar22;
                    uVar17 = uVar17 - 1;
                    pbVar22 = pbVar22 + 1;
                    uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                }
                puVar3[4] = uVar8;
                if ((char) uVar8 == '\b') {
                    if ((uVar8 & 0xe000) == 0) {
                        if (*(uint * *)(puVar3 + 8) != (uint *) 0x0) {
                            **(uint * *)(puVar3 + 8) = uVar8 >> 8 & 1;
                        }
                        if ((puVar3[4] & 0x200) != 0) {
                            uVar9 = FUN_1401cd6d0();
                            puVar3[6] = uVar9;
                        }
                        *puVar3 = 2;
                        uVar8 = uVar7;
                        uVar16 = uVar7;
                        do {
                            if (uVar17 == 0) goto LAB_1401ac644;
                            bVar1 = *pbVar22;
                            uVar9 = uVar16 + 8;
                            uVar17 = uVar17 - 1;
                            pbVar22 = pbVar22 + 1;
                            uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                            joined_r0x0001401ac098:
                            uVar16 = uVar9;
                        } while (uVar9 < 0x20);
                        if (*(longlong * )(puVar3 + 8) != 0) {
                            *(uint * )(*(longlong * )(puVar3 + 8) + 4) = uVar8;
                        }
                        if ((puVar3[4] & 0x200) != 0) {
                            uVar9 = FUN_1401cd6d0();
                            puVar3[6] = uVar9;
                        }
                        *puVar3 = 3;
                        uVar8 = uVar7;
                        uVar16 = uVar7;
                        do {
                            if (uVar17 == 0) goto LAB_1401ac644;
                            bVar1 = *pbVar22;
                            uVar9 = uVar16 + 8;
                            uVar17 = uVar17 - 1;
                            pbVar22 = pbVar22 + 1;
                            uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                            joined_r0x0001401ac11e:
                            uVar16 = uVar9;
                        } while (uVar9 < 0x10);
                        if (*(longlong * )(puVar3 + 8) != 0) {
                            *(uint * )(*(longlong * )(puVar3 + 8) + 8) = uVar8 & 0xff;
                            *(uint * )(*(longlong * )(puVar3 + 8) + 0xc) = uVar8 >> 8;
                        }
                        if ((puVar3[4] & 0x200) != 0) {
                            uVar9 = FUN_1401cd6d0();
                            puVar3[6] = uVar9;
                        }
                        *puVar3 = 4;
                        uVar8 = uVar7;
                        uVar16 = uVar7;
                        goto switchD_1401abe59_caseD_401ac197;
                    }
                    param_1[4] = (byte *) s_unknown_header_flags_set_140c2ccb8;
                    *puVar3 = 0x1d;
                } else {
                    param_1[4] = (byte *) s_unknown_compression_method_140c2cce8;
                    *puVar3 = 0x1d;
                }
                break;
            case (char *) 0x1401ac095:
                uVar9 = uVar16;
                goto joined_r0x0001401ac098;
            case (char *) 0x1401ac11b:
                uVar9 = uVar16;
                goto joined_r0x0001401ac11e;
            case (char *) 0x1401ac197:
            switchD_1401abe59_caseD_401ac197:
                if ((puVar3[4] & 0x400) == 0) {
                    if (*(longlong * )(puVar3 + 8) != 0) {
                        *(undefined8 * )(*(longlong * )(puVar3 + 8) + 0x10) = 0;
                    }
                } else {
                    for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                    }
                    puVar3[0x12] = uVar8;
                    if (*(longlong * )(puVar3 + 8) != 0) {
                        *(uint * )(*(longlong * )(puVar3 + 8) + 0x18) = uVar8;
                    }
                    uVar8 = uVar7;
                    uVar16 = uVar7;
                    if ((puVar3[4] & 0x200) != 0) {
                        uVar9 = FUN_1401cd6d0();
                        puVar3[6] = uVar9;
                    }
                }
                *puVar3 = 5;
            case (char *) 0x1401ac220:
                if ((puVar3[4] & 0x400) == 0) {
                    LAB_1401ac2b2:
                    puVar3[0x12] = 0;
                    *puVar3 = 6;
                    switchD_1401abe59_caseD_401ac2be:
                    if ((puVar3[4] & 0x800) == 0) {
                        if (*(longlong * )(puVar3 + 8) != 0) {
                            *(undefined8 * )(*(longlong * )(puVar3 + 8) + 0x20) = 0;
                        }
                        LAB_1401ac34c:
                        puVar3[0x12] = 0;
                        *puVar3 = 7;
                        switchD_1401abe59_caseD_401ac358:
                        if ((puVar3[4] & 0x1000) == 0) {
                            if (*(longlong * )(puVar3 + 8) != 0) {
                                *(undefined8 * )(*(longlong * )(puVar3 + 8) + 0x30) = 0;
                            }
                            LAB_1401ac3ec:
                            *puVar3 = 8;
                            pbVar20 = local_58;
                            uVar9 = local_res20;
                            switchD_1401abe59_caseD_401ac400:
                            if ((puVar3[4] & 0x200) != 0) {
                                for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                                    if (uVar17 == 0) goto LAB_1401ac644;
                                    bVar1 = *pbVar22;
                                    uVar17 = uVar17 - 1;
                                    pbVar22 = pbVar22 + 1;
                                    uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                                }
                                if (uVar8 != *(ushort * )(puVar3 + 6)) {
                                    param_1[4] = (byte *) s_header_crc_mismatch_140c2cc20;
                                    *puVar3 = 0x1d;
                                    break;
                                }
                                uVar8 = 0;
                                uVar16 = uVar8;
                            }
                            if (*(longlong * )(puVar3 + 8) != 0) {
                                *(uint * )(*(longlong * )(puVar3 + 8) + 0x3c) = (int) puVar3[4] >> 9 & 1;
                                *(undefined4 * )(*(longlong * )(puVar3 + 8) + 0x40) = 1;
                            }
                            uVar9 = FUN_1401cd6c0();
                            puVar3[6] = uVar9;
                            *(uint * )((longlong) param_1 + 0x4c) = uVar9;
                            LAB_1401ac48b:
                            *puVar3 = 0xb;
                            pbVar20 = local_58;
                            uVar9 = local_res20;
                            break;
                        }
                        uVar18 = 0;
                        if (uVar17 != 0) {
                            do {
                                uVar9 = (int) uVar18 + 1;
                                bVar1 = pbVar22[uVar18];
                                lVar15 = *(longlong * )(puVar3 + 8);
                                if (((lVar15 != 0) && (*(longlong * )(lVar15 + 0x30) != 0)) &&
                                    (puVar3[0x12] < *(uint * )(lVar15 + 0x38))) {
                                    *(byte * )((ulonglong) puVar3[0x12] + *(longlong * )(lVar15 + 0x30)) = bVar1;
                                    puVar3[0x12] = puVar3[0x12] + 1;
                                }
                            } while ((bVar1 != 0) && (uVar18 = (ulonglong) uVar9, uVar9 < uVar17));
                            if ((puVar3[4] & 0x200) != 0) {
                                if (pbVar22 == (byte *) 0x0) {
                                    uVar11 = 0;
                                } else {
                                    uVar11 = FUN_1401cd6d0();
                                }
                                puVar3[6] = uVar11;
                            }
                            uVar17 = uVar17 - uVar9;
                            pbVar22 = pbVar22 + uVar9;
                            if (bVar1 == 0) goto LAB_1401ac3ec;
                        }
                    } else {
                        uVar18 = 0;
                        if (uVar17 != 0) {
                            do {
                                uVar9 = (int) uVar18 + 1;
                                bVar1 = pbVar22[uVar18];
                                lVar15 = *(longlong * )(puVar3 + 8);
                                if (((lVar15 != 0) && (*(longlong * )(lVar15 + 0x20) != 0)) &&
                                    (puVar3[0x12] < *(uint * )(lVar15 + 0x28))) {
                                    *(byte * )((ulonglong) puVar3[0x12] + *(longlong * )(lVar15 + 0x20)) = bVar1;
                                    puVar3[0x12] = puVar3[0x12] + 1;
                                }
                            } while ((bVar1 != 0) && (uVar18 = (ulonglong) uVar9, uVar9 < uVar17));
                            if ((puVar3[4] & 0x200) != 0) {
                                if (pbVar22 == (byte *) 0x0) {
                                    uVar11 = 0;
                                } else {
                                    uVar11 = FUN_1401cd6d0();
                                }
                                puVar3[6] = uVar11;
                            }
                            uVar17 = uVar17 - uVar9;
                            pbVar22 = pbVar22 + uVar9;
                            if (bVar1 == 0) goto LAB_1401ac34c;
                        }
                    }
                } else {
                    uVar9 = puVar3[0x12];
                    if (uVar17 < puVar3[0x12]) {
                        uVar9 = uVar17;
                    }
                    if (uVar9 != 0) {
                        if ((*(longlong * )(puVar3 + 8) != 0) &&
                            (*(longlong * )(*(longlong * )(puVar3 + 8) + 0x10) != 0)) {
                            FUN_1407db590();
                        }
                        if ((puVar3[4] & 0x200) != 0) {
                            if (pbVar22 == (byte *) 0x0) {
                                uVar11 = 0;
                            } else {
                                uVar11 = FUN_1401cd6d0();
                            }
                            puVar3[6] = uVar11;
                        }
                        uVar17 = uVar17 - uVar9;
                        pbVar22 = pbVar22 + uVar9;
                        puVar3[0x12] = puVar3[0x12] - uVar9;
                    }
                    if (puVar3[0x12] == 0) goto LAB_1401ac2b2;
                }
            LAB_1401ac644:
                param_1[2] = local_58;
                *param_1 = pbVar22;
                *(uint * )(param_1 + 3) = local_res20;
                *(uint * )(param_1 + 1) = uVar17;
                puVar3[0x11] = uVar16;
                puVar3[0x10] = uVar8;
                if (((puVar3[0xb] == 0) &&
                     (((local_64 == *(uint * )(param_1 + 3) || (0x1c < (int) *puVar3)) ||
                       ((0x19 < (int) *puVar3 && (param_2 == 4)))))) || (iVar5 = FUN_1401abca0(), iVar5 == 0)) {
                    local_64 = local_64 - *(int *) (param_1 + 3);
                    iVar5 = uVar2 - *(int *) (param_1 + 1);
                    *(int *) ((longlong) param_1 + 0x1c) = *(int *) ((longlong) param_1 + 0x1c) + local_64;
                    *(int *) ((longlong) param_1 + 0xc) = *(int *) ((longlong) param_1 + 0xc) + iVar5;
                    puVar3[7] = puVar3[7] + local_64;
                    if ((puVar3[2] != 0) && (local_64 != 0)) {
                        if (puVar3[4] == 0) {
                            uVar9 = FUN_1401cd3e0();
                        } else if (param_1[2] == (byte * )(ulonglong)local_64) {
                            uVar9 = 0;
                        }
                        else {
                            uVar9 = FUN_1401cd6d0();
                        }
                        puVar3[6] = uVar9;
                        *(uint * )((longlong) param_1 + 0x4c) = uVar9;
                    }
                    uVar9 = *puVar3;
                    if ((uVar9 == 0x13) || (uVar9 == 0xe)) {
                        iVar6 = 0x100;
                    } else {
                        iVar6 = 0;
                    }
                    iVar10 = 0;
                    if (uVar9 == 0xb) {
                        iVar10 = 0x80;
                    }
                    *(uint * )(param_1 + 9) = iVar10 + iVar6 + (-(uint)(puVar3[1] != 0) & 0x40) + puVar3[0x11];
                    if (((iVar5 != 0) || (local_64 != 0)) && (param_2 != 4)) {
                        return local_res18;
                    }
                    if (local_res18 != 0) {
                        return local_res18;
                    }
                    return -5;
                }
                *puVar3 = 0x1e;
            LAB_1401ac6ba:
                return -4;
            case (char *) 0x1401ac2be:
                goto switchD_1401abe59_caseD_401ac2be;
            case (char *) 0x1401ac358:
                goto switchD_1401abe59_caseD_401ac358;
            case (char *) 0x1401ac400:
                goto switchD_1401abe59_caseD_401ac400;
            case (char *) 0x1401ac4b6:
                for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
                    if (uVar17 == 0) goto LAB_1401ac644;
                    bVar1 = *pbVar22;
                    uVar17 = uVar17 - 1;
                    pbVar22 = pbVar22 + 1;
                    uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                }
                uVar11 = (uVar8 >> 8 & 0xff00) + ((uVar8 & 0xff00) + uVar8 * 0x10000) * 0x100 +
                         (uVar8 >> 0x18);
                puVar3[6] = uVar11;
                *(uint * )((longlong) param_1 + 0x4c) = uVar11;
                *puVar3 = 10;
                uVar8 = uVar7;
                uVar16 = uVar7;
            case (char *) 0x1401ac51e:
                if (puVar3[3] == 0) {
                    param_1[2] = pbVar20;
                    *(uint * )(param_1 + 3) = uVar9;
                    *param_1 = pbVar22;
                    *(uint * )(param_1 + 1) = uVar17;
                    puVar3[0x10] = uVar8;
                    puVar3[0x11] = uVar16;
                    return 2;
                }
                uVar9 = FUN_1401cd3e0();
                puVar3[6] = uVar9;
                *(uint * )((longlong) param_1 + 0x4c) = uVar9;
                *puVar3 = 0xb;
                pbVar20 = local_58;
                uVar9 = local_res20;
            switchD_1401abe59_caseD_401ac551:
                if (1 < param_2 - 5U) {
                    switchD_1401abe59_caseD_401ac55d:
                    if (puVar3[1] == 0) {
                        for (; uVar16 < 3; uVar16 = uVar16 + 8) {
                            if (uVar17 == 0) goto LAB_1401ac644;
                            bVar1 = *pbVar22;
                            uVar17 = uVar17 - 1;
                            pbVar22 = pbVar22 + 1;
                            uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                        }
                        puVar3[1] = uVar8 & 1;
                        uVar11 = uVar8 >> 1 & 3;
                        if (uVar11 == 0) {
                            *puVar3 = 0xd;
                        } else {
                            if (uVar11 != 1) {
                                if (uVar11 == 2) {
                                    *puVar3 = 0x10;
                                    uVar16 = uVar16 - 3;
                                    uVar8 = uVar8 >> 3;
                                } else {
                                    if (uVar11 != 3) goto LAB_1401ac6e8;
                                    uVar16 = uVar16 - 3;
                                    param_1[4] = (byte *) s_invalid_block_type_140c2cc08;
                                    *puVar3 = 0x1d;
                                    uVar8 = uVar8 >> 3;
                                }
                                break;
                            }
                            puVar3[0x1a] = 9;
                            puVar3[0x1b] = 5;
                            *(undefined * *)(puVar3 + 0x16) = &DAT_140a45590;
                            *puVar3 = 0x13;
                            *(undefined * *)(puVar3 + 0x18) = &DAT_140a45d90;
                            if (param_2 == 6) {
                                uVar8 = uVar8 >> 3;
                                uVar16 = uVar16 - 3;
                                goto LAB_1401ac644;
                            }
                        }
                        LAB_1401ac6e8:
                        uVar16 = uVar16 - 3;
                        uVar8 = uVar8 >> 3;
                    } else {
                        *puVar3 = 0x1a;
                        uVar11 = uVar16 & 7;
                        uVar16 = uVar16 - uVar11;
                        uVar8 = uVar8 >> (sbyte) uVar11;
                    }
                    break;
                }
                goto LAB_1401ac644;
            case (char *) 0x1401ac551:
                goto switchD_1401abe59_caseD_401ac551;
            case (char *) 0x1401ac55d:
                goto switchD_1401abe59_caseD_401ac55d;
            case (char *) 0x1401ac6b5:
                goto LAB_1401ac6ba;
            case (char *) 0x1401ac6f4:
                uVar8 = uVar8 >> (sbyte)(uVar16 & 7);
                for (uVar16 = uVar16 - (uVar16 & 7); uVar16 < 0x20; uVar16 = uVar16 + 8) {
                    if (uVar17 == 0) goto LAB_1401ac644;
                    bVar1 = *pbVar22;
                    uVar17 = uVar17 - 1;
                    pbVar22 = pbVar22 + 1;
                    uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                }
                if ((uVar8 & 0xffff) == ~uVar8 >> 0x10) {
                    puVar3[0x12] = uVar8 & 0xffff;
                    *puVar3 = 0xe;
                    uVar8 = uVar7;
                    uVar16 = uVar7;
                    if (param_2 != 6) goto switchD_1401abe59_caseD_401ac766;
                    goto LAB_1401ac644;
                }
                param_1[4] = (byte *) s_invalid_stored_block_lengths_140c2cc60;
                *puVar3 = 0x1d;
                break;
            case (char *) 0x1401ac766:
            switchD_1401abe59_caseD_401ac766:
                *puVar3 = 0xf;
            case (char *) 0x1401ac76e:
                uVar11 = puVar3[0x12];
                if (uVar11 == 0) {
                    *puVar3 = 0xb;
                    break;
                }
                if (uVar17 < uVar11) {
                    uVar11 = uVar17;
                }
                if (uVar9 < uVar11) {
                    uVar11 = uVar9;
                }
                if (uVar11 != 0) {
                    FUN_1407db590();
                    local_res20 = local_res20 - uVar11;
                    uVar17 = uVar17 - uVar11;
                    local_58 = local_58 + uVar11;
                    pbVar22 = pbVar22 + uVar11;
                    puVar3[0x12] = puVar3[0x12] - uVar11;
                    pbVar20 = local_58;
                    uVar9 = local_res20;
                    break;
                }
                goto LAB_1401ac644;
            case (char *) 0x1401ac7d9:
                for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
                    if (uVar17 == 0) goto LAB_1401ac644;
                    bVar1 = *pbVar22;
                    uVar17 = uVar17 - 1;
                    pbVar22 = pbVar22 + 1;
                    uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                }
                uVar16 = uVar16 - 0xe;
                uVar14 = uVar8 >> 10;
                uVar11 = (uVar8 & 0x1f) + 0x101;
                uVar7 = (uVar8 >> 5 & 0x1f) + 1;
                uVar8 = uVar8 >> 0xe;
                puVar3[0x1d] = uVar11;
                puVar3[0x1e] = uVar7;
                puVar3[0x1c] = (uVar14 & 0xf) + 4;
                if ((uVar11 < 0x11f) && (uVar7 < 0x1f)) {
                    puVar3[0x1f] = 0;
                    *puVar3 = 0x11;
                    goto switchD_1401abe59_caseD_401ac859;
                }
                param_1[4] = (byte *) s_too_many_length_or_distance_symb_140c2cc38;
                *puVar3 = 0x1d;
                break;
            case (char *) 0x1401ac859:
            switchD_1401abe59_caseD_401ac859:
                if (puVar3[0x1f] < puVar3[0x1c]) {
                    do {
                        for (; uVar16 < 3; uVar16 = uVar16 + 8) {
                            if (uVar17 == 0) goto LAB_1401ac644;
                            bVar1 = *pbVar22;
                            uVar17 = uVar17 - 1;
                            pbVar22 = pbVar22 + 1;
                            uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                        }
                        uVar13 = (ushort) uVar8;
                        uVar16 = uVar16 - 3;
                        uVar8 = uVar8 >> 3;
                        *(ushort * )
                                ((longlong) puVar3 +
                                 (ulonglong) * (ushort * )(&DAT_140a45428 + (ulonglong) puVar3[0x1f] * 2) * 2 + 0x88) =
                                uVar13 & 7;
                        puVar3[0x1f] = puVar3[0x1f] + 1;
                    } while (puVar3[0x1f] < puVar3[0x1c]);
                }
                uVar9 = puVar3[0x1f];
                while (uVar9 < 0x13) {
                    *(undefined2 * )
                            ((longlong) puVar3 +
                             (ulonglong) * (ushort * )(&DAT_140a45428 + (ulonglong) puVar3[0x1f] * 2) * 2 + 0x88) = 0;
                    puVar3[0x1f] = puVar3[0x1f] + 1;
                    uVar9 = puVar3[0x1f];
                }
                *(uint * *)(puVar3 + 0x20) = puVar3 + 0x152;
                *(uint * *)(puVar3 + 0x16) = puVar3 + 0x152;
                puVar3[0x1a] = 7;
                local_res18 = FUN_1401cded0();
                if (local_res18 == 0) {
                    puVar3[0x1f] = 0;
                    *puVar3 = 0x12;
                    goto switchD_1401abe59_caseD_401ac96a;
                }
                param_1[4] = (byte *) s_invalid_code_lengths_set_140c2cda0;
                *puVar3 = 0x1d;
                pbVar20 = local_58;
                uVar9 = local_res20;
                break;
            case (char *) 0x1401ac96a:
            switchD_1401abe59_caseD_401ac96a:
                uVar9 = puVar3[0x1f];
                if (uVar9 < puVar3[0x1e] + puVar3[0x1d]) {
                    do {
                        uVar14 = (1 << ((byte) puVar3[0x1a] & 0x1f)) - 1;
                        uVar11 = *(uint * )(*(longlong * )(puVar3 + 0x16) + (ulonglong)(uVar8 & uVar14) * 4);
                        uVar7 = uVar16;
                        if (uVar16 < (uVar11 >> 8 & 0xff)) {
                            do {
                                uVar16 = uVar7;
                                if (uVar17 == 0) goto LAB_1401ac644;
                                bVar1 = *pbVar22;
                                uVar16 = uVar7 + 8;
                                uVar17 = uVar17 - 1;
                                pbVar22 = pbVar22 + 1;
                                uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar7 & 0x1f));
                                uVar11 = *(uint * )(*(longlong * )(puVar3 + 0x16) + (ulonglong)(uVar8 & uVar14) * 4);
                                uVar7 = uVar16;
                            } while (uVar16 < (uVar11 >> 8 & 0xff));
                        }
                        uVar13 = (ushort)(uVar11 >> 0x10);
                        if (uVar13 < 0x10) {
                            uVar11 = uVar11 >> 8 & 0xff;
                            *(ushort * )((longlong) puVar3 + (ulonglong) uVar9 * 2 + 0x88) = uVar13;
                            uVar8 = uVar8 >> ((byte) uVar11 & 0x1f);
                            uVar16 = uVar16 - uVar11;
                            puVar3[0x1f] = puVar3[0x1f] + 1;
                        } else {
                            bStack95 = (byte)(uVar11 >> 8);
                            if (uVar13 == 0x10) {
                                for (; uVar16 < (uVar11 >> 8 & 0xff) + 2; uVar16 = uVar16 + 8) {
                                    if (uVar17 == 0) goto LAB_1401ac644;
                                    bVar1 = *pbVar22;
                                    uVar17 = uVar17 - 1;
                                    pbVar22 = pbVar22 + 1;
                                    uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                                }
                                uVar11 = uVar8 >> (bStack95 & 0x1f);
                                uVar16 = uVar16 - bStack95;
                                if (uVar9 == 0) {
                                    param_1[4] = (byte *) s_invalid_bit_length_repeat_140c2cd78;
                                    *puVar3 = 0x1d;
                                    pbVar20 = local_58;
                                    uVar9 = local_res20;
                                    uVar8 = uVar11;
                                    goto LAB_1401ac49b;
                                }
                                uVar8 = uVar11 >> 2;
                                iVar5 = (uVar11 & 3) + 3;
                                uVar16 = uVar16 - 2;
                                uVar19 = *(undefined2 * )((longlong) puVar3 + (ulonglong)(uVar9 - 1) * 2 + 0x88);
                            } else {
                                if (uVar13 == 0x11) {
                                    for (; uVar16 < bStack95 + 3; uVar16 = uVar16 + 8) {
                                        if (uVar17 == 0) goto LAB_1401ac644;
                                        bVar1 = *pbVar22;
                                        uVar17 = uVar17 - 1;
                                        pbVar22 = pbVar22 + 1;
                                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                                    }
                                    iVar6 = -3;
                                    uVar8 = uVar8 >> (bStack95 & 0x1f);
                                    iVar5 = (uVar8 & 7) + 3;
                                    uVar8 = uVar8 >> 3;
                                } else {
                                    for (; uVar16 < bStack95 + 7; uVar16 = uVar16 + 8) {
                                        if (uVar17 == 0) goto LAB_1401ac644;
                                        bVar1 = *pbVar22;
                                        uVar17 = uVar17 - 1;
                                        pbVar22 = pbVar22 + 1;
                                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                                    }
                                    iVar6 = -7;
                                    uVar8 = uVar8 >> (bStack95 & 0x1f);
                                    iVar5 = (uVar8 & 0x7f) + 0xb;
                                    uVar8 = uVar8 >> 7;
                                }
                                uVar16 = uVar16 + (iVar6 - (uint) bStack95);
                                uVar19 = 0;
                            }
                            if (puVar3[0x1e] + puVar3[0x1d] < uVar9 + iVar5) {
                                param_1[4] = (byte *) s_invalid_bit_length_repeat_140c2cdf8;
                                *puVar3 = 0x1d;
                                pbVar20 = local_58;
                                uVar9 = local_res20;
                                goto LAB_1401ac49b;
                            }
                            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                                *(undefined2 * )((longlong) puVar3 + (ulonglong) puVar3[0x1f] * 2 + 0x88) = uVar19;
                                puVar3[0x1f] = puVar3[0x1f] + 1;
                            }
                        }
                        uVar9 = puVar3[0x1f];
                    } while (uVar9 < puVar3[0x1e] + puVar3[0x1d]);
                }
                pbVar20 = local_58;
                uVar9 = local_res20;
                if (*puVar3 != 0x1d) {
                    if (*(short *) (puVar3 + 0xa2) == 0) {
                        param_1[4] = (byte *) s_invalid_code____missing_end_of_b_140c2cdd0;
                        *puVar3 = 0x1d;
                    } else {
                        *(uint * *)(puVar3 + 0x20) = puVar3 + 0x152;
                        *(uint * *)(puVar3 + 0x16) = puVar3 + 0x152;
                        puVar3[0x1a] = 9;
                        local_res18 = FUN_1401cded0();
                        if (local_res18 == 0) {
                            *(undefined8 * )(puVar3 + 0x18) = *(undefined8 * )(puVar3 + 0x20);
                            puVar3[0x1b] = 6;
                            local_res18 = FUN_1401cded0();
                            if (local_res18 == 0) {
                                *puVar3 = 0x13;
                                if (param_2 != 6) goto switchD_1401abe59_caseD_401acca8;
                                goto LAB_1401ac644;
                            }
                            param_1[4] = (byte *) s_invalid_distances_set_140c2cd08;
                            *puVar3 = 0x1d;
                        } else {
                            param_1[4] = (byte *) s_invalid_literal_lengths_set_140c2cd20;
                            *puVar3 = 0x1d;
                        }
                    }
                }
                break;
            case (char *) 0x1401acca8:
            switchD_1401abe59_caseD_401acca8:
                *puVar3 = 0x14;
            case (char *) 0x1401accb0:
                if ((5 < uVar17) && (0x101 < uVar9)) {
                    param_1[2] = pbVar20;
                    *(uint * )(param_1 + 3) = uVar9;
                    *param_1 = pbVar22;
                    *(uint * )(param_1 + 1) = uVar17;
                    puVar3[0x10] = uVar8;
                    puVar3[0x11] = uVar16;
                    FUN_1401cd9f0();
                    local_58 = param_1[2];
                    local_res20 = *(uint * )(param_1 + 3);
                    pbVar22 = *param_1;
                    uVar17 = *(uint * )(param_1 + 1);
                    uVar16 = puVar3[0x11];
                    pbVar20 = local_58;
                    uVar9 = local_res20;
                    uVar8 = puVar3[0x10];
                    if (*puVar3 == 0xb) {
                        puVar3[0x6f7] = 0xffffffff;
                    }
                    break;
                }
                lVar15 = *(longlong * )(puVar3 + 0x16);
                puVar3[0x6f7] = 0;
                uVar7 = (1 << ((byte) puVar3[0x1a] & 0x1f)) - 1;
                uVar9 = *(uint * )(lVar15 + (ulonglong)(uVar8 & uVar7) * 4);
                uVar11 = uVar16;
                if (uVar16 < (uVar9 >> 8 & 0xff)) {
                    do {
                        uVar16 = uVar11;
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar16 = uVar11 + 8;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar11 & 0x1f));
                        uVar9 = *(uint * )(lVar15 + (ulonglong)(uVar8 & uVar7) * 4);
                        uVar11 = uVar16;
                    } while (uVar16 < (uVar9 >> 8 & 0xff));
                }
                cVar4 = (char) uVar9;
                if ((cVar4 != '\0') && ((uVar9 & 0xf0) == 0)) {
                    bStack95 = (byte)(uVar9 >> 8);
                    uVar11 = *(uint * )(lVar15 + (ulonglong)
                                                         ((((1 << (cVar4 + bStack95 & 0x1f)) - 1U & uVar8) >>
                                                                                                           (bStack95 &
                                                                                                            0x1f)) +
                                                          (uVar9 >> 0x10)) * 4);
                    if (uVar16 < (uVar11 >> 8 & 0xff) + (uVar9 >> 8 & 0xff)) {
                        do {
                            if (uVar17 == 0) goto LAB_1401ac644;
                            uVar8 = uVar8 + ((uint) * pbVar22 << ((byte) uVar16 & 0x1f));
                            uVar16 = uVar16 + 8;
                            uVar17 = uVar17 - 1;
                            pbVar22 = pbVar22 + 1;
                            uVar11 = *(uint * )(lVar15 + (ulonglong)
                                                                 ((((1 << (cVar4 + bStack95 & 0x1f)) - 1U & uVar8) >>
                                                                                                                   (bStack95 &
                                                                                                                    0x1f)) +
                                                                  (uVar9 >> 0x10)) * 4);
                        } while (uVar16 < (uVar11 >> 8 & 0xff) + (uint) bStack95);
                    }
                    uVar9 = uVar11;
                    uVar8 = uVar8 >> (bStack95 & 0x1f);
                    uVar16 = uVar16 - bStack95;
                    puVar3[0x6f7] = (uint) bStack95;
                }
                uVar11 = uVar9 >> 8 & 0xff;
                puVar3[0x6f7] = puVar3[0x6f7] + uVar11;
                uVar8 = uVar8 >> ((byte) uVar11 & 0x1f);
                uVar16 = uVar16 - uVar11;
                puVar3[0x12] = uVar9 >> 0x10;
                if ((char) uVar9 == '\0') {
                    *puVar3 = 0x19;
                    pbVar20 = local_58;
                    uVar9 = local_res20;
                    break;
                }
                if ((uVar9 & 0x20) != 0) {
                    puVar3[0x6f7] = 0xffffffff;
                    goto LAB_1401ac48b;
                }
                if ((uVar9 & 0x40) != 0) {
                    param_1[4] = (byte *) s_invalid_literal_length_code_140c2cd58;
                    *puVar3 = 0x1d;
                    pbVar20 = local_58;
                    uVar9 = local_res20;
                    break;
                }
                *puVar3 = 0x15;
                puVar3[0x14] = uVar9 & 0xf;
            switchD_1401abe59_caseD_401acebb:
                uVar9 = puVar3[0x14];
                if (uVar9 != 0) {
                    for (; uVar16 < uVar9; uVar16 = uVar16 + 8) {
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                    }
                    uVar16 = uVar16 - uVar9;
                    uVar11 = (1 << ((byte) uVar9 & 0x1f)) - 1U & uVar8;
                    uVar8 = uVar8 >> ((byte) uVar9 & 0x1f);
                    puVar3[0x12] = puVar3[0x12] + uVar11;
                    puVar3[0x6f7] = puVar3[0x6f7] + uVar9;
                }
                *puVar3 = 0x16;
                puVar3[0x6f8] = puVar3[0x12];
            switchD_1401abe59_caseD_401acf17:
                lVar15 = *(longlong * )(puVar3 + 0x18);
                uVar7 = (1 << ((byte) puVar3[0x1b] & 0x1f)) - 1;
                uVar9 = *(uint * )(lVar15 + (ulonglong)(uVar8 & uVar7) * 4);
                uVar11 = uVar16;
                if (uVar16 < (uVar9 >> 8 & 0xff)) {
                    do {
                        uVar16 = uVar11;
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar16 = uVar11 + 8;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar11 & 0x1f));
                        uVar9 = *(uint * )(lVar15 + (ulonglong)(uVar8 & uVar7) * 4);
                        uVar11 = uVar16;
                    } while (uVar16 < (uVar9 >> 8 & 0xff));
                }
                if ((uVar9 & 0xf0) == 0) {
                    bStack95 = (byte)(uVar9 >> 8);
                    uVar11 = *(uint * )(lVar15 + (ulonglong)
                                                         ((((1 << ((char) uVar9 + bStack95 & 0x1f)) - 1U & uVar8) >>
                                                                                                                  (bStack95 &
                                                                                                                   0x1f)) +
                                                          (uVar9 >> 0x10)) * 4);
                    if (uVar16 < (uVar11 >> 8 & 0xff) + (uVar9 >> 8 & 0xff)) {
                        do {
                            if (uVar17 == 0) goto LAB_1401ac644;
                            uVar8 = uVar8 + ((uint) * pbVar22 << ((byte) uVar16 & 0x1f));
                            uVar16 = uVar16 + 8;
                            uVar17 = uVar17 - 1;
                            pbVar22 = pbVar22 + 1;
                            uVar11 = *(uint * )(lVar15 + (ulonglong)
                                                                 ((((1 << ((char) uVar9 + bStack95 & 0x1f)) - 1U &
                                                                    uVar8) >>
                                                                           (bStack95 & 0x1f)) + (uVar9 >> 0x10)) * 4);
                        } while (uVar16 < (uVar11 >> 8 & 0xff) + (uint) bStack95);
                    }
                    uVar9 = uVar11;
                    uVar8 = uVar8 >> (bStack95 & 0x1f);
                    uVar16 = uVar16 - bStack95;
                    puVar3[0x6f7] = puVar3[0x6f7] + (uint) bStack95;
                }
                uVar11 = uVar9 >> 8 & 0xff;
                puVar3[0x6f7] = puVar3[0x6f7] + uVar11;
                uVar8 = uVar8 >> ((byte) uVar11 & 0x1f);
                uVar16 = uVar16 - uVar11;
                if ((uVar9 & 0x40) != 0) {
                    param_1[4] = (byte *) s_invalid_distance_code_140c2cd40;
                    *puVar3 = 0x1d;
                    pbVar20 = local_58;
                    uVar9 = local_res20;
                    break;
                }
                *puVar3 = 0x17;
                puVar3[0x13] = uVar9 >> 0x10;
                puVar3[0x14] = uVar9 & 0xf;
                pbVar20 = local_58;
                uVar9 = local_res20;
            switchD_1401abe59_caseD_401ad08e:
                uVar11 = puVar3[0x14];
                if (uVar11 != 0) {
                    for (; uVar16 < uVar11; uVar16 = uVar16 + 8) {
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar8 = uVar8 + ((uint) bVar1 << ((byte) uVar16 & 0x1f));
                    }
                    uVar16 = uVar16 - uVar11;
                    uVar7 = (1 << ((byte) uVar11 & 0x1f)) - 1U & uVar8;
                    uVar8 = uVar8 >> ((byte) uVar11 & 0x1f);
                    puVar3[0x13] = puVar3[0x13] + uVar7;
                    puVar3[0x6f7] = puVar3[0x6f7] + uVar11;
                }
                *puVar3 = 0x18;
            switchD_1401abe59_caseD_401ad0e5:
                if (uVar9 != 0) {
                    uVar11 = puVar3[0x13];
                    if (local_64 - uVar9 < uVar11) {
                        uVar11 = uVar11 - (local_64 - uVar9);
                        if ((puVar3[0xc] <= uVar11 && uVar11 != puVar3[0xc]) && (puVar3[0x6f6] != 0)) {
                            param_1[4] = (byte *) s_invalid_distance_too_far_back_140c2ce38;
                            *puVar3 = 0x1d;
                            break;
                        }
                        uVar14 = puVar3[0xd];
                        if (uVar14 < uVar11) {
                            uVar11 = uVar11 - uVar14;
                            uVar14 = puVar3[0xb] - uVar11;
                        } else {
                            uVar14 = uVar14 - uVar11;
                        }
                        uVar7 = puVar3[0x12];
                        lVar15 = (ulonglong) uVar14 + *(longlong * )(puVar3 + 0xe);
                        if (uVar7 < uVar11) goto LAB_1401ad155;
                    } else {
                        lVar15 = (longlong) pbVar20 - (ulonglong) uVar11;
                        uVar7 = puVar3[0x12];
                        LAB_1401ad155:
                        uVar11 = uVar7;
                        uVar7 = uVar11;
                    }
                    if (uVar9 < uVar11) {
                        uVar11 = uVar9;
                    }
                    local_res20 = uVar9 - uVar11;
                    puVar3[0x12] = uVar7 - uVar11;
                    pbVar21 = pbVar20;
                    do {
                        local_58 = pbVar21 + 1;
                        *pbVar21 = pbVar21[lVar15 - (longlong) pbVar20];
                        uVar11 = uVar11 - 1;
                        pbVar21 = local_58;
                    } while (uVar11 != 0);
                    pbVar20 = local_58;
                    uVar9 = local_res20;
                    if (puVar3[0x12] == 0) {
                        *puVar3 = 0x14;
                    }
                    break;
                }
                goto LAB_1401ac644;
            case (char *) 0x1401acebb:
                goto switchD_1401abe59_caseD_401acebb;
            case (char *) 0x1401acf17:
                goto switchD_1401abe59_caseD_401acf17;
            case (char *) 0x1401ad08e:
                goto switchD_1401abe59_caseD_401ad08e;
            case (char *) 0x1401ad0e5:
                goto switchD_1401abe59_caseD_401ad0e5;
            case (char *) 0x1401ad19b:
                if (uVar9 == 0) goto LAB_1401ac644;
                local_58 = pbVar20 + 1;
                local_res20 = uVar9 - 1;
                *pbVar20 = *(byte * )(puVar3 + 0x12);
                *puVar3 = 0x14;
                pbVar20 = local_58;
                uVar9 = local_res20;
                break;
            case (char *) 0x1401ad1c8:
                uVar11 = uVar8;
                uVar14 = uVar16;
                if (puVar3[2] != 0) {
                    for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
                        uVar8 = uVar11;
                        uVar16 = uVar14;
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar11 = uVar11 + ((uint) bVar1 << ((byte) uVar14 & 0x1f));
                    }
                    local_64 = local_64 - uVar9;
                    *(int *) ((longlong) param_1 + 0x1c) = *(int *) ((longlong) param_1 + 0x1c) + local_64;
                    puVar3[7] = puVar3[7] + local_64;
                    if (local_64 != 0) {
                        if (puVar3[4] == 0) {
                            uVar8 = FUN_1401cd3e0();
                            pbVar20 = local_58;
                            uVar9 = local_res20;
                        } else {
                            uVar8 = uVar7;
                            if (pbVar20 != (byte * )(ulonglong)local_64) {
                                uVar8 = FUN_1401cd6d0();
                                pbVar20 = local_58;
                                uVar9 = local_res20;
                            }
                        }
                        puVar3[6] = uVar8;
                        *(uint * )((longlong) param_1 + 0x4c) = uVar8;
                    }
                    uVar12 = uVar11;
                    if (puVar3[4] == 0) {
                        uVar12 = ((uVar11 & 0xff00) + uVar11 * 0x10000) * 0x100 + (uVar11 >> 8 & 0xff00) +
                                 (uVar11 >> 0x18);
                    }
                    uVar8 = uVar7;
                    uVar16 = uVar7;
                    local_64 = uVar9;
                    if (uVar12 != puVar3[6]) {
                        param_1[4] = (byte *) s_incorrect_data_check_140c2ce20;
                        *puVar3 = 0x1d;
                        uVar8 = uVar11;
                        uVar16 = uVar14;
                        break;
                    }
                }
                *puVar3 = 0x1b;
            case (char *) 0x1401ad2a7:
                if ((puVar3[2] != 0) && (uVar11 = uVar8, uVar14 = uVar16, puVar3[4] != 0)) {
                    for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
                        uVar8 = uVar11;
                        uVar16 = uVar14;
                        if (uVar17 == 0) goto LAB_1401ac644;
                        bVar1 = *pbVar22;
                        uVar17 = uVar17 - 1;
                        pbVar22 = pbVar22 + 1;
                        uVar11 = uVar11 + ((uint) bVar1 << ((byte) uVar14 & 0x1f));
                    }
                    uVar8 = uVar7;
                    uVar16 = uVar7;
                    if (uVar11 != puVar3[7]) {
                        param_1[4] = (byte *) s_incorrect_length_check_140c2ce58;
                        *puVar3 = 0x1d;
                        uVar8 = uVar11;
                        uVar16 = uVar14;
                        break;
                    }
                }
                *puVar3 = 0x1c;
            switchD_1401abe59_caseD_401ad331:
                local_res18 = 1;
                goto LAB_1401ac644;
            case (char *) 0x1401ad331:
                goto switchD_1401abe59_caseD_401ad331;
            case (char *) 0x1401ad33c:
                local_res18 = -3;
                goto LAB_1401ac644;
        }
        LAB_1401ac49b:
        uVar11 = *puVar3;
    } while (true);
}


undefined8 FUN_1401ad4b0(longlong param_1) {
    if ((*(longlong * )(param_1 + 0x28) != 0) && (*(code * *)(param_1 + 0x38) != (code *) 0x0)) {
        if (*(longlong * )(*(longlong * )(param_1 + 0x28) + 0x38) != 0) {
            (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40));
        }
        (**(code * *)(param_1 + 0x38))(*(undefined8 * )(param_1 + 0x40), *(undefined8 * )(param_1 + 0x28));
        *(undefined8 * )(param_1 + 0x28) = 0;
        return 0;
    }
    return 0xfffffffe;
}


longlong FUN_1401ad510(longlong param_1, undefined8 param_2) {
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c77840 == DVar1) {
        DAT_140c77848 = DAT_140c77848 + 1;
        DVar1 = DAT_140c77840;
    } else {
        do {
            LOCK();
            bVar3 = DAT_140c77848 == 0;
            DAT_140c77848 = DAT_140c77848 ^ (ulonglong) bVar3 * (DAT_140c77848 ^ 1);
            if (bVar3) goto LAB_1401ad583;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c77840, DVar1);
        DVar1 = DAT_140c77840;
    }
    LAB_1401ad583:
    DAT_140c77840 = DVar1;
    FUN_1401ad860(param_1, param_2);
    *(undefined4 * )(param_1 + 0x80) = 1;
    if (DAT_140c77848 < 2) {
        DAT_140c77840 = 0;
        DAT_140c77848 = 0;
        if (DAT_140c77850 != 0) {
            if (DAT_140c77858 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar3 = DAT_140c77858 == (HANDLE) 0x0;
                DAT_140c77858 =
                        (HANDLE)((ulonglong) DAT_140c77858 ^
                                 (ulonglong) bVar3 * ((ulonglong) DAT_140c77858 ^ (ulonglong) hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c77858);
        }
    } else {
        DAT_140c77848 = DAT_140c77848 - 1;
    }
    return param_1;
}


longlong FUN_1401ad620(longlong param_1, undefined8 param_2) {
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c77840 == DVar1) {
        DAT_140c77848 = DAT_140c77848 + 1;
        DVar1 = DAT_140c77840;
    } else {
        do {
            LOCK();
            bVar3 = DAT_140c77848 == 0;
            DAT_140c77848 = DAT_140c77848 ^ (ulonglong) bVar3 * (DAT_140c77848 ^ 1);
            if (bVar3) goto LAB_1401ad693;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c77840, DVar1);
        DVar1 = DAT_140c77840;
    }
    LAB_1401ad693:
    DAT_140c77840 = DVar1;
    FUN_1401ad860(param_1, param_2);
    *(undefined4 * )(param_1 + 0x80) = 2;
    if (DAT_140c77848 < 2) {
        DAT_140c77840 = 0;
        DAT_140c77848 = 0;
        if (DAT_140c77850 != 0) {
            if (DAT_140c77858 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar3 = DAT_140c77858 == (HANDLE) 0x0;
                DAT_140c77858 =
                        (HANDLE)((ulonglong) DAT_140c77858 ^
                                 (ulonglong) bVar3 * ((ulonglong) DAT_140c77858 ^ (ulonglong) hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c77858);
        }
        return param_1;
    }
    DAT_140c77848 = DAT_140c77848 - 1;
    return param_1;
}


longlong FUN_1401ad740(longlong param_1, undefined8 param_2) {
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c77840 == DVar1) {
        DAT_140c77848 = DAT_140c77848 + 1;
        DVar1 = DAT_140c77840;
    } else {
        do {
            LOCK();
            bVar3 = DAT_140c77848 == 0;
            DAT_140c77848 = DAT_140c77848 ^ (ulonglong) bVar3 * (DAT_140c77848 ^ 1);
            if (bVar3) goto LAB_1401ad7b3;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c77840, DVar1);
        DVar1 = DAT_140c77840;
    }
    LAB_1401ad7b3:
    DAT_140c77840 = DVar1;
    FUN_1401ad860(param_1, param_2);
    *(undefined4 * )(param_1 + 0x80) = 4;
    if (DAT_140c77848 < 2) {
        DAT_140c77840 = 0;
        DAT_140c77848 = 0;
        if (DAT_140c77850 != 0) {
            if (DAT_140c77858 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar3 = DAT_140c77858 == (HANDLE) 0x0;
                DAT_140c77858 =
                        (HANDLE)((ulonglong) DAT_140c77858 ^
                                 (ulonglong) bVar3 * ((ulonglong) DAT_140c77858 ^ (ulonglong) hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c77858);
        }
        return param_1;
    }
    DAT_140c77848 = DAT_140c77848 - 1;
    return param_1;
}


void FUN_1401ad860(longlong param_1, wchar_t *param_2) {
    short sVar1;
    short *psVar2;
    short *psVar3;
    longlong lVar4;
    wchar_t *pwVar5;

    *(longlong * )(param_1 + 0x110) = DAT_140c63768;
    pwVar5 = L"(unset)";
    if (param_2 != (wchar_t *) 0x0) {
        pwVar5 = param_2;
    }
    DAT_140c63768 = param_1;
    *(undefined4 * )(param_1 + 0x8c) = 0x61;
    *(undefined8 * )(param_1 + 0x84) = 0;
    lVar4 = 0x40;
    psVar2 = (short *) (param_1 + 0x90);
    while ((psVar3 = psVar2, lVar4 != -0x7fffffbe &&
                             (sVar1 = *(short *) (((longlong) pwVar5 - (longlong)(short * )(param_1 + 0x90)) +
                                                  (longlong) psVar3), sVar1 != 0))) {
        *psVar3 = sVar1;
        lVar4 = lVar4 + -1;
        psVar2 = psVar3 + 1;
        if (lVar4 == 0) {
            *psVar3 = 0;
            return;
        }
    }
    if (lVar4 == 0) {
        psVar3[-1] = 0;
        return;
    }
    *psVar3 = 0;
    return;
}


void FUN_1401ad8f0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    ushort uVar1;
    DWORD DVar2;
    undefined4 uVar3;
    HANDLE hObject;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    if (DAT_140c77840 == DVar2) {
        DAT_140c77848 = DAT_140c77848 + 1;
        DVar2 = DAT_140c77840;
    } else {
        do {
            LOCK();
            bVar5 = DAT_140c77848 == 0;
            DAT_140c77848 = DAT_140c77848 ^ (ulonglong) bVar5 * (DAT_140c77848 ^ 1);
            if (bVar5) goto LAB_1401ad963;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c77840, DVar2);
        DVar2 = DAT_140c77840;
    }
    LAB_1401ad963:
    DAT_140c77840 = DVar2;
    uVar1 = *(ushort * )(param_3 + 0x8a);
    *(short *) (param_3 + 0x88) = *(short *) (param_3 + 0x88) + 1;
    if (uVar1 <= *(ushort * )(param_3 + 0x88)) {
        *(undefined2 * )(param_3 + 0x88) = 0;
    }
    if (uVar1 < 0x10) {
        *(ushort * )(param_3 + 0x8a) = uVar1 + 1;
    }
    uVar3 = FUN_14018cdf0();
    *(undefined4 * )(param_3 + 0x84) = uVar3;
    *(undefined4 * )(param_3 + (ulonglong) * (ushort * )(param_3 + 0x88) * 8) = param_2;
    if (DAT_140c77848 < 2) {
        DAT_140c77840 = 0;
        DAT_140c77848 = 0;
        if (DAT_140c77850 != 0) {
            if (DAT_140c77858 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar5 = DAT_140c77858 == (HANDLE) 0x0;
                DAT_140c77858 =
                        (HANDLE)((ulonglong) DAT_140c77858 ^
                                 (ulonglong) bVar5 * ((ulonglong) DAT_140c77858 ^ (ulonglong) hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c77858);
        }
        return;
    }
    DAT_140c77848 = DAT_140c77848 - 1;
    return;
}


void FUN_1401ada40(longlong param_1, undefined4 param_2) {
    ushort uVar1;
    DWORD DVar2;
    undefined4 uVar3;
    HANDLE hObject;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    if (DAT_140c77840 == DVar2) {
        DAT_140c77848 = DAT_140c77848 + 1;
        DVar2 = DAT_140c77840;
    } else {
        do {
            LOCK();
            bVar5 = DAT_140c77848 == 0;
            DAT_140c77848 = DAT_140c77848 ^ (ulonglong) bVar5 * (DAT_140c77848 ^ 1);
            if (bVar5) goto LAB_1401adab3;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c77840, DVar2);
        DVar2 = DAT_140c77840;
    }
    LAB_1401adab3:
    DAT_140c77840 = DVar2;
    uVar1 = *(ushort * )(param_1 + 0x8a);
    *(short *) (param_1 + 0x88) = *(short *) (param_1 + 0x88) + 1;
    if (uVar1 <= *(ushort * )(param_1 + 0x88)) {
        *(undefined2 * )(param_1 + 0x88) = 0;
    }
    if (uVar1 < 0x10) {
        *(ushort * )(param_1 + 0x8a) = uVar1 + 1;
    }
    uVar3 = FUN_14018cdf0();
    *(undefined4 * )(param_1 + 0x84) = uVar3;
    *(undefined4 * )(param_1 + (ulonglong) * (ushort * )(param_1 + 0x88) * 8) = param_2;
    if (DAT_140c77848 < 2) {
        DAT_140c77840 = 0;
        DAT_140c77848 = 0;
        if (DAT_140c77850 != 0) {
            if (DAT_140c77858 == (HANDLE) 0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar5 = DAT_140c77858 == (HANDLE) 0x0;
                DAT_140c77858 =
                        (HANDLE)((ulonglong) DAT_140c77858 ^
                                 (ulonglong) bVar5 * ((ulonglong) DAT_140c77858 ^ (ulonglong) hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c77858);
        }
        return;
    }
    DAT_140c77848 = DAT_140c77848 - 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1401adb90(undefined(*param_1)
[16],
ushort *param_2
)

{
int iVar1;
int iVar3;
int iVar4;
undefined auVar2[16];
undefined auVar5[16];
undefined auVar6[16];
undefined auVar7[16];
undefined auVar8[16];
undefined auVar9[16];
uint uVar10;
uint uVar13;
int iVar14;
undefined auVar11[16];
int iVar15;
undefined auVar12[16];
undefined auVar16[16];
undefined auVar17[16];

auVar16 = ZEXT1016(CONCAT28(param_2[2], (ulonglong) CONCAT24(param_2[1], (uint) * param_2)));
auVar11 = ~_DAT_140b7aa30 & auVar16;
auVar16 = _DAT_140b7aa30 & auVar16;
iVar1 = SUB164(auVar11 >> 0x20, 0);
iVar3 = SUB164(auVar11 >> 0x40, 0);
iVar4 = SUB164(auVar11 >> 0x60, 0);
uVar10 = SUB164(auVar11, 0) * 0x2000 + 0x38000000;
uVar13 = iVar1 * 0x2000 + 0x38000000;
iVar14 = iVar3 * 0x2000 + 0x38000000;
iVar15 = iVar4 * 0x2000 + 0x38000000;
auVar12 = CONCAT412(iVar15, CONCAT48(iVar14, CONCAT44(uVar13, uVar10)));
auVar11 = CONCAT412(-(uint)(iVar4 == 0),
                    CONCAT48(-(uint)(iVar3 == 0),
                             CONCAT44(-(uint)(iVar1 == 0), -(uint)(SUB164(auVar11, 0) == 0))));
auVar17 = ~auVar11 &
          CONCAT412(-(uint)(iVar15 < 0x38800000),
                    CONCAT48(-(uint)(iVar14 < 0x38800000),
                             CONCAT44(-(uint)(uVar13 < 0x38800000), -(uint)(uVar10 < 0x38800000))));
if ((ushort)((ushort)(
SUB161(auVar17
>> 7,0) & 1) | (ushort)(
SUB161(auVar17
>> 0xf,0) & 1) << 1 |
(ushort)(
SUB161(auVar17
>> 0x17,0) & 1) << 2 |
(ushort)(
SUB161(auVar17
>> 0x1f,0) & 1) << 3 |
(ushort)(
SUB161(auVar17
>> 0x27,0) & 1) << 4 |
(ushort)(
SUB161(auVar17
>> 0x2f,0) & 1) << 5 |
(ushort)(
SUB161(auVar17
>> 0x37,0) & 1) << 6 |
(ushort)(
SUB161(auVar17
>> 0x3f,0) & 1) << 7 |
(ushort)(
SUB161(auVar17
>> 0x47,0) & 1) << 8 |
(ushort)(
SUB161(auVar17
>> 0x4f,0) & 1) << 9 |
(ushort)(
SUB161(auVar17
>> 0x57,0) & 1) << 10 |
(ushort)(
SUB161(auVar17
>> 0x5f,0) & 1) << 0xb |
(ushort)(
SUB161(auVar17
>> 0x67,0) & 1) << 0xc |
(ushort)(
SUB161(auVar17
>> 0x6f,0) & 1) << 0xd |
(ushort)(
SUB161(auVar17
>> 0x77,0) & 1) << 0xe |
(ushort)
SUB161(auVar17
>> 0x7f,0) << 0xf) != 0) {
auVar5 = _DAT_140b7aa90 & auVar12;
iVar1 = SUB164(auVar5, 0) << 8;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 8;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 8;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 8;
auVar2 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar8 = _DAT_140b7a970 & auVar2;
auVar5 = auVar2 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar2 & auVar5;
iVar1 = SUB164(auVar5, 0) << 4;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 4;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 4;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 4;
auVar2 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar7 = _DAT_140b7a960 & auVar2;
auVar5 = auVar2 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar2 & auVar5;
iVar1 = SUB164(auVar5, 0) << 2;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 2;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 2;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 2;
auVar2 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar6 = _DAT_140b7a940 & auVar2;
auVar5 = auVar2 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar2 & auVar5;
iVar1 = SUB164(auVar5, 0) << 1;
iVar3 = SUB164(auVar5 >> 0x20, 0) << 1;
iVar14 = SUB164(auVar5 >> 0x40, 0) << 1;
iVar4 = SUB164(auVar5 >> 0x60, 0) << 1;
auVar9 = CONCAT412(-(uint)(iVar4 < 0x1000000),
                   CONCAT48(-(uint)(iVar14 < 0x1000000),
                            CONCAT44(-(uint)(iVar3 < 0x1000000), -(uint)(iVar1 < 0x1000000))));
auVar2 = _DAT_140b7a8f0 & auVar9;
auVar12 = (CONCAT412(((((0x71 - SUB164(auVar8 >> 0x60, 0)) - SUB164(auVar7 >> 0x60, 0)) -
                       SUB164(auVar6 >> 0x60, 0)) - SUB164(auVar2 >> 0x60, 0)) * 0x800000,
                     CONCAT48(((((0x71 - SUB164(auVar8 >> 0x40, 0)) - SUB164(auVar7 >> 0x40, 0)) -
                                SUB164(auVar6 >> 0x40, 0)) - SUB164(auVar2 >> 0x40, 0)) * 0x800000,
                              CONCAT44(((((0x71 - SUB164(auVar8 >> 0x20, 0)) -
                                          SUB164(auVar7 >> 0x20, 0)) - SUB164(auVar6 >> 0x20, 0)) -
                                        SUB164(auVar2 >> 0x20, 0)) * 0x800000,
                                       ((((0x71 - SUB164(auVar8, 0)) - SUB164(auVar7, 0)) -
                                         SUB164(auVar6, 0)) - SUB164(auVar2, 0)) * 0x800000))) |
           (auVar9 & CONCAT412(iVar4, CONCAT48(iVar14, CONCAT44(iVar3, iVar1))) | ~auVar9 & auVar5)
           & _DAT_140b7aa90) & auVar17 | ~auVar17 & auVar12;
}
*
param_1 = ~auVar11 & auVar12 |
          CONCAT412(SUB164(auVar16 >> 0x60, 0) << 0x10,
                    CONCAT48(SUB164(auVar16 >> 0x40, 0) << 0x10,
                             CONCAT44(SUB164(auVar16 >> 0x20, 0) << 0x10, SUB164(auVar16, 0) << 0x10
                             )));
return
param_1;
}



undefined (*) [16]

FUN_1401add80(float *param_1, undefined (*param_2)[16]) {
    longlong lVar1;
    ulonglong uVar2;
    undefined auVar3[16];
    float fVar4;
    float fVar5;
    undefined local_18[24];

    fVar4 = *param_1 * *param_1;
    fVar5 = param_1[1] * param_1[1];
    local_18._0_16_ =
            CONCAT412(param_1[3] * param_1[3], CONCAT48(param_1[2] * param_1[2], CONCAT44(fVar5, fVar4)));
    uVar2 = (ulonglong)(fVar4 < fVar5);
    lVar1 = 1 - uVar2;
    if (*(float *) (local_18 + uVar2 * 4) <= 0.0 && *(float *) (local_18 + uVar2 * 4) != 0.0) {
        uVar2 = 2;
    }
    auVar3 = ZEXT416((uint)(*(float *) (local_18 + (lVar1 + uVar2) * -4 + 0xc) +
                            *(float *) (local_18 + lVar1 * 4))) & (undefined[16])
    0xffffffffffffffff;
    fVar4 = SUB164(auVar3, 0) + *(float *) (local_18 + uVar2 * 4);
    auVar3 = CONCAT124(SUB1612(auVar3 >> 0x20, 0), fVar4);
    if (DAT_140c3d7d8 < fVar4) {
        auVar3 = sqrtps(auVar3, auVar3);
        fVar4 = 1.0 / SUB164(auVar3, 0);
        *(float *) *param_2 = fVar4 * *param_1;
        *(float *) (*param_2 + 4) = fVar4 * param_1[1];
        *(float *) (*param_2 + 8) = fVar4 * param_1[2];
        return param_2;
    }
    *param_2 = ZEXT1216(ZEXT812(0));
    return param_2;
}


float FUN_1401ade30(float *param_1, float *param_2) {
    longlong lVar1;
    ulonglong uVar2;
    undefined local_18[24];

    local_18._0_16_ =
            CONCAT412(param_1[3] * param_2[3],
                      CONCAT48(param_1[2] * param_2[2],
                               CONCAT44(param_1[1] * param_2[1], *param_1 * *param_2)));
    uVar2 = (ulonglong)(*param_1 * *param_2 < param_1[1] * param_2[1]);
    lVar1 = 1 - uVar2;
    if (*(float *) (local_18 + uVar2 * 4) <= 0.0 && *(float *) (local_18 + uVar2 * 4) != 0.0) {
        uVar2 = 2;
    }
    return *(float *) (local_18 + (lVar1 + uVar2) * -4 + 0xc) + *(float *) (local_18 + lVar1 * 4) +
           *(float *) (local_18 + uVar2 * 4);
}


undefined (*) [16]
FUN_1401ade90(undefined(*param_1)
[16],
undefined8 param_2,
float *param_3, longlong
param_4,
float *param_5, longlong
param_6)

{
float *pfVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
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
float fVar17;
float fVar18;
float fVar19;
undefined (*pauVar20)[16];

pfVar1 = (float *) (param_4 * param_6 + (longlong)
param_3);
fVar2 = *param_5;
fVar3 = param_5[1];
fVar4 = param_5[2];
fVar5 = param_5[3];
fVar6 = param_5[4];
fVar7 = param_5[5];
fVar8 = param_5[6];
fVar9 = param_5[7];
fVar10 = param_5[8];
fVar11 = param_5[9];
fVar12 = param_5[10];
fVar13 = param_5[0xb];
fVar14 = param_5[0xc];
fVar15 = param_5[0xd];
fVar16 = param_5[0xe];
fVar17 = param_5[0xf];
pauVar20 = param_1;
if (param_3<pfVar1) {
do {
fVar18 = *param_3;
fVar19 = param_3[1];
param_3 = (float *) ((longlong)
param_3 + param_4);
*
pauVar20 = CONCAT412(fVar19 * fVar9 + fVar18 * fVar5 + fVar13 * 0.0 + fVar17,
                     CONCAT48(fVar19 * fVar8 + fVar18 * fVar4 + fVar12 * 0.0 + fVar16,
                              CONCAT44(fVar19 * fVar7 + fVar18 * fVar3 + fVar11 * 0.0 +
                                       fVar15, fVar19 * fVar6 + fVar18 * fVar2 + fVar10 * 0.0
                                               + fVar14)));
pauVar20 = pauVar20[1];
} while (param_3<pfVar1);
}
return
param_1;
}



undefined (*) [16]
FUN_1401adf30(undefined(*param_1)
[16],
float *param_2,
float *param_3,
float *param_4,
float *param_5,
float param_6
)

{
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;

fVar4 = param_6 * param_6;
fVar2 = fVar4 * param_6 * 1.5;
fVar3 = fVar4 * param_6 * 0.5;
fVar5 = fVar3 - fVar4 * 0.5;
fVar1 = (fVar4 * 2.0 - fVar2) + param_6 * 0.5;
fVar3 = (fVar4 - fVar3) - param_6 * 0.5;
fVar2 = (fVar2 - fVar4 * 2.5) + 1.0;
*
param_1 = CONCAT412(fVar5 * param_5[3] +
                    fVar1 * param_4[3] + fVar2 * param_3[3] + fVar3 * param_2[3],
                    CONCAT48(fVar5 * param_5[2] +
                             fVar1 * param_4[2] + fVar2 * param_3[2] + fVar3 * param_2[2],
                             CONCAT44(fVar5 * param_5[1] +
                                      fVar1 * param_4[1] +
                                      fVar2 * param_3[1] + fVar3 * param_2[1],
                                      fVar5 * *param_5 +
                                      fVar1 * *param_4 + fVar2 * *param_3 + fVar3 * *param_2)));
return
param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401ae000(float *param_1, float *param_2, float *param_3) {
    longlong lVar1;
    float fVar2;
    ulonglong uVar3;
    undefined auVar4[16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((DAT_140c8e130 & 1) == 0) {
        DAT_140c8e130 = DAT_140c8e130 | 1;
        _DAT_140c8e140 = 0x3f800000;
        uRam0000000140c8e144 = 0;
        uRam0000000140c8e148 = 0;
        uRam0000000140c8e14c = 0;
        _DAT_140c8e150 = 0;
        uRam0000000140c8e154 = 0x3f800000;
        uRam0000000140c8e158 = 0;
        uRam0000000140c8e15c = 0;
        _DAT_140c8e160 = 0;
        uRam0000000140c8e164 = 0;
        uRam0000000140c8e168 = 0x3f800000;
        uRam0000000140c8e16c = 0;
    }
    uVar3 = (ulonglong)((float) ((uint) param_3[1] & 0x7fffffff) < (float) ((uint) * param_3 & 0x7fffffff));
    if ((float) ((uint) param_3[2] & 0x7fffffff) < (float) ((uint) param_3[uVar3] & 0x7fffffff)) {
        uVar3 = 2;
    }
    lVar1 = uVar3 * 0x10;
    fVar5 = *(float *) (lVar1 + 0x140c8e144) * 0.0 - param_3[1] * 0.0;
    fVar6 = *param_3 * *(float *) (lVar1 + 0x140c8e148) - *(float *) (&DAT_140c8e140 + lVar1) * 0.0;
    fVar7 = param_3[1] * *(float *) (&DAT_140c8e140 + lVar1) -
            *param_3 * *(float *) (lVar1 + 0x140c8e144);
    fVar8 = param_3[3] * *(float *) (lVar1 + 0x140c8e14c) -
            param_3[3] * *(float *) (lVar1 + 0x140c8e14c);
    auVar4 = CONCAT124(SUB1612(CONCAT412(fVar8 * fVar8,
                                         CONCAT48(fVar7 * fVar7, CONCAT44(fVar6 * fVar6, fVar5 * fVar5))
    ) >> 0x20, 0), fVar5 * fVar5 + fVar6 * fVar6 + 0.0);
    auVar4 = rsqrtss(auVar4, auVar4);
    fVar2 = SUB164(auVar4, 0);
    fVar5 = fVar2 * fVar5;
    fVar6 = fVar2 * fVar6;
    fVar8 = fVar2 * fVar8;
    *param_1 = fVar5;
    param_1[1] = fVar6;
    param_1[2] = fVar2 * fVar7;
    param_1[3] = fVar8;
    fVar7 = param_3[1] * 0.0 - fVar6 * 0.0;
    fVar9 = fVar5 * 0.0 - *param_3 * 0.0;
    fVar5 = fVar6 * *param_3 - fVar5 * param_3[1];
    fVar6 = fVar8 * param_3[3] - fVar8 * param_3[3];
    auVar4 = CONCAT124(SUB1612(CONCAT412(fVar6 * fVar6,
                                         CONCAT48(fVar5 * fVar5, CONCAT44(fVar9 * fVar9, fVar7 * fVar7))
    ) >> 0x20, 0), fVar7 * fVar7 + fVar9 * fVar9 + 0.0);
    auVar4 = rsqrtss(auVar4, auVar4);
    fVar2 = SUB164(auVar4, 0);
    *param_2 = fVar2 * fVar7;
    param_2[1] = fVar2 * fVar9;
    param_2[2] = fVar2 * fVar5;
    param_2[3] = fVar2 * fVar6;
    return;
}


undefined8 *FUN_1401ae140(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5efc0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined4 FUN_1401ae180(longlong * param_1) {
    longlong * plVar1;
    undefined4 uVar2;

    plVar1 = param_1 + 1;
    *(int *) plVar1 = *(int *) plVar1 + -1;
    uVar2 = *(undefined4 * )(param_1 + 1);
    if (*(int *) plVar1 == 0) {
        (**(code * *)(*param_1 + 0x50))(param_1, 1);
        uVar2 = 0;
    }
    return uVar2;
}


double FUN_1401ae1e0(longlong * param_1) {
    uint uVar1;

    uVar1 = (**(code * *)(*param_1 + 0x18))();
    return (double) (ulonglong) uVar1 * 2.328306437080797e-10;
}


double FUN_1401ae210(longlong * param_1) {
    uint uVar1;

    uVar1 = (**(code * *)(*param_1 + 0x18))();
    return (double) (ulonglong) uVar1 * 2.328306436538696e-10;
}


ulonglong FUN_1401ae240(undefined8 param_1, float param_2, float param_3, longlong *param_4) {
    double dVar1;

    dVar1 = (double) (**(code * *)(*param_4 + 0x28))();
    dVar1 = dVar1 * (double) (param_3 - param_2);
    return (ulonglong) dVar1 & 0xffffffff00000000 | (ulonglong)(uint)((float) dVar1 + param_2);
}


ulonglong FUN_1401ae2d0(undefined8 param_1, float param_2, float param_3, longlong *param_4) {
    double dVar1;

    dVar1 = (double) (**(code * *)(*param_4 + 0x30))();
    dVar1 = dVar1 * (double) (param_3 - param_2);
    return (ulonglong) dVar1 & 0xffffffff00000000 | (ulonglong)(uint)((float) dVar1 + param_2);
}


void FUN_1401ae310(undefined8 *param_1) {
    undefined auStack72[32];
    _SYSTEMTIME local_28;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack72;
    *(undefined4 * )(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b5ef60;
    GetLocalTime(&local_28);
    *(uint * )(param_1 + 2) =
            (((uint) local_28.wHour * 0x3c + (uint) local_28.wMinute) * 0x3c + (uint) local_28.wSecond) *
            1000 + (uint) local_28.wMilliseconds;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack72);
    return;
}


void FUN_1401ae3c0(undefined8 *param_1) {
    longlong lVar1;
    undefined auStack72[32];
    _SYSTEMTIME local_28;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack72;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[0x13a] = 0x271;
    *param_1 = &PTR_LAB_140b5ef00;
    *(undefined4 * )(param_1 + 0x13b) = 0x9908b0df;
    GetLocalTime(&local_28);
    *(uint * )(param_1 + 2) =
            (((uint) local_28.wHour * 0x3c + (uint) local_28.wMinute) * 0x3c + (uint) local_28.wSecond) *
            1000 + (uint) local_28.wMilliseconds;
    *(undefined4 * )(param_1 + 0x13a) = 1;
    do {
        lVar1 = (longlong) * (int *) (param_1 + 0x13a);
        *(uint * )((longlong)
        param_1 + lVar1 * 4 + 0x10) =
        (*(uint * )((longlong)
        param_1 + lVar1 * 4 + 0xc) >> 0x1e ^
                                      *(uint * )((longlong)
        param_1 + lVar1 * 4 + 0xc)) *0x6c078965 + *(int *) (param_1 + 0x13a);
        *(int *) (param_1 + 0x13a) = *(int *) (param_1 + 0x13a) + 1;
    } while (*(uint * )(param_1 + 0x13a) < 0x270);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack72);
    return;
}


uint FUN_1401ae4e0(longlong
param_1)

{
uint uVar1;
uint *puVar2;
uint uVar3;
uint uVar4;

if (0x26f < *(uint *)(param_1 + 0x9d0)) {
uVar4 = 0;
puVar2 = (uint * )(param_1 + 0x10);
do {
uVar1 = uVar4 + 0x18d;
uVar4 = uVar4 + 1;
uVar3 = (puVar2[1] ^ *puVar2) & 0x7fffffff ^ *puVar2;
*
puVar2 = *(uint * )(param_1 + 0x9d4 + (ulonglong)(uVar3 & 1) * 4) ^
         *(uint * )(param_1 + 0x10 + (ulonglong) uVar1 * 4) ^ uVar3 >> 1;
puVar2 = puVar2 + 1;
} while (uVar4 < 0xe3);
if (uVar4 < 0x26f) {
puVar2 = (uint * )(param_1 + 0x10 + (longlong)(int)
uVar4 * 4);
do {
uVar1 = uVar4 - 0xe3;
uVar4 = uVar4 + 1;
uVar3 = (*puVar2 ^ puVar2[1]) & 0x7fffffff ^ *puVar2;
*
puVar2 = *(uint * )(param_1 + 0x9d4 + (ulonglong)(uVar3 & 1) * 4) ^
         *(uint * )(param_1 + 0x10 + (ulonglong) uVar1 * 4) ^ uVar3 >> 1;
puVar2 = puVar2 + 1;
} while (uVar4 < 0x26f);
}
uVar4 = (*(uint * )(param_1 + 0x9cc) ^ *(uint * )(param_1 + 0x10)) & 0x7fffffff ^
        *(uint * )(param_1 + 0x9cc);
*(uint *)(param_1 + 0x9cc) =
*(uint *)(param_1 + 0x9d4 + (ulonglong)(uVar4 & 1) * 4) ^ *(uint *)(param_1 + 0x640) ^
uVar4 >> 1;
*(undefined4 *)(param_1 + 0x9d0) = 0;
}
uVar4 = *(uint * )(param_1 + 0x10 + (longlong) * (int *) (param_1 + 0x9d0) * 4);
*(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x9d0) + 1;
uVar4 = uVar4 ^ uVar4 >> 0xb;
uVar4 = uVar4 ^ (uVar4 & 0xff3a58ad) << 7;
uVar4 = uVar4 ^ (uVar4 & 0xffffdf8c) << 0xf;
return uVar4 >> 0x12 ^
uVar4;
}


double FUN_1401ae640(longlong * param_1) {
    uint uVar1;
    uint uVar2;

    uVar1 = (**(code * *)(*param_1 + 0x18))();
    uVar2 = (**(code * *)(*param_1 + 0x18))(param_1);
    return ((double) (ulonglong)(uVar2 >> 6) + (double) (ulonglong)(uVar1 >> 5) * 67108864.0) *
           1.110223024625157e-16;
}


int FUN_1401ae6a0(int param_1, int param_2) {
    double dVar1;

    dVar1 = (double) (**(code * *)(DAT_140c77890 + 0x30))(&DAT_140c77890);
    return (int) (dVar1 * (((double) param_2 - (double) param_1) + 1.0)) + param_1;
}


longlong FUN_1401ae6f0(ulonglong param_1, uint param_2) {
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    uVar2 = SUB84((double) (param_1 & 0xffffffff), 0);
    uVar3 = (undefined4)((ulonglong)(double)(param_1 & 0xffffffff) >> 0x20);
    uVar1 = (**(code * *)(DAT_140c77890 + 0x18))(&DAT_140c77890);
    return (longlong)
            ((double) (ulonglong) uVar1 * 2.328306436538696e-10 *
             (((double) (ulonglong) param_2 - (double) CONCAT44(uVar3, uVar2)) + 1.0) +
             (double) CONCAT44(uVar3, uVar2));
}


ulonglong FUN_1401ae760(float param_1, float param_2) {
    double dVar1;

    dVar1 = (double) (**(code * *)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    dVar1 = dVar1 * (double) (param_2 - param_1);
    return (ulonglong) dVar1 & 0xffffffff00000000 | (ulonglong)(uint)((float) dVar1 + param_1);
}


void FUN_1401ae7b0(ulonglong param_1, longlong param_2, float *param_3, longlong param_4) {
    float *pfVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    float fVar7;

    if (param_1 != 0) {
        uVar5 = 0;
        lVar6 = param_2 - (longlong)
        param_3;
        param_2 = (longlong)
        param_3 - param_2;
        lVar4 = param_2 + 0xc;
        do {
            uVar3 = 1;
            fVar7 = *(float *) (lVar6 + (longlong)
            param_3) **param_3;
            *(float *) (param_4 + uVar5 * 4) = fVar7;
            if (1 < param_1) {
                if (3 < (longlong)(param_1 - 1)) {
                    lVar2 = (param_1 - 5 >> 2) + 1;
                    uVar3 = lVar2 * 4 + 1;
                    pfVar1 = (float *) ((longlong)
                    param_3 + lVar6 + 4);
                    do {
                        fVar7 = *(float *) ((longlong)
                        pfVar1 + param_2) **pfVar1 + fVar7;
                        *(float *) (param_4 + uVar5 * 4) = fVar7;
                        fVar7 = *(float *) ((longlong)
                        pfVar1 + param_2 + 4) *pfVar1[1] + fVar7;
                        *(float *) (param_4 + uVar5 * 4) = fVar7;
                        fVar7 = *(float *) ((longlong)
                        pfVar1 + lVar4 + -4) *pfVar1[2] + fVar7;
                        *(float *) (param_4 + uVar5 * 4) = fVar7;
                        fVar7 = *(float *) ((longlong)
                        pfVar1 + lVar4) *pfVar1[3] + fVar7;
                        *(float *) (param_4 + uVar5 * 4) = fVar7;
                        lVar2 = lVar2 + -1;
                        pfVar1 = pfVar1 + 4;
                    } while (lVar2 != 0);
                }
                if (uVar3 < param_1) {
                    lVar2 = param_1 - uVar3;
                    pfVar1 = param_3 + uVar3;
                    do {
                        fVar7 = fVar7 + *(float *) ((longlong)
                        pfVar1 + lVar6) **pfVar1;
                        *(float *) (param_4 + uVar5 * 4) = fVar7;
                        lVar2 = lVar2 + -1;
                        pfVar1 = pfVar1 + 1;
                    } while (lVar2 != 0);
                }
            }
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + param_1 * -4;
            param_2 = param_2 + param_1 * -4;
            lVar6 = lVar6 + param_1 * 4;
        } while (uVar5 < param_1);
    }
    return;
}


void FUN_1401ae910(longlong * param_1, undefined4 * param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined4 *puVar6;
    float *pfVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    uint uVar15;
    float local_1b8;
    float local_1b4;
    float local_1b0;
    float local_1ac;
    float local_1a8;
    float local_1a4;
    float local_1a0;
    float local_19c;
    float local_198;
    float local_194;
    float local_190;
    float local_18c;
    float local_188;
    float local_184;
    float local_180;
    float local_17c;
    float local_178;
    float local_174;
    float local_170;
    float local_16c;
    float local_168;
    float local_164;
    float local_160;
    float local_15c;
    float local_158;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;

    uVar15 = 0x80000000;
    puVar6 = (undefined4 * ) * param_1;
    local_f8 = puVar6[0x14];
    local_138 = puVar6[4];
    uStack308 = puVar6[5];
    uStack304 = puVar6[6];
    uStack300 = puVar6[7];
    local_148 = *puVar6;
    uStack324 = puVar6[1];
    uStack320 = puVar6[2];
    uStack316 = puVar6[3];
    local_128 = puVar6[8];
    local_c8 = puVar6[0x20];
    local_108 = puVar6[0x10];
    uStack260 = puVar6[0x11];
    uStack256 = puVar6[0x12];
    uStack252 = puVar6[0x13];
    local_118 = puVar6[0xc];
    uStack276 = puVar6[0xd];
    uStack272 = puVar6[0xe];
    uStack268 = puVar6[0xf];
    local_e8 = puVar6[0x18];
    uStack228 = puVar6[0x19];
    uStack224 = puVar6[0x1a];
    uStack220 = puVar6[0x1b];
    local_d8 = puVar6[0x1c];
    uStack212 = puVar6[0x1d];
    uStack208 = puVar6[0x1e];
    uStack204 = puVar6[0x1f];
    param_2[0x18] = local_e8;
    *param_2 = local_148;
    pfVar7 = (float *) param_1[1];
    param_2[0xc] = local_118;
    fVar1 = pfVar7[6];
    fVar2 = pfVar7[2];
    fVar3 = pfVar7[8];
    fVar4 = *pfVar7;
    fVar5 = pfVar7[4];
    fVar12 = pfVar7[10];
    fVar9 = pfVar7[9];
    fVar11 = pfVar7[1];
    local_1b4 = (float) ((uint) fVar9 ^ 0x80000000);
    fVar10 = pfVar7[5];
    local_1ac = (float) ((uint) fVar1 ^ 0x80000000);
    local_1a4 = (float) ((uint) fVar2 ^ 0x80000000);
    local_19c = (float) ((uint) fVar3 ^ 0x80000000);
    fVar8 = fVar4;
    fVar13 = fVar3;
    fVar14 = fVar5;
    local_1b8 = fVar10;
    local_1b0 = fVar11;
    local_1a8 = fVar12;
    local_1a0 = fVar5;
    local_198 = fVar4;
    FUN_1401ae7b0(3, &local_1b8, &uStack324, param_2 + 1);
    FUN_1401ae7b0(3, &local_1b8, &uStack276, param_2 + 0xd);
    FUN_1401ae7b0(3, &local_1b8, &uStack228, param_2 + 0x19);
    local_1b8 = fVar14 * fVar11 + fVar10 * fVar8;
    local_1b4 = (float) ((uint)(fVar9 * fVar14) ^ uVar15) - fVar13 * fVar10;
    local_1b0 = fVar13 * 8.660254 * fVar9 * 0.2;
    local_1ac = (float) ((uint)(fVar9 * fVar4) ^ uVar15) - fVar3 * fVar11;
    local_1a8 = fVar11 * fVar4 - fVar10 * fVar5;
    local_1a4 = (float) ((uint)(fVar10 * fVar2) ^ uVar15) - fVar1 * fVar11;
    local_1a0 = fVar9 * fVar1 + fVar12 * fVar10;
    local_19c = fVar9 * 8.660254 * fVar12 * -0.2;
    local_198 = fVar9 * fVar2 + fVar12 * fVar11;
    local_194 = fVar1 * fVar10 - fVar2 * fVar11;
    local_190 = (fVar1 * 1.154701 * fVar2 - fVar14 * fVar8 * 8.660254 * 0.06666667) -
                fVar10 * fVar11 * 8.660254 * 0.06666667;
    local_18c = (fVar13 * fVar14 * 8.660254 * 0.06666667 - fVar1 * 1.154701 * fVar12) +
                fVar9 * fVar10 * 8.660254 * 0.06666667;
    local_188 = (fVar12 * fVar12 - fVar13 * fVar13 * 0.5) - fVar9 * fVar9 * 0.5;
    local_184 = (fVar13 * fVar8 * 8.660254 * 0.06666667 - fVar2 * 1.154701 * fVar12) +
                fVar9 * fVar11 * 8.660254 * 0.06666667;
    local_15c = fVar9 * fVar11 - fVar13 * fVar8;
    local_164 = fVar9 * fVar10 - fVar13 * fVar14;
    local_180 = ((fVar2 * fVar2 * 8.660254 * 0.06666667 -
                  (fVar1 * fVar1 * 8.660254 * 0.06666667 + fVar8 * fVar8 * 8.660254 * 0.03333334)) -
                 fVar11 * fVar11 * 8.660254 * 0.03333334) + fVar14 * fVar14 * 8.660254 * 0.03333334 +
                fVar10 * fVar10 * 8.660254 * 0.03333334;
    local_17c = (float) ((uint)(fVar1 * fVar4) ^ uVar15) - fVar5 * fVar2;
    local_178 = fVar3 * fVar1 + fVar12 * fVar5;
    local_174 = fVar13 * 8.660254 * fVar12 * -0.2;
    local_170 = fVar3 * fVar2 + fVar12 * fVar4;
    local_16c = fVar1 * fVar5 - fVar2 * fVar4;
    local_168 = fVar14 * fVar8 - fVar10 * fVar11;
    local_160 = fVar13 * fVar13 * 8.660254 * 0.1 - fVar9 * fVar9 * 8.660254 * 0.1;
    local_158 = ((fVar10 * fVar10 + fVar8 * fVar8) * 0.5 - fVar11 * fVar11 * 0.5) -
                fVar14 * fVar14 * 0.5;
    FUN_1401ae7b0(5, &local_1b8, &local_138, param_2 + 4);
    FUN_1401ae7b0(5, &local_1b8, &local_108, param_2 + 0x10);
    FUN_1401ae7b0(5, &local_1b8, &local_d8, param_2 + 0x1c);
    return;
}


void FUN_1401aefa0(float **param_1, float *param_2) {
    float fVar1;
    float *pfVar2;
    longlong lVar3;
    float *pfVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    pfVar4 = param_2 + 0x1c;
    fVar9 = **param_1;
    fVar10 = (*param_1)[1];
    pfVar2 = param_1[2];
    fVar1 = pfVar2[2];
    fVar5 = (*param_1[1] + fVar9) * 0.5;
    fVar6 = (param_1[1][1] + fVar10) * 0.5;
    lVar3 = 5;
    fVar7 = (float) ((uint) pfVar2[1] ^ 0x80000000);
    fVar8 = (float) ((uint) * pfVar2 ^ 0x80000000);
    *param_2 = fVar5 * 5.317362;
    fVar9 = (fVar9 - fVar5) * 3.06998;
    fVar10 = (fVar10 - fVar6) * 3.06998;
    param_2[0xc] = fVar6 * 5.317362;
    param_2[0x18] = 0.0;
    param_2[1] = fVar9 * fVar7;
    param_2[2] = fVar9 * fVar1;
    param_2[0xd] = fVar10 * fVar7;
    param_2[3] = fVar9 * fVar8;
    param_2[0x19] = fVar7 * 0.0;
    param_2[0x1a] = fVar1 * 0.0;
    param_2[0x1b] = fVar8 * 0.0;
    param_2[0xe] = fVar10 * fVar1;
    param_2[0xf] = fVar10 * fVar8;
    do {
        pfVar4[-0x18] = 0.0;
        pfVar4[-0xc] = 0.0;
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
}


void FUN_1401af0b0(float **param_1, float *param_2) {
    float fVar1;
    float *pfVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    pfVar2 = param_1[1];
    fVar11 = pfVar2[2];
    fVar12 = pfVar2[1];
    fVar4 = fVar11 * 0.4886025;
    fVar1 = *pfVar2;
    fVar3 = fVar12 * -0.4886025;
    fVar9 = fVar11 * fVar12 * -1.092548;
    fVar6 = **param_1 * 2.956793;
    fVar7 = (*param_1)[1] * 2.956793;
    fVar5 = fVar1 * -0.4886025;
    fVar10 = (fVar11 * 3.0 * fVar11 - 1.0) * 0.3153916;
    fVar8 = fVar1 * fVar12 * 1.092548;
    fVar11 = fVar1 * fVar11 * -1.092548;
    *param_2 = fVar6 * 0.2820948;
    param_2[0xc] = fVar7 * 0.2820948;
    fVar12 = (fVar1 * fVar1 - fVar12 * fVar12) * 0.5462742;
    param_2[0x18] = 0.0;
    param_2[1] = fVar3 * fVar6;
    param_2[0xd] = fVar3 * fVar7;
    param_2[0x19] = fVar3 * 0.0;
    param_2[2] = fVar4 * fVar6;
    param_2[0xe] = fVar4 * fVar7;
    param_2[0x1a] = fVar4 * 0.0;
    param_2[3] = fVar5 * fVar6;
    param_2[0xf] = fVar5 * fVar7;
    param_2[0x1b] = fVar5 * 0.0;
    param_2[4] = fVar8 * fVar6;
    param_2[0x10] = fVar8 * fVar7;
    param_2[0x1c] = fVar8 * 0.0;
    param_2[5] = fVar9 * fVar6;
    param_2[0x11] = fVar9 * fVar7;
    param_2[0x1d] = fVar9 * 0.0;
    param_2[6] = fVar10 * fVar6;
    param_2[0x1e] = fVar10 * 0.0;
    param_2[0x12] = fVar10 * fVar7;
    param_2[7] = fVar11 * fVar6;
    param_2[0x13] = fVar11 * fVar7;
    param_2[0x1f] = fVar11 * 0.0;
    param_2[0x20] = fVar12 * 0.0;
    param_2[8] = fVar12 * fVar6;
    param_2[0x14] = fVar12 * fVar7;
    return;
}


void FUN_1401af310(undefined(**param_1)[16], float * param_2) {
    undefined(*pauVar1)[16];
    float fVar2;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar3;
    float fVar5;
    undefined auVar4[16];
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
    undefined(*local_148)[16];
    undefined(*local_140)[16];

    if (0.0001 <= *(float *) (param_1 + 2)) {
        pauVar1 = param_1[1];
        fVar3 = *(float *) (*pauVar1 + 4);
        fVar5 = *(float *) *pauVar1;
        fVar13 = 0.5;
        fVar14 = (float) ((uint) fVar3 ^ 0x80000000);
        fVar15 = *(float *) (*pauVar1 + 8);
        fVar16 = (float) ((uint) fVar5 ^ 0x80000000);
        fVar9 = fVar5 * 8.660254 * fVar15 * -0.2;
        fVar2 = fVar5 * 8.660254 * fVar3 * 0.2;
        fVar6 = fVar3 * 8.660254 * fVar15 * -0.2;
        fVar7 = (fVar15 * fVar15 - fVar5 * fVar5 * 0.5) - fVar3 * fVar3 * 0.5;
        fVar10 = fVar5 * fVar5 * 8.660254 * 0.1 - fVar3 * fVar3 * 8.660254 * 0.1;
        FUN_1408fc950();
        fVar3 = extraout_XMM0_Da;
        FUN_1408fe3d0();
        fVar11 = 1.772454 - fVar3 * 1.772454;
        fVar12 = (fVar3 * fVar3 - 1.0) * fVar3 * -3.963327 * fVar13;
        fVar13 = extraout_XMM0_Da_00 * extraout_XMM0_Da_00 * 3.06998 * fVar13;
        FUN_1408fe3d0();
        fVar3 = extraout_XMM0_Da_01 * extraout_XMM0_Da_01;
        auVar4 = divps(**param_1, CONCAT412(fVar3, CONCAT48(fVar3, CONCAT44(fVar3, fVar3))));
        fVar3 = SUB164(auVar4, 0);
        fVar5 = SUB164(auVar4 >> 0x20, 0);
        *param_2 = fVar11 * fVar3;
        fVar8 = fVar13 * fVar3;
        fVar13 = fVar13 * fVar5;
        fVar3 = fVar12 * fVar3;
        fVar12 = fVar12 * fVar5;
        param_2[0xc] = fVar11 * fVar5;
        param_2[0x18] = 0.0;
        param_2[1] = fVar8 * fVar14;
        param_2[2] = fVar8 * fVar15;
        param_2[0xd] = fVar13 * fVar14;
        param_2[0x1a] = fVar15 * 0.0;
        param_2[3] = fVar8 * fVar16;
        param_2[0x19] = fVar14 * 0.0;
        param_2[0x1b] = fVar16 * 0.0;
        param_2[0xe] = fVar13 * fVar15;
        param_2[0xf] = fVar13 * fVar16;
        param_2[4] = fVar3 * fVar2;
        param_2[0x10] = fVar12 * fVar2;
        param_2[0x1c] = fVar2 * 0.0;
        param_2[5] = fVar3 * fVar6;
        param_2[0x11] = fVar12 * fVar6;
        param_2[0x1d] = fVar6 * 0.0;
        param_2[6] = fVar3 * fVar7;
        param_2[0x12] = fVar12 * fVar7;
        param_2[0x1e] = fVar7 * 0.0;
        param_2[7] = fVar3 * fVar9;
        param_2[0x13] = fVar12 * fVar9;
        param_2[8] = fVar3 * fVar10;
        param_2[0x14] = fVar12 * fVar10;
        param_2[0x20] = fVar10 * 0.0;
        param_2[0x1f] = fVar9 * 0.0;
    } else {
        local_148 = *param_1;
        local_140 = param_1[1];
        FUN_1401af0b0(&local_148);
    }
    return;
}


void FUN_1401af740(float **param_1, float *param_2) {
    float *pfVar1;
    float fVar2;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined auVar3[16];
    float fVar4;
    float fVar5;
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

    fVar9 = 0.5;
    pfVar1 = param_1[1];
    fVar7 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = fVar2 * fVar2;
    fVar6 = fVar7 * fVar7 + fVar5 + 0.0;
    auVar3 = rsqrtss(CONCAT412(fVar5, CONCAT48(fVar5, CONCAT44(fVar5, fVar5))),
                     CONCAT412(pfVar1[3] * pfVar1[3], CONCAT48(fVar4 * fVar4, CONCAT44(fVar5, fVar6))));
    fVar5 = SUB164(auVar3, 0);
    fVar5 = (3.0 - fVar6 * fVar5 * fVar5) * 0.5 * fVar5;
    if (fVar5 <= 0.0) {
        fVar5 = 0.0;
    }
    fVar6 = fVar5 * fVar7;
    fVar8 = fVar5 * fVar2;
    fVar5 = fVar5 * fVar4;
    if (*(float *) (param_1 + 2) < SQRT(fVar7 * fVar7 + fVar2 * fVar2 + 0.0)) {
        FUN_1408fcf3c();
    }
    fVar11 = (float) ((uint) fVar6 ^ 0x80000000);
    fVar10 = (float) ((uint) fVar8 ^ 0x80000000);
    fVar12 = fVar6 * 8.660254 * fVar8 * 0.2;
    fVar13 = (fVar5 * fVar5 - fVar6 * fVar6 * fVar9) - fVar8 * fVar8 * fVar9;
    fVar16 = fVar6 * fVar6 * 8.660254 * 0.1 - fVar8 * fVar8 * 8.660254 * 0.1;
    fVar14 = fVar8 * 8.660254 * fVar5 * -0.2;
    fVar15 = fVar6 * 8.660254 * fVar5 * -0.2;
    FUN_1408fc950();
    fVar4 = extraout_XMM0_Da;
    FUN_1408fe3d0();
    fVar7 = **param_1;
    fVar2 = (*param_1)[1];
    fVar6 = 1.772454 - fVar4 * 1.772454;
    fVar9 = extraout_XMM0_Da_00 * extraout_XMM0_Da_00 * 3.06998 * 0.5;
    fVar4 = (fVar4 * fVar4 - 1.0) * fVar4 * -3.963327 * 0.5;
    fVar8 = fVar9 * fVar7;
    fVar9 = fVar9 * fVar2;
    *param_2 = fVar6 * fVar7;
    fVar7 = fVar4 * fVar7;
    fVar4 = fVar4 * fVar2;
    param_2[0xc] = fVar6 * fVar2;
    param_2[0x18] = 0.0;
    param_2[1] = fVar8 * fVar10;
    param_2[0xd] = fVar9 * fVar10;
    param_2[0x19] = fVar10 * 0.0;
    param_2[3] = fVar8 * fVar11;
    param_2[2] = fVar8 * fVar5;
    param_2[0xf] = fVar9 * fVar11;
    param_2[0xe] = fVar9 * fVar5;
    param_2[0x1b] = fVar11 * 0.0;
    param_2[0x1a] = fVar5 * 0.0;
    param_2[4] = fVar7 * fVar12;
    param_2[0x10] = fVar4 * fVar12;
    param_2[5] = fVar7 * fVar14;
    param_2[0x1c] = fVar12 * 0.0;
    param_2[0x1d] = fVar14 * 0.0;
    param_2[0x11] = fVar4 * fVar14;
    param_2[0x12] = fVar4 * fVar13;
    param_2[6] = fVar7 * fVar13;
    param_2[8] = fVar7 * fVar16;
    param_2[0x1e] = fVar13 * 0.0;
    param_2[7] = fVar7 * fVar15;
    param_2[0x13] = fVar4 * fVar15;
    param_2[0x14] = fVar4 * fVar16;
    param_2[0x1f] = fVar15 * 0.0;
    param_2[0x20] = fVar16 * 0.0;
    return;
}


void FUN_1401afb10(float **param_1, undefined (*param_2)[16]) {
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
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
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;

    pfVar1 = param_1[1];
    fVar2 = pfVar1[8];
    fVar3 = pfVar1[9];
    fVar4 = pfVar1[10];
    fVar5 = pfVar1[0xb];
    fVar6 = pfVar1[0xc];
    fVar7 = pfVar1[0xd];
    fVar8 = pfVar1[0xe];
    fVar9 = pfVar1[0xf];
    fVar10 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar13 = pfVar1[3];
    fVar14 = pfVar1[4];
    fVar15 = pfVar1[5];
    fVar16 = pfVar1[6];
    fVar17 = pfVar1[7];
    pfVar1 = *param_1;
    fVar18 = *pfVar1;
    fVar19 = pfVar1[1];
    fVar20 = pfVar1[3];
    *param_2 = CONCAT412(fVar19 * fVar17 + fVar18 * fVar13 + fVar5 * 0.0 + fVar20 * fVar9,
                         CONCAT48(fVar19 * fVar16 + fVar18 * fVar12 + fVar4 * 0.0 + fVar20 * fVar8,
                                  CONCAT44(fVar19 * fVar15 + fVar18 * fVar11 + fVar3 * 0.0 +
                                           fVar20 * fVar7,
                                           fVar19 * fVar14 + fVar18 * fVar10 + fVar2 * 0.0 +
                                           fVar20 * fVar6)));
    pfVar1 = *param_1;
    fVar18 = pfVar1[4];
    fVar19 = pfVar1[5];
    fVar20 = pfVar1[7];
    param_2[1] = CONCAT412(fVar19 * fVar17 + fVar18 * fVar13 + fVar5 * 0.0 + fVar20 * fVar9,
                           CONCAT48(fVar19 * fVar16 + fVar18 * fVar12 + fVar4 * 0.0 + fVar20 * fVar8,
                                    CONCAT44(fVar19 * fVar15 + fVar18 * fVar11 + fVar3 * 0.0 +
                                             fVar20 * fVar7,
                                             fVar19 * fVar14 + fVar18 * fVar10 + fVar2 * 0.0 +
                                             fVar20 * fVar6)));
    pfVar1 = *param_1;
    fVar18 = pfVar1[8];
    fVar19 = pfVar1[9];
    fVar20 = pfVar1[0xb];
    param_2[2] = CONCAT412(fVar19 * fVar17 + fVar18 * fVar13 + fVar5 * 0.0 + fVar20 * fVar9,
                           CONCAT48(fVar19 * fVar16 + fVar18 * fVar12 + fVar4 * 0.0 + fVar20 * fVar8,
                                    CONCAT44(fVar19 * fVar15 + fVar18 * fVar11 + fVar3 * 0.0 +
                                             fVar20 * fVar7,
                                             fVar19 * fVar14 + fVar18 * fVar10 + fVar2 * 0.0 +
                                             fVar20 * fVar6)));
    pfVar1 = *param_1;
    fVar18 = pfVar1[0xc];
    fVar19 = pfVar1[0xd];
    fVar20 = pfVar1[0xf];
    param_2[3] = CONCAT412(fVar19 * fVar17 + fVar18 * fVar13 + fVar5 * 0.0 + fVar20 * fVar9,
                           CONCAT48(fVar19 * fVar16 + fVar18 * fVar12 + fVar4 * 0.0 + fVar20 * fVar8,
                                    CONCAT44(fVar19 * fVar15 + fVar18 * fVar11 + fVar3 * 0.0 +
                                             fVar20 * fVar7,
                                             fVar19 * fVar14 + fVar18 * fVar10 + fVar2 * 0.0 +
                                             fVar20 * fVar6)));
    return;
}


void FUN_1401afc20(undefined8 *param_1, undefined8 *param_2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
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
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    undefined auVar21[16];
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;

    param_1 = (undefined8 * ) * param_1;
    fVar1 = (float) *param_1;
    fVar5 = (float) ((ulonglong) * param_1 >> 0x20);
    fVar9 = (float) ((ulonglong) param_1[2] >> 0x20);
    fVar27 = (float) ((ulonglong) param_1[4] >> 0x20);
    fVar28 = (float) ((ulonglong) param_1[6] >> 0x20);
    fVar2 = (float) param_1[1];
    fVar6 = (float) ((ulonglong) param_1[1] >> 0x20);
    fVar10 = (float) ((ulonglong) param_1[3] >> 0x20);
    fVar25 = (float) ((ulonglong) param_1[5] >> 0x20);
    fVar26 = (float) ((ulonglong) param_1[7] >> 0x20);
    fVar11 = fVar2 * fVar25;
    fVar14 = fVar26 * 0.0;
    fVar12 = fVar2 * fVar27;
    fVar15 = fVar28 * 0.0;
    fVar19 = fVar25 * 0.0;
    fVar20 = fVar9 * fVar26;
    fVar22 = ((((fVar27 * 0.0 - fVar27 * fVar14) + fVar25 * fVar15) - fVar25 * 0.0) + fVar20 * 0.0) -
             0.0;
    fVar23 = ((((fVar28 * 0.0 - fVar28 * fVar11) + fVar26 * fVar12) - fVar26 * 0.0) + fVar19 * 0.0) -
             0.0;
    fVar24 = ((((fVar9 * fVar11 - fVar9 * 0.0) + fVar10 * 0.0) - fVar10 * fVar12) + 0.0) -
             fVar19 * 0.0;
    fVar3 = fVar1 * fVar27;
    fVar7 = fVar28 * 0.0;
    fVar29 = fVar1 * 0.0;
    fVar4 = fVar1 * fVar25;
    fVar8 = fVar26 * 0.0;
    fVar16 = fVar23 * 0.0;
    fVar17 = fVar24 * 0.0;
    fVar13 = fVar22 * fVar1 + 0.0;
    fVar18 = fVar17 + fVar16;
    fVar16 = fVar16 + fVar17 + fVar13;
    auVar21 = rcpss(ZEXT1216(CONCAT48(fVar18, CONCAT44(fVar13, fVar16))),
                    ZEXT1216(CONCAT48(fVar18, CONCAT44(fVar13, fVar16))));
    fVar13 = SUB164(auVar21, 0);
    fVar13 = (fVar13 + fVar13) - fVar16 * fVar13 * fVar13;
    *param_2 = CONCAT44(fVar23 * fVar13, fVar22 * fVar13);
    param_2[1] = CONCAT44(fVar24 * fVar13,
                          (((((fVar5 * fVar14 - fVar5 * fVar10 * 0.0) + fVar6 * fVar9 * 0.0) -
                             fVar6 * fVar15) + fVar2 * fVar28 * fVar10) - fVar2 * fVar20) * fVar13);
    param_2[2] = CONCAT44(((((fVar11 * 0.0 - 0.0) - fVar4 * 0.0) + 0.0 + fVar26 * fVar29) -
                           fVar26 * 0.0) * fVar13,
                          (((0.0 - fVar8 * 0.0) + 0.0 + fVar25 * 0.0) - fVar25 * 0.0) * fVar13);
    param_2[3] = CONCAT44(((((0.0 - fVar11 * 0.0) - 0.0) + fVar4 * 0.0 + fVar10 * 0.0) -
                           fVar10 * fVar29) * fVar13,
                          ((((fVar1 * 0.0 - fVar1 * fVar14) - fVar2 * fVar10 * 0.0) + fVar2 * fVar8 +
                            fVar6 * 0.0) - fVar6 * 0.0) * fVar13);
    param_2[4] = CONCAT44((((fVar26 * 0.0 - ((fVar19 * 0.0 - 0.0) + fVar26 * fVar3)) + fVar28 * fVar4)
                           - fVar28 * 0.0) * fVar13,
                          (((fVar25 * 0.0 - (fVar25 * fVar7 + 0.0)) + fVar27 * fVar8) - fVar27 * 0.0)
                          * fVar13);
    param_2[5] = CONCAT44((((fVar10 * fVar3 - ((0.0 - fVar19 * 0.0) + fVar10 * 0.0)) + fVar9 * 0.0) -
                           fVar9 * fVar4) * fVar13,
                          (((fVar6 * fVar7 - ((fVar1 * 0.0 - fVar1 * fVar20) + fVar6 * fVar9 * 0.0)) +
                            fVar5 * fVar10 * 0.0) - fVar5 * fVar8) * fVar13);
    param_2[6] = CONCAT44(((((fVar3 * 0.0 - (fVar12 * 0.0 - 0.0)) - 0.0) - fVar28 * fVar29) +
                           fVar28 * 0.0) * fVar13,
                          ((((fVar7 * 0.0 - 0.0) - 0.0) - fVar27 * 0.0) + fVar27 * 0.0) * fVar13);
    param_2[7] = CONCAT44(((((0.0 - (0.0 - fVar12 * 0.0)) - fVar3 * 0.0) - fVar9 * 0.0) +
                           fVar9 * fVar29) * fVar13,
                          ((((fVar2 * fVar9 * 0.0 - (fVar1 * 0.0 - fVar1 * fVar15)) - fVar2 * fVar7) -
                            fVar5 * 0.0) + fVar5 * 0.0) * fVar13);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401aff00(float **param_1, undefined (*param_2)[16]) {
    float fVar1;
    float fVar2;
    float *pfVar3;
    float *pfVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined(*local_158)[16];
    float *local_150;
    float local_148;
    float fStack324;
    float fStack320;
    undefined4 uStack316;
    float local_138;
    float fStack308;
    float fStack304;
    undefined4 uStack300;
    float local_128;
    float fStack292;
    float fStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    float local_108;
    undefined8 local_104;
    undefined8 local_fc;
    float local_f4;
    undefined8 local_f0;
    undefined8 local_e8;
    float local_e0;
    undefined8 local_dc;
    undefined8 local_d4;
    undefined4 local_cc;
    undefined local_c8[16];
    undefined local_b8[16];
    undefined local_a8[16];
    undefined local_98[16];

    uVar8 = uRam0000000140c7839c;
    uVar7 = uRam0000000140c78398;
    uVar6 = uRam0000000140c78394;
    pfVar3 = param_1[2];
    fVar11 = 1.0;
    fVar12 = 2.0;
    if (pfVar3 == (float *) 0x0) {
        *(undefined4 * ) * param_2 = _DAT_140c78390;
        *(undefined4 * )(*param_2 + 4) = uVar6;
        *(undefined4 * )(*param_2 + 8) = uVar7;
        *(undefined4 * )(*param_2 + 0xc) = uVar8;
        uVar8 = uRam0000000140c783ac;
        uVar7 = uRam0000000140c783a8;
        uVar6 = uRam0000000140c783a4;
        *(undefined4 *) param_2[1] = _DAT_140c783a0;
        *(undefined4 * )(param_2[1] + 4) = uVar6;
        *(undefined4 * )(param_2[1] + 8) = uVar7;
        *(undefined4 * )(param_2[1] + 0xc) = uVar8;
        uVar8 = uRam0000000140c783bc;
        uVar7 = uRam0000000140c783b8;
        uVar6 = uRam0000000140c783b4;
        *(undefined4 *) param_2[2] = _DAT_140c783b0;
        *(undefined4 * )(param_2[2] + 4) = uVar6;
        *(undefined4 * )(param_2[2] + 8) = uVar7;
        *(undefined4 * )(param_2[2] + 0xc) = uVar8;
        uVar8 = uRam0000000140c783cc;
        uVar7 = uRam0000000140c783c8;
        uVar6 = uRam0000000140c783c4;
        *(undefined4 *) param_2[3] = _DAT_140c783c0;
        *(undefined4 * )(param_2[3] + 4) = uVar6;
        *(undefined4 * )(param_2[3] + 8) = uVar7;
        *(undefined4 * )(param_2[3] + 0xc) = uVar8;
    } else {
        pfVar4 = param_1[1];
        if (pfVar4 == (float *) 0x0) {
            pfVar3 = *param_1;
            *(undefined8 *) param_2[2] = 0;
            *(undefined8 * )(param_2[1] + 8) = 0;
            *(undefined8 * )(*param_2 + 0xc) = 0;
            *(undefined8 * )(*param_2 + 4) = 0;
            if (pfVar3 == (float *) 0x0) {
                *(undefined8 * )(param_2[3] + 4) = 0;
                *(undefined8 * )(param_2[2] + 0xc) = 0;
                *(float *) *param_2 = *param_1[2];
                *(float *) (param_2[1] + 4) = param_1[2][1];
                fVar1 = param_1[2][2];
                *(undefined4 * )(param_2[3] + 0xc) = 0x3f800000;
                *(float *) (param_2[2] + 8) = fVar1;
            } else {
                *(undefined4 * )(param_2[2] + 0xc) = 0;
                *(float *) *param_2 = *param_1[2];
                *(float *) (param_2[1] + 4) = param_1[2][1];
                *(float *) (param_2[2] + 8) = param_1[2][2];
                *(float *) param_2[3] = (1.0 - *param_1[2]) * **param_1;
                *(float *) (param_2[3] + 4) = (1.0 - param_1[2][1]) * (*param_1)[1];
                fVar1 = param_1[2][2];
                fVar2 = (*param_1)[2];
                *(undefined4 * )(param_2[3] + 0xc) = 0x3f800000;
                *(float *) (param_2[3] + 8) = (1.0 - fVar1) * fVar2;
            }
        } else {
            local_d4 = 0;
            local_dc = 0;
            local_e8 = 0;
            local_f0 = 0;
            local_fc = 0;
            local_104 = 0;
            local_108 = *pfVar3;
            local_f4 = pfVar3[1];
            local_e0 = pfVar3[2];
            local_cc = 0x3f800000;
            fVar1 = *pfVar4;
            fVar2 = pfVar4[1];
            fVar5 = pfVar4[3];
            uStack300 = 0;
            uStack316 = 0;
            uStack284 = 0;
            fVar9 = fVar2 * 2.0;
            fStack292 = fVar5 * fVar1 * 2.0;
            local_148 = (1.0 - fVar2 * fVar9) - 0.0;
            local_138 = fVar1 * fVar9 - fVar5 * 0.0;
            fStack324 = fVar1 * fVar9 + fVar5 * 0.0;
            fStack308 = 1.0 - fVar1 * fVar1 * 2.0;
            fStack320 = fVar1 * 0.0 - fVar5 * fVar9;
            local_128 = fVar1 * 0.0 + fVar5 * fVar9;
            fStack288 = fStack308 - fVar2 * fVar9;
            fStack308 = fStack308 - 0.0;
            fStack304 = fVar2 * 0.0 + fStack292;
            local_118 = 0;
            uStack276 = 0;
            uStack272 = 0;
            uStack268 = 0x3f800000;
            fStack292 = fVar2 * 0.0 - fStack292;
            local_158 = param_2;
            if (*param_1 == (float *) 0x0) {
                *param_2 = ZEXT1216(CONCAT48(local_128, CONCAT44(local_138, local_148)));
                param_2[1] = ZEXT416((uint) fStack308) << 0x20;
                local_150 = &local_108;
                param_2[2] = ZEXT1216(CONCAT48(fStack288, CONCAT44(fStack304, fStack320)));
                param_2[3] = CONCAT412(0x3f800000, ZEXT412(0) << 0x20);
                FUN_1401afb10(&local_158);
                local_150 = &local_148;
                local_158 = param_2;
                FUN_1401afb10(&local_158);
            } else {
                local_c8 = ZEXT1216(CONCAT48(local_128, CONCAT44(local_138, local_148)));
                local_b8 = ZEXT416((uint) fStack308) << 0x20;
                local_a8 = ZEXT1216(CONCAT48(fStack288, CONCAT44(fStack304, fStack320)));
                local_98 = CONCAT412(0x3f800000, ZEXT412(0) << 0x20);
                *(undefined4 * ) * param_2 = _DAT_140c78390;
                *(undefined4 * )(*param_2 + 4) = uVar6;
                *(undefined4 * )(*param_2 + 8) = uVar7;
                *(undefined4 * )(*param_2 + 0xc) = uVar8;
                uVar8 = uRam0000000140c783ac;
                uVar7 = uRam0000000140c783a8;
                uVar6 = uRam0000000140c783a4;
                *(undefined4 *) param_2[1] = _DAT_140c783a0;
                *(undefined4 * )(param_2[1] + 4) = uVar6;
                *(undefined4 * )(param_2[1] + 8) = uVar7;
                *(undefined4 * )(param_2[1] + 0xc) = uVar8;
                uVar8 = uRam0000000140c783bc;
                uVar7 = uRam0000000140c783b8;
                uVar6 = uRam0000000140c783b4;
                *(undefined4 *) param_2[2] = _DAT_140c783b0;
                *(undefined4 * )(param_2[2] + 4) = uVar6;
                *(undefined4 * )(param_2[2] + 8) = uVar7;
                *(undefined4 * )(param_2[2] + 0xc) = uVar8;
                uVar8 = uRam0000000140c783cc;
                uVar7 = uRam0000000140c783c8;
                uVar6 = uRam0000000140c783c4;
                *(undefined4 *) param_2[3] = _DAT_140c783c0;
                *(undefined4 * )(param_2[3] + 4) = uVar6;
                *(undefined4 * )(param_2[3] + 8) = uVar7;
                *(undefined4 * )(param_2[3] + 0xc) = uVar8;
                fVar1 = *(float *) (param_2[3] + 4);
                *(float *) param_2[3] = *(float *) param_2[3] - **param_1;
                *(float *) (param_2[3] + 4) = fVar1 - (*param_1)[1];
                local_150 = (float *) local_c8;
                *(float *) (param_2[3] + 8) = *(float *) (param_2[3] + 8) - (*param_1)[2];
                FUN_1401afb10(&local_158);
                local_150 = &local_108;
                local_158 = param_2;
                FUN_1401afb10(&local_158);
                local_150 = &local_148;
                local_158 = param_2;
                FUN_1401afb10(&local_158);
                *(float *) param_2[3] = **param_1 + *(float *) param_2[3];
                *(float *) (param_2[3] + 4) = (*param_1)[1] + *(float *) (param_2[3] + 4);
                *(float *) (param_2[3] + 8) = (*param_1)[2] + *(float *) (param_2[3] + 8);
            }
        }
    }
    pfVar3 = param_1[4];
    if (pfVar3 != (float *) 0x0) {
        fVar1 = *pfVar3;
        fVar2 = pfVar3[1];
        fVar5 = pfVar3[3];
        uStack316 = 0;
        uStack300 = 0;
        uStack284 = 0;
        fVar9 = fVar2 * fVar12;
        fStack292 = fVar5 * fVar1 * fVar12;
        fVar10 = fVar12 * 0.0;
        fStack288 = fVar11 - fVar1 * fVar1 * fVar12;
        local_148 = (fVar11 - fVar2 * fVar9) - fVar10 * 0.0;
        local_128 = fVar1 * fVar10 + fVar5 * fVar9;
        fStack320 = fVar1 * fVar10 - fVar5 * fVar9;
        fStack324 = fVar1 * fVar9 + fVar5 * fVar10;
        local_138 = fVar1 * fVar9 - fVar5 * fVar10;
        fStack304 = fVar2 * fVar10 + fStack292;
        fStack292 = fVar2 * fVar10 - fStack292;
        fStack308 = fStack288 - fVar10 * 0.0;
        fStack288 = fStack288 - fVar2 * fVar9;
        local_118 = 0;
        uStack276 = 0;
        uStack272 = 0;
        uStack268 = 0x3f800000;
        local_158 = param_2;
        if (param_1[3] == (float *) 0x0) {
            local_150 = &local_148;
            FUN_1401afb10(&local_158);
        } else {
            *(float *) param_2[3] = *(float *) param_2[3] - *param_1[3];
            *(float *) (param_2[3] + 4) = *(float *) (param_2[3] + 4) - param_1[3][1];
            local_150 = &local_148;
            *(float *) (param_2[3] + 8) = *(float *) (param_2[3] + 8) - param_1[3][2];
            FUN_1401afb10(&local_158);
            *(float *) param_2[3] = *param_1[3] + *(float *) param_2[3];
            *(float *) (param_2[3] + 4) = param_1[3][1] + *(float *) (param_2[3] + 4);
            *(float *) (param_2[3] + 8) = param_1[3][2] + *(float *) (param_2[3] + 8);
        }
    }
    if (param_1[5] != (float *) 0x0) {
        *(float *) param_2[3] = *(float *) param_2[3] + *param_1[5];
        *(float *) (param_2[3] + 4) = param_1[5][1] + *(float *) (param_2[3] + 4);
        *(float *) (param_2[3] + 8) = param_1[5][2] + *(float *) (param_2[3] + 8);
    }
    return;
}


void FUN_1401b0590(undefined4 *param_1, undefined4 *param_2) {
    undefined4 uVar1;
    float *pfVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 *local_c8;
    float *local_c0;
    float local_b8;
    float local_b4;
    float local_b0;
    undefined4 local_ac;
    float local_a8;
    float local_a4;
    float local_a0;
    undefined4 local_9c;
    float local_98;
    float local_94;
    float local_90;
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;

    *(undefined8 * )(param_2 + 0xd) = 0;
    *(undefined8 * )(param_2 + 0xb) = 0;
    *(undefined8 * )(param_2 + 8) = 0;
    *(undefined8 * )(param_2 + 6) = 0;
    *(undefined8 * )(param_2 + 3) = 0;
    *(undefined8 * )(param_2 + 1) = 0;
    uVar1 = *param_1;
    param_2[10] = uVar1;
    param_2[5] = uVar1;
    *param_2 = uVar1;
    param_2[0xf] = 0x3f800000;
    pfVar2 = *(float **) (param_1 + 4);
    if (pfVar2 != (float *) 0x0) {
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[3];
        local_ac = 0;
        local_9c = 0;
        local_8c = 0;
        fVar6 = fVar4 * 2.0;
        local_a0 = fVar5 * fVar3 * 2.0;
        local_b8 = (1.0 - fVar4 * fVar6) - 0.0;
        local_90 = 1.0 - fVar3 * fVar3 * 2.0;
        local_b4 = fVar3 * fVar6 + fVar5 * 0.0;
        local_a8 = fVar3 * fVar6 - fVar5 * 0.0;
        local_b0 = fVar3 * 0.0 - fVar5 * fVar6;
        local_98 = fVar3 * 0.0 + fVar5 * fVar6;
        local_a4 = local_90 - 0.0;
        local_90 = local_90 - fVar4 * fVar6;
        local_94 = fVar4 * 0.0 - local_a0;
        local_a0 = fVar4 * 0.0 + local_a0;
        local_88 = 0;
        uStack132 = 0;
        uStack128 = 0;
        uStack124 = 0x3f800000;
        local_c8 = param_2;
        if (*(uint * *)(param_1 + 2) == (uint *) 0x0) {
            local_c0 = &local_b8;
            FUN_1401afb10(&local_c8);
        } else {
            param_2[0xc] = **(uint * *)(param_1 + 2) ^ 0x80000000;
            param_2[0xd] = *(uint * )(*(longlong * )(param_1 + 2) + 4) ^ 0x80000000;
            local_c0 = &local_b8;
            param_2[0xe] = *(uint * )(*(longlong * )(param_1 + 2) + 8) ^ 0x80000000;
            FUN_1401afb10(&local_c8);
            param_2[0xc] = **(float **) (param_1 + 2) + (float) param_2[0xc];
            param_2[0xd] = *(float *) (*(longlong * )(param_1 + 2) + 4) + (float) param_2[0xd];
            param_2[0xe] = *(float *) (*(longlong * )(param_1 + 2) + 8) + (float) param_2[0xe];
        }
    }
    if (*(float **) (param_1 + 6) != (float *) 0x0) {
        param_2[0xc] = **(float **) (param_1 + 6) + (float) param_2[0xc];
        param_2[0xd] = *(float *) (*(longlong * )(param_1 + 6) + 4) + (float) param_2[0xd];
        param_2[0xe] = *(float *) (*(longlong * )(param_1 + 6) + 8) + (float) param_2[0xe];
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401b0840(undefined4 *param_1, undefined4 *param_2) {
    undefined4 uVar1;
    float fVar2;
    undefined4 *local_78;
    undefined4 *local_70;
    undefined4 local_68;
    uint local_64;
    undefined8 local_60;
    uint local_58;
    undefined4 local_54;
    undefined8 local_50;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    *(undefined8 * )(param_2 + 0xd) = 0;
    *(undefined8 * )(param_2 + 0xb) = 0;
    *(undefined8 * )(param_2 + 8) = 0;
    *(undefined8 * )(param_2 + 6) = 0;
    *(undefined8 * )(param_2 + 3) = 0;
    *(undefined8 * )(param_2 + 1) = 0;
    uVar1 = *param_1;
    param_2[5] = uVar1;
    *param_2 = uVar1;
    param_2[0xf] = 0x3f800000;
    param_2[10] = 0x3f800000;
    fVar2 = (float) param_1[4];
    if (fVar2 != 0.0) {
        local_64 = FUN_1408fe3d0(fVar2);
        local_68 = FUN_1408fc950(fVar2);
        local_60 = 0;
        local_58 = local_64 ^ 0x80000000;
        local_38 = _DAT_140c78440;
        uStack52 = uRam0000000140c78444;
        uStack48 = uRam0000000140c78448;
        uStack44 = uRam0000000140c7844c;
        local_50 = 0;
        local_48 = 0;
        uStack68 = 0;
        uStack64 = 0x3f800000;
        uStack60 = 0;
        local_78 = param_2;
        local_54 = local_68;
        if (*(uint * *)(param_1 + 2) == (uint *) 0x0) {
            local_70 = &local_68;
            FUN_1401afb10(&local_78, param_2);
        } else {
            param_2[0xc] = **(uint * *)(param_1 + 2) ^ 0x80000000;
            local_70 = &local_68;
            param_2[0xd] = *(uint * )(*(longlong * )(param_1 + 2) + 4) ^ 0x80000000;
            FUN_1401afb10(&local_78, param_2);
            param_2[0xc] = **(float **) (param_1 + 2) + (float) param_2[0xc];
            param_2[0xd] = *(float *) (*(longlong * )(param_1 + 2) + 4) + (float) param_2[0xd];
        }
    }
    if (*(float **) (param_1 + 6) != (float *) 0x0) {
        param_2[0xc] = **(float **) (param_1 + 6) + (float) param_2[0xc];
        param_2[0xd] = *(float *) (*(longlong * )(param_1 + 6) + 4) + (float) param_2[0xd];
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401b09d0(float *param_1, undefined (*param_2)[16]) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    float fVar4;
    uint uVar5;
    undefined local_78[16];
    undefined4 local_68;
    uint local_64;
    undefined8 local_60;
    uint local_58;
    undefined4 local_54;
    undefined8 local_50;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 * ) * param_2 = _DAT_140c78390;
    *(undefined4 * )(*param_2 + 4) = uVar1;
    *(undefined4 * )(*param_2 + 8) = uVar2;
    *(undefined4 * )(*param_2 + 0xc) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *) param_2[1] = _DAT_140c783a0;
    *(undefined4 * )(param_2[1] + 4) = uVar1;
    *(undefined4 * )(param_2[1] + 8) = uVar2;
    *(undefined4 * )(param_2[1] + 0xc) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *) param_2[2] = _DAT_140c783b0;
    *(undefined4 * )(param_2[2] + 4) = uVar1;
    *(undefined4 * )(param_2[2] + 8) = uVar2;
    *(undefined4 * )(param_2[2] + 0xc) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *) param_2[3] = _DAT_140c783c0;
    *(undefined4 * )(param_2[3] + 4) = uVar1;
    *(undefined4 * )(param_2[3] + 8) = uVar2;
    *(undefined4 * )(param_2[3] + 0xc) = uVar3;
    if (*(float **) (param_1 + 6) != (float *) 0x0) {
        *(float *) param_2[3] = *(float *) param_2[3] - **(float **) (param_1 + 6);
        *(float *) (param_2[3] + 4) =
                *(float *) (param_2[3] + 4) - *(float *) (*(longlong * )(param_1 + 6) + 4);
    }
    if (param_1[4] != 0.0) {
        uVar5 = (uint) param_1[4] ^ 0x80000000;
        local_64 = FUN_1408fe3d0(uVar5);
        local_68 = FUN_1408fc950(uVar5);
        local_58 = local_64 ^ 0x80000000;
        local_60 = 0;
        local_38 = _DAT_140c78440;
        uStack52 = uRam0000000140c78444;
        uStack48 = uRam0000000140c78448;
        uStack44 = uRam0000000140c7844c;
        local_50 = 0;
        local_48 = 0;
        uStack68 = 0;
        uStack64 = 0x3f800000;
        uStack60 = 0;
        local_54 = local_68;
        if (*(float **) (param_1 + 2) == (float *) 0x0) {
            local_78 = CONCAT88(&local_68, param_2);
            FUN_1401afb10(local_78, param_2);
        } else {
            *(float *) param_2[3] = *(float *) param_2[3] - **(float **) (param_1 + 2);
            local_78 = CONCAT88(&local_68, param_2);
            *(float *) (param_2[3] + 4) =
                    *(float *) (param_2[3] + 4) - *(float *) (*(longlong * )(param_1 + 2) + 4);
            FUN_1401afb10(local_78, param_2);
            *(float *) param_2[3] = **(float **) (param_1 + 2) + *(float *) param_2[3];
            *(float *) (param_2[3] + 4) =
                    *(float *) (*(longlong * )(param_1 + 2) + 4) + *(float *) (param_2[3] + 4);
        }
    }
    if (*param_1 != 1.0) {
        fVar4 = 1.0 / *param_1;
        *param_2 = CONCAT412(*(float *) (*param_2 + 0xc) * fVar4,
                             CONCAT48(*(float *) (*param_2 + 8) * fVar4,
                                      CONCAT44(*(float *) (*param_2 + 4) * fVar4,
                                               *(float *) *param_2 * fVar4)));
        param_2[1] = CONCAT412(*(float *) (param_2[1] + 0xc) * fVar4,
                               CONCAT48(*(float *) (param_2[1] + 8) * fVar4,
                                        CONCAT44(*(float *) (param_2[1] + 4) * fVar4,
                                                 *(float *) param_2[1] * fVar4)));
        param_2[2] = CONCAT412(*(float *) (param_2[2] + 0xc) * fVar4,
                               CONCAT48(*(float *) (param_2[2] + 8) * fVar4,
                                        CONCAT44(*(float *) (param_2[2] + 4) * fVar4,
                                                 *(float *) param_2[2] * fVar4)));
        param_2[3] = CONCAT412(*(float *) (param_2[3] + 0xc) * fVar4,
                               CONCAT48(*(float *) (param_2[3] + 8) * fVar4,
                                        CONCAT44(*(float *) (param_2[3] + 4) * fVar4,
                                                 *(float *) param_2[3] * fVar4)));
    }
    return;
}

