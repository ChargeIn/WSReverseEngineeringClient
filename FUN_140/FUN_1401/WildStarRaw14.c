//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401c53d0(void) {
    if (DAT_140c78598 != 0) {
        FUN_1407e4830(DAT_140c78598, 0, DAT_140c78560 * 0x38);
        FUN_1401c5450();
    }
    _DAT_140c796cc = 0;
    _DAT_140c785b0 = DAT_140c636a8;
    if (DAT_140c785a0 != 0) {
        FUN_1407e4830(DAT_140c785a0, 0, DAT_140c78560 << 4);
    }
    DAT_140c796c0 = 0;
    FUN_1407e4830(&DAT_140c785c0, 0, 0x1100);
    return;
}


void FUN_1401c5450(void) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar7 = 0;
    uVar3 = uVar7;
    uVar6 = uVar7;
    if (DAT_140c78560 != 0) {
        do {
            puVar4 = (undefined8 * )(DAT_140c785a8 + uVar6);
            uVar5 = uVar7;
            if (puVar4[1] != 0) {
                do {
                    lVar1 = puVar4[2];
                    lVar2 = *(longlong * )(lVar1 + uVar5 * 8);
                    while (lVar2 != 0) {
                        lVar2 = *(longlong * )(lVar1 + uVar5 * 8);
                        *(undefined8 * )(lVar1 + uVar5 * 8) = *(undefined8 * )(lVar2 + 8);
                        FUN_14018b900(lVar2, 0);
                        lVar2 = *(longlong * )(lVar1 + uVar5 * 8);
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (ulonglong) puVar4[1]);
            }
            uVar3 = uVar3 + 1;
            *puVar4 = 0;
            uVar6 = uVar6 + 0x28;
        } while (uVar3 < DAT_140c78560);
    }
    return;
}


longlong FUN_1401c5500(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    ulonglong uVar6;

    iVar4 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar4) {
        plVar5 = (longlong * )(param_1 + 0x10 + (longlong) * (int *) (param_1 + -8) * 0x28);
        do {
            plVar1 = plVar5 + -5;
            uVar6 = 0;
            if (plVar5[-6] != 0) {
                do {
                    lVar2 = *plVar1;
                    lVar3 = *(longlong * )(lVar2 + uVar6 * 8);
                    while (lVar3 != 0) {
                        lVar3 = *(longlong * )(lVar2 + uVar6 * 8);
                        *(undefined8 * )(lVar2 + uVar6 * 8) = *(undefined8 * )(lVar3 + 8);
                        FUN_14018b900(lVar3, 0);
                        lVar3 = *(longlong * )(lVar2 + uVar6 * 8);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (ulonglong) plVar5[-6]);
            }
            plVar5[-7] = 0;
            FUN_14018b900(*plVar1, 0);
            iVar4 = iVar4 + -1;
            *plVar1 = 0;
            plVar5 = plVar1;
        } while (-1 < iVar4);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}


undefined8 *FUN_1401c5610(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5f548;
    FUN_14018b900(param_1[2], 0);
    FUN_14018b900(param_1, 0);
    return param_1;
}


int FUN_1401c5660(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5f4f0;
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1401c5690(longlong param_1, undefined8 *param_2, uint param_3) {
    undefined8 *puVar1;
    longlong lVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *) FUN_14018b280(0x20, param_3 | 1);
    if (puVar1 == (undefined8 *) 0x0) {
        return 0x8007000e;
    }
    *(undefined4 * )(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_140b5f548;
    if (param_1 != 0) {
        lVar2 = FUN_14018b280(param_1, 1);
        puVar1[2] = lVar2;
        if (lVar2 == 0) {
            FUN_1401c5610(puVar1);
            return 0x8007000e;
        }
    }
    puVar1[3] = param_1;
    *param_2 = puVar1;
    return 0;
}


undefined8 FUN_1401c5740(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (((param_1 == 0) && (param_2 != 0)) || (param_3 == (undefined8 *) 0x0)) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *) FUN_14018b280(0x20);
    if (puVar1 == (undefined8 *) 0x0) {
        LAB_1401c57eb:
        uVar3 = 0x8007000e;
    } else {
        *(undefined4 * )(puVar1 + 1) = 1;
        puVar1[2] = 0;
        *puVar1 = &PTR_LAB_140b5f548;
        if (param_2 != 0) {
            lVar2 = FUN_14018b280(param_2, 1);
            puVar1[2] = lVar2;
            if (lVar2 == 0) {
                FUN_1401c5610(puVar1);
                goto LAB_1401c57eb;
            }
            FUN_1407db590(lVar2, param_1, param_2);
        }
        puVar1[3] = param_2;
        uVar3 = 0;
        *param_3 = puVar1;
    }
    return uVar3;
}


undefined8 FUN_1401c5810(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 *puVar1;

    if (((param_1 != 0) || (param_2 == 0)) && (param_3 != (undefined8 *) 0x0)) {
        puVar1 = (undefined8 *) FUN_14018b280(0x20);
        if (puVar1 != (undefined8 *) 0x0) {
            *(undefined4 * )(puVar1 + 1) = 1;
            *puVar1 = &PTR_LAB_140b5f4f0;
            puVar1[2] = param_1;
            puVar1[3] = param_2;
            *param_3 = puVar1;
            return 0;
        }
        return 0x8007000e;
    }
    return 0x80070057;
}


int FUN_1401c58b0(longlong *param_1) {
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 1;
    iVar2 = *(int *) plVar1;
    *(int *) plVar1 = *(int *) plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *) 0x0) {
            (**(code * *)(*param_1 + 0x28))(param_1, 1);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 *FUN_1401c58e0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5f518;
    if ((LPCVOID) param_1[4] != (LPCVOID) 0x0) {
        UnmapViewOfFile((LPCVOID) param_1[4]);
    }
    if ((HANDLE) param_1[3] != (HANDLE) 0x0) {
        CloseHandle((HANDLE) param_1[3]);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401c5940(longlong param_1, short *param_2, undefined8 param_3, SIZE_T param_4) {
    short sVar1;
    int iVar2;
    DWORD DVar3;
    ulonglong uVar4;
    HANDLE pvVar5;
    LPVOID lpAddress;
    SIZE_T SVar6;
    longlong lVar7;
    uint uVar8;
    undefined *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined auStackY680[32];
    undefined8 local_268;
    undefined *local_260;
    _MEMORY_BASIC_INFORMATION local_258;
    uint local_228[5];
    undefined8 local_214;
    undefined2 local_20c;
    undefined local_20a[66];
    undefined8 local_1c8;
    undefined local_1b8[32];
    undefined local_198[96];
    WCHAR local_138[128];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStackY680;
    uVar11 = 0;
    if (param_4 == 0) {
        LAB_1401c5b7e:
        *(SIZE_T * )(param_1 + 0x10) = param_4;
    } else {
        if (param_4 == 0xffffffffffffffff) {
            param_4 = uVar11;
        }
        local_214 = 0;
        local_20c = 0;
        local_228[0] = 0x67452301;
        local_228[1] = 0xefcdab89;
        local_228[2] = 0x98badcfe;
        local_228[3] = 0x10325476;
        local_228[4] = 0xc3d2e1f0;
        local_1c8 = 0;
        sVar1 = *param_2;
        uVar4 = uVar11;
        while (sVar1 != 0) {
            uVar4 = uVar4 + 1;
            sVar1 = param_2[uVar4];
        }
        if ((uVar4 & 0x7fffffffffffffff) == 0) {
            LAB_1401c59e5:
            FUN_1401c8f20(local_228);
            puVar9 = local_20a;
            for (lVar7 = 0x40; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
            }
            local_214 = 0;
            local_1c8 = CONCAT44(local_1c8._4_4_, 1);
            LAB_1401c5a06:
            uVar4 = uVar11;
            uVar10 = uVar11;
            puVar9 = local_1b8;
            do {
                lVar7 = (longlong) uVar4 >> 2;
                uVar8 = (int) uVar10 + 1;
                uVar4 = (ulonglong)(int)
                uVar8;
                *puVar9 = (char) (local_228[lVar7] >> (('\x03' - ((byte) uVar10 & 3)) * '\b' & 0x1f));
                uVar10 = (ulonglong) uVar8;
                puVar9 = puVar9 + 1;
            } while (uVar4 < 0x14);
        } else {
            FUN_1401c8c20(local_228);
            if (local_1c8._4_4_ == 0) {
                if ((int) local_1c8 == 0) goto LAB_1401c59e5;
                goto LAB_1401c5a06;
            }
        }
        local_260 = local_198;
        local_268 = 0x29;
        do {
            iVar2 = FUN_1401a3210(local_260, local_268, &local_260, &local_268);
            if (iVar2 < 0) break;
            uVar11 = uVar11 + 1;
        } while (uVar11 < 0x14);
        FUN_14001b370(local_138, 0x80, L"%s\\%s.Buffer.%s", L"Local");
        SVar6 = 1;
        if (param_4 != 0) {
            SVar6 = param_4;
        }
        pvVar5 = CreateFileMappingW((HANDLE) 0xffffffffffffffff, (LPSECURITY_ATTRIBUTES) 0x0, 4,
                                    (DWORD)(SVar6 >> 0x20), (DWORD) SVar6, local_138);
        *(HANDLE * )(param_1 + 0x18) = pvVar5;
        if (pvVar5 != (HANDLE) 0x0) {
            DVar3 = GetLastError();
            if ((DVar3 != 0xb7) && (param_4 == 0)) goto LAB_1401c5b84;
            lpAddress = MapViewOfFile(*(HANDLE * )(param_1 + 0x18), 6, 0, 0, param_4);
            *(LPVOID * )(param_1 + 0x20) = lpAddress;
            if ((lpAddress != (LPVOID) 0x0) &&
                ((param_4 != 0 ||
                  (SVar6 = VirtualQuery(lpAddress, &local_258, 0x30), param_4 = local_258.RegionSize,
                          SVar6 != 0))))
                goto LAB_1401c5b7e;
        }
        GetLastError();
    }
    LAB_1401c5b84:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStackY680);
    return;
}


ulonglong FUN_1401c5bb0(longlong param_1, undefined8 param_2, undefined8 param_3, longlong **param_4) {
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if ((param_1 != 0) && (param_4 != (longlong **) 0x0)) {
        plVar1 = (longlong *) FUN_14018b280(0x28);
        if (plVar1 == (longlong *) 0x0) {
            plVar1 = (longlong *) 0x0;
        } else {
            *plVar1 = (longlong) & PTR_LAB_140b5f518;
            *(undefined4 * )(plVar1 + 1) = 1;
            plVar1[3] = 0;
            plVar1[4] = 0;
        }
        uVar2 = FUN_1401c5940(plVar1, param_1);
        uVar3 = uVar2 & 0xffffffff;
        if ((int) uVar2 < 0) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 0x28))(plVar1, 1);
            }
        } else {
            *param_4 = plVar1;
            uVar3 = uVar2;
        }
        return uVar3;
    }
    return 0x80070057;
}


undefined8 *FUN_1401c5c80(undefined8 *param_1, undefined4 param_2, uint param_3, undefined8 *param_4) {
    ulonglong *puVar1;
    longlong lVar2;
    DWORD DVar3;
    int iVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    HANDLE hObject;
    ulonglong uVar8;
    uint uVar9;

    uVar8 = 0;
    *param_1 = &PTR_LAB_140b5f830;
    param_1[4] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    *(undefined4 * )((longlong) param_1 + 0xc) = param_2;
    *(uint * )(param_1 + 2) = param_3;
    uVar6 = uVar8;
    if (param_3 != 0) {
        uVar5 = SUB168(ZEXT816(8) * ZEXT416(param_3), 0);
        if (SUB168(ZEXT816(8) * ZEXT416(param_3) >> 0x40, 0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        uVar6 = FUN_14018b280(uVar5);
    }
    param_1[3] = uVar6;
    uVar6 = uVar8;
    if (*(int *) (param_1 + 2) != 0) {
        do {
            uVar9 = (int) uVar6 + 1;
            *(undefined4 * )(uVar6 * 8 + param_1[3]) = 0;
            *(undefined4 * )(param_1[3] + 4 + uVar6 * 8) = 0xa0230001;
            uVar6 = (ulonglong) uVar9;
        } while (uVar9 < *(uint * )(param_1 + 2));
    }
    FUN_1401a1070(param_1 + 4, 1, 0, 0, 0);
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 * )(param_1 + 7) = 0;
    param_1[0xc] = param_4;
    if (param_4 != (undefined8 *) 0x0) {
        (**(code * *) * param_4)();
        lVar2 = DAT_140c63758;
        DVar3 = GetCurrentThreadId();
        if (*(DWORD * )(lVar2 + 8) == DVar3) {
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x10);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ 1);
                if (uVar6 == 0) {
                    *(DWORD * )(lVar2 + 8) = DVar3;
                    goto LAB_1401c5db6;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0x400);
            FUN_14019fb60(lVar2 + 8);
        }
        LAB_1401c5db6:
        iVar4 = (**(code * *)(*(longlong *) param_1[0xc] + 0x18))();
        if ((iVar4 != 4) && (lVar7 = FUN_14018b280(0x30), lVar7 != 0)) {
            FUN_1401d74c0(lVar7, param_1[0xc], param_1);
        }
        if (*(ulonglong * )(lVar2 + 0x10) < 2) {
            *(undefined4 * )(lVar2 + 8) = 0;
            *(undefined8 * )(lVar2 + 0x10) = 0;
            if (*(longlong * )(lVar2 + 0x18) != 0) {
                if (*(longlong * )(lVar2 + 0x20) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar2 + 0x20);
                    uVar6 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x20));
            }
        } else {
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -1;
        }
    }
    return param_1;
}


undefined8 FUN_1401c5e60(undefined8 param_1, ulonglong param_2) {
    FUN_1401c5ea0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401c5ea0(undefined8 *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar4 = DAT_140c63758;
    *param_1 = &PTR_LAB_140b5f830;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar4 + 8) == DVar5) {
        *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar4 + 0x10);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar4 + 8) = DVar5;
                goto LAB_1401c5f1b;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar4 + 8, DVar5);
    }
    LAB_1401c5f1b:
    *(undefined4 * )(param_1 + 5) = 4;
    lVar3 = param_1[10];
    while (lVar3 != 0) {
        lVar3 = param_1[10];
        if (lVar3 != 0) {
            FUN_1401d75a0(lVar3);
            FUN_14018b900(lVar3, 0);
        }
        lVar3 = param_1[10];
    }
    lVar3 = param_1[0xb];
    while (lVar3 != 0) {
        lVar3 = param_1[0xb];
        if (lVar3 != 0) {
            FUN_1401d75a0(lVar3);
            FUN_14018b900(lVar3, 0);
        }
        lVar3 = param_1[0xb];
    }
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if (*(ulonglong * )(lVar4 + 0x10) < 2) {
        *(undefined4 * )(lVar4 + 8) = 0;
        *(undefined8 * )(lVar4 + 0x10) = 0;
        if (*(longlong * )(lVar4 + 0x18) != 0) {
            if (*(longlong * )(lVar4 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar4 + 0x20);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x20));
        }
    } else {
        *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + -1;
    }
    FUN_14018b900(param_1[3], 0);
    if (param_1[0xb] != 0) {
        FUN_1401a4a00(param_1 + 0xb);
    }
    if (param_1[10] != 0) {
        FUN_1401a4a00(param_1 + 10);
    }
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001401c603a. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        return;
    }
    return;
}


void FUN_1401c6050(longlong *param_1, int param_2) {
    undefined8 *puVar1;

    if (*(int *) ((longlong) param_1 + 0x2c) < param_2) {
        for (puVar1 = (undefined8 *) param_1[10]; puVar1 != (undefined8 *) 0x0;
             puVar1 = (undefined8 *) puVar1[2]) {
            FUN_1401c6050(*puVar1, param_2);
        }
        (**(code * *)(*param_1 + 0x98))(param_1, param_2);
        *(int *) ((longlong) param_1 + 0x2c) = param_2;
    }
    return;
}


void FUN_1401c60b0(longlong *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar4 = 0;
    *(int *) ((longlong) param_1 + 0x14) = *(int *) (param_1 + 2);
    *(undefined4 * )(param_1 + 5) = 2;
    if (*(int *) (param_1 + 6) != 0) {
        uVar6 = uVar4;
        if (*(int *) (param_1 + 2) != 0) {
            do {
                uVar5 = (int) uVar6 + 1;
                *(undefined4 * )(uVar6 * 8 + param_1[3]) = 1;
                *(undefined4 * )(param_1[3] + 4 + uVar6 * 8) = 0xa0230002;
                uVar6 = (ulonglong) uVar5;
            } while (uVar5 < *(uint * )(param_1 + 2));
        }
        *(undefined4 * )((longlong) param_1 + 0x14) = 0;
    }
    if (*(int *) ((longlong) param_1 + 0x14) != 0) {
        LOCK();
        *(int *) (param_1 + 1) = *(int *) (param_1 + 1) + *(int *) ((longlong) param_1 + 0x14);
        // WARNING: Could not recover jumptable at 0x0001401c6128. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*param_1 + 0x80))();
        return;
    }
    (**(code * *) * param_1)(param_1);
    lVar2 = DAT_140c63758;
    if ((*(int *) ((longlong) param_1 + 0x34) == 0) && ((param_1[8] != 0 || (param_1[9] != 0)))) {
        if (*(ulonglong * )(DAT_140c63758 + 0x10) < 2) {
            *(undefined4 * )(DAT_140c63758 + 8) = 0;
            *(undefined8 * )(lVar2 + 0x10) = 0;
            if (*(longlong * )(lVar2 + 0x18) != 0) {
                if (*(longlong * )(lVar2 + 0x20) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar2 + 0x20);
                    uVar6 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0x20));
            }
        } else {
            *(longlong * )(DAT_140c63758 + 0x10) = *(longlong * )(DAT_140c63758 + 0x10) + -1;
        }
        DVar3 = GetCurrentThreadId();
        *(DWORD * )(param_1 + 7) = DVar3;
        (*(code *) param_1[9])();
        *(undefined4 * )(param_1 + 7) = 0;
        DVar3 = GetCurrentThreadId();
        if (*(DWORD * )(lVar2 + 8) == DVar3) {
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x10);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ 1);
                if (uVar6 == 0) {
                    *(DWORD * )(lVar2 + 8) = DVar3;
                    goto LAB_1401c6206;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x400);
            FUN_14019fb60(lVar2 + 8);
        }
    }
    LAB_1401c6206:
    *(undefined4 * )(param_1 + 5) = 4;
    (**(code * *)(*(longlong *) param_1[4] + 0x10))();
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 0) {
        *(undefined4 * )((longlong) param_1 + 0x2c) = 0;
        lVar2 = param_1[0xb];
        while (lVar2 != 0) {
            lVar2 = param_1[0xb];
            if (lVar2 != 0) {
                FUN_1401d75a0(lVar2);
                FUN_14018b900(lVar2, 0);
            }
            lVar2 = param_1[0xb];
        }
    }
    // WARNING: Could not recover jumptable at 0x0001401c627b. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 8))(param_1);
    return;
}


void FUN_1401c6280(longlong *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    (**(code * *) * param_1)();
    lVar3 = DAT_140c63758;
    uVar5 = 0;
    if ((*(int *) ((longlong) param_1 + 0x34) == 0) && ((param_1[8] != 0 || (param_1[9] != 0)))) {
        if (*(ulonglong * )(DAT_140c63758 + 0x10) < 2) {
            *(undefined4 * )(DAT_140c63758 + 8) = 0;
            *(undefined8 * )(lVar3 + 0x10) = 0;
            if (*(longlong * )(lVar3 + 0x18) != 0) {
                if (*(longlong * )(lVar3 + 0x20) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar3 + 0x20);
                    uVar2 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar2 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar3 + 0x20));
            }
        } else {
            *(longlong * )(DAT_140c63758 + 0x10) = *(longlong * )(DAT_140c63758 + 0x10) + -1;
        }
        DVar4 = GetCurrentThreadId();
        *(DWORD * )(param_1 + 7) = DVar4;
        (*(code *) param_1[9])();
        *(undefined4 * )(param_1 + 7) = 0;
        DVar4 = GetCurrentThreadId();
        if (*(DWORD * )(lVar3 + 8) == DVar4) {
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x10);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD * )(lVar3 + 8) = DVar4;
                    goto LAB_1401c6369;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(lVar3 + 8);
        }
    }
    LAB_1401c6369:
    *(undefined4 * )(param_1 + 5) = 4;
    (**(code * *)(*(longlong *) param_1[4] + 0x10))();
    if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if (*(int *) ((longlong) param_1 + 0x34) == 0) {
        *(undefined4 * )((longlong) param_1 + 0x2c) = 0;
        lVar3 = param_1[0xb];
        while (lVar3 != 0) {
            lVar3 = param_1[0xb];
            if (lVar3 != 0) {
                FUN_1401d75a0(lVar3);
                FUN_14018b900(lVar3, 0);
            }
            lVar3 = param_1[0xb];
        }
    }
    // WARNING: Could not recover jumptable at 0x0001401c63d6. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 8))(param_1);
    return;
}


int FUN_1401c63e0(longlong *param_1) {
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 1;
    iVar2 = *(int *) plVar1;
    *(int *) plVar1 = *(int *) plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *) 0x0) {
            (**(code * *)(*param_1 + 0x78))(param_1, 1);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1401c68d0(longlong *param_1, longlong *param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    undefined8 local_res10;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar3 = DAT_140c63758;
    if (param_2 == (longlong *) 0x0) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = 0x141d421d8;
        local_18 = local_38;
        local_20 = local_40;
        iVar4 = FUN_140196f30(&DAT_140c8a254, 0x23, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar4 != 0) {
            DebugBreak();
        }
    } else {
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*(DWORD * )(lVar3 + 8) == DVar5) {
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x10);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD * )(lVar3 + 8) = DVar5;
                    goto LAB_1401c69ea;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(lVar3 + 8);
        }
        LAB_1401c69ea:
        (**(code * *)(*param_1 + 0x30))(param_1, param_2);
        (**(code * *)(*param_2 + 0x58))(param_2);
        if (*(ulonglong * )(lVar3 + 0x10) < 2) {
            *(undefined4 * )(lVar3 + 8) = 0;
            *(undefined8 * )(lVar3 + 0x10) = 0;
            if (*(longlong * )(lVar3 + 0x18) != 0) {
                if (*(longlong * )(lVar3 + 0x20) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar3 + 0x20);
                    uVar6 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar6 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar3 + 0x20));
            }
        } else {
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -1;
        }
    }
    return;
}


void FUN_1401c6f60(longlong param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar3 = DAT_140c63758;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar3 + 8) == DVar4) {
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x10);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar3 + 8) = DVar4;
                goto LAB_1401c6fca;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar3 + 8, DVar4);
    }
    LAB_1401c6fca:
    if ((*(int *) (param_1 + 0x28) == 0) &&
        (*(undefined4 * )(param_1 + 0x28) = 1, *(longlong * )(param_1 + 0x50) == 0)) {
        FUN_1401c60b0(param_1);
    }
    if (*(ulonglong * )(lVar3 + 0x10) < 2) {
        *(undefined4 * )(lVar3 + 8) = 0;
        *(undefined8 * )(lVar3 + 0x10) = 0;
        if (*(longlong * )(lVar3 + 0x18) != 0) {
            if (*(longlong * )(lVar3 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x20);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x20));
        }
    } else {
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -1;
    }
    return;
}


void FUN_1401c7050(longlong param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar3 = DAT_140c63758;
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 8) == DVar4) {
        *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x10);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar3 + 8) = DVar4;
                goto LAB_1401c70ba;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 8, DVar4);
    }
    LAB_1401c70ba:
    if (*(int *) (param_1 + 0x28) < 2) {
        *(undefined4 * )(param_1 + 0x28) = 0;
    } else {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141d42180;
        local_18 = local_38;
        local_20 = local_40;
        iVar5 = FUN_140196f30(&DAT_140c8a248, 0x23, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar5 != 0) {
            DebugBreak();
        }
    }
    if (*(ulonglong * )(lVar3 + 0x10) < 2) {
        *(undefined4 * )(lVar3 + 8) = 0;
        *(undefined8 * )(lVar3 + 0x10) = 0;
        if (*(longlong * )(lVar3 + 0x18) != 0) {
            if (*(longlong * )(lVar3 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x20);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x20));
        }
        return;
    }
    *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -1;
    return;
}


void FUN_1401c71f0(longlong *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;

    lVar5 = DAT_140c63758;
    DVar6 = GetCurrentThreadId();
    uVar7 = 0;
    if (*(DWORD * )(lVar5 + 8) == DVar6) {
        *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar5 + 0x10);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar5 + 8) = DVar6;
                goto LAB_1401c725a;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(lVar5 + 8, DVar6);
    }
    LAB_1401c725a:
    if ((*(byte * )((longlong) param_1 + 0xc) & 8) == 0) {
        if ((*(int *) (param_1 + 5) < 2) && ((longlong *) param_1[0xc] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0xc] + 0x68))();
        }
    } else if (*(int *) (param_1 + 6) == 0) {
        *(undefined4 * )(param_1 + 6) = 1;
        if (*(int *) (param_1 + 5) < 2) {
            *(undefined4 * )(param_1 + 5) = 1;
            (**(code * *) * param_1)(param_1);
            (**(code * *)(*param_1 + 0x88))(param_1);
            if ((longlong *) param_1[0xc] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0xc] + 0x68))();
            }
            plVar3 = (longlong *) param_1[10];
            while (plVar4 = plVar3, plVar4 != (longlong *) 0x0) {
                plVar3 = (longlong *) plVar4[2];
                if (*plVar4 != param_1[0xc]) {
                    FUN_1401d75a0(plVar4);
                    FUN_14018b900(plVar4, 0);
                }
            }
            if ((param_1[10] == 0) && (*(int *) (param_1 + 5) < 2)) {
                FUN_1401c60b0(param_1);
            }
            (**(code * *)(*param_1 + 8))(param_1);
        } else if (*(int *) (param_1 + 5) < 4) {
            (**(code * *)(*param_1 + 0x88))(param_1);
        }
    }
    if (*(ulonglong * )(lVar5 + 0x10) < 2) {
        *(undefined4 * )(lVar5 + 8) = 0;
        *(undefined8 * )(lVar5 + 0x10) = 0;
        if (*(longlong * )(lVar5 + 0x18) != 0) {
            if (*(longlong * )(lVar5 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar5 + 0x20);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar5 + 0x20));
        }
        return;
    }
    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -1;
    return;
}


void FUN_1401c73a0(longlong *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    uVar8 = 0;
    if ((*(byte * )((longlong) param_1 + 0xc) & 0x10) == 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141d42168;
        local_18 = local_38;
        local_20 = local_40;
        iVar4 = FUN_140196f30(&DAT_140c8a250, 0x23, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar4 != 0) {
            // WARNING: Could not recover jumptable at 0x0001401c7471. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        if (0 < *(int *) (param_1 + 5)) {
            *(undefined4 * )((longlong) param_1 + 0x34) = 1;
            (**(code * *)(*param_1 + 0x68))();
            (**(code * *)(*param_1 + 0x20))();
            *(undefined4 * )((longlong) param_1 + 0x34) = 0;
        }
        lVar3 = DAT_140c63758;
        DVar5 = GetCurrentThreadId();
        uVar6 = uVar8;
        if (*(DWORD * )(lVar3 + 8) == DVar5) {
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x10);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD * )(lVar3 + 8) = DVar5;
                    goto LAB_1401c74f6;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(lVar3 + 8);
        }
        LAB_1401c74f6:
        (**(code * *)(*(longlong *) param_1[4] + 0x18))();
        *(undefined4 * )(param_1 + 5) = 0;
        *(undefined4 * )(param_1 + 6) = 0;
        *(int *) ((longlong) param_1 + 0x14) = *(int *) (param_1 + 2);
        if (*(int *) (param_1 + 2) != 0) {
            do {
                uVar7 = (int) uVar8 + 1;
                *(undefined4 * )(uVar8 * 8 + param_1[3]) = 0;
                *(undefined4 * )(param_1[3] + 4 + uVar8 * 8) = 0xa0230001;
                uVar8 = (ulonglong) uVar7;
            } while (uVar7 < *(uint * )(param_1 + 2));
        }
        (**(code * *)(*param_1 + 0x90))(param_1);
        if (1 < *(ulonglong * )(lVar3 + 0x10)) {
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + -1;
            return;
        }
        *(undefined4 * )(lVar3 + 8) = 0;
        *(undefined8 * )(lVar3 + 0x10) = 0;
        if (*(longlong * )(lVar3 + 0x18) != 0) {
            if (*(longlong * )(lVar3 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x20);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x20));
        }
    }
    return;
}


undefined8 *FUN_1401c75d0(undefined8 *param_1, undefined4 *param_2, undefined8 param_3) {
    FUN_1401c5c80(param_1, *param_2, param_2[8], param_3);
    *param_1 = &PTR_LAB_140b5f780;
    *(undefined4 * )(param_1 + 0xd) = param_2[1];
    param_1[0xe] = *(undefined8 * )(param_2 + 2);
    param_1[0xf] = *(undefined8 * )(param_2 + 4);
    param_1[0x10] = *(undefined8 * )(param_2 + 6);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 * )((longlong) param_1 + 0x9c) = 0;
    return param_1;
}


undefined8 *FUN_1401c7640(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5f780;
    FUN_1401c5ea0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1401c7e90(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5f570;
    (**(code * *)(*(longlong *) param_1[0xd] + 8))();
    FUN_1401c5ea0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401c7f20(longlong param_1, int *param_2) {
    longlong *plVar1;
    undefined4 uVar2;

    (**(code * *)(**(longlong * *)(param_1 + 0x68) + 0x30))();
    plVar1 = *(longlong * *)(param_1 + 0x20);
    if (*param_2 == 0) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_14001c520(param_2);
    }
    // WARNING: Could not recover jumptable at 0x0001401c7f61. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar1 + 0x20))(plVar1, uVar2);
    return;
}


undefined4 *FUN_1401c7f70(undefined4 *param_1) {
    DWORD DVar1;

    DVar1 = TlsAlloc();
    param_1[1] = DVar1;
    *(undefined8 * )(param_1 + 2) = 0;
    *(undefined8 * )(param_1 + 4) = 0;
    *(undefined8 * )(param_1 + 6) = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0xc) = 0;
    *(undefined4 * *)(param_1 + 0x12) = param_1 + 0xc;
    *(undefined8 * )(param_1 + 0xe) = 0;
    *(undefined4 * *)(param_1 + 0x14) = param_1 + 0xe;
    *(undefined4 * *)(param_1 + 0x16) = param_1 + 0x10;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x22) = 0;
    *(undefined8 * )(param_1 + 0x1e) = 0;
    *(undefined4 * *)(param_1 + 0x24) = param_1 + 0x1e;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined4 * *)(param_1 + 0x26) = param_1 + 0x20;
    *(undefined4 * *)(param_1 + 0x28) = param_1 + 0x22;
    *(undefined8 * )(param_1 + 0x2a) = 0;
    *(undefined8 * )(param_1 + 0x2c) = 0;
    *param_1 = 1;
    param_1[0x2e] = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x32) = 0;
    return param_1;
}


void FUN_1401c8010(longlong param_1) {
    if (*(longlong * )(param_1 + 200) != 0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb0) + 0x10))
                (*(longlong * *)(param_1 + 0xb0), *(undefined4 * )(param_1 + 0xb8));
        (**(code * *)(**(longlong * *)(param_1 + 200) + 0x30))(*(longlong * *)(param_1 + 200), 0xffffffff);
        (**(code * *)(**(longlong * *)(param_1 + 200) + 8))();
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0xc0), 0);
    if (*(longlong * *)(param_1 + 0xb0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0xb0) + 8))();
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        CloseHandle(*(HANDLE * )(param_1 + 0x20));
    }
    // WARNING: Could not recover jumptable at 0x0001401c808e. Too many branches
    // WARNING: Treating indirect jump as call
    TlsFree(*(DWORD * )(param_1 + 4));
    return;
}



// WARNING: Removing unreachable block (ram,0x0001401c81af)
// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401c80a0(void) {
    longlong lVar1;
    uint uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    undefined8 in_R9;
    undefined local_38[12];
    undefined4 local_2c;
    code *local_28;
    undefined *local_20;
    undefined8 local_18;
    DWORD local_10;

    lVar1 = DAT_140c63758;
    puVar5 = (undefined4 * )(DAT_140c63758 + 0x68);
    *(undefined4 * )(DAT_140c63758 + 0x28) = 0;
    *(undefined4 * )(lVar1 + 0x6c) = 0;
    *puVar5 = 0;
    *(undefined8 * )(lVar1 + 0x70) = 0;
    TlsSetValue(*(DWORD * )(lVar1 + 4), puVar5);
    GetSystemInfo((LPSYSTEM_INFO) local_38);
    if (0x20 < (uint) local_18) {
        local_18._0_4_ = 0x20;
    }
    *(uint * )(lVar1 + 0xb8) = (uint) local_18;
    uVar3 = SUB168(ZEXT816(0x10) * ZEXT416((uint) local_18), 0);
    if (SUB168(ZEXT816(0x10) * ZEXT416((uint) local_18) >> 0x40, 0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    uVar3 = FUN_14018b280(uVar3);
    *(undefined8 * )(lVar1 + 0xc0) = uVar3;
    FUN_1407e4830(uVar3, 0, (ulonglong) * (uint * )(lVar1 + 0xb8) << 4);
    uVar4 = 0;
    if (*(int *) (lVar1 + 0xb8) != 0) {
        do {
            uVar2 = (int) uVar4 + 1;
            puVar5 = (undefined4 * )(uVar4 * 0x10 + *(longlong * )(lVar1 + 0xc0));
            *puVar5 = 1;
            puVar5[1] = 1;
            *(undefined8 * )(puVar5 + 2) = 0;
            uVar4 = (ulonglong) uVar2;
        } while (uVar2 < *(uint * )(lVar1 + 0xb8));
    }
    uVar3 = FUN_1401a1120(lVar1 + 0xb0);
    if (-1 < (int) uVar3) {
        local_18 = *(undefined8 * )(lVar1 + 0xc0);
        local_10 = *(DWORD * )(lVar1 + 0xb8);
        local_38._0_8_ = &DAT_140a44e14;
        local_28 = FUN_1401c8750;
        local_38._8_4_ = 1;
        local_2c = 7;
        local_20 = &LAB_1401c8b60;
        uVar3 = FUN_1401a0eb0(local_38, local_10, lVar1 + 200, in_R9, FUN_1401c8750, &LAB_1401c8b60);
        if (-1 < (int) uVar3) {
            uVar3 = 0;
        }
    }
    return uVar3;
}


ulonglong FUN_1401c81f0(undefined8 param_1, int *param_2) {
    DWORD *pDVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    bool bVar4;
    longlong lVar5;
    longlong lVar6;
    DWORD DVar7;
    int iVar8;
    uint uVar9;
    longlong lVar10;
    ulonglong uVar11;
    HANDLE pvVar13;
    LPVOID lpTlsValue;
    longlong *plVar14;
    ulonglong local_res8;
    undefined4 *local_res18;
    longlong local_res20;
    longlong *local_128;
    undefined **local_120;
    undefined8 local_118;
    LPVOID local_110;
    undefined **local_108;
    undefined8 local_100;
    LPVOID local_f8;
    undefined8 local_f0;
    undefined8 local_e8;
    int *local_e0;
    undefined4 local_d8;
    undefined4 local_d4;
    longlong local_d0;
    undefined *local_c8;
    undefined8 local_c0;
    undefined4 local_b8;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined4 local_68[4];
    longlong local_58;
    undefined *local_50;
    ulonglong uVar12;

    lVar5 = DAT_140c63758;
    local_res20 = DAT_140c63758;
    if ((DAT_140c90180 & 1) == 0) {
        DAT_140c90180 = DAT_140c90180 | 1;
        FUN_1407dd89c(&LAB_14094da30);
    }
    lVar6 = DAT_140c63760;
    uVar12 = 0;
    if (DAT_140c90188 == 0) {
        DVar7 = GetCurrentThreadId();
        uVar11 = uVar12;
        if (*(DWORD * )(lVar6 + 0x10) == DVar7) {
            *(longlong * )(lVar6 + 0x18) = *(longlong * )(lVar6 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar2 = (ulonglong * )(lVar6 + 0x18);
                uVar3 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar3 == 0) * (*puVar2 ^ 1);
                if (uVar3 == 0) {
                    *(DWORD * )(lVar6 + 0x10) = DVar7;
                    goto LAB_1401c82a6;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < 0x400);
            FUN_14019fb60(lVar6 + 0x10);
        }
        LAB_1401c82a6:
        uVar11 = DAT_140c90188;
        if ((DAT_140c90188 == 0) && (lVar10 = FUN_14018b280(0x80), uVar11 = uVar12, lVar10 != 0)) {
            uVar11 = FUN_14019e5d0(lVar10);
        }
        DAT_140c90188 = uVar11;
        if (*(ulonglong * )(lVar6 + 0x18) < 2) {
            *(undefined4 * )(lVar6 + 0x10) = 0;
            *(undefined8 * )(lVar6 + 0x18) = 0;
            if (*(longlong * )(lVar6 + 0x20) != 0) {
                if (*(longlong * )(lVar6 + 0x28) == 0) {
                    pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar2 = (ulonglong * )(lVar6 + 0x28);
                    uVar11 = *puVar2;
                    *puVar2 = *puVar2 ^ (ulonglong)(uVar11 == 0) * (*puVar2 ^ (ulonglong) pvVar13);
                    if (uVar11 != 0) {
                        CloseHandle(pvVar13);
                    }
                }
                SetEvent(*(HANDLE * )(lVar6 + 0x28));
            }
        } else {
            *(longlong * )(lVar6 + 0x18) = *(longlong * )(lVar6 + 0x18) + -1;
        }
        local_res8 = DAT_140c90188;
        if (DAT_140c90188 != 0) goto LAB_1401c8340;
    } else {
        LAB_1401c8340:
        local_res8 = DAT_140c90188;
        FUN_14019e8f0(DAT_140c90188);
    }
    local_e0 = (int *) TlsGetValue(*(DWORD * )(lVar5 + 4));
    if ((local_e0 == (int *) 0x0) || (*local_e0 != 0)) {
        local_100 = 0;
        local_108 = &PTR_LAB_140b5e648;
        local_f8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_108);
        local_88 = local_108;
        local_f0 = 0x141d422d0;
        local_78 = local_f8;
        local_80 = local_100;
        iVar8 = FUN_140196f30(&DAT_140c8a264, 0x23, &local_f0, &local_88);
        local_108 = &PTR_LAB_140b5e648;
        lpTlsValue = local_f8;
    } else {
        if (*(int *) (lVar5 + 0x6c) == 0) {
            local_50 = &LAB_1401c8740;
            local_c8 = &LAB_1401c8740;
            local_d8 = 10;
            local_d4 = 1;
            local_58 = lVar5;
            local_d0 = lVar5;
            local_c0 = 0;
            local_b8 = 1;
            FUN_14019dca0(&local_d8, 0, 0, &local_128);
            lVar6 = local_res20;
            *(undefined4 * )(lVar5 + 0x6c) = 1;
            pDVar1 = (DWORD * )(lVar5 + 8);
            plVar14 = (longlong * )(lVar5 + 0x30);
            do {
                DVar7 = GetCurrentThreadId();
                uVar11 = uVar12;
                if (*pDVar1 == DVar7) {
                    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 1;
                } else {
                    do {
                        LOCK();
                        puVar2 = (ulonglong * )(lVar5 + 0x10);
                        uVar3 = *puVar2;
                        *puVar2 = *puVar2 ^ (ulonglong)(uVar3 == 0) * (*puVar2 ^ 1);
                        if (uVar3 == 0) {
                            *pDVar1 = DVar7;
                            goto LAB_1401c84a4;
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < 0x400);
                    FUN_14019fb60(pDVar1);
                }
                LAB_1401c84a4:
                lVar10 = FUN_1401d76e0(plVar14);
                if ((lVar10 != 0) &&
                    (iVar8 = *(int *) (lVar10 + 0x9c) + 1, *(int *) (lVar10 + 0x9c) = iVar8,
                            iVar8 == *(int *) (lVar10 + 0x10))) {
                    if (lVar10 == *(longlong * )(lVar5 + 0x60)) {
                        *(undefined8 * )(lVar5 + 0x60) = 0;
                    } else {
                        FUN_1401d7680(plVar14, lVar10);
                    }
                }
                if (*(ulonglong * )(lVar5 + 0x10) < 2) {
                    *pDVar1 = 0;
                    *(undefined8 * )(lVar5 + 0x10) = 0;
                    if (*(longlong * )(lVar5 + 0x18) != 0) {
                        if (*(longlong * )(lVar5 + 0x20) == 0) {
                            pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar2 = (ulonglong * )(lVar5 + 0x20);
                            uVar11 = *puVar2;
                            *puVar2 = *puVar2 ^ (ulonglong)(uVar11 == 0) * (*puVar2 ^ (ulonglong) pvVar13);
                            if (uVar11 != 0) {
                                CloseHandle(pvVar13);
                            }
                        }
                        SetEvent(*(HANDLE * )(lVar5 + 0x20));
                    }
                } else {
                    *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -1;
                }
            } while ((((lVar10 != 0) && (FUN_1401c89c0(), *param_2 != 0)) &&
                      (iVar8 = FUN_14001c520(param_2), iVar8 != 0)) && (*(int *) (lVar6 + 0x6c) != 0));
            *(undefined4 * )(lVar6 + 0x6c) = 0;
            if (local_128 != (longlong *) 0x0) {
                (**(code * *)(*local_128 + 0x68))(local_128);
                local_68[0] = 0xffffffff;
                (**(code * *)(*local_128 + 0x20))(local_128, local_68);
                (**(code * *)(*local_128 + 8))(local_128);
                local_128 = (longlong *) 0x0;
            }
            FUN_14003d8f0(&local_res18, pDVar1);
            bVar4 = false;
            if (*(longlong * )(lVar5 + 0x60) == 0) {
                do {
                    bVar4 = false;
                    if (*plVar14 != 0) break;
                    uVar9 = (int) uVar12 + 1;
                    uVar12 = (ulonglong) uVar9;
                    plVar14 = plVar14 + 1;
                    bVar4 = true;
                } while (uVar9 < 3);
            }
            if (*(ulonglong * )(local_res18 + 2) < 2) {
                *local_res18 = 0;
                *(undefined8 * )(local_res18 + 2) = 0;
                if (*(longlong * )(local_res18 + 4) != 0) {
                    if (*(longlong * )(local_res18 + 6) == 0) {
                        pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar2 = (ulonglong * )(local_res18 + 6);
                        uVar12 = *puVar2;
                        *puVar2 = *puVar2 ^ (ulonglong)(uVar12 == 0) * (*puVar2 ^ (ulonglong) pvVar13);
                        if (uVar12 != 0) {
                            CloseHandle(pvVar13);
                        }
                    }
                    SetEvent(*(HANDLE * )(local_res18 + 6));
                }
                uVar12 = (ulonglong)
                !bVar4;
            } else {
                *(longlong * )(local_res18 + 2) = *(longlong * )(local_res18 + 2) + -1;
                uVar12 = (ulonglong)
                !bVar4;
            }
            goto LAB_1401c8700;
        }
        local_118 = 0;
        local_120 = &PTR_LAB_140b5e648;
        local_110 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_120);
        local_a8 = local_120;
        local_e8 = 0x141d42310;
        local_98 = local_110;
        local_a0 = local_118;
        iVar8 = FUN_140196f30(&DAT_140c8a268, 0x23, &local_e8, &local_a8);
        local_120 = &PTR_LAB_140b5e648;
        lpTlsValue = local_110;
    }
    TlsSetValue(DAT_140c63720, lpTlsValue);
    if (iVar8 != 0) {
        DebugBreak();
    }
    LAB_1401c8700:
    if (local_res8 != 0) {
        FUN_14019ea00(local_res8);
    }
    return uVar12;
}


void FUN_1401c8750(longlong param_1, uint param_2) {
    int iVar1;
    longlong lVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    DWORD DVar7;
    uint uVar8;
    ulonglong uVar9;
    HANDLE hObject;
    LPVOID lpTlsValue;
    ulonglong uVar10;

    lpTlsValue = (LPVOID)((ulonglong) param_2 * 0x10 + param_1);
    TlsSetValue(*(DWORD * )(DAT_140c63758 + 4), lpTlsValue);
    if (*(int *) ((longlong) lpTlsValue + 4) != 0) {
        do {
            (**(code * *)(**(longlong * *)(DAT_140c63758 + 0xb0) + 0x18))();
            lVar5 = DAT_140c63758;
            DVar7 = GetCurrentThreadId();
            uVar9 = 0;
            if (*(DWORD * )(lVar5 + 8) == DVar7) {
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 1;
            } else {
                do {
                    LOCK();
                    puVar3 = (ulonglong * )(lVar5 + 0x10);
                    uVar10 = *puVar3;
                    *puVar3 = *puVar3 ^ (ulonglong)(uVar10 == 0) * (*puVar3 ^ 1);
                    if (uVar10 == 0) {
                        *(DWORD * )(lVar5 + 8) = DVar7;
                        goto LAB_1401c87fc;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < 0x400);
                FUN_14019fb60(lVar5 + 8);
            }
            LAB_1401c87fc:
            lVar6 = DAT_140c63758;
            lVar2 = DAT_140c63758 + 0x78;
            if (*(longlong * )(DAT_140c63758 + 0xa8) == 0) {
                uVar9 = 3;
                do {
                    uVar8 = (int) uVar9 - 1;
                    uVar9 = (ulonglong) uVar8;
                    lVar4 = *(longlong * )(lVar2 + uVar9 * 8);
                    *(longlong * )(lVar6 + 0xa8) = lVar4;
                    if (lVar4 != 0) {
                        **(undefined8 * *)(lVar4 + 0x88) = *(undefined8 * )(lVar4 + 0x90);
                        if (*(longlong * )(lVar4 + 0x90) == 0) {
                            *(undefined8 * )(lVar6 + 0x90 + (longlong) * (int *) (lVar4 + 0x2c) * 8) =
                                    *(undefined8 * )(lVar4 + 0x88);
                        } else {
                            *(undefined8 * )(*(longlong * )(lVar4 + 0x90) + 0x88) = *(undefined8 * )(lVar4 + 0x88);
                        }
                        lVar2 = DAT_140c63758;
                        *(undefined8 * )(lVar4 + 0x88) = 0;
                        *(undefined8 * )(lVar4 + 0x90) = 0;
                        *(undefined4 * )(*(longlong * )(lVar6 + 0xa8) + 0x98) = *(undefined4 * )(lVar2 + 0x28);
                        *(int *) (DAT_140c63758 + 0x28) = *(int *) (DAT_140c63758 + 0x28) + 1;
                        *(undefined4 * )(*(longlong * )(lVar6 + 0xa8) + 0x28) = 3;
                        goto LAB_1401c88af;
                    }
                    uVar10 = 0;
                } while (uVar8 != 0);
            } else {
                LAB_1401c88af:
                lVar2 = DAT_140c63758;
                uVar10 = *(ulonglong * )(lVar6 + 0xa8);
                if ((uVar10 != 0) &&
                    (iVar1 = *(int *) (uVar10 + 0x9c) + 1, *(int *) (uVar10 + 0x9c) = iVar1,
                            iVar1 == *(int *) (uVar10 + 0x10))) {
                    if (uVar10 == *(ulonglong * )(lVar2 + 0xa8)) {
                        *(undefined8 * )(lVar2 + 0xa8) = 0;
                    } else {
                        **(undefined8 * *)(uVar10 + 0x88) = *(undefined8 * )(uVar10 + 0x90);
                        if (*(longlong * )(uVar10 + 0x90) == 0) {
                            *(undefined8 * )(lVar2 + 0x90 + (longlong) * (int *) (uVar10 + 0x2c) * 8) =
                                    *(undefined8 * )(uVar10 + 0x88);
                        } else {
                            *(undefined8 * )(*(longlong * )(uVar10 + 0x90) + 0x88) = *(undefined8 * )(uVar10 + 0x88);
                        }
                        *(undefined8 * )(uVar10 + 0x88) = 0;
                        *(undefined8 * )(uVar10 + 0x90) = 0;
                    }
                }
            }
            if (*(ulonglong * )(lVar5 + 0x10) < 2) {
                *(undefined4 * )(lVar5 + 8) = 0;
                *(undefined8 * )(lVar5 + 0x10) = 0;
                if (*(longlong * )(lVar5 + 0x18) != 0) {
                    if (*(longlong * )(lVar5 + 0x20) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar3 = (ulonglong * )(lVar5 + 0x20);
                        uVar9 = *puVar3;
                        *puVar3 = *puVar3 ^ (ulonglong)(uVar9 == 0) * (*puVar3 ^ (ulonglong) hObject);
                        if (uVar9 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(lVar5 + 0x20));
                }
            } else {
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + -1;
            }
            if (uVar10 == 0) {
                *(undefined4 * )((longlong) lpTlsValue + 4) = 0;
            } else {
                FUN_1401c89c0();
            }
        } while (*(int *) ((longlong) lpTlsValue + 4) != 0);
    }
    return;
}


void FUN_1401c89c0(undefined4 param_1, longlong param_2, longlong param_3, undefined4 param_4) {
    undefined8 uVar1;

    if (*(int *) (param_3 + 0x30) == 0) {
        uVar1 = *(undefined8 * )(param_2 + 8);
        *(longlong * )(param_2 + 8) = param_3;
        switch (*(undefined4 * )(param_3 + 0x68)) {
            case 0:
                *(undefined8 * )(param_2 + 8) = uVar1;
                param_1 = 0;
                break;
            case 1:
                (**(code * *)(param_3 + 0x78))(*(undefined8 * )(param_3 + 0x70));
                *(undefined8 * )(param_2 + 8) = uVar1;
                param_1 = 0;
                break;
            case 2:
                param_1 = (**(code * *)(param_3 + 0x78))(*(undefined8 * )(param_3 + 0x70));
                *(undefined8 * )(param_2 + 8) = uVar1;
                break;
            case 3:
                (**(code * *)(param_3 + 0x78))(*(undefined8 * )(param_3 + 0x70), *(undefined8 * )(param_3 + 0x80));
                *(undefined8 * )(param_2 + 8) = uVar1;
                param_1 = 0;
                break;
            case 4:
                param_1 = (**(code * *)(param_3 + 0x78))
                        (*(undefined8 * )(param_3 + 0x70), *(undefined8 * )(param_3 + 0x80));
                *(undefined8 * )(param_2 + 8) = uVar1;
                break;
            case 5:
                (**(code * *)(param_3 + 0x78))(*(undefined8 * )(param_3 + 0x70), param_4);
                *(undefined8 * )(param_2 + 8) = uVar1;
                param_1 = 0;
                break;
            case 6:
                param_1 = (**(code * *)(param_3 + 0x78))(*(undefined8 * )(param_3 + 0x70), param_4);
                *(undefined8 * )(param_2 + 8) = uVar1;
                break;
            case 7:
                (**(code * *)(param_3 + 0x78))
                        (*(undefined8 * )(param_3 + 0x70), *(undefined8 * )(param_3 + 0x80), param_4);
                *(undefined8 * )(param_2 + 8) = uVar1;
                param_1 = 0;
                break;
            case 8:
                param_1 = (**(code * *)(param_3 + 0x78))
                        (*(undefined8 * )(param_3 + 0x70), *(undefined8 * )(param_3 + 0x80), param_4);
                *(undefined8 * )(param_2 + 8) = uVar1;
                break;
            default:
                *(undefined8 * )(param_2 + 8) = uVar1;
        }
    } else {
        param_1 = 0xa0230002;
    }
    FUN_14019e200(param_3, param_1, param_4);
    return;
}


uint FUN_1401c8b70(longlong param_1, undefined *param_2) {
    byte bVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;

    if (param_2 != (undefined *) 0x0) {
        uVar4 = *(uint * )(param_1 + 100);
        if (uVar4 == 0) {
            uVar3 = 0;
            uVar5 = uVar3;
            if (*(int *) (param_1 + 0x60) == 0) {
                FUN_1401c8f20();
                *(undefined8 * )(param_1 + 0x1e) = 0;
                *(undefined8 * )(param_1 + 0x26) = 0;
                *(undefined8 * )(param_1 + 0x2e) = 0;
                *(undefined8 * )(param_1 + 0x36) = 0;
                *(undefined8 * )(param_1 + 0x3e) = 0;
                *(undefined8 * )(param_1 + 0x46) = 0;
                *(undefined8 * )(param_1 + 0x4e) = 0;
                *(undefined8 * )(param_1 + 0x56) = 0;
                *(undefined8 * )(param_1 + 0x14) = 0;
                *(undefined4 * )(param_1 + 0x60) = 1;
            }
            do {
                lVar2 = (longlong) uVar3 >> 2;
                uVar4 = (int) uVar5 + 1;
                uVar3 = (ulonglong)(int)
                uVar4;
                bVar1 = ('\x03' - ((byte) uVar5 & 3)) * '\b' & 0x1f;
                *param_2 = (char) (*(uint * )(param_1 + lVar2 * 4) >> bVar1);
                uVar5 = (ulonglong) uVar4;
                param_2 = param_2 + 1;
            } while (uVar3 < 0x14);
            uVar4 = 0 >> bVar1;
        }
        return uVar4;
    }
    return 1;
}


int FUN_1401c8c20(longlong param_1, undefined *param_2, longlong param_3) {
    int *piVar1;
    int iVar2;

    if ((param_1 == 0) || (param_2 == (undefined *) 0x0)) {
        iVar2 = 1;
    } else {
        if (*(int *) (param_1 + 0x60) != 0) {
            *(undefined4 * )(param_1 + 100) = 3;
            return 3;
        }
        iVar2 = *(int *) (param_1 + 100);
        if (iVar2 == 0) {
            do {
                param_3 = param_3 + -1;
                if (*(int *) (param_1 + 100) != 0) {
                    return 0;
                }
                *(undefined * )((longlong) * (short *) (param_1 + 0x1c) + 0x1e + param_1) = *param_2;
                *(short *) (param_1 + 0x1c) = *(short *) (param_1 + 0x1c) + 1;
                piVar1 = (int *) (param_1 + 0x14);
                *piVar1 = *piVar1 + 8;
                if (*piVar1 == 0) {
                    piVar1 = (int *) (param_1 + 0x18);
                    *piVar1 = *piVar1 + 1;
                    if (*piVar1 == 0) {
                        *(undefined4 * )(param_1 + 100) = 1;
                    }
                }
                if (*(short *) (param_1 + 0x1c) == 0x40) {
                    FUN_1401c8ce0(param_1);
                }
                param_2 = param_2 + 1;
            } while (param_3 != 0);
            return 0;
        }
    }
    return iVar2;
}


void FUN_1401c8ce0(uint *param_1) {
    uint *puVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    undefined *puVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    longlong lVar11;
    uint uVar12;
    undefined4 auStack407[5];
    undefined8 uStack384;
    uint local_178[20];
    uint auStack296[20];
    uint auStack216[20];
    uint auStack136[20];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) local_178;
    lVar11 = 0x10;
    puVar7 = (undefined * )((longlong) param_1 + 0x1f);
    do {
        *(uint * )(puVar7 + 4 + (longlong)(&stack0xfffffffffffffe65 + -(longlong) param_1)) =
                CONCAT31(CONCAT21(CONCAT11(puVar7[-1], *puVar7), puVar7[1]), puVar7[2]);
        lVar11 = lVar11 + -1;
        puVar7 = puVar7 + 4;
    } while (lVar11 != 0);
    lVar11 = 0x40;
    puVar1 = local_178 + 2;
    do {
        uVar2 = puVar1[0xb] ^ puVar1[6] ^ puVar1[-2] ^ *puVar1;
        puVar1[0xe] = uVar2 << 1 | (uint)((int) uVar2 < 0);
        lVar11 = lVar11 + -1;
        puVar1 = puVar1 + 1;
    } while (lVar11 != 0);
    lVar11 = 0;
    uVar2 = param_1[1];
    uVar10 = param_1[3];
    uVar4 = param_1[4];
    uVar6 = *param_1;
    uVar9 = param_1[2];
    do {
        uVar8 = uVar9;
        uVar12 = uVar6;
        uVar5 = uVar10;
        lVar3 = lVar11 + 1;
        uVar9 = uVar2 >> 2 | uVar2 << 0x1e;
        uVar6 = uVar4 + 0x5a827999 +
                (uVar12 << 5 | uVar12 >> 0x1b) + (~uVar2 & uVar5 | uVar8 & uVar2) + local_178[lVar11];
        lVar11 = lVar3;
        uVar2 = uVar12;
        uVar10 = uVar8;
        uVar4 = uVar5;
    } while (lVar3 < 0x14);
    lVar11 = 0x14;
    do {
        uVar10 = uVar9;
        uVar2 = uVar6;
        uVar4 = uVar8;
        puVar1 = local_178 + lVar11;
        lVar11 = lVar11 + 1;
        uVar6 = (uVar2 << 5 | uVar2 >> 0x1b) + *puVar1 + uVar5 + 0x6ed9eba1 + (uVar4 ^ uVar10 ^ uVar12);
        uVar9 = uVar12 >> 2 | uVar12 << 0x1e;
        uVar12 = uVar2;
        uVar8 = uVar10;
        uVar5 = uVar4;
    } while (lVar11 < 0x28);
    lVar11 = 0x28;
    do {
        uVar8 = uVar9;
        uVar12 = uVar6;
        uVar5 = uVar10;
        puVar1 = local_178 + lVar11;
        lVar11 = lVar11 + 1;
        uVar9 = uVar2 >> 2 | uVar2 << 0x1e;
        uVar6 = (uVar12 << 5 | uVar12 >> 0x1b) + uVar4 + 0x8f1bbcdc +
                ((uVar8 | uVar2) & uVar5 | uVar8 & uVar2) + *puVar1;
        uVar2 = uVar12;
        uVar10 = uVar8;
        uVar4 = uVar5;
    } while (lVar11 < 0x3c);
    lVar11 = 0x3c;
    do {
        uVar10 = uVar9;
        uVar2 = uVar6;
        uVar4 = uVar8;
        puVar1 = local_178 + lVar11;
        lVar11 = lVar11 + 1;
        uVar9 = uVar12 >> 2 | uVar12 << 0x1e;
        uVar6 = (uVar2 << 5 | uVar2 >> 0x1b) + uVar5 + 0xca62c1d6 + *puVar1 + (uVar4 ^ uVar10 ^ uVar12);
        uVar12 = uVar2;
        uVar8 = uVar10;
        uVar5 = uVar4;
    } while (lVar11 < 0x50);
    param_1[4] = param_1[4] + uVar4;
    *param_1 = *param_1 + uVar6;
    param_1[1] = param_1[1] + uVar2;
    param_1[2] = param_1[2] + uVar9;
    param_1[3] = uVar10 + param_1[3];
    *(undefined2 * )(param_1 + 7) = 0;
    uStack384 = 0x1401c8efe;
    FUN_1407db4f0(local_38 ^ (ulonglong) local_178);
    return;
}


void FUN_1401c8f20(longlong param_1) {
    short sVar1;

    sVar1 = *(short *) (param_1 + 0x1c);
    *(undefined * )((longlong) sVar1 + 0x1e + param_1) = 0x80;
    if (sVar1 < 0x38) {
        *(short *) (param_1 + 0x1c) = *(short *) (param_1 + 0x1c) + 1;
        sVar1 = *(short *) (param_1 + 0x1c);
        while (sVar1 < 0x38) {
            *(undefined * )((longlong) sVar1 + 0x1e + param_1) = 0;
            *(short *) (param_1 + 0x1c) = *(short *) (param_1 + 0x1c) + 1;
            sVar1 = *(short *) (param_1 + 0x1c);
        }
    } else {
        *(short *) (param_1 + 0x1c) = *(short *) (param_1 + 0x1c) + 1;
        sVar1 = *(short *) (param_1 + 0x1c);
        while (sVar1 < 0x40) {
            *(undefined * )((longlong) sVar1 + 0x1e + param_1) = 0;
            *(short *) (param_1 + 0x1c) = *(short *) (param_1 + 0x1c) + 1;
            sVar1 = *(short *) (param_1 + 0x1c);
        }
        FUN_1401c8ce0();
        sVar1 = *(short *) (param_1 + 0x1c);
        while (sVar1 < 0x38) {
            *(undefined * )((longlong) * (short *) (param_1 + 0x1c) + 0x1e + param_1) = 0;
            *(short *) (param_1 + 0x1c) = *(short *) (param_1 + 0x1c) + 1;
            sVar1 = *(short *) (param_1 + 0x1c);
        }
    }
    *(undefined * )(param_1 + 0x56) = *(undefined * )(param_1 + 0x1b);
    *(undefined * )(param_1 + 0x57) = *(undefined * )(param_1 + 0x1a);
    *(char *) (param_1 + 0x58) = (char) ((uint) * (undefined4 * )(param_1 + 0x18) >> 8);
    *(undefined * )(param_1 + 0x59) = *(undefined * )(param_1 + 0x18);
    *(undefined * )(param_1 + 0x5a) = *(undefined * )(param_1 + 0x17);
    *(undefined * )(param_1 + 0x5b) = *(undefined * )(param_1 + 0x16);
    *(char *) (param_1 + 0x5c) = (char) ((uint) * (undefined4 * )(param_1 + 0x14) >> 8);
    *(undefined * )(param_1 + 0x5d) = *(undefined * )(param_1 + 0x14);
    FUN_1401c8ce0(param_1);
    return;
}


undefined8
FUN_1401c9010(undefined8 param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4,
              longlong param_5) {
    undefined8 uVar1;
    ulonglong uVar2;
    undefined8 local_res8;
    undefined8 local_res10;

    uVar2 = 0;
    local_res8 = param_1;
    local_res10 = param_2;
    do {
        uVar1 = FUN_1401a3210(local_res8, local_res10, &local_res8, &local_res10, 0, L"%0.2x",
                              *(undefined * )(uVar2 + param_5));
        if ((int) uVar1 < 0) {
            return uVar1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
    if (param_3 != (undefined8 *) 0x0) {
        *param_3 = local_res8;
    }
    if (param_4 != (undefined8 *) 0x0) {
        *param_4 = local_res10;
    }
    return 0;
}


undefined4 FUN_1401c90c0(undefined8 *param_1) {
    undefined8 *puVar1;
    undefined4 uVar2;

    puVar1 = param_1 + 1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    uVar2 = *(undefined4 * )(param_1 + 1);
    if (*(int *) puVar1 == 0) {
        *param_1 = &PTR_LAB_140b5f8e0;
        if ((HKEY) param_1[2] != (HKEY) 0x0) {
            RegCloseKey((HKEY) param_1[2]);
            param_1[2] = 0;
        }
        FUN_14018b900(param_1, 0);
        uVar2 = 0;
    }
    return uVar2;
}


uint FUN_1401c9110(longlong param_1, LPCWSTR param_2, short *param_3) {
    short sVar1;
    uint uVar2;
    longlong lVar3;

    if ((param_2 == (LPCWSTR) 0x0) || (param_3 == (short *) 0x0)) {
        uVar2 = 0x80070057;
    } else {
        if (*(HKEY * )(param_1 + 0x10) == (HKEY) 0x0) {
            return 0x80070006;
        }
        lVar3 = 0;
        sVar1 = *param_3;
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = param_3[lVar3];
        }
        uVar2 = RegSetValueExW(*(HKEY * )(param_1 + 0x10), param_2, 0, 1, (BYTE *) param_3, (int) lVar3 * 2);
        if (uVar2 == 0) {
            return 0;
        }
        if (0 < (int) uVar2) {
            return uVar2 & 0xffff | 0x80070000;
        }
    }
    return uVar2;
}


undefined8
FUN_1401c9200(longlong param_1, LPBYTE param_2, undefined8 param_3, LPCWSTR param_4, longlong param_5) {
    LSTATUS LVar1;
    undefined8 uVar2;
    DWORD local_res8[2];

    if (*(HKEY * )(param_1 + 0x10) == (HKEY) 0x0) {
        return 0x80004005;
    }
    if (param_2 != (LPBYTE) 0x0) {
        local_res8[0] = (int) param_3 * 2;
        LVar1 = RegQueryValueExW(*(HKEY * )(param_1 + 0x10), param_4, (LPDWORD) 0x0, (LPDWORD) 0x0, param_2,
                                 local_res8);
        if (LVar1 == 0) {
            return 0;
        }
        if (param_5 != 0) {
            uVar2 = FUN_14001b2d0(param_2, param_3);
            return uVar2;
        }
    }
    return 0x80070057;
}


undefined8 FUN_1401c92a0(longlong param_1, undefined4 *param_2, LPCWSTR param_3, undefined4 param_4) {
    LSTATUS LVar1;
    DWORD local_res8[2];

    if (*(HKEY * )(param_1 + 0x10) == (HKEY) 0x0) {
        return 0x80004005;
    }
    if (param_2 == (undefined4 *) 0x0) {
        return 0x80070057;
    }
    local_res8[0] = 4;
    LVar1 = RegQueryValueExW(*(HKEY * )(param_1 + 0x10), param_3, (LPDWORD) 0x0, (LPDWORD) 0x0,
                             (LPBYTE) param_2, local_res8);
    if (LVar1 != 0) {
        *param_2 = param_4;
    }
    return 0;
}


uint FUN_1401c9320(longlong param_1, LPCWSTR param_2) {
    uint uVar1;

    if (param_2 == (LPCWSTR) 0x0) {
        return 0x80070057;
    }
    if (*(HKEY * )(param_1 + 0x10) == (HKEY) 0x0) {
        return 0x80070006;
    }
    uVar1 = RegDeleteValueW(*(HKEY * )(param_1 + 0x10), param_2);
    if (uVar1 == 0) {
        uVar1 = 0;
    } else if (0 < (int) uVar1) {
        return uVar1 & 0xffff | 0x80070000;
    }
    return uVar1;
}


uint FUN_1401c9370(longlong param_1, LPCWSTR param_2, undefined8 *param_3) {
    uint uVar1;
    undefined8 *puVar2;
    HKEY local_res18[2];

    if (param_3 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    uVar1 = RegOpenKeyExW(*(HKEY * )(param_1 + 0x10), param_2, 0, 0xf003f, local_res18);
    if (uVar1 == 0) {
        puVar2 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar2 != (undefined8 *) 0x0) {
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = local_res18[0];
            *puVar2 = &PTR_LAB_140b5f8e0;
            *param_3 = puVar2;
            return 0;
        }
        *param_3 = 0;
        uVar1 = 0;
    } else {
        *param_3 = 0;
        if (0 < (int) uVar1) {
            return uVar1 & 0xffff | 0x80070000;
        }
    }
    return uVar1;
}


uint FUN_1401c94c0(undefined8 *param_1) {
    uint uVar1;
    undefined8 *puVar2;
    wchar_t *pwVar3;
    LPCWSTR local_res10;
    HKEY local_res18;

    if ((DAT_140c63788 == 0) ||
        (pwVar3 = *(wchar_t **) (DAT_140c63788 + 0x1320), pwVar3 == (wchar_t *) 0x0)) {
        pwVar3 = L"WildStar";
    }
    FUN_14018d540(&local_res10, L"SOFTWARE\\%s\\%s\\%s", L"NCSOFT", pwVar3, &DAT_140a44ab8);
    uVar1 = RegOpenKeyExW((HKEY) 0xffffffff80000001, local_res10, 0, 0xf003f, &local_res18);
    if (uVar1 == 0) {
        puVar2 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar2 == (undefined8 *) 0x0) {
            puVar2 = (undefined8 *) 0x0;
        } else {
            *(undefined4 * )(puVar2 + 1) = 1;
            puVar2[2] = local_res18;
            *puVar2 = &PTR_LAB_140b5f8e0;
        }
        *param_1 = puVar2;
        uVar1 = 0;
    } else {
        *param_1 = 0;
        if (0 < (int) uVar1) {
            uVar1 = uVar1 & 0xffff | 0x80070000;
        }
    }
    if (local_res10 != (LPCWSTR) 0x0) {
        (**(code * *)(*(longlong * )(local_res10 + -8) + 8))(local_res10 + -8);
    }
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 *FUN_1401c95b0(undefined2 *param_1, uint *param_2) {
    undefined auVar1[16];
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    undefined auVar6[16];
    undefined auVar7[16];
    undefined auVar8[16];

    uVar2 = *param_2 & 0x7fffffff;
    uVar3 = param_2[1] & 0x7fffffff;
    uVar4 = param_2[2] & 0x7fffffff;
    uVar5 = param_2[3] & 0x7fffffff;
    auVar1 = CONCAT412(-(uint)(uVar5 < 0x33800001),
                       CONCAT48(-(uint)(uVar4 < 0x33800001),
                                CONCAT44(-(uint)(uVar3 < 0x33800001), -(uint)(uVar2 < 0x33800001))));
    auVar6 = CONCAT412(-(uint)(0x47ffefff < uVar5),
                       CONCAT48(-(uint)(0x47ffefff < uVar4),
                                CONCAT44(-(uint)(0x47ffefff < uVar3), -(uint)(0x47ffefff < uVar2))));
    auVar8 = ~auVar1 & CONCAT412(-(uint)(uVar5 < 0x387ff000),
                                 CONCAT48(-(uint)(uVar4 < 0x387ff000),
                                          CONCAT44(-(uint)(uVar3 < 0x387ff000),
                                                   -(uint)(uVar2 < 0x387ff000))));
    auVar7 = CONCAT412(uVar5 + 0xc8000000,
                       CONCAT48(uVar4 + 0xc8000000, CONCAT44(uVar3 + 0xc8000000, uVar2 + 0xc8000000)));
    if ((ushort)((ushort)(SUB161(auVar8 >> 7, 0) & 1) | (ushort)(SUB161(auVar8 >> 0xf, 0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17, 0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f, 0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27, 0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f, 0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37, 0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f, 0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47, 0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f, 0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57, 0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f, 0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67, 0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f, 0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77, 0) & 1) << 0xe |
                 (ushort) SUB161(auVar8 >> 0x7f, 0) << 0xf) != 0) {
        auVar7 = (CONCAT412(param_2[3],
                            CONCAT48(param_2[2],
                                     CONCAT44((param_2[1] & 0x7fffff | 0x800000) >>
                                                                                 (0x71U - (char) (uVar3 >> 0x17) &
                                                                                  0x1f),
                                              (*param_2 & 0x7fffff | 0x800000) >>
                                                                               (0x71U - (char) (uVar2 >> 0x17) &
                                                                                0x1f)))) &
                  (undefined[16]) 0xffffffffffffffff | (undefined[16]) 0x80000000800000) & auVar8 |
                 ~auVar8 & auVar7;
    }
    auVar1 = ~auVar1 & (~auVar6 & CONCAT412(SUB164(auVar7 >> 0x60, 0) + 0x1000U >> 0xd,
                                            CONCAT48(SUB164(auVar7 >> 0x40, 0) + 0x1000U >> 0xd,
                                                     CONCAT44(SUB164(auVar7 >> 0x20, 0) + 0x1000U >>
                                                                                                  0xd,
                                                              SUB164(auVar7, 0) + 0x1000U >> 0xd)))
                        | _DAT_140b7aa20 & auVar6) |
             CONCAT412((param_2[3] & 0x80000000) >> 0x10,
                       CONCAT48((param_2[2] & 0x80000000) >> 0x10,
                                CONCAT44((param_2[1] & 0x80000000) >> 0x10,
                                         (*param_2 & 0x80000000) >> 0x10)));
    *param_1 = SUB162(auVar1, 0);
    param_1[1] = SUB162(auVar1 >> 0x20, 0);
    return param_1;
}


ushort *FUN_1401c96d0(undefined8 param_1, uint param_2, ushort *param_3) {
    uint uVar1;
    ushort uVar2;

    uVar1 = param_2 & 0x7fffffff;
    uVar2 = (ushort)(param_2 >> 0x10) & 0x8000;
    if (uVar1 < 0x33800000) {
        *param_3 = uVar2;
        return param_3;
    }
    if (uVar1 < 0x387ff000) {
        *param_3 = (ushort)(((param_2 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar1 >> 0x17) & 0x1f))
                            + 0x1000 >> 0xd) | uVar2;
        return param_3;
    }
    if (uVar1 < 0x47fff000) {
        *param_3 = (ushort)(uVar1 + 0xc8001000 >> 0xd) | uVar2;
        return param_3;
    }
    *param_3 = uVar2 | 0x43ff;
    return param_3;
}


uint FUN_1401c9770(ushort *param_1) {
    ushort uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;

    uVar1 = *param_1;
    uVar2 = (uint) uVar1;
    uVar4 = (uVar2 & 0xffff8000) << 0x10;
    if ((uVar1 & 0x7c00) != 0) {
        return ((uVar2 & 0xffff7fff) + 0x1c000) * 0x2000 | uVar4;
    }
    if ((uVar1 & 0x3ff) == 0) {
        return uVar2 & 0xffff7fff | uVar4;
    }
    iVar3 = 0x71;
    for (uVar2 = (uVar2 & 0x3ff) << 0xd; uVar2 < 0x800000; uVar2 = uVar2 * 2) {
        iVar3 = iVar3 + -1;
    }
    return uVar2 & 0x7fffff | iVar3 << 0x17 | uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 *FUN_1401c9800(undefined2 *param_1, uint *param_2) {
    undefined auVar1[16];
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    undefined auVar6[16];
    undefined auVar7[16];
    undefined auVar8[16];

    uVar2 = *param_2 & 0x7fffffff;
    uVar3 = param_2[1] & 0x7fffffff;
    uVar4 = param_2[2] & 0x7fffffff;
    uVar5 = param_2[3] & 0x7fffffff;
    auVar1 = CONCAT412(-(uint)(uVar5 < 0x33800001),
                       CONCAT48(-(uint)(uVar4 < 0x33800001),
                                CONCAT44(-(uint)(uVar3 < 0x33800001), -(uint)(uVar2 < 0x33800001))));
    auVar6 = CONCAT412(-(uint)(0x47ffefff < uVar5),
                       CONCAT48(-(uint)(0x47ffefff < uVar4),
                                CONCAT44(-(uint)(0x47ffefff < uVar3), -(uint)(0x47ffefff < uVar2))));
    auVar8 = ~auVar1 & CONCAT412(-(uint)(uVar5 < 0x387ff000),
                                 CONCAT48(-(uint)(uVar4 < 0x387ff000),
                                          CONCAT44(-(uint)(uVar3 < 0x387ff000),
                                                   -(uint)(uVar2 < 0x387ff000))));
    auVar7 = CONCAT412(uVar5 + 0xc8000000,
                       CONCAT48(uVar4 + 0xc8000000, CONCAT44(uVar3 + 0xc8000000, uVar2 + 0xc8000000)));
    if ((ushort)((ushort)(SUB161(auVar8 >> 7, 0) & 1) | (ushort)(SUB161(auVar8 >> 0xf, 0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17, 0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f, 0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27, 0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f, 0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37, 0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f, 0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47, 0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f, 0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57, 0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f, 0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67, 0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f, 0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77, 0) & 1) << 0xe |
                 (ushort) SUB161(auVar8 >> 0x7f, 0) << 0xf) != 0) {
        auVar7 = (CONCAT412(param_2[3],
                            CONCAT48((param_2[2] & 0x7fffff | 0x800000) >>
                                                                        (0x71U - (char) (uVar4 >> 0x17) & 0x1f),
                                     CONCAT44((param_2[1] & 0x7fffff | 0x800000) >>
                                                                                 (0x71U - (char) (uVar3 >> 0x17) &
                                                                                  0x1f),
                                              (*param_2 & 0x7fffff | 0x800000) >>
                                                                               (0x71U - (char) (uVar2 >> 0x17) &
                                                                                0x1f)))) &
                  (undefined[16]) 0xffffffffffffffff | (undefined[16]) 0x80000000000000) & auVar8 |
                 ~auVar8 & auVar7;
    }
    auVar1 = ~auVar1 & (~auVar6 & CONCAT412(SUB164(auVar7 >> 0x60, 0) + 0x1000U >> 0xd,
                                            CONCAT48(SUB164(auVar7 >> 0x40, 0) + 0x1000U >> 0xd,
                                                     CONCAT44(SUB164(auVar7 >> 0x20, 0) + 0x1000U >>
                                                                                                  0xd,
                                                              SUB164(auVar7, 0) + 0x1000U >> 0xd)))
                        | _DAT_140b7aa20 & auVar6) |
             CONCAT412((param_2[3] & 0x80000000) >> 0x10,
                       CONCAT48((param_2[2] & 0x80000000) >> 0x10,
                                CONCAT44((param_2[1] & 0x80000000) >> 0x10,
                                         (*param_2 & 0x80000000) >> 0x10)));
    *param_1 = SUB162(auVar1, 0);
    param_1[1] = SUB162(auVar1 >> 0x20, 0);
    param_1[2] = SUB162(auVar1 >> 0x40, 0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 *FUN_1401c9940(undefined2 *param_1) {
    undefined auVar1[16];
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    undefined auVar6[16];
    undefined auVar7[16];
    undefined auVar8[16];

    uVar2 = _DAT_140dc0df0 & 0x7fffffff;
    uVar3 = uRam0000000140dc0df4 & 0x7fffffff;
    uVar4 = uRam0000000140dc0df8 & 0x7fffffff;
    uVar5 = uRam0000000140dc0dfc & 0x7fffffff;
    auVar1 = CONCAT412(-(uint)(uVar5 < 0x33800001),
                       CONCAT48(-(uint)(uVar4 < 0x33800001),
                                CONCAT44(-(uint)(uVar3 < 0x33800001), -(uint)(uVar2 < 0x33800001))));
    auVar6 = CONCAT412(-(uint)(0x47ffefff < uVar5),
                       CONCAT48(-(uint)(0x47ffefff < uVar4),
                                CONCAT44(-(uint)(0x47ffefff < uVar3), -(uint)(0x47ffefff < uVar2))));
    auVar8 = ~auVar1 & CONCAT412(-(uint)(uVar5 < 0x387ff000),
                                 CONCAT48(-(uint)(uVar4 < 0x387ff000),
                                          CONCAT44(-(uint)(uVar3 < 0x387ff000),
                                                   -(uint)(uVar2 < 0x387ff000))));
    auVar7 = CONCAT412(uVar5 + 0xc8000000,
                       CONCAT48(uVar4 + 0xc8000000, CONCAT44(uVar3 + 0xc8000000, uVar2 + 0xc8000000)));
    if ((ushort)((ushort)(SUB161(auVar8 >> 7, 0) & 1) | (ushort)(SUB161(auVar8 >> 0xf, 0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17, 0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f, 0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27, 0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f, 0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37, 0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f, 0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47, 0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f, 0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57, 0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f, 0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67, 0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f, 0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77, 0) & 1) << 0xe |
                 (ushort) SUB161(auVar8 >> 0x7f, 0) << 0xf) != 0) {
        auVar7 = CONCAT412((uRam0000000140dc0dfc & 0x7fffff | 0x800000) >>
                                                                        (0x71U - (char) (uVar5 >> 0x17) & 0x1f),
                           CONCAT48((uRam0000000140dc0df8 & 0x7fffff | 0x800000) >>
                                                                                 (0x71U - (char) (uVar4 >> 0x17) &
                                                                                  0x1f),
                                    CONCAT44((uRam0000000140dc0df4 & 0x7fffff | 0x800000) >>
                                                                                          (0x71U -
                                                                                           (char) (uVar3 >> 0x17) &
                                                                                           0x1f),
                                             (_DAT_140dc0df0 & 0x7fffff | 0x800000) >>
                                                                                    (0x71U - (char) (uVar2 >> 0x17) &
                                                                                     0x1f)))) & auVar8 |
                 ~auVar8 & auVar7;
    }
    auVar1 = ~auVar1 & (~auVar6 & CONCAT412(SUB164(auVar7 >> 0x60, 0) + 0x1000U >> 0xd,
                                            CONCAT48(SUB164(auVar7 >> 0x40, 0) + 0x1000U >> 0xd,
                                                     CONCAT44(SUB164(auVar7 >> 0x20, 0) + 0x1000U >>
                                                                                                  0xd,
                                                              SUB164(auVar7, 0) + 0x1000U >> 0xd)))
                        | _DAT_140b7aa20 & auVar6) |
             CONCAT412((uRam0000000140dc0dfc & 0x80000000) >> 0x10,
                       CONCAT48((uRam0000000140dc0df8 & 0x80000000) >> 0x10,
                                CONCAT44((uRam0000000140dc0df4 & 0x80000000) >> 0x10,
                                         (_DAT_140dc0df0 & 0x80000000) >> 0x10)));
    *param_1 = SUB162(auVar1, 0);
    param_1[1] = SUB162(auVar1 >> 0x20, 0);
    param_1[2] = SUB162(auVar1 >> 0x40, 0);
    param_1[3] = SUB162(auVar1 >> 0x60, 0);
    return param_1;
}


undefined8 FUN_1401c9aa0(longlong param_1, longlong param_2, float *param_3, undefined8 *param_4) {
    float *pfVar1;
    undefined8 *puVar2;
    float *pfVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float local_res20;
    float fStackX36;

    uVar4 = 0;
    param_1 = param_1 - (longlong) param_3;
    pfVar1 = (float *) ((longlong) param_4 + 4);
    param_2 = param_2 - (longlong) param_3;
    *param_4 = 0x7f7fffff00000000;
    while (true) {
        fVar5 = (*(float *) (param_1 + (longlong) param_3) - *(float *) (param_2 + (longlong) param_3)) *
                (1.0 / *param_3);
        fVar7 = (*(float *) (param_1 + 0x10 + (longlong) param_3) -
                 *(float *) (param_2 + (longlong) param_3)) * (1.0 / *param_3);
        local_res20 = fVar5;
        fStackX36 = fVar7;
        fVar6 = fVar5;
        if (fVar7 < fVar5) {
            local_res20 = fVar7;
            fStackX36 = fVar5;
            fVar6 = fVar7;
            fVar7 = fVar5;
        }
        puVar2 = (undefined8 * ) & local_res20;
        if (fVar6 < *(float *) param_4) {
            puVar2 = param_4;
        }
        pfVar3 = &fStackX36;
        if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) {
            pfVar3 = pfVar1;
        }
        *param_4 = CONCAT44(*pfVar3, *(undefined4 *) puVar2);
        if (*pfVar1 < *(float *) param_4) break;
        uVar4 = uVar4 + 1;
        param_3 = param_3 + 1;
        if (2 < uVar4) {
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_1401c9b90(longlong param_1, float *param_2, float *param_3, float *param_4) {
    float *pfVar1;
    float fVar2;
    float *pfVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    float fVar7;
    float fVar8;
    float local_28[4];
    undefined local_18[16];

    uVar6 = 0;
    fVar8 = (float) (DAT_140c3e928 ^ 0x80000000);
    local_18 = CONCAT412(param_3[3] - param_2[3],
                         CONCAT48(param_3[2] - param_2[2],
                                  CONCAT44(param_3[1] - param_2[1], *param_3 - *param_2)));
    lVar4 = (longlong) local_28 - (longlong) param_2;
    pfVar3 = param_2;
    uVar5 = uVar6;
    do {
        fVar7 = *pfVar3;
        fVar2 = *(float *) ((param_1 - (longlong) param_2) + (longlong) pfVar3);
        if (fVar2 <= fVar7) {
            fVar2 = *(float *) ((param_1 - (longlong) param_2) + 0x10 + (longlong) pfVar3);
            if (fVar7 <= fVar2) {
                fVar7 = 0.0;
                *(undefined4 * )(lVar4 + (longlong) pfVar3) = 0;
            } else {
                if (fVar2 < *(float *) (((longlong) param_3 - (longlong) param_2) + (longlong) pfVar3)) {
                    return 0;
                }
                fVar7 = (fVar2 - fVar7) / *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar3);
                *(float *) (lVar4 + (longlong) pfVar3) = fVar7;
            }
        } else {
            pfVar1 = (float *) (((longlong) param_3 - (longlong) param_2) + (longlong) pfVar3);
            if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
                return 0;
            }
            fVar7 = (fVar2 - fVar7) / *(float *) (local_18 + -(longlong) param_2 + (longlong) pfVar3);
            *(float *) (lVar4 + (longlong) pfVar3) = fVar7;
        }
        if (fVar8 < fVar7) {
            fVar8 = fVar7;
        }
        uVar5 = uVar5 + 1;
        pfVar3 = pfVar3 + 1;
    } while (uVar5 < 3);
    while ((pfVar3 = (float *) ((longlong) local_28 + uVar6), fVar8 < *pfVar3 || fVar8 == *pfVar3 ||
                                                              ((fVar7 = fVar8 * *(float *) (local_18 + uVar6) +
                                                                        *(float *) (uVar6 + (longlong) param_2),
                                                                      *(float *) (uVar6 + param_1) <= fVar7 &&
                                                                      (pfVar3 = (float *) (
                                                                              (param_1 - (longlong) local_28) + 0x10 +
                                                                              (longlong) pfVar3),
                                                                              fVar7 < *pfVar3 || fVar7 == *pfVar3))))) {
        uVar6 = uVar6 + 4;
        if (0xb < uVar6) {
            if (param_4 != (float *) 0x0) {
                *param_4 = fVar8;
            }
            return 1;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401c9ce0(float *param_1, float *param_2, float *param_3, float *param_4) {
    undefined auVar1[12];
    undefined auVar2[12];
    undefined auVar3[12];
    ulonglong uVar4;
    ulonglong uVar5;
    float fVar6;
    int iVar7;
    undefined auVar8[16];
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
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    undefined4 uVar26;
    float fVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    float fVar30;
    undefined4 uVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    undefined4 uVar35;
    undefined4 uVar36;
    undefined4 uVar37;
    undefined4 uVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float local_res8[2];
    undefined local_198[16];
    undefined local_188[12];
    float fStack380;
    undefined local_178[8];
    float fStack368;
    undefined local_168[16];
    undefined local_158[8];
    float fStack336;
    undefined local_148[16];
    undefined local_138[8];
    float fStack304;
    float fStack300;
    undefined local_128[8];
    float fStack288;
    undefined4 uStack284;
    undefined local_118[8];
    float fStack272;
    float fStack268;
    undefined local_108[16];
    undefined local_f8[8];
    float fStack240;
    undefined local_e8[8];
    float fStack224;
    undefined local_d8[8];
    float fStack208;
    undefined4 uStack204;
    float local_c8;
    float fStack196;
    float fStack192;
    float fStack188;
    float local_b8;
    float fStack180;
    float fStack176;
    float fStack172;

    fVar27 = *param_3;
    fVar34 = *param_1;
    if (((((fVar34 <= fVar27) && (fVar27 < param_1[4] || fVar27 == param_1[4])) &&
          (fVar27 = param_3[1], param_1[1] <= fVar27)) &&
         (((fVar27 < param_1[5] || fVar27 == param_1[5] && (fVar27 = param_3[2], param_1[2] <= fVar27))
           && (fVar27 < param_1[6] || fVar27 == param_1[6])))) ||
        (((fVar27 = *param_4, fVar34 <= fVar27 && (fVar27 < param_1[4] || fVar27 == param_1[4])) &&
          ((fVar27 = param_4[1], param_1[1] <= fVar27 &&
                                 (((fVar27 < param_1[5] ||
                                    fVar27 == param_1[5] && (fVar27 = param_4[2], param_1[2] <= fVar27)
                                   ) && (fVar27 < param_1[6] || fVar27 == param_1[6])))))))) {
        return 1;
    }
    fVar27 = param_1[1];
    fVar24 = 0.0;
    fVar32 = param_1[6];
    fVar33 = param_1[5];
    fVar42 = param_1[2];
    _local_e8 = ZEXT1216(CONCAT48(fVar32, CONCAT44(fVar27, fVar34)));
    auVar3 = CONCAT48(fVar42, CONCAT44(fVar33, fVar34)) & (undefined[12]) 0xffffffffffffffff;
    _local_f8 = ZEXT1216(auVar3);
    fVar12 = fVar34 - fVar34;
    fVar14 = fVar33 - fVar27;
    auVar2 = CONCAT48(fVar42, CONCAT44(fVar27, fVar34)) & (undefined[12]) 0xffffffffffffffff;
    _local_128 = ZEXT1216(auVar2);
    fVar17 = fVar14 * 0.0 - (fVar27 - fVar27) * (fVar42 - fVar42);
    fVar19 = (fVar34 - fVar34) * 0.0 - fVar12 * 0.0;
    fVar21 = (fVar27 - fVar27) * fVar12 - (fVar34 - fVar34) * fVar14;
    fVar9 = fVar19 * fVar19;
    uVar4 = SUB128(CONCAT84(SUB168((ZEXT1216(CONCAT48(fVar14, CONCAT44(fVar12, fVar42 - fVar42)) >> 0x20
    ) << 0x20) >> 0x40, 0), fVar9), 0);
    uVar5 = uVar4 & 0xffffffff;
    fVar12 = fVar17 * fVar17 + (float) uVar5 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar9, CONCAT48(fVar9, uVar4 << 0x20 | uVar5)),
                     ZEXT1216(CONCAT48(fVar21 * fVar21, CONCAT44(fVar9, fVar12))));
    fVar9 = SUB164(auVar8, 0);
    fVar9 = (3.0 - fVar12 * fVar9 * fVar9) * 0.5 * fVar9;
    if (fVar9 <= 0.0) {
        fVar9 = 0.0;
    }
    _local_118 = CONCAT48(fVar9 * fVar21, CONCAT44(fVar9 * fVar19, fVar9 * fVar17));
    fVar12 = *param_2;
    fVar14 = param_2[1];
    fVar21 = param_2[2];
    fVar30 = param_2[3];
    fVar39 = *param_3;
    fVar40 = param_3[1];
    fVar23 = param_3[2];
    fVar6 = param_3[3];
    fVar25 = 1e-05;
    local_c8 = fVar12 - fVar39;
    fStack196 = fVar14 - fVar40;
    fStack192 = fVar21 - fVar23;
    fStack188 = fVar30 - fVar6;
    _local_118 = CONCAT412(fVar9 * fVar17 * fVar34 + fVar9 * fVar19 * fVar27 + 0.0, _local_118) ^
                 (undefined[16]) 0x8000000000000000;
    fVar9 = local_c8 * local_118._0_4_ + fStack196 * local_118._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar9 & 0x7fffffff)) &&
         (fVar9 = (local_118._0_4_ * fVar12 + local_118._4_4_ * fVar14 + 0.0 + fStack268) / fVar9,
                 0.0 <= fVar9)) && (fVar9 <= 1.0)) {
        fVar17 = (fVar40 - fVar14) * fVar9 + fVar14;
        local_res8[0] = fVar9;
        if (((fVar27 <= fVar17) && (fVar17 <= fVar33)) &&
            ((fStack336 = SUB124((ZEXT812(CONCAT44((fVar23 - fVar21) * fVar9 + fVar21, fVar17)) << 0x20)
                                         >> 0x40, 0), fVar42 <= fStack336 && (fStack336 <= fVar32)))) {
            return 1;
        }
    }
    fVar9 = *param_4;
    fVar17 = param_4[1];
    fVar19 = param_4[2];
    fVar41 = param_4[3];
    local_b8 = fVar12 - fVar9;
    fStack180 = fVar14 - fVar17;
    fStack176 = fVar21 - fVar19;
    fStack172 = fVar30 - fVar41;
    fVar15 = local_b8 * local_118._0_4_ + fStack180 * local_118._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar15 & 0x7fffffff)) &&
         (fVar15 = (fVar12 * local_118._0_4_ + fVar14 * local_118._4_4_ + 0.0 + fStack268) / fVar15,
                 0.0 <= fVar15)) && (fVar15 <= 1.0)) {
        fVar10 = (fVar17 - fVar14) * fVar15 + fVar14;
        local_res8[0] = fVar15;
        if (((fVar27 <= fVar10) && (fVar10 <= fVar33)) &&
            ((fStack336 = SUB124((ZEXT812(CONCAT44((fVar19 - fVar21) * fVar15 + fVar21, fVar10)) << 0x20)
                                         >> 0x40, 0), fVar42 <= fStack336 && (fStack336 <= fVar32)))) {
            return 1;
        }
    }
    fVar15 = fVar39 - fVar9;
    fVar10 = fVar40 - fVar17;
    local_168 = CONCAT412(fVar6 - fVar41, CONCAT48(fVar23 - fVar19, CONCAT44(fVar10, fVar15)));
    fVar16 = fVar15 * local_118._0_4_ + fVar10 * local_118._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar16 & 0x7fffffff)) &&
         (fVar16 = (fVar39 * local_118._0_4_ + fVar40 * local_118._4_4_ + 0.0 + fStack268) / fVar16,
                 0.0 <= fVar16)) && (fVar16 <= 1.0)) {
        fVar11 = (fVar17 - fVar40) * fVar16 + fVar40;
        local_res8[0] = fVar16;
        if ((((fVar27 <= fVar11) && (fVar11 <= fVar33)) &&
             (fStack336 = SUB124((ZEXT812(CONCAT44((fVar19 - fVar23) * fVar16 + fVar23, fVar11)) << 0x20)
                                         >> 0x40, 0), fVar42 <= fStack336)) && (fStack336 <= fVar32)) {
            return 1;
        }
    }
    fVar16 = param_1[4];
    _local_158 = ZEXT1216(CONCAT48(fVar32, CONCAT44(fVar27, fVar16)));
    auVar1 = CONCAT48(fVar42, CONCAT44(fVar33, fVar16)) & (undefined[12]) 0xffffffffffffffff;
    _local_118 = ZEXT1216(auVar1);
    local_118._0_4_ = SUB124(auVar1, 0);
    local_118._4_4_ = SUB164(_local_118 >> 0x20, 0);
    fStack272 = SUB164(_local_118 >> 0x40, 0);
    auVar1 = CONCAT48(fVar42, CONCAT44(fVar27, fVar16)) & (undefined[12]) 0xffffffffffffffff;
    _local_d8 = ZEXT1216(auVar1);
    fVar18 = (local_118._4_4_ - fVar27) * 0.0 - (fVar27 - fVar27) * (fStack272 - fVar42);
    fVar20 = (fVar16 - fVar16) * 0.0 - (local_118._0_4_ - fVar16) * 0.0;
    fVar22 = (fVar27 - fVar27) * (local_118._0_4_ - fVar16) -
             (fVar16 - fVar16) * (local_118._4_4_ - fVar27);
    fVar11 = fVar20 * fVar20;
    fVar13 = fVar18 * fVar18 + fVar11 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar11, CONCAT48(fVar11, CONCAT44(fVar11, fVar11))),
                     ZEXT1216(CONCAT48(fVar22 * fVar22, CONCAT44(fVar11, fVar13))));
    fVar11 = SUB164(auVar8, 0);
    fVar11 = (3.0 - fVar13 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    local_188 = CONCAT48(fVar11 * fVar22, CONCAT44(fVar11 * fVar20, fVar11 * fVar18));
    local_d8._0_4_ = SUB124(auVar1, 0);
    local_d8._4_4_ = SUB164(_local_d8 >> 0x20, 0);
    _local_188 = CONCAT412(fVar11 * fVar18 * local_d8._0_4_ + fVar11 * fVar20 * local_d8._4_4_ + 0.0,
                           local_188) ^ (undefined[16]) 0x8000000000000000;
    fVar11 = local_c8 * local_188._0_4_ + fStack196 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar12 * local_188._0_4_ + fVar14 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar40 - fVar14) * fVar11 + fVar14;
        local_res8[0] = fVar11;
        if (((fVar27 <= fVar13) && (fVar13 <= fVar33)) &&
            ((fStack368 = SUB124((ZEXT812(CONCAT44((fVar23 - fVar21) * fVar11 + fVar21, fVar13)) << 0x20)
                                         >> 0x40, 0), fVar42 <= fStack368 && (fStack368 <= fVar32)))) {
            return 1;
        }
    }
    fVar11 = local_b8 * local_188._0_4_ + fStack180 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar12 * local_188._0_4_ + fVar14 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar17 - fVar14) * fVar11 + fVar14;
        local_res8[0] = fVar11;
        if (((fVar27 <= fVar13) && (fVar13 <= fVar33)) &&
            ((fStack368 = SUB124((ZEXT812(CONCAT44((fVar19 - fVar21) * fVar11 + fVar21, fVar13)) << 0x20)
                                         >> 0x40, 0), fVar42 <= fStack368 && (fStack368 <= fVar32)))) {
            return 1;
        }
    }
    fVar11 = fVar15 * local_188._0_4_ + fVar10 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar39 * local_188._0_4_ + fVar40 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar17 - fVar40) * fVar11 + fVar40;
        local_res8[0] = fVar11;
        if ((((fVar27 <= fVar13) && (fVar13 <= fVar33)) &&
             (fStack368 = SUB124((ZEXT812(CONCAT44((fVar19 - fVar23) * fVar11 + fVar23, fVar13)) << 0x20)
                                         >> 0x40, 0), fVar42 <= fStack368)) && (fStack368 <= fVar32)) {
            return 1;
        }
    }
    local_e8._4_4_ = SUB164(_local_e8 >> 0x20, 0);
    fStack208 = SUB164(_local_d8 >> 0x40, 0);
    local_128._0_4_ = SUB124(auVar2, 0);
    local_128._4_4_ = SUB164(_local_128 >> 0x20, 0);
    fStack288 = SUB164(_local_128 >> 0x40, 0);
    fVar18 = (local_d8._4_4_ - local_128._4_4_) * 0.0 -
             (local_e8._4_4_ - local_128._4_4_) * (fStack208 - fStack288);
    fVar20 = (fVar34 - local_128._0_4_) * 0.0 - (local_d8._0_4_ - local_128._0_4_) * 0.0;
    fVar22 = (local_e8._4_4_ - local_128._4_4_) * (local_d8._0_4_ - local_128._0_4_) -
             (fVar34 - local_128._0_4_) * (local_d8._4_4_ - local_128._4_4_);
    fVar11 = fVar20 * fVar20;
    fVar13 = fVar18 * fVar18 + fVar11 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar11, CONCAT48(fVar11, CONCAT44(fVar11, fVar11))),
                     ZEXT1216(CONCAT48(fVar22 * fVar22, CONCAT44(fVar11, fVar13))));
    fVar11 = SUB164(auVar8, 0);
    fVar11 = (3.0 - fVar13 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    local_188 = CONCAT48(fVar11 * fVar22, CONCAT44(fVar11 * fVar20, fVar11 * fVar18));
    _local_188 = CONCAT412(fVar11 * fVar18 * local_128._0_4_ + fVar11 * fVar20 * local_128._4_4_ + 0.0, local_188) ^
                 (undefined[16]) 0x8000000000000000;
    fVar11 = local_c8 * local_188._0_4_ + fStack196 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (local_188._0_4_ * fVar12 + local_188._4_4_ * fVar14 + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar39 - fVar12) * fVar11 + fVar12;
        fVar18 = (fVar23 - fVar21) * fVar11 + fVar21;
        local_res8[0] = fVar11;
        if (((fVar34 <= fVar13) && (fVar13 <= fVar16)) && ((fVar42 <= fVar18 && (fVar18 <= fVar32)))) {
            return 1;
        }
    }
    fVar11 = local_b8 * local_188._0_4_ + fStack180 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (local_188._0_4_ * fVar12 + local_188._4_4_ * fVar14 + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar9 - fVar12) * fVar11 + fVar12;
        fVar18 = (fVar19 - fVar21) * fVar11 + fVar21;
        local_res8[0] = fVar11;
        if (((fVar34 <= fVar13) && (fVar13 <= fVar16)) && ((fVar42 <= fVar18 && (fVar18 <= fVar32)))) {
            return 1;
        }
    }
    fVar11 = fVar15 * local_188._0_4_ + fVar10 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (local_188._0_4_ * fVar39 + local_188._4_4_ * fVar40 + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar9 - fVar39) * fVar11 + fVar39;
        fVar18 = (fVar19 - fVar23) * fVar11 + fVar23;
        local_res8[0] = fVar11;
        if ((((fVar34 <= fVar13) && (fVar13 <= fVar16)) && (fVar42 <= fVar18)) && (fVar18 <= fVar32)) {
            return 1;
        }
    }
    _local_178 = ZEXT1216(CONCAT48(fVar32, CONCAT44(fVar33, fVar34)));
    local_f8._0_4_ = SUB124(auVar3, 0);
    local_f8._4_4_ = SUB164(_local_f8 >> 0x20, 0);
    fStack240 = SUB164(_local_f8 >> 0x40, 0);
    fVar18 = (local_118._4_4_ - local_f8._4_4_) * 0.0 -
             (fVar33 - local_f8._4_4_) * (fStack272 - fStack240);
    fVar20 = (fVar34 - local_f8._0_4_) * 0.0 - (local_118._0_4_ - local_f8._0_4_) * 0.0;
    fVar22 = (fVar33 - local_f8._4_4_) * (local_118._0_4_ - local_f8._0_4_) -
             (fVar34 - local_f8._0_4_) * (local_118._4_4_ - local_f8._4_4_);
    fVar11 = fVar20 * fVar20;
    fVar13 = fVar18 * fVar18 + fVar11 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar11, CONCAT48(fVar11, CONCAT44(fVar11, fVar11))),
                     ZEXT1216(CONCAT48(fVar22 * fVar22, CONCAT44(fVar11, fVar13))));
    fVar11 = SUB164(auVar8, 0);
    fVar11 = (3.0 - fVar13 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    local_188 = CONCAT48(fVar11 * fVar22, CONCAT44(fVar11 * fVar20, fVar11 * fVar18));
    _local_188 = CONCAT412(fVar11 * fVar18 * local_f8._0_4_ + fVar11 * fVar20 * local_f8._4_4_ + 0.0,
                           local_188) ^ (undefined[16]) 0x8000000000000000;
    fVar11 = local_c8 * local_188._0_4_ + fStack196 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar12 * local_188._0_4_ + fVar14 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar39 - fVar12) * fVar11 + fVar12;
        fVar18 = (fVar23 - fVar21) * fVar11 + fVar21;
        local_res8[0] = fVar11;
        if (((fVar34 <= fVar13) && (fVar13 <= fVar16)) && ((fVar42 <= fVar18 && (fVar18 <= fVar32)))) {
            return 1;
        }
    }
    fVar11 = local_b8 * local_188._0_4_ + fStack180 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar12 * local_188._0_4_ + fVar14 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar9 - fVar12) * fVar11 + fVar12;
        fVar18 = (fVar19 - fVar21) * fVar11 + fVar21;
        local_res8[0] = fVar11;
        if (((fVar34 <= fVar13) && (fVar13 <= fVar16)) && ((fVar42 <= fVar18 && (fVar18 <= fVar32)))) {
            return 1;
        }
    }
    fVar11 = fVar15 * local_188._0_4_ + fVar10 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar39 * local_188._0_4_ + fVar40 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar9 - fVar39) * fVar11 + fVar39;
        fVar18 = (fVar19 - fVar23) * fVar11 + fVar23;
        local_res8[0] = fVar11;
        if ((((fVar34 <= fVar13) && (fVar13 <= fVar16)) && (fVar42 <= fVar18)) && (fVar18 <= fVar32)) {
            return 1;
        }
    }
    local_158._4_4_ = SUB164(_local_158 >> 0x20, 0);
    local_178._4_4_ = SUB164(_local_178 >> 0x20, 0);
    fStack368 = SUB164(_local_178 >> 0x40, 0);
    fStack224 = SUB164(_local_e8 >> 0x40, 0);
    fVar18 = (local_178._4_4_ - local_e8._4_4_) * 0.0 -
             (local_158._4_4_ - local_e8._4_4_) * (fStack368 - fStack224);
    fVar20 = (fVar16 - fVar34) * 0.0 - (fVar34 - fVar34) * 0.0;
    fVar22 = (local_158._4_4_ - local_e8._4_4_) * (fVar34 - fVar34) -
             (fVar16 - fVar34) * (local_178._4_4_ - local_e8._4_4_);
    fVar11 = fVar20 * fVar20;
    fVar13 = fVar18 * fVar18 + fVar11 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar11, CONCAT48(fVar11, CONCAT44(fVar11, fVar11))),
                     ZEXT1216(CONCAT48(fVar22 * fVar22, CONCAT44(fVar11, fVar13))));
    fVar11 = SUB164(auVar8, 0);
    fVar11 = (3.0 - fVar13 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    local_188 = CONCAT48(fVar11 * fVar22, CONCAT44(fVar11 * fVar20, fVar11 * fVar18));
    _local_188 = CONCAT412(fVar11 * fVar18 * fVar34 + fVar11 * fVar20 * local_e8._4_4_ + 0.0, local_188
    ) ^ (undefined[16]) 0x8000000000000000;
    fVar11 = local_c8 * local_188._0_4_ + fStack196 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar12 * local_188._0_4_ + fVar14 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar39 - fVar12) * fVar11 + fVar12;
        fVar18 = (fVar40 - fVar14) * fVar11 + fVar14;
        local_res8[0] = fVar11;
        if (((fVar34 <= fVar13) && (fVar13 <= fVar16)) && ((fVar27 <= fVar18 && (fVar18 <= fVar33)))) {
            return 1;
        }
    }
    fVar11 = local_b8 * local_188._0_4_ + fStack180 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar11 & 0x7fffffff)) &&
         (fVar11 = (fVar12 * local_188._0_4_ + fVar14 * local_188._4_4_ + 0.0 + fStack380) / fVar11,
                 0.0 <= fVar11)) && (fVar11 <= 1.0)) {
        fVar13 = (fVar9 - fVar12) * fVar11 + fVar12;
        fVar18 = (fVar17 - fVar14) * fVar11 + fVar14;
        local_res8[0] = fVar11;
        if (((fVar34 <= fVar13) && (fVar13 <= fVar16)) && ((fVar27 <= fVar18 && (fVar18 <= fVar33)))) {
            return 1;
        }
    }
    fVar15 = fVar15 * local_188._0_4_ + fVar10 * local_188._4_4_ + 0.0;
    if (((1e-05 <= (float) ((uint) fVar15 & 0x7fffffff)) &&
         (fVar15 = (local_188._0_4_ * fVar39 + local_188._4_4_ * fVar40 + 0.0 + fStack380) / fVar15,
                 0.0 <= fVar15)) && (fVar15 <= 1.0)) {
        fVar10 = (fVar9 - fVar39) * fVar15 + fVar39;
        fVar11 = (fVar17 - fVar40) * fVar15 + fVar40;
        local_res8[0] = fVar15;
        if ((((fVar34 <= fVar10) && (fVar10 <= fVar16)) && (fVar27 <= fVar11)) && (fVar11 <= fVar33)) {
            return 1;
        }
    }
    fVar10 = (local_f8._4_4_ - local_128._4_4_) * 0.0 -
             (local_d8._4_4_ - local_128._4_4_) * (fStack240 - fStack288);
    fVar11 = (local_d8._0_4_ - local_128._0_4_) * 0.0 - (local_f8._0_4_ - local_128._0_4_) * 0.0;
    fVar18 = (local_d8._4_4_ - local_128._4_4_) * (local_f8._0_4_ - local_128._0_4_) -
             (local_d8._0_4_ - local_128._0_4_) * (local_f8._4_4_ - local_128._4_4_);
    fVar15 = fVar11 * fVar11;
    fVar13 = fVar10 * fVar10 + fVar15 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar15, CONCAT48(fVar15, CONCAT44(fVar15, fVar15))),
                     ZEXT1216(CONCAT48(fVar18 * fVar18, CONCAT44(fVar15, fVar13))));
    fVar15 = SUB164(auVar8, 0);
    fVar15 = (3.0 - fVar13 * fVar15 * fVar15) * 0.5 * fVar15;
    if (fVar15 <= 0.0) {
        fVar15 = 0.0;
    }
    fVar10 = fVar15 * fVar10;
    fVar11 = fVar15 * fVar11;
    local_108 = CONCAT412(fVar15 * 0.0, CONCAT48(fVar15 * fVar18, CONCAT44(fVar11, fVar10)));
    _local_138 = CONCAT48(fVar15 * fVar18, CONCAT44(fVar11, fVar10));
    _local_138 = CONCAT412(fVar10 * local_128._0_4_ + fVar11 * local_128._4_4_ + 0.0, _local_138) ^
                 (undefined[16]) 0x8000000000000000;
    fVar15 = local_c8 * local_138._0_4_ + fStack196 * local_138._4_4_ + 0.0;
    _local_188 = CONCAT412(fStack188 * fStack300,
                           CONCAT48(fStack192 * fStack304, CONCAT44(fStack196 * local_138._4_4_, fVar15)
                           ));
    if (((1e-05 <= (float) ((uint) fVar15 & 0x7fffffff)) &&
         (fVar15 = (local_138._0_4_ * fVar12 + local_138._4_4_ * fVar14 + 0.0 + fStack300) / fVar15,
                 0.0 <= fVar15)) && (fVar15 <= 1.0)) {
        fVar10 = (fVar39 - fVar12) * fVar15 + fVar12;
        fVar11 = (fVar40 - fVar14) * fVar15 + fVar14;
        _local_188 = CONCAT412((fVar6 - fVar30) * fVar15 + fVar30,
                               CONCAT48((fVar23 - fVar21) * fVar15 + fVar21, CONCAT44(fVar11, fVar10)));
        local_res8[0] = fVar15;
        if (((fVar34 <= fVar10) && (fVar10 <= fVar16)) && ((fVar27 <= fVar11 && (fVar11 <= fVar33)))) {
            return 1;
        }
    }
    fVar23 = fVar27;
    iVar7 = FUN_1401d7750(local_138, param_2, param_4, local_res8);
    if (iVar7 != 0) {
        fVar12 = (fVar9 - fVar12) * local_res8[0] + fVar12;
        fVar14 = (fVar17 - fVar14) * local_res8[0] + fVar14;
        _local_188 = CONCAT412((fVar41 - fVar30) * local_res8[0] + fVar30,
                               CONCAT48((fVar19 - fVar21) * local_res8[0] + fVar21,
                                        CONCAT44(fVar14, fVar12)));
        if ((((fVar34 <= fVar12) && (fVar12 <= fVar16)) && (fVar23 <= fVar14)) && (fVar14 <= fVar33)) {
            return 1;
        }
    }
    iVar7 = FUN_1401d7750(local_138, param_3);
    if (iVar7 != 0) {
        fVar39 = (fVar9 - fVar39) * local_res8[0] + fVar39;
        fVar40 = (fVar17 - fVar40) * local_res8[0] + fVar40;
        if (((fVar34 <= fVar39) && (fVar39 <= fVar16)) && ((fVar23 <= fVar40 && (fVar40 <= fVar33)))) {
            return 1;
        }
    }
    uVar26 = 0x3f800000;
    uVar28 = 0;
    uVar29 = 0;
    uVar31 = 0;
    local_188 = ZEXT812(0x3f800000);
    _local_188 = ZEXT1216(local_188);
    local_168 = _local_128;
    iVar7 = FUN_1401d7860(local_168, local_188, param_2, param_3, param_4, local_res8, local_198, local_148);
    if (((iVar7 == 0) || (local_res8[0] < fVar24)) || ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
        _local_188 = CONCAT412(uVar31, CONCAT48(uVar29, CONCAT44(uVar28, uVar26)));
        local_168 = _local_f8;
        iVar7 = FUN_1401d7860(local_168, local_188);
        if (((iVar7 == 0) || (local_res8[0] < fVar24)) || ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
            _local_188 = CONCAT412(uVar31, CONCAT48(uVar29, CONCAT44(uVar28, uVar26)));
            local_168 = _local_178;
            iVar7 = FUN_1401d7860(local_168, local_188);
            if (((iVar7 == 0) || (local_res8[0] < fVar24)) || ((fVar16 - fVar34) + fVar25 < local_res8[0])
                    ) {
                _local_188 = CONCAT412(uVar31, CONCAT48(uVar29, CONCAT44(uVar28, uVar26)));
                local_168 = _local_e8;
                iVar7 = FUN_1401d7860(local_168, local_188);
                if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                    ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
                    uVar26 = 0;
                    uVar28 = 0x3f800000;
                    uVar29 = 0;
                    uVar31 = 0;
                    _local_188 = ZEXT816(0x3f80000000000000);
                    local_168 = CONCAT412(uStack284,
                                          CONCAT48(fStack288, CONCAT44(local_128._4_4_, local_128._0_4_)));
                    iVar7 = FUN_1401d7860(local_168, local_188);
                    if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                        (fVar27 = param_1[1], (fVar33 - fVar27) + fVar25 < local_res8[0])) {
                        _local_188 = CONCAT412(uVar31, CONCAT48(uVar29, CONCAT44(uVar28, uVar26)));
                        local_168 = _local_d8;
                        iVar7 = FUN_1401d7860(local_168, local_188);
                        if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                            ((fVar33 - fVar27) + fVar25 < local_res8[0])) {
                            _local_188 = CONCAT412(uVar31, CONCAT48(uVar29, CONCAT44(uVar28, uVar26)));
                            local_168 = _local_158;
                            iVar7 = FUN_1401d7860(local_168, local_188);
                            if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                ((fVar33 - fVar27) + fVar25 < local_res8[0])) {
                                _local_188 = CONCAT412(uVar31, CONCAT48(uVar29, CONCAT44(uVar28, uVar26)));
                                local_168 = _local_e8;
                                iVar7 = FUN_1401d7860(local_168, local_188);
                                if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                    ((fVar33 - fVar27) + fVar25 < local_res8[0])) {
                                    uVar35 = 0;
                                    uVar36 = 0;
                                    uVar37 = 0x3f800000;
                                    uVar38 = 0;
                                    local_188 = ZEXT412(0x3f800000) << 0x40;
                                    _local_188 = ZEXT1216(local_188);
                                    local_168 = _local_128;
                                    iVar7 = FUN_1401d7860(local_168, local_188);
                                    if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                        ((fVar32 - fVar42) + fVar25 < local_res8[0])) {
                                        _local_188 = CONCAT412(uVar38, CONCAT48(uVar37, CONCAT44(uVar36, uVar35)));
                                        local_168 = _local_d8;
                                        iVar7 = FUN_1401d7860(local_168, local_188);
                                        if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                            ((fVar32 - fVar42) + fVar25 < local_res8[0])) {
                                            _local_188 = CONCAT412(uVar38, CONCAT48(uVar37, CONCAT44(uVar36, uVar35)));
                                            local_168 = _local_118;
                                            iVar7 = FUN_1401d7860(local_168, local_188);
                                            if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                ((fVar32 - fVar42) + fVar25 < local_res8[0])) {
                                                _local_188 = CONCAT412(uVar38,
                                                                       CONCAT48(uVar37, CONCAT44(uVar36, uVar35)));
                                                local_168 = _local_f8;
                                                iVar7 = FUN_1401d7860(local_168, local_188);
                                                if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                    ((fVar32 - fVar42) + fVar25 < local_res8[0])) {
                                                    local_188 = ZEXT812(0x3f800000);
                                                    _local_188 = ZEXT1216(local_188);
                                                    local_168 = _local_128;
                                                    iVar7 = FUN_1401d7860(local_168, local_188);
                                                    if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                        ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
                                                        local_188 = ZEXT812(0x3f800000);
                                                        _local_188 = ZEXT1216(local_188);
                                                        local_168 = _local_f8;
                                                        iVar7 = FUN_1401d7860(local_168, local_188);
                                                        if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                            ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
                                                            local_188 = ZEXT812(0x3f800000);
                                                            _local_188 = ZEXT1216(local_188);
                                                            iVar7 = FUN_1401d7860(local_178, local_188);
                                                            if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                                ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
                                                                _local_178 = ZEXT1216(ZEXT812(0x3f800000));
                                                                _local_188 = _local_e8;
                                                                iVar7 = FUN_1401d7860(local_188, local_178);
                                                                if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                                    ((fVar16 - fVar34) + fVar25 < local_res8[0])) {
                                                                    _local_178 = CONCAT412(uVar31, CONCAT48(uVar29,
                                                                                                            CONCAT44(
                                                                                                                    uVar28,
                                                                                                                    uVar26)));
                                                                    _local_188 = _local_128;
                                                                    iVar7 = FUN_1401d7860(local_188, local_178);
                                                                    if (((iVar7 == 0) || (local_res8[0] < fVar24)) ||
                                                                        ((fVar33 - fVar27) + fVar25 < local_res8[0])) {
                                                                        _local_178 = CONCAT412(uVar31, CONCAT48(uVar29,
                                                                                                                CONCAT44(
                                                                                                                        uVar28,
                                                                                                                        uVar26)));
                                                                        _local_188 = _local_d8;
                                                                        iVar7 = FUN_1401d7860(local_188, local_178);
                                                                        if (((iVar7 == 0) ||
                                                                             (local_res8[0] < fVar24)) ||
                                                                            ((fVar33 - fVar27) + fVar25 <
                                                                             local_res8[0])) {
                                                                            _local_178 = CONCAT412(uVar31,
                                                                                                   CONCAT48(uVar29,
                                                                                                            CONCAT44(
                                                                                                                    uVar28,
                                                                                                                    uVar26)));
                                                                            iVar7 = FUN_1401d7860(local_158, local_178);
                                                                            if (((iVar7 == 0) ||
                                                                                 (local_res8[0] < fVar24)) ||
                                                                                ((fVar33 - fVar27) + fVar25 <
                                                                                 local_res8[0])) {
                                                                                _local_158 = CONCAT412(uVar31,
                                                                                                       CONCAT48(uVar29,
                                                                                                                CONCAT44(
                                                                                                                        uVar28,
                                                                                                                        uVar26)));
                                                                                _local_178 = _local_e8;
                                                                                iVar7 = FUN_1401d7860(local_178,
                                                                                                      local_158);
                                                                                if (((iVar7 == 0) ||
                                                                                     (local_res8[0] < fVar24)) ||
                                                                                    ((fVar33 - fVar27) + fVar25 <
                                                                                     local_res8[0])) {
                                                                                    _local_158 = CONCAT412(uVar38,
                                                                                                           CONCAT48(
                                                                                                                   uVar37,
                                                                                                                   CONCAT44(
                                                                                                                           uVar36,
                                                                                                                           uVar35)));
                                                                                    _local_178 = CONCAT412(uStack284,
                                                                                                           CONCAT48(
                                                                                                                   fStack288,
                                                                                                                   CONCAT44(
                                                                                                                           local_128._4_4_,
                                                                                                                           local_128._0_4_))
                                                                                    );
                                                                                    iVar7 = FUN_1401d7860(local_178,
                                                                                                          local_158);
                                                                                    if (((iVar7 == 0) ||
                                                                                         (local_res8[0] < fVar24)) ||
                                                                                        ((fVar32 - fVar42) + fVar25 <
                                                                                         local_res8[0])) {
                                                                                        _local_158 = CONCAT412(uVar38,
                                                                                                               CONCAT48(
                                                                                                                       uVar37,
                                                                                                                       CONCAT44(
                                                                                                                               uVar36,
                                                                                                                               uVar35)));
                                                                                        _local_178 = CONCAT412(
                                                                                                uStack204,
                                                                                                CONCAT48(fStack208,
                                                                                                         CONCAT44(
                                                                                                                 local_d8._4_4_,
                                                                                                                 local_d8._0_4_)
                                                                                                ));
                                                                                        iVar7 = FUN_1401d7860(local_178,
                                                                                                              local_158);
                                                                                        if (((iVar7 == 0) ||
                                                                                             (local_res8[0] <
                                                                                              fVar24)) ||
                                                                                            ((fVar32 - fVar42) +
                                                                                             fVar25 < local_res8[0])) {
                                                                                            _local_158 = CONCAT412(
                                                                                                    uVar38,
                                                                                                    CONCAT48(uVar37,
                                                                                                             CONCAT44
                                                                                                                     (uVar36,
                                                                                                                      uVar35)));
                                                                                            _local_178 = _local_118;
                                                                                            iVar7 = FUN_1401d7860(
                                                                                                    local_178,
                                                                                                    local_158);
                                                                                            if (((iVar7 == 0) ||
                                                                                                 (local_res8[0] <
                                                                                                  fVar24)) ||
                                                                                                ((fVar32 - fVar42) +
                                                                                                 fVar25 <
                                                                                                 local_res8[0])) {
                                                                                                _local_158 = CONCAT412(
                                                                                                        uVar38,
                                                                                                        CONCAT48(uVar37,
                                                                                                                 CONCAT44(
                                                                                                                         uVar36,
                                                                                                                         uVar35)));
                                                                                                _local_178 = _local_f8;
                                                                                                iVar7 = FUN_1401d7860(
                                                                                                        local_178,
                                                                                                        local_158);
                                                                                                if (((iVar7 == 0) ||
                                                                                                     (local_res8[0] <
                                                                                                      fVar24)) ||
                                                                                                    ((fVar32 - fVar42) +
                                                                                                     fVar25 <
                                                                                                     local_res8[0])) {
                                                                                                    return 0;
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
                }
            }
        }
    }
    return 1;
}


void FUN_1401cba70(longlong param_1) {
    undefined2 *puVar1;
    longlong lVar2;

    puVar1 = (undefined2 * )(param_1 + 0xbc);
    lVar2 = 0x11e;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar1 = (undefined2 * )(param_1 + 0x9b0);
    lVar2 = 0x1e;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar1 = (undefined2 * )(param_1 + 0xaa4);
    lVar2 = 0x13;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    *(undefined8 * )(param_1 + 0x1700) = 0;
    *(undefined4 * )(param_1 + 0x1708) = 0;
    *(undefined2 * )(param_1 + 0x4bc) = 1;
    *(undefined4 * )(param_1 + 0x16f4) = 0;
    return;
}


void FUN_1401cbaf0(longlong param_1, longlong param_2, int param_3) {
    byte *pbVar1;
    byte bVar2;
    ushort uVar3;
    ushort uVar4;
    int iVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    int iVar9;
    longlong lVar10;
    bool bVar11;

    iVar5 = *(int *) (param_1 + 0x149c);
    lVar10 = (longlong) param_3;
    iVar6 = *(int *) (param_1 + 0xba8 + lVar10 * 4);
    param_3 = param_3 * 2;
    bVar11 = SBORROW4(param_3, iVar5);
    iVar9 = param_3 - iVar5;
    if (param_3 <= iVar5) {
        do {
            if (bVar11 != iVar9 < 0) {
                lVar8 = (longlong) * (int *) (param_1 + 0xba8 + (longlong) param_3 * 4);
                lVar7 = (longlong) * (int *) (param_1 + 0xbac + (longlong) param_3 * 4);
                uVar3 = *(ushort * )(param_2 + lVar7 * 4);
                uVar4 = *(ushort * )(param_2 + lVar8 * 4);
                if ((uVar3 < uVar4) ||
                    ((uVar3 == uVar4 &&
                      (bVar2 = *(byte * )(lVar8 + 0x14a4 + param_1),
                              pbVar1 = (byte * )(lVar7 + 0x14a4 + param_1), *pbVar1 < bVar2 || *pbVar1 == bVar2)))) {
                    param_3 = param_3 + 1;
                }
            }
            iVar5 = *(int *) (param_1 + 0xba8 + (longlong) param_3 * 4);
            uVar3 = *(ushort * )(param_2 + (longlong) iVar6 * 4);
            uVar4 = *(ushort * )(param_2 + (longlong) iVar5 * 4);
            iVar9 = (int) lVar10;
            if ((uVar3 < uVar4) ||
                ((uVar3 == uVar4 &&
                  (bVar2 = *(byte * )((longlong) iVar5 + 0x14a4 + param_1),
                          pbVar1 = (byte * )((longlong) iVar6 + 0x14a4 + param_1), *pbVar1 < bVar2 || *pbVar1 == bVar2
                  )))) {
                *(int *) (param_1 + 0xba8 + (longlong) iVar9 * 4) = iVar6;
                return;
            }
            lVar10 = (longlong) param_3;
            param_3 = param_3 * 2;
            *(int *) (param_1 + 0xba8 + (longlong) iVar9 * 4) = iVar5;
            iVar5 = *(int *) (param_1 + 0x149c);
            bVar11 = SBORROW4(param_3, iVar5);
            iVar9 = param_3 - iVar5;
        } while (param_3 <= iVar5);
    }
    *(int *) (param_1 + 0xba8 + lVar10 * 4) = iVar6;
    return;
}


void FUN_1401cbbe0(longlong param_1, longlong *param_2) {
    ushort *puVar1;
    short *psVar2;
    ushort uVar3;
    short sVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    longlong *plVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    longlong lVar12;
    ulonglong uVar13;
    int iVar14;
    longlong lVar15;
    undefined2 *puVar16;
    uint uVar17;
    ulonglong uVar18;
    int iVar19;
    longlong lVar20;
    int iVar21;
    longlong lVar22;
    int *piVar23;

    plVar8 = (longlong *) param_2[2];
    lVar9 = *param_2;
    iVar5 = *(int *) (param_2 + 1);
    iVar6 = *(int *) (plVar8 + 2);
    uVar17 = *(uint * )(plVar8 + 3);
    uVar18 = (ulonglong)(int)
    uVar17;
    lVar22 = *plVar8;
    iVar14 = 0;
    lVar20 = plVar8[1];
    puVar16 = (undefined2 * )(param_1 + 0xb88);
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
    }
    *(undefined2 * )
            (lVar9 + 2 + (longlong) * (int *) (param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x14a0) * 4) * 4)
            = 0;
    iVar21 = *(int *) (param_1 + 0x14a0) + 1;
    lVar12 = (longlong) iVar21;
    if (lVar12 < 0x23d) {
        lVar15 = 0x23d - lVar12;
        iVar21 = iVar21 + (int) lVar15;
        piVar23 = (int *) (param_1 + 0xba8 + lVar12 * 4);
        do {
            iVar7 = *piVar23;
            lVar12 = (longlong) iVar7 * 4;
            uVar11 = *(ushort * )(lVar9 + 2 + (ulonglong) * (ushort * )(lVar12 + 2 + lVar9) * 4) + 1;
            if ((int) uVar17 < (int) uVar11) {
                iVar14 = iVar14 + 1;
                uVar11 = uVar17;
            }
            *(short *) (lVar12 + 2 + lVar9) = (short) uVar11;
            if (iVar7 <= iVar5) {
                iVar19 = 0;
                psVar2 = (short *) (param_1 + 0xb88 + (longlong)(int)
                uVar11 * 2);
                *psVar2 = *psVar2 + 1;
                if (iVar6 <= iVar7) {
                    iVar19 = *(int *) (lVar20 + ((longlong) iVar7 - (longlong) iVar6) * 4);
                }
                uVar3 = *(ushort * )(lVar12 + lVar9);
                *(int *) (param_1 + 0x1700) = *(int *) (param_1 + 0x1700) + (iVar19 + uVar11) * (uint) uVar3;
                if (lVar22 != 0) {
                    *(int *) (param_1 + 0x1704) =
                            *(int *) (param_1 + 0x1704) +
                            ((uint) * (ushort * )(lVar12 + 2 + lVar22) + iVar19) * (uint) uVar3;
                }
            }
            piVar23 = piVar23 + 1;
            lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
    }
    if (iVar14 != 0) {
        do {
            uVar13 = (ulonglong)(int)(uVar17 - 1);
            sVar4 = *(short *) (param_1 + 0xb88 + uVar13 * 2);
            uVar11 = uVar17 - 1;
            while (sVar4 == 0) {
                uVar11 = (int) uVar13 - 1;
                uVar13 = (ulonglong) uVar11;
                sVar4 = *(short *) (param_1 + 0xb88 + (longlong)(int)
                uVar11 * 2);
            }
            iVar14 = iVar14 + -2;
            psVar2 = (short *) (param_1 + 0xb88 + (longlong)(int)
            uVar11 * 2);
            *psVar2 = *psVar2 + -1;
            psVar2 = (short *) (param_1 + 0xb8a + (longlong)(int)
            uVar11 * 2);
            *psVar2 = *psVar2 + 2;
            psVar2 = (short *) (param_1 + 0xb88 + uVar18 * 2);
            *psVar2 = *psVar2 + -1;
        } while (0 < iVar14);
        lVar22 = (longlong) iVar21;
        while (uVar17 != 0) {
            uVar17 = (uint) uVar18;
            uVar3 = *(ushort * )(param_1 + 0xb88 + (longlong)(int)
            uVar17 * 2);
            uVar11 = (uint) uVar3;
            if (uVar3 != 0) {
                lVar20 = param_1 + 0xba8 + lVar22 * 4;
                do {
                    iVar6 = *(int *) (lVar20 + -4);
                    lVar20 = lVar20 + -4;
                    lVar22 = lVar22 + -1;
                    if (iVar6 <= iVar5) {
                        puVar1 = (ushort * )(lVar9 + (longlong) iVar6 * 4);
                        uVar10 = (uint) * (ushort * )(lVar9 + 2 + (longlong) iVar6 * 4);
                        if (uVar10 != uVar17) {
                            *(int *) (param_1 + 0x1700) =
                                    *(int *) (param_1 + 0x1700) + (uVar17 - uVar10) * (uint) * puVar1;
                            puVar1[1] = (ushort) uVar18;
                        }
                        uVar11 = uVar11 - 1;
                    }
                } while (uVar11 != 0);
            }
            uVar17 = uVar17 - 1;
            uVar18 = (ulonglong) uVar17;
        }
    }
    return;
}


void FUN_1401cbe00(longlong param_1, int param_2, longlong param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    ushort uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    ushort local_38[16];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) local_38;
    uVar6 = 0;
    lVar9 = 1;
    do {
        lVar10 = lVar9 + 1;
        uVar6 = (uVar6 + *(short *) (param_3 + lVar9 * 2 + -2)) * 2;
        local_38[lVar9] = uVar6;
        lVar9 = lVar10;
    } while (lVar10 < 0x10);
    uVar8 = 0;
    if (-1 < param_2) {
        do {
            uVar6 = *(ushort * )(param_1 + 2 + uVar8 * 4);
            uVar5 = (ulonglong) uVar6;
            if (uVar6 != 0) {
                uVar6 = local_38[uVar5];
                local_38[uVar5] = uVar6 + 1;
                uVar1 = 0;
                uVar7 = (ulonglong) uVar6;
                do {
                    uVar2 = uVar1;
                    uVar4 = (int) uVar5 - 1;
                    uVar5 = (ulonglong) uVar4;
                    uVar3 = (uint) uVar7 & 1;
                    uVar1 = (ulonglong)(((uint) uVar2 | uVar3) * 2);
                    uVar7 = uVar7 >> 1;
                } while (0 < (int) uVar4);
                *(ushort * )(param_1 + uVar8 * 4) = (ushort) uVar2 | (ushort) uVar3;
            }
            uVar8 = uVar8 + 1;
        } while ((longlong) uVar8 <= (longlong) param_2);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) local_38);
    return;
}


void FUN_1401cbec0(longlong param_1, longlong *param_2) {
    short *psVar1;
    byte bVar2;
    longlong lVar3;
    byte bVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    ulonglong uVar10;

    lVar3 = *param_2;
    iVar5 = *(int *) ((longlong)(longlong * )
    param_2[2] + 0x14);
    uVar10 = (ulonglong) iVar5;
    lVar7 = *(longlong *) param_2[2];
    iVar8 = -1;
    *(undefined4 * )(param_1 + 0x149c) = 0;
    *(undefined4 * )(param_1 + 0x14a0) = 0x23d;
    iVar9 = 0;
    lVar6 = 0;
    if (0 < iVar5) {
        do {
            if (*(short *) (lVar3 + lVar6 * 4) == 0) {
                *(undefined2 * )(lVar3 + 2 + lVar6 * 4) = 0;
            } else {
                *(int *) (param_1 + 0x149c) = *(int *) (param_1 + 0x149c) + 1;
                *(int *) (param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x149c) * 4) = iVar9;
                *(undefined * )(lVar6 + 0x14a4 + param_1) = 0;
                iVar8 = iVar9;
            }
            lVar6 = lVar6 + 1;
            iVar9 = iVar9 + 1;
        } while (lVar6 < (longlong) uVar10);
    }
    iVar5 = *(int *) (param_1 + 0x149c);
    while (iVar5 < 2) {
        if (iVar8 < 2) {
            iVar8 = iVar8 + 1;
            iVar5 = iVar8;
        } else {
            iVar5 = 0;
        }
        *(int *) (param_1 + 0x149c) = *(int *) (param_1 + 0x149c) + 1;
        *(int *) (param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x149c) * 4) = iVar5;
        lVar6 = (longlong) iVar5;
        *(undefined2 * )(lVar3 + lVar6 * 4) = 1;
        *(undefined * )(lVar6 + 0x14a4 + param_1) = 0;
        *(int *) (param_1 + 0x1700) = *(int *) (param_1 + 0x1700) + -1;
        if (lVar7 != 0) {
            *(int *) (param_1 + 0x1704) =
                    *(int *) (param_1 + 0x1704) - (uint) * (ushort * )(lVar7 + 2 + lVar6 * 4);
        }
        iVar5 = *(int *) (param_1 + 0x149c);
    }
    *(int *) (param_2 + 1) = iVar8;
    for (iVar5 = *(int *) (param_1 + 0x149c) / 2; 0 < iVar5; iVar5 = iVar5 + -1) {
        FUN_1401cbaf0(param_1, lVar3, iVar5);
    }
    do {
        iVar5 = *(int *) (param_1 + 0xbac);
        *(undefined4 * )(param_1 + 0xbac) =
                *(undefined4 * )(param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x149c) * 4);
        *(int *) (param_1 + 0x149c) = *(int *) (param_1 + 0x149c) + -1;
        FUN_1401cbaf0(param_1, lVar3, 1);
        iVar9 = *(int *) (param_1 + 0xbac);
        lVar7 = (longlong) iVar9;
        *(int *) (param_1 + 0x14a0) = *(int *) (param_1 + 0x14a0) + -1;
        psVar1 = (short *) (lVar3 + (longlong) iVar5 * 4);
        *(int *) (param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x14a0) * 4) = iVar5;
        *(int *) (param_1 + 0x14a0) = *(int *) (param_1 + 0x14a0) + -1;
        *(int *) (param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x14a0) * 4) = iVar9;
        iVar9 = (int) uVar10;
        *(short *) (lVar3 + (longlong) iVar9 * 4) = *(short *) (lVar3 + lVar7 * 4) + *psVar1;
        bVar4 = *(byte * )((longlong) iVar5 + 0x14a4 + param_1);
        bVar2 = *(byte * )(lVar7 + 0x14a4 + param_1);
        if (bVar4 < bVar2) {
            bVar4 = bVar2;
        }
        *(byte * )((longlong) iVar9 + 0x14a4 + param_1) = bVar4 + 1;
        *(short *) (lVar3 + 2 + lVar7 * 4) = (short) uVar10;
        psVar1[1] = (short) uVar10;
        *(int *) (param_1 + 0xbac) = iVar9;
        uVar10 = (ulonglong)(iVar9 + 1);
        FUN_1401cbaf0(param_1, lVar3, 1);
    } while (1 < *(int *) (param_1 + 0x149c));
    *(int *) (param_1 + 0x14a0) = *(int *) (param_1 + 0x14a0) + -1;
    *(undefined4 * )(param_1 + 0xba8 + (longlong) * (int *) (param_1 + 0x14a0) * 4) =
            *(undefined4 * )(param_1 + 0xbac);
    FUN_1401cbbe0();
    FUN_1401cbe00(lVar3, iVar8, param_1 + 0xb88);
    return;
}


void FUN_1401cc110(longlong param_1, longlong param_2, int param_3) {
    short *psVar1;
    ushort uVar2;
    int iVar3;
    longlong lVar4;
    ushort *puVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;

    uVar2 = *(ushort * )(param_2 + 2);
    uVar8 = 0xffffffff;
    iVar9 = 0;
    iVar3 = 7;
    iVar10 = 4;
    if (uVar2 == 0) {
        iVar3 = 0x8a;
        iVar10 = 3;
    }
    lVar4 = (longlong) param_3;
    *(undefined2 * )(param_2 + 6 + lVar4 * 4) = 0xffff;
    if (-1 < lVar4) {
        puVar5 = (ushort * )(param_2 + 6);
        lVar4 = lVar4 + 1;
        uVar6 = (uint) uVar2;
        do {
            iVar9 = iVar9 + 1;
            uVar2 = *puVar5;
            uVar7 = (uint) uVar2;
            if ((iVar3 <= iVar9) || (uVar6 != uVar7)) {
                if (iVar9 < iVar10) {
                    psVar1 = (short *) (param_1 + 0xaa4 + (longlong)(int)
                    uVar6 * 4);
                    *psVar1 = *psVar1 + (short) iVar9;
                } else if (uVar6 == 0) {
                    if (iVar9 < 0xb) {
                        *(short *) (param_1 + 0xae8) = *(short *) (param_1 + 0xae8) + 1;
                    } else {
                        *(short *) (param_1 + 0xaec) = *(short *) (param_1 + 0xaec) + 1;
                    }
                } else {
                    if (uVar6 != uVar8) {
                        psVar1 = (short *) (param_1 + 0xaa4 + (longlong)(int)
                        uVar6 * 4);
                        *psVar1 = *psVar1 + 1;
                    }
                    *(short *) (param_1 + 0xae4) = *(short *) (param_1 + 0xae4) + 1;
                }
                iVar9 = 0;
                uVar8 = uVar6;
                if (uVar2 == 0) {
                    iVar3 = 0x8a;
                    iVar10 = 3;
                    iVar9 = 0;
                } else if (uVar6 == uVar7) {
                    iVar3 = 6;
                    iVar10 = 3;
                    iVar9 = 0;
                } else {
                    iVar3 = 7;
                    iVar10 = 4;
                }
            }
            puVar5 = puVar5 + 2;
            lVar4 = lVar4 + -1;
            uVar6 = uVar7;
        } while (lVar4 != 0);
    }
    return;
}


void FUN_1401cc200(longlong param_1, longlong param_2, int param_3) {
    longlong lVar1;
    ushort uVar2;
    ushort uVar3;
    ushort uVar4;
    byte bVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    longlong lVar9;
    int iVar10;
    int iVar11;
    uint uVar13;
    ushort *puVar14;
    longlong lVar15;
    int iVar12;

    uVar13 = 0xffffffff;
    iVar12 = 0;
    iVar6 = 7;
    iVar10 = 4;
    if (*(ushort * )(param_2 + 2) == 0) {
        iVar6 = 0x8a;
        iVar10 = 3;
    }
    if (-1 < param_3) {
        puVar14 = (ushort * )(param_2 + 6);
        lVar15 = (longlong) param_3 + 1;
        uVar7 = (uint) * (ushort * )(param_2 + 2);
        do {
            iVar11 = iVar12 + 1;
            lVar9 = (longlong)(int)
            uVar7;
            uVar2 = *puVar14;
            uVar8 = (uint) uVar2;
            if ((iVar6 <= iVar11) || (uVar7 != uVar8)) {
                if (iVar11 < iVar10) {
                    lVar1 = param_1 + lVar9 * 4;
                    do {
                        iVar6 = *(int *) (param_1 + 0x1714);
                        uVar13 = (uint) * (ushort * )(param_1 + lVar9 * 4 + 0xaa6);
                        if ((int) (0x10 - uVar13) < iVar6) {
                            uVar3 = *(ushort * )(lVar1 + 0xaa4);
                            *(ushort * )(param_1 + 0x1710) =
                                    *(ushort * )(param_1 + 0x1710) | uVar3 << ((byte) iVar6 & 0x1f);
                            *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                    *(undefined * )(param_1 + 0x1710);
                            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                            *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                    *(undefined * )(param_1 + 0x1711);
                            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                            iVar6 = *(int *) (param_1 + 0x1714) + -0x10;
                            *(ushort * )(param_1 + 0x1710) =
                                    uVar3 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                        } else {
                            *(ushort * )(param_1 + 0x1710) =
                                    *(ushort * )(param_1 + 0x1710) |
                                    *(short *) (lVar1 + 0xaa4) << ((byte) iVar6 & 0x1f);
                        }
                        *(uint * )(param_1 + 0x1714) = iVar6 + uVar13;
                        iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                } else {
                    if (uVar7 == 0) {
                        iVar6 = *(int *) (param_1 + 0x1714);
                        bVar5 = (byte) iVar6;
                        if (iVar11 < 0xb) {
                            uVar3 = *(ushort * )(param_1 + 0xaea);
                            if ((int) (0x10 - (uint) uVar3) < iVar6) {
                                uVar4 = *(ushort * )(param_1 + 0xae8);
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | uVar4 << (bVar5 & 0x1f);
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1710);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1711);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                iVar6 = (uVar3 - 0x10) + *(int *) (param_1 + 0x1714);
                                *(ushort * )(param_1 + 0x1710) =
                                        uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                            } else {
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | *(short *) (param_1 + 0xae8) << (bVar5 & 0x1f);
                                iVar6 = iVar6 + (uint) uVar3;
                            }
                            *(int *) (param_1 + 0x1714) = iVar6;
                            if (iVar6 < 0xe) {
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | (short) iVar11 + -3 << ((byte) iVar6 & 0x1f);
                                iVar6 = iVar6 + 3;
                            } else {
                                uVar3 = (short) iVar12 - 2;
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | uVar3 << ((byte) iVar6 & 0x1f);
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1710);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1711);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                iVar6 = *(int *) (param_1 + 0x1714) + -0xd;
                                *(ushort * )(param_1 + 0x1710) =
                                        uVar3 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                            }
                        } else {
                            uVar3 = *(ushort * )(param_1 + 0xaee);
                            if ((int) (0x10 - (uint) uVar3) < iVar6) {
                                uVar4 = *(ushort * )(param_1 + 0xaec);
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | uVar4 << (bVar5 & 0x1f);
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1710);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1711);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                iVar6 = (uVar3 - 0x10) + *(int *) (param_1 + 0x1714);
                                *(ushort * )(param_1 + 0x1710) =
                                        uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                            } else {
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | *(short *) (param_1 + 0xaec) << (bVar5 & 0x1f);
                                iVar6 = iVar6 + (uint) uVar3;
                            }
                            *(int *) (param_1 + 0x1714) = iVar6;
                            if (iVar6 < 10) {
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | (short) iVar11 + -0xb << ((byte) iVar6 & 0x1f);
                                iVar6 = iVar6 + 7;
                            } else {
                                uVar3 = (short) iVar12 - 10;
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | uVar3 << ((byte) iVar6 & 0x1f);
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1710);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1711);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                iVar6 = *(int *) (param_1 + 0x1714) + -9;
                                *(ushort * )(param_1 + 0x1710) =
                                        uVar3 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                            }
                        }
                    } else {
                        if (uVar7 != uVar13) {
                            iVar6 = *(int *) (param_1 + 0x1714);
                            uVar13 = (uint) * (ushort * )(param_1 + 0xaa6 + lVar9 * 4);
                            if ((int) (0x10 - uVar13) < iVar6) {
                                uVar3 = *(ushort * )(param_1 + 0xaa4 + lVar9 * 4);
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) | uVar3 << ((byte) iVar6 & 0x1f);
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1710);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                *(undefined * )(
                                        (ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10))
                                        = *(undefined * )(param_1 + 0x1711);
                                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                                iVar6 = *(int *) (param_1 + 0x1714) + -0x10;
                                *(ushort * )(param_1 + 0x1710) =
                                        uVar3 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                            } else {
                                *(ushort * )(param_1 + 0x1710) =
                                        *(ushort * )(param_1 + 0x1710) |
                                        *(short *) (param_1 + 0xaa4 + lVar9 * 4) << ((byte) iVar6 & 0x1f);
                            }
                            *(uint * )(param_1 + 0x1714) = iVar6 + uVar13;
                            iVar11 = iVar12;
                        }
                        uVar3 = *(ushort * )(param_1 + 0xae6);
                        iVar6 = *(int *) (param_1 + 0x1714);
                        if ((int) (0x10 - (uint) uVar3) < iVar6) {
                            uVar4 = *(ushort * )(param_1 + 0xae4);
                            *(ushort * )(param_1 + 0x1710) =
                                    *(ushort * )(param_1 + 0x1710) | uVar4 << ((byte) iVar6 & 0x1f);
                            *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                    *(undefined * )(param_1 + 0x1710);
                            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                            *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                    *(undefined * )(param_1 + 0x1711);
                            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                            iVar6 = (uVar3 - 0x10) + *(int *) (param_1 + 0x1714);
                            *(ushort * )(param_1 + 0x1710) =
                                    uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                        } else {
                            *(ushort * )(param_1 + 0x1710) =
                                    *(ushort * )(param_1 + 0x1710) |
                                    *(short *) (param_1 + 0xae4) << ((byte) iVar6 & 0x1f);
                            iVar6 = iVar6 + (uint) uVar3;
                        }
                        *(int *) (param_1 + 0x1714) = iVar6;
                        if (iVar6 < 0xf) {
                            *(ushort * )(param_1 + 0x1710) =
                                    *(ushort * )(param_1 + 0x1710) | (short) iVar11 + -3 << ((byte) iVar6 & 0x1f);
                            iVar6 = iVar6 + 2;
                        } else {
                            uVar3 = (short) iVar11 - 3;
                            *(ushort * )(param_1 + 0x1710) =
                                    *(ushort * )(param_1 + 0x1710) | uVar3 << ((byte) iVar6 & 0x1f);
                            *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                    *(undefined * )(param_1 + 0x1710);
                            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                            *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                    *(undefined * )(param_1 + 0x1711);
                            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                            iVar6 = *(int *) (param_1 + 0x1714) + -0xe;
                            *(ushort * )(param_1 + 0x1710) =
                                    uVar3 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                        }
                    }
                    *(int *) (param_1 + 0x1714) = iVar6;
                }
                uVar13 = uVar7;
                iVar11 = 0;
                if (uVar2 == 0) {
                    iVar6 = 0x8a;
                    iVar10 = 3;
                } else if (uVar7 == uVar8) {
                    iVar6 = 6;
                    iVar10 = 3;
                } else {
                    iVar6 = 7;
                    iVar10 = 4;
                    iVar11 = 0;
                }
            }
            iVar12 = iVar11;
            puVar14 = puVar14 + 2;
            lVar15 = lVar15 + -1;
            uVar7 = uVar8;
        } while (lVar15 != 0);
    }
    return;
}


int FUN_1401cc760(longlong param_1) {
    longlong lVar1;
    int iVar2;

    FUN_1401cc110(param_1, param_1 + 0xbc, *(undefined4 * )(param_1 + 0xb48));
    FUN_1401cc110(param_1, param_1 + 0x9b0, *(undefined4 * )(param_1 + 0xb60));
    FUN_1401cbec0(param_1, param_1 + 0xb70);
    iVar2 = 0x12;
    lVar1 = 0x12;
    do {
        if (*(short *) (param_1 + 0xaa6 + (ulonglong)(byte)(&DAT_140a480e8)[lVar1] * 4) != 0) break;
        if (*(short *) (param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_140a480e7)[lVar1] * 4) != 0) {
            iVar2 = iVar2 + -1;
            break;
        }
        if (*(short *) (param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_140a480e6)[lVar1] * 4) != 0) {
            iVar2 = iVar2 + -2;
            break;
        }
        if (*(short *) (param_1 + 0xaa6 + (ulonglong)(byte)(&UNK_140a480e5)[lVar1] * 4) != 0) {
            iVar2 = iVar2 + -3;
            break;
        }
        lVar1 = lVar1 + -4;
        iVar2 = iVar2 + -4;
    } while (2 < lVar1);
    *(int *) (param_1 + 0x1700) = *(int *) (param_1 + 0x1700) + iVar2 * 3 + 0x11;
    return iVar2;
}


void FUN_1401cc830(longlong param_1, int param_2, int param_3, ulonglong param_4) {
    int iVar1;
    int iVar2;
    byte *pbVar3;
    ushort uVar4;

    iVar1 = *(int *) (param_1 + 0x1714);
    param_4 = param_4 & 0xffffffff;
    if (iVar1 < 0xc) {
        *(ushort * )(param_1 + 0x1710) =
                *(ushort * )(param_1 + 0x1710) | (short) param_2 + -0x101 << ((byte) iVar1 & 0x1f);
        iVar1 = iVar1 + 5;
    } else {
        uVar4 = (short) param_2 - 0x101;
        *(ushort * )(param_1 + 0x1710) = *(ushort * )(param_1 + 0x1710) | uVar4 << ((byte) iVar1 & 0x1f);
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1711);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        iVar1 = *(int *) (param_1 + 0x1714) + -0xb;
        *(ushort * )(param_1 + 0x1710) = uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
    }
    *(int *) (param_1 + 0x1714) = iVar1;
    if (iVar1 < 0xc) {
        *(ushort * )(param_1 + 0x1710) =
                *(ushort * )(param_1 + 0x1710) | (short) param_3 + -1 << ((byte) iVar1 & 0x1f);
        iVar1 = iVar1 + 5;
    } else {
        uVar4 = (short) param_3 - 1;
        *(ushort * )(param_1 + 0x1710) = *(ushort * )(param_1 + 0x1710) | uVar4 << ((byte) iVar1 & 0x1f);
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1711);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        iVar1 = *(int *) (param_1 + 0x1714) + -0xb;
        *(ushort * )(param_1 + 0x1710) = uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
    }
    *(int *) (param_1 + 0x1714) = iVar1;
    if (iVar1 < 0xd) {
        *(ushort * )(param_1 + 0x1710) =
                *(ushort * )(param_1 + 0x1710) | (short) param_4 + -4 << ((byte) iVar1 & 0x1f);
        iVar1 = iVar1 + 4;
    } else {
        uVar4 = (short) param_4 - 4;
        *(ushort * )(param_1 + 0x1710) = *(ushort * )(param_1 + 0x1710) | uVar4 << ((byte) iVar1 & 0x1f);
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1711);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        iVar1 = *(int *) (param_1 + 0x1714) + -0xc;
        *(ushort * )(param_1 + 0x1710) = uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
    }
    *(int *) (param_1 + 0x1714) = iVar1;
    if (0 < (int) param_4) {
        pbVar3 = &DAT_140a480e8;
        do {
            iVar1 = *(int *) (param_1 + 0x1714);
            if (iVar1 < 0xe) {
                iVar2 = iVar1 + 3;
                *(ushort * )(param_1 + 0x1710) =
                        *(ushort * )(param_1 + 0x1710) |
                        *(short *) (param_1 + 0xaa6 + (ulonglong) * pbVar3 * 4) << ((byte) iVar1 & 0x1f);
            } else {
                uVar4 = *(ushort * )(param_1 + 0xaa6 + (ulonglong) * pbVar3 * 4);
                *(ushort * )(param_1 + 0x1710) =
                        *(ushort * )(param_1 + 0x1710) | uVar4 << ((byte) iVar1 & 0x1f);
                *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                        *(undefined * )(param_1 + 0x1710);
                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                        *(undefined * )(param_1 + 0x1711);
                *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                iVar2 = *(int *) (param_1 + 0x1714) + -0xd;
                *(ushort * )(param_1 + 0x1710) = uVar4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
            }
            pbVar3 = pbVar3 + 1;
            *(int *) (param_1 + 0x1714) = iVar2;
            param_4 = param_4 - 1;
        } while (param_4 != 0);
    }
    FUN_1401cc200(param_1, param_1 + 0xbc, param_2 + -1);
    FUN_1401cc200(param_1, param_1 + 0x9b0, param_3 + -1);
    return;
}


void FUN_1401ccaa0(longlong param_1, undefined8 param_2, undefined8 param_3, ushort param_4) {
    int iVar1;
    int iVar2;

    iVar1 = *(int *) (param_1 + 0x1714);
    if (iVar1 < 0xe) {
        iVar2 = iVar1 + 3;
        *(ushort * )(param_1 + 0x1710) = *(ushort * )(param_1 + 0x1710) | param_4 << ((byte) iVar1 & 0x1f);
    } else {
        *(ushort * )(param_1 + 0x1710) = *(ushort * )(param_1 + 0x1710) | param_4 << ((byte) iVar1 & 0x1f);
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1711);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        iVar2 = *(int *) (param_1 + 0x1714) + -0xd;
        *(ushort * )(param_1 + 0x1710) = param_4 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
    }
    *(int *) (param_1 + 0x1714) = iVar2;
    FUN_1401cd2f0(param_1, param_2);
    return;
}


void FUN_1401ccb30(longlong *param_1, longlong param_2, int param_3, int param_4) {
    short sVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;

    iVar3 = 0;
    if (*(int *) ((longlong) param_1 + 0xac) < 1) {
        uVar6 = param_3 + 5;
    } else {
        lVar9 = *param_1;
        if (*(int *) (lVar9 + 0x48) == 2) {
            uVar2 = FUN_1401cd180();
            *(undefined4 * )(lVar9 + 0x48) = uVar2;
        }
        FUN_1401cbec0(param_1, param_1 + 0x168);
        FUN_1401cbec0(param_1);
        iVar3 = FUN_1401cc760();
        uVar5 = *(int *) (param_1 + 0x2e0) + 10U >> 3;
        uVar6 = *(int *) ((longlong) param_1 + 0x1704) + 10U >> 3;
        if (uVar5 < uVar6) goto LAB_1401ccbbc;
    }
    uVar5 = uVar6;
    uVar6 = uVar5;
    LAB_1401ccbbc:
    if ((uVar5 < param_3 + 4U) || (param_2 == 0)) {
        sVar1 = (short) param_4;
        if ((*(int *) (param_1 + 0x16) == 4) || (uVar6 == uVar5)) {
            iVar3 = *(int *) ((longlong) param_1 + 0x1714);
            if (iVar3 < 0xe) {
                *(ushort * )(param_1 + 0x2e2) =
                        *(ushort * )(param_1 + 0x2e2) | sVar1 + 2 << ((byte) iVar3 & 0x1f);
                iVar3 = iVar3 + 3;
            } else {
                *(ushort * )(param_1 + 0x2e2) =
                        *(ushort * )(param_1 + 0x2e2) | sVar1 + 2U << ((byte) iVar3 & 0x1f);
                *(undefined * )((ulonglong) * (uint * )(param_1 + 5) + param_1[2]) =
                        *(undefined * )(param_1 + 0x2e2);
                *(int *) (param_1 + 5) = *(int *) (param_1 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(param_1 + 5) + param_1[2]) =
                        *(undefined * )((longlong) param_1 + 0x1711);
                *(int *) (param_1 + 5) = *(int *) (param_1 + 5) + 1;
                iVar3 = *(int *) ((longlong) param_1 + 0x1714) + -0xd;
                *(ushort * )(param_1 + 0x2e2) =
                        (ushort)(sVar1 + 2U) >> (0x10U - (char) *(int *) ((longlong) param_1 + 0x1714) & 0x1f);
            }
            *(int *) ((longlong) param_1 + 0x1714) = iVar3;
            plVar8 = (longlong * ) & DAT_140a48070;
            puVar7 = &DAT_140a481d0;
        } else {
            iVar4 = *(int *) ((longlong) param_1 + 0x1714);
            if (iVar4 < 0xe) {
                *(ushort * )(param_1 + 0x2e2) =
                        *(ushort * )(param_1 + 0x2e2) | sVar1 + 4 << ((byte) iVar4 & 0x1f);
                iVar4 = iVar4 + 3;
            } else {
                *(ushort * )(param_1 + 0x2e2) =
                        *(ushort * )(param_1 + 0x2e2) | sVar1 + 4U << ((byte) iVar4 & 0x1f);
                *(undefined * )((ulonglong) * (uint * )(param_1 + 5) + param_1[2]) =
                        *(undefined * )(param_1 + 0x2e2);
                *(int *) (param_1 + 5) = *(int *) (param_1 + 5) + 1;
                *(undefined * )((ulonglong) * (uint * )(param_1 + 5) + param_1[2]) =
                        *(undefined * )((longlong) param_1 + 0x1711);
                *(int *) (param_1 + 5) = *(int *) (param_1 + 5) + 1;
                iVar4 = *(int *) ((longlong) param_1 + 0x1714) + -0xd;
                *(ushort * )(param_1 + 0x2e2) =
                        (ushort)(sVar1 + 4U) >> (0x10U - (char) *(int *) ((longlong) param_1 + 0x1714) & 0x1f);
            }
            *(int *) ((longlong) param_1 + 0x1714) = iVar4;
            FUN_1401cc830(param_1, *(int *) (param_1 + 0x169) + 1, *(int *) (param_1 + 0x16c) + 1, iVar3 + 1);
            plVar8 = param_1 + 0x136;
            puVar7 = (undefined * )((longlong) param_1 + 0xbc);
        }
        FUN_1401ccd60(param_1, puVar7, plVar8);
    } else {
        FUN_1401ccaa0(param_1, param_2, param_3, param_4);
    }
    FUN_1401cba70(param_1);
    if (param_4 != 0) {
        FUN_1401cd290();
    }
    return;
}


void FUN_1401ccd60(longlong param_1, longlong param_2, longlong param_3) {
    ushort *puVar1;
    longlong lVar2;
    byte bVar3;
    byte bVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    ushort uVar10;
    uint uVar11;
    ushort uVar12;

    uVar8 = 0;
    if (*(int *) (param_1 + 0x16f4) != 0) {
        do {
            uVar10 = *(ushort * )(*(longlong * )(param_1 + 0x16f8) + uVar8 * 2);
            bVar3 = *(byte * )(uVar8 + *(longlong * )(param_1 + 0x16e8));
            uVar7 = (int) uVar8 + 1;
            uVar8 = (ulonglong) uVar7;
            if (uVar10 == 0) {
                puVar1 = (ushort * )(param_2 + (longlong)(int)(uint)
                bVar3 * 4);
                iVar6 = *(int *) (param_1 + 0x1714);
                uVar10 = puVar1[1];
                if ((int) (0x10 - (uint) uVar10) < iVar6) {
                    uVar12 = *puVar1;
                    *(ushort * )(param_1 + 0x1710) =
                            *(ushort * )(param_1 + 0x1710) | uVar12 << ((byte) iVar6 & 0x1f);
                    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                            *(undefined * )(param_1 + 0x1710);
                    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                            *(undefined * )(param_1 + 0x1711);
                    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                    iVar6 = *(int *) (param_1 + 0x1714) + -0x10 + (uint) uVar10;
                    *(ushort * )(param_1 + 0x1710) =
                            uVar12 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                } else {
                    *(ushort * )(param_1 + 0x1710) =
                            *(ushort * )(param_1 + 0x1710) | *puVar1 << ((byte) iVar6 & 0x1f);
                    iVar6 = iVar6 + (uint) uVar10;
                }
                LAB_1401cd0ac:
                *(int *) (param_1 + 0x1714) = iVar6;
            } else {
                bVar4 = (&DAT_140a47f70)[bVar3];
                puVar1 = (ushort * )(param_2 + (ulonglong)(bVar4 + 0x101) * 4);
                iVar6 = *(int *) (param_1 + 0x1714);
                uVar11 = (uint) * (ushort * )(param_2 + 2 + (ulonglong)(bVar4 + 0x101) * 4);
                if ((int) (0x10 - uVar11) < iVar6) {
                    uVar12 = *puVar1;
                    *(ushort * )(param_1 + 0x1710) =
                            *(ushort * )(param_1 + 0x1710) | uVar12 << ((byte) iVar6 & 0x1f);
                    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                            *(undefined * )(param_1 + 0x1710);
                    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                            *(undefined * )(param_1 + 0x1711);
                    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                    iVar6 = *(int *) (param_1 + 0x1714) + -0x10;
                    *(ushort * )(param_1 + 0x1710) =
                            uVar12 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                } else {
                    *(ushort * )(param_1 + 0x1710) =
                            *(ushort * )(param_1 + 0x1710) | *puVar1 << ((byte) iVar6 & 0x1f);
                }
                iVar6 = iVar6 + uVar11;
                *(int *) (param_1 + 0x1714) = iVar6;
                iVar5 = *(int *) (&DAT_140a486d0 + (ulonglong) bVar4 * 4);
                if (iVar5 != 0) {
                    uVar12 = (ushort) bVar3 - (short) *(undefined4 * )(&DAT_140a48100 + (ulonglong) bVar4 * 4);
                    if (0x10 - iVar5 < iVar6) {
                        *(ushort * )(param_1 + 0x1710) =
                                *(ushort * )(param_1 + 0x1710) | uVar12 << ((byte) iVar6 & 0x1f);
                        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                *(undefined * )(param_1 + 0x1710);
                        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                *(undefined * )(param_1 + 0x1711);
                        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                        iVar6 = *(int *) (param_1 + 0x1714) + -0x10;
                        *(ushort * )(param_1 + 0x1710) =
                                uVar12 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                    } else {
                        *(ushort * )(param_1 + 0x1710) =
                                *(ushort * )(param_1 + 0x1710) | uVar12 << ((byte) iVar6 & 0x1f);
                    }
                    *(int *) (param_1 + 0x1714) = iVar6 + iVar5;
                }
                uVar11 = uVar10 - 1;
                if (uVar11 < 0x100) {
                    bVar3 = (&DAT_140a47d70)[uVar11];
                } else {
                    bVar3 = (&DAT_140a47d70)[(uVar11 >> 7) + 0x100];
                }
                iVar6 = *(int *) (param_1 + 0x1714);
                lVar2 = (ulonglong) bVar3 * 4;
                uVar9 = (uint) * (ushort * )(lVar2 + 2 + param_3);
                if ((int) (0x10 - uVar9) < iVar6) {
                    uVar10 = *(ushort * )(lVar2 + param_3);
                    *(ushort * )(param_1 + 0x1710) =
                            *(ushort * )(param_1 + 0x1710) | uVar10 << ((byte) iVar6 & 0x1f);
                    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                            *(undefined * )(param_1 + 0x1710);
                    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                            *(undefined * )(param_1 + 0x1711);
                    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                    iVar6 = *(int *) (param_1 + 0x1714) + -0x10;
                    *(ushort * )(param_1 + 0x1710) =
                            uVar10 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                } else {
                    *(ushort * )(param_1 + 0x1710) =
                            *(ushort * )(param_1 + 0x1710) | *(short *) (lVar2 + param_3) << ((byte) iVar6 & 0x1f);
                }
                iVar6 = iVar6 + uVar9;
                *(int *) (param_1 + 0x1714) = iVar6;
                iVar5 = *(int *) (&DAT_140a48650 + lVar2);
                if (iVar5 != 0) {
                    uVar10 = (short) uVar11 - (short) *(undefined4 * )(&DAT_140a48750 + lVar2);
                    if (0x10 - iVar5 < iVar6) {
                        *(ushort * )(param_1 + 0x1710) =
                                *(ushort * )(param_1 + 0x1710) | uVar10 << ((byte) iVar6 & 0x1f);
                        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                *(undefined * )(param_1 + 0x1710);
                        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                                *(undefined * )(param_1 + 0x1711);
                        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
                        iVar6 = *(int *) (param_1 + 0x1714) + -0x10;
                        *(ushort * )(param_1 + 0x1710) =
                                uVar10 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
                    } else {
                        *(ushort * )(param_1 + 0x1710) =
                                *(ushort * )(param_1 + 0x1710) | uVar10 << ((byte) iVar6 & 0x1f);
                    }
                    iVar6 = iVar6 + iVar5;
                    goto LAB_1401cd0ac;
                }
            }
        } while (uVar7 < *(uint * )(param_1 + 0x16f4));
    }
    uVar10 = *(ushort * )(param_2 + 0x402);
    iVar6 = *(int *) (param_1 + 0x1714);
    if (iVar6 <= (int) (0x10 - (uint) uVar10)) {
        *(ushort * )(param_1 + 0x1710) =
                *(ushort * )(param_1 + 0x1710) | *(short *) (param_2 + 0x400) << ((byte) iVar6 & 0x1f);
        *(uint * )(param_1 + 0x1714) = iVar6 + (uint) uVar10;
        return;
    }
    uVar12 = *(ushort * )(param_2 + 0x400);
    *(ushort * )(param_1 + 0x1710) = *(ushort * )(param_1 + 0x1710) | uVar12 << ((byte) iVar6 & 0x1f);
    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
            *(undefined * )(param_1 + 0x1710);
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
            *(undefined * )(param_1 + 0x1711);
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    *(ushort * )(param_1 + 0x1710) = uVar12 >> (0x10U - (char) *(int *) (param_1 + 0x1714) & 0x1f);
    *(uint * )(param_1 + 0x1714) = (uVar10 - 0x10) + *(int *) (param_1 + 0x1714);
    return;
}


undefined8 FUN_1401cd180(longlong param_1) {
    short *psVar1;
    longlong lVar2;
    ulonglong uVar3;

    lVar2 = 0;
    uVar3 = 0xf3ffc07f;
    psVar1 = (short *) (param_1 + 0xbc);
    while (((uVar3 & 1) == 0 || (*psVar1 == 0))) {
        lVar2 = lVar2 + 1;
        psVar1 = psVar1 + 2;
        uVar3 = uVar3 >> 1;
        if (0x1f < lVar2) {
            if (((*(short *) (param_1 + 0xe0) == 0) && (*(short *) (param_1 + 0xe4) == 0)) &&
                (*(short *) (param_1 + 0xf0) == 0)) {
                lVar2 = 0x20;
                psVar1 = (short *) (param_1 + 0x13c);
                while (*psVar1 == 0) {
                    lVar2 = lVar2 + 1;
                    psVar1 = psVar1 + 2;
                    if (0xff < lVar2) {
                        return 0;
                    }
                }
            }
            return 1;
        }
    }
    return 0;
}


void FUN_1401cd200(longlong param_1) {
    if (*(int *) (param_1 + 0x1714) == 0x10) {
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1711);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(undefined4 * )(param_1 + 0x1714) = 0;
        *(undefined2 * )(param_1 + 0x1710) = 0;
        return;
    }
    if (7 < *(int *) (param_1 + 0x1714)) {
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        *(int *) (param_1 + 0x1714) = *(int *) (param_1 + 0x1714) + -8;
        *(ushort * )(param_1 + 0x1710) = (ushort) * (byte * )(param_1 + 0x1711);
    }
    return;
}


void FUN_1401cd290(longlong param_1) {
    undefined uVar1;

    if (*(int *) (param_1 + 0x1714) < 9) {
        if (*(int *) (param_1 + 0x1714) < 1) goto LAB_1401cd2d7;
        uVar1 = *(undefined * )(param_1 + 0x1710);
    } else {
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        uVar1 = *(undefined * )(param_1 + 0x1711);
    }
    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) = uVar1;
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    LAB_1401cd2d7:
    *(undefined2 * )(param_1 + 0x1710) = 0;
    *(undefined4 * )(param_1 + 0x1714) = 0;
    return;
}


void FUN_1401cd2f0(longlong param_1, undefined *param_2, int param_3) {
    undefined uVar1;
    byte bVar2;
    uint uVar3;

    if (*(int *) (param_1 + 0x1714) < 9) {
        if (*(int *) (param_1 + 0x1714) < 1) goto LAB_1401cd33f;
        uVar1 = *(undefined * )(param_1 + 0x1710);
    } else {
        *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) =
                *(undefined * )(param_1 + 0x1710);
        *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
        uVar1 = *(undefined * )(param_1 + 0x1711);
    }
    *(undefined * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) = uVar1;
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    LAB_1401cd33f:
    *(undefined2 * )(param_1 + 0x1710) = 0;
    *(undefined4 * )(param_1 + 0x1714) = 0;
    *(byte * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) = (byte) param_3;
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    bVar2 = (byte)((uint) param_3 >> 8);
    *(byte * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) = bVar2;
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    *(byte * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) = ~(byte) param_3;
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    *(byte * )((ulonglong) * (uint * )(param_1 + 0x28) + *(longlong * )(param_1 + 0x10)) = ~bVar2;
    *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
    uVar3 = *(uint * )(param_1 + 0x28);
    if (param_3 != 0) {
        do {
            *(undefined * )((ulonglong) uVar3 + *(longlong * )(param_1 + 0x10)) = *param_2;
            *(int *) (param_1 + 0x28) = *(int *) (param_1 + 0x28) + 1;
            uVar3 = *(uint * )(param_1 + 0x28);
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return;
}


uint FUN_1401cd3e0(uint param_1, byte *param_2, uint param_3) {
    byte bVar1;
    uint uVar2;
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
    byte *pbVar19;
    ulonglong uVar20;

    uVar2 = param_1 & 0xffff;
    param_1 = param_1 >> 0x10;
    if (param_3 == 1) {
        uVar2 = uVar2 + *param_2;
        if (0xfff0 < uVar2) {
            uVar2 = uVar2 - 0xfff1;
        }
        param_1 = param_1 + uVar2;
        if (0xfff0 < param_1) {
            return (param_1 - 0xfff1) * 0x10000 | uVar2;
        }
    } else {
        if (param_2 == (byte *) 0x0) {
            return 1;
        }
        if (param_3 < 0x10) {
            if (param_3 != 0) {
                do {
                    bVar1 = *param_2;
                    param_2 = param_2 + 1;
                    uVar2 = uVar2 + bVar1;
                    param_1 = param_1 + uVar2;
                    param_3 = param_3 - 1;
                } while (param_3 != 0);
            }
            if (0xfff0 < uVar2) {
                uVar2 = uVar2 - 0xfff1;
            }
            return (param_1 + (param_1 / 0xfff1) * 0xf) * 0x10000 | uVar2;
        }
        if (0x15af < param_3) {
            uVar20 = (ulonglong) param_3 / 0x15b0;
            do {
                param_3 = param_3 - 0x15b0;
                iVar18 = 0x15b;
                pbVar19 = param_2;
                do {
                    param_2 = pbVar19 + 0x10;
                    iVar3 = uVar2 + *pbVar19;
                    iVar4 = iVar3 + (uint) pbVar19[1];
                    iVar5 = iVar4 + (uint) pbVar19[2];
                    iVar6 = iVar5 + (uint) pbVar19[3];
                    iVar7 = iVar6 + (uint) pbVar19[4];
                    iVar8 = iVar7 + (uint) pbVar19[5];
                    iVar9 = iVar8 + (uint) pbVar19[6];
                    iVar10 = iVar9 + (uint) pbVar19[7];
                    iVar11 = iVar10 + (uint) pbVar19[8];
                    iVar12 = iVar11 + (uint) pbVar19[9];
                    iVar13 = iVar12 + (uint) pbVar19[10];
                    iVar14 = iVar13 + (uint) pbVar19[0xb];
                    iVar15 = iVar14 + (uint) pbVar19[0xc];
                    iVar16 = iVar15 + (uint) pbVar19[0xd];
                    iVar17 = iVar16 + (uint) pbVar19[0xe];
                    uVar2 = iVar17 + (uint) pbVar19[0xf];
                    param_1 = param_1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                              iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
                    iVar18 = iVar18 + -1;
                    pbVar19 = param_2;
                } while (iVar18 != 0);
                uVar2 = uVar2 % 0xfff1;
                param_1 = param_1 % 0xfff1;
                uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
        }
        if (param_3 != 0) {
            if (0xf < param_3) {
                uVar20 = (ulonglong)(param_3 >> 4);
                pbVar19 = param_2;
                do {
                    param_3 = param_3 - 0x10;
                    param_2 = pbVar19 + 0x10;
                    iVar18 = uVar2 + *pbVar19;
                    iVar3 = iVar18 + (uint) pbVar19[1];
                    iVar4 = iVar3 + (uint) pbVar19[2];
                    iVar5 = iVar4 + (uint) pbVar19[3];
                    iVar6 = iVar5 + (uint) pbVar19[4];
                    iVar7 = iVar6 + (uint) pbVar19[5];
                    iVar8 = iVar7 + (uint) pbVar19[6];
                    iVar9 = iVar8 + (uint) pbVar19[7];
                    iVar10 = iVar9 + (uint) pbVar19[8];
                    iVar11 = iVar10 + (uint) pbVar19[9];
                    iVar12 = iVar11 + (uint) pbVar19[10];
                    iVar13 = iVar12 + (uint) pbVar19[0xb];
                    iVar14 = iVar13 + (uint) pbVar19[0xc];
                    iVar15 = iVar14 + (uint) pbVar19[0xd];
                    iVar16 = iVar15 + (uint) pbVar19[0xe];
                    uVar2 = iVar16 + (uint) pbVar19[0xf];
                    param_1 = param_1 + iVar18 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 +
                              iVar10 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + uVar2;
                    uVar20 = uVar20 - 1;
                    pbVar19 = param_2;
                } while (uVar20 != 0);
            }
            for (; param_3 != 0; param_3 = param_3 - 1) {
                bVar1 = *param_2;
                param_2 = param_2 + 1;
                uVar2 = uVar2 + bVar1;
                param_1 = param_1 + uVar2;
            }
            uVar2 = uVar2 % 0xfff1;
            param_1 = param_1 % 0xfff1;
        }
    }
    return param_1 << 0x10 | uVar2;
}


undefined8 FUN_1401cd6c0(undefined8 param_1, longlong param_2) {
    undefined8 uVar1;

    if (param_2 == 0) {
        return 0;
    }
    uVar1 = FUN_1401cd6d0();
    return uVar1;
}


uint FUN_1401cd6d0(uint param_1, uint *param_2, uint param_3) {
    byte bVar1;
    ulonglong uVar2;
    uint *puVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar5 = (ulonglong) param_3;
    param_1 = ~param_1;
    if (param_3 != 0) {
        do {
            if (((ulonglong) param_2 & 3) == 0) break;
            bVar1 = *(byte *) param_2;
            param_2 = (uint * )((longlong) param_2 + 1);
            param_1 = *(uint * )(&DAT_140a487d0 + (ulonglong)(byte)(bVar1 ^ (byte) param_1) * 4) ^
                      param_1 >> 8;
            uVar4 = (int) uVar5 - 1;
            uVar5 = (ulonglong) uVar4;
        } while (uVar4 != 0);
    }
    if (0x1f < (uint) uVar5) {
        uVar2 = uVar5 >> 5;
        puVar3 = param_2;
        do {
            param_1 = param_1 ^ *puVar3;
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(param_1 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(param_1 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(param_1 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(param_1 & 0xff) * 4) ^ puVar3[1];
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar3[2];
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar3[3];
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar3[4];
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar3[5];
            param_2 = puVar3 + 8;
            uVar5 = (ulonglong)((int) uVar5 - 0x20);
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar3[6];
            uVar4 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                    *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                    *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                    *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4) ^ puVar3[7];
            param_1 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(uVar4 >> 0x10) * 4) ^
                      *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(uVar4 >> 8) * 4) ^
                      *(uint * )(&DAT_140a487d0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
                      *(uint * )(&DAT_140a493d0 + (ulonglong)(uVar4 & 0xff) * 4);
            uVar2 = uVar2 - 1;
            puVar3 = param_2;
        } while (uVar2 != 0);
    }
    if (3 < (uint) uVar5) {
        uVar2 = uVar5 >> 2;
        do {
            param_1 = param_1 ^ *param_2;
            param_2 = param_2 + 1;
            uVar5 = (ulonglong)((int) uVar5 - 4);
            param_1 = *(uint * )(&DAT_140a48bd0 + (ulonglong)(byte)(param_1 >> 0x10) * 4) ^
                      *(uint * )(&DAT_140a48fd0 + (ulonglong)(byte)(param_1 >> 8) * 4) ^
                      *(uint * )(&DAT_140a487d0 + (ulonglong)(param_1 >> 0x18) * 4) ^
                      *(uint * )(&DAT_140a493d0 + (ulonglong)(param_1 & 0xff) * 4);
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    uVar4 = (uint) uVar5;
    while (uVar4 != 0) {
        bVar1 = *(byte *) param_2;
        param_2 = (uint * )((longlong) param_2 + 1);
        param_1 = *(uint * )(&DAT_140a487d0 + (ulonglong)(byte)(bVar1 ^ (byte) param_1) * 4) ^
                  param_1 >> 8;
        uVar4 = (int) uVar5 - 1;
        uVar5 = (ulonglong) uVar4;
    }
    return ~param_1;
}


void FUN_1401cd9d0(undefined8 param_1, int param_2, int param_3) {
    malloc((ulonglong)(uint)(param_2 * param_3));
    return;
}


void FUN_1401cd9e0(undefined8 param_1, void *param_2) {
    free(param_2);
    return;
}


void FUN_1401cd9f0(longlong *param_1, int param_2) {
    longlong lVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    char *pcVar11;
    uint uVar12;
    ulonglong uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    byte *pbVar17;
    byte *pbVar18;
    longlong lVar19;
    undefined *puVar20;
    undefined *puVar21;
    undefined *puVar22;
    undefined *puVar23;
    undefined *puVar24;
    char cVar25;
    uint uVar26;
    int iVar27;
    byte *pbVar28;
    int local_68;

    puVar7 = (undefined4 *) param_1[5];
    iVar2 = *(int *) (param_1 + 3);
    lVar19 = *(longlong * )(puVar7 + 0x16);
    lVar8 = *(longlong * )(puVar7 + 0x18);
    uVar3 = puVar7[0xd];
    uVar16 = puVar7[0x10];
    uVar26 = puVar7[0x11];
    puVar20 = (undefined * )(param_1[2] + -1);
    uVar4 = puVar7[0x1a];
    pbVar17 = (byte * )(*param_1 + -1);
    local_68 = (int) puVar20 - (param_2 - iVar2);
    iVar27 = puVar7[0xb];
    uVar5 = puVar7[0xc];
    lVar9 = *(longlong * )(puVar7 + 0xe);
    pbVar28 = pbVar17 + (*(int *) (param_1 + 1) - 5);
    uVar6 = puVar7[0x1b];
    puVar22 = puVar20;
    LAB_1401cdab0:
    if (uVar26 < 0xf) {
        pbVar18 = pbVar17 + 1;
        pbVar17 = pbVar17 + 2;
        uVar16 = uVar16 + ((uint) * pbVar18 << ((byte) uVar26 & 0x1f)) +
                 ((uint) * pbVar17 << ((byte) uVar26 + 8 & 0x1f));
        uVar26 = uVar26 + 0x10;
    }
    uVar14 = *(uint * )(lVar19 + (ulonglong)(uVar16 & (1 << ((byte) uVar4 & 0x1f)) - 1U) * 4);
    uVar12 = uVar14 >> 8 & 0xff;
    uVar16 = uVar16 >> ((byte) uVar12 & 0x1f);
    uVar26 = uVar26 - uVar12;
    cVar25 = (char) uVar14;
    while (cVar25 != '\0') {
        puVar21 = puVar22;
        if ((uVar14 & 0x10) != 0) {
            uVar12 = uVar14 >> 0x10;
            uVar14 = uVar14 & 0xf;
            pbVar18 = pbVar17;
            if (uVar14 != 0) {
                if (uVar26 < uVar14) {
                    pbVar18 = pbVar17 + 1;
                    pbVar17 = pbVar17 + 1;
                    uVar16 = uVar16 + ((uint) * pbVar18 << ((byte) uVar26 & 0x1f));
                    uVar26 = uVar26 + 8;
                }
                uVar10 = (1 << (sbyte) uVar14) - 1U & uVar16;
                uVar16 = uVar16 >> (sbyte) uVar14;
                uVar12 = uVar12 + uVar10;
                uVar26 = uVar26 - uVar14;
                pbVar18 = pbVar17;
            }
            if (uVar26 < 0xf) {
                pbVar17 = pbVar18 + 1;
                pbVar18 = pbVar18 + 2;
                uVar16 = uVar16 + ((uint) * pbVar17 << ((byte) uVar26 & 0x1f)) +
                         ((uint) * pbVar18 << ((byte) uVar26 + 8 & 0x1f));
                uVar26 = uVar26 + 0x10;
            }
            uVar14 = *(uint * )(lVar8 + (ulonglong)((1 << ((byte) uVar6 & 0x1f)) - 1U & uVar16) * 4);
            uVar15 = uVar14 & 0xff;
            uVar10 = uVar14 >> 8 & 0xff;
            uVar16 = uVar16 >> ((byte) uVar10 & 0x1f);
            uVar26 = uVar26 - uVar10;
            if ((uVar14 & 0x10) == 0) goto LAB_1401cdbc0;
            goto LAB_1401cdbf5;
        }
        if ((uVar14 & 0x40) != 0) {
            if ((uVar14 & 0x20) == 0) {
                param_1[4] = (longlong) s_invalid_literal_length_code_140c2d398;
                *puVar7 = 0x1d;
            } else {
                *puVar7 = 0xb;
            }
            goto LAB_1401cde63;
        }
        uVar14 = *(uint * )(lVar19 + (ulonglong)
                                             (((1 << ((byte) uVar14 & 0x1f)) - 1U & uVar16) + (uVar14 >> 0x10)) *
                                     4);
        uVar12 = uVar14 >> 8 & 0xff;
        uVar16 = uVar16 >> ((byte) uVar12 & 0x1f);
        uVar26 = uVar26 - uVar12;
        cVar25 = (char) uVar14;
    }
    puVar22[1] = (char) (uVar14 >> 0x10);
    puVar21 = puVar22 + 1;
    goto LAB_1401cddf5;
    while (true) {
        uVar14 = *(uint * )(lVar8 + (ulonglong)
                                            (((1 << ((byte) uVar15 & 0x1f)) - 1U & uVar16) + (uVar14 >> 0x10)) * 4
        );
        uVar15 = uVar14 & 0xff;
        uVar10 = uVar14 >> 8 & 0xff;
        uVar16 = uVar16 >> ((byte) uVar10 & 0x1f);
        uVar26 = uVar26 - uVar10;
        if ((uVar14 & 0x10) != 0) break;
        LAB_1401cdbc0:
        if ((uVar15 & 0x40) != 0) {
            pcVar11 = s_invalid_distance_code_140c2d3b8;
            goto LAB_1401cde3c;
        }
    }
    LAB_1401cdbf5:
    uVar15 = uVar15 & 0xf;
    pbVar17 = pbVar18;
    uVar10 = uVar26;
    if (uVar26 < uVar15) {
        pbVar17 = pbVar18 + 1;
        uVar10 = uVar26 + 8;
        uVar16 = uVar16 + ((uint) pbVar18[1] << ((byte) uVar26 & 0x1f));
        if (uVar10 < uVar15) {
            pbVar17 = pbVar18 + 2;
            uVar16 = uVar16 + ((uint) pbVar18[2] << ((byte) uVar10 & 0x1f));
            uVar10 = uVar26 + 0x10;
        }
    }
    uVar26 = uVar10 - uVar15;
    uVar10 = (1 << (sbyte) uVar15) - 1U & uVar16;
    uVar16 = uVar16 >> (sbyte) uVar15;
    uVar10 = (uVar14 >> 0x10) + uVar10;
    uVar14 = (int) puVar22 - local_68;
    if (uVar10 <= uVar14) {
        puVar21 = puVar22 + -(ulonglong) uVar10;
        do {
            puVar24 = puVar22;
            puVar23 = puVar21;
            puVar22 = puVar24 + 3;
            puVar24[1] = puVar23[1];
            uVar12 = uVar12 - 3;
            puVar24[2] = puVar23[2];
            *puVar22 = puVar23[3];
            puVar21 = puVar23 + 3;
        } while (2 < uVar12);
        puVar21 = puVar22;
        if (uVar12 != 0) {
            puVar24[4] = puVar23[4];
            puVar21 = puVar24 + 4;
            if (1 < uVar12) {
                puVar24[5] = puVar23[5];
                puVar21 = puVar24 + 5;
            }
        }
        goto LAB_1401cddf5;
    }
    uVar14 = uVar10 - uVar14;
    if ((uVar5 < uVar14) && (puVar7[0x6f6] != 0)) {
        pcVar11 = s_invalid_distance_too_far_back_140c2d378;
        pbVar18 = pbVar17;
        LAB_1401cde3c:
        param_1[4] = (longlong) pcVar11;
        *puVar7 = 0x1d;
        pbVar17 = pbVar18;
        LAB_1401cde63:
        lVar19 = (longlong) pbVar17 - (ulonglong)(uVar26 >> 3);
        iVar27 = uVar26 - (uVar26 & 0xfffffff8);
        *param_1 = lVar19 + 1;
        param_1[2] = (longlong)(puVar21 + 1);
        *(int *) (param_1 + 1) = ((int) pbVar28 - (int) lVar19) + 5;
        *(int *) (param_1 + 3) = ((int) (puVar20 + (iVar2 - 0x101)) - (int) puVar21) + 0x101;
        puVar7[0x10] = uVar16 & (1 << ((byte) iVar27 & 0x1f)) - 1U;
        puVar7[0x11] = iVar27;
        return;
    }
    lVar1 = lVar9 + -1;
    if (uVar3 == 0) {
        puVar23 = (undefined * )(lVar1 + (ulonglong)(iVar27 - uVar14));
        if (uVar14 < uVar12) {
            uVar12 = uVar12 - uVar14;
            do {
                puVar22 = puVar23 + 1;
                puVar21 = puVar21 + 1;
                puVar23 = puVar23 + 1;
                *puVar21 = *puVar22;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            LAB_1401cdd23:
            puVar23 = puVar21 + -(ulonglong) uVar10;
            puVar22 = puVar21;
        }
    } else if (uVar3 < uVar14) {
        uVar15 = uVar14 - uVar3;
        puVar23 = (undefined * )(lVar1 + (ulonglong)((uVar3 - uVar14) + iVar27));
        if (uVar15 < uVar12) {
            uVar12 = uVar12 - uVar15;
            do {
                puVar24 = puVar21 + (longlong)(puVar23 + (1 - (longlong) puVar22));
                puVar21 = puVar21 + 1;
                *puVar21 = *puVar24;
                uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            puVar23 = (undefined * )(lVar9 + -1);
            puVar22 = puVar21;
            if (uVar3 < uVar12) {
                uVar12 = uVar12 - uVar3;
                uVar14 = uVar3;
                do {
                    puVar22 = puVar23 + 1;
                    puVar21 = puVar21 + 1;
                    puVar23 = puVar23 + 1;
                    *puVar21 = *puVar22;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
                goto LAB_1401cdd23;
            }
        }
    } else {
        puVar23 = (undefined * )(lVar1 + (ulonglong)(uVar3 - uVar14));
        if (uVar14 < uVar12) {
            uVar12 = uVar12 - uVar14;
            do {
                puVar22 = puVar23 + 1;
                puVar21 = puVar21 + 1;
                puVar23 = puVar23 + 1;
                *puVar21 = *puVar22;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            goto LAB_1401cdd23;
        }
    }
    if (2 < uVar12) {
        uVar13 = (ulonglong)((uVar12 - 3) / 3 + 1);
        puVar21 = puVar22;
        puVar24 = puVar23;
        do {
            puVar23 = puVar24 + 3;
            puVar22 = puVar21 + 3;
            puVar21[1] = puVar24[1];
            uVar12 = uVar12 - 3;
            puVar21[2] = puVar24[2];
            *puVar22 = *puVar23;
            uVar13 = uVar13 - 1;
            puVar21 = puVar22;
            puVar24 = puVar23;
        } while (uVar13 != 0);
    }
    puVar21 = puVar22;
    if (uVar12 != 0) {
        puVar22[1] = puVar23[1];
        puVar21 = puVar22 + 1;
        if (1 < uVar12) {
            puVar22[2] = puVar23[2];
            puVar21 = puVar22 + 2;
        }
    }
    LAB_1401cddf5:
    if ((pbVar28 <= pbVar17) || (puVar22 = puVar21, puVar20 + (iVar2 - 0x101) <= puVar21))
        goto LAB_1401cde63;
    goto LAB_1401cdab0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1401cded0(int param_1, ushort *param_2, ulonglong param_3, longlong *param_4, uint *param_5,
                   undefined *param_6) {
    ushort uVar1;
    code *pcVar2;
    char cVar3;
    byte bVar4;
    undefined2 uVar5;
    ushort *puVar6;
    uint uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    uint uVar12;
    uint uVar13;
    ulonglong uVar14;
    int iVar15;
    int iVar16;
    uint uVar17;
    uint uVar18;
    ulonglong uVar19;
    uint uVar20;
    bool bVar21;
    bool bVar22;
    undefined auStack248[32];
    undefined4 local_d8;
    uint local_d4;
    uint local_d0;
    uint local_cc;
    int local_c8;
    longlong local_c0;
    undefined *local_b8;
    uint local_b0;
    undefined *local_a8;
    longlong *local_a0;
    undefined *local_98;
    uint *local_90;
    ushort *local_88;
    ushort auStack128[16];
    ushort auStack96[16];
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    param_3 = param_3 & 0xffffffff;
    uVar10 = 0;
    local_90 = param_5;
    local_98 = param_6;
    uVar19 = uVar10;
    do {
        local_c8 = param_1;
        local_a0 = param_4;
        local_88 = param_2;
        if (0x1f < uVar19 * 2) {
            __report_rangecheckfailure();
            pcVar2 = (code *) swi(3);
            (*pcVar2)();
            return;
        }
        uVar17 = (int) uVar19 + 1;
        auStack128[uVar19] = 0;
        uVar19 = (ulonglong) uVar17;
    } while (uVar17 < 0x10);
    uVar17 = (uint) param_3;
    puVar6 = param_2;
    if (uVar17 != 0) {
        do {
            auStack128[*puVar6] = auStack128[*puVar6] + 1;
            param_3 = param_3 - 1;
            puVar6 = puVar6 + 1;
        } while (param_3 != 0);
    }
    uVar19 = 0xf;
    uVar13 = 0xffffffff;
    do {
        uVar18 = (uint) uVar19;
        if (auStack128[uVar19] != 0) break;
        uVar18 = uVar18 - 1;
        uVar19 = (ulonglong) uVar18;
    } while (uVar18 != 0);
    uVar7 = *param_5;
    if (uVar18 < *param_5) {
        uVar7 = uVar18;
    }
    if (uVar18 == 0) {
        local_d8 = 0x140;
        *(undefined4 * ) * param_4 = 0x140;
        *param_4 = *param_4 + 4;
        *(undefined4 * ) * param_4 = 0x140;
        *param_4 = *param_4 + 4;
        *param_5 = 1;
    } else {
        uVar20 = 1;
        if (1 < uVar18) {
            puVar6 = auStack128;
            do {
                puVar6 = puVar6 + 1;
                if (*puVar6 != 0) break;
                uVar20 = uVar20 + 1;
            } while (uVar20 < uVar18);
        }
        uVar19 = 1;
        local_cc = uVar7;
        if (uVar7 < uVar20) {
            local_cc = uVar20;
        }
        iVar11 = 1;
        do {
            iVar11 = iVar11 * 2 - (uint) auStack128[uVar19];
            if (iVar11 < 0) goto LAB_1401cdfc7;
            uVar7 = (int) uVar19 + 1;
            uVar19 = (ulonglong) uVar7;
        } while (uVar7 < 0x10);
        if ((iVar11 < 1) || ((param_1 != 0 && (uVar18 == 1)))) {
            auStack96[1] = 0;
            lVar8 = 0xe;
            uVar19 = uVar10;
            do {
                *(short *) ((longlong) auStack96 + uVar19 + 4) =
                        *(short *) ((longlong) auStack128 + uVar19 + 2) +
                        *(short *) ((longlong) auStack96 + uVar19 + 2);
                lVar8 = lVar8 + -1;
                uVar19 = uVar19 + 2;
            } while (lVar8 != 0);
            puVar6 = param_2;
            uVar19 = uVar10;
            if (uVar17 != 0) {
                do {
                    if (*puVar6 != 0) {
                        *(short *) (param_6 + (ulonglong) auStack96[*puVar6] * 2) = (short) uVar19;
                        auStack96[*puVar6] = auStack96[*puVar6] + 1;
                    }
                    uVar7 = (int) uVar19 + 1;
                    puVar6 = puVar6 + 1;
                    uVar19 = (ulonglong) uVar7;
                } while (uVar7 < uVar17);
            }
            if (param_1 == 0) {
                local_b8 = param_6;
                local_a8 = param_6;
                iVar11 = 0x13;
            } else if (param_1 == 1) {
                iVar11 = 0x100;
                local_a8 = &DAT_140a4a6ce;
                local_b8 = &DAT_140a4a68e;
            } else {
                iVar11 = -1;
                local_a8 = &DAT_140a4a910;
                local_b8 = &DAT_140a4a850;
            }
            local_c0 = *param_4;
            uVar17 = 1 << ((byte) local_cc & 0x1f);
            uVar19 = (ulonglong) uVar17;
            local_d0 = 0;
            local_b0 = uVar17 - 1;
            local_d4 = 0;
            lVar8 = local_c0;
            if (param_1 == 1) {
                uVar9 = uVar10;
                uVar14 = uVar10;
                if (uVar17 < 0x355) {
                    LAB_1401ce180:
                    cVar3 = (char) uVar20;
                    bVar4 = cVar3 - (char) uVar10;
                    uVar1 = *(ushort * )(param_6 + uVar14 * 2);
                    if ((int) (uint) uVar1 < iVar11) {
                        local_d8 = (uint) bVar4 << 8;
                        local_d8 = local_d8 | (uint) uVar1 << 0x10;
                    } else {
                        if (iVar11 < (int) (uint) uVar1) {
                            local_d8._0_2_ = CONCAT11(bVar4, local_b8[(ulonglong) uVar1 * 2]);
                            uVar5 = *(undefined2 * )(local_a8 + (ulonglong) uVar1 * 2);
                        } else {
                            local_d8 = CONCAT31((uint3) bVar4, 0x60);
                            uVar5 = 0;
                        }
                        local_d8 = CONCAT22(uVar5, (ushort) local_d8);
                    }
                    uVar7 = (uint) uVar9;
                    iVar15 = 1 << (cVar3 - (char) uVar10 & 0x1fU);
                    uVar9 = (ulonglong)((uVar7 >> ((byte) local_d4 & 0x1f)) + (int) uVar19);
                    uVar10 = uVar19;
                    do {
                        uVar9 = (ulonglong)(uint)((int) uVar9 - iVar15);
                        *(uint * )(lVar8 + uVar9 * 4) = local_d8;
                        uVar12 = (int) uVar10 - iVar15;
                        uVar10 = (ulonglong) uVar12;
                    } while (uVar12 != 0);
                    for (uVar12 = 1 << (cVar3 - 1U & 0x1f); (uVar7 & uVar12) != 0; uVar12 = uVar12 >> 1) {
                    }
                    if (uVar12 == 0) {
                        uVar9 = 0;
                    } else {
                        uVar9 = (ulonglong)((uVar7 & uVar12 - 1) + uVar12);
                    }
                    local_d0 = local_d0 + 1;
                    uVar14 = (ulonglong) local_d0;
                    puVar6 = auStack128 + uVar20;
                    *puVar6 = *puVar6 - 1;
                    if (*puVar6 == 0) {
                        if (uVar20 == uVar18) {
                            if ((uint) uVar9 != 0) {
                                local_d8._0_2_ = CONCAT11(cVar3 - (byte) local_d4, 0x40);
                                local_d8 = (uint)(ushort)
                                local_d8;
                                *(uint * )(lVar8 + uVar9 * 4) = local_d8;
                            }
                            *param_4 = *param_4 + (ulonglong) uVar17 * 4;
                            *param_5 = local_cc;
                            goto LAB_1401cdfc7;
                        }
                        uVar20 = (uint) param_2[*(ushort * )(param_6 + uVar14 * 2)];
                    }
                    uVar10 = (ulonglong) local_d4;
                    if (local_cc < uVar20) {
                        uVar7 = local_b0 & (uint) uVar9;
                        lVar8 = local_c0;
                        if (uVar7 != uVar13) {
                            if (local_d4 == 0) {
                                local_d4 = local_cc;
                            }
                            local_c0 = local_c0 + uVar19 * 4;
                            iVar16 = uVar20 - local_d4;
                            uVar13 = local_d4 + iVar16;
                            for (iVar15 = 1 << ((byte) iVar16 & 0x1f);
                                 (uVar13 < uVar18 &&
                                  (uVar10 = (ulonglong) uVar13, 0 < (int) (iVar15 - (uint) auStack128[uVar10])));
                                 iVar15 = (iVar15 - (uint) auStack128[uVar10]) * 2) {
                                uVar13 = uVar13 + 1;
                                iVar16 = iVar16 + 1;
                            }
                            uVar13 = 1 << ((byte) iVar16 & 0x1f);
                            uVar19 = (ulonglong) uVar13;
                            uVar17 = uVar17 + uVar13;
                            if (param_1 == 1) {
                                bVar21 = uVar17 < 0x354;
                                bVar22 = uVar17 == 0x354;
                                LAB_1401ce2f6:
                                if (!bVar21 && !bVar22) goto LAB_1401cdfc7;
                            } else if (param_1 == 2) {
                                bVar21 = uVar17 < 0x250;
                                bVar22 = uVar17 == 0x250;
                                goto LAB_1401ce2f6;
                            }
                            lVar8 = (ulonglong) uVar7 * 4;
                            *(byte * )(lVar8 + *param_4) = (byte) iVar16;
                            *(byte * )(lVar8 + 1 + *param_4) = (byte) local_cc;
                            *(short *) (lVar8 + 2 + *param_4) = (short) (local_c0 - *param_4 >> 2);
                            uVar10 = (ulonglong) local_d4;
                            lVar8 = local_c0;
                            uVar14 = (ulonglong) local_d0;
                            uVar13 = uVar7;
                        }
                    }
                    goto LAB_1401ce180;
                }
            } else {
                uVar10 = 0;
                uVar9 = 0;
                uVar14 = 0;
                uVar13 = 0xffffffff;
                if ((param_1 != 2) || (uVar17 < 0x251)) goto LAB_1401ce180;
            }
        }
    }
    LAB_1401cdfc7:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack248);
    return;
}


int FUN_1401ce3a0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x58);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1401ce7a0();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1401ce3e0(longlong *param_1, short *param_2) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar4 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = param_2[lVar4];
    }
    lVar2 = param_1[3];
    FUN_1401cfd00(param_1 + 2, lVar2 + lVar4 + 1);
    FUN_1407db590(param_1[2] + lVar2 * 2, param_2, (lVar4 + 1) * 2);
    lVar3 = param_1[1];
    lVar4 = lVar3 + 1;
    lVar5 = FUN_14018db00(*param_1, lVar4, 8);
    *(longlong * )(lVar5 + lVar3 * 8) = lVar2;
    if (*param_1 != lVar5) {
        FUN_1407db590(lVar5, *param_1, param_1[1] << 3);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = lVar4;
    return;
}


void FUN_1401ce4b0(longlong **param_1) {
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    int iVar6;
    longlong lVar7;
    longlong *plVar8;

    if ((longlong *) 0x1 < param_1[1]) {
        FUN_14001fec0(&LAB_1401ce790, *param_1, param_1[1], param_1[2]);
        plVar1 = *param_1;
        plVar2 = param_1[1];
        plVar3 = param_1[2];
        plVar8 = plVar1;
        plVar5 = plVar1;
        while (plVar5 = plVar5 + 1, plVar5 < plVar1 + (longlong) plVar2) {
            lVar4 = *plVar5;
            lVar7 = (longlong) plVar3 + lVar4 * 2;
            iVar6 = FUN_1401ce5b0((longlong) plVar3 + *plVar8 * 2, lVar7);
            if (iVar6 == 0) {
                lVar7 = FUN_1407dd988(lVar7, 0x7e);
                if (lVar7 != 0) {
                    *plVar8 = *plVar5;
                }
            } else {
                plVar8 = plVar8 + 1;
                *plVar8 = lVar4;
            }
        }
        FUN_14004eed0(param_1, ((longlong) plVar8 - (longlong) plVar1 >> 3) + 1);
    }
    return;
}


undefined8 FUN_1401ce5b0(short *param_1, short *param_2) {
    short sVar1;
    bool bVar2;
    undefined8 uVar3;
    short *psVar4;
    ulonglong uVar5;
    short *psVar6;
    short *psVar7;
    short sVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    short *psVar11;
    bool bVar12;

    sVar1 = *param_1;
    do {
        if (sVar1 == 0) {
            LAB_1401ce755:
            if (*param_2 == 0) {
                if (*param_1 != 0) {
                    LAB_1401ce763:
                    if (*param_2 == 0) {
                        return 1;
                    }
                }
                uVar3 = 0;
            } else {
                LAB_1401ce749:
                uVar3 = 0xffffffff;
            }
            return uVar3;
        }
        sVar8 = *param_2;
        if (sVar8 == 0) {
            if (*param_1 != 0) goto LAB_1401ce763;
            goto LAB_1401ce755;
        }
        psVar4 = (short *) 0x0;
        psVar6 = param_1;
        if (sVar1 == 0) {
            LAB_1401ce61f:
            psVar4 = psVar6;
            psVar6 = psVar4;
        } else {
            do {
                if (sVar1 == 0x5c) break;
                bVar12 = sVar1 == 0x2e;
                sVar1 = psVar6[1];
                if (bVar12) {
                    psVar4 = psVar6;
                }
                psVar6 = psVar6 + 1;
            } while (sVar1 != 0);
            if (psVar4 == (short *) 0x0) goto LAB_1401ce61f;
        }
        psVar7 = (short *) 0x0;
        psVar11 = param_2;
        do {
            if (sVar8 == 0x5c) break;
            bVar12 = sVar8 == 0x2e;
            sVar8 = psVar11[1];
            if (bVar12) {
                psVar7 = psVar11;
            }
            psVar11 = psVar11 + 1;
        } while (sVar8 != 0);
        if (psVar7 == (short *) 0x0) {
            psVar7 = psVar11;
        }
        uVar9 = (longlong) psVar6 - (longlong) psVar4 >> 1;
        uVar10 = (longlong) psVar11 - (longlong) psVar7 >> 1;
        uVar5 = uVar9;
        if (uVar10 < uVar9) {
            uVar5 = uVar10;
        }
        uVar3 = FUN_14018e3e0(psVar4, psVar7, uVar5);
        if ((int) uVar3 != 0) {
            return uVar3;
        }
        if (uVar9 < uVar10) goto LAB_1401ce749;
        if (uVar10 < uVar9) {
            return 1;
        }
        uVar5 = (longlong) psVar4 - (longlong) param_1 >> 1;
        uVar9 = (longlong) psVar7 - (longlong) param_2 >> 1;
        if (((uVar5 == 8) && (param_1[6] == 0x7e)) && ((ushort)(param_1[7] - 0x30U) < 10)) {
            bVar12 = true;
        } else {
            bVar12 = false;
        }
        if (((uVar9 == 8) && (param_2[6] == 0x7e)) && ((ushort)(param_2[7] - 0x30U) < 10)) {
            bVar2 = true;
        } else {
            bVar2 = false;
        }
        if (bVar12) {
            uVar5 = 2;
        }
        if (bVar2) {
            uVar9 = 2;
        }
        uVar3 = FUN_14018e3e0(param_1, param_2);
        if ((int) uVar3 != 0) {
            return uVar3;
        }
        if ((!bVar12) && (uVar5 < uVar9)) goto LAB_1401ce749;
        if ((!bVar2) && (uVar9 < uVar5)) {
            return 1;
        }
        param_1 = psVar6 + (*psVar6 != 0);
        param_2 = psVar11 + (*psVar11 != 0);
        sVar1 = *param_1;
    } while (true);
}


void FUN_1401ce7a0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    DWORD *pDVar6;
    undefined8 local_res8;
    undefined8 local_res10;

    lVar2 = param_1[1];
    uVar5 = 0;
    *param_1 = &PTR_LAB_140b5f928;
    if (lVar2 != 0) {
        pDVar6 = (DWORD * )(lVar2 + 0xa8);
        DVar4 = GetCurrentThreadId();
        if (*pDVar6 == DVar4) {
            *(longlong * )(lVar2 + 0xb0) = *(longlong * )(lVar2 + 0xb0) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0xb0);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar6 = DVar4;
                    goto LAB_1401ce818;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(pDVar6, DVar4);
        }
        LAB_1401ce818:
        local_res8 = param_1[8];
        local_res10 = local_res8;
        FUN_1401cfd80(param_1[1] + 0x88, &local_res8);
        if (*(ulonglong * )(lVar2 + 0xb0) < 2) {
            *pDVar6 = 0;
            *(undefined8 * )(lVar2 + 0xb0) = 0;
            if (*(longlong * )(lVar2 + 0xb8) != 0) {
                if (*(longlong * )(lVar2 + 0xc0) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar2 + 0xc0);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar2 + 0xc0));
            }
        } else {
            *(longlong * )(lVar2 + 0xb0) = *(longlong * )(lVar2 + 0xb0) + -1;
        }
    }
    FUN_14018b900(param_1[2], 0);
    if ((undefined8 *) param_1[9] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[9] = param_1[10];
    }
    if (param_1[10] != 0) {
        *(undefined8 * )(param_1[10] + 0x48) = param_1[9];
    }
    param_1[10] = 0;
    param_1[9] = 0;
    return;
}


void FUN_1401ce8e0(longlong param_1, longlong param_2, undefined8 *param_3) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    DWORD DVar8;
    undefined8 uVar9;
    longlong lVar10;
    HANDLE hObject;
    ulonglong uVar11;
    DWORD *pDVar12;
    undefined auStack648[32];
    undefined8 local_268;
    longlong local_260;
    undefined local_258[528];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack648;
    FUN_1401b5020(DAT_140c63788, local_258, param_3, *param_3);
    for (lVar2 = *(longlong * )(param_2 + 0xd0); lVar2 != 0; lVar2 = *(longlong * )(lVar2 + 0x498)) {
        iVar7 = FUN_14018e3e0(local_258, lVar2 + 0x218,
                              (*(longlong * )(lVar2 + 0x428) - lVar2) + -0x218 >> 1);
        if (iVar7 == 0) {
            *(longlong * )(param_1 + 8) = param_2;
            *(undefined8 * )(param_1 + 0x10) = *param_3;
            *(undefined4 * )(param_1 + 0x18) = *(undefined4 * )(param_3 + 1);
            *(undefined8 * )(param_1 + 0x28) = param_3[3];
            *(undefined8 * )(param_1 + 0x20) = param_3[2];
            *(undefined8 * )(param_1 + 0x30) = param_3[4];
            *(undefined8 * )(param_1 + 0x38) = param_3[5];
            uVar9 = FUN_14018e9c0();
            lVar2 = *(longlong * )(param_1 + 8);
            pDVar12 = (DWORD * )(lVar2 + 0xa8);
            *(undefined8 * )(param_1 + 0x10) = uVar9;
            DVar8 = GetCurrentThreadId();
            uVar11 = 0;
            if (*pDVar12 != DVar8) goto LAB_1401cea30;
            *(longlong * )(lVar2 + 0xb0) = *(longlong * )(lVar2 + 0xb0) + 1;
            goto LAB_1401cea54;
        }
    }
    goto LAB_1401ce96a;
    while (uVar11 = uVar11 + 1, uVar11 < 0x400) {
        LAB_1401cea30:
        LOCK();
        puVar1 = (ulonglong * )(lVar2 + 0xb0);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
        if (uVar3 == 0) {
            *pDVar12 = DVar8;
            goto LAB_1401cea54;
        }
    }
    FUN_14019fb60(pDVar12);
    LAB_1401cea54:
    lVar4 = *(longlong * )(param_1 + 8);
    uVar9 = *(undefined8 * )(param_1 + 0x10);
    lVar10 = *(longlong * )(lVar4 + 0x90);
    local_268 = uVar9;
    lVar6 = lVar10;
    lVar5 = *(longlong * )(lVar10 + 8);
    local_260 = param_1;
    while (lVar5 != 0) {
        iVar7 = FUN_1401ce5b0(uVar9, *(undefined8 * )(lVar5 + 0x20));
        lVar6 = lVar5;
        if (iVar7 < 0) {
            lVar5 = *(longlong * )(lVar5 + 0x10);
        } else {
            lVar5 = *(longlong * )(lVar5 + 0x18);
        }
    }
    if ((lVar6 == lVar10) || (iVar7 = FUN_1401ce5b0(uVar9, *(undefined8 * )(lVar6 + 0x20)), iVar7 < 0)) {
        lVar10 = FUN_14018b280(0x30);
        if ((undefined8 * )(lVar10 + 0x20) != (undefined8 *) 0x0) {
            *(undefined8 * )(lVar10 + 0x20) = uVar9;
            *(longlong * )(lVar10 + 0x28) = param_1;
        }
        *(longlong * )(lVar6 + 0x10) = lVar10;
        lVar5 = *(longlong * )(lVar4 + 0x90);
        if (lVar6 == lVar5) {
            *(longlong * )(lVar5 + 8) = lVar10;
            *(longlong * )(*(longlong * )(lVar4 + 0x90) + 0x18) = lVar10;
        } else if (lVar6 == *(longlong * )(lVar5 + 0x10)) {
            *(longlong * )(lVar5 + 0x10) = lVar10;
        }
    } else {
        lVar10 = FUN_14018b280(0x30, 0);
        if ((undefined8 * )(lVar10 + 0x20) != (undefined8 *) 0x0) {
            *(undefined8 * )(lVar10 + 0x20) = uVar9;
            *(longlong * )(lVar10 + 0x28) = param_1;
        }
        *(longlong * )(lVar6 + 0x18) = lVar10;
        if (lVar6 == *(longlong * )(*(longlong * )(lVar4 + 0x90) + 0x18)) {
            *(longlong * )(*(longlong * )(lVar4 + 0x90) + 0x18) = lVar10;
        }
    }
    *(longlong * )(lVar10 + 8) = lVar6;
    *(undefined8 * )(lVar10 + 0x10) = 0;
    *(undefined8 * )(lVar10 + 0x18) = 0;
    FUN_1400081c0(lVar10, *(longlong * )(lVar4 + 0x90) + 8);
    *(longlong * )(lVar4 + 0x98) = *(longlong * )(lVar4 + 0x98) + 1;
    *(longlong * )(param_1 + 0x40) = lVar10;
    if (*(ulonglong * )(lVar2 + 0xb0) < 2) {
        *pDVar12 = 0;
        *(undefined8 * )(lVar2 + 0xb0) = 0;
        if (*(longlong * )(lVar2 + 0xb8) != 0) {
            if (*(longlong * )(lVar2 + 0xc0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0xc0);
                uVar11 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar11 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar11 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0xc0));
        }
    } else {
        *(longlong * )(lVar2 + 0xb0) = *(longlong * )(lVar2 + 0xb0) + -1;
    }
    LAB_1401ce96a:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack648);
    return;
}


void FUN_1401cec10(longlong param_1) {
    if (*(longlong * )(param_1 + 0x440) != -1) {
        FUN_1401c35a0(*(longlong * )(param_1 + 0x440), param_1 + 0x450);
        CloseHandle(*(HANDLE * )(param_1 + 0x440));
    }
    if (*(longlong * )(param_1 + 0x448) != -1) {
        FUN_1401c35a0(*(longlong * )(param_1 + 0x448), param_1 + 0x470);
        CloseHandle(*(HANDLE * )(param_1 + 0x448));
    }
    FUN_14018b900(*(undefined8 * )(param_1 + 0x438), 0);
    if (*(undefined8 * *)(param_1 + 0x490) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x490) = *(undefined8 * )(param_1 + 0x498);
    }
    if (*(longlong * )(param_1 + 0x498) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x498) + 0x490) = *(undefined8 * )(param_1 + 0x490);
    }
    *(undefined8 * )(param_1 + 0x498) = 0;
    *(undefined8 * )(param_1 + 0x490) = 0;
    return;
}


undefined8 FUN_1401cecc0(longlong **param_1, undefined8 param_2, undefined8 param_3) {
    longlong lVar1;
    longlong lVar2;
    short sVar3;
    short sVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 uVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    short *psVar10;

    plVar6 = (longlong *) FUN_1401b5020(DAT_140c63788, param_1 + 1, param_3, param_2);
    pplVar8 = param_1 + 0x43;
    param_1[0x42] = plVar6;
    uVar7 = FUN_1401a3210(pplVar8, 0x104, param_1 + 0x85, param_1 + 0x86, 0, &DAT_140a486c8, param_1 + 1);
    if (-1 < (int) uVar7) {
        plVar6 = *param_1;
        lVar1 = *plVar6;
        lVar2 = *(longlong * )(lVar1 + 0x848);
        iVar5 = FUN_14018e3e0(pplVar8, lVar1 + 0x640, lVar2);
        if ((iVar5 == 0) && (*(short *) ((longlong) param_1 + lVar2 * 2 + 0x218) == 0x5c)) {
            param_1[0x84] = (longlong * )((longlong) param_1 + lVar2 * 2 + 0x21a);
        } else {
            param_1[0x84] = (longlong *) pplVar8;
        }
        for (lVar1 = plVar6[0x1a]; lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x498)) {
            sVar3 = *(short *) pplVar8;
            psVar10 = (short *) (lVar1 + 0x218);
            pplVar9 = pplVar8;
            while (true) {
                if (sVar3 == 0) {
                    return 0x80004005;
                }
                if (*psVar10 == 0) break;
                sVar3 = FUN_1407df5f4();
                sVar4 = FUN_1407df5f4();
                if (sVar4 != sVar3) break;
                pplVar9 = (longlong * *)((longlong) pplVar9 + 2);
                psVar10 = psVar10 + 1;
                sVar3 = *(short *) pplVar9;
            }
            if ((*(short *) pplVar9 == 0) || (*psVar10 == 0)) {
                return 0x80004005;
            }
        }
        plVar6 = (longlong *) FUN_14018b280(0xfff0, 0);
        pplVar8 = (longlong * *)(*param_1 + 0x1a);
        param_1[0x87] = plVar6;
        if (param_1[0x92] == (longlong *) 0x0) {
            param_1[0x92] = (longlong *) pplVar8;
            pplVar9 = param_1 + 0x93;
            *pplVar9 = *pplVar8;
            *pplVar8 = (longlong *) param_1;
            if (*pplVar9 != (longlong *) 0x0) {
                (*pplVar9)[0x92] = (longlong) pplVar9;
            }
        }
        FUN_1401cee70(param_1);
        uVar7 = 0;
    }
    return uVar7;
}


void FUN_1401cee70(longlong *param_1) {
    WCHAR WVar1;
    BOOL BVar2;
    WCHAR *pWVar3;
    HANDLE hFile;
    longlong lVar4;
    undefined auStackY680[32];
    byte local_268;
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStackY680;
    if (param_1[0x89] != -1) {
        FUN_1401c35a0(param_1[0x89], param_1 + 0x8e);
        CloseHandle((HANDLE) param_1[0x89]);
        param_1[0x89] = -1;
    }
    if ((HANDLE) param_1[0x88] != (HANDLE) 0xffffffffffffffff) {
        CloseHandle((HANDLE) param_1[0x88]);
        param_1[0x88] = -1;
    }
    lVar4 = 0x104;
    pWVar3 = local_228;
    do {
        if ((lVar4 == -0x7ffffefa) ||
            (WVar1 = *(WCHAR * )((longlong) param_1 + (8 - (longlong) local_228) + (longlong) pWVar3),
                    WVar1 == L'\0')) {
            if (lVar4 != 0) goto LAB_1401cef2d;
            break;
        }
        *pWVar3 = WVar1;
        pWVar3 = pWVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pWVar3 = pWVar3 + -1;
    LAB_1401cef2d:
    *pWVar3 = L'\0';
    pWVar3 = (WCHAR *) FUN_1407dd8d8(local_228, 0x5c);
    do {
        if ((((pWVar3 == (WCHAR *) 0x0) || (pWVar3 == local_228)) || (pWVar3[-1] == L':')) ||
            (pWVar3[-1] == L'\\'))
            goto LAB_1401cf021;
        *pWVar3 = L'\0';
        hFile = CreateFileW(local_228, 0x81, 7, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x42000000, (HANDLE) 0x0);
        param_1[0x88] = (longlong) hFile;
        if (hFile != (HANDLE) 0xffffffffffffffff) {
            BVar2 = GetFileInformationByHandle(hFile, (LPBY_HANDLE_FILE_INFORMATION) & local_268);
            if ((BVar2 != 0) && ((local_268 & 0x10) != 0)) {
                CreateIoCompletionPort((HANDLE) param_1[0x88], *(HANDLE * )(*param_1 + 0x50), 1, 0);
                LAB_1401cf021:
                if (param_1[0x88] != -1) {
                    ((LPOVERLAPPED)(param_1 + 0x8a))->Internal = 0;
                    param_1[0x8b] = 0;
                    param_1[0x8c] = 0;
                    param_1[0x8d] = 0;
                    param_1[0x8c] = (longlong) param_1;
                    BVar2 = ReadDirectoryChangesW
                            ((HANDLE) param_1[0x88], (LPVOID) 0x0, 0, 0, 2, (LPDWORD) 0x0,
                             (LPOVERLAPPED)(param_1 + 0x8a), (LPOVERLAPPED_COMPLETION_ROUTINE) 0x0);
                    if (BVar2 == 0) {
                        CloseHandle((HANDLE) param_1[0x88]);
                        param_1[0x88] = -1;
                    }
                }
                FUN_1401cf0c0(param_1);
                FUN_1407db4f0(local_18 ^ (ulonglong) auStackY680);
                return;
            }
            CloseHandle((HANDLE) param_1[0x88]);
            param_1[0x88] = -1;
        }
        pWVar3 = (WCHAR *) FUN_1407dd8d8(local_228, 0x5c);
    } while (true);
}


void FUN_1401cf0c0(longlong *param_1) {
    BOOL BVar1;
    HANDLE hFile;
    undefined auStackY136[32];
    byte local_48;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStackY136;
    if (param_1[0x89] == -1) {
        hFile = CreateFileW((LPCWSTR)(param_1 + 1), 0x81, 7, (LPSECURITY_ATTRIBUTES) 0x0, 3, 0x42000000,
                            (HANDLE) 0x0);
        param_1[0x89] = (longlong) hFile;
        if (hFile != (HANDLE) 0xffffffffffffffff) {
            BVar1 = GetFileInformationByHandle(hFile, (LPBY_HANDLE_FILE_INFORMATION) & local_48);
            if ((BVar1 == 0) || ((local_48 & 0x10) == 0)) {
                CloseHandle((HANDLE) param_1[0x89]);
                param_1[0x89] = -1;
            } else {
                CreateIoCompletionPort((HANDLE) param_1[0x89], *(HANDLE * )(*param_1 + 0x50), 1, 0);
            }
        }
    }
    if (param_1[0x89] != -1) {
        ((LPOVERLAPPED)(param_1 + 0x8e))->Internal = 0;
        param_1[0x8f] = 0;
        param_1[0x90] = 0;
        param_1[0x91] = 0;
        param_1[0x90] = (longlong) param_1;
        BVar1 = ReadDirectoryChangesW
                ((HANDLE) param_1[0x89], (LPVOID) param_1[0x87], 0xfff0, 1, 0x1b, (LPDWORD) 0x0,
                 (LPOVERLAPPED)(param_1 + 0x8e), (LPOVERLAPPED_COMPLETION_ROUTINE) 0x0);
        if (BVar1 == 0) {
            CloseHandle((HANDLE) param_1[0x89]);
            param_1[0x89] = -1;
        }
    }
    FUN_1407db4f0(local_10 ^ (ulonglong) auStackY136);
    return;
}


undefined8 *FUN_1401cf210(undefined8 *param_1, undefined8 param_2) {
    undefined *puVar1;

    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 * )(param_1 + 1) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0x4c) = 3;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    puVar1 = (undefined *) FUN_14018b280(0x30, 0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 * )(param_1[0x12] + 8) = 0;
    *(undefined8 * )(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 * )(param_1[0x12] + 0x18) = param_1[0x12];
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    *param_1 = param_2;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    return param_1;
}


void FUN_1401cf300(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;

    if (*(longlong * )(param_1 + 0x58) != 0) {
        PostQueuedCompletionStatus(*(HANDLE * )(param_1 + 0x50), 0, 0, (LPOVERLAPPED) 0x0);
        (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x30))();
        (**(code * *)(**(longlong * *)(param_1 + 0x58) + 8))();
    }
    if (*(HANDLE * )(param_1 + 0x50) != (HANDLE) 0x0) {
        CloseHandle(*(HANDLE * )(param_1 + 0x50));
    }
    lVar1 = *(longlong * )(param_1 + 0xd0);
    while (lVar1 != 0) {
        FUN_1401cec10(lVar1);
        FUN_14018b900(lVar1);
        lVar1 = *(longlong * )(param_1 + 0xd0);
    }
    plVar2 = *(longlong * *)(param_1 + 0x60);
    if (plVar2 != (longlong *) 0x0) {
        lVar1 = plVar2[2];
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        lVar1 = *plVar2;
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(plVar2);
    }
    if (*(longlong * )(param_1 + 0xd0) != 0) {
        FUN_1401a4a00(param_1 + 0xd0);
    }
    if (*(longlong * )(param_1 + 200) != 0) {
        FUN_1401a4a00();
    }
    if (*(longlong * )(param_1 + 0xc0) != 0) {
        CloseHandle(*(HANDLE * )(param_1 + 0xc0));
    }
    FUN_140008410(param_1 + 0x88);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90));
    if (*(longlong * )(param_1 + 0x80) != 0) {
        CloseHandle(*(HANDLE * )(param_1 + 0x80));
    }
    FUN_140195d70(param_1 + 8);
    *(undefined4 * )(param_1 + 8) = 0;
    if (*(undefined8 * *)(param_1 + 0x18) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x18) = *(undefined8 * )(param_1 + 0x20);
    }
    if (*(undefined8 * *)(param_1 + 0x20) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x20) = *(undefined8 * )(param_1 + 0x18);
    }
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    return;
}


uint FUN_1401cf470(longlong *param_1) {
    uint uVar1;
    int iVar2;
    HANDLE pvVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    undefined4 local_28[2];
    longlong *local_20;
    code *local_18;
    undefined8 local_10;

    pvVar3 = CreateIoCompletionPort((HANDLE) 0xffffffffffffffff, (HANDLE) 0x0, 1, 0);
    param_1[10] = (longlong) pvVar3;
    if (pvVar3 == (HANDLE) 0x0) {
        uVar1 = GetLastError();
        if (0 < (int) uVar1) {
            return uVar1 & 0xffff | 0x80070000;
        }
    } else {
        pplVar5 = (longlong **) 0x0;
        if (*(int *) (*param_1 + 0x870) != 0) {
            pplVar4 = (longlong **) FUN_14018b280(0x4a0, 0);
            if (pplVar4 != (longlong **) 0x0) {
                pplVar4[0x92] = (longlong *) 0x0;
                pplVar4[0x93] = (longlong *) 0x0;
                *pplVar4 = param_1;
                pplVar4[0x87] = (longlong *) 0x0;
                pplVar4[0x88] = (longlong *) 0xffffffffffffffff;
                pplVar4[0x89] = (longlong *) 0xffffffffffffffff;
                pplVar5 = pplVar4;
            }
            iVar2 = FUN_1401cecc0(pplVar5, *param_1 + 0x640);
            if ((iVar2 < 0) && (pplVar5 != (longlong **) 0x0)) {
                FUN_1401cec10(pplVar5);
                FUN_14018b900(pplVar5, 0);
            }
        }
        if (param_1[0x1a] != 0) {
            local_28[0] = 0;
            local_18 = FUN_1401cf590;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 1, 0, local_28, 2);
        }
        uVar1 = 0;
    }
    return uVar1;
}


void FUN_1401cf590(longlong param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    char *local_38;
    undefined4 local_30;
    undefined4 local_2c;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    undefined4 local_10;

    puVar1 = (undefined8 *) FUN_14018b280(0x20);
    puVar2 = (undefined8 *) 0x0;
    if (puVar1 != (undefined8 *) 0x0) {
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar2 = puVar1;
    }
    *(undefined8 * *)(param_1 + 0x60) = puVar2;
    local_38 = "FileMonitor";
    local_30 = 1;
    local_2c = 2;
    local_20 = &LAB_1401cf610;
    local_18 = 0;
    local_10 = 1;
    local_28 = param_1;
    FUN_1401a0eb0(&local_38, 0, param_1 + 0x58);
    return;
}


void FUN_1401cfd00(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1, param_2, 2);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2, *param_1, param_1[1] * 2);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}


void FUN_1401cfd80(longlong param_1, longlong *param_2) {
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

    lVar1 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8a26c, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001401cfe46. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        uVar3 = FUN_140007db0(*param_2, lVar1 + 8, lVar1 + 0x10, lVar1 + 0x18);
        FUN_14018b900(uVar3, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


void FUN_1401cfe80(longlong *param_1, undefined8 param_2, code *param_3) {
    longlong *plVar1;
    longlong lVar2;
    bool bVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;

    lVar9 = 1;
    LAB_1401cfeb0:
    lVar5 = *param_1;
    bVar3 = true;
    lVar2 = lVar9;
    lVar7 = lVar5;
    do {
        for (; (lVar6 = lVar9, lVar8 = lVar9, lVar5 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar5 = *(longlong * )(lVar5 + 0x50);
        }
        while (true) {
            if (lVar5 == 0) goto LAB_1401cff51;
            if (lVar6 == 0) goto LAB_1401cff60;
            if (lVar8 == 0) break;
            iVar4 = (*param_3)(lVar7, lVar5, 0);
            if (iVar4 < 1) {
                lVar7 = *(longlong * )(lVar7 + 0x50);
                lVar6 = lVar6 + -1;
            } else {
                lVar8 = lVar8 + -1;
                **(undefined8 * *)(lVar5 + 0x48) = *(undefined8 * )(lVar5 + 0x50);
                plVar1 = *(longlong * *)(lVar5 + 0x48);
                lVar2 = *plVar1;
                if (lVar2 != 0) {
                    *(longlong * *)(lVar2 + 0x48) = plVar1;
                }
                plVar1 = *(longlong * *)(lVar7 + 0x48);
                *(longlong * )(lVar5 + 0x50) = lVar7;
                *(longlong * *)(lVar5 + 0x48) = plVar1;
                *plVar1 = lVar5;
                *(longlong * *)(lVar7 + 0x48) = (longlong * )(lVar5 + 0x50);
                lVar5 = lVar2;
            }
        }
        LAB_1401cff73:
        bVar3 = false;
        lVar2 = lVar9;
        lVar7 = lVar5;
    } while (true);
    LAB_1401cff60:
    if (lVar8 == 0) goto LAB_1401cff73;
    lVar5 = *(longlong * )(lVar5 + 0x50);
    lVar8 = lVar8 + -1;
    if (lVar5 == 0) goto LAB_1401cff51;
    goto LAB_1401cff60;
    LAB_1401cff51:
    if (bVar3) {
        return;
    }
    lVar9 = lVar9 * 2;
    goto LAB_1401cfeb0;
}


void FUN_1401cffa0(short *param_1, short *param_2, undefined4 param_3, longlong param_4) {
    short sVar1;
    int iVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    undefined auStack1272[32];
    short *local_4d8;
    short *local_4d0;
    undefined *local_4c8;
    short *local_4b8[2];
    undefined **local_4a8;
    longlong local_4a0;
    undefined8 local_498;
    longlong local_490;
    undefined8 local_488;
    longlong local_480;
    undefined8 local_478;
    undefined4 local_470;
    longlong local_468;
    short local_45a[261];
    undefined local_250[8];
    short local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1272;
    if (param_4 != 0) {
        psVar7 = local_45a + 1;
        lVar6 = 0;
        lVar5 = 0x104;
        local_45a[1] = 0;
        if ((param_1 != (short *) 0x0) && (*param_1 != 0)) {
            lVar4 = 0x104;
            psVar3 = local_45a + 1;
            iVar2 = 0;
            do {
                if ((lVar4 == -0x7ffffefa) ||
                    (sVar1 = *(short *) (((longlong) param_1 - (longlong)(local_45a + 1)) + (longlong) psVar3),
                            sVar1 == 0)) {
                    if (lVar4 != 0) goto LAB_1401d0069;
                    break;
                }
                *psVar3 = sVar1;
                psVar3 = psVar3 + 1;
                lVar6 = lVar6 + 1;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            psVar3 = psVar3 + -1;
            iVar2 = -0x7ff8ff86;
            lVar6 = lVar6 + -1;
            LAB_1401d0069:
            *psVar3 = 0;
            local_4b8[0] = local_45a + lVar6 + 1;
            local_468 = lVar6;
            if (((((iVar2 + 0x80000000U & 0x80000000) != 0) || (iVar2 == -0x7ff8ff86)) &&
                 (psVar7 = local_4b8[0], local_45a + 1 < local_4b8[0])) && (local_45a[lVar6] != 0x5c)) {
                local_4d8 = (short *) 0x0;
                FUN_1401b38f0(local_4b8[0], (longlong)(local_250 + -(longlong) local_4b8[0]) >> 1,
                              &DAT_1409e2fcc, local_4b8);
                psVar7 = local_4b8[0];
            }
        }
        local_4b8[0] = psVar7;
        if ((param_2 != (short *) 0x0) && (*param_2 != 0)) {
            FUN_14001b2d0(local_4b8[0], (longlong)(local_250 + -(longlong) local_4b8[0]) >> 1, param_2);
        }
        local_4d0 = (short *) FUN_1407dd8d8(local_45a + 1, 0x5c);
        if (local_4d0 == (short *) 0x0) {
            local_4d0 = local_45a;
        }
        local_4d0 = local_4d0 + 1;
        psVar7 = (short *) &DAT_1409e3064;
        if (*local_4d0 != 0) {
            psVar7 = local_4d0;
        }
        psVar3 = local_248;
        do {
            if ((lVar5 == -0x7ffffefa) ||
                (sVar1 = *(short *) (((longlong) psVar7 - (longlong) local_248) + (longlong) psVar3),
                        sVar1 == 0)) {
                if (lVar5 != 0) goto LAB_1401d015f;
                break;
            }
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        psVar3 = psVar3 + -1;
        LAB_1401d015f:
        *psVar3 = 0;
        *local_4d0 = 0;
        local_4a8 = &PTR_LAB_140b5f120;
        local_498 = 0;
        local_4a0 = 0;
        local_488 = 0;
        local_490 = 0;
        local_478 = 0;
        local_480 = 0;
        local_470 = 1;
        local_4c8 = local_250;
        local_4d8 = local_4b8[0];
        iVar2 = FUN_1401d1190(&local_4a8, local_248, param_3, local_45a + 1);
        if ((iVar2 < 0) || (iVar2 = FUN_1401d06d0(&local_4a8, param_4), iVar2 < 0)) {
            if (local_480 != 0) {
                (**(code * *)(*(longlong * )(local_480 + -0x10) + 8))(local_480 + -0x10);
            }
            if (local_490 != 0) {
                (**(code * *)(*(longlong * )(local_490 + -0x10) + 8))(local_490 + -0x10);
            }
            if (local_4a0 != 0) {
                (**(code * *)(*(longlong * )(local_4a0 + -0x10) + 8))(local_4a0 + -0x10);
            }
        } else {
            if (local_480 != 0) {
                (**(code * *)(*(longlong * )(local_480 + -0x10) + 8))(local_480 + -0x10);
            }
            if (local_490 != 0) {
                (**(code * *)(*(longlong * )(local_490 + -0x10) + 8))(local_490 + -0x10);
            }
            if (local_4a0 != 0) {
                (**(code * *)(*(longlong * )(local_4a0 + -0x10) + 8))(local_4a0 + -0x10);
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1272);
    return;
}


undefined8 FUN_1401d02a0(longlong *param_1, longlong *param_2, undefined8 param_3, longlong **param_4) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong *plVar8;
    undefined8 uVar9;
    undefined8 uVar10;
    undefined8 uVar11;
    undefined8 uVar12;
    longlong *plVar13;
    ulonglong uVar14;
    longlong *plVar15;
    ulonglong uVar16;

    if (param_4 == (longlong **) 0x0) {
        return 0x80070057;
    }
    if (param_1 == (longlong *) 0x0) {
        if (param_2 != (longlong *) 0x0) {
            *param_4 = param_2;
            (**(code * *) * param_2)(param_2);
            return 0;
        }
        plVar4 = (longlong *) FUN_14018b280(0x40);
        if (plVar4 != (longlong *) 0x0) {
            *plVar4 = (longlong) & PTR_LAB_140b5f120;
            plVar4[2] = 0;
            plVar4[1] = 0;
            plVar4[4] = 0;
            plVar4[3] = 0;
            plVar4[6] = 0;
            plVar4[5] = 0;
            *(undefined4 * )(plVar4 + 7) = 1;
            *param_4 = plVar4;
            return 0;
        }
        *param_4 = (longlong *) 0x0;
        return 0;
    }
    if (param_2 == (longlong *) 0x0) {
        *param_4 = param_1;
        (**(code * *) * param_1)();
        return 0;
    }
    plVar4 = (longlong * )(**(code * *)(*param_1 + 0x38))();
    uVar5 = (**(code * *)(*param_1 + 0x10))(param_1);
    if ((plVar4 == (longlong *) 0x0) && (uVar5 == 0)) {
        *param_4 = param_2;
        (**(code * *) * param_2)(param_2);
        return 0;
    }
    plVar6 = (longlong * )(**(code * *)(*param_2 + 0x38))(param_2);
    uVar7 = (**(code * *)(*param_2 + 0x10))(param_2);
    if ((plVar6 == (longlong *) 0x0) && (uVar7 == 0)) {
        *param_4 = param_1;
        (**(code * *) * param_1)(param_1);
        return 0;
    }
    plVar8 = (longlong *) FUN_14018b280(0x40);
    plVar15 = (longlong *) 0x0;
    plVar13 = plVar15;
    if (plVar8 != (longlong *) 0x0) {
        *plVar8 = (longlong) & PTR_LAB_140b5f120;
        plVar8[2] = 0;
        plVar8[1] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = 0;
        plVar8[5] = 0;
        *(undefined4 * )(plVar8 + 7) = 1;
        plVar13 = plVar8;
    }
    plVar8 = plVar15;
    if (plVar4 != (longlong *) 0x0) {
        do {
            if (plVar6 <= plVar15) goto joined_r0x0001401d04a3;
            uVar9 = (**(code * *)(*param_1 + 0x40))(param_1, plVar8);
            uVar10 = (**(code * *)(*param_2 + 0x40))(param_2, plVar15);
            iVar3 = FUN_1401d1780(uVar9, uVar10);
            if (0 < iVar3) {
                uVar9 = uVar10;
            }
            FUN_1401d0b80(plVar13, uVar9);
            plVar8 = (longlong * )((longlong) plVar8 + (ulonglong)(iVar3 < 1));
            plVar15 = (longlong * )((longlong) plVar15 + (ulonglong)(-1 < iVar3));
        } while (plVar8 < plVar4);
    }
    LAB_1401d04fd:
    uVar14 = 0;
    for (; plVar15 < plVar6; plVar15 = (longlong * )((longlong) plVar15 + 1)) {
        uVar9 = (**(code * *)(*param_2 + 0x40))(param_2, plVar15);
        lVar1 = plVar13[2];
        FUN_14004eed0(plVar13 + 1, lVar1 + 1);
        lVar2 = plVar13[1];
        uVar9 = FUN_1401d15d0(plVar13, uVar9);
        *(undefined8 * )(lVar2 + lVar1 * 8) = uVar9;
    }
    uVar16 = uVar14;
    if (uVar5 != 0) {
        do {
            if (uVar7 <= uVar14) goto joined_r0x0001401d061a;
            uVar11 = (**(code * *)(*param_1 + 0x18))(param_1, uVar16);
            uVar12 = (**(code * *)(*param_1 + 0x20))(param_1, uVar16);
            uVar9 = (**(code * *)(*param_2 + 0x18))(param_2, uVar14);
            uVar10 = (**(code * *)(*param_2 + 0x20))(param_2, uVar14);
            iVar3 = FUN_1401d1780(uVar11, uVar9);
            if (iVar3 < 1) {
                uVar9 = uVar11;
                uVar10 = uVar12;
            }
            FUN_1401d0ae0(plVar13, uVar9, uVar10);
            uVar16 = uVar16 + (iVar3 < 1);
            uVar14 = uVar14 + (-1 < iVar3);
        } while (uVar16 < uVar5);
    }
    joined_r0x0001401d0664:
    for (; uVar14 < uVar7; uVar14 = uVar14 + 1) {
        uVar9 = (**(code * *)(*param_2 + 0x20))(param_2, uVar14);
        uVar10 = (**(code * *)(*param_2 + 0x18))(param_2, uVar14);
        FUN_1401d0ae0(plVar13, uVar10, uVar9);
    }
    *param_4 = plVar13;
    return 0;
    joined_r0x0001401d04a3:
    for (; plVar8 < plVar4; plVar8 = (longlong * )((longlong) plVar8 + 1)) {
        uVar9 = (**(code * *)(*param_1 + 0x40))(param_1, plVar8);
        lVar1 = plVar13[2];
        FUN_14004eed0(plVar13 + 1, lVar1 + 1);
        lVar2 = plVar13[1];
        uVar9 = FUN_1401d15d0(plVar13, uVar9);
        *(undefined8 * )(lVar2 + lVar1 * 8) = uVar9;
    }
    goto LAB_1401d04fd;
    joined_r0x0001401d061a:
    for (; uVar16 < uVar5; uVar16 = uVar16 + 1) {
        uVar9 = (**(code * *)(*param_1 + 0x20))(param_1, uVar16);
        uVar10 = (**(code * *)(*param_1 + 0x18))(param_1, uVar16);
        FUN_1401d0ae0(plVar13, uVar10, uVar9);
    }
    goto joined_r0x0001401d0664;
}


undefined8 FUN_1401d06d0(longlong *param_1, undefined8 *param_2) {
    ulonglong uVar1;
    short sVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    undefined8 *puVar8;
    longlong lVar9;
    short *psVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 uVar14;
    undefined8 uVar15;
    undefined8 *puVar16;
    undefined8 *puVar17;
    ulonglong local_res8;
    undefined8 local_98;
    ulonglong local_90;
    undefined8 local_88;
    undefined8 *local_80;
    ulonglong local_78;
    ulonglong local_70;
    longlong local_68;
    ulonglong local_60;
    ulonglong local_58;
    longlong local_50;

    puVar8 = (undefined8 *) FUN_14018b280(0x40);
    puVar17 = (undefined8 *) 0x0;
    puVar16 = puVar17;
    if (puVar8 != (undefined8 *) 0x0) {
        *puVar8 = &PTR_LAB_140b5f120;
        puVar8[2] = 0;
        puVar8[1] = 0;
        puVar8[4] = 0;
        puVar8[3] = 0;
        puVar8[6] = 0;
        puVar8[5] = 0;
        *(undefined4 * )(puVar8 + 7) = 1;
        puVar16 = puVar8;
    }
    uVar3 = param_1[6];
    if (uVar3 <= (ulonglong) puVar16[6] && puVar16[6] != uVar3) {
        puVar16[6] = uVar3;
    }
    lVar9 = FUN_14018dbc0(puVar16[5], uVar3, 2);
    if (puVar16[5] != lVar9) {
        FUN_1407db590(lVar9, puVar16[5], puVar16[6] * 2);
        lVar11 = puVar16[5];
        if (lVar11 != 0) {
            (**(code * *)(*(longlong * )(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        puVar16[5] = lVar9;
    }
    uVar3 = param_1[2];
    if (uVar3 <= (ulonglong) puVar16[2] && puVar16[2] != uVar3) {
        puVar16[2] = uVar3;
    }
    lVar9 = FUN_14018dbc0(puVar16[1], uVar3, 8);
    if (puVar16[1] != lVar9) {
        FUN_1407db590(lVar9, puVar16[1], puVar16[2] << 3);
        lVar11 = puVar16[1];
        if (lVar11 != 0) {
            (**(code * *)(*(longlong * )(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
        puVar16[1] = lVar9;
    }
    local_98 = 0;
    local_90 = uVar3;
    FUN_1401d3110(&local_78, FUN_1401d1940, &local_98, param_1, 2);
    local_res8 = 0;
    if (uVar3 != 0) {
        do {
            psVar10 = (short *) (**(code * *)(*param_1 + 0x40))
                    (param_1, *(undefined8 * )(local_68 + local_res8 * 8));
            uVar4 = puVar16[2];
            uVar1 = uVar4 + 1;
            if (uVar4 <= uVar1) {
                lVar9 = FUN_14018db00(puVar16[1], uVar1, 8);
                if (puVar16[1] != lVar9) {
                    FUN_1407db590(lVar9, puVar16[1], puVar16[2] << 3);
                    lVar11 = puVar16[1];
                    if (lVar11 != 0) {
                        (**(code * *)(*(longlong * )(lVar11 + -0x10) + 8))(lVar11 + -0x10);
                    }
                    puVar16[1] = lVar9;
                }
            }
            puVar16[2] = uVar1;
            lVar9 = puVar16[1];
            sVar2 = *psVar10;
            puVar8 = puVar17;
            while (sVar2 != 0) {
                puVar8 = (undefined8 * )((longlong) puVar8 + 1);
                sVar2 = psVar10[(longlong) puVar8];
            }
            uVar5 = puVar16[6];
            uVar1 = uVar5 + (longlong) puVar8 + 1;
            if (uVar5 <= uVar1) {
                lVar11 = FUN_14018db00(puVar16[5], uVar1, 2);
                if (puVar16[5] != lVar11) {
                    FUN_1407db590(lVar11, puVar16[5], puVar16[6] * 2);
                    lVar6 = puVar16[5];
                    if (lVar6 != 0) {
                        (**(code * *)(*(longlong * )(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                    }
                    puVar16[5] = lVar11;
                }
            }
            puVar16[6] = uVar1;
            FUN_1407db590(puVar16[5] + uVar5 * 2, psVar10, ((longlong) puVar8 + 1) * 2);
            local_res8 = local_res8 + 1;
            *(ulonglong * )(lVar9 + uVar4 * 8) = uVar5;
        } while (local_res8 < uVar3);
    }
    if (local_78 < local_70) {
        FUN_14018b900(local_68 + local_78 * 8, 0);
    }
    puVar8 = (undefined8 *) param_1[4];
    if (puVar8 <= (undefined8 *) puVar16[4] && (undefined8 *) puVar16[4] != puVar8) {
        puVar16[4] = puVar8;
    }
    puVar13 = (undefined8 *) puVar16[3];
    puVar12 = puVar17;
    if (puVar8 != (undefined8 *) 0x0) {
        if ((puVar13 == (undefined8 *) 0x0) ||
            (iVar7 = (**(code **) puVar13[-2])(puVar13 + -2, (longlong) puVar8 * 0x38 + 0x10), iVar7 == 0)) {
            puVar12 = (undefined8 *) FUN_14018b280((longlong) puVar8 * 0x38 + 0x10, 0);
            puVar13 = puVar17;
            if (puVar12 != (undefined8 *) 0x0) {
                puVar12[1] = puVar8;
                *puVar12 = &PTR_LAB_140b55060;
                puVar13 = puVar12;
            }
            puVar12 = puVar13 + 2;
        } else {
            puVar13[-1] = puVar8;
            puVar12 = puVar13;
        }
    }
    if ((undefined8 *) puVar16[3] != puVar12) {
        FUN_1407db590(puVar12, (undefined8 *) puVar16[3], puVar16[4] * 0x38);
        lVar9 = puVar16[3];
        if (lVar9 != 0) {
            (**(code * *)(*(longlong * )(lVar9 + -0x10) + 8))(lVar9 + -0x10);
        }
        puVar16[3] = puVar12;
    }
    local_88 = 0;
    local_80 = puVar8;
    FUN_1401d3110(&local_60, FUN_1401d1990, &local_88, param_1, 2);
    if (puVar8 != (undefined8 *) 0x0) {
        do {
            uVar14 = (**(code * *)(*param_1 + 0x20))
                    (param_1, *(undefined8 * )(local_50 + (longlong) puVar17 * 8));
            uVar15 = (**(code * *)(*param_1 + 0x18))
                    (param_1, *(undefined8 * )(local_50 + (longlong) puVar17 * 8));
            FUN_1401d0ae0(puVar16, uVar15, uVar14);
            puVar17 = (undefined8 * )((longlong) puVar17 + 1);
        } while (puVar17 < puVar8);
    }
    if (local_60 < local_58) {
        FUN_14018b900(local_50 + local_60 * 8, 0);
    }
    *param_2 = puVar16;
    return 0;
}


void FUN_1401d0ae0(longlong param_1, undefined8 param_2, undefined8 *param_3) {
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;

    lVar1 = *(longlong * )(param_1 + 0x20);
    FUN_1401d1a10(param_1 + 0x18, lVar1 + 1);
    puVar3 = (undefined8 * )(lVar1 * 0x38 + *(longlong * )(param_1 + 0x18));
    uVar2 = FUN_1401d15d0(param_1, param_2);
    *puVar3 = uVar2;
    puVar3[1] = *param_3;
    puVar3[2] = param_3[1];
    puVar3[3] = param_3[2];
    puVar3[4] = param_3[3];
    puVar3[5] = param_3[4];
    puVar3[6] = param_3[5];
    return;
}


void FUN_1401d0b80(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar1 = *(longlong * )(param_1 + 0x10);
    FUN_14004eed0(param_1 + 8, lVar1 + 1);
    lVar2 = *(longlong * )(param_1 + 8);
    uVar3 = FUN_1401d15d0(param_1, param_2);
    *(undefined8 * )(lVar2 + lVar1 * 8) = uVar3;
    return;
}


undefined8 FUN_1401d0f60(longlong param_1, longlong param_2) {
    ushort *puVar1;
    ushort uVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ushort uVar13;
    ushort *puVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong local_res18;

    local_res18 = *(ulonglong * )(param_1 + 0x10);
    uVar15 = 0;
    if (local_res18 != 0) {
        do {
            uVar16 = (local_res18 - uVar15 >> 1) + uVar15;
            puVar1 = (ushort * )
                    (*(longlong * )(param_1 + 0x28) +
                     *(longlong * )(*(longlong * )(param_1 + 8) + uVar16 * 8) * 2);
            uVar4 = FUN_1407dd8d8(param_2, 0x5c);
            lVar5 = FUN_1407dd8d8();
            if (uVar4 != 0) {
                uVar4 = ((longlong)(uVar4 - param_2) >> 1) + 1;
            }
            if (lVar5 == 0) {
                uVar10 = 0;
            } else {
                uVar10 = (lVar5 - (longlong) puVar1 >> 1) + 1;
            }
            uVar11 = uVar4;
            if (uVar10 < uVar4) {
                uVar11 = uVar10;
            }
            uVar12 = 0;
            if (uVar11 != 0) {
                puVar14 = puVar1;
                do {
                    uVar13 = *(ushort * )((param_2 - (longlong) puVar1) + (longlong) puVar14);
                    if (uVar13 < 0x80) {
                        if ((ushort)(uVar13 - 0x41) < 0x1a) {
                            uVar13 = uVar13 + 0x20;
                        }
                    } else {
                        uVar8 = 0;
                        uVar9 = 0x3d1;
                        do {
                            uVar6 = (uVar9 - uVar8 >> 1) + uVar8;
                            if (*(ushort * )(&UNK_140a41a80 + uVar6 * 2) <= uVar13) {
                                if (uVar13 <= *(ushort * )(&UNK_140a41a80 + uVar6 * 2)) {
                                    uVar13 = *(ushort * )(&UNK_140a40af0 + uVar6 * 2);
                                    break;
                                }
                                uVar8 = uVar6 + 1;
                                uVar6 = uVar9;
                            }
                            uVar9 = uVar6;
                        } while (uVar8 < uVar6);
                    }
                    uVar2 = *puVar14;
                    uVar7 = (uint) uVar2;
                    if (uVar2 < 0x80) {
                        if ((ushort)(uVar2 - 0x41) < 0x1a) {
                            uVar7 = (uint)(ushort)(uVar2 + 0x20);
                        }
                    } else {
                        uVar8 = 0;
                        uVar9 = 0x3d1;
                        do {
                            uVar6 = (uVar9 - uVar8 >> 1) + uVar8;
                            if (*(ushort * )(&UNK_140a41a80 + uVar6 * 2) <= uVar2) {
                                if (uVar2 <= *(ushort * )(&UNK_140a41a80 + uVar6 * 2)) {
                                    uVar7 = (uint) * (ushort * )(&UNK_140a40af0 + uVar6 * 2);
                                    break;
                                }
                                uVar8 = uVar6 + 1;
                                uVar6 = uVar9;
                            }
                            uVar9 = uVar6;
                        } while (uVar8 < uVar6);
                    }
                    if (uVar13 != (ushort) uVar7) {
                        if (uVar13 == 0x5c) goto LAB_1401d1155;
                        if ((ushort) uVar7 == 0x5c) goto LAB_1401d112a;
                        iVar3 = uVar13 - uVar7;
                        goto LAB_1401d1124;
                    }
                    uVar12 = uVar12 + 1;
                    puVar14 = puVar14 + 1;
                } while (uVar12 < uVar11);
            }
            if (uVar10 <= uVar4) {
                if (uVar4 <= uVar10) {
                    iVar3 = FUN_14018e2c0(param_2 + uVar4 * 2, puVar1 + uVar10);
                    LAB_1401d1124:
                    if (iVar3 < 0) goto LAB_1401d1155;
                    if (iVar3 < 1) {
                        return 1;
                    }
                }
                LAB_1401d112a:
                uVar15 = uVar16 + 1;
                uVar16 = local_res18;
            }
            LAB_1401d1155:
            local_res18 = uVar16;
        } while (uVar15 < local_res18);
    }
    return 0;
}


void FUN_1401d1190(longlong param_1, undefined8 param_2, undefined8 param_3, LPCWSTR param_4,
                   short *param_5, short *param_6, longlong param_7) {
    longlong *plVar1;
    short sVar2;
    short *psVar3;
    int iVar4;
    BOOL BVar5;
    undefined8 uVar6;
    short *psVar7;
    HANDLE hFindFile;
    longlong lVar8;
    longlong lVar9;
    undefined auStack856[32];
    short *local_338;
    short *local_330;
    short *local_328;
    int local_318;
    longlong local_310;
    short *local_308;
    LPCWSTR local_300;
    short *local_2f8;
    HANDLE local_2f0;
    longlong local_2e8;
    DWORD local_2e0;
    DWORD DStack732;
    longlong local_2d8;
    undefined8 local_2d0;
    longlong local_2c8;
    longlong *local_2c0;
    longlong local_2b8;
    undefined8 local_2b0;
    undefined8 local_2a8;
    byte local_288;
    longlong local_274;
    DWORD local_26c;
    DWORD local_268;
    short local_25c[274];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack856;
    local_308 = param_5;
    local_2d8 = param_7;
    local_318 = (int) param_3;
    lVar8 = param_7 - (longlong) param_6 >> 1;
    local_2f8 = param_6;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_310 = param_1;
    local_300 = param_4;
    local_2e8 = lVar8;
    local_2d0 = param_2;
    if (lVar8 - 1U < 0x7fffffff) {
        FUN_14001b680(param_6, lVar8, param_3, param_2);
    } else if (lVar8 != 0) {
        *param_6 = 0;
    }
    local_2f0 = FindFirstFileW(local_300, (LPWIN32_FIND_DATAW) & local_288);
    if (local_2f0 != (HANDLE) 0xffffffffffffffff) {
        do {
            if ((local_288 & 0x10) == 0) {
                if (lVar8 - 1U < 0x7fffffff) {
                    lVar9 = 0x7ffffffe - lVar8;
                    psVar3 = param_6;
                    do {
                        psVar7 = psVar3;
                        if ((lVar9 + lVar8 == 0) ||
                            (sVar2 = *(short *) (((longlong) local_25c - (longlong) param_6) + (longlong) psVar7),
                                    sVar2 == 0)) {
                            if (lVar8 == 0) {
                                psVar7 = psVar7 + -1;
                            }
                            *psVar7 = 0;
                            goto LAB_1401d1384;
                        }
                        *psVar7 = sVar2;
                        lVar8 = lVar8 + -1;
                        psVar3 = psVar7 + 1;
                    } while (lVar8 != 0);
                    *psVar7 = 0;
                } else if (lVar8 != 0) {
                    *param_6 = 0;
                }
                LAB_1401d1384:
                local_2c8 = local_274;
                local_2e0 = local_268;
                DStack732 = local_26c;
                lVar8 = *(longlong * )(local_310 + 0x20);
                plVar1 = (longlong * )(local_310 + 0x18);
                FUN_1401d1a10(plVar1, lVar8 + 1);
                lVar9 = 0;
                local_2c0 = (longlong * )(lVar8 * 0x38 + *plVar1);
                sVar2 = *local_308;
                while (sVar2 != 0) {
                    lVar9 = lVar9 + 1;
                    sVar2 = local_308[lVar9];
                }
                lVar8 = *(longlong * )(local_310 + 0x30);
                plVar1 = (longlong * )(local_310 + 0x28);
                FUN_1401cfd00(plVar1, lVar8 + 1 + lVar9);
                FUN_1407db590(*plVar1 + lVar8 * 2, local_308, lVar9 * 2 + 2);
                local_2c0[1] = local_2c8;
                local_2c0[2] = CONCAT44(DStack732, local_2e0);
                local_2c0[3] = CONCAT44(DStack732, local_2e0);
                local_2c0[4] = local_2b8;
                local_2c0[5] = local_2b8;
                local_2c0[6] = local_2b8;
                *local_2c0 = lVar8;
                lVar8 = local_2e8;
                param_6 = local_2f8;
            } else {
                iVar4 = FUN_14018e2c0(local_25c, &DAT_1409e3034);
                if ((iVar4 != 0) && (iVar4 = FUN_14018e2c0(local_25c, &DAT_1409e5124), iVar4 != 0)) {
                    if (lVar8 - 1U < 0x7fffffff) {
                        lVar9 = 0x7ffffffe - lVar8;
                        psVar3 = param_6;
                        do {
                            psVar7 = psVar3;
                            if ((lVar9 + lVar8 == 0) ||
                                (sVar2 = *(short *) (((longlong) local_25c - (longlong) param_6) + (longlong) psVar7),
                                        sVar2 == 0)) {
                                if (lVar8 == 0) {
                                    psVar7 = psVar7 + -1;
                                }
                                *psVar7 = 0;
                                goto LAB_1401d12ea;
                            }
                            *psVar7 = sVar2;
                            lVar8 = lVar8 + -1;
                            psVar3 = psVar7 + 1;
                        } while (lVar8 != 0);
                        *psVar7 = 0;
                    } else if (lVar8 != 0) {
                        *param_6 = 0;
                    }
                    LAB_1401d12ea:
                    lVar8 = *(longlong * )(local_310 + 0x10);
                    plVar1 = (longlong * )(local_310 + 8);
                    FUN_14004eed0(plVar1, lVar8 + 1);
                    lVar9 = *plVar1;
                    uVar6 = FUN_1401d15d0(local_310, local_308);
                    *(undefined8 * )(lVar9 + lVar8 * 8) = uVar6;
                    lVar8 = local_2e8;
                }
            }
            BVar5 = FindNextFileW(local_2f0, (LPWIN32_FIND_DATAW) & local_288);
        } while (BVar5 != 0);
        FindClose(local_2f0);
    }
    if (local_318 != 0) {
        if (lVar8 - 1U < 0x7fffffff) {
            psVar3 = param_6;
            lVar9 = lVar8;
            do {
                psVar7 = psVar3;
                if (((0x7ffffffe - lVar8) + lVar9 == 0) ||
                    (sVar2 = *(short *) (((longlong) & DAT_1409e3084 - (longlong) param_6) + (longlong) psVar7),
                            sVar2 == 0)) {
                    if (lVar9 == 0) {
                        psVar7 = psVar7 + -1;
                    }
                    *psVar7 = 0;
                    goto LAB_1401d14d7;
                }
                *psVar7 = sVar2;
                lVar9 = lVar9 + -1;
                psVar3 = psVar7 + 1;
            } while (lVar9 != 0);
            *psVar7 = 0;
        } else if (lVar8 != 0) {
            *param_6 = 0;
        }
        LAB_1401d14d7:
        hFindFile = FindFirstFileW(local_300, (LPWIN32_FIND_DATAW) & local_288);
        if (hFindFile != (HANDLE) 0xffffffffffffffff) {
            do {
                if ((((local_288 & 0x10) != 0) &&
                     (iVar4 = FUN_14018e2c0(local_25c, &DAT_1409e300c), iVar4 != 0)) &&
                    (iVar4 = FUN_14018e2c0(local_25c, &DAT_1409e5104), iVar4 != 0)) {
                    local_328 = local_25c;
                    local_330 = (short *) &DAT_140a487c8;
                    local_338 = (short *) 0x0;
                    FUN_1401a3210(param_6, lVar8, &local_2f8, 0);
                    local_328 = (short *) local_2d8;
                    local_330 = local_2f8;
                    local_338 = local_308;
                    iVar4 = FUN_1401d1190(local_310, local_2d0, local_318);
                    if (iVar4 < 0) goto LAB_1401d15ad;
                }
                BVar5 = FindNextFileW(hFindFile, (LPWIN32_FIND_DATAW) & local_288);
            } while (BVar5 != 0);
            FindClose(hFindFile);
        }
    }
    LAB_1401d15ad:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack856);
    return;
}


longlong FUN_1401d15d0(longlong param_1, short *param_2) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_2[lVar3];
    }
    lVar2 = *(longlong * )(param_1 + 0x30);
    FUN_1401cfd00((longlong * )(param_1 + 0x28), lVar2 + lVar3 + 1);
    FUN_1407db590(*(longlong * )(param_1 + 0x28) + lVar2 * 2, param_2, (lVar3 + 1) * 2);
    return lVar2;
}


int FUN_1401d1640(longlong param_1, char *param_2) {
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    char cVar4;
    char cVar5;
    ulonglong uVar6;
    char *pcVar7;
    int iVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    lVar2 = FUN_1407e05f0(param_1, 0x5c);
    lVar3 = FUN_1407e05f0();
    uVar9 = 0;
    uVar6 = uVar9;
    if (lVar2 != 0) {
        uVar6 = (lVar2 - param_1) + 1;
    }
    if (lVar3 != 0) {
        uVar9 = (lVar3 - (longlong) param_2) + 1;
    }
    uVar10 = uVar6;
    if (uVar9 < uVar6) {
        uVar10 = uVar9;
    }
    if (uVar10 != 0) {
        pcVar7 = param_2;
        do {
            cVar4 = pcVar7[param_1 - (longlong) param_2];
            if ((byte)(cVar4 + 0xbfU) < 0x1a) {
                cVar4 = cVar4 + ' ';
            }
            cVar5 = *pcVar7;
            if ((byte)(cVar5 + 0xbfU) < 0x1a) {
                cVar5 = cVar5 + ' ';
            }
            if (cVar4 != cVar5) {
                if (cVar4 == '\\') goto LAB_1401d1740;
                if (cVar5 != '\\') {
                    return (int) cVar4 - (int) cVar5;
                }
                goto LAB_1401d174a;
            }
            pcVar7 = pcVar7 + 1;
        } while ((ulonglong)((longlong) pcVar7 - (longlong) param_2) < uVar10);
    }
    if (uVar6 < uVar9) {
        LAB_1401d1740:
        iVar8 = -1;
    } else if (uVar9 < uVar6) {
        LAB_1401d174a:
        iVar8 = 1;
    } else {
        pcVar7 = (char *) (uVar6 + param_1);
        lVar2 = uVar9 - (longlong) pcVar7;
        while (true) {
            cVar4 = *pcVar7;
            cVar5 = cVar4;
            if ((byte)(cVar4 + 0xbfU) < 0x1a) {
                cVar5 = cVar4 + ' ';
            }
            cVar1 = (param_2 + lVar2)[(longlong) pcVar7];
            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                cVar1 = cVar1 + ' ';
            }
            iVar8 = (int) cVar5 - (int) cVar1;
            if (iVar8 != 0) break;
            if (cVar4 == '\0') {
                return 0;
            }
            pcVar7 = pcVar7 + 1;
        }
    }
    return iVar8;
}


ulonglong FUN_1401d1780(longlong param_1, ushort *param_2) {
    ushort uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    ushort uVar7;
    ushort *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;

    uVar2 = FUN_1407dd8d8(param_1, 0x5c);
    lVar3 = FUN_1407dd8d8();
    if (uVar2 != 0) {
        uVar2 = ((longlong)(uVar2 - param_1) >> 1) + 1;
    }
    if (lVar3 == 0) {
        uVar12 = 0;
    } else {
        uVar12 = (lVar3 - (longlong) param_2 >> 1) + 1;
    }
    uVar9 = uVar2;
    if (uVar12 < uVar2) {
        uVar9 = uVar12;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
        puVar8 = param_2;
        do {
            uVar7 = *(ushort * )((param_1 - (longlong) param_2) + (longlong) puVar8);
            if (uVar7 < 0x80) {
                if ((ushort)(uVar7 - 0x41) < 0x1a) {
                    uVar7 = uVar7 + 0x20;
                }
            } else {
                uVar6 = 0;
                uVar11 = 0x3d1;
                do {
                    uVar4 = (uVar11 - uVar6 >> 1) + uVar6;
                    if (*(ushort * )(&UNK_140a41a80 + uVar4 * 2) <= uVar7) {
                        if (uVar7 <= *(ushort * )(&UNK_140a41a80 + uVar4 * 2)) {
                            uVar7 = *(ushort * )(&UNK_140a40af0 + uVar4 * 2);
                            break;
                        }
                        uVar6 = uVar4 + 1;
                        uVar4 = uVar11;
                    }
                    uVar11 = uVar4;
                } while (uVar6 < uVar4);
            }
            uVar1 = *puVar8;
            uVar5 = (uint) uVar1;
            if (uVar1 < 0x80) {
                if ((ushort)(uVar1 - 0x41) < 0x1a) {
                    uVar5 = (uint)(ushort)(uVar1 + 0x20);
                }
            } else {
                uVar6 = 0;
                uVar11 = 0x3d1;
                do {
                    uVar4 = (uVar11 - uVar6 >> 1) + uVar6;
                    if (*(ushort * )(&UNK_140a41a80 + uVar4 * 2) <= uVar1) {
                        if (uVar1 <= *(ushort * )(&UNK_140a41a80 + uVar4 * 2)) {
                            uVar5 = (uint) * (ushort * )(&UNK_140a40af0 + uVar4 * 2);
                            break;
                        }
                        uVar6 = uVar4 + 1;
                        uVar4 = uVar11;
                    }
                    uVar11 = uVar4;
                } while (uVar6 < uVar4);
            }
            if (uVar7 != (ushort) uVar5) {
                if (uVar7 == 0x5c) goto LAB_1401d1916;
                if ((ushort) uVar5 != 0x5c) {
                    return (ulonglong)(uVar7 - uVar5);
                }
                goto LAB_1401d1921;
            }
            uVar10 = uVar10 + 1;
            puVar8 = puVar8 + 1;
        } while (uVar10 < uVar9);
    }
    if (uVar2 < uVar12) {
        LAB_1401d1916:
        uVar2 = 0xffffffff;
    } else if (uVar12 < uVar2) {
        LAB_1401d1921:
        uVar2 = 1;
    } else {
        uVar2 = FUN_14018e2c0(param_1 + uVar2 * 2, param_2 + uVar12);
    }
    return uVar2;
}


void FUN_1401d1940(undefined8 param_1, undefined8 param_2, longlong *param_3) {
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 = (**(code * *)(*param_3 + 0x40))(param_3);
    uVar2 = (**(code * *)(*param_3 + 0x40))(param_3, param_1);
    FUN_1401d1780(uVar2, uVar1);
    return;
}


void FUN_1401d1990(undefined8 param_1, undefined8 param_2, longlong *param_3) {
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 = (**(code * *)(*param_3 + 0x18))(param_3);
    uVar2 = (**(code * *)(*param_3 + 0x18))(param_3, param_1);
    FUN_1401d1780(uVar2, uVar1);
    return;
}


void FUN_1401d1a10(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1, param_2, 0x38);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2, *param_1, param_1[1] * 0x38);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}


undefined8 *
FUN_1401d1a90(undefined8 *param_1, HANDLE *param_2, undefined8 param_3, undefined8 param_4,
              HANDLE param_5) {
    FUN_1401d80d0();
    *param_1 = &PTR_LAB_140b5f940;
    param_1[0x57] = param_5;
    GetFileTime(param_5, (LPFILETIME) 0x0, (LPFILETIME) 0x0, (LPFILETIME)(param_1 + 0x46));
    GetFileSizeEx((HANDLE) param_1[0x57], param_1 + 0x45);
    CreateIoCompletionPort((HANDLE) param_1[0x57], *param_2, 1, 0);
    return param_1;
}


undefined8 FUN_1401d1b10(undefined8 param_1, ulonglong param_2) {
    FUN_1401d1b50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401d1b50(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5f940;
    if ((HANDLE) param_1[0x57] != (HANDLE) 0xffffffffffffffff) {
        CloseHandle((HANDLE) param_1[0x57]);
        param_1[0x57] = 0xffffffffffffffff;
    }
    *param_1 = &PTR_LAB_140b5fdb0;
    if (param_1[0x56] != 0) {
        // WARNING: Could not recover jumptable at 0x0001401d1ba3. Too many branches
        // WARNING: Treating indirect jump as call
        CloseHandle((HANDLE) param_1[0x56]);
        return;
    }
    return;
}


uint FUN_1401d1c10(longlong param_1, undefined8 param_2) {
    BOOL BVar1;
    uint uVar2;

    if (*(longlong * )(param_1 + 0x2b8) == -1) {
        return 0xa0030006;
    }
    ((LPOVERLAPPED)(param_1 + 0x2c0))->Internal = 0;
    *(undefined8 * )(param_1 + 0x2c8) = 0;
    *(undefined8 * )(param_1 + 0x2d0) = 0;
    *(undefined8 * )(param_1 + 0x2d8) = 0;
    *(undefined8 * )(param_1 + 0x2e0) = 0;
    *(undefined8 * )(param_1 + 0x2e8) = 0;
    *(undefined8 * )(param_1 + 0x2f0) = 0;
    *(undefined8 * )(param_1 + 0x2f8) = 0;
    *(undefined8 * )(param_1 + 0x2e0) = param_2;
    BVar1 = PostQueuedCompletionStatus
            (**(HANDLE * *)(param_1 + 0x10), 0, 1, (LPOVERLAPPED)(param_1 + 0x2c0));
    if (BVar1 == 0) {
        uVar2 = GetLastError();
        if (0 < (int) uVar2) {
            return uVar2 & 0xffff | 0x80070000;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}


uint FUN_1401d1c90(longlong param_1, undefined8 param_2, LPVOID param_3, DWORD param_4,
                   undefined8 param_5) {
    LPOVERLAPPED lpOverlapped;
    BOOL BVar1;
    uint uVar2;

    if (*(longlong * )(param_1 + 0x2b8) == -1) {
        return 0xa0030006;
    }
    lpOverlapped = (LPOVERLAPPED)(param_1 + 0x2c0);
    lpOverlapped->Internal = 0;
    *(undefined8 * )(param_1 + 0x2c8) = 0;
    *(undefined8 * )(param_1 + 0x2d0) = 0;
    *(undefined8 * )(param_1 + 0x2d8) = 0;
    *(undefined8 * )(param_1 + 0x2e0) = 0;
    *(undefined8 * )(param_1 + 0x2e8) = 0;
    *(undefined8 * )(param_1 + 0x2f0) = 0;
    *(undefined8 * )(param_1 + 0x2f8) = 0;
    *(undefined8 * )(param_1 + 0x2d0) = param_2;
    *(undefined8 * )(param_1 + 0x2e8) = param_2;
    *(LPVOID * )(param_1 + 0x2f0) = param_3;
    *(undefined8 * )(param_1 + 0x2e0) = param_5;
    *(DWORD * )(param_1 + 0x2f8) = param_4;
    if (param_4 == 0) {
        BVar1 = PostQueuedCompletionStatus(**(HANDLE * *)(param_1 + 0x10), 0, 1, lpOverlapped);
        if (BVar1 == 0) {
            uVar2 = GetLastError();
            goto LAB_1401d1d2f;
        }
    } else {
        BVar1 = ReadFile(*(HANDLE * )(param_1 + 0x2b8), param_3, param_4, (LPDWORD) 0x0, lpOverlapped);
        if ((BVar1 == 0) && (uVar2 = GetLastError(), uVar2 != 0x3e5)) {
            LAB_1401d1d2f:
            if ((int) uVar2 < 1) {
                return uVar2;
            }
            return uVar2 & 0xffff | 0x80070000;
        }
    }
    return 0;
}


uint FUN_1401d1d70(longlong param_1, undefined8 param_2, LPCVOID param_3, DWORD param_4,
                   undefined8 param_5) {
    LPOVERLAPPED lpOverlapped;
    BOOL BVar1;
    uint uVar2;

    if (*(longlong * )(param_1 + 0x2b8) == -1) {
        return 0xa0030006;
    }
    lpOverlapped = (LPOVERLAPPED)(param_1 + 0x2c0);
    lpOverlapped->Internal = 0;
    *(undefined8 * )(param_1 + 0x2c8) = 0;
    *(undefined8 * )(param_1 + 0x2d0) = 0;
    *(undefined8 * )(param_1 + 0x2d8) = 0;
    *(undefined8 * )(param_1 + 0x2e0) = 0;
    *(undefined8 * )(param_1 + 0x2e8) = 0;
    *(undefined8 * )(param_1 + 0x2f0) = 0;
    *(undefined8 * )(param_1 + 0x2f8) = 0;
    *(undefined8 * )(param_1 + 0x2d0) = param_2;
    *(undefined8 * )(param_1 + 0x2e8) = param_2;
    *(LPCVOID * )(param_1 + 0x2f0) = param_3;
    *(undefined8 * )(param_1 + 0x2e0) = param_5;
    *(DWORD * )(param_1 + 0x2f8) = param_4;
    if (param_4 == 0) {
        BVar1 = PostQueuedCompletionStatus(**(HANDLE * *)(param_1 + 0x10), 0, 1, lpOverlapped);
        if (BVar1 == 0) {
            uVar2 = GetLastError();
            goto LAB_1401d1e0f;
        }
    } else {
        BVar1 = WriteFile(*(HANDLE * )(param_1 + 0x2b8), param_3, param_4, (LPDWORD) 0x0, lpOverlapped);
        if ((BVar1 == 0) && (uVar2 = GetLastError(), uVar2 != 0x3e5)) {
            LAB_1401d1e0f:
            if ((int) uVar2 < 1) {
                return uVar2;
            }
            return uVar2 & 0xffff | 0x80070000;
        }
    }
    return 0;
}


uint FUN_1401d1e60(longlong param_1) {
    BOOL BVar1;
    uint uVar2;

    if (*(HANDLE * )(param_1 + 0x2b8) == (HANDLE) 0xffffffffffffffff) {
        return 0xa0030006;
    }
    BVar1 = FlushFileBuffers(*(HANDLE * )(param_1 + 0x2b8));
    if (BVar1 == 0) {
        uVar2 = GetLastError();
        if (0 < (int) uVar2) {
            return uVar2 & 0xffff | 0x80070000;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}


undefined8 FUN_1401d1eb0(longlong param_1) {
    if (*(longlong * )(param_1 + 0x2b8) == -1) {
        return 0xa0030006;
    }
    FUN_1401c35a0(*(longlong * )(param_1 + 0x2b8), param_1 + 0x2c0);
    return 0;
}


void FUN_1401d1ef0(longlong param_1) {
    if (*(HANDLE * )(param_1 + 0x2b8) != (HANDLE) 0xffffffffffffffff) {
        CloseHandle(*(HANDLE * )(param_1 + 0x2b8));
        *(undefined8 * )(param_1 + 0x2b8) = 0xffffffffffffffff;
    }
    return;
}


undefined8 *FUN_1401d1f20(undefined8 *param_1) {
    undefined8 uVar1;
    uint uVar2;
    undefined8 *in_stack_00000028;
    undefined8 *in_stack_00000030;

    FUN_1401d80d0();
    *param_1 = &PTR_LAB_140b5fb00;
    param_1[0x57] = *in_stack_00000028;
    param_1[0x58] = in_stack_00000028[1];
    param_1[0x59] = in_stack_00000028[2];
    param_1[0x5a] = in_stack_00000028[3];
    param_1[0x5b] = in_stack_00000028[4];
    uVar1 = in_stack_00000028[5];
    param_1[0x5d] = in_stack_00000030;
    param_1[0x5c] = uVar1;
    (**(code * *) * in_stack_00000030)();
    param_1[0x46] = param_1[0x57];
    param_1[0x45] = param_1[0x58];
    param_1[0x66] = 0;
    param_1[100] = &LAB_1401c3610;
    param_1[99] = 0;
    param_1[0x65] = FUN_14002d9c0;
    param_1[0x69] = 0;
    param_1[0x6b] = 0;
    uVar2 = 0x3fff0;
    if (*(uint * )(param_1 + 0x59) < 0x3fff0) {
        uVar2 = *(uint * )(param_1 + 0x59);
    }
    *(uint * )(param_1 + 0x6a) = uVar2;
    return param_1;
}


undefined8 *FUN_1401d2010(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5fb00;
    FUN_1401d2520();
    *param_1 = &PTR_LAB_140b5fdb0;
    if (param_1[0x56] != 0) {
        CloseHandle((HANDLE) param_1[0x56]);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401d22b0(longlong param_1, int param_2, int *param_3) {
    ulonglong uVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined auStack104[32];
    undefined8 local_48;
    longlong local_40;
    longlong local_38;
    int local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    uVar2 = *(uint * )(param_1 + 0x2fc);
    uVar1 = *(ulonglong * )(param_1 + 0x358);
    *(int *) (param_1 + 0x2f8) = param_2;
    uVar4 = (ulonglong)(uVar2 + param_2);
    if ((uVar2 <= uVar1) && (uVar1 < uVar4)) {
        if ((uVar1 == 0) && ((undefined4 * )(param_1 + 0x360) != (undefined4 *) 0x0)) {
            *(undefined8 * )(param_1 + 0x374) = 0;
            *(undefined2 * )(param_1 + 0x37c) = 0;
            *(undefined4 * )(param_1 + 0x360) = 0x67452301;
            *(undefined4 * )(param_1 + 0x364) = 0xefcdab89;
            *(undefined4 * )(param_1 + 0x368) = 0x98badcfe;
            *(undefined4 * )(param_1 + 0x36c) = 0x10325476;
            *(undefined4 * )(param_1 + 0x370) = 0xc3d2e1f0;
            *(undefined8 * )(param_1 + 0x3c0) = 0;
        }
        if (uVar4 != *(ulonglong * )(param_1 + 0x358)) {
            FUN_1401c8c20(param_1 + 0x360,
                          (*(longlong * )(param_1 + 0x2f0) - (ulonglong) uVar2) +
                          *(ulonglong * )(param_1 + 0x358));
        }
        *(ulonglong * )(param_1 + 0x358) = uVar4;
        if (uVar4 == *(ulonglong * )(param_1 + 0x2c8)) {
            if (param_1 + 0x360 != 0) {
                FUN_1401c8b70(param_1 + 0x360, &local_40);
            }
            if (((local_40 != *(longlong * )(param_1 + 0x2d0)) ||
                 (local_38 != *(longlong * )(param_1 + 0x2d8))) || (local_30 != *(int *) (param_1 + 0x2e0))) {
                local_48 = 0x141d44fa0;
                FUN_1401a3130(3, 0, &local_48, param_1 + 0x18);
                (**(code * *)(**(longlong * *)(param_1 + 0x2e8) + 0x48))();
            }
        }
    }
    if (*(int *) (param_1 + 0x2f8) != 0) {
        do {
            if (*(ulonglong * )(param_1 + 0x280) <= (ulonglong) * (uint * )(param_1 + 0x30c)) break;
            *(undefined * *)(param_1 + 0x300) = &DAT_140c90190;
            uVar2 = *(int *) (param_1 + 0x280) - *(uint * )(param_1 + 0x30c);
            if (0x3fff0 < uVar2) {
                uVar2 = 0x3fff0;
            }
            *(uint * )(param_1 + 0x308) = uVar2;
            if ((param_1 + 0x2f0 == 0) || (iVar3 = FUN_1401abda0(param_1 + 0x2f0, 0), iVar3 < 0))
                goto LAB_1401d24b1;
        } while (*(int *) (param_1 + 0x2f8) != 0);
        if ((*(int *) (param_1 + 0x2f8) != 0) && (*(int *) (param_1 + 0x290) != 0)) {
            *(int *) (param_1 + 0x308) = *(int *) (param_1 + 0x290);
            *(undefined8 * )(param_1 + 0x300) = *(undefined8 * )(param_1 + 0x288);
            if ((param_1 + 0x2f0 != 0) && (iVar3 = FUN_1401abda0(param_1 + 0x2f0, 0), -1 < iVar3)) {
                *param_3 = *(int *) (param_1 + 0x290) - *(int *) (param_1 + 0x308);
            }
            goto LAB_1401d24b1;
        }
    }
    *param_3 = 0;
    LAB_1401d24b1:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack104);
    return;
}


int FUN_1401d24e0(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    int iVar3;

    plVar1 = *(longlong * *)(param_1 + 0x2e8);
    if (plVar1 == (longlong *) 0x0) {
        return -0x5ffcfffa;
    }
    iVar2 = (**(code * *)(*plVar1 + 0x40))(plVar1, param_1 + 600);
    iVar3 = 0;
    if (iVar2 < 0) {
        iVar3 = iVar2;
    }
    return iVar3;
}


void FUN_1401d2520(longlong param_1) {
    if (*(longlong * )(param_1 + 0x2e8) != 0) {
        FUN_14018b900(*(undefined8 * )(param_1 + 0x348), 0);
        *(undefined8 * )(param_1 + 0x348) = 0;
        if ((*(longlong * )(param_1 + 0x318) != 0) && (param_1 != -0x2f0)) {
            FUN_1401ad4b0();
        }
        (**(code * *)(**(longlong * *)(param_1 + 0x2e8) + 8))();
        *(undefined8 * )(param_1 + 0x2e8) = 0;
    }
    return;
}


undefined8 *FUN_1401d2590(undefined8 *param_1) {
    undefined8 uVar1;
    uint uVar2;
    undefined8 *in_stack_00000028;
    undefined8 *in_stack_00000030;

    FUN_1401d80d0();
    *param_1 = &PTR_LAB_140b5fa20;
    param_1[0x57] = *in_stack_00000028;
    param_1[0x58] = in_stack_00000028[1];
    param_1[0x59] = in_stack_00000028[2];
    param_1[0x5a] = in_stack_00000028[3];
    param_1[0x5b] = in_stack_00000028[4];
    uVar1 = in_stack_00000028[5];
    param_1[0x5d] = in_stack_00000030;
    param_1[0x5c] = uVar1;
    (**(code * *) * in_stack_00000030)();
    param_1[0x46] = param_1[0x57];
    param_1[0x61] = 0;
    param_1[0x45] = param_1[0x58];
    param_1[0x60] = 0;
    param_1[100] = 0;
    *(undefined4 * )(param_1 + 0x6a) = 1;
    *(undefined4 * )((longlong) param_1 + 0x34c) = 0;
    *(undefined4 * )((longlong) param_1 + 0x35c) = 0;
    param_1[0x66] = 0;
    *(undefined4 * )((longlong) param_1 + 0x354) = 1;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x77] = 0;
    uVar2 = 0x3fff0;
    if (*(uint * )(param_1 + 0x59) < 0x3fff0) {
        uVar2 = *(uint * )(param_1 + 0x59);
    }
    *(uint * )(param_1 + 0x76) = uVar2;
    return param_1;
}


undefined8 *FUN_1401d26c0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b5fa20;
    FUN_1401d2cf0();
    *param_1 = &PTR_LAB_140b5fdb0;
    if (param_1[0x56] != 0) {
        CloseHandle((HANDLE) param_1[0x56]);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401d2cf0(longlong param_1) {
    undefined *local_18;
    code *local_10;

    if (*(longlong * )(param_1 + 0x2e8) != 0) {
        FUN_14018b900(*(undefined8 * )(param_1 + 0x3a8), 0);
        *(undefined8 * )(param_1 + 0x3a8) = 0;
        local_18 = &LAB_1401c3630;
        local_10 = FUN_14002d9c0;
        FUN_14002d9c0(&local_18, *(undefined8 * )(param_1 + 0x300));
        *(undefined8 * )(param_1 + 0x300) = 0;
        (*local_10)(&local_18, *(undefined8 * )(param_1 + 0x308));
        *(undefined8 * )(param_1 + 0x308) = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x2e8) + 8))();
        *(undefined8 * )(param_1 + 0x2e8) = 0;
    }
    return;
}


undefined8 *FUN_1401d2d90(undefined8 *param_1) {
    undefined8 uVar1;
    undefined8 *in_stack_00000028;
    undefined8 *in_stack_00000030;

    FUN_1401d80d0();
    *param_1 = &PTR_LAB_140b5fbe0;
    param_1[0x57] = *in_stack_00000028;
    param_1[0x58] = in_stack_00000028[1];
    param_1[0x59] = in_stack_00000028[2];
    param_1[0x5a] = in_stack_00000028[3];
    param_1[0x5b] = in_stack_00000028[4];
    uVar1 = in_stack_00000028[5];
    param_1[0x5d] = in_stack_00000030;
    param_1[0x5c] = uVar1;
    (**(code * *) * in_stack_00000030)();
    param_1[0x5e] = 0;
    param_1[0x46] = param_1[0x57];
    param_1[0x45] = param_1[0x58];
    return param_1;
}


void FUN_1401d2e70(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5fbe0;
    if ((longlong *) param_1[0x5d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x5d] + 8))();
        param_1[0x5d] = 0;
    }
    *param_1 = &PTR_LAB_140b5fdb0;
    if (param_1[0x56] != 0) {
        // WARNING: Could not recover jumptable at 0x0001401d2ec2. Too many branches
        // WARNING: Treating indirect jump as call
        CloseHandle((HANDLE) param_1[0x56]);
        return;
    }
    return;
}


void FUN_1401d30e0(longlong param_1) {
    if (*(longlong * *)(param_1 + 0x2e8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x2e8) + 8))();
        *(undefined8 * )(param_1 + 0x2e8) = 0;
    }
    return;
}


ulonglong *
FUN_1401d3110(ulonglong *param_1, code *param_2, ulonglong *param_3, undefined8 param_4, uint param_5) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined auVar4[16];
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;

    *param_1 = *param_3;
    uVar8 = param_3[1];
    param_1[1] = uVar8;
    if (uVar8 <= *param_1) {
        return param_1;
    }
    auVar4 = ZEXT816(8) * ZEXT816(uVar8 - *param_1);
    uVar6 = SUB168(auVar4, 0);
    if (SUB168(auVar4 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    lVar7 = FUN_14018b280(uVar6, 0);
    uVar8 = *param_1;
    param_1[2] = lVar7 + uVar8 * -8;
    if ((param_5 & 1) == 0) {
        lVar7 = 0;
        if ((param_5 & 2) == 0) {
            if ((param_5 & 8) == 0) {
                if ((param_5 & 4) == 0) {
                    if ((param_5 & 0x20) == 0) {
                        if (uVar8 < param_1[1]) {
                            do {
                                *(ulonglong * )(param_1[2] + uVar8 * 8) = uVar8;
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_1[1]);
                        }
                    } else if (uVar8 < param_1[1]) {
                        do {
                            uVar8 = uVar8 + 1;
                            *(longlong * )((param_1[2] - 8) + uVar8 * 8) = lVar7;
                            lVar7 = lVar7 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                } else {
                    auVar4 = ZEXT816(8) * ZEXT816(param_1[1] - uVar8);
                    uVar6 = SUB168(auVar4, 0);
                    if (SUB168(auVar4 >> 0x40, 0) != 0) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    lVar7 = FUN_14018b280(uVar6, 0);
                    uVar8 = *param_1;
                    lVar7 = lVar7 + uVar8 * -8;
                    if (uVar8 < param_1[1]) {
                        do {
                            *(ulonglong * )(lVar7 + uVar8 * 8) = uVar8;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    FUN_14001fec0(param_2, lVar7 + *param_1 * 8, param_1[1] - *param_1, param_4);
                    uVar8 = *param_1;
                    if ((param_5 & 0x20) == 0) {
                        if (uVar8 < param_1[1]) {
                            do {
                                lVar10 = *(longlong * )(lVar7 + uVar8 * 8);
                                uVar8 = uVar8 + 1;
                                *(longlong * )(param_1[2] + lVar10 * 8) = lVar10;
                                if (param_1[1] <= uVar8) break;
                                do {
                                    iVar5 = (*param_2)(lVar10, *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                                    if (iVar5 != 0) break;
                                    lVar3 = uVar8 * 8;
                                    uVar8 = uVar8 + 1;
                                    *(longlong * )(param_1[2] + *(longlong * )(lVar7 + lVar3) * 8) = lVar10;
                                } while (uVar8 < param_1[1]);
                            } while (uVar8 < param_1[1]);
                        }
                    } else {
                        lVar10 = 0;
                        if (uVar8 < param_1[1]) {
                            do {
                                lVar3 = *(longlong * )(lVar7 + uVar8 * 8);
                                uVar8 = uVar8 + 1;
                                *(longlong * )(param_1[2] + lVar3 * 8) = lVar10;
                                if (uVar8 < param_1[1]) {
                                    do {
                                        iVar5 = (*param_2)(lVar3, *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                                        if (iVar5 != 0) break;
                                        lVar1 = uVar8 * 8;
                                        uVar8 = uVar8 + 1;
                                        *(longlong * )(param_1[2] + *(longlong * )(lVar7 + lVar1) * 8) = lVar10;
                                    } while (uVar8 < param_1[1]);
                                }
                                lVar10 = lVar10 + 1;
                            } while (uVar8 < param_1[1]);
                            FUN_14018b900(lVar7 + *param_1 * 8, 0);
                            goto LAB_1401d3e71;
                        }
                    }
                    FUN_14018b900(lVar7 + *param_1 * 8, 0);
                }
            } else {
                auVar4 = ZEXT816(8) * ZEXT816(param_1[1] - uVar8);
                uVar6 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar6 = 0xffffffffffffffff;
                }
                lVar10 = FUN_14018b280(uVar6, 0);
                uVar8 = *param_1;
                lVar10 = lVar10 + uVar8 * -8;
                if (uVar8 < param_1[1]) {
                    do {
                        *(ulonglong * )(lVar10 + uVar8 * 8) = uVar8;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[1]);
                }
                FUN_14001fec0(param_2, lVar10 + *param_1 * 8, param_1[1] - *param_1, param_4);
                uVar8 = *param_1;
                if ((param_5 & 0x20) == 0) {
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar7 = *(longlong * )(lVar10 + uVar8 * 8);
                            uVar8 = uVar8 + 1;
                            *(longlong * )(param_1[2] + lVar7 * 8) = lVar7;
                            if (param_1[1] <= uVar8) break;
                            do {
                                iVar5 = (*param_2)(lVar7, *(undefined8 * )(lVar10 + uVar8 * 8), param_4);
                                if (iVar5 != 0) break;
                                lVar3 = uVar8 * 8;
                                uVar8 = uVar8 + 1;
                                *(undefined8 * )(param_1[2] + *(longlong * )(lVar10 + lVar3) * 8) = 0xffffffffffffffff;
                            } while (uVar8 < param_1[1]);
                        } while (uVar8 < param_1[1]);
                    }
                } else if (uVar8 < param_1[1]) {
                    do {
                        lVar3 = *(longlong * )(lVar10 + uVar8 * 8);
                        uVar8 = uVar8 + 1;
                        *(longlong * )(param_1[2] + lVar3 * 8) = lVar7;
                        if (uVar8 < param_1[1]) {
                            do {
                                iVar5 = (*param_2)(lVar3, *(undefined8 * )(lVar10 + uVar8 * 8), param_4);
                                if (iVar5 != 0) break;
                                lVar1 = uVar8 * 8;
                                uVar8 = uVar8 + 1;
                                *(undefined8 * )(param_1[2] + *(longlong * )(lVar10 + lVar1) * 8) = 0xffffffffffffffff;
                            } while (uVar8 < param_1[1]);
                        }
                        lVar7 = lVar7 + 1;
                    } while (uVar8 < param_1[1]);
                }
                if ((param_5 & 0x10) != 0) {
                    uVar8 = *param_1;
                    uVar9 = uVar8;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar7 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar7 != -1) {
                                *(longlong * )(param_1[2] + uVar9 * 8) = lVar7;
                                uVar9 = uVar9 + 1;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    param_1[1] = uVar9;
                }
                FUN_14018b900(lVar10 + *param_1 * 8, 0);
            }
        } else {
            if (uVar8 < param_1[1]) {
                do {
                    *(ulonglong * )(param_1[2] + uVar8 * 8) = uVar8;
                    uVar8 = uVar8 + 1;
                } while (uVar8 < param_1[1]);
            }
            FUN_14001fec0(param_2, param_1[2] + *param_1 * 8, param_1[1] - *param_1, param_4);
            if ((param_5 & 0xc) == 0) {
                if (((param_5 & 0x20) != 0) && (uVar8 = *param_1, uVar8 < param_1[1])) {
                    do {
                        plVar2 = (longlong * )(param_1[2] + uVar8 * 8);
                        uVar8 = uVar8 + 1;
                        *plVar2 = *plVar2 - *param_1;
                    } while (uVar8 < param_1[1]);
                }
            } else {
                if ((param_5 & 8) == 0) {
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            uVar8 = uVar8 + 1;
                            uVar6 = *(undefined8 * )((param_1[2] - 8) + uVar8 * 8);
                            if (param_1[1] <= uVar8) break;
                            do {
                                iVar5 = (*param_2)(uVar6, *(undefined8 * )(param_1[2] + uVar8 * 8), param_4);
                                if (iVar5 != 0) break;
                                uVar8 = uVar8 + 1;
                                *(undefined8 * )((param_1[2] - 8) + uVar8 * 8) = uVar6;
                            } while (uVar8 < param_1[1]);
                        } while (uVar8 < param_1[1]);
                    }
                } else if ((param_5 & 0x10) == 0) {
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            uVar8 = uVar8 + 1;
                            uVar6 = *(undefined8 * )((param_1[2] - 8) + uVar8 * 8);
                            if (param_1[1] <= uVar8) break;
                            do {
                                iVar5 = (*param_2)(uVar6, *(undefined8 * )(param_1[2] + uVar8 * 8), param_4);
                                if (iVar5 != 0) break;
                                uVar8 = uVar8 + 1;
                                *(undefined8 * )((param_1[2] - 8) + uVar8 * 8) = 0xffffffffffffffff;
                            } while (uVar8 < param_1[1]);
                        } while (uVar8 < param_1[1]);
                    }
                } else {
                    uVar8 = *param_1;
                    uVar9 = uVar8;
                    if (uVar8 < param_1[1]) {
                        do {
                            uVar8 = uVar8 + 1;
                            uVar6 = *(undefined8 * )((param_1[2] - 8) + uVar8 * 8);
                            *(undefined8 * )(param_1[2] + uVar9 * 8) = uVar6;
                            if (uVar8 < param_1[1]) {
                                do {
                                    iVar5 = (*param_2)(uVar6, *(undefined8 * )(param_1[2] + uVar8 * 8), param_4);
                                    if (iVar5 != 0) break;
                                    uVar8 = uVar8 + 1;
                                } while (uVar8 < param_1[1]);
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    param_1[1] = uVar9;
                }
                lVar7 = 0;
                if ((param_5 & 0x20) != 0) {
                    auVar4 = ZEXT816(8) * ZEXT816(param_3[1] - *param_3);
                    uVar6 = SUB168(auVar4, 0);
                    if (SUB168(auVar4 >> 0x40, 0) != 0) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    lVar10 = FUN_14018b280(uVar6, 0);
                    uVar8 = *param_3;
                    lVar10 = lVar10 + uVar8 * -8;
                    if (uVar8 < param_3[1]) {
                        do {
                            *(undefined8 * )(lVar10 + uVar8 * 8) = 0xffffffffffffffff;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_3[1]);
                    }
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar3 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar3 != -1) {
                                *(undefined8 * )(lVar10 + lVar3 * 8) = 0;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    uVar8 = *param_3;
                    if (uVar8 < param_3[1]) {
                        do {
                            if (*(longlong * )(lVar10 + uVar8 * 8) != -1) {
                                *(longlong * )(lVar10 + uVar8 * 8) = lVar7;
                                lVar7 = lVar7 + 1;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_3[1]);
                    }
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar7 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar7 != -1) {
                                *(undefined8 * )(param_1[2] + uVar8 * 8) = *(undefined8 * )(lVar10 + lVar7 * 8);
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    FUN_14018b900(lVar10, 0);
                }
            }
        }
    } else {
        lVar7 = 0;
        if ((param_5 & 2) == 0) {
            if ((param_5 & 8) == 0) {
                if ((param_5 & 4) == 0) {
                    if ((param_5 & 0x20) == 0) {
                        if (uVar8 < param_1[1]) {
                            do {
                                *(ulonglong * )(param_1[2] + uVar8 * 8) = uVar8;
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_1[1]);
                        }
                    } else if (uVar8 < param_1[1]) {
                        do {
                            uVar8 = uVar8 + 1;
                            *(longlong * )((param_1[2] - 8) + uVar8 * 8) = lVar7;
                            lVar7 = lVar7 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                } else {
                    auVar4 = ZEXT816(8) * ZEXT816(param_1[1] - uVar8);
                    uVar6 = SUB168(auVar4, 0);
                    if (SUB168(auVar4 >> 0x40, 0) != 0) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    lVar7 = FUN_14018b280(uVar6, 0);
                    uVar8 = *param_1;
                    lVar7 = lVar7 + uVar8 * -8;
                    if (uVar8 < param_1[1]) {
                        do {
                            *(ulonglong * )(lVar7 + uVar8 * 8) = uVar8;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    FUN_14001fec0(param_2, lVar7 + *param_1 * 8, param_1[1] - *param_1, param_4);
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar10 = *(longlong * )(lVar7 + uVar8 * 8);
                            uVar8 = uVar8 + 1;
                            *(longlong * )(param_1[2] + lVar10 * 8) = lVar10;
                            if (param_1[1] <= uVar8) break;
                            do {
                                iVar5 = (*param_2)(lVar10, *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                                if (iVar5 != 0) break;
                                lVar3 = uVar8 * 8;
                                uVar8 = uVar8 + 1;
                                *(longlong * )(param_1[2] + *(longlong * )(lVar7 + lVar3) * 8) = lVar10;
                            } while (uVar8 < param_1[1]);
                        } while (uVar8 < param_1[1]);
                    }
                    lVar10 = 0;
                    FUN_14018b900(lVar7, 0);
                    if ((param_5 & 0x20) != 0) {
                        auVar4 = ZEXT816(8) * ZEXT816(param_3[1] - *param_3);
                        uVar6 = SUB168(auVar4, 0);
                        if (SUB168(auVar4 >> 0x40, 0) != 0) {
                            uVar6 = 0xffffffffffffffff;
                        }
                        lVar7 = FUN_14018b280(uVar6, 0);
                        uVar8 = *param_3;
                        lVar7 = lVar7 + uVar8 * -8;
                        if (uVar8 < param_3[1]) {
                            do {
                                *(undefined8 * )(lVar7 + uVar8 * 8) = 0xffffffffffffffff;
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_3[1]);
                        }
                        uVar8 = *param_1;
                        if (uVar8 < param_1[1]) {
                            do {
                                lVar3 = *(longlong * )(param_1[2] + uVar8 * 8);
                                if (lVar3 != -1) {
                                    *(undefined8 * )(lVar7 + lVar3 * 8) = 0;
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_1[1]);
                        }
                        uVar8 = *param_3;
                        if (uVar8 < param_3[1]) {
                            do {
                                if (*(longlong * )(lVar7 + uVar8 * 8) != -1) {
                                    *(longlong * )(lVar7 + uVar8 * 8) = lVar10;
                                    lVar10 = lVar10 + 1;
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_3[1]);
                        }
                        uVar8 = *param_1;
                        if (uVar8 < param_1[1]) {
                            do {
                                lVar10 = *(longlong * )(param_1[2] + uVar8 * 8);
                                if (lVar10 != -1) {
                                    *(undefined8 * )(param_1[2] + uVar8 * 8) = *(undefined8 * )(lVar7 + lVar10 * 8);
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_1[1]);
                        }
                        FUN_14018b900(lVar7, 0);
                    }
                }
            } else {
                auVar4 = ZEXT816(8) * ZEXT816(param_1[1] - uVar8);
                uVar6 = SUB168(auVar4, 0);
                if (SUB168(auVar4 >> 0x40, 0) != 0) {
                    uVar6 = 0xffffffffffffffff;
                }
                lVar7 = FUN_14018b280(uVar6, 0);
                uVar8 = *param_1;
                lVar7 = lVar7 + uVar8 * -8;
                if (uVar8 < param_1[1]) {
                    do {
                        *(ulonglong * )(lVar7 + uVar8 * 8) = uVar8;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[1]);
                }
                FUN_14001fec0(param_2, lVar7 + *param_1 * 8, param_1[1] - *param_1, param_4);
                uVar8 = *param_1;
                if (uVar8 < param_1[1]) {
                    do {
                        lVar10 = *(longlong * )(lVar7 + uVar8 * 8);
                        uVar8 = uVar8 + 1;
                        *(longlong * )(param_1[2] + lVar10 * 8) = lVar10;
                        if (param_1[1] <= uVar8) break;
                        do {
                            iVar5 = (*param_2)(lVar10, *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                            if (iVar5 != 0) break;
                            lVar3 = uVar8 * 8;
                            uVar8 = uVar8 + 1;
                            *(undefined8 * )(param_1[2] + *(longlong * )(lVar7 + lVar3) * 8) = 0xffffffffffffffff;
                        } while (uVar8 < param_1[1]);
                    } while (uVar8 < param_1[1]);
                }
                lVar10 = 0;
                FUN_14018b900(lVar7, 0);
                if ((param_5 & 0x10) != 0) {
                    uVar8 = *param_1;
                    uVar9 = uVar8;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar7 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar7 != -1) {
                                *(longlong * )(param_1[2] + uVar9 * 8) = lVar7;
                                uVar9 = uVar9 + 1;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    param_1[1] = uVar9;
                }
                if ((param_5 & 0x20) != 0) {
                    auVar4 = ZEXT816(8) * ZEXT816(param_3[1] - *param_3);
                    uVar6 = SUB168(auVar4, 0);
                    if (SUB168(auVar4 >> 0x40, 0) != 0) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    lVar7 = FUN_14018b280(uVar6, 0);
                    uVar8 = *param_3;
                    lVar7 = lVar7 + uVar8 * -8;
                    if (uVar8 < param_3[1]) {
                        do {
                            *(undefined8 * )(lVar7 + uVar8 * 8) = 0xffffffffffffffff;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_3[1]);
                    }
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar3 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar3 != -1) {
                                *(undefined8 * )(lVar7 + lVar3 * 8) = 0;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    uVar8 = *param_3;
                    if (uVar8 < param_3[1]) {
                        do {
                            if (*(longlong * )(lVar7 + uVar8 * 8) != -1) {
                                *(longlong * )(lVar7 + uVar8 * 8) = lVar10;
                                lVar10 = lVar10 + 1;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_3[1]);
                    }
                    uVar8 = *param_1;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar10 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar10 != -1) {
                                *(undefined8 * )(param_1[2] + uVar8 * 8) = *(undefined8 * )(lVar7 + lVar10 * 8);
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    FUN_14018b900(lVar7, 0);
                }
            }
        } else {
            auVar4 = ZEXT816(8) * ZEXT816(param_1[1] - uVar8);
            uVar6 = SUB168(auVar4, 0);
            if (SUB168(auVar4 >> 0x40, 0) != 0) {
                uVar6 = 0xffffffffffffffff;
            }
            lVar7 = FUN_14018b280(uVar6, 0);
            uVar8 = *param_1;
            lVar7 = lVar7 + uVar8 * -8;
            if (uVar8 < param_1[1]) {
                do {
                    *(ulonglong * )(lVar7 + uVar8 * 8) = uVar8;
                    uVar8 = uVar8 + 1;
                } while (uVar8 < param_1[1]);
            }
            FUN_14001fec0(param_2, lVar7 + *param_1 * 8, param_1[1] - *param_1, param_4);
            if ((param_5 & 8) == 0) {
                if ((param_5 & 4) == 0) {
                    if ((param_5 & 0x20) == 0) {
                        uVar8 = *param_1;
                        if (uVar8 < param_1[1]) {
                            do {
                                *(ulonglong * )(param_1[2] + *(longlong * )(lVar7 + uVar8 * 8) * 8) = uVar8;
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < param_1[1]);
                        }
                    } else {
                        uVar8 = *param_1;
                        lVar10 = 0;
                        if (uVar8 < param_1[1]) {
                            do {
                                lVar3 = uVar8 * 8;
                                uVar8 = uVar8 + 1;
                                *(longlong * )(param_1[2] + *(longlong * )(lVar7 + lVar3) * 8) = lVar10;
                                lVar10 = lVar10 + 1;
                            } while (uVar8 < param_1[1]);
                            FUN_14018b900(lVar7, 0);
                            goto LAB_1401d3e71;
                        }
                    }
                } else {
                    uVar8 = *param_1;
                    if ((param_5 & 0x20) == 0) {
                        if (uVar8 < param_1[1]) {
                            do {
                                *(ulonglong * )(param_1[2] + *(longlong * )(uVar8 * 8 + lVar7) * 8) = uVar8;
                                uVar9 = uVar8 + 1;
                                if (param_1[1] <= uVar9) goto LAB_1401d3485;
                                do {
                                    iVar5 = (*param_2)(*(undefined8 * )(uVar8 * 8 + lVar7),
                                                       *(undefined8 * )(lVar7 + uVar9 * 8), param_4);
                                    if (iVar5 != 0) break;
                                    lVar10 = uVar9 * 8;
                                    uVar9 = uVar9 + 1;
                                    *(ulonglong * )(param_1[2] + *(longlong * )(lVar7 + lVar10) * 8) = uVar8;
                                } while (uVar9 < param_1[1]);
                                uVar8 = uVar9;
                            } while (uVar9 < param_1[1]);
                            FUN_14018b900(lVar7, 0);
                            goto LAB_1401d3e71;
                        }
                    } else {
                        lVar10 = 0;
                        if (uVar8 < param_1[1]) {
                            do {
                                lVar3 = uVar8 * 8;
                                uVar8 = uVar8 + 1;
                                *(longlong * )(param_1[2] + *(longlong * )(lVar3 + lVar7) * 8) = lVar10;
                                if (uVar8 < param_1[1]) {
                                    do {
                                        iVar5 = (*param_2)(*(undefined8 * )(lVar3 + lVar7),
                                                           *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                                        if (iVar5 != 0) break;
                                        lVar1 = uVar8 * 8;
                                        uVar8 = uVar8 + 1;
                                        *(longlong * )(param_1[2] + *(longlong * )(lVar7 + lVar1) * 8) = lVar10;
                                    } while (uVar8 < param_1[1]);
                                }
                                lVar10 = lVar10 + 1;
                            } while (uVar8 < param_1[1]);
                            FUN_14018b900(lVar7, 0);
                            goto LAB_1401d3e71;
                        }
                    }
                }
            } else {
                uVar8 = *param_1;
                if ((param_5 & 0x20) == 0) {
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar10 = uVar8 * 8;
                            *(ulonglong * )(param_1[2] + *(longlong * )(lVar10 + lVar7) * 8) = uVar8;
                            uVar8 = uVar8 + 1;
                            if (param_1[1] <= uVar8) break;
                            do {
                                iVar5 = (*param_2)(*(undefined8 * )(lVar10 + lVar7),
                                                   *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                                if (iVar5 != 0) break;
                                lVar3 = uVar8 * 8;
                                uVar8 = uVar8 + 1;
                                *(undefined8 * )(param_1[2] + *(longlong * )(lVar7 + lVar3) * 8) = 0xffffffffffffffff;
                            } while (uVar8 < param_1[1]);
                        } while (uVar8 < param_1[1]);
                    }
                } else {
                    lVar10 = 0;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar3 = uVar8 * 8;
                            uVar8 = uVar8 + 1;
                            *(longlong * )(param_1[2] + *(longlong * )(lVar3 + lVar7) * 8) = lVar10;
                            if (uVar8 < param_1[1]) {
                                do {
                                    iVar5 = (*param_2)(*(undefined8 * )(lVar3 + lVar7),
                                                       *(undefined8 * )(lVar7 + uVar8 * 8), param_4);
                                    if (iVar5 != 0) break;
                                    lVar1 = uVar8 * 8;
                                    uVar8 = uVar8 + 1;
                                    *(undefined8 * )(param_1[2] + *(longlong * )(lVar7 + lVar1) * 8) =
                                            0xffffffffffffffff;
                                } while (uVar8 < param_1[1]);
                            }
                            lVar10 = lVar10 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                }
                if ((param_5 & 0x10) != 0) {
                    uVar8 = *param_1;
                    uVar9 = uVar8;
                    if (uVar8 < param_1[1]) {
                        do {
                            lVar10 = *(longlong * )(param_1[2] + uVar8 * 8);
                            if (lVar10 != -1) {
                                *(longlong * )(param_1[2] + uVar9 * 8) = lVar10;
                                uVar9 = uVar9 + 1;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < param_1[1]);
                    }
                    param_1[1] = uVar9;
                    FUN_14018b900(lVar7, 0);
                    goto LAB_1401d3e71;
                }
            }
            LAB_1401d3485:
            FUN_14018b900(lVar7, 0);
        }
    }
    LAB_1401d3e71:
    if ((param_5 & 0x10) != 0) {
        uVar8 = *param_1;
        *param_1 = 0;
        param_1[2] = param_1[2] + uVar8 * 8;
        param_1[1] = param_1[1] - uVar8;
    }
    return param_1;
}


undefined8 FUN_1401d3ec0(short *param_1) {
    short sVar1;
    short *psVar2;
    short *psVar3;
    int iVar4;
    int iVar5;
    bool bVar6;

    if (param_1 == (short *) 0x0) {
        return 0;
    }
    iVar4 = 0;
    bVar6 = *param_1 == 0;
    LAB_1401d3ed1:
    do {
        if (bVar6) {
            return 1;
        }
        sVar1 = param_1[iVar4];
        if (sVar1 == 0x21) {
            LAB_1401d3eee:
            iVar4 = iVar4 + 1;
            if (param_1[iVar4] == 0) {
                return 0;
            }
        } else if (sVar1 == 0x5b) {
            iVar5 = iVar4 + 1;
            if (param_1[iVar4 + 1] == 0x21) {
                iVar5 = iVar4 + 2;
            }
            iVar4 = iVar5;
            psVar3 = param_1 + iVar4;
            if (*psVar3 != 0x5d) {
                do {
                    psVar2 = psVar3;
                    if (*psVar3 == 0x60) {
                        iVar4 = iVar4 + 1;
                        psVar2 = psVar3 + 1;
                    }
                    if (*psVar2 == 0) {
                        return 0;
                    }
                    psVar3 = psVar2 + 1;
                    iVar5 = iVar4;
                    if (*psVar3 == 0x2d) {
                        psVar3 = psVar2 + 2;
                        iVar5 = iVar4 + 2;
                        if (*psVar3 == 0x60) {
                            iVar5 = iVar4 + 3;
                            psVar3 = psVar2 + 3;
                        }
                        if (*psVar3 == 0) {
                            return 0;
                        }
                        psVar3 = psVar3 + 1;
                    }
                    iVar4 = iVar5 + 1;
                    if (*psVar3 == 0) {
                        return 0;
                    }
                } while (*psVar3 != 0x5d);
                iVar4 = iVar5 + 2;
                bVar6 = param_1[iVar4] == 0;
                goto LAB_1401d3ed1;
            }
        } else if (sVar1 == 0x60) goto LAB_1401d3eee;
        iVar4 = iVar4 + 1;
        bVar6 = param_1[iVar4] == 0;
    } while (true);
}


ulonglong FUN_1401d3f90(ushort *param_1, ushort *param_2) {
    bool bVar1;
    short sVar2;
    short sVar3;
    ushort uVar4;
    int iVar5;
    ulonglong uVar6;
    ushort *puVar7;
    ulonglong uVar8;
    ushort uVar9;
    ulonglong uVar10;
    ushort *puVar11;
    ushort uVar12;
    uint uVar13;
    ushort uVar14;
    bool bVar15;
    ulonglong local_38;

    uVar9 = *param_1;
    local_38 = 0;
    while (uVar9 != 0) {
        uVar8 = 0;
        uVar14 = *param_2;
        puVar11 = param_1 + 1;
        switch (uVar9) {
            case 0x1a:
                uVar9 = *param_2;
                uVar10 = uVar8;
                if (uVar9 != 0) goto LAB_1401d4390;
                goto LAB_1401d43b1;
            default:
                if (uVar14 < 0x80) {
                    if ((ushort)(uVar14 - 0x41) < 0x1a) {
                        uVar14 = uVar14 + 0x20;
                    }
                } else {
                    uVar10 = 0x3d1;
                    do {
                        uVar6 = (uVar10 - uVar8 >> 1) + uVar8;
                        if (*(ushort * )(&UNK_140a41a80 + uVar6 * 2) <= uVar14) {
                            if (uVar14 <= *(ushort * )(&UNK_140a41a80 + uVar6 * 2)) {
                                uVar14 = *(ushort * )(&UNK_140a40af0 + uVar6 * 2);
                                break;
                            }
                            uVar8 = uVar6 + 1;
                            uVar6 = uVar10;
                        }
                        uVar10 = uVar6;
                    } while (uVar8 < uVar6);
                }
                uVar8 = 0;
                if (uVar9 < 0x80) {
                    if ((ushort)(uVar9 - 0x41) < 0x1a) {
                        uVar9 = uVar9 + 0x20;
                    }
                } else {
                    uVar10 = 0x3d1;
                    do {
                        uVar6 = (uVar10 - uVar8 >> 1) + uVar8;
                        if (*(ushort * )(&UNK_140a41a80 + uVar6 * 2) <= uVar9) {
                            if (uVar9 <= *(ushort * )(&UNK_140a41a80 + uVar6 * 2)) {
                                uVar9 = *(ushort * )(&UNK_140a40af0 + uVar6 * 2);
                                break;
                            }
                            uVar8 = uVar6 + 1;
                            uVar6 = uVar10;
                        }
                        uVar10 = uVar6;
                    } while (uVar8 < uVar6);
                }
                if (uVar14 != uVar9) {
                    return 0;
                }
                break;
            case 0x21:
                if (*puVar11 == 0) {
                    return 0;
                }
                iVar5 = FUN_1401d3f90(puVar11, param_2);
                bVar15 = iVar5 == 0;
                goto LAB_1401d43fb;
            case 0x2a:
                puVar7 = param_2;
                if (*param_2 != 0) {
                    do {
                        puVar7 = puVar7 + 1;
                        uVar13 = (int) uVar8 + 1;
                        uVar8 = (ulonglong) uVar13;
                        local_38 = uVar8;
                        if (*puVar7 == 0) goto joined_r0x0001401d4335;
                    } while (true);
                }
                do {
                    iVar5 = FUN_1401d3f90(puVar11, param_2 + (int) local_38);
                    if (iVar5 != 0) {
                        return 1;
                    }
                    uVar13 = (int) local_38 - 1;
                    local_38 = (ulonglong) uVar13;
                    joined_r0x0001401d4335:
                } while (-1 < (int) uVar13);
                return 0;
            case 0x3f:
                if (uVar14 == 0) {
                    return 0;
                }
                break;
            case 0x5b:
                bVar15 = *puVar11 == 0x21;
                if (bVar15) {
                    puVar11 = param_1 + 2;
                }
                bVar1 = !bVar15;
                uVar9 = *puVar11;
                while ((puVar7 = puVar11, uVar9 != 0x5d && (uVar8 = 0, uVar9 != 0))) {
                    if (uVar9 == 0x60) {
                        puVar11 = puVar11 + 1;
                    }
                    uVar14 = *puVar11;
                    puVar7 = puVar11;
                    if (uVar14 == 0) break;
                    puVar7 = puVar11 + 1;
                    uVar12 = uVar14;
                    if (*puVar7 == 0x2d) {
                        puVar7 = puVar11 + 2;
                        if (*puVar7 == 0x60) {
                            puVar7 = puVar11 + 3;
                        }
                        uVar12 = *puVar7;
                        if (uVar12 == 0) break;
                        puVar7 = puVar7 + 1;
                    }
                    uVar9 = *puVar7;
                    if (uVar9 == 0) break;
                    if (uVar14 < 0x80) {
                        if ((ushort)(uVar14 - 0x41) < 0x1a) {
                            uVar14 = uVar14 + 0x20;
                        }
                    } else {
                        uVar10 = 0x3d1;
                        do {
                            uVar6 = (uVar10 - uVar8 >> 1) + uVar8;
                            if (*(ushort * )(&UNK_140a41a80 + uVar6 * 2) <= uVar14) {
                                if (uVar14 <= *(ushort * )(&UNK_140a41a80 + uVar6 * 2)) {
                                    uVar14 = *(ushort * )(&UNK_140a40af0 + uVar6 * 2);
                                    break;
                                }
                                uVar8 = uVar6 + 1;
                                uVar6 = uVar10;
                            }
                            uVar10 = uVar6;
                        } while (uVar8 < uVar6);
                    }
                    uVar4 = FUN_140056430();
                    puVar11 = puVar7;
                    if (uVar14 <= uVar4) {
                        if (uVar12 < 0x80) {
                            if ((ushort)(uVar12 - 0x41) < 0x1a) {
                                if (uVar4 <= (ushort)(uVar12 + 0x20)) {
                                    bVar15 = bVar1;
                                }
                            } else {
                                LAB_1401d41c6:
                                if (uVar4 <= uVar12) {
                                    bVar15 = bVar1;
                                }
                            }
                        } else {
                            uVar8 = 0;
                            uVar10 = 0x3d1;
                            do {
                                uVar6 = (uVar10 - uVar8 >> 1) + uVar8;
                                if (*(ushort * )(&UNK_140a41a80 + uVar6 * 2) <= uVar12) {
                                    if (uVar12 <= *(ushort * )(&UNK_140a41a80 + uVar6 * 2)) {
                                        uVar12 = *(ushort * )(&UNK_140a40af0 + uVar6 * 2);
                                        goto LAB_1401d41c6;
                                    }
                                    uVar8 = uVar6 + 1;
                                    uVar6 = uVar10;
                                }
                                uVar10 = uVar6;
                            } while (uVar8 < uVar6);
                            if (uVar4 <= uVar12) {
                                bVar15 = bVar1;
                            }
                        }
                    }
                }
                if (!bVar15) {
                    return 0;
                }
                if (*puVar7 == 0) {
                    return 0;
                }
                puVar11 = puVar7 + 1;
                break;
            case 0x60:
                uVar9 = *puVar11;
                sVar2 = FUN_140056430();
                sVar3 = FUN_140056430();
                if (sVar3 != sVar2) {
                    return 0;
                }
                if (uVar9 == 0) {
                    return 0;
                }
                puVar11 = param_1 + 2;
        }
        param_2 = param_2 + 1;
        param_1 = puVar11;
        uVar9 = *puVar11;
    }
    bVar15 = *param_2 == 0;
    LAB_1401d43fb:
    return (ulonglong) bVar15;
    while (true) {
        uVar9 = param_2[uVar8 + 1];
        uVar8 = uVar8 + 1;
        uVar10 = (ulonglong)((int) uVar10 + 1);
        if (uVar9 == 0) break;
        LAB_1401d4390:
        if (uVar9 == 0x2e) break;
    }
    local_38 = uVar10;
    if ((int) uVar10 < 0) {
        return 0;
    }
    LAB_1401d43b1:
    do {
        uVar8 = FUN_1401d3f90(puVar11, param_2 + (int) local_38);
        if ((int) uVar8 != 0) {
            return 1;
        }
        uVar13 = (int) local_38 - 1;
        local_38 = (ulonglong) uVar13;
    } while (-1 < (int) uVar13);
    return uVar8;
}


undefined8 *
FUN_1401d44b0(undefined8 *param_1, undefined8 param_2, longlong param_3, undefined8 *param_4,
              undefined8 param_5) {
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b5fcc0;
    *(undefined4 * )(param_1 + 0x47) = 1;
    puVar2 = param_1 + 2;
    param_1[1] = param_2;
    lVar3 = 0x104;
    param_3 = param_3 - (longlong) puVar2;
    while ((lVar3 != -0x7ffffefa && (sVar1 = *(short *) (param_3 + (longlong) puVar2), sVar1 != 0))) {
        *(short *) puVar2 = sVar1;
        puVar2 = (undefined8 * )((longlong) puVar2 + 2);
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) {
            LAB_1401d4509:
            puVar2 = (undefined8 * )((longlong) puVar2 + -2);
            LAB_1401d450d:
            *(short *) puVar2 = 0;
            param_1[0x43] = *param_4;
            param_1[0x44] = param_4[1];
            *(undefined4 * )(param_1 + 0x45) = *(undefined4 * )(param_4 + 2);
            param_1[0x46] = param_5;
            return param_1;
        }
    }
    if (lVar3 != 0) goto LAB_1401d450d;
    goto LAB_1401d4509;
}


int FUN_1401d4570(longlong param_1, ulonglong param_2, longlong param_3, ulonglong param_4) {
    int iVar1;
    int iVar2;

    if (param_4 == 0) {
        return 0;
    }
    if (((param_3 != 0) && (param_2 <= *(ulonglong * )(param_1 + 0x230))) &&
        (param_4 <= *(ulonglong * )(param_1 + 0x230) - param_2)) {
        iVar1 = FUN_1401c3b70(*(undefined8 * )(param_1 + 8), param_1 + 0x10, param_2, param_3, param_4);
        iVar2 = 0;
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        return iVar2;
    }
    return -0x7ff8ffa9;
}


int FUN_1401d45d0(longlong param_1, longlong param_2, uint param_3, longlong param_4) {
    int iVar1;
    int iVar2;

    if (((param_3 != 0) && (param_2 != 0)) && (param_4 != 0)) {
        if ((*(ulonglong * )(param_4 + 0x10) <= *(ulonglong * )(param_1 + 0x230)) &&
            ((ulonglong) param_3 <= *(ulonglong * )(param_1 + 0x230) - *(ulonglong * )(param_4 + 0x10))) {
            iVar1 = FUN_1401c3dc0(*(undefined8 * )(param_1 + 8), param_1 + 0x10, param_2, param_3, param_4);
            iVar2 = 0;
            if (iVar1 < 0) {
                iVar2 = iVar1;
            }
            return iVar2;
        }
    }
    return -0x7ff8ffa9;
}


undefined8 FUN_1401d4650(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong * )(param_1 + 0x10) != 0) {
        lVar1 = *(longlong * )(param_1 + 8);
        uVar4 = *(ulonglong * )(param_1 + 0x10);
        do {
            uVar3 = (uVar4 - uVar5 >> 1) + uVar5;
            iVar2 = FUN_1407e6af0(param_2, lVar1 + uVar3 * 0x14, 0x14);
            if (-1 < iVar2) {
                if (iVar2 < 1) {
                    return 1;
                }
                uVar5 = uVar3 + 1;
                uVar3 = uVar4;
            }
            uVar4 = uVar3;
        } while (uVar5 < uVar3);
    }
    return 0;
}


undefined8 FUN_1401d46e0(longlong param_1, undefined8 param_2, ulonglong *param_3) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong * )(param_1 + 0x10) != 0) {
        lVar1 = *(longlong * )(param_1 + 8);
        uVar4 = *(ulonglong * )(param_1 + 0x10);
        do {
            uVar3 = (uVar4 - uVar5 >> 1) + uVar5;
            iVar2 = FUN_1407e6af0(param_2, lVar1 + uVar3 * 0x14, 0x14);
            if (-1 < iVar2) {
                if (iVar2 < 1) {
                    if (param_3 != (ulonglong *) 0x0) {
                        *param_3 = uVar3;
                    }
                    return 1;
                }
                uVar5 = uVar3 + 1;
                uVar3 = uVar4;
            }
            uVar4 = uVar3;
        } while (uVar5 < uVar3);
    }
    return 0;
}


int FUN_1401d4780(undefined8 *param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) ((longlong) param_1 + 0x44);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5fd10;
            if ((HANDLE) param_1[6] != (HANDLE) 0xffffffffffffffff) {
                CloseHandle((HANDLE) param_1[6]);
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1401d47d0(longlong param_1, longlong param_2) {
    BOOL BVar1;
    HANDLE hFile;
    undefined auStackY632[32];
    WCHAR local_238[264];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStackY632;
    Ordinal_165(0, *(longlong * )(param_1 + 8) + 8);
    FUN_1401c0d10(*(undefined8 * )(param_1 + 8), local_238);
    hFile = CreateFileW(local_238, 0x40000000, 0, (LPSECURITY_ATTRIBUTES) 0x0, 4, 0x80, (HANDLE) 0x0);
    if (hFile == (HANDLE) 0xffffffffffffffff) {
        GetLastError();
        goto LAB_1401d48c5;
    }
    BVar1 = GetFileSizeEx(hFile, (PLARGE_INTEGER)(param_1 + 0x28));
    if (BVar1 == 0) {
        LAB_1401d48a3:
        GetLastError();
    } else if (*(longlong * )(param_1 + 0x28) != param_2) {
        BVar1 = SetFilePointerEx(hFile, param_2, (PLARGE_INTEGER) 0x0, 0);
        if ((BVar1 == 0) || (BVar1 = SetEndOfFile(hFile), BVar1 == 0)) goto LAB_1401d48a3;
        *(longlong * )(param_1 + 0x28) = param_2;
    }
    CloseHandle(hFile);
    LAB_1401d48c5:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStackY632);
    return;
}


void FUN_1401d48f0(longlong param_1, undefined8 *param_2, undefined8 param_3) {
    HANDLE hFindFile;
    undefined auStack1192[32];
    DWORD local_488;
    DWORD DStack1156;
    byte local_478;
    DWORD local_45c;
    DWORD local_458;
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1192;
    FUN_1401c0d10(*(undefined8 * )(param_1 + 8), local_228, param_3, param_1 + 0x10);
    hFindFile = FindFirstFileW(local_228, (LPWIN32_FIND_DATAW) & local_478);
    if (hFindFile == (HANDLE) 0xffffffffffffffff) {
        GetLastError();
    } else if ((local_478 & 0x10) == 0) {
        local_488 = local_458;
        DStack1156 = local_45c;
        *(ulonglong * )(param_1 + 0x28) = CONCAT44(local_45c, local_458);
        if (param_2 != (undefined8 *) 0x0) {
            *param_2 = CONCAT44(local_45c, local_458);
        }
    }
    FindClose(hFindFile);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1192);
    return;
}


uint FUN_1401d4f90(longlong param_1) {
    int iVar1;
    DWORD DVar2;

    if ((*(int *) (param_1 + 0x40) - 2U & 0xfffffffd) == 0) {
        if (*(longlong * )(param_1 + 0x30) == -1) {
            return 0x80004005;
        }
        iVar1 = FUN_1401c35a0();
        if (iVar1 == 0) {
            DVar2 = GetLastError();
            if ((int) DVar2 < 1) {
                return DVar2;
            }
            return DVar2 & 0xffff | 0x80070000;
        }
    }
    return 0;
}


int FUN_1401d4ff0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        FUN_14018b900(param_1, 0);
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1401d5020(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(*(longlong * )(param_1 + 8) + 8);
    (**(code * *)(*plVar1 + 0x58))(plVar1, *(undefined4 * )(param_1 + 0x10), param_2, param_3, param_4);
    return;
}


void FUN_1401d5050(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(*(longlong * )(param_1 + 8) + 8);
    (**(code * *)(*plVar1 + 0x50))(plVar1, *(undefined4 * )(param_1 + 0x10), param_2, param_3, param_4);
    return;
}


void FUN_1401d5080(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(*(longlong * )(param_1 + 8) + 8);
    (**(code * *)(*plVar1 + 0x68))(plVar1, *(undefined4 * )(param_1 + 0x10), param_2, param_3, param_4);
    return;
}


void FUN_1401d50b0(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
    longlong *plVar1;

    plVar1 = *(longlong * *)(*(longlong * )(param_1 + 8) + 8);
    (**(code * *)(*plVar1 + 0x60))(plVar1, *(undefined4 * )(param_1 + 0x10), param_2, param_3, param_4);
    return;
}


undefined8 FUN_1401d5110(undefined4 *param_1, ulonglong param_2, byte *param_3) {
    short *psVar1;
    ushort *puVar2;
    byte bVar3;
    ushort uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint uVar12;
    int iVar13;
    int iVar14;
    uint uVar15;
    uint uVar16;
    longlong lVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    uint uVar20;
    longlong lVar21;
    uint uVar22;
    uint uVar23;
    uint uVar24;
    uint uVar25;
    longlong lVar26;
    ulonglong uVar27;
    undefined *puVar28;
    undefined *puVar29;
    uint uVar30;
    ushort *puVar31;
    uint uVar32;
    byte *pbVar33;
    ulonglong uVar34;
    ulonglong uVar35;
    bool bVar36;
    uint local_res20;
    uint local_88;
    uint local_84;
    uint local_80;
    byte local_78;

    lVar9 = *(longlong * )(param_1 + 4);
    uVar22 = param_1[0x12];
    local_88 = param_1[0x13];
    lVar10 = *(longlong * )(param_1 + 6);
    uVar25 = param_1[0x16];
    pbVar33 = *(byte * *)(param_1 + 8);
    uVar32 = param_1[10];
    local_84 = param_1[0x14];
    local_80 = param_1[0x15];
    uVar5 = param_1[2];
    uVar6 = param_1[1];
    uVar7 = *param_1;
    uVar11 = *(ulonglong * )(param_1 + 0xe);
    uVar8 = param_1[0x11];
    local_res20 = param_1[0x10];
    uVar12 = param_1[0xb];
    iVar13 = 0;
    uVar35 = *(ulonglong * )(param_1 + 0xc);
    do {
        uVar23 = local_res20 & (1 << ((byte) uVar5 & 0x1f)) - 1U;
        lVar21 = (ulonglong)(uVar22 << 4) + (ulonglong) uVar23;
        uVar4 = *(ushort * )(lVar9 + lVar21 * 2);
        if (uVar32 < 0x1000000) {
            uVar32 = uVar32 << 8;
            uVar12 = uVar12 << 8 | (uint) * pbVar33;
            pbVar33 = pbVar33 + 1;
        }
        uVar30 = (uVar32 >> 0xb) * (uint) uVar4;
        if (uVar12 < uVar30) {
            lVar26 = lVar9 + 0xe6c;
            *(ushort * )(lVar9 + lVar21 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
            if ((local_res20 != 0) || (uVar8 != 0)) {
                uVar18 = uVar35;
                if (uVar35 == 0) {
                    uVar18 = uVar11;
                }
                local_78 = (byte) uVar7;
                lVar26 = lVar26 + (ulonglong)
                                          (((uint)(*(byte * )((uVar18 - 1) + lVar10) >> (8 - local_78 & 0x1f)) +
                                            ((local_res20 & (1 << ((byte) uVar6 & 0x1f)) - 1U) << (local_78 & 0x1f)))
                                           * 0x300) * 2;
            }
            local_res20 = local_res20 + 1;
            if (uVar22 < 7) {
                uVar4 = *(ushort * )(lVar26 + 2);
                lVar21 = 3;
                uVar32 = 3;
                if (uVar22 < 4) {
                    uVar32 = uVar22;
                }
                uVar22 = uVar22 - uVar32;
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 * 0x100;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    lVar21 = 2;
                    *(ushort * )(lVar26 + 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    *(ushort * )(lVar26 + 2) = uVar4 - (uVar4 >> 5);
                }
                puVar31 = (ushort * )(lVar26 + lVar21 * 2);
                uVar4 = *puVar31;
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = (int) lVar21 * 2;
                    *puVar31 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar23 = (int) lVar21 * 2 + 1;
                    *puVar31 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar26 + (ulonglong) uVar23 * 2);
                psVar1 = (short *) (lVar26 + (ulonglong) uVar23 * 2);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = uVar23 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar23 = uVar23 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar26 + (ulonglong) uVar23 * 2);
                psVar1 = (short *) (lVar26 + (ulonglong) uVar23 * 2);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = uVar23 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar23 = uVar23 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar26 + (ulonglong) uVar23 * 2);
                psVar1 = (short *) (lVar26 + (ulonglong) uVar23 * 2);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = uVar23 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar23 = uVar23 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar26 + (ulonglong) uVar23 * 2);
                psVar1 = (short *) (lVar26 + (ulonglong) uVar23 * 2);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = uVar23 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar23 = uVar23 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar26 + (ulonglong) uVar23 * 2);
                psVar1 = (short *) (lVar26 + (ulonglong) uVar23 * 2);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = uVar23 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar30 = uVar32;
                } else {
                    uVar30 = uVar30 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar23 = uVar23 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar26 + (ulonglong) uVar23 * 2);
                psVar1 = (short *) (lVar26 + (ulonglong) uVar23 * 2);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar34 = uVar35 + 1;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    *(char *) (uVar35 + lVar10) = (char) uVar23 * '\x02';
                } else {
                    uVar12 = uVar12 - uVar32;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                    *(char *) (uVar35 + lVar10) = (char) uVar23 * '\x02' + '\x01';
                    uVar34 = uVar35 + 1;
                    uVar32 = uVar30 - uVar32;
                }
            } else {
                iVar14 = 6;
                if (uVar22 < 10) {
                    iVar14 = 3;
                }
                uVar22 = uVar22 - iVar14;
                uVar18 = 0;
                if (uVar35 < local_88) {
                    uVar18 = uVar11;
                }
                bVar3 = *(byte * )((uVar18 - local_88) + uVar35 + lVar10);
                uVar23 = (uint) bVar3 + (uint) bVar3;
                uVar24 = uVar23 & 0x100;
                lVar21 = lVar26 + (ulonglong) uVar24 * 2;
                uVar4 = *(ushort * )(lVar21 + 0x202);
                if (uVar30 < 0x1000000) {
                    uVar30 = uVar30 * 0x100;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar30 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar24 = ~uVar24;
                    *(ushort * )(lVar21 + 0x202) = (short) (0x800 - uVar4 >> 5) + uVar4;
                    lVar21 = 2;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar30 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    *(ushort * )(lVar21 + 0x202) = uVar4 - (uVar4 >> 5);
                    lVar21 = 3;
                }
                uVar24 = uVar24 & 0x100;
                uVar30 = uVar24 & uVar23 * 2;
                lVar17 = (ulonglong) uVar30 + (ulonglong) uVar24 + lVar21;
                psVar1 = (short *) (lVar26 + lVar17 * 2);
                uVar4 = *(ushort * )(lVar26 + lVar17 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar30 = ~uVar30;
                    uVar20 = (int) lVar21 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar32 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    uVar20 = (int) lVar21 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar24 = uVar24 & uVar30;
                uVar30 = uVar24 & uVar23 * 4;
                lVar21 = (ulonglong) uVar30 + (ulonglong) uVar24 + (ulonglong) uVar20;
                psVar1 = (short *) (lVar26 + lVar21 * 2);
                uVar4 = *(ushort * )(lVar26 + lVar21 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar30 = ~uVar30;
                    uVar20 = uVar20 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar32 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    uVar20 = uVar20 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar24 = uVar24 & uVar30;
                uVar30 = uVar24 & uVar23 * 8;
                lVar21 = (ulonglong) uVar30 + (ulonglong) uVar24 + (ulonglong) uVar20;
                psVar1 = (short *) (lVar26 + lVar21 * 2);
                uVar4 = *(ushort * )(lVar26 + lVar21 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar30 = ~uVar30;
                    uVar20 = uVar20 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar32 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    uVar20 = uVar20 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar24 = uVar24 & uVar30;
                uVar30 = uVar24 & uVar23 * 0x10;
                lVar21 = (ulonglong) uVar30 + (ulonglong) uVar24 + (ulonglong) uVar20;
                psVar1 = (short *) (lVar26 + lVar21 * 2);
                uVar4 = *(ushort * )(lVar26 + lVar21 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar30 = ~uVar30;
                    uVar20 = uVar20 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar32 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    uVar20 = uVar20 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar24 = uVar24 & uVar30;
                uVar30 = uVar24 & uVar23 * 0x20;
                lVar21 = (ulonglong) uVar30 + (ulonglong) uVar24 + (ulonglong) uVar20;
                psVar1 = (short *) (lVar26 + lVar21 * 2);
                uVar4 = *(ushort * )(lVar26 + lVar21 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar30 = ~uVar30;
                    uVar20 = uVar20 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar32 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    uVar20 = uVar20 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar24 = uVar24 & uVar30;
                uVar30 = uVar24 & uVar23 * 0x40;
                lVar21 = (ulonglong) uVar30 + (ulonglong) uVar24 + (ulonglong) uVar20;
                psVar1 = (short *) (lVar26 + lVar21 * 2);
                uVar4 = *(ushort * )(lVar26 + lVar21 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar15) {
                    uVar30 = ~uVar30;
                    uVar20 = uVar20 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar15;
                } else {
                    uVar32 = uVar32 - uVar15;
                    uVar12 = uVar12 - uVar15;
                    uVar20 = uVar20 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                lVar21 = (ulonglong) uVar20 +
                         (ulonglong)(uVar23 * 0x80 & uVar24 & uVar30) + (ulonglong)(uVar24 & uVar30);
                uVar4 = *(ushort * )(lVar26 + lVar21 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar23 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar23) {
                    uVar34 = uVar35 + 1;
                    *(ushort * )(lVar26 + lVar21 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                    *(char *) (uVar35 + lVar10) = (char) uVar20 * '\x02';
                    uVar32 = uVar23;
                } else {
                    uVar32 = uVar32 - uVar23;
                    uVar12 = uVar12 - uVar23;
                    uVar34 = uVar35 + 1;
                    *(ushort * )(lVar26 + lVar21 * 2) = uVar4 - (uVar4 >> 5);
                    *(char *) (uVar35 + lVar10) = (char) uVar20 * '\x02' + '\x01';
                }
            }
        } else {
            uVar32 = uVar32 - uVar30;
            uVar12 = uVar12 - uVar30;
            uVar18 = (ulonglong) uVar22;
            *(ushort * )(lVar9 + lVar21 * 2) = uVar4 - (uVar4 >> 5);
            uVar4 = *(ushort * )(lVar9 + 0x180 + uVar18 * 2);
            if (uVar32 < 0x1000000) {
                uVar32 = uVar32 * 0x100;
                uVar12 = uVar12 * 0x100 | (uint) * pbVar33;
                pbVar33 = pbVar33 + 1;
            }
            uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
            uVar30 = uVar25;
            if (uVar12 < uVar24) {
                uVar22 = uVar22 + 0xc;
                *(ushort * )(lVar9 + 0x180 + uVar18 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                puVar31 = (ushort * )(lVar9 + 0x664);
            } else {
                uVar32 = uVar32 - uVar24;
                uVar12 = uVar12 - uVar24;
                *(ushort * )(lVar9 + 0x180 + uVar18 * 2) = uVar4 - (uVar4 >> 5);
                if ((uVar8 == 0) && (local_res20 == 0)) {
                    return 1;
                }
                uVar4 = *(ushort * )(lVar9 + 0x198 + uVar18 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 * 0x100;
                    uVar12 = uVar12 * 0x100 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    *(ushort * )(lVar9 + 0x198 + uVar18 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar4 = *(ushort * )(lVar9 + 0x1e0 + lVar21 * 2);
                    if (uVar24 < 0x1000000) {
                        uVar24 = uVar24 * 0x100;
                        uVar12 = uVar12 << 8 | (uint) * pbVar33;
                        pbVar33 = pbVar33 + 1;
                    }
                    uVar32 = (uVar24 >> 0xb) * (uint) uVar4;
                    if (uVar12 < uVar32) {
                        *(ushort * )(lVar9 + 0x1e0 + lVar21 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                        uVar18 = 0;
                        if (uVar35 < local_88) {
                            uVar18 = uVar11;
                        }
                        local_res20 = local_res20 + 1;
                        uVar34 = uVar35 + 1;
                        bVar36 = uVar22 < 7;
                        *(undefined * )(uVar35 + lVar10) = *(undefined * )((uVar18 - local_88) + uVar35 + lVar10);
                        uVar22 = 0xb;
                        if (bVar36) {
                            uVar22 = 9;
                        }
                        goto LAB_1401d6694;
                    }
                    uVar24 = uVar24 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    *(ushort * )(lVar9 + 0x1e0 + lVar21 * 2) = uVar4 - (uVar4 >> 5);
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    *(ushort * )(lVar9 + 0x198 + uVar18 * 2) = uVar4 - (uVar4 >> 5);
                    uVar4 = *(ushort * )(lVar9 + 0x1b0 + uVar18 * 2);
                    if (uVar32 < 0x1000000) {
                        uVar32 = uVar32 * 0x100;
                        uVar12 = uVar12 * 0x100 | (uint) * pbVar33;
                        pbVar33 = pbVar33 + 1;
                    }
                    uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                    if (uVar12 < uVar24) {
                        *(ushort * )(lVar9 + 0x1b0 + uVar18 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                        uVar25 = local_84;
                    } else {
                        uVar32 = uVar32 - uVar24;
                        uVar12 = uVar12 - uVar24;
                        *(ushort * )(lVar9 + 0x1b0 + uVar18 * 2) = uVar4 - (uVar4 >> 5);
                        uVar4 = *(ushort * )(lVar9 + 0x1c8 + uVar18 * 2);
                        if (uVar32 < 0x1000000) {
                            uVar32 = uVar32 * 0x100;
                            uVar12 = uVar12 * 0x100 | (uint) * pbVar33;
                            pbVar33 = pbVar33 + 1;
                        }
                        uVar15 = (uVar32 >> 0xb) * (uint) uVar4;
                        if (uVar12 < uVar15) {
                            *(ushort * )(lVar9 + 0x1c8 + uVar18 * 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                            uVar24 = uVar15;
                            uVar25 = local_80;
                        } else {
                            uVar24 = uVar32 - uVar15;
                            uVar12 = uVar12 - uVar15;
                            *(ushort * )(lVar9 + 0x1c8 + uVar18 * 2) = uVar4 - (uVar4 >> 5);
                            uVar30 = local_80;
                        }
                        local_80 = local_84;
                    }
                    local_84 = local_88;
                    local_88 = uVar25;
                }
                bVar36 = uVar22 < 7;
                uVar22 = 0xb;
                if (bVar36) {
                    uVar22 = 8;
                }
                puVar31 = (ushort * )(lVar9 + 0xa68);
            }
            uVar20 = local_80;
            uVar15 = local_84;
            uVar4 = *puVar31;
            if (uVar24 < 0x1000000) {
                uVar24 = uVar24 << 8;
                uVar12 = uVar12 << 8 | (uint) * pbVar33;
                pbVar33 = pbVar33 + 1;
            }
            uVar25 = (uVar24 >> 0xb) * (uint) uVar4;
            if (uVar12 < uVar25) {
                uVar18 = (ulonglong)(uVar23 * 8);
                lVar21 = uVar18 + 2;
                *puVar31 = (short) (0x800 - uVar4 >> 5) + uVar4;
                uVar4 = puVar31[uVar18 + 3];
                if (uVar25 < 0x1000000) {
                    uVar25 = uVar25 * 0x100;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar25 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    lVar26 = 2;
                    puVar31[uVar18 + 3] = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar25 = uVar32;
                } else {
                    uVar25 = uVar25 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    lVar26 = 3;
                    puVar31[uVar18 + 3] = uVar4 - (uVar4 >> 5);
                }
                puVar2 = puVar31 + lVar21 + lVar26;
                uVar4 = *puVar2;
                if (uVar25 < 0x1000000) {
                    uVar25 = uVar25 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar25 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar24 = (int) lVar26 * 2;
                    *puVar2 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar25 = uVar32;
                } else {
                    uVar25 = uVar25 - uVar32;
                    uVar12 = uVar12 - uVar32;
                    uVar24 = (int) lVar26 * 2 + 1;
                    *puVar2 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = puVar31[lVar21 + (ulonglong) uVar24];
                if (uVar25 < 0x1000000) {
                    uVar25 = uVar25 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar32 = (uVar25 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar32) {
                    uVar23 = uVar24 * 2 - 8;
                    puVar31[lVar21 + (ulonglong) uVar24] = (short) (0x800 - uVar4 >> 5) + uVar4;
                } else {
                    uVar12 = uVar12 - uVar32;
                    uVar23 = uVar24 * 2 - 7;
                    puVar31[lVar21 + (ulonglong) uVar24] = uVar4 - (uVar4 >> 5);
                    uVar32 = uVar25 - uVar32;
                }
            } else {
                uVar24 = uVar24 - uVar25;
                uVar12 = uVar12 - uVar25;
                *puVar31 = uVar4 - (uVar4 >> 5);
                uVar4 = puVar31[1];
                if (uVar24 < 0x1000000) {
                    uVar24 = uVar24 * 0x100;
                    uVar12 = uVar12 * 0x100 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar25 = (uVar24 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar25) {
                    uVar18 = (ulonglong)(uVar23 * 8);
                    lVar21 = uVar18 + 0x82;
                    puVar31[1] = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar4 = puVar31[uVar18 + 0x83];
                    if (uVar25 < 0x1000000) {
                        uVar25 = uVar25 * 0x100;
                        uVar12 = uVar12 << 8 | (uint) * pbVar33;
                        pbVar33 = pbVar33 + 1;
                    }
                    uVar23 = (uVar25 >> 0xb) * (uint) uVar4;
                    if (uVar12 < uVar23) {
                        lVar26 = 2;
                        puVar31[uVar18 + 0x83] = (short) (0x800 - uVar4 >> 5) + uVar4;
                        uVar32 = uVar23;
                    } else {
                        uVar32 = uVar25 - uVar23;
                        uVar12 = uVar12 - uVar23;
                        lVar26 = 3;
                        puVar31[uVar18 + 0x83] = uVar4 - (uVar4 >> 5);
                    }
                    puVar2 = puVar31 + lVar21 + lVar26;
                    uVar4 = *puVar2;
                    if (uVar32 < 0x1000000) {
                        uVar32 = uVar32 << 8;
                        uVar12 = uVar12 << 8 | (uint) * pbVar33;
                        pbVar33 = pbVar33 + 1;
                    }
                    uVar25 = (uVar32 >> 0xb) * (uint) uVar4;
                    if (uVar12 < uVar25) {
                        uVar24 = (int) lVar26 * 2;
                        *puVar2 = (short) (0x800 - uVar4 >> 5) + uVar4;
                        uVar32 = uVar25;
                    } else {
                        uVar32 = uVar32 - uVar25;
                        uVar12 = uVar12 - uVar25;
                        uVar24 = (int) lVar26 * 2 + 1;
                        *puVar2 = uVar4 - (uVar4 >> 5);
                    }
                    uVar4 = puVar31[lVar21 + (ulonglong) uVar24];
                    if (uVar32 < 0x1000000) {
                        uVar32 = uVar32 << 8;
                        uVar12 = uVar12 << 8 | (uint) * pbVar33;
                        pbVar33 = pbVar33 + 1;
                    }
                    uVar25 = (uVar32 >> 0xb) * (uint) uVar4;
                    if (uVar12 < uVar25) {
                        uVar23 = uVar24 * 2;
                        puVar31[lVar21 + (ulonglong) uVar24] = (short) (0x800 - uVar4 >> 5) + uVar4;
                        uVar32 = uVar25;
                    } else {
                        uVar32 = uVar32 - uVar25;
                        uVar12 = uVar12 - uVar25;
                        uVar23 = uVar24 * 2 + 1;
                        puVar31[lVar21 + (ulonglong) uVar24] = uVar4 - (uVar4 >> 5);
                    }
                } else {
                    uVar32 = uVar24 - uVar25;
                    uVar12 = uVar12 - uVar25;
                    uVar18 = 1;
                    puVar31[1] = uVar4 - (uVar4 >> 5);
                    do {
                        puVar2 = puVar31 + uVar18 + 0x102;
                        uVar4 = *puVar2;
                        if (uVar32 < 0x1000000) {
                            uVar32 = uVar32 << 8;
                            uVar12 = uVar12 << 8 | (uint) * pbVar33;
                            pbVar33 = pbVar33 + 1;
                        }
                        uVar25 = (uVar32 >> 0xb) * (uint) uVar4;
                        if (uVar12 < uVar25) {
                            uVar23 = (int) uVar18 * 2;
                            *puVar2 = (short) (0x800 - uVar4 >> 5) + uVar4;
                            uVar32 = uVar25;
                        } else {
                            uVar32 = uVar32 - uVar25;
                            uVar12 = uVar12 - uVar25;
                            uVar23 = (int) uVar18 * 2 + 1;
                            *puVar2 = uVar4 - (uVar4 >> 5);
                        }
                        uVar18 = (ulonglong) uVar23;
                    } while (uVar23 < 0x100);
                    uVar23 = uVar23 - 0xf0;
                }
            }
            uVar25 = uVar30;
            if (0xb < uVar22) {
                uVar25 = 3;
                uVar24 = 3;
                if (uVar23 < 4) {
                    uVar24 = uVar23;
                }
                lVar21 = lVar9 + ((ulonglong)(uVar24 << 6) + 0x1b0) * 2;
                uVar4 = *(ushort * )(lVar21 + 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    uVar25 = 2;
                    *(ushort * )(lVar21 + 2) = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar24;
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    *(ushort * )(lVar21 + 2) = uVar4 - (uVar4 >> 5);
                }
                puVar31 = (ushort * )(lVar21 + (ulonglong) uVar25 * 2);
                uVar4 = *puVar31;
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    uVar25 = uVar25 * 2;
                    *puVar31 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar24;
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    uVar25 = uVar25 * 2 + 1;
                    *puVar31 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar21 + (ulonglong) uVar25 * 2);
                psVar1 = (short *) (lVar21 + (ulonglong) uVar25 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    uVar25 = uVar25 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar24;
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    uVar25 = uVar25 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar21 + (ulonglong) uVar25 * 2);
                psVar1 = (short *) (lVar21 + (ulonglong) uVar25 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    uVar25 = uVar25 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar24;
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    uVar25 = uVar25 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar21 + (ulonglong) uVar25 * 2);
                psVar1 = (short *) (lVar21 + (ulonglong) uVar25 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    uVar25 = uVar25 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar24;
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    uVar25 = uVar25 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar4 = *(ushort * )(lVar21 + (ulonglong) uVar25 * 2);
                psVar1 = (short *) (lVar21 + (ulonglong) uVar25 * 2);
                if (uVar32 < 0x1000000) {
                    uVar32 = uVar32 << 8;
                    uVar12 = uVar12 << 8 | (uint) * pbVar33;
                    pbVar33 = pbVar33 + 1;
                }
                uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                if (uVar12 < uVar24) {
                    iVar13 = uVar25 * 2;
                    *psVar1 = (short) (0x800 - uVar4 >> 5) + uVar4;
                    uVar32 = uVar24;
                } else {
                    uVar32 = uVar32 - uVar24;
                    uVar12 = uVar12 - uVar24;
                    iVar13 = uVar25 * 2 + 1;
                    *psVar1 = uVar4 - (uVar4 >> 5);
                }
                uVar25 = iVar13 - 0x40;
                if (3 < uVar25) {
                    uVar18 = (ulonglong) uVar25;
                    uVar24 = uVar25 & 1 | 2;
                    iVar13 = (uVar25 >> 1) - 1;
                    if (uVar25 < 0xe) {
                        uVar25 = uVar24 << ((byte) iVar13 & 0x1f);
                        uVar34 = (ulonglong) uVar25;
                        uVar24 = 1;
                        uVar30 = 1;
                        do {
                            puVar31 = (ushort * )(lVar9 + ((uVar34 - uVar18) + 0x2af) * 2 + (ulonglong) uVar30 * 2);
                            uVar4 = *puVar31;
                            if (uVar32 < 0x1000000) {
                                uVar32 = uVar32 << 8;
                                uVar12 = uVar12 << 8 | (uint) * pbVar33;
                                pbVar33 = pbVar33 + 1;
                            }
                            uVar16 = (uVar32 >> 0xb) * (uint) uVar4;
                            if (uVar12 < uVar16) {
                                uVar30 = uVar30 * 2;
                                *puVar31 = (short) (0x800 - uVar4 >> 5) + uVar4;
                                uVar32 = uVar16;
                            } else {
                                uVar32 = uVar32 - uVar16;
                                uVar12 = uVar12 - uVar16;
                                uVar30 = uVar30 * 2 + 1;
                                uVar25 = uVar25 | uVar24;
                                *puVar31 = uVar4 - (uVar4 >> 5);
                            }
                            uVar24 = uVar24 * 2;
                            iVar13 = iVar13 + -1;
                        } while (iVar13 != 0);
                    } else {
                        iVar13 = (uVar25 >> 1) - 5;
                        do {
                            if (uVar32 < 0x1000000) {
                                uVar32 = uVar32 << 8;
                                uVar12 = uVar12 << 8 | (uint) * pbVar33;
                                pbVar33 = pbVar33 + 1;
                            }
                            uVar32 = uVar32 >> 1;
                            uVar25 = (int) (uVar12 - uVar32) >> 0x1f;
                            uVar24 = uVar24 * 2 + 1 + uVar25;
                            uVar12 = (uVar12 - uVar32) + (uVar25 & uVar32);
                            iVar13 = iVar13 + -1;
                        } while (iVar13 != 0);
                        uVar4 = *(ushort * )(lVar9 + 0x646);
                        uVar25 = uVar24 * 0x10;
                        if (uVar32 < 0x1000000) {
                            uVar32 = uVar32 << 8;
                            uVar12 = uVar12 * 0x100 | (uint) * pbVar33;
                            pbVar33 = pbVar33 + 1;
                        }
                        uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                        if (uVar12 < uVar24) {
                            uVar16 = 2;
                            *(ushort * )(lVar9 + 0x646) = (short) (0x800 - uVar4 >> 5) + uVar4;
                            uVar32 = uVar24;
                        } else {
                            uVar32 = uVar32 - uVar24;
                            uVar12 = uVar12 - uVar24;
                            uVar16 = 3;
                            uVar25 = uVar25 | 1;
                            *(ushort * )(lVar9 + 0x646) = uVar4 - (uVar4 >> 5);
                        }
                        lVar21 = lVar9 + (ulonglong) uVar16 * 2;
                        uVar4 = *(ushort * )(lVar21 + 0x644);
                        if (uVar32 < 0x1000000) {
                            uVar32 = uVar32 << 8;
                            uVar12 = uVar12 << 8 | (uint) * pbVar33;
                            pbVar33 = pbVar33 + 1;
                        }
                        uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                        if (uVar12 < uVar24) {
                            uVar16 = uVar16 * 2;
                            *(ushort * )(lVar21 + 0x644) = (short) (0x800 - uVar4 >> 5) + uVar4;
                            uVar32 = uVar24;
                        } else {
                            uVar32 = uVar32 - uVar24;
                            uVar12 = uVar12 - uVar24;
                            uVar16 = uVar16 * 2 + 1;
                            uVar25 = uVar25 | 2;
                            *(ushort * )(lVar21 + 0x644) = uVar4 - (uVar4 >> 5);
                        }
                        lVar21 = lVar9 + (ulonglong) uVar16 * 2;
                        uVar4 = *(ushort * )(lVar21 + 0x644);
                        if (uVar32 < 0x1000000) {
                            uVar32 = uVar32 << 8;
                            uVar12 = uVar12 << 8 | (uint) * pbVar33;
                            pbVar33 = pbVar33 + 1;
                        }
                        uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                        if (uVar12 < uVar24) {
                            uVar16 = uVar16 * 2;
                            *(ushort * )(lVar21 + 0x644) = (short) (0x800 - uVar4 >> 5) + uVar4;
                            uVar32 = uVar24;
                        } else {
                            uVar32 = uVar32 - uVar24;
                            uVar12 = uVar12 - uVar24;
                            uVar16 = uVar16 * 2 + 1;
                            uVar25 = uVar25 | 4;
                            *(ushort * )(lVar21 + 0x644) = uVar4 - (uVar4 >> 5);
                        }
                        lVar21 = lVar9 + (ulonglong) uVar16 * 2;
                        uVar4 = *(ushort * )(lVar21 + 0x644);
                        if (uVar32 < 0x1000000) {
                            uVar32 = uVar32 << 8;
                            uVar12 = uVar12 << 8 | (uint) * pbVar33;
                            pbVar33 = pbVar33 + 1;
                        }
                        uVar24 = (uVar32 >> 0xb) * (uint) uVar4;
                        if (uVar12 < uVar24) {
                            *(ushort * )(lVar21 + 0x644) = (short) (0x800 - uVar4 >> 5) + uVar4;
                            uVar32 = uVar24;
                        } else {
                            uVar32 = uVar32 - uVar24;
                            uVar12 = uVar12 - uVar24;
                            uVar25 = uVar25 | 8;
                            *(ushort * )(lVar21 + 0x644) = uVar4 - (uVar4 >> 5);
                        }
                        if (uVar25 == 0xffffffff) {
                            iVar13 = uVar23 + 0x112;
                            uVar22 = uVar22 - 0xc;
                            LAB_1401d66bb:
                            if (uVar32 < 0x1000000) {
                                uVar32 = uVar32 << 8;
                                uVar12 = uVar12 << 8 | (uint) * pbVar33;
                                pbVar33 = pbVar33 + 1;
                            }
                            param_1[0xb] = uVar12;
                            *(byte * *)(param_1 + 8) = pbVar33;
                            param_1[10] = uVar32;
                            param_1[0x17] = iVar13;
                            *(ulonglong * )(param_1 + 0xc) = uVar35;
                            param_1[0x10] = local_res20;
                            param_1[0x14] = local_84;
                            param_1[0x13] = local_88;
                            param_1[0x16] = uVar30;
                            param_1[0x15] = local_80;
                            param_1[0x12] = uVar22;
                            return 0;
                        }
                    }
                }
                local_84 = local_88;
                local_88 = uVar25 + 1;
                local_80 = uVar15;
                uVar30 = uVar8;
                if (uVar8 == 0) {
                    uVar30 = local_res20;
                }
                if (uVar30 <= uVar25) {
                    return 1;
                }
                bVar36 = uVar22 < 0x13;
                uVar22 = 10;
                uVar25 = uVar20;
                if (bVar36) {
                    uVar22 = 7;
                }
            }
            uVar23 = uVar23 + 2;
            uVar18 = param_2 - uVar35;
            if (uVar18 == 0) {
                return 1;
            }
            uVar27 = (ulonglong) uVar23;
            if (uVar18 < uVar23) {
                uVar27 = uVar18 & 0xffffffff;
            }
            uVar18 = 0;
            if (uVar35 < local_88) {
                uVar18 = uVar11;
            }
            local_res20 = local_res20 + (int) uVar27;
            iVar13 = uVar23 - (int) uVar27;
            uVar18 = (uVar18 - local_88) + uVar35;
            if (uVar11 - uVar18 < uVar27) {
                do {
                    uVar19 = uVar18 + 1;
                    uVar34 = uVar35 + 1;
                    *(undefined * )(uVar35 + lVar10) = *(undefined * )(uVar18 + lVar10);
                    uVar18 = uVar19;
                    if (uVar19 == uVar11) {
                        uVar18 = 0;
                    }
                    uVar23 = (int) uVar27 - 1;
                    uVar27 = (ulonglong) uVar23;
                    uVar35 = uVar34;
                } while (uVar23 != 0);
            } else {
                uVar34 = uVar35 + uVar27;
                puVar28 = (undefined * )(uVar35 + lVar10);
                do {
                    puVar29 = puVar28 + 1;
                    *puVar28 = puVar28[uVar18 - uVar35];
                    puVar28 = puVar29;
                } while (puVar29 != (undefined * )(uVar35 + lVar10) + uVar27);
            }
        }
        LAB_1401d6694:
        uVar35 = uVar34;
        uVar30 = uVar25;
        if ((param_2 <= uVar34) || (param_3 <= pbVar33)) goto LAB_1401d66bb;
    } while (true);
}


void FUN_1401d6720(longlong param_1, longlong param_2) {
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar1 = *(uint * )(param_1 + 0x5c);
    uVar7 = (ulonglong) uVar1;
    if (uVar1 - 1 < 0x111) {
        lVar3 = *(longlong * )(param_1 + 0x18);
        uVar2 = *(uint * )(param_1 + 0x4c);
        uVar8 = param_2 - *(ulonglong * )(param_1 + 0x30);
        lVar4 = *(longlong * )(param_1 + 0x38);
        if (uVar8 < uVar7) {
            uVar7 = uVar8 & 0xffffffff;
        }
        uVar6 = (uint) uVar7;
        if ((*(int *) (param_1 + 0x44) == 0) &&
            ((uint)(*(int *) (param_1 + 0xc) - *(int *) (param_1 + 0x40)) <= uVar6)) {
            *(int *) (param_1 + 0x44) = *(int *) (param_1 + 0xc);
        }
        *(int *) (param_1 + 0x40) = *(int *) (param_1 + 0x40) + uVar6;
        *(uint * )(param_1 + 0x5c) = uVar1 - uVar6;
        uVar8 = *(ulonglong * )(param_1 + 0x30);
        while (uVar6 != 0) {
            lVar5 = 0;
            if (uVar8 < uVar2) {
                lVar5 = lVar4;
            }
            *(undefined * )(uVar8 + lVar3) = *(undefined * )((lVar5 - (ulonglong) uVar2) + uVar8 + lVar3);
            uVar6 = (int) uVar7 - 1;
            uVar7 = (ulonglong) uVar6;
            uVar8 = uVar8 + 1;
        }
        *(ulonglong * )(param_1 + 0x30) = uVar8;
    }
    return;
}


undefined8 FUN_1401d67b0(longlong param_1, ulonglong param_2, ulonglong param_3) {
    undefined8 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    while (true) {
        uVar2 = param_2;
        if (*(int *) (param_1 + 0x44) == 0) {
            uVar3 = (ulonglong)(uint)(*(int *) (param_1 + 0xc) - *(int *) (param_1 + 0x40));
            if (uVar3 < param_2 - *(longlong * )(param_1 + 0x30)) {
                uVar2 = uVar3 + *(longlong * )(param_1 + 0x30);
            }
        }
        uVar1 = FUN_1401d5110(param_1, uVar2);
        if ((int) uVar1 != 0) break;
        if ((*(int *) (param_1 + 0x44) == 0) && (*(uint * )(param_1 + 0xc) <= *(uint * )(param_1 + 0x40))) {
            *(uint * )(param_1 + 0x44) = *(uint * )(param_1 + 0xc);
        }
        FUN_1401d6720(param_1, param_2);
        if (((param_2 <= *(ulonglong * )(param_1 + 0x30)) || (param_3 <= *(ulonglong * )(param_1 + 0x20)))
            || (0x111 < *(uint * )(param_1 + 0x5c))) {
            if (0x112 < *(uint * )(param_1 + 0x5c)) {
                *(undefined4 * )(param_1 + 0x5c) = 0x112;
            }
            return 0;
        }
    }
    return uVar1;
}


undefined8 FUN_1401d6860(undefined4 *param_1, byte *param_2, longlong param_3) {
    byte *pbVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    ushort *puVar10;
    longlong lVar11;
    int iVar12;
    uint uVar13;
    undefined8 uVar14;
    ulonglong uVar15;
    longlong lVar16;

    uVar13 = param_1[10];
    lVar11 = *(longlong * )(param_1 + 4);
    uVar9 = param_1[0x12];
    uVar7 = (ulonglong) uVar9;
    uVar5 = param_1[0x10];
    uVar2 = param_1[0xb];
    uVar15 = 1;
    uVar4 = 1;
    pbVar1 = param_2 + param_3;
    uVar8 = (1 << ((byte) param_1[2] & 0x1f)) - 1U & uVar5;
    lVar16 = (ulonglong)(uVar9 << 4) + (ulonglong) uVar8;
    if (uVar13 < 0x1000000) {
        if (pbVar1 <= param_2) {
            return 0;
        }
        uVar13 = uVar13 << 8;
        uVar2 = uVar2 << 8 | (uint) * param_2;
        param_2 = param_2 + 1;
    }
    uVar3 = (uVar13 >> 0xb) * (uint) * (ushort * )(lVar11 + lVar16 * 2);
    if (uVar2 < uVar3) {
        lVar11 = lVar11 + 0xe6c;
        if ((param_1[0x11] != 0) || (uVar5 != 0)) {
            lVar16 = *(longlong * )(param_1 + 0xc);
            if (lVar16 == 0) {
                lVar16 = *(longlong * )(param_1 + 0xe);
            }
            lVar11 = lVar11 + (ulonglong)
                                      (((uint)(*(byte * )(*(longlong * )(param_1 + 6) + -1 + lVar16) >>
                                                                                                     (8 -
                                                                                                      (byte) * param_1 &
                                                                                                      0x1f)) +
                                        (((1 << ((byte) param_1[1] & 0x1f)) - 1U & uVar5) << ((byte) * param_1 & 0x1f)
                                        )) * 0x300) * 2;
        }
        if (uVar9 < 7) {
            uVar7 = 1;
            do {
                if (uVar3 < 0x1000000) {
                    if (pbVar1 <= param_2) {
                        return 0;
                    }
                    uVar3 = uVar3 << 8;
                    uVar2 = uVar2 << 8 | (uint) * param_2;
                    param_2 = param_2 + 1;
                }
                uVar4 = (uVar3 >> 0xb) * (uint) * (ushort * )(lVar11 + uVar7 * 2);
                if (uVar2 < uVar4) {
                    uVar13 = (int) uVar7 * 2;
                    uVar3 = uVar4;
                } else {
                    uVar3 = uVar3 - uVar4;
                    uVar13 = (int) uVar7 * 2 + 1;
                    uVar2 = uVar2 - uVar4;
                }
                uVar7 = (ulonglong) uVar13;
            } while (uVar13 < 0x100);
            uVar14 = 1;
        } else {
            if (*(ulonglong * )(param_1 + 0xc) < (ulonglong)(uint)param_1[0x13]) {
                lVar16 = *(longlong * )(param_1 + 0xe);
            }
            else {
                lVar16 = 0;
            }
            uVar13 = 0x100;
            uVar4 = (uint) * (byte * )((*(longlong * )(param_1 + 6) - (ulonglong)(uint)
            param_1[0x13]) +
                                   *(ulonglong * )(param_1 + 0xc) + lVar16);
            uVar7 = 1;
            do {
                uVar4 = uVar4 * 2;
                uVar9 = uVar13 & uVar4;
                if (uVar3 < 0x1000000) {
                    if (pbVar1 <= param_2) {
                        return 0;
                    }
                    uVar3 = uVar3 << 8;
                    uVar2 = uVar2 << 8 | (uint) * param_2;
                    param_2 = param_2 + 1;
                }
                uVar5 = (uVar3 >> 0xb) * (uint) * (ushort * )(lVar11 + (uVar9 + uVar7 + (ulonglong) uVar13) * 2);
                if (uVar2 < uVar5) {
                    uVar8 = (int) uVar7 * 2;
                    uVar9 = ~uVar9;
                    uVar3 = uVar5;
                } else {
                    uVar3 = uVar3 - uVar5;
                    uVar8 = (int) uVar7 * 2 + 1;
                    uVar2 = uVar2 - uVar5;
                }
                uVar7 = (ulonglong) uVar8;
                uVar13 = uVar13 & uVar9;
            } while (uVar8 < 0x100);
            uVar14 = 1;
        }
        goto LAB_1401d6e71;
    }
    uVar13 = uVar13 - uVar3;
    uVar2 = uVar2 - uVar3;
    if (uVar13 < 0x1000000) {
        if (pbVar1 <= param_2) {
            return 0;
        }
        uVar13 = uVar13 * 0x100;
        uVar2 = uVar2 * 0x100 | (uint) * param_2;
        param_2 = param_2 + 1;
    }
    uVar5 = 0;
    uVar9 = (uVar13 >> 0xb) * (uint) * (ushort * )(lVar11 + 0x180 + uVar7 * 2);
    if (uVar2 < uVar9) {
        puVar10 = (ushort * )(lVar11 + 0x664);
        uVar14 = 2;
        uVar13 = uVar5;
    } else {
        uVar13 = uVar13 - uVar9;
        uVar2 = uVar2 - uVar9;
        uVar14 = 3;
        if (uVar13 < 0x1000000) {
            if (pbVar1 <= param_2) {
                return 0;
            }
            uVar13 = uVar13 * 0x100;
            uVar2 = uVar2 * 0x100 | (uint) * param_2;
            param_2 = param_2 + 1;
        }
        uVar3 = (uVar13 >> 0xb) * (uint) * (ushort * )(lVar11 + 0x198 + uVar7 * 2);
        if (uVar2 < uVar3) {
            if (uVar3 < 0x1000000) {
                if (pbVar1 <= param_2) {
                    return 0;
                }
                uVar3 = uVar3 * 0x100;
                uVar2 = uVar2 << 8 | (uint) * param_2;
                param_2 = param_2 + 1;
            }
            uVar13 = (uVar3 >> 0xb) * (uint) * (ushort * )(lVar11 + 0x1e0 + lVar16 * 2);
            if (uVar2 < uVar13) {
                if ((uVar13 < 0x1000000) && (pbVar1 <= param_2)) {
                    return 0;
                }
                return 3;
            }
            LAB_1401d6bde:
            uVar9 = uVar3 - uVar13;
            uVar2 = uVar2 - uVar13;
        } else {
            uVar13 = uVar13 - uVar3;
            uVar2 = uVar2 - uVar3;
            if (uVar13 < 0x1000000) {
                if (pbVar1 <= param_2) {
                    return 0;
                }
                uVar13 = uVar13 * 0x100;
                uVar2 = uVar2 * 0x100 | (uint) * param_2;
                param_2 = param_2 + 1;
            }
            uVar9 = (uVar13 >> 0xb) * (uint) * (ushort * )(lVar11 + 0x1b0 + uVar7 * 2);
            if (uVar9 <= uVar2) {
                uVar3 = uVar13 - uVar9;
                uVar2 = uVar2 - uVar9;
                if (uVar3 < 0x1000000) {
                    if (pbVar1 <= param_2) {
                        return 0;
                    }
                    uVar3 = uVar3 * 0x100;
                    uVar2 = uVar2 * 0x100 | (uint) * param_2;
                    param_2 = param_2 + 1;
                }
                uVar9 = (uVar3 >> 0xb) * (uint) * (ushort * )(lVar11 + 0x1c8 + uVar7 * 2);
                uVar13 = uVar9;
                if (uVar9 <= uVar2) goto LAB_1401d6bde;
            }
        }
        uVar13 = 0xc;
        puVar10 = (ushort * )(lVar11 + 0xa68);
    }
    if (uVar9 < 0x1000000) {
        if (pbVar1 <= param_2) {
            return 0;
        }
        uVar9 = uVar9 << 8;
        uVar2 = uVar2 << 8 | (uint) * param_2;
        param_2 = param_2 + 1;
    }
    uVar3 = (uVar9 >> 0xb) * (uint) * puVar10;
    if (uVar2 < uVar3) {
        uVar9 = 8;
        puVar10 = puVar10 + (ulonglong)(uVar8 * 8) + 2;
    } else {
        uVar9 = uVar9 - uVar3;
        uVar2 = uVar2 - uVar3;
        if (uVar9 < 0x1000000) {
            if (pbVar1 <= param_2) {
                return 0;
            }
            uVar9 = uVar9 * 0x100;
            uVar2 = uVar2 * 0x100 | (uint) * param_2;
            param_2 = param_2 + 1;
        }
        uVar6 = (uVar9 >> 0xb) * (uint) puVar10[1];
        if (uVar2 < uVar6) {
            uVar9 = 8;
            uVar5 = 8;
            puVar10 = puVar10 + (ulonglong)(uVar8 * 8) + 0x82;
            uVar3 = uVar6;
        } else {
            uVar3 = uVar9 - uVar6;
            puVar10 = puVar10 + 0x102;
            uVar9 = 0x100;
            uVar2 = uVar2 - uVar6;
            uVar5 = 0x10;
        }
    }
    do {
        if (uVar3 < 0x1000000) {
            if (pbVar1 <= param_2) {
                return 0;
            }
            uVar3 = uVar3 << 8;
            uVar2 = uVar2 << 8 | (uint) * param_2;
            param_2 = param_2 + 1;
        }
        uVar8 = (uVar3 >> 0xb) * (uint) puVar10[uVar4];
        if (uVar2 < uVar8) {
            uVar4 = uVar4 * 2;
            uVar3 = uVar8;
        } else {
            uVar3 = uVar3 - uVar8;
            uVar4 = uVar4 * 2 + 1;
            uVar2 = uVar2 - uVar8;
        }
    } while (uVar4 < uVar9);
    uVar4 = uVar4 + (uVar5 - uVar9);
    if (uVar13 < 4) {
        uVar7 = 1;
        uVar13 = 3;
        if (uVar4 < 4) {
            uVar13 = uVar4;
        }
        do {
            if (uVar3 < 0x1000000) {
                if (pbVar1 <= param_2) {
                    return 0;
                }
                uVar3 = uVar3 << 8;
                uVar2 = uVar2 << 8 | (uint) * param_2;
                param_2 = param_2 + 1;
            }
            uVar4 = (uVar3 >> 0xb) *
                    (uint) * (ushort * )((ulonglong)(uVar13 << 6) * 2 + lVar11 + 0x360 + uVar7 * 2);
            if (uVar2 < uVar4) {
                uVar9 = (int) uVar7 * 2;
                uVar3 = uVar4;
            } else {
                uVar3 = uVar3 - uVar4;
                uVar9 = (int) uVar7 * 2 + 1;
                uVar2 = uVar2 - uVar4;
            }
            uVar7 = (ulonglong) uVar9;
        } while (uVar9 < 0x40);
        uVar9 = uVar9 - 0x40;
        if (3 < uVar9) {
            iVar12 = (uVar9 >> 1) - 1;
            if (uVar9 < 0xe) {
                lVar11 = lVar11 + 0x55e +
                         ((ulonglong)((uVar9 & 1 | 2) << ((byte) iVar12 & 0x1f)) - (ulonglong) uVar9) * 2;
            } else {
                iVar12 = (uVar9 >> 1) - 5;
                do {
                    if (uVar3 < 0x1000000) {
                        if (pbVar1 <= param_2) {
                            return 0;
                        }
                        uVar3 = uVar3 << 8;
                        uVar2 = uVar2 << 8 | (uint) * param_2;
                        param_2 = param_2 + 1;
                    }
                    uVar3 = uVar3 >> 1;
                    uVar2 = uVar2 - (0xffffffffU - ((int) (uVar2 - uVar3) >> 0x1f) & uVar3);
                    iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                lVar11 = lVar11 + 0x644;
                iVar12 = 4;
            }
            do {
                if (uVar3 < 0x1000000) {
                    if (pbVar1 <= param_2) {
                        return 0;
                    }
                    uVar3 = uVar3 << 8;
                    uVar2 = uVar2 << 8 | (uint) * param_2;
                    param_2 = param_2 + 1;
                }
                uVar4 = (uVar3 >> 0xb) * (uint) * (ushort * )(lVar11 + uVar15 * 2);
                if (uVar2 < uVar4) {
                    uVar13 = (int) uVar15 * 2;
                    uVar3 = uVar4;
                } else {
                    uVar3 = uVar3 - uVar4;
                    uVar13 = (int) uVar15 * 2 + 1;
                    uVar2 = uVar2 - uVar4;
                }
                uVar15 = (ulonglong) uVar13;
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
        }
    }
    LAB_1401d6e71:
    if (0xffffff < uVar3) {
        return uVar14;
    }
    if (pbVar1 <= param_2) {
        return 0;
    }
    return uVar14;
}


char FUN_1401d6eb0(undefined4 *param_1, longlong param_2, ulonglong *param_3, undefined *param_4,
                   ulonglong *param_5, int param_6, undefined4 *param_7) {
    undefined uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    bool bVar5;
    int iVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    ulonglong uVar12;
    longlong lVar13;
    int iVar14;
    uint uVar15;
    undefined2 *puVar16;
    longlong lVar17;
    ulonglong uVar18;
    undefined *puVar19;
    char cVar20;
    ulonglong local_res8;
    longlong local_res10;
    undefined *local_res20;

    uVar9 = *param_3;
    local_res8 = *param_5;
    *param_3 = 0;
    *param_5 = 0;
    local_res10 = param_2;
    local_res20 = param_4;
    do {
        lVar17 = 0;
        uVar18 = *(ulonglong * )(param_1 + 0xe);
        if (*(ulonglong * )(param_1 + 0xc) == uVar18) {
            *(undefined8 * )(param_1 + 0xc) = 0;
        }
        lVar2 = *(longlong * )(param_1 + 0xc);
        if (uVar18 - lVar2 < uVar9) {
            iVar14 = 0;
        } else {
            uVar18 = lVar2 + uVar9;
            iVar14 = param_6;
        }
        FUN_1401d6720(param_1, uVar18);
        iVar6 = param_1[0x17];
        *param_7 = 0;
        uVar10 = local_res8;
        puVar19 = local_res20;
        while (iVar6 != 0x112) {
            if (param_1[0x18] != 0) {
                while ((uVar10 != 0 && ((uint) param_1[0x1b] < 5))) {
                    uVar1 = *puVar19;
                    puVar19 = puVar19 + 1;
                    *(undefined * )((ulonglong)(uint)
                    param_1[0x1b] + 0x70 + (longlong) param_1) = uVar1;
                    param_1[0x1b] = param_1[0x1b] + 1;
                    lVar17 = lVar17 + 1;
                    uVar10 = uVar10 - 1;
                }
                if ((uint) param_1[0x1b] < 5) {
                    cVar20 = '\0';
                    *param_7 = 3;
                } else {
                    if (*(char *) (param_1 + 0x1c) == '\0') {
                        param_1[10] = 0xffffffff;
                        param_1[0x18] = 0;
                        param_1[0x1b] = 0;
                        param_1[0xb] = CONCAT31(CONCAT21(CONCAT11(*(undefined * )((longlong) param_1 + 0x71),
                                                                  *(undefined * )((longlong) param_1 + 0x72)),
                                                         *(undefined * )((longlong) param_1 + 0x73)),
                                                *(undefined * )(param_1 + 0x1d));
                        goto LAB_1401d6fea;
                    }
                    LAB_1401d71db:
                    cVar20 = '\x01';
                }
                goto LAB_1401d725a;
            }
            LAB_1401d6fea:
            bVar5 = false;
            if (uVar18 <= *(ulonglong * )(param_1 + 0xc)) {
                if ((param_1[0x17] == 0) && (param_1[0xb] == 0)) {
                    cVar20 = '\0';
                    *param_7 = 4;
                } else {
                    if (iVar14 != 0) {
                        if (param_1[0x17] == 0) {
                            bVar5 = true;
                            goto LAB_1401d7018;
                        }
                        LAB_1401d71cd:
                        *param_7 = 2;
                        goto LAB_1401d71db;
                    }
                    cVar20 = '\0';
                    *param_7 = 2;
                }
                goto LAB_1401d725a;
            }
            LAB_1401d7018:
            if (param_1[0x19] != 0) {
                uVar8 = (0x300 << ((char) param_1[1] + (char) *param_1 & 0x1fU)) + 0x736;
                uVar7 = (ulonglong) uVar8;
                if (uVar8 != 0) {
                    puVar16 = *(undefined2 * *)(param_1 + 4);
                    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                        *puVar16 = 0x400;
                        puVar16 = puVar16 + 1;
                    }
                }
                param_1[0x16] = 1;
                param_1[0x15] = 1;
                param_1[0x14] = 1;
                param_1[0x13] = 1;
                param_1[0x12] = 0;
                param_1[0x19] = 0;
            }
            uVar8 = param_1[0x1b];
            uVar7 = (ulonglong) uVar8;
            if (uVar8 == 0) {
                if ((uVar10 < 0x14) || (bVar5)) {
                    iVar6 = FUN_1401d6860(param_1, puVar19, uVar10);
                    if (iVar6 == 0) {
                        FUN_1407db590(param_1 + 0x1c, puVar19, uVar10);
                        param_1[0x1b] = (int) uVar10;
                        uVar12 = uVar10;
                        LAB_1401d721a:
                        lVar17 = lVar17 + uVar12;
                        cVar20 = '\0';
                        *param_7 = 3;
                        goto LAB_1401d725a;
                    }
                    if ((bVar5) && (iVar6 != 2)) goto LAB_1401d71cd;
                }
                *(undefined * *)(param_1 + 8) = puVar19;
                iVar6 = FUN_1401d67b0(param_1, uVar18);
                if (iVar6 != 0) goto LAB_1401d71db;
                uVar7 = *(longlong * )(param_1 + 8) - (longlong) puVar19;
            } else {
                uVar12 = 0;
                uVar4 = uVar7;
                while (true) {
                    uVar11 = (uint) uVar12;
                    uVar15 = (uint) uVar7;
                    if ((0x13 < uVar8) || (uVar10 <= uVar12)) break;
                    uVar8 = uVar15 + 1;
                    uVar7 = (ulonglong) uVar8;
                    *(undefined * )(uVar4 + 0x70 + (longlong) param_1) = puVar19[uVar12];
                    uVar12 = (ulonglong)(uVar11 + 1);
                    uVar4 = uVar4 + 1;
                }
                param_1[0x1b] = uVar15;
                if ((uVar15 < 0x14) || (bVar5)) {
                    iVar6 = FUN_1401d6860(param_1, param_1 + 0x1c, uVar7);
                    if (iVar6 == 0) goto LAB_1401d721a;
                    if ((bVar5) && (iVar6 != 2)) goto LAB_1401d71cd;
                }
                *(undefined4 * *)(param_1 + 8) = param_1 + 0x1c;
                iVar6 = FUN_1401d67b0(param_1, uVar18);
                if (iVar6 != 0) goto LAB_1401d71db;
                uVar8 = (param_1[8] - (int) param_1) - 0x70;
                if ((uVar15 < uVar8) || (uVar15 = uVar15 - uVar8, uVar11 < uVar15)) {
                    cVar20 = '\v';
                    goto LAB_1401d725a;
                }
                uVar7 = (ulonglong)(uVar11 - uVar15);
                param_1[0x1b] = 0;
            }
            puVar19 = puVar19 + uVar7;
            lVar17 = lVar17 + uVar7;
            uVar10 = uVar10 - uVar7;
            iVar6 = param_1[0x17];
        }
        iVar14 = param_1[0xb];
        if (iVar14 == 0) {
            *param_7 = 1;
        }
        cVar20 = iVar14 != 0;
        LAB_1401d725a:
        lVar3 = *(longlong * )(param_1 + 6);
        lVar13 = *(longlong * )(param_1 + 0xc) - lVar2;
        *param_5 = *param_5 + lVar17;
        local_res20 = local_res20 + lVar17;
        local_res8 = local_res8 - lVar17;
        FUN_1407db590(local_res10, lVar3 + lVar2);
        local_res10 = local_res10 + lVar13;
        *param_3 = *param_3 + lVar13;
        uVar9 = uVar9 - lVar13;
        if (cVar20 != '\0') {
            return cVar20;
        }
        if ((lVar13 == 0) || (uVar9 == 0)) {
            return '\0';
        }
    } while (true);
}


undefined8 FUN_1401d7320(uint *param_1, byte *param_2, undefined8 param_3, code **param_4) {
    byte bVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    uint uVar10;

    uVar2 = *(uint * )(param_2 + 1);
    if (*(uint * )(param_2 + 1) < 0x1000) {
        uVar2 = 0x1000;
    }
    uVar8 = (ulonglong) uVar2;
    bVar1 = *param_2;
    if (0xe0 < bVar1) {
        return 4;
    }
    uVar3 = bVar1 / 9;
    uVar10 = (uint) bVar1 % 9;
    uVar9 = uVar3 % 5;
    uVar7 = (0x300 << (char) uVar9 + (char) uVar10) + 0x736;
    if ((*(longlong * )(param_1 + 4) == 0) || (uVar7 != param_1[0x1a])) {
        (*param_4[1])(param_4);
        *(undefined8 * )(param_1 + 4) = 0;
        lVar4 = (**param_4)(param_4, (ulonglong) uVar7 * 2);
        param_1[0x1a] = uVar7;
        *(longlong * )(param_1 + 4) = lVar4;
        if (lVar4 != 0) goto LAB_1401d73f7;
        LAB_1401d746d:
        uVar5 = 2;
    } else {
        LAB_1401d73f7:
        uVar6 = 0xfff;
        if (uVar2 < 0x40000000) {
            if (0x3fffff < uVar2) {
                uVar6 = 0xfffff;
            }
        } else {
            uVar6 = 0x3fffff;
        }
        uVar6 = uVar8 + uVar6 & ~uVar6;
        if (uVar6 < uVar8) {
            uVar6 = uVar8;
        }
        if ((*(longlong * )(param_1 + 6) == 0) || (uVar6 != *(ulonglong * )(param_1 + 0xe))) {
            (*param_4[1])(param_4);
            *(undefined8 * )(param_1 + 6) = 0;
            lVar4 = (**param_4)(param_4, uVar6);
            *(longlong * )(param_1 + 6) = lVar4;
            if (lVar4 == 0) {
                (*param_4[1])(param_4, *(undefined8 * )(param_1 + 4));
                *(undefined8 * )(param_1 + 4) = 0;
                goto LAB_1401d746d;
            }
        }
        *param_1 = uVar10;
        param_1[1] = uVar9;
        param_1[2] = uVar3 / 5;
        param_1[3] = uVar2;
        *(ulonglong * )(param_1 + 0xe) = uVar6;
        uVar5 = 0;
    }
    return uVar5;
}


longlong **FUN_1401d74c0(longlong **param_1, longlong *param_2, longlong *param_3) {
    int iVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong **pplVar4;
    longlong **pplVar5;

    pplVar5 = (longlong * *)(param_3 + 10);
    param_1[1] = (longlong *) 0x0;
    param_1[2] = (longlong *) 0x0;
    param_1[4] = (longlong *) 0x0;
    param_1[5] = (longlong *) 0x0;
    *param_1 = param_2;
    if (param_1[1] == (longlong *) 0x0) {
        param_1[1] = (longlong *) pplVar5;
        pplVar4 = param_1 + 2;
        *pplVar4 = *pplVar5;
        *pplVar5 = (longlong *) param_1;
        if (*pplVar4 != (longlong *) 0x0) {
            (*pplVar4)[1] = (longlong) pplVar4;
        }
    }
    pplVar5 = (longlong * *)(param_2 + 0xb);
    param_1[3] = param_3;
    if (param_1[4] == (longlong *) 0x0) {
        param_1[4] = (longlong *) pplVar5;
        pplVar4 = param_1 + 5;
        *pplVar4 = *pplVar5;
        *pplVar5 = (longlong *) param_1;
        if (*pplVar4 != (longlong *) 0x0) {
            (*pplVar4)[4] = (longlong) pplVar4;
        }
    }
    (**(code * *) * *param_1)();
    plVar2 = *param_1;
    iVar1 = *(int *) ((longlong) param_1[3] + 0x2c);
    if (*(int *) ((longlong) plVar2 + 0x2c) < iVar1) {
        for (puVar3 = (undefined8 *) plVar2[10]; puVar3 != (undefined8 *) 0x0;
             puVar3 = (undefined8 *) puVar3[2]) {
            FUN_1401c6050(*puVar3, iVar1);
        }
        (**(code * *)(*plVar2 + 0x98))(plVar2, iVar1);
        *(int *) ((longlong) plVar2 + 0x2c) = iVar1;
    }
    return param_1;
}


void FUN_1401d75a0(longlong **param_1) {
    if ((longlong **) param_1[1] != (longlong **) 0x0) {
        *param_1[1] = (longlong) param_1[2];
    }
    if (param_1[2] != (longlong *) 0x0) {
        param_1[2][1] = (longlong) param_1[1];
    }
    param_1[1] = (longlong *) 0x0;
    param_1[2] = (longlong *) 0x0;
    if ((longlong **) param_1[4] != (longlong **) 0x0) {
        *param_1[4] = (longlong) param_1[5];
    }
    if (param_1[5] != (longlong *) 0x0) {
        param_1[5][4] = (longlong) param_1[4];
    }
    param_1[4] = (longlong *) 0x0;
    param_1[5] = (longlong *) 0x0;
    (**(code * *)(**param_1 + 8))();
    if ((param_1[3][10] == 0) && (*(int *) (param_1[3] + 5) == 1)) {
        FUN_1401c60b0();
    }
    if ((longlong **) param_1[4] != (longlong **) 0x0) {
        *param_1[4] = (longlong) param_1[5];
    }
    if (param_1[5] != (longlong *) 0x0) {
        param_1[5][4] = (longlong) param_1[4];
    }
    param_1[4] = (longlong *) 0x0;
    param_1[5] = (longlong *) 0x0;
    if ((longlong **) param_1[1] != (longlong **) 0x0) {
        *param_1[1] = (longlong) param_1[2];
    }
    if (param_1[2] != (longlong *) 0x0) {
        param_1[2][1] = (longlong) param_1[1];
    }
    param_1[2] = (longlong *) 0x0;
    param_1[1] = (longlong *) 0x0;
    return;
}


void FUN_1401d7680(longlong param_1, longlong param_2) {
    **(undefined8 * *)(param_2 + 0x88) = *(undefined8 * )(param_2 + 0x90);
    if (*(longlong * )(param_2 + 0x90) != 0) {
        *(undefined8 * )(*(longlong * )(param_2 + 0x90) + 0x88) = *(undefined8 * )(param_2 + 0x88);
        *(undefined8 * )(param_2 + 0x90) = 0;
        *(undefined8 * )(param_2 + 0x88) = 0;
        return;
    }
    *(undefined8 * )(param_1 + 0x18 + (longlong) * (int *) (param_2 + 0x2c) * 8) =
            *(undefined8 * )(param_2 + 0x88);
    *(undefined8 * )(param_2 + 0x90) = 0;
    *(undefined8 * )(param_2 + 0x88) = 0;
    return;
}


undefined8 FUN_1401d76e0(longlong param_1) {
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    if (*(longlong * )(param_1 + 0x30) == 0) {
        uVar3 = 3;
        while (true) {
            uVar2 = (int) uVar3 - 1;
            uVar3 = (ulonglong) uVar2;
            lVar1 = *(longlong * )(param_1 + uVar3 * 8);
            *(longlong * )(param_1 + 0x30) = lVar1;
            if (lVar1 != 0) break;
            if (uVar2 == 0) {
                return 0;
            }
        }
        FUN_1401d7680();
        lVar1 = DAT_140c63758;
        *(undefined4 * )(*(longlong * )(param_1 + 0x30) + 0x98) = *(undefined4 * )(DAT_140c63758 + 0x28);
        *(int *) (lVar1 + 0x28) = *(int *) (lVar1 + 0x28) + 1;
        *(undefined4 * )(*(longlong * )(param_1 + 0x30) + 0x28) = 3;
    }
    return *(undefined8 * )(param_1 + 0x30);
}


undefined8 FUN_1401d7750(float *param_1, float *param_2, float *param_3, float *param_4) {
    float fVar1;

    fVar1 = (*param_2 - *param_3) * *param_1 + (param_2[1] - param_3[1]) * param_1[1] + 0.0;
    if (((1e-05 <= (float) ((uint) fVar1 & 0x7fffffff)) &&
         (fVar1 = (*param_2 * *param_1 + param_2[1] * param_1[1] + 0.0 + param_1[3]) / fVar1,
                 0.0 <= fVar1)) && (fVar1 <= 1.0)) {
        if (param_4 != (float *) 0x0) {
            *param_4 = fVar1;
        }
        return 1;
    }
    return 0;
}


undefined8
FUN_1401d7860(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5,
              float *param_6, float *param_7, float *param_8) {
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

    fVar9 = *param_4;
    fVar8 = param_4[1];
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = *param_5;
    fVar4 = param_5[1];
    fVar12 = *param_2;
    fVar5 = param_2[1];
    fVar10 = fVar5 * 0.0 - (fVar4 - fVar2) * 0.0;
    fVar11 = (fVar3 - fVar1) * 0.0 - fVar12 * 0.0;
    fVar13 = (fVar9 - fVar1) * fVar10 + (fVar8 - fVar2) * fVar11 + 0.0;
    if (DAT_140c3ed18 <= fVar13) {
        fVar6 = *param_1;
        fVar7 = param_1[1];
        fVar10 = (fVar6 - fVar1) * fVar10 + (fVar7 - fVar2) * fVar11 + 0.0;
        *param_7 = fVar10;
        if ((0.0 <= fVar10) && (fVar10 <= fVar13)) {
            fVar8 = (fVar7 - fVar2) * 0.0 - (fVar8 - fVar2) * 0.0;
            fVar9 = (fVar9 - fVar1) * 0.0 - (fVar6 - fVar1) * 0.0;
            fVar12 = fVar8 * fVar12 + fVar9 * fVar5 + 0.0;
            *param_8 = fVar12;
            if ((0.0 <= fVar12) && (fVar12 + fVar10 <= fVar13)) {
                *param_6 = (fVar8 * (fVar3 - fVar1) + fVar9 * (fVar4 - fVar2) + 0.0) / fVar13;
                return 1;
            }
        }
    }
    return 0;
}


void FUN_1401d79d0(undefined8 *param_1, ulonglong param_2, uint param_3, float *param_4) {
    uint *puVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    uint *puVar6;
    float *pfVar7;
    ulonglong uVar8;
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
    float local_res8;
    float local_resc;
    float local_res20;
    float local_res24;

    fVar17 = DAT_140c3ed18;
    lVar3 = param_1[3];
    local_res8 = *param_4;
    fVar16 = param_4[1];
    param_2 = param_2 & 0xffffffff;
    uVar8 = (ulonglong) param_3;
    uVar5 = *(uint * )(lVar3 + 8 + param_2 * 0x14);
    local_resc = fVar16;
    if (uVar5 != 0) {
        puVar6 = (uint * )(param_1[2] + (ulonglong) * (uint * )(lVar3 + 4 + param_2 * 0x14) * 4);
        puVar1 = puVar6 + uVar5;
        if (puVar6 < puVar1) {
            lVar4 = param_1[1];
            do {
                fVar13 = *(float *) (lVar4 + (ulonglong) * puVar6 * 0xc);
                fVar14 = *(float *) (lVar4 + 4 + (ulonglong) * puVar6 * 0xc);
                fVar18 = *(float *) (lVar4 + (ulonglong) puVar6[2] * 0xc) - fVar13;
                fVar19 = *(float *) (lVar4 + 4 + (ulonglong) puVar6[2] * 0xc) - fVar14;
                fVar11 = *(float *) (lVar4 + (ulonglong) puVar6[1] * 0xc) - fVar13;
                fVar12 = *(float *) (lVar4 + 4 + (ulonglong) puVar6[1] * 0xc) - fVar14;
                fVar9 = *(float *) ((longlong) param_1 + 0x44) * 0.0 - fVar19 * 0.0;
                fVar10 = fVar18 * 0.0 - *(float *) (param_1 + 8) * 0.0;
                fVar15 = fVar11 * fVar9 + fVar12 * fVar10 + 0.0;
                if (fVar17 <= fVar15) {
                    fVar14 = *(float *) ((longlong) param_1 + 0x24) - fVar14;
                    fVar9 = (*(float *) (param_1 + 4) - fVar13) * fVar9 + fVar14 * fVar10 + 0.0;
                    if ((0.0 <= fVar9) && (fVar9 <= fVar15)) {
                        fVar14 = fVar14 * 0.0 - fVar12 * 0.0;
                        fVar13 = fVar11 * 0.0 - (*(float *) (param_1 + 4) - fVar13) * 0.0;
                        fVar10 = fVar14 * *(float *) (param_1 + 8) +
                                 fVar13 * *(float *) ((longlong) param_1 + 0x44) + 0.0;
                        if ((0.0 <= fVar10) &&
                            (((fVar9 + fVar10 <= fVar15 &&
                               (fVar15 = (fVar14 * fVar18 + fVar13 * fVar19 + 0.0) / fVar15, local_res8 <= fVar15)
                              ) && (fVar15 < fVar16)))) {
                            *(float *) (param_1 + 10) = fVar15;
                            param_1[0xc] = *param_1;
                            param_1[0xb] = puVar6;
                            fVar16 = fVar15;
                            local_resc = fVar15;
                        }
                    }
                }
                puVar6 = puVar6 + 3;
            } while (puVar6 < puVar1);
        }
    }
    iVar2 = *(int *) (lVar3 + 0xc + param_2 * 0x14);
    if ((iVar2 == 0) && (*(int *) (lVar3 + 0x10 + param_2 * 0x14) == 0)) {
        return;
    }
    fVar17 = *(float *) ((longlong) param_1 + uVar8 * 4 + 0x40);
    uVar5 = (param_3 + 1) % 3;
    if (fVar17 <= 1e-05) {
        if (-1e-05 <= fVar17) {
            fVar17 = *(float *) (lVar3 + param_2 * 0x14);
            pfVar7 = (float *) ((longlong) param_1 + uVar8 * 4 + 0x20);
            if (fVar17 < *pfVar7 || fVar17 == *pfVar7) {
                iVar2 = *(int *) (lVar3 + 0x10 + param_2 * 0x14);
            }
            if (iVar2 == 0) {
                return;
            }
            pfVar7 = &local_res8;
            goto LAB_1401d7de4;
        }
        iVar2 = *(int *) (lVar3 + 0x10 + param_2 * 0x14);
        fVar17 = (*(float *) (lVar3 + param_2 * 0x14) - *(float *) ((longlong) param_1 + uVar8 * 4 + 0x20))
                 / fVar17;
        fVar13 = local_resc;
        if (iVar2 != 0) {
            fVar14 = fVar17 + 1e-05;
            local_res24 = fVar14;
            if (fVar16 <= fVar14) {
                local_res24 = fVar16;
            }
            if (local_res8 < local_res24) {
                local_res20 = local_res8;
                FUN_1401d79d0(fVar14, fVar16, param_1, iVar2, uVar5, &local_res20);
                fVar16 = *(float *) (param_1 + 10);
                fVar13 = fVar16;
                if (local_resc <= fVar16) {
                    fVar16 = local_resc;
                    fVar13 = local_resc;
                }
            }
        }
        local_resc = fVar13;
        iVar2 = *(int *) (lVar3 + 0xc + param_2 * 0x14);
    } else {
        fVar17 = (*(float *) (lVar3 + param_2 * 0x14) - *(float *) ((longlong) param_1 + uVar8 * 4 + 0x20))
                 / fVar17;
        fVar13 = local_resc;
        if (iVar2 != 0) {
            fVar14 = fVar17 + 1e-05;
            local_res24 = fVar14;
            if (fVar16 <= fVar14) {
                local_res24 = fVar16;
            }
            if (local_res8 < local_res24) {
                local_res20 = local_res8;
                FUN_1401d79d0(fVar14, fVar16, param_1, iVar2, uVar5, &local_res20);
                fVar16 = *(float *) (param_1 + 10);
                fVar13 = fVar16;
                if (local_resc <= fVar16) {
                    fVar16 = local_resc;
                    fVar13 = local_resc;
                }
            }
        }
        local_resc = fVar13;
        iVar2 = *(int *) (lVar3 + 0x10 + param_2 * 0x14);
    }
    if (iVar2 == 0) {
        return;
    }
    local_res20 = fVar17 - 1e-05;
    if (fVar17 - 1e-05 <= local_res8) {
        local_res20 = local_res8;
    }
    if (fVar16 <= local_res20) {
        return;
    }
    pfVar7 = &local_res20;
    fVar17 = local_res8;
    local_res24 = fVar16;
    LAB_1401d7de4:
    FUN_1401d79d0(fVar17, param_1, iVar2, uVar5, pfVar7);
    return;
}


void FUN_1401d7e20(longlong param_1, longlong param_2, float *param_3, float *param_4,
                   undefined8 param_5, uint param_6, uint param_7) {
    undefined(*pauVar1)[16];
    float *pfVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
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
    float fVar21;
    float fVar22;
    float fVar23;
    uint uVar24;
    undefined(*pauVar25)[16];
    ulonglong uVar26;
    undefined(*pauVar27)[16];
    ulonglong uVar28;
    ulonglong uVar29;
    ulonglong uVar30;
    float fVar31;
    undefined auVar32[16];
    undefined auVar33[16];

    do {
        uVar30 = (ulonglong) param_6;
        lVar3 = *(longlong * )(param_1 + 0x38);
        uVar24 = *(uint * )(lVar3 + 8 + uVar30 * 0x14);
        if (uVar24 != 0) {
            uVar29 = (ulonglong) uVar24;
            pauVar25 = (undefined (*)[16]) FUN_14018b280();
            uVar24 = *(uint * )(lVar3 + 4 + uVar30 * 0x14);
            lVar4 = *(longlong * )(param_1 + 0x18);
            lVar5 = *(longlong * )(param_1 + 0x28);
            uVar28 = 0;
            pauVar27 = pauVar25;
            if (uVar29 != 0) {
                do {
                    uVar26 = (ulonglong) * (uint * )(lVar5 + (ulonglong) uVar24 * 4 + uVar28 * 4);
                    uVar28 = uVar28 + 1;
                    *pauVar27 = ZEXT1216(CONCAT48(*(undefined4 * )(lVar4 + 8 + uVar26 * 0xc),
                                                  CONCAT44(*(undefined4 * )(lVar4 + 4 + uVar26 * 0xc),
                                                           *(undefined4 * )(lVar4 + uVar26 * 0xc))));
                    pauVar27 = pauVar27[1];
                } while (uVar28 < uVar29);
            }
            pauVar1 = pauVar25[uVar29];
            fVar31 = *param_3;
            fVar6 = param_3[1];
            fVar7 = param_3[2];
            fVar8 = param_3[3];
            fVar9 = param_3[4];
            fVar10 = param_3[5];
            fVar11 = param_3[6];
            fVar12 = param_3[7];
            fVar13 = param_3[8];
            fVar14 = param_3[9];
            fVar15 = param_3[10];
            fVar16 = param_3[0xb];
            fVar17 = param_3[0xc];
            fVar18 = param_3[0xd];
            fVar19 = param_3[0xe];
            fVar20 = param_3[0xf];
            for (pauVar27 = pauVar25; pauVar27 < pauVar1; pauVar27 = pauVar27[1]) {
                fVar21 = *(float *) *pauVar27;
                fVar22 = *(float *) (*pauVar27 + 4);
                fVar23 = *(float *) (*pauVar27 + 8);
                *pauVar27 = CONCAT412(fVar22 * fVar12 + fVar21 * fVar8 + fVar23 * fVar16 + fVar20,
                                      CONCAT48(fVar22 * fVar11 + fVar21 * fVar7 + fVar23 * fVar15 + fVar19,
                                               CONCAT44(fVar22 * fVar10 + fVar21 * fVar6 + fVar23 * fVar14 +
                                                        fVar18, fVar22 * fVar9 + fVar21 * fVar31 +
                                                                fVar23 * fVar13 + fVar17)));
            }
            if (pauVar25 < pauVar1) {
                pauVar25 = pauVar25[1];
                do {
                    auVar32 = minps(pauVar25[-1], *pauVar25);
                    auVar32 = minps(auVar32, pauVar25[1]);
                    fVar31 = param_4[4] - SUB164(auVar32, 0);
                    uVar24 = movmskps((int) pauVar27,
                                      CONCAT412(param_4[7] - SUB164(auVar32 >> 0x60, 0),
                                                CONCAT48(param_4[6] - SUB164(auVar32 >> 0x40, 0),
                                                         CONCAT44(param_4[5] - SUB164(auVar32 >> 0x20, 0),
                                                                  fVar31))));
                    if ((uVar24 & 7) == 0) {
                        auVar33 = maxps(pauVar25[-1], *pauVar25);
                        auVar33 = maxps(auVar33, pauVar25[1]);
                        uVar24 = movmskps(uVar24, CONCAT412(SUB164(auVar33 >> 0x60, 0) - param_4[3],
                                                            CONCAT48(SUB164(auVar33 >> 0x40, 0) - param_4[2],
                                                                     CONCAT44(SUB164(auVar33 >> 0x20, 0) -
                                                                              param_4[1],
                                                                              SUB164(auVar33, 0) - *param_4))));
                        if ((uVar24 & 7) == 0) {
                            FUN_1401d8af0(fVar31, SUB168(auVar32, 0), param_5);
                        }
                    }
                    pauVar27 = pauVar25[2];
                    pauVar25 = pauVar25[3];
                } while (pauVar27 < pauVar1);
            }
            FUN_14018b900();
        }
        if ((*(int *) (lVar3 + 0xc + uVar30 * 0x14) != 0) &&
            (fVar31 = *(float *) (lVar3 + uVar30 * 0x14),
                    pfVar2 = (float *) (param_2 + (ulonglong) param_7 * 4), *pfVar2 <= fVar31 && fVar31 != *pfVar2)
                ) {
            FUN_1401d7e20();
        }
        uVar28 = (ulonglong) param_7;
        param_6 = *(uint * )(lVar3 + 0x10 + uVar30 * 0x14);
    } while ((param_6 != 0) &&
             (param_7 = (param_7 + 1) % 3,
                     *(float *) (lVar3 + uVar30 * 0x14) < *(float *) (param_2 + 0x10 + uVar28 * 4)));
    return;
}


undefined8 *
FUN_1401d80d0(undefined8 *param_1, undefined8 param_2, longlong param_3, undefined4 param_4) {
    short sVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;

    *param_1 = &PTR_LAB_140b5fdb0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    *(undefined4 * )(param_1 + 0x44) = param_4;
    param_1[0x4a] = param_1 + 0x49;
    param_1[2] = param_2;
    param_1[0x49] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[0x47] = 0;
    *(undefined4 * )(param_1 + 0x48) = 0;
    lVar4 = 0x104;
    puVar2 = param_1 + 3;
    while ((puVar3 = puVar2, lVar4 != -0x7ffffefa &&
                             (sVar1 = *(short *) ((param_3 - (longlong)(param_1 + 3)) + (longlong) puVar3), sVar1 !=
                                                                                                            0))) {
        *(short *) puVar3 = sVar1;
        lVar4 = lVar4 + -1;
        puVar2 = (undefined8 * )((longlong) puVar3 + 2);
        if (lVar4 == 0) {
            *(short *) puVar3 = 0;
            return param_1;
        }
    }
    if (lVar4 == 0) {
        puVar3 = (undefined8 * )((longlong) puVar3 + -2);
    }
    *(short *) puVar3 = 0;
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001401d82db)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *FUN_1401d8220(longlong param_1, longlong param_2) {
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined4 local_18[4];

    if ((*(byte * )(param_1 + 0x220) & 2) == 0) {
        return (longlong *) 0x80070005;
    }
    if (param_2 == *(longlong * )(param_1 + 0x230)) {
        return (longlong *) 0x0;
    }
    *(longlong * )(param_1 + 0x230) = param_2;
    lVar2 = FUN_14018b280(0xb8, 0);
    plVar4 = (longlong *) 0x0;
    plVar3 = plVar4;
    if (lVar2 != 0) {
        plVar3 = (longlong *) FUN_1401d8d20(lVar2, param_1, *(undefined8 * )(param_1 + 0x230));
    }
    uVar1 = FUN_14019e010();
    if (-1 < (int) uVar1) {
        local_18[0] = 0xffffffff;
        (**(code * *)(_DAT_00000000 + 0x20))(0, local_18);
        uVar1 = (**(code * *)(_DAT_00000000 + 0x28))(0, 0);
        if (-1 < (int) uVar1) goto LAB_1401d82d6;
    }
    plVar4 = (longlong * )(ulonglong)
    uVar1;
    LAB_1401d82d6:
    if (plVar3 != (longlong *) 0x0) {
        (**(code * *)(*plVar3 + 8))(plVar3);
    }
    return plVar4;
}


ulonglong FUN_1401d8340(longlong *param_1, longlong *param_2) {
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *local_res10[3];
    undefined4 local_18[4];

    if (param_2 == (longlong *) 0x0) {
        return 0x80070057;
    }
    lVar2 = (**(code * *)(*param_2 + 0x10))(param_2);
    if (lVar2 != 0) {
        uVar3 = (**(code * *)(*param_1 + 0x58))(param_1, param_2, local_res10, 0);
        if ((int) uVar3 < 0) {
            return uVar3;
        }
        local_18[0] = 0xffffffff;
        (**(code * *)(*local_res10[0] + 0x20))(local_res10[0], local_18);
        uVar1 = (**(code * *)(*local_res10[0] + 0x28))(local_res10[0], 0);
        if ((int) uVar1 < 0) {
            (**(code * *)(*local_res10[0] + 8))();
            return (ulonglong) uVar1;
        }
        (**(code * *)(*local_res10[0] + 8))();
    }
    return 0;
}


int FUN_1401d83f0(longlong *param_1, longlong param_2, longlong param_3) {
    int iVar1;
    longlong *plVar2;

    if (param_3 == 0) {
        return 0;
    }
    if (param_2 == 0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        plVar2 = (longlong *) FUN_14018b280(0x20);
        if (plVar2 == (longlong *) 0x0) {
            iVar1 = -0x7ff8fff2;
        } else {
            *(undefined4 * )(plVar2 + 1) = 1;
            *plVar2 = (longlong) & PTR_LAB_140b5f4f0;
            plVar2[2] = param_2;
            plVar2[3] = param_3;
            iVar1 = (**(code * *)(*param_1 + 0x48))(param_1, plVar2);
            if (iVar1 < 0) {
                (**(code * *)(*plVar2 + 8))();
            } else {
                (**(code * *)(*plVar2 + 8))(plVar2);
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


undefined8 FUN_1401d84b0(longlong param_1, longlong *param_2, longlong param_3, undefined8 param_4) {
    undefined8 uVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;

    if ((*(byte * )(param_1 + 0x220) & 1) == 0) {
        uVar1 = 0x80070005;
    } else if ((param_2 == (longlong *) 0x0) || (param_3 == 0)) {
        uVar1 = 0x80070057;
    } else {
        lVar2 = (**(code * *)(*param_2 + 0x10))(param_2);
        uVar4 = lVar2 + *(longlong * )(param_1 + 0x238);
        if (uVar4 < *(ulonglong * )(param_1 + 0x228) || uVar4 == *(ulonglong * )(param_1 + 0x228)) {
            lVar2 = FUN_14018b280(200, 0);
            if (lVar2 == 0) {
                plVar3 = (longlong *) 0x0;
            } else {
                plVar3 = (longlong *)
                        FUN_1401d91c0(lVar2, param_1, *(undefined8 * )(param_1 + 0x238), param_2, param_4);
            }
            FUN_14019e010();
            (**(code * *)(*plVar3 + 8))(plVar3);
            *(ulonglong * )(param_1 + 0x238) = uVar4;
            uVar1 = 0;
        } else {
            uVar1 = 0x80004005;
        }
    }
    return uVar1;
}


int FUN_1401d85a0(longlong *param_1, longlong param_2, longlong param_3, undefined8 param_4,
                  undefined8 param_5) {
    int iVar1;
    longlong *plVar2;

    if ((param_2 == 0) && (param_3 != 0)) {
        iVar1 = -0x7ff8ffa9;
    } else {
        plVar2 = (longlong *) FUN_14018b280(0x20);
        if (plVar2 == (longlong *) 0x0) {
            iVar1 = -0x7ff8fff2;
        } else {
            *(undefined4 * )(plVar2 + 1) = 1;
            *plVar2 = (longlong) & PTR_LAB_140b5f4f0;
            plVar2[2] = param_2;
            plVar2[3] = param_3;
            iVar1 = (**(code * *)(*param_1 + 0x58))(param_1, plVar2, param_4, param_5);
            if (iVar1 < 0) {
                (**(code * *)(*plVar2 + 8))();
            } else {
                (**(code * *)(*plVar2 + 8))(plVar2);
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}
