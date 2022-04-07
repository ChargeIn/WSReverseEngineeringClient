//
// Created by flop on 05.04.22.
//


int FUN_14080b190(void)

{
    undefined local_18 [8];
    int local_10;

    local_10 = FUN_14080b500(local_18);
    if (local_10 == -0xe) {
        local_10 = 0;
    }
    if (local_10 == 0) {
        DAT_140c60970 = DAT_140c60970 + -1;
    }
    return local_10;
}



void FUN_14080b1e0(void)

{
    if (DAT_140c60990 == '\0') {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
        DAT_140c60990 = '\x01';
    }
    return;
}



void FUN_14080b210(longlong param_1,int param_2)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(&DAT_140c60950 + (longlong)param_2 * 8) =
            *(undefined4 *)(param_1 + *(int *)(param_1 + 0x3c) + 0x58);
    *(undefined4 *)(&DAT_140c60954 + (longlong)param_2 * 8) = *(undefined4 *)(param_1 + iVar1 + 8);
    return;
}



longlong FUN_14080b290(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    undefined4 uVar4;

    lVar1 = param_1 + 4 + (longlong)*(int *)(param_1 + 0x3c);
    lVar2 = param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x3c);
    if (*(int *)(lVar2 + 0x40) == 0) {
        uVar3 = *(uint *)(&DAT_140c60954 + (longlong)param_2 * 8);
        if (*(uint *)(lVar1 + 4) != uVar3) {
            *(undefined4 *)(&DAT_140c60950 + (longlong)param_2 * 8) = *(undefined4 *)(lVar2 + 0x40);
            uVar4 = *(undefined4 *)(lVar1 + 4);
            *(undefined4 *)(&DAT_140c60954 + (longlong)param_2 * 8) = uVar4;
            return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
        }
    }
    else {
        uVar3 = *(uint *)(&DAT_140c60950 + (longlong)param_2 * 8);
        if (*(uint *)(lVar2 + 0x40) != uVar3) {
            *(undefined4 *)(&DAT_140c60950 + (longlong)param_2 * 8) = *(undefined4 *)(lVar2 + 0x40);
            uVar4 = *(undefined4 *)(lVar1 + 4);
            *(undefined4 *)(&DAT_140c60954 + (longlong)param_2 * 8) = uVar4;
            return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
        }
    }
    return (ulonglong)(uVar3 >> 8) << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080b390(HMODULE param_1,int param_2)

{
    int iVar1;
    code *pcVar2;

    if (param_2 == 0) {
        DAT_140c60928 = GetProcAddress(param_1,"nvapi_QueryInterface");
        if (DAT_140c60928 == (FARPROC)0x0) {
            return -1;
        }
        pcVar2 = (code *)(*DAT_140c60928)(0x150e828);
        if (pcVar2 == (code *)0x0) {
            DAT_140c60928 = (FARPROC)0x0;
            return -1;
        }
        iVar1 = (*pcVar2)();
        if (iVar1 != 0) {
            DAT_140c60928 = (FARPROC)0x0;
            return iVar1;
        }
        DAT_140c60938 = (*DAT_140c60928)(0x33c7358c);
        DAT_140c60940 = (*DAT_140c60928)(0x593e8644);
        if (((DAT_140c60938 != 0) && (DAT_140c60940 == 0)) ||
            ((DAT_140c60938 != 0 && (DAT_140c60940 == 0)))) {
            DAT_140c60938 = 0;
            DAT_140c60940 = 0;
        }
    }
    else if ((param_2 == 1) &&
             (_DAT_140c60930 = GetProcAddress(param_1,"nvapi_pepQueryInterface"),
                     _DAT_140c60930 == (FARPROC)0x0)) {
        FreeLibrary(DAT_140c60920);
        return -1;
    }
    *(int *)(&DAT_140c60980 + (longlong)param_2 * 4) =
            *(int *)(&DAT_140c60980 + (longlong)param_2 * 4) + 1;
    return 0;
}



int FUN_14080b500(HMODULE *param_1)

{
    char cVar1;
    int iVar2;
    HMODULE pHVar3;
    uint local_18;

    FUN_14080b1e0();
    local_18 = 0;
    while (DAT_140c60948 != '\0') {
        Sleep(100);
        local_18 = local_18 + 1;
        if (9 < local_18) {
            return -1;
        }
    }
    DAT_140c60970 = DAT_140c60970 + 1;
    pHVar3 = GetModuleHandleA("nvapi64.dll");
    *param_1 = pHVar3;
    if (*param_1 == (HMODULE)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
        pHVar3 = GetModuleHandleA("nvapi64.dll");
        *param_1 = pHVar3;
        if (*param_1 == (HMODULE)0x0) {
            pHVar3 = (HMODULE)FUN_1408243f0("nvapi64.dll",0);
            *param_1 = pHVar3;
            if (*param_1 == (HMODULE)0x0) {
                DAT_140c60970 = DAT_140c60970 + -1;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
                return -2;
            }
            iVar2 = FUN_14080b390(*param_1,0);
            if (iVar2 != 0) {
                DAT_140c60970 = DAT_140c60970 + -1;
                FreeLibrary(*param_1);
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
                return iVar2;
            }
            DAT_140c60918 = *param_1;
            FUN_14080b210(*param_1,0);
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
            return -0xe;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
    }
    cVar1 = FUN_14080b290(*param_1,0);
    if (cVar1 == '\0') {
        return 0;
    }
    iVar2 = FUN_14080b390(*param_1,0);
    if (iVar2 != 0) {
        DAT_140c60970 = DAT_140c60970 + -1;
        FreeLibrary(*param_1);
        return iVar2;
    }
    DAT_140c60918 = *param_1;
    FUN_14080b210(*param_1,0);
    return -0xe;
}



int FUN_14080b720(HMODULE *param_1)

{
    int iVar1;
    HMODULE pHVar2;

    FUN_14080b1e0();
    while (DAT_140c60949 != '\0') {
        Sleep(100);
    }
    DAT_140c60974 = DAT_140c60974 + 1;
    pHVar2 = GetModuleHandleA("nvpowerapi.dll");
    *param_1 = pHVar2;
    if (*param_1 == (HMODULE)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
        pHVar2 = GetModuleHandleA("nvpowerapi.dll");
        *param_1 = pHVar2;
        if (*param_1 == (HMODULE)0x0) {
            pHVar2 = (HMODULE)FUN_1408243f0("nvpowerapi.dll",0);
            *param_1 = pHVar2;
            if (*param_1 == (HMODULE)0x0) {
                DAT_140c60974 = DAT_140c60974 + -1;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
                return -2;
            }
            iVar1 = FUN_14080b390(*param_1,1);
            if (iVar1 != 0) {
                DAT_140c60974 = DAT_140c60974 + -1;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
                return iVar1;
            }
            DAT_140c60920 = *param_1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
            return -0xe;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
    }
    return 0;
}



undefined8 FUN_14080b880(void)

{
    int iVar1;
    undefined8 uVar2;
    code *pcVar3;

    FUN_14080b1e0();
    DAT_140c60948 = 1;
    if ((DAT_140c60918 == (HMODULE)0x0) || (DAT_140c60928 == (code *)0x0)) {
        uVar2 = 0xfffffffc;
    }
    else if (DAT_140c60970 == 0) {
        pcVar3 = (code *)(*DAT_140c60928)(0xd22bdd7e);
        if (pcVar3 == (code *)0x0) {
            uVar2 = 0xfffffffd;
        }
        else {
            iVar1 = (*pcVar3)();
            if (iVar1 == 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
                DAT_140c60928 = (code *)0x0;
                FreeLibrary(DAT_140c60918);
                DAT_140c60918 = (HMODULE)0x0;
                DAT_140c60938 = 0;
                DAT_140c60940 = 0;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
                uVar2 = 0;
            }
            else {
                uVar2 = 0xffffffff;
            }
        }
    }
    else {
        uVar2 = 0xffffffff;
    }
    DAT_140c60948 = 0;
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14080b980(void)

{
    undefined8 uVar1;

    FUN_14080b1e0();
    DAT_140c60949 = 1;
    if ((DAT_140c60920 == (HMODULE)0x0) || (_DAT_140c60930 == 0)) {
        uVar1 = 0xfffffffc;
    }
    else if (DAT_140c60974 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
        _DAT_140c60930 = 0;
        FreeLibrary(DAT_140c60920);
        DAT_140c60920 = (HMODULE)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c608f0);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    DAT_140c60949 = 0;
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080ba30(undefined4 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60998 = (code *)0x0;
        }
        if ((DAT_140c60998 != (code *)0x0) &&
            (_DAT_140c609a0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60998 = (code *)0x0;
        }
        if (((DAT_140c60998 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60998 = (code *)(*DAT_140c60928)(0x6c2d048c);
            _DAT_140c609a0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60998;
        if (DAT_140c60998 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x6c2d048c,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x6c2d048c,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080bbc0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c609a8 = (code *)0x0;
        }
        if ((DAT_140c609a8 != (code *)0x0) &&
            (_DAT_140c609b0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c609a8 = (code *)0x0;
        }
        if (((DAT_140c609a8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c609a8 = (code *)(*DAT_140c60928)(0x1053fa5);
            _DAT_140c609b0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c609a8;
        if (DAT_140c609a8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x1053fa5);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x1053fa5,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080c220(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c609e8 = (code *)0x0;
        }
        if ((DAT_140c609e8 != (code *)0x0) &&
            (_DAT_140c609f0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c609e8 = (code *)0x0;
        }
        if (((DAT_140c609e8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c609e8 = (code *)(*DAT_140c60928)(0xf951a4d1);
            _DAT_140c609f0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c609e8;
        if (DAT_140c609e8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xf951a4d1,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xf951a4d1,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080c3b0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c609f8 = (code *)0x0;
        }
        if ((DAT_140c609f8 != (code *)0x0) &&
            (_DAT_140c60a00 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c609f8 = (code *)0x0;
        }
        if (((DAT_140c609f8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c609f8 = (code *)(*DAT_140c60928)(0x2926aaad);
            _DAT_140c60a00 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c609f8;
        if (DAT_140c609f8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x2926aaad,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x2926aaad,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080c540(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60a08 = (code *)0x0;
        }
        if ((DAT_140c60a08 != (code *)0x0) &&
            (_DAT_140c60a10 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60a08 = (code *)0x0;
        }
        if (((DAT_140c60a08 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60a08 = (code *)(*DAT_140c60928)(0x7f9b368);
            _DAT_140c60a10 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60a08;
        if (DAT_140c60a08 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x7f9b368,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x7f9b368,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080cd40(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60a58 = (code *)0x0;
        }
        if ((DAT_140c60a58 != (code *)0x0) &&
            (_DAT_140c60a60 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60a58 = (code *)0x0;
        }
        if (((DAT_140c60a58 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60a58 = (code *)(*DAT_140c60928)(0xe5ac921f);
            _DAT_140c60a60 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60a58;
        if (DAT_140c60a58 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xe5ac921f,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xe5ac921f,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080ced0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60a68 = (code *)0x0;
        }
        if ((DAT_140c60a68 != (code *)0x0) &&
            (_DAT_140c60a70 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60a68 = (code *)0x0;
        }
        if (((DAT_140c60a68 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60a68 = (code *)(*DAT_140c60928)(0xd9930b07);
            _DAT_140c60a70 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60a68;
        if (DAT_140c60a68 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xd9930b07,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xd9930b07,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080d060(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60a78 = (code *)0x0;
        }
        if ((DAT_140c60a78 != (code *)0x0) &&
            (_DAT_140c60a80 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60a78 = (code *)0x0;
        }
        if (((DAT_140c60a78 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60a78 = (code *)(*DAT_140c60928)(0x48b3ea59);
            _DAT_140c60a80 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60a78;
        if (DAT_140c60a78 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x48b3ea59,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x48b3ea59,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080d390(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60a98 = (code *)0x0;
        }
        if ((DAT_140c60a98 != (code *)0x0) &&
            (_DAT_140c60aa0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60a98 = (code *)0x0;
        }
        if (((DAT_140c60a98 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60a98 = (code *)(*DAT_140c60928)(0x5018ed61);
            _DAT_140c60aa0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60a98;
        if (DAT_140c60a98 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x5018ed61,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x5018ed61,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080d520(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60aa8 = (code *)0x0;
        }
        if ((DAT_140c60aa8 != (code *)0x0) &&
            (_DAT_140c60ab0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60aa8 = (code *)0x0;
        }
        if (((DAT_140c60aa8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60aa8 = (code *)(*DAT_140c60928)(0xee1370cf);
            _DAT_140c60ab0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60aa8;
        if (DAT_140c60aa8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xee1370cf,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xee1370cf,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080d6b0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60ab8 = (code *)0x0;
        }
        if ((DAT_140c60ab8 != (code *)0x0) &&
            (_DAT_140c60ac0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60ab8 = (code *)0x0;
        }
        if (((DAT_140c60ab8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60ab8 = (code *)(*DAT_140c60928)(0xadd604d1);
            _DAT_140c60ac0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60ab8;
        if (DAT_140c60ab8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xadd604d1,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xadd604d1,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080d9e0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60ad8 = (code *)0x0;
        }
        if ((DAT_140c60ad8 != (code *)0x0) &&
            (_DAT_140c60ae0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60ad8 = (code *)0x0;
        }
        if (((DAT_140c60ad8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60ad8 = (code *)(*DAT_140c60928)(0xc7026a87);
            _DAT_140c60ae0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60ad8;
        if (DAT_140c60ad8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xc7026a87,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xc7026a87,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080db70(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60ae8 = (code *)0x0;
        }
        if ((DAT_140c60ae8 != (code *)0x0) &&
            (_DAT_140c60af0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60ae8 = (code *)0x0;
        }
        if (((DAT_140c60ae8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60ae8 = (code *)(*DAT_140c60928)(0x7d554f8e);
            _DAT_140c60af0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60ae8;
        if (DAT_140c60ae8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x7d554f8e,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x7d554f8e,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080dd00(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60af8 = (code *)0x0;
        }
        if ((DAT_140c60af8 != (code *)0x0) &&
            (_DAT_140c60b00 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60af8 = (code *)0x0;
        }
        if (((DAT_140c60af8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60af8 = (code *)(*DAT_140c60928)(0x1730bfc9);
            _DAT_140c60b00 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60af8;
        if (DAT_140c60af8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x1730bfc9,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x1730bfc9,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080de90(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60b08 = (code *)0x0;
        }
        if ((DAT_140c60b08 != (code *)0x0) &&
            (_DAT_140c60b10 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60b08 = (code *)0x0;
        }
        if (((DAT_140c60b08 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60b08 = (code *)(*DAT_140c60928)(0x680de09);
            _DAT_140c60b10 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60b08;
        if (DAT_140c60b08 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x680de09,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x680de09,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080e360(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60b38 = (code *)0x0;
        }
        if ((DAT_140c60b38 != (code *)0x0) &&
            (_DAT_140c60b40 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60b38 = (code *)0x0;
        }
        if (((DAT_140c60b38 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60b38 = (code *)(*DAT_140c60928)(0xcf8caf39);
            _DAT_140c60b40 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60b38;
        if (DAT_140c60b38 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xcf8caf39,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xcf8caf39,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080e4f0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60b48 = (code *)0x0;
        }
        if ((DAT_140c60b48 != (code *)0x0) &&
            (_DAT_140c60b50 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60b48 = (code *)0x0;
        }
        if (((DAT_140c60b48 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60b48 = (code *)(*DAT_140c60928)(0x96043cc7);
            _DAT_140c60b50 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60b48;
        if (DAT_140c60b48 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x96043cc7,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x96043cc7,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080e680(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60b58 = (code *)0x0;
        }
        if ((DAT_140c60b58 != (code *)0x0) &&
            (_DAT_140c60b60 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60b58 = (code *)0x0;
        }
        if (((DAT_140c60b58 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60b58 = (code *)(*DAT_140c60928)(0xbaaabfcc);
            _DAT_140c60b60 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60b58;
        if (DAT_140c60b58 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xbaaabfcc,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xbaaabfcc,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080e810(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60b68 = (code *)0x0;
        }
        if ((DAT_140c60b68 != (code *)0x0) &&
            (_DAT_140c60b70 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60b68 = (code *)0x0;
        }
        if (((DAT_140c60b68 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60b68 = (code *)(*DAT_140c60928)(0xe3e89b6f);
            _DAT_140c60b70 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60b68;
        if (DAT_140c60b68 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xe3e89b6f,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xe3e89b6f,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080ee70(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60ba8 = (code *)0x0;
        }
        if ((DAT_140c60ba8 != (code *)0x0) &&
            (_DAT_140c60bb0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60ba8 = (code *)0x0;
        }
        if (((DAT_140c60ba8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60ba8 = (code *)(*DAT_140c60928)(0xceee8e9f);
            _DAT_140c60bb0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60ba8;
        if (DAT_140c60ba8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xceee8e9f,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xceee8e9f,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080f1b0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60bc8 = (code *)0x0;
        }
        if ((DAT_140c60bc8 != (code *)0x0) &&
            (_DAT_140c60bd0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60bc8 = (code *)0x0;
        }
        if (((DAT_140c60bc8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60bc8 = (code *)(*DAT_140c60928)(0xc33baeb1);
            _DAT_140c60bd0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60bc8;
        if (DAT_140c60bc8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xc33baeb1,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xc33baeb1,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080f340(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60bd8 = (code *)0x0;
        }
        if ((DAT_140c60bd8 != (code *)0x0) &&
            (_DAT_140c60be0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60bd8 = (code *)0x0;
        }
        if (((DAT_140c60bd8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60bd8 = (code *)(*DAT_140c60928)(0x1bb18724);
            _DAT_140c60be0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60bd8;
        if (DAT_140c60bd8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x1bb18724,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x1bb18724,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080f4d0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60be8 = (code *)0x0;
        }
        if ((DAT_140c60be8 != (code *)0x0) &&
            (_DAT_140c60bf0 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60be8 = (code *)0x0;
        }
        if (((DAT_140c60be8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60be8 = (code *)(*DAT_140c60928)(0x1be0b8e5);
            _DAT_140c60bf0 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60be8;
        if (DAT_140c60be8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x1be0b8e5,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x1be0b8e5,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080f660(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60bf8 = (code *)0x0;
        }
        if ((DAT_140c60bf8 != (code *)0x0) &&
            (_DAT_140c60c00 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60bf8 = (code *)0x0;
        }
        if (((DAT_140c60bf8 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60bf8 = (code *)(*DAT_140c60928)(0x2a0a350f);
            _DAT_140c60c00 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60bf8;
        if (DAT_140c60bf8 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x2a0a350f,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x2a0a350f,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080f7f0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60c08 = (code *)0x0;
        }
        if ((DAT_140c60c08 != (code *)0x0) &&
            (_DAT_140c60c10 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60c08 = (code *)0x0;
        }
        if (((DAT_140c60c08 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60c08 = (code *)(*DAT_140c60928)(0xe4715417);
            _DAT_140c60c10 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60c08;
        if (DAT_140c60c08 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xe4715417,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xe4715417,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080f980(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60c18 = (code *)0x0;
        }
        if ((DAT_140c60c18 != (code *)0x0) &&
            (_DAT_140c60c20 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60c18 = (code *)0x0;
        }
        if (((DAT_140c60c18 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60c18 = (code *)(*DAT_140c60928)(0xacc3da0a);
            _DAT_140c60c20 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60c18;
        if (DAT_140c60c18 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xacc3da0a,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xacc3da0a,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080fb10(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60c28 = (code *)0x0;
        }
        if ((DAT_140c60c28 != (code *)0x0) &&
            (_DAT_140c60c30 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60c28 = (code *)0x0;
        }
        if (((DAT_140c60c28 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60c28 = (code *)(*DAT_140c60928)(0x2d43fb31);
            _DAT_140c60c30 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60c28;
        if (DAT_140c60c28 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x2d43fb31,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x2d43fb31,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080fca0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60c38 = (code *)0x0;
        }
        if ((DAT_140c60c38 != (code *)0x0) &&
            (_DAT_140c60c40 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60c38 = (code *)0x0;
        }
        if (((DAT_140c60c38 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60c38 = (code *)(*DAT_140c60928)(0xa561fd7d);
            _DAT_140c60c40 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60c38;
        if (DAT_140c60c38 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xa561fd7d,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xa561fd7d,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080fe30(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60c48 = (code *)0x0;
        }
        if ((DAT_140c60c48 != (code *)0x0) &&
            (_DAT_140c60c50 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60c48 = (code *)0x0;
        }
        if (((DAT_140c60c48 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60c48 = (code *)(*DAT_140c60928)(0x6e042794);
            _DAT_140c60c50 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60c48;
        if (DAT_140c60c48 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0x6e042794,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0x6e042794,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14080ffc0(undefined8 param_1)

{
    code *pcVar1;
    longlong local_20;
    undefined8 local_18;
    int local_10;
    int local_c;

    local_20 = 0;
    local_c = 0;
    local_10 = FUN_14080b500(&local_20);
    if ((local_10 == 0) || (local_10 == -0xe)) {
        if (local_10 == -0xe) {
            DAT_140c60c58 = (code *)0x0;
        }
        if ((DAT_140c60c58 != (code *)0x0) &&
            (_DAT_140c60c60 != *(int *)(&DAT_140c60980 + (longlong)local_c * 4))) {
            DAT_140c60c58 = (code *)0x0;
        }
        if (((DAT_140c60c58 == (code *)0x0) && (local_20 != 0)) && (DAT_140c60928 != (code *)0x0)) {
            DAT_140c60c58 = (code *)(*DAT_140c60928)(0xc74925a0);
            _DAT_140c60c60 = *(int *)(&DAT_140c60980 + (longlong)local_c * 4);
        }
        pcVar1 = DAT_140c60c58;
        if (DAT_140c60c58 == (code *)0x0) {
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
            local_10 = -3;
        }
        else {
            local_18 = 0;
            if (DAT_140c60938 != (code *)0x0) {
                (*DAT_140c60938)(0xc74925a0,&local_18);
            }
            local_10 = (*pcVar1)(param_1);
            if (DAT_140c60940 != (code *)0x0) {
                (*DAT_140c60940)(0xc74925a0,local_18,local_10);
            }
            (&DAT_140c60970)[local_c] = (&DAT_140c60970)[local_c] + -1;
        }
    }
    return local_10;
}


