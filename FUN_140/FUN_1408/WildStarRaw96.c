//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408267d0(LPCWSTR param_1,uint param_2)

{
    ushort *puVar1;
    ushort uVar2;
    uint uVar3;
    int iVar4;
    INT_PTR IVar5;
    longlong lVar6;
    ulonglong uVar7;
    ushort *puVar8;
    wchar_t *pwVar9;
    WCHAR *pWVar10;
    undefined auStack552 [32];
    undefined8 *local_208;
    undefined8 local_200;
    int *local_1f8;
    undefined4 *local_1f0;
    int local_1e8;
    uint local_1e4;
    WCHAR local_1d8 [12];
    undefined4 local_1c0;
    undefined2 local_1bc;
    undefined2 local_1ba;
    undefined local_1b8;
    undefined local_1b7;
    undefined local_1b6;
    undefined local_1b5;
    undefined local_1b4;
    undefined local_1b3;
    undefined local_1b2;
    undefined local_1b1;
    ushort local_1b0 [4];
    ushort local_1a8 [40];
    undefined8 local_158;
    int local_150;
    uint local_14c;
    uint local_148;
    undefined4 local_144;
    uint local_140;
    int local_13c;
    ushort local_138 [128];
    undefined4 local_38;
    uint local_34;
    uint local_30;
    uint local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    local_1e4 = DAT_140c61afc;
    pwVar9 = u_0x00000000_140c10d40;
    pWVar10 = local_1d8;
    for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined *)pWVar10 = *(undefined *)pwVar9;
        pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
        pWVar10 = (WCHAR *)((longlong)pWVar10 + 1);
    }
    OutputDebugStringW(u_____WARNING___PE_SIGNATURE_VERIF_140c10d60);
    OutputDebugStringW(param_1);
    OutputDebugStringW(u______Error__140c10de8);
    for (local_1e8 = 0; local_1e8 < 8; local_1e8 = local_1e8 + 1) {
        local_1d8[local_1e8 + 2] =
                (ushort)(param_2 >> (('\a' - (char)local_1e8) * '\x04' & 0x1fU)) & 0xf;
        if ((ushort)local_1d8[local_1e8 + 2] < 10) {
            local_38 = 0x30;
        }
        else {
            local_38 = 0x37;
        }
        local_1d8[local_1e8 + 2] = local_1d8[local_1e8 + 2] + (short)local_38;
    }
    OutputDebugStringW(local_1d8);
    if ((local_1e4 == 0) && (_DAT_140c10b6c != 0)) {
        local_1b0[0] = 0x100;
        local_1b0[1] = 0x200;
        local_1b0[2] = 0;
        local_1c0 = 0x41fcc608;
        local_1bc = 0x8496;
        local_1ba = 0x4def;
        local_1b8 = 0xb4;
        local_1b7 = 0x3e;
        local_1b6 = 0x7d;
        local_1b5 = 0x9b;
        local_1b4 = 0xd6;
        local_1b3 = 0x75;
        local_1b2 = 0xa6;
        local_1b1 = 0xff;
        _DAT_140c10b6c = 0;
        if ((DAT_140c61998 == (HMODULE)0x0) &&
            (DAT_140c61998 = (HMODULE)FUN_140824350(u_Advapi32_dll_140c10e08,0),
                    DAT_140c61998 != (HMODULE)0x0)) {
            DAT_140c619a0 = GetProcAddress(DAT_140c61998,s_RegOpenKeyExW_140c10e28);
            DAT_140c619a8 = GetProcAddress(DAT_140c61998,s_RegEnumValueW_140c10e38);
            DAT_140c619b0 = GetProcAddress(DAT_140c61998,s_RegCloseKey_140c10e48);
        }
        if (((DAT_140c619a0 == (FARPROC)0x0) || (DAT_140c619a8 == (FARPROC)0x0)) ||
            (DAT_140c619b0 == (FARPROC)0x0)) goto LAB_140826d11;
        if ((DAT_140c619b8 == (HMODULE)0x0) &&
            (DAT_140c619b8 = (HMODULE)FUN_140824350(u_Ole32_dll_140c10e58,0),
                    DAT_140c619b8 != (HMODULE)0x0)) {
            DAT_140c619c0 = GetProcAddress(DAT_140c619b8,s_StringFromGUID2_140c10e70);
        }
        if (DAT_140c619c0 == (FARPROC)0x0) goto LAB_140826d11;
        puVar8 = local_1a8;
        for (lVar6 = 0x4e; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined *)puVar8 = 0;
            puVar8 = (ushort *)((longlong)puVar8 + 1);
        }
        IVar5 = (*DAT_140c619c0)(&local_1c0,local_1a8,0x27);
        if ((int)IVar5 != 0x27) goto LAB_140826d11;
        for (local_1e8 = 0; (local_1e4 == 0 && (local_1b0[local_1e8] != 0)); local_1e8 = local_1e8 + 1)
        {
            local_158 = 0;
            local_208 = &local_158;
            IVar5 = (*DAT_140c619a0)(0xffffffff80000002,u_SOFTWARE_NVIDIA_Corporation_Glob_140c10e80,0,
                                     (ulonglong)(local_1b0[local_1e8] | 0x20019));
            local_150 = (int)IVar5;
            if ((int)IVar5 == 0) {
                local_148 = 0;
                local_14c = 0;
                do {
                    local_140 = 0x80;
                    local_144 = 4;
                    puVar8 = local_138;
                    for (lVar6 = 0x100; lVar6 != 0; lVar6 = lVar6 + -1) {
                        *(undefined *)puVar8 = 0;
                        puVar8 = (ushort *)((longlong)puVar8 + 1);
                    }
                    local_34 = local_148;
                    local_1f0 = &local_144;
                    local_1f8 = &local_13c;
                    local_200 = 0;
                    local_208 = (undefined8 *)0x0;
                    IVar5 = (*DAT_140c619a8)(local_158,(ulonglong)local_148);
                    local_150 = (int)IVar5;
                    local_148 = local_148 + 1;
                    if (local_150 == 0) {
                        uVar7 = 0xffffffffffffffff;
                        puVar8 = local_1a8;
                        do {
                            if (uVar7 == 0) break;
                            uVar7 = uVar7 - 1;
                            uVar2 = *puVar8;
                            puVar8 = puVar8 + 1;
                        } while (uVar2 != 0);
                        if (~uVar7 - 1 == (ulonglong)local_140) {
                            puVar8 = local_1a8;
                            lVar6 = (longlong)local_138 - (longlong)puVar8;
                            do {
                                uVar2 = *puVar8;
                                puVar1 = (ushort *)((longlong)puVar8 + lVar6);
                                if (uVar2 != *puVar1) {
                                    uVar3 = (uint)(uVar2 < *puVar1);
                                    iVar4 = (1 - uVar3) - (uint)(uVar3 != 0);
                                    goto LAB_140826c2c;
                                }
                                puVar8 = puVar8 + 1;
                            } while (uVar2 != 0);
                            iVar4 = 0;
                            LAB_140826c2c:
                            if (iVar4 == 0) {
                                local_30 = (uint)(local_13c != 0);
                                local_14c = local_14c | local_30;
                            }
                        }
                    }
                } while (local_150 != 0x103);
                (*DAT_140c619b0)();
                if (local_14c == 0) {
                    local_2c = 0;
                }
                else {
                    local_2c = 1;
                }
                local_2c = (uint)(local_14c != 0);
                DAT_140c61afc = local_2c;
                local_1e4 = local_2c;
            }
        }
    }
    if ((local_1e4 == 0) && (DAT_140c61afc == 0)) {
        SetLastError(param_2);
    }
    else {
        OutputDebugStringW(u_____Signature_override_detected__140c10ed0);
        SetLastError(0);
    }
    LAB_140826d11:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack552);
    return;
}



int FUN_140826d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    int local_18;

    local_18 = FUN_140825750(param_1,param_2,0x7fffffff);
    if (-1 < local_18) {
        local_18 = FUN_1408258c0(param_1,param_2,0,param_3,0x7ffffffe);
    }
    return local_18;
}



int FUN_140826d90(longlong param_1,longlong param_2,undefined8 param_3)

{
    int local_18;
    longlong local_10 [2];

    local_18 = FUN_1408257a0(param_1,param_2,local_10,0x7fffffff);
    if (-1 < local_18) {
        local_18 = FUN_1408258c0(param_1 + local_10[0] * 2,param_2 - local_10[0],0,param_3,0x7fffffff);
    }
    return local_18;
}



LPCRITICAL_SECTION FUN_140826e10(LPCRITICAL_SECTION param_1)

{
    InitializeCriticalSection(param_1);
    *(undefined4 *)&param_1[0x27].LockSemaphore = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x27].SpinCount);
    *(undefined4 *)&param_1[0x4f].OwningThread = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x4f].LockSemaphore);
    param_1[0x77].LockCount = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x77].OwningThread);
    *(undefined4 *)&param_1[0x9f].DebugInfo = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x9f].LockCount);
    *(undefined4 *)&param_1[0xc6].SpinCount = 0;
    InitializeCriticalSection(param_1 + 199);
    *(undefined4 *)&param_1[0xee].LockSemaphore = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0xee].SpinCount);
    *(undefined4 *)&param_1[0x116].OwningThread = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x116].LockSemaphore);
    param_1[0x13e].LockCount = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x13e].OwningThread);
    *(undefined4 *)&param_1[0x166].DebugInfo = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[0x166].LockCount);
    *(undefined4 *)&param_1[0x18d].SpinCount = 0;
    InitializeCriticalSection(param_1 + 0x18e);
    *(undefined4 *)&param_1[0x1b5].LockSemaphore = 0;
    return param_1;
}



longlong FUN_140826f10(longlong param_1)

{
    *(undefined4 *)(param_1 + 0xf8) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_14088c4e0(param_1 + 0x130);
    return param_1;
}



void FUN_140826f50(LPCRITICAL_SECTION param_1)

{
    DeleteCriticalSection(param_1 + 0x18e);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x166].LockCount);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x13e].OwningThread);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x116].LockSemaphore);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0xee].SpinCount);
    DeleteCriticalSection(param_1 + 199);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x9f].LockCount);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x77].OwningThread);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x4f].LockSemaphore);
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[0x27].SpinCount);
    // WARNING: Could not recover jumptable at 0x000140826fe3. Too many branches
    // WARNING: Treating indirect jump as call
    DeleteCriticalSection(param_1);
    return;
}



undefined8 FUN_140826ff0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;

    uVar7 = (ulonglong)DAT_140c61bf0;
    puVar5 = (undefined8 *)0x0;
    uVar9 = (longlong)DAT_140c61be8 - DAT_140c61be0 >> 3 & 0xffffffff;
    if (uVar7 <= uVar9) {
        uVar6 = DAT_140c61bf0 + 1;
        uVar7 = (ulonglong)uVar6;
        lVar1 = FUN_1408819f0(DAT_140c10f20,uVar7 << 3);
        puVar8 = DAT_140c61be8;
        if (lVar1 == 0) goto LAB_1408270dd;
        puVar8 = (undefined8 *)((longlong)DAT_140c61be8 - DAT_140c61be0 >> 3 & 0xffffffff);
        if (DAT_140c61be0 != 0) {
            puVar3 = puVar5;
            if (puVar8 != (undefined8 *)0x0) {
                do {
                    puVar4 = (undefined8 *)((longlong)puVar3 + 1);
                    *(undefined8 *)(lVar1 + -8 + (longlong)puVar4 * 8) =
                            *(undefined8 *)(DAT_140c61be0 + (longlong)puVar3 * 8);
                    puVar3 = puVar4;
                } while (puVar4 < puVar8);
            }
            FUN_140881720(DAT_140c10f20);
        }
        DAT_140c61be8 = (undefined8 *)(lVar1 + (longlong)puVar8 * 8);
        DAT_140c61be0 = lVar1;
        DAT_140c61bf0 = uVar6;
    }
    puVar8 = DAT_140c61be8;
    if ((uVar9 < uVar7) &&
        (puVar5 = puVar8, puVar8 = DAT_140c61be8 + 1, DAT_140c61be8 != (undefined8 *)0x0)) {
        *DAT_140c61be8 = param_1;
        DAT_140c61be8 = puVar8;
        puVar8 = DAT_140c61be8;
    }
    LAB_1408270dd:
    DAT_140c61be8 = puVar8;
    uVar2 = 0x34;
    if (puVar5 != (undefined8 *)0x0) {
        uVar2 = 1;
    }
    return uVar2;
}



void FUN_140827110(undefined8 param_1)

{
    DAT_140c61b40 = param_1;
    return;
}



void FUN_140827120(undefined8 param_1)

{
    DAT_140c61b38 = param_1;
    return;
}



int * FUN_140827170(uint param_1,longlong param_2)

{
    longlong lVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    uint uVar6;
    uint uVar7;

    piVar2 = (int *)FUN_1408819f0(DAT_140c10f20,(param_1 - 1) * 0x20 + 0x28);
    if (piVar2 == (int *)0x0) {
        return (int *)0x0;
    }
    uVar7 = 0;
    *piVar2 = 1;
    piVar2[1] = param_1;
    uVar6 = 0;
    if (param_1 != 0) {
        plVar5 = (longlong *)(param_2 + 8);
        param_2 = (longlong)piVar2 - param_2;
        do {
            *(longlong *)(param_2 + (longlong)plVar5) = plVar5[-1];
            *(longlong *)(param_2 + 8 + (longlong)plVar5) = *plVar5;
            *(longlong *)(param_2 + 0x10 + (longlong)plVar5) = plVar5[1];
            *(longlong *)(param_2 + 0x18 + (longlong)plVar5) = plVar5[2];
            if (*plVar5 != 0) {
                lVar3 = -1;
                do {
                    lVar1 = lVar3 * 2;
                    lVar3 = lVar3 + 1;
                } while (*(short *)(*plVar5 + 2 + lVar1) != 0);
                iVar4 = (int)lVar3 * 2 + 2;
                lVar3 = FUN_1408819f0(DAT_140c10f20,iVar4);
                *(longlong *)(param_2 + 8 + (longlong)plVar5) = lVar3;
                if (lVar3 == 0) {
                    *piVar2 = *piVar2 + -1;
                    piVar2[1] = uVar6;
                    if (*piVar2 == 0) {
                        if (uVar6 != 0) {
                            do {
                                if (*(longlong *)(piVar2 + (ulonglong)uVar7 * 8 + 4) != 0) {
                                    FUN_140881720(DAT_140c10f20);
                                }
                                uVar7 = uVar7 + 1;
                            } while (uVar7 < (uint)piVar2[1]);
                        }
                        FUN_140881720(DAT_140c10f20,piVar2);
                    }
                    return (int *)0x0;
                }
                FUN_1407db590(lVar3,*plVar5,iVar4);
            }
            uVar6 = uVar6 + 1;
            plVar5 = plVar5 + 4;
        } while (uVar6 < param_1);
    }
    return piVar2;
}



undefined8
FUN_1408272f0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    longlong local_40;
    undefined8 local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;

    local_46 = 0x20;
    local_40 = FUN_14083ede0(DAT_140c61ba8 + 0x12a8,param_1);
    if (local_40 != 0) {
        local_28 = param_5;
        local_24 = param_6;
        local_38 = param_3;
        local_30 = param_2;
        local_2c = param_4;
        uVar1 = FUN_1402d5bd0();
        uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
        return uVar2;
    }
    return 2;
}



undefined4 FUN_1408273a0(LPCWSTR param_1)

{
    int cchWideChar;
    undefined4 uVar1;
    longlong lVar2;
    char *pcVar3;
    longlong lVar4;
    ulonglong uVar5;
    char local_228 [272];
    CHAR local_118;
    char acStack279 [258];
    undefined local_15;

    lVar2 = -1;
    do {
        lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != L'\0');
    if ((int)lVar2 + 1U < 0x103) {
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (param_1[lVar2] != L'\0');
        cchWideChar = (int)lVar2 + 1;
    }
    else {
        cchWideChar = 0x103;
    }
    WideCharToMultiByte(0,0,param_1,cchWideChar,&local_118,0x103,(LPCSTR)0x0,(LPBOOL)0x0);
    local_15 = 0;
    lVar2 = -1;
    do {
        lVar4 = lVar2;
        lVar2 = lVar4 + 1;
    } while ((&local_118)[lVar4 + 1] != '\0');
    uVar5 = lVar4 + 2;
    if (0x103 < uVar5) {
        uVar5 = 0x103;
    }
    FUN_1407ea1f8(local_228,0x104,&local_118,uVar5);
    local_228[uVar5] = '\0';
    pcVar3 = local_228;
    do {
        if (local_228[0] == '\0') {
            LAB_140827472:
            uVar1 = FUN_140827510(local_228);
            FUN_140843830(DAT_140c61b58,uVar1,local_228);
            return uVar1;
        }
        if (*pcVar3 == '.') {
            *pcVar3 = '\0';
            goto LAB_140827472;
        }
        pcVar3 = pcVar3 + 1;
        local_228[0] = *pcVar3;
    } while( true );
}



void FUN_1408274b0(undefined8 *param_1)

{
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xff;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0xff;
    *(undefined4 *)(param_1 + 2) = 0x1000000;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 3) = 0x40000;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 5) = 0x40000;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x10000;
    return;
}



void thunk_FUN_140833e90(HWND *param_1)

{
    HWND pHVar1;

    *param_1 = (HWND)0x0;
    param_1[1] = (HWND)0x0;
    param_1[2] = (HWND)0x0;
    param_1[3] = (HWND)0x0;
    param_1[4] = (HWND)0x0;
    param_1[5] = (HWND)0x0;
    param_1[6] = (HWND)0x0;
    param_1[7] = (HWND)0x0;
    param_1[8] = (HWND)0x0;
    pHVar1 = GetForegroundWindow();
    param_1[1] = (HWND)0x1;
    *param_1 = pHVar1;
    param_1[2] = (HWND)0x2000;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2000;
    *(undefined4 *)(param_1 + 4) = 0x1000000;
    *(undefined2 *)(param_1 + 5) = 4;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 7) = 1;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x2000;
    return;
}



uint FUN_140827510(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    byte *pbVar4;
    ulonglong uVar5;
    longlong lVar6;
    byte local_118 [272];

    if (param_1 != 0) {
        uVar5 = 0xffffffffffffffff;
        lVar2 = -1;
        do {
            lVar6 = lVar2;
            lVar2 = lVar6 + 1;
        } while (*(char *)(param_1 + lVar2) != '\0');
        lVar2 = 0x103;
        if (lVar6 + 2U < 0x104) {
            lVar6 = -1;
            do {
                lVar2 = lVar6;
                lVar6 = lVar2 + 1;
            } while (*(char *)(param_1 + lVar6) != '\0');
            lVar2 = lVar2 + 2;
        }
        FUN_1407ea1f8(local_118,0x104,param_1,lVar2);
        local_118[lVar2] = 0;
        do {
            uVar5 = uVar5 + 1;
        } while (*(char *)(param_1 + uVar5) != '\0');
        uVar3 = 0;
        if (uVar5 != 0) {
            do {
                if ((byte)(local_118[uVar3] + 0xbf) < 0x1a) {
                    local_118[uVar3] = local_118[uVar3] + 0x20;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar5);
        }
        uVar1 = 0x811c9dc5;
        for (pbVar4 = local_118; pbVar4 < local_118 + (uVar5 & 0xffffffff); pbVar4 = pbVar4 + 1) {
            uVar1 = uVar1 * 0x1000193 ^ (uint)*pbVar4;
        }
        return uVar1;
    }
    return 0;
}



undefined8 FUN_140827710(undefined4 param_1,longlong param_2,undefined param_3)

{
    undefined8 uVar1;

    if (param_2 == 0) {
        return 0x1f;
    }
    uVar1 = FUN_140845310(DAT_140c61b60,param_1,param_2,param_3);
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140827730(undefined8 *param_1,undefined8 param_2)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    undefined local_38;
    undefined8 local_37;
    undefined8 local_2f;
    undefined8 local_27;
    undefined8 local_1f;
    undefined2 local_17;
    undefined local_15;

    _DAT_140c10f18 = 3;
    _DAT_140c10f1c = 3;
    cVar1 = FUN_140881950();
    if (cVar1 == '\0') {
        return 0x4a;
    }
    if (DAT_140c62930 == 0) {
        return 0x4b;
    }
    if (param_1 == (undefined8 *)0x0) {
        _DAT_140c61b08 = 0xff000000ff;
        DAT_140c61b10 = 0x3f80000001000000;
        DAT_140c61b00 = 0;
        _DAT_140c61b18 = 0xffffffff00040000;
        DAT_140c61b20 = CONCAT44(1,(uint)DAT_140c61b20 & 0xffffff00);
        DAT_140c61b28 = 0x1000000040000;
    }
    else {
        DAT_140c61b00 = *param_1;
        _DAT_140c61b08 = param_1[1];
        DAT_140c61b10 = param_1[2];
        _DAT_140c61b18 = param_1[3];
        DAT_140c61b20 = param_1[4];
        DAT_140c61b28 = param_1[5];
    }
    _DAT_140c61b30 = DAT_140c61b00;
    FUN_140831300(param_2);
    iVar2 = 2;
    if (DAT_140c61b50 != '\0') goto LAB_1408278f8;
    if (DAT_140c10f20 == -1) {
        uVar3 = 0x1000000;
        if (0x40 < (uint)DAT_140c61b10) {
            uVar3 = (uint)DAT_140c61b10;
        }
        DAT_140c10f20 = FUN_140881bc0(0,uVar3,0x40,1,0);
        _DAT_140c10f68 = DAT_140c10f20;
        if (DAT_140c10f20 != -1) goto LAB_1408278ab;
        iVar2 = 0x34;
    }
    else {
        LAB_1408278ab:
        iVar2 = FUN_140827da0(param_1);
        if (iVar2 == 1) {
            iVar2 = FUN_140827950();
            if (iVar2 == 1) {
                DAT_140c61b50 = '\x01';
                goto LAB_1408278f8;
            }
        }
        FUN_140828f70();
    }
    if ((DAT_140c61b50 == '\0') && (DAT_140c10f20 != -1)) {
        FUN_140881dd0(DAT_140c10f20);
        DAT_140c10f20 = -1;
    }
    LAB_1408278f8:
    local_38 = 0;
    local_37 = 0;
    local_2f = 0;
    local_27 = 0;
    local_1f = 0;
    local_17 = 0;
    local_15 = 0;
    FUN_1407deb70(&local_38,"779AD1D9-3419-4cbf-933B-B038DF5A2818",0x24);
    return iVar2;
}



undefined8 FUN_140827950(void)

{
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = FUN_140843ec0();
    if ((DAT_140c61b68 == 0) && ((int)uVar1 == 1)) {
        lVar2 = FUN_1408819f0(DAT_140c10f20,0xf8);
        if (lVar2 == 0) {
            DAT_140c61b68 = 0;
        }
        else {
            DAT_140c61b68 = FUN_14082b310(lVar2);
            if (DAT_140c61b68 != 0) {
                uVar1 = FUN_14082bd00(DAT_140c61b68);
                if ((int)uVar1 != 1) {
                    return uVar1;
                }
                uVar1 = FUN_14082eeb0(DAT_140c61b68);
                return uVar1;
            }
        }
        uVar1 = 0x34;
    }
    return uVar1;
}



undefined FUN_1408279d0(void)

{
    return DAT_140c61b50;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1408279e0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    int iVar2;
    int local_98 [2];
    HANDLE local_90;
    undefined4 local_80;
    undefined4 uStack124;
    undefined *puStack120;
    undefined8 local_70;
    undefined4 uStack104;
    undefined4 uStack100;
    undefined4 local_60;
    undefined4 uStack92;
    undefined8 uStack88;
    undefined4 local_50;
    uint uStack76;
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
    longlong local_18;

    uVar1 = FUN_1408273a0();
    *param_3 = uVar1;
    local_90 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (local_90 == (HANDLE)0x0) {
        local_98[0] = 2;
    }
    else {
        local_60 = *param_3;
        local_80 = 0;
        uStack104 = 0;
        uStack88 = 0;
        local_50 = 0;
        puStack120 = &LAB_1408272d0;
        local_70 = local_98;
        local_70._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
        local_48 = 0;
        uStack68 = uStack124;
        uStack64 = 0x408272d0;
        uStack60 = 1;
        local_38 = (undefined4)local_70;
        uStack52 = local_70._4_4_;
        uStack48 = 0;
        uStack44 = uStack100;
        local_18 = (ulonglong)uStack76 << 0x20;
        uStack32 = 0;
        uStack28 = 0;
        uStack92 = param_2;
        local_28 = local_60;
        uStack36 = param_2;
        iVar2 = FUN_140841990(DAT_140c61b58,&local_48);
        if (iVar2 == 1) {
            WaitForSingleObject(local_90,0xffffffff);
            if (local_90 != (HANDLE)0x0) {
                CloseHandle(local_90);
            }
        }
        else {
            local_98[0] = iVar2;
            if (local_90 != (HANDLE)0x0) {
                CloseHandle(local_90);
            }
        }
    }
    return local_98[0];
}



void FUN_140827ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 *param_5)

{
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    uint uStack84;
    undefined4 local_48 [2];
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    longlong local_18;

    local_28 = FUN_1408273a0();
    *param_5 = local_28;
    uStack128 = (undefined4)param_2;
    uStack124 = (undefined4)((ulonglong)param_2 >> 0x20);
    local_48[0] = 0;
    uStack64 = uStack128;
    uStack60 = uStack124;
    local_78 = (undefined4)param_3;
    uStack116 = (undefined4)((ulonglong)param_3 >> 0x20);
    local_38 = local_78;
    uStack52 = uStack116;
    uStack48 = 0;
    local_18 = (ulonglong)uStack84 << 0x20;
    uStack32 = 0;
    uStack28 = 0;
    uStack36 = param_4;
    FUN_140841990(DAT_140c61b58,local_48);
    return;
}



int FUN_140827b80(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined4 local_20;
    longlong local_18;

    puVar3 = (undefined8 *)0x0;
    if (param_6 != 0) {
        local_28 = 0;
        local_20 = 0;
        local_18 = FUN_140827170(param_6,param_7);
        if (local_18 == 0) {
            return 0;
        }
        puVar3 = &local_28;
    }
    lVar1 = local_18;
    iVar2 = FUN_140827c50(param_1,param_2,param_3,param_4,param_5,puVar3,param_8);
    if ((iVar2 == 0) && (param_6 != 0)) {
        FUN_140828460(lVar1);
    }
    return iVar2;
}



int FUN_140827c50(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
    undefined2 uVar1;
    int iVar2;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    int local_38;
    undefined4 local_34;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    longlong *local_18;

    local_46 = 1;
    if (param_6 == (undefined8 *)0x0) {
        local_20 = 0;
        local_30 = 0;
        local_28 = local_28 & 0xffffffff00000000;
    }
    else {
        local_30 = *param_6;
        local_28 = param_6[1];
        local_20 = param_6[2];
    }
    local_18 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x12a8,param_1);
    if (local_18 != (longlong *)0x0) {
        LOCK();
        local_34 = param_7;
        local_38 = DAT_140c61b54 + 1;
        DAT_140c61b54 = DAT_140c61b54 + 1;
        local_40 = param_2;
        iVar2 = FUN_14083b380(DAT_140c61b80,&local_40,param_4,param_5,param_3,
                              *(undefined4 *)(local_18 + 3));
        if (iVar2 == 1) {
            uVar1 = FUN_14082ee90();
            FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
            return local_38;
        }
        (**(code **)(*local_18 + 0x10))();
    }
    return 0;
}



void FUN_140827d60(undefined4 param_1,undefined8 param_2)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    undefined4 local_38;

    local_46 = 10;
    local_40 = param_2;
    local_38 = param_1;
    uVar1 = FUN_140055bd0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140827da0(undefined8 *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong local_res8;

    iVar1 = 1;
    QueryPerformanceFrequency(&local_res8);
    _DAT_140c61fe8 = (float)(local_res8 / 1000);
    if (DAT_140c61ba8 == 0) {
        lVar2 = FUN_1408819f0(DAT_140c10f20,0x4468);
        if (lVar2 == 0) {
            DAT_140c61ba8 = 0;
        }
        else {
            DAT_140c61ba8 = FUN_140826e10(lVar2);
            if (DAT_140c61ba8 != 0) {
                FUN_140830f20(DAT_140c61ba8);
                goto LAB_140827e32;
            }
        }
    }
    else {
        LAB_140827e32:
        if (DAT_140c61bb0 == 0) {
            lVar2 = FUN_1408819f0(DAT_140c10f20,0x1298);
            if (lVar2 == 0) {
                DAT_140c61bb0 = 0;
            }
            else {
                DAT_140c61bb0 = FUN_1408351c0(lVar2);
                if (DAT_140c61bb0 != 0) {
                    iVar1 = FUN_140836cf0(DAT_140c61bb0);
                    if (iVar1 != 1) goto LAB_140828159;
                    goto LAB_140827e80;
                }
            }
        }
        else {
            LAB_140827e80:
            if (DAT_140c61b90 == 0) {
                DAT_140c61b90 = FUN_1408819f0(DAT_140c10f20,0x48);
                if (DAT_140c61b90 == 0) {
                    DAT_140c61b90 = 0;
                    goto LAB_140828154;
                }
                *(undefined8 *)(DAT_140c61b90 + 8) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x10) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x18) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x20) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x28) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x30) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x38) = 0;
                *(undefined8 *)(DAT_140c61b90 + 0x40) = 0;
                iVar1 = FUN_140845110(DAT_140c61b90);
                if (iVar1 != 1) goto LAB_140828159;
            }
            if (DAT_140c61b58 == 0) {
                lVar2 = FUN_1408819f0(DAT_140c10f20,0x968);
                if (lVar2 == 0) {
                    DAT_140c61b58 = 0;
                }
                else {
                    DAT_140c61b58 = FUN_14083de30(lVar2);
                    if (DAT_140c61b58 != 0) {
                        iVar1 = FUN_14083ee50(DAT_140c61b58);
                        if (iVar1 != 1) goto LAB_140828159;
                        goto LAB_140827f29;
                    }
                }
            }
            else {
                LAB_140827f29:
                if (DAT_140c61b80 == 0) {
                    lVar2 = FUN_1408819f0(DAT_140c10f20,0x170);
                    if (lVar2 == 0) {
                        DAT_140c61b80 = 0;
                    }
                    else {
                        DAT_140c61b80 = FUN_140826f10(lVar2);
                        if (DAT_140c61b80 != 0) {
                            iVar1 = FUN_14083b790(DAT_140c61b80);
                            if (iVar1 != 1) goto LAB_140828159;
                            goto LAB_140827f76;
                        }
                    }
                }
                else {
                    LAB_140827f76:
                    if (DAT_140c61b60 == 0) {
                        lVar2 = FUN_1408819f0(DAT_140c10f20,0x48);
                        if (lVar2 == 0) {
                            DAT_140c61b60 = 0;
                        }
                        else {
                            DAT_140c61b60 = FUN_14088c4e0(lVar2);
                            if (DAT_140c61b60 != 0) {
                                iVar1 = FUN_140845440(DAT_140c61b60);
                                if (iVar1 != 1) goto LAB_140828159;
                                goto LAB_140827fc3;
                            }
                        }
                    }
                    else {
                        LAB_140827fc3:
                        if (DAT_140c61ba0 == 0) {
                            lVar2 = FUN_1408819f0(DAT_140c10f20,0x648);
                            if (lVar2 == 0) {
                                DAT_140c61ba0 = 0;
                            }
                            else {
                                DAT_140c61ba0 = FUN_140830170(lVar2);
                                if (DAT_140c61ba0 != 0) {
                                    iVar1 = FUN_1408303c0(DAT_140c61ba0);
                                    if (iVar1 != 1) goto LAB_140828159;
                                    goto LAB_140828010;
                                }
                            }
                        }
                        else {
                            LAB_140828010:
                            if (DAT_140c61b70 == 0) {
                                lVar2 = FUN_1408819f0(DAT_140c10f20,0x38);
                                if (lVar2 == 0) {
                                    DAT_140c61b70 = 0;
                                }
                                else {
                                    DAT_140c61b70 = FUN_14083a940(lVar2);
                                    if (DAT_140c61b70 != 0) {
                                        iVar1 = FUN_14083ae30(DAT_140c61b70,DAT_140c61b0c);
                                        if (iVar1 != 1) goto LAB_140828159;
                                        goto LAB_140828063;
                                    }
                                }
                            }
                            else {
                                LAB_140828063:
                                if (DAT_140c61b98 == 0) {
                                    lVar2 = FUN_1408819f0(DAT_140c10f20,0x20);
                                    if (lVar2 == 0) {
                                        DAT_140c61b98 = 0;
                                    }
                                    else {
                                        DAT_140c61b98 = FUN_14083a3e0(lVar2);
                                        if (DAT_140c61b98 != 0) {
                                            iVar1 = FUN_14083a540(DAT_140c61b98,DAT_140c61b08);
                                            if (iVar1 != 1) goto LAB_140828159;
                                            goto LAB_1408280b6;
                                        }
                                    }
                                }
                                else {
                                    LAB_1408280b6:
                                    if (DAT_140c61b78 != 0) goto LAB_140828159;
                                    lVar2 = FUN_1408819f0(DAT_140c10f20,0xc0);
                                    if (lVar2 == 0) {
                                        DAT_140c61b78 = 0;
                                    }
                                    else {
                                        DAT_140c61b78 = FUN_140829b70(lVar2);
                                        if (DAT_140c61b78 != 0) {
                                            iVar1 = FUN_14082a280(DAT_140c61b78);
                                            goto LAB_140828159;
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
    LAB_140828154:
    iVar1 = 0x34;
    LAB_140828159:
    if (param_1 != (undefined8 *)0x0) {
        *param_1 = DAT_140c61b00;
        param_1[1] = CONCAT44(DAT_140c61b0c,DAT_140c61b08);
        param_1[2] = DAT_140c61b10;
        param_1[3] = _DAT_140c61b18;
        param_1[4] = DAT_140c61b20;
        param_1[5] = DAT_140c61b28;
    }
    return iVar1;
}



int FUN_1408281c0(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    int local_28 [2];
    HANDLE local_20;

    local_20 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (local_20 == (HANDLE)0x0) {
        return 2;
    }
    iVar1 = FUN_1408282b0(param_1,&LAB_1408272d0,local_28,param_2,param_3,1);
    if (iVar1 == 1) {
        WaitForSingleObject(local_20,0xffffffff);
        if (local_20 != (HANDLE)0x0) {
            CloseHandle(local_20);
        }
    }
    else {
        local_28[0] = iVar1;
        if (local_20 != (HANDLE)0x0) {
            CloseHandle(local_20);
            return iVar1;
        }
    }
    return local_28[0];
}



void FUN_140828280(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    FUN_1408282b0(param_1,param_4,param_5,param_2,param_3,1);
    return;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1408282b0(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint param_5,
                  char param_6)

{
    int iVar1;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined8 uStack96;
    int local_48 [2];
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    uint local_28;
    undefined4 uStack32;
    undefined4 uStack28;

    if (param_5 == 0) {
        return 0x1f;
    }
    local_48[0] = (param_1 != 0) + 2;
    if (param_5 == 1) {
        uStack96 = (uint *)((ulonglong)uStack96 & 0xffffffff00000000 | (ulonglong)*param_4);
    }
    else {
        uStack96 = param_4;
        if (param_6 != '\0') {
            uStack96 = (uint *)FUN_1408819f0(DAT_140c10f20,(ulonglong)param_5 << 2);
            if (uStack96 == (uint *)0x0) {
                return 0x34;
            }
            FUN_1407db590(uStack96,param_4,(ulonglong)param_5 << 2);
        }
    }
    uStack128 = (undefined4)param_2;
    uStack124 = (undefined4)((ulonglong)param_2 >> 0x20);
    local_78 = (undefined4)param_3;
    uStack116 = (undefined4)((ulonglong)param_3 >> 0x20);
    uStack64 = uStack128;
    uStack60 = uStack124;
    local_38 = local_78;
    uStack52 = uStack116;
    uStack48 = 0;
    local_28 = param_5;
    uStack32 = (undefined4)uStack96;
    uStack28 = uStack96._4_4_;
    iVar1 = FUN_140841990(DAT_140c61b58,local_48);
    if ((iVar1 != 1) && (param_5 != 1)) {
        FUN_140881720(DAT_140c10f20,uStack96);
    }
    return iVar1;
}



int thunk_FUN_14082fdc0(int param_1,int param_2,longlong param_3,longlong param_4)

{
    uint uVar1;
    int *piVar2;
    char cVar3;
    int *piVar4;
    longlong *plVar5;
    int iVar6;

    iVar6 = (param_2 * 0x1000 + param_1) * 0x10 + 1;
    piVar4 = DAT_140c61c20;
    if (DAT_140c61c20 != DAT_140c61c28) {
        do {
            if (*piVar4 == iVar6) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c28);
    }
    if ((piVar4 != DAT_140c61c28) && (piVar4 != (int *)&DAT_fffffffffffffff8)) {
        return 2;
    }
    if ((param_3 == 0) || (param_4 == 0)) {
        return 0x1f;
    }
    piVar4 = DAT_140c61c20;
    if (DAT_140c61c20 != DAT_140c61c28) {
        do {
            if (*piVar4 == iVar6) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c28);
    }
    if (piVar4 == DAT_140c61c28) {
        plVar5 = (longlong *)0x0;
    }
    else {
        plVar5 = (longlong *)(piVar4 + 2);
        if (plVar5 != (longlong *)0x0) {
            *plVar5 = param_3;
            *(longlong *)(piVar4 + 4) = param_4;
            return 2 - (uint)(plVar5 != (longlong *)0x0);
        }
    }
    uVar1 = (uint)(((longlong)DAT_140c61c28 - (longlong)DAT_140c61c20) / 0x18);
    if ((((uVar1 < DAT_140c61c30) ||
          (cVar3 = FUN_14082fcd0(&DAT_140c61c20), piVar4 = DAT_140c61c28, cVar3 != '\0')) &&
         (piVar2 = DAT_140c61c28, piVar4 = DAT_140c61c28, uVar1 < DAT_140c61c30)) &&
        (piVar4 = DAT_140c61c28 + 6, DAT_140c61c28 != (int *)0x0)) {
        plVar5 = (longlong *)(DAT_140c61c28 + 2);
        *DAT_140c61c28 = iVar6;
        DAT_140c61c28 = piVar4;
        *plVar5 = param_3;
        *(longlong *)(piVar2 + 4) = param_4;
        piVar4 = DAT_140c61c28;
    }
    DAT_140c61c28 = piVar4;
    return 2 - (uint)(plVar5 != (longlong *)0x0);
}



undefined8 FUN_140828400(longlong param_1)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    longlong local_40;
    undefined8 local_38;

    if (param_1 - 1U < 0xfffffffffffffffe) {
        local_38 = 0;
        local_46 = 0xb;
        local_40 = param_1;
        uVar1 = FUN_140055bd0();
        uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
        return uVar2;
    }
    return 2;
}



int thunk_FUN_14082ff40(uint param_1,int param_2,int param_3,longlong param_4,longlong param_5)

{
    uint uVar1;
    int *piVar2;
    char cVar3;
    int *piVar4;
    int iVar5;
    longlong *plVar6;

    iVar5 = (param_3 * 0x1000 + param_2) * 0x10 + (param_1 & 0xf);
    piVar4 = DAT_140c61c08;
    if (DAT_140c61c08 != DAT_140c61c10) {
        do {
            if (*piVar4 == iVar5) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c10);
    }
    if ((piVar4 != DAT_140c61c10) && (piVar4 != (int *)&DAT_fffffffffffffff8)) {
        return 2;
    }
    if ((param_4 == 0) || (param_5 == 0)) {
        return 0x1f;
    }
    piVar4 = DAT_140c61c08;
    if (DAT_140c61c08 != DAT_140c61c10) {
        do {
            if (*piVar4 == iVar5) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c10);
    }
    if (piVar4 == DAT_140c61c10) {
        plVar6 = (longlong *)0x0;
    }
    else {
        plVar6 = (longlong *)(piVar4 + 2);
        if (plVar6 != (longlong *)0x0) {
            *plVar6 = param_4;
            *(longlong *)(piVar4 + 4) = param_5;
            return 2 - (uint)(plVar6 != (longlong *)0x0);
        }
    }
    uVar1 = (uint)(((longlong)DAT_140c61c10 - (longlong)DAT_140c61c08) / 0x18);
    if ((((uVar1 < DAT_140c61c18) ||
          (cVar3 = FUN_14082fcd0(&DAT_140c61c08), piVar4 = DAT_140c61c10, cVar3 != '\0')) &&
         (piVar2 = DAT_140c61c10, piVar4 = DAT_140c61c10, uVar1 < DAT_140c61c18)) &&
        (piVar4 = DAT_140c61c10 + 6, DAT_140c61c10 != (int *)0x0)) {
        plVar6 = (longlong *)(DAT_140c61c10 + 2);
        *DAT_140c61c10 = iVar5;
        DAT_140c61c10 = piVar4;
        *plVar6 = param_4;
        *(longlong *)(piVar2 + 4) = param_5;
        piVar4 = DAT_140c61c10;
    }
    DAT_140c61c10 = piVar4;
    return 2 - (uint)(plVar6 != (longlong *)0x0);
}



void FUN_140828460(int *param_1)

{
    uint uVar1;

    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
        uVar1 = 0;
        if (param_1[1] != 0) {
            do {
                if (*(longlong *)(param_1 + (ulonglong)uVar1 * 8 + 4) != 0) {
                    FUN_140881720(DAT_140c10f20);
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 < (uint)param_1[1]);
        }
        FUN_140881720(DAT_140c10f20,param_1);
    }
    return;
}



undefined8 FUN_1408284c0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = DAT_140c61be0;
    if (DAT_140c61be0 != DAT_140c61be8) {
        do {
            if (*plVar2 == param_1) break;
            plVar2 = plVar2 + 1;
        } while (plVar2 != DAT_140c61be8);
        if (plVar2 != DAT_140c61be8) {
            if (plVar2 < DAT_140c61be8 + -1) {
                plVar3 = plVar2;
                for (lVar1 = ((ulonglong)((longlong)(DAT_140c61be8 + -1) + (-1 - (longlong)plVar2)) >> 3) +
                             1; plVar2 = plVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
                    *plVar3 = *plVar2;
                    plVar3 = plVar3 + 1;
                }
            }
            DAT_140c61be8 = DAT_140c61be8 + -1;
            return 1;
        }
    }
    return 2;
}



undefined8 FUN_140828530(void)

{
    int *piVar1;
    bool bVar2;
    LPCRITICAL_SECTION lpCriticalSection;
    undefined4 local_48 [16];

    lpCriticalSection = DAT_140c61b68;
    EnterCriticalSection(DAT_140c61b68);
    if (((*(int *)((longlong)&lpCriticalSection[1].LockSemaphore + 4) ==
          *(int *)((longlong)&lpCriticalSection[1].SpinCount + 4)) &&
         (*(int *)&lpCriticalSection[1].SpinCount == *(int *)&lpCriticalSection[2].DebugInfo)) &&
        (*(char *)((longlong)&lpCriticalSection[2].DebugInfo + 4) == '\0')) {
        bVar2 = true;
    }
    else {
        bVar2 = false;
    }
    if (!bVar2) {
        local_48[0] = 8;
        FUN_14082c0f0(lpCriticalSection,local_48,8);
        piVar1 = (int *)((longlong)&lpCriticalSection[4].SpinCount + 4);
        *piVar1 = *piVar1 + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (!bVar2) {
        FUN_140856280(&lpCriticalSection[5].LockCount);
    }
    return 1;
}



undefined8 FUN_140828540(undefined8 param_1,float param_2,undefined8 param_3)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    float local_38;

    if (param_2 <= 0.0) {
        return 0x1f;
    }
    local_46 = 0x21;
    local_40 = param_3;
    local_38 = param_2;
    uVar1 = FUN_140055bd0();
    uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return uVar2;
}



undefined8 FUN_140828590(undefined8 param_1,undefined8 param_2,uint param_3)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    uint local_38;
    undefined local_34 [52];

    if (4 < param_3) {
        return 0x1f;
    }
    local_46 = 0x12;
    local_40 = param_1;
    local_38 = param_3;
    FUN_1407db590(local_34,param_2,param_3 * 8);
    uVar1 = FUN_14082ee90();
    uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return uVar2;
}



void FUN_1408285f0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    undefined4 local_38;

    local_46 = 0x13;
    local_40 = param_3;
    local_38 = param_2;
    uVar1 = FUN_140055bd0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



void FUN_140828630(float *param_1,undefined4 param_2)

{
    undefined2 uVar1;
    float fVar2;
    undefined local_48 [2];
    undefined2 local_46;
    undefined4 local_40;
    float local_3c;
    float local_38;
    float local_34;
    float local_30;
    float local_2c;
    float local_28;
    float local_24;
    float local_20;
    float local_1c;

    local_46 = 0x10;
    fVar2 = (float)FUN_140829590(param_1,param_1 + 3);
    local_3c = *param_1 - fVar2 * param_1[3];
    local_38 = param_1[1] - fVar2 * param_1[4];
    local_34 = param_1[2] - fVar2 * param_1[5];
    local_30 = param_1[3];
    local_2c = param_1[4];
    local_28 = param_1[5];
    FUN_140829630(&local_3c);
    FUN_140829630(&local_30);
    local_24 = param_1[6];
    local_20 = param_1[7];
    local_1c = param_1[8];
    local_40 = param_2;
    uVar1 = FUN_1406f2420();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



undefined8 FUN_140828720(undefined8 param_1,float param_2,undefined4 param_3)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    undefined4 local_40;
    float local_3c;

    if (param_2 <= 0.0) {
        return 0x1f;
    }
    local_46 = 0x23;
    local_40 = param_3;
    local_3c = param_2;
    uVar1 = FUN_1403b55d0();
    uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140828770(short param_1,int param_2)

{
    if (param_1 == 0) {
        return 0x1f;
    }
    if (param_2 <= _DAT_140c10f1c) {
        _DAT_140c10f1c = param_2;
        DAT_140c10f48 = param_1;
    }
    return 1;
}



undefined8 FUN_1408287a0(undefined8 param_1,longlong param_2,ushort param_3,int param_4)

{
    longlong lVar1;
    ushort uVar2;
    uint uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    uint uVar6;
    undefined8 auStack64 [5];

    if ((param_4 < 3) && ((param_3 == 0 || (param_2 != 0)))) {
        auStack64[0] = 0x1408287ed;
        uVar2 = FUN_140055bd0();
        uVar6 = (uint)uVar2 + ((uint)param_3 + (uint)param_3 * 2) * 8;
        auStack64[0] = 0x1408287fc;
        uVar3 = FUN_140829790();
        if (uVar3 < uVar6) {
            uVar4 = 2;
        }
        else {
            uVar5 = (ulonglong)uVar6 + 0xf;
            if (uVar5 <= uVar6) {
                uVar5 = 0xffffffffffffff0;
            }
            uVar5 = uVar5 & 0xfffffffffffffff0;
            auStack64[0] = 0x14082882d;
            FUN_1407f0f60();
            lVar1 = -uVar5;
            if (&stack0xffffffffffffffe8 + lVar1 != (undefined *)0x0) {
                *(undefined2 *)(&stack0xffffffffffffffea + lVar1) = 0x22;
            }
            uVar5 = 0;
            *(int *)(&stack0xfffffffffffffffc + lVar1) = param_4;
            *(undefined8 *)(&stack0xfffffffffffffff0 + lVar1) = param_1;
            *(ushort *)(&stack0xfffffffffffffff8 + lVar1) = param_3;
            if (param_3 != 0) {
                do {
                    uVar2 = (short)uVar5 + 1;
                    *(undefined4 *)(&stack0x00000000 + uVar5 * 0x18 + lVar1) =
                            *(undefined4 *)(param_2 + uVar5 * 0x18);
                    *(undefined4 *)(&stack0x00000004 + uVar5 * 0x18 + lVar1) =
                            *(undefined4 *)(param_2 + 4 + uVar5 * 0x18);
                    *(undefined4 *)(&stack0x00000008 + uVar5 * 0x18 + lVar1) =
                            *(undefined4 *)(param_2 + 8 + uVar5 * 0x18);
                    *(undefined4 *)(&stack0x0000000c + uVar5 * 0x18 + lVar1) =
                            *(undefined4 *)(param_2 + 0xc + uVar5 * 0x18);
                    *(undefined4 *)(&stack0x00000010 + uVar5 * 0x18 + lVar1) =
                            *(undefined4 *)(param_2 + 0x10 + uVar5 * 0x18);
                    *(undefined4 *)(&stack0x00000014 + uVar5 * 0x18 + lVar1) =
                            *(undefined4 *)(param_2 + 0x14 + uVar5 * 0x18);
                    uVar5 = (ulonglong)uVar2;
                } while (uVar2 < param_3);
            }
            *(undefined8 *)((longlong)auStack64 + lVar1) = 0x1408288b2;
            uVar4 = FUN_14082bb30(DAT_140c61b68,&stack0xffffffffffffffe8 + lVar1,uVar6);
        }
    }
    else {
        uVar4 = 0x1f;
    }
    return uVar4;
}



void FUN_1408288e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 param_6)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;

    local_46 = 0x14;
    local_40 = param_5;
    local_38 = param_6;
    local_34 = param_3;
    local_30 = param_4;
    uVar1 = FUN_14082eea0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



undefined8 FUN_140828930(longlong param_1,undefined4 *param_2)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    longlong local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined8 local_28;

    if (param_1 == 0) {
        return 2;
    }
    local_38 = *param_2;
    uStack52 = param_2[1];
    uStack48 = param_2[2];
    uStack44 = param_2[3];
    local_28 = *(undefined8 *)(param_2 + 4);
    local_46 = 0xd;
    local_40 = param_1;
    uVar1 = FUN_1402d5bd0();
    uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return uVar2;
}



void FUN_140828990(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5_00,int param_6,undefined4 param_5)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined4 local_40;
    undefined4 local_3c;
    undefined8 local_38;
    int local_30;
    undefined4 local_2c;

    local_40 = param_3;
    local_3c = param_2;
    local_38 = param_5_00;
    if (param_6 == 0) {
        local_46 = 2;
        uVar1 = FUN_140055bd0();
    }
    else {
        local_46 = 3;
        local_2c = param_5;
        local_30 = param_6;
        uVar1 = FUN_14082eea0();
    }
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



void FUN_140828a00(undefined4 param_1,int param_2)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined4 local_40;
    int local_3c;
    undefined2 local_38;

    local_46 = 7;
    local_3c = param_2;
    if (param_2 == 0x2ca33bdb) {
        local_3c = 0;
    }
    local_38 = 0;
    local_40 = param_1;
    uVar1 = FUN_140783020();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



void FUN_140828a50(undefined4 param_1,int param_2,undefined param_3,undefined param_4)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined4 local_40;
    int local_3c;
    undefined local_38;
    undefined local_37;

    local_46 = 7;
    local_3c = param_2;
    if (param_2 == 0x2ca33bdb) {
        local_3c = 0;
    }
    local_40 = param_1;
    local_38 = param_3;
    local_37 = param_4;
    uVar1 = FUN_140783020();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



void FUN_140828aa0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 local_34;

    local_46 = 8;
    local_40 = param_3;
    local_38 = param_1;
    local_34 = param_2;
    uVar1 = FUN_140055bd0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140828ae0(float param_1,undefined8 param_2,int param_3)

{
    float fVar1;
    uint uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    if ((param_1 < -96.3) || (fVar4 = 0.0, 0.0 < param_1)) {
        return 0x1f;
    }
    if (param_3 <= _DAT_140c10f18) {
        fVar5 = 0.05;
        fVar6 = param_1 * 0.05;
        _DAT_140c10f18 = param_3;
        fVar3 = (float)FUN_1408fbfc0(0x41200000,fVar6);
        fVar1 = fVar4;
        if (-37.0 <= fVar6) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar2 = (uint)(longlong)(fVar6 * DAT_140c61bf8 + 1.065353e+09);
            fVar1 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar1 = ((fVar1 * 0.3251898 + 0.02080577) * fVar1 + 0.6530434) * (float)(uVar2 & 0xff800000);
        }
        if (-37.0 <= param_1 * fVar5) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar2 = (uint)(longlong)(DAT_140c61bf8 * param_1 * fVar5 + 1.065353e+09);
            fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar4 = ((fVar4 * 0.3251898 + 0.02080577) * fVar4 + 0.6530434) * (float)(uVar2 & 0xff800000);
        }
        if ((-37.0 <= param_1 * fVar5) && ((DAT_140c61bfc & 1) == 0)) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        if ((-37.0 <= param_1 * fVar5) && ((DAT_140c61bfc & 1) == 0)) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        if ((-37.0 <= param_1 * fVar5) && ((DAT_140c61bfc & 1) == 0)) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        if ((-37.0 <= param_1 * fVar5) && ((DAT_140c61bfc & 1) == 0)) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        if ((-37.0 <= param_1 * fVar5) && ((DAT_140c61bfc & 1) == 0)) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        if (fVar3 <= fVar1) {
            fVar3 = fVar1;
        }
        DAT_140c10f58 = fVar4;
        DAT_140c10f5c = param_1;
        if (fVar4 < fVar3) {
            DAT_140c10f58 = fVar3;
            return 1;
        }
    }
    return 1;
}



int FUN_140828df0(longlong param_1)

{
    undefined2 uVar1;
    int iVar2;
    longlong lVar3;
    undefined local_48 [2];
    undefined2 local_46;
    longlong local_40;
    undefined local_38;
    longlong lVar4;

    if (param_1 == 0) {
        return 0x1f;
    }
    local_46 = 0x26;
    lVar3 = -1;
    do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
    } while (*(short *)(param_1 + lVar3 * 2) != 0);
    lVar3 = (lVar4 + 2) * 2;
    local_40 = FUN_1408819f0(DAT_140c10f20,lVar3);
    if (local_40 == 0) {
        return 0x34;
    }
    FUN_1407db590(local_40,param_1,lVar3);
    local_38 = 0;
    uVar1 = FUN_140055bd0();
    iVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    if (iVar2 != 1) {
        FUN_140881720(DAT_140c10f20,local_40);
    }
    return iVar2;
}



void FUN_140828eb0(undefined8 param_1)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;

    local_46 = 0x19;
    local_40 = param_1;
    uVar1 = FUN_1403b55d0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



void FUN_140828ef0(void)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    undefined8 local_40;

    local_40 = 0;
    local_46 = 0x26;
    uVar1 = FUN_140055bd0();
    FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return;
}



void FUN_140828f30(int param_1,undefined4 param_2,undefined4 param_3)

{
    undefined2 uVar1;
    undefined local_48 [2];
    undefined2 local_46;
    int local_40;
    undefined4 local_3c;
    undefined4 local_38;

    if (param_1 != 0) {
        local_46 = 0x1f;
        local_40 = param_1;
        local_3c = param_2;
        local_38 = param_3;
        uVar1 = FUN_140783020();
        FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    }
    return;
}



void FUN_140828f70(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c61fe0 != 0) {
        FUN_1408468b0();
    }
    if (DAT_140c61b68 != 0) {
        FUN_14082ef00();
    }
    if (DAT_140c61b58 != 0) {
        FUN_1408427e0();
    }
    FUN_140833b90();
    iVar1 = (int)(DAT_140c61be8 - DAT_140c61be0 >> 3) + -1;
    lVar2 = (longlong)iVar1;
    if (-1 < iVar1) {
        do {
            (**(code **)(DAT_140c61be0 + lVar2 * 8))(1);
            lVar2 = lVar2 + -1;
        } while (-1 < lVar2);
    }
    if (DAT_140c61be0 != 0) {
        DAT_140c61be8 = DAT_140c61be0;
        FUN_140881720(DAT_140c10f20);
        DAT_140c61be0 = 0;
        DAT_140c61be8 = 0;
        DAT_140c61bf0 = 0;
    }
    FUN_140844bb0();
    if (DAT_140c61b68 != 0) {
        FUN_14082f950();
        lVar2 = DAT_140c61b68;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b68 != 0) {
            FUN_14082b430(DAT_140c61b68);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b68 = 0;
    }
    if (DAT_140c61b58 != 0) {
        FUN_1408428e0();
        lVar2 = DAT_140c61b58;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b58 != 0) {
            FUN_14083dee0(DAT_140c61b58);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b58 = 0;
    }
    if (DAT_140c61ba8 != 0) {
        FUN_1408311f0();
    }
    if (DAT_140c61b78 != 0) {
        FUN_14082ae90();
        lVar2 = DAT_140c61b78;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b78 != 0) {
            FUN_140829bd0(DAT_140c61b78);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b78 = 0;
    }
    if (DAT_140c61b98 != 0) {
        FUN_14083a8b0();
        lVar2 = DAT_140c61b98;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b98 != 0) {
            FUN_140001b70(DAT_140c61b98);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b98 = 0;
    }
    if (DAT_140c61b70 != 0) {
        FUN_14083b0e0();
        lVar2 = DAT_140c61b70;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b70 != 0) {
            FUN_140001b70(DAT_140c61b70);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b70 = 0;
    }
    if (DAT_140c61ba0 != 0) {
        FUN_140830bb0();
        lVar2 = DAT_140c61ba0;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61ba0 != 0) {
            FUN_140001b70(DAT_140c61ba0);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61ba0 = 0;
    }
    if (DAT_140c61b80 != 0) {
        FUN_140001b70();
        lVar2 = DAT_140c61b80;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b80 != 0) {
            FUN_14083b1c0(DAT_140c61b80 + 0x130);
            if (*(HANDLE *)(lVar2 + 0x128) != (HANDLE)0x0) {
                CloseHandle(*(HANDLE *)(lVar2 + 0x128));
            }
            DeleteCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x100));
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b80 = 0;
    }
    if (DAT_140c61b60 != 0) {
        FUN_14088c760();
        lVar2 = DAT_140c61b60;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61b60 != 0) {
            DeleteCriticalSection((LPCRITICAL_SECTION)(DAT_140c61b60 + 0x18));
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61b60 = 0;
    }
    if (DAT_140c61b90 != 0) {
        FUN_140845200();
        if (DAT_140c61b90 != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        DAT_140c61b90 = 0;
    }
    if (DAT_140c61bb0 != 0) {
        FUN_140838960();
        lVar2 = DAT_140c61bb0;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61bb0 != 0) {
            FUN_140001b70(DAT_140c61bb0);
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61bb0 = 0;
    }
    if (DAT_140c61ba8 != 0) {
        FUN_140001b70();
        lVar2 = DAT_140c61ba8;
        iVar1 = DAT_140c10f20;
        if (DAT_140c61ba8 != 0) {
            FUN_140826f50();
            FUN_140881720(iVar1,lVar2);
        }
        DAT_140c61ba8 = 0;
    }
    if (DAT_140c61be0 != 0) {
        DAT_140c61be8 = DAT_140c61be0;
        FUN_140881720();
        DAT_140c61be0 = 0;
        DAT_140c61be8 = 0;
        DAT_140c61bf0 = 0;
    }
    if (DAT_140c10f20 != -1) {
        FUN_140881dd0();
        DAT_140c10f20 = -1;
    }
    DAT_140c61b50 = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_140829340(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
    int iVar1;
    int local_98 [2];
    HANDLE local_90;
    undefined4 local_88;
    undefined4 local_80;
    undefined4 uStack124;
    undefined *puStack120;
    undefined8 local_70;
    undefined4 uStack104;
    undefined4 uStack100;
    undefined4 local_60;
    undefined4 uStack92;
    undefined8 uStack88;
    undefined4 local_50;
    uint uStack76;
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
    longlong local_18;

    local_90 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (local_90 == (HANDLE)0x0) {
        local_98[0] = 2;
    }
    else {
        local_80 = 1;
        puStack120 = &LAB_1408272d0;
        local_70 = local_98;
        uStack104 = 1;
        uStack92 = 0xffffffff;
        local_48 = 1;
        uStack68 = uStack124;
        uStack64 = 0x408272d0;
        uStack60 = 1;
        local_70._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
        local_50 = 0;
        local_38 = (undefined4)local_70;
        uStack52 = local_70._4_4_;
        uStack48 = 1;
        uStack44 = uStack100;
        uStack88._0_4_ = (undefined4)param_2;
        uStack88._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
        local_18 = (ulonglong)uStack76 << 0x20;
        uStack36 = 0xffffffff;
        uStack32 = (undefined4)uStack88;
        uStack28 = uStack88._4_4_;
        local_60 = param_1;
        uStack88 = param_2;
        local_28 = param_1;
        iVar1 = FUN_140841990(DAT_140c61b58,&local_48);
        if (iVar1 == 1) {
            WaitForSingleObject(local_90,0xffffffff);
            if (local_90 != (HANDLE)0x0) {
                CloseHandle(local_90);
            }
        }
        else {
            local_98[0] = iVar1;
            if (local_90 != (HANDLE)0x0) {
                CloseHandle(local_90);
            }
        }
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = local_88;
        }
    }
    return local_98[0];
}



undefined8 FUN_140829450(longlong param_1)

{
    undefined2 uVar1;
    undefined8 uVar2;
    undefined local_48 [2];
    undefined2 local_46;
    longlong local_40;

    if (param_1 == 0) {
        return 2;
    }
    local_46 = 0xc;
    local_40 = param_1;
    uVar1 = FUN_1403b55d0();
    uVar2 = FUN_14082bb30(DAT_140c61b68,local_48,uVar1);
    return uVar2;
}



undefined8 FUN_1408294a0(undefined8 param_1)

{
    undefined8 uVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    uVar1 = FUN_140843d00(param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    return uVar1;
}



float * FUN_1408294f0(float *param_1,float *param_2,float *param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;

    fVar1 = param_3[2];
    fVar2 = *param_3;
    fVar3 = *param_2;
    fVar4 = param_3[1];
    *param_1 = fVar1 * param_2[1] - param_3[1] * param_2[2];
    fVar5 = param_2[1];
    param_1[1] = fVar2 * param_2[2] - fVar3 * fVar1;
    param_1[2] = fVar3 * fVar4 - fVar2 * fVar5;
    return param_1;
}



void FUN_140829550(float *param_1,float *param_2)

{
    float fVar1;
    undefined auVar2 [16];

    auVar2 = ZEXT416((uint)(param_1[2] - param_2[2])) & (undefined  [16])0xffffffffffffffff;
    fVar1 = SUB164(auVar2,0);
    fVar1 = fVar1 * fVar1;
    sqrtps(CONCAT124(SUB1612(auVar2 >> 0x20,0),fVar1),
           ZEXT416((uint)((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                          (*param_1 - *param_2) * (*param_1 - *param_2) + fVar1)));
    return;
}



float FUN_140829590(float *param_1,float *param_2)

{
    return param_1[1] * param_2[1] + *param_1 * *param_2 + param_1[2] * param_2[2];
}



ulonglong FUN_1408295c0(float param_1,ulonglong param_2,float param_3,ulonglong param_4)

{
    float in_stack_00000028;

    if (in_stack_00000028 <= param_1) {
        return param_2;
    }
    if (param_3 <= in_stack_00000028) {
        return param_4;
    }
    return (ulonglong)
            (uint)(((in_stack_00000028 - param_1) / (param_3 - param_1)) *
                   ((float)param_4 - (float)param_2) + (float)param_2);
}



void FUN_140829600(float *param_1)

{
    undefined auVar1 [16];

    auVar1 = ZEXT416((uint)(param_1[1] * param_1[1])) & (undefined  [16])0xffffffffffffffff;
    sqrtps(auVar1,ZEXT416((uint)(*param_1 * *param_1 + SUB164(auVar1,0) + param_1[2] * param_1[2])));
    return;
}



void FUN_140829630(float *param_1)

{
    float fVar1;
    float fVar2;
    float fVar3;
    undefined auVar4 [16];
    float fVar5;

    fVar1 = param_1[1];
    fVar2 = *param_1;
    fVar3 = param_1[2];
    auVar4 = ZEXT416((uint)(fVar3 * fVar3)) & (undefined  [16])0xffffffffffffffff;
    auVar4 = sqrtps(auVar4,ZEXT416((uint)(fVar2 * fVar2 + fVar1 * fVar1 + SUB164(auVar4,0))));
    if (SUB164(auVar4,0) != 0.0) {
        fVar5 = 1.0 / SUB164(auVar4,0);
        param_1[2] = fVar5 * fVar3;
        *param_1 = fVar5 * fVar2;
        param_1[1] = fVar5 * fVar1;
    }
    return;
}



float FUN_1408296a0(float param_1)

{
    return (param_1 - (float)(int)(param_1 * 0.002777778)) * 0.01745329;
}



longlong FUN_1408296d0(longlong *param_1)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar1 = *(uint *)((longlong)param_1 + 0x1c);
    lVar2 = *param_1;
    if (*(uint *)(param_1 + 4) < *(uint *)(lVar2 + 8 + (ulonglong)uVar1 * 0x10)) {
        return (ulonglong)*(uint *)(param_1 + 4) + *(longlong *)(lVar2 + (ulonglong)uVar1 * 0x10);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    uVar3 = (ulonglong)(uVar1 + 1);
    if ((uint)(param_1[1] - lVar2 >> 4) <= uVar1 + 1) {
        uVar3 = 0;
    }
    *(int *)((longlong)param_1 + 0x1c) = (int)uVar3;
    return *(longlong *)(lVar2 + uVar3 * 0x10);
}



longlong FUN_140829720(longlong *param_1,int *param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;

    uVar4 = *(uint *)((longlong)param_1 + 0x1c);
    lVar3 = *param_1;
    uVar1 = *(uint *)(param_1 + 4);
    uVar2 = *(uint *)(lVar3 + 8 + (ulonglong)uVar4 * 0x10);
    if (uVar1 < uVar2) {
        *param_2 = uVar2 - uVar1;
        return (ulonglong)uVar1 + *(longlong *)(lVar3 + (ulonglong)uVar4 * 0x10);
    }
    uVar4 = uVar4 + 1;
    *(undefined4 *)(param_1 + 4) = 0;
    if ((uint)(param_1[1] - lVar3 >> 4) <= uVar4) {
        uVar4 = 0;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar4;
    *param_2 = *(int *)(lVar3 + 8 + (ulonglong)uVar4 * 0x10);
    return *(longlong *)(lVar3 + (ulonglong)uVar4 * 0x10);
}



void FUN_140829780(longlong param_1,int param_2)

{
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
    *(undefined *)(param_1 + 0x2c) = 0;
    return;
}



undefined4 FUN_140829790(void)

{
    return DAT_140c10f24;
}



undefined8 FUN_1408297a0(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;

    iVar2 = *(int *)(param_1 + 2);
    lVar4 = FUN_1408819f0(DAT_140c10f20);
    if (lVar4 == 0) {
        return 0;
    }
    uVar5 = param_1[1] - *param_1 >> 4;
    uVar7 = uVar5 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar5 != 0) {
            lVar6 = 0;
            uVar5 = uVar7;
            do {
                lVar3 = *param_1;
                lVar1 = lVar6 + 0x10;
                *(undefined8 *)(lVar6 + lVar4) = *(undefined8 *)(lVar3 + -0x10 + lVar1);
                *(undefined8 *)(lVar6 + 8 + lVar4) = *(undefined8 *)(lVar3 + -8 + lVar1);
                uVar5 = uVar5 - 1;
                lVar6 = lVar1;
            } while (uVar5 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar2 + param_2;
    *param_1 = lVar4;
    param_1[1] = uVar7 * 0x10 + lVar4;
    return 1;
}



undefined8 FUN_140829860(longlong *param_1,uint param_2)

{
    longlong *plVar1;
    char cVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint uVar5;

    if (param_2 < 2) {
        param_2 = 2;
    }
    uVar5 = 0;
    *(uint *)(param_1 + 3) = param_2;
    while( true ) {
        lVar3 = FUN_1408819f0(DAT_140c10f20,DAT_140c10f24);
        if (lVar3 == 0) {
            return 0x34;
        }
        uVar4 = param_1[1] - *param_1 >> 4 & 0xffffffff;
        if (((*(uint *)(param_1 + 2) <= uVar4) && (cVar2 = FUN_1408297a0(param_1), cVar2 == '\0')) ||
            (*(uint *)(param_1 + 2) <= uVar4)) break;
        plVar1 = (longlong *)param_1[1];
        param_1[1] = (longlong)(plVar1 + 2);
        if (plVar1 == (longlong *)0x0) break;
        uVar5 = uVar5 + 1;
        *plVar1 = lVar3;
        *(undefined4 *)(plVar1 + 1) = 0;
        if (1 < uVar5) {
            return 1;
        }
    }
    FUN_140881720(DAT_140c10f20,lVar3);
    return 0x34;
}



longlong FUN_140829930(longlong *param_1,uint param_2)

{
    char cVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    longlong lVar5;

    uVar4 = param_1[1] - *param_1 >> 4 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar4) && (cVar1 = FUN_1408297a0(param_1,4), cVar1 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar4) {
        return 0;
    }
    puVar2 = (undefined8 *)param_1[1];
    lVar5 = (ulonglong)param_2 * 0x10;
    param_1[1] = (longlong)(puVar2 + 2);
    if ((undefined8 *)(*param_1 + lVar5) < puVar2) {
        do {
            puVar3 = puVar2 + -2;
            *puVar2 = puVar2[-2];
            puVar2[1] = puVar2[-1];
            puVar2 = puVar3;
        } while ((undefined8 *)(*param_1 + lVar5) < puVar3);
    }
    return *param_1 + lVar5;
}



void FUN_1408299e0(longlong *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)param_1[1]) {
        do {
            FUN_140881720(DAT_140c10f20,*puVar2);
            puVar2 = puVar2 + 2;
        } while (puVar2 != (undefined8 *)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        param_1[1] = lVar1;
        FUN_140881720(DAT_140c10f20,lVar1);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



undefined8 FUN_140829a50(longlong *param_1,undefined8 param_2,uint param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;

    if (DAT_140c10f24 - *(uint *)(param_1 + 5) < param_3) {
        if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            return 0x34;
        }
        uVar4 = *(int *)((longlong)param_1 + 0x24) + 1;
        uVar1 = (uint)(param_1[1] - *param_1 >> 4);
        if (uVar1 <= uVar4) {
            uVar4 = 0;
        }
        if (*(uint *)((longlong)param_1 + 0x1c) == uVar4) {
            if ((*(uint *)(param_1 + 3) <= uVar1) ||
                (lVar2 = FUN_1408819f0(DAT_140c10f20,DAT_140c10f24), lVar2 == 0)) {
                *(undefined *)((longlong)param_1 + 0x2c) = 1;
                return 0x34;
            }
            plVar3 = (longlong *)FUN_140829930(param_1,uVar4);
            if (plVar3 == (longlong *)0x0) {
                *(undefined *)((longlong)param_1 + 0x2c) = 1;
                FUN_140881720(DAT_140c10f20,lVar2);
                return 0x34;
            }
            *plVar3 = lVar2;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
        }
        else {
            lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar4 * 0x10);
        }
        *(uint *)((longlong)param_1 + 0x24) = uVar4;
        *(uint *)(param_1 + 5) = param_3;
        FUN_1407db590(lVar2,param_2,param_3);
    }
    else {
        FUN_1407db590((ulonglong)*(uint *)(param_1 + 5) +
                      *(longlong *)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x24) * 0x10),
                      param_2,param_3);
        *(uint *)(param_1 + 5) = *(int *)(param_1 + 5) + param_3;
    }
    *(undefined4 *)(*param_1 + 8 + (ulonglong)*(uint *)((longlong)param_1 + 0x24) * 0x10) =
            *(undefined4 *)(param_1 + 5);
    return 1;
}



undefined8 * FUN_140829b70(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    return param_1;
}



void FUN_140829bd0(longlong param_1)

{
    // WARNING: Could not recover jumptable at 0x000140829bd4. Too many branches
    // WARNING: Treating indirect jump as call
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    return;
}



byte * FUN_140829be0(byte **param_1,byte param_2)

{
    uint uVar1;
    byte *pbVar2;
    uint uVar3;

    if (*param_1 == (byte *)0x0) {
        uVar3 = 0;
    }
    else {
        uVar3 = (uint)**param_1;
    }
    uVar1 = uVar3 + 5;
    pbVar2 = (byte *)FUN_1408819f0(DAT_140c10f20,(uVar3 + 1) * 0x10 + (uVar1 & 0xfffffffc));
    if (pbVar2 != (byte *)0x0) {
        if (*param_1 != (byte *)0x0) {
            FUN_1407db590(pbVar2 + 1,*param_1 + 1,uVar3);
            FUN_1407db590(pbVar2 + ((ulonglong)uVar1 & 0xfffffffc),
                          *param_1 + ((ulonglong)(uVar3 + 4) & 0xfffffffc),(ulonglong)uVar3 << 4);
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        pbVar2[uVar3 + 1] = param_2;
        *pbVar2 = (char)uVar3 + 1;
        *param_1 = pbVar2;
        pbVar2 = pbVar2 + (ulonglong)uVar3 * 0x10 + ((ulonglong)uVar1 & 0xfffffffc);
    }
    return pbVar2;
}



undefined4 * FUN_140829cc0(longlong *param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 2 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 2)) || (cVar2 = FUN_14082a0e0(param_1,4), cVar2 != '\0')) &&
        (uVar3 < *(uint *)(param_1 + 2))) {
        puVar1 = (undefined4 *)param_1[1];
        param_1[1] = (longlong)(puVar1 + 1);
        if (puVar1 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
        }
        *puVar1 = param_2;
        return puVar1;
    }
    return (undefined4 *)0x0;
}



longlong FUN_140829d40(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0xc);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14082a190(param_1,5), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0xc;
    return lVar1;
}



undefined4 FUN_140829dc0(int **param_1,int param_2)

{
    int *piVar1;
    int *piVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined4 uVar5;

    piVar2 = *param_1;
    piVar1 = param_1[1];
    uVar5 = 1;
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 4;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && (piVar2 != (int *)&DAT_fffffffffffffff8)) {
            return 1;
        }
    }
    puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28);
    if (puVar3 == (undefined8 *)0x0) {
        uVar5 = 2;
    }
    else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        lVar4 = FUN_140846770(param_1,param_2,puVar3);
        if (lVar4 == 0) {
            uVar5 = 2;
            FUN_14082ae40(puVar3);
            FUN_140881720(DAT_140c10f20,puVar3);
        }
    }
    return uVar5;
}



undefined8 FUN_140829e90(int **param_1,int param_2,longlong param_3)

{
    int *piVar1;
    longlong lVar2;
    int *piVar3;

    piVar3 = *param_1;
    piVar1 = param_1[1];
    if (piVar3 != piVar1) {
        do {
            if (*piVar3 == param_2) break;
            piVar3 = piVar3 + 4;
        } while (piVar3 != piVar1);
        if ((piVar3 != piVar1) && ((longlong *)(piVar3 + 2) != (longlong *)0x0)) {
            lVar2 = *(longlong *)(piVar3 + 2);
            if (*(longlong *)(lVar2 + 8) == 0) {
                *(longlong *)(lVar2 + 8) = param_3;
                *(undefined8 *)(param_3 + 8) = 0;
                return 1;
            }
            *(longlong *)(param_3 + 8) = *(longlong *)(lVar2 + 8);
            *(longlong *)(lVar2 + 8) = param_3;
            return 1;
        }
    }
    return 0x14;
}



undefined8
FUN_140829ef0(int **param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
              char param_6)

{
    longlong *plVar1;
    int *piVar2;
    longlong lVar3;

    for (piVar2 = *param_1; (piVar2 != param_1[1] && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
    }
    if ((piVar2 != param_1[1]) && (plVar1 = (longlong *)(piVar2 + 2), plVar1 != (longlong *)0x0)) {
        lVar3 = FUN_14082a8e0(*plVar1 + 0x10,CONCAT44(param_4,param_3),param_5);
        if ((lVar3 != 0) &&
            ((param_6 == '\0' ||
              (lVar3 = FUN_14082a8e0(*plVar1 + 0x10,CONCAT44(param_3,param_4),param_5), lVar3 != 0)))) {
            return 1;
        }
        return 2;
    }
    return 0x14;
}



longlong ** FUN_140829fd0(longlong param_1,int param_2,int param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    if (param_3 == 1) {
        pplVar2 = (longlong **)(param_1 + 0xa0);
    }
    else {
        pplVar2 = (longlong **)(param_1 + 0xb0);
    }
    for (pplVar1 = (longlong **)*pplVar2; pplVar1 != (longlong **)0x0; pplVar1 = (longlong **)*pplVar1
            ) {
        if (param_2 == *(int *)(pplVar1 + 4)) goto LAB_14082a070;
    }
    pplVar1 = (longlong **)FUN_1408819f0(DAT_140c10f20,0x38);
    if (pplVar1 != (longlong **)0x0) {
        *pplVar1 = (longlong *)0x0;
        pplVar1[1] = (longlong *)0x0;
        pplVar1[2] = (longlong *)0x0;
        *(undefined4 *)(pplVar1 + 3) = 0;
        *(int *)(pplVar1 + 4) = param_2;
        pplVar1[5] = (longlong *)0x0;
        pplVar1[6] = (longlong *)0x0;
        if (*pplVar2 == (longlong *)0x0) {
            pplVar2[1] = (longlong *)pplVar1;
            *pplVar2 = (longlong *)pplVar1;
            *pplVar1 = (longlong *)0x0;
        }
        else {
            *pplVar1 = *pplVar2;
            *pplVar2 = (longlong *)pplVar1;
        }
    }
    LAB_14082a070:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    return pplVar1;
}



undefined4 FUN_14082a0a0(int **param_1,int param_2)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 4;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && ((longlong *)(piVar2 + 2) != (longlong *)0x0)) {
            return *(undefined4 *)(*(longlong *)(piVar2 + 2) + 4);
        }
    }
    return 0;
}



undefined8 FUN_14082a0e0(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar2 = *(int *)(param_1 + 2);
    lVar3 = FUN_1408819f0(DAT_140c10f20);
    if (lVar3 == 0) {
        return 0;
    }
    uVar4 = param_1[1] - *param_1 >> 2;
    uVar6 = uVar4 & 0xffffffff;
    if (*param_1 != 0) {
        uVar5 = 0;
        if ((int)uVar4 != 0) {
            do {
                uVar5 = uVar5 + 1;
                *(undefined4 *)(lVar3 + -4 + uVar5 * 4) = *(undefined4 *)(*param_1 + -4 + uVar5 * 4);
            } while (uVar5 < uVar6);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    lVar1 = lVar3 + uVar6 * 4;
    *(int *)(param_1 + 2) = iVar2 + param_2;
    param_1[1] = lVar1;
    *param_1 = lVar3;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



undefined8 FUN_14082a190(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    iVar2 = *(int *)(param_1 + 2);
    lVar4 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar2 + param_2) * 0xc);
    if (lVar4 == 0) {
        return 0;
    }
    uVar7 = (param_1[1] - *param_1) / 0xc;
    uVar6 = uVar7 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar7 != 0) {
            lVar5 = 0;
            uVar7 = uVar6;
            do {
                lVar3 = *param_1;
                lVar1 = lVar5 + 0xc;
                *(undefined4 *)(lVar5 + lVar4) = *(undefined4 *)(lVar3 + -0xc + lVar1);
                *(undefined4 *)(lVar5 + 4 + lVar4) = *(undefined4 *)(lVar3 + -8 + lVar1);
                *(undefined4 *)(lVar5 + 8 + lVar4) = *(undefined4 *)(lVar3 + -4 + lVar1);
                uVar7 = uVar7 - 1;
                lVar5 = lVar1;
            } while (uVar7 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar2 + param_2;
    *param_1 = lVar4;
    param_1[1] = lVar4 + uVar6 * 0xc;
    return CONCAT71((int7)(uVar6 * 3 >> 8),1);
}



int FUN_14082a280(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;

    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
    iVar6 = 0x34;
    *(undefined8 **)(param_1 + 0x40) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
        iVar1 = 0x34;
    }
    else {
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined8 **)(param_1 + 0x28) = puVar2;
        uVar4 = uVar5;
        do {
            puVar3 = puVar2;
            uVar4 = uVar4 + 1;
            *puVar3 = puVar3 + 3;
            puVar2 = puVar3 + 3;
        } while (uVar4 < *(uint *)(param_1 + 0x30));
        *puVar3 = 0;
        iVar1 = 1;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 100) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x58) = 0;
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
        *(undefined8 **)(param_1 + 0x70) = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
            *(undefined4 *)(param_1 + 0x60) = 8;
            *(undefined8 **)(param_1 + 0x58) = puVar2;
            do {
                puVar3 = puVar2;
                uVar5 = uVar5 + 1;
                *puVar3 = puVar3 + 4;
                puVar2 = puVar3 + 4;
            } while (uVar5 < *(uint *)(param_1 + 0x60));
            *puVar3 = 0;
            iVar6 = 1;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        iVar1 = iVar6;
    }
    return iVar1;
}



ulonglong FUN_14082a380(longlong param_1,undefined4 param_2,char param_3)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined8 *puVar4;

    puVar4 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 1;
    }
    else {
        do {
            uVar3 = (**(code **)*puVar4)(puVar4,param_2,param_3);
            if ((int)uVar3 != 1) {
                if (param_3 == '\0') {
                    return uVar3;
                }
                uVar2 = uVar3;
                for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar4 != puVar1;
                     puVar1 = (undefined8 *)puVar1[1]) {
                    (**(code **)*puVar1)(puVar1,param_2,0);
                    uVar2 = uVar3 & 0xffffffff;
                }
                return uVar2;
            }
            puVar4 = (undefined8 *)puVar4[1];
        } while (puVar4 != (undefined8 *)0x0);
    }
    return uVar3;
}



undefined8
FUN_14082a430(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
    int *piVar1;
    longlong lVar2;
    undefined8 uVar3;
    int *piVar4;

    lVar2 = FUN_140829fd0(param_1,param_3,param_2);
    if (lVar2 == 0) {
        uVar3 = 1;
        if (param_5 != '\0') {
            uVar3 = 0x34;
        }
        return uVar3;
    }
    piVar1 = *(int **)(lVar2 + 0x10);
    for (piVar4 = *(int **)(lVar2 + 8); (piVar4 != piVar1 && (*piVar4 != param_4));
         piVar4 = piVar4 + 1) {
    }
    if (piVar4 == piVar1) {
        if (param_5 == '\0') {
            return 1;
        }
        FUN_140829cc0(lVar2 + 8,param_4);
    }
    else {
        if (param_5 != '\0') {
            return 1;
        }
        if (1 < (uint)((longlong)piVar1 - (longlong)*(int **)(lVar2 + 8) >> 2)) {
            *piVar4 = piVar1[-1];
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -4;
    }
    uVar3 = FUN_14082a380(lVar2,param_4,param_5);
    if ((int)uVar3 != 1) {
        if (1 < (uint)(*(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 8) >> 2)) {
            *piVar4 = *(int *)(*(longlong *)(lVar2 + 0x10) + -4);
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -4;
    }
    return uVar3;
}



undefined8 FUN_14082a5f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    uint uStack28;

    if (*(longlong *)(param_1 + 0x58) != 0) {
        LAB_14082a63f:
        if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x58);
        }
        else {
            **(undefined8 **)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x58);
        *(undefined8 **)(param_1 + 0x50) = puVar2;
        *(undefined8 *)(param_1 + 0x58) = *puVar2;
        *puVar2 = 0;
        lVar1 = *(longlong *)(param_1 + 0x50);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        *(undefined8 *)(lVar1 + 8) = param_2;
        *(ulonglong *)(lVar1 + 0x10) = (ulonglong)uStack28 << 0x20;
        *(undefined8 *)(lVar1 + 0x18) = param_3;
        return 1;
    }
    if (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 100)) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x20);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 **)(param_1 + 0x58) = puVar2;
            goto LAB_14082a63f;
        }
    }
    return 2;
}



void FUN_14082a6b0(ulonglong *param_1)

{
    ulonglong *puVar1;

    while (puVar1 = (ulonglong *)*param_1, puVar1 != (ulonglong *)0x0) {
        *param_1 = *puVar1;
        if (puVar1 == (ulonglong *)param_1[1]) {
            param_1[1] = 0;
        }
        if ((puVar1 < param_1[5]) || (param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 0x18 <= puVar1))
        {
            FUN_140881720(DAT_140c10f20);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        }
        else {
            *puVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (ulonglong)puVar1;
        }
    }
    return;
}



void FUN_14082a720(ulonglong *param_1)

{
    ulonglong *puVar1;

    while (puVar1 = (ulonglong *)*param_1, puVar1 != (ulonglong *)0x0) {
        *param_1 = *puVar1;
        if (puVar1 == (ulonglong *)param_1[1]) {
            param_1[1] = 0;
        }
        if ((puVar1 < param_1[5]) || ((ulonglong)*(uint *)(param_1 + 3) * 0x20 + param_1[5] <= puVar1))
        {
            FUN_140881720(DAT_140c10f20);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        }
        else {
            *puVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (ulonglong)puVar1;
        }
    }
    return;
}



undefined8 FUN_14082a790(longlong *param_1,char param_2)

{
    longlong lVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)param_1[1]) {
        do {
            lVar1 = puVar2[1];
            if ((param_2 == '\0') || (*(longlong *)(lVar1 + 8) == 0)) {
                if (*(longlong *)(lVar1 + 0x10) != 0) {
                    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x10);
                    FUN_140881720(DAT_140c10f20);
                    *(undefined8 *)(lVar1 + 0x10) = 0;
                    *(undefined8 *)(lVar1 + 0x18) = 0;
                    *(undefined4 *)(lVar1 + 0x20) = 0;
                }
                *(undefined8 *)(lVar1 + 8) = 0;
                FUN_140881720(DAT_140c10f20,lVar1);
                lVar1 = param_1[1];
                if (1 < (uint)(lVar1 - *param_1 >> 4)) {
                    *puVar2 = *(undefined8 *)(lVar1 + -0x10);
                    puVar2[1] = *(undefined8 *)(lVar1 + -8);
                }
                param_1[1] = param_1[1] + -0x10;
            }
            else {
                puVar2 = puVar2 + 2;
            }
        } while (puVar2 != (undefined8 *)param_1[1]);
    }
    return 1;
}



undefined8 FUN_14082a860(int **param_1,int param_2,longlong param_3)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int *piVar5;
    longlong lVar6;
    longlong lVar7;

    piVar5 = *param_1;
    piVar1 = param_1[1];
    if (piVar5 != piVar1) {
        do {
            if (*piVar5 == param_2) break;
            piVar5 = piVar5 + 4;
        } while (piVar5 != piVar1);
        if ((piVar5 != piVar1) && ((longlong *)(piVar5 + 2) != (longlong *)0x0)) {
            lVar2 = *(longlong *)(piVar5 + 2);
            lVar3 = *(longlong *)(lVar2 + 8);
            lVar4 = lVar3;
            lVar7 = 0;
            if (lVar3 != 0) {
                while (lVar6 = lVar4, lVar6 != param_3) {
                    lVar4 = *(longlong *)(lVar6 + 8);
                    lVar7 = lVar6;
                    if (*(longlong *)(lVar6 + 8) == 0) {
                        return 1;
                    }
                }
                if (lVar6 != 0) {
                    if (lVar6 == lVar3) {
                        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar6 + 8);
                        return 1;
                    }
                    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
                }
            }
            return 1;
        }
    }
    return 0x14;
}



undefined8 * FUN_14082a8e0(int **param_1,undefined8 param_2,int param_3)

{
    int *piVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    for (piVar1 = *param_1;
         (piVar1 != param_1[1] &&
          ((*piVar1 != (int)param_2 || (piVar1[1] != (int)((ulonglong)param_2 >> 0x20)))));
         piVar1 = piVar1 + 3) {
    }
    if (piVar1 == param_1[1]) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3 = (undefined8 *)(piVar1 + 2);
        if (puVar3 != (undefined8 *)0x0) {
            *(int *)puVar3 = param_3;
            return puVar3;
        }
    }
    puVar2 = (undefined8 *)FUN_140829d40();
    if (puVar2 == (undefined8 *)0x0) {
        return puVar3;
    }
    *puVar2 = param_2;
    *(int *)(puVar2 + 1) = param_3;
    return puVar2 + 1;
}



void FUN_14082a960(undefined8 param_1,undefined8 param_2,int **param_3,ulonglong param_4_00,
                   int param_5_00,char param_4,char param_5)

{
    int *piVar1;
    byte *pbVar2;
    bool bVar3;
    char cVar4;
    int *piVar5;
    int *piVar6;
    longlong lVar7;
    float *pfVar8;
    ulonglong uVar9;
    uint uVar10;
    undefined8 *puVar11;
    byte bVar12;
    byte **ppbVar13;
    undefined1 *puVar14;
    float fVar15;
    undefined4 extraout_XMM0_Da;
    float fVar16;
    int local_88;
    byte *local_80;
    int *local_78;
    undefined8 *local_70;
    ulonglong local_68;
    float local_60;
    float local_5c;
    int local_58;
    undefined4 local_54;
    undefined local_50;
    undefined local_4f;

    piVar5 = *param_3;
    piVar6 = param_3[1];
    if (piVar5 == piVar6) {
        return;
    }
    do {
        if (*piVar5 == (int)param_4_00) break;
        piVar5 = piVar5 + 4;
    } while (piVar5 != piVar6);
    if (piVar5 == piVar6) {
        return;
    }
    if ((int **)(piVar5 + 2) == (int **)0x0) {
        return;
    }
    piVar5 = *(int **)(piVar5 + 2);
    local_78 = piVar5;
    if ((((param_5 == '\0') &&
          (FUN_14082b250(param_3,param_4_00,piVar5[1]), DAT_140c61b38 != (code *)0x0)) &&
         (param_4 == '\0')) && (cVar4 = (*DAT_140c61b38)(param_4_00 & 0xffffffff), cVar4 != '\0')) {
        return;
    }
    local_88 = 0;
    if (param_4 == '\0') {
        piVar6 = *(int **)(piVar5 + 4);
        piVar1 = *(int **)(piVar5 + 6);
        if (piVar6 != piVar1) {
            do {
                if ((*piVar6 == piVar5[1]) && (piVar6[1] == param_5_00)) break;
                piVar6 = piVar6 + 3;
            } while (piVar6 != piVar1);
            if ((piVar6 != piVar1) && (piVar6 + 2 != (int *)0x0)) {
                local_88 = piVar6[2];
                goto LAB_14082aa39;
            }
        }
        local_88 = *piVar5;
    }
    LAB_14082aa39:
    puVar11 = *(undefined8 **)(piVar5 + 2);
    if (puVar11 != (undefined8 *)0x0) {
        local_80 = (byte *)0x0;
        do {
            bVar3 = false;
            *(int *)((longlong)puVar11 + 0x44) = param_5_00;
            lVar7 = FUN_140852ea0();
            ppbVar13 = (byte **)(lVar7 + 0x20);
            if (lVar7 == 0) {
                ppbVar13 = &local_80;
            }
            bVar12 = 0;
            puVar14 = &DAT_1409a35e8;
            do {
                pbVar2 = (byte *)puVar11[4];
                if (pbVar2 != (byte *)0x0) {
                    uVar9 = 0;
                    do {
                        uVar10 = (int)uVar9 + 1;
                        if (pbVar2[uVar10] == bVar12) {
                            pfVar8 = (float *)(pbVar2 + uVar9 * 0x10 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                            goto LAB_14082aad5;
                        }
                        uVar9 = (ulonglong)uVar10;
                    } while (uVar10 < *pbVar2);
                }
                pfVar8 = (float *)0x0;
                LAB_14082aad5:
                pbVar2 = *ppbVar13;
                if (pbVar2 != (byte *)0x0) {
                    uVar9 = 0;
                    do {
                        uVar10 = (int)uVar9 + 1;
                        if (pbVar2[uVar10] == bVar12) {
                            if ((float *)(pbVar2 + uVar9 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)) !=
                                (float *)0x0) {
                                fVar16 = *(float *)(pbVar2 + uVar9 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                                goto LAB_14082aaf7;
                            }
                            break;
                        }
                        uVar9 = (ulonglong)uVar10;
                    } while (uVar10 < *pbVar2);
                }
                fVar16 = 0.0;
                LAB_14082aaf7:
                if (pfVar8 == (float *)0x0) {
                    fVar15 = 0.0;
                    LAB_14082ab67:
                    if (fVar15 != fVar16) {
                        local_50 = *puVar14;
                        local_54 = 4;
                        local_4f = 1;
                        local_70 = puVar11;
                        local_68 = (ulonglong)bVar12;
                        local_60 = fVar15;
                        local_5c = fVar16;
                        local_58 = local_88;
                        lVar7 = FUN_14083a960(DAT_140c61b70,&local_70,1);
                        if ((pfVar8 == (float *)0x0) &&
                            (pfVar8 = (float *)FUN_140829be0(), pfVar8 == (float *)0x0)) {
                            if (lVar7 != 0) {
                                LAB_14082abe7:
                                FUN_14083b060(DAT_140c61b70,lVar7,puVar11);
                            }
                        }
                        else {
                            *(longlong *)(pfVar8 + 2) = lVar7;
                            if (lVar7 == 0) {
                                *pfVar8 = fVar16;
                                bVar3 = true;
                            }
                            else {
                                cVar4 = (**(code **)(*(longlong *)puVar11[3] + 0x130))();
                                if (cVar4 == '\0') {
                                    (**(code **)*puVar11)(extraout_XMM0_Da,param_2,fVar16,puVar11,(ulonglong)bVar12);
                                    goto LAB_14082abe7;
                                }
                            }
                        }
                    }
                }
                else {
                    if (*(longlong *)(pfVar8 + 2) == 0) {
                        fVar15 = *pfVar8;
                        goto LAB_14082ab67;
                    }
                    FUN_14083ab80(DAT_140c61b70,*(longlong *)(pfVar8 + 2),bVar12);
                }
                bVar12 = bVar12 + 1;
                puVar14 = puVar14 + 1;
            } while (bVar12 < 5);
            if (bVar3) {
                (**(code **)(*(longlong *)puVar11[3] + 0x198))();
            }
            puVar11 = (undefined8 *)puVar11[1];
            piVar5 = local_78;
        } while (puVar11 != (undefined8 *)0x0);
    }
    piVar5[1] = param_5_00;
    return;
}



undefined8 FUN_14082ace0(int **param_1,int param_2,undefined4 param_3)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 4;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && ((undefined8 *)(piVar2 + 2) != (undefined8 *)0x0)) {
            **(undefined4 **)(piVar2 + 2) = param_3;
            return 1;
        }
    }
    return 0x14;
}



undefined8 FUN_14082ad20(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    bool bVar3;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        FUN_14082a6b0();
        puVar2 = (undefined8 *)param_1[2];
        while (puVar2 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar2;
            if ((puVar2 < (undefined8 *)param_1[5]) ||
                (bVar3 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 3 <= puVar2,
                        puVar2 = puVar1, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar2 = puVar1;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



undefined8 FUN_14082adb0(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    bool bVar3;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        FUN_14082a720();
        puVar2 = (undefined8 *)param_1[2];
        while (puVar2 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar2;
            if ((puVar2 < (undefined8 *)param_1[5]) ||
                (bVar3 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 4 <= puVar2,
                        puVar2 = puVar1, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar2 = puVar1;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



void FUN_14082ae40(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x10) != 0) {
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x10);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    return;
}



void FUN_14082ae90(longlong *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    puVar1 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    while (puVar1 != puVar2) {
        lVar3 = puVar1[1];
        if (*(longlong *)(lVar3 + 0x10) != 0) {
            *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x10);
            FUN_140881720(DAT_140c10f20);
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined4 *)(lVar3 + 0x20) = 0;
        }
        *(undefined8 *)(lVar3 + 8) = 0;
        FUN_140881720(DAT_140c10f20,lVar3);
        lVar3 = param_1[1];
        if (1 < (uint)(lVar3 - *param_1 >> 4)) {
            *puVar1 = *(undefined8 *)(lVar3 + -0x10);
            puVar1[1] = *(undefined8 *)(lVar3 + -8);
        }
        param_1[1] = param_1[1] + -0x10;
        puVar2 = (undefined8 *)param_1[1];
    }
    if (*param_1 != 0) {
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    FUN_14082ad20(param_1 + 3);
    FUN_14082adb0(param_1 + 9);
    FUN_14082af80(param_1,param_1 + 0x14);
    FUN_14082af80(param_1,param_1 + 0x16);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14082af80(undefined8 param_1,longlong **param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar4 = *param_2;
    if (*param_2 == (longlong *)0x0) {
        *param_2 = (longlong *)0x0;
        param_2[1] = (longlong *)0x0;
        return;
    }
    do {
        plVar1 = (longlong *)*plVar4;
        plVar3 = plVar1;
        if (plVar4 == *param_2) {
            *param_2 = plVar1;
            plVar3 = (longlong *)_DAT_00000000;
        }
        _DAT_00000000 = (longlong)plVar3;
        if (plVar4 == param_2[1]) {
            param_2[1] = (longlong *)0x0;
        }
        uVar2 = DAT_140c10f20;
        plVar4[5] = 0;
        plVar4[6] = 0;
        if (plVar4[1] != 0) {
            plVar4[2] = plVar4[1];
            FUN_140881720(DAT_140c10f20);
            plVar4[1] = 0;
            plVar4[2] = 0;
            *(undefined4 *)(plVar4 + 3) = 0;
        }
        FUN_140881720(uVar2,plVar4);
        plVar4 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *param_2 = (longlong *)0x0;
    param_2[1] = (longlong *)0x0;
    return;
}



void FUN_14082b070(longlong param_1,int param_2,longlong param_3)

{
    undefined8 *puVar1;

    for (puVar1 = *(undefined8 **)(param_1 + 0x48); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if (((*(int *)(puVar1 + 2) == 0) || (*(int *)(puVar1 + 2) == param_2)) &&
            ((param_3 == 0 || (puVar1[3] == param_3)))) {
            (***(code ***)(undefined8 *)puVar1[1])((undefined8 *)puVar1[1],param_2);
        }
    }
    return;
}



undefined8 FUN_14082b0d0(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar3 = (undefined8 *)0x0;
    while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
        if (puVar2[1] == param_2) {
            puVar1 = (undefined8 *)*puVar2;
            if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
                *(undefined8 **)(param_1 + 0x18) = puVar1;
            }
            else {
                *puVar3 = puVar1;
            }
            if (puVar2 == *(undefined8 **)(param_1 + 0x20)) {
                *(undefined8 **)(param_1 + 0x20) = puVar3;
            }
            if ((puVar2 < *(undefined8 **)(param_1 + 0x40)) ||
                (*(undefined8 **)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x30) * 3 <= puVar2)) {
                FUN_140881720(DAT_140c10f20);
            }
            else {
                *puVar2 = *(undefined8 *)(param_1 + 0x28);
                *(undefined8 **)(param_1 + 0x28) = puVar2;
            }
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        else {
            puVar1 = (undefined8 *)*puVar2;
            puVar3 = puVar2;
        }
    }
    return 1;
}



undefined8 FUN_14082b190(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar1 = *(undefined8 **)(param_1 + 0x48);
    puVar3 = (undefined8 *)0x0;
    while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
        if (puVar2[1] == param_2) {
            puVar1 = (undefined8 *)*puVar2;
            if (puVar2 == *(undefined8 **)(param_1 + 0x48)) {
                *(undefined8 **)(param_1 + 0x48) = puVar1;
            }
            else {
                *puVar3 = puVar1;
            }
            if (puVar2 == *(undefined8 **)(param_1 + 0x50)) {
                *(undefined8 **)(param_1 + 0x50) = puVar3;
            }
            if ((puVar2 < *(undefined8 **)(param_1 + 0x70)) ||
                (*(undefined8 **)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x60) * 4 <= puVar2)) {
                FUN_140881720(DAT_140c10f20,puVar2);
            }
            else {
                *puVar2 = *(undefined8 *)(param_1 + 0x58);
                *(undefined8 **)(param_1 + 0x58) = puVar2;
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        }
        else {
            puVar1 = (undefined8 *)*puVar2;
            puVar3 = puVar2;
        }
    }
    return 1;
}



undefined8 FUN_14082b250(longlong param_1,int param_2,int param_3,int param_4)

{
    undefined8 *puVar1;

    if (param_3 == param_4) {
        return 1;
    }
    for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if (*(int *)(puVar1 + 2) == param_2) {
            (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],param_4,0);
        }
    }
    return 1;
}



undefined8 * FUN_14082b2c0(undefined8 *param_1,longlong param_2)

{
    uint uVar1;

    *param_1 = &PTR_LAB_1409a2df8;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    param_1[9] = param_2;
    if (param_2 != 0) {
        uVar1 = *(uint *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = (uVar1 + 1 ^ uVar1) & 0x3fffffff ^ uVar1;
    }
    return param_1;
}



LPCRITICAL_SECTION FUN_14082b310(LPCRITICAL_SECTION param_1)

{
    InitializeCriticalSection(param_1);
    param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    *(undefined8 *)&param_1[1].LockCount = 0;
    *(undefined4 *)&param_1[1].OwningThread = 0;
    *(undefined8 *)((longlong)&param_1[1].LockSemaphore + 4) = 0;
    *(undefined8 *)((longlong)&param_1[1].SpinCount + 4) = 0;
    *(undefined *)((longlong)&param_1[2].DebugInfo + 4) = 0;
    *(undefined *)&param_1[2].LockCount = 0;
    param_1[2].RecursionCount = 0;
    param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    param_1[3].LockCount = 0;
    *(undefined8 *)&param_1[4].LockCount = 0;
    *(undefined4 *)&param_1[4].OwningThread = 0;
    param_1[4].SpinCount = 0;
    *(undefined4 *)&param_1[5].DebugInfo = 0;
    FUN_140856090(&param_1[5].LockCount);
    param_1[5].LockSemaphore = (HANDLE)0x0;
    param_1[5].SpinCount = 0;
    *(undefined4 *)&param_1[6].DebugInfo = 0;
    return param_1;
}



void FUN_14082b3a0(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    uint uVar3;

    lVar1 = param_1[9];
    *param_1 = &PTR_LAB_1409a2df8;
    if (lVar1 != 0) {
        uVar3 = *(uint *)(lVar1 + 0x88);
        uVar3 = (uVar3 - 1 ^ uVar3) & 0x3fffffff ^ uVar3;
        *(uint *)(lVar1 + 0x88) = uVar3;
        uVar2 = DAT_140c10f20;
        if ((uVar3 & 0x3fffffff) == 0) {
            FUN_14084bd30(lVar1);
            FUN_140881720(uVar2,lVar1);
        }
    }
    if (param_1[6] != 0) {
        FUN_140828460();
        return;
    }
    return;
}



void FUN_14082b430(LPCRITICAL_SECTION param_1)

{
    if (param_1[5].LockSemaphore != (HANDLE)0x0) {
        CloseHandle(param_1[5].LockSemaphore);
    }
    // WARNING: Could not recover jumptable at 0x00014082b453. Too many branches
    // WARNING: Treating indirect jump as call
    DeleteCriticalSection(param_1);
    return;
}



undefined8 * FUN_14082b460(undefined8 *param_1,undefined8 *param_2)

{
    int *piVar1;

    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    piVar1 = (int *)param_2[2];
    if (param_1[2] != 0) {
        FUN_140828460();
    }
    if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + 1;
    }
    param_1[2] = piVar1;
    return param_1;
}



undefined8 FUN_14082b4b0(undefined8 param_1,uint param_2)

{
    FUN_14082b3a0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_14082b4e0(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
    short sVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    char cVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined4 local_78 [20];

    puVar11 = (undefined8 *)0x0;
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    while (puVar5 != (undefined8 *)0x0) {
        plVar2 = (longlong *)puVar5[2];
        lVar3 = plVar2[1];
        plVar8 = (longlong *)FUN_140855940(lVar3);
        if (param_2 == (longlong *)0x0) {
            LAB_14082b589:
            if ((param_3 == 0) || (param_3 == plVar2[9])) {
                if ((param_4 != 0) && (param_4 != *(int *)(plVar2 + 7))) {
                    puVar10 = (undefined8 *)*puVar5;
                    puVar11 = puVar5;
                    goto LAB_14082b69c;
                }
                sVar1 = *(short *)(lVar3 + 0x3c);
                if ((sVar1 != 0x403) &&
                    ((sVar1 != 0x503 ||
                      (cVar7 = FUN_140856b60(plVar2[1],param_2,plVar2[9],plVar2), cVar7 == '\0'))))
                    goto LAB_14082b5e1;
                local_78[0] = 0;
                if (*(short *)(plVar2[1] + 0x3c) == 0x403) {
                    LAB_14082b60d:
                    (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_78);
                }
                else if (*(short *)(plVar2[1] + 0x3c) == 0x503) {
                    FUN_1408570e0();
                    goto LAB_14082b60d;
                }
                FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar2 + 7));
                puVar10 = (undefined8 *)*puVar5;
                if (puVar5 == *(undefined8 **)(param_1 + 0x60)) {
                    *(undefined8 **)(param_1 + 0x60) = puVar10;
                }
                else {
                    *puVar11 = puVar10;
                }
                if (puVar5 == *(undefined8 **)(param_1 + 0x68)) {
                    *(undefined8 **)(param_1 + 0x68) = puVar11;
                }
                *puVar5 = *(undefined8 *)(param_1 + 0x70);
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
                *(undefined8 **)(param_1 + 0x70) = puVar5;
                (**(code **)(*(longlong *)plVar2[1] + 0x10))();
                uVar6 = DAT_140c10f20;
                (**(code **)(*plVar2 + 8))(plVar2,0);
                FUN_140881720(uVar6);
            }
            else {
                LAB_14082b5e1:
                puVar10 = (undefined8 *)*puVar5;
                puVar11 = puVar5;
            }
        }
        else {
            if (plVar8 == (longlong *)0x0) goto LAB_14082b5e1;
            if (param_2 == plVar8) goto LAB_14082b589;
            plVar9 = (longlong *)plVar8[9];
            for (plVar4 = (longlong *)plVar8[8]; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[8]
                    ) {
                if (param_2 == plVar4) goto LAB_14082b589;
                if (plVar9 == (longlong *)0x0) {
                    plVar9 = (longlong *)plVar4[9];
                }
            }
            if (plVar9 == (longlong *)0x0) goto LAB_14082b5e1;
            do {
                if (param_2 == plVar9) goto LAB_14082b589;
                plVar9 = (longlong *)plVar9[9];
            } while (plVar9 != (longlong *)0x0);
            puVar10 = (undefined8 *)*puVar5;
            puVar11 = puVar5;
        }
        LAB_14082b69c:
        puVar5 = puVar10;
        if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
        }
    }
    puVar11 = (undefined8 *)0x0;
    puVar5 = *(undefined8 **)(param_1 + 0x90);
    do {
        if (puVar5 == (undefined8 *)0x0) {
            return 1;
        }
        plVar2 = (longlong *)puVar5[2];
        lVar3 = plVar2[1];
        plVar8 = (longlong *)FUN_140855940(lVar3);
        if (param_2 == (longlong *)0x0) {
            LAB_14082b76d:
            if ((((param_3 != 0) && (param_3 != plVar2[9])) ||
                 ((param_4 != 0 && (param_4 != *(int *)(plVar2 + 7))))) ||
                ((*(short *)(lVar3 + 0x3c) != 0x503 ||
                  (cVar7 = FUN_140856b60(plVar2[1],param_2,plVar2[9],plVar2), cVar7 == '\0'))))
                goto LAB_14082b72e;
            local_78[0] = 0;
            if (*(short *)(plVar2[1] + 0x3c) == 0x403) {
                LAB_14082b7d6:
                (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_78);
            }
            else if (*(short *)(plVar2[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082b7d6;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar2 + 7));
            puVar10 = (undefined8 *)*puVar5;
            if (puVar5 == *(undefined8 **)(param_1 + 0x90)) {
                *(undefined8 **)(param_1 + 0x90) = puVar10;
            }
            else {
                *puVar11 = puVar10;
            }
            if (puVar5 == *(undefined8 **)(param_1 + 0x98)) {
                *(undefined8 **)(param_1 + 0x98) = puVar11;
            }
            *puVar5 = *(undefined8 *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
            *(undefined8 **)(param_1 + 0xa0) = puVar5;
            (**(code **)(*(longlong *)plVar2[1] + 0x10))();
            uVar6 = DAT_140c10f20;
            (**(code **)(*plVar2 + 8))(plVar2,0);
            FUN_140881720(uVar6,plVar2);
        }
        else {
            if (plVar8 != (longlong *)0x0) {
                if (param_2 == plVar8) goto LAB_14082b76d;
                plVar9 = (longlong *)plVar8[9];
                for (plVar4 = (longlong *)plVar8[8]; plVar4 != (longlong *)0x0;
                     plVar4 = (longlong *)plVar4[8]) {
                    if (param_2 == plVar4) goto LAB_14082b76d;
                    if (plVar9 == (longlong *)0x0) {
                        plVar9 = (longlong *)plVar4[9];
                    }
                }
                for (; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[9]) {
                    if (param_2 == plVar9) goto LAB_14082b76d;
                }
            }
            LAB_14082b72e:
            puVar10 = (undefined8 *)*puVar5;
            puVar11 = puVar5;
        }
        puVar5 = puVar10;
        if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
        }
    } while( true );
}



void FUN_14082b880(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;

    for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if (*(short *)(*(longlong *)(puVar1[2] + 8) + 0x3c) == 0x503) {
            FUN_140857420(*(longlong *)(puVar1[2] + 8),param_2);
        }
    }
    for (puVar1 = *(undefined8 **)(param_1 + 0x90); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        if (*(short *)(*(longlong *)(puVar1[2] + 8) + 0x3c) == 0x503) {
            FUN_140857420(*(longlong *)(puVar1[2] + 8),param_2);
        }
    }
    return;
}



void FUN_14082b920(longlong param_1,int param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    undefined4 local_68 [20];

    puVar2 = *(undefined8 **)(param_1 + 0x60);
    puVar4 = (undefined8 *)0x0;
    while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
        plVar1 = (longlong *)puVar3[2];
        if (*(int *)(plVar1 + 7) == param_2) {
            local_68[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082b980:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_68);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082b980;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar2 = (undefined8 *)*puVar3;
            if (puVar3 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar2;
            }
            else {
                *puVar4 = puVar2;
            }
            if (puVar3 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar4;
            }
            *puVar3 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar3;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar5 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar5);
        }
        else {
            puVar2 = (undefined8 *)*puVar3;
            puVar4 = puVar3;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x90);
    puVar4 = (undefined8 *)0x0;
    do {
        while( true ) {
            puVar3 = puVar2;
            if (puVar3 == (undefined8 *)0x0) {
                return;
            }
            plVar1 = (longlong *)puVar3[2];
            if (*(int *)(plVar1 + 7) == param_2) break;
            puVar2 = (undefined8 *)*puVar3;
            puVar4 = puVar3;
        }
        local_68[0] = 0;
        if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
            LAB_14082ba60:
            (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_68);
        }
        else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
            FUN_1408570e0();
            goto LAB_14082ba60;
        }
        FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
        puVar2 = (undefined8 *)*puVar3;
        if (puVar3 == *(undefined8 **)(param_1 + 0x90)) {
            *(undefined8 **)(param_1 + 0x90) = puVar2;
        }
        else {
            *puVar4 = puVar2;
        }
        if (puVar3 == *(undefined8 **)(param_1 + 0x98)) {
            *(undefined8 **)(param_1 + 0x98) = puVar4;
        }
        *puVar3 = *(undefined8 *)(param_1 + 0xa0);
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        *(undefined8 **)(param_1 + 0xa0) = puVar3;
        (**(code **)(*(longlong *)plVar1[1] + 0x10))();
        uVar5 = DAT_140c10f20;
        (**(code **)(*plVar1 + 8))(plVar1,0);
        FUN_140881720(uVar5);
    } while( true );
}



undefined4 FUN_14082bb30(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined4 param_3)

{
    undefined4 uVar1;

    EnterCriticalSection(param_1);
    uVar1 = FUN_14082c0f0(param_1,param_2,param_3);
    LeaveCriticalSection(param_1);
    return uVar1;
}



void FUN_14082bb80(longlong param_1,longlong *param_2)

{
    short sVar1;
    undefined4 uVar2;
    char cVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    longlong *local_res10;
    undefined4 local_58 [20];

    local_res10 = param_2;
    FUN_14083b2f0(DAT_140c61b80);
    (**(code **)(*(longlong *)param_2[1] + 8))();
    uVar4 = FUN_140855970();
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0xc0);
    uVar7 = uVar4 >> 10;
    *(uint *)((longlong)param_2 + 0x14) = uVar4 + uVar7 * -0x400;
    if (uVar4 >> 10 == 0) {
        (**(code **)(*(longlong *)param_2[1] + 0x40))();
        if (*(int *)(param_2 + 7) != 0) {
            FUN_14083c260(DAT_140c61b80);
        }
        (**(code **)(*(longlong *)param_2[1] + 0x10))();
        uVar2 = DAT_140c10f20;
        (**(code **)(*param_2 + 8))(param_2,0);
        FUN_140881720(uVar2,param_2);
        return;
    }
    if (*(short *)(param_2[1] + 0x3c) == 0x503) {
        uVar5 = DAT_140c61b20._4_4_;
        if (uVar7 < DAT_140c61b20._4_4_) {
            uVar5 = uVar7;
        }
        uVar7 = uVar7 - uVar5;
        *(uint *)((longlong)param_2 + 0x14) = uVar4 + uVar7 * -0x400;
        if (uVar7 == 0) {
            FUN_14082cad0(param_1,param_2);
            return;
        }
    }
    *(uint *)(param_2 + 2) = *(int *)(param_2 + 2) + uVar7;
    iVar6 = FUN_14082be40(param_1 + 0x60,*(undefined4 *)(param_2 + 2),&local_res10);
    if (iVar6 != 1) {
        (**(code **)(*(longlong *)param_2[1] + 0x10))();
        uVar2 = DAT_140c10f20;
        (**(code **)(*param_2 + 8))(param_2,0);
        FUN_140881720(uVar2,param_2);
        return;
    }
    local_58[0] = 0;
    sVar1 = *(short *)((longlong)(longlong *)param_2[1] + 0x3c);
    if (sVar1 != 0x403) {
        if (sVar1 != 0x503) {
            return;
        }
        cVar3 = FUN_1408570e0();
        if (cVar3 == '\0') {
            return;
        }
    }
    (**(code **)(*(longlong *)param_2[1] + 0x58))((longlong *)param_2[1],local_58);
    return;
}



ulonglong FUN_14082bd00(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    uint uVar5;
    uint uVar6;

    uVar5 = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    uVar6 = DAT_140c61b18;
    uVar1 = FUN_140829790();
    uVar2 = FUN_140829860(param_1 + 0x28,(ulonglong)uVar6 / (ulonglong)uVar1);
    if ((int)uVar2 == 1) {
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x70) = 0;
        puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
        uVar6 = 0x34;
        *(undefined8 **)(param_1 + 0x88) = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
            uVar2 = 0x34;
        }
        else {
            *(undefined4 *)(param_1 + 0x78) = 0x20;
            *(undefined8 **)(param_1 + 0x70) = puVar3;
            uVar1 = uVar5;
            do {
                puVar4 = puVar3;
                uVar1 = uVar1 + 1;
                *puVar4 = puVar4 + 3;
                puVar3 = puVar4 + 3;
            } while (uVar1 < *(uint *)(param_1 + 0x78));
            *puVar4 = 0;
            uVar2 = 1;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        if ((int)uVar2 == 1) {
            *(undefined4 *)(param_1 + 0xb0) = 0;
            *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
            *(undefined8 *)(param_1 + 0xa0) = 0;
            puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
            *(undefined8 **)(param_1 + 0xb8) = puVar3;
            if (puVar3 != (undefined8 *)0x0) {
                *(undefined4 *)(param_1 + 0xa8) = 0x20;
                *(undefined8 **)(param_1 + 0xa0) = puVar3;
                do {
                    puVar4 = puVar3;
                    uVar5 = uVar5 + 1;
                    *puVar4 = puVar4 + 3;
                    puVar3 = puVar4 + 3;
                } while (uVar5 < *(uint *)(param_1 + 0xa8));
                *puVar4 = 0;
                uVar6 = 1;
            }
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined8 *)(param_1 + 0x98) = 0;
            uVar2 = (ulonglong)uVar6;
        }
    }
    return uVar2;
}



undefined8 FUN_14082be40(longlong *param_1,uint param_2,undefined8 *param_3)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    if (param_1[2] != 0) {
        LAB_14082be86:
        *(uint *)(param_1[2] + 8) = param_2;
        *(undefined8 *)(param_1[2] + 0x10) = *param_3;
        if ((longlong **)*param_1 == (longlong **)0x0) {
            plVar1 = (longlong *)param_1[2];
            param_1[1] = (longlong)plVar1;
            param_1[2] = *plVar1;
            *plVar1 = 0;
            *param_1 = param_1[1];
        }
        else {
            pplVar2 = (longlong **)0x0;
            pplVar3 = (longlong **)*param_1;
            do {
                pplVar4 = pplVar3;
                if (param_2 <= *(uint *)(pplVar3 + 1) && *(uint *)(pplVar3 + 1) != param_2) break;
                pplVar4 = (longlong **)*pplVar3;
                pplVar2 = pplVar3;
                pplVar3 = pplVar4;
            } while (pplVar4 != (longlong **)0x0);
            pplVar3 = (longlong **)param_1[2];
            if (pplVar4 == (longlong **)0x0) {
                param_1[1] = (longlong)pplVar3;
            }
            if (pplVar2 == (longlong **)0x0) {
                *param_1 = (longlong)pplVar3;
            }
            else {
                *pplVar2 = (longlong *)pplVar3;
            }
            param_1[2] = *(longlong *)param_1[2];
            *pplVar3 = (longlong *)pplVar4;
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        return 1;
    }
    if (*(uint *)(param_1 + 4) < *(uint *)((longlong)param_1 + 0x1c)) {
        plVar1 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x18);
        if (plVar1 != (longlong *)0x0) {
            *plVar1 = param_1[2];
            param_1[2] = (longlong)plVar1;
            goto LAB_14082be86;
        }
    }
    return 2;
}



void FUN_14082bf30(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong *local_res18 [2];
    undefined4 local_58 [20];

    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_3 + 8) = param_4;
    local_res18[0] = param_3;
    iVar2 = FUN_14082be40(param_1 + 0x90,param_2,local_res18);
    if (iVar2 == 1) {
        return;
    }
    local_58[0] = 0;
    if (*(short *)(param_3[1] + 0x3c) != 0x403) {
        if (*(short *)(param_3[1] + 0x3c) != 0x503) goto LAB_14082bf9e;
        FUN_1408570e0();
    }
    (**(code **)(*(longlong *)param_3[1] + 0x58))((longlong *)param_3[1],local_58);
    LAB_14082bf9e:
    FUN_14083c260(DAT_140c61b80,*(undefined4 *)(param_3 + 7));
    (**(code **)(*(longlong *)param_3[1] + 0x10))();
    uVar1 = DAT_140c10f20;
    (**(code **)(*param_3 + 8))(param_3,0);
    FUN_140881720(uVar1,param_3);
    return;
}



ulonglong FUN_14082bfe0(undefined8 param_1,longlong param_2,int **param_3)

{
    int *piVar1;
    int *piVar2;
    bool bVar3;
    longlong *in_RAX;
    int *piVar4;
    longlong lVar5;
    longlong *plVar6;

    if (param_3 == (int **)0x0) {
        return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
    lVar5 = 0;
    bVar3 = false;
    if ((*(int *)(param_2 + 0x38) != 0) &&
        (in_RAX = (longlong *)FUN_140855940(param_2), in_RAX != (longlong *)0x0)) {
        piVar1 = *param_3;
        piVar2 = param_3[1];
        plVar6 = in_RAX;
        do {
            if (piVar1 != piVar2) {
                piVar4 = piVar1;
                do {
                    if ((*(int *)(plVar6 + 3) == *piVar4) &&
                        ((*(byte *)((longlong)plVar6 + 0x5b) >> 1 & 1) == *(byte *)(piVar4 + 1)))
                        goto LAB_14082c0cc;
                    piVar4 = piVar4 + 2;
                } while (piVar4 != piVar2);
            }
            if ((!bVar3) && (lVar5 = plVar6[9], lVar5 != 0)) {
                bVar3 = true;
            }
            plVar6 = (longlong *)plVar6[8];
        } while (plVar6 != (longlong *)0x0);
        for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x48)) {
            if (piVar1 != piVar2) {
                piVar4 = piVar1;
                do {
                    if ((*(int *)(lVar5 + 0x18) == *piVar4) &&
                        ((*(byte *)(lVar5 + 0x5b) >> 1 & 1) == *(byte *)(piVar4 + 1))) {
                        LAB_14082c0cc:
                        (**(code **)(*in_RAX + 0x10))(in_RAX);
                        return 1;
                    }
                    piVar4 = piVar4 + 2;
                } while (piVar4 != piVar2);
            }
        }
        in_RAX = (longlong *)(**(code **)(*in_RAX + 0x10))(in_RAX);
    }
    return (ulonglong)in_RAX & 0xffffffffffffff00;
}



undefined8 FUN_14082c0f0(LPCRITICAL_SECTION param_1,undefined2 *param_2,uint param_3)

{
    int iVar1;
    uint uVar2;
    undefined8 uVar3;

    *param_2 = (short)param_3;
    uVar3 = FUN_140829a50(param_1 + 1);
    iVar1 = (int)uVar3;
    while( true ) {
        if (iVar1 != 0x34) {
            return uVar3;
        }
        uVar2 = FUN_140829790();
        if (uVar2 < param_3) break;
        ResetEvent(param_1[5].LockSemaphore);
        *(undefined *)&param_1[2].LockCount = 1;
        LeaveCriticalSection(param_1);
        FUN_140856280(&param_1[5].LockCount);
        WaitForSingleObject(param_1[5].LockSemaphore,0xffffffff);
        EnterCriticalSection(param_1);
        uVar3 = FUN_140829a50(param_1 + 1,param_2,param_3);
        iVar1 = (int)uVar3;
    }
    return 0x51;
}



undefined8 FUN_14082c1a0(longlong param_1,int param_2,int param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    for (puVar1 = *(undefined8 **)(param_1 + 0x90); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        lVar2 = puVar1[2];
        if ((param_2 == *(int *)(*(longlong *)(lVar2 + 8) + 0x18)) &&
            ((param_3 == 0 || (*(int *)(lVar2 + 0x38) == param_3)))) {
            *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + 1;
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar4 = (undefined8 *)0x0;
    while (puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
        lVar2 = puVar3[2];
        if ((param_2 == *(int *)(*(longlong *)(lVar2 + 8) + 0x18)) &&
            ((param_3 == 0 || (*(int *)(lVar2 + 0x38) == param_3)))) {
            FUN_14082bf30(param_1,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x38),lVar2,0);
            puVar1 = (undefined8 *)*puVar3;
            if (puVar3 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar1;
            }
            else {
                *puVar4 = puVar1;
            }
            if (puVar3 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar4;
            }
            *puVar3 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar3;
        }
        else {
            puVar1 = (undefined8 *)*puVar3;
            puVar4 = puVar3;
        }
    }
    return 1;
}



undefined8 FUN_14082c2b0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    int iVar6;

    if (param_2 != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x60);
        puVar3 = (undefined8 *)0x0;
        while (puVar4 = puVar5, puVar4 != (undefined8 *)0x0) {
            lVar1 = puVar4[2];
            lVar2 = *(longlong *)(lVar1 + 8);
            if (lVar1 == param_2) {
                iVar6 = 0;
                if (*(short *)(lVar2 + 0x3c) == 0x503) {
                    iVar6 = *(int *)(lVar2 + 0xf0);
                    *(undefined4 *)(lVar2 + 0xf0) = 0;
                    iVar6 = iVar6 + -1;
                }
                FUN_14082bf30(param_1,*(undefined4 *)(lVar2 + 0x38),lVar1,iVar6);
                if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                    *(undefined8 *)(param_1 + 0x60) = *puVar4;
                }
                else {
                    *puVar3 = *puVar4;
                }
                if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                    *(undefined8 **)(param_1 + 0x68) = puVar3;
                }
                *puVar4 = *(undefined8 *)(param_1 + 0x70);
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
                *(undefined8 **)(param_1 + 0x70) = puVar4;
                return 1;
            }
            puVar3 = puVar4;
            puVar5 = (undefined8 *)*puVar4;
        }
        for (puVar3 = *(undefined8 **)(param_1 + 0x90); puVar3 != (undefined8 *)0x0;
             puVar3 = (undefined8 *)*puVar3) {
            lVar1 = puVar3[2];
            if (lVar1 == param_2) {
                if (*(short *)(*(longlong *)(lVar1 + 8) + 0x3c) == 0x503) {
                    *(int *)(lVar1 + 0x40) =
                            *(int *)(lVar1 + 0x40) + *(int *)(*(longlong *)(lVar1 + 8) + 0xf0);
                    return 1;
                }
                *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
                return 1;
            }
        }
    }
    return 1;
}



void FUN_14082c3b0(longlong param_1,longlong *param_2,longlong param_3,char param_4,int param_5)

{
    ushort uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;

    puVar2 = *(undefined8 **)(param_1 + 0x90);
    while (puVar2 != (undefined8 *)0x0) {
        lVar3 = puVar2[2];
        lVar4 = *(longlong *)(lVar3 + 8);
        plVar6 = (longlong *)FUN_140855940();
        if (param_2 == (longlong *)0x0) {
            LAB_14082c460:
            uVar1 = *(ushort *)(lVar4 + 0x3c);
            if (((((uVar1 & 0xff00) != 0x300) || (param_4 != '\0')) &&
                 ((param_3 == 0 || (param_3 == *(longlong *)(lVar3 + 0x48))))) &&
                (((param_5 == 0 || (param_5 == *(int *)(lVar3 + 0x38))) && (uVar1 != 0x1820)))) {
                *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
            }
        }
        else if (plVar6 != (longlong *)0x0) {
            if (param_2 == plVar6) goto LAB_14082c460;
            plVar7 = (longlong *)plVar6[9];
            for (plVar5 = (longlong *)plVar6[8]; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[8]
                    ) {
                if (param_2 == plVar5) goto LAB_14082c460;
                if (plVar7 == (longlong *)0x0) {
                    plVar7 = (longlong *)plVar5[9];
                }
            }
            for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[9]) {
                if (param_2 == plVar7) goto LAB_14082c460;
            }
        }
        puVar2 = (undefined8 *)*puVar2;
        if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
        }
    }
    puVar9 = (undefined8 *)0x0;
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    do {
        if (puVar2 == (undefined8 *)0x0) {
            return;
        }
        lVar3 = puVar2[2];
        lVar4 = *(longlong *)(lVar3 + 8);
        plVar6 = (longlong *)FUN_140855940();
        if (param_2 == (longlong *)0x0) {
            LAB_14082c55f:
            uVar1 = *(ushort *)(lVar4 + 0x3c);
            if (((((uVar1 & 0xff00) == 0x300) && (param_4 == '\0')) ||
                 ((param_3 != 0 && (param_3 != *(longlong *)(lVar3 + 0x48))))) ||
                (((param_5 != 0 && (param_5 != *(int *)(lVar3 + 0x38))) || (uVar1 == 0x1820))))
                goto LAB_14082c52e;
            FUN_14082bf30(param_1,*(undefined4 *)(lVar4 + 0x38),lVar3,0);
            puVar8 = (undefined8 *)*puVar2;
            if (puVar2 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar8;
            }
            else {
                *puVar9 = puVar8;
            }
            if (puVar2 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar9;
            }
            *puVar2 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar2;
        }
        else {
            if (plVar6 != (longlong *)0x0) {
                if (param_2 == plVar6) goto LAB_14082c55f;
                plVar7 = (longlong *)plVar6[9];
                for (plVar5 = (longlong *)plVar6[8]; plVar5 != (longlong *)0x0;
                     plVar5 = (longlong *)plVar5[8]) {
                    if (param_2 == plVar5) goto LAB_14082c55f;
                    if (plVar7 == (longlong *)0x0) {
                        plVar7 = (longlong *)plVar5[9];
                    }
                }
                for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[9]) {
                    if (param_2 == plVar7) goto LAB_14082c55f;
                }
            }
            LAB_14082c52e:
            puVar8 = (undefined8 *)*puVar2;
            puVar9 = puVar2;
        }
        puVar2 = puVar8;
        if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
        }
    } while( true );
}



void FUN_14082c610(longlong param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    char cVar6;

    for (puVar1 = *(undefined8 **)(param_1 + 0x90); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        lVar2 = puVar1[2];
        lVar3 = *(longlong *)(lVar2 + 8);
        if (((((*(ushort *)(lVar3 + 0x3c) & 0xff00) != 0x300) || (param_4 != '\0')) &&
             ((param_2 == 0 || (param_2 == *(longlong *)(lVar2 + 0x48))))) &&
            ((((param_5 == 0 || (param_5 == *(int *)(lVar2 + 0x38))) &&
               (cVar6 = FUN_14082bfe0(param_1,lVar3,param_3), cVar6 == '\0')) &&
              (*(short *)(lVar3 + 0x3c) != 0x1820)))) {
            *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + 1;
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar5 = (undefined8 *)0x0;
    while (puVar4 = puVar1, puVar4 != (undefined8 *)0x0) {
        lVar2 = puVar4[2];
        lVar3 = *(longlong *)(lVar2 + 8);
        if ((((((*(ushort *)(lVar3 + 0x3c) & 0xff00) == 0x300) && (param_4 == '\0')) ||
              ((param_2 != 0 && (param_2 != *(longlong *)(lVar2 + 0x48))))) ||
             (((param_5 != 0 && (param_5 != *(int *)(lVar2 + 0x38))) ||
               (cVar6 = FUN_14082bfe0(param_1,lVar3,param_3), cVar6 != '\0')))) ||
            (*(short *)(lVar3 + 0x3c) == 0x1820)) {
            puVar1 = (undefined8 *)*puVar4;
            puVar5 = puVar4;
        }
        else {
            FUN_14082bf30(param_1,*(undefined4 *)(lVar3 + 0x38),lVar2,0);
            puVar1 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar1;
            }
            else {
                *puVar5 = puVar1;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar5;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14082c7e0(longlong param_1,int param_2)

{
    int *piVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    for (puVar2 = *(undefined8 **)(param_1 + 0x90); puVar2 != (undefined8 *)0x0;
         puVar2 = (undefined8 *)*puVar2) {
        if ((*(int *)(puVar2[2] + 0x38) == param_2) && (_DAT_0000003c != 0x1820)) {
            piVar1 = (int *)(puVar2[2] + 0x40);
            *piVar1 = *piVar1 + 1;
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    puVar5 = (undefined8 *)0x0;
    while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
        lVar3 = puVar4[2];
        if ((*(int *)(lVar3 + 0x38) == param_2) &&
            (*(short *)(*(longlong *)(lVar3 + 8) + 0x3c) != 0x1820)) {
            FUN_14082bf30(param_1,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x38),lVar3,0);
            puVar2 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar2;
            }
            else {
                *puVar5 = puVar2;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar5;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
        }
        else {
            puVar2 = (undefined8 *)*puVar4;
            puVar5 = puVar4;
        }
    }
    return;
}



void FUN_14082c8e0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    iVar1 = FUN_140833f20();
    while( true ) {
        FUN_14082cc10(param_1);
        FUN_14082df30(param_1);
        if (DAT_140c62414 != '\0') {
            FUN_140858ef0();
        }
        if (iVar1 == 0) break;
        iVar2 = (int)(DAT_140c61be8 - DAT_140c61be0 >> 3) + -1;
        lVar3 = (longlong)iVar2;
        if (-1 < iVar2) {
            do {
                (**(code **)(DAT_140c61be0 + lVar3 * 8))(0);
                lVar3 = lVar3 + -1;
            } while (-1 < lVar3);
        }
        iVar2 = *(int *)(param_1 + 0xc0);
        FUN_14083b030(DAT_140c61b70,iVar2 + 1);
        FUN_14083a5e0(DAT_140c61b98,iVar2 + 1);
        FUN_14084b1c0();
        FUN_140844710();
        FUN_140834340();
        FUN_1408441b0();
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
        iVar1 = iVar1 + -1;
    }
    if (DAT_140c61fe0 != 0) {
        FUN_140845c90();
    }
    // WARNING: Could not recover jumptable at 0x00014082c9c3. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
    return;
}



void FUN_14082c9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
    int iVar1;
    longlong *plVar2;
    undefined4 local_res20;
    undefined4 local_res24;
    undefined4 local_a8 [2];
    longlong *local_a0;
    undefined8 local_98;
    undefined4 *local_90;
    undefined8 local_88;
    undefined4 local_80;
    int *local_78;
    undefined4 local_70;
    undefined4 local_68;
    undefined4 local_24;
    undefined8 local_20;
    undefined8 local_18;
    undefined4 local_10;
    undefined local_c;
    undefined local_b;
    undefined local_a;

    plVar2 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_2,0);
    if (plVar2 != (longlong *)0x0) {
        local_70 = *(undefined4 *)(param_4 + 3);
        local_88 = *param_4;
        local_res20 = 0;
        local_res24 = 4;
        local_80 = *(undefined4 *)(param_4 + 1);
        local_78 = (int *)param_4[2];
        local_24 = 0;
        local_a = 0;
        local_c = 0;
        local_68 = 0;
        local_a8[0] = 0;
        if (local_78 != (int *)0x0) {
            *local_78 = *local_78 + 1;
        }
        local_20 = 0;
        local_18 = 0;
        local_90 = &local_res20;
        local_10 = 0;
        local_b = 1;
        local_a0 = plVar2;
        local_98 = param_3;
        iVar1 = FUN_14084ed10(plVar2,local_a8);
        if (iVar1 == 1) {
            (**(code **)(*plVar2 + 0x278))(plVar2,local_a8);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
        if (local_78 != (int *)0x0) {
            FUN_140828460();
        }
    }
    if (param_4[2] != 0) {
        FUN_140828460();
    }
    return;
}



void FUN_14082cad0(undefined8 param_1,longlong *param_2)

{
    undefined4 uVar1;

    (**(code **)(*(longlong *)param_2[1] + 0x40))();
    if (*(int *)(param_2 + 7) != 0) {
        FUN_14083c260(DAT_140c61b80);
    }
    (**(code **)(*(longlong *)param_2[1] + 0x10))();
    uVar1 = DAT_140c10f20;
    (**(code **)(*param_2 + 8))(param_2,0);
    FUN_140881720(uVar1,param_2);
    return;
}



void FUN_14082cb30(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined local_1a;
    longlong *local_18;

    if (param_2 != (longlong *)0x0) {
        local_20 = param_6;
        local_1c = 0;
        local_1a = 0;
        local_28 = param_7;
        local_24 = param_5;
        local_30 = param_3;
        local_18 = param_2;
        if (param_4 == 0) {
            FUN_14082f330(DAT_140c61b68,param_2,param_3,param_7);
            local_38[0] = 0;
        }
        else if (param_4 == 1) {
            FUN_14082c3b0(DAT_140c61b68,param_2,param_3,1,param_7);
            local_38[0] = 1;
        }
        else if (param_4 == 2) {
            FUN_14082eab0(DAT_140c61b68,param_2,param_3,0,param_7);
            local_38[0] = 2;
        }
        else {
            if (param_4 != 3) {
                return;
            }
            FUN_14082b4e0(DAT_140c61b68,param_2,param_3,param_7);
            local_38[0] = 3;
        }
        (**(code **)(*param_2 + 0x80))(param_2,local_38);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014082dd6c)

undefined8 FUN_14082cc10(LPCRITICAL_SECTION param_1)

{
    byte *pbVar1;
    byte bVar2;
    undefined2 uVar3;
    undefined4 uVar4;
    int iVar5;
    int *piVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    uint uVar10;
    undefined2 *puVar11;
    undefined8 *puVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong lVar15;
    ulonglong uVar16;
    undefined8 uVar17;
    longlong lVar18;
    longlong *plVar19;
    byte bVar20;
    byte bVar21;
    undefined2 *puVar22;
    undefined2 uVar23;
    uint uVar24;
    undefined4 extraout_XMM0_Da;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    undefined4 *in_stack_fffffffffffffe68;
    undefined8 local_168;
    ulonglong local_160;
    ulonglong local_158;
    undefined4 local_150;
    undefined2 local_14c;
    undefined local_14a;
    undefined8 local_148;
    undefined4 local_140;
    byte local_13c;
    undefined8 local_138;
    undefined4 local_130;
    undefined4 local_124;
    longlong local_120;
    undefined4 local_118;
    undefined4 local_110;
    undefined2 *local_108;
    undefined4 local_100 [2];
    undefined4 local_f8 [46];

    if ((*(char *)&param_1[2].LockCount != '\0') ||
        (*(int *)((longlong)&param_1[4].SpinCount + 4) != *(int *)&param_1[5].DebugInfo)) {
        bVar9 = false;
        EnterCriticalSection(param_1);
        fVar31 = -0.05;
        fVar29 = -37.0;
        fVar28 = 0.0;
        fVar34 = 0.3251898;
        fVar35 = 0.02080577;
        fVar36 = 0.6530434;
        fVar32 = 1.0;
        fVar30 = 65535.0;
        fVar33 = 0.05;
        bVar8 = false;
        do {
            if (((*(int *)((longlong)&param_1[1].LockSemaphore + 4) ==
                  *(int *)((longlong)&param_1[1].SpinCount + 4)) &&
                 (*(int *)&param_1[1].SpinCount == *(int *)&param_1[2].DebugInfo)) &&
                (*(char *)((longlong)&param_1[2].DebugInfo + 4) == '\0')) break;
            puVar11 = (undefined2 *)FUN_140829720();
            LeaveCriticalSection(param_1);
            lVar13 = DAT_140c61fe0;
            local_108 = puVar11;
            bVar7 = bVar8;
            switch(puVar11[1]) {
                case 0:
                    *(int *)&param_1[5].DebugInfo = *(int *)&param_1[5].DebugInfo + 1;
                    if ((*(int *)&param_1[5].DebugInfo == *(int *)((longlong)&param_1[4].SpinCount + 4)) &&
                        (*(char *)&param_1[2].LockCount == '\0')) {
                        bVar9 = true;
                        bVar7 = true;
                    }
                    else {
                        bVar9 = false;
                        bVar7 = false;
                    }
                    break;
                case 1:
                    lVar15 = FUN_140830310();
                    for (lVar13 = *(longlong *)(*(longlong *)(puVar11 + 0x18) + 0x20); lVar13 != 0;
                         lVar13 = *(longlong *)(lVar13 + 0x20)) {
                        if ((*(byte *)(lVar13 + 0x3c) & 1) == 0) {
                            puVar12 = (undefined8 *)FUN_1408819f0();
                            if (puVar12 != (undefined8 *)0x0) {
                                *puVar12 = &PTR_LAB_1409a2df8;
                                *(undefined4 *)(puVar12 + 7) = 0;
                                puVar12[4] = 0;
                                *(undefined4 *)(puVar12 + 5) = 0;
                                puVar12[6] = 0;
                                *(undefined4 *)((longlong)puVar12 + 0x44) = 0;
                                puVar12[9] = 0;
                                goto LAB_14082ce9d;
                            }
                        }
                        else if ((lVar15 != 0) &&
                                 (puVar12 = (undefined8 *)FUN_1408819f0(), puVar12 != (undefined8 *)0x0)) {
                            *puVar12 = &PTR_LAB_1409a2df8;
                            *(undefined4 *)(puVar12 + 7) = 0;
                            puVar12[4] = 0;
                            *(undefined4 *)(puVar12 + 5) = 0;
                            puVar12[6] = 0;
                            *(undefined4 *)((longlong)puVar12 + 0x44) = 0;
                            puVar12[9] = lVar15;
                            uVar10 = *(uint *)(lVar15 + 0x88);
                            *(uint *)(lVar15 + 0x88) = (uVar10 + 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                            LAB_14082ce9d:
                            if (puVar12 != (undefined8 *)0x0) {
                                uVar4 = *(undefined4 *)(puVar11 + 10);
                                puVar12[1] = lVar13;
                                *(undefined4 *)((longlong)puVar12 + 0x44) = uVar4;
                                *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(puVar11 + 8);
                                puVar12[4] = *(undefined8 *)(puVar11 + 0xc);
                                *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar11 + 0x10);
                                piVar6 = *(int **)(puVar11 + 0x14);
                                if (puVar12[6] != 0) {
                                    FUN_140828460();
                                }
                                if (piVar6 != (int *)0x0) {
                                    *piVar6 = *piVar6 + 1;
                                }
                                puVar12[6] = piVar6;
                                FUN_14082bb80();
                            }
                        }
                        bVar8 = bVar9;
                    }
                    if (lVar15 != 0) {
                        uVar10 = *(uint *)(lVar15 + 0x88);
                        uVar10 = (uVar10 - 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                        *(uint *)(lVar15 + 0x88) = uVar10;
                        uVar4 = DAT_140c10f20;
                        if ((uVar10 & 0x3fffffff) == 0) {
                            FUN_14084bd30(lVar15);
                            FUN_140881720(uVar4);
                        }
                    }
                    FUN_14083c260(DAT_140c61b80);
                    (**(code **)(**(longlong **)(puVar11 + 0x18) + 0x10))();
                    bVar7 = bVar9;
                    if (*(longlong *)(puVar11 + 0x14) != 0) {
                        FUN_140828460();
                        bVar7 = bVar8;
                    }
                    break;
                case 2:
                    if (*(longlong *)(puVar11 + 8) == -1) {
                        local_100[0] = 0;
                        in_stack_fffffffffffffe68 = local_100;
                        LAB_14082d349:
                        FUN_1408380a0();
                    }
                    else {
                        lVar13 = FUN_140830310();
                        bVar7 = bVar9;
                        if (lVar13 != 0) {
                            in_stack_fffffffffffffe68 = local_f8;
                            local_f8[0] = 0;
                            FUN_1408380a0();
                            uVar10 = *(uint *)(lVar13 + 0x88);
                            uVar10 = (uVar10 - 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                            *(uint *)(lVar13 + 0x88) = uVar10;
                            if ((uVar10 & 0x3fffffff) == 0) {
                                FUN_14084bd30();
                                FUN_140881720();
                            }
                        }
                    }
                    break;
                case 3:
                    if (*(longlong *)(puVar11 + 8) == -1) {
                        in_stack_fffffffffffffe68 = (undefined4 *)(puVar11 + 0xc);
                        goto LAB_14082d349;
                    }
                    lVar13 = FUN_140830310();
                    bVar7 = bVar9;
                    if (lVar13 != 0) {
                        in_stack_fffffffffffffe68 = (undefined4 *)(puVar11 + 0xc);
                        FUN_1408380a0();
                        goto LAB_14082d44f;
                    }
                    break;
                case 5:
                    if (*(longlong *)(puVar11 + 8) == -1) {
                        local_118 = 0;
                        LAB_14082d6c5:
                        FUN_140837c80(DAT_140c61bb0,*(undefined4 *)(puVar11 + 4),0);
                    }
                    else {
                        lVar13 = FUN_140830310();
                        bVar7 = bVar9;
                        if (lVar13 != 0) {
                            local_110 = 0;
                            LAB_14082d6fc:
                            FUN_140837c80(DAT_140c61bb0,*(undefined4 *)(puVar11 + 4),lVar13);
                            goto LAB_14082d44f;
                        }
                    }
                    break;
                case 6:
                    if (*(longlong *)(puVar11 + 8) == -1) goto LAB_14082d6c5;
                    lVar13 = FUN_140830310();
                    bVar7 = bVar9;
                    if (lVar13 != 0) goto LAB_14082d6fc;
                    break;
                case 7:
                    in_stack_fffffffffffffe68 =
                            (undefined4 *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffffffffff00);
                    FUN_14082a960(DAT_140c61b78,*(undefined4 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 6));
                    break;
                case 8:
                    lVar13 = FUN_140830310();
                    bVar7 = bVar9;
                    if (lVar13 != 0) {
                        FUN_1408381e0(DAT_140c61bb0,*(undefined4 *)(puVar11 + 8),*(undefined4 *)(puVar11 + 10));
                        LAB_14082d44f:
                        uVar10 = *(uint *)(lVar13 + 0x88);
                        uVar10 = (uVar10 - 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                        *(uint *)(lVar13 + 0x88) = uVar10;
                        bVar7 = bVar9;
                        if ((uVar10 & 0x3fffffff) == 0) {
                            FUN_14084bd30();
                            FUN_140881720();
                        }
                    }
                    break;
                case 10:
                    if (*(longlong *)(puVar11 + 4) == -1) {
                        FUN_14082b070(DAT_140c61b78,*(undefined4 *)(puVar11 + 8),0);
                    }
                    else {
                        lVar13 = FUN_140830310();
                        bVar7 = bVar9;
                        if (lVar13 != 0) {
                            FUN_14082b070(DAT_140c61b78,*(undefined4 *)(puVar11 + 8),lVar13);
                            goto LAB_14082d44f;
                        }
                    }
                    break;
                case 0xb:
                    FUN_140830570(DAT_140c61ba0,*(undefined8 *)(puVar11 + 4),*(undefined8 *)(puVar11 + 8));
                    break;
                case 0xc:
                    if (*(longlong *)(puVar11 + 4) == -1) {
                        FUN_140830c00();
                    }
                    else {
                        FUN_140830d80();
                    }
                    break;
                case 0xd:
                    uVar23 = 1;
                    puVar22 = puVar11 + 8;
                    in_stack_fffffffffffffe68 =
                            (undefined4 *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000);
                    goto LAB_14082d5a2;
                case 0xe:
                    FUN_1408307d0(DAT_140c61ba0,*(undefined8 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 8));
                    break;
                case 0x10:
                    FUN_14084b420();
                    break;
                case 0x11:
                    puVar22 = puVar11 + 6;
                    if (*(char *)((longlong)puVar11 + 0x25) == '\0') {
                        puVar22 = (undefined2 *)0x0;
                    }
                    FUN_14084b500(*(undefined4 *)(puVar11 + 4),*(undefined *)(puVar11 + 0x12),puVar22);
                    break;
                case 0x12:
                    FUN_140830840(DAT_140c61ba0,*(undefined8 *)(puVar11 + 4),puVar11 + 10);
                    break;
                case 0x13:
                    FUN_140830890();
                    break;
                case 0x14:
                    in_stack_fffffffffffffe68 =
                            (undefined4 *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000);
                    FUN_140830a00(DAT_140c61ba0,*(undefined8 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 8));
                    break;
                case 0x16:
                    lVar13 = FUN_140830310();
                    bVar7 = bVar9;
                    if (lVar13 != 0) {
                        FUN_140839cf0();
                        goto LAB_14082d44f;
                    }
                    break;
                case 0x17:
                    switch(*(undefined4 *)(puVar11 + 8)) {
                        case 0:
                            FUN_140839ad0(*(undefined8 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 10),
                                          *(undefined4 *)(puVar11 + 0xc));
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                            break;
                        case 1:
                            FUN_1408399e0(*(undefined8 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 10),
                                          *(undefined4 *)(puVar11 + 0xc));
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                            break;
                        case 2:
                            FUN_140839bd0(*(undefined8 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 10),
                                          *(undefined4 *)(puVar11 + 0xc));
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                            break;
                        case 3:
                            *(undefined *)(*(longlong *)(puVar11 + 4) + 0x90) = 1;
                            FUN_14083c260(DAT_140c61b80);
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                        default:
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                            break;
                        case 4:
                            FUN_140839d20(*(undefined8 *)(puVar11 + 4),*(undefined4 *)(puVar11 + 10),
                                          *(undefined4 *)(puVar11 + 0xc));
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                            break;
                        case 5:
                            FUN_1408398b0(*(undefined8 *)(puVar11 + 4));
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                            break;
                        case 6:
                            FUN_140839cd0(*(undefined8 *)(puVar11 + 4));
                            (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                    }
                    break;
                case 0x18:
                    FUN_140844b30(*(undefined8 *)(puVar11 + 4));
                    FUN_140841fe0();
                    break;
                case 0x19:
                    lVar13 = *(longlong *)(puVar11 + 4);
                    plVar19 = (longlong *)FUN_140856810();
                    bVar7 = bVar9;
                    if (plVar19 != (longlong *)0x0) {
                        if (lVar13 == -1) {
                            local_168 = &PTR_LAB_1409a2df8;
                            local_130 = 0;
                            local_148 = 0;
                            local_140 = 0;
                            local_138 = 0;
                            local_124 = 0;
                            local_120 = 0;
                            (**(code **)(*plVar19 + 0x40))(plVar19);
                            LAB_14082d98f:
                            FUN_14082b3a0(&local_168);
                        }
                        else {
                            lVar13 = FUN_140830310();
                            if (lVar13 != 0) {
                                local_130 = 0;
                                local_148 = 0;
                                local_140 = 0;
                                local_138 = 0;
                                local_124 = 0;
                                local_168 = &PTR_LAB_1409a2df8;
                                uVar10 = *(uint *)(lVar13 + 0x88);
                                *(uint *)(lVar13 + 0x88) = (uVar10 + 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                                local_120 = lVar13;
                                (**(code **)(*plVar19 + 0x40))();
                                uVar10 = *(uint *)(lVar13 + 0x88);
                                uVar10 = (uVar10 - 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                                *(uint *)(lVar13 + 0x88) = uVar10;
                                uVar4 = DAT_140c10f20;
                                if ((uVar10 & 0x3fffffff) == 0) {
                                    FUN_14084bd30(lVar13);
                                    FUN_140881720(uVar4);
                                    FUN_14082b3a0(&local_168);
                                    (**(code **)(*plVar19 + 0x10))();
                                    break;
                                }
                                goto LAB_14082d98f;
                            }
                        }
                        (**(code **)(*plVar19 + 0x10))();
                    }
                    break;
                case 0x1a:
                    FUN_14084b3d0(*(undefined4 *)(puVar11 + 4),*(undefined *)(puVar11 + 6),
                                  *(undefined *)((longlong)puVar11 + 0xd));
                    break;
                case 0x1b:
                    FUN_14084b3a0();
                    break;
                case 0x1c:
                    if (DAT_140c61fe0 != 0) {
                        bVar20 = *(byte *)(puVar11 + 4);
                        bVar2 = *(byte *)((longlong)puVar11 + 9);
                        bVar21 = '\x01' << (bVar20 & 0x1f);
                        pbVar1 = (byte *)((ulonglong)*(byte *)((ulonglong)bVar20 + 0x78 + DAT_140c61fe0) + 0x7c +
                                          DAT_140c61fe0);
                        *pbVar1 = *pbVar1 & ~bVar21;
                        *(byte *)((ulonglong)bVar20 + 0x78 + lVar13) = bVar2;
                        pbVar1 = (byte *)((ulonglong)bVar2 + 0x7c + lVar13);
                        *pbVar1 = *pbVar1 | bVar21;
                    }
                    break;
                case 0x1d:
                    if (*(char *)(puVar11 + 0xc) == '\0') {
                        if (DAT_140c61fe0 != 0) {
                            FUN_140846440(DAT_140c61fe0,*(undefined *)(puVar11 + 4),puVar11[5]);
                        }
                    }
                    else {
                        uVar23 = puVar11[6];
                        uVar3 = puVar11[5];
                        uVar17 = FUN_140845df0();
                        in_stack_fffffffffffffe68 = *(undefined4 **)(puVar11 + 8);
                        FUN_140845980(uVar17,*(undefined *)(puVar11 + 4),uVar3,uVar23,in_stack_fffffffffffffe68);
                        bVar7 = bVar9;
                    }
                    break;
                case 0x1e:
                    if (DAT_140c61fe0 != 0) {
                        fVar25 = *(float *)(puVar11 + 4);
                        if (fVar25 <= fVar28) {
                            fVar25 = fVar25 * fVar33;
                            fVar27 = fVar28;
                            if (fVar29 <= fVar25) {
                                if ((DAT_140c61bfc & 1) == 0) {
                                    DAT_140c61bfc = DAT_140c61bfc | 1;
                                    DAT_140c61bf8 = 2.786635e+07;
                                }
                                uVar10 = (uint)(longlong)(fVar25 * DAT_140c61bf8 + 1.065353e+09);
                                fVar25 = (float)((uVar10 & 0x7fffff) + 0x3f800000);
                                fVar27 = ((fVar25 * fVar34 + fVar35) * fVar25 + fVar36) * (float)(uVar10 & 0xff800000)
                                        ;
                            }
                        }
                        else {
                            fVar25 = fVar25 * fVar31;
                            fVar27 = fVar30;
                            if (fVar29 <= fVar25) {
                                if ((DAT_140c61bfc & 1) == 0) {
                                    DAT_140c61bfc = DAT_140c61bfc | 1;
                                    DAT_140c61bf8 = 2.786635e+07;
                                }
                                uVar10 = (uint)(longlong)(fVar25 * DAT_140c61bf8 + 1.065353e+09);
                                fVar25 = (float)((uVar10 & 0x7fffff) + 0x3f800000);
                                fVar26 = ((fVar25 * fVar34 + fVar35) * fVar25 + fVar36) * (float)(uVar10 & 0xff800000)
                                        ;
                                if (fVar28 < fVar26) {
                                    fVar27 = fVar32 / fVar26;
                                }
                            }
                        }
                        uVar16 = 0;
                        lVar18 = (ulonglong)*(byte *)(puVar11 + 6) + 1;
                        lVar15 = *(longlong *)(DAT_140c61fe0 + lVar18 * 0x18);
                        bVar7 = bVar9;
                        if ((int)(*(longlong *)(DAT_140c61fe0 + 8 + lVar18 * 0x18) - lVar15 >> 4) != 0) {
                            do {
                                fVar25 = (float)(**(code **)(**(longlong **)(lVar15 + 8 + uVar16 * 0x10) + 0x80))
                                        (fVar25,fVar27);
                                lVar15 = *(longlong *)(lVar13 + lVar18 * 0x18);
                                bVar20 = (char)uVar16 + 1;
                                uVar16 = (ulonglong)bVar20;
                            } while ((uint)bVar20 < (uint)(*(longlong *)(lVar13 + 8 + lVar18 * 0x18) - lVar15 >> 4))
                                    ;
                        }
                    }
                    break;
                case 0x1f:
                    FUN_14082b920();
                    plVar19 = (longlong *)FUN_14085a9a0();
                    bVar7 = bVar9;
                    if (plVar19 != (longlong *)0x0) {
                        local_150 = *(undefined4 *)(puVar11 + 8);
                        local_14c = 0;
                        local_158 = *(ulonglong *)(puVar11 + 4);
                        local_14a = 0;
                        local_168 = (undefined **)((ulonglong)local_168 & 0xffffffff00000000);
                        local_160 = 0;
                        (**(code **)(*plVar19 + 0x80))(plVar19);
                        (**(code **)(*plVar19 + 0x10))();
                        bVar7 = bVar8;
                    }
                    break;
                case 0x20:
                    uVar16 = FUN_140830310();
                    if ((uVar16 != 0) || (*(longlong *)(puVar11 + 8) == -1)) {
                        for (lVar13 = *(longlong *)(*(longlong *)(puVar11 + 4) + 0x20); lVar13 != 0;
                             lVar13 = *(longlong *)(lVar13 + 0x20)) {
                            if (*(short *)(lVar13 + 0x3c) == 0x403) {
                                plVar19 = (longlong *)FUN_140855940();
                                if (plVar19 != (longlong *)0x0) {
                                    in_stack_fffffffffffffe68 =
                                            (undefined4 *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000);
                                    FUN_14082cb30(param_1);
                                    (**(code **)(*plVar19 + 0x10))();
                                }
                            }
                            else {
                                iVar5 = *(int *)(puVar11 + 0xc);
                                if (iVar5 == 0) {
                                    LAB_14082d1bc:
                                    FUN_14082ef10();
                                }
                                else if (iVar5 == 1) {
                                    FUN_14082c1a0(DAT_140c61b68,*(undefined4 *)(lVar13 + 0x18),
                                                  *(undefined4 *)(puVar11 + 0x12));
                                }
                                else if (iVar5 == 2) {
                                    FUN_14082e7e0();
                                }
                                else if (iVar5 == 3) goto LAB_14082d1bc;
                            }
                            bVar8 = bVar9;
                        }
                        LAB_14082d2e2:
                        if (uVar16 != 0) {
                            uVar10 = *(uint *)(uVar16 + 0x88);
                            uVar10 = (uVar10 - 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                            *(uint *)(uVar16 + 0x88) = uVar10;
                            uVar4 = DAT_140c10f20;
                            if ((uVar10 & 0x3fffffff) == 0) {
                                FUN_14084bd30(uVar16);
                                FUN_140881720(uVar4);
                            }
                        }
                    }
                    goto LAB_14082d328;
                case 0x21:
                    FUN_1408308e0();
                    break;
                case 0x22:
                    uVar23 = puVar11[8];
                    puVar22 = puVar11 + 0xc;
                    in_stack_fffffffffffffe68 =
                            (undefined4 *)
                                    ((ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000 |
                                     (ulonglong)*(uint *)(puVar11 + 10));
                LAB_14082d5a2:
                    FUN_140830a60(DAT_140c61ba0,*(undefined8 *)(puVar11 + 4),puVar22,uVar23,
                                  in_stack_fffffffffffffe68);
                    break;
                case 0x23:
                    FUN_14084b960(extraout_XMM0_Da,*(undefined4 *)(puVar11 + 6));
                    break;
                case 0x24:
                    uVar16 = FUN_140830310();
                    if ((uVar16 != 0) || (*(longlong *)(puVar11 + 8) == -1)) {
                        for (lVar13 = *(longlong *)(*(longlong *)(puVar11 + 4) + 0x20); lVar13 != 0;
                             lVar13 = *(longlong *)(lVar13 + 0x20)) {
                            if ((*(short *)(lVar13 + 0x3c) == 0x403) &&
                                (plVar19 = (longlong *)FUN_140830f00(DAT_140c61ba8,*(undefined4 *)(lVar13 + 0x38),0),
                                        plVar19 != (longlong *)0x0)) {
                                local_14c = 0;
                                local_14a = 0;
                                local_150 = 4;
                                local_158 = 0;
                                local_168 = (undefined **)CONCAT44(local_168._4_4_,4);
                                local_13c = (*(byte *)((longlong)puVar11 + 0x1d) & 1) * '\x02' |
                                            *(byte *)(puVar11 + 0xe) & 1 | local_13c & 0xfc;
                                local_140 = *(undefined4 *)(puVar11 + 0xc);
                                local_160 = uVar16;
                                (**(code **)(*plVar19 + 0x80))(plVar19);
                                (**(code **)(*plVar19 + 0x10))();
                            }
                            bVar8 = bVar9;
                        }
                        goto LAB_14082d2e2;
                    }
                LAB_14082d328:
                    (**(code **)(**(longlong **)(puVar11 + 4) + 0x10))();
                    bVar7 = bVar8;
                    break;
                case 0x25:
                    uVar4 = *(undefined4 *)(puVar11 + 8);
                    uVar10 = (*(int *)(puVar11 + 0x18) * 0x1000 + *(int *)(puVar11 + 0x1a)) * 0x10 + 2;
                    uVar24 = uVar10 | 0x80000000;
                    if (*(int *)(puVar11 + 0x1c) == 0) {
                        lVar13 = FUN_140830310();
                        bVar7 = bVar9;
                        if (lVar13 != 0) {
                            plVar19 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x3e30);
                            if (plVar19 == (longlong *)0x0) {
                                plVar19 = (longlong *)FUN_1408575e0(uVar24);
                                if (plVar19 != (longlong *)0x0) {
                                    FUN_140857a60(plVar19,uVar10,0);
                                }
                            }
                            else {
                                (**(code **)(*plVar19 + 0x10))(plVar19);
                            }
                            plVar14 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar24,0);
                            if ((plVar14 == (longlong *)0x0) && (plVar19 != (longlong *)0x0)) {
                                lVar15 = FUN_140857f40(uVar24);
                                if (lVar15 != 0) {
                                    FUN_1408564b0(lVar15 + 0xa8);
                                }
                            }
                            else {
                                (**(code **)(*plVar14 + 0x10))(plVar14);
                            }
                            local_168 = (undefined **)0x0;
                            local_160 = local_160 & 0xffffffff00000000;
                            local_158 = 0;
                            local_150 = uVar4;
                            FUN_14082c9d0(param_1,uVar24,lVar13);
                            uVar10 = *(uint *)(lVar13 + 0x88);
                            uVar10 = (uVar10 - 1 ^ uVar10) & 0x3fffffff ^ uVar10;
                            *(uint *)(lVar13 + 0x88) = uVar10;
                            if ((uVar10 & 0x3fffffff) == 0) {
                                FUN_14084bd30();
                                FUN_140881720();
                            }
                        }
                    }
                    else {
                        bVar7 = bVar9;
                        if ((*(int *)(puVar11 + 0x1c) == 1) &&
                            (plVar19 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar24,0),
                                    plVar19 != (longlong *)0x0)) {
                            local_14c = 0;
                            local_14a = 0;
                            local_150 = 4;
                            local_160 = 0;
                            local_158 = (ulonglong)*(uint *)(puVar11 + 8);
                            local_168 = (undefined **)((ulonglong)local_168 & 0xffffffff00000000);
                            (**(code **)(*plVar19 + 0x80))(plVar19);
                            (**(code **)(*plVar19 + 0x10))();
                        }
                    }
                    break;
                case 0x26:
                    if (DAT_140c61c60 != 0) {
                        if (*(longlong *)(puVar11 + 4) == 0) {
                            FUN_14085ce40(DAT_140c61c60);
                            if (DAT_140c61fe0 != 0) {
                                FUN_140846960();
                            }
                        }
                        else {
                            FUN_14085cdc0();
                            if ((*(char *)(puVar11 + 8) != '\0') && (DAT_140c61fe0 != 0)) {
                                FUN_1408467f0(DAT_140c61fe0,*(undefined8 *)(puVar11 + 4));
                            }
                            FUN_140881720();
                        }
                    }
                    break;
                case 0x27:
                    plVar19 = (longlong *)
                            FUN_140830f00(DAT_140c61ba8,*(undefined4 *)(puVar11 + 4),
                                          *(undefined4 *)(puVar11 + 10));
                    bVar7 = bVar9;
                    if (plVar19 != (longlong *)0x0) {
                        uVar10 = (**(code **)(*plVar19 + 0x70))(plVar19);
                        if ((uVar10 < 10) || (uVar10 == 0xc)) {
                            FUN_140854420(plVar19,*(undefined4 *)(puVar11 + 6),*(undefined4 *)(puVar11 + 8),1);
                        }
                        (**(code **)(*plVar19 + 0x10))();
                        bVar7 = bVar8;
                    }
                    break;
                case 0x28:
                    FUN_140831540();
            }
            uVar23 = *local_108;
            DAT_140c62410 = DAT_140c62410 + 1;
            EnterCriticalSection(param_1);
            FUN_140829780(param_1 + 1,uVar23);
            bVar8 = bVar7;
        } while (!bVar7);
        *(undefined *)&param_1[2].LockCount = 0;
        LeaveCriticalSection(param_1);
        SetEvent(param_1[5].LockSemaphore);
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14082df30(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    char cVar5;
    undefined4 local_58 [20];

    puVar1 = *(undefined8 **)(param_1 + 0x60);
    while ((puVar1 != (undefined8 *)0x0 &&
            (*(uint *)(puVar1 + 1) < *(uint *)(param_1 + 0xc0) ||
             *(uint *)(puVar1 + 1) == *(uint *)(param_1 + 0xc0)))) {
        plVar2 = (longlong *)puVar1[2];
        uVar4 = *puVar1;
        if (puVar1 == *(undefined8 **)(param_1 + 0x60)) {
            *(undefined8 *)(param_1 + 0x60) = *puVar1;
            uVar4 = _DAT_00000000;
        }
        _DAT_00000000 = uVar4;
        if (puVar1 == *(undefined8 **)(param_1 + 0x68)) {
            *(undefined8 *)(param_1 + 0x68) = 0;
        }
        local_58[0] = 0;
        *puVar1 = *(undefined8 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        *(undefined8 **)(param_1 + 0x70) = puVar1;
        if ((*(short *)(plVar2[1] + 0x3c) == 0x403) ||
            ((*(short *)(plVar2[1] + 0x3c) == 0x503 && (cVar5 = FUN_1408570e0(), cVar5 != '\0')))) {
            (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_58);
        }
        (**(code **)(*(longlong *)plVar2[1] + 0x40))();
        if (*(int *)(plVar2 + 7) != 0) {
            FUN_14083c260(DAT_140c61b80);
        }
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        uVar3 = DAT_140c10f20;
        (**(code **)(*plVar2 + 8))(plVar2,0);
        FUN_140881720(uVar3,plVar2);
        DAT_140c62410 = DAT_140c62410 + 1;
        puVar1 = *(undefined8 **)(param_1 + 0x60);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14082e070(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    undefined4 local_68 [20];

    if (*(int *)(param_1 + 0xac) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x90);
        while (puVar3 != (undefined8 *)0x0) {
            plVar1 = (longlong *)puVar3[2];
            local_68[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082e0e4:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_68);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082e0e4;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar2 = (undefined8 *)*puVar3;
            puVar5 = puVar2;
            if (puVar3 == *(undefined8 **)(param_1 + 0x90)) {
                *(undefined8 **)(param_1 + 0x90) = puVar2;
                puVar5 = (undefined8 *)_DAT_00000000;
            }
            _DAT_00000000 = puVar5;
            if (puVar3 == *(undefined8 **)(param_1 + 0x98)) {
                *(undefined8 *)(param_1 + 0x98) = 0;
            }
            *puVar3 = *(undefined8 *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
            *(undefined8 **)(param_1 + 0xa0) = puVar3;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar4 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar4);
            puVar3 = puVar2;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14082e1c0(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    undefined4 local_68 [20];

    if (*(int *)(param_1 + 0x7c) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x60);
        while (puVar3 != (undefined8 *)0x0) {
            plVar1 = (longlong *)puVar3[2];
            local_68[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082e224:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_68);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082e224;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar2 = (undefined8 *)*puVar3;
            puVar5 = puVar2;
            if (puVar3 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar2;
                puVar5 = (undefined8 *)_DAT_00000000;
            }
            _DAT_00000000 = puVar5;
            if (puVar3 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 *)(param_1 + 0x68) = 0;
            }
            *puVar3 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar3;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar4 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar4);
            puVar3 = puVar2;
        }
    }
    return;
}



void FUN_14082e2f0(LPCRITICAL_SECTION param_1)

{
    short sVar1;
    longlong lVar2;

    EnterCriticalSection(param_1);
    do {
        while( true ) {
            if (((*(int *)((longlong)&param_1[1].LockSemaphore + 4) ==
                  *(int *)((longlong)&param_1[1].SpinCount + 4)) &&
                 (*(int *)&param_1[1].SpinCount == *(int *)&param_1[2].DebugInfo)) &&
                (*(char *)((longlong)&param_1[2].DebugInfo + 4) == '\0')) {
                // WARNING: Could not recover jumptable at 0x00014082e3f5. Too many branches
                // WARNING: Treating indirect jump as call
                LeaveCriticalSection(param_1);
                return;
            }
            lVar2 = FUN_1408296d0();
            sVar1 = *(short *)(lVar2 + 2);
            if (sVar1 == 1) break;
            if (sVar1 == 0xb) goto LAB_14082e3d2;
            if (sVar1 == 0x17) {
                if (*(int *)(lVar2 + 0x10) == 3) {
                    FUN_14083c260(DAT_140c61b80,*(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x88));
                    (**(code **)(**(longlong **)(lVar2 + 8) + 0x10))();
                }
                (**(code **)(**(longlong **)(lVar2 + 8) + 0x10))();
                FUN_140829780(param_1 + 1);
            }
            else {
                if ((sVar1 != 0x20) && (sVar1 != 0x24)) goto LAB_14082e3d2;
                (**(code **)(**(longlong **)(lVar2 + 8) + 0x10))();
                FUN_140829780(param_1 + 1);
            }
        }
        FUN_14083c260(DAT_140c61b80,*(undefined4 *)(lVar2 + 0x10));
        (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x10))();
        if (*(longlong *)(lVar2 + 0x28) != 0) {
            FUN_140828460();
        }
        LAB_14082e3d2:
        FUN_140829780(param_1 + 1);
    } while( true );
}



void FUN_14082e400(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined4 local_68 [20];

    puVar8 = (undefined8 *)0x0;
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    do {
        if (puVar3 == (undefined8 *)0x0) {
            return;
        }
        plVar1 = (longlong *)puVar3[2];
        plVar5 = (longlong *)FUN_140855940(plVar1[1]);
        if ((param_2 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
            LAB_14082e49e:
            puVar7 = (undefined8 *)*puVar3;
            puVar8 = puVar3;
        }
        else {
            if (param_2 != plVar5) {
                plVar6 = (longlong *)plVar5[9];
                for (plVar2 = (longlong *)plVar5[8]; plVar2 != (longlong *)0x0;
                     plVar2 = (longlong *)plVar2[8]) {
                    if (param_2 == plVar2) goto LAB_14082e4e0;
                    if (plVar6 == (longlong *)0x0) {
                        plVar6 = (longlong *)plVar2[9];
                    }
                }
                for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[9]) {
                    if (param_2 == plVar6) goto LAB_14082e4e0;
                }
                goto LAB_14082e49e;
            }
            LAB_14082e4e0:
            local_68[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082e500:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_68);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082e500;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar7 = (undefined8 *)*puVar3;
            if (puVar3 == *(undefined8 **)(param_1 + 0x90)) {
                *(undefined8 **)(param_1 + 0x90) = puVar7;
            }
            else {
                *puVar8 = puVar7;
            }
            if (puVar3 == *(undefined8 **)(param_1 + 0x98)) {
                *(undefined8 **)(param_1 + 0x98) = puVar8;
            }
            *puVar3 = *(undefined8 *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
            *(undefined8 **)(param_1 + 0xa0) = puVar3;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar4 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar4);
        }
        puVar3 = puVar7;
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
        }
    } while( true );
}



void FUN_14082e5b0(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined4 local_78 [20];

    puVar9 = (undefined8 *)0x0;
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    do {
        if (puVar4 == (undefined8 *)0x0) {
            return;
        }
        plVar1 = (longlong *)puVar4[2];
        lVar2 = plVar1[1];
        plVar6 = (longlong *)FUN_140855940(lVar2);
        if ((param_2 == (longlong *)0x0) || (plVar6 == (longlong *)0x0)) {
            LAB_14082e64e:
            puVar8 = (undefined8 *)*puVar4;
            puVar9 = puVar4;
        }
        else {
            if (param_2 != plVar6) {
                plVar7 = (longlong *)plVar6[9];
                for (plVar3 = (longlong *)plVar6[8]; plVar3 != (longlong *)0x0;
                     plVar3 = (longlong *)plVar3[8]) {
                    if (param_2 == plVar3) goto LAB_14082e68e;
                    if (plVar7 == (longlong *)0x0) {
                        plVar7 = (longlong *)plVar3[9];
                    }
                }
                for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[9]) {
                    if (param_2 == plVar7) goto LAB_14082e68e;
                }
                goto LAB_14082e64e;
            }
            LAB_14082e68e:
            if (*(short *)(lVar2 + 0x3c) == 0x1820) goto LAB_14082e64e;
            local_78[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082e6bb:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_78);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082e6bb;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar8 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar8;
            }
            else {
                *puVar9 = puVar8;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar9;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar5 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar5);
        }
        puVar4 = puVar8;
        if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
        }
    } while( true );
}



undefined8 FUN_14082e7e0(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x90);
    puVar4 = (undefined8 *)0x0;
    joined_r0x00014082e80f:
    do {
        puVar3 = puVar2;
        if (puVar3 == (undefined8 *)0x0) {
            return 1;
        }
        lVar1 = puVar3[2];
        if ((*(int *)(*(longlong *)(lVar1 + 8) + 0x18) == param_2) &&
            ((param_3 == 0 || (*(int *)(lVar1 + 0x38) == param_3)))) {
            if (*(int *)(lVar1 + 0x40) == 0) {
                FUN_14082fa40(param_1,lVar1);
                puVar2 = (undefined8 *)*puVar3;
                if (puVar3 == *(undefined8 **)(param_1 + 0x90)) {
                    *(undefined8 **)(param_1 + 0x90) = puVar2;
                }
                else {
                    *puVar4 = puVar2;
                }
                if (puVar3 == *(undefined8 **)(param_1 + 0x98)) {
                    *(undefined8 **)(param_1 + 0x98) = puVar4;
                }
                *puVar3 = *(undefined8 *)(param_1 + 0xa0);
                *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
                *(undefined8 **)(param_1 + 0xa0) = puVar3;
                goto joined_r0x00014082e80f;
            }
            *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + -1;
        }
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
    } while( true );
}



void FUN_14082ea00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                   int param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    char cVar4;

    for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        lVar2 = puVar1[2];
        lVar3 = *(longlong *)(lVar2 + 8);
        if ((((param_2 == 0) || (param_2 == *(longlong *)(lVar2 + 0x48))) &&
             ((param_5 == 0 || (param_5 == *(int *)(lVar2 + 0x38))))) &&
            ((cVar4 = FUN_14082bfe0(param_1,lVar3,param_3), cVar4 == '\0' &&
                                                            (*(short *)(lVar3 + 0x3c) == 0x503)))) {
            FUN_1408570f0(lVar3);
        }
    }
    return;
}



longlong *
FUN_14082eab0(longlong param_1,longlong *param_2,longlong param_3,byte param_4,int param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;

    puVar9 = (undefined8 *)0x0;
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    while (puVar1 != (undefined8 *)0x0) {
        lVar3 = puVar1[2];
        plVar5 = (longlong *)FUN_140855940(*(undefined8 *)(lVar3 + 8));
        if (param_2 == (longlong *)0x0) {
            LAB_14082eb69:
            if (((param_3 == 0) || (param_3 == *(longlong *)(lVar3 + 0x48))) &&
                ((param_5 == 0 || (param_5 == *(int *)(lVar3 + 0x38))))) {
                if ((param_4 == 0) && (*(int *)(lVar3 + 0x40) != 0)) {
                    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + -1;
                    puVar8 = (undefined8 *)*puVar1;
                    puVar9 = puVar1;
                }
                else {
                    FUN_14082fa40(param_1,lVar3);
                    puVar8 = (undefined8 *)*puVar1;
                    if (puVar1 == *(undefined8 **)(param_1 + 0x90)) {
                        *(undefined8 **)(param_1 + 0x90) = puVar8;
                    }
                    else {
                        *puVar9 = puVar8;
                    }
                    if (puVar1 == *(undefined8 **)(param_1 + 0x98)) {
                        *(undefined8 **)(param_1 + 0x98) = puVar9;
                    }
                    *puVar1 = *(undefined8 *)(param_1 + 0xa0);
                    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
                    *(undefined8 **)(param_1 + 0xa0) = puVar1;
                }
            }
            else {
                LAB_14082eb7f:
                puVar8 = (undefined8 *)*puVar1;
                puVar9 = puVar1;
            }
        }
        else {
            if (plVar5 == (longlong *)0x0) goto LAB_14082eb7f;
            if (param_2 == plVar5) goto LAB_14082eb69;
            plVar7 = (longlong *)plVar5[9];
            for (plVar4 = (longlong *)plVar5[8]; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[8]
                    ) {
                if (param_2 == plVar4) goto LAB_14082eb69;
                if (plVar7 == (longlong *)0x0) {
                    plVar7 = (longlong *)plVar4[9];
                }
            }
            if (plVar7 == (longlong *)0x0) goto LAB_14082eb7f;
            do {
                if (param_2 == plVar7) goto LAB_14082eb69;
                plVar7 = (longlong *)plVar7[9];
            } while (plVar7 != (longlong *)0x0);
            puVar8 = (undefined8 *)*puVar1;
            puVar9 = puVar1;
        }
        puVar1 = puVar8;
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
        }
    }
    plVar5 = (longlong *)(ulonglong)param_4;
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    do {
        if (puVar1 == (undefined8 *)0x0) {
            return plVar5;
        }
        lVar3 = puVar1[2];
        lVar2 = *(longlong *)(lVar3 + 8);
        plVar4 = (longlong *)FUN_140855940(lVar2);
        plVar5 = plVar4;
        if (param_2 == (longlong *)0x0) {
            LAB_14082e990:
            if ((((param_3 == 0) || (param_3 == *(longlong *)(lVar3 + 0x48))) &&
                 ((param_5 == 0 || (param_5 == *(int *)(lVar3 + 0x38))))) &&
                (*(short *)(lVar2 + 0x3c) == 0x503)) {
                plVar5 = (longlong *)FUN_1408570f0(lVar2);
            }
        }
        else if (plVar4 != (longlong *)0x0) {
            if (param_2 == plVar4) goto LAB_14082e990;
            plVar6 = (longlong *)plVar4[9];
            for (plVar7 = (longlong *)plVar4[8]; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[8]
                    ) {
                if (param_2 == plVar7) goto LAB_14082e990;
                if (plVar6 == (longlong *)0x0) {
                    plVar6 = (longlong *)plVar7[9];
                }
            }
            for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[9]) {
                if (param_2 == plVar6) goto LAB_14082e990;
            }
        }
        puVar1 = (undefined8 *)*puVar1;
        if (plVar4 != (longlong *)0x0) {
            plVar5 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
        }
    } while( true );
}



void FUN_14082ec70(longlong param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    char cVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x90);
    puVar4 = (undefined8 *)0x0;
    joined_r0x00014082eca9:
    do {
        puVar3 = puVar2;
        if (puVar3 == (undefined8 *)0x0) {
            FUN_14082ea00(DAT_140c61b68,param_2,param_3,param_4);
            return;
        }
        lVar1 = puVar3[2];
        if ((((param_2 == 0) || (param_2 == *(longlong *)(lVar1 + 0x48))) &&
             ((param_5 == 0 || (param_5 == *(int *)(lVar1 + 0x38))))) &&
            (cVar5 = FUN_14082bfe0(param_1,*(undefined8 *)(lVar1 + 8),param_3), cVar5 == '\0')) {
            if ((param_4 != '\0') || (*(int *)(lVar1 + 0x40) == 0)) {
                FUN_14082fa40(param_1,lVar1);
                puVar2 = (undefined8 *)*puVar3;
                if (puVar3 == *(undefined8 **)(param_1 + 0x90)) {
                    *(undefined8 **)(param_1 + 0x90) = puVar2;
                }
                else {
                    *puVar4 = puVar2;
                }
                if (puVar3 == *(undefined8 **)(param_1 + 0x98)) {
                    *(undefined8 **)(param_1 + 0x98) = puVar4;
                }
                *puVar3 = *(undefined8 *)(param_1 + 0xa0);
                *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
                *(undefined8 **)(param_1 + 0xa0) = puVar3;
                goto joined_r0x00014082eca9;
            }
            *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + -1;
        }
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
    } while( true );
}



void FUN_14082edb0(longlong param_1,int param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x90);
    puVar4 = (undefined8 *)0x0;
    joined_r0x00014082edd5:
    do {
        puVar3 = puVar2;
        if (puVar3 == (undefined8 *)0x0) {
            return;
        }
        lVar1 = puVar3[2];
        if (*(int *)(lVar1 + 0x38) == param_2) {
            if (*(int *)(lVar1 + 0x40) == 0) {
                FUN_14082fa40(param_1,lVar1);
                puVar2 = (undefined8 *)*puVar3;
                if (puVar3 == *(undefined8 **)(param_1 + 0x90)) {
                    *(undefined8 **)(param_1 + 0x90) = puVar2;
                }
                else {
                    *puVar4 = puVar2;
                }
                if (puVar3 == *(undefined8 **)(param_1 + 0x98)) {
                    *(undefined8 **)(param_1 + 0x98) = puVar4;
                }
                *puVar3 = *(undefined8 *)(param_1 + 0xa0);
                *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
                *(undefined8 **)(param_1 + 0xa0) = puVar3;
                goto joined_r0x00014082edd5;
            }
            *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + -1;
        }
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
    } while( true );
}



undefined8 FUN_14082ee90(void)

{
    return 0x38;
}



undefined8 FUN_14082eea0(void)

{
    return 0x20;
}



undefined8 FUN_14082eeb0(longlong param_1)

{
    HANDLE pvVar1;
    undefined8 uVar2;

    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0xe0) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
        uVar2 = FUN_140856110(param_1 + 0xd0);
        return uVar2;
    }
    return 2;
}



void FUN_14082ef00(longlong param_1)

{
    FUN_140856210(param_1 + 0xd0);
    return;
}



undefined8 FUN_14082ef10(longlong param_1,int param_2,int param_3)

{
    short sVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    undefined4 local_68 [20];

    puVar3 = *(undefined8 **)(param_1 + 0x60);
    puVar5 = (undefined8 *)0x0;
    while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
        plVar2 = (longlong *)puVar4[2];
        if ((*(int *)(plVar2[1] + 0x18) == param_2) &&
            ((param_3 == 0 || (*(int *)(plVar2 + 7) == param_3)))) {
            local_68[0] = 0;
            sVar1 = *(short *)(plVar2[1] + 0x3c);
            if (sVar1 == 0x403) {
                LAB_14082ef8b:
                (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_68);
            }
            else if (sVar1 == 0x503) {
                FUN_1408570e0();
                goto LAB_14082ef8b;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar2 + 7));
            puVar3 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar3;
            }
            else {
                *puVar5 = puVar3;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar5;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
            (**(code **)(*(longlong *)plVar2[1] + 0x10))();
            uVar6 = DAT_140c10f20;
            (**(code **)(*plVar2 + 8))(plVar2,0);
            FUN_140881720(uVar6);
        }
        else {
            puVar3 = (undefined8 *)*puVar4;
            puVar5 = puVar4;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    puVar5 = (undefined8 *)0x0;
    do {
        while( true ) {
            puVar4 = puVar3;
            if (puVar4 == (undefined8 *)0x0) {
                return 1;
            }
            plVar2 = (longlong *)puVar4[2];
            if ((*(int *)(plVar2[1] + 0x18) == param_2) &&
                ((param_3 == 0 || (*(int *)(plVar2 + 7) == param_3)))) break;
            puVar3 = (undefined8 *)*puVar4;
            puVar5 = puVar4;
        }
        local_68[0] = 0;
        sVar1 = *(short *)(plVar2[1] + 0x3c);
        if (sVar1 == 0x403) {
            LAB_14082f07b:
            (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_68);
        }
        else if (sVar1 == 0x503) {
            FUN_1408570e0();
            goto LAB_14082f07b;
        }
        FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar2 + 7));
        puVar3 = (undefined8 *)*puVar4;
        if (puVar4 == *(undefined8 **)(param_1 + 0x90)) {
            *(undefined8 **)(param_1 + 0x90) = puVar3;
        }
        else {
            *puVar5 = puVar3;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x98)) {
            *(undefined8 **)(param_1 + 0x98) = puVar5;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0xa0);
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        *(undefined8 **)(param_1 + 0xa0) = puVar4;
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        uVar6 = DAT_140c10f20;
        (**(code **)(*plVar2 + 8))(plVar2,0);
        FUN_140881720(uVar6);
    } while( true );
}



undefined8 FUN_14082f160(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined4 local_58 [20];

    if (param_2 != (longlong *)0x0) {
        puVar4 = *(undefined8 **)(param_1 + 0x90);
        puVar2 = (undefined8 *)0x0;
        while (puVar1 = puVar4, puVar1 != (undefined8 *)0x0) {
            if (param_2 == (longlong *)puVar1[2]) {
                local_58[0] = 0;
                if (*(short *)(param_2[1] + 0x3c) == 0x403) {
                    LAB_14082f1cf:
                    (**(code **)(*(longlong *)param_2[1] + 0x58))((longlong *)param_2[1],local_58);
                }
                else if (*(short *)(param_2[1] + 0x3c) == 0x503) {
                    FUN_1408570e0();
                    goto LAB_14082f1cf;
                }
                FUN_14083c260(DAT_140c61b80,*(undefined4 *)(param_2 + 7));
                if (puVar1 == *(undefined8 **)(param_1 + 0x90)) {
                    *(undefined8 *)(param_1 + 0x90) = *puVar1;
                }
                else {
                    *puVar2 = *puVar1;
                }
                if (puVar1 == *(undefined8 **)(param_1 + 0x98)) {
                    *(undefined8 **)(param_1 + 0x98) = puVar2;
                }
                *puVar1 = *(undefined8 *)(param_1 + 0xa0);
                *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
                *(undefined8 **)(param_1 + 0xa0) = puVar1;
                (**(code **)(*(longlong *)param_2[1] + 0x10))();
                uVar3 = DAT_140c10f20;
                (**(code **)(*param_2 + 8))(param_2,0);
                FUN_140881720(uVar3,param_2);
                break;
            }
            puVar2 = puVar1;
            puVar4 = (undefined8 *)*puVar1;
        }
        puVar4 = *(undefined8 **)(param_1 + 0x60);
        puVar2 = (undefined8 *)0x0;
        while (puVar1 = puVar4, puVar1 != (undefined8 *)0x0) {
            if (param_2 == (longlong *)puVar1[2]) {
                local_58[0] = 0;
                if (*(short *)(param_2[1] + 0x3c) != 0x403) {
                    if (*(short *)(param_2[1] + 0x3c) != 0x503) goto LAB_14082f2a9;
                    FUN_1408570e0();
                }
                (**(code **)(*(longlong *)param_2[1] + 0x58))((longlong *)param_2[1],local_58);
                LAB_14082f2a9:
                FUN_14083c260(DAT_140c61b80,*(undefined4 *)(param_2 + 7));
                if (puVar1 == *(undefined8 **)(param_1 + 0x60)) {
                    *(undefined8 *)(param_1 + 0x60) = *puVar1;
                }
                else {
                    *puVar2 = *puVar1;
                }
                if (puVar1 == *(undefined8 **)(param_1 + 0x68)) {
                    *(undefined8 **)(param_1 + 0x68) = puVar2;
                }
                *puVar1 = *(undefined8 *)(param_1 + 0x70);
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
                *(undefined8 **)(param_1 + 0x70) = puVar1;
                (**(code **)(*(longlong *)param_2[1] + 0x10))();
                uVar3 = DAT_140c10f20;
                (**(code **)(*param_2 + 8))(param_2,0);
                FUN_140881720(uVar3,param_2);
                return 1;
            }
            puVar2 = puVar1;
            puVar4 = (undefined8 *)*puVar1;
        }
    }
    return 1;
}



undefined8 FUN_14082f330(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined4 local_78 [20];

    puVar9 = (undefined8 *)0x0;
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    while (puVar4 != (undefined8 *)0x0) {
        plVar1 = (longlong *)puVar4[2];
        lVar2 = plVar1[1];
        plVar6 = (longlong *)FUN_140855940(lVar2);
        if (param_2 == (longlong *)0x0) {
            LAB_14082f4bc:
            if ((((param_3 != 0) && (param_3 != plVar1[9])) ||
                 ((param_4 != 0 && (param_4 != *(int *)(plVar1 + 7))))) ||
                (*(short *)(lVar2 + 0x3c) == 0x1820)) goto LAB_14082f3d9;
            local_78[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082f516:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_78);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082f516;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar8 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar8;
            }
            else {
                *puVar9 = puVar8;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar9;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar5 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar5);
        }
        else {
            if (plVar6 != (longlong *)0x0) {
                if (param_2 == plVar6) goto LAB_14082f4bc;
                plVar7 = (longlong *)plVar6[9];
                for (plVar3 = (longlong *)plVar6[8]; plVar3 != (longlong *)0x0;
                     plVar3 = (longlong *)plVar3[8]) {
                    if (param_2 == plVar3) goto LAB_14082f4bc;
                    if (plVar7 == (longlong *)0x0) {
                        plVar7 = (longlong *)plVar3[9];
                    }
                }
                for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[9]) {
                    if (param_2 == plVar7) goto LAB_14082f4bc;
                }
            }
            LAB_14082f3d9:
            puVar8 = (undefined8 *)*puVar4;
            puVar9 = puVar4;
        }
        puVar4 = puVar8;
        if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
        }
    }
    puVar9 = (undefined8 *)0x0;
    puVar4 = *(undefined8 **)(param_1 + 0x90);
    do {
        if (puVar4 == (undefined8 *)0x0) {
            return 1;
        }
        plVar1 = (longlong *)puVar4[2];
        lVar2 = plVar1[1];
        plVar6 = (longlong *)FUN_140855940(lVar2);
        if (param_2 == (longlong *)0x0) {
            LAB_14082f5ab:
            if (((param_3 != 0) && (param_3 != plVar1[9])) ||
                (((param_4 != 0 && (param_4 != *(int *)(plVar1 + 7))) ||
                  (*(short *)(lVar2 + 0x3c) == 0x1820)))) goto LAB_14082f479;
            local_78[0] = 0;
            if (*(short *)(plVar1[1] + 0x3c) == 0x403) {
                LAB_14082f605:
                (**(code **)(*(longlong *)plVar1[1] + 0x58))((longlong *)plVar1[1],local_78);
            }
            else if (*(short *)(plVar1[1] + 0x3c) == 0x503) {
                FUN_1408570e0();
                goto LAB_14082f605;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar1 + 7));
            puVar8 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x90)) {
                *(undefined8 **)(param_1 + 0x90) = puVar8;
            }
            else {
                *puVar9 = puVar8;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x98)) {
                *(undefined8 **)(param_1 + 0x98) = puVar9;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0xa0);
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
            *(undefined8 **)(param_1 + 0xa0) = puVar4;
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
            uVar5 = DAT_140c10f20;
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_140881720(uVar5);
        }
        else {
            if (plVar6 != (longlong *)0x0) {
                if (param_2 == plVar6) goto LAB_14082f5ab;
                plVar7 = (longlong *)plVar6[9];
                for (plVar3 = (longlong *)plVar6[8]; plVar3 != (longlong *)0x0;
                     plVar3 = (longlong *)plVar3[8]) {
                    if (param_2 == plVar3) goto LAB_14082f5ab;
                    if (plVar7 == (longlong *)0x0) {
                        plVar7 = (longlong *)plVar3[9];
                    }
                }
                for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[9]) {
                    if (param_2 == plVar7) goto LAB_14082f5ab;
                }
            }
            LAB_14082f479:
            puVar8 = (undefined8 *)*puVar4;
            puVar9 = puVar4;
        }
        puVar4 = puVar8;
        if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
        }
    } while( true );
}



undefined8 FUN_14082f6b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
    short sVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    char cVar7;
    undefined4 local_78 [20];

    puVar3 = *(undefined8 **)(param_1 + 0x60);
    puVar5 = (undefined8 *)0x0;
    while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
        plVar2 = (longlong *)puVar4[2];
        if ((((param_2 == 0) || (param_2 == plVar2[9])) &&
             ((param_4 == 0 || (param_4 == *(int *)(plVar2 + 7))))) &&
            ((cVar7 = FUN_14082bfe0(param_1,plVar2[1],param_3), cVar7 == '\0' &&
                                                                (sVar1 = *(short *)(plVar2[1] + 0x3c), sVar1 != 0x1820)))) {
            local_78[0] = 0;
            if (sVar1 == 0x403) {
                LAB_14082f758:
                (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_78);
            }
            else if (sVar1 == 0x503) {
                FUN_1408570e0();
                goto LAB_14082f758;
            }
            FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar2 + 7));
            puVar3 = (undefined8 *)*puVar4;
            if (puVar4 == *(undefined8 **)(param_1 + 0x60)) {
                *(undefined8 **)(param_1 + 0x60) = puVar3;
            }
            else {
                *puVar5 = puVar3;
            }
            if (puVar4 == *(undefined8 **)(param_1 + 0x68)) {
                *(undefined8 **)(param_1 + 0x68) = puVar5;
            }
            *puVar4 = *(undefined8 *)(param_1 + 0x70);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined8 **)(param_1 + 0x70) = puVar4;
            (**(code **)(*(longlong *)plVar2[1] + 0x10))();
            uVar6 = DAT_140c10f20;
            (**(code **)(*plVar2 + 8))(plVar2,0);
            FUN_140881720(uVar6,plVar2);
        }
        else {
            puVar3 = (undefined8 *)*puVar4;
            puVar5 = puVar4;
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    puVar5 = (undefined8 *)0x0;
    do {
        while( true ) {
            puVar4 = puVar3;
            if (puVar4 == (undefined8 *)0x0) {
                return 1;
            }
            plVar2 = (longlong *)puVar4[2];
            if ((((param_2 == 0) || (param_2 == plVar2[9])) &&
                 ((param_4 == 0 || (param_4 == *(int *)(plVar2 + 7))))) &&
                ((cVar7 = FUN_14082bfe0(param_1,plVar2[1],param_3), cVar7 == '\0' &&
                                                                    (sVar1 = *(short *)(plVar2[1] + 0x3c), sVar1 != 0x1820)))) break;
            puVar3 = (undefined8 *)*puVar4;
            puVar5 = puVar4;
        }
        local_78[0] = 0;
        if (sVar1 == 0x403) {
            LAB_14082f878:
            (**(code **)(*(longlong *)plVar2[1] + 0x58))((longlong *)plVar2[1],local_78);
        }
        else if (sVar1 == 0x503) {
            FUN_1408570e0();
            goto LAB_14082f878;
        }
        FUN_14083c260(DAT_140c61b80,*(undefined4 *)(plVar2 + 7));
        puVar3 = (undefined8 *)*puVar4;
        if (puVar4 == *(undefined8 **)(param_1 + 0x90)) {
            *(undefined8 **)(param_1 + 0x90) = puVar3;
        }
        else {
            *puVar5 = puVar3;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x98)) {
            *(undefined8 **)(param_1 + 0x98) = puVar5;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0xa0);
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        *(undefined8 **)(param_1 + 0xa0) = puVar4;
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        uVar6 = DAT_140c10f20;
        (**(code **)(*plVar2 + 8))(plVar2,0);
        FUN_140881720(uVar6,plVar2);
    } while( true );
}



void FUN_14082f950(longlong param_1)

{
    FUN_140856210(param_1 + 0xd0);
    FUN_14082e2f0(param_1);
    FUN_14082e070(param_1);
    FUN_14082e1c0(param_1);
    FUN_1408299e0(param_1 + 0x28);
    FUN_14086beb0(param_1 + 0x60);
    FUN_14086beb0(param_1 + 0x90);
    return;
}



void FUN_14082fa40(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong *local_res10 [3];
    undefined4 local_58 [20];

    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + (*(int *)(param_1 + 0xc0) - *(int *)(param_2 + 3))
            ;
    local_res10[0] = param_2;
    iVar2 = FUN_14082be40(param_1 + 0x60,*(undefined4 *)(param_2 + 2),local_res10);
    if (iVar2 == 1) {
        return;
    }
    local_58[0] = 0;
    if (*(short *)(param_2[1] + 0x3c) != 0x403) {
        if (*(short *)(param_2[1] + 0x3c) != 0x503) goto LAB_14082faac;
        FUN_1408570e0();
    }
    (**(code **)(*(longlong *)param_2[1] + 0x58))((longlong *)param_2[1],local_58);
    LAB_14082faac:
    FUN_14083c260(DAT_140c61b80,*(undefined4 *)(param_2 + 7));
    (**(code **)(*(longlong *)param_2[1] + 0x10))();
    uVar1 = DAT_140c10f20;
    (**(code **)(*param_2 + 8))(param_2,0);
    FUN_140881720(uVar1,param_2);
    return;
}



int FUN_14082faf0(undefined8 param_1,int param_2,longlong *param_3)

{
    int *piVar1;
    longlong lVar2;

    *param_3 = 0;
    piVar1 = DAT_140c61c08;
    if (DAT_140c61c08 != DAT_140c61c10) {
        do {
            if (*piVar1 == param_2) break;
            piVar1 = piVar1 + 6;
        } while (piVar1 != DAT_140c61c10);
        if ((piVar1 != DAT_140c61c10) && ((code **)(piVar1 + 2) != (code **)0x0)) {
            lVar2 = (**(code **)(piVar1 + 2))();
            *param_3 = lVar2;
            return 2 - (uint)(lVar2 != 0);
        }
    }
    return 2;
}



undefined8 FUN_14082fb50(undefined8 param_1,int param_2,int param_3)

{
    int *piVar1;
    undefined8 uVar2;

    piVar1 = DAT_140c61c20;
    if (DAT_140c61c20 != DAT_140c61c28) {
        do {
            if (*piVar1 == param_3) break;
            piVar1 = piVar1 + 6;
        } while (piVar1 != DAT_140c61c28);
        if ((piVar1 != DAT_140c61c28) && ((code **)(piVar1 + 2) != (code **)0x0)) {
            if (param_2 == 1) {
                // WARNING: Could not recover jumptable at 0x00014082fb81. Too many branches
                // WARNING: Treating indirect jump as call
                uVar2 = (**(code **)(piVar1 + 2))();
                return uVar2;
            }
            // WARNING: Could not recover jumptable at 0x00014082fb84. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(piVar1 + 4))();
            return uVar2;
        }
    }
    return 0;
}



undefined8
FUN_14082fb90(int param_1,int param_2,undefined8 param_3,undefined param_4,longlong **param_5,
              undefined8 param_6)

{
    int *piVar1;
    longlong *plVar2;
    undefined8 uVar3;

    piVar1 = DAT_140c61c38;
    if (DAT_140c61c38 != DAT_140c61c40) {
        do {
            if (*piVar1 == (param_2 * 0x1000 + param_1) * 0x10 + 4) break;
            piVar1 = piVar1 + 4;
        } while (piVar1 != DAT_140c61c40);
    }
    if ((piVar1 != DAT_140c61c40) && ((code **)(piVar1 + 2) != (code **)0x0)) {
        plVar2 = (longlong *)(**(code **)(piVar1 + 2))(&PTR_PTR_FUN_140c10f70);
        *param_5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
            uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&PTR_PTR_FUN_140c10f70,param_3,param_4,param_6);
            if ((int)uVar3 == 1) {
                return uVar3;
            }
            (**(code **)(**param_5 + 8))(*param_5,&PTR_PTR_FUN_140c10f70);
            *param_5 = (longlong *)0x0;
        }
    }
    return 2;
}



int FUN_14082fc60(undefined8 param_1,int param_2,longlong *param_3)

{
    int *piVar1;
    longlong lVar2;

    *param_3 = 0;
    piVar1 = DAT_140c61c08;
    if (DAT_140c61c08 != DAT_140c61c10) {
        do {
            if (*piVar1 == param_2) break;
            piVar1 = piVar1 + 6;
        } while (piVar1 != DAT_140c61c10);
        if ((piVar1 != DAT_140c61c10) && (piVar1 != (int *)&DAT_fffffffffffffff8)) {
            if (*(code **)(piVar1 + 4) == (code *)0x0) {
                return 1;
            }
            lVar2 = (**(code **)(piVar1 + 4))();
            *param_3 = lVar2;
            return 2 - (uint)(lVar2 != 0);
        }
    }
    return 2;
}



undefined8 FUN_14082fcd0(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    iVar2 = *(int *)(param_1 + 2);
    lVar4 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar2 + param_2) * 0x18);
    if (lVar4 == 0) {
        return 0;
    }
    uVar7 = (param_1[1] - *param_1) / 0x18;
    uVar6 = uVar7 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar7 != 0) {
            lVar5 = 0;
            uVar7 = uVar6;
            do {
                lVar3 = *param_1;
                lVar1 = lVar5 + 0x18;
                *(undefined8 *)(lVar5 + lVar4) = *(undefined8 *)(&DAT_ffffffffffffffe8 + lVar1 + lVar3);
                *(undefined8 *)(lVar5 + 8 + lVar4) = *(undefined8 *)(lVar3 + -0x10 + lVar1);
                *(undefined8 *)(lVar5 + 0x10 + lVar4) = *(undefined8 *)(lVar3 + -8 + lVar1);
                uVar7 = uVar7 - 1;
                lVar5 = lVar1;
            } while (uVar7 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar2 + param_2;
    *param_1 = lVar4;
    param_1[1] = lVar4 + uVar6 * 0x18;
    return CONCAT71((int7)(uVar6 * 3 >> 8),1);
}



int FUN_14082fdc0(int param_1,int param_2,longlong param_3,longlong param_4)

{
    uint uVar1;
    int *piVar2;
    char cVar3;
    int *piVar4;
    longlong *plVar5;
    int iVar6;

    iVar6 = (param_2 * 0x1000 + param_1) * 0x10 + 1;
    piVar4 = DAT_140c61c20;
    if (DAT_140c61c20 != DAT_140c61c28) {
        do {
            if (*piVar4 == iVar6) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c28);
    }
    if ((piVar4 != DAT_140c61c28) && (piVar4 != (int *)&DAT_fffffffffffffff8)) {
        return 2;
    }
    if ((param_3 == 0) || (param_4 == 0)) {
        return 0x1f;
    }
    piVar4 = DAT_140c61c20;
    if (DAT_140c61c20 != DAT_140c61c28) {
        do {
            if (*piVar4 == iVar6) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c28);
    }
    if (piVar4 == DAT_140c61c28) {
        plVar5 = (longlong *)0x0;
    }
    else {
        plVar5 = (longlong *)(piVar4 + 2);
        if (plVar5 != (longlong *)0x0) {
            *plVar5 = param_3;
            *(longlong *)(piVar4 + 4) = param_4;
            return 2 - (uint)(plVar5 != (longlong *)0x0);
        }
    }
    uVar1 = (uint)(((longlong)DAT_140c61c28 - (longlong)DAT_140c61c20) / 0x18);
    if ((((uVar1 < DAT_140c61c30) ||
          (cVar3 = FUN_14082fcd0(&DAT_140c61c20), piVar4 = DAT_140c61c28, cVar3 != '\0')) &&
         (piVar2 = DAT_140c61c28, piVar4 = DAT_140c61c28, uVar1 < DAT_140c61c30)) &&
        (piVar4 = DAT_140c61c28 + 6, DAT_140c61c28 != (int *)0x0)) {
        plVar5 = (longlong *)(DAT_140c61c28 + 2);
        *DAT_140c61c28 = iVar6;
        DAT_140c61c28 = piVar4;
        *plVar5 = param_3;
        *(longlong *)(piVar2 + 4) = param_4;
        piVar4 = DAT_140c61c28;
    }
    DAT_140c61c28 = piVar4;
    return 2 - (uint)(plVar5 != (longlong *)0x0);
}



int FUN_14082ff40(uint param_1,int param_2,int param_3,longlong param_4,longlong param_5)

{
    uint uVar1;
    int *piVar2;
    char cVar3;
    int *piVar4;
    int iVar5;
    longlong *plVar6;

    iVar5 = (param_3 * 0x1000 + param_2) * 0x10 + (param_1 & 0xf);
    piVar4 = DAT_140c61c08;
    if (DAT_140c61c08 != DAT_140c61c10) {
        do {
            if (*piVar4 == iVar5) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c10);
    }
    if ((piVar4 != DAT_140c61c10) && (piVar4 != (int *)&DAT_fffffffffffffff8)) {
        return 2;
    }
    if ((param_4 == 0) || (param_5 == 0)) {
        return 0x1f;
    }
    piVar4 = DAT_140c61c08;
    if (DAT_140c61c08 != DAT_140c61c10) {
        do {
            if (*piVar4 == iVar5) break;
            piVar4 = piVar4 + 6;
        } while (piVar4 != DAT_140c61c10);
    }
    if (piVar4 == DAT_140c61c10) {
        plVar6 = (longlong *)0x0;
    }
    else {
        plVar6 = (longlong *)(piVar4 + 2);
        if (plVar6 != (longlong *)0x0) {
            *plVar6 = param_4;
            *(longlong *)(piVar4 + 4) = param_5;
            return 2 - (uint)(plVar6 != (longlong *)0x0);
        }
    }
    uVar1 = (uint)(((longlong)DAT_140c61c10 - (longlong)DAT_140c61c08) / 0x18);
    if ((((uVar1 < DAT_140c61c18) ||
          (cVar3 = FUN_14082fcd0(&DAT_140c61c08), piVar4 = DAT_140c61c10, cVar3 != '\0')) &&
         (piVar2 = DAT_140c61c10, piVar4 = DAT_140c61c10, uVar1 < DAT_140c61c18)) &&
        (piVar4 = DAT_140c61c10 + 6, DAT_140c61c10 != (int *)0x0)) {
        plVar6 = (longlong *)(DAT_140c61c10 + 2);
        *DAT_140c61c10 = iVar5;
        DAT_140c61c10 = piVar4;
        *plVar6 = param_4;
        *(longlong *)(piVar2 + 4) = param_5;
        piVar4 = DAT_140c61c10;
    }
    DAT_140c61c10 = piVar4;
    return 2 - (uint)(plVar6 != (longlong *)0x0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1408300c0(void)

{
    if (DAT_140c61c08 != 0) {
        DAT_140c61c10 = DAT_140c61c08;
        FUN_140881720(DAT_140c10f20);
        DAT_140c61c08 = 0;
        DAT_140c61c10 = 0;
        DAT_140c61c18 = 0;
    }
    if (DAT_140c61c20 != 0) {
        DAT_140c61c28 = DAT_140c61c20;
        FUN_140881720(DAT_140c10f20);
        DAT_140c61c20 = 0;
        DAT_140c61c28 = 0;
        DAT_140c61c30 = 0;
    }
    if (DAT_140c61c38 != 0) {
        DAT_140c61c40 = DAT_140c61c38;
        FUN_140881720(DAT_140c10f20);
        DAT_140c61c38 = 0;
        DAT_140c61c40 = 0;
        _DAT_140c61c48 = 0;
    }
    return 1;
}



longlong FUN_140830170(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    return param_1;
}



undefined8 FUN_140830190(longlong param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    int *piVar3;
    int *piVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    bool bVar8;

    if (param_3 != 0) {
        FUN_140830e60(param_3 + 0x38);
        return 1;
    }
    plVar7 = *(longlong **)(param_1 + 0x38);
    uVar6 = 0;
    while( true ) {
        if (plVar7 != (longlong *)0x0) goto LAB_140830200;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (0xc0 < uVar5) break;
        plVar7 = *(longlong **)(param_1 + 0x38 + uVar6 * 8);
    }
    bVar8 = true;
    joined_r0x0001408301dc:
    if (bVar8) {
        return 1;
    }
    LAB_140830200:
    do {
        do {
            lVar1 = plVar7[2];
            piVar4 = *(int **)(lVar1 + 0x38);
            piVar3 = *(int **)(lVar1 + 0x40);
            if (piVar4 != piVar3) {
                do {
                    if (*piVar4 == param_2) break;
                    piVar4 = piVar4 + 3;
                } while (piVar4 != piVar3);
                if (piVar4 != piVar3) {
                    if (piVar4 < piVar3 + -3) {
                        uVar2 = ((ulonglong)((longlong)(piVar3 + -3) + (-1 - (longlong)piVar4)) / 0xc + 1) * 3 &
                                0x3fffffffffffffff;
                        piVar3 = piVar4 + 3;
                        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                            *piVar4 = *piVar3;
                            piVar3 = piVar3 + 1;
                            piVar4 = piVar4 + 1;
                        }
                    }
                    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + -0xc;
                }
            }
            plVar7 = (longlong *)*plVar7;
        } while (plVar7 != (longlong *)0x0);
        do {
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            if (0xc0 < uVar5) {
                bVar8 = plVar7 == (longlong *)0x0;
                goto joined_r0x0001408301dc;
            }
            plVar7 = *(longlong **)(param_1 + 0x38 + uVar6 * 8);
        } while (plVar7 == (longlong *)0x0);
    } while( true );
}



undefined8 * FUN_1408302a0(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)FUN_1408819f0(*param_1,0x18);
    if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
    }
    uVar1 = *(undefined8 *)(param_1 + param_3 * 2 + 2);
    puVar2[1] = param_2;
    *puVar2 = uVar1;
    *(undefined8 **)(param_1 + param_3 * 2 + 2) = puVar2;
    param_1[0x184] = param_1[0x184] + 1;
    return puVar2 + 2;
}



longlong FUN_140830310(longlong param_1,ulonglong param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;

    puVar2 = *(undefined8 **)
            (param_1 + 0x38 +
             (ulonglong)(uint)((int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    while( true ) {
        if (puVar2 == (undefined8 *)0x0) {
            return 0;
        }
        if (puVar2[1] == param_2) break;
        puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 + 2 == (longlong *)0x0) {
        return 0;
    }
    lVar3 = puVar2[2];
    uVar1 = *(uint *)(lVar3 + 0x88);
    *(uint *)(lVar3 + 0x88) = (uVar1 + 1 ^ uVar1) & 0x3fffffff ^ uVar1;
    return lVar3;
}



undefined8 * FUN_140830370(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
    int *piVar1;
    int *piVar2;

    if (param_3 != 0) {
        piVar2 = *(int **)(param_3 + 0x38);
        piVar1 = *(int **)(param_3 + 0x40);
        if (piVar2 != piVar1) {
            do {
                if (*piVar2 == param_4) break;
                piVar2 = piVar2 + 3;
            } while (piVar2 != piVar1);
            if ((piVar2 != piVar1) && ((undefined8 *)(piVar2 + 1) != (undefined8 *)0x0)) {
                *param_2 = *(undefined8 *)(piVar2 + 1);
                return param_2;
            }
        }
    }
    *param_2 = 0;
    return param_2;
}



int FUN_1408303c0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    uint uVar4;
    int iVar5;
    undefined4 local_28;
    undefined8 local_24;
    undefined8 local_1c;
    undefined4 local_14;

    uVar4 = 0;
    *(undefined4 *)(param_1 + 6) = DAT_140c10f20;
    *(undefined4 *)(param_1 + 200) = 0;
    lVar2 = 0x18;
    puVar1 = param_1 + 7;
    do {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar3 = puVar1 + 8;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        lVar2 = lVar2 + -1;
        puVar1 = puVar3;
    } while (lVar2 != 0);
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
    param_1[2] = 0;
    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
    param_1[5] = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
        iVar5 = 0x34;
    }
    else {
        *(undefined4 *)(param_1 + 3) = 8;
        param_1[2] = puVar1;
        do {
            puVar3 = puVar1;
            uVar4 = uVar4 + 1;
            *puVar3 = puVar3 + 2;
            puVar1 = puVar3 + 2;
        } while (uVar4 < *(uint *)(param_1 + 3));
        *puVar3 = 0;
        iVar5 = 1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    if (iVar5 == 1) {
        lVar2 = FUN_140830570(param_1,0,0);
        if (lVar2 != 0) {
            local_24 = 0;
            local_1c = 0;
            local_14 = 0;
            local_28 = 0;
            FUN_14084c5c0(lVar2,&local_28,1,0);
        }
    }
    return iVar5;
}



void FUN_1408304e0(longlong param_1,byte param_2)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong *plVar5;

    uVar4 = 0;
    plVar5 = *(longlong **)(param_1 + 0x38);
    while (plVar5 == (longlong *)0x0) {
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        if (0xc0 < uVar3) goto joined_r0x00014083050b;
        plVar5 = *(longlong **)(param_1 + 0x38 + uVar4 * 8);
    }
    LAB_140830510:
    do {
        do {
            lVar1 = plVar5[2];
            uVar3 = *(uint *)(lVar1 + 0x88);
            if (((uVar3 >> 0x1e & 1) == 0) && ((param_2 & *(byte *)(lVar1 + 0x12)) == 0)) {
                iVar2 = 0;
            }
            else {
                iVar2 = 1;
            }
            *(uint *)(lVar1 + 0x88) = (iVar2 << 0x1e ^ uVar3) & 0x40000000 ^ uVar3;
            plVar5 = (longlong *)*plVar5;
        } while (plVar5 != (longlong *)0x0);
        do {
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            if (0xc0 < uVar3) goto joined_r0x00014083050b;
            plVar5 = *(longlong **)(param_1 + 0x38 + uVar4 * 8);
        } while (plVar5 == (longlong *)0x0);
    } while( true );
    joined_r0x00014083050b:
    if (plVar5 == (longlong *)0x0) {
        return;
    }
    goto LAB_140830510;
}



longlong FUN_140830570(longlong param_1,ulonglong param_2)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;

    uVar3 = (int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1;
    for (puVar1 = *(undefined8 **)(param_1 + 0x38 + (ulonglong)uVar3 * 8); puVar1 != (undefined8 *)0x0
            ; puVar1 = (undefined8 *)*puVar1) {
        if (puVar1[1] == param_2) {
            if (puVar1 + 2 != (longlong *)0x0) {
                return puVar1[2];
            }
            break;
        }
    }
    lVar4 = FUN_1408819f0(DAT_140c10f20,0x90);
    if (lVar4 != 0) {
        lVar4 = FUN_14084bcc0(lVar4,param_2);
        if (lVar4 == 0) {
            return 0;
        }
        for (puVar1 = *(undefined8 **)(param_1 + 0x38 + (ulonglong)uVar3 * 8);
             puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (puVar1[1] == param_2) {
                plVar5 = puVar1 + 2;
                if (plVar5 != (longlong *)0x0) goto LAB_140830636;
                break;
            }
        }
        plVar5 = (longlong *)FUN_1408302a0(param_1 + 0x30,param_2,(ulonglong)uVar3);
        uVar2 = DAT_140c10f20;
        if (plVar5 != (longlong *)0x0) {
            LAB_140830636:
            *plVar5 = lVar4;
            return lVar4;
        }
        FUN_14084bd30(lVar4);
        FUN_140881720(uVar2,lVar4);
    }
    return 0;
}



void FUN_140830670(undefined4 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)(param_1 + 2);
    lVar2 = 0xc1;
    do {
        puVar1 = (undefined8 *)*puVar3;
        while (puVar1 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar1;
            FUN_140881720(*param_1);
        }
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_1[0x184] = 0;
    return;
}



void FUN_1408306f0(ulonglong *param_1)

{
    ulonglong *puVar1;

    while (puVar1 = (ulonglong *)*param_1, puVar1 != (ulonglong *)0x0) {
        *param_1 = *puVar1;
        if (puVar1 == (ulonglong *)param_1[1]) {
            param_1[1] = 0;
        }
        if ((puVar1 < param_1[5]) || ((ulonglong)*(uint *)(param_1 + 3) * 0x10 + param_1[5] <= puVar1))
        {
            FUN_140881720(DAT_140c10f20);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        }
        else {
            *puVar1 = param_1[2];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            param_1[2] = (ulonglong)puVar1;
        }
    }
    return;
}



undefined8 * FUN_140830760(int **param_1,int param_2,undefined8 param_3)

{
    int *piVar1;
    undefined8 *puVar2;

    for (piVar1 = *param_1; (piVar1 != param_1[1] && (*piVar1 != param_2)); piVar1 = piVar1 + 3) {
    }
    if (piVar1 == param_1[1]) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        puVar2 = (undefined8 *)(piVar1 + 1);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = param_3;
            return puVar2;
        }
    }
    piVar1 = (int *)FUN_140829d40();
    if (piVar1 == (int *)0x0) {
        return puVar2;
    }
    *piVar1 = param_2;
    *(undefined8 *)(piVar1 + 1) = param_3;
    return (undefined8 *)(piVar1 + 1);
}



undefined8 FUN_1408307d0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    undefined8 *puVar1;

    if (param_2 != 0) {
        for (puVar1 = *(undefined8 **)
                (param_1 + 0x38 +
                 (ulonglong)(uint)((int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1) *
                 8); puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (puVar1[1] == param_2) {
                if (puVar1 + 2 == (undefined8 *)0x0) {
                    return 2;
                }
                FUN_14084c240(puVar1[2],param_3);
                return 1;
            }
        }
    }
    return 2;
}



undefined8 FUN_140830840(longlong param_1,ulonglong param_2,longlong param_3,uint param_4)

{
    uint uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    puVar3 = *(undefined8 **)
            (param_1 + 0x38 +
             (ulonglong)(uint)((int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    while( true ) {
        if (puVar3 == (undefined8 *)0x0) {
            return 2;
        }
        if (puVar3[1] == param_2) break;
        puVar3 = (undefined8 *)*puVar3;
    }
    if (puVar3 + 2 == (longlong *)0x0) {
        return 2;
    }
    lVar2 = puVar3[2];
    if (param_4 < 5) {
        uVar4 = 0;
        uVar6 = 0;
        if (param_3 != 0) {
            uVar5 = uVar4;
            if (3 < (int)param_4) {
                puVar3 = (undefined8 *)(param_3 + 8);
                uVar1 = (param_4 - 4 >> 2) + 1;
                uVar8 = (ulonglong)uVar1;
                uVar6 = uVar1 * 4;
                uVar5 = (ulonglong)uVar1 * 4;
                do {
                    uVar7 = uVar4;
                    if ((*(int *)(puVar3 + -1) != 0) && (0.0 < *(float *)((longlong)puVar3 + -4))) {
                        uVar7 = (ulonglong)((int)uVar4 + 1);
                        *(undefined8 *)(lVar2 + 0x18 + uVar4 * 8) = puVar3[-1];
                    }
                    uVar4 = uVar7;
                    if ((*(int *)puVar3 != 0) && (0.0 < *(float *)((longlong)puVar3 + 4))) {
                        uVar4 = (ulonglong)((int)uVar7 + 1);
                        *(undefined8 *)(lVar2 + 0x18 + uVar7 * 8) = *puVar3;
                    }
                    uVar7 = uVar4;
                    if ((*(int *)(puVar3 + 1) != 0) && (0.0 < *(float *)((longlong)puVar3 + 0xc))) {
                        uVar7 = (ulonglong)((int)uVar4 + 1);
                        *(undefined8 *)(lVar2 + 0x18 + uVar4 * 8) = puVar3[1];
                    }
                    uVar4 = uVar7;
                    if ((*(int *)(puVar3 + 2) != 0) && (0.0 < *(float *)((longlong)puVar3 + 0x14))) {
                        uVar4 = (ulonglong)((int)uVar7 + 1);
                        *(undefined8 *)(lVar2 + 0x18 + uVar7 * 8) = puVar3[2];
                    }
                    puVar3 = puVar3 + 4;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            if (uVar6 < param_4) {
                puVar3 = (undefined8 *)(param_3 + uVar5 * 8);
                uVar8 = (ulonglong)(param_4 - uVar6);
                uVar5 = uVar4;
                do {
                    uVar4 = uVar5;
                    if ((*(int *)puVar3 != 0) && (0.0 < *(float *)((longlong)puVar3 + 4))) {
                        uVar4 = (ulonglong)((int)uVar5 + 1);
                        *(undefined8 *)(lVar2 + 0x18 + uVar5 * 8) = *puVar3;
                    }
                    puVar3 = puVar3 + 1;
                    uVar8 = uVar8 - 1;
                    uVar5 = uVar4;
                } while (uVar8 != 0);
            }
        }
        if ((uint)uVar4 < 4) {
            lVar2 = lVar2 + 0x1c + uVar4 * 8;
            uVar4 = (ulonglong)(4 - (uint)uVar4);
            do {
                *(undefined8 *)(lVar2 + -4) = 0;
                lVar2 = lVar2 + 8;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        return 1;
    }
    return 2;
}



undefined8
FUN_140830890(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              ulonglong param_5)

{
    undefined8 *puVar1;

    puVar1 = *(undefined8 **)
            (param_4 + 0x38 +
             (ulonglong)(uint)((int)param_5 + (int)((param_5 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    while( true ) {
        if (puVar1 == (undefined8 *)0x0) {
            return 2;
        }
        if (puVar1[1] == param_5) break;
        puVar1 = (undefined8 *)*puVar1;
    }
    if (puVar1 + 2 == (longlong *)0x0) {
        return 2;
    }
    *(undefined4 *)(puVar1[2] + 0x60) = param_3;
    return 1;
}



undefined8
FUN_1408308e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              ulonglong param_5)

{
    uint *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    puVar2 = *(undefined8 **)
            (param_4 + 0x38 +
             (ulonglong)(uint)((int)param_5 + (int)((param_5 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    while( true ) {
        if (puVar2 == (undefined8 *)0x0) {
            return 2;
        }
        if (puVar2[1] == param_5) break;
        puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 + 2 == (longlong *)0x0) {
        return 2;
    }
    lVar3 = puVar2[2];
    puVar1 = (uint *)(lVar3 + 0x88);
    *puVar1 = *puVar1 | 0x40000000;
    *(undefined4 *)(lVar3 + 100) = param_3;
    return 1;
}



void FUN_140830940(undefined8 *param_1,longlong param_2)

{
    int iVar1;
    undefined8 *puVar2;
    byte bVar3;
    uint uStackX12;

    iVar1 = *(int *)(param_2 + 0x18);
    puVar2 = (undefined8 *)*param_1;
    bVar3 = *(byte *)(param_2 + 0x5b) >> 1;
    do {
        if (puVar2 == (undefined8 *)0x0) {
            LAB_140830982:
            if (param_1[2] == 0) {
                if (*(uint *)((longlong)param_1 + 0x1c) <= *(uint *)(param_1 + 4)) {
                    return;
                }
                puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x10);
                if (puVar2 == (undefined8 *)0x0) {
                    return;
                }
                *puVar2 = param_1[2];
                param_1[2] = puVar2;
            }
            if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
                *param_1 = param_1[2];
            }
            else {
                *(undefined8 *)param_1[1] = param_1[2];
            }
            puVar2 = (undefined8 *)param_1[2];
            param_1[1] = puVar2;
            param_1[2] = *puVar2;
            *puVar2 = 0;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            *(ulonglong *)(param_1[1] + 8) =
                    CONCAT44(uStackX12 & 0xffffff00 | (uint)bVar3,iVar1) & 0xffffff01ffffffff;
            return;
        }
        if ((iVar1 == *(int *)(puVar2 + 1)) && ((bVar3 & 1) == *(byte *)((longlong)puVar2 + 0xc))) {
            if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
                return;
            }
            goto LAB_140830982;
        }
        puVar2 = (undefined8 *)*puVar2;
    } while( true );
}



undefined8
FUN_140830a00(longlong param_1,ulonglong param_2,uint param_3,undefined8 param_4,float param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    float in_XMM3_Da;

    puVar1 = *(undefined8 **)
            (param_1 + 0x38 +
             (ulonglong)(uint)((int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    while( true ) {
        if (puVar1 == (undefined8 *)0x0) {
            return 2;
        }
        if (puVar1[1] == param_2) break;
        puVar1 = (undefined8 *)*puVar1;
    }
    if (puVar1 + 2 == (longlong *)0x0) {
        return 2;
    }
    lVar2 = puVar1[2];
    if (7 < param_3) {
        return 2;
    }
    *(char *)((ulonglong)param_3 + 0x50 + lVar2) = (char)(longlong)(in_XMM3_Da * 255.0);
    *(char *)((ulonglong)param_3 + 0x58 + lVar2) = (char)(longlong)(param_5 * 255.0);
    return 1;
}



undefined8
FUN_140830a60(longlong param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4,
              undefined4 param_5)

{
    undefined8 *puVar1;

    puVar1 = *(undefined8 **)
            (param_1 + 0x38 +
             (ulonglong)(uint)((int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1) * 8);
    while( true ) {
        if (puVar1 == (undefined8 *)0x0) {
            return 2;
        }
        if (puVar1[1] == param_2) break;
        puVar1 = (undefined8 *)*puVar1;
    }
    if (puVar1 + 2 == (undefined8 *)0x0) {
        return 2;
    }
    FUN_14084c5c0(puVar1[2],param_3,param_4,param_5);
    return 1;
}



int FUN_140830ae0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
    longlong lVar1;

    if (param_2 != 0) {
        lVar1 = FUN_140830760(param_2 + 0x38,param_3,*param_4);
        return 2 - (uint)(lVar1 != 0);
    }
    return 2;
}



undefined8 FUN_140830b20(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    bool bVar3;

    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        FUN_1408306f0();
        puVar2 = (undefined8 *)param_1[2];
        while (puVar2 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*puVar2;
            if ((puVar2 < (undefined8 *)param_1[5]) ||
                (bVar3 = (undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 3) * 2 <= puVar2,
                        puVar2 = puVar1, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar2 = puVar1;
            }
        }
        if (param_1[5] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
    }
    return 1;
}



void FUN_140830bb0(longlong param_1)

{
    if (*(int *)(param_1 + 0x30) != -1) {
        FUN_140830d80(param_1,0);
    }
    FUN_140830c00(param_1);
    if (*(int *)(param_1 + 0x30) != -1) {
        FUN_140830670(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    }
    FUN_140830b20(param_1);
    return;
}



void FUN_140830c00(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    uint local_50;

    if (*(int *)(param_1 + 0x30) != -1) {
        uVar9 = 0;
        puVar10 = (undefined8 *)0x0;
        puVar7 = *(undefined8 **)(param_1 + 0x38);
        while (puVar7 == (undefined8 *)0x0) {
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            if (0xc0 < uVar8) {
                return;
            }
            puVar7 = *(undefined8 **)(param_1 + 0x38 + uVar9 * 8);
        }
        do {
            while (puVar7[1] == 0) {
                puVar10 = (undefined8 *)*puVar7;
                puVar6 = puVar7;
                while (puVar7 = puVar10, puVar10 = puVar6, puVar7 == (undefined8 *)0x0) {
                    uVar8 = (int)uVar9 + 1;
                    uVar9 = (ulonglong)uVar8;
                    if (0xc0 < uVar8) goto LAB_140830d12;
                    puVar6 = (undefined8 *)0x0;
                    puVar10 = *(undefined8 **)(param_1 + 0x38 + uVar9 * 8);
                }
            }
            lVar1 = puVar7[2];
            uVar8 = *(uint *)(lVar1 + 0x88);
            uVar8 = (uVar8 - 1 ^ uVar8) & 0x3fffffff ^ uVar8;
            *(uint *)(lVar1 + 0x88) = uVar8;
            uVar4 = DAT_140c10f20;
            if ((uVar8 & 0x3fffffff) == 0) {
                FUN_14084bd30();
                FUN_140881720(uVar4,lVar1);
            }
            local_50 = (uint)uVar9;
            puVar2 = (undefined8 *)*puVar7;
            puVar3 = puVar2;
            uVar5 = uVar9;
            puVar6 = puVar10;
            while (puVar3 == (undefined8 *)0x0) {
                local_50 = (int)uVar5 + 1;
                uVar5 = (ulonglong)local_50;
                if (0xc0 < local_50) break;
                puVar6 = (undefined8 *)0x0;
                puVar3 = *(undefined8 **)(param_1 + 0x38 + uVar5 * 8);
            }
            if (puVar10 == (undefined8 *)0x0) {
                *(undefined8 **)(param_1 + 0x38 + uVar9 * 8) = puVar2;
            }
            else {
                *puVar10 = puVar2;
            }
            FUN_140881720(*(undefined4 *)(param_1 + 0x30),puVar7);
            *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + -1;
            uVar9 = (ulonglong)local_50;
            puVar7 = puVar3;
            LAB_140830d12:
            puVar10 = puVar6;
        } while (puVar7 != (undefined8 *)0x0);
    }
    return;
}



ulonglong FUN_140830d80(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong *plVar10;
    longlong *plVar11;

    uVar7 = (param_2 & 0xffffffff) * 0x15390949 & 0xffffffff;
    uVar9 = (ulonglong)(uint)((int)param_2 + (int)((param_2 & 0xffffffff) / 0xc1) * -0xc1);
    plVar2 = *(longlong **)(param_1 + 0x38 + uVar9 * 8);
    lVar1 = uVar9 * 8;
    plVar11 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
        while (plVar10 = plVar2, plVar10[1] != param_2) {
            plVar2 = (longlong *)*plVar10;
            plVar11 = plVar10;
            if ((longlong *)*plVar10 == (longlong *)0x0) {
                return uVar7;
            }
        }
        lVar3 = *plVar10;
        lVar4 = plVar10[2];
        lVar5 = lVar3;
        while ((lVar5 == 0 && (uVar8 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar8, uVar8 < 0xc1))) {
            lVar5 = *(longlong *)(param_1 + 0x38 + uVar9 * 8);
        }
        if (plVar11 == (longlong *)0x0) {
            *(longlong *)(param_1 + lVar1 + 0x38) = lVar3;
        }
        else {
            *plVar11 = lVar3;
        }
        FUN_140881720();
        *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + -1;
        uVar8 = *(uint *)(lVar4 + 0x88) & 0x7fffffff;
        uVar7 = (ulonglong)uVar8;
        uVar8 = (uVar8 - 1 ^ uVar8) & 0x3fffffff ^ uVar8;
        *(uint *)(lVar4 + 0x88) = uVar8;
        uVar6 = DAT_140c10f20;
        if ((uVar8 & 0x3fffffff) == 0) {
            FUN_14084bd30(lVar4);
            uVar7 = FUN_140881720(uVar6,lVar4);
        }
    }
    return uVar7;
}



int * FUN_140830e60(int **param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;
    int *piVar3;
    int *piVar4;

    piVar4 = *param_1;
    piVar1 = param_1[1];
    if (piVar4 != piVar1) {
        do {
            if (*piVar4 == param_2) break;
            piVar4 = piVar4 + 3;
        } while (piVar4 != piVar1);
        if (piVar4 != piVar1) {
            if (piVar4 < piVar1 + -3) {
                uVar2 = (longlong)(piVar1 + -3) + (-1 - (longlong)piVar4);
                piVar1 = (int *)(uVar2 * -0x5555555555555555);
                piVar3 = piVar4 + 3;
                for (uVar2 = (uVar2 / 0xc + 1) * 3 & 0x3fffffffffffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
                    *piVar4 = *piVar3;
                    piVar3 = piVar3 + 1;
                    piVar4 = piVar4 + 1;
                }
            }
            param_1[1] = param_1[1] + -3;
        }
    }
    return piVar1;
}



longlong FUN_140830ed0(longlong param_1,int param_2)

{
    if (param_2 != 0) {
        param_1 = param_1 + 0x638;
    }
    return param_1;
}



void FUN_140830ee0(longlong param_1,undefined4 *param_2)

{
    if (*(char *)(param_2 + 1) != '\0') {
        param_1 = param_1 + 0x638;
    }
    FUN_14083ede0(param_1,*param_2);
    return;
}



void FUN_140830f00(longlong param_1,undefined8 param_2,int param_3)

{
    if (param_3 != 0) {
        param_1 = param_1 + 0x638;
    }
    FUN_14083ede0(param_1);
    return;
}



void FUN_140830f20(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = 0x18;
    *(undefined4 *)(param_1 + 0x630) = 0;
    lVar4 = 0x18;
    puVar2 = (undefined8 *)(param_1 + 0x28);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0xc68) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x660);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x12a0) = 0;
    puVar2 = (undefined8 *)(param_1 + 0xc98);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x18d8) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x12d0);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x1f10) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x1908);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x2548) = 0;
    puVar2 = (undefined8 *)(param_1 + 8000);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x2b80) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x2578);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x31b8) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x2bb0);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x37f0) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x31e8);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    lVar4 = 0x18;
    *(undefined4 *)(param_1 + 0x3e28) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x3820);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
    } while (lVar4 != 0);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x4460) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x3e58);
    do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar1 = puVar2 + 8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar3 = lVar3 + -1;
        puVar2 = puVar1;
    } while (lVar3 != 0);
    *puVar1 = 0;
    return;
}



void FUN_1408311f0(LPCRITICAL_SECTION param_1)

{
    PRTL_CRITICAL_SECTION_DEBUG p_Var1;
    ulonglong uVar2;
    PRTL_CRITICAL_SECTION_DEBUG p_Var3;
    uint uVar4;
    ulonglong uVar5;

    EnterCriticalSection(param_1);
    uVar2 = 0;
    p_Var3 = param_1[1].DebugInfo;
    uVar5 = uVar2;
    while (p_Var3 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (0xc0 < uVar4) goto LAB_140831278;
        p_Var3 = (&param_1[1].DebugInfo)[uVar5];
    }
    do {
        p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var3->ProcessLocksList).Flink;
        while ((p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 &&
                (uVar4 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar4, uVar4 < 0xc1))) {
            p_Var1 = (&param_1[1].DebugInfo)[uVar5];
        }
        if ((*(uint *)&(p_Var3->ProcessLocksList).Blink & 0x80000000) != 0) {
            (**(code **)(*(longlong *)p_Var3 + 0x10))();
        }
        p_Var3 = p_Var1;
    } while (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0);
    LAB_140831278:
    LeaveCriticalSection(param_1);
    p_Var3 = param_1[399].DebugInfo;
    while (p_Var3 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        uVar4 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar4;
        p_Var1 = p_Var3;
        if (0xc0 < uVar4) goto joined_r0x0001408312ac;
        p_Var3 = (&param_1[399].DebugInfo)[uVar2];
    }
    do {
        p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var3->ProcessLocksList).Flink;
        while ((p_Var1 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 &&
                (uVar4 = (int)uVar2 + 1, uVar2 = (ulonglong)uVar4, uVar4 < 0xc1))) {
            p_Var1 = (&param_1[399].DebugInfo)[uVar2];
        }
        if ((*(uint *)&(p_Var3->ProcessLocksList).Blink & 0x80000000) != 0) {
            (**(code **)(*(longlong *)p_Var3 + 0x10))();
        }
        joined_r0x0001408312ac:
        p_Var3 = p_Var1;
    } while (p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140831300(undefined4 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    if (param_1 == (undefined4 *)0x0) {
        FUN_140833e90(&DAT_140c61c70);
        return;
    }
    DAT_140c61c70._0_4_ = *param_1;
    DAT_140c61c80 = param_1[4];
    DAT_140c61c84 = param_1[5];
    DAT_140c61c88 = param_1[6];
    DAT_140c61c8c = param_1[7];
    DAT_140c61c90 = param_1[8];
    DAT_140c61c94 = param_1[9];
    DAT_140c61c98 = *(ushort *)(param_1 + 10);
    DAT_140c61c9c = param_1[0xb];
    _DAT_140c61ca0 = param_1[0xc];
    uRam0000000140c61ca4 = param_1[0xd];
    _DAT_140c61ca8 = param_1[0xe];
    uRam0000000140c61cac = param_1[0xf];
    DAT_140c61cb0 = *(undefined8 *)(param_1 + 0x10);
    if (DAT_140c61c98 < 2) {
        DAT_140c61c98 = 4;
    }
    _DAT_140c61c98 = CONCAT22(*(undefined2 *)((longlong)param_1 + 0x2a),DAT_140c61c98);
    DAT_140c61c70._4_4_ = param_1[1];
    DAT_140c61c78 = param_1[2];
    DAT_140c61c7c = param_1[3];
    *param_1 = (undefined4)DAT_140c61c70;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    param_1[3] = param_1[3];
    uVar3 = DAT_140c61c8c;
    uVar2 = DAT_140c61c88;
    uVar1 = DAT_140c61c84;
    param_1[4] = DAT_140c61c80;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar3 = DAT_140c61c9c;
    uVar2 = _DAT_140c61c98;
    uVar1 = DAT_140c61c94;
    param_1[8] = DAT_140c61c90;
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    uVar3 = uRam0000000140c61cac;
    uVar2 = _DAT_140c61ca8;
    uVar1 = uRam0000000140c61ca4;
    param_1[0xc] = _DAT_140c61ca0;
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    *(undefined8 *)(param_1 + 0x10) = DAT_140c61cb0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1408313a0(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = _DAT_140c10f78;
    if (DAT_140c10f28 == -1) {
        uVar2 = 0x1000000;
        if (0x40 < DAT_140c61c90) {
            uVar2 = DAT_140c61c90;
        }
        DAT_140c10f28 = FUN_140881bc0(0,uVar2,0x40,1,0x10);
        iVar1 = DAT_140c10f28;
        if (DAT_140c10f28 == -1) {
            return 0x34;
        }
    }
    _DAT_140c10f78 = iVar1;
    return 1;
}



void FUN_140831400(void)

{
    char cVar1;

    cVar1 = FUN_140881950();
    if ((cVar1 != '\0') && (DAT_140c10f28 != -1)) {
        FUN_140881dd0();
        DAT_140c10f28 = -1;
    }
    return;
}



void FUN_140831430(longlong param_1,longlong param_2,longlong param_3,char param_4,
                   undefined *param_5)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;
    char *pcVar6;
    int *piVar7;
    uint uVar8;
    undefined4 *puVar9;
    uint uVar10;
    undefined4 uVar11;
    char local_18 [16];

    uVar10 = 0;
    do {
        uVar4 = (ulonglong)uVar10;
        iVar1 = *(int *)(param_2 + uVar4 * 0xc);
        if (iVar1 == 0) break;
        uVar11 = *(undefined4 *)(param_2 + 4 + uVar4 * 0xc);
        lVar5 = uVar4 * 0x20;
        *(undefined4 *)(lVar5 + param_3) = uVar11;
        *(int *)(lVar5 + 8 + param_3) = iVar1;
        if (param_4 != '\0') {
            uVar11 = 0;
        }
        uVar2 = *(undefined4 *)(param_2 + 8 + uVar4 * 0xc);
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar5 + 4 + param_3) = uVar11;
        *(undefined4 *)(lVar5 + 0x18 + param_3) = uVar2;
        local_18[uVar4] = '\0';
    } while (uVar10 < 8);
    uVar8 = 0;
    puVar9 = (undefined4 *)(param_1 + 4);
    do {
        iVar1 = puVar9[-1];
        if (iVar1 == 0) break;
        uVar4 = 0;
        if (uVar10 != 0) {
            piVar7 = (int *)(param_3 + 8);
            pcVar6 = local_18;
            do {
                if ((*piVar7 == iVar1) && (*pcVar6 == '\0')) {
                    uVar11 = *puVar9;
                    local_18[uVar4] = '\x01';
                    *(undefined4 *)(uVar4 * 0x20 + 4 + param_3) = uVar11;
                    goto LAB_140831502;
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
                piVar7 = piVar7 + 8;
                pcVar6 = pcVar6 + 1;
            } while (uVar3 < uVar10);
        }
        if (uVar10 < 8) {
            lVar5 = (ulonglong)uVar10 * 0x20;
            uVar10 = uVar10 + 1;
            *(undefined4 *)(lVar5 + 4 + param_3) = *puVar9;
            uVar11 = puVar9[1];
            *(int *)(lVar5 + 8 + param_3) = iVar1;
            *(undefined4 *)(lVar5 + 0x18 + param_3) = uVar11;
            *(undefined4 *)(lVar5 + param_3) = 0;
        }
        LAB_140831502:
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 3;
    } while (uVar8 < 8);
    *param_5 = (char)uVar10;
    return;
}



undefined8 FUN_140831540(undefined4 param_1)

{
    DAT_140c61c54 = param_1;
    FUN_14084b280();
    return 1;
}



void FUN_140831560(longlong *param_1)

{
    undefined4 uVar1;

    (**(code **)(*param_1 + 8))();
    uVar1 = DAT_140c10f28;
    (**(code **)*param_1)(param_1,0);
    FUN_140881720(uVar1,param_1);
    return;
}



undefined4 * FUN_1408315a0(undefined4 *param_1,longlong param_2)

{
    byte bVar1;
    byte *pbVar2;
    longlong lVar3;
    float *pfVar4;
    uint uVar5;
    float *pfVar6;
    float fVar7;
    undefined4 uVar8;
    float local_res8 [2];
    longlong local_res10;

    pfVar6 = (float *)0x0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    local_res10 = param_2;
    FUN_140862a10();
    lVar3 = local_res10;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) & 0xf6;
    *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) | 2;
    param_1[0x118] = 0x3f800000;
    param_1[0x11c] = 0xc5800000;
    param_1[0x11d] = 0xc5800000;
    param_1[0x11f] = 0;
    FUN_140832c30();
    param_1[0x122] = 1.0 - 1.0 / local_res8[0];
    if ((*(ulonglong *)(lVar3 + 0x60) >> 0x21 & 1) == 0) {
        pbVar2 = *(byte **)(lVar3 + 0x50);
        local_res8[0] = DAT_140c11070;
        if (pbVar2 != (byte *)0x0) {
            pfVar4 = pfVar6;
            do {
                uVar5 = (int)pfVar4 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar2) == 0x1c) {
                    pfVar6 = (float *)(pbVar2 + (longlong)pfVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar4 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar2);
        }
        pfVar4 = local_res8;
        if (pfVar6 != (float *)0x0) {
            pfVar4 = pfVar6;
        }
        fVar7 = *pfVar4;
        local_res8[0] = fVar7;
    }
    else {
        fVar7 = (float)FUN_140836340(DAT_140c61bb0,lVar3,0x21,0);
    }
    bVar1 = *(byte *)(lVar3 + 0x148);
    *(byte *)(lVar3 + 0x148) = bVar1 & 0xdf;
    *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) & 0xfb;
    *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) | (bVar1 >> 4 & 1) << 2;
    if (fVar7 <= 0.0) {
        param_1[0x11f] = 0;
        return param_1;
    }
    uVar8 = FUN_1408fc7f0(-1024.0 / (fVar7 * 48000.0));
    param_1[0x11f] = uVar8;
    return param_1;
}



undefined4 * FUN_140831750(undefined4 *param_1)

{
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    FUN_140862a10();
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) & 0xf4;
    param_1[0x118] = 0x3f800000;
    return param_1;
}



void FUN_1408317b0(int *param_1)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *(longlong *)(param_1 + 2);
    while (lVar1 != 0) {
        plVar2 = *(longlong **)(param_1 + 2);
        if (plVar2 != (longlong *)0x0) {
            if (plVar2[1] == 0) {
                *(undefined8 *)(param_1 + 2) = 0;
                *(undefined8 *)(param_1 + 4) = 0;
            }
            else {
                *(longlong *)(param_1 + 2) = plVar2[1];
            }
            *param_1 = *param_1 + -1;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_140831560(plVar2);
        lVar1 = *(longlong *)(param_1 + 2);
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = 0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_140862d70(*(longlong *)(param_1 + 0xd8) + 0x20);
    }
    FUN_140862b80(param_1 + 8);
    return;
}



undefined8 * FUN_140831840(longlong *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if (((uVar3 < *(uint *)(param_1 + 2)) || (cVar2 = FUN_140832f50(param_1,4), cVar2 != '\0')) &&
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



int FUN_1408318c0(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    int *piVar5;
    undefined8 uVar6;
    undefined4 uVar7;
    longlong lVar8;

    lVar1 = *param_1;
    if ((*(int *)(lVar1 + 0x98) != 0) && (plVar3 = DAT_140c61cc8, DAT_140c61cc8 != DAT_140c61cd0)) {
        do {
            for (lVar4 = *(longlong *)(*plVar3 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
                if (*(longlong *)(lVar4 + 0x10) == 0) {
                    lVar8 = 0;
                }
                else {
                    lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x18);
                }
                if (*(int *)(lVar8 + 0x98) == *(int *)(lVar1 + 0x98)) {
                    FUN_140847260(lVar4,lVar1,0);
                    FUN_14085f4c0(lVar1);
                    return 5;
                }
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    lVar4 = FUN_1408819f0(DAT_140c10f28,0x4a0);
    if ((lVar4 == 0) || (lVar4 = FUN_140846af0(lVar4), lVar4 == 0)) {
        iVar2 = 2;
        FUN_14085e170(lVar1,1);
    }
    else {
        uVar7 = 0x177;
        if ((*(byte *)(lVar1 + 0x17e) & 0x80) == 0) {
            uVar7 = DAT_140c110b4;
        }
        FUN_140848840(lVar4,uVar7);
        iVar2 = FUN_140847260(lVar4,lVar1,1);
        if (iVar2 == 0x3f) {
            *(undefined8 *)(lVar4 + 8) = 0;
            if (DAT_140c62420 == 0) {
                iVar2 = 1;
                DAT_140c62418 = lVar4;
                DAT_140c62420 = lVar4;
            }
            else {
                *(longlong *)(DAT_140c62420 + 8) = lVar4;
                iVar2 = 1;
                DAT_140c62420 = lVar4;
            }
        }
        else {
            if (iVar2 == 1) {
                piVar5 = (int *)FUN_140832de0(lVar1);
                if ((piVar5 != (int *)0x0) &&
                    ((*(char *)(lVar4 + 0x58) == '\0' || (iVar2 = FUN_140846f60(lVar4), iVar2 == 1)))) {
                    *(undefined8 *)(lVar4 + 8) = 0;
                    if (*(longlong *)(piVar5 + 4) == 0) {
                        *(longlong *)(piVar5 + 2) = lVar4;
                    }
                    else {
                        *(longlong *)(*(longlong *)(piVar5 + 4) + 8) = lVar4;
                    }
                    *piVar5 = *piVar5 + 1;
                    *(longlong *)(piVar5 + 4) = lVar4;
                    if ((*(byte *)(lVar1 + 0x180) & 1) != 0) {
                        uVar6 = FUN_140832c00(piVar5);
                        *(undefined8 *)(lVar4 + 0x20) = uVar6;
                    }
                    FUN_140862be0(piVar5 + 8);
                    *(undefined *)(param_1 + 2) = 1;
                    return 1;
                }
                iVar2 = 2;
            }
            FUN_140831560(lVar4);
        }
    }
    return iVar2;
}



void FUN_140831ab0(float param_1)

{
    byte bVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    undefined4 uVar5;
    longlong *plVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;
    ulonglong uVar10;
    uint uVar11;
    ulonglong uVar12;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar13;
    longlong *local_res8;
    longlong local_res10;

    uVar10 = 0;
    fVar13 = *(float *)(DAT_140c61cc0 + 0x30c);
    if ((int)((longlong)DAT_140c61cd0 - (longlong)DAT_140c61cc8 >> 3) != 0) {
        do {
            lVar9 = DAT_140c61cc8[uVar10];
            *(float *)(lVar9 + 0x460) = *(float *)(lVar9 + 0x32c);
            param_1 = fVar13;
            if (*(longlong *)(lVar9 + 0x360) != 0) {
                param_1 = *(float *)(*(longlong *)(lVar9 + 0x360) + 0x460);
            }
            lVar2 = *(longlong *)(lVar9 + 8);
            param_1 = *(float *)(lVar9 + 0x32c) * param_1;
            *(float *)(lVar9 + 0x460) = param_1;
            for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
                if ((*(int *)(lVar2 + 0x4c) == 1) &&
                    (cVar3 = FUN_140847c10(lVar2), param_1 = extraout_XMM0_Da, cVar3 != '\0')) {
                    bVar1 = *(byte *)(lVar2 + 0x1d0);
                    uVar12 = 0;
                    if (bVar1 != 0) {
                        do {
                            iVar8 = *(int *)(lVar2 + 0xd8 + uVar12 * 0x20);
                            plVar6 = DAT_140c61cc8;
                            if (DAT_140c61cc8 != DAT_140c61cd0) {
                                do {
                                    lVar9 = *plVar6;
                                    iVar4 = FUN_14085cf90(lVar9 + 0x440);
                                    if ((iVar4 == iVar8) &&
                                        (param_1 = extraout_XMM0_Da_00, *(int *)(lVar9 + 0x448) != 2))
                                        goto LAB_140831ca0;
                                    plVar6 = plVar6 + 1;
                                } while (plVar6 != DAT_140c61cd0);
                            }
                            plVar6 = (longlong *)FUN_140830f00(DAT_140c61ba8,iVar8,1);
                            if (plVar6 == (longlong *)0x0) {
                                lVar9 = 0;
                                param_1 = extraout_XMM0_Da_01;
                            }
                            else {
                                lVar7 = 0;
                                local_res8 = plVar6;
                                FUN_14085cf20(&local_res8);
                                if ((local_res10 == 0) || (lVar7 = FUN_140832da0(&local_res10), lVar7 != 0)) {
                                    uVar5 = FUN_14085ce90(&local_res8);
                                    lVar9 = FUN_1408322f0(local_res8,uVar5,0x400);
                                    if (lVar9 != 0) {
                                        *(byte *)(lVar9 + 0x464) = *(byte *)(lVar9 + 0x464) & 0xf7;
                                        if (lVar7 == 0) {
                                            FUN_140863c40(DAT_140c61cc0);
                                        }
                                        else {
                                            FUN_140862be0(lVar7 + 0x20);
                                            *(longlong *)(lVar9 + 0x360) = lVar7;
                                        }
                                        cVar3 = FUN_14085cfd0(&local_res8);
                                        if (cVar3 == '\0') {
                                            FUN_1408631f0(lVar9 + 0x20);
                                            FUN_140863880(lVar9 + 0x20);
                                        }
                                    }
                                }
                                else {
                                    lVar9 = 0;
                                }
                                param_1 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
                            }
                            LAB_140831ca0:
                            *(longlong *)(lVar2 + 0xe0 + uVar12 * 0x20) = lVar9;
                            if (lVar9 == 0) {
                                *(char *)(lVar2 + 0x1d0) = (char)uVar12;
                                break;
                            }
                            *(byte *)(lVar9 + 0x464) = *(byte *)(lVar9 + 0x464) | 1;
                            uVar11 = (int)uVar12 + 1;
                            uVar12 = (ulonglong)uVar11;
                        } while (uVar11 < bVar1);
                    }
                }
            }
            uVar11 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar11;
        } while (uVar11 < (uint)((longlong)DAT_140c61cd0 - (longlong)DAT_140c61cc8 >> 3));
    }
    iVar8 = (int)((longlong)DAT_140c61cd0 - (longlong)DAT_140c61cc8 >> 3) + -1;
    lVar9 = (longlong)iVar8;
    plVar6 = DAT_140c61cc8;
    if (-1 < iVar8) {
        do {
            lVar2 = plVar6[lVar9];
            for (lVar7 = *(longlong *)(lVar2 + 8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
                if (*(int *)(lVar7 + 0x4c) == 1) {
                    param_1 = (float)FUN_140847480(param_1,*(undefined4 *)(lVar2 + 0x460),lVar7);
                }
                plVar6 = DAT_140c61cc8;
            }
            if ((*(byte *)(lVar2 + 0x464) & 2) != 0) {
                param_1 = (float)FUN_140831e40(lVar2);
                plVar6 = DAT_140c61cc8;
            }
            lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
    }
    return;
}



void FUN_140831d90(int param_1,undefined4 param_2,undefined4 param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar1 = *plVar3;
            iVar2 = FUN_14085cf90(lVar1 + 0x440);
            if (iVar2 == param_1) {
                FUN_1408637a0(lVar1 + 0x20,param_2,param_3);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    return;
}



void FUN_140831e40(longlong param_1)

{
    byte bVar1;
    longlong lVar2;
    byte *pbVar3;
    char cVar4;
    float *pfVar5;
    ulonglong uVar6;
    uint uVar7;
    float *pfVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined4 uVar12;
    float fVar13;
    undefined4 in_XMM6_Da;
    float fVar14;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar15;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    float local_res8 [2];
    float local_res10;
    undefined auVar16 [16];
    undefined auVar17 [16];
    undefined auVar18 [16];
    undefined auVar19 [16];

    local_res8[0] = *(float *)(param_1 + 0x460);
    lVar2 = *(longlong *)(param_1 + 0x440);
    auVar19 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar14 = 1.0;
    auVar18 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    auVar17 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    local_res10 = (float)(((uint)local_res8[0] & 0x7fffff) + 0x3f800000);
    auVar16 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
    fVar13 = (local_res10 - 1.0) / (local_res10 + 1.0);
    fVar13 = ((fVar13 * fVar13 * 0.3333333 + 1.0) * fVar13 * 2.0 +
              ((float)(ulonglong)((uint)local_res8[0] >> 0x17 & 0xff) - 127.0) * 0.6931472) * 0.4342945
             * 20.0;
    *(float *)(param_1 + 0x480) = fVar13;
    cVar4 = FUN_140832c30();
    if (cVar4 == '\0') {
        fVar11 = *(float *)(param_1 + 0x488);
    }
    else {
        *(float *)(param_1 + 0x484) = local_res8[0];
        fVar11 = fVar14 - fVar14 / local_res10;
        *(float *)(param_1 + 0x488) = fVar11;
    }
    fVar15 = 0.0;
    fVar9 = (*(float *)(param_1 + 0x470) - fVar13) - local_res8[0];
    fVar10 = local_res8[0];
    if (0.0 < fVar9) {
        fVar10 = fVar9 * fVar11 + local_res8[0];
    }
    if ((*(ulonglong *)(lVar2 + 0x60) >> 0x21 & 1) == 0) {
        pbVar3 = *(byte **)(lVar2 + 0x50);
        local_res8[0] = DAT_140c11070;
        if (pbVar3 != (byte *)0x0) {
            uVar6 = 0;
            do {
                uVar7 = (int)uVar6 + 1;
                if (pbVar3[uVar7] == 0x1c) {
                    pfVar8 = (float *)(pbVar3 + uVar6 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
                    goto LAB_140831fe3;
                }
                uVar6 = (ulonglong)uVar7;
            } while (uVar7 < *pbVar3);
        }
        pfVar8 = (float *)0x0;
        LAB_140831fe3:
        pfVar5 = local_res8;
        if (pfVar8 != (float *)0x0) {
            pfVar5 = pfVar8;
        }
        fVar11 = *pfVar5;
        local_res8[0] = fVar11;
    }
    else {
        fVar11 = (float)FUN_140836340(DAT_140c61bb0,lVar2,0x21,0,auVar16,auVar17,auVar18,auVar19);
    }
    bVar1 = *(byte *)(lVar2 + 0x148);
    *(byte *)(lVar2 + 0x148) = bVar1 & 0xdf;
    if ((bVar1 >> 5 & 1) != 0) {
        if (fVar11 <= fVar15) {
            *(undefined4 *)(param_1 + 0x47c) = 0;
        }
        else {
            uVar12 = FUN_1408fc7f0(-1024.0 / (fVar11 * 48000.0));
            *(undefined4 *)(param_1 + 0x47c) = uVar12;
        }
    }
    fVar11 = *(float *)(param_1 + 0x47c);
    fVar9 = fVar10;
    if ((bVar1 >> 4 & 1) == 0) {
        if (-37.0 <= fVar10 * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar7 = (uint)(longlong)(fVar10 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
            local_res10 = (float)(uVar7 & 0xff800000);
            local_res8[0] = (float)((uVar7 & 0x7fffff) + 0x3f800000);
            fVar15 = ((local_res8[0] * 0.3251898 + 0.02080577) * local_res8[0] + 0.6530434) * local_res10;
        }
        if (fVar15 < *(float *)(param_1 + 0x474)) {
            local_res8[0] = (fVar14 - fVar11) * fVar15 + *(float *)(param_1 + 0x474) * fVar11;
            *(float *)(param_1 + 0x474) = local_res8[0];
            local_res10 = (float)(((uint)local_res8[0] & 0x7fffff) + 0x3f800000);
            fVar11 = (local_res10 - fVar14) / (local_res10 + fVar14);
            fVar9 = ((fVar11 * fVar11 * 0.3333333 + fVar14) * fVar11 * 2.0 +
                     ((float)(ulonglong)((uint)local_res8[0] >> 0x17 & 0xff) - 127.0) * 0.6931472) *
                    0.4342945 * 20.0;
            if (0.5 <= fVar9 - fVar10) {
                *(byte *)(param_1 + 0x464) = *(byte *)(param_1 + 0x464) | 1;
            }
        }
        else {
            *(float *)(param_1 + 0x474) = fVar15;
        }
    }
    else if (fVar10 < *(float *)(param_1 + 0x474)) {
        fVar14 = (fVar14 - fVar11) * fVar10 + *(float *)(param_1 + 0x474) * fVar11;
        *(float *)(param_1 + 0x474) = fVar14;
        if (0.5 <= fVar14 - fVar10) {
            *(byte *)(param_1 + 0x464) = *(byte *)(param_1 + 0x464) | 1;
        }
        fVar9 = *(float *)(param_1 + 0x474);
    }
    else {
        *(float *)(param_1 + 0x474) = fVar10;
    }
    *(float *)(param_1 + 0x478) = fVar9 + fVar13;
    FUN_14085b160(fVar9 + fVar13,fVar9,lVar2);
    *(undefined4 *)(param_1 + 0x470) = 0xc5800000;
    return;
}



undefined8 FUN_1408322a0(void)

{
    longlong lVar1;

    lVar1 = FUN_1408819f0(DAT_140c10f28,0x430);
    if (lVar1 != 0) {
        FUN_140862a10(lVar1);
        DAT_140c61cc0 = lVar1;
        return 1;
    }
    return 0x34;
}



undefined4 * FUN_1408322f0(longlong param_1,undefined4 param_2,undefined2 param_3)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;

    if ((param_1 == 0) || ((*(byte *)(param_1 + 0x5b) & 8) == 0)) {
        puVar3 = (undefined4 *)FUN_1408819f0(DAT_140c10f28,0x470);
        if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
        }
        FUN_140831750(puVar3);
    }
    else {
        puVar3 = (undefined4 *)FUN_1408819f0(DAT_140c10f28,0x490);
        if (puVar3 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
        }
        FUN_1408315a0(puVar3,param_1);
    }
    *(undefined8 *)(puVar3 + 0xd8) = 0;
    iVar2 = FUN_140862f90(puVar3 + 8,param_2,param_3,param_1);
    if ((iVar2 == 1) && (lVar4 = FUN_140831840(&DAT_140c61cc8,puVar3), lVar4 != 0)) {
        return puVar3;
    }
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *puVar3 = 0;
    uVar1 = DAT_140c10f28;
    FUN_1408317b0(puVar3);
    FUN_140881720(uVar1,puVar3);
    return (undefined4 *)0x0;
}



void FUN_1408323f0(void)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;

    iVar3 = (int)(DAT_140c61cd0 - DAT_140c61cc8 >> 3) + -1;
    lVar5 = (longlong)iVar3;
    lVar4 = DAT_140c61cc8;
    if (-1 < iVar3) {
        do {
            uVar2 = DAT_140c10f28;
            lVar1 = *(longlong *)(lVar4 + lVar5 * 8);
            if (lVar1 != 0) {
                FUN_1408317b0(lVar1);
                FUN_140881720(uVar2,lVar1);
                lVar4 = DAT_140c61cc8;
            }
            lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
    }
    DAT_140c61cd0 = lVar4;
    return;
}



void FUN_140832470(void)

{
    DAT_140c61c58 = DAT_140c61fe0;
    return;
}



void FUN_140832480(longlong *param_1,code *param_2,undefined8 param_3)

{
    undefined8 uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong *plVar10;
    LPCRITICAL_SECTION lpCriticalSection;
    longlong *local_68 [2];
    longlong *local_58 [3];

    uVar7 = 0;
    lVar9 = 0;
    do {
        local_68[0] = (longlong *)0x0;
        FUN_14085ceb0(&DAT_140c62458,uVar7,local_68);
        if (local_68[0] != (longlong *)0x0) {
            if ((local_68[0] == param_1) &&
                (lVar5 = *(longlong *)(lVar9 + 0x380 + DAT_140c61cc0), lVar5 != 0)) {
                (*param_2)(lVar5,0,param_3);
            }
            if (local_68[0] != (longlong *)0x0) {
                (**(code **)(*local_68[0] + 0x10))();
            }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x28;
    } while (uVar7 < 4);
    plVar10 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar9 = *plVar10;
            uVar7 = 0;
            plVar8 = (longlong *)(lVar9 + 0x3a0);
            do {
                local_68[0] = (longlong *)0x0;
                FUN_14085ceb0(lVar9 + 0x440,uVar7,local_68);
                if (local_68[0] != (longlong *)0x0) {
                    if ((local_68[0] == param_1) && (*plVar8 != 0)) {
                        (*param_2)(*plVar8,0,param_3);
                    }
                    if (local_68[0] != (longlong *)0x0) {
                        (**(code **)(*local_68[0] + 0x10))();
                        local_68[0] = (longlong *)0x0;
                    }
                }
                uVar7 = uVar7 + 1;
                plVar8 = plVar8 + 5;
            } while (uVar7 < 4);
            for (lVar9 = *(longlong *)(lVar9 + 8); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 8)) {
                plVar8 = *(longlong **)(lVar9 + 0x10);
                if (plVar8 == (longlong *)0x0) {
                    lVar5 = 0;
                }
                else {
                    lVar5 = plVar8[3];
                }
                uVar1 = *(undefined8 *)(lVar5 + 0xb0);
                if (plVar8 == (longlong *)0x0) {
                    lVar5 = 0;
                }
                else {
                    lVar5 = plVar8[3];
                }
                plVar2 = *(longlong **)(lVar5 + 0xa0);
                if (((plVar8 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar8 + 0x68))(), lVar5 != 0))
                    && (iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2), lVar3 = DAT_140c61ba8, iVar4 == 4)) {
                    uVar7 = *(uint *)(plVar2 + 0x15);
                    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x3e30);
                    EnterCriticalSection(lpCriticalSection);
                    for (plVar8 = *(longlong **)(lVar3 + 0x3e58 + (ulonglong)(uVar7 % 0xc1) * 8);
                         plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[2]) {
                        if (*(uint *)(plVar8 + 3) == uVar7) {
                            if (plVar8 != (longlong *)0x0) {
                                *(int *)(plVar8 + 1) = *(int *)(plVar8 + 1) + 1;
                                LeaveCriticalSection(lpCriticalSection);
                                if (plVar8 == param_1) {
                                    (*param_2)(lVar5,uVar1,param_3);
                                }
                                (**(code **)(*plVar8 + 0x10))(plVar8);
                                goto LAB_14083267d;
                            }
                            break;
                        }
                    }
                    LeaveCriticalSection(lpCriticalSection);
                }
                LAB_14083267d:
                uVar7 = 0;
                plVar8 = (longlong *)(lVar9 + 0x3a0);
                do {
                    lVar5 = *plVar8;
                    if (lVar5 != 0) {
                        lVar3 = *plVar2;
                        local_58[0] = (longlong *)0x0;
                        lVar6 = FUN_140832b80(lVar9);
                        (**(code **)(lVar3 + 0x1c0))(plVar2,uVar7,local_58,*(undefined8 *)(lVar6 + 0xb0));
                        if (local_58[0] != (longlong *)0x0) {
                            if ((local_58[0] == param_1) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0)) {
                                (*param_2)(lVar5,uVar1,param_3);
                            }
                            if (local_58[0] != (longlong *)0x0) {
                                (**(code **)(*local_58[0] + 0x10))();
                                local_58[0] = (longlong *)0x0;
                            }
                        }
                    }
                    uVar7 = uVar7 + 1;
                    plVar8 = plVar8 + 1;
                } while (uVar7 < 4);
            }
            plVar10 = plVar10 + 1;
        } while (plVar10 != DAT_140c61cd0);
    }
    return;
}



void FUN_1408327b0(void)

{
    undefined4 uVar1;
    longlong lVar2;

    if (DAT_140c61cc0 != 0) {
        FUN_140864080();
        lVar2 = DAT_140c61cc0;
        uVar1 = DAT_140c10f28;
        if (DAT_140c61cc0 != 0) {
            FUN_140001b70(DAT_140c61cc0);
            FUN_140881720(uVar1,lVar2);
        }
        DAT_140c61cc0 = 0;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140832810(void)

{
    int *piVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    char cVar6;
    undefined uVar7;
    int iVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 local_res8;
    undefined8 local_88 [2];
    undefined2 local_78;
    undefined2 local_76;
    undefined2 local_70;
    undefined8 local_68;
    undefined4 local_60;
    int local_50;
    undefined2 local_4c;
    longlong *local_48;
    int *local_40;
    undefined8 local_38;
    byte local_30;

    if (DAT_140c61b60[1] != *DAT_140c61b60) {
        QueryPerformanceCounter(DAT_140c61b60 + 8);
    }
    FUN_140858910(0x400);
    FUN_140831ab0();
    iVar8 = (int)(DAT_140c61cd0 - DAT_140c61cc8 >> 3) + -1;
    lVar10 = (longlong)iVar8;
    lVar9 = DAT_140c61cc8;
    if (-1 < iVar8) {
        do {
            piVar1 = *(int **)(lVar9 + lVar10 * 8);
            plVar2 = *(longlong **)(piVar1 + 2);
            plVar5 = (longlong *)0x0;
            while (plVar4 = plVar2, plVar4 != (longlong *)0x0) {
                local_88[0] = 0;
                local_70 = 0;
                local_68 = 0;
                local_78 = 0x400;
                local_30 = *(byte *)(piVar1 + 0x119) >> 3 & 1;
                local_4c = 0;
                local_50 = 0x2b;
                local_38 = 0;
                if (local_30 != 0) {
                    local_78 = (undefined2)(0x5dc00 / (ulonglong)DAT_140c110b4);
                }
                if (*(int *)((longlong)plVar4 + 0x4c) == 1) {
                    cVar6 = FUN_140848cc0(plVar4);
                    if (cVar6 != '\0') {
                        local_76 = 0;
                        local_70 = 0;
                        local_68 = 0;
                        local_60 = 0xffffffff;
                        local_48 = plVar4;
                        local_40 = piVar1;
                        FUN_1408333c0(local_88);
                        if (local_50 == 0x2e) {
                            FUN_140848ac0(local_48);
                        }
                        else {
                            FUN_140848a20();
                        }
                    }
                    if (local_50 == 0x11) {
                        if ((local_4c._1_1_ == '\0') && (lVar9 = plVar4[3], lVar9 != 0)) {
                            plVar4[3] = 0;
                            FUN_140848a40(plVar4,0);
                            iVar8 = FUN_1408472b0(plVar4,lVar9,1);
                            if ((iVar8 == 1) && (iVar8 = FUN_140846f60(plVar4), iVar8 == 1)) {
                                FUN_1408613d0(lVar9);
                                goto LAB_1408329d2;
                            }
                        }
                    }
                    else if ((local_50 != 2) && (local_4c._1_1_ == '\0')) {
                        if ((char)local_4c != '\0') {
                            (**(code **)(*plVar4 + 0x18))(plVar4);
                        }
                        goto LAB_1408329d2;
                    }
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                }
                LAB_1408329d2:
                if (*(int *)((longlong)plVar4 + 0x4c) == 2) {
                    FUN_140862d70(piVar1 + 8);
                    FUN_140858490(plVar4);
                    plVar2 = (longlong *)plVar4[1];
                    if (plVar4 == *(longlong **)(piVar1 + 2)) {
                        *(longlong **)(piVar1 + 2) = plVar2;
                    }
                    else {
                        plVar5[1] = (longlong)plVar2;
                    }
                    if (plVar4 == *(longlong **)(piVar1 + 4)) {
                        *(longlong **)(piVar1 + 4) = plVar5;
                    }
                    *piVar1 = *piVar1 + -1;
                    FUN_140831560(plVar4);
                    lVar9 = DAT_140c61cc8;
                }
                else {
                    plVar2 = (longlong *)plVar4[1];
                    lVar9 = DAT_140c61cc8;
                    plVar5 = plVar4;
                }
            }
            lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
    }
    iVar8 = (int)(DAT_140c61cd0 - lVar9 >> 3) + -1;
    lVar10 = (longlong)iVar8;
    if (-1 < iVar8) {
        do {
            lVar3 = *(longlong *)(lVar9 + lVar10 * 8);
            if ((*(byte *)(lVar3 + 0x464) & 8) == 0) {
                FUN_140862f00(lVar3 + 0x20,&local_res8);
                FUN_1408638b0(lVar3 + 0x20);
                lVar9 = *(longlong *)(lVar3 + 0x360);
                uVar7 = FUN_140863240(lVar3 + 0x20);
                if (lVar9 == 0) {
                    FUN_140863c90(DAT_140c61cc0,&local_res8,uVar7,lVar3 + 0x1a0);
                }
                else {
                    FUN_140862cd0(lVar9 + 0x20,local_res8);
                }
                FUN_140863400(lVar3 + 0x20);
                lVar9 = DAT_140c61cc8;
            }
            lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
    }
    FUN_140863d50(DAT_140c61cc0,&DAT_140c61ce0);
    return;
}



undefined8 FUN_140832b30(uint param_1)

{
    uint uVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    if (param_1 < 0x400) {
        param_1 = 0x400;
    }
    uVar3 = (ulonglong)(param_1 - 1 >> 10);
    uVar1 = (&DAT_140c61d00)[uVar3 * 6];
    if (uVar1 != 0) {
        uVar1 = uVar1 - 1;
        uVar2 = (&DAT_140c61d08)[uVar3 * 3 + (ulonglong)uVar1];
        (&DAT_140c61d00)[uVar3 * 6] = uVar1;
        return uVar2;
    }
    uVar2 = FUN_140881960(DAT_140c10f28,param_1,0x10);
    return uVar2;
}



longlong FUN_140832b80(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
        return *(longlong *)(lVar1 + 0x18);
    }
    return lVar1;
}



longlong FUN_140832b90(int param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar1 = *plVar3;
            iVar2 = FUN_14085cf90(lVar1 + 0x440);
            if ((iVar2 == param_1) && (*(int *)(lVar1 + 0x448) != 2)) {
                return lVar1;
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    return 0;
}



longlong FUN_140832c00(longlong param_1)

{
    byte bVar1;

    bVar1 = *(byte *)(param_1 + 0x464);
    while( true ) {
        if ((bVar1 & 2) != 0) {
            return param_1;
        }
        param_1 = *(longlong *)(param_1 + 0x360);
        if (param_1 == 0) break;
        bVar1 = *(byte *)(param_1 + 0x464);
    }
    return 0;
}



byte FUN_140832c30(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    byte bVar1;
    byte *pbVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    uint uVar5;
    undefined4 *puVar6;
    undefined4 uVar7;
    undefined4 local_res8 [2];

    puVar6 = (undefined4 *)0x0;
    if ((*(ulonglong *)(param_1 + 0x60) >> 0x20 & 1) == 0) {
        pbVar2 = *(byte **)(param_1 + 0x50);
        local_res8[0] = DAT_140c11068;
        puVar4 = puVar6;
        if (pbVar2 != (byte *)0x0) {
            puVar3 = puVar6;
            do {
                uVar5 = (int)puVar3 + 1;
                if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar5 + (longlong)pbVar2) == 0x1a) {
                    puVar4 = (undefined4 *)
                            (pbVar2 + (longlong)puVar3 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                    break;
                }
                puVar3 = (undefined4 *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar2);
        }
        puVar3 = local_res8;
        if (puVar4 != (undefined4 *)0x0) {
            puVar3 = puVar4;
        }
        *param_2 = *puVar3;
    }
    else {
        uVar7 = FUN_140836340();
        *param_2 = uVar7;
    }
    if ((*(ulonglong *)(param_1 + 0x60) >> 0x22 & 1) == 0) {
        pbVar2 = *(byte **)(param_1 + 0x50);
        local_res8[0] = DAT_140c1106c;
        if (pbVar2 != (byte *)0x0) {
            puVar4 = puVar6;
            do {
                uVar5 = (int)puVar4 + 1;
                if (*(byte *)((longlong)(undefined4 *)(ulonglong)uVar5 + (longlong)pbVar2) == 0x1b) {
                    puVar6 = (undefined4 *)
                            (pbVar2 + (longlong)puVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
                    break;
                }
                puVar4 = (undefined4 *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar2);
        }
        puVar4 = local_res8;
        if (puVar6 != (undefined4 *)0x0) {
            puVar4 = puVar6;
        }
        *param_3 = *puVar4;
    }
    else {
        uVar7 = FUN_140836340(DAT_140c61bb0,param_1,0x22,0);
        *param_3 = uVar7;
    }
    bVar1 = *(byte *)(param_1 + 0x148);
    *(byte *)(param_1 + 0x148) = bVar1 & 0xbf;
    return bVar1 >> 6 & 1;
}



void FUN_140832d80(undefined8 param_1,int param_2)

{
    if (param_2 != 0) {
        do {
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    return;
}



void FUN_140832da0(undefined8 param_1,undefined param_2)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = FUN_14085cf90();
    lVar1 = FUN_140832b90(uVar2);
    if (lVar1 == 0) {
        FUN_140832e30(param_1,param_2);
    }
    return;
}



void FUN_140832de0(longlong param_1)

{
    byte bVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 local_res8 [4];

    local_res8[0] = 0;
    local_res8[0] = FUN_14085ea40();
    bVar1 = *(byte *)(param_1 + 0x17e);
    uVar3 = FUN_14085cf90(local_res8);
    lVar2 = FUN_140832b90(uVar3);
    if (lVar2 == 0) {
        FUN_140832e30(local_res8,bVar1 >> 7);
    }
    return;
}



longlong FUN_140832e30(undefined8 *param_1,byte param_2)

{
    char cVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong local_res18;

    lVar3 = 0;
    FUN_14085cf20(param_1,&local_res18);
    if (local_res18 != 0) {
        uVar2 = FUN_14085cf90(&local_res18);
        lVar3 = FUN_140832b90(uVar2);
        if (lVar3 == 0) {
            lVar3 = FUN_140832e30(&local_res18,param_2);
        }
        if (lVar3 == 0) {
            return 0;
        }
    }
    if (param_2 == 0) {
        uVar2 = FUN_14085ce90(param_1);
        uVar5 = 0x400;
    }
    else {
        uVar2 = 4;
        uVar5 = 0x10;
    }
    lVar4 = FUN_1408322f0(*param_1,uVar2,uVar5);
    if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x464) = *(byte *)(lVar4 + 0x464) & 0xf7;
        *(byte *)(lVar4 + 0x464) = *(byte *)(lVar4 + 0x464) | (param_2 & 1) << 3;
        if (param_2 == 0) {
            if (lVar3 == 0) {
                FUN_140863c40(DAT_140c61cc0,lVar4 + 0x20);
            }
            else {
                FUN_140862be0(lVar3 + 0x20);
                *(longlong *)(lVar4 + 0x360) = lVar3;
            }
        }
        cVar1 = FUN_14085cfd0(param_1);
        if (cVar1 == '\0') {
            FUN_1408631f0(lVar4 + 0x20);
            FUN_140863880(lVar4 + 0x20);
        }
    }
    return lVar4;
}



undefined8 FUN_140832f50(longlong *param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar2 = *(int *)(param_1 + 2);
    lVar3 = FUN_1408819f0(DAT_140c10f28);
    if (lVar3 == 0) {
        return 0;
    }
    uVar4 = param_1[1] - *param_1 >> 3;
    uVar6 = uVar4 & 0xffffffff;
    if (*param_1 != 0) {
        uVar5 = 0;
        if ((int)uVar4 != 0) {
            do {
                uVar5 = uVar5 + 1;
                *(undefined8 *)(lVar3 + -8 + uVar5 * 8) = *(undefined8 *)(*param_1 + -8 + uVar5 * 8);
            } while (uVar5 < uVar6);
        }
        FUN_140881720(DAT_140c10f28,*param_1);
    }
    lVar1 = lVar3 + uVar6 * 8;
    *(int *)(param_1 + 2) = iVar2 + param_2;
    param_1[1] = lVar1;
    *param_1 = lVar3;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



void FUN_140833000(void)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    char cVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    if ((DAT_140c61c60 != (longlong *)0x0) &&
        (cVar4 = (**(code **)(*DAT_140c61c60 + 0x28))(), cVar4 == '\x01')) {
        (**(code **)(*DAT_140c61c60 + 0x30))();
        if ((DAT_140c61c50 == 0) || (8 < (uint)(*(int *)(DAT_140c61b68 + 0xc0) - DAT_140c61c50))) {
            DAT_140c61c50 = *(int *)(DAT_140c61b68 + 0xc0);
        }
    }
    if ((DAT_140c61c58 == 0) || (cVar4 = FUN_1408462d0(), lVar3 = DAT_140c61c58, cVar4 == '\0')) {
        return;
    }
    uVar9 = 0;
    cVar4 = '\0';
    if (*(char *)(DAT_140c61c58 + 0x89) != '\0') {
        do {
            if (cVar4 != '\0') goto LAB_1408461dd;
            uVar8 = 0;
            lVar5 = uVar9 + 1;
            lVar6 = *(longlong *)(lVar3 + lVar5 * 0x18);
            plVar1 = (longlong *)(lVar3 + lVar5 * 0x18);
            if ((int)(*(longlong *)(lVar3 + 8 + lVar5 * 0x18) - lVar6 >> 4) != 0) {
                do {
                    if (cVar4 != '\0') break;
                    plVar2 = *(longlong **)(lVar6 + 8 + uVar8 * 0x10);
                    if (plVar2 != (longlong *)0x0) {
                        cVar4 = (**(code **)(*plVar2 + 0x68))();
                    }
                    lVar6 = *plVar1;
                    uVar7 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar7;
                } while (uVar7 < (uint)(plVar1[1] - lVar6 >> 4));
            }
            uVar7 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar7;
        } while (uVar7 < *(byte *)(lVar3 + 0x89));
        if (cVar4 != '\0') {
            LAB_1408461dd:
            if ((*(int *)(lVar3 + 0x84) == 0) ||
                (8 < (uint)(*(int *)(DAT_140c61b68 + 0xc0) - *(int *)(lVar3 + 0x84)))) {
                *(int *)(lVar3 + 0x84) = *(int *)(DAT_140c61b68 + 0xc0);
            }
        }
    }
    return;
}



undefined FUN_140833080(void)

{
    char cVar1;

    if (DAT_140c61c58 != 0) {
        cVar1 = FUN_1408462d0();
        if (cVar1 != '\0') {
            return 1;
        }
    }
    return 0;
}



void FUN_1408330b0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                   undefined4 param_5,undefined8 param_6)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 extraout_XMM0_Qa;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    plVar3 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar1 = *plVar3;
            iVar2 = FUN_14085cf90(lVar1 + 0x440);
            if (iVar2 == param_3) {
                FUN_140863310(extraout_XMM0_Qa,param_2,lVar1 + 0x20,param_4,param_5,param_6,auVar4);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    return;
}



void FUN_140833130(uint param_1,undefined8 param_2)

{
    uint uVar1;
    ulonglong uVar2;

    if (param_1 < 0x400) {
        param_1 = 0x400;
    }
    uVar2 = (ulonglong)(param_1 - 1 >> 10);
    uVar1 = (&DAT_140c61d00)[uVar2 * 6];
    if (uVar1 < 2) {
        (&DAT_140c61d00)[uVar2 * 6] = uVar1 + 1;
        if (&DAT_140c61d08 + uVar2 * 3 + (ulonglong)uVar1 != (undefined8 *)0x0) {
            (&DAT_140c61d08)[uVar2 * 3 + (ulonglong)uVar1] = param_2;
            return;
        }
    }
    FUN_140881720(DAT_140c10f28);
    return;
}



void FUN_140833180(void)

{
    undefined4 uVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;

    uVar3 = (int)(DAT_140c61cd0 - DAT_140c61cc8 >> 3) - 1;
    if (-1 < (int)uVar3) {
        lVar6 = (longlong)(int)uVar3 * 8;
        do {
            uVar1 = DAT_140c10f28;
            lVar2 = *(longlong *)(lVar6 + DAT_140c61cc8);
            if (((*(int *)(lVar2 + 0x448) == 1) || (*(int *)(lVar2 + 0x44c) != 0)) ||
                ((*(byte *)(lVar2 + 0x464) & 1) != 0)) {
                *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) & 0xfe;
            }
            else {
                FUN_1408317b0(lVar2);
                FUN_140881720(uVar1,lVar2);
                puVar4 = (undefined8 *)(DAT_140c61cc8 + (ulonglong)uVar3 * 8);
                if (puVar4 < (undefined8 *)(DAT_140c61cd0 - 8U)) {
                    puVar5 = puVar4;
                    for (lVar2 = ((ulonglong)
                            ((longlong)(undefined8 *)(DAT_140c61cd0 - 8U) + (-1 - (longlong)puVar4)) >>
                                                                                                     3) + 1; puVar4 = puVar4 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
                        *puVar5 = *puVar4;
                        puVar5 = puVar5 + 1;
                    }
                }
                DAT_140c61cd0 = DAT_140c61cd0 + -8;
            }
            lVar6 = lVar6 + -8;
            uVar3 = uVar3 - 1;
        } while (-1 < (int)uVar3);
    }
    return;
}



void FUN_140833270(undefined8 param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 extraout_XMM0_Qa;

    plVar3 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar1 = *plVar3;
            iVar2 = FUN_14085cf90(lVar1 + 0x440);
            if (iVar2 == param_3) {
                FUN_140863450(extraout_XMM0_Qa,param_2,lVar1 + 0x20);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140863828)
// WARNING: Removing unreachable block (ram,0x00014086382e)

void FUN_1408332f0(undefined4 param_1)

{
    longlong lVar1;

    lVar1 = DAT_140c61cc0;
    if (DAT_140c61cc0 != 0) {
        FUN_140833a10(param_1,param_1,DAT_140c61cc0);
        *(byte *)(lVar1 + 0x308) = *(byte *)(lVar1 + 0x308) & 0xfe;
        *(undefined4 *)(lVar1 + 0x31c) = 0x3f000000;
        *(undefined4 *)(lVar1 + 800) = 0x3f800000;
        *(undefined4 *)(lVar1 + 0x324) = 0x42c80000;
        *(undefined *)(lVar1 + 0x328) = 0;
        return;
    }
    return;
}



longlong FUN_140833330(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar1 = *param_1;
    plVar3 = DAT_140c61cc8;
    do {
        if (plVar3 == DAT_140c61cd0) {
            lVar2 = *(longlong *)(lVar1 + 0xb8);
            if ((lVar2 == 0) ||
                (((*(longlong *)(lVar2 + 0x10) == 0 ||
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x18) != lVar1)) &&
                  (*(int *)(param_1 + 1) != 5)))) {
                lVar2 = 0;
            }
            return lVar2;
        }
        for (lVar2 = *(longlong *)(*plVar3 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
            if (((*(longlong *)(lVar2 + 0x10) != 0) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x18) == lVar1)) ||
                ((*(int *)(param_1 + 1) == 5 &&
                  ((*(longlong *)(lVar2 + 0x18) != 0 &&
                    (*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18) == lVar1)))))) {
                if (*(int *)(lVar2 + 0x4c) == 0) {
                    return lVar2;
                }
                *(undefined *)(param_1 + 2) = 1;
                return lVar2;
            }
        }
        plVar3 = plVar3 + 1;
    } while( true );
}



void FUN_1408333c0(longlong param_1)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    longlong lVar4;
    longlong *plVar5;
    char cVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    uint uVar11;
    float *pfVar12;
    float *pfVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    float fVar16;
    undefined auStack488 [16];
    undefined auStack472 [16];
    undefined auStack456 [16];
    undefined auStack440 [32];
    undefined local_198 [384];

    lVar4 = *(longlong *)(param_1 + 0x40);
    uVar15 = 4;
    LAB_1408333f0:
    do {
        if ((int)uVar15 == 0) goto LAB_14083342a;
        uVar15 = (ulonglong)((int)uVar15 - 1);
        plVar5 = *(longlong **)(lVar4 + 0x3a0 + uVar15 * 8);
    } while ((plVar5 == (longlong *)0x0) ||
             ((**(code **)(*plVar5 + 0x60))(plVar5,param_1), *(int *)(param_1 + 0x38) == 0x2b));
    if ((*(int *)(param_1 + 0x38) != 0x2d) && (*(int *)(param_1 + 0x38) != 0x11)) {
        return;
    }
    do {
        uVar15 = (ulonglong)((int)uVar15 + 1);
        while( true ) {
            uVar11 = (uint)uVar15;
            if (3 < uVar11) {
                FUN_140861570(lVar4 + 0x2c0,param_1);
                FUN_140847fb0(lVar4,param_1);
                if ((*(int *)(param_1 + 0x38) != 0x2d) && (*(int *)(param_1 + 0x38) != 0x11)) {
                    return;
                }
                FUN_14083bb70(DAT_140c61b80,param_1);
                uVar15 = 0;
                uVar14 = uVar15;
                if (*(longlong *)(lVar4 + 0x10) != 0) {
                    uVar14 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x18);
                }
                if ((*(byte *)(uVar14 + 0x17e) & 0x40) == 0) {
                    FUN_1408605d0();
                }
                if ((*(longlong *)(uVar14 + 0x1f0) != 0) && (*(int *)(lVar4 + 0x68) != 0)) {
                    cVar6 = FUN_140846320(DAT_140c61c58,param_1);
                    if (cVar6 == '\0') {
                        FUN_140845d40(DAT_140c61c58,param_1);
                    }
                    else {
                        FUN_140845b80(param_1);
                        FUN_140845d40(DAT_140c61c58,param_1);
                        FUN_140845c50();
                    }
                }
                if (*(char *)(param_1 + 0x3f) == '\0') {
                    return;
                }
                for (uVar11 = *(uint *)(param_1 + 8); iVar7 = (int)uVar15, uVar11 != 0;
                     uVar11 = uVar11 & uVar11 - 1) {
                    uVar15 = (ulonglong)(iVar7 + 1);
                }
                if ((*(char *)(param_1 + 0x3e) != '\0') &&
                    (uVar14 = (ulonglong)*(byte *)(lVar4 + 0x1d0), uVar14 != 0)) {
                    pfVar13 = (float *)(lVar4 + 0xd4);
                    do {
                        lVar8 = FUN_140832d80(lVar4,0);
                        if (pfVar13[5] == 0.0) {
                            if (iVar7 != 0) {
                                fVar2 = pfVar13[-1];
                                fVar3 = *pfVar13;
                                lVar9 = -lVar8;
                                uVar10 = uVar15;
                                pfVar12 = (float *)(lVar8 + 0x10);
                                do {
                                    pfVar1 = pfVar12 + 0x10;
                                    fVar16 = fVar2 * *(float *)(lVar8 + 0x1a0);
                                    *(undefined (*) [16])(auStack488 + lVar9 + (longlong)pfVar1) =
                                            CONCAT412(pfVar12[-1] * fVar16,
                                                      CONCAT48(pfVar12[-2] * fVar16,
                                                               CONCAT44(pfVar12[-3] * fVar16,pfVar12[-4] * fVar16)));
                                    *(undefined (*) [16])(auStack472 + lVar9 + (longlong)pfVar1) =
                                            CONCAT412(pfVar12[3] * fVar16,
                                                      CONCAT48(pfVar12[2] * fVar16,
                                                               CONCAT44(pfVar12[1] * fVar16,*pfVar12 * fVar16)));
                                    fVar16 = fVar3 * *(float *)(lVar8 + 0x1a4);
                                    *(undefined (*) [16])(auStack456 + lVar9 + (longlong)pfVar1) =
                                            CONCAT412(pfVar12[7] * fVar16,
                                                      CONCAT48(pfVar12[6] * fVar16,
                                                               CONCAT44(pfVar12[5] * fVar16,pfVar12[4] * fVar16)));
                                    *(undefined (*) [16])(local_198 + lVar9 + -0x20 + (longlong)pfVar1) =
                                            CONCAT412(pfVar12[0xb] * fVar16,
                                                      CONCAT48(pfVar12[10] * fVar16,
                                                               CONCAT44(pfVar12[9] * fVar16,pfVar12[8] * fVar16)));
                                    uVar10 = uVar10 - 1;
                                    pfVar12 = pfVar1;
                                } while (uVar10 != 0);
                            }
                        }
                        else if (iVar7 != 0) {
                            fVar2 = pfVar13[-1];
                            fVar3 = *pfVar13;
                            lVar9 = -lVar8;
                            uVar10 = uVar15;
                            pfVar12 = (float *)(lVar8 + 0x10);
                            do {
                                pfVar1 = pfVar12 + 0x10;
                                fVar16 = fVar2 * *(float *)(lVar8 + 400);
                                *(undefined (*) [16])(auStack488 + lVar9 + (longlong)pfVar1) =
                                        CONCAT412(pfVar12[-1] * fVar16,
                                                  CONCAT48(pfVar12[-2] * fVar16,
                                                           CONCAT44(pfVar12[-3] * fVar16,pfVar12[-4] * fVar16)));
                                *(undefined (*) [16])(auStack472 + lVar9 + (longlong)pfVar1) =
                                        CONCAT412(fVar16 * pfVar12[3],
                                                  CONCAT48(fVar16 * pfVar12[2],
                                                           CONCAT44(fVar16 * pfVar12[1],fVar16 * *pfVar12)));
                                fVar16 = fVar3 * *(float *)(lVar8 + 0x194);
                                *(undefined (*) [16])(auStack456 + lVar9 + (longlong)pfVar1) =
                                        CONCAT412(pfVar12[7] * fVar16,
                                                  CONCAT48(pfVar12[6] * fVar16,
                                                           CONCAT44(pfVar12[5] * fVar16,pfVar12[4] * fVar16)));
                                *(undefined (*) [16])(local_198 + lVar9 + -0x20 + (longlong)pfVar1) =
                                        CONCAT412(pfVar12[0xb] * fVar16,
                                                  CONCAT48(pfVar12[10] * fVar16,
                                                           CONCAT44(pfVar12[9] * fVar16,pfVar12[8] * fVar16)));
                                uVar10 = uVar10 - 1;
                                pfVar12 = pfVar1;
                            } while (uVar10 != 0);
                        }
                        FUN_140862c40(*(longlong *)(pfVar13 + 3) + 0x20);
                        pfVar13 = pfVar13 + 8;
                        uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                }
                FUN_140861570(lVar4 + 0x3c0,param_1);
                if (*(char *)(param_1 + 0x58) != '\0') {
                    return;
                }
                lVar4 = *(longlong *)(lVar4 + 0x60);
                if (iVar7 != 0) {
                    pfVar13 = (float *)(lVar4 + 0x10);
                    do {
                        fVar2 = *(float *)(lVar4 + 0x180);
                        pfVar12 = pfVar13 + 0x10;
                        *(undefined (*) [16])(auStack488 + -lVar4 + (longlong)pfVar12) =
                                CONCAT412(pfVar13[-1] * fVar2,
                                          CONCAT48(pfVar13[-2] * fVar2,
                                                   CONCAT44(pfVar13[-3] * fVar2,pfVar13[-4] * fVar2)));
                        *(undefined (*) [16])(auStack472 + -lVar4 + (longlong)pfVar12) =
                                CONCAT412(fVar2 * pfVar13[3],
                                          CONCAT48(fVar2 * pfVar13[2],CONCAT44(fVar2 * pfVar13[1],fVar2 * *pfVar13)
                                          ));
                        fVar2 = *(float *)(lVar4 + 0x184);
                        *(undefined (*) [16])(auStack456 + -lVar4 + (longlong)pfVar12) =
                                CONCAT412(pfVar13[7] * fVar2,
                                          CONCAT48(pfVar13[6] * fVar2,
                                                   CONCAT44(pfVar13[5] * fVar2,pfVar13[4] * fVar2)));
                        *(undefined (*) [16])(local_198 + (-0x20 - lVar4) + (longlong)pfVar12) =
                                CONCAT412(pfVar13[0xb] * fVar2,
                                          CONCAT48(pfVar13[10] * fVar2,
                                                   CONCAT44(pfVar13[9] * fVar2,pfVar13[8] * fVar2)));
                        uVar15 = uVar15 - 1;
                        pfVar13 = pfVar12;
                    } while (uVar15 != 0);
                }
                FUN_140862c40(*(longlong *)(param_1 + 0x48) + 0x20,param_1,local_198);
                return;
            }
            plVar5 = *(longlong **)(lVar4 + 0x3a0 + uVar15 * 8);
            if (plVar5 == (longlong *)0x0) break;
            (**(code **)(*plVar5 + 0x68))(plVar5,param_1);
            iVar7 = *(int *)(param_1 + 0x38);
            if (iVar7 == 0x2b) {
                if (uVar11 != 0) goto LAB_1408333f0;
                LAB_14083342a:
                FUN_140861920(lVar4 + 0x1e0);
                iVar7 = *(int *)(param_1 + 0x38);
                if (iVar7 == 0x2b) {
                    do {
                        if (*(char *)(param_1 + 0x58) == '\0') {
                            *(undefined2 *)(param_1 + 0x10) = 0x400;
                        }
                        else {
                            *(short *)(param_1 + 0x10) = (short)(0x5dc00 / (ulonglong)DAT_140c110b4);
                        }
                        plVar5 = *(longlong **)(lVar4 + 0x10);
                        (**(code **)(*plVar5 + 0x50))(plVar5,param_1);
                        iVar7 = *(int *)(param_1 + 0x38);
                        if ((iVar7 == 0x2e) && ((*(byte *)(plVar5 + 4) & 2) == 0)) {
                            *(undefined *)(lVar4 + 0x5d) = 1;
                        }
                        if ((iVar7 != 0x2d) && (iVar7 != 0x11)) {
                            return;
                        }
                        FUN_140861600(lVar4 + 0x1e0);
                    } while (*(int *)(param_1 + 0x38) == 0x2b);
                    iVar7 = *(int *)(param_1 + 0x38);
                }
                if ((iVar7 != 0x2d) && (iVar7 != 0x11)) {
                    return;
                }
            }
            else {
                if (iVar7 == 0x2d) break;
                if (iVar7 != 0x11) {
                    return;
                }
                uVar15 = (ulonglong)(uVar11 + 1);
            }
        }
    } while( true );
}



void FUN_140833840(undefined8 param_1,float param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    if (DAT_140c61cc8 != DAT_140c61cd0) {
        fVar6 = 2.786635e+07;
        fVar7 = 0.05;
        fVar8 = -37.0;
        fVar9 = 0.3251898;
        fVar10 = 0.02080577;
        fVar11 = 0.6530434;
        plVar4 = DAT_140c61cc8;
        do {
            lVar1 = *plVar4;
            iVar2 = FUN_14085cf90(lVar1 + 0x440);
            if (iVar2 == param_3) {
                fVar5 = param_2 + *(float *)(lVar1 + 0x334);
                *(float *)(lVar1 + 0x334) = fVar5;
                fVar5 = fVar5 * fVar7;
                if (fVar8 <= fVar5) {
                    if ((DAT_140c61bfc & 1) == 0) {
                        DAT_140c61bfc = DAT_140c61bfc | 1;
                        DAT_140c61bf8 = fVar6;
                    }
                    uVar3 = (uint)(longlong)(DAT_140c61bf8 * fVar5 + 1.065353e+09);
                    fVar5 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
                    fVar5 = ((fVar5 * fVar9 + fVar10) * fVar5 + fVar11) * (float)(uVar3 & 0xff800000);
                }
                else {
                    fVar5 = 0.0;
                }
                *(float *)(lVar1 + 0x32c) = fVar5;
            }
            plVar4 = plVar4 + 1;
        } while (plVar4 != DAT_140c61cd0);
    }
    return;
}



void FUN_140833a10(undefined8 param_1,float param_2,longlong param_3)

{
    uint uVar1;
    float fVar2;

    *(float *)(param_3 + 0x314) = param_2;
    if (-37.0 <= param_2 * 0.05) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar1 = (uint)(longlong)(param_2 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        *(float *)(param_3 + 0x30c) =
                ((fVar2 * 0.3251898 + 0.02080577) * fVar2 + 0.6530434) * (float)(uVar1 & 0xff800000);
        return;
    }
    *(undefined4 *)(param_3 + 0x30c) = 0;
    return;
}



void FUN_140833b90(void)

{
    FUN_1408323f0();
    if (DAT_140c61cc0 != 0) {
        FUN_140862e30();
    }
    FUN_140858670();
    return;
}



void FUN_140833ce0(int param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = DAT_140c61cc8;
    if (DAT_140c61cc8 != DAT_140c61cd0) {
        do {
            lVar1 = *plVar3;
            iVar2 = FUN_14085cf90(lVar1 + 0x440);
            if ((iVar2 == param_1) && (*(int *)(lVar1 + 0x448) != 2)) {
                FUN_140863540(lVar1 + 0x20,lVar1 + 0x440,param_2);
            }
            plVar3 = plVar3 + 1;
        } while (plVar3 != DAT_140c61cd0);
    }
    return;
}



undefined8 FUN_140833d70(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    int *piVar6;

    uVar5 = FUN_140848030(param_2);
    if ((int)uVar5 == 0x3f) {
        return uVar5;
    }
    lVar1 = 0;
    lVar2 = DAT_140c62418;
    do {
        if (lVar2 == 0) {
            LAB_140833df3:
            if ((((int)uVar5 == 1) && (piVar6 = (int *)FUN_140832de0(param_1), piVar6 != (int *)0x0)) &&
                (iVar4 = FUN_140846f60(param_2), iVar4 == 1)) {
                *(undefined8 *)(param_2 + 8) = 0;
                if (*(longlong *)(piVar6 + 4) == 0) {
                    *(longlong *)(piVar6 + 2) = param_2;
                }
                else {
                    *(longlong *)(*(longlong *)(piVar6 + 4) + 8) = param_2;
                }
                *piVar6 = *piVar6 + 1;
                *(longlong *)(piVar6 + 4) = param_2;
                FUN_140862be0(piVar6 + 8);
                if ((*(byte *)(param_1 + 0x180) & 1) != 0) {
                    uVar5 = FUN_140832c00(piVar6);
                    *(undefined8 *)(param_2 + 0x20) = uVar5;
                }
                return 1;
            }
            FUN_140831560(param_2);
            return 2;
        }
        if (lVar2 == param_2) {
            if (lVar2 != 0) {
                lVar3 = *(longlong *)(lVar2 + 8);
                if (lVar2 != DAT_140c62418) {
                    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar2 + 8);
                    lVar3 = DAT_140c62418;
                }
                DAT_140c62418 = lVar3;
                if (lVar2 == DAT_140c62420) {
                    DAT_140c62420 = lVar1;
                }
            }
            goto LAB_140833df3;
        }
        lVar1 = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
    } while( true );
}



void FUN_140833e90(HWND *param_1)

{
    HWND pHVar1;

    *param_1 = (HWND)0x0;
    param_1[1] = (HWND)0x0;
    param_1[2] = (HWND)0x0;
    param_1[3] = (HWND)0x0;
    param_1[4] = (HWND)0x0;
    param_1[5] = (HWND)0x0;
    param_1[6] = (HWND)0x0;
    param_1[7] = (HWND)0x0;
    param_1[8] = (HWND)0x0;
    pHVar1 = GetForegroundWindow();
    param_1[1] = (HWND)0x1;
    *param_1 = pHVar1;
    param_1[2] = (HWND)0x2000;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2000;
    *(undefined4 *)(param_1 + 4) = 0x1000000;
    *(undefined2 *)(param_1 + 5) = 4;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 7) = 1;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x2000;
    return;
}



undefined4 FUN_140833f20(void)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong *plVar4;
    undefined4 local_res8 [2];

    local_res8[0] = 0;
    if (((DAT_140c61f68 != 0) &&
         (DAT_140c61f68 = DAT_140c61f68 + -1, DAT_140c61f68 == (DAT_140c61f68 / 0x14) * 0x14)) &&
        (plVar4 = (longlong *)FUN_14085ca20(&DAT_140c61c70), plVar4 != (longlong *)0x0)) {
        iVar3 = (**(code **)(*plVar4 + 8))(plVar4);
        if ((iVar3 == 1) && (iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4), iVar3 == 1)) {
            (**(code **)(*DAT_140c61c60 + 0x18))();
            plVar2 = DAT_140c61c60;
            uVar1 = DAT_140c10f28;
            if (DAT_140c61c60 != (longlong *)0x0) {
                (**(code **)*DAT_140c61c60)(DAT_140c61c60,0);
                FUN_140881720(uVar1,plVar2);
            }
            DAT_140c61f68 = 0;
            DAT_140c61c60 = plVar4;
        }
        else {
            (**(code **)(*plVar4 + 0x18))(plVar4);
            uVar1 = DAT_140c10f28;
            (**(code **)*plVar4)(plVar4,0);
            FUN_140881720(uVar1,plVar4);
        }
    }
    iVar3 = (**(code **)(*DAT_140c61c60 + 0x38))(DAT_140c61c60,local_res8);
    if ((iVar3 != 1) || (DAT_140c61f49 != '\0')) {
        DAT_140c61f49 = '\0';
        (**(code **)(*DAT_140c61c60 + 0x18))();
        plVar4 = DAT_140c61c60;
        uVar1 = DAT_140c10f28;
        if (DAT_140c61c60 != (longlong *)0x0) {
            (**(code **)*DAT_140c61c60)(DAT_140c61c60,0);
            FUN_140881720(uVar1,plVar4);
        }
        DAT_140c61c60 = (longlong *)FUN_14085cb20(&DAT_140c61c70);
        (**(code **)(*DAT_140c61c60 + 8))(DAT_140c61c60);
        (**(code **)(*DAT_140c61c60 + 0x10))();
        DAT_140c61f68 = 200;
    }
    return local_res8[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1408340b0(void)

{
    uint uVar1;
    char cVar2;
    HRESULT HVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 uVar6;
    int iVar7;

    iVar7 = 0;
    DAT_140c61c54 = 0;
    cVar2 = FUN_140881950();
    if ((cVar2 == '\0') || (DAT_140c62930 == 0)) {
        return 2;
    }
    uVar6 = 48000;
    if (DAT_140c61c9c == 1) {
        uVar6 = 24000;
    }
    FUN_1408640c0(uVar6);
    uVar6 = FUN_1408313a0();
    if ((int)uVar6 == 1) {
        HVar3 = CoInitializeEx((LPVOID)0x0,0);
        DAT_140c61f48 = -1 < HVar3;
        FUN_140834440();
        if (((DAT_140c61c60 == (longlong *)0x0) &&
             (DAT_140c61c60 = (longlong *)FUN_14085ca20(&DAT_140c61c70), DAT_140c61c60 == (longlong *)0x0
             )) && (DAT_140c61c60 = (longlong *)FUN_14085cb20(&DAT_140c61c70),
                DAT_140c61c60 == (longlong *)0x0)) {
            return 2;
        }
        FUN_14084b080();
        uVar6 = FUN_14001d310();
        if (((int)uVar6 == 1) && (uVar6 = FUN_140858850(), (int)uVar6 == 1)) {
            FUN_140864a80();
            uVar6 = FUN_1408322a0();
            if ((int)uVar6 == 1) {
                uVar4 = *(uint *)(DAT_140c61c60 + 2);
                if (uVar4 == 0x63f) {
                    uVar4 = 0x3f;
                }
                uVar6 = FUN_140863e80(DAT_140c61cc0,uVar4);
                uVar1 = uVar4;
                if ((int)uVar6 == 1) {
                    for (; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
                        iVar7 = iVar7 + 1;
                    }
                    lVar5 = FUN_140881960(DAT_140c10f28,iVar7 << 0xc,0x10);
                    if (lVar5 == 0) {
                        uVar6 = 0x34;
                    }
                    else {
                        FUN_1407e4830(lVar5,0,iVar7 << 0xc);
                        _DAT_140c61cec = 0x2b;
                        _DAT_140c61cf0 = 0x400;
                        DAT_140c61ce0 = lVar5;
                        DAT_140c61ce8 = uVar4;
                        uVar6 = (**(code **)(*DAT_140c61c60 + 8))();
                    }
                }
            }
        }
    }
    return uVar6;
}



void FUN_140834250(HWND param_1,UINT param_2,WPARAM param_3,longlong param_4)

{
    if ((((param_2 == 0x219) && (param_3 == 0x8000)) && (DAT_140c61f48 != '\0')) &&
        (((*(longlong *)(param_4 + 0xc) == 0x11d093ef6994ad04 &&
           (*(longlong *)(param_4 + 0x14) == -0x69cedd365fff335d)) ||
          ((*(longlong *)(param_4 + 0xc) == 0x11d08f5665e8773e &&
            (*(longlong *)(param_4 + 0x14) == -0x69cedd365fff465d)))))) {
        DAT_140c61f49 = 1;
        FUN_140856280(DAT_140c61b68 + 0xd0);
    }
    CallWindowProcW(DAT_140c61f50,param_1,param_2,param_3,param_4);
    return;
}



undefined8 FUN_140834310(undefined8 param_1,int param_2,int param_3)

{
    if ((param_2 == 0) && (param_3 == 1)) {
        DAT_140c61f49 = 1;
        FUN_140856280(DAT_140c61b68 + 0xd0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140834340(void)

{
    char cVar1;

    FUN_1408588f0();
    FUN_140833000();
    _DAT_140c61cf2 = 0;
    FUN_140832810();
    if (_DAT_140c61cf2 == 0) {
        (**(code **)(*DAT_140c61c60 + 0x48))(DAT_140c61c60,0x400);
    }
    else {
        (**(code **)(*DAT_140c61c60 + 0x40))(DAT_140c61c60,&DAT_140c61ce0);
        FUN_140864030(DAT_140c61cc0);
    }
    cVar1 = FUN_140833080();
    if (cVar1 != '\0') {
        FUN_1408465c0(DAT_140c61c58);
    }
    FUN_140833180();
    return;
}



void FUN_140834440(void)

{
    HRESULT HVar1;
    undefined8 *puVar2;
    longlong *local_res8;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_38 = 0x467ce52fbcde0395;
    local_30 = 0x2e69919257c43d8e;
    local_48 = 0x4f359614a95664d2;
    local_40 = 0xe61736b68dde46a7;
    HVar1 = CoCreateInstance((IID *)&local_38,(LPUNKNOWN)0x0,0x17,(IID *)&local_48,&local_res8);
    if ((HVar1 == 0) && (local_res8 != (longlong *)0x0)) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f28,0x18);
        if (puVar2 == (undefined8 *)0x0) {
            DAT_140c61f60 = (undefined8 *)0x0;
        }
        else {
            *(undefined4 *)(puVar2 + 1) = 1;
            puVar2[2] = local_res8;
            *puVar2 = &PTR_LAB_1409a2e70;
            (**(code **)(*local_res8 + 8))();
            (**(code **)(*(longlong *)puVar2[2] + 0x30))((longlong *)puVar2[2],puVar2);
            DAT_140c61f60 = puVar2;
        }
        (**(code **)(*local_res8 + 0x10))();
        return;
    }
    local_20 = 0;
    local_28 = 0x500000020;
    local_18 = 0;
    local_10 = 0;
    DAT_140c61f58 = RegisterDeviceNotificationW(DAT_140c61c70,&local_28,4);
    DAT_140c61f50 = SetWindowLongPtrW(DAT_140c61c70,-4,(LONG_PTR)FUN_140834250);
    return;
}



undefined4 FUN_1408345a0(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar3 = DAT_140c10f28;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        *param_1 = &PTR_LAB_1409a2e70;
        (**(code **)(*(longlong *)param_1[2] + 0x38))((longlong *)param_1[2],param_1);
        (**(code **)(*(longlong *)param_1[2] + 0x10))();
        FUN_140881720(uVar3,param_1);
    }
    return uVar2;
}



void FUN_140834600(void)

{
    // WARNING: Could not recover jumptable at 0x00014083460a. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*DAT_140c61c60 + 0x10))();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140834610(void)

{
    undefined4 uVar1;
    longlong *plVar2;
    code *pcVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    FUN_140859010();
    if (DAT_140c61cc8 != 0) {
        DAT_140c61cd0 = DAT_140c61cc8;
        FUN_140881720(DAT_140c10f28);
        DAT_140c61cc8 = 0;
        DAT_140c61cd0 = 0;
        _DAT_140c61cd8 = 0;
    }
    if (DAT_140c61ce0 != 0) {
        FUN_140881720(DAT_140c10f28);
        DAT_140c61ce0 = 0;
    }
    FUN_1408327b0();
    puVar6 = (undefined8 *)&DAT_140c61d00;
    lVar5 = 0x18;
    do {
        if (*(uint *)puVar6 != 0) {
            uVar7 = (ulonglong)*(uint *)puVar6;
            puVar4 = puVar6;
            do {
                puVar4 = puVar4 + 1;
                FUN_140881720(DAT_140c10f28,*puVar4);
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        *(uint *)puVar6 = 0;
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_1408300c0();
    if (DAT_140c61f60 == (longlong *)0x0) {
        if (DAT_140c61f58 != (HDEVNOTIFY)0x0) {
            UnregisterDeviceNotification(DAT_140c61f58);
        }
        pcVar3 = (code *)GetWindowLongPtrW(DAT_140c61c70,-4);
        if (pcVar3 == FUN_140834250) {
            SetWindowLongPtrW(DAT_140c61c70,-4,DAT_140c61f50);
        }
    }
    else {
        (**(code **)(*DAT_140c61f60 + 0x10))();
        DAT_140c61f60 = (longlong *)0x0;
    }
    if (DAT_140c61c60 != (longlong *)0x0) {
        (**(code **)(*DAT_140c61c60 + 0x18))();
        plVar2 = DAT_140c61c60;
        uVar1 = DAT_140c10f28;
        if (DAT_140c61c60 != (longlong *)0x0) {
            (**(code **)*DAT_140c61c60)(DAT_140c61c60,0);
            FUN_140881720(uVar1,plVar2);
        }
        DAT_140c61c60 = (longlong *)0x0;
    }
    if (DAT_140c61c58 != 0) {
        FUN_140845e80();
        DAT_140c61c58 = 0;
    }
    if (DAT_140c61f48 != '\0') {
        CoUninitialize();
        DAT_140c61f48 = '\0';
    }
    FUN_140831400();
    return;
}



undefined4 * FUN_1408347c0(undefined4 *param_1)

{
    *(undefined *)((longlong)param_1 + 0x12) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined2 *)(param_1 + 4) = 100;
    return param_1;
}



void FUN_1408347e0(longlong param_1)

{
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_140881720(DAT_140c10f20);
        return;
    }
    return;
}



void FUN_140834800(undefined8 param_1,longlong param_2,longlong *param_3)

{
    ushort uVar1;
    longlong *plVar2;
    char cVar3;
    ulonglong uVar4;

    uVar4 = param_3[1] - *param_3 >> 3 & 0xffffffff;
    if ((*(uint *)(param_3 + 2) <= uVar4) && (cVar3 = FUN_140892ef0(param_3,4), cVar3 == '\0')) {
        return;
    }
    if (uVar4 < *(uint *)(param_3 + 2)) {
        plVar2 = (longlong *)param_3[1];
        param_3[1] = (longlong)(plVar2 + 1);
        if (plVar2 != (longlong *)0x0) {
            *plVar2 = param_2;
            uVar1 = *(ushort *)(param_2 + 8);
            if (uVar1 == 100) {
                *(int *)(param_3 + 3) = *(int *)(param_3 + 3) + 1;
            }
            else if (uVar1 == 0) {
                *(int *)((longlong)param_3 + 0x1c) = *(int *)((longlong)param_3 + 0x1c) + 1;
            }
            *(uint *)(param_3 + 4) = *(int *)(param_3 + 4) + (uint)uVar1;
        }
    }
    return;
}



undefined8 FUN_140834890(int *param_1,int **param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    char cVar4;
    int *piVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    if (*param_1 == 1) {
        if (*(ushort *)(*(longlong *)(param_1 + 2) + 6) != 0) {
            lVar6 = 0;
            uVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 2) + 6);
            do {
                piVar3 = param_2[1];
                iVar1 = *(int *)(*(longlong *)(param_1 + 2) + 4 + lVar6);
                iVar2 = *(int *)(*(longlong *)(param_1 + 2) + lVar6);
                for (piVar5 = *param_2; (piVar5 != piVar3 && (*piVar5 != iVar2)); piVar5 = piVar5 + 2) {
                }
                if ((piVar5 == piVar3) || (piVar5 + 1 == (int *)0x0)) {
                    uVar7 = (longlong)piVar3 - (longlong)*param_2 >> 3 & 0xffffffff;
                    if (((uVar7 < *(uint *)(param_2 + 2)) || (cVar4 = FUN_140892ef0(param_2,8), cVar4 != '\0')
                        ) && (uVar7 < *(uint *)(param_2 + 2))) {
                        piVar3 = param_2[1];
                        param_2[1] = piVar3 + 2;
                        if (piVar3 != (int *)0x0) {
                            *piVar3 = iVar2;
                            piVar3[1] = iVar1;
                        }
                    }
                }
                else {
                    piVar5[1] = iVar1;
                }
                lVar6 = lVar6 + 0xc;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        return 1;
    }
    return 0;
}



undefined4
FUN_140834990(int *param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
    bool bVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined local_18 [16];

    if (param_4 == *param_1) {
        if (param_4 == 0) {
            lVar4 = *(longlong *)(param_1 + 2);
        }
        else if (*(char *)((longlong)param_1 + 0x12) == '\0') {
            lVar4 = FUN_140834ca0(param_1,*(undefined8 *)(param_1 + 2));
        }
        else {
            lVar4 = FUN_140834a70(param_1,param_3,param_4,param_2,param_5,local_18);
        }
        bVar1 = false;
        uVar3 = 0;
        if (lVar4 != 0) {
            if ((*(ushort *)(param_1 + 4) < 100) || (*(ushort *)(lVar4 + 10) < 100)) {
                iVar2 = rand();
                bVar1 = false;
                if ((ushort)(*(short *)(lVar4 + 10) * *(short *)(param_1 + 4)) <=
                    (ushort)(longlong)((double)iVar2 * 3.051850947599719e-05 * 10000.0)) {
                    bVar1 = true;
                }
            }
            uVar3 = *(undefined4 *)(lVar4 + 4);
        }
        if (bVar1) {
            uVar3 = 0;
        }
        return uVar3;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x000140834bb1)
// WARNING: Removing unreachable block (ram,0x000140834bba)
// WARNING: Removing unreachable block (ram,0x000140834bcd)
// WARNING: Removing unreachable block (ram,0x000140834bc2)
// WARNING: Removing unreachable block (ram,0x000140834bcb)
// WARNING: Removing unreachable block (ram,0x000140834b50)
// WARNING: Removing unreachable block (ram,0x000140834b6e)
// WARNING: Removing unreachable block (ram,0x000140834b5d)
// WARNING: Removing unreachable block (ram,0x000140834b69)
// WARNING: Removing unreachable block (ram,0x000140834af2)
// WARNING: Removing unreachable block (ram,0x000140834afc)
// WARNING: Removing unreachable block (ram,0x000140834b12)
// WARNING: Removing unreachable block (ram,0x000140834bd8)
// WARNING: Removing unreachable block (ram,0x000140834be7)
// WARNING: Removing unreachable block (ram,0x000140834b04)
// WARNING: Removing unreachable block (ram,0x000140834b0d)
// WARNING: Removing unreachable block (ram,0x000140834acd)
// WARNING: Removing unreachable block (ram,0x000140834b2f)
// WARNING: Removing unreachable block (ram,0x000140834ac7)
// WARNING: Removing unreachable block (ram,0x000140834b22)
// WARNING: Removing unreachable block (ram,0x000140834b90)
// WARNING: Removing unreachable block (ram,0x000140834bef)

undefined8 FUN_140834a70(void)

{
    undefined *in_stack_00000030;

    FUN_140834da0();
    *in_stack_00000030 = 4;
    return 0;
}



undefined8 FUN_140834c10(undefined4 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 2) = 0;
    }
    if (param_3 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,param_3);
        *(longlong *)(param_1 + 2) = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        FUN_1407db590(lVar1,param_2,param_3);
    }
    *param_1 = param_4;
    return 1;
}



int * FUN_140834ca0(longlong param_1,longlong param_2,uint *param_3,int param_4)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int iVar5;

    if (*(longlong *)(param_1 + 8) != 0) {
        piVar3 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)*(ushort *)(param_2 + 4) * 0xc);
        iVar4 = 0;
        iVar5 = *(ushort *)(param_2 + 6) - 1;
        do {
            iVar1 = iVar4 + (iVar5 - iVar4) / 2;
            if (*param_3 < (uint)piVar3[(longlong)iVar1 * 3]) {
                iVar5 = iVar1 + -1;
            }
            else {
                if (*param_3 <= (uint)piVar3[(longlong)iVar1 * 3]) {
                    piVar2 = piVar3 + (longlong)iVar1 * 3;
                    if (piVar2 != (int *)0x0) {
                        if (param_4 == 1) {
                            return piVar2;
                        }
                        piVar2 = (int *)FUN_140834ca0(param_1,piVar2,param_3 + 1,param_4 + -1);
                        if (piVar2 != (int *)0x0) {
                            return piVar2;
                        }
                    }
                    break;
                }
                iVar4 = iVar1 + 1;
            }
        } while (iVar4 <= iVar5);
        if ((*piVar3 == 0) && (*param_3 != 0)) {
            if (param_4 == 1) {
                return piVar3;
            }
            piVar3 = (int *)FUN_140834ca0(param_1,piVar3,param_3 + 1,param_4 + -1);
            if (piVar3 != (int *)0x0) {
                return piVar3;
            }
        }
    }
    return (int *)0x0;
}



void FUN_140834da0(longlong param_1,int *param_2,uint *param_3,int param_4,undefined8 param_5)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    lVar1 = *(longlong *)(param_1 + 8);
    do {
        if (lVar1 == 0) {
            return;
        }
        iVar3 = 0;
        iVar4 = *(ushort *)((longlong)param_2 + 6) - 1;
        param_2 = (int *)(lVar1 + (ulonglong)*(ushort *)(param_2 + 1) * 0xc);
        do {
            iVar2 = (iVar4 - iVar3) / 2 + iVar3;
            if (*param_3 < (uint)param_2[(longlong)iVar2 * 3]) {
                iVar4 = iVar2 + -1;
            }
            else {
                if (*param_3 <= (uint)param_2[(longlong)iVar2 * 3]) {
                    if (param_2 + (longlong)iVar2 * 3 != (int *)0x0) {
                        if (param_4 == 1) {
                            FUN_140834800();
                        }
                        else {
                            FUN_140834da0(param_1);
                        }
                    }
                    break;
                }
                iVar3 = iVar2 + 1;
            }
        } while (iVar3 <= iVar4);
        if (*param_2 != 0) {
            return;
        }
        if (*param_3 == 0) {
            return;
        }
        if (param_4 == 1) {
            FUN_140834800(param_1,param_2,param_5);
            return;
        }
        lVar1 = *(longlong *)(param_1 + 8);
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
    } while( true );
}


